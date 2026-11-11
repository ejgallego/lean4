module
import Lean

/-! Check conditional compatibility beneath other heads without multiplying simp index paths. -/

namespace IfBoolNested

example (p : Prop) [Decidable p] (x y : Nat) :
    ((if p then x else y) = x) ↔ (¬p → y = x) := by
  rw [ite_eq_left_iff]

example (p : Prop) [Decidable p] (x y : Nat) :
    ((if p then x else y) = x) ↔ (¬p → y = x) := by
  simp only [ite_eq_left_iff]

example (p : Prop) [Decidable p] (x y : Nat) :
    ((if p then x else y) = x) ↔ (¬p → y = x) := by
  simp (config := { index := false }) only [ite_eq_left_iff]

opaque wrap : Nat → Nat

theorem wrapIte (p : Prop) [d : Decidable p] (x y : Nat) :
    wrap (ite p x y) = ite p (wrap x) (wrap y) := by
  cases d <;> rfl

example (p : Prop) [Decidable p] (x y : Nat) :
    wrap (if p then x else y) = (if p then wrap x else wrap y) := by
  simp only [wrapIte] <;> rfl

theorem mixed (p q : Prop) [dp : Decidable p] [dq : Decidable q] (x y u v : Nat) :
    (ite p x y = x ∧ cond (decide q) u v = u) ↔
      ((¬p → y = x) ∧ (¬q → v = u)) := by
  cases dp <;> cases dq <;> simp_all

example (p q : Prop) [Decidable p] [Decidable q] (x y u v : Nat) :
    (cond (decide p) x y = x ∧ ite q u v = u) ↔
      ((¬p → y = x) ∧ (¬q → v = u)) := by
  simp only [mixed]

example (p q : Prop) [Decidable p] [Decidable q] (x y u v : Nat) :
    (cond (decide p) x y = x ∧ ite q u v = u) ↔
      ((¬p → y = x) ∧ (¬q → v = u)) := by
  simp (config := { index := false }) only [mixed]

theorem wrapApply (p : Prop) [d : Decidable p] (f g : Nat → Nat) (x : Nat) :
    wrap (ite p f g x) = ite p (wrap (f x)) (wrap (g x)) := by
  cases d <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    wrap ((if p then f else g) x) = (if p then wrap (f x) else wrap (g x)) := by
  simp only [wrapApply] <;> rfl

open Lean Meta in
run_meta do
  let u ← mkFreshLevelMVar
  let α ← mkFreshExprMVar (mkSort u)
  let p ← mkFreshExprMVar (mkSort .zero)
  let d ← mkFreshExprMVar (mkApp (mkConst ``Decidable) p)
  let t ← mkFreshExprMVar α
  let e ← mkFreshExprMVar α
  withLocalDeclD `x (mkConst ``Nat) fun x => do
    let condition := mkApp2 (mkConst ``Nat.beq) x (mkNatLit 0)
    let lhs := mkApp5 (mkConst ``ite [u]) α p d t e
    let rhs := mkApp4 (mkConst ``cond [Level.one]) (mkConst ``Nat) condition
      (mkNatLit 1) (mkNatLit 2)
    let pattern := mkApp3 (mkConst ``Eq [u]) α lhs t
    let target ← mkEq rhs (mkNatLit 0)
    if ← isDefEqIf pattern target then throwError "matched inconsistent nested branches"
    for m in #[α, p, d, t, e] do
      if ← m.mvarId!.isAssigned then throwError "nested matching leaked an assignment"

end IfBoolNested

namespace IfBoolNested

example (p : Prop) [d : Decidable p] (x y : Nat) :
    (cond d.1 x y = x) ↔ (¬p → y = x) := by
  simp only [ite_eq_left_iff]

opaque hiddenDecision (p : Prop) [Decidable p] : Decidable p := inferInstance

example (p : Prop) [Decidable p] (x y : Nat) :
    (cond (hiddenDecision p).1 x y = x) ↔ (¬p → y = x) := by
  simp only [ite_eq_left_iff]

end IfBoolNested

namespace LazyRetrievalChecks
open Lean Meta Simp

private def onlyContext (decl : Name) : MetaM Simp.Context := do
  let mut s : SimpTheorems := {}
  for name in [``eq_self, ``iff_self, decl] do
    for thm in ← mkSimpTheoremFromConst name do s := s.addSimpTheorem thm
  Simp.mkContext (simpTheorems := #[s])

private partial def countEntries (t : DiscrTree.Trie α) : Nat :=
  match t with
  | .chain _ child => countEntries child
  | .node values children => values.size + children.foldl (fun n entry => n + countEntries entry.2) 0

run_meta do
  withLocalDeclD `b (Lean.mkConst ``Bool) fun b => do
    let nat := Lean.mkConst ``Nat
    let pred ← mkEq b (Lean.mkConst ``Bool.true)
    let decision ← synthInstance (mkApp (Lean.mkConst ``Decidable) pred)
    let queries := #[mkNatLit 7, mkApp2 (Lean.mkConst ``Nat.add) (mkNatLit 3) (mkNatLit 4),
      mkApp4 (Lean.mkConst ``cond [Level.one]) nat b (mkNatLit 1) (mkNatLit 2),
      mkApp5 (Lean.mkConst ``ite [Level.one]) nat pred decision (mkNatLit 1) (mkNatLit 2)]
    let mut tree : DiscrTree Nat := {}
    for i in [:queries.size] do tree ← tree.insert queries[i]! i
    for query in queries do
      let ordinary ← tree.getMatchWithExtra query
      let viewed ← DiscrTree.getMatchWithExtraUsing tree query DiscrTree.getMatchKeyArgs
      unless ordinary == viewed do throwError "default prefix retrieval changed"
      let ordinary ← tree.getMatchLiberal query
      let viewed ← DiscrTree.getMatchLiberalUsing tree query DiscrTree.getMatchKeyArgs
      unless ordinary == viewed do throwError "default liberal retrieval changed"
  withLocalDeclD `b (Lean.mkConst ``Bool) fun b => do
    let nat := Lean.mkConst ``Nat
    let pred ← mkEq b (Lean.mkConst ``Bool.true)
    let decision ← synthInstance (mkApp (Lean.mkConst ``Decidable) pred)
    let partialIte := mkApp3 (Lean.mkConst ``ite [Level.one]) nat pred decision
    let full := mkApp2 partialIte (mkNatLit 1) (mkNatLit 2)
    let tree ← ({} : DiscrTree Nat).insert partialIte 11
    let found ← DiscrTree.getMatchWithExtraUsing tree full getConditionalSimpKeyArgs
    unless found.contains (11, 2) do throwError "key view lost a partial-application rule"
  let entries ← mkSimpTheoremFromConst ``IfBoolNested.mixed
  let s := entries.foldl SimpTheorems.addSimpTheorem ({} : SimpTheorems)
  let count := s.post.root.foldl (fun n _ child => n + countEntries child) 0
  unless count <= 2 * entries.size do throwError "conditional indexing multiplied paths"

def lowForm (p : Prop) (x y : Nat) : Prop := ¬p → y = x
def highForm (p : Prop) (x y : Nat) : Prop := ¬p → y = x

theorem lowRule (p : Prop) [d : Decidable p] (x y : Nat) :
    (ite p x y = x) ↔ lowForm p x y := by exact ite_eq_left_iff

theorem highRule (p : Prop) [d : Decidable p] (x y : Nat) :
    (cond (decide p) x y = x) ↔ highForm p x y := by exact ite_eq_left_iff

def input (p : Prop) [Decidable p] (x y : Nat) : Prop := cond (decide p) x y = x

run_meta do
  lambdaTelescope (← getConstInfo ``input).value! fun _ body => do
    let mut s : SimpTheorems := {}
    for thm in ← mkSimpTheoremFromConst ``lowRule (prio := 100) do s := SimpTheorems.addSimpTheorem s thm
    for thm in ← mkSimpTheoremFromConst ``highRule (prio := 200) do s := SimpTheorems.addSimpTheorem s thm
    let ctx ← Simp.mkContext (simpTheorems := #[s])
    let (r, _) ← Simp.main body ctx (methods := Simp.mkDefaultMethodsCore #[])
    unless r.expr.isAppOf ``highForm do throwError "canonical retrieval lost priority: {r.expr}"
    let erased := s.eraseCore (.decl ``highRule)
    let ctx ← Simp.mkContext (simpTheorems := #[erased])
    let (r, _) ← Simp.main body ctx (methods := Simp.mkDefaultMethodsCore #[])
    unless r.expr.isAppOf ``lowForm do throwError "erasure did not exclude canonical alias: {r.expr}"

opaque wrap : Nat → Nat

theorem toIte (b : Bool) (x y : Nat) : wrap (cond b x y) = wrap (ite b x y) := rfl
theorem toCond (b : Bool) (x y : Nat) : wrap (ite b x y) = wrap (cond b x y) := rfl

def iteInput (p : Prop) [Decidable p] (x y : Nat) : Prop := wrap (ite p x y) = x
def condInput (b : Bool) (x y : Nat) : Prop := wrap (cond b x y) = x

run_meta do
  for (input, bridge) in [(``iteInput, ``toIte), (``condInput, ``toCond)] do
    lambdaTelescope (← getConstInfo input).value! fun _ body => do
      let ctx ← onlyContext bridge
      let (r, _) ← Simp.main body ctx (methods := Simp.mkDefaultMethodsCore #[])
      unless r.expr == body do throwError "representation bridge rewrote its normal form: {r.expr}"
  lambdaTelescope (← getConstInfo ``condInput).value! fun _ body => do
    let ctx ← onlyContext ``toIte
    let (r, _) ← Simp.main body ctx (methods := Simp.mkDefaultMethodsCore #[])
    unless r.expr != body do throwError "forward representation bridge stopped rewriting"
    check (← r.getProof)

end LazyRetrievalChecks
