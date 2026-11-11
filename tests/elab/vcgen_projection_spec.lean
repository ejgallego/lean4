module
import Std.WP
public meta import Lean.Elab.Tactic.VCGen.SpecDB
public meta import Lean.Elab.Tactic.VCGen.RuleConstruction
public meta import Lean.Elab.Tactic.VCGen.WPApp
public meta import Lean.Meta.Sym.Pattern
public meta import Lean.Meta.Eqns

/-! Explicit class-projection unfold specs survive projection folding and expose their
concrete instance implementation to VC generation. -/

set_option experimental.vcgen true
open Std.WP Lean.Order

namespace ProjectionSpec
class Step (m : Type → Type) where
  run : Nat → m Nat

instance : Step (StateM Nat) where
  run n := pure (n + 1)

@[spec] theorem projection_refl (d : Step (StateM Nat)) : d.1 = d.1 := rfl

def concreteProgram : StateM Nat Nat := Step.run 0

open Lean Meta Sym Lean.Elab.Tactic.VCGen in
run_meta SymM.run do
  let program ← shareCommon (← getConstInfo ``concreteProgram).value!
  let specs ← SpecAttr.getSpecTheorems
  let candidates ← specs.findSpecs program
  if candidates.any (·.global? == some ``projection_refl) then
    throwError "reflexive projection equation was registered as a spec"

example (n : Nat) : ⦃fun _ => True⦄ (Step.run n : StateM Nat Nat)
    ⦃fun r _ => r = n + 1⦄ := by
  vcgen [Step.run]

def abstractWP [Step (StateM Nat)] (n : Nat) : Nat → Prop :=
  wp (Step.run n : StateM Nat Nat) (fun _ _ => True) ⊥

open scoped Std.WP in
open Lean Meta Sym Lean.Elab.Tactic.VCGen in
run_meta SymM.run do
  lambdaTelescope (← getConstInfo ``abstractWP).value! fun _ body => do
    let body ← shareCommon body
    let some info := isWPApp? body | throwError "missing abstract wp application"
    let some eqn ← getUnfoldEqnFor? ``Step.run (nonRec := true)
      | throwError "missing projection unfold equation"
    let thm : SpecAttr.SpecTheorem := {
      pattern := ← mkPatternFromDecl eqn
      proof := .global eqn
      kind := .simp 1
      priority := 1000
      conjunctivePre := true }
    if (← (tryMkBackwardRuleFromSpec thm info).run).isSome then
      throwError "abstract projection produced a no-progress rule"

example [Step (StateM Nat)] (_n : Nat) : True := by
  fail_if_success
    have : ⦃fun _ => True⦄ (Step.run _n : StateM Nat Nat)
        ⦃fun r _ => r = _n + 1⦄ := by
      vcgen (stepLimit := 10) [Step.run]
  trivial

end ProjectionSpec
