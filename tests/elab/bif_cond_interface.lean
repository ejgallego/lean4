module
import Lean

/-!
`bif` remains supported without deprecation warnings and retains the raw Boolean guard in
`cond`. Its expected `Bool` condition type can disambiguate overloaded names that ordinary
`if` cannot resolve before checking the condition type.
-/

open Lean Meta

set_option linter.deprecated.syntax true

namespace BifCondInterface

#guard_msgs in
def boolCondition (b : Bool) (t e : Nat) : Nat := bif b then t else e

def ordinaryCondition (b : Bool) (t e : Nat) : Nat := if b then t else e

#guard_msgs in
example {α : Sort u} (b : Bool) (t e : α) : (bif b then t else e) = cond b t e := rfl

#guard_msgs in
example {α : Sort u} (b : Bool) (t e : α) :
    (bif b then t else e) = (if b then t else e) := rfl

run_meta do
  for name in [``boolCondition, ``ordinaryCondition] do
    lambdaTelescope (← getConstInfo name).value! fun xs body => do
      unless body.isAppOfArity ``cond 4 do
        throwError "expected cond in {name}: {body}"
      unless body.getAppArgs[1]! == xs[0]! do
        throwError "expected the original Boolean guard in {name}"

namespace Low
  def guard : Bool := true
end Low

namespace High
  def guard : Nat := 1
end High

open Low High

#guard_msgs in
example : Nat := bif guard then 1 else 0

/--
error: Ambiguous term
  guard
Possible interpretations:
  High.guard : Nat

  Low.guard : Bool
-/
#guard_msgs (whitespace := lax) in
example : Nat := if guard then 1 else 0

end BifCondInterface
