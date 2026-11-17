module
public import Lean
public meta import Lean
public meta import Lean.Meta.Tactic.Grind.NormSym

/-! Grind and Sym use primitive decision projections at their input boundary, including
E-matching patterns, congruence closure and Boolean propagation. -/

open Lean Meta Elab Tactic

set_option grind.debug true

elab "raw_decision% " d:term : term => do
  return mkProj ``Decidable 0 (← Term.elabTerm d none)

opaque observeDecision : Bool → Nat

run_meta do
  for lemma in [``Decidable.decide_congr, ``Lean.Grind.decide_eq_true,
      ``Lean.Sym.decide_prop_eq_false] do
    let proof ← mkDecisionProjectionProof lemma
    check proof
    if ((← inferType proof).find? (·.isConstOf ``Decidable.decide)).isSome then
      throwError "decision proof retains a named endpoint"
  withLocalDeclD `p (mkSort .zero) fun p =>
    withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d => do
      let named := mkApp2 (mkConst ``Decidable.decide) p d
      Sym.SymM.run do
        let named ← Sym.preprocessExpr named
        let primitive ← Sym.preprocessExpr (mkProj ``Decidable 0 d)
        unless Sym.isSameExpr named primitive do
          throwError "decision projections have distinct shared representations"
      let expr := mkApp (mkConst ``observeDecision) named
      let params ← Grind.mkDefaultParams {}
      Grind.GrindM.run (params := params) do
        let mvar ← mkFreshExprMVar (mkConst ``True)
        let goal ← Grind.mkGoalCore mvar.mvarId!
        let (_, goal) ← Grind.GoalM.run goal do
          let result ← Grind.preprocess expr
          Grind.internalize result.expr 0
        for (entry, _) in goal.enodeMap.toList do
          if entry.expr.isAppOfArity ``Decidable.decide 2 then
            throwError "named decision entered the e-graph"

example (p : Prop) (d : Decidable p) (h : p) (f : Bool → Nat) :
    f (raw_decision% d) = f true := by grind (branches := 0)

example (p : Prop) (d : Decidable p) (h : ¬p) (f : Bool → Nat) :
    f (raw_decision% d) = f false := by grind (branches := 0)

example (p : Prop) (d : Decidable p) (h : (raw_decision% d) = true) : p := by
  grind (branches := 0)

example (p : Prop) (d : Decidable p) (h : (raw_decision% d) = false) : ¬p := by
  grind (branches := 0)

opaque marker : Prop → Prop
axiom marker_true (p : Prop) : marker p → p

example (p : Prop) (dp : Decidable p) (h : marker p) : (raw_decision% dp) = true := by
  grind (branches := 0) only [marker_true]

example (p q : Prop) (dp : Decidable p) (dq : Decidable q) (h : p = q) :
    observeDecision (raw_decision% dp) = observeDecision (raw_decision% dq) := by
  grind (branches := 0)

/-- error: `grind` has failed after reaching the threshold `(branches := 0)`, use `+verbose` to obtain diagnostic information -/
#guard_msgs in
example (p q : Prop) (dp : Decidable p) (dq : Decidable q) (h : HEq dp dq) :
    (raw_decision% dp) = (raw_decision% dq) := by grind (branches := 0)

opaque conditionalObserver : Nat → Nat

theorem conditionalObserver_rule (p : Prop) [Decidable p] (a b : Nat) :
    conditionalObserver (if p then a else b) =
      if p then conditionalObserver a else conditionalObserver b := by
  by_cases h : p <;> simp [h]

example (p : Prop) [Decidable p] (a b : Nat) :
    conditionalObserver (if p then a else b) =
      if p then conditionalObserver a else conditionalObserver b := by
  grind (branches := 0) only [conditionalObserver_rule]
