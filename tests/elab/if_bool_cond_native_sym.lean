module
public import Lean
public meta import Lean

/-! Symbolic and CBV conditionals keep decision projections and produce native `cond` proofs. -/

open Lean Meta Elab Tactic

run_meta do
  withLocalDeclD `p (mkSort .zero) fun p =>
  withLocalDecl `d .instImplicit (mkApp (mkConst ``Decidable) p) fun d =>
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b =>
    Sym.SymM.run do
      let input := mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) (mkProj ``Decidable 0 d) a b
      let shared ← Sym.shareCommon input
      unless shared.getArg! 1 matches .proj ``Decidable 0 _ do
        throwError "sharing changed the decision projection"
      let shared' ← Sym.shareCommon input
      unless Sym.isSameExpr shared shared' do throwError "conditional lost maximal sharing"
      let methods : Sym.Simp.Methods := { pre := Sym.Simp.simpControl }
      let result ← Sym.Simp.SimpM.run' (Sym.Simp.simp shared) methods
      unless result matches .rfl true _ do throwError "visited an unresolved branch"

run_meta do
  withLocalDeclD `p (mkSort .zero) fun p =>
  withLocalDecl `d .instImplicit (mkApp (mkConst ``Decidable) p) fun d => do
  withLocalDeclD `h (← mkEq p (mkConst ``True)) fun h =>
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b =>
    Sym.SymM.run do
      let p ← Sym.shareCommon p
      let a ← Sym.shareCommon a
      let b ← Sym.shareCommon b
      let truth ← Sym.shareCommon (mkConst ``True)
      let h ← Sym.shareCommon h
      let input ← Sym.shareCommon <| mkApp4 (mkConst ``cond [1]) (mkConst ``Nat)
        (mkProj ``Decidable 0 d) a b
      let methods : Sym.Simp.Methods := { pre := fun e => do
        if e == p then return .step truth h (contextDependent := true)
        if e == b then throwError "visited the dead branch"
        Sym.Simp.simpControl e }
      let .step output proof _ true ← Sym.Simp.SimpM.run' (Sym.Simp.simp input) methods
        | throwError "native conditional lost its context dependency"
      unless output == a do throwError "wrong conditional branch: {output}, expected {a}"
      unless (proof.find? (fun e => e.isConstOf ``ite)).isNone do
        throwError "native conditional proof contains ite"
      let some (_, lhs, _) := (← inferType proof).eq? | throwError "expected equality proof"
      unless lhs.isAppOfArity ``cond 4 do throwError "native conditional proof has an ite source"
      check proof
      unless ← isDefEq (← inferType proof) (← mkEq input output) do
        throwError "conditional proof does not prove its result"

example : (if (2 : Nat) < 3 then 7 else 9) = 7 := by cbv
example : (if (4 : Nat) < 3 then 7 else 9) = 9 := by cbv

@[cbv_opaque] def nativeOpaqueDecision (p : Prop) [Decidable p] : Decidable p := inferInstance
example (p : Prop) [Decidable p] (a b : Nat) :
    cond (@decide p (nativeOpaqueDecision p)) a b = cond (@decide p (nativeOpaqueDecision p)) a b := by
  cbv

@[irreducible] def nativeRawValue (p : Prop) [Decidable p] : Nat := if p then 11 else 22
@[irreducible] def nativeNamedValue (p : Prop) [Decidable p] : Nat := cond (decide p) 33 44

theorem nativeRawRule (p : Prop) [Decidable p] :
    (if p then 11 else 22) = nativeRawValue p := by unfold nativeRawValue; rfl

theorem nativeNamedRule (p : Prop) [Decidable p] :
    cond (decide p) 33 44 = nativeNamedValue p := by unfold nativeNamedValue; rfl

def namedRuleInput (p : Prop) [Decidable p] : Nat := cond (decide p) 11 22
def rawRuleInput (p : Prop) [Decidable p] : Nat := if p then 33 else 44

@[irreducible] def nativePairValue (p : Prop) [Decidable p] : Prop × Prop :=
  if p then (p, True) else (False, p)

theorem nativePairRule (p : Prop) [Decidable p] :
    (if p then (p, True) else (False, p)) = nativePairValue p := by unfold nativePairValue; rfl

def incompatibleRuleInput (p q : Prop) [Decidable q] : Prop × Prop :=
  if q then (p, True) else (False, p)

run_meta do
  for (rule, input, expected) in [( ``nativeRawRule, ``namedRuleInput, ``nativeRawValue),
      (``nativeNamedRule, ``rawRuleInput, ``nativeNamedValue)] do
    let rewrite ← Sym.mkSimprocFor #[rule] Sym.Simp.dischargeSimpSelf
    lambdaTelescope (← getConstInfo input).value! fun xs body => Sym.SymM.run do
      let body ← Sym.shareCommon body
      let .step output proof .. ← Sym.Simp.SimpM.run' (rewrite body) {} | throwError "conditional rule not retrieved"
      unless output.isAppOf expected && output.getAppArgs[0]! == xs[0]! do
        throwError "rule failed to infer the proposition from its decision type"
      check proof
  let rewrite ← Sym.mkSimprocFor #[``nativePairRule] Sym.Simp.dischargeSimpSelf
  lambdaTelescope (← getConstInfo ``incompatibleRuleInput).value! fun _ body => Sym.SymM.run do
    let body ← Sym.shareCommon body
    unless (← Sym.Simp.SimpM.run' (rewrite body) {}) matches .rfl .. do
      throwError "conditional rule accepted a decision for the wrong proposition"

-- Native cond evaluates over-applied functions without visiting the unchosen function.
example : (if (2 : Nat) < 3 then (fun n => n + 1) else (fun n => n + 2)) 4 = 5 := by cbv
example : ite ((2 : Nat) < 3) 7 9 = 7 := by cbv

run_meta do
  Sym.SymM.run do
    let inst := mkApp3 (mkConst ``Decidable.intro) (mkConst ``True) (mkConst ``Bool.true) (mkConst ``True.intro)
    let input ← Sym.shareCommon (mkProj ``Decidable 0 inst)
    let simpResult ← Sym.Simp.SimpM.run' (Sym.Simp.simp input)
    let simpValue := Sym.Simp.Result.getResultExpr input simpResult
    unless simpValue.isConstOf ``Bool.true do throwError "simp did not reduce a constructed decision"
    let dsimpResult ← Sym.DSimp.DSimpM.run' (Sym.DSimp.dsimp input)
    unless (Sym.DSimp.Result.getResultExpr input dsimpResult).isConstOf ``Bool.true do
      throwError "dsimp did not reduce a constructed decision"

def nativeOpaqueInput (p : Prop) [Decidable p] (a b : Nat) : Nat :=
  if @decide p (nativeOpaqueDecision p) then a else b

run_meta do
  lambdaTelescope (← getConstInfo ``nativeOpaqueInput).value! fun _ body => do
    let result ← Lean.Meta.Tactic.Cbv.cbvEntry body
    unless Sym.Simp.Result.getResultExpr body result == body do
      throwError "CBV unfolded an opaque decision instance"

set_option sym.debug true in
elab "simp_native_shared_decision" : tactic => do
  let rewrite ← Sym.mkSimprocFor #[``Nat.add_zero] Sym.Simp.dischargeSimpSelf
  let methods : Sym.Simp.Methods := { pre := Sym.Simp.simpControl, post := rewrite }
  liftMetaTactic1 fun goal => Sym.SymM.run do
    let goal ← Sym.preprocessMVar goal
    (← Sym.simpGoal goal methods).toOption

set_option sym.debug true in
example (n : Nat) : (if n + 0 = 0 then 7 else 9) = (if n = 0 then 7 else 9) := by
  simp_native_shared_decision <;> rfl
