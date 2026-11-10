module
import Lean
public meta import Lean

/-! CBV loads generic decision simprocs across named and primitive projection key formats. -/

open Lean Meta Sym Tactic.Cbv in
run_meta do
  let p := mkConst ``True
  let d := mkConst ``instDecidableTrue
  for input in #[mkApp2 (mkConst ``Decidable.decide) p d, mkProj ``Decidable 0 d] do
    let proc : Sym.Simp.Simproc := fun e => do
      unless e == input do throwError "CBV dispatch replaced the decision expression"
      let value ← Sym.shareCommon (mkConst ``Bool.true)
      return .step value (← Sym.mkEqRefl value)
    let legacyKeys := #[DiscrTree.Key.const ``Decidable.decide 2, .star, .star]
    let registry := CbvSimprocs.addCore {} legacyKeys `legacyDecision .pre proc
    Sym.SymM.run do
      let input ← Sym.shareCommon input
      let .step value proof .. ← Sym.Simp.SimpM.run'
          (cbvSimprocDispatch registry.pre registry.erased input) {}
        | throwError "generic legacy decision simproc was not retrieved"
      unless value.isConstOf ``Bool.true do throwError "wrong decision result"
      check proof

def RegistryEven (n : Nat) : Prop := ∃ k, n = 2 * k
instance : DecidablePred RegistryEven := fun n =>
  if h : n % 2 = 0 then .isTrue ⟨n / 2, by omega⟩
  else .isFalse (by intro ⟨k, hk⟩; omega)

open Classical in
example : decide (RegistryEven 2) = true := by cbv
open Classical in
example : decide (RegistryEven 3) = false := by cbv

open Lean Elab Term in
elab "registry_raw_decision% " p:term : term => do
  let p ← elabTermEnsuringType p (mkSort 0)
  let d ← Meta.synthInstance (mkApp (mkConst ``Decidable) p)
  return mkProj ``Decidable 0 d

open Classical in
example : (registry_raw_decision% RegistryEven 2) = true := by cbv
open Classical in
example : (registry_raw_decision% RegistryEven 3) = false := by cbv

open Lean Meta Sym Tactic.Cbv in
run_meta do
  let specializedKeys := #[DiscrTree.Key.const ``Decidable.decide 2, .star, .const ``True 0]
  let registry := CbvSimprocs.addCore {} specializedKeys `specializedDecision .pre
    (fun _ => throwError "specialized decision was widened")
  let input := mkProj ``Decidable 0 (mkConst ``instDecidableTrue)
  unless (Sym.getMatch (← getMCtx) registry.pre input).isEmpty do
    throwError "specialized decision keys acquired a generic alias"
