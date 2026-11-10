module
prelude
import Init.Core

/-!
The executable's Boolean conditional simplifier must work before its reflection
and branch-selection lemmas have been imported during Init bootstrapping.
-/

example (b : Bool) (x y : Nat) : cond b x y = cond b x y := by
  simp -failIfUnchanged <;> rfl

example (p q : Prop) [Decidable (p ∧ q)] :
    (if p ∧ q then 1 else 2) = (if p ∧ q then 1 else 2) := by
  simp -failIfUnchanged <;> rfl
