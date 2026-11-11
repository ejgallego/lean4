module

/-! Test `omega` on ordinary and Boolean conditionals over integers and naturals. -/

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
