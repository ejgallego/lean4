<!-- Copyright (c) 2026 Lean FRO, LLC. All rights reserved. -->

# The conditional interface

This note specifies the interface between conditional elaboration, decision inspection, computation, and tactic abstraction. API docstrings describe individual operations; this note defines how their contracts fit together. The clause labels C1–C10 and acceptance labels T1–T15 provide stable references for tests and reviews.

Ordinary conditionals consume Boolean data. A decision record retains the evidence needed to interpret that computation as a proposition:

```lean
-- Schematic fields of Decidable p:
decide : Bool
reflects_decide : decide.Reflects p
```

The first field is a **computational projection from a dependent record**. Its result type is `Bool`; the dependency is in the later certificate field. Preserving the record for logical inspection and contracting its computational projection for abstraction are compatible operations with different purposes.

## Term shapes and predicate lifetime

| Interface | Representation |
| --- | --- |
| `if b then t else e`, with `b : Bool` | `cond b t e`; a recognized named decision projection is canonicalized to primitive projection syntax. |
| `if p then t else e`, with `p : Prop` | Synthesize `d : Decidable p`, then emit `cond (.proj Decidable 0 d) t e`, schematically. Instance synthesis may still be pending when the projection is formed. |
| Explicit `@ite α p d t e` | Retained as an interface used by definitions and theorems; unfolding `ite` and its named projection gives the corresponding `cond` definitionally. |
| `if h : p then t h else e h` | `dite p t e`, with branch-local evidence of `p` or `¬p`. |

See [ordinary conditional elaboration](../../src/Lean/Elab/BuiltinTerm.lean) and [the core definitions](../../src/Init/Prelude.lean). These forms are not interchangeable syntax: ordinary elaboration emits `cond`, while a proof-dependent conditional retains its certificate use. Converting a `dite` with constant branches to `ite` can require a theorem or case analysis; do not assume that the reflection certificate disappears definitionally for a neutral decision.

The source predicate remains recoverable as the argument of the existing decision's inferred type. “Source” here means the predicate present at this phase, not the original parser syntax. Once normalization removes the decision record, arbitrary Boolean code does not uniquely determine the predicate that produced it.

## Four distinct operations

| Operation | Result | What it does not establish |
| --- | --- | --- |
| Typed decision inspection | The predicate `p` and existing decision `d` | Evaluation of `d`, synthesis of a replacement, or provenance for arbitrary Boolean code. |
| Computational projection reduction | The selected Boolean field of an exposed record | Elimination of dependencies in branch terms, carriers, or other fields. |
| Conditional matching and inverse reflection | A candidate whose complete conversion is checked | That the candidate predicate is historical source metadata, or that substitution inside a record is well typed. |
| Dependent conditional reasoning | Evidence for branches and valid motives or transports | Permission to discard branch evidence when changing a condition. |

### C1–C3: typed inspection preserves the supplied interface

`Lean.Meta.getBoolDecision?` lives in [Lean.Meta.Decidable](../../src/Lean/Meta/Decidable.lean), below both KAbstract and Simp in the import graph. It recognizes fully applied named `@Decidable.decide p d` and primitive `.proj Decidable 0 d` expressions, through outer metadata and existing metavariable assignments. It reads the type of `d` and exposes reducible aliases of its `Decidable` head using `whnfR`.

The operation returns the existing `d` after instantiating already assigned metavariables. It does not synthesize a new dictionary, unfold the dictionary to discover its predicate, or assign a predicate by guessing from Boolean code. Local and opaque dictionaries therefore remain inspectable. Type exposure uses reducible transparency, not default or all transparency.

Unrecognized Boolean expressions and decision types whose head cannot be exposed at reducible transparency yield `none`. The latter includes unresolved type metavariables and semireducible aliases; failure to expose a type is not a diagnosis that it is malformed. Inputs are expected to be well typed: this inspector is not a whole-expression type checker. Actual type inference errors and interruptions propagate instead of being swallowed as failed recognition. Inspection does not introduce speculative matching constraints; normalization may use ordinary Meta caches.

### C4–C5: computation prepares supported abstractions

Suppose `h : b.Reflects p`, and the conditional's result type and branches are independent of the Boolean being abstracted. Syntactically abstracting `b` in

```lean
cond ((⟨b, h⟩ : Decidable p).decide) t e
```

would try to build the generally ill-typed expression

```lean
fun b' => cond ((⟨b', h⟩ : Decidable p).decide) t e
```

The certificate still refers to `b`. Contracting the original well-typed projection first gives `cond b t e`, which admits `fun b' => cond b' t e`. The Boolean need not be a literal. This is constructor projection reduction, not proof irrelevance or certificate transport.

The pure `reduceDecisionProjection?` helper contracts only a directly exposed `Decidable.intro` under a named or primitive projection, ignoring metadata shells. Sym can use this cheap operation without adopting another evaluator's transparency policy.

`reduceDecisionProjectionR?` additionally exposes **reducible wrappers around the decision record**, including reducible definitions and beta/let packaging, to weak head normal form. It then selects the constructor's Boolean field without normalizing that field. Closed instance expressions use reducible WHNF. Open instances encountered under binders use syntactic beta/let reduction, reducible head unfolding, and projections from exposed constructors. They stop at neutral bound-variable or recursor heads; only closed subterms are passed to the WHNF API. It does not unfold arbitrary Boolean guards or arbitrary wrappers around the whole projection. Ordinary semireducible definitions, irreducible definitions, opaque constants, and neutral dictionaries are outside this exposure policy. Failure to expose a constructor leaves the original projection available.

Preparation is targeted in `kabstract`, rather than eager in elaboration or a global normalization pass. Both the free-variable/all-occurrences shortcut and the general traversal participate. The transformation uses only definitional reductions; it does not introduce a propositional equality proof or synthesize another decision.

Supported consumers include [`MVarId.rewrite`](../../src/Lean/Meta/Tactic/Rewrite.lean), the audited [`generalize`](../../src/Lean/Meta/Tactic/Generalize.lean) path, and direct motive construction using `kabstract`. Match elaboration also calls `kabstract` when constructing motives and abstracting indices; a successful source `match` alone is not evidence that the preparation step was needed. Tests construct unreduced `Expr` nodes directly to establish that the boundary is exercised.

`kabstract` returns an abstracted expression, not a universal guarantee that every dependent abstraction is well typed. The rewrite consumer constructs and checks its motive before creating the equality proof. A dependency that survives projection reduction still requires generalization or transport. In particular, an opaque function consuming the whole record, a branch using its certificate, or a dependent carrier cannot be made independent by deleting a projection elsewhere. Such rewrites may fail with the existing motive/type diagnostic; the tactic must not return an invalid proof.

### C8: occurrences and speculative state

Where whole-expression matching is admissible (without loose bound variables), it takes precedence over projection preparation in the general traversal. A rule for the complete named or primitive projection can still match. If it does not match, preparation exposes the computational field before looking for selected occurrences inside it; occurrences in discarded certificate packaging do not count as computational occurrences.

Selected-occurrence traversal preserves an original projection when no selected substitution occurs in its computational field. An excluded first occurrence must not force a later occurrence to use its metavariable instantiations. The all-occurrence free-variable shortcut performs the same supported preparation before syntactic abstraction.

Compatibility attempts save and restore backtrackable Meta state on failure, including expression assignments, universe assignments, and postponed constraints. Excluded matches restore their candidate state. Successful selected matches retain the constraints they establish. Preparation itself does not use speculative instance synthesis or assign a Boolean value to an unresolved dictionary.

### C7 and C9: checked matching and limited inverse reflection

[`isDefEqIf`](../../src/Lean/Meta/KAbstract.lean) supports `ite`/`cond` theorem compatibility, including nested applications and binders. It first tries conversion, then exact decision-type inspection, and finally the generic predicate `b = true` for a raw Boolean guard when the pattern permits it. Each completed candidate must pass conversion of the guard **and the complete expression**; branch agreement alone is insufficient.

This keeps theorem uses such as `rw [ite_eq_left]` and `apply_ite` available after ordinary `if` acquires a `cond` head. Conditional indexing makes such theorems candidates; indexing is not a proof of applicability. Propositional rewrites still construct and check ordinary equality proofs.

There is no general inverse translator from Boolean programs in this interface. A conjunction of Booleans or an arithmetic implementation such as `Nat.ble x.succ y` is treated as a raw Boolean unless it retains a recognized decision projection. Choosing a richer proposition would be additional inverse-reflection automation, with its own selection policy and correctness check. It is not source-predicate recovery.

### C6: logical and computational simplification cooperate

The default [Sym conditional dispatcher](../../src/Lean/Meta/Sym/Simp/ControlFlow.lean) first offers a recognized decision to its proposition-level callback. Direct constructor projections can contract immediately. If the logical attempt is unchanged and not marked complete, the dispatcher simplifies the Boolean guard, including registered guard rewrites. An unchanged proposition is not a reason to stop processing the guard.

A callback's explicit completion flag remains a reduction boundary. Unresolved conditions may remain residual without visiting both branches. Once a literal guard is known, only the selected branch proceeds. Results retain context-dependency information from both logical and Boolean processing, including branch selection. Recovered predicates and constructed expressions use Sym's sharing operations before pointer-based comparisons.

[CBV](../../src/Lean/Meta/Tactic/Cbv/ControlFlow.lean) supplies a stronger evaluation callback with its own opacity checks. Sharing the dispatcher does not authorize the default callback or abstraction preparation to bypass CBV's opaque-declaration policy.

### C10: administrative bridges and useful rewrites

The simplifier's [bridge filter](../../src/Lean/Meta/Tactic/Simp/Rewrite.lean) runs after matching, argument synthesis, and instantiation. It suppresses only a conversion whose target already has the result's conditional representation and whose type, branches, extra arguments, and normalized guard interpretation agree. Nested bridges apply the same criterion recursively.

Guard comparison uses retained decision propositions and the generic Boolean equality-to-`true` interpretation, recursively applying the exact reflection identity relating a decision projection's equality to `true` to its predicate. Nested decision packaging is normalized on both sides before comparison. After these explicit reflection normalizations and metavariable instantiation, guard comparison requires structural equality, ignoring metadata recursively. It does not unfold user definitions or use definitional equality to classify a rewrite as administrative. Matching may use conversion to establish applicability; that does not establish that the requested normalization has already happened. This policy does not reconstruct conjunctions or arithmetic predicates.

A theorem changing `mask b` to `b` must still run even when both target and result use `cond`; this applies to an ordinary transparent definition as well as an irreducible `mask`. Tests inspect the resulting expression structurally, in addition to checking the proof. Pure representation conversions retain their explicit direction when changing heads, and are suppressed when their result representation is already present, including under applications.

## Dependent branches and caches

`dite` supplies evidence to branches. Splitting a retained decision uses its predicate; splitting a raw Boolean uses equality to `true`. Changing propositions in dependent terms must reconstruct the necessary certificate or transport, rather than reuse a proof at a different type.

VCGen's raw-Boolean and projected-decision split rules abstract different parameters (`b : Bool` versus `p : Prop` and `d : Decidable p`), so their cache keys distinguish those representations. General dictionary-field unfolding rules also depend on their concrete program; their program-sensitive cache is a separate correctness requirement, not an inverse-reflection policy.

## Relationship to MathComp and SSReflect

MathComp's equality interface packages an executable Boolean relation with a reflection certificate at a fixed carrier. This is a structural precedent for keeping computation and logical evidence together. Its `eqE` interface also exposes a folding boundary for equality implementations. See [MathComp's equality interface](https://math-comp.github.io/htmldoc/mathcomp.boot.eqtype.html).

Rocq's [`reflect`](https://rocq-prover.org/doc/V9.2.0/corelib/Corelib.Init.Datatypes.html) is indexed in `Set`; Lean's `Bool.Reflects` is `Prop`-valued. Their elimination principles are not being identified. [Canonical structure inference](https://rocq-prover.org/doc/V9.2.0/refman/language/extensions/canonical.html) solves projection constraints for an unknown record; inspecting the type of an already supplied Lean decision is a different operation.

SSReflect documents [special matching for canonical projections](https://rocq-prover.org/doc/V8.19.2/refman/proof-engine/ssreflect-proof-language.html#matching). Its implementation distinguishes [projection lookup](https://github.com/rocq-prover/rocq/blob/59026c7fa146c3794b3ba92f997ff67c947e347c/plugins/ssrmatching/ssrmatching.ml#L694-L765), [computational reduction](https://github.com/rocq-prover/rocq/blob/59026c7fa146c3794b3ba92f997ff67c947e347c/plugins/ssrmatching/ssrmatching.ml#L226-L280), and [type-based recovery of primitive-projection parameters](https://github.com/rocq-prover/rocq/blob/59026c7fa146c3794b3ba92f997ff67c947e347c/plugins/ssrmatching/ssrmatching.ml#L966-L980). It still reports [dependent motive errors](https://github.com/rocq-prover/rocq/blob/59026c7fa146c3794b3ba92f997ff67c947e347c/plugins/ssr/ssrequality.ml#L520-L533).

The architectural inference is that preserving interfaces during inference and reducing computational projections for abstraction are compatible policies. These sources do not establish Lean's abstraction guarantee; the Lean acceptance tests do.

## Acceptance tests and limits

The matrix below names executable tests for each contract boundary. Passing a smoke case does not replace direct checks of an unreduced expression, motive, or proof endpoints.

| Case | Contract | Executable coverage |
| --- | --- | --- |
| T1: term shapes and branch evidence | C1, C5 | [if_bool_elab](../../tests/elab/if_bool_elab.lean), [if_bool_compat](../../tests/elab/if_bool_compat.lean) |
| T2: named/primitive views, metadata, assigned metavariables | C1–C3 | [if_bool_decision_view](../../tests/elab/if_bool_decision_view.lean) |
| T3: local/opaque decisions and retained instance identity | C1, C3 | [if_bool_decision_view](../../tests/elab/if_bool_decision_view.lean), [if_bool_wf_alias](../../tests/elab/if_bool_wf_alias.lean) |
| T4: reducible pattern-type aliases | C2, C7 | [if_bool_decision_alias_match](../../tests/elab/if_bool_decision_alias_match.lean) |
| T5: exposed constructor abstraction | C4–C5 | [if_bool_projection_abstraction](../../tests/elab/if_bool_projection_abstraction.lean) |
| T6: reducible record wrappers and fast paths | C4 | [if_bool_projection_wrappers](../../tests/elab/if_bool_projection_wrappers.lean) |
| T7: selected occurrences and speculative state | C8 | [if_bool_match_rollback](../../tests/elab/if_bool_match_rollback.lean), [if_bool_projection_wrappers](../../tests/elab/if_bool_projection_wrappers.lean) |
| T8: unknown predicate, literal constructor field | C6 | [if_bool_sym_guard_progress](../../tests/elab/if_bool_sym_guard_progress.lean) |
| T9: registered guard rewrite and structural residual | C6 | [if_bool_sym_guard_progress](../../tests/elab/if_bool_sym_guard_progress.lean) |
| T10: substantive direct/nested guard rewrites | C10 | [if_bool_cond_simp_guard_bridge](../../tests/elab/if_bool_cond_simp_guard_bridge.lean) |
| T11: direct/nested bridge orientations | C7, C10 | [if_bool_bridge](../../tests/elab/if_bool_bridge.lean), [if_bool_nested](../../tests/elab/if_bool_nested.lean), [if_bool_cond_simp_guard_bridge](../../tests/elab/if_bool_cond_simp_guard_bridge.lean) |
| T12: residual/dead branches, sharing, context, CBV opacity | C6 | [if_bool_sym_guard_progress](../../tests/elab/if_bool_sym_guard_progress.lean), [if_bool_cond_native_sym](../../tests/elab/if_bool_cond_native_sym.lean), [cbv_if_projection](../../tests/elab/cbv_if_projection.lean) |
| T13: raw Boolean reasoning without provenance | C9 | [if_bool_reconstruct](../../tests/elab/if_bool_reconstruct.lean), [if_bool_split_reflect](../../tests/elab/if_bool_split_reflect.lean) |
| T14: surviving dependencies and checked failure | C5 | [if_bool_projection_wrappers](../../tests/elab/if_bool_projection_wrappers.lean), [if_bool_wf_dependent](../../tests/elab/if_bool_wf_dependent.lean) |
| T15: whole-projection matching alongside field abstraction | C8 | [if_bool_projection_wrappers](../../tests/elab/if_bool_projection_wrappers.lean), [if_bool_decide_rw](../../tests/elab/if_bool_decide_rw.lean) |

The guarantee is deliberately bounded: reducible record packaging is supported at the abstraction boundary; arbitrary dependent programs, opaque wrappers, and carrier dependencies are not automatically repaired. No general Boolean inverse reflection or cross-prover equivalence is promised. Performance of the additional targeted abstraction traversal is not characterized by correctness tests.
