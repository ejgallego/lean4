module

/-! Test that `split` generates kernel-checkable Boolean conditional proofs with only default imports. -/

example (b : Bool) : cond b 1 2 = 1 ∨ cond b 1 2 = 2 := by
  split
  next h =>
    guard_hyp h : b = true
    exact Or.inl rfl
  next h =>
    guard_hyp h : ¬ b = true
    exact Or.inr rfl

example (b : Bool) (h : cond b 1 2 = 3) : False := by
  split at h <;> contradiction

set_option backward.split false in
example (b : Bool) : cond (cond b true true) 1 2 = 1 := by
  split
  next h =>
    guard_hyp h : b = true
    guard_target =ₛ cond true 1 2 = 1
    rfl
  next h =>
    guard_hyp h : ¬ b = true
    guard_target =ₛ cond true 1 2 = 1
    rfl

example (b : Bool) : cond b True True := by
  split <;> trivial

example (x y : Nat) : (if x.succ ≤ y then True else True) := by
  split
  next h =>
    guard_hyp h :ₛ @LE.le (@& Nat) instLENat x.succ y
    exact True.intro
  next h =>
    guard_hyp h :ₛ ¬ @LE.le (@& Nat) instLENat x.succ y
    exact True.intro
