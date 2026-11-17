module
import Lean
import Lean.Meta.Decidable
public meta import Lean

/-!
Abstraction (`kabstract`, `rw`, `generalize`) through decision projections: reducible decision
packaging is exposed so motives stay type correct, excluded occurrences and speculative
assignments are left untouched, genuine dependencies survive, and typed decision views
(`getBoolDecision?`) recover the proposition from the supplied instance.
-/

namespace IfCondAbstraction

example (p : Prop) (b : Bool) (h : b.Reflects p) (hb : b = true) :
    (if @Decidable.decide p ⟨b, h⟩ then (1 : Nat) else 2) = 1 := by
  rw [hb]
  rfl

example (p : Prop) (b : Bool) (h : b.Reflects p) (hb : b = true) :
    (if @Decidable.decide p ⟨b, h⟩ then (1 : Nat) else 2) = 1 := by
  rw (occs := .pos [1]) [hb]
  rfl

example (p : Prop) (b : Bool) (h : (!b).Reflects p) (hb : Bool.not b = true) :
    (if @Decidable.decide p ⟨!b, h⟩ then (1 : Nat) else 2) = 1 := by
  rw [hb]
  rfl

example (p : Prop) (b : Bool) (h : b.Reflects p) (hb : b = true) :
    (fun x : Nat => if @Decidable.decide p ⟨b, h⟩ then x else 2) = fun x => x := by
  rw [hb]
  rfl

example (p : Prop) (b : Bool) (h : b.Reflects p) :
    (if @Decidable.decide p ⟨b, h⟩ then Nat else Bool) :=
  match b with
  | true => (7 : Nat)
  | false => false

open Lean Meta in
run_meta do
  withLocalDeclD `p (mkSort .zero) fun p =>
  withLocalDeclD `b (mkConst ``Bool) fun b => do
    withLocalDeclD `h (mkApp2 (mkConst ``Bool.Reflects) b p) fun h => do
      let d := mkApp3 (mkConst ``Decidable.intro) p b h
      for guard in #[mkProj ``Decidable 0 d, mkApp2 (mkConst ``Decidable.decide) p d] do
        let input := mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard
          (mkNatLit 1) (mkNatLit 2)
        for occs in #[Occurrences.all, .pos [1]] do
          let body ← kabstract input b occs
          let motive := mkLambda `b .default (mkConst ``Bool) body
          check motive
          unless ← isDefEq (mkApp motive b) input do
            throwError "projection preparation changed the abstraction result"
        let typeInput := mkApp4 (mkConst ``cond [2]) (mkSort 1) guard
          (mkConst ``Nat) (mkConst ``Bool)
        for occs in #[Occurrences.all, .pos [1]] do
          let body ← kabstract typeInput b occs
          unless body.hasLooseBVars do throwError "dependent motive did not abstract its guard"
          let motive := mkLambda `b .default (mkConst ``Bool) body
          check motive
          unless ← isDefEq (mkApp motive b) typeInput do
            throwError "projection preparation changed the dependent motive"
      let guard := mkProj ``Decidable 0 d
      let pair a b := mkApp4 (mkConst ``Prod.mk [0, 0]) (mkConst ``Bool) (mkConst ``Bool) a b
      for occs in #[Occurrences.pos [2], .neg [1]] do
        let body ← kabstract (pair guard guard) b occs
        unless body == pair guard (mkBVar 0) do
          throwError "abstraction reduced an excluded decision projection"
        check (mkLambda `b .default (mkConst ``Bool) body)
      let body ← kabstract (pair guard guard) guard (.pos [2])
      unless body == pair guard (mkBVar 0) do
        throwError "projection preparation prevented a whole-projection match"

open Lean Meta in
run_meta do
  withLocalDeclD `p (mkSort .zero) fun p =>
  withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d =>
  withLocalDeclD `x (mkConst ``Nat) fun x => do
    let guard := mkProj ``Decidable 0 d
    let input := mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard x (mkNatLit 2)
    let body ← kabstract input x
    unless body == mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard (mkBVar 0) (mkNatLit 2) do
      throwError "abstraction changed an unresolved decision projection"

end IfCondAbstraction

namespace IfCondWrappers

abbrev WrappedDecision (p : Prop) (b : Bool) (h : b.Reflects p) : Decidable p := ⟨b, h⟩
abbrev WrappedDecisionWithArg (p : Prop) (b : Bool) (h : b.Reflects p) (_n : Nat) : Decidable p := ⟨b, h⟩
@[irreducible] def IrreducibleDecision (p : Prop) (b : Bool) (h : b.Reflects p) : Decidable p := ⟨b, h⟩
opaque OpaqueDecision (p : Prop) (b : Bool) (h : b.Reflects p) : Decidable p := ⟨b, h⟩
def DefaultDecision (p : Prop) (b : Bool) (h : b.Reflects p) : Decidable p := ⟨b, h⟩

open Lean Meta

private meta def instanceVariant (kind : Nat) (p b h : Expr) : Expr :=
  let type := mkApp (mkConst ``Decidable) p
  let ctor := mkApp3 (mkConst ``Decidable.intro) p b h
  match kind with
  | 0 => ctor
  | 1 => mkApp3 (mkConst ``WrappedDecision) p b h
  | 2 => mkApp (mkLambda `d .default type (mkBVar 0)) ctor
  | _ => mkLet `d type ctor (mkBVar 0)

private meta def mkGuard (named : Bool) (p d : Expr) : Expr :=
  if named then mkApp2 (mkConst ``Decidable.decide) p d else mkProj ``Decidable 0 d

private meta def checkMotive (input body discr : Expr) : MetaM Unit := do
  unless body.hasLooseBVars do throwError "abstraction did not replace its Boolean field"
  let motive := mkLambda `b .default (mkConst ``Bool) body
  check motive
  unless ← isDefEq (mkApp motive discr) input do
    throwError "motive application changed the original expression"

-- Neither elaboration nor WHNF is allowed to prepare the input before this call.
run_meta do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDeclD `b (mkConst ``Bool) fun b =>
  withLocalDeclD `h (mkApp2 (mkConst ``Bool.Reflects) b p) fun h => do
    for kind in [0, 1, 2, 3] do
      let d := instanceVariant kind p b h
      for named in [false, true] do
        let guard := mkGuard named p d
        if kind != 0 && (reduceDecisionProjection? guard).isSome then
          throwError "wrapper was already reduced before abstraction"
        unless (← reduceDecisionProjectionR? guard) == some b do
          throwError "reducible instance packaging did not expose its Boolean field"
        let input := mkApp4 (mkConst ``cond [2]) (mkSort 1) guard
          (mkConst ``Nat) (mkConst ``Bool)
        check input
        for occs in #[Occurrences.all, .pos [1]] do
          let body ← kabstract input b occs
          checkMotive input body b

run_meta do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDeclD `b (mkConst ``Bool) fun b =>
  withLocalDeclD `h (mkApp2 (mkConst ``Bool.Reflects) b p) fun h => do
    let d := instanceVariant 1 p b h
    let pair a b := mkApp4 (mkConst ``Prod.mk [0, 0]) (mkConst ``Bool) (mkConst ``Bool) a b
    for named in [false, true] do
      let guard := mkGuard named p d
      for occs in #[Occurrences.pos [2], .neg [1]] do
        let body ← kabstract (pair guard guard) b occs
        unless body == pair guard (mkBVar 0) do
          throwError "selected field abstraction changed an excluded original projection"
        checkMotive (pair guard guard) body b
      let body ← kabstract (pair guard guard) guard (.pos [2])
      unless body == pair guard (mkBVar 0) do
        throwError "complete projection matching was lost before preparation"
      check (mkLambda `guard .default (mkConst ``Bool) body)
    let unrelated := mkApp2 (mkConst ``Bool.and) b b
    let guard := mkGuard false p d
    unless (← kabstract (pair guard guard) unrelated) == pair guard guard do
      throwError "no-substitution abstraction changed an unrelated projection"

-- Expose a wrapper in a lambda body containing a bound (unused) wrapper argument.
run_meta do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDeclD `b (mkConst ``Bool) fun b =>
  withLocalDeclD `h (mkApp2 (mkConst ``Bool.Reflects) b p) fun h => do
    let d := mkApp4 (mkConst ``WrappedDecisionWithArg) p b h (mkBVar 0)
    let guard := mkGuard false p d
    let term := mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard (mkNatLit 1) (mkNatLit 2)
    let input := mkLambda `n .default (mkConst ``Nat) term
    for occs in #[Occurrences.all, .pos [1]] do
      checkMotive input (← kabstract input b occs) b

-- Reducible-only inspection stays narrow; abstraction also supports transparent definitions.
run_meta do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDeclD `b (mkConst ``Bool) fun b =>
  withLocalDeclD `h (mkApp2 (mkConst ``Bool.Reflects) b p) fun h => do
    for name in [``OpaqueDecision, ``IrreducibleDecision, ``DefaultDecision] do
      let d := mkApp3 (mkConst name) p b h
      let guard := mkGuard false p d
      unless (← reduceDecisionProjectionR? guard).isNone do
        throwError "instance exposure exceeded reducible transparency"
      let input := mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard
        (mkNatLit 1) (mkNatLit 2)
      check input
      let body ← kabstract input b
      let valid ← withoutModifyingState <| isTypeCorrect (mkLambda `b .default (mkConst ``Bool) body)
      if name == ``DefaultDecision then
        unless valid do throwError "transparent wrapper abstraction failed"
      else
        if valid then throwError "unsupported wrapper unexpectedly erased a dependency"

-- Carrier dependency survives projection contraction and cannot be rewritten without transport.
run_meta do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDeclD `b (mkConst ``Bool) fun b =>
  withLocalDeclD `h (mkApp2 (mkConst ``Bool.Reflects) b p) fun h => do
    let guard := mkGuard false p (instanceVariant 1 p b h)
    let carrier := mkApp4 (mkConst ``cond [2]) (mkSort 1) guard (mkConst ``Nat) (mkConst ``Bool)
    withLocalDeclD `x carrier fun x => do
      let input ← mkEq x x
      check input
      for occs in #[Occurrences.all, .pos [1]] do
        let body ← kabstract input b occs
        let valid ← withoutModifyingState <| isTypeCorrect (mkLambda `b .default (mkConst ``Bool) body)
        if valid then throwError "abstraction erased a genuine carrier dependency"

example (p : Prop) (b : Bool) (h : b.Reflects p) (hb : b = true) :
    cond (@decide p (WrappedDecision p b h)) 1 2 = 1 := by
  rw [hb]
  rfl

example (p : Prop) (b : Bool) (h : b.Reflects p) :
    cond (@decide p (WrappedDecision p b h)) Nat Bool := by
  generalize b = c
  cases c
  · exact false
  · exact (7 : Nat)

example (p : Prop) (b : Bool) (h : b.Reflects p) (_hb : b = true)
    (x : cond (@decide p (WrappedDecision p b h)) Nat Bool) : x = x := by
  fail_if_success rw [_hb]
  rfl

example (p : Prop) (b c : Bool) (h : b.Reflects p)
    (whole : @decide p (WrappedDecision p b h) = c) :
    cond (@decide p (WrappedDecision p b h)) (1 : Nat) 2 = cond c 1 2 := by
  rw [whole]

abbrev IdentityDecision (p : Prop) (d : Decidable p) : Decidable p := d
abbrev IdentityDecisionWithArg (p : Prop) (d : Decidable p) (_n : Nat) : Decidable p := d

-- A neutral bound dictionary, including after wrapper reduction, stays neutral.
run_meta do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDeclD `x (mkConst ``Nat) fun x => do
    let type := mkApp (mkConst ``Decidable) p
    let bound := mkBVar 0
    let instances := #[bound,
      mkApp2 (mkConst ``IdentityDecision) p bound,
      mkApp3 (mkConst ``IdentityDecisionWithArg) p bound x,
      mkApp (mkLambda `d .default type (mkBVar 0)) bound,
      mkLet `d type bound (mkBVar 0)]
    for d in instances do
      for named in [false, true] do
        let guard := mkGuard named p d
        let term := mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard x (mkNatLit 0)
        let input := mkLambda `d .default type term
        check input
        unless (← reduceDecisionProjectionR? guard).isNone do
          throwError "neutral bound decision unexpectedly exposed a constructor"
        for occs in #[Occurrences.all, .pos [1]] do
          let body ← kabstract input x occs
          let motive := mkLambda `x .default (mkConst ``Nat) body
          check motive
          unless ← isDefEq (mkApp motive x) input do
            throwError "neutral bound decision changed during abstraction"

-- A bound function can also produce a neutral decision without a reducible record head.
run_meta do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDeclD `x (mkConst ``Nat) fun x => do
    let type ← Lean.mkArrow (mkConst ``Nat) (mkApp (mkConst ``Decidable) p)
    let d := mkApp (mkBVar 0) x
    for named in [false, true] do
      let guard := mkGuard named p d
      let term := mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard x (mkNatLit 0)
      let input := mkLambda `f .default type term
      check input
      unless (← reduceDecisionProjectionR? guard).isNone do
        throwError "bound function application unexpectedly exposed a constructor"
      for occs in #[Occurrences.all, .pos [1]] do
        let body ← kabstract input x occs
        let motive := mkLambda `x .default (mkConst ``Nat) body
        check motive
        unless ← isDefEq (mkApp motive x) input do
          throwError "bound function application changed during abstraction"

end IfCondWrappers

namespace IfCondCompounds
opaque P (n : Nat) : Prop := n = 0
def Custom (p : Prop) (d : Decidable p) (_n : Nat) : Decidable (¬p) := @instDecidableNot p d
@[irreducible] def Locked (p : Prop) (d : Decidable p) : Decidable (¬p) := Custom p d 0
opaque Hidden (p : Prop) (d : Decidable p) : Decidable (¬p) := Custom p d 0

example (a b : Nat) [Decidable (P a)] (h : a = b) :
    (if P a ∧ a = 0 then a else 1) = (if P a ∧ a = 0 then a else 1) := by
  rw [h]

example (a : Nat) [Decidable (P a)] :
    (if ¬P a then a else 1) = (if ¬P a then a else 1) := by
  generalize a = b
  rfl

example (a b : Nat) (h : a = b) (hb : b ≤ 2) : decide (a ≤ 2) = true := by
  rw [h]
  simp only [hb, decide_true]

open Lean Meta

private meta def validate (input target : Expr) (occs : Occurrences := .all) (expectSubstitution : Bool := true) : MetaM Expr := do
  check input
  let body ← kabstract input target occs
  if expectSubstitution && !body.hasLooseBVars then throwError "expected computational substitution"
  let motive := mkLambda `x .default (← inferType target) body
  check motive
  unless ← isDefEq (mkApp motive target) input do throwError "invalid motive endpoint"
  return body

run_meta do
  withLocalDeclD `a (mkConst ``Nat) fun a => do
    let p := mkApp (mkConst ``P) a
    withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d => do
      let np := mkNot p
      let nd := mkApp2 (mkConst ``instDecidableNot) p d
      let pair x y := mkApp4 (mkConst ``Prod.mk [0, 0]) (mkConst ``Bool) (mkConst ``Bool) x y
      for named in [false, true] do
        let guard := if named then mkApp2 (mkConst ``Decidable.decide) np nd else mkProj ``Decidable 0 nd
        let term := mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard a (mkNatLit 0)
        discard <| validate term a
        let assigned ← mkFreshExprMVar (← inferType term)
        assigned.mvarId!.assign term
        discard <| validate assigned a
        discard <| validate term a (.pos [1])
        unless (← kabstract term a (.pos [999])) == term do
          throwError "excluded occurrences changed the original projection"
        let selected ← validate (pair guard guard) guard (.pos [2])
        unless selected == pair guard (mkBVar 0) do throwError "whole projection priority lost"
      let atomic := mkApp2 (mkConst ``Decidable.decide) p d
      let untouched ← validate atomic a .all false
      unless untouched == atomic do throwError "no substitution changed a named neutral projection"
      for bound in [false, true] do
        let arg := if bound then mkBVar 0 else a
        let custom := mkApp3 (mkConst ``Custom) p d arg
        let guard := mkProj ``Decidable 0 custom
        let term := mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard a (mkNatLit 0)
        let input := if bound then mkLambda `n .default (mkConst ``Nat) term else term
        discard <| validate input a
      for name in [``Locked, ``Hidden] do
        let guard := mkProj ``Decidable 0 (mkApp2 (mkConst name) p d)
        let body ← kabstract guard a
        if ← withoutModifyingState <| isTypeCorrect (mkLambda `x .default (mkConst ``Nat) body) then
          throwError "opaque packaging dependency was discarded"
      let familyType := mkForall `n .default (mkConst ``Nat)
        (mkApp (mkConst ``Decidable) (mkApp (mkConst ``P) (mkBVar 0)))
      withLocalDeclD `family familyType fun family => do
        let guard := mkProj ``Decidable 0 (mkApp family a)
        let carrier := mkApp4 (mkConst ``cond [2]) (mkSort 1) guard (mkConst ``Nat) (mkConst ``Bool)
        withLocalDeclD `value carrier fun value => do
          let input ← mkEq value value
          let body ← kabstract input a
          if ← withoutModifyingState <| isTypeCorrect (mkLambda `x .default (mkConst ``Nat) body) then
            throwError "genuine carrier dependency was discarded"

-- A failed narrow attempt must not retain the pattern assignment from discarded packaging.
run_meta do
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b => do
    let succ := mkApp (mkConst ``Nat.succ)
    let p := mkApp (mkConst ``P) (succ a)
    withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d => do
      let guard := mkProj ``Decidable 0 (mkApp2 (mkConst ``instDecidableNot) p d)
      let input := mkApp4 (mkConst ``cond [1]) (mkConst ``Nat) guard (succ b) (mkNatLit 0)
      for occs in #[Occurrences.all, .pos [1]] do
        let arg ← mkFreshExprMVar (mkConst ``Nat)
        let target := succ arg
        discard <| validate input target occs
        unless (← instantiateMVars arg) == b do
          throwError "failed abstraction leaked a predicate-pattern assignment"

end IfCondCompounds

/-! Occurrence selection and speculative state in `kabstract`. -/

namespace IfCondOccurrences

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

end IfCondOccurrences

/-! Typed decision views. -/

namespace IfCondDecisionView

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

end IfCondDecisionView
