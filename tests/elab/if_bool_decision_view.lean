module
import Lean
import Lean.Meta.Decidable

/-! T2–T4: typed decision views recognize both projection forms, preserve the supplied instance, and expose reducible decision aliases. -/

abbrev AliasDecision (p : Prop) := Decidable p
def SemiReducibleDecision (p : Prop) := Decidable p
opaque OpaqueDecision (p : Prop) (d : Decidable p) : Decidable p := d

open Lean Meta in
run_meta do
  withLocalDeclD `p (mkSort .zero) fun p => do
    withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d => do
      let proj := mkProj ``Decidable 0 d
      let named := mkApp2 (mkConst ``Decidable.decide) p d
      let markedProj := proj.setOption `pp.explicit true
      let checkView (label : String) (guard : Expr) (expectedP expectedD : Expr) : MetaM Unit := do
        let some (actualP, actualD) ← getBoolDecision? guard
          | throwError "{label}: expected a decision view"
        unless actualP == expectedP do
          throwError "{label}: predicate was not recovered from the supplied instance type"
        unless actualD == expectedD do
          throwError "{label}: helper did not retain the supplied instance"
      checkView "primitive projection" proj p d
      checkView "named projection" named p d
      checkView "metadata-wrapped guard" markedProj p d
      checkView "metadata-wrapped named guard" (named.setOption `pp.explicit true) p d
      checkView "metadata-wrapped instance"
        (mkProj ``Decidable 0 (d.setOption `pp.explicit true)) p (d.setOption `pp.explicit true)
      let opaqueD := mkApp2 (mkConst ``OpaqueDecision) p d
      checkView "opaque decision projection" (mkProj ``Decidable 0 opaqueD) p opaqueD
      checkView "opaque decision named projection" (mkApp2 (mkConst ``Decidable.decide) p opaqueD) p opaqueD
      checkView "metadata-wrapped opaque projection"
        ((mkProj ``Decidable 0 opaqueD).setOption `pp.explicit true) p opaqueD
      checkView "metadata-wrapped opaque named projection"
        ((mkApp2 (mkConst ``Decidable.decide) p opaqueD).setOption `pp.explicit true) p opaqueD

      let guardMVar ← mkFreshExprMVar (mkConst ``Bool)
      guardMVar.mvarId!.assign proj
      let assignedGuardBefore ← instantiateMVars guardMVar
      let mctxBeforeGuard ← getMCtx
      let mvarCounterBefore := mctxBeforeGuard.mvarCounter
      checkView "assigned guard metavariable" guardMVar p d
      unless (← instantiateMVars guardMVar) == assignedGuardBefore do
        throwError "typed view changed an assigned guard metavariable"
      let mvarCounterAfter ← getMCtx
      unless mvarCounterAfter.mvarCounter == mvarCounterBefore do
        throwError "typed view allocated metavariables for an assigned guard"

      let decisionMVar ← mkFreshExprMVar (mkApp (mkConst ``Decidable) p)
      decisionMVar.mvarId!.assign d
      let assignedDecision ← instantiateMVars decisionMVar
      let mctxBeforeDecision ← getMCtx
      let mvarCounterBeforeDecision := mctxBeforeDecision.mvarCounter
      checkView "assigned decision metavariable" (mkProj ``Decidable 0 decisionMVar) p assignedDecision
      unless (← decisionMVar.mvarId!.isAssigned) do
        throwError "typed view changed an assigned decision metavariable"
      let mvarCounterAfterDecision ← getMCtx
      unless mvarCounterAfterDecision.mvarCounter == mvarCounterBeforeDecision do
        throwError "typed view allocated metavariables for an assigned decision"

      withLocalDeclD `a (mkApp (mkConst ``AliasDecision) p) fun a => do
        checkView "reducible type alias" (mkProj ``Decidable 0 a) p a
        checkView "reducible alias named projection"
          (mkApp2 (mkConst ``Decidable.decide) p a) p a

      withLocalDeclD `s (mkApp (mkConst ``SemiReducibleDecision) p) fun s => do
        let view ← getBoolDecision? (mkProj ``Decidable 0 s)
        unless view.isNone do
          throwError "semireducible type alias unexpectedly passed reducible exposure"

      withLocalDeclD `b (mkConst ``Bool) fun b => do
        let mctxBeforeRaw ← getMCtx
        let mvarCounterBeforeRaw := mctxBeforeRaw.mvarCounter
        let view ← getBoolDecision? b
        unless view.isNone do
          throwError "raw Boolean unexpectedly acquired a decision view"
        let mvarCounterAfterRaw ← getMCtx
        unless mvarCounterAfterRaw.mvarCounter == mvarCounterBeforeRaw do
          throwError "raw Boolean view allocated metavariables"

      let unresolvedType ← mkFreshExprMVar (mkSort (.succ .zero))
      let unresolvedDecision ← mkFreshExprMVar unresolvedType
      let unresolvedTypeId := unresolvedType.mvarId!
      let mctxBeforeUnknown ← getMCtx
      let mvarCounterBeforeUnknown := mctxBeforeUnknown.mvarCounter
      let unresolvedView ← getBoolDecision? (mkProj ``Decidable 0 unresolvedDecision)
      unless unresolvedView.isNone do
        throwError "unresolved decision type unexpectedly acquired a view"
      unless !(← unresolvedTypeId.isAssigned) do
        throwError "typed view assigned an unresolved decision type"
      let mvarCounterAfterUnknown ← getMCtx
      unless mvarCounterAfterUnknown.mvarCounter == mvarCounterBeforeUnknown do
        throwError "typed view allocated metavariables for an unresolved decision"

      let invalidGuard := mkProj ``Decidable 0 (mkBVar 0)
      let inferenceFailed ← try
        let _ ← getBoolDecision? invalidGuard
        pure false
      catch _ => pure true
      unless inferenceFailed do
        throwError "typed view suppressed an inferType failure for a recognized projection"

open Lean Meta in
run_meta withNewMCtxDepth do
  let p ← mkFreshExprMVar (mkSort .zero)
  let d ← mkFreshExprMVar (mkApp (mkConst ``Decidable) p)
  let pId := p.mvarId!
  let dId := d.mvarId!
  let mctxBefore ← getMCtx
  let mvarCounterBefore := mctxBefore.mvarCounter
  let guards := #[mkProj ``Decidable 0 d, mkApp2 (mkConst ``Decidable.decide) p d]
  for guard in guards do
    let some (actualP, actualD) ← getBoolDecision? guard
      | throwError "unassigned decision metavariable did not produce a typed view"
    unless actualP == p && actualD == d do
      throwError "typed view changed an unassigned proposition or decision metavariable"
    if ← pId.isAssigned then throwError "typed view assigned the original proposition metavariable"
    if ← dId.isAssigned then throwError "typed view assigned the original decision metavariable"
  let mctxAfter ← getMCtx
  unless mctxAfter.mvarCounter == mvarCounterBefore do
    throwError "typed view allocated metavariables for an unresolved decision"
