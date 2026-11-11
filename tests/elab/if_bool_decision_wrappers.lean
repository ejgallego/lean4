module
import Lean
public import Lean.Elab.Term.TermElabM

/-! Explicit conditional bridges recover propositions from exact decision comparisons. -/

open Lean Elab Term in
elab "decision_projection% " d:term : term => do
  return Expr.proj ``Decidable 0 (← elabTerm d none)

opaque wrapperDecision (p : Prop) [Decidable p] : Decidable p := inferInstance

example (p : Prop) [d : Decidable p] (h : p) :
    ite ((decision_projection% d) = true) 1 2 = 1 := by
  simp only [h, ↓reduceIte]

set_option backward.split true in
example (p : Prop) [Decidable p] :
    ite ((decision_projection% wrapperDecision p) = true) True True := by
  split
  next h => exact (fun (_ : p) => True.intro) h
  next h => exact (fun (_ : ¬p) => True.intro) h

set_option backward.split false in
example (p : Prop) [Decidable p] :
    ite ((decision_projection% wrapperDecision p) = true) True True := by
  split
  next h => exact (fun (_ : p) => True.intro) h
  next h => exact (fun (_ : ¬p) => True.intro) h

example (p : Prop) [d : Decidable p] :
    ite ((decision_projection% (inferInstance : Decidable ((decision_projection% d) = true))) = true)
      True True := by
  split
  next h => exact (fun (_ : p) => True.intro) h
  next h => exact (fun (_ : ¬p) => True.intro) h

example : ite ((decision_projection% instDecidableEqBool false true) = true) 1 2 = 2 := by
  simp only [Bool.false_eq_true, ↓reduceIte]

example (p : Prop) [d : Decidable p] (h : p) :
    (if _proof : (decision_projection% d) = true then (1 : Nat) else 2) = 1 := by
  simp only [h, ↓reduceDIte]

opaque consumeDecisionProof (p : Prop) [d : Decidable p] : @decide p d = true → Nat := fun _ => 0

example (p : Prop) [d : Decidable p] (hp : p) :
    (if proof : (decision_projection% d) = true then consumeDecisionProof p proof else 0) =
      consumeDecisionProof p (@decide_eq_true p d hp) := by
  simp only [hp, ↓reduceDIte]

example (k : Nat) :
    ite ((decision_projection% instDecidableEqNat k 0) = true) 1 2 = 1 → k = 0 := by
  split
  · rename_i h
    exact fun _ => h
  · simp
