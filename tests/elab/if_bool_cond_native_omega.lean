module
import Lean
public meta import Lean.Elab.Tactic.Omega.OmegaM

/-! Omega produces Boolean conditional certificates, including for explicit `ite` inputs. -/

open Lean Meta Elab Tactic Omega

run_meta do
  withLocalDeclD `p (mkSort .zero) fun p =>
    withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d => do
      let e := mkApp5 (mkConst ``ite [1]) (mkConst ``Int) p d (toExpr (0 : Int)) (toExpr (1 : Int))
      let facts ← (analyzeAtom e).run {}
      unless facts.length == 1 do throwError "expected a conditional split certificate"
      for fact in facts do
        let type ← inferType fact
        if (type.find? (·.isConstOf ``ite)).isSome then
          throwError "Omega produced an ite certificate"
        unless (type.find? (·.isConstOf ``cond)).isSome do
          throwError "Omega did not produce a cond certificate"

opaque opaqueDecision (x y : Nat) : Decidable (x ≤ y) := inferInstance

example (x y : Nat) : @ite Nat (x ≤ y) (opaqueDecision x y) x y ≤ y := by omega
example (x y : Nat) :
    letI := opaqueDecision x y
    (if x ≤ y then x else y) ≤ y := by omega
example (x y : Int) : ite (x ≤ y) x y ≤ y := by omega
example (x y : Int) : (if x ≤ y then x else y) ≤ y := by omega
