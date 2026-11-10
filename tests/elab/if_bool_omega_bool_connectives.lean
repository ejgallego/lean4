module
public import Lean
public meta import Lean

/-! Omega recovers arithmetic facts from native Boolean connective guards. -/

example (a b : Int) (h : (decide (a ≤ b) && decide (b ≤ a)) = true) : a = b := by omega

example (a b : Int) (h : (!(decide (a < b) || decide (b < a))) = true) : a = b := by omega

example (a : Int) : cond (decide (0 ≤ a) && !decide (1 ≤ a)) a 0 = 0 := by omega

example (a i : Int) :
    (¬i = 0 → (a + 1).tdiv i = a.tdiv i +
      cond ((decide (0 < a + 1) && decide (i ∣ a + 1)) ||
        (decide (a < 0) && decide (i ∣ a))) i.sign 0) ↔
    (¬i = 0 → -(a + 1).tdiv i = -a.tdiv i +
      cond ((decide (0 < a + 1) && decide (i ∣ a + 1)) ||
        (decide (a < 0) && decide (i ∣ a))) (-i.sign) 0) := by omega

example (a b : Int) (h : decide (a ≤ b) = decide (b ≤ a)) : a = b := by omega

example (a b : Int) (h : (!(decide (a ≤ b) == decide (b ≤ a))) = true) : a ≠ b := by omega

example (a b : Int) : (if a ≤ b ↔ b ≤ a then a - b else 0) = 0 := by
  simp only [Bool.decide_iff_dist]
  omega

open Lean Elab Term in
elab "omega_raw_decision% " d:term : term => do
  return Expr.proj ``Decidable 0 (← Lean.Elab.Term.elabTerm d none)

example (a b : Nat)
    (h : ((omega_raw_decision% (inferInstance : Decidable (a ≤ b))) &&
      !(omega_raw_decision% (inferInstance : Decidable (a < b)))) = true) : a = b := by omega

example (a b : Int) (h : (decide (a < b) || decide (b < a)) = false) : a = b := by omega
