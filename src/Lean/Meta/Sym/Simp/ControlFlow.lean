/-
Copyright (c) 2026 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module
prelude
public import Lean.Meta.Sym.Simp.SimpM
import Lean.Meta.Sym.AlphaShareBuilder
import Lean.Meta.Sym.InferType
import Lean.Meta.Sym.Simp.App
import Lean.Meta.Sym.Simp.Result
import Lean.Meta.Sym.Simp.Rewrite
import Lean.Meta.Sym.Simp.Discharger
import Lean.Meta.Sym.Simp.TheoremsLookup
import Lean.Meta.Sym.Util
import Lean.Meta.Sym.Reduce
import Lean.Meta.WHNF
import Lean.Meta.Match.Value
import Lean.Meta.AppBuilder
import Lean.Meta.Decidable
import Lean.Meta.Tactic.Simp.Main
import Init.Sym.Lemmas
namespace Lean.Meta.Sym.Simp
open Lean.Meta.Sym.Internal

/-- Normalize an explicit `ite` to a primitive conditional without reducing its decision. -/
public def simpIte : Simproc := fun e => do
  let numArgs := e.getAppNumArgs
  if numArgs < 5 then return .rfl (done := true)
  propagateOverApplied e (numArgs - 5) fun e => do
    let_expr f@ite α p inst a b := e | return .rfl
    let c ← mkProjS ``Decidable 0 inst
    let result ← mkAppS₄ (← mkConstS ``cond f.constLevels!) α c a b
    return .step result (mkApp5 (mkConst ``Sym.ite_eq_cond f.constLevels!) α p inst a b)

/--
Simplifies a dependent `if-then-else` expression.
-/
def simpDIte : Simproc := fun e => do
  let numArgs := e.getAppNumArgs
  if numArgs < 5 then return .rfl (done := true)
  propagateOverApplied e (numArgs - 5) fun e => do
    let_expr f@dite α c inst a b := e | return .rfl
    -- Predicate simplification can depend on the local context even when a branch is selected.
    match (← simp c) with
    | .rfl _ cd =>
      if (← isTrueExpr c) then
        let a' ← share <| a.betaRev #[mkConst ``True.intro]
        return .step a' (mkApp4 (mkConst ``dite_true f.constLevels!) α inst a b) (contextDependent := cd)
      else if (← isFalseExpr c) then
        let b' ← share <| b.betaRev #[mkConst ``not_false]
        return .step b' (mkApp4 (mkConst ``dite_false f.constLevels!) α inst a b) (contextDependent := cd)
      else
        return mkRflResult (done := true) (contextDependent := cd)
    | .step c' h _ cd =>
      if (← isTrueExpr c') then
        let h' ← shareCommon <| mkOfEqTrueCore c h
        let a ← share <| a.betaRev #[h']
        return .step a (mkApp (e.replaceFn ``dite_eq_left_of_eq_true) h) (contextDependent := cd)
      else if (← isFalseExpr c') then
        let h' ← shareCommon <| mkOfEqFalseCore c h
        let b ← share <| b.betaRev #[h']
        return .step b (mkApp (e.replaceFn ``dite_eq_right_of_eq_false) h) (contextDependent := cd)
      else
        let .some inst' ← trySynthInstance (mkApp (mkConst ``Decidable) c')
          | return mkRflResult (done := true) (contextDependent := cd)
        let inst' ← shareCommon inst'
        let e' := e.getBoundedAppFn 4
        let h ← shareCommon h
        let a ← share <| mkLambda `h .default c' (a.betaRev #[mkApp4 (mkConst ``Eq.mpr_prop) c c' h (mkBVar 0)])
        let b ← share <| mkLambda `h .default (mkNot c') (b.betaRev #[mkApp4 (mkConst ``Eq.mpr_not) c c' h (mkBVar 0)])
        let e' ← mkAppS₄ e' c' inst' a b
        let h' := mkApp3 (e.replaceFn ``Sym.dite_cond_congr) c' inst' h
        return .step e' h' (done := true) (contextDependent := cd)

/--
Simplify the Boolean projection of `inst : Decidable p` using its retained predicate.
Contract an exposed decision constructor, or simplify `p` and justify a changed projection by
congruence. Rebuilding a decision after a predicate rewrite requires a synthesized instance and
an equality proof. An unchanged unresolved predicate returns an incomplete result, allowing the
conditional dispatcher to try guard rewrites. Context-dependency information is preserved.
-/
public def simpDecisionProjection (p inst : Expr) : SimpM Result := do
  if let some value := Meta.reduceDecisionProjection? (mkProj ``Decidable 0 inst) then
    let value ← shareCommon value
    return .step value (← Sym.mkEqRefl value)
  match ← simp p with
  | .rfl _ cd =>
    if ← isTrueExpr p then
      return .step (← getBoolTrueExpr) (mkApp (mkConst ``decide_true) inst) (contextDependent := cd)
    else if ← isFalseExpr p then
      return .step (← getBoolFalseExpr) (mkApp (mkConst ``decide_false) inst) (contextDependent := cd)
    else
      return mkRflResult (contextDependent := cd)
  | .step p' h _ cd =>
    if ← isTrueExpr p' then
      return .step (← getBoolTrueExpr) (mkApp3 (mkConst ``Sym.decide_prop_eq_true) p inst h) (contextDependent := cd)
    else if ← isFalseExpr p' then
      return .step (← getBoolFalseExpr) (mkApp3 (mkConst ``Sym.decide_prop_eq_false) p inst h) (contextDependent := cd)
    else
      let .some inst' ← trySynthInstance (mkApp (mkConst ``Decidable) p')
        | return mkRflResult (contextDependent := cd)
      let inst' ← shareCommon inst'
      let c' ← mkProjS ``Decidable 0 inst'
      let proof := mkApp5 (mkConst ``Decidable.decide.congr_simp) p p' h inst inst'
      return .step c' proof (contextDependent := cd)

/--
Simplify a `cond`, using `simplifyDecision p inst` for a recognized decision guard. The callback
receives the existing decision and a shared predicate recovered from its type. If it returns
unchanged with `done := false`, simplify the guard itself; an explicit completion flag is respected.

Compose guard equalities and preserve context dependency through branch selection. An unresolved
conditional remains residual without simplifying both branches. This dispatcher does not impose
an instance-evaluation policy on the callback: CBV supplies its own opacity-aware evaluator.
-/
public def simpCondWith (simplifyDecision : Expr → Expr → SimpM Result) : Simproc := fun e => do
  let numArgs := e.getAppNumArgs
  if numArgs < 4 then return .rfl (done := true)
  propagateOverApplied e (numArgs - 4) fun e => do
    let_expr f@cond α c a b := e | return .rfl
    let result ← if let some (p, inst) ← Meta.Simp.getBoolDecision? c then
      -- The predicate comes from the inferred instance type, not a shared subterm of `e`.
      let result ← simplifyDecision (← shareCommon p) inst
      match result with
      | .rfl false cd =>
        let r ← simp c
        pure <| if cd && !r.isContextDependent then r.withContextDependent else r
      | r => pure r
    else
      simp c
    let result ← match result with
      | .step c' h false cd =>
        let r ← mkEqTransResult c c' h (← simp c')
        pure <| if cd && !r.isContextDependent then r.withContextDependent else r
      | r => pure r
    -- Guard rewrites can depend on the local context even when a branch is selected.
    match result with
    | .rfl _ cd =>
      if isSameExpr c (← getBoolTrueExpr) then
        return .step a (mkApp3 (mkConst ``cond_true f.constLevels!) α a b) (contextDependent := cd)
      else if isSameExpr c (← getBoolFalseExpr) then
        return .step b (mkApp3 (mkConst ``cond_false f.constLevels!) α a b) (contextDependent := cd)
      else
        return mkRflResult (done := true) (contextDependent := cd)
    | .step c' h _ cd =>
      if isSameExpr c' (← getBoolTrueExpr) then
        return .step a (mkApp (e.replaceFn ``Sym.cond_cond_eq_true) h) (contextDependent := cd)
      else if isSameExpr c' (← getBoolFalseExpr) then
        return .step b (mkApp (e.replaceFn ``Sym.cond_cond_eq_false) h) (contextDependent := cd)
      else
        let e' := e.getBoundedAppFn 3
        let e' ← mkAppS₃ e' c' a b
        let h' := mkApp2 (e.replaceFn ``Sym.cond_cond_congr) c' h
        return .step e' h' (done := true) (contextDependent := cd)

/-- Simplifies a Boolean conditional and its underlying proposition when available. -/
public def simpCond : Simproc := simpCondWith simpDecisionProjection

/--
Simplifies a `match`-expression.

The `match` compiler decides value patterns, e.g. `"a"` or `5`, with `DecidableEq` instances
that `reduceMatcherApp?` does not unfold at reducible transparency. When a discriminant is a
value, the `match` is rewritten with its equations instead, and the simplifier discharges their
overlap hypotheses, e.g. `"c" = "a" → False`.
-/
def simpMatch (declName : Name) : Simproc := fun e => do
  if let some e' ← reduceMatcherApp? e then
    return .step e' (← mkEqRefl e')
  let some info ← getMatcherInfo? declName
    | return .rfl
  -- **Note**: Simplify only the discriminants
  let start := info.numParams + 1
  let stop  := start + info.numDiscrs
  let r ← simpAppArgRange e start stop
  match r with
  | .step .. => return r
  | .rfl _ cd =>
    if (← e.getAppArgs.anyM (isMatchValue ·) start stop) then
      let thms ← getMatchTheorems declName
      match (← thms.rewrite dischargeSimpSelf e) with
      | .step e' h done cd' => return .step e' h done (contextDependent := cd || cd')
      | .rfl _ cd' => return mkRflResult (done := true) (contextDependent := cd || cd')
    else
      return mkRflResult (done := true) (contextDependent := cd)

/--
Simplifies control-flow expressions such as `if-then-else` and `match` expressions.
It visits only the conditions and discriminants.
-/
public def simpControl : Simproc := fun e => do
  if !e.isApp then return .rfl
  let .const declName _ := e.getAppFn | return .rfl
  if declName == ``ite then
    simpIte e
  else if declName == ``cond then
    simpCond e
  else if declName == ``dite then
    simpDIte e
  else
    simpMatch declName e

/--
Like `simpControl`, but does not block the simplifier: when the condition or the discriminants
are not decided, the branches are visited too.
-/
public def reduceControl : Simproc := fun e =>
  return (← simpControl e).markAsNotDone

end Lean.Meta.Sym.Simp
