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

private partial def kabstractCore (strong : Bool) (e : Expr) (p : Expr) (occs : Occurrences := .all) : MetaM Expr := do
  let e ← instantiateMVars e
  if !strong && p.isFVar && occs == Occurrences.all then
    let e ← Core.transform e (pre := fun e => do
      if !e.hasFVar then return .done e
      if (decisionProjectionKey? e).isSome then
        if e.containsFVar p.fvarId! then
          if let some value ← reduceDecisionProjectionR? e then return .visit value
      return .continue)
    return e.abstract #[p]
  -- Decision views must retain the original term when no selected substitution occurs.
  if p.isFVar && occs == Occurrences.all &&
      (e.find? fun e => (decisionProjectionKey? e).isSome).isNone then
    return e.abstract #[p]
  else
    let pHeadIdx := p.toHeadIndex
    let pNumArgs := p.headNumArgs
    let pExtraArgs? := conditionalNumExtraArgs? p
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
        if let some value ← (if strong then prepareDecisionProjectionForAbstraction? e else reduceDecisionProjectionR? e) then
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
              (← isDefEqConditionalRepresentation (decisionProjectionView e) (decisionProjectionView p))) then
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

/--
Abstract occurrences of `p` in `e`. We detect subterms equivalent to `p` using key-matching.
The head filter admits equal heads, named/primitive decision projections, and saturated
`ite`/`cond` applications with equal numbers of extra arguments. Admitted candidates are still
compared using `isDefEq` at the caller's transparency mode.

By default, all occurrences are abstracted,
but this behavior can be controlled using the `occs` parameter.

All matches of `p` in `e` are considered for occurrences,
but for each match that is included by the `occs` parameter,
metavariables appearing in `p` (or `e`) may become instantiated,
affecting the possibility of subsequent matches.
For matches that are not included in the `occs` parameter, backtrackable state is rolled back
to prevent blocking subsequent matches which require different instantiations.

The reducible-only abstraction is retained whenever its motive is well typed. For closed inputs
containing decision projections, an ill-typed motive triggers a second attempt after restoring
the initial backtrackable state. Motive validation does not retain metavariable assignments.
Inputs with loose bound variables retain the reducible-only behavior.

In the second attempt, whole decision projections are matched before descending into them. Transparent
instance packaging is exposed and named decisions acquire primitive views using
`prepareDecisionProjectionForAbstraction?`; occurrences are counted in
the Boolean field rather than the discarded type/certificate packaging. Excluded or unchanged
field visits retain the original projection. Terms containing decisions use this same traversal
for all-occurrence free-variable abstraction; projection-free terms retain the syntactic shortcut.
Preparation does not perform unification or
instance synthesis; speculative matching retains the rollback behavior described above.

This operation produces an abstraction candidate. Consumers must check its motive: opaque
packaging and dependencies surviving projection reduction may require generalization or transport.
See `doc/dev/conditional_interface.md` (C4–C5, C8).
-/
def kabstract (e : Expr) (p : Expr) (occs : Occurrences := .all) : MetaM Expr := do
  let e ← instantiateMVars e
  if e.hasLooseBVars || p.hasLooseBVars ||
      (e.find? fun e => (decisionProjectionKey? e).isSome).isNone then
    return ← kabstractCore false e p occs
  let saved ← Meta.saveState
  let body ← kabstractCore false e p occs
  let valid ← withoutModifyingState do
    try
      check (mkLambda `x .default (← inferType p) body)
      return true
    catch ex =>
      if ex.isInterrupt || ex.isMaxRecDepth || ex.isMaxHeartbeat then throw ex
      match ex with
      | .error .. => return false
      | _ => throw ex
  if valid then return body
  saved.restore
  kabstractCore true e p occs

end Lean.Meta
