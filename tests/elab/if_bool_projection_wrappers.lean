module
import Lean
public meta import Lean

/-! R4/T5–T7/T14/T15: reducible decision packaging, selected abstractions, and surviving dependencies. -/

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

-- An opaque or non-reducible instance is not permission to drop its certificates.
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
