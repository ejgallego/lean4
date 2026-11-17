module
public import Lean
public meta import Lean
public meta import Lean.Meta.Sym.Pattern
public meta import Lean.Meta.Sym.Simp.Theorems

/-!
Symbolic simplification (`Sym.Simp`) and `cbv` on conditionals: guards are simplified through
the proposition hidden in the decision's type without evaluating unresolved instances, only the
selected branch is visited, context dependency is retained, and `cbv` respects opaque decisions.
-/

namespace IfCondSym

open Lean Meta Elab Tactic

elab "simp_if_bool_sym" : tactic => do
  let rewrite ← Sym.mkSimprocFor #[``Nat.add_zero] Sym.Simp.dischargeSimpSelf
  let methods : Sym.Simp.Methods := {
    pre := Sym.Simp.simpControl
    post := Sym.Simp.evalGround >> rewrite
  }
  liftMetaTactic1 fun goal => Sym.SymM.run do
    let goal ← Sym.preprocessMVar goal
    (← Sym.simpGoal goal methods).toOption

example (a b : Nat) : (if True then a else b) = a := by simp_if_bool_sym
example (a b : Nat) : (if False then a else b) = b := by simp_if_bool_sym
example (f g : Nat → Nat) (a : Nat) :
    (if a + 0 = a then f else g) a = f a := by simp_if_bool_sym
example (f g : Nat → Nat) (a : Nat) :
    (if a + 0 ≠ a then f else g) a = g a := by simp_if_bool_sym

example (a b : Nat) :
    (if a + 0 = b then a + 0 else b + 0) = (if a = b then a else b) := by
  simp_if_bool_sym
  guard_target =~ (if a = b then a + 0 else b + 0) = (if a = b then a else b)
  split <;> simp_all

-- A changed guard may lack a new Decidable instance; keep the branch barrier and cache dependency.
run_meta do
  withLocalDeclD `p (mkSort .zero) fun p => do
  withLocalDeclD `q (mkSort .zero) fun q => do
  withLocalDecl `inst .instImplicit (mkApp (mkConst ``Decidable) p) fun inst => do
  withLocalDeclD `h (← mkEq p q) fun h => do
  withLocalDeclD `a (mkConst ``Nat) fun a => do
  withLocalDeclD `b (mkConst ``Nat) fun b => do
    Sym.SymM.run do
      let p ← Sym.shareCommon p
      let q ← Sym.shareCommon q
      let h ← Sym.shareCommon h
      let a ← Sym.shareCommon a
      let b ← Sym.shareCommon b
      let positive ← withLocalDeclD `hp p fun hp => mkLambdaFVars #[hp] a
      let negative ← withLocalDeclD `hn (mkNot p) fun hn => mkLambdaFVars #[hn] b
      let inputs := #[
        mkApp5 (mkConst ``ite [.succ .zero]) (mkConst ``Nat) p inst a b,
        mkApp5 (mkConst ``dite [.succ .zero]) (mkConst ``Nat) p inst positive negative,
        mkApp4 (mkConst ``cond [.succ .zero]) (mkConst ``Nat) (mkProj ``Decidable 0 inst) a b]
      let methods : Sym.Simp.Methods := { pre := fun e => do
        if e == p then return .step q h (contextDependent := true)
        if e == a || e == b then throwError "visited a branch with an unresolved guard"
        Sym.Simp.simpControl e }
      for input in inputs do
        let input ← Sym.shareCommon input
        let result ← Sym.Simp.SimpM.run' (Sym.Simp.simp input) methods
        match result with
        | .step e proof true true =>
          unless input.isAppOf ``ite && e == inputs[2]! do
            throwError "unresolved guard changed its native conditional"
          Meta.check proof
          unless ← isDefEq (← Meta.inferType proof) (← mkEq input e) do
            throwError "conditional conversion proof has incorrect endpoints"
        | .rfl true true =>
          if input.isAppOf ``ite then
            throwError "legacy conditional was not converted to native cond"
        | _ => throwError "unresolved guard lost its branch barrier or cache dependency"

run_meta do
  withLocalDeclD `p (mkSort .zero) fun p =>
  withLocalDecl `d .instImplicit (mkApp (mkConst ``Decidable) p) fun d =>
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b =>
    Sym.SymM.run do
      let input := mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) (mkProj ``Decidable 0 d) a b
      let shared ← Sym.shareCommon input
      unless shared.getArg! 1 matches .proj ``Decidable 0 _ do
        throwError "sharing changed the decision projection"
      let shared' ← Sym.shareCommon input
      unless Sym.isSameExpr shared shared' do throwError "conditional lost maximal sharing"
      let methods : Sym.Simp.Methods := { pre := Sym.Simp.simpControl }
      let result ← Sym.Simp.SimpM.run' (Sym.Simp.simp shared) methods
      unless result matches .rfl true _ do throwError "visited an unresolved branch"

run_meta do
  withLocalDeclD `p (mkSort .zero) fun p =>
  withLocalDecl `d .instImplicit (mkApp (mkConst ``Decidable) p) fun d => do
  withLocalDeclD `h (← mkEq p (mkConst ``True)) fun h =>
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b =>
    Sym.SymM.run do
      let p ← Sym.shareCommon p
      let a ← Sym.shareCommon a
      let b ← Sym.shareCommon b
      let truth ← Sym.shareCommon (mkConst ``True)
      let h ← Sym.shareCommon h
      let input ← Sym.shareCommon <| mkApp4 (mkConst ``cond [1]) (mkConst ``Nat)
        (mkProj ``Decidable 0 d) a b
      let methods : Sym.Simp.Methods := { pre := fun e => do
        if e == p then return .step truth h (contextDependent := true)
        if e == b then throwError "visited the dead branch"
        Sym.Simp.simpControl e }
      let .step output proof _ true ← Sym.Simp.SimpM.run' (Sym.Simp.simp input) methods
        | throwError "native conditional lost its context dependency"
      unless output == a do throwError "wrong conditional branch: {output}, expected {a}"
      unless (proof.find? (fun e => e.isConstOf ``ite)).isNone do
        throwError "native conditional proof contains ite"
      let some (_, lhs, _) := (← Meta.inferType proof).eq? | throwError "expected equality proof"
      unless lhs.isAppOfArity ``cond 4 do throwError "native conditional proof has an ite source"
      check proof
      unless ← isDefEq (← Meta.inferType proof) (← mkEq input output) do
        throwError "conditional proof does not prove its result"

example : (if (2 : Nat) < 3 then 7 else 9) = 7 := by cbv
example : (if (4 : Nat) < 3 then 7 else 9) = 9 := by cbv

@[cbv_opaque] def nativeOpaqueDecision (p : Prop) [Decidable p] : Decidable p := inferInstance
example (p : Prop) [Decidable p] (a b : Nat) :
    cond (@decide p (nativeOpaqueDecision p)) a b = cond (@decide p (nativeOpaqueDecision p)) a b := by
  cbv

@[irreducible] def nativeRawValue (p : Prop) [Decidable p] : Nat := if p then 11 else 22
@[irreducible] def nativeNamedValue (p : Prop) [Decidable p] : Nat := cond (decide p) 33 44

theorem nativeRawRule (p : Prop) [Decidable p] :
    (if p then 11 else 22) = nativeRawValue p := by unfold nativeRawValue; rfl

theorem nativeNamedRule (p : Prop) [Decidable p] :
    cond (decide p) 33 44 = nativeNamedValue p := by unfold nativeNamedValue; rfl

def namedRuleInput (p : Prop) [Decidable p] : Nat := cond (decide p) 11 22
def rawRuleInput (p : Prop) [Decidable p] : Nat := if p then 33 else 44

@[irreducible] def nativePairValue (p : Prop) [Decidable p] : Prop × Prop :=
  if p then (p, True) else (False, p)

theorem nativePairRule (p : Prop) [Decidable p] :
    (if p then (p, True) else (False, p)) = nativePairValue p := by unfold nativePairValue; rfl

def incompatibleRuleInput (p q : Prop) [Decidable q] : Prop × Prop :=
  if q then (p, True) else (False, p)

run_meta do
  for (rule, input, expected) in [( ``nativeRawRule, ``namedRuleInput, ``nativeRawValue),
      (``nativeNamedRule, ``rawRuleInput, ``nativeNamedValue)] do
    let rewrite ← Sym.mkSimprocFor #[rule] Sym.Simp.dischargeSimpSelf
    lambdaTelescope (← getConstInfo input).value! fun xs body => Sym.SymM.run do
      let body ← Sym.shareCommon body
      let .step output proof .. ← Sym.Simp.SimpM.run' (rewrite body) {} | throwError "conditional rule not retrieved"
      unless output.isAppOf expected && output.getAppArgs[0]! == xs[0]! do
        throwError "rule failed to infer the proposition from its decision type"
      check proof
  let rewrite ← Sym.mkSimprocFor #[``nativePairRule] Sym.Simp.dischargeSimpSelf
  lambdaTelescope (← getConstInfo ``incompatibleRuleInput).value! fun _ body => Sym.SymM.run do
    let body ← Sym.shareCommon body
    unless (← Sym.Simp.SimpM.run' (rewrite body) {}) matches .rfl .. do
      throwError "conditional rule accepted a decision for the wrong proposition"

-- Native cond evaluates over-applied functions without visiting the unchosen function.
example : (if (2 : Nat) < 3 then (fun n => n + 1) else (fun n => n + 2)) 4 = 5 := by cbv
example : ite ((2 : Nat) < 3) 7 9 = 7 := by cbv

run_meta do
  Sym.SymM.run do
    let inst := mkApp3 (mkConst ``Decidable.intro) (mkConst ``True) (mkConst ``Bool.true) (mkConst ``True.intro)
    let input ← Sym.shareCommon (mkProj ``Decidable 0 inst)
    let simpResult ← Sym.Simp.SimpM.run' (Sym.Simp.simp input)
    let simpValue := Sym.Simp.Result.getResultExpr input simpResult
    unless simpValue.isConstOf ``Bool.true do throwError "simp did not reduce a constructed decision"
    let dsimpResult ← Sym.DSimp.DSimpM.run' (Sym.DSimp.dsimp input)
    unless (Sym.DSimp.Result.getResultExpr input dsimpResult).isConstOf ``Bool.true do
      throwError "dsimp did not reduce a constructed decision"

def nativeOpaqueInput (p : Prop) [Decidable p] (a b : Nat) : Nat :=
  if @decide p (nativeOpaqueDecision p) then a else b

run_meta do
  lambdaTelescope (← getConstInfo ``nativeOpaqueInput).value! fun _ body => do
    let result ← Lean.Meta.Tactic.Cbv.cbvEntry body
    unless Sym.Simp.Result.getResultExpr body result == body do
      throwError "CBV unfolded an opaque decision instance"

set_option sym.debug true in
elab "simp_native_shared_decision" : tactic => do
  let rewrite ← Sym.mkSimprocFor #[``Nat.add_zero] Sym.Simp.dischargeSimpSelf
  let methods : Sym.Simp.Methods := { pre := Sym.Simp.simpControl, post := rewrite }
  liftMetaTactic1 fun goal => Sym.SymM.run do
    let goal ← Sym.preprocessMVar goal
    (← Sym.simpGoal goal methods).toOption

set_option sym.debug true in
example (n : Nat) : (if n + 0 = 0 then 7 else 9) = (if n = 0 then 7 else 9) := by
  simp_native_shared_decision <;> rfl

end IfCondSym

/-! Exposed decisions, guard rewrites and completion flags. -/

namespace IfCondSymGuard

open Lean Meta Sym Sym.Simp

private meta def checkStep (input expected : Expr) (result : Result) (cd := false) : SymM Unit := do
  let .step output proof _ dependent := result | throwError "conditional guard made no progress"
  unless output == expected && dependent == cd do
    throwError "wrong guard result or context dependency: {output}"
  check proof
  unless ← isDefEq (← Meta.inferType proof) (← mkEq input output) do
    throwError "conditional guard proof has the wrong endpoints"

private meta def checkExposedDecision (named value : Bool) : MetaM Unit := do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDeclD `hp (if value then p else mkNot p) fun hp =>
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b => SymM.run do
    let bool := mkConst (if value then ``Bool.true else ``Bool.false)
    let inst := mkApp3 (mkConst ``Decidable.intro) p bool hp
    let guard := if named then mkApp2 (mkConst ``Decidable.decide) p inst else mkProj ``Decidable 0 inst
    let input ← shareCommon (mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard a b)
    let expected ← shareCommon (if value then a else b)
    let dead := if value then b else a
    let methods : Methods := { pre := fun e => do
      if e == dead then throwError "visited the dead branch"
      simpControl e }
    checkStep input expected (← SimpM.run' (Sym.Simp.simp input) methods)

set_option sym.debug true in
run_meta checkExposedDecision false true
set_option sym.debug true in
run_meta checkExposedDecision true true
set_option sym.debug true in
run_meta checkExposedDecision false false
set_option sym.debug true in
run_meta checkExposedDecision true false

private meta def checkGuardRewrite (named : Bool) (predicateCD := true) (rewriteCD := false) : MetaM Unit := do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDecl `d .instImplicit (mkApp (mkConst ``Decidable) p) fun d =>
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b => do
    let guard := if named then mkApp2 (mkConst ``Decidable.decide) p d else mkProj ``Decidable 0 d
    withLocalDeclD `h (← mkEq guard (mkConst ``Bool.true)) fun h => do
      let rules := ({} : Theorems).insert (← mkTheoremFromExpr h)
      SymM.run do
        let input ← shareCommon (mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard a b)
        let expected ← shareCommon a
        let methods : Methods := {
          pre := fun e => do
            if e == p then return .rfl (contextDependent := predicateCD)
            if e == b then throwError "visited the dead branch"
            simpControl e
          post := fun e => do
            let r ← rules.rewrite (d := dischargeNone) e
            return if rewriteCD then r.withContextDependent else r }
        checkStep input expected (← SimpM.run' (Sym.Simp.simp input) methods) (predicateCD || rewriteCD)

set_option sym.debug true in
run_meta checkGuardRewrite false
set_option sym.debug true in
run_meta checkGuardRewrite true
set_option sym.debug true in
run_meta checkGuardRewrite false false true

set_option sym.debug true in
run_meta do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDecl `d .instImplicit (mkApp (mkConst ``Decidable) p) fun d =>
  withLocalDeclD `q (mkConst ``Bool) fun q =>
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b => do
    for guard in #[mkProj ``Decidable 0 d, mkApp2 (mkConst ``Decidable.decide) p d] do
      withLocalDeclD `h (← mkEq guard q) fun h => do
        let rules := ({} : Theorems).insert (← mkTheoremFromExpr h)
        SymM.run do
          let input ← shareCommon (mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard a b)
          let expected ← shareCommon (mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) q a b)
          let methods : Methods := {
            pre := fun e => do
              if e == p then return .rfl (contextDependent := true)
              if e == a || e == b then throwError "visited an unresolved branch"
              simpControl e
            post := rules.rewrite (d := dischargeNone) }
          checkStep input expected (← SimpM.run' (Sym.Simp.simp input) methods) true

run_meta do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDecl `d .instImplicit (mkApp (mkConst ``Decidable) p) fun d =>
  withLocalDeclD `q (mkConst ``Bool) fun q =>
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b => do
    let guard := mkProj ``Decidable 0 d
    withLocalDeclD `h (← mkEq guard q) fun h => SymM.run do
      let input ← shareCommon (mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard a b)
      let methods : Methods := { pre := fun e => do
        if e == guard || e == q || e == a || e == b then
          throwError "crossed a completed guard callback"
        simpCondWith (fun _ _ => return .rfl (done := true) (contextDependent := true)) e }
      unless (← SimpM.run' (Sym.Simp.simp input) methods) matches .rfl true true do
        throwError "lost a completed unchanged guard result"
      let q ← shareCommon q
      let methods := { methods with pre := fun e => do
        if e == q || e == a || e == b then throwError "revisited a completed changed guard"
        simpCondWith (fun _ _ => return .step q h (done := true) (contextDependent := true)) e }
      let expected ← shareCommon (mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) q a b)
      let result ← SimpM.run' (Sym.Simp.simp input) methods
      unless result matches .step _ _ true true do throwError "lost completed guard flags"
      checkStep input expected result true

@[cbv_opaque] def guardOpaqueDecision (p : Prop) [Decidable p] : Decidable p := inferInstance

def opaqueGuardInput (p : Prop) [d : Decidable p] (a b : Nat) :=
  cond (@decide p (guardOpaqueDecision p)) a b

run_meta do
  lambdaTelescope (← getConstInfo ``opaqueGuardInput).value! fun _ body => do
    let result ← Lean.Meta.Tactic.Cbv.cbvEntry body
    unless result.getResultExpr body == body do
      throwError "CBV unfolded an opaque decision"

end IfCondSymGuard

/-! Predicates hidden in primitive decision projections. -/

namespace IfCondSymPredicate

open Lean Meta in
run_meta do
  withLocalDeclD `p (mkSort .zero) fun p =>
  withLocalDecl `d .instImplicit (mkApp (mkConst ``Decidable) p) fun d =>
    Sym.SymM.run do
      let input ← Sym.shareCommon (mkProj ``Decidable 0 d)
      let methods : Sym.Simp.Methods := { pre := fun e => do
        if e == d then throwError "visited the unresolved decision instance"
        return .rfl }
      let result ← Sym.Simp.SimpM.run' (Sym.Simp.simp input) methods
      unless result.isRfl do throwError "changed an unresolved decision projection"

open Lean Meta in
run_meta do
  withLocalDeclD `p (mkSort .zero) fun p =>
  withLocalDecl `d .instImplicit (mkApp (mkConst ``Decidable) p) fun d => do
  withLocalDeclD `h (← mkEq p (mkConst ``True)) fun h =>
    Sym.SymM.run do
      let p ← Sym.shareCommon p
      let h ← Sym.shareCommon h
      let truth ← Sym.shareCommon (mkConst ``True)
      let input ← Sym.shareCommon (mkProj ``Decidable 0 d)
      let methods : Sym.Simp.Methods := { pre := fun e => do
        if e == d then throwError "visited the decision instance"
        if e == p then return .step truth h (contextDependent := true)
        return .rfl }
      let .step output proof _ true ← Sym.Simp.SimpM.run' (Sym.Simp.simp input) methods
        | throwError "did not simplify the hidden source predicate"
      unless output.isConstOf ``Bool.true do throwError "wrong decision result"
      check proof
      unless ← isDefEq (← Meta.inferType proof) (← mkEq input output) do
        throwError "decision proof does not prove its result"

abbrev PatternSharingDecision (p : Prop) := Decidable p

set_option sym.debug true
open Lean Meta Sym in
run_meta SymM.run do
  let pat ← Simp.mkTheoremFromDecl ``decide_not
  withLocalDeclD `b (mkConst ``Bool) fun b => do
  let p ← mkEq b (mkConst ``Bool.true)
  withLocalDeclD `d (mkApp (mkConst ``Decidable) (mkNot p)) fun d => do
    let e ← shareCommon (mkProj ``Decidable 0 d)
    unless (← pat.pattern.match? e).isSome do
      throwError "decision predicate pattern did not match"

open Lean Meta Sym in
run_meta SymM.run do
  let pat ← Simp.mkTheoremFromDecl ``decide_not
  withLocalDeclD `b (mkConst ``Bool) fun b => do
  let p ← mkEq b (mkConst ``Bool.true)
  let type := mkApp (mkConst ``PatternSharingDecision) (mkNot p)
  withLocalDeclD `d type fun d => do
    let e ← shareCommon (mkProj ``Decidable 0 d)
    unless (← pat.pattern.match? e).isSome do
      throwError "aliased decision predicate pattern did not match"

end IfCondSymPredicate

/-! CBV decision simprocs. -/

namespace IfCondCbvRegistry

open Lean Meta Sym Tactic.Cbv in
run_meta do
  let native ← builtinCbvSimprocDeclsRef.get
  let entries := native.keys.toArray.filter fun (name, _) =>
    privateToUserName name == `Lean.Meta.Sym.Simp.simpDecideCbv
  unless entries.size == 1 do
    throwError "expected one builtin decision simproc, found {entries.size}"
  let (declName, nativeKeys) := entries[0]!
  let some environmentKeys ← getCbvSimprocDeclKeys? declName
    | throwError "decision simproc environment keys missing"
  let expectedKeys := #[DiscrTree.Key.proj ``Decidable 0 0]
  unless nativeKeys == expectedKeys && environmentKeys == expectedKeys do
    throwError "decision key producer did not use the primitive projection"
  let registry ← getCbvSimprocs
  let nativeRegistry ← builtinCbvSimprocsRef.get
  let p := mkConst ``True
  let d := mkConst ``instDecidableTrue
  for registry in #[registry, nativeRegistry] do
    for input in #[mkApp2 (mkConst ``Decidable.decide) p d, mkProj ``Decidable 0 d] do
      Sym.SymM.run do
        let input ← Sym.shareCommon (canonicalizeDecisionProjections input)
        let candidates := Sym.getMatchWithExtra (← getMCtx) registry.pre input
        unless candidates.any (fun candidate => candidate.1.declName == declName) do
          throwError "registered builtin decision simproc was not retrieved"
        let .step value proof .. ← Sym.Simp.SimpM.run'
            (cbvSimprocDispatch registry.pre registry.erased input) {}
          | throwError "registered builtin decision simproc did not reduce the projection"
        unless value.isConstOf ``Bool.true do throwError "wrong decision result"
        check proof
        unless ← isDefEq (← Meta.inferType proof) (← mkEq input value) do
          throwError "decision simproc proof has incorrect endpoints"

def RegistryEven (n : Nat) : Prop := ∃ k, n = 2 * k
instance : DecidablePred RegistryEven := fun n =>
  if h : n % 2 = 0 then .isTrue ⟨n / 2, by omega⟩
  else .isFalse (by intro ⟨k, hk⟩; omega)

open Classical in
example : decide (RegistryEven 2) = true := by cbv
open Classical in
example : decide (RegistryEven 3) = false := by cbv

open Lean Elab Term in
elab "registry_raw_decision% " p:term : term => do
  let p ← elabTermEnsuringType p (mkSort 0)
  let d ← Meta.synthInstance (mkApp (mkConst ``Decidable) p)
  return mkProj ``Decidable 0 d

open Classical in
example : (registry_raw_decision% RegistryEven 2) = true := by cbv
open Classical in
example : (registry_raw_decision% RegistryEven 3) = false := by cbv

end IfCondCbvRegistry
