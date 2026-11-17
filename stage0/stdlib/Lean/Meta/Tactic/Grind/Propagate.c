// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Propagate
// Imports: import Init.Grind import Lean.Meta.Tactic.Grind.Simp import Lean.Meta.Tactic.Grind.Util import Lean.Meta.Tactic.Grind.Ext import Lean.Meta.Tactic.Grind.Diseq public import Lean.Meta.Tactic.Grind.PropagatorAttr
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
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqTrueProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getENode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_mk_heq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_hasSameType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_condCondition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Meta_Grind_preprocessLight___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_registerParent___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecisionProjectionProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolFalseExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolTrueExpr___redArg(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqFalseCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqBoolFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqBoolTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqv___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_closeGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqBoolTrueProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqBoolFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqBoolFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqBoolTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getExtTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_Grind_instantiateExtTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_Grind_Solvers_propagateDiseqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getRootENode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_mkAppRange(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkDiseqProof_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getTrueExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getRoot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrueCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_markCaseSplitAsResolved(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateAndUp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndUp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_propagateAndUp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_propagateAndUp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_propagateAndUp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "and_eq_of_eq_false_right"};
static const lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndUp___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndUp___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndUp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 108, 85, 20, 119, 45, 62, 65)}};
static const lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__6;
static const lean_string_object l_Lean_Meta_Grind_propagateAndUp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "and_eq_of_eq_false_left"};
static const lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndUp___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndUp___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndUp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__7_value),LEAN_SCALAR_PTR_LITERAL(42, 144, 170, 255, 103, 245, 81, 212)}};
static const lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__9;
static const lean_string_object l_Lean_Meta_Grind_propagateAndUp___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "and_eq_of_eq_true_right"};
static const lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndUp___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndUp___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndUp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__10_value),LEAN_SCALAR_PTR_LITERAL(251, 27, 120, 129, 126, 49, 187, 13)}};
static const lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__11_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__12;
static const lean_string_object l_Lean_Meta_Grind_propagateAndUp___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "and_eq_of_eq_true_left"};
static const lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__13_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndUp___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndUp___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__14_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndUp___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__14_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__13_value),LEAN_SCALAR_PTR_LITERAL(230, 88, 90, 113, 195, 40, 138, 59)}};
static const lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__14_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__15;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndUp___regBuiltin_Lean_Meta_Grind_propagateAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2341738659____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndUp___regBuiltin_Lean_Meta_Grind_propagateAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2341738659____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateAndDown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "eq_true_of_and_eq_true_left"};
static const lean_object* l_Lean_Meta_Grind_propagateAndDown___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndDown___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndDown___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndDown___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateAndDown___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndDown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateAndDown___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateAndDown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 148, 180, 55, 174, 141, 160, 204)}};
static const lean_object* l_Lean_Meta_Grind_propagateAndDown___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndDown___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndDown___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndDown___closed__2;
static const lean_string_object l_Lean_Meta_Grind_propagateAndDown___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "eq_true_of_and_eq_true_right"};
static const lean_object* l_Lean_Meta_Grind_propagateAndDown___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndDown___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndDown___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndDown___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateAndDown___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateAndDown___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateAndDown___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateAndDown___closed__3_value),LEAN_SCALAR_PTR_LITERAL(210, 133, 90, 124, 15, 221, 47, 193)}};
static const lean_object* l_Lean_Meta_Grind_propagateAndDown___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_propagateAndDown___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndDown___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndDown___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndDown___regBuiltin_Lean_Meta_Grind_propagateAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_976872719____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndDown___regBuiltin_Lean_Meta_Grind_propagateAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_976872719____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateOrUp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrUp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_propagateOrUp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "or_eq_of_eq_true_right"};
static const lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrUp___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrUp___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrUp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(220, 166, 32, 31, 112, 92, 57, 243)}};
static const lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__4;
static const lean_string_object l_Lean_Meta_Grind_propagateOrUp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "or_eq_of_eq_true_left"};
static const lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrUp___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrUp___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrUp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__5_value),LEAN_SCALAR_PTR_LITERAL(32, 77, 158, 9, 2, 239, 232, 91)}};
static const lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__7;
static const lean_string_object l_Lean_Meta_Grind_propagateOrUp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "or_eq_of_eq_false_right"};
static const lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrUp___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrUp___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrUp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__8_value),LEAN_SCALAR_PTR_LITERAL(249, 16, 179, 228, 207, 170, 243, 86)}};
static const lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__10;
static const lean_string_object l_Lean_Meta_Grind_propagateOrUp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "or_eq_of_eq_false_left"};
static const lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrUp___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrUp___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__12_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrUp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__12_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__11_value),LEAN_SCALAR_PTR_LITERAL(36, 196, 166, 85, 112, 30, 44, 207)}};
static const lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrUp___regBuiltin_Lean_Meta_Grind_propagateOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3848872352____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrUp___regBuiltin_Lean_Meta_Grind_propagateOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3848872352____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateOrDown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "eq_false_of_or_eq_false_left"};
static const lean_object* l_Lean_Meta_Grind_propagateOrDown___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateOrDown___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrDown___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrDown___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateOrDown___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrDown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateOrDown___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateOrDown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 204, 80, 248, 17, 222, 207, 37)}};
static const lean_object* l_Lean_Meta_Grind_propagateOrDown___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateOrDown___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrDown___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrDown___closed__2;
static const lean_string_object l_Lean_Meta_Grind_propagateOrDown___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "eq_false_of_or_eq_false_right"};
static const lean_object* l_Lean_Meta_Grind_propagateOrDown___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateOrDown___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrDown___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrDown___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateOrDown___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateOrDown___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateOrDown___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateOrDown___closed__3_value),LEAN_SCALAR_PTR_LITERAL(4, 189, 1, 60, 23, 208, 33, 127)}};
static const lean_object* l_Lean_Meta_Grind_propagateOrDown___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_propagateOrDown___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrDown___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrDown___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrDown___regBuiltin_Lean_Meta_Grind_propagateOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2934405114____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrDown___regBuiltin_Lean_Meta_Grind_propagateOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2934405114____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateNotUp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotUp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_propagateNotUp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "false_of_not_eq_self"};
static const lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotUp___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotUp___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotUp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(251, 254, 86, 23, 186, 196, 13, 177)}};
static const lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotUp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__4;
static const lean_string_object l_Lean_Meta_Grind_propagateNotUp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "not_eq_of_eq_true"};
static const lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotUp___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotUp___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotUp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__5_value),LEAN_SCALAR_PTR_LITERAL(209, 136, 252, 63, 150, 209, 33, 198)}};
static const lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotUp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__7;
static const lean_string_object l_Lean_Meta_Grind_propagateNotUp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "not_eq_of_eq_false"};
static const lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotUp___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotUp___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotUp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__8_value),LEAN_SCALAR_PTR_LITERAL(197, 159, 169, 125, 202, 111, 60, 105)}};
static const lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotUp___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__10;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotUp___regBuiltin_Lean_Meta_Grind_propagateNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4175663102____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotUp___regBuiltin_Lean_Meta_Grind_propagateNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4175663102____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateNotDown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "eq_false_of_not_eq_true"};
static const lean_object* l_Lean_Meta_Grind_propagateNotDown___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateNotDown___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotDown___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotDown___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateNotDown___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotDown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateNotDown___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateNotDown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(23, 178, 136, 115, 199, 101, 23, 5)}};
static const lean_object* l_Lean_Meta_Grind_propagateNotDown___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateNotDown___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotDown___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotDown___closed__2;
static const lean_string_object l_Lean_Meta_Grind_propagateNotDown___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "eq_true_of_not_eq_false"};
static const lean_object* l_Lean_Meta_Grind_propagateNotDown___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateNotDown___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotDown___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotDown___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateNotDown___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateNotDown___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateNotDown___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateNotDown___closed__3_value),LEAN_SCALAR_PTR_LITERAL(164, 226, 232, 29, 193, 151, 102, 169)}};
static const lean_object* l_Lean_Meta_Grind_propagateNotDown___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_propagateNotDown___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotDown___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotDown___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotDown___regBuiltin_Lean_Meta_Grind_propagateNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3610191934____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotDown___regBuiltin_Lean_Meta_Grind_propagateNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3610191934____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_propagateBoolDiseq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "eq_false_of_not_eq_true'"};
static const lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolDiseq___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolDiseq___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolDiseq___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolDiseq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(172, 183, 221, 210, 33, 132, 178, 207)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolDiseq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___closed__3;
static const lean_string_object l_Lean_Meta_Grind_propagateBoolDiseq___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "eq_true_of_not_eq_false'"};
static const lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolDiseq___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolDiseq___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolDiseq___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolDiseq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(169, 231, 120, 149, 98, 142, 70, 153)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolDiseq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___redArg___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___redArg___lam__0___boxed(lean_object**);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__1_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "eq_false"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(242, 127, 91, 199, 130, 171, 29, 27)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__3_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__2___redArg___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_Grind_propagateEqUp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqUp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_propagateEqUp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "ne_of_eq_false_of_eq_true"};
static const lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqUp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_propagateEqUp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "ne_of_eq_true_of_eq_false"};
static const lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqUp___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqUp___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqUp___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqUp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__4_value),LEAN_SCALAR_PTR_LITERAL(152, 226, 34, 210, 0, 5, 65, 76)}};
static const lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqUp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__6;
static const lean_string_object l_Lean_Meta_Grind_propagateEqUp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "eq_eq_of_eq_true_right"};
static const lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqUp___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqUp___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqUp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__7_value),LEAN_SCALAR_PTR_LITERAL(109, 195, 236, 103, 135, 232, 42, 67)}};
static const lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqUp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__9;
static const lean_string_object l_Lean_Meta_Grind_propagateEqUp___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "eq_eq_of_eq_true_left"};
static const lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqUp___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqUp___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqUp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__10_value),LEAN_SCALAR_PTR_LITERAL(107, 111, 216, 64, 67, 213, 235, 199)}};
static const lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_propagateEqUp___closed__11_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqUp___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqUp___regBuiltin_Lean_Meta_Grind_propagateEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_286357030____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqUp___regBuiltin_Lean_Meta_Grind_propagateEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_286357030____hygCtx___hyg_9____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateEqDown_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateEqDown_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateEqDown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l_Lean_Meta_Grind_propagateEqDown___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateEqDown___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqDown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateEqDown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_object* l_Lean_Meta_Grind_propagateEqDown___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateEqDown___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqDown___regBuiltin_Lean_Meta_Grind_propagateEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2318196400____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqDown___regBuiltin_Lean_Meta_Grind_propagateEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2318196400____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LawfulBEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 131, 20, 143, 70, 69, 65, 69)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateBEqUp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "BEq"};
static const lean_object* l_Lean_Meta_Grind_propagateBEqUp___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_propagateBEqUp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "beq"};
static const lean_object* l_Lean_Meta_Grind_propagateBEqUp___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBEqUp___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBEqUp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(82, 52, 243, 194, 7, 226, 90, 135)}};
static const lean_object* l_Lean_Meta_Grind_propagateBEqUp___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_propagateBEqUp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "beq_eq_false_of_diseq"};
static const lean_object* l_Lean_Meta_Grind_propagateBEqUp___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBEqUp___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBEqUp___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBEqUp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(172, 208, 214, 246, 134, 239, 180, 149)}};
static const lean_object* l_Lean_Meta_Grind_propagateBEqUp___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_propagateBEqUp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "beq_eq_true_of_eq"};
static const lean_object* l_Lean_Meta_Grind_propagateBEqUp___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBEqUp___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBEqUp___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBEqUp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__5_value),LEAN_SCALAR_PTR_LITERAL(167, 171, 207, 135, 144, 97, 123, 222)}};
static const lean_object* l_Lean_Meta_Grind_propagateBEqUp___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_propagateBEqUp___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqUp___regBuiltin_Lean_Meta_Grind_propagateBEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4192136612____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqUp___regBuiltin_Lean_Meta_Grind_propagateBEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4192136612____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateBEqDown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ne_of_beq_eq_false"};
static const lean_object* l_Lean_Meta_Grind_propagateBEqDown___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateBEqDown___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBEqDown___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBEqDown___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBEqDown___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBEqDown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBEqDown___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBEqDown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(35, 188, 189, 31, 103, 102, 90, 237)}};
static const lean_object* l_Lean_Meta_Grind_propagateBEqDown___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateBEqDown___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_propagateBEqDown___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "eq_of_beq_eq_true"};
static const lean_object* l_Lean_Meta_Grind_propagateBEqDown___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateBEqDown___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBEqDown___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBEqDown___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBEqDown___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBEqDown___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBEqDown___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBEqDown___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 117, 230, 167, 164, 196, 163, 155)}};
static const lean_object* l_Lean_Meta_Grind_propagateBEqDown___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateBEqDown___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqDown___regBuiltin_Lean_Meta_Grind_propagateBEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1906898770____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqDown___regBuiltin_Lean_Meta_Grind_propagateBEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1906898770____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateEqMatchDown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "EqMatch"};
static const lean_object* l_Lean_Meta_Grind_propagateEqMatchDown___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateEqMatchDown___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqMatchDown___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqMatchDown___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateEqMatchDown___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateEqMatchDown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateEqMatchDown___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateEqMatchDown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(128, 191, 100, 49, 216, 68, 143, 22)}};
static const lean_object* l_Lean_Meta_Grind_propagateEqMatchDown___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateEqMatchDown___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqMatchDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqMatchDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqMatchDown___regBuiltin_Lean_Meta_Grind_propagateEqMatchDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4201098355____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqMatchDown___regBuiltin_Lean_Meta_Grind_propagateEqMatchDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4201098355____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateHEqDown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l_Lean_Meta_Grind_propagateHEqDown___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateHEqDown___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateHEqDown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateHEqDown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l_Lean_Meta_Grind_propagateHEqDown___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateHEqDown___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqDown___regBuiltin_Lean_Meta_Grind_propagateHEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_735922284____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqDown___regBuiltin_Lean_Meta_Grind_propagateHEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_735922284____hygCtx___hyg_9____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqUp___regBuiltin_Lean_Meta_Grind_propagateHEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3328109199____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqUp___regBuiltin_Lean_Meta_Grind_propagateHEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3328109199____hygCtx___hyg_9____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun___boxed(lean_object**);
static lean_once_cell_t l_Lean_Meta_Grind_propagateCond___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateCond___closed__0;
static const lean_string_object l_Lean_Meta_Grind_propagateCond___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "cond_eq_of_bool_false"};
static const lean_object* l_Lean_Meta_Grind_propagateCond___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateCond___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateCond___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateCond___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__1_value),LEAN_SCALAR_PTR_LITERAL(223, 170, 206, 249, 193, 111, 90, 19)}};
static const lean_object* l_Lean_Meta_Grind_propagateCond___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_propagateCond___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "cond_eq_left"};
static const lean_object* l_Lean_Meta_Grind_propagateCond___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateCond___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateCond___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__3_value),LEAN_SCALAR_PTR_LITERAL(130, 224, 222, 133, 111, 178, 59, 1)}};
static const lean_object* l_Lean_Meta_Grind_propagateCond___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_propagateCond___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "decide_eq_false"};
static const lean_object* l_Lean_Meta_Grind_propagateCond___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateCond___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateCond___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateCond___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__5_value),LEAN_SCALAR_PTR_LITERAL(69, 47, 57, 153, 34, 139, 245, 136)}};
static const lean_object* l_Lean_Meta_Grind_propagateCond___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_propagateCond___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "decide_eq_true"};
static const lean_object* l_Lean_Meta_Grind_propagateCond___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateCond___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateCond___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateCond___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__7_value),LEAN_SCALAR_PTR_LITERAL(101, 82, 55, 141, 31, 164, 57, 199)}};
static const lean_object* l_Lean_Meta_Grind_propagateCond___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_propagateCond___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "cond_eq_right"};
static const lean_object* l_Lean_Meta_Grind_propagateCond___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateCond___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateCond___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__9_value),LEAN_SCALAR_PTR_LITERAL(113, 29, 81, 89, 86, 141, 114, 136)}};
static const lean_object* l_Lean_Meta_Grind_propagateCond___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_propagateCond___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateCond___regBuiltin_Lean_Meta_Grind_propagateCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_1812125326____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateCond___regBuiltin_Lean_Meta_Grind_propagateCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_1812125326____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateCond___regBuiltin_Lean_Meta_Grind_propagateCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_1812125326____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateCond___regBuiltin_Lean_Meta_Grind_propagateCond_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1812125326____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateCond___regBuiltin_Lean_Meta_Grind_propagateCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_1812125326____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateCond___regBuiltin_Lean_Meta_Grind_propagateCond_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1812125326____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateCond___regBuiltin_Lean_Meta_Grind_propagateCond_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1812125326____hygCtx___hyg_9__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateCond___regBuiltin_Lean_Meta_Grind_propagateCond_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1812125326____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateCond___regBuiltin_Lean_Meta_Grind_propagateCond_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1812125326____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateIte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "ite_eq_right_of_eq_false"};
static const lean_object* l_Lean_Meta_Grind_propagateIte___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateIte___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateIte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateIte___closed__0_value),LEAN_SCALAR_PTR_LITERAL(85, 26, 223, 35, 242, 130, 83, 13)}};
static const lean_object* l_Lean_Meta_Grind_propagateIte___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateIte___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_propagateIte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ite_eq_left_of_eq_true"};
static const lean_object* l_Lean_Meta_Grind_propagateIte___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateIte___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateIte___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateIte___closed__2_value),LEAN_SCALAR_PTR_LITERAL(73, 84, 15, 184, 226, 12, 142, 9)}};
static const lean_object* l_Lean_Meta_Grind_propagateIte___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateIte___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_1491137477____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_1491137477____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_1491137477____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1491137477____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_1491137477____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1491137477____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1491137477____hygCtx___hyg_9__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1491137477____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1491137477____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateDIte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "dite_cond_eq_false'"};
static const lean_object* l_Lean_Meta_Grind_propagateDIte___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateDIte___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateDIte___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateDIte___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateDIte___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateDIte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateDIte___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateDIte___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 208, 133, 179, 87, 251, 158, 198)}};
static const lean_object* l_Lean_Meta_Grind_propagateDIte___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateDIte___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_propagateDIte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "dite_cond_eq_true'"};
static const lean_object* l_Lean_Meta_Grind_propagateDIte___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateDIte___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateDIte___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateDIte___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateDIte___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateDIte___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateDIte___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateDIte___closed__2_value),LEAN_SCALAR_PTR_LITERAL(80, 52, 77, 107, 134, 38, 67, 128)}};
static const lean_object* l_Lean_Meta_Grind_propagateDIte___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateDIte___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_3737351488____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_3737351488____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_3737351488____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3737351488____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_3737351488____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3737351488____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3737351488____hygCtx___hyg_9__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3737351488____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3737351488____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateDecisionDown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_Grind_propagateDecisionDown___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateDecisionDown___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateDecisionDown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_Grind_propagateDecisionDown___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_propagateDecisionDown___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Meta_Grind_propagateDecisionDown___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateDecisionDown___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateDecisionDown___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Meta_Grind_propagateDecisionDown___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_propagateDecisionDown___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "of_decide_eq_false"};
static const lean_object* l_Lean_Meta_Grind_propagateDecisionDown___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateDecisionDown___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateDecisionDown___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateDecisionDown___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__4_value),LEAN_SCALAR_PTR_LITERAL(182, 147, 228, 248, 61, 236, 36, 195)}};
static const lean_object* l_Lean_Meta_Grind_propagateDecisionDown___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_propagateDecisionDown___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "of_decide_eq_true"};
static const lean_object* l_Lean_Meta_Grind_propagateDecisionDown___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateDecisionDown___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateDecisionDown___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateDecisionDown___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__6_value),LEAN_SCALAR_PTR_LITERAL(244, 38, 211, 128, 18, 129, 201, 136)}};
static const lean_object* l_Lean_Meta_Grind_propagateDecisionDown___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_propagateDecisionDown___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecisionDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecisionDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecisionUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecisionUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(160, 26, 8, 228, 104, 32, 82, 85)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__4_value),LEAN_SCALAR_PTR_LITERAL(161, 175, 130, 140, 152, 16, 186, 53)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndUp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__3;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__7_value),LEAN_SCALAR_PTR_LITERAL(163, 211, 47, 64, 193, 141, 13, 161)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndUp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__5;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__6_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__10_value),LEAN_SCALAR_PTR_LITERAL(34, 225, 220, 139, 38, 192, 9, 42)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndUp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__7;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndUp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__8_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__13_value),LEAN_SCALAR_PTR_LITERAL(55, 49, 202, 191, 5, 220, 111, 69)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolAndUp___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndUp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndUp___regBuiltin_Lean_Meta_Grind_propagateBoolAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3683843215____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndUp___regBuiltin_Lean_Meta_Grind_propagateBoolAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3683843215____hygCtx___hyg_9____boxed(lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndDown___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndDown___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndDown___closed__0_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndDown___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndDown___closed__0_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndDown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndDown___closed__0_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateAndDown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(189, 119, 163, 136, 179, 150, 159, 132)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolAndDown___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolAndDown___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndDown___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndDown___closed__1;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndDown___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndDown___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndDown___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndDown___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndDown___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolAndDown___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolAndDown___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateAndDown___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 159, 33, 77, 90, 187, 137, 39)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolAndDown___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolAndDown___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndDown___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndDown___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndDown___regBuiltin_Lean_Meta_Grind_propagateBoolAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2508836509____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndDown___regBuiltin_Lean_Meta_Grind_propagateBoolAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2508836509____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "or"};
static const lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 191, 239, 225, 113, 224, 109, 182)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(45, 189, 183, 67, 38, 153, 146, 222)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrUp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__3;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__5_value),LEAN_SCALAR_PTR_LITERAL(153, 186, 97, 237, 168, 207, 131, 131)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrUp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__5;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__6_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__8_value),LEAN_SCALAR_PTR_LITERAL(128, 97, 38, 173, 77, 149, 251, 177)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrUp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__7;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrUp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__8_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateOrUp___closed__11_value),LEAN_SCALAR_PTR_LITERAL(85, 94, 73, 24, 179, 253, 130, 70)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolOrUp___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrUp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrUp___regBuiltin_Lean_Meta_Grind_propagateBoolOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_428936191____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrUp___regBuiltin_Lean_Meta_Grind_propagateBoolOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_428936191____hygCtx___hyg_9____boxed(lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrDown___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrDown___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrDown___closed__0_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrDown___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrDown___closed__0_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrDown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrDown___closed__0_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateOrDown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(118, 8, 66, 25, 166, 142, 103, 182)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolOrDown___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolOrDown___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrDown___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrDown___closed__1;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrDown___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrDown___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrDown___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrDown___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrDown___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolOrDown___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolOrDown___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateOrDown___closed__3_value),LEAN_SCALAR_PTR_LITERAL(181, 34, 184, 188, 120, 43, 145, 199)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolOrDown___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolOrDown___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrDown___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrDown___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrDown___regBuiltin_Lean_Meta_Grind_propagateBoolOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_201731281____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrDown___regBuiltin_Lean_Meta_Grind_propagateBoolOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_201731281____hygCtx___hyg_9____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateBoolNotUp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "not"};
static const lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotUp___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotUp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(208, 215, 171, 150, 192, 180, 249, 22)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotUp___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotUp___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotUp___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotUp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(34, 46, 223, 118, 64, 152, 39, 57)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotUp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__3;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotUp___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotUp___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotUp___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotUp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__5_value),LEAN_SCALAR_PTR_LITERAL(248, 77, 139, 157, 220, 88, 43, 11)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotUp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__5;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotUp___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotUp___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotUp___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotUp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__6_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateNotUp___closed__8_value),LEAN_SCALAR_PTR_LITERAL(244, 210, 8, 221, 13, 95, 8, 117)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolNotUp___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotUp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotUp___regBuiltin_Lean_Meta_Grind_propagateBoolNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1440696379____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotUp___regBuiltin_Lean_Meta_Grind_propagateBoolNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1440696379____hygCtx___hyg_9____boxed(lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotDown___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotDown___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotDown___closed__0_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotDown___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotDown___closed__0_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotDown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotDown___closed__0_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateNotDown___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 229, 82, 105, 115, 174, 156, 45)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolNotDown___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolNotDown___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotDown___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotDown___closed__1;
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotDown___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotDown___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotDown___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateAndUp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotDown___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotDown___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 167, 111, 252, 241, 49, 201, 184)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateBoolNotDown___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateBoolNotDown___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_propagateNotDown___closed__3_value),LEAN_SCALAR_PTR_LITERAL(213, 82, 102, 124, 79, 254, 235, 150)}};
static const lean_object* l_Lean_Meta_Grind_propagateBoolNotDown___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateBoolNotDown___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotDown___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotDown___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotDown___regBuiltin_Lean_Meta_Grind_propagateBoolNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_434325315____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotDown___regBuiltin_Lean_Meta_Grind_propagateBoolNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_434325315____hygCtx___hyg_9____boxed(lean_object*);
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__6(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = lean_box(0);
v___x_12_ = ((lean_object*)(l_Lean_Meta_Grind_propagateAndUp___closed__5));
v___x_13_ = l_Lean_mkConst(v___x_12_, v___x_11_);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__9(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_19_ = lean_box(0);
v___x_20_ = ((lean_object*)(l_Lean_Meta_Grind_propagateAndUp___closed__8));
v___x_21_ = l_Lean_mkConst(v___x_20_, v___x_19_);
return v___x_21_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__12(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_box(0);
v___x_28_ = ((lean_object*)(l_Lean_Meta_Grind_propagateAndUp___closed__11));
v___x_29_ = l_Lean_mkConst(v___x_28_, v___x_27_);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__15(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_35_ = lean_box(0);
v___x_36_ = ((lean_object*)(l_Lean_Meta_Grind_propagateAndUp___closed__14));
v___x_37_ = l_Lean_mkConst(v___x_36_, v___x_35_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndUp(lean_object* v_e_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_){
_start:
{
lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_53_ = l_Lean_Expr_cleanupAnnotations(v_e_38_);
v___x_54_ = l_Lean_Expr_isApp(v___x_53_);
if (v___x_54_ == 0)
{
lean_dec_ref(v___x_53_);
lean_dec_ref(v_e_38_);
goto v___jp_50_;
}
else
{
lean_object* v___x_55_; uint8_t v___x_56_; 
v___x_55_ = l_Lean_Expr_appFnCleanup___redArg(v___x_53_);
v___x_56_ = l_Lean_Expr_isApp(v___x_55_);
if (v___x_56_ == 0)
{
lean_dec_ref(v___x_55_);
lean_dec_ref(v___x_53_);
lean_dec_ref(v_e_38_);
goto v___jp_50_;
}
else
{
lean_object* v___x_57_; lean_object* v___x_58_; uint8_t v___x_59_; 
v___x_57_ = l_Lean_Expr_appFnCleanup___redArg(v___x_55_);
v___x_58_ = ((lean_object*)(l_Lean_Meta_Grind_propagateAndUp___closed__1));
v___x_59_ = l_Lean_Expr_isConstOf(v___x_57_, v___x_58_);
lean_dec_ref(v___x_57_);
if (v___x_59_ == 0)
{
lean_dec_ref(v___x_55_);
lean_dec_ref(v___x_53_);
lean_dec_ref(v_e_38_);
goto v___jp_50_;
}
else
{
lean_object* v_arg_60_; lean_object* v_arg_61_; lean_object* v___x_62_; 
v_arg_60_ = lean_ctor_get(v___x_53_, 1);
lean_inc_ref(v_arg_60_);
lean_dec_ref(v___x_53_);
v_arg_61_ = lean_ctor_get(v___x_55_, 1);
lean_inc_ref_n(v_arg_61_, 2);
lean_dec_ref(v___x_55_);
v___x_62_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_arg_61_, v_a_39_, v_a_43_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_62_) == 0)
{
lean_object* v_a_63_; uint8_t v___x_64_; 
v_a_63_ = lean_ctor_get(v___x_62_, 0);
lean_inc(v_a_63_);
lean_dec_ref_known(v___x_62_, 1);
v___x_64_ = lean_unbox(v_a_63_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; 
lean_inc_ref(v_arg_60_);
v___x_65_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_arg_60_, v_a_39_, v_a_43_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_65_) == 0)
{
lean_object* v_a_66_; uint8_t v___x_67_; 
v_a_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc(v_a_66_);
lean_dec_ref_known(v___x_65_, 1);
v___x_67_ = lean_unbox(v_a_66_);
lean_dec(v_a_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; 
lean_dec(v_a_63_);
lean_inc_ref(v_arg_61_);
v___x_68_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_arg_61_, v_a_39_, v_a_43_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v_a_69_; uint8_t v___x_70_; 
v_a_69_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_a_69_);
lean_dec_ref_known(v___x_68_, 1);
v___x_70_ = lean_unbox(v_a_69_);
lean_dec(v_a_69_);
if (v___x_70_ == 0)
{
lean_object* v___x_71_; 
lean_inc_ref(v_arg_60_);
v___x_71_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_arg_60_, v_a_39_, v_a_43_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_object* v_a_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_94_; 
v_a_72_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_94_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_94_ == 0)
{
v___x_74_ = v___x_71_;
v_isShared_75_ = v_isSharedCheck_94_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_a_72_);
lean_dec(v___x_71_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_94_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
uint8_t v___x_76_; 
v___x_76_ = lean_unbox(v_a_72_);
lean_dec(v_a_72_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v___x_79_; 
lean_dec_ref(v_arg_61_);
lean_dec_ref(v_arg_60_);
lean_dec_ref(v_e_38_);
v___x_77_ = lean_box(0);
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 0, v___x_77_);
v___x_79_ = v___x_74_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v___x_77_);
v___x_79_ = v_reuseFailAlloc_80_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
return v___x_79_;
}
}
else
{
lean_object* v___x_81_; 
lean_del_object(v___x_74_);
lean_inc_ref(v_arg_60_);
v___x_81_ = l_Lean_Meta_Grind_mkEqFalseProof(v_arg_60_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_81_) == 0)
{
lean_object* v_a_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v_a_82_ = lean_ctor_get(v___x_81_, 0);
lean_inc(v_a_82_);
lean_dec_ref_known(v___x_81_, 1);
v___x_83_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__6, &l_Lean_Meta_Grind_propagateAndUp___closed__6_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__6);
v___x_84_ = l_Lean_mkApp3(v___x_83_, v_arg_61_, v_arg_60_, v_a_82_);
v___x_85_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_38_, v___x_84_, v_a_39_, v_a_41_, v_a_43_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
return v___x_85_;
}
else
{
lean_object* v_a_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_93_; 
lean_dec_ref(v_arg_61_);
lean_dec_ref(v_arg_60_);
lean_dec_ref(v_e_38_);
v_a_86_ = lean_ctor_get(v___x_81_, 0);
v_isSharedCheck_93_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_93_ == 0)
{
v___x_88_ = v___x_81_;
v_isShared_89_ = v_isSharedCheck_93_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_a_86_);
lean_dec(v___x_81_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_93_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_91_; 
if (v_isShared_89_ == 0)
{
v___x_91_ = v___x_88_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v_a_86_);
v___x_91_ = v_reuseFailAlloc_92_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
return v___x_91_;
}
}
}
}
}
}
else
{
lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_102_; 
lean_dec_ref(v_arg_61_);
lean_dec_ref(v_arg_60_);
lean_dec_ref(v_e_38_);
v_a_95_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_102_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_102_ == 0)
{
v___x_97_ = v___x_71_;
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_dec(v___x_71_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_100_; 
if (v_isShared_98_ == 0)
{
v___x_100_ = v___x_97_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_a_95_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
}
}
else
{
lean_object* v___x_103_; 
lean_inc_ref(v_arg_61_);
v___x_103_ = l_Lean_Meta_Grind_mkEqFalseProof(v_arg_61_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_103_) == 0)
{
lean_object* v_a_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v_a_104_ = lean_ctor_get(v___x_103_, 0);
lean_inc(v_a_104_);
lean_dec_ref_known(v___x_103_, 1);
v___x_105_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__9, &l_Lean_Meta_Grind_propagateAndUp___closed__9_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__9);
v___x_106_ = l_Lean_mkApp3(v___x_105_, v_arg_61_, v_arg_60_, v_a_104_);
v___x_107_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_38_, v___x_106_, v_a_39_, v_a_41_, v_a_43_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
return v___x_107_;
}
else
{
lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_115_; 
lean_dec_ref(v_arg_61_);
lean_dec_ref(v_arg_60_);
lean_dec_ref(v_e_38_);
v_a_108_ = lean_ctor_get(v___x_103_, 0);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_103_);
if (v_isSharedCheck_115_ == 0)
{
v___x_110_ = v___x_103_;
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_dec(v___x_103_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_113_; 
if (v_isShared_111_ == 0)
{
v___x_113_ = v___x_110_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v_a_108_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
}
}
else
{
lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_123_; 
lean_dec_ref(v_arg_61_);
lean_dec_ref(v_arg_60_);
lean_dec_ref(v_e_38_);
v_a_116_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_123_ == 0)
{
v___x_118_ = v___x_68_;
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_68_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_121_; 
if (v_isShared_119_ == 0)
{
v___x_121_ = v___x_118_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_a_116_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
}
else
{
lean_object* v___x_124_; 
lean_inc_ref(v_arg_60_);
v___x_124_ = l_Lean_Meta_Grind_mkEqTrueProof(v_arg_60_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; lean_object* v___x_129_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
lean_inc(v_a_125_);
lean_dec_ref_known(v___x_124_, 1);
v___x_126_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__12, &l_Lean_Meta_Grind_propagateAndUp___closed__12_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__12);
lean_inc_ref(v_arg_61_);
v___x_127_ = l_Lean_mkApp3(v___x_126_, v_arg_61_, v_arg_60_, v_a_125_);
v___x_128_ = lean_unbox(v_a_63_);
lean_dec(v_a_63_);
v___x_129_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_38_, v_arg_61_, v___x_127_, v___x_128_, v_a_39_, v_a_41_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
return v___x_129_;
}
else
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
lean_dec(v_a_63_);
lean_dec_ref(v_arg_61_);
lean_dec_ref(v_arg_60_);
lean_dec_ref(v_e_38_);
v_a_130_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_124_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_124_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
}
else
{
lean_object* v_a_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_145_; 
lean_dec(v_a_63_);
lean_dec_ref(v_arg_61_);
lean_dec_ref(v_arg_60_);
lean_dec_ref(v_e_38_);
v_a_138_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_145_ == 0)
{
v___x_140_ = v___x_65_;
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_a_138_);
lean_dec(v___x_65_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_a_138_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
}
else
{
lean_object* v___x_146_; 
lean_dec(v_a_63_);
lean_inc_ref(v_arg_61_);
v___x_146_ = l_Lean_Meta_Grind_mkEqTrueProof(v_arg_61_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_146_) == 0)
{
lean_object* v_a_147_; lean_object* v___x_148_; lean_object* v___x_149_; uint8_t v___x_150_; lean_object* v___x_151_; 
v_a_147_ = lean_ctor_get(v___x_146_, 0);
lean_inc(v_a_147_);
lean_dec_ref_known(v___x_146_, 1);
v___x_148_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__15, &l_Lean_Meta_Grind_propagateAndUp___closed__15_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__15);
lean_inc_ref(v_arg_60_);
v___x_149_ = l_Lean_mkApp3(v___x_148_, v_arg_61_, v_arg_60_, v_a_147_);
v___x_150_ = 0;
v___x_151_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_38_, v_arg_60_, v___x_149_, v___x_150_, v_a_39_, v_a_41_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
return v___x_151_;
}
else
{
lean_object* v_a_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_159_; 
lean_dec_ref(v_arg_61_);
lean_dec_ref(v_arg_60_);
lean_dec_ref(v_e_38_);
v_a_152_ = lean_ctor_get(v___x_146_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v___x_146_);
if (v_isSharedCheck_159_ == 0)
{
v___x_154_ = v___x_146_;
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_a_152_);
lean_dec(v___x_146_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_157_; 
if (v_isShared_155_ == 0)
{
v___x_157_ = v___x_154_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_a_152_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
}
}
}
else
{
lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_167_; 
lean_dec_ref(v_arg_61_);
lean_dec_ref(v_arg_60_);
lean_dec_ref(v_e_38_);
v_a_160_ = lean_ctor_get(v___x_62_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_62_);
if (v_isSharedCheck_167_ == 0)
{
v___x_162_ = v___x_62_;
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_62_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_165_; 
if (v_isShared_163_ == 0)
{
v___x_165_ = v___x_162_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_a_160_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
}
}
v___jp_50_:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_box(0);
v___x_52_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
return v___x_52_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndUp___boxed(lean_object* v_e_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Lean_Meta_Grind_propagateAndUp(v_e_168_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_, v_a_178_);
lean_dec(v_a_178_);
lean_dec_ref(v_a_177_);
lean_dec(v_a_176_);
lean_dec_ref(v_a_175_);
lean_dec(v_a_174_);
lean_dec_ref(v_a_173_);
lean_dec(v_a_172_);
lean_dec_ref(v_a_171_);
lean_dec(v_a_170_);
lean_dec(v_a_169_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndUp___regBuiltin_Lean_Meta_Grind_propagateAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2341738659____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_182_ = ((lean_object*)(l_Lean_Meta_Grind_propagateAndUp___closed__1));
v___x_183_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateAndUp___boxed), 12, 0);
v___x_184_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_182_, v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndUp___regBuiltin_Lean_Meta_Grind_propagateAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2341738659____hygCtx___hyg_9____boxed(lean_object* v_a_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndUp___regBuiltin_Lean_Meta_Grind_propagateAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2341738659____hygCtx___hyg_9_();
return v_res_186_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndDown___closed__2(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_192_ = lean_box(0);
v___x_193_ = ((lean_object*)(l_Lean_Meta_Grind_propagateAndDown___closed__1));
v___x_194_ = l_Lean_mkConst(v___x_193_, v___x_192_);
return v___x_194_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndDown___closed__5(void){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_200_ = lean_box(0);
v___x_201_ = ((lean_object*)(l_Lean_Meta_Grind_propagateAndDown___closed__4));
v___x_202_ = l_Lean_mkConst(v___x_201_, v___x_200_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndDown(lean_object* v_e_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_){
_start:
{
lean_object* v___x_218_; 
lean_inc_ref(v_e_203_);
v___x_218_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_203_, v_a_204_, v_a_208_, v_a_210_, v_a_211_, v_a_212_, v_a_213_);
if (lean_obj_tag(v___x_218_) == 0)
{
lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_253_; 
v_a_219_ = lean_ctor_get(v___x_218_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_218_);
if (v_isSharedCheck_253_ == 0)
{
v___x_221_ = v___x_218_;
v_isShared_222_ = v_isSharedCheck_253_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_219_);
lean_dec(v___x_218_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_253_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
uint8_t v___x_223_; 
v___x_223_ = lean_unbox(v_a_219_);
lean_dec(v_a_219_);
if (v___x_223_ == 0)
{
lean_object* v___x_224_; lean_object* v___x_226_; 
lean_dec_ref(v_e_203_);
v___x_224_ = lean_box(0);
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 0, v___x_224_);
v___x_226_ = v___x_221_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_224_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
else
{
lean_object* v___x_228_; uint8_t v___x_229_; 
lean_del_object(v___x_221_);
v___x_228_ = l_Lean_Expr_cleanupAnnotations(v_e_203_);
v___x_229_ = l_Lean_Expr_isApp(v___x_228_);
if (v___x_229_ == 0)
{
lean_dec_ref(v___x_228_);
lean_dec_ref(v_e_203_);
goto v___jp_215_;
}
else
{
lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_230_ = l_Lean_Expr_appFnCleanup___redArg(v___x_228_);
v___x_231_ = l_Lean_Expr_isApp(v___x_230_);
if (v___x_231_ == 0)
{
lean_dec_ref(v___x_230_);
lean_dec_ref(v___x_228_);
lean_dec_ref(v_e_203_);
goto v___jp_215_;
}
else
{
lean_object* v___x_232_; lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_232_ = l_Lean_Expr_appFnCleanup___redArg(v___x_230_);
v___x_233_ = ((lean_object*)(l_Lean_Meta_Grind_propagateAndUp___closed__1));
v___x_234_ = l_Lean_Expr_isConstOf(v___x_232_, v___x_233_);
lean_dec_ref(v___x_232_);
if (v___x_234_ == 0)
{
lean_dec_ref(v___x_230_);
lean_dec_ref(v___x_228_);
lean_dec_ref(v_e_203_);
goto v___jp_215_;
}
else
{
lean_object* v_arg_235_; lean_object* v_arg_236_; lean_object* v___x_237_; 
v_arg_235_ = lean_ctor_get(v___x_228_, 1);
lean_inc_ref(v_arg_235_);
lean_dec_ref(v___x_228_);
v_arg_236_ = lean_ctor_get(v___x_230_, 1);
lean_inc_ref(v_arg_236_);
lean_dec_ref(v___x_230_);
v___x_237_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_203_, v_a_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_, v_a_209_, v_a_210_, v_a_211_, v_a_212_, v_a_213_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v_a_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v_a_238_ = lean_ctor_get(v___x_237_, 0);
lean_inc_n(v_a_238_, 2);
lean_dec_ref_known(v___x_237_, 1);
v___x_239_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndDown___closed__2, &l_Lean_Meta_Grind_propagateAndDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndDown___closed__2);
lean_inc_ref(v_arg_235_);
lean_inc_ref_n(v_arg_236_, 2);
v___x_240_ = l_Lean_mkApp3(v___x_239_, v_arg_236_, v_arg_235_, v_a_238_);
v___x_241_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_arg_236_, v___x_240_, v_a_204_, v_a_206_, v_a_208_, v_a_210_, v_a_211_, v_a_212_, v_a_213_);
if (lean_obj_tag(v___x_241_) == 0)
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
lean_dec_ref_known(v___x_241_, 1);
v___x_242_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndDown___closed__5, &l_Lean_Meta_Grind_propagateAndDown___closed__5_once, _init_l_Lean_Meta_Grind_propagateAndDown___closed__5);
lean_inc_ref(v_arg_235_);
v___x_243_ = l_Lean_mkApp3(v___x_242_, v_arg_236_, v_arg_235_, v_a_238_);
v___x_244_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_arg_235_, v___x_243_, v_a_204_, v_a_206_, v_a_208_, v_a_210_, v_a_211_, v_a_212_, v_a_213_);
return v___x_244_;
}
else
{
lean_dec(v_a_238_);
lean_dec_ref(v_arg_236_);
lean_dec_ref(v_arg_235_);
return v___x_241_;
}
}
else
{
lean_object* v_a_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_252_; 
lean_dec_ref(v_arg_236_);
lean_dec_ref(v_arg_235_);
v_a_245_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_252_ == 0)
{
v___x_247_ = v___x_237_;
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_a_245_);
lean_dec(v___x_237_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_250_; 
if (v_isShared_248_ == 0)
{
v___x_250_ = v___x_247_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_a_245_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
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
lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_261_; 
lean_dec_ref(v_e_203_);
v_a_254_ = lean_ctor_get(v___x_218_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_218_);
if (v_isSharedCheck_261_ == 0)
{
v___x_256_ = v___x_218_;
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_dec(v___x_218_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_a_254_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
v___jp_215_:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = lean_box(0);
v___x_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
return v___x_217_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndDown___boxed(lean_object* v_e_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_Meta_Grind_propagateAndDown(v_e_262_, v_a_263_, v_a_264_, v_a_265_, v_a_266_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_);
lean_dec(v_a_272_);
lean_dec_ref(v_a_271_);
lean_dec(v_a_270_);
lean_dec_ref(v_a_269_);
lean_dec(v_a_268_);
lean_dec_ref(v_a_267_);
lean_dec(v_a_266_);
lean_dec_ref(v_a_265_);
lean_dec(v_a_264_);
lean_dec(v_a_263_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndDown___regBuiltin_Lean_Meta_Grind_propagateAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_976872719____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_276_ = ((lean_object*)(l_Lean_Meta_Grind_propagateAndUp___closed__1));
v___x_277_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateAndDown___boxed), 12, 0);
v___x_278_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_276_, v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndDown___regBuiltin_Lean_Meta_Grind_propagateAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_976872719____hygCtx___hyg_9____boxed(lean_object* v_a_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndDown___regBuiltin_Lean_Meta_Grind_propagateAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_976872719____hygCtx___hyg_9_();
return v_res_280_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__4(void){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = lean_box(0);
v___x_290_ = ((lean_object*)(l_Lean_Meta_Grind_propagateOrUp___closed__3));
v___x_291_ = l_Lean_mkConst(v___x_290_, v___x_289_);
return v___x_291_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__7(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_297_ = lean_box(0);
v___x_298_ = ((lean_object*)(l_Lean_Meta_Grind_propagateOrUp___closed__6));
v___x_299_ = l_Lean_mkConst(v___x_298_, v___x_297_);
return v___x_299_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__10(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_305_ = lean_box(0);
v___x_306_ = ((lean_object*)(l_Lean_Meta_Grind_propagateOrUp___closed__9));
v___x_307_ = l_Lean_mkConst(v___x_306_, v___x_305_);
return v___x_307_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__13(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_313_ = lean_box(0);
v___x_314_ = ((lean_object*)(l_Lean_Meta_Grind_propagateOrUp___closed__12));
v___x_315_ = l_Lean_mkConst(v___x_314_, v___x_313_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrUp(lean_object* v_e_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_){
_start:
{
lean_object* v___x_331_; uint8_t v___x_332_; 
v___x_331_ = l_Lean_Expr_cleanupAnnotations(v_e_316_);
v___x_332_ = l_Lean_Expr_isApp(v___x_331_);
if (v___x_332_ == 0)
{
lean_dec_ref(v___x_331_);
lean_dec_ref(v_e_316_);
goto v___jp_328_;
}
else
{
lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_333_ = l_Lean_Expr_appFnCleanup___redArg(v___x_331_);
v___x_334_ = l_Lean_Expr_isApp(v___x_333_);
if (v___x_334_ == 0)
{
lean_dec_ref(v___x_333_);
lean_dec_ref(v___x_331_);
lean_dec_ref(v_e_316_);
goto v___jp_328_;
}
else
{
lean_object* v___x_335_; lean_object* v___x_336_; uint8_t v___x_337_; 
v___x_335_ = l_Lean_Expr_appFnCleanup___redArg(v___x_333_);
v___x_336_ = ((lean_object*)(l_Lean_Meta_Grind_propagateOrUp___closed__1));
v___x_337_ = l_Lean_Expr_isConstOf(v___x_335_, v___x_336_);
lean_dec_ref(v___x_335_);
if (v___x_337_ == 0)
{
lean_dec_ref(v___x_333_);
lean_dec_ref(v___x_331_);
lean_dec_ref(v_e_316_);
goto v___jp_328_;
}
else
{
lean_object* v_arg_338_; lean_object* v_arg_339_; lean_object* v___x_340_; 
v_arg_338_ = lean_ctor_get(v___x_331_, 1);
lean_inc_ref(v_arg_338_);
lean_dec_ref(v___x_331_);
v_arg_339_ = lean_ctor_get(v___x_333_, 1);
lean_inc_ref_n(v_arg_339_, 2);
lean_dec_ref(v___x_333_);
v___x_340_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_arg_339_, v_a_317_, v_a_321_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; uint8_t v___x_342_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_a_341_);
lean_dec_ref_known(v___x_340_, 1);
v___x_342_ = lean_unbox(v_a_341_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; 
lean_inc_ref(v_arg_338_);
v___x_343_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_arg_338_, v_a_317_, v_a_321_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; uint8_t v___x_345_; 
v_a_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc(v_a_344_);
lean_dec_ref_known(v___x_343_, 1);
v___x_345_ = lean_unbox(v_a_344_);
lean_dec(v_a_344_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; 
lean_dec(v_a_341_);
lean_inc_ref(v_arg_339_);
v___x_346_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_arg_339_, v_a_317_, v_a_321_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; uint8_t v___x_348_; 
v_a_347_ = lean_ctor_get(v___x_346_, 0);
lean_inc(v_a_347_);
lean_dec_ref_known(v___x_346_, 1);
v___x_348_ = lean_unbox(v_a_347_);
lean_dec(v_a_347_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; 
lean_inc_ref(v_arg_338_);
v___x_349_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_arg_338_, v_a_317_, v_a_321_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_349_) == 0)
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_372_; 
v_a_350_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_372_ == 0)
{
v___x_352_ = v___x_349_;
v_isShared_353_ = v_isSharedCheck_372_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_349_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_372_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
uint8_t v___x_354_; 
v___x_354_ = lean_unbox(v_a_350_);
lean_dec(v_a_350_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; lean_object* v___x_357_; 
lean_dec_ref(v_arg_339_);
lean_dec_ref(v_arg_338_);
lean_dec_ref(v_e_316_);
v___x_355_ = lean_box(0);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 0, v___x_355_);
v___x_357_ = v___x_352_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_355_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
else
{
lean_object* v___x_359_; 
lean_del_object(v___x_352_);
lean_inc_ref(v_arg_338_);
v___x_359_ = l_Lean_Meta_Grind_mkEqTrueProof(v_arg_338_, v_a_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v_a_360_ = lean_ctor_get(v___x_359_, 0);
lean_inc(v_a_360_);
lean_dec_ref_known(v___x_359_, 1);
v___x_361_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__4, &l_Lean_Meta_Grind_propagateOrUp___closed__4_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__4);
v___x_362_ = l_Lean_mkApp3(v___x_361_, v_arg_339_, v_arg_338_, v_a_360_);
v___x_363_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_316_, v___x_362_, v_a_317_, v_a_319_, v_a_321_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
return v___x_363_;
}
else
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
lean_dec_ref(v_arg_339_);
lean_dec_ref(v_arg_338_);
lean_dec_ref(v_e_316_);
v_a_364_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_359_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_359_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
}
}
else
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_380_; 
lean_dec_ref(v_arg_339_);
lean_dec_ref(v_arg_338_);
lean_dec_ref(v_e_316_);
v_a_373_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_380_ == 0)
{
v___x_375_ = v___x_349_;
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_349_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
if (v_isShared_376_ == 0)
{
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_a_373_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
else
{
lean_object* v___x_381_; 
lean_inc_ref(v_arg_339_);
v___x_381_ = l_Lean_Meta_Grind_mkEqTrueProof(v_arg_339_, v_a_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_object* v_a_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v_a_382_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_a_382_);
lean_dec_ref_known(v___x_381_, 1);
v___x_383_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__7, &l_Lean_Meta_Grind_propagateOrUp___closed__7_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__7);
v___x_384_ = l_Lean_mkApp3(v___x_383_, v_arg_339_, v_arg_338_, v_a_382_);
v___x_385_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_316_, v___x_384_, v_a_317_, v_a_319_, v_a_321_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
return v___x_385_;
}
else
{
lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_393_; 
lean_dec_ref(v_arg_339_);
lean_dec_ref(v_arg_338_);
lean_dec_ref(v_e_316_);
v_a_386_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_393_ == 0)
{
v___x_388_ = v___x_381_;
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_dec(v___x_381_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_391_; 
if (v_isShared_389_ == 0)
{
v___x_391_ = v___x_388_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_a_386_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
}
}
else
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
lean_dec_ref(v_arg_339_);
lean_dec_ref(v_arg_338_);
lean_dec_ref(v_e_316_);
v_a_394_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_346_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_346_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_394_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
else
{
lean_object* v___x_402_; 
lean_inc_ref(v_arg_338_);
v___x_402_ = l_Lean_Meta_Grind_mkEqFalseProof(v_arg_338_, v_a_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_404_; lean_object* v___x_405_; uint8_t v___x_406_; lean_object* v___x_407_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
lean_inc(v_a_403_);
lean_dec_ref_known(v___x_402_, 1);
v___x_404_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__10, &l_Lean_Meta_Grind_propagateOrUp___closed__10_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__10);
lean_inc_ref(v_arg_339_);
v___x_405_ = l_Lean_mkApp3(v___x_404_, v_arg_339_, v_arg_338_, v_a_403_);
v___x_406_ = lean_unbox(v_a_341_);
lean_dec(v_a_341_);
v___x_407_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_316_, v_arg_339_, v___x_405_, v___x_406_, v_a_317_, v_a_319_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
return v___x_407_;
}
else
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_415_; 
lean_dec(v_a_341_);
lean_dec_ref(v_arg_339_);
lean_dec_ref(v_arg_338_);
lean_dec_ref(v_e_316_);
v_a_408_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_415_ == 0)
{
v___x_410_ = v___x_402_;
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_402_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_413_; 
if (v_isShared_411_ == 0)
{
v___x_413_ = v___x_410_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_a_408_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
}
}
else
{
lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_423_; 
lean_dec(v_a_341_);
lean_dec_ref(v_arg_339_);
lean_dec_ref(v_arg_338_);
lean_dec_ref(v_e_316_);
v_a_416_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_423_ == 0)
{
v___x_418_ = v___x_343_;
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v___x_343_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_421_; 
if (v_isShared_419_ == 0)
{
v___x_421_ = v___x_418_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_a_416_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
}
else
{
lean_object* v___x_424_; 
lean_dec(v_a_341_);
lean_inc_ref(v_arg_339_);
v___x_424_ = l_Lean_Meta_Grind_mkEqFalseProof(v_arg_339_, v_a_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v_a_425_; lean_object* v___x_426_; lean_object* v___x_427_; uint8_t v___x_428_; lean_object* v___x_429_; 
v_a_425_ = lean_ctor_get(v___x_424_, 0);
lean_inc(v_a_425_);
lean_dec_ref_known(v___x_424_, 1);
v___x_426_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__13, &l_Lean_Meta_Grind_propagateOrUp___closed__13_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__13);
lean_inc_ref(v_arg_338_);
v___x_427_ = l_Lean_mkApp3(v___x_426_, v_arg_339_, v_arg_338_, v_a_425_);
v___x_428_ = 0;
v___x_429_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_316_, v_arg_338_, v___x_427_, v___x_428_, v_a_317_, v_a_319_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
return v___x_429_;
}
else
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_437_; 
lean_dec_ref(v_arg_339_);
lean_dec_ref(v_arg_338_);
lean_dec_ref(v_e_316_);
v_a_430_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_437_ == 0)
{
v___x_432_ = v___x_424_;
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_424_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_430_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
}
else
{
lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
lean_dec_ref(v_arg_339_);
lean_dec_ref(v_arg_338_);
lean_dec_ref(v_e_316_);
v_a_438_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_445_ == 0)
{
v___x_440_ = v___x_340_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_dec(v___x_340_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_a_438_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
}
}
}
v___jp_328_:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = lean_box(0);
v___x_330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
return v___x_330_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrUp___boxed(lean_object* v_e_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_Lean_Meta_Grind_propagateOrUp(v_e_446_, v_a_447_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_, v_a_456_);
lean_dec(v_a_456_);
lean_dec_ref(v_a_455_);
lean_dec(v_a_454_);
lean_dec_ref(v_a_453_);
lean_dec(v_a_452_);
lean_dec_ref(v_a_451_);
lean_dec(v_a_450_);
lean_dec_ref(v_a_449_);
lean_dec(v_a_448_);
lean_dec(v_a_447_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrUp___regBuiltin_Lean_Meta_Grind_propagateOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3848872352____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_460_ = ((lean_object*)(l_Lean_Meta_Grind_propagateOrUp___closed__1));
v___x_461_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateOrUp___boxed), 12, 0);
v___x_462_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_460_, v___x_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrUp___regBuiltin_Lean_Meta_Grind_propagateOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3848872352____hygCtx___hyg_9____boxed(lean_object* v_a_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrUp___regBuiltin_Lean_Meta_Grind_propagateOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3848872352____hygCtx___hyg_9_();
return v_res_464_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrDown___closed__2(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_470_ = lean_box(0);
v___x_471_ = ((lean_object*)(l_Lean_Meta_Grind_propagateOrDown___closed__1));
v___x_472_ = l_Lean_mkConst(v___x_471_, v___x_470_);
return v___x_472_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrDown___closed__5(void){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_478_ = lean_box(0);
v___x_479_ = ((lean_object*)(l_Lean_Meta_Grind_propagateOrDown___closed__4));
v___x_480_ = l_Lean_mkConst(v___x_479_, v___x_478_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrDown(lean_object* v_e_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_){
_start:
{
lean_object* v___x_496_; 
lean_inc_ref(v_e_481_);
v___x_496_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_481_, v_a_482_, v_a_486_, v_a_488_, v_a_489_, v_a_490_, v_a_491_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_531_; 
v_a_497_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_531_ == 0)
{
v___x_499_ = v___x_496_;
v_isShared_500_ = v_isSharedCheck_531_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_496_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_531_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
uint8_t v___x_501_; 
v___x_501_ = lean_unbox(v_a_497_);
lean_dec(v_a_497_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; lean_object* v___x_504_; 
lean_dec_ref(v_e_481_);
v___x_502_ = lean_box(0);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_502_);
v___x_504_ = v___x_499_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
else
{
lean_object* v___x_506_; uint8_t v___x_507_; 
lean_del_object(v___x_499_);
v___x_506_ = l_Lean_Expr_cleanupAnnotations(v_e_481_);
v___x_507_ = l_Lean_Expr_isApp(v___x_506_);
if (v___x_507_ == 0)
{
lean_dec_ref(v___x_506_);
lean_dec_ref(v_e_481_);
goto v___jp_493_;
}
else
{
lean_object* v___x_508_; uint8_t v___x_509_; 
v___x_508_ = l_Lean_Expr_appFnCleanup___redArg(v___x_506_);
v___x_509_ = l_Lean_Expr_isApp(v___x_508_);
if (v___x_509_ == 0)
{
lean_dec_ref(v___x_508_);
lean_dec_ref(v___x_506_);
lean_dec_ref(v_e_481_);
goto v___jp_493_;
}
else
{
lean_object* v___x_510_; lean_object* v___x_511_; uint8_t v___x_512_; 
v___x_510_ = l_Lean_Expr_appFnCleanup___redArg(v___x_508_);
v___x_511_ = ((lean_object*)(l_Lean_Meta_Grind_propagateOrUp___closed__1));
v___x_512_ = l_Lean_Expr_isConstOf(v___x_510_, v___x_511_);
lean_dec_ref(v___x_510_);
if (v___x_512_ == 0)
{
lean_dec_ref(v___x_508_);
lean_dec_ref(v___x_506_);
lean_dec_ref(v_e_481_);
goto v___jp_493_;
}
else
{
lean_object* v_arg_513_; lean_object* v_arg_514_; lean_object* v___x_515_; 
v_arg_513_ = lean_ctor_get(v___x_506_, 1);
lean_inc_ref(v_arg_513_);
lean_dec_ref(v___x_506_);
v_arg_514_ = lean_ctor_get(v___x_508_, 1);
lean_inc_ref(v_arg_514_);
lean_dec_ref(v___x_508_);
v___x_515_ = l_Lean_Meta_Grind_mkEqFalseProof(v_e_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_, v_a_489_, v_a_490_, v_a_491_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc_n(v_a_516_, 2);
lean_dec_ref_known(v___x_515_, 1);
v___x_517_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrDown___closed__2, &l_Lean_Meta_Grind_propagateOrDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateOrDown___closed__2);
lean_inc_ref(v_arg_513_);
lean_inc_ref_n(v_arg_514_, 2);
v___x_518_ = l_Lean_mkApp3(v___x_517_, v_arg_514_, v_arg_513_, v_a_516_);
v___x_519_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_arg_514_, v___x_518_, v_a_482_, v_a_484_, v_a_486_, v_a_488_, v_a_489_, v_a_490_, v_a_491_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
lean_dec_ref_known(v___x_519_, 1);
v___x_520_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrDown___closed__5, &l_Lean_Meta_Grind_propagateOrDown___closed__5_once, _init_l_Lean_Meta_Grind_propagateOrDown___closed__5);
lean_inc_ref(v_arg_513_);
v___x_521_ = l_Lean_mkApp3(v___x_520_, v_arg_514_, v_arg_513_, v_a_516_);
v___x_522_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_arg_513_, v___x_521_, v_a_482_, v_a_484_, v_a_486_, v_a_488_, v_a_489_, v_a_490_, v_a_491_);
return v___x_522_;
}
else
{
lean_dec(v_a_516_);
lean_dec_ref(v_arg_514_);
lean_dec_ref(v_arg_513_);
return v___x_519_;
}
}
else
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
lean_dec_ref(v_arg_514_);
lean_dec_ref(v_arg_513_);
v_a_523_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_530_ == 0)
{
v___x_525_ = v___x_515_;
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_515_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_523_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
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
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
lean_dec_ref(v_e_481_);
v_a_532_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_496_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_496_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
v___jp_493_:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = lean_box(0);
v___x_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
return v___x_495_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrDown___boxed(lean_object* v_e_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lean_Meta_Grind_propagateOrDown(v_e_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_, v_a_549_, v_a_550_);
lean_dec(v_a_550_);
lean_dec_ref(v_a_549_);
lean_dec(v_a_548_);
lean_dec_ref(v_a_547_);
lean_dec(v_a_546_);
lean_dec_ref(v_a_545_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec(v_a_542_);
lean_dec(v_a_541_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrDown___regBuiltin_Lean_Meta_Grind_propagateOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2934405114____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_554_ = ((lean_object*)(l_Lean_Meta_Grind_propagateOrUp___closed__1));
v___x_555_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateOrDown___boxed), 12, 0);
v___x_556_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_554_, v___x_555_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrDown___regBuiltin_Lean_Meta_Grind_propagateOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2934405114____hygCtx___hyg_9____boxed(lean_object* v_a_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrDown___regBuiltin_Lean_Meta_Grind_propagateOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2934405114____hygCtx___hyg_9_();
return v_res_558_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotUp___closed__4(void){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_567_ = lean_box(0);
v___x_568_ = ((lean_object*)(l_Lean_Meta_Grind_propagateNotUp___closed__3));
v___x_569_ = l_Lean_mkConst(v___x_568_, v___x_567_);
return v___x_569_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotUp___closed__7(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_575_ = lean_box(0);
v___x_576_ = ((lean_object*)(l_Lean_Meta_Grind_propagateNotUp___closed__6));
v___x_577_ = l_Lean_mkConst(v___x_576_, v___x_575_);
return v___x_577_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotUp___closed__10(void){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_583_ = lean_box(0);
v___x_584_ = ((lean_object*)(l_Lean_Meta_Grind_propagateNotUp___closed__9));
v___x_585_ = l_Lean_mkConst(v___x_584_, v___x_583_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotUp(lean_object* v_e_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_){
_start:
{
lean_object* v___x_601_; uint8_t v___x_602_; 
v___x_601_ = l_Lean_Expr_cleanupAnnotations(v_e_586_);
v___x_602_ = l_Lean_Expr_isApp(v___x_601_);
if (v___x_602_ == 0)
{
lean_dec_ref(v___x_601_);
lean_dec_ref(v_e_586_);
goto v___jp_598_;
}
else
{
lean_object* v___x_603_; lean_object* v___x_604_; uint8_t v___x_605_; 
v___x_603_ = l_Lean_Expr_appFnCleanup___redArg(v___x_601_);
v___x_604_ = ((lean_object*)(l_Lean_Meta_Grind_propagateNotUp___closed__1));
v___x_605_ = l_Lean_Expr_isConstOf(v___x_603_, v___x_604_);
lean_dec_ref(v___x_603_);
if (v___x_605_ == 0)
{
lean_dec_ref(v___x_601_);
lean_dec_ref(v_e_586_);
goto v___jp_598_;
}
else
{
lean_object* v_arg_606_; lean_object* v___x_607_; 
v_arg_606_ = lean_ctor_get(v___x_601_, 1);
lean_inc_ref_n(v_arg_606_, 2);
lean_dec_ref(v___x_601_);
v___x_607_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_arg_606_, v_a_587_, v_a_591_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v_a_608_; uint8_t v___x_609_; 
v_a_608_ = lean_ctor_get(v___x_607_, 0);
lean_inc(v_a_608_);
lean_dec_ref_known(v___x_607_, 1);
v___x_609_ = lean_unbox(v_a_608_);
lean_dec(v_a_608_);
if (v___x_609_ == 0)
{
lean_object* v___x_610_; 
lean_inc_ref(v_arg_606_);
v___x_610_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_arg_606_, v_a_587_, v_a_591_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
if (lean_obj_tag(v___x_610_) == 0)
{
lean_object* v_a_611_; uint8_t v___x_612_; 
v_a_611_ = lean_ctor_get(v___x_610_, 0);
lean_inc(v_a_611_);
lean_dec_ref_known(v___x_610_, 1);
v___x_612_ = lean_unbox(v_a_611_);
lean_dec(v_a_611_);
if (v___x_612_ == 0)
{
lean_object* v___x_613_; 
v___x_613_ = l_Lean_Meta_Grind_isEqv___redArg(v_e_586_, v_arg_606_, v_a_587_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_636_; 
v_a_614_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_636_ == 0)
{
v___x_616_ = v___x_613_;
v_isShared_617_ = v_isSharedCheck_636_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_613_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_636_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
uint8_t v___x_618_; 
v___x_618_ = lean_unbox(v_a_614_);
lean_dec(v_a_614_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; lean_object* v___x_621_; 
lean_dec_ref(v_arg_606_);
lean_dec_ref(v_e_586_);
v___x_619_ = lean_box(0);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 0, v___x_619_);
v___x_621_ = v___x_616_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_619_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
else
{
lean_object* v___x_623_; 
lean_del_object(v___x_616_);
lean_inc(v_a_596_);
lean_inc_ref(v_a_595_);
lean_inc(v_a_594_);
lean_inc_ref(v_a_593_);
lean_inc(v_a_592_);
lean_inc_ref(v_a_591_);
lean_inc(v_a_590_);
lean_inc_ref(v_a_589_);
lean_inc(v_a_588_);
lean_inc(v_a_587_);
lean_inc_ref(v_arg_606_);
v___x_623_ = lean_grind_mk_eq_proof(v_e_586_, v_arg_606_, v_a_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
if (lean_obj_tag(v___x_623_) == 0)
{
lean_object* v_a_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v_a_624_ = lean_ctor_get(v___x_623_, 0);
lean_inc(v_a_624_);
lean_dec_ref_known(v___x_623_, 1);
v___x_625_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__4, &l_Lean_Meta_Grind_propagateNotUp___closed__4_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__4);
v___x_626_ = l_Lean_mkAppB(v___x_625_, v_arg_606_, v_a_624_);
v___x_627_ = l_Lean_Meta_Grind_closeGoal(v___x_626_, v_a_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
return v___x_627_;
}
else
{
lean_object* v_a_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_635_; 
lean_dec_ref(v_arg_606_);
v_a_628_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_635_ == 0)
{
v___x_630_ = v___x_623_;
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_a_628_);
lean_dec(v___x_623_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_633_; 
if (v_isShared_631_ == 0)
{
v___x_633_ = v___x_630_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_a_628_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
}
}
else
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
lean_dec_ref(v_arg_606_);
lean_dec_ref(v_e_586_);
v_a_637_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_644_ == 0)
{
v___x_639_ = v___x_613_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_613_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_637_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
else
{
lean_object* v___x_645_; 
lean_inc_ref(v_arg_606_);
v___x_645_ = l_Lean_Meta_Grind_mkEqTrueProof(v_arg_606_, v_a_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v_a_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v_a_646_ = lean_ctor_get(v___x_645_, 0);
lean_inc(v_a_646_);
lean_dec_ref_known(v___x_645_, 1);
v___x_647_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__7, &l_Lean_Meta_Grind_propagateNotUp___closed__7_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__7);
v___x_648_ = l_Lean_mkAppB(v___x_647_, v_arg_606_, v_a_646_);
v___x_649_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_586_, v___x_648_, v_a_587_, v_a_589_, v_a_591_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
return v___x_649_;
}
else
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_dec_ref(v_arg_606_);
lean_dec_ref(v_e_586_);
v_a_650_ = lean_ctor_get(v___x_645_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_645_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_645_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
}
else
{
lean_object* v_a_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_665_; 
lean_dec_ref(v_arg_606_);
lean_dec_ref(v_e_586_);
v_a_658_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_665_ == 0)
{
v___x_660_ = v___x_610_;
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_a_658_);
lean_dec(v___x_610_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_663_; 
if (v_isShared_661_ == 0)
{
v___x_663_ = v___x_660_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_a_658_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
}
}
else
{
lean_object* v___x_666_; 
lean_inc_ref(v_arg_606_);
v___x_666_ = l_Lean_Meta_Grind_mkEqFalseProof(v_arg_606_, v_a_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v_a_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v_a_667_ = lean_ctor_get(v___x_666_, 0);
lean_inc(v_a_667_);
lean_dec_ref_known(v___x_666_, 1);
v___x_668_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__10, &l_Lean_Meta_Grind_propagateNotUp___closed__10_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__10);
v___x_669_ = l_Lean_mkAppB(v___x_668_, v_arg_606_, v_a_667_);
v___x_670_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_586_, v___x_669_, v_a_587_, v_a_589_, v_a_591_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
return v___x_670_;
}
else
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
lean_dec_ref(v_arg_606_);
lean_dec_ref(v_e_586_);
v_a_671_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v___x_666_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_666_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_671_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
}
else
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_686_; 
lean_dec_ref(v_arg_606_);
lean_dec_ref(v_e_586_);
v_a_679_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_686_ == 0)
{
v___x_681_ = v___x_607_;
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v___x_607_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_684_; 
if (v_isShared_682_ == 0)
{
v___x_684_ = v___x_681_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_a_679_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
}
}
v___jp_598_:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = lean_box(0);
v___x_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_600_, 0, v___x_599_);
return v___x_600_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotUp___boxed(lean_object* v_e_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lean_Meta_Grind_propagateNotUp(v_e_687_, v_a_688_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_, v_a_696_, v_a_697_);
lean_dec(v_a_697_);
lean_dec_ref(v_a_696_);
lean_dec(v_a_695_);
lean_dec_ref(v_a_694_);
lean_dec(v_a_693_);
lean_dec_ref(v_a_692_);
lean_dec(v_a_691_);
lean_dec_ref(v_a_690_);
lean_dec(v_a_689_);
lean_dec(v_a_688_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotUp___regBuiltin_Lean_Meta_Grind_propagateNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4175663102____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_701_ = ((lean_object*)(l_Lean_Meta_Grind_propagateNotUp___closed__1));
v___x_702_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateNotUp___boxed), 12, 0);
v___x_703_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_701_, v___x_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotUp___regBuiltin_Lean_Meta_Grind_propagateNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4175663102____hygCtx___hyg_9____boxed(lean_object* v_a_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotUp___regBuiltin_Lean_Meta_Grind_propagateNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4175663102____hygCtx___hyg_9_();
return v_res_705_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotDown___closed__2(void){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_711_ = lean_box(0);
v___x_712_ = ((lean_object*)(l_Lean_Meta_Grind_propagateNotDown___closed__1));
v___x_713_ = l_Lean_mkConst(v___x_712_, v___x_711_);
return v___x_713_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotDown___closed__5(void){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_719_ = lean_box(0);
v___x_720_ = ((lean_object*)(l_Lean_Meta_Grind_propagateNotDown___closed__4));
v___x_721_ = l_Lean_mkConst(v___x_720_, v___x_719_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotDown(lean_object* v_e_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_){
_start:
{
lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_737_ = l_Lean_Expr_cleanupAnnotations(v_e_722_);
v___x_738_ = l_Lean_Expr_isApp(v___x_737_);
if (v___x_738_ == 0)
{
lean_dec_ref(v___x_737_);
lean_dec_ref(v_e_722_);
goto v___jp_734_;
}
else
{
lean_object* v___x_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v___x_739_ = l_Lean_Expr_appFnCleanup___redArg(v___x_737_);
v___x_740_ = ((lean_object*)(l_Lean_Meta_Grind_propagateNotUp___closed__1));
v___x_741_ = l_Lean_Expr_isConstOf(v___x_739_, v___x_740_);
lean_dec_ref(v___x_739_);
if (v___x_741_ == 0)
{
lean_dec_ref(v___x_737_);
lean_dec_ref(v_e_722_);
goto v___jp_734_;
}
else
{
lean_object* v_arg_742_; lean_object* v___x_743_; 
v_arg_742_ = lean_ctor_get(v___x_737_, 1);
lean_inc_ref(v_arg_742_);
lean_dec_ref(v___x_737_);
lean_inc_ref(v_e_722_);
v___x_743_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_722_, v_a_723_, v_a_727_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; uint8_t v___x_745_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_744_);
lean_dec_ref_known(v___x_743_, 1);
v___x_745_ = lean_unbox(v_a_744_);
lean_dec(v_a_744_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; 
lean_inc_ref(v_e_722_);
v___x_746_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_722_, v_a_723_, v_a_727_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; uint8_t v___x_748_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_747_);
lean_dec_ref_known(v___x_746_, 1);
v___x_748_ = lean_unbox(v_a_747_);
lean_dec(v_a_747_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; 
v___x_749_ = l_Lean_Meta_Grind_isEqv___redArg(v_e_722_, v_arg_742_, v_a_723_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_772_; 
v_a_750_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_772_ == 0)
{
v___x_752_ = v___x_749_;
v_isShared_753_ = v_isSharedCheck_772_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_749_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_772_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
uint8_t v___x_754_; 
v___x_754_ = lean_unbox(v_a_750_);
lean_dec(v_a_750_);
if (v___x_754_ == 0)
{
lean_object* v___x_755_; lean_object* v___x_757_; 
lean_dec_ref(v_arg_742_);
lean_dec_ref(v_e_722_);
v___x_755_ = lean_box(0);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v___x_755_);
v___x_757_ = v___x_752_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v___x_755_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
else
{
lean_object* v___x_759_; 
lean_del_object(v___x_752_);
lean_inc(v_a_732_);
lean_inc_ref(v_a_731_);
lean_inc(v_a_730_);
lean_inc_ref(v_a_729_);
lean_inc(v_a_728_);
lean_inc_ref(v_a_727_);
lean_inc(v_a_726_);
lean_inc_ref(v_a_725_);
lean_inc(v_a_724_);
lean_inc(v_a_723_);
lean_inc_ref(v_arg_742_);
v___x_759_ = lean_grind_mk_eq_proof(v_e_722_, v_arg_742_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v_a_760_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_a_760_);
lean_dec_ref_known(v___x_759_, 1);
v___x_761_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__4, &l_Lean_Meta_Grind_propagateNotUp___closed__4_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__4);
v___x_762_ = l_Lean_mkAppB(v___x_761_, v_arg_742_, v_a_760_);
v___x_763_ = l_Lean_Meta_Grind_closeGoal(v___x_762_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
return v___x_763_;
}
else
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_771_; 
lean_dec_ref(v_arg_742_);
v_a_764_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_771_ == 0)
{
v___x_766_ = v___x_759_;
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_759_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_764_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
}
}
}
else
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_780_; 
lean_dec_ref(v_arg_742_);
lean_dec_ref(v_e_722_);
v_a_773_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_780_ == 0)
{
v___x_775_ = v___x_749_;
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v___x_749_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_778_; 
if (v_isShared_776_ == 0)
{
v___x_778_ = v___x_775_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_a_773_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
}
else
{
lean_object* v___x_781_; 
v___x_781_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
if (lean_obj_tag(v___x_781_) == 0)
{
lean_object* v_a_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v_a_782_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_a_782_);
lean_dec_ref_known(v___x_781_, 1);
v___x_783_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotDown___closed__2, &l_Lean_Meta_Grind_propagateNotDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateNotDown___closed__2);
lean_inc_ref(v_arg_742_);
v___x_784_ = l_Lean_mkAppB(v___x_783_, v_arg_742_, v_a_782_);
v___x_785_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_arg_742_, v___x_784_, v_a_723_, v_a_725_, v_a_727_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
return v___x_785_;
}
else
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_793_; 
lean_dec_ref(v_arg_742_);
v_a_786_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_793_ == 0)
{
v___x_788_ = v___x_781_;
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v___x_781_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_786_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
lean_dec_ref(v_arg_742_);
lean_dec_ref(v_e_722_);
v_a_794_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_746_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_746_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_794_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
else
{
lean_object* v___x_802_; 
v___x_802_ = l_Lean_Meta_Grind_mkEqFalseProof(v_e_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v_a_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v_a_803_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_a_803_);
lean_dec_ref_known(v___x_802_, 1);
v___x_804_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotDown___closed__5, &l_Lean_Meta_Grind_propagateNotDown___closed__5_once, _init_l_Lean_Meta_Grind_propagateNotDown___closed__5);
lean_inc_ref(v_arg_742_);
v___x_805_ = l_Lean_mkAppB(v___x_804_, v_arg_742_, v_a_803_);
v___x_806_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_arg_742_, v___x_805_, v_a_723_, v_a_725_, v_a_727_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
return v___x_806_;
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec_ref(v_arg_742_);
v_a_807_ = lean_ctor_get(v___x_802_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_802_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_802_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
}
else
{
lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
lean_dec_ref(v_arg_742_);
lean_dec_ref(v_e_722_);
v_a_815_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_822_ == 0)
{
v___x_817_ = v___x_743_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_dec(v___x_743_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_a_815_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
}
}
v___jp_734_:
{
lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_735_ = lean_box(0);
v___x_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_736_, 0, v___x_735_);
return v___x_736_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotDown___boxed(lean_object* v_e_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Lean_Meta_Grind_propagateNotDown(v_e_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_, v_a_831_, v_a_832_, v_a_833_);
lean_dec(v_a_833_);
lean_dec_ref(v_a_832_);
lean_dec(v_a_831_);
lean_dec_ref(v_a_830_);
lean_dec(v_a_829_);
lean_dec_ref(v_a_828_);
lean_dec(v_a_827_);
lean_dec_ref(v_a_826_);
lean_dec(v_a_825_);
lean_dec(v_a_824_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotDown___regBuiltin_Lean_Meta_Grind_propagateNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3610191934____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_837_ = ((lean_object*)(l_Lean_Meta_Grind_propagateNotUp___closed__1));
v___x_838_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateNotDown___boxed), 12, 0);
v___x_839_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_837_, v___x_838_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotDown___regBuiltin_Lean_Meta_Grind_propagateNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3610191934____hygCtx___hyg_9____boxed(lean_object* v_a_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotDown___regBuiltin_Lean_Meta_Grind_propagateNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3610191934____hygCtx___hyg_9_();
return v_res_841_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__3(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_849_ = lean_box(0);
v___x_850_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolDiseq___closed__2));
v___x_851_ = l_Lean_mkConst(v___x_850_, v___x_849_);
return v___x_851_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__6(void){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_858_ = lean_box(0);
v___x_859_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolDiseq___closed__5));
v___x_860_ = l_Lean_mkConst(v___x_859_, v___x_858_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolDiseq(lean_object* v_eq_861_, lean_object* v_a_862_, lean_object* v_b_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_){
_start:
{
lean_object* v___x_875_; 
v___x_875_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_868_);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v_a_876_; lean_object* v___x_877_; 
v_a_876_ = lean_ctor_get(v___x_875_, 0);
lean_inc(v_a_876_);
lean_dec_ref_known(v___x_875_, 1);
v___x_877_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_868_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_879_; 
v_a_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_878_);
lean_dec_ref_known(v___x_877_, 1);
v___x_879_ = l_Lean_Meta_Grind_isEqv___redArg(v_b_863_, v_a_878_, v_a_864_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; uint8_t v___x_881_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_a_880_);
lean_dec_ref_known(v___x_879_, 1);
v___x_881_ = lean_unbox(v_a_880_);
lean_dec(v_a_880_);
if (v___x_881_ == 0)
{
lean_object* v___x_882_; 
v___x_882_ = l_Lean_Meta_Grind_isEqv___redArg(v_b_863_, v_a_876_, v_a_864_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v_a_883_; uint8_t v___x_884_; 
v_a_883_ = lean_ctor_get(v___x_882_, 0);
lean_inc(v_a_883_);
lean_dec_ref_known(v___x_882_, 1);
v___x_884_ = lean_unbox(v_a_883_);
lean_dec(v_a_883_);
if (v___x_884_ == 0)
{
lean_object* v___x_885_; 
v___x_885_ = l_Lean_Meta_Grind_isEqv___redArg(v_a_862_, v_a_878_, v_a_864_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; uint8_t v___x_887_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
v___x_887_ = lean_unbox(v_a_886_);
lean_dec(v_a_886_);
if (v___x_887_ == 0)
{
lean_object* v___x_888_; 
lean_dec(v_a_878_);
v___x_888_ = l_Lean_Meta_Grind_isEqv___redArg(v_a_862_, v_a_876_, v_a_864_);
lean_dec_ref(v_a_862_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_911_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_911_ == 0)
{
v___x_891_ = v___x_888_;
v_isShared_892_ = v_isSharedCheck_911_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_dec(v___x_888_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_911_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
uint8_t v___x_893_; 
v___x_893_ = lean_unbox(v_a_889_);
lean_dec(v_a_889_);
if (v___x_893_ == 0)
{
lean_object* v___x_894_; lean_object* v___x_896_; 
lean_dec(v_a_876_);
lean_dec_ref(v_b_863_);
lean_dec_ref(v_eq_861_);
v___x_894_ = lean_box(0);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_894_);
v___x_896_ = v___x_891_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v___x_894_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
else
{
lean_object* v___x_898_; 
lean_del_object(v___x_891_);
lean_inc_ref(v_b_863_);
v___x_898_ = l_Lean_Meta_Grind_mkDiseqProofUsing(v_b_863_, v_a_876_, v_eq_861_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
lean_dec_ref_known(v___x_898_, 1);
v___x_900_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__3, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__3);
lean_inc_ref(v_b_863_);
v___x_901_ = l_Lean_mkAppB(v___x_900_, v_b_863_, v_a_899_);
v___x_902_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_b_863_, v___x_901_, v_a_864_, v_a_866_, v_a_868_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
return v___x_902_;
}
else
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec_ref(v_b_863_);
v_a_903_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_898_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_898_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
}
}
else
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
lean_dec(v_a_876_);
lean_dec_ref(v_b_863_);
lean_dec_ref(v_eq_861_);
v_a_912_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_919_ == 0)
{
v___x_914_ = v___x_888_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_888_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_917_; 
if (v_isShared_915_ == 0)
{
v___x_917_ = v___x_914_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_912_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
}
else
{
lean_object* v___x_920_; 
lean_dec(v_a_876_);
lean_dec_ref(v_a_862_);
lean_inc_ref(v_b_863_);
v___x_920_ = l_Lean_Meta_Grind_mkDiseqProofUsing(v_b_863_, v_a_878_, v_eq_861_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v_a_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v_a_921_ = lean_ctor_get(v___x_920_, 0);
lean_inc(v_a_921_);
lean_dec_ref_known(v___x_920_, 1);
v___x_922_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__6, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__6_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__6);
lean_inc_ref(v_b_863_);
v___x_923_ = l_Lean_mkAppB(v___x_922_, v_b_863_, v_a_921_);
v___x_924_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_b_863_, v___x_923_, v_a_864_, v_a_866_, v_a_868_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
return v___x_924_;
}
else
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
lean_dec_ref(v_b_863_);
v_a_925_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_920_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_920_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_925_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
}
}
else
{
lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_940_; 
lean_dec(v_a_878_);
lean_dec(v_a_876_);
lean_dec_ref(v_b_863_);
lean_dec_ref(v_a_862_);
lean_dec_ref(v_eq_861_);
v_a_933_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_940_ == 0)
{
v___x_935_ = v___x_885_;
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_dec(v___x_885_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_938_; 
if (v_isShared_936_ == 0)
{
v___x_938_ = v___x_935_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_a_933_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
return v___x_938_;
}
}
}
}
else
{
lean_object* v___x_941_; 
lean_dec(v_a_878_);
lean_dec_ref(v_b_863_);
lean_inc_ref(v_a_862_);
v___x_941_ = l_Lean_Meta_Grind_mkDiseqProofUsing(v_a_862_, v_a_876_, v_eq_861_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v_a_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v_a_942_ = lean_ctor_get(v___x_941_, 0);
lean_inc(v_a_942_);
lean_dec_ref_known(v___x_941_, 1);
v___x_943_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__3, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__3);
lean_inc_ref(v_a_862_);
v___x_944_ = l_Lean_mkAppB(v___x_943_, v_a_862_, v_a_942_);
v___x_945_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_a_862_, v___x_944_, v_a_864_, v_a_866_, v_a_868_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
return v___x_945_;
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec_ref(v_a_862_);
v_a_946_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_941_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_941_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
lean_dec(v_a_878_);
lean_dec(v_a_876_);
lean_dec_ref(v_b_863_);
lean_dec_ref(v_a_862_);
lean_dec_ref(v_eq_861_);
v_a_954_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_882_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_882_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
else
{
lean_object* v___x_962_; 
lean_dec(v_a_876_);
lean_dec_ref(v_b_863_);
lean_inc_ref(v_a_862_);
v___x_962_ = l_Lean_Meta_Grind_mkDiseqProofUsing(v_a_862_, v_a_878_, v_eq_861_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v_a_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v_a_963_ = lean_ctor_get(v___x_962_, 0);
lean_inc(v_a_963_);
lean_dec_ref_known(v___x_962_, 1);
v___x_964_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__6, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__6_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__6);
lean_inc_ref(v_a_862_);
v___x_965_ = l_Lean_mkAppB(v___x_964_, v_a_862_, v_a_963_);
v___x_966_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_a_862_, v___x_965_, v_a_864_, v_a_866_, v_a_868_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
return v___x_966_;
}
else
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
lean_dec_ref(v_a_862_);
v_a_967_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_962_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_962_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
}
}
else
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_982_; 
lean_dec(v_a_878_);
lean_dec(v_a_876_);
lean_dec_ref(v_b_863_);
lean_dec_ref(v_a_862_);
lean_dec_ref(v_eq_861_);
v_a_975_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_982_ == 0)
{
v___x_977_ = v___x_879_;
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_879_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_980_; 
if (v_isShared_978_ == 0)
{
v___x_980_ = v___x_977_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_975_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec(v_a_876_);
lean_dec_ref(v_b_863_);
lean_dec_ref(v_a_862_);
lean_dec_ref(v_eq_861_);
v_a_983_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_877_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_877_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
else
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
lean_dec_ref(v_b_863_);
lean_dec_ref(v_a_862_);
lean_dec_ref(v_eq_861_);
v_a_991_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_875_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_875_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_991_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___boxed(lean_object* v_eq_999_, lean_object* v_a_1000_, lean_object* v_b_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_Lean_Meta_Grind_propagateBoolDiseq(v_eq_999_, v_a_1000_, v_b_1001_, v_a_1002_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_, v_a_1009_, v_a_1010_, v_a_1011_);
lean_dec(v_a_1011_);
lean_dec_ref(v_a_1010_);
lean_dec(v_a_1009_);
lean_dec_ref(v_a_1008_);
lean_dec(v_a_1007_);
lean_dec_ref(v_a_1006_);
lean_dec(v_a_1005_);
lean_dec_ref(v_a_1004_);
lean_dec(v_a_1003_);
lean_dec(v_a_1002_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp___lam__0(uint8_t v_a_1014_, uint8_t v_ctor_1015_, lean_object* v_self_1016_, lean_object* v_arg_1017_, lean_object* v_arg_1018_, lean_object* v_self_1019_, lean_object* v_hab_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v_hf_1033_; lean_object* v___y_1034_; lean_object* v___y_1035_; lean_object* v___y_1036_; lean_object* v___y_1037_; lean_object* v___y_1038_; lean_object* v___x_1061_; 
lean_inc_ref(v_self_1016_);
lean_inc_ref(v_arg_1017_);
v___x_1061_ = l_Lean_Meta_Grind_hasSameType(v_arg_1017_, v_self_1016_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_object* v_a_1062_; lean_object* v___x_1063_; 
v_a_1062_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_a_1062_);
lean_dec_ref_known(v___x_1061_, 1);
lean_inc_ref(v_self_1019_);
lean_inc_ref(v_arg_1018_);
v___x_1063_ = l_Lean_Meta_Grind_hasSameType(v_arg_1018_, v_self_1019_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1063_) == 0)
{
uint8_t v___x_1064_; 
v___x_1064_ = lean_unbox(v_a_1062_);
lean_dec(v_a_1062_);
if (v___x_1064_ == 1)
{
lean_object* v_a_1065_; uint8_t v___x_1066_; 
v_a_1065_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_a_1065_);
lean_dec_ref_known(v___x_1063_, 1);
v___x_1066_ = lean_unbox(v_a_1065_);
lean_dec(v_a_1065_);
if (v___x_1066_ == 1)
{
lean_object* v___x_1067_; 
lean_inc(v___y_1030_);
lean_inc_ref(v___y_1029_);
lean_inc(v___y_1028_);
lean_inc_ref(v___y_1027_);
lean_inc(v___y_1026_);
lean_inc_ref(v___y_1025_);
lean_inc(v___y_1024_);
lean_inc_ref(v___y_1023_);
lean_inc(v___y_1022_);
lean_inc(v___y_1021_);
v___x_1067_ = lean_grind_mk_eq_proof(v_self_1016_, v_arg_1017_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; lean_object* v___x_1069_; 
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1068_);
lean_dec_ref_known(v___x_1067_, 1);
lean_inc_ref(v_hab_1020_);
v___x_1069_ = l_Lean_Meta_mkEqTrans(v_a_1068_, v_hab_1020_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1069_) == 0)
{
lean_object* v_a_1070_; lean_object* v___x_1071_; 
v_a_1070_ = lean_ctor_get(v___x_1069_, 0);
lean_inc(v_a_1070_);
lean_dec_ref_known(v___x_1069_, 1);
lean_inc(v___y_1030_);
lean_inc_ref(v___y_1029_);
lean_inc(v___y_1028_);
lean_inc_ref(v___y_1027_);
lean_inc(v___y_1026_);
lean_inc_ref(v___y_1025_);
lean_inc(v___y_1024_);
lean_inc_ref(v___y_1023_);
lean_inc(v___y_1022_);
lean_inc(v___y_1021_);
v___x_1071_ = lean_grind_mk_eq_proof(v_arg_1018_, v_self_1019_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v_a_1072_; lean_object* v___x_1073_; 
v_a_1072_ = lean_ctor_get(v___x_1071_, 0);
lean_inc(v_a_1072_);
lean_dec_ref_known(v___x_1071_, 1);
v___x_1073_ = l_Lean_Meta_mkEqTrans(v_a_1070_, v_a_1072_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1074_; 
v_a_1074_ = lean_ctor_get(v___x_1073_, 0);
lean_inc(v_a_1074_);
lean_dec_ref_known(v___x_1073_, 1);
v_hf_1033_ = v_a_1074_;
v___y_1034_ = v___y_1025_;
v___y_1035_ = v___y_1027_;
v___y_1036_ = v___y_1028_;
v___y_1037_ = v___y_1029_;
v___y_1038_ = v___y_1030_;
goto v___jp_1032_;
}
else
{
lean_dec_ref(v_hab_1020_);
return v___x_1073_;
}
}
else
{
lean_dec(v_a_1070_);
lean_dec_ref(v_hab_1020_);
return v___x_1071_;
}
}
else
{
lean_dec_ref(v_hab_1020_);
lean_dec_ref(v_self_1019_);
lean_dec_ref(v_arg_1018_);
return v___x_1069_;
}
}
else
{
lean_dec_ref(v_hab_1020_);
lean_dec_ref(v_self_1019_);
lean_dec_ref(v_arg_1018_);
return v___x_1067_;
}
}
else
{
goto v___jp_1048_;
}
}
else
{
lean_dec_ref_known(v___x_1063_, 1);
goto v___jp_1048_;
}
}
else
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1082_; 
lean_dec(v_a_1062_);
lean_dec_ref(v_hab_1020_);
lean_dec_ref(v_self_1019_);
lean_dec_ref(v_arg_1018_);
lean_dec_ref(v_arg_1017_);
lean_dec_ref(v_self_1016_);
v_a_1075_ = lean_ctor_get(v___x_1063_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_1063_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1077_ = v___x_1063_;
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v___x_1063_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1080_; 
if (v_isShared_1078_ == 0)
{
v___x_1080_ = v___x_1077_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_a_1075_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
}
}
else
{
lean_object* v_a_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1090_; 
lean_dec_ref(v_hab_1020_);
lean_dec_ref(v_self_1019_);
lean_dec_ref(v_arg_1018_);
lean_dec_ref(v_arg_1017_);
lean_dec_ref(v_self_1016_);
v_a_1083_ = lean_ctor_get(v___x_1061_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1085_ = v___x_1061_;
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_a_1083_);
lean_dec(v___x_1061_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1088_; 
if (v_isShared_1086_ == 0)
{
v___x_1088_ = v___x_1085_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v_a_1083_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
v___jp_1032_:
{
lean_object* v___x_1039_; 
v___x_1039_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v___y_1034_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; lean_object* v___x_1041_; 
v_a_1040_ = lean_ctor_get(v___x_1039_, 0);
lean_inc(v_a_1040_);
lean_dec_ref_known(v___x_1039_, 1);
v___x_1041_ = l_Lean_Meta_mkNoConfusion(v_a_1040_, v_hf_1033_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_object* v_a_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; uint8_t v___x_1046_; lean_object* v___x_1047_; 
v_a_1042_ = lean_ctor_get(v___x_1041_, 0);
lean_inc(v_a_1042_);
lean_dec_ref_known(v___x_1041_, 1);
v___x_1043_ = lean_unsigned_to_nat(1u);
v___x_1044_ = lean_mk_empty_array_with_capacity(v___x_1043_);
v___x_1045_ = lean_array_push(v___x_1044_, v_hab_1020_);
v___x_1046_ = 1;
v___x_1047_ = l_Lean_Meta_mkLambdaFVars(v___x_1045_, v_a_1042_, v_a_1014_, v_ctor_1015_, v_a_1014_, v_ctor_1015_, v___x_1046_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_);
lean_dec_ref(v___x_1045_);
return v___x_1047_;
}
else
{
lean_dec_ref(v_hab_1020_);
return v___x_1041_;
}
}
else
{
lean_dec_ref(v_hf_1033_);
lean_dec_ref(v_hab_1020_);
return v___x_1039_;
}
}
v___jp_1048_:
{
lean_object* v___x_1049_; 
lean_inc(v___y_1030_);
lean_inc_ref(v___y_1029_);
lean_inc(v___y_1028_);
lean_inc_ref(v___y_1027_);
lean_inc(v___y_1026_);
lean_inc_ref(v___y_1025_);
lean_inc(v___y_1024_);
lean_inc_ref(v___y_1023_);
lean_inc(v___y_1022_);
lean_inc(v___y_1021_);
v___x_1049_ = lean_grind_mk_heq_proof(v_self_1016_, v_arg_1017_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; lean_object* v___x_1051_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
lean_inc(v_a_1050_);
lean_dec_ref_known(v___x_1049_, 1);
lean_inc_ref(v_hab_1020_);
v___x_1051_ = l_Lean_Meta_mkHEqOfEq(v_hab_1020_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1053_; 
v_a_1052_ = lean_ctor_get(v___x_1051_, 0);
lean_inc(v_a_1052_);
lean_dec_ref_known(v___x_1051_, 1);
v___x_1053_ = l_Lean_Meta_mkHEqTrans(v_a_1050_, v_a_1052_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_object* v_a_1054_; lean_object* v___x_1055_; 
v_a_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_a_1054_);
lean_dec_ref_known(v___x_1053_, 1);
lean_inc(v___y_1030_);
lean_inc_ref(v___y_1029_);
lean_inc(v___y_1028_);
lean_inc_ref(v___y_1027_);
lean_inc(v___y_1026_);
lean_inc_ref(v___y_1025_);
lean_inc(v___y_1024_);
lean_inc_ref(v___y_1023_);
lean_inc(v___y_1022_);
lean_inc(v___y_1021_);
v___x_1055_ = lean_grind_mk_heq_proof(v_arg_1018_, v_self_1019_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1055_) == 0)
{
lean_object* v_a_1056_; lean_object* v___x_1057_; 
v_a_1056_ = lean_ctor_get(v___x_1055_, 0);
lean_inc(v_a_1056_);
lean_dec_ref_known(v___x_1055_, 1);
v___x_1057_ = l_Lean_Meta_mkHEqTrans(v_a_1054_, v_a_1056_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v_a_1058_; lean_object* v___x_1059_; 
v_a_1058_ = lean_ctor_get(v___x_1057_, 0);
lean_inc(v_a_1058_);
lean_dec_ref_known(v___x_1057_, 1);
v___x_1059_ = l_Lean_Meta_mkEqOfHEq(v_a_1058_, v_ctor_1015_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1059_) == 0)
{
lean_object* v_a_1060_; 
v_a_1060_ = lean_ctor_get(v___x_1059_, 0);
lean_inc(v_a_1060_);
lean_dec_ref_known(v___x_1059_, 1);
v_hf_1033_ = v_a_1060_;
v___y_1034_ = v___y_1025_;
v___y_1035_ = v___y_1027_;
v___y_1036_ = v___y_1028_;
v___y_1037_ = v___y_1029_;
v___y_1038_ = v___y_1030_;
goto v___jp_1032_;
}
else
{
lean_dec_ref(v_hab_1020_);
return v___x_1059_;
}
}
else
{
lean_dec_ref(v_hab_1020_);
return v___x_1057_;
}
}
else
{
lean_dec(v_a_1054_);
lean_dec_ref(v_hab_1020_);
return v___x_1055_;
}
}
else
{
lean_dec_ref(v_hab_1020_);
lean_dec_ref(v_self_1019_);
lean_dec_ref(v_arg_1018_);
return v___x_1053_;
}
}
else
{
lean_dec(v_a_1050_);
lean_dec_ref(v_hab_1020_);
lean_dec_ref(v_self_1019_);
lean_dec_ref(v_arg_1018_);
return v___x_1051_;
}
}
else
{
lean_dec_ref(v_hab_1020_);
lean_dec_ref(v_self_1019_);
lean_dec_ref(v_arg_1018_);
return v___x_1049_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp___lam__0___boxed(lean_object** _args){
lean_object* v_a_1091_ = _args[0];
lean_object* v_ctor_1092_ = _args[1];
lean_object* v_self_1093_ = _args[2];
lean_object* v_arg_1094_ = _args[3];
lean_object* v_arg_1095_ = _args[4];
lean_object* v_self_1096_ = _args[5];
lean_object* v_hab_1097_ = _args[6];
lean_object* v___y_1098_ = _args[7];
lean_object* v___y_1099_ = _args[8];
lean_object* v___y_1100_ = _args[9];
lean_object* v___y_1101_ = _args[10];
lean_object* v___y_1102_ = _args[11];
lean_object* v___y_1103_ = _args[12];
lean_object* v___y_1104_ = _args[13];
lean_object* v___y_1105_ = _args[14];
lean_object* v___y_1106_ = _args[15];
lean_object* v___y_1107_ = _args[16];
lean_object* v___y_1108_ = _args[17];
_start:
{
uint8_t v_a_127594__boxed_1109_; uint8_t v_ctor_boxed_1110_; lean_object* v_res_1111_; 
v_a_127594__boxed_1109_ = lean_unbox(v_a_1091_);
v_ctor_boxed_1110_ = lean_unbox(v_ctor_1092_);
v_res_1111_ = l_Lean_Meta_Grind_propagateEqUp___lam__0(v_a_127594__boxed_1109_, v_ctor_boxed_1110_, v_self_1093_, v_arg_1094_, v_arg_1095_, v_self_1096_, v_hab_1097_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
lean_dec(v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec(v___y_1101_);
lean_dec_ref(v___y_1100_);
lean_dec(v___y_1099_);
lean_dec(v___y_1098_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___lam__0(lean_object* v_k_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v_b_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_){
_start:
{
lean_object* v___x_1125_; 
lean_inc(v___y_1123_);
lean_inc_ref(v___y_1122_);
lean_inc(v___y_1121_);
lean_inc_ref(v___y_1120_);
lean_inc(v___y_1118_);
lean_inc_ref(v___y_1117_);
lean_inc(v___y_1116_);
lean_inc_ref(v___y_1115_);
lean_inc(v___y_1114_);
lean_inc(v___y_1113_);
v___x_1125_ = lean_apply_12(v_k_1112_, v_b_1119_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, lean_box(0));
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v_b_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___lam__0(v_k_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v_b_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec_ref(v___y_1134_);
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1131_);
lean_dec(v___y_1130_);
lean_dec_ref(v___y_1129_);
lean_dec(v___y_1128_);
lean_dec(v___y_1127_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg(lean_object* v_name_1140_, uint8_t v_bi_1141_, lean_object* v_type_1142_, lean_object* v_k_1143_, uint8_t v_kind_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v___f_1156_; lean_object* v___x_1157_; 
lean_inc(v___y_1150_);
lean_inc_ref(v___y_1149_);
lean_inc(v___y_1148_);
lean_inc_ref(v___y_1147_);
lean_inc(v___y_1146_);
lean_inc(v___y_1145_);
v___f_1156_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___lam__0___boxed), 13, 7);
lean_closure_set(v___f_1156_, 0, v_k_1143_);
lean_closure_set(v___f_1156_, 1, v___y_1145_);
lean_closure_set(v___f_1156_, 2, v___y_1146_);
lean_closure_set(v___f_1156_, 3, v___y_1147_);
lean_closure_set(v___f_1156_, 4, v___y_1148_);
lean_closure_set(v___f_1156_, 5, v___y_1149_);
lean_closure_set(v___f_1156_, 6, v___y_1150_);
v___x_1157_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1140_, v_bi_1141_, v_type_1142_, v___f_1156_, v_kind_1144_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_);
if (lean_obj_tag(v___x_1157_) == 0)
{
return v___x_1157_;
}
else
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v___x_1157_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1157_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___boxed(lean_object* v_name_1166_, lean_object* v_bi_1167_, lean_object* v_type_1168_, lean_object* v_k_1169_, lean_object* v_kind_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
uint8_t v_bi_boxed_1182_; uint8_t v_kind_boxed_1183_; lean_object* v_res_1184_; 
v_bi_boxed_1182_ = lean_unbox(v_bi_1167_);
v_kind_boxed_1183_ = lean_unbox(v_kind_1170_);
v_res_1184_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg(v_name_1166_, v_bi_boxed_1182_, v_type_1168_, v_k_1169_, v_kind_boxed_1183_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_);
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec(v___y_1172_);
lean_dec(v___y_1171_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg(lean_object* v_name_1185_, lean_object* v_type_1186_, lean_object* v_k_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
uint8_t v___x_1199_; uint8_t v___x_1200_; lean_object* v___x_1201_; 
v___x_1199_ = 0;
v___x_1200_ = 0;
v___x_1201_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg(v_name_1185_, v___x_1199_, v_type_1186_, v_k_1187_, v___x_1200_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg___boxed(lean_object* v_name_1202_, lean_object* v_type_1203_, lean_object* v_k_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg(v_name_1202_, v_type_1203_, v_k_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_);
lean_dec(v___y_1214_);
lean_dec_ref(v___y_1213_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
lean_dec(v___y_1210_);
lean_dec_ref(v___y_1209_);
lean_dec(v___y_1208_);
lean_dec_ref(v___y_1207_);
lean_dec(v___y_1206_);
lean_dec(v___y_1205_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___redArg___lam__0(uint8_t v_a_1217_, uint8_t v___y_1218_, lean_object* v_self_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_self_1222_, lean_object* v_hab_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
lean_object* v_hf_1236_; lean_object* v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1240_; lean_object* v___y_1241_; lean_object* v___x_1264_; 
lean_inc_ref(v_self_1219_);
lean_inc_ref(v_a_1220_);
v___x_1264_ = l_Lean_Meta_Grind_hasSameType(v_a_1220_, v_self_1219_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1265_; lean_object* v___x_1266_; 
v_a_1265_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_a_1265_);
lean_dec_ref_known(v___x_1264_, 1);
lean_inc_ref(v_self_1222_);
lean_inc_ref(v_a_1221_);
v___x_1266_ = l_Lean_Meta_Grind_hasSameType(v_a_1221_, v_self_1222_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1266_) == 0)
{
uint8_t v___x_1267_; 
v___x_1267_ = lean_unbox(v_a_1265_);
lean_dec(v_a_1265_);
if (v___x_1267_ == 1)
{
lean_object* v_a_1268_; uint8_t v___x_1269_; 
v_a_1268_ = lean_ctor_get(v___x_1266_, 0);
lean_inc(v_a_1268_);
lean_dec_ref_known(v___x_1266_, 1);
v___x_1269_ = lean_unbox(v_a_1268_);
lean_dec(v_a_1268_);
if (v___x_1269_ == 1)
{
lean_object* v___x_1270_; 
lean_inc(v___y_1233_);
lean_inc_ref(v___y_1232_);
lean_inc(v___y_1231_);
lean_inc_ref(v___y_1230_);
lean_inc(v___y_1229_);
lean_inc_ref(v___y_1228_);
lean_inc(v___y_1227_);
lean_inc_ref(v___y_1226_);
lean_inc(v___y_1225_);
lean_inc(v___y_1224_);
v___x_1270_ = lean_grind_mk_eq_proof(v_self_1219_, v_a_1220_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1270_) == 0)
{
lean_object* v_a_1271_; lean_object* v___x_1272_; 
v_a_1271_ = lean_ctor_get(v___x_1270_, 0);
lean_inc(v_a_1271_);
lean_dec_ref_known(v___x_1270_, 1);
lean_inc_ref(v_hab_1223_);
v___x_1272_ = l_Lean_Meta_mkEqTrans(v_a_1271_, v_hab_1223_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; lean_object* v___x_1274_; 
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
lean_inc(v_a_1273_);
lean_dec_ref_known(v___x_1272_, 1);
lean_inc(v___y_1233_);
lean_inc_ref(v___y_1232_);
lean_inc(v___y_1231_);
lean_inc_ref(v___y_1230_);
lean_inc(v___y_1229_);
lean_inc_ref(v___y_1228_);
lean_inc(v___y_1227_);
lean_inc_ref(v___y_1226_);
lean_inc(v___y_1225_);
lean_inc(v___y_1224_);
v___x_1274_ = lean_grind_mk_eq_proof(v_a_1221_, v_self_1222_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1274_) == 0)
{
lean_object* v_a_1275_; lean_object* v___x_1276_; 
v_a_1275_ = lean_ctor_get(v___x_1274_, 0);
lean_inc(v_a_1275_);
lean_dec_ref_known(v___x_1274_, 1);
v___x_1276_ = l_Lean_Meta_mkEqTrans(v_a_1273_, v_a_1275_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1276_) == 0)
{
lean_object* v_a_1277_; 
v_a_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_a_1277_);
lean_dec_ref_known(v___x_1276_, 1);
v_hf_1236_ = v_a_1277_;
v___y_1237_ = v___y_1228_;
v___y_1238_ = v___y_1230_;
v___y_1239_ = v___y_1231_;
v___y_1240_ = v___y_1232_;
v___y_1241_ = v___y_1233_;
goto v___jp_1235_;
}
else
{
lean_dec_ref(v_hab_1223_);
return v___x_1276_;
}
}
else
{
lean_dec(v_a_1273_);
lean_dec_ref(v_hab_1223_);
return v___x_1274_;
}
}
else
{
lean_dec_ref(v_hab_1223_);
lean_dec_ref(v_self_1222_);
lean_dec_ref(v_a_1221_);
return v___x_1272_;
}
}
else
{
lean_dec_ref(v_hab_1223_);
lean_dec_ref(v_self_1222_);
lean_dec_ref(v_a_1221_);
return v___x_1270_;
}
}
else
{
goto v___jp_1251_;
}
}
else
{
lean_dec_ref_known(v___x_1266_, 1);
goto v___jp_1251_;
}
}
else
{
lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
lean_dec(v_a_1265_);
lean_dec_ref(v_hab_1223_);
lean_dec_ref(v_self_1222_);
lean_dec_ref(v_a_1221_);
lean_dec_ref(v_a_1220_);
lean_dec_ref(v_self_1219_);
v_a_1278_ = lean_ctor_get(v___x_1266_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1266_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1266_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1266_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1283_; 
if (v_isShared_1281_ == 0)
{
v___x_1283_ = v___x_1280_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1278_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
}
else
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1293_; 
lean_dec_ref(v_hab_1223_);
lean_dec_ref(v_self_1222_);
lean_dec_ref(v_a_1221_);
lean_dec_ref(v_a_1220_);
lean_dec_ref(v_self_1219_);
v_a_1286_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1288_ = v___x_1264_;
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1264_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1291_; 
if (v_isShared_1289_ == 0)
{
v___x_1291_ = v___x_1288_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_a_1286_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
v___jp_1235_:
{
lean_object* v___x_1242_; 
v___x_1242_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v___y_1237_);
if (lean_obj_tag(v___x_1242_) == 0)
{
lean_object* v_a_1243_; lean_object* v___x_1244_; 
v_a_1243_ = lean_ctor_get(v___x_1242_, 0);
lean_inc(v_a_1243_);
lean_dec_ref_known(v___x_1242_, 1);
v___x_1244_ = l_Lean_Meta_mkNoConfusion(v_a_1243_, v_hf_1236_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_);
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; uint8_t v___x_1249_; lean_object* v___x_1250_; 
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
lean_inc(v_a_1245_);
lean_dec_ref_known(v___x_1244_, 1);
v___x_1246_ = lean_unsigned_to_nat(1u);
v___x_1247_ = lean_mk_empty_array_with_capacity(v___x_1246_);
v___x_1248_ = lean_array_push(v___x_1247_, v_hab_1223_);
v___x_1249_ = 1;
v___x_1250_ = l_Lean_Meta_mkLambdaFVars(v___x_1248_, v_a_1245_, v_a_1217_, v___y_1218_, v_a_1217_, v___y_1218_, v___x_1249_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_);
lean_dec_ref(v___x_1248_);
return v___x_1250_;
}
else
{
lean_dec_ref(v_hab_1223_);
return v___x_1244_;
}
}
else
{
lean_dec_ref(v_hf_1236_);
lean_dec_ref(v_hab_1223_);
return v___x_1242_;
}
}
v___jp_1251_:
{
lean_object* v___x_1252_; 
lean_inc(v___y_1233_);
lean_inc_ref(v___y_1232_);
lean_inc(v___y_1231_);
lean_inc_ref(v___y_1230_);
lean_inc(v___y_1229_);
lean_inc_ref(v___y_1228_);
lean_inc(v___y_1227_);
lean_inc_ref(v___y_1226_);
lean_inc(v___y_1225_);
lean_inc(v___y_1224_);
v___x_1252_ = lean_grind_mk_heq_proof(v_self_1219_, v_a_1220_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1252_) == 0)
{
lean_object* v_a_1253_; lean_object* v___x_1254_; 
v_a_1253_ = lean_ctor_get(v___x_1252_, 0);
lean_inc(v_a_1253_);
lean_dec_ref_known(v___x_1252_, 1);
lean_inc_ref(v_hab_1223_);
v___x_1254_ = l_Lean_Meta_mkHEqOfEq(v_hab_1223_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1254_) == 0)
{
lean_object* v_a_1255_; lean_object* v___x_1256_; 
v_a_1255_ = lean_ctor_get(v___x_1254_, 0);
lean_inc(v_a_1255_);
lean_dec_ref_known(v___x_1254_, 1);
v___x_1256_ = l_Lean_Meta_mkHEqTrans(v_a_1253_, v_a_1255_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1256_) == 0)
{
lean_object* v_a_1257_; lean_object* v___x_1258_; 
v_a_1257_ = lean_ctor_get(v___x_1256_, 0);
lean_inc(v_a_1257_);
lean_dec_ref_known(v___x_1256_, 1);
lean_inc(v___y_1233_);
lean_inc_ref(v___y_1232_);
lean_inc(v___y_1231_);
lean_inc_ref(v___y_1230_);
lean_inc(v___y_1229_);
lean_inc_ref(v___y_1228_);
lean_inc(v___y_1227_);
lean_inc_ref(v___y_1226_);
lean_inc(v___y_1225_);
lean_inc(v___y_1224_);
v___x_1258_ = lean_grind_mk_heq_proof(v_a_1221_, v_self_1222_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1258_) == 0)
{
lean_object* v_a_1259_; lean_object* v___x_1260_; 
v_a_1259_ = lean_ctor_get(v___x_1258_, 0);
lean_inc(v_a_1259_);
lean_dec_ref_known(v___x_1258_, 1);
v___x_1260_ = l_Lean_Meta_mkHEqTrans(v_a_1257_, v_a_1259_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v_a_1261_; lean_object* v___x_1262_; 
v_a_1261_ = lean_ctor_get(v___x_1260_, 0);
lean_inc(v_a_1261_);
lean_dec_ref_known(v___x_1260_, 1);
v___x_1262_ = l_Lean_Meta_mkEqOfHEq(v_a_1261_, v___y_1218_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1262_) == 0)
{
lean_object* v_a_1263_; 
v_a_1263_ = lean_ctor_get(v___x_1262_, 0);
lean_inc(v_a_1263_);
lean_dec_ref_known(v___x_1262_, 1);
v_hf_1236_ = v_a_1263_;
v___y_1237_ = v___y_1228_;
v___y_1238_ = v___y_1230_;
v___y_1239_ = v___y_1231_;
v___y_1240_ = v___y_1232_;
v___y_1241_ = v___y_1233_;
goto v___jp_1235_;
}
else
{
lean_dec_ref(v_hab_1223_);
return v___x_1262_;
}
}
else
{
lean_dec_ref(v_hab_1223_);
return v___x_1260_;
}
}
else
{
lean_dec(v_a_1257_);
lean_dec_ref(v_hab_1223_);
return v___x_1258_;
}
}
else
{
lean_dec_ref(v_hab_1223_);
lean_dec_ref(v_self_1222_);
lean_dec_ref(v_a_1221_);
return v___x_1256_;
}
}
else
{
lean_dec(v_a_1253_);
lean_dec_ref(v_hab_1223_);
lean_dec_ref(v_self_1222_);
lean_dec_ref(v_a_1221_);
return v___x_1254_;
}
}
else
{
lean_dec_ref(v_hab_1223_);
lean_dec_ref(v_self_1222_);
lean_dec_ref(v_a_1221_);
return v___x_1252_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_a_1294_ = _args[0];
lean_object* v___y_1295_ = _args[1];
lean_object* v_self_1296_ = _args[2];
lean_object* v_a_1297_ = _args[3];
lean_object* v_a_1298_ = _args[4];
lean_object* v_self_1299_ = _args[5];
lean_object* v_hab_1300_ = _args[6];
lean_object* v___y_1301_ = _args[7];
lean_object* v___y_1302_ = _args[8];
lean_object* v___y_1303_ = _args[9];
lean_object* v___y_1304_ = _args[10];
lean_object* v___y_1305_ = _args[11];
lean_object* v___y_1306_ = _args[12];
lean_object* v___y_1307_ = _args[13];
lean_object* v___y_1308_ = _args[14];
lean_object* v___y_1309_ = _args[15];
lean_object* v___y_1310_ = _args[16];
lean_object* v___y_1311_ = _args[17];
_start:
{
uint8_t v_a_127892__boxed_1312_; uint8_t v___y_127893__boxed_1313_; lean_object* v_res_1314_; 
v_a_127892__boxed_1312_ = lean_unbox(v_a_1294_);
v___y_127893__boxed_1313_ = lean_unbox(v___y_1295_);
v_res_1314_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___redArg___lam__0(v_a_127892__boxed_1312_, v___y_127893__boxed_1313_, v_self_1296_, v_a_1297_, v_a_1298_, v_self_1299_, v_hab_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1309_);
lean_dec(v___y_1308_);
lean_dec_ref(v___y_1307_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v___y_1302_);
lean_dec(v___y_1301_);
return v_res_1314_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1321_ = lean_box(0);
v___x_1322_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__3));
v___x_1323_ = l_Lean_mkConst(v___x_1322_, v___x_1321_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg(lean_object* v_a_1324_, lean_object* v_a_1325_, uint8_t v_a_1326_, uint8_t v___y_1327_, lean_object* v_a_1328_, lean_object* v_e_1329_, lean_object* v_a_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v_snd_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1439_; 
v_snd_1342_ = lean_ctor_get(v_a_1330_, 1);
v_isSharedCheck_1439_ = !lean_is_exclusive(v_a_1330_);
if (v_isSharedCheck_1439_ == 0)
{
lean_object* v_unused_1440_; 
v_unused_1440_ = lean_ctor_get(v_a_1330_, 0);
lean_dec(v_unused_1440_);
v___x_1344_ = v_a_1330_;
v_isShared_1345_ = v_isSharedCheck_1439_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_snd_1342_);
lean_dec(v_a_1330_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1439_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1346_ = lean_box(0);
v___x_1347_ = lean_st_ref_get(v___y_1331_);
lean_inc(v_snd_1342_);
v___x_1348_ = l_Lean_Meta_Grind_Goal_getENode(v___x_1347_, v_snd_1342_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_);
lean_dec(v___x_1347_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1430_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1351_ = v___x_1348_;
v_isShared_1352_ = v_isSharedCheck_1430_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_a_1349_);
lean_dec(v___x_1348_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1430_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v_self_1353_; lean_object* v_next_1354_; uint8_t v_ctor_1355_; 
v_self_1353_ = lean_ctor_get(v_a_1349_, 0);
lean_inc_ref(v_self_1353_);
v_next_1354_ = lean_ctor_get(v_a_1349_, 1);
lean_inc_ref(v_next_1354_);
v_ctor_1355_ = lean_ctor_get_uint8(v_a_1349_, sizeof(void*)*12 + 2);
lean_dec(v_a_1349_);
if (v_ctor_1355_ == 0)
{
lean_dec_ref(v_self_1353_);
goto v___jp_1356_;
}
else
{
lean_object* v_self_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; uint8_t v___x_1373_; 
v_self_1370_ = lean_ctor_get(v_a_1325_, 0);
v___x_1371_ = l_Lean_Expr_getAppFn(v_self_1370_);
v___x_1372_ = l_Lean_Expr_getAppFn(v_self_1353_);
v___x_1373_ = lean_expr_eqv(v___x_1371_, v___x_1372_);
lean_dec_ref(v___x_1372_);
lean_dec_ref(v___x_1371_);
if (v___x_1373_ == 0)
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___f_1376_; lean_object* v___x_1377_; 
v___x_1374_ = lean_box(v_a_1326_);
v___x_1375_ = lean_box(v___y_1327_);
lean_inc_ref(v_self_1353_);
lean_inc_ref(v_a_1324_);
lean_inc_ref(v_a_1328_);
lean_inc_ref_n(v_self_1370_, 2);
v___f_1376_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___redArg___lam__0___boxed), 18, 6);
lean_closure_set(v___f_1376_, 0, v___x_1374_);
lean_closure_set(v___f_1376_, 1, v___x_1375_);
lean_closure_set(v___f_1376_, 2, v_self_1370_);
lean_closure_set(v___f_1376_, 3, v_a_1328_);
lean_closure_set(v___f_1376_, 4, v_a_1324_);
lean_closure_set(v___f_1376_, 5, v_self_1353_);
v___x_1377_ = l_Lean_Meta_Grind_hasSameType(v_self_1370_, v_self_1353_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_);
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v_a_1378_; uint8_t v___x_1379_; 
v_a_1378_ = lean_ctor_get(v___x_1377_, 0);
lean_inc(v_a_1378_);
lean_dec_ref_known(v___x_1377_, 1);
v___x_1379_ = lean_unbox(v_a_1378_);
if (v___x_1379_ == 0)
{
lean_dec(v_a_1378_);
lean_dec_ref(v___f_1376_);
goto v___jp_1356_;
}
else
{
lean_object* v___x_1380_; 
lean_dec_ref(v_next_1354_);
lean_del_object(v___x_1351_);
lean_del_object(v___x_1344_);
lean_dec_ref(v_a_1325_);
v___x_1380_ = l_Lean_Meta_mkEq(v_a_1328_, v_a_1324_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_);
if (lean_obj_tag(v___x_1380_) == 0)
{
lean_object* v_a_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v_a_1381_ = lean_ctor_get(v___x_1380_, 0);
lean_inc(v_a_1381_);
lean_dec_ref_known(v___x_1380_, 1);
v___x_1382_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__1));
v___x_1383_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg(v___x_1382_, v_a_1381_, v___f_1376_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_);
if (lean_obj_tag(v___x_1383_) == 0)
{
lean_object* v_a_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; 
v_a_1384_ = lean_ctor_get(v___x_1383_, 0);
lean_inc(v_a_1384_);
lean_dec_ref_known(v___x_1383_, 1);
v___x_1385_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__4, &l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__4_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__4);
lean_inc_ref(v_e_1329_);
v___x_1386_ = l_Lean_mkAppB(v___x_1385_, v_e_1329_, v_a_1384_);
v___x_1387_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_1329_, v___x_1386_, v___y_1331_, v___y_1333_, v___y_1335_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_);
if (lean_obj_tag(v___x_1387_) == 0)
{
lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1396_; 
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1396_ == 0)
{
lean_object* v_unused_1397_; 
v_unused_1397_ = lean_ctor_get(v___x_1387_, 0);
lean_dec(v_unused_1397_);
v___x_1389_ = v___x_1387_;
v_isShared_1390_ = v_isSharedCheck_1396_;
goto v_resetjp_1388_;
}
else
{
lean_dec(v___x_1387_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1396_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1394_; 
v___x_1391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1391_, 0, v_a_1378_);
v___x_1392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1391_);
lean_ctor_set(v___x_1392_, 1, v_snd_1342_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1392_);
v___x_1394_ = v___x_1389_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v___x_1392_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
return v___x_1394_;
}
}
}
else
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1405_; 
lean_dec(v_a_1378_);
lean_dec(v_snd_1342_);
v_a_1398_ = lean_ctor_get(v___x_1387_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1400_ = v___x_1387_;
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1387_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1403_; 
if (v_isShared_1401_ == 0)
{
v___x_1403_ = v___x_1400_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v_a_1398_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
lean_dec(v_a_1378_);
lean_dec(v_snd_1342_);
lean_dec_ref(v_e_1329_);
v_a_1406_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1383_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1383_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_dec(v_a_1378_);
lean_dec_ref(v___f_1376_);
lean_dec(v_snd_1342_);
lean_dec_ref(v_e_1329_);
v_a_1414_ = lean_ctor_get(v___x_1380_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1380_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1380_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1380_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1414_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
}
}
else
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1429_; 
lean_dec_ref(v___f_1376_);
lean_dec_ref(v_next_1354_);
lean_del_object(v___x_1351_);
lean_del_object(v___x_1344_);
lean_dec(v_snd_1342_);
lean_dec_ref(v_e_1329_);
lean_dec_ref(v_a_1328_);
lean_dec_ref(v_a_1325_);
lean_dec_ref(v_a_1324_);
v_a_1422_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1424_ = v___x_1377_;
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1377_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
else
{
lean_dec_ref(v_self_1353_);
goto v___jp_1356_;
}
}
v___jp_1356_:
{
size_t v___x_1357_; size_t v___x_1358_; uint8_t v___x_1359_; 
v___x_1357_ = lean_ptr_addr(v_next_1354_);
v___x_1358_ = lean_ptr_addr(v_a_1324_);
v___x_1359_ = lean_usize_dec_eq(v___x_1357_, v___x_1358_);
if (v___x_1359_ == 0)
{
lean_object* v___x_1361_; 
lean_del_object(v___x_1351_);
lean_dec(v_snd_1342_);
if (v_isShared_1345_ == 0)
{
lean_ctor_set(v___x_1344_, 1, v_next_1354_);
lean_ctor_set(v___x_1344_, 0, v___x_1346_);
v___x_1361_ = v___x_1344_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1346_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v_next_1354_);
v___x_1361_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
v_a_1330_ = v___x_1361_;
goto _start;
}
}
else
{
lean_object* v___x_1365_; 
lean_dec_ref(v_next_1354_);
lean_dec_ref(v_e_1329_);
lean_dec_ref(v_a_1328_);
lean_dec_ref(v_a_1325_);
lean_dec_ref(v_a_1324_);
if (v_isShared_1345_ == 0)
{
lean_ctor_set(v___x_1344_, 0, v___x_1346_);
v___x_1365_ = v___x_1344_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v___x_1346_);
lean_ctor_set(v_reuseFailAlloc_1369_, 1, v_snd_1342_);
v___x_1365_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
lean_object* v___x_1367_; 
if (v_isShared_1352_ == 0)
{
lean_ctor_set(v___x_1351_, 0, v___x_1365_);
v___x_1367_ = v___x_1351_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v___x_1365_);
v___x_1367_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
return v___x_1367_;
}
}
}
}
}
}
else
{
lean_object* v_a_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1438_; 
lean_del_object(v___x_1344_);
lean_dec(v_snd_1342_);
lean_dec_ref(v_e_1329_);
lean_dec_ref(v_a_1328_);
lean_dec_ref(v_a_1325_);
lean_dec_ref(v_a_1324_);
v_a_1431_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1438_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1433_ = v___x_1348_;
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_a_1431_);
lean_dec(v___x_1348_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1436_; 
if (v_isShared_1434_ == 0)
{
v___x_1436_ = v___x_1433_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v_a_1431_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
return v___x_1436_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___boxed(lean_object** _args){
lean_object* v_a_1441_ = _args[0];
lean_object* v_a_1442_ = _args[1];
lean_object* v_a_1443_ = _args[2];
lean_object* v___y_1444_ = _args[3];
lean_object* v_a_1445_ = _args[4];
lean_object* v_e_1446_ = _args[5];
lean_object* v_a_1447_ = _args[6];
lean_object* v___y_1448_ = _args[7];
lean_object* v___y_1449_ = _args[8];
lean_object* v___y_1450_ = _args[9];
lean_object* v___y_1451_ = _args[10];
lean_object* v___y_1452_ = _args[11];
lean_object* v___y_1453_ = _args[12];
lean_object* v___y_1454_ = _args[13];
lean_object* v___y_1455_ = _args[14];
lean_object* v___y_1456_ = _args[15];
lean_object* v___y_1457_ = _args[16];
lean_object* v___y_1458_ = _args[17];
_start:
{
uint8_t v_a_128085__boxed_1459_; uint8_t v___y_128086__boxed_1460_; lean_object* v_res_1461_; 
v_a_128085__boxed_1459_ = lean_unbox(v_a_1443_);
v___y_128086__boxed_1460_ = lean_unbox(v___y_1444_);
v_res_1461_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg(v_a_1441_, v_a_1442_, v_a_128085__boxed_1459_, v___y_128086__boxed_1460_, v_a_1445_, v_e_1446_, v_a_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
lean_dec(v___y_1457_);
lean_dec_ref(v___y_1456_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec(v___y_1449_);
lean_dec(v___y_1448_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___redArg(lean_object* v_a_1462_, lean_object* v_a_1463_, uint8_t v_a_1464_, uint8_t v___y_1465_, lean_object* v_a_1466_, lean_object* v_e_1467_, lean_object* v_a_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_){
_start:
{
lean_object* v_snd_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1577_; 
v_snd_1480_ = lean_ctor_get(v_a_1468_, 1);
v_isSharedCheck_1577_ = !lean_is_exclusive(v_a_1468_);
if (v_isSharedCheck_1577_ == 0)
{
lean_object* v_unused_1578_; 
v_unused_1578_ = lean_ctor_get(v_a_1468_, 0);
lean_dec(v_unused_1578_);
v___x_1482_ = v_a_1468_;
v_isShared_1483_ = v_isSharedCheck_1577_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_snd_1480_);
lean_dec(v_a_1468_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1577_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1484_ = lean_box(0);
v___x_1485_ = lean_st_ref_get(v___y_1469_);
lean_inc(v_snd_1480_);
v___x_1486_ = l_Lean_Meta_Grind_Goal_getENode(v___x_1485_, v_snd_1480_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
lean_dec(v___x_1485_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1568_; 
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1489_ = v___x_1486_;
v_isShared_1490_ = v_isSharedCheck_1568_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1486_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1568_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v_self_1491_; lean_object* v_next_1492_; uint8_t v_ctor_1493_; 
v_self_1491_ = lean_ctor_get(v_a_1487_, 0);
lean_inc_ref(v_self_1491_);
v_next_1492_ = lean_ctor_get(v_a_1487_, 1);
lean_inc_ref(v_next_1492_);
v_ctor_1493_ = lean_ctor_get_uint8(v_a_1487_, sizeof(void*)*12 + 2);
lean_dec(v_a_1487_);
if (v_ctor_1493_ == 0)
{
lean_dec_ref(v_self_1491_);
goto v___jp_1494_;
}
else
{
lean_object* v_self_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; uint8_t v___x_1511_; 
v_self_1508_ = lean_ctor_get(v_a_1463_, 0);
v___x_1509_ = l_Lean_Expr_getAppFn(v_self_1508_);
v___x_1510_ = l_Lean_Expr_getAppFn(v_self_1491_);
v___x_1511_ = lean_expr_eqv(v___x_1509_, v___x_1510_);
lean_dec_ref(v___x_1510_);
lean_dec_ref(v___x_1509_);
if (v___x_1511_ == 0)
{
lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___f_1514_; lean_object* v___x_1515_; 
v___x_1512_ = lean_box(v_a_1464_);
v___x_1513_ = lean_box(v___y_1465_);
lean_inc_ref(v_self_1491_);
lean_inc_ref(v_a_1462_);
lean_inc_ref(v_a_1466_);
lean_inc_ref_n(v_self_1508_, 2);
v___f_1514_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___redArg___lam__0___boxed), 18, 6);
lean_closure_set(v___f_1514_, 0, v___x_1512_);
lean_closure_set(v___f_1514_, 1, v___x_1513_);
lean_closure_set(v___f_1514_, 2, v_self_1508_);
lean_closure_set(v___f_1514_, 3, v_a_1466_);
lean_closure_set(v___f_1514_, 4, v_a_1462_);
lean_closure_set(v___f_1514_, 5, v_self_1491_);
v___x_1515_ = l_Lean_Meta_Grind_hasSameType(v_self_1508_, v_self_1491_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v_a_1516_; uint8_t v___x_1517_; 
v_a_1516_ = lean_ctor_get(v___x_1515_, 0);
lean_inc(v_a_1516_);
lean_dec_ref_known(v___x_1515_, 1);
v___x_1517_ = lean_unbox(v_a_1516_);
if (v___x_1517_ == 0)
{
lean_dec(v_a_1516_);
lean_dec_ref(v___f_1514_);
goto v___jp_1494_;
}
else
{
lean_object* v___x_1518_; 
lean_dec_ref(v_next_1492_);
lean_del_object(v___x_1489_);
lean_del_object(v___x_1482_);
lean_dec_ref(v_a_1463_);
v___x_1518_ = l_Lean_Meta_mkEq(v_a_1466_, v_a_1462_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
if (lean_obj_tag(v___x_1518_) == 0)
{
lean_object* v_a_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
v_a_1519_ = lean_ctor_get(v___x_1518_, 0);
lean_inc(v_a_1519_);
lean_dec_ref_known(v___x_1518_, 1);
v___x_1520_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__1));
v___x_1521_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg(v___x_1520_, v_a_1519_, v___f_1514_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v_a_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
v_a_1522_ = lean_ctor_get(v___x_1521_, 0);
lean_inc(v_a_1522_);
lean_dec_ref_known(v___x_1521_, 1);
v___x_1523_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__4, &l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__4_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__4);
lean_inc_ref(v_e_1467_);
v___x_1524_ = l_Lean_mkAppB(v___x_1523_, v_e_1467_, v_a_1522_);
v___x_1525_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_1467_, v___x_1524_, v___y_1469_, v___y_1471_, v___y_1473_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1534_; 
v_isSharedCheck_1534_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1534_ == 0)
{
lean_object* v_unused_1535_; 
v_unused_1535_ = lean_ctor_get(v___x_1525_, 0);
lean_dec(v_unused_1535_);
v___x_1527_ = v___x_1525_;
v_isShared_1528_ = v_isSharedCheck_1534_;
goto v_resetjp_1526_;
}
else
{
lean_dec(v___x_1525_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1534_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1532_; 
v___x_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1529_, 0, v_a_1516_);
v___x_1530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1529_);
lean_ctor_set(v___x_1530_, 1, v_snd_1480_);
if (v_isShared_1528_ == 0)
{
lean_ctor_set(v___x_1527_, 0, v___x_1530_);
v___x_1532_ = v___x_1527_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v___x_1530_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
}
else
{
lean_object* v_a_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1543_; 
lean_dec(v_a_1516_);
lean_dec(v_snd_1480_);
v_a_1536_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1543_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1543_ == 0)
{
v___x_1538_ = v___x_1525_;
v_isShared_1539_ = v_isSharedCheck_1543_;
goto v_resetjp_1537_;
}
else
{
lean_inc(v_a_1536_);
lean_dec(v___x_1525_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1543_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v___x_1541_; 
if (v_isShared_1539_ == 0)
{
v___x_1541_ = v___x_1538_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v_a_1536_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
}
else
{
lean_object* v_a_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1551_; 
lean_dec(v_a_1516_);
lean_dec(v_snd_1480_);
lean_dec_ref(v_e_1467_);
v_a_1544_ = lean_ctor_get(v___x_1521_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1546_ = v___x_1521_;
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_a_1544_);
lean_dec(v___x_1521_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1549_; 
if (v_isShared_1547_ == 0)
{
v___x_1549_ = v___x_1546_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_a_1544_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
}
}
else
{
lean_object* v_a_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1559_; 
lean_dec(v_a_1516_);
lean_dec_ref(v___f_1514_);
lean_dec(v_snd_1480_);
lean_dec_ref(v_e_1467_);
v_a_1552_ = lean_ctor_get(v___x_1518_, 0);
v_isSharedCheck_1559_ = !lean_is_exclusive(v___x_1518_);
if (v_isSharedCheck_1559_ == 0)
{
v___x_1554_ = v___x_1518_;
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_a_1552_);
lean_dec(v___x_1518_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v___x_1557_; 
if (v_isShared_1555_ == 0)
{
v___x_1557_ = v___x_1554_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1558_; 
v_reuseFailAlloc_1558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1558_, 0, v_a_1552_);
v___x_1557_ = v_reuseFailAlloc_1558_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
return v___x_1557_;
}
}
}
}
}
else
{
lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1567_; 
lean_dec_ref(v___f_1514_);
lean_dec_ref(v_next_1492_);
lean_del_object(v___x_1489_);
lean_del_object(v___x_1482_);
lean_dec(v_snd_1480_);
lean_dec_ref(v_e_1467_);
lean_dec_ref(v_a_1466_);
lean_dec_ref(v_a_1463_);
lean_dec_ref(v_a_1462_);
v_a_1560_ = lean_ctor_get(v___x_1515_, 0);
v_isSharedCheck_1567_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1562_ = v___x_1515_;
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_dec(v___x_1515_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1565_; 
if (v_isShared_1563_ == 0)
{
v___x_1565_ = v___x_1562_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v_a_1560_);
v___x_1565_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
return v___x_1565_;
}
}
}
}
else
{
lean_dec_ref(v_self_1491_);
goto v___jp_1494_;
}
}
v___jp_1494_:
{
size_t v___x_1495_; size_t v___x_1496_; uint8_t v___x_1497_; 
v___x_1495_ = lean_ptr_addr(v_next_1492_);
v___x_1496_ = lean_ptr_addr(v_a_1462_);
v___x_1497_ = lean_usize_dec_eq(v___x_1495_, v___x_1496_);
if (v___x_1497_ == 0)
{
lean_object* v___x_1499_; 
lean_del_object(v___x_1489_);
lean_dec(v_snd_1480_);
if (v_isShared_1483_ == 0)
{
lean_ctor_set(v___x_1482_, 1, v_next_1492_);
lean_ctor_set(v___x_1482_, 0, v___x_1484_);
v___x_1499_ = v___x_1482_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v___x_1484_);
lean_ctor_set(v_reuseFailAlloc_1501_, 1, v_next_1492_);
v___x_1499_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
lean_object* v___x_1500_; 
v___x_1500_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg(v_a_1462_, v_a_1463_, v_a_1464_, v___y_1465_, v_a_1466_, v_e_1467_, v___x_1499_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
return v___x_1500_;
}
}
else
{
lean_object* v___x_1503_; 
lean_dec_ref(v_next_1492_);
lean_dec_ref(v_e_1467_);
lean_dec_ref(v_a_1466_);
lean_dec_ref(v_a_1463_);
lean_dec_ref(v_a_1462_);
if (v_isShared_1483_ == 0)
{
lean_ctor_set(v___x_1482_, 0, v___x_1484_);
v___x_1503_ = v___x_1482_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v___x_1484_);
lean_ctor_set(v_reuseFailAlloc_1507_, 1, v_snd_1480_);
v___x_1503_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
lean_object* v___x_1505_; 
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 0, v___x_1503_);
v___x_1505_ = v___x_1489_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v___x_1503_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
}
}
}
}
else
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1576_; 
lean_del_object(v___x_1482_);
lean_dec(v_snd_1480_);
lean_dec_ref(v_e_1467_);
lean_dec_ref(v_a_1466_);
lean_dec_ref(v_a_1463_);
lean_dec_ref(v_a_1462_);
v_a_1569_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1571_ = v___x_1486_;
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v___x_1486_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1574_; 
if (v_isShared_1572_ == 0)
{
v___x_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1569_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___redArg___boxed(lean_object** _args){
lean_object* v_a_1579_ = _args[0];
lean_object* v_a_1580_ = _args[1];
lean_object* v_a_1581_ = _args[2];
lean_object* v___y_1582_ = _args[3];
lean_object* v_a_1583_ = _args[4];
lean_object* v_e_1584_ = _args[5];
lean_object* v_a_1585_ = _args[6];
lean_object* v___y_1586_ = _args[7];
lean_object* v___y_1587_ = _args[8];
lean_object* v___y_1588_ = _args[9];
lean_object* v___y_1589_ = _args[10];
lean_object* v___y_1590_ = _args[11];
lean_object* v___y_1591_ = _args[12];
lean_object* v___y_1592_ = _args[13];
lean_object* v___y_1593_ = _args[14];
lean_object* v___y_1594_ = _args[15];
lean_object* v___y_1595_ = _args[16];
lean_object* v___y_1596_ = _args[17];
_start:
{
uint8_t v_a_128340__boxed_1597_; uint8_t v___y_128341__boxed_1598_; lean_object* v_res_1599_; 
v_a_128340__boxed_1597_ = lean_unbox(v_a_1581_);
v___y_128341__boxed_1598_ = lean_unbox(v___y_1582_);
v_res_1599_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___redArg(v_a_1579_, v_a_1580_, v_a_128340__boxed_1597_, v___y_128341__boxed_1598_, v_a_1583_, v_e_1584_, v_a_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_);
lean_dec(v___y_1595_);
lean_dec_ref(v___y_1594_);
lean_dec(v___y_1593_);
lean_dec_ref(v___y_1592_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec(v___y_1586_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__2___redArg(lean_object* v_a_1600_, lean_object* v_a_1601_, uint8_t v_a_1602_, uint8_t v___y_1603_, lean_object* v_e_1604_, lean_object* v_a_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_){
_start:
{
lean_object* v_snd_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1674_; 
v_snd_1617_ = lean_ctor_get(v_a_1605_, 1);
v_isSharedCheck_1674_ = !lean_is_exclusive(v_a_1605_);
if (v_isSharedCheck_1674_ == 0)
{
lean_object* v_unused_1675_; 
v_unused_1675_ = lean_ctor_get(v_a_1605_, 0);
lean_dec(v_unused_1675_);
v___x_1619_ = v_a_1605_;
v_isShared_1620_ = v_isSharedCheck_1674_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_snd_1617_);
lean_dec(v_a_1605_);
v___x_1619_ = lean_box(0);
v_isShared_1620_ = v_isSharedCheck_1674_;
goto v_resetjp_1618_;
}
v_resetjp_1618_:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1621_ = lean_box(0);
v___x_1622_ = lean_st_ref_get(v___y_1606_);
lean_inc(v_snd_1617_);
v___x_1623_ = l_Lean_Meta_Grind_Goal_getENode(v___x_1622_, v_snd_1617_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
lean_dec(v___x_1622_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1665_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1626_ = v___x_1623_;
v_isShared_1627_ = v_isSharedCheck_1665_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1623_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1665_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v_next_1628_; uint8_t v_ctor_1629_; 
v_next_1628_ = lean_ctor_get(v_a_1624_, 1);
lean_inc_ref(v_next_1628_);
v_ctor_1629_ = lean_ctor_get_uint8(v_a_1624_, sizeof(void*)*12 + 2);
if (v_ctor_1629_ == 0)
{
lean_dec(v_a_1624_);
goto v___jp_1630_;
}
else
{
lean_object* v___x_1644_; lean_object* v___x_1645_; 
lean_inc_ref_n(v_a_1601_, 2);
v___x_1644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1621_);
lean_ctor_set(v___x_1644_, 1, v_a_1601_);
lean_inc_ref(v_e_1604_);
lean_inc_ref(v_a_1600_);
v___x_1645_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___redArg(v_a_1601_, v_a_1624_, v_a_1602_, v___y_1603_, v_a_1600_, v_e_1604_, v___x_1644_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
if (lean_obj_tag(v___x_1645_) == 0)
{
lean_object* v_a_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1664_; 
v_a_1646_ = lean_ctor_get(v___x_1645_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1645_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1648_ = v___x_1645_;
v_isShared_1649_ = v_isSharedCheck_1664_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_a_1646_);
lean_dec(v___x_1645_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1664_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v_fst_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1662_; 
v_fst_1650_ = lean_ctor_get(v_a_1646_, 0);
v_isSharedCheck_1662_ = !lean_is_exclusive(v_a_1646_);
if (v_isSharedCheck_1662_ == 0)
{
lean_object* v_unused_1663_; 
v_unused_1663_ = lean_ctor_get(v_a_1646_, 1);
lean_dec(v_unused_1663_);
v___x_1652_ = v_a_1646_;
v_isShared_1653_ = v_isSharedCheck_1662_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_fst_1650_);
lean_dec(v_a_1646_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1662_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
if (lean_obj_tag(v_fst_1650_) == 0)
{
lean_del_object(v___x_1652_);
lean_del_object(v___x_1648_);
goto v___jp_1630_;
}
else
{
lean_object* v_val_1654_; uint8_t v___x_1655_; 
v_val_1654_ = lean_ctor_get(v_fst_1650_, 0);
v___x_1655_ = lean_unbox(v_val_1654_);
if (v___x_1655_ == 0)
{
lean_dec_ref_known(v_fst_1650_, 1);
lean_del_object(v___x_1652_);
lean_del_object(v___x_1648_);
goto v___jp_1630_;
}
else
{
lean_object* v___x_1657_; 
lean_dec_ref(v_next_1628_);
lean_del_object(v___x_1626_);
lean_del_object(v___x_1619_);
lean_dec_ref(v_e_1604_);
lean_dec_ref(v_a_1601_);
lean_dec_ref(v_a_1600_);
if (v_isShared_1653_ == 0)
{
lean_ctor_set(v___x_1652_, 1, v_snd_1617_);
v___x_1657_ = v___x_1652_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v_fst_1650_);
lean_ctor_set(v_reuseFailAlloc_1661_, 1, v_snd_1617_);
v___x_1657_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
lean_object* v___x_1659_; 
if (v_isShared_1649_ == 0)
{
lean_ctor_set(v___x_1648_, 0, v___x_1657_);
v___x_1659_ = v___x_1648_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v___x_1657_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_next_1628_);
lean_del_object(v___x_1626_);
lean_del_object(v___x_1619_);
lean_dec(v_snd_1617_);
lean_dec_ref(v_e_1604_);
lean_dec_ref(v_a_1601_);
lean_dec_ref(v_a_1600_);
return v___x_1645_;
}
}
v___jp_1630_:
{
size_t v___x_1631_; size_t v___x_1632_; uint8_t v___x_1633_; 
v___x_1631_ = lean_ptr_addr(v_next_1628_);
v___x_1632_ = lean_ptr_addr(v_a_1600_);
v___x_1633_ = lean_usize_dec_eq(v___x_1631_, v___x_1632_);
if (v___x_1633_ == 0)
{
lean_object* v___x_1635_; 
lean_del_object(v___x_1626_);
lean_dec(v_snd_1617_);
if (v_isShared_1620_ == 0)
{
lean_ctor_set(v___x_1619_, 1, v_next_1628_);
lean_ctor_set(v___x_1619_, 0, v___x_1621_);
v___x_1635_ = v___x_1619_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v___x_1621_);
lean_ctor_set(v_reuseFailAlloc_1637_, 1, v_next_1628_);
v___x_1635_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
v_a_1605_ = v___x_1635_;
goto _start;
}
}
else
{
lean_object* v___x_1639_; 
lean_dec_ref(v_next_1628_);
lean_dec_ref(v_e_1604_);
lean_dec_ref(v_a_1601_);
lean_dec_ref(v_a_1600_);
if (v_isShared_1620_ == 0)
{
lean_ctor_set(v___x_1619_, 0, v___x_1621_);
v___x_1639_ = v___x_1619_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v___x_1621_);
lean_ctor_set(v_reuseFailAlloc_1643_, 1, v_snd_1617_);
v___x_1639_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
lean_object* v___x_1641_; 
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 0, v___x_1639_);
v___x_1641_ = v___x_1626_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v___x_1639_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
return v___x_1641_;
}
}
}
}
}
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1673_; 
lean_del_object(v___x_1619_);
lean_dec(v_snd_1617_);
lean_dec_ref(v_e_1604_);
lean_dec_ref(v_a_1601_);
lean_dec_ref(v_a_1600_);
v_a_1666_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1668_ = v___x_1623_;
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1623_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
if (v_isShared_1669_ == 0)
{
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_a_1666_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__2___redArg___boxed(lean_object** _args){
lean_object* v_a_1676_ = _args[0];
lean_object* v_a_1677_ = _args[1];
lean_object* v_a_1678_ = _args[2];
lean_object* v___y_1679_ = _args[3];
lean_object* v_e_1680_ = _args[4];
lean_object* v_a_1681_ = _args[5];
lean_object* v___y_1682_ = _args[6];
lean_object* v___y_1683_ = _args[7];
lean_object* v___y_1684_ = _args[8];
lean_object* v___y_1685_ = _args[9];
lean_object* v___y_1686_ = _args[10];
lean_object* v___y_1687_ = _args[11];
lean_object* v___y_1688_ = _args[12];
lean_object* v___y_1689_ = _args[13];
lean_object* v___y_1690_ = _args[14];
lean_object* v___y_1691_ = _args[15];
lean_object* v___y_1692_ = _args[16];
_start:
{
uint8_t v_a_128581__boxed_1693_; uint8_t v___y_128582__boxed_1694_; lean_object* v_res_1695_; 
v_a_128581__boxed_1693_ = lean_unbox(v_a_1678_);
v___y_128582__boxed_1694_ = lean_unbox(v___y_1679_);
v_res_1695_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__2___redArg(v_a_1676_, v_a_1677_, v_a_128581__boxed_1693_, v___y_128582__boxed_1694_, v_e_1680_, v_a_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec(v___y_1687_);
lean_dec_ref(v___y_1686_);
lean_dec(v___y_1685_);
lean_dec_ref(v___y_1684_);
lean_dec(v___y_1683_);
lean_dec(v___y_1682_);
return v_res_1695_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqUp___closed__6(void){
_start:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1708_ = lean_box(0);
v___x_1709_ = ((lean_object*)(l_Lean_Meta_Grind_propagateEqUp___closed__5));
v___x_1710_ = l_Lean_mkConst(v___x_1709_, v___x_1708_);
return v___x_1710_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqUp___closed__9(void){
_start:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1716_ = lean_box(0);
v___x_1717_ = ((lean_object*)(l_Lean_Meta_Grind_propagateEqUp___closed__8));
v___x_1718_ = l_Lean_mkConst(v___x_1717_, v___x_1716_);
return v___x_1718_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqUp___closed__12(void){
_start:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1724_ = lean_box(0);
v___x_1725_ = ((lean_object*)(l_Lean_Meta_Grind_propagateEqUp___closed__11));
v___x_1726_ = l_Lean_mkConst(v___x_1725_, v___x_1724_);
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp(lean_object* v_e_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_){
_start:
{
lean_object* v___x_1748_; uint8_t v___x_1749_; 
v___x_1748_ = l_Lean_Expr_cleanupAnnotations(v_e_1727_);
v___x_1749_ = l_Lean_Expr_isApp(v___x_1748_);
if (v___x_1749_ == 0)
{
lean_dec_ref(v___x_1748_);
lean_dec_ref(v_e_1727_);
goto v___jp_1745_;
}
else
{
lean_object* v___x_1750_; uint8_t v___x_1751_; 
v___x_1750_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1748_);
v___x_1751_ = l_Lean_Expr_isApp(v___x_1750_);
if (v___x_1751_ == 0)
{
lean_dec_ref(v___x_1750_);
lean_dec_ref(v___x_1748_);
lean_dec_ref(v_e_1727_);
goto v___jp_1745_;
}
else
{
lean_object* v___x_1752_; uint8_t v___x_1753_; 
v___x_1752_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1750_);
v___x_1753_ = l_Lean_Expr_isApp(v___x_1752_);
if (v___x_1753_ == 0)
{
lean_dec_ref(v___x_1752_);
lean_dec_ref(v___x_1750_);
lean_dec_ref(v___x_1748_);
lean_dec_ref(v_e_1727_);
goto v___jp_1745_;
}
else
{
lean_object* v___x_1754_; lean_object* v___x_1755_; uint8_t v___x_1756_; 
v___x_1754_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1752_);
v___x_1755_ = ((lean_object*)(l_Lean_Meta_Grind_propagateEqUp___closed__1));
v___x_1756_ = l_Lean_Expr_isConstOf(v___x_1754_, v___x_1755_);
lean_dec_ref(v___x_1754_);
if (v___x_1756_ == 0)
{
lean_dec_ref(v___x_1752_);
lean_dec_ref(v___x_1750_);
lean_dec_ref(v___x_1748_);
lean_dec_ref(v_e_1727_);
goto v___jp_1745_;
}
else
{
lean_object* v_arg_1757_; lean_object* v_arg_1758_; lean_object* v_arg_1759_; lean_object* v___x_1760_; 
v_arg_1757_ = lean_ctor_get(v___x_1748_, 1);
lean_inc_ref(v_arg_1757_);
lean_dec_ref(v___x_1748_);
v_arg_1758_ = lean_ctor_get(v___x_1750_, 1);
lean_inc_ref_n(v_arg_1758_, 2);
lean_dec_ref(v___x_1750_);
v_arg_1759_ = lean_ctor_get(v___x_1752_, 1);
lean_inc_ref(v_arg_1759_);
lean_dec_ref(v___x_1752_);
v___x_1760_ = l_Lean_Meta_Grind_getRootENode___redArg(v_arg_1758_, v_a_1728_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v_a_1761_; lean_object* v___x_1762_; 
v_a_1761_ = lean_ctor_get(v___x_1760_, 0);
lean_inc(v_a_1761_);
lean_dec_ref_known(v___x_1760_, 1);
lean_inc_ref(v_arg_1757_);
v___x_1762_ = l_Lean_Meta_Grind_getRootENode___redArg(v_arg_1757_, v_a_1728_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_);
if (lean_obj_tag(v___x_1762_) == 0)
{
lean_object* v_a_1763_; lean_object* v_self_1764_; uint8_t v_ctor_1765_; lean_object* v_self_1766_; uint8_t v_ctor_1767_; lean_object* v___y_1769_; lean_object* v___y_1770_; lean_object* v___y_1771_; lean_object* v___y_1772_; lean_object* v___y_1773_; lean_object* v___y_1774_; lean_object* v___y_1775_; lean_object* v___y_1776_; lean_object* v___y_1777_; lean_object* v___y_1778_; lean_object* v___y_1779_; lean_object* v___y_1780_; lean_object* v___y_1781_; lean_object* v___y_1817_; lean_object* v___y_1818_; lean_object* v___y_1819_; lean_object* v___y_1820_; lean_object* v___y_1821_; lean_object* v___y_1822_; lean_object* v___y_1823_; lean_object* v___y_1824_; lean_object* v___y_1825_; lean_object* v___y_1826_; lean_object* v___x_1963_; 
v_a_1763_ = lean_ctor_get(v___x_1762_, 0);
lean_inc(v_a_1763_);
lean_dec_ref_known(v___x_1762_, 1);
v_self_1764_ = lean_ctor_get(v_a_1761_, 0);
lean_inc_ref(v_self_1764_);
v_ctor_1765_ = lean_ctor_get_uint8(v_a_1761_, sizeof(void*)*12 + 2);
lean_dec(v_a_1761_);
v_self_1766_ = lean_ctor_get(v_a_1763_, 0);
lean_inc_ref(v_self_1766_);
v_ctor_1767_ = lean_ctor_get_uint8(v_a_1763_, sizeof(void*)*12 + 2);
lean_dec(v_a_1763_);
v___x_1963_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_1732_);
if (lean_obj_tag(v___x_1963_) == 0)
{
lean_object* v_a_1964_; size_t v___x_1965_; size_t v___x_1966_; uint8_t v___x_1967_; 
v_a_1964_ = lean_ctor_get(v___x_1963_, 0);
lean_inc(v_a_1964_);
lean_dec_ref_known(v___x_1963_, 1);
v___x_1965_ = lean_ptr_addr(v_self_1764_);
v___x_1966_ = lean_ptr_addr(v_a_1964_);
v___x_1967_ = lean_usize_dec_eq(v___x_1965_, v___x_1966_);
if (v___x_1967_ == 0)
{
size_t v___x_1968_; size_t v___x_1969_; uint8_t v___x_1970_; 
v___x_1968_ = lean_ptr_addr(v_self_1766_);
v___x_1969_ = lean_ptr_addr(v_a_1964_);
v___x_1970_ = lean_usize_dec_eq(v___x_1968_, v___x_1969_);
if (v___x_1970_ == 0)
{
size_t v___x_1971_; size_t v___x_1972_; uint8_t v___x_1973_; 
v___x_1971_ = lean_ptr_addr(v_self_1764_);
v___x_1972_ = lean_ptr_addr(v_self_1766_);
v___x_1973_ = lean_usize_dec_eq(v___x_1971_, v___x_1972_);
if (v___x_1973_ == 0)
{
lean_dec(v_a_1964_);
v___y_1817_ = v_a_1728_;
v___y_1818_ = v_a_1729_;
v___y_1819_ = v_a_1730_;
v___y_1820_ = v_a_1731_;
v___y_1821_ = v_a_1732_;
v___y_1822_ = v_a_1733_;
v___y_1823_ = v_a_1734_;
v___y_1824_ = v_a_1735_;
v___y_1825_ = v_a_1736_;
v___y_1826_ = v_a_1737_;
goto v___jp_1816_;
}
else
{
lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1974_ = lean_st_ref_get(v_a_1728_);
lean_inc_ref(v_e_1727_);
v___x_1975_ = l_Lean_Meta_Grind_Goal_getRoot(v___x_1974_, v_e_1727_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_);
lean_dec(v___x_1974_);
if (lean_obj_tag(v___x_1975_) == 0)
{
lean_object* v_a_1976_; size_t v___x_1977_; size_t v___x_1978_; uint8_t v___x_1979_; 
v_a_1976_ = lean_ctor_get(v___x_1975_, 0);
lean_inc(v_a_1976_);
lean_dec_ref_known(v___x_1975_, 1);
v___x_1977_ = lean_ptr_addr(v_a_1976_);
lean_dec(v_a_1976_);
v___x_1978_ = lean_ptr_addr(v_a_1964_);
v___x_1979_ = lean_usize_dec_eq(v___x_1977_, v___x_1978_);
if (v___x_1979_ == 0)
{
lean_object* v___x_1980_; 
lean_inc(v_a_1737_);
lean_inc_ref(v_a_1736_);
lean_inc(v_a_1735_);
lean_inc_ref(v_a_1734_);
lean_inc(v_a_1733_);
lean_inc_ref(v_a_1732_);
lean_inc(v_a_1731_);
lean_inc_ref(v_a_1730_);
lean_inc(v_a_1729_);
lean_inc(v_a_1728_);
lean_inc_ref(v_arg_1757_);
lean_inc_ref(v_arg_1758_);
v___x_1980_ = lean_grind_mk_eq_proof(v_arg_1758_, v_arg_1757_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_a_1981_);
lean_dec_ref_known(v___x_1980_, 1);
lean_inc_ref_n(v_e_1727_, 2);
v___x_1982_ = l_Lean_Meta_mkEqTrueCore(v_e_1727_, v_a_1981_);
v___x_1983_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_1727_, v_a_1964_, v___x_1982_, v___x_1979_, v_a_1728_, v_a_1730_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_);
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_dec_ref_known(v___x_1983_, 1);
v___y_1817_ = v_a_1728_;
v___y_1818_ = v_a_1729_;
v___y_1819_ = v_a_1730_;
v___y_1820_ = v_a_1731_;
v___y_1821_ = v_a_1732_;
v___y_1822_ = v_a_1733_;
v___y_1823_ = v_a_1734_;
v___y_1824_ = v_a_1735_;
v___y_1825_ = v_a_1736_;
v___y_1826_ = v_a_1737_;
goto v___jp_1816_;
}
else
{
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
return v___x_1983_;
}
}
else
{
lean_object* v_a_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1991_; 
lean_dec(v_a_1964_);
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_1984_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1986_ = v___x_1980_;
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_a_1984_);
lean_dec(v___x_1980_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1989_; 
if (v_isShared_1987_ == 0)
{
v___x_1989_ = v___x_1986_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_a_1984_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
}
else
{
lean_dec(v_a_1964_);
v___y_1817_ = v_a_1728_;
v___y_1818_ = v_a_1729_;
v___y_1819_ = v_a_1730_;
v___y_1820_ = v_a_1731_;
v___y_1821_ = v_a_1732_;
v___y_1822_ = v_a_1733_;
v___y_1823_ = v_a_1734_;
v___y_1824_ = v_a_1735_;
v___y_1825_ = v_a_1736_;
v___y_1826_ = v_a_1737_;
goto v___jp_1816_;
}
}
else
{
lean_object* v_a_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_1999_; 
lean_dec(v_a_1964_);
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_1992_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1994_ = v___x_1975_;
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_a_1992_);
lean_dec(v___x_1975_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1997_; 
if (v_isShared_1995_ == 0)
{
v___x_1997_ = v___x_1994_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v_a_1992_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
return v___x_1997_;
}
}
}
}
}
else
{
lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_2000_ = lean_st_ref_get(v_a_1728_);
lean_inc_ref(v_e_1727_);
v___x_2001_ = l_Lean_Meta_Grind_Goal_getRoot(v___x_2000_, v_e_1727_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_);
lean_dec(v___x_2000_);
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v_a_2002_; size_t v___x_2003_; size_t v___x_2004_; uint8_t v___x_2005_; 
v_a_2002_ = lean_ctor_get(v___x_2001_, 0);
lean_inc(v_a_2002_);
lean_dec_ref_known(v___x_2001_, 1);
v___x_2003_ = lean_ptr_addr(v_a_2002_);
lean_dec(v_a_2002_);
v___x_2004_ = lean_ptr_addr(v_self_1764_);
v___x_2005_ = lean_usize_dec_eq(v___x_2003_, v___x_2004_);
if (v___x_2005_ == 0)
{
lean_object* v___x_2006_; 
lean_inc(v_a_1737_);
lean_inc_ref(v_a_1736_);
lean_inc(v_a_1735_);
lean_inc_ref(v_a_1734_);
lean_inc(v_a_1733_);
lean_inc_ref(v_a_1732_);
lean_inc(v_a_1731_);
lean_inc_ref(v_a_1730_);
lean_inc(v_a_1729_);
lean_inc(v_a_1728_);
lean_inc_ref(v_arg_1757_);
v___x_2006_ = lean_grind_mk_eq_proof(v_arg_1757_, v_a_1964_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_);
if (lean_obj_tag(v___x_2006_) == 0)
{
lean_object* v_a_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; 
v_a_2007_ = lean_ctor_get(v___x_2006_, 0);
lean_inc(v_a_2007_);
lean_dec_ref_known(v___x_2006_, 1);
v___x_2008_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__9, &l_Lean_Meta_Grind_propagateEqUp___closed__9_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__9);
lean_inc_ref(v_arg_1757_);
lean_inc_ref_n(v_arg_1758_, 2);
v___x_2009_ = l_Lean_mkApp3(v___x_2008_, v_arg_1758_, v_arg_1757_, v_a_2007_);
lean_inc_ref(v_e_1727_);
v___x_2010_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_1727_, v_arg_1758_, v___x_2009_, v___x_2005_, v_a_1728_, v_a_1730_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_);
if (lean_obj_tag(v___x_2010_) == 0)
{
lean_dec_ref_known(v___x_2010_, 1);
v___y_1817_ = v_a_1728_;
v___y_1818_ = v_a_1729_;
v___y_1819_ = v_a_1730_;
v___y_1820_ = v_a_1731_;
v___y_1821_ = v_a_1732_;
v___y_1822_ = v_a_1733_;
v___y_1823_ = v_a_1734_;
v___y_1824_ = v_a_1735_;
v___y_1825_ = v_a_1736_;
v___y_1826_ = v_a_1737_;
goto v___jp_1816_;
}
else
{
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
return v___x_2010_;
}
}
else
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_2011_ = lean_ctor_get(v___x_2006_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_2006_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2013_ = v___x_2006_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_2006_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2016_; 
if (v_isShared_2014_ == 0)
{
v___x_2016_ = v___x_2013_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2011_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
else
{
lean_dec(v_a_1964_);
v___y_1817_ = v_a_1728_;
v___y_1818_ = v_a_1729_;
v___y_1819_ = v_a_1730_;
v___y_1820_ = v_a_1731_;
v___y_1821_ = v_a_1732_;
v___y_1822_ = v_a_1733_;
v___y_1823_ = v_a_1734_;
v___y_1824_ = v_a_1735_;
v___y_1825_ = v_a_1736_;
v___y_1826_ = v_a_1737_;
goto v___jp_1816_;
}
}
else
{
lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2026_; 
lean_dec(v_a_1964_);
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_2019_ = lean_ctor_get(v___x_2001_, 0);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2021_ = v___x_2001_;
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_dec(v___x_2001_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2024_; 
if (v_isShared_2022_ == 0)
{
v___x_2024_ = v___x_2021_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v_a_2019_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
}
}
}
else
{
lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2027_ = lean_st_ref_get(v_a_1728_);
lean_inc_ref(v_e_1727_);
v___x_2028_ = l_Lean_Meta_Grind_Goal_getRoot(v___x_2027_, v_e_1727_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_);
lean_dec(v___x_2027_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v_a_2029_; size_t v___x_2030_; size_t v___x_2031_; uint8_t v___x_2032_; 
v_a_2029_ = lean_ctor_get(v___x_2028_, 0);
lean_inc(v_a_2029_);
lean_dec_ref_known(v___x_2028_, 1);
v___x_2030_ = lean_ptr_addr(v_a_2029_);
lean_dec(v_a_2029_);
v___x_2031_ = lean_ptr_addr(v_self_1766_);
v___x_2032_ = lean_usize_dec_eq(v___x_2030_, v___x_2031_);
if (v___x_2032_ == 0)
{
lean_object* v___x_2033_; 
lean_inc(v_a_1737_);
lean_inc_ref(v_a_1736_);
lean_inc(v_a_1735_);
lean_inc_ref(v_a_1734_);
lean_inc(v_a_1733_);
lean_inc_ref(v_a_1732_);
lean_inc(v_a_1731_);
lean_inc_ref(v_a_1730_);
lean_inc(v_a_1729_);
lean_inc(v_a_1728_);
lean_inc_ref(v_arg_1758_);
v___x_2033_ = lean_grind_mk_eq_proof(v_arg_1758_, v_a_1964_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_);
if (lean_obj_tag(v___x_2033_) == 0)
{
lean_object* v_a_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; 
v_a_2034_ = lean_ctor_get(v___x_2033_, 0);
lean_inc(v_a_2034_);
lean_dec_ref_known(v___x_2033_, 1);
v___x_2035_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__12, &l_Lean_Meta_Grind_propagateEqUp___closed__12_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__12);
lean_inc_ref_n(v_arg_1757_, 2);
lean_inc_ref(v_arg_1758_);
v___x_2036_ = l_Lean_mkApp3(v___x_2035_, v_arg_1758_, v_arg_1757_, v_a_2034_);
lean_inc_ref(v_e_1727_);
v___x_2037_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_1727_, v_arg_1757_, v___x_2036_, v___x_2032_, v_a_1728_, v_a_1730_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_dec_ref_known(v___x_2037_, 1);
v___y_1817_ = v_a_1728_;
v___y_1818_ = v_a_1729_;
v___y_1819_ = v_a_1730_;
v___y_1820_ = v_a_1731_;
v___y_1821_ = v_a_1732_;
v___y_1822_ = v_a_1733_;
v___y_1823_ = v_a_1734_;
v___y_1824_ = v_a_1735_;
v___y_1825_ = v_a_1736_;
v___y_1826_ = v_a_1737_;
goto v___jp_1816_;
}
else
{
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
return v___x_2037_;
}
}
else
{
lean_object* v_a_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2045_; 
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_2038_ = lean_ctor_get(v___x_2033_, 0);
v_isSharedCheck_2045_ = !lean_is_exclusive(v___x_2033_);
if (v_isSharedCheck_2045_ == 0)
{
v___x_2040_ = v___x_2033_;
v_isShared_2041_ = v_isSharedCheck_2045_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_a_2038_);
lean_dec(v___x_2033_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2045_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2043_; 
if (v_isShared_2041_ == 0)
{
v___x_2043_ = v___x_2040_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v_a_2038_);
v___x_2043_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
return v___x_2043_;
}
}
}
}
else
{
lean_dec(v_a_1964_);
v___y_1817_ = v_a_1728_;
v___y_1818_ = v_a_1729_;
v___y_1819_ = v_a_1730_;
v___y_1820_ = v_a_1731_;
v___y_1821_ = v_a_1732_;
v___y_1822_ = v_a_1733_;
v___y_1823_ = v_a_1734_;
v___y_1824_ = v_a_1735_;
v___y_1825_ = v_a_1736_;
v___y_1826_ = v_a_1737_;
goto v___jp_1816_;
}
}
else
{
lean_object* v_a_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2053_; 
lean_dec(v_a_1964_);
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_2046_ = lean_ctor_get(v___x_2028_, 0);
v_isSharedCheck_2053_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2053_ == 0)
{
v___x_2048_ = v___x_2028_;
v_isShared_2049_ = v_isSharedCheck_2053_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_a_2046_);
lean_dec(v___x_2028_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2053_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v___x_2051_; 
if (v_isShared_2049_ == 0)
{
v___x_2051_ = v___x_2048_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v_a_2046_);
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
else
{
lean_object* v_a_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2061_; 
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_2054_ = lean_ctor_get(v___x_1963_, 0);
v_isSharedCheck_2061_ = !lean_is_exclusive(v___x_1963_);
if (v_isSharedCheck_2061_ == 0)
{
v___x_2056_ = v___x_1963_;
v_isShared_2057_ = v_isSharedCheck_2061_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_a_2054_);
lean_dec(v___x_1963_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2061_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
lean_object* v___x_2059_; 
if (v_isShared_2057_ == 0)
{
v___x_2059_ = v___x_2056_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v_a_2054_);
v___x_2059_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
return v___x_2059_;
}
}
}
v___jp_1768_:
{
size_t v___x_1782_; size_t v___x_1783_; uint8_t v___x_1784_; 
v___x_1782_ = lean_ptr_addr(v_self_1764_);
lean_dec_ref(v_self_1764_);
v___x_1783_ = lean_ptr_addr(v___y_1770_);
lean_dec_ref(v___y_1770_);
v___x_1784_ = lean_usize_dec_eq(v___x_1782_, v___x_1783_);
if (v___x_1784_ == 0)
{
lean_dec_ref(v___y_1778_);
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
goto v___jp_1742_;
}
else
{
size_t v___x_1785_; size_t v___x_1786_; uint8_t v___x_1787_; 
v___x_1785_ = lean_ptr_addr(v_self_1766_);
lean_dec_ref(v_self_1766_);
v___x_1786_ = lean_ptr_addr(v___y_1778_);
lean_dec_ref(v___y_1778_);
v___x_1787_ = lean_usize_dec_eq(v___x_1785_, v___x_1786_);
if (v___x_1787_ == 0)
{
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
goto v___jp_1742_;
}
else
{
lean_object* v___x_1788_; 
lean_inc_ref(v_arg_1758_);
v___x_1788_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_arg_1758_, v___y_1769_, v___y_1779_, v___y_1781_, v___y_1776_, v___y_1775_, v___y_1773_, v___y_1771_, v___y_1774_, v___y_1780_, v___y_1772_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v_a_1789_; lean_object* v___x_1790_; 
v_a_1789_ = lean_ctor_get(v___x_1788_, 0);
lean_inc(v_a_1789_);
lean_dec_ref_known(v___x_1788_, 1);
lean_inc_ref(v_arg_1757_);
v___x_1790_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_arg_1757_, v___y_1769_, v___y_1779_, v___y_1781_, v___y_1776_, v___y_1775_, v___y_1773_, v___y_1771_, v___y_1774_, v___y_1780_, v___y_1772_);
if (lean_obj_tag(v___x_1790_) == 0)
{
lean_object* v_a_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; 
v_a_1791_ = lean_ctor_get(v___x_1790_, 0);
lean_inc(v_a_1791_);
lean_dec_ref_known(v___x_1790_, 1);
v___x_1792_ = ((lean_object*)(l_Lean_Meta_Grind_propagateAndUp___closed__2));
v___x_1793_ = ((lean_object*)(l_Lean_Meta_Grind_propagateAndUp___closed__3));
v___x_1794_ = ((lean_object*)(l_Lean_Meta_Grind_propagateEqUp___closed__2));
lean_inc_ref(v___y_1777_);
v___x_1795_ = l_Lean_Name_mkStr4(v___x_1792_, v___x_1793_, v___y_1777_, v___x_1794_);
v___x_1796_ = lean_box(0);
v___x_1797_ = l_Lean_mkConst(v___x_1795_, v___x_1796_);
v___x_1798_ = l_Lean_mkApp4(v___x_1797_, v_arg_1758_, v_arg_1757_, v_a_1789_, v_a_1791_);
v___x_1799_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_1727_, v___x_1798_, v___y_1769_, v___y_1781_, v___y_1775_, v___y_1771_, v___y_1774_, v___y_1780_, v___y_1772_);
return v___x_1799_;
}
else
{
lean_object* v_a_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1807_; 
lean_dec(v_a_1789_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_1800_ = lean_ctor_get(v___x_1790_, 0);
v_isSharedCheck_1807_ = !lean_is_exclusive(v___x_1790_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1802_ = v___x_1790_;
v_isShared_1803_ = v_isSharedCheck_1807_;
goto v_resetjp_1801_;
}
else
{
lean_inc(v_a_1800_);
lean_dec(v___x_1790_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1807_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
lean_object* v___x_1805_; 
if (v_isShared_1803_ == 0)
{
v___x_1805_ = v___x_1802_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v_a_1800_);
v___x_1805_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
return v___x_1805_;
}
}
}
}
else
{
lean_object* v_a_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1815_; 
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_1808_ = lean_ctor_get(v___x_1788_, 0);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1788_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1810_ = v___x_1788_;
v_isShared_1811_ = v_isSharedCheck_1815_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_a_1808_);
lean_dec(v___x_1788_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1815_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v___x_1813_; 
if (v_isShared_1811_ == 0)
{
v___x_1813_ = v___x_1810_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_a_1808_);
v___x_1813_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
return v___x_1813_;
}
}
}
}
}
}
v___jp_1816_:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; uint8_t v___x_1829_; 
v___x_1827_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolDiseq___closed__0));
v___x_1828_ = ((lean_object*)(l_Lean_Meta_Grind_propagateEqUp___closed__3));
v___x_1829_ = l_Lean_Expr_isConstOf(v_arg_1759_, v___x_1828_);
lean_dec_ref(v_arg_1759_);
if (v___x_1829_ == 0)
{
lean_object* v___x_1830_; 
lean_inc_ref(v_e_1727_);
v___x_1830_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_1727_, v___y_1817_, v___y_1821_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_object* v_a_1831_; uint8_t v___x_1832_; 
v_a_1831_ = lean_ctor_get(v___x_1830_, 0);
lean_inc(v_a_1831_);
lean_dec_ref_known(v___x_1830_, 1);
v___x_1832_ = lean_unbox(v_a_1831_);
if (v___x_1832_ == 0)
{
if (v_ctor_1765_ == 0)
{
lean_dec(v_a_1831_);
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
goto v___jp_1739_;
}
else
{
if (v_ctor_1767_ == 0)
{
lean_dec(v_a_1831_);
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
goto v___jp_1739_;
}
else
{
lean_object* v___x_1833_; lean_object* v___x_1834_; uint8_t v___x_1835_; 
v___x_1833_ = l_Lean_Expr_getAppFn(v_self_1764_);
v___x_1834_ = l_Lean_Expr_getAppFn(v_self_1766_);
v___x_1835_ = lean_expr_eqv(v___x_1833_, v___x_1834_);
lean_dec_ref(v___x_1834_);
lean_dec_ref(v___x_1833_);
if (v___x_1835_ == 0)
{
lean_object* v___x_1836_; lean_object* v___f_1837_; lean_object* v___x_1838_; 
v___x_1836_ = lean_box(v_ctor_1767_);
lean_inc_ref(v_self_1766_);
lean_inc_ref(v_arg_1757_);
lean_inc_ref(v_arg_1758_);
lean_inc_ref(v_self_1764_);
lean_inc(v_a_1831_);
v___f_1837_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateEqUp___lam__0___boxed), 18, 6);
lean_closure_set(v___f_1837_, 0, v_a_1831_);
lean_closure_set(v___f_1837_, 1, v___x_1836_);
lean_closure_set(v___f_1837_, 2, v_self_1764_);
lean_closure_set(v___f_1837_, 3, v_arg_1758_);
lean_closure_set(v___f_1837_, 4, v_arg_1757_);
lean_closure_set(v___f_1837_, 5, v_self_1766_);
v___x_1838_ = l_Lean_Meta_Grind_hasSameType(v_self_1764_, v_self_1766_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
if (lean_obj_tag(v___x_1838_) == 0)
{
lean_object* v_a_1839_; uint8_t v___x_1840_; 
v_a_1839_ = lean_ctor_get(v___x_1838_, 0);
lean_inc(v_a_1839_);
lean_dec_ref_known(v___x_1838_, 1);
v___x_1840_ = lean_unbox(v_a_1839_);
lean_dec(v_a_1839_);
if (v___x_1840_ == 0)
{
lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; uint8_t v___x_1844_; lean_object* v___x_1845_; 
lean_dec_ref(v___f_1837_);
v___x_1841_ = lean_box(0);
v___x_1842_ = lean_box(0);
lean_inc_ref(v_arg_1758_);
v___x_1843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1843_, 0, v___x_1842_);
lean_ctor_set(v___x_1843_, 1, v_arg_1758_);
v___x_1844_ = lean_unbox(v_a_1831_);
lean_dec(v_a_1831_);
v___x_1845_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__2___redArg(v_arg_1758_, v_arg_1757_, v___x_1844_, v_ctor_1767_, v_e_1727_, v___x_1843_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
if (lean_obj_tag(v___x_1845_) == 0)
{
lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1852_; 
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1852_ == 0)
{
lean_object* v_unused_1853_; 
v_unused_1853_ = lean_ctor_get(v___x_1845_, 0);
lean_dec(v_unused_1853_);
v___x_1847_ = v___x_1845_;
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
else
{
lean_dec(v___x_1845_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1850_; 
if (v_isShared_1848_ == 0)
{
lean_ctor_set(v___x_1847_, 0, v___x_1841_);
v___x_1850_ = v___x_1847_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v___x_1841_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
else
{
lean_object* v_a_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1861_; 
v_a_1854_ = lean_ctor_get(v___x_1845_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1856_ = v___x_1845_;
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_a_1854_);
lean_dec(v___x_1845_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1859_; 
if (v_isShared_1857_ == 0)
{
v___x_1859_ = v___x_1856_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_a_1854_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
}
else
{
lean_object* v___x_1862_; 
lean_dec(v_a_1831_);
v___x_1862_ = l_Lean_Meta_mkEq(v_arg_1758_, v_arg_1757_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
if (lean_obj_tag(v___x_1862_) == 0)
{
lean_object* v_a_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; 
v_a_1863_ = lean_ctor_get(v___x_1862_, 0);
lean_inc(v_a_1863_);
lean_dec_ref_known(v___x_1862_, 1);
v___x_1864_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__1));
v___x_1865_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg(v___x_1864_, v_a_1863_, v___f_1837_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
if (lean_obj_tag(v___x_1865_) == 0)
{
lean_object* v_a_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v_a_1866_ = lean_ctor_get(v___x_1865_, 0);
lean_inc(v_a_1866_);
lean_dec_ref_known(v___x_1865_, 1);
v___x_1867_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__4, &l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__4_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg___closed__4);
lean_inc_ref(v_e_1727_);
v___x_1868_ = l_Lean_mkAppB(v___x_1867_, v_e_1727_, v_a_1866_);
v___x_1869_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_1727_, v___x_1868_, v___y_1817_, v___y_1819_, v___y_1821_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
return v___x_1869_;
}
else
{
lean_object* v_a_1870_; lean_object* v___x_1872_; uint8_t v_isShared_1873_; uint8_t v_isSharedCheck_1877_; 
lean_dec_ref(v_e_1727_);
v_a_1870_ = lean_ctor_get(v___x_1865_, 0);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___x_1865_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1872_ = v___x_1865_;
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_a_1870_);
lean_dec(v___x_1865_);
v___x_1872_ = lean_box(0);
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
v_resetjp_1871_:
{
lean_object* v___x_1875_; 
if (v_isShared_1873_ == 0)
{
v___x_1875_ = v___x_1872_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_a_1870_);
v___x_1875_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
return v___x_1875_;
}
}
}
}
else
{
lean_object* v_a_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1885_; 
lean_dec_ref(v___f_1837_);
lean_dec_ref(v_e_1727_);
v_a_1878_ = lean_ctor_get(v___x_1862_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1862_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1880_ = v___x_1862_;
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_a_1878_);
lean_dec(v___x_1862_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1883_; 
if (v_isShared_1881_ == 0)
{
v___x_1883_ = v___x_1880_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v_a_1878_);
v___x_1883_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
return v___x_1883_;
}
}
}
}
}
else
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
lean_dec_ref(v___f_1837_);
lean_dec(v_a_1831_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_1886_ = lean_ctor_get(v___x_1838_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1838_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1838_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1838_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_a_1886_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
}
else
{
lean_dec(v_a_1831_);
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
goto v___jp_1739_;
}
}
}
}
else
{
lean_dec(v_a_1831_);
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
goto v___jp_1739_;
}
}
else
{
lean_object* v_a_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1901_; 
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_1894_ = lean_ctor_get(v___x_1830_, 0);
v_isSharedCheck_1901_ = !lean_is_exclusive(v___x_1830_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1896_ = v___x_1830_;
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_a_1894_);
lean_dec(v___x_1830_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1899_; 
if (v_isShared_1897_ == 0)
{
v___x_1899_ = v___x_1896_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v_a_1894_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
return v___x_1899_;
}
}
}
}
else
{
lean_object* v___x_1902_; 
lean_inc_ref(v_e_1727_);
v___x_1902_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_1727_, v___y_1817_, v___y_1821_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
if (lean_obj_tag(v___x_1902_) == 0)
{
lean_object* v_a_1903_; uint8_t v___x_1904_; 
v_a_1903_ = lean_ctor_get(v___x_1902_, 0);
lean_inc(v_a_1903_);
lean_dec_ref_known(v___x_1902_, 1);
v___x_1904_ = lean_unbox(v_a_1903_);
lean_dec(v_a_1903_);
if (v___x_1904_ == 0)
{
lean_object* v___x_1905_; 
v___x_1905_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v___y_1821_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_a_1906_; lean_object* v___x_1907_; 
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
lean_inc(v_a_1906_);
lean_dec_ref_known(v___x_1905_, 1);
v___x_1907_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v___y_1821_);
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_object* v_a_1908_; size_t v___x_1909_; size_t v___x_1910_; uint8_t v___x_1911_; 
v_a_1908_ = lean_ctor_get(v___x_1907_, 0);
lean_inc(v_a_1908_);
lean_dec_ref_known(v___x_1907_, 1);
v___x_1909_ = lean_ptr_addr(v_self_1764_);
v___x_1910_ = lean_ptr_addr(v_a_1906_);
v___x_1911_ = lean_usize_dec_eq(v___x_1909_, v___x_1910_);
if (v___x_1911_ == 0)
{
v___y_1769_ = v___y_1817_;
v___y_1770_ = v_a_1908_;
v___y_1771_ = v___y_1823_;
v___y_1772_ = v___y_1826_;
v___y_1773_ = v___y_1822_;
v___y_1774_ = v___y_1824_;
v___y_1775_ = v___y_1821_;
v___y_1776_ = v___y_1820_;
v___y_1777_ = v___x_1827_;
v___y_1778_ = v_a_1906_;
v___y_1779_ = v___y_1818_;
v___y_1780_ = v___y_1825_;
v___y_1781_ = v___y_1819_;
goto v___jp_1768_;
}
else
{
size_t v___x_1912_; size_t v___x_1913_; uint8_t v___x_1914_; 
v___x_1912_ = lean_ptr_addr(v_self_1766_);
v___x_1913_ = lean_ptr_addr(v_a_1908_);
v___x_1914_ = lean_usize_dec_eq(v___x_1912_, v___x_1913_);
if (v___x_1914_ == 0)
{
v___y_1769_ = v___y_1817_;
v___y_1770_ = v_a_1908_;
v___y_1771_ = v___y_1823_;
v___y_1772_ = v___y_1826_;
v___y_1773_ = v___y_1822_;
v___y_1774_ = v___y_1824_;
v___y_1775_ = v___y_1821_;
v___y_1776_ = v___y_1820_;
v___y_1777_ = v___x_1827_;
v___y_1778_ = v_a_1906_;
v___y_1779_ = v___y_1818_;
v___y_1780_ = v___y_1825_;
v___y_1781_ = v___y_1819_;
goto v___jp_1768_;
}
else
{
lean_object* v___x_1915_; 
lean_dec(v_a_1908_);
lean_dec(v_a_1906_);
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_inc_ref(v_arg_1758_);
v___x_1915_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_arg_1758_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1917_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_a_1916_);
lean_dec_ref_known(v___x_1915_, 1);
lean_inc_ref(v_arg_1757_);
v___x_1917_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_arg_1757_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
if (lean_obj_tag(v___x_1917_) == 0)
{
lean_object* v_a_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v_a_1918_ = lean_ctor_get(v___x_1917_, 0);
lean_inc(v_a_1918_);
lean_dec_ref_known(v___x_1917_, 1);
v___x_1919_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__6, &l_Lean_Meta_Grind_propagateEqUp___closed__6_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__6);
v___x_1920_ = l_Lean_mkApp4(v___x_1919_, v_arg_1758_, v_arg_1757_, v_a_1916_, v_a_1918_);
v___x_1921_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_1727_, v___x_1920_, v___y_1817_, v___y_1819_, v___y_1821_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
return v___x_1921_;
}
else
{
lean_object* v_a_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1929_; 
lean_dec(v_a_1916_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_1922_ = lean_ctor_get(v___x_1917_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1924_ = v___x_1917_;
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_a_1922_);
lean_dec(v___x_1917_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___x_1927_; 
if (v_isShared_1925_ == 0)
{
v___x_1927_ = v___x_1924_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v_a_1922_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
}
}
else
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1937_; 
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_1930_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1932_ = v___x_1915_;
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1915_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1935_; 
if (v_isShared_1933_ == 0)
{
v___x_1935_ = v___x_1932_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_a_1930_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
}
}
}
else
{
lean_object* v_a_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1945_; 
lean_dec(v_a_1906_);
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_1938_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1940_ = v___x_1907_;
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_a_1938_);
lean_dec(v___x_1907_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1943_; 
if (v_isShared_1941_ == 0)
{
v___x_1943_ = v___x_1940_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_a_1938_);
v___x_1943_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
return v___x_1943_;
}
}
}
}
else
{
lean_object* v_a_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1953_; 
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_1946_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1948_ = v___x_1905_;
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_a_1946_);
lean_dec(v___x_1905_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v___x_1951_; 
if (v_isShared_1949_ == 0)
{
v___x_1951_ = v___x_1948_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_a_1946_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
else
{
lean_object* v___x_1954_; 
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
v___x_1954_ = l_Lean_Meta_Grind_propagateBoolDiseq(v_e_1727_, v_arg_1758_, v_arg_1757_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
return v___x_1954_;
}
}
else
{
lean_object* v_a_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1962_; 
lean_dec_ref(v_self_1766_);
lean_dec_ref(v_self_1764_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_1955_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1962_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1962_ == 0)
{
v___x_1957_ = v___x_1902_;
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_a_1955_);
lean_dec(v___x_1902_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1960_; 
if (v_isShared_1958_ == 0)
{
v___x_1960_ = v___x_1957_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v_a_1955_);
v___x_1960_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
return v___x_1960_;
}
}
}
}
}
}
else
{
lean_object* v_a_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2069_; 
lean_dec(v_a_1761_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_2062_ = lean_ctor_get(v___x_1762_, 0);
v_isSharedCheck_2069_ = !lean_is_exclusive(v___x_1762_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2064_ = v___x_1762_;
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_a_2062_);
lean_dec(v___x_1762_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
if (v_isShared_2065_ == 0)
{
v___x_2067_ = v___x_2064_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v_a_2062_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
return v___x_2067_;
}
}
}
}
else
{
lean_object* v_a_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2077_; 
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_arg_1758_);
lean_dec_ref(v_arg_1757_);
lean_dec_ref(v_e_1727_);
v_a_2070_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2072_ = v___x_1760_;
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_a_2070_);
lean_dec(v___x_1760_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2075_; 
if (v_isShared_2073_ == 0)
{
v___x_2075_ = v___x_2072_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_a_2070_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
}
}
}
v___jp_1739_:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1740_ = lean_box(0);
v___x_1741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1740_);
return v___x_1741_;
}
v___jp_1742_:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1743_ = lean_box(0);
v___x_1744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1744_, 0, v___x_1743_);
return v___x_1744_;
}
v___jp_1745_:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1746_ = lean_box(0);
v___x_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1746_);
return v___x_1747_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp___boxed(lean_object* v_e_2078_, lean_object* v_a_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_){
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l_Lean_Meta_Grind_propagateEqUp(v_e_2078_, v_a_2079_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_, v_a_2088_);
lean_dec(v_a_2088_);
lean_dec_ref(v_a_2087_);
lean_dec(v_a_2086_);
lean_dec_ref(v_a_2085_);
lean_dec(v_a_2084_);
lean_dec_ref(v_a_2083_);
lean_dec(v_a_2082_);
lean_dec_ref(v_a_2081_);
lean_dec(v_a_2080_);
lean_dec(v_a_2079_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0(lean_object* v_00_u03b1_2091_, lean_object* v_name_2092_, uint8_t v_bi_2093_, lean_object* v_type_2094_, lean_object* v_k_2095_, uint8_t v_kind_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_){
_start:
{
lean_object* v___x_2108_; 
v___x_2108_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg(v_name_2092_, v_bi_2093_, v_type_2094_, v_k_2095_, v_kind_2096_, v___y_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
return v___x_2108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___boxed(lean_object** _args){
lean_object* v_00_u03b1_2109_ = _args[0];
lean_object* v_name_2110_ = _args[1];
lean_object* v_bi_2111_ = _args[2];
lean_object* v_type_2112_ = _args[3];
lean_object* v_k_2113_ = _args[4];
lean_object* v_kind_2114_ = _args[5];
lean_object* v___y_2115_ = _args[6];
lean_object* v___y_2116_ = _args[7];
lean_object* v___y_2117_ = _args[8];
lean_object* v___y_2118_ = _args[9];
lean_object* v___y_2119_ = _args[10];
lean_object* v___y_2120_ = _args[11];
lean_object* v___y_2121_ = _args[12];
lean_object* v___y_2122_ = _args[13];
lean_object* v___y_2123_ = _args[14];
lean_object* v___y_2124_ = _args[15];
lean_object* v___y_2125_ = _args[16];
_start:
{
uint8_t v_bi_boxed_2126_; uint8_t v_kind_boxed_2127_; lean_object* v_res_2128_; 
v_bi_boxed_2126_ = lean_unbox(v_bi_2111_);
v_kind_boxed_2127_ = lean_unbox(v_kind_2114_);
v_res_2128_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0(v_00_u03b1_2109_, v_name_2110_, v_bi_boxed_2126_, v_type_2112_, v_k_2113_, v_kind_boxed_2127_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_);
lean_dec(v___y_2124_);
lean_dec_ref(v___y_2123_);
lean_dec(v___y_2122_);
lean_dec_ref(v___y_2121_);
lean_dec(v___y_2120_);
lean_dec_ref(v___y_2119_);
lean_dec(v___y_2118_);
lean_dec_ref(v___y_2117_);
lean_dec(v___y_2116_);
lean_dec(v___y_2115_);
return v_res_2128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0(lean_object* v_00_u03b1_2129_, lean_object* v_name_2130_, lean_object* v_type_2131_, lean_object* v_k_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_){
_start:
{
lean_object* v___x_2144_; 
v___x_2144_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg(v_name_2130_, v_type_2131_, v_k_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_);
return v___x_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___boxed(lean_object* v_00_u03b1_2145_, lean_object* v_name_2146_, lean_object* v_type_2147_, lean_object* v_k_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_){
_start:
{
lean_object* v_res_2160_; 
v_res_2160_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0(v_00_u03b1_2145_, v_name_2146_, v_type_2147_, v_k_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_);
lean_dec(v___y_2158_);
lean_dec_ref(v___y_2157_);
lean_dec(v___y_2156_);
lean_dec_ref(v___y_2155_);
lean_dec(v___y_2154_);
lean_dec_ref(v___y_2153_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
lean_dec(v___y_2150_);
lean_dec(v___y_2149_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1(lean_object* v_a_2161_, lean_object* v_a_2162_, uint8_t v_a_2163_, uint8_t v___y_2164_, lean_object* v_a_2165_, lean_object* v_e_2166_, lean_object* v_inst_2167_, lean_object* v_a_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_){
_start:
{
lean_object* v___x_2180_; 
v___x_2180_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___redArg(v_a_2161_, v_a_2162_, v_a_2163_, v___y_2164_, v_a_2165_, v_e_2166_, v_a_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_, v___y_2178_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1___boxed(lean_object** _args){
lean_object* v_a_2181_ = _args[0];
lean_object* v_a_2182_ = _args[1];
lean_object* v_a_2183_ = _args[2];
lean_object* v___y_2184_ = _args[3];
lean_object* v_a_2185_ = _args[4];
lean_object* v_e_2186_ = _args[5];
lean_object* v_inst_2187_ = _args[6];
lean_object* v_a_2188_ = _args[7];
lean_object* v___y_2189_ = _args[8];
lean_object* v___y_2190_ = _args[9];
lean_object* v___y_2191_ = _args[10];
lean_object* v___y_2192_ = _args[11];
lean_object* v___y_2193_ = _args[12];
lean_object* v___y_2194_ = _args[13];
lean_object* v___y_2195_ = _args[14];
lean_object* v___y_2196_ = _args[15];
lean_object* v___y_2197_ = _args[16];
lean_object* v___y_2198_ = _args[17];
lean_object* v___y_2199_ = _args[18];
_start:
{
uint8_t v_a_129599__boxed_2200_; uint8_t v___y_129600__boxed_2201_; lean_object* v_res_2202_; 
v_a_129599__boxed_2200_ = lean_unbox(v_a_2183_);
v___y_129600__boxed_2201_ = lean_unbox(v___y_2184_);
v_res_2202_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1(v_a_2181_, v_a_2182_, v_a_129599__boxed_2200_, v___y_129600__boxed_2201_, v_a_2185_, v_e_2186_, v_inst_2187_, v_a_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_);
lean_dec(v___y_2198_);
lean_dec_ref(v___y_2197_);
lean_dec(v___y_2196_);
lean_dec_ref(v___y_2195_);
lean_dec(v___y_2194_);
lean_dec_ref(v___y_2193_);
lean_dec(v___y_2192_);
lean_dec_ref(v___y_2191_);
lean_dec(v___y_2190_);
lean_dec(v___y_2189_);
return v_res_2202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__2(lean_object* v_a_2203_, lean_object* v_a_2204_, uint8_t v_a_2205_, uint8_t v___y_2206_, lean_object* v_e_2207_, lean_object* v_inst_2208_, lean_object* v_a_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_){
_start:
{
lean_object* v___x_2221_; 
v___x_2221_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__2___redArg(v_a_2203_, v_a_2204_, v_a_2205_, v___y_2206_, v_e_2207_, v_a_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_);
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__2___boxed(lean_object** _args){
lean_object* v_a_2222_ = _args[0];
lean_object* v_a_2223_ = _args[1];
lean_object* v_a_2224_ = _args[2];
lean_object* v___y_2225_ = _args[3];
lean_object* v_e_2226_ = _args[4];
lean_object* v_inst_2227_ = _args[5];
lean_object* v_a_2228_ = _args[6];
lean_object* v___y_2229_ = _args[7];
lean_object* v___y_2230_ = _args[8];
lean_object* v___y_2231_ = _args[9];
lean_object* v___y_2232_ = _args[10];
lean_object* v___y_2233_ = _args[11];
lean_object* v___y_2234_ = _args[12];
lean_object* v___y_2235_ = _args[13];
lean_object* v___y_2236_ = _args[14];
lean_object* v___y_2237_ = _args[15];
lean_object* v___y_2238_ = _args[16];
lean_object* v___y_2239_ = _args[17];
_start:
{
uint8_t v_a_129652__boxed_2240_; uint8_t v___y_129653__boxed_2241_; lean_object* v_res_2242_; 
v_a_129652__boxed_2240_ = lean_unbox(v_a_2224_);
v___y_129653__boxed_2241_ = lean_unbox(v___y_2225_);
v_res_2242_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__2(v_a_2222_, v_a_2223_, v_a_129652__boxed_2240_, v___y_129653__boxed_2241_, v_e_2226_, v_inst_2227_, v_a_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_);
lean_dec(v___y_2238_);
lean_dec_ref(v___y_2237_);
lean_dec(v___y_2236_);
lean_dec_ref(v___y_2235_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
lean_dec(v___y_2230_);
lean_dec(v___y_2229_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2(lean_object* v_a_2243_, lean_object* v_a_2244_, uint8_t v_a_2245_, uint8_t v___y_2246_, lean_object* v_a_2247_, lean_object* v_e_2248_, lean_object* v_inst_2249_, lean_object* v_a_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_){
_start:
{
lean_object* v___x_2262_; 
v___x_2262_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___redArg(v_a_2243_, v_a_2244_, v_a_2245_, v___y_2246_, v_a_2247_, v_e_2248_, v_a_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___boxed(lean_object** _args){
lean_object* v_a_2263_ = _args[0];
lean_object* v_a_2264_ = _args[1];
lean_object* v_a_2265_ = _args[2];
lean_object* v___y_2266_ = _args[3];
lean_object* v_a_2267_ = _args[4];
lean_object* v_e_2268_ = _args[5];
lean_object* v_inst_2269_ = _args[6];
lean_object* v_a_2270_ = _args[7];
lean_object* v___y_2271_ = _args[8];
lean_object* v___y_2272_ = _args[9];
lean_object* v___y_2273_ = _args[10];
lean_object* v___y_2274_ = _args[11];
lean_object* v___y_2275_ = _args[12];
lean_object* v___y_2276_ = _args[13];
lean_object* v___y_2277_ = _args[14];
lean_object* v___y_2278_ = _args[15];
lean_object* v___y_2279_ = _args[16];
lean_object* v___y_2280_ = _args[17];
lean_object* v___y_2281_ = _args[18];
_start:
{
uint8_t v_a_129702__boxed_2282_; uint8_t v___y_129703__boxed_2283_; lean_object* v_res_2284_; 
v_a_129702__boxed_2282_ = lean_unbox(v_a_2265_);
v___y_129703__boxed_2283_ = lean_unbox(v___y_2266_);
v_res_2284_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2(v_a_2263_, v_a_2264_, v_a_129702__boxed_2282_, v___y_129703__boxed_2283_, v_a_2267_, v_e_2268_, v_inst_2269_, v_a_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
lean_dec(v___y_2276_);
lean_dec_ref(v___y_2275_);
lean_dec(v___y_2274_);
lean_dec_ref(v___y_2273_);
lean_dec(v___y_2272_);
lean_dec(v___y_2271_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqUp___regBuiltin_Lean_Meta_Grind_propagateEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_286357030____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___x_2286_ = ((lean_object*)(l_Lean_Meta_Grind_propagateEqUp___closed__1));
v___x_2287_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateEqUp___boxed), 12, 0);
v___x_2288_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_2286_, v___x_2287_);
return v___x_2288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqUp___regBuiltin_Lean_Meta_Grind_propagateEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_286357030____hygCtx___hyg_9____boxed(lean_object* v_a_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqUp___regBuiltin_Lean_Meta_Grind_propagateEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_286357030____hygCtx___hyg_9_();
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateEqDown_spec__0(lean_object* v_e_2291_, lean_object* v_as_2292_, size_t v_sz_2293_, size_t v_i_2294_, lean_object* v_b_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_){
_start:
{
uint8_t v___x_2307_; 
v___x_2307_ = lean_usize_dec_lt(v_i_2294_, v_sz_2293_);
if (v___x_2307_ == 0)
{
lean_object* v___x_2308_; 
lean_dec_ref(v_e_2291_);
v___x_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2308_, 0, v_b_2295_);
return v___x_2308_;
}
else
{
lean_object* v___x_2309_; lean_object* v_a_2310_; lean_object* v___x_2311_; 
v___x_2309_ = lean_box(0);
v_a_2310_ = lean_array_uget_borrowed(v_as_2292_, v_i_2294_);
lean_inc_ref(v_e_2291_);
lean_inc(v_a_2310_);
v___x_2311_ = l_Lean_Meta_Grind_instantiateExtTheorem(v_a_2310_, v_e_2291_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_);
if (lean_obj_tag(v___x_2311_) == 0)
{
size_t v___x_2312_; size_t v___x_2313_; 
lean_dec_ref_known(v___x_2311_, 1);
v___x_2312_ = ((size_t)1ULL);
v___x_2313_ = lean_usize_add(v_i_2294_, v___x_2312_);
v_i_2294_ = v___x_2313_;
v_b_2295_ = v___x_2309_;
goto _start;
}
else
{
lean_dec_ref(v_e_2291_);
return v___x_2311_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateEqDown_spec__0___boxed(lean_object* v_e_2315_, lean_object* v_as_2316_, lean_object* v_sz_2317_, lean_object* v_i_2318_, lean_object* v_b_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_){
_start:
{
size_t v_sz_boxed_2331_; size_t v_i_boxed_2332_; lean_object* v_res_2333_; 
v_sz_boxed_2331_ = lean_unbox_usize(v_sz_2317_);
lean_dec(v_sz_2317_);
v_i_boxed_2332_ = lean_unbox_usize(v_i_2318_);
lean_dec(v_i_2318_);
v_res_2333_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateEqDown_spec__0(v_e_2315_, v_as_2316_, v_sz_boxed_2331_, v_i_boxed_2332_, v_b_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v___y_2327_);
lean_dec_ref(v___y_2326_);
lean_dec(v___y_2325_);
lean_dec_ref(v___y_2324_);
lean_dec(v___y_2323_);
lean_dec_ref(v___y_2322_);
lean_dec(v___y_2321_);
lean_dec(v___y_2320_);
lean_dec_ref(v_as_2316_);
return v_res_2333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqDown(lean_object* v_e_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_){
_start:
{
lean_object* v___x_2358_; 
lean_inc_ref(v_e_2337_);
v___x_2358_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_2337_, v_a_2338_, v_a_2342_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_);
if (lean_obj_tag(v___x_2358_) == 0)
{
lean_object* v_a_2359_; uint8_t v___x_2360_; 
v_a_2359_ = lean_ctor_get(v___x_2358_, 0);
lean_inc(v_a_2359_);
lean_dec_ref_known(v___x_2358_, 1);
v___x_2360_ = lean_unbox(v_a_2359_);
lean_dec(v_a_2359_);
if (v___x_2360_ == 0)
{
lean_object* v___x_2361_; 
lean_inc_ref(v_e_2337_);
v___x_2361_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_2337_, v_a_2338_, v_a_2342_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_);
if (lean_obj_tag(v___x_2361_) == 0)
{
lean_object* v_a_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2476_; 
v_a_2362_ = lean_ctor_get(v___x_2361_, 0);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2364_ = v___x_2361_;
v_isShared_2365_ = v_isSharedCheck_2476_;
goto v_resetjp_2363_;
}
else
{
lean_inc(v_a_2362_);
lean_dec(v___x_2361_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2476_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
uint8_t v___x_2366_; 
v___x_2366_ = lean_unbox(v_a_2362_);
lean_dec(v_a_2362_);
if (v___x_2366_ == 0)
{
lean_object* v___x_2367_; lean_object* v___x_2369_; 
lean_dec_ref(v_e_2337_);
v___x_2367_ = lean_box(0);
if (v_isShared_2365_ == 0)
{
lean_ctor_set(v___x_2364_, 0, v___x_2367_);
v___x_2369_ = v___x_2364_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v___x_2367_);
v___x_2369_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
return v___x_2369_;
}
}
else
{
lean_object* v___x_2371_; uint8_t v___x_2372_; 
lean_del_object(v___x_2364_);
v___x_2371_ = l_Lean_Expr_cleanupAnnotations(v_e_2337_);
v___x_2372_ = l_Lean_Expr_isApp(v___x_2371_);
if (v___x_2372_ == 0)
{
lean_dec_ref(v___x_2371_);
lean_dec_ref(v_e_2337_);
goto v___jp_2349_;
}
else
{
lean_object* v___x_2373_; uint8_t v___x_2374_; 
v___x_2373_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2371_);
v___x_2374_ = l_Lean_Expr_isApp(v___x_2373_);
if (v___x_2374_ == 0)
{
lean_dec_ref(v___x_2373_);
lean_dec_ref(v___x_2371_);
lean_dec_ref(v_e_2337_);
goto v___jp_2349_;
}
else
{
lean_object* v___x_2375_; uint8_t v___x_2376_; 
v___x_2375_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2373_);
v___x_2376_ = l_Lean_Expr_isApp(v___x_2375_);
if (v___x_2376_ == 0)
{
lean_dec_ref(v___x_2375_);
lean_dec_ref(v___x_2373_);
lean_dec_ref(v___x_2371_);
lean_dec_ref(v_e_2337_);
goto v___jp_2349_;
}
else
{
lean_object* v___x_2377_; lean_object* v___x_2378_; uint8_t v___x_2379_; 
v___x_2377_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2375_);
v___x_2378_ = ((lean_object*)(l_Lean_Meta_Grind_propagateEqUp___closed__1));
v___x_2379_ = l_Lean_Expr_isConstOf(v___x_2377_, v___x_2378_);
lean_dec_ref(v___x_2377_);
if (v___x_2379_ == 0)
{
lean_dec_ref(v___x_2375_);
lean_dec_ref(v___x_2373_);
lean_dec_ref(v___x_2371_);
lean_dec_ref(v_e_2337_);
goto v___jp_2349_;
}
else
{
lean_object* v_arg_2380_; lean_object* v_arg_2381_; lean_object* v_arg_2382_; lean_object* v___y_2384_; lean_object* v___y_2385_; lean_object* v___y_2386_; lean_object* v___y_2387_; lean_object* v___y_2388_; lean_object* v___y_2389_; lean_object* v___y_2390_; lean_object* v___y_2391_; lean_object* v___y_2392_; lean_object* v___y_2393_; lean_object* v___y_2417_; lean_object* v___y_2418_; lean_object* v___y_2419_; lean_object* v___y_2420_; lean_object* v___y_2421_; lean_object* v___y_2422_; lean_object* v___y_2423_; lean_object* v___y_2424_; lean_object* v___y_2425_; lean_object* v___y_2426_; lean_object* v___x_2473_; uint8_t v___x_2474_; 
v_arg_2380_ = lean_ctor_get(v___x_2371_, 1);
lean_inc_ref(v_arg_2380_);
lean_dec_ref(v___x_2371_);
v_arg_2381_ = lean_ctor_get(v___x_2373_, 1);
lean_inc_ref(v_arg_2381_);
lean_dec_ref(v___x_2373_);
v_arg_2382_ = lean_ctor_get(v___x_2375_, 1);
lean_inc_ref(v_arg_2382_);
lean_dec_ref(v___x_2375_);
v___x_2473_ = ((lean_object*)(l_Lean_Meta_Grind_propagateEqUp___closed__3));
v___x_2474_ = l_Lean_Expr_isConstOf(v_arg_2382_, v___x_2473_);
if (v___x_2474_ == 0)
{
v___y_2417_ = v_a_2338_;
v___y_2418_ = v_a_2339_;
v___y_2419_ = v_a_2340_;
v___y_2420_ = v_a_2341_;
v___y_2421_ = v_a_2342_;
v___y_2422_ = v_a_2343_;
v___y_2423_ = v_a_2344_;
v___y_2424_ = v_a_2345_;
v___y_2425_ = v_a_2346_;
v___y_2426_ = v_a_2347_;
goto v___jp_2416_;
}
else
{
lean_object* v___x_2475_; 
lean_inc_ref(v_arg_2380_);
lean_inc_ref(v_arg_2381_);
lean_inc_ref(v_e_2337_);
v___x_2475_ = l_Lean_Meta_Grind_propagateBoolDiseq(v_e_2337_, v_arg_2381_, v_arg_2380_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_);
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_dec_ref_known(v___x_2475_, 1);
v___y_2417_ = v_a_2338_;
v___y_2418_ = v_a_2339_;
v___y_2419_ = v_a_2340_;
v___y_2420_ = v_a_2341_;
v___y_2421_ = v_a_2342_;
v___y_2422_ = v_a_2343_;
v___y_2423_ = v_a_2344_;
v___y_2424_ = v_a_2345_;
v___y_2425_ = v_a_2346_;
v___y_2426_ = v_a_2347_;
goto v___jp_2416_;
}
else
{
lean_dec_ref(v_arg_2382_);
lean_dec_ref(v_arg_2381_);
lean_dec_ref(v_arg_2380_);
lean_dec_ref(v_e_2337_);
return v___x_2475_;
}
}
v___jp_2383_:
{
lean_object* v___x_2394_; 
v___x_2394_ = l_Lean_Meta_Grind_getExtTheorems(v_arg_2382_, v___y_2393_, v___y_2388_, v___y_2392_, v___y_2387_, v___y_2386_, v___y_2390_, v___y_2384_, v___y_2389_, v___y_2385_, v___y_2391_);
if (lean_obj_tag(v___x_2394_) == 0)
{
lean_object* v_a_2395_; lean_object* v___x_2396_; size_t v_sz_2397_; size_t v___x_2398_; lean_object* v___x_2399_; 
v_a_2395_ = lean_ctor_get(v___x_2394_, 0);
lean_inc(v_a_2395_);
lean_dec_ref_known(v___x_2394_, 1);
v___x_2396_ = lean_box(0);
v_sz_2397_ = lean_array_size(v_a_2395_);
v___x_2398_ = ((size_t)0ULL);
v___x_2399_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateEqDown_spec__0(v_e_2337_, v_a_2395_, v_sz_2397_, v___x_2398_, v___x_2396_, v___y_2393_, v___y_2388_, v___y_2392_, v___y_2387_, v___y_2386_, v___y_2390_, v___y_2384_, v___y_2389_, v___y_2385_, v___y_2391_);
lean_dec(v_a_2395_);
if (lean_obj_tag(v___x_2399_) == 0)
{
lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2406_; 
v_isSharedCheck_2406_ = !lean_is_exclusive(v___x_2399_);
if (v_isSharedCheck_2406_ == 0)
{
lean_object* v_unused_2407_; 
v_unused_2407_ = lean_ctor_get(v___x_2399_, 0);
lean_dec(v_unused_2407_);
v___x_2401_ = v___x_2399_;
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
else
{
lean_dec(v___x_2399_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
lean_object* v___x_2404_; 
if (v_isShared_2402_ == 0)
{
lean_ctor_set(v___x_2401_, 0, v___x_2396_);
v___x_2404_ = v___x_2401_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v___x_2396_);
v___x_2404_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
return v___x_2404_;
}
}
}
else
{
return v___x_2399_;
}
}
else
{
lean_object* v_a_2408_; lean_object* v___x_2410_; uint8_t v_isShared_2411_; uint8_t v_isSharedCheck_2415_; 
lean_dec_ref(v_e_2337_);
v_a_2408_ = lean_ctor_get(v___x_2394_, 0);
v_isSharedCheck_2415_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2415_ == 0)
{
v___x_2410_ = v___x_2394_;
v_isShared_2411_ = v_isSharedCheck_2415_;
goto v_resetjp_2409_;
}
else
{
lean_inc(v_a_2408_);
lean_dec(v___x_2394_);
v___x_2410_ = lean_box(0);
v_isShared_2411_ = v_isSharedCheck_2415_;
goto v_resetjp_2409_;
}
v_resetjp_2409_:
{
lean_object* v___x_2413_; 
if (v_isShared_2411_ == 0)
{
v___x_2413_ = v___x_2410_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v_a_2408_);
v___x_2413_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
return v___x_2413_;
}
}
}
}
v___jp_2416_:
{
lean_object* v___x_2427_; 
lean_inc_ref(v_arg_2380_);
lean_inc_ref(v_arg_2381_);
v___x_2427_ = l_Lean_Meta_Grind_Solvers_propagateDiseqs(v_arg_2381_, v_arg_2380_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_);
if (lean_obj_tag(v___x_2427_) == 0)
{
lean_object* v___x_2428_; 
lean_dec_ref_known(v___x_2427_, 1);
lean_inc_ref(v_arg_2382_);
v___x_2428_ = l_Lean_Meta_Grind_getExtTheorems(v_arg_2382_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_);
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_object* v_a_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2464_; 
v_a_2429_ = lean_ctor_get(v___x_2428_, 0);
v_isSharedCheck_2464_ = !lean_is_exclusive(v___x_2428_);
if (v_isSharedCheck_2464_ == 0)
{
v___x_2431_ = v___x_2428_;
v_isShared_2432_ = v_isSharedCheck_2464_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_a_2429_);
lean_dec(v___x_2428_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2464_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2433_; lean_object* v___x_2434_; uint8_t v___x_2435_; 
v___x_2433_ = lean_array_get_size(v_a_2429_);
lean_dec(v_a_2429_);
v___x_2434_ = lean_unsigned_to_nat(0u);
v___x_2435_ = lean_nat_dec_eq(v___x_2433_, v___x_2434_);
if (v___x_2435_ == 0)
{
lean_object* v___x_2436_; 
lean_del_object(v___x_2431_);
v___x_2436_ = l_Lean_Meta_Grind_getRootENode___redArg(v_arg_2381_, v___y_2417_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_);
if (lean_obj_tag(v___x_2436_) == 0)
{
lean_object* v_a_2437_; lean_object* v___x_2438_; 
v_a_2437_ = lean_ctor_get(v___x_2436_, 0);
lean_inc(v_a_2437_);
lean_dec_ref_known(v___x_2436_, 1);
v___x_2438_ = l_Lean_Meta_Grind_getRootENode___redArg(v_arg_2380_, v___y_2417_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_);
if (lean_obj_tag(v___x_2438_) == 0)
{
lean_object* v_a_2439_; lean_object* v___x_2440_; uint8_t v___x_2441_; 
v_a_2439_ = lean_ctor_get(v___x_2438_, 0);
lean_inc(v_a_2439_);
lean_dec_ref_known(v___x_2438_, 1);
v___x_2440_ = ((lean_object*)(l_Lean_Meta_Grind_propagateEqDown___closed__1));
v___x_2441_ = l_Lean_Expr_isAppOf(v_arg_2382_, v___x_2440_);
if (v___x_2441_ == 0)
{
lean_dec(v_a_2439_);
lean_dec(v_a_2437_);
v___y_2384_ = v___y_2423_;
v___y_2385_ = v___y_2425_;
v___y_2386_ = v___y_2421_;
v___y_2387_ = v___y_2420_;
v___y_2388_ = v___y_2418_;
v___y_2389_ = v___y_2424_;
v___y_2390_ = v___y_2422_;
v___y_2391_ = v___y_2426_;
v___y_2392_ = v___y_2419_;
v___y_2393_ = v___y_2417_;
goto v___jp_2383_;
}
else
{
uint8_t v_ctor_2442_; 
v_ctor_2442_ = lean_ctor_get_uint8(v_a_2437_, sizeof(void*)*12 + 2);
lean_dec(v_a_2437_);
if (v_ctor_2442_ == 0)
{
uint8_t v_ctor_2443_; 
v_ctor_2443_ = lean_ctor_get_uint8(v_a_2439_, sizeof(void*)*12 + 2);
lean_dec(v_a_2439_);
if (v_ctor_2443_ == 0)
{
v___y_2384_ = v___y_2423_;
v___y_2385_ = v___y_2425_;
v___y_2386_ = v___y_2421_;
v___y_2387_ = v___y_2420_;
v___y_2388_ = v___y_2418_;
v___y_2389_ = v___y_2424_;
v___y_2390_ = v___y_2422_;
v___y_2391_ = v___y_2426_;
v___y_2392_ = v___y_2419_;
v___y_2393_ = v___y_2417_;
goto v___jp_2383_;
}
else
{
lean_dec_ref(v_arg_2382_);
lean_dec_ref(v_e_2337_);
goto v___jp_2355_;
}
}
else
{
lean_dec(v_a_2439_);
lean_dec_ref(v_arg_2382_);
lean_dec_ref(v_e_2337_);
goto v___jp_2355_;
}
}
}
else
{
lean_object* v_a_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2451_; 
lean_dec(v_a_2437_);
lean_dec_ref(v_arg_2382_);
lean_dec_ref(v_e_2337_);
v_a_2444_ = lean_ctor_get(v___x_2438_, 0);
v_isSharedCheck_2451_ = !lean_is_exclusive(v___x_2438_);
if (v_isSharedCheck_2451_ == 0)
{
v___x_2446_ = v___x_2438_;
v_isShared_2447_ = v_isSharedCheck_2451_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_a_2444_);
lean_dec(v___x_2438_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2451_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2449_; 
if (v_isShared_2447_ == 0)
{
v___x_2449_ = v___x_2446_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v_a_2444_);
v___x_2449_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
return v___x_2449_;
}
}
}
}
else
{
lean_object* v_a_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2459_; 
lean_dec_ref(v_arg_2382_);
lean_dec_ref(v_arg_2380_);
lean_dec_ref(v_e_2337_);
v_a_2452_ = lean_ctor_get(v___x_2436_, 0);
v_isSharedCheck_2459_ = !lean_is_exclusive(v___x_2436_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2454_ = v___x_2436_;
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_a_2452_);
lean_dec(v___x_2436_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v___x_2457_; 
if (v_isShared_2455_ == 0)
{
v___x_2457_ = v___x_2454_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_a_2452_);
v___x_2457_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
return v___x_2457_;
}
}
}
}
else
{
lean_object* v___x_2460_; lean_object* v___x_2462_; 
lean_dec_ref(v_arg_2382_);
lean_dec_ref(v_arg_2381_);
lean_dec_ref(v_arg_2380_);
lean_dec_ref(v_e_2337_);
v___x_2460_ = lean_box(0);
if (v_isShared_2432_ == 0)
{
lean_ctor_set(v___x_2431_, 0, v___x_2460_);
v___x_2462_ = v___x_2431_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v___x_2460_);
v___x_2462_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
return v___x_2462_;
}
}
}
}
else
{
lean_object* v_a_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2472_; 
lean_dec_ref(v_arg_2382_);
lean_dec_ref(v_arg_2381_);
lean_dec_ref(v_arg_2380_);
lean_dec_ref(v_e_2337_);
v_a_2465_ = lean_ctor_get(v___x_2428_, 0);
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2428_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2467_ = v___x_2428_;
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_a_2465_);
lean_dec(v___x_2428_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v___x_2470_; 
if (v_isShared_2468_ == 0)
{
v___x_2470_ = v___x_2467_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_a_2465_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
}
else
{
lean_dec_ref(v_arg_2382_);
lean_dec_ref(v_arg_2381_);
lean_dec_ref(v_arg_2380_);
lean_dec_ref(v_e_2337_);
return v___x_2427_;
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
lean_object* v_a_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2484_; 
lean_dec_ref(v_e_2337_);
v_a_2477_ = lean_ctor_get(v___x_2361_, 0);
v_isSharedCheck_2484_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2484_ == 0)
{
v___x_2479_ = v___x_2361_;
v_isShared_2480_ = v_isSharedCheck_2484_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_a_2477_);
lean_dec(v___x_2361_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2484_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v___x_2482_; 
if (v_isShared_2480_ == 0)
{
v___x_2482_ = v___x_2479_;
goto v_reusejp_2481_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v_a_2477_);
v___x_2482_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2481_;
}
v_reusejp_2481_:
{
return v___x_2482_;
}
}
}
}
else
{
lean_object* v___x_2485_; uint8_t v___x_2486_; 
v___x_2485_ = l_Lean_Expr_cleanupAnnotations(v_e_2337_);
v___x_2486_ = l_Lean_Expr_isApp(v___x_2485_);
if (v___x_2486_ == 0)
{
lean_dec_ref(v___x_2485_);
lean_dec_ref(v_e_2337_);
goto v___jp_2352_;
}
else
{
lean_object* v___x_2487_; uint8_t v___x_2488_; 
v___x_2487_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2485_);
v___x_2488_ = l_Lean_Expr_isApp(v___x_2487_);
if (v___x_2488_ == 0)
{
lean_dec_ref(v___x_2487_);
lean_dec_ref(v___x_2485_);
lean_dec_ref(v_e_2337_);
goto v___jp_2352_;
}
else
{
lean_object* v___x_2489_; uint8_t v___x_2490_; 
v___x_2489_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2487_);
v___x_2490_ = l_Lean_Expr_isApp(v___x_2489_);
if (v___x_2490_ == 0)
{
lean_dec_ref(v___x_2489_);
lean_dec_ref(v___x_2487_);
lean_dec_ref(v___x_2485_);
lean_dec_ref(v_e_2337_);
goto v___jp_2352_;
}
else
{
lean_object* v___x_2491_; lean_object* v___x_2492_; uint8_t v___x_2493_; 
v___x_2491_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2489_);
lean_dec_ref(v___x_2489_);
v___x_2492_ = ((lean_object*)(l_Lean_Meta_Grind_propagateEqUp___closed__1));
v___x_2493_ = l_Lean_Expr_isConstOf(v___x_2491_, v___x_2492_);
lean_dec_ref(v___x_2491_);
if (v___x_2493_ == 0)
{
lean_dec_ref(v___x_2487_);
lean_dec_ref(v___x_2485_);
lean_dec_ref(v_e_2337_);
goto v___jp_2352_;
}
else
{
lean_object* v_arg_2494_; lean_object* v_arg_2495_; lean_object* v___x_2496_; 
v_arg_2494_ = lean_ctor_get(v___x_2485_, 1);
lean_inc_ref(v_arg_2494_);
lean_dec_ref(v___x_2485_);
v_arg_2495_ = lean_ctor_get(v___x_2487_, 1);
lean_inc_ref(v_arg_2495_);
lean_dec_ref(v___x_2487_);
v___x_2496_ = l_Lean_Meta_Grind_isEqv___redArg(v_arg_2495_, v_arg_2494_, v_a_2338_);
if (lean_obj_tag(v___x_2496_) == 0)
{
lean_object* v_a_2497_; lean_object* v___x_2499_; uint8_t v_isShared_2500_; uint8_t v_isSharedCheck_2519_; 
v_a_2497_ = lean_ctor_get(v___x_2496_, 0);
v_isSharedCheck_2519_ = !lean_is_exclusive(v___x_2496_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2499_ = v___x_2496_;
v_isShared_2500_ = v_isSharedCheck_2519_;
goto v_resetjp_2498_;
}
else
{
lean_inc(v_a_2497_);
lean_dec(v___x_2496_);
v___x_2499_ = lean_box(0);
v_isShared_2500_ = v_isSharedCheck_2519_;
goto v_resetjp_2498_;
}
v_resetjp_2498_:
{
uint8_t v___x_2501_; 
v___x_2501_ = lean_unbox(v_a_2497_);
if (v___x_2501_ == 0)
{
lean_object* v___x_2502_; 
lean_del_object(v___x_2499_);
lean_inc_ref(v_e_2337_);
v___x_2502_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_2337_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_);
if (lean_obj_tag(v___x_2502_) == 0)
{
lean_object* v_a_2503_; lean_object* v___x_2504_; uint8_t v___x_2505_; lean_object* v___x_2506_; 
v_a_2503_ = lean_ctor_get(v___x_2502_, 0);
lean_inc(v_a_2503_);
lean_dec_ref_known(v___x_2502_, 1);
v___x_2504_ = l_Lean_Meta_mkOfEqTrueCore(v_e_2337_, v_a_2503_);
v___x_2505_ = lean_unbox(v_a_2497_);
lean_dec(v_a_2497_);
v___x_2506_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_arg_2495_, v_arg_2494_, v___x_2504_, v___x_2505_, v_a_2338_, v_a_2340_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_);
return v___x_2506_;
}
else
{
lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2514_; 
lean_dec(v_a_2497_);
lean_dec_ref(v_arg_2495_);
lean_dec_ref(v_arg_2494_);
lean_dec_ref(v_e_2337_);
v_a_2507_ = lean_ctor_get(v___x_2502_, 0);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2502_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2509_ = v___x_2502_;
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v___x_2502_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2512_; 
if (v_isShared_2510_ == 0)
{
v___x_2512_ = v___x_2509_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v_a_2507_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
}
else
{
lean_object* v___x_2515_; lean_object* v___x_2517_; 
lean_dec(v_a_2497_);
lean_dec_ref(v_arg_2495_);
lean_dec_ref(v_arg_2494_);
lean_dec_ref(v_e_2337_);
v___x_2515_ = lean_box(0);
if (v_isShared_2500_ == 0)
{
lean_ctor_set(v___x_2499_, 0, v___x_2515_);
v___x_2517_ = v___x_2499_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v___x_2515_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
return v___x_2517_;
}
}
}
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2527_; 
lean_dec_ref(v_arg_2495_);
lean_dec_ref(v_arg_2494_);
lean_dec_ref(v_e_2337_);
v_a_2520_ = lean_ctor_get(v___x_2496_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2496_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2522_ = v___x_2496_;
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2496_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2525_; 
if (v_isShared_2523_ == 0)
{
v___x_2525_ = v___x_2522_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_a_2520_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
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
lean_object* v_a_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2535_; 
lean_dec_ref(v_e_2337_);
v_a_2528_ = lean_ctor_get(v___x_2358_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2358_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2530_ = v___x_2358_;
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_a_2528_);
lean_dec(v___x_2358_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2533_; 
if (v_isShared_2531_ == 0)
{
v___x_2533_ = v___x_2530_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_a_2528_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
return v___x_2533_;
}
}
}
v___jp_2349_:
{
lean_object* v___x_2350_; lean_object* v___x_2351_; 
v___x_2350_ = lean_box(0);
v___x_2351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2350_);
return v___x_2351_;
}
v___jp_2352_:
{
lean_object* v___x_2353_; lean_object* v___x_2354_; 
v___x_2353_ = lean_box(0);
v___x_2354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2354_, 0, v___x_2353_);
return v___x_2354_;
}
v___jp_2355_:
{
lean_object* v___x_2356_; lean_object* v___x_2357_; 
v___x_2356_ = lean_box(0);
v___x_2357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2357_, 0, v___x_2356_);
return v___x_2357_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqDown___boxed(lean_object* v_e_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_){
_start:
{
lean_object* v_res_2548_; 
v_res_2548_ = l_Lean_Meta_Grind_propagateEqDown(v_e_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_, v_a_2542_, v_a_2543_, v_a_2544_, v_a_2545_, v_a_2546_);
lean_dec(v_a_2546_);
lean_dec_ref(v_a_2545_);
lean_dec(v_a_2544_);
lean_dec_ref(v_a_2543_);
lean_dec(v_a_2542_);
lean_dec_ref(v_a_2541_);
lean_dec(v_a_2540_);
lean_dec_ref(v_a_2539_);
lean_dec(v_a_2538_);
lean_dec(v_a_2537_);
return v_res_2548_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqDown___regBuiltin_Lean_Meta_Grind_propagateEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2318196400____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2550_ = ((lean_object*)(l_Lean_Meta_Grind_propagateEqUp___closed__1));
v___x_2551_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateEqDown___boxed), 12, 0);
v___x_2552_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_2550_, v___x_2551_);
return v___x_2552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqDown___regBuiltin_Lean_Meta_Grind_propagateEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2318196400____hygCtx___hyg_9____boxed(lean_object* v_a_2553_){
_start:
{
lean_object* v_res_2554_; 
v_res_2554_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqDown___regBuiltin_Lean_Meta_Grind_propagateEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2318196400____hygCtx___hyg_9_();
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(lean_object* v_u_2558_, lean_object* v_00_u03b1_2559_, lean_object* v_binst_2560_, lean_object* v_a_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_){
_start:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___x_2566_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__1));
v___x_2567_ = l_Lean_mkConst(v___x_2566_, v_u_2558_);
v___x_2568_ = l_Lean_mkAppB(v___x_2567_, v_00_u03b1_2559_, v_binst_2560_);
v___x_2569_ = lean_box(0);
v___x_2570_ = l_Lean_Meta_synthInstance_x3f(v___x_2568_, v___x_2569_, v_a_2561_, v_a_2562_, v_a_2563_, v_a_2564_);
return v___x_2570_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___boxed(lean_object* v_u_2571_, lean_object* v_00_u03b1_2572_, lean_object* v_binst_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_, lean_object* v_a_2577_, lean_object* v_a_2578_){
_start:
{
lean_object* v_res_2579_; 
v_res_2579_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(v_u_2571_, v_00_u03b1_2572_, v_binst_2573_, v_a_2574_, v_a_2575_, v_a_2576_, v_a_2577_);
lean_dec(v_a_2577_);
lean_dec_ref(v_a_2576_);
lean_dec(v_a_2575_);
lean_dec_ref(v_a_2574_);
return v_res_2579_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f(lean_object* v_u_2580_, lean_object* v_00_u03b1_2581_, lean_object* v_binst_2582_, lean_object* v_a_2583_, lean_object* v_a_2584_, lean_object* v_a_2585_, lean_object* v_a_2586_, lean_object* v_a_2587_, lean_object* v_a_2588_, lean_object* v_a_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_){
_start:
{
lean_object* v___x_2594_; 
v___x_2594_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(v_u_2580_, v_00_u03b1_2581_, v_binst_2582_, v_a_2589_, v_a_2590_, v_a_2591_, v_a_2592_);
return v___x_2594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___boxed(lean_object* v_u_2595_, lean_object* v_00_u03b1_2596_, lean_object* v_binst_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_, lean_object* v_a_2607_, lean_object* v_a_2608_){
_start:
{
lean_object* v_res_2609_; 
v_res_2609_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f(v_u_2595_, v_00_u03b1_2596_, v_binst_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_, v_a_2605_, v_a_2606_, v_a_2607_);
lean_dec(v_a_2607_);
lean_dec_ref(v_a_2606_);
lean_dec(v_a_2605_);
lean_dec_ref(v_a_2604_);
lean_dec(v_a_2603_);
lean_dec_ref(v_a_2602_);
lean_dec(v_a_2601_);
lean_dec_ref(v_a_2600_);
lean_dec(v_a_2599_);
lean_dec(v_a_2598_);
return v_res_2609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqUp(lean_object* v_e_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_, lean_object* v_a_2631_, lean_object* v_a_2632_, lean_object* v_a_2633_, lean_object* v_a_2634_, lean_object* v_a_2635_){
_start:
{
lean_object* v___x_2640_; uint8_t v___x_2641_; 
v___x_2640_ = l_Lean_Expr_cleanupAnnotations(v_e_2625_);
v___x_2641_ = l_Lean_Expr_isApp(v___x_2640_);
if (v___x_2641_ == 0)
{
lean_dec_ref(v___x_2640_);
lean_dec_ref(v_e_2625_);
goto v___jp_2637_;
}
else
{
lean_object* v___x_2642_; uint8_t v___x_2643_; 
v___x_2642_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2640_);
v___x_2643_ = l_Lean_Expr_isApp(v___x_2642_);
if (v___x_2643_ == 0)
{
lean_dec_ref(v___x_2642_);
lean_dec_ref(v___x_2640_);
lean_dec_ref(v_e_2625_);
goto v___jp_2637_;
}
else
{
lean_object* v___x_2644_; uint8_t v___x_2645_; 
v___x_2644_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2642_);
v___x_2645_ = l_Lean_Expr_isApp(v___x_2644_);
if (v___x_2645_ == 0)
{
lean_dec_ref(v___x_2644_);
lean_dec_ref(v___x_2642_);
lean_dec_ref(v___x_2640_);
lean_dec_ref(v_e_2625_);
goto v___jp_2637_;
}
else
{
lean_object* v___x_2646_; uint8_t v___x_2647_; 
v___x_2646_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2644_);
v___x_2647_ = l_Lean_Expr_isApp(v___x_2646_);
if (v___x_2647_ == 0)
{
lean_dec_ref(v___x_2646_);
lean_dec_ref(v___x_2644_);
lean_dec_ref(v___x_2642_);
lean_dec_ref(v___x_2640_);
lean_dec_ref(v_e_2625_);
goto v___jp_2637_;
}
else
{
lean_object* v___x_2648_; lean_object* v___x_2649_; uint8_t v___x_2650_; 
v___x_2648_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2646_);
v___x_2649_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBEqUp___closed__2));
v___x_2650_ = l_Lean_Expr_isConstOf(v___x_2648_, v___x_2649_);
if (v___x_2650_ == 0)
{
lean_dec_ref(v___x_2648_);
lean_dec_ref(v___x_2646_);
lean_dec_ref(v___x_2644_);
lean_dec_ref(v___x_2642_);
lean_dec_ref(v___x_2640_);
lean_dec_ref(v_e_2625_);
goto v___jp_2637_;
}
else
{
lean_object* v_arg_2651_; lean_object* v_arg_2652_; lean_object* v_arg_2653_; lean_object* v_arg_2654_; lean_object* v_u_2655_; lean_object* v___x_2656_; 
v_arg_2651_ = lean_ctor_get(v___x_2640_, 1);
lean_inc_ref(v_arg_2651_);
lean_dec_ref(v___x_2640_);
v_arg_2652_ = lean_ctor_get(v___x_2642_, 1);
lean_inc_ref(v_arg_2652_);
lean_dec_ref(v___x_2642_);
v_arg_2653_ = lean_ctor_get(v___x_2644_, 1);
lean_inc_ref(v_arg_2653_);
lean_dec_ref(v___x_2644_);
v_arg_2654_ = lean_ctor_get(v___x_2646_, 1);
lean_inc_ref(v_arg_2654_);
lean_dec_ref(v___x_2646_);
v_u_2655_ = l_Lean_Expr_constLevels_x21(v___x_2648_);
lean_dec_ref(v___x_2648_);
v___x_2656_ = l_Lean_Meta_Grind_isEqv___redArg(v_arg_2652_, v_arg_2651_, v_a_2626_);
if (lean_obj_tag(v___x_2656_) == 0)
{
lean_object* v_a_2657_; uint8_t v___x_2658_; 
v_a_2657_ = lean_ctor_get(v___x_2656_, 0);
lean_inc(v_a_2657_);
lean_dec_ref_known(v___x_2656_, 1);
v___x_2658_ = lean_unbox(v_a_2657_);
lean_dec(v_a_2657_);
if (v___x_2658_ == 0)
{
lean_object* v___x_2659_; 
lean_inc_ref(v_arg_2651_);
lean_inc_ref(v_arg_2652_);
v___x_2659_ = l_Lean_Meta_Grind_mkDiseqProof_x3f(v_arg_2652_, v_arg_2651_, v_a_2626_, v_a_2627_, v_a_2628_, v_a_2629_, v_a_2630_, v_a_2631_, v_a_2632_, v_a_2633_, v_a_2634_, v_a_2635_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_object* v_a_2660_; lean_object* v___x_2662_; uint8_t v_isShared_2663_; uint8_t v_isSharedCheck_2692_; 
v_a_2660_ = lean_ctor_get(v___x_2659_, 0);
v_isSharedCheck_2692_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2692_ == 0)
{
v___x_2662_ = v___x_2659_;
v_isShared_2663_ = v_isSharedCheck_2692_;
goto v_resetjp_2661_;
}
else
{
lean_inc(v_a_2660_);
lean_dec(v___x_2659_);
v___x_2662_ = lean_box(0);
v_isShared_2663_ = v_isSharedCheck_2692_;
goto v_resetjp_2661_;
}
v_resetjp_2661_:
{
if (lean_obj_tag(v_a_2660_) == 1)
{
lean_object* v_val_2664_; lean_object* v___x_2665_; 
lean_del_object(v___x_2662_);
v_val_2664_ = lean_ctor_get(v_a_2660_, 0);
lean_inc(v_val_2664_);
lean_dec_ref_known(v_a_2660_, 1);
lean_inc_ref(v_arg_2653_);
lean_inc_ref(v_arg_2654_);
lean_inc(v_u_2655_);
v___x_2665_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(v_u_2655_, v_arg_2654_, v_arg_2653_, v_a_2632_, v_a_2633_, v_a_2634_, v_a_2635_);
if (lean_obj_tag(v___x_2665_) == 0)
{
lean_object* v_a_2666_; lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2679_; 
v_a_2666_ = lean_ctor_get(v___x_2665_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2665_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2668_ = v___x_2665_;
v_isShared_2669_ = v_isSharedCheck_2679_;
goto v_resetjp_2667_;
}
else
{
lean_inc(v_a_2666_);
lean_dec(v___x_2665_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2679_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
if (lean_obj_tag(v_a_2666_) == 1)
{
lean_object* v_val_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; 
lean_del_object(v___x_2668_);
v_val_2670_ = lean_ctor_get(v_a_2666_, 0);
lean_inc(v_val_2670_);
lean_dec_ref_known(v_a_2666_, 1);
v___x_2671_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBEqUp___closed__4));
v___x_2672_ = l_Lean_mkConst(v___x_2671_, v_u_2655_);
v___x_2673_ = l_Lean_mkApp6(v___x_2672_, v_arg_2654_, v_arg_2653_, v_val_2670_, v_arg_2652_, v_arg_2651_, v_val_2664_);
v___x_2674_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_e_2625_, v___x_2673_, v_a_2626_, v_a_2628_, v_a_2630_, v_a_2632_, v_a_2633_, v_a_2634_, v_a_2635_);
return v___x_2674_;
}
else
{
lean_object* v___x_2675_; lean_object* v___x_2677_; 
lean_dec(v_a_2666_);
lean_dec(v_val_2664_);
lean_dec(v_u_2655_);
lean_dec_ref(v_arg_2654_);
lean_dec_ref(v_arg_2653_);
lean_dec_ref(v_arg_2652_);
lean_dec_ref(v_arg_2651_);
lean_dec_ref(v_e_2625_);
v___x_2675_ = lean_box(0);
if (v_isShared_2669_ == 0)
{
lean_ctor_set(v___x_2668_, 0, v___x_2675_);
v___x_2677_ = v___x_2668_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v___x_2675_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
}
else
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2687_; 
lean_dec(v_val_2664_);
lean_dec(v_u_2655_);
lean_dec_ref(v_arg_2654_);
lean_dec_ref(v_arg_2653_);
lean_dec_ref(v_arg_2652_);
lean_dec_ref(v_arg_2651_);
lean_dec_ref(v_e_2625_);
v_a_2680_ = lean_ctor_get(v___x_2665_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2665_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2682_ = v___x_2665_;
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2665_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
if (v_isShared_2683_ == 0)
{
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_a_2680_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
}
else
{
lean_object* v___x_2688_; lean_object* v___x_2690_; 
lean_dec(v_a_2660_);
lean_dec(v_u_2655_);
lean_dec_ref(v_arg_2654_);
lean_dec_ref(v_arg_2653_);
lean_dec_ref(v_arg_2652_);
lean_dec_ref(v_arg_2651_);
lean_dec_ref(v_e_2625_);
v___x_2688_ = lean_box(0);
if (v_isShared_2663_ == 0)
{
lean_ctor_set(v___x_2662_, 0, v___x_2688_);
v___x_2690_ = v___x_2662_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___x_2688_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
}
}
else
{
lean_object* v_a_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2700_; 
lean_dec(v_u_2655_);
lean_dec_ref(v_arg_2654_);
lean_dec_ref(v_arg_2653_);
lean_dec_ref(v_arg_2652_);
lean_dec_ref(v_arg_2651_);
lean_dec_ref(v_e_2625_);
v_a_2693_ = lean_ctor_get(v___x_2659_, 0);
v_isSharedCheck_2700_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2700_ == 0)
{
v___x_2695_ = v___x_2659_;
v_isShared_2696_ = v_isSharedCheck_2700_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_a_2693_);
lean_dec(v___x_2659_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2700_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v___x_2698_; 
if (v_isShared_2696_ == 0)
{
v___x_2698_ = v___x_2695_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v_a_2693_);
v___x_2698_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
return v___x_2698_;
}
}
}
}
else
{
lean_object* v___x_2701_; 
lean_inc_ref(v_arg_2653_);
lean_inc_ref(v_arg_2654_);
lean_inc(v_u_2655_);
v___x_2701_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(v_u_2655_, v_arg_2654_, v_arg_2653_, v_a_2632_, v_a_2633_, v_a_2634_, v_a_2635_);
if (lean_obj_tag(v___x_2701_) == 0)
{
lean_object* v_a_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2725_; 
v_a_2702_ = lean_ctor_get(v___x_2701_, 0);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2704_ = v___x_2701_;
v_isShared_2705_ = v_isSharedCheck_2725_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_a_2702_);
lean_dec(v___x_2701_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2725_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
if (lean_obj_tag(v_a_2702_) == 1)
{
lean_object* v_val_2706_; lean_object* v___x_2707_; 
lean_del_object(v___x_2704_);
v_val_2706_ = lean_ctor_get(v_a_2702_, 0);
lean_inc(v_val_2706_);
lean_dec_ref_known(v_a_2702_, 1);
lean_inc(v_a_2635_);
lean_inc_ref(v_a_2634_);
lean_inc(v_a_2633_);
lean_inc_ref(v_a_2632_);
lean_inc(v_a_2631_);
lean_inc_ref(v_a_2630_);
lean_inc(v_a_2629_);
lean_inc_ref(v_a_2628_);
lean_inc(v_a_2627_);
lean_inc(v_a_2626_);
lean_inc_ref(v_arg_2651_);
lean_inc_ref(v_arg_2652_);
v___x_2707_ = lean_grind_mk_eq_proof(v_arg_2652_, v_arg_2651_, v_a_2626_, v_a_2627_, v_a_2628_, v_a_2629_, v_a_2630_, v_a_2631_, v_a_2632_, v_a_2633_, v_a_2634_, v_a_2635_);
if (lean_obj_tag(v___x_2707_) == 0)
{
lean_object* v_a_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; 
v_a_2708_ = lean_ctor_get(v___x_2707_, 0);
lean_inc(v_a_2708_);
lean_dec_ref_known(v___x_2707_, 1);
v___x_2709_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBEqUp___closed__6));
v___x_2710_ = l_Lean_mkConst(v___x_2709_, v_u_2655_);
v___x_2711_ = l_Lean_mkApp6(v___x_2710_, v_arg_2654_, v_arg_2653_, v_val_2706_, v_arg_2652_, v_arg_2651_, v_a_2708_);
v___x_2712_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_e_2625_, v___x_2711_, v_a_2626_, v_a_2628_, v_a_2630_, v_a_2632_, v_a_2633_, v_a_2634_, v_a_2635_);
return v___x_2712_;
}
else
{
lean_object* v_a_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2720_; 
lean_dec(v_val_2706_);
lean_dec(v_u_2655_);
lean_dec_ref(v_arg_2654_);
lean_dec_ref(v_arg_2653_);
lean_dec_ref(v_arg_2652_);
lean_dec_ref(v_arg_2651_);
lean_dec_ref(v_e_2625_);
v_a_2713_ = lean_ctor_get(v___x_2707_, 0);
v_isSharedCheck_2720_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2720_ == 0)
{
v___x_2715_ = v___x_2707_;
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_a_2713_);
lean_dec(v___x_2707_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v___x_2718_; 
if (v_isShared_2716_ == 0)
{
v___x_2718_ = v___x_2715_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v_a_2713_);
v___x_2718_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
return v___x_2718_;
}
}
}
}
else
{
lean_object* v___x_2721_; lean_object* v___x_2723_; 
lean_dec(v_a_2702_);
lean_dec(v_u_2655_);
lean_dec_ref(v_arg_2654_);
lean_dec_ref(v_arg_2653_);
lean_dec_ref(v_arg_2652_);
lean_dec_ref(v_arg_2651_);
lean_dec_ref(v_e_2625_);
v___x_2721_ = lean_box(0);
if (v_isShared_2705_ == 0)
{
lean_ctor_set(v___x_2704_, 0, v___x_2721_);
v___x_2723_ = v___x_2704_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v___x_2721_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
return v___x_2723_;
}
}
}
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
lean_dec(v_u_2655_);
lean_dec_ref(v_arg_2654_);
lean_dec_ref(v_arg_2653_);
lean_dec_ref(v_arg_2652_);
lean_dec_ref(v_arg_2651_);
lean_dec_ref(v_e_2625_);
v_a_2726_ = lean_ctor_get(v___x_2701_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2701_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2701_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
lean_dec(v_u_2655_);
lean_dec_ref(v_arg_2654_);
lean_dec_ref(v_arg_2653_);
lean_dec_ref(v_arg_2652_);
lean_dec_ref(v_arg_2651_);
lean_dec_ref(v_e_2625_);
v_a_2734_ = lean_ctor_get(v___x_2656_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2656_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2656_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2656_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2739_; 
if (v_isShared_2737_ == 0)
{
v___x_2739_ = v___x_2736_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_a_2734_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
}
}
}
}
v___jp_2637_:
{
lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2638_ = lean_box(0);
v___x_2639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2638_);
return v___x_2639_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqUp___boxed(lean_object* v_e_2742_, lean_object* v_a_2743_, lean_object* v_a_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_, lean_object* v_a_2750_, lean_object* v_a_2751_, lean_object* v_a_2752_, lean_object* v_a_2753_){
_start:
{
lean_object* v_res_2754_; 
v_res_2754_ = l_Lean_Meta_Grind_propagateBEqUp(v_e_2742_, v_a_2743_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_, v_a_2752_);
lean_dec(v_a_2752_);
lean_dec_ref(v_a_2751_);
lean_dec(v_a_2750_);
lean_dec_ref(v_a_2749_);
lean_dec(v_a_2748_);
lean_dec_ref(v_a_2747_);
lean_dec(v_a_2746_);
lean_dec_ref(v_a_2745_);
lean_dec(v_a_2744_);
lean_dec(v_a_2743_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqUp___regBuiltin_Lean_Meta_Grind_propagateBEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4192136612____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; 
v___x_2756_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBEqUp___closed__2));
v___x_2757_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBEqUp___boxed), 12, 0);
v___x_2758_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_2756_, v___x_2757_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqUp___regBuiltin_Lean_Meta_Grind_propagateBEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4192136612____hygCtx___hyg_9____boxed(lean_object* v_a_2759_){
_start:
{
lean_object* v_res_2760_; 
v_res_2760_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqUp___regBuiltin_Lean_Meta_Grind_propagateBEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4192136612____hygCtx___hyg_9_();
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqDown(lean_object* v_e_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_, lean_object* v_a_2780_, lean_object* v_a_2781_){
_start:
{
lean_object* v___x_2786_; uint8_t v___x_2787_; 
v___x_2786_ = l_Lean_Expr_cleanupAnnotations(v_e_2771_);
v___x_2787_ = l_Lean_Expr_isApp(v___x_2786_);
if (v___x_2787_ == 0)
{
lean_dec_ref(v___x_2786_);
lean_dec_ref(v_e_2771_);
goto v___jp_2783_;
}
else
{
lean_object* v___x_2788_; uint8_t v___x_2789_; 
v___x_2788_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2786_);
v___x_2789_ = l_Lean_Expr_isApp(v___x_2788_);
if (v___x_2789_ == 0)
{
lean_dec_ref(v___x_2788_);
lean_dec_ref(v___x_2786_);
lean_dec_ref(v_e_2771_);
goto v___jp_2783_;
}
else
{
lean_object* v___x_2790_; uint8_t v___x_2791_; 
v___x_2790_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2788_);
v___x_2791_ = l_Lean_Expr_isApp(v___x_2790_);
if (v___x_2791_ == 0)
{
lean_dec_ref(v___x_2790_);
lean_dec_ref(v___x_2788_);
lean_dec_ref(v___x_2786_);
lean_dec_ref(v_e_2771_);
goto v___jp_2783_;
}
else
{
lean_object* v___x_2792_; uint8_t v___x_2793_; 
v___x_2792_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2790_);
v___x_2793_ = l_Lean_Expr_isApp(v___x_2792_);
if (v___x_2793_ == 0)
{
lean_dec_ref(v___x_2792_);
lean_dec_ref(v___x_2790_);
lean_dec_ref(v___x_2788_);
lean_dec_ref(v___x_2786_);
lean_dec_ref(v_e_2771_);
goto v___jp_2783_;
}
else
{
lean_object* v___x_2794_; lean_object* v___x_2795_; uint8_t v___x_2796_; 
v___x_2794_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2792_);
v___x_2795_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBEqUp___closed__2));
v___x_2796_ = l_Lean_Expr_isConstOf(v___x_2794_, v___x_2795_);
if (v___x_2796_ == 0)
{
lean_dec_ref(v___x_2794_);
lean_dec_ref(v___x_2792_);
lean_dec_ref(v___x_2790_);
lean_dec_ref(v___x_2788_);
lean_dec_ref(v___x_2786_);
lean_dec_ref(v_e_2771_);
goto v___jp_2783_;
}
else
{
lean_object* v_arg_2797_; lean_object* v_arg_2798_; lean_object* v_arg_2799_; lean_object* v_arg_2800_; lean_object* v___x_2801_; lean_object* v_u_2802_; lean_object* v___x_2803_; 
v_arg_2797_ = lean_ctor_get(v___x_2786_, 1);
lean_inc_ref(v_arg_2797_);
lean_dec_ref(v___x_2786_);
v_arg_2798_ = lean_ctor_get(v___x_2788_, 1);
lean_inc_ref(v_arg_2798_);
lean_dec_ref(v___x_2788_);
v_arg_2799_ = lean_ctor_get(v___x_2790_, 1);
lean_inc_ref(v_arg_2799_);
lean_dec_ref(v___x_2790_);
v_arg_2800_ = lean_ctor_get(v___x_2792_, 1);
lean_inc_ref(v_arg_2800_);
lean_dec_ref(v___x_2792_);
v___x_2801_ = lean_box(0);
v_u_2802_ = l_Lean_Expr_constLevels_x21(v___x_2794_);
lean_dec_ref(v___x_2794_);
lean_inc_ref(v_e_2771_);
v___x_2803_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_e_2771_, v_a_2772_, v_a_2776_, v_a_2778_, v_a_2779_, v_a_2780_, v_a_2781_);
if (lean_obj_tag(v___x_2803_) == 0)
{
lean_object* v_a_2804_; uint8_t v___x_2805_; 
v_a_2804_ = lean_ctor_get(v___x_2803_, 0);
lean_inc(v_a_2804_);
lean_dec_ref_known(v___x_2803_, 1);
v___x_2805_ = lean_unbox(v_a_2804_);
lean_dec(v_a_2804_);
if (v___x_2805_ == 0)
{
lean_object* v___x_2806_; 
lean_inc_ref(v_e_2771_);
v___x_2806_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_e_2771_, v_a_2772_, v_a_2776_, v_a_2778_, v_a_2779_, v_a_2780_, v_a_2781_);
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_object* v_a_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2888_; 
v_a_2807_ = lean_ctor_get(v___x_2806_, 0);
v_isSharedCheck_2888_ = !lean_is_exclusive(v___x_2806_);
if (v_isSharedCheck_2888_ == 0)
{
v___x_2809_ = v___x_2806_;
v_isShared_2810_ = v_isSharedCheck_2888_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_a_2807_);
lean_dec(v___x_2806_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2888_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
uint8_t v___x_2811_; 
v___x_2811_ = lean_unbox(v_a_2807_);
lean_dec(v_a_2807_);
if (v___x_2811_ == 0)
{
lean_object* v___x_2812_; lean_object* v___x_2814_; 
lean_dec(v_u_2802_);
lean_dec_ref(v_arg_2800_);
lean_dec_ref(v_arg_2799_);
lean_dec_ref(v_arg_2798_);
lean_dec_ref(v_arg_2797_);
lean_dec_ref(v_e_2771_);
v___x_2812_ = lean_box(0);
if (v_isShared_2810_ == 0)
{
lean_ctor_set(v___x_2809_, 0, v___x_2812_);
v___x_2814_ = v___x_2809_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v___x_2812_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
return v___x_2814_;
}
}
else
{
lean_object* v___x_2816_; 
lean_del_object(v___x_2809_);
lean_inc_ref(v_arg_2799_);
lean_inc_ref(v_arg_2800_);
lean_inc(v_u_2802_);
v___x_2816_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(v_u_2802_, v_arg_2800_, v_arg_2799_, v_a_2778_, v_a_2779_, v_a_2780_, v_a_2781_);
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2879_; 
v_a_2817_ = lean_ctor_get(v___x_2816_, 0);
v_isSharedCheck_2879_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2879_ == 0)
{
v___x_2819_ = v___x_2816_;
v_isShared_2820_ = v_isSharedCheck_2879_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v___x_2816_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2879_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
if (lean_obj_tag(v_a_2817_) == 1)
{
lean_object* v_val_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; 
lean_del_object(v___x_2819_);
v_val_2821_ = lean_ctor_get(v_a_2817_, 0);
lean_inc(v_val_2821_);
lean_dec_ref_known(v_a_2817_, 1);
v___x_2822_ = ((lean_object*)(l_Lean_Meta_Grind_propagateEqUp___closed__1));
v___x_2823_ = l_List_head_x21___redArg(v___x_2801_, v_u_2802_);
v___x_2824_ = l_Lean_Level_succ___override(v___x_2823_);
v___x_2825_ = lean_box(0);
v___x_2826_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2824_);
lean_ctor_set(v___x_2826_, 1, v___x_2825_);
v___x_2827_ = l_Lean_mkConst(v___x_2822_, v___x_2826_);
lean_inc_ref(v_arg_2797_);
lean_inc_ref(v_arg_2798_);
lean_inc_ref(v_arg_2800_);
v___x_2828_ = l_Lean_mkApp3(v___x_2827_, v_arg_2800_, v_arg_2798_, v_arg_2797_);
v___x_2829_ = l_Lean_Meta_Sym_shareCommon(v___x_2828_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_, v_a_2780_, v_a_2781_);
if (lean_obj_tag(v___x_2829_) == 0)
{
lean_object* v_a_2830_; lean_object* v___x_2831_; 
v_a_2830_ = lean_ctor_get(v___x_2829_, 0);
lean_inc(v_a_2830_);
lean_dec_ref_known(v___x_2829_, 1);
v___x_2831_ = l_Lean_Meta_Grind_getGeneration___redArg(v_arg_2798_, v_a_2772_);
if (lean_obj_tag(v___x_2831_) == 0)
{
lean_object* v_a_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; 
v_a_2832_ = lean_ctor_get(v___x_2831_, 0);
lean_inc(v_a_2832_);
lean_dec_ref_known(v___x_2831_, 1);
v___x_2833_ = lean_box(0);
lean_inc(v_a_2781_);
lean_inc_ref(v_a_2780_);
lean_inc(v_a_2779_);
lean_inc_ref(v_a_2778_);
lean_inc(v_a_2777_);
lean_inc_ref(v_a_2776_);
lean_inc(v_a_2775_);
lean_inc_ref(v_a_2774_);
lean_inc(v_a_2773_);
lean_inc(v_a_2772_);
lean_inc(v_a_2830_);
v___x_2834_ = lean_grind_internalize(v_a_2830_, v_a_2832_, v___x_2833_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_, v_a_2780_, v_a_2781_);
if (lean_obj_tag(v___x_2834_) == 0)
{
lean_object* v___x_2835_; 
lean_dec_ref_known(v___x_2834_, 1);
v___x_2835_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_2776_);
if (lean_obj_tag(v___x_2835_) == 0)
{
lean_object* v_a_2836_; lean_object* v___x_2837_; 
v_a_2836_ = lean_ctor_get(v___x_2835_, 0);
lean_inc(v_a_2836_);
lean_dec_ref_known(v___x_2835_, 1);
lean_inc(v_a_2781_);
lean_inc_ref(v_a_2780_);
lean_inc(v_a_2779_);
lean_inc_ref(v_a_2778_);
lean_inc(v_a_2777_);
lean_inc_ref(v_a_2776_);
lean_inc(v_a_2775_);
lean_inc_ref(v_a_2774_);
lean_inc(v_a_2773_);
lean_inc(v_a_2772_);
v___x_2837_ = lean_grind_mk_eq_proof(v_e_2771_, v_a_2836_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_, v_a_2780_, v_a_2781_);
if (lean_obj_tag(v___x_2837_) == 0)
{
lean_object* v_a_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; 
v_a_2838_ = lean_ctor_get(v___x_2837_, 0);
lean_inc(v_a_2838_);
lean_dec_ref_known(v___x_2837_, 1);
v___x_2839_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBEqDown___closed__1));
v___x_2840_ = l_Lean_mkConst(v___x_2839_, v_u_2802_);
v___x_2841_ = l_Lean_mkApp6(v___x_2840_, v_arg_2800_, v_arg_2799_, v_val_2821_, v_arg_2798_, v_arg_2797_, v_a_2838_);
v___x_2842_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_a_2830_, v___x_2841_, v_a_2772_, v_a_2774_, v_a_2776_, v_a_2778_, v_a_2779_, v_a_2780_, v_a_2781_);
return v___x_2842_;
}
else
{
lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2850_; 
lean_dec(v_a_2830_);
lean_dec(v_val_2821_);
lean_dec(v_u_2802_);
lean_dec_ref(v_arg_2800_);
lean_dec_ref(v_arg_2799_);
lean_dec_ref(v_arg_2798_);
lean_dec_ref(v_arg_2797_);
v_a_2843_ = lean_ctor_get(v___x_2837_, 0);
v_isSharedCheck_2850_ = !lean_is_exclusive(v___x_2837_);
if (v_isSharedCheck_2850_ == 0)
{
v___x_2845_ = v___x_2837_;
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v___x_2837_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v___x_2848_; 
if (v_isShared_2846_ == 0)
{
v___x_2848_ = v___x_2845_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v_a_2843_);
v___x_2848_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
return v___x_2848_;
}
}
}
}
else
{
lean_object* v_a_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2858_; 
lean_dec(v_a_2830_);
lean_dec(v_val_2821_);
lean_dec(v_u_2802_);
lean_dec_ref(v_arg_2800_);
lean_dec_ref(v_arg_2799_);
lean_dec_ref(v_arg_2798_);
lean_dec_ref(v_arg_2797_);
lean_dec_ref(v_e_2771_);
v_a_2851_ = lean_ctor_get(v___x_2835_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2853_ = v___x_2835_;
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_a_2851_);
lean_dec(v___x_2835_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2856_; 
if (v_isShared_2854_ == 0)
{
v___x_2856_ = v___x_2853_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_a_2851_);
v___x_2856_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
return v___x_2856_;
}
}
}
}
else
{
lean_dec(v_a_2830_);
lean_dec(v_val_2821_);
lean_dec(v_u_2802_);
lean_dec_ref(v_arg_2800_);
lean_dec_ref(v_arg_2799_);
lean_dec_ref(v_arg_2798_);
lean_dec_ref(v_arg_2797_);
lean_dec_ref(v_e_2771_);
return v___x_2834_;
}
}
else
{
lean_object* v_a_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2866_; 
lean_dec(v_a_2830_);
lean_dec(v_val_2821_);
lean_dec(v_u_2802_);
lean_dec_ref(v_arg_2800_);
lean_dec_ref(v_arg_2799_);
lean_dec_ref(v_arg_2798_);
lean_dec_ref(v_arg_2797_);
lean_dec_ref(v_e_2771_);
v_a_2859_ = lean_ctor_get(v___x_2831_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2831_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2861_ = v___x_2831_;
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_a_2859_);
lean_dec(v___x_2831_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2864_; 
if (v_isShared_2862_ == 0)
{
v___x_2864_ = v___x_2861_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v_a_2859_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
}
}
}
}
else
{
lean_object* v_a_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2874_; 
lean_dec(v_val_2821_);
lean_dec(v_u_2802_);
lean_dec_ref(v_arg_2800_);
lean_dec_ref(v_arg_2799_);
lean_dec_ref(v_arg_2798_);
lean_dec_ref(v_arg_2797_);
lean_dec_ref(v_e_2771_);
v_a_2867_ = lean_ctor_get(v___x_2829_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v___x_2829_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2869_ = v___x_2829_;
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_a_2867_);
lean_dec(v___x_2829_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2872_; 
if (v_isShared_2870_ == 0)
{
v___x_2872_ = v___x_2869_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_a_2867_);
v___x_2872_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
return v___x_2872_;
}
}
}
}
else
{
lean_object* v___x_2875_; lean_object* v___x_2877_; 
lean_dec(v_a_2817_);
lean_dec(v_u_2802_);
lean_dec_ref(v_arg_2800_);
lean_dec_ref(v_arg_2799_);
lean_dec_ref(v_arg_2798_);
lean_dec_ref(v_arg_2797_);
lean_dec_ref(v_e_2771_);
v___x_2875_ = lean_box(0);
if (v_isShared_2820_ == 0)
{
lean_ctor_set(v___x_2819_, 0, v___x_2875_);
v___x_2877_ = v___x_2819_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v___x_2875_);
v___x_2877_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
return v___x_2877_;
}
}
}
}
else
{
lean_object* v_a_2880_; lean_object* v___x_2882_; uint8_t v_isShared_2883_; uint8_t v_isSharedCheck_2887_; 
lean_dec(v_u_2802_);
lean_dec_ref(v_arg_2800_);
lean_dec_ref(v_arg_2799_);
lean_dec_ref(v_arg_2798_);
lean_dec_ref(v_arg_2797_);
lean_dec_ref(v_e_2771_);
v_a_2880_ = lean_ctor_get(v___x_2816_, 0);
v_isSharedCheck_2887_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2887_ == 0)
{
v___x_2882_ = v___x_2816_;
v_isShared_2883_ = v_isSharedCheck_2887_;
goto v_resetjp_2881_;
}
else
{
lean_inc(v_a_2880_);
lean_dec(v___x_2816_);
v___x_2882_ = lean_box(0);
v_isShared_2883_ = v_isSharedCheck_2887_;
goto v_resetjp_2881_;
}
v_resetjp_2881_:
{
lean_object* v___x_2885_; 
if (v_isShared_2883_ == 0)
{
v___x_2885_ = v___x_2882_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v_a_2880_);
v___x_2885_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
return v___x_2885_;
}
}
}
}
}
}
else
{
lean_object* v_a_2889_; lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2896_; 
lean_dec(v_u_2802_);
lean_dec_ref(v_arg_2800_);
lean_dec_ref(v_arg_2799_);
lean_dec_ref(v_arg_2798_);
lean_dec_ref(v_arg_2797_);
lean_dec_ref(v_e_2771_);
v_a_2889_ = lean_ctor_get(v___x_2806_, 0);
v_isSharedCheck_2896_ = !lean_is_exclusive(v___x_2806_);
if (v_isSharedCheck_2896_ == 0)
{
v___x_2891_ = v___x_2806_;
v_isShared_2892_ = v_isSharedCheck_2896_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_a_2889_);
lean_dec(v___x_2806_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2896_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
lean_object* v___x_2894_; 
if (v_isShared_2892_ == 0)
{
v___x_2894_ = v___x_2891_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v_a_2889_);
v___x_2894_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
return v___x_2894_;
}
}
}
}
else
{
lean_object* v___x_2897_; 
lean_inc_ref(v_arg_2799_);
lean_inc_ref(v_arg_2800_);
lean_inc(v_u_2802_);
v___x_2897_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(v_u_2802_, v_arg_2800_, v_arg_2799_, v_a_2778_, v_a_2779_, v_a_2780_, v_a_2781_);
if (lean_obj_tag(v___x_2897_) == 0)
{
lean_object* v_a_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_2932_; 
v_a_2898_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_2932_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2900_ = v___x_2897_;
v_isShared_2901_ = v_isSharedCheck_2932_;
goto v_resetjp_2899_;
}
else
{
lean_inc(v_a_2898_);
lean_dec(v___x_2897_);
v___x_2900_ = lean_box(0);
v_isShared_2901_ = v_isSharedCheck_2932_;
goto v_resetjp_2899_;
}
v_resetjp_2899_:
{
if (lean_obj_tag(v_a_2898_) == 1)
{
lean_object* v_val_2902_; lean_object* v___x_2903_; 
lean_del_object(v___x_2900_);
v_val_2902_ = lean_ctor_get(v_a_2898_, 0);
lean_inc(v_val_2902_);
lean_dec_ref_known(v_a_2898_, 1);
v___x_2903_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_2776_);
if (lean_obj_tag(v___x_2903_) == 0)
{
lean_object* v_a_2904_; lean_object* v___x_2905_; 
v_a_2904_ = lean_ctor_get(v___x_2903_, 0);
lean_inc(v_a_2904_);
lean_dec_ref_known(v___x_2903_, 1);
lean_inc(v_a_2781_);
lean_inc_ref(v_a_2780_);
lean_inc(v_a_2779_);
lean_inc_ref(v_a_2778_);
lean_inc(v_a_2777_);
lean_inc_ref(v_a_2776_);
lean_inc(v_a_2775_);
lean_inc_ref(v_a_2774_);
lean_inc(v_a_2773_);
lean_inc(v_a_2772_);
v___x_2905_ = lean_grind_mk_eq_proof(v_e_2771_, v_a_2904_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_, v_a_2780_, v_a_2781_);
if (lean_obj_tag(v___x_2905_) == 0)
{
lean_object* v_a_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; uint8_t v___x_2910_; lean_object* v___x_2911_; 
v_a_2906_ = lean_ctor_get(v___x_2905_, 0);
lean_inc(v_a_2906_);
lean_dec_ref_known(v___x_2905_, 1);
v___x_2907_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBEqDown___closed__3));
v___x_2908_ = l_Lean_mkConst(v___x_2907_, v_u_2802_);
lean_inc_ref(v_arg_2797_);
lean_inc_ref(v_arg_2798_);
v___x_2909_ = l_Lean_mkApp6(v___x_2908_, v_arg_2800_, v_arg_2799_, v_val_2902_, v_arg_2798_, v_arg_2797_, v_a_2906_);
v___x_2910_ = 0;
v___x_2911_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_arg_2798_, v_arg_2797_, v___x_2909_, v___x_2910_, v_a_2772_, v_a_2774_, v_a_2778_, v_a_2779_, v_a_2780_, v_a_2781_);
return v___x_2911_;
}
else
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2919_; 
lean_dec(v_val_2902_);
lean_dec(v_u_2802_);
lean_dec_ref(v_arg_2800_);
lean_dec_ref(v_arg_2799_);
lean_dec_ref(v_arg_2798_);
lean_dec_ref(v_arg_2797_);
v_a_2912_ = lean_ctor_get(v___x_2905_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2905_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2914_ = v___x_2905_;
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2905_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2917_; 
if (v_isShared_2915_ == 0)
{
v___x_2917_ = v___x_2914_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2912_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
else
{
lean_object* v_a_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2927_; 
lean_dec(v_val_2902_);
lean_dec(v_u_2802_);
lean_dec_ref(v_arg_2800_);
lean_dec_ref(v_arg_2799_);
lean_dec_ref(v_arg_2798_);
lean_dec_ref(v_arg_2797_);
lean_dec_ref(v_e_2771_);
v_a_2920_ = lean_ctor_get(v___x_2903_, 0);
v_isSharedCheck_2927_ = !lean_is_exclusive(v___x_2903_);
if (v_isSharedCheck_2927_ == 0)
{
v___x_2922_ = v___x_2903_;
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_a_2920_);
lean_dec(v___x_2903_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
lean_object* v___x_2925_; 
if (v_isShared_2923_ == 0)
{
v___x_2925_ = v___x_2922_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v_a_2920_);
v___x_2925_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
return v___x_2925_;
}
}
}
}
else
{
lean_object* v___x_2928_; lean_object* v___x_2930_; 
lean_dec(v_a_2898_);
lean_dec(v_u_2802_);
lean_dec_ref(v_arg_2800_);
lean_dec_ref(v_arg_2799_);
lean_dec_ref(v_arg_2798_);
lean_dec_ref(v_arg_2797_);
lean_dec_ref(v_e_2771_);
v___x_2928_ = lean_box(0);
if (v_isShared_2901_ == 0)
{
lean_ctor_set(v___x_2900_, 0, v___x_2928_);
v___x_2930_ = v___x_2900_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v___x_2928_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
return v___x_2930_;
}
}
}
}
else
{
lean_object* v_a_2933_; lean_object* v___x_2935_; uint8_t v_isShared_2936_; uint8_t v_isSharedCheck_2940_; 
lean_dec(v_u_2802_);
lean_dec_ref(v_arg_2800_);
lean_dec_ref(v_arg_2799_);
lean_dec_ref(v_arg_2798_);
lean_dec_ref(v_arg_2797_);
lean_dec_ref(v_e_2771_);
v_a_2933_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_2940_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_2940_ == 0)
{
v___x_2935_ = v___x_2897_;
v_isShared_2936_ = v_isSharedCheck_2940_;
goto v_resetjp_2934_;
}
else
{
lean_inc(v_a_2933_);
lean_dec(v___x_2897_);
v___x_2935_ = lean_box(0);
v_isShared_2936_ = v_isSharedCheck_2940_;
goto v_resetjp_2934_;
}
v_resetjp_2934_:
{
lean_object* v___x_2938_; 
if (v_isShared_2936_ == 0)
{
v___x_2938_ = v___x_2935_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_a_2933_);
v___x_2938_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
return v___x_2938_;
}
}
}
}
}
else
{
lean_object* v_a_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2948_; 
lean_dec(v_u_2802_);
lean_dec_ref(v_arg_2800_);
lean_dec_ref(v_arg_2799_);
lean_dec_ref(v_arg_2798_);
lean_dec_ref(v_arg_2797_);
lean_dec_ref(v_e_2771_);
v_a_2941_ = lean_ctor_get(v___x_2803_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2803_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2943_ = v___x_2803_;
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_a_2941_);
lean_dec(v___x_2803_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2946_; 
if (v_isShared_2944_ == 0)
{
v___x_2946_ = v___x_2943_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_a_2941_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
}
}
}
}
}
v___jp_2783_:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; 
v___x_2784_ = lean_box(0);
v___x_2785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2785_, 0, v___x_2784_);
return v___x_2785_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqDown___boxed(lean_object* v_e_2949_, lean_object* v_a_2950_, lean_object* v_a_2951_, lean_object* v_a_2952_, lean_object* v_a_2953_, lean_object* v_a_2954_, lean_object* v_a_2955_, lean_object* v_a_2956_, lean_object* v_a_2957_, lean_object* v_a_2958_, lean_object* v_a_2959_, lean_object* v_a_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l_Lean_Meta_Grind_propagateBEqDown(v_e_2949_, v_a_2950_, v_a_2951_, v_a_2952_, v_a_2953_, v_a_2954_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_, v_a_2959_);
lean_dec(v_a_2959_);
lean_dec_ref(v_a_2958_);
lean_dec(v_a_2957_);
lean_dec_ref(v_a_2956_);
lean_dec(v_a_2955_);
lean_dec_ref(v_a_2954_);
lean_dec(v_a_2953_);
lean_dec_ref(v_a_2952_);
lean_dec(v_a_2951_);
lean_dec(v_a_2950_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqDown___regBuiltin_Lean_Meta_Grind_propagateBEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1906898770____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2963_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBEqUp___closed__2));
v___x_2964_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBEqDown___boxed), 12, 0);
v___x_2965_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_2963_, v___x_2964_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqDown___regBuiltin_Lean_Meta_Grind_propagateBEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1906898770____hygCtx___hyg_9____boxed(lean_object* v_a_2966_){
_start:
{
lean_object* v_res_2967_; 
v_res_2967_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqDown___regBuiltin_Lean_Meta_Grind_propagateBEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1906898770____hygCtx___hyg_9_();
return v_res_2967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqMatchDown(lean_object* v_e_2973_, lean_object* v_a_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_, lean_object* v_a_2977_, lean_object* v_a_2978_, lean_object* v_a_2979_, lean_object* v_a_2980_, lean_object* v_a_2981_, lean_object* v_a_2982_, lean_object* v_a_2983_){
_start:
{
lean_object* v___x_2988_; 
lean_inc_ref(v_e_2973_);
v___x_2988_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_2973_, v_a_2974_, v_a_2978_, v_a_2980_, v_a_2981_, v_a_2982_, v_a_2983_);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_3026_; 
v_a_2989_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3026_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_2991_ = v___x_2988_;
v_isShared_2992_ = v_isSharedCheck_3026_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v___x_2988_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_3026_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
uint8_t v___x_2993_; 
v___x_2993_ = lean_unbox(v_a_2989_);
lean_dec(v_a_2989_);
if (v___x_2993_ == 0)
{
lean_object* v___x_2994_; lean_object* v___x_2996_; 
lean_dec_ref(v_e_2973_);
v___x_2994_ = lean_box(0);
if (v_isShared_2992_ == 0)
{
lean_ctor_set(v___x_2991_, 0, v___x_2994_);
v___x_2996_ = v___x_2991_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v___x_2994_);
v___x_2996_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
return v___x_2996_;
}
}
else
{
lean_object* v___x_2998_; uint8_t v___x_2999_; 
lean_del_object(v___x_2991_);
v___x_2998_ = l_Lean_Expr_cleanupAnnotations(v_e_2973_);
v___x_2999_ = l_Lean_Expr_isApp(v___x_2998_);
if (v___x_2999_ == 0)
{
lean_dec_ref(v___x_2998_);
lean_dec_ref(v_e_2973_);
goto v___jp_2985_;
}
else
{
lean_object* v___x_3000_; uint8_t v___x_3001_; 
v___x_3000_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2998_);
v___x_3001_ = l_Lean_Expr_isApp(v___x_3000_);
if (v___x_3001_ == 0)
{
lean_dec_ref(v___x_3000_);
lean_dec_ref(v___x_2998_);
lean_dec_ref(v_e_2973_);
goto v___jp_2985_;
}
else
{
lean_object* v___x_3002_; uint8_t v___x_3003_; 
v___x_3002_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3000_);
v___x_3003_ = l_Lean_Expr_isApp(v___x_3002_);
if (v___x_3003_ == 0)
{
lean_dec_ref(v___x_3002_);
lean_dec_ref(v___x_3000_);
lean_dec_ref(v___x_2998_);
lean_dec_ref(v_e_2973_);
goto v___jp_2985_;
}
else
{
lean_object* v___x_3004_; uint8_t v___x_3005_; 
v___x_3004_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3002_);
v___x_3005_ = l_Lean_Expr_isApp(v___x_3004_);
if (v___x_3005_ == 0)
{
lean_dec_ref(v___x_3004_);
lean_dec_ref(v___x_3002_);
lean_dec_ref(v___x_3000_);
lean_dec_ref(v___x_2998_);
lean_dec_ref(v_e_2973_);
goto v___jp_2985_;
}
else
{
lean_object* v___x_3006_; lean_object* v___x_3007_; uint8_t v___x_3008_; 
v___x_3006_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3004_);
lean_dec_ref(v___x_3004_);
v___x_3007_ = ((lean_object*)(l_Lean_Meta_Grind_propagateEqMatchDown___closed__1));
v___x_3008_ = l_Lean_Expr_isConstOf(v___x_3006_, v___x_3007_);
lean_dec_ref(v___x_3006_);
if (v___x_3008_ == 0)
{
lean_dec_ref(v___x_3002_);
lean_dec_ref(v___x_3000_);
lean_dec_ref(v___x_2998_);
lean_dec_ref(v_e_2973_);
goto v___jp_2985_;
}
else
{
lean_object* v_arg_3009_; lean_object* v_arg_3010_; lean_object* v_arg_3011_; lean_object* v___x_3012_; 
v_arg_3009_ = lean_ctor_get(v___x_2998_, 1);
lean_inc_ref(v_arg_3009_);
lean_dec_ref(v___x_2998_);
v_arg_3010_ = lean_ctor_get(v___x_3000_, 1);
lean_inc_ref(v_arg_3010_);
lean_dec_ref(v___x_3000_);
v_arg_3011_ = lean_ctor_get(v___x_3002_, 1);
lean_inc_ref(v_arg_3011_);
lean_dec_ref(v___x_3002_);
v___x_3012_ = l_Lean_Meta_Grind_markCaseSplitAsResolved(v_arg_3009_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_, v_a_2981_, v_a_2982_, v_a_2983_);
if (lean_obj_tag(v___x_3012_) == 0)
{
lean_object* v___x_3013_; 
lean_dec_ref_known(v___x_3012_, 1);
lean_inc_ref(v_e_2973_);
v___x_3013_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_, v_a_2981_, v_a_2982_, v_a_2983_);
if (lean_obj_tag(v___x_3013_) == 0)
{
lean_object* v_a_3014_; lean_object* v___x_3015_; uint8_t v___x_3016_; lean_object* v___x_3017_; 
v_a_3014_ = lean_ctor_get(v___x_3013_, 0);
lean_inc(v_a_3014_);
lean_dec_ref_known(v___x_3013_, 1);
v___x_3015_ = l_Lean_Meta_mkOfEqTrueCore(v_e_2973_, v_a_3014_);
v___x_3016_ = 0;
v___x_3017_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_arg_3011_, v_arg_3010_, v___x_3015_, v___x_3016_, v_a_2974_, v_a_2976_, v_a_2980_, v_a_2981_, v_a_2982_, v_a_2983_);
return v___x_3017_;
}
else
{
lean_object* v_a_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3025_; 
lean_dec_ref(v_arg_3011_);
lean_dec_ref(v_arg_3010_);
lean_dec_ref(v_e_2973_);
v_a_3018_ = lean_ctor_get(v___x_3013_, 0);
v_isSharedCheck_3025_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3025_ == 0)
{
v___x_3020_ = v___x_3013_;
v_isShared_3021_ = v_isSharedCheck_3025_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_a_3018_);
lean_dec(v___x_3013_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3025_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v___x_3023_; 
if (v_isShared_3021_ == 0)
{
v___x_3023_ = v___x_3020_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v_a_3018_);
v___x_3023_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
return v___x_3023_;
}
}
}
}
else
{
lean_dec_ref(v_arg_3011_);
lean_dec_ref(v_arg_3010_);
lean_dec_ref(v_e_2973_);
return v___x_3012_;
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
lean_object* v_a_3027_; lean_object* v___x_3029_; uint8_t v_isShared_3030_; uint8_t v_isSharedCheck_3034_; 
lean_dec_ref(v_e_2973_);
v_a_3027_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3034_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3034_ == 0)
{
v___x_3029_ = v___x_2988_;
v_isShared_3030_ = v_isSharedCheck_3034_;
goto v_resetjp_3028_;
}
else
{
lean_inc(v_a_3027_);
lean_dec(v___x_2988_);
v___x_3029_ = lean_box(0);
v_isShared_3030_ = v_isSharedCheck_3034_;
goto v_resetjp_3028_;
}
v_resetjp_3028_:
{
lean_object* v___x_3032_; 
if (v_isShared_3030_ == 0)
{
v___x_3032_ = v___x_3029_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v_a_3027_);
v___x_3032_ = v_reuseFailAlloc_3033_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
return v___x_3032_;
}
}
}
v___jp_2985_:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2986_ = lean_box(0);
v___x_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2987_, 0, v___x_2986_);
return v___x_2987_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqMatchDown___boxed(lean_object* v_e_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_, lean_object* v_a_3044_, lean_object* v_a_3045_, lean_object* v_a_3046_){
_start:
{
lean_object* v_res_3047_; 
v_res_3047_ = l_Lean_Meta_Grind_propagateEqMatchDown(v_e_3035_, v_a_3036_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_, v_a_3041_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
lean_dec(v_a_3045_);
lean_dec_ref(v_a_3044_);
lean_dec(v_a_3043_);
lean_dec_ref(v_a_3042_);
lean_dec(v_a_3041_);
lean_dec_ref(v_a_3040_);
lean_dec(v_a_3039_);
lean_dec_ref(v_a_3038_);
lean_dec(v_a_3037_);
lean_dec(v_a_3036_);
return v_res_3047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqMatchDown___regBuiltin_Lean_Meta_Grind_propagateEqMatchDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4201098355____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; 
v___x_3049_ = ((lean_object*)(l_Lean_Meta_Grind_propagateEqMatchDown___closed__1));
v___x_3050_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateEqMatchDown___boxed), 12, 0);
v___x_3051_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_3049_, v___x_3050_);
return v___x_3051_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqMatchDown___regBuiltin_Lean_Meta_Grind_propagateEqMatchDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4201098355____hygCtx___hyg_9____boxed(lean_object* v_a_3052_){
_start:
{
lean_object* v_res_3053_; 
v_res_3053_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqMatchDown___regBuiltin_Lean_Meta_Grind_propagateEqMatchDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4201098355____hygCtx___hyg_9_();
return v_res_3053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqDown(lean_object* v_e_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_, lean_object* v_a_3060_, lean_object* v_a_3061_, lean_object* v_a_3062_, lean_object* v_a_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_){
_start:
{
lean_object* v___x_3072_; 
lean_inc_ref(v_e_3057_);
v___x_3072_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_3057_, v_a_3058_, v_a_3062_, v_a_3064_, v_a_3065_, v_a_3066_, v_a_3067_);
if (lean_obj_tag(v___x_3072_) == 0)
{
lean_object* v_a_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3107_; 
v_a_3073_ = lean_ctor_get(v___x_3072_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3075_ = v___x_3072_;
v_isShared_3076_ = v_isSharedCheck_3107_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_a_3073_);
lean_dec(v___x_3072_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3107_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
uint8_t v___x_3077_; 
v___x_3077_ = lean_unbox(v_a_3073_);
lean_dec(v_a_3073_);
if (v___x_3077_ == 0)
{
lean_object* v___x_3078_; lean_object* v___x_3080_; 
lean_dec_ref(v_e_3057_);
v___x_3078_ = lean_box(0);
if (v_isShared_3076_ == 0)
{
lean_ctor_set(v___x_3075_, 0, v___x_3078_);
v___x_3080_ = v___x_3075_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v___x_3078_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
else
{
lean_object* v___x_3082_; uint8_t v___x_3083_; 
lean_del_object(v___x_3075_);
v___x_3082_ = l_Lean_Expr_cleanupAnnotations(v_e_3057_);
v___x_3083_ = l_Lean_Expr_isApp(v___x_3082_);
if (v___x_3083_ == 0)
{
lean_dec_ref(v___x_3082_);
lean_dec_ref(v_e_3057_);
goto v___jp_3069_;
}
else
{
lean_object* v___x_3084_; uint8_t v___x_3085_; 
v___x_3084_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3082_);
v___x_3085_ = l_Lean_Expr_isApp(v___x_3084_);
if (v___x_3085_ == 0)
{
lean_dec_ref(v___x_3084_);
lean_dec_ref(v___x_3082_);
lean_dec_ref(v_e_3057_);
goto v___jp_3069_;
}
else
{
lean_object* v___x_3086_; uint8_t v___x_3087_; 
v___x_3086_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3084_);
lean_dec_ref(v___x_3084_);
v___x_3087_ = l_Lean_Expr_isApp(v___x_3086_);
if (v___x_3087_ == 0)
{
lean_dec_ref(v___x_3086_);
lean_dec_ref(v___x_3082_);
lean_dec_ref(v_e_3057_);
goto v___jp_3069_;
}
else
{
lean_object* v___x_3088_; uint8_t v___x_3089_; 
v___x_3088_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3086_);
v___x_3089_ = l_Lean_Expr_isApp(v___x_3088_);
if (v___x_3089_ == 0)
{
lean_dec_ref(v___x_3088_);
lean_dec_ref(v___x_3086_);
lean_dec_ref(v___x_3082_);
lean_dec_ref(v_e_3057_);
goto v___jp_3069_;
}
else
{
lean_object* v___x_3090_; lean_object* v___x_3091_; uint8_t v___x_3092_; 
v___x_3090_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3088_);
lean_dec_ref(v___x_3088_);
v___x_3091_ = ((lean_object*)(l_Lean_Meta_Grind_propagateHEqDown___closed__1));
v___x_3092_ = l_Lean_Expr_isConstOf(v___x_3090_, v___x_3091_);
lean_dec_ref(v___x_3090_);
if (v___x_3092_ == 0)
{
lean_dec_ref(v___x_3086_);
lean_dec_ref(v___x_3082_);
lean_dec_ref(v_e_3057_);
goto v___jp_3069_;
}
else
{
lean_object* v_arg_3093_; lean_object* v_arg_3094_; lean_object* v___x_3095_; 
v_arg_3093_ = lean_ctor_get(v___x_3082_, 1);
lean_inc_ref(v_arg_3093_);
lean_dec_ref(v___x_3082_);
v_arg_3094_ = lean_ctor_get(v___x_3086_, 1);
lean_inc_ref(v_arg_3094_);
lean_dec_ref(v___x_3086_);
lean_inc_ref(v_e_3057_);
v___x_3095_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_, v_a_3063_, v_a_3064_, v_a_3065_, v_a_3066_, v_a_3067_);
if (lean_obj_tag(v___x_3095_) == 0)
{
lean_object* v_a_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v_a_3096_ = lean_ctor_get(v___x_3095_, 0);
lean_inc(v_a_3096_);
lean_dec_ref_known(v___x_3095_, 1);
v___x_3097_ = l_Lean_Meta_mkOfEqTrueCore(v_e_3057_, v_a_3096_);
v___x_3098_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_arg_3094_, v_arg_3093_, v___x_3097_, v___x_3092_, v_a_3058_, v_a_3060_, v_a_3064_, v_a_3065_, v_a_3066_, v_a_3067_);
return v___x_3098_;
}
else
{
lean_object* v_a_3099_; lean_object* v___x_3101_; uint8_t v_isShared_3102_; uint8_t v_isSharedCheck_3106_; 
lean_dec_ref(v_arg_3094_);
lean_dec_ref(v_arg_3093_);
lean_dec_ref(v_e_3057_);
v_a_3099_ = lean_ctor_get(v___x_3095_, 0);
v_isSharedCheck_3106_ = !lean_is_exclusive(v___x_3095_);
if (v_isSharedCheck_3106_ == 0)
{
v___x_3101_ = v___x_3095_;
v_isShared_3102_ = v_isSharedCheck_3106_;
goto v_resetjp_3100_;
}
else
{
lean_inc(v_a_3099_);
lean_dec(v___x_3095_);
v___x_3101_ = lean_box(0);
v_isShared_3102_ = v_isSharedCheck_3106_;
goto v_resetjp_3100_;
}
v_resetjp_3100_:
{
lean_object* v___x_3104_; 
if (v_isShared_3102_ == 0)
{
v___x_3104_ = v___x_3101_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3105_; 
v_reuseFailAlloc_3105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3105_, 0, v_a_3099_);
v___x_3104_ = v_reuseFailAlloc_3105_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
return v___x_3104_;
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
}
else
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3115_; 
lean_dec_ref(v_e_3057_);
v_a_3108_ = lean_ctor_get(v___x_3072_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3110_ = v___x_3072_;
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v___x_3072_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v___x_3113_; 
if (v_isShared_3111_ == 0)
{
v___x_3113_ = v___x_3110_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v_a_3108_);
v___x_3113_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
return v___x_3113_;
}
}
}
v___jp_3069_:
{
lean_object* v___x_3070_; lean_object* v___x_3071_; 
v___x_3070_ = lean_box(0);
v___x_3071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3071_, 0, v___x_3070_);
return v___x_3071_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqDown___boxed(lean_object* v_e_3116_, lean_object* v_a_3117_, lean_object* v_a_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_, lean_object* v_a_3127_){
_start:
{
lean_object* v_res_3128_; 
v_res_3128_ = l_Lean_Meta_Grind_propagateHEqDown(v_e_3116_, v_a_3117_, v_a_3118_, v_a_3119_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
lean_dec(v_a_3126_);
lean_dec_ref(v_a_3125_);
lean_dec(v_a_3124_);
lean_dec_ref(v_a_3123_);
lean_dec(v_a_3122_);
lean_dec_ref(v_a_3121_);
lean_dec(v_a_3120_);
lean_dec_ref(v_a_3119_);
lean_dec(v_a_3118_);
lean_dec(v_a_3117_);
return v_res_3128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqDown___regBuiltin_Lean_Meta_Grind_propagateHEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_735922284____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; 
v___x_3130_ = ((lean_object*)(l_Lean_Meta_Grind_propagateHEqDown___closed__1));
v___x_3131_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateHEqDown___boxed), 12, 0);
v___x_3132_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_3130_, v___x_3131_);
return v___x_3132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqDown___regBuiltin_Lean_Meta_Grind_propagateHEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_735922284____hygCtx___hyg_9____boxed(lean_object* v_a_3133_){
_start:
{
lean_object* v_res_3134_; 
v_res_3134_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqDown___regBuiltin_Lean_Meta_Grind_propagateHEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_735922284____hygCtx___hyg_9_();
return v_res_3134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqUp(lean_object* v_e_3135_, lean_object* v_a_3136_, lean_object* v_a_3137_, lean_object* v_a_3138_, lean_object* v_a_3139_, lean_object* v_a_3140_, lean_object* v_a_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_, lean_object* v_a_3144_, lean_object* v_a_3145_){
_start:
{
lean_object* v___x_3150_; uint8_t v___x_3151_; 
v___x_3150_ = l_Lean_Expr_cleanupAnnotations(v_e_3135_);
v___x_3151_ = l_Lean_Expr_isApp(v___x_3150_);
if (v___x_3151_ == 0)
{
lean_dec_ref(v___x_3150_);
lean_dec_ref(v_e_3135_);
goto v___jp_3147_;
}
else
{
lean_object* v___x_3152_; uint8_t v___x_3153_; 
v___x_3152_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3150_);
v___x_3153_ = l_Lean_Expr_isApp(v___x_3152_);
if (v___x_3153_ == 0)
{
lean_dec_ref(v___x_3152_);
lean_dec_ref(v___x_3150_);
lean_dec_ref(v_e_3135_);
goto v___jp_3147_;
}
else
{
lean_object* v___x_3154_; uint8_t v___x_3155_; 
v___x_3154_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3152_);
lean_dec_ref(v___x_3152_);
v___x_3155_ = l_Lean_Expr_isApp(v___x_3154_);
if (v___x_3155_ == 0)
{
lean_dec_ref(v___x_3154_);
lean_dec_ref(v___x_3150_);
lean_dec_ref(v_e_3135_);
goto v___jp_3147_;
}
else
{
lean_object* v___x_3156_; uint8_t v___x_3157_; 
v___x_3156_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3154_);
v___x_3157_ = l_Lean_Expr_isApp(v___x_3156_);
if (v___x_3157_ == 0)
{
lean_dec_ref(v___x_3156_);
lean_dec_ref(v___x_3154_);
lean_dec_ref(v___x_3150_);
lean_dec_ref(v_e_3135_);
goto v___jp_3147_;
}
else
{
lean_object* v___x_3158_; lean_object* v___x_3159_; uint8_t v___x_3160_; 
v___x_3158_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3156_);
lean_dec_ref(v___x_3156_);
v___x_3159_ = ((lean_object*)(l_Lean_Meta_Grind_propagateHEqDown___closed__1));
v___x_3160_ = l_Lean_Expr_isConstOf(v___x_3158_, v___x_3159_);
lean_dec_ref(v___x_3158_);
if (v___x_3160_ == 0)
{
lean_dec_ref(v___x_3154_);
lean_dec_ref(v___x_3150_);
lean_dec_ref(v_e_3135_);
goto v___jp_3147_;
}
else
{
lean_object* v_arg_3161_; lean_object* v_arg_3162_; lean_object* v___x_3163_; 
v_arg_3161_ = lean_ctor_get(v___x_3150_, 1);
lean_inc_ref(v_arg_3161_);
lean_dec_ref(v___x_3150_);
v_arg_3162_ = lean_ctor_get(v___x_3154_, 1);
lean_inc_ref(v_arg_3162_);
lean_dec_ref(v___x_3154_);
v___x_3163_ = l_Lean_Meta_Grind_isEqv___redArg(v_arg_3162_, v_arg_3161_, v_a_3136_);
if (lean_obj_tag(v___x_3163_) == 0)
{
lean_object* v_a_3164_; lean_object* v___x_3166_; uint8_t v_isShared_3167_; uint8_t v_isSharedCheck_3185_; 
v_a_3164_ = lean_ctor_get(v___x_3163_, 0);
v_isSharedCheck_3185_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3185_ == 0)
{
v___x_3166_ = v___x_3163_;
v_isShared_3167_ = v_isSharedCheck_3185_;
goto v_resetjp_3165_;
}
else
{
lean_inc(v_a_3164_);
lean_dec(v___x_3163_);
v___x_3166_ = lean_box(0);
v_isShared_3167_ = v_isSharedCheck_3185_;
goto v_resetjp_3165_;
}
v_resetjp_3165_:
{
uint8_t v___x_3168_; 
v___x_3168_ = lean_unbox(v_a_3164_);
lean_dec(v_a_3164_);
if (v___x_3168_ == 0)
{
lean_object* v___x_3169_; lean_object* v___x_3171_; 
lean_dec_ref(v_arg_3162_);
lean_dec_ref(v_arg_3161_);
lean_dec_ref(v_e_3135_);
v___x_3169_ = lean_box(0);
if (v_isShared_3167_ == 0)
{
lean_ctor_set(v___x_3166_, 0, v___x_3169_);
v___x_3171_ = v___x_3166_;
goto v_reusejp_3170_;
}
else
{
lean_object* v_reuseFailAlloc_3172_; 
v_reuseFailAlloc_3172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3172_, 0, v___x_3169_);
v___x_3171_ = v_reuseFailAlloc_3172_;
goto v_reusejp_3170_;
}
v_reusejp_3170_:
{
return v___x_3171_;
}
}
else
{
lean_object* v___x_3173_; 
lean_del_object(v___x_3166_);
lean_inc(v_a_3145_);
lean_inc_ref(v_a_3144_);
lean_inc(v_a_3143_);
lean_inc_ref(v_a_3142_);
lean_inc(v_a_3141_);
lean_inc_ref(v_a_3140_);
lean_inc(v_a_3139_);
lean_inc_ref(v_a_3138_);
lean_inc(v_a_3137_);
lean_inc(v_a_3136_);
v___x_3173_ = lean_grind_mk_heq_proof(v_arg_3162_, v_arg_3161_, v_a_3136_, v_a_3137_, v_a_3138_, v_a_3139_, v_a_3140_, v_a_3141_, v_a_3142_, v_a_3143_, v_a_3144_, v_a_3145_);
if (lean_obj_tag(v___x_3173_) == 0)
{
lean_object* v_a_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; 
v_a_3174_ = lean_ctor_get(v___x_3173_, 0);
lean_inc(v_a_3174_);
lean_dec_ref_known(v___x_3173_, 1);
lean_inc_ref(v_e_3135_);
v___x_3175_ = l_Lean_Meta_mkEqTrueCore(v_e_3135_, v_a_3174_);
v___x_3176_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_3135_, v___x_3175_, v_a_3136_, v_a_3138_, v_a_3140_, v_a_3142_, v_a_3143_, v_a_3144_, v_a_3145_);
return v___x_3176_;
}
else
{
lean_object* v_a_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3184_; 
lean_dec_ref(v_e_3135_);
v_a_3177_ = lean_ctor_get(v___x_3173_, 0);
v_isSharedCheck_3184_ = !lean_is_exclusive(v___x_3173_);
if (v_isSharedCheck_3184_ == 0)
{
v___x_3179_ = v___x_3173_;
v_isShared_3180_ = v_isSharedCheck_3184_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_a_3177_);
lean_dec(v___x_3173_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3184_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
lean_object* v___x_3182_; 
if (v_isShared_3180_ == 0)
{
v___x_3182_ = v___x_3179_;
goto v_reusejp_3181_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v_a_3177_);
v___x_3182_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3181_;
}
v_reusejp_3181_:
{
return v___x_3182_;
}
}
}
}
}
}
else
{
lean_object* v_a_3186_; lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3193_; 
lean_dec_ref(v_arg_3162_);
lean_dec_ref(v_arg_3161_);
lean_dec_ref(v_e_3135_);
v_a_3186_ = lean_ctor_get(v___x_3163_, 0);
v_isSharedCheck_3193_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3193_ == 0)
{
v___x_3188_ = v___x_3163_;
v_isShared_3189_ = v_isSharedCheck_3193_;
goto v_resetjp_3187_;
}
else
{
lean_inc(v_a_3186_);
lean_dec(v___x_3163_);
v___x_3188_ = lean_box(0);
v_isShared_3189_ = v_isSharedCheck_3193_;
goto v_resetjp_3187_;
}
v_resetjp_3187_:
{
lean_object* v___x_3191_; 
if (v_isShared_3189_ == 0)
{
v___x_3191_ = v___x_3188_;
goto v_reusejp_3190_;
}
else
{
lean_object* v_reuseFailAlloc_3192_; 
v_reuseFailAlloc_3192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3192_, 0, v_a_3186_);
v___x_3191_ = v_reuseFailAlloc_3192_;
goto v_reusejp_3190_;
}
v_reusejp_3190_:
{
return v___x_3191_;
}
}
}
}
}
}
}
}
v___jp_3147_:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3148_ = lean_box(0);
v___x_3149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3148_);
return v___x_3149_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqUp___boxed(lean_object* v_e_3194_, lean_object* v_a_3195_, lean_object* v_a_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_, lean_object* v_a_3202_, lean_object* v_a_3203_, lean_object* v_a_3204_, lean_object* v_a_3205_){
_start:
{
lean_object* v_res_3206_; 
v_res_3206_ = l_Lean_Meta_Grind_propagateHEqUp(v_e_3194_, v_a_3195_, v_a_3196_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_, v_a_3201_, v_a_3202_, v_a_3203_, v_a_3204_);
lean_dec(v_a_3204_);
lean_dec_ref(v_a_3203_);
lean_dec(v_a_3202_);
lean_dec_ref(v_a_3201_);
lean_dec(v_a_3200_);
lean_dec_ref(v_a_3199_);
lean_dec(v_a_3198_);
lean_dec_ref(v_a_3197_);
lean_dec(v_a_3196_);
lean_dec(v_a_3195_);
return v_res_3206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqUp___regBuiltin_Lean_Meta_Grind_propagateHEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3328109199____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; 
v___x_3208_ = ((lean_object*)(l_Lean_Meta_Grind_propagateHEqDown___closed__1));
v___x_3209_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateHEqUp___boxed), 12, 0);
v___x_3210_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_3208_, v___x_3209_);
return v___x_3210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqUp___regBuiltin_Lean_Meta_Grind_propagateHEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3328109199____hygCtx___hyg_9____boxed(lean_object* v_a_3211_){
_start:
{
lean_object* v_res_3212_; 
v_res_3212_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqUp___regBuiltin_Lean_Meta_Grind_propagateHEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3328109199____hygCtx___hyg_9_();
return v_res_3212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun_go(lean_object* v_e_3213_, lean_object* v_args_3214_, lean_object* v_rhs_3215_, lean_object* v_h_3216_, lean_object* v_i_3217_, lean_object* v_a_3218_, lean_object* v_a_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_, lean_object* v_a_3223_, lean_object* v_a_3224_, lean_object* v_a_3225_, lean_object* v_a_3226_, lean_object* v_a_3227_){
_start:
{
lean_object* v___x_3229_; uint8_t v___x_3230_; 
v___x_3229_ = lean_array_get_size(v_args_3214_);
v___x_3230_ = lean_nat_dec_lt(v_i_3217_, v___x_3229_);
if (v___x_3230_ == 0)
{
lean_object* v___x_3231_; lean_object* v___x_3232_; 
lean_dec(v_i_3217_);
v___x_3231_ = l_Lean_Expr_headBeta(v_rhs_3215_);
v___x_3232_ = l_Lean_Meta_Grind_preprocessLight___redArg(v___x_3231_, v_a_3219_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_object* v_a_3233_; lean_object* v___x_3234_; 
v_a_3233_ = lean_ctor_get(v___x_3232_, 0);
lean_inc(v_a_3233_);
lean_dec_ref_known(v___x_3232_, 1);
v___x_3234_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_3213_, v_a_3218_);
if (lean_obj_tag(v___x_3234_) == 0)
{
lean_object* v_a_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; 
v_a_3235_ = lean_ctor_get(v___x_3234_, 0);
lean_inc(v_a_3235_);
lean_dec_ref_known(v___x_3234_, 1);
lean_inc_ref(v_e_3213_);
v___x_3236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3236_, 0, v_e_3213_);
lean_inc(v_a_3227_);
lean_inc_ref(v_a_3226_);
lean_inc(v_a_3225_);
lean_inc_ref(v_a_3224_);
lean_inc(v_a_3223_);
lean_inc_ref(v_a_3222_);
lean_inc(v_a_3221_);
lean_inc_ref(v_a_3220_);
lean_inc(v_a_3219_);
lean_inc(v_a_3218_);
lean_inc(v_a_3233_);
v___x_3237_ = lean_grind_internalize(v_a_3233_, v_a_3235_, v___x_3236_, v_a_3218_, v_a_3219_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
if (lean_obj_tag(v___x_3237_) == 0)
{
lean_object* v___x_3238_; 
lean_dec_ref_known(v___x_3237_, 1);
v___x_3238_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_3213_, v_a_3233_, v_h_3216_, v___x_3230_, v_a_3218_, v_a_3220_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
return v___x_3238_;
}
else
{
lean_dec(v_a_3233_);
lean_dec_ref(v_h_3216_);
lean_dec_ref(v_e_3213_);
return v___x_3237_;
}
}
else
{
lean_object* v_a_3239_; lean_object* v___x_3241_; uint8_t v_isShared_3242_; uint8_t v_isSharedCheck_3246_; 
lean_dec(v_a_3233_);
lean_dec_ref(v_h_3216_);
lean_dec_ref(v_e_3213_);
v_a_3239_ = lean_ctor_get(v___x_3234_, 0);
v_isSharedCheck_3246_ = !lean_is_exclusive(v___x_3234_);
if (v_isSharedCheck_3246_ == 0)
{
v___x_3241_ = v___x_3234_;
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
else
{
lean_inc(v_a_3239_);
lean_dec(v___x_3234_);
v___x_3241_ = lean_box(0);
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
v_resetjp_3240_:
{
lean_object* v___x_3244_; 
if (v_isShared_3242_ == 0)
{
v___x_3244_ = v___x_3241_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v_a_3239_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
}
}
else
{
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3254_; 
lean_dec_ref(v_h_3216_);
lean_dec_ref(v_e_3213_);
v_a_3247_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3254_ == 0)
{
v___x_3249_ = v___x_3232_;
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v___x_3232_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v___x_3252_; 
if (v_isShared_3250_ == 0)
{
v___x_3252_ = v___x_3249_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3253_; 
v_reuseFailAlloc_3253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3253_, 0, v_a_3247_);
v___x_3252_ = v_reuseFailAlloc_3253_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
return v___x_3252_;
}
}
}
}
else
{
lean_object* v_arg_3255_; lean_object* v_rhs_x27_3256_; lean_object* v___x_3257_; 
v_arg_3255_ = lean_array_fget_borrowed(v_args_3214_, v_i_3217_);
lean_inc_n(v_arg_3255_, 2);
v_rhs_x27_3256_ = l_Lean_Expr_app___override(v_rhs_3215_, v_arg_3255_);
v___x_3257_ = l_Lean_Meta_mkCongrFun(v_h_3216_, v_arg_3255_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
if (lean_obj_tag(v___x_3257_) == 0)
{
lean_object* v_a_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; 
v_a_3258_ = lean_ctor_get(v___x_3257_, 0);
lean_inc(v_a_3258_);
lean_dec_ref_known(v___x_3257_, 1);
v___x_3259_ = lean_unsigned_to_nat(1u);
v___x_3260_ = lean_nat_add(v_i_3217_, v___x_3259_);
lean_dec(v_i_3217_);
v_rhs_3215_ = v_rhs_x27_3256_;
v_h_3216_ = v_a_3258_;
v_i_3217_ = v___x_3260_;
goto _start;
}
else
{
lean_object* v_a_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3269_; 
lean_dec_ref(v_rhs_x27_3256_);
lean_dec(v_i_3217_);
lean_dec_ref(v_e_3213_);
v_a_3262_ = lean_ctor_get(v___x_3257_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3264_ = v___x_3257_;
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_a_3262_);
lean_dec(v___x_3257_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3267_; 
if (v_isShared_3265_ == 0)
{
v___x_3267_ = v___x_3264_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3268_; 
v_reuseFailAlloc_3268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3268_, 0, v_a_3262_);
v___x_3267_ = v_reuseFailAlloc_3268_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
return v___x_3267_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun_go___boxed(lean_object* v_e_3270_, lean_object* v_args_3271_, lean_object* v_rhs_3272_, lean_object* v_h_3273_, lean_object* v_i_3274_, lean_object* v_a_3275_, lean_object* v_a_3276_, lean_object* v_a_3277_, lean_object* v_a_3278_, lean_object* v_a_3279_, lean_object* v_a_3280_, lean_object* v_a_3281_, lean_object* v_a_3282_, lean_object* v_a_3283_, lean_object* v_a_3284_, lean_object* v_a_3285_){
_start:
{
lean_object* v_res_3286_; 
v_res_3286_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun_go(v_e_3270_, v_args_3271_, v_rhs_3272_, v_h_3273_, v_i_3274_, v_a_3275_, v_a_3276_, v_a_3277_, v_a_3278_, v_a_3279_, v_a_3280_, v_a_3281_, v_a_3282_, v_a_3283_, v_a_3284_);
lean_dec(v_a_3284_);
lean_dec_ref(v_a_3283_);
lean_dec(v_a_3282_);
lean_dec_ref(v_a_3281_);
lean_dec(v_a_3280_);
lean_dec_ref(v_a_3279_);
lean_dec(v_a_3278_);
lean_dec_ref(v_a_3277_);
lean_dec(v_a_3276_);
lean_dec(v_a_3275_);
lean_dec_ref(v_args_3271_);
return v_res_3286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(lean_object* v_e_3287_, lean_object* v_rhs_3288_, lean_object* v_h_3289_, lean_object* v_prefixSize_3290_, lean_object* v_args_3291_, uint8_t v_ite_3292_, lean_object* v_a_3293_, lean_object* v_a_3294_, lean_object* v_a_3295_, lean_object* v_a_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_, lean_object* v_a_3302_){
_start:
{
lean_object* v___y_3305_; lean_object* v___y_3306_; lean_object* v___y_3307_; lean_object* v___y_3308_; lean_object* v___y_3309_; lean_object* v___y_3310_; lean_object* v___x_3313_; uint8_t v___x_3314_; 
v___x_3313_ = lean_array_get_size(v_args_3291_);
v___x_3314_ = lean_nat_dec_eq(v_prefixSize_3290_, v___x_3313_);
if (v___x_3314_ == 0)
{
lean_object* v___x_3315_; 
v___x_3315_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun_go(v_e_3287_, v_args_3291_, v_rhs_3288_, v_h_3289_, v_prefixSize_3290_, v_a_3293_, v_a_3294_, v_a_3295_, v_a_3296_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_);
return v___x_3315_;
}
else
{
lean_object* v___x_3316_; 
lean_dec(v_prefixSize_3290_);
v___x_3316_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_3287_, v_a_3293_);
if (lean_obj_tag(v___x_3316_) == 0)
{
lean_object* v_a_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v_a_3317_ = lean_ctor_get(v___x_3316_, 0);
lean_inc(v_a_3317_);
lean_dec_ref_known(v___x_3316_, 1);
lean_inc_ref(v_e_3287_);
v___x_3318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3318_, 0, v_e_3287_);
lean_inc(v_a_3302_);
lean_inc_ref(v_a_3301_);
lean_inc(v_a_3300_);
lean_inc_ref(v_a_3299_);
lean_inc(v_a_3298_);
lean_inc_ref(v_a_3297_);
lean_inc(v_a_3296_);
lean_inc_ref(v_a_3295_);
lean_inc(v_a_3294_);
lean_inc(v_a_3293_);
lean_inc_ref(v_rhs_3288_);
v___x_3319_ = lean_grind_internalize(v_rhs_3288_, v_a_3317_, v___x_3318_, v_a_3293_, v_a_3294_, v_a_3295_, v_a_3296_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_);
if (lean_obj_tag(v___x_3319_) == 0)
{
lean_dec_ref_known(v___x_3319_, 1);
if (v_ite_3292_ == 0)
{
v___y_3305_ = v_a_3293_;
v___y_3306_ = v_a_3295_;
v___y_3307_ = v_a_3299_;
v___y_3308_ = v_a_3300_;
v___y_3309_ = v_a_3301_;
v___y_3310_ = v_a_3302_;
goto v___jp_3304_;
}
else
{
lean_object* v___x_3320_; 
lean_inc_ref(v_rhs_3288_);
lean_inc_ref(v_e_3287_);
v___x_3320_ = l_Lean_Meta_Grind_registerParent___redArg(v_e_3287_, v_rhs_3288_, v_a_3293_);
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_dec_ref_known(v___x_3320_, 1);
v___y_3305_ = v_a_3293_;
v___y_3306_ = v_a_3295_;
v___y_3307_ = v_a_3299_;
v___y_3308_ = v_a_3300_;
v___y_3309_ = v_a_3301_;
v___y_3310_ = v_a_3302_;
goto v___jp_3304_;
}
else
{
lean_dec_ref(v_h_3289_);
lean_dec_ref(v_rhs_3288_);
lean_dec_ref(v_e_3287_);
return v___x_3320_;
}
}
}
else
{
lean_dec_ref(v_h_3289_);
lean_dec_ref(v_rhs_3288_);
lean_dec_ref(v_e_3287_);
return v___x_3319_;
}
}
else
{
lean_object* v_a_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3328_; 
lean_dec_ref(v_h_3289_);
lean_dec_ref(v_rhs_3288_);
lean_dec_ref(v_e_3287_);
v_a_3321_ = lean_ctor_get(v___x_3316_, 0);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3316_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3323_ = v___x_3316_;
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_a_3321_);
lean_dec(v___x_3316_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v___x_3326_; 
if (v_isShared_3324_ == 0)
{
v___x_3326_ = v___x_3323_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v_a_3321_);
v___x_3326_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
return v___x_3326_;
}
}
}
}
v___jp_3304_:
{
uint8_t v___x_3311_; lean_object* v___x_3312_; 
v___x_3311_ = 0;
v___x_3312_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_3287_, v_rhs_3288_, v_h_3289_, v___x_3311_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_);
return v___x_3312_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun___boxed(lean_object** _args){
lean_object* v_e_3329_ = _args[0];
lean_object* v_rhs_3330_ = _args[1];
lean_object* v_h_3331_ = _args[2];
lean_object* v_prefixSize_3332_ = _args[3];
lean_object* v_args_3333_ = _args[4];
lean_object* v_ite_3334_ = _args[5];
lean_object* v_a_3335_ = _args[6];
lean_object* v_a_3336_ = _args[7];
lean_object* v_a_3337_ = _args[8];
lean_object* v_a_3338_ = _args[9];
lean_object* v_a_3339_ = _args[10];
lean_object* v_a_3340_ = _args[11];
lean_object* v_a_3341_ = _args[12];
lean_object* v_a_3342_ = _args[13];
lean_object* v_a_3343_ = _args[14];
lean_object* v_a_3344_ = _args[15];
lean_object* v_a_3345_ = _args[16];
_start:
{
uint8_t v_ite_boxed_3346_; lean_object* v_res_3347_; 
v_ite_boxed_3346_ = lean_unbox(v_ite_3334_);
v_res_3347_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(v_e_3329_, v_rhs_3330_, v_h_3331_, v_prefixSize_3332_, v_args_3333_, v_ite_boxed_3346_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_, v_a_3339_, v_a_3340_, v_a_3341_, v_a_3342_, v_a_3343_, v_a_3344_);
lean_dec(v_a_3344_);
lean_dec_ref(v_a_3343_);
lean_dec(v_a_3342_);
lean_dec_ref(v_a_3341_);
lean_dec(v_a_3340_);
lean_dec_ref(v_a_3339_);
lean_dec(v_a_3338_);
lean_dec_ref(v_a_3337_);
lean_dec(v_a_3336_);
lean_dec(v_a_3335_);
lean_dec_ref(v_args_3333_);
return v_res_3347_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateCond___closed__0(void){
_start:
{
lean_object* v___x_3348_; lean_object* v_dummy_3349_; 
v___x_3348_ = lean_box(0);
v_dummy_3349_ = l_Lean_Expr_sort___override(v___x_3348_);
return v_dummy_3349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateCond(lean_object* v_e_3373_, lean_object* v_a_3374_, lean_object* v_a_3375_, lean_object* v_a_3376_, lean_object* v_a_3377_, lean_object* v_a_3378_, lean_object* v_a_3379_, lean_object* v_a_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_, lean_object* v_a_3383_){
_start:
{
lean_object* v_dummy_3388_; lean_object* v_nargs_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v_args_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; uint8_t v___x_3396_; 
v_dummy_3388_ = lean_obj_once(&l_Lean_Meta_Grind_propagateCond___closed__0, &l_Lean_Meta_Grind_propagateCond___closed__0_once, _init_l_Lean_Meta_Grind_propagateCond___closed__0);
v_nargs_3389_ = l_Lean_Expr_getAppNumArgs(v_e_3373_);
lean_inc(v_nargs_3389_);
v___x_3390_ = lean_mk_array(v_nargs_3389_, v_dummy_3388_);
v___x_3391_ = lean_unsigned_to_nat(1u);
v___x_3392_ = lean_nat_sub(v_nargs_3389_, v___x_3391_);
lean_dec(v_nargs_3389_);
lean_inc_ref(v_e_3373_);
v_args_3393_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3373_, v___x_3390_, v___x_3392_);
v___x_3394_ = lean_array_get_size(v_args_3393_);
v___x_3395_ = lean_unsigned_to_nat(4u);
v___x_3396_ = lean_nat_dec_lt(v___x_3394_, v___x_3395_);
if (v___x_3396_ == 0)
{
lean_object* v___x_3397_; lean_object* v_c_3398_; lean_object* v___x_3399_; 
v___x_3397_ = l_Lean_instInhabitedExpr;
v_c_3398_ = lean_array_get_borrowed(v___x_3397_, v_args_3393_, v___x_3391_);
lean_inc_ref(v_e_3373_);
v___x_3399_ = l_Lean_Meta_Grind_condCondition(v_e_3373_, v_a_3380_, v_a_3381_, v_a_3382_, v_a_3383_);
if (lean_obj_tag(v___x_3399_) == 0)
{
lean_object* v_a_3400_; lean_object* v___x_3401_; 
v_a_3400_ = lean_ctor_get(v___x_3399_, 0);
lean_inc(v_a_3400_);
lean_dec_ref_known(v___x_3399_, 1);
v___x_3401_ = l_Lean_Meta_Sym_shareCommon(v_a_3400_, v_a_3378_, v_a_3379_, v_a_3380_, v_a_3381_, v_a_3382_, v_a_3383_);
if (lean_obj_tag(v___x_3401_) == 0)
{
lean_object* v_a_3402_; lean_object* v___x_3403_; 
v_a_3402_ = lean_ctor_get(v___x_3401_, 0);
lean_inc_n(v_a_3402_, 2);
lean_dec_ref_known(v___x_3401_, 1);
v___x_3403_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_a_3402_, v_a_3374_, v_a_3378_, v_a_3380_, v_a_3381_, v_a_3382_, v_a_3383_);
if (lean_obj_tag(v___x_3403_) == 0)
{
lean_object* v_a_3404_; uint8_t v___y_3406_; lean_object* v_proof_3407_; lean_object* v___y_3408_; lean_object* v___y_3409_; lean_object* v___y_3410_; lean_object* v___y_3411_; lean_object* v___y_3412_; lean_object* v___y_3413_; lean_object* v___y_3414_; lean_object* v___y_3415_; lean_object* v___y_3416_; lean_object* v___y_3417_; lean_object* v___y_3426_; lean_object* v___y_3427_; uint8_t v___y_3428_; lean_object* v___y_3429_; lean_object* v___y_3430_; lean_object* v___y_3431_; lean_object* v_value_3432_; lean_object* v___y_3433_; lean_object* v___y_3434_; lean_object* v___y_3435_; lean_object* v___y_3436_; lean_object* v___y_3437_; lean_object* v___y_3438_; lean_object* v___y_3439_; lean_object* v___y_3440_; lean_object* v___y_3441_; lean_object* v___y_3442_; lean_object* v___y_3486_; lean_object* v___y_3487_; lean_object* v___y_3488_; lean_object* v___y_3489_; lean_object* v___y_3490_; lean_object* v___y_3491_; lean_object* v___y_3492_; lean_object* v___y_3493_; lean_object* v___y_3494_; lean_object* v___y_3495_; uint8_t v___y_3496_; lean_object* v___y_3497_; lean_object* v___y_3498_; lean_object* v___y_3499_; lean_object* v___y_3500_; lean_object* v___y_3501_; uint8_t v___y_3524_; lean_object* v_hp_3525_; lean_object* v___y_3526_; lean_object* v___y_3527_; lean_object* v___y_3528_; lean_object* v___y_3529_; lean_object* v___y_3530_; lean_object* v___y_3531_; lean_object* v___y_3532_; lean_object* v___y_3533_; lean_object* v___y_3534_; lean_object* v___y_3535_; lean_object* v___x_3577_; 
v_a_3404_ = lean_ctor_get(v___x_3403_, 0);
lean_inc(v_a_3404_);
lean_dec_ref_known(v___x_3403_, 1);
lean_inc(v_a_3402_);
v___x_3577_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_a_3402_, v_a_3374_, v_a_3378_, v_a_3380_, v_a_3381_, v_a_3382_, v_a_3383_);
if (lean_obj_tag(v___x_3577_) == 0)
{
lean_object* v_a_3578_; uint8_t v___y_3580_; uint8_t v___x_3602_; 
v_a_3578_ = lean_ctor_get(v___x_3577_, 0);
lean_inc(v_a_3578_);
lean_dec_ref_known(v___x_3577_, 1);
v___x_3602_ = lean_unbox(v_a_3404_);
if (v___x_3602_ == 0)
{
uint8_t v___x_3603_; 
v___x_3603_ = lean_unbox(v_a_3578_);
if (v___x_3603_ == 0)
{
lean_dec(v_a_3578_);
lean_dec(v_a_3404_);
lean_dec(v_a_3402_);
lean_dec_ref(v_args_3393_);
lean_dec_ref(v_e_3373_);
goto v___jp_3385_;
}
else
{
uint8_t v___x_3604_; 
v___x_3604_ = lean_unbox(v_a_3578_);
lean_dec(v_a_3578_);
v___y_3580_ = v___x_3604_;
goto v___jp_3579_;
}
}
else
{
uint8_t v___x_3605_; 
lean_dec(v_a_3578_);
v___x_3605_ = lean_unbox(v_a_3404_);
v___y_3580_ = v___x_3605_;
goto v___jp_3579_;
}
v___jp_3579_:
{
uint8_t v___x_3581_; 
v___x_3581_ = lean_unbox(v_a_3404_);
if (v___x_3581_ == 0)
{
lean_object* v___x_3582_; 
lean_inc(v_a_3402_);
v___x_3582_ = l_Lean_Meta_Grind_mkEqFalseProof(v_a_3402_, v_a_3374_, v_a_3375_, v_a_3376_, v_a_3377_, v_a_3378_, v_a_3379_, v_a_3380_, v_a_3381_, v_a_3382_, v_a_3383_);
if (lean_obj_tag(v___x_3582_) == 0)
{
lean_object* v_a_3583_; 
v_a_3583_ = lean_ctor_get(v___x_3582_, 0);
lean_inc(v_a_3583_);
lean_dec_ref_known(v___x_3582_, 1);
v___y_3524_ = v___y_3580_;
v_hp_3525_ = v_a_3583_;
v___y_3526_ = v_a_3374_;
v___y_3527_ = v_a_3375_;
v___y_3528_ = v_a_3376_;
v___y_3529_ = v_a_3377_;
v___y_3530_ = v_a_3378_;
v___y_3531_ = v_a_3379_;
v___y_3532_ = v_a_3380_;
v___y_3533_ = v_a_3381_;
v___y_3534_ = v_a_3382_;
v___y_3535_ = v_a_3383_;
goto v___jp_3523_;
}
else
{
lean_object* v_a_3584_; lean_object* v___x_3586_; uint8_t v_isShared_3587_; uint8_t v_isSharedCheck_3591_; 
lean_dec(v_a_3404_);
lean_dec(v_a_3402_);
lean_dec_ref(v_args_3393_);
lean_dec_ref(v_e_3373_);
v_a_3584_ = lean_ctor_get(v___x_3582_, 0);
v_isSharedCheck_3591_ = !lean_is_exclusive(v___x_3582_);
if (v_isSharedCheck_3591_ == 0)
{
v___x_3586_ = v___x_3582_;
v_isShared_3587_ = v_isSharedCheck_3591_;
goto v_resetjp_3585_;
}
else
{
lean_inc(v_a_3584_);
lean_dec(v___x_3582_);
v___x_3586_ = lean_box(0);
v_isShared_3587_ = v_isSharedCheck_3591_;
goto v_resetjp_3585_;
}
v_resetjp_3585_:
{
lean_object* v___x_3589_; 
if (v_isShared_3587_ == 0)
{
v___x_3589_ = v___x_3586_;
goto v_reusejp_3588_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v_a_3584_);
v___x_3589_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3588_;
}
v_reusejp_3588_:
{
return v___x_3589_;
}
}
}
}
else
{
lean_object* v___x_3592_; 
lean_inc(v_a_3402_);
v___x_3592_ = l_Lean_Meta_Grind_mkEqTrueProof(v_a_3402_, v_a_3374_, v_a_3375_, v_a_3376_, v_a_3377_, v_a_3378_, v_a_3379_, v_a_3380_, v_a_3381_, v_a_3382_, v_a_3383_);
if (lean_obj_tag(v___x_3592_) == 0)
{
lean_object* v_a_3593_; 
v_a_3593_ = lean_ctor_get(v___x_3592_, 0);
lean_inc(v_a_3593_);
lean_dec_ref_known(v___x_3592_, 1);
v___y_3524_ = v___y_3580_;
v_hp_3525_ = v_a_3593_;
v___y_3526_ = v_a_3374_;
v___y_3527_ = v_a_3375_;
v___y_3528_ = v_a_3376_;
v___y_3529_ = v_a_3377_;
v___y_3530_ = v_a_3378_;
v___y_3531_ = v_a_3379_;
v___y_3532_ = v_a_3380_;
v___y_3533_ = v_a_3381_;
v___y_3534_ = v_a_3382_;
v___y_3535_ = v_a_3383_;
goto v___jp_3523_;
}
else
{
lean_object* v_a_3594_; lean_object* v___x_3596_; uint8_t v_isShared_3597_; uint8_t v_isSharedCheck_3601_; 
lean_dec(v_a_3404_);
lean_dec(v_a_3402_);
lean_dec_ref(v_args_3393_);
lean_dec_ref(v_e_3373_);
v_a_3594_ = lean_ctor_get(v___x_3592_, 0);
v_isSharedCheck_3601_ = !lean_is_exclusive(v___x_3592_);
if (v_isSharedCheck_3601_ == 0)
{
v___x_3596_ = v___x_3592_;
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
else
{
lean_inc(v_a_3594_);
lean_dec(v___x_3592_);
v___x_3596_ = lean_box(0);
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
v_resetjp_3595_:
{
lean_object* v___x_3599_; 
if (v_isShared_3597_ == 0)
{
v___x_3599_ = v___x_3596_;
goto v_reusejp_3598_;
}
else
{
lean_object* v_reuseFailAlloc_3600_; 
v_reuseFailAlloc_3600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3600_, 0, v_a_3594_);
v___x_3599_ = v_reuseFailAlloc_3600_;
goto v_reusejp_3598_;
}
v_reusejp_3598_:
{
return v___x_3599_;
}
}
}
}
}
}
else
{
lean_object* v_a_3606_; lean_object* v___x_3608_; uint8_t v_isShared_3609_; uint8_t v_isSharedCheck_3613_; 
lean_dec(v_a_3404_);
lean_dec(v_a_3402_);
lean_dec_ref(v_args_3393_);
lean_dec_ref(v_e_3373_);
v_a_3606_ = lean_ctor_get(v___x_3577_, 0);
v_isSharedCheck_3613_ = !lean_is_exclusive(v___x_3577_);
if (v_isSharedCheck_3613_ == 0)
{
v___x_3608_ = v___x_3577_;
v_isShared_3609_ = v_isSharedCheck_3613_;
goto v_resetjp_3607_;
}
else
{
lean_inc(v_a_3606_);
lean_dec(v___x_3577_);
v___x_3608_ = lean_box(0);
v_isShared_3609_ = v_isSharedCheck_3613_;
goto v_resetjp_3607_;
}
v_resetjp_3607_:
{
lean_object* v___x_3611_; 
if (v_isShared_3609_ == 0)
{
v___x_3611_ = v___x_3608_;
goto v_reusejp_3610_;
}
else
{
lean_object* v_reuseFailAlloc_3612_; 
v_reuseFailAlloc_3612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3612_, 0, v_a_3606_);
v___x_3611_ = v_reuseFailAlloc_3612_;
goto v_reusejp_3610_;
}
v_reusejp_3610_:
{
return v___x_3611_;
}
}
}
v___jp_3405_:
{
uint8_t v___x_3418_; 
v___x_3418_ = lean_unbox(v_a_3404_);
lean_dec(v_a_3404_);
if (v___x_3418_ == 0)
{
lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3419_ = lean_unsigned_to_nat(3u);
v___x_3420_ = lean_array_get(v___x_3397_, v_args_3393_, v___x_3419_);
v___x_3421_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(v_e_3373_, v___x_3420_, v_proof_3407_, v___x_3395_, v_args_3393_, v___y_3406_, v___y_3408_, v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_);
lean_dec_ref(v_args_3393_);
return v___x_3421_;
}
else
{
lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3422_ = lean_unsigned_to_nat(2u);
v___x_3423_ = lean_array_get(v___x_3397_, v_args_3393_, v___x_3422_);
v___x_3424_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(v_e_3373_, v___x_3423_, v_proof_3407_, v___x_3395_, v_args_3393_, v___y_3406_, v___y_3408_, v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_);
lean_dec_ref(v_args_3393_);
return v___x_3424_;
}
}
v___jp_3425_:
{
lean_object* v___x_3443_; lean_object* v___x_3444_; 
v___x_3443_ = lean_box(0);
lean_inc(v___y_3431_);
v___x_3444_ = l_Lean_Meta_mkDecisionProjectionProof(v___y_3431_, v___x_3443_, v___y_3439_, v___y_3440_, v___y_3441_, v___y_3442_);
if (lean_obj_tag(v___x_3444_) == 0)
{
lean_object* v_a_3445_; lean_object* v___x_3446_; 
v_a_3445_ = lean_ctor_get(v___x_3444_, 0);
lean_inc(v_a_3445_);
lean_dec_ref_known(v___x_3444_, 1);
lean_inc(v_c_3398_);
v___x_3446_ = l_Lean_Meta_mkEq(v_c_3398_, v_value_3432_, v___y_3439_, v___y_3440_, v___y_3441_, v___y_3442_);
if (lean_obj_tag(v___x_3446_) == 0)
{
lean_object* v_a_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; uint8_t v___x_3450_; 
v_a_3447_ = lean_ctor_get(v___x_3446_, 0);
lean_inc(v_a_3447_);
lean_dec_ref_known(v___x_3446_, 1);
v___x_3448_ = l_Lean_mkApp3(v_a_3445_, v___y_3430_, v___y_3426_, v___y_3427_);
v___x_3449_ = l_Lean_Meta_mkExpectedPropHint(v___x_3448_, v_a_3447_);
v___x_3450_ = lean_unbox(v_a_3404_);
if (v___x_3450_ == 0)
{
lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; 
v___x_3451_ = ((lean_object*)(l_Lean_Meta_Grind_propagateCond___closed__2));
v___x_3452_ = l_Lean_mkConst(v___x_3451_, v___y_3429_);
v___x_3453_ = lean_unsigned_to_nat(0u);
v___x_3454_ = lean_array_get_borrowed(v___x_3397_, v_args_3393_, v___x_3453_);
v___x_3455_ = lean_unsigned_to_nat(2u);
v___x_3456_ = lean_array_get_borrowed(v___x_3397_, v_args_3393_, v___x_3455_);
v___x_3457_ = lean_unsigned_to_nat(3u);
v___x_3458_ = lean_array_get_borrowed(v___x_3397_, v_args_3393_, v___x_3457_);
lean_inc(v___x_3458_);
lean_inc(v___x_3456_);
lean_inc(v_c_3398_);
lean_inc(v___x_3454_);
v___x_3459_ = l_Lean_mkApp5(v___x_3452_, v___x_3454_, v_c_3398_, v___x_3456_, v___x_3458_, v___x_3449_);
v___y_3406_ = v___y_3428_;
v_proof_3407_ = v___x_3459_;
v___y_3408_ = v___y_3433_;
v___y_3409_ = v___y_3434_;
v___y_3410_ = v___y_3435_;
v___y_3411_ = v___y_3436_;
v___y_3412_ = v___y_3437_;
v___y_3413_ = v___y_3438_;
v___y_3414_ = v___y_3439_;
v___y_3415_ = v___y_3440_;
v___y_3416_ = v___y_3441_;
v___y_3417_ = v___y_3442_;
goto v___jp_3405_;
}
else
{
lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; 
v___x_3460_ = ((lean_object*)(l_Lean_Meta_Grind_propagateCond___closed__4));
v___x_3461_ = l_Lean_mkConst(v___x_3460_, v___y_3429_);
v___x_3462_ = lean_unsigned_to_nat(0u);
v___x_3463_ = lean_array_get_borrowed(v___x_3397_, v_args_3393_, v___x_3462_);
v___x_3464_ = lean_unsigned_to_nat(2u);
v___x_3465_ = lean_array_get_borrowed(v___x_3397_, v_args_3393_, v___x_3464_);
v___x_3466_ = lean_unsigned_to_nat(3u);
v___x_3467_ = lean_array_get_borrowed(v___x_3397_, v_args_3393_, v___x_3466_);
lean_inc(v___x_3467_);
lean_inc(v___x_3465_);
lean_inc(v_c_3398_);
lean_inc(v___x_3463_);
v___x_3468_ = l_Lean_mkApp5(v___x_3461_, v___x_3463_, v_c_3398_, v___x_3449_, v___x_3465_, v___x_3467_);
v___y_3406_ = v___y_3428_;
v_proof_3407_ = v___x_3468_;
v___y_3408_ = v___y_3433_;
v___y_3409_ = v___y_3434_;
v___y_3410_ = v___y_3435_;
v___y_3411_ = v___y_3436_;
v___y_3412_ = v___y_3437_;
v___y_3413_ = v___y_3438_;
v___y_3414_ = v___y_3439_;
v___y_3415_ = v___y_3440_;
v___y_3416_ = v___y_3441_;
v___y_3417_ = v___y_3442_;
goto v___jp_3405_;
}
}
else
{
lean_object* v_a_3469_; lean_object* v___x_3471_; uint8_t v_isShared_3472_; uint8_t v_isSharedCheck_3476_; 
lean_dec(v_a_3445_);
lean_dec_ref(v___y_3430_);
lean_dec(v___y_3429_);
lean_dec_ref(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec(v_a_3404_);
lean_dec_ref(v_args_3393_);
lean_dec_ref(v_e_3373_);
v_a_3469_ = lean_ctor_get(v___x_3446_, 0);
v_isSharedCheck_3476_ = !lean_is_exclusive(v___x_3446_);
if (v_isSharedCheck_3476_ == 0)
{
v___x_3471_ = v___x_3446_;
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
else
{
lean_inc(v_a_3469_);
lean_dec(v___x_3446_);
v___x_3471_ = lean_box(0);
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
v_resetjp_3470_:
{
lean_object* v___x_3474_; 
if (v_isShared_3472_ == 0)
{
v___x_3474_ = v___x_3471_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3475_; 
v_reuseFailAlloc_3475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3475_, 0, v_a_3469_);
v___x_3474_ = v_reuseFailAlloc_3475_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
return v___x_3474_;
}
}
}
}
else
{
lean_object* v_a_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3484_; 
lean_dec_ref(v_value_3432_);
lean_dec_ref(v___y_3430_);
lean_dec(v___y_3429_);
lean_dec_ref(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec(v_a_3404_);
lean_dec_ref(v_args_3393_);
lean_dec_ref(v_e_3373_);
v_a_3477_ = lean_ctor_get(v___x_3444_, 0);
v_isSharedCheck_3484_ = !lean_is_exclusive(v___x_3444_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3479_ = v___x_3444_;
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_a_3477_);
lean_dec(v___x_3444_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v___x_3482_; 
if (v_isShared_3480_ == 0)
{
v___x_3482_ = v___x_3479_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v_a_3477_);
v___x_3482_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
return v___x_3482_;
}
}
}
}
v___jp_3485_:
{
uint8_t v___x_3502_; 
v___x_3502_ = lean_unbox(v_a_3404_);
if (v___x_3502_ == 0)
{
lean_object* v___x_3503_; 
v___x_3503_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v___y_3489_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_object* v_a_3504_; 
v_a_3504_ = lean_ctor_get(v___x_3503_, 0);
lean_inc(v_a_3504_);
lean_dec_ref_known(v___x_3503_, 1);
v___y_3426_ = v___y_3494_;
v___y_3427_ = v___y_3490_;
v___y_3428_ = v___y_3496_;
v___y_3429_ = v___y_3491_;
v___y_3430_ = v___y_3497_;
v___y_3431_ = v___y_3501_;
v_value_3432_ = v_a_3504_;
v___y_3433_ = v___y_3486_;
v___y_3434_ = v___y_3492_;
v___y_3435_ = v___y_3495_;
v___y_3436_ = v___y_3498_;
v___y_3437_ = v___y_3489_;
v___y_3438_ = v___y_3500_;
v___y_3439_ = v___y_3493_;
v___y_3440_ = v___y_3488_;
v___y_3441_ = v___y_3487_;
v___y_3442_ = v___y_3499_;
goto v___jp_3425_;
}
else
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3512_; 
lean_dec_ref(v___y_3497_);
lean_dec_ref(v___y_3494_);
lean_dec(v___y_3491_);
lean_dec_ref(v___y_3490_);
lean_dec(v_a_3404_);
lean_dec_ref(v_args_3393_);
lean_dec_ref(v_e_3373_);
v_a_3505_ = lean_ctor_get(v___x_3503_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3507_ = v___x_3503_;
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v___x_3503_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3510_; 
if (v_isShared_3508_ == 0)
{
v___x_3510_ = v___x_3507_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v_a_3505_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
return v___x_3510_;
}
}
}
}
else
{
lean_object* v___x_3513_; 
v___x_3513_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v___y_3489_);
if (lean_obj_tag(v___x_3513_) == 0)
{
lean_object* v_a_3514_; 
v_a_3514_ = lean_ctor_get(v___x_3513_, 0);
lean_inc(v_a_3514_);
lean_dec_ref_known(v___x_3513_, 1);
v___y_3426_ = v___y_3494_;
v___y_3427_ = v___y_3490_;
v___y_3428_ = v___y_3496_;
v___y_3429_ = v___y_3491_;
v___y_3430_ = v___y_3497_;
v___y_3431_ = v___y_3501_;
v_value_3432_ = v_a_3514_;
v___y_3433_ = v___y_3486_;
v___y_3434_ = v___y_3492_;
v___y_3435_ = v___y_3495_;
v___y_3436_ = v___y_3498_;
v___y_3437_ = v___y_3489_;
v___y_3438_ = v___y_3500_;
v___y_3439_ = v___y_3493_;
v___y_3440_ = v___y_3488_;
v___y_3441_ = v___y_3487_;
v___y_3442_ = v___y_3499_;
goto v___jp_3425_;
}
else
{
lean_object* v_a_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3522_; 
lean_dec_ref(v___y_3497_);
lean_dec_ref(v___y_3494_);
lean_dec(v___y_3491_);
lean_dec_ref(v___y_3490_);
lean_dec(v_a_3404_);
lean_dec_ref(v_args_3393_);
lean_dec_ref(v_e_3373_);
v_a_3515_ = lean_ctor_get(v___x_3513_, 0);
v_isSharedCheck_3522_ = !lean_is_exclusive(v___x_3513_);
if (v_isSharedCheck_3522_ == 0)
{
v___x_3517_ = v___x_3513_;
v_isShared_3518_ = v_isSharedCheck_3522_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_a_3515_);
lean_dec(v___x_3513_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3522_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
lean_object* v___x_3520_; 
if (v_isShared_3518_ == 0)
{
v___x_3520_ = v___x_3517_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v_a_3515_);
v___x_3520_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
return v___x_3520_;
}
}
}
}
}
v___jp_3523_:
{
lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; 
v___x_3536_ = l_Lean_Expr_getAppFn(v_e_3373_);
v___x_3537_ = l_Lean_Expr_constLevels_x21(v___x_3536_);
lean_dec_ref(v___x_3536_);
lean_inc(v_c_3398_);
v___x_3538_ = l_Lean_Meta_getBoolDecision_x3f(v_c_3398_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_);
if (lean_obj_tag(v___x_3538_) == 0)
{
lean_object* v_a_3539_; 
v_a_3539_ = lean_ctor_get(v___x_3538_, 0);
lean_inc(v_a_3539_);
lean_dec_ref_known(v___x_3538_, 1);
if (lean_obj_tag(v_a_3539_) == 1)
{
lean_object* v_val_3540_; uint8_t v___x_3541_; 
lean_dec(v_a_3402_);
v_val_3540_ = lean_ctor_get(v_a_3539_, 0);
lean_inc(v_val_3540_);
lean_dec_ref_known(v_a_3539_, 1);
v___x_3541_ = lean_unbox(v_a_3404_);
if (v___x_3541_ == 0)
{
lean_object* v_fst_3542_; lean_object* v_snd_3543_; lean_object* v___x_3544_; 
v_fst_3542_ = lean_ctor_get(v_val_3540_, 0);
lean_inc(v_fst_3542_);
v_snd_3543_ = lean_ctor_get(v_val_3540_, 1);
lean_inc(v_snd_3543_);
lean_dec(v_val_3540_);
v___x_3544_ = ((lean_object*)(l_Lean_Meta_Grind_propagateCond___closed__6));
v___y_3486_ = v___y_3526_;
v___y_3487_ = v___y_3534_;
v___y_3488_ = v___y_3533_;
v___y_3489_ = v___y_3530_;
v___y_3490_ = v_hp_3525_;
v___y_3491_ = v___x_3537_;
v___y_3492_ = v___y_3527_;
v___y_3493_ = v___y_3532_;
v___y_3494_ = v_snd_3543_;
v___y_3495_ = v___y_3528_;
v___y_3496_ = v___y_3524_;
v___y_3497_ = v_fst_3542_;
v___y_3498_ = v___y_3529_;
v___y_3499_ = v___y_3535_;
v___y_3500_ = v___y_3531_;
v___y_3501_ = v___x_3544_;
goto v___jp_3485_;
}
else
{
lean_object* v_fst_3545_; lean_object* v_snd_3546_; lean_object* v___x_3547_; 
v_fst_3545_ = lean_ctor_get(v_val_3540_, 0);
lean_inc(v_fst_3545_);
v_snd_3546_ = lean_ctor_get(v_val_3540_, 1);
lean_inc(v_snd_3546_);
lean_dec(v_val_3540_);
v___x_3547_ = ((lean_object*)(l_Lean_Meta_Grind_propagateCond___closed__8));
v___y_3486_ = v___y_3526_;
v___y_3487_ = v___y_3534_;
v___y_3488_ = v___y_3533_;
v___y_3489_ = v___y_3530_;
v___y_3490_ = v_hp_3525_;
v___y_3491_ = v___x_3537_;
v___y_3492_ = v___y_3527_;
v___y_3493_ = v___y_3532_;
v___y_3494_ = v_snd_3546_;
v___y_3495_ = v___y_3528_;
v___y_3496_ = v___y_3524_;
v___y_3497_ = v_fst_3545_;
v___y_3498_ = v___y_3529_;
v___y_3499_ = v___y_3535_;
v___y_3500_ = v___y_3531_;
v___y_3501_ = v___x_3547_;
goto v___jp_3485_;
}
}
else
{
uint8_t v___x_3548_; 
lean_dec(v_a_3539_);
v___x_3548_ = lean_unbox(v_a_3404_);
if (v___x_3548_ == 0)
{
lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; 
v___x_3549_ = ((lean_object*)(l_Lean_Meta_Grind_propagateCond___closed__10));
v___x_3550_ = l_Lean_mkConst(v___x_3549_, v___x_3537_);
v___x_3551_ = lean_unsigned_to_nat(0u);
v___x_3552_ = lean_array_get_borrowed(v___x_3397_, v_args_3393_, v___x_3551_);
v___x_3553_ = l_Lean_Meta_mkOfEqFalseCore(v_a_3402_, v_hp_3525_);
v___x_3554_ = lean_unsigned_to_nat(2u);
v___x_3555_ = lean_array_get_borrowed(v___x_3397_, v_args_3393_, v___x_3554_);
v___x_3556_ = lean_unsigned_to_nat(3u);
v___x_3557_ = lean_array_get_borrowed(v___x_3397_, v_args_3393_, v___x_3556_);
lean_inc(v___x_3557_);
lean_inc(v___x_3555_);
lean_inc(v_c_3398_);
lean_inc(v___x_3552_);
v___x_3558_ = l_Lean_mkApp5(v___x_3550_, v___x_3552_, v_c_3398_, v___x_3553_, v___x_3555_, v___x_3557_);
v___y_3406_ = v___y_3524_;
v_proof_3407_ = v___x_3558_;
v___y_3408_ = v___y_3526_;
v___y_3409_ = v___y_3527_;
v___y_3410_ = v___y_3528_;
v___y_3411_ = v___y_3529_;
v___y_3412_ = v___y_3530_;
v___y_3413_ = v___y_3531_;
v___y_3414_ = v___y_3532_;
v___y_3415_ = v___y_3533_;
v___y_3416_ = v___y_3534_;
v___y_3417_ = v___y_3535_;
goto v___jp_3405_;
}
else
{
lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; 
v___x_3559_ = ((lean_object*)(l_Lean_Meta_Grind_propagateCond___closed__4));
v___x_3560_ = l_Lean_mkConst(v___x_3559_, v___x_3537_);
v___x_3561_ = lean_unsigned_to_nat(0u);
v___x_3562_ = lean_array_get_borrowed(v___x_3397_, v_args_3393_, v___x_3561_);
v___x_3563_ = l_Lean_Meta_mkOfEqTrueCore(v_a_3402_, v_hp_3525_);
v___x_3564_ = lean_unsigned_to_nat(2u);
v___x_3565_ = lean_array_get_borrowed(v___x_3397_, v_args_3393_, v___x_3564_);
v___x_3566_ = lean_unsigned_to_nat(3u);
v___x_3567_ = lean_array_get_borrowed(v___x_3397_, v_args_3393_, v___x_3566_);
lean_inc(v___x_3567_);
lean_inc(v___x_3565_);
lean_inc(v_c_3398_);
lean_inc(v___x_3562_);
v___x_3568_ = l_Lean_mkApp5(v___x_3560_, v___x_3562_, v_c_3398_, v___x_3563_, v___x_3565_, v___x_3567_);
v___y_3406_ = v___y_3524_;
v_proof_3407_ = v___x_3568_;
v___y_3408_ = v___y_3526_;
v___y_3409_ = v___y_3527_;
v___y_3410_ = v___y_3528_;
v___y_3411_ = v___y_3529_;
v___y_3412_ = v___y_3530_;
v___y_3413_ = v___y_3531_;
v___y_3414_ = v___y_3532_;
v___y_3415_ = v___y_3533_;
v___y_3416_ = v___y_3534_;
v___y_3417_ = v___y_3535_;
goto v___jp_3405_;
}
}
}
else
{
lean_object* v_a_3569_; lean_object* v___x_3571_; uint8_t v_isShared_3572_; uint8_t v_isSharedCheck_3576_; 
lean_dec(v___x_3537_);
lean_dec_ref(v_hp_3525_);
lean_dec(v_a_3404_);
lean_dec(v_a_3402_);
lean_dec_ref(v_args_3393_);
lean_dec_ref(v_e_3373_);
v_a_3569_ = lean_ctor_get(v___x_3538_, 0);
v_isSharedCheck_3576_ = !lean_is_exclusive(v___x_3538_);
if (v_isSharedCheck_3576_ == 0)
{
v___x_3571_ = v___x_3538_;
v_isShared_3572_ = v_isSharedCheck_3576_;
goto v_resetjp_3570_;
}
else
{
lean_inc(v_a_3569_);
lean_dec(v___x_3538_);
v___x_3571_ = lean_box(0);
v_isShared_3572_ = v_isSharedCheck_3576_;
goto v_resetjp_3570_;
}
v_resetjp_3570_:
{
lean_object* v___x_3574_; 
if (v_isShared_3572_ == 0)
{
v___x_3574_ = v___x_3571_;
goto v_reusejp_3573_;
}
else
{
lean_object* v_reuseFailAlloc_3575_; 
v_reuseFailAlloc_3575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3575_, 0, v_a_3569_);
v___x_3574_ = v_reuseFailAlloc_3575_;
goto v_reusejp_3573_;
}
v_reusejp_3573_:
{
return v___x_3574_;
}
}
}
}
}
else
{
lean_object* v_a_3614_; lean_object* v___x_3616_; uint8_t v_isShared_3617_; uint8_t v_isSharedCheck_3621_; 
lean_dec(v_a_3402_);
lean_dec_ref(v_args_3393_);
lean_dec_ref(v_e_3373_);
v_a_3614_ = lean_ctor_get(v___x_3403_, 0);
v_isSharedCheck_3621_ = !lean_is_exclusive(v___x_3403_);
if (v_isSharedCheck_3621_ == 0)
{
v___x_3616_ = v___x_3403_;
v_isShared_3617_ = v_isSharedCheck_3621_;
goto v_resetjp_3615_;
}
else
{
lean_inc(v_a_3614_);
lean_dec(v___x_3403_);
v___x_3616_ = lean_box(0);
v_isShared_3617_ = v_isSharedCheck_3621_;
goto v_resetjp_3615_;
}
v_resetjp_3615_:
{
lean_object* v___x_3619_; 
if (v_isShared_3617_ == 0)
{
v___x_3619_ = v___x_3616_;
goto v_reusejp_3618_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v_a_3614_);
v___x_3619_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3618_;
}
v_reusejp_3618_:
{
return v___x_3619_;
}
}
}
}
else
{
lean_object* v_a_3622_; lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3629_; 
lean_dec_ref(v_args_3393_);
lean_dec_ref(v_e_3373_);
v_a_3622_ = lean_ctor_get(v___x_3401_, 0);
v_isSharedCheck_3629_ = !lean_is_exclusive(v___x_3401_);
if (v_isSharedCheck_3629_ == 0)
{
v___x_3624_ = v___x_3401_;
v_isShared_3625_ = v_isSharedCheck_3629_;
goto v_resetjp_3623_;
}
else
{
lean_inc(v_a_3622_);
lean_dec(v___x_3401_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3629_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v___x_3627_; 
if (v_isShared_3625_ == 0)
{
v___x_3627_ = v___x_3624_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v_a_3622_);
v___x_3627_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
return v___x_3627_;
}
}
}
}
else
{
lean_object* v_a_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3637_; 
lean_dec_ref(v_args_3393_);
lean_dec_ref(v_e_3373_);
v_a_3630_ = lean_ctor_get(v___x_3399_, 0);
v_isSharedCheck_3637_ = !lean_is_exclusive(v___x_3399_);
if (v_isSharedCheck_3637_ == 0)
{
v___x_3632_ = v___x_3399_;
v_isShared_3633_ = v_isSharedCheck_3637_;
goto v_resetjp_3631_;
}
else
{
lean_inc(v_a_3630_);
lean_dec(v___x_3399_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3637_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3635_; 
if (v_isShared_3633_ == 0)
{
v___x_3635_ = v___x_3632_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3636_; 
v_reuseFailAlloc_3636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3636_, 0, v_a_3630_);
v___x_3635_ = v_reuseFailAlloc_3636_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
return v___x_3635_;
}
}
}
}
else
{
lean_dec_ref(v_args_3393_);
lean_dec_ref(v_e_3373_);
goto v___jp_3385_;
}
v___jp_3385_:
{
lean_object* v___x_3386_; lean_object* v___x_3387_; 
v___x_3386_ = lean_box(0);
v___x_3387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3387_, 0, v___x_3386_);
return v___x_3387_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateCond___boxed(lean_object* v_e_3638_, lean_object* v_a_3639_, lean_object* v_a_3640_, lean_object* v_a_3641_, lean_object* v_a_3642_, lean_object* v_a_3643_, lean_object* v_a_3644_, lean_object* v_a_3645_, lean_object* v_a_3646_, lean_object* v_a_3647_, lean_object* v_a_3648_, lean_object* v_a_3649_){
_start:
{
lean_object* v_res_3650_; 
v_res_3650_ = l_Lean_Meta_Grind_propagateCond(v_e_3638_, v_a_3639_, v_a_3640_, v_a_3641_, v_a_3642_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_, v_a_3647_, v_a_3648_);
lean_dec(v_a_3648_);
lean_dec_ref(v_a_3647_);
lean_dec(v_a_3646_);
lean_dec_ref(v_a_3645_);
lean_dec(v_a_3644_);
lean_dec_ref(v_a_3643_);
lean_dec(v_a_3642_);
lean_dec_ref(v_a_3641_);
lean_dec(v_a_3640_);
lean_dec(v_a_3639_);
return v_res_3650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateCond___regBuiltin_Lean_Meta_Grind_propagateCond_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1812125326____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; 
v___x_3655_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateCond___regBuiltin_Lean_Meta_Grind_propagateCond_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1812125326____hygCtx___hyg_9_));
v___x_3656_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateCond___boxed), 12, 0);
v___x_3657_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_3655_, v___x_3656_);
return v___x_3657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateCond___regBuiltin_Lean_Meta_Grind_propagateCond_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1812125326____hygCtx___hyg_9____boxed(lean_object* v_a_3658_){
_start:
{
lean_object* v_res_3659_; 
v_res_3659_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateCond___regBuiltin_Lean_Meta_Grind_propagateCond_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1812125326____hygCtx___hyg_9_();
return v_res_3659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateIte(lean_object* v_e_3666_, lean_object* v_a_3667_, lean_object* v_a_3668_, lean_object* v_a_3669_, lean_object* v_a_3670_, lean_object* v_a_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_){
_start:
{
lean_object* v_numArgs_3681_; lean_object* v___x_3682_; uint8_t v___x_3683_; 
v_numArgs_3681_ = l_Lean_Expr_getAppNumArgs(v_e_3666_);
v___x_3682_ = lean_unsigned_to_nat(5u);
v___x_3683_ = lean_nat_dec_lt(v_numArgs_3681_, v___x_3682_);
if (v___x_3683_ == 0)
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v_c_3688_; lean_object* v___x_3689_; 
v___x_3684_ = l_Lean_instInhabitedExpr;
v___x_3685_ = lean_unsigned_to_nat(1u);
v___x_3686_ = lean_nat_sub(v_numArgs_3681_, v___x_3685_);
v___x_3687_ = lean_nat_sub(v___x_3686_, v___x_3685_);
v_c_3688_ = l_Lean_Expr_getRevArg_x21(v_e_3666_, v___x_3687_);
lean_inc_ref(v_c_3688_);
v___x_3689_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_c_3688_, v_a_3667_, v_a_3671_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
if (lean_obj_tag(v___x_3689_) == 0)
{
lean_object* v_a_3690_; uint8_t v___x_3691_; 
v_a_3690_ = lean_ctor_get(v___x_3689_, 0);
lean_inc(v_a_3690_);
lean_dec_ref_known(v___x_3689_, 1);
v___x_3691_ = lean_unbox(v_a_3690_);
if (v___x_3691_ == 0)
{
lean_object* v___x_3692_; 
lean_dec(v_a_3690_);
lean_inc_ref(v_c_3688_);
v___x_3692_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_c_3688_, v_a_3667_, v_a_3671_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
if (lean_obj_tag(v___x_3692_) == 0)
{
lean_object* v_a_3693_; uint8_t v___x_3694_; 
v_a_3693_ = lean_ctor_get(v___x_3692_, 0);
lean_inc(v_a_3693_);
lean_dec_ref_known(v___x_3692_, 1);
v___x_3694_ = lean_unbox(v_a_3693_);
if (v___x_3694_ == 0)
{
lean_dec(v_a_3693_);
lean_dec_ref(v_c_3688_);
lean_dec(v___x_3686_);
lean_dec(v_numArgs_3681_);
lean_dec_ref(v_e_3666_);
goto v___jp_3678_;
}
else
{
lean_object* v___x_3695_; lean_object* v_dummy_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; 
v___x_3695_ = l_Lean_Expr_getAppFn(v_e_3666_);
v_dummy_3696_ = lean_obj_once(&l_Lean_Meta_Grind_propagateCond___closed__0, &l_Lean_Meta_Grind_propagateCond___closed__0_once, _init_l_Lean_Meta_Grind_propagateCond___closed__0);
v___x_3697_ = lean_mk_array(v_numArgs_3681_, v_dummy_3696_);
lean_inc_ref(v_e_3666_);
v___x_3698_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3666_, v___x_3697_, v___x_3686_);
v___x_3699_ = lean_unsigned_to_nat(4u);
v___x_3700_ = lean_array_get(v___x_3684_, v___x_3698_, v___x_3699_);
v___x_3701_ = l_Lean_Meta_Grind_mkEqFalseProof(v_c_3688_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
if (lean_obj_tag(v___x_3701_) == 0)
{
lean_object* v_a_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; uint8_t v___x_3709_; lean_object* v___x_3710_; 
v_a_3702_ = lean_ctor_get(v___x_3701_, 0);
lean_inc(v_a_3702_);
lean_dec_ref_known(v___x_3701_, 1);
v___x_3703_ = ((lean_object*)(l_Lean_Meta_Grind_propagateIte___closed__1));
v___x_3704_ = l_Lean_Expr_constLevels_x21(v___x_3695_);
lean_dec_ref(v___x_3695_);
v___x_3705_ = l_Lean_mkConst(v___x_3703_, v___x_3704_);
v___x_3706_ = lean_unsigned_to_nat(0u);
v___x_3707_ = l_Lean_mkAppRange(v___x_3705_, v___x_3706_, v___x_3682_, v___x_3698_);
v___x_3708_ = l_Lean_Expr_app___override(v___x_3707_, v_a_3702_);
v___x_3709_ = lean_unbox(v_a_3693_);
lean_dec(v_a_3693_);
v___x_3710_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(v_e_3666_, v___x_3700_, v___x_3708_, v___x_3682_, v___x_3698_, v___x_3709_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
lean_dec_ref(v___x_3698_);
return v___x_3710_;
}
else
{
lean_object* v_a_3711_; lean_object* v___x_3713_; uint8_t v_isShared_3714_; uint8_t v_isSharedCheck_3718_; 
lean_dec(v___x_3700_);
lean_dec_ref(v___x_3698_);
lean_dec_ref(v___x_3695_);
lean_dec(v_a_3693_);
lean_dec_ref(v_e_3666_);
v_a_3711_ = lean_ctor_get(v___x_3701_, 0);
v_isSharedCheck_3718_ = !lean_is_exclusive(v___x_3701_);
if (v_isSharedCheck_3718_ == 0)
{
v___x_3713_ = v___x_3701_;
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
else
{
lean_inc(v_a_3711_);
lean_dec(v___x_3701_);
v___x_3713_ = lean_box(0);
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
v_resetjp_3712_:
{
lean_object* v___x_3716_; 
if (v_isShared_3714_ == 0)
{
v___x_3716_ = v___x_3713_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v_a_3711_);
v___x_3716_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
return v___x_3716_;
}
}
}
}
}
else
{
lean_object* v_a_3719_; lean_object* v___x_3721_; uint8_t v_isShared_3722_; uint8_t v_isSharedCheck_3726_; 
lean_dec_ref(v_c_3688_);
lean_dec(v___x_3686_);
lean_dec(v_numArgs_3681_);
lean_dec_ref(v_e_3666_);
v_a_3719_ = lean_ctor_get(v___x_3692_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v___x_3692_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3721_ = v___x_3692_;
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
else
{
lean_inc(v_a_3719_);
lean_dec(v___x_3692_);
v___x_3721_ = lean_box(0);
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
v_resetjp_3720_:
{
lean_object* v___x_3724_; 
if (v_isShared_3722_ == 0)
{
v___x_3724_ = v___x_3721_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v_a_3719_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
}
}
}
}
else
{
lean_object* v___x_3727_; lean_object* v_dummy_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; 
v___x_3727_ = l_Lean_Expr_getAppFn(v_e_3666_);
v_dummy_3728_ = lean_obj_once(&l_Lean_Meta_Grind_propagateCond___closed__0, &l_Lean_Meta_Grind_propagateCond___closed__0_once, _init_l_Lean_Meta_Grind_propagateCond___closed__0);
v___x_3729_ = lean_mk_array(v_numArgs_3681_, v_dummy_3728_);
lean_inc_ref(v_e_3666_);
v___x_3730_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3666_, v___x_3729_, v___x_3686_);
v___x_3731_ = lean_unsigned_to_nat(3u);
v___x_3732_ = lean_array_get(v___x_3684_, v___x_3730_, v___x_3731_);
v___x_3733_ = l_Lean_Meta_Grind_mkEqTrueProof(v_c_3688_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
if (lean_obj_tag(v___x_3733_) == 0)
{
lean_object* v_a_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; uint8_t v___x_3741_; lean_object* v___x_3742_; 
v_a_3734_ = lean_ctor_get(v___x_3733_, 0);
lean_inc(v_a_3734_);
lean_dec_ref_known(v___x_3733_, 1);
v___x_3735_ = ((lean_object*)(l_Lean_Meta_Grind_propagateIte___closed__3));
v___x_3736_ = l_Lean_Expr_constLevels_x21(v___x_3727_);
lean_dec_ref(v___x_3727_);
v___x_3737_ = l_Lean_mkConst(v___x_3735_, v___x_3736_);
v___x_3738_ = lean_unsigned_to_nat(0u);
v___x_3739_ = l_Lean_mkAppRange(v___x_3737_, v___x_3738_, v___x_3682_, v___x_3730_);
v___x_3740_ = l_Lean_Expr_app___override(v___x_3739_, v_a_3734_);
v___x_3741_ = lean_unbox(v_a_3690_);
lean_dec(v_a_3690_);
v___x_3742_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(v_e_3666_, v___x_3732_, v___x_3740_, v___x_3682_, v___x_3730_, v___x_3741_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
lean_dec_ref(v___x_3730_);
return v___x_3742_;
}
else
{
lean_object* v_a_3743_; lean_object* v___x_3745_; uint8_t v_isShared_3746_; uint8_t v_isSharedCheck_3750_; 
lean_dec(v___x_3732_);
lean_dec_ref(v___x_3730_);
lean_dec_ref(v___x_3727_);
lean_dec(v_a_3690_);
lean_dec_ref(v_e_3666_);
v_a_3743_ = lean_ctor_get(v___x_3733_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3733_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3745_ = v___x_3733_;
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
else
{
lean_inc(v_a_3743_);
lean_dec(v___x_3733_);
v___x_3745_ = lean_box(0);
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
v_resetjp_3744_:
{
lean_object* v___x_3748_; 
if (v_isShared_3746_ == 0)
{
v___x_3748_ = v___x_3745_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_a_3743_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
return v___x_3748_;
}
}
}
}
}
else
{
lean_object* v_a_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3758_; 
lean_dec_ref(v_c_3688_);
lean_dec(v___x_3686_);
lean_dec(v_numArgs_3681_);
lean_dec_ref(v_e_3666_);
v_a_3751_ = lean_ctor_get(v___x_3689_, 0);
v_isSharedCheck_3758_ = !lean_is_exclusive(v___x_3689_);
if (v_isSharedCheck_3758_ == 0)
{
v___x_3753_ = v___x_3689_;
v_isShared_3754_ = v_isSharedCheck_3758_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_a_3751_);
lean_dec(v___x_3689_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3758_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v___x_3756_; 
if (v_isShared_3754_ == 0)
{
v___x_3756_ = v___x_3753_;
goto v_reusejp_3755_;
}
else
{
lean_object* v_reuseFailAlloc_3757_; 
v_reuseFailAlloc_3757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3757_, 0, v_a_3751_);
v___x_3756_ = v_reuseFailAlloc_3757_;
goto v_reusejp_3755_;
}
v_reusejp_3755_:
{
return v___x_3756_;
}
}
}
}
else
{
lean_dec(v_numArgs_3681_);
lean_dec_ref(v_e_3666_);
goto v___jp_3678_;
}
v___jp_3678_:
{
lean_object* v___x_3679_; lean_object* v___x_3680_; 
v___x_3679_ = lean_box(0);
v___x_3680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3680_, 0, v___x_3679_);
return v___x_3680_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateIte___boxed(lean_object* v_e_3759_, lean_object* v_a_3760_, lean_object* v_a_3761_, lean_object* v_a_3762_, lean_object* v_a_3763_, lean_object* v_a_3764_, lean_object* v_a_3765_, lean_object* v_a_3766_, lean_object* v_a_3767_, lean_object* v_a_3768_, lean_object* v_a_3769_, lean_object* v_a_3770_){
_start:
{
lean_object* v_res_3771_; 
v_res_3771_ = l_Lean_Meta_Grind_propagateIte(v_e_3759_, v_a_3760_, v_a_3761_, v_a_3762_, v_a_3763_, v_a_3764_, v_a_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
lean_dec(v_a_3769_);
lean_dec_ref(v_a_3768_);
lean_dec(v_a_3767_);
lean_dec_ref(v_a_3766_);
lean_dec(v_a_3765_);
lean_dec_ref(v_a_3764_);
lean_dec(v_a_3763_);
lean_dec_ref(v_a_3762_);
lean_dec(v_a_3761_);
lean_dec(v_a_3760_);
return v_res_3771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1491137477____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; 
v___x_3776_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1491137477____hygCtx___hyg_9_));
v___x_3777_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateIte___boxed), 12, 0);
v___x_3778_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_3776_, v___x_3777_);
return v___x_3778_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1491137477____hygCtx___hyg_9____boxed(lean_object* v_a_3779_){
_start:
{
lean_object* v_res_3780_; 
v_res_3780_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1491137477____hygCtx___hyg_9_();
return v_res_3780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDIte(lean_object* v_e_3791_, lean_object* v_a_3792_, lean_object* v_a_3793_, lean_object* v_a_3794_, lean_object* v_a_3795_, lean_object* v_a_3796_, lean_object* v_a_3797_, lean_object* v_a_3798_, lean_object* v_a_3799_, lean_object* v_a_3800_, lean_object* v_a_3801_){
_start:
{
lean_object* v_numArgs_3806_; lean_object* v___x_3807_; uint8_t v___x_3808_; 
v_numArgs_3806_ = l_Lean_Expr_getAppNumArgs(v_e_3791_);
v___x_3807_ = lean_unsigned_to_nat(5u);
v___x_3808_ = lean_nat_dec_lt(v_numArgs_3806_, v___x_3807_);
if (v___x_3808_ == 0)
{
lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v_c_3813_; lean_object* v___x_3814_; 
v___x_3809_ = l_Lean_instInhabitedExpr;
v___x_3810_ = lean_unsigned_to_nat(1u);
v___x_3811_ = lean_nat_sub(v_numArgs_3806_, v___x_3810_);
v___x_3812_ = lean_nat_sub(v___x_3811_, v___x_3810_);
v_c_3813_ = l_Lean_Expr_getRevArg_x21(v_e_3791_, v___x_3812_);
lean_inc_ref(v_c_3813_);
v___x_3814_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_c_3813_, v_a_3792_, v_a_3796_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_);
if (lean_obj_tag(v___x_3814_) == 0)
{
lean_object* v_a_3815_; uint8_t v___x_3816_; 
v_a_3815_ = lean_ctor_get(v___x_3814_, 0);
lean_inc(v_a_3815_);
lean_dec_ref_known(v___x_3814_, 1);
v___x_3816_ = lean_unbox(v_a_3815_);
if (v___x_3816_ == 0)
{
lean_object* v___x_3817_; 
lean_inc_ref(v_c_3813_);
v___x_3817_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_c_3813_, v_a_3792_, v_a_3796_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_);
if (lean_obj_tag(v___x_3817_) == 0)
{
lean_object* v_a_3818_; uint8_t v___x_3819_; 
v_a_3818_ = lean_ctor_get(v___x_3817_, 0);
lean_inc(v_a_3818_);
lean_dec_ref_known(v___x_3817_, 1);
v___x_3819_ = lean_unbox(v_a_3818_);
lean_dec(v_a_3818_);
if (v___x_3819_ == 0)
{
lean_dec(v_a_3815_);
lean_dec_ref(v_c_3813_);
lean_dec(v___x_3811_);
lean_dec(v_numArgs_3806_);
lean_dec_ref(v_e_3791_);
goto v___jp_3803_;
}
else
{
lean_object* v___x_3820_; lean_object* v_dummy_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; 
v___x_3820_ = l_Lean_Expr_getAppFn(v_e_3791_);
v_dummy_3821_ = lean_obj_once(&l_Lean_Meta_Grind_propagateCond___closed__0, &l_Lean_Meta_Grind_propagateCond___closed__0_once, _init_l_Lean_Meta_Grind_propagateCond___closed__0);
v___x_3822_ = lean_mk_array(v_numArgs_3806_, v_dummy_3821_);
lean_inc_ref(v_e_3791_);
v___x_3823_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3791_, v___x_3822_, v___x_3811_);
lean_inc_ref(v_c_3813_);
v___x_3824_ = l_Lean_Meta_Grind_mkEqFalseProof(v_c_3813_, v_a_3792_, v_a_3793_, v_a_3794_, v_a_3795_, v_a_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_);
if (lean_obj_tag(v___x_3824_) == 0)
{
lean_object* v_a_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; 
v_a_3825_ = lean_ctor_get(v___x_3824_, 0);
lean_inc_n(v_a_3825_, 2);
lean_dec_ref_known(v___x_3824_, 1);
v___x_3826_ = lean_unsigned_to_nat(4u);
v___x_3827_ = lean_array_get_borrowed(v___x_3809_, v___x_3823_, v___x_3826_);
v___x_3828_ = l_Lean_Meta_mkOfEqFalseCore(v_c_3813_, v_a_3825_);
lean_inc(v___x_3827_);
v___x_3829_ = l_Lean_Expr_app___override(v___x_3827_, v___x_3828_);
lean_inc(v_a_3801_);
lean_inc_ref(v_a_3800_);
lean_inc(v_a_3799_);
lean_inc_ref(v_a_3798_);
lean_inc(v_a_3797_);
lean_inc_ref(v_a_3796_);
lean_inc(v_a_3795_);
lean_inc_ref(v_a_3794_);
lean_inc(v_a_3793_);
lean_inc(v_a_3792_);
v___x_3830_ = lean_grind_preprocess(v___x_3829_, v_a_3792_, v_a_3793_, v_a_3794_, v_a_3795_, v_a_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_);
if (lean_obj_tag(v___x_3830_) == 0)
{
lean_object* v_a_3831_; lean_object* v_expr_3832_; lean_object* v___x_3833_; 
v_a_3831_ = lean_ctor_get(v___x_3830_, 0);
lean_inc(v_a_3831_);
lean_dec_ref_known(v___x_3830_, 1);
v_expr_3832_ = lean_ctor_get(v_a_3831_, 0);
lean_inc_ref(v_expr_3832_);
v___x_3833_ = l_Lean_Meta_Simp_Result_getProof(v_a_3831_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_);
if (lean_obj_tag(v___x_3833_) == 0)
{
lean_object* v_a_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; uint8_t v___x_3841_; lean_object* v___x_3842_; 
v_a_3834_ = lean_ctor_get(v___x_3833_, 0);
lean_inc(v_a_3834_);
lean_dec_ref_known(v___x_3833_, 1);
v___x_3835_ = ((lean_object*)(l_Lean_Meta_Grind_propagateDIte___closed__1));
v___x_3836_ = l_Lean_Expr_constLevels_x21(v___x_3820_);
lean_dec_ref(v___x_3820_);
v___x_3837_ = l_Lean_mkConst(v___x_3835_, v___x_3836_);
v___x_3838_ = lean_unsigned_to_nat(0u);
v___x_3839_ = l_Lean_mkAppRange(v___x_3837_, v___x_3838_, v___x_3807_, v___x_3823_);
lean_inc_ref(v_expr_3832_);
v___x_3840_ = l_Lean_mkApp3(v___x_3839_, v_expr_3832_, v_a_3825_, v_a_3834_);
v___x_3841_ = lean_unbox(v_a_3815_);
lean_dec(v_a_3815_);
v___x_3842_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(v_e_3791_, v_expr_3832_, v___x_3840_, v___x_3807_, v___x_3823_, v___x_3841_, v_a_3792_, v_a_3793_, v_a_3794_, v_a_3795_, v_a_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_);
lean_dec_ref(v___x_3823_);
return v___x_3842_;
}
else
{
lean_object* v_a_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3850_; 
lean_dec_ref(v_expr_3832_);
lean_dec(v_a_3825_);
lean_dec_ref(v___x_3823_);
lean_dec_ref(v___x_3820_);
lean_dec(v_a_3815_);
lean_dec_ref(v_e_3791_);
v_a_3843_ = lean_ctor_get(v___x_3833_, 0);
v_isSharedCheck_3850_ = !lean_is_exclusive(v___x_3833_);
if (v_isSharedCheck_3850_ == 0)
{
v___x_3845_ = v___x_3833_;
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_a_3843_);
lean_dec(v___x_3833_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3848_; 
if (v_isShared_3846_ == 0)
{
v___x_3848_ = v___x_3845_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v_a_3843_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
}
}
else
{
lean_object* v_a_3851_; lean_object* v___x_3853_; uint8_t v_isShared_3854_; uint8_t v_isSharedCheck_3858_; 
lean_dec(v_a_3825_);
lean_dec_ref(v___x_3823_);
lean_dec_ref(v___x_3820_);
lean_dec(v_a_3815_);
lean_dec_ref(v_e_3791_);
v_a_3851_ = lean_ctor_get(v___x_3830_, 0);
v_isSharedCheck_3858_ = !lean_is_exclusive(v___x_3830_);
if (v_isSharedCheck_3858_ == 0)
{
v___x_3853_ = v___x_3830_;
v_isShared_3854_ = v_isSharedCheck_3858_;
goto v_resetjp_3852_;
}
else
{
lean_inc(v_a_3851_);
lean_dec(v___x_3830_);
v___x_3853_ = lean_box(0);
v_isShared_3854_ = v_isSharedCheck_3858_;
goto v_resetjp_3852_;
}
v_resetjp_3852_:
{
lean_object* v___x_3856_; 
if (v_isShared_3854_ == 0)
{
v___x_3856_ = v___x_3853_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v_a_3851_);
v___x_3856_ = v_reuseFailAlloc_3857_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
return v___x_3856_;
}
}
}
}
else
{
lean_object* v_a_3859_; lean_object* v___x_3861_; uint8_t v_isShared_3862_; uint8_t v_isSharedCheck_3866_; 
lean_dec_ref(v___x_3823_);
lean_dec_ref(v___x_3820_);
lean_dec(v_a_3815_);
lean_dec_ref(v_c_3813_);
lean_dec_ref(v_e_3791_);
v_a_3859_ = lean_ctor_get(v___x_3824_, 0);
v_isSharedCheck_3866_ = !lean_is_exclusive(v___x_3824_);
if (v_isSharedCheck_3866_ == 0)
{
v___x_3861_ = v___x_3824_;
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
else
{
lean_inc(v_a_3859_);
lean_dec(v___x_3824_);
v___x_3861_ = lean_box(0);
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
v_resetjp_3860_:
{
lean_object* v___x_3864_; 
if (v_isShared_3862_ == 0)
{
v___x_3864_ = v___x_3861_;
goto v_reusejp_3863_;
}
else
{
lean_object* v_reuseFailAlloc_3865_; 
v_reuseFailAlloc_3865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3865_, 0, v_a_3859_);
v___x_3864_ = v_reuseFailAlloc_3865_;
goto v_reusejp_3863_;
}
v_reusejp_3863_:
{
return v___x_3864_;
}
}
}
}
}
else
{
lean_object* v_a_3867_; lean_object* v___x_3869_; uint8_t v_isShared_3870_; uint8_t v_isSharedCheck_3874_; 
lean_dec(v_a_3815_);
lean_dec_ref(v_c_3813_);
lean_dec(v___x_3811_);
lean_dec(v_numArgs_3806_);
lean_dec_ref(v_e_3791_);
v_a_3867_ = lean_ctor_get(v___x_3817_, 0);
v_isSharedCheck_3874_ = !lean_is_exclusive(v___x_3817_);
if (v_isSharedCheck_3874_ == 0)
{
v___x_3869_ = v___x_3817_;
v_isShared_3870_ = v_isSharedCheck_3874_;
goto v_resetjp_3868_;
}
else
{
lean_inc(v_a_3867_);
lean_dec(v___x_3817_);
v___x_3869_ = lean_box(0);
v_isShared_3870_ = v_isSharedCheck_3874_;
goto v_resetjp_3868_;
}
v_resetjp_3868_:
{
lean_object* v___x_3872_; 
if (v_isShared_3870_ == 0)
{
v___x_3872_ = v___x_3869_;
goto v_reusejp_3871_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v_a_3867_);
v___x_3872_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3871_;
}
v_reusejp_3871_:
{
return v___x_3872_;
}
}
}
}
else
{
lean_object* v___x_3875_; lean_object* v_dummy_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; 
lean_dec(v_a_3815_);
v___x_3875_ = l_Lean_Expr_getAppFn(v_e_3791_);
v_dummy_3876_ = lean_obj_once(&l_Lean_Meta_Grind_propagateCond___closed__0, &l_Lean_Meta_Grind_propagateCond___closed__0_once, _init_l_Lean_Meta_Grind_propagateCond___closed__0);
v___x_3877_ = lean_mk_array(v_numArgs_3806_, v_dummy_3876_);
lean_inc_ref(v_e_3791_);
v___x_3878_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3791_, v___x_3877_, v___x_3811_);
lean_inc_ref(v_c_3813_);
v___x_3879_ = l_Lean_Meta_Grind_mkEqTrueProof(v_c_3813_, v_a_3792_, v_a_3793_, v_a_3794_, v_a_3795_, v_a_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_);
if (lean_obj_tag(v___x_3879_) == 0)
{
lean_object* v_a_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; 
v_a_3880_ = lean_ctor_get(v___x_3879_, 0);
lean_inc_n(v_a_3880_, 2);
lean_dec_ref_known(v___x_3879_, 1);
v___x_3881_ = lean_unsigned_to_nat(3u);
v___x_3882_ = lean_array_get_borrowed(v___x_3809_, v___x_3878_, v___x_3881_);
v___x_3883_ = l_Lean_Meta_mkOfEqTrueCore(v_c_3813_, v_a_3880_);
lean_inc(v___x_3882_);
v___x_3884_ = l_Lean_Expr_app___override(v___x_3882_, v___x_3883_);
lean_inc(v_a_3801_);
lean_inc_ref(v_a_3800_);
lean_inc(v_a_3799_);
lean_inc_ref(v_a_3798_);
lean_inc(v_a_3797_);
lean_inc_ref(v_a_3796_);
lean_inc(v_a_3795_);
lean_inc_ref(v_a_3794_);
lean_inc(v_a_3793_);
lean_inc(v_a_3792_);
v___x_3885_ = lean_grind_preprocess(v___x_3884_, v_a_3792_, v_a_3793_, v_a_3794_, v_a_3795_, v_a_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_);
if (lean_obj_tag(v___x_3885_) == 0)
{
lean_object* v_a_3886_; lean_object* v_expr_3887_; lean_object* v___x_3888_; 
v_a_3886_ = lean_ctor_get(v___x_3885_, 0);
lean_inc(v_a_3886_);
lean_dec_ref_known(v___x_3885_, 1);
v_expr_3887_ = lean_ctor_get(v_a_3886_, 0);
lean_inc_ref(v_expr_3887_);
v___x_3888_ = l_Lean_Meta_Simp_Result_getProof(v_a_3886_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_);
if (lean_obj_tag(v___x_3888_) == 0)
{
lean_object* v_a_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; 
v_a_3889_ = lean_ctor_get(v___x_3888_, 0);
lean_inc(v_a_3889_);
lean_dec_ref_known(v___x_3888_, 1);
v___x_3890_ = ((lean_object*)(l_Lean_Meta_Grind_propagateDIte___closed__3));
v___x_3891_ = l_Lean_Expr_constLevels_x21(v___x_3875_);
lean_dec_ref(v___x_3875_);
v___x_3892_ = l_Lean_mkConst(v___x_3890_, v___x_3891_);
v___x_3893_ = lean_unsigned_to_nat(0u);
v___x_3894_ = l_Lean_mkAppRange(v___x_3892_, v___x_3893_, v___x_3807_, v___x_3878_);
lean_inc_ref(v_expr_3887_);
v___x_3895_ = l_Lean_mkApp3(v___x_3894_, v_expr_3887_, v_a_3880_, v_a_3889_);
v___x_3896_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(v_e_3791_, v_expr_3887_, v___x_3895_, v___x_3807_, v___x_3878_, v___x_3808_, v_a_3792_, v_a_3793_, v_a_3794_, v_a_3795_, v_a_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_);
lean_dec_ref(v___x_3878_);
return v___x_3896_;
}
else
{
lean_object* v_a_3897_; lean_object* v___x_3899_; uint8_t v_isShared_3900_; uint8_t v_isSharedCheck_3904_; 
lean_dec_ref(v_expr_3887_);
lean_dec(v_a_3880_);
lean_dec_ref(v___x_3878_);
lean_dec_ref(v___x_3875_);
lean_dec_ref(v_e_3791_);
v_a_3897_ = lean_ctor_get(v___x_3888_, 0);
v_isSharedCheck_3904_ = !lean_is_exclusive(v___x_3888_);
if (v_isSharedCheck_3904_ == 0)
{
v___x_3899_ = v___x_3888_;
v_isShared_3900_ = v_isSharedCheck_3904_;
goto v_resetjp_3898_;
}
else
{
lean_inc(v_a_3897_);
lean_dec(v___x_3888_);
v___x_3899_ = lean_box(0);
v_isShared_3900_ = v_isSharedCheck_3904_;
goto v_resetjp_3898_;
}
v_resetjp_3898_:
{
lean_object* v___x_3902_; 
if (v_isShared_3900_ == 0)
{
v___x_3902_ = v___x_3899_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v_a_3897_);
v___x_3902_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
return v___x_3902_;
}
}
}
}
else
{
lean_object* v_a_3905_; lean_object* v___x_3907_; uint8_t v_isShared_3908_; uint8_t v_isSharedCheck_3912_; 
lean_dec(v_a_3880_);
lean_dec_ref(v___x_3878_);
lean_dec_ref(v___x_3875_);
lean_dec_ref(v_e_3791_);
v_a_3905_ = lean_ctor_get(v___x_3885_, 0);
v_isSharedCheck_3912_ = !lean_is_exclusive(v___x_3885_);
if (v_isSharedCheck_3912_ == 0)
{
v___x_3907_ = v___x_3885_;
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
else
{
lean_inc(v_a_3905_);
lean_dec(v___x_3885_);
v___x_3907_ = lean_box(0);
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
v_resetjp_3906_:
{
lean_object* v___x_3910_; 
if (v_isShared_3908_ == 0)
{
v___x_3910_ = v___x_3907_;
goto v_reusejp_3909_;
}
else
{
lean_object* v_reuseFailAlloc_3911_; 
v_reuseFailAlloc_3911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3911_, 0, v_a_3905_);
v___x_3910_ = v_reuseFailAlloc_3911_;
goto v_reusejp_3909_;
}
v_reusejp_3909_:
{
return v___x_3910_;
}
}
}
}
else
{
lean_object* v_a_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3920_; 
lean_dec_ref(v___x_3878_);
lean_dec_ref(v___x_3875_);
lean_dec_ref(v_c_3813_);
lean_dec_ref(v_e_3791_);
v_a_3913_ = lean_ctor_get(v___x_3879_, 0);
v_isSharedCheck_3920_ = !lean_is_exclusive(v___x_3879_);
if (v_isSharedCheck_3920_ == 0)
{
v___x_3915_ = v___x_3879_;
v_isShared_3916_ = v_isSharedCheck_3920_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_a_3913_);
lean_dec(v___x_3879_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3920_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
lean_object* v___x_3918_; 
if (v_isShared_3916_ == 0)
{
v___x_3918_ = v___x_3915_;
goto v_reusejp_3917_;
}
else
{
lean_object* v_reuseFailAlloc_3919_; 
v_reuseFailAlloc_3919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3919_, 0, v_a_3913_);
v___x_3918_ = v_reuseFailAlloc_3919_;
goto v_reusejp_3917_;
}
v_reusejp_3917_:
{
return v___x_3918_;
}
}
}
}
}
else
{
lean_object* v_a_3921_; lean_object* v___x_3923_; uint8_t v_isShared_3924_; uint8_t v_isSharedCheck_3928_; 
lean_dec_ref(v_c_3813_);
lean_dec(v___x_3811_);
lean_dec(v_numArgs_3806_);
lean_dec_ref(v_e_3791_);
v_a_3921_ = lean_ctor_get(v___x_3814_, 0);
v_isSharedCheck_3928_ = !lean_is_exclusive(v___x_3814_);
if (v_isSharedCheck_3928_ == 0)
{
v___x_3923_ = v___x_3814_;
v_isShared_3924_ = v_isSharedCheck_3928_;
goto v_resetjp_3922_;
}
else
{
lean_inc(v_a_3921_);
lean_dec(v___x_3814_);
v___x_3923_ = lean_box(0);
v_isShared_3924_ = v_isSharedCheck_3928_;
goto v_resetjp_3922_;
}
v_resetjp_3922_:
{
lean_object* v___x_3926_; 
if (v_isShared_3924_ == 0)
{
v___x_3926_ = v___x_3923_;
goto v_reusejp_3925_;
}
else
{
lean_object* v_reuseFailAlloc_3927_; 
v_reuseFailAlloc_3927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3927_, 0, v_a_3921_);
v___x_3926_ = v_reuseFailAlloc_3927_;
goto v_reusejp_3925_;
}
v_reusejp_3925_:
{
return v___x_3926_;
}
}
}
}
else
{
lean_dec(v_numArgs_3806_);
lean_dec_ref(v_e_3791_);
goto v___jp_3803_;
}
v___jp_3803_:
{
lean_object* v___x_3804_; lean_object* v___x_3805_; 
v___x_3804_ = lean_box(0);
v___x_3805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3805_, 0, v___x_3804_);
return v___x_3805_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDIte___boxed(lean_object* v_e_3929_, lean_object* v_a_3930_, lean_object* v_a_3931_, lean_object* v_a_3932_, lean_object* v_a_3933_, lean_object* v_a_3934_, lean_object* v_a_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_, lean_object* v_a_3940_){
_start:
{
lean_object* v_res_3941_; 
v_res_3941_ = l_Lean_Meta_Grind_propagateDIte(v_e_3929_, v_a_3930_, v_a_3931_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_, v_a_3938_, v_a_3939_);
lean_dec(v_a_3939_);
lean_dec_ref(v_a_3938_);
lean_dec(v_a_3937_);
lean_dec_ref(v_a_3936_);
lean_dec(v_a_3935_);
lean_dec_ref(v_a_3934_);
lean_dec(v_a_3933_);
lean_dec_ref(v_a_3932_);
lean_dec(v_a_3931_);
lean_dec(v_a_3930_);
return v_res_3941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3737351488____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; 
v___x_3946_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3737351488____hygCtx___hyg_9_));
v___x_3947_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateDIte___boxed), 12, 0);
v___x_3948_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_3946_, v___x_3947_);
return v___x_3948_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3737351488____hygCtx___hyg_9____boxed(lean_object* v_a_3949_){
_start:
{
lean_object* v_res_3950_; 
v_res_3950_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3737351488____hygCtx___hyg_9_();
return v_res_3950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecisionDown(lean_object* v_e_3969_, lean_object* v_a_3970_, lean_object* v_a_3971_, lean_object* v_a_3972_, lean_object* v_a_3973_, lean_object* v_a_3974_, lean_object* v_a_3975_, lean_object* v_a_3976_, lean_object* v_a_3977_, lean_object* v_a_3978_, lean_object* v_a_3979_){
_start:
{
lean_object* v___x_3981_; 
lean_inc_ref(v_e_3969_);
v___x_3981_ = l_Lean_Meta_Grind_getRootENode___redArg(v_e_3969_, v_a_3970_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_);
if (lean_obj_tag(v___x_3981_) == 0)
{
lean_object* v_a_3982_; lean_object* v___x_3984_; uint8_t v_isShared_3985_; uint8_t v_isSharedCheck_4083_; 
v_a_3982_ = lean_ctor_get(v___x_3981_, 0);
v_isSharedCheck_4083_ = !lean_is_exclusive(v___x_3981_);
if (v_isSharedCheck_4083_ == 0)
{
v___x_3984_ = v___x_3981_;
v_isShared_3985_ = v_isSharedCheck_4083_;
goto v_resetjp_3983_;
}
else
{
lean_inc(v_a_3982_);
lean_dec(v___x_3981_);
v___x_3984_ = lean_box(0);
v_isShared_3985_ = v_isSharedCheck_4083_;
goto v_resetjp_3983_;
}
v_resetjp_3983_:
{
uint8_t v_ctor_3986_; 
v_ctor_3986_ = lean_ctor_get_uint8(v_a_3982_, sizeof(void*)*12 + 2);
if (v_ctor_3986_ == 0)
{
lean_object* v___x_3987_; lean_object* v___x_3989_; 
lean_dec(v_a_3982_);
lean_dec_ref(v_e_3969_);
v___x_3987_ = lean_box(0);
if (v_isShared_3985_ == 0)
{
lean_ctor_set(v___x_3984_, 0, v___x_3987_);
v___x_3989_ = v___x_3984_;
goto v_reusejp_3988_;
}
else
{
lean_object* v_reuseFailAlloc_3990_; 
v_reuseFailAlloc_3990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3990_, 0, v___x_3987_);
v___x_3989_ = v_reuseFailAlloc_3990_;
goto v_reusejp_3988_;
}
v_reusejp_3988_:
{
return v___x_3989_;
}
}
else
{
lean_object* v_self_3991_; lean_object* v___x_3992_; 
lean_del_object(v___x_3984_);
v_self_3991_ = lean_ctor_get(v_a_3982_, 0);
lean_inc_ref(v_self_3991_);
lean_dec(v_a_3982_);
lean_inc_ref(v_e_3969_);
v___x_3992_ = l_Lean_Meta_getBoolDecision_x3f(v_e_3969_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_);
if (lean_obj_tag(v___x_3992_) == 0)
{
lean_object* v_a_3993_; lean_object* v___x_3995_; uint8_t v_isShared_3996_; uint8_t v_isSharedCheck_4074_; 
v_a_3993_ = lean_ctor_get(v___x_3992_, 0);
v_isSharedCheck_4074_ = !lean_is_exclusive(v___x_3992_);
if (v_isSharedCheck_4074_ == 0)
{
v___x_3995_ = v___x_3992_;
v_isShared_3996_ = v_isSharedCheck_4074_;
goto v_resetjp_3994_;
}
else
{
lean_inc(v_a_3993_);
lean_dec(v___x_3992_);
v___x_3995_ = lean_box(0);
v_isShared_3996_ = v_isSharedCheck_4074_;
goto v_resetjp_3994_;
}
v_resetjp_3994_:
{
if (lean_obj_tag(v_a_3993_) == 1)
{
lean_object* v_val_3997_; lean_object* v_fst_3998_; lean_object* v_snd_3999_; lean_object* v___x_4000_; 
lean_del_object(v___x_3995_);
v_val_3997_ = lean_ctor_get(v_a_3993_, 0);
lean_inc(v_val_3997_);
lean_dec_ref_known(v_a_3993_, 1);
v_fst_3998_ = lean_ctor_get(v_val_3997_, 0);
lean_inc(v_fst_3998_);
v_snd_3999_ = lean_ctor_get(v_val_3997_, 1);
lean_inc(v_snd_3999_);
lean_dec(v_val_3997_);
v___x_4000_ = l_Lean_Meta_Sym_shareCommon(v_fst_3998_, v_a_3974_, v_a_3975_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_);
if (lean_obj_tag(v___x_4000_) == 0)
{
lean_object* v_a_4001_; lean_object* v___x_4003_; uint8_t v_isShared_4004_; uint8_t v_isSharedCheck_4061_; 
v_a_4001_ = lean_ctor_get(v___x_4000_, 0);
v_isSharedCheck_4061_ = !lean_is_exclusive(v___x_4000_);
if (v_isSharedCheck_4061_ == 0)
{
v___x_4003_ = v___x_4000_;
v_isShared_4004_ = v_isSharedCheck_4061_;
goto v_resetjp_4002_;
}
else
{
lean_inc(v_a_4001_);
lean_dec(v___x_4000_);
v___x_4003_ = lean_box(0);
v_isShared_4004_ = v_isSharedCheck_4061_;
goto v_resetjp_4002_;
}
v_resetjp_4002_:
{
lean_object* v___x_4005_; uint8_t v___x_4006_; 
v___x_4005_ = ((lean_object*)(l_Lean_Meta_Grind_propagateDecisionDown___closed__1));
v___x_4006_ = l_Lean_Expr_isConstOf(v_self_3991_, v___x_4005_);
if (v___x_4006_ == 0)
{
lean_object* v___x_4007_; uint8_t v___x_4008_; 
v___x_4007_ = ((lean_object*)(l_Lean_Meta_Grind_propagateDecisionDown___closed__3));
v___x_4008_ = l_Lean_Expr_isConstOf(v_self_3991_, v___x_4007_);
if (v___x_4008_ == 0)
{
lean_object* v___x_4009_; lean_object* v___x_4011_; 
lean_dec(v_a_4001_);
lean_dec(v_snd_3999_);
lean_dec_ref(v_self_3991_);
lean_dec_ref(v_e_3969_);
v___x_4009_ = lean_box(0);
if (v_isShared_4004_ == 0)
{
lean_ctor_set(v___x_4003_, 0, v___x_4009_);
v___x_4011_ = v___x_4003_;
goto v_reusejp_4010_;
}
else
{
lean_object* v_reuseFailAlloc_4012_; 
v_reuseFailAlloc_4012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4012_, 0, v___x_4009_);
v___x_4011_ = v_reuseFailAlloc_4012_;
goto v_reusejp_4010_;
}
v_reusejp_4010_:
{
return v___x_4011_;
}
}
else
{
lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; 
lean_del_object(v___x_4003_);
v___x_4013_ = ((lean_object*)(l_Lean_Meta_Grind_propagateDecisionDown___closed__5));
v___x_4014_ = lean_box(0);
v___x_4015_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_4013_, v___x_4014_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_);
if (lean_obj_tag(v___x_4015_) == 0)
{
lean_object* v_a_4016_; lean_object* v___x_4017_; 
v_a_4016_ = lean_ctor_get(v___x_4015_, 0);
lean_inc(v_a_4016_);
lean_dec_ref_known(v___x_4015_, 1);
lean_inc(v_a_3979_);
lean_inc_ref(v_a_3978_);
lean_inc(v_a_3977_);
lean_inc_ref(v_a_3976_);
lean_inc(v_a_3975_);
lean_inc_ref(v_a_3974_);
lean_inc(v_a_3973_);
lean_inc_ref(v_a_3972_);
lean_inc(v_a_3971_);
lean_inc(v_a_3970_);
v___x_4017_ = lean_grind_mk_eq_proof(v_e_3969_, v_self_3991_, v_a_3970_, v_a_3971_, v_a_3972_, v_a_3973_, v_a_3974_, v_a_3975_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_);
if (lean_obj_tag(v___x_4017_) == 0)
{
lean_object* v_a_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; 
v_a_4018_ = lean_ctor_get(v___x_4017_, 0);
lean_inc(v_a_4018_);
lean_dec_ref_known(v___x_4017_, 1);
lean_inc(v_a_4001_);
v___x_4019_ = l_Lean_mkApp3(v_a_4016_, v_a_4001_, v_snd_3999_, v_a_4018_);
v___x_4020_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_a_4001_, v___x_4019_, v_a_3970_, v_a_3972_, v_a_3974_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_);
return v___x_4020_;
}
else
{
lean_object* v_a_4021_; lean_object* v___x_4023_; uint8_t v_isShared_4024_; uint8_t v_isSharedCheck_4028_; 
lean_dec(v_a_4016_);
lean_dec(v_a_4001_);
lean_dec(v_snd_3999_);
v_a_4021_ = lean_ctor_get(v___x_4017_, 0);
v_isSharedCheck_4028_ = !lean_is_exclusive(v___x_4017_);
if (v_isSharedCheck_4028_ == 0)
{
v___x_4023_ = v___x_4017_;
v_isShared_4024_ = v_isSharedCheck_4028_;
goto v_resetjp_4022_;
}
else
{
lean_inc(v_a_4021_);
lean_dec(v___x_4017_);
v___x_4023_ = lean_box(0);
v_isShared_4024_ = v_isSharedCheck_4028_;
goto v_resetjp_4022_;
}
v_resetjp_4022_:
{
lean_object* v___x_4026_; 
if (v_isShared_4024_ == 0)
{
v___x_4026_ = v___x_4023_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4027_; 
v_reuseFailAlloc_4027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4027_, 0, v_a_4021_);
v___x_4026_ = v_reuseFailAlloc_4027_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
return v___x_4026_;
}
}
}
}
else
{
lean_object* v_a_4029_; lean_object* v___x_4031_; uint8_t v_isShared_4032_; uint8_t v_isSharedCheck_4036_; 
lean_dec(v_a_4001_);
lean_dec(v_snd_3999_);
lean_dec_ref(v_self_3991_);
lean_dec_ref(v_e_3969_);
v_a_4029_ = lean_ctor_get(v___x_4015_, 0);
v_isSharedCheck_4036_ = !lean_is_exclusive(v___x_4015_);
if (v_isSharedCheck_4036_ == 0)
{
v___x_4031_ = v___x_4015_;
v_isShared_4032_ = v_isSharedCheck_4036_;
goto v_resetjp_4030_;
}
else
{
lean_inc(v_a_4029_);
lean_dec(v___x_4015_);
v___x_4031_ = lean_box(0);
v_isShared_4032_ = v_isSharedCheck_4036_;
goto v_resetjp_4030_;
}
v_resetjp_4030_:
{
lean_object* v___x_4034_; 
if (v_isShared_4032_ == 0)
{
v___x_4034_ = v___x_4031_;
goto v_reusejp_4033_;
}
else
{
lean_object* v_reuseFailAlloc_4035_; 
v_reuseFailAlloc_4035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4035_, 0, v_a_4029_);
v___x_4034_ = v_reuseFailAlloc_4035_;
goto v_reusejp_4033_;
}
v_reusejp_4033_:
{
return v___x_4034_;
}
}
}
}
}
else
{
lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; 
lean_del_object(v___x_4003_);
v___x_4037_ = ((lean_object*)(l_Lean_Meta_Grind_propagateDecisionDown___closed__7));
v___x_4038_ = lean_box(0);
v___x_4039_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_4037_, v___x_4038_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_);
if (lean_obj_tag(v___x_4039_) == 0)
{
lean_object* v_a_4040_; lean_object* v___x_4041_; 
v_a_4040_ = lean_ctor_get(v___x_4039_, 0);
lean_inc(v_a_4040_);
lean_dec_ref_known(v___x_4039_, 1);
lean_inc(v_a_3979_);
lean_inc_ref(v_a_3978_);
lean_inc(v_a_3977_);
lean_inc_ref(v_a_3976_);
lean_inc(v_a_3975_);
lean_inc_ref(v_a_3974_);
lean_inc(v_a_3973_);
lean_inc_ref(v_a_3972_);
lean_inc(v_a_3971_);
lean_inc(v_a_3970_);
v___x_4041_ = lean_grind_mk_eq_proof(v_e_3969_, v_self_3991_, v_a_3970_, v_a_3971_, v_a_3972_, v_a_3973_, v_a_3974_, v_a_3975_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_);
if (lean_obj_tag(v___x_4041_) == 0)
{
lean_object* v_a_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; 
v_a_4042_ = lean_ctor_get(v___x_4041_, 0);
lean_inc(v_a_4042_);
lean_dec_ref_known(v___x_4041_, 1);
lean_inc(v_a_4001_);
v___x_4043_ = l_Lean_mkApp3(v_a_4040_, v_a_4001_, v_snd_3999_, v_a_4042_);
v___x_4044_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_a_4001_, v___x_4043_, v_a_3970_, v_a_3972_, v_a_3974_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_);
return v___x_4044_;
}
else
{
lean_object* v_a_4045_; lean_object* v___x_4047_; uint8_t v_isShared_4048_; uint8_t v_isSharedCheck_4052_; 
lean_dec(v_a_4040_);
lean_dec(v_a_4001_);
lean_dec(v_snd_3999_);
v_a_4045_ = lean_ctor_get(v___x_4041_, 0);
v_isSharedCheck_4052_ = !lean_is_exclusive(v___x_4041_);
if (v_isSharedCheck_4052_ == 0)
{
v___x_4047_ = v___x_4041_;
v_isShared_4048_ = v_isSharedCheck_4052_;
goto v_resetjp_4046_;
}
else
{
lean_inc(v_a_4045_);
lean_dec(v___x_4041_);
v___x_4047_ = lean_box(0);
v_isShared_4048_ = v_isSharedCheck_4052_;
goto v_resetjp_4046_;
}
v_resetjp_4046_:
{
lean_object* v___x_4050_; 
if (v_isShared_4048_ == 0)
{
v___x_4050_ = v___x_4047_;
goto v_reusejp_4049_;
}
else
{
lean_object* v_reuseFailAlloc_4051_; 
v_reuseFailAlloc_4051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4051_, 0, v_a_4045_);
v___x_4050_ = v_reuseFailAlloc_4051_;
goto v_reusejp_4049_;
}
v_reusejp_4049_:
{
return v___x_4050_;
}
}
}
}
else
{
lean_object* v_a_4053_; lean_object* v___x_4055_; uint8_t v_isShared_4056_; uint8_t v_isSharedCheck_4060_; 
lean_dec(v_a_4001_);
lean_dec(v_snd_3999_);
lean_dec_ref(v_self_3991_);
lean_dec_ref(v_e_3969_);
v_a_4053_ = lean_ctor_get(v___x_4039_, 0);
v_isSharedCheck_4060_ = !lean_is_exclusive(v___x_4039_);
if (v_isSharedCheck_4060_ == 0)
{
v___x_4055_ = v___x_4039_;
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
else
{
lean_inc(v_a_4053_);
lean_dec(v___x_4039_);
v___x_4055_ = lean_box(0);
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
v_resetjp_4054_:
{
lean_object* v___x_4058_; 
if (v_isShared_4056_ == 0)
{
v___x_4058_ = v___x_4055_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v_a_4053_);
v___x_4058_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
return v___x_4058_;
}
}
}
}
}
}
else
{
lean_object* v_a_4062_; lean_object* v___x_4064_; uint8_t v_isShared_4065_; uint8_t v_isSharedCheck_4069_; 
lean_dec(v_snd_3999_);
lean_dec_ref(v_self_3991_);
lean_dec_ref(v_e_3969_);
v_a_4062_ = lean_ctor_get(v___x_4000_, 0);
v_isSharedCheck_4069_ = !lean_is_exclusive(v___x_4000_);
if (v_isSharedCheck_4069_ == 0)
{
v___x_4064_ = v___x_4000_;
v_isShared_4065_ = v_isSharedCheck_4069_;
goto v_resetjp_4063_;
}
else
{
lean_inc(v_a_4062_);
lean_dec(v___x_4000_);
v___x_4064_ = lean_box(0);
v_isShared_4065_ = v_isSharedCheck_4069_;
goto v_resetjp_4063_;
}
v_resetjp_4063_:
{
lean_object* v___x_4067_; 
if (v_isShared_4065_ == 0)
{
v___x_4067_ = v___x_4064_;
goto v_reusejp_4066_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v_a_4062_);
v___x_4067_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4066_;
}
v_reusejp_4066_:
{
return v___x_4067_;
}
}
}
}
else
{
lean_object* v___x_4070_; lean_object* v___x_4072_; 
lean_dec(v_a_3993_);
lean_dec_ref(v_self_3991_);
lean_dec_ref(v_e_3969_);
v___x_4070_ = lean_box(0);
if (v_isShared_3996_ == 0)
{
lean_ctor_set(v___x_3995_, 0, v___x_4070_);
v___x_4072_ = v___x_3995_;
goto v_reusejp_4071_;
}
else
{
lean_object* v_reuseFailAlloc_4073_; 
v_reuseFailAlloc_4073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4073_, 0, v___x_4070_);
v___x_4072_ = v_reuseFailAlloc_4073_;
goto v_reusejp_4071_;
}
v_reusejp_4071_:
{
return v___x_4072_;
}
}
}
}
else
{
lean_object* v_a_4075_; lean_object* v___x_4077_; uint8_t v_isShared_4078_; uint8_t v_isSharedCheck_4082_; 
lean_dec_ref(v_self_3991_);
lean_dec_ref(v_e_3969_);
v_a_4075_ = lean_ctor_get(v___x_3992_, 0);
v_isSharedCheck_4082_ = !lean_is_exclusive(v___x_3992_);
if (v_isSharedCheck_4082_ == 0)
{
v___x_4077_ = v___x_3992_;
v_isShared_4078_ = v_isSharedCheck_4082_;
goto v_resetjp_4076_;
}
else
{
lean_inc(v_a_4075_);
lean_dec(v___x_3992_);
v___x_4077_ = lean_box(0);
v_isShared_4078_ = v_isSharedCheck_4082_;
goto v_resetjp_4076_;
}
v_resetjp_4076_:
{
lean_object* v___x_4080_; 
if (v_isShared_4078_ == 0)
{
v___x_4080_ = v___x_4077_;
goto v_reusejp_4079_;
}
else
{
lean_object* v_reuseFailAlloc_4081_; 
v_reuseFailAlloc_4081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4081_, 0, v_a_4075_);
v___x_4080_ = v_reuseFailAlloc_4081_;
goto v_reusejp_4079_;
}
v_reusejp_4079_:
{
return v___x_4080_;
}
}
}
}
}
}
else
{
lean_object* v_a_4084_; lean_object* v___x_4086_; uint8_t v_isShared_4087_; uint8_t v_isSharedCheck_4091_; 
lean_dec_ref(v_e_3969_);
v_a_4084_ = lean_ctor_get(v___x_3981_, 0);
v_isSharedCheck_4091_ = !lean_is_exclusive(v___x_3981_);
if (v_isSharedCheck_4091_ == 0)
{
v___x_4086_ = v___x_3981_;
v_isShared_4087_ = v_isSharedCheck_4091_;
goto v_resetjp_4085_;
}
else
{
lean_inc(v_a_4084_);
lean_dec(v___x_3981_);
v___x_4086_ = lean_box(0);
v_isShared_4087_ = v_isSharedCheck_4091_;
goto v_resetjp_4085_;
}
v_resetjp_4085_:
{
lean_object* v___x_4089_; 
if (v_isShared_4087_ == 0)
{
v___x_4089_ = v___x_4086_;
goto v_reusejp_4088_;
}
else
{
lean_object* v_reuseFailAlloc_4090_; 
v_reuseFailAlloc_4090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4090_, 0, v_a_4084_);
v___x_4089_ = v_reuseFailAlloc_4090_;
goto v_reusejp_4088_;
}
v_reusejp_4088_:
{
return v___x_4089_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecisionDown___boxed(lean_object* v_e_4092_, lean_object* v_a_4093_, lean_object* v_a_4094_, lean_object* v_a_4095_, lean_object* v_a_4096_, lean_object* v_a_4097_, lean_object* v_a_4098_, lean_object* v_a_4099_, lean_object* v_a_4100_, lean_object* v_a_4101_, lean_object* v_a_4102_, lean_object* v_a_4103_){
_start:
{
lean_object* v_res_4104_; 
v_res_4104_ = l_Lean_Meta_Grind_propagateDecisionDown(v_e_4092_, v_a_4093_, v_a_4094_, v_a_4095_, v_a_4096_, v_a_4097_, v_a_4098_, v_a_4099_, v_a_4100_, v_a_4101_, v_a_4102_);
lean_dec(v_a_4102_);
lean_dec_ref(v_a_4101_);
lean_dec(v_a_4100_);
lean_dec_ref(v_a_4099_);
lean_dec(v_a_4098_);
lean_dec_ref(v_a_4097_);
lean_dec(v_a_4096_);
lean_dec_ref(v_a_4095_);
lean_dec(v_a_4094_);
lean_dec(v_a_4093_);
return v_res_4104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecisionUp(lean_object* v_e_4105_, lean_object* v_a_4106_, lean_object* v_a_4107_, lean_object* v_a_4108_, lean_object* v_a_4109_, lean_object* v_a_4110_, lean_object* v_a_4111_, lean_object* v_a_4112_, lean_object* v_a_4113_, lean_object* v_a_4114_, lean_object* v_a_4115_){
_start:
{
lean_object* v___x_4117_; 
lean_inc_ref(v_e_4105_);
v___x_4117_ = l_Lean_Meta_getBoolDecision_x3f(v_e_4105_, v_a_4112_, v_a_4113_, v_a_4114_, v_a_4115_);
if (lean_obj_tag(v___x_4117_) == 0)
{
lean_object* v_a_4118_; lean_object* v___x_4120_; uint8_t v_isShared_4121_; uint8_t v_isSharedCheck_4239_; 
v_a_4118_ = lean_ctor_get(v___x_4117_, 0);
v_isSharedCheck_4239_ = !lean_is_exclusive(v___x_4117_);
if (v_isSharedCheck_4239_ == 0)
{
v___x_4120_ = v___x_4117_;
v_isShared_4121_ = v_isSharedCheck_4239_;
goto v_resetjp_4119_;
}
else
{
lean_inc(v_a_4118_);
lean_dec(v___x_4117_);
v___x_4120_ = lean_box(0);
v_isShared_4121_ = v_isSharedCheck_4239_;
goto v_resetjp_4119_;
}
v_resetjp_4119_:
{
if (lean_obj_tag(v_a_4118_) == 1)
{
lean_object* v_val_4122_; lean_object* v_fst_4123_; lean_object* v_snd_4124_; lean_object* v___x_4125_; 
lean_del_object(v___x_4120_);
v_val_4122_ = lean_ctor_get(v_a_4118_, 0);
lean_inc(v_val_4122_);
lean_dec_ref_known(v_a_4118_, 1);
v_fst_4123_ = lean_ctor_get(v_val_4122_, 0);
lean_inc(v_fst_4123_);
v_snd_4124_ = lean_ctor_get(v_val_4122_, 1);
lean_inc(v_snd_4124_);
lean_dec(v_val_4122_);
v___x_4125_ = l_Lean_Meta_Sym_shareCommon(v_fst_4123_, v_a_4110_, v_a_4111_, v_a_4112_, v_a_4113_, v_a_4114_, v_a_4115_);
if (lean_obj_tag(v___x_4125_) == 0)
{
lean_object* v_a_4126_; lean_object* v___x_4127_; 
v_a_4126_ = lean_ctor_get(v___x_4125_, 0);
lean_inc_n(v_a_4126_, 2);
lean_dec_ref_known(v___x_4125_, 1);
v___x_4127_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_a_4126_, v_a_4106_, v_a_4110_, v_a_4112_, v_a_4113_, v_a_4114_, v_a_4115_);
if (lean_obj_tag(v___x_4127_) == 0)
{
lean_object* v_a_4128_; uint8_t v___x_4129_; 
v_a_4128_ = lean_ctor_get(v___x_4127_, 0);
lean_inc(v_a_4128_);
lean_dec_ref_known(v___x_4127_, 1);
v___x_4129_ = lean_unbox(v_a_4128_);
if (v___x_4129_ == 0)
{
lean_object* v___x_4130_; 
lean_inc(v_a_4126_);
v___x_4130_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_a_4126_, v_a_4106_, v_a_4110_, v_a_4112_, v_a_4113_, v_a_4114_, v_a_4115_);
if (lean_obj_tag(v___x_4130_) == 0)
{
lean_object* v_a_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4175_; 
v_a_4131_ = lean_ctor_get(v___x_4130_, 0);
v_isSharedCheck_4175_ = !lean_is_exclusive(v___x_4130_);
if (v_isSharedCheck_4175_ == 0)
{
v___x_4133_ = v___x_4130_;
v_isShared_4134_ = v_isSharedCheck_4175_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_a_4131_);
lean_dec(v___x_4130_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4175_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
uint8_t v___x_4135_; 
v___x_4135_ = lean_unbox(v_a_4131_);
lean_dec(v_a_4131_);
if (v___x_4135_ == 0)
{
lean_object* v___x_4136_; lean_object* v___x_4138_; 
lean_dec(v_a_4128_);
lean_dec(v_a_4126_);
lean_dec(v_snd_4124_);
lean_dec_ref(v_e_4105_);
v___x_4136_ = lean_box(0);
if (v_isShared_4134_ == 0)
{
lean_ctor_set(v___x_4133_, 0, v___x_4136_);
v___x_4138_ = v___x_4133_;
goto v_reusejp_4137_;
}
else
{
lean_object* v_reuseFailAlloc_4139_; 
v_reuseFailAlloc_4139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4139_, 0, v___x_4136_);
v___x_4138_ = v_reuseFailAlloc_4139_;
goto v_reusejp_4137_;
}
v_reusejp_4137_:
{
return v___x_4138_;
}
}
else
{
lean_object* v___x_4140_; 
lean_del_object(v___x_4133_);
v___x_4140_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_4110_);
if (lean_obj_tag(v___x_4140_) == 0)
{
lean_object* v_a_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; 
v_a_4141_ = lean_ctor_get(v___x_4140_, 0);
lean_inc(v_a_4141_);
lean_dec_ref_known(v___x_4140_, 1);
v___x_4142_ = ((lean_object*)(l_Lean_Meta_Grind_propagateCond___closed__6));
v___x_4143_ = lean_box(0);
v___x_4144_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_4142_, v___x_4143_, v_a_4112_, v_a_4113_, v_a_4114_, v_a_4115_);
if (lean_obj_tag(v___x_4144_) == 0)
{
lean_object* v_a_4145_; lean_object* v___x_4146_; 
v_a_4145_ = lean_ctor_get(v___x_4144_, 0);
lean_inc(v_a_4145_);
lean_dec_ref_known(v___x_4144_, 1);
lean_inc(v_a_4126_);
v___x_4146_ = l_Lean_Meta_Grind_mkEqFalseProof(v_a_4126_, v_a_4106_, v_a_4107_, v_a_4108_, v_a_4109_, v_a_4110_, v_a_4111_, v_a_4112_, v_a_4113_, v_a_4114_, v_a_4115_);
if (lean_obj_tag(v___x_4146_) == 0)
{
lean_object* v_a_4147_; lean_object* v___x_4148_; uint8_t v___x_4149_; lean_object* v___x_4150_; 
v_a_4147_ = lean_ctor_get(v___x_4146_, 0);
lean_inc(v_a_4147_);
lean_dec_ref_known(v___x_4146_, 1);
v___x_4148_ = l_Lean_mkApp3(v_a_4145_, v_a_4126_, v_snd_4124_, v_a_4147_);
v___x_4149_ = lean_unbox(v_a_4128_);
lean_dec(v_a_4128_);
v___x_4150_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_4105_, v_a_4141_, v___x_4148_, v___x_4149_, v_a_4106_, v_a_4108_, v_a_4112_, v_a_4113_, v_a_4114_, v_a_4115_);
return v___x_4150_;
}
else
{
lean_object* v_a_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4158_; 
lean_dec(v_a_4145_);
lean_dec(v_a_4141_);
lean_dec(v_a_4128_);
lean_dec(v_a_4126_);
lean_dec(v_snd_4124_);
lean_dec_ref(v_e_4105_);
v_a_4151_ = lean_ctor_get(v___x_4146_, 0);
v_isSharedCheck_4158_ = !lean_is_exclusive(v___x_4146_);
if (v_isSharedCheck_4158_ == 0)
{
v___x_4153_ = v___x_4146_;
v_isShared_4154_ = v_isSharedCheck_4158_;
goto v_resetjp_4152_;
}
else
{
lean_inc(v_a_4151_);
lean_dec(v___x_4146_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4158_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
lean_object* v___x_4156_; 
if (v_isShared_4154_ == 0)
{
v___x_4156_ = v___x_4153_;
goto v_reusejp_4155_;
}
else
{
lean_object* v_reuseFailAlloc_4157_; 
v_reuseFailAlloc_4157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4157_, 0, v_a_4151_);
v___x_4156_ = v_reuseFailAlloc_4157_;
goto v_reusejp_4155_;
}
v_reusejp_4155_:
{
return v___x_4156_;
}
}
}
}
else
{
lean_object* v_a_4159_; lean_object* v___x_4161_; uint8_t v_isShared_4162_; uint8_t v_isSharedCheck_4166_; 
lean_dec(v_a_4141_);
lean_dec(v_a_4128_);
lean_dec(v_a_4126_);
lean_dec(v_snd_4124_);
lean_dec_ref(v_e_4105_);
v_a_4159_ = lean_ctor_get(v___x_4144_, 0);
v_isSharedCheck_4166_ = !lean_is_exclusive(v___x_4144_);
if (v_isSharedCheck_4166_ == 0)
{
v___x_4161_ = v___x_4144_;
v_isShared_4162_ = v_isSharedCheck_4166_;
goto v_resetjp_4160_;
}
else
{
lean_inc(v_a_4159_);
lean_dec(v___x_4144_);
v___x_4161_ = lean_box(0);
v_isShared_4162_ = v_isSharedCheck_4166_;
goto v_resetjp_4160_;
}
v_resetjp_4160_:
{
lean_object* v___x_4164_; 
if (v_isShared_4162_ == 0)
{
v___x_4164_ = v___x_4161_;
goto v_reusejp_4163_;
}
else
{
lean_object* v_reuseFailAlloc_4165_; 
v_reuseFailAlloc_4165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4165_, 0, v_a_4159_);
v___x_4164_ = v_reuseFailAlloc_4165_;
goto v_reusejp_4163_;
}
v_reusejp_4163_:
{
return v___x_4164_;
}
}
}
}
else
{
lean_object* v_a_4167_; lean_object* v___x_4169_; uint8_t v_isShared_4170_; uint8_t v_isSharedCheck_4174_; 
lean_dec(v_a_4128_);
lean_dec(v_a_4126_);
lean_dec(v_snd_4124_);
lean_dec_ref(v_e_4105_);
v_a_4167_ = lean_ctor_get(v___x_4140_, 0);
v_isSharedCheck_4174_ = !lean_is_exclusive(v___x_4140_);
if (v_isSharedCheck_4174_ == 0)
{
v___x_4169_ = v___x_4140_;
v_isShared_4170_ = v_isSharedCheck_4174_;
goto v_resetjp_4168_;
}
else
{
lean_inc(v_a_4167_);
lean_dec(v___x_4140_);
v___x_4169_ = lean_box(0);
v_isShared_4170_ = v_isSharedCheck_4174_;
goto v_resetjp_4168_;
}
v_resetjp_4168_:
{
lean_object* v___x_4172_; 
if (v_isShared_4170_ == 0)
{
v___x_4172_ = v___x_4169_;
goto v_reusejp_4171_;
}
else
{
lean_object* v_reuseFailAlloc_4173_; 
v_reuseFailAlloc_4173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4173_, 0, v_a_4167_);
v___x_4172_ = v_reuseFailAlloc_4173_;
goto v_reusejp_4171_;
}
v_reusejp_4171_:
{
return v___x_4172_;
}
}
}
}
}
}
else
{
lean_object* v_a_4176_; lean_object* v___x_4178_; uint8_t v_isShared_4179_; uint8_t v_isSharedCheck_4183_; 
lean_dec(v_a_4128_);
lean_dec(v_a_4126_);
lean_dec(v_snd_4124_);
lean_dec_ref(v_e_4105_);
v_a_4176_ = lean_ctor_get(v___x_4130_, 0);
v_isSharedCheck_4183_ = !lean_is_exclusive(v___x_4130_);
if (v_isSharedCheck_4183_ == 0)
{
v___x_4178_ = v___x_4130_;
v_isShared_4179_ = v_isSharedCheck_4183_;
goto v_resetjp_4177_;
}
else
{
lean_inc(v_a_4176_);
lean_dec(v___x_4130_);
v___x_4178_ = lean_box(0);
v_isShared_4179_ = v_isSharedCheck_4183_;
goto v_resetjp_4177_;
}
v_resetjp_4177_:
{
lean_object* v___x_4181_; 
if (v_isShared_4179_ == 0)
{
v___x_4181_ = v___x_4178_;
goto v_reusejp_4180_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v_a_4176_);
v___x_4181_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4180_;
}
v_reusejp_4180_:
{
return v___x_4181_;
}
}
}
}
else
{
lean_object* v___x_4184_; 
lean_dec(v_a_4128_);
v___x_4184_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_4110_);
if (lean_obj_tag(v___x_4184_) == 0)
{
lean_object* v_a_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; 
v_a_4185_ = lean_ctor_get(v___x_4184_, 0);
lean_inc(v_a_4185_);
lean_dec_ref_known(v___x_4184_, 1);
v___x_4186_ = ((lean_object*)(l_Lean_Meta_Grind_propagateCond___closed__8));
v___x_4187_ = lean_box(0);
v___x_4188_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_4186_, v___x_4187_, v_a_4112_, v_a_4113_, v_a_4114_, v_a_4115_);
if (lean_obj_tag(v___x_4188_) == 0)
{
lean_object* v_a_4189_; lean_object* v___x_4190_; 
v_a_4189_ = lean_ctor_get(v___x_4188_, 0);
lean_inc(v_a_4189_);
lean_dec_ref_known(v___x_4188_, 1);
lean_inc(v_a_4126_);
v___x_4190_ = l_Lean_Meta_Grind_mkEqTrueProof(v_a_4126_, v_a_4106_, v_a_4107_, v_a_4108_, v_a_4109_, v_a_4110_, v_a_4111_, v_a_4112_, v_a_4113_, v_a_4114_, v_a_4115_);
if (lean_obj_tag(v___x_4190_) == 0)
{
lean_object* v_a_4191_; lean_object* v___x_4192_; uint8_t v___x_4193_; lean_object* v___x_4194_; 
v_a_4191_ = lean_ctor_get(v___x_4190_, 0);
lean_inc(v_a_4191_);
lean_dec_ref_known(v___x_4190_, 1);
v___x_4192_ = l_Lean_mkApp3(v_a_4189_, v_a_4126_, v_snd_4124_, v_a_4191_);
v___x_4193_ = 0;
v___x_4194_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_4105_, v_a_4185_, v___x_4192_, v___x_4193_, v_a_4106_, v_a_4108_, v_a_4112_, v_a_4113_, v_a_4114_, v_a_4115_);
return v___x_4194_;
}
else
{
lean_object* v_a_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4202_; 
lean_dec(v_a_4189_);
lean_dec(v_a_4185_);
lean_dec(v_a_4126_);
lean_dec(v_snd_4124_);
lean_dec_ref(v_e_4105_);
v_a_4195_ = lean_ctor_get(v___x_4190_, 0);
v_isSharedCheck_4202_ = !lean_is_exclusive(v___x_4190_);
if (v_isSharedCheck_4202_ == 0)
{
v___x_4197_ = v___x_4190_;
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_a_4195_);
lean_dec(v___x_4190_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v___x_4200_; 
if (v_isShared_4198_ == 0)
{
v___x_4200_ = v___x_4197_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4201_; 
v_reuseFailAlloc_4201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4201_, 0, v_a_4195_);
v___x_4200_ = v_reuseFailAlloc_4201_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
return v___x_4200_;
}
}
}
}
else
{
lean_object* v_a_4203_; lean_object* v___x_4205_; uint8_t v_isShared_4206_; uint8_t v_isSharedCheck_4210_; 
lean_dec(v_a_4185_);
lean_dec(v_a_4126_);
lean_dec(v_snd_4124_);
lean_dec_ref(v_e_4105_);
v_a_4203_ = lean_ctor_get(v___x_4188_, 0);
v_isSharedCheck_4210_ = !lean_is_exclusive(v___x_4188_);
if (v_isSharedCheck_4210_ == 0)
{
v___x_4205_ = v___x_4188_;
v_isShared_4206_ = v_isSharedCheck_4210_;
goto v_resetjp_4204_;
}
else
{
lean_inc(v_a_4203_);
lean_dec(v___x_4188_);
v___x_4205_ = lean_box(0);
v_isShared_4206_ = v_isSharedCheck_4210_;
goto v_resetjp_4204_;
}
v_resetjp_4204_:
{
lean_object* v___x_4208_; 
if (v_isShared_4206_ == 0)
{
v___x_4208_ = v___x_4205_;
goto v_reusejp_4207_;
}
else
{
lean_object* v_reuseFailAlloc_4209_; 
v_reuseFailAlloc_4209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4209_, 0, v_a_4203_);
v___x_4208_ = v_reuseFailAlloc_4209_;
goto v_reusejp_4207_;
}
v_reusejp_4207_:
{
return v___x_4208_;
}
}
}
}
else
{
lean_object* v_a_4211_; lean_object* v___x_4213_; uint8_t v_isShared_4214_; uint8_t v_isSharedCheck_4218_; 
lean_dec(v_a_4126_);
lean_dec(v_snd_4124_);
lean_dec_ref(v_e_4105_);
v_a_4211_ = lean_ctor_get(v___x_4184_, 0);
v_isSharedCheck_4218_ = !lean_is_exclusive(v___x_4184_);
if (v_isSharedCheck_4218_ == 0)
{
v___x_4213_ = v___x_4184_;
v_isShared_4214_ = v_isSharedCheck_4218_;
goto v_resetjp_4212_;
}
else
{
lean_inc(v_a_4211_);
lean_dec(v___x_4184_);
v___x_4213_ = lean_box(0);
v_isShared_4214_ = v_isSharedCheck_4218_;
goto v_resetjp_4212_;
}
v_resetjp_4212_:
{
lean_object* v___x_4216_; 
if (v_isShared_4214_ == 0)
{
v___x_4216_ = v___x_4213_;
goto v_reusejp_4215_;
}
else
{
lean_object* v_reuseFailAlloc_4217_; 
v_reuseFailAlloc_4217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4217_, 0, v_a_4211_);
v___x_4216_ = v_reuseFailAlloc_4217_;
goto v_reusejp_4215_;
}
v_reusejp_4215_:
{
return v___x_4216_;
}
}
}
}
}
else
{
lean_object* v_a_4219_; lean_object* v___x_4221_; uint8_t v_isShared_4222_; uint8_t v_isSharedCheck_4226_; 
lean_dec(v_a_4126_);
lean_dec(v_snd_4124_);
lean_dec_ref(v_e_4105_);
v_a_4219_ = lean_ctor_get(v___x_4127_, 0);
v_isSharedCheck_4226_ = !lean_is_exclusive(v___x_4127_);
if (v_isSharedCheck_4226_ == 0)
{
v___x_4221_ = v___x_4127_;
v_isShared_4222_ = v_isSharedCheck_4226_;
goto v_resetjp_4220_;
}
else
{
lean_inc(v_a_4219_);
lean_dec(v___x_4127_);
v___x_4221_ = lean_box(0);
v_isShared_4222_ = v_isSharedCheck_4226_;
goto v_resetjp_4220_;
}
v_resetjp_4220_:
{
lean_object* v___x_4224_; 
if (v_isShared_4222_ == 0)
{
v___x_4224_ = v___x_4221_;
goto v_reusejp_4223_;
}
else
{
lean_object* v_reuseFailAlloc_4225_; 
v_reuseFailAlloc_4225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4225_, 0, v_a_4219_);
v___x_4224_ = v_reuseFailAlloc_4225_;
goto v_reusejp_4223_;
}
v_reusejp_4223_:
{
return v___x_4224_;
}
}
}
}
else
{
lean_object* v_a_4227_; lean_object* v___x_4229_; uint8_t v_isShared_4230_; uint8_t v_isSharedCheck_4234_; 
lean_dec(v_snd_4124_);
lean_dec_ref(v_e_4105_);
v_a_4227_ = lean_ctor_get(v___x_4125_, 0);
v_isSharedCheck_4234_ = !lean_is_exclusive(v___x_4125_);
if (v_isSharedCheck_4234_ == 0)
{
v___x_4229_ = v___x_4125_;
v_isShared_4230_ = v_isSharedCheck_4234_;
goto v_resetjp_4228_;
}
else
{
lean_inc(v_a_4227_);
lean_dec(v___x_4125_);
v___x_4229_ = lean_box(0);
v_isShared_4230_ = v_isSharedCheck_4234_;
goto v_resetjp_4228_;
}
v_resetjp_4228_:
{
lean_object* v___x_4232_; 
if (v_isShared_4230_ == 0)
{
v___x_4232_ = v___x_4229_;
goto v_reusejp_4231_;
}
else
{
lean_object* v_reuseFailAlloc_4233_; 
v_reuseFailAlloc_4233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4233_, 0, v_a_4227_);
v___x_4232_ = v_reuseFailAlloc_4233_;
goto v_reusejp_4231_;
}
v_reusejp_4231_:
{
return v___x_4232_;
}
}
}
}
else
{
lean_object* v___x_4235_; lean_object* v___x_4237_; 
lean_dec(v_a_4118_);
lean_dec_ref(v_e_4105_);
v___x_4235_ = lean_box(0);
if (v_isShared_4121_ == 0)
{
lean_ctor_set(v___x_4120_, 0, v___x_4235_);
v___x_4237_ = v___x_4120_;
goto v_reusejp_4236_;
}
else
{
lean_object* v_reuseFailAlloc_4238_; 
v_reuseFailAlloc_4238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4238_, 0, v___x_4235_);
v___x_4237_ = v_reuseFailAlloc_4238_;
goto v_reusejp_4236_;
}
v_reusejp_4236_:
{
return v___x_4237_;
}
}
}
}
else
{
lean_object* v_a_4240_; lean_object* v___x_4242_; uint8_t v_isShared_4243_; uint8_t v_isSharedCheck_4247_; 
lean_dec_ref(v_e_4105_);
v_a_4240_ = lean_ctor_get(v___x_4117_, 0);
v_isSharedCheck_4247_ = !lean_is_exclusive(v___x_4117_);
if (v_isSharedCheck_4247_ == 0)
{
v___x_4242_ = v___x_4117_;
v_isShared_4243_ = v_isSharedCheck_4247_;
goto v_resetjp_4241_;
}
else
{
lean_inc(v_a_4240_);
lean_dec(v___x_4117_);
v___x_4242_ = lean_box(0);
v_isShared_4243_ = v_isSharedCheck_4247_;
goto v_resetjp_4241_;
}
v_resetjp_4241_:
{
lean_object* v___x_4245_; 
if (v_isShared_4243_ == 0)
{
v___x_4245_ = v___x_4242_;
goto v_reusejp_4244_;
}
else
{
lean_object* v_reuseFailAlloc_4246_; 
v_reuseFailAlloc_4246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4246_, 0, v_a_4240_);
v___x_4245_ = v_reuseFailAlloc_4246_;
goto v_reusejp_4244_;
}
v_reusejp_4244_:
{
return v___x_4245_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecisionUp___boxed(lean_object* v_e_4248_, lean_object* v_a_4249_, lean_object* v_a_4250_, lean_object* v_a_4251_, lean_object* v_a_4252_, lean_object* v_a_4253_, lean_object* v_a_4254_, lean_object* v_a_4255_, lean_object* v_a_4256_, lean_object* v_a_4257_, lean_object* v_a_4258_, lean_object* v_a_4259_){
_start:
{
lean_object* v_res_4260_; 
v_res_4260_ = l_Lean_Meta_Grind_propagateDecisionUp(v_e_4248_, v_a_4249_, v_a_4250_, v_a_4251_, v_a_4252_, v_a_4253_, v_a_4254_, v_a_4255_, v_a_4256_, v_a_4257_, v_a_4258_);
lean_dec(v_a_4258_);
lean_dec_ref(v_a_4257_);
lean_dec(v_a_4256_);
lean_dec_ref(v_a_4255_);
lean_dec(v_a_4254_);
lean_dec_ref(v_a_4253_);
lean_dec(v_a_4252_);
lean_dec_ref(v_a_4251_);
lean_dec(v_a_4250_);
lean_dec(v_a_4249_);
return v_res_4260_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__3(void){
_start:
{
lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; 
v___x_4270_ = lean_box(0);
v___x_4271_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolAndUp___closed__2));
v___x_4272_ = l_Lean_mkConst(v___x_4271_, v___x_4270_);
return v___x_4272_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__5(void){
_start:
{
lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; 
v___x_4278_ = lean_box(0);
v___x_4279_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolAndUp___closed__4));
v___x_4280_ = l_Lean_mkConst(v___x_4279_, v___x_4278_);
return v___x_4280_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__7(void){
_start:
{
lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; 
v___x_4286_ = lean_box(0);
v___x_4287_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolAndUp___closed__6));
v___x_4288_ = l_Lean_mkConst(v___x_4287_, v___x_4286_);
return v___x_4288_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__9(void){
_start:
{
lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; 
v___x_4294_ = lean_box(0);
v___x_4295_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolAndUp___closed__8));
v___x_4296_ = l_Lean_mkConst(v___x_4295_, v___x_4294_);
return v___x_4296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndUp(lean_object* v_e_4297_, lean_object* v_a_4298_, lean_object* v_a_4299_, lean_object* v_a_4300_, lean_object* v_a_4301_, lean_object* v_a_4302_, lean_object* v_a_4303_, lean_object* v_a_4304_, lean_object* v_a_4305_, lean_object* v_a_4306_, lean_object* v_a_4307_){
_start:
{
lean_object* v___x_4312_; uint8_t v___x_4313_; 
v___x_4312_ = l_Lean_Expr_cleanupAnnotations(v_e_4297_);
v___x_4313_ = l_Lean_Expr_isApp(v___x_4312_);
if (v___x_4313_ == 0)
{
lean_dec_ref(v___x_4312_);
lean_dec_ref(v_e_4297_);
goto v___jp_4309_;
}
else
{
lean_object* v___x_4314_; uint8_t v___x_4315_; 
v___x_4314_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4312_);
v___x_4315_ = l_Lean_Expr_isApp(v___x_4314_);
if (v___x_4315_ == 0)
{
lean_dec_ref(v___x_4314_);
lean_dec_ref(v___x_4312_);
lean_dec_ref(v_e_4297_);
goto v___jp_4309_;
}
else
{
lean_object* v___x_4316_; lean_object* v___x_4317_; uint8_t v___x_4318_; 
v___x_4316_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4314_);
v___x_4317_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolAndUp___closed__1));
v___x_4318_ = l_Lean_Expr_isConstOf(v___x_4316_, v___x_4317_);
lean_dec_ref(v___x_4316_);
if (v___x_4318_ == 0)
{
lean_dec_ref(v___x_4314_);
lean_dec_ref(v___x_4312_);
lean_dec_ref(v_e_4297_);
goto v___jp_4309_;
}
else
{
lean_object* v_arg_4319_; lean_object* v_arg_4320_; lean_object* v___x_4321_; 
v_arg_4319_ = lean_ctor_get(v___x_4312_, 1);
lean_inc_ref(v_arg_4319_);
lean_dec_ref(v___x_4312_);
v_arg_4320_ = lean_ctor_get(v___x_4314_, 1);
lean_inc_ref_n(v_arg_4320_, 2);
lean_dec_ref(v___x_4314_);
v___x_4321_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_arg_4320_, v_a_4298_, v_a_4302_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_);
if (lean_obj_tag(v___x_4321_) == 0)
{
lean_object* v_a_4322_; uint8_t v___x_4323_; 
v_a_4322_ = lean_ctor_get(v___x_4321_, 0);
lean_inc(v_a_4322_);
lean_dec_ref_known(v___x_4321_, 1);
v___x_4323_ = lean_unbox(v_a_4322_);
if (v___x_4323_ == 0)
{
lean_object* v___x_4324_; 
lean_inc_ref(v_arg_4319_);
v___x_4324_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_arg_4319_, v_a_4298_, v_a_4302_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_);
if (lean_obj_tag(v___x_4324_) == 0)
{
lean_object* v_a_4325_; uint8_t v___x_4326_; 
v_a_4325_ = lean_ctor_get(v___x_4324_, 0);
lean_inc(v_a_4325_);
lean_dec_ref_known(v___x_4324_, 1);
v___x_4326_ = lean_unbox(v_a_4325_);
lean_dec(v_a_4325_);
if (v___x_4326_ == 0)
{
lean_object* v___x_4327_; 
lean_dec(v_a_4322_);
lean_inc_ref(v_arg_4320_);
v___x_4327_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_arg_4320_, v_a_4298_, v_a_4302_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_);
if (lean_obj_tag(v___x_4327_) == 0)
{
lean_object* v_a_4328_; uint8_t v___x_4329_; 
v_a_4328_ = lean_ctor_get(v___x_4327_, 0);
lean_inc(v_a_4328_);
lean_dec_ref_known(v___x_4327_, 1);
v___x_4329_ = lean_unbox(v_a_4328_);
lean_dec(v_a_4328_);
if (v___x_4329_ == 0)
{
lean_object* v___x_4330_; 
lean_inc_ref(v_arg_4319_);
v___x_4330_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_arg_4319_, v_a_4298_, v_a_4302_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_);
if (lean_obj_tag(v___x_4330_) == 0)
{
lean_object* v_a_4331_; lean_object* v___x_4333_; uint8_t v_isShared_4334_; uint8_t v_isSharedCheck_4353_; 
v_a_4331_ = lean_ctor_get(v___x_4330_, 0);
v_isSharedCheck_4353_ = !lean_is_exclusive(v___x_4330_);
if (v_isSharedCheck_4353_ == 0)
{
v___x_4333_ = v___x_4330_;
v_isShared_4334_ = v_isSharedCheck_4353_;
goto v_resetjp_4332_;
}
else
{
lean_inc(v_a_4331_);
lean_dec(v___x_4330_);
v___x_4333_ = lean_box(0);
v_isShared_4334_ = v_isSharedCheck_4353_;
goto v_resetjp_4332_;
}
v_resetjp_4332_:
{
uint8_t v___x_4335_; 
v___x_4335_ = lean_unbox(v_a_4331_);
lean_dec(v_a_4331_);
if (v___x_4335_ == 0)
{
lean_object* v___x_4336_; lean_object* v___x_4338_; 
lean_dec_ref(v_arg_4320_);
lean_dec_ref(v_arg_4319_);
lean_dec_ref(v_e_4297_);
v___x_4336_ = lean_box(0);
if (v_isShared_4334_ == 0)
{
lean_ctor_set(v___x_4333_, 0, v___x_4336_);
v___x_4338_ = v___x_4333_;
goto v_reusejp_4337_;
}
else
{
lean_object* v_reuseFailAlloc_4339_; 
v_reuseFailAlloc_4339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4339_, 0, v___x_4336_);
v___x_4338_ = v_reuseFailAlloc_4339_;
goto v_reusejp_4337_;
}
v_reusejp_4337_:
{
return v___x_4338_;
}
}
else
{
lean_object* v___x_4340_; 
lean_del_object(v___x_4333_);
lean_inc_ref(v_arg_4319_);
v___x_4340_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_arg_4319_, v_a_4298_, v_a_4299_, v_a_4300_, v_a_4301_, v_a_4302_, v_a_4303_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_);
if (lean_obj_tag(v___x_4340_) == 0)
{
lean_object* v_a_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; 
v_a_4341_ = lean_ctor_get(v___x_4340_, 0);
lean_inc(v_a_4341_);
lean_dec_ref_known(v___x_4340_, 1);
v___x_4342_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__3, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__3);
v___x_4343_ = l_Lean_mkApp3(v___x_4342_, v_arg_4320_, v_arg_4319_, v_a_4341_);
v___x_4344_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_e_4297_, v___x_4343_, v_a_4298_, v_a_4300_, v_a_4302_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_);
return v___x_4344_;
}
else
{
lean_object* v_a_4345_; lean_object* v___x_4347_; uint8_t v_isShared_4348_; uint8_t v_isSharedCheck_4352_; 
lean_dec_ref(v_arg_4320_);
lean_dec_ref(v_arg_4319_);
lean_dec_ref(v_e_4297_);
v_a_4345_ = lean_ctor_get(v___x_4340_, 0);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4340_);
if (v_isSharedCheck_4352_ == 0)
{
v___x_4347_ = v___x_4340_;
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
else
{
lean_inc(v_a_4345_);
lean_dec(v___x_4340_);
v___x_4347_ = lean_box(0);
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
v_resetjp_4346_:
{
lean_object* v___x_4350_; 
if (v_isShared_4348_ == 0)
{
v___x_4350_ = v___x_4347_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v_a_4345_);
v___x_4350_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
return v___x_4350_;
}
}
}
}
}
}
else
{
lean_object* v_a_4354_; lean_object* v___x_4356_; uint8_t v_isShared_4357_; uint8_t v_isSharedCheck_4361_; 
lean_dec_ref(v_arg_4320_);
lean_dec_ref(v_arg_4319_);
lean_dec_ref(v_e_4297_);
v_a_4354_ = lean_ctor_get(v___x_4330_, 0);
v_isSharedCheck_4361_ = !lean_is_exclusive(v___x_4330_);
if (v_isSharedCheck_4361_ == 0)
{
v___x_4356_ = v___x_4330_;
v_isShared_4357_ = v_isSharedCheck_4361_;
goto v_resetjp_4355_;
}
else
{
lean_inc(v_a_4354_);
lean_dec(v___x_4330_);
v___x_4356_ = lean_box(0);
v_isShared_4357_ = v_isSharedCheck_4361_;
goto v_resetjp_4355_;
}
v_resetjp_4355_:
{
lean_object* v___x_4359_; 
if (v_isShared_4357_ == 0)
{
v___x_4359_ = v___x_4356_;
goto v_reusejp_4358_;
}
else
{
lean_object* v_reuseFailAlloc_4360_; 
v_reuseFailAlloc_4360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4360_, 0, v_a_4354_);
v___x_4359_ = v_reuseFailAlloc_4360_;
goto v_reusejp_4358_;
}
v_reusejp_4358_:
{
return v___x_4359_;
}
}
}
}
else
{
lean_object* v___x_4362_; 
lean_inc_ref(v_arg_4320_);
v___x_4362_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_arg_4320_, v_a_4298_, v_a_4299_, v_a_4300_, v_a_4301_, v_a_4302_, v_a_4303_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_);
if (lean_obj_tag(v___x_4362_) == 0)
{
lean_object* v_a_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; 
v_a_4363_ = lean_ctor_get(v___x_4362_, 0);
lean_inc(v_a_4363_);
lean_dec_ref_known(v___x_4362_, 1);
v___x_4364_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__5, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__5_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__5);
v___x_4365_ = l_Lean_mkApp3(v___x_4364_, v_arg_4320_, v_arg_4319_, v_a_4363_);
v___x_4366_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_e_4297_, v___x_4365_, v_a_4298_, v_a_4300_, v_a_4302_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_);
return v___x_4366_;
}
else
{
lean_object* v_a_4367_; lean_object* v___x_4369_; uint8_t v_isShared_4370_; uint8_t v_isSharedCheck_4374_; 
lean_dec_ref(v_arg_4320_);
lean_dec_ref(v_arg_4319_);
lean_dec_ref(v_e_4297_);
v_a_4367_ = lean_ctor_get(v___x_4362_, 0);
v_isSharedCheck_4374_ = !lean_is_exclusive(v___x_4362_);
if (v_isSharedCheck_4374_ == 0)
{
v___x_4369_ = v___x_4362_;
v_isShared_4370_ = v_isSharedCheck_4374_;
goto v_resetjp_4368_;
}
else
{
lean_inc(v_a_4367_);
lean_dec(v___x_4362_);
v___x_4369_ = lean_box(0);
v_isShared_4370_ = v_isSharedCheck_4374_;
goto v_resetjp_4368_;
}
v_resetjp_4368_:
{
lean_object* v___x_4372_; 
if (v_isShared_4370_ == 0)
{
v___x_4372_ = v___x_4369_;
goto v_reusejp_4371_;
}
else
{
lean_object* v_reuseFailAlloc_4373_; 
v_reuseFailAlloc_4373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4373_, 0, v_a_4367_);
v___x_4372_ = v_reuseFailAlloc_4373_;
goto v_reusejp_4371_;
}
v_reusejp_4371_:
{
return v___x_4372_;
}
}
}
}
}
else
{
lean_object* v_a_4375_; lean_object* v___x_4377_; uint8_t v_isShared_4378_; uint8_t v_isSharedCheck_4382_; 
lean_dec_ref(v_arg_4320_);
lean_dec_ref(v_arg_4319_);
lean_dec_ref(v_e_4297_);
v_a_4375_ = lean_ctor_get(v___x_4327_, 0);
v_isSharedCheck_4382_ = !lean_is_exclusive(v___x_4327_);
if (v_isSharedCheck_4382_ == 0)
{
v___x_4377_ = v___x_4327_;
v_isShared_4378_ = v_isSharedCheck_4382_;
goto v_resetjp_4376_;
}
else
{
lean_inc(v_a_4375_);
lean_dec(v___x_4327_);
v___x_4377_ = lean_box(0);
v_isShared_4378_ = v_isSharedCheck_4382_;
goto v_resetjp_4376_;
}
v_resetjp_4376_:
{
lean_object* v___x_4380_; 
if (v_isShared_4378_ == 0)
{
v___x_4380_ = v___x_4377_;
goto v_reusejp_4379_;
}
else
{
lean_object* v_reuseFailAlloc_4381_; 
v_reuseFailAlloc_4381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4381_, 0, v_a_4375_);
v___x_4380_ = v_reuseFailAlloc_4381_;
goto v_reusejp_4379_;
}
v_reusejp_4379_:
{
return v___x_4380_;
}
}
}
}
else
{
lean_object* v___x_4383_; 
lean_inc_ref(v_arg_4319_);
v___x_4383_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_arg_4319_, v_a_4298_, v_a_4299_, v_a_4300_, v_a_4301_, v_a_4302_, v_a_4303_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_);
if (lean_obj_tag(v___x_4383_) == 0)
{
lean_object* v_a_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; uint8_t v___x_4387_; lean_object* v___x_4388_; 
v_a_4384_ = lean_ctor_get(v___x_4383_, 0);
lean_inc(v_a_4384_);
lean_dec_ref_known(v___x_4383_, 1);
v___x_4385_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__7, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__7_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__7);
lean_inc_ref(v_arg_4320_);
v___x_4386_ = l_Lean_mkApp3(v___x_4385_, v_arg_4320_, v_arg_4319_, v_a_4384_);
v___x_4387_ = lean_unbox(v_a_4322_);
lean_dec(v_a_4322_);
v___x_4388_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_4297_, v_arg_4320_, v___x_4386_, v___x_4387_, v_a_4298_, v_a_4300_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_);
return v___x_4388_;
}
else
{
lean_object* v_a_4389_; lean_object* v___x_4391_; uint8_t v_isShared_4392_; uint8_t v_isSharedCheck_4396_; 
lean_dec(v_a_4322_);
lean_dec_ref(v_arg_4320_);
lean_dec_ref(v_arg_4319_);
lean_dec_ref(v_e_4297_);
v_a_4389_ = lean_ctor_get(v___x_4383_, 0);
v_isSharedCheck_4396_ = !lean_is_exclusive(v___x_4383_);
if (v_isSharedCheck_4396_ == 0)
{
v___x_4391_ = v___x_4383_;
v_isShared_4392_ = v_isSharedCheck_4396_;
goto v_resetjp_4390_;
}
else
{
lean_inc(v_a_4389_);
lean_dec(v___x_4383_);
v___x_4391_ = lean_box(0);
v_isShared_4392_ = v_isSharedCheck_4396_;
goto v_resetjp_4390_;
}
v_resetjp_4390_:
{
lean_object* v___x_4394_; 
if (v_isShared_4392_ == 0)
{
v___x_4394_ = v___x_4391_;
goto v_reusejp_4393_;
}
else
{
lean_object* v_reuseFailAlloc_4395_; 
v_reuseFailAlloc_4395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4395_, 0, v_a_4389_);
v___x_4394_ = v_reuseFailAlloc_4395_;
goto v_reusejp_4393_;
}
v_reusejp_4393_:
{
return v___x_4394_;
}
}
}
}
}
else
{
lean_object* v_a_4397_; lean_object* v___x_4399_; uint8_t v_isShared_4400_; uint8_t v_isSharedCheck_4404_; 
lean_dec(v_a_4322_);
lean_dec_ref(v_arg_4320_);
lean_dec_ref(v_arg_4319_);
lean_dec_ref(v_e_4297_);
v_a_4397_ = lean_ctor_get(v___x_4324_, 0);
v_isSharedCheck_4404_ = !lean_is_exclusive(v___x_4324_);
if (v_isSharedCheck_4404_ == 0)
{
v___x_4399_ = v___x_4324_;
v_isShared_4400_ = v_isSharedCheck_4404_;
goto v_resetjp_4398_;
}
else
{
lean_inc(v_a_4397_);
lean_dec(v___x_4324_);
v___x_4399_ = lean_box(0);
v_isShared_4400_ = v_isSharedCheck_4404_;
goto v_resetjp_4398_;
}
v_resetjp_4398_:
{
lean_object* v___x_4402_; 
if (v_isShared_4400_ == 0)
{
v___x_4402_ = v___x_4399_;
goto v_reusejp_4401_;
}
else
{
lean_object* v_reuseFailAlloc_4403_; 
v_reuseFailAlloc_4403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4403_, 0, v_a_4397_);
v___x_4402_ = v_reuseFailAlloc_4403_;
goto v_reusejp_4401_;
}
v_reusejp_4401_:
{
return v___x_4402_;
}
}
}
}
else
{
lean_object* v___x_4405_; 
lean_dec(v_a_4322_);
lean_inc_ref(v_arg_4320_);
v___x_4405_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_arg_4320_, v_a_4298_, v_a_4299_, v_a_4300_, v_a_4301_, v_a_4302_, v_a_4303_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_);
if (lean_obj_tag(v___x_4405_) == 0)
{
lean_object* v_a_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; uint8_t v___x_4409_; lean_object* v___x_4410_; 
v_a_4406_ = lean_ctor_get(v___x_4405_, 0);
lean_inc(v_a_4406_);
lean_dec_ref_known(v___x_4405_, 1);
v___x_4407_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__9, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__9_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__9);
lean_inc_ref(v_arg_4319_);
v___x_4408_ = l_Lean_mkApp3(v___x_4407_, v_arg_4320_, v_arg_4319_, v_a_4406_);
v___x_4409_ = 0;
v___x_4410_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_4297_, v_arg_4319_, v___x_4408_, v___x_4409_, v_a_4298_, v_a_4300_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_);
return v___x_4410_;
}
else
{
lean_object* v_a_4411_; lean_object* v___x_4413_; uint8_t v_isShared_4414_; uint8_t v_isSharedCheck_4418_; 
lean_dec_ref(v_arg_4320_);
lean_dec_ref(v_arg_4319_);
lean_dec_ref(v_e_4297_);
v_a_4411_ = lean_ctor_get(v___x_4405_, 0);
v_isSharedCheck_4418_ = !lean_is_exclusive(v___x_4405_);
if (v_isSharedCheck_4418_ == 0)
{
v___x_4413_ = v___x_4405_;
v_isShared_4414_ = v_isSharedCheck_4418_;
goto v_resetjp_4412_;
}
else
{
lean_inc(v_a_4411_);
lean_dec(v___x_4405_);
v___x_4413_ = lean_box(0);
v_isShared_4414_ = v_isSharedCheck_4418_;
goto v_resetjp_4412_;
}
v_resetjp_4412_:
{
lean_object* v___x_4416_; 
if (v_isShared_4414_ == 0)
{
v___x_4416_ = v___x_4413_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4417_; 
v_reuseFailAlloc_4417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4417_, 0, v_a_4411_);
v___x_4416_ = v_reuseFailAlloc_4417_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
return v___x_4416_;
}
}
}
}
}
else
{
lean_object* v_a_4419_; lean_object* v___x_4421_; uint8_t v_isShared_4422_; uint8_t v_isSharedCheck_4426_; 
lean_dec_ref(v_arg_4320_);
lean_dec_ref(v_arg_4319_);
lean_dec_ref(v_e_4297_);
v_a_4419_ = lean_ctor_get(v___x_4321_, 0);
v_isSharedCheck_4426_ = !lean_is_exclusive(v___x_4321_);
if (v_isSharedCheck_4426_ == 0)
{
v___x_4421_ = v___x_4321_;
v_isShared_4422_ = v_isSharedCheck_4426_;
goto v_resetjp_4420_;
}
else
{
lean_inc(v_a_4419_);
lean_dec(v___x_4321_);
v___x_4421_ = lean_box(0);
v_isShared_4422_ = v_isSharedCheck_4426_;
goto v_resetjp_4420_;
}
v_resetjp_4420_:
{
lean_object* v___x_4424_; 
if (v_isShared_4422_ == 0)
{
v___x_4424_ = v___x_4421_;
goto v_reusejp_4423_;
}
else
{
lean_object* v_reuseFailAlloc_4425_; 
v_reuseFailAlloc_4425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4425_, 0, v_a_4419_);
v___x_4424_ = v_reuseFailAlloc_4425_;
goto v_reusejp_4423_;
}
v_reusejp_4423_:
{
return v___x_4424_;
}
}
}
}
}
}
v___jp_4309_:
{
lean_object* v___x_4310_; lean_object* v___x_4311_; 
v___x_4310_ = lean_box(0);
v___x_4311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4311_, 0, v___x_4310_);
return v___x_4311_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___boxed(lean_object* v_e_4427_, lean_object* v_a_4428_, lean_object* v_a_4429_, lean_object* v_a_4430_, lean_object* v_a_4431_, lean_object* v_a_4432_, lean_object* v_a_4433_, lean_object* v_a_4434_, lean_object* v_a_4435_, lean_object* v_a_4436_, lean_object* v_a_4437_, lean_object* v_a_4438_){
_start:
{
lean_object* v_res_4439_; 
v_res_4439_ = l_Lean_Meta_Grind_propagateBoolAndUp(v_e_4427_, v_a_4428_, v_a_4429_, v_a_4430_, v_a_4431_, v_a_4432_, v_a_4433_, v_a_4434_, v_a_4435_, v_a_4436_, v_a_4437_);
lean_dec(v_a_4437_);
lean_dec_ref(v_a_4436_);
lean_dec(v_a_4435_);
lean_dec_ref(v_a_4434_);
lean_dec(v_a_4433_);
lean_dec_ref(v_a_4432_);
lean_dec(v_a_4431_);
lean_dec_ref(v_a_4430_);
lean_dec(v_a_4429_);
lean_dec(v_a_4428_);
return v_res_4439_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndUp___regBuiltin_Lean_Meta_Grind_propagateBoolAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3683843215____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; 
v___x_4441_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolAndUp___closed__1));
v___x_4442_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBoolAndUp___boxed), 12, 0);
v___x_4443_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_4441_, v___x_4442_);
return v___x_4443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndUp___regBuiltin_Lean_Meta_Grind_propagateBoolAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3683843215____hygCtx___hyg_9____boxed(lean_object* v_a_4444_){
_start:
{
lean_object* v_res_4445_; 
v_res_4445_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndUp___regBuiltin_Lean_Meta_Grind_propagateBoolAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3683843215____hygCtx___hyg_9_();
return v_res_4445_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndDown___closed__1(void){
_start:
{
lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; 
v___x_4451_ = lean_box(0);
v___x_4452_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolAndDown___closed__0));
v___x_4453_ = l_Lean_mkConst(v___x_4452_, v___x_4451_);
return v___x_4453_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndDown___closed__3(void){
_start:
{
lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; 
v___x_4459_ = lean_box(0);
v___x_4460_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolAndDown___closed__2));
v___x_4461_ = l_Lean_mkConst(v___x_4460_, v___x_4459_);
return v___x_4461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndDown(lean_object* v_e_4462_, lean_object* v_a_4463_, lean_object* v_a_4464_, lean_object* v_a_4465_, lean_object* v_a_4466_, lean_object* v_a_4467_, lean_object* v_a_4468_, lean_object* v_a_4469_, lean_object* v_a_4470_, lean_object* v_a_4471_, lean_object* v_a_4472_){
_start:
{
lean_object* v___x_4477_; 
lean_inc_ref(v_e_4462_);
v___x_4477_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_e_4462_, v_a_4463_, v_a_4467_, v_a_4469_, v_a_4470_, v_a_4471_, v_a_4472_);
if (lean_obj_tag(v___x_4477_) == 0)
{
lean_object* v_a_4478_; lean_object* v___x_4480_; uint8_t v_isShared_4481_; uint8_t v_isSharedCheck_4512_; 
v_a_4478_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4512_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4512_ == 0)
{
v___x_4480_ = v___x_4477_;
v_isShared_4481_ = v_isSharedCheck_4512_;
goto v_resetjp_4479_;
}
else
{
lean_inc(v_a_4478_);
lean_dec(v___x_4477_);
v___x_4480_ = lean_box(0);
v_isShared_4481_ = v_isSharedCheck_4512_;
goto v_resetjp_4479_;
}
v_resetjp_4479_:
{
uint8_t v___x_4482_; 
v___x_4482_ = lean_unbox(v_a_4478_);
lean_dec(v_a_4478_);
if (v___x_4482_ == 0)
{
lean_object* v___x_4483_; lean_object* v___x_4485_; 
lean_dec_ref(v_e_4462_);
v___x_4483_ = lean_box(0);
if (v_isShared_4481_ == 0)
{
lean_ctor_set(v___x_4480_, 0, v___x_4483_);
v___x_4485_ = v___x_4480_;
goto v_reusejp_4484_;
}
else
{
lean_object* v_reuseFailAlloc_4486_; 
v_reuseFailAlloc_4486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4486_, 0, v___x_4483_);
v___x_4485_ = v_reuseFailAlloc_4486_;
goto v_reusejp_4484_;
}
v_reusejp_4484_:
{
return v___x_4485_;
}
}
else
{
lean_object* v___x_4487_; uint8_t v___x_4488_; 
lean_del_object(v___x_4480_);
v___x_4487_ = l_Lean_Expr_cleanupAnnotations(v_e_4462_);
v___x_4488_ = l_Lean_Expr_isApp(v___x_4487_);
if (v___x_4488_ == 0)
{
lean_dec_ref(v___x_4487_);
lean_dec_ref(v_e_4462_);
goto v___jp_4474_;
}
else
{
lean_object* v___x_4489_; uint8_t v___x_4490_; 
v___x_4489_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4487_);
v___x_4490_ = l_Lean_Expr_isApp(v___x_4489_);
if (v___x_4490_ == 0)
{
lean_dec_ref(v___x_4489_);
lean_dec_ref(v___x_4487_);
lean_dec_ref(v_e_4462_);
goto v___jp_4474_;
}
else
{
lean_object* v___x_4491_; lean_object* v___x_4492_; uint8_t v___x_4493_; 
v___x_4491_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4489_);
v___x_4492_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolAndUp___closed__1));
v___x_4493_ = l_Lean_Expr_isConstOf(v___x_4491_, v___x_4492_);
lean_dec_ref(v___x_4491_);
if (v___x_4493_ == 0)
{
lean_dec_ref(v___x_4489_);
lean_dec_ref(v___x_4487_);
lean_dec_ref(v_e_4462_);
goto v___jp_4474_;
}
else
{
lean_object* v_arg_4494_; lean_object* v_arg_4495_; lean_object* v___x_4496_; 
v_arg_4494_ = lean_ctor_get(v___x_4487_, 1);
lean_inc_ref(v_arg_4494_);
lean_dec_ref(v___x_4487_);
v_arg_4495_ = lean_ctor_get(v___x_4489_, 1);
lean_inc_ref(v_arg_4495_);
lean_dec_ref(v___x_4489_);
v___x_4496_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_e_4462_, v_a_4463_, v_a_4464_, v_a_4465_, v_a_4466_, v_a_4467_, v_a_4468_, v_a_4469_, v_a_4470_, v_a_4471_, v_a_4472_);
if (lean_obj_tag(v___x_4496_) == 0)
{
lean_object* v_a_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; 
v_a_4497_ = lean_ctor_get(v___x_4496_, 0);
lean_inc_n(v_a_4497_, 2);
lean_dec_ref_known(v___x_4496_, 1);
v___x_4498_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndDown___closed__1, &l_Lean_Meta_Grind_propagateBoolAndDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolAndDown___closed__1);
lean_inc_ref(v_arg_4494_);
lean_inc_ref_n(v_arg_4495_, 2);
v___x_4499_ = l_Lean_mkApp3(v___x_4498_, v_arg_4495_, v_arg_4494_, v_a_4497_);
v___x_4500_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_arg_4495_, v___x_4499_, v_a_4463_, v_a_4465_, v_a_4467_, v_a_4469_, v_a_4470_, v_a_4471_, v_a_4472_);
if (lean_obj_tag(v___x_4500_) == 0)
{
lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; 
lean_dec_ref_known(v___x_4500_, 1);
v___x_4501_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndDown___closed__3, &l_Lean_Meta_Grind_propagateBoolAndDown___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolAndDown___closed__3);
lean_inc_ref(v_arg_4494_);
v___x_4502_ = l_Lean_mkApp3(v___x_4501_, v_arg_4495_, v_arg_4494_, v_a_4497_);
v___x_4503_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_arg_4494_, v___x_4502_, v_a_4463_, v_a_4465_, v_a_4467_, v_a_4469_, v_a_4470_, v_a_4471_, v_a_4472_);
return v___x_4503_;
}
else
{
lean_dec(v_a_4497_);
lean_dec_ref(v_arg_4495_);
lean_dec_ref(v_arg_4494_);
return v___x_4500_;
}
}
else
{
lean_object* v_a_4504_; lean_object* v___x_4506_; uint8_t v_isShared_4507_; uint8_t v_isSharedCheck_4511_; 
lean_dec_ref(v_arg_4495_);
lean_dec_ref(v_arg_4494_);
v_a_4504_ = lean_ctor_get(v___x_4496_, 0);
v_isSharedCheck_4511_ = !lean_is_exclusive(v___x_4496_);
if (v_isSharedCheck_4511_ == 0)
{
v___x_4506_ = v___x_4496_;
v_isShared_4507_ = v_isSharedCheck_4511_;
goto v_resetjp_4505_;
}
else
{
lean_inc(v_a_4504_);
lean_dec(v___x_4496_);
v___x_4506_ = lean_box(0);
v_isShared_4507_ = v_isSharedCheck_4511_;
goto v_resetjp_4505_;
}
v_resetjp_4505_:
{
lean_object* v___x_4509_; 
if (v_isShared_4507_ == 0)
{
v___x_4509_ = v___x_4506_;
goto v_reusejp_4508_;
}
else
{
lean_object* v_reuseFailAlloc_4510_; 
v_reuseFailAlloc_4510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4510_, 0, v_a_4504_);
v___x_4509_ = v_reuseFailAlloc_4510_;
goto v_reusejp_4508_;
}
v_reusejp_4508_:
{
return v___x_4509_;
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
lean_object* v_a_4513_; lean_object* v___x_4515_; uint8_t v_isShared_4516_; uint8_t v_isSharedCheck_4520_; 
lean_dec_ref(v_e_4462_);
v_a_4513_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4520_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4520_ == 0)
{
v___x_4515_ = v___x_4477_;
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
else
{
lean_inc(v_a_4513_);
lean_dec(v___x_4477_);
v___x_4515_ = lean_box(0);
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
v_resetjp_4514_:
{
lean_object* v___x_4518_; 
if (v_isShared_4516_ == 0)
{
v___x_4518_ = v___x_4515_;
goto v_reusejp_4517_;
}
else
{
lean_object* v_reuseFailAlloc_4519_; 
v_reuseFailAlloc_4519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4519_, 0, v_a_4513_);
v___x_4518_ = v_reuseFailAlloc_4519_;
goto v_reusejp_4517_;
}
v_reusejp_4517_:
{
return v___x_4518_;
}
}
}
v___jp_4474_:
{
lean_object* v___x_4475_; lean_object* v___x_4476_; 
v___x_4475_ = lean_box(0);
v___x_4476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4476_, 0, v___x_4475_);
return v___x_4476_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndDown___boxed(lean_object* v_e_4521_, lean_object* v_a_4522_, lean_object* v_a_4523_, lean_object* v_a_4524_, lean_object* v_a_4525_, lean_object* v_a_4526_, lean_object* v_a_4527_, lean_object* v_a_4528_, lean_object* v_a_4529_, lean_object* v_a_4530_, lean_object* v_a_4531_, lean_object* v_a_4532_){
_start:
{
lean_object* v_res_4533_; 
v_res_4533_ = l_Lean_Meta_Grind_propagateBoolAndDown(v_e_4521_, v_a_4522_, v_a_4523_, v_a_4524_, v_a_4525_, v_a_4526_, v_a_4527_, v_a_4528_, v_a_4529_, v_a_4530_, v_a_4531_);
lean_dec(v_a_4531_);
lean_dec_ref(v_a_4530_);
lean_dec(v_a_4529_);
lean_dec_ref(v_a_4528_);
lean_dec(v_a_4527_);
lean_dec_ref(v_a_4526_);
lean_dec(v_a_4525_);
lean_dec_ref(v_a_4524_);
lean_dec(v_a_4523_);
lean_dec(v_a_4522_);
return v_res_4533_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndDown___regBuiltin_Lean_Meta_Grind_propagateBoolAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2508836509____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; 
v___x_4535_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolAndUp___closed__1));
v___x_4536_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBoolAndDown___boxed), 12, 0);
v___x_4537_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_4535_, v___x_4536_);
return v___x_4537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndDown___regBuiltin_Lean_Meta_Grind_propagateBoolAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2508836509____hygCtx___hyg_9____boxed(lean_object* v_a_4538_){
_start:
{
lean_object* v_res_4539_; 
v_res_4539_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndDown___regBuiltin_Lean_Meta_Grind_propagateBoolAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2508836509____hygCtx___hyg_9_();
return v_res_4539_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__3(void){
_start:
{
lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; 
v___x_4549_ = lean_box(0);
v___x_4550_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolOrUp___closed__2));
v___x_4551_ = l_Lean_mkConst(v___x_4550_, v___x_4549_);
return v___x_4551_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__5(void){
_start:
{
lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; 
v___x_4557_ = lean_box(0);
v___x_4558_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolOrUp___closed__4));
v___x_4559_ = l_Lean_mkConst(v___x_4558_, v___x_4557_);
return v___x_4559_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__7(void){
_start:
{
lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; 
v___x_4565_ = lean_box(0);
v___x_4566_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolOrUp___closed__6));
v___x_4567_ = l_Lean_mkConst(v___x_4566_, v___x_4565_);
return v___x_4567_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__9(void){
_start:
{
lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; 
v___x_4573_ = lean_box(0);
v___x_4574_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolOrUp___closed__8));
v___x_4575_ = l_Lean_mkConst(v___x_4574_, v___x_4573_);
return v___x_4575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrUp(lean_object* v_e_4576_, lean_object* v_a_4577_, lean_object* v_a_4578_, lean_object* v_a_4579_, lean_object* v_a_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_, lean_object* v_a_4584_, lean_object* v_a_4585_, lean_object* v_a_4586_){
_start:
{
lean_object* v___x_4591_; uint8_t v___x_4592_; 
v___x_4591_ = l_Lean_Expr_cleanupAnnotations(v_e_4576_);
v___x_4592_ = l_Lean_Expr_isApp(v___x_4591_);
if (v___x_4592_ == 0)
{
lean_dec_ref(v___x_4591_);
lean_dec_ref(v_e_4576_);
goto v___jp_4588_;
}
else
{
lean_object* v___x_4593_; uint8_t v___x_4594_; 
v___x_4593_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4591_);
v___x_4594_ = l_Lean_Expr_isApp(v___x_4593_);
if (v___x_4594_ == 0)
{
lean_dec_ref(v___x_4593_);
lean_dec_ref(v___x_4591_);
lean_dec_ref(v_e_4576_);
goto v___jp_4588_;
}
else
{
lean_object* v___x_4595_; lean_object* v___x_4596_; uint8_t v___x_4597_; 
v___x_4595_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4593_);
v___x_4596_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolOrUp___closed__1));
v___x_4597_ = l_Lean_Expr_isConstOf(v___x_4595_, v___x_4596_);
lean_dec_ref(v___x_4595_);
if (v___x_4597_ == 0)
{
lean_dec_ref(v___x_4593_);
lean_dec_ref(v___x_4591_);
lean_dec_ref(v_e_4576_);
goto v___jp_4588_;
}
else
{
lean_object* v_arg_4598_; lean_object* v_arg_4599_; lean_object* v___x_4600_; 
v_arg_4598_ = lean_ctor_get(v___x_4591_, 1);
lean_inc_ref(v_arg_4598_);
lean_dec_ref(v___x_4591_);
v_arg_4599_ = lean_ctor_get(v___x_4593_, 1);
lean_inc_ref_n(v_arg_4599_, 2);
lean_dec_ref(v___x_4593_);
v___x_4600_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_arg_4599_, v_a_4577_, v_a_4581_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_);
if (lean_obj_tag(v___x_4600_) == 0)
{
lean_object* v_a_4601_; uint8_t v___x_4602_; 
v_a_4601_ = lean_ctor_get(v___x_4600_, 0);
lean_inc(v_a_4601_);
lean_dec_ref_known(v___x_4600_, 1);
v___x_4602_ = lean_unbox(v_a_4601_);
if (v___x_4602_ == 0)
{
lean_object* v___x_4603_; 
lean_inc_ref(v_arg_4598_);
v___x_4603_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_arg_4598_, v_a_4577_, v_a_4581_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_);
if (lean_obj_tag(v___x_4603_) == 0)
{
lean_object* v_a_4604_; uint8_t v___x_4605_; 
v_a_4604_ = lean_ctor_get(v___x_4603_, 0);
lean_inc(v_a_4604_);
lean_dec_ref_known(v___x_4603_, 1);
v___x_4605_ = lean_unbox(v_a_4604_);
lean_dec(v_a_4604_);
if (v___x_4605_ == 0)
{
lean_object* v___x_4606_; 
lean_dec(v_a_4601_);
lean_inc_ref(v_arg_4599_);
v___x_4606_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_arg_4599_, v_a_4577_, v_a_4581_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_);
if (lean_obj_tag(v___x_4606_) == 0)
{
lean_object* v_a_4607_; uint8_t v___x_4608_; 
v_a_4607_ = lean_ctor_get(v___x_4606_, 0);
lean_inc(v_a_4607_);
lean_dec_ref_known(v___x_4606_, 1);
v___x_4608_ = lean_unbox(v_a_4607_);
lean_dec(v_a_4607_);
if (v___x_4608_ == 0)
{
lean_object* v___x_4609_; 
lean_inc_ref(v_arg_4598_);
v___x_4609_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_arg_4598_, v_a_4577_, v_a_4581_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_);
if (lean_obj_tag(v___x_4609_) == 0)
{
lean_object* v_a_4610_; lean_object* v___x_4612_; uint8_t v_isShared_4613_; uint8_t v_isSharedCheck_4632_; 
v_a_4610_ = lean_ctor_get(v___x_4609_, 0);
v_isSharedCheck_4632_ = !lean_is_exclusive(v___x_4609_);
if (v_isSharedCheck_4632_ == 0)
{
v___x_4612_ = v___x_4609_;
v_isShared_4613_ = v_isSharedCheck_4632_;
goto v_resetjp_4611_;
}
else
{
lean_inc(v_a_4610_);
lean_dec(v___x_4609_);
v___x_4612_ = lean_box(0);
v_isShared_4613_ = v_isSharedCheck_4632_;
goto v_resetjp_4611_;
}
v_resetjp_4611_:
{
uint8_t v___x_4614_; 
v___x_4614_ = lean_unbox(v_a_4610_);
lean_dec(v_a_4610_);
if (v___x_4614_ == 0)
{
lean_object* v___x_4615_; lean_object* v___x_4617_; 
lean_dec_ref(v_arg_4599_);
lean_dec_ref(v_arg_4598_);
lean_dec_ref(v_e_4576_);
v___x_4615_ = lean_box(0);
if (v_isShared_4613_ == 0)
{
lean_ctor_set(v___x_4612_, 0, v___x_4615_);
v___x_4617_ = v___x_4612_;
goto v_reusejp_4616_;
}
else
{
lean_object* v_reuseFailAlloc_4618_; 
v_reuseFailAlloc_4618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4618_, 0, v___x_4615_);
v___x_4617_ = v_reuseFailAlloc_4618_;
goto v_reusejp_4616_;
}
v_reusejp_4616_:
{
return v___x_4617_;
}
}
else
{
lean_object* v___x_4619_; 
lean_del_object(v___x_4612_);
lean_inc_ref(v_arg_4598_);
v___x_4619_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_arg_4598_, v_a_4577_, v_a_4578_, v_a_4579_, v_a_4580_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_);
if (lean_obj_tag(v___x_4619_) == 0)
{
lean_object* v_a_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; 
v_a_4620_ = lean_ctor_get(v___x_4619_, 0);
lean_inc(v_a_4620_);
lean_dec_ref_known(v___x_4619_, 1);
v___x_4621_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__3, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__3);
v___x_4622_ = l_Lean_mkApp3(v___x_4621_, v_arg_4599_, v_arg_4598_, v_a_4620_);
v___x_4623_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_e_4576_, v___x_4622_, v_a_4577_, v_a_4579_, v_a_4581_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_);
return v___x_4623_;
}
else
{
lean_object* v_a_4624_; lean_object* v___x_4626_; uint8_t v_isShared_4627_; uint8_t v_isSharedCheck_4631_; 
lean_dec_ref(v_arg_4599_);
lean_dec_ref(v_arg_4598_);
lean_dec_ref(v_e_4576_);
v_a_4624_ = lean_ctor_get(v___x_4619_, 0);
v_isSharedCheck_4631_ = !lean_is_exclusive(v___x_4619_);
if (v_isSharedCheck_4631_ == 0)
{
v___x_4626_ = v___x_4619_;
v_isShared_4627_ = v_isSharedCheck_4631_;
goto v_resetjp_4625_;
}
else
{
lean_inc(v_a_4624_);
lean_dec(v___x_4619_);
v___x_4626_ = lean_box(0);
v_isShared_4627_ = v_isSharedCheck_4631_;
goto v_resetjp_4625_;
}
v_resetjp_4625_:
{
lean_object* v___x_4629_; 
if (v_isShared_4627_ == 0)
{
v___x_4629_ = v___x_4626_;
goto v_reusejp_4628_;
}
else
{
lean_object* v_reuseFailAlloc_4630_; 
v_reuseFailAlloc_4630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4630_, 0, v_a_4624_);
v___x_4629_ = v_reuseFailAlloc_4630_;
goto v_reusejp_4628_;
}
v_reusejp_4628_:
{
return v___x_4629_;
}
}
}
}
}
}
else
{
lean_object* v_a_4633_; lean_object* v___x_4635_; uint8_t v_isShared_4636_; uint8_t v_isSharedCheck_4640_; 
lean_dec_ref(v_arg_4599_);
lean_dec_ref(v_arg_4598_);
lean_dec_ref(v_e_4576_);
v_a_4633_ = lean_ctor_get(v___x_4609_, 0);
v_isSharedCheck_4640_ = !lean_is_exclusive(v___x_4609_);
if (v_isSharedCheck_4640_ == 0)
{
v___x_4635_ = v___x_4609_;
v_isShared_4636_ = v_isSharedCheck_4640_;
goto v_resetjp_4634_;
}
else
{
lean_inc(v_a_4633_);
lean_dec(v___x_4609_);
v___x_4635_ = lean_box(0);
v_isShared_4636_ = v_isSharedCheck_4640_;
goto v_resetjp_4634_;
}
v_resetjp_4634_:
{
lean_object* v___x_4638_; 
if (v_isShared_4636_ == 0)
{
v___x_4638_ = v___x_4635_;
goto v_reusejp_4637_;
}
else
{
lean_object* v_reuseFailAlloc_4639_; 
v_reuseFailAlloc_4639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4639_, 0, v_a_4633_);
v___x_4638_ = v_reuseFailAlloc_4639_;
goto v_reusejp_4637_;
}
v_reusejp_4637_:
{
return v___x_4638_;
}
}
}
}
else
{
lean_object* v___x_4641_; 
lean_inc_ref(v_arg_4599_);
v___x_4641_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_arg_4599_, v_a_4577_, v_a_4578_, v_a_4579_, v_a_4580_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_);
if (lean_obj_tag(v___x_4641_) == 0)
{
lean_object* v_a_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; 
v_a_4642_ = lean_ctor_get(v___x_4641_, 0);
lean_inc(v_a_4642_);
lean_dec_ref_known(v___x_4641_, 1);
v___x_4643_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__5, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__5_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__5);
v___x_4644_ = l_Lean_mkApp3(v___x_4643_, v_arg_4599_, v_arg_4598_, v_a_4642_);
v___x_4645_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_e_4576_, v___x_4644_, v_a_4577_, v_a_4579_, v_a_4581_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_);
return v___x_4645_;
}
else
{
lean_object* v_a_4646_; lean_object* v___x_4648_; uint8_t v_isShared_4649_; uint8_t v_isSharedCheck_4653_; 
lean_dec_ref(v_arg_4599_);
lean_dec_ref(v_arg_4598_);
lean_dec_ref(v_e_4576_);
v_a_4646_ = lean_ctor_get(v___x_4641_, 0);
v_isSharedCheck_4653_ = !lean_is_exclusive(v___x_4641_);
if (v_isSharedCheck_4653_ == 0)
{
v___x_4648_ = v___x_4641_;
v_isShared_4649_ = v_isSharedCheck_4653_;
goto v_resetjp_4647_;
}
else
{
lean_inc(v_a_4646_);
lean_dec(v___x_4641_);
v___x_4648_ = lean_box(0);
v_isShared_4649_ = v_isSharedCheck_4653_;
goto v_resetjp_4647_;
}
v_resetjp_4647_:
{
lean_object* v___x_4651_; 
if (v_isShared_4649_ == 0)
{
v___x_4651_ = v___x_4648_;
goto v_reusejp_4650_;
}
else
{
lean_object* v_reuseFailAlloc_4652_; 
v_reuseFailAlloc_4652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4652_, 0, v_a_4646_);
v___x_4651_ = v_reuseFailAlloc_4652_;
goto v_reusejp_4650_;
}
v_reusejp_4650_:
{
return v___x_4651_;
}
}
}
}
}
else
{
lean_object* v_a_4654_; lean_object* v___x_4656_; uint8_t v_isShared_4657_; uint8_t v_isSharedCheck_4661_; 
lean_dec_ref(v_arg_4599_);
lean_dec_ref(v_arg_4598_);
lean_dec_ref(v_e_4576_);
v_a_4654_ = lean_ctor_get(v___x_4606_, 0);
v_isSharedCheck_4661_ = !lean_is_exclusive(v___x_4606_);
if (v_isSharedCheck_4661_ == 0)
{
v___x_4656_ = v___x_4606_;
v_isShared_4657_ = v_isSharedCheck_4661_;
goto v_resetjp_4655_;
}
else
{
lean_inc(v_a_4654_);
lean_dec(v___x_4606_);
v___x_4656_ = lean_box(0);
v_isShared_4657_ = v_isSharedCheck_4661_;
goto v_resetjp_4655_;
}
v_resetjp_4655_:
{
lean_object* v___x_4659_; 
if (v_isShared_4657_ == 0)
{
v___x_4659_ = v___x_4656_;
goto v_reusejp_4658_;
}
else
{
lean_object* v_reuseFailAlloc_4660_; 
v_reuseFailAlloc_4660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4660_, 0, v_a_4654_);
v___x_4659_ = v_reuseFailAlloc_4660_;
goto v_reusejp_4658_;
}
v_reusejp_4658_:
{
return v___x_4659_;
}
}
}
}
else
{
lean_object* v___x_4662_; 
lean_inc_ref(v_arg_4598_);
v___x_4662_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_arg_4598_, v_a_4577_, v_a_4578_, v_a_4579_, v_a_4580_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_);
if (lean_obj_tag(v___x_4662_) == 0)
{
lean_object* v_a_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; uint8_t v___x_4666_; lean_object* v___x_4667_; 
v_a_4663_ = lean_ctor_get(v___x_4662_, 0);
lean_inc(v_a_4663_);
lean_dec_ref_known(v___x_4662_, 1);
v___x_4664_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__7, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__7_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__7);
lean_inc_ref(v_arg_4599_);
v___x_4665_ = l_Lean_mkApp3(v___x_4664_, v_arg_4599_, v_arg_4598_, v_a_4663_);
v___x_4666_ = lean_unbox(v_a_4601_);
lean_dec(v_a_4601_);
v___x_4667_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_4576_, v_arg_4599_, v___x_4665_, v___x_4666_, v_a_4577_, v_a_4579_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_);
return v___x_4667_;
}
else
{
lean_object* v_a_4668_; lean_object* v___x_4670_; uint8_t v_isShared_4671_; uint8_t v_isSharedCheck_4675_; 
lean_dec(v_a_4601_);
lean_dec_ref(v_arg_4599_);
lean_dec_ref(v_arg_4598_);
lean_dec_ref(v_e_4576_);
v_a_4668_ = lean_ctor_get(v___x_4662_, 0);
v_isSharedCheck_4675_ = !lean_is_exclusive(v___x_4662_);
if (v_isSharedCheck_4675_ == 0)
{
v___x_4670_ = v___x_4662_;
v_isShared_4671_ = v_isSharedCheck_4675_;
goto v_resetjp_4669_;
}
else
{
lean_inc(v_a_4668_);
lean_dec(v___x_4662_);
v___x_4670_ = lean_box(0);
v_isShared_4671_ = v_isSharedCheck_4675_;
goto v_resetjp_4669_;
}
v_resetjp_4669_:
{
lean_object* v___x_4673_; 
if (v_isShared_4671_ == 0)
{
v___x_4673_ = v___x_4670_;
goto v_reusejp_4672_;
}
else
{
lean_object* v_reuseFailAlloc_4674_; 
v_reuseFailAlloc_4674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4674_, 0, v_a_4668_);
v___x_4673_ = v_reuseFailAlloc_4674_;
goto v_reusejp_4672_;
}
v_reusejp_4672_:
{
return v___x_4673_;
}
}
}
}
}
else
{
lean_object* v_a_4676_; lean_object* v___x_4678_; uint8_t v_isShared_4679_; uint8_t v_isSharedCheck_4683_; 
lean_dec(v_a_4601_);
lean_dec_ref(v_arg_4599_);
lean_dec_ref(v_arg_4598_);
lean_dec_ref(v_e_4576_);
v_a_4676_ = lean_ctor_get(v___x_4603_, 0);
v_isSharedCheck_4683_ = !lean_is_exclusive(v___x_4603_);
if (v_isSharedCheck_4683_ == 0)
{
v___x_4678_ = v___x_4603_;
v_isShared_4679_ = v_isSharedCheck_4683_;
goto v_resetjp_4677_;
}
else
{
lean_inc(v_a_4676_);
lean_dec(v___x_4603_);
v___x_4678_ = lean_box(0);
v_isShared_4679_ = v_isSharedCheck_4683_;
goto v_resetjp_4677_;
}
v_resetjp_4677_:
{
lean_object* v___x_4681_; 
if (v_isShared_4679_ == 0)
{
v___x_4681_ = v___x_4678_;
goto v_reusejp_4680_;
}
else
{
lean_object* v_reuseFailAlloc_4682_; 
v_reuseFailAlloc_4682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4682_, 0, v_a_4676_);
v___x_4681_ = v_reuseFailAlloc_4682_;
goto v_reusejp_4680_;
}
v_reusejp_4680_:
{
return v___x_4681_;
}
}
}
}
else
{
lean_object* v___x_4684_; 
lean_dec(v_a_4601_);
lean_inc_ref(v_arg_4599_);
v___x_4684_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_arg_4599_, v_a_4577_, v_a_4578_, v_a_4579_, v_a_4580_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_);
if (lean_obj_tag(v___x_4684_) == 0)
{
lean_object* v_a_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; uint8_t v___x_4688_; lean_object* v___x_4689_; 
v_a_4685_ = lean_ctor_get(v___x_4684_, 0);
lean_inc(v_a_4685_);
lean_dec_ref_known(v___x_4684_, 1);
v___x_4686_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__9, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__9_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__9);
lean_inc_ref(v_arg_4598_);
v___x_4687_ = l_Lean_mkApp3(v___x_4686_, v_arg_4599_, v_arg_4598_, v_a_4685_);
v___x_4688_ = 0;
v___x_4689_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_4576_, v_arg_4598_, v___x_4687_, v___x_4688_, v_a_4577_, v_a_4579_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_);
return v___x_4689_;
}
else
{
lean_object* v_a_4690_; lean_object* v___x_4692_; uint8_t v_isShared_4693_; uint8_t v_isSharedCheck_4697_; 
lean_dec_ref(v_arg_4599_);
lean_dec_ref(v_arg_4598_);
lean_dec_ref(v_e_4576_);
v_a_4690_ = lean_ctor_get(v___x_4684_, 0);
v_isSharedCheck_4697_ = !lean_is_exclusive(v___x_4684_);
if (v_isSharedCheck_4697_ == 0)
{
v___x_4692_ = v___x_4684_;
v_isShared_4693_ = v_isSharedCheck_4697_;
goto v_resetjp_4691_;
}
else
{
lean_inc(v_a_4690_);
lean_dec(v___x_4684_);
v___x_4692_ = lean_box(0);
v_isShared_4693_ = v_isSharedCheck_4697_;
goto v_resetjp_4691_;
}
v_resetjp_4691_:
{
lean_object* v___x_4695_; 
if (v_isShared_4693_ == 0)
{
v___x_4695_ = v___x_4692_;
goto v_reusejp_4694_;
}
else
{
lean_object* v_reuseFailAlloc_4696_; 
v_reuseFailAlloc_4696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4696_, 0, v_a_4690_);
v___x_4695_ = v_reuseFailAlloc_4696_;
goto v_reusejp_4694_;
}
v_reusejp_4694_:
{
return v___x_4695_;
}
}
}
}
}
else
{
lean_object* v_a_4698_; lean_object* v___x_4700_; uint8_t v_isShared_4701_; uint8_t v_isSharedCheck_4705_; 
lean_dec_ref(v_arg_4599_);
lean_dec_ref(v_arg_4598_);
lean_dec_ref(v_e_4576_);
v_a_4698_ = lean_ctor_get(v___x_4600_, 0);
v_isSharedCheck_4705_ = !lean_is_exclusive(v___x_4600_);
if (v_isSharedCheck_4705_ == 0)
{
v___x_4700_ = v___x_4600_;
v_isShared_4701_ = v_isSharedCheck_4705_;
goto v_resetjp_4699_;
}
else
{
lean_inc(v_a_4698_);
lean_dec(v___x_4600_);
v___x_4700_ = lean_box(0);
v_isShared_4701_ = v_isSharedCheck_4705_;
goto v_resetjp_4699_;
}
v_resetjp_4699_:
{
lean_object* v___x_4703_; 
if (v_isShared_4701_ == 0)
{
v___x_4703_ = v___x_4700_;
goto v_reusejp_4702_;
}
else
{
lean_object* v_reuseFailAlloc_4704_; 
v_reuseFailAlloc_4704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4704_, 0, v_a_4698_);
v___x_4703_ = v_reuseFailAlloc_4704_;
goto v_reusejp_4702_;
}
v_reusejp_4702_:
{
return v___x_4703_;
}
}
}
}
}
}
v___jp_4588_:
{
lean_object* v___x_4589_; lean_object* v___x_4590_; 
v___x_4589_ = lean_box(0);
v___x_4590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4590_, 0, v___x_4589_);
return v___x_4590_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___boxed(lean_object* v_e_4706_, lean_object* v_a_4707_, lean_object* v_a_4708_, lean_object* v_a_4709_, lean_object* v_a_4710_, lean_object* v_a_4711_, lean_object* v_a_4712_, lean_object* v_a_4713_, lean_object* v_a_4714_, lean_object* v_a_4715_, lean_object* v_a_4716_, lean_object* v_a_4717_){
_start:
{
lean_object* v_res_4718_; 
v_res_4718_ = l_Lean_Meta_Grind_propagateBoolOrUp(v_e_4706_, v_a_4707_, v_a_4708_, v_a_4709_, v_a_4710_, v_a_4711_, v_a_4712_, v_a_4713_, v_a_4714_, v_a_4715_, v_a_4716_);
lean_dec(v_a_4716_);
lean_dec_ref(v_a_4715_);
lean_dec(v_a_4714_);
lean_dec_ref(v_a_4713_);
lean_dec(v_a_4712_);
lean_dec_ref(v_a_4711_);
lean_dec(v_a_4710_);
lean_dec_ref(v_a_4709_);
lean_dec(v_a_4708_);
lean_dec(v_a_4707_);
return v_res_4718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrUp___regBuiltin_Lean_Meta_Grind_propagateBoolOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_428936191____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; 
v___x_4720_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolOrUp___closed__1));
v___x_4721_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBoolOrUp___boxed), 12, 0);
v___x_4722_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_4720_, v___x_4721_);
return v___x_4722_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrUp___regBuiltin_Lean_Meta_Grind_propagateBoolOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_428936191____hygCtx___hyg_9____boxed(lean_object* v_a_4723_){
_start:
{
lean_object* v_res_4724_; 
v_res_4724_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrUp___regBuiltin_Lean_Meta_Grind_propagateBoolOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_428936191____hygCtx___hyg_9_();
return v_res_4724_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrDown___closed__1(void){
_start:
{
lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; 
v___x_4730_ = lean_box(0);
v___x_4731_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolOrDown___closed__0));
v___x_4732_ = l_Lean_mkConst(v___x_4731_, v___x_4730_);
return v___x_4732_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrDown___closed__3(void){
_start:
{
lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; 
v___x_4738_ = lean_box(0);
v___x_4739_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolOrDown___closed__2));
v___x_4740_ = l_Lean_mkConst(v___x_4739_, v___x_4738_);
return v___x_4740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrDown(lean_object* v_e_4741_, lean_object* v_a_4742_, lean_object* v_a_4743_, lean_object* v_a_4744_, lean_object* v_a_4745_, lean_object* v_a_4746_, lean_object* v_a_4747_, lean_object* v_a_4748_, lean_object* v_a_4749_, lean_object* v_a_4750_, lean_object* v_a_4751_){
_start:
{
lean_object* v___x_4756_; 
lean_inc_ref(v_e_4741_);
v___x_4756_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_e_4741_, v_a_4742_, v_a_4746_, v_a_4748_, v_a_4749_, v_a_4750_, v_a_4751_);
if (lean_obj_tag(v___x_4756_) == 0)
{
lean_object* v_a_4757_; lean_object* v___x_4759_; uint8_t v_isShared_4760_; uint8_t v_isSharedCheck_4791_; 
v_a_4757_ = lean_ctor_get(v___x_4756_, 0);
v_isSharedCheck_4791_ = !lean_is_exclusive(v___x_4756_);
if (v_isSharedCheck_4791_ == 0)
{
v___x_4759_ = v___x_4756_;
v_isShared_4760_ = v_isSharedCheck_4791_;
goto v_resetjp_4758_;
}
else
{
lean_inc(v_a_4757_);
lean_dec(v___x_4756_);
v___x_4759_ = lean_box(0);
v_isShared_4760_ = v_isSharedCheck_4791_;
goto v_resetjp_4758_;
}
v_resetjp_4758_:
{
uint8_t v___x_4761_; 
v___x_4761_ = lean_unbox(v_a_4757_);
lean_dec(v_a_4757_);
if (v___x_4761_ == 0)
{
lean_object* v___x_4762_; lean_object* v___x_4764_; 
lean_dec_ref(v_e_4741_);
v___x_4762_ = lean_box(0);
if (v_isShared_4760_ == 0)
{
lean_ctor_set(v___x_4759_, 0, v___x_4762_);
v___x_4764_ = v___x_4759_;
goto v_reusejp_4763_;
}
else
{
lean_object* v_reuseFailAlloc_4765_; 
v_reuseFailAlloc_4765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4765_, 0, v___x_4762_);
v___x_4764_ = v_reuseFailAlloc_4765_;
goto v_reusejp_4763_;
}
v_reusejp_4763_:
{
return v___x_4764_;
}
}
else
{
lean_object* v___x_4766_; uint8_t v___x_4767_; 
lean_del_object(v___x_4759_);
v___x_4766_ = l_Lean_Expr_cleanupAnnotations(v_e_4741_);
v___x_4767_ = l_Lean_Expr_isApp(v___x_4766_);
if (v___x_4767_ == 0)
{
lean_dec_ref(v___x_4766_);
lean_dec_ref(v_e_4741_);
goto v___jp_4753_;
}
else
{
lean_object* v___x_4768_; uint8_t v___x_4769_; 
v___x_4768_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4766_);
v___x_4769_ = l_Lean_Expr_isApp(v___x_4768_);
if (v___x_4769_ == 0)
{
lean_dec_ref(v___x_4768_);
lean_dec_ref(v___x_4766_);
lean_dec_ref(v_e_4741_);
goto v___jp_4753_;
}
else
{
lean_object* v___x_4770_; lean_object* v___x_4771_; uint8_t v___x_4772_; 
v___x_4770_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4768_);
v___x_4771_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolOrUp___closed__1));
v___x_4772_ = l_Lean_Expr_isConstOf(v___x_4770_, v___x_4771_);
lean_dec_ref(v___x_4770_);
if (v___x_4772_ == 0)
{
lean_dec_ref(v___x_4768_);
lean_dec_ref(v___x_4766_);
lean_dec_ref(v_e_4741_);
goto v___jp_4753_;
}
else
{
lean_object* v_arg_4773_; lean_object* v_arg_4774_; lean_object* v___x_4775_; 
v_arg_4773_ = lean_ctor_get(v___x_4766_, 1);
lean_inc_ref(v_arg_4773_);
lean_dec_ref(v___x_4766_);
v_arg_4774_ = lean_ctor_get(v___x_4768_, 1);
lean_inc_ref(v_arg_4774_);
lean_dec_ref(v___x_4768_);
v___x_4775_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_e_4741_, v_a_4742_, v_a_4743_, v_a_4744_, v_a_4745_, v_a_4746_, v_a_4747_, v_a_4748_, v_a_4749_, v_a_4750_, v_a_4751_);
if (lean_obj_tag(v___x_4775_) == 0)
{
lean_object* v_a_4776_; lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; 
v_a_4776_ = lean_ctor_get(v___x_4775_, 0);
lean_inc_n(v_a_4776_, 2);
lean_dec_ref_known(v___x_4775_, 1);
v___x_4777_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrDown___closed__1, &l_Lean_Meta_Grind_propagateBoolOrDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolOrDown___closed__1);
lean_inc_ref(v_arg_4773_);
lean_inc_ref_n(v_arg_4774_, 2);
v___x_4778_ = l_Lean_mkApp3(v___x_4777_, v_arg_4774_, v_arg_4773_, v_a_4776_);
v___x_4779_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_arg_4774_, v___x_4778_, v_a_4742_, v_a_4744_, v_a_4746_, v_a_4748_, v_a_4749_, v_a_4750_, v_a_4751_);
if (lean_obj_tag(v___x_4779_) == 0)
{
lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; 
lean_dec_ref_known(v___x_4779_, 1);
v___x_4780_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrDown___closed__3, &l_Lean_Meta_Grind_propagateBoolOrDown___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolOrDown___closed__3);
lean_inc_ref(v_arg_4773_);
v___x_4781_ = l_Lean_mkApp3(v___x_4780_, v_arg_4774_, v_arg_4773_, v_a_4776_);
v___x_4782_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_arg_4773_, v___x_4781_, v_a_4742_, v_a_4744_, v_a_4746_, v_a_4748_, v_a_4749_, v_a_4750_, v_a_4751_);
return v___x_4782_;
}
else
{
lean_dec(v_a_4776_);
lean_dec_ref(v_arg_4774_);
lean_dec_ref(v_arg_4773_);
return v___x_4779_;
}
}
else
{
lean_object* v_a_4783_; lean_object* v___x_4785_; uint8_t v_isShared_4786_; uint8_t v_isSharedCheck_4790_; 
lean_dec_ref(v_arg_4774_);
lean_dec_ref(v_arg_4773_);
v_a_4783_ = lean_ctor_get(v___x_4775_, 0);
v_isSharedCheck_4790_ = !lean_is_exclusive(v___x_4775_);
if (v_isSharedCheck_4790_ == 0)
{
v___x_4785_ = v___x_4775_;
v_isShared_4786_ = v_isSharedCheck_4790_;
goto v_resetjp_4784_;
}
else
{
lean_inc(v_a_4783_);
lean_dec(v___x_4775_);
v___x_4785_ = lean_box(0);
v_isShared_4786_ = v_isSharedCheck_4790_;
goto v_resetjp_4784_;
}
v_resetjp_4784_:
{
lean_object* v___x_4788_; 
if (v_isShared_4786_ == 0)
{
v___x_4788_ = v___x_4785_;
goto v_reusejp_4787_;
}
else
{
lean_object* v_reuseFailAlloc_4789_; 
v_reuseFailAlloc_4789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4789_, 0, v_a_4783_);
v___x_4788_ = v_reuseFailAlloc_4789_;
goto v_reusejp_4787_;
}
v_reusejp_4787_:
{
return v___x_4788_;
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
lean_object* v_a_4792_; lean_object* v___x_4794_; uint8_t v_isShared_4795_; uint8_t v_isSharedCheck_4799_; 
lean_dec_ref(v_e_4741_);
v_a_4792_ = lean_ctor_get(v___x_4756_, 0);
v_isSharedCheck_4799_ = !lean_is_exclusive(v___x_4756_);
if (v_isSharedCheck_4799_ == 0)
{
v___x_4794_ = v___x_4756_;
v_isShared_4795_ = v_isSharedCheck_4799_;
goto v_resetjp_4793_;
}
else
{
lean_inc(v_a_4792_);
lean_dec(v___x_4756_);
v___x_4794_ = lean_box(0);
v_isShared_4795_ = v_isSharedCheck_4799_;
goto v_resetjp_4793_;
}
v_resetjp_4793_:
{
lean_object* v___x_4797_; 
if (v_isShared_4795_ == 0)
{
v___x_4797_ = v___x_4794_;
goto v_reusejp_4796_;
}
else
{
lean_object* v_reuseFailAlloc_4798_; 
v_reuseFailAlloc_4798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4798_, 0, v_a_4792_);
v___x_4797_ = v_reuseFailAlloc_4798_;
goto v_reusejp_4796_;
}
v_reusejp_4796_:
{
return v___x_4797_;
}
}
}
v___jp_4753_:
{
lean_object* v___x_4754_; lean_object* v___x_4755_; 
v___x_4754_ = lean_box(0);
v___x_4755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4755_, 0, v___x_4754_);
return v___x_4755_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrDown___boxed(lean_object* v_e_4800_, lean_object* v_a_4801_, lean_object* v_a_4802_, lean_object* v_a_4803_, lean_object* v_a_4804_, lean_object* v_a_4805_, lean_object* v_a_4806_, lean_object* v_a_4807_, lean_object* v_a_4808_, lean_object* v_a_4809_, lean_object* v_a_4810_, lean_object* v_a_4811_){
_start:
{
lean_object* v_res_4812_; 
v_res_4812_ = l_Lean_Meta_Grind_propagateBoolOrDown(v_e_4800_, v_a_4801_, v_a_4802_, v_a_4803_, v_a_4804_, v_a_4805_, v_a_4806_, v_a_4807_, v_a_4808_, v_a_4809_, v_a_4810_);
lean_dec(v_a_4810_);
lean_dec_ref(v_a_4809_);
lean_dec(v_a_4808_);
lean_dec_ref(v_a_4807_);
lean_dec(v_a_4806_);
lean_dec_ref(v_a_4805_);
lean_dec(v_a_4804_);
lean_dec_ref(v_a_4803_);
lean_dec(v_a_4802_);
lean_dec(v_a_4801_);
return v_res_4812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrDown___regBuiltin_Lean_Meta_Grind_propagateBoolOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_201731281____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; 
v___x_4814_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolOrUp___closed__1));
v___x_4815_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBoolOrDown___boxed), 12, 0);
v___x_4816_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_4814_, v___x_4815_);
return v___x_4816_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrDown___regBuiltin_Lean_Meta_Grind_propagateBoolOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_201731281____hygCtx___hyg_9____boxed(lean_object* v_a_4817_){
_start:
{
lean_object* v_res_4818_; 
v_res_4818_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrDown___regBuiltin_Lean_Meta_Grind_propagateBoolOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_201731281____hygCtx___hyg_9_();
return v_res_4818_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__3(void){
_start:
{
lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; 
v___x_4828_ = lean_box(0);
v___x_4829_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolNotUp___closed__2));
v___x_4830_ = l_Lean_mkConst(v___x_4829_, v___x_4828_);
return v___x_4830_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__5(void){
_start:
{
lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; 
v___x_4836_ = lean_box(0);
v___x_4837_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolNotUp___closed__4));
v___x_4838_ = l_Lean_mkConst(v___x_4837_, v___x_4836_);
return v___x_4838_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__7(void){
_start:
{
lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; 
v___x_4844_ = lean_box(0);
v___x_4845_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolNotUp___closed__6));
v___x_4846_ = l_Lean_mkConst(v___x_4845_, v___x_4844_);
return v___x_4846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotUp(lean_object* v_e_4847_, lean_object* v_a_4848_, lean_object* v_a_4849_, lean_object* v_a_4850_, lean_object* v_a_4851_, lean_object* v_a_4852_, lean_object* v_a_4853_, lean_object* v_a_4854_, lean_object* v_a_4855_, lean_object* v_a_4856_, lean_object* v_a_4857_){
_start:
{
lean_object* v___x_4862_; uint8_t v___x_4863_; 
v___x_4862_ = l_Lean_Expr_cleanupAnnotations(v_e_4847_);
v___x_4863_ = l_Lean_Expr_isApp(v___x_4862_);
if (v___x_4863_ == 0)
{
lean_dec_ref(v___x_4862_);
lean_dec_ref(v_e_4847_);
goto v___jp_4859_;
}
else
{
lean_object* v___x_4864_; lean_object* v___x_4865_; uint8_t v___x_4866_; 
v___x_4864_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4862_);
v___x_4865_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolNotUp___closed__1));
v___x_4866_ = l_Lean_Expr_isConstOf(v___x_4864_, v___x_4865_);
lean_dec_ref(v___x_4864_);
if (v___x_4866_ == 0)
{
lean_dec_ref(v___x_4862_);
lean_dec_ref(v_e_4847_);
goto v___jp_4859_;
}
else
{
lean_object* v_arg_4867_; lean_object* v___x_4868_; 
v_arg_4867_ = lean_ctor_get(v___x_4862_, 1);
lean_inc_ref_n(v_arg_4867_, 2);
lean_dec_ref(v___x_4862_);
v___x_4868_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_arg_4867_, v_a_4848_, v_a_4852_, v_a_4854_, v_a_4855_, v_a_4856_, v_a_4857_);
if (lean_obj_tag(v___x_4868_) == 0)
{
lean_object* v_a_4869_; uint8_t v___x_4870_; 
v_a_4869_ = lean_ctor_get(v___x_4868_, 0);
lean_inc(v_a_4869_);
lean_dec_ref_known(v___x_4868_, 1);
v___x_4870_ = lean_unbox(v_a_4869_);
lean_dec(v_a_4869_);
if (v___x_4870_ == 0)
{
lean_object* v___x_4871_; 
lean_inc_ref(v_arg_4867_);
v___x_4871_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_arg_4867_, v_a_4848_, v_a_4852_, v_a_4854_, v_a_4855_, v_a_4856_, v_a_4857_);
if (lean_obj_tag(v___x_4871_) == 0)
{
lean_object* v_a_4872_; uint8_t v___x_4873_; 
v_a_4872_ = lean_ctor_get(v___x_4871_, 0);
lean_inc(v_a_4872_);
lean_dec_ref_known(v___x_4871_, 1);
v___x_4873_ = lean_unbox(v_a_4872_);
lean_dec(v_a_4872_);
if (v___x_4873_ == 0)
{
lean_object* v___x_4874_; 
v___x_4874_ = l_Lean_Meta_Grind_isEqv___redArg(v_e_4847_, v_arg_4867_, v_a_4848_);
if (lean_obj_tag(v___x_4874_) == 0)
{
lean_object* v_a_4875_; lean_object* v___x_4877_; uint8_t v_isShared_4878_; uint8_t v_isSharedCheck_4897_; 
v_a_4875_ = lean_ctor_get(v___x_4874_, 0);
v_isSharedCheck_4897_ = !lean_is_exclusive(v___x_4874_);
if (v_isSharedCheck_4897_ == 0)
{
v___x_4877_ = v___x_4874_;
v_isShared_4878_ = v_isSharedCheck_4897_;
goto v_resetjp_4876_;
}
else
{
lean_inc(v_a_4875_);
lean_dec(v___x_4874_);
v___x_4877_ = lean_box(0);
v_isShared_4878_ = v_isSharedCheck_4897_;
goto v_resetjp_4876_;
}
v_resetjp_4876_:
{
uint8_t v___x_4879_; 
v___x_4879_ = lean_unbox(v_a_4875_);
lean_dec(v_a_4875_);
if (v___x_4879_ == 0)
{
lean_object* v___x_4880_; lean_object* v___x_4882_; 
lean_dec_ref(v_arg_4867_);
lean_dec_ref(v_e_4847_);
v___x_4880_ = lean_box(0);
if (v_isShared_4878_ == 0)
{
lean_ctor_set(v___x_4877_, 0, v___x_4880_);
v___x_4882_ = v___x_4877_;
goto v_reusejp_4881_;
}
else
{
lean_object* v_reuseFailAlloc_4883_; 
v_reuseFailAlloc_4883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4883_, 0, v___x_4880_);
v___x_4882_ = v_reuseFailAlloc_4883_;
goto v_reusejp_4881_;
}
v_reusejp_4881_:
{
return v___x_4882_;
}
}
else
{
lean_object* v___x_4884_; 
lean_del_object(v___x_4877_);
lean_inc(v_a_4857_);
lean_inc_ref(v_a_4856_);
lean_inc(v_a_4855_);
lean_inc_ref(v_a_4854_);
lean_inc(v_a_4853_);
lean_inc_ref(v_a_4852_);
lean_inc(v_a_4851_);
lean_inc_ref(v_a_4850_);
lean_inc(v_a_4849_);
lean_inc(v_a_4848_);
lean_inc_ref(v_arg_4867_);
v___x_4884_ = lean_grind_mk_eq_proof(v_e_4847_, v_arg_4867_, v_a_4848_, v_a_4849_, v_a_4850_, v_a_4851_, v_a_4852_, v_a_4853_, v_a_4854_, v_a_4855_, v_a_4856_, v_a_4857_);
if (lean_obj_tag(v___x_4884_) == 0)
{
lean_object* v_a_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; 
v_a_4885_ = lean_ctor_get(v___x_4884_, 0);
lean_inc(v_a_4885_);
lean_dec_ref_known(v___x_4884_, 1);
v___x_4886_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__3, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__3);
v___x_4887_ = l_Lean_mkAppB(v___x_4886_, v_arg_4867_, v_a_4885_);
v___x_4888_ = l_Lean_Meta_Grind_closeGoal(v___x_4887_, v_a_4848_, v_a_4849_, v_a_4850_, v_a_4851_, v_a_4852_, v_a_4853_, v_a_4854_, v_a_4855_, v_a_4856_, v_a_4857_);
return v___x_4888_;
}
else
{
lean_object* v_a_4889_; lean_object* v___x_4891_; uint8_t v_isShared_4892_; uint8_t v_isSharedCheck_4896_; 
lean_dec_ref(v_arg_4867_);
v_a_4889_ = lean_ctor_get(v___x_4884_, 0);
v_isSharedCheck_4896_ = !lean_is_exclusive(v___x_4884_);
if (v_isSharedCheck_4896_ == 0)
{
v___x_4891_ = v___x_4884_;
v_isShared_4892_ = v_isSharedCheck_4896_;
goto v_resetjp_4890_;
}
else
{
lean_inc(v_a_4889_);
lean_dec(v___x_4884_);
v___x_4891_ = lean_box(0);
v_isShared_4892_ = v_isSharedCheck_4896_;
goto v_resetjp_4890_;
}
v_resetjp_4890_:
{
lean_object* v___x_4894_; 
if (v_isShared_4892_ == 0)
{
v___x_4894_ = v___x_4891_;
goto v_reusejp_4893_;
}
else
{
lean_object* v_reuseFailAlloc_4895_; 
v_reuseFailAlloc_4895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4895_, 0, v_a_4889_);
v___x_4894_ = v_reuseFailAlloc_4895_;
goto v_reusejp_4893_;
}
v_reusejp_4893_:
{
return v___x_4894_;
}
}
}
}
}
}
else
{
lean_object* v_a_4898_; lean_object* v___x_4900_; uint8_t v_isShared_4901_; uint8_t v_isSharedCheck_4905_; 
lean_dec_ref(v_arg_4867_);
lean_dec_ref(v_e_4847_);
v_a_4898_ = lean_ctor_get(v___x_4874_, 0);
v_isSharedCheck_4905_ = !lean_is_exclusive(v___x_4874_);
if (v_isSharedCheck_4905_ == 0)
{
v___x_4900_ = v___x_4874_;
v_isShared_4901_ = v_isSharedCheck_4905_;
goto v_resetjp_4899_;
}
else
{
lean_inc(v_a_4898_);
lean_dec(v___x_4874_);
v___x_4900_ = lean_box(0);
v_isShared_4901_ = v_isSharedCheck_4905_;
goto v_resetjp_4899_;
}
v_resetjp_4899_:
{
lean_object* v___x_4903_; 
if (v_isShared_4901_ == 0)
{
v___x_4903_ = v___x_4900_;
goto v_reusejp_4902_;
}
else
{
lean_object* v_reuseFailAlloc_4904_; 
v_reuseFailAlloc_4904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4904_, 0, v_a_4898_);
v___x_4903_ = v_reuseFailAlloc_4904_;
goto v_reusejp_4902_;
}
v_reusejp_4902_:
{
return v___x_4903_;
}
}
}
}
else
{
lean_object* v___x_4906_; 
lean_inc_ref(v_arg_4867_);
v___x_4906_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_arg_4867_, v_a_4848_, v_a_4849_, v_a_4850_, v_a_4851_, v_a_4852_, v_a_4853_, v_a_4854_, v_a_4855_, v_a_4856_, v_a_4857_);
if (lean_obj_tag(v___x_4906_) == 0)
{
lean_object* v_a_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; 
v_a_4907_ = lean_ctor_get(v___x_4906_, 0);
lean_inc(v_a_4907_);
lean_dec_ref_known(v___x_4906_, 1);
v___x_4908_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__5, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__5_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__5);
v___x_4909_ = l_Lean_mkAppB(v___x_4908_, v_arg_4867_, v_a_4907_);
v___x_4910_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_e_4847_, v___x_4909_, v_a_4848_, v_a_4850_, v_a_4852_, v_a_4854_, v_a_4855_, v_a_4856_, v_a_4857_);
return v___x_4910_;
}
else
{
lean_object* v_a_4911_; lean_object* v___x_4913_; uint8_t v_isShared_4914_; uint8_t v_isSharedCheck_4918_; 
lean_dec_ref(v_arg_4867_);
lean_dec_ref(v_e_4847_);
v_a_4911_ = lean_ctor_get(v___x_4906_, 0);
v_isSharedCheck_4918_ = !lean_is_exclusive(v___x_4906_);
if (v_isSharedCheck_4918_ == 0)
{
v___x_4913_ = v___x_4906_;
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
else
{
lean_inc(v_a_4911_);
lean_dec(v___x_4906_);
v___x_4913_ = lean_box(0);
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
v_resetjp_4912_:
{
lean_object* v___x_4916_; 
if (v_isShared_4914_ == 0)
{
v___x_4916_ = v___x_4913_;
goto v_reusejp_4915_;
}
else
{
lean_object* v_reuseFailAlloc_4917_; 
v_reuseFailAlloc_4917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4917_, 0, v_a_4911_);
v___x_4916_ = v_reuseFailAlloc_4917_;
goto v_reusejp_4915_;
}
v_reusejp_4915_:
{
return v___x_4916_;
}
}
}
}
}
else
{
lean_object* v_a_4919_; lean_object* v___x_4921_; uint8_t v_isShared_4922_; uint8_t v_isSharedCheck_4926_; 
lean_dec_ref(v_arg_4867_);
lean_dec_ref(v_e_4847_);
v_a_4919_ = lean_ctor_get(v___x_4871_, 0);
v_isSharedCheck_4926_ = !lean_is_exclusive(v___x_4871_);
if (v_isSharedCheck_4926_ == 0)
{
v___x_4921_ = v___x_4871_;
v_isShared_4922_ = v_isSharedCheck_4926_;
goto v_resetjp_4920_;
}
else
{
lean_inc(v_a_4919_);
lean_dec(v___x_4871_);
v___x_4921_ = lean_box(0);
v_isShared_4922_ = v_isSharedCheck_4926_;
goto v_resetjp_4920_;
}
v_resetjp_4920_:
{
lean_object* v___x_4924_; 
if (v_isShared_4922_ == 0)
{
v___x_4924_ = v___x_4921_;
goto v_reusejp_4923_;
}
else
{
lean_object* v_reuseFailAlloc_4925_; 
v_reuseFailAlloc_4925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4925_, 0, v_a_4919_);
v___x_4924_ = v_reuseFailAlloc_4925_;
goto v_reusejp_4923_;
}
v_reusejp_4923_:
{
return v___x_4924_;
}
}
}
}
else
{
lean_object* v___x_4927_; 
lean_inc_ref(v_arg_4867_);
v___x_4927_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_arg_4867_, v_a_4848_, v_a_4849_, v_a_4850_, v_a_4851_, v_a_4852_, v_a_4853_, v_a_4854_, v_a_4855_, v_a_4856_, v_a_4857_);
if (lean_obj_tag(v___x_4927_) == 0)
{
lean_object* v_a_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; 
v_a_4928_ = lean_ctor_get(v___x_4927_, 0);
lean_inc(v_a_4928_);
lean_dec_ref_known(v___x_4927_, 1);
v___x_4929_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__7, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__7_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__7);
v___x_4930_ = l_Lean_mkAppB(v___x_4929_, v_arg_4867_, v_a_4928_);
v___x_4931_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_e_4847_, v___x_4930_, v_a_4848_, v_a_4850_, v_a_4852_, v_a_4854_, v_a_4855_, v_a_4856_, v_a_4857_);
return v___x_4931_;
}
else
{
lean_object* v_a_4932_; lean_object* v___x_4934_; uint8_t v_isShared_4935_; uint8_t v_isSharedCheck_4939_; 
lean_dec_ref(v_arg_4867_);
lean_dec_ref(v_e_4847_);
v_a_4932_ = lean_ctor_get(v___x_4927_, 0);
v_isSharedCheck_4939_ = !lean_is_exclusive(v___x_4927_);
if (v_isSharedCheck_4939_ == 0)
{
v___x_4934_ = v___x_4927_;
v_isShared_4935_ = v_isSharedCheck_4939_;
goto v_resetjp_4933_;
}
else
{
lean_inc(v_a_4932_);
lean_dec(v___x_4927_);
v___x_4934_ = lean_box(0);
v_isShared_4935_ = v_isSharedCheck_4939_;
goto v_resetjp_4933_;
}
v_resetjp_4933_:
{
lean_object* v___x_4937_; 
if (v_isShared_4935_ == 0)
{
v___x_4937_ = v___x_4934_;
goto v_reusejp_4936_;
}
else
{
lean_object* v_reuseFailAlloc_4938_; 
v_reuseFailAlloc_4938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4938_, 0, v_a_4932_);
v___x_4937_ = v_reuseFailAlloc_4938_;
goto v_reusejp_4936_;
}
v_reusejp_4936_:
{
return v___x_4937_;
}
}
}
}
}
else
{
lean_object* v_a_4940_; lean_object* v___x_4942_; uint8_t v_isShared_4943_; uint8_t v_isSharedCheck_4947_; 
lean_dec_ref(v_arg_4867_);
lean_dec_ref(v_e_4847_);
v_a_4940_ = lean_ctor_get(v___x_4868_, 0);
v_isSharedCheck_4947_ = !lean_is_exclusive(v___x_4868_);
if (v_isSharedCheck_4947_ == 0)
{
v___x_4942_ = v___x_4868_;
v_isShared_4943_ = v_isSharedCheck_4947_;
goto v_resetjp_4941_;
}
else
{
lean_inc(v_a_4940_);
lean_dec(v___x_4868_);
v___x_4942_ = lean_box(0);
v_isShared_4943_ = v_isSharedCheck_4947_;
goto v_resetjp_4941_;
}
v_resetjp_4941_:
{
lean_object* v___x_4945_; 
if (v_isShared_4943_ == 0)
{
v___x_4945_ = v___x_4942_;
goto v_reusejp_4944_;
}
else
{
lean_object* v_reuseFailAlloc_4946_; 
v_reuseFailAlloc_4946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4946_, 0, v_a_4940_);
v___x_4945_ = v_reuseFailAlloc_4946_;
goto v_reusejp_4944_;
}
v_reusejp_4944_:
{
return v___x_4945_;
}
}
}
}
}
v___jp_4859_:
{
lean_object* v___x_4860_; lean_object* v___x_4861_; 
v___x_4860_ = lean_box(0);
v___x_4861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4861_, 0, v___x_4860_);
return v___x_4861_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___boxed(lean_object* v_e_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v_a_4951_, lean_object* v_a_4952_, lean_object* v_a_4953_, lean_object* v_a_4954_, lean_object* v_a_4955_, lean_object* v_a_4956_, lean_object* v_a_4957_, lean_object* v_a_4958_, lean_object* v_a_4959_){
_start:
{
lean_object* v_res_4960_; 
v_res_4960_ = l_Lean_Meta_Grind_propagateBoolNotUp(v_e_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_, v_a_4953_, v_a_4954_, v_a_4955_, v_a_4956_, v_a_4957_, v_a_4958_);
lean_dec(v_a_4958_);
lean_dec_ref(v_a_4957_);
lean_dec(v_a_4956_);
lean_dec_ref(v_a_4955_);
lean_dec(v_a_4954_);
lean_dec_ref(v_a_4953_);
lean_dec(v_a_4952_);
lean_dec_ref(v_a_4951_);
lean_dec(v_a_4950_);
lean_dec(v_a_4949_);
return v_res_4960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotUp___regBuiltin_Lean_Meta_Grind_propagateBoolNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1440696379____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_4962_; lean_object* v___x_4963_; lean_object* v___x_4964_; 
v___x_4962_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolNotUp___closed__1));
v___x_4963_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBoolNotUp___boxed), 12, 0);
v___x_4964_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_4962_, v___x_4963_);
return v___x_4964_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotUp___regBuiltin_Lean_Meta_Grind_propagateBoolNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1440696379____hygCtx___hyg_9____boxed(lean_object* v_a_4965_){
_start:
{
lean_object* v_res_4966_; 
v_res_4966_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotUp___regBuiltin_Lean_Meta_Grind_propagateBoolNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1440696379____hygCtx___hyg_9_();
return v_res_4966_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotDown___closed__1(void){
_start:
{
lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; 
v___x_4972_ = lean_box(0);
v___x_4973_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolNotDown___closed__0));
v___x_4974_ = l_Lean_mkConst(v___x_4973_, v___x_4972_);
return v___x_4974_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotDown___closed__3(void){
_start:
{
lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; 
v___x_4980_ = lean_box(0);
v___x_4981_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolNotDown___closed__2));
v___x_4982_ = l_Lean_mkConst(v___x_4981_, v___x_4980_);
return v___x_4982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotDown(lean_object* v_e_4983_, lean_object* v_a_4984_, lean_object* v_a_4985_, lean_object* v_a_4986_, lean_object* v_a_4987_, lean_object* v_a_4988_, lean_object* v_a_4989_, lean_object* v_a_4990_, lean_object* v_a_4991_, lean_object* v_a_4992_, lean_object* v_a_4993_){
_start:
{
lean_object* v___x_4998_; uint8_t v___x_4999_; 
v___x_4998_ = l_Lean_Expr_cleanupAnnotations(v_e_4983_);
v___x_4999_ = l_Lean_Expr_isApp(v___x_4998_);
if (v___x_4999_ == 0)
{
lean_dec_ref(v___x_4998_);
lean_dec_ref(v_e_4983_);
goto v___jp_4995_;
}
else
{
lean_object* v___x_5000_; lean_object* v___x_5001_; uint8_t v___x_5002_; 
v___x_5000_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4998_);
v___x_5001_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolNotUp___closed__1));
v___x_5002_ = l_Lean_Expr_isConstOf(v___x_5000_, v___x_5001_);
lean_dec_ref(v___x_5000_);
if (v___x_5002_ == 0)
{
lean_dec_ref(v___x_4998_);
lean_dec_ref(v_e_4983_);
goto v___jp_4995_;
}
else
{
lean_object* v_arg_5003_; lean_object* v___x_5004_; 
v_arg_5003_ = lean_ctor_get(v___x_4998_, 1);
lean_inc_ref(v_arg_5003_);
lean_dec_ref(v___x_4998_);
lean_inc_ref(v_e_4983_);
v___x_5004_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_e_4983_, v_a_4984_, v_a_4988_, v_a_4990_, v_a_4991_, v_a_4992_, v_a_4993_);
if (lean_obj_tag(v___x_5004_) == 0)
{
lean_object* v_a_5005_; uint8_t v___x_5006_; 
v_a_5005_ = lean_ctor_get(v___x_5004_, 0);
lean_inc(v_a_5005_);
lean_dec_ref_known(v___x_5004_, 1);
v___x_5006_ = lean_unbox(v_a_5005_);
lean_dec(v_a_5005_);
if (v___x_5006_ == 0)
{
lean_object* v___x_5007_; 
lean_inc_ref(v_e_4983_);
v___x_5007_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_e_4983_, v_a_4984_, v_a_4988_, v_a_4990_, v_a_4991_, v_a_4992_, v_a_4993_);
if (lean_obj_tag(v___x_5007_) == 0)
{
lean_object* v_a_5008_; uint8_t v___x_5009_; 
v_a_5008_ = lean_ctor_get(v___x_5007_, 0);
lean_inc(v_a_5008_);
lean_dec_ref_known(v___x_5007_, 1);
v___x_5009_ = lean_unbox(v_a_5008_);
lean_dec(v_a_5008_);
if (v___x_5009_ == 0)
{
lean_object* v___x_5010_; 
v___x_5010_ = l_Lean_Meta_Grind_isEqv___redArg(v_e_4983_, v_arg_5003_, v_a_4984_);
if (lean_obj_tag(v___x_5010_) == 0)
{
lean_object* v_a_5011_; lean_object* v___x_5013_; uint8_t v_isShared_5014_; uint8_t v_isSharedCheck_5033_; 
v_a_5011_ = lean_ctor_get(v___x_5010_, 0);
v_isSharedCheck_5033_ = !lean_is_exclusive(v___x_5010_);
if (v_isSharedCheck_5033_ == 0)
{
v___x_5013_ = v___x_5010_;
v_isShared_5014_ = v_isSharedCheck_5033_;
goto v_resetjp_5012_;
}
else
{
lean_inc(v_a_5011_);
lean_dec(v___x_5010_);
v___x_5013_ = lean_box(0);
v_isShared_5014_ = v_isSharedCheck_5033_;
goto v_resetjp_5012_;
}
v_resetjp_5012_:
{
uint8_t v___x_5015_; 
v___x_5015_ = lean_unbox(v_a_5011_);
lean_dec(v_a_5011_);
if (v___x_5015_ == 0)
{
lean_object* v___x_5016_; lean_object* v___x_5018_; 
lean_dec_ref(v_arg_5003_);
lean_dec_ref(v_e_4983_);
v___x_5016_ = lean_box(0);
if (v_isShared_5014_ == 0)
{
lean_ctor_set(v___x_5013_, 0, v___x_5016_);
v___x_5018_ = v___x_5013_;
goto v_reusejp_5017_;
}
else
{
lean_object* v_reuseFailAlloc_5019_; 
v_reuseFailAlloc_5019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5019_, 0, v___x_5016_);
v___x_5018_ = v_reuseFailAlloc_5019_;
goto v_reusejp_5017_;
}
v_reusejp_5017_:
{
return v___x_5018_;
}
}
else
{
lean_object* v___x_5020_; 
lean_del_object(v___x_5013_);
lean_inc(v_a_4993_);
lean_inc_ref(v_a_4992_);
lean_inc(v_a_4991_);
lean_inc_ref(v_a_4990_);
lean_inc(v_a_4989_);
lean_inc_ref(v_a_4988_);
lean_inc(v_a_4987_);
lean_inc_ref(v_a_4986_);
lean_inc(v_a_4985_);
lean_inc(v_a_4984_);
lean_inc_ref(v_arg_5003_);
v___x_5020_ = lean_grind_mk_eq_proof(v_e_4983_, v_arg_5003_, v_a_4984_, v_a_4985_, v_a_4986_, v_a_4987_, v_a_4988_, v_a_4989_, v_a_4990_, v_a_4991_, v_a_4992_, v_a_4993_);
if (lean_obj_tag(v___x_5020_) == 0)
{
lean_object* v_a_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; 
v_a_5021_ = lean_ctor_get(v___x_5020_, 0);
lean_inc(v_a_5021_);
lean_dec_ref_known(v___x_5020_, 1);
v___x_5022_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__3, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__3);
v___x_5023_ = l_Lean_mkAppB(v___x_5022_, v_arg_5003_, v_a_5021_);
v___x_5024_ = l_Lean_Meta_Grind_closeGoal(v___x_5023_, v_a_4984_, v_a_4985_, v_a_4986_, v_a_4987_, v_a_4988_, v_a_4989_, v_a_4990_, v_a_4991_, v_a_4992_, v_a_4993_);
return v___x_5024_;
}
else
{
lean_object* v_a_5025_; lean_object* v___x_5027_; uint8_t v_isShared_5028_; uint8_t v_isSharedCheck_5032_; 
lean_dec_ref(v_arg_5003_);
v_a_5025_ = lean_ctor_get(v___x_5020_, 0);
v_isSharedCheck_5032_ = !lean_is_exclusive(v___x_5020_);
if (v_isSharedCheck_5032_ == 0)
{
v___x_5027_ = v___x_5020_;
v_isShared_5028_ = v_isSharedCheck_5032_;
goto v_resetjp_5026_;
}
else
{
lean_inc(v_a_5025_);
lean_dec(v___x_5020_);
v___x_5027_ = lean_box(0);
v_isShared_5028_ = v_isSharedCheck_5032_;
goto v_resetjp_5026_;
}
v_resetjp_5026_:
{
lean_object* v___x_5030_; 
if (v_isShared_5028_ == 0)
{
v___x_5030_ = v___x_5027_;
goto v_reusejp_5029_;
}
else
{
lean_object* v_reuseFailAlloc_5031_; 
v_reuseFailAlloc_5031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5031_, 0, v_a_5025_);
v___x_5030_ = v_reuseFailAlloc_5031_;
goto v_reusejp_5029_;
}
v_reusejp_5029_:
{
return v___x_5030_;
}
}
}
}
}
}
else
{
lean_object* v_a_5034_; lean_object* v___x_5036_; uint8_t v_isShared_5037_; uint8_t v_isSharedCheck_5041_; 
lean_dec_ref(v_arg_5003_);
lean_dec_ref(v_e_4983_);
v_a_5034_ = lean_ctor_get(v___x_5010_, 0);
v_isSharedCheck_5041_ = !lean_is_exclusive(v___x_5010_);
if (v_isSharedCheck_5041_ == 0)
{
v___x_5036_ = v___x_5010_;
v_isShared_5037_ = v_isSharedCheck_5041_;
goto v_resetjp_5035_;
}
else
{
lean_inc(v_a_5034_);
lean_dec(v___x_5010_);
v___x_5036_ = lean_box(0);
v_isShared_5037_ = v_isSharedCheck_5041_;
goto v_resetjp_5035_;
}
v_resetjp_5035_:
{
lean_object* v___x_5039_; 
if (v_isShared_5037_ == 0)
{
v___x_5039_ = v___x_5036_;
goto v_reusejp_5038_;
}
else
{
lean_object* v_reuseFailAlloc_5040_; 
v_reuseFailAlloc_5040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5040_, 0, v_a_5034_);
v___x_5039_ = v_reuseFailAlloc_5040_;
goto v_reusejp_5038_;
}
v_reusejp_5038_:
{
return v___x_5039_;
}
}
}
}
else
{
lean_object* v___x_5042_; 
v___x_5042_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_e_4983_, v_a_4984_, v_a_4985_, v_a_4986_, v_a_4987_, v_a_4988_, v_a_4989_, v_a_4990_, v_a_4991_, v_a_4992_, v_a_4993_);
if (lean_obj_tag(v___x_5042_) == 0)
{
lean_object* v_a_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; 
v_a_5043_ = lean_ctor_get(v___x_5042_, 0);
lean_inc(v_a_5043_);
lean_dec_ref_known(v___x_5042_, 1);
v___x_5044_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotDown___closed__1, &l_Lean_Meta_Grind_propagateBoolNotDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolNotDown___closed__1);
lean_inc_ref(v_arg_5003_);
v___x_5045_ = l_Lean_mkAppB(v___x_5044_, v_arg_5003_, v_a_5043_);
v___x_5046_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_arg_5003_, v___x_5045_, v_a_4984_, v_a_4986_, v_a_4988_, v_a_4990_, v_a_4991_, v_a_4992_, v_a_4993_);
return v___x_5046_;
}
else
{
lean_object* v_a_5047_; lean_object* v___x_5049_; uint8_t v_isShared_5050_; uint8_t v_isSharedCheck_5054_; 
lean_dec_ref(v_arg_5003_);
v_a_5047_ = lean_ctor_get(v___x_5042_, 0);
v_isSharedCheck_5054_ = !lean_is_exclusive(v___x_5042_);
if (v_isSharedCheck_5054_ == 0)
{
v___x_5049_ = v___x_5042_;
v_isShared_5050_ = v_isSharedCheck_5054_;
goto v_resetjp_5048_;
}
else
{
lean_inc(v_a_5047_);
lean_dec(v___x_5042_);
v___x_5049_ = lean_box(0);
v_isShared_5050_ = v_isSharedCheck_5054_;
goto v_resetjp_5048_;
}
v_resetjp_5048_:
{
lean_object* v___x_5052_; 
if (v_isShared_5050_ == 0)
{
v___x_5052_ = v___x_5049_;
goto v_reusejp_5051_;
}
else
{
lean_object* v_reuseFailAlloc_5053_; 
v_reuseFailAlloc_5053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5053_, 0, v_a_5047_);
v___x_5052_ = v_reuseFailAlloc_5053_;
goto v_reusejp_5051_;
}
v_reusejp_5051_:
{
return v___x_5052_;
}
}
}
}
}
else
{
lean_object* v_a_5055_; lean_object* v___x_5057_; uint8_t v_isShared_5058_; uint8_t v_isSharedCheck_5062_; 
lean_dec_ref(v_arg_5003_);
lean_dec_ref(v_e_4983_);
v_a_5055_ = lean_ctor_get(v___x_5007_, 0);
v_isSharedCheck_5062_ = !lean_is_exclusive(v___x_5007_);
if (v_isSharedCheck_5062_ == 0)
{
v___x_5057_ = v___x_5007_;
v_isShared_5058_ = v_isSharedCheck_5062_;
goto v_resetjp_5056_;
}
else
{
lean_inc(v_a_5055_);
lean_dec(v___x_5007_);
v___x_5057_ = lean_box(0);
v_isShared_5058_ = v_isSharedCheck_5062_;
goto v_resetjp_5056_;
}
v_resetjp_5056_:
{
lean_object* v___x_5060_; 
if (v_isShared_5058_ == 0)
{
v___x_5060_ = v___x_5057_;
goto v_reusejp_5059_;
}
else
{
lean_object* v_reuseFailAlloc_5061_; 
v_reuseFailAlloc_5061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5061_, 0, v_a_5055_);
v___x_5060_ = v_reuseFailAlloc_5061_;
goto v_reusejp_5059_;
}
v_reusejp_5059_:
{
return v___x_5060_;
}
}
}
}
else
{
lean_object* v___x_5063_; 
v___x_5063_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_e_4983_, v_a_4984_, v_a_4985_, v_a_4986_, v_a_4987_, v_a_4988_, v_a_4989_, v_a_4990_, v_a_4991_, v_a_4992_, v_a_4993_);
if (lean_obj_tag(v___x_5063_) == 0)
{
lean_object* v_a_5064_; lean_object* v___x_5065_; lean_object* v___x_5066_; lean_object* v___x_5067_; 
v_a_5064_ = lean_ctor_get(v___x_5063_, 0);
lean_inc(v_a_5064_);
lean_dec_ref_known(v___x_5063_, 1);
v___x_5065_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotDown___closed__3, &l_Lean_Meta_Grind_propagateBoolNotDown___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolNotDown___closed__3);
lean_inc_ref(v_arg_5003_);
v___x_5066_ = l_Lean_mkAppB(v___x_5065_, v_arg_5003_, v_a_5064_);
v___x_5067_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_arg_5003_, v___x_5066_, v_a_4984_, v_a_4986_, v_a_4988_, v_a_4990_, v_a_4991_, v_a_4992_, v_a_4993_);
return v___x_5067_;
}
else
{
lean_object* v_a_5068_; lean_object* v___x_5070_; uint8_t v_isShared_5071_; uint8_t v_isSharedCheck_5075_; 
lean_dec_ref(v_arg_5003_);
v_a_5068_ = lean_ctor_get(v___x_5063_, 0);
v_isSharedCheck_5075_ = !lean_is_exclusive(v___x_5063_);
if (v_isSharedCheck_5075_ == 0)
{
v___x_5070_ = v___x_5063_;
v_isShared_5071_ = v_isSharedCheck_5075_;
goto v_resetjp_5069_;
}
else
{
lean_inc(v_a_5068_);
lean_dec(v___x_5063_);
v___x_5070_ = lean_box(0);
v_isShared_5071_ = v_isSharedCheck_5075_;
goto v_resetjp_5069_;
}
v_resetjp_5069_:
{
lean_object* v___x_5073_; 
if (v_isShared_5071_ == 0)
{
v___x_5073_ = v___x_5070_;
goto v_reusejp_5072_;
}
else
{
lean_object* v_reuseFailAlloc_5074_; 
v_reuseFailAlloc_5074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5074_, 0, v_a_5068_);
v___x_5073_ = v_reuseFailAlloc_5074_;
goto v_reusejp_5072_;
}
v_reusejp_5072_:
{
return v___x_5073_;
}
}
}
}
}
else
{
lean_object* v_a_5076_; lean_object* v___x_5078_; uint8_t v_isShared_5079_; uint8_t v_isSharedCheck_5083_; 
lean_dec_ref(v_arg_5003_);
lean_dec_ref(v_e_4983_);
v_a_5076_ = lean_ctor_get(v___x_5004_, 0);
v_isSharedCheck_5083_ = !lean_is_exclusive(v___x_5004_);
if (v_isSharedCheck_5083_ == 0)
{
v___x_5078_ = v___x_5004_;
v_isShared_5079_ = v_isSharedCheck_5083_;
goto v_resetjp_5077_;
}
else
{
lean_inc(v_a_5076_);
lean_dec(v___x_5004_);
v___x_5078_ = lean_box(0);
v_isShared_5079_ = v_isSharedCheck_5083_;
goto v_resetjp_5077_;
}
v_resetjp_5077_:
{
lean_object* v___x_5081_; 
if (v_isShared_5079_ == 0)
{
v___x_5081_ = v___x_5078_;
goto v_reusejp_5080_;
}
else
{
lean_object* v_reuseFailAlloc_5082_; 
v_reuseFailAlloc_5082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5082_, 0, v_a_5076_);
v___x_5081_ = v_reuseFailAlloc_5082_;
goto v_reusejp_5080_;
}
v_reusejp_5080_:
{
return v___x_5081_;
}
}
}
}
}
v___jp_4995_:
{
lean_object* v___x_4996_; lean_object* v___x_4997_; 
v___x_4996_ = lean_box(0);
v___x_4997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4997_, 0, v___x_4996_);
return v___x_4997_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotDown___boxed(lean_object* v_e_5084_, lean_object* v_a_5085_, lean_object* v_a_5086_, lean_object* v_a_5087_, lean_object* v_a_5088_, lean_object* v_a_5089_, lean_object* v_a_5090_, lean_object* v_a_5091_, lean_object* v_a_5092_, lean_object* v_a_5093_, lean_object* v_a_5094_, lean_object* v_a_5095_){
_start:
{
lean_object* v_res_5096_; 
v_res_5096_ = l_Lean_Meta_Grind_propagateBoolNotDown(v_e_5084_, v_a_5085_, v_a_5086_, v_a_5087_, v_a_5088_, v_a_5089_, v_a_5090_, v_a_5091_, v_a_5092_, v_a_5093_, v_a_5094_);
lean_dec(v_a_5094_);
lean_dec_ref(v_a_5093_);
lean_dec(v_a_5092_);
lean_dec_ref(v_a_5091_);
lean_dec(v_a_5090_);
lean_dec_ref(v_a_5089_);
lean_dec(v_a_5088_);
lean_dec_ref(v_a_5087_);
lean_dec(v_a_5086_);
lean_dec(v_a_5085_);
return v_res_5096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotDown___regBuiltin_Lean_Meta_Grind_propagateBoolNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_434325315____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; 
v___x_5098_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBoolNotUp___closed__1));
v___x_5099_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBoolNotDown___boxed), 12, 0);
v___x_5100_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_5098_, v___x_5099_);
return v___x_5100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotDown___regBuiltin_Lean_Meta_Grind_propagateBoolNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_434325315____hygCtx___hyg_9____boxed(lean_object* v_a_5101_){
_start:
{
lean_object* v_res_5102_; 
v_res_5102_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotDown___regBuiltin_Lean_Meta_Grind_propagateBoolNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_434325315____hygCtx___hyg_9_();
return v_res_5102_;
}
}
lean_object* runtime_initialize_Init_Grind(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Ext(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Diseq(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Propagate(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Diseq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndUp___regBuiltin_Lean_Meta_Grind_propagateAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2341738659____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndDown___regBuiltin_Lean_Meta_Grind_propagateAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_976872719____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrUp___regBuiltin_Lean_Meta_Grind_propagateOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3848872352____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrDown___regBuiltin_Lean_Meta_Grind_propagateOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2934405114____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotUp___regBuiltin_Lean_Meta_Grind_propagateNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4175663102____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotDown___regBuiltin_Lean_Meta_Grind_propagateNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3610191934____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqUp___regBuiltin_Lean_Meta_Grind_propagateEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_286357030____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqDown___regBuiltin_Lean_Meta_Grind_propagateEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2318196400____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqUp___regBuiltin_Lean_Meta_Grind_propagateBEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4192136612____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqDown___regBuiltin_Lean_Meta_Grind_propagateBEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1906898770____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqMatchDown___regBuiltin_Lean_Meta_Grind_propagateEqMatchDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4201098355____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqDown___regBuiltin_Lean_Meta_Grind_propagateHEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_735922284____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqUp___regBuiltin_Lean_Meta_Grind_propagateHEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3328109199____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateCond___regBuiltin_Lean_Meta_Grind_propagateCond_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1812125326____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1491137477____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3737351488____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndUp___regBuiltin_Lean_Meta_Grind_propagateBoolAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3683843215____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndDown___regBuiltin_Lean_Meta_Grind_propagateBoolAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2508836509____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrUp___regBuiltin_Lean_Meta_Grind_propagateBoolOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_428936191____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrDown___regBuiltin_Lean_Meta_Grind_propagateBoolOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_201731281____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotUp___regBuiltin_Lean_Meta_Grind_propagateBoolNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1440696379____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotDown___regBuiltin_Lean_Meta_Grind_propagateBoolNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_434325315____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Propagate(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Ext(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Diseq(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Propagate(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Diseq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Propagate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Propagate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Propagate(builtin);
}
#ifdef __cplusplus
}
#endif
