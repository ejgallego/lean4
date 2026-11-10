module
prelude
import Init.SimpLemmas

/-!
Boolean conditional simplification uses the reflection lemmas already available
without requiring later Nat or propositional library modules.
-/

example (p : Prop) [Decidable p] (h : p) : cond (decide p) (1 : Nat) 2 = 1 := by
  simp only [h]

example (p : Prop) [Decidable p] (h : ¬p) : cond (decide p) (1 : Nat) 2 = 2 := by
  simp only [h]
