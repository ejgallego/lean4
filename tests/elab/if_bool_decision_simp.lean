module
public import Lean
public meta import Lean

/-! General simp reflection for primitive decision projections, without reducing their instances. -/

open Lean Meta Elab Term

elab "raw_decision% " d:term : term => do
  let d ← elabTerm d none
  return mkProj ``Decidable 0 d

noncomputable opaque hiddenDecision (p : Prop) : Decidable p := Classical.propDecidable p
abbrev DecisionAlias (p : Prop) := Decidable p

example (p : Prop) [d : Decidable p] : ((raw_decision% d) = true) ↔ p := by
  fail_if_success simp only []
  simp

example (p : Prop) [d : Decidable p] : ((raw_decision% d) = false) ↔ ¬ p := by simp
example (p : Prop) [d : Decidable p] : (¬ (raw_decision% d) = true) ↔ ¬ p := by simp
example (p : Prop) [d : Decidable p] : (¬ (raw_decision% d) = false) ↔ p := by simp
example (p : Prop) [d : DecisionAlias p] : ((raw_decision% d) = true) ↔ p := by simp
example (p : Prop) : ((raw_decision% (hiddenDecision p)) = true) ↔ p := by simp
example (p : Prop) : ((raw_decision% (hiddenDecision p)) = false) ↔ ¬ p := by simp
example (p q : Prop) [d : Decidable (p ∧ q)] : ((raw_decision% d) = true) ↔ p ∧ q := by simp

example (p : Prop) [Decidable p] (x : α) :
    (if p then some x else none).isSome = true ↔ p := by simp

example (p : Prop) [Decidable p] (x : α) (xs : Option α) :
    (x ∈ if p then xs else none) ↔ p ∧ x ∈ xs := by simp

example (p : Prop) [Decidable p] (x : α) (xs : Option α) :
    (x ∈ if p then none else xs) ↔ ¬ p ∧ x ∈ xs := by simp

example (p : Prop) [d : Decidable p] : ((raw_decision% d) = true) ↔ p := by
  simp only [↓reduceDecisionEq]

example (p : Prop) (h : (raw_decision% (hiddenDecision p)) = true) : p := by
  simp at h
  guard_hyp h : p
  exact h

example (p : Prop) (h : (raw_decision% (hiddenDecision p)) = false) : ¬ p := by
  simp at h
  guard_hyp h : ¬ p
  exact h
