module
import Lean
/-! Splitting Boolean guards whose inferred type is definitionally equal to `Bool`. -/

example (b : Bool) : (if (pure b : Id Bool) then 1 else 2) > 0 := by
  split <;> decide

set_option backward.split false in
example (b : Bool) : (if (pure b : Id Bool) then 1 else 2) > 0 := by
  split <;> decide

example (b : Bool) (h : (if (pure b : Id Bool) then 1 else 2) = 0) : False := by
  split at h <;> contradiction

set_option backward.split false in
example (b : Bool) (h : (if (pure b : Id Bool) then 1 else 2) = 0) : False := by
  split at h <;> contradiction

example (b : Bool) (h : (if (pure b : Id Bool) then 1 else 2) = 0) : False := by
  simp only [pure] at h
  cases b <;> contradiction
