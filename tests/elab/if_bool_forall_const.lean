module
public import Lean
public meta import Lean

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
