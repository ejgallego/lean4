module
import Std.Time
/-! Conditional natural bounds retain `NeZero` instances for `Fin` literals. -/

example (b : Bool) : NeZero (if b then 61 else 60) := inferInstance
example (b : Bool) : Fin (if b then 61 else 60) := 37
example (p : Prop) [Decidable p] : NeZero (if p then 61 else 60) := inferInstance
example (p : Prop) [Decidable p] : NeZero (ite p 61 60) := inferInstance
example := Std.Time.Second.Ordinal.ofFin (leap := false) 37
example := Std.Time.Second.Ordinal.ofFin (leap := true) 37
