module
import Lean
public meta import Lean

/-!
`Sym.dsimp` respects its instance-traversal configuration for primitive decision projections.
In particular, enabling instance traversal must expose let-bound arguments inside an opaque
decision application, as required by the `bv_decide` normalization pipeline.
-/

opaque decisionAt (n : Nat) : Decidable (n = 0) := inferInstance

open Lean Meta Sym in
run_meta do
  withLocalDeclD `x (mkConst ``Nat) fun x => SymM.run do
    let x ← shareCommon x
    withLetDeclS `y (← shareCommon (mkConst ``Nat)) x fun y => do
      let input ← shareCommon (mkProj ``Decidable 0 (mkApp (mkConst ``decisionAt) y))
      let methods : DSimp.Methods := { pre := DSimp.zetaDeltaAll }
      let unchanged ← Sym.dsimp input methods
      unless unchanged == input do
        throwError "default dsimp traversed an opaque decision instance"
      let result ← Sym.dsimp input methods { instances := true }
      let expected ← shareCommon (mkProj ``Decidable 0 (mkApp (mkConst ``decisionAt) x))
      unless result == expected do
        throwError "dsimp with instance traversal retained a let-bound decision argument"
      unless ← isDefEq input result do
        throwError "decision instance traversal changed the projection's meaning"
