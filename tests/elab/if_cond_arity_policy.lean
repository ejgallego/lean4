module
import Lean
public meta import Lean

/-!
Conditional rewrite arities with raw `@ite` targets and unspecialized `apply_ite`,
including extra applications, indexed matching and liberal matching.
-/

namespace IfCondArityPolicy

set_option maxHeartbeats 100000

@[irreducible] def mark {α : Sort u} (p : Prop) [Decidable p] (a b : α) : α :=
  if p then a else b
theorem mark_rule {α : Sort u} (p : Prop) [Decidable p] (a b : α) :
    (if p then a else b) = mark p a b := by unfold mark; rfl

open Lean Meta Elab Tactic in
elab "direct_mark" : tactic => do
  let goal ← getMainGoal
  goal.withContext do
    let some (_, lhs, rhs) := (← goal.getType).eq? | throwError "expected equality"
    let thms ← mkSimpTheoremFromConst ``mark_rule
    let (result?, _) ← Simp.SimpM.run (← Simp.mkContext) {} {} do
      Simp.tryTheorem? lhs thms[0]!
    let some result := result? | throwError "direct theorem application failed"
    unless result.expr == rhs do
      throwError "unexpected direct rewrite result: {result.expr}"
    let proof ← result.getProof
    check proof
    unless ← isDefEq (← inferType proof) (← goal.getType) do
      throwError "direct rewrite proof does not prove the original raw target"
    goal.assign proof
  replaceMainGoal []

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    @ite (Nat → Nat) p _ f g x = mark p f g x := by
  direct_mark

example (p : Prop) [Decidable p] (f g : Nat → Nat → Nat) (x y : Nat) :
    @ite (Nat → Nat → Nat) p _ f g x y = mark p f g x y := by
  direct_mark

example (p : Prop) [Decidable p] (a b : Nat) :
    @ite Nat p _ a b = mark p a b := by
  simp only [mark_rule]

example (p : Prop) [Decidable p] (a b : Nat) :
    @ite Nat p _ a b = mark p a b := by
  simp (config := { index := false }) only [mark_rule]

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    @ite (Nat → Nat) p _ f g x = mark p f g x := by
  simp only [mark_rule]

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    @ite (Nat → Nat) p _ f g x = mark p f g x := by
  simp (config := { index := false }) only [congrFun (mark_rule p f g) x]

example (p : Prop) [Decidable p] (f g : Nat → Nat → Nat) (x y : Nat) :
    @ite (Nat → Nat → Nat) p _ f g x y = mark p f g x y := by
  simp only [mark_rule]

example (p : Prop) [Decidable p] (f g : Nat → Nat → Nat) (x y : Nat) :
    @ite (Nat → Nat → Nat) p _ f g x y = mark p f g x y := by
  simp (config := { index := false }) only [congrFun (congrFun (mark_rule p f g) x) y]

example (p : Prop) [Decidable p] (f : Nat → Nat) (x y : Nat) :
    f (if p then x else y) = (if p then f x else f y) := by
  conv => lhs; simp only [apply_ite]

example (p : Prop) [Decidable p] (f : Nat → Nat) (x y : Nat) :
    f (if p then x else y) = (if p then f x else f y) := by
  conv => lhs; simp (config := { index := false }) only [apply_ite]

example (p : Prop) [Decidable p] (f : Nat → Nat) (x y : Nat) :
    f (if p then x else y) = (if p then f x else f y) := by
  conv => lhs; simp (config := Lean.Meta.Simp.neutralConfig) only [apply_ite]

/-! Unspecialized `apply_ite` must terminate on conditional functions even when matching fails. -/

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    (if p then f else g) x = (if p then f x else g x) := by
  conv => lhs; simp only [apply_ite]
  all_goals cases ‹Decidable p› <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    (if p then f else g) x = (if p then f x else g x) := by
  conv => lhs; simp (config := { index := false }) only [apply_ite]
  all_goals cases ‹Decidable p› <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat → Nat) (x y : Nat) :
    (if p then f else g) x y = (if p then f x y else g x y) := by
  conv => lhs; simp only [apply_ite]
  all_goals cases ‹Decidable p› <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat → Nat) (x y : Nat) :
    (if p then f else g) x y = (if p then f x y else g x y) := by
  conv => lhs; simp (config := { index := false }) only [apply_ite]
  all_goals cases ‹Decidable p› <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat → Nat) (x y : Nat) :
    (if p then f else g) x y = (if p then f x y else g x y) := by
  conv => lhs; simp (config := Lean.Meta.Simp.neutralConfig) only [apply_ite]
  all_goals cases ‹Decidable p› <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    (if p then f else g) x = (if p then f else g) x := by
  conv => lhs; simp only [apply_ite]
  all_goals cases ‹Decidable p› <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    (if p then f else g) x = (if p then f else g) x := by
  conv => lhs; simp (config := { index := false }) only [apply_ite]
  all_goals cases ‹Decidable p› <;> rfl

opaque customDecision (p : Prop) [Decidable p] : Decidable p := inferInstance

example (p : Prop) [Decidable p] (f g : Nat → Nat → Nat) (x y : Nat) :
    @ite (Nat → Nat → Nat) p (customDecision p) f g x y =
      @mark (Nat → Nat → Nat) p (customDecision p) f g x y := by
  direct_mark

example (p : Prop) [Decidable p] (f g : Nat → Nat → Nat) (x y : Nat) :
    @ite (Nat → Nat → Nat) p (customDecision p) f g x y =
      @mark (Nat → Nat → Nat) p (customDecision p) f g x y := by
  simp only [mark_rule]

example (p : Prop) [Decidable p] (f g : Nat → Nat → Nat) (x y : Nat) :
    @ite (Nat → Nat → Nat) p (customDecision p) f g x y =
      @mark (Nat → Nat → Nat) p (customDecision p) f g x y := by
  simp (config := { index := false }) only
    [congrFun (congrFun (@mark_rule (Nat → Nat → Nat) p (customDecision p) f g) x) y]

example (p : Prop) [Decidable p] (f g : Nat → Nat → Nat) (x y : Nat) :
    @ite (Nat → Nat → Nat) p (customDecision p) f g x y =
      @mark (Nat → Nat → Nat) p (customDecision p) f g x y := by
  simp (config := Lean.Meta.Simp.neutralConfig) only [mark_rule]

end IfCondArityPolicy
