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
Return the proposition and decision that a conditional guard tests. A raw Boolean `b` tests `b = true`.
-/
def getGuardDecision (c : Expr) : MetaM (Expr × Expr) := do
  if let some r ← getBoolDecision? c then return r
  let b := mkConst ``Bool.true
  return (mkApp3 (mkConst ``Eq [1]) (mkConst ``Bool) c b, mkApp2 (mkConst ``instDecidableEqBool) c b)

/--
Return the guard that `if p then _ else _` elaborates to, given the decision `d : Decidable p`.
The test `b = true` of a Boolean `b` under its canonical instance is `b` itself; this holds by `rfl`.
-/
def mkDecisionGuard (p d : Expr) : Expr :=
  if p.isAppOfArity ``Eq 3 && d.isAppOfArity ``instDecidableEqBool 2 && p.appArg!.isConstOf ``Bool.true
      && d.appArg! == p.appArg! && d.appFn!.appArg! == p.appFn!.appArg! then
    p.appFn!.appArg!
  else
    mkProj ``Decidable 0 d

/--
Replace each `(instDecidableEqBool b true).1` by `b`. Instantiating a decision instance with the
canonical one for a Boolean test produces such projections.
-/
partial def normalizeBoolTests (e : Expr) : Expr :=
  e.replace fun
    | .proj ``Decidable 0 d =>
      if d.isAppOfArity ``instDecidableEqBool 2 && d.appArg!.isConstOf ``Bool.true then
        some (normalizeBoolTests d.appFn!.appArg!)
      else none
    | _ => none

/-- Rewrite a raw `ite` application into the `cond` application that `if` elaborates to. -/
def canonicalizeIte? (e : Expr) : Option Expr := do
  let n := e.getAppNumArgs
  guard <| n >= 5 && e.getAppFn.isConstOf ``ite
  let args := e.getAppArgs
  let c := mkApp4 (mkConst ``cond e.getAppFn.constLevels!) args[0]! (mkDecisionGuard args[1]! args[2]!) args[3]! args[4]!
  return mkAppN c (args.extract 5 n)

/-- Rewrite every raw `ite` application in `e` into the `cond` application that `if` elaborates to. -/
partial def canonicalizeItes (e : Expr) : Expr :=
  e.replace fun e => canonicalizeIte? e |>.map canonicalizeItes

/-- Use primitive decision projections without evaluating their instances. -/
partial def canonicalizeDecisionProjections (e : Expr) : Expr :=
  e.replace fun e =>
    if e.isAppOfArity ``Decidable.decide 2 then
      some (mkProj ``Decidable 0 (canonicalizeDecisionProjections e.appArg!))
    else none

/-- Align a proof declaration's decision projections before specializing its binders.
The declaration's type must be a proposition, and `levels` must instantiate all its universe
parameters in declaration order. Checking the definitional conversion on neutral decisions
avoids evaluating concrete decision instances. -/
def mkDecisionProjectionProof (declName : Name) (levels : List Level := []) : MetaM Expr := do
  let proof := mkConst declName levels
  let type ← inferType proof
  let type' := canonicalizeDecisionProjections type
  if type == type' then return proof
  return mkApp2 (mkConst ``id [.zero]) type' proof

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

private partial def exposeDecisionInstance (e : Expr) (transparency : TransparencyMode) : MetaM Expr := withIncRecDepth do
  checkSystem "decision projection preparation"
  let e := e.consumeMData
  if !e.hasLooseBVars then return ← withTransparency transparency <| whnf e
  match e with
  | .letE _ _ value body _ => exposeDecisionInstance (body.instantiate1 value) transparency
  | .app .. =>
    let fn ← exposeDecisionInstance e.getAppFn transparency
    let e' := fn.betaRev e.getAppRevArgs
    if e' == e then return e
    exposeDecisionInstance e' transparency
  | .proj _ i value =>
    let value ← exposeDecisionInstance value transparency
    let some field ← projectCore? value i | return e
    exposeDecisionInstance field transparency
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
  let d ← exposeDecisionInstance d .reducible
  return reduceDecisionProjection? (mkProj ``Decidable 0 d)

/--
Prepare a named or primitive decision projection for abstraction. Expose transparent instance
packaging at default transparency and select its Boolean field; opaque and irreducible instance
heads remain closed. A named neutral projection instead yields its primitive projection, removing
its explicit predicate argument without evaluating the decision. Return `none` for other terms or
neutral primitive projections.

This is a projection-directed operation, not whole-guard normalization. Its binder-safe exposure
uses WHNF only on closed subterms, as in `reduceDecisionProjectionR?`. It neither synthesizes
instances nor performs speculative unification. The result is definitionally equal to the input.
Callers must match whole projections first and retain the original projection if traversing the
prepared view performs no selected substitution. Genuine surviving dependencies still require
checking the resulting motive.
-/
def prepareDecisionProjectionForAbstraction? (e : Expr) : MetaM (Option Expr) := do
  let e := (← instantiateMVars e).consumeMData
  let named := e.isAppOfArity ``Decidable.decide 2
  let d ← match e with
    | .proj ``Decidable 0 d => pure d
    | _ => if named then pure e.appArg! else return none
  let exposed ← exposeDecisionInstance d .default
  if let some field := reduceDecisionProjection? (mkProj ``Decidable 0 exposed) then
    return some field
  return if named then some (mkProj ``Decidable 0 d) else none

end Lean.Meta
