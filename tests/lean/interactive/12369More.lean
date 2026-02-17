example (h : ∃ a : Nat, (∃ b, a = b + 1) ∧ 0 ≤ a) : True := by
  rcases h with ⟨_, ⟨b, rfl⟩, (hb : 0 ≤ b + 1)⟩
                                       --^ $/lean/plainTermGoal
  trivial

example (h : ∃ a : Nat, (∃ b, a = b + 1) ∧ 0 ≤ a) : True := by
  rcases h with ⟨_, ⟨b, rfl⟩, (hyp)⟩
                                --^ $/lean/plainTermGoal
  trivial
