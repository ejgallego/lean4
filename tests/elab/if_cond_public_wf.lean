module
import Lean

/-!
Exposed recursive definitions must not depend on transient private simp lemmas
created while reflecting Boolean conditions during well-founded preprocessing.
-/

public section

@[expose] def publicCountdown (n : Nat) : Nat :=
  if n = 0 then 0 else publicCountdown (n - 1) + 1
termination_by n
decreasing_by omega

@[expose] def publicSearch (stop : Nat) (p : Nat → Bool) : Bool :=
  let rec loop (i : Nat) : Bool :=
    if h : i < stop then
      if p i then true else loop (i + 1)
    else false
    termination_by stop - i
    decreasing_by simp_wf; omega
  loop 0

#guard publicCountdown 4 == 4
#guard publicSearch 5 (· == 3)
#guard !(publicSearch 3 (· == 3))
