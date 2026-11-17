module
import Lean
public meta import Lean.Elab.PreDefinition.WF.Preprocess

/-! WF conditional preprocessing preserves aliased local and opaque decision instances. -/
open Lean Meta
attribute [-wf_preprocess] ite_eq_dite

namespace WFAliasRegression
abbrev MyDecision (p : Prop) := Decidable p
noncomputable opaque opaqueDecision (p : Prop) : MyDecision p := Classical.propDecidable p

def localProjected (p : Prop) [d : MyDecision p] := if p then 1 else 2
def localNamed (p : Prop) [d : MyDecision p] := cond (@decide p d) 1 2
noncomputable def opaqueProjected (p : Prop) := if @decide p (opaqueDecision p) then 1 else 2
noncomputable def opaqueNamed (p : Prop) := cond (@decide p (opaqueDecision p)) 1 2

run_meta do
  for name in [``localProjected, ``localNamed, ``opaqueProjected, ``opaqueNamed] do
    let some input := (← getConstInfo name).value? | throwError "missing {name}"
    lambdaTelescope input fun xs body => do
      let guard := body.getAppArgs[1]!
      let d ← match guard with
        | .proj ``Decidable 0 d => pure d
        | _ => do
          unless guard.isAppOfArity ``Decidable.decide 2 do throwError "unexpected guard {guard}"
          pure guard.appArg!
      let type ← inferType d
      unless type.isAppOfArity ``MyDecision 1 do throwError "alias lost before preprocessing"
      let result ← Lean.Elab.WF.preprocess input
      lambdaTelescope result.expr fun ys body => do
        unless body.isAppOfArity ``dite 5 do throwError "expected dependent conditional: {body}"
        unless body.getAppArgs[1]! == ys[0]! do throwError "changed source proposition in {name}: {body}"
        unless body.getAppArgs[2]! == d.replaceFVars xs ys do throwError "changed source decision in {name}"
end WFAliasRegression
