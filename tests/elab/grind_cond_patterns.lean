module
import Lean
public meta import Lean

/-!
Automatic E-matching selection must avoid a conditional root whose head does not activate
the theorem. Explicit conditional roots and conditionals nested below another root remain supported.
-/

namespace GrindCondPatterns

def choose (b : Bool) (x y : Nat) : Nat := if b then x else y

theorem choose_eq (b : Bool) (x y : Nat) : choose b x y = (if b then x else y) := rfl

/--
info: Try this:
  [apply] [grind =] for pattern: [choose #2 #1 #0]
-/
#guard_msgs in
attribute [grind] choose_eq

opaque observe : Nat → Nat

theorem observe_rule (b : Bool) (x y : Nat) :
    observe (if b then x else y) = if b then observe x else observe y := by
  cases b <;> rfl

open Lean Meta Grind in
run_meta do
  let root ← mkEMatchEqTheorem ``choose_eq (useLhs := false)
  unless root.patterns.any (·.isAppOf ``cond) do
    throwError "explicit conditional-root pattern was lost"
  let nested ← mkEMatchEqTheorem ``observe_rule
  unless nested.patterns.any (fun p => (p.find? (·.isAppOf ``cond)).isSome) do
    throwError "conditional nested in an explicit pattern was lost"

theorem cond_observe (b : Bool) (x y : Nat) :
    (if b then observe x else observe y) = observe (if b then x else y) := by
  cases b <;> rfl

/--
info: Try this:
  [apply] [grind =_] for pattern: [observe (@cond `[Nat] #2 #1 #0)]
-/
#guard_msgs in
attribute [grind] cond_observe

example (b : Bool) (x y : Nat) :
    (if b then observe x else observe y) = observe (if b then x else y) := by
  grind (branches := 0)

example (b : Bool) (x y : Nat) :
    (if b then observe x else observe y) = observe (if b then x else y) := by
  grind (branches := 0) only [= cond_observe]

end GrindCondPatterns
