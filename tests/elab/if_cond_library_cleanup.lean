module
import Lean

/-!
Conditional library compatibility: the existing proposition simp lemmas cover raw Boolean Option
conditionals, and `cond` preserves its branch names for named arguments.
-/

namespace IfCondLibraryCleanup

example {α : Type u} (c : Bool) (b : Option α) (a : α) :
    cond c none b = some a ↔ ¬c = true ∧ b = some a := by
  simp only [Option.ite_none_left_eq_some]

example {α : Type u} (c : Bool) (b : Option α) (a : α) :
    cond c b none = some a ↔ c = true ∧ b = some a := by
  simp only [Option.ite_none_right_eq_some]

example {α : Type u} (c : Bool) (b : Option α) (a : α) :
    some a = cond c none b ↔ ¬c = true ∧ some a = b := by
  simp only [Option.some_eq_ite_none_left]

example {α : Type u} (c : Bool) (b : Option α) (a : α) :
    some a = cond c b none ↔ c = true ∧ some a = b := by
  simp only [Option.some_eq_ite_none_right]

example {α : Type u} (p : Prop) [Decidable p] (b : Option α) (a : α) :
    (if p then none else b) = some a ↔ ¬p ∧ b = some a := by
  simp only [Option.ite_none_left_eq_some]

example {α : Type u} (p : Prop) [Decidable p] (b : Option α) (a : α) :
    (if p then b else none) = some a ↔ p ∧ b = some a := by
  simp only [Option.ite_none_right_eq_some]

example {α : Type u} (p : Prop) [Decidable p] (b : Option α) (a : α) :
    some a = (if p then none else b) ↔ ¬p ∧ some a = b := by
  simp only [Option.some_eq_ite_none_left]

example {α : Type u} (p : Prop) [Decidable p] (b : Option α) (a : α) :
    some a = (if p then b else none) ↔ p ∧ some a = b := by
  simp only [Option.some_eq_ite_none_right]

example (c : Bool) (x y : Nat) : cond c (x := x) (y := y) = cond c x y := rfl

end IfCondLibraryCleanup
