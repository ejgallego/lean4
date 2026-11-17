module
public import Lean
/-!
Unification of projection functions and primitive projections when the structure is a
metavariable: `S.f ?s =?= t.i` and `?s.i =?= t.i` are solved by `?s := t` before either
projection is reduced.
-/

open Lean Elab Term Meta in
/-- `prj% i e` is the primitive projection `e.i` (0-based). -/
elab "prj% " i:num e:term:max : term => do
  let e ← elabTerm e none
  let .const n _ := (← whnf (← inferType e)).getAppFn | throwError "structure expected"
  return mkProj n i.getNat e

structure Pt where
  x : Nat
  y : Nat

def mk (n : Nat) : Pt := { x := n, y := n + 1 }

class Dec (p : Prop) where
  bit : Bool

instance decNatEq (a b : Nat) : Dec (a = b) := ⟨a == b⟩

/-- Named projection in the statement. -/
theorem named {p : Prop} [d : Dec p] (h : d.bit = true) : Dec.bit p = true := h

/-- Primitive projection in the statement. -/
theorem prim {p : Prop} [d : Dec p] (h : prj% 0 d = true) : prj% 0 d = true := h

-- Class projections, target written with a primitive projection, `p` unknown.
example (a : Nat) (h : prj% 0 (decNatEq a 0) = true) : prj% 0 (decNatEq a 0) = true := by
  apply named
  exact h

example (a : Nat) (h : prj% 0 (decNatEq a 0) = true) : prj% 0 (decNatEq a 0) = true := by
  apply prim
  exact h

example (a : Nat) (h : prj% 0 (decNatEq a 0) = true) : prj% 0 (decNatEq a 0) = true := by
  refine prim ?_
  exact h

-- Target written with the projection function.
example (a : Nat) (h : prj% 0 (decNatEq a 0) = true) : Dec.bit (a = 0) = true := by
  apply prim
  exact h

-- Non-class structures, both orientations.
theorem ptNamed (s : Pt) (h : s.y = 3) : Pt.y s = 3 := h
theorem ptPrim (s : Pt) (h : prj% 1 s = 3) : prj% 1 s = 3 := h

example (n : Nat) (h : prj% 1 (mk n) = 3) : prj% 1 (mk n) = 3 := by
  apply ptNamed
  exact h

example (n : Nat) (h : prj% 1 (mk n) = 3) : prj% 1 (mk n) = 3 := by
  apply ptPrim
  exact h

example (n : Nat) (h : prj% 1 (mk n) = 3) : 3 = prj% 1 (mk n) := by
  apply Eq.symm
  apply ptPrim
  exact h

-- A different field must not match, and the failed attempt must not assign the structure.
theorem ptX (s : Pt) (h : prj% 0 s = 3) : prj% 0 s = 3 := h

example (n : Nat) (h : n + 1 = 3) : prj% 1 (mk n) = 3 := by
  fail_if_success apply ptX
  exact h

-- When comparing the structures fails, reduction is still used.
example (n : Nat) : prj% 0 (mk n) = prj% 0 (Pt.mk n 0) := rfl

example (n : Nat) : ∃ s : Pt, prj% 0 s = prj% 0 (mk n) := ⟨_, rfl⟩
