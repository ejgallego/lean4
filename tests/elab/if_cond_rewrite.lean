module
import Lean
public import Lean.Elab.Term.TermElabM

/-!
Applying theorems stated with `if`/`ite` to conditionals with `rw`, `simp only` and `apply`:
proposition guards, guards written with `decide`, raw Boolean guards, opaque and aliased
decisions, compound propositions, partial applications and structure projections. An explicit
`@ite` is a different term for `rw`.
-/

namespace IfCondRewrite

example (p : Prop) [Decidable p] (hp : p) : ite p 1 2 = 1 := by
  exact ite_eq_left hp

example (p : Prop) [Decidable p] (hp : ¬p) : ite p 1 2 = 2 := by
  exact ite_eq_right hp

example (p : Prop) [Decidable p] (hp : p) : (if p then 1 else 2) = 1 := by
  rw [ite_eq_left hp]

example (p : Prop) [Decidable p] (hp : ¬p) : (if p then 1 else 2) = 2 := by
  simp only [ite_eq_right hp]

example (x : Nat) (hx : x = 0) : (if x = 0 then 1 else 2) = 1 := by
  rw [ite_eq_left hx]

example (x : Nat) (hx : x = 0) : (if x = 0 then 1 else 2) = 1 := by
  simp only [ite_eq_left hx]

example (b : Bool) (t : Nat) : (if b then t else t) = t := by
  rw [ite_self]

example (b : Bool) (t : Nat) : (if b then t else t) = t := by
  simp only [ite_self]

example (b : Bool) (f : Nat → Nat) (x : Nat) : (if b then f else f) x = f x := by
  simp only [ite_self]

opaque opaqueDecision (p : Prop) [Decidable p] : Decidable p := inferInstance

example (p : Prop) [Decidable p] (hp : p) :
    cond (@decide p (opaqueDecision p)) 1 2 = 1 := by
  rw [ite_eq_left hp]

example (p : Prop) [Decidable p] (hp : p) :
    cond (@decide p (opaqueDecision p)) 1 2 = 1 := by
  simp only [ite_eq_left hp]

example (p q : Prop) [Decidable p] [Decidable q] (hp : p) :
    (if q then 1 else 2) = 1 ∨ (if q then 1 else 2) = 2 := by
  fail_if_success rw [ite_eq_left hp]
  fail_if_success simp only [ite_eq_left hp]
  by_cases hq : q <;> simp [hq]

example (p : Prop) [Decidable p] (hp : ¬p) :
    cond (@decide p (opaqueDecision p)) 1 2 = 2 := by
  fail_if_success rw [ite_eq_left (p := True) trivial]
  rw [ite_eq_right hp]

-- `rw` does not relate an explicit `@ite` to the `cond` form.
example (p : Prop) [Decidable p] (hp : p) : @ite Nat p _ 1 2 = 1 := by
  fail_if_success rw [show (if p then 1 else 2 : Nat) = 1 from ite_eq_left hp]
  simp only [hp, ite_true]

@[irreducible] def aliasValue (b : Bool) : Nat := cond b 7 9

@[simp] theorem aliasRule (b : Bool) : ite b 7 9 = aliasValue b := by
  unfold aliasValue
  cases b <;> rfl

example (b : Bool) : (if b then 7 else 9) = aliasValue b := by
  simp only [aliasRule]

example (b : Bool) : (if b then 7 else 9) = aliasValue b := by
  fail_if_success simp [-aliasRule]
  exact aliasRule b

structure AliasRecord where
  flag : Bool

@[simp] theorem fieldAliasRule (s : AliasRecord) :
    ite s.flag 7 9 = aliasValue s.flag := aliasRule s.flag

example (s : AliasRecord) : (if s.flag then 7 else 9) = aliasValue s.flag := by
  simp only [fieldAliasRule]

theorem ordinarySelf (p : Prop) [d : Decidable p] (t : α) :
    (if p then t else t) = t := by
  cases d <;> rfl

example (b : Bool) (t : Nat) : ite b t t = t := by
  rw [ordinarySelf]

example (b : Bool) (t : Nat) : ite b t t = t := by
  simp only [ordinarySelf]

theorem ordinaryPos (p : Prop) [Decidable p] (hp : p) :
    (if p then 1 else 2) = 1 := ite_eq_left hp

example (p : Prop) [Decidable p] (hp : p) : ite p 1 2 = 1 := by
  rw [ordinaryPos p hp]

example (p : Prop) [Decidable p] (hp : p) :
    ite p 1 2 = 1 ∨ ite p 1 2 = 2 := by
  fail_if_success rw [ordinarySelf]
  simp only [ite_eq_left hp, true_or]

example (b : Bool) : cond b 1 2 = 1 ∨ cond b 1 2 = 2 := by
  fail_if_success simp only [Bool.cond_true, Bool.cond_false]
  cases b <;> simp

theorem iteApply {α : Sort u} {β : Sort v} (p : Prop) [d : Decidable p]
    (f g : α → β) (x : α) :
    ite p f g x = ite p (f x) (g x) := by
  cases d <;> rfl

theorem ordinaryApply {α : Sort u} {β : Sort v} (p : Prop) [d : Decidable p]
    (f g : α → β) (x : α) :
    (if p then f else g) x = (if p then f x else g x) := by
  cases d <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    (if p then f else g) x = (if p then f x else g x) := by
  rw [iteApply] <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    (if p then f else g) x = (if p then f x else g x) := by
  simp only [iteApply] <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    (if p then f else g) x = (if p then f x else g x) := by
  simp (config := { index := false }) only [iteApply] <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    ite p f g x = ite p (f x) (g x) := by
  rw [ordinaryApply] <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat) (x : Nat) :
    ite p f g x = ite p (f x) (g x) := by
  simp only [ordinaryApply] <;> rfl

example (p : Prop) [Decidable p] (f g : Nat → Nat → Nat) (x y : Nat) :
    (if p then f else g) x y = (if p then f x else g x) y := by
  rw [iteApply] <;> rfl

/-! `apply_ite` with generic heads, partial applications and structure projections. -/

example (f : Nat → Nat) (p : Prop) [Decidable p] (x y : Nat) :
    f (if p then x else y) = (if p then f x else f y) := by
  rw [apply_ite f]

example (f : Nat → Nat) (p : Prop) [Decidable p] (x y : Nat) :
    f (if p then x else y) = (if p then f x else f y) := by
  simp only [apply_ite f]

example (f : Nat → Nat → Nat) (p : Nat → Prop) [DecidablePred p] (x y : Nat) :
    (fun z => f z (if p z then x else y)) = (fun z => if p z then f z x else f z y) := by
  funext z
  rw [apply_ite (f z)]

example (f : Nat → Nat → Prop) (p : Prop) [Decidable p] (z x y : Nat) :
    f z (if p then x else y) ↔ (if p then f z x else f z y) := by
  rw [apply_ite (f z)]

example (p : Prop) [Decidable p] (a b : Nat × Nat) :
    (if p then a else b).1 = (if p then a.1 else b.1) := by
  simp only [apply_ite Prod.fst]

example (p : Prop) [Decidable p] (n : Nat) (a b : Fin n) :
    (if p then a else b).val = (if p then a.val else b.val) := by
  simp only [apply_ite Fin.val]

example (p : Prop) [Decidable p] (a b : (n : Nat) × Fin (n + 1)) :
    (if p then a else b).1 = (if p then a.1 else b.1) := by
  simp only [apply_ite Sigma.fst]

example (p : Prop) [Decidable p] (a b : Nat × Nat) :
    (if p then a else b).1 = (if p then a.1 else b.1) := by
  simp (config := { index := false }) only [apply_ite Prod.fst]

example (p : Prop) [Decidable p] (a b : Nat × Nat) :
    (if p then a else b).1 = (if p then a.1 else b.1) := by
  simp (config := Lean.Meta.Simp.neutralConfig) only [apply_ite Prod.fst]

example (b : Bool) (a c : (n : Nat) × Fin (n + 1)) :
    (if b then a else c).1 = (if b then a.1 else c.1) := by
  simp only [apply_ite Sigma.fst]

/-! Compound propositions and decision families under binders. -/

example (x : Nat) : (if x = x then 1 else 2) = 1 := by
  rw [ite_eq_left rfl]

example (p q : Prop) [Decidable p] [Decidable q] (h : p) :
    (if p ∨ q then 1 else 2) = 1 := by
  rw [ite_eq_left (Or.inl h)]

example (p q r : Prop) [Decidable p] [Decidable q] [Decidable r] (h : r) :
    (if p ∨ q ∨ r then 1 else 2) = 1 := by
  rw [ite_eq_left (Or.inr (Or.inr h))]

opaque fold : (Nat → Nat → Nat) → Nat
axiom foldRule (P : Nat → Prop) [DecidablePred P] (f : Nat → Nat → Nat) :
  fold (fun x y => if P y then f x y else x) = 0

example (P : Nat → Prop) [DecidablePred P] (f : Nat → Nat → Nat) :
    fold (fun x y => ite (¬P y) (f x y) x) = 0 := by
  rw [foldRule]

example (P : Nat → Prop) [d : DecidablePred P] (f : Nat → Nat → Nat) :
    fold (fun x y => cond (decide (P y)) (f x y) x) = 0 := by
  rw [foldRule]

/-! Raw Boolean guards instantiate theorem guards as `b = true`. -/

example (p q : Prop) [Decidable p] [Decidable q] (hp : p) (hq : q) :
    cond (decide p && decide q) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target =ₛ (decide p && decide q) = true
  simp [hp, hq]

example (p q : Prop) [Decidable p] [Decidable q] (hp : p) :
    cond (decide p || decide q) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target =ₛ (decide p || decide q) = true
  simp [hp]

example (p : Prop) [Decidable p] (hp : ¬p) : cond (!decide p) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target =ₛ (!decide p) = true
  simp [hp]

example (x y : Nat) (hxy : x = y) (hle : x ≤ y) :
    cond (Nat.beq x y && Nat.ble x y) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target = (Nat.beq x y && Nat.ble x y) = true
  simp only [Bool.and_eq_true, Nat.beq_eq, Nat.ble_eq]
  exact ⟨hxy, hle⟩

example (x y : Nat) (hlt : x < y) : cond (Nat.ble x.succ y) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target = Nat.ble x.succ y = true
  simpa only [Nat.ble_eq, Nat.succ_le_iff] using hlt

example (x y : Nat) (hlt : x < y) : cond (Nat.blt x y) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target = Nat.blt x y = true
  simpa only [Nat.blt_eq] using hlt

example (p q : Prop) [Decidable p] [Decidable q] (hp : p) (hq : q) :
    cond ((@decide p (opaqueDecision p)) && decide q) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target =ₛ ((@decide p (opaqueDecision p)) && decide q) = true
  simp [hp, hq]

example (p : Prop) [d : Decidable p] (hp : p) : cond (d.1) 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target =ₛ p
  exact hp

example (b : Bool) (hb : b = true) : cond b 1 2 = 1 := by
  rw [ite_eq_left]
  guard_target =ₛ b = true
  exact hb

/-! Theorems whose decision type is a reducible alias. -/

abbrev AliasDecision (p : Prop) := Decidable p

theorem aliasSelf (p : Prop) [d : AliasDecision p] (x : Nat) :
    (if p then x else x) = x := by
  exact Bool.cond_self _ _

example (b : Bool) (x : Nat) : (if b then x else x) = x := by
  rw [aliasSelf]

example (b : Bool) (x : Nat) : (if b then x else x) = x := by
  simp only [aliasSelf]

example (b : Bool) (x : Nat) : (if b then x else x) = x := by
  change @ite Nat _ (_ : AliasDecision _) x x = x
  exact Bool.cond_self _ _

/-! Theorems applied beneath other heads. -/

example (p : Prop) [Decidable p] (x y : Nat) :
    ((if p then x else y) = x) ↔ (¬p → y = x) := by
  rw [ite_eq_left_iff]

example (p : Prop) [Decidable p] (x y : Nat) :
    ((if p then x else y) = x) ↔ (¬p → y = x) := by
  simp only [ite_eq_left_iff]

example (p : Prop) [Decidable p] (x y : Nat) :
    ((if p then x else y) = x) ↔ (¬p → y = x) := by
  simp (config := { index := false }) only [ite_eq_left_iff]

example (p : Prop) [d : Decidable p] (x y : Nat) :
    (cond d.1 x y = x) ↔ (¬p → y = x) := by
  simp only [ite_eq_left_iff]

example (p : Prop) [Decidable p] (x y : Nat) :
    (cond (opaqueDecision p).1 x y = x) ↔ (¬p → y = x) := by
  simp only [ite_eq_left_iff]

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

/-! Substantive guard rewrites through a lemma whose left-hand side is stated with `ite`. -/

@[irreducible] def mask (b : Bool) : Bool := b

theorem maskRule (b : Bool) (x y : Nat) :
    ite (mask b) x y = cond b x y := by
  unfold mask
  cases b <;> rfl

def reducibleMask (b : Bool) : Bool := b

theorem reducibleMaskRule (b : Bool) (x y : Nat) :
    ite (reducibleMask b) x y = cond b x y := by
  unfold reducibleMask
  cases b <;> rfl

example (b : Bool) (x y : Nat) (h : (if mask b then x else y) = x) :
    cond b x y = x := by
  simp -failIfUnchanged only [maskRule] at h
  guard_hyp h :ₛ cond b x y = x
  exact h

example (b : Bool) (x y : Nat) (h : wrap (if mask b then x else y) = wrap x) :
    wrap (cond b x y) = wrap x := by
  simp -failIfUnchanged only [maskRule] at h
  guard_hyp h :ₛ wrap (cond b x y) = wrap x
  exact h

example (b : Bool) (x y : Nat) (h : (if reducibleMask b then x else y) = x) :
    cond b x y = x := by
  simp -failIfUnchanged only [reducibleMaskRule] at h
  guard_hyp h :ₛ cond b x y = x
  exact h

example (b : Bool) (x y : Nat) (h : wrap (if reducibleMask b then x else y) = wrap x) :
    wrap (cond b x y) = wrap x := by
  simp -failIfUnchanged only [reducibleMaskRule] at h
  guard_hyp h :ₛ wrap (cond b x y) = wrap x
  exact h

/-! Simp rules with the same conditional left-hand side respect priority and erasure. -/

def lowForm (p : Prop) (x y : Nat) : Prop := ¬p → y = x
def highForm (p : Prop) (x y : Nat) : Prop := ¬p → y = x

theorem lowRule (p : Prop) [d : Decidable p] (x y : Nat) :
    (ite p x y = x) ↔ lowForm p x y := by exact ite_eq_left_iff

theorem highRule (p : Prop) [d : Decidable p] (x y : Nat) :
    (cond (decide p) x y = x) ↔ highForm p x y := by exact ite_eq_left_iff

def input (p : Prop) [Decidable p] (x y : Nat) : Prop := cond (decide p) x y = x

open Lean Meta in
run_meta do
  lambdaTelescope (← getConstInfo ``input).value! fun _ body => do
    let mut s : SimpTheorems := {}
    for thm in ← mkSimpTheoremFromConst ``lowRule (prio := 100) do s := SimpTheorems.addSimpTheorem s thm
    for thm in ← mkSimpTheoremFromConst ``highRule (prio := 200) do s := SimpTheorems.addSimpTheorem s thm
    let ctx ← Simp.mkContext (simpTheorems := #[s])
    let (r, _) ← Simp.main body ctx (methods := Simp.mkDefaultMethodsCore #[])
    unless r.expr.isAppOf ``highForm do throwError "retrieval lost priority: {r.expr}"
    let erased := s.eraseCore (.decl ``highRule)
    let ctx ← Simp.mkContext (simpTheorems := #[erased])
    let (r, _) ← Simp.main body ctx (methods := Simp.mkDefaultMethodsCore #[])
    unless r.expr.isAppOf ``lowForm do throwError "erasure did not exclude the rule: {r.expr}"

/-! Neutral simp configuration. -/

example (b : Bool) (p : Prop) :
    (if b then p else False) ↔ b = true ∧ p := by
  simp (config := Lean.Meta.Simp.neutralConfig) only [ite_false_right]

example (b : Bool) (h : b = true) :
    if b then have unused := (); True else False := by
  simp (config := Lean.Meta.Simp.neutralConfig) only [ite_false_right]
  guard_target =ₛ b = true ∧ (have unused := (); True)
  exact ⟨h, trivial⟩

example (p : Prop) [Decidable p] (h : p) : (if p then 1 else 2) = 1 := by
  simp (config := Lean.Meta.Simp.neutralConfig) only [ite_eq_left h]

example (b : Bool) : (if b then 1 else 2) = 1 ∨ (if b then 1 else 2) = 2 := by
  fail_if_success simp (config := Lean.Meta.Simp.neutralConfig) only [ite_eq_left (p := True) trivial]
  cases b <;> decide

example (P : Nat → Prop) [DecidablePred P] :
    (fun x => if P x then x else 0) = (fun x => cond (decide (P x)) x 0) := by
  simp only [eq_self]

example (P : Nat → Prop) [DecidablePred P] :
    (fun x => if P x then x else 0) = (fun x => cond (decide (P x)) x 0) := by
  simp (config := Lean.Meta.Simp.neutralConfig) only [eq_self]

/-! Rewriting a Boolean decision in its named and projection forms. -/

open Lean Elab Term in
elab "rw_raw_decide% " d:term : term => do
  let d ← elabTerm d none
  return .proj ``Decidable 0 d

example (p : Prop) [Decidable p] (h : decide p = true) :
    (if decide p then (1 : Nat) else 2) = 1 := by
  rw [h]
  rfl

example (p : Prop) [d : Decidable p] (h : (rw_raw_decide% d) = true) :
    cond (decide p) (1 : Nat) 2 = 1 := by
  rw [h]
  rfl

example (p : Prop) [Decidable p] (h : true = decide p) :
    (if decide p then (1 : Nat) else 2) = 1 := by
  rw [← h]
  rfl

example (p : Prop) [Decidable p] (n : Nat) (h : decide p = true)
    (hn : (if decide p then (1 : Nat) else 2) = n) : 1 = n := by
  rw [h] at hn
  exact hn

example (p q : Prop) [Decidable p] [dq : Decidable q] (_h : decide p = true) :
    cond (rw_raw_decide% dq) (0 : Nat) 1 ≤ 1 := by
  fail_if_success rw [_h]
  omega

example (p : Prop) (d₁ d₂ : Decidable p) (_h : @decide p d₁ = true) :
    cond (rw_raw_decide% d₂) (0 : Nat) 1 ≤ 1 := by
  fail_if_success rw [_h]
  omega

/-! `apply` with `iteInduction`. -/

example (p : Prop) [Decidable p] (a b : Nat × Nat) (k : Nat)
    (ha : a.1 < k) (hb : b.1 < k) : (if p then a else b).1 < k := by
  apply iteInduction (motive := fun q : Nat × Nat => q.1 < _) <;> intro
  next => exact ha
  next => exact hb

example (a b : String.Pos.Raw) (k : Nat)
    (ha : a.byteIdx < k) (hb : b.byteIdx < k) : (if a ≤ b then a else b).byteIdx < k := by
  apply iteInduction (c := a ≤ b) (motive := (String.Pos.Raw.byteIdx · < _)) <;> intro
  next => exact ha
  next => exact hb

example (p : Prop) [Decidable p] (h : p) : (if p then 0 else 1) = 0 := by
  fail_if_success apply (iteInduction (c := False) (t := 0) (e := 1)
    (motive := fun n : Nat => n = 0))
  simp only [h, ite_true]

end IfCondRewrite
