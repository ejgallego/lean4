module
import Lean
import all Init.Data.Nat.Div.Basic
/-! Analysis annotations must refer to the source predicate subexpression. -/
set_option pp.analyze true
set_option pp.analyze.checkInstances true
set_option pp.analyze.explicitHoles true
set_option pp.proofs true
open Lean Meta Elab Term PrettyPrinter
def conditionalConjunction (a b : Nat) : Nat :=
  if 0 < b ∧ b ≤ a then a - b else a

def conditionalNamedDecision (p q : Prop) [Decidable (p ∧ q)] : Nat :=
  cond (decide (p ∧ q)) 1 2

run_elab do
  for name in [``Nat.mod_eq_of_lt, ``conditionalConjunction, ``conditionalNamedDecision] do
    let some value := (← getConstInfo name).value? (allowOpaque := true)
      | throwError "missing body for {name}"
    let stx ← PrettyPrinter.delab value
    let actual ← elabTerm stx (some (← inferType value))
    synthesizeSyntheticMVarsNoPostponing
    throwErrorIfErrors
    unless ← isDefEq value actual do throwError "roundtrip changed {name}"
