module
public import Lean
public meta import Lean

/-!
`simp` on conditionals: guards are rewritten through their propositions, `ite_true`/`ite_false`
reduce decided guards, contextual rewriting and dischargers see the guard's proposition, and a
bare decision projection is reflected as `decide p`.
-/

namespace IfCondSimp

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

opaque opaqueDecision (p : Prop) [Decidable p] : Decidable p := inferInstance

example (p : Prop) [Decidable p] (h : p) :
    cond (@decide p (opaqueDecision p)) 1 2 = 1 := by
  simp [h]

example (p : Prop) [Decidable p] (h : ¬p) :
    cond (@decide p (opaqueDecision p)) 1 2 = 2 := by
  simp [h]

example (p : Prop) [Decidable p] (h : p) :
    cond (@decide p (opaqueDecision p)) 1 2 = 1 := by
  simp only [h, ite_true]

example (p : Prop) [Decidable p] (h : ¬p) :
    cond (@decide p (opaqueDecision p)) 1 2 = 2 := by
  simp only [h, ite_false]

example (x y : Nat) (h : x < y) :
    (if x < y then (fun n : Nat => n + 1) else (fun n => n + 2)) 0 = 1 := by
  simp only [h, ite_true]

example (p : Prop) [Decidable p] (h : ¬p) : (if p → False then 1 else 2) = 1 := by
  simp only [h, not_false_eq_true, ite_true]

example (p : Prop) [Decidable p] (h : p) : (if p → False then 1 else 2) = 2 := by
  simp only [h, not_true_eq_false, ite_false]

example (p : Prop) [Decidable p] (h : ¬p) : cond (decide (p → False)) 1 2 = 1 := by
  simp only [h, not_false_eq_true, ite_true]

opaque compoundDecision (p q : Prop) [Decidable (p ∧ q)] : Decidable (p ∧ q) := inferInstance

example (p q : Prop) [Decidable (p ∧ q)] (h : p ∧ q) :
    (if (@decide (p ∧ q) (compoundDecision p q)) then 1 else 2) = 1 := by
  simp [h]

example (p q : Prop) [Decidable (p ∧ q)] (h : ¬(p ∧ q)) :
    (if (@decide (p ∧ q) (compoundDecision p q)) then 1 else 2) = 2 := by
  simp [h]

-- Guard rewrites through the proposition.
example (a b c : Nat) :
    (if a + c ≤ b + c then (10 : Nat) else 20) = (if a ≤ b then 10 else 20) := by
  simp only [Nat.add_le_add_iff_right]

example (a b : Nat) :
    (if 0 ≤ Int.negSucc b ∨ Int.negSucc b ∣ Int.ofNat (a + 1) then (0 : Int) else 1) =
      (if (↑(b + 1) : Int) ∣ Int.ofNat (a + 1) then 0 else 1) := by
  simp only [Int.negSucc_not_nonneg, Int.negSucc_dvd, false_or]

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
  simp only [h, Bool.true_and]

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

/-! Contextual simplification and dischargers inside Boolean conditionals (#3943). -/

example (x : Nat) :
    cond (x == 0) x (x + 1) + x = cond (x == 0) 0 (x + 1) + x := by
  simp (config := { contextual := true })

example (p : Prop) [Decidable p] (x y : Nat) (h : p → x = 0) :
    cond (decide p) x y = cond (decide p) 0 y := by
  simp (discharger := assumption) only [h]

example (p : Prop) [Decidable p] (x y : Nat) (h : ¬p → y = 0) :
    cond (decide p) x y = cond (decide p) x 0 := by
  simp (discharger := assumption) only [h]

example (p : Prop) [Decidable p] (x y : Nat) (h : p → x = 0) :
    cond (decide p) x y = cond (decide p) 0 y := by
  fail_if_success simp only [h]
  by_cases hp : p <;> simp [hp, h, Bool.cond_true, Bool.cond_false]

example (x : Nat) (a b : Nat) (h : x ≠ 0 → a = 0) :
    cond (!(x == 0)) a b = cond (!(x == 0)) 0 b := by
  simp (discharger := assumption) only [h]

example (p q : Prop) [Decidable p] [Decidable q] (a b : Nat) (h : p ∧ q → a = 0) :
    cond (decide p && decide q) a b = cond (decide p && decide q) 0 b := by
  simp (discharger := assumption) only [h]

/-! Reflection of bare decision projections. -/

open Lean Elab Term in
elab "raw_decision% " d:term : term => do
  let d ← elabTerm d none
  return mkProj ``Decidable 0 d

noncomputable opaque hiddenDecision (p : Prop) : Decidable p := Classical.propDecidable p
abbrev DecisionAlias (p : Prop) := Decidable p

example (p : Prop) [d : Decidable p] : ((raw_decision% d) = true) ↔ p := by simp
example (p : Prop) [d : Decidable p] : ((raw_decision% d) = false) ↔ ¬ p := by simp
example (p : Prop) [d : Decidable p] : (¬ (raw_decision% d) = true) ↔ ¬ p := by simp
example (p : Prop) [d : Decidable p] : (¬ (raw_decision% d) = false) ↔ p := by simp
example (p : Prop) [d : DecisionAlias p] : ((raw_decision% d) = true) ↔ p := by simp
example (p : Prop) : ((raw_decision% (hiddenDecision p)) = true) ↔ p := by simp
example (p : Prop) : ((raw_decision% (hiddenDecision p)) = false) ↔ ¬ p := by simp
example (p q : Prop) [d : Decidable (p ∧ q)] : ((raw_decision% d) = true) ↔ p ∧ q := by simp

example (p : Prop) [d : Decidable p] : ((raw_decision% d) = true) ↔ p := by
  simp only [↓reduceDecisionEq]

example (p : Prop) (h : (raw_decision% (hiddenDecision p)) = true) : p := by
  simp at h
  guard_hyp h : p
  exact h

example (p : Prop) (h : (raw_decision% (hiddenDecision p)) = false) : ¬ p := by
  simp at h
  guard_hyp h : ¬ p
  exact h

/-! Library simp lemmas about conditionals. -/

example (p : Prop) [Decidable p] (x : α) :
    (if p then some x else none).isSome = true ↔ p := by simp

example (p : Prop) [Decidable p] (x : α) (xs : Option α) :
    (x ∈ if p then xs else none) ↔ p ∧ x ∈ xs := by simp

example (p : Prop) [Decidable p] (x : α) (xs : Option α) :
    (x ∈ if p then none else xs) ↔ ¬ p ∧ x ∈ xs := by simp

example {α : Type} (c : Bool) (a : α) (b : Option α) :
    cond c none b = some a ↔ ¬c = true ∧ b = some a := by simp
example {α : Type} (c : Bool) (a : α) (b : Option α) :
    cond c b none = some a ↔ c = true ∧ b = some a := by simp
example {α : Type} (c : Bool) (a : α) (b : Option α) :
    some a = cond c none b ↔ ¬c = true ∧ some a = b := by simp
example {α : Type} (c : Bool) (a : α) (b : Option α) :
    some a = cond c b none ↔ c = true ∧ some a = b := by simp
example {α : Type} (p : Prop) [Decidable p] (a b : α) :
    cond (decide p) (some a) none = some b ↔ p ∧ a = b := by simp

/-! Termination of `simp` on Boolean guards. -/

-- Rebuilding a guard must make progress after implicit type normalization.
example (x y : Fin (2 ^ 4)) (a b z : Nat) (h : (if y ≤ x then a else b) = z) :
    (if y ≤ x then a else b) = z := by
  simp (config := { arith := true, failIfUnchanged := false }) only at h
  exact h

set_option maxHeartbeats 10000 in
example (p q : Bool) (a b : Nat) :
    cond (p && q) a b = a ∨ cond (p && q) a b = b := by
  simp_all -failIfUnchanged
  cases p <;> cases q <;> simp_all

def filter (p : Bool) : Option Nat → Option Nat
  | some a => cond p (some a) none
  | none => none

@[simp] theorem filter_none (p : Bool) : filter p none = none := rfl
theorem filter_some (p : Bool) (a : Nat) : filter p (some a) = cond p (some a) none := rfl

set_option maxHeartbeats 10000 in
example (p q : Bool) (o : Option Nat) : filter q (filter p o) = filter (p && q) o := by
  cases o <;> repeat (simp_all [filter_some]; try split)

end IfCondSimp
