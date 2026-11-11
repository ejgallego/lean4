module
import Lean

/-! Grind matches native decision projections without losing predicates hidden in instance types. -/

open Lean Meta Grind

opaque condObserver : Nat → Nat
theorem condObserver_rule (p : Prop) [Decidable p] (a b : Nat) :
    condObserver (if p then a else b) = if p then condObserver a else condObserver b := by
  by_cases h : p <;> simp [h]

run_meta do
  let thm ← mkEMatchEqTheorem ``condObserver_rule
  unless thm.patterns.any (fun p => (p.find? (·.isConstOf ``Decidable.decide)).isSome) do
    throwError "decision pattern must retain its predicate and instance"
  if thm.patterns.any (fun p => (p.find? (·.isConstOf ``ite)).isSome) then
    throwError "native conditional pattern must not become ite"

theorem nestedSource_rule (p q : Prop) [Decidable p] [Decidable (if p then q else False)] (a b : Nat) :
    condObserver (if (if p then q else False) then a else b) =
      if (if p then q else False) then condObserver a else condObserver b :=
  condObserver_rule (if p then q else False) a b

run_meta do
  let thm ← mkEMatchEqTheorem ``nestedSource_rule
  if thm.patterns.any (fun p => (p.find? (fun e => e matches .proj ``Decidable 0 _)).isSome) then
    throwError "nested decision predicates must also be exposed in the pattern"

set_option grind.debug true
example (p : Prop) [Decidable p] (a b : Nat) :
    condObserver (if p then a else b) = if p then condObserver a else condObserver b := by
  grind (branches := 0) only [condObserver_rule]

example (p : Prop) (d₁ d₂ : Decidable p) (a b : Nat) :
    condObserver (cond (@Decidable.decide p d₂) a b) =
      cond (@Decidable.decide p d₂) (condObserver a) (condObserver b) := by
  have rule : condObserver (cond (@Decidable.decide p d₁) a b) =
      cond (@Decidable.decide p d₁) (condObserver a) (condObserver b) :=
    @condObserver_rule p d₁ a b
  grind (branches := 0) only

opaque lazyBranch : Nat → Nat

theorem applicationBranch_rule (p : Prop) [Decidable p] (a b : Nat) :
    condObserver (if p then lazyBranch a else b) =
      if p then condObserver (lazyBranch a) else condObserver b :=
  condObserver_rule p (lazyBranch a) b

example (p : Prop) [Decidable p] (a b : Nat) :
    condObserver (if p then lazyBranch a else b) =
      if p then condObserver (lazyBranch a) else condObserver b := by
  grind (branches := 0) only [applicationBranch_rule]

theorem offsetBranch_rule (p : Prop) [Decidable p] (a b : Nat) :
    condObserver (if p then a + 1 else b) =
      if p then condObserver (a + 1) else condObserver b :=
  condObserver_rule p (a + 1) b

example (p : Prop) [Decidable p] (a b : Nat) :
    condObserver (if p then a + 1 else b) =
      if p then condObserver (a + 1) else condObserver b := by
  grind (branches := 0) only [offsetBranch_rule]

example (p : Prop) [Decidable p] (a b : Nat) :
    (cond (@Decidable.decide p inferInstance) (fun n => condObserver a + n)
      (fun n => condObserver b + n)) 0 =
      cond (@Decidable.decide p inferInstance) (condObserver a) (condObserver b) := by
  grind (branches := 2)

opaque branchLeft : Nat → Nat
opaque branchRight : Nat → Nat

example (p : Prop) [Decidable p] (a b : Nat) (h : a = b)
    (rule : ∀ x, condObserver (if p then branchLeft x else branchRight x) = 0) :
    condObserver (if p then branchLeft (lazyBranch a) else branchRight (lazyBranch b)) = 0 := by
  grind (branches := 0) only

theorem nestedBranch_rule (p q : Prop) [Decidable p] [Decidable q] (a b c : Nat) :
    condObserver (if p then (if q then branchLeft a else branchRight b) else c) =
      if p then (if q then condObserver (branchLeft a) else condObserver (branchRight b))
      else condObserver c := by
  by_cases hp : p <;> by_cases hq : q <;> simp [hp, hq]

example (p q : Prop) [Decidable p] [Decidable q] (a b c : Nat) :
    condObserver (if p then (if q then branchLeft a else branchRight b) else c) =
      if p then (if q then condObserver (branchLeft a) else condObserver (branchRight b))
      else condObserver c := by
  grind (branches := 0) only [= nestedBranch_rule]
