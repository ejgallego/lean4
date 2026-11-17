module
public import Lean

/-! Named arguments infer omitted parameters through the types of instance-implicit binders. -/

open Lean Elab Term Meta in
elab "prj% " i:num e:term:max : term => do
  let e ← elabTerm e none
  let .const n _ := (← whnf (← inferType e)).getAppFn | throwError "structure expected"
  return mkProj n i.getNat e

class Tag (p : Prop) where
  value : Nat

def foo {p : Prop} [d : Tag p] (h : prj% 0 d = 0) : Nat := prj% 0 d

example (p : Prop) [d : Tag p] (h : prj% 0 d = 0) : Nat := @foo (h := h)

example (p : Prop) [d : Tag p] (h : prj% 0 d = 0) : @foo (h := h) = prj% 0 d := rfl

class Tagged (p : Prop) [Tag p] where
  value : Nat

def bar {p : Prop} [Tag p] [d : Tagged p] (h : prj% 0 d = 0) : Nat := prj% 0 d

example (p : Prop) [Tag p] [d : Tagged p] (h : prj% 0 d = 0) : Nat := @bar (h := h)
