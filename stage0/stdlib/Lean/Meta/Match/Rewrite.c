// Lean compiler output
// Module: Lean.Meta.Match.Rewrite
// Imports: public import Lean.Meta.Tactic.Simp.Types import Lean.Meta.Tactic.Assumption import Lean.Meta.Tactic.Refl import Lean.Meta.Tactic.Simp.Rewrite import Lean.Meta.Decidable
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
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
uint8_t l_Lean_Meta_isMatcherAppCore(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* lean_get_congr_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Simp_isEqnThmHypothesis(lean_object*);
uint8_t l_Lean_Expr_isEq(lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_hrefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_heqOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_rwIfWith___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__0 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__0_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__1 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__1_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__2 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__2_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__2_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__3 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__3_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__4 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__4_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__4_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__5 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__5_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ite_eq_right"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__6 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__6_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__6_value),LEAN_SCALAR_PTR_LITERAL(61, 39, 8, 237, 213, 91, 107, 69)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__7 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__7_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ite_eq_left"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__8 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__8_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__8_value),LEAN_SCALAR_PTR_LITERAL(224, 237, 116, 5, 155, 59, 56, 160)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__9 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__9_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "dite_eq_right"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__10 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__10_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__10_value),LEAN_SCALAR_PTR_LITERAL(138, 158, 15, 234, 166, 144, 231, 97)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__11 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__11_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dite_eq_left"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__12 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__12_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__12_value),LEAN_SCALAR_PTR_LITERAL(239, 169, 41, 13, 119, 67, 249, 86)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__13 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__13_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__14 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__14_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__15 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__15_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__14_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__16_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__15_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__16 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__16_value;
static lean_once_cell_t l_Lean_Meta_rwIfWith___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwIfWith___closed__17;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__18 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__18_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__14_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__19_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__18_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__19 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__19_value;
static lean_once_cell_t l_Lean_Meta_rwIfWith___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwIfWith___closed__20;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "ne_true_of_eq_false"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__21 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__21_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__14_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__22_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__21_value),LEAN_SCALAR_PTR_LITERAL(20, 245, 128, 126, 41, 148, 38, 48)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__22 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__22_value;
static lean_once_cell_t l_Lean_Meta_rwIfWith___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwIfWith___closed__23;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "cond_eq_right"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__24 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__24_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__14_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__25_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__24_value),LEAN_SCALAR_PTR_LITERAL(113, 29, 81, 89, 86, 141, 114, 136)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__25 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__25_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "cond_eq_left"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__26 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__26_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__14_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__27_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__26_value),LEAN_SCALAR_PTR_LITERAL(130, 224, 222, 133, 111, 178, 59, 1)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__27 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__27_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "decide_eq_false"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__28 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__28_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__28_value),LEAN_SCALAR_PTR_LITERAL(22, 178, 65, 13, 177, 234, 203, 63)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__29 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__29_value;
static lean_once_cell_t l_Lean_Meta_rwIfWith___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwIfWith___closed__30;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "decide_eq_true"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__31 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__31_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__31_value),LEAN_SCALAR_PTR_LITERAL(182, 243, 134, 6, 225, 224, 238, 62)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__32 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__32_value;
static lean_once_cell_t l_Lean_Meta_rwIfWith___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwIfWith___closed__33;
LEAN_EXPORT lean_object* l_Lean_Meta_rwIfWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwIfWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_rwMatcher___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "rewriting with "};
static const lean_object* l_Lean_Meta_rwMatcher___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__1___closed__1;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " in"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Failed to resolve `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Failed to discharge `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Could not un-HEq `"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__1;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`:"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__2 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__3;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__4 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__4_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__5;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Not all hypotheses of `"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__6 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__6_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__7;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "` could be discharged: "};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__8 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__8_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__9;
static const lean_array_object l_Lean_Meta_rwMatcher___lam__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__10 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__10_value;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Left-hand side `"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__11 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__11_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__12;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "` of `"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__13 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__13_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__14;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` does not apply to `"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__15 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__15_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__16;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__17 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__17_value;
static const lean_ctor_object l_Lean_Meta_rwMatcher___lam__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__18 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__18_value;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__19 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__19_value;
static const lean_ctor_object l_Lean_Meta_rwMatcher___lam__2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__19_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__20 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__20_value;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Type of `"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__21 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__21_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__22;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "` is not an equality"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__23 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__23_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__24;
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_rwMatcher___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "PSum"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__0 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__0_value;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "casesOn"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__1 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__1_value;
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwMatcher___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 224, 206, 173, 168, 27, 198, 53)}};
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwMatcher___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_rwMatcher___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 115, 173, 38, 27, 113, 160, 8)}};
static const lean_object* l_Lean_Meta_rwMatcher___closed__2 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__2_value;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "PSigma"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__3 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__3_value;
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwMatcher___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 171, 149, 177, 120, 131, 37, 223)}};
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwMatcher___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_rwMatcher___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 129, 3, 119, 45, 252, 168, 83)}};
static const lean_object* l_Lean_Meta_rwMatcher___closed__4 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__4_value;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__5 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__5_value;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Match"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__6 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__6_value;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__7 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__7_value;
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwMatcher___closed__5_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwMatcher___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_rwMatcher___closed__6_value),LEAN_SCALAR_PTR_LITERAL(250, 1, 225, 180, 135, 246, 184, 244)}};
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwMatcher___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_rwMatcher___closed__7_value),LEAN_SCALAR_PTR_LITERAL(253, 56, 25, 25, 156, 146, 62, 130)}};
static const lean_object* l_Lean_Meta_rwMatcher___closed__8 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__8_value;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__9 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__9_value;
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwMatcher___closed__9_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_rwMatcher___closed__10 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__10_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__11;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Not a matcher application:"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__12 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__12_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__13;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "When trying to reduce arm "};
static const lean_object* l_Lean_Meta_rwMatcher___closed__14 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__14_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__15;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ", only "};
static const lean_object* l_Lean_Meta_rwMatcher___closed__16 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__16_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__17;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " equations for "};
static const lean_object* l_Lean_Meta_rwMatcher___closed__18 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__18_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__19;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Failed to apply "};
static const lean_object* l_Lean_Meta_rwMatcher___closed__20 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__20_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__21;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__22 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__22_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__23;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__24;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_rwMatcher___closed__25;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "eqProof has type"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__26 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__26_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__27;
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_rwIfWith___closed__17(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_box(0);
v___x_28_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__16));
v___x_29_ = l_Lean_mkConst(v___x_28_, v___x_27_);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_Meta_rwIfWith___closed__20(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_34_ = lean_box(0);
v___x_35_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__19));
v___x_36_ = l_Lean_mkConst(v___x_35_, v___x_34_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_Meta_rwIfWith___closed__23(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_41_ = lean_box(0);
v___x_42_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__22));
v___x_43_ = l_Lean_mkConst(v___x_42_, v___x_41_);
return v___x_43_;
}
}
static lean_object* _init_l_Lean_Meta_rwIfWith___closed__30(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_55_ = lean_box(0);
v___x_56_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__29));
v___x_57_ = l_Lean_mkConst(v___x_56_, v___x_55_);
return v___x_57_;
}
}
static lean_object* _init_l_Lean_Meta_rwIfWith___closed__33(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = lean_box(0);
v___x_62_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__32));
v___x_63_ = l_Lean_mkConst(v___x_62_, v___x_61_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwIfWith(lean_object* v_hc_64_, lean_object* v_e_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
lean_object* v___x_76_; 
lean_inc_ref(v_e_65_);
v___x_76_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_65_, v_a_67_);
if (lean_obj_tag(v___x_76_) == 0)
{
lean_object* v_a_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v_a_77_ = lean_ctor_get(v___x_76_, 0);
lean_inc(v_a_77_);
lean_dec_ref_known(v___x_76_, 1);
v___x_78_ = l_Lean_Expr_cleanupAnnotations(v_a_77_);
lean_dec(v_a_77_);
v___x_79_ = l_Lean_Expr_isApp(v___x_78_);
if (v___x_79_ == 0)
{
lean_dec_ref(v___x_78_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_80_; uint8_t v___x_81_; 
v___x_80_ = l_Lean_Expr_appFnCleanup___redArg(v___x_78_);
v___x_81_ = l_Lean_Expr_isApp(v___x_80_);
if (v___x_81_ == 0)
{
lean_dec_ref(v___x_80_);
lean_dec_ref(v___x_78_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_82_ = l_Lean_Expr_appFnCleanup___redArg(v___x_80_);
v___x_83_ = l_Lean_Expr_isApp(v___x_82_);
if (v___x_83_ == 0)
{
lean_dec_ref(v___x_82_);
lean_dec_ref(v___x_80_);
lean_dec_ref(v___x_78_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_84_; uint8_t v___x_85_; 
v___x_84_ = l_Lean_Expr_appFnCleanup___redArg(v___x_82_);
v___x_85_ = l_Lean_Expr_isApp(v___x_84_);
if (v___x_85_ == 0)
{
lean_dec_ref(v___x_84_);
lean_dec_ref(v___x_82_);
lean_dec_ref(v___x_80_);
lean_dec_ref(v___x_78_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v_arg_86_; lean_object* v_arg_87_; lean_object* v_arg_88_; lean_object* v_arg_89_; lean_object* v___x_90_; lean_object* v___x_91_; uint8_t v___x_92_; 
v_arg_86_ = lean_ctor_get(v___x_78_, 1);
lean_inc_ref(v_arg_86_);
lean_dec_ref(v___x_78_);
v_arg_87_ = lean_ctor_get(v___x_80_, 1);
lean_inc_ref(v_arg_87_);
lean_dec_ref(v___x_80_);
v_arg_88_ = lean_ctor_get(v___x_82_, 1);
lean_inc_ref(v_arg_88_);
lean_dec_ref(v___x_82_);
v_arg_89_ = lean_ctor_get(v___x_84_, 1);
lean_inc_ref(v_arg_89_);
v___x_90_ = l_Lean_Expr_appFnCleanup___redArg(v___x_84_);
lean_dec_ref(v___x_84_);
v___x_91_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__1));
v___x_92_ = l_Lean_Expr_isConstOf(v___x_90_, v___x_91_);
if (v___x_92_ == 0)
{
uint8_t v___x_93_; 
v___x_93_ = l_Lean_Expr_isApp(v___x_90_);
if (v___x_93_ == 0)
{
lean_dec_ref(v___x_90_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v_arg_94_; lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; 
v_arg_94_ = lean_ctor_get(v___x_90_, 1);
lean_inc_ref(v_arg_94_);
v___x_95_ = l_Lean_Expr_appFnCleanup___redArg(v___x_90_);
lean_dec_ref(v___x_90_);
v___x_96_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__3));
v___x_97_ = l_Lean_Expr_isConstOf(v___x_95_, v___x_96_);
if (v___x_97_ == 0)
{
lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_98_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__5));
v___x_99_ = l_Lean_Expr_isConstOf(v___x_95_, v___x_98_);
if (v___x_99_ == 0)
{
lean_dec_ref(v___x_95_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = l_Lean_Expr_constLevels_x21(v___x_95_);
lean_dec_ref(v___x_95_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_101_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_101_) == 0)
{
lean_object* v_a_102_; lean_object* v___x_103_; 
v_a_102_ = lean_ctor_get(v___x_101_, 0);
lean_inc(v_a_102_);
lean_dec_ref_known(v___x_101_, 1);
lean_inc_ref(v_arg_89_);
v___x_103_ = l_Lean_Meta_isExprDefEq(v_arg_89_, v_a_102_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_103_) == 0)
{
lean_object* v_a_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_169_; 
v_a_104_ = lean_ctor_get(v___x_103_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_103_);
if (v_isSharedCheck_169_ == 0)
{
v___x_106_ = v___x_103_;
v_isShared_107_ = v_isSharedCheck_169_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_a_104_);
lean_dec(v___x_103_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_169_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
uint8_t v___x_108_; 
v___x_108_ = lean_unbox(v_a_104_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; 
lean_del_object(v___x_106_);
lean_dec(v_a_104_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_109_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_109_) == 0)
{
lean_object* v_a_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v_a_110_ = lean_ctor_get(v___x_109_, 0);
lean_inc(v_a_110_);
lean_dec_ref_known(v___x_109_, 1);
lean_inc_ref(v_arg_89_);
v___x_111_ = l_Lean_mkNot(v_arg_89_);
v___x_112_ = l_Lean_Meta_isExprDefEq(v___x_111_, v_a_110_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_112_) == 0)
{
lean_object* v_a_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_135_; 
v_a_113_ = lean_ctor_get(v___x_112_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_112_);
if (v_isSharedCheck_135_ == 0)
{
v___x_115_ = v___x_112_;
v_isShared_116_ = v_isSharedCheck_135_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_a_113_);
lean_dec(v___x_112_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_135_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
uint8_t v___x_117_; 
v___x_117_ = lean_unbox(v_a_113_);
if (v___x_117_ == 0)
{
lean_del_object(v___x_115_);
lean_dec(v_a_113_);
lean_dec(v___x_100_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; uint8_t v___x_131_; lean_object* v___x_133_; 
lean_dec_ref(v_e_65_);
v___x_118_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__7));
v___x_119_ = l_Lean_mkConst(v___x_118_, v___x_100_);
v___x_120_ = lean_unsigned_to_nat(6u);
v___x_121_ = lean_mk_empty_array_with_capacity(v___x_120_);
v___x_122_ = lean_array_push(v___x_121_, v_arg_89_);
v___x_123_ = lean_array_push(v___x_122_, v_arg_88_);
v___x_124_ = lean_array_push(v___x_123_, v_hc_64_);
v___x_125_ = lean_array_push(v___x_124_, v_arg_94_);
v___x_126_ = lean_array_push(v___x_125_, v_arg_87_);
lean_inc_ref(v_arg_86_);
v___x_127_ = lean_array_push(v___x_126_, v_arg_86_);
v___x_128_ = l_Lean_mkAppN(v___x_119_, v___x_127_);
lean_dec_ref(v___x_127_);
v___x_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
v___x_130_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_130_, 0, v_arg_86_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = lean_unbox(v_a_113_);
lean_dec(v_a_113_);
lean_ctor_set_uint8(v___x_130_, sizeof(void*)*2, v___x_131_);
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 0, v___x_130_);
v___x_133_ = v___x_115_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_130_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
}
else
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_143_; 
lean_dec(v___x_100_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_136_ = lean_ctor_get(v___x_112_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_112_);
if (v_isSharedCheck_143_ == 0)
{
v___x_138_ = v___x_112_;
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_112_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_a_136_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
else
{
lean_object* v_a_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_151_; 
lean_dec(v___x_100_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_144_ = lean_ctor_get(v___x_109_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_151_ == 0)
{
v___x_146_ = v___x_109_;
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_a_144_);
lean_dec(v___x_109_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_149_; 
if (v_isShared_147_ == 0)
{
v___x_149_ = v___x_146_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_a_144_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
}
else
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; uint8_t v___x_165_; lean_object* v___x_167_; 
lean_dec_ref(v_e_65_);
v___x_152_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__9));
v___x_153_ = l_Lean_mkConst(v___x_152_, v___x_100_);
v___x_154_ = lean_unsigned_to_nat(6u);
v___x_155_ = lean_mk_empty_array_with_capacity(v___x_154_);
v___x_156_ = lean_array_push(v___x_155_, v_arg_89_);
v___x_157_ = lean_array_push(v___x_156_, v_arg_88_);
v___x_158_ = lean_array_push(v___x_157_, v_hc_64_);
v___x_159_ = lean_array_push(v___x_158_, v_arg_94_);
lean_inc_ref(v_arg_87_);
v___x_160_ = lean_array_push(v___x_159_, v_arg_87_);
v___x_161_ = lean_array_push(v___x_160_, v_arg_86_);
v___x_162_ = l_Lean_mkAppN(v___x_153_, v___x_161_);
lean_dec_ref(v___x_161_);
v___x_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
v___x_164_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_164_, 0, v_arg_87_);
lean_ctor_set(v___x_164_, 1, v___x_163_);
v___x_165_ = lean_unbox(v_a_104_);
lean_dec(v_a_104_);
lean_ctor_set_uint8(v___x_164_, sizeof(void*)*2, v___x_165_);
if (v_isShared_107_ == 0)
{
lean_ctor_set(v___x_106_, 0, v___x_164_);
v___x_167_ = v___x_106_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_164_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
}
else
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
lean_dec(v___x_100_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_170_ = lean_ctor_get(v___x_103_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_103_);
if (v_isSharedCheck_177_ == 0)
{
v___x_172_ = v___x_103_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_103_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_a_170_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
}
else
{
lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_185_; 
lean_dec(v___x_100_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_178_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_185_ == 0)
{
v___x_180_ = v___x_101_;
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_101_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_183_; 
if (v_isShared_181_ == 0)
{
v___x_183_ = v___x_180_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_a_178_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
}
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = l_Lean_Expr_constLevels_x21(v___x_95_);
lean_dec_ref(v___x_95_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_187_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v_a_188_; lean_object* v___x_189_; 
v_a_188_ = lean_ctor_get(v___x_187_, 0);
lean_inc(v_a_188_);
lean_dec_ref_known(v___x_187_, 1);
lean_inc_ref(v_arg_89_);
v___x_189_ = l_Lean_Meta_isExprDefEq(v_arg_89_, v_a_188_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_189_) == 0)
{
lean_object* v_a_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_263_; 
v_a_190_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_263_ == 0)
{
v___x_192_ = v___x_189_;
v_isShared_193_ = v_isSharedCheck_263_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_a_190_);
lean_dec(v___x_189_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_263_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
uint8_t v___x_194_; 
v___x_194_ = lean_unbox(v_a_190_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; 
lean_del_object(v___x_192_);
lean_dec(v_a_190_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_195_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_195_) == 0)
{
lean_object* v_a_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v_a_196_ = lean_ctor_get(v___x_195_, 0);
lean_inc(v_a_196_);
lean_dec_ref_known(v___x_195_, 1);
lean_inc_ref(v_arg_89_);
v___x_197_ = l_Lean_mkNot(v_arg_89_);
v___x_198_ = l_Lean_Meta_isExprDefEq(v___x_197_, v_a_196_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_198_) == 0)
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_225_; 
v_a_199_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_225_ == 0)
{
v___x_201_ = v___x_198_;
v_isShared_202_ = v_isSharedCheck_225_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_198_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_225_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
uint8_t v___x_203_; 
v___x_203_ = lean_unbox(v_a_199_);
if (v___x_203_ == 0)
{
lean_del_object(v___x_201_);
lean_dec(v_a_199_);
lean_dec(v___x_186_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; uint8_t v___x_221_; lean_object* v___x_223_; 
lean_dec_ref(v_e_65_);
v___x_204_ = lean_unsigned_to_nat(1u);
v___x_205_ = lean_mk_empty_array_with_capacity(v___x_204_);
lean_inc_ref(v_hc_64_);
v___x_206_ = lean_array_push(v___x_205_, v_hc_64_);
lean_inc_ref(v_arg_86_);
v___x_207_ = l_Lean_Expr_beta(v_arg_86_, v___x_206_);
v___x_208_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__11));
v___x_209_ = l_Lean_mkConst(v___x_208_, v___x_186_);
v___x_210_ = lean_unsigned_to_nat(6u);
v___x_211_ = lean_mk_empty_array_with_capacity(v___x_210_);
v___x_212_ = lean_array_push(v___x_211_, v_arg_89_);
v___x_213_ = lean_array_push(v___x_212_, v_arg_88_);
v___x_214_ = lean_array_push(v___x_213_, v_hc_64_);
v___x_215_ = lean_array_push(v___x_214_, v_arg_94_);
v___x_216_ = lean_array_push(v___x_215_, v_arg_87_);
v___x_217_ = lean_array_push(v___x_216_, v_arg_86_);
v___x_218_ = l_Lean_mkAppN(v___x_209_, v___x_217_);
lean_dec_ref(v___x_217_);
v___x_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
v___x_220_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_220_, 0, v___x_207_);
lean_ctor_set(v___x_220_, 1, v___x_219_);
v___x_221_ = lean_unbox(v_a_199_);
lean_dec(v_a_199_);
lean_ctor_set_uint8(v___x_220_, sizeof(void*)*2, v___x_221_);
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 0, v___x_220_);
v___x_223_ = v___x_201_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v___x_220_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
}
}
else
{
lean_object* v_a_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_233_; 
lean_dec(v___x_186_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_226_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_233_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_233_ == 0)
{
v___x_228_ = v___x_198_;
v_isShared_229_ = v_isSharedCheck_233_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_a_226_);
lean_dec(v___x_198_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_233_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_231_; 
if (v_isShared_229_ == 0)
{
v___x_231_ = v___x_228_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v_a_226_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
return v___x_231_;
}
}
}
}
else
{
lean_object* v_a_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_241_; 
lean_dec(v___x_186_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_234_ = lean_ctor_get(v___x_195_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_195_);
if (v_isSharedCheck_241_ == 0)
{
v___x_236_ = v___x_195_;
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_a_234_);
lean_dec(v___x_195_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___x_239_; 
if (v_isShared_237_ == 0)
{
v___x_239_ = v___x_236_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_a_234_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
}
}
else
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; lean_object* v___x_261_; 
lean_dec_ref(v_e_65_);
v___x_242_ = lean_unsigned_to_nat(1u);
v___x_243_ = lean_mk_empty_array_with_capacity(v___x_242_);
lean_inc_ref(v_hc_64_);
v___x_244_ = lean_array_push(v___x_243_, v_hc_64_);
lean_inc_ref(v_arg_87_);
v___x_245_ = l_Lean_Expr_beta(v_arg_87_, v___x_244_);
v___x_246_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__13));
v___x_247_ = l_Lean_mkConst(v___x_246_, v___x_186_);
v___x_248_ = lean_unsigned_to_nat(6u);
v___x_249_ = lean_mk_empty_array_with_capacity(v___x_248_);
v___x_250_ = lean_array_push(v___x_249_, v_arg_89_);
v___x_251_ = lean_array_push(v___x_250_, v_arg_88_);
v___x_252_ = lean_array_push(v___x_251_, v_hc_64_);
v___x_253_ = lean_array_push(v___x_252_, v_arg_94_);
v___x_254_ = lean_array_push(v___x_253_, v_arg_87_);
v___x_255_ = lean_array_push(v___x_254_, v_arg_86_);
v___x_256_ = l_Lean_mkAppN(v___x_247_, v___x_255_);
lean_dec_ref(v___x_255_);
v___x_257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
v___x_258_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_258_, 0, v___x_245_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = lean_unbox(v_a_190_);
lean_dec(v_a_190_);
lean_ctor_set_uint8(v___x_258_, sizeof(void*)*2, v___x_259_);
if (v_isShared_193_ == 0)
{
lean_ctor_set(v___x_192_, 0, v___x_258_);
v___x_261_ = v___x_192_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_258_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
else
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
lean_dec(v___x_186_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_264_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_189_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_189_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
}
else
{
lean_object* v_a_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_279_; 
lean_dec(v___x_186_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_272_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_279_ == 0)
{
v___x_274_ = v___x_187_;
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_a_272_);
lean_dec(v___x_187_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_277_; 
if (v_isShared_275_ == 0)
{
v___x_277_ = v___x_274_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_a_272_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
}
}
}
else
{
lean_object* v___x_280_; lean_object* v___y_282_; lean_object* v___y_283_; lean_object* v___y_284_; lean_object* v___y_285_; lean_object* v___x_423_; 
v___x_280_ = l_Lean_Expr_constLevels_x21(v___x_90_);
lean_dec_ref(v___x_90_);
lean_inc_ref(v_arg_88_);
v___x_423_ = l_Lean_Meta_getBoolDecision_x3f(v_arg_88_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_423_) == 0)
{
lean_object* v_a_424_; 
v_a_424_ = lean_ctor_get(v___x_423_, 0);
lean_inc(v_a_424_);
lean_dec_ref_known(v___x_423_, 1);
if (lean_obj_tag(v_a_424_) == 1)
{
lean_object* v_val_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_510_; 
v_val_425_ = lean_ctor_get(v_a_424_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v_a_424_);
if (v_isSharedCheck_510_ == 0)
{
v___x_427_ = v_a_424_;
v_isShared_428_ = v_isSharedCheck_510_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_val_425_);
lean_dec(v_a_424_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_510_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v_fst_429_; lean_object* v_snd_430_; lean_object* v___x_431_; 
v_fst_429_ = lean_ctor_get(v_val_425_, 0);
lean_inc(v_fst_429_);
v_snd_430_ = lean_ctor_get(v_val_425_, 1);
lean_inc(v_snd_430_);
lean_dec(v_val_425_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_431_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v_a_432_; lean_object* v___x_433_; 
v_a_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_a_432_);
lean_dec_ref_known(v___x_431_, 1);
lean_inc(v_fst_429_);
v___x_433_ = l_Lean_Meta_isExprDefEq(v_a_432_, v_fst_429_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_493_; 
v_a_434_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_493_ == 0)
{
v___x_436_ = v___x_433_;
v_isShared_437_ = v_isSharedCheck_493_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_433_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_493_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
uint8_t v___x_438_; 
v___x_438_ = lean_unbox(v_a_434_);
if (v___x_438_ == 0)
{
lean_object* v___x_439_; 
lean_del_object(v___x_436_);
lean_dec(v_a_434_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_439_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_439_) == 0)
{
lean_object* v_a_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v_a_440_ = lean_ctor_get(v___x_439_, 0);
lean_inc(v_a_440_);
lean_dec_ref_known(v___x_439_, 1);
lean_inc(v_fst_429_);
v___x_441_ = l_Lean_mkNot(v_fst_429_);
v___x_442_ = l_Lean_Meta_isExprDefEq(v_a_440_, v___x_441_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_463_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_463_ == 0)
{
v___x_445_ = v___x_442_;
v_isShared_446_ = v_isSharedCheck_463_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_442_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_463_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
uint8_t v___x_447_; 
v___x_447_ = lean_unbox(v_a_443_);
if (v___x_447_ == 0)
{
lean_del_object(v___x_445_);
lean_dec(v_a_443_);
lean_dec(v_snd_430_);
lean_dec(v_fst_429_);
lean_del_object(v___x_427_);
v___y_282_ = v_a_66_;
v___y_283_ = v_a_67_;
v___y_284_ = v_a_68_;
v___y_285_ = v_a_69_;
goto v___jp_281_;
}
else
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_456_; 
lean_dec_ref(v_e_65_);
v___x_448_ = lean_obj_once(&l_Lean_Meta_rwIfWith___closed__30, &l_Lean_Meta_rwIfWith___closed__30_once, _init_l_Lean_Meta_rwIfWith___closed__30);
v___x_449_ = l_Lean_mkApp3(v___x_448_, v_fst_429_, v_snd_430_, v_hc_64_);
v___x_450_ = lean_obj_once(&l_Lean_Meta_rwIfWith___closed__23, &l_Lean_Meta_rwIfWith___closed__23_once, _init_l_Lean_Meta_rwIfWith___closed__23);
lean_inc_ref(v_arg_88_);
v___x_451_ = l_Lean_mkAppB(v___x_450_, v_arg_88_, v___x_449_);
v___x_452_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__25));
v___x_453_ = l_Lean_mkConst(v___x_452_, v___x_280_);
lean_inc_ref(v_arg_86_);
v___x_454_ = l_Lean_mkApp5(v___x_453_, v_arg_89_, v_arg_88_, v___x_451_, v_arg_87_, v_arg_86_);
if (v_isShared_428_ == 0)
{
lean_ctor_set(v___x_427_, 0, v___x_454_);
v___x_456_ = v___x_427_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_454_);
v___x_456_ = v_reuseFailAlloc_462_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
lean_object* v___x_457_; uint8_t v___x_458_; lean_object* v___x_460_; 
v___x_457_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_457_, 0, v_arg_86_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
v___x_458_ = lean_unbox(v_a_443_);
lean_dec(v_a_443_);
lean_ctor_set_uint8(v___x_457_, sizeof(void*)*2, v___x_458_);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 0, v___x_457_);
v___x_460_ = v___x_445_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_457_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
}
else
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
lean_dec(v_snd_430_);
lean_dec(v_fst_429_);
lean_del_object(v___x_427_);
lean_dec(v___x_280_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_464_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_442_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_442_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_469_; 
if (v_isShared_467_ == 0)
{
v___x_469_ = v___x_466_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_464_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
lean_dec(v_snd_430_);
lean_dec(v_fst_429_);
lean_del_object(v___x_427_);
lean_dec(v___x_280_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_472_ = lean_ctor_get(v___x_439_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_439_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_439_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_439_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
else
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_486_; 
lean_dec_ref(v_e_65_);
v___x_480_ = lean_obj_once(&l_Lean_Meta_rwIfWith___closed__33, &l_Lean_Meta_rwIfWith___closed__33_once, _init_l_Lean_Meta_rwIfWith___closed__33);
v___x_481_ = l_Lean_mkApp3(v___x_480_, v_fst_429_, v_snd_430_, v_hc_64_);
v___x_482_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__27));
v___x_483_ = l_Lean_mkConst(v___x_482_, v___x_280_);
lean_inc_ref(v_arg_87_);
v___x_484_ = l_Lean_mkApp5(v___x_483_, v_arg_89_, v_arg_88_, v___x_481_, v_arg_87_, v_arg_86_);
if (v_isShared_428_ == 0)
{
lean_ctor_set(v___x_427_, 0, v___x_484_);
v___x_486_ = v___x_427_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v___x_484_);
v___x_486_ = v_reuseFailAlloc_492_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
lean_object* v___x_487_; uint8_t v___x_488_; lean_object* v___x_490_; 
v___x_487_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_487_, 0, v_arg_87_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
v___x_488_ = lean_unbox(v_a_434_);
lean_dec(v_a_434_);
lean_ctor_set_uint8(v___x_487_, sizeof(void*)*2, v___x_488_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_487_);
v___x_490_ = v___x_436_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v___x_487_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
}
else
{
lean_object* v_a_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_501_; 
lean_dec(v_snd_430_);
lean_dec(v_fst_429_);
lean_del_object(v___x_427_);
lean_dec(v___x_280_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_494_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_501_ == 0)
{
v___x_496_ = v___x_433_;
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_a_494_);
lean_dec(v___x_433_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_a_494_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
else
{
lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_509_; 
lean_dec(v_snd_430_);
lean_dec(v_fst_429_);
lean_del_object(v___x_427_);
lean_dec(v___x_280_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_502_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_509_ == 0)
{
v___x_504_ = v___x_431_;
v_isShared_505_ = v_isSharedCheck_509_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_dec(v___x_431_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_509_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_507_; 
if (v_isShared_505_ == 0)
{
v___x_507_ = v___x_504_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_a_502_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
}
}
}
else
{
lean_dec(v_a_424_);
v___y_282_ = v_a_66_;
v___y_283_ = v_a_67_;
v___y_284_ = v_a_68_;
v___y_285_ = v_a_69_;
goto v___jp_281_;
}
}
else
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
lean_dec(v___x_280_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_511_ = lean_ctor_get(v___x_423_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v___x_423_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_423_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
v___jp_281_:
{
lean_object* v___x_286_; 
lean_inc(v___y_285_);
lean_inc_ref(v___y_284_);
lean_inc(v___y_283_);
lean_inc_ref(v___y_282_);
lean_inc_ref(v_hc_64_);
v___x_286_ = lean_infer_type(v_hc_64_, v___y_282_, v___y_283_, v___y_284_, v___y_285_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v_a_287_ = lean_ctor_get(v___x_286_, 0);
lean_inc(v_a_287_);
lean_dec_ref_known(v___x_286_, 1);
v___x_288_ = lean_obj_once(&l_Lean_Meta_rwIfWith___closed__17, &l_Lean_Meta_rwIfWith___closed__17_once, _init_l_Lean_Meta_rwIfWith___closed__17);
lean_inc_ref(v_arg_88_);
v___x_289_ = l_Lean_Meta_mkEq(v_arg_88_, v___x_288_, v___y_282_, v___y_283_, v___y_284_, v___y_285_);
if (lean_obj_tag(v___x_289_) == 0)
{
lean_object* v_a_290_; lean_object* v___x_291_; 
v_a_290_ = lean_ctor_get(v___x_289_, 0);
lean_inc(v_a_290_);
lean_dec_ref_known(v___x_289_, 1);
v___x_291_ = l_Lean_Meta_isExprDefEq(v_a_287_, v_a_290_, v___y_282_, v___y_283_, v___y_284_, v___y_285_);
if (lean_obj_tag(v___x_291_) == 0)
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_398_; 
v_a_292_ = lean_ctor_get(v___x_291_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_398_ == 0)
{
v___x_294_ = v___x_291_;
v_isShared_295_ = v_isSharedCheck_398_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___x_291_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_398_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
uint8_t v___x_296_; 
v___x_296_ = lean_unbox(v_a_292_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; 
lean_del_object(v___x_294_);
lean_dec(v_a_292_);
lean_inc(v___y_285_);
lean_inc_ref(v___y_284_);
lean_inc(v___y_283_);
lean_inc_ref(v___y_282_);
lean_inc_ref(v_hc_64_);
v___x_297_ = lean_infer_type(v_hc_64_, v___y_282_, v___y_283_, v___y_284_, v___y_285_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v_a_298_; lean_object* v___x_299_; 
v_a_298_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_a_298_);
lean_dec_ref_known(v___x_297_, 1);
lean_inc_ref(v_arg_88_);
v___x_299_ = l_Lean_Meta_mkEq(v_arg_88_, v___x_288_, v___y_282_, v___y_283_, v___y_284_, v___y_285_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v_a_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v_a_300_ = lean_ctor_get(v___x_299_, 0);
lean_inc(v_a_300_);
lean_dec_ref_known(v___x_299_, 1);
v___x_301_ = l_Lean_mkNot(v_a_300_);
v___x_302_ = l_Lean_Meta_isExprDefEq(v_a_298_, v___x_301_, v___y_282_, v___y_283_, v___y_284_, v___y_285_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_364_; 
v_a_303_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_364_ == 0)
{
v___x_305_ = v___x_302_;
v_isShared_306_ = v_isSharedCheck_364_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___x_302_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_364_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
uint8_t v___x_307_; 
v___x_307_ = lean_unbox(v_a_303_);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; 
lean_del_object(v___x_305_);
lean_dec(v_a_303_);
lean_inc(v___y_285_);
lean_inc_ref(v___y_284_);
lean_inc(v___y_283_);
lean_inc_ref(v___y_282_);
lean_inc_ref(v_hc_64_);
v___x_308_ = lean_infer_type(v_hc_64_, v___y_282_, v___y_283_, v___y_284_, v___y_285_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v_a_309_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_a_309_);
lean_dec_ref_known(v___x_308_, 1);
v___x_310_ = lean_obj_once(&l_Lean_Meta_rwIfWith___closed__20, &l_Lean_Meta_rwIfWith___closed__20_once, _init_l_Lean_Meta_rwIfWith___closed__20);
lean_inc_ref(v_arg_88_);
v___x_311_ = l_Lean_Meta_mkEq(v_arg_88_, v___x_310_, v___y_282_, v___y_283_, v___y_284_, v___y_285_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; lean_object* v___x_313_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_a_312_);
lean_dec_ref_known(v___x_311_, 1);
v___x_313_ = l_Lean_Meta_isExprDefEq(v_a_309_, v_a_312_, v___y_282_, v___y_283_, v___y_284_, v___y_285_);
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_330_; 
v_a_314_ = lean_ctor_get(v___x_313_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_330_ == 0)
{
v___x_316_ = v___x_313_;
v_isShared_317_ = v_isSharedCheck_330_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_313_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_330_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
uint8_t v___x_318_; 
v___x_318_ = lean_unbox(v_a_314_);
if (v___x_318_ == 0)
{
lean_del_object(v___x_316_);
lean_dec(v_a_314_);
lean_dec(v___x_280_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; uint8_t v___x_326_; lean_object* v___x_328_; 
lean_dec_ref(v_e_65_);
v___x_319_ = lean_obj_once(&l_Lean_Meta_rwIfWith___closed__23, &l_Lean_Meta_rwIfWith___closed__23_once, _init_l_Lean_Meta_rwIfWith___closed__23);
lean_inc_ref(v_arg_88_);
v___x_320_ = l_Lean_mkAppB(v___x_319_, v_arg_88_, v_hc_64_);
v___x_321_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__25));
v___x_322_ = l_Lean_mkConst(v___x_321_, v___x_280_);
lean_inc_ref(v_arg_86_);
v___x_323_ = l_Lean_mkApp5(v___x_322_, v_arg_89_, v_arg_88_, v___x_320_, v_arg_87_, v_arg_86_);
v___x_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
v___x_325_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_325_, 0, v_arg_86_);
lean_ctor_set(v___x_325_, 1, v___x_324_);
v___x_326_ = lean_unbox(v_a_314_);
lean_dec(v_a_314_);
lean_ctor_set_uint8(v___x_325_, sizeof(void*)*2, v___x_326_);
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 0, v___x_325_);
v___x_328_ = v___x_316_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_325_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
else
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_338_; 
lean_dec(v___x_280_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_331_ = lean_ctor_get(v___x_313_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_338_ == 0)
{
v___x_333_ = v___x_313_;
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_313_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_a_331_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
}
else
{
lean_object* v_a_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_346_; 
lean_dec(v_a_309_);
lean_dec(v___x_280_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_339_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_346_ == 0)
{
v___x_341_ = v___x_311_;
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_a_339_);
lean_dec(v___x_311_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_344_; 
if (v_isShared_342_ == 0)
{
v___x_344_ = v___x_341_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_a_339_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
}
else
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_354_; 
lean_dec(v___x_280_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_347_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_354_ == 0)
{
v___x_349_ = v___x_308_;
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_308_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_352_; 
if (v_isShared_350_ == 0)
{
v___x_352_ = v___x_349_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_a_347_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
else
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; uint8_t v___x_360_; lean_object* v___x_362_; 
lean_dec_ref(v_e_65_);
v___x_355_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__25));
v___x_356_ = l_Lean_mkConst(v___x_355_, v___x_280_);
lean_inc_ref(v_arg_86_);
v___x_357_ = l_Lean_mkApp5(v___x_356_, v_arg_89_, v_arg_88_, v_hc_64_, v_arg_87_, v_arg_86_);
v___x_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
v___x_359_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_359_, 0, v_arg_86_);
lean_ctor_set(v___x_359_, 1, v___x_358_);
v___x_360_ = lean_unbox(v_a_303_);
lean_dec(v_a_303_);
lean_ctor_set_uint8(v___x_359_, sizeof(void*)*2, v___x_360_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_359_);
v___x_362_ = v___x_305_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v___x_359_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
}
else
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_372_; 
lean_dec(v___x_280_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_365_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_372_ == 0)
{
v___x_367_ = v___x_302_;
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_302_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_368_ == 0)
{
v___x_370_ = v___x_367_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_a_365_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
else
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_380_; 
lean_dec(v_a_298_);
lean_dec(v___x_280_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_373_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_380_ == 0)
{
v___x_375_ = v___x_299_;
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_299_);
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
lean_object* v_a_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_388_; 
lean_dec(v___x_280_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_381_ = lean_ctor_get(v___x_297_, 0);
v_isSharedCheck_388_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_388_ == 0)
{
v___x_383_ = v___x_297_;
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_a_381_);
lean_dec(v___x_297_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_386_; 
if (v_isShared_384_ == 0)
{
v___x_386_ = v___x_383_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_a_381_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
}
else
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; uint8_t v___x_394_; lean_object* v___x_396_; 
lean_dec_ref(v_e_65_);
v___x_389_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__27));
v___x_390_ = l_Lean_mkConst(v___x_389_, v___x_280_);
lean_inc_ref(v_arg_87_);
v___x_391_ = l_Lean_mkApp5(v___x_390_, v_arg_89_, v_arg_88_, v_hc_64_, v_arg_87_, v_arg_86_);
v___x_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
v___x_393_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_393_, 0, v_arg_87_);
lean_ctor_set(v___x_393_, 1, v___x_392_);
v___x_394_ = lean_unbox(v_a_292_);
lean_dec(v_a_292_);
lean_ctor_set_uint8(v___x_393_, sizeof(void*)*2, v___x_394_);
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 0, v___x_393_);
v___x_396_ = v___x_294_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v___x_393_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
}
else
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
lean_dec(v___x_280_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_399_ = lean_ctor_get(v___x_291_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_406_ == 0)
{
v___x_401_ = v___x_291_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_291_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_399_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
else
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_414_; 
lean_dec(v_a_287_);
lean_dec(v___x_280_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_407_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_414_ == 0)
{
v___x_409_ = v___x_289_;
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v___x_289_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
if (v_isShared_410_ == 0)
{
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_a_407_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
}
else
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_422_; 
lean_dec(v___x_280_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_415_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_422_ == 0)
{
v___x_417_ = v___x_286_;
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v___x_286_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_420_; 
if (v_isShared_418_ == 0)
{
v___x_420_ = v___x_417_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_a_415_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
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
lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_519_ = lean_ctor_get(v___x_76_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_76_);
if (v_isSharedCheck_526_ == 0)
{
v___x_521_ = v___x_76_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v___x_76_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_a_519_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
v___jp_71_:
{
lean_object* v___x_72_; uint8_t v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_72_ = lean_box(0);
v___x_73_ = 1;
v___x_74_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_74_, 0, v_e_65_);
lean_ctor_set(v___x_74_, 1, v___x_72_);
lean_ctor_set_uint8(v___x_74_, sizeof(void*)*2, v___x_73_);
v___x_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
return v___x_75_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwIfWith___boxed(lean_object* v_hc_527_, lean_object* v_e_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lean_Meta_rwIfWith(v_hc_527_, v_e_528_, v_a_529_, v_a_530_, v_a_531_, v_a_532_);
lean_dec(v_a_532_);
lean_dec_ref(v_a_531_);
lean_dec(v_a_530_);
lean_dec_ref(v_a_529_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg(lean_object* v_e_535_, lean_object* v___y_536_){
_start:
{
lean_object* v___x_538_; lean_object* v_env_539_; uint8_t v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_538_ = lean_st_ref_get(v___y_536_);
v_env_539_ = lean_ctor_get(v___x_538_, 0);
lean_inc_ref(v_env_539_);
lean_dec(v___x_538_);
v___x_540_ = l_Lean_Meta_isMatcherAppCore(v_env_539_, v_e_535_);
v___x_541_ = lean_box(v___x_540_);
v___x_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg___boxed(lean_object* v_e_543_, lean_object* v___y_544_, lean_object* v___y_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg(v_e_543_, v___y_544_);
lean_dec(v___y_544_);
lean_dec_ref(v_e_543_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2(lean_object* v_e_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg(v_e_547_, v___y_551_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___boxed(lean_object* v_e_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2(v_e_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec_ref(v_e_554_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(lean_object* v_e_561_, lean_object* v___y_562_){
_start:
{
uint8_t v___x_564_; 
v___x_564_ = l_Lean_Expr_hasMVar(v_e_561_);
if (v___x_564_ == 0)
{
lean_object* v___x_565_; 
v___x_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_565_, 0, v_e_561_);
return v___x_565_;
}
else
{
lean_object* v___x_566_; lean_object* v_mctx_567_; lean_object* v___x_568_; lean_object* v_fst_569_; lean_object* v_snd_570_; lean_object* v___x_571_; lean_object* v_cache_572_; lean_object* v_zetaDeltaFVarIds_573_; lean_object* v_postponed_574_; lean_object* v_diag_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_584_; 
v___x_566_ = lean_st_ref_get(v___y_562_);
v_mctx_567_ = lean_ctor_get(v___x_566_, 0);
lean_inc_ref(v_mctx_567_);
lean_dec(v___x_566_);
v___x_568_ = l_Lean_instantiateMVarsCore(v_mctx_567_, v_e_561_);
v_fst_569_ = lean_ctor_get(v___x_568_, 0);
lean_inc(v_fst_569_);
v_snd_570_ = lean_ctor_get(v___x_568_, 1);
lean_inc(v_snd_570_);
lean_dec_ref(v___x_568_);
v___x_571_ = lean_st_ref_take(v___y_562_);
v_cache_572_ = lean_ctor_get(v___x_571_, 1);
v_zetaDeltaFVarIds_573_ = lean_ctor_get(v___x_571_, 2);
v_postponed_574_ = lean_ctor_get(v___x_571_, 3);
v_diag_575_ = lean_ctor_get(v___x_571_, 4);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_584_ == 0)
{
lean_object* v_unused_585_; 
v_unused_585_ = lean_ctor_get(v___x_571_, 0);
lean_dec(v_unused_585_);
v___x_577_ = v___x_571_;
v_isShared_578_ = v_isSharedCheck_584_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_diag_575_);
lean_inc(v_postponed_574_);
lean_inc(v_zetaDeltaFVarIds_573_);
lean_inc(v_cache_572_);
lean_dec(v___x_571_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_584_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v_snd_570_);
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_snd_570_);
lean_ctor_set(v_reuseFailAlloc_583_, 1, v_cache_572_);
lean_ctor_set(v_reuseFailAlloc_583_, 2, v_zetaDeltaFVarIds_573_);
lean_ctor_set(v_reuseFailAlloc_583_, 3, v_postponed_574_);
lean_ctor_set(v_reuseFailAlloc_583_, 4, v_diag_575_);
v___x_580_ = v_reuseFailAlloc_583_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_581_ = lean_st_ref_put(v___y_562_, v___x_580_);
v___x_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_582_, 0, v_fst_569_);
return v___x_582_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg___boxed(lean_object* v_e_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v_e_586_, v___y_587_);
lean_dec(v___y_587_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5(lean_object* v_e_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v_e_590_, v___y_592_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___boxed(lean_object* v_e_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5(v_e_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
return v_res_603_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_604_ = lean_unsigned_to_nat(32u);
v___x_605_ = lean_mk_empty_array_with_capacity(v___x_604_);
v___x_606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_606_, 0, v___x_605_);
return v___x_606_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1(void){
_start:
{
size_t v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_607_ = ((size_t)5ULL);
v___x_608_ = lean_unsigned_to_nat(0u);
v___x_609_ = lean_unsigned_to_nat(32u);
v___x_610_ = lean_mk_empty_array_with_capacity(v___x_609_);
v___x_611_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0);
v___x_612_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_612_, 0, v___x_611_);
lean_ctor_set(v___x_612_, 1, v___x_610_);
lean_ctor_set(v___x_612_, 2, v___x_608_);
lean_ctor_set(v___x_612_, 3, v___x_608_);
lean_ctor_set_usize(v___x_612_, 4, v___x_607_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg(lean_object* v___y_613_){
_start:
{
lean_object* v___x_615_; lean_object* v_traceState_616_; lean_object* v_traces_617_; lean_object* v___x_618_; lean_object* v_traceState_619_; lean_object* v_env_620_; lean_object* v_nextMacroScope_621_; lean_object* v_ngen_622_; lean_object* v_auxDeclNGen_623_; lean_object* v_cache_624_; lean_object* v_recordedDeps_625_; lean_object* v_messages_626_; lean_object* v_infoState_627_; lean_object* v_snapshotTasks_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_647_; 
v___x_615_ = lean_st_ref_get(v___y_613_);
v_traceState_616_ = lean_ctor_get(v___x_615_, 4);
lean_inc_ref(v_traceState_616_);
lean_dec(v___x_615_);
v_traces_617_ = lean_ctor_get(v_traceState_616_, 0);
lean_inc_ref(v_traces_617_);
lean_dec_ref(v_traceState_616_);
v___x_618_ = lean_st_ref_take(v___y_613_);
v_traceState_619_ = lean_ctor_get(v___x_618_, 4);
v_env_620_ = lean_ctor_get(v___x_618_, 0);
v_nextMacroScope_621_ = lean_ctor_get(v___x_618_, 1);
v_ngen_622_ = lean_ctor_get(v___x_618_, 2);
v_auxDeclNGen_623_ = lean_ctor_get(v___x_618_, 3);
v_cache_624_ = lean_ctor_get(v___x_618_, 5);
v_recordedDeps_625_ = lean_ctor_get(v___x_618_, 6);
v_messages_626_ = lean_ctor_get(v___x_618_, 7);
v_infoState_627_ = lean_ctor_get(v___x_618_, 8);
v_snapshotTasks_628_ = lean_ctor_get(v___x_618_, 9);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_647_ == 0)
{
v___x_630_ = v___x_618_;
v_isShared_631_ = v_isSharedCheck_647_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_snapshotTasks_628_);
lean_inc(v_infoState_627_);
lean_inc(v_messages_626_);
lean_inc(v_recordedDeps_625_);
lean_inc(v_cache_624_);
lean_inc(v_traceState_619_);
lean_inc(v_auxDeclNGen_623_);
lean_inc(v_ngen_622_);
lean_inc(v_nextMacroScope_621_);
lean_inc(v_env_620_);
lean_dec(v___x_618_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_647_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
uint64_t v_tid_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_645_; 
v_tid_632_ = lean_ctor_get_uint64(v_traceState_619_, sizeof(void*)*1);
v_isSharedCheck_645_ = !lean_is_exclusive(v_traceState_619_);
if (v_isSharedCheck_645_ == 0)
{
lean_object* v_unused_646_; 
v_unused_646_ = lean_ctor_get(v_traceState_619_, 0);
lean_dec(v_unused_646_);
v___x_634_ = v_traceState_619_;
v_isShared_635_ = v_isSharedCheck_645_;
goto v_resetjp_633_;
}
else
{
lean_dec(v_traceState_619_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_645_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; lean_object* v___x_638_; 
v___x_636_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v___x_636_);
v___x_638_ = v___x_634_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v___x_636_);
lean_ctor_set_uint64(v_reuseFailAlloc_644_, sizeof(void*)*1, v_tid_632_);
v___x_638_ = v_reuseFailAlloc_644_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
lean_object* v___x_640_; 
if (v_isShared_631_ == 0)
{
lean_ctor_set(v___x_630_, 4, v___x_638_);
v___x_640_ = v___x_630_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_env_620_);
lean_ctor_set(v_reuseFailAlloc_643_, 1, v_nextMacroScope_621_);
lean_ctor_set(v_reuseFailAlloc_643_, 2, v_ngen_622_);
lean_ctor_set(v_reuseFailAlloc_643_, 3, v_auxDeclNGen_623_);
lean_ctor_set(v_reuseFailAlloc_643_, 4, v___x_638_);
lean_ctor_set(v_reuseFailAlloc_643_, 5, v_cache_624_);
lean_ctor_set(v_reuseFailAlloc_643_, 6, v_recordedDeps_625_);
lean_ctor_set(v_reuseFailAlloc_643_, 7, v_messages_626_);
lean_ctor_set(v_reuseFailAlloc_643_, 8, v_infoState_627_);
lean_ctor_set(v_reuseFailAlloc_643_, 9, v_snapshotTasks_628_);
v___x_640_ = v_reuseFailAlloc_643_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = lean_st_ref_put(v___y_613_, v___x_640_);
v___x_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_642_, 0, v_traces_617_);
return v___x_642_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___boxed(lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg(v___y_648_);
lean_dec(v___y_648_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10(lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg(v___y_654_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___boxed(lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10(v___y_657_, v___y_658_, v___y_659_, v___y_660_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
return v_res_662_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(lean_object* v_opts_663_, lean_object* v_opt_664_){
_start:
{
lean_object* v_name_665_; lean_object* v_defValue_666_; lean_object* v_map_667_; lean_object* v___x_668_; 
v_name_665_ = lean_ctor_get(v_opt_664_, 0);
v_defValue_666_ = lean_ctor_get(v_opt_664_, 1);
v_map_667_ = lean_ctor_get(v_opts_663_, 0);
v___x_668_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_667_, v_name_665_);
if (lean_obj_tag(v___x_668_) == 0)
{
uint8_t v___x_669_; 
v___x_669_ = lean_unbox(v_defValue_666_);
return v___x_669_;
}
else
{
lean_object* v_val_670_; 
v_val_670_ = lean_ctor_get(v___x_668_, 0);
lean_inc(v_val_670_);
lean_dec_ref_known(v___x_668_, 1);
if (lean_obj_tag(v_val_670_) == 1)
{
uint8_t v_v_671_; 
v_v_671_ = lean_ctor_get_uint8(v_val_670_, 0);
lean_dec_ref_known(v_val_670_, 0);
return v_v_671_;
}
else
{
uint8_t v___x_672_; 
lean_dec(v_val_670_);
v___x_672_ = lean_unbox(v_defValue_666_);
return v___x_672_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11___boxed(lean_object* v_opts_673_, lean_object* v_opt_674_){
_start:
{
uint8_t v_res_675_; lean_object* v_r_676_; 
v_res_675_ = l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(v_opts_673_, v_opt_674_);
lean_dec_ref(v_opt_674_);
lean_dec_ref(v_opts_673_);
v_r_676_ = lean_box(v_res_675_);
return v_r_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__0(lean_object* v_e_677_, uint8_t v___x_678_, lean_object* v_____r_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_685_ = lean_box(0);
v___x_686_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_686_, 0, v_e_677_);
lean_ctor_set(v___x_686_, 1, v___x_685_);
lean_ctor_set_uint8(v___x_686_, sizeof(void*)*2, v___x_678_);
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
v___x_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_688_, 0, v___x_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__0___boxed(lean_object* v_e_689_, lean_object* v___x_690_, lean_object* v_____r_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_){
_start:
{
uint8_t v___x_101615__boxed_697_; lean_object* v_res_698_; 
v___x_101615__boxed_697_ = lean_unbox(v___x_690_);
v_res_698_ = l_Lean_Meta_rwMatcher___lam__0(v_e_689_, v___x_101615__boxed_697_, v_____r_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_);
lean_dec(v___y_695_);
lean_dec_ref(v___y_694_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_692_);
return v_res_698_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__1___closed__1(void){
_start:
{
lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_700_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__1___closed__0));
v___x_701_ = l_Lean_stringToMessageData(v___x_700_);
return v___x_701_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__1___closed__3(void){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__1___closed__2));
v___x_704_ = l_Lean_stringToMessageData(v___x_703_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__1(lean_object* v___x_705_, uint8_t v___x_706_, lean_object* v_e_707_, lean_object* v_x_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_714_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__1___closed__1, &l_Lean_Meta_rwMatcher___lam__1___closed__1_once, _init_l_Lean_Meta_rwMatcher___lam__1___closed__1);
v___x_715_ = l_Lean_MessageData_ofConstName(v___x_705_, v___x_706_);
v___x_716_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_716_, 0, v___x_714_);
lean_ctor_set(v___x_716_, 1, v___x_715_);
v___x_717_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__1___closed__3, &l_Lean_Meta_rwMatcher___lam__1___closed__3_once, _init_l_Lean_Meta_rwMatcher___lam__1___closed__3);
v___x_718_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_718_, 0, v___x_716_);
lean_ctor_set(v___x_718_, 1, v___x_717_);
v___x_719_ = l_Lean_indentExpr(v_e_707_);
v___x_720_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_718_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
v___x_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_721_, 0, v___x_720_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__1___boxed(lean_object* v___x_722_, lean_object* v___x_723_, lean_object* v_e_724_, lean_object* v_x_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
uint8_t v___x_101657__boxed_731_; lean_object* v_res_732_; 
v___x_101657__boxed_731_ = lean_unbox(v___x_723_);
v_res_732_ = l_Lean_Meta_rwMatcher___lam__1(v___x_722_, v___x_101657__boxed_731_, v_e_724_, v_x_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
lean_dec_ref(v_x_725_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(lean_object* v_msgData_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
lean_object* v___x_739_; lean_object* v_env_740_; uint8_t v___x_741_; lean_object* v_env_742_; lean_object* v___x_743_; lean_object* v_toCold_744_; lean_object* v_mctx_745_; lean_object* v_lctx_746_; lean_object* v_options_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_739_ = lean_st_ref_get(v___y_737_);
v_env_740_ = lean_ctor_get(v___x_739_, 0);
lean_inc_ref(v_env_740_);
lean_dec(v___x_739_);
v___x_741_ = 0;
v_env_742_ = l_Lean_Environment_setRecordingDeps(v_env_740_, v___x_741_);
v___x_743_ = lean_st_ref_get(v___y_735_);
v_toCold_744_ = lean_ctor_get(v___y_736_, 0);
v_mctx_745_ = lean_ctor_get(v___x_743_, 0);
lean_inc_ref(v_mctx_745_);
lean_dec(v___x_743_);
v_lctx_746_ = lean_ctor_get(v___y_734_, 2);
v_options_747_ = lean_ctor_get(v_toCold_744_, 2);
lean_inc_ref(v_options_747_);
lean_inc_ref(v_lctx_746_);
v___x_748_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_748_, 0, v_env_742_);
lean_ctor_set(v___x_748_, 1, v_mctx_745_);
lean_ctor_set(v___x_748_, 2, v_lctx_746_);
lean_ctor_set(v___x_748_, 3, v_options_747_);
v___x_749_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
lean_ctor_set(v___x_749_, 1, v_msgData_733_);
v___x_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4___boxed(lean_object* v_msgData_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(v_msgData_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(lean_object* v_msg_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
lean_object* v_ref_764_; lean_object* v___x_765_; lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_774_; 
v_ref_764_ = lean_ctor_get(v___y_761_, 2);
v___x_765_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(v_msg_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_);
v_a_766_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_774_ == 0)
{
v___x_768_ = v___x_765_;
v_isShared_769_ = v_isSharedCheck_774_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_765_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_774_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_770_; lean_object* v___x_772_; 
lean_inc(v_ref_764_);
v___x_770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_770_, 0, v_ref_764_);
lean_ctor_set(v___x_770_, 1, v_a_766_);
if (v_isShared_769_ == 0)
{
lean_ctor_set_tag(v___x_768_, 1);
lean_ctor_set(v___x_768_, 0, v___x_770_);
v___x_772_ = v___x_768_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v___x_770_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg___boxed(lean_object* v_msg_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v_msg_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
lean_dec(v___y_779_);
lean_dec_ref(v___y_778_);
lean_dec(v___y_777_);
lean_dec_ref(v___y_776_);
return v_res_781_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg(lean_object* v_keys_782_, lean_object* v_i_783_, lean_object* v_k_784_){
_start:
{
lean_object* v___x_785_; uint8_t v___x_786_; 
v___x_785_ = lean_array_get_size(v_keys_782_);
v___x_786_ = lean_nat_dec_lt(v_i_783_, v___x_785_);
if (v___x_786_ == 0)
{
lean_dec(v_i_783_);
return v___x_786_;
}
else
{
lean_object* v_k_x27_787_; uint8_t v___x_788_; 
v_k_x27_787_ = lean_array_fget_borrowed(v_keys_782_, v_i_783_);
v___x_788_ = l_Lean_instBEqMVarId_beq(v_k_784_, v_k_x27_787_);
if (v___x_788_ == 0)
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = lean_unsigned_to_nat(1u);
v___x_790_ = lean_nat_add(v_i_783_, v___x_789_);
lean_dec(v_i_783_);
v_i_783_ = v___x_790_;
goto _start;
}
else
{
lean_dec(v_i_783_);
return v___x_786_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg___boxed(lean_object* v_keys_792_, lean_object* v_i_793_, lean_object* v_k_794_){
_start:
{
uint8_t v_res_795_; lean_object* v_r_796_; 
v_res_795_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg(v_keys_792_, v_i_793_, v_k_794_);
lean_dec(v_k_794_);
lean_dec_ref(v_keys_792_);
v_r_796_ = lean_box(v_res_795_);
return v_r_796_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg(lean_object* v_x_797_, size_t v_x_798_, lean_object* v_x_799_){
_start:
{
if (lean_obj_tag(v_x_797_) == 0)
{
lean_object* v_es_800_; lean_object* v___x_801_; size_t v___x_802_; size_t v___x_803_; lean_object* v_j_804_; lean_object* v___x_805_; 
v_es_800_ = lean_ctor_get(v_x_797_, 0);
v___x_801_ = lean_box(2);
v___x_802_ = ((size_t)31ULL);
v___x_803_ = lean_usize_land(v_x_798_, v___x_802_);
v_j_804_ = lean_usize_to_nat(v___x_803_);
v___x_805_ = lean_array_get_borrowed(v___x_801_, v_es_800_, v_j_804_);
lean_dec(v_j_804_);
switch(lean_obj_tag(v___x_805_))
{
case 0:
{
lean_object* v_key_806_; uint8_t v___x_807_; 
v_key_806_ = lean_ctor_get(v___x_805_, 0);
v___x_807_ = l_Lean_instBEqMVarId_beq(v_x_799_, v_key_806_);
return v___x_807_;
}
case 1:
{
lean_object* v_node_808_; size_t v___x_809_; size_t v___x_810_; 
v_node_808_ = lean_ctor_get(v___x_805_, 0);
v___x_809_ = ((size_t)5ULL);
v___x_810_ = lean_usize_shift_right(v_x_798_, v___x_809_);
v_x_797_ = v_node_808_;
v_x_798_ = v___x_810_;
goto _start;
}
default: 
{
uint8_t v___x_812_; 
v___x_812_ = 0;
return v___x_812_;
}
}
}
else
{
lean_object* v_ks_813_; lean_object* v___x_814_; uint8_t v___x_815_; 
v_ks_813_ = lean_ctor_get(v_x_797_, 0);
v___x_814_ = lean_unsigned_to_nat(0u);
v___x_815_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg(v_ks_813_, v___x_814_, v_x_799_);
return v___x_815_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg___boxed(lean_object* v_x_816_, lean_object* v_x_817_, lean_object* v_x_818_){
_start:
{
size_t v_x_101778__boxed_819_; uint8_t v_res_820_; lean_object* v_r_821_; 
v_x_101778__boxed_819_ = lean_unbox_usize(v_x_817_);
lean_dec(v_x_817_);
v_res_820_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg(v_x_816_, v_x_101778__boxed_819_, v_x_818_);
lean_dec(v_x_818_);
lean_dec_ref(v_x_816_);
v_r_821_ = lean_box(v_res_820_);
return v_r_821_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg(lean_object* v_x_822_, lean_object* v_x_823_){
_start:
{
uint64_t v___x_824_; size_t v___x_825_; uint8_t v___x_826_; 
v___x_824_ = l_Lean_instHashableMVarId_hash(v_x_823_);
v___x_825_ = lean_uint64_to_usize(v___x_824_);
v___x_826_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg(v_x_822_, v___x_825_, v_x_823_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg___boxed(lean_object* v_x_827_, lean_object* v_x_828_){
_start:
{
uint8_t v_res_829_; lean_object* v_r_830_; 
v_res_829_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg(v_x_827_, v_x_828_);
lean_dec(v_x_828_);
lean_dec_ref(v_x_827_);
v_r_830_ = lean_box(v_res_829_);
return v_r_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(lean_object* v_mvarId_831_, lean_object* v___y_832_){
_start:
{
lean_object* v___x_834_; lean_object* v_mctx_835_; lean_object* v_eAssignment_836_; uint8_t v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_834_ = lean_st_ref_get(v___y_832_);
v_mctx_835_ = lean_ctor_get(v___x_834_, 0);
lean_inc_ref(v_mctx_835_);
lean_dec(v___x_834_);
v_eAssignment_836_ = lean_ctor_get(v_mctx_835_, 8);
lean_inc_ref(v_eAssignment_836_);
lean_dec_ref(v_mctx_835_);
v___x_837_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg(v_eAssignment_836_, v_mvarId_831_);
lean_dec_ref(v_eAssignment_836_);
v___x_838_ = lean_box(v___x_837_);
v___x_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg___boxed(lean_object* v_mvarId_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(v_mvarId_840_, v___y_841_);
lean_dec(v___y_841_);
lean_dec(v_mvarId_840_);
return v_res_843_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1(void){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_845_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__0));
v___x_846_ = l_Lean_stringToMessageData(v___x_845_);
return v___x_846_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3(void){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_848_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__2));
v___x_849_ = l_Lean_stringToMessageData(v___x_848_);
return v___x_849_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5(void){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_851_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__4));
v___x_852_ = l_Lean_stringToMessageData(v___x_851_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(lean_object* v_as_853_, size_t v_sz_854_, size_t v_i_855_, lean_object* v_b_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_a_863_; uint8_t v___x_867_; 
v___x_867_ = lean_usize_dec_lt(v_i_855_, v_sz_854_);
if (v___x_867_ == 0)
{
lean_object* v___x_868_; 
v___x_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_868_, 0, v_b_856_);
return v___x_868_;
}
else
{
lean_object* v___x_869_; lean_object* v_a_870_; lean_object* v___x_871_; 
v___x_869_ = lean_box(0);
v_a_870_ = lean_array_uget_borrowed(v_as_853_, v_i_855_);
v___x_871_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(v_a_870_, v___y_858_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_872_; uint8_t v___x_873_; 
v_a_872_ = lean_ctor_get(v___x_871_, 0);
lean_inc(v_a_872_);
lean_dec_ref_known(v___x_871_, 1);
v___x_873_ = lean_unbox(v_a_872_);
lean_dec(v_a_872_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; 
lean_inc(v_a_870_);
v___x_874_ = l_Lean_MVarId_getType(v_a_870_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
if (lean_obj_tag(v___x_874_) == 0)
{
lean_object* v_a_875_; uint8_t v___x_876_; 
v_a_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc(v_a_875_);
lean_dec_ref_known(v___x_874_, 1);
v___x_876_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v_a_875_);
if (v___x_876_ == 0)
{
uint8_t v___x_877_; 
v___x_877_ = l_Lean_Expr_isEq(v_a_875_);
if (v___x_877_ == 0)
{
uint8_t v___x_878_; 
v___x_878_ = l_Lean_Expr_isHEq(v_a_875_);
lean_dec(v_a_875_);
if (v___x_878_ == 0)
{
v_a_863_ = v___x_869_;
goto v___jp_862_;
}
else
{
lean_object* v___x_879_; 
v___x_879_ = l_Lean_Meta_saveState___redArg(v___y_858_, v___y_860_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; lean_object* v___x_881_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_a_880_);
lean_dec_ref_known(v___x_879_, 1);
lean_inc(v_a_870_);
v___x_881_ = l_Lean_MVarId_assumption(v_a_870_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_dec_ref_known(v___x_881_, 1);
lean_dec(v_a_880_);
v_a_863_ = v___x_869_;
goto v___jp_862_;
}
else
{
lean_object* v_a_882_; uint8_t v___x_883_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
v___x_883_ = l_Lean_Exception_isInterrupt(v_a_882_);
if (v___x_883_ == 0)
{
uint8_t v___x_884_; 
lean_inc(v_a_882_);
v___x_884_ = l_Lean_Exception_isRuntime(v_a_882_);
if (v___x_884_ == 0)
{
lean_object* v___x_885_; 
lean_dec_ref_known(v___x_881_, 1);
v___x_885_ = l_Lean_Meta_SavedState_restore___redArg(v_a_880_, v___y_858_, v___y_860_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v___x_886_; 
lean_dec_ref_known(v___x_885_, 1);
v___x_886_ = l_Lean_Meta_saveState___redArg(v___y_858_, v___y_860_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v_a_887_; lean_object* v___x_888_; 
v_a_887_ = lean_ctor_get(v___x_886_, 0);
lean_inc(v_a_887_);
lean_dec_ref_known(v___x_886_, 1);
lean_inc(v_a_870_);
v___x_888_ = l_Lean_MVarId_hrefl(v_a_870_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_dec_ref_known(v___x_888_, 1);
lean_dec(v_a_887_);
v_a_863_ = v___x_869_;
goto v___jp_862_;
}
else
{
lean_object* v_a_889_; uint8_t v___x_890_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
v___x_890_ = l_Lean_Exception_isInterrupt(v_a_889_);
if (v___x_890_ == 0)
{
uint8_t v___x_891_; 
lean_inc(v_a_889_);
v___x_891_ = l_Lean_Exception_isRuntime(v_a_889_);
if (v___x_891_ == 0)
{
lean_object* v___x_892_; 
lean_dec_ref_known(v___x_888_, 1);
v___x_892_ = l_Lean_Meta_SavedState_restore___redArg(v_a_887_, v___y_858_, v___y_860_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v___x_893_; 
lean_dec_ref_known(v___x_892_, 1);
v___x_893_ = l_Lean_Meta_saveState___redArg(v___y_858_, v___y_860_);
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_927_; 
v_a_894_ = lean_ctor_get(v___x_893_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_927_ == 0)
{
v___x_896_ = v___x_893_;
v_isShared_897_ = v_isSharedCheck_927_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_893_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_927_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v_a_899_; lean_object* v___x_922_; 
lean_inc(v_a_870_);
v___x_922_ = l_Lean_MVarId_heqOfEq(v_a_870_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_924_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_923_);
lean_dec_ref_known(v___x_922_, 1);
v___x_924_ = l_Lean_MVarId_assumption(v_a_923_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
if (lean_obj_tag(v___x_924_) == 0)
{
lean_dec_ref_known(v___x_924_, 1);
lean_del_object(v___x_896_);
lean_dec(v_a_894_);
v_a_863_ = v___x_869_;
goto v___jp_862_;
}
else
{
lean_object* v_a_925_; 
v_a_925_ = lean_ctor_get(v___x_924_, 0);
lean_inc(v_a_925_);
lean_dec_ref_known(v___x_924_, 1);
v_a_899_ = v_a_925_;
goto v___jp_898_;
}
}
else
{
lean_object* v_a_926_; 
v_a_926_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_926_);
lean_dec_ref_known(v___x_922_, 1);
v_a_899_ = v_a_926_;
goto v___jp_898_;
}
v___jp_898_:
{
uint8_t v___x_900_; 
v___x_900_ = l_Lean_Exception_isInterrupt(v_a_899_);
if (v___x_900_ == 0)
{
uint8_t v___x_901_; 
lean_inc_ref(v_a_899_);
v___x_901_ = l_Lean_Exception_isRuntime(v_a_899_);
if (v___x_901_ == 0)
{
lean_object* v___x_902_; 
lean_dec_ref(v_a_899_);
lean_del_object(v___x_896_);
v___x_902_ = l_Lean_Meta_SavedState_restore___redArg(v_a_894_, v___y_858_, v___y_860_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_914_; 
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_914_ == 0)
{
lean_object* v_unused_915_; 
v_unused_915_ = lean_ctor_get(v___x_902_, 0);
lean_dec(v_unused_915_);
v___x_904_ = v___x_902_;
v_isShared_905_ = v_isSharedCheck_914_;
goto v_resetjp_903_;
}
else
{
lean_dec(v___x_902_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_914_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_906_; lean_object* v___x_908_; 
v___x_906_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1);
lean_inc(v_a_870_);
if (v_isShared_905_ == 0)
{
lean_ctor_set_tag(v___x_904_, 1);
lean_ctor_set(v___x_904_, 0, v_a_870_);
v___x_908_ = v___x_904_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_870_);
v___x_908_ = v_reuseFailAlloc_913_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_909_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_909_, 0, v___x_906_);
lean_ctor_set(v___x_909_, 1, v___x_908_);
v___x_910_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_911_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_909_);
lean_ctor_set(v___x_911_, 1, v___x_910_);
v___x_912_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_911_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
if (lean_obj_tag(v___x_912_) == 0)
{
lean_dec_ref_known(v___x_912_, 1);
v_a_863_ = v___x_869_;
goto v___jp_862_;
}
else
{
return v___x_912_;
}
}
}
}
else
{
return v___x_902_;
}
}
else
{
lean_object* v___x_917_; 
lean_dec(v_a_894_);
if (v_isShared_897_ == 0)
{
lean_ctor_set_tag(v___x_896_, 1);
lean_ctor_set(v___x_896_, 0, v_a_899_);
v___x_917_ = v___x_896_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_899_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
else
{
lean_object* v___x_920_; 
lean_dec(v_a_894_);
if (v_isShared_897_ == 0)
{
lean_ctor_set_tag(v___x_896_, 1);
lean_ctor_set(v___x_896_, 0, v_a_899_);
v___x_920_ = v___x_896_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_a_899_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
return v___x_920_;
}
}
}
}
}
else
{
lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_935_; 
v_a_928_ = lean_ctor_get(v___x_893_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_935_ == 0)
{
v___x_930_ = v___x_893_;
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v___x_893_);
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
else
{
return v___x_892_;
}
}
else
{
lean_dec(v_a_887_);
return v___x_888_;
}
}
else
{
lean_dec(v_a_887_);
return v___x_888_;
}
}
}
else
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
v_a_936_ = lean_ctor_get(v___x_886_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_886_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_886_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_939_ == 0)
{
v___x_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_a_936_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
}
else
{
return v___x_885_;
}
}
else
{
lean_dec(v_a_880_);
return v___x_881_;
}
}
else
{
lean_dec(v_a_880_);
return v___x_881_;
}
}
}
else
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
v_a_944_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_879_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_879_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
}
}
else
{
lean_object* v___x_952_; 
lean_dec(v_a_875_);
v___x_952_ = l_Lean_Meta_saveState___redArg(v___y_858_, v___y_860_);
if (lean_obj_tag(v___x_952_) == 0)
{
lean_object* v_a_953_; lean_object* v___x_954_; 
v_a_953_ = lean_ctor_get(v___x_952_, 0);
lean_inc(v_a_953_);
lean_dec_ref_known(v___x_952_, 1);
lean_inc(v_a_870_);
v___x_954_ = l_Lean_MVarId_assumption(v_a_870_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
if (lean_obj_tag(v___x_954_) == 0)
{
lean_dec_ref_known(v___x_954_, 1);
lean_dec(v_a_953_);
v_a_863_ = v___x_869_;
goto v___jp_862_;
}
else
{
lean_object* v_a_955_; uint8_t v___x_956_; 
v_a_955_ = lean_ctor_get(v___x_954_, 0);
v___x_956_ = l_Lean_Exception_isInterrupt(v_a_955_);
if (v___x_956_ == 0)
{
uint8_t v___x_957_; 
lean_inc(v_a_955_);
v___x_957_ = l_Lean_Exception_isRuntime(v_a_955_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; 
lean_dec_ref_known(v___x_954_, 1);
v___x_958_ = l_Lean_Meta_SavedState_restore___redArg(v_a_953_, v___y_858_, v___y_860_);
if (lean_obj_tag(v___x_958_) == 0)
{
lean_object* v___x_959_; 
lean_dec_ref_known(v___x_958_, 1);
v___x_959_ = l_Lean_Meta_saveState___redArg(v___y_858_, v___y_860_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_961_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
lean_inc(v_a_960_);
lean_dec_ref_known(v___x_959_, 1);
lean_inc(v_a_870_);
v___x_961_ = l_Lean_MVarId_refl(v_a_870_, v___x_877_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
if (lean_obj_tag(v___x_961_) == 0)
{
lean_dec_ref_known(v___x_961_, 1);
lean_dec(v_a_960_);
v_a_863_ = v___x_869_;
goto v___jp_862_;
}
else
{
lean_object* v_a_962_; uint8_t v___x_963_; 
v_a_962_ = lean_ctor_get(v___x_961_, 0);
v___x_963_ = l_Lean_Exception_isInterrupt(v_a_962_);
if (v___x_963_ == 0)
{
uint8_t v___x_964_; 
lean_inc(v_a_962_);
v___x_964_ = l_Lean_Exception_isRuntime(v_a_962_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; 
lean_dec_ref_known(v___x_961_, 1);
v___x_965_ = l_Lean_Meta_SavedState_restore___redArg(v_a_960_, v___y_858_, v___y_860_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_977_; 
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_977_ == 0)
{
lean_object* v_unused_978_; 
v_unused_978_ = lean_ctor_get(v___x_965_, 0);
lean_dec(v_unused_978_);
v___x_967_ = v___x_965_;
v_isShared_968_ = v_isSharedCheck_977_;
goto v_resetjp_966_;
}
else
{
lean_dec(v___x_965_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_977_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_969_; lean_object* v___x_971_; 
v___x_969_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1);
lean_inc(v_a_870_);
if (v_isShared_968_ == 0)
{
lean_ctor_set_tag(v___x_967_, 1);
lean_ctor_set(v___x_967_, 0, v_a_870_);
v___x_971_ = v___x_967_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_a_870_);
v___x_971_ = v_reuseFailAlloc_976_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_972_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_972_, 0, v___x_969_);
lean_ctor_set(v___x_972_, 1, v___x_971_);
v___x_973_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_974_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_972_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_974_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_dec_ref_known(v___x_975_, 1);
v_a_863_ = v___x_869_;
goto v___jp_862_;
}
else
{
return v___x_975_;
}
}
}
}
else
{
return v___x_965_;
}
}
else
{
lean_dec(v_a_960_);
return v___x_961_;
}
}
else
{
lean_dec(v_a_960_);
return v___x_961_;
}
}
}
else
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_986_; 
v_a_979_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_986_ == 0)
{
v___x_981_ = v___x_959_;
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v___x_959_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_984_; 
if (v_isShared_982_ == 0)
{
v___x_984_ = v___x_981_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_a_979_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
}
else
{
return v___x_958_;
}
}
else
{
lean_dec(v_a_953_);
return v___x_954_;
}
}
else
{
lean_dec(v_a_953_);
return v___x_954_;
}
}
}
else
{
lean_object* v_a_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_994_; 
v_a_987_ = lean_ctor_get(v___x_952_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_994_ == 0)
{
v___x_989_ = v___x_952_;
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_a_987_);
lean_dec(v___x_952_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_992_; 
if (v_isShared_990_ == 0)
{
v___x_992_ = v___x_989_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_a_987_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
}
}
}
}
}
else
{
lean_object* v___x_995_; 
lean_dec(v_a_875_);
v___x_995_ = l_Lean_Meta_saveState___redArg(v___y_858_, v___y_860_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v_a_996_; lean_object* v___x_997_; 
v_a_996_ = lean_ctor_get(v___x_995_, 0);
lean_inc(v_a_996_);
lean_dec_ref_known(v___x_995_, 1);
lean_inc(v_a_870_);
v___x_997_ = l_Lean_MVarId_assumption(v_a_870_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_dec_ref_known(v___x_997_, 1);
lean_dec(v_a_996_);
v_a_863_ = v___x_869_;
goto v___jp_862_;
}
else
{
lean_object* v_a_998_; uint8_t v___x_999_; 
v_a_998_ = lean_ctor_get(v___x_997_, 0);
v___x_999_ = l_Lean_Exception_isInterrupt(v_a_998_);
if (v___x_999_ == 0)
{
uint8_t v___x_1000_; 
lean_inc(v_a_998_);
v___x_1000_ = l_Lean_Exception_isRuntime(v_a_998_);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; 
lean_dec_ref_known(v___x_997_, 1);
v___x_1001_ = l_Lean_Meta_SavedState_restore___redArg(v_a_996_, v___y_858_, v___y_860_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1013_; 
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1013_ == 0)
{
lean_object* v_unused_1014_; 
v_unused_1014_ = lean_ctor_get(v___x_1001_, 0);
lean_dec(v_unused_1014_);
v___x_1003_ = v___x_1001_;
v_isShared_1004_ = v_isSharedCheck_1013_;
goto v_resetjp_1002_;
}
else
{
lean_dec(v___x_1001_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1013_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1005_; lean_object* v___x_1007_; 
v___x_1005_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5);
lean_inc(v_a_870_);
if (v_isShared_1004_ == 0)
{
lean_ctor_set_tag(v___x_1003_, 1);
lean_ctor_set(v___x_1003_, 0, v_a_870_);
v___x_1007_ = v___x_1003_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_a_870_);
v___x_1007_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1008_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1005_);
lean_ctor_set(v___x_1008_, 1, v___x_1007_);
v___x_1009_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_1010_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1008_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
v___x_1011_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1010_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
if (lean_obj_tag(v___x_1011_) == 0)
{
lean_dec_ref_known(v___x_1011_, 1);
v_a_863_ = v___x_869_;
goto v___jp_862_;
}
else
{
return v___x_1011_;
}
}
}
}
else
{
return v___x_1001_;
}
}
else
{
lean_dec(v_a_996_);
return v___x_997_;
}
}
else
{
lean_dec(v_a_996_);
return v___x_997_;
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
v_a_1015_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v___x_995_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_995_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
}
else
{
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1030_; 
v_a_1023_ = lean_ctor_get(v___x_874_, 0);
v_isSharedCheck_1030_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_1025_ = v___x_874_;
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v___x_874_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1028_; 
if (v_isShared_1026_ == 0)
{
v___x_1028_ = v___x_1025_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v_a_1023_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
}
else
{
v_a_863_ = v___x_869_;
goto v___jp_862_;
}
}
else
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1038_; 
v_a_1031_ = lean_ctor_get(v___x_871_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_871_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1033_ = v___x_871_;
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_871_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1036_; 
if (v_isShared_1034_ == 0)
{
v___x_1036_ = v___x_1033_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_a_1031_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
}
v___jp_862_:
{
size_t v___x_864_; size_t v___x_865_; 
v___x_864_ = ((size_t)1ULL);
v___x_865_ = lean_usize_add(v_i_855_, v___x_864_);
v_i_855_ = v___x_865_;
v_b_856_ = v_a_863_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___boxed(lean_object* v_as_1039_, lean_object* v_sz_1040_, lean_object* v_i_1041_, lean_object* v_b_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
size_t v_sz_boxed_1048_; size_t v_i_boxed_1049_; lean_object* v_res_1050_; 
v_sz_boxed_1048_ = lean_unbox_usize(v_sz_1040_);
lean_dec(v_sz_1040_);
v_i_boxed_1049_ = lean_unbox_usize(v_i_1041_);
lean_dec(v_i_1041_);
v_res_1050_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(v_as_1039_, v_sz_boxed_1048_, v_i_boxed_1049_, v_b_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec_ref(v___y_1043_);
lean_dec_ref(v_as_1039_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(lean_object* v_as_1051_, size_t v_i_1052_, size_t v_stop_1053_, lean_object* v_b_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
lean_object* v_a_1061_; uint8_t v___x_1065_; 
v___x_1065_ = lean_usize_dec_eq(v_i_1052_, v_stop_1053_);
if (v___x_1065_ == 0)
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1066_ = lean_array_uget_borrowed(v_as_1051_, v_i_1052_);
v___x_1067_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(v___x_1066_, v___y_1056_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; uint8_t v___x_1069_; 
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1068_);
lean_dec_ref_known(v___x_1067_, 1);
v___x_1069_ = lean_unbox(v_a_1068_);
lean_dec(v_a_1068_);
if (v___x_1069_ == 0)
{
lean_object* v___x_1070_; 
lean_inc(v___x_1066_);
v___x_1070_ = lean_array_push(v_b_1054_, v___x_1066_);
v_a_1061_ = v___x_1070_;
goto v___jp_1060_;
}
else
{
v_a_1061_ = v_b_1054_;
goto v___jp_1060_;
}
}
else
{
lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1078_; 
lean_dec_ref(v_b_1054_);
v_a_1071_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1073_ = v___x_1067_;
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1067_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1076_; 
if (v_isShared_1074_ == 0)
{
v___x_1076_ = v___x_1073_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_a_1071_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
else
{
lean_object* v___x_1079_; 
v___x_1079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1079_, 0, v_b_1054_);
return v___x_1079_;
}
v___jp_1060_:
{
size_t v___x_1062_; size_t v___x_1063_; 
v___x_1062_ = ((size_t)1ULL);
v___x_1063_ = lean_usize_add(v_i_1052_, v___x_1062_);
v_i_1052_ = v___x_1063_;
v_b_1054_ = v_a_1061_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9___boxed(lean_object* v_as_1080_, lean_object* v_i_1081_, lean_object* v_stop_1082_, lean_object* v_b_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
size_t v_i_boxed_1089_; size_t v_stop_boxed_1090_; lean_object* v_res_1091_; 
v_i_boxed_1089_ = lean_unbox_usize(v_i_1081_);
lean_dec(v_i_1081_);
v_stop_boxed_1090_ = lean_unbox_usize(v_stop_1082_);
lean_dec(v_stop_1082_);
v_res_1091_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(v_as_1080_, v_i_boxed_1089_, v_stop_boxed_1090_, v_b_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec_ref(v_as_1080_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(size_t v_sz_1092_, size_t v_i_1093_, lean_object* v_bs_1094_){
_start:
{
uint8_t v___x_1095_; 
v___x_1095_ = lean_usize_dec_lt(v_i_1093_, v_sz_1092_);
if (v___x_1095_ == 0)
{
return v_bs_1094_;
}
else
{
lean_object* v_v_1096_; lean_object* v___x_1097_; lean_object* v_bs_x27_1098_; lean_object* v___x_1099_; size_t v___x_1100_; size_t v___x_1101_; lean_object* v___x_1102_; 
v_v_1096_ = lean_array_uget(v_bs_1094_, v_i_1093_);
v___x_1097_ = lean_unsigned_to_nat(0u);
v_bs_x27_1098_ = lean_array_uset(v_bs_1094_, v_i_1093_, v___x_1097_);
v___x_1099_ = l_Lean_Expr_mvarId_x21(v_v_1096_);
lean_dec(v_v_1096_);
v___x_1100_ = ((size_t)1ULL);
v___x_1101_ = lean_usize_add(v_i_1093_, v___x_1100_);
v___x_1102_ = lean_array_uset(v_bs_x27_1098_, v_i_1093_, v___x_1099_);
v_i_1093_ = v___x_1101_;
v_bs_1094_ = v___x_1102_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4___boxed(lean_object* v_sz_1104_, lean_object* v_i_1105_, lean_object* v_bs_1106_){
_start:
{
size_t v_sz_boxed_1107_; size_t v_i_boxed_1108_; lean_object* v_res_1109_; 
v_sz_boxed_1107_ = lean_unbox_usize(v_sz_1104_);
lean_dec(v_sz_1104_);
v_i_boxed_1108_ = lean_unbox_usize(v_i_1105_);
lean_dec(v_i_1105_);
v_res_1109_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(v_sz_boxed_1107_, v_i_boxed_1108_, v_bs_1106_);
return v_res_1109_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(lean_object* v_a_1110_, lean_object* v_a_1111_){
_start:
{
if (lean_obj_tag(v_a_1110_) == 0)
{
lean_object* v___x_1112_; 
v___x_1112_ = l_List_reverse___redArg(v_a_1111_);
return v___x_1112_;
}
else
{
lean_object* v_head_1113_; lean_object* v_tail_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1123_; 
v_head_1113_ = lean_ctor_get(v_a_1110_, 0);
v_tail_1114_ = lean_ctor_get(v_a_1110_, 1);
v_isSharedCheck_1123_ = !lean_is_exclusive(v_a_1110_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1116_ = v_a_1110_;
v_isShared_1117_ = v_isSharedCheck_1123_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_tail_1114_);
lean_inc(v_head_1113_);
lean_dec(v_a_1110_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1123_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1118_; lean_object* v___x_1120_; 
v___x_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1118_, 0, v_head_1113_);
if (v_isShared_1117_ == 0)
{
lean_ctor_set(v___x_1116_, 1, v_a_1111_);
lean_ctor_set(v___x_1116_, 0, v___x_1118_);
v___x_1120_ = v___x_1116_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v___x_1118_);
lean_ctor_set(v_reuseFailAlloc_1122_, 1, v_a_1111_);
v___x_1120_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
v_a_1110_ = v_tail_1114_;
v_a_1111_ = v___x_1120_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__0));
v___x_1126_ = l_Lean_stringToMessageData(v___x_1125_);
return v___x_1126_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1128_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__2));
v___x_1129_ = l_Lean_stringToMessageData(v___x_1128_);
return v___x_1129_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__5(void){
_start:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__4));
v___x_1132_ = l_Lean_stringToMessageData(v___x_1131_);
return v___x_1132_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__7(void){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1134_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__6));
v___x_1135_ = l_Lean_stringToMessageData(v___x_1134_);
return v___x_1135_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__9(void){
_start:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1137_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__8));
v___x_1138_ = l_Lean_stringToMessageData(v___x_1137_);
return v___x_1138_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__12(void){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__11));
v___x_1143_ = l_Lean_stringToMessageData(v___x_1142_);
return v___x_1143_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__14(void){
_start:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1145_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__13));
v___x_1146_ = l_Lean_stringToMessageData(v___x_1145_);
return v___x_1146_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__16(void){
_start:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1148_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__15));
v___x_1149_ = l_Lean_stringToMessageData(v___x_1148_);
return v___x_1149_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__22(void){
_start:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1157_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__21));
v___x_1158_ = l_Lean_stringToMessageData(v___x_1157_);
return v___x_1158_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__24(void){
_start:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1160_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__23));
v___x_1161_ = l_Lean_stringToMessageData(v___x_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__2(uint8_t v_hasTrace_1162_, lean_object* v___x_1163_, lean_object* v_fst_1164_, lean_object* v___x_1165_, lean_object* v_e_1166_, uint8_t v___x_1167_, lean_object* v_snd_1168_, lean_object* v_____r_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
lean_object* v___y_1176_; lean_object* v_proof_1177_; lean_object* v___x_1181_; uint8_t v___y_1183_; lean_object* v___y_1184_; lean_object* v___y_1185_; lean_object* v___y_1186_; lean_object* v___y_1187_; lean_object* v___y_1188_; lean_object* v___y_1229_; uint8_t v___y_1230_; lean_object* v___y_1231_; lean_object* v___y_1232_; lean_object* v___y_1233_; lean_object* v___y_1234_; lean_object* v_a_1235_; size_t v_sz_1258_; size_t v___x_1259_; lean_object* v___x_1260_; uint8_t v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1264_; lean_object* v___y_1265_; lean_object* v___y_1266_; lean_object* v___y_1267_; uint8_t v_fst_1295_; lean_object* v_fst_1296_; lean_object* v_snd_1297_; lean_object* v___x_1331_; lean_object* v___x_1332_; uint8_t v___x_1333_; 
v___x_1181_ = l_Lean_mkAppN(v___x_1163_, v_fst_1164_);
v_sz_1258_ = lean_array_size(v_fst_1164_);
v___x_1259_ = ((size_t)0ULL);
v___x_1260_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(v_sz_1258_, v___x_1259_, v_fst_1164_);
v___x_1331_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__18));
v___x_1332_ = lean_unsigned_to_nat(4u);
v___x_1333_ = l_Lean_Expr_isAppOfArity(v_snd_1168_, v___x_1331_, v___x_1332_);
if (v___x_1333_ == 0)
{
lean_object* v___x_1334_; lean_object* v___x_1335_; uint8_t v___x_1336_; 
v___x_1334_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__20));
v___x_1335_ = lean_unsigned_to_nat(3u);
v___x_1336_ = l_Lean_Expr_isAppOfArity(v_snd_1168_, v___x_1334_, v___x_1335_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1350_; 
lean_dec_ref(v___x_1260_);
lean_dec_ref(v___x_1181_);
lean_dec_ref(v_e_1166_);
v___x_1337_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__22, &l_Lean_Meta_rwMatcher___lam__2___closed__22_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__22);
v___x_1338_ = l_Lean_MessageData_ofConstName(v___x_1165_, v___x_1167_);
v___x_1339_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1337_);
lean_ctor_set(v___x_1339_, 1, v___x_1338_);
v___x_1340_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__24, &l_Lean_Meta_rwMatcher___lam__2___closed__24_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__24);
v___x_1341_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1339_);
lean_ctor_set(v___x_1341_, 1, v___x_1340_);
v___x_1342_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1341_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
v_a_1343_ = lean_ctor_get(v___x_1342_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1345_ = v___x_1342_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1342_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_a_1343_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
else
{
lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1351_ = l_Lean_Expr_appFn_x21(v_snd_1168_);
v___x_1352_ = l_Lean_Expr_appArg_x21(v___x_1351_);
lean_dec_ref(v___x_1351_);
v___x_1353_ = l_Lean_Expr_appArg_x21(v_snd_1168_);
v_fst_1295_ = v___x_1167_;
v_fst_1296_ = v___x_1352_;
v_snd_1297_ = v___x_1353_;
goto v___jp_1294_;
}
}
else
{
lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1354_ = l_Lean_Expr_appFn_x21(v_snd_1168_);
v___x_1355_ = l_Lean_Expr_appFn_x21(v___x_1354_);
lean_dec_ref(v___x_1354_);
v___x_1356_ = l_Lean_Expr_appArg_x21(v___x_1355_);
lean_dec_ref(v___x_1355_);
v___x_1357_ = l_Lean_Expr_appArg_x21(v_snd_1168_);
v_fst_1295_ = v_hasTrace_1162_;
v_fst_1296_ = v___x_1356_;
v_snd_1297_ = v___x_1357_;
goto v___jp_1294_;
}
v___jp_1175_:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1178_, 0, v_proof_1177_);
v___x_1179_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1179_, 0, v___y_1176_);
lean_ctor_set(v___x_1179_, 1, v___x_1178_);
lean_ctor_set_uint8(v___x_1179_, sizeof(void*)*2, v_hasTrace_1162_);
v___x_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1179_);
return v___x_1180_;
}
v___jp_1182_:
{
lean_object* v___x_1189_; lean_object* v_a_1190_; lean_object* v___x_1191_; 
v___x_1189_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___y_1184_, v___y_1186_);
v_a_1190_ = lean_ctor_get(v___x_1189_, 0);
lean_inc(v_a_1190_);
lean_dec_ref(v___x_1189_);
v___x_1191_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___x_1181_, v___y_1186_);
if (v___y_1183_ == 0)
{
lean_object* v_a_1192_; 
v_a_1192_ = lean_ctor_get(v___x_1191_, 0);
lean_inc(v_a_1192_);
lean_dec_ref(v___x_1191_);
v___y_1176_ = v_a_1190_;
v_proof_1177_ = v_a_1192_;
goto v___jp_1175_;
}
else
{
lean_object* v_a_1193_; lean_object* v___x_1194_; 
v_a_1193_ = lean_ctor_get(v___x_1191_, 0);
lean_inc_n(v_a_1193_, 2);
lean_dec_ref(v___x_1191_);
v___x_1194_ = l_Lean_Meta_mkEqOfHEq(v_a_1193_, v___y_1183_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_);
if (lean_obj_tag(v___x_1194_) == 0)
{
lean_object* v_a_1195_; 
lean_dec(v_a_1193_);
v_a_1195_ = lean_ctor_get(v___x_1194_, 0);
lean_inc(v_a_1195_);
lean_dec_ref_known(v___x_1194_, 1);
v___y_1176_ = v_a_1190_;
v_proof_1177_ = v_a_1195_;
goto v___jp_1175_;
}
else
{
lean_object* v_a_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1227_; 
lean_dec(v_a_1190_);
v_a_1196_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1198_ = v___x_1194_;
v_isShared_1199_ = v_isSharedCheck_1227_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_a_1196_);
lean_dec(v___x_1194_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1227_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
uint8_t v___x_1200_; 
v___x_1200_ = l_Lean_Exception_isInterrupt(v_a_1196_);
if (v___x_1200_ == 0)
{
uint8_t v___x_1201_; 
lean_inc(v_a_1196_);
v___x_1201_ = l_Lean_Exception_isRuntime(v_a_1196_);
if (v___x_1201_ == 0)
{
lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v_a_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1220_; 
lean_del_object(v___x_1198_);
v___x_1202_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__1, &l_Lean_Meta_rwMatcher___lam__2___closed__1_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__1);
v___x_1203_ = l_Lean_MessageData_ofExpr(v_a_1193_);
v___x_1204_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1204_, 0, v___x_1202_);
lean_ctor_set(v___x_1204_, 1, v___x_1203_);
v___x_1205_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__3, &l_Lean_Meta_rwMatcher___lam__2___closed__3_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__3);
v___x_1206_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1204_);
lean_ctor_set(v___x_1206_, 1, v___x_1205_);
v___x_1207_ = l_Lean_Exception_toMessageData(v_a_1196_);
v___x_1208_ = l_Lean_indentD(v___x_1207_);
v___x_1209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1206_);
lean_ctor_set(v___x_1209_, 1, v___x_1208_);
v___x_1210_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__5, &l_Lean_Meta_rwMatcher___lam__2___closed__5_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__5);
v___x_1211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1209_);
lean_ctor_set(v___x_1211_, 1, v___x_1210_);
v___x_1212_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1211_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_);
v_a_1213_ = lean_ctor_get(v___x_1212_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1212_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1215_ = v___x_1212_;
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_a_1213_);
lean_dec(v___x_1212_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1218_; 
if (v_isShared_1216_ == 0)
{
v___x_1218_ = v___x_1215_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_a_1213_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
else
{
lean_object* v___x_1222_; 
lean_dec(v_a_1193_);
if (v_isShared_1199_ == 0)
{
v___x_1222_ = v___x_1198_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1196_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
else
{
lean_object* v___x_1225_; 
lean_dec(v_a_1193_);
if (v_isShared_1199_ == 0)
{
v___x_1225_ = v___x_1198_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_a_1196_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
}
}
}
v___jp_1228_:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; uint8_t v___x_1238_; 
v___x_1236_ = lean_array_get_size(v_a_1235_);
v___x_1237_ = lean_unsigned_to_nat(0u);
v___x_1238_ = lean_nat_dec_eq(v___x_1236_, v___x_1237_);
if (v___x_1238_ == 0)
{
lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
lean_dec_ref(v___y_1234_);
lean_dec_ref(v___x_1181_);
v___x_1239_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__7, &l_Lean_Meta_rwMatcher___lam__2___closed__7_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__7);
v___x_1240_ = l_Lean_MessageData_ofConstName(v___x_1165_, v___x_1238_);
v___x_1241_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1239_);
lean_ctor_set(v___x_1241_, 1, v___x_1240_);
v___x_1242_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__9, &l_Lean_Meta_rwMatcher___lam__2___closed__9_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__9);
v___x_1243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1241_);
lean_ctor_set(v___x_1243_, 1, v___x_1242_);
v___x_1244_ = lean_array_to_list(v_a_1235_);
v___x_1245_ = lean_box(0);
v___x_1246_ = l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(v___x_1244_, v___x_1245_);
v___x_1247_ = l_Lean_MessageData_ofList(v___x_1246_);
v___x_1248_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1243_);
lean_ctor_set(v___x_1248_, 1, v___x_1247_);
v___x_1249_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1248_, v___y_1233_, v___y_1229_, v___y_1232_, v___y_1231_);
v_a_1250_ = lean_ctor_get(v___x_1249_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1252_ = v___x_1249_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1249_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_a_1250_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
else
{
lean_dec_ref(v_a_1235_);
lean_dec(v___x_1165_);
v___y_1183_ = v___y_1230_;
v___y_1184_ = v___y_1234_;
v___y_1185_ = v___y_1233_;
v___y_1186_ = v___y_1229_;
v___y_1187_ = v___y_1232_;
v___y_1188_ = v___y_1231_;
goto v___jp_1182_;
}
}
v___jp_1261_:
{
lean_object* v___x_1268_; size_t v_sz_1269_; lean_object* v___x_1270_; 
v___x_1268_ = lean_box(0);
v_sz_1269_ = lean_array_size(v___x_1260_);
v___x_1270_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(v___x_1260_, v_sz_1269_, v___x_1259_, v___x_1268_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_);
if (lean_obj_tag(v___x_1270_) == 0)
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; uint8_t v___x_1274_; 
lean_dec_ref_known(v___x_1270_, 1);
v___x_1271_ = lean_unsigned_to_nat(0u);
v___x_1272_ = lean_array_get_size(v___x_1260_);
v___x_1273_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__10));
v___x_1274_ = lean_nat_dec_lt(v___x_1271_, v___x_1272_);
if (v___x_1274_ == 0)
{
lean_dec_ref(v___x_1260_);
v___y_1229_ = v___y_1265_;
v___y_1230_ = v___y_1262_;
v___y_1231_ = v___y_1267_;
v___y_1232_ = v___y_1266_;
v___y_1233_ = v___y_1264_;
v___y_1234_ = v___y_1263_;
v_a_1235_ = v___x_1273_;
goto v___jp_1228_;
}
else
{
size_t v___x_1275_; lean_object* v___x_1276_; 
v___x_1275_ = lean_usize_of_nat(v___x_1272_);
v___x_1276_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(v___x_1260_, v___x_1259_, v___x_1275_, v___x_1273_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_);
lean_dec_ref(v___x_1260_);
if (lean_obj_tag(v___x_1276_) == 0)
{
lean_object* v_a_1277_; 
v_a_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_a_1277_);
lean_dec_ref_known(v___x_1276_, 1);
v___y_1229_ = v___y_1265_;
v___y_1230_ = v___y_1262_;
v___y_1231_ = v___y_1267_;
v___y_1232_ = v___y_1266_;
v___y_1233_ = v___y_1264_;
v___y_1234_ = v___y_1263_;
v_a_1235_ = v_a_1277_;
goto v___jp_1228_;
}
else
{
lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
lean_dec_ref(v___y_1263_);
lean_dec_ref(v___x_1181_);
lean_dec(v___x_1165_);
v_a_1278_ = lean_ctor_get(v___x_1276_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1276_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1276_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1276_);
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
}
else
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1293_; 
lean_dec_ref(v___y_1263_);
lean_dec_ref(v___x_1260_);
lean_dec_ref(v___x_1181_);
lean_dec(v___x_1165_);
v_a_1286_ = lean_ctor_get(v___x_1270_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1270_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1288_ = v___x_1270_;
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1270_);
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
}
v___jp_1294_:
{
lean_object* v___x_1298_; 
lean_inc_ref(v_fst_1296_);
lean_inc_ref(v_e_1166_);
v___x_1298_ = l_Lean_Meta_isExprDefEq(v_e_1166_, v_fst_1296_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v_a_1299_; uint8_t v___x_1300_; 
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
lean_inc(v_a_1299_);
lean_dec_ref_known(v___x_1298_, 1);
v___x_1300_ = lean_unbox(v_a_1299_);
lean_dec(v_a_1299_);
if (v___x_1300_ == 0)
{
lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v_a_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1322_; 
lean_dec_ref(v_snd_1297_);
lean_dec_ref(v___x_1260_);
lean_dec_ref(v___x_1181_);
v___x_1301_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__12, &l_Lean_Meta_rwMatcher___lam__2___closed__12_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__12);
v___x_1302_ = l_Lean_MessageData_ofExpr(v_fst_1296_);
v___x_1303_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1301_);
lean_ctor_set(v___x_1303_, 1, v___x_1302_);
v___x_1304_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__14, &l_Lean_Meta_rwMatcher___lam__2___closed__14_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__14);
v___x_1305_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1303_);
lean_ctor_set(v___x_1305_, 1, v___x_1304_);
v___x_1306_ = l_Lean_MessageData_ofConstName(v___x_1165_, v___x_1167_);
v___x_1307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1305_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
v___x_1308_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__16, &l_Lean_Meta_rwMatcher___lam__2___closed__16_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__16);
v___x_1309_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1309_, 0, v___x_1307_);
lean_ctor_set(v___x_1309_, 1, v___x_1308_);
v___x_1310_ = l_Lean_MessageData_ofExpr(v_e_1166_);
v___x_1311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1309_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
v___x_1312_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_1313_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1311_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
v___x_1314_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1313_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
v_a_1315_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1322_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1322_ == 0)
{
v___x_1317_ = v___x_1314_;
v_isShared_1318_ = v_isSharedCheck_1322_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_a_1315_);
lean_dec(v___x_1314_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1322_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1320_; 
if (v_isShared_1318_ == 0)
{
v___x_1320_ = v___x_1317_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v_a_1315_);
v___x_1320_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
return v___x_1320_;
}
}
}
else
{
lean_dec_ref(v_fst_1296_);
lean_dec_ref(v_e_1166_);
v___y_1262_ = v_fst_1295_;
v___y_1263_ = v_snd_1297_;
v___y_1264_ = v___y_1170_;
v___y_1265_ = v___y_1171_;
v___y_1266_ = v___y_1172_;
v___y_1267_ = v___y_1173_;
goto v___jp_1261_;
}
}
else
{
lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1330_; 
lean_dec_ref(v_snd_1297_);
lean_dec_ref(v_fst_1296_);
lean_dec_ref(v___x_1260_);
lean_dec_ref(v___x_1181_);
lean_dec_ref(v_e_1166_);
lean_dec(v___x_1165_);
v_a_1323_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1325_ = v___x_1298_;
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1298_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1328_; 
if (v_isShared_1326_ == 0)
{
v___x_1328_ = v___x_1325_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_a_1323_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__2___boxed(lean_object* v_hasTrace_1358_, lean_object* v___x_1359_, lean_object* v_fst_1360_, lean_object* v___x_1361_, lean_object* v_e_1362_, lean_object* v___x_1363_, lean_object* v_snd_1364_, lean_object* v_____r_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
uint8_t v_hasTrace_boxed_1371_; uint8_t v___x_102450__boxed_1372_; lean_object* v_res_1373_; 
v_hasTrace_boxed_1371_ = lean_unbox(v_hasTrace_1358_);
v___x_102450__boxed_1372_ = lean_unbox(v___x_1363_);
v_res_1373_ = l_Lean_Meta_rwMatcher___lam__2(v_hasTrace_boxed_1371_, v___x_1359_, v_fst_1360_, v___x_1361_, v_e_1362_, v___x_102450__boxed_1372_, v_snd_1364_, v_____r_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec_ref(v_snd_1364_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__3(uint8_t v___x_1374_, lean_object* v___x_1375_, lean_object* v_fst_1376_, lean_object* v___x_1377_, lean_object* v_e_1378_, uint8_t v___x_1379_, lean_object* v_snd_1380_, lean_object* v_____r_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
lean_object* v___y_1388_; lean_object* v_proof_1389_; lean_object* v___x_1393_; uint8_t v___y_1395_; lean_object* v___y_1396_; lean_object* v___y_1397_; lean_object* v___y_1398_; lean_object* v___y_1399_; lean_object* v___y_1400_; lean_object* v___y_1441_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; uint8_t v___y_1445_; lean_object* v___y_1446_; lean_object* v_a_1447_; size_t v_sz_1470_; size_t v___x_1471_; lean_object* v___x_1472_; uint8_t v___y_1474_; lean_object* v___y_1475_; lean_object* v___y_1476_; lean_object* v___y_1477_; lean_object* v___y_1478_; lean_object* v___y_1479_; uint8_t v_fst_1507_; lean_object* v_fst_1508_; lean_object* v_snd_1509_; lean_object* v___x_1543_; lean_object* v___x_1544_; uint8_t v___x_1545_; 
v___x_1393_ = l_Lean_mkAppN(v___x_1375_, v_fst_1376_);
v_sz_1470_ = lean_array_size(v_fst_1376_);
v___x_1471_ = ((size_t)0ULL);
v___x_1472_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(v_sz_1470_, v___x_1471_, v_fst_1376_);
v___x_1543_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__18));
v___x_1544_ = lean_unsigned_to_nat(4u);
v___x_1545_ = l_Lean_Expr_isAppOfArity(v_snd_1380_, v___x_1543_, v___x_1544_);
if (v___x_1545_ == 0)
{
lean_object* v___x_1546_; lean_object* v___x_1547_; uint8_t v___x_1548_; 
v___x_1546_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__20));
v___x_1547_ = lean_unsigned_to_nat(3u);
v___x_1548_ = l_Lean_Expr_isAppOfArity(v_snd_1380_, v___x_1546_, v___x_1547_);
if (v___x_1548_ == 0)
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v_a_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1562_; 
lean_dec_ref(v___x_1472_);
lean_dec_ref(v___x_1393_);
lean_dec_ref(v_e_1378_);
v___x_1549_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__22, &l_Lean_Meta_rwMatcher___lam__2___closed__22_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__22);
v___x_1550_ = l_Lean_MessageData_ofConstName(v___x_1377_, v___x_1379_);
v___x_1551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1549_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
v___x_1552_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__24, &l_Lean_Meta_rwMatcher___lam__2___closed__24_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__24);
v___x_1553_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1551_);
lean_ctor_set(v___x_1553_, 1, v___x_1552_);
v___x_1554_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1553_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_);
v_a_1555_ = lean_ctor_get(v___x_1554_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1554_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1557_ = v___x_1554_;
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_a_1555_);
lean_dec(v___x_1554_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v___x_1560_; 
if (v_isShared_1558_ == 0)
{
v___x_1560_ = v___x_1557_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v_a_1555_);
v___x_1560_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
return v___x_1560_;
}
}
}
else
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1563_ = l_Lean_Expr_appFn_x21(v_snd_1380_);
v___x_1564_ = l_Lean_Expr_appArg_x21(v___x_1563_);
lean_dec_ref(v___x_1563_);
v___x_1565_ = l_Lean_Expr_appArg_x21(v_snd_1380_);
v_fst_1507_ = v___x_1379_;
v_fst_1508_ = v___x_1564_;
v_snd_1509_ = v___x_1565_;
goto v___jp_1506_;
}
}
else
{
lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1566_ = l_Lean_Expr_appFn_x21(v_snd_1380_);
v___x_1567_ = l_Lean_Expr_appFn_x21(v___x_1566_);
lean_dec_ref(v___x_1566_);
v___x_1568_ = l_Lean_Expr_appArg_x21(v___x_1567_);
lean_dec_ref(v___x_1567_);
v___x_1569_ = l_Lean_Expr_appArg_x21(v_snd_1380_);
v_fst_1507_ = v___x_1374_;
v_fst_1508_ = v___x_1568_;
v_snd_1509_ = v___x_1569_;
goto v___jp_1506_;
}
v___jp_1387_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1390_, 0, v_proof_1389_);
v___x_1391_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1391_, 0, v___y_1388_);
lean_ctor_set(v___x_1391_, 1, v___x_1390_);
lean_ctor_set_uint8(v___x_1391_, sizeof(void*)*2, v___x_1374_);
v___x_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1391_);
return v___x_1392_;
}
v___jp_1394_:
{
lean_object* v___x_1401_; lean_object* v_a_1402_; lean_object* v___x_1403_; 
v___x_1401_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___y_1396_, v___y_1398_);
v_a_1402_ = lean_ctor_get(v___x_1401_, 0);
lean_inc(v_a_1402_);
lean_dec_ref(v___x_1401_);
v___x_1403_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___x_1393_, v___y_1398_);
if (v___y_1395_ == 0)
{
lean_object* v_a_1404_; 
v_a_1404_ = lean_ctor_get(v___x_1403_, 0);
lean_inc(v_a_1404_);
lean_dec_ref(v___x_1403_);
v___y_1388_ = v_a_1402_;
v_proof_1389_ = v_a_1404_;
goto v___jp_1387_;
}
else
{
lean_object* v_a_1405_; lean_object* v___x_1406_; 
v_a_1405_ = lean_ctor_get(v___x_1403_, 0);
lean_inc_n(v_a_1405_, 2);
lean_dec_ref(v___x_1403_);
v___x_1406_ = l_Lean_Meta_mkEqOfHEq(v_a_1405_, v___y_1395_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
if (lean_obj_tag(v___x_1406_) == 0)
{
lean_object* v_a_1407_; 
lean_dec(v_a_1405_);
v_a_1407_ = lean_ctor_get(v___x_1406_, 0);
lean_inc(v_a_1407_);
lean_dec_ref_known(v___x_1406_, 1);
v___y_1388_ = v_a_1402_;
v_proof_1389_ = v_a_1407_;
goto v___jp_1387_;
}
else
{
lean_object* v_a_1408_; lean_object* v___x_1410_; uint8_t v_isShared_1411_; uint8_t v_isSharedCheck_1439_; 
lean_dec(v_a_1402_);
v_a_1408_ = lean_ctor_get(v___x_1406_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1406_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1410_ = v___x_1406_;
v_isShared_1411_ = v_isSharedCheck_1439_;
goto v_resetjp_1409_;
}
else
{
lean_inc(v_a_1408_);
lean_dec(v___x_1406_);
v___x_1410_ = lean_box(0);
v_isShared_1411_ = v_isSharedCheck_1439_;
goto v_resetjp_1409_;
}
v_resetjp_1409_:
{
uint8_t v___x_1412_; 
v___x_1412_ = l_Lean_Exception_isInterrupt(v_a_1408_);
if (v___x_1412_ == 0)
{
uint8_t v___x_1413_; 
lean_inc(v_a_1408_);
v___x_1413_ = l_Lean_Exception_isRuntime(v_a_1408_);
if (v___x_1413_ == 0)
{
lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1432_; 
lean_del_object(v___x_1410_);
v___x_1414_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__1, &l_Lean_Meta_rwMatcher___lam__2___closed__1_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__1);
v___x_1415_ = l_Lean_MessageData_ofExpr(v_a_1405_);
v___x_1416_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1414_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__3, &l_Lean_Meta_rwMatcher___lam__2___closed__3_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__3);
v___x_1418_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1418_, 0, v___x_1416_);
lean_ctor_set(v___x_1418_, 1, v___x_1417_);
v___x_1419_ = l_Lean_Exception_toMessageData(v_a_1408_);
v___x_1420_ = l_Lean_indentD(v___x_1419_);
v___x_1421_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1418_);
lean_ctor_set(v___x_1421_, 1, v___x_1420_);
v___x_1422_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__5, &l_Lean_Meta_rwMatcher___lam__2___closed__5_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__5);
v___x_1423_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1421_);
lean_ctor_set(v___x_1423_, 1, v___x_1422_);
v___x_1424_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1423_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1432_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1432_ == 0)
{
v___x_1427_ = v___x_1424_;
v_isShared_1428_ = v_isSharedCheck_1432_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1424_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1432_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v___x_1430_; 
if (v_isShared_1428_ == 0)
{
v___x_1430_ = v___x_1427_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v_a_1425_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
}
}
}
else
{
lean_object* v___x_1434_; 
lean_dec(v_a_1405_);
if (v_isShared_1411_ == 0)
{
v___x_1434_ = v___x_1410_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_a_1408_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
else
{
lean_object* v___x_1437_; 
lean_dec(v_a_1405_);
if (v_isShared_1411_ == 0)
{
v___x_1437_ = v___x_1410_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_a_1408_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
}
}
v___jp_1440_:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; uint8_t v___x_1450_; 
v___x_1448_ = lean_array_get_size(v_a_1447_);
v___x_1449_ = lean_unsigned_to_nat(0u);
v___x_1450_ = lean_nat_dec_eq(v___x_1448_, v___x_1449_);
if (v___x_1450_ == 0)
{
lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1469_; 
lean_dec_ref(v___y_1444_);
lean_dec_ref(v___x_1393_);
v___x_1451_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__7, &l_Lean_Meta_rwMatcher___lam__2___closed__7_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__7);
v___x_1452_ = l_Lean_MessageData_ofConstName(v___x_1377_, v___x_1450_);
v___x_1453_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1453_, 0, v___x_1451_);
lean_ctor_set(v___x_1453_, 1, v___x_1452_);
v___x_1454_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__9, &l_Lean_Meta_rwMatcher___lam__2___closed__9_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__9);
v___x_1455_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1453_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = lean_array_to_list(v_a_1447_);
v___x_1457_ = lean_box(0);
v___x_1458_ = l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(v___x_1456_, v___x_1457_);
v___x_1459_ = l_Lean_MessageData_ofList(v___x_1458_);
v___x_1460_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1460_, 0, v___x_1455_);
lean_ctor_set(v___x_1460_, 1, v___x_1459_);
v___x_1461_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1460_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1446_);
v_a_1462_ = lean_ctor_get(v___x_1461_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1464_ = v___x_1461_;
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1461_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1467_; 
if (v_isShared_1465_ == 0)
{
v___x_1467_ = v___x_1464_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_a_1462_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
else
{
lean_dec_ref(v_a_1447_);
lean_dec(v___x_1377_);
v___y_1395_ = v___y_1445_;
v___y_1396_ = v___y_1444_;
v___y_1397_ = v___y_1441_;
v___y_1398_ = v___y_1442_;
v___y_1399_ = v___y_1443_;
v___y_1400_ = v___y_1446_;
goto v___jp_1394_;
}
}
v___jp_1473_:
{
lean_object* v___x_1480_; size_t v_sz_1481_; lean_object* v___x_1482_; 
v___x_1480_ = lean_box(0);
v_sz_1481_ = lean_array_size(v___x_1472_);
v___x_1482_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(v___x_1472_, v_sz_1481_, v___x_1471_, v___x_1480_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
if (lean_obj_tag(v___x_1482_) == 0)
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; uint8_t v___x_1486_; 
lean_dec_ref_known(v___x_1482_, 1);
v___x_1483_ = lean_unsigned_to_nat(0u);
v___x_1484_ = lean_array_get_size(v___x_1472_);
v___x_1485_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__10));
v___x_1486_ = lean_nat_dec_lt(v___x_1483_, v___x_1484_);
if (v___x_1486_ == 0)
{
lean_dec_ref(v___x_1472_);
v___y_1441_ = v___y_1476_;
v___y_1442_ = v___y_1477_;
v___y_1443_ = v___y_1478_;
v___y_1444_ = v___y_1475_;
v___y_1445_ = v___y_1474_;
v___y_1446_ = v___y_1479_;
v_a_1447_ = v___x_1485_;
goto v___jp_1440_;
}
else
{
size_t v___x_1487_; lean_object* v___x_1488_; 
v___x_1487_ = lean_usize_of_nat(v___x_1484_);
v___x_1488_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(v___x_1472_, v___x_1471_, v___x_1487_, v___x_1485_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
lean_dec_ref(v___x_1472_);
if (lean_obj_tag(v___x_1488_) == 0)
{
lean_object* v_a_1489_; 
v_a_1489_ = lean_ctor_get(v___x_1488_, 0);
lean_inc(v_a_1489_);
lean_dec_ref_known(v___x_1488_, 1);
v___y_1441_ = v___y_1476_;
v___y_1442_ = v___y_1477_;
v___y_1443_ = v___y_1478_;
v___y_1444_ = v___y_1475_;
v___y_1445_ = v___y_1474_;
v___y_1446_ = v___y_1479_;
v_a_1447_ = v_a_1489_;
goto v___jp_1440_;
}
else
{
lean_object* v_a_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1497_; 
lean_dec_ref(v___y_1475_);
lean_dec_ref(v___x_1393_);
lean_dec(v___x_1377_);
v_a_1490_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1492_ = v___x_1488_;
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_a_1490_);
lean_dec(v___x_1488_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1495_; 
if (v_isShared_1493_ == 0)
{
v___x_1495_ = v___x_1492_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_a_1490_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
}
else
{
lean_object* v_a_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1505_; 
lean_dec_ref(v___y_1475_);
lean_dec_ref(v___x_1472_);
lean_dec_ref(v___x_1393_);
lean_dec(v___x_1377_);
v_a_1498_ = lean_ctor_get(v___x_1482_, 0);
v_isSharedCheck_1505_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1500_ = v___x_1482_;
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_a_1498_);
lean_dec(v___x_1482_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1503_; 
if (v_isShared_1501_ == 0)
{
v___x_1503_ = v___x_1500_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_a_1498_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
}
}
v___jp_1506_:
{
lean_object* v___x_1510_; 
lean_inc_ref(v_fst_1508_);
lean_inc_ref(v_e_1378_);
v___x_1510_ = l_Lean_Meta_isExprDefEq(v_e_1378_, v_fst_1508_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_);
if (lean_obj_tag(v___x_1510_) == 0)
{
lean_object* v_a_1511_; uint8_t v___x_1512_; 
v_a_1511_ = lean_ctor_get(v___x_1510_, 0);
lean_inc(v_a_1511_);
lean_dec_ref_known(v___x_1510_, 1);
v___x_1512_ = lean_unbox(v_a_1511_);
lean_dec(v_a_1511_);
if (v___x_1512_ == 0)
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v_a_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1534_; 
lean_dec_ref(v_snd_1509_);
lean_dec_ref(v___x_1472_);
lean_dec_ref(v___x_1393_);
v___x_1513_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__12, &l_Lean_Meta_rwMatcher___lam__2___closed__12_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__12);
v___x_1514_ = l_Lean_MessageData_ofExpr(v_fst_1508_);
v___x_1515_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1515_, 0, v___x_1513_);
lean_ctor_set(v___x_1515_, 1, v___x_1514_);
v___x_1516_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__14, &l_Lean_Meta_rwMatcher___lam__2___closed__14_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__14);
v___x_1517_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1515_);
lean_ctor_set(v___x_1517_, 1, v___x_1516_);
v___x_1518_ = l_Lean_MessageData_ofConstName(v___x_1377_, v___x_1379_);
v___x_1519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1517_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
v___x_1520_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__16, &l_Lean_Meta_rwMatcher___lam__2___closed__16_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__16);
v___x_1521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1519_);
lean_ctor_set(v___x_1521_, 1, v___x_1520_);
v___x_1522_ = l_Lean_MessageData_ofExpr(v_e_1378_);
v___x_1523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1521_);
lean_ctor_set(v___x_1523_, 1, v___x_1522_);
v___x_1524_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_1525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1523_);
lean_ctor_set(v___x_1525_, 1, v___x_1524_);
v___x_1526_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1525_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_);
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1534_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1534_ == 0)
{
v___x_1529_ = v___x_1526_;
v_isShared_1530_ = v_isSharedCheck_1534_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_a_1527_);
lean_dec(v___x_1526_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1534_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v___x_1532_; 
if (v_isShared_1530_ == 0)
{
v___x_1532_ = v___x_1529_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v_a_1527_);
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
lean_dec_ref(v_fst_1508_);
lean_dec_ref(v_e_1378_);
v___y_1474_ = v_fst_1507_;
v___y_1475_ = v_snd_1509_;
v___y_1476_ = v___y_1382_;
v___y_1477_ = v___y_1383_;
v___y_1478_ = v___y_1384_;
v___y_1479_ = v___y_1385_;
goto v___jp_1473_;
}
}
else
{
lean_object* v_a_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1542_; 
lean_dec_ref(v_snd_1509_);
lean_dec_ref(v_fst_1508_);
lean_dec_ref(v___x_1472_);
lean_dec_ref(v___x_1393_);
lean_dec_ref(v_e_1378_);
lean_dec(v___x_1377_);
v_a_1535_ = lean_ctor_get(v___x_1510_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1537_ = v___x_1510_;
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_a_1535_);
lean_dec(v___x_1510_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___x_1540_; 
if (v_isShared_1538_ == 0)
{
v___x_1540_ = v___x_1537_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_a_1535_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__3___boxed(lean_object* v___x_1570_, lean_object* v___x_1571_, lean_object* v_fst_1572_, lean_object* v___x_1573_, lean_object* v_e_1574_, lean_object* v___x_1575_, lean_object* v_snd_1576_, lean_object* v_____r_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_){
_start:
{
uint8_t v___x_102926__boxed_1583_; uint8_t v___x_102930__boxed_1584_; lean_object* v_res_1585_; 
v___x_102926__boxed_1583_ = lean_unbox(v___x_1570_);
v___x_102930__boxed_1584_ = lean_unbox(v___x_1575_);
v_res_1585_ = l_Lean_Meta_rwMatcher___lam__3(v___x_102926__boxed_1583_, v___x_1571_, v_fst_1572_, v___x_1573_, v_e_1574_, v___x_102930__boxed_1584_, v_snd_1576_, v_____r_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_);
lean_dec(v___y_1581_);
lean_dec_ref(v___y_1580_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec_ref(v_snd_1576_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__4(uint8_t v_hasTrace_1586_, lean_object* v___x_1587_, lean_object* v_fst_1588_, lean_object* v___x_1589_, lean_object* v_e_1590_, uint8_t v___x_1591_, lean_object* v_snd_1592_, lean_object* v_____r_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_){
_start:
{
lean_object* v___y_1600_; lean_object* v_proof_1601_; lean_object* v___x_1605_; uint8_t v___y_1607_; lean_object* v___y_1608_; lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1611_; lean_object* v___y_1612_; lean_object* v___y_1653_; uint8_t v___y_1654_; lean_object* v___y_1655_; lean_object* v___y_1656_; lean_object* v___y_1657_; lean_object* v___y_1658_; lean_object* v_a_1659_; size_t v_sz_1682_; size_t v___x_1683_; lean_object* v___x_1684_; uint8_t v___y_1686_; lean_object* v___y_1687_; lean_object* v___y_1688_; lean_object* v___y_1689_; lean_object* v___y_1690_; lean_object* v___y_1691_; uint8_t v_fst_1719_; lean_object* v_fst_1720_; lean_object* v_snd_1721_; lean_object* v___x_1755_; lean_object* v___x_1756_; uint8_t v___x_1757_; 
v___x_1605_ = l_Lean_mkAppN(v___x_1587_, v_fst_1588_);
v_sz_1682_ = lean_array_size(v_fst_1588_);
v___x_1683_ = ((size_t)0ULL);
v___x_1684_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(v_sz_1682_, v___x_1683_, v_fst_1588_);
v___x_1755_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__18));
v___x_1756_ = lean_unsigned_to_nat(4u);
v___x_1757_ = l_Lean_Expr_isAppOfArity(v_snd_1592_, v___x_1755_, v___x_1756_);
if (v___x_1757_ == 0)
{
lean_object* v___x_1758_; lean_object* v___x_1759_; uint8_t v___x_1760_; 
v___x_1758_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__20));
v___x_1759_ = lean_unsigned_to_nat(3u);
v___x_1760_ = l_Lean_Expr_isAppOfArity(v_snd_1592_, v___x_1758_, v___x_1759_);
if (v___x_1760_ == 0)
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v_a_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1774_; 
lean_dec_ref(v___x_1684_);
lean_dec_ref(v___x_1605_);
lean_dec_ref(v_e_1590_);
v___x_1761_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__22, &l_Lean_Meta_rwMatcher___lam__2___closed__22_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__22);
v___x_1762_ = l_Lean_MessageData_ofConstName(v___x_1589_, v___x_1591_);
v___x_1763_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1761_);
lean_ctor_set(v___x_1763_, 1, v___x_1762_);
v___x_1764_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__24, &l_Lean_Meta_rwMatcher___lam__2___closed__24_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__24);
v___x_1765_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1763_);
lean_ctor_set(v___x_1765_, 1, v___x_1764_);
v___x_1766_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1765_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_);
v_a_1767_ = lean_ctor_get(v___x_1766_, 0);
v_isSharedCheck_1774_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1769_ = v___x_1766_;
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_a_1767_);
lean_dec(v___x_1766_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v___x_1772_; 
if (v_isShared_1770_ == 0)
{
v___x_1772_ = v___x_1769_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v_a_1767_);
v___x_1772_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
return v___x_1772_;
}
}
}
else
{
lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1775_ = l_Lean_Expr_appFn_x21(v_snd_1592_);
v___x_1776_ = l_Lean_Expr_appArg_x21(v___x_1775_);
lean_dec_ref(v___x_1775_);
v___x_1777_ = l_Lean_Expr_appArg_x21(v_snd_1592_);
v_fst_1719_ = v___x_1591_;
v_fst_1720_ = v___x_1776_;
v_snd_1721_ = v___x_1777_;
goto v___jp_1718_;
}
}
else
{
lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
v___x_1778_ = l_Lean_Expr_appFn_x21(v_snd_1592_);
v___x_1779_ = l_Lean_Expr_appFn_x21(v___x_1778_);
lean_dec_ref(v___x_1778_);
v___x_1780_ = l_Lean_Expr_appArg_x21(v___x_1779_);
lean_dec_ref(v___x_1779_);
v___x_1781_ = l_Lean_Expr_appArg_x21(v_snd_1592_);
v_fst_1719_ = v_hasTrace_1586_;
v_fst_1720_ = v___x_1780_;
v_snd_1721_ = v___x_1781_;
goto v___jp_1718_;
}
v___jp_1599_:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1602_, 0, v_proof_1601_);
v___x_1603_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1603_, 0, v___y_1600_);
lean_ctor_set(v___x_1603_, 1, v___x_1602_);
lean_ctor_set_uint8(v___x_1603_, sizeof(void*)*2, v_hasTrace_1586_);
v___x_1604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1603_);
return v___x_1604_;
}
v___jp_1606_:
{
lean_object* v___x_1613_; lean_object* v_a_1614_; lean_object* v___x_1615_; 
v___x_1613_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___y_1608_, v___y_1610_);
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
lean_inc(v_a_1614_);
lean_dec_ref(v___x_1613_);
v___x_1615_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___x_1605_, v___y_1610_);
if (v___y_1607_ == 0)
{
lean_object* v_a_1616_; 
v_a_1616_ = lean_ctor_get(v___x_1615_, 0);
lean_inc(v_a_1616_);
lean_dec_ref(v___x_1615_);
v___y_1600_ = v_a_1614_;
v_proof_1601_ = v_a_1616_;
goto v___jp_1599_;
}
else
{
lean_object* v_a_1617_; lean_object* v___x_1618_; 
v_a_1617_ = lean_ctor_get(v___x_1615_, 0);
lean_inc_n(v_a_1617_, 2);
lean_dec_ref(v___x_1615_);
v___x_1618_ = l_Lean_Meta_mkEqOfHEq(v_a_1617_, v___y_1607_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_object* v_a_1619_; 
lean_dec(v_a_1617_);
v_a_1619_ = lean_ctor_get(v___x_1618_, 0);
lean_inc(v_a_1619_);
lean_dec_ref_known(v___x_1618_, 1);
v___y_1600_ = v_a_1614_;
v_proof_1601_ = v_a_1619_;
goto v___jp_1599_;
}
else
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1651_; 
lean_dec(v_a_1614_);
v_a_1620_ = lean_ctor_get(v___x_1618_, 0);
v_isSharedCheck_1651_ = !lean_is_exclusive(v___x_1618_);
if (v_isSharedCheck_1651_ == 0)
{
v___x_1622_ = v___x_1618_;
v_isShared_1623_ = v_isSharedCheck_1651_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v___x_1618_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1651_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
uint8_t v___x_1624_; 
v___x_1624_ = l_Lean_Exception_isInterrupt(v_a_1620_);
if (v___x_1624_ == 0)
{
uint8_t v___x_1625_; 
lean_inc(v_a_1620_);
v___x_1625_ = l_Lean_Exception_isRuntime(v_a_1620_);
if (v___x_1625_ == 0)
{
lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v_a_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1644_; 
lean_del_object(v___x_1622_);
v___x_1626_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__1, &l_Lean_Meta_rwMatcher___lam__2___closed__1_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__1);
v___x_1627_ = l_Lean_MessageData_ofExpr(v_a_1617_);
v___x_1628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1626_);
lean_ctor_set(v___x_1628_, 1, v___x_1627_);
v___x_1629_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__3, &l_Lean_Meta_rwMatcher___lam__2___closed__3_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__3);
v___x_1630_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1628_);
lean_ctor_set(v___x_1630_, 1, v___x_1629_);
v___x_1631_ = l_Lean_Exception_toMessageData(v_a_1620_);
v___x_1632_ = l_Lean_indentD(v___x_1631_);
v___x_1633_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1630_);
lean_ctor_set(v___x_1633_, 1, v___x_1632_);
v___x_1634_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__5, &l_Lean_Meta_rwMatcher___lam__2___closed__5_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__5);
v___x_1635_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1633_);
lean_ctor_set(v___x_1635_, 1, v___x_1634_);
v___x_1636_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1635_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
v_a_1637_ = lean_ctor_get(v___x_1636_, 0);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1636_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1639_ = v___x_1636_;
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_a_1637_);
lean_dec(v___x_1636_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1642_; 
if (v_isShared_1640_ == 0)
{
v___x_1642_ = v___x_1639_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v_a_1637_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
return v___x_1642_;
}
}
}
else
{
lean_object* v___x_1646_; 
lean_dec(v_a_1617_);
if (v_isShared_1623_ == 0)
{
v___x_1646_ = v___x_1622_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_a_1620_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
else
{
lean_object* v___x_1649_; 
lean_dec(v_a_1617_);
if (v_isShared_1623_ == 0)
{
v___x_1649_ = v___x_1622_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v_a_1620_);
v___x_1649_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
return v___x_1649_;
}
}
}
}
}
}
v___jp_1652_:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; uint8_t v___x_1662_; 
v___x_1660_ = lean_array_get_size(v_a_1659_);
v___x_1661_ = lean_unsigned_to_nat(0u);
v___x_1662_ = lean_nat_dec_eq(v___x_1660_, v___x_1661_);
if (v___x_1662_ == 0)
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v_a_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1681_; 
lean_dec_ref(v___y_1657_);
lean_dec_ref(v___x_1605_);
v___x_1663_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__7, &l_Lean_Meta_rwMatcher___lam__2___closed__7_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__7);
v___x_1664_ = l_Lean_MessageData_ofConstName(v___x_1589_, v___x_1662_);
v___x_1665_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1663_);
lean_ctor_set(v___x_1665_, 1, v___x_1664_);
v___x_1666_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__9, &l_Lean_Meta_rwMatcher___lam__2___closed__9_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__9);
v___x_1667_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1667_, 0, v___x_1665_);
lean_ctor_set(v___x_1667_, 1, v___x_1666_);
v___x_1668_ = lean_array_to_list(v_a_1659_);
v___x_1669_ = lean_box(0);
v___x_1670_ = l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(v___x_1668_, v___x_1669_);
v___x_1671_ = l_Lean_MessageData_ofList(v___x_1670_);
v___x_1672_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1667_);
lean_ctor_set(v___x_1672_, 1, v___x_1671_);
v___x_1673_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1672_, v___y_1658_, v___y_1653_, v___y_1655_, v___y_1656_);
v_a_1674_ = lean_ctor_get(v___x_1673_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1676_ = v___x_1673_;
v_isShared_1677_ = v_isSharedCheck_1681_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_a_1674_);
lean_dec(v___x_1673_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1681_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
lean_object* v___x_1679_; 
if (v_isShared_1677_ == 0)
{
v___x_1679_ = v___x_1676_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v_a_1674_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
}
else
{
lean_dec_ref(v_a_1659_);
lean_dec(v___x_1589_);
v___y_1607_ = v___y_1654_;
v___y_1608_ = v___y_1657_;
v___y_1609_ = v___y_1658_;
v___y_1610_ = v___y_1653_;
v___y_1611_ = v___y_1655_;
v___y_1612_ = v___y_1656_;
goto v___jp_1606_;
}
}
v___jp_1685_:
{
lean_object* v___x_1692_; size_t v_sz_1693_; lean_object* v___x_1694_; 
v___x_1692_ = lean_box(0);
v_sz_1693_ = lean_array_size(v___x_1684_);
v___x_1694_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(v___x_1684_, v_sz_1693_, v___x_1683_, v___x_1692_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
if (lean_obj_tag(v___x_1694_) == 0)
{
lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; uint8_t v___x_1698_; 
lean_dec_ref_known(v___x_1694_, 1);
v___x_1695_ = lean_unsigned_to_nat(0u);
v___x_1696_ = lean_array_get_size(v___x_1684_);
v___x_1697_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__10));
v___x_1698_ = lean_nat_dec_lt(v___x_1695_, v___x_1696_);
if (v___x_1698_ == 0)
{
lean_dec_ref(v___x_1684_);
v___y_1653_ = v___y_1689_;
v___y_1654_ = v___y_1686_;
v___y_1655_ = v___y_1690_;
v___y_1656_ = v___y_1691_;
v___y_1657_ = v___y_1687_;
v___y_1658_ = v___y_1688_;
v_a_1659_ = v___x_1697_;
goto v___jp_1652_;
}
else
{
size_t v___x_1699_; lean_object* v___x_1700_; 
v___x_1699_ = lean_usize_of_nat(v___x_1696_);
v___x_1700_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(v___x_1684_, v___x_1683_, v___x_1699_, v___x_1697_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
lean_dec_ref(v___x_1684_);
if (lean_obj_tag(v___x_1700_) == 0)
{
lean_object* v_a_1701_; 
v_a_1701_ = lean_ctor_get(v___x_1700_, 0);
lean_inc(v_a_1701_);
lean_dec_ref_known(v___x_1700_, 1);
v___y_1653_ = v___y_1689_;
v___y_1654_ = v___y_1686_;
v___y_1655_ = v___y_1690_;
v___y_1656_ = v___y_1691_;
v___y_1657_ = v___y_1687_;
v___y_1658_ = v___y_1688_;
v_a_1659_ = v_a_1701_;
goto v___jp_1652_;
}
else
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1709_; 
lean_dec_ref(v___y_1687_);
lean_dec_ref(v___x_1605_);
lean_dec(v___x_1589_);
v_a_1702_ = lean_ctor_get(v___x_1700_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1700_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1704_ = v___x_1700_;
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v___x_1700_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1707_; 
if (v_isShared_1705_ == 0)
{
v___x_1707_ = v___x_1704_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_a_1702_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
}
}
else
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1717_; 
lean_dec_ref(v___y_1687_);
lean_dec_ref(v___x_1684_);
lean_dec_ref(v___x_1605_);
lean_dec(v___x_1589_);
v_a_1710_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1712_ = v___x_1694_;
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v___x_1694_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1715_; 
if (v_isShared_1713_ == 0)
{
v___x_1715_ = v___x_1712_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1710_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
}
v___jp_1718_:
{
lean_object* v___x_1722_; 
lean_inc_ref(v_fst_1720_);
lean_inc_ref(v_e_1590_);
v___x_1722_ = l_Lean_Meta_isExprDefEq(v_e_1590_, v_fst_1720_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_);
if (lean_obj_tag(v___x_1722_) == 0)
{
lean_object* v_a_1723_; uint8_t v___x_1724_; 
v_a_1723_ = lean_ctor_get(v___x_1722_, 0);
lean_inc(v_a_1723_);
lean_dec_ref_known(v___x_1722_, 1);
v___x_1724_ = lean_unbox(v_a_1723_);
lean_dec(v_a_1723_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v_a_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1746_; 
lean_dec_ref(v_snd_1721_);
lean_dec_ref(v___x_1684_);
lean_dec_ref(v___x_1605_);
v___x_1725_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__12, &l_Lean_Meta_rwMatcher___lam__2___closed__12_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__12);
v___x_1726_ = l_Lean_MessageData_ofExpr(v_fst_1720_);
v___x_1727_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1725_);
lean_ctor_set(v___x_1727_, 1, v___x_1726_);
v___x_1728_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__14, &l_Lean_Meta_rwMatcher___lam__2___closed__14_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__14);
v___x_1729_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1729_, 0, v___x_1727_);
lean_ctor_set(v___x_1729_, 1, v___x_1728_);
v___x_1730_ = l_Lean_MessageData_ofConstName(v___x_1589_, v___x_1591_);
v___x_1731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1731_, 0, v___x_1729_);
lean_ctor_set(v___x_1731_, 1, v___x_1730_);
v___x_1732_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__16, &l_Lean_Meta_rwMatcher___lam__2___closed__16_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__16);
v___x_1733_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1731_);
lean_ctor_set(v___x_1733_, 1, v___x_1732_);
v___x_1734_ = l_Lean_MessageData_ofExpr(v_e_1590_);
v___x_1735_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1733_);
lean_ctor_set(v___x_1735_, 1, v___x_1734_);
v___x_1736_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_1737_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1737_, 0, v___x_1735_);
lean_ctor_set(v___x_1737_, 1, v___x_1736_);
v___x_1738_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1737_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_);
v_a_1739_ = lean_ctor_get(v___x_1738_, 0);
v_isSharedCheck_1746_ = !lean_is_exclusive(v___x_1738_);
if (v_isSharedCheck_1746_ == 0)
{
v___x_1741_ = v___x_1738_;
v_isShared_1742_ = v_isSharedCheck_1746_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_a_1739_);
lean_dec(v___x_1738_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1746_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1744_; 
if (v_isShared_1742_ == 0)
{
v___x_1744_ = v___x_1741_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v_a_1739_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
return v___x_1744_;
}
}
}
else
{
lean_dec_ref(v_fst_1720_);
lean_dec_ref(v_e_1590_);
v___y_1686_ = v_fst_1719_;
v___y_1687_ = v_snd_1721_;
v___y_1688_ = v___y_1594_;
v___y_1689_ = v___y_1595_;
v___y_1690_ = v___y_1596_;
v___y_1691_ = v___y_1597_;
goto v___jp_1685_;
}
}
else
{
lean_object* v_a_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1754_; 
lean_dec_ref(v_snd_1721_);
lean_dec_ref(v_fst_1720_);
lean_dec_ref(v___x_1684_);
lean_dec_ref(v___x_1605_);
lean_dec_ref(v_e_1590_);
lean_dec(v___x_1589_);
v_a_1747_ = lean_ctor_get(v___x_1722_, 0);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1722_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1749_ = v___x_1722_;
v_isShared_1750_ = v_isSharedCheck_1754_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_a_1747_);
lean_dec(v___x_1722_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1754_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
lean_object* v___x_1752_; 
if (v_isShared_1750_ == 0)
{
v___x_1752_ = v___x_1749_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v_a_1747_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__4___boxed(lean_object* v_hasTrace_1782_, lean_object* v___x_1783_, lean_object* v_fst_1784_, lean_object* v___x_1785_, lean_object* v_e_1786_, lean_object* v___x_1787_, lean_object* v_snd_1788_, lean_object* v_____r_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_){
_start:
{
uint8_t v_hasTrace_boxed_1795_; uint8_t v___x_103386__boxed_1796_; lean_object* v_res_1797_; 
v_hasTrace_boxed_1795_ = lean_unbox(v_hasTrace_1782_);
v___x_103386__boxed_1796_ = lean_unbox(v___x_1787_);
v_res_1797_ = l_Lean_Meta_rwMatcher___lam__4(v_hasTrace_boxed_1795_, v___x_1783_, v_fst_1784_, v___x_1785_, v_e_1786_, v___x_103386__boxed_1796_, v_snd_1788_, v_____r_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
lean_dec(v___y_1791_);
lean_dec_ref(v___y_1790_);
lean_dec_ref(v_snd_1788_);
return v_res_1797_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1798_; double v___x_1799_; 
v___x_1798_ = lean_unsigned_to_nat(0u);
v___x_1799_ = lean_float_of_nat(v___x_1798_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(lean_object* v_cls_1803_, lean_object* v_msg_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_){
_start:
{
lean_object* v_ref_1810_; lean_object* v___x_1811_; lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1857_; 
v_ref_1810_ = lean_ctor_get(v___y_1807_, 2);
v___x_1811_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(v_msg_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_);
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1814_ = v___x_1811_;
v_isShared_1815_ = v_isSharedCheck_1857_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1811_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1857_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1816_; lean_object* v_traceState_1817_; lean_object* v_env_1818_; lean_object* v_nextMacroScope_1819_; lean_object* v_ngen_1820_; lean_object* v_auxDeclNGen_1821_; lean_object* v_cache_1822_; lean_object* v_recordedDeps_1823_; lean_object* v_messages_1824_; lean_object* v_infoState_1825_; lean_object* v_snapshotTasks_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1856_; 
v___x_1816_ = lean_st_ref_take(v___y_1808_);
v_traceState_1817_ = lean_ctor_get(v___x_1816_, 4);
v_env_1818_ = lean_ctor_get(v___x_1816_, 0);
v_nextMacroScope_1819_ = lean_ctor_get(v___x_1816_, 1);
v_ngen_1820_ = lean_ctor_get(v___x_1816_, 2);
v_auxDeclNGen_1821_ = lean_ctor_get(v___x_1816_, 3);
v_cache_1822_ = lean_ctor_get(v___x_1816_, 5);
v_recordedDeps_1823_ = lean_ctor_get(v___x_1816_, 6);
v_messages_1824_ = lean_ctor_get(v___x_1816_, 7);
v_infoState_1825_ = lean_ctor_get(v___x_1816_, 8);
v_snapshotTasks_1826_ = lean_ctor_get(v___x_1816_, 9);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1828_ = v___x_1816_;
v_isShared_1829_ = v_isSharedCheck_1856_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_snapshotTasks_1826_);
lean_inc(v_infoState_1825_);
lean_inc(v_messages_1824_);
lean_inc(v_recordedDeps_1823_);
lean_inc(v_cache_1822_);
lean_inc(v_traceState_1817_);
lean_inc(v_auxDeclNGen_1821_);
lean_inc(v_ngen_1820_);
lean_inc(v_nextMacroScope_1819_);
lean_inc(v_env_1818_);
lean_dec(v___x_1816_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1856_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
uint64_t v_tid_1830_; lean_object* v_traces_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1855_; 
v_tid_1830_ = lean_ctor_get_uint64(v_traceState_1817_, sizeof(void*)*1);
v_traces_1831_ = lean_ctor_get(v_traceState_1817_, 0);
v_isSharedCheck_1855_ = !lean_is_exclusive(v_traceState_1817_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1833_ = v_traceState_1817_;
v_isShared_1834_ = v_isSharedCheck_1855_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_traces_1831_);
lean_dec(v_traceState_1817_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1855_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; double v___x_1837_; uint8_t v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1846_; 
v___x_1835_ = lean_box(0);
v___x_1836_ = lean_box(0);
v___x_1837_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0, &l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0);
v___x_1838_ = 0;
v___x_1839_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__1));
v___x_1840_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1840_, 0, v_cls_1803_);
lean_ctor_set(v___x_1840_, 1, v___x_1836_);
lean_ctor_set(v___x_1840_, 2, v___x_1839_);
lean_ctor_set_float(v___x_1840_, sizeof(void*)*3, v___x_1837_);
lean_ctor_set_float(v___x_1840_, sizeof(void*)*3 + 8, v___x_1837_);
lean_ctor_set_uint8(v___x_1840_, sizeof(void*)*3 + 16, v___x_1838_);
v___x_1841_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__2));
v___x_1842_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1840_);
lean_ctor_set(v___x_1842_, 1, v_a_1812_);
lean_ctor_set(v___x_1842_, 2, v___x_1841_);
lean_inc(v_ref_1810_);
v___x_1843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1843_, 0, v_ref_1810_);
lean_ctor_set(v___x_1843_, 1, v___x_1842_);
v___x_1844_ = l_Lean_PersistentArray_push___redArg(v_traces_1831_, v___x_1843_);
if (v_isShared_1834_ == 0)
{
lean_ctor_set(v___x_1833_, 0, v___x_1844_);
v___x_1846_ = v___x_1833_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v___x_1844_);
lean_ctor_set_uint64(v_reuseFailAlloc_1854_, sizeof(void*)*1, v_tid_1830_);
v___x_1846_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
lean_object* v___x_1848_; 
if (v_isShared_1829_ == 0)
{
lean_ctor_set(v___x_1828_, 4, v___x_1846_);
v___x_1848_ = v___x_1828_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v_env_1818_);
lean_ctor_set(v_reuseFailAlloc_1853_, 1, v_nextMacroScope_1819_);
lean_ctor_set(v_reuseFailAlloc_1853_, 2, v_ngen_1820_);
lean_ctor_set(v_reuseFailAlloc_1853_, 3, v_auxDeclNGen_1821_);
lean_ctor_set(v_reuseFailAlloc_1853_, 4, v___x_1846_);
lean_ctor_set(v_reuseFailAlloc_1853_, 5, v_cache_1822_);
lean_ctor_set(v_reuseFailAlloc_1853_, 6, v_recordedDeps_1823_);
lean_ctor_set(v_reuseFailAlloc_1853_, 7, v_messages_1824_);
lean_ctor_set(v_reuseFailAlloc_1853_, 8, v_infoState_1825_);
lean_ctor_set(v_reuseFailAlloc_1853_, 9, v_snapshotTasks_1826_);
v___x_1848_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
lean_object* v___x_1849_; lean_object* v___x_1851_; 
v___x_1849_ = lean_st_ref_put(v___y_1808_, v___x_1848_);
if (v_isShared_1815_ == 0)
{
lean_ctor_set(v___x_1814_, 0, v___x_1835_);
v___x_1851_ = v___x_1814_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v___x_1835_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___boxed(lean_object* v_cls_1858_, lean_object* v_msg_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_){
_start:
{
lean_object* v_res_1865_; 
v_res_1865_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v_cls_1858_, v_msg_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
lean_dec(v___y_1863_);
lean_dec_ref(v___y_1862_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17(lean_object* v_opts_1866_, lean_object* v_opt_1867_){
_start:
{
lean_object* v_name_1868_; lean_object* v_defValue_1869_; lean_object* v_map_1870_; lean_object* v___x_1871_; 
v_name_1868_ = lean_ctor_get(v_opt_1867_, 0);
v_defValue_1869_ = lean_ctor_get(v_opt_1867_, 1);
v_map_1870_ = lean_ctor_get(v_opts_1866_, 0);
v___x_1871_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1870_, v_name_1868_);
if (lean_obj_tag(v___x_1871_) == 0)
{
lean_inc(v_defValue_1869_);
return v_defValue_1869_;
}
else
{
lean_object* v_val_1872_; 
v_val_1872_ = lean_ctor_get(v___x_1871_, 0);
lean_inc(v_val_1872_);
lean_dec_ref_known(v___x_1871_, 1);
if (lean_obj_tag(v_val_1872_) == 3)
{
lean_object* v_v_1873_; 
v_v_1873_ = lean_ctor_get(v_val_1872_, 0);
lean_inc(v_v_1873_);
lean_dec_ref_known(v_val_1872_, 1);
return v_v_1873_;
}
else
{
lean_dec(v_val_1872_);
lean_inc(v_defValue_1869_);
return v_defValue_1869_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17___boxed(lean_object* v_opts_1874_, lean_object* v_opt_1875_){
_start:
{
lean_object* v_res_1876_; 
v_res_1876_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17(v_opts_1874_, v_opt_1875_);
lean_dec_ref(v_opt_1875_);
lean_dec_ref(v_opts_1874_);
return v_res_1876_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(lean_object* v_x_1877_){
_start:
{
if (lean_obj_tag(v_x_1877_) == 0)
{
lean_object* v_a_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1886_; 
v_a_1879_ = lean_ctor_get(v_x_1877_, 0);
v_isSharedCheck_1886_ = !lean_is_exclusive(v_x_1877_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1881_ = v_x_1877_;
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_a_1879_);
lean_dec(v_x_1877_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1884_; 
if (v_isShared_1882_ == 0)
{
lean_ctor_set_tag(v___x_1881_, 1);
v___x_1884_ = v___x_1881_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v_a_1879_);
v___x_1884_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
return v___x_1884_;
}
}
}
else
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1894_; 
v_a_1887_ = lean_ctor_get(v_x_1877_, 0);
v_isSharedCheck_1894_ = !lean_is_exclusive(v_x_1877_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1889_ = v_x_1877_;
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v_x_1877_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1892_; 
if (v_isShared_1890_ == 0)
{
lean_ctor_set_tag(v___x_1889_, 0);
v___x_1892_ = v___x_1889_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_a_1887_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg___boxed(lean_object* v_x_1895_, lean_object* v___y_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(v_x_1895_);
return v_res_1897_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16(lean_object* v_e_1898_){
_start:
{
if (lean_obj_tag(v_e_1898_) == 0)
{
uint8_t v___x_1899_; 
v___x_1899_ = 2;
return v___x_1899_;
}
else
{
uint8_t v___x_1900_; 
v___x_1900_ = 0;
return v___x_1900_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16___boxed(lean_object* v_e_1901_){
_start:
{
uint8_t v_res_1902_; lean_object* v_r_1903_; 
v_res_1902_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16(v_e_1901_);
lean_dec_ref(v_e_1901_);
v_r_1903_ = lean_box(v_res_1902_);
return v_r_1903_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16(size_t v_sz_1904_, size_t v_i_1905_, lean_object* v_bs_1906_){
_start:
{
uint8_t v___x_1907_; 
v___x_1907_ = lean_usize_dec_lt(v_i_1905_, v_sz_1904_);
if (v___x_1907_ == 0)
{
return v_bs_1906_;
}
else
{
lean_object* v_v_1908_; lean_object* v_msg_1909_; lean_object* v___x_1910_; lean_object* v_bs_x27_1911_; size_t v___x_1912_; size_t v___x_1913_; lean_object* v___x_1914_; 
v_v_1908_ = lean_array_uget_borrowed(v_bs_1906_, v_i_1905_);
v_msg_1909_ = lean_ctor_get(v_v_1908_, 1);
lean_inc_ref(v_msg_1909_);
v___x_1910_ = lean_unsigned_to_nat(0u);
v_bs_x27_1911_ = lean_array_uset(v_bs_1906_, v_i_1905_, v___x_1910_);
v___x_1912_ = ((size_t)1ULL);
v___x_1913_ = lean_usize_add(v_i_1905_, v___x_1912_);
v___x_1914_ = lean_array_uset(v_bs_x27_1911_, v_i_1905_, v_msg_1909_);
v_i_1905_ = v___x_1913_;
v_bs_1906_ = v___x_1914_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16___boxed(lean_object* v_sz_1916_, lean_object* v_i_1917_, lean_object* v_bs_1918_){
_start:
{
size_t v_sz_boxed_1919_; size_t v_i_boxed_1920_; lean_object* v_res_1921_; 
v_sz_boxed_1919_ = lean_unbox_usize(v_sz_1916_);
lean_dec(v_sz_1916_);
v_i_boxed_1920_ = lean_unbox_usize(v_i_1917_);
lean_dec(v_i_1917_);
v_res_1921_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16(v_sz_boxed_1919_, v_i_boxed_1920_, v_bs_1918_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14(lean_object* v_oldTraces_1922_, lean_object* v_data_1923_, lean_object* v_ref_1924_, lean_object* v_msg_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_){
_start:
{
lean_object* v_toCold_1931_; lean_object* v_currRecDepth_1932_; lean_object* v_ref_1933_; uint16_t v_optionFlags_1934_; uint8_t v_suppressElabErrors_1935_; uint8_t v_checkDeprecated_1936_; uint8_t v_isRecordingDeps_1937_; lean_object* v_ref_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v_traceState_1941_; lean_object* v_traces_1942_; lean_object* v___x_1943_; size_t v_sz_1944_; size_t v___x_1945_; lean_object* v___x_1946_; lean_object* v_msg_1947_; lean_object* v___x_1948_; lean_object* v_a_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1987_; 
v_toCold_1931_ = lean_ctor_get(v___y_1928_, 0);
v_currRecDepth_1932_ = lean_ctor_get(v___y_1928_, 1);
v_ref_1933_ = lean_ctor_get(v___y_1928_, 2);
v_optionFlags_1934_ = lean_ctor_get_uint16(v___y_1928_, sizeof(void*)*3);
v_suppressElabErrors_1935_ = lean_ctor_get_uint8(v___y_1928_, sizeof(void*)*3 + 2);
v_checkDeprecated_1936_ = lean_ctor_get_uint8(v___y_1928_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1937_ = lean_ctor_get_uint8(v___y_1928_, sizeof(void*)*3 + 4);
v_ref_1938_ = l_Lean_replaceRef(v_ref_1924_, v_ref_1933_);
lean_inc(v_currRecDepth_1932_);
lean_inc_ref(v_toCold_1931_);
v___x_1939_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1939_, 0, v_toCold_1931_);
lean_ctor_set(v___x_1939_, 1, v_currRecDepth_1932_);
lean_ctor_set(v___x_1939_, 2, v_ref_1938_);
lean_ctor_set_uint16(v___x_1939_, sizeof(void*)*3, v_optionFlags_1934_);
lean_ctor_set_uint8(v___x_1939_, sizeof(void*)*3 + 2, v_suppressElabErrors_1935_);
lean_ctor_set_uint8(v___x_1939_, sizeof(void*)*3 + 3, v_checkDeprecated_1936_);
lean_ctor_set_uint8(v___x_1939_, sizeof(void*)*3 + 4, v_isRecordingDeps_1937_);
v___x_1940_ = lean_st_ref_get(v___y_1929_);
v_traceState_1941_ = lean_ctor_get(v___x_1940_, 4);
lean_inc_ref(v_traceState_1941_);
lean_dec(v___x_1940_);
v_traces_1942_ = lean_ctor_get(v_traceState_1941_, 0);
lean_inc_ref(v_traces_1942_);
lean_dec_ref(v_traceState_1941_);
v___x_1943_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1942_);
lean_dec_ref(v_traces_1942_);
v_sz_1944_ = lean_array_size(v___x_1943_);
v___x_1945_ = ((size_t)0ULL);
v___x_1946_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16(v_sz_1944_, v___x_1945_, v___x_1943_);
v_msg_1947_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1947_, 0, v_data_1923_);
lean_ctor_set(v_msg_1947_, 1, v_msg_1925_);
lean_ctor_set(v_msg_1947_, 2, v___x_1946_);
v___x_1948_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(v_msg_1947_, v___y_1926_, v___y_1927_, v___x_1939_, v___y_1929_);
lean_dec_ref_known(v___x_1939_, 3);
v_a_1949_ = lean_ctor_get(v___x_1948_, 0);
v_isSharedCheck_1987_ = !lean_is_exclusive(v___x_1948_);
if (v_isSharedCheck_1987_ == 0)
{
v___x_1951_ = v___x_1948_;
v_isShared_1952_ = v_isSharedCheck_1987_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_a_1949_);
lean_dec(v___x_1948_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1987_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v___x_1953_; lean_object* v_traceState_1954_; lean_object* v_env_1955_; lean_object* v_nextMacroScope_1956_; lean_object* v_ngen_1957_; lean_object* v_auxDeclNGen_1958_; lean_object* v_cache_1959_; lean_object* v_recordedDeps_1960_; lean_object* v_messages_1961_; lean_object* v_infoState_1962_; lean_object* v_snapshotTasks_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1986_; 
v___x_1953_ = lean_st_ref_take(v___y_1929_);
v_traceState_1954_ = lean_ctor_get(v___x_1953_, 4);
v_env_1955_ = lean_ctor_get(v___x_1953_, 0);
v_nextMacroScope_1956_ = lean_ctor_get(v___x_1953_, 1);
v_ngen_1957_ = lean_ctor_get(v___x_1953_, 2);
v_auxDeclNGen_1958_ = lean_ctor_get(v___x_1953_, 3);
v_cache_1959_ = lean_ctor_get(v___x_1953_, 5);
v_recordedDeps_1960_ = lean_ctor_get(v___x_1953_, 6);
v_messages_1961_ = lean_ctor_get(v___x_1953_, 7);
v_infoState_1962_ = lean_ctor_get(v___x_1953_, 8);
v_snapshotTasks_1963_ = lean_ctor_get(v___x_1953_, 9);
v_isSharedCheck_1986_ = !lean_is_exclusive(v___x_1953_);
if (v_isSharedCheck_1986_ == 0)
{
v___x_1965_ = v___x_1953_;
v_isShared_1966_ = v_isSharedCheck_1986_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_snapshotTasks_1963_);
lean_inc(v_infoState_1962_);
lean_inc(v_messages_1961_);
lean_inc(v_recordedDeps_1960_);
lean_inc(v_cache_1959_);
lean_inc(v_traceState_1954_);
lean_inc(v_auxDeclNGen_1958_);
lean_inc(v_ngen_1957_);
lean_inc(v_nextMacroScope_1956_);
lean_inc(v_env_1955_);
lean_dec(v___x_1953_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1986_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
uint64_t v_tid_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1984_; 
v_tid_1967_ = lean_ctor_get_uint64(v_traceState_1954_, sizeof(void*)*1);
v_isSharedCheck_1984_ = !lean_is_exclusive(v_traceState_1954_);
if (v_isSharedCheck_1984_ == 0)
{
lean_object* v_unused_1985_; 
v_unused_1985_ = lean_ctor_get(v_traceState_1954_, 0);
lean_dec(v_unused_1985_);
v___x_1969_ = v_traceState_1954_;
v_isShared_1970_ = v_isSharedCheck_1984_;
goto v_resetjp_1968_;
}
else
{
lean_dec(v_traceState_1954_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1984_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1975_; 
v___x_1971_ = lean_box(0);
v___x_1972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1972_, 0, v_ref_1924_);
lean_ctor_set(v___x_1972_, 1, v_a_1949_);
v___x_1973_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1922_, v___x_1972_);
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 0, v___x_1973_);
v___x_1975_ = v___x_1969_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v___x_1973_);
lean_ctor_set_uint64(v_reuseFailAlloc_1983_, sizeof(void*)*1, v_tid_1967_);
v___x_1975_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
lean_object* v___x_1977_; 
if (v_isShared_1966_ == 0)
{
lean_ctor_set(v___x_1965_, 4, v___x_1975_);
v___x_1977_ = v___x_1965_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_env_1955_);
lean_ctor_set(v_reuseFailAlloc_1982_, 1, v_nextMacroScope_1956_);
lean_ctor_set(v_reuseFailAlloc_1982_, 2, v_ngen_1957_);
lean_ctor_set(v_reuseFailAlloc_1982_, 3, v_auxDeclNGen_1958_);
lean_ctor_set(v_reuseFailAlloc_1982_, 4, v___x_1975_);
lean_ctor_set(v_reuseFailAlloc_1982_, 5, v_cache_1959_);
lean_ctor_set(v_reuseFailAlloc_1982_, 6, v_recordedDeps_1960_);
lean_ctor_set(v_reuseFailAlloc_1982_, 7, v_messages_1961_);
lean_ctor_set(v_reuseFailAlloc_1982_, 8, v_infoState_1962_);
lean_ctor_set(v_reuseFailAlloc_1982_, 9, v_snapshotTasks_1963_);
v___x_1977_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
lean_object* v___x_1978_; lean_object* v___x_1980_; 
v___x_1978_ = lean_st_ref_put(v___y_1929_, v___x_1977_);
if (v_isShared_1952_ == 0)
{
lean_ctor_set(v___x_1951_, 0, v___x_1971_);
v___x_1980_ = v___x_1951_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v___x_1971_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14___boxed(lean_object* v_oldTraces_1988_, lean_object* v_data_1989_, lean_object* v_ref_1990_, lean_object* v_msg_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_){
_start:
{
lean_object* v_res_1997_; 
v_res_1997_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14(v_oldTraces_1988_, v_data_1989_, v_ref_1990_, v_msg_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_);
lean_dec(v___y_1995_);
lean_dec_ref(v___y_1994_);
lean_dec(v___y_1993_);
lean_dec_ref(v___y_1992_);
return v_res_1997_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1(void){
_start:
{
lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1999_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__0));
v___x_2000_ = l_Lean_stringToMessageData(v___x_1999_);
return v___x_2000_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2(void){
_start:
{
lean_object* v___x_2001_; double v___x_2002_; 
v___x_2001_ = lean_unsigned_to_nat(1000u);
v___x_2002_ = lean_float_of_nat(v___x_2001_);
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12(lean_object* v_cls_2003_, uint8_t v_collapsed_2004_, lean_object* v_tag_2005_, lean_object* v_opts_2006_, uint8_t v_clsEnabled_2007_, lean_object* v_oldTraces_2008_, lean_object* v_msg_2009_, lean_object* v_resStartStop_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_){
_start:
{
lean_object* v_fst_2016_; lean_object* v_snd_2017_; lean_object* v___y_2019_; lean_object* v___y_2020_; lean_object* v_data_2021_; lean_object* v_fst_2032_; lean_object* v_snd_2033_; lean_object* v___x_2034_; uint8_t v___x_2035_; lean_object* v___y_2037_; lean_object* v_a_2038_; uint8_t v___y_2053_; double v___y_2085_; 
v_fst_2016_ = lean_ctor_get(v_resStartStop_2010_, 0);
lean_inc(v_fst_2016_);
v_snd_2017_ = lean_ctor_get(v_resStartStop_2010_, 1);
lean_inc(v_snd_2017_);
lean_dec_ref(v_resStartStop_2010_);
v_fst_2032_ = lean_ctor_get(v_snd_2017_, 0);
lean_inc(v_fst_2032_);
v_snd_2033_ = lean_ctor_get(v_snd_2017_, 1);
lean_inc(v_snd_2033_);
lean_dec(v_snd_2017_);
v___x_2034_ = l_Lean_trace_profiler;
v___x_2035_ = l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(v_opts_2006_, v___x_2034_);
if (v___x_2035_ == 0)
{
v___y_2053_ = v___x_2035_;
goto v___jp_2052_;
}
else
{
lean_object* v___x_2090_; uint8_t v___x_2091_; 
v___x_2090_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2091_ = l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(v_opts_2006_, v___x_2090_);
if (v___x_2091_ == 0)
{
lean_object* v___x_2092_; lean_object* v___x_2093_; double v___x_2094_; double v___x_2095_; double v___x_2096_; 
v___x_2092_ = l_Lean_trace_profiler_threshold;
v___x_2093_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17(v_opts_2006_, v___x_2092_);
v___x_2094_ = lean_float_of_nat(v___x_2093_);
v___x_2095_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2);
v___x_2096_ = lean_float_div(v___x_2094_, v___x_2095_);
v___y_2085_ = v___x_2096_;
goto v___jp_2084_;
}
else
{
lean_object* v___x_2097_; lean_object* v___x_2098_; double v___x_2099_; 
v___x_2097_ = l_Lean_trace_profiler_threshold;
v___x_2098_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17(v_opts_2006_, v___x_2097_);
v___x_2099_ = lean_float_of_nat(v___x_2098_);
v___y_2085_ = v___x_2099_;
goto v___jp_2084_;
}
}
v___jp_2018_:
{
lean_object* v___x_2022_; 
lean_inc(v___y_2020_);
v___x_2022_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14(v_oldTraces_2008_, v_data_2021_, v___y_2020_, v___y_2019_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_);
if (lean_obj_tag(v___x_2022_) == 0)
{
lean_object* v___x_2023_; 
lean_dec_ref_known(v___x_2022_, 1);
v___x_2023_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(v_fst_2016_);
return v___x_2023_;
}
else
{
lean_object* v_a_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2031_; 
lean_dec(v_fst_2016_);
v_a_2024_ = lean_ctor_get(v___x_2022_, 0);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_2022_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2026_ = v___x_2022_;
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_a_2024_);
lean_dec(v___x_2022_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___x_2029_; 
if (v_isShared_2027_ == 0)
{
v___x_2029_ = v___x_2026_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_a_2024_);
v___x_2029_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
return v___x_2029_;
}
}
}
}
v___jp_2036_:
{
uint8_t v_result_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; double v___x_2042_; lean_object* v_data_2043_; 
v_result_2039_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16(v_fst_2016_);
v___x_2040_ = lean_box(v_result_2039_);
v___x_2041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2040_);
v___x_2042_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0, &l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0);
lean_inc_ref(v_tag_2005_);
lean_inc_ref(v___x_2041_);
lean_inc(v_cls_2003_);
v_data_2043_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2043_, 0, v_cls_2003_);
lean_ctor_set(v_data_2043_, 1, v___x_2041_);
lean_ctor_set(v_data_2043_, 2, v_tag_2005_);
lean_ctor_set_float(v_data_2043_, sizeof(void*)*3, v___x_2042_);
lean_ctor_set_float(v_data_2043_, sizeof(void*)*3 + 8, v___x_2042_);
lean_ctor_set_uint8(v_data_2043_, sizeof(void*)*3 + 16, v_collapsed_2004_);
if (v___x_2035_ == 0)
{
lean_dec_ref_known(v___x_2041_, 1);
lean_dec(v_snd_2033_);
lean_dec(v_fst_2032_);
lean_dec_ref(v_tag_2005_);
lean_dec(v_cls_2003_);
v___y_2019_ = v_a_2038_;
v___y_2020_ = v___y_2037_;
v_data_2021_ = v_data_2043_;
goto v___jp_2018_;
}
else
{
lean_object* v_data_2044_; double v___x_2045_; double v___x_2046_; 
lean_dec_ref_known(v_data_2043_, 3);
v_data_2044_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2044_, 0, v_cls_2003_);
lean_ctor_set(v_data_2044_, 1, v___x_2041_);
lean_ctor_set(v_data_2044_, 2, v_tag_2005_);
v___x_2045_ = lean_unbox_float(v_fst_2032_);
lean_dec(v_fst_2032_);
lean_ctor_set_float(v_data_2044_, sizeof(void*)*3, v___x_2045_);
v___x_2046_ = lean_unbox_float(v_snd_2033_);
lean_dec(v_snd_2033_);
lean_ctor_set_float(v_data_2044_, sizeof(void*)*3 + 8, v___x_2046_);
lean_ctor_set_uint8(v_data_2044_, sizeof(void*)*3 + 16, v_collapsed_2004_);
v___y_2019_ = v_a_2038_;
v___y_2020_ = v___y_2037_;
v_data_2021_ = v_data_2044_;
goto v___jp_2018_;
}
}
v___jp_2047_:
{
lean_object* v_ref_2048_; lean_object* v___x_2049_; 
v_ref_2048_ = lean_ctor_get(v___y_2013_, 2);
lean_inc(v___y_2014_);
lean_inc_ref(v___y_2013_);
lean_inc(v___y_2012_);
lean_inc_ref(v___y_2011_);
lean_inc(v_fst_2016_);
v___x_2049_ = lean_apply_6(v_msg_2009_, v_fst_2016_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_, lean_box(0));
if (lean_obj_tag(v___x_2049_) == 0)
{
lean_object* v_a_2050_; 
v_a_2050_ = lean_ctor_get(v___x_2049_, 0);
lean_inc(v_a_2050_);
lean_dec_ref_known(v___x_2049_, 1);
v___y_2037_ = v_ref_2048_;
v_a_2038_ = v_a_2050_;
goto v___jp_2036_;
}
else
{
lean_object* v___x_2051_; 
lean_dec_ref_known(v___x_2049_, 1);
v___x_2051_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1);
v___y_2037_ = v_ref_2048_;
v_a_2038_ = v___x_2051_;
goto v___jp_2036_;
}
}
v___jp_2052_:
{
if (v_clsEnabled_2007_ == 0)
{
if (v___y_2053_ == 0)
{
lean_object* v___x_2054_; lean_object* v_traceState_2055_; lean_object* v_env_2056_; lean_object* v_nextMacroScope_2057_; lean_object* v_ngen_2058_; lean_object* v_auxDeclNGen_2059_; lean_object* v_cache_2060_; lean_object* v_recordedDeps_2061_; lean_object* v_messages_2062_; lean_object* v_infoState_2063_; lean_object* v_snapshotTasks_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2083_; 
lean_dec(v_snd_2033_);
lean_dec(v_fst_2032_);
lean_dec_ref(v_msg_2009_);
lean_dec_ref(v_tag_2005_);
lean_dec(v_cls_2003_);
v___x_2054_ = lean_st_ref_take(v___y_2014_);
v_traceState_2055_ = lean_ctor_get(v___x_2054_, 4);
v_env_2056_ = lean_ctor_get(v___x_2054_, 0);
v_nextMacroScope_2057_ = lean_ctor_get(v___x_2054_, 1);
v_ngen_2058_ = lean_ctor_get(v___x_2054_, 2);
v_auxDeclNGen_2059_ = lean_ctor_get(v___x_2054_, 3);
v_cache_2060_ = lean_ctor_get(v___x_2054_, 5);
v_recordedDeps_2061_ = lean_ctor_get(v___x_2054_, 6);
v_messages_2062_ = lean_ctor_get(v___x_2054_, 7);
v_infoState_2063_ = lean_ctor_get(v___x_2054_, 8);
v_snapshotTasks_2064_ = lean_ctor_get(v___x_2054_, 9);
v_isSharedCheck_2083_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2066_ = v___x_2054_;
v_isShared_2067_ = v_isSharedCheck_2083_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_snapshotTasks_2064_);
lean_inc(v_infoState_2063_);
lean_inc(v_messages_2062_);
lean_inc(v_recordedDeps_2061_);
lean_inc(v_cache_2060_);
lean_inc(v_traceState_2055_);
lean_inc(v_auxDeclNGen_2059_);
lean_inc(v_ngen_2058_);
lean_inc(v_nextMacroScope_2057_);
lean_inc(v_env_2056_);
lean_dec(v___x_2054_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2083_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
uint64_t v_tid_2068_; lean_object* v_traces_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2082_; 
v_tid_2068_ = lean_ctor_get_uint64(v_traceState_2055_, sizeof(void*)*1);
v_traces_2069_ = lean_ctor_get(v_traceState_2055_, 0);
v_isSharedCheck_2082_ = !lean_is_exclusive(v_traceState_2055_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2071_ = v_traceState_2055_;
v_isShared_2072_ = v_isSharedCheck_2082_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_traces_2069_);
lean_dec(v_traceState_2055_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2082_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2073_; lean_object* v___x_2075_; 
v___x_2073_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2008_, v_traces_2069_);
lean_dec_ref(v_traces_2069_);
if (v_isShared_2072_ == 0)
{
lean_ctor_set(v___x_2071_, 0, v___x_2073_);
v___x_2075_ = v___x_2071_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v___x_2073_);
lean_ctor_set_uint64(v_reuseFailAlloc_2081_, sizeof(void*)*1, v_tid_2068_);
v___x_2075_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
lean_object* v___x_2077_; 
if (v_isShared_2067_ == 0)
{
lean_ctor_set(v___x_2066_, 4, v___x_2075_);
v___x_2077_ = v___x_2066_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_env_2056_);
lean_ctor_set(v_reuseFailAlloc_2080_, 1, v_nextMacroScope_2057_);
lean_ctor_set(v_reuseFailAlloc_2080_, 2, v_ngen_2058_);
lean_ctor_set(v_reuseFailAlloc_2080_, 3, v_auxDeclNGen_2059_);
lean_ctor_set(v_reuseFailAlloc_2080_, 4, v___x_2075_);
lean_ctor_set(v_reuseFailAlloc_2080_, 5, v_cache_2060_);
lean_ctor_set(v_reuseFailAlloc_2080_, 6, v_recordedDeps_2061_);
lean_ctor_set(v_reuseFailAlloc_2080_, 7, v_messages_2062_);
lean_ctor_set(v_reuseFailAlloc_2080_, 8, v_infoState_2063_);
lean_ctor_set(v_reuseFailAlloc_2080_, 9, v_snapshotTasks_2064_);
v___x_2077_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
lean_object* v___x_2078_; lean_object* v___x_2079_; 
v___x_2078_ = lean_st_ref_put(v___y_2014_, v___x_2077_);
v___x_2079_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(v_fst_2016_);
return v___x_2079_;
}
}
}
}
}
else
{
goto v___jp_2047_;
}
}
else
{
goto v___jp_2047_;
}
}
v___jp_2084_:
{
double v___x_2086_; double v___x_2087_; double v___x_2088_; uint8_t v___x_2089_; 
v___x_2086_ = lean_unbox_float(v_snd_2033_);
v___x_2087_ = lean_unbox_float(v_fst_2032_);
v___x_2088_ = lean_float_sub(v___x_2086_, v___x_2087_);
v___x_2089_ = lean_float_decLt(v___y_2085_, v___x_2088_);
v___y_2053_ = v___x_2089_;
goto v___jp_2052_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___boxed(lean_object* v_cls_2100_, lean_object* v_collapsed_2101_, lean_object* v_tag_2102_, lean_object* v_opts_2103_, lean_object* v_clsEnabled_2104_, lean_object* v_oldTraces_2105_, lean_object* v_msg_2106_, lean_object* v_resStartStop_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_){
_start:
{
uint8_t v_collapsed_boxed_2113_; uint8_t v_clsEnabled_boxed_2114_; lean_object* v_res_2115_; 
v_collapsed_boxed_2113_ = lean_unbox(v_collapsed_2101_);
v_clsEnabled_boxed_2114_ = lean_unbox(v_clsEnabled_2104_);
v_res_2115_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12(v_cls_2100_, v_collapsed_boxed_2113_, v_tag_2102_, v_opts_2103_, v_clsEnabled_boxed_2114_, v_oldTraces_2105_, v_msg_2106_, v_resStartStop_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec_ref(v_opts_2103_);
return v_res_2115_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg(lean_object* v_a_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_){
_start:
{
lean_object* v___x_2122_; 
v___x_2122_ = l_Lean_Meta_reduceRecMatcher_x3f(v_a_2116_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v_a_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2136_; 
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2125_ = v___x_2122_;
v_isShared_2126_ = v_isSharedCheck_2136_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_a_2123_);
lean_dec(v___x_2122_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2136_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
if (lean_obj_tag(v_a_2123_) == 1)
{
lean_object* v_val_2127_; lean_object* v___x_2128_; 
lean_del_object(v___x_2125_);
lean_dec_ref(v_a_2116_);
v_val_2127_ = lean_ctor_get(v_a_2123_, 0);
lean_inc(v_val_2127_);
lean_dec_ref_known(v_a_2123_, 1);
v___x_2128_ = l_Lean_Expr_headBeta(v_val_2127_);
v_a_2116_ = v___x_2128_;
goto _start;
}
else
{
lean_object* v___x_2130_; uint8_t v___x_2131_; 
lean_dec(v_a_2123_);
lean_inc_ref(v_a_2116_);
v___x_2130_ = l_Lean_Expr_headBeta(v_a_2116_);
v___x_2131_ = lean_expr_eqv(v_a_2116_, v___x_2130_);
if (v___x_2131_ == 0)
{
lean_del_object(v___x_2125_);
lean_dec_ref(v_a_2116_);
v_a_2116_ = v___x_2130_;
goto _start;
}
else
{
lean_object* v___x_2134_; 
lean_dec_ref(v___x_2130_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 0, v_a_2116_);
v___x_2134_ = v___x_2125_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_a_2116_);
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
}
else
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2144_; 
lean_dec_ref(v_a_2116_);
v_a_2137_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2139_ = v___x_2122_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2122_);
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
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg___boxed(lean_object* v_a_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_){
_start:
{
lean_object* v_res_2151_; 
v_res_2151_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg(v_a_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
lean_dec(v___y_2149_);
lean_dec_ref(v___y_2148_);
lean_dec(v___y_2147_);
lean_dec_ref(v___y_2146_);
return v_res_2151_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__11(void){
_start:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2171_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__8));
v___x_2172_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__10));
v___x_2173_ = l_Lean_Name_append(v___x_2172_, v___x_2171_);
return v___x_2173_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__13(void){
_start:
{
lean_object* v___x_2175_; lean_object* v___x_2176_; 
v___x_2175_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__12));
v___x_2176_ = l_Lean_stringToMessageData(v___x_2175_);
return v___x_2176_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__15(void){
_start:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2178_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__14));
v___x_2179_ = l_Lean_stringToMessageData(v___x_2178_);
return v___x_2179_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__17(void){
_start:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2181_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__16));
v___x_2182_ = l_Lean_stringToMessageData(v___x_2181_);
return v___x_2182_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__19(void){
_start:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___x_2184_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__18));
v___x_2185_ = l_Lean_stringToMessageData(v___x_2184_);
return v___x_2185_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__21(void){
_start:
{
lean_object* v___x_2187_; lean_object* v___x_2188_; 
v___x_2187_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__20));
v___x_2188_ = l_Lean_stringToMessageData(v___x_2187_);
return v___x_2188_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__23(void){
_start:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; 
v___x_2190_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__22));
v___x_2191_ = l_Lean_stringToMessageData(v___x_2190_);
return v___x_2191_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__24(void){
_start:
{
lean_object* v___x_2192_; lean_object* v_dummy_2193_; 
v___x_2192_ = lean_box(0);
v_dummy_2193_ = l_Lean_Expr_sort___override(v___x_2192_);
return v_dummy_2193_;
}
}
static double _init_l_Lean_Meta_rwMatcher___closed__25(void){
_start:
{
lean_object* v___x_2194_; double v___x_2195_; 
v___x_2194_ = lean_unsigned_to_nat(1000000000u);
v___x_2195_ = lean_float_of_nat(v___x_2194_);
return v___x_2195_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__27(void){
_start:
{
lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2197_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__26));
v___x_2198_ = l_Lean_stringToMessageData(v___x_2197_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher(lean_object* v_altIdx_2199_, lean_object* v_e_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_){
_start:
{
lean_object* v___y_2207_; lean_object* v___x_2243_; uint8_t v___x_2244_; 
v___x_2243_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__2));
v___x_2244_ = l_Lean_Expr_isAppOf(v_e_2200_, v___x_2243_);
if (v___x_2244_ == 0)
{
lean_object* v___x_2245_; uint8_t v___x_2246_; 
v___x_2245_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__4));
v___x_2246_ = l_Lean_Expr_isAppOf(v_e_2200_, v___x_2245_);
if (v___x_2246_ == 0)
{
lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v_a_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2691_; 
v___x_2247_ = lean_box(0);
v___x_2248_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg(v_e_2200_, v_a_2204_);
v_a_2249_ = lean_ctor_get(v___x_2248_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2251_ = v___x_2248_;
v_isShared_2252_ = v_isSharedCheck_2691_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_a_2249_);
lean_dec(v___x_2248_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2691_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
uint8_t v___x_2260_; 
v___x_2260_ = lean_unbox(v_a_2249_);
if (v___x_2260_ == 0)
{
lean_object* v_toCold_2261_; lean_object* v_options_2262_; uint8_t v_hasTrace_2263_; 
lean_del_object(v___x_2251_);
lean_dec(v_a_2249_);
lean_dec(v_altIdx_2199_);
v_toCold_2261_ = lean_ctor_get(v_a_2203_, 0);
v_options_2262_ = lean_ctor_get(v_toCold_2261_, 2);
v_hasTrace_2263_ = lean_ctor_get_uint8(v_options_2262_, sizeof(void*)*1);
if (v_hasTrace_2263_ == 0)
{
goto v___jp_2217_;
}
else
{
lean_object* v_inheritedTraceOptions_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; uint8_t v___x_2267_; 
v_inheritedTraceOptions_2264_ = lean_ctor_get(v_toCold_2261_, 11);
v___x_2265_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__8));
v___x_2266_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__11, &l_Lean_Meta_rwMatcher___closed__11_once, _init_l_Lean_Meta_rwMatcher___closed__11);
v___x_2267_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2264_, v_options_2262_, v___x_2266_);
if (v___x_2267_ == 0)
{
goto v___jp_2217_;
}
else
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2268_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__13, &l_Lean_Meta_rwMatcher___closed__13_once, _init_l_Lean_Meta_rwMatcher___closed__13);
lean_inc_ref(v_e_2200_);
v___x_2269_ = l_Lean_indentExpr(v_e_2200_);
v___x_2270_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2268_);
lean_ctor_set(v___x_2270_, 1, v___x_2269_);
v___x_2271_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2265_, v___x_2270_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_dec_ref_known(v___x_2271_, 1);
goto v___jp_2217_;
}
else
{
lean_object* v_a_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2279_; 
lean_dec_ref(v_e_2200_);
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2279_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2274_ = v___x_2271_;
v_isShared_2275_ = v_isSharedCheck_2279_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_a_2272_);
lean_dec(v___x_2271_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2279_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
lean_object* v___x_2277_; 
if (v_isShared_2275_ == 0)
{
v___x_2277_ = v___x_2274_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v_a_2272_);
v___x_2277_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
return v___x_2277_;
}
}
}
}
}
}
else
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2280_ = l_Lean_Expr_getAppFn(v_e_2200_);
v___x_2281_ = l_Lean_Expr_constName_x21(v___x_2280_);
lean_inc(v_a_2204_);
lean_inc_ref(v_a_2203_);
lean_inc(v_a_2202_);
lean_inc_ref(v_a_2201_);
lean_inc(v___x_2281_);
v___x_2282_ = lean_get_congr_match_equations_for(v___x_2281_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2682_; 
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
v_isSharedCheck_2682_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2682_ == 0)
{
v___x_2285_ = v___x_2282_;
v_isShared_2286_ = v_isSharedCheck_2682_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_a_2283_);
lean_dec(v___x_2282_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2682_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2287_; uint8_t v___x_2288_; lean_object* v___y_2290_; lean_object* v_proof_2291_; 
v___x_2287_ = lean_array_get_size(v_a_2283_);
v___x_2288_ = lean_nat_dec_lt(v_altIdx_2199_, v___x_2287_);
if (v___x_2288_ == 0)
{
lean_object* v_toCold_2297_; lean_object* v_options_2298_; uint8_t v_hasTrace_2299_; 
lean_del_object(v___x_2285_);
lean_dec(v_a_2283_);
lean_dec_ref(v___x_2280_);
v_toCold_2297_ = lean_ctor_get(v_a_2203_, 0);
v_options_2298_ = lean_ctor_get(v_toCold_2297_, 2);
v_hasTrace_2299_ = lean_ctor_get_uint8(v_options_2298_, sizeof(void*)*1);
if (v_hasTrace_2299_ == 0)
{
lean_dec(v___x_2281_);
lean_dec(v_altIdx_2199_);
goto v___jp_2253_;
}
else
{
lean_object* v_inheritedTraceOptions_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; uint8_t v___x_2303_; 
v_inheritedTraceOptions_2300_ = lean_ctor_get(v_toCold_2297_, 11);
v___x_2301_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__8));
v___x_2302_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__11, &l_Lean_Meta_rwMatcher___closed__11_once, _init_l_Lean_Meta_rwMatcher___closed__11);
v___x_2303_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2300_, v_options_2298_, v___x_2302_);
if (v___x_2303_ == 0)
{
lean_dec(v___x_2281_);
lean_dec(v_altIdx_2199_);
goto v___jp_2253_;
}
else
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2304_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__15, &l_Lean_Meta_rwMatcher___closed__15_once, _init_l_Lean_Meta_rwMatcher___closed__15);
v___x_2305_ = l_Nat_reprFast(v_altIdx_2199_);
v___x_2306_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2305_);
v___x_2307_ = l_Lean_MessageData_ofFormat(v___x_2306_);
v___x_2308_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2304_);
lean_ctor_set(v___x_2308_, 1, v___x_2307_);
v___x_2309_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__17, &l_Lean_Meta_rwMatcher___closed__17_once, _init_l_Lean_Meta_rwMatcher___closed__17);
v___x_2310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2310_, 0, v___x_2308_);
lean_ctor_set(v___x_2310_, 1, v___x_2309_);
v___x_2311_ = l_Nat_reprFast(v___x_2287_);
v___x_2312_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
v___x_2313_ = l_Lean_MessageData_ofFormat(v___x_2312_);
v___x_2314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2310_);
lean_ctor_set(v___x_2314_, 1, v___x_2313_);
v___x_2315_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__19, &l_Lean_Meta_rwMatcher___closed__19_once, _init_l_Lean_Meta_rwMatcher___closed__19);
v___x_2316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2314_);
lean_ctor_set(v___x_2316_, 1, v___x_2315_);
v___x_2317_ = l_Lean_MessageData_ofConstName(v___x_2281_, v___x_2288_);
v___x_2318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2316_);
lean_ctor_set(v___x_2318_, 1, v___x_2317_);
v___x_2319_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2301_, v___x_2318_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2319_) == 0)
{
lean_dec_ref_known(v___x_2319_, 1);
goto v___jp_2253_;
}
else
{
lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2327_; 
lean_del_object(v___x_2251_);
lean_dec(v_a_2249_);
lean_dec_ref(v_e_2200_);
v_a_2320_ = lean_ctor_get(v___x_2319_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2322_ = v___x_2319_;
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_dec(v___x_2319_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
if (v_isShared_2323_ == 0)
{
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_a_2320_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_2328_; lean_object* v_options_2329_; lean_object* v_inheritedTraceOptions_2330_; uint8_t v_hasTrace_2331_; lean_object* v_nargs_2332_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v_a_2339_; lean_object* v___y_2366_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v_dummy_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
lean_dec(v___x_2281_);
lean_del_object(v___x_2251_);
lean_dec(v_a_2249_);
v_toCold_2328_ = lean_ctor_get(v_a_2203_, 0);
v_options_2329_ = lean_ctor_get(v_toCold_2328_, 2);
v_inheritedTraceOptions_2330_ = lean_ctor_get(v_toCold_2328_, 11);
v_hasTrace_2331_ = lean_ctor_get_uint8(v_options_2329_, sizeof(void*)*1);
v_nargs_2332_ = l_Lean_Expr_getAppNumArgs(v_e_2200_);
v___x_2336_ = lean_array_get(v___x_2247_, v_a_2283_, v_altIdx_2199_);
lean_dec(v_altIdx_2199_);
lean_dec(v_a_2283_);
v___x_2337_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__8));
v___x_2368_ = l_Lean_Expr_constLevels_x21(v___x_2280_);
lean_dec_ref(v___x_2280_);
lean_inc(v___x_2336_);
v___x_2369_ = l_Lean_mkConst(v___x_2336_, v___x_2368_);
v_dummy_2370_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__24, &l_Lean_Meta_rwMatcher___closed__24_once, _init_l_Lean_Meta_rwMatcher___closed__24);
lean_inc(v_nargs_2332_);
v___x_2371_ = lean_mk_array(v_nargs_2332_, v_dummy_2370_);
v___x_2372_ = lean_unsigned_to_nat(1u);
v___x_2373_ = lean_nat_sub(v_nargs_2332_, v___x_2372_);
lean_dec(v_nargs_2332_);
lean_inc_ref(v_e_2200_);
v___x_2374_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2200_, v___x_2371_, v___x_2373_);
v___x_2375_ = l_Lean_mkAppN(v___x_2369_, v___x_2374_);
lean_dec_ref(v___x_2374_);
if (v_hasTrace_2331_ == 0)
{
lean_object* v___x_2376_; 
lean_inc(v_a_2204_);
lean_inc_ref(v_a_2203_);
lean_inc(v_a_2202_);
lean_inc_ref(v_a_2201_);
lean_inc_ref(v___x_2375_);
v___x_2376_ = lean_infer_type(v___x_2375_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2376_) == 0)
{
lean_object* v_a_2377_; uint8_t v___x_2378_; lean_object* v___x_2379_; 
v_a_2377_ = lean_ctor_get(v___x_2376_, 0);
lean_inc(v_a_2377_);
lean_dec_ref_known(v___x_2376_, 1);
v___x_2378_ = 0;
v___x_2379_ = l_Lean_Meta_forallMetaTelescope(v_a_2377_, v___x_2378_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_object* v_a_2380_; lean_object* v_snd_2381_; lean_object* v_fst_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2518_; 
v_a_2380_ = lean_ctor_get(v___x_2379_, 0);
lean_inc(v_a_2380_);
lean_dec_ref_known(v___x_2379_, 1);
v_snd_2381_ = lean_ctor_get(v_a_2380_, 1);
v_fst_2382_ = lean_ctor_get(v_a_2380_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v_a_2380_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2384_ = v_a_2380_;
v_isShared_2385_ = v_isSharedCheck_2518_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_snd_2381_);
lean_inc(v_fst_2382_);
lean_dec(v_a_2380_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2518_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v_snd_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2516_; 
v_snd_2386_ = lean_ctor_get(v_snd_2381_, 1);
v_isSharedCheck_2516_ = !lean_is_exclusive(v_snd_2381_);
if (v_isSharedCheck_2516_ == 0)
{
lean_object* v_unused_2517_; 
v_unused_2517_ = lean_ctor_get(v_snd_2381_, 0);
lean_dec(v_unused_2517_);
v___x_2388_ = v_snd_2381_;
v_isShared_2389_ = v_isSharedCheck_2516_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_snd_2386_);
lean_dec(v_snd_2381_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2516_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
lean_object* v___x_2390_; lean_object* v___y_2392_; uint8_t v___y_2393_; lean_object* v___y_2394_; lean_object* v___y_2395_; lean_object* v___y_2396_; lean_object* v___y_2397_; lean_object* v___y_2425_; lean_object* v___y_2426_; lean_object* v___y_2427_; lean_object* v___y_2428_; uint8_t v___y_2429_; lean_object* v___y_2430_; lean_object* v_a_2431_; size_t v_sz_2447_; size_t v___x_2448_; lean_object* v___x_2449_; lean_object* v___y_2451_; uint8_t v___y_2452_; lean_object* v___y_2453_; lean_object* v___y_2454_; lean_object* v___y_2455_; lean_object* v___y_2456_; uint8_t v_fst_2470_; lean_object* v_fst_2471_; lean_object* v_snd_2472_; lean_object* v___y_2473_; lean_object* v___y_2474_; lean_object* v___y_2475_; lean_object* v___y_2476_; lean_object* v___x_2496_; lean_object* v___x_2497_; uint8_t v___x_2498_; 
v___x_2390_ = l_Lean_mkAppN(v___x_2375_, v_fst_2382_);
v_sz_2447_ = lean_array_size(v_fst_2382_);
v___x_2448_ = ((size_t)0ULL);
v___x_2449_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(v_sz_2447_, v___x_2448_, v_fst_2382_);
v___x_2496_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__18));
v___x_2497_ = lean_unsigned_to_nat(4u);
v___x_2498_ = l_Lean_Expr_isAppOfArity(v_snd_2386_, v___x_2496_, v___x_2497_);
if (v___x_2498_ == 0)
{
lean_object* v___x_2499_; lean_object* v___x_2500_; uint8_t v___x_2501_; 
v___x_2499_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__20));
v___x_2500_ = lean_unsigned_to_nat(3u);
v___x_2501_ = l_Lean_Expr_isAppOfArity(v_snd_2386_, v___x_2499_, v___x_2500_);
if (v___x_2501_ == 0)
{
lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v_a_2508_; 
lean_dec_ref(v___x_2449_);
lean_dec_ref(v___x_2390_);
lean_del_object(v___x_2388_);
lean_dec(v_snd_2386_);
lean_del_object(v___x_2384_);
lean_del_object(v___x_2285_);
v___x_2502_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__22, &l_Lean_Meta_rwMatcher___lam__2___closed__22_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__22);
lean_inc(v___x_2336_);
v___x_2503_ = l_Lean_MessageData_ofConstName(v___x_2336_, v_hasTrace_2331_);
v___x_2504_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2502_);
lean_ctor_set(v___x_2504_, 1, v___x_2503_);
v___x_2505_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__24, &l_Lean_Meta_rwMatcher___lam__2___closed__24_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__24);
v___x_2506_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2504_);
lean_ctor_set(v___x_2506_, 1, v___x_2505_);
v___x_2507_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_2506_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
v_a_2508_ = lean_ctor_get(v___x_2507_, 0);
lean_inc(v_a_2508_);
lean_dec_ref(v___x_2507_);
v_a_2339_ = v_a_2508_;
goto v___jp_2338_;
}
else
{
lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2509_ = l_Lean_Expr_appFn_x21(v_snd_2386_);
v___x_2510_ = l_Lean_Expr_appArg_x21(v___x_2509_);
lean_dec_ref(v___x_2509_);
v___x_2511_ = l_Lean_Expr_appArg_x21(v_snd_2386_);
lean_dec(v_snd_2386_);
v_fst_2470_ = v_hasTrace_2331_;
v_fst_2471_ = v___x_2510_;
v_snd_2472_ = v___x_2511_;
v___y_2473_ = v_a_2201_;
v___y_2474_ = v_a_2202_;
v___y_2475_ = v_a_2203_;
v___y_2476_ = v_a_2204_;
goto v___jp_2469_;
}
}
else
{
lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; 
v___x_2512_ = l_Lean_Expr_appFn_x21(v_snd_2386_);
v___x_2513_ = l_Lean_Expr_appFn_x21(v___x_2512_);
lean_dec_ref(v___x_2512_);
v___x_2514_ = l_Lean_Expr_appArg_x21(v___x_2513_);
lean_dec_ref(v___x_2513_);
v___x_2515_ = l_Lean_Expr_appArg_x21(v_snd_2386_);
lean_dec(v_snd_2386_);
v_fst_2470_ = v___x_2288_;
v_fst_2471_ = v___x_2514_;
v_snd_2472_ = v___x_2515_;
v___y_2473_ = v_a_2201_;
v___y_2474_ = v_a_2202_;
v___y_2475_ = v_a_2203_;
v___y_2476_ = v_a_2204_;
goto v___jp_2469_;
}
v___jp_2391_:
{
lean_object* v___x_2398_; lean_object* v_a_2399_; lean_object* v___x_2400_; 
v___x_2398_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___y_2392_, v___y_2395_);
v_a_2399_ = lean_ctor_get(v___x_2398_, 0);
lean_inc(v_a_2399_);
lean_dec_ref(v___x_2398_);
v___x_2400_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___x_2390_, v___y_2395_);
if (v___y_2393_ == 0)
{
lean_object* v_a_2401_; 
lean_del_object(v___x_2388_);
lean_del_object(v___x_2384_);
lean_dec(v___x_2336_);
lean_dec_ref(v_e_2200_);
v_a_2401_ = lean_ctor_get(v___x_2400_, 0);
lean_inc(v_a_2401_);
lean_dec_ref(v___x_2400_);
v___y_2290_ = v_a_2399_;
v_proof_2291_ = v_a_2401_;
goto v___jp_2289_;
}
else
{
lean_object* v_a_2402_; lean_object* v___x_2403_; 
v_a_2402_ = lean_ctor_get(v___x_2400_, 0);
lean_inc_n(v_a_2402_, 2);
lean_dec_ref(v___x_2400_);
v___x_2403_ = l_Lean_Meta_mkEqOfHEq(v_a_2402_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_);
if (lean_obj_tag(v___x_2403_) == 0)
{
lean_object* v_a_2404_; 
lean_dec(v_a_2402_);
lean_del_object(v___x_2388_);
lean_del_object(v___x_2384_);
lean_dec(v___x_2336_);
lean_dec_ref(v_e_2200_);
v_a_2404_ = lean_ctor_get(v___x_2403_, 0);
lean_inc(v_a_2404_);
lean_dec_ref_known(v___x_2403_, 1);
v___y_2290_ = v_a_2399_;
v_proof_2291_ = v_a_2404_;
goto v___jp_2289_;
}
else
{
lean_object* v_a_2405_; uint8_t v___x_2406_; 
lean_dec(v_a_2399_);
lean_del_object(v___x_2285_);
v_a_2405_ = lean_ctor_get(v___x_2403_, 0);
lean_inc(v_a_2405_);
lean_dec_ref_known(v___x_2403_, 1);
v___x_2406_ = l_Lean_Exception_isInterrupt(v_a_2405_);
if (v___x_2406_ == 0)
{
uint8_t v___x_2407_; 
lean_inc(v_a_2405_);
v___x_2407_ = l_Lean_Exception_isRuntime(v_a_2405_);
if (v___x_2407_ == 0)
{
lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2411_; 
v___x_2408_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__1, &l_Lean_Meta_rwMatcher___lam__2___closed__1_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__1);
v___x_2409_ = l_Lean_MessageData_ofExpr(v_a_2402_);
if (v_isShared_2389_ == 0)
{
lean_ctor_set_tag(v___x_2388_, 7);
lean_ctor_set(v___x_2388_, 1, v___x_2409_);
lean_ctor_set(v___x_2388_, 0, v___x_2408_);
v___x_2411_ = v___x_2388_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v___x_2408_);
lean_ctor_set(v_reuseFailAlloc_2423_, 1, v___x_2409_);
v___x_2411_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
lean_object* v___x_2412_; lean_object* v___x_2414_; 
v___x_2412_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__3, &l_Lean_Meta_rwMatcher___lam__2___closed__3_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__3);
if (v_isShared_2385_ == 0)
{
lean_ctor_set_tag(v___x_2384_, 7);
lean_ctor_set(v___x_2384_, 1, v___x_2412_);
lean_ctor_set(v___x_2384_, 0, v___x_2411_);
v___x_2414_ = v___x_2384_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v___x_2411_);
lean_ctor_set(v_reuseFailAlloc_2422_, 1, v___x_2412_);
v___x_2414_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v_a_2421_; 
v___x_2415_ = l_Lean_Exception_toMessageData(v_a_2405_);
v___x_2416_ = l_Lean_indentD(v___x_2415_);
v___x_2417_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2417_, 0, v___x_2414_);
lean_ctor_set(v___x_2417_, 1, v___x_2416_);
v___x_2418_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__5, &l_Lean_Meta_rwMatcher___lam__2___closed__5_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__5);
v___x_2419_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2417_);
lean_ctor_set(v___x_2419_, 1, v___x_2418_);
v___x_2420_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_2419_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_);
v_a_2421_ = lean_ctor_get(v___x_2420_, 0);
lean_inc(v_a_2421_);
lean_dec_ref(v___x_2420_);
v_a_2339_ = v_a_2421_;
goto v___jp_2338_;
}
}
}
else
{
lean_dec(v_a_2402_);
lean_del_object(v___x_2388_);
lean_del_object(v___x_2384_);
v_a_2339_ = v_a_2405_;
goto v___jp_2338_;
}
}
else
{
lean_dec(v_a_2402_);
lean_del_object(v___x_2388_);
lean_del_object(v___x_2384_);
v_a_2339_ = v_a_2405_;
goto v___jp_2338_;
}
}
}
}
v___jp_2424_:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; uint8_t v___x_2434_; 
v___x_2432_ = lean_array_get_size(v_a_2431_);
v___x_2433_ = lean_unsigned_to_nat(0u);
v___x_2434_ = lean_nat_dec_eq(v___x_2432_, v___x_2433_);
if (v___x_2434_ == 0)
{
lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v_a_2446_; 
lean_dec_ref(v___y_2425_);
lean_dec_ref(v___x_2390_);
lean_del_object(v___x_2388_);
lean_del_object(v___x_2384_);
lean_del_object(v___x_2285_);
v___x_2435_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__7, &l_Lean_Meta_rwMatcher___lam__2___closed__7_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__7);
lean_inc(v___x_2336_);
v___x_2436_ = l_Lean_MessageData_ofConstName(v___x_2336_, v___x_2434_);
v___x_2437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2437_, 0, v___x_2435_);
lean_ctor_set(v___x_2437_, 1, v___x_2436_);
v___x_2438_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__9, &l_Lean_Meta_rwMatcher___lam__2___closed__9_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__9);
v___x_2439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2437_);
lean_ctor_set(v___x_2439_, 1, v___x_2438_);
v___x_2440_ = lean_array_to_list(v_a_2431_);
v___x_2441_ = lean_box(0);
v___x_2442_ = l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(v___x_2440_, v___x_2441_);
v___x_2443_ = l_Lean_MessageData_ofList(v___x_2442_);
v___x_2444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2439_);
lean_ctor_set(v___x_2444_, 1, v___x_2443_);
v___x_2445_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_2444_, v___y_2426_, v___y_2427_, v___y_2430_, v___y_2428_);
v_a_2446_ = lean_ctor_get(v___x_2445_, 0);
lean_inc(v_a_2446_);
lean_dec_ref(v___x_2445_);
v_a_2339_ = v_a_2446_;
goto v___jp_2338_;
}
else
{
lean_dec_ref(v_a_2431_);
v___y_2392_ = v___y_2425_;
v___y_2393_ = v___y_2429_;
v___y_2394_ = v___y_2426_;
v___y_2395_ = v___y_2427_;
v___y_2396_ = v___y_2430_;
v___y_2397_ = v___y_2428_;
goto v___jp_2391_;
}
}
v___jp_2450_:
{
lean_object* v___x_2457_; size_t v_sz_2458_; lean_object* v___x_2459_; 
v___x_2457_ = lean_box(0);
v_sz_2458_ = lean_array_size(v___x_2449_);
v___x_2459_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(v___x_2449_, v_sz_2458_, v___x_2448_, v___x_2457_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_);
if (lean_obj_tag(v___x_2459_) == 0)
{
lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; uint8_t v___x_2463_; 
lean_dec_ref_known(v___x_2459_, 1);
v___x_2460_ = lean_unsigned_to_nat(0u);
v___x_2461_ = lean_array_get_size(v___x_2449_);
v___x_2462_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__10));
v___x_2463_ = lean_nat_dec_lt(v___x_2460_, v___x_2461_);
if (v___x_2463_ == 0)
{
lean_dec_ref(v___x_2449_);
v___y_2425_ = v___y_2451_;
v___y_2426_ = v___y_2453_;
v___y_2427_ = v___y_2454_;
v___y_2428_ = v___y_2456_;
v___y_2429_ = v___y_2452_;
v___y_2430_ = v___y_2455_;
v_a_2431_ = v___x_2462_;
goto v___jp_2424_;
}
else
{
size_t v___x_2464_; lean_object* v___x_2465_; 
v___x_2464_ = lean_usize_of_nat(v___x_2461_);
v___x_2465_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(v___x_2449_, v___x_2448_, v___x_2464_, v___x_2462_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_);
lean_dec_ref(v___x_2449_);
if (lean_obj_tag(v___x_2465_) == 0)
{
lean_object* v_a_2466_; 
v_a_2466_ = lean_ctor_get(v___x_2465_, 0);
lean_inc(v_a_2466_);
lean_dec_ref_known(v___x_2465_, 1);
v___y_2425_ = v___y_2451_;
v___y_2426_ = v___y_2453_;
v___y_2427_ = v___y_2454_;
v___y_2428_ = v___y_2456_;
v___y_2429_ = v___y_2452_;
v___y_2430_ = v___y_2455_;
v_a_2431_ = v_a_2466_;
goto v___jp_2424_;
}
else
{
lean_object* v_a_2467_; 
lean_dec_ref(v___y_2451_);
lean_dec_ref(v___x_2390_);
lean_del_object(v___x_2388_);
lean_del_object(v___x_2384_);
lean_del_object(v___x_2285_);
v_a_2467_ = lean_ctor_get(v___x_2465_, 0);
lean_inc(v_a_2467_);
lean_dec_ref_known(v___x_2465_, 1);
v_a_2339_ = v_a_2467_;
goto v___jp_2338_;
}
}
}
else
{
lean_object* v_a_2468_; 
lean_dec_ref(v___y_2451_);
lean_dec_ref(v___x_2449_);
lean_dec_ref(v___x_2390_);
lean_del_object(v___x_2388_);
lean_del_object(v___x_2384_);
lean_del_object(v___x_2285_);
v_a_2468_ = lean_ctor_get(v___x_2459_, 0);
lean_inc(v_a_2468_);
lean_dec_ref_known(v___x_2459_, 1);
v_a_2339_ = v_a_2468_;
goto v___jp_2338_;
}
}
v___jp_2469_:
{
lean_object* v___x_2477_; 
lean_inc_ref(v_fst_2471_);
lean_inc_ref(v_e_2200_);
v___x_2477_ = l_Lean_Meta_isExprDefEq(v_e_2200_, v_fst_2471_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_);
if (lean_obj_tag(v___x_2477_) == 0)
{
lean_object* v_a_2478_; uint8_t v___x_2479_; 
v_a_2478_ = lean_ctor_get(v___x_2477_, 0);
lean_inc(v_a_2478_);
lean_dec_ref_known(v___x_2477_, 1);
v___x_2479_ = lean_unbox(v_a_2478_);
lean_dec(v_a_2478_);
if (v___x_2479_ == 0)
{
lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v_a_2494_; 
lean_dec_ref(v_snd_2472_);
lean_dec_ref(v___x_2449_);
lean_dec_ref(v___x_2390_);
lean_del_object(v___x_2388_);
lean_del_object(v___x_2384_);
lean_del_object(v___x_2285_);
v___x_2480_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__12, &l_Lean_Meta_rwMatcher___lam__2___closed__12_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__12);
v___x_2481_ = l_Lean_MessageData_ofExpr(v_fst_2471_);
v___x_2482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2480_);
lean_ctor_set(v___x_2482_, 1, v___x_2481_);
v___x_2483_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__14, &l_Lean_Meta_rwMatcher___lam__2___closed__14_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__14);
v___x_2484_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2482_);
lean_ctor_set(v___x_2484_, 1, v___x_2483_);
lean_inc(v___x_2336_);
v___x_2485_ = l_Lean_MessageData_ofConstName(v___x_2336_, v_hasTrace_2331_);
v___x_2486_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2486_, 0, v___x_2484_);
lean_ctor_set(v___x_2486_, 1, v___x_2485_);
v___x_2487_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__16, &l_Lean_Meta_rwMatcher___lam__2___closed__16_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__16);
v___x_2488_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2488_, 0, v___x_2486_);
lean_ctor_set(v___x_2488_, 1, v___x_2487_);
lean_inc_ref(v_e_2200_);
v___x_2489_ = l_Lean_MessageData_ofExpr(v_e_2200_);
v___x_2490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2488_);
lean_ctor_set(v___x_2490_, 1, v___x_2489_);
v___x_2491_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_2492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2492_, 0, v___x_2490_);
lean_ctor_set(v___x_2492_, 1, v___x_2491_);
v___x_2493_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_2492_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_);
v_a_2494_ = lean_ctor_get(v___x_2493_, 0);
lean_inc(v_a_2494_);
lean_dec_ref(v___x_2493_);
v_a_2339_ = v_a_2494_;
goto v___jp_2338_;
}
else
{
lean_dec_ref(v_fst_2471_);
v___y_2451_ = v_snd_2472_;
v___y_2452_ = v_fst_2470_;
v___y_2453_ = v___y_2473_;
v___y_2454_ = v___y_2474_;
v___y_2455_ = v___y_2475_;
v___y_2456_ = v___y_2476_;
goto v___jp_2450_;
}
}
else
{
lean_object* v_a_2495_; 
lean_dec_ref(v_snd_2472_);
lean_dec_ref(v_fst_2471_);
lean_dec_ref(v___x_2449_);
lean_dec_ref(v___x_2390_);
lean_del_object(v___x_2388_);
lean_del_object(v___x_2384_);
lean_del_object(v___x_2285_);
v_a_2495_ = lean_ctor_get(v___x_2477_, 0);
lean_inc(v_a_2495_);
lean_dec_ref_known(v___x_2477_, 1);
v_a_2339_ = v_a_2495_;
goto v___jp_2338_;
}
}
}
}
}
else
{
lean_object* v_a_2519_; 
lean_dec_ref(v___x_2375_);
lean_del_object(v___x_2285_);
v_a_2519_ = lean_ctor_get(v___x_2379_, 0);
lean_inc(v_a_2519_);
lean_dec_ref_known(v___x_2379_, 1);
v_a_2339_ = v_a_2519_;
goto v___jp_2338_;
}
}
else
{
lean_object* v_a_2520_; 
lean_dec_ref(v___x_2375_);
lean_del_object(v___x_2285_);
v_a_2520_ = lean_ctor_get(v___x_2376_, 0);
lean_inc(v_a_2520_);
lean_dec_ref_known(v___x_2376_, 1);
v_a_2339_ = v_a_2520_;
goto v___jp_2338_;
}
}
else
{
lean_object* v___x_2521_; lean_object* v___f_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; uint8_t v___x_2525_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v_a_2529_; lean_object* v___y_2542_; lean_object* v___y_2543_; lean_object* v_a_2544_; lean_object* v___y_2547_; lean_object* v___y_2548_; lean_object* v___y_2549_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v_a_2562_; lean_object* v___y_2572_; lean_object* v___y_2573_; lean_object* v_a_2574_; lean_object* v___y_2577_; lean_object* v___y_2578_; lean_object* v___y_2579_; 
lean_del_object(v___x_2285_);
v___x_2521_ = lean_box(v___x_2246_);
lean_inc_ref(v_e_2200_);
lean_inc(v___x_2336_);
v___f_2522_ = lean_alloc_closure((void*)(l_Lean_Meta_rwMatcher___lam__1___boxed), 9, 3);
lean_closure_set(v___f_2522_, 0, v___x_2336_);
lean_closure_set(v___f_2522_, 1, v___x_2521_);
lean_closure_set(v___f_2522_, 2, v_e_2200_);
v___x_2523_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__1));
v___x_2524_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__11, &l_Lean_Meta_rwMatcher___closed__11_once, _init_l_Lean_Meta_rwMatcher___closed__11);
v___x_2525_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2330_, v_options_2329_, v___x_2524_);
if (v___x_2525_ == 0)
{
lean_object* v___x_2652_; uint8_t v___x_2653_; 
v___x_2652_ = l_Lean_trace_profiler;
v___x_2653_ = l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(v_options_2329_, v___x_2652_);
if (v___x_2653_ == 0)
{
lean_object* v___x_2654_; 
lean_dec_ref(v___f_2522_);
lean_inc(v_a_2204_);
lean_inc_ref(v_a_2203_);
lean_inc(v_a_2202_);
lean_inc_ref(v_a_2201_);
lean_inc_ref(v___x_2375_);
v___x_2654_ = lean_infer_type(v___x_2375_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_object* v_a_2655_; uint8_t v___x_2656_; lean_object* v___x_2657_; 
v_a_2655_ = lean_ctor_get(v___x_2654_, 0);
lean_inc(v_a_2655_);
lean_dec_ref_known(v___x_2654_, 1);
v___x_2656_ = 0;
v___x_2657_ = l_Lean_Meta_forallMetaTelescope(v_a_2655_, v___x_2656_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2657_) == 0)
{
lean_object* v_a_2658_; lean_object* v_snd_2659_; 
v_a_2658_ = lean_ctor_get(v___x_2657_, 0);
lean_inc(v_a_2658_);
lean_dec_ref_known(v___x_2657_, 1);
v_snd_2659_ = lean_ctor_get(v_a_2658_, 1);
lean_inc(v_snd_2659_);
if (v___x_2525_ == 0)
{
lean_object* v_fst_2660_; lean_object* v_snd_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; 
v_fst_2660_ = lean_ctor_get(v_a_2658_, 0);
lean_inc(v_fst_2660_);
lean_dec(v_a_2658_);
v_snd_2661_ = lean_ctor_get(v_snd_2659_, 1);
lean_inc(v_snd_2661_);
lean_dec(v_snd_2659_);
v___x_2662_ = lean_box(0);
lean_inc_ref(v_e_2200_);
lean_inc(v___x_2336_);
v___x_2663_ = l_Lean_Meta_rwMatcher___lam__4(v_hasTrace_2331_, v___x_2375_, v_fst_2660_, v___x_2336_, v_e_2200_, v___x_2653_, v_snd_2661_, v___x_2662_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
lean_dec(v_snd_2661_);
v___y_2366_ = v___x_2663_;
goto v___jp_2365_;
}
else
{
lean_object* v_fst_2664_; lean_object* v_snd_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2678_; 
v_fst_2664_ = lean_ctor_get(v_a_2658_, 0);
lean_inc(v_fst_2664_);
lean_dec(v_a_2658_);
v_snd_2665_ = lean_ctor_get(v_snd_2659_, 1);
v_isSharedCheck_2678_ = !lean_is_exclusive(v_snd_2659_);
if (v_isSharedCheck_2678_ == 0)
{
lean_object* v_unused_2679_; 
v_unused_2679_ = lean_ctor_get(v_snd_2659_, 0);
lean_dec(v_unused_2679_);
v___x_2667_ = v_snd_2659_;
v_isShared_2668_ = v_isSharedCheck_2678_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_snd_2665_);
lean_dec(v_snd_2659_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2678_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2672_; 
v___x_2669_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__27, &l_Lean_Meta_rwMatcher___closed__27_once, _init_l_Lean_Meta_rwMatcher___closed__27);
lean_inc(v_snd_2665_);
v___x_2670_ = l_Lean_indentExpr(v_snd_2665_);
if (v_isShared_2668_ == 0)
{
lean_ctor_set_tag(v___x_2667_, 7);
lean_ctor_set(v___x_2667_, 1, v___x_2670_);
lean_ctor_set(v___x_2667_, 0, v___x_2669_);
v___x_2672_ = v___x_2667_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v___x_2669_);
lean_ctor_set(v_reuseFailAlloc_2677_, 1, v___x_2670_);
v___x_2672_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
lean_object* v___x_2673_; 
v___x_2673_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2337_, v___x_2672_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2673_) == 0)
{
lean_object* v_a_2674_; lean_object* v___x_2675_; 
v_a_2674_ = lean_ctor_get(v___x_2673_, 0);
lean_inc(v_a_2674_);
lean_dec_ref_known(v___x_2673_, 1);
lean_inc_ref(v_e_2200_);
lean_inc(v___x_2336_);
v___x_2675_ = l_Lean_Meta_rwMatcher___lam__4(v_hasTrace_2331_, v___x_2375_, v_fst_2664_, v___x_2336_, v_e_2200_, v___x_2653_, v_snd_2665_, v_a_2674_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
lean_dec(v_snd_2665_);
v___y_2366_ = v___x_2675_;
goto v___jp_2365_;
}
else
{
lean_object* v_a_2676_; 
lean_dec(v_snd_2665_);
lean_dec(v_fst_2664_);
lean_dec_ref(v___x_2375_);
v_a_2676_ = lean_ctor_get(v___x_2673_, 0);
lean_inc(v_a_2676_);
lean_dec_ref_known(v___x_2673_, 1);
v_a_2339_ = v_a_2676_;
goto v___jp_2338_;
}
}
}
}
}
else
{
lean_object* v_a_2680_; 
lean_dec_ref(v___x_2375_);
v_a_2680_ = lean_ctor_get(v___x_2657_, 0);
lean_inc(v_a_2680_);
lean_dec_ref_known(v___x_2657_, 1);
v_a_2339_ = v_a_2680_;
goto v___jp_2338_;
}
}
else
{
lean_object* v_a_2681_; 
lean_dec_ref(v___x_2375_);
v_a_2681_ = lean_ctor_get(v___x_2654_, 0);
lean_inc(v_a_2681_);
lean_dec_ref_known(v___x_2654_, 1);
v_a_2339_ = v_a_2681_;
goto v___jp_2338_;
}
}
else
{
goto v___jp_2589_;
}
}
else
{
goto v___jp_2589_;
}
v___jp_2526_:
{
lean_object* v___x_2530_; double v___x_2531_; double v___x_2532_; double v___x_2533_; double v___x_2534_; double v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2530_ = lean_io_mono_nanos_now();
v___x_2531_ = lean_float_of_nat(v___y_2527_);
v___x_2532_ = lean_float_once(&l_Lean_Meta_rwMatcher___closed__25, &l_Lean_Meta_rwMatcher___closed__25_once, _init_l_Lean_Meta_rwMatcher___closed__25);
v___x_2533_ = lean_float_div(v___x_2531_, v___x_2532_);
v___x_2534_ = lean_float_of_nat(v___x_2530_);
v___x_2535_ = lean_float_div(v___x_2534_, v___x_2532_);
v___x_2536_ = lean_box_float(v___x_2533_);
v___x_2537_ = lean_box_float(v___x_2535_);
v___x_2538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2538_, 0, v___x_2536_);
lean_ctor_set(v___x_2538_, 1, v___x_2537_);
v___x_2539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2539_, 0, v_a_2529_);
lean_ctor_set(v___x_2539_, 1, v___x_2538_);
v___x_2540_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12(v___x_2337_, v___x_2288_, v___x_2523_, v_options_2329_, v___x_2525_, v___y_2528_, v___f_2522_, v___x_2539_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
v___y_2366_ = v___x_2540_;
goto v___jp_2365_;
}
v___jp_2541_:
{
lean_object* v___x_2545_; 
v___x_2545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2545_, 0, v_a_2544_);
v___y_2527_ = v___y_2542_;
v___y_2528_ = v___y_2543_;
v_a_2529_ = v___x_2545_;
goto v___jp_2526_;
}
v___jp_2546_:
{
if (lean_obj_tag(v___y_2549_) == 0)
{
lean_object* v_a_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2557_; 
v_a_2550_ = lean_ctor_get(v___y_2549_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___y_2549_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2552_ = v___y_2549_;
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v___y_2549_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v___x_2555_; 
if (v_isShared_2553_ == 0)
{
lean_ctor_set_tag(v___x_2552_, 1);
v___x_2555_ = v___x_2552_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v_a_2550_);
v___x_2555_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
v___y_2527_ = v___y_2547_;
v___y_2528_ = v___y_2548_;
v_a_2529_ = v___x_2555_;
goto v___jp_2526_;
}
}
}
else
{
lean_object* v_a_2558_; 
v_a_2558_ = lean_ctor_get(v___y_2549_, 0);
lean_inc(v_a_2558_);
lean_dec_ref_known(v___y_2549_, 1);
v___y_2542_ = v___y_2547_;
v___y_2543_ = v___y_2548_;
v_a_2544_ = v_a_2558_;
goto v___jp_2541_;
}
}
v___jp_2559_:
{
lean_object* v___x_2563_; double v___x_2564_; double v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___x_2563_ = lean_io_get_num_heartbeats();
v___x_2564_ = lean_float_of_nat(v___y_2561_);
v___x_2565_ = lean_float_of_nat(v___x_2563_);
v___x_2566_ = lean_box_float(v___x_2564_);
v___x_2567_ = lean_box_float(v___x_2565_);
v___x_2568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2566_);
lean_ctor_set(v___x_2568_, 1, v___x_2567_);
v___x_2569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2569_, 0, v_a_2562_);
lean_ctor_set(v___x_2569_, 1, v___x_2568_);
v___x_2570_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12(v___x_2337_, v___x_2288_, v___x_2523_, v_options_2329_, v___x_2525_, v___y_2560_, v___f_2522_, v___x_2569_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
v___y_2366_ = v___x_2570_;
goto v___jp_2365_;
}
v___jp_2571_:
{
lean_object* v___x_2575_; 
v___x_2575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2575_, 0, v_a_2574_);
v___y_2560_ = v___y_2573_;
v___y_2561_ = v___y_2572_;
v_a_2562_ = v___x_2575_;
goto v___jp_2559_;
}
v___jp_2576_:
{
if (lean_obj_tag(v___y_2579_) == 0)
{
lean_object* v_a_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2587_; 
v_a_2580_ = lean_ctor_get(v___y_2579_, 0);
v_isSharedCheck_2587_ = !lean_is_exclusive(v___y_2579_);
if (v_isSharedCheck_2587_ == 0)
{
v___x_2582_ = v___y_2579_;
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_a_2580_);
lean_dec(v___y_2579_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2585_; 
if (v_isShared_2583_ == 0)
{
lean_ctor_set_tag(v___x_2582_, 1);
v___x_2585_ = v___x_2582_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v_a_2580_);
v___x_2585_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
v___y_2560_ = v___y_2578_;
v___y_2561_ = v___y_2577_;
v_a_2562_ = v___x_2585_;
goto v___jp_2559_;
}
}
}
else
{
lean_object* v_a_2588_; 
v_a_2588_ = lean_ctor_get(v___y_2579_, 0);
lean_inc(v_a_2588_);
lean_dec_ref_known(v___y_2579_, 1);
v___y_2572_ = v___y_2577_;
v___y_2573_ = v___y_2578_;
v_a_2574_ = v_a_2588_;
goto v___jp_2571_;
}
}
v___jp_2589_:
{
lean_object* v___x_2590_; lean_object* v_a_2591_; lean_object* v___x_2592_; uint8_t v___x_2593_; 
v___x_2590_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg(v_a_2204_);
v_a_2591_ = lean_ctor_get(v___x_2590_, 0);
lean_inc(v_a_2591_);
lean_dec_ref(v___x_2590_);
v___x_2592_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2593_ = l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(v_options_2329_, v___x_2592_);
if (v___x_2593_ == 0)
{
lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2594_ = lean_io_mono_nanos_now();
lean_inc(v_a_2204_);
lean_inc_ref(v_a_2203_);
lean_inc(v_a_2202_);
lean_inc_ref(v_a_2201_);
lean_inc_ref(v___x_2375_);
v___x_2595_ = lean_infer_type(v___x_2375_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2595_) == 0)
{
lean_object* v_a_2596_; uint8_t v___x_2597_; lean_object* v___x_2598_; 
v_a_2596_ = lean_ctor_get(v___x_2595_, 0);
lean_inc(v_a_2596_);
lean_dec_ref_known(v___x_2595_, 1);
v___x_2597_ = 0;
v___x_2598_ = l_Lean_Meta_forallMetaTelescope(v_a_2596_, v___x_2597_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v_a_2599_; lean_object* v_snd_2600_; 
v_a_2599_ = lean_ctor_get(v___x_2598_, 0);
lean_inc(v_a_2599_);
lean_dec_ref_known(v___x_2598_, 1);
v_snd_2600_ = lean_ctor_get(v_a_2599_, 1);
lean_inc(v_snd_2600_);
if (v___x_2525_ == 0)
{
lean_object* v_fst_2601_; lean_object* v_snd_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
v_fst_2601_ = lean_ctor_get(v_a_2599_, 0);
lean_inc(v_fst_2601_);
lean_dec(v_a_2599_);
v_snd_2602_ = lean_ctor_get(v_snd_2600_, 1);
lean_inc(v_snd_2602_);
lean_dec(v_snd_2600_);
v___x_2603_ = lean_box(0);
lean_inc_ref(v_e_2200_);
lean_inc(v___x_2336_);
v___x_2604_ = l_Lean_Meta_rwMatcher___lam__2(v_hasTrace_2331_, v___x_2375_, v_fst_2601_, v___x_2336_, v_e_2200_, v___x_2593_, v_snd_2602_, v___x_2603_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
lean_dec(v_snd_2602_);
v___y_2547_ = v___x_2594_;
v___y_2548_ = v_a_2591_;
v___y_2549_ = v___x_2604_;
goto v___jp_2546_;
}
else
{
lean_object* v_fst_2605_; lean_object* v_snd_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2619_; 
v_fst_2605_ = lean_ctor_get(v_a_2599_, 0);
lean_inc(v_fst_2605_);
lean_dec(v_a_2599_);
v_snd_2606_ = lean_ctor_get(v_snd_2600_, 1);
v_isSharedCheck_2619_ = !lean_is_exclusive(v_snd_2600_);
if (v_isSharedCheck_2619_ == 0)
{
lean_object* v_unused_2620_; 
v_unused_2620_ = lean_ctor_get(v_snd_2600_, 0);
lean_dec(v_unused_2620_);
v___x_2608_ = v_snd_2600_;
v_isShared_2609_ = v_isSharedCheck_2619_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_snd_2606_);
lean_dec(v_snd_2600_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2619_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2613_; 
v___x_2610_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__27, &l_Lean_Meta_rwMatcher___closed__27_once, _init_l_Lean_Meta_rwMatcher___closed__27);
lean_inc(v_snd_2606_);
v___x_2611_ = l_Lean_indentExpr(v_snd_2606_);
if (v_isShared_2609_ == 0)
{
lean_ctor_set_tag(v___x_2608_, 7);
lean_ctor_set(v___x_2608_, 1, v___x_2611_);
lean_ctor_set(v___x_2608_, 0, v___x_2610_);
v___x_2613_ = v___x_2608_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v___x_2610_);
lean_ctor_set(v_reuseFailAlloc_2618_, 1, v___x_2611_);
v___x_2613_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
lean_object* v___x_2614_; 
v___x_2614_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2337_, v___x_2613_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2614_) == 0)
{
lean_object* v_a_2615_; lean_object* v___x_2616_; 
v_a_2615_ = lean_ctor_get(v___x_2614_, 0);
lean_inc(v_a_2615_);
lean_dec_ref_known(v___x_2614_, 1);
lean_inc_ref(v_e_2200_);
lean_inc(v___x_2336_);
v___x_2616_ = l_Lean_Meta_rwMatcher___lam__2(v_hasTrace_2331_, v___x_2375_, v_fst_2605_, v___x_2336_, v_e_2200_, v___x_2593_, v_snd_2606_, v_a_2615_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
lean_dec(v_snd_2606_);
v___y_2547_ = v___x_2594_;
v___y_2548_ = v_a_2591_;
v___y_2549_ = v___x_2616_;
goto v___jp_2546_;
}
else
{
lean_object* v_a_2617_; 
lean_dec(v_snd_2606_);
lean_dec(v_fst_2605_);
lean_dec_ref(v___x_2375_);
v_a_2617_ = lean_ctor_get(v___x_2614_, 0);
lean_inc(v_a_2617_);
lean_dec_ref_known(v___x_2614_, 1);
v___y_2542_ = v___x_2594_;
v___y_2543_ = v_a_2591_;
v_a_2544_ = v_a_2617_;
goto v___jp_2541_;
}
}
}
}
}
else
{
lean_object* v_a_2621_; 
lean_dec_ref(v___x_2375_);
v_a_2621_ = lean_ctor_get(v___x_2598_, 0);
lean_inc(v_a_2621_);
lean_dec_ref_known(v___x_2598_, 1);
v___y_2542_ = v___x_2594_;
v___y_2543_ = v_a_2591_;
v_a_2544_ = v_a_2621_;
goto v___jp_2541_;
}
}
else
{
lean_object* v_a_2622_; 
lean_dec_ref(v___x_2375_);
v_a_2622_ = lean_ctor_get(v___x_2595_, 0);
lean_inc(v_a_2622_);
lean_dec_ref_known(v___x_2595_, 1);
v___y_2542_ = v___x_2594_;
v___y_2543_ = v_a_2591_;
v_a_2544_ = v_a_2622_;
goto v___jp_2541_;
}
}
else
{
lean_object* v___x_2623_; lean_object* v___x_2624_; 
v___x_2623_ = lean_io_get_num_heartbeats();
lean_inc(v_a_2204_);
lean_inc_ref(v_a_2203_);
lean_inc(v_a_2202_);
lean_inc_ref(v_a_2201_);
lean_inc_ref(v___x_2375_);
v___x_2624_ = lean_infer_type(v___x_2375_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2624_) == 0)
{
lean_object* v_a_2625_; uint8_t v___x_2626_; lean_object* v___x_2627_; 
v_a_2625_ = lean_ctor_get(v___x_2624_, 0);
lean_inc(v_a_2625_);
lean_dec_ref_known(v___x_2624_, 1);
v___x_2626_ = 0;
v___x_2627_ = l_Lean_Meta_forallMetaTelescope(v_a_2625_, v___x_2626_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2627_) == 0)
{
lean_object* v_a_2628_; lean_object* v_snd_2629_; 
v_a_2628_ = lean_ctor_get(v___x_2627_, 0);
lean_inc(v_a_2628_);
lean_dec_ref_known(v___x_2627_, 1);
v_snd_2629_ = lean_ctor_get(v_a_2628_, 1);
lean_inc(v_snd_2629_);
if (v___x_2525_ == 0)
{
lean_object* v_fst_2630_; lean_object* v_snd_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
v_fst_2630_ = lean_ctor_get(v_a_2628_, 0);
lean_inc(v_fst_2630_);
lean_dec(v_a_2628_);
v_snd_2631_ = lean_ctor_get(v_snd_2629_, 1);
lean_inc(v_snd_2631_);
lean_dec(v_snd_2629_);
v___x_2632_ = lean_box(0);
lean_inc_ref(v_e_2200_);
lean_inc(v___x_2336_);
v___x_2633_ = l_Lean_Meta_rwMatcher___lam__3(v___x_2593_, v___x_2375_, v_fst_2630_, v___x_2336_, v_e_2200_, v___x_2246_, v_snd_2631_, v___x_2632_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
lean_dec(v_snd_2631_);
v___y_2577_ = v___x_2623_;
v___y_2578_ = v_a_2591_;
v___y_2579_ = v___x_2633_;
goto v___jp_2576_;
}
else
{
lean_object* v_fst_2634_; lean_object* v_snd_2635_; lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2648_; 
v_fst_2634_ = lean_ctor_get(v_a_2628_, 0);
lean_inc(v_fst_2634_);
lean_dec(v_a_2628_);
v_snd_2635_ = lean_ctor_get(v_snd_2629_, 1);
v_isSharedCheck_2648_ = !lean_is_exclusive(v_snd_2629_);
if (v_isSharedCheck_2648_ == 0)
{
lean_object* v_unused_2649_; 
v_unused_2649_ = lean_ctor_get(v_snd_2629_, 0);
lean_dec(v_unused_2649_);
v___x_2637_ = v_snd_2629_;
v_isShared_2638_ = v_isSharedCheck_2648_;
goto v_resetjp_2636_;
}
else
{
lean_inc(v_snd_2635_);
lean_dec(v_snd_2629_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2648_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2642_; 
v___x_2639_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__27, &l_Lean_Meta_rwMatcher___closed__27_once, _init_l_Lean_Meta_rwMatcher___closed__27);
lean_inc(v_snd_2635_);
v___x_2640_ = l_Lean_indentExpr(v_snd_2635_);
if (v_isShared_2638_ == 0)
{
lean_ctor_set_tag(v___x_2637_, 7);
lean_ctor_set(v___x_2637_, 1, v___x_2640_);
lean_ctor_set(v___x_2637_, 0, v___x_2639_);
v___x_2642_ = v___x_2637_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v___x_2639_);
lean_ctor_set(v_reuseFailAlloc_2647_, 1, v___x_2640_);
v___x_2642_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
lean_object* v___x_2643_; 
v___x_2643_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2337_, v___x_2642_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2643_) == 0)
{
lean_object* v_a_2644_; lean_object* v___x_2645_; 
v_a_2644_ = lean_ctor_get(v___x_2643_, 0);
lean_inc(v_a_2644_);
lean_dec_ref_known(v___x_2643_, 1);
lean_inc_ref(v_e_2200_);
lean_inc(v___x_2336_);
v___x_2645_ = l_Lean_Meta_rwMatcher___lam__3(v___x_2593_, v___x_2375_, v_fst_2634_, v___x_2336_, v_e_2200_, v___x_2246_, v_snd_2635_, v_a_2644_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
lean_dec(v_snd_2635_);
v___y_2577_ = v___x_2623_;
v___y_2578_ = v_a_2591_;
v___y_2579_ = v___x_2645_;
goto v___jp_2576_;
}
else
{
lean_object* v_a_2646_; 
lean_dec(v_snd_2635_);
lean_dec(v_fst_2634_);
lean_dec_ref(v___x_2375_);
v_a_2646_ = lean_ctor_get(v___x_2643_, 0);
lean_inc(v_a_2646_);
lean_dec_ref_known(v___x_2643_, 1);
v___y_2572_ = v___x_2623_;
v___y_2573_ = v_a_2591_;
v_a_2574_ = v_a_2646_;
goto v___jp_2571_;
}
}
}
}
}
else
{
lean_object* v_a_2650_; 
lean_dec_ref(v___x_2375_);
v_a_2650_ = lean_ctor_get(v___x_2627_, 0);
lean_inc(v_a_2650_);
lean_dec_ref_known(v___x_2627_, 1);
v___y_2572_ = v___x_2623_;
v___y_2573_ = v_a_2591_;
v_a_2574_ = v_a_2650_;
goto v___jp_2571_;
}
}
else
{
lean_object* v_a_2651_; 
lean_dec_ref(v___x_2375_);
v_a_2651_ = lean_ctor_get(v___x_2624_, 0);
lean_inc(v_a_2651_);
lean_dec_ref_known(v___x_2624_, 1);
v___y_2572_ = v___x_2623_;
v___y_2573_ = v_a_2591_;
v_a_2574_ = v_a_2651_;
goto v___jp_2571_;
}
}
}
}
v___jp_2333_:
{
lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2334_ = lean_box(0);
v___x_2335_ = l_Lean_Meta_rwMatcher___lam__0(v_e_2200_, v___x_2288_, v___x_2334_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
v___y_2207_ = v___x_2335_;
goto v___jp_2206_;
}
v___jp_2338_:
{
uint8_t v___x_2340_; 
v___x_2340_ = l_Lean_Exception_isInterrupt(v_a_2339_);
if (v___x_2340_ == 0)
{
uint8_t v___x_2341_; 
lean_inc_ref(v_a_2339_);
v___x_2341_ = l_Lean_Exception_isRuntime(v_a_2339_);
if (v___x_2341_ == 0)
{
if (v_hasTrace_2331_ == 0)
{
lean_dec_ref(v_a_2339_);
lean_dec(v___x_2336_);
goto v___jp_2333_;
}
else
{
lean_object* v___x_2342_; uint8_t v___x_2343_; 
v___x_2342_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__11, &l_Lean_Meta_rwMatcher___closed__11_once, _init_l_Lean_Meta_rwMatcher___closed__11);
v___x_2343_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2330_, v_options_2329_, v___x_2342_);
if (v___x_2343_ == 0)
{
lean_dec_ref(v_a_2339_);
lean_dec(v___x_2336_);
goto v___jp_2333_;
}
else
{
lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2344_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__21, &l_Lean_Meta_rwMatcher___closed__21_once, _init_l_Lean_Meta_rwMatcher___closed__21);
v___x_2345_ = l_Lean_MessageData_ofConstName(v___x_2336_, v___x_2341_);
v___x_2346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2346_, 0, v___x_2344_);
lean_ctor_set(v___x_2346_, 1, v___x_2345_);
v___x_2347_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__23, &l_Lean_Meta_rwMatcher___closed__23_once, _init_l_Lean_Meta_rwMatcher___closed__23);
v___x_2348_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2346_);
lean_ctor_set(v___x_2348_, 1, v___x_2347_);
v___x_2349_ = l_Lean_Exception_toMessageData(v_a_2339_);
v___x_2350_ = l_Lean_indentD(v___x_2349_);
v___x_2351_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2348_);
lean_ctor_set(v___x_2351_, 1, v___x_2350_);
v___x_2352_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2337_, v___x_2351_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2352_) == 0)
{
lean_object* v_a_2353_; lean_object* v___x_2354_; 
v_a_2353_ = lean_ctor_get(v___x_2352_, 0);
lean_inc(v_a_2353_);
lean_dec_ref_known(v___x_2352_, 1);
v___x_2354_ = l_Lean_Meta_rwMatcher___lam__0(v_e_2200_, v___x_2288_, v_a_2353_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
v___y_2207_ = v___x_2354_;
goto v___jp_2206_;
}
else
{
lean_object* v_a_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2362_; 
lean_dec_ref(v_e_2200_);
v_a_2355_ = lean_ctor_get(v___x_2352_, 0);
v_isSharedCheck_2362_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2357_ = v___x_2352_;
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_a_2355_);
lean_dec(v___x_2352_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2360_; 
if (v_isShared_2358_ == 0)
{
v___x_2360_ = v___x_2357_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v_a_2355_);
v___x_2360_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
return v___x_2360_;
}
}
}
}
}
}
else
{
lean_object* v___x_2363_; 
lean_dec(v___x_2336_);
lean_dec_ref(v_e_2200_);
v___x_2363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2363_, 0, v_a_2339_);
return v___x_2363_;
}
}
else
{
lean_object* v___x_2364_; 
lean_dec(v___x_2336_);
lean_dec_ref(v_e_2200_);
v___x_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2364_, 0, v_a_2339_);
return v___x_2364_;
}
}
v___jp_2365_:
{
if (lean_obj_tag(v___y_2366_) == 0)
{
lean_dec(v___x_2336_);
lean_dec_ref(v_e_2200_);
return v___y_2366_;
}
else
{
lean_object* v_a_2367_; 
v_a_2367_ = lean_ctor_get(v___y_2366_, 0);
lean_inc(v_a_2367_);
lean_dec_ref_known(v___y_2366_, 1);
v_a_2339_ = v_a_2367_;
goto v___jp_2338_;
}
}
}
v___jp_2289_:
{
lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2295_; 
v___x_2292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2292_, 0, v_proof_2291_);
v___x_2293_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2293_, 0, v___y_2290_);
lean_ctor_set(v___x_2293_, 1, v___x_2292_);
lean_ctor_set_uint8(v___x_2293_, sizeof(void*)*2, v___x_2288_);
if (v_isShared_2286_ == 0)
{
lean_ctor_set(v___x_2285_, 0, v___x_2293_);
v___x_2295_ = v___x_2285_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2296_; 
v_reuseFailAlloc_2296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2296_, 0, v___x_2293_);
v___x_2295_ = v_reuseFailAlloc_2296_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
return v___x_2295_;
}
}
}
}
else
{
lean_object* v_a_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2690_; 
lean_dec(v___x_2281_);
lean_dec_ref(v___x_2280_);
lean_del_object(v___x_2251_);
lean_dec(v_a_2249_);
lean_dec_ref(v_e_2200_);
lean_dec(v_altIdx_2199_);
v_a_2683_ = lean_ctor_get(v___x_2282_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2685_ = v___x_2282_;
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_a_2683_);
lean_dec(v___x_2282_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2688_; 
if (v_isShared_2686_ == 0)
{
v___x_2688_ = v___x_2685_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_a_2683_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
}
}
v___jp_2253_:
{
lean_object* v___x_2254_; lean_object* v___x_2255_; uint8_t v___x_2256_; lean_object* v___x_2258_; 
v___x_2254_ = lean_box(0);
v___x_2255_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2255_, 0, v_e_2200_);
lean_ctor_set(v___x_2255_, 1, v___x_2254_);
v___x_2256_ = lean_unbox(v_a_2249_);
lean_dec(v_a_2249_);
lean_ctor_set_uint8(v___x_2255_, sizeof(void*)*2, v___x_2256_);
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 0, v___x_2255_);
v___x_2258_ = v___x_2251_;
goto v_reusejp_2257_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v___x_2255_);
v___x_2258_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2257_;
}
v_reusejp_2257_:
{
return v___x_2258_;
}
}
}
}
else
{
lean_dec(v_altIdx_2199_);
goto v___jp_2222_;
}
}
else
{
lean_dec(v_altIdx_2199_);
goto v___jp_2222_;
}
v___jp_2206_:
{
lean_object* v_a_2208_; lean_object* v___x_2210_; uint8_t v_isShared_2211_; uint8_t v_isSharedCheck_2216_; 
v_a_2208_ = lean_ctor_get(v___y_2207_, 0);
v_isSharedCheck_2216_ = !lean_is_exclusive(v___y_2207_);
if (v_isSharedCheck_2216_ == 0)
{
v___x_2210_ = v___y_2207_;
v_isShared_2211_ = v_isSharedCheck_2216_;
goto v_resetjp_2209_;
}
else
{
lean_inc(v_a_2208_);
lean_dec(v___y_2207_);
v___x_2210_ = lean_box(0);
v_isShared_2211_ = v_isSharedCheck_2216_;
goto v_resetjp_2209_;
}
v_resetjp_2209_:
{
lean_object* v_a_2212_; lean_object* v___x_2214_; 
v_a_2212_ = lean_ctor_get(v_a_2208_, 0);
lean_inc(v_a_2212_);
lean_dec(v_a_2208_);
if (v_isShared_2211_ == 0)
{
lean_ctor_set(v___x_2210_, 0, v_a_2212_);
v___x_2214_ = v___x_2210_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v_a_2212_);
v___x_2214_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
return v___x_2214_;
}
}
}
v___jp_2217_:
{
lean_object* v___x_2218_; uint8_t v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; 
v___x_2218_ = lean_box(0);
v___x_2219_ = 1;
v___x_2220_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2220_, 0, v_e_2200_);
lean_ctor_set(v___x_2220_, 1, v___x_2218_);
lean_ctor_set_uint8(v___x_2220_, sizeof(void*)*2, v___x_2219_);
v___x_2221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2220_);
return v___x_2221_;
}
v___jp_2222_:
{
lean_object* v___x_2223_; 
v___x_2223_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg(v_e_2200_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2223_) == 0)
{
lean_object* v_a_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2234_; 
v_a_2224_ = lean_ctor_get(v___x_2223_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2223_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2226_ = v___x_2223_;
v_isShared_2227_ = v_isSharedCheck_2234_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_a_2224_);
lean_dec(v___x_2223_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2234_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2228_; uint8_t v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2232_; 
v___x_2228_ = lean_box(0);
v___x_2229_ = 1;
v___x_2230_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2230_, 0, v_a_2224_);
lean_ctor_set(v___x_2230_, 1, v___x_2228_);
lean_ctor_set_uint8(v___x_2230_, sizeof(void*)*2, v___x_2229_);
if (v_isShared_2227_ == 0)
{
lean_ctor_set(v___x_2226_, 0, v___x_2230_);
v___x_2232_ = v___x_2226_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v___x_2230_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
v_a_2235_ = lean_ctor_get(v___x_2223_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2223_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2223_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2223_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___boxed(lean_object* v_altIdx_2692_, lean_object* v_e_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_, lean_object* v_a_2696_, lean_object* v_a_2697_, lean_object* v_a_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l_Lean_Meta_rwMatcher(v_altIdx_2692_, v_e_2693_, v_a_2694_, v_a_2695_, v_a_2696_, v_a_2697_);
lean_dec(v_a_2697_);
lean_dec_ref(v_a_2696_);
lean_dec(v_a_2695_);
lean_dec_ref(v_a_2694_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0(lean_object* v_inst_2700_, lean_object* v_a_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_){
_start:
{
lean_object* v___x_2707_; 
v___x_2707_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg(v_a_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___boxed(lean_object* v_inst_2708_, lean_object* v_a_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_){
_start:
{
lean_object* v_res_2715_; 
v_res_2715_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0(v_inst_2708_, v_a_2709_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_);
lean_dec(v___y_2713_);
lean_dec_ref(v___y_2712_);
lean_dec(v___y_2711_);
lean_dec_ref(v___y_2710_);
return v_res_2715_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1(lean_object* v_mvarId_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_){
_start:
{
lean_object* v___x_2722_; 
v___x_2722_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(v_mvarId_2716_, v___y_2718_);
return v___x_2722_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___boxed(lean_object* v_mvarId_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_){
_start:
{
lean_object* v_res_2729_; 
v_res_2729_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1(v_mvarId_2723_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_);
lean_dec(v___y_2727_);
lean_dec_ref(v___y_2726_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec(v_mvarId_2723_);
return v_res_2729_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6(lean_object* v_00_u03b1_2730_, lean_object* v_msg_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_){
_start:
{
lean_object* v___x_2737_; 
v___x_2737_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v_msg_2731_, v___y_2732_, v___y_2733_, v___y_2734_, v___y_2735_);
return v___x_2737_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___boxed(lean_object* v_00_u03b1_2738_, lean_object* v_msg_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_){
_start:
{
lean_object* v_res_2745_; 
v_res_2745_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6(v_00_u03b1_2738_, v_msg_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec(v___y_2741_);
lean_dec_ref(v___y_2740_);
return v_res_2745_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15(lean_object* v_00_u03b1_2746_, lean_object* v_x_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_){
_start:
{
lean_object* v___x_2753_; 
v___x_2753_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(v_x_2747_);
return v___x_2753_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___boxed(lean_object* v_00_u03b1_2754_, lean_object* v_x_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_){
_start:
{
lean_object* v_res_2761_; 
v_res_2761_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15(v_00_u03b1_2754_, v_x_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_);
lean_dec(v___y_2759_);
lean_dec_ref(v___y_2758_);
lean_dec(v___y_2757_);
lean_dec_ref(v___y_2756_);
return v_res_2761_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1(lean_object* v_00_u03b2_2762_, lean_object* v_x_2763_, lean_object* v_x_2764_){
_start:
{
uint8_t v___x_2765_; 
v___x_2765_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg(v_x_2763_, v_x_2764_);
return v___x_2765_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___boxed(lean_object* v_00_u03b2_2766_, lean_object* v_x_2767_, lean_object* v_x_2768_){
_start:
{
uint8_t v_res_2769_; lean_object* v_r_2770_; 
v_res_2769_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1(v_00_u03b2_2766_, v_x_2767_, v_x_2768_);
lean_dec(v_x_2768_);
lean_dec_ref(v_x_2767_);
v_r_2770_ = lean_box(v_res_2769_);
return v_r_2770_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6(lean_object* v_00_u03b2_2771_, lean_object* v_x_2772_, size_t v_x_2773_, lean_object* v_x_2774_){
_start:
{
uint8_t v___x_2775_; 
v___x_2775_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg(v_x_2772_, v_x_2773_, v_x_2774_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___boxed(lean_object* v_00_u03b2_2776_, lean_object* v_x_2777_, lean_object* v_x_2778_, lean_object* v_x_2779_){
_start:
{
size_t v_x_105530__boxed_2780_; uint8_t v_res_2781_; lean_object* v_r_2782_; 
v_x_105530__boxed_2780_ = lean_unbox_usize(v_x_2778_);
lean_dec(v_x_2778_);
v_res_2781_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6(v_00_u03b2_2776_, v_x_2777_, v_x_105530__boxed_2780_, v_x_2779_);
lean_dec(v_x_2779_);
lean_dec_ref(v_x_2777_);
v_r_2782_ = lean_box(v_res_2781_);
return v_r_2782_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18(lean_object* v_00_u03b2_2783_, lean_object* v_keys_2784_, lean_object* v_vals_2785_, lean_object* v_heq_2786_, lean_object* v_i_2787_, lean_object* v_k_2788_){
_start:
{
uint8_t v___x_2789_; 
v___x_2789_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg(v_keys_2784_, v_i_2787_, v_k_2788_);
return v___x_2789_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___boxed(lean_object* v_00_u03b2_2790_, lean_object* v_keys_2791_, lean_object* v_vals_2792_, lean_object* v_heq_2793_, lean_object* v_i_2794_, lean_object* v_k_2795_){
_start:
{
uint8_t v_res_2796_; lean_object* v_r_2797_; 
v_res_2796_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18(v_00_u03b2_2790_, v_keys_2791_, v_vals_2792_, v_heq_2793_, v_i_2794_, v_k_2795_);
lean_dec(v_k_2795_);
lean_dec_ref(v_vals_2792_);
lean_dec_ref(v_keys_2791_);
v_r_2797_ = lean_box(v_res_2796_);
return v_r_2797_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Decidable(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Decidable(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_Rewrite(builtin);
}
#ifdef __cplusplus
}
#endif
