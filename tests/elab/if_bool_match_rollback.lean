module
import Lean

/-! Conditional matching restores assignments and postponed universe constraints on failure
and when skipping occurrences, while selected matches retain their constraints. -/

open Lean Meta in
run_meta withNewMCtxDepth do
  let u ← mkFreshLevelMVar
  let v ← mkFreshLevelMVar
  let level := Level.max u v
  let α := mkSort level
  let t ← mkFreshExprMVar α
  let e ← mkFreshExprMVar α
  let d ← synthInstance (mkApp (mkConst ``Decidable) (mkConst ``False))
  let pattern := mkApp5 (mkConst ``ite [.succ level]) α (mkConst ``False) d t e
  let target := mkApp4 (mkConst ``cond [.succ .one]) (mkSort .one) (mkConst ``Bool.true)
    (mkConst ``Nat) (mkConst ``Bool)
  let before ← getNumPostponed
  if ← withConfig (fun c => { c with univApprox := false }) <| isDefEqIf pattern target then
    throwError "matched incompatible conditions"
  unless (← getNumPostponed) == before do throwError "failed match leaked universe constraints"
  for m in #[t, e] do
    if ← m.mvarId!.isAssigned then throwError "failed match leaked expression assignments"
  for l in #[u, v] do
    if ← isLevelMVarAssigned l.mvarId! then throwError "failed match leaked universe assignments"

open Lean Meta in
run_meta withNewMCtxDepth do
  let u ← mkFreshLevelMVar
  let v ← mkFreshLevelMVar
  let before ← getNumPostponed
  let _ ← withConfig (fun c => { c with univApprox := false }) <|
    kabstract (mkSort .one) (mkSort (.max u v)) (.pos [])
  unless (← getNumPostponed) == before do throwError "excluded occurrence leaked universe constraints"

open Lean Meta in
run_meta withNewMCtxDepth do
  let u ← mkFreshLevelMVar
  let v ← mkFreshLevelMVar
  let before ← getNumPostponed
  let result ← withConfig (fun c => { c with univApprox := false }) <|
    kabstract (mkSort .one) (mkSort (.max u v))
  unless result == mkBVar 0 do throwError "did not abstract selected occurrence"
  if (← getNumPostponed) == before && !(← isLevelMVarAssigned u.mvarId!) &&
      !(← isLevelMVarAssigned v.mvarId!) then
    throwError "discarded successful match constraints"

open Lean Meta in
run_meta withNewMCtxDepth do
  withLocalDeclD `p (mkSort .zero) fun p =>
    withLocalDeclD `q (mkSort .zero) fun q =>
      withLocalDeclD `dp (mkApp (mkConst ``Decidable) p) fun dp =>
        withLocalDeclD `dq (mkApp (mkConst ``Decidable) q) fun dq => do
          let proposition ← mkFreshExprMVar (mkSort .zero)
          let decision ← mkFreshExprMVar (mkApp (mkConst ``Decidable) proposition)
          let pattern := mkApp2 (mkConst ``Decidable.decide) proposition decision
          let rawP := mkProj ``Decidable 0 dp
          let rawQ := mkProj ``Decidable 0 dq
          let pair a b := mkApp4 (mkConst ``Prod.mk [.zero, .zero]) (mkConst ``Bool) (mkConst ``Bool) a b
          let result ← kabstract (pair rawP rawQ) pattern (.pos [2])
          unless result == pair rawP (mkBVar 0) do throwError "wrong selected occurrence"
          unless (← instantiateMVars proposition) == q do throwError "excluded occurrence fixed proposition"
          unless (← instantiateMVars decision) == dq do throwError "excluded occurrence fixed decision"
