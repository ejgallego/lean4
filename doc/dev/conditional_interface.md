<!-- Copyright (c) 2026 Lean FRO, LLC. All rights reserved. -->

# The conditional interface

This note specifies the interface between conditional elaboration, decision inspection, computation, and tactic abstraction. API docstrings describe individual operations; this note defines how their contracts fit together. The clause labels C1–C10 and acceptance labels T1–T16 provide stable references for tests and reviews.

## Summary

`if c then t else e` elaborates to `cond d.1 t e`, where `d : Decidable c` and `d.1` is its Boolean field. The proposition is no longer a separate argument of the conditional's head. It can still occur in the arguments of the decision term, so abstraction can still fail; C4–C5 state what is repaired. The design consists of:

1. **One representation.** `if` and a saturated `ite c t e` produce the same `cond` term. `@ite` remains as an explicit escape and unfolds to it. A test `b = true` under its canonical instance is the Boolean `b`.
2. **Three unifier rules.** A decision projection `?d.1` unifies with `decide p` and with a raw Boolean `b` (as the decision of `b = true`); below default transparency two decisions are compared through their propositions, so a decision is not identified with another merely because both evaluate.
3. **Abstraction repair.** `kabstract` retries with decision records exposed when the first motive is ill-typed (C4–C5).
4. **Proposition-level simplification.** `simp` rewrites a primitive decision projection in guard position through its proposition and leaves the decision otherwise untouched, through metadata; a guard written with the named `decide p` is ordinary Boolean code and is rewritten as such; `ite_true`, `ite_false` and `reduceIte` reduce decided guards. Outside a guard, a decision projection is `decide p`.
5. **Proposition-form case splits.** `split`, `fun_induction` and `vcgen` introduce `c` and `¬c`; for a raw Boolean guard, `b = true` and `¬b = true`.
6. **Display.** A guard prints as its proposition, a raw Boolean guard `b` as `b = true`, and a bare decision projection as `decide p`.

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

Well-founded preprocessing uses its dedicated `condToDite` pre-simproc to inspect the guard before general simplification. A retained decision becomes a dependent conditional over its predicate; a raw Boolean becomes a dependent conditional over `b = true`. The `cond_decide_eq_dite` and `cond_eq_dite` theorems certify those transformations. This path follows the global `simprocs` option, as do the other WF simprocs.

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

`prepareDecisionProjectionForAbstraction?` is a separate, stronger computational interface. It exposes transparent instance-record packaging at default transparency, including ordinary user-defined combinators, then selects the Boolean field. It also gives a named neutral decision a primitive projection view, removing its explicit predicate argument without evaluating its record. Opaque and irreducible instance heads remain closed to reduction; their application arguments are still syntactically traversable. A surviving dependency in those arguments can therefore produce a motive that the consumer rejects. This is not an abstraction barrier. Its binder-safe exposure follows the same closed-subterm/open-syntax policy as the reducible helper. This operation does not unfold arbitrary aliases of the whole Boolean guard or use all transparency.

`kabstract` first tries the existing reducible-only abstraction. For inputs without loose bound variables that contain decision projections, it probes the candidate motive with Meta’s checker without retaining validation assignments. Free local variables and internal binders are supported. A candidate accepted by that probe is returned unchanged, preserving named arithmetic decisions and their predicate interface. With unresolved metavariables, acceptance can depend on temporary assignments: this is a constraint-compatible candidate, not a certification, and the consumer must check it again. Only an ill-typed candidate triggers the stronger preparation after restoring the pre-attempt backtrackable state. Inputs with loose bound variables retain the reducible-only policy; closed expressions containing internal binders can use the fallback. Interruptions and resource-limit exceptions propagate. The eligibility test scans the expression for decision projections; eligible inputs also incur the motive-checking work.

Preparation is targeted in `kabstract`, rather than eager in elaboration or a global normalization pass. The stronger attempt uses the general traversal for decision-containing expressions, including all-occurrence free-variable abstraction; the first attempt retains its existing shortcut. The transformation uses only definitional reductions; it does not introduce a propositional equality proof or synthesize another decision. A pointwise local decision remains tied to its original predicate even when other computational occurrences are replaced. A decision family applied to the replaced argument can instead track that argument coherently.

Supported consumers include [`MVarId.rewrite`](../../src/Lean/Meta/Tactic/Rewrite.lean), the audited [`generalize`](../../src/Lean/Meta/Tactic/Generalize.lean) path, and direct motive construction using `kabstract`. Match elaboration also calls `kabstract` when constructing motives and abstracting indices; a successful source `match` alone is not evidence that the preparation step was needed. Tests construct unreduced `Expr` nodes directly to establish that the boundary is exercised.

`kabstract` returns an abstracted expression, not a universal guarantee that every dependent abstraction is well typed. The rewrite consumer constructs and checks its motive before creating the equality proof. A dependency that survives projection reduction still requires generalization or transport. In particular, an opaque function consuming the whole record, a branch using its certificate, or a dependent carrier cannot be made independent by deleting a projection elsewhere. Such rewrites may fail with the existing motive/type diagnostic; the tactic must not return an invalid proof.

### C8: occurrences and speculative state

Where whole-expression matching is admissible (without loose bound variables), it takes precedence over projection preparation in the general traversal. A rule for the complete named or primitive projection can still match. If it does not match, preparation exposes the computational field before looking for selected occurrences inside it; occurrences in discarded certificate packaging do not count as computational occurrences.

Selected-occurrence traversal preserves an original projection when no selected substitution occurs in its computational field. An excluded first occurrence must not force a later occurrence to use its metavariable instantiations. The stronger all-occurrence free-variable attempt uses this same traversal when decision projections occur, so discarded predicate arguments do not reappear through unrestricted syntactic abstraction. No selected substitution means no structural projection change, including for named neutral views.

Excluded matches restore their candidate's backtrackable Meta state, including expression assignments, universe assignments, and postponed constraints. If motive validation rejects the reducible-only abstraction, its entire attempt is restored before the stronger traversal starts. Validation itself does not retain assignments. Successful selected matches retain the constraints they establish. Interruptions and resource-limit exceptions propagate; this does not promise whole-call rollback on an exception. Preparation itself does not use speculative instance synthesis or assign a Boolean value to an unresolved dictionary.

### C7 and C9: unification and limited inverse reflection

Theorems stated with `if` or `ite` have `cond ?d.1 ?t ?e` on their left-hand side. The [unifier](../../src/Lean/Meta/ExprDefEq.lean) solves `?d.1 =?= decide p` by assigning the decision of `p`, and `?d.1 =?= b` for a raw Boolean `b` by assigning `instDecidableEqBool b true`. `rw [ite_eq_left h]`, `apply_ite` and `ite_self` therefore apply to proposition guards, to guards written with `decide`, and to Boolean guards. Instantiating a theorem at a Boolean guard yields `(instDecidableEqBool b true).1`; `rw` and `simp` replace it by `b` in their results.

At reducible and instance transparency, `d₁.1 =?= d₂.1` between two primitive projections fails when the propositions of `d₁` and `d₂` are not definitionally equal, unless one of the records is exposed as a constructor by beta/let reduction alone, in which case the projection computes as usual. The restriction prevents a theorem such as `ite_false` from applying to a guard merely because its instance evaluates. At default transparency evaluation applies as for any term.

There is no general inverse translator from Boolean programs in this interface. Guard inspection and split selection treat a conjunction of Booleans or an arithmetic implementation such as `Nat.ble x.succ y` as a raw Boolean unless it retains a recognized decision projection. Consumer-specific reflection can subsequently derive logical facts from selected Boolean operations; this does not recover a historical source predicate.

### C6: logical and computational simplification cooperate

The default [Sym conditional dispatcher](../../src/Lean/Meta/Sym/Simp/ControlFlow.lean) first offers a recognized decision to its proposition-level callback. Direct constructor projections can contract immediately. If the logical attempt is unchanged and not marked complete, the dispatcher simplifies the Boolean guard, including registered guard rewrites. An unchanged proposition is not a reason to stop processing the guard.

A callback's explicit completion flag remains a reduction boundary. Unresolved conditions may remain residual without visiting both branches. Once a literal guard is known, only the selected branch proceeds. Results retain context-dependency information from both logical and Boolean processing, including branch selection. Recovered predicates and constructed expressions use Sym's sharing operations before pointer-based comparisons.

Sym's input sharing normalizes fully applied named `Decidable.decide p d` to the primitive projection `.proj Decidable 0 d` without evaluating `d`. Grind uses the same form before internalization and in E-matching patterns. A decision's predicate is retained in the existing `Grind.nestedDecidable p d` subsingleton wrapper; the projection has native indexing, matching, congruence and Boolean propagation. Projection congruence requires equal predicates, so heterogeneous equality of decision records alone does not request an unsupported predicate-equality proof. A decision used only as a conditional guard is still internalized: projection-root theorem activation and congruence between conditionals with equivalent predicates need this node even when neither truth value is known. Consequently, a guard can have a Boolean equivalence class without another explicit Boolean use.

Grind and default Sym proof builders using `mkDecisionProjectionProof` ascribe primitive endpoints to decision lemmas before specializing their binders. This makes the kernel check the named-to-primitive definitional conversion on neutral decisions instead of large concrete instances. Other builders, including CBV, can specialize named endpoints directly; their proofs remain definitionally compatible with primitive targets. The neutral-instance conversion policy is therefore a property of these builders, not a universal proof-shape or performance guarantee.

This is a shared-target invariant. Ordinary Sym rewrite theorem patterns can retain named `decide` syntax from their source; their typed decision matcher recovers the target predicate from the instance type before matching it. These pattern objects are separate from the shared target terms and Grind's E-matching patterns.

Grind's automatic theorem-pattern inference excludes candidates with any `cond`-rooted pattern. Conditional heads do not activate globally registered theorems, so choosing such a root can suppress a usable pattern on the other side of an equation. Explicit conditional-root patterns are activated by the caller and remain supported, as do conditionals nested below another pattern root. Conditional branches are initially lazy in the e-graph: E-matching internalizes a branch term when matching needs to inspect it or compare its equivalence class. Newly internalized matching terms count as progress even when that round produces no theorem instance, so queued solver work can continue. This branch visitation is independent of Sym's unresolved-guard completion boundary.

Grind's legacy simplifier enables Boolean guard rewriting and branch selection through an internal simplifier context parameter. Ordinary `simp` retains its guard policy: a primitive decision guarding `cond` is rewritten through its proposition, while an explicitly named `decide p` remains ordinary Boolean code.

Logical branch facts use two reflection boundaries. `normalizeDecisionCondition?` only converts an exact decision comparison with `true` or `false`, including surrounding negations, through its retained proposition. `normalizeBoolCondition` additionally uses a fixed set of reflection lemmas for Boolean connectives, equality, natural comparisons, implication and negation normalization when those lemmas exist in the current environment. Conditional congruence and split discharge use this finite normalization to relate Boolean branch assumptions to proposition-level hypotheses. Omega separately reflects Boolean connectives, Boolean and natural equality, and natural comparisons when ingesting branch facts. These consumers justify their translations with proofs; arbitrary Boolean implementations remain outside their reflection policies.

Grind's Sym normalizer runs its main simplification pass, then definitional simplification, then a final pass over decision predicates recovered from instance types. The final pass visits nested predicates, definitionally simplifies them, and synthesizes changed decisions with congruence proofs. Its simplifier cache is separate from the main pass because its methods differ. It does not restart the main logical or arithmetic normalizer after changing a predicate. This order also applies when normalizing implications for theorem patterns.

[CBV](../../src/Lean/Meta/Tactic/Cbv/ControlFlow.lean) supplies a stronger evaluation callback with its own opacity checks. Sharing the dispatcher does not authorize the default callback or abstraction preparation to bypass CBV's opaque-declaration policy. Builtin decision procedures publish primitive-projection keys; the registry inserts the producer’s key directly. The acceptance test checks both native and environment registrations and their proof-producing dispatch.

### C10: one representation, no bridges

`if c then t else e` and a saturated `ite c t e` elaborate to the same `cond` term; `@ite` is the explicit escape. `simp` rewrites a raw `ite` application, and the left-hand side of a theorem stated with one, into that form before matching. A test `b = true` under its canonical instance is the Boolean `b` itself, both at elaboration and in the result of a rewrite. No structural matcher relates the two heads: `rw` treats an explicit `@ite` as a different term.

Direct Meta callers of `kabstract` at default transparency can still match definitionally equal `ite` and `cond` applications: its head filter admits saturated applications with equal numbers of extra arguments, and `isDefEq` uses the caller's transparency mode.

## Dependent branches and caches

`dite` supplies evidence to branches. Splitting a retained decision uses its predicate; splitting a raw Boolean uses equality to `true`. Changing propositions in dependent terms must reconstruct the necessary certificate or transport, rather than reuse a proof at a different type.

VCGen's raw-Boolean and projected-decision split rules abstract different parameters (`b : Bool` versus `p : Prop` and `d : Decidable p`), so their cache keys distinguish those representations. General dictionary-field unfolding rules also depend on their concrete program; their program-sensitive cache is a separate correctness requirement, not an inverse-reflection policy.

## Relating `dite` and `ite`

`dite c (fun _ => t) (fun _ => e) = ite c t e` is a theorem (`dite_eq_ite`), not a definitional equality. `ite` selects on the Boolean decision without a motive; `dite` selects with a motive that carries the reflection proof, and the kernel does not commute the two eliminations when the decision is neutral. The two sides are definitionally equal exactly when the decision evaluates: a closed decidable proposition, or an instance that is literally `isTrue h` or `isFalse h`. A variable instance, an instance stuck on variables, a classical instance, and a Boolean test `b = true` all require the theorem. Proofs that transport a `dite` fact to an `ite` rewrite with `dite_eq_ite`.

Defining `cond` and `dite` over one eliminator shape (both selecting with a motive that takes an equation on the Boolean) restores the definitional equality for neutral decisions. This is not adopted; it changes the definition of `cond` and its effect on code generation and reduction is not characterized.

## Display of the guard

The proposition of a guard is not an argument of the term. It is displayed from the type of the decision instance, so `if x ≠ y then _ else _` displays as `if ¬x = y then _ else _` and `a > b` as `b < a`: the instance's type is the reduced proposition. A raw Boolean guard `b` displays as `b = true`.

Displaying the proposition as written is a requirement that this representation does not meet. MathComp depends on such display. Any design that stores the written proposition must keep it out of the positions that abstraction traverses, or the dependency this representation removes returns.

## Relationship to MathComp and SSReflect

MathComp's equality interface packages an executable Boolean relation with a reflection certificate at a fixed carrier. This is a structural precedent for keeping computation and logical evidence together. Its `eqE` interface also exposes a folding boundary for equality implementations. See [MathComp's equality interface](https://math-comp.github.io/htmldoc/mathcomp.boot.eqtype.html).

Rocq's [`reflect`](https://rocq-prover.org/doc/V9.2.0/corelib/Corelib.Init.Datatypes.html) is indexed in `Set`; Lean's `Bool.Reflects` is `Prop`-valued. Their elimination principles are not being identified. [Canonical structure inference](https://rocq-prover.org/doc/V9.2.0/refman/language/extensions/canonical.html) solves projection constraints for an unknown record; inspecting the type of an already supplied Lean decision is a different operation.

SSReflect documents [special matching for canonical projections](https://rocq-prover.org/doc/V8.19.2/refman/proof-engine/ssreflect-proof-language.html#matching). Its implementation distinguishes [projection lookup](https://github.com/rocq-prover/rocq/blob/59026c7fa146c3794b3ba92f997ff67c947e347c/plugins/ssrmatching/ssrmatching.ml#L694-L765), [computational reduction](https://github.com/rocq-prover/rocq/blob/59026c7fa146c3794b3ba92f997ff67c947e347c/plugins/ssrmatching/ssrmatching.ml#L226-L280), and [type-based recovery of primitive-projection parameters](https://github.com/rocq-prover/rocq/blob/59026c7fa146c3794b3ba92f997ff67c947e347c/plugins/ssrmatching/ssrmatching.ml#L966-L980). It still reports [dependent motive errors](https://github.com/rocq-prover/rocq/blob/59026c7fa146c3794b3ba92f997ff67c947e347c/plugins/ssr/ssrequality.ml#L520-L533).

The architectural inference is that preserving interfaces during inference and reducing computational projections for abstraction are compatible policies. These sources do not establish Lean's abstraction guarantee; the Lean acceptance tests do.

## Differences from the proposition-headed representation

- `dite c (fun _ => t) (fun _ => e) = ite c t e` is a theorem, not a definitional equality (see above).
- The guard displays as the proposition of its instance's type, not as written.
- `bif` remains supported: it expands to `cond`, whose guard is elaborated with expected type `Bool`. For a local `b : Bool`, `bif b then t else e` and `if b then t else e` both produce `cond b t e`; the different guard elaboration paths do not guarantee identical expression syntax for general proposition guards or named decisions. `cond_eq_ite` states a definitional bridge to an explicit `@ite` testing `b = true`, rather than a literal identity of expressions. Case splits on a raw Boolean guard introduce `¬b = true`, not `b = false`.
- Metaprograms that recognize conditionals with `Expr.isIte` or by matching `ite` applications must match `cond` and inspect its guard with `getGuardDecision`.
- Grind's normalizers keep a Boolean normal form for guards (`!decide p` for `¬p`); `simp` does not.

## Acceptance tests and limits

The matrix below names executable tests for each contract boundary. Passing a smoke case does not replace direct checks of an unreduced expression, motive, or proof endpoints.

| Case | Contract | Executable coverage |
| --- | --- | --- |
| T1: term shapes and branch evidence | C1, C5, C10 | [if_cond_elab](../../tests/elab/if_cond_elab.lean) |
| T2: named/primitive views, metadata, assigned metavariables | C1–C3 | [if_cond_abstraction](../../tests/elab/if_cond_abstraction.lean) |
| T3: local/opaque decisions and retained instance identity | C1, C3 | [if_cond_abstraction](../../tests/elab/if_cond_abstraction.lean), [if_cond_wf_alias](../../tests/elab/if_cond_wf_alias.lean), [if_cond_wf_policy](../../tests/elab/if_cond_wf_policy.lean) |
| T4: unknown-predicate, named and raw-Boolean unification | C7 | [defeq_proj_fn_proj](../../tests/elab/defeq_proj_fn_proj.lean) |
| T5: exposed constructor abstraction | C4–C5 | [if_cond_abstraction](../../tests/elab/if_cond_abstraction.lean) |
| T6: reducible record wrappers and fast paths | C4 | [if_cond_abstraction](../../tests/elab/if_cond_abstraction.lean) |
| T7: selected occurrences and speculative state | C8 | [if_cond_abstraction](../../tests/elab/if_cond_abstraction.lean) |
| T8–T9: Sym guard progress and structural residuals | C6 | [if_cond_sym](../../tests/elab/if_cond_sym.lean) |
| T10: substantive direct/nested guard rewrites | C10 | [if_cond_rewrite](../../tests/elab/if_cond_rewrite.lean), [if_cond_simp](../../tests/elab/if_cond_simp.lean), [if_cond_arity_policy](../../tests/elab/if_cond_arity_policy.lean) |
| T11: canonical elaboration and explicit `@ite` | C10 | [if_cond_elab](../../tests/elab/if_cond_elab.lean), [if_cond_rewrite](../../tests/elab/if_cond_rewrite.lean) |
| T12: residual/dead branches, sharing, context, CBV opacity | C6 | [if_cond_sym](../../tests/elab/if_cond_sym.lean), [cbv_if_projection](../../tests/elab/cbv_if_projection.lean) |
| T13: raw Boolean guards and case splits | C9 | [if_cond_split](../../tests/elab/if_cond_split.lean) |
| T14: surviving dependencies and checked failure | C5 | [if_cond_abstraction](../../tests/elab/if_cond_abstraction.lean), [if_cond_wf_dependent](../../tests/elab/if_cond_wf_dependent.lean) |
| T15: automation over conditionals (`omega`, `grind`, `decide`, `vcgen`), lazy branch matching and conditional pattern roots | C6, C9 | [if_cond_automation](../../tests/elab/if_cond_automation.lean), [grind_cond_patterns](../../tests/elab/grind_cond_patterns.lean), [grind_cond_guard_internalization](../../tests/elab/grind_cond_guard_internalization.lean) |
| T16: monotonicity and well-founded preprocessing | C1, C3 | [if_cond_monotone](../../tests/elab/if_cond_monotone.lean), [if_cond_wf_hints](../../tests/elab/if_cond_wf_hints.lean), [if_cond_public_wf](../../tests/elab/if_cond_public_wf.lean) |

Library compatibility is covered by [bif_cond_interface](../../tests/elab/bif_cond_interface.lean) (supported `bif`, Boolean guard syntax and expected-type disambiguation) and [if_cond_library_cleanup](../../tests/elab/if_cond_library_cleanup.lean) (existing Option simplification lemmas and `cond` named arguments).

The guarantee is deliberately bounded: reducible record packaging is supported at the abstraction boundary; arbitrary dependent programs, opaque wrappers, and carrier dependencies are not automatically repaired. No general Boolean inverse reflection or cross-prover equivalence is promised. Performance of the additional targeted abstraction traversal is not characterized by correctness tests.
