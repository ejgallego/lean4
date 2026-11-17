module
public import Lean

/-! Excluded `kabstract` matches restore backtrackable state, including postponed universe constraints. -/

open Lean Meta

run_meta withNewMCtxDepth do
  let u ← mkFreshLevelMVar
  let v ← mkFreshLevelMVar
  let before ← getNumPostponed
  let input := mkSort .one
  let result ← withConfig (fun c => { c with univApprox := false }) <|
    kabstract input (mkSort (.max u v)) (.pos [])
  unless result == input do throwError "excluded occurrence changed the expression"
  unless (← getNumPostponed) == before do throwError "excluded occurrence leaked universe constraints"
  if (← isLevelMVarAssigned u.mvarId!) || (← isLevelMVarAssigned v.mvarId!) then
    throwError "excluded occurrence assigned universe metavariables"

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
