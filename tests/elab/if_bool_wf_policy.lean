module
import Lean

/-! Well-founded preprocessing preserves source propositions and raw Boolean guards. -/
open Lean Meta

namespace WFPolicyRegression

opaque predicate : Nat → Prop
noncomputable opaque opaqueDecision (n : Nat) : Decidable (predicate n) :=
  Classical.propDecidable _

structure Wrapped where
  val : Nat
  deriving DecidableEq

def natEq (x y : Nat) := if x = y then 1 else 2
def natLe (x y : Nat) := if x ≤ y then 1 else 2
def uintEq (x y : UInt8) := if x = y then 1 else 2
def charEq (x y : Char) := if x = y then 1 else 2
def slicePosLt (s : String.Slice) (x y : s.Pos) := if x < y then 1 else 2
def wrappedEq (x y : Wrapped) := if x = y then 1 else 2
def rawEq (x y : Nat) := if Nat.beq x y then 1 else 2
def rawLe (x y : Nat) := if Nat.ble x y then 1 else 2
def rawAnd (x y : Nat) (b : Bool) := if Nat.beq x y && b then 1 else 2
def appliedUInt (x y : UInt8) := (if x = y then (fun n : Nat => n + 1) else (fun n => n + 2)) 0
def rawGeneric {α : Type} [BEq α] (x y : α) := if x == y then 1 else 2
def localDecision (n : Nat) [d : Decidable (predicate n)] :=
  if predicate n then 1 else 2
noncomputable def opaqueProjected (n : Nat) :=
  if @decide (predicate n) (opaqueDecision n) then 1 else 2
noncomputable def opaqueNamed (n : Nat) :=
  cond (@decide (predicate n) (opaqueDecision n)) 1 2

run_meta do
  for name in [``natEq, ``natLe, ``uintEq, ``charEq, ``slicePosLt, ``wrappedEq, ``rawEq,
      ``rawLe, ``rawAnd, ``appliedUInt, ``rawGeneric, ``localDecision, ``opaqueProjected, ``opaqueNamed] do
    let some input := (← getConstInfo name).value? | throwError "missing input {name}"
    lambdaTelescope input fun xs body => do
      unless body.isAppOf ``cond && body.getAppNumArgs ≥ 4 do throwError "expected conditional in {name}"
      let guard := body.getAppArgs[1]!
      let decision? := if guard.isAppOfArity ``Decidable.decide 2 then some guard.appArg!
        else if let .proj ``Decidable 0 d := guard then some d else none
      let expected ← match guard with
        | .proj ``Decidable 0 d => do pure (← inferType d).appArg!
        | _ =>
          if guard.isAppOfArity ``Decidable.decide 2 then
            pure guard.getAppArgs[0]!
          else
            mkEq guard (mkConst ``Bool.true)
      let result ← Lean.Elab.WF.preprocess input
      lambdaTelescope result.expr fun ys body => do
        unless body.isAppOf ``dite && body.getAppNumArgs ≥ 5 do
          throwError "expected dependent conditional in {name}: {body}"
        let actual := body.getAppArgs[1]!
        if let some d := decision? then
          unless body.getAppArgs[2]! == d.replaceFVars xs ys do
            throwError "changed source decision in {name}"
        let expected := expected.replaceFVars xs ys
        unless actual == expected do
          throwError "changed source guard in {name}\nexpected: {expected}\nactual: {actual}"

end WFPolicyRegression
