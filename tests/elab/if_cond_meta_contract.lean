module
import Lean
public meta import Lean

/-!
Meta-level conditional contracts: `kabstract` matches definitionally equal `ite` and `cond`
applications at default transparency, and guard normalization recursively removes comparisons
of decision projections, with checked proof endpoints.
-/

open Lean Meta

-- Construct both heads directly so elaboration cannot unfold `ite` before abstraction.
run_meta withTransparency .default do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d => do
    for applied in [false, true] do
      let type ← if applied then mkArrow (mkConst ``Nat) (mkConst ``Nat)
        else pure (mkConst ``Nat)
      withLocalDeclD `x type fun x =>
      withLocalDeclD `y type fun y => do
        let propConditional := mkApp5 (mkConst ``ite [1]) type p d x y
        let boolConditional := mkApp4 (mkConst ``cond [1]) type (mkProj ``Decidable 0 d) x y
        let applyArg e := if applied then mkApp e (mkNatLit 0) else e
        let propConditional := applyArg propConditional
        let boolConditional := applyArg boolConditional
        for (input, pattern) in [(propConditional, boolConditional), (boolConditional, propConditional)] do
          unless input.toHeadIndex != pattern.toHeadIndex && input.headNumArgs != pattern.headNumArgs do
            throwError "conditional test no longer exercises the head-index exception"
          check input
          check pattern
          unless ← isDefEq input pattern do
            throwError "conditional representations are not definitionally equal"
          for occs in #[Occurrences.all, .pos [1]] do
            let body ← kabstract input pattern occs
            unless body == mkBVar 0 do
              throwError "conditional head indexing prevented a definitionally equal match"
            check (mkLambda `value .default (← inferType pattern) body)
          unless (← kabstract input pattern (.pos [])) == input do
            throwError "excluded conditional match changed the original expression"

run_meta do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d => do
    let inner ← mkEq (mkProj ``Decidable 0 d) (mkConst ``Bool.true)
    withLocalDeclD `outer (mkApp (mkConst ``Decidable) inner) fun outer => do
      for positive in [false, true] do
        let condition ← mkEq (mkProj ``Decidable 0 outer)
          (mkConst (if positive then ``Bool.true else ``Bool.false))
        let expected := if positive then p else mkNot p
        let some result ← Simp.normalizeDecisionCondition? condition
          | throwError "nested decision comparison was not normalized"
        unless result.expr == expected do
          throwError "nested decision comparison retained an intermediate guard"
        let proof ← result.getProof
        check proof
        unless ← isDefEq (← inferType proof) (← mkEq condition expected) do
          throwError "nested guard normalization has incorrect proof endpoints"

example (p : Prop) [d : Decidable p] (h : p) :
    (if d.1 = true then (1 : Nat) else 2) = 1 := by
  simp only [h, ite_true]

example (p : Prop) [d : Decidable p] (h : ¬p) :
    (if d.1 = true then (1 : Nat) else 2) = 2 := by
  simp only [h, ite_false]
