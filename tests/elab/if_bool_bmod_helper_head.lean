module
import Lean

/-! The balanced-modulus normalizer keeps a native conditional in its proof contract. -/
open Lean Meta
run_meta do
  forallTelescope (← getConstInfo ``Int.bmod_eq_emod).type fun _ type => do
    let some (_, _, rhs) := type.eq? | throwError "expected bmod equality"
    if (rhs.find? (·.isConstOf ``ite)).isSome then
      throwError "bmod normalization must not introduce ite"
    let some c := rhs.find? (fun e => e.isAppOfArity ``cond 4) |
      throwError "bmod normalization must introduce native cond"
    unless c.getAppArgs[0]!.isConstOf ``Nat do
      throwError "bmod normalization must preserve the natural conditional before casting"
