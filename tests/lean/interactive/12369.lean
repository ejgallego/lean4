example (h : ∃ a : Nat, (∃ b, a = b + 1) ∧ 0 ≤ a) : True := by
  rcases h with ⟨_, ⟨b, rfl⟩, put_your_cursor_here_and_look_at_the_infoview⟩
                                 --^ $/lean/plainTermGoal
  trivial
