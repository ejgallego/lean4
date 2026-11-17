module
import Lean
import Std.WP
public import Lean.Elab.Term.TermElabM
public meta import Lean
public meta import Lean.Meta.Match.Rewrite

/-!
Case analysis on conditionals: `split`, `fun_cases`, `fun_induction` and `vcgen` introduce the
guard's proposition `c` / `¬c`, and `b = true` / `¬b = true` for a raw Boolean guard `b`.
-/

/-! `split` -/

namespace IfCondSplit

-- Boolean guards whose inferred type is only definitionally `Bool`.
example (b : Bool) : (if (pure b : Id Bool) then 1 else 2) > 0 := by
  split <;> decide

set_option backward.split false in
example (b : Bool) : (if (pure b : Id Bool) then 1 else 2) > 0 := by
  split <;> decide

example (b : Bool) (h : (if (pure b : Id Bool) then 1 else 2) = 0) : False := by
  split at h <;> contradiction

set_option backward.split false in
example (b : Bool) (h : (if (pure b : Id Bool) then 1 else 2) = 0) : False := by
  split at h <;> contradiction

example (b : Bool) (h : (if (pure b : Id Bool) then 1 else 2) = 0) : False := by
  simp only [pure] at h
  cases b <;> contradiction

set_option backward.split true in
example (a b : UInt64) :
    ite (a == b) (if a == b then (1 : Nat) else 2) 3 = ite (a == b) 1 3 := by
  split <;> rfl

set_option backward.split true in
example (a b : UInt64) :
    ite (a == b) (1 : Nat) (if a == b then 2 else 3) = ite (a == b) 1 3 := by
  split <;> rfl

set_option backward.split false in
example (a b : UInt64) :
    ite (a == b) (if a == b then (1 : Nat) else 2) 3 = ite (a == b) 1 3 := by
  split <;> rfl

set_option backward.split false in
example (b : Bool) (x y : Nat) :
    ite (!b = true) x y = x ∨ ite (!b = true) x y = y := by
  split <;> simp

set_option backward.split true in
example (n m : Nat) : cond (n == m) True True := by
  split
  next h => exact (fun (_ : (n == m) = true) => True.intro) h
  next h => exact (fun (_ : ¬(n == m) = true) => True.intro) h

set_option backward.split false in
example (n m : Nat) : cond (n == m) True True := by
  split
  next h => exact (fun (_ : (n == m) = true) => True.intro) h
  next h => exact (fun (_ : ¬(n == m) = true) => True.intro) h

example (b : Bool) (x y : Nat) : ite b x y = cond b x y := by
  split <;> rfl

example (b : Bool) (x y : Nat) : cond b x y = ite b x y := by
  split <;> rfl

open Lean Elab Term in
elab "decision_projection% " d:term : term => do
  return Expr.proj ``Decidable 0 (← elabTerm d none)

opaque wrapperDecision (p : Prop) [Decidable p] : Decidable p := inferInstance

example (p : Prop) [d : Decidable p] (h : p) :
    ite ((decision_projection% d) = true) 1 2 = 1 := by
  simp only [h, ↓reduceIte]

set_option backward.split true in
example (p : Prop) [Decidable p] :
    ite ((decision_projection% wrapperDecision p) = true) True True := by
  split
  next h => exact (fun (_ : p) => True.intro) h
  next h => exact (fun (_ : ¬p) => True.intro) h

set_option backward.split false in
example (p : Prop) [Decidable p] :
    ite ((decision_projection% wrapperDecision p) = true) True True := by
  split
  next h => exact (fun (_ : p) => True.intro) h
  next h => exact (fun (_ : ¬p) => True.intro) h

-- The guard is a decision of `decide p = true`, so `split` introduces that proposition.
example (p : Prop) [d : Decidable p] :
    ite ((decision_projection% (inferInstance : Decidable ((decision_projection% d) = true))) = true)
      True True := by
  split
  next h => exact (fun (_ : @decide p d = true) => True.intro) h
  next h => exact (fun (_ : ¬@decide p d = true) => True.intro) h

example : ite ((decision_projection% instDecidableEqBool false true) = true) 1 2 = 2 := by
  simp only [Bool.false_eq_true, ↓reduceIte]

example (p : Prop) [d : Decidable p] (h : p) :
    (if _proof : (decision_projection% d) = true then (1 : Nat) else 2) = 1 := by
  simp only [h, ↓reduceDIte]

opaque consumeDecisionProof (p : Prop) [d : Decidable p] : @decide p d = true → Nat := fun _ => 0

example (p : Prop) [d : Decidable p] (hp : p) :
    (if proof : (decision_projection% d) = true then consumeDecisionProof p proof else 0) =
      consumeDecisionProof p (@decide_eq_true p d hp) := by
  simp only [hp, ↓reduceDIte]

example (k : Nat) :
    ite ((decision_projection% instDecidableEqNat k 0) = true) 1 2 = 1 → k = 0 := by
  split
  · rename_i h
    exact fun _ => h
  · simp

end IfCondSplit

/-! `fun_cases` and `fun_induction` -/

namespace IfCondFunInduction

def descend (n : Nat) : Nat :=
  if n = 0 then 0 else
    let r := descend (n - 1)
    r + 1
termination_by n
decreasing_by omega

example (n : Nat) : descend n = n := by
  fun_induction descend with
  | case1 => rfl
  | case2 n hn r ih =>
    subst r
    omega

def choose (n : Nat) : Nat := if n = 0 then 10 else 20

example (n : Nat) : n = 0 ∨ n ≠ 0 := by
  apply choose.fun_cases n (n = 0 ∨ n ≠ 0)
  · intro h
    exact Or.inl h
  · intro h
    exact Or.inr h

def choosePred (p : Prop) [Decidable p] : Nat := if p then 1 else 2

example (p : Prop) [Decidable p] : p ∨ ¬p := by
  apply choosePred.fun_cases p (p ∨ ¬p)
  · exact Or.inl
  · exact Or.inr

open Lean Meta in
run_meta do
  withLocalDeclD `b (mkConst ``Bool) fun b => do
  withLocalDeclD `h (mkNot (← mkEq b (mkConst ``Bool.true))) fun h => do
    let value := mkApp4 (mkConst ``cond [.succ .zero]) (mkConst ``Nat) b (mkNatLit 1) (mkNatLit 2)
    let result ← rwIfWith h value
    unless result.expr == mkNatLit 2 do
      throwError "negative Boolean branch was not reduced"
    Meta.check (← result.getProof)

end IfCondFunInduction

/-! VC generation split views -/

namespace IfCondVCGenSplit

open Lean Meta Elab.Tactic.Do

def natural (n : Nat) : Nat := if n = 0 then 10 else 20
def compound (p q : Prop) [Decidable (p ∧ q)] : Nat := if p ∧ q then 10 else 20
def boolean (b : Bool) : Nat := if b then 10 else 20

run_meta do
  for decl in [``natural, ``compound, ``boolean] do
    lambdaTelescope (← getConstInfo decl).value! fun _ body => do
      let some info ← getSplitInfo? body | throwError "missing split info"
      let condition := body.getAppArgs[1]!
      let expected ← if decl == ``boolean then mkEq condition (mkConst ``Bool.true) else do
        let some (p, _) ← Simp.getBoolDecision? condition | throwError "missing decision view"
        unless info matches .cond _ do throwError "decision split lost its conditional"
        pure p
      unless ← isDefEq info.expr body do throwError "split view changed the program"
      let proof ← info.splitWith (mkConst ``True) (useSplitter := true) fun _ _ idx alt => do
        unless alt.fields.size == 1 do throwError "missing branch hypothesis"
        let expected := if idx == 0 then expected else mkNot expected
        unless ← isDefEq (← inferType alt.fields[0]!) expected do
          throwError "branch hypothesis lost its original proposition"
        let rewritten ← rwIfOrMatcher idx body
        unless rewritten.expr == body.getAppArgs[if idx == 0 then 2 else 3]! do
          throwError "branch program was not reduced"
        Meta.check (← rewritten.getProof)
        pure (mkConst ``True.intro)
      Meta.check proof

run_meta do
  withLocalDeclD `p (mkSort 0) fun p => do
  withLocalDeclD `decision (mkApp (mkConst ``Decidable) p) fun decision => do
    let nat := mkConst ``Nat
    for guard in #[mkProj ``Decidable 0 decision,
        mkApp2 (mkConst ``Decidable.decide) p decision] do
      let value := mkApp4 (mkConst ``cond [.succ .zero]) nat
        guard (mkNatLit 1) (mkNatLit 2)
      let some info ← getSplitInfo? value | throwError "missing conditional view"
      unless info.expr == value do
        throwError "conditional view changed the source expression"
      info.withAbstract nat fun abstractInfo xs => do
        unless abstractInfo.expr.isAppOfArity ``cond 4 do
          throwError "abstract ordinary conditional is not cond"
        unless xs.size == 4 do
          throwError "source proposition and decision were not abstracted"
        let guard := abstractInfo.expr.getArg! 1
        unless guard == mkProj ``Decidable 0 xs[1]! do
          throwError "abstract guard reduced or replaced its decision"
        unless (← inferType xs[1]!) == mkApp (mkConst ``Decidable) xs[0]! do
          throwError "abstract decision lost its source proposition"
      let onAlt := fun (_ : Name) (_ : Expr) (idx : Nat) (alt : MatcherApp.TransformAltFVars) => do
        unless alt.fields.size == 1 do
          throwError "missing branch hypothesis"
        let expected := if idx == 0 then p else mkNot p
        unless (← inferType alt.fields[0]!) == expected do
          throwError "branch hypothesis lost the source proposition"
        return mkNatLit (idx + 1)
      let split ← info.splitWith nat onAlt (useSplitter := true)
      Meta.check split
      let plain ← info.splitWith nat (fun _ _ idx _ => pure (mkNatLit (idx + 1)))
      unless plain.isAppOfArity ``cond 4 do
        throwError "nondependent reconstruction introduced ite"
      unless plain.getArg! 1 == guard do
        throwError "reconstruction changed the guard"

run_meta do
  withLocalDeclD `b (mkConst ``Bool) fun b => do
    let nat := mkConst ``Nat
    let value := mkApp4 (mkConst ``cond [.succ .zero]) nat b (mkNatLit 1) (mkNatLit 2)
    let some info ← getSplitInfo? value | throwError "missing raw Boolean view"
    unless info.expr == value do
      throwError "raw Boolean conditional view changed"
    info.withAbstract nat fun abstractInfo xs => do
      unless xs.size == 3 && abstractInfo.expr.getArg! 1 == xs[0]! do
        throwError "raw Boolean guard was reflected into a proposition"
    let isTrue ← mkEq b (mkConst ``Bool.true)
    let split ← info.splitWith nat (useSplitter := true) fun _ _ idx alt => do
      let expected := if idx == 0 then isTrue else mkNot isTrue
      unless alt.fields.size == 1 && (← inferType alt.fields[0]!) == expected do
        throwError "raw Boolean branch hypothesis changed"
      pure (mkNatLit (idx + 1))
    Meta.check split

end IfCondVCGenSplit

/-! `vcgen` -/

section
set_option sym.debug true
set_option experimental.vcgen true
set_option experimental.intrinsic true
open Std.WP Lean.Order

example (n : Nat) :
    ⦃fun _ => True⦄ (if n > 0 then pure 1 else pure 2 : StateM Nat Nat)
    ⦃fun r _ => r = 1 ∨ r = 2⦄ := by
  vcgen

-- A loop contract exposes a guard to symbolic simplification.
def countDown (n : Nat) : Id Nat
    ensures r => r = 0 := do
  let mut i := n
  while i > 0
      invariant exit => if exit then i = 0 else True
      decreasing i
    do
    i := i - 1
  return i

open Lean Meta Sym in
run_meta SymM.run do
  withLocalDeclD `p (mkSort .zero) fun p => do
    withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d => do
      let nat := mkConst ``Nat
      let raw := mkProj ``Decidable 0 d
      let body := mkApp4 (mkConst ``cond [Level.one]) nat raw (mkNatLit 1) (mkNatLit 2)
      let e := mkApp (mkLambda `x .default nat body) (mkNatLit 0)
      let e ← withoutFoldProjsCheck <| shareCommon e
      let some result ← Lean.Elab.Tactic.VCGen.reduceHead? e |
        throwError "beta reduction made no progress"
      unless result.isAppOfArity ``cond 4 && result.getArg! 1 == raw do
        throwError "head reduction lost its decision guard"
      unless ← isDefEq result body do
        throwError "head reduction changed the result"
      result.checkMaxShared

example (p : Prop) [Decidable p] (b : Bool) :
    ⦃fun _ => True⦄
      (do
        let x ← ite p (pure 1) (pure 2)
        let y ← if p then pure 3 else pure 4
        let z ← bif b then pure 5 else pure 6
        pure (x + y + z) : StateM Nat Nat)
    ⦃fun r _ => 0 < r⦄ := by
  vcgen

-- Reversing the guards exercises the raw and reflected cache entries in both orders.
example (p : Prop) [Decidable p] (b : Bool) :
    ⦃fun _ => True⦄
      (do
        let x ← bif b then pure 1 else pure 2
        let y ← if p then pure 3 else pure 4
        let z ← ite p (pure 5) (pure 6)
        pure (x + y + z) : StateM Nat Nat)
    ⦃fun r _ => 0 < r⦄ := by
  vcgen

example (p : Prop) [Decidable p] :
    ⦃fun _ => True⦄ (if p then pure 1 else pure 2 : StateM Nat Nat)
    ⦃fun r _ => r = 1 ↔ p⦄ := by
  vcgen -simp
  · rename_i hp
    have h : p := hp
    simp [h]
  · rename_i hp
    have h : ¬p := hp
    simp [h]

example : ⦃fun _ => True⦄ (modifyGet fun s => ((), s + 1) : StateM Nat Unit)
    ⦃fun _ s => 0 < s⦄ := by
  vcgen
  omega

open Lean Meta Sym in
run_meta SymM.run do
  let pattern ← mkPatternFromDecl ``MonadState.modifyGet.eq_def
  discard pattern.shareCommon

end
