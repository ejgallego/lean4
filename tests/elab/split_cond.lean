module
import Lean
public import Lean.Elab.Term.TermElabM

/-! Test splitting Boolean conditionals in targets and local declarations. -/

example (b : Bool) : cond b 1 2 = 1 ∨ cond b 1 2 = 2 := by
  split
  next h =>
    guard_hyp h : b = true
    exact Or.inl rfl
  next h =>
    guard_hyp h : ¬ b = true
    exact Or.inr rfl

example (b : Bool) (h : cond b 1 2 = 3) : False := by
  split at h <;> contradiction

example (b : Bool) : (cond b (fun x : Nat => x) (fun x => x + 1)) 0 ≤ 1 := by
  split <;> decide

example (b : Bool) : cond (cond b true true) 1 2 = 1 := by
  split
  next h =>
    guard_hyp h : b = true
    rfl
  next h =>
    guard_hyp h : ¬ b = true
    rfl

set_option backward.split false

example (b : Bool) : cond b 1 2 = 1 ∨ cond b 1 2 = 2 := by
  split
  next h =>
    guard_hyp h : b = true
    exact Or.inl rfl
  next h =>
    guard_hyp h : ¬ b = true
    exact Or.inr rfl

example (b : Bool) (h : cond b 1 2 = 3) : False := by
  split at h <;> contradiction

example (b : Bool) : cond (cond b true true) 1 2 = 1 := by
  split
  next h =>
    guard_hyp h : b = true
    guard_target =ₛ cond true 1 2 = 1
    rfl
  next h =>
    guard_hyp h : ¬ b = true
    guard_target =ₛ cond true 1 2 = 1
    rfl

example (p : Prop) [Decidable p] : (if _h : p then True else True) := by
  split <;> trivial

example (p : Prop) [Decidable p] : cond (decide p) True True := by
  split
  next h =>
    guard_hyp h : p
    trivial
  next h =>
    guard_hyp h : ¬ p
    trivial

example (x : Nat) : cond (Nat.beq x 0) 1 2 = 1 ∨ cond (Nat.beq x 0) 1 2 = 2 := by
  split
  next h =>
    guard_hyp h : Nat.beq x 0 = true
    exact Or.inl rfl
  next h =>
    guard_hyp h : ¬ Nat.beq x 0 = true
    exact Or.inr rfl

example {α : Type} [BEq α] [LawfulBEq α] (a b : α)
    (h : cond (a == b) 1 2 = 3) : False := by
  split at h <;> contradiction

example (x : Nat) : (if x = 0 then 1 else 2) = 1 ∨ (if x = 0 then 1 else 2) = 2 := by
  split
  next h =>
    guard_hyp h : x = 0
    exact Or.inl rfl
  next h =>
    guard_hyp h : ¬ x = 0
    exact Or.inr rfl

example (p : Prop) (d : Decidable p) : cond (@decide p d) True True := by
  split
  next h =>
    guard_hyp h : p
    trivial
  next h =>
    guard_hyp h : ¬ p
    trivial

example (x y : Nat) : cond (Nat.blt x y) True True := by
  split
  next h =>
    guard_hyp h : Nat.blt x y = true
    trivial
  next h =>
    guard_hyp h : ¬ Nat.blt x y = true
    trivial

example (x y : Nat) : (if x ≤ y then True else True) := by
  split
  next h =>
    guard_hyp h : x ≤ y
    trivial
  next h =>
    guard_hyp h : ¬ x ≤ y
    trivial

example (p q : Prop) [Decidable p] [Decidable q] :
    cond (decide p && decide q) True True := by
  split
  next h =>
    guard_hyp h : (decide p && decide q) = true
    trivial
  next h =>
    guard_hyp h : ¬ (decide p && decide q) = true
    trivial

example (p q : Prop) [Decidable p] [Decidable q] :
    (if p ∨ q then True else True) := by
  split
  next h =>
    guard_hyp h : p ∨ q
    trivial
  next h =>
    guard_hyp h : ¬ (p ∨ q)
    trivial

example (p : Prop) [Decidable p] : cond (!decide p) True True := by
  split
  next h =>
    guard_hyp h : (!decide p) = true
    trivial
  next h =>
    guard_hyp h : ¬ (!decide p) = true
    trivial

example (p q : Prop) [Decidable p] [Decidable q] :
    (if p ∧ q then True else True) := by
  split
  next h =>
    guard_hyp h : p ∧ q
    trivial
  next h =>
    guard_hyp h : ¬ (p ∧ q)
    trivial

example (p : Prop) [Decidable p] : (if ¬ p then True else True) := by
  split
  next h =>
    guard_hyp h : ¬ p
    trivial
  next h =>
    guard_hyp h : ¬¬ p
    trivial

example (x y : Nat) : (if x < y then True else True) := by
  split
  next h =>
    guard_hyp h : x < y
    trivial
  next h =>
    guard_hyp h : ¬ x < y
    trivial

example (x y : Nat) : cond (Nat.ble x y) True True := by
  split
  next h =>
    guard_hyp h : Nat.ble x y = true
    trivial
  next h =>
    guard_hyp h : ¬ Nat.ble x y = true
    trivial

example (p : Prop) [Decidable p] (h : cond (!decide p) 1 2 = 3) : False := by
  split at h <;> contradiction

set_option backward.split true in
example (p : Prop) [Decidable p] : cond (!decide p) True True := by
  split
  next h =>
    guard_hyp h : (!decide p) = true
    trivial
  next h =>
    guard_hyp h : ¬ (!decide p) = true
    trivial

set_option backward.split true in
example (p : Prop) [Decidable p] (h : cond (!decide p) 1 2 = 3) : False := by
  split at h <;> contradiction

example (p : Prop) (h : ¬¬p) : ¬¬¬¬p := by
  run_tac do
    let goal ← Lean.Elab.Tactic.getMainGoal
    let discharge ← Lean.Meta.SplitIf.mkDischarge?
    let target ← goal.getType
    let ctx ← Lean.Meta.Simp.mkContext
    let (some proof, _) ← Lean.Meta.Simp.SimpM.run ctx {} {} (discharge target)
      | throwError "failed to discharge nested negation"
    goal.assign proof

open Lean Elab Term in
elab "raw_decide% " d:term : term => do
  let d ← elabTerm d none
  return Expr.proj ``Decidable 0 d

def splitTransparentDecision {p : Prop} (d : Decidable p) : Decidable p := d
opaque splitOpaqueDecision {p : Prop} (d : Decidable p) : Decidable p := d

example (p q : Prop) (d : Decidable (id (p ∧ q))) :
    cond (raw_decide% splitTransparentDecision d) True True := by
  split
  next h =>
    guard_hyp h :ₛ id (p ∧ q)
    trivial
  next h =>
    guard_hyp h :ₛ ¬ id (p ∧ q)
    trivial

example (p q : Prop) (d : Decidable (id (p ∧ q))) :
    cond (raw_decide% splitOpaqueDecision d) True True := by
  split
  next h =>
    guard_hyp h :ₛ id (p ∧ q)
    trivial
  next h =>
    guard_hyp h :ₛ ¬ id (p ∧ q)
    trivial

example (p q : Prop) (d : Decidable (id (p ∧ q)))
    (h : cond (raw_decide% splitOpaqueDecision d) 1 2 = 3) : False := by
  split at h <;> contradiction

set_option backward.split true in
example (p q : Prop) (d : Decidable (id (p ∧ q))) :
    cond (raw_decide% splitOpaqueDecision d) True True := by
  split
  next h =>
    guard_hyp h :ₛ id (p ∧ q)
    trivial
  next h =>
    guard_hyp h :ₛ ¬ id (p ∧ q)
    trivial

set_option backward.split true in
example (p q : Prop) (d : Decidable (id (p ∧ q)))
    (h : cond (raw_decide% splitTransparentDecision d) 1 2 = 3) : False := by
  split at h <;> contradiction

example (x y : Nat) : (if x.succ ≤ y then True else True) := by
  split
  next h =>
    guard_hyp h :ₛ @LE.le (@& Nat) instLENat x.succ y
    trivial
  next h =>
    guard_hyp h :ₛ ¬ @LE.le (@& Nat) instLENat x.succ y
    trivial
