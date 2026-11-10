module
import Lean

/-! Conditional representation compatibility preserves neutral simp reduction settings. -/

example (b : Bool) (p : Prop) :
    (if b then p else False) ↔ b = true ∧ p := by
  simp (config := Lean.Meta.Simp.neutralConfig) only [ite_false_right]

example (b : Bool) (h : b = true) :
    if b then have unused := (); True else False := by
  simp (config := Lean.Meta.Simp.neutralConfig) only [ite_false_right]
  guard_target =ₛ b = true ∧ (have unused := (); True)
  exact ⟨h, trivial⟩

example (p : Prop) [Decidable p] (h : p) : (if p then 1 else 2) = 1 := by
  simp (config := Lean.Meta.Simp.neutralConfig) only [ite_eq_left h]

example (b : Bool) : (if b then 1 else 2) = 1 ∨ (if b then 1 else 2) = 2 := by
  fail_if_success simp (config := Lean.Meta.Simp.neutralConfig) only [ite_eq_left (p := True) trivial]
  cases b <;> decide

example (P : Nat → Prop) [DecidablePred P] :
    (fun x => if P x then x else 0) = (fun x => cond (decide (P x)) x 0) := by
  simp only [eq_self]

example (P : Nat → Prop) [DecidablePred P] :
    (fun x => if P x then x else 0) = (fun x => cond (decide (P x)) x 0) := by
  simp (config := Lean.Meta.Simp.neutralConfig) only [eq_self]

example (b : Bool) (x y : Nat) : ite b x y = cond b x y := by
  split <;> rfl

example (b : Bool) (x y : Nat) : cond b x y = ite b x y := by
  split <;> rfl

open Lean Meta in
run_meta do
  let x ← mkFreshExprMVar (mkConst ``Nat)
  let pattern ← mkEq x x
  let left := mkApp4 (mkConst ``cond [Level.one]) (mkConst ``Nat)
    (mkConst ``Bool.true) (mkNatLit 1) (mkNatLit 2)
  let right := mkApp4 (mkConst ``cond [Level.one]) (mkConst ``Nat)
    (mkConst ``Bool.false) (mkNatLit 1) (mkNatLit 2)
  let target ← mkEq left right
  let ctx ← Simp.mkContext (config := Simp.neutralConfig)
  if ← withConfigWithKey ctx.metaConfig <| isDefEqIf pattern target then
    throwError "matched distinct conditional branches using reflexivity"
  if ← x.mvarId!.isAssigned then throwError "failed reflexivity matching leaked an assignment"
