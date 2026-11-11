module
import Std.WP
public meta import Lean.Elab.Tactic.VCGen.SpecDB
public meta import Lean.Meta.Sym.Pattern

/-! VC generation shares projection-bearing theorem schemas under their binders and
keeps reflected propositional, explicit `ite`, and Boolean split rules distinct. -/

set_option sym.debug true
set_option experimental.vcgen true
open Std.WP Lean.Order

example (p : Prop) [Decidable p] (b : Bool) :
    ⦃fun _ => True⦄
      (do
        let x ← ite p (pure 1) (pure 2)
        let y ← if p then pure 3 else pure 4
        let z ← bif b then pure 5 else pure 6
        pure (x + y + z) : StateM Nat Nat)
    ⦃fun r _ => 0 < r⦄ := by
  vcgen

-- Reversing the guards exercises the raw and reflected cache entries in both orders.
example (p : Prop) [Decidable p] (b : Bool) :
    ⦃fun _ => True⦄
      (do
        let x ← bif b then pure 1 else pure 2
        let y ← if p then pure 3 else pure 4
        let z ← ite p (pure 5) (pure 6)
        pure (x + y + z) : StateM Nat Nat)
    ⦃fun r _ => 0 < r⦄ := by
  vcgen

example (p : Prop) [Decidable p] :
    ⦃fun _ => True⦄ (if p then pure 1 else pure 2 : StateM Nat Nat)
    ⦃fun r _ => r = 1 ↔ p⦄ := by
  vcgen -simp
  · rename_i hp
    have h : p := hp
    simp [h]
  · rename_i hp
    have h : ¬p := hp
    simp [h]

example : ⦃fun _ => True⦄ (modifyGet fun s => ((), s + 1) : StateM Nat Unit)
    ⦃fun _ s => 0 < s⦄ := by
  vcgen
  omega

open Lean Meta Sym in
run_meta SymM.run do
  let pattern ← mkPatternFromDecl ``MonadState.modifyGet.eq_def
  discard pattern.shareCommon
