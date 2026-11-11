/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Leonardo de Moura
-/
module

prelude
public import Lean.HeadIndex
public import Lean.Meta.Decidable
import Lean.Meta.SynthInstance
import Lean.Meta.WHNF

public section

namespace Lean.Meta

/-- Certify conditional representation conversions independently of traversal reductions. -/
private def isDefEqConditionalRepresentation (p t : Expr) : MetaM Bool :=
  withConfig (fun cfg => { cfg with beta := true, iota := true, proj := .yesWithDelta }) <|
    isDefEq p t

/-- Match proposition and Boolean conditionals using their common Boolean decision. -/
private def isDefEqIfRoot (pattern target : Expr) : MetaM Bool := do
  let saved ← Meta.saveState
  try
    let result ← go
    unless result do saved.restore
    return result
  catch ex =>
    saved.restore
    throw ex
where
  go : MetaM Bool := do
    let target := target.consumeMData
    let args ←
      if target.isAppOf ``cond && target.getAppNumArgs >= 4 then
        pure target.getAppArgs
      else if target.isAppOf ``ite && target.getAppNumArgs >= 5 then
        let ts := target.getAppArgs
        pure (#[ts[0]!, .proj ``Decidable 0 ts[2]!, ts[3]!, ts[4]!] ++ ts[5:])
      else return false
    let pattern := pattern.consumeMData
    let (α, b, t, e, reflected, extraArgs) ←
      if pattern.isAppOf ``ite && pattern.getAppNumArgs >= 5 then
        let ps := pattern.getAppArgs
        pure (ps[0]!, .proj ``Decidable 0 ps[2]!, ps[3]!, ps[4]!, some (ps[1]!, ps[2]!), ps[5:].toArray)
      else if pattern.isAppOf ``cond && pattern.getAppNumArgs >= 4 then
        let ps := pattern.getAppArgs
        let c ← instantiateMVars ps[1]!
        let reflected ← getBoolDecision? c
        pure (ps[0]!, c, ps[2]!, ps[3]!, reflected, ps[4:].toArray)
      else return false
    unless args.size == extraArgs.size + 4 do return false
    unless (← isDefEq α args[0]!) && (← isDefEq t args[2]!) && (← isDefEq e args[3]!) do
      return false
    for pArg in extraArgs, tArg in args[4:] do
      unless ← isDefEq pArg tArg do return false
    let matchedBranches ← Meta.saveState
    if ← withTransparency .implicit <| isDefEqConditionalRepresentation b args[1]! then
      return ← withTransparency .implicit <| isDefEqConditionalRepresentation pattern target
    matchedBranches.restore
    let some (condition, decision) := reflected | return false
    let condition ← instantiateMVars condition
    if condition.hasExprMVar then
      let candidateState ← Meta.saveState
      if let some (p, candidateDecision) ← getBoolDecision? args[1]! then
        if (← isDefEq condition p) &&
            (← withReducibleAndInstances <| isDefEq decision candidateDecision) &&
            (← withTransparency .default <| isDefEqConditionalRepresentation b args[1]!) &&
            (← withTransparency .default <| isDefEqConditionalRepresentation pattern target) then
          return true
      candidateState.restore
      let boolProp := mkApp3 (mkConst ``Eq [Level.one]) (mkConst ``Bool) args[1]! (mkConst ``Bool.true)
      unless ← isDefEq condition boolProp do return false
    let condition ← instantiateMVars condition
    let decision ← instantiateMVars decision
    if decision.isMVar && !condition.hasMVar then
      if let .some inst ← trySynthInstance (mkApp (mkConst ``Decidable) condition) then
        unless ← withReducibleAndInstances <| isDefEq decision inst do return false
    unless ← withTransparency .implicit <| isDefEqConditionalRepresentation b args[1]! do return false
    withTransparency .implicit <| isDefEqConditionalRepresentation pattern target

private def conditionalProjectionView (e : Expr) : MetaM Expr := do
  let e := e.consumeMData
  let .const name _ := e.getAppFn | return e
  let env ← getEnv
  let some info := env.getProjectionFnInfo? name | return e
  let some structName := env.getProjectionStructureName? name | return e
  let args := e.getAppArgs
  if args.size <= info.numParams then return e
  return mkAppN (.proj structName info.i args[info.numParams]!) args[info.numParams + 1:]

private def hasConditional (e : Expr) : Bool :=
  (e.find? fun e => e.isConstOf ``ite || e.isConstOf ``cond).isSome

private partial def matchConditionals (pattern target : Expr) : MetaM Bool := do
  let saved ← Meta.saveState
  try
    let result ← visit pattern target
    unless result do saved.restore
    return result
  catch ex =>
    saved.restore
    throw ex
where
  visit (p t : Expr) : MetaM Bool := do
    let p ← instantiateMVars p
    let t ← instantiateMVars t
    if p.isMVar || (!hasConditional p && !hasConditional t) then return ← isDefEq p t
    if p == t then return true
    -- Projection reduction would obscure the conditional in its object.
    let pp ← conditionalProjectionView p
    let tp ← conditionalProjectionView t
    if let .proj pn pi po := pp.getAppFn then
      if let .proj tn ti to := tp.getAppFn then
        unless pn == tn && pi == ti && pp.getAppNumArgs == tp.getAppNumArgs do return false
        unless ← visit po to do return false
        for pa in pp.getAppArgs, ta in tp.getAppArgs do
          unless ← visit pa ta do return false
        return ← withTransparency .default <| isDefEqConditionalRepresentation p t
    let p := (← whnfR p).consumeMData
    let t ← if p.isAppOf ``ite || p.isAppOf ``cond then
      withTransparency .default <| whnfHeadPred (← instantiateMVars t)
        (fun e => return !(e.isAppOf ``ite || e.isAppOf ``cond))
      else pure ((← whnfR (← instantiateMVars t)).consumeMData)
    if (p.isAppOf ``ite || p.isAppOf ``cond) &&
        (t.isAppOf ``ite || t.isAppOf ``cond) then
      return ← isDefEqIfRoot p t
    if p.isApp && t.isApp && (p.getAppNumArgs == t.getAppNumArgs ||
        (p.getAppFn.isMVar && p.getAppNumArgs < t.getAppNumArgs)) then
      let numArgs := p.getAppNumArgs
      unless ← isDefEq p.getAppFn (t.getBoundedAppFn numArgs) do return false
      let offset := t.getAppNumArgs - numArgs
      let tArgs := t.getAppArgs
      for pa in p.getAppArgs, i in [:numArgs] do
        unless ← visit pa tArgs[offset + i]! do return false
      return ← withTransparency .default <| isDefEqConditionalRepresentation p t
    match p, t with
    | .lam n pd pb bi, .lam _ td tb _
    | .forallE n pd pb bi, .forallE _ td tb _ =>
      unless ← visit pd td do return false
      withLocalDecl n bi (← instantiateMVars pd) fun x => do
        unless ← visit (pb.instantiate1 x) (tb.instantiate1 x) do return false
        withTransparency .default <| isDefEqConditionalRepresentation p t
    | _, _ => return false

/-- Match conditional representations, including occurrences nested in applications and binders.
Failed matches restore backtrackable state. -/
def isDefEqIf (pattern target : Expr) : MetaM Bool :=
  if hasConditional pattern || hasConditional target then matchConditionals pattern target else pure false

private def conditionalNumExtraArgs? (e : Expr) : Option Nat :=
  let e := e.consumeMData
  let n := e.getAppNumArgs
  if e.isAppOf ``ite && n >= 5 then some (n - 5)
  else if e.isAppOf ``cond && n >= 4 then some (n - 4)
  else none

private def decisionProjectionKey? (e : Expr) : Option Bool :=
  match e.consumeMData with
  | .proj ``Decidable 0 _ => some false
  | e => if e.isAppOfArity ``Decidable.decide 2 then some true else none

/-- Put a named decision projection in kernel form without unfolding its instance. -/
private def decisionProjectionView (e : Expr) : Expr :=
  let e := e.consumeMData
  if e.isAppOfArity ``Decidable.decide 2 then mkProj ``Decidable 0 e.appArg! else e

private def hasDecisionProjectionAliasKey (p e : Expr) : Bool :=
  match decisionProjectionKey? p, decisionProjectionKey? e with
  | some pKind, some eKind => pKind != eKind
  | _, _ => false

/--
Abstract occurrences of `p` in `e`. We detect subterms equivalent to `p` using key-matching.
That is, only perform `isDefEq` tests when the head symbol of subterm is equivalent to head symbol of `p`.

By default, all occurrences are abstracted,
but this behavior can be controlled using the `occs` parameter.

All matches of `p` in `e` are considered for occurrences,
but for each match that is included by the `occs` parameter,
metavariables appearing in `p` (or `e`) may become instantiated,
affecting the possibility of subsequent matches.
For matches that are not included in the `occs` parameter, backtrackable state is rolled back
to prevent blocking subsequent matches which require different instantiations.

Whole decision projections are matched before descending into them. When descending, reducible
instance packaging is exposed using `reduceDecisionProjectionR?`, and occurrences are counted in
the Boolean field rather than the discarded type/certificate packaging. Excluded or unchanged
field visits retain the original projection. The all-occurrence free-variable shortcut likewise
prepares relevant projections before abstraction. Preparation does not perform unification or
instance synthesis; speculative matching retains the rollback behavior described above.

This operation produces an abstraction candidate. Consumers must check its motive: opaque
packaging and dependencies surviving projection reduction may require generalization or transport.
See `doc/dev/conditional_interface.md` (C4–C5, C8).
-/
partial def kabstract (e : Expr) (p : Expr) (occs : Occurrences := .all) : MetaM Expr := do
  let e ← instantiateMVars e
  if p.isFVar && occs == Occurrences.all then
    let e ← Core.transform e (pre := fun e => do
      if !e.hasFVar then return .done e
      if (decisionProjectionKey? e).isSome then
        if e.containsFVar p.fvarId! then
          if let some value ← reduceDecisionProjectionR? e then return .visit value
      return .continue)
    return e.abstract #[p]
  else
    let pHeadIdx := p.toHeadIndex
    let pNumArgs := p.headNumArgs
    let pExtraArgs? := conditionalNumExtraArgs? p
    let pHasConditional := hasConditional p
    -- The state contains the number of matches so far, and the subterms whose traversal found no
    -- match since the last change to the metavariable context. The latter avoids revisiting shared
    -- subterms. It does not depend on `offset`, which is only used to abstract a match, and candidate
    -- subterms have no loose bound variables.
    let rec visit (e : Expr) (offset : Nat) : StateRefT (Nat × Std.HashSet Expr) MetaM Expr := do
      let cacheable := match e with
        | .app .. | .mdata .. | .proj .. | .letE .. | .lam .. | .forallE .. => true
        | _ => false
      if cacheable && (← get).2.contains e then return e
      let i := (← get).1
      let visitChildren : Unit → StateRefT (Nat × Std.HashSet Expr) MetaM Expr := fun _ => do
        -- Project before abstracting fields whose proofs depend on the replaced value.
        if let some value ← reduceDecisionProjectionR? e then
          let value' ← visit value offset
          return if value' == value then e else value'
        match e with
        | .app f a         => return e.updateApp! (← visit f offset) (← visit a offset)
        | .mdata _ b       => return e.updateMData! (← visit b offset)
        | .proj _ _ b      => return e.updateProj! (← visit b offset)
        | .letE _ t v b _  => return e.updateLetE! (← visit t offset) (← visit v offset) (← visit b (offset+1))
        | .lam _ d b _     => return e.updateLambdaE! (← visit d offset) (← visit b (offset+1))
        | .forallE _ d b _ => return e.updateForallE! (← visit d offset) (← visit b (offset+1))
        | e                => return e
      let r ← if e.hasLooseBVars then
        visitChildren ()
      else if (e.toHeadIndex != pHeadIdx || e.headNumArgs != pNumArgs) &&
          !(pExtraArgs?.isSome && pExtraArgs? == conditionalNumExtraArgs? e) &&
          !hasDecisionProjectionAliasKey p e then
        visitChildren ()
      else
        -- We save backtrackable state here,
        -- so that it can be rolled back unless `occs.contains i`.
        let state ← Meta.saveState
        if (← isDefEq e p) ||
            (hasDecisionProjectionAliasKey p e &&
              (← isDefEqConditionalRepresentation (decisionProjectionView e) (decisionProjectionView p))) ||
            (pHasConditional && (← matchConditionals p e)) then
          if occs.contains i then
            set (i+1, ({} : Std.HashSet Expr))
            return mkBVar offset
          else
            modify fun (_, s) => (i+1, s)
            -- Revert backtrackable state,
            -- so that other matches are still possible.
            state.restore
            visitChildren ()
        else
          visitChildren ()
      if cacheable && (← get).1 == i then
        modify fun (i, s) => (i, s.insert e)
      return r
    visit e 0 |>.run' (1, {})

end Lean.Meta
