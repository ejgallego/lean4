module
import Lean
public meta import Lean.Elab.PreDefinition.WF.Preprocess

/-! WF conditional preprocessing resolves binder hints and preserves nested induction cases. -/
open Lean Meta

namespace WFHintRegression

def body (self : Nat → Nat) (n : Nat) : Nat :=
  if n = 0 then 0 else
    let r := self (n - 1)
    if n % 2 = 1 then r + 1 else r

run_meta do
  let some input := (← getConstInfo ``body).value? | throwError "missing body"
  let result ← Lean.Elab.WF.preprocess input
  if result.expr.hasBinderNameHint then
    throwError "unresolved binderNameHint obscures the nested let and conditional"

def recurse (n : Nat) : Nat :=
  if n = 0 then 0 else
    let r := recurse (n - 1)
    if n % 2 = 1 then r + 1 else r
termination_by n
decreasing_by omega

example (n : Nat) : recurse n = recurse n := by
  fun_induction recurse n with
  | case1 => rfl
  | case2 n hn r hodd ih => rfl
  | case3 n hn r heven ih => rfl

end WFHintRegression
