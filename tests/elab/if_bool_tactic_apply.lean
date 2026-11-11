module
import Lean

/-! Apply conditional induction to projected values and preserve failed matches. -/

example (p : Prop) [Decidable p] (a b : Nat × Nat) (k : Nat)
    (ha : a.1 < k) (hb : b.1 < k) : (if p then a else b).1 < k := by
  apply iteInduction (motive := fun q : Nat × Nat => q.1 < _) <;> intro
  next => exact ha
  next => exact hb

example (a b : String.Pos.Raw) (k : Nat)
    (ha : a.byteIdx < k) (hb : b.byteIdx < k) : (if a ≤ b then a else b).byteIdx < k := by
  apply iteInduction (c := a ≤ b) (motive := (String.Pos.Raw.byteIdx · < _)) <;> intro
  next => exact ha
  next => exact hb

example (p : Prop) [Decidable p] (h : p) : (if p then 0 else 1) = 0 := by
  fail_if_success apply (iteInduction (c := False) (t := 0) (e := 1)
    (motive := fun n : Nat => n = 0))
  simp only [h]
