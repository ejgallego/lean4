module
public import Lean
public meta import Lean
public meta import Lean.Meta.Tactic.Grind.NormSym

/-! Attribute-time and runtime normalization agree on the predicate retained by a
primitive decision projection, including fixed arithmetic arguments. -/

set_option backward.grind.normalizer false

opaque observeDecision : Bool → Nat

def numericInput (x : Nat) := observeDecision (decide (x ≤ 2 + 3))

open Lean Meta in
run_meta do
  lambdaTelescope (← getConstInfo ``numericInput).value! fun _ body => do
    let attr ← Grind.normalize body {}
    let params ← Grind.mkDefaultParams {}
    Grind.GrindM.run (params := params) do
      let runtime ← Grind.normSym body
      let attr ← Sym.shareCommon attr
      let runtime ← Sym.shareCommon runtime.expr
      unless Sym.isSameExpr attr runtime do
        throwError "attribute-time and runtime decision normal forms differ:\n{attr}\n{runtime}"

axiom numeric_decision_axiom (x : Nat) :
  observeDecision (decide (x ≤ 2 + 3)) = x

@[grind =] theorem numeric_decision_rule (x : Nat) :
    observeDecision (decide (x ≤ 2 + 3)) = x := numeric_decision_axiom x

example (x : Nat) : observeDecision (decide (x ≤ 5)) = x := by
  grind (branches := 0) only [numeric_decision_rule]
