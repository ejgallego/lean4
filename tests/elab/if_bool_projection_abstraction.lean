module
import Lean
public meta import Lean

/-! Exposed decision projections lose irrelevant proof dependencies before abstraction. -/

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
