module
import Lean
public meta import Lean

/-! Conditional compatibility matching recovers propositions through decision-type aliases. -/

namespace DecisionAliasMatch

abbrev AliasDecision (p : Prop) := Decidable p

theorem aliasSelf (p : Prop) [d : AliasDecision p] (x : Nat) :
    (if p then x else x) = x := by
  exact Bool.cond_self _ _

example (b : Bool) (x : Nat) : (if b then x else x) = x := by
  rw [aliasSelf]

example (b : Bool) (x : Nat) : (if b then x else x) = x := by
  simp only [aliasSelf]

example (b : Bool) (x : Nat) : (if b then x else x) = x := by
  change @ite Nat _ (_ : AliasDecision _) x x = x
  exact Bool.cond_self _ _

open Lean Meta in
run_meta do
  withLocalDeclD `b (mkConst ``Bool) fun b => do
    let p ← mkFreshExprMVar (mkSort .zero)
    let d ← mkFreshExprMVar (mkApp (mkConst ``AliasDecision) p)
    let pattern := mkApp4 (mkConst ``cond [1]) (mkConst ``Nat)
      (mkProj ``Decidable 0 d) (mkNatLit 1) (mkNatLit 2)
    let target := mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) b (mkNatLit 1) (mkNatLit 2)
    unless ← isDefEqIf pattern target do throwError "decision alias prevented conditional matching"
    unless ← isDefEq (← instantiateMVars p) (← mkEq b (mkConst ``Bool.true)) do
      throwError "raw Boolean condition did not use equality with true"

end DecisionAliasMatch
