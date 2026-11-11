module
prelude
import Init.Core

/-! Test conditional tactics before later `Init` simplification lemmas are imported. -/

example (b : Bool) : cond b True True := by
  split
  next h =>
    exact (fun (_ : b = true) => True.intro) h
  next h =>
    exact (fun (_ : ¬ b = true) => True.intro) h

example (p : Prop) [Decidable p] : (if p then True else True) := by
  split
  next h => exact (fun (_ : p) => True.intro) h
  next h => exact (fun (_ : ¬ p) => True.intro) h

example (b : Bool) (h : cond b False False) : False := by
  split at h <;> exact h

example (p : Prop) [Decidable p] (h : if p then False else False) : False := by
  split at h <;> exact h

example (b : Bool) (a c : Nat) : cond b a c = cond b a c := by
  simp -failIfUnchanged <;> rfl
example (p : Prop) [Decidable p] (a c : Nat) : (if p then a else c) = (if p then a else c) := by
  simp -failIfUnchanged <;> rfl

set_option backward.split false

example (b : Bool) : cond b True True := by
  split
  next h =>
    exact (fun (_ : b = true) => True.intro) h
  next h =>
    exact (fun (_ : ¬ b = true) => True.intro) h

example (p : Prop) [Decidable p] : (if p then True else True) := by
  split
  next h => exact (fun (_ : p) => True.intro) h
  next h => exact (fun (_ : ¬ p) => True.intro) h

example (b : Bool) (h : cond b False False) : False := by
  split at h <;> exact h

example (p : Prop) [Decidable p] (h : if p then False else False) : False := by
  split at h <;> exact h

namespace EarlyBoolCases

def choose (b : Bool) : Nat := bif b then 1 else 2

example (b : Bool) : choose b = 1 ∨ choose b = 2 := by
  fun_cases choose b
  next _ => exact Or.inl rfl
  next _ => exact Or.inr rfl

end EarlyBoolCases
