/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Emilio Jesús Gallego Arias
-/
module

prelude
public import Lean.Meta.WHNF

public section

namespace Lean.Meta

/--
Inspect a Boolean expression for a fully applied named `Decidable.decide` or primitive
`.proj Decidable 0` projection. Outer metadata and existing metavariable assignments are ignored
for recognition. Return the predicate exposed by the inferred type and the supplied decision term,
with existing assignments instantiated; do not synthesize or evaluate a replacement decision.

The inferred type's head is exposed with `whnfR` (reducible transparency), so reducible aliases
of `Decidable p` are supported even for local or opaque decisions. This operation performs no
speculative unification or instance synthesis. Return `none` for unrecognized expressions or when
the inferred type cannot be exposed as `Decidable` at this transparency, including unresolved types
and semireducible aliases. This is not a whole-expression type checker: inputs must be well typed.
Actual type-inspection errors and interruptions propagate.

Computational projection contraction is a separate operation; see `reduceDecisionProjection?`
and `doc/dev/conditional_interface.md` (C1–C3).
-/
def getBoolDecision? (e : Expr) : MetaM (Option (Expr × Expr)) := do
  let e := (← instantiateMVars e).consumeMData
  let d ← match e with
    | .proj ``Decidable 0 d => pure d
    | _ =>
      unless e.isAppOfArity ``Decidable.decide 2 do return none
      pure e.appArg!
  let type ← inferType d
  let type ← if type.isAppOfArity ``Decidable 1 then pure type else whnfR type
  unless type.isAppOfArity ``Decidable 1 do return none
  return some (type.appArg!, d)

/--
Select the Boolean field of a fully applied named or primitive decision projection when its
instance is already a `Decidable.intro` constructor, ignoring metadata on the projection and
instance. This syntactic operation neither instantiates metavariables nor unfolds definitions,
and does not simplify the selected field. Return `none` for other expressions.
-/
def reduceDecisionProjection? (e : Expr) : Option Expr := do
  let e := e.consumeMData
  let d ← match e with
    | .proj ``Decidable 0 d => some d
    | _ =>
      if e.isAppOfArity ``Decidable.decide 2 then some e.appArg! else none
  let d := d.consumeMData
  unless d.isAppOfArity ``Decidable.intro 3 do none
  return d.getArg! 1

private partial def exposeDecisionInstance (e : Expr) : MetaM Expr := withIncRecDepth do
  checkSystem "decision projection preparation"
  let e := e.consumeMData
  if !e.hasLooseBVars then return ← whnfR e
  match e with
  | .letE _ _ value body _ => exposeDecisionInstance (body.instantiate1 value)
  | .app .. =>
    let fn ← exposeDecisionInstance e.getAppFn
    let e' := fn.betaRev e.getAppRevArgs
    if e' == e then return e
    exposeDecisionInstance e'
  | .proj _ i value =>
    let value ← exposeDecisionInstance value
    let some field ← projectCore? value i | return e
    exposeDecisionInstance field
  | _ => return e

/--
Expose the Boolean field of a fully applied named or primitive decision projection whose instance
exposes a constructor at reducible transparency. Closed subterms use `whnfR`; open instances use
beta/let reduction, reducible head unfolding, and exposed constructor projections, stopping at
neutral bound heads. Recursor/matcher reduction is delegated to `whnfR` only for closed subterms.
This supports reducible instance wrappers and beta/let packaging under binders without passing
loose bound variables to `whnfR`. It does not expose aliases of the entire Boolean
expression, use instance/default transparency, synthesize a decision, or simplify the returned field.

Existing metavariable assignments and outer metadata are ignored for recognition. Preparation
performs no speculative unification; ordinary reduction may use Meta caches. Return `none` for
unrecognized projections or instances that remain neutral at this transparency. Reduction errors
and interruptions propagate. Inputs must be well typed.

The returned field is definitionally equal to the original projection. Callers decide whether to
retain that projection; abstraction uses this operation before substituting into dependent record
packaging. This is computational preparation, not the typed inspection of `getBoolDecision?`.
-/
def reduceDecisionProjectionR? (e : Expr) : MetaM (Option Expr) := do
  let e := (← instantiateMVars e).consumeMData
  let d ← match e with
    | .proj ``Decidable 0 d => pure d
    | _ =>
      unless e.isAppOfArity ``Decidable.decide 2 do return none
      pure e.appArg!
  let d ← exposeDecisionInstance d
  return reduceDecisionProjection? (mkProj ``Decidable 0 d)

end Lean.Meta
