module
import Lean

/-!
Conditional rewriting recovers stored propositions and uses equality with true for raw Boolean code.
-/

namespace IfBoolReconstruct

example (p q : Prop) [Decidable p] [Decidable q] (hp : p) (hq : q) :
    cond (decide p && decide q) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target =ₛ (decide p && decide q) = true
  simp [hp, hq]

example (p q : Prop) [Decidable p] [Decidable q] (hp : p) :
    cond (decide p || decide q) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target =ₛ (decide p || decide q) = true
  simp [hp]

example (p : Prop) [Decidable p] (hp : ¬p) : cond (!decide p) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target =ₛ (!decide p) = true
  simp [hp]

example (x y : Nat) (hxy : x = y) (hle : x ≤ y) :
    cond (Nat.beq x y && Nat.ble x y) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target = (Nat.beq x y && Nat.ble x y) = true
  simp only [Bool.and_eq_true, Nat.beq_eq, Nat.ble_eq]
  exact ⟨hxy, hle⟩

example (x y : Nat) (hlt : x < y) : cond (Nat.ble x.succ y) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target = Nat.ble x.succ y = true
  simpa only [Nat.ble_eq, Nat.succ_le_iff] using hlt

example (x y : Nat) (hlt : x < y) : cond (Nat.blt x y) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target = Nat.blt x y = true
  simpa only [Nat.blt_eq] using hlt

opaque hiddenDecision (p : Prop) [Decidable p] : Decidable p := inferInstance

example (p q : Prop) [Decidable p] [Decidable q] (hp : p) (hq : q) :
    cond ((@decide p (hiddenDecision p)) && decide q) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target =ₛ ((@decide p (hiddenDecision p)) && decide q) = true
  simp [hp, hq]

example (p : Prop) [d : Decidable p] (hp : p) : cond (d.1) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target =ₛ p
  exact hp

example (b : Bool) (hb : b = true) : cond b 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target =ₛ b = true
  exact hb

open Lean Meta in
run_meta do
  let u ← mkFreshLevelMVar
  let α ← mkFreshExprMVar (mkSort u)
  let p ← mkFreshExprMVar (mkSort .zero) MetavarKind.syntheticOpaque
  let d ← mkFreshExprMVar (mkApp (mkConst ``Decidable) p)
  let t ← mkFreshExprMVar α
  let e ← mkFreshExprMVar α
  withLocalDeclD `x (mkConst ``Nat) fun x => do
    let condition := mkApp2 (mkConst ``Nat.beq) x (mkNatLit 0)
    let pattern := mkApp5 (mkConst ``ite [u]) α p d t e
    let target := mkApp4 (mkConst ``cond [Level.one]) (mkConst ``Nat) condition
      (mkNatLit 1) (mkNatLit 2)
    if ← isDefEqIf pattern target then
      throwError "conditional matching assigned an opaque proposition"
    for m in #[α, p, d, t, e] do
      if ← m.mvarId!.isAssigned then
        throwError "failed conditional candidate matching leaked an assignment"

end IfBoolReconstruct
