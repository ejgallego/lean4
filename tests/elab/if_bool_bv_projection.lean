module
import Std.Tactic.BVDecide

/-! BV normalization reflects Boolean equality decisions without evaluating their instances,
including projections synthesized while normalizing a projected comparison guard. -/

namespace IfBoolBVProjection

opaque trueDecision (b : Bool) : Decidable (b = true) := inferInstance
opaque falseDecision (b : Bool) : Decidable (b = false) := inferInstance
opaque reversedTrueDecision (b : Bool) : Decidable (true = b) := inferInstance
opaque reversedFalseDecision (b : Bool) : Decidable (false = b) := inferInstance

example (b : Bool) : cond (trueDecision b).1 true false = b := by bv_decide
example (b : Bool) : cond (falseDecision b).1 true false = !b := by bv_decide
example (b : Bool) : cond (reversedTrueDecision b).1 true false = b := by bv_decide
example (b : Bool) : cond (reversedFalseDecision b).1 true false = !b := by bv_decide

example (b : Bool) [d : Decidable (b = false)] :
    cond (show Bool from d.1) true false = !b := by bv_decide

example (x y : UInt32) : (if x < y then true else false) = x.toBitVec.ult y.toBitVec := by
  bv_decide

end IfBoolBVProjection
