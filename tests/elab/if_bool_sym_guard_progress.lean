module
import Lean
public meta import Lean

/-! Symbolic conditional guards reduce exposed decisions and honor rewrites, context, and stop flags. -/

open Lean Meta Sym Sym.Simp

private meta def checkStep (input expected : Expr) (result : Result) (cd := false) : SymM Unit := do
  let .step output proof _ dependent := result | throwError "conditional guard made no progress"
  unless output == expected && dependent == cd do
    throwError "wrong guard result or context dependency: {output}"
  check proof
  unless ← isDefEq (← Meta.inferType proof) (← mkEq input output) do
    throwError "conditional guard proof has the wrong endpoints"

private meta def checkExposedDecision (named value : Bool) : MetaM Unit := do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDeclD `hp (if value then p else mkNot p) fun hp =>
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b => SymM.run do
    let bool := mkConst (if value then ``Bool.true else ``Bool.false)
    let inst := mkApp3 (mkConst ``Decidable.intro) p bool hp
    let guard := if named then mkApp2 (mkConst ``Decidable.decide) p inst else mkProj ``Decidable 0 inst
    let input ← shareCommon (mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard a b)
    let expected ← shareCommon (if value then a else b)
    let dead := if value then b else a
    let methods : Methods := { pre := fun e => do
      if e == dead then throwError "visited the dead branch"
      simpControl e }
    checkStep input expected (← SimpM.run' (Sym.Simp.simp input) methods)

set_option sym.debug true in
run_meta checkExposedDecision false true
set_option sym.debug true in
run_meta checkExposedDecision true true
set_option sym.debug true in
run_meta checkExposedDecision false false
set_option sym.debug true in
run_meta checkExposedDecision true false

private meta def checkGuardRewrite (named : Bool) (predicateCD := true) (rewriteCD := false) : MetaM Unit := do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDecl `d .instImplicit (mkApp (mkConst ``Decidable) p) fun d =>
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b => do
    let guard := if named then mkApp2 (mkConst ``Decidable.decide) p d else mkProj ``Decidable 0 d
    withLocalDeclD `h (← mkEq guard (mkConst ``Bool.true)) fun h => do
      let rules := ({} : Theorems).insert (← mkTheoremFromExpr h)
      SymM.run do
        let input ← shareCommon (mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard a b)
        let expected ← shareCommon a
        let methods : Methods := {
          pre := fun e => do
            if e == p then return .rfl (contextDependent := predicateCD)
            if e == b then throwError "visited the dead branch"
            simpControl e
          post := fun e => do
            let r ← rules.rewrite (d := dischargeNone) e
            return if rewriteCD then r.withContextDependent else r }
        checkStep input expected (← SimpM.run' (Sym.Simp.simp input) methods) (predicateCD || rewriteCD)

set_option sym.debug true in
run_meta checkGuardRewrite false
set_option sym.debug true in
run_meta checkGuardRewrite true
set_option sym.debug true in
run_meta checkGuardRewrite false false true

set_option sym.debug true in
run_meta do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDecl `d .instImplicit (mkApp (mkConst ``Decidable) p) fun d =>
  withLocalDeclD `q (mkConst ``Bool) fun q =>
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b => do
    for guard in #[mkProj ``Decidable 0 d, mkApp2 (mkConst ``Decidable.decide) p d] do
      withLocalDeclD `h (← mkEq guard q) fun h => do
        let rules := ({} : Theorems).insert (← mkTheoremFromExpr h)
        SymM.run do
          let input ← shareCommon (mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard a b)
          let expected ← shareCommon (mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) q a b)
          let methods : Methods := {
            pre := fun e => do
              if e == p then return .rfl (contextDependent := true)
              if e == a || e == b then throwError "visited an unresolved branch"
              simpControl e
            post := rules.rewrite (d := dischargeNone) }
          checkStep input expected (← SimpM.run' (Sym.Simp.simp input) methods) true

run_meta do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDecl `d .instImplicit (mkApp (mkConst ``Decidable) p) fun d =>
  withLocalDeclD `q (mkConst ``Bool) fun q =>
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b => do
    let guard := mkProj ``Decidable 0 d
    withLocalDeclD `h (← mkEq guard q) fun h => SymM.run do
      let input ← shareCommon (mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard a b)
      let methods : Methods := { pre := fun e => do
        if e == guard || e == q || e == a || e == b then
          throwError "crossed a completed guard callback"
        simpCondWith (fun _ _ => return .rfl (done := true) (contextDependent := true)) e }
      unless (← SimpM.run' (Sym.Simp.simp input) methods) matches .rfl true true do
        throwError "lost a completed unchanged guard result"
      let q ← shareCommon q
      let methods := { methods with pre := fun e => do
        if e == q || e == a || e == b then throwError "revisited a completed changed guard"
        simpCondWith (fun _ _ => return .step q h (done := true) (contextDependent := true)) e }
      let expected ← shareCommon (mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) q a b)
      let result ← SimpM.run' (Sym.Simp.simp input) methods
      unless result matches .step _ _ true true do throwError "lost completed guard flags"
      checkStep input expected result true

@[cbv_opaque] def guardOpaqueDecision (p : Prop) [Decidable p] : Decidable p := inferInstance

def opaqueGuardInput (p : Prop) [d : Decidable p] (a b : Nat) :=
  cond (@decide p (guardOpaqueDecision p)) a b

run_meta do
  lambdaTelescope (← getConstInfo ``opaqueGuardInput).value! fun _ body => do
    let result ← Lean.Meta.Tactic.Cbv.cbvEntry body
    unless result.getResultExpr body == body do
      throwError "CBV unfolded an opaque decision"
