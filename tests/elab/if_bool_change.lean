module
import Lean

/-!
The `change` tactic infers explicit `ite` placeholders from Boolean conditionals,
including computed conditions and conditionals inside an application.
-/

def changeValue (a b value : Nat) := if a < b then value else 0

example : changeValue 1 2 3 = 3 := by
  change ite _ _ _ = _
  rfl

example (h : changeValue 1 2 3 = 4) : changeValue 1 2 3 = 4 := by
  change ite _ _ _ = _ at h
  guard_hyp h :~ ite True 3 0 = 4
  exact h

example (p : Prop) [Decidable p] (x y : Nat) :
    some (if p then x else y) = some (cond (decide p) x y) := by
  change some (ite _ _ _) = _
  rfl

example (a b x y : Nat) : cond (a == b) x y = cond (a == b) x y := by
  fail_if_success change ite _ 0 1 = _
  rfl
