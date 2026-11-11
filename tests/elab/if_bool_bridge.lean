module
import Lean

/-! Check that conditional representation bridges preserve their rewrite orientation. -/

set_option maxRecDepth 100 in
example (p : Prop) [Decidable p] (x y : Nat) (h : ite p x y = x) : ite p x y = x := by
  simp -failIfUnchanged only [Lean.Grind.cond_eq_ite] at h
  guard_hyp h :ₛ ite p x y = x
  exact h

set_option maxRecDepth 100 in
example (b : Bool) (x y : Nat) (h : cond b x y = x) : ite b x y = x := by
  simp only [Lean.Grind.cond_eq_ite] at h
  guard_hyp h :ₛ ite b x y = x
  exact h

example (a b : Nat) (h : b ≤ a) : a - b + b = a := by
  grind

namespace NestedBridge

opaque wrap : Nat → Nat

theorem condToIte (b : Bool) (x y : Nat) : wrap (cond b x y) = wrap (ite b x y) := rfl
theorem iteToCond (b : Bool) (x y : Nat) : wrap (ite b x y) = wrap (cond b x y) := rfl

set_option maxRecDepth 100 in
example (p : Prop) [Decidable p] (x y : Nat) (h : wrap (ite p x y) = x) :
    wrap (ite p x y) = x := by
  simp -failIfUnchanged only [condToIte] at h
  guard_hyp h :ₛ wrap (ite p x y) = x
  exact h

set_option maxRecDepth 100 in
example (b : Bool) (x y : Nat) (h : wrap (cond b x y) = x) : wrap (cond b x y) = x := by
  simp -failIfUnchanged only [iteToCond] at h
  guard_hyp h :ₛ wrap (cond b x y) = x
  exact h

end NestedBridge
