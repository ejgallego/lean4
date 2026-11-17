module
import Lean

/-! Conditional guards in dependent positions must share normalized propositions and activate
E-matching rules for native decision projections. Guards also remain observable as Booleans. -/

set_option grind.debug true

private structure GuardBuf where
  n : Nat
  data : Fin n → Nat

example (x : Int) (d : Fin (if x - 1 ≤ 2 then 3 else 4) → Nat)
    (b : GuardBuf) (hb : b = ⟨if x - 1 ≤ 2 then 3 else 4, d⟩)
    (hx : x ≤ 3) : b.n = 3 := by
  grind (branches := 0)

example (x : Int) (d : Fin (if x - 1 ≤ 2 then 3 else 4) → Nat)
    (b : GuardBuf) (hb : b = ⟨if x - 1 ≤ 2 then 3 else 4, d⟩)
    (hx : 4 ≤ x) : b.n = 4 := by
  grind (branches := 0)

section sym
set_option backward.grind.normalizer false

example (x : Int) (d : Fin (if x - 1 ≤ 2 then 3 else 4) → Nat)
    (b : GuardBuf) (hb : b = ⟨if x - 1 ≤ 2 then 3 else 4, d⟩)
    (hx : x ≤ 3) : b.n = 3 := by
  grind (branches := 0)

example (x : Int) (d : Fin (if x - 1 ≤ 2 then 3 else 4) → Nat)
    (b : GuardBuf) (hb : b = ⟨if x - 1 ≤ 2 then 3 else 4, d⟩)
    (hx : 4 ≤ x) : b.n = 4 := by
  grind (branches := 0)

end sym

example (c : Bool) (d : Fin (if c then 3 else 4) → Nat)
    (b : GuardBuf) (hb : b = ⟨if c then 3 else 4, d⟩) (hc : c = false) : b.n = 4 := by
  grind (branches := 0)

example (c : Bool) (d : Fin (if c then 3 else 4) → Nat)
    (b : GuardBuf) (hb : b = ⟨if c then 3 else 4, d⟩) (hc : c = true) : b.n = 3 := by
  grind (branches := 0)

opaque observeGuard : Bool → Nat

example (p : Prop) [Decidable p] (hp : p) :
    (if p then 1 else 2) = 1 ∧ observeGuard (decide p) = observeGuard true := by
  grind (branches := 0)

example (p : Prop) [Decidable p] (hp : ¬p) :
    (if p then 1 else 2) = 2 ∧ observeGuard (decide p) = observeGuard false := by
  grind (branches := 0)

opaque guardPredicate : Nat → Prop
axiom guardPredicate_true (n : Nat) : guardPredicate n

@[grind =] theorem guardDecision_rule (n : Nat) [Decidable (guardPredicate n)] :
    decide (guardPredicate n) = true :=
  decide_eq_true (guardPredicate_true n)

example (n : Nat) [Decidable (guardPredicate n)] :
    (if guardPredicate n then 1 else 2) = 1 := by
  grind (branches := 0)

opaque falseGuardPredicate : Nat → Prop
axiom falseGuardPredicate_false (n : Nat) : ¬falseGuardPredicate n

@[grind =] theorem falseGuardDecision_rule (n : Nat) [Decidable (falseGuardPredicate n)] :
    decide (falseGuardPredicate n) = false :=
  decide_eq_false (falseGuardPredicate_false n)

example (n : Nat) [Decidable (falseGuardPredicate n)] :
    (if falseGuardPredicate n then 1 else 2) = 2 := by
  grind (branches := 0)

example (p q : Prop) [Decidable p] [Decidable q] (hpq : p ↔ q) (a b : Nat) :
    (if p then a else b) = (if q then a else b) := by
  grind (branches := 0)
