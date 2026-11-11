module
import Lean
public meta import Lean.Meta.Tactic.Simp.Main

/-!
Test that simp retains substantive guard rewrites and orients pure conditional bridges.
-/

open Lean Meta

namespace IfBoolGuardBridge

@[irreducible] def mask (b : Bool) : Bool := b

theorem mask_bridge (b : Bool) (x y : Nat) :
    ite (mask b) x y = cond b x y := by
  unfold mask
  cases b <;> rfl

def reducibleMask (b : Bool) : Bool := b

theorem reducibleMask_bridge (b : Bool) (x y : Nat) :
    ite (reducibleMask b) x y = cond b x y := by
  unfold reducibleMask
  cases b <;> rfl

example (b : Bool) (x y : Nat) (h : (if mask b then x else y) = x) :
    cond b x y = x := by
  simp -failIfUnchanged only [mask_bridge] at h
  guard_hyp h :ₛ cond b x y = x
  exact h

opaque bridgeWrap : Nat → Nat

example (b : Bool) (x y : Nat)
    (h : bridgeWrap (if mask b then x else y) = bridgeWrap x) :
    bridgeWrap (cond b x y) = bridgeWrap x := by
  simp -failIfUnchanged only [mask_bridge] at h
  guard_hyp h :ₛ bridgeWrap (cond b x y) = bridgeWrap x
  exact h

example (b : Bool) (x y : Nat) (h : (if reducibleMask b then x else y) = x) :
    cond b x y = x := by
  simp -failIfUnchanged only [reducibleMask_bridge] at h
  guard_hyp h :ₛ cond b x y = x
  exact h

example (b : Bool) (x y : Nat)
    (h : bridgeWrap (if reducibleMask b then x else y) = bridgeWrap x) :
    bridgeWrap (cond b x y) = bridgeWrap x := by
  simp -failIfUnchanged only [reducibleMask_bridge] at h
  guard_hyp h :ₛ bridgeWrap (cond b x y) = bridgeWrap x
  exact h

theorem wrapToIte (b : Bool) (x y : Nat) :
    bridgeWrap (cond b x y) = bridgeWrap (ite b x y) := rfl

theorem wrapToCond (b : Bool) (x y : Nat) :
    bridgeWrap (ite b x y) = bridgeWrap (cond b x y) := rfl

private def onlyBridgeRule (decl : Name) : MetaM Simp.Context := do
  let mut s : SimpTheorems := {}
  for name in [``eq_self, ``iff_self, decl] do
    for thm in ← mkSimpTheoremFromConst name do s := s.addSimpTheorem thm
  Simp.mkContext (simpTheorems := #[s])

private def checkBridgeResult (source expected : Expr) (r : Simp.Result) : MetaM Unit := do
  unless r.expr == expected do
    throwError "unexpected bridge result: expected {expected}, got {r.expr}"
  let proof ← r.getProof
  let proofType ← inferType proof
  unless proofType.isAppOfArity ``Eq 3 do
    throwError "bridge proof does not prove an equality: {proofType}"
  let proofArgs := proofType.getAppArgs
  unless (← isDefEq proofArgs[1]! source) && (← isDefEq proofArgs[2]! expected) do
    throwError "bridge proof endpoints do not match source and result: {proofType}"
  check proof

private def simplifyWith (decl : Name) (source expected : Expr) : MetaM Unit := do
  let ctx ← onlyBridgeRule decl
  let (r, _) ← Simp.main source ctx (methods := Simp.mkDefaultMethodsCore #[])
  checkBridgeResult source expected r

run_meta do
  withLocalDeclD `b (mkConst ``Bool) fun b => do
    withLocalDeclD `x (mkConst ``Nat) fun x => do
      withLocalDeclD `y (mkConst ``Nat) fun y => do
        let nat := mkConst ``Nat
        let cond := mkConst ``cond [Level.one]
        let maskB := mkApp (mkConst ``mask) b
        let directSource := mkApp4 cond nat maskB x y
        let directResult := mkApp4 cond nat b x y
        let wrap := mkConst ``bridgeWrap
        let nestedSource := mkApp wrap directSource
        let nestedResult := mkApp wrap directResult
        simplifyWith ``mask_bridge directSource directResult
        simplifyWith ``mask_bridge nestedSource nestedResult
        let reducibleMaskB := mkApp (mkConst ``reducibleMask) b
        let reducibleSource := mkApp4 cond nat reducibleMaskB x y
        let reducibleNestedSource := mkApp wrap reducibleSource
        simplifyWith ``reducibleMask_bridge reducibleSource directResult
        simplifyWith ``reducibleMask_bridge reducibleNestedSource nestedResult

        let pred ← mkEq b (mkConst ``Bool.true)
        let decision ← synthInstance (mkApp (mkConst ``Decidable) pred)
        let ite := mkApp5 (mkConst ``ite [Level.one]) nat pred decision x y
        let condB := mkApp4 cond nat b x y
        let wrapIte := mkApp wrap ite
        let wrapCond := mkApp wrap condB

        -- Both orientations rewrite forward and stop at their result representation.
        simplifyWith ``wrapToIte wrapCond wrapIte
        simplifyWith ``wrapToIte wrapIte wrapIte
        simplifyWith ``wrapToCond wrapIte wrapCond
        simplifyWith ``wrapToCond wrapCond wrapCond

        let metadataCond := mkApp4 cond nat (mkMData {} b) x y
        let metadataTarget := mkApp wrap metadataCond
        let ctx ← onlyBridgeRule ``wrapToCond
        let (r, _) ← Simp.main metadataTarget ctx (methods := Simp.mkDefaultMethodsCore #[])
        checkBridgeResult metadataTarget metadataTarget r

-- A reflection bridge may need to peel more than one exact decision projection.
set_option maxRecDepth 128 in
run_meta do
  for named in [false, true] do
    withLocalDeclD `p (mkSort .zero) fun p => do
      withLocalDeclD `d (mkApp (mkConst ``Decidable) p) fun d => do
        let b := if named then mkApp2 (mkConst ``Decidable.decide) p d else mkProj ``Decidable 0 d
        let p1 ← mkEq b (mkConst ``Bool.true)
        let d1 ← synthInstance (mkApp (mkConst ``Decidable) p1)
        let target := mkApp5 (mkConst ``ite [Level.one]) (mkConst ``Nat) p1 d1
          (mkNatLit 1) (mkNatLit 2)
        let ctx ← onlyBridgeRule ``Bool.cond_eq_ite
        let (r, _) ← Simp.main target ctx (methods := Simp.mkDefaultMethodsCore #[])
        checkBridgeResult target target r

end IfBoolGuardBridge
