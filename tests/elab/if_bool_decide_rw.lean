module
import Lean
public import Lean.Elab.Term.TermElabM

/-! Rewriting the named and projection forms of a Boolean decision uses definitional equality. -/

open Lean Elab Term in
elab "rw_raw_decide% " d:term : term => do
  let d ← elabTerm d none
  return .proj ``Decidable 0 d

example (p : Prop) [Decidable p] (h : decide p = true) :
    (if decide p then (1 : Nat) else 2) = 1 := by
  rw [h]
  rfl

example (p : Prop) [d : Decidable p] (h : (rw_raw_decide% d) = true) :
    cond (decide p) (1 : Nat) 2 = 1 := by
  rw [h]
  rfl

example (p : Prop) [Decidable p] (h : true = decide p) :
    (if decide p then (1 : Nat) else 2) = 1 := by
  rw [← h]
  rfl

example (p : Prop) [Decidable p] (n : Nat) (h : decide p = true)
    (hn : (if decide p then (1 : Nat) else 2) = n) : 1 = n := by
  rw [h] at hn
  exact hn

example (p q : Prop) [Decidable p] [dq : Decidable q] (_h : decide p = true) :
    cond (rw_raw_decide% dq) (0 : Nat) 1 ≤ 1 := by
  fail_if_success rw [_h]
  omega

example (p : Prop) (d₁ d₂ : Decidable p) (_h : @decide p d₁ = true) :
    cond (rw_raw_decide% d₂) (0 : Nat) 1 ≤ 1 := by
  fail_if_success rw [_h]
  omega
