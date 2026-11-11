module
import Lean

/-! Syntax quotation pattern tests generate Boolean conditionals directly. -/

open Lean

def classifyQuotedTerm (stx : Syntax) : Nat :=
  match stx with
  | `(term| $_f $_a) => 1
  | `(term| ($_a)) => 2
  | _ => 3

run_meta do
  let value := (← getConstInfo ``classifyQuotedTerm).value!
  unless (value.find? (·.isConstOf ``cond)).isSome do
    throwError "quotation matcher must generate cond"
  if (value.find? (·.isConstOf ``ite)).isSome then
    throwError "quotation matcher must not generate ite"

run_meta do
  let app ← `(term| Nat.succ 0)
  let paren ← `(term| (0))
  let atom ← `(term| 0)
  unless classifyQuotedTerm app == 1 && classifyQuotedTerm paren == 2 &&
      classifyQuotedTerm atom == 3 do
    throwError "quotation matcher selected the wrong branch"
