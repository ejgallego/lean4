module
public import Lean
public meta import Lean

/-! Rebuilding reflected conditional guards preserves maximal sharing across repeated rewrites. -/

set_option sym.debug true

open Lean Meta Elab Tactic in
elab "sym_projected_guard" : tactic => do
  let rewrite ← Sym.mkSimprocFor #[``Nat.add_zero] Sym.Simp.dischargeSimpSelf
  let methods : Sym.Simp.Methods := {
    pre := Sym.Simp.simpControl
    post := Sym.Simp.evalGround >> rewrite
  }
  liftMetaTactic1 fun goal => Sym.SymM.run do
    discard <| Sym.shareCommon (mkConst ``Decidable.decide)
    let goal ← Sym.preprocessMVar goal
    (← Sym.simpGoal goal methods).toOption

example (P : Nat → Prop) [DecidablePred P] (n a b : Nat) :
    (if P (n + 0) then a else b) = (if P n then a else b) := by
  sym_projected_guard

example (P : Nat → Prop) [DecidablePred P] (n a b : Nat) :
    ((if P (n + 0) then a else b), (if P (n + 0 + 0) then b else a)) =
      ((if P n then a else b), (if P n then b else a)) := by
  sym_projected_guard
