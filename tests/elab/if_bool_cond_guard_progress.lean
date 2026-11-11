module
import Lean
/-! Conditional guard rebuilding must make progress after implicit type normalization. -/
example (x y : Fin (2 ^ 4)) (a b z : Nat) (h : (if y ≤ x then a else b) = z) :
    (if y ≤ x then a else b) = z := by
  simp (config := { arith := true, failIfUnchanged := false }) only at h
  exact h
example (x y : Fin (2 ^ 4)) :
    (x - y).val = if y ≤ x then x.val - y.val else x.val + 2 ^ 4 - y.val := by grind
example (x y : Fin (2 ^ 16)) :
    (x - y).val = if y ≤ x then x.val - y.val else x.val + 2 ^ 16 - y.val := by grind
