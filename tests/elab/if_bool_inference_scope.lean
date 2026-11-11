module
import Lean
/-! Conditional inference preserves constraints from mutable variables and the enclosing result. -/
def inferredKMPTable (w : ByteArray) : Array Int := Id.run do
  let mut t := Array.emptyWithCapacity w.size
  let mut n := -1
  t := t.push n
  for h:i in *...w.size do
    while n >= 0 && w[n.toNat]! != w[i] do
      n := t[n.toNat]!
    n := n + 1
    t := t.push n
  return t

#guard inferredKMPTable ByteArray.empty == #[-1]
