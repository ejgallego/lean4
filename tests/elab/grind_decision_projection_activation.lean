module
public import Lean

/-! Global E-matching theorems activate on native decision projections, both at the root
of a pattern and below another function symbol. -/

set_option grind.debug true

opaque decisionPredicate : Nat → Prop
axiom decisionPredicate_true (n : Nat) : decisionPredicate n

@[grind =] theorem decision_root_rule (n : Nat) [Decidable (decisionPredicate n)] :
    decide (decisionPredicate n) = true :=
  decide_eq_true (decisionPredicate_true n)

opaque observeNativeDecision : Bool → Nat

example (n : Nat) [Decidable (decisionPredicate n)] :
    observeNativeDecision (decide (decisionPredicate n)) = observeNativeDecision true := by
  grind (branches := 0)

attribute [-grind] decision_root_rule

opaque observeOtherDecision : Bool → Nat

@[grind =] theorem decision_nested_rule (n : Nat) [Decidable (decisionPredicate n)] :
    observeOtherDecision (decide (decisionPredicate n)) = observeOtherDecision true :=
  congrArg observeOtherDecision (decide_eq_true (decisionPredicate_true n))

example (n : Nat) [Decidable (decisionPredicate n)] :
    observeOtherDecision (decide (decisionPredicate n)) = observeOtherDecision true := by
  grind (branches := 0)
