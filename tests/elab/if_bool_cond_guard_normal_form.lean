module
import Lean
public meta import Lean
public meta import Lean.Meta.Tactic.Grind.NormSym

/-! Native conditional normalizers agree on decision negation without repeatedly reboxing Boolean guards. -/

namespace GuardNormalForm

def propNeg (p : Prop) [Decidable p] (a b : Nat) := (if ¬p then a else b) = b
def boolNeg (p : Prop) [Decidable p] (a b : Nat) := (if !decide p then a else b) = b
opaque opaqueNegDecision (p : Prop) [Decidable p] : Decidable (¬p) := inferInstance
def opaqueNeg (p : Prop) [Decidable p] (a b : Nat) :=
  cond (@decide (¬p) (opaqueNegDecision p)) a b = b
def arbitraryNeg (p : Prop) [Decidable p] (d : Decidable (¬p)) (a b : Nat) :=
  cond (@decide (¬p) d) a b = b
def standalone (p : Prop) [Decidable p] := decide (¬p)

end GuardNormalForm

open Lean Meta in
run_meta do
  for (decl, rawProjection) in [( ``GuardNormalForm.propNeg, false),
      (``GuardNormalForm.boolNeg, false), (``GuardNormalForm.opaqueNeg, false),
      (``GuardNormalForm.arbitraryNeg, false), (``GuardNormalForm.standalone, false),
      (``GuardNormalForm.standalone, true)] do
    lambdaTelescope (← getConstInfo decl).value! fun _ body => do
      let body ← if rawProjection then
        let_expr Decidable.decide _ d := body | throwError "expected a decision"
        pure (mkProj ``Decidable 0 d)
      else pure body
      let params ← Grind.mkDefaultParams {}
      Grind.GrindM.run (params := params) <| Grind.withGTransparency do
        let legacy ← Grind.normLegacy body
        let symbolic ← Grind.normSym body
        let a ← Sym.shareCommon legacy.expr
        let b ← Sym.shareCommon symbolic.expr
        unless Sym.isSameExpr a b do
          throwError "conditional normalizers disagree for {decl}:\n{a}\n{b}"
        if decl == ``GuardNormalForm.standalone && !a.isAppOf ``Bool.not then
          throwError "registered decide_not rule was not applied"
        for result in [legacy, symbolic] do
          if let some proof := result.proof? then
            check proof
            unless ← withDefault <| withConfig (fun c => { c with proj := .yesWithDelta }) <|
                isDefEq (← inferType proof) (← mkEq body result.expr) do
              throwError "normalizer proof has the wrong endpoints"

example (p : Prop) [Decidable p] (a b : Nat) :
    (if ¬p then a else b) = cond (!decide p) a b := by
  simp only [decide_not]

open Lean Meta in
run_meta do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d => do
    let input := mkProj ``Decidable 0 d
    let ctx ← Simp.mkContext
    let methods : Simp.Methods := { post := fun e => do
      if e.isAppOfArity ``Decidable.decide 2 then
        throwError "post callback received a synthetic named projection"
      if e == input then return .done { expr := e, cache := false }
      return .continue }
    let (r, _) ← Simp.mainCore input ctx (methods := methods)
    unless r.expr == input && !r.cache do
      throwError "decision theorem lookup lost the projection or its cache barrier"

example (p : Prop) [Decidable p] (a b : Nat) :
    (if ¬p then a else b) = cond (!decide p) a b := by
  simp (config := { index := false }) only [decide_not]

set_option maxHeartbeats 10000 in
example (p q : Bool) (a b : Nat) :
    cond (p && q) a b = a ∨ cond (p && q) a b = b := by
  simp_all -failIfUnchanged
  cases p <;> cases q <;> simp_all

namespace NestedGuardNormalForm

def filter (p : Bool) : Option Nat → Option Nat
  | some a => cond p (some a) none
  | none => none

@[simp] theorem filter_none (p : Bool) : filter p none = none := rfl
theorem filter_some (p : Bool) (a : Nat) : filter p (some a) = cond p (some a) none := rfl

set_option maxHeartbeats 10000 in
example (p q : Bool) (o : Option Nat) : filter q (filter p o) = filter (p && q) o := by
  cases o <;> repeat (simp_all [filter_some]; try split)

end NestedGuardNormalForm
