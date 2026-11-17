module
import Lean
public meta import Lean

/-!
The core conditional definition uses `cond` for a neutral decision before the frontend switches
ordinary `if` elaboration. Constant-branch `dite` remains propositionally, but not definitionally,
equal to `ite`. The tests construct their Meta terms explicitly to isolate the core definition.
-/

example {α : Sort u} (p : Prop) [d : Decidable p] (t e : α) :
    @ite α p d t e = cond (@Decidable.decide p d) t e := rfl

example {α : Sort u} (p : Prop) [d : Decidable p] (t e : α) :
    dite p (fun _ => t) (fun _ => e) = @ite α p d t e := by
  cases d <;> rfl

open Lean Meta in
run_meta do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d =>
  withLocalDeclD `t (mkConst ``Nat) fun t =>
  withLocalDeclD `e (mkConst ``Nat) fun e => do
    let guard := mkProj ``Decidable 0 d
    let decision := mkApp2 (mkConst ``Decidable.decide) p d
    let rawIte := mkApp5 (mkConst ``ite [1]) (mkConst ``Nat) p d t e
    let rawCond := mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard t e
    let tFn ← withLocalDeclD `h p fun h => mkLambdaFVars #[h] t
    let eFn ← withLocalDeclD `h (mkNot p) fun h => mkLambdaFVars #[h] e
    let rawDite := mkApp5 (mkConst ``dite [1]) (mkConst ``Nat) p d tFn eFn
    for term in [guard, decision, rawIte, rawCond, rawDite] do check term
    unless ← isDefEq rawIte rawCond do
      throwError "neutral ite is not definitionally equal to cond"
    if ← isDefEq rawIte rawDite then
      throwError "neutral constant-branch dite unexpectedly remains definitionally equal to ite"
    for term in [guard, decision] do
      let some (p', d') ← getBoolDecision? term
        | throwError "decision inspection did not recognize a neutral projection"
      unless p' == p && d' == d do
        throwError "decision inspection replaced the original neutral predicate or instance"
