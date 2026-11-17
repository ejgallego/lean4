// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.ForallProp
// Imports: public import Init.Grind.Propagator import Init.Simproc import Init.Grind.Norm import Lean.Meta.Tactic.Grind.ForallAnd import Lean.Meta.Tactic.Grind.Internalize import Lean.Meta.Tactic.Grind.Anchor import Lean.Meta.Tactic.Grind.EqResolution import Lean.Meta.Tactic.Grind.SynthInstance public import Lean.Meta.Tactic.Grind.PropagatorAttr import Init.Grind.Lemmas
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Simprocs_add(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstanceMeta_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAnd(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkOr(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_forallImpAnd_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_lift_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_activateTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEMatchTheoremWithKind_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_Grind_isEqFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqTrueProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_alreadyInternalized___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_Grind_getAnchorRefs___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_getAnchor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_AnchorRef_matches(lean_object*, uint64_t);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getSymbolPriorities___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_mkEMatchTheoremUsingSingletonPatterns(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_Grind_eqResolution(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addNewRawFact___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Meta_mkOfEqFalseCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "eq_false_of_imp_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(87, 135, 203, 106, 42, 89, 33, 54)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "imp_eq_of_eq_true_right"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__5_value),LEAN_SCALAR_PTR_LITERAL(142, 104, 37, 206, 110, 37, 230, 45)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "imp_eq_of_eq_true_left"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__8_value),LEAN_SCALAR_PTR_LITERAL(71, 219, 112, 102, 237, 48, 138, 234)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "imp_eq_of_eq_false_left"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__12_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__11_value),LEAN_SCALAR_PTR_LITERAL(71, 59, 221, 124, 3, 234, 184, 248)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__13;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateForallPropUp___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropUp___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropUp___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropUp___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateForallPropUp___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateForallPropUp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateForallPropUp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "forall_propagator"};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropUp___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropUp___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropUp___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropUp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 98, 167, 92, 43, 63, 200, 147)}};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropUp___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateForallPropUp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateForallPropUp___closed__2;
static const lean_string_object l_Lean_Meta_Grind_propagateForallPropUp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropUp___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_propagateForallPropUp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropUp___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_propagateForallPropUp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "forallPropagator"};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropUp___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropUp___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropUp___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__4_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropUp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__5_value),LEAN_SCALAR_PTR_LITERAL(62, 20, 227, 217, 136, 128, 93, 131)}};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropUp___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateForallPropUp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateForallPropUp___closed__7;
static const lean_string_object l_Lean_Meta_Grind_propagateForallPropUp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "q': "};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropUp___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateForallPropUp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateForallPropUp___closed__9;
static const lean_string_object l_Lean_Meta_Grind_propagateForallPropUp___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " for"};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropUp___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateForallPropUp___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateForallPropUp___closed__11;
static const lean_string_object l_Lean_Meta_Grind_propagateForallPropUp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "isEqTrue, "};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropUp___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateForallPropUp___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateForallPropUp___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateForallPropUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateForallPropUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_mkEMatchTheoremWithKind_x27_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_mkEMatchTheoremWithKind_x27_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_mkEMatchTheoremWithKind_x27_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_mkEMatchTheoremWithKind_x27_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_mkEMatchTheoremWithKind_x27_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 104, 189, 185, 38, 81, 44, 71)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(50, 213, 255, 45, 151, 209, 83, 175)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(183, 66, 254, 161, 210, 133, 94, 78)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof_spec__0(uint64_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "failed to create E-match local theorem for"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__1;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 8}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateForallPropDown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "eqResolution"};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropDown___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropDown___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateForallPropUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropDown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 23, 253, 34, 8, 106, 124, 207)}};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropDown___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateForallPropDown___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateForallPropDown___closed__2;
static const lean_string_object l_Lean_Meta_Grind_propagateForallPropDown___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropDown___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateForallPropDown___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateForallPropDown___closed__4;
static const lean_string_object l_Lean_Meta_Grind_propagateForallPropDown___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropDown___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropDown___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__5_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropDown___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_propagateForallPropDown___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "of_forall_eq_false"};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropDown___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropDown___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropDown___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropDown___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__7_value),LEAN_SCALAR_PTR_LITERAL(173, 140, 239, 244, 206, 215, 220, 192)}};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropDown___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_propagateForallPropDown___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "eq_true_of_imp_eq_false"};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropDown___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropDown___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropDown___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropDown___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__10_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__9_value),LEAN_SCALAR_PTR_LITERAL(78, 202, 44, 200, 3, 215, 155, 153)}};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropDown___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateForallPropDown___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateForallPropDown___closed__11;
static const lean_string_object l_Lean_Meta_Grind_propagateForallPropDown___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "eq_false_of_imp_eq_false"};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropDown___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropDown___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropDown___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__13_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateForallPropDown___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__13_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__12_value),LEAN_SCALAR_PTR_LITERAL(224, 133, 152, 168, 210, 40, 234, 100)}};
static const lean_object* l_Lean_Meta_Grind_propagateForallPropDown___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__13_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateForallPropDown___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateForallPropDown___closed__14;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateForallPropDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateForallPropDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateExistsDown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l_Lean_Meta_Grind_propagateExistsDown___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateExistsDown___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateExistsDown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateExistsDown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l_Lean_Meta_Grind_propagateExistsDown___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateExistsDown___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateExistsDown___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateExistsDown___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateExistsDown___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateExistsDown___closed__3;
static const lean_string_object l_Lean_Meta_Grind_propagateExistsDown___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Meta_Grind_propagateExistsDown___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_propagateExistsDown___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateExistsDown___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateExistsDown___closed__4_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Meta_Grind_propagateExistsDown___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_propagateExistsDown___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_propagateExistsDown___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "forall_not_of_not_exists"};
static const lean_object* l_Lean_Meta_Grind_propagateExistsDown___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_propagateExistsDown___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateExistsDown___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateExistsDown___closed__6_value),LEAN_SCALAR_PTR_LITERAL(64, 176, 52, 188, 216, 118, 163, 15)}};
static const lean_object* l_Lean_Meta_Grind_propagateExistsDown___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_propagateExistsDown___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateExistsDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateExistsDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateExistsDown___regBuiltin_Lean_Meta_Grind_propagateExistsDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_1871237267____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateExistsDown___regBuiltin_Lean_Meta_Grind_propagateExistsDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_1871237267____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpForall___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpForall___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_simpForall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_simpForall___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "forall_forall_or"};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__3_value),LEAN_SCALAR_PTR_LITERAL(117, 112, 166, 94, 237, 48, 167, 129)}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_simpForall___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "forall_or_forall"};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__5_value),LEAN_SCALAR_PTR_LITERAL(121, 14, 212, 131, 198, 226, 199, 154)}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_simpForall___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "forall_const"};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 91, 233, 165, 33, 177, 5, 191)}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_simpForall___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Nonempty"};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__9_value),LEAN_SCALAR_PTR_LITERAL(142, 191, 110, 220, 210, 100, 152, 183)}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__10_value;
static const lean_string_object l_Lean_Meta_Grind_simpForall___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "propext"};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__11_value),LEAN_SCALAR_PTR_LITERAL(53, 150, 49, 30, 125, 3, 39, 172)}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpForall___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpForall___closed__13;
static const lean_string_object l_Lean_Meta_Grind_simpForall___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__14_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__14_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__15_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpForall___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpForall___closed__16;
static const lean_string_object l_Lean_Meta_Grind_simpForall___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "imp_self_eq"};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__17_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__18_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__17_value),LEAN_SCALAR_PTR_LITERAL(166, 96, 8, 70, 216, 37, 74, 175)}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__18_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpForall___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpForall___closed__19;
static const lean_string_object l_Lean_Meta_Grind_simpForall___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "implies_true"};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__20 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__20_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__20_value),LEAN_SCALAR_PTR_LITERAL(104, 135, 195, 91, 224, 240, 122, 198)}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__21 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__21_value;
static const lean_string_object l_Lean_Meta_Grind_simpForall___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "imp_false_eq"};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__22 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__22_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__23_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__22_value),LEAN_SCALAR_PTR_LITERAL(217, 93, 174, 85, 201, 7, 0, 65)}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__23_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpForall___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpForall___closed__24;
static const lean_string_object l_Lean_Meta_Grind_simpForall___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "true_imp_eq"};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__25 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__25_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__26_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__25_value),LEAN_SCALAR_PTR_LITERAL(20, 154, 121, 57, 70, 129, 111, 154)}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__26 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__26_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpForall___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpForall___closed__27;
static const lean_string_object l_Lean_Meta_Grind_simpForall___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "false_imp_eq"};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__28 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__28_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__29_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__29_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__28_value),LEAN_SCALAR_PTR_LITERAL(127, 143, 249, 102, 140, 8, 231, 12)}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__29 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__29_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpForall___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpForall___closed__30;
static const lean_string_object l_Lean_Meta_Grind_simpForall___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__31 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__31_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__14_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__32_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__31_value),LEAN_SCALAR_PTR_LITERAL(177, 152, 123, 219, 220, 182, 189, 250)}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__32 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__32_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpForall___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpForall___closed__33;
static const lean_string_object l_Lean_Meta_Grind_simpForall___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "forall_true"};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__34 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__34_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__35_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__35_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__34_value),LEAN_SCALAR_PTR_LITERAL(87, 243, 84, 112, 33, 203, 156, 65)}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__35 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__35_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpForall___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpForall___closed__36;
static lean_once_cell_t l_Lean_Meta_Grind_simpForall___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpForall___closed__37;
static lean_once_cell_t l_Lean_Meta_Grind_simpForall___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpForall___closed__38;
static const lean_string_object l_Lean_Meta_Grind_simpForall___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "forall_false"};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__39 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__39_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpForall___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpForall___closed__39_value),LEAN_SCALAR_PTR_LITERAL(12, 96, 31, 202, 138, 131, 44, 134)}};
static const lean_object* l_Lean_Meta_Grind_simpForall___closed__40 = (const lean_object*)&l_Lean_Meta_Grind_simpForall___closed__40_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpForall___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpForall___closed__41;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__0_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__0_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__0_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "simpForall"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__2_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__2_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__2_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__0_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__2_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__2_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__2_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__2_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(207, 161, 230, 164, 57, 132, 181, 21)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__2_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__2_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__3_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__3_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__3_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_simpExists___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "exists_const"};
static const lean_object* l_Lean_Meta_Grind_simpExists___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 209, 190, 134, 241, 243, 173, 71)}};
static const lean_object* l_Lean_Meta_Grind_simpExists___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_simpExists___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "exists_prop"};
static const lean_object* l_Lean_Meta_Grind_simpExists___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 14, 159, 153, 168, 50, 182, 0)}};
static const lean_object* l_Lean_Meta_Grind_simpExists___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpExists___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpExists___redArg___closed__4;
static const lean_string_object l_Lean_Meta_Grind_simpExists___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_Meta_Grind_simpExists___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_Lean_Meta_Grind_simpExists___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_simpExists___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "exists_and_left"};
static const lean_object* l_Lean_Meta_Grind_simpExists___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(211, 136, 99, 9, 218, 202, 25, 69)}};
static const lean_object* l_Lean_Meta_Grind_simpExists___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_simpExists___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "exists_and_right"};
static const lean_object* l_Lean_Meta_Grind_simpExists___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__10_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(70, 93, 78, 251, 76, 254, 187, 237)}};
static const lean_object* l_Lean_Meta_Grind_simpExists___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__10_value;
static const lean_string_object l_Lean_Meta_Grind_simpExists___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "exists_or"};
static const lean_object* l_Lean_Meta_Grind_simpExists___redArg___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpExists___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__12_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(161, 112, 226, 203, 229, 162, 152, 185)}};
static const lean_object* l_Lean_Meta_Grind_simpExists___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_simpExists___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpExists___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpExists___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpExists(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpExists___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__0_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "simpExists"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__0_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__0_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__0_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__0_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value),LEAN_SCALAR_PTR_LITERAL(220, 43, 168, 20, 165, 143, 80, 231)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__2_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateForallPropDown___closed__6_value),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__2_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__2_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__3_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__2_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__3_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__3_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addForallSimproc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addForallSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__4(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = lean_box(0);
v___x_9_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__3));
v___x_10_ = l_Lean_mkConst(v___x_9_, v___x_8_);
return v___x_10_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__7(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = lean_box(0);
v___x_17_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__6));
v___x_18_ = l_Lean_mkConst(v___x_17_, v___x_16_);
return v___x_18_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__10(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = lean_box(0);
v___x_25_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__9));
v___x_26_ = l_Lean_mkConst(v___x_25_, v___x_24_);
return v___x_26_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__13(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_32_ = lean_box(0);
v___x_33_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__12));
v___x_34_ = l_Lean_mkConst(v___x_33_, v___x_32_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp(lean_object* v_e_35_, lean_object* v_a_36_, lean_object* v_b_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_){
_start:
{
uint8_t v_a_146_; lean_object* v___x_182_; 
v___x_182_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_b_37_, v_a_38_);
if (lean_obj_tag(v___x_182_) == 0)
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_229_; 
v_a_183_ = lean_ctor_get(v___x_182_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_182_);
if (v_isSharedCheck_229_ == 0)
{
v___x_185_ = v___x_182_;
v_isShared_186_ = v_isSharedCheck_229_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_182_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_229_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
uint8_t v___x_187_; 
v___x_187_ = lean_unbox(v_a_183_);
lean_dec(v_a_183_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; lean_object* v___x_190_; 
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
v___x_188_ = lean_box(0);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 0, v___x_188_);
v___x_190_ = v___x_185_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v___x_188_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
return v___x_190_;
}
}
else
{
lean_object* v___x_192_; 
lean_del_object(v___x_185_);
lean_inc_ref(v_a_36_);
v___x_192_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_a_36_, v_a_38_, v_a_42_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_object* v_a_193_; uint8_t v___x_194_; 
v_a_193_ = lean_ctor_get(v___x_192_, 0);
lean_inc(v_a_193_);
lean_dec_ref_known(v___x_192_, 1);
v___x_194_ = lean_unbox(v_a_193_);
if (v___x_194_ == 0)
{
uint8_t v___x_195_; 
v___x_195_ = lean_unbox(v_a_193_);
lean_dec(v_a_193_);
v_a_146_ = v___x_195_;
goto v___jp_145_;
}
else
{
lean_object* v___x_196_; 
lean_dec(v_a_193_);
lean_inc_ref(v_b_37_);
v___x_196_ = l_Lean_Meta_isProp(v_b_37_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; uint8_t v___x_198_; 
v_a_197_ = lean_ctor_get(v___x_196_, 0);
lean_inc(v_a_197_);
lean_dec_ref_known(v___x_196_, 1);
v___x_198_ = lean_unbox(v_a_197_);
if (v___x_198_ == 0)
{
uint8_t v___x_199_; 
v___x_199_ = lean_unbox(v_a_197_);
lean_dec(v_a_197_);
v_a_146_ = v___x_199_;
goto v___jp_145_;
}
else
{
lean_object* v___x_200_; 
lean_dec(v_a_197_);
lean_inc_ref(v_a_36_);
v___x_200_ = l_Lean_Meta_Grind_mkEqFalseProof(v_a_36_, v_a_38_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_object* v_a_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v_a_201_ = lean_ctor_get(v___x_200_, 0);
lean_inc(v_a_201_);
lean_dec_ref_known(v___x_200_, 1);
v___x_202_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__13, &l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__13);
v___x_203_ = l_Lean_mkApp3(v___x_202_, v_a_36_, v_b_37_, v_a_201_);
v___x_204_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_35_, v___x_203_, v_a_38_, v_a_40_, v_a_42_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
return v___x_204_;
}
else
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_212_; 
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
v_a_205_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_212_ == 0)
{
v___x_207_ = v___x_200_;
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_200_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_210_; 
if (v_isShared_208_ == 0)
{
v___x_210_ = v___x_207_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_a_205_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
}
else
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
v_a_213_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_220_ == 0)
{
v___x_215_ = v___x_196_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_196_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_213_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
}
else
{
lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_228_; 
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
v_a_221_ = lean_ctor_get(v___x_192_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_192_);
if (v_isSharedCheck_228_ == 0)
{
v___x_223_ = v___x_192_;
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_dec(v___x_192_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_226_; 
if (v_isShared_224_ == 0)
{
v___x_226_ = v___x_223_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_a_221_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
}
}
}
else
{
lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_237_; 
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
v_a_230_ = lean_ctor_get(v___x_182_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_182_);
if (v_isSharedCheck_237_ == 0)
{
v___x_232_ = v___x_182_;
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_dec(v___x_182_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_235_; 
if (v_isShared_233_ == 0)
{
v___x_235_ = v___x_232_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_a_230_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
v___jp_49_:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = lean_box(0);
v___x_51_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
return v___x_51_;
}
v___jp_52_:
{
lean_object* v___x_53_; 
lean_inc_ref(v_b_37_);
v___x_53_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_b_37_, v_a_38_, v_a_42_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
if (lean_obj_tag(v___x_53_) == 0)
{
lean_object* v_a_54_; uint8_t v___x_55_; 
v_a_54_ = lean_ctor_get(v___x_53_, 0);
lean_inc(v_a_54_);
lean_dec_ref_known(v___x_53_, 1);
v___x_55_ = lean_unbox(v_a_54_);
lean_dec(v_a_54_);
if (v___x_55_ == 0)
{
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
goto v___jp_49_;
}
else
{
lean_object* v___x_56_; 
lean_inc_ref(v_e_35_);
v___x_56_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_35_, v_a_38_, v_a_42_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
if (lean_obj_tag(v___x_56_) == 0)
{
lean_object* v_a_57_; uint8_t v___x_58_; 
v_a_57_ = lean_ctor_get(v___x_56_, 0);
lean_inc(v_a_57_);
lean_dec_ref_known(v___x_56_, 1);
v___x_58_ = lean_unbox(v_a_57_);
lean_dec(v_a_57_);
if (v___x_58_ == 0)
{
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
goto v___jp_49_;
}
else
{
lean_object* v___x_59_; 
lean_inc_ref(v_a_36_);
v___x_59_ = l_Lean_Meta_isProp(v_a_36_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
if (lean_obj_tag(v___x_59_) == 0)
{
lean_object* v_a_60_; uint8_t v___x_61_; 
v_a_60_ = lean_ctor_get(v___x_59_, 0);
lean_inc(v_a_60_);
lean_dec_ref_known(v___x_59_, 1);
v___x_61_ = lean_unbox(v_a_60_);
lean_dec(v_a_60_);
if (v___x_61_ == 0)
{
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
goto v___jp_49_;
}
else
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_35_, v_a_38_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
if (lean_obj_tag(v___x_62_) == 0)
{
lean_object* v_a_63_; lean_object* v___x_64_; 
v_a_63_ = lean_ctor_get(v___x_62_, 0);
lean_inc(v_a_63_);
lean_dec_ref_known(v___x_62_, 1);
lean_inc_ref(v_b_37_);
v___x_64_ = l_Lean_Meta_Grind_mkEqFalseProof(v_b_37_, v_a_38_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
if (lean_obj_tag(v___x_64_) == 0)
{
lean_object* v_a_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v_a_65_ = lean_ctor_get(v___x_64_, 0);
lean_inc(v_a_65_);
lean_dec_ref_known(v___x_64_, 1);
v___x_66_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__4, &l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__4);
lean_inc_ref(v_a_36_);
v___x_67_ = l_Lean_mkApp4(v___x_66_, v_a_36_, v_b_37_, v_a_63_, v_a_65_);
v___x_68_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_a_36_, v___x_67_, v_a_38_, v_a_40_, v_a_42_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
return v___x_68_;
}
else
{
lean_object* v_a_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_76_; 
lean_dec(v_a_63_);
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
v_a_69_ = lean_ctor_get(v___x_64_, 0);
v_isSharedCheck_76_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_76_ == 0)
{
v___x_71_ = v___x_64_;
v_isShared_72_ = v_isSharedCheck_76_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_a_69_);
lean_dec(v___x_64_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_76_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v___x_74_; 
if (v_isShared_72_ == 0)
{
v___x_74_ = v___x_71_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v_a_69_);
v___x_74_ = v_reuseFailAlloc_75_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
return v___x_74_;
}
}
}
}
else
{
lean_object* v_a_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_84_; 
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
v_a_77_ = lean_ctor_get(v___x_62_, 0);
v_isSharedCheck_84_ = !lean_is_exclusive(v___x_62_);
if (v_isSharedCheck_84_ == 0)
{
v___x_79_ = v___x_62_;
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_a_77_);
lean_dec(v___x_62_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_82_; 
if (v_isShared_80_ == 0)
{
v___x_82_ = v___x_79_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_a_77_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
}
}
}
}
}
else
{
lean_object* v_a_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_92_; 
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
v_a_85_ = lean_ctor_get(v___x_59_, 0);
v_isSharedCheck_92_ = !lean_is_exclusive(v___x_59_);
if (v_isSharedCheck_92_ == 0)
{
v___x_87_ = v___x_59_;
v_isShared_88_ = v_isSharedCheck_92_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_a_85_);
lean_dec(v___x_59_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_92_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v___x_90_; 
if (v_isShared_88_ == 0)
{
v___x_90_ = v___x_87_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v_a_85_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
}
}
else
{
lean_object* v_a_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_100_; 
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
v_a_93_ = lean_ctor_get(v___x_56_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v___x_56_);
if (v_isSharedCheck_100_ == 0)
{
v___x_95_ = v___x_56_;
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_a_93_);
lean_dec(v___x_56_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_98_; 
if (v_isShared_96_ == 0)
{
v___x_98_ = v___x_95_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_a_93_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
}
}
else
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_108_; 
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
v_a_101_ = lean_ctor_get(v___x_53_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_53_);
if (v_isSharedCheck_108_ == 0)
{
v___x_103_ = v___x_53_;
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_53_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_106_; 
if (v_isShared_104_ == 0)
{
v___x_106_ = v___x_103_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_a_101_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
v___jp_109_:
{
lean_object* v___x_110_; 
lean_inc_ref(v_b_37_);
v___x_110_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_b_37_, v_a_38_, v_a_42_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v_a_111_; uint8_t v___x_112_; 
v_a_111_ = lean_ctor_get(v___x_110_, 0);
lean_inc(v_a_111_);
lean_dec_ref_known(v___x_110_, 1);
v___x_112_ = lean_unbox(v_a_111_);
lean_dec(v_a_111_);
if (v___x_112_ == 0)
{
goto v___jp_52_;
}
else
{
lean_object* v___x_113_; 
lean_inc_ref(v_a_36_);
v___x_113_ = l_Lean_Meta_isProp(v_a_36_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; uint8_t v___x_115_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
lean_inc(v_a_114_);
lean_dec_ref_known(v___x_113_, 1);
v___x_115_ = lean_unbox(v_a_114_);
lean_dec(v_a_114_);
if (v___x_115_ == 0)
{
goto v___jp_52_;
}
else
{
lean_object* v___x_116_; 
lean_inc_ref(v_b_37_);
v___x_116_ = l_Lean_Meta_Grind_mkEqTrueProof(v_b_37_, v_a_38_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v_a_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v_a_117_ = lean_ctor_get(v___x_116_, 0);
lean_inc(v_a_117_);
lean_dec_ref_known(v___x_116_, 1);
v___x_118_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__7, &l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__7);
v___x_119_ = l_Lean_mkApp3(v___x_118_, v_a_36_, v_b_37_, v_a_117_);
v___x_120_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_35_, v___x_119_, v_a_38_, v_a_40_, v_a_42_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
return v___x_120_;
}
else
{
lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_128_; 
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
v_a_121_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_128_ == 0)
{
v___x_123_ = v___x_116_;
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_116_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_126_; 
if (v_isShared_124_ == 0)
{
v___x_126_ = v___x_123_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_121_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
}
}
else
{
lean_object* v_a_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_136_; 
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
v_a_129_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_136_ == 0)
{
v___x_131_ = v___x_113_;
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_a_129_);
lean_dec(v___x_113_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___x_134_; 
if (v_isShared_132_ == 0)
{
v___x_134_ = v___x_131_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_a_129_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
}
}
else
{
lean_object* v_a_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_144_; 
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
v_a_137_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_144_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_144_ == 0)
{
v___x_139_ = v___x_110_;
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_a_137_);
lean_dec(v___x_110_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_142_; 
if (v_isShared_140_ == 0)
{
v___x_142_ = v___x_139_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v_a_137_);
v___x_142_ = v_reuseFailAlloc_143_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
return v___x_142_;
}
}
}
}
v___jp_145_:
{
lean_object* v___x_147_; 
lean_inc_ref(v_a_36_);
v___x_147_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_a_36_, v_a_38_, v_a_42_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v_a_148_; uint8_t v___x_149_; 
v_a_148_ = lean_ctor_get(v___x_147_, 0);
lean_inc(v_a_148_);
lean_dec_ref_known(v___x_147_, 1);
v___x_149_ = lean_unbox(v_a_148_);
lean_dec(v_a_148_);
if (v___x_149_ == 0)
{
goto v___jp_109_;
}
else
{
lean_object* v___x_150_; 
lean_inc_ref(v_b_37_);
v___x_150_ = l_Lean_Meta_isProp(v_b_37_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; uint8_t v___x_152_; 
v_a_151_ = lean_ctor_get(v___x_150_, 0);
lean_inc(v_a_151_);
lean_dec_ref_known(v___x_150_, 1);
v___x_152_ = lean_unbox(v_a_151_);
lean_dec(v_a_151_);
if (v___x_152_ == 0)
{
goto v___jp_109_;
}
else
{
lean_object* v___x_153_; 
lean_inc_ref(v_a_36_);
v___x_153_ = l_Lean_Meta_Grind_mkEqTrueProof(v_a_36_, v_a_38_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
if (lean_obj_tag(v___x_153_) == 0)
{
lean_object* v_a_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v_a_154_ = lean_ctor_get(v___x_153_, 0);
lean_inc(v_a_154_);
lean_dec_ref_known(v___x_153_, 1);
v___x_155_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__10, &l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__10);
lean_inc_ref(v_b_37_);
v___x_156_ = l_Lean_mkApp3(v___x_155_, v_a_36_, v_b_37_, v_a_154_);
v___x_157_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_35_, v_b_37_, v___x_156_, v_a_146_, v_a_38_, v_a_40_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
return v___x_157_;
}
else
{
lean_object* v_a_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_165_; 
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
v_a_158_ = lean_ctor_get(v___x_153_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_165_ == 0)
{
v___x_160_ = v___x_153_;
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_a_158_);
lean_dec(v___x_153_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_163_; 
if (v_isShared_161_ == 0)
{
v___x_163_ = v___x_160_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_a_158_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
}
}
else
{
lean_object* v_a_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_173_; 
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
v_a_166_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_173_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_173_ == 0)
{
v___x_168_ = v___x_150_;
v_isShared_169_ = v_isSharedCheck_173_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_a_166_);
lean_dec(v___x_150_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_173_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_171_; 
if (v_isShared_169_ == 0)
{
v___x_171_ = v___x_168_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_a_166_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
}
}
else
{
lean_object* v_a_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_181_; 
lean_dec_ref(v_b_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_e_35_);
v_a_174_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_181_ == 0)
{
v___x_176_ = v___x_147_;
v_isShared_177_ = v_isSharedCheck_181_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_a_174_);
lean_dec(v___x_147_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_181_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_179_; 
if (v_isShared_177_ == 0)
{
v___x_179_ = v___x_176_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v_a_174_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___boxed(lean_object* v_e_238_, lean_object* v_a_239_, lean_object* v_b_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp(v_e_238_, v_a_239_, v_b_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_, v_a_247_, v_a_248_, v_a_249_, v_a_250_);
lean_dec(v_a_250_);
lean_dec_ref(v_a_249_);
lean_dec(v_a_248_);
lean_dec_ref(v_a_247_);
lean_dec(v_a_246_);
lean_dec_ref(v_a_245_);
lean_dec(v_a_244_);
lean_dec_ref(v_a_243_);
lean_dec(v_a_242_);
lean_dec(v_a_241_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateForallPropUp___lam__0(lean_object* v_cls_256_, lean_object* v_____do__lift_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_){
_start:
{
lean_object* v_toCold_269_; lean_object* v_options_270_; uint8_t v_hasTrace_271_; 
v_toCold_269_ = lean_ctor_get(v___y_266_, 0);
v_options_270_ = lean_ctor_get(v_toCold_269_, 2);
v_hasTrace_271_ = lean_ctor_get_uint8(v_options_270_, sizeof(void*)*1);
if (v_hasTrace_271_ == 0)
{
lean_object* v___x_272_; lean_object* v___x_273_; 
lean_dec(v_cls_256_);
v___x_272_ = lean_box(v_hasTrace_271_);
v___x_273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_273_, 0, v___x_272_);
return v___x_273_;
}
else
{
lean_object* v___x_274_; lean_object* v___x_275_; uint8_t v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_274_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropUp___lam__0___closed__1));
v___x_275_ = l_Lean_Name_append(v___x_274_, v_cls_256_);
v___x_276_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_257_, v_options_270_, v___x_275_);
lean_dec(v___x_275_);
v___x_277_ = lean_box(v___x_276_);
v___x_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
return v___x_278_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateForallPropUp___lam__0___boxed(lean_object* v_cls_279_, lean_object* v_____do__lift_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_Meta_Grind_propagateForallPropUp___lam__0(v_cls_279_, v_____do__lift_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
lean_dec(v___y_284_);
lean_dec_ref(v___y_283_);
lean_dec(v___y_282_);
lean_dec(v___y_281_);
lean_dec_ref(v_____do__lift_280_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0_spec__0(lean_object* v_msgData_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v___x_299_; lean_object* v_env_300_; uint8_t v___x_301_; lean_object* v_env_302_; lean_object* v___x_303_; lean_object* v_toCold_304_; lean_object* v_mctx_305_; lean_object* v_lctx_306_; lean_object* v_options_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_299_ = lean_st_ref_get(v___y_297_);
v_env_300_ = lean_ctor_get(v___x_299_, 0);
lean_inc_ref(v_env_300_);
lean_dec(v___x_299_);
v___x_301_ = 0;
v_env_302_ = l_Lean_Environment_setRecordingDeps(v_env_300_, v___x_301_);
v___x_303_ = lean_st_ref_get(v___y_295_);
v_toCold_304_ = lean_ctor_get(v___y_296_, 0);
v_mctx_305_ = lean_ctor_get(v___x_303_, 0);
lean_inc_ref(v_mctx_305_);
lean_dec(v___x_303_);
v_lctx_306_ = lean_ctor_get(v___y_294_, 2);
v_options_307_ = lean_ctor_get(v_toCold_304_, 2);
lean_inc_ref(v_options_307_);
lean_inc_ref(v_lctx_306_);
v___x_308_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_308_, 0, v_env_302_);
lean_ctor_set(v___x_308_, 1, v_mctx_305_);
lean_ctor_set(v___x_308_, 2, v_lctx_306_);
lean_ctor_set(v___x_308_, 3, v_options_307_);
v___x_309_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
lean_ctor_set(v___x_309_, 1, v_msgData_293_);
v___x_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_310_, 0, v___x_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0_spec__0___boxed(lean_object* v_msgData_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0_spec__0(v_msgData_311_, v___y_312_, v___y_313_, v___y_314_, v___y_315_);
lean_dec(v___y_315_);
lean_dec_ref(v___y_314_);
lean_dec(v___y_313_);
lean_dec_ref(v___y_312_);
return v_res_317_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_318_; double v___x_319_; 
v___x_318_ = lean_unsigned_to_nat(0u);
v___x_319_ = lean_float_of_nat(v___x_318_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg(lean_object* v_cls_323_, lean_object* v_msg_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
lean_object* v_ref_330_; lean_object* v___x_331_; lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_377_; 
v_ref_330_ = lean_ctor_get(v___y_327_, 2);
v___x_331_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0_spec__0(v_msg_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
v_a_332_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_377_ == 0)
{
v___x_334_ = v___x_331_;
v_isShared_335_ = v_isSharedCheck_377_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_331_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_377_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; lean_object* v_traceState_337_; lean_object* v_env_338_; lean_object* v_nextMacroScope_339_; lean_object* v_ngen_340_; lean_object* v_auxDeclNGen_341_; lean_object* v_cache_342_; lean_object* v_recordedDeps_343_; lean_object* v_messages_344_; lean_object* v_infoState_345_; lean_object* v_snapshotTasks_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_376_; 
v___x_336_ = lean_st_ref_take(v___y_328_);
v_traceState_337_ = lean_ctor_get(v___x_336_, 4);
v_env_338_ = lean_ctor_get(v___x_336_, 0);
v_nextMacroScope_339_ = lean_ctor_get(v___x_336_, 1);
v_ngen_340_ = lean_ctor_get(v___x_336_, 2);
v_auxDeclNGen_341_ = lean_ctor_get(v___x_336_, 3);
v_cache_342_ = lean_ctor_get(v___x_336_, 5);
v_recordedDeps_343_ = lean_ctor_get(v___x_336_, 6);
v_messages_344_ = lean_ctor_get(v___x_336_, 7);
v_infoState_345_ = lean_ctor_get(v___x_336_, 8);
v_snapshotTasks_346_ = lean_ctor_get(v___x_336_, 9);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_376_ == 0)
{
v___x_348_ = v___x_336_;
v_isShared_349_ = v_isSharedCheck_376_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_snapshotTasks_346_);
lean_inc(v_infoState_345_);
lean_inc(v_messages_344_);
lean_inc(v_recordedDeps_343_);
lean_inc(v_cache_342_);
lean_inc(v_traceState_337_);
lean_inc(v_auxDeclNGen_341_);
lean_inc(v_ngen_340_);
lean_inc(v_nextMacroScope_339_);
lean_inc(v_env_338_);
lean_dec(v___x_336_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_376_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
uint64_t v_tid_350_; lean_object* v_traces_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_375_; 
v_tid_350_ = lean_ctor_get_uint64(v_traceState_337_, sizeof(void*)*1);
v_traces_351_ = lean_ctor_get(v_traceState_337_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v_traceState_337_);
if (v_isSharedCheck_375_ == 0)
{
v___x_353_ = v_traceState_337_;
v_isShared_354_ = v_isSharedCheck_375_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_traces_351_);
lean_dec(v_traceState_337_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_375_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_355_; lean_object* v___x_356_; double v___x_357_; uint8_t v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_366_; 
v___x_355_ = lean_box(0);
v___x_356_ = lean_box(0);
v___x_357_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___closed__0);
v___x_358_ = 0;
v___x_359_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___closed__1));
v___x_360_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_360_, 0, v_cls_323_);
lean_ctor_set(v___x_360_, 1, v___x_356_);
lean_ctor_set(v___x_360_, 2, v___x_359_);
lean_ctor_set_float(v___x_360_, sizeof(void*)*3, v___x_357_);
lean_ctor_set_float(v___x_360_, sizeof(void*)*3 + 8, v___x_357_);
lean_ctor_set_uint8(v___x_360_, sizeof(void*)*3 + 16, v___x_358_);
v___x_361_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___closed__2));
v___x_362_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_362_, 0, v___x_360_);
lean_ctor_set(v___x_362_, 1, v_a_332_);
lean_ctor_set(v___x_362_, 2, v___x_361_);
lean_inc(v_ref_330_);
v___x_363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_363_, 0, v_ref_330_);
lean_ctor_set(v___x_363_, 1, v___x_362_);
v___x_364_ = l_Lean_PersistentArray_push___redArg(v_traces_351_, v___x_363_);
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 0, v___x_364_);
v___x_366_ = v___x_353_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v___x_364_);
lean_ctor_set_uint64(v_reuseFailAlloc_374_, sizeof(void*)*1, v_tid_350_);
v___x_366_ = v_reuseFailAlloc_374_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
lean_object* v___x_368_; 
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 4, v___x_366_);
v___x_368_ = v___x_348_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_env_338_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v_nextMacroScope_339_);
lean_ctor_set(v_reuseFailAlloc_373_, 2, v_ngen_340_);
lean_ctor_set(v_reuseFailAlloc_373_, 3, v_auxDeclNGen_341_);
lean_ctor_set(v_reuseFailAlloc_373_, 4, v___x_366_);
lean_ctor_set(v_reuseFailAlloc_373_, 5, v_cache_342_);
lean_ctor_set(v_reuseFailAlloc_373_, 6, v_recordedDeps_343_);
lean_ctor_set(v_reuseFailAlloc_373_, 7, v_messages_344_);
lean_ctor_set(v_reuseFailAlloc_373_, 8, v_infoState_345_);
lean_ctor_set(v_reuseFailAlloc_373_, 9, v_snapshotTasks_346_);
v___x_368_ = v_reuseFailAlloc_373_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
lean_object* v___x_369_; lean_object* v___x_371_; 
v___x_369_ = lean_st_ref_put(v___y_328_, v___x_368_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 0, v___x_355_);
v___x_371_ = v___x_334_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_355_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg___boxed(lean_object* v_cls_378_, lean_object* v_msg_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg(v_cls_378_, v_msg_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_);
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
return v_res_385_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateForallPropUp___closed__2(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_391_ = lean_box(0);
v___x_392_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropUp___closed__1));
v___x_393_ = l_Lean_mkConst(v___x_392_, v___x_391_);
return v___x_393_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateForallPropUp___closed__7(void){
_start:
{
lean_object* v_cls_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v_cls_401_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropUp___closed__6));
v___x_402_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropUp___lam__0___closed__1));
v___x_403_ = l_Lean_Name_append(v___x_402_, v_cls_401_);
return v___x_403_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateForallPropUp___closed__9(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropUp___closed__8));
v___x_406_ = l_Lean_stringToMessageData(v___x_405_);
return v___x_406_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateForallPropUp___closed__11(void){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_408_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropUp___closed__10));
v___x_409_ = l_Lean_stringToMessageData(v___x_408_);
return v___x_409_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateForallPropUp___closed__13(void){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropUp___closed__12));
v___x_412_ = l_Lean_stringToMessageData(v___x_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateForallPropUp(lean_object* v_e_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_){
_start:
{
if (lean_obj_tag(v_e_413_) == 7)
{
lean_object* v_binderName_425_; lean_object* v_binderType_426_; lean_object* v_body_427_; uint8_t v_binderInfo_428_; lean_object* v___y_430_; lean_object* v___y_431_; uint8_t v___y_432_; lean_object* v___y_433_; lean_object* v___y_434_; lean_object* v___y_435_; lean_object* v___y_436_; lean_object* v___y_437_; lean_object* v___y_438_; lean_object* v___y_439_; lean_object* v___y_440_; lean_object* v_toCold_454_; lean_object* v_inheritedTraceOptions_455_; lean_object* v_cls_456_; uint8_t v___y_458_; lean_object* v___y_459_; lean_object* v___y_460_; lean_object* v___y_461_; lean_object* v___y_462_; lean_object* v___y_463_; lean_object* v___y_464_; lean_object* v___y_465_; lean_object* v___y_466_; lean_object* v___y_467_; lean_object* v___y_468_; lean_object* v___y_521_; lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___y_524_; lean_object* v___y_525_; lean_object* v___y_526_; lean_object* v___y_527_; lean_object* v___y_528_; lean_object* v___y_529_; lean_object* v___y_530_; lean_object* v___x_563_; lean_object* v_a_564_; uint8_t v___x_565_; 
v_binderName_425_ = lean_ctor_get(v_e_413_, 0);
v_binderType_426_ = lean_ctor_get(v_e_413_, 1);
v_body_427_ = lean_ctor_get(v_e_413_, 2);
v_binderInfo_428_ = lean_ctor_get_uint8(v_e_413_, sizeof(void*)*3 + 8);
v_toCold_454_ = lean_ctor_get(v_a_422_, 0);
v_inheritedTraceOptions_455_ = lean_ctor_get(v_toCold_454_, 11);
v_cls_456_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropUp___closed__6));
v___x_563_ = l_Lean_Meta_Grind_propagateForallPropUp___lam__0(v_cls_456_, v_inheritedTraceOptions_455_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_, v_a_421_, v_a_422_, v_a_423_);
v_a_564_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_a_564_);
lean_dec_ref(v___x_563_);
v___x_565_ = lean_unbox(v_a_564_);
lean_dec(v_a_564_);
if (v___x_565_ == 0)
{
v___y_521_ = v_a_414_;
v___y_522_ = v_a_415_;
v___y_523_ = v_a_416_;
v___y_524_ = v_a_417_;
v___y_525_ = v_a_418_;
v___y_526_ = v_a_419_;
v___y_527_ = v_a_420_;
v___y_528_ = v_a_421_;
v___y_529_ = v_a_422_;
v___y_530_ = v_a_423_;
goto v___jp_520_;
}
else
{
lean_object* v___x_566_; 
v___x_566_ = l_Lean_Meta_Grind_updateLastTag(v_a_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_, v_a_421_, v_a_422_, v_a_423_);
if (lean_obj_tag(v___x_566_) == 0)
{
lean_object* v___x_567_; lean_object* v___x_568_; 
lean_dec_ref_known(v___x_566_, 1);
lean_inc_ref(v_e_413_);
v___x_567_ = l_Lean_MessageData_ofExpr(v_e_413_);
v___x_568_ = l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg(v_cls_456_, v___x_567_, v_a_420_, v_a_421_, v_a_422_, v_a_423_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_dec_ref_known(v___x_568_, 1);
v___y_521_ = v_a_414_;
v___y_522_ = v_a_415_;
v___y_523_ = v_a_416_;
v___y_524_ = v_a_417_;
v___y_525_ = v_a_418_;
v___y_526_ = v_a_419_;
v___y_527_ = v_a_420_;
v___y_528_ = v_a_421_;
v___y_529_ = v_a_422_;
v___y_530_ = v_a_423_;
goto v___jp_520_;
}
else
{
lean_dec_ref_known(v_e_413_, 3);
return v___x_568_;
}
}
else
{
lean_dec_ref_known(v_e_413_, 3);
return v___x_566_;
}
}
v___jp_429_:
{
lean_object* v___x_441_; 
v___x_441_ = l_Lean_Meta_Simp_Result_getProof(v___y_430_, v___y_437_, v___y_438_, v___y_439_, v___y_440_);
if (lean_obj_tag(v___x_441_) == 0)
{
lean_object* v_a_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v_a_442_ = lean_ctor_get(v___x_441_, 0);
lean_inc(v_a_442_);
lean_dec_ref_known(v___x_441_, 1);
v___x_443_ = lean_obj_once(&l_Lean_Meta_Grind_propagateForallPropUp___closed__2, &l_Lean_Meta_Grind_propagateForallPropUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateForallPropUp___closed__2);
lean_inc_ref(v___y_433_);
lean_inc_ref(v_binderType_426_);
v___x_444_ = l_Lean_mkApp5(v___x_443_, v_binderType_426_, v___y_431_, v___y_433_, v___y_434_, v_a_442_);
v___x_445_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_413_, v___y_433_, v___x_444_, v___y_432_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_);
return v___x_445_;
}
else
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_453_; 
lean_dec_ref(v___y_434_);
lean_dec_ref(v___y_433_);
lean_dec_ref(v___y_431_);
lean_dec_ref_known(v_e_413_, 3);
v_a_446_ = lean_ctor_get(v___x_441_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_453_ == 0)
{
v___x_448_ = v___x_441_;
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___x_441_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_a_446_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
}
v___jp_457_:
{
lean_object* v___x_469_; 
lean_inc_ref(v_binderType_426_);
v___x_469_ = l_Lean_Meta_Grind_mkEqTrueProof(v_binderType_426_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v_a_470_ = lean_ctor_get(v___x_469_, 0);
lean_inc_n(v_a_470_, 2);
lean_dec_ref_known(v___x_469_, 1);
lean_inc_ref(v_binderType_426_);
v___x_471_ = l_Lean_Meta_mkOfEqTrueCore(v_binderType_426_, v_a_470_);
v___x_472_ = lean_expr_instantiate1(v_body_427_, v___x_471_);
lean_dec_ref(v___x_471_);
lean_inc(v___y_468_);
lean_inc_ref(v___y_467_);
lean_inc(v___y_466_);
lean_inc_ref(v___y_465_);
lean_inc(v___y_464_);
lean_inc_ref(v___y_463_);
lean_inc(v___y_462_);
lean_inc_ref(v___y_461_);
lean_inc(v___y_460_);
lean_inc(v___y_459_);
v___x_473_ = lean_grind_preprocess(v___x_472_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v_a_474_; lean_object* v_expr_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v_a_474_ = lean_ctor_get(v___x_473_, 0);
lean_inc(v_a_474_);
lean_dec_ref_known(v___x_473_, 1);
v_expr_475_ = lean_ctor_get(v_a_474_, 0);
lean_inc_ref(v_expr_475_);
lean_inc_ref(v_body_427_);
lean_inc_ref(v_binderType_426_);
lean_inc(v_binderName_425_);
v___x_476_ = l_Lean_mkLambda(v_binderName_425_, v_binderInfo_428_, v_binderType_426_, v_body_427_);
v___x_477_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_413_, v___y_459_);
if (lean_obj_tag(v___x_477_) == 0)
{
lean_object* v_a_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v_a_478_ = lean_ctor_get(v___x_477_, 0);
lean_inc(v_a_478_);
lean_dec_ref_known(v___x_477_, 1);
v___x_479_ = lean_box(0);
lean_inc(v___y_468_);
lean_inc_ref(v___y_467_);
lean_inc(v___y_466_);
lean_inc_ref(v___y_465_);
lean_inc(v___y_464_);
lean_inc_ref(v___y_463_);
lean_inc(v___y_462_);
lean_inc_ref(v___y_461_);
lean_inc(v___y_460_);
lean_inc(v___y_459_);
lean_inc_ref(v_expr_475_);
v___x_480_ = lean_grind_internalize(v_expr_475_, v_a_478_, v___x_479_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_toCold_481_; lean_object* v_options_482_; uint8_t v_hasTrace_483_; 
lean_dec_ref_known(v___x_480_, 1);
v_toCold_481_ = lean_ctor_get(v___y_467_, 0);
v_options_482_ = lean_ctor_get(v_toCold_481_, 2);
v_hasTrace_483_ = lean_ctor_get_uint8(v_options_482_, sizeof(void*)*1);
if (v_hasTrace_483_ == 0)
{
v___y_430_ = v_a_474_;
v___y_431_ = v___x_476_;
v___y_432_ = v___y_458_;
v___y_433_ = v_expr_475_;
v___y_434_ = v_a_470_;
v___y_435_ = v___y_459_;
v___y_436_ = v___y_461_;
v___y_437_ = v___y_465_;
v___y_438_ = v___y_466_;
v___y_439_ = v___y_467_;
v___y_440_ = v___y_468_;
goto v___jp_429_;
}
else
{
lean_object* v_inheritedTraceOptions_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v_inheritedTraceOptions_484_ = lean_ctor_get(v_toCold_481_, 11);
v___x_485_ = lean_obj_once(&l_Lean_Meta_Grind_propagateForallPropUp___closed__7, &l_Lean_Meta_Grind_propagateForallPropUp___closed__7_once, _init_l_Lean_Meta_Grind_propagateForallPropUp___closed__7);
v___x_486_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_484_, v_options_482_, v___x_485_);
if (v___x_486_ == 0)
{
v___y_430_ = v_a_474_;
v___y_431_ = v___x_476_;
v___y_432_ = v___y_458_;
v___y_433_ = v_expr_475_;
v___y_434_ = v_a_470_;
v___y_435_ = v___y_459_;
v___y_436_ = v___y_461_;
v___y_437_ = v___y_465_;
v___y_438_ = v___y_466_;
v___y_439_ = v___y_467_;
v___y_440_ = v___y_468_;
goto v___jp_429_;
}
else
{
lean_object* v___x_487_; 
v___x_487_ = l_Lean_Meta_Grind_updateLastTag(v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
lean_dec_ref_known(v___x_487_, 1);
v___x_488_ = lean_obj_once(&l_Lean_Meta_Grind_propagateForallPropUp___closed__9, &l_Lean_Meta_Grind_propagateForallPropUp___closed__9_once, _init_l_Lean_Meta_Grind_propagateForallPropUp___closed__9);
lean_inc_ref(v_expr_475_);
v___x_489_ = l_Lean_MessageData_ofExpr(v_expr_475_);
v___x_490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_490_, 0, v___x_488_);
lean_ctor_set(v___x_490_, 1, v___x_489_);
v___x_491_ = lean_obj_once(&l_Lean_Meta_Grind_propagateForallPropUp___closed__11, &l_Lean_Meta_Grind_propagateForallPropUp___closed__11_once, _init_l_Lean_Meta_Grind_propagateForallPropUp___closed__11);
v___x_492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_490_);
lean_ctor_set(v___x_492_, 1, v___x_491_);
lean_inc_ref(v_e_413_);
v___x_493_ = l_Lean_indentExpr(v_e_413_);
v___x_494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_492_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
v___x_495_ = l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg(v_cls_456_, v___x_494_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
if (lean_obj_tag(v___x_495_) == 0)
{
lean_dec_ref_known(v___x_495_, 1);
v___y_430_ = v_a_474_;
v___y_431_ = v___x_476_;
v___y_432_ = v___y_458_;
v___y_433_ = v_expr_475_;
v___y_434_ = v_a_470_;
v___y_435_ = v___y_459_;
v___y_436_ = v___y_461_;
v___y_437_ = v___y_465_;
v___y_438_ = v___y_466_;
v___y_439_ = v___y_467_;
v___y_440_ = v___y_468_;
goto v___jp_429_;
}
else
{
lean_dec_ref(v___x_476_);
lean_dec_ref(v_expr_475_);
lean_dec(v_a_474_);
lean_dec(v_a_470_);
lean_dec_ref_known(v_e_413_, 3);
return v___x_495_;
}
}
else
{
lean_dec_ref(v___x_476_);
lean_dec_ref(v_expr_475_);
lean_dec(v_a_474_);
lean_dec(v_a_470_);
lean_dec_ref_known(v_e_413_, 3);
return v___x_487_;
}
}
}
}
else
{
lean_dec_ref(v___x_476_);
lean_dec_ref(v_expr_475_);
lean_dec(v_a_474_);
lean_dec(v_a_470_);
lean_dec_ref_known(v_e_413_, 3);
return v___x_480_;
}
}
else
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_503_; 
lean_dec_ref(v___x_476_);
lean_dec_ref(v_expr_475_);
lean_dec(v_a_474_);
lean_dec(v_a_470_);
lean_dec_ref_known(v_e_413_, 3);
v_a_496_ = lean_ctor_get(v___x_477_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_477_);
if (v_isSharedCheck_503_ == 0)
{
v___x_498_ = v___x_477_;
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_477_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_501_; 
if (v_isShared_499_ == 0)
{
v___x_501_ = v___x_498_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_a_496_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
}
else
{
lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_511_; 
lean_dec(v_a_470_);
lean_dec_ref_known(v_e_413_, 3);
v_a_504_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_511_ == 0)
{
v___x_506_ = v___x_473_;
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_a_504_);
lean_dec(v___x_473_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_509_; 
if (v_isShared_507_ == 0)
{
v___x_509_ = v___x_506_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_a_504_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
}
else
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_519_; 
lean_dec_ref_known(v_e_413_, 3);
v_a_512_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_519_ == 0)
{
v___x_514_ = v___x_469_;
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_469_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_517_; 
if (v_isShared_515_ == 0)
{
v___x_517_ = v___x_514_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_512_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
v___jp_520_:
{
uint8_t v___x_531_; 
v___x_531_ = l_Lean_Expr_hasLooseBVars(v_body_427_);
if (v___x_531_ == 0)
{
lean_object* v___x_532_; 
lean_inc_ref(v_body_427_);
lean_inc_ref(v_binderType_426_);
v___x_532_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp(v_e_413_, v_binderType_426_, v_body_427_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
return v___x_532_;
}
else
{
uint8_t v___x_533_; lean_object* v___x_534_; 
v___x_533_ = 0;
lean_inc_ref(v_binderType_426_);
v___x_534_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_binderType_426_, v___y_521_, v___y_525_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
if (lean_obj_tag(v___x_534_) == 0)
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_554_; 
v_a_535_ = lean_ctor_get(v___x_534_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_554_ == 0)
{
v___x_537_ = v___x_534_;
v_isShared_538_ = v_isSharedCheck_554_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_534_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_554_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
uint8_t v___x_539_; 
v___x_539_ = lean_unbox(v_a_535_);
lean_dec(v_a_535_);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; lean_object* v___x_542_; 
lean_dec_ref_known(v_e_413_, 3);
v___x_540_ = lean_box(0);
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 0, v___x_540_);
v___x_542_ = v___x_537_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v___x_540_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
else
{
lean_object* v_toCold_544_; lean_object* v_inheritedTraceOptions_545_; lean_object* v___x_546_; lean_object* v_a_547_; uint8_t v___x_548_; 
lean_del_object(v___x_537_);
v_toCold_544_ = lean_ctor_get(v___y_529_, 0);
v_inheritedTraceOptions_545_ = lean_ctor_get(v_toCold_544_, 11);
v___x_546_ = l_Lean_Meta_Grind_propagateForallPropUp___lam__0(v_cls_456_, v_inheritedTraceOptions_545_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
v_a_547_ = lean_ctor_get(v___x_546_, 0);
lean_inc(v_a_547_);
lean_dec_ref(v___x_546_);
v___x_548_ = lean_unbox(v_a_547_);
lean_dec(v_a_547_);
if (v___x_548_ == 0)
{
v___y_458_ = v___x_533_;
v___y_459_ = v___y_521_;
v___y_460_ = v___y_522_;
v___y_461_ = v___y_523_;
v___y_462_ = v___y_524_;
v___y_463_ = v___y_525_;
v___y_464_ = v___y_526_;
v___y_465_ = v___y_527_;
v___y_466_ = v___y_528_;
v___y_467_ = v___y_529_;
v___y_468_ = v___y_530_;
goto v___jp_457_;
}
else
{
lean_object* v___x_549_; 
v___x_549_ = l_Lean_Meta_Grind_updateLastTag(v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
lean_dec_ref_known(v___x_549_, 1);
v___x_550_ = lean_obj_once(&l_Lean_Meta_Grind_propagateForallPropUp___closed__13, &l_Lean_Meta_Grind_propagateForallPropUp___closed__13_once, _init_l_Lean_Meta_Grind_propagateForallPropUp___closed__13);
lean_inc_ref(v_e_413_);
v___x_551_ = l_Lean_MessageData_ofExpr(v_e_413_);
v___x_552_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_552_, 0, v___x_550_);
lean_ctor_set(v___x_552_, 1, v___x_551_);
v___x_553_ = l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg(v_cls_456_, v___x_552_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_dec_ref_known(v___x_553_, 1);
v___y_458_ = v___x_533_;
v___y_459_ = v___y_521_;
v___y_460_ = v___y_522_;
v___y_461_ = v___y_523_;
v___y_462_ = v___y_524_;
v___y_463_ = v___y_525_;
v___y_464_ = v___y_526_;
v___y_465_ = v___y_527_;
v___y_466_ = v___y_528_;
v___y_467_ = v___y_529_;
v___y_468_ = v___y_530_;
goto v___jp_457_;
}
else
{
lean_dec_ref_known(v_e_413_, 3);
return v___x_553_;
}
}
else
{
lean_dec_ref_known(v_e_413_, 3);
return v___x_549_;
}
}
}
}
}
else
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_562_; 
lean_dec_ref_known(v_e_413_, 3);
v_a_555_ = lean_ctor_get(v___x_534_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_562_ == 0)
{
v___x_557_ = v___x_534_;
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_534_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_560_; 
if (v_isShared_558_ == 0)
{
v___x_560_ = v___x_557_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v_a_555_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
}
}
}
else
{
lean_object* v___x_569_; lean_object* v___x_570_; 
lean_dec_ref(v_e_413_);
v___x_569_ = lean_box(0);
v___x_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_570_, 0, v___x_569_);
return v___x_570_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateForallPropUp___boxed(lean_object* v_e_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lean_Meta_Grind_propagateForallPropUp(v_e_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_);
lean_dec(v_a_581_);
lean_dec_ref(v_a_580_);
lean_dec(v_a_579_);
lean_dec_ref(v_a_578_);
lean_dec(v_a_577_);
lean_dec_ref(v_a_576_);
lean_dec(v_a_575_);
lean_dec_ref(v_a_574_);
lean_dec(v_a_573_);
lean_dec(v_a_572_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0(lean_object* v_cls_584_, lean_object* v_msg_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg(v_cls_584_, v_msg_585_, v___y_592_, v___y_593_, v___y_594_, v___y_595_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___boxed(lean_object* v_cls_598_, lean_object* v_msg_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0(v_cls_598_, v_msg_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_);
lean_dec(v___y_609_);
lean_dec_ref(v___y_608_);
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
lean_dec(v___y_603_);
lean_dec_ref(v___y_602_);
lean_dec(v___y_601_);
lean_dec(v___y_600_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_mkEMatchTheoremWithKind_x27_x3f(lean_object* v_origin_614_, lean_object* v_proof_615_, lean_object* v_kind_616_, lean_object* v_prios_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_){
_start:
{
lean_object* v___x_623_; uint8_t v___x_624_; uint8_t v___x_625_; lean_object* v___x_626_; 
v___x_623_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_mkEMatchTheoremWithKind_x27_x3f___closed__0));
v___x_624_ = 0;
v___x_625_ = 1;
v___x_626_ = l_Lean_Meta_Grind_mkEMatchTheoremWithKind_x3f(v_origin_614_, v___x_623_, v_proof_615_, v_kind_616_, v_prios_617_, v___x_624_, v___x_624_, v___x_625_, v_a_618_, v_a_619_, v_a_620_, v_a_621_);
if (lean_obj_tag(v___x_626_) == 0)
{
return v___x_626_;
}
else
{
lean_object* v_a_627_; uint8_t v___x_628_; 
v_a_627_ = lean_ctor_get(v___x_626_, 0);
v___x_628_ = l_Lean_Exception_isInterrupt(v_a_627_);
if (v___x_628_ == 0)
{
uint8_t v___x_629_; 
lean_inc(v_a_627_);
v___x_629_ = l_Lean_Exception_isRuntime(v_a_627_);
if (v___x_629_ == 0)
{
lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_637_; 
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_637_ == 0)
{
lean_object* v_unused_638_; 
v_unused_638_ = lean_ctor_get(v___x_626_, 0);
lean_dec(v_unused_638_);
v___x_631_ = v___x_626_;
v_isShared_632_ = v_isSharedCheck_637_;
goto v_resetjp_630_;
}
else
{
lean_dec(v___x_626_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_637_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_633_; lean_object* v___x_635_; 
v___x_633_ = lean_box(0);
if (v_isShared_632_ == 0)
{
lean_ctor_set_tag(v___x_631_, 0);
lean_ctor_set(v___x_631_, 0, v___x_633_);
v___x_635_ = v___x_631_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v___x_633_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
else
{
return v___x_626_;
}
}
else
{
return v___x_626_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_mkEMatchTheoremWithKind_x27_x3f___boxed(lean_object* v_origin_639_, lean_object* v_proof_640_, lean_object* v_kind_641_, lean_object* v_prios_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_mkEMatchTheoremWithKind_x27_x3f(v_origin_639_, v_proof_640_, v_kind_641_, v_prios_642_, v_a_643_, v_a_644_, v_a_645_, v_a_646_);
lean_dec(v_a_646_);
lean_dec_ref(v_a_645_);
lean_dec(v_a_644_);
lean_dec_ref(v_a_643_);
return v_res_648_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat_spec__0(lean_object* v_x_649_, lean_object* v_x_650_){
_start:
{
if (lean_obj_tag(v_x_649_) == 0)
{
if (lean_obj_tag(v_x_650_) == 0)
{
uint8_t v___x_651_; 
v___x_651_ = 1;
return v___x_651_;
}
else
{
uint8_t v___x_652_; 
v___x_652_ = 0;
return v___x_652_;
}
}
else
{
if (lean_obj_tag(v_x_650_) == 0)
{
uint8_t v___x_653_; 
v___x_653_ = 0;
return v___x_653_;
}
else
{
lean_object* v_head_654_; lean_object* v_tail_655_; lean_object* v_head_656_; lean_object* v_tail_657_; uint8_t v___x_658_; 
v_head_654_ = lean_ctor_get(v_x_649_, 0);
v_tail_655_ = lean_ctor_get(v_x_649_, 1);
v_head_656_ = lean_ctor_get(v_x_650_, 0);
v_tail_657_ = lean_ctor_get(v_x_650_, 1);
v___x_658_ = lean_expr_eqv(v_head_654_, v_head_656_);
if (v___x_658_ == 0)
{
return v___x_658_;
}
else
{
v_x_649_ = v_tail_655_;
v_x_650_ = v_tail_657_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat_spec__0___boxed(lean_object* v_x_660_, lean_object* v_x_661_){
_start:
{
uint8_t v_res_662_; lean_object* v_r_663_; 
v_res_662_ = l_List_beq___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat_spec__0(v_x_660_, v_x_661_);
lean_dec(v_x_661_);
lean_dec(v_x_660_);
v_r_663_ = lean_box(v_res_662_);
return v_r_663_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat_spec__1(lean_object* v_thm_x27_664_, lean_object* v_as_665_, size_t v_i_666_, size_t v_stop_667_){
_start:
{
uint8_t v___x_668_; 
v___x_668_ = lean_usize_dec_eq(v_i_666_, v_stop_667_);
if (v___x_668_ == 0)
{
lean_object* v_patterns_669_; lean_object* v___x_670_; uint8_t v___x_671_; 
v_patterns_669_ = lean_ctor_get(v_thm_x27_664_, 3);
v___x_670_ = lean_array_uget_borrowed(v_as_665_, v_i_666_);
v___x_671_ = l_List_beq___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat_spec__0(v_patterns_669_, v___x_670_);
if (v___x_671_ == 0)
{
size_t v___x_672_; size_t v___x_673_; 
v___x_672_ = ((size_t)1ULL);
v___x_673_ = lean_usize_add(v_i_666_, v___x_672_);
v_i_666_ = v___x_673_;
goto _start;
}
else
{
return v___x_671_;
}
}
else
{
uint8_t v___x_675_; 
v___x_675_ = 0;
return v___x_675_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat_spec__1___boxed(lean_object* v_thm_x27_676_, lean_object* v_as_677_, lean_object* v_i_678_, lean_object* v_stop_679_){
_start:
{
size_t v_i_boxed_680_; size_t v_stop_boxed_681_; uint8_t v_res_682_; lean_object* v_r_683_; 
v_i_boxed_680_ = lean_unbox_usize(v_i_678_);
lean_dec(v_i_678_);
v_stop_boxed_681_ = lean_unbox_usize(v_stop_679_);
lean_dec(v_stop_679_);
v_res_682_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat_spec__1(v_thm_x27_676_, v_as_677_, v_i_boxed_680_, v_stop_boxed_681_);
lean_dec_ref(v_as_677_);
lean_dec_ref(v_thm_x27_676_);
v_r_683_ = lean_box(v_res_682_);
return v_r_683_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat(lean_object* v_patternsFoundSoFar_684_, lean_object* v_thm_x27_685_){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; uint8_t v___x_688_; 
v___x_686_ = lean_unsigned_to_nat(0u);
v___x_687_ = lean_array_get_size(v_patternsFoundSoFar_684_);
v___x_688_ = lean_nat_dec_lt(v___x_686_, v___x_687_);
if (v___x_688_ == 0)
{
uint8_t v___x_689_; 
v___x_689_ = 1;
return v___x_689_;
}
else
{
if (v___x_688_ == 0)
{
return v___x_688_;
}
else
{
size_t v___x_690_; size_t v___x_691_; uint8_t v___x_692_; 
v___x_690_ = ((size_t)0ULL);
v___x_691_ = lean_usize_of_nat(v___x_687_);
v___x_692_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat_spec__1(v_thm_x27_685_, v_patternsFoundSoFar_684_, v___x_690_, v___x_691_);
if (v___x_692_ == 0)
{
return v___x_688_;
}
else
{
uint8_t v___x_693_; 
v___x_693_ = 0;
return v___x_693_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat___boxed(lean_object* v_patternsFoundSoFar_694_, lean_object* v_thm_x27_695_){
_start:
{
uint8_t v_res_696_; lean_object* v_r_697_; 
v_res_696_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat(v_patternsFoundSoFar_694_, v_thm_x27_695_);
lean_dec_ref(v_thm_x27_695_);
lean_dec_ref(v_patternsFoundSoFar_694_);
v_r_697_ = lean_box(v_res_696_);
return v_r_697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg(lean_object* v_proof_709_, lean_object* v_a_710_, lean_object* v_a_711_){
_start:
{
lean_object* v___y_714_; lean_object* v___x_785_; 
lean_inc_ref(v_proof_709_);
v___x_785_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_proof_709_, v_a_711_);
if (lean_obj_tag(v___x_785_) == 0)
{
lean_object* v_a_786_; lean_object* v___x_787_; uint8_t v___x_788_; 
v_a_786_ = lean_ctor_get(v___x_785_, 0);
lean_inc(v_a_786_);
lean_dec_ref_known(v___x_785_, 1);
v___x_787_ = l_Lean_Expr_cleanupAnnotations(v_a_786_);
lean_dec(v_a_786_);
v___x_788_ = l_Lean_Expr_isApp(v___x_787_);
if (v___x_788_ == 0)
{
lean_dec_ref(v___x_787_);
v___y_714_ = v_a_710_;
goto v___jp_713_;
}
else
{
lean_object* v___x_789_; uint8_t v___x_790_; 
v___x_789_ = l_Lean_Expr_appFnCleanup___redArg(v___x_787_);
v___x_790_ = l_Lean_Expr_isApp(v___x_789_);
if (v___x_790_ == 0)
{
lean_dec_ref(v___x_789_);
lean_dec_ref(v___x_787_);
v___y_714_ = v_a_710_;
goto v___jp_713_;
}
else
{
lean_object* v_arg_791_; lean_object* v___x_792_; lean_object* v___x_793_; uint8_t v___x_794_; 
v_arg_791_ = lean_ctor_get(v___x_787_, 1);
lean_inc_ref(v_arg_791_);
lean_dec_ref(v___x_787_);
v___x_792_ = l_Lean_Expr_appFnCleanup___redArg(v___x_789_);
lean_dec_ref(v___x_789_);
v___x_793_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__3));
v___x_794_ = l_Lean_Expr_isConstOf(v___x_792_, v___x_793_);
if (v___x_794_ == 0)
{
uint8_t v___x_795_; 
v___x_795_ = l_Lean_Expr_isApp(v___x_792_);
if (v___x_795_ == 0)
{
lean_dec_ref(v___x_792_);
lean_dec_ref(v_arg_791_);
v___y_714_ = v_a_710_;
goto v___jp_713_;
}
else
{
lean_object* v___x_796_; uint8_t v___x_797_; 
v___x_796_ = l_Lean_Expr_appFnCleanup___redArg(v___x_792_);
lean_dec_ref(v___x_792_);
v___x_797_ = l_Lean_Expr_isApp(v___x_796_);
if (v___x_797_ == 0)
{
lean_dec_ref(v___x_796_);
lean_dec_ref(v_arg_791_);
v___y_714_ = v_a_710_;
goto v___jp_713_;
}
else
{
lean_object* v___x_798_; lean_object* v___x_799_; uint8_t v___x_800_; 
v___x_798_ = l_Lean_Expr_appFnCleanup___redArg(v___x_796_);
lean_dec_ref(v___x_796_);
v___x_799_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__6));
v___x_800_ = l_Lean_Expr_isConstOf(v___x_798_, v___x_799_);
lean_dec_ref(v___x_798_);
if (v___x_800_ == 0)
{
lean_dec_ref(v_arg_791_);
v___y_714_ = v_a_710_;
goto v___jp_713_;
}
else
{
lean_dec_ref(v_proof_709_);
v_proof_709_ = v_arg_791_;
goto _start;
}
}
}
}
else
{
lean_dec_ref(v___x_792_);
lean_dec_ref(v_proof_709_);
v_proof_709_ = v_arg_791_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_810_; 
lean_dec_ref(v_proof_709_);
v_a_803_ = lean_ctor_get(v___x_785_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_810_ == 0)
{
v___x_805_ = v___x_785_;
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_dec(v___x_785_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_808_; 
if (v_isShared_806_ == 0)
{
v___x_808_ = v___x_805_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_a_803_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
}
v___jp_713_:
{
if (lean_obj_tag(v_proof_709_) == 1)
{
lean_object* v_fvarId_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v_fvarId_715_ = lean_ctor_get(v_proof_709_, 0);
lean_inc(v_fvarId_715_);
lean_dec_ref_known(v_proof_709_, 1);
v___x_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_716_, 0, v_fvarId_715_);
v___x_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_717_, 0, v___x_716_);
return v___x_717_;
}
else
{
lean_object* v___x_718_; lean_object* v_toGoalState_719_; lean_object* v_ematch_720_; lean_object* v_mvarId_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_783_; 
lean_dec_ref(v_proof_709_);
v___x_718_ = lean_st_ref_take(v___y_714_);
v_toGoalState_719_ = lean_ctor_get(v___x_718_, 0);
lean_inc_ref(v_toGoalState_719_);
v_ematch_720_ = lean_ctor_get(v_toGoalState_719_, 14);
lean_inc_ref(v_ematch_720_);
v_mvarId_721_ = lean_ctor_get(v___x_718_, 1);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_783_ == 0)
{
lean_object* v_unused_784_; 
v_unused_784_ = lean_ctor_get(v___x_718_, 0);
lean_dec(v_unused_784_);
v___x_723_ = v___x_718_;
v_isShared_724_ = v_isSharedCheck_783_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_mvarId_721_);
lean_dec(v___x_718_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_783_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v_nextDeclIdx_725_; lean_object* v_enodeMap_726_; lean_object* v_exprs_727_; lean_object* v_parents_728_; lean_object* v_condParents_729_; lean_object* v_congrTable_730_; lean_object* v_appMap_731_; lean_object* v_indicesFound_732_; lean_object* v_toProcess_733_; lean_object* v_internalizing_734_; uint8_t v_inconsistent_735_; lean_object* v_nextIdx_736_; lean_object* v_newRawFacts_737_; lean_object* v_facts_738_; lean_object* v_extThms_739_; lean_object* v_inj_740_; lean_object* v_split_741_; lean_object* v_clean_742_; lean_object* v_sstates_743_; lean_object* v_goalStack_744_; uint64_t v_introBase_745_; lean_object* v_numIntros_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_781_; 
v_nextDeclIdx_725_ = lean_ctor_get(v_toGoalState_719_, 0);
v_enodeMap_726_ = lean_ctor_get(v_toGoalState_719_, 1);
v_exprs_727_ = lean_ctor_get(v_toGoalState_719_, 2);
v_parents_728_ = lean_ctor_get(v_toGoalState_719_, 3);
v_condParents_729_ = lean_ctor_get(v_toGoalState_719_, 4);
v_congrTable_730_ = lean_ctor_get(v_toGoalState_719_, 5);
v_appMap_731_ = lean_ctor_get(v_toGoalState_719_, 6);
v_indicesFound_732_ = lean_ctor_get(v_toGoalState_719_, 7);
v_toProcess_733_ = lean_ctor_get(v_toGoalState_719_, 8);
v_internalizing_734_ = lean_ctor_get(v_toGoalState_719_, 9);
v_inconsistent_735_ = lean_ctor_get_uint8(v_toGoalState_719_, sizeof(void*)*21 + 8);
v_nextIdx_736_ = lean_ctor_get(v_toGoalState_719_, 10);
v_newRawFacts_737_ = lean_ctor_get(v_toGoalState_719_, 11);
v_facts_738_ = lean_ctor_get(v_toGoalState_719_, 12);
v_extThms_739_ = lean_ctor_get(v_toGoalState_719_, 13);
v_inj_740_ = lean_ctor_get(v_toGoalState_719_, 15);
v_split_741_ = lean_ctor_get(v_toGoalState_719_, 16);
v_clean_742_ = lean_ctor_get(v_toGoalState_719_, 17);
v_sstates_743_ = lean_ctor_get(v_toGoalState_719_, 18);
v_goalStack_744_ = lean_ctor_get(v_toGoalState_719_, 19);
v_introBase_745_ = lean_ctor_get_uint64(v_toGoalState_719_, sizeof(void*)*21);
v_numIntros_746_ = lean_ctor_get(v_toGoalState_719_, 20);
v_isSharedCheck_781_ = !lean_is_exclusive(v_toGoalState_719_);
if (v_isSharedCheck_781_ == 0)
{
lean_object* v_unused_782_; 
v_unused_782_ = lean_ctor_get(v_toGoalState_719_, 14);
lean_dec(v_unused_782_);
v___x_748_ = v_toGoalState_719_;
v_isShared_749_ = v_isSharedCheck_781_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_numIntros_746_);
lean_inc(v_goalStack_744_);
lean_inc(v_sstates_743_);
lean_inc(v_clean_742_);
lean_inc(v_split_741_);
lean_inc(v_inj_740_);
lean_inc(v_extThms_739_);
lean_inc(v_facts_738_);
lean_inc(v_newRawFacts_737_);
lean_inc(v_nextIdx_736_);
lean_inc(v_internalizing_734_);
lean_inc(v_toProcess_733_);
lean_inc(v_indicesFound_732_);
lean_inc(v_appMap_731_);
lean_inc(v_congrTable_730_);
lean_inc(v_condParents_729_);
lean_inc(v_parents_728_);
lean_inc(v_exprs_727_);
lean_inc(v_enodeMap_726_);
lean_inc(v_nextDeclIdx_725_);
lean_dec(v_toGoalState_719_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_781_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v_thmMap_750_; lean_object* v_gmt_751_; lean_object* v_thms_752_; lean_object* v_newThms_753_; lean_object* v_numInstances_754_; lean_object* v_numDelayedInstances_755_; lean_object* v_num_756_; lean_object* v_preInstances_757_; lean_object* v_nextThmIdx_758_; lean_object* v_matchEqNames_759_; lean_object* v_delayedThmInsts_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_780_; 
v_thmMap_750_ = lean_ctor_get(v_ematch_720_, 0);
v_gmt_751_ = lean_ctor_get(v_ematch_720_, 1);
v_thms_752_ = lean_ctor_get(v_ematch_720_, 2);
v_newThms_753_ = lean_ctor_get(v_ematch_720_, 3);
v_numInstances_754_ = lean_ctor_get(v_ematch_720_, 4);
v_numDelayedInstances_755_ = lean_ctor_get(v_ematch_720_, 5);
v_num_756_ = lean_ctor_get(v_ematch_720_, 6);
v_preInstances_757_ = lean_ctor_get(v_ematch_720_, 7);
v_nextThmIdx_758_ = lean_ctor_get(v_ematch_720_, 8);
v_matchEqNames_759_ = lean_ctor_get(v_ematch_720_, 9);
v_delayedThmInsts_760_ = lean_ctor_get(v_ematch_720_, 10);
v_isSharedCheck_780_ = !lean_is_exclusive(v_ematch_720_);
if (v_isSharedCheck_780_ == 0)
{
v___x_762_ = v_ematch_720_;
v_isShared_763_ = v_isSharedCheck_780_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_delayedThmInsts_760_);
lean_inc(v_matchEqNames_759_);
lean_inc(v_nextThmIdx_758_);
lean_inc(v_preInstances_757_);
lean_inc(v_num_756_);
lean_inc(v_numDelayedInstances_755_);
lean_inc(v_numInstances_754_);
lean_inc(v_newThms_753_);
lean_inc(v_thms_752_);
lean_inc(v_gmt_751_);
lean_inc(v_thmMap_750_);
lean_dec(v_ematch_720_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_780_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_767_; 
v___x_764_ = lean_unsigned_to_nat(1u);
v___x_765_ = lean_nat_add(v_nextThmIdx_758_, v___x_764_);
if (v_isShared_763_ == 0)
{
lean_ctor_set(v___x_762_, 8, v___x_765_);
v___x_767_ = v___x_762_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_thmMap_750_);
lean_ctor_set(v_reuseFailAlloc_779_, 1, v_gmt_751_);
lean_ctor_set(v_reuseFailAlloc_779_, 2, v_thms_752_);
lean_ctor_set(v_reuseFailAlloc_779_, 3, v_newThms_753_);
lean_ctor_set(v_reuseFailAlloc_779_, 4, v_numInstances_754_);
lean_ctor_set(v_reuseFailAlloc_779_, 5, v_numDelayedInstances_755_);
lean_ctor_set(v_reuseFailAlloc_779_, 6, v_num_756_);
lean_ctor_set(v_reuseFailAlloc_779_, 7, v_preInstances_757_);
lean_ctor_set(v_reuseFailAlloc_779_, 8, v___x_765_);
lean_ctor_set(v_reuseFailAlloc_779_, 9, v_matchEqNames_759_);
lean_ctor_set(v_reuseFailAlloc_779_, 10, v_delayedThmInsts_760_);
v___x_767_ = v_reuseFailAlloc_779_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
lean_object* v___x_769_; 
if (v_isShared_749_ == 0)
{
lean_ctor_set(v___x_748_, 14, v___x_767_);
v___x_769_ = v___x_748_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_nextDeclIdx_725_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v_enodeMap_726_);
lean_ctor_set(v_reuseFailAlloc_778_, 2, v_exprs_727_);
lean_ctor_set(v_reuseFailAlloc_778_, 3, v_parents_728_);
lean_ctor_set(v_reuseFailAlloc_778_, 4, v_condParents_729_);
lean_ctor_set(v_reuseFailAlloc_778_, 5, v_congrTable_730_);
lean_ctor_set(v_reuseFailAlloc_778_, 6, v_appMap_731_);
lean_ctor_set(v_reuseFailAlloc_778_, 7, v_indicesFound_732_);
lean_ctor_set(v_reuseFailAlloc_778_, 8, v_toProcess_733_);
lean_ctor_set(v_reuseFailAlloc_778_, 9, v_internalizing_734_);
lean_ctor_set(v_reuseFailAlloc_778_, 10, v_nextIdx_736_);
lean_ctor_set(v_reuseFailAlloc_778_, 11, v_newRawFacts_737_);
lean_ctor_set(v_reuseFailAlloc_778_, 12, v_facts_738_);
lean_ctor_set(v_reuseFailAlloc_778_, 13, v_extThms_739_);
lean_ctor_set(v_reuseFailAlloc_778_, 14, v___x_767_);
lean_ctor_set(v_reuseFailAlloc_778_, 15, v_inj_740_);
lean_ctor_set(v_reuseFailAlloc_778_, 16, v_split_741_);
lean_ctor_set(v_reuseFailAlloc_778_, 17, v_clean_742_);
lean_ctor_set(v_reuseFailAlloc_778_, 18, v_sstates_743_);
lean_ctor_set(v_reuseFailAlloc_778_, 19, v_goalStack_744_);
lean_ctor_set(v_reuseFailAlloc_778_, 20, v_numIntros_746_);
lean_ctor_set_uint8(v_reuseFailAlloc_778_, sizeof(void*)*21 + 8, v_inconsistent_735_);
lean_ctor_set_uint64(v_reuseFailAlloc_778_, sizeof(void*)*21, v_introBase_745_);
v___x_769_ = v_reuseFailAlloc_778_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_771_; 
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 0, v___x_769_);
v___x_771_ = v___x_723_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_769_);
lean_ctor_set(v_reuseFailAlloc_777_, 1, v_mvarId_721_);
v___x_771_ = v_reuseFailAlloc_777_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_772_ = lean_st_ref_put(v___y_714_, v___x_771_);
v___x_773_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___closed__1));
v___x_774_ = lean_name_append_index_after(v___x_773_, v_nextThmIdx_758_);
v___x_775_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
v___x_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_776_, 0, v___x_775_);
return v___x_776_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg___boxed(lean_object* v_proof_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg(v_proof_811_, v_a_812_, v_a_813_);
lean_dec(v_a_813_);
lean_dec(v_a_812_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin(lean_object* v_proof_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg(v_proof_816_, v_a_817_, v_a_824_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___boxed(lean_object* v_proof_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin(v_proof_829_, v_a_830_, v_a_831_, v_a_832_, v_a_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_);
lean_dec(v_a_839_);
lean_dec_ref(v_a_838_);
lean_dec(v_a_837_);
lean_dec_ref(v_a_836_);
lean_dec(v_a_835_);
lean_dec_ref(v_a_834_);
lean_dec(v_a_833_);
lean_dec_ref(v_a_832_);
lean_dec(v_a_831_);
lean_dec(v_a_830_);
return v_res_841_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof_spec__0(uint64_t v_a_842_, lean_object* v_as_843_, size_t v_i_844_, size_t v_stop_845_){
_start:
{
uint8_t v___x_846_; 
v___x_846_ = lean_usize_dec_eq(v_i_844_, v_stop_845_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; uint8_t v___x_848_; 
v___x_847_ = lean_array_uget_borrowed(v_as_843_, v_i_844_);
v___x_848_ = l_Lean_Meta_Grind_AnchorRef_matches(v___x_847_, v_a_842_);
if (v___x_848_ == 0)
{
size_t v___x_849_; size_t v___x_850_; 
v___x_849_ = ((size_t)1ULL);
v___x_850_ = lean_usize_add(v_i_844_, v___x_849_);
v_i_844_ = v___x_850_;
goto _start;
}
else
{
return v___x_848_;
}
}
else
{
uint8_t v___x_852_; 
v___x_852_ = 0;
return v___x_852_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof_spec__0___boxed(lean_object* v_a_853_, lean_object* v_as_854_, lean_object* v_i_855_, lean_object* v_stop_856_){
_start:
{
uint64_t v_a_3835__boxed_857_; size_t v_i_boxed_858_; size_t v_stop_boxed_859_; uint8_t v_res_860_; lean_object* v_r_861_; 
v_a_3835__boxed_857_ = lean_unbox_uint64(v_a_853_);
lean_dec_ref(v_a_853_);
v_i_boxed_858_ = lean_unbox_usize(v_i_855_);
lean_dec(v_i_855_);
v_stop_boxed_859_ = lean_unbox_usize(v_stop_856_);
lean_dec(v_stop_856_);
v_res_860_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof_spec__0(v_a_3835__boxed_857_, v_as_854_, v_i_boxed_858_, v_stop_boxed_859_);
lean_dec_ref(v_as_854_);
v_r_861_ = lean_box(v_res_860_);
return v_r_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof(lean_object* v_proof_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = l_Lean_Meta_Grind_getAnchorRefs___redArg(v_a_864_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v_a_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_927_; 
v_a_874_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_927_ == 0)
{
v___x_876_ = v___x_873_;
v_isShared_877_ = v_isSharedCheck_927_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_a_874_);
lean_dec(v___x_873_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_927_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
if (lean_obj_tag(v_a_874_) == 1)
{
lean_object* v_val_878_; lean_object* v___x_879_; 
lean_del_object(v___x_876_);
v_val_878_ = lean_ctor_get(v_a_874_, 0);
lean_inc(v_val_878_);
lean_dec_ref_known(v_a_874_, 1);
lean_inc(v_a_871_);
lean_inc_ref(v_a_870_);
lean_inc(v_a_869_);
lean_inc_ref(v_a_868_);
v___x_879_ = lean_infer_type(v_proof_862_, v_a_868_, v_a_869_, v_a_870_, v_a_871_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; lean_object* v___x_881_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_a_880_);
lean_dec_ref_known(v___x_879_, 1);
v___x_881_ = l_Lean_Meta_Grind_getAnchor(v_a_880_, v_a_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_905_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_905_ == 0)
{
v___x_884_ = v___x_881_;
v_isShared_885_ = v_isSharedCheck_905_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_881_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_905_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_886_; lean_object* v___x_887_; uint8_t v___x_888_; 
v___x_886_ = lean_unsigned_to_nat(0u);
v___x_887_ = lean_array_get_size(v_val_878_);
v___x_888_ = lean_nat_dec_lt(v___x_886_, v___x_887_);
if (v___x_888_ == 0)
{
lean_object* v___x_889_; lean_object* v___x_891_; 
lean_dec(v_a_882_);
lean_dec(v_val_878_);
v___x_889_ = lean_box(v___x_888_);
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 0, v___x_889_);
v___x_891_ = v___x_884_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_889_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
else
{
if (v___x_888_ == 0)
{
lean_object* v___x_893_; lean_object* v___x_895_; 
lean_dec(v_a_882_);
lean_dec(v_val_878_);
v___x_893_ = lean_box(v___x_888_);
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 0, v___x_893_);
v___x_895_ = v___x_884_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v___x_893_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
else
{
size_t v___x_897_; size_t v___x_898_; uint64_t v___x_899_; uint8_t v___x_900_; lean_object* v___x_901_; lean_object* v___x_903_; 
v___x_897_ = ((size_t)0ULL);
v___x_898_ = lean_usize_of_nat(v___x_887_);
v___x_899_ = lean_unbox_uint64(v_a_882_);
lean_dec(v_a_882_);
v___x_900_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof_spec__0(v___x_899_, v_val_878_, v___x_897_, v___x_898_);
lean_dec(v_val_878_);
v___x_901_ = lean_box(v___x_900_);
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 0, v___x_901_);
v___x_903_ = v___x_884_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v___x_901_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
}
else
{
lean_object* v_a_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_913_; 
lean_dec(v_val_878_);
v_a_906_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_913_ == 0)
{
v___x_908_ = v___x_881_;
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_a_906_);
lean_dec(v___x_881_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_909_ == 0)
{
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_a_906_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
else
{
lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
lean_dec(v_val_878_);
v_a_914_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_921_ == 0)
{
v___x_916_ = v___x_879_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_879_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_914_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
}
else
{
uint8_t v___x_922_; lean_object* v___x_923_; lean_object* v___x_925_; 
lean_dec(v_a_874_);
lean_dec_ref(v_proof_862_);
v___x_922_ = 1;
v___x_923_ = lean_box(v___x_922_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 0, v___x_923_);
v___x_925_ = v___x_876_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v___x_923_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
else
{
lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_935_; 
lean_dec_ref(v_proof_862_);
v_a_928_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_935_ == 0)
{
v___x_930_ = v___x_873_;
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v___x_873_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_933_; 
if (v_isShared_931_ == 0)
{
v___x_933_ = v___x_930_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_a_928_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof___boxed(lean_object* v_proof_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof(v_proof_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_, v_a_942_, v_a_943_, v_a_944_, v_a_945_);
lean_dec(v_a_945_);
lean_dec_ref(v_a_944_);
lean_dec(v_a_943_);
lean_dec_ref(v_a_942_);
lean_dec(v_a_941_);
lean_dec_ref(v_a_940_);
lean_dec(v_a_939_);
lean_dec_ref(v_a_938_);
lean_dec(v_a_937_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems_spec__0(lean_object* v_a_948_, lean_object* v_as_949_, size_t v_sz_950_, size_t v_i_951_, lean_object* v_b_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v_a_965_; uint8_t v___x_969_; 
v___x_969_ = lean_usize_dec_lt(v_i_951_, v_sz_950_);
if (v___x_969_ == 0)
{
lean_object* v___x_970_; 
lean_dec(v_a_948_);
v___x_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_970_, 0, v_b_952_);
return v___x_970_;
}
else
{
lean_object* v_a_971_; uint8_t v___x_972_; 
v_a_971_ = lean_array_uget_borrowed(v_as_949_, v_i_951_);
v___x_972_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat(v_b_952_, v_a_971_);
if (v___x_972_ == 0)
{
v_a_965_ = v_b_952_;
goto v___jp_964_;
}
else
{
lean_object* v___x_973_; 
lean_inc(v_a_948_);
lean_inc(v_a_971_);
v___x_973_ = l_Lean_Meta_Grind_activateTheorem(v_a_971_, v_a_948_, v___y_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
if (lean_obj_tag(v___x_973_) == 0)
{
lean_object* v_patterns_974_; lean_object* v___x_975_; 
lean_dec_ref_known(v___x_973_, 1);
v_patterns_974_ = lean_ctor_get(v_a_971_, 3);
lean_inc(v_patterns_974_);
v___x_975_ = lean_array_push(v_b_952_, v_patterns_974_);
v_a_965_ = v___x_975_;
goto v___jp_964_;
}
else
{
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_983_; 
lean_dec_ref(v_b_952_);
lean_dec(v_a_948_);
v_a_976_ = lean_ctor_get(v___x_973_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_983_ == 0)
{
v___x_978_ = v___x_973_;
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_973_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_979_ == 0)
{
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_a_976_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
}
}
v___jp_964_:
{
size_t v___x_966_; size_t v___x_967_; 
v___x_966_ = ((size_t)1ULL);
v___x_967_ = lean_usize_add(v_i_951_, v___x_966_);
v_i_951_ = v___x_967_;
v_b_952_ = v_a_965_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems_spec__0___boxed(lean_object* v_a_984_, lean_object* v_as_985_, lean_object* v_sz_986_, lean_object* v_i_987_, lean_object* v_b_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
size_t v_sz_boxed_1000_; size_t v_i_boxed_1001_; lean_object* v_res_1002_; 
v_sz_boxed_1000_ = lean_unbox_usize(v_sz_986_);
lean_dec(v_sz_986_);
v_i_boxed_1001_ = lean_unbox_usize(v_i_987_);
lean_dec(v_i_987_);
v_res_1002_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems_spec__0(v_a_984_, v_as_985_, v_sz_boxed_1000_, v_i_boxed_1001_, v_b_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
lean_dec(v___y_994_);
lean_dec_ref(v___y_993_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
lean_dec(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v_as_985_);
return v_res_1002_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__1(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__0));
v___x_1005_ = l_Lean_stringToMessageData(v___x_1004_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems(lean_object* v_e_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_){
_start:
{
lean_object* v___x_1022_; 
lean_inc_ref(v_e_1010_);
v___x_1022_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_1010_, v_a_1011_, v_a_1012_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_);
if (lean_obj_tag(v___x_1022_) == 0)
{
lean_object* v_a_1023_; lean_object* v___x_1024_; 
v_a_1023_ = lean_ctor_get(v___x_1022_, 0);
lean_inc_n(v_a_1023_, 2);
lean_dec_ref_known(v___x_1022_, 1);
v___x_1024_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_getOrigin___redArg(v_a_1023_, v_a_1011_, v_a_1018_);
if (lean_obj_tag(v___x_1024_) == 0)
{
lean_object* v_a_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v_a_1025_ = lean_ctor_get(v___x_1024_, 0);
lean_inc(v_a_1025_);
lean_dec_ref_known(v___x_1024_, 1);
lean_inc_ref(v_e_1010_);
v___x_1026_ = l_Lean_Meta_mkOfEqTrueCore(v_e_1010_, v_a_1023_);
lean_inc_ref(v___x_1026_);
v___x_1027_ = l_Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof(v___x_1026_, v_a_1012_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_);
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1207_; 
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1030_ = v___x_1027_;
v_isShared_1031_ = v_isSharedCheck_1207_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_1027_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1207_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
uint8_t v___x_1032_; 
v___x_1032_ = lean_unbox(v_a_1028_);
lean_dec(v_a_1028_);
if (v___x_1032_ == 0)
{
lean_object* v___x_1033_; lean_object* v___x_1035_; 
lean_dec_ref(v___x_1026_);
lean_dec(v_a_1025_);
lean_dec_ref(v_e_1010_);
v___x_1033_ = lean_box(0);
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 0, v___x_1033_);
v___x_1035_ = v___x_1030_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1033_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
else
{
lean_object* v___x_1037_; lean_object* v_toGoalState_1038_; lean_object* v_ematch_1039_; lean_object* v_newThms_1040_; lean_object* v_size_1041_; lean_object* v___y_1043_; lean_object* v___y_1044_; lean_object* v___y_1045_; lean_object* v___y_1046_; lean_object* v___y_1047_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___x_1090_; 
v___x_1037_ = lean_st_ref_get(v_a_1011_);
v_toGoalState_1038_ = lean_ctor_get(v___x_1037_, 0);
lean_inc_ref(v_toGoalState_1038_);
lean_dec(v___x_1037_);
v_ematch_1039_ = lean_ctor_get(v_toGoalState_1038_, 14);
lean_inc_ref(v_ematch_1039_);
lean_dec_ref(v_toGoalState_1038_);
v_newThms_1040_ = lean_ctor_get(v_ematch_1039_, 3);
lean_inc_ref(v_newThms_1040_);
lean_dec_ref(v_ematch_1039_);
v_size_1041_ = lean_ctor_get(v_newThms_1040_, 2);
lean_inc(v_size_1041_);
lean_dec_ref(v_newThms_1040_);
v___x_1090_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_1010_, v_a_1011_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1091_);
lean_dec_ref_known(v___x_1090_, 1);
v___x_1092_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__2));
v___x_1093_ = l_Lean_Meta_Grind_getSymbolPriorities___redArg(v_a_1013_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_object* v_a_1094_; lean_object* v___x_1095_; uint8_t v___x_1096_; lean_object* v___y_1098_; lean_object* v___y_1099_; lean_object* v___y_1100_; lean_object* v___y_1101_; lean_object* v___y_1102_; lean_object* v___y_1103_; lean_object* v___y_1104_; lean_object* v___y_1105_; lean_object* v___y_1106_; lean_object* v___y_1107_; lean_object* v_patternsFoundSoFar_1128_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1131_; lean_object* v___y_1132_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1138_; lean_object* v___x_1153_; 
v_a_1094_ = lean_ctor_get(v___x_1093_, 0);
lean_inc_n(v_a_1094_, 2);
lean_dec_ref_known(v___x_1093_, 1);
v___x_1095_ = lean_unsigned_to_nat(1000u);
v___x_1096_ = 0;
lean_inc_ref(v___x_1026_);
lean_inc(v_a_1025_);
v___x_1153_ = l_Lean_Meta_Grind_mkEMatchTheoremUsingSingletonPatterns(v_a_1025_, v___x_1092_, v___x_1026_, v___x_1095_, v_a_1094_, v___x_1096_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_a_1154_; size_t v_sz_1155_; size_t v___x_1156_; lean_object* v___x_1157_; 
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
lean_inc(v_a_1154_);
lean_dec_ref_known(v___x_1153_, 1);
v_sz_1155_ = lean_array_size(v_a_1154_);
v___x_1156_ = ((size_t)0ULL);
lean_inc(v_a_1091_);
v___x_1157_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems_spec__0(v_a_1091_, v_a_1154_, v_sz_1155_, v___x_1156_, v___x_1092_, v_a_1011_, v_a_1012_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_);
lean_dec(v_a_1154_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
lean_inc(v_a_1158_);
lean_dec_ref_known(v___x_1157_, 1);
v___x_1159_ = lean_box(6);
lean_inc(v_a_1094_);
lean_inc_ref(v___x_1026_);
lean_inc(v_a_1025_);
v___x_1160_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_mkEMatchTheoremWithKind_x27_x3f(v_a_1025_, v___x_1026_, v___x_1159_, v_a_1094_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_);
if (lean_obj_tag(v___x_1160_) == 0)
{
lean_object* v_a_1161_; 
v_a_1161_ = lean_ctor_get(v___x_1160_, 0);
lean_inc(v_a_1161_);
lean_dec_ref_known(v___x_1160_, 1);
if (lean_obj_tag(v_a_1161_) == 1)
{
lean_object* v_val_1162_; uint8_t v___x_1163_; 
v_val_1162_ = lean_ctor_get(v_a_1161_, 0);
lean_inc(v_val_1162_);
lean_dec_ref_known(v_a_1161_, 1);
v___x_1163_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat(v_a_1158_, v_val_1162_);
if (v___x_1163_ == 0)
{
lean_dec(v_val_1162_);
v_patternsFoundSoFar_1128_ = v_a_1158_;
v___y_1129_ = v_a_1011_;
v___y_1130_ = v_a_1012_;
v___y_1131_ = v_a_1013_;
v___y_1132_ = v_a_1014_;
v___y_1133_ = v_a_1015_;
v___y_1134_ = v_a_1016_;
v___y_1135_ = v_a_1017_;
v___y_1136_ = v_a_1018_;
v___y_1137_ = v_a_1019_;
v___y_1138_ = v_a_1020_;
goto v___jp_1127_;
}
else
{
lean_object* v___x_1164_; 
lean_inc(v_a_1091_);
lean_inc(v_val_1162_);
v___x_1164_ = l_Lean_Meta_Grind_activateTheorem(v_val_1162_, v_a_1091_, v_a_1011_, v_a_1012_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_);
if (lean_obj_tag(v___x_1164_) == 0)
{
lean_object* v_patterns_1165_; lean_object* v___x_1166_; 
lean_dec_ref_known(v___x_1164_, 1);
v_patterns_1165_ = lean_ctor_get(v_val_1162_, 3);
lean_inc(v_patterns_1165_);
lean_dec(v_val_1162_);
v___x_1166_ = lean_array_push(v_a_1158_, v_patterns_1165_);
v_patternsFoundSoFar_1128_ = v___x_1166_;
v___y_1129_ = v_a_1011_;
v___y_1130_ = v_a_1012_;
v___y_1131_ = v_a_1013_;
v___y_1132_ = v_a_1014_;
v___y_1133_ = v_a_1015_;
v___y_1134_ = v_a_1016_;
v___y_1135_ = v_a_1017_;
v___y_1136_ = v_a_1018_;
v___y_1137_ = v_a_1019_;
v___y_1138_ = v_a_1020_;
goto v___jp_1127_;
}
else
{
lean_dec(v_val_1162_);
lean_dec(v_a_1158_);
lean_dec(v_a_1094_);
lean_dec(v_a_1091_);
lean_dec(v_size_1041_);
lean_del_object(v___x_1030_);
lean_dec_ref(v___x_1026_);
lean_dec(v_a_1025_);
lean_dec_ref(v_e_1010_);
return v___x_1164_;
}
}
}
else
{
lean_dec(v_a_1161_);
v_patternsFoundSoFar_1128_ = v_a_1158_;
v___y_1129_ = v_a_1011_;
v___y_1130_ = v_a_1012_;
v___y_1131_ = v_a_1013_;
v___y_1132_ = v_a_1014_;
v___y_1133_ = v_a_1015_;
v___y_1134_ = v_a_1016_;
v___y_1135_ = v_a_1017_;
v___y_1136_ = v_a_1018_;
v___y_1137_ = v_a_1019_;
v___y_1138_ = v_a_1020_;
goto v___jp_1127_;
}
}
else
{
lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1174_; 
lean_dec(v_a_1158_);
lean_dec(v_a_1094_);
lean_dec(v_a_1091_);
lean_dec(v_size_1041_);
lean_del_object(v___x_1030_);
lean_dec_ref(v___x_1026_);
lean_dec(v_a_1025_);
lean_dec_ref(v_e_1010_);
v_a_1167_ = lean_ctor_get(v___x_1160_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1160_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1169_ = v___x_1160_;
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_dec(v___x_1160_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1172_; 
if (v_isShared_1170_ == 0)
{
v___x_1172_ = v___x_1169_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_a_1167_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
}
else
{
lean_object* v_a_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1182_; 
lean_dec(v_a_1094_);
lean_dec(v_a_1091_);
lean_dec(v_size_1041_);
lean_del_object(v___x_1030_);
lean_dec_ref(v___x_1026_);
lean_dec(v_a_1025_);
lean_dec_ref(v_e_1010_);
v_a_1175_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1177_ = v___x_1157_;
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_a_1175_);
lean_dec(v___x_1157_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1180_; 
if (v_isShared_1178_ == 0)
{
v___x_1180_ = v___x_1177_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_a_1175_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
}
else
{
lean_object* v_a_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1190_; 
lean_dec(v_a_1094_);
lean_dec(v_a_1091_);
lean_dec(v_size_1041_);
lean_del_object(v___x_1030_);
lean_dec_ref(v___x_1026_);
lean_dec(v_a_1025_);
lean_dec_ref(v_e_1010_);
v_a_1183_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1185_ = v___x_1153_;
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_a_1183_);
lean_dec(v___x_1153_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1188_; 
if (v_isShared_1186_ == 0)
{
v___x_1188_ = v___x_1185_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_a_1183_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
v___jp_1097_:
{
lean_object* v___x_1108_; lean_object* v_toGoalState_1109_; lean_object* v_ematch_1110_; lean_object* v_newThms_1111_; lean_object* v_size_1112_; uint8_t v___x_1113_; 
v___x_1108_ = lean_st_ref_get(v___y_1098_);
v_toGoalState_1109_ = lean_ctor_get(v___x_1108_, 0);
lean_inc_ref(v_toGoalState_1109_);
lean_dec(v___x_1108_);
v_ematch_1110_ = lean_ctor_get(v_toGoalState_1109_, 14);
lean_inc_ref(v_ematch_1110_);
lean_dec_ref(v_toGoalState_1109_);
v_newThms_1111_ = lean_ctor_get(v_ematch_1110_, 3);
lean_inc_ref(v_newThms_1111_);
lean_dec_ref(v_ematch_1110_);
v_size_1112_ = lean_ctor_get(v_newThms_1111_, 2);
lean_inc(v_size_1112_);
lean_dec_ref(v_newThms_1111_);
v___x_1113_ = lean_nat_dec_eq(v_size_1112_, v_size_1041_);
lean_dec(v_size_1112_);
if (v___x_1113_ == 0)
{
lean_dec(v_a_1094_);
lean_dec(v_a_1091_);
lean_dec_ref(v___x_1026_);
lean_dec(v_a_1025_);
v___y_1043_ = v___y_1098_;
v___y_1044_ = v___y_1102_;
v___y_1045_ = v___y_1103_;
v___y_1046_ = v___y_1104_;
v___y_1047_ = v___y_1105_;
v___y_1048_ = v___y_1106_;
v___y_1049_ = v___y_1107_;
goto v___jp_1042_;
}
else
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__3));
v___x_1115_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_mkEMatchTheoremWithKind_x27_x3f(v_a_1025_, v___x_1026_, v___x_1114_, v_a_1094_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
if (lean_obj_tag(v___x_1115_) == 0)
{
lean_object* v_a_1116_; 
v_a_1116_ = lean_ctor_get(v___x_1115_, 0);
lean_inc(v_a_1116_);
lean_dec_ref_known(v___x_1115_, 1);
if (lean_obj_tag(v_a_1116_) == 1)
{
lean_object* v_val_1117_; lean_object* v___x_1118_; 
v_val_1117_ = lean_ctor_get(v_a_1116_, 0);
lean_inc(v_val_1117_);
lean_dec_ref_known(v_a_1116_, 1);
v___x_1118_ = l_Lean_Meta_Grind_activateTheorem(v_val_1117_, v_a_1091_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
if (lean_obj_tag(v___x_1118_) == 0)
{
lean_dec_ref_known(v___x_1118_, 1);
v___y_1043_ = v___y_1098_;
v___y_1044_ = v___y_1102_;
v___y_1045_ = v___y_1103_;
v___y_1046_ = v___y_1104_;
v___y_1047_ = v___y_1105_;
v___y_1048_ = v___y_1106_;
v___y_1049_ = v___y_1107_;
goto v___jp_1042_;
}
else
{
lean_dec(v_size_1041_);
lean_del_object(v___x_1030_);
lean_dec_ref(v_e_1010_);
return v___x_1118_;
}
}
else
{
lean_dec(v_a_1116_);
lean_dec(v_a_1091_);
v___y_1043_ = v___y_1098_;
v___y_1044_ = v___y_1102_;
v___y_1045_ = v___y_1103_;
v___y_1046_ = v___y_1104_;
v___y_1047_ = v___y_1105_;
v___y_1048_ = v___y_1106_;
v___y_1049_ = v___y_1107_;
goto v___jp_1042_;
}
}
else
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
lean_dec(v_a_1091_);
lean_dec(v_size_1041_);
lean_del_object(v___x_1030_);
lean_dec_ref(v_e_1010_);
v_a_1119_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1115_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1115_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1119_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
}
v___jp_1127_:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1139_ = lean_box(7);
lean_inc(v_a_1094_);
lean_inc_ref(v___x_1026_);
lean_inc(v_a_1025_);
v___x_1140_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_mkEMatchTheoremWithKind_x27_x3f(v_a_1025_, v___x_1026_, v___x_1139_, v_a_1094_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v_a_1141_; 
v_a_1141_ = lean_ctor_get(v___x_1140_, 0);
lean_inc(v_a_1141_);
lean_dec_ref_known(v___x_1140_, 1);
if (lean_obj_tag(v_a_1141_) == 1)
{
lean_object* v_val_1142_; uint8_t v___x_1143_; 
v_val_1142_ = lean_ctor_get(v_a_1141_, 0);
lean_inc(v_val_1142_);
lean_dec_ref_known(v_a_1141_, 1);
v___x_1143_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isNewPat(v_patternsFoundSoFar_1128_, v_val_1142_);
lean_dec_ref(v_patternsFoundSoFar_1128_);
if (v___x_1143_ == 0)
{
lean_dec(v_val_1142_);
v___y_1098_ = v___y_1129_;
v___y_1099_ = v___y_1130_;
v___y_1100_ = v___y_1131_;
v___y_1101_ = v___y_1132_;
v___y_1102_ = v___y_1133_;
v___y_1103_ = v___y_1134_;
v___y_1104_ = v___y_1135_;
v___y_1105_ = v___y_1136_;
v___y_1106_ = v___y_1137_;
v___y_1107_ = v___y_1138_;
goto v___jp_1097_;
}
else
{
lean_object* v___x_1144_; 
lean_inc(v_a_1091_);
v___x_1144_ = l_Lean_Meta_Grind_activateTheorem(v_val_1142_, v_a_1091_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_dec_ref_known(v___x_1144_, 1);
v___y_1098_ = v___y_1129_;
v___y_1099_ = v___y_1130_;
v___y_1100_ = v___y_1131_;
v___y_1101_ = v___y_1132_;
v___y_1102_ = v___y_1133_;
v___y_1103_ = v___y_1134_;
v___y_1104_ = v___y_1135_;
v___y_1105_ = v___y_1136_;
v___y_1106_ = v___y_1137_;
v___y_1107_ = v___y_1138_;
goto v___jp_1097_;
}
else
{
lean_dec(v_a_1094_);
lean_dec(v_a_1091_);
lean_dec(v_size_1041_);
lean_del_object(v___x_1030_);
lean_dec_ref(v___x_1026_);
lean_dec(v_a_1025_);
lean_dec_ref(v_e_1010_);
return v___x_1144_;
}
}
}
else
{
lean_dec(v_a_1141_);
lean_dec_ref(v_patternsFoundSoFar_1128_);
v___y_1098_ = v___y_1129_;
v___y_1099_ = v___y_1130_;
v___y_1100_ = v___y_1131_;
v___y_1101_ = v___y_1132_;
v___y_1102_ = v___y_1133_;
v___y_1103_ = v___y_1134_;
v___y_1104_ = v___y_1135_;
v___y_1105_ = v___y_1136_;
v___y_1106_ = v___y_1137_;
v___y_1107_ = v___y_1138_;
goto v___jp_1097_;
}
}
else
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
lean_dec_ref(v_patternsFoundSoFar_1128_);
lean_dec(v_a_1094_);
lean_dec(v_a_1091_);
lean_dec(v_size_1041_);
lean_del_object(v___x_1030_);
lean_dec_ref(v___x_1026_);
lean_dec(v_a_1025_);
lean_dec_ref(v_e_1010_);
v_a_1145_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v___x_1140_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1140_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
else
{
lean_object* v_a_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1198_; 
lean_dec(v_a_1091_);
lean_dec(v_size_1041_);
lean_del_object(v___x_1030_);
lean_dec_ref(v___x_1026_);
lean_dec(v_a_1025_);
lean_dec_ref(v_e_1010_);
v_a_1191_ = lean_ctor_get(v___x_1093_, 0);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1193_ = v___x_1093_;
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_a_1191_);
lean_dec(v___x_1093_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1196_; 
if (v_isShared_1194_ == 0)
{
v___x_1196_ = v___x_1193_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_a_1191_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
return v___x_1196_;
}
}
}
}
else
{
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1206_; 
lean_dec(v_size_1041_);
lean_del_object(v___x_1030_);
lean_dec_ref(v___x_1026_);
lean_dec(v_a_1025_);
lean_dec_ref(v_e_1010_);
v_a_1199_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1201_ = v___x_1090_;
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1090_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1204_; 
if (v_isShared_1202_ == 0)
{
v___x_1204_ = v___x_1201_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_a_1199_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
}
v___jp_1042_:
{
lean_object* v___x_1050_; lean_object* v_toGoalState_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1088_; 
v___x_1050_ = lean_st_ref_get(v___y_1043_);
v_toGoalState_1051_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1088_ == 0)
{
lean_object* v_unused_1089_; 
v_unused_1089_ = lean_ctor_get(v___x_1050_, 1);
lean_dec(v_unused_1089_);
v___x_1053_ = v___x_1050_;
v_isShared_1054_ = v_isSharedCheck_1088_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_toGoalState_1051_);
lean_dec(v___x_1050_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1088_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v_ematch_1055_; lean_object* v_newThms_1056_; lean_object* v_size_1057_; uint8_t v___x_1058_; 
v_ematch_1055_ = lean_ctor_get(v_toGoalState_1051_, 14);
lean_inc_ref(v_ematch_1055_);
lean_dec_ref(v_toGoalState_1051_);
v_newThms_1056_ = lean_ctor_get(v_ematch_1055_, 3);
lean_inc_ref(v_newThms_1056_);
lean_dec_ref(v_ematch_1055_);
v_size_1057_ = lean_ctor_get(v_newThms_1056_, 2);
lean_inc(v_size_1057_);
lean_dec_ref(v_newThms_1056_);
v___x_1058_ = lean_nat_dec_eq(v_size_1057_, v_size_1041_);
lean_dec(v_size_1041_);
lean_dec(v_size_1057_);
if (v___x_1058_ == 0)
{
lean_object* v___x_1059_; lean_object* v___x_1061_; 
lean_del_object(v___x_1053_);
lean_dec_ref(v_e_1010_);
v___x_1059_ = lean_box(0);
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 0, v___x_1059_);
v___x_1061_ = v___x_1030_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1059_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
else
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1066_; 
lean_del_object(v___x_1030_);
v___x_1063_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__1, &l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___closed__1);
v___x_1064_ = l_Lean_indentExpr(v_e_1010_);
if (v_isShared_1054_ == 0)
{
lean_ctor_set_tag(v___x_1053_, 7);
lean_ctor_set(v___x_1053_, 1, v___x_1064_);
lean_ctor_set(v___x_1053_, 0, v___x_1063_);
v___x_1066_ = v___x_1053_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1063_);
lean_ctor_set(v_reuseFailAlloc_1087_, 1, v___x_1064_);
v___x_1066_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Lean_Meta_Sym_getConfig___redArg(v___y_1044_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1078_; 
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1070_ = v___x_1067_;
v_isShared_1071_ = v_isSharedCheck_1078_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1067_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1078_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
uint8_t v_verbose_1072_; 
v_verbose_1072_ = lean_ctor_get_uint8(v_a_1068_, 0);
lean_dec(v_a_1068_);
if (v_verbose_1072_ == 0)
{
lean_object* v___x_1073_; lean_object* v___x_1075_; 
lean_dec_ref(v___x_1066_);
v___x_1073_ = lean_box(0);
if (v_isShared_1071_ == 0)
{
lean_ctor_set(v___x_1070_, 0, v___x_1073_);
v___x_1075_ = v___x_1070_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v___x_1073_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
else
{
lean_object* v___x_1077_; 
lean_del_object(v___x_1070_);
v___x_1077_ = l_Lean_Meta_Sym_reportIssue(v___x_1066_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_);
return v___x_1077_;
}
}
}
else
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
lean_dec_ref(v___x_1066_);
v_a_1079_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1067_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1067_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1215_; 
lean_dec_ref(v___x_1026_);
lean_dec(v_a_1025_);
lean_dec_ref(v_e_1010_);
v_a_1208_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1215_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1215_ == 0)
{
v___x_1210_ = v___x_1027_;
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_a_1208_);
lean_dec(v___x_1027_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1213_; 
if (v_isShared_1211_ == 0)
{
v___x_1213_ = v___x_1210_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_a_1208_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
}
}
}
}
else
{
lean_object* v_a_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1223_; 
lean_dec(v_a_1023_);
lean_dec_ref(v_e_1010_);
v_a_1216_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1218_ = v___x_1024_;
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_a_1216_);
lean_dec(v___x_1024_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1221_; 
if (v_isShared_1219_ == 0)
{
v___x_1221_ = v___x_1218_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v_a_1216_);
v___x_1221_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
return v___x_1221_;
}
}
}
}
else
{
lean_object* v_a_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1231_; 
lean_dec_ref(v_e_1010_);
v_a_1224_ = lean_ctor_get(v___x_1022_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1022_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1226_ = v___x_1022_;
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_a_1224_);
lean_dec(v___x_1022_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1229_; 
if (v_isShared_1227_ == 0)
{
v___x_1229_ = v___x_1226_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v_a_1224_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems___boxed(lean_object* v_e_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems(v_e_1232_, v_a_1233_, v_a_1234_, v_a_1235_, v_a_1236_, v_a_1237_, v_a_1238_, v_a_1239_, v_a_1240_, v_a_1241_, v_a_1242_);
lean_dec(v_a_1242_);
lean_dec_ref(v_a_1241_);
lean_dec(v_a_1240_);
lean_dec_ref(v_a_1239_);
lean_dec(v_a_1238_);
lean_dec_ref(v_a_1237_);
lean_dec(v_a_1236_);
lean_dec_ref(v_a_1235_);
lean_dec(v_a_1234_);
lean_dec(v_a_1233_);
return v_res_1244_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateForallPropDown___closed__2(void){
_start:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1249_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropDown___closed__1));
v___x_1250_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropUp___lam__0___closed__1));
v___x_1251_ = l_Lean_Name_append(v___x_1250_, v___x_1249_);
return v___x_1251_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateForallPropDown___closed__4(void){
_start:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1253_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropDown___closed__3));
v___x_1254_ = l_Lean_stringToMessageData(v___x_1253_);
return v___x_1254_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateForallPropDown___closed__11(void){
_start:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1268_ = lean_box(0);
v___x_1269_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropDown___closed__10));
v___x_1270_ = l_Lean_mkConst(v___x_1269_, v___x_1268_);
return v___x_1270_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateForallPropDown___closed__14(void){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1276_ = lean_box(0);
v___x_1277_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropDown___closed__13));
v___x_1278_ = l_Lean_mkConst(v___x_1277_, v___x_1276_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateForallPropDown(lean_object* v_e_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_){
_start:
{
if (lean_obj_tag(v_e_1279_) == 7)
{
lean_object* v_binderName_1294_; lean_object* v_binderType_1295_; lean_object* v_body_1296_; uint8_t v_binderInfo_1297_; lean_object* v___y_1299_; lean_object* v___y_1300_; lean_object* v___y_1301_; lean_object* v___y_1302_; lean_object* v___y_1303_; lean_object* v___y_1304_; lean_object* v___y_1305_; lean_object* v___y_1306_; lean_object* v___y_1307_; lean_object* v___y_1308_; lean_object* v___x_1394_; 
v_binderName_1294_ = lean_ctor_get(v_e_1279_, 0);
v_binderType_1295_ = lean_ctor_get(v_e_1279_, 1);
v_body_1296_ = lean_ctor_get(v_e_1279_, 2);
v_binderInfo_1297_ = lean_ctor_get_uint8(v_e_1279_, sizeof(void*)*3 + 8);
lean_inc_ref(v_e_1279_);
v___x_1394_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_1279_, v_a_1280_, v_a_1284_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v_a_1395_; uint8_t v___x_1396_; 
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_a_1395_);
lean_dec_ref_known(v___x_1394_, 1);
v___x_1396_ = lean_unbox(v_a_1395_);
lean_dec(v_a_1395_);
if (v___x_1396_ == 0)
{
lean_object* v___x_1397_; 
lean_inc_ref(v_e_1279_);
v___x_1397_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_1279_, v_a_1280_, v_a_1284_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
if (lean_obj_tag(v___x_1397_) == 0)
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1482_; 
v_a_1398_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1482_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1400_ = v___x_1397_;
v_isShared_1401_ = v_isSharedCheck_1482_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1397_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1482_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
uint8_t v___x_1402_; 
v___x_1402_ = lean_unbox(v_a_1398_);
lean_dec(v_a_1398_);
if (v___x_1402_ == 0)
{
lean_object* v___x_1403_; lean_object* v___x_1405_; 
lean_dec_ref_known(v_e_1279_, 3);
v___x_1403_ = lean_box(0);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 0, v___x_1403_);
v___x_1405_ = v___x_1400_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v___x_1403_);
v___x_1405_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
return v___x_1405_;
}
}
else
{
lean_object* v___x_1407_; 
lean_del_object(v___x_1400_);
lean_inc_ref(v_e_1279_);
v___x_1407_ = l_Lean_Meta_Grind_eqResolution(v_e_1279_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v_a_1408_; 
v_a_1408_ = lean_ctor_get(v___x_1407_, 0);
lean_inc(v_a_1408_);
lean_dec_ref_known(v___x_1407_, 1);
if (lean_obj_tag(v_a_1408_) == 1)
{
lean_object* v_val_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1473_; 
v_val_1409_ = lean_ctor_get(v_a_1408_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v_a_1408_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1411_ = v_a_1408_;
v_isShared_1412_ = v_isSharedCheck_1473_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_val_1409_);
lean_dec(v_a_1408_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1473_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v_fst_1413_; lean_object* v_snd_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1472_; 
v_fst_1413_ = lean_ctor_get(v_val_1409_, 0);
v_snd_1414_ = lean_ctor_get(v_val_1409_, 1);
v_isSharedCheck_1472_ = !lean_is_exclusive(v_val_1409_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1416_ = v_val_1409_;
v_isShared_1417_ = v_isSharedCheck_1472_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_snd_1414_);
lean_inc(v_fst_1413_);
lean_dec(v_val_1409_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1472_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v___y_1422_; lean_object* v___y_1423_; lean_object* v___y_1424_; lean_object* v___y_1425_; lean_object* v___y_1426_; lean_object* v___y_1427_; lean_object* v___y_1428_; lean_object* v_toCold_1456_; lean_object* v_options_1457_; uint8_t v_hasTrace_1458_; 
v_toCold_1456_ = lean_ctor_get(v_a_1288_, 0);
v_options_1457_ = lean_ctor_get(v_toCold_1456_, 2);
v_hasTrace_1458_ = lean_ctor_get_uint8(v_options_1457_, sizeof(void*)*1);
if (v_hasTrace_1458_ == 0)
{
lean_del_object(v___x_1416_);
v___y_1419_ = v_a_1280_;
v___y_1420_ = v_a_1281_;
v___y_1421_ = v_a_1282_;
v___y_1422_ = v_a_1283_;
v___y_1423_ = v_a_1284_;
v___y_1424_ = v_a_1285_;
v___y_1425_ = v_a_1286_;
v___y_1426_ = v_a_1287_;
v___y_1427_ = v_a_1288_;
v___y_1428_ = v_a_1289_;
goto v___jp_1418_;
}
else
{
lean_object* v_inheritedTraceOptions_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; uint8_t v___x_1462_; 
v_inheritedTraceOptions_1459_ = lean_ctor_get(v_toCold_1456_, 11);
v___x_1460_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropDown___closed__1));
v___x_1461_ = lean_obj_once(&l_Lean_Meta_Grind_propagateForallPropDown___closed__2, &l_Lean_Meta_Grind_propagateForallPropDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateForallPropDown___closed__2);
v___x_1462_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1459_, v_options_1457_, v___x_1461_);
if (v___x_1462_ == 0)
{
lean_del_object(v___x_1416_);
v___y_1419_ = v_a_1280_;
v___y_1420_ = v_a_1281_;
v___y_1421_ = v_a_1282_;
v___y_1422_ = v_a_1283_;
v___y_1423_ = v_a_1284_;
v___y_1424_ = v_a_1285_;
v___y_1425_ = v_a_1286_;
v___y_1426_ = v_a_1287_;
v___y_1427_ = v_a_1288_;
v___y_1428_ = v_a_1289_;
goto v___jp_1418_;
}
else
{
lean_object* v___x_1463_; 
v___x_1463_ = l_Lean_Meta_Grind_updateLastTag(v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_, v_a_1284_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1467_; 
lean_dec_ref_known(v___x_1463_, 1);
lean_inc_ref(v_e_1279_);
v___x_1464_ = l_Lean_MessageData_ofExpr(v_e_1279_);
v___x_1465_ = lean_obj_once(&l_Lean_Meta_Grind_propagateForallPropDown___closed__4, &l_Lean_Meta_Grind_propagateForallPropDown___closed__4_once, _init_l_Lean_Meta_Grind_propagateForallPropDown___closed__4);
if (v_isShared_1417_ == 0)
{
lean_ctor_set_tag(v___x_1416_, 7);
lean_ctor_set(v___x_1416_, 1, v___x_1465_);
lean_ctor_set(v___x_1416_, 0, v___x_1464_);
v___x_1467_ = v___x_1416_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1464_);
lean_ctor_set(v_reuseFailAlloc_1471_, 1, v___x_1465_);
v___x_1467_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
lean_inc(v_fst_1413_);
v___x_1468_ = l_Lean_MessageData_ofExpr(v_fst_1413_);
v___x_1469_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1467_);
lean_ctor_set(v___x_1469_, 1, v___x_1468_);
v___x_1470_ = l_Lean_addTrace___at___00Lean_Meta_Grind_propagateForallPropUp_spec__0___redArg(v___x_1460_, v___x_1469_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_dec_ref_known(v___x_1470_, 1);
v___y_1419_ = v_a_1280_;
v___y_1420_ = v_a_1281_;
v___y_1421_ = v_a_1282_;
v___y_1422_ = v_a_1283_;
v___y_1423_ = v_a_1284_;
v___y_1424_ = v_a_1285_;
v___y_1425_ = v_a_1286_;
v___y_1426_ = v_a_1287_;
v___y_1427_ = v_a_1288_;
v___y_1428_ = v_a_1289_;
goto v___jp_1418_;
}
else
{
lean_dec(v_snd_1414_);
lean_dec(v_fst_1413_);
lean_del_object(v___x_1411_);
lean_dec_ref_known(v_e_1279_, 3);
return v___x_1470_;
}
}
}
else
{
lean_del_object(v___x_1416_);
lean_dec(v_snd_1414_);
lean_dec(v_fst_1413_);
lean_del_object(v___x_1411_);
lean_dec_ref_known(v_e_1279_, 3);
return v___x_1463_;
}
}
}
v___jp_1418_:
{
lean_object* v___x_1429_; 
lean_inc_ref(v_e_1279_);
v___x_1429_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_1279_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_);
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_object* v_a_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; 
v_a_1430_ = lean_ctor_get(v___x_1429_, 0);
lean_inc(v_a_1430_);
lean_dec_ref_known(v___x_1429_, 1);
lean_inc_ref(v_e_1279_);
v___x_1431_ = l_Lean_Meta_mkOfEqTrueCore(v_e_1279_, v_a_1430_);
v___x_1432_ = l_Lean_Expr_app___override(v_snd_1414_, v___x_1431_);
v___x_1433_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_1279_, v___y_1419_);
if (lean_obj_tag(v___x_1433_) == 0)
{
lean_object* v_a_1434_; lean_object* v___x_1436_; 
v_a_1434_ = lean_ctor_get(v___x_1433_, 0);
lean_inc(v_a_1434_);
lean_dec_ref_known(v___x_1433_, 1);
lean_inc_ref(v_e_1279_);
if (v_isShared_1412_ == 0)
{
lean_ctor_set_tag(v___x_1411_, 4);
lean_ctor_set(v___x_1411_, 0, v_e_1279_);
v___x_1436_ = v___x_1411_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_e_1279_);
v___x_1436_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___x_1437_ = lean_box(1);
v___x_1438_ = l_Lean_Meta_Grind_addNewRawFact___redArg(v___x_1432_, v_fst_1413_, v_a_1434_, v___x_1436_, v___x_1437_, v___y_1419_, v___y_1421_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_dec_ref_known(v___x_1438_, 1);
v___y_1299_ = v___y_1419_;
v___y_1300_ = v___y_1420_;
v___y_1301_ = v___y_1421_;
v___y_1302_ = v___y_1422_;
v___y_1303_ = v___y_1423_;
v___y_1304_ = v___y_1424_;
v___y_1305_ = v___y_1425_;
v___y_1306_ = v___y_1426_;
v___y_1307_ = v___y_1427_;
v___y_1308_ = v___y_1428_;
goto v___jp_1298_;
}
else
{
lean_dec_ref_known(v_e_1279_, 3);
return v___x_1438_;
}
}
}
else
{
lean_object* v_a_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1447_; 
lean_dec_ref(v___x_1432_);
lean_dec(v_fst_1413_);
lean_del_object(v___x_1411_);
lean_dec_ref_known(v_e_1279_, 3);
v_a_1440_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1447_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1442_ = v___x_1433_;
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_a_1440_);
lean_dec(v___x_1433_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1445_; 
if (v_isShared_1443_ == 0)
{
v___x_1445_ = v___x_1442_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v_a_1440_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
}
else
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1455_; 
lean_dec(v_snd_1414_);
lean_dec(v_fst_1413_);
lean_del_object(v___x_1411_);
lean_dec_ref_known(v_e_1279_, 3);
v_a_1448_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1450_ = v___x_1429_;
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1429_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1453_; 
if (v_isShared_1451_ == 0)
{
v___x_1453_ = v___x_1450_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_a_1448_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_1408_);
v___y_1299_ = v_a_1280_;
v___y_1300_ = v_a_1281_;
v___y_1301_ = v_a_1282_;
v___y_1302_ = v_a_1283_;
v___y_1303_ = v_a_1284_;
v___y_1304_ = v_a_1285_;
v___y_1305_ = v_a_1286_;
v___y_1306_ = v_a_1287_;
v___y_1307_ = v_a_1288_;
v___y_1308_ = v_a_1289_;
goto v___jp_1298_;
}
}
else
{
lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1481_; 
lean_dec_ref_known(v_e_1279_, 3);
v_a_1474_ = lean_ctor_get(v___x_1407_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1476_ = v___x_1407_;
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___x_1407_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1479_; 
if (v_isShared_1477_ == 0)
{
v___x_1479_ = v___x_1476_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_a_1474_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
}
}
else
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1490_; 
lean_dec_ref_known(v_e_1279_, 3);
v_a_1483_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1485_ = v___x_1397_;
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1397_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1488_; 
if (v_isShared_1486_ == 0)
{
v___x_1488_ = v___x_1485_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_a_1483_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
else
{
lean_object* v___x_1491_; 
lean_inc_ref(v_binderType_1295_);
v___x_1491_ = l_Lean_Meta_isProp(v_binderType_1295_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
if (lean_obj_tag(v___x_1491_) == 0)
{
lean_object* v_a_1492_; uint8_t v___x_1538_; 
v_a_1492_ = lean_ctor_get(v___x_1491_, 0);
lean_inc(v_a_1492_);
lean_dec_ref_known(v___x_1491_, 1);
v___x_1538_ = l_Lean_Expr_hasLooseBVars(v_body_1296_);
if (v___x_1538_ == 0)
{
uint8_t v___x_1539_; 
v___x_1539_ = lean_unbox(v_a_1492_);
lean_dec(v_a_1492_);
if (v___x_1539_ == 0)
{
goto v___jp_1493_;
}
else
{
lean_object* v___x_1540_; 
lean_inc_ref(v_body_1296_);
lean_inc_ref(v_binderType_1295_);
v___x_1540_ = l_Lean_Meta_Grind_mkEqFalseProof(v_e_1279_, v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_, v_a_1284_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
lean_inc_n(v_a_1541_, 2);
lean_dec_ref_known(v___x_1540_, 1);
v___x_1542_ = lean_obj_once(&l_Lean_Meta_Grind_propagateForallPropDown___closed__11, &l_Lean_Meta_Grind_propagateForallPropDown___closed__11_once, _init_l_Lean_Meta_Grind_propagateForallPropDown___closed__11);
lean_inc_ref(v_body_1296_);
lean_inc_ref_n(v_binderType_1295_, 2);
v___x_1543_ = l_Lean_mkApp3(v___x_1542_, v_binderType_1295_, v_body_1296_, v_a_1541_);
v___x_1544_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_binderType_1295_, v___x_1543_, v_a_1280_, v_a_1282_, v_a_1284_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
if (lean_obj_tag(v___x_1544_) == 0)
{
lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
lean_dec_ref_known(v___x_1544_, 1);
v___x_1545_ = lean_obj_once(&l_Lean_Meta_Grind_propagateForallPropDown___closed__14, &l_Lean_Meta_Grind_propagateForallPropDown___closed__14_once, _init_l_Lean_Meta_Grind_propagateForallPropDown___closed__14);
lean_inc_ref(v_body_1296_);
v___x_1546_ = l_Lean_mkApp3(v___x_1545_, v_binderType_1295_, v_body_1296_, v_a_1541_);
v___x_1547_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_body_1296_, v___x_1546_, v_a_1280_, v_a_1282_, v_a_1284_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
return v___x_1547_;
}
else
{
lean_dec(v_a_1541_);
lean_dec_ref(v_body_1296_);
lean_dec_ref(v_binderType_1295_);
return v___x_1544_;
}
}
else
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1555_; 
lean_dec_ref(v_body_1296_);
lean_dec_ref(v_binderType_1295_);
v_a_1548_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1550_ = v___x_1540_;
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1540_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1553_; 
if (v_isShared_1551_ == 0)
{
v___x_1553_ = v___x_1550_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_a_1548_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
}
}
else
{
lean_dec(v_a_1492_);
goto v___jp_1493_;
}
v___jp_1493_:
{
lean_object* v___x_1494_; 
lean_inc_ref(v_binderType_1295_);
v___x_1494_ = l_Lean_Meta_getLevel(v_binderType_1295_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v_a_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; 
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
lean_inc(v_a_1495_);
lean_dec_ref_known(v___x_1494_, 1);
v___x_1496_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropDown___closed__6));
v___x_1497_ = lean_box(0);
v___x_1498_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1498_, 0, v_a_1495_);
lean_ctor_set(v___x_1498_, 1, v___x_1497_);
lean_inc_ref(v___x_1498_);
v___x_1499_ = l_Lean_mkConst(v___x_1496_, v___x_1498_);
lean_inc_ref(v_body_1296_);
v___x_1500_ = l_Lean_mkNot(v_body_1296_);
lean_inc_ref_n(v_binderType_1295_, 2);
lean_inc(v_binderName_1294_);
v___x_1501_ = l_Lean_mkLambda(v_binderName_1294_, v_binderInfo_1297_, v_binderType_1295_, v___x_1500_);
v___x_1502_ = l_Lean_mkAppB(v___x_1499_, v_binderType_1295_, v___x_1501_);
lean_inc_ref(v_e_1279_);
v___x_1503_ = l_Lean_Meta_Grind_mkEqFalseProof(v_e_1279_, v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_, v_a_1284_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
if (lean_obj_tag(v___x_1503_) == 0)
{
lean_object* v_a_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v_a_1504_ = lean_ctor_get(v___x_1503_, 0);
lean_inc(v_a_1504_);
lean_dec_ref_known(v___x_1503_, 1);
v___x_1505_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropDown___closed__8));
v___x_1506_ = l_Lean_mkConst(v___x_1505_, v___x_1498_);
lean_inc_ref(v_body_1296_);
lean_inc_ref_n(v_binderType_1295_, 2);
lean_inc(v_binderName_1294_);
v___x_1507_ = l_Lean_mkLambda(v_binderName_1294_, v_binderInfo_1297_, v_binderType_1295_, v_body_1296_);
v___x_1508_ = l_Lean_mkApp3(v___x_1506_, v_binderType_1295_, v___x_1507_, v_a_1504_);
v___x_1509_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_1279_, v_a_1280_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v_a_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
v_a_1510_ = lean_ctor_get(v___x_1509_, 0);
lean_inc(v_a_1510_);
lean_dec_ref_known(v___x_1509_, 1);
v___x_1511_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1511_, 0, v_e_1279_);
v___x_1512_ = lean_box(1);
v___x_1513_ = l_Lean_Meta_Grind_addNewRawFact___redArg(v___x_1508_, v___x_1502_, v_a_1510_, v___x_1511_, v___x_1512_, v_a_1280_, v_a_1282_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
return v___x_1513_;
}
else
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1521_; 
lean_dec_ref(v___x_1508_);
lean_dec_ref(v___x_1502_);
lean_dec_ref_known(v_e_1279_, 3);
v_a_1514_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1516_ = v___x_1509_;
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1509_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1519_; 
if (v_isShared_1517_ == 0)
{
v___x_1519_ = v___x_1516_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_a_1514_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
}
}
}
}
else
{
lean_object* v_a_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1529_; 
lean_dec_ref(v___x_1502_);
lean_dec_ref_known(v___x_1498_, 2);
lean_dec_ref_known(v_e_1279_, 3);
v_a_1522_ = lean_ctor_get(v___x_1503_, 0);
v_isSharedCheck_1529_ = !lean_is_exclusive(v___x_1503_);
if (v_isSharedCheck_1529_ == 0)
{
v___x_1524_ = v___x_1503_;
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_a_1522_);
lean_dec(v___x_1503_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1527_; 
if (v_isShared_1525_ == 0)
{
v___x_1527_ = v___x_1524_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v_a_1522_);
v___x_1527_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
return v___x_1527_;
}
}
}
}
else
{
lean_object* v_a_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1537_; 
lean_dec_ref_known(v_e_1279_, 3);
v_a_1530_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1532_ = v___x_1494_;
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_a_1530_);
lean_dec(v___x_1494_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___x_1535_; 
if (v_isShared_1533_ == 0)
{
v___x_1535_ = v___x_1532_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_a_1530_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
}
}
}
else
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
lean_dec_ref_known(v_e_1279_, 3);
v_a_1556_ = lean_ctor_get(v___x_1491_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1491_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v___x_1491_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1491_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
if (v_isShared_1559_ == 0)
{
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_a_1556_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
}
}
else
{
lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1571_; 
lean_dec_ref_known(v_e_1279_, 3);
v_a_1564_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1566_ = v___x_1394_;
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_dec(v___x_1394_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1564_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
}
v___jp_1298_:
{
uint8_t v___x_1309_; 
v___x_1309_ = l_Lean_Expr_hasLooseBVars(v_body_1296_);
if (v___x_1309_ == 0)
{
lean_object* v___x_1310_; 
lean_inc_ref(v_body_1296_);
lean_inc_ref(v_binderType_1295_);
v___x_1310_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_body_1296_, v___y_1299_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1365_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1313_ = v___x_1310_;
v_isShared_1314_ = v_isSharedCheck_1365_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1310_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1365_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
uint8_t v___x_1315_; 
v___x_1315_ = lean_unbox(v_a_1311_);
lean_dec(v_a_1311_);
if (v___x_1315_ == 0)
{
lean_object* v___x_1316_; lean_object* v___x_1318_; 
lean_dec_ref(v_body_1296_);
lean_dec_ref(v_binderType_1295_);
lean_dec_ref_known(v_e_1279_, 3);
v___x_1316_ = lean_box(0);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 0, v___x_1316_);
v___x_1318_ = v___x_1313_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v___x_1316_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
else
{
lean_object* v___x_1320_; 
lean_del_object(v___x_1313_);
lean_inc_ref(v_body_1296_);
v___x_1320_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_body_1296_, v___y_1299_, v___y_1303_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; uint8_t v___x_1322_; 
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
lean_inc(v_a_1321_);
lean_dec_ref_known(v___x_1320_, 1);
v___x_1322_ = lean_unbox(v_a_1321_);
lean_dec(v_a_1321_);
if (v___x_1322_ == 0)
{
lean_dec_ref(v_body_1296_);
lean_dec_ref(v_binderType_1295_);
lean_dec_ref_known(v_e_1279_, 3);
goto v___jp_1291_;
}
else
{
lean_object* v___x_1323_; 
lean_inc_ref(v_binderType_1295_);
v___x_1323_ = l_Lean_Meta_isProp(v_binderType_1295_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v_a_1324_; uint8_t v___x_1325_; 
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
lean_inc(v_a_1324_);
lean_dec_ref_known(v___x_1323_, 1);
v___x_1325_ = lean_unbox(v_a_1324_);
lean_dec(v_a_1324_);
if (v___x_1325_ == 0)
{
lean_dec_ref(v_body_1296_);
lean_dec_ref(v_binderType_1295_);
lean_dec_ref_known(v_e_1279_, 3);
goto v___jp_1291_;
}
else
{
lean_object* v___x_1326_; 
v___x_1326_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_1279_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; lean_object* v___x_1328_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_a_1327_);
lean_dec_ref_known(v___x_1326_, 1);
lean_inc_ref(v_body_1296_);
v___x_1328_ = l_Lean_Meta_Grind_mkEqFalseProof(v_body_1296_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1329_);
lean_dec_ref_known(v___x_1328_, 1);
v___x_1330_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__4, &l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateForallPropUp_propagateImpliesUp___closed__4);
lean_inc_ref(v_binderType_1295_);
v___x_1331_ = l_Lean_mkApp4(v___x_1330_, v_binderType_1295_, v_body_1296_, v_a_1327_, v_a_1329_);
v___x_1332_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_binderType_1295_, v___x_1331_, v___y_1299_, v___y_1301_, v___y_1303_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
return v___x_1332_;
}
else
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1340_; 
lean_dec(v_a_1327_);
lean_dec_ref(v_body_1296_);
lean_dec_ref(v_binderType_1295_);
v_a_1333_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1340_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1335_ = v___x_1328_;
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1328_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1338_; 
if (v_isShared_1336_ == 0)
{
v___x_1338_ = v___x_1335_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_a_1333_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
else
{
lean_object* v_a_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1348_; 
lean_dec_ref(v_body_1296_);
lean_dec_ref(v_binderType_1295_);
v_a_1341_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1343_ = v___x_1326_;
v_isShared_1344_ = v_isSharedCheck_1348_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_a_1341_);
lean_dec(v___x_1326_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1348_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1346_; 
if (v_isShared_1344_ == 0)
{
v___x_1346_ = v___x_1343_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v_a_1341_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
}
}
}
else
{
lean_object* v_a_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1356_; 
lean_dec_ref(v_body_1296_);
lean_dec_ref(v_binderType_1295_);
lean_dec_ref_known(v_e_1279_, 3);
v_a_1349_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1356_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1351_ = v___x_1323_;
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_a_1349_);
lean_dec(v___x_1323_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v___x_1354_; 
if (v_isShared_1352_ == 0)
{
v___x_1354_ = v___x_1351_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_a_1349_);
v___x_1354_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
return v___x_1354_;
}
}
}
}
}
else
{
lean_object* v_a_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1364_; 
lean_dec_ref(v_body_1296_);
lean_dec_ref(v_binderType_1295_);
lean_dec_ref_known(v_e_1279_, 3);
v_a_1357_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1359_ = v___x_1320_;
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_a_1357_);
lean_dec(v___x_1320_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1362_; 
if (v_isShared_1360_ == 0)
{
v___x_1362_ = v___x_1359_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_a_1357_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
}
}
else
{
lean_object* v_a_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1373_; 
lean_dec_ref(v_body_1296_);
lean_dec_ref(v_binderType_1295_);
lean_dec_ref_known(v_e_1279_, 3);
v_a_1366_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1373_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1368_ = v___x_1310_;
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_a_1366_);
lean_dec(v___x_1310_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1371_; 
if (v_isShared_1369_ == 0)
{
v___x_1371_ = v___x_1368_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_a_1366_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
return v___x_1371_;
}
}
}
}
else
{
lean_object* v___x_1374_; 
lean_inc_ref(v_binderType_1295_);
v___x_1374_ = l_Lean_Meta_isProp(v_binderType_1295_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
if (lean_obj_tag(v___x_1374_) == 0)
{
lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1385_; 
v_a_1375_ = lean_ctor_get(v___x_1374_, 0);
v_isSharedCheck_1385_ = !lean_is_exclusive(v___x_1374_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1377_ = v___x_1374_;
v_isShared_1378_ = v_isSharedCheck_1385_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_dec(v___x_1374_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1385_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
uint8_t v___x_1379_; 
v___x_1379_ = lean_unbox(v_a_1375_);
lean_dec(v_a_1375_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; 
lean_del_object(v___x_1377_);
v___x_1380_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_addLocalEMatchTheorems(v_e_1279_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
return v___x_1380_;
}
else
{
lean_object* v___x_1381_; lean_object* v___x_1383_; 
lean_dec_ref_known(v_e_1279_, 3);
v___x_1381_ = lean_box(0);
if (v_isShared_1378_ == 0)
{
lean_ctor_set(v___x_1377_, 0, v___x_1381_);
v___x_1383_ = v___x_1377_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1381_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
}
}
else
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1393_; 
lean_dec_ref_known(v_e_1279_, 3);
v_a_1386_ = lean_ctor_get(v___x_1374_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1374_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1388_ = v___x_1374_;
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1374_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1391_; 
if (v_isShared_1389_ == 0)
{
v___x_1391_ = v___x_1388_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_a_1386_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
}
}
}
}
else
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
lean_dec_ref(v_e_1279_);
v___x_1572_ = lean_box(0);
v___x_1573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1572_);
return v___x_1573_;
}
v___jp_1291_:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = lean_box(0);
v___x_1293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
return v___x_1293_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateForallPropDown___boxed(lean_object* v_e_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l_Lean_Meta_Grind_propagateForallPropDown(v_e_1574_, v_a_1575_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_, v_a_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
lean_dec(v_a_1584_);
lean_dec_ref(v_a_1583_);
lean_dec(v_a_1582_);
lean_dec_ref(v_a_1581_);
lean_dec(v_a_1580_);
lean_dec_ref(v_a_1579_);
lean_dec(v_a_1578_);
lean_dec_ref(v_a_1577_);
lean_dec(v_a_1576_);
lean_dec(v_a_1575_);
return v_res_1586_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateExistsDown___closed__2(void){
_start:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1590_ = lean_box(0);
v___x_1591_ = ((lean_object*)(l_Lean_Meta_Grind_propagateExistsDown___closed__1));
v___x_1592_ = l_Lean_mkConst(v___x_1591_, v___x_1590_);
return v___x_1592_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateExistsDown___closed__3(void){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1593_ = lean_unsigned_to_nat(0u);
v___x_1594_ = l_Lean_Expr_bvar___override(v___x_1593_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateExistsDown(lean_object* v_e_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_){
_start:
{
lean_object* v___x_1616_; 
lean_inc_ref(v_e_1601_);
v___x_1616_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_1601_, v_a_1602_, v_a_1606_, v_a_1608_, v_a_1609_, v_a_1610_, v_a_1611_);
if (lean_obj_tag(v___x_1616_) == 0)
{
lean_object* v_a_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1671_; 
v_a_1617_ = lean_ctor_get(v___x_1616_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1616_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1619_ = v___x_1616_;
v_isShared_1620_ = v_isSharedCheck_1671_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_a_1617_);
lean_dec(v___x_1616_);
v___x_1619_ = lean_box(0);
v_isShared_1620_ = v_isSharedCheck_1671_;
goto v_resetjp_1618_;
}
v_resetjp_1618_:
{
uint8_t v___x_1621_; 
v___x_1621_ = lean_unbox(v_a_1617_);
lean_dec(v_a_1617_);
if (v___x_1621_ == 0)
{
lean_object* v___x_1622_; lean_object* v___x_1624_; 
lean_dec_ref(v_e_1601_);
v___x_1622_ = lean_box(0);
if (v_isShared_1620_ == 0)
{
lean_ctor_set(v___x_1619_, 0, v___x_1622_);
v___x_1624_ = v___x_1619_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v___x_1622_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
else
{
lean_object* v___x_1626_; uint8_t v___x_1627_; 
lean_del_object(v___x_1619_);
v___x_1626_ = l_Lean_Expr_cleanupAnnotations(v_e_1601_);
v___x_1627_ = l_Lean_Expr_isApp(v___x_1626_);
if (v___x_1627_ == 0)
{
lean_dec_ref(v___x_1626_);
lean_dec_ref(v_e_1601_);
goto v___jp_1613_;
}
else
{
lean_object* v___x_1628_; uint8_t v___x_1629_; 
v___x_1628_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1626_);
v___x_1629_ = l_Lean_Expr_isApp(v___x_1628_);
if (v___x_1629_ == 0)
{
lean_dec_ref(v___x_1628_);
lean_dec_ref(v___x_1626_);
lean_dec_ref(v_e_1601_);
goto v___jp_1613_;
}
else
{
lean_object* v___x_1630_; lean_object* v___x_1631_; uint8_t v___x_1632_; 
v___x_1630_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1628_);
v___x_1631_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropDown___closed__6));
v___x_1632_ = l_Lean_Expr_isConstOf(v___x_1630_, v___x_1631_);
if (v___x_1632_ == 0)
{
lean_dec_ref(v___x_1630_);
lean_dec_ref(v___x_1628_);
lean_dec_ref(v___x_1626_);
lean_dec_ref(v_e_1601_);
goto v___jp_1613_;
}
else
{
lean_object* v_arg_1633_; lean_object* v_arg_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; uint8_t v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; 
v_arg_1633_ = lean_ctor_get(v___x_1626_, 1);
lean_inc_ref_n(v_arg_1633_, 2);
lean_dec_ref(v___x_1626_);
v_arg_1634_ = lean_ctor_get(v___x_1628_, 1);
lean_inc_ref_n(v_arg_1634_, 2);
lean_dec_ref(v___x_1628_);
v___x_1635_ = l_Lean_Expr_constLevels_x21(v___x_1630_);
lean_dec_ref(v___x_1630_);
v___x_1636_ = lean_obj_once(&l_Lean_Meta_Grind_propagateExistsDown___closed__2, &l_Lean_Meta_Grind_propagateExistsDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateExistsDown___closed__2);
v___x_1637_ = lean_obj_once(&l_Lean_Meta_Grind_propagateExistsDown___closed__3, &l_Lean_Meta_Grind_propagateExistsDown___closed__3_once, _init_l_Lean_Meta_Grind_propagateExistsDown___closed__3);
v___x_1638_ = l_Lean_Expr_app___override(v_arg_1633_, v___x_1637_);
v___x_1639_ = l_Lean_Expr_headBeta(v___x_1638_);
v___x_1640_ = l_Lean_Expr_app___override(v___x_1636_, v___x_1639_);
v___x_1641_ = ((lean_object*)(l_Lean_Meta_Grind_propagateExistsDown___closed__5));
v___x_1642_ = 0;
v___x_1643_ = l_Lean_mkForall(v___x_1641_, v___x_1642_, v_arg_1634_, v___x_1640_);
lean_inc_ref(v_e_1601_);
v___x_1644_ = l_Lean_Meta_Grind_mkEqFalseProof(v_e_1601_, v_a_1602_, v_a_1603_, v_a_1604_, v_a_1605_, v_a_1606_, v_a_1607_, v_a_1608_, v_a_1609_, v_a_1610_, v_a_1611_);
if (lean_obj_tag(v___x_1644_) == 0)
{
lean_object* v_a_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
v_a_1645_ = lean_ctor_get(v___x_1644_, 0);
lean_inc(v_a_1645_);
lean_dec_ref_known(v___x_1644_, 1);
v___x_1646_ = ((lean_object*)(l_Lean_Meta_Grind_propagateExistsDown___closed__7));
v___x_1647_ = l_Lean_mkConst(v___x_1646_, v___x_1635_);
lean_inc_ref(v_e_1601_);
v___x_1648_ = l_Lean_Meta_mkOfEqFalseCore(v_e_1601_, v_a_1645_);
v___x_1649_ = l_Lean_mkApp3(v___x_1647_, v_arg_1634_, v_arg_1633_, v___x_1648_);
v___x_1650_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_1601_, v_a_1602_);
if (lean_obj_tag(v___x_1650_) == 0)
{
lean_object* v_a_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v_a_1651_ = lean_ctor_get(v___x_1650_, 0);
lean_inc(v_a_1651_);
lean_dec_ref_known(v___x_1650_, 1);
v___x_1652_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1652_, 0, v_e_1601_);
v___x_1653_ = lean_box(1);
v___x_1654_ = l_Lean_Meta_Grind_addNewRawFact___redArg(v___x_1649_, v___x_1643_, v_a_1651_, v___x_1652_, v___x_1653_, v_a_1602_, v_a_1604_, v_a_1608_, v_a_1609_, v_a_1610_, v_a_1611_);
return v___x_1654_;
}
else
{
lean_object* v_a_1655_; lean_object* v___x_1657_; uint8_t v_isShared_1658_; uint8_t v_isSharedCheck_1662_; 
lean_dec_ref(v___x_1649_);
lean_dec_ref(v___x_1643_);
lean_dec_ref(v_e_1601_);
v_a_1655_ = lean_ctor_get(v___x_1650_, 0);
v_isSharedCheck_1662_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1657_ = v___x_1650_;
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
else
{
lean_inc(v_a_1655_);
lean_dec(v___x_1650_);
v___x_1657_ = lean_box(0);
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
v_resetjp_1656_:
{
lean_object* v___x_1660_; 
if (v_isShared_1658_ == 0)
{
v___x_1660_ = v___x_1657_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v_a_1655_);
v___x_1660_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
return v___x_1660_;
}
}
}
}
else
{
lean_object* v_a_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1670_; 
lean_dec_ref(v___x_1643_);
lean_dec(v___x_1635_);
lean_dec_ref(v_arg_1634_);
lean_dec_ref(v_arg_1633_);
lean_dec_ref(v_e_1601_);
v_a_1663_ = lean_ctor_get(v___x_1644_, 0);
v_isSharedCheck_1670_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1665_ = v___x_1644_;
v_isShared_1666_ = v_isSharedCheck_1670_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_a_1663_);
lean_dec(v___x_1644_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1670_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v___x_1668_; 
if (v_isShared_1666_ == 0)
{
v___x_1668_ = v___x_1665_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v_a_1663_);
v___x_1668_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
return v___x_1668_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1679_; 
lean_dec_ref(v_e_1601_);
v_a_1672_ = lean_ctor_get(v___x_1616_, 0);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1616_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1674_ = v___x_1616_;
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_a_1672_);
lean_dec(v___x_1616_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v___x_1677_; 
if (v_isShared_1675_ == 0)
{
v___x_1677_ = v___x_1674_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_a_1672_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
}
v___jp_1613_:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1614_ = lean_box(0);
v___x_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1614_);
return v___x_1615_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateExistsDown___boxed(lean_object* v_e_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l_Lean_Meta_Grind_propagateExistsDown(v_e_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_, v_a_1685_, v_a_1686_, v_a_1687_, v_a_1688_, v_a_1689_, v_a_1690_);
lean_dec(v_a_1690_);
lean_dec_ref(v_a_1689_);
lean_dec(v_a_1688_);
lean_dec_ref(v_a_1687_);
lean_dec(v_a_1686_);
lean_dec_ref(v_a_1685_);
lean_dec(v_a_1684_);
lean_dec_ref(v_a_1683_);
lean_dec(v_a_1682_);
lean_dec(v_a_1681_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateExistsDown___regBuiltin_Lean_Meta_Grind_propagateExistsDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_1871237267____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1694_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropDown___closed__6));
v___x_1695_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateExistsDown___boxed), 12, 0);
v___x_1696_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_1694_, v___x_1695_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateExistsDown___regBuiltin_Lean_Meta_Grind_propagateExistsDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_1871237267____hygCtx___hyg_9____boxed(lean_object* v_a_1697_){
_start:
{
lean_object* v_res_1698_; 
v_res_1698_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateExistsDown___regBuiltin_Lean_Meta_Grind_propagateExistsDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_1871237267____hygCtx___hyg_9_();
return v_res_1698_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__4(void){
_start:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1705_ = lean_box(0);
v___x_1706_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__3));
v___x_1707_ = l_Lean_mkConst(v___x_1706_, v___x_1705_);
return v___x_1707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f(lean_object* v_e_1708_){
_start:
{
if (lean_obj_tag(v_e_1708_) == 7)
{
lean_object* v_binderName_1709_; lean_object* v_binderType_1710_; lean_object* v_body_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v_binderName_1709_ = lean_ctor_get(v_e_1708_, 0);
v_binderType_1710_ = lean_ctor_get(v_e_1708_, 1);
v_body_1711_ = lean_ctor_get(v_e_1708_, 2);
lean_inc_ref(v_body_1711_);
lean_inc_ref(v_binderType_1710_);
v___x_1712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1712_, 0, v_binderType_1710_);
lean_ctor_set(v___x_1712_, 1, v_body_1711_);
lean_inc(v_binderName_1709_);
v___x_1713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1713_, 0, v_binderName_1709_);
lean_ctor_set(v___x_1713_, 1, v___x_1712_);
v___x_1714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1713_);
return v___x_1714_;
}
else
{
lean_object* v___x_1715_; lean_object* v___x_1716_; uint8_t v___x_1717_; 
v___x_1715_ = ((lean_object*)(l_Lean_Meta_Grind_propagateExistsDown___closed__1));
v___x_1716_ = lean_unsigned_to_nat(1u);
v___x_1717_ = l_Lean_Expr_isAppOfArity(v_e_1708_, v___x_1715_, v___x_1716_);
if (v___x_1717_ == 0)
{
lean_object* v___x_1718_; 
v___x_1718_ = lean_box(0);
return v___x_1718_;
}
else
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1719_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__1));
v___x_1720_ = l_Lean_Expr_appArg_x21(v_e_1708_);
v___x_1721_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__4, &l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__4);
v___x_1722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1722_, 0, v___x_1720_);
lean_ctor_set(v___x_1722_, 1, v___x_1721_);
v___x_1723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1719_);
lean_ctor_set(v___x_1723_, 1, v___x_1722_);
v___x_1724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1724_, 0, v___x_1723_);
return v___x_1724_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___boxed(lean_object* v_e_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f(v_e_1725_);
lean_dec_ref(v_e_1725_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpForall___lam__0(lean_object* v_fst_1727_, lean_object* v_a_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_){
_start:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; 
v___x_1737_ = lean_expr_instantiate1(v_fst_1727_, v_a_1728_);
v___x_1738_ = l_Lean_Meta_getLevel(v___x_1737_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpForall___lam__0___boxed(lean_object* v_fst_1739_, lean_object* v_a_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_){
_start:
{
lean_object* v_res_1749_; 
v_res_1749_ = l_Lean_Meta_Grind_simpForall___lam__0(v_fst_1739_, v_a_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_);
lean_dec(v___y_1747_);
lean_dec_ref(v___y_1746_);
lean_dec(v___y_1745_);
lean_dec_ref(v___y_1744_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
lean_dec(v___y_1741_);
lean_dec_ref(v_a_1740_);
lean_dec_ref(v_fst_1739_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0___redArg___lam__0(lean_object* v_k_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v_b_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_){
_start:
{
lean_object* v___x_1760_; 
lean_inc(v___y_1758_);
lean_inc_ref(v___y_1757_);
lean_inc(v___y_1756_);
lean_inc_ref(v___y_1755_);
lean_inc(v___y_1753_);
lean_inc_ref(v___y_1752_);
lean_inc(v___y_1751_);
v___x_1760_ = lean_apply_9(v_k_1750_, v_b_1754_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1755_, v___y_1756_, v___y_1757_, v___y_1758_, lean_box(0));
return v___x_1760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v_b_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_){
_start:
{
lean_object* v_res_1771_; 
v_res_1771_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0___redArg___lam__0(v_k_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v_b_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_);
lean_dec(v___y_1769_);
lean_dec_ref(v___y_1768_);
lean_dec(v___y_1767_);
lean_dec_ref(v___y_1766_);
lean_dec(v___y_1764_);
lean_dec_ref(v___y_1763_);
lean_dec(v___y_1762_);
return v_res_1771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0___redArg(lean_object* v_name_1772_, uint8_t v_bi_1773_, lean_object* v_type_1774_, lean_object* v_k_1775_, uint8_t v_kind_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v___f_1785_; lean_object* v___x_1786_; 
lean_inc(v___y_1779_);
lean_inc_ref(v___y_1778_);
lean_inc(v___y_1777_);
v___f_1785_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1785_, 0, v_k_1775_);
lean_closure_set(v___f_1785_, 1, v___y_1777_);
lean_closure_set(v___f_1785_, 2, v___y_1778_);
lean_closure_set(v___f_1785_, 3, v___y_1779_);
v___x_1786_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1772_, v_bi_1773_, v_type_1774_, v___f_1785_, v_kind_1776_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_);
if (lean_obj_tag(v___x_1786_) == 0)
{
return v___x_1786_;
}
else
{
lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1794_; 
v_a_1787_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1794_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1794_ == 0)
{
v___x_1789_ = v___x_1786_;
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1786_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1792_; 
if (v_isShared_1790_ == 0)
{
v___x_1792_ = v___x_1789_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_a_1787_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
return v___x_1792_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0___redArg___boxed(lean_object* v_name_1795_, lean_object* v_bi_1796_, lean_object* v_type_1797_, lean_object* v_k_1798_, lean_object* v_kind_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
uint8_t v_bi_boxed_1808_; uint8_t v_kind_boxed_1809_; lean_object* v_res_1810_; 
v_bi_boxed_1808_ = lean_unbox(v_bi_1796_);
v_kind_boxed_1809_ = lean_unbox(v_kind_1799_);
v_res_1810_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0___redArg(v_name_1795_, v_bi_boxed_1808_, v_type_1797_, v_k_1798_, v_kind_boxed_1809_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
lean_dec(v___y_1800_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0___redArg(lean_object* v_name_1811_, lean_object* v_type_1812_, lean_object* v_k_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_){
_start:
{
uint8_t v___x_1822_; uint8_t v___x_1823_; lean_object* v___x_1824_; 
v___x_1822_ = 0;
v___x_1823_ = 0;
v___x_1824_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0___redArg(v_name_1811_, v___x_1822_, v_type_1812_, v_k_1813_, v___x_1823_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_);
return v___x_1824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0___redArg___boxed(lean_object* v_name_1825_, lean_object* v_type_1826_, lean_object* v_k_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_){
_start:
{
lean_object* v_res_1836_; 
v_res_1836_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0___redArg(v_name_1825_, v_type_1826_, v_k_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec(v___y_1832_);
lean_dec_ref(v___y_1831_);
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
lean_dec(v___y_1828_);
return v_res_1836_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpForall___closed__13(void){
_start:
{
lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_1861_ = lean_box(0);
v___x_1862_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__12));
v___x_1863_ = l_Lean_mkConst(v___x_1862_, v___x_1861_);
return v___x_1863_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpForall___closed__16(void){
_start:
{
lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1867_ = lean_box(0);
v___x_1868_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__15));
v___x_1869_ = l_Lean_mkConst(v___x_1868_, v___x_1867_);
return v___x_1869_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpForall___closed__19(void){
_start:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1875_ = lean_box(0);
v___x_1876_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__18));
v___x_1877_ = l_Lean_mkConst(v___x_1876_, v___x_1875_);
return v___x_1877_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpForall___closed__24(void){
_start:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1886_ = lean_box(0);
v___x_1887_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__23));
v___x_1888_ = l_Lean_mkConst(v___x_1887_, v___x_1886_);
return v___x_1888_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpForall___closed__27(void){
_start:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1894_ = lean_box(0);
v___x_1895_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__26));
v___x_1896_ = l_Lean_mkConst(v___x_1895_, v___x_1894_);
return v___x_1896_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpForall___closed__30(void){
_start:
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; 
v___x_1902_ = lean_box(0);
v___x_1903_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__29));
v___x_1904_ = l_Lean_mkConst(v___x_1903_, v___x_1902_);
return v___x_1904_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpForall___closed__33(void){
_start:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1909_ = lean_box(0);
v___x_1910_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__32));
v___x_1911_ = l_Lean_mkConst(v___x_1910_, v___x_1909_);
return v___x_1911_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpForall___closed__36(void){
_start:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1917_ = lean_box(0);
v___x_1918_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__35));
v___x_1919_ = l_Lean_mkConst(v___x_1918_, v___x_1917_);
return v___x_1919_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpForall___closed__37(void){
_start:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1920_ = lean_unsigned_to_nat(0u);
v___x_1921_ = l_Lean_Level_ofNat(v___x_1920_);
return v___x_1921_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpForall___closed__38(void){
_start:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1922_ = lean_obj_once(&l_Lean_Meta_Grind_simpForall___closed__37, &l_Lean_Meta_Grind_simpForall___closed__37_once, _init_l_Lean_Meta_Grind_simpForall___closed__37);
v___x_1923_ = l_Lean_mkSort(v___x_1922_);
return v___x_1923_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpForall___closed__41(void){
_start:
{
lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1927_ = lean_box(0);
v___x_1928_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__40));
v___x_1929_ = l_Lean_mkConst(v___x_1928_, v___x_1927_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpForall(lean_object* v_e_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_){
_start:
{
lean_object* v___y_1940_; lean_object* v___y_1941_; lean_object* v___y_1942_; lean_object* v___y_1943_; 
if (lean_obj_tag(v_e_1930_) == 7)
{
lean_object* v_binderName_1981_; lean_object* v_binderType_1982_; lean_object* v_body_1983_; uint8_t v_binderInfo_1984_; lean_object* v___y_1986_; lean_object* v___y_1987_; lean_object* v___y_1988_; lean_object* v___y_1989_; lean_object* v___y_1990_; lean_object* v___y_1991_; lean_object* v___y_1992_; lean_object* v___y_2151_; lean_object* v___y_2152_; lean_object* v___y_2153_; lean_object* v___y_2154_; lean_object* v___y_2155_; lean_object* v___y_2156_; lean_object* v___y_2157_; uint8_t v___x_2243_; 
v_binderName_1981_ = lean_ctor_get(v_e_1930_, 0);
v_binderType_1982_ = lean_ctor_get(v_e_1930_, 1);
v_body_1983_ = lean_ctor_get(v_e_1930_, 2);
v_binderInfo_1984_ = lean_ctor_get_uint8(v_e_1930_, sizeof(void*)*3 + 8);
v___x_2243_ = l_Lean_Expr_hasLooseBVars(v_body_1983_);
if (v___x_2243_ == 0)
{
lean_object* v___x_2244_; 
lean_inc_ref(v_binderType_1982_);
v___x_2244_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_binderType_1982_, v_a_1935_);
if (lean_obj_tag(v___x_2244_) == 0)
{
lean_object* v_a_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; uint8_t v___x_2248_; 
v_a_2245_ = lean_ctor_get(v___x_2244_, 0);
lean_inc(v_a_2245_);
lean_dec_ref_known(v___x_2244_, 1);
v___x_2246_ = l_Lean_Expr_cleanupAnnotations(v_a_2245_);
lean_dec(v_a_2245_);
v___x_2247_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__3));
v___x_2248_ = l_Lean_Expr_isConstOf(v___x_2246_, v___x_2247_);
if (v___x_2248_ == 0)
{
lean_object* v___x_2249_; uint8_t v___x_2250_; 
v___x_2249_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__15));
v___x_2250_ = l_Lean_Expr_isConstOf(v___x_2246_, v___x_2249_);
lean_dec_ref(v___x_2246_);
if (v___x_2250_ == 0)
{
lean_object* v___x_2251_; 
lean_inc_ref(v_body_1983_);
v___x_2251_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_body_1983_, v_a_1935_);
if (lean_obj_tag(v___x_2251_) == 0)
{
lean_object* v_a_2252_; lean_object* v___x_2253_; uint8_t v___x_2254_; 
v_a_2252_ = lean_ctor_get(v___x_2251_, 0);
lean_inc(v_a_2252_);
lean_dec_ref_known(v___x_2251_, 1);
v___x_2253_ = l_Lean_Expr_cleanupAnnotations(v_a_2252_);
lean_dec(v_a_2252_);
v___x_2254_ = l_Lean_Expr_isConstOf(v___x_2253_, v___x_2247_);
if (v___x_2254_ == 0)
{
uint8_t v___x_2255_; 
v___x_2255_ = l_Lean_Expr_isConstOf(v___x_2253_, v___x_2249_);
lean_dec_ref(v___x_2253_);
if (v___x_2255_ == 0)
{
lean_object* v___x_2256_; 
lean_inc_ref(v_binderType_1982_);
v___x_2256_ = l_Lean_Meta_isProp(v_binderType_1982_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_);
if (lean_obj_tag(v___x_2256_) == 0)
{
lean_object* v_a_2257_; uint8_t v___x_2258_; 
v_a_2257_ = lean_ctor_get(v___x_2256_, 0);
lean_inc(v_a_2257_);
lean_dec_ref_known(v___x_2256_, 1);
v___x_2258_ = lean_unbox(v_a_2257_);
lean_dec(v_a_2257_);
if (v___x_2258_ == 0)
{
v___y_2151_ = v_a_1931_;
v___y_2152_ = v_a_1932_;
v___y_2153_ = v_a_1933_;
v___y_2154_ = v_a_1934_;
v___y_2155_ = v_a_1935_;
v___y_2156_ = v_a_1936_;
v___y_2157_ = v_a_1937_;
goto v___jp_2150_;
}
else
{
lean_object* v___x_2259_; 
lean_inc_ref(v_body_1983_);
lean_inc_ref(v_binderType_1982_);
v___x_2259_ = l_Lean_Meta_isExprDefEq(v_binderType_1982_, v_body_1983_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_);
if (lean_obj_tag(v___x_2259_) == 0)
{
lean_object* v_a_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2275_; 
v_a_2260_ = lean_ctor_get(v___x_2259_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2259_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2262_ = v___x_2259_;
v_isShared_2263_ = v_isSharedCheck_2275_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_a_2260_);
lean_dec(v___x_2259_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2275_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
uint8_t v___x_2264_; 
v___x_2264_ = lean_unbox(v_a_2260_);
if (v___x_2264_ == 0)
{
lean_del_object(v___x_2262_);
lean_dec(v_a_2260_);
v___y_2151_ = v_a_1931_;
v___y_2152_ = v_a_1932_;
v___y_2153_ = v_a_1933_;
v___y_2154_ = v_a_1934_;
v___y_2155_ = v_a_1935_;
v___y_2156_ = v_a_1936_;
v___y_2157_ = v_a_1937_;
goto v___jp_2150_;
}
else
{
lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; uint8_t v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2273_; 
lean_inc_ref(v_binderType_1982_);
lean_dec_ref_known(v_e_1930_, 3);
v___x_2265_ = lean_obj_once(&l_Lean_Meta_Grind_simpForall___closed__16, &l_Lean_Meta_Grind_simpForall___closed__16_once, _init_l_Lean_Meta_Grind_simpForall___closed__16);
v___x_2266_ = lean_obj_once(&l_Lean_Meta_Grind_simpForall___closed__19, &l_Lean_Meta_Grind_simpForall___closed__19_once, _init_l_Lean_Meta_Grind_simpForall___closed__19);
v___x_2267_ = l_Lean_Expr_app___override(v___x_2266_, v_binderType_1982_);
v___x_2268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2268_, 0, v___x_2267_);
v___x_2269_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2269_, 0, v___x_2265_);
lean_ctor_set(v___x_2269_, 1, v___x_2268_);
v___x_2270_ = lean_unbox(v_a_2260_);
lean_dec(v_a_2260_);
lean_ctor_set_uint8(v___x_2269_, sizeof(void*)*2, v___x_2270_);
v___x_2271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2269_);
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 0, v___x_2271_);
v___x_2273_ = v___x_2262_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v___x_2271_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
}
else
{
lean_object* v_a_2276_; lean_object* v___x_2278_; uint8_t v_isShared_2279_; uint8_t v_isSharedCheck_2283_; 
lean_dec_ref_known(v_e_1930_, 3);
v_a_2276_ = lean_ctor_get(v___x_2259_, 0);
v_isSharedCheck_2283_ = !lean_is_exclusive(v___x_2259_);
if (v_isSharedCheck_2283_ == 0)
{
v___x_2278_ = v___x_2259_;
v_isShared_2279_ = v_isSharedCheck_2283_;
goto v_resetjp_2277_;
}
else
{
lean_inc(v_a_2276_);
lean_dec(v___x_2259_);
v___x_2278_ = lean_box(0);
v_isShared_2279_ = v_isSharedCheck_2283_;
goto v_resetjp_2277_;
}
v_resetjp_2277_:
{
lean_object* v___x_2281_; 
if (v_isShared_2279_ == 0)
{
v___x_2281_ = v___x_2278_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v_a_2276_);
v___x_2281_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
return v___x_2281_;
}
}
}
}
}
else
{
lean_object* v_a_2284_; lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2291_; 
lean_dec_ref_known(v_e_1930_, 3);
v_a_2284_ = lean_ctor_get(v___x_2256_, 0);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2256_);
if (v_isSharedCheck_2291_ == 0)
{
v___x_2286_ = v___x_2256_;
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
else
{
lean_inc(v_a_2284_);
lean_dec(v___x_2256_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
lean_object* v___x_2289_; 
if (v_isShared_2287_ == 0)
{
v___x_2289_ = v___x_2286_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v_a_2284_);
v___x_2289_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
return v___x_2289_;
}
}
}
}
else
{
lean_object* v___x_2292_; 
lean_inc_ref_n(v_binderType_1982_, 2);
lean_dec_ref_known(v_e_1930_, 3);
v___x_2292_ = l_Lean_Meta_getLevel(v_binderType_1982_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2309_; 
v_a_2293_ = lean_ctor_get(v___x_2292_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2292_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2295_ = v___x_2292_;
v_isShared_2296_ = v_isSharedCheck_2309_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2292_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2309_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2307_; 
v___x_2297_ = lean_box(0);
v___x_2298_ = lean_obj_once(&l_Lean_Meta_Grind_simpForall___closed__16, &l_Lean_Meta_Grind_simpForall___closed__16_once, _init_l_Lean_Meta_Grind_simpForall___closed__16);
v___x_2299_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__21));
v___x_2300_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2300_, 0, v_a_2293_);
lean_ctor_set(v___x_2300_, 1, v___x_2297_);
v___x_2301_ = l_Lean_mkConst(v___x_2299_, v___x_2300_);
v___x_2302_ = l_Lean_Expr_app___override(v___x_2301_, v_binderType_1982_);
v___x_2303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2302_);
v___x_2304_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2304_, 0, v___x_2298_);
lean_ctor_set(v___x_2304_, 1, v___x_2303_);
lean_ctor_set_uint8(v___x_2304_, sizeof(void*)*2, v___x_2255_);
v___x_2305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2304_);
if (v_isShared_2296_ == 0)
{
lean_ctor_set(v___x_2295_, 0, v___x_2305_);
v___x_2307_ = v___x_2295_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v___x_2305_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
else
{
lean_object* v_a_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2317_; 
lean_dec_ref(v_binderType_1982_);
v_a_2310_ = lean_ctor_get(v___x_2292_, 0);
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2292_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2312_ = v___x_2292_;
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_a_2310_);
lean_dec(v___x_2292_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2315_; 
if (v_isShared_2313_ == 0)
{
v___x_2315_ = v___x_2312_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_a_2310_);
v___x_2315_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
return v___x_2315_;
}
}
}
}
}
else
{
lean_object* v___x_2318_; 
lean_dec_ref(v___x_2253_);
lean_inc_ref(v_binderType_1982_);
v___x_2318_ = l_Lean_Meta_isProp(v_binderType_1982_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2334_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2334_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2334_ == 0)
{
v___x_2321_ = v___x_2318_;
v_isShared_2322_ = v_isSharedCheck_2334_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_a_2319_);
lean_dec(v___x_2318_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2334_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
uint8_t v___x_2323_; 
v___x_2323_ = lean_unbox(v_a_2319_);
if (v___x_2323_ == 0)
{
lean_del_object(v___x_2321_);
lean_dec(v_a_2319_);
v___y_2151_ = v_a_1931_;
v___y_2152_ = v_a_1932_;
v___y_2153_ = v_a_1933_;
v___y_2154_ = v_a_1934_;
v___y_2155_ = v_a_1935_;
v___y_2156_ = v_a_1936_;
v___y_2157_ = v_a_1937_;
goto v___jp_2150_;
}
else
{
lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; uint8_t v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2332_; 
lean_inc_ref_n(v_binderType_1982_, 2);
lean_dec_ref_known(v_e_1930_, 3);
v___x_2324_ = l_Lean_mkNot(v_binderType_1982_);
v___x_2325_ = lean_obj_once(&l_Lean_Meta_Grind_simpForall___closed__24, &l_Lean_Meta_Grind_simpForall___closed__24_once, _init_l_Lean_Meta_Grind_simpForall___closed__24);
v___x_2326_ = l_Lean_Expr_app___override(v___x_2325_, v_binderType_1982_);
v___x_2327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2326_);
v___x_2328_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2328_, 0, v___x_2324_);
lean_ctor_set(v___x_2328_, 1, v___x_2327_);
v___x_2329_ = lean_unbox(v_a_2319_);
lean_dec(v_a_2319_);
lean_ctor_set_uint8(v___x_2328_, sizeof(void*)*2, v___x_2329_);
v___x_2330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2330_, 0, v___x_2328_);
if (v_isShared_2322_ == 0)
{
lean_ctor_set(v___x_2321_, 0, v___x_2330_);
v___x_2332_ = v___x_2321_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2333_; 
v_reuseFailAlloc_2333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2333_, 0, v___x_2330_);
v___x_2332_ = v_reuseFailAlloc_2333_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
return v___x_2332_;
}
}
}
}
else
{
lean_object* v_a_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2342_; 
lean_dec_ref_known(v_e_1930_, 3);
v_a_2335_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2342_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2342_ == 0)
{
v___x_2337_ = v___x_2318_;
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_a_2335_);
lean_dec(v___x_2318_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v___x_2340_; 
if (v_isShared_2338_ == 0)
{
v___x_2340_ = v___x_2337_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v_a_2335_);
v___x_2340_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
return v___x_2340_;
}
}
}
}
}
else
{
lean_object* v_a_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2350_; 
lean_dec_ref_known(v_e_1930_, 3);
v_a_2343_ = lean_ctor_get(v___x_2251_, 0);
v_isSharedCheck_2350_ = !lean_is_exclusive(v___x_2251_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2345_ = v___x_2251_;
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_a_2343_);
lean_dec(v___x_2251_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2348_; 
if (v_isShared_2346_ == 0)
{
v___x_2348_ = v___x_2345_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_a_2343_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
}
else
{
lean_object* v___x_2351_; 
lean_inc_ref(v_body_1983_);
v___x_2351_ = l_Lean_Meta_isProp(v_body_1983_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2366_; 
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2366_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2354_ = v___x_2351_;
v_isShared_2355_ = v_isSharedCheck_2366_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2351_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2366_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
uint8_t v___x_2356_; 
v___x_2356_ = lean_unbox(v_a_2352_);
if (v___x_2356_ == 0)
{
lean_del_object(v___x_2354_);
lean_dec(v_a_2352_);
v___y_1986_ = v_a_1931_;
v___y_1987_ = v_a_1932_;
v___y_1988_ = v_a_1933_;
v___y_1989_ = v_a_1934_;
v___y_1990_ = v_a_1935_;
v___y_1991_ = v_a_1936_;
v___y_1992_ = v_a_1937_;
goto v___jp_1985_;
}
else
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; uint8_t v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2364_; 
lean_inc_ref_n(v_body_1983_, 2);
lean_dec_ref_known(v_e_1930_, 3);
v___x_2357_ = lean_obj_once(&l_Lean_Meta_Grind_simpForall___closed__27, &l_Lean_Meta_Grind_simpForall___closed__27_once, _init_l_Lean_Meta_Grind_simpForall___closed__27);
v___x_2358_ = l_Lean_Expr_app___override(v___x_2357_, v_body_1983_);
v___x_2359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2359_, 0, v___x_2358_);
v___x_2360_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2360_, 0, v_body_1983_);
lean_ctor_set(v___x_2360_, 1, v___x_2359_);
v___x_2361_ = lean_unbox(v_a_2352_);
lean_dec(v_a_2352_);
lean_ctor_set_uint8(v___x_2360_, sizeof(void*)*2, v___x_2361_);
v___x_2362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2360_);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 0, v___x_2362_);
v___x_2364_ = v___x_2354_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v___x_2362_);
v___x_2364_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
return v___x_2364_;
}
}
}
}
else
{
lean_object* v_a_2367_; lean_object* v___x_2369_; uint8_t v_isShared_2370_; uint8_t v_isSharedCheck_2374_; 
lean_dec_ref_known(v_e_1930_, 3);
v_a_2367_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2374_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2374_ == 0)
{
v___x_2369_ = v___x_2351_;
v_isShared_2370_ = v_isSharedCheck_2374_;
goto v_resetjp_2368_;
}
else
{
lean_inc(v_a_2367_);
lean_dec(v___x_2351_);
v___x_2369_ = lean_box(0);
v_isShared_2370_ = v_isSharedCheck_2374_;
goto v_resetjp_2368_;
}
v_resetjp_2368_:
{
lean_object* v___x_2372_; 
if (v_isShared_2370_ == 0)
{
v___x_2372_ = v___x_2369_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v_a_2367_);
v___x_2372_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
return v___x_2372_;
}
}
}
}
}
else
{
lean_object* v___x_2375_; 
lean_dec_ref(v___x_2246_);
lean_inc_ref(v_body_1983_);
v___x_2375_ = l_Lean_Meta_isProp(v_body_1983_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_);
if (lean_obj_tag(v___x_2375_) == 0)
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2391_; 
v_a_2376_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2378_ = v___x_2375_;
v_isShared_2379_ = v_isSharedCheck_2391_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2375_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2391_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
uint8_t v___x_2380_; 
v___x_2380_ = lean_unbox(v_a_2376_);
if (v___x_2380_ == 0)
{
lean_del_object(v___x_2378_);
lean_dec(v_a_2376_);
v___y_1986_ = v_a_1931_;
v___y_1987_ = v_a_1932_;
v___y_1988_ = v_a_1933_;
v___y_1989_ = v_a_1934_;
v___y_1990_ = v_a_1935_;
v___y_1991_ = v_a_1936_;
v___y_1992_ = v_a_1937_;
goto v___jp_1985_;
}
else
{
lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; uint8_t v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2389_; 
lean_inc_ref(v_body_1983_);
lean_dec_ref_known(v_e_1930_, 3);
v___x_2381_ = lean_obj_once(&l_Lean_Meta_Grind_simpForall___closed__16, &l_Lean_Meta_Grind_simpForall___closed__16_once, _init_l_Lean_Meta_Grind_simpForall___closed__16);
v___x_2382_ = lean_obj_once(&l_Lean_Meta_Grind_simpForall___closed__30, &l_Lean_Meta_Grind_simpForall___closed__30_once, _init_l_Lean_Meta_Grind_simpForall___closed__30);
v___x_2383_ = l_Lean_Expr_app___override(v___x_2382_, v_body_1983_);
v___x_2384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2383_);
v___x_2385_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2385_, 0, v___x_2381_);
lean_ctor_set(v___x_2385_, 1, v___x_2384_);
v___x_2386_ = lean_unbox(v_a_2376_);
lean_dec(v_a_2376_);
lean_ctor_set_uint8(v___x_2385_, sizeof(void*)*2, v___x_2386_);
v___x_2387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2387_, 0, v___x_2385_);
if (v_isShared_2379_ == 0)
{
lean_ctor_set(v___x_2378_, 0, v___x_2387_);
v___x_2389_ = v___x_2378_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v___x_2387_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
return v___x_2389_;
}
}
}
}
else
{
lean_object* v_a_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2399_; 
lean_dec_ref_known(v_e_1930_, 3);
v_a_2392_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2399_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2394_ = v___x_2375_;
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_a_2392_);
lean_dec(v___x_2375_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___x_2397_; 
if (v_isShared_2395_ == 0)
{
v___x_2397_ = v___x_2394_;
goto v_reusejp_2396_;
}
else
{
lean_object* v_reuseFailAlloc_2398_; 
v_reuseFailAlloc_2398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2398_, 0, v_a_2392_);
v___x_2397_ = v_reuseFailAlloc_2398_;
goto v_reusejp_2396_;
}
v_reusejp_2396_:
{
return v___x_2397_;
}
}
}
}
}
else
{
lean_object* v_a_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2407_; 
lean_dec_ref_known(v_e_1930_, 3);
v_a_2400_ = lean_ctor_get(v___x_2244_, 0);
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2244_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2402_ = v___x_2244_;
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_a_2400_);
lean_dec(v___x_2244_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2405_; 
if (v_isShared_2403_ == 0)
{
v___x_2405_ = v___x_2402_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_a_2400_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
return v___x_2405_;
}
}
}
}
else
{
lean_object* v___x_2408_; 
lean_inc_ref(v_binderType_1982_);
v___x_2408_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_binderType_1982_, v_a_1935_);
if (lean_obj_tag(v___x_2408_) == 0)
{
lean_object* v_a_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; uint8_t v___x_2412_; 
v_a_2409_ = lean_ctor_get(v___x_2408_, 0);
lean_inc(v_a_2409_);
lean_dec_ref_known(v___x_2408_, 1);
v___x_2410_ = l_Lean_Expr_cleanupAnnotations(v_a_2409_);
lean_dec(v_a_2409_);
v___x_2411_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f___closed__3));
v___x_2412_ = l_Lean_Expr_isConstOf(v___x_2410_, v___x_2411_);
if (v___x_2412_ == 0)
{
lean_object* v___x_2413_; uint8_t v___x_2414_; 
v___x_2413_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__15));
v___x_2414_ = l_Lean_Expr_isConstOf(v___x_2410_, v___x_2413_);
lean_dec_ref(v___x_2410_);
if (v___x_2414_ == 0)
{
v___y_1986_ = v_a_1931_;
v___y_1987_ = v_a_1932_;
v___y_1988_ = v_a_1933_;
v___y_1989_ = v_a_1934_;
v___y_1990_ = v_a_1935_;
v___y_1991_ = v_a_1936_;
v___y_1992_ = v_a_1937_;
goto v___jp_1985_;
}
else
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; 
v___x_2415_ = lean_obj_once(&l_Lean_Meta_Grind_simpForall___closed__33, &l_Lean_Meta_Grind_simpForall___closed__33_once, _init_l_Lean_Meta_Grind_simpForall___closed__33);
v___x_2416_ = lean_expr_instantiate1(v_body_1983_, v___x_2415_);
lean_inc_ref(v___x_2416_);
v___x_2417_ = l_Lean_Meta_isProp(v___x_2416_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_);
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2433_; 
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2420_ = v___x_2417_;
v_isShared_2421_ = v_isSharedCheck_2433_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2417_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2433_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
uint8_t v___x_2422_; 
v___x_2422_ = lean_unbox(v_a_2418_);
if (v___x_2422_ == 0)
{
lean_del_object(v___x_2420_);
lean_dec(v_a_2418_);
lean_dec_ref(v___x_2416_);
v___y_1986_ = v_a_1931_;
v___y_1987_ = v_a_1932_;
v___y_1988_ = v_a_1933_;
v___y_1989_ = v_a_1934_;
v___y_1990_ = v_a_1935_;
v___y_1991_ = v_a_1936_;
v___y_1992_ = v_a_1937_;
goto v___jp_1985_;
}
else
{
lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; uint8_t v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2431_; 
lean_inc_ref(v_body_1983_);
lean_inc_ref(v_binderType_1982_);
lean_inc(v_binderName_1981_);
lean_dec_ref_known(v_e_1930_, 3);
v___x_2423_ = l_Lean_mkLambda(v_binderName_1981_, v_binderInfo_1984_, v_binderType_1982_, v_body_1983_);
v___x_2424_ = lean_obj_once(&l_Lean_Meta_Grind_simpForall___closed__36, &l_Lean_Meta_Grind_simpForall___closed__36_once, _init_l_Lean_Meta_Grind_simpForall___closed__36);
v___x_2425_ = l_Lean_Expr_app___override(v___x_2424_, v___x_2423_);
v___x_2426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2426_, 0, v___x_2425_);
v___x_2427_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2427_, 0, v___x_2416_);
lean_ctor_set(v___x_2427_, 1, v___x_2426_);
v___x_2428_ = lean_unbox(v_a_2418_);
lean_dec(v_a_2418_);
lean_ctor_set_uint8(v___x_2427_, sizeof(void*)*2, v___x_2428_);
v___x_2429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2429_, 0, v___x_2427_);
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 0, v___x_2429_);
v___x_2431_ = v___x_2420_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v___x_2429_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
}
else
{
lean_object* v_a_2434_; lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2441_; 
lean_dec_ref(v___x_2416_);
lean_dec_ref_known(v_e_1930_, 3);
v_a_2434_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2441_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2441_ == 0)
{
v___x_2436_ = v___x_2417_;
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
else
{
lean_inc(v_a_2434_);
lean_dec(v___x_2417_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
lean_object* v___x_2439_; 
if (v_isShared_2437_ == 0)
{
v___x_2439_ = v___x_2436_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v_a_2434_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
return v___x_2439_;
}
}
}
}
}
else
{
lean_object* v___x_2442_; lean_object* v___x_2443_; 
lean_dec_ref(v___x_2410_);
lean_inc_ref(v_body_1983_);
lean_inc_ref(v_binderType_1982_);
lean_inc(v_binderName_1981_);
v___x_2442_ = l_Lean_mkLambda(v_binderName_1981_, v_binderInfo_1984_, v_binderType_1982_, v_body_1983_);
lean_inc(v_a_1937_);
lean_inc_ref(v_a_1936_);
lean_inc(v_a_1935_);
lean_inc_ref(v_a_1934_);
lean_inc_ref(v___x_2442_);
v___x_2443_ = lean_infer_type(v___x_2442_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_);
if (lean_obj_tag(v___x_2443_) == 0)
{
lean_object* v_a_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; 
v_a_2444_ = lean_ctor_get(v___x_2443_, 0);
lean_inc(v_a_2444_);
lean_dec_ref_known(v___x_2443_, 1);
v___x_2445_ = lean_obj_once(&l_Lean_Meta_Grind_simpForall___closed__38, &l_Lean_Meta_Grind_simpForall___closed__38_once, _init_l_Lean_Meta_Grind_simpForall___closed__38);
lean_inc_ref(v_binderType_1982_);
lean_inc(v_binderName_1981_);
v___x_2446_ = l_Lean_mkForall(v_binderName_1981_, v_binderInfo_1984_, v_binderType_1982_, v___x_2445_);
v___x_2447_ = l_Lean_Meta_isExprDefEq(v_a_2444_, v___x_2446_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_);
if (lean_obj_tag(v___x_2447_) == 0)
{
lean_object* v_a_2448_; lean_object* v___x_2450_; uint8_t v_isShared_2451_; uint8_t v_isSharedCheck_2463_; 
v_a_2448_ = lean_ctor_get(v___x_2447_, 0);
v_isSharedCheck_2463_ = !lean_is_exclusive(v___x_2447_);
if (v_isSharedCheck_2463_ == 0)
{
v___x_2450_ = v___x_2447_;
v_isShared_2451_ = v_isSharedCheck_2463_;
goto v_resetjp_2449_;
}
else
{
lean_inc(v_a_2448_);
lean_dec(v___x_2447_);
v___x_2450_ = lean_box(0);
v_isShared_2451_ = v_isSharedCheck_2463_;
goto v_resetjp_2449_;
}
v_resetjp_2449_:
{
uint8_t v___x_2452_; 
v___x_2452_ = lean_unbox(v_a_2448_);
if (v___x_2452_ == 0)
{
lean_del_object(v___x_2450_);
lean_dec(v_a_2448_);
lean_dec_ref(v___x_2442_);
v___y_1986_ = v_a_1931_;
v___y_1987_ = v_a_1932_;
v___y_1988_ = v_a_1933_;
v___y_1989_ = v_a_1934_;
v___y_1990_ = v_a_1935_;
v___y_1991_ = v_a_1936_;
v___y_1992_ = v_a_1937_;
goto v___jp_1985_;
}
else
{
lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; uint8_t v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2461_; 
lean_dec_ref_known(v_e_1930_, 3);
v___x_2453_ = lean_obj_once(&l_Lean_Meta_Grind_simpForall___closed__16, &l_Lean_Meta_Grind_simpForall___closed__16_once, _init_l_Lean_Meta_Grind_simpForall___closed__16);
v___x_2454_ = lean_obj_once(&l_Lean_Meta_Grind_simpForall___closed__41, &l_Lean_Meta_Grind_simpForall___closed__41_once, _init_l_Lean_Meta_Grind_simpForall___closed__41);
v___x_2455_ = l_Lean_Expr_app___override(v___x_2454_, v___x_2442_);
v___x_2456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2456_, 0, v___x_2455_);
v___x_2457_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2457_, 0, v___x_2453_);
lean_ctor_set(v___x_2457_, 1, v___x_2456_);
v___x_2458_ = lean_unbox(v_a_2448_);
lean_dec(v_a_2448_);
lean_ctor_set_uint8(v___x_2457_, sizeof(void*)*2, v___x_2458_);
v___x_2459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2459_, 0, v___x_2457_);
if (v_isShared_2451_ == 0)
{
lean_ctor_set(v___x_2450_, 0, v___x_2459_);
v___x_2461_ = v___x_2450_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v___x_2459_);
v___x_2461_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
return v___x_2461_;
}
}
}
}
else
{
lean_object* v_a_2464_; lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2471_; 
lean_dec_ref(v___x_2442_);
lean_dec_ref_known(v_e_1930_, 3);
v_a_2464_ = lean_ctor_get(v___x_2447_, 0);
v_isSharedCheck_2471_ = !lean_is_exclusive(v___x_2447_);
if (v_isSharedCheck_2471_ == 0)
{
v___x_2466_ = v___x_2447_;
v_isShared_2467_ = v_isSharedCheck_2471_;
goto v_resetjp_2465_;
}
else
{
lean_inc(v_a_2464_);
lean_dec(v___x_2447_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2471_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v___x_2469_; 
if (v_isShared_2467_ == 0)
{
v___x_2469_ = v___x_2466_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v_a_2464_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
return v___x_2469_;
}
}
}
}
else
{
lean_object* v_a_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2479_; 
lean_dec_ref(v___x_2442_);
lean_dec_ref_known(v_e_1930_, 3);
v_a_2472_ = lean_ctor_get(v___x_2443_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2443_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2474_ = v___x_2443_;
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_a_2472_);
lean_dec(v___x_2443_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2477_; 
if (v_isShared_2475_ == 0)
{
v___x_2477_ = v___x_2474_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2472_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
return v___x_2477_;
}
}
}
}
}
else
{
lean_object* v_a_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2487_; 
lean_dec_ref_known(v_e_1930_, 3);
v_a_2480_ = lean_ctor_get(v___x_2408_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2408_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2482_ = v___x_2408_;
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_a_2480_);
lean_dec(v___x_2408_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2485_; 
if (v_isShared_2483_ == 0)
{
v___x_2485_ = v___x_2482_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2480_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
v___jp_1985_:
{
uint8_t v___x_1993_; 
v___x_1993_ = l_Lean_Expr_isApp(v_body_1983_);
if (v___x_1993_ == 0)
{
v___y_1940_ = v___y_1989_;
v___y_1941_ = v___y_1990_;
v___y_1942_ = v___y_1991_;
v___y_1943_ = v___y_1992_;
goto v___jp_1939_;
}
else
{
lean_object* v___x_1994_; lean_object* v___x_1995_; uint8_t v___x_1996_; 
v___x_1994_ = l_Lean_Expr_getAppNumArgs(v_body_1983_);
v___x_1995_ = lean_unsigned_to_nat(2u);
v___x_1996_ = lean_nat_dec_eq(v___x_1994_, v___x_1995_);
lean_dec(v___x_1994_);
if (v___x_1996_ == 0)
{
v___y_1940_ = v___y_1989_;
v___y_1941_ = v___y_1990_;
v___y_1942_ = v___y_1991_;
v___y_1943_ = v___y_1992_;
goto v___jp_1939_;
}
else
{
lean_object* v___x_1997_; lean_object* v___x_1998_; 
v___x_1997_ = l_Lean_Expr_appFn_x21(v_body_1983_);
v___x_1998_ = l_Lean_Expr_appFn_x21(v___x_1997_);
if (lean_obj_tag(v___x_1998_) == 4)
{
lean_object* v_declName_1999_; lean_object* v___x_2000_; uint8_t v___x_2001_; 
v_declName_1999_ = lean_ctor_get(v___x_1998_, 0);
lean_inc(v_declName_1999_);
lean_dec_ref_known(v___x_1998_, 2);
v___x_2000_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__2));
v___x_2001_ = lean_name_eq(v_declName_1999_, v___x_2000_);
lean_dec(v_declName_1999_);
if (v___x_2001_ == 0)
{
lean_dec_ref(v___x_1997_);
v___y_1940_ = v___y_1989_;
v___y_1941_ = v___y_1990_;
v___y_1942_ = v___y_1991_;
v___y_1943_ = v___y_1992_;
goto v___jp_1939_;
}
else
{
lean_object* v_pRaw_2002_; lean_object* v_pRaw_2003_; lean_object* v___x_2004_; 
v_pRaw_2002_ = l_Lean_Expr_appArg_x21(v___x_1997_);
lean_dec_ref(v___x_1997_);
v_pRaw_2003_ = l_Lean_Expr_appArg_x21(v_body_1983_);
v___x_2004_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f(v_pRaw_2002_);
if (lean_obj_tag(v___x_2004_) == 1)
{
lean_object* v_val_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2075_; 
lean_inc_ref(v_binderType_1982_);
lean_inc(v_binderName_1981_);
lean_dec_ref(v_pRaw_2002_);
lean_dec_ref_known(v_e_1930_, 3);
v_val_2005_ = lean_ctor_get(v___x_2004_, 0);
v_isSharedCheck_2075_ = !lean_is_exclusive(v___x_2004_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2007_ = v___x_2004_;
v_isShared_2008_ = v_isSharedCheck_2075_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_val_2005_);
lean_dec(v___x_2004_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2075_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v_snd_2009_; lean_object* v_fst_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2074_; 
v_snd_2009_ = lean_ctor_get(v_val_2005_, 1);
v_fst_2010_ = lean_ctor_get(v_val_2005_, 0);
v_isSharedCheck_2074_ = !lean_is_exclusive(v_val_2005_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2012_ = v_val_2005_;
v_isShared_2013_ = v_isSharedCheck_2074_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_snd_2009_);
lean_inc(v_fst_2010_);
lean_dec(v_val_2005_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2074_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v_fst_2014_; lean_object* v_snd_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2073_; 
v_fst_2014_ = lean_ctor_get(v_snd_2009_, 0);
v_snd_2015_ = lean_ctor_get(v_snd_2009_, 1);
v_isSharedCheck_2073_ = !lean_is_exclusive(v_snd_2009_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2017_ = v_snd_2009_;
v_isShared_2018_ = v_isSharedCheck_2073_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_snd_2015_);
lean_inc(v_fst_2014_);
lean_dec(v_snd_2009_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2073_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___f_2019_; lean_object* v_p_2020_; uint8_t v___x_2021_; lean_object* v___x_2022_; lean_object* v_q_2023_; lean_object* v_00_u03b2_2024_; lean_object* v___x_2025_; 
lean_inc_n(v_fst_2014_, 3);
v___f_2019_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_simpForall___lam__0___boxed), 10, 1);
lean_closure_set(v___f_2019_, 0, v_fst_2014_);
lean_inc_ref(v_pRaw_2003_);
lean_inc_ref_n(v_binderType_1982_, 4);
lean_inc_n(v_binderName_1981_, 3);
v_p_2020_ = l_Lean_mkLambda(v_binderName_1981_, v_binderInfo_1984_, v_binderType_1982_, v_pRaw_2003_);
v___x_2021_ = 0;
lean_inc(v_snd_2015_);
lean_inc(v_fst_2010_);
v___x_2022_ = l_Lean_mkLambda(v_fst_2010_, v___x_2021_, v_fst_2014_, v_snd_2015_);
v_q_2023_ = l_Lean_mkLambda(v_binderName_1981_, v_binderInfo_1984_, v_binderType_1982_, v___x_2022_);
v_00_u03b2_2024_ = l_Lean_mkLambda(v_binderName_1981_, v_binderInfo_1984_, v_binderType_1982_, v_fst_2014_);
v___x_2025_ = l_Lean_Meta_getLevel(v_binderType_1982_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v_a_2026_; lean_object* v___x_2027_; 
v_a_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2026_);
lean_dec_ref_known(v___x_2025_, 1);
lean_inc_ref(v_binderType_1982_);
lean_inc(v_binderName_1981_);
v___x_2027_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0___redArg(v_binderName_1981_, v_binderType_1982_, v___f_2019_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_object* v_a_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2056_; 
v_a_2028_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2030_ = v___x_2027_;
v_isShared_2031_ = v_isSharedCheck_2056_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_a_2028_);
lean_dec(v___x_2027_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2056_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2041_; 
v___x_2032_ = lean_unsigned_to_nat(0u);
v___x_2033_ = lean_unsigned_to_nat(1u);
v___x_2034_ = lean_expr_lift_loose_bvars(v_pRaw_2003_, v___x_2032_, v___x_2033_);
lean_dec_ref(v_pRaw_2003_);
v___x_2035_ = l_Lean_mkOr(v_snd_2015_, v___x_2034_);
v___x_2036_ = l_Lean_mkForall(v_fst_2010_, v___x_2021_, v_fst_2014_, v___x_2035_);
lean_inc_ref(v_binderType_1982_);
v___x_2037_ = l_Lean_mkForall(v_binderName_1981_, v_binderInfo_1984_, v_binderType_1982_, v___x_2036_);
v___x_2038_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__4));
v___x_2039_ = lean_box(0);
if (v_isShared_2018_ == 0)
{
lean_ctor_set_tag(v___x_2017_, 1);
lean_ctor_set(v___x_2017_, 1, v___x_2039_);
lean_ctor_set(v___x_2017_, 0, v_a_2028_);
v___x_2041_ = v___x_2017_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v_a_2028_);
lean_ctor_set(v_reuseFailAlloc_2055_, 1, v___x_2039_);
v___x_2041_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
lean_object* v___x_2043_; 
if (v_isShared_2013_ == 0)
{
lean_ctor_set_tag(v___x_2012_, 1);
lean_ctor_set(v___x_2012_, 1, v___x_2041_);
lean_ctor_set(v___x_2012_, 0, v_a_2026_);
v___x_2043_ = v___x_2012_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v_a_2026_);
lean_ctor_set(v_reuseFailAlloc_2054_, 1, v___x_2041_);
v___x_2043_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2047_; 
v___x_2044_ = l_Lean_mkConst(v___x_2038_, v___x_2043_);
v___x_2045_ = l_Lean_mkApp4(v___x_2044_, v_binderType_1982_, v_00_u03b2_2024_, v_p_2020_, v_q_2023_);
if (v_isShared_2008_ == 0)
{
lean_ctor_set(v___x_2007_, 0, v___x_2045_);
v___x_2047_ = v___x_2007_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v___x_2045_);
v___x_2047_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2051_; 
v___x_2048_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2048_, 0, v___x_2037_);
lean_ctor_set(v___x_2048_, 1, v___x_2047_);
lean_ctor_set_uint8(v___x_2048_, sizeof(void*)*2, v___x_2001_);
v___x_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2049_, 0, v___x_2048_);
if (v_isShared_2031_ == 0)
{
lean_ctor_set(v___x_2030_, 0, v___x_2049_);
v___x_2051_ = v___x_2030_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v___x_2049_);
v___x_2051_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
return v___x_2051_;
}
}
}
}
}
}
else
{
lean_object* v_a_2057_; lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2064_; 
lean_dec(v_a_2026_);
lean_dec_ref(v_00_u03b2_2024_);
lean_dec_ref(v_q_2023_);
lean_dec_ref(v_p_2020_);
lean_del_object(v___x_2017_);
lean_dec(v_snd_2015_);
lean_dec(v_fst_2014_);
lean_del_object(v___x_2012_);
lean_dec(v_fst_2010_);
lean_del_object(v___x_2007_);
lean_dec_ref(v_pRaw_2003_);
lean_dec_ref(v_binderType_1982_);
lean_dec(v_binderName_1981_);
v_a_2057_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2064_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2059_ = v___x_2027_;
v_isShared_2060_ = v_isSharedCheck_2064_;
goto v_resetjp_2058_;
}
else
{
lean_inc(v_a_2057_);
lean_dec(v___x_2027_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2064_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v___x_2062_; 
if (v_isShared_2060_ == 0)
{
v___x_2062_ = v___x_2059_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v_a_2057_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
return v___x_2062_;
}
}
}
}
else
{
lean_object* v_a_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2072_; 
lean_dec_ref(v_00_u03b2_2024_);
lean_dec_ref(v_q_2023_);
lean_dec_ref(v_p_2020_);
lean_dec_ref(v___f_2019_);
lean_del_object(v___x_2017_);
lean_dec(v_snd_2015_);
lean_dec(v_fst_2014_);
lean_del_object(v___x_2012_);
lean_dec(v_fst_2010_);
lean_del_object(v___x_2007_);
lean_dec_ref(v_pRaw_2003_);
lean_dec_ref(v_binderType_1982_);
lean_dec(v_binderName_1981_);
v_a_2065_ = lean_ctor_get(v___x_2025_, 0);
v_isSharedCheck_2072_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2067_ = v___x_2025_;
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_a_2065_);
lean_dec(v___x_2025_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v___x_2070_; 
if (v_isShared_2068_ == 0)
{
v___x_2070_ = v___x_2067_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_a_2065_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
return v___x_2070_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2076_; 
lean_dec(v___x_2004_);
v___x_2076_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_isForallOrNot_x3f(v_pRaw_2003_);
lean_dec_ref(v_pRaw_2003_);
if (lean_obj_tag(v___x_2076_) == 1)
{
lean_object* v_val_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2147_; 
lean_inc_ref(v_binderType_1982_);
lean_inc(v_binderName_1981_);
lean_dec_ref_known(v_e_1930_, 3);
v_val_2077_ = lean_ctor_get(v___x_2076_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2076_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2079_ = v___x_2076_;
v_isShared_2080_ = v_isSharedCheck_2147_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_val_2077_);
lean_dec(v___x_2076_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2147_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v_snd_2081_; lean_object* v_fst_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2146_; 
v_snd_2081_ = lean_ctor_get(v_val_2077_, 1);
v_fst_2082_ = lean_ctor_get(v_val_2077_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v_val_2077_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2084_ = v_val_2077_;
v_isShared_2085_ = v_isSharedCheck_2146_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_snd_2081_);
lean_inc(v_fst_2082_);
lean_dec(v_val_2077_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2146_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v_fst_2086_; lean_object* v_snd_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2145_; 
v_fst_2086_ = lean_ctor_get(v_snd_2081_, 0);
v_snd_2087_ = lean_ctor_get(v_snd_2081_, 1);
v_isSharedCheck_2145_ = !lean_is_exclusive(v_snd_2081_);
if (v_isSharedCheck_2145_ == 0)
{
v___x_2089_ = v_snd_2081_;
v_isShared_2090_ = v_isSharedCheck_2145_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_snd_2087_);
lean_inc(v_fst_2086_);
lean_dec(v_snd_2081_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2145_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___f_2091_; lean_object* v_p_2092_; uint8_t v___x_2093_; lean_object* v___x_2094_; lean_object* v_q_2095_; lean_object* v_00_u03b2_2096_; lean_object* v___x_2097_; 
lean_inc_n(v_fst_2086_, 3);
v___f_2091_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_simpForall___lam__0___boxed), 10, 1);
lean_closure_set(v___f_2091_, 0, v_fst_2086_);
lean_inc_ref(v_pRaw_2002_);
lean_inc_ref_n(v_binderType_1982_, 4);
lean_inc_n(v_binderName_1981_, 3);
v_p_2092_ = l_Lean_mkLambda(v_binderName_1981_, v_binderInfo_1984_, v_binderType_1982_, v_pRaw_2002_);
v___x_2093_ = 0;
lean_inc(v_snd_2087_);
lean_inc(v_fst_2082_);
v___x_2094_ = l_Lean_mkLambda(v_fst_2082_, v___x_2093_, v_fst_2086_, v_snd_2087_);
v_q_2095_ = l_Lean_mkLambda(v_binderName_1981_, v_binderInfo_1984_, v_binderType_1982_, v___x_2094_);
v_00_u03b2_2096_ = l_Lean_mkLambda(v_binderName_1981_, v_binderInfo_1984_, v_binderType_1982_, v_fst_2086_);
v___x_2097_ = l_Lean_Meta_getLevel(v_binderType_1982_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_);
if (lean_obj_tag(v___x_2097_) == 0)
{
lean_object* v_a_2098_; lean_object* v___x_2099_; 
v_a_2098_ = lean_ctor_get(v___x_2097_, 0);
lean_inc(v_a_2098_);
lean_dec_ref_known(v___x_2097_, 1);
lean_inc_ref(v_binderType_1982_);
lean_inc(v_binderName_1981_);
v___x_2099_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0___redArg(v_binderName_1981_, v_binderType_1982_, v___f_2091_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_);
if (lean_obj_tag(v___x_2099_) == 0)
{
lean_object* v_a_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2128_; 
v_a_2100_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2102_ = v___x_2099_;
v_isShared_2103_ = v_isSharedCheck_2128_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_a_2100_);
lean_dec(v___x_2099_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2128_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2113_; 
v___x_2104_ = lean_unsigned_to_nat(0u);
v___x_2105_ = lean_unsigned_to_nat(1u);
v___x_2106_ = lean_expr_lift_loose_bvars(v_pRaw_2002_, v___x_2104_, v___x_2105_);
lean_dec_ref(v_pRaw_2002_);
v___x_2107_ = l_Lean_mkOr(v___x_2106_, v_snd_2087_);
v___x_2108_ = l_Lean_mkForall(v_fst_2082_, v___x_2093_, v_fst_2086_, v___x_2107_);
lean_inc_ref(v_binderType_1982_);
v___x_2109_ = l_Lean_mkForall(v_binderName_1981_, v_binderInfo_1984_, v_binderType_1982_, v___x_2108_);
v___x_2110_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__6));
v___x_2111_ = lean_box(0);
if (v_isShared_2090_ == 0)
{
lean_ctor_set_tag(v___x_2089_, 1);
lean_ctor_set(v___x_2089_, 1, v___x_2111_);
lean_ctor_set(v___x_2089_, 0, v_a_2100_);
v___x_2113_ = v___x_2089_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_a_2100_);
lean_ctor_set(v_reuseFailAlloc_2127_, 1, v___x_2111_);
v___x_2113_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
lean_object* v___x_2115_; 
if (v_isShared_2085_ == 0)
{
lean_ctor_set_tag(v___x_2084_, 1);
lean_ctor_set(v___x_2084_, 1, v___x_2113_);
lean_ctor_set(v___x_2084_, 0, v_a_2098_);
v___x_2115_ = v___x_2084_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_a_2098_);
lean_ctor_set(v_reuseFailAlloc_2126_, 1, v___x_2113_);
v___x_2115_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2119_; 
v___x_2116_ = l_Lean_mkConst(v___x_2110_, v___x_2115_);
v___x_2117_ = l_Lean_mkApp4(v___x_2116_, v_binderType_1982_, v_00_u03b2_2096_, v_p_2092_, v_q_2095_);
if (v_isShared_2080_ == 0)
{
lean_ctor_set(v___x_2079_, 0, v___x_2117_);
v___x_2119_ = v___x_2079_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v___x_2117_);
v___x_2119_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2123_; 
v___x_2120_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2120_, 0, v___x_2109_);
lean_ctor_set(v___x_2120_, 1, v___x_2119_);
lean_ctor_set_uint8(v___x_2120_, sizeof(void*)*2, v___x_2001_);
v___x_2121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2120_);
if (v_isShared_2103_ == 0)
{
lean_ctor_set(v___x_2102_, 0, v___x_2121_);
v___x_2123_ = v___x_2102_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v___x_2121_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
}
}
}
else
{
lean_object* v_a_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2136_; 
lean_dec(v_a_2098_);
lean_dec_ref(v_00_u03b2_2096_);
lean_dec_ref(v_q_2095_);
lean_dec_ref(v_p_2092_);
lean_del_object(v___x_2089_);
lean_dec(v_snd_2087_);
lean_dec(v_fst_2086_);
lean_del_object(v___x_2084_);
lean_dec(v_fst_2082_);
lean_del_object(v___x_2079_);
lean_dec_ref(v_pRaw_2002_);
lean_dec_ref(v_binderType_1982_);
lean_dec(v_binderName_1981_);
v_a_2129_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2131_ = v___x_2099_;
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_a_2129_);
lean_dec(v___x_2099_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2134_; 
if (v_isShared_2132_ == 0)
{
v___x_2134_ = v___x_2131_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_a_2129_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
}
}
else
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2144_; 
lean_dec_ref(v_00_u03b2_2096_);
lean_dec_ref(v_q_2095_);
lean_dec_ref(v_p_2092_);
lean_dec_ref(v___f_2091_);
lean_del_object(v___x_2089_);
lean_dec(v_snd_2087_);
lean_dec(v_fst_2086_);
lean_del_object(v___x_2084_);
lean_dec(v_fst_2082_);
lean_del_object(v___x_2079_);
lean_dec_ref(v_pRaw_2002_);
lean_dec_ref(v_binderType_1982_);
lean_dec(v_binderName_1981_);
v_a_2137_ = lean_ctor_get(v___x_2097_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2139_ = v___x_2097_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2097_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2142_; 
if (v_isShared_2140_ == 0)
{
v___x_2142_ = v___x_2139_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_a_2137_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_2076_);
lean_dec_ref(v_pRaw_2002_);
v___y_1940_ = v___y_1989_;
v___y_1941_ = v___y_1990_;
v___y_1942_ = v___y_1991_;
v___y_1943_ = v___y_1992_;
goto v___jp_1939_;
}
}
}
}
else
{
lean_object* v___x_2148_; lean_object* v___x_2149_; 
lean_dec_ref(v___x_1998_);
lean_dec_ref(v___x_1997_);
lean_dec_ref_known(v_e_1930_, 3);
v___x_2148_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__0));
v___x_2149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2149_, 0, v___x_2148_);
return v___x_2149_;
}
}
}
}
v___jp_2150_:
{
lean_object* v___x_2158_; 
lean_inc_ref(v_binderType_1982_);
v___x_2158_ = l_Lean_Meta_isProp(v_binderType_1982_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; lean_object* v___x_2160_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
lean_inc(v_a_2159_);
lean_dec_ref_known(v___x_2158_, 1);
lean_inc_ref(v_body_1983_);
v___x_2160_ = l_Lean_Meta_isProp(v_body_1983_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
if (lean_obj_tag(v___x_2160_) == 0)
{
lean_object* v_a_2161_; lean_object* v___x_2162_; uint8_t v___x_2163_; 
v_a_2161_ = lean_ctor_get(v___x_2160_, 0);
lean_inc(v_a_2161_);
lean_dec_ref_known(v___x_2160_, 1);
v___x_2162_ = lean_st_ref_get(v___y_2157_);
v___x_2163_ = lean_unbox(v_a_2159_);
lean_dec(v_a_2159_);
if (v___x_2163_ == 0)
{
uint8_t v___x_2164_; 
v___x_2164_ = lean_unbox(v_a_2161_);
if (v___x_2164_ == 0)
{
lean_dec(v___x_2162_);
lean_dec(v_a_2161_);
v___y_1986_ = v___y_2151_;
v___y_1987_ = v___y_2152_;
v___y_1988_ = v___y_2153_;
v___y_1989_ = v___y_2154_;
v___y_1990_ = v___y_2155_;
v___y_1991_ = v___y_2156_;
v___y_1992_ = v___y_2157_;
goto v___jp_1985_;
}
else
{
lean_object* v_env_2165_; lean_object* v___x_2166_; uint8_t v___x_2167_; uint8_t v___x_2168_; 
v_env_2165_ = lean_ctor_get(v___x_2162_, 0);
lean_inc_ref(v_env_2165_);
lean_dec(v___x_2162_);
v___x_2166_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__8));
v___x_2167_ = lean_unbox(v_a_2161_);
lean_dec(v_a_2161_);
v___x_2168_ = l_Lean_Environment_contains(v_env_2165_, v___x_2166_, v___x_2167_);
if (v___x_2168_ == 0)
{
v___y_1986_ = v___y_2151_;
v___y_1987_ = v___y_2152_;
v___y_1988_ = v___y_2153_;
v___y_1989_ = v___y_2154_;
v___y_1990_ = v___y_2155_;
v___y_1991_ = v___y_2156_;
v___y_1992_ = v___y_2157_;
goto v___jp_1985_;
}
else
{
lean_object* v___x_2169_; 
lean_inc_ref(v_binderType_1982_);
v___x_2169_ = l_Lean_Meta_getLevel(v_binderType_1982_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
if (lean_obj_tag(v___x_2169_) == 0)
{
lean_object* v_a_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; 
v_a_2170_ = lean_ctor_get(v___x_2169_, 0);
lean_inc(v_a_2170_);
lean_dec_ref_known(v___x_2169_, 1);
v___x_2171_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__10));
v___x_2172_ = lean_box(0);
v___x_2173_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2173_, 0, v_a_2170_);
lean_ctor_set(v___x_2173_, 1, v___x_2172_);
v___x_2174_ = l_Lean_mkConst(v___x_2171_, v___x_2173_);
lean_inc_ref(v_binderType_1982_);
v___x_2175_ = l_Lean_Expr_app___override(v___x_2174_, v_binderType_1982_);
v___x_2176_ = lean_box(0);
v___x_2177_ = l_Lean_Meta_trySynthInstance(v___x_2175_, v___x_2176_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
if (lean_obj_tag(v___x_2177_) == 0)
{
lean_object* v_a_2178_; 
v_a_2178_ = lean_ctor_get(v___x_2177_, 0);
lean_inc(v_a_2178_);
lean_dec_ref_known(v___x_2177_, 1);
if (lean_obj_tag(v_a_2178_) == 1)
{
lean_object* v_a_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2210_; 
lean_inc_ref(v_body_1983_);
v_a_2179_ = lean_ctor_get(v_a_2178_, 0);
v_isSharedCheck_2210_ = !lean_is_exclusive(v_a_2178_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2181_ = v_a_2178_;
v_isShared_2182_ = v_isSharedCheck_2210_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_a_2179_);
lean_dec(v_a_2178_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2210_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v___x_2183_; 
lean_inc_ref(v_binderType_1982_);
v___x_2183_ = l_Lean_Meta_getLevel(v_binderType_1982_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
if (lean_obj_tag(v___x_2183_) == 0)
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2201_; 
v_a_2184_ = lean_ctor_get(v___x_2183_, 0);
v_isSharedCheck_2201_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2186_ = v___x_2183_;
v_isShared_2187_ = v_isSharedCheck_2201_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2183_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2201_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2194_; 
v___x_2188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2188_, 0, v_a_2184_);
lean_ctor_set(v___x_2188_, 1, v___x_2172_);
v___x_2189_ = l_Lean_mkConst(v___x_2166_, v___x_2188_);
lean_inc_ref(v_binderType_1982_);
lean_inc_ref_n(v_body_1983_, 2);
v___x_2190_ = l_Lean_mkApp3(v___x_2189_, v_body_1983_, v_binderType_1982_, v_a_2179_);
v___x_2191_ = lean_obj_once(&l_Lean_Meta_Grind_simpForall___closed__13, &l_Lean_Meta_Grind_simpForall___closed__13_once, _init_l_Lean_Meta_Grind_simpForall___closed__13);
v___x_2192_ = l_Lean_mkApp3(v___x_2191_, v_e_1930_, v_body_1983_, v___x_2190_);
if (v_isShared_2182_ == 0)
{
lean_ctor_set(v___x_2181_, 0, v___x_2192_);
v___x_2194_ = v___x_2181_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v___x_2192_);
v___x_2194_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2198_; 
v___x_2195_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2195_, 0, v_body_1983_);
lean_ctor_set(v___x_2195_, 1, v___x_2194_);
lean_ctor_set_uint8(v___x_2195_, sizeof(void*)*2, v___x_2168_);
v___x_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2195_);
if (v_isShared_2187_ == 0)
{
lean_ctor_set(v___x_2186_, 0, v___x_2196_);
v___x_2198_ = v___x_2186_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v___x_2196_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
return v___x_2198_;
}
}
}
}
else
{
lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2209_; 
lean_del_object(v___x_2181_);
lean_dec(v_a_2179_);
lean_dec_ref(v_body_1983_);
lean_dec_ref_known(v_e_1930_, 3);
v_a_2202_ = lean_ctor_get(v___x_2183_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2204_ = v___x_2183_;
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_dec(v___x_2183_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___x_2207_; 
if (v_isShared_2205_ == 0)
{
v___x_2207_ = v___x_2204_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_a_2202_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
}
else
{
lean_dec(v_a_2178_);
v___y_1986_ = v___y_2151_;
v___y_1987_ = v___y_2152_;
v___y_1988_ = v___y_2153_;
v___y_1989_ = v___y_2154_;
v___y_1990_ = v___y_2155_;
v___y_1991_ = v___y_2156_;
v___y_1992_ = v___y_2157_;
goto v___jp_1985_;
}
}
else
{
lean_object* v_a_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2218_; 
lean_dec_ref_known(v_e_1930_, 3);
v_a_2211_ = lean_ctor_get(v___x_2177_, 0);
v_isSharedCheck_2218_ = !lean_is_exclusive(v___x_2177_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2213_ = v___x_2177_;
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_a_2211_);
lean_dec(v___x_2177_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2216_; 
if (v_isShared_2214_ == 0)
{
v___x_2216_ = v___x_2213_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v_a_2211_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
}
else
{
lean_object* v_a_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2226_; 
lean_dec_ref_known(v_e_1930_, 3);
v_a_2219_ = lean_ctor_get(v___x_2169_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v___x_2169_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2221_ = v___x_2169_;
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_a_2219_);
lean_dec(v___x_2169_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v___x_2224_; 
if (v_isShared_2222_ == 0)
{
v___x_2224_ = v___x_2221_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_a_2219_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
}
}
}
else
{
lean_dec(v___x_2162_);
lean_dec(v_a_2161_);
v___y_1986_ = v___y_2151_;
v___y_1987_ = v___y_2152_;
v___y_1988_ = v___y_2153_;
v___y_1989_ = v___y_2154_;
v___y_1990_ = v___y_2155_;
v___y_1991_ = v___y_2156_;
v___y_1992_ = v___y_2157_;
goto v___jp_1985_;
}
}
else
{
lean_object* v_a_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2234_; 
lean_dec(v_a_2159_);
lean_dec_ref_known(v_e_1930_, 3);
v_a_2227_ = lean_ctor_get(v___x_2160_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2160_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2229_ = v___x_2160_;
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_a_2227_);
lean_dec(v___x_2160_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v___x_2232_; 
if (v_isShared_2230_ == 0)
{
v___x_2232_ = v___x_2229_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_a_2227_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
}
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
lean_dec_ref_known(v_e_1930_, 3);
v_a_2235_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2158_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2158_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
}
else
{
lean_object* v___x_2488_; lean_object* v___x_2489_; 
lean_dec_ref(v_e_1930_);
v___x_2488_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__0));
v___x_2489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2489_, 0, v___x_2488_);
return v___x_2489_;
}
v___jp_1939_:
{
lean_object* v___x_1944_; 
v___x_1944_ = l_Lean_Meta_Grind_forallImpAnd_x3f(v_e_1930_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_);
if (lean_obj_tag(v___x_1944_) == 0)
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1972_; 
v_a_1945_ = lean_ctor_get(v___x_1944_, 0);
v_isSharedCheck_1972_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1947_ = v___x_1944_;
v_isShared_1948_ = v_isSharedCheck_1972_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v___x_1944_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1972_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
if (lean_obj_tag(v_a_1945_) == 1)
{
lean_object* v_val_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1967_; 
v_val_1949_ = lean_ctor_get(v_a_1945_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v_a_1945_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1951_ = v_a_1945_;
v_isShared_1952_ = v_isSharedCheck_1967_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_val_1949_);
lean_dec(v_a_1945_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1967_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v_snd_1953_; lean_object* v_fst_1954_; lean_object* v_fst_1955_; lean_object* v_snd_1956_; lean_object* v___x_1957_; lean_object* v___x_1959_; 
v_snd_1953_ = lean_ctor_get(v_val_1949_, 1);
lean_inc(v_snd_1953_);
v_fst_1954_ = lean_ctor_get(v_val_1949_, 0);
lean_inc(v_fst_1954_);
lean_dec(v_val_1949_);
v_fst_1955_ = lean_ctor_get(v_snd_1953_, 0);
lean_inc(v_fst_1955_);
v_snd_1956_ = lean_ctor_get(v_snd_1953_, 1);
lean_inc(v_snd_1956_);
lean_dec(v_snd_1953_);
v___x_1957_ = l_Lean_mkAnd(v_fst_1954_, v_fst_1955_);
if (v_isShared_1952_ == 0)
{
lean_ctor_set(v___x_1951_, 0, v_snd_1956_);
v___x_1959_ = v___x_1951_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v_snd_1956_);
v___x_1959_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
uint8_t v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1964_; 
v___x_1960_ = 1;
v___x_1961_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1961_, 0, v___x_1957_);
lean_ctor_set(v___x_1961_, 1, v___x_1959_);
lean_ctor_set_uint8(v___x_1961_, sizeof(void*)*2, v___x_1960_);
v___x_1962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1962_, 0, v___x_1961_);
if (v_isShared_1948_ == 0)
{
lean_ctor_set(v___x_1947_, 0, v___x_1962_);
v___x_1964_ = v___x_1947_;
goto v_reusejp_1963_;
}
else
{
lean_object* v_reuseFailAlloc_1965_; 
v_reuseFailAlloc_1965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1965_, 0, v___x_1962_);
v___x_1964_ = v_reuseFailAlloc_1965_;
goto v_reusejp_1963_;
}
v_reusejp_1963_:
{
return v___x_1964_;
}
}
}
}
else
{
lean_object* v___x_1968_; lean_object* v___x_1970_; 
lean_dec(v_a_1945_);
v___x_1968_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__0));
if (v_isShared_1948_ == 0)
{
lean_ctor_set(v___x_1947_, 0, v___x_1968_);
v___x_1970_ = v___x_1947_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v___x_1968_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
}
}
else
{
lean_object* v_a_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1980_; 
v_a_1973_ = lean_ctor_get(v___x_1944_, 0);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1975_ = v___x_1944_;
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_a_1973_);
lean_dec(v___x_1944_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1978_; 
if (v_isShared_1976_ == 0)
{
v___x_1978_ = v___x_1975_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_a_1973_);
v___x_1978_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
return v___x_1978_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpForall___boxed(lean_object* v_e_2490_, lean_object* v_a_2491_, lean_object* v_a_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_){
_start:
{
lean_object* v_res_2499_; 
v_res_2499_ = l_Lean_Meta_Grind_simpForall(v_e_2490_, v_a_2491_, v_a_2492_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_);
lean_dec(v_a_2497_);
lean_dec_ref(v_a_2496_);
lean_dec(v_a_2495_);
lean_dec_ref(v_a_2494_);
lean_dec(v_a_2493_);
lean_dec_ref(v_a_2492_);
lean_dec(v_a_2491_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0(lean_object* v_00_u03b1_2500_, lean_object* v_name_2501_, uint8_t v_bi_2502_, lean_object* v_type_2503_, lean_object* v_k_2504_, uint8_t v_kind_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_){
_start:
{
lean_object* v___x_2514_; 
v___x_2514_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0___redArg(v_name_2501_, v_bi_2502_, v_type_2503_, v_k_2504_, v_kind_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_);
return v___x_2514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2515_, lean_object* v_name_2516_, lean_object* v_bi_2517_, lean_object* v_type_2518_, lean_object* v_k_2519_, lean_object* v_kind_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_){
_start:
{
uint8_t v_bi_boxed_2529_; uint8_t v_kind_boxed_2530_; lean_object* v_res_2531_; 
v_bi_boxed_2529_ = lean_unbox(v_bi_2517_);
v_kind_boxed_2530_ = lean_unbox(v_kind_2520_);
v_res_2531_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0_spec__0(v_00_u03b1_2515_, v_name_2516_, v_bi_boxed_2529_, v_type_2518_, v_k_2519_, v_kind_boxed_2530_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_);
lean_dec(v___y_2527_);
lean_dec_ref(v___y_2526_);
lean_dec(v___y_2525_);
lean_dec_ref(v___y_2524_);
lean_dec(v___y_2523_);
lean_dec_ref(v___y_2522_);
lean_dec(v___y_2521_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0(lean_object* v_00_u03b1_2532_, lean_object* v_name_2533_, lean_object* v_type_2534_, lean_object* v_k_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0___redArg(v_name_2533_, v_type_2534_, v_k_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0___boxed(lean_object* v_00_u03b1_2545_, lean_object* v_name_2546_, lean_object* v_type_2547_, lean_object* v_k_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_){
_start:
{
lean_object* v_res_2557_; 
v_res_2557_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_simpForall_spec__0(v_00_u03b1_2545_, v_name_2546_, v_type_2547_, v_k_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_);
lean_dec(v___y_2555_);
lean_dec_ref(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2552_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec(v___y_2549_);
return v_res_2557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12_(){
_start:
{
lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2572_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__2_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12_));
v___x_2573_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__3_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12_));
v___x_2574_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_simpForall___boxed), 9, 0);
v___x_2575_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_2572_, v___x_2573_, v___x_2574_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12____boxed(lean_object* v_a_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12_();
return v_res_2577_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpExists___redArg___closed__4(void){
_start:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; 
v___x_2588_ = lean_box(0);
v___x_2589_ = ((lean_object*)(l_Lean_Meta_Grind_simpExists___redArg___closed__3));
v___x_2590_ = l_Lean_mkConst(v___x_2589_, v___x_2588_);
return v___x_2590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpExists___redArg(lean_object* v_e_2609_, lean_object* v_a_2610_, lean_object* v_a_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_){
_start:
{
lean_object* v___x_2621_; uint8_t v___x_2622_; 
v___x_2621_ = l_Lean_Expr_cleanupAnnotations(v_e_2609_);
v___x_2622_ = l_Lean_Expr_isApp(v___x_2621_);
if (v___x_2622_ == 0)
{
lean_dec_ref(v___x_2621_);
goto v___jp_2618_;
}
else
{
lean_object* v___x_2623_; uint8_t v___x_2624_; 
v___x_2623_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2621_);
v___x_2624_ = l_Lean_Expr_isApp(v___x_2623_);
if (v___x_2624_ == 0)
{
lean_dec_ref(v___x_2623_);
lean_dec_ref(v___x_2621_);
goto v___jp_2618_;
}
else
{
lean_object* v___x_2625_; lean_object* v___x_2626_; uint8_t v___x_2627_; 
v___x_2625_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2623_);
v___x_2626_ = ((lean_object*)(l_Lean_Meta_Grind_propagateForallPropDown___closed__6));
v___x_2627_ = l_Lean_Expr_isConstOf(v___x_2625_, v___x_2626_);
if (v___x_2627_ == 0)
{
lean_dec_ref(v___x_2625_);
lean_dec_ref(v___x_2623_);
lean_dec_ref(v___x_2621_);
goto v___jp_2618_;
}
else
{
lean_object* v_arg_2628_; 
v_arg_2628_ = lean_ctor_get(v___x_2621_, 1);
lean_inc_ref(v_arg_2628_);
lean_dec_ref(v___x_2621_);
if (lean_obj_tag(v_arg_2628_) == 6)
{
lean_object* v_binderName_2629_; lean_object* v_body_2630_; lean_object* v_arg_2631_; lean_object* v___y_2633_; lean_object* v___y_2634_; lean_object* v___y_2635_; lean_object* v___y_2636_; uint8_t v___x_2697_; 
v_binderName_2629_ = lean_ctor_get(v_arg_2628_, 0);
lean_inc(v_binderName_2629_);
v_body_2630_ = lean_ctor_get(v_arg_2628_, 2);
lean_inc_ref(v_body_2630_);
lean_dec_ref_known(v_arg_2628_, 3);
v_arg_2631_ = lean_ctor_get(v___x_2623_, 1);
lean_inc_ref(v_arg_2631_);
lean_dec_ref(v___x_2623_);
v___x_2697_ = l_Lean_Expr_isApp(v_body_2630_);
if (v___x_2697_ == 0)
{
lean_dec(v_binderName_2629_);
v___y_2633_ = v_a_2610_;
v___y_2634_ = v_a_2611_;
v___y_2635_ = v_a_2612_;
v___y_2636_ = v_a_2613_;
goto v___jp_2632_;
}
else
{
lean_object* v___x_2698_; lean_object* v___x_2699_; uint8_t v___x_2700_; 
v___x_2698_ = l_Lean_Expr_getAppNumArgs(v_body_2630_);
v___x_2699_ = lean_unsigned_to_nat(2u);
v___x_2700_ = lean_nat_dec_eq(v___x_2698_, v___x_2699_);
lean_dec(v___x_2698_);
if (v___x_2700_ == 0)
{
lean_dec(v_binderName_2629_);
v___y_2633_ = v_a_2610_;
v___y_2634_ = v_a_2611_;
v___y_2635_ = v_a_2612_;
v___y_2636_ = v_a_2613_;
goto v___jp_2632_;
}
else
{
lean_object* v___x_2701_; lean_object* v___x_2702_; 
v___x_2701_ = l_Lean_Expr_appFn_x21(v_body_2630_);
v___x_2702_ = l_Lean_Expr_appFn_x21(v___x_2701_);
if (lean_obj_tag(v___x_2702_) == 4)
{
lean_object* v_declName_2703_; lean_object* v___x_2704_; uint8_t v___x_2705_; 
v_declName_2703_ = lean_ctor_get(v___x_2702_, 0);
lean_inc(v_declName_2703_);
lean_dec_ref_known(v___x_2702_, 2);
v___x_2704_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__2));
v___x_2705_ = lean_name_eq(v_declName_2703_, v___x_2704_);
if (v___x_2705_ == 0)
{
lean_object* v___x_2706_; uint8_t v___x_2707_; 
v___x_2706_ = ((lean_object*)(l_Lean_Meta_Grind_simpExists___redArg___closed__6));
v___x_2707_ = lean_name_eq(v_declName_2703_, v___x_2706_);
lean_dec(v_declName_2703_);
if (v___x_2707_ == 0)
{
lean_dec_ref(v___x_2701_);
lean_dec(v_binderName_2629_);
v___y_2633_ = v_a_2610_;
v___y_2634_ = v_a_2611_;
v___y_2635_ = v_a_2612_;
v___y_2636_ = v_a_2613_;
goto v___jp_2632_;
}
else
{
lean_object* v_b_2708_; lean_object* v_b_2709_; uint8_t v___x_2710_; 
v_b_2708_ = l_Lean_Expr_appArg_x21(v___x_2701_);
lean_dec_ref(v___x_2701_);
v_b_2709_ = l_Lean_Expr_appArg_x21(v_body_2630_);
v___x_2710_ = l_Lean_Expr_hasLooseBVars(v_b_2708_);
if (v___x_2710_ == 0)
{
uint8_t v___x_2711_; lean_object* v_p_2712_; lean_object* v___x_2713_; lean_object* v_expr_2714_; lean_object* v_u_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; 
lean_dec_ref(v_body_2630_);
v___x_2711_ = 0;
lean_inc_ref_n(v_arg_2631_, 2);
v_p_2712_ = l_Lean_mkLambda(v_binderName_2629_, v___x_2711_, v_arg_2631_, v_b_2709_);
lean_inc_ref(v_p_2712_);
lean_inc_ref(v___x_2625_);
v___x_2713_ = l_Lean_mkAppB(v___x_2625_, v_arg_2631_, v_p_2712_);
lean_inc_ref(v_b_2708_);
v_expr_2714_ = l_Lean_mkAnd(v_b_2708_, v___x_2713_);
v_u_2715_ = l_Lean_Expr_constLevels_x21(v___x_2625_);
lean_dec_ref(v___x_2625_);
v___x_2716_ = ((lean_object*)(l_Lean_Meta_Grind_simpExists___redArg___closed__8));
v___x_2717_ = l_Lean_mkConst(v___x_2716_, v_u_2715_);
v___x_2718_ = l_Lean_mkApp3(v___x_2717_, v_arg_2631_, v_p_2712_, v_b_2708_);
v___x_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2719_, 0, v___x_2718_);
v___x_2720_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2720_, 0, v_expr_2714_);
lean_ctor_set(v___x_2720_, 1, v___x_2719_);
lean_ctor_set_uint8(v___x_2720_, sizeof(void*)*2, v___x_2707_);
v___x_2721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2721_, 0, v___x_2720_);
v___x_2722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2722_, 0, v___x_2721_);
return v___x_2722_;
}
else
{
uint8_t v___x_2723_; 
v___x_2723_ = l_Lean_Expr_hasLooseBVars(v_b_2709_);
if (v___x_2723_ == 0)
{
uint8_t v___x_2724_; lean_object* v_p_2725_; lean_object* v___x_2726_; lean_object* v_expr_2727_; lean_object* v_u_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
lean_dec_ref(v_body_2630_);
v___x_2724_ = 0;
lean_inc_ref_n(v_arg_2631_, 2);
v_p_2725_ = l_Lean_mkLambda(v_binderName_2629_, v___x_2724_, v_arg_2631_, v_b_2708_);
lean_inc_ref(v_p_2725_);
lean_inc_ref(v___x_2625_);
v___x_2726_ = l_Lean_mkAppB(v___x_2625_, v_arg_2631_, v_p_2725_);
lean_inc_ref(v_b_2709_);
v_expr_2727_ = l_Lean_mkAnd(v___x_2726_, v_b_2709_);
v_u_2728_ = l_Lean_Expr_constLevels_x21(v___x_2625_);
lean_dec_ref(v___x_2625_);
v___x_2729_ = ((lean_object*)(l_Lean_Meta_Grind_simpExists___redArg___closed__10));
v___x_2730_ = l_Lean_mkConst(v___x_2729_, v_u_2728_);
v___x_2731_ = l_Lean_mkApp3(v___x_2730_, v_arg_2631_, v_p_2725_, v_b_2709_);
v___x_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2732_, 0, v___x_2731_);
v___x_2733_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2733_, 0, v_expr_2727_);
lean_ctor_set(v___x_2733_, 1, v___x_2732_);
lean_ctor_set_uint8(v___x_2733_, sizeof(void*)*2, v___x_2707_);
v___x_2734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2734_, 0, v___x_2733_);
v___x_2735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2735_, 0, v___x_2734_);
return v___x_2735_;
}
else
{
lean_dec_ref(v_b_2709_);
lean_dec_ref(v_b_2708_);
lean_dec(v_binderName_2629_);
v___y_2633_ = v_a_2610_;
v___y_2634_ = v_a_2611_;
v___y_2635_ = v_a_2612_;
v___y_2636_ = v_a_2613_;
goto v___jp_2632_;
}
}
}
}
else
{
lean_object* v_pRaw_2736_; lean_object* v_qRaw_2737_; uint8_t v___x_2738_; lean_object* v_p_2739_; lean_object* v_q_2740_; lean_object* v_u_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v_expr_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; 
lean_dec(v_declName_2703_);
v_pRaw_2736_ = l_Lean_Expr_appArg_x21(v___x_2701_);
lean_dec_ref(v___x_2701_);
v_qRaw_2737_ = l_Lean_Expr_appArg_x21(v_body_2630_);
lean_dec_ref(v_body_2630_);
v___x_2738_ = 0;
lean_inc_ref_n(v_arg_2631_, 4);
lean_inc(v_binderName_2629_);
v_p_2739_ = l_Lean_mkLambda(v_binderName_2629_, v___x_2738_, v_arg_2631_, v_pRaw_2736_);
v_q_2740_ = l_Lean_mkLambda(v_binderName_2629_, v___x_2738_, v_arg_2631_, v_qRaw_2737_);
v_u_2741_ = l_Lean_Expr_constLevels_x21(v___x_2625_);
lean_inc_ref(v_p_2739_);
lean_inc_ref(v___x_2625_);
v___x_2742_ = l_Lean_mkAppB(v___x_2625_, v_arg_2631_, v_p_2739_);
lean_inc_ref(v_q_2740_);
v___x_2743_ = l_Lean_mkAppB(v___x_2625_, v_arg_2631_, v_q_2740_);
v_expr_2744_ = l_Lean_mkOr(v___x_2742_, v___x_2743_);
v___x_2745_ = ((lean_object*)(l_Lean_Meta_Grind_simpExists___redArg___closed__12));
v___x_2746_ = l_Lean_mkConst(v___x_2745_, v_u_2741_);
v___x_2747_ = l_Lean_mkApp3(v___x_2746_, v_arg_2631_, v_p_2739_, v_q_2740_);
v___x_2748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2748_, 0, v___x_2747_);
v___x_2749_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2749_, 0, v_expr_2744_);
lean_ctor_set(v___x_2749_, 1, v___x_2748_);
lean_ctor_set_uint8(v___x_2749_, sizeof(void*)*2, v___x_2705_);
v___x_2750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2749_);
v___x_2751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2750_);
return v___x_2751_;
}
}
else
{
lean_object* v___x_2752_; lean_object* v___x_2753_; 
lean_dec_ref(v___x_2702_);
lean_dec_ref(v___x_2701_);
lean_dec_ref(v_arg_2631_);
lean_dec_ref(v_body_2630_);
lean_dec(v_binderName_2629_);
lean_dec_ref(v___x_2625_);
v___x_2752_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__0));
v___x_2753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2752_);
return v___x_2753_;
}
}
}
v___jp_2632_:
{
uint8_t v___x_2637_; 
v___x_2637_ = l_Lean_Expr_hasLooseBVars(v_body_2630_);
if (v___x_2637_ == 0)
{
lean_object* v___x_2638_; 
lean_inc_ref(v_arg_2631_);
v___x_2638_ = l_Lean_Meta_isProp(v_arg_2631_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_);
if (lean_obj_tag(v___x_2638_) == 0)
{
lean_object* v_a_2639_; lean_object* v___x_2641_; uint8_t v_isShared_2642_; uint8_t v_isSharedCheck_2688_; 
v_a_2639_ = lean_ctor_get(v___x_2638_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2638_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2641_ = v___x_2638_;
v_isShared_2642_ = v_isSharedCheck_2688_;
goto v_resetjp_2640_;
}
else
{
lean_inc(v_a_2639_);
lean_dec(v___x_2638_);
v___x_2641_ = lean_box(0);
v_isShared_2642_ = v_isSharedCheck_2688_;
goto v_resetjp_2640_;
}
v_resetjp_2640_:
{
uint8_t v___x_2643_; 
v___x_2643_ = lean_unbox(v_a_2639_);
if (v___x_2643_ == 0)
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; 
lean_del_object(v___x_2641_);
lean_dec(v_a_2639_);
v___x_2644_ = l_Lean_Expr_constLevels_x21(v___x_2625_);
lean_dec_ref(v___x_2625_);
v___x_2645_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__10));
lean_inc(v___x_2644_);
v___x_2646_ = l_Lean_mkConst(v___x_2645_, v___x_2644_);
lean_inc_ref(v_arg_2631_);
v___x_2647_ = l_Lean_Expr_app___override(v___x_2646_, v_arg_2631_);
v___x_2648_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_2647_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_);
if (lean_obj_tag(v___x_2648_) == 0)
{
lean_object* v_a_2649_; lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2669_; 
v_a_2649_ = lean_ctor_get(v___x_2648_, 0);
v_isSharedCheck_2669_ = !lean_is_exclusive(v___x_2648_);
if (v_isSharedCheck_2669_ == 0)
{
v___x_2651_ = v___x_2648_;
v_isShared_2652_ = v_isSharedCheck_2669_;
goto v_resetjp_2650_;
}
else
{
lean_inc(v_a_2649_);
lean_dec(v___x_2648_);
v___x_2651_ = lean_box(0);
v_isShared_2652_ = v_isSharedCheck_2669_;
goto v_resetjp_2650_;
}
v_resetjp_2650_:
{
if (lean_obj_tag(v_a_2649_) == 1)
{
lean_object* v_val_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2668_; 
v_val_2653_ = lean_ctor_get(v_a_2649_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v_a_2649_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2655_ = v_a_2649_;
v_isShared_2656_ = v_isSharedCheck_2668_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_val_2653_);
lean_dec(v_a_2649_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2668_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2661_; 
v___x_2657_ = ((lean_object*)(l_Lean_Meta_Grind_simpExists___redArg___closed__1));
v___x_2658_ = l_Lean_mkConst(v___x_2657_, v___x_2644_);
lean_inc_ref(v_body_2630_);
v___x_2659_ = l_Lean_mkApp3(v___x_2658_, v_arg_2631_, v_val_2653_, v_body_2630_);
if (v_isShared_2656_ == 0)
{
lean_ctor_set(v___x_2655_, 0, v___x_2659_);
v___x_2661_ = v___x_2655_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v___x_2659_);
v___x_2661_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2665_; 
v___x_2662_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2662_, 0, v_body_2630_);
lean_ctor_set(v___x_2662_, 1, v___x_2661_);
lean_ctor_set_uint8(v___x_2662_, sizeof(void*)*2, v___x_2627_);
v___x_2663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2663_, 0, v___x_2662_);
if (v_isShared_2652_ == 0)
{
lean_ctor_set(v___x_2651_, 0, v___x_2663_);
v___x_2665_ = v___x_2651_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v___x_2663_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
}
}
else
{
lean_del_object(v___x_2651_);
lean_dec(v_a_2649_);
lean_dec(v___x_2644_);
lean_dec_ref(v_arg_2631_);
lean_dec_ref(v_body_2630_);
goto v___jp_2615_;
}
}
}
else
{
lean_object* v_a_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2677_; 
lean_dec(v___x_2644_);
lean_dec_ref(v_arg_2631_);
lean_dec_ref(v_body_2630_);
v_a_2670_ = lean_ctor_get(v___x_2648_, 0);
v_isSharedCheck_2677_ = !lean_is_exclusive(v___x_2648_);
if (v_isSharedCheck_2677_ == 0)
{
v___x_2672_ = v___x_2648_;
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_a_2670_);
lean_dec(v___x_2648_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2675_; 
if (v_isShared_2673_ == 0)
{
v___x_2675_ = v___x_2672_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v_a_2670_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
return v___x_2675_;
}
}
}
}
else
{
lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; uint8_t v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2686_; 
lean_dec_ref(v___x_2625_);
lean_inc_ref(v_body_2630_);
lean_inc_ref(v_arg_2631_);
v___x_2678_ = l_Lean_mkAnd(v_arg_2631_, v_body_2630_);
v___x_2679_ = lean_obj_once(&l_Lean_Meta_Grind_simpExists___redArg___closed__4, &l_Lean_Meta_Grind_simpExists___redArg___closed__4_once, _init_l_Lean_Meta_Grind_simpExists___redArg___closed__4);
v___x_2680_ = l_Lean_mkAppB(v___x_2679_, v_arg_2631_, v_body_2630_);
v___x_2681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2680_);
v___x_2682_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2682_, 0, v___x_2678_);
lean_ctor_set(v___x_2682_, 1, v___x_2681_);
v___x_2683_ = lean_unbox(v_a_2639_);
lean_dec(v_a_2639_);
lean_ctor_set_uint8(v___x_2682_, sizeof(void*)*2, v___x_2683_);
v___x_2684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2684_, 0, v___x_2682_);
if (v_isShared_2642_ == 0)
{
lean_ctor_set(v___x_2641_, 0, v___x_2684_);
v___x_2686_ = v___x_2641_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v___x_2684_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
}
else
{
lean_object* v_a_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2696_; 
lean_dec_ref(v_arg_2631_);
lean_dec_ref(v_body_2630_);
lean_dec_ref(v___x_2625_);
v_a_2689_ = lean_ctor_get(v___x_2638_, 0);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___x_2638_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2691_ = v___x_2638_;
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_a_2689_);
lean_dec(v___x_2638_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2694_; 
if (v_isShared_2692_ == 0)
{
v___x_2694_ = v___x_2691_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_a_2689_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
}
}
}
else
{
lean_dec_ref(v_arg_2631_);
lean_dec_ref(v_body_2630_);
lean_dec_ref(v___x_2625_);
goto v___jp_2615_;
}
}
}
else
{
lean_object* v___x_2754_; lean_object* v___x_2755_; 
lean_dec_ref(v_arg_2628_);
lean_dec_ref(v___x_2625_);
lean_dec_ref(v___x_2623_);
v___x_2754_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__0));
v___x_2755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2755_, 0, v___x_2754_);
return v___x_2755_;
}
}
}
}
v___jp_2615_:
{
lean_object* v___x_2616_; lean_object* v___x_2617_; 
v___x_2616_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__0));
v___x_2617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2617_, 0, v___x_2616_);
return v___x_2617_;
}
v___jp_2618_:
{
lean_object* v___x_2619_; lean_object* v___x_2620_; 
v___x_2619_ = ((lean_object*)(l_Lean_Meta_Grind_simpForall___closed__0));
v___x_2620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2620_, 0, v___x_2619_);
return v___x_2620_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpExists___redArg___boxed(lean_object* v_e_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_){
_start:
{
lean_object* v_res_2762_; 
v_res_2762_ = l_Lean_Meta_Grind_simpExists___redArg(v_e_2756_, v_a_2757_, v_a_2758_, v_a_2759_, v_a_2760_);
lean_dec(v_a_2760_);
lean_dec_ref(v_a_2759_);
lean_dec(v_a_2758_);
lean_dec_ref(v_a_2757_);
lean_dec_ref(v_e_2756_);
return v_res_2762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpExists(lean_object* v_e_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_, lean_object* v_a_2768_, lean_object* v_a_2769_, lean_object* v_a_2770_){
_start:
{
lean_object* v___x_2772_; 
v___x_2772_ = l_Lean_Meta_Grind_simpExists___redArg(v_e_2763_, v_a_2767_, v_a_2768_, v_a_2769_, v_a_2770_);
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpExists___boxed(lean_object* v_e_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_, lean_object* v_a_2780_, lean_object* v_a_2781_){
_start:
{
lean_object* v_res_2782_; 
v_res_2782_ = l_Lean_Meta_Grind_simpExists(v_e_2773_, v_a_2774_, v_a_2775_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_, v_a_2780_);
lean_dec(v_a_2780_);
lean_dec_ref(v_a_2779_);
lean_dec(v_a_2778_);
lean_dec_ref(v_a_2777_);
lean_dec(v_a_2776_);
lean_dec_ref(v_a_2775_);
lean_dec(v_a_2774_);
lean_dec_ref(v_e_2773_);
return v_res_2782_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11_(){
_start:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2800_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11_));
v___x_2801_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__3_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11_));
v___x_2802_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_simpExists___boxed), 9, 0);
v___x_2803_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_2800_, v___x_2801_, v___x_2802_);
return v___x_2803_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11____boxed(lean_object* v_a_2804_){
_start:
{
lean_object* v_res_2805_; 
v_res_2805_ = l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11_();
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addForallSimproc(lean_object* v_s_2806_, lean_object* v_a_2807_, lean_object* v_a_2808_){
_start:
{
lean_object* v___x_2810_; uint8_t v___x_2811_; lean_object* v___x_2812_; 
v___x_2810_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35___closed__2_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12_));
v___x_2811_ = 1;
v___x_2812_ = l_Lean_Meta_Simp_Simprocs_add(v_s_2806_, v___x_2810_, v___x_2811_, v_a_2807_, v_a_2808_);
if (lean_obj_tag(v___x_2812_) == 0)
{
lean_object* v_a_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; 
v_a_2813_ = lean_ctor_get(v___x_2812_, 0);
lean_inc(v_a_2813_);
lean_dec_ref_known(v___x_2812_, 1);
v___x_2814_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40___closed__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11_));
v___x_2815_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2813_, v___x_2814_, v___x_2811_, v_a_2807_, v_a_2808_);
return v___x_2815_;
}
else
{
return v___x_2812_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addForallSimproc___boxed(lean_object* v_s_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_, lean_object* v_a_2819_){
_start:
{
lean_object* v_res_2820_; 
v_res_2820_ = l_Lean_Meta_Grind_addForallSimproc(v_s_2816_, v_a_2817_, v_a_2818_);
lean_dec(v_a_2818_);
lean_dec_ref(v_a_2817_);
return v_res_2820_;
}
}
lean_object* runtime_initialize_Init_Grind_Propagator(uint8_t builtin);
lean_object* runtime_initialize_Init_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Norm(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ForallAnd(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Internalize(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Anchor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_EqResolution(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Lemmas(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ForallProp(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind_Propagator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ForallAnd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_EqResolution(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_ForallProp_0__Lean_Meta_Grind_propagateExistsDown___regBuiltin_Lean_Meta_Grind_propagateExistsDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_ForallProp_1871237267____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpForall_declare__35_00___x40_Lean_Meta_Tactic_Grind_ForallProp_2666089653____hygCtx___hyg_12_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_ForallProp_0____regBuiltin_Lean_Meta_Grind_simpExists_declare__40_00___x40_Lean_Meta_Tactic_Grind_ForallProp_173604616____hygCtx___hyg_11_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_ForallProp(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Propagator(uint8_t builtin);
lean_object* initialize_Init_Simproc(uint8_t builtin);
lean_object* initialize_Init_Grind_Norm(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_ForallAnd(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Internalize(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Anchor(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_EqResolution(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
lean_object* initialize_Init_Grind_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_ForallProp(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Propagator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_ForallAnd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_EqResolution(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ForallProp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_ForallProp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_ForallProp(builtin);
}
#ifdef __cplusplus
}
#endif
