module
import Init.Data.Option.Lemmas
/-! Native Boolean conditional simplification for optional values. -/
example {α : Type} (c : Bool) (a : α) (b : Option α) :
    cond c none b = some a ↔ ¬c = true ∧ b = some a := by simp
example {α : Type} (c : Bool) (a : α) (b : Option α) :
    cond c b none = some a ↔ c = true ∧ b = some a := by simp
example {α : Type} (c : Bool) (a : α) (b : Option α) :
    some a = cond c none b ↔ ¬c = true ∧ some a = b := by simp
example {α : Type} (c : Bool) (a : α) (b : Option α) :
    some a = cond c b none ↔ c = true ∧ some a = b := by simp
example {α : Type} (p : Prop) [Decidable p] (a b : α) :
    cond (decide p) (some a) none = some b ↔ p ∧ a = b := by simp
