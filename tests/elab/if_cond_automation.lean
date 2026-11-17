module
public import Lean
public meta import Lean
public meta import Lean.Elab.Tactic.Omega.OmegaM
public meta import Lean.Meta.Tactic.Grind.NormSym
import Std.Tactic.BVDecide

/-!
Decision procedures on conditionals: `omega` (including Boolean connective guards and
`cond` certificates), `grind` (normalization, E-matching through decision projections) and
`bv_decide`.
-/

open Lean Elab Term in
elab "raw_decision% " d:term : term => do
  return Expr.proj ``Decidable 0 (← elabTerm d none)

/-! `omega` -/

namespace IfCondOmega

example (b : Bool) : cond b (0 : Int) 1 ≤ 1 := by omega
example (b : Bool) : cond b (0 : Nat) 1 ≤ 1 := by omega
example (p : Prop) [Decidable p] : (if p then (0 : Int) else 1) ≤ 1 := by omega
example (p : Prop) [Decidable p] : (if p then (0 : Nat) else 1) ≤ 1 := by omega
example (p : Prop) [Decidable p] : cond (decide p) (0 : Int) 1 ≤ 1 := by omega
example (p : Prop) [Decidable p] : cond (decide p) (0 : Nat) 1 ≤ 1 := by omega
example (x : Nat) : cond (Nat.beq x 0) (0 : Int) 1 ≤ 1 := by omega
example (x : Nat) : cond (Nat.beq x 0) (0 : Nat) 1 ≤ 1 := by omega
example (x : Nat) : (if x = 0 then (0 : Int) else 1) ≤ 1 := by omega
example (x : Nat) : (if x = 0 then (0 : Nat) else 1) ≤ 1 := by omega
example (x : Nat) : cond (Nat.beq x 0) 0 x = x := by omega
example (x : Nat) : (if x = 0 then 0 else x) = x := by omega
example (x y : Nat) : cond (decide (x ≤ y)) x y ≤ y := by omega
example (x y : Nat) : cond (Nat.ble x y) x y ≤ y := by omega
example (x y : Nat) : cond (Nat.blt x y) x y ≤ y := by omega

opaque opaqueLeDecision (x y : Nat) : Decidable (x ≤ y) := inferInstance

example (x y : Nat) :
    letI := opaqueLeDecision x y
    (if x ≤ y then x else y) ≤ y := by
  omega

example (x y : Nat) (d : Decidable (x ≤ y)) : cond d.decide x y ≤ y := by omega

example (x y : Nat) (h : x ≤ y) : min x y = x := by omega
example (x y : Nat) (h : x ≤ y) : max x y = y := by omega
example (x y : Int) (h : x ≤ y) : min x y = x := by omega
example (x y : Int) (h : x ≤ y) : max x y = y := by omega

example (n : Nat) (h : ¬(n == 0) = true) : n - 1 < n := by
  omega

example (n : Nat) (h : (n == 0) = false) : n - 1 < n := by
  omega

example (b : Bool) (a c n : Nat) (h : ite (b = true) a c ≤ n) : cond b a c ≤ n := by
  omega

example (b : Bool) (a c n : Int) (h : ite (b = true) a c ≤ n) : cond b a c ≤ n := by
  omega

opaque opaqueBoolDecision (b : Bool) : Decidable (b = true) := inferInstance

example (b : Bool) (a c n : Nat)
    (h : @ite Nat (b = true) (opaqueBoolDecision b) a c ≤ n) : cond b a c ≤ n := by
  omega

example (a b : Int) (h : (decide (a ≤ b) && decide (b ≤ a)) = true) : a = b := by omega

example (a b : Int) (h : (!(decide (a < b) || decide (b < a))) = true) : a = b := by omega

example (a : Int) : cond (decide (0 ≤ a) && !decide (1 ≤ a)) a 0 = 0 := by omega

example (a i : Int) :
    (¬i = 0 → (a + 1).tdiv i = a.tdiv i +
      cond ((decide (0 < a + 1) && decide (i ∣ a + 1)) ||
        (decide (a < 0) && decide (i ∣ a))) i.sign 0) ↔
    (¬i = 0 → -(a + 1).tdiv i = -a.tdiv i +
      cond ((decide (0 < a + 1) && decide (i ∣ a + 1)) ||
        (decide (a < 0) && decide (i ∣ a))) (-i.sign) 0) := by omega

example (a b : Int) (h : decide (a ≤ b) = decide (b ≤ a)) : a = b := by omega

example (a b : Int) (h : (!(decide (a ≤ b) == decide (b ≤ a))) = true) : a ≠ b := by omega

example (a b : Int) : (if a ≤ b ↔ b ≤ a then a - b else 0) = 0 := by
  omega

example (a b : Nat)
    (h : ((raw_decision% (inferInstance : Decidable (a ≤ b))) &&
      !(raw_decision% (inferInstance : Decidable (a < b)))) = true) : a = b := by omega

example (a b : Int) (h : (decide (a < b) || decide (b < a)) = false) : a = b := by omega

open Lean Meta Elab Tactic Omega in
run_meta do
  withLocalDeclD `p (mkSort .zero) fun p =>
    withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d => do
      let e := mkApp5 (mkConst ``ite [1]) (mkConst ``Int) p d (toExpr (0 : Int)) (toExpr (1 : Int))
      let facts ← (analyzeAtom e).run {}
      unless facts.length == 1 do throwError "expected a conditional split certificate"
      for fact in facts do
        let type ← inferType fact
        if (type.find? (·.isConstOf ``ite)).isSome then
          throwError "Omega produced an ite certificate"
        unless (type.find? (·.isConstOf ``cond)).isSome do
          throwError "Omega did not produce a cond certificate"

example (x y : Nat) : @ite Nat (x ≤ y) (opaqueLeDecision x y) x y ≤ y := by omega
example (x y : Int) : ite (x ≤ y) x y ≤ y := by omega
example (x y : Int) : (if x ≤ y then x else y) ≤ y := by omega

end IfCondOmega

/-! `grind` -/

namespace IfCondGrind

open Lean Meta Elab Tactic in
elab "guard_native_cond" : tactic => do
  let target ← getMainTarget
  if (target.find? (·.isConstOf ``ite)).isSome then
    throwError "Grind introduced an ite while normalizing a cond"
  let some c := target.find? (fun e => e.isAppOfArity ``cond 4) |
    throwError "Grind removed the symbolic conditional"
  let .proj ``Decidable 0 d := c.getAppArgs[1]! |
    throwError "Grind changed the projected decision guard"
  let p := (← inferType d).appArg!
  let original ← getLocalDeclFromUserName `p
  unless p == mkFVar original.fvarId do
    throwError "Grind changed the source predicate"

example (p : Prop) [Decidable p] (a b z : Nat) (h : (if p then a else b) = z) :
    (if p then a else b) = z := by
  grind_norm
  guard_native_cond
  exact h

example (p : Prop) [Decidable p] (a b z : Nat) (h : (if p then a else b) = z) :
    (if p then a else b) = z := by
  grind_norm sym
  guard_native_cond
  exact h

section
set_option grind.debug true

example (p : Prop) [Decidable p] (hp : p) (a b : Nat) : (if p then a else b) = a := by
  grind (branches := 0)
example (p : Prop) [Decidable p] (hp : ¬p) (a b : Nat) : (if p then a else b) = b := by
  grind (branches := 0)
example (c : Bool) (hc : c = true) (a b : Nat) : cond c a b = a := by grind
example (c : Bool) (hc : c = false) (a b : Nat) : cond c a b = b := by grind
example (p : Prop) [Decidable p] (a b z : Nat) (ha : a = z) (hb : b = z) :
    (if p then a else b) = z := by grind
example (p : Prop) [Decidable p] (hp : p) (f g : Nat → Nat) :
    (if p then f else g) 0 = f 0 := by grind
example (p q r : Prop) [Decidable p] (h : ¬(if p then q else r)) :
    if p then ¬q else ¬r := by grind
example (p : Prop) [Decidable p] (a b z : Nat) (h : (if _ : p then a else b) = z) :
    (if p then a else b) = z := by grind
example (p : Prop) [Decidable p] (hp : p) (a b : Nat) : ite p a b = a := by grind

opaque nativePredicate : Nat → Prop
example (n : Nat) [Decidable (nativePredicate n)] (h : nativePredicate n) :
    (if nativePredicate n then (1 : Nat) else 2) = 1 := by grind (branches := 0)


example (p : Prop) (d₁ d₂ : Decidable p) (a b : Nat) :
    cond (raw_decision% d₁) a b = cond (raw_decision% d₂) a b := by
  grind (branches := 0)
example (p q : Prop) (d₁ : Decidable p) (d₂ : Decidable q) (h : p = q) (a b : Nat) :
    cond (raw_decision% d₁) a b = cond (raw_decision% d₂) a b := by
  grind (branches := 0)
example (p q : Prop) [Decidable p] (h : p = q) (hq : q) (a b : Nat) :
    (if p then a else b) = a := by grind (branches := 0)
example (p q : Prop) [Decidable p] (h : q = p) (hq : q) (a b : Nat) :
    (if p then a else b) = a := by grind (branches := 0)
example (p : Prop) (d : Decidable p) (hp : p) (f : Bool → Nat) :
    f (raw_decision% d) = f true := by grind (branches := 0)
example (p : Prop) [Decidable p] (hp : p) (f g : Nat → Nat → Nat) :
    (if p then f else g) 0 1 = f 0 1 := by grind (branches := 0)
example (c : Bool) (f g h : Nat → Nat) (hh : cond c f g = h) (x : Nat) :
    cond c f g x = h x := by grind [funCC cond]

opaque branchValue : Nat → Nat
example (p : Prop) [Decidable p] (hp : p) (a b : Nat) :
    (if p then (fun n m => branchValue a + n + m) else (fun n m => branchValue b + n + m)) 0 0 =
      branchValue a := by grind (branches := 0)

example (p : Prop) [Decidable p] (h : p) (a b : Nat) : ite p a b = a := by grind
example (p : Prop) [Decidable p] (h : ¬p) (a b : Nat) : ite p a b = b := by grind

example (p : Prop) [Decidable p] (h : p) (a b : Nat) : (if p then a else b) = a := by grind
example (p : Prop) [Decidable p] (h : ¬p) (a b : Nat) : (if p then a else b) = b := by grind

open Lean.Grind in
example {K : Type} [Field K] (a b : K) (h : a ≠ b) : (a - b)⁻¹ * (a - b) = 1 := by grind

end

example (x y : Fin (2 ^ 4)) :
    (x - y).val = if y ≤ x then x.val - y.val else x.val + 2 ^ 4 - y.val := by grind
example (x y : Fin (2 ^ 16)) :
    (x - y).val = if y ≤ x then x.val - y.val else x.val + 2 ^ 16 - y.val := by grind

example (a b : Nat) (h : b ≤ a) : a - b + b = a := by
  grind

set_option maxHeartbeats 10000 in
example (a : Nat) :
    (((a + (2 ^ 64 - 1)) % 2 ^ 64 + 1) * 8 - 1 - (a + (2 ^ 64 - 1)) % 2 ^ 64 * 8 + 1) = 8 := by
  grind

end IfCondGrind

namespace IfCondGrindEMatch

open Lean Meta Grind

opaque condObserver : Nat → Nat
theorem condObserver_rule (p : Prop) [Decidable p] (a b : Nat) :
    condObserver (if p then a else b) = if p then condObserver a else condObserver b := by
  by_cases h : p <;> simp [h]

run_meta do
  let thm ← mkEMatchEqTheorem ``condObserver_rule
  unless thm.patterns.any (fun p => (p.find? (fun e => e matches .proj ``Decidable 0 _)).isSome) do
    throwError "decision pattern must retain its predicate and instance"
  if thm.patterns.any (fun p => (p.find? (·.isConstOf ``ite)).isSome) then
    throwError "native conditional pattern must not become ite"

theorem nestedSource_rule (p q : Prop) [Decidable p] [Decidable (if p then q else False)] (a b : Nat) :
    condObserver (if (if p then q else False) then a else b) =
      if (if p then q else False) then condObserver a else condObserver b :=
  condObserver_rule (if p then q else False) a b

run_meta do
  let thm ← mkEMatchEqTheorem ``nestedSource_rule
  if thm.patterns.any (fun p => (p.find? (·.isConstOf ``Decidable.decide)).isSome) then
    throwError "nested decision predicates must use primitive projections"

set_option grind.debug true
example (p : Prop) [Decidable p] (a b : Nat) :
    condObserver (if p then a else b) = if p then condObserver a else condObserver b := by
  grind (branches := 0) only [condObserver_rule]

example (p : Prop) (d₁ d₂ : Decidable p) (a b : Nat) :
    condObserver (cond (@Decidable.decide p d₂) a b) =
      cond (@Decidable.decide p d₂) (condObserver a) (condObserver b) := by
  have rule : condObserver (cond (@Decidable.decide p d₁) a b) =
      cond (@Decidable.decide p d₁) (condObserver a) (condObserver b) :=
    @condObserver_rule p d₁ a b
  grind (branches := 0) only

opaque lazyBranch : Nat → Nat

theorem applicationBranch_rule (p : Prop) [Decidable p] (a b : Nat) :
    condObserver (if p then lazyBranch a else b) =
      if p then condObserver (lazyBranch a) else condObserver b :=
  condObserver_rule p (lazyBranch a) b

example (p : Prop) [Decidable p] (a b : Nat) :
    condObserver (if p then lazyBranch a else b) =
      if p then condObserver (lazyBranch a) else condObserver b := by
  grind (branches := 0) only [applicationBranch_rule]

theorem offsetBranch_rule (p : Prop) [Decidable p] (a b : Nat) :
    condObserver (if p then a + 1 else b) =
      if p then condObserver (a + 1) else condObserver b :=
  condObserver_rule p (a + 1) b

example (p : Prop) [Decidable p] (a b : Nat) :
    condObserver (if p then a + 1 else b) =
      if p then condObserver (a + 1) else condObserver b := by
  grind (branches := 0) only [offsetBranch_rule]

example (p : Prop) [Decidable p] (a b : Nat) :
    (cond (@Decidable.decide p inferInstance) (fun n => condObserver a + n)
      (fun n => condObserver b + n)) 0 =
      cond (@Decidable.decide p inferInstance) (condObserver a) (condObserver b) := by
  grind (branches := 2)

opaque branchLeft : Nat → Nat
opaque branchRight : Nat → Nat

example (p : Prop) [Decidable p] (a b : Nat) (h : a = b)
    (rule : ∀ x, condObserver (if p then branchLeft x else branchRight x) = 0) :
    condObserver (if p then branchLeft (lazyBranch a) else branchRight (lazyBranch b)) = 0 := by
  grind (branches := 0) only

theorem nestedBranch_rule (p q : Prop) [Decidable p] [Decidable q] (a b c : Nat) :
    condObserver (if p then (if q then branchLeft a else branchRight b) else c) =
      if p then (if q then condObserver (branchLeft a) else condObserver (branchRight b))
      else condObserver c := by
  by_cases hp : p <;> by_cases hq : q <;> simp [hp, hq]

example (p q : Prop) [Decidable p] [Decidable q] (a b c : Nat) :
    condObserver (if p then (if q then branchLeft a else branchRight b) else c) =
      if p then (if q then condObserver (branchLeft a) else condObserver (branchRight b))
      else condObserver c := by
  grind (branches := 0) only [= nestedBranch_rule]

end IfCondGrindEMatch

-- Grind's normalizers agree on a Boolean normal form for negated guards.
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

/-! Grind simplifies unused quantified antecedents in a conditional reference-counting proof. -/

namespace NativeForallProof
abbrev LEAN_RC_STICKY : Int32 := Int32.minValue + 0x10000000

/-- {lit}`#define LEAN_RC_STICKY_DROP (INT_MIN + 0x20000000)` -/
abbrev LEAN_RC_STICKY_DROP : Int32 := Int32.minValue + 0x20000000

/-- {lit}`#define LEAN_RC_INC_MAX ((size_t)0x10000)` -/
abbrev LEAN_RC_INC_MAX : USize := 0x10000

/-- {lit}`#define LEAN_RC_STUCK_ST (INT_MIN + (int)LEAN_RC_INC_MAX)` -/
abbrev LEAN_RC_STUCK_ST : Int32 := Int32.minValue + LEAN_RC_INC_MAX.toUInt32.toInt32

abbrev isSt (rc : Int32) : Bool := rc > 0

abbrev isPersistent (rc : Int32) : Bool := rc == 0

abbrev isDropStopped (rc : Int32) : Bool := rc ≤ LEAN_RC_STICKY_DROP

abbrev decRefCold (rc : Int32) : Option Int32 := Id.run do
  let mut rc := rc
  if rc != 1 then
    if rc.toUInt32 ≤ LEAN_RC_STICKY_DROP.toUInt32 then return some rc
    let old := rc
    rc := rc + 1
    if old != -1 then return some rc
  return none

abbrev decRef (rc : Int32) : Option Int32 :=
  if rc > 1 then some (rc - 1)
  else if rc != 0 then decRefCold rc
  else some rc

abbrev isNeverFreed (rc : Int32) : Bool := isPersistent rc || isDropStopped rc

opaque incRefHugeMt (rc : Int32) (n : USize) : Int32
abbrev incRefHugeN (rc : Int32) (n : USize) : Int32 :=
  if isSt rc then
    if n > (Int32.maxValue - rc).toUInt32.toUSize then LEAN_RC_STUCK_ST
    else rc + n.toUInt32.toInt32
  else incRefHugeMt rc n

abbrev incRefN (rc : Int32) (n : USize) : Int32 := Id.run do
  if n > LEAN_RC_INC_MAX then return incRefHugeN rc n
  let mut rc := rc
  if isSt rc then
    rc := rc + n.toUInt32.toInt32
  else if rc.toUInt32 > LEAN_RC_STICKY.toUInt32 then
    rc := rc - n.toUInt32.toInt32
  return rc

axiom never_freed_is_absorbing (rc : Int32) (n : USize) (h : isNeverFreed rc) :
    isNeverFreed (incRefN rc n) && decRef rc == some rc
inductive Op where
  | inc (n : USize)
  | dec
  deriving DecidableEq
abbrev Op.apply : Op → Int32 → Option Int32
  | .inc n, rc => some (incRefN rc n)
  | .dec, rc => decRef rc
def run : Option Int32 → List Op → Option Int32
  | s, [] => s
  | s, op :: ops => run (s.bind op.apply) ops

theorem run_never_frees (rc : Int32) (ops : List Op) (h : isNeverFreed rc) :
    ∃ rc', run (some rc) ops = some rc' ∧ isNeverFreed rc' := by
  induction ops generalizing rc with
  | nil => exact ⟨rc, rfl, h⟩
  | cons op ops ih =>
    have habs := never_freed_is_absorbing rc
    cases op with
    | inc n => exact ih (incRefN rc n) (by grind)
    | dec =>
      show ∃ rc', run (decRef rc) ops = some rc' ∧ isNeverFreed rc'
      rw [show decRef rc = some rc by grind]
      exact ih rc h

end NativeForallProof

/-! `bv_decide` -/

example (x y : UInt32) : (if x < y then true else false) = x.toBitVec.ult y.toBitVec := by
  bv_decide

example (p : Prop) [Decidable p] (x y : BitVec 8) :
    (dite p (fun _ => x) (fun _ => y)) = (if p then x else y) := by
  bv_decide
