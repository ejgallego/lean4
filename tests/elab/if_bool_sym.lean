module
public import Lean
public meta import Lean

/-! Symbolic simplification reflects proposition guards and preserves branch laziness. -/

open Lean Meta Elab Tactic

elab "simp_if_bool_sym" : tactic => do
  let rewrite ← Sym.mkSimprocFor #[``Nat.add_zero] Sym.Simp.dischargeSimpSelf
  let methods : Sym.Simp.Methods := {
    pre := Sym.Simp.simpControl
    post := Sym.Simp.evalGround >> rewrite
  }
  liftMetaTactic1 fun goal => Sym.SymM.run do
    let goal ← Sym.preprocessMVar goal
    (← Sym.simpGoal goal methods).toOption

example (a b : Nat) : (if True then a else b) = a := by simp_if_bool_sym
example (a b : Nat) : (if False then a else b) = b := by simp_if_bool_sym
example (f g : Nat → Nat) (a : Nat) :
    (if a + 0 = a then f else g) a = f a := by simp_if_bool_sym
example (f g : Nat → Nat) (a : Nat) :
    (if a + 0 ≠ a then f else g) a = g a := by simp_if_bool_sym

example (a b : Nat) :
    (if a + 0 = b then a + 0 else b + 0) = (if a = b then a else b) := by
  simp_if_bool_sym
  guard_target =~ (if a = b then a + 0 else b + 0) = (if a = b then a else b)
  split <;> simp_all

-- A changed guard may lack a new Decidable instance; keep the branch barrier and cache dependency.
run_meta do
  withLocalDeclD `p (mkSort .zero) fun p => do
  withLocalDeclD `q (mkSort .zero) fun q => do
  withLocalDecl `inst .instImplicit (mkApp (mkConst ``Decidable) p) fun inst => do
  withLocalDeclD `h (← mkEq p q) fun h => do
  withLocalDeclD `a (mkConst ``Nat) fun a => do
  withLocalDeclD `b (mkConst ``Nat) fun b => do
    Sym.SymM.run do
      let p ← Sym.shareCommon p
      let q ← Sym.shareCommon q
      let h ← Sym.shareCommon h
      let a ← Sym.shareCommon a
      let b ← Sym.shareCommon b
      let positive ← withLocalDeclD `hp p fun hp => mkLambdaFVars #[hp] a
      let negative ← withLocalDeclD `hn (mkNot p) fun hn => mkLambdaFVars #[hn] b
      let inputs := #[
        mkApp5 (mkConst ``ite [.succ .zero]) (mkConst ``Nat) p inst a b,
        mkApp5 (mkConst ``dite [.succ .zero]) (mkConst ``Nat) p inst positive negative,
        mkApp4 (mkConst ``cond [.succ .zero]) (mkConst ``Nat) (mkProj ``Decidable 0 inst) a b]
      let methods : Sym.Simp.Methods := { pre := fun e => do
        if e == p then return .step q h (contextDependent := true)
        if e == a || e == b then throwError "visited a branch with an unresolved guard"
        Sym.Simp.simpControl e }
      for input in inputs do
        let input ← Sym.shareCommon input
        let result ← Sym.Simp.SimpM.run' (Sym.Simp.simp input) methods
        match result with
        | .step e proof true true =>
          unless input.isAppOf ``ite && e == inputs[2]! do
            throwError "unresolved guard changed its native conditional"
          Meta.check proof
          unless ← isDefEq (← inferType proof) (← mkEq input e) do
            throwError "conditional conversion proof has incorrect endpoints"
        | .rfl true true =>
          if input.isAppOf ``ite then
            throwError "legacy conditional was not converted to native cond"
        | _ => throwError "unresolved guard lost its branch barrier or cache dependency"
