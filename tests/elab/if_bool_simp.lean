module
import Lean

/-!
Contextual simplification and custom dischargers recover proposition hypotheses
inside Boolean conditionals without converting `cond` to `ite` (see #3943).
-/

example (x : Nat) :
    cond (x == 0) x (x + 1) + x = cond (x == 0) 0 (x + 1) + x := by
  simp (config := { contextual := true })

example (p : Prop) [Decidable p] (x y : Nat) (h : p → x = 0) :
    cond (decide p) x y = cond (decide p) 0 y := by
  simp (discharger := assumption) only [h]

example (p : Prop) [Decidable p] (x y : Nat) (h : ¬p → y = 0) :
    cond (decide p) x y = cond (decide p) x 0 := by
  simp (discharger := assumption) only [h]

example (p : Prop) [Decidable p] (x y : Nat) (h : p → x = 0) :
    cond (decide p) x y = cond (decide p) 0 y := by
  fail_if_success simp only [h]
  by_cases hp : p <;> simp [hp, h, Bool.cond_true, Bool.cond_false]

example (x : Nat) (a b : Nat) (h : x ≠ 0 → a = 0) :
    cond (!(x == 0)) a b = cond (!(x == 0)) 0 b := by
  simp (discharger := assumption) only [h]

example (p q : Prop) [Decidable p] [Decidable q] (a b : Nat) (h : p ∧ q → a = 0) :
    cond (decide p && decide q) a b = cond (decide p && decide q) 0 b := by
  simp (discharger := assumption) only [h]
