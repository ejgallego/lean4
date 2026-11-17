module
import Lean
/-! Dependent result types in well-founded ordinary conditionals. -/
namespace IfDependentWF
structure IndexFamily where
  bound : Nat
abbrev IndexFamily.Pos (s : IndexFamily) := Fin (s.bound + 1)
def descend {s : IndexFamily} (pos : s.Pos) : s.Pos :=
  if pos.val = 0 then pos
  else descend ⟨pos.val - 1, by omega⟩
termination_by pos.val
decreasing_by omega
end IfDependentWF
