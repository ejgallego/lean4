module
import Lean

/-! Splitting mixed conditional representations uses equivalent Boolean hypotheses. -/

set_option backward.split true in
example (a b : UInt64) :
    ite (a == b) (if a == b then (1 : Nat) else 2) 3 = ite (a == b) 1 3 := by
  split <;> rfl

set_option backward.split true in
example (a b : UInt64) :
    ite (a == b) (1 : Nat) (if a == b then 2 else 3) = ite (a == b) 1 3 := by
  split <;> rfl

set_option backward.split false in
example (a b : UInt64) :
    ite (a == b) (if a == b then (1 : Nat) else 2) 3 = ite (a == b) 1 3 := by
  split <;> rfl

set_option backward.split false in
example (b : Bool) (x y : Nat) :
    ite (!b = true) x y = x ∨ ite (!b = true) x y = y := by
  split <;> simp

set_option backward.split true in
example (n m : Nat) : cond (n == m) True True := by
  split
  next h => exact (fun (_ : (n == m) = true) => True.intro) h
  next h => exact (fun (_ : ¬(n == m) = true) => True.intro) h

set_option backward.split false in
example (n m : Nat) : cond (n == m) True True := by
  split
  next h => exact (fun (_ : (n == m) = true) => True.intro) h
  next h => exact (fun (_ : ¬(n == m) = true) => True.intro) h
