module
import Lean

/-!
Well-founded recursion through ordinary Boolean `if` retains branch hypotheses,
including the arithmetic meaning of reduced decidable Nat conditions.
-/

namespace IfBoolWF

def countdown (n : Nat) : Nat :=
  if n = 0 then 0 else countdown (n - 1) + 1
termination_by n
decreasing_by omega

def countdownAuto (n : Nat) : Nat :=
  if n = 0 then 0 else countdownAuto (n - 1) + 1
termination_by n

def countdownLt (n : Nat) : Nat :=
  if 0 < n then countdownLt (n - 1) + 1 else 0
termination_by n
decreasing_by omega

def countdownLe (n : Nat) : Nat :=
  if n ≤ 0 then 0 else countdownLe (n - 1) + 1
termination_by n
decreasing_by omega

def countdownBool (n : Nat) : Nat :=
  if n == 0 then 0 else countdownBool (n - 1) + 1
termination_by n
decreasing_by omega

#guard countdown 5 == 5
#guard countdownAuto 5 == 5
#guard countdownLt 5 == 5
#guard countdownLe 5 == 5
#guard countdownBool 5 == 5

end IfBoolWF
