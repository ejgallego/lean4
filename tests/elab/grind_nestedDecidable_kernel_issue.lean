module
public meta import Lean.Elab.Command
/-!
Paul Reichert's examples: `grind` + kernel interaction through `Grind.nestedDecidable`.

`grind` canonicalizes `Decidable` instances under the identity wrapper `Grind.nestedDecidable`.
Previously, comparing the instances used by `ite` could unfold `Decidable.reflects_decide`
and force expensive `UInt32` arithmetic while checking the proof.

`if` now elaborates to `cond` with a Boolean guard, so these comparisons inspect only the
Boolean field. Both the original proof and its recheck with a regular reducibility hint
must succeed within the heartbeat limit.

`MyChar` mirrors `Char.toUpper` and `Char.isLower`, so that `Char` simprocs do not affect the
example.
-/

section Test

set_option maxHeartbeats 1000 -- for the health of the machine

structure MyChar where
  val : UInt32

def MyChar.toUpper (c : MyChar) : MyChar :=
  if 97 ≤ c.val ∧ c.val ≤ 122 then ⟨c.val + (65 - 97)⟩ else c

def MyChar.isLower (c : MyChar) : Bool :=
  if 97 ≤ c.val ∧ c.val ≤ 122 then true else false

theorem MyChar.isLower_toUpper (c : MyChar) : c.toUpper.isLower = false := by
  unfold MyChar.isLower MyChar.toUpper
  split <;> grind only

end Test

section Control

/-!
Rechecking with a regular wrapper must retain the same bounded kernel behavior.
-/

/-- `Grind.nestedDecidable` with a `regular` reducibility hint. -/
@[reducible]
def regularNestedDecidable {p : Prop} (h : Decidable p) : Decidable p := h

open Lean Elab Command in
/--
Re-checks the proofs of `thm` and its auxiliary lemmas that mention `Grind.nestedDecidable`, with
that constant replaced by `regularNestedDecidable`.
-/
elab "#recheck_with_regular_wrapper " thm:ident : command => liftCoreM do
  let thm ← realizeGlobalConstNoOverload thm
  let some v := (← getConstInfo thm).value? (allowOpaque := true) | throwError "no value"
  let mentionsWrapper (e : Expr) := (e.find? (·.isConstOf ``Grind.nestedDecidable)).isSome
  let replace (e : Expr) := e.replace fun e =>
    if e.isConstOf ``Grind.nestedDecidable then some (mkConst ``regularNestedDecidable) else none
  let mut found := false
  for n in #[thm] ++ v.getUsedConstants.filter (thm.isPrefixOf ·) do
    let ci ← getConstInfo n
    let some v := ci.value? (allowOpaque := true) | continue
    unless mentionsWrapper v do continue
    found := true
    addDecl <| .thmDecl { name := n ++ `regular, levelParams := ci.levelParams, type := replace ci.type, value := replace v }
  unless found do throwError "neither `{thm}` nor its auxiliary lemmas mention `Grind.nestedDecidable`"

set_option maxHeartbeats 1000

#guard_msgs in
#recheck_with_regular_wrapper MyChar.isLower_toUpper

end Control
