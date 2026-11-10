module
public import Lean
public meta import Lean

/-! Grind keeps Boolean conditionals native and preserves projected decision guards. -/
open Lean Meta Elab Tactic

elab "guard_native_cond" : tactic => do
  let target ← getMainTarget
  if (target.find? (·.isConstOf ``ite)).isSome then
    throwError "Grind introduced an ite while normalizing a cond"
  let some c := target.find? (fun e => e.isAppOfArity ``cond 4) |
    throwError "Grind removed the symbolic conditional"
  let .proj ``Decidable 0 d := c.getAppArgs[1]! |
    throwError "Grind changed the projected decision guard"
  let p := (← inferType d).appArg!
  let original ← getLocalDeclFromUserName `p
  unless p == mkFVar original.fvarId do
    throwError "Grind changed the source predicate"

example (p : Prop) [Decidable p] (a b z : Nat) (h : (if p then a else b) = z) :
    (if p then a else b) = z := by
  grind_norm
  guard_native_cond
  exact h

example (p : Prop) [Decidable p] (a b z : Nat) (h : (if p then a else b) = z) :
    (if p then a else b) = z := by
  grind_norm sym
  guard_native_cond
  exact h

set_option grind.debug true
example (p : Prop) [Decidable p] (hp : p) (a b : Nat) : (if p then a else b) = a := by
  grind (branches := 0)
example (p : Prop) [Decidable p] (hp : ¬p) (a b : Nat) : (if p then a else b) = b := by
  grind (branches := 0)
example (c : Bool) (hc : c = true) (a b : Nat) : cond c a b = a := by grind
example (c : Bool) (hc : c = false) (a b : Nat) : cond c a b = b := by grind
example (p : Prop) [Decidable p] (a b z : Nat) (ha : a = z) (hb : b = z) :
    (if p then a else b) = z := by grind
example (p : Prop) [Decidable p] (hp : p) (f g : Nat → Nat) :
    (if p then f else g) 0 = f 0 := by grind
example (p q r : Prop) [Decidable p] (h : ¬(if p then q else r)) :
    if p then ¬q else ¬r := by grind
example (p : Prop) [Decidable p] (a b z : Nat) (h : (if _ : p then a else b) = z) :
    (if p then a else b) = z := by grind
example (p : Prop) [Decidable p] (hp : p) (a b : Nat) : ite p a b = a := by grind

opaque nativePredicate : Nat → Prop
example (n : Nat) [Decidable (nativePredicate n)] (h : nativePredicate n) :
    (if nativePredicate n then (1 : Nat) else 2) = 1 := by grind (branches := 0)

open Lean Elab Term in
elab "grind_raw_decide% " d:term : term => do
  return Expr.proj ``Decidable 0 (← elabTerm d none)

example (p : Prop) (d₁ d₂ : Decidable p) (a b : Nat) :
    cond (grind_raw_decide% d₁) a b = cond (grind_raw_decide% d₂) a b := by
  grind (branches := 0)
example (p q : Prop) (d₁ : Decidable p) (d₂ : Decidable q) (h : p = q) (a b : Nat) :
    cond (grind_raw_decide% d₁) a b = cond (grind_raw_decide% d₂) a b := by
  grind (branches := 0)
example (p q : Prop) [Decidable p] (h : p = q) (hq : q) (a b : Nat) :
    (if p then a else b) = a := by grind (branches := 0)
example (p q : Prop) [Decidable p] (h : q = p) (hq : q) (a b : Nat) :
    (if p then a else b) = a := by grind (branches := 0)
example (p : Prop) (d : Decidable p) (hp : p) (f : Bool → Nat) :
    f (grind_raw_decide% d) = f true := by grind (branches := 0)
example (p : Prop) [Decidable p] (hp : p) (f g : Nat → Nat → Nat) :
    (if p then f else g) 0 1 = f 0 1 := by grind (branches := 0)
example (c : Bool) (f g h : Nat → Nat) (hh : cond c f g = h) (x : Nat) :
    cond c f g x = h x := by grind [funCC cond]

opaque branchValue : Nat → Nat
example (p : Prop) [Decidable p] (hp : p) (a b : Nat) :
    (if p then (fun n m => branchValue a + n + m) else (fun n m => branchValue b + n + m)) 0 0 =
      branchValue a := by grind (branches := 0)
