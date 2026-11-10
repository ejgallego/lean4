module
import Lean
import Std.Tactic.BVDecide
public meta import Lean.Meta.Sym.Pattern
public meta import Lean.Meta.Sym.Simp.Theorems
/-! A predicate inferred from an instance type must be shared before pattern instantiation. -/
abbrev PatternSharingDecision (p : Prop) := Decidable p

set_option sym.debug true
open Lean Meta Sym in
run_meta SymM.run do
  let pat ← Simp.mkTheoremFromDecl ``decide_not
  withLocalDeclD `b (mkConst ``Bool) fun b => do
  let p ← mkEq b (mkConst ``Bool.true)
  withLocalDeclD `d (mkApp (mkConst ``Decidable) (mkNot p)) fun d => do
    let e ← shareCommon (mkProj ``Decidable 0 d)
    unless (← pat.pattern.match? e).isSome do
      throwError "decision predicate pattern did not match"

open Lean Meta Sym in
run_meta SymM.run do
  let pat ← Simp.mkTheoremFromDecl ``decide_not
  withLocalDeclD `b (mkConst ``Bool) fun b => do
  let p ← mkEq b (mkConst ``Bool.true)
  let type := mkApp (mkConst ``PatternSharingDecision) (mkNot p)
  withLocalDeclD `d type fun d => do
    let e ← shareCommon (mkProj ``Decidable 0 d)
    unless (← pat.pattern.match? e).isSome do
      throwError "aliased decision predicate pattern did not match"
