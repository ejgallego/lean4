module
import Std.WP
import Lean.Elab.Tactic.VCGen.Reduce
import Lean.Elab.Command
import Lean.Meta.Sym.Util

/-! VC generation preserves native decision projections during symbolic simplification,
including guards exposed by loop contracts and head reduction. -/

set_option sym.debug true
set_option experimental.vcgen true
set_option experimental.intrinsic true

open Std.WP Lean.Order

example (n : Nat) :
    ⦃fun _ => True⦄ (if n > 0 then pure 1 else pure 2 : StateM Nat Nat)
    ⦃fun r _ => r = 1 ∨ r = 2⦄ := by
  vcgen

def countDown (n : Nat) : Id Nat
    ensures r => r = 0 := do
  let mut i := n
  while i > 0
      invariant exit => if exit then i = 0 else True
      decreasing i
    do
    i := i - 1
  return i

open Lean Meta Sym in
run_meta SymM.run do
  withLocalDeclD `p (mkSort .zero) fun p => do
    withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d => do
      let nat := mkConst ``Nat
      let raw := mkProj ``Decidable 0 d
      let body := mkApp4 (mkConst ``cond [Level.one]) nat raw (mkNatLit 1) (mkNatLit 2)
      let e := mkApp (mkLambda `x .default nat body) (mkNatLit 0)
      let e ← withoutFoldProjsCheck <| shareCommon e
      let some result ← Lean.Elab.Tactic.VCGen.reduceHead? e |
        throwError "beta reduction made no progress"
      unless result.isAppOfArity ``cond 4 && result.getArg! 1 == raw do
        throwError "head reduction lost its native decision guard"
      unless ← isDefEq result body do
        throwError "head reduction changed the result"
      result.checkMaxShared
