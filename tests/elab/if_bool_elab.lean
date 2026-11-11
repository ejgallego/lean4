module
import Lean

/-!
Ordinary `if` elaborates to `cond` with a raw decision projection and preserves
the proposition in the decision instance type. Dependent `if` and explicit `ite`
retain their own applications.
-/

open Lean Meta Elab Term

namespace IfBoolElab

def eqZero (x : Nat) : Nat := if x = 0 then 10 else 20
def ltCondition (x y : Nat) : Nat := if x < y then 10 else 20
def boolCondition (b : Bool) : Nat := if b then 10 else 20
def compoundBoolCondition (b c : Bool) : Nat := if b && c then 10 else 20
def propCondition (p : Prop) [Decidable p] : Nat := if p then 10 else 20
def doCondition (x : Nat) : Nat := Id.run do
  if x = 0 then return 10 else return 20
def dependentCondition (p : Prop) [Decidable p] : Nat := if _h : p then 10 else 20
def explicitIte (p : Prop) [Decidable p] : Nat := ite p 10 20
def propBranches (b : Bool) (p q : Prop) : Prop := if b then p else q

run_meta do
  for decl in [``eqZero, ``boolCondition, ``propCondition, ``propBranches] do
    let info ← getConstInfo decl
    lambdaTelescope info.value! fun _ body => do
      unless body.isAppOfArity ``cond 4 do
        throwError "expected cond in {decl}: {body}"
  for decl in [``eqZero, ``propCondition] do
    lambdaTelescope (← getConstInfo decl).value! fun xs body => do
      let condition := body.getAppArgs[1]!
      let .proj ``Decidable 0 decision := condition
        | throwError "expected decision projection in {decl}: {condition}"
      let expected ← if decl == ``eqZero then mkEq xs[0]! (mkNatLit 0) else pure xs[0]!
      unless ← isDefEq (← inferType decision) (mkApp (mkConst ``Decidable) expected) do
        throwError "decision lost original proposition in {decl}"
  lambdaTelescope (← getConstInfo ``boolCondition).value! fun xs body => do
    unless body.getAppArgs[1]! == xs[0]! do
      throwError "Boolean condition changed"
  lambdaTelescope (← getConstInfo ``doCondition).value! fun _ body => do
    let some conditional := body.find? (·.isAppOfArity ``cond 4)
      | throwError "expected cond in do: {body}"
    unless conditional.getAppArgs[1]! matches .proj ``Decidable 0 _ do
      throwError "expected decision projection in do: {conditional}"
  for (decl, head) in [( ``dependentCondition, ``dite), (``explicitIte, ``ite)] do
    let info ← getConstInfo decl
    lambdaTelescope info.value! fun _ body => do
      unless body.isAppOf head do
        throwError "expected {head} in {decl}: {body}"

example {α : Sort u} (b : Bool) (t e : α) :
    (if b then t else e) = cond b t e := rfl

example {α : Sort u} (p : Prop) [d : Decidable p] (t e : α) :
    (if p then t else e) = cond (@Decidable.decide p d) t e := rfl

example (b : Bool) (p q : Prop) [Decidable p] [Decidable q] (x y : Nat) : Nat :=
  if (if b then p else q) then x else y

example (p q r : Prop) [Decidable p] [Decidable q] [Decidable r] (x y : Nat) : Nat :=
  if (if p then q else r) then x else y

structure Flag where
  value : Bool

instance : Coe Flag Bool := ⟨Flag.value⟩

def flagCondition (f : Flag) : Nat := if f then 10 else 20

run_meta do
  lambdaTelescope (← getConstInfo ``flagCondition).value! fun _ body => do
    unless body.getAppArgs[1]!.isAppOfArity ``Flag.value 1 do
      throwError "custom Boolean coercion changed"
  lambdaTelescope (← getConstInfo ``compoundBoolCondition).value! fun _ body => do
    unless body.getAppArgs[1]!.isAppOfArity ``Bool.and 2 do
      throwError "compound Boolean condition changed"

example (f : Flag) (x y : Nat) : (if f then x else y) = cond f.value x y := rfl

opaque hiddenDecision (x : Nat) : Decidable (x = 0) := inferInstance

def opaqueCondition (x : Nat) : Nat :=
  if (@Decidable.decide (x = 0) (hiddenDecision x)) then 10 else 20

run_meta do
  let ctx ← Simp.mkContext (simpTheorems := #[])
  for decl in [``eqZero, ``ltCondition, ``opaqueCondition] do
    lambdaTelescope (← getConstInfo decl).value! fun _ body => do
      let (r, _) ← Lean.Meta.simp body ctx
      unless r.expr.isAppOfArity ``cond 4 && r.expr.getAppArgs[1]! == body.getAppArgs[1]! do
        throwError "empty simp set changed the decision projection in {decl}: {r.expr}"
      Meta.check (← r.getProof)

def andCondition (p q : Prop) [Decidable p] [Decidable q] : Nat := if p ∧ q then 1 else 0
def orCondition (p q : Prop) [Decidable p] [Decidable q] : Nat := if p ∨ q then 1 else 0
def impliesCondition (p q : Prop) [Decidable p] [Decidable q] : Nat := if p → q then 1 else 0

run_meta do
  lambdaTelescope (← getConstInfo ``opaqueCondition).value! fun xs body => do
    let .proj ``Decidable 0 decision := body.getAppArgs[1]!
      | throwError "expected opaque decision projection"
    unless decision.isAppOfArity ``hiddenDecision 1 do
      throwError "opaque decision instance changed: {decision}"
    unless ← isDefEq (← inferType decision)
        (mkApp (mkConst ``Decidable) (← mkEq xs[0]! (mkNatLit 0))) do
      throwError "opaque decision lost its proposition"
  for decl in [``andCondition, ``orCondition, ``impliesCondition] do
    lambdaTelescope (← getConstInfo decl).value! fun xs body => do
      let .proj ``Decidable 0 decision := body.getAppArgs[1]!
        | throwError "expected compound decision projection in {decl}"
      let expected ← if decl == ``impliesCondition then mkArrow xs[0]! xs[1]!
        else pure (mkApp2 (mkConst (if decl == ``andCondition then ``And else ``Or)) xs[0]! xs[1]!)
      unless ← isDefEq (← inferType decision) (mkApp (mkConst ``Decidable) expected) do
        throwError "compound decision lost its original proposition in {decl}"

example (x : Nat) :
    letI := hiddenDecision x
    (if x = 0 then 10 else 20) = cond (@Decidable.decide (x = 0) (hiddenDecision x)) 10 20 := rfl

example (_p : Prop) : True := by
  fail_if_success have _ : Nat := if _p then 1 else 0
  trivial

-- Resolve a condition's overloads from information in the branches.
def inferred := fun x => if x = 0 then x else (1 : Nat)
example : inferred 0 = 0 := rfl
example : inferred 2 = 1 := rfl
def inferredInt := fun x => if x = 0 then x else (1 : Int)
example : inferredInt (-1) = 1 := rfl

def sibling := fun x => (if x = 0 then x else 1, (x : Int))
def siblingRev := fun x => ((x : Int), if x = 0 then x else 1)
example : sibling (-1) = (1, -1) := rfl
example : siblingRev (-1) = (-1, 1) := rfl

example (keys : Array DiscrTree.Key) : Bool :=
  if keys[0]? == some .star then true else false

example (keys : Array DiscrTree.Key) : Bool :=
  if true && keys[0]? == some .other then true else false

example (keys : Array DiscrTree.Key) : MetaM Bool := do
  if true && keys[0]? == some .star then return true else return false

def row : Array Bool → String := Array.foldr (fun b s => s ++ (if b then "#" else " ")) ""
#guard row #[true, false] == " #"

-- A postponed sibling must retain the chance to learn its expected type.
example : ((⟨1, 2⟩), if true then (0 : Nat) else 1) = ((1, 2), 0) := rfl

#guard (if (0 : Nat) = 0 then 10 else 20) == 10
#guard (if (1 : Nat) = 0 then 10 else 20) == 20
#guard (if false then 10 else 20) == 20
#guard (if (0 : Nat) = 0 then (if true then 1 else 2) else 3) == 1
#guard ((fun x => if x = 0 then x else 1) (2 : Int)) == 1
#guard (Id.run do if (0 : Nat) = 0 then return 10 else return 20) == 10

end IfBoolElab

namespace IfBoolPropCoercion

structure PropFlag where
  proposition : Prop
  decision : Decidable proposition

instance : Coe PropFlag Prop := ⟨PropFlag.proposition⟩
instance (f : PropFlag) : Decidable (f : Prop) := f.decision

def choose (f : PropFlag) : Nat := if f then 1 else 0
example (f : PropFlag) : choose f = ite (f : Prop) 1 0 := rfl

structure BothFlags extends PropFlag where
  boolean : Bool

instance : Coe BothFlags Bool := ⟨BothFlags.boolean⟩
instance : Coe BothFlags Prop := ⟨fun f => f.proposition⟩
instance (f : BothFlags) : Decidable (f : Prop) := f.decision

example (f : BothFlags) : (if f then 1 else 0) = cond f.boolean 1 0 := rfl

end IfBoolPropCoercion
