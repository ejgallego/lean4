/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module
prelude
public import Lean.Meta.Tactic.Replace
public import Lean.Meta.Tactic.Simp.Rewrite
public import Lean.Meta.Tactic.Simp.Diagnostics
public import Lean.Meta.Match.Value
public import Lean.Meta.MonadSimp
public import Lean.Util.CollectLooseBVars
import Lean.Meta.HaveTelescope
import Lean.PrettyPrinter
import Lean.ExtraModUses
public section
namespace Lean.Meta
namespace Simp

register_builtin_option backward.dsimp.proofs : Bool := {
    defValue := false
    descr    := "Let `dsimp` simplify proof terms"
  }


register_builtin_option debug.simp.check.have : Bool := {
    defValue := false
    descr    := "(simp) enable consistency checks for `have` telescope simplification"
  }

builtin_initialize congrHypothesisExceptionId : InternalExceptionId ←
  registerInternalExceptionId `congrHypothesisFailed

def throwCongrHypothesisFailed : MetaM α :=
  throw <| Exception.internal congrHypothesisExceptionId

/-- Return true if `e` is of the form `ofNat n` where `n` is a kernel Nat literal -/
def isOfNatNatLit (e : Expr) : Bool :=
  e.isAppOf ``OfNat.ofNat && e.getAppNumArgs >= 3 && (e.getArg! 1).isRawNatLit

/--
If `e` is a raw Nat literal and `OfNat.ofNat` is not in the list of declarations to unfold,
return an `OfNat.ofNat`-application.
-/
def foldRawNatLit (e : Expr) : SimpM Expr := do
  match e.rawNatLit? with
  | some n =>
    /- If `OfNat.ofNat` is marked to be unfolded, we do not pack orphan nat literals as `OfNat.ofNat` applications
        to avoid non-termination. See issue #788.  -/
    if (← readThe Simp.Context).isDeclToUnfold ``OfNat.ofNat then
      return e
    else
      return toExpr n
  | none   => return e

/-- Return true if `e` is of the form `ofScientific n b m` where `n` and `m` are kernel Nat literals. -/
def isOfScientificLit (e : Expr) : Bool :=
  e.isAppOfArity ``OfScientific.ofScientific 5 && (e.getArg! 4).isRawNatLit && (e.getArg! 2).isRawNatLit

/-- Return true if `e` is of the form `Char.ofNat n` where `n` is a kernel Nat literals. -/
def isCharLit (e : Expr) : Bool :=
  e.isAppOfArity ``Char.ofNat 1 && e.appArg!.isRawNatLit

/--
Unfold definition even if it is not marked as `@[reducible]`.
Remark: We never unfold irreducible definitions. Mathlib relies on that in the implementation of the
command `irreducible_def`.
-/
private def unfoldDefinitionAny? (e : Expr) : MetaM (Option Expr) := do
  if let .const declName _ := e.getAppFn then
    if (← isIrreducible declName) then
      return none
  unfoldDefinition? e (ignoreTransparency := true)

private def reduceProjFn? (e : Expr) : SimpM (Option Expr) := do
  matchConst e.getAppFn (fun _ => pure none) fun cinfo _ => do
    match (← getProjectionFnInfo? cinfo.name) with
    | none => return none
    | some projInfo =>
      /- Helper function for applying `reduceProj?` to the result of `unfoldDefinition?` -/
      let reduceProjCont? (e? : Option Expr) : SimpM (Option Expr) := do
        match e? with
        | none   => pure none
        | some e =>
          match (← withSimpMetaConfig <| reduceProj? e.getAppFn) with
          | some f => return some (mkAppN f e.getAppArgs)
          | none   => return none
      if projInfo.fromClass then
        -- `class` projection
        if (← getContext).isDeclToUnfold cinfo.name then
          /-
          If user requested `class` projection to be unfolded (e.g., `simp [X.x]`), we set transparency
          mode to `.instances` and invoke `unfoldDefinition?`.
          Recall that `unfoldDefinition?` has support for unfolding this kind of projection when
          transparency mode is `.instances`.

          Note: this unfolds the projection function but may leave a `.proj` node that cannot be further
          reduced. For example, given:
          ```
          def a' := 0; def b' := 0
          class X where x : Nat
          instance instX (n : Nat) : X where x := n
          ```
          `simp [X.x]` on `(instX a').x = (instX b').x` unfolds `X.x` to expose `.proj X 0 (instX a')`,
          but cannot reduce further because `instX a'` is not a constructor application at `.reducible`.
          The resulting goal `(instX a').1 = (instX b').1` is expected and reasonable: the user explicitly
          requested the unfolding, and the projection is stuck because `a'` and `b'` are semireducible.
          -/
          let e? ← withReducibleAndInstances <| unfoldDefinition? e
          if e?.isSome then
            recordSimpTheorem (.decl cinfo.name)
          return e?
        else
          /-
          Recall that class projections are **not** marked with `[reducible]` because we want them to be
          in "reducible canonical form". However, if we have a class projection of the form `Class.projFn (Class.mk ...)`,
          we want to reduce it. See issue #1869 for an example where this is important.
          -/
          unless e.getAppNumArgs > projInfo.numParams do
            return none
          let major := e.getArg! projInfo.numParams
          unless (← isConstructorApp major) do
            return none
          if backward.whnf.reducibleClassField.get (← getOptions) then
            /-
            When `backward.whnf.reducibleClassField` is `true`, `unfoldDefault` (in WHNF.lean)
            already reduces the `.proj` node during `unfoldDefinitionAny?`, so `reduceProjCont?`
            would discard the fully-reduced result because it expects a `.proj` head.
            We return the unfolded result directly; the dsimp traversal will revisit it
            (via `.visit`) and handle any remaining `.proj` nodes naturally.
            -/
            unfoldDefinitionAny? e
          else
            reduceProjCont? (← unfoldDefinitionAny? e)
      else
        -- `structure` projections
        reduceProjCont? (← unfoldDefinition? e)

private def reduceFVar (cfg : Config) (thms : SimpTheoremsArray) (e : Expr) : SimpM Expr := do
  let localDecl ← getFVarLocalDecl e
  if cfg.zetaDelta || thms.isLetDeclToUnfold e.fvarId! || localDecl.isImplementationDetail then
    if !cfg.zetaDelta && thms.isLetDeclToUnfold e.fvarId! then
      recordSimpTheorem (.fvar localDecl.fvarId)
    let some v := localDecl.value? | return e
    return v
  else
    return e

/--
  Return true if `declName` is the name of a definition of the form
  ```
  def declName ... :=
    match ... with
    | ...
  ```
-/
private partial def isMatchDef (declName : Name) : CoreM Bool := do
  let .defnInfo info ← getConstInfo declName | return false
  return go (← getEnv) info.value
where
  go (env : Environment) (e : Expr) : Bool :=
    if e.isLambda then
      go env e.bindingBody!
    else
      let f := e.getAppFn
      f.isConst && isMatcherCore env f.constName!

/--
Try to unfold `e`.
-/
private def unfold? (e : Expr) : SimpM (Option Expr) := do
  let f := e.getAppFn
  if !f.isConst then
    return none
  let fName := f.constName!
  let ctx ← getContext
  let rec unfoldDeclToUnfold? : SimpM (Option Expr) := do
    let options ← getOptions
    let cfg ← getConfig
    -- Support for issue #2042
    if cfg.unfoldPartialApp -- If we are unfolding partial applications, ignore issue #2042
       -- When smart unfolding is enabled, and `f` supports it, we don't need to worry about issue #2042
       || (smartUnfolding.get options && (← getEnv).contains (mkSmartUnfoldingNameFor fName)) then
      unfoldDefinitionAny? e
    else
      -- We are not unfolding partial applications, and `fName` does not have smart unfolding support.
      -- Thus, we must check whether the arity of the function >= number of arguments.
      let some cinfo := (← getEnv).find? fName | return none
      let some value := cinfo.value? | return none
      let arity := value.getNumHeadLambdas
      -- Partially applied function, return `none`. See issue #2042
      if arity > e.getAppNumArgs then return none
      unfoldDefinitionAny? e
  if (← isProjectionFn fName) then
    return none -- should be reduced by `reduceProjFn?`
  else if ctx.config.autoUnfold then
    if ctx.simpTheorems.isErased (.decl fName) then
      return none
    else if hasSmartUnfoldingDecl (← getEnv) fName then
      unfoldDefinitionAny? e
    else if (← isMatchDef fName) then
      let some value ← unfoldDefinitionAny? e | return none
      let .reduced value ← withSimpMetaConfig <| reduceMatcher? value | return none
      return some value
    else
      return none
  else if ctx.isDeclToUnfold fName then
    unfoldDeclToUnfold?
  else
    return none

private def reduceStep (e : Expr) : SimpM Expr := do
  let cfg ← getConfig
  let f := e.getAppFn
  if f.isMVar then
    return (← instantiateMVars e)
  withSimpMetaConfig do
  if cfg.beta then
    if f.isHeadBetaTargetFn false then
      return f.betaRev e.getAppRevArgs
  -- TODO: eta reduction
  if cfg.proj then
    match (← reduceProj? e) with
    | some e => return e
    | none =>
    match (← reduceProjFn? e) with
    | some e => return e
    | none   => pure ()
  if cfg.iota then
    match (← reduceRecMatcher? e) with
    | some e => return e
    | none   => pure ()
  if let .letE _ _ v b nondep := e then
    if cfg.zeta && (!nondep || cfg.zetaHave) then
      return expandLet b #[v] (zetaHave := cfg.zetaHave)
    else if cfg.zetaUnused && !b.hasLooseBVars then
      return consumeUnusedLet b
  match (← unfold? e) with
  | some e' =>
    trace[Meta.Tactic.simp.rewrite] "unfold {.ofConst e.getAppFn}, {e} ==> {e'}"
    recordSimpTheorem (.decl e.getAppFn.constName!)
    return e'
  | none => foldRawNatLit e

private partial def reduce (e : Expr) : SimpM Expr := withIncRecDepth do
  let e' ← reduceStep e
  if e' == e then
    return e'
  else
    trace[Debug.Meta.Tactic.simp] "reduce {e} => {e'}"
    reduce e'

instance : Inhabited (SimpM α) where
  default := fun _ _ _ => default

partial def lambdaTelescopeDSimp (e : Expr) (k : Array Expr → Expr → SimpM α) : SimpM α := do
  go #[] e
where
  go (xs : Array Expr) (e : Expr) : SimpM α := do
    match e with
    | .lam n d b c => withLocalDecl n c (← dsimp d) fun x => go (xs.push x) (b.instantiate1 x)
    | e => k xs e

/--
We use `withNewLemmas` whenever updating the local context.
-/
def withNewLemmas {α} (xs : Array Expr) (f : SimpM α) : SimpM α := do
  if (← getConfig).contextual then
    withFreshCache do
      let mut s ← getSimpTheorems
      let mut updated := false
      let ctx ← getContext
      for x in xs do
        if (← isProof x) then
          s ← s.addTheorem (.fvar x.fvarId!) x (config := ctx.indexConfig)
          updated := true
      if updated then
        withSimpTheorems s f
      else
        f
  else if (← getMethods).wellBehavedDischarge then
    -- See comment at `Methods.wellBehavedDischarge` to understand why
    -- we don't have to reset the cache
    f
  else
    withFreshCache do f

instance : MonadSimp SimpM where
  simp e := do
    let r ← simp e
    if r.expr == e then
      return .rfl
    else
      return .step r.expr (← r.getProof)
  dsimp := dsimp
  withNewLemmas := withNewLemmas

def simpProj (e : Expr) : SimpM Result := do
  match (← withSimpMetaConfig <| reduceProj? e) with
  | some e => return { expr := e }
  | none =>
    let s := e.projExpr!
    let motive? ← withLocalDeclD `s (← inferType s) fun s => do
      let p := e.updateProj! s
      if (← dependsOn (← inferType p) s.fvarId!) then
        return none
      else
        let motive ← mkLambdaFVars #[s] (← mkEq e p)
        if !(← isTypeCorrect motive) then
          return none
        else
          return some motive
    if let some motive := motive? then
      let r ← simp s
      let eNew := e.updateProj! r.expr
      match r.proof? with
      | none => return { expr := eNew }
      | some h =>
        let hNew ← mkEqNDRec motive (← mkEqRefl e) h
        return { expr := eNew, proof? := some hNew }
    else
      return { expr := (← dsimp e) }

def simpConst (e : Expr) : SimpM Result :=
  return { expr := (← reduce e) }

def simpLambda (e : Expr) : SimpM Result :=
  withParent e <| lambdaTelescopeDSimp e fun xs e => withNewLemmas xs do
    let r ← simp e
    r.addLambdas xs

def simpArrow (e : Expr) : SimpM Result := do
  trace[Debug.Meta.Tactic.simp] "arrow {e}"
  let p := e.bindingDomain!
  let q := e.bindingBody!
  let rp ← simp p
  trace[Debug.Meta.Tactic.simp] "arrow [{(← getConfig).contextual}] {p} [{← isProp p}] -> {q} [{← isProp q}]"
  if (← pure (← getConfig).contextual <&&> isProp p <&&> isProp q) then
    trace[Debug.Meta.Tactic.simp] "ctx arrow {rp.expr} -> {q}"
    withLocalDeclD e.bindingName! rp.expr fun h => withNewLemmas #[h] do
      let rq ← simp q
      match rq.proof? with
      | none    => mkImpCongr e rp rq
      | some hq =>
        let hq ← mkLambdaFVars #[h] hq
        /-
          We use the default reducibility setting at `mkImpDepCongrCtx` and `mkImpCongrCtx` because they use the theorems
          ```lean
          @implies_dep_congr_ctx : ∀ {p₁ p₂ q₁ : Prop}, p₁ = p₂ → ∀ {q₂ : p₂ → Prop}, (∀ (h : p₂), q₁ = q₂ h) → (p₁ → q₁) = ∀ (h : p₂), q₂ h
          @implies_congr_ctx : ∀ {p₁ p₂ q₁ q₂ : Prop}, p₁ = p₂ → (p₂ → q₁ = q₂) → (p₁ → q₁) = (p₂ → q₂)
          ```
          And the proofs may be from `rfl` theorems which are now omitted. Moreover, we cannot establish that the two
          terms are definitionally equal using `withReducible`.
          TODO (better solution): provide the problematic implicit arguments explicitly. It is more efficient and avoids this
          problem.
          -/
        if rq.expr.containsFVar h.fvarId! then
          return { expr := (← mkForallFVars #[h] rq.expr), proof? := (← withDefault <| mkImpDepCongrCtx (← rp.getProof) hq) }
        else
          return { expr := e.updateForallE! rp.expr rq.expr, proof? := (← withDefault <| mkImpCongrCtx (← rp.getProof) hq) }
  else
    mkImpCongr e rp (← simp q)

def simpForall (e : Expr) : SimpM Result := withParent e do
  trace[Debug.Meta.Tactic.simp] "forall {e}"
  if e.isArrow then
    simpArrow e
  else if (← isProp e) then
    /- The forall is a proposition. -/
    let domain := e.bindingDomain!
    if (← isProp domain) then
      /-
      The domain of the forall is also a proposition, and we can use `forall_prop_domain_congr`
      IF we can simplify the domain.
      -/
      let rd ← simp domain
      -- A proof of `p₁ = p₁` is dropped. The cast `h₁.substr a` below would otherwise survive inside
      -- proof arguments that `simp` does not visit, so the result would never be equal to the
      -- input and `visitPostContinue` would loop.
      let rd := if rd.expr == domain then { expr := domain } else rd
      if let some h₁ := rd.proof? then
        /- Using
        ```
        theorem forall_prop_domain_congr {p₁ p₂ : Prop} {q₁ : p₁ → Prop} {q₂ : p₂ → Prop}
            (h₁ : p₁ = p₂)
            (h₂ : ∀ a : p₂, q₁ (h₁.substr a) = q₂ a)
            : (∀ a : p₁, q₁ a) = (∀ a : p₂, q₂ a)
        ```
        Remark: we should consider whether we want to add congruence lemma support for arbitrary `forall`-expressions.
        Then, the theorem above can be marked as `@[congr]` and the following code deleted.
        -/
        let p₁ := domain
        let p₂ := rd.expr
        let q₁ := mkLambda e.bindingName! e.bindingInfo! p₁ e.bindingBody!
        let result ← withLocalDecl e.bindingName! e.bindingInfo! p₂ fun a => withNewLemmas #[a] do
          let prop := mkSort Level.zero
          let h₁_substr_a := mkApp6 (mkConst ``Eq.substr [Level.one]) prop (mkLambda `x .default prop (mkBVar 0)) p₂ p₁ h₁ a
          let q_h₁_substr_a := e.bindingBody!.instantiate1 h₁_substr_a
          let rb ← simp q_h₁_substr_a
          let h₂ ← mkLambdaFVars #[a] (← rb.getProof)
          let q₂ ← mkLambdaFVars #[a] rb.expr
          let result ← mkForallFVars #[a] rb.expr
          let proof := mkApp6 (mkConst ``forall_prop_domain_congr) p₁ p₂ q₁ q₂ h₁ h₂
          return { expr := result, proof? := proof }
        return result
    let domain ← dsimp domain
    withLocalDecl e.bindingName! e.bindingInfo! domain fun x => withNewLemmas #[x] do
      let b := e.bindingBody!.instantiate1 x
      let rb ← simp b
      let eNew ← mkForallFVars #[x] rb.expr
      match rb.proof? with
      | none   => return { expr := eNew }
      | some h => return { expr := eNew, proof? := (← mkForallCongr (← mkLambdaFVars #[x] h)) }
  else
    return { expr := (← dsimp e) }

/-- Adapter for `Meta.simpHaveTelescope` -/
def simpHaveTelescope (e : Expr) : SimpM Result := do
  -- **Note**: Eliminating unused-let declarations in a single pass may produce O(n^2) proofs.
  let zetaUnusedMode := if (← getConfig).zetaUnused then .singlePass else .no
  match (← Meta.simpHaveTelescope e zetaUnusedMode) with
  | .rfl => return { expr := e }
  | .step e' h =>
    if debug.simp.check.have.get (← getOptions) then
      check e'
      check h
    return { expr := e', proof? := h }

/--
Routine for simplifying `let` expressions.

If it is a `have`, we use `simpHaveTelescope` to simplify entire telescopes at once, to avoid quadratic behavior
arising from locally nameless expression representations.

We assume that dependent `let`s are dependent,
but if `Config.letToHave` is enabled then we attempt to transform it into a `have`.
If that does not change it, then it is only `dsimp`ed.
-/
def simpLet (e : Expr) : SimpM Result := do
  withTraceNode `Debug.Meta.Tactic.simp (fun _ => return m!"let{indentExpr e}") do
    assert! e.isLet
    /-
    Recall: `simpLet` is called after `reduceStep` is applied, so `simpLet` is not responsible for zeta reduction.
    Hence, the expression is a `let` or `have` that is not reducible in the current configuration.
    -/
    if e.letNondep! then
      simpHaveTelescope e
    else
      /-
      When `cfg.letToHave` is true, we use `letToHave` to decide whether or not this `let` is dependent.
      If it becomes a `have`, then we can jump right into simplifying the `have` telescope.
      -/
      let e ←
        if (← getConfig).letToHave then
          let eNew ← letToHave e
          if eNew.isLet && eNew.letNondep! then
            trace[Debug.Meta.Tactic.simp] "letToHave ==>{indentExpr eNew}"
            return ← simpHaveTelescope eNew
          pure eNew
        else
          pure e
      /-
      The `let` is dependent.
      We fall back to doing only definitional simplification.

      Note that for `let x := v; b`, if we had a rewrite `h : b = b'` given `x := v` in the local context,
      we could abstract `x` to get `(let x := v; h) : (let x := v; b = b')` and then use the fact that
      this type is definitionally equal to `(let x := v; b) = (let x := v; b')`.
      -/
      return { expr := (← dsimp e) }

private def dsimpReduce : DSimproc := fun e => do
  let mut eNew ← reduce e
  if eNew.isFVar then
    eNew ← reduceFVar (← getConfig) (← getSimpTheorems) eNew
  if eNew != e then return .visit eNew else return .done e

/-- Auxiliary `dsimproc` for not visiting proof terms. -/
private def doNotVisitProofs : DSimproc := fun e => do
  if ← isProof e then
    if !backward.dsimp.proofs.get (← getOptions) then
      return .done e
    else
      return .continue e
  else
    return .continue e

/-- Helper `dsimproc` for `doNotVisitOfNat` and `doNotVisitOfScientific` -/
private def doNotVisit (pred : Expr → Bool) (declName : Name) : DSimproc := fun e => do
  if pred e then
    if (← readThe Simp.Context).isDeclToUnfold declName then
      return .continue e
    else
      -- Users may have added a `[simp]` rfl theorem for the literal
      match (← (← getMethods).dpost e) with
      | .continue none => return .done e
      | r => return r
  else
    return .continue e

/--
Auxiliary `dsimproc` for not visiting `OfNat.ofNat` application subterms.
This is the `dsimp` equivalent of the approach used at `visitApp`.
Recall that we fold orphan raw Nat literals.
-/
private def doNotVisitOfNat : DSimproc := doNotVisit isOfNatNatLit ``OfNat.ofNat

/--
Auxiliary `dsimproc` for not visiting `OfScientific.ofScientific` application subterms.
-/
private def doNotVisitOfScientific : DSimproc := doNotVisit isOfScientificLit ``OfScientific.ofScientific

/--
Auxiliary `dsimproc` for not visiting `Char` literal subterms.
-/
private def doNotVisitCharLit : DSimproc := doNotVisit isCharLit ``Char.ofNat

set_option compiler.ignoreBorrowAnnotation true in
@[export lean_dsimp]
private partial def dsimpImpl (e : Expr) : SimpM Expr := do
  let cfg ← getConfig
  unless cfg.dsimp do
    return e
  let m ← getMethods
  let pre := m.dpre >> doNotVisitOfNat >> doNotVisitOfScientific >> doNotVisitCharLit >> doNotVisitProofs
  let post := m.dpost >> dsimpReduce
  withInDSimpWithCache fun cache => do
    transformWithCache e cache
      (usedLetOnly := cfg.zeta || cfg.zetaUnused)
      (skipInstances := !cfg.instances)
      (pre := pre)
      (post := post)

def visitFn (e : Expr) : SimpM Result := do
  let f := e.getAppFn
  let fNew ← simp f
  if fNew.expr == f then
    return { expr := e }
  else
    let args := e.getAppArgs
    let eNew := mkAppN fNew.expr args
    if fNew.proof?.isNone then return { expr := eNew }
    let mut proof ← fNew.getProof
    for arg in args do
      proof ← Meta.mkCongrFun proof arg
    return { expr := eNew, proof? := proof }

def congrDefault (e : Expr) : SimpM Result := do
  if let some result ← tryAutoCongrTheorem? e then
    result.mkEqTrans (← visitFn result.expr)
  else
    withParent e <| simpAppUsingCongr e

private partial def isBoolCondition (p : Expr) : Bool :=
  if p.isAppOfArity ``Not 1 then
    isBoolCondition p.appArg!
  else
    p.isAppOfArity ``Eq 3 && (p.getArg! 0 3).isConstOf ``Bool

private def addBoolReflectionLemma (s : SimpTheorems) (lemma : Name) (inv := false) : MetaM SimpTheorems := do
  let info ← getConstVal lemma
  let proof := mkConst lemma (info.levelParams.map mkLevelParam)
  -- Keep preprocessing proofs inline across well-founded preprocessing's environment rollback.
  let proof := mkExpectedPropHint proof info.type
  s.add (.decl lemma (inv := inv)) info.levelParams.toArray proof (inv := inv)

/-- Recover a decision's proposition and instance without reducing the instance. -/
def getBoolDecision? (c : Expr) : MetaM (Option (Expr × Expr)) := do
  let d ← match c with
    | .proj ``Decidable 0 d => pure d
    | _ =>
      unless c.isAppOfArity ``Decidable.decide 2 do return none
      pure c.getAppArgs[1]!
  let type ← inferType d
  let type ← if type.isAppOfArity ``Decidable 1 then pure type else whnfR type
  unless type.isAppOfArity ``Decidable 1 do return none
  return some (type.appArg!, d)

/-- Remove exact Boolean comparisons of decision projections or `decide`, including under `Not`.
Other Boolean expressions and their represented propositions are not unfolded. -/
partial def normalizeDecisionCondition? (condition : Expr) : MetaM (Option Result) := do
  if condition.isAppOfArity ``Not 1 then
    let some r ← normalizeDecisionCondition? condition.appArg! | return none
    let proof ← Meta.mkCongrArg (mkConst ``Not) (← r.getProof)
    return some { expr := mkNot r.expr, proof? := some proof }
  let_expr Eq α c value := condition | return none
  unless α.isConstOf ``Bool do return none
  unless value.isConstOf ``Bool.true || value.isConstOf ``Bool.false do return none
  let some (p, d) ← getBoolDecision? c | return none
  let positive := value.isConstOf ``Bool.true
  let target := if positive then p else mkNot p
  let forward := mkApp2 (mkConst (if positive then ``of_decide_eq_true else ``of_decide_eq_false)) p d
  let backward := mkApp2 (mkConst (if positive then ``decide_eq_true else ``decide_eq_false)) p d
  let iff := mkApp4 (mkConst ``Iff.intro) condition target forward backward
  let result : Result := { expr := target, proof? := mkApp3 (mkConst ``propext) condition target iff }
  if let some nested ← normalizeDecisionCondition? target then
    return some (← result.mkEqTrans nested)
  return some result

/-- Recover a decision's original proposition, or normalize other Boolean conditions by reflection. -/
def normalizeBoolCondition (p : Expr) : MetaM Result := do
  if let some r ← normalizeDecisionCondition? p then
    let r := { r with expr := r.expr.headBeta }
    if let .forallE _ domain body _ := r.expr then
      if body.isFalse && (← isProp domain) then
        return { r with expr := mkNot domain }
    return r
  let env ← getEnv
  let mut s : SimpTheorems := {}
  let mut available := false
  if env.contains ``decide_implies then
    s ← addBoolReflectionLemma s ``decide_implies (inv := true)
    available := true
  for lemma in [``decide_eq_true_eq, ``decide_eq_false_iff_not, ``Nat.beq_eq, ``beq_iff_eq,
      ``Nat.ble_eq, ``Nat.blt_eq, ``Nat.succ_le_iff, ``Bool.and_eq_true, ``Bool.or_eq_true,
      ``Bool.not_eq_true', ``Bool.eq_false_iff, ``ne_eq, ``Decidable.not_not,
      ``not_true_eq_false, ``not_false_eq_true] do
    if env.contains lemma then
      s ← addBoolReflectionLemma s lemma
      available := true
  unless available do return { expr := p }
  let ctx ← Simp.mkContext (simpTheorems := #[s])
    (config := { Simp.neutralConfig with dsimp := false })
  let r := (← SimpM.run ctx {} (mkDefaultMethodsCore #[]) (simp p)).1
  if let .forallE _ domain body _ := r.expr then
    if body.isFalse && (← isProp domain) then
      return { r with expr := mkApp (mkConst ``Not) domain }
  return r

private partial def withBoolConditionLemmas (xs : Array Expr)
    (k : Array Expr → SimpM α) : SimpM α :=
  go 0 #[]
where
  go (i : Nat) (derived : Array Expr) : SimpM α := do
    if h : i < xs.size then
      let x := xs[i]
      let p ← inferType x
      if isBoolCondition p then
        let r ← normalizeBoolCondition p
        if r.expr != p then
          let value ← mkEqMP (← r.getProof) x
          return ← withLetDecl (← mkFreshUserName `h) r.expr value fun h =>
            go (i + 1) (derived.push h)
      go (i + 1) derived
    else
      k derived

/-- Process the given congruence theorem hypothesis. Return true if it made "progress". -/
def processCongrHypothesis (h : Expr) (hType : Expr) (boolConditions := false) : SimpM Bool := do
  forallTelescopeReducing hType fun xs hType => do
    let withConditions := if boolConditions then withBoolConditionLemmas xs else fun k => k #[]
    withConditions fun derived => withNewLemmas (xs ++ derived) do
      let lhs ← instantiateMVars hType.appFn!.appArg!
      let r ← simp lhs
      let rhs := hType.appArg!
      rhs.withApp fun m zs => do
        let val ← mkLambdaFVars zs (← mkLetFVars derived r.expr)
        unless (← withSimpMetaConfig <| isDefEq m val) do
          throwCongrHypothesisFailed
        let mut proof ← r.getProof
        if hType.isAppOf ``Iff then
          try proof ← mkIffOfEq proof
          catch _ => throwCongrHypothesisFailed
        proof ← mkLetFVars derived proof
        unless (← isDefEq h (← mkLambdaFVars xs proof)) do
          throwCongrHypothesisFailed
        /- We used to return `false` if `r.proof? = none` (i.e., an implicit `rfl` proof) because we
            assumed `dsimp` would also be able to simplify the term, but this is not true
            for non-trivial user-provided theorems.
            Example:
            ```
            @[congr] theorem image_congr {f g : α → β} {s : Set α} (h : ∀ a, mem a s → f a = g a) : image f s = image g s :=
            ...

            example {Γ: Set Nat}: (image (Nat.succ ∘ Nat.succ) Γ) = (image (fun a => a.succ.succ) Γ) := by
              simp only [Function.comp_apply]
            ```
            `Function.comp_apply` is a `rfl` theorem, but `dsimp` will not apply it because the composition
            is not fully applied. See comment at issue #1113

            Thus, we have an extra check now if `xs.size > 0`. TODO: refine this test.
        -/
        return r.proof?.isSome || (xs.size > 0 && lhs != r.expr)

/-- Try to rewrite `e` children using the given congruence theorem -/
def trySimpCongrTheorem? (c : SimpCongrTheorem) (e : Expr) : SimpM (Option Result) := withNewMCtxDepth do withParent e do
  recordCongrTheorem c.theoremName
  trace[Debug.Meta.Tactic.simp.congr] "{c.theoremName}, {e}"
  let thm ← mkConstWithFreshMVarLevels c.theoremName
  let thmType ← inferType thm
  let thmHasBinderNameHint := thmType.hasBinderNameHint
  let (xs, bis, type) ← forallMetaTelescopeReducing thmType
  if c.hypothesesPos.any (· ≥ xs.size) then
    return none
  let isIff := type.isAppOf ``Iff
  let lhs := type.appFn!.appArg!
  let rhs := type.appArg!
  let numArgs := lhs.getAppNumArgs
  let mut e := e
  let mut extraArgs := #[]
  if e.getAppNumArgs > numArgs then
    let args := e.getAppArgs
    e := mkAppN e.getAppFn args[*...numArgs]
    extraArgs := args[numArgs...*].toArray
  if (← withSimpMetaConfig <| isDefEq lhs e) then
    let mut modified := false
    for i in c.hypothesesPos do
      let h := xs[i]!
      let hType ← instantiateMVars (← inferType h)
      let hType ← if thmHasBinderNameHint then hType.resolveBinderNameHint else pure hType
      try
        if (← processCongrHypothesis h hType (boolConditions := c.theoremName == ``Bool.cond_congr)) then
          modified := true
      catch _ =>
        trace[Meta.Tactic.simp.congr] "processCongrHypothesis {c.theoremName} failed {hType}"
        -- Remark: we don't need to check ex.isMaxRecDepth anymore since `try .. catch ..`
        -- does not catch runtime exceptions by default.
        return none
    unless modified do
      trace[Meta.Tactic.simp.congr] "{c.theoremName} not modified"
      return none
    unless (← synthesizeArgs (.decl c.theoremName) bis xs) do
      trace[Meta.Tactic.simp.congr] "{c.theoremName} synthesizeArgs failed"
      return none
    let eNew ← instantiateMVars rhs
    let mut proof ← instantiateMVars (mkAppN thm xs)
    if isIff then
      try proof ← mkAppM ``propext #[proof]
      catch _ => return none
    if (← hasAssignableMVar proof <||> hasAssignableMVar eNew) then
      trace[Meta.Tactic.simp.congr] "{c.theoremName} has unassigned metavariables"
      return none
    congrArgs { expr := eNew, proof? := proof } extraArgs
  else
    return none

def congr (e : Expr) : SimpM Result := do
  let f := e.getAppFn
  if f.isConst then
    let congrThms ← getSimpCongrTheorems
    let cs := congrThms.get f.constName!
    for c in cs do
      match (← trySimpCongrTheorem? c e) with
      | none   => pure ()
      | some r => return r
    congrDefault e
  else
    congrDefault e

private def simpCond? (e : Expr) : SimpM (Option Result) := withParent e do
  let_expr f@cond α c tb eb ← e | return none
  let env ← getEnv
  unless env.contains ``Bool.cond_eq_left || env.contains ``Bool.cond_eq_right do
    return none
  let condition := mkApp3 (mkConst ``Eq [1]) (mkConst ``Bool) c (mkConst ``Bool.true)
  let projected? ← getBoolDecision? c
  let normalized ← if projected?.isSome then normalizeBoolCondition condition
    else pure ({ expr := condition } : Result)
  let propResult ← simp normalized.expr
  let primary ← normalized.mkEqTrans propResult
  let reflected ← normalizeBoolCondition primary.expr
  let mut r ← primary.mkEqTrans reflected
  if projected?.isNone && !r.expr.isTrue && !r.expr.isFalse && reflected.expr != primary.expr then
    let selected ← simp reflected.expr
    let candidate ← r.mkEqTrans selected
    let candidate ← candidate.mkEqTrans (← normalizeBoolCondition candidate.expr)
    if candidate.expr.isTrue || candidate.expr.isFalse then
      r := candidate
  if r.expr.isTrue then
    unless (← getEnv).contains ``Bool.cond_eq_left do return none
    let h ← mkEqMPR (← r.getProof) (mkConst ``True.intro)
    let pr := mkApp5 (mkConst ``Bool.cond_eq_left f.constLevels!) α c h tb eb
    return some (← ({ expr := tb, proof? := pr, cache := r.cache } : Result).mkEqTrans (← simp tb))
  if r.expr.isFalse then
    unless (← getEnv).contains ``Bool.cond_eq_right do return none
    let h ← withLocalDeclD `h condition fun h => do
      mkLambdaFVars #[h] (← mkEqMP (← r.getProof) h)
    let pr := mkApp5 (mkConst ``Bool.cond_eq_right f.constLevels!) α c h tb eb
    return some (← ({ expr := eb, proof? := pr, cache := r.cache } : Result).mkEqTrans (← simp eb))
  if propResult.expr != normalized.expr && env.contains `Decidable.decide_congr then
    let view? ← match projected? with
      | some view => pure (some view)
      | none =>
        if env.contains ``Bool.decide_eq_true then
          pure (some (condition, mkApp2 (mkConst ``Bool.decEq) c (mkConst ``Bool.true)))
        else
          pure none
    if let some (p, d) := view? then
      if projected?.isSome && !(← isDefEq normalized.expr p) then return none
      let q := propResult.expr
      let h ← if projected?.isSome then propResult.getProof else
        (← normalized.mkEqTrans propResult).getProof
      let d' ← match ← trySynthInstance (mkApp (mkConst ``Decidable) q) with
        | .some d' => pure d'
        | _ => mkEqMP (← Meta.mkCongrArg (mkConst ``Decidable) h) d
      let rawBool? := if env.contains ``Bool.decide_eq_true then
        match q.eq? with
        | some (α, b, value) =>
          if α.isConstOf ``Bool && value.isConstOf ``Bool.true then some b else none
        | none => none
      else none
      let c' := rawBool?.getD (mkProj ``Decidable 0 d')
      if c' == c then return none
      let hc := mkApp5 (mkConst `Decidable.decide_congr) p q h d d'
      let hc ← if projected?.isSome then pure hc else
        mkEqTrans (← mkEqSymm (mkApp2 (mkConst ``Bool.decide_eq_true) c d)) hc
      let hc ← if let some b := rawBool? then
        mkEqTrans hc (mkApp2 (mkConst ``Bool.decide_eq_true) b d')
      else pure hc
      let guard : Result := { expr := c', proof? := hc, cache := propResult.cache }
      let guard ← guard.mkEqTrans (← simp c')
      if guard.expr == c then
        let result ← congr e
        let cache := guard.cache && result.cache
        return some (if result.expr == e then { expr := e, cache } else { result with cache })
      let proof := mkApp6 (mkConst ``Bool.cond_cond_congr f.constLevels!) α c guard.expr (← guard.getProof) tb eb
      let result : Result := { expr := mkApp4 f α guard.expr tb eb, proof? := proof, cache := guard.cache }
      -- Revisit arguments without reconstructing the conditional's guard again.
      let result ← result.mkEqTrans (← congr result.expr)
      return some (if result.expr == e then { expr := e, cache := result.cache } else result)
  return none

def simpApp (e : Expr) : SimpM Result := do
  if isOfNatNatLit e || isOfScientificLit e || isCharLit e then
    -- Recall that we fold "orphan" kernel Nat literals `n` into `OfNat.ofNat n`
    return { expr := e }
  else if e.isAppOf ``cond && e.getAppNumArgs >= 4 then
    let args := e.getAppArgs
    let condFn := mkAppN e.getAppFn args[:4]
    if let some r ← simpCond? condFn then
      if args.size == 4 then return r
      let applied ← r.addExtraArgs args[4:]
      let applied := { applied with cache := r.cache }
      return ← applied.mkEqTrans (← simp applied.expr)
    congr e
  else
    congr e

def simpStep (e : Expr) : SimpM Result := do
  match e with
  | .mdata m e   => let r ← simp e; return { r with expr := mkMData m r.expr }
  | .proj ..     => simpProj e
  | .app ..      => simpApp e
  | .lam ..      => simpLambda e
  | .forallE ..  => simpForall e
  | .letE ..     => simpLet e
  | .const ..    => simpConst e
  | .bvar ..     => unreachable!
  | .sort ..     => return { expr := e }
  | .lit ..      => return { expr := e }
  | .mvar ..     => return { expr := (← instantiateMVars e) }
  | .fvar ..     => return { expr := (← reduceFVar (← getConfig) (← getSimpTheorems) e) }

def cacheResult (e : Expr) (cfg : Config) (r : Result) : SimpM Result := do
  if cfg.memoize && r.cache then
    modify fun s => { s with cache := s.cache.insert e r }
  return r

partial def simpLoop (e : Expr) : SimpM Result := withIncRecDepth do
  let cfg ← getConfig
  if cfg.memoize then
    let cache := (← get).cache
    if let some result := cache.find? e then
      return result
  if (← get).numSteps > cfg.maxSteps then
    throwError "`simp` failed: maximum number of steps exceeded"
  else
    checkSystem "simp"
    modify fun s => { s with numSteps := s.numSteps + 1 }
    match (← pre e) with
    | .done r  => cacheResult e cfg r
    | .visit r => cacheResult e cfg (← r.mkEqTrans (← simpLoop r.expr))
    | .continue none => visitPreContinue cfg { expr := e }
    | .continue (some r) => visitPreContinue cfg r
where
  visitPreContinue (cfg : Config) (r : Result) : SimpM Result := do
    let eNew ← reduceStep r.expr
    if eNew != r.expr then
      trace[Debug.Meta.Tactic.simp] "reduceStep (pre) {e} => {eNew}"
      let r := { r with expr := eNew }
      cacheResult e cfg (← r.mkEqTrans (← simpLoop r.expr))
    else
      let r ← r.mkEqTrans (← simpStep r.expr)
      visitPost cfg r
  visitPost (cfg : Config) (r : Result) : SimpM Result := do
    match (← post r.expr) with
    | .done r' => cacheResult e cfg (← r.mkEqTrans r')
    | .continue none => visitPostContinue cfg r
    | .visit r' | .continue (some r') => visitPostContinue cfg (← r.mkEqTrans r')
  visitPostContinue (cfg : Config) (r : Result) : SimpM Result := do
    let mut r := r
    unless cfg.singlePass || e == r.expr do
      r ← r.mkEqTrans (← simpLoop r.expr)
    cacheResult e cfg r

set_option compiler.ignoreBorrowAnnotation true in
@[export lean_simp]
def simpImpl (e : Expr) : SimpM Result := withIncRecDepth do
  if (← isProof e) then
    return { expr := e }
  trace[Meta.Tactic.simp.heads] "{repr e.toHeadIndex}"
  simpLoop e

@[inline] def withCatchingRuntimeEx (x : SimpM α) : SimpM α := do
  if (← getConfig).catchRuntime then
    tryCatchRuntimeEx x
      fun ex => do
        reportDiag (← get).diag
        if ex.isRuntime then
          throwNestedTacticEx `simp ex
        else
          throw ex
  else
    x

/--
For `rfl` theorems and simprocs, there might not be an explicit reference in the proof term, so
we record (all non-builtin) usages explicitly.
-/
private def recordSimpUses (s : State) : MetaM Unit := do
  for (thm, _) in s.usedTheorems.map do
    if let .decl declName .. := thm then
      if !(← isBuiltinSimproc declName) then
        recordExtraModUseFromDecl (isMeta := false) declName

def mainCore (e : Expr) (ctx : Context) (s : State := {}) (methods : Methods := {}) : MetaM (Result × State) := do
  let (r, s) ← SimpM.run ctx s methods <| withCatchingRuntimeEx <| simp e
  recordSimpUses s
  return (r, s)

def main (e : Expr) (ctx : Context) (stats : Stats := {}) (methods : Methods := {}) : MetaM (Result × Stats) := do
  let (r, s) ← mainCore e ctx { stats with } methods
  return (r, { s with })

def dsimpMainCore (e : Expr) (ctx : Context) (s : State := {}) (methods : Methods := {}) : MetaM (Expr × State) := do
  let (r, s) ← SimpM.run ctx s methods <| withCatchingRuntimeEx <| dsimp e
  recordSimpUses s
  return (r, s)

def dsimpMain (e : Expr) (ctx : Context) (stats : Stats := {}) (methods : Methods := {}) : MetaM (Expr × Stats) := do
  let (r, s) ← dsimpMainCore e ctx { stats with } methods
  return (r, { s with })

end Simp
open Simp (SimprocsArray Stats)

def simpCore (e : Expr) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (s : Simp.State := {}) : MetaM (Simp.Result × Simp.State) := do profileitM Exception "simp" (← getOptions) do
  match discharge? with
  | none   => Simp.mainCore e ctx s (methods := Simp.mkDefaultMethodsCore simprocs)
  | some d => Simp.mainCore e ctx s (methods := Simp.mkMethods simprocs d (wellBehavedDischarge := false))

def simp (e : Expr) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (stats : Stats := {}) : MetaM (Simp.Result × Stats) := do profileitM Exception "simp" (← getOptions) do
  let (r, s) ← simpCore e ctx simprocs discharge? { stats with }
  return (r, { s with })

def dsimp (e : Expr) (ctx : Simp.Context) (simprocs : SimprocsArray := #[])
    (stats : Stats := {}) : MetaM (Expr × Stats) := do profileitM Exception "dsimp" (← getOptions) do
  Simp.dsimpMain e ctx stats (methods := Simp.mkDefaultMethodsCore simprocs )

/-- See `simpTarget`. This method assumes `mvarId` is not assigned, and we are already using `mvarId`s local context. -/
def simpTargetCore (mvarId : MVarId) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (mayCloseGoal := true) (stats : Stats := {}) : MetaM (Option MVarId × Stats) := do
  let target ← instantiateMVars (← mvarId.getType)
  let (r, stats) ← simp target ctx simprocs discharge? stats
  if mayCloseGoal && r.expr.isTrue then
    match r.proof? with
    | some proof => mvarId.assign (← mkOfEqTrue proof)
    | none => mvarId.assign (mkConst ``True.intro)
    return (none, stats)
  else
    return (← applySimpResultToTarget mvarId target r, stats)

/--
  Simplify the given goal target (aka type). Return `none` if the goal was closed. Return `some mvarId'` otherwise,
  where `mvarId'` is the simplified new goal. -/
def simpTarget (mvarId : MVarId) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (mayCloseGoal := true) (stats : Stats := {}) : MetaM (Option MVarId × Stats) :=
  mvarId.withContext do
    mvarId.checkNotAssigned `simp
    simpTargetCore mvarId ctx simprocs discharge? mayCloseGoal stats

/--
Applies the result `r` for `type` (which is inhabited by `val`). Returns `none` if the goal was closed. Returns `some (val', type')`
otherwise, where `val' : type'` and `type'` is the simplified `type`.

This method assumes `mvarId` is not assigned, and we are already using `mvarId`s local context. -/
def applySimpResult (mvarId : MVarId) (val : Expr) (type : Expr) (r : Simp.Result) (mayCloseGoal := true) : MetaM (Option (Expr × Expr)) := do
  if mayCloseGoal && r.expr.isFalse then
    match r.proof? with
    | some eqProof => mvarId.assign (← mkFalseElim (← mvarId.getType) (mkApp4 (mkConst ``Eq.mp [Level.zero]) type r.expr eqProof val))
    | none => mvarId.assign (← mkFalseElim (← mvarId.getType) val)
    return none
  else
    match r.proof? with
    | some eqProof =>
      let u ← getLevel type
      return some (mkApp4 (mkConst ``Eq.mp [u]) type r.expr eqProof val, r.expr)
    | none =>
      if r.expr != type then
        return some ((← mkExpectedTypeHint val r.expr), r.expr)
      else
        return some (val, r.expr)

def applySimpResultToFVarId (mvarId : MVarId) (fvarId : FVarId) (r : Simp.Result) (mayCloseGoal : Bool) : MetaM (Option (Expr × Expr)) := do
  let localDecl ← fvarId.getDecl
  applySimpResult mvarId (mkFVar fvarId) localDecl.type r mayCloseGoal

/--
  Simplify `prop` (which is inhabited by `proof`). Return `none` if the goal was closed. Return `some (proof', prop')`
  otherwise, where `proof' : prop'` and `prop'` is the simplified `prop`.

  This method assumes `mvarId` is not assigned, and we are already using `mvarId`s local context. -/
def simpStep (mvarId : MVarId) (proof : Expr) (prop : Expr) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (mayCloseGoal := true) (stats : Stats := {}) : MetaM (Option (Expr × Expr) × Stats) := do
  let (r, stats) ← simp prop ctx simprocs discharge? stats
  return (← applySimpResult mvarId proof prop r (mayCloseGoal := mayCloseGoal), stats)

def applySimpResultToLocalDeclCore (mvarId : MVarId) (fvarId : FVarId) (r : Option (Expr × Expr)) : MetaM (Option (FVarId × MVarId)) := do
  match r with
  | none => return none
  | some (value, type') =>
    let localDecl ← fvarId.getDecl
    if localDecl.type != type' then
      let mvarId ← mvarId.assert localDecl.userName type' value
      let mvarId ← mvarId.tryClear localDecl.fvarId
      let (fvarId, mvarId) ← mvarId.intro1P
      return some (fvarId, mvarId)
    else
      return some (fvarId, mvarId)

/--
  Simplify `simp` result to the given local declaration. Return `none` if the goal was closed.
  This method assumes `mvarId` is not assigned, and we are already using `mvarId`s local context. -/
def applySimpResultToLocalDecl (mvarId : MVarId) (fvarId : FVarId) (r : Simp.Result) (mayCloseGoal : Bool) : MetaM (Option (FVarId × MVarId)) := do
  if r.proof?.isNone then
    -- New result is definitionally equal to input. Thus, we can avoid creating a new variable if there are dependencies
    let mvarId ← mvarId.replaceLocalDeclDefEq fvarId r.expr
    if mayCloseGoal && r.expr.isFalse then
      mvarId.assign (← mkFalseElim (← mvarId.getType) (mkFVar fvarId))
      return none
    else
      return some (fvarId, mvarId)
  else
    applySimpResultToLocalDeclCore mvarId fvarId (← applySimpResultToFVarId mvarId fvarId r mayCloseGoal)

def simpLocalDecl (mvarId : MVarId) (fvarId : FVarId) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (mayCloseGoal := true) (stats : Stats := {}) : MetaM (Option (FVarId × MVarId) × Stats) := do
  mvarId.withContext do
    mvarId.checkNotAssigned `simp
    let type ← instantiateMVars (← fvarId.getType)
    let (r, stats) ← simpStep mvarId (mkFVar fvarId) type ctx simprocs discharge? mayCloseGoal stats
    return (← applySimpResultToLocalDeclCore mvarId fvarId r, stats)

def simpGoal (mvarId : MVarId) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (simplifyTarget : Bool := true) (fvarIdsToSimp : Array FVarId := #[])
    (stats : Stats := {}) : MetaM (Option (Array FVarId × MVarId) × Stats) := do
  mvarId.withContext do
    mvarId.checkNotAssigned `simp
    let mut mvarIdNew := mvarId
    let mut toAssert := #[]
    let mut replaced := #[]
    let mut stats := stats
    for fvarId in fvarIdsToSimp do
      let localDecl ← fvarId.getDecl
      let type ← instantiateMVars localDecl.type
      let ctx := ctx.setSimpTheorems <| ctx.simpTheorems.eraseTheorem (.fvar localDecl.fvarId)
      let (r, stats') ← simp type ctx simprocs discharge? stats
      stats := stats'
      match r.proof? with
      | some _ => match (← applySimpResult mvarIdNew (mkFVar fvarId) type r) with
        | none => return (none, stats)
        | some (value, type) => toAssert := toAssert.push { userName := localDecl.userName, type := type, value := value }
      | none =>
        if r.expr.isFalse then
          mvarIdNew.assign (← mkFalseElim (← mvarIdNew.getType) (mkFVar fvarId))
          return (none, stats)
        -- TODO: if there are no forwards dependencies we may consider using the same approach we used when `r.proof?` is a `some ...`
        -- Reason: it introduces a `mkExpectedTypeHint`
        mvarIdNew ← mvarIdNew.replaceLocalDeclDefEq fvarId r.expr
        replaced := replaced.push fvarId
    if simplifyTarget then
      match (← simpTarget mvarIdNew ctx simprocs discharge? (stats := stats)) with
      | (none, stats') => return (none, stats')
      | (some mvarIdNew', stats') => mvarIdNew := mvarIdNew'; stats := stats'
    let (fvarIdsNew, mvarIdNew') ← mvarIdNew.assertHypotheses toAssert
    mvarIdNew := mvarIdNew'
    let toClear := fvarIdsToSimp.filter fun fvarId => !replaced.contains fvarId
    mvarIdNew ← mvarIdNew.tryClearMany toClear
    if ctx.config.failIfUnchanged && mvarId == mvarIdNew then
      throwError "`simp` made no progress"
    return (some (fvarIdsNew, mvarIdNew), stats)

def simpTargetStar (mvarId : MVarId) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (stats : Stats := {}) : MetaM (TacticResultCNM × Stats) := mvarId.withContext do
  let mut ctx := ctx
  for h in (← getPropHyps) do
    let localDecl ← h.getDecl
    let proof  := localDecl.toExpr
    let simpTheorems ← ctx.simpTheorems.addTheorem (.fvar h) proof (config := ctx.indexConfig)
    ctx := ctx.setSimpTheorems simpTheorems
  match (← simpTarget mvarId ctx simprocs discharge? (stats := stats)) with
  | (none, stats) => return (TacticResultCNM.closed, stats)
  | (some mvarId', stats') =>
    if (← mvarId.getType) == (← mvarId'.getType) then
      return (TacticResultCNM.noChange, stats)
    else
      return (TacticResultCNM.modified mvarId', stats')

def dsimpGoal (mvarId : MVarId) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (simplifyTarget : Bool := true) (fvarIdsToSimp : Array FVarId := #[])
    (stats : Stats := {}) : MetaM (Option MVarId × Stats) := do
   mvarId.withContext do
    mvarId.checkNotAssigned `simp
    let mut mvarIdNew := mvarId
    let mut stats : Stats := stats
    for fvarId in fvarIdsToSimp do
      let type ← instantiateMVars (← fvarId.getType)
      let (typeNew, stats') ← dsimp type ctx simprocs
      stats := stats'
      if typeNew.isFalse then
        mvarIdNew.assign (← mkFalseElim (← mvarIdNew.getType) (mkFVar fvarId))
        return (none, stats)
      if typeNew != type then
        mvarIdNew ← mvarIdNew.replaceLocalDeclDefEq fvarId typeNew
    if simplifyTarget then
      let target ← mvarIdNew.getType
      let (targetNew, stats') ← dsimp target ctx simprocs stats
      stats := stats'
      if targetNew.isTrue then
        mvarIdNew.assign (mkConst ``True.intro)
        return (none, stats)
      if let some (_, lhs, rhs) := targetNew.consumeMData.eq? then
        if (← withReducible <| isDefEq lhs rhs) then
          mvarIdNew.assign (← mkEqRefl lhs)
          return (none, stats)
      if target != targetNew then
        mvarIdNew ← mvarIdNew.replaceTargetDefEq targetNew
      pure () -- FIXME: bug in do notation if this is removed?
    if ctx.config.failIfUnchanged && mvarId == mvarIdNew then
      throwError "`dsimp` made no progress"
    return (some mvarIdNew, stats)

end Lean.Meta
