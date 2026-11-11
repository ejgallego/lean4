module
import Lean
import Std.Tactic.BVDecide
public meta import Lean.Elab.Tactic.Do.VCGen.Split

/-! Ordinary conditional views stay `cond` while function induction and VC generation
retain the source proposition and its exact decision procedure in branch contexts. -/

namespace CondNativeOther

def choose (p : Prop) [Decidable p] : Nat := if p then 1 else 2

example (p : Prop) [Decidable p] : p ∨ ¬p := by
  apply choose.fun_cases p (p ∨ ¬p)
  · exact Or.inl
  · exact Or.inr

end CondNativeOther

open Lean Meta Lean.Elab.Tactic.Do in
run_meta do
  withLocalDeclD `p (mkSort 0) fun p => do
  withLocalDeclD `decision (mkApp (mkConst ``Decidable) p) fun decision => do
    let nat := mkConst ``Nat
    for guard in #[mkProj ``Decidable 0 decision,
        mkApp2 (mkConst ``Decidable.decide) p decision] do
      let value := mkApp4 (mkConst ``cond [.succ .zero]) nat
        guard (mkNatLit 1) (mkNatLit 2)
      let some info ← getSplitInfo? value | throwError "missing conditional view"
      unless info.expr == value do
        throwError "conditional view changed the source expression"
      info.withAbstract nat fun abstractInfo xs => do
        unless abstractInfo.expr.isAppOfArity ``cond 4 do
          throwError "abstract ordinary conditional is not cond"
        unless xs.size == 4 do
          throwError "source proposition and decision were not abstracted"
        let guard := abstractInfo.expr.getArg! 1
        unless guard == mkProj ``Decidable 0 xs[1]! do
          throwError "abstract guard reduced or replaced its decision"
        unless (← inferType xs[1]!) == mkApp (mkConst ``Decidable) xs[0]! do
          throwError "abstract decision lost its source proposition"
      let onAlt := fun (_ : Name) (_ : Expr) (idx : Nat) (alt : MatcherApp.TransformAltFVars) => do
        unless alt.fields.size == 1 do
          throwError "missing semantic branch hypothesis"
        let expected := if idx == 0 then p else mkNot p
        unless (← inferType alt.fields[0]!) == expected do
          throwError "branch hypothesis lost the source proposition"
        return mkNatLit (idx + 1)
      let split ← info.splitWith nat onAlt (useSplitter := true)
      Meta.check split
      let plain ← info.splitWith nat (fun _ _ idx _ => pure (mkNatLit (idx + 1)))
      unless plain.isAppOfArity ``cond 4 do
        throwError "nondependent reconstruction introduced ite"
      unless plain.getArg! 1 == guard do
        throwError "reconstruction changed the guard"

open Lean Meta Lean.Elab.Tactic.Do in
run_meta do
  withLocalDeclD `b (mkConst ``Bool) fun b => do
    let nat := mkConst ``Nat
    let value := mkApp4 (mkConst ``cond [.succ .zero]) nat b (mkNatLit 1) (mkNatLit 2)
    let some info ← getSplitInfo? value | throwError "missing raw Boolean view"
    unless info.expr == value do
      throwError "raw Boolean conditional view changed"
    info.withAbstract nat fun abstractInfo xs => do
      unless xs.size == 3 && abstractInfo.expr.getArg! 1 == xs[0]! do
        throwError "raw Boolean guard was reflected into a proposition"
    let split ← info.splitWith nat (useSplitter := true) fun _ _ idx alt => do
      let expected ← mkEq b (mkConst (if idx == 0 then ``Bool.true else ``Bool.false))
      unless alt.fields.size == 1 && (← inferType alt.fields[0]!) == expected do
        throwError "raw Boolean branch hypothesis changed"
      pure (mkNatLit (idx + 1))
    Meta.check split

example (b : Bool) (x y : BitVec 8) :
    (if _h : b = true then x else y) = cond b x y := by
  bv_decide

example (p : Prop) [Decidable p] (x y : BitVec 8) :
    (dite p (fun _ => x) (fun _ => y)) = (if p then x else y) := by
  bv_decide

example (b : Bool) (x y : BitVec 8) :
    (if _h : ¬b = true then x else y) = cond (!b) x y := by
  bv_decide
