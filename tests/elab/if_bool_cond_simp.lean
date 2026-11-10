module
import Init.Data.Nat.Basic
import Init.Data.Int.DivMod.Lemmas
import Lean.Elab.Tactic.Simp
public meta import Lean.Meta.Tactic.Simp.Main
import Lean.Meta.Tactic.Simp.BuiltinSimprocs.Core

/-!
Check that simplification uses propositional hypotheses to select projected Boolean conditionals.
-/

example (x y : Nat) (h : x < y) : (if x < y then 1 else 2) = 1 := by
  simp [h]

example (x y : Nat) (h : x < y) : cond (Nat.blt x y) 1 2 = 1 := by
  simp [h]

example (x y : Nat) (h : ¬x < y) : cond (Nat.blt x y) 1 2 = 2 := by
  simp [h]

example (x y : Nat) (h : x ≤ y) : cond (Nat.ble x y) 1 2 = 1 := by
  simp [h]

example (x y : Nat) (h : x = y) : cond (Nat.beq x y) 1 2 = 1 := by
  simp [h]

example (p : Prop) [Decidable p] (h : p) : cond (decide p) 1 2 = 1 := by
  simp [h]

example (p : Prop) [Decidable p] (h : ¬p) : cond (decide p) 1 2 = 2 := by
  simp [h]

opaque condSimpDecision (p : Prop) [Decidable p] : Decidable p := inferInstance

example (p : Prop) [Decidable p] (h : p) :
    cond (@decide p (condSimpDecision p)) 1 2 = 1 := by
  simp [h]

example (p : Prop) [Decidable p] (h : ¬p) :
    cond (@decide p (condSimpDecision p)) 1 2 = 2 := by
  simp [h]

example (x y : Nat) (h : x < y) : cond (Nat.blt x y) 1 2 = 1 := by
  simp only [h]

example (x y : Nat) (h : ¬x < y) : cond (Nat.blt x y) 1 2 = 2 := by
  simp only [h]

example (p : Prop) [Decidable p] (h : p) :
    cond (@decide p (condSimpDecision p)) 1 2 = 1 := by
  simp only [h]

example (p : Prop) [Decidable p] (h : ¬p) :
    cond (@decide p (condSimpDecision p)) 1 2 = 2 := by
  simp only [h]

example (x y : Nat) (h : x < y) :
    (if x < y then (fun n : Nat => n + 1) else (fun n => n + 2)) 0 = 1 := by
  simp only [h]

example (x y : Nat) (h : x < y) :
    cond (Nat.blt x y) (fun n : Nat => n + 1) (fun n => n + 2) 0 = 1 := by
  simp only [h]

example (p : Prop) [Decidable p] (h : ¬p) : (if p → False then 1 else 2) = 1 := by
  simp only [h]

example (p : Prop) [Decidable p] (h : p) : (if p → False then 1 else 2) = 2 := by
  simp only [h]

example (p : Prop) [Decidable p] (h : ¬p) : cond (decide (p → False)) 1 2 = 1 := by
  simp only [h]

opaque compoundDecision (p q : Prop) [Decidable (p ∧ q)] : Decidable (p ∧ q) := inferInstance

example (p q : Prop) [Decidable (p ∧ q)] (h : p ∧ q) :
    (if (@decide (p ∧ q) (compoundDecision p q)) then 1 else 2) = 1 := by
  simp [h]

example (p q : Prop) [Decidable (p ∧ q)] (h : ¬(p ∧ q)) :
    (if (@decide (p ∧ q) (compoundDecision p q)) then 1 else 2) = 2 := by
  simp [h]

example (a b c : Nat) :
    (if a + c ≤ b + c then (10 : Nat) else 20) = (if a ≤ b then 10 else 20) := by
  simp only [Nat.add_le_add_iff_right]

example (a b : Nat) :
    (if 0 ≤ Int.negSucc b ∨ Int.negSucc b ∣ Int.ofNat (a + 1) then (0 : Int) else 1) =
      (if (↑(b + 1) : Int) ∣ Int.ofNat (a + 1) then 0 else 1) := by
  simp only [Int.negSucc_not_nonneg, Int.negSucc_dvd, false_or]

example {α : Sort u} (b : Bool) (x y : α) :
    (if b = false then x else y) = cond b y x := by simp

example (b : Bool) (p : Prop) [Decidable p] (h : (b = true) = p) (x y : Nat) :
    cond b x y = (if p then x else y) := by
  simp only [h]

example (b : Bool) (p : Prop) (h : (b = true) = p) (x y : Nat) :
    cond b x y = cond (@decide p (Eq.mp (congrArg Decidable h) inferInstance)) x y := by
  simp only [h]

example (b c : Bool) (h : (b = true) = (c = true)) (x y : Nat) :
    cond b x y = cond c x y := by
  simp only [h]

example {α : Sort u} (b : Bool) [d : Decidable (b = true)] (x y : α) :
    @ite α (b = true) d x y = cond b x y := Bool.ite_eq_cond b x y

example (b : Bool) (x y : Nat) : cond b x y = ite b x y := by
  simp [Bool.cond_eq_ite]

example (a b : Bool) (h : a = true) (x y : Nat) :
    cond (a && !b) x y = cond (!b) x y := by
  simp only [h]

open Lean Meta in
run_meta do
  withLocalDeclD `a (mkConst ``Bool) fun a => do
  withLocalDeclD `b (mkConst ``Bool) fun b => do
    let rules ← ({} : SimpTheorems).addConst ``Bool.and_eq_true
    let ctx ← Simp.mkContext (simpTheorems := #[rules])
    let value := mkApp4 (mkConst ``cond [.succ .zero]) (mkConst ``Nat)
      (mkApp2 (mkConst ``Bool.and) a b) (mkNatLit 1) (mkNatLit 2)
    let (_, state) ← Simp.mainCore value ctx {} (Simp.mkDefaultMethodsCore #[])
    unless state.usedTheorems.contains (.decl ``Bool.and_eq_true) do
      throwError "Boolean reflection bypassed the caller's simp rule"
