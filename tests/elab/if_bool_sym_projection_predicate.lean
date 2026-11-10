module
public import Lean
public meta import Lean

/-! Symbolic simplification visits predicates hidden in primitive decision projections,
without evaluating unresolved decision instances, and retains context dependency. -/

open Lean Meta in
run_meta do
  withLocalDeclD `p (mkSort .zero) fun p =>
  withLocalDecl `d .instImplicit (mkApp (mkConst ``Decidable) p) fun d =>
    Sym.SymM.run do
      let input ← Sym.shareCommon (mkProj ``Decidable 0 d)
      let methods : Sym.Simp.Methods := { pre := fun e => do
        if e == d then throwError "visited the unresolved decision instance"
        return .rfl }
      let result ← Sym.Simp.SimpM.run' (Sym.Simp.simp input) methods
      unless result.isRfl do throwError "changed an unresolved decision projection"

open Lean Meta in
run_meta do
  withLocalDeclD `p (mkSort .zero) fun p =>
  withLocalDecl `d .instImplicit (mkApp (mkConst ``Decidable) p) fun d => do
  withLocalDeclD `h (← mkEq p (mkConst ``True)) fun h =>
    Sym.SymM.run do
      let p ← Sym.shareCommon p
      let h ← Sym.shareCommon h
      let truth ← Sym.shareCommon (mkConst ``True)
      let input ← Sym.shareCommon (mkProj ``Decidable 0 d)
      let methods : Sym.Simp.Methods := { pre := fun e => do
        if e == d then throwError "visited the decision instance"
        if e == p then return .step truth h (contextDependent := true)
        return .rfl }
      let .step output proof _ true ← Sym.Simp.SimpM.run' (Sym.Simp.simp input) methods
        | throwError "did not simplify the hidden source predicate"
      unless output.isConstOf ``Bool.true do throwError "wrong decision result"
      check proof
      unless ← isDefEq (← inferType proof) (← mkEq input output) do
        throwError "decision proof does not prove its result"
