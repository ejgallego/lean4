module
import Lean
public meta import Lean.Elab.Tactic.Do.VCGen.Split

/-! Legacy VC generation splits projected decisions using the original proposition. -/

open Lean Meta Elab.Tactic.Do

namespace IfBoolVCGenSplit

def natural (n : Nat) : Nat := if n = 0 then 10 else 20
def compound (p q : Prop) [Decidable (p ∧ q)] : Nat := if p ∧ q then 10 else 20
def boolean (b : Bool) : Nat := if b then 10 else 20

run_meta do
  for decl in [``natural, ``compound, ``boolean] do
    lambdaTelescope (← getConstInfo decl).value! fun _ body => do
      let some info ← getSplitInfo? body | throwError "missing split info"
      let condition := body.getAppArgs[1]!
      let expected ← if decl == ``boolean then mkEq condition (mkConst ``Bool.true) else do
        let some (p, _) ← Simp.getBoolDecision? condition | throwError "missing decision view"
        unless info matches .cond _ do throwError "decision split lost its native conditional"
        pure p
      unless ← isDefEq info.expr body do throwError "split view changed the program"
      let proof ← info.splitWith (mkConst ``True) (useSplitter := true) fun _ _ idx alt => do
        unless alt.fields.size == 1 do throwError "missing branch hypothesis"
        let expected ← if idx == 0 then pure expected else
          if decl == ``boolean then mkEq condition (mkConst ``Bool.false) else pure (mkNot expected)
        unless ← isDefEq (← inferType alt.fields[0]!) expected do
          throwError "branch hypothesis lost its original proposition"
        let rewritten ← rwIfOrMatcher idx body
        unless rewritten.expr == body.getAppArgs[if idx == 0 then 2 else 3]! do
          throwError "branch program was not reduced"
        Meta.check (← rewritten.getProof)
        pure (mkConst ``True.intro)
      Meta.check proof

end IfBoolVCGenSplit
