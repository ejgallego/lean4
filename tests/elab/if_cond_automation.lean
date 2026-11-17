module
public import Lean
public meta import Lean
public meta import Lean.Elab.Tactic.Omega.OmegaM
import Std.Tactic.BVDecide

/-! Conditional Omega and BVDecide consumers. Grind/native-Sym cases are added with B11. -/

open Lean Elab Term in
elab "raw_decision% " d:term : term => do
  return Expr.proj ``Decidable 0 (← elabTerm d none)

/-! `omega` -/

namespace IfCondOmega

example (b : Bool) : cond b (0 : Int) 1 ≤ 1 := by omega
example (b : Bool) : cond b (0 : Nat) 1 ≤ 1 := by omega
example (p : Prop) [Decidable p] : (if p then (0 : Int) else 1) ≤ 1 := by omega
example (p : Prop) [Decidable p] : (if p then (0 : Nat) else 1) ≤ 1 := by omega
example (p : Prop) [Decidable p] : cond (decide p) (0 : Int) 1 ≤ 1 := by omega
example (p : Prop) [Decidable p] : cond (decide p) (0 : Nat) 1 ≤ 1 := by omega
example (x : Nat) : cond (Nat.beq x 0) (0 : Int) 1 ≤ 1 := by omega
example (x : Nat) : cond (Nat.beq x 0) (0 : Nat) 1 ≤ 1 := by omega
example (x : Nat) : (if x = 0 then (0 : Int) else 1) ≤ 1 := by omega
example (x : Nat) : (if x = 0 then (0 : Nat) else 1) ≤ 1 := by omega
example (x : Nat) : cond (Nat.beq x 0) 0 x = x := by omega
example (x : Nat) : (if x = 0 then 0 else x) = x := by omega
example (x y : Nat) : cond (decide (x ≤ y)) x y ≤ y := by omega
example (x y : Nat) : cond (Nat.ble x y) x y ≤ y := by omega
example (x y : Nat) : cond (Nat.blt x y) x y ≤ y := by omega

opaque opaqueLeDecision (x y : Nat) : Decidable (x ≤ y) := inferInstance

example (x y : Nat) :
    letI := opaqueLeDecision x y
    (if x ≤ y then x else y) ≤ y := by
  omega

example (x y : Nat) (d : Decidable (x ≤ y)) : cond d.decide x y ≤ y := by omega

example (x y : Nat) (h : x ≤ y) : min x y = x := by omega
example (x y : Nat) (h : x ≤ y) : max x y = y := by omega
example (x y : Int) (h : x ≤ y) : min x y = x := by omega
example (x y : Int) (h : x ≤ y) : max x y = y := by omega

example (n : Nat) (h : ¬(n == 0) = true) : n - 1 < n := by
  omega

example (n : Nat) (h : (n == 0) = false) : n - 1 < n := by
  omega

example (b : Bool) (a c n : Nat) (h : ite (b = true) a c ≤ n) : cond b a c ≤ n := by
  omega

example (b : Bool) (a c n : Int) (h : ite (b = true) a c ≤ n) : cond b a c ≤ n := by
  omega

opaque opaqueBoolDecision (b : Bool) : Decidable (b = true) := inferInstance

example (b : Bool) (a c n : Nat)
    (h : @ite Nat (b = true) (opaqueBoolDecision b) a c ≤ n) : cond b a c ≤ n := by
  omega

example (a b : Int) (h : (decide (a ≤ b) && decide (b ≤ a)) = true) : a = b := by omega

example (a b : Int) (h : (!(decide (a < b) || decide (b < a))) = true) : a = b := by omega

example (a : Int) : cond (decide (0 ≤ a) && !decide (1 ≤ a)) a 0 = 0 := by omega

example (a i : Int) :
    (¬i = 0 → (a + 1).tdiv i = a.tdiv i +
      cond ((decide (0 < a + 1) && decide (i ∣ a + 1)) ||
        (decide (a < 0) && decide (i ∣ a))) i.sign 0) ↔
    (¬i = 0 → -(a + 1).tdiv i = -a.tdiv i +
      cond ((decide (0 < a + 1) && decide (i ∣ a + 1)) ||
        (decide (a < 0) && decide (i ∣ a))) (-i.sign) 0) := by omega

example (a b : Int) (h : decide (a ≤ b) = decide (b ≤ a)) : a = b := by omega

example (a b : Int) (h : (!(decide (a ≤ b) == decide (b ≤ a))) = true) : a ≠ b := by omega

example (a b : Int) : (if a ≤ b ↔ b ≤ a then a - b else 0) = 0 := by
  omega

example (a b : Nat)
    (h : ((raw_decision% (inferInstance : Decidable (a ≤ b))) &&
      !(raw_decision% (inferInstance : Decidable (a < b)))) = true) : a = b := by omega

example (a b : Int) (h : (decide (a < b) || decide (b < a)) = false) : a = b := by omega

open Lean Meta Elab Tactic Omega in
run_meta do
  withLocalDeclD `p (mkSort .zero) fun p =>
    withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d => do
      let e := mkApp5 (mkConst ``ite [1]) (mkConst ``Int) p d (toExpr (0 : Int)) (toExpr (1 : Int))
      let facts ← (analyzeAtom e).run {}
      unless facts.length == 1 do throwError "expected a conditional split certificate"
      for fact in facts do
        let type ← inferType fact
        if (type.find? (·.isConstOf ``ite)).isSome then
          throwError "Omega produced an ite certificate"
        unless (type.find? (·.isConstOf ``cond)).isSome do
          throwError "Omega did not produce a cond certificate"

example (x y : Nat) : @ite Nat (x ≤ y) (opaqueLeDecision x y) x y ≤ y := by omega
example (x y : Int) : ite (x ≤ y) x y ≤ y := by omega
example (x y : Int) : (if x ≤ y then x else y) ≤ y := by omega

end IfCondOmega

/-! `bv_decide` -/

example (x y : UInt32) : (if x < y then true else false) = x.toBitVec.ult y.toBitVec := by
  bv_decide

example (p : Prop) [Decidable p] (x y : BitVec 8) :
    (dite p (fun _ => x) (fun _ => y)) = (if p then x else y) := by
  bv_decide
