module
import Lean

/-! Conditional compatibility also matches generic function heads and partial applications. -/

example (f : Nat → Nat) (p : Prop) [Decidable p] (x y : Nat) :
    f (if p then x else y) = (if p then f x else f y) := by
  simp only [apply_ite]

example (f : Nat → Nat → Nat) (p : Prop) [Decidable p] (z x y : Nat) :
    f z (if p then x else y) = (if p then f z x else f z y) := by
  simp only [apply_ite]

example (f : Nat → Nat → Nat) (p : Nat → Prop) [DecidablePred p] (x y : Nat) :
    (fun z => f z (if p z then x else y)) = (fun z => if p z then f z x else f z y) := by
  simp only [apply_ite]

open Lean Meta in
run_meta do
  let f ← mkFreshExprMVar (← mkArrow (mkConst ``Nat) (mkConst ``Nat))
  let x ← mkFreshExprMVar (mkConst ``Nat)
  let y ← mkFreshExprMVar (mkConst ``Nat)
  let d ← synthInstance (mkApp (mkConst ``Decidable) (mkConst ``False))
  let inner := mkApp5 (mkConst ``ite [Level.one]) (mkConst ``Nat) (mkConst ``False) d x y
  let pattern := mkApp f inner
  let selected := mkApp4 (mkConst ``cond [Level.one]) (mkConst ``Nat)
    (mkConst ``Bool.true) (mkNatLit 1) (mkNatLit 2)
  let target := mkApp2 (mkConst ``Nat.add) (mkNatLit 3) selected
  if ← isDefEqIf pattern target then throwError "matched incompatible function argument conditionals"
  for m in #[f, x, y] do
    if ← m.mvarId!.isAssigned then throwError "failed function-head matching leaked an assignment"

example (f : Nat → Nat → Nat) (p : Prop) [Decidable p] (z x y : Nat) :
    f z (if p then x else y) = (if p then f z x else f z y) := by
  simp (config := { index := false }) only [apply_ite]

example (f : Nat → Nat → Prop) (p : Prop) [Decidable p] (z x y : Nat) :
    f z (if p then x else y) ↔ (if p then f z x else f z y) := by
  simp only [apply_ite]
