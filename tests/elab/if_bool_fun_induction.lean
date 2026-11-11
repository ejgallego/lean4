module
import Lean
public meta import Lean.Meta.Match.Rewrite

/-! Function induction reduces projected guards before moving local lets into cases. -/

namespace IfBoolFunInduction

def descend (n : Nat) : Nat :=
  if n = 0 then 0 else
    let r := descend (n - 1)
    r + 1
termination_by n
decreasing_by omega

example (n : Nat) : descend n = n := by
  fun_induction descend with
  | case1 => rfl
  | case2 n hn r ih =>
    subst r
    omega

end IfBoolFunInduction

namespace IfBoolFunInduction

def choose (n : Nat) : Nat := if n = 0 then 10 else 20

example (n : Nat) : n = 0 ∨ n ≠ 0 := by
  apply choose.fun_cases n (n = 0 ∨ n ≠ 0)
  · intro h
    exact Or.inl h
  · intro h
    exact Or.inr h

end IfBoolFunInduction

open Lean Meta in
run_meta do
  withLocalDeclD `b (mkConst ``Bool) fun b => do
  withLocalDeclD `h (mkNot (← mkEq b (mkConst ``Bool.true))) fun h => do
    let value := mkApp4 (mkConst ``cond [.succ .zero]) (mkConst ``Nat) b (mkNatLit 1) (mkNatLit 2)
    let result ← rwIfWith h value
    unless result.expr == mkNatLit 2 do
      throwError "negative Boolean branch was not reduced"
    Meta.check (← result.getProof)
