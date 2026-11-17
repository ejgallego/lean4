module
import Lean

/-! Cbv uses its full conditional evaluator for ordinary-if decision projections. -/

example : (if String.Pos.Raw.mk 1 = String.Pos.Raw.mk 2 then 5 else 42) = 42 := by
  conv => lhs; cbv

example : (if String.Pos.Raw.mk 1 = String.Pos.Raw.mk 1 then 5 else 42) = 5 := by
  conv => lhs; cbv

example [Decidable (true = false)] :
    (if true = false then 5 else 42) = 42 := by
  conv => lhs; cbv

example [Decidable (String.Pos.Raw.mk 1 = String.Pos.Raw.mk 1)] :
    (if String.Pos.Raw.mk 1 = String.Pos.Raw.mk 1 then 5 else 42) = 5 := by
  conv => lhs; cbv

example :
    (if String.Pos.Raw.mk 1 = String.Pos.Raw.mk 2 then (fun n : Nat => n + 1)
     else (fun n => n + 2)) 40 = 42 := by
  conv => lhs; cbv

example : (if true && !false then 5 else 42) = 5 := by
  conv => lhs; cbv

example : (if true && false then 5 else 42) = 42 := by
  conv => lhs; cbv

example : (Id.run do
    let mut sum := 0
    for n in [1, 2, 3] do
      sum := sum + n
    return sum) = 6 := by cbv
