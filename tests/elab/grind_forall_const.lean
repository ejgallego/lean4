module
public import Lean
public meta import Lean

/-! Grind removes unused inhabited type binders without collapsing empty domains. -/

example (α : Type) [Nonempty α] (p : Prop) (h : ∀ _ : α, p) : p := by grind
example (p q : Prop) (hp : p) (h : ∀ _ : USize, p → q) : q := by grind
example (p : Prop) (_h : Empty → p) : True := by
  fail_if_success have : p := by grind
  trivial

set_option backward.grind.normalizer false in
example (α : Type) [Nonempty α] (p : Prop) (h : ∀ _ : α, p) : p := by grind

set_option backward.grind.normalizer false in
example (p : Prop) (_h : Empty → p) : True := by
  fail_if_success have : p := by grind
  trivial
