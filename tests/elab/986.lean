module
import all Init.Data.Array.InsertionSort
import Lean

/-! Equation lemmas for insertion sort are available after marking its helper for simplification,
and the successor equation retains its shared proof binding (#986, #16208). -/

attribute [simp] Array.insertionSort.swapLoop

/--
info: Array.insertionSort.swapLoop.eq_1.{u_1} {α : Type u_1} (lt : α → α → Bool) (xs : Array α) (h : 0 < xs.size) :
  Array.insertionSort.swapLoop lt xs 0 h = xs
-/
#guard_msgs in
#check Array.insertionSort.swapLoop.eq_1

open Lean Meta in
run_meta do
  let info ← getConstInfo ``Array.insertionSort.swapLoop.eq_2
  forallTelescope info.type fun _ type => do
    unless type.isAppOfArity ``Eq 3 do
      throwError "expected an equation theorem"
    let .letE _ binderType _ _ true := type.getArg! 2
      | throwError "expected the successor equation to retain its leading have"
    unless ← isProp binderType do
      throwError "expected a shared proof binding"

example {α : Type u} (lt : α → α → Bool) (xs : Array α) (j' : Nat) (h : j'.succ < xs.size) :
    Array.insertionSort.swapLoop lt xs j'.succ h =
      have h' : j' < xs.size := Nat.lt_trans (Nat.lt_succ_self _) h
      bif lt xs[j'.succ] xs[j'] then
        Array.insertionSort.swapLoop lt (xs.swap j'.succ j' h h') j'
          (by rw [Array.size_swap]; exact h')
      else xs := by
  rw [Array.insertionSort.swapLoop.eq_2] <;> dsimp only <;>
    cases lt xs[j'.succ] xs[j'] <;> rfl
