module
import Lean

/-! Conditional matching recovers compound propositions and decision families under binders. -/

example (x : Nat) : (if x = x then 1 else 2) = 1 := by
  rw [ite_eq_left rfl]

example (p q : Prop) [Decidable p] [Decidable q] (h : p) :
    (if p ∨ q then 1 else 2) = 1 := by
  rw [ite_eq_left (Or.inl h)]

example (p q r : Prop) [Decidable p] [Decidable q] [Decidable r] (h : r) :
    (if p ∨ q ∨ r then 1 else 2) = 1 := by
  rw [ite_eq_left (Or.inr (Or.inr h))]

namespace IfBoolCompound
opaque fold : (Nat → Nat → Nat) → Nat
axiom foldRule (P : Nat → Prop) [DecidablePred P] (f : Nat → Nat → Nat) :
  fold (fun x y => if P y then f x y else x) = 0

example (P : Nat → Prop) [DecidablePred P] (f : Nat → Nat → Nat) :
    fold (fun x y => ite (¬P y) (f x y) x) = 0 := by
  rw [foldRule]

example (P : Nat → Prop) [d : DecidablePred P] (f : Nat → Nat → Nat) :
    fold (fun x y => cond (decide (P y)) (f x y) x) = 0 := by
  rw [foldRule]

end IfBoolCompound

open Lean Meta in
run_meta do
  let q ← mkFreshExprMVar (mkSort .zero)
  let p := mkApp2 (mkConst ``Or) (mkConst ``True) q
  let d ← mkFreshExprMVar (mkApp (mkConst ``Decidable) p)
  let x ← mkFreshExprMVar (mkConst ``Nat)
  let y ← mkFreshExprMVar (mkConst ``Nat)
  withLocalDeclD `r (mkSort .zero) fun r => do
    let tr := mkApp2 (mkConst ``Or) (mkConst ``False) r
    withLocalDeclD `decision (mkApp (mkConst ``Decidable) tr) fun decision => do
      let pattern := mkApp5 (mkConst ``ite [Level.one]) (mkConst ``Nat) p d x y
      let target := mkApp4 (mkConst ``cond [Level.one]) (mkConst ``Nat)
        (.proj ``Decidable 0 decision) (mkNatLit 1) (mkNatLit 2)
      if ← isDefEqIf pattern target then throwError "matched incompatible compound propositions"
      for m in #[q, d, x, y] do
        if ← m.mvarId!.isAssigned then throwError "compound matching leaked an assignment"
