module
import Std.Sat.AIG.If
import Lean

/-! AIG Boolean branch lemmas preserve cond as their native representation. -/

example (d l r : Bool) : (bif d then l else r) = (d && l || !d && r) :=
  Std.Sat.AIG.cond_as_bool d l r

open Lean Meta in
run_meta do
  let info ← getConstInfo ``Std.Sat.AIG.denote_mkIfCached
  forallTelescope info.type fun _ type => do
    unless type.isAppOfArity ``Eq 3 && (type.getArg! 2).isAppOfArity ``cond 4 do
      throwError "AIG denotation lemma must retain a cond right-hand side"
