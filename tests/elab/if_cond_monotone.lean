module
import Lean

/-! Boolean conditionals preserve automatic monotonicity proofs for partial fixpoints. -/

def findBool (p : Nat → Bool) (n : Nat) : Option Nat :=
  if p n then some n else findBool p (n + 1)
partial_fixpoint

def findProp (n : Nat) : Option Nat :=
  if n = 0 then some n else findProp (n - 1)
partial_fixpoint

def findDecision (p : Nat → Prop) [DecidablePred p] (n : Nat) : Option Nat :=
  if p n then some n else findDecision p (n + 1)
partial_fixpoint

example (p : Nat → Bool) (n : Nat) :
    findBool p n = (if p n then some n else findBool p (n + 1)) := by
  rw [findBool]

example (n : Nat) :
    findProp n = (if n = 0 then some n else findProp (n - 1)) := by
  rw [findProp]

example (p : Nat → Prop) [DecidablePred p] (n : Nat) :
    findDecision p n = (if p n then some n else findDecision p (n + 1)) := by
  rw [findDecision]
