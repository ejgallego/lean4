/-!
Regression test for #16033: `grind` anchors distinguish shadowed local variables, so `grind?`
produces a script that replays.
-/

variable (c : Nat)

/--
info: Try these:
  [apply] grind only [= Nat.min_def, #4b9c]
  [apply] grind only [= Nat.min_def]
  [apply] grind =>
    instantiate only [= Nat.min_def]
    cases #4b9c
-/
#guard_msgs in
example : ∀ a b : Nat, a ≤ b → min a c ≤ a → min a c ≤ c → min a c ≤ min b c := fun x x _ _ _ => by
  grind?

example : ∀ a b : Nat, a ≤ b → min a c ≤ a → min a c ≤ c → min a c ≤ min b c := fun x x _ _ _ => by
  grind only [= Nat.min_def, #4b9c]

example : ∀ a b : Nat, a ≤ b → min a c ≤ a → min a c ≤ c → min a c ≤ min b c := fun x x _ _ _ => by
  grind only [= Nat.min_def]

example : ∀ a b : Nat, a ≤ b → min a c ≤ a → min a c ≤ c → min a c ≤ min b c := fun x x _ _ _ => by
  grind =>
    instantiate only [= Nat.min_def]
    cases #4b9c
