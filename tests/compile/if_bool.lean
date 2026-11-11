module

/-! Check that Boolean `if` elaboration evaluates only the selected branch in both backends. -/

def selectEq (x : Nat) : Nat :=
  if x = 0 then 17 else panic! "evaluated the unselected equality branch"

def selectNe (x : Nat) : Nat :=
  if x = 0 then panic! "evaluated the unselected inequality branch" else 23

def selectBool (b : Bool) : Nat :=
  if b then 31 else panic! "evaluated the unselected Boolean branch"

def selectFunction (b : Bool) : Nat → Nat :=
  if b then (fun x => x + 1) else panic! "evaluated the unselected function branch"

public def main (args : List String) : IO Unit := do
  let x := args.length
  unless selectEq x == 17 && selectNe (x + 1) == 23 &&
      selectBool args.isEmpty == 31 && selectFunction args.isEmpty x == 1 do
    throw <| IO.userError "incorrect conditional result"
