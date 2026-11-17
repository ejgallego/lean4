module
import Lean
public meta import Lean

/-!
Meta-level conditional abstraction: `kabstract` matches definitionally equal `ite` and `cond`
applications at default transparency, including overapplications and excluded occurrences.
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
