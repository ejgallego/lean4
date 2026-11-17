inductive Foo1 where
  | a1
  deriving DecidableEq

/--
info: def Foo1.ofNat : Nat → Foo1 :=
fun n => Foo1.a1
-/
#guard_msgs in
#print Foo1.ofNat

inductive Foo2 where
  | a1 | a2
  deriving DecidableEq

/--
info: def Foo2.ofNat : Nat → Foo2 :=
fun n => if n.ble 0 = true then Foo2.a1 else Foo2.a2
-/
#guard_msgs in
#print Foo2.ofNat

inductive Foo3 where
  | a1 | a2 | a3
  deriving DecidableEq

/--
info: def Foo3.ofNat : Nat → Foo3 :=
fun n => if n.ble 0 = true then Foo3.a1 else if n.ble 1 = true then Foo3.a2 else Foo3.a3
-/
#guard_msgs in
#print Foo3.ofNat

inductive Foo4 where
  | a1 | a2 | a3 | a4
  deriving DecidableEq

/--
info: def Foo4.ofNat : Nat → Foo4 :=
fun n =>
  if n.ble 1 = true then if n.ble 0 = true then Foo4.a1 else Foo4.a2 else if n.ble 2 = true then Foo4.a3 else Foo4.a4
-/
#guard_msgs in
#print Foo4.ofNat

inductive Foo5 where
  | a1 | a2 | a3 | a4 | a5
  deriving DecidableEq

/--
info: def Foo5.ofNat : Nat → Foo5 :=
fun n =>
  if n.ble 1 = true then if n.ble 0 = true then Foo5.a1 else Foo5.a2
  else if n.ble 2 = true then Foo5.a3 else if n.ble 3 = true then Foo5.a4 else Foo5.a5
-/
#guard_msgs in
#print Foo5.ofNat
