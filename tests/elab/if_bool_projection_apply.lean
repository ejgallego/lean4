module
import Lean

/-! Conditional compatibility traverses structure projections without reducing their guards. -/

example (p : Prop) [Decidable p] (a b : Nat × Nat) :
    (if p then a else b).1 = (if p then a.1 else b.1) := by
  simp only [apply_ite Prod.fst]

example (p : Prop) [Decidable p] (n : Nat) (a b : Fin n) :
    (if p then a else b).val = (if p then a.val else b.val) := by
  simp only [apply_ite Fin.val]

example (p : Prop) [Decidable p] (a b : (n : Nat) × Fin (n + 1)) :
    (if p then a else b).1 = (if p then a.1 else b.1) := by
  simp only [apply_ite Sigma.fst]

example (p : Prop) [Decidable p] (a b : Nat × Nat) :
    (if p then a else b).1 = (if p then a.1 else b.1) := by
  simp (config := { index := false }) only [apply_ite Prod.fst]

open Lean Meta in
run_meta do
  let nat := mkConst ``Nat
  let pairType := mkApp2 (mkConst ``Prod [.zero, .zero]) nat nat
  let a ← mkFreshExprMVar pairType
  let b ← mkFreshExprMVar pairType
  let d ← synthInstance (mkApp (mkConst ``Decidable) (mkConst ``False))
  let lhs := mkApp5 (mkConst ``ite [Level.one]) pairType (mkConst ``False) d a b
  let pair (x y : Nat) := mkApp4 (mkConst ``Prod.mk [.zero, .zero]) nat nat (mkNatLit x) (mkNatLit y)
  let rhs := mkApp4 (mkConst ``cond [Level.one]) pairType (mkConst ``Bool.true) (pair 1 10) (pair 2 20)
  if ← isDefEqIf (.proj ``Prod 0 lhs) (.proj ``Prod 0 rhs) then
    throwError "matched projections with incompatible guards"
  for m in #[a, b] do
    if ← m.mvarId!.isAssigned then throwError "failed projection matching leaked an assignment"

example (p : Prop) [Decidable p] (a b : Nat × Nat) :
    (if p then a else b).1 = (if p then a.1 else b.1) := by
  simp (config := Lean.Meta.Simp.neutralConfig) only [apply_ite Prod.fst]

example (b : Bool) (a c : (n : Nat) × Fin (n + 1)) :
    (if b then a else c).1 = (if b then a.1 else c.1) := by
  simp only [apply_ite Sigma.fst]
