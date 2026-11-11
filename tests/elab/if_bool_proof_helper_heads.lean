module
import Lean

/-! Conditional proof constructors retain their declared heads across self-hosting. -/
open Lean Meta

run_meta do
  for name in [``ite_eq_left_of_eq_true, ``ite_eq_right_of_eq_false] do
    let type := (← getConstInfo name).type
    forallTelescope type fun _ conclusion => do
      let some (_, lhs, _) := conclusion.eq? | throwError "expected equality in {name}"
      unless lhs.isAppOfArity ``ite 5 do
        throwError "conditional proof helper changed ite head: {name}: {lhs}"

run_meta do
  forallTelescope (← getConstInfo ``Lean.Omega.ite_disjunction).type fun _ conclusion => do
    unless (conclusion.find? (·.isConstOf ``ite)).isSome do
      throwError "ite_disjunction no longer refers to the explicit ite expression"

run_meta do
  for name in [``Bool.cond_eq_left_of_eq_true, ``Bool.cond_eq_right_of_eq_false] do
    forallTelescope (← getConstInfo name).type fun _ conclusion => do
      let some (_, lhs, _) := conclusion.eq? | throwError "expected equality in {name}"
      unless lhs.isAppOfArity ``cond 4 do throwError "Boolean proof helper changed cond head"

run_meta do
  forallTelescope (← getConstInfo ``dite_eq_cond).type fun _ conclusion => do
    let some (_, _, rhs) := conclusion.eq? | throwError "expected conditional equality"
    unless rhs.isAppOfArity ``cond 4 do throwError "constant dependent branches must produce cond"

set_option grind.debug true
example (p : Prop) [Decidable p] (h : p) (a b : Nat) : ite p a b = a := by grind
example (p : Prop) [Decidable p] (h : ¬p) (a b : Nat) : ite p a b = b := by grind

example (p : Prop) [Decidable p] (h : p) (a b : Nat) : (if p then a else b) = a := by grind
example (p : Prop) [Decidable p] (h : ¬p) (a b : Nat) : (if p then a else b) = b := by grind

open Lean.Grind in
example {K : Type} [Field K] (a b : K) (h : a ≠ b) : (a - b)⁻¹ * (a - b) = 1 := by grind

run_meta do
  forallTelescope (← getConstInfo ``Int.Internal.Linear.natCast_sub).type fun _ type => do
    let some (_, _, rhs) := type.eq? | throwError "expected cast-subtraction equality"
    unless rhs.isAppOfArity ``cond 4 do
      throwError "arithmetic proof helper must use cond"

set_option maxHeartbeats 10000 in
example (a : Nat) :
    (((a + (2 ^ 64 - 1)) % 2 ^ 64 + 1) * 8 - 1 - (a + (2 ^ 64 - 1)) % 2 ^ 64 * 8 + 1) = 8 := by
  grind
