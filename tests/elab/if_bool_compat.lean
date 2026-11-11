module
import Lean

/-!
Check the Boolean projection definition of `ite` and its compatibility with dependent conditionals.
-/

example {α : Sort u} (p : Prop) [Decidable p] (t e : α) :
    ite p t e = cond (decide p) t e := rfl

example {α : Sort u} (b : Bool) (t e : α) :
    ite b t e = cond b t e := rfl

example {α : Sort u} (p : Prop) [Decidable p] (t e : α) :
    dite p (fun _ => t) (fun _ => e) = ite p t e := dite_eq_ite

example {α : Sort u} (p : Prop) [d : Decidable p] (t e : α) :
    ite p t e = dite p (fun _ => t) (fun _ => e) := by
  cases d <;> rfl

example {α : Sort u} (p : Prop) [Decidable p] (t : p → α) (e : ¬p → α) :
    (if h : p then t h else e h) = dite p t e := rfl

example (p : Prop) [Decidable p] (hp : p) : ite p 1 2 = 1 := by
  exact ite_eq_left hp

example (p : Prop) [Decidable p] (hp : ¬p) : ite p 1 2 = 2 := by
  exact ite_eq_right hp

example (p : Prop) [Decidable p] (hp : p) : (if p then 1 else 2) = 1 := by
  rw [ite_eq_left hp]

example (p : Prop) [Decidable p] (hp : ¬p) : (if p then 1 else 2) = 2 := by
  simp only [ite_eq_right hp]

example (x : Nat) (hx : x = 0) : (if x = 0 then 1 else 2) = 1 := by
  rw [ite_eq_left hx]

example (x : Nat) (hx : x = 0) : (if x = 0 then 1 else 2) = 1 := by
  simp only [ite_eq_left hx]

example (b : Bool) (t : Nat) : (if b then t else t) = t := by
  rw [ite_self]

example (b : Bool) (t : Nat) : (if b then t else t) = t := by
  simp only [ite_self]

opaque ifBoolOpaqueDecision (p : Prop) [Decidable p] : Decidable p := inferInstance

example (p : Prop) [Decidable p] (hp : p) :
    cond (@decide p (ifBoolOpaqueDecision p)) 1 2 = 1 := by
  rw [ite_eq_left hp]

example (p : Prop) [Decidable p] (hp : p) :
    cond (@decide p (ifBoolOpaqueDecision p)) 1 2 = 1 := by
  simp only [ite_eq_left hp]

example (p q : Prop) [Decidable p] [Decidable q] (hp : p) :
    (if q then 1 else 2) = 1 ∨ (if q then 1 else 2) = 2 := by
  fail_if_success rw [ite_eq_left hp]
  fail_if_success simp only [ite_eq_left hp]
  by_cases hq : q <;> simp [hq]

example (p : Prop) [Decidable p] (hp : ¬p) :
    cond (@decide p (ifBoolOpaqueDecision p)) 1 2 = 2 := by
  fail_if_success rw [ite_eq_left (p := True) trivial]
  rw [ite_eq_right hp]

@[irreducible] def ifBoolAliasValue (b : Bool) : Nat := cond b 7 9

@[simp] theorem ifBoolAlias (b : Bool) : ite b 7 9 = ifBoolAliasValue b := by
  unfold ifBoolAliasValue
  cases b <;> rfl

example (b : Bool) : (if b then 7 else 9) = ifBoolAliasValue b := by
  simp only [ifBoolAlias]

example (b : Bool) : (if b then 7 else 9) = ifBoolAliasValue b := by
  fail_if_success simp [-ifBoolAlias]
  exact ifBoolAlias b

open Lean Meta in
run_meta do
  let u ← mkFreshLevelMVar
  let α ← mkFreshExprMVar (mkSort u)
  let t ← mkFreshExprMVar α
  let e ← mkFreshExprMVar α
  let decision ← synthInstance (mkApp (mkConst ``Decidable) (mkConst ``False))
  let pattern := mkApp5 (mkConst ``ite [u]) α (mkConst ``False) decision t e
  let target := mkApp4 (mkConst ``cond [Level.one]) (mkConst ``Nat)
    (mkConst ``Bool.true) (mkNatLit 1) (mkNatLit 2)
  if ← isDefEqIf pattern target then
    throwError "matched a false condition against true"
  if (← α.mvarId!.isAssigned) || (← t.mvarId!.isAssigned) || (← e.mvarId!.isAssigned) then
    throwError "failed conditional matching assigned metavariables"

structure IfBoolAliasRecord where
  flag : Bool

@[simp] theorem ifBoolFieldAlias (s : IfBoolAliasRecord) :
    ite s.flag 7 9 = ifBoolAliasValue s.flag := ifBoolAlias s.flag

example (s : IfBoolAliasRecord) : (if s.flag then 7 else 9) = ifBoolAliasValue s.flag := by
  simp only [ifBoolFieldAlias]

theorem ifBoolOrdinarySelf (p : Prop) [d : Decidable p] (t : α) :
    (if p then t else t) = t := by
  cases d <;> rfl

example (b : Bool) (t : Nat) : ite b t t = t := by
  rw [ifBoolOrdinarySelf]

example (b : Bool) (t : Nat) : ite b t t = t := by
  simp only [ifBoolOrdinarySelf]

example (b : Bool) (f : Nat → Nat) (x : Nat) : (if b then f else f) x = f x := by
  simp (config := { index := false }) only [ite_self]

example (b : Bool) (f : Nat → Nat) (x : Nat) : ite b f f x = f x := by
  simp (config := { index := false }) only [ifBoolOrdinarySelf]

theorem ifBoolOrdinaryPos (p : Prop) [Decidable p] (hp : p) :
    (if p then 1 else 2) = 1 := ite_eq_left hp

example (p : Prop) [Decidable p] (hp : p) : ite p 1 2 = 1 := by
  rw [ifBoolOrdinaryPos p hp]

example (p : Prop) [Decidable p] (hp : p) :
    ite p 1 2 = 1 ∨ ite p 1 2 = 2 := by
  fail_if_success rw [ifBoolOrdinarySelf]
  simp only [ite_eq_left hp, true_or]

example (b : Bool) : cond b 1 2 = 1 ∨ cond b 1 2 = 2 := by
  fail_if_success simp only [Bool.cond_true, Bool.cond_false]
  cases b <;> simp

theorem ifBoolIteApply {α : Sort u} {β : Sort v} (p : Prop) [d : Decidable p]
    (f g : α → β) (x : α) :
    ite p f g x = ite p (f x) (g x) := by
  cases d <;> rfl

theorem ifBoolOrdinaryApply {α : Sort u} {β : Sort v} (p : Prop) [d : Decidable p]
    (f g : α → β) (x : α) :
    (if p then f else g) x = (if p then f x else g x) := by
  cases d <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    (if p then f else g) x = (if p then f x else g x) := by
  rw [ifBoolIteApply] <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    (if p then f else g) x = (if p then f x else g x) := by
  simp only [ifBoolIteApply] <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    (if p then f else g) x = (if p then f x else g x) := by
  simp (config := { index := false }) only [ifBoolIteApply] <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    ite p f g x = ite p (f x) (g x) := by
  rw [ifBoolOrdinaryApply] <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    ite p f g x = ite p (f x) (g x) := by
  simp only [ifBoolOrdinaryApply] <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    ite p f g x = ite p (f x) (g x) := by
  simp (config := { index := false }) only [ifBoolOrdinaryApply] <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat → Nat) (x y : Nat) :
    (if p then f else g) x y = (if p then f x else g x) y := by
  rw [ifBoolIteApply] <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat → Nat) (x y : Nat) :
    (if p then f else g) x y = (if p then f x else g x) y := by
  simp (config := { index := false }) only [ifBoolIteApply] <;> rfl
