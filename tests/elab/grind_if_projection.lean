module
import Lean
public import Lean.Elab.Term.TermElabM

/-! Test that `grind` normalizes projection-backed conditionals using their original propositions. -/

example (p : Prop) [Decidable p] (hp : p) : (if p then True else False) := by
  grind_norm check
  exact hp

example (p q r : Prop) [Decidable p] (h : if _ : p then q else r) :
    (if p then q else r) := by
  grind

example (p : Prop) [Decidable p] (x y : Nat) :
    (if p then x else y) = x → (p ∨ y = x) := by
  grind

example (x : Int) (hx : x = 2) : (if x - 1 ≤ 2 then (3 : Int) else 4) = 3 := by
  grind (branches := 0)

open Lean Elab Term in
elab "raw_grind_decide% " d:term : term => do
  let d ← elabTerm d none
  return Expr.proj ``Decidable 0 d

example (n : Nat) (h : (raw_grind_decide% Nat.decLt 0 n) = false) : n = 0 := by
  grind

example (p : Prop) (d : Decidable p) (h : (raw_grind_decide% d) = true) : p := by
  grind

example (p : Prop) (d : Decidable p) (h : (raw_grind_decide% d) = false) : ¬ p := by
  grind

example (a b c : Nat) (h : (if a < b then a else b) = c) :
    (if a < b then a + 0 else 0 + b) = c := by
  grind_norm check
  exact h

example (a b c : Nat) (f g : Nat → Nat) (h : (if a < b then f else g) a = c) :
    (if a < b then f else g) (a + 0) = c := by
  grind_norm check
  exact h

example (p : Prop) [Decidable p] (h : ¬p) : decide p = false := by
  grind_norm check
  exact h

private structure ProjectionBuf where
  n : Int
  data : Fin n.toNat → Nat

example (x : Int) (d : Fin (if x - 1 ≤ 2 then (3 : Int) else 4).toNat → Nat)
    (b : ProjectionBuf) (hb : b = ⟨if x - 1 ≤ 2 then 3 else 4, d⟩)
    (hx : x = 5) (h : b.n ≠ 4) : False := by
  lia

example (x : Int) (d : Fin (if x - 1 ≤ 2 then (3 : Int) else 4).toNat → Nat)
    (b : ProjectionBuf) (hb : b = ⟨if x - 1 ≤ 2 then 3 else 4, d⟩)
    (hx : x = 2) (h : b.n ≠ 3) : False := by
  lia

example (c : Bool) (d : Fin (if c then (3 : Int) else 4).toNat → Nat)
    (b : ProjectionBuf) (hb : b = ⟨if c then 3 else 4, d⟩)
    (hc : c = false) (h : b.n ≠ 4) : False := by
  lia
