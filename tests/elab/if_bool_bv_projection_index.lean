module
import Std.Tactic.BVDecide
public meta import Lean.Meta.Tactic.BVDecide.Attr
public meta import Lean.Meta.Sym.Simp.Theorems
public meta import Lean.Meta.Sym.Pattern
public meta import Lean.Meta.Sym.Simp.DiscrTree

/-! Runtime BV theorem registration and root decision-wrapper lookup agree for named
and primitive projections, while the matcher still checks the source proposition. -/

open Lean Meta Sym Lean.Meta.Tactic.BVDecide in
run_meta SymM.run do
  let thms ← bvNormalizeExt.getTheorems
  withLocalDeclD `b (mkConst ``Bool) fun b => do
  let p ← mkEq b (mkConst ``Bool.true)
  withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d => do
    for e in #[mkProj ``Decidable 0 d, mkApp2 (mkConst ``Decidable.decide) p d] do
      let e ← shareCommon e
      let candidates := thms.getMatchWithExtra (← getMCtx) e
      unless candidates.any (fun (t, _) => t.expr.isConstOf ``Bool.decide_eq_true) do
        throwError "missing generalized Boolean decision theorem for {e}"
      let thm ← Simp.mkTheoremFromDecl ``Bool.decide_eq_true
      unless (← thm.pattern.match? e).isSome do
        throwError "decision-wrapper candidate did not match its source proposition"
    let other ← mkEq b (mkConst ``Bool.false)
    withLocalDeclD `other (mkApp (mkConst ``Decidable) other) fun d => do
      let e ← shareCommon (mkProj ``Decidable 0 d)
      let thm ← Simp.mkTheoremFromDecl ``Bool.decide_eq_true
      if (← thm.pattern.match? e).isSome then
        throwError "decision-wrapper matcher accepted a different proposition"

open Lean Meta Sym in
run_meta SymM.run do
  let thm ← Simp.mkTheoremFromDecl ``Bool.cond_decide_eq_false
  let tree := insertPattern ({} : DiscrTree Expr) thm.pattern thm.expr
  withLocalDeclD `b (mkConst ``Bool) fun b => do
  let p ← mkEq b (mkConst ``Bool.false)
  withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d => do
    for guard in #[mkProj ``Decidable 0 d, mkApp2 (mkConst ``Decidable.decide) p d] do
      let e ← shareCommon <| mkApp4 (mkConst ``cond [.succ .zero]) (mkConst ``Nat)
        guard (mkNatLit 1) (mkNatLit 2)
      unless (getMatchWithExtra (← getMCtx) tree e).size == 1 do
        throwError "nested decision-wrapper lookup missed a candidate"
      unless (← thm.pattern.match? e).isSome do
        throwError "nested decision-wrapper candidate did not match"
