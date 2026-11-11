module
prelude
import Init.Core

/-! Decision equality reflection uses only facts available during early Init compilation. -/

example (p : Prop) [Decidable p] : decide p = true ↔ p := by
  simp
  show p ↔ p
  exact Iff.rfl
example (p : Prop) [Decidable p] : decide p = false ↔ ¬ p := by
  simp
  show ¬p ↔ ¬p
  exact Iff.rfl
