// Lean compiler output
// Module: Lean.Meta.Tactic.LibrarySearch
// Imports: public import Lean.Meta.LazyDiscrTree public import Lean.Meta.Tactic.SolveByElim public import Lean.Meta.Tactic.Grind.Main public import Lean.Util.Heartbeats import Init.Grind.Util import Init.Try import Lean.Elab.Tactic.Basic import Init.Omega
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getMaxHeartbeats___redArg(lean_object*);
lean_object* l_Lean_getRemainingHeartbeats___redArg(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapForallTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerInternalExceptionId(lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Linter_isDeprecated(lean_object*, lean_object*);
uint8_t l_Lean_Name_isMetaprogramming(lean_object*);
lean_object* l_Lean_AsyncConstantInfo_toConstantVal(lean_object*);
lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_applySymm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SolveByElim_solveByElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkDefaultParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Result_hasFailed(lean_object*);
lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withSuppressedMessages___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
size_t lean_usize_of_nat(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "librarySearch"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(186, 205, 46, 93, 234, 75, 44, 75)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(147, 126, 84, 67, 30, 19, 97, 104)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__6_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__6_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__6_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__7_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__7_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__7_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__8_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__6_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__7_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__8_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__8_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__9_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__8_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__9_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__9_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__10_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "LibrarySearch"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__10_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__10_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__11_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__9_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__10_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(163, 78, 22, 138, 134, 243, 124, 51)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__11_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__11_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__12_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__11_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(110, 120, 122, 133, 19, 71, 36, 249)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__12_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__12_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__13_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__12_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(151, 146, 148, 188, 159, 0, 15, 205)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__13_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__13_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__14_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__13_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__7_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(199, 3, 3, 192, 219, 237, 74, 42)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__14_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__14_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__15_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__14_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__10_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(79, 81, 21, 29, 149, 2, 225, 39)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__15_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__15_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__16_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__16_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__16_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__17_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__15_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__16_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(206, 129, 140, 75, 45, 159, 152, 19)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__17_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__17_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__18_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__18_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__18_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__19_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__17_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__18_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(207, 237, 167, 131, 38, 2, 223, 9)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__19_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__19_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__20_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__19_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(226, 89, 165, 117, 164, 120, 225, 40)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__20_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__20_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__21_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__20_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__7_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(246, 152, 58, 84, 237, 223, 251, 209)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__21_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__21_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__22_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__21_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(11, 67, 15, 244, 60, 52, 77, 103)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__22_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__22_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__23_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__22_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__10_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(139, 233, 199, 48, 25, 63, 191, 255)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__23_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__23_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__24_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__24_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__25_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__25_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__25_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__26_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__26_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__27_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__27_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__27_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__28_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__28_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__29_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__29_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lemmas"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(186, 205, 46, 93, 234, 75, 44, 75)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(147, 126, 84, 67, 30, 19, 97, 104)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(197, 54, 69, 18, 129, 165, 16, 234)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__23_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),((lean_object*)(((size_t)(472600257) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(154, 223, 28, 58, 97, 218, 116, 222)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__25_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(53, 33, 63, 88, 40, 222, 1, 43)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__27_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(117, 161, 124, 21, 15, 207, 112, 94)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(56, 96, 151, 243, 172, 210, 118, 145)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2____boxed(lean_object*);
static const lean_ctor_object l_Lean_Meta_LibrarySearch_grindDischarger___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LibrarySearch_grindDischarger___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__0_value;
static const lean_string_object l_Lean_Meta_LibrarySearch_grindDischarger___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Marker"};
static const lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_grindDischarger___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_grindDischarger___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_grindDischarger___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__1_value),LEAN_SCALAR_PTR_LITERAL(46, 250, 206, 136, 19, 229, 9, 31)}};
static const lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___closed__2 = (const lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__2_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_grindDischarger___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___closed__3 = (const lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__3_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_grindDischarger___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*18 + 40, .m_other = 18, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(1000) << 1) | 1)),((lean_object*)(((size_t)(1000) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(10000) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(1000) << 1) | 1)),((lean_object*)(((size_t)(1048576) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 1),LEAN_SCALAR_PTR_LITERAL(0, 0, 1, 0, 1, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 0, 1, 1, 1, 0, 1, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 1, 1, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___closed__4 = (const lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_tryDischarger___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Try"};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__0_value),LEAN_SCALAR_PTR_LITERAL(110, 237, 160, 227, 109, 164, 83, 112)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 13, 122, 73, 14, 49, 113, 49)}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__1_value;
static const lean_closure_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_tryDischarger___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__2 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__2_value;
static const lean_string_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__3 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__3_value;
static const lean_string_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tryTrace"};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__4 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__4_value),LEAN_SCALAR_PTR_LITERAL(222, 128, 230, 128, 87, 180, 97, 21)}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__5 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value;
static const lean_string_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "try\?"};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__6 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__6_value;
static const lean_string_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__7 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__7_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value_aux_2),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__7_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__8 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value;
static const lean_string_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__9 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__9_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__9_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__10 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__10_value;
static lean_once_cell_t l_Lean_Meta_LibrarySearch_tryDischarger___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__11;
static const lean_array_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__12 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__12_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 16, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__12_value),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 1, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__13 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryDischarger(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LibrarySearch_solveByElim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_solveByElim___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_solveByElim___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_solveByElim___closed__0_value;
static const lean_closure_object l_Lean_Meta_LibrarySearch_solveByElim___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_solveByElim___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_solveByElim___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_solveByElim___closed__1_value;
static const lean_closure_object l_Lean_Meta_LibrarySearch_solveByElim___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_solveByElim___lam__2___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_solveByElim___closed__2 = (const lean_object*)&l_Lean_Meta_LibrarySearch_solveByElim___closed__2_value;
static const lean_array_object l_Lean_Meta_LibrarySearch_solveByElim___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LibrarySearch_solveByElim___closed__3 = (const lean_object*)&l_Lean_Meta_LibrarySearch_solveByElim___closed__3_value;
static const lean_closure_object l_Lean_Meta_LibrarySearch_solveByElim___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_grindDischarger___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_solveByElim___closed__4 = (const lean_object*)&l_Lean_Meta_LibrarySearch_solveByElim___closed__4_value;
static const lean_closure_object l_Lean_Meta_LibrarySearch_solveByElim___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_tryDischarger___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_solveByElim___closed__5 = (const lean_object*)&l_Lean_Meta_LibrarySearch_solveByElim___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_DeclMod_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_instDecidableEqDeclMod(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_instDecidableEqDeclMod___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_instInhabitedDeclMod_default;
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_instInhabitedDeclMod;
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_instOrdDeclMod_ord(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_instOrdDeclMod_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LibrarySearch_instOrdDeclMod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_instOrdDeclMod_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_instOrdDeclMod___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_instOrdDeclMod___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LibrarySearch_instOrdDeclMod = (const lean_object*)&l_Lean_Meta_LibrarySearch_instOrdDeclMod___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Meta_LibrarySearch_instHashableDeclMod_hash(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_instHashableDeclMod_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_LibrarySearch_instHashableDeclMod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_instHashableDeclMod_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_instHashableDeclMod___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_instHashableDeclMod___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LibrarySearch_instHashableDeclMod = (const lean_object*)&l_Lean_Meta_LibrarySearch_instHashableDeclMod___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_858108106____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_858108106____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_ext;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__0_value;
static const lean_string_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__2 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__2_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__2_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__3 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__3_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__0_value)}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__4 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__4_value)}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__5 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__5_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__3_value),((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__5_value)}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__6 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__6_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__7 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__7_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__0_value),((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__7_value)}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__8 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__8_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_constantsPerImportTask;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_2955776588____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_2955776588____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_starLemmasExt;
static const lean_closure_object l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_libSearchFindDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_libSearchFindDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LibrarySearch_getStarLemmas___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_getStarLemmas___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_getStarLemmas___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_getStarLemmas___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_getStarLemmas___closed__1_value;
static lean_once_cell_t l_Lean_Meta_LibrarySearch_getStarLemmas___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas___closed__2;
static const lean_array_object l_Lean_Meta_LibrarySearch_getStarLemmas___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas___closed__3 = (const lean_object*)&l_Lean_Meta_LibrarySearch_getStarLemmas___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "abortSpeculation"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__7_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__10_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(14, 179, 197, 182, 147, 201, 96, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(221, 180, 178, 73, 239, 82, 182, 211)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_abortSpeculationId;
static lean_once_cell_t l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_isAbortSpeculation(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_isAbortSpeculation___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearchSymm___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearchSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearchSymm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 220, 216, 40, 239, 165, 44, 174)}};
static const lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mpr"};
static const lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(14, 81, 9, 215, 230, 198, 87, 3)}};
static const lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__0_value;
static const lean_closure_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_isVar(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_isVar___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trying "};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__4_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__6;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " with mp"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__7_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__9;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " with mpr"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__10_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__12;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__4___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LibrarySearch_tryOnEach___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryOnEach___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryOnEach___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryOnEach___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_tryOnEach___closed__0_value)}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryOnEach___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryOnEach___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryOnEach(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryOnEach___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_libSearchFindDecls___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 1, 1, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearch(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__24_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = lean_unsigned_to_nat(4259869437u);
v___x_58_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__23_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_59_ = l_Lean_Name_num___override(v___x_58_, v___x_57_);
return v___x_59_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__26_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__25_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_62_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__24_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__24_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__24_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_63_ = l_Lean_Name_str___override(v___x_62_, v___x_61_);
return v___x_63_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__28_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_65_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__27_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_66_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__26_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__26_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__26_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_67_ = l_Lean_Name_str___override(v___x_66_, v___x_65_);
return v___x_67_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__29_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = lean_unsigned_to_nat(2u);
v___x_69_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__28_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__28_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__28_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_70_ = l_Lean_Name_num___override(v___x_69_, v___x_68_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_72_; uint8_t v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_72_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_73_ = 0;
v___x_74_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__29_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__29_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__29_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_75_ = l_Lean_registerTraceClass(v___x_72_, v___x_73_, v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2____boxed(lean_object* v_a_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_();
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_96_; uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_96_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_));
v___x_97_ = 0;
v___x_98_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_));
v___x_99_ = l_Lean_registerTraceClass(v___x_96_, v___x_97_, v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2____boxed(lean_object* v_a_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_();
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___lam__0(lean_object* v_x_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_grindDischarger___lam__0___closed__0));
v___x_111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___lam__0___boxed(lean_object* v_x_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lean_Meta_LibrarySearch_grindDischarger___lam__0(v_x_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
lean_dec(v_x_112_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger(lean_object* v_mvarId_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v_a_152_; lean_object* v___y_160_; lean_object* v___x_170_; 
lean_inc(v_mvarId_145_);
v___x_170_ = l_Lean_MVarId_getType(v_mvarId_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v___x_172_; 
v_a_171_ = lean_ctor_get(v___x_170_, 0);
lean_inc_n(v_a_171_, 2);
lean_dec_ref_known(v___x_170_, 1);
v___x_172_ = l_Lean_Meta_getLevel(v_a_171_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
lean_inc(v_a_173_);
lean_dec_ref_known(v___x_172_, 1);
v___x_174_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_grindDischarger___closed__2));
v___x_175_ = lean_box(0);
v___x_176_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_176_, 0, v_a_173_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
v___x_177_ = l_Lean_Expr_const___override(v___x_174_, v___x_176_);
v___x_178_ = l_Lean_Expr_app___override(v___x_177_, v_a_171_);
v___x_179_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_grindDischarger___closed__3));
v___x_180_ = lean_box(0);
v___x_181_ = l_Lean_MVarId_apply(v_mvarId_145_, v___x_178_, v___x_179_, v___x_180_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
lean_inc(v_a_182_);
lean_dec_ref_known(v___x_181_, 1);
if (lean_obj_tag(v_a_182_) == 1)
{
lean_object* v_tail_183_; 
v_tail_183_ = lean_ctor_get(v_a_182_, 1);
if (lean_obj_tag(v_tail_183_) == 0)
{
lean_object* v_head_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
lean_inc(v_tail_183_);
v_head_184_ = lean_ctor_get(v_a_182_, 0);
lean_inc(v_head_184_);
lean_dec_ref_known(v_a_182_, 2);
v___x_185_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_grindDischarger___closed__4));
v___x_186_ = l_Lean_Meta_Grind_mkDefaultParams(v___x_185_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_186_) == 0)
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_208_; 
v_a_187_ = lean_ctor_get(v___x_186_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_186_);
if (v_isSharedCheck_208_ == 0)
{
v___x_189_ = v___x_186_;
v_isShared_190_ = v_isSharedCheck_208_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_186_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_208_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_Meta_Grind_main(v_head_184_, v_a_187_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v_a_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_206_; 
v_a_192_ = lean_ctor_get(v___x_191_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_191_);
if (v_isSharedCheck_206_ == 0)
{
v___x_194_ = v___x_191_;
v_isShared_195_ = v_isSharedCheck_206_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_a_192_);
lean_dec(v___x_191_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_206_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
uint8_t v___x_196_; 
v___x_196_ = l_Lean_Meta_Grind_Result_hasFailed(v_a_192_);
lean_dec(v_a_192_);
if (v___x_196_ == 0)
{
lean_object* v___x_198_; 
if (v_isShared_190_ == 0)
{
lean_ctor_set_tag(v___x_189_, 1);
lean_ctor_set(v___x_189_, 0, v_tail_183_);
v___x_198_ = v___x_189_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_tail_183_);
v___x_198_ = v_reuseFailAlloc_202_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
lean_object* v___x_200_; 
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 0, v___x_198_);
v___x_200_ = v___x_194_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v___x_198_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
else
{
lean_object* v___x_204_; 
lean_del_object(v___x_189_);
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 0, v___x_180_);
v___x_204_ = v___x_194_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_180_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
else
{
lean_object* v_a_207_; 
lean_del_object(v___x_189_);
v_a_207_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_a_207_);
lean_dec_ref_known(v___x_191_, 1);
v_a_152_ = v_a_207_;
goto v___jp_151_;
}
}
}
else
{
lean_object* v_a_209_; 
lean_dec(v_head_184_);
v_a_209_ = lean_ctor_get(v___x_186_, 0);
lean_inc(v_a_209_);
lean_dec_ref_known(v___x_186_, 1);
v_a_152_ = v_a_209_;
goto v___jp_151_;
}
}
else
{
lean_object* v___x_210_; 
v___x_210_ = l_Lean_Meta_LibrarySearch_grindDischarger___lam__0(v_a_182_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
lean_dec_ref_known(v_a_182_, 2);
v___y_160_ = v___x_210_;
goto v___jp_159_;
}
}
else
{
lean_object* v___x_211_; 
v___x_211_ = l_Lean_Meta_LibrarySearch_grindDischarger___lam__0(v_a_182_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
lean_dec(v_a_182_);
v___y_160_ = v___x_211_;
goto v___jp_159_;
}
}
else
{
lean_object* v_a_212_; 
v_a_212_ = lean_ctor_get(v___x_181_, 0);
lean_inc(v_a_212_);
lean_dec_ref_known(v___x_181_, 1);
v_a_152_ = v_a_212_;
goto v___jp_151_;
}
}
else
{
lean_object* v_a_213_; 
lean_dec(v_a_171_);
lean_dec(v_mvarId_145_);
v_a_213_ = lean_ctor_get(v___x_172_, 0);
lean_inc(v_a_213_);
lean_dec_ref_known(v___x_172_, 1);
v_a_152_ = v_a_213_;
goto v___jp_151_;
}
}
else
{
lean_object* v_a_214_; 
lean_dec(v_mvarId_145_);
v_a_214_ = lean_ctor_get(v___x_170_, 0);
lean_inc(v_a_214_);
lean_dec_ref_known(v___x_170_, 1);
v_a_152_ = v_a_214_;
goto v___jp_151_;
}
v___jp_151_:
{
uint8_t v___x_153_; 
v___x_153_ = l_Lean_Exception_isInterrupt(v_a_152_);
if (v___x_153_ == 0)
{
uint8_t v___x_154_; 
lean_inc_ref(v_a_152_);
v___x_154_ = l_Lean_Exception_isRuntime(v_a_152_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; lean_object* v___x_156_; 
lean_dec_ref(v_a_152_);
v___x_155_ = lean_box(0);
v___x_156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
return v___x_156_;
}
else
{
lean_object* v___x_157_; 
v___x_157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_157_, 0, v_a_152_);
return v___x_157_;
}
}
else
{
lean_object* v___x_158_; 
v___x_158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_158_, 0, v_a_152_);
return v___x_158_;
}
}
v___jp_159_:
{
lean_object* v_a_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_169_; 
v_a_161_ = lean_ctor_get(v___y_160_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___y_160_);
if (v_isSharedCheck_169_ == 0)
{
v___x_163_ = v___y_160_;
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_a_161_);
lean_dec(v___y_160_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v_a_165_; lean_object* v___x_167_; 
v_a_165_ = lean_ctor_get(v_a_161_, 0);
lean_inc(v_a_165_);
lean_dec(v_a_161_);
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 0, v_a_165_);
v___x_167_ = v___x_163_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_a_165_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___boxed(lean_object* v_mvarId_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lean_Meta_LibrarySearch_grindDischarger(v_mvarId_215_, v_a_216_, v_a_217_, v_a_218_, v_a_219_);
lean_dec(v_a_219_);
lean_dec_ref(v_a_218_);
lean_dec(v_a_217_);
lean_dec_ref(v_a_216_);
return v_res_221_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_tryDischarger___lam__1(uint8_t v___x_222_, lean_object* v_x_223_){
_start:
{
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___lam__1___boxed(lean_object* v___x_224_, lean_object* v_x_225_){
_start:
{
uint8_t v___x_4011__boxed_226_; uint8_t v_res_227_; lean_object* v_r_228_; 
v___x_4011__boxed_226_ = lean_unbox(v___x_224_);
v_res_227_ = l_Lean_Meta_LibrarySearch_tryDischarger___lam__1(v___x_4011__boxed_226_, v_x_225_);
lean_dec(v_x_225_);
v_r_228_ = lean_box(v_res_227_);
return v_r_228_;
}
}
static lean_object* _init_l_Lean_Meta_LibrarySearch_tryDischarger___closed__11(void){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = l_Array_mkArray0___redArg();
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryDischarger(lean_object* v_mvarId_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_){
_start:
{
lean_object* v_a_272_; lean_object* v___y_280_; lean_object* v___x_290_; 
lean_inc(v_mvarId_265_);
v___x_290_ = l_Lean_MVarId_getType(v_mvarId_265_, v_a_266_, v_a_267_, v_a_268_, v_a_269_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v_a_291_; lean_object* v___x_292_; 
v_a_291_ = lean_ctor_get(v___x_290_, 0);
lean_inc_n(v_a_291_, 2);
lean_dec_ref_known(v___x_290_, 1);
v___x_292_ = l_Lean_Meta_getLevel(v_a_291_, v_a_266_, v_a_267_, v_a_268_, v_a_269_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; uint8_t v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_292_, 1);
v___x_294_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_tryDischarger___closed__1));
v___x_295_ = lean_box(0);
v___x_296_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_296_, 0, v_a_293_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = l_Lean_Expr_const___override(v___x_294_, v___x_296_);
v___x_298_ = l_Lean_Expr_app___override(v___x_297_, v_a_291_);
v___x_299_ = 0;
v___x_300_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_grindDischarger___closed__3));
v___x_301_ = lean_box(0);
v___x_302_ = l_Lean_MVarId_apply(v_mvarId_265_, v___x_298_, v___x_300_, v___x_301_, v_a_266_, v_a_267_, v_a_268_, v_a_269_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_353_; 
v_a_303_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_353_ == 0)
{
v___x_305_ = v___x_302_;
v_isShared_306_ = v_isSharedCheck_353_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___x_302_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_353_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
if (lean_obj_tag(v_a_303_) == 1)
{
lean_object* v_tail_307_; 
v_tail_307_ = lean_ctor_get(v_a_303_, 1);
if (lean_obj_tag(v_tail_307_) == 0)
{
lean_object* v_head_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_349_; 
lean_inc(v_tail_307_);
v_head_308_ = lean_ctor_get(v_a_303_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v_a_303_);
if (v_isSharedCheck_349_ == 0)
{
lean_object* v_unused_350_; 
v_unused_350_ = lean_ctor_get(v_a_303_, 1);
lean_dec(v_unused_350_);
v___x_310_ = v_a_303_;
v_isShared_311_ = v_isSharedCheck_349_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_head_308_);
lean_dec(v_a_303_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_349_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v_ref_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_317_; 
v_ref_312_ = lean_ctor_get(v_a_268_, 2);
v___x_313_ = l_Lean_SourceInfo_fromRef(v_ref_312_, v___x_299_);
v___x_314_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_tryDischarger___closed__5));
v___x_315_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_tryDischarger___closed__6));
lean_inc(v___x_313_);
if (v_isShared_311_ == 0)
{
lean_ctor_set_tag(v___x_310_, 2);
lean_ctor_set(v___x_310_, 1, v___x_315_);
lean_ctor_set(v___x_310_, 0, v___x_313_);
v___x_317_ = v___x_310_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v___x_313_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v___x_315_);
v___x_317_ = v_reuseFailAlloc_348_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_318_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_tryDischarger___closed__8));
v___x_319_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_tryDischarger___closed__10));
v___x_320_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_tryDischarger___closed__11, &l_Lean_Meta_LibrarySearch_tryDischarger___closed__11_once, _init_l_Lean_Meta_LibrarySearch_tryDischarger___closed__11);
lean_inc_n(v___x_313_, 2);
v___x_321_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_321_, 0, v___x_313_);
lean_ctor_set(v___x_321_, 1, v___x_319_);
lean_ctor_set(v___x_321_, 2, v___x_320_);
v___x_322_ = l_Lean_Syntax_node1(v___x_313_, v___x_318_, v___x_321_);
v___x_323_ = l_Lean_Syntax_node2(v___x_313_, v___x_314_, v___x_317_, v___x_322_);
v___x_324_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___boxed), 10, 1);
lean_closure_set(v___x_324_, 0, v___x_323_);
v___x_325_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withSuppressedMessages___boxed), 11, 2);
lean_closure_set(v___x_325_, 0, lean_box(0));
lean_closure_set(v___x_325_, 1, v___x_324_);
v___x_326_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_run___boxed), 9, 2);
lean_closure_set(v___x_326_, 0, v_head_308_);
lean_closure_set(v___x_326_, 1, v___x_325_);
v___x_327_ = lean_box(1);
v___x_328_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_tryDischarger___closed__13));
v___x_329_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_329_, 0, v___x_295_);
lean_ctor_set(v___x_329_, 1, v___x_327_);
lean_ctor_set(v___x_329_, 2, v_tail_307_);
lean_ctor_set(v___x_329_, 3, v___x_295_);
lean_ctor_set(v___x_329_, 4, v___x_295_);
lean_ctor_set(v___x_329_, 5, v___x_327_);
lean_ctor_set(v___x_329_, 6, v___x_295_);
lean_ctor_set(v___x_329_, 7, v___x_327_);
v___x_330_ = l_Lean_Elab_Term_TermElabM_run___redArg(v___x_326_, v___x_328_, v___x_329_, v_a_266_, v_a_267_, v_a_268_, v_a_269_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_346_; 
v_a_331_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_346_ == 0)
{
v___x_333_ = v___x_330_;
v_isShared_334_ = v_isSharedCheck_346_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_330_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_346_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v_fst_335_; uint8_t v___x_336_; 
v_fst_335_ = lean_ctor_get(v_a_331_, 0);
lean_inc(v_fst_335_);
lean_dec(v_a_331_);
v___x_336_ = l_List_isEmpty___redArg(v_fst_335_);
lean_dec(v_fst_335_);
if (v___x_336_ == 0)
{
lean_object* v___x_338_; 
lean_del_object(v___x_305_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v___x_301_);
v___x_338_ = v___x_333_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v___x_301_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
else
{
lean_object* v___x_341_; 
if (v_isShared_306_ == 0)
{
lean_ctor_set_tag(v___x_305_, 1);
lean_ctor_set(v___x_305_, 0, v_tail_307_);
v___x_341_ = v___x_305_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_tail_307_);
v___x_341_ = v_reuseFailAlloc_345_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
lean_object* v___x_343_; 
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v___x_341_);
v___x_343_ = v___x_333_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_341_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
}
}
else
{
lean_object* v_a_347_; 
lean_del_object(v___x_305_);
v_a_347_ = lean_ctor_get(v___x_330_, 0);
lean_inc(v_a_347_);
lean_dec_ref_known(v___x_330_, 1);
v_a_272_ = v_a_347_;
goto v___jp_271_;
}
}
}
}
else
{
lean_object* v___x_351_; 
lean_del_object(v___x_305_);
v___x_351_ = l_Lean_Meta_LibrarySearch_grindDischarger___lam__0(v_a_303_, v_a_266_, v_a_267_, v_a_268_, v_a_269_);
lean_dec_ref_known(v_a_303_, 2);
v___y_280_ = v___x_351_;
goto v___jp_279_;
}
}
else
{
lean_object* v___x_352_; 
lean_del_object(v___x_305_);
v___x_352_ = l_Lean_Meta_LibrarySearch_grindDischarger___lam__0(v_a_303_, v_a_266_, v_a_267_, v_a_268_, v_a_269_);
lean_dec(v_a_303_);
v___y_280_ = v___x_352_;
goto v___jp_279_;
}
}
}
else
{
lean_object* v_a_354_; 
v_a_354_ = lean_ctor_get(v___x_302_, 0);
lean_inc(v_a_354_);
lean_dec_ref_known(v___x_302_, 1);
v_a_272_ = v_a_354_;
goto v___jp_271_;
}
}
else
{
lean_object* v_a_355_; 
lean_dec(v_a_291_);
lean_dec(v_mvarId_265_);
v_a_355_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_355_);
lean_dec_ref_known(v___x_292_, 1);
v_a_272_ = v_a_355_;
goto v___jp_271_;
}
}
else
{
lean_object* v_a_356_; 
lean_dec(v_mvarId_265_);
v_a_356_ = lean_ctor_get(v___x_290_, 0);
lean_inc(v_a_356_);
lean_dec_ref_known(v___x_290_, 1);
v_a_272_ = v_a_356_;
goto v___jp_271_;
}
v___jp_271_:
{
uint8_t v___x_273_; 
v___x_273_ = l_Lean_Exception_isInterrupt(v_a_272_);
if (v___x_273_ == 0)
{
uint8_t v___x_274_; 
lean_inc_ref(v_a_272_);
v___x_274_ = l_Lean_Exception_isRuntime(v_a_272_);
if (v___x_274_ == 0)
{
lean_object* v___x_275_; lean_object* v___x_276_; 
lean_dec_ref(v_a_272_);
v___x_275_ = lean_box(0);
v___x_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
return v___x_276_;
}
else
{
lean_object* v___x_277_; 
v___x_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_277_, 0, v_a_272_);
return v___x_277_;
}
}
else
{
lean_object* v___x_278_; 
v___x_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_278_, 0, v_a_272_);
return v___x_278_;
}
}
v___jp_279_:
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_289_; 
v_a_281_ = lean_ctor_get(v___y_280_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___y_280_);
if (v_isSharedCheck_289_ == 0)
{
v___x_283_ = v___y_280_;
v_isShared_284_ = v_isSharedCheck_289_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___y_280_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_289_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v_a_285_; lean_object* v___x_287_; 
v_a_285_ = lean_ctor_get(v_a_281_, 0);
lean_inc(v_a_285_);
lean_dec(v_a_281_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 0, v_a_285_);
v___x_287_ = v___x_283_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_a_285_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___boxed(lean_object* v_mvarId_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lean_Meta_LibrarySearch_tryDischarger(v_mvarId_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
lean_dec(v_a_361_);
lean_dec_ref(v_a_360_);
lean_dec(v_a_359_);
lean_dec_ref(v_a_358_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__0(lean_object* v_x_364_, lean_object* v_x_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_box(0);
v___x_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__0___boxed(lean_object* v_x_373_, lean_object* v_x_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_Meta_LibrarySearch_solveByElim___lam__0(v_x_373_, v_x_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
lean_dec(v_x_374_);
lean_dec(v_x_373_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__1(lean_object* v_x_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_){
_start:
{
uint8_t v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_387_ = 0;
v___x_388_ = lean_box(v___x_387_);
v___x_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_389_, 0, v___x_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__1___boxed(lean_object* v_x_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lean_Meta_LibrarySearch_solveByElim___lam__1(v_x_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v_x_390_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0_spec__0(lean_object* v_msgData_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_){
_start:
{
lean_object* v___x_403_; lean_object* v_env_404_; uint8_t v___x_405_; lean_object* v_env_406_; lean_object* v___x_407_; lean_object* v_toCold_408_; lean_object* v_mctx_409_; lean_object* v_lctx_410_; lean_object* v_options_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_403_ = lean_st_ref_get(v___y_401_);
v_env_404_ = lean_ctor_get(v___x_403_, 0);
lean_inc_ref(v_env_404_);
lean_dec(v___x_403_);
v___x_405_ = 0;
v_env_406_ = l_Lean_Environment_setRecordingDeps(v_env_404_, v___x_405_);
v___x_407_ = lean_st_ref_get(v___y_399_);
v_toCold_408_ = lean_ctor_get(v___y_400_, 0);
v_mctx_409_ = lean_ctor_get(v___x_407_, 0);
lean_inc_ref(v_mctx_409_);
lean_dec(v___x_407_);
v_lctx_410_ = lean_ctor_get(v___y_398_, 2);
v_options_411_ = lean_ctor_get(v_toCold_408_, 2);
lean_inc_ref(v_options_411_);
lean_inc_ref(v_lctx_410_);
v___x_412_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_412_, 0, v_env_406_);
lean_ctor_set(v___x_412_, 1, v_mctx_409_);
lean_ctor_set(v___x_412_, 2, v_lctx_410_);
lean_ctor_set(v___x_412_, 3, v_options_411_);
v___x_413_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
lean_ctor_set(v___x_413_, 1, v_msgData_397_);
v___x_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0_spec__0___boxed(lean_object* v_msgData_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0_spec__0(v_msgData_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(lean_object* v_msg_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
lean_object* v_ref_428_; lean_object* v___x_429_; lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_438_; 
v_ref_428_ = lean_ctor_get(v___y_425_, 2);
v___x_429_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0_spec__0(v_msg_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_);
v_a_430_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_438_ == 0)
{
v___x_432_ = v___x_429_;
v_isShared_433_ = v_isSharedCheck_438_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_429_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_438_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_434_; lean_object* v___x_436_; 
lean_inc(v_ref_428_);
v___x_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_434_, 0, v_ref_428_);
lean_ctor_set(v___x_434_, 1, v_a_430_);
if (v_isShared_433_ == 0)
{
lean_ctor_set_tag(v___x_432_, 1);
lean_ctor_set(v___x_432_, 0, v___x_434_);
v___x_436_ = v___x_432_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_434_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg___boxed(lean_object* v_msg_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(v_msg_439_, v___y_440_, v___y_441_, v___y_442_, v___y_443_);
lean_dec(v___y_443_);
lean_dec_ref(v___y_442_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
return v_res_445_;
}
}
static lean_object* _init_l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1(void){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_447_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__0));
v___x_448_ = l_Lean_stringToMessageData(v___x_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__2(lean_object* v_x_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_455_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1, &l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1_once, _init_l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1);
v___x_456_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(v___x_455_, v___y_450_, v___y_451_, v___y_452_, v___y_453_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__2___boxed(lean_object* v_x_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lean_Meta_LibrarySearch_solveByElim___lam__2(v_x_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
lean_dec(v___y_459_);
lean_dec_ref(v___y_458_);
lean_dec(v_x_457_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim(lean_object* v_required_471_, uint8_t v_exfalso_472_, lean_object* v_goals_473_, lean_object* v_maxDepth_474_, uint8_t v_grind_475_, uint8_t v_try_x3f_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_){
_start:
{
lean_object* v___x_482_; uint8_t v_transparency_483_; lean_object* v___f_484_; lean_object* v___f_485_; lean_object* v___f_486_; uint8_t v___x_487_; lean_object* v___x_488_; uint8_t v___x_489_; lean_object* v___y_491_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_482_ = l_Lean_Meta_Context_config(v_a_477_);
v_transparency_483_ = lean_ctor_get_uint8(v___x_482_, 9);
lean_dec_ref(v___x_482_);
v___f_484_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_solveByElim___closed__0));
v___f_485_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_solveByElim___closed__1));
v___f_486_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_solveByElim___closed__2));
v___x_487_ = 1;
v___x_488_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_488_, 0, v_maxDepth_474_);
lean_ctor_set(v___x_488_, 1, v___f_484_);
lean_ctor_set(v___x_488_, 2, v___f_485_);
lean_ctor_set(v___x_488_, 3, v___f_486_);
lean_ctor_set_uint8(v___x_488_, sizeof(void*)*4, v___x_487_);
v___x_489_ = 0;
v___x_510_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_grindDischarger___closed__3));
v___x_511_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v___x_511_, 0, v___x_488_);
lean_ctor_set(v___x_511_, 1, v___x_510_);
lean_ctor_set_uint8(v___x_511_, sizeof(void*)*2, v_transparency_483_);
lean_ctor_set_uint8(v___x_511_, sizeof(void*)*2 + 1, v___x_487_);
lean_ctor_set_uint8(v___x_511_, sizeof(void*)*2 + 2, v_exfalso_472_);
v___x_512_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_512_, 0, v___x_511_);
lean_ctor_set_uint8(v___x_512_, sizeof(void*)*1, v___x_487_);
lean_ctor_set_uint8(v___x_512_, sizeof(void*)*1 + 1, v___x_487_);
lean_ctor_set_uint8(v___x_512_, sizeof(void*)*1 + 2, v___x_489_);
lean_ctor_set_uint8(v___x_512_, sizeof(void*)*1 + 3, v___x_489_);
if (v_try_x3f_476_ == 0)
{
if (v_grind_475_ == 0)
{
v___y_491_ = v___x_512_;
goto v___jp_490_;
}
else
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_solveByElim___closed__4));
v___x_514_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge(v___x_512_, v___x_513_);
v___y_491_ = v___x_514_;
goto v___jp_490_;
}
}
else
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_solveByElim___closed__5));
v___x_516_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge(v___x_512_, v___x_515_);
v___y_491_ = v___x_516_;
goto v___jp_490_;
}
v___jp_490_:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_492_ = lean_box(0);
v___x_493_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_solveByElim___closed__3));
v___x_494_ = l_Lean_Meta_SolveByElim_mkAssumptionSet(v___x_489_, v___x_489_, v___x_492_, v___x_492_, v___x_493_, v_a_477_, v_a_478_, v_a_479_, v_a_480_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_a_495_; lean_object* v_fst_496_; lean_object* v_snd_497_; uint8_t v___x_498_; 
v_a_495_ = lean_ctor_get(v___x_494_, 0);
lean_inc(v_a_495_);
lean_dec_ref_known(v___x_494_, 1);
v_fst_496_ = lean_ctor_get(v_a_495_, 0);
lean_inc(v_fst_496_);
v_snd_497_ = lean_ctor_get(v_a_495_, 1);
lean_inc(v_snd_497_);
lean_dec(v_a_495_);
v___x_498_ = l_List_isEmpty___redArg(v_required_471_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_499_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll(v___y_491_, v_required_471_);
v___x_500_ = l_Lean_Meta_SolveByElim_solveByElim(v___x_499_, v_fst_496_, v_snd_497_, v_goals_473_, v_a_477_, v_a_478_, v_a_479_, v_a_480_);
return v___x_500_;
}
else
{
lean_object* v___x_501_; 
lean_dec(v_required_471_);
v___x_501_ = l_Lean_Meta_SolveByElim_solveByElim(v___y_491_, v_fst_496_, v_snd_497_, v_goals_473_, v_a_477_, v_a_478_, v_a_479_, v_a_480_);
return v___x_501_;
}
}
else
{
lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_509_; 
lean_dec_ref(v___y_491_);
lean_dec(v_goals_473_);
lean_dec(v_required_471_);
v_a_502_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_509_ == 0)
{
v___x_504_ = v___x_494_;
v_isShared_505_ = v_isSharedCheck_509_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_dec(v___x_494_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___boxed(lean_object* v_required_517_, lean_object* v_exfalso_518_, lean_object* v_goals_519_, lean_object* v_maxDepth_520_, lean_object* v_grind_521_, lean_object* v_try_x3f_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_){
_start:
{
uint8_t v_exfalso_boxed_528_; uint8_t v_grind_boxed_529_; uint8_t v_try_x3f_boxed_530_; lean_object* v_res_531_; 
v_exfalso_boxed_528_ = lean_unbox(v_exfalso_518_);
v_grind_boxed_529_ = lean_unbox(v_grind_521_);
v_try_x3f_boxed_530_ = lean_unbox(v_try_x3f_522_);
v_res_531_ = l_Lean_Meta_LibrarySearch_solveByElim(v_required_517_, v_exfalso_boxed_528_, v_goals_519_, v_maxDepth_520_, v_grind_boxed_529_, v_try_x3f_boxed_530_, v_a_523_, v_a_524_, v_a_525_, v_a_526_);
lean_dec(v_a_526_);
lean_dec_ref(v_a_525_);
lean_dec(v_a_524_);
lean_dec_ref(v_a_523_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0(lean_object* v_00_u03b1_532_, lean_object* v_msg_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(v_msg_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___boxed(lean_object* v_00_u03b1_540_, lean_object* v_msg_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0(v_00_u03b1_540_, v_msg_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorIdx___impl(uint8_t v_x_548_){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = lean_box(v_x_548_);
v___x_550_ = lean_obj_tag_nat(v___x_549_);
lean_dec(v___x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorIdx___impl___boxed(lean_object* v_x_551_){
_start:
{
uint8_t v_x_4__boxed_552_; lean_object* v_res_553_; 
v_x_4__boxed_552_ = lean_unbox(v_x_551_);
v_res_553_ = l_Lean_Meta_LibrarySearch_DeclMod_ctorIdx___impl(v_x_4__boxed_552_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim___redArg(lean_object* v_k_554_){
_start:
{
lean_inc(v_k_554_);
return v_k_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim___redArg___boxed(lean_object* v_k_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Lean_Meta_LibrarySearch_DeclMod_ctorElim___redArg(v_k_555_);
lean_dec(v_k_555_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim(lean_object* v_motive_557_, lean_object* v_ctorIdx_558_, uint8_t v_t_559_, lean_object* v_h_560_, lean_object* v_k_561_){
_start:
{
lean_inc(v_k_561_);
return v_k_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim___boxed(lean_object* v_motive_562_, lean_object* v_ctorIdx_563_, lean_object* v_t_564_, lean_object* v_h_565_, lean_object* v_k_566_){
_start:
{
uint8_t v_t_boxed_567_; lean_object* v_res_568_; 
v_t_boxed_567_ = lean_unbox(v_t_564_);
v_res_568_ = l_Lean_Meta_LibrarySearch_DeclMod_ctorElim(v_motive_562_, v_ctorIdx_563_, v_t_boxed_567_, v_h_565_, v_k_566_);
lean_dec(v_k_566_);
lean_dec(v_ctorIdx_563_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim___redArg(lean_object* v_none_569_){
_start:
{
lean_inc(v_none_569_);
return v_none_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim___redArg___boxed(lean_object* v_none_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Lean_Meta_LibrarySearch_DeclMod_none_elim___redArg(v_none_570_);
lean_dec(v_none_570_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim(lean_object* v_motive_572_, uint8_t v_t_573_, lean_object* v_h_574_, lean_object* v_none_575_){
_start:
{
lean_inc(v_none_575_);
return v_none_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim___boxed(lean_object* v_motive_576_, lean_object* v_t_577_, lean_object* v_h_578_, lean_object* v_none_579_){
_start:
{
uint8_t v_t_boxed_580_; lean_object* v_res_581_; 
v_t_boxed_580_ = lean_unbox(v_t_577_);
v_res_581_ = l_Lean_Meta_LibrarySearch_DeclMod_none_elim(v_motive_576_, v_t_boxed_580_, v_h_578_, v_none_579_);
lean_dec(v_none_579_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim___redArg(lean_object* v_mp_582_){
_start:
{
lean_inc(v_mp_582_);
return v_mp_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim___redArg___boxed(lean_object* v_mp_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Lean_Meta_LibrarySearch_DeclMod_mp_elim___redArg(v_mp_583_);
lean_dec(v_mp_583_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim(lean_object* v_motive_585_, uint8_t v_t_586_, lean_object* v_h_587_, lean_object* v_mp_588_){
_start:
{
lean_inc(v_mp_588_);
return v_mp_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim___boxed(lean_object* v_motive_589_, lean_object* v_t_590_, lean_object* v_h_591_, lean_object* v_mp_592_){
_start:
{
uint8_t v_t_boxed_593_; lean_object* v_res_594_; 
v_t_boxed_593_ = lean_unbox(v_t_590_);
v_res_594_ = l_Lean_Meta_LibrarySearch_DeclMod_mp_elim(v_motive_589_, v_t_boxed_593_, v_h_591_, v_mp_592_);
lean_dec(v_mp_592_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim___redArg(lean_object* v_mpr_595_){
_start:
{
lean_inc(v_mpr_595_);
return v_mpr_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim___redArg___boxed(lean_object* v_mpr_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim___redArg(v_mpr_596_);
lean_dec(v_mpr_596_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim(lean_object* v_motive_598_, uint8_t v_t_599_, lean_object* v_h_600_, lean_object* v_mpr_601_){
_start:
{
lean_inc(v_mpr_601_);
return v_mpr_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim___boxed(lean_object* v_motive_602_, lean_object* v_t_603_, lean_object* v_h_604_, lean_object* v_mpr_605_){
_start:
{
uint8_t v_t_boxed_606_; lean_object* v_res_607_; 
v_t_boxed_606_ = lean_unbox(v_t_603_);
v_res_607_ = l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim(v_motive_602_, v_t_boxed_606_, v_h_604_, v_mpr_605_);
lean_dec(v_mpr_605_);
return v_res_607_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_DeclMod_ofNat(lean_object* v_n_608_){
_start:
{
lean_object* v___x_609_; uint8_t v___x_610_; 
v___x_609_ = lean_unsigned_to_nat(0u);
v___x_610_ = lean_nat_dec_le(v_n_608_, v___x_609_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_611_ = lean_unsigned_to_nat(1u);
v___x_612_ = lean_nat_dec_le(v_n_608_, v___x_611_);
if (v___x_612_ == 0)
{
uint8_t v___x_613_; 
v___x_613_ = 2;
return v___x_613_;
}
else
{
uint8_t v___x_614_; 
v___x_614_ = 1;
return v___x_614_;
}
}
else
{
uint8_t v___x_615_; 
v___x_615_ = 0;
return v___x_615_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ofNat___boxed(lean_object* v_n_616_){
_start:
{
uint8_t v_res_617_; lean_object* v_r_618_; 
v_res_617_ = l_Lean_Meta_LibrarySearch_DeclMod_ofNat(v_n_616_);
lean_dec(v_n_616_);
v_r_618_ = lean_box(v_res_617_);
return v_r_618_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_instDecidableEqDeclMod(uint8_t v_x_619_, uint8_t v_y_620_){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; uint8_t v___x_625_; 
v___x_621_ = lean_box(v_x_619_);
v___x_622_ = lean_obj_tag_nat(v___x_621_);
lean_dec(v___x_621_);
v___x_623_ = lean_box(v_y_620_);
v___x_624_ = lean_obj_tag_nat(v___x_623_);
lean_dec(v___x_623_);
v___x_625_ = lean_nat_dec_eq(v___x_622_, v___x_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_instDecidableEqDeclMod___boxed(lean_object* v_x_626_, lean_object* v_y_627_){
_start:
{
uint8_t v_x_23__boxed_628_; uint8_t v_y_24__boxed_629_; uint8_t v_res_630_; lean_object* v_r_631_; 
v_x_23__boxed_628_ = lean_unbox(v_x_626_);
v_y_24__boxed_629_ = lean_unbox(v_y_627_);
v_res_630_ = l_Lean_Meta_LibrarySearch_instDecidableEqDeclMod(v_x_23__boxed_628_, v_y_24__boxed_629_);
v_r_631_ = lean_box(v_res_630_);
return v_r_631_;
}
}
static uint8_t _init_l_Lean_Meta_LibrarySearch_instInhabitedDeclMod_default(void){
_start:
{
uint8_t v___x_632_; 
v___x_632_ = 0;
return v___x_632_;
}
}
static uint8_t _init_l_Lean_Meta_LibrarySearch_instInhabitedDeclMod(void){
_start:
{
uint8_t v___x_633_; 
v___x_633_ = 0;
return v___x_633_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_instOrdDeclMod_ord(uint8_t v_x_634_, uint8_t v_y_635_){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; uint8_t v___x_640_; 
v___x_636_ = lean_box(v_x_634_);
v___x_637_ = lean_obj_tag_nat(v___x_636_);
lean_dec(v___x_636_);
v___x_638_ = lean_box(v_y_635_);
v___x_639_ = lean_obj_tag_nat(v___x_638_);
lean_dec(v___x_638_);
v___x_640_ = lean_nat_dec_lt(v___x_637_, v___x_639_);
if (v___x_640_ == 0)
{
uint8_t v___x_641_; 
v___x_641_ = lean_nat_dec_eq(v___x_637_, v___x_639_);
if (v___x_641_ == 0)
{
uint8_t v___x_642_; 
v___x_642_ = 2;
return v___x_642_;
}
else
{
uint8_t v___x_643_; 
v___x_643_ = 1;
return v___x_643_;
}
}
else
{
uint8_t v___x_644_; 
v___x_644_ = 0;
return v___x_644_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_instOrdDeclMod_ord___boxed(lean_object* v_x_645_, lean_object* v_y_646_){
_start:
{
uint8_t v_x_33__boxed_647_; uint8_t v_y_34__boxed_648_; uint8_t v_res_649_; lean_object* v_r_650_; 
v_x_33__boxed_647_ = lean_unbox(v_x_645_);
v_y_34__boxed_648_ = lean_unbox(v_y_646_);
v_res_649_ = l_Lean_Meta_LibrarySearch_instOrdDeclMod_ord(v_x_33__boxed_647_, v_y_34__boxed_648_);
v_r_650_ = lean_box(v_res_649_);
return v_r_650_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_LibrarySearch_instHashableDeclMod_hash(uint8_t v_x_653_){
_start:
{
switch(v_x_653_)
{
case 0:
{
uint64_t v___x_654_; 
v___x_654_ = 0ULL;
return v___x_654_;
}
case 1:
{
uint64_t v___x_655_; 
v___x_655_ = 1ULL;
return v___x_655_;
}
default: 
{
uint64_t v___x_656_; 
v___x_656_ = 2ULL;
return v___x_656_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_instHashableDeclMod_hash___boxed(lean_object* v_x_657_){
_start:
{
uint8_t v_x_40__boxed_658_; uint64_t v_res_659_; lean_object* v_r_660_; 
v_x_40__boxed_658_ = lean_unbox(v_x_657_);
v_res_659_ = l_Lean_Meta_LibrarySearch_instHashableDeclMod_hash(v_x_40__boxed_658_);
v_r_660_ = lean_box_uint64(v_res_659_);
return v_r_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___lam__0(lean_object* v_k_663_, lean_object* v_b_664_, lean_object* v_c_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
lean_object* v___x_671_; 
lean_inc(v___y_669_);
lean_inc_ref(v___y_668_);
lean_inc(v___y_667_);
lean_inc_ref(v___y_666_);
v___x_671_ = lean_apply_7(v_k_663_, v_b_664_, v_c_665_, v___y_666_, v___y_667_, v___y_668_, v___y_669_, lean_box(0));
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___lam__0___boxed(lean_object* v_k_672_, lean_object* v_b_673_, lean_object* v_c_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___lam__0(v_k_672_, v_b_673_, v_c_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec(v___y_676_);
lean_dec_ref(v___y_675_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg(lean_object* v_type_681_, lean_object* v_k_682_, uint8_t v_cleanupAnnotations_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_){
_start:
{
lean_object* v___f_689_; uint8_t v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___f_689_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_689_, 0, v_k_682_);
v___x_690_ = 0;
v___x_691_ = lean_box(0);
v___x_692_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_690_, v___x_691_, v_type_681_, v___f_689_, v_cleanupAnnotations_683_, v___x_690_, v___y_684_, v___y_685_, v___y_686_, v___y_687_);
if (lean_obj_tag(v___x_692_) == 0)
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_700_; 
v_a_693_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_700_ == 0)
{
v___x_695_ = v___x_692_;
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_692_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_698_; 
if (v_isShared_696_ == 0)
{
v___x_698_ = v___x_695_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_a_693_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
else
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_708_; 
v_a_701_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_708_ == 0)
{
v___x_703_ = v___x_692_;
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_692_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_706_; 
if (v_isShared_704_ == 0)
{
v___x_706_ = v___x_703_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_a_701_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___boxed(lean_object* v_type_709_, lean_object* v_k_710_, lean_object* v_cleanupAnnotations_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_717_; lean_object* v_res_718_; 
v_cleanupAnnotations_boxed_717_ = lean_unbox(v_cleanupAnnotations_711_);
v_res_718_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg(v_type_709_, v_k_710_, v_cleanupAnnotations_boxed_717_, v___y_712_, v___y_713_, v___y_714_, v___y_715_);
lean_dec(v___y_715_);
lean_dec_ref(v___y_714_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0(lean_object* v_00_u03b1_719_, lean_object* v_type_720_, lean_object* v_k_721_, uint8_t v_cleanupAnnotations_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg(v_type_720_, v_k_721_, v_cleanupAnnotations_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___boxed(lean_object* v_00_u03b1_729_, lean_object* v_type_730_, lean_object* v_k_731_, lean_object* v_cleanupAnnotations_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_738_; lean_object* v_res_739_; 
v_cleanupAnnotations_boxed_738_ = lean_unbox(v_cleanupAnnotations_732_);
v_res_739_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0(v_00_u03b1_729_, v_type_730_, v_k_731_, v_cleanupAnnotations_boxed_738_, v___y_733_, v___y_734_, v___y_735_, v___y_736_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
lean_dec(v___y_734_);
lean_dec_ref(v___y_733_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0(lean_object* v_name_746_, lean_object* v_x_747_, lean_object* v_type_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
uint8_t v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_754_ = 0;
v___x_755_ = lean_box(v___x_754_);
lean_inc(v_name_746_);
v___x_756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_756_, 0, v_name_746_);
lean_ctor_set(v___x_756_, 1, v___x_755_);
v___x_757_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v_type_748_, v___x_756_, v___y_749_, v___y_750_, v___y_751_, v___y_752_);
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_807_; 
v_a_758_ = lean_ctor_get(v___x_757_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_807_ == 0)
{
v___x_760_ = v___x_757_;
v_isShared_761_ = v_isSharedCheck_807_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_757_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_807_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v_key_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; uint8_t v___x_767_; 
v_key_762_ = lean_ctor_get(v_a_758_, 0);
v___x_763_ = lean_unsigned_to_nat(1u);
v___x_764_ = lean_mk_empty_array_with_capacity(v___x_763_);
lean_inc(v_a_758_);
v___x_765_ = lean_array_push(v___x_764_, v_a_758_);
v___x_766_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__2));
v___x_767_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_762_, v___x_766_);
if (v___x_767_ == 0)
{
lean_object* v___x_769_; 
lean_dec(v_a_758_);
lean_dec(v_name_746_);
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 0, v___x_765_);
v___x_769_ = v___x_760_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v___x_765_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
else
{
lean_object* v___x_771_; uint8_t v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
lean_del_object(v___x_760_);
v___x_771_ = lean_unsigned_to_nat(0u);
v___x_772_ = 1;
v___x_773_ = lean_box(v___x_772_);
lean_inc(v_name_746_);
v___x_774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_774_, 0, v_name_746_);
lean_ctor_set(v___x_774_, 1, v___x_773_);
lean_inc(v_a_758_);
v___x_775_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(v_a_758_, v___x_771_, v___x_774_, v___y_749_, v___y_750_, v___y_751_, v___y_752_);
if (lean_obj_tag(v___x_775_) == 0)
{
lean_object* v_a_776_; lean_object* v___x_777_; uint8_t v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v_a_776_ = lean_ctor_get(v___x_775_, 0);
lean_inc(v_a_776_);
lean_dec_ref_known(v___x_775_, 1);
v___x_777_ = lean_array_push(v___x_765_, v_a_776_);
v___x_778_ = 2;
v___x_779_ = lean_box(v___x_778_);
v___x_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_780_, 0, v_name_746_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
v___x_781_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(v_a_758_, v___x_763_, v___x_780_, v___y_749_, v___y_750_, v___y_751_, v___y_752_);
if (lean_obj_tag(v___x_781_) == 0)
{
lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_790_; 
v_a_782_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_790_ == 0)
{
v___x_784_ = v___x_781_;
v_isShared_785_ = v_isSharedCheck_790_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_781_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_790_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_786_; lean_object* v___x_788_; 
v___x_786_ = lean_array_push(v___x_777_, v_a_782_);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 0, v___x_786_);
v___x_788_ = v___x_784_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_786_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
lean_dec_ref(v___x_777_);
v_a_791_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_781_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_781_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
else
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_806_; 
lean_dec_ref(v___x_765_);
lean_dec(v_a_758_);
lean_dec(v_name_746_);
v_a_799_ = lean_ctor_get(v___x_775_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_806_ == 0)
{
v___x_801_ = v___x_775_;
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_775_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_804_; 
if (v_isShared_802_ == 0)
{
v___x_804_ = v___x_801_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_799_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
}
}
else
{
lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_815_; 
lean_dec(v_name_746_);
v_a_808_ = lean_ctor_get(v___x_757_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_815_ == 0)
{
v___x_810_ = v___x_757_;
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_757_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_813_; 
if (v_isShared_811_ == 0)
{
v___x_813_ = v___x_810_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_a_808_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___boxed(lean_object* v_name_816_, lean_object* v_x_817_, lean_object* v_type_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0(v_name_816_, v_x_817_, v_type_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_);
lean_dec(v___y_822_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec_ref(v_x_817_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport(lean_object* v_name_827_, lean_object* v_c_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_){
_start:
{
lean_object* v___f_837_; lean_object* v___x_838_; lean_object* v_env_839_; uint8_t v___x_840_; 
lean_inc_n(v_name_827_, 2);
v___f_837_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___boxed), 8, 1);
lean_closure_set(v___f_837_, 0, v_name_827_);
v___x_838_ = lean_st_ref_get(v_a_832_);
v_env_839_ = lean_ctor_get(v___x_838_, 0);
lean_inc_ref(v_env_839_);
lean_dec(v___x_838_);
v___x_840_ = l_Lean_Linter_isDeprecated(v_env_839_, v_name_827_);
if (v___x_840_ == 0)
{
uint8_t v___x_841_; 
v___x_841_ = l_Lean_Name_isMetaprogramming(v_name_827_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; lean_object* v_type_843_; lean_object* v___x_844_; 
v___x_842_ = l_Lean_AsyncConstantInfo_toConstantVal(v_c_828_);
v_type_843_ = lean_ctor_get(v___x_842_, 2);
lean_inc_ref(v_type_843_);
lean_dec_ref(v___x_842_);
v___x_844_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg(v_type_843_, v___f_837_, v___x_841_, v_a_829_, v_a_830_, v_a_831_, v_a_832_);
return v___x_844_;
}
else
{
lean_dec_ref(v___f_837_);
lean_dec_ref(v_c_828_);
goto v___jp_834_;
}
}
else
{
lean_dec_ref(v___f_837_);
lean_dec_ref(v_c_828_);
lean_dec(v_name_827_);
goto v___jp_834_;
}
v___jp_834_:
{
lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_835_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___closed__0));
v___x_836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
return v___x_836_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___boxed(lean_object* v_name_845_, lean_object* v_c_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport(v_name_845_, v_c_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
lean_dec(v_a_850_);
lean_dec_ref(v_a_849_);
lean_dec(v_a_848_);
lean_dec_ref(v_a_847_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_858108106____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_854_ = lean_box(0);
v___x_855_ = lean_st_mk_ref(v___x_854_);
v___x_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_858108106____hygCtx___hyg_2____boxed(lean_object* v_a_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_858108106____hygCtx___hyg_2_();
return v_res_858_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_constantsPerImportTask(void){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = lean_unsigned_to_nat(6500u);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_2955776588____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_886_ = lean_box(0);
v___x_887_ = lean_st_mk_ref(v___x_886_);
v___x_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_2955776588____hygCtx___hyg_2____boxed(lean_object* v_a_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_2955776588____hygCtx___hyg_2_();
return v_res_890_;
}
}
static lean_object* _init_l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__1(void){
_start:
{
lean_object* v_droppedRef_892_; lean_object* v___x_893_; 
v_droppedRef_892_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_starLemmasExt;
v___x_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_893_, 0, v_droppedRef_892_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_libSearchFindDecls(lean_object* v_ty_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_900_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_ext;
v___x_901_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__0));
v___x_902_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_droppedKeys));
v___x_903_ = lean_unsigned_to_nat(6500u);
v___x_904_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__1, &l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__1_once, _init_l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__1);
v___x_905_ = l_Lean_Meta_LazyDiscrTree_findMatches___redArg(v___x_900_, v___x_901_, v___x_902_, v___x_903_, v___x_904_, v_ty_894_, v_a_895_, v_a_896_, v_a_897_, v_a_898_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_libSearchFindDecls___boxed(lean_object* v_ty_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lean_Meta_LibrarySearch_libSearchFindDecls(v_ty_906_, v_a_907_, v_a_908_, v_a_909_, v_a_910_);
lean_dec(v_a_910_);
lean_dec_ref(v_a_909_);
lean_dec(v_a_908_);
lean_dec_ref(v_a_907_);
return v_res_912_;
}
}
static lean_object* _init_l_Lean_Meta_LibrarySearch_getStarLemmas___closed__2(void){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_916_ = lean_box(0);
v___x_917_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_getStarLemmas___closed__1));
v___x_918_ = l_Lean_mkConst(v___x_917_, v___x_916_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas(lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_){
_start:
{
lean_object* v_ref_926_; lean_object* v___x_927_; 
v_ref_926_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_starLemmasExt;
v___x_927_ = lean_st_ref_get(v_ref_926_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_getStarLemmas___closed__2, &l_Lean_Meta_LibrarySearch_getStarLemmas___closed__2_once, _init_l_Lean_Meta_LibrarySearch_getStarLemmas___closed__2);
v___x_929_ = l_Lean_Meta_LibrarySearch_libSearchFindDecls(v___x_928_, v_a_921_, v_a_922_, v_a_923_, v_a_924_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_942_; 
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_942_ == 0)
{
lean_object* v_unused_943_; 
v_unused_943_ = lean_ctor_get(v___x_929_, 0);
lean_dec(v_unused_943_);
v___x_931_ = v___x_929_;
v_isShared_932_ = v_isSharedCheck_942_;
goto v_resetjp_930_;
}
else
{
lean_dec(v___x_929_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_942_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_933_; 
v___x_933_ = lean_st_ref_get(v_ref_926_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v___x_934_; lean_object* v___x_936_; 
v___x_934_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_getStarLemmas___closed__3));
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 0, v___x_934_);
v___x_936_ = v___x_931_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v___x_934_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
else
{
lean_object* v_val_938_; lean_object* v___x_940_; 
v_val_938_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_val_938_);
lean_dec_ref_known(v___x_933_, 1);
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 0, v_val_938_);
v___x_940_ = v___x_931_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_val_938_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
}
else
{
return v___x_929_;
}
}
else
{
lean_object* v_val_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
v_val_944_ = lean_ctor_get(v___x_927_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_927_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_927_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_val_944_);
lean_dec(v___x_927_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set_tag(v___x_946_, 0);
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_val_944_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas___boxed(lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lean_Meta_LibrarySearch_getStarLemmas(v_a_952_, v_a_953_, v_a_954_, v_a_955_);
lean_dec(v_a_955_);
lean_dec_ref(v_a_954_);
lean_dec(v_a_953_);
lean_dec_ref(v_a_952_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___lam__0(uint8_t v___x_958_, lean_object* v___x_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
if (v___x_958_ == 0)
{
lean_object* v___x_965_; 
v___x_965_ = l_Lean_getRemainingHeartbeats___redArg(v___y_962_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_975_; 
v_a_966_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_975_ == 0)
{
v___x_968_ = v___x_965_;
v_isShared_969_ = v_isSharedCheck_975_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_965_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_975_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
uint8_t v___x_970_; lean_object* v___x_971_; lean_object* v___x_973_; 
v___x_970_ = lean_nat_dec_lt(v_a_966_, v___x_959_);
lean_dec(v_a_966_);
v___x_971_ = lean_box(v___x_970_);
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 0, v___x_971_);
v___x_973_ = v___x_968_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v___x_971_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
else
{
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_983_; 
v_a_976_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_983_ == 0)
{
v___x_978_ = v___x_965_;
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_965_);
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
else
{
uint8_t v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_984_ = 0;
v___x_985_ = lean_box(v___x_984_);
v___x_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
return v___x_986_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___lam__0___boxed(lean_object* v___x_987_, lean_object* v___x_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
uint8_t v___x_711__boxed_994_; lean_object* v_res_995_; 
v___x_711__boxed_994_ = lean_unbox(v___x_987_);
v_res_995_ = l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___lam__0(v___x_711__boxed_994_, v___x_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___x_988_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg(lean_object* v_leavePercent_996_, lean_object* v_a_997_){
_start:
{
lean_object* v___x_999_; 
v___x_999_ = l_Lean_getMaxHeartbeats___redArg(v_a_997_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; lean_object* v___x_1001_; 
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
lean_inc(v_a_1000_);
lean_dec_ref_known(v___x_999_, 1);
v___x_1001_ = l_Lean_getRemainingHeartbeats___redArg(v_a_997_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1016_; 
v_a_1002_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1004_ = v___x_1001_;
v_isShared_1005_ = v_isSharedCheck_1016_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_1001_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1016_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; uint8_t v___x_1010_; lean_object* v___x_1011_; lean_object* v___y_1012_; lean_object* v___x_1014_; 
v___x_1006_ = lean_nat_mul(v_a_1002_, v_leavePercent_996_);
lean_dec(v_a_1002_);
v___x_1007_ = lean_unsigned_to_nat(100u);
v___x_1008_ = lean_nat_div(v___x_1006_, v___x_1007_);
lean_dec(v___x_1006_);
v___x_1009_ = lean_unsigned_to_nat(0u);
v___x_1010_ = lean_nat_dec_eq(v_a_1000_, v___x_1009_);
lean_dec(v_a_1000_);
v___x_1011_ = lean_box(v___x_1010_);
v___y_1012_ = lean_alloc_closure((void*)(l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___y_1012_, 0, v___x_1011_);
lean_closure_set(v___y_1012_, 1, v___x_1008_);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 0, v___y_1012_);
v___x_1014_ = v___x_1004_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v___y_1012_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec(v_a_1000_);
v_a_1017_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_1001_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1001_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
v_a_1025_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_999_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_999_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___boxed(lean_object* v_leavePercent_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg(v_leavePercent_1033_, v_a_1034_);
lean_dec_ref(v_a_1034_);
lean_dec(v_leavePercent_1033_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck(lean_object* v_leavePercent_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_){
_start:
{
lean_object* v___x_1043_; 
v___x_1043_ = l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg(v_leavePercent_1037_, v_a_1040_);
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___boxed(lean_object* v_leavePercent_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l_Lean_Meta_LibrarySearch_mkHeartbeatCheck(v_leavePercent_1044_, v_a_1045_, v_a_1046_, v_a_1047_, v_a_1048_);
lean_dec(v_a_1048_);
lean_dec_ref(v_a_1047_);
lean_dec(v_a_1046_);
lean_dec_ref(v_a_1045_);
lean_dec(v_leavePercent_1044_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___redArg(lean_object* v_upperBound_1051_, lean_object* v_x_1052_, lean_object* v_f_1053_, lean_object* v_y_1054_, lean_object* v_g_1055_, lean_object* v_a_1056_, lean_object* v_b_1057_){
_start:
{
uint8_t v___x_1058_; 
v___x_1058_ = lean_nat_dec_lt(v_a_1056_, v_upperBound_1051_);
if (v___x_1058_ == 0)
{
lean_dec(v_a_1056_);
lean_dec(v_g_1055_);
lean_dec(v_f_1053_);
return v_b_1057_;
}
else
{
lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1059_ = lean_array_fget_borrowed(v_x_1052_, v_a_1056_);
lean_inc(v_f_1053_);
lean_inc(v___x_1059_);
v___x_1060_ = lean_apply_1(v_f_1053_, v___x_1059_);
v___x_1061_ = lean_array_push(v_b_1057_, v___x_1060_);
v___x_1062_ = lean_array_fget_borrowed(v_y_1054_, v_a_1056_);
lean_inc(v_g_1055_);
lean_inc(v___x_1062_);
v___x_1063_ = lean_apply_1(v_g_1055_, v___x_1062_);
v___x_1064_ = lean_array_push(v___x_1061_, v___x_1063_);
v___x_1065_ = lean_unsigned_to_nat(1u);
v___x_1066_ = lean_nat_add(v_a_1056_, v___x_1065_);
lean_dec(v_a_1056_);
v_a_1056_ = v___x_1066_;
v_b_1057_ = v___x_1064_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___redArg___boxed(lean_object* v_upperBound_1068_, lean_object* v_x_1069_, lean_object* v_f_1070_, lean_object* v_y_1071_, lean_object* v_g_1072_, lean_object* v_a_1073_, lean_object* v_b_1074_){
_start:
{
lean_object* v_res_1075_; 
v_res_1075_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___redArg(v_upperBound_1068_, v_x_1069_, v_f_1070_, v_y_1071_, v_g_1072_, v_a_1073_, v_b_1074_);
lean_dec_ref(v_y_1071_);
lean_dec_ref(v_x_1069_);
lean_dec(v_upperBound_1068_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg(lean_object* v_g_1076_, size_t v_sz_1077_, size_t v_i_1078_, lean_object* v_bs_1079_){
_start:
{
uint8_t v___x_1080_; 
v___x_1080_ = lean_usize_dec_lt(v_i_1078_, v_sz_1077_);
if (v___x_1080_ == 0)
{
lean_dec(v_g_1076_);
return v_bs_1079_;
}
else
{
lean_object* v_v_1081_; lean_object* v___x_1082_; lean_object* v_bs_x27_1083_; lean_object* v___x_1084_; size_t v___x_1085_; size_t v___x_1086_; lean_object* v___x_1087_; 
v_v_1081_ = lean_array_uget(v_bs_1079_, v_i_1078_);
v___x_1082_ = lean_unsigned_to_nat(0u);
v_bs_x27_1083_ = lean_array_uset(v_bs_1079_, v_i_1078_, v___x_1082_);
lean_inc(v_g_1076_);
v___x_1084_ = lean_apply_1(v_g_1076_, v_v_1081_);
v___x_1085_ = ((size_t)1ULL);
v___x_1086_ = lean_usize_add(v_i_1078_, v___x_1085_);
v___x_1087_ = lean_array_uset(v_bs_x27_1083_, v_i_1078_, v___x_1084_);
v_i_1078_ = v___x_1086_;
v_bs_1079_ = v___x_1087_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg___boxed(lean_object* v_g_1089_, lean_object* v_sz_1090_, lean_object* v_i_1091_, lean_object* v_bs_1092_){
_start:
{
size_t v_sz_boxed_1093_; size_t v_i_boxed_1094_; lean_object* v_res_1095_; 
v_sz_boxed_1093_ = lean_unbox_usize(v_sz_1090_);
lean_dec(v_sz_1090_);
v_i_boxed_1094_ = lean_unbox_usize(v_i_1091_);
lean_dec(v_i_1091_);
v_res_1095_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg(v_g_1089_, v_sz_boxed_1093_, v_i_boxed_1094_, v_bs_1092_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith___redArg(lean_object* v_f_1096_, lean_object* v_x_1097_, lean_object* v_g_1098_, lean_object* v_y_1099_){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v_res_1103_; lean_object* v___y_1105_; uint8_t v___x_1119_; 
v___x_1100_ = lean_array_get_size(v_x_1097_);
v___x_1101_ = lean_array_get_size(v_y_1099_);
v___x_1102_ = lean_nat_add(v___x_1100_, v___x_1101_);
v_res_1103_ = lean_mk_empty_array_with_capacity(v___x_1102_);
lean_dec(v___x_1102_);
v___x_1119_ = lean_nat_dec_le(v___x_1100_, v___x_1101_);
if (v___x_1119_ == 0)
{
v___y_1105_ = v___x_1101_;
goto v___jp_1104_;
}
else
{
v___y_1105_ = v___x_1100_;
goto v___jp_1104_;
}
v___jp_1104_:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; uint8_t v___x_1108_; 
v___x_1106_ = lean_unsigned_to_nat(0u);
lean_inc(v_g_1098_);
lean_inc(v_f_1096_);
v___x_1107_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___redArg(v___y_1105_, v_x_1097_, v_f_1096_, v_y_1099_, v_g_1098_, v___x_1106_, v_res_1103_);
v___x_1108_ = lean_nat_dec_lt(v___y_1105_, v___x_1100_);
if (v___x_1108_ == 0)
{
lean_object* v___x_1109_; size_t v_sz_1110_; size_t v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
lean_dec(v_f_1096_);
v___x_1109_ = l_Array_extract___redArg(v_y_1099_, v___y_1105_, v___x_1101_);
v_sz_1110_ = lean_array_size(v___x_1109_);
v___x_1111_ = ((size_t)0ULL);
v___x_1112_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg(v_g_1098_, v_sz_1110_, v___x_1111_, v___x_1109_);
v___x_1113_ = l_Array_append___redArg(v___x_1107_, v___x_1112_);
lean_dec_ref(v___x_1112_);
return v___x_1113_;
}
else
{
lean_object* v___x_1114_; size_t v_sz_1115_; size_t v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
lean_dec(v_g_1098_);
v___x_1114_ = l_Array_extract___redArg(v_x_1097_, v___y_1105_, v___x_1100_);
v_sz_1115_ = lean_array_size(v___x_1114_);
v___x_1116_ = ((size_t)0ULL);
v___x_1117_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg(v_f_1096_, v_sz_1115_, v___x_1116_, v___x_1114_);
v___x_1118_ = l_Array_append___redArg(v___x_1107_, v___x_1117_);
lean_dec_ref(v___x_1117_);
return v___x_1118_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith___redArg___boxed(lean_object* v_f_1120_, lean_object* v_x_1121_, lean_object* v_g_1122_, lean_object* v_y_1123_){
_start:
{
lean_object* v_res_1124_; 
v_res_1124_ = l_Lean_Meta_LibrarySearch_interleaveWith___redArg(v_f_1120_, v_x_1121_, v_g_1122_, v_y_1123_);
lean_dec_ref(v_y_1123_);
lean_dec_ref(v_x_1121_);
return v_res_1124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith(lean_object* v_00_u03b1_1125_, lean_object* v_00_u03b2_1126_, lean_object* v_00_u03b3_1127_, lean_object* v_f_1128_, lean_object* v_x_1129_, lean_object* v_g_1130_, lean_object* v_y_1131_){
_start:
{
lean_object* v___x_1132_; 
v___x_1132_ = l_Lean_Meta_LibrarySearch_interleaveWith___redArg(v_f_1128_, v_x_1129_, v_g_1130_, v_y_1131_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith___boxed(lean_object* v_00_u03b1_1133_, lean_object* v_00_u03b2_1134_, lean_object* v_00_u03b3_1135_, lean_object* v_f_1136_, lean_object* v_x_1137_, lean_object* v_g_1138_, lean_object* v_y_1139_){
_start:
{
lean_object* v_res_1140_; 
v_res_1140_ = l_Lean_Meta_LibrarySearch_interleaveWith(v_00_u03b1_1133_, v_00_u03b2_1134_, v_00_u03b3_1135_, v_f_1136_, v_x_1137_, v_g_1138_, v_y_1139_);
lean_dec_ref(v_y_1139_);
lean_dec_ref(v_x_1137_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0(lean_object* v_00_u03b2_1141_, lean_object* v_00_u03b3_1142_, lean_object* v_g_1143_, size_t v_sz_1144_, size_t v_i_1145_, lean_object* v_bs_1146_){
_start:
{
lean_object* v___x_1147_; 
v___x_1147_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg(v_g_1143_, v_sz_1144_, v_i_1145_, v_bs_1146_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___boxed(lean_object* v_00_u03b2_1148_, lean_object* v_00_u03b3_1149_, lean_object* v_g_1150_, lean_object* v_sz_1151_, lean_object* v_i_1152_, lean_object* v_bs_1153_){
_start:
{
size_t v_sz_boxed_1154_; size_t v_i_boxed_1155_; lean_object* v_res_1156_; 
v_sz_boxed_1154_ = lean_unbox_usize(v_sz_1151_);
lean_dec(v_sz_1151_);
v_i_boxed_1155_ = lean_unbox_usize(v_i_1152_);
lean_dec(v_i_1152_);
v_res_1156_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0(v_00_u03b2_1148_, v_00_u03b3_1149_, v_g_1150_, v_sz_boxed_1154_, v_i_boxed_1155_, v_bs_1153_);
return v_res_1156_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1(lean_object* v_00_u03b3_1157_, lean_object* v_upperBound_1158_, lean_object* v_00_u03b1_1159_, lean_object* v_x_1160_, lean_object* v_f_1161_, lean_object* v_00_u03b2_1162_, lean_object* v_y_1163_, lean_object* v_g_1164_, lean_object* v_inst_1165_, lean_object* v_R_1166_, lean_object* v_a_1167_, lean_object* v_b_1168_, lean_object* v_c_1169_){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___redArg(v_upperBound_1158_, v_x_1160_, v_f_1161_, v_y_1163_, v_g_1164_, v_a_1167_, v_b_1168_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___boxed(lean_object* v_00_u03b3_1171_, lean_object* v_upperBound_1172_, lean_object* v_00_u03b1_1173_, lean_object* v_x_1174_, lean_object* v_f_1175_, lean_object* v_00_u03b2_1176_, lean_object* v_y_1177_, lean_object* v_g_1178_, lean_object* v_inst_1179_, lean_object* v_R_1180_, lean_object* v_a_1181_, lean_object* v_b_1182_, lean_object* v_c_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1(v_00_u03b3_1171_, v_upperBound_1172_, v_00_u03b1_1173_, v_x_1174_, v_f_1175_, v_00_u03b2_1176_, v_y_1177_, v_g_1178_, v_inst_1179_, v_R_1180_, v_a_1181_, v_b_1182_, v_c_1183_);
lean_dec_ref(v_y_1177_);
lean_dec_ref(v_x_1174_);
lean_dec(v_upperBound_1172_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2_));
v___x_1193_ = l_Lean_registerInternalExceptionId(v___x_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2____boxed(lean_object* v_a_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2_();
return v_res_1195_;
}
}
static lean_object* _init_l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0(void){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1196_ = lean_box(0);
v___x_1197_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_abortSpeculationId;
v___x_1198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1197_);
lean_ctor_set(v___x_1198_, 1, v___x_1196_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___redArg(lean_object* v_inst_1199_){
_start:
{
lean_object* v_throw_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v_throw_1200_ = lean_ctor_get(v_inst_1199_, 0);
lean_inc(v_throw_1200_);
lean_dec_ref(v_inst_1199_);
v___x_1201_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0, &l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0_once, _init_l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0);
v___x_1202_ = lean_apply_2(v_throw_1200_, lean_box(0), v___x_1201_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation(lean_object* v_m_1203_, lean_object* v_00_u03b1_1204_, lean_object* v_inst_1205_){
_start:
{
lean_object* v___x_1206_; 
v___x_1206_ = l_Lean_Meta_LibrarySearch_abortSpeculation___redArg(v_inst_1205_);
return v___x_1206_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_isAbortSpeculation(lean_object* v_x_1207_){
_start:
{
if (lean_obj_tag(v_x_1207_) == 1)
{
lean_object* v_id_1208_; lean_object* v___x_1209_; uint8_t v___x_1210_; 
v_id_1208_ = lean_ctor_get(v_x_1207_, 0);
v___x_1209_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_abortSpeculationId;
v___x_1210_ = l_Lean_instBEqInternalExceptionId_beq(v_id_1208_, v___x_1209_);
return v___x_1210_;
}
else
{
uint8_t v___x_1211_; 
v___x_1211_ = 0;
return v___x_1211_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_isAbortSpeculation___boxed(lean_object* v_x_1212_){
_start:
{
uint8_t v_res_1213_; lean_object* v_r_1214_; 
v_res_1213_ = l_Lean_Meta_LibrarySearch_isAbortSpeculation(v_x_1212_);
lean_dec_ref(v_x_1212_);
v_r_1214_ = lean_box(v_res_1213_);
return v_r_1214_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___redArg(lean_object* v_x_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_){
_start:
{
lean_object* v___x_1221_; 
v___x_1221_ = l_Lean_Meta_saveState___redArg(v___y_1217_, v___y_1219_);
if (lean_obj_tag(v___x_1221_) == 0)
{
lean_object* v_a_1222_; lean_object* v___x_1223_; 
v_a_1222_ = lean_ctor_get(v___x_1221_, 0);
lean_inc(v_a_1222_);
lean_dec_ref_known(v___x_1221_, 1);
lean_inc(v___y_1219_);
lean_inc_ref(v___y_1218_);
lean_inc(v___y_1217_);
lean_inc_ref(v___y_1216_);
v___x_1223_ = lean_apply_5(v_x_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, lean_box(0));
if (lean_obj_tag(v___x_1223_) == 0)
{
lean_object* v_a_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1232_; 
lean_dec(v_a_1222_);
v_a_1224_ = lean_ctor_get(v___x_1223_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1223_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1226_ = v___x_1223_;
v_isShared_1227_ = v_isSharedCheck_1232_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_a_1224_);
lean_dec(v___x_1223_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1232_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1228_; lean_object* v___x_1230_; 
v___x_1228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1228_, 0, v_a_1224_);
if (v_isShared_1227_ == 0)
{
lean_ctor_set(v___x_1226_, 0, v___x_1228_);
v___x_1230_ = v___x_1226_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v___x_1228_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
}
else
{
lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1263_; 
v_a_1233_ = lean_ctor_get(v___x_1223_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1223_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1235_ = v___x_1223_;
v_isShared_1236_ = v_isSharedCheck_1263_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v___x_1223_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1263_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
uint8_t v___x_1237_; 
v___x_1237_ = l_Lean_Exception_isInterrupt(v_a_1233_);
if (v___x_1237_ == 0)
{
uint8_t v___x_1238_; 
lean_inc(v_a_1233_);
v___x_1238_ = l_Lean_Exception_isRuntime(v_a_1233_);
if (v___x_1238_ == 0)
{
lean_object* v___x_1239_; 
lean_del_object(v___x_1235_);
lean_dec(v_a_1233_);
v___x_1239_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1222_, v___y_1217_, v___y_1219_);
if (lean_obj_tag(v___x_1239_) == 0)
{
lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1247_; 
v_isSharedCheck_1247_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1247_ == 0)
{
lean_object* v_unused_1248_; 
v_unused_1248_ = lean_ctor_get(v___x_1239_, 0);
lean_dec(v_unused_1248_);
v___x_1241_ = v___x_1239_;
v_isShared_1242_ = v_isSharedCheck_1247_;
goto v_resetjp_1240_;
}
else
{
lean_dec(v___x_1239_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1247_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1243_; lean_object* v___x_1245_; 
v___x_1243_ = lean_box(0);
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 0, v___x_1243_);
v___x_1245_ = v___x_1241_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v___x_1243_);
v___x_1245_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
return v___x_1245_;
}
}
}
else
{
lean_object* v_a_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1256_; 
v_a_1249_ = lean_ctor_get(v___x_1239_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1251_ = v___x_1239_;
v_isShared_1252_ = v_isSharedCheck_1256_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_a_1249_);
lean_dec(v___x_1239_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1256_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1254_; 
if (v_isShared_1252_ == 0)
{
v___x_1254_ = v___x_1251_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_a_1249_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
}
else
{
lean_object* v___x_1258_; 
lean_dec(v_a_1222_);
if (v_isShared_1236_ == 0)
{
v___x_1258_ = v___x_1235_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_a_1233_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
else
{
lean_object* v___x_1261_; 
lean_dec(v_a_1222_);
if (v_isShared_1236_ == 0)
{
v___x_1261_ = v___x_1235_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_a_1233_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
}
}
else
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1271_; 
lean_dec_ref(v_x_1215_);
v_a_1264_ = lean_ctor_get(v___x_1221_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1266_ = v___x_1221_;
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1221_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1269_; 
if (v_isShared_1267_ == 0)
{
v___x_1269_ = v___x_1266_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1264_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___redArg___boxed(lean_object* v_x_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_){
_start:
{
lean_object* v_res_1278_; 
v_res_1278_ = l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___redArg(v_x_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
lean_dec(v___y_1274_);
lean_dec_ref(v___y_1273_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0(lean_object* v_00_u03b1_1279_, lean_object* v_x_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_){
_start:
{
lean_object* v___x_1286_; 
v___x_1286_ = l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___redArg(v_x_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___boxed(lean_object* v_00_u03b1_1287_, lean_object* v_x_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0(v_00_u03b1_1287_, v_x_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___redArg(lean_object* v_e_1295_, lean_object* v___y_1296_){
_start:
{
uint8_t v___x_1298_; 
v___x_1298_ = l_Lean_Expr_hasMVar(v_e_1295_);
if (v___x_1298_ == 0)
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1299_, 0, v_e_1295_);
return v___x_1299_;
}
else
{
lean_object* v___x_1300_; lean_object* v_mctx_1301_; lean_object* v___x_1302_; lean_object* v_fst_1303_; lean_object* v_snd_1304_; lean_object* v___x_1305_; lean_object* v_cache_1306_; lean_object* v_zetaDeltaFVarIds_1307_; lean_object* v_postponed_1308_; lean_object* v_diag_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1318_; 
v___x_1300_ = lean_st_ref_get(v___y_1296_);
v_mctx_1301_ = lean_ctor_get(v___x_1300_, 0);
lean_inc_ref(v_mctx_1301_);
lean_dec(v___x_1300_);
v___x_1302_ = l_Lean_instantiateMVarsCore(v_mctx_1301_, v_e_1295_);
v_fst_1303_ = lean_ctor_get(v___x_1302_, 0);
lean_inc(v_fst_1303_);
v_snd_1304_ = lean_ctor_get(v___x_1302_, 1);
lean_inc(v_snd_1304_);
lean_dec_ref(v___x_1302_);
v___x_1305_ = lean_st_ref_take(v___y_1296_);
v_cache_1306_ = lean_ctor_get(v___x_1305_, 1);
v_zetaDeltaFVarIds_1307_ = lean_ctor_get(v___x_1305_, 2);
v_postponed_1308_ = lean_ctor_get(v___x_1305_, 3);
v_diag_1309_ = lean_ctor_get(v___x_1305_, 4);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1318_ == 0)
{
lean_object* v_unused_1319_; 
v_unused_1319_ = lean_ctor_get(v___x_1305_, 0);
lean_dec(v_unused_1319_);
v___x_1311_ = v___x_1305_;
v_isShared_1312_ = v_isSharedCheck_1318_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_diag_1309_);
lean_inc(v_postponed_1308_);
lean_inc(v_zetaDeltaFVarIds_1307_);
lean_inc(v_cache_1306_);
lean_dec(v___x_1305_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1318_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1314_; 
if (v_isShared_1312_ == 0)
{
lean_ctor_set(v___x_1311_, 0, v_snd_1304_);
v___x_1314_ = v___x_1311_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_snd_1304_);
lean_ctor_set(v_reuseFailAlloc_1317_, 1, v_cache_1306_);
lean_ctor_set(v_reuseFailAlloc_1317_, 2, v_zetaDeltaFVarIds_1307_);
lean_ctor_set(v_reuseFailAlloc_1317_, 3, v_postponed_1308_);
lean_ctor_set(v_reuseFailAlloc_1317_, 4, v_diag_1309_);
v___x_1314_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1315_ = lean_st_ref_put(v___y_1296_, v___x_1314_);
v___x_1316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1316_, 0, v_fst_1303_);
return v___x_1316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___redArg___boxed(lean_object* v_e_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___redArg(v_e_1320_, v___y_1321_);
lean_dec(v___y_1321_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1(lean_object* v_e_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v___x_1330_; 
v___x_1330_ = l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___redArg(v_e_1324_, v___y_1326_);
return v___x_1330_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___boxed(lean_object* v_e_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_){
_start:
{
lean_object* v_res_1337_; 
v_res_1337_ = l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1(v_e_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
return v_res_1337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearchSymm___lam__0(lean_object* v___x_1338_, lean_object* v_x_1339_){
_start:
{
lean_object* v___x_1340_; 
v___x_1340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1338_);
lean_ctor_set(v___x_1340_, 1, v_x_1339_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__2(lean_object* v___x_1341_, size_t v_sz_1342_, size_t v_i_1343_, lean_object* v_bs_1344_){
_start:
{
uint8_t v___x_1345_; 
v___x_1345_ = lean_usize_dec_lt(v_i_1343_, v_sz_1342_);
if (v___x_1345_ == 0)
{
lean_dec_ref(v___x_1341_);
return v_bs_1344_;
}
else
{
lean_object* v_v_1346_; lean_object* v___x_1347_; lean_object* v_bs_x27_1348_; lean_object* v___x_1349_; size_t v___x_1350_; size_t v___x_1351_; lean_object* v___x_1352_; 
v_v_1346_ = lean_array_uget(v_bs_1344_, v_i_1343_);
v___x_1347_ = lean_unsigned_to_nat(0u);
v_bs_x27_1348_ = lean_array_uset(v_bs_1344_, v_i_1343_, v___x_1347_);
lean_inc_ref(v___x_1341_);
v___x_1349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1341_);
lean_ctor_set(v___x_1349_, 1, v_v_1346_);
v___x_1350_ = ((size_t)1ULL);
v___x_1351_ = lean_usize_add(v_i_1343_, v___x_1350_);
v___x_1352_ = lean_array_uset(v_bs_x27_1348_, v_i_1343_, v___x_1349_);
v_i_1343_ = v___x_1351_;
v_bs_1344_ = v___x_1352_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__2___boxed(lean_object* v___x_1354_, lean_object* v_sz_1355_, lean_object* v_i_1356_, lean_object* v_bs_1357_){
_start:
{
size_t v_sz_boxed_1358_; size_t v_i_boxed_1359_; lean_object* v_res_1360_; 
v_sz_boxed_1358_ = lean_unbox_usize(v_sz_1355_);
lean_dec(v_sz_1355_);
v_i_boxed_1359_ = lean_unbox_usize(v_i_1356_);
lean_dec(v_i_1356_);
v_res_1360_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__2(v___x_1354_, v_sz_boxed_1358_, v_i_boxed_1359_, v_bs_1357_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearchSymm(lean_object* v_searchFn_1361_, lean_object* v_goal_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_){
_start:
{
lean_object* v___x_1368_; 
lean_inc(v_goal_1362_);
v___x_1368_ = l_Lean_MVarId_getType(v_goal_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1368_) == 0)
{
lean_object* v_a_1369_; lean_object* v___x_1370_; 
v_a_1369_ = lean_ctor_get(v___x_1368_, 0);
lean_inc(v_a_1369_);
lean_dec_ref_known(v___x_1368_, 1);
lean_inc_ref(v_searchFn_1361_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_a_1364_);
lean_inc_ref(v_a_1363_);
v___x_1370_ = lean_apply_6(v_searchFn_1361_, v_a_1369_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_, lean_box(0));
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v_a_1371_; lean_object* v___x_1372_; lean_object* v_mctx_1373_; lean_object* v___x_1374_; lean_object* v___f_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
lean_inc(v_a_1371_);
lean_dec_ref_known(v___x_1370_, 1);
v___x_1372_ = lean_st_ref_get(v_a_1364_);
v_mctx_1373_ = lean_ctor_get(v___x_1372_, 0);
lean_inc_ref_n(v_mctx_1373_, 2);
lean_dec(v___x_1372_);
lean_inc(v_goal_1362_);
v___x_1374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1374_, 0, v_goal_1362_);
lean_ctor_set(v___x_1374_, 1, v_mctx_1373_);
lean_inc_ref(v___x_1374_);
v___f_1375_ = lean_alloc_closure((void*)(l_Lean_Meta_LibrarySearch_librarySearchSymm___lam__0), 2, 1);
lean_closure_set(v___f_1375_, 0, v___x_1374_);
v___x_1376_ = lean_alloc_closure((void*)(l_Lean_MVarId_applySymm___boxed), 6, 1);
lean_closure_set(v___x_1376_, 0, v_goal_1362_);
v___x_1377_ = l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___redArg(v___x_1376_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v_a_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1437_; 
v_a_1378_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1380_ = v___x_1377_;
v_isShared_1381_ = v_isSharedCheck_1437_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_a_1378_);
lean_dec(v___x_1377_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1437_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
if (lean_obj_tag(v_a_1378_) == 1)
{
lean_object* v_val_1382_; lean_object* v___x_1383_; 
lean_del_object(v___x_1380_);
lean_dec_ref_known(v___x_1374_, 2);
v_val_1382_ = lean_ctor_get(v_a_1378_, 0);
lean_inc_n(v_val_1382_, 2);
lean_dec_ref_known(v_a_1378_, 1);
v___x_1383_ = l_Lean_MVarId_getType(v_val_1382_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1383_) == 0)
{
lean_object* v_a_1384_; lean_object* v___x_1385_; lean_object* v_a_1386_; lean_object* v___x_1387_; 
v_a_1384_ = lean_ctor_get(v___x_1383_, 0);
lean_inc(v_a_1384_);
lean_dec_ref_known(v___x_1383_, 1);
v___x_1385_ = l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___redArg(v_a_1384_, v_a_1364_);
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
lean_inc(v_a_1386_);
lean_dec_ref(v___x_1385_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_a_1364_);
lean_inc_ref(v_a_1363_);
v___x_1387_ = lean_apply_6(v_searchFn_1361_, v_a_1386_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_, lean_box(0));
if (lean_obj_tag(v___x_1387_) == 0)
{
lean_object* v_a_1388_; lean_object* v___x_1390_; uint8_t v_isShared_1391_; uint8_t v_isSharedCheck_1414_; 
v_a_1388_ = lean_ctor_get(v___x_1387_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1390_ = v___x_1387_;
v_isShared_1391_ = v_isSharedCheck_1414_;
goto v_resetjp_1389_;
}
else
{
lean_inc(v_a_1388_);
lean_dec(v___x_1387_);
v___x_1390_ = lean_box(0);
v_isShared_1391_ = v_isSharedCheck_1414_;
goto v_resetjp_1389_;
}
v_resetjp_1389_:
{
lean_object* v___x_1392_; lean_object* v_mctx_1393_; lean_object* v___x_1394_; lean_object* v___f_1395_; lean_object* v___x_1396_; lean_object* v_cache_1397_; lean_object* v_zetaDeltaFVarIds_1398_; lean_object* v_postponed_1399_; lean_object* v_diag_1400_; lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1412_; 
v___x_1392_ = lean_st_ref_get(v_a_1364_);
v_mctx_1393_ = lean_ctor_get(v___x_1392_, 0);
lean_inc_ref(v_mctx_1393_);
lean_dec(v___x_1392_);
v___x_1394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1394_, 0, v_val_1382_);
lean_ctor_set(v___x_1394_, 1, v_mctx_1393_);
v___f_1395_ = lean_alloc_closure((void*)(l_Lean_Meta_LibrarySearch_librarySearchSymm___lam__0), 2, 1);
lean_closure_set(v___f_1395_, 0, v___x_1394_);
v___x_1396_ = lean_st_ref_take(v_a_1364_);
v_cache_1397_ = lean_ctor_get(v___x_1396_, 1);
v_zetaDeltaFVarIds_1398_ = lean_ctor_get(v___x_1396_, 2);
v_postponed_1399_ = lean_ctor_get(v___x_1396_, 3);
v_diag_1400_ = lean_ctor_get(v___x_1396_, 4);
v_isSharedCheck_1412_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1412_ == 0)
{
lean_object* v_unused_1413_; 
v_unused_1413_ = lean_ctor_get(v___x_1396_, 0);
lean_dec(v_unused_1413_);
v___x_1402_ = v___x_1396_;
v_isShared_1403_ = v_isSharedCheck_1412_;
goto v_resetjp_1401_;
}
else
{
lean_inc(v_diag_1400_);
lean_inc(v_postponed_1399_);
lean_inc(v_zetaDeltaFVarIds_1398_);
lean_inc(v_cache_1397_);
lean_dec(v___x_1396_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1412_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v___x_1405_; 
if (v_isShared_1403_ == 0)
{
lean_ctor_set(v___x_1402_, 0, v_mctx_1373_);
v___x_1405_ = v___x_1402_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_mctx_1373_);
lean_ctor_set(v_reuseFailAlloc_1411_, 1, v_cache_1397_);
lean_ctor_set(v_reuseFailAlloc_1411_, 2, v_zetaDeltaFVarIds_1398_);
lean_ctor_set(v_reuseFailAlloc_1411_, 3, v_postponed_1399_);
lean_ctor_set(v_reuseFailAlloc_1411_, 4, v_diag_1400_);
v___x_1405_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1409_; 
v___x_1406_ = lean_st_ref_put(v_a_1364_, v___x_1405_);
v___x_1407_ = l_Lean_Meta_LibrarySearch_interleaveWith___redArg(v___f_1375_, v_a_1371_, v___f_1395_, v_a_1388_);
lean_dec(v_a_1388_);
lean_dec(v_a_1371_);
if (v_isShared_1391_ == 0)
{
lean_ctor_set(v___x_1390_, 0, v___x_1407_);
v___x_1409_ = v___x_1390_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1407_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
}
else
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
lean_dec(v_val_1382_);
lean_dec_ref(v___f_1375_);
lean_dec_ref(v_mctx_1373_);
lean_dec(v_a_1371_);
v_a_1415_ = lean_ctor_get(v___x_1387_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1417_ = v___x_1387_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___x_1387_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
if (v_isShared_1418_ == 0)
{
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_a_1415_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
}
else
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1430_; 
lean_dec(v_val_1382_);
lean_dec_ref(v___f_1375_);
lean_dec_ref(v_mctx_1373_);
lean_dec(v_a_1371_);
lean_dec_ref(v_searchFn_1361_);
v_a_1423_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1425_ = v___x_1383_;
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1383_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1428_; 
if (v_isShared_1426_ == 0)
{
v___x_1428_ = v___x_1425_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1423_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
}
else
{
size_t v_sz_1431_; size_t v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1435_; 
lean_dec(v_a_1378_);
lean_dec_ref(v___f_1375_);
lean_dec_ref(v_mctx_1373_);
lean_dec_ref(v_searchFn_1361_);
v_sz_1431_ = lean_array_size(v_a_1371_);
v___x_1432_ = ((size_t)0ULL);
v___x_1433_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__2(v___x_1374_, v_sz_1431_, v___x_1432_, v_a_1371_);
if (v_isShared_1381_ == 0)
{
lean_ctor_set(v___x_1380_, 0, v___x_1433_);
v___x_1435_ = v___x_1380_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v___x_1433_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
lean_dec_ref(v___f_1375_);
lean_dec_ref_known(v___x_1374_, 2);
lean_dec_ref(v_mctx_1373_);
lean_dec(v_a_1371_);
lean_dec_ref(v_searchFn_1361_);
v_a_1438_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1377_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1377_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
else
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1453_; 
lean_dec(v_goal_1362_);
lean_dec_ref(v_searchFn_1361_);
v_a_1446_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1448_ = v___x_1370_;
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1370_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1451_; 
if (v_isShared_1449_ == 0)
{
v___x_1451_ = v___x_1448_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v_a_1446_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
}
else
{
lean_object* v_a_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1461_; 
lean_dec(v_goal_1362_);
lean_dec_ref(v_searchFn_1361_);
v_a_1454_ = lean_ctor_get(v___x_1368_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1368_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1456_ = v___x_1368_;
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_a_1454_);
lean_dec(v___x_1368_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1459_; 
if (v_isShared_1457_ == 0)
{
v___x_1459_ = v___x_1456_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_a_1454_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearchSymm___boxed(lean_object* v_searchFn_1462_, lean_object* v_goal_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l_Lean_Meta_LibrarySearch_librarySearchSymm(v_searchFn_1462_, v_goal_1463_, v_a_1464_, v_a_1465_, v_a_1466_, v_a_1467_);
lean_dec(v_a_1467_);
lean_dec_ref(v_a_1466_);
lean_dec(v_a_1465_);
lean_dec_ref(v_a_1464_);
return v_res_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0(lean_object* v_e_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_){
_start:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; 
v___x_1480_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__1));
v___x_1481_ = lean_unsigned_to_nat(1u);
v___x_1482_ = lean_mk_empty_array_with_capacity(v___x_1481_);
v___x_1483_ = lean_array_push(v___x_1482_, v_e_1474_);
v___x_1484_ = l_Lean_Meta_mkAppM(v___x_1480_, v___x_1483_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
return v___x_1484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___boxed(lean_object* v_e_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0(v_e_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_);
lean_dec(v___y_1489_);
lean_dec_ref(v___y_1488_);
lean_dec(v___y_1487_);
lean_dec_ref(v___y_1486_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1(lean_object* v_e_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_){
_start:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1502_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__1));
v___x_1503_ = lean_unsigned_to_nat(1u);
v___x_1504_ = lean_mk_empty_array_with_capacity(v___x_1503_);
v___x_1505_ = lean_array_push(v___x_1504_, v_e_1496_);
v___x_1506_ = l_Lean_Meta_mkAppM(v___x_1502_, v___x_1505_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_);
return v___x_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___boxed(lean_object* v_e_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1(v_e_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_);
lean_dec(v___y_1511_);
lean_dec_ref(v___y_1510_);
lean_dec(v___y_1509_);
lean_dec_ref(v___y_1508_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma(lean_object* v_lem_1516_, uint8_t v_mod_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_){
_start:
{
lean_object* v___f_1523_; lean_object* v___f_1524_; lean_object* v___x_1525_; 
v___f_1523_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__0));
v___f_1524_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__1));
v___x_1525_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_lem_1516_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_);
if (lean_obj_tag(v___x_1525_) == 0)
{
switch(v_mod_1517_)
{
case 0:
{
return v___x_1525_;
}
case 1:
{
lean_object* v_a_1526_; lean_object* v___x_1527_; 
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_a_1526_);
lean_dec_ref_known(v___x_1525_, 1);
v___x_1527_ = l_Lean_Meta_mapForallTelescope(v___f_1523_, v_a_1526_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_);
return v___x_1527_;
}
default: 
{
lean_object* v_a_1528_; lean_object* v___x_1529_; 
v_a_1528_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_a_1528_);
lean_dec_ref_known(v___x_1525_, 1);
v___x_1529_ = l_Lean_Meta_mapForallTelescope(v___f_1524_, v_a_1528_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_);
return v___x_1529_;
}
}
}
else
{
return v___x_1525_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___boxed(lean_object* v_lem_1530_, lean_object* v_mod_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_){
_start:
{
uint8_t v_mod_boxed_1537_; lean_object* v_res_1538_; 
v_mod_boxed_1537_ = lean_unbox(v_mod_1531_);
v_res_1538_ = l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma(v_lem_1530_, v_mod_boxed_1537_, v_a_1532_, v_a_1533_, v_a_1534_, v_a_1535_);
lean_dec(v_a_1535_);
lean_dec_ref(v_a_1534_);
lean_dec(v_a_1533_);
lean_dec_ref(v_a_1532_);
return v_res_1538_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_isVar(lean_object* v_e_1539_){
_start:
{
switch(lean_obj_tag(v_e_1539_))
{
case 0:
{
uint8_t v___x_1540_; 
v___x_1540_ = 1;
return v___x_1540_;
}
case 1:
{
uint8_t v___x_1541_; 
v___x_1541_ = 1;
return v___x_1541_;
}
case 2:
{
uint8_t v___x_1542_; 
v___x_1542_ = 1;
return v___x_1542_;
}
default: 
{
uint8_t v___x_1543_; 
v___x_1543_ = 0;
return v___x_1543_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_isVar___boxed(lean_object* v_e_1544_){
_start:
{
uint8_t v_res_1545_; lean_object* v_r_1546_; 
v_res_1545_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_isVar(v_e_1544_);
lean_dec_ref(v_e_1544_);
v_r_1546_ = lean_box(v_res_1545_);
return v_r_1546_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1547_ = lean_unsigned_to_nat(32u);
v___x_1548_ = lean_mk_empty_array_with_capacity(v___x_1547_);
v___x_1549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1548_);
return v___x_1549_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1550_ = ((size_t)5ULL);
v___x_1551_ = lean_unsigned_to_nat(0u);
v___x_1552_ = lean_unsigned_to_nat(32u);
v___x_1553_ = lean_mk_empty_array_with_capacity(v___x_1552_);
v___x_1554_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__0);
v___x_1555_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1555_, 0, v___x_1554_);
lean_ctor_set(v___x_1555_, 1, v___x_1553_);
lean_ctor_set(v___x_1555_, 2, v___x_1551_);
lean_ctor_set(v___x_1555_, 3, v___x_1551_);
lean_ctor_set_usize(v___x_1555_, 4, v___x_1550_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg(lean_object* v___y_1556_){
_start:
{
lean_object* v___x_1558_; lean_object* v_traceState_1559_; lean_object* v_traces_1560_; lean_object* v___x_1561_; lean_object* v_traceState_1562_; lean_object* v_env_1563_; lean_object* v_nextMacroScope_1564_; lean_object* v_ngen_1565_; lean_object* v_auxDeclNGen_1566_; lean_object* v_cache_1567_; lean_object* v_recordedDeps_1568_; lean_object* v_messages_1569_; lean_object* v_infoState_1570_; lean_object* v_snapshotTasks_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1590_; 
v___x_1558_ = lean_st_ref_get(v___y_1556_);
v_traceState_1559_ = lean_ctor_get(v___x_1558_, 4);
lean_inc_ref(v_traceState_1559_);
lean_dec(v___x_1558_);
v_traces_1560_ = lean_ctor_get(v_traceState_1559_, 0);
lean_inc_ref(v_traces_1560_);
lean_dec_ref(v_traceState_1559_);
v___x_1561_ = lean_st_ref_take(v___y_1556_);
v_traceState_1562_ = lean_ctor_get(v___x_1561_, 4);
v_env_1563_ = lean_ctor_get(v___x_1561_, 0);
v_nextMacroScope_1564_ = lean_ctor_get(v___x_1561_, 1);
v_ngen_1565_ = lean_ctor_get(v___x_1561_, 2);
v_auxDeclNGen_1566_ = lean_ctor_get(v___x_1561_, 3);
v_cache_1567_ = lean_ctor_get(v___x_1561_, 5);
v_recordedDeps_1568_ = lean_ctor_get(v___x_1561_, 6);
v_messages_1569_ = lean_ctor_get(v___x_1561_, 7);
v_infoState_1570_ = lean_ctor_get(v___x_1561_, 8);
v_snapshotTasks_1571_ = lean_ctor_get(v___x_1561_, 9);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1561_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1573_ = v___x_1561_;
v_isShared_1574_ = v_isSharedCheck_1590_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_snapshotTasks_1571_);
lean_inc(v_infoState_1570_);
lean_inc(v_messages_1569_);
lean_inc(v_recordedDeps_1568_);
lean_inc(v_cache_1567_);
lean_inc(v_traceState_1562_);
lean_inc(v_auxDeclNGen_1566_);
lean_inc(v_ngen_1565_);
lean_inc(v_nextMacroScope_1564_);
lean_inc(v_env_1563_);
lean_dec(v___x_1561_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1590_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
uint64_t v_tid_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1588_; 
v_tid_1575_ = lean_ctor_get_uint64(v_traceState_1562_, sizeof(void*)*1);
v_isSharedCheck_1588_ = !lean_is_exclusive(v_traceState_1562_);
if (v_isSharedCheck_1588_ == 0)
{
lean_object* v_unused_1589_; 
v_unused_1589_ = lean_ctor_get(v_traceState_1562_, 0);
lean_dec(v_unused_1589_);
v___x_1577_ = v_traceState_1562_;
v_isShared_1578_ = v_isSharedCheck_1588_;
goto v_resetjp_1576_;
}
else
{
lean_dec(v_traceState_1562_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1588_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1579_; lean_object* v___x_1581_; 
v___x_1579_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__1);
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 0, v___x_1579_);
v___x_1581_ = v___x_1577_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v___x_1579_);
lean_ctor_set_uint64(v_reuseFailAlloc_1587_, sizeof(void*)*1, v_tid_1575_);
v___x_1581_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
lean_object* v___x_1583_; 
if (v_isShared_1574_ == 0)
{
lean_ctor_set(v___x_1573_, 4, v___x_1581_);
v___x_1583_ = v___x_1573_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_env_1563_);
lean_ctor_set(v_reuseFailAlloc_1586_, 1, v_nextMacroScope_1564_);
lean_ctor_set(v_reuseFailAlloc_1586_, 2, v_ngen_1565_);
lean_ctor_set(v_reuseFailAlloc_1586_, 3, v_auxDeclNGen_1566_);
lean_ctor_set(v_reuseFailAlloc_1586_, 4, v___x_1581_);
lean_ctor_set(v_reuseFailAlloc_1586_, 5, v_cache_1567_);
lean_ctor_set(v_reuseFailAlloc_1586_, 6, v_recordedDeps_1568_);
lean_ctor_set(v_reuseFailAlloc_1586_, 7, v_messages_1569_);
lean_ctor_set(v_reuseFailAlloc_1586_, 8, v_infoState_1570_);
lean_ctor_set(v_reuseFailAlloc_1586_, 9, v_snapshotTasks_1571_);
v___x_1583_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = lean_st_ref_put(v___y_1556_, v___x_1583_);
v___x_1585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1585_, 0, v_traces_1560_);
return v___x_1585_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___boxed(lean_object* v___y_1591_, lean_object* v___y_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg(v___y_1591_);
lean_dec(v___y_1591_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0(lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg(v___y_1597_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___boxed(lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_){
_start:
{
lean_object* v_res_1605_; 
v_res_1605_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0(v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
lean_dec(v___y_1601_);
lean_dec_ref(v___y_1600_);
return v_res_1605_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(lean_object* v_opts_1606_, lean_object* v_opt_1607_){
_start:
{
lean_object* v_name_1608_; lean_object* v_defValue_1609_; lean_object* v_map_1610_; lean_object* v___x_1611_; 
v_name_1608_ = lean_ctor_get(v_opt_1607_, 0);
v_defValue_1609_ = lean_ctor_get(v_opt_1607_, 1);
v_map_1610_ = lean_ctor_get(v_opts_1606_, 0);
v___x_1611_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1610_, v_name_1608_);
if (lean_obj_tag(v___x_1611_) == 0)
{
uint8_t v___x_1612_; 
v___x_1612_ = lean_unbox(v_defValue_1609_);
return v___x_1612_;
}
else
{
lean_object* v_val_1613_; 
v_val_1613_ = lean_ctor_get(v___x_1611_, 0);
lean_inc(v_val_1613_);
lean_dec_ref_known(v___x_1611_, 1);
if (lean_obj_tag(v_val_1613_) == 1)
{
uint8_t v_v_1614_; 
v_v_1614_ = lean_ctor_get_uint8(v_val_1613_, 0);
lean_dec_ref_known(v_val_1613_, 0);
return v_v_1614_;
}
else
{
uint8_t v___x_1615_; 
lean_dec(v_val_1613_);
v___x_1615_ = lean_unbox(v_defValue_1609_);
return v___x_1615_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1___boxed(lean_object* v_opts_1616_, lean_object* v_opt_1617_){
_start:
{
uint8_t v_res_1618_; lean_object* v_r_1619_; 
v_res_1618_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_opts_1616_, v_opt_1617_);
lean_dec_ref(v_opt_1617_);
lean_dec_ref(v_opts_1616_);
v_r_1619_ = lean_box(v_res_1618_);
return v_r_1619_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; 
v___x_1621_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__0));
v___x_1622_ = l_Lean_stringToMessageData(v___x_1621_);
return v___x_1622_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; 
v___x_1624_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__2));
v___x_1625_ = l_Lean_stringToMessageData(v___x_1624_);
return v___x_1625_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__6(void){
_start:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1629_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__5));
v___x_1630_ = l_Lean_MessageData_ofFormat(v___x_1629_);
return v___x_1630_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__9(void){
_start:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1634_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__8));
v___x_1635_ = l_Lean_MessageData_ofFormat(v___x_1634_);
return v___x_1635_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__12(void){
_start:
{
lean_object* v___x_1639_; lean_object* v___x_1640_; 
v___x_1639_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__11));
v___x_1640_ = l_Lean_MessageData_ofFormat(v___x_1639_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0(lean_object* v_fst_1641_, uint8_t v_snd_1642_, lean_object* v_x_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_){
_start:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___y_1653_; 
v___x_1649_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__1, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__1);
v___x_1650_ = l_Lean_MessageData_ofName(v_fst_1641_);
v___x_1651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1649_);
lean_ctor_set(v___x_1651_, 1, v___x_1650_);
switch(v_snd_1642_)
{
case 0:
{
lean_object* v___x_1658_; 
v___x_1658_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__6, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__6_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__6);
v___y_1653_ = v___x_1658_;
goto v___jp_1652_;
}
case 1:
{
lean_object* v___x_1659_; 
v___x_1659_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__9, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__9_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__9);
v___y_1653_ = v___x_1659_;
goto v___jp_1652_;
}
default: 
{
lean_object* v___x_1660_; 
v___x_1660_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__12, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__12_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__12);
v___y_1653_ = v___x_1660_;
goto v___jp_1652_;
}
}
v___jp_1652_:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
lean_inc_ref(v___y_1653_);
v___x_1654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1651_);
lean_ctor_set(v___x_1654_, 1, v___y_1653_);
v___x_1655_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__3, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__3);
v___x_1656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1654_);
lean_ctor_set(v___x_1656_, 1, v___x_1655_);
v___x_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
return v___x_1657_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___boxed(lean_object* v_fst_1661_, lean_object* v_snd_1662_, lean_object* v_x_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
uint8_t v_snd_11130__boxed_1669_; lean_object* v_res_1670_; 
v_snd_11130__boxed_1669_ = lean_unbox(v_snd_1662_);
v_res_1670_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0(v_fst_1661_, v_snd_11130__boxed_1669_, v_x_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_);
lean_dec(v___y_1667_);
lean_dec_ref(v___y_1666_);
lean_dec(v___y_1665_);
lean_dec_ref(v___y_1664_);
lean_dec_ref(v_x_1663_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5(lean_object* v_opts_1671_, lean_object* v_opt_1672_){
_start:
{
lean_object* v_name_1673_; lean_object* v_defValue_1674_; lean_object* v_map_1675_; lean_object* v___x_1676_; 
v_name_1673_ = lean_ctor_get(v_opt_1672_, 0);
v_defValue_1674_ = lean_ctor_get(v_opt_1672_, 1);
v_map_1675_ = lean_ctor_get(v_opts_1671_, 0);
v___x_1676_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1675_, v_name_1673_);
if (lean_obj_tag(v___x_1676_) == 0)
{
lean_inc(v_defValue_1674_);
return v_defValue_1674_;
}
else
{
lean_object* v_val_1677_; 
v_val_1677_ = lean_ctor_get(v___x_1676_, 0);
lean_inc(v_val_1677_);
lean_dec_ref_known(v___x_1676_, 1);
if (lean_obj_tag(v_val_1677_) == 3)
{
lean_object* v_v_1678_; 
v_v_1678_ = lean_ctor_get(v_val_1677_, 0);
lean_inc(v_v_1678_);
lean_dec_ref_known(v_val_1677_, 1);
return v_v_1678_;
}
else
{
lean_dec(v_val_1677_);
lean_inc(v_defValue_1674_);
return v_defValue_1674_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5___boxed(lean_object* v_opts_1679_, lean_object* v_opt_1680_){
_start:
{
lean_object* v_res_1681_; 
v_res_1681_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5(v_opts_1679_, v_opt_1680_);
lean_dec_ref(v_opt_1680_);
lean_dec_ref(v_opts_1679_);
return v_res_1681_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(lean_object* v_x_1682_){
_start:
{
if (lean_obj_tag(v_x_1682_) == 0)
{
lean_object* v_a_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1691_; 
v_a_1684_ = lean_ctor_get(v_x_1682_, 0);
v_isSharedCheck_1691_ = !lean_is_exclusive(v_x_1682_);
if (v_isSharedCheck_1691_ == 0)
{
v___x_1686_ = v_x_1682_;
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_a_1684_);
lean_dec(v_x_1682_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v___x_1689_; 
if (v_isShared_1687_ == 0)
{
lean_ctor_set_tag(v___x_1686_, 1);
v___x_1689_ = v___x_1686_;
goto v_reusejp_1688_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v_a_1684_);
v___x_1689_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1688_;
}
v_reusejp_1688_:
{
return v___x_1689_;
}
}
}
else
{
lean_object* v_a_1692_; lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1699_; 
v_a_1692_ = lean_ctor_get(v_x_1682_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v_x_1682_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1694_ = v_x_1682_;
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
else
{
lean_inc(v_a_1692_);
lean_dec(v_x_1682_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1697_; 
if (v_isShared_1695_ == 0)
{
lean_ctor_set_tag(v___x_1694_, 0);
v___x_1697_ = v___x_1694_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v_a_1692_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg___boxed(lean_object* v_x_1700_, lean_object* v___y_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(v_x_1700_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2_spec__3(size_t v_sz_1703_, size_t v_i_1704_, lean_object* v_bs_1705_){
_start:
{
uint8_t v___x_1706_; 
v___x_1706_ = lean_usize_dec_lt(v_i_1704_, v_sz_1703_);
if (v___x_1706_ == 0)
{
return v_bs_1705_;
}
else
{
lean_object* v_v_1707_; lean_object* v_msg_1708_; lean_object* v___x_1709_; lean_object* v_bs_x27_1710_; size_t v___x_1711_; size_t v___x_1712_; lean_object* v___x_1713_; 
v_v_1707_ = lean_array_uget_borrowed(v_bs_1705_, v_i_1704_);
v_msg_1708_ = lean_ctor_get(v_v_1707_, 1);
lean_inc_ref(v_msg_1708_);
v___x_1709_ = lean_unsigned_to_nat(0u);
v_bs_x27_1710_ = lean_array_uset(v_bs_1705_, v_i_1704_, v___x_1709_);
v___x_1711_ = ((size_t)1ULL);
v___x_1712_ = lean_usize_add(v_i_1704_, v___x_1711_);
v___x_1713_ = lean_array_uset(v_bs_x27_1710_, v_i_1704_, v_msg_1708_);
v_i_1704_ = v___x_1712_;
v_bs_1705_ = v___x_1713_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2_spec__3___boxed(lean_object* v_sz_1715_, lean_object* v_i_1716_, lean_object* v_bs_1717_){
_start:
{
size_t v_sz_boxed_1718_; size_t v_i_boxed_1719_; lean_object* v_res_1720_; 
v_sz_boxed_1718_ = lean_unbox_usize(v_sz_1715_);
lean_dec(v_sz_1715_);
v_i_boxed_1719_ = lean_unbox_usize(v_i_1716_);
lean_dec(v_i_1716_);
v_res_1720_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2_spec__3(v_sz_boxed_1718_, v_i_boxed_1719_, v_bs_1717_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2(lean_object* v_oldTraces_1721_, lean_object* v_data_1722_, lean_object* v_ref_1723_, lean_object* v_msg_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
lean_object* v_toCold_1730_; lean_object* v_currRecDepth_1731_; lean_object* v_ref_1732_; uint16_t v_optionFlags_1733_; uint8_t v_suppressElabErrors_1734_; uint8_t v_checkDeprecated_1735_; uint8_t v_isRecordingDeps_1736_; lean_object* v_ref_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v_traceState_1740_; lean_object* v_traces_1741_; lean_object* v___x_1742_; size_t v_sz_1743_; size_t v___x_1744_; lean_object* v___x_1745_; lean_object* v_msg_1746_; lean_object* v___x_1747_; lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1786_; 
v_toCold_1730_ = lean_ctor_get(v___y_1727_, 0);
v_currRecDepth_1731_ = lean_ctor_get(v___y_1727_, 1);
v_ref_1732_ = lean_ctor_get(v___y_1727_, 2);
v_optionFlags_1733_ = lean_ctor_get_uint16(v___y_1727_, sizeof(void*)*3);
v_suppressElabErrors_1734_ = lean_ctor_get_uint8(v___y_1727_, sizeof(void*)*3 + 2);
v_checkDeprecated_1735_ = lean_ctor_get_uint8(v___y_1727_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1736_ = lean_ctor_get_uint8(v___y_1727_, sizeof(void*)*3 + 4);
v_ref_1737_ = l_Lean_replaceRef(v_ref_1723_, v_ref_1732_);
lean_inc(v_currRecDepth_1731_);
lean_inc_ref(v_toCold_1730_);
v___x_1738_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1738_, 0, v_toCold_1730_);
lean_ctor_set(v___x_1738_, 1, v_currRecDepth_1731_);
lean_ctor_set(v___x_1738_, 2, v_ref_1737_);
lean_ctor_set_uint16(v___x_1738_, sizeof(void*)*3, v_optionFlags_1733_);
lean_ctor_set_uint8(v___x_1738_, sizeof(void*)*3 + 2, v_suppressElabErrors_1734_);
lean_ctor_set_uint8(v___x_1738_, sizeof(void*)*3 + 3, v_checkDeprecated_1735_);
lean_ctor_set_uint8(v___x_1738_, sizeof(void*)*3 + 4, v_isRecordingDeps_1736_);
v___x_1739_ = lean_st_ref_get(v___y_1728_);
v_traceState_1740_ = lean_ctor_get(v___x_1739_, 4);
lean_inc_ref(v_traceState_1740_);
lean_dec(v___x_1739_);
v_traces_1741_ = lean_ctor_get(v_traceState_1740_, 0);
lean_inc_ref(v_traces_1741_);
lean_dec_ref(v_traceState_1740_);
v___x_1742_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1741_);
lean_dec_ref(v_traces_1741_);
v_sz_1743_ = lean_array_size(v___x_1742_);
v___x_1744_ = ((size_t)0ULL);
v___x_1745_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2_spec__3(v_sz_1743_, v___x_1744_, v___x_1742_);
v_msg_1746_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1746_, 0, v_data_1722_);
lean_ctor_set(v_msg_1746_, 1, v_msg_1724_);
lean_ctor_set(v_msg_1746_, 2, v___x_1745_);
v___x_1747_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0_spec__0(v_msg_1746_, v___y_1725_, v___y_1726_, v___x_1738_, v___y_1728_);
lean_dec_ref_known(v___x_1738_, 3);
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1750_ = v___x_1747_;
v_isShared_1751_ = v_isSharedCheck_1786_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1747_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1786_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1752_; lean_object* v_traceState_1753_; lean_object* v_env_1754_; lean_object* v_nextMacroScope_1755_; lean_object* v_ngen_1756_; lean_object* v_auxDeclNGen_1757_; lean_object* v_cache_1758_; lean_object* v_recordedDeps_1759_; lean_object* v_messages_1760_; lean_object* v_infoState_1761_; lean_object* v_snapshotTasks_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1785_; 
v___x_1752_ = lean_st_ref_take(v___y_1728_);
v_traceState_1753_ = lean_ctor_get(v___x_1752_, 4);
v_env_1754_ = lean_ctor_get(v___x_1752_, 0);
v_nextMacroScope_1755_ = lean_ctor_get(v___x_1752_, 1);
v_ngen_1756_ = lean_ctor_get(v___x_1752_, 2);
v_auxDeclNGen_1757_ = lean_ctor_get(v___x_1752_, 3);
v_cache_1758_ = lean_ctor_get(v___x_1752_, 5);
v_recordedDeps_1759_ = lean_ctor_get(v___x_1752_, 6);
v_messages_1760_ = lean_ctor_get(v___x_1752_, 7);
v_infoState_1761_ = lean_ctor_get(v___x_1752_, 8);
v_snapshotTasks_1762_ = lean_ctor_get(v___x_1752_, 9);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1764_ = v___x_1752_;
v_isShared_1765_ = v_isSharedCheck_1785_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_snapshotTasks_1762_);
lean_inc(v_infoState_1761_);
lean_inc(v_messages_1760_);
lean_inc(v_recordedDeps_1759_);
lean_inc(v_cache_1758_);
lean_inc(v_traceState_1753_);
lean_inc(v_auxDeclNGen_1757_);
lean_inc(v_ngen_1756_);
lean_inc(v_nextMacroScope_1755_);
lean_inc(v_env_1754_);
lean_dec(v___x_1752_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1785_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
uint64_t v_tid_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1783_; 
v_tid_1766_ = lean_ctor_get_uint64(v_traceState_1753_, sizeof(void*)*1);
v_isSharedCheck_1783_ = !lean_is_exclusive(v_traceState_1753_);
if (v_isSharedCheck_1783_ == 0)
{
lean_object* v_unused_1784_; 
v_unused_1784_ = lean_ctor_get(v_traceState_1753_, 0);
lean_dec(v_unused_1784_);
v___x_1768_ = v_traceState_1753_;
v_isShared_1769_ = v_isSharedCheck_1783_;
goto v_resetjp_1767_;
}
else
{
lean_dec(v_traceState_1753_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1783_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1774_; 
v___x_1770_ = lean_box(0);
v___x_1771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1771_, 0, v_ref_1723_);
lean_ctor_set(v___x_1771_, 1, v_a_1748_);
v___x_1772_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1721_, v___x_1771_);
if (v_isShared_1769_ == 0)
{
lean_ctor_set(v___x_1768_, 0, v___x_1772_);
v___x_1774_ = v___x_1768_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v___x_1772_);
lean_ctor_set_uint64(v_reuseFailAlloc_1782_, sizeof(void*)*1, v_tid_1766_);
v___x_1774_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
lean_object* v___x_1776_; 
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 4, v___x_1774_);
v___x_1776_ = v___x_1764_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v_env_1754_);
lean_ctor_set(v_reuseFailAlloc_1781_, 1, v_nextMacroScope_1755_);
lean_ctor_set(v_reuseFailAlloc_1781_, 2, v_ngen_1756_);
lean_ctor_set(v_reuseFailAlloc_1781_, 3, v_auxDeclNGen_1757_);
lean_ctor_set(v_reuseFailAlloc_1781_, 4, v___x_1774_);
lean_ctor_set(v_reuseFailAlloc_1781_, 5, v_cache_1758_);
lean_ctor_set(v_reuseFailAlloc_1781_, 6, v_recordedDeps_1759_);
lean_ctor_set(v_reuseFailAlloc_1781_, 7, v_messages_1760_);
lean_ctor_set(v_reuseFailAlloc_1781_, 8, v_infoState_1761_);
lean_ctor_set(v_reuseFailAlloc_1781_, 9, v_snapshotTasks_1762_);
v___x_1776_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
lean_object* v___x_1777_; lean_object* v___x_1779_; 
v___x_1777_ = lean_st_ref_put(v___y_1728_, v___x_1776_);
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 0, v___x_1770_);
v___x_1779_ = v___x_1750_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v___x_1770_);
v___x_1779_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
return v___x_1779_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2___boxed(lean_object* v_oldTraces_1787_, lean_object* v_data_1788_, lean_object* v_ref_1789_, lean_object* v_msg_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2(v_oldTraces_1787_, v_data_1788_, v_ref_1789_, v_msg_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_);
lean_dec(v___y_1794_);
lean_dec_ref(v___y_1793_);
lean_dec(v___y_1792_);
lean_dec_ref(v___y_1791_);
return v_res_1796_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__4(lean_object* v_e_1797_){
_start:
{
if (lean_obj_tag(v_e_1797_) == 0)
{
uint8_t v___x_1798_; 
v___x_1798_ = 2;
return v___x_1798_;
}
else
{
uint8_t v___x_1799_; 
v___x_1799_ = 0;
return v___x_1799_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__4___boxed(lean_object* v_e_1800_){
_start:
{
uint8_t v_res_1801_; lean_object* v_r_1802_; 
v_res_1801_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__4(v_e_1800_);
lean_dec_ref(v_e_1800_);
v_r_1802_ = lean_box(v_res_1801_);
return v_r_1802_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1803_; double v___x_1804_; 
v___x_1803_ = lean_unsigned_to_nat(0u);
v___x_1804_ = lean_float_of_nat(v___x_1803_);
return v___x_1804_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2(void){
_start:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1806_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__1));
v___x_1807_ = l_Lean_stringToMessageData(v___x_1806_);
return v___x_1807_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1808_; double v___x_1809_; 
v___x_1808_ = lean_unsigned_to_nat(1000u);
v___x_1809_ = lean_float_of_nat(v___x_1808_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2(lean_object* v_cls_1810_, uint8_t v_collapsed_1811_, lean_object* v_tag_1812_, lean_object* v_opts_1813_, uint8_t v_clsEnabled_1814_, lean_object* v_oldTraces_1815_, lean_object* v_msg_1816_, lean_object* v_resStartStop_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_){
_start:
{
lean_object* v_fst_1823_; lean_object* v_snd_1824_; lean_object* v___y_1826_; lean_object* v___y_1827_; lean_object* v_data_1828_; lean_object* v_fst_1839_; lean_object* v_snd_1840_; lean_object* v___x_1841_; uint8_t v___x_1842_; lean_object* v___y_1844_; lean_object* v_a_1845_; uint8_t v___y_1860_; double v___y_1892_; 
v_fst_1823_ = lean_ctor_get(v_resStartStop_1817_, 0);
lean_inc(v_fst_1823_);
v_snd_1824_ = lean_ctor_get(v_resStartStop_1817_, 1);
lean_inc(v_snd_1824_);
lean_dec_ref(v_resStartStop_1817_);
v_fst_1839_ = lean_ctor_get(v_snd_1824_, 0);
lean_inc(v_fst_1839_);
v_snd_1840_ = lean_ctor_get(v_snd_1824_, 1);
lean_inc(v_snd_1840_);
lean_dec(v_snd_1824_);
v___x_1841_ = l_Lean_trace_profiler;
v___x_1842_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_opts_1813_, v___x_1841_);
if (v___x_1842_ == 0)
{
v___y_1860_ = v___x_1842_;
goto v___jp_1859_;
}
else
{
lean_object* v___x_1897_; uint8_t v___x_1898_; 
v___x_1897_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1898_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_opts_1813_, v___x_1897_);
if (v___x_1898_ == 0)
{
lean_object* v___x_1899_; lean_object* v___x_1900_; double v___x_1901_; double v___x_1902_; double v___x_1903_; 
v___x_1899_ = l_Lean_trace_profiler_threshold;
v___x_1900_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5(v_opts_1813_, v___x_1899_);
v___x_1901_ = lean_float_of_nat(v___x_1900_);
v___x_1902_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3);
v___x_1903_ = lean_float_div(v___x_1901_, v___x_1902_);
v___y_1892_ = v___x_1903_;
goto v___jp_1891_;
}
else
{
lean_object* v___x_1904_; lean_object* v___x_1905_; double v___x_1906_; 
v___x_1904_ = l_Lean_trace_profiler_threshold;
v___x_1905_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5(v_opts_1813_, v___x_1904_);
v___x_1906_ = lean_float_of_nat(v___x_1905_);
v___y_1892_ = v___x_1906_;
goto v___jp_1891_;
}
}
v___jp_1825_:
{
lean_object* v___x_1829_; 
lean_inc(v___y_1826_);
v___x_1829_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2(v_oldTraces_1815_, v_data_1828_, v___y_1826_, v___y_1827_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
if (lean_obj_tag(v___x_1829_) == 0)
{
lean_object* v___x_1830_; 
lean_dec_ref_known(v___x_1829_, 1);
v___x_1830_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(v_fst_1823_);
return v___x_1830_;
}
else
{
lean_object* v_a_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1838_; 
lean_dec(v_fst_1823_);
v_a_1831_ = lean_ctor_get(v___x_1829_, 0);
v_isSharedCheck_1838_ = !lean_is_exclusive(v___x_1829_);
if (v_isSharedCheck_1838_ == 0)
{
v___x_1833_ = v___x_1829_;
v_isShared_1834_ = v_isSharedCheck_1838_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_a_1831_);
lean_dec(v___x_1829_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1838_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___x_1836_; 
if (v_isShared_1834_ == 0)
{
v___x_1836_ = v___x_1833_;
goto v_reusejp_1835_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v_a_1831_);
v___x_1836_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1835_;
}
v_reusejp_1835_:
{
return v___x_1836_;
}
}
}
}
v___jp_1843_:
{
uint8_t v_result_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; double v___x_1849_; lean_object* v_data_1850_; 
v_result_1846_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__4(v_fst_1823_);
v___x_1847_ = lean_box(v_result_1846_);
v___x_1848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1847_);
v___x_1849_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0);
lean_inc_ref(v_tag_1812_);
lean_inc_ref(v___x_1848_);
lean_inc(v_cls_1810_);
v_data_1850_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1850_, 0, v_cls_1810_);
lean_ctor_set(v_data_1850_, 1, v___x_1848_);
lean_ctor_set(v_data_1850_, 2, v_tag_1812_);
lean_ctor_set_float(v_data_1850_, sizeof(void*)*3, v___x_1849_);
lean_ctor_set_float(v_data_1850_, sizeof(void*)*3 + 8, v___x_1849_);
lean_ctor_set_uint8(v_data_1850_, sizeof(void*)*3 + 16, v_collapsed_1811_);
if (v___x_1842_ == 0)
{
lean_dec_ref_known(v___x_1848_, 1);
lean_dec(v_snd_1840_);
lean_dec(v_fst_1839_);
lean_dec_ref(v_tag_1812_);
lean_dec(v_cls_1810_);
v___y_1826_ = v___y_1844_;
v___y_1827_ = v_a_1845_;
v_data_1828_ = v_data_1850_;
goto v___jp_1825_;
}
else
{
lean_object* v_data_1851_; double v___x_1852_; double v___x_1853_; 
lean_dec_ref_known(v_data_1850_, 3);
v_data_1851_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1851_, 0, v_cls_1810_);
lean_ctor_set(v_data_1851_, 1, v___x_1848_);
lean_ctor_set(v_data_1851_, 2, v_tag_1812_);
v___x_1852_ = lean_unbox_float(v_fst_1839_);
lean_dec(v_fst_1839_);
lean_ctor_set_float(v_data_1851_, sizeof(void*)*3, v___x_1852_);
v___x_1853_ = lean_unbox_float(v_snd_1840_);
lean_dec(v_snd_1840_);
lean_ctor_set_float(v_data_1851_, sizeof(void*)*3 + 8, v___x_1853_);
lean_ctor_set_uint8(v_data_1851_, sizeof(void*)*3 + 16, v_collapsed_1811_);
v___y_1826_ = v___y_1844_;
v___y_1827_ = v_a_1845_;
v_data_1828_ = v_data_1851_;
goto v___jp_1825_;
}
}
v___jp_1854_:
{
lean_object* v_ref_1855_; lean_object* v___x_1856_; 
v_ref_1855_ = lean_ctor_get(v___y_1820_, 2);
lean_inc(v___y_1821_);
lean_inc_ref(v___y_1820_);
lean_inc(v___y_1819_);
lean_inc_ref(v___y_1818_);
lean_inc(v_fst_1823_);
v___x_1856_ = lean_apply_6(v_msg_1816_, v_fst_1823_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, lean_box(0));
if (lean_obj_tag(v___x_1856_) == 0)
{
lean_object* v_a_1857_; 
v_a_1857_ = lean_ctor_get(v___x_1856_, 0);
lean_inc(v_a_1857_);
lean_dec_ref_known(v___x_1856_, 1);
v___y_1844_ = v_ref_1855_;
v_a_1845_ = v_a_1857_;
goto v___jp_1843_;
}
else
{
lean_object* v___x_1858_; 
lean_dec_ref_known(v___x_1856_, 1);
v___x_1858_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2);
v___y_1844_ = v_ref_1855_;
v_a_1845_ = v___x_1858_;
goto v___jp_1843_;
}
}
v___jp_1859_:
{
if (v_clsEnabled_1814_ == 0)
{
if (v___y_1860_ == 0)
{
lean_object* v___x_1861_; lean_object* v_traceState_1862_; lean_object* v_env_1863_; lean_object* v_nextMacroScope_1864_; lean_object* v_ngen_1865_; lean_object* v_auxDeclNGen_1866_; lean_object* v_cache_1867_; lean_object* v_recordedDeps_1868_; lean_object* v_messages_1869_; lean_object* v_infoState_1870_; lean_object* v_snapshotTasks_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1890_; 
lean_dec(v_snd_1840_);
lean_dec(v_fst_1839_);
lean_dec_ref(v_msg_1816_);
lean_dec_ref(v_tag_1812_);
lean_dec(v_cls_1810_);
v___x_1861_ = lean_st_ref_take(v___y_1821_);
v_traceState_1862_ = lean_ctor_get(v___x_1861_, 4);
v_env_1863_ = lean_ctor_get(v___x_1861_, 0);
v_nextMacroScope_1864_ = lean_ctor_get(v___x_1861_, 1);
v_ngen_1865_ = lean_ctor_get(v___x_1861_, 2);
v_auxDeclNGen_1866_ = lean_ctor_get(v___x_1861_, 3);
v_cache_1867_ = lean_ctor_get(v___x_1861_, 5);
v_recordedDeps_1868_ = lean_ctor_get(v___x_1861_, 6);
v_messages_1869_ = lean_ctor_get(v___x_1861_, 7);
v_infoState_1870_ = lean_ctor_get(v___x_1861_, 8);
v_snapshotTasks_1871_ = lean_ctor_get(v___x_1861_, 9);
v_isSharedCheck_1890_ = !lean_is_exclusive(v___x_1861_);
if (v_isSharedCheck_1890_ == 0)
{
v___x_1873_ = v___x_1861_;
v_isShared_1874_ = v_isSharedCheck_1890_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_snapshotTasks_1871_);
lean_inc(v_infoState_1870_);
lean_inc(v_messages_1869_);
lean_inc(v_recordedDeps_1868_);
lean_inc(v_cache_1867_);
lean_inc(v_traceState_1862_);
lean_inc(v_auxDeclNGen_1866_);
lean_inc(v_ngen_1865_);
lean_inc(v_nextMacroScope_1864_);
lean_inc(v_env_1863_);
lean_dec(v___x_1861_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1890_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
uint64_t v_tid_1875_; lean_object* v_traces_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1889_; 
v_tid_1875_ = lean_ctor_get_uint64(v_traceState_1862_, sizeof(void*)*1);
v_traces_1876_ = lean_ctor_get(v_traceState_1862_, 0);
v_isSharedCheck_1889_ = !lean_is_exclusive(v_traceState_1862_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1878_ = v_traceState_1862_;
v_isShared_1879_ = v_isSharedCheck_1889_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_traces_1876_);
lean_dec(v_traceState_1862_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1889_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v___x_1880_; lean_object* v___x_1882_; 
v___x_1880_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1815_, v_traces_1876_);
lean_dec_ref(v_traces_1876_);
if (v_isShared_1879_ == 0)
{
lean_ctor_set(v___x_1878_, 0, v___x_1880_);
v___x_1882_ = v___x_1878_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v___x_1880_);
lean_ctor_set_uint64(v_reuseFailAlloc_1888_, sizeof(void*)*1, v_tid_1875_);
v___x_1882_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
lean_object* v___x_1884_; 
if (v_isShared_1874_ == 0)
{
lean_ctor_set(v___x_1873_, 4, v___x_1882_);
v___x_1884_ = v___x_1873_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v_env_1863_);
lean_ctor_set(v_reuseFailAlloc_1887_, 1, v_nextMacroScope_1864_);
lean_ctor_set(v_reuseFailAlloc_1887_, 2, v_ngen_1865_);
lean_ctor_set(v_reuseFailAlloc_1887_, 3, v_auxDeclNGen_1866_);
lean_ctor_set(v_reuseFailAlloc_1887_, 4, v___x_1882_);
lean_ctor_set(v_reuseFailAlloc_1887_, 5, v_cache_1867_);
lean_ctor_set(v_reuseFailAlloc_1887_, 6, v_recordedDeps_1868_);
lean_ctor_set(v_reuseFailAlloc_1887_, 7, v_messages_1869_);
lean_ctor_set(v_reuseFailAlloc_1887_, 8, v_infoState_1870_);
lean_ctor_set(v_reuseFailAlloc_1887_, 9, v_snapshotTasks_1871_);
v___x_1884_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1885_ = lean_st_ref_put(v___y_1821_, v___x_1884_);
v___x_1886_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(v_fst_1823_);
return v___x_1886_;
}
}
}
}
}
else
{
goto v___jp_1854_;
}
}
else
{
goto v___jp_1854_;
}
}
v___jp_1891_:
{
double v___x_1893_; double v___x_1894_; double v___x_1895_; uint8_t v___x_1896_; 
v___x_1893_ = lean_unbox_float(v_snd_1840_);
v___x_1894_ = lean_unbox_float(v_fst_1839_);
v___x_1895_ = lean_float_sub(v___x_1893_, v___x_1894_);
v___x_1896_ = lean_float_decLt(v___y_1892_, v___x_1895_);
v___y_1860_ = v___x_1896_;
goto v___jp_1859_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___boxed(lean_object* v_cls_1907_, lean_object* v_collapsed_1908_, lean_object* v_tag_1909_, lean_object* v_opts_1910_, lean_object* v_clsEnabled_1911_, lean_object* v_oldTraces_1912_, lean_object* v_msg_1913_, lean_object* v_resStartStop_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_){
_start:
{
uint8_t v_collapsed_boxed_1920_; uint8_t v_clsEnabled_boxed_1921_; lean_object* v_res_1922_; 
v_collapsed_boxed_1920_ = lean_unbox(v_collapsed_1908_);
v_clsEnabled_boxed_1921_ = lean_unbox(v_clsEnabled_1911_);
v_res_1922_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2(v_cls_1907_, v_collapsed_boxed_1920_, v_tag_1909_, v_opts_1910_, v_clsEnabled_boxed_1921_, v_oldTraces_1912_, v_msg_1913_, v_resStartStop_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_);
lean_dec(v___y_1918_);
lean_dec_ref(v___y_1917_);
lean_dec(v___y_1916_);
lean_dec_ref(v___y_1915_);
lean_dec_ref(v_opts_1910_);
return v_res_1922_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2(void){
_start:
{
lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1926_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_1927_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__1));
v___x_1928_ = l_Lean_Name_append(v___x_1927_, v___x_1926_);
return v___x_1928_;
}
}
static double _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3(void){
_start:
{
lean_object* v___x_1929_; double v___x_1930_; 
v___x_1929_ = lean_unsigned_to_nat(1000000000u);
v___x_1930_ = lean_float_of_nat(v___x_1929_);
return v___x_1930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma(lean_object* v_cfg_1931_, lean_object* v_act_1932_, lean_object* v_allowFailure_1933_, lean_object* v_cand_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_, lean_object* v_a_1938_){
_start:
{
lean_object* v_fst_1940_; lean_object* v_snd_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_2204_; 
v_fst_1940_ = lean_ctor_get(v_cand_1934_, 0);
v_snd_1941_ = lean_ctor_get(v_cand_1934_, 1);
v_isSharedCheck_2204_ = !lean_is_exclusive(v_cand_1934_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_1943_ = v_cand_1934_;
v_isShared_1944_ = v_isSharedCheck_2204_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_snd_1941_);
lean_inc(v_fst_1940_);
lean_dec(v_cand_1934_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_2204_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v_toCold_1945_; lean_object* v_options_1946_; uint8_t v_hasTrace_1947_; 
v_toCold_1945_ = lean_ctor_get(v_a_1937_, 0);
v_options_1946_ = lean_ctor_get(v_toCold_1945_, 2);
v_hasTrace_1947_ = lean_ctor_get_uint8(v_options_1946_, sizeof(void*)*1);
if (v_hasTrace_1947_ == 0)
{
lean_object* v_fst_1948_; lean_object* v_snd_1949_; lean_object* v_fst_1950_; lean_object* v_snd_1951_; lean_object* v___x_1952_; lean_object* v_cache_1953_; lean_object* v_zetaDeltaFVarIds_1954_; lean_object* v_postponed_1955_; lean_object* v_diag_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_2002_; 
lean_del_object(v___x_1943_);
v_fst_1948_ = lean_ctor_get(v_fst_1940_, 0);
lean_inc(v_fst_1948_);
v_snd_1949_ = lean_ctor_get(v_fst_1940_, 1);
lean_inc(v_snd_1949_);
lean_dec(v_fst_1940_);
v_fst_1950_ = lean_ctor_get(v_snd_1941_, 0);
lean_inc(v_fst_1950_);
v_snd_1951_ = lean_ctor_get(v_snd_1941_, 1);
lean_inc(v_snd_1951_);
lean_dec(v_snd_1941_);
v___x_1952_ = lean_st_ref_take(v_a_1936_);
v_cache_1953_ = lean_ctor_get(v___x_1952_, 1);
v_zetaDeltaFVarIds_1954_ = lean_ctor_get(v___x_1952_, 2);
v_postponed_1955_ = lean_ctor_get(v___x_1952_, 3);
v_diag_1956_ = lean_ctor_get(v___x_1952_, 4);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1952_);
if (v_isSharedCheck_2002_ == 0)
{
lean_object* v_unused_2003_; 
v_unused_2003_ = lean_ctor_get(v___x_1952_, 0);
lean_dec(v_unused_2003_);
v___x_1958_ = v___x_1952_;
v_isShared_1959_ = v_isSharedCheck_2002_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_diag_1956_);
lean_inc(v_postponed_1955_);
lean_inc(v_zetaDeltaFVarIds_1954_);
lean_inc(v_cache_1953_);
lean_dec(v___x_1952_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_2002_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
lean_object* v___x_1961_; 
if (v_isShared_1959_ == 0)
{
lean_ctor_set(v___x_1958_, 0, v_snd_1949_);
v___x_1961_ = v___x_1958_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_snd_1949_);
lean_ctor_set(v_reuseFailAlloc_2001_, 1, v_cache_1953_);
lean_ctor_set(v_reuseFailAlloc_2001_, 2, v_zetaDeltaFVarIds_1954_);
lean_ctor_set(v_reuseFailAlloc_2001_, 3, v_postponed_1955_);
lean_ctor_set(v_reuseFailAlloc_2001_, 4, v_diag_1956_);
v___x_1961_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
lean_object* v___x_1962_; uint8_t v___x_1963_; lean_object* v___x_1964_; 
v___x_1962_ = lean_st_ref_put(v_a_1936_, v___x_1961_);
v___x_1963_ = lean_unbox(v_snd_1951_);
lean_dec(v_snd_1951_);
v___x_1964_ = l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma(v_fst_1950_, v___x_1963_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
if (lean_obj_tag(v___x_1964_) == 0)
{
lean_object* v_a_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; 
v_a_1965_ = lean_ctor_get(v___x_1964_, 0);
lean_inc(v_a_1965_);
lean_dec_ref_known(v___x_1964_, 1);
v___x_1966_ = lean_box(0);
lean_inc(v_fst_1948_);
v___x_1967_ = l_Lean_MVarId_apply(v_fst_1948_, v_a_1965_, v_cfg_1931_, v___x_1966_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
if (lean_obj_tag(v___x_1967_) == 0)
{
lean_object* v_a_1968_; lean_object* v___x_1969_; 
v_a_1968_ = lean_ctor_get(v___x_1967_, 0);
lean_inc_n(v_a_1968_, 2);
lean_dec_ref_known(v___x_1967_, 1);
lean_inc(v_a_1938_);
lean_inc_ref(v_a_1937_);
lean_inc(v_a_1936_);
lean_inc_ref(v_a_1935_);
v___x_1969_ = lean_apply_6(v_act_1932_, v_a_1968_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, lean_box(0));
if (lean_obj_tag(v___x_1969_) == 0)
{
lean_dec(v_a_1968_);
lean_dec(v_fst_1948_);
lean_dec_ref(v_allowFailure_1933_);
return v___x_1969_;
}
else
{
lean_object* v_a_1970_; uint8_t v___x_1971_; 
v_a_1970_ = lean_ctor_get(v___x_1969_, 0);
lean_inc(v_a_1970_);
v___x_1971_ = l_Lean_Exception_isInterrupt(v_a_1970_);
if (v___x_1971_ == 0)
{
uint8_t v___x_1972_; 
v___x_1972_ = l_Lean_Exception_isRuntime(v_a_1970_);
if (v___x_1972_ == 0)
{
lean_object* v___x_1973_; 
lean_dec_ref_known(v___x_1969_, 1);
lean_inc(v_a_1938_);
lean_inc_ref(v_a_1937_);
lean_inc(v_a_1936_);
lean_inc_ref(v_a_1935_);
v___x_1973_ = lean_apply_6(v_allowFailure_1933_, v_fst_1948_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, lean_box(0));
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v_a_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1984_; 
v_a_1974_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_1984_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1984_ == 0)
{
v___x_1976_ = v___x_1973_;
v_isShared_1977_ = v_isSharedCheck_1984_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_a_1974_);
lean_dec(v___x_1973_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1984_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
uint8_t v___x_1978_; 
v___x_1978_ = lean_unbox(v_a_1974_);
lean_dec(v_a_1974_);
if (v___x_1978_ == 0)
{
lean_object* v___x_1979_; lean_object* v___x_1980_; 
lean_del_object(v___x_1976_);
lean_dec(v_a_1968_);
v___x_1979_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1, &l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1_once, _init_l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1);
v___x_1980_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(v___x_1979_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
return v___x_1980_;
}
else
{
lean_object* v___x_1982_; 
if (v_isShared_1977_ == 0)
{
lean_ctor_set(v___x_1976_, 0, v_a_1968_);
v___x_1982_ = v___x_1976_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v_a_1968_);
v___x_1982_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
return v___x_1982_;
}
}
}
}
else
{
lean_object* v_a_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1992_; 
lean_dec(v_a_1968_);
v_a_1985_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1987_ = v___x_1973_;
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_a_1985_);
lean_dec(v___x_1973_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1990_; 
if (v_isShared_1988_ == 0)
{
v___x_1990_ = v___x_1987_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_a_1985_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
return v___x_1990_;
}
}
}
}
else
{
lean_dec(v_a_1968_);
lean_dec(v_fst_1948_);
lean_dec_ref(v_allowFailure_1933_);
return v___x_1969_;
}
}
else
{
lean_dec(v_a_1970_);
lean_dec(v_a_1968_);
lean_dec(v_fst_1948_);
lean_dec_ref(v_allowFailure_1933_);
return v___x_1969_;
}
}
}
else
{
lean_dec(v_fst_1948_);
lean_dec_ref(v_allowFailure_1933_);
lean_dec_ref(v_act_1932_);
return v___x_1967_;
}
}
else
{
lean_object* v_a_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2000_; 
lean_dec(v_fst_1948_);
lean_dec_ref(v_allowFailure_1933_);
lean_dec_ref(v_act_1932_);
lean_dec_ref(v_cfg_1931_);
v_a_1993_ = lean_ctor_get(v___x_1964_, 0);
v_isSharedCheck_2000_ = !lean_is_exclusive(v___x_1964_);
if (v_isSharedCheck_2000_ == 0)
{
v___x_1995_ = v___x_1964_;
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_a_1993_);
lean_dec(v___x_1964_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1998_; 
if (v_isShared_1996_ == 0)
{
v___x_1998_ = v___x_1995_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v_a_1993_);
v___x_1998_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
return v___x_1998_;
}
}
}
}
}
}
else
{
lean_object* v_fst_2004_; lean_object* v_snd_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2203_; 
v_fst_2004_ = lean_ctor_get(v_fst_1940_, 0);
v_snd_2005_ = lean_ctor_get(v_fst_1940_, 1);
v_isSharedCheck_2203_ = !lean_is_exclusive(v_fst_1940_);
if (v_isSharedCheck_2203_ == 0)
{
v___x_2007_ = v_fst_1940_;
v_isShared_2008_ = v_isSharedCheck_2203_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_snd_2005_);
lean_inc(v_fst_2004_);
lean_dec(v_fst_1940_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2203_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v_fst_2009_; lean_object* v_snd_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2202_; 
v_fst_2009_ = lean_ctor_get(v_snd_1941_, 0);
v_snd_2010_ = lean_ctor_get(v_snd_1941_, 1);
v_isSharedCheck_2202_ = !lean_is_exclusive(v_snd_1941_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2012_ = v_snd_1941_;
v_isShared_2013_ = v_isSharedCheck_2202_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_snd_2010_);
lean_inc(v_fst_2009_);
lean_dec(v_snd_1941_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2202_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v_inheritedTraceOptions_2014_; lean_object* v___f_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; uint8_t v___x_2019_; lean_object* v___y_2021_; lean_object* v___y_2022_; lean_object* v_a_2023_; lean_object* v___y_2040_; lean_object* v___y_2041_; lean_object* v_a_2042_; lean_object* v___y_2045_; lean_object* v___y_2046_; lean_object* v_a_2047_; lean_object* v___y_2050_; lean_object* v___y_2051_; lean_object* v_a_2052_; lean_object* v___y_2064_; lean_object* v___y_2065_; lean_object* v_a_2066_; lean_object* v___y_2069_; lean_object* v___y_2070_; lean_object* v_a_2071_; 
v_inheritedTraceOptions_2014_ = lean_ctor_get(v_toCold_1945_, 11);
lean_inc(v_snd_2010_);
lean_inc(v_fst_2009_);
v___f_2015_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2015_, 0, v_fst_2009_);
lean_closure_set(v___f_2015_, 1, v_snd_2010_);
v___x_2016_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_2017_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__4));
v___x_2018_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2);
v___x_2019_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2014_, v_options_1946_, v___x_2018_);
if (v___x_2019_ == 0)
{
lean_object* v___x_2148_; uint8_t v___x_2149_; 
v___x_2148_ = l_Lean_trace_profiler;
v___x_2149_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_options_1946_, v___x_2148_);
if (v___x_2149_ == 0)
{
lean_object* v___x_2150_; lean_object* v_cache_2151_; lean_object* v_zetaDeltaFVarIds_2152_; lean_object* v_postponed_2153_; lean_object* v_diag_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2200_; 
lean_dec_ref(v___f_2015_);
lean_del_object(v___x_2012_);
lean_del_object(v___x_2007_);
lean_del_object(v___x_1943_);
v___x_2150_ = lean_st_ref_take(v_a_1936_);
v_cache_2151_ = lean_ctor_get(v___x_2150_, 1);
v_zetaDeltaFVarIds_2152_ = lean_ctor_get(v___x_2150_, 2);
v_postponed_2153_ = lean_ctor_get(v___x_2150_, 3);
v_diag_2154_ = lean_ctor_get(v___x_2150_, 4);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2150_);
if (v_isSharedCheck_2200_ == 0)
{
lean_object* v_unused_2201_; 
v_unused_2201_ = lean_ctor_get(v___x_2150_, 0);
lean_dec(v_unused_2201_);
v___x_2156_ = v___x_2150_;
v_isShared_2157_ = v_isSharedCheck_2200_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_diag_2154_);
lean_inc(v_postponed_2153_);
lean_inc(v_zetaDeltaFVarIds_2152_);
lean_inc(v_cache_2151_);
lean_dec(v___x_2150_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2200_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2157_ == 0)
{
lean_ctor_set(v___x_2156_, 0, v_snd_2005_);
v___x_2159_ = v___x_2156_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v_snd_2005_);
lean_ctor_set(v_reuseFailAlloc_2199_, 1, v_cache_2151_);
lean_ctor_set(v_reuseFailAlloc_2199_, 2, v_zetaDeltaFVarIds_2152_);
lean_ctor_set(v_reuseFailAlloc_2199_, 3, v_postponed_2153_);
lean_ctor_set(v_reuseFailAlloc_2199_, 4, v_diag_2154_);
v___x_2159_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
lean_object* v___x_2160_; uint8_t v___x_2161_; lean_object* v___x_2162_; 
v___x_2160_ = lean_st_ref_put(v_a_1936_, v___x_2159_);
v___x_2161_ = lean_unbox(v_snd_2010_);
lean_dec(v_snd_2010_);
v___x_2162_ = l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma(v_fst_2009_, v___x_2161_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
if (lean_obj_tag(v___x_2162_) == 0)
{
lean_object* v_a_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
v_a_2163_ = lean_ctor_get(v___x_2162_, 0);
lean_inc(v_a_2163_);
lean_dec_ref_known(v___x_2162_, 1);
v___x_2164_ = lean_box(0);
lean_inc(v_fst_2004_);
v___x_2165_ = l_Lean_MVarId_apply(v_fst_2004_, v_a_2163_, v_cfg_1931_, v___x_2164_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
if (lean_obj_tag(v___x_2165_) == 0)
{
lean_object* v_a_2166_; lean_object* v___x_2167_; 
v_a_2166_ = lean_ctor_get(v___x_2165_, 0);
lean_inc_n(v_a_2166_, 2);
lean_dec_ref_known(v___x_2165_, 1);
lean_inc(v_a_1938_);
lean_inc_ref(v_a_1937_);
lean_inc(v_a_1936_);
lean_inc_ref(v_a_1935_);
v___x_2167_ = lean_apply_6(v_act_1932_, v_a_2166_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, lean_box(0));
if (lean_obj_tag(v___x_2167_) == 0)
{
lean_dec(v_a_2166_);
lean_dec(v_fst_2004_);
lean_dec_ref(v_allowFailure_1933_);
return v___x_2167_;
}
else
{
lean_object* v_a_2168_; uint8_t v___x_2169_; 
v_a_2168_ = lean_ctor_get(v___x_2167_, 0);
lean_inc(v_a_2168_);
v___x_2169_ = l_Lean_Exception_isInterrupt(v_a_2168_);
if (v___x_2169_ == 0)
{
uint8_t v___x_2170_; 
v___x_2170_ = l_Lean_Exception_isRuntime(v_a_2168_);
if (v___x_2170_ == 0)
{
lean_object* v___x_2171_; 
lean_dec_ref_known(v___x_2167_, 1);
lean_inc(v_a_1938_);
lean_inc_ref(v_a_1937_);
lean_inc(v_a_1936_);
lean_inc_ref(v_a_1935_);
v___x_2171_ = lean_apply_6(v_allowFailure_1933_, v_fst_2004_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, lean_box(0));
if (lean_obj_tag(v___x_2171_) == 0)
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2182_; 
v_a_2172_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2182_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2174_ = v___x_2171_;
v_isShared_2175_ = v_isSharedCheck_2182_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2171_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2182_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
uint8_t v___x_2176_; 
v___x_2176_ = lean_unbox(v_a_2172_);
lean_dec(v_a_2172_);
if (v___x_2176_ == 0)
{
lean_object* v___x_2177_; lean_object* v___x_2178_; 
lean_del_object(v___x_2174_);
lean_dec(v_a_2166_);
v___x_2177_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1, &l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1_once, _init_l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1);
v___x_2178_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(v___x_2177_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
return v___x_2178_;
}
else
{
lean_object* v___x_2180_; 
if (v_isShared_2175_ == 0)
{
lean_ctor_set(v___x_2174_, 0, v_a_2166_);
v___x_2180_ = v___x_2174_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v_a_2166_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
}
else
{
lean_object* v_a_2183_; lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2190_; 
lean_dec(v_a_2166_);
v_a_2183_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2190_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2185_ = v___x_2171_;
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
else
{
lean_inc(v_a_2183_);
lean_dec(v___x_2171_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___x_2188_; 
if (v_isShared_2186_ == 0)
{
v___x_2188_ = v___x_2185_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_a_2183_);
v___x_2188_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
return v___x_2188_;
}
}
}
}
else
{
lean_dec(v_a_2166_);
lean_dec(v_fst_2004_);
lean_dec_ref(v_allowFailure_1933_);
return v___x_2167_;
}
}
else
{
lean_dec(v_a_2168_);
lean_dec(v_a_2166_);
lean_dec(v_fst_2004_);
lean_dec_ref(v_allowFailure_1933_);
return v___x_2167_;
}
}
}
else
{
lean_dec(v_fst_2004_);
lean_dec_ref(v_allowFailure_1933_);
lean_dec_ref(v_act_1932_);
return v___x_2165_;
}
}
else
{
lean_object* v_a_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2198_; 
lean_dec(v_fst_2004_);
lean_dec_ref(v_allowFailure_1933_);
lean_dec_ref(v_act_1932_);
lean_dec_ref(v_cfg_1931_);
v_a_2191_ = lean_ctor_get(v___x_2162_, 0);
v_isSharedCheck_2198_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2198_ == 0)
{
v___x_2193_ = v___x_2162_;
v_isShared_2194_ = v_isSharedCheck_2198_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_a_2191_);
lean_dec(v___x_2162_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2198_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v___x_2196_; 
if (v_isShared_2194_ == 0)
{
v___x_2196_ = v___x_2193_;
goto v_reusejp_2195_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v_a_2191_);
v___x_2196_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2195_;
}
v_reusejp_2195_:
{
return v___x_2196_;
}
}
}
}
}
}
else
{
goto v___jp_2073_;
}
}
else
{
goto v___jp_2073_;
}
v___jp_2020_:
{
lean_object* v___x_2024_; double v___x_2025_; double v___x_2026_; double v___x_2027_; double v___x_2028_; double v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2033_; 
v___x_2024_ = lean_io_mono_nanos_now();
v___x_2025_ = lean_float_of_nat(v___y_2022_);
v___x_2026_ = lean_float_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3);
v___x_2027_ = lean_float_div(v___x_2025_, v___x_2026_);
v___x_2028_ = lean_float_of_nat(v___x_2024_);
v___x_2029_ = lean_float_div(v___x_2028_, v___x_2026_);
v___x_2030_ = lean_box_float(v___x_2027_);
v___x_2031_ = lean_box_float(v___x_2029_);
if (v_isShared_2013_ == 0)
{
lean_ctor_set(v___x_2012_, 1, v___x_2031_);
lean_ctor_set(v___x_2012_, 0, v___x_2030_);
v___x_2033_ = v___x_2012_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v___x_2030_);
lean_ctor_set(v_reuseFailAlloc_2038_, 1, v___x_2031_);
v___x_2033_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
lean_object* v___x_2035_; 
if (v_isShared_2008_ == 0)
{
lean_ctor_set(v___x_2007_, 1, v___x_2033_);
lean_ctor_set(v___x_2007_, 0, v_a_2023_);
v___x_2035_ = v___x_2007_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2023_);
lean_ctor_set(v_reuseFailAlloc_2037_, 1, v___x_2033_);
v___x_2035_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
lean_object* v___x_2036_; 
v___x_2036_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2(v___x_2016_, v_hasTrace_1947_, v___x_2017_, v_options_1946_, v___x_2019_, v___y_2021_, v___f_2015_, v___x_2035_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
return v___x_2036_;
}
}
}
v___jp_2039_:
{
lean_object* v___x_2043_; 
v___x_2043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2043_, 0, v_a_2042_);
v___y_2021_ = v___y_2040_;
v___y_2022_ = v___y_2041_;
v_a_2023_ = v___x_2043_;
goto v___jp_2020_;
}
v___jp_2044_:
{
lean_object* v___x_2048_; 
v___x_2048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2048_, 0, v_a_2047_);
v___y_2021_ = v___y_2045_;
v___y_2022_ = v___y_2046_;
v_a_2023_ = v___x_2048_;
goto v___jp_2020_;
}
v___jp_2049_:
{
lean_object* v___x_2053_; double v___x_2054_; double v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2059_; 
v___x_2053_ = lean_io_get_num_heartbeats();
v___x_2054_ = lean_float_of_nat(v___y_2050_);
v___x_2055_ = lean_float_of_nat(v___x_2053_);
v___x_2056_ = lean_box_float(v___x_2054_);
v___x_2057_ = lean_box_float(v___x_2055_);
if (v_isShared_1944_ == 0)
{
lean_ctor_set(v___x_1943_, 1, v___x_2057_);
lean_ctor_set(v___x_1943_, 0, v___x_2056_);
v___x_2059_ = v___x_1943_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v___x_2056_);
lean_ctor_set(v_reuseFailAlloc_2062_, 1, v___x_2057_);
v___x_2059_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; 
v___x_2060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2060_, 0, v_a_2052_);
lean_ctor_set(v___x_2060_, 1, v___x_2059_);
v___x_2061_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2(v___x_2016_, v_hasTrace_1947_, v___x_2017_, v_options_1946_, v___x_2019_, v___y_2051_, v___f_2015_, v___x_2060_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
return v___x_2061_;
}
}
v___jp_2063_:
{
lean_object* v___x_2067_; 
v___x_2067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2067_, 0, v_a_2066_);
v___y_2050_ = v___y_2064_;
v___y_2051_ = v___y_2065_;
v_a_2052_ = v___x_2067_;
goto v___jp_2049_;
}
v___jp_2068_:
{
lean_object* v___x_2072_; 
v___x_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2072_, 0, v_a_2071_);
v___y_2050_ = v___y_2069_;
v___y_2051_ = v___y_2070_;
v_a_2052_ = v___x_2072_;
goto v___jp_2049_;
}
v___jp_2073_:
{
lean_object* v___x_2074_; lean_object* v_a_2075_; lean_object* v___x_2076_; uint8_t v___x_2077_; 
v___x_2074_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg(v_a_1938_);
v_a_2075_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_a_2075_);
lean_dec_ref(v___x_2074_);
v___x_2076_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2077_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_options_1946_, v___x_2076_);
if (v___x_2077_ == 0)
{
lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v_cache_2080_; lean_object* v_zetaDeltaFVarIds_2081_; lean_object* v_postponed_2082_; lean_object* v_diag_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2111_; 
lean_del_object(v___x_1943_);
v___x_2078_ = lean_io_mono_nanos_now();
v___x_2079_ = lean_st_ref_take(v_a_1936_);
v_cache_2080_ = lean_ctor_get(v___x_2079_, 1);
v_zetaDeltaFVarIds_2081_ = lean_ctor_get(v___x_2079_, 2);
v_postponed_2082_ = lean_ctor_get(v___x_2079_, 3);
v_diag_2083_ = lean_ctor_get(v___x_2079_, 4);
v_isSharedCheck_2111_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2111_ == 0)
{
lean_object* v_unused_2112_; 
v_unused_2112_ = lean_ctor_get(v___x_2079_, 0);
lean_dec(v_unused_2112_);
v___x_2085_ = v___x_2079_;
v_isShared_2086_ = v_isSharedCheck_2111_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_diag_2083_);
lean_inc(v_postponed_2082_);
lean_inc(v_zetaDeltaFVarIds_2081_);
lean_inc(v_cache_2080_);
lean_dec(v___x_2079_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2111_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2088_; 
if (v_isShared_2086_ == 0)
{
lean_ctor_set(v___x_2085_, 0, v_snd_2005_);
v___x_2088_ = v___x_2085_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v_snd_2005_);
lean_ctor_set(v_reuseFailAlloc_2110_, 1, v_cache_2080_);
lean_ctor_set(v_reuseFailAlloc_2110_, 2, v_zetaDeltaFVarIds_2081_);
lean_ctor_set(v_reuseFailAlloc_2110_, 3, v_postponed_2082_);
lean_ctor_set(v_reuseFailAlloc_2110_, 4, v_diag_2083_);
v___x_2088_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
lean_object* v___x_2089_; uint8_t v___x_2090_; lean_object* v___x_2091_; 
v___x_2089_ = lean_st_ref_put(v_a_1936_, v___x_2088_);
v___x_2090_ = lean_unbox(v_snd_2010_);
lean_dec(v_snd_2010_);
v___x_2091_ = l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma(v_fst_2009_, v___x_2090_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_a_2092_);
lean_dec_ref_known(v___x_2091_, 1);
v___x_2093_ = lean_box(0);
lean_inc(v_fst_2004_);
v___x_2094_ = l_Lean_MVarId_apply(v_fst_2004_, v_a_2092_, v_cfg_1931_, v___x_2093_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v_a_2095_; lean_object* v___x_2096_; 
v_a_2095_ = lean_ctor_get(v___x_2094_, 0);
lean_inc_n(v_a_2095_, 2);
lean_dec_ref_known(v___x_2094_, 1);
lean_inc(v_a_1938_);
lean_inc_ref(v_a_1937_);
lean_inc(v_a_1936_);
lean_inc_ref(v_a_1935_);
v___x_2096_ = lean_apply_6(v_act_1932_, v_a_2095_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, lean_box(0));
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v_a_2097_; 
lean_dec(v_a_2095_);
lean_dec(v_fst_2004_);
lean_dec_ref(v_allowFailure_1933_);
v_a_2097_ = lean_ctor_get(v___x_2096_, 0);
lean_inc(v_a_2097_);
lean_dec_ref_known(v___x_2096_, 1);
v___y_2045_ = v_a_2075_;
v___y_2046_ = v___x_2078_;
v_a_2047_ = v_a_2097_;
goto v___jp_2044_;
}
else
{
lean_object* v_a_2098_; uint8_t v___x_2099_; 
v_a_2098_ = lean_ctor_get(v___x_2096_, 0);
lean_inc(v_a_2098_);
lean_dec_ref_known(v___x_2096_, 1);
v___x_2099_ = l_Lean_Exception_isInterrupt(v_a_2098_);
if (v___x_2099_ == 0)
{
uint8_t v___x_2100_; 
lean_inc(v_a_2098_);
v___x_2100_ = l_Lean_Exception_isRuntime(v_a_2098_);
if (v___x_2100_ == 0)
{
lean_object* v___x_2101_; 
lean_dec(v_a_2098_);
lean_inc(v_a_1938_);
lean_inc_ref(v_a_1937_);
lean_inc(v_a_1936_);
lean_inc_ref(v_a_1935_);
v___x_2101_ = lean_apply_6(v_allowFailure_1933_, v_fst_2004_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, lean_box(0));
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; uint8_t v___x_2103_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
lean_inc(v_a_2102_);
lean_dec_ref_known(v___x_2101_, 1);
v___x_2103_ = lean_unbox(v_a_2102_);
lean_dec(v_a_2102_);
if (v___x_2103_ == 0)
{
lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v_a_2106_; 
lean_dec(v_a_2095_);
v___x_2104_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1, &l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1_once, _init_l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1);
v___x_2105_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(v___x_2104_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
v_a_2106_ = lean_ctor_get(v___x_2105_, 0);
lean_inc(v_a_2106_);
lean_dec_ref(v___x_2105_);
v___y_2040_ = v_a_2075_;
v___y_2041_ = v___x_2078_;
v_a_2042_ = v_a_2106_;
goto v___jp_2039_;
}
else
{
v___y_2045_ = v_a_2075_;
v___y_2046_ = v___x_2078_;
v_a_2047_ = v_a_2095_;
goto v___jp_2044_;
}
}
else
{
lean_object* v_a_2107_; 
lean_dec(v_a_2095_);
v_a_2107_ = lean_ctor_get(v___x_2101_, 0);
lean_inc(v_a_2107_);
lean_dec_ref_known(v___x_2101_, 1);
v___y_2040_ = v_a_2075_;
v___y_2041_ = v___x_2078_;
v_a_2042_ = v_a_2107_;
goto v___jp_2039_;
}
}
else
{
lean_dec(v_a_2095_);
lean_dec(v_fst_2004_);
lean_dec_ref(v_allowFailure_1933_);
v___y_2040_ = v_a_2075_;
v___y_2041_ = v___x_2078_;
v_a_2042_ = v_a_2098_;
goto v___jp_2039_;
}
}
else
{
lean_dec(v_a_2095_);
lean_dec(v_fst_2004_);
lean_dec_ref(v_allowFailure_1933_);
v___y_2040_ = v_a_2075_;
v___y_2041_ = v___x_2078_;
v_a_2042_ = v_a_2098_;
goto v___jp_2039_;
}
}
}
else
{
lean_object* v_a_2108_; 
lean_dec(v_fst_2004_);
lean_dec_ref(v_allowFailure_1933_);
lean_dec_ref(v_act_1932_);
v_a_2108_ = lean_ctor_get(v___x_2094_, 0);
lean_inc(v_a_2108_);
lean_dec_ref_known(v___x_2094_, 1);
v___y_2040_ = v_a_2075_;
v___y_2041_ = v___x_2078_;
v_a_2042_ = v_a_2108_;
goto v___jp_2039_;
}
}
else
{
lean_object* v_a_2109_; 
lean_dec(v_fst_2004_);
lean_dec_ref(v_allowFailure_1933_);
lean_dec_ref(v_act_1932_);
lean_dec_ref(v_cfg_1931_);
v_a_2109_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_a_2109_);
lean_dec_ref_known(v___x_2091_, 1);
v___y_2040_ = v_a_2075_;
v___y_2041_ = v___x_2078_;
v_a_2042_ = v_a_2109_;
goto v___jp_2039_;
}
}
}
}
else
{
lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v_cache_2115_; lean_object* v_zetaDeltaFVarIds_2116_; lean_object* v_postponed_2117_; lean_object* v_diag_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2146_; 
lean_del_object(v___x_2012_);
lean_del_object(v___x_2007_);
v___x_2113_ = lean_io_get_num_heartbeats();
v___x_2114_ = lean_st_ref_take(v_a_1936_);
v_cache_2115_ = lean_ctor_get(v___x_2114_, 1);
v_zetaDeltaFVarIds_2116_ = lean_ctor_get(v___x_2114_, 2);
v_postponed_2117_ = lean_ctor_get(v___x_2114_, 3);
v_diag_2118_ = lean_ctor_get(v___x_2114_, 4);
v_isSharedCheck_2146_ = !lean_is_exclusive(v___x_2114_);
if (v_isSharedCheck_2146_ == 0)
{
lean_object* v_unused_2147_; 
v_unused_2147_ = lean_ctor_get(v___x_2114_, 0);
lean_dec(v_unused_2147_);
v___x_2120_ = v___x_2114_;
v_isShared_2121_ = v_isSharedCheck_2146_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_diag_2118_);
lean_inc(v_postponed_2117_);
lean_inc(v_zetaDeltaFVarIds_2116_);
lean_inc(v_cache_2115_);
lean_dec(v___x_2114_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2146_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2123_; 
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 0, v_snd_2005_);
v___x_2123_ = v___x_2120_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_snd_2005_);
lean_ctor_set(v_reuseFailAlloc_2145_, 1, v_cache_2115_);
lean_ctor_set(v_reuseFailAlloc_2145_, 2, v_zetaDeltaFVarIds_2116_);
lean_ctor_set(v_reuseFailAlloc_2145_, 3, v_postponed_2117_);
lean_ctor_set(v_reuseFailAlloc_2145_, 4, v_diag_2118_);
v___x_2123_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
lean_object* v___x_2124_; uint8_t v___x_2125_; lean_object* v___x_2126_; 
v___x_2124_ = lean_st_ref_put(v_a_1936_, v___x_2123_);
v___x_2125_ = lean_unbox(v_snd_2010_);
lean_dec(v_snd_2010_);
v___x_2126_ = l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma(v_fst_2009_, v___x_2125_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v_a_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; 
v_a_2127_ = lean_ctor_get(v___x_2126_, 0);
lean_inc(v_a_2127_);
lean_dec_ref_known(v___x_2126_, 1);
v___x_2128_ = lean_box(0);
lean_inc(v_fst_2004_);
v___x_2129_ = l_Lean_MVarId_apply(v_fst_2004_, v_a_2127_, v_cfg_1931_, v___x_2128_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
if (lean_obj_tag(v___x_2129_) == 0)
{
lean_object* v_a_2130_; lean_object* v___x_2131_; 
v_a_2130_ = lean_ctor_get(v___x_2129_, 0);
lean_inc_n(v_a_2130_, 2);
lean_dec_ref_known(v___x_2129_, 1);
lean_inc(v_a_1938_);
lean_inc_ref(v_a_1937_);
lean_inc(v_a_1936_);
lean_inc_ref(v_a_1935_);
v___x_2131_ = lean_apply_6(v_act_1932_, v_a_2130_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, lean_box(0));
if (lean_obj_tag(v___x_2131_) == 0)
{
lean_object* v_a_2132_; 
lean_dec(v_a_2130_);
lean_dec(v_fst_2004_);
lean_dec_ref(v_allowFailure_1933_);
v_a_2132_ = lean_ctor_get(v___x_2131_, 0);
lean_inc(v_a_2132_);
lean_dec_ref_known(v___x_2131_, 1);
v___y_2069_ = v___x_2113_;
v___y_2070_ = v_a_2075_;
v_a_2071_ = v_a_2132_;
goto v___jp_2068_;
}
else
{
lean_object* v_a_2133_; uint8_t v___x_2134_; 
v_a_2133_ = lean_ctor_get(v___x_2131_, 0);
lean_inc(v_a_2133_);
lean_dec_ref_known(v___x_2131_, 1);
v___x_2134_ = l_Lean_Exception_isInterrupt(v_a_2133_);
if (v___x_2134_ == 0)
{
uint8_t v___x_2135_; 
lean_inc(v_a_2133_);
v___x_2135_ = l_Lean_Exception_isRuntime(v_a_2133_);
if (v___x_2135_ == 0)
{
lean_object* v___x_2136_; 
lean_dec(v_a_2133_);
lean_inc(v_a_1938_);
lean_inc_ref(v_a_1937_);
lean_inc(v_a_1936_);
lean_inc_ref(v_a_1935_);
v___x_2136_ = lean_apply_6(v_allowFailure_1933_, v_fst_2004_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, lean_box(0));
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v_a_2137_; uint8_t v___x_2138_; 
v_a_2137_ = lean_ctor_get(v___x_2136_, 0);
lean_inc(v_a_2137_);
lean_dec_ref_known(v___x_2136_, 1);
v___x_2138_ = lean_unbox(v_a_2137_);
lean_dec(v_a_2137_);
if (v___x_2138_ == 0)
{
lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v_a_2141_; 
lean_dec(v_a_2130_);
v___x_2139_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1, &l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1_once, _init_l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1);
v___x_2140_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(v___x_2139_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
lean_inc(v_a_2141_);
lean_dec_ref(v___x_2140_);
v___y_2064_ = v___x_2113_;
v___y_2065_ = v_a_2075_;
v_a_2066_ = v_a_2141_;
goto v___jp_2063_;
}
else
{
v___y_2069_ = v___x_2113_;
v___y_2070_ = v_a_2075_;
v_a_2071_ = v_a_2130_;
goto v___jp_2068_;
}
}
else
{
lean_object* v_a_2142_; 
lean_dec(v_a_2130_);
v_a_2142_ = lean_ctor_get(v___x_2136_, 0);
lean_inc(v_a_2142_);
lean_dec_ref_known(v___x_2136_, 1);
v___y_2064_ = v___x_2113_;
v___y_2065_ = v_a_2075_;
v_a_2066_ = v_a_2142_;
goto v___jp_2063_;
}
}
else
{
lean_dec(v_a_2130_);
lean_dec(v_fst_2004_);
lean_dec_ref(v_allowFailure_1933_);
v___y_2064_ = v___x_2113_;
v___y_2065_ = v_a_2075_;
v_a_2066_ = v_a_2133_;
goto v___jp_2063_;
}
}
else
{
lean_dec(v_a_2130_);
lean_dec(v_fst_2004_);
lean_dec_ref(v_allowFailure_1933_);
v___y_2064_ = v___x_2113_;
v___y_2065_ = v_a_2075_;
v_a_2066_ = v_a_2133_;
goto v___jp_2063_;
}
}
}
else
{
lean_object* v_a_2143_; 
lean_dec(v_fst_2004_);
lean_dec_ref(v_allowFailure_1933_);
lean_dec_ref(v_act_1932_);
v_a_2143_ = lean_ctor_get(v___x_2129_, 0);
lean_inc(v_a_2143_);
lean_dec_ref_known(v___x_2129_, 1);
v___y_2064_ = v___x_2113_;
v___y_2065_ = v_a_2075_;
v_a_2066_ = v_a_2143_;
goto v___jp_2063_;
}
}
else
{
lean_object* v_a_2144_; 
lean_dec(v_fst_2004_);
lean_dec_ref(v_allowFailure_1933_);
lean_dec_ref(v_act_1932_);
lean_dec_ref(v_cfg_1931_);
v_a_2144_ = lean_ctor_get(v___x_2126_, 0);
lean_inc(v_a_2144_);
lean_dec_ref_known(v___x_2126_, 1);
v___y_2064_ = v___x_2113_;
v___y_2065_ = v_a_2075_;
v_a_2066_ = v_a_2144_;
goto v___jp_2063_;
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___boxed(lean_object* v_cfg_2205_, lean_object* v_act_2206_, lean_object* v_allowFailure_2207_, lean_object* v_cand_2208_, lean_object* v_a_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma(v_cfg_2205_, v_act_2206_, v_allowFailure_2207_, v_cand_2208_, v_a_2209_, v_a_2210_, v_a_2211_, v_a_2212_);
lean_dec(v_a_2212_);
lean_dec_ref(v_a_2211_);
lean_dec(v_a_2210_);
lean_dec_ref(v_a_2209_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3(lean_object* v_00_u03b1_2215_, lean_object* v_x_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_){
_start:
{
lean_object* v___x_2222_; 
v___x_2222_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(v_x_2216_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___boxed(lean_object* v_00_u03b1_2223_, lean_object* v_x_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_){
_start:
{
lean_object* v_res_2230_; 
v_res_2230_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3(v_00_u03b1_2223_, v_x_2224_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
lean_dec(v___y_2226_);
lean_dec_ref(v___y_2225_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0(lean_object* v_act_2233_, lean_object* v_a_2234_, uint8_t v_collectAll_2235_, lean_object* v_as_2236_, size_t v_sz_2237_, size_t v_i_2238_, lean_object* v_b_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_){
_start:
{
lean_object* v_a_2246_; uint8_t v___x_2250_; 
v___x_2250_ = lean_usize_dec_lt(v_i_2238_, v_sz_2237_);
if (v___x_2250_ == 0)
{
lean_object* v___x_2251_; 
lean_dec_ref(v_a_2234_);
lean_dec_ref(v_act_2233_);
v___x_2251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2251_, 0, v_b_2239_);
return v___x_2251_;
}
else
{
lean_object* v_snd_2252_; lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2324_; 
v_snd_2252_ = lean_ctor_get(v_b_2239_, 1);
v_isSharedCheck_2324_ = !lean_is_exclusive(v_b_2239_);
if (v_isSharedCheck_2324_ == 0)
{
lean_object* v_unused_2325_; 
v_unused_2325_ = lean_ctor_get(v_b_2239_, 0);
lean_dec(v_unused_2325_);
v___x_2254_ = v_b_2239_;
v_isShared_2255_ = v_isSharedCheck_2324_;
goto v_resetjp_2253_;
}
else
{
lean_inc(v_snd_2252_);
lean_dec(v_b_2239_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2324_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
lean_object* v___x_2256_; lean_object* v_a_2257_; lean_object* v___x_2258_; 
v___x_2256_ = lean_box(0);
v_a_2257_ = lean_array_uget_borrowed(v_as_2236_, v_i_2238_);
lean_inc_ref(v_act_2233_);
lean_inc(v___y_2243_);
lean_inc_ref(v___y_2242_);
lean_inc(v___y_2241_);
lean_inc_ref(v___y_2240_);
lean_inc(v_a_2257_);
v___x_2258_ = lean_apply_6(v_act_2233_, v_a_2257_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, lean_box(0));
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2286_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2286_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2261_ = v___x_2258_;
v_isShared_2262_ = v_isSharedCheck_2286_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2258_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2286_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
uint8_t v___x_2280_; 
v___x_2280_ = l_List_isEmpty___redArg(v_a_2259_);
if (v___x_2280_ == 0)
{
lean_del_object(v___x_2261_);
goto v___jp_2263_;
}
else
{
if (v_collectAll_2235_ == 0)
{
lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2284_; 
lean_dec(v_a_2259_);
lean_del_object(v___x_2254_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v_act_2233_);
v___x_2281_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0___closed__0));
v___x_2282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2282_, 0, v___x_2281_);
lean_ctor_set(v___x_2282_, 1, v_snd_2252_);
if (v_isShared_2262_ == 0)
{
lean_ctor_set(v___x_2261_, 0, v___x_2282_);
v___x_2284_ = v___x_2261_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v___x_2282_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
}
}
else
{
lean_del_object(v___x_2261_);
goto v___jp_2263_;
}
}
v___jp_2263_:
{
lean_object* v___x_2264_; lean_object* v_mctx_2265_; lean_object* v___x_2266_; 
v___x_2264_ = lean_st_ref_get(v___y_2241_);
v_mctx_2265_ = lean_ctor_get(v___x_2264_, 0);
lean_inc_ref(v_mctx_2265_);
lean_dec(v___x_2264_);
lean_inc_ref(v_a_2234_);
v___x_2266_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2234_, v___y_2241_, v___y_2243_);
if (lean_obj_tag(v___x_2266_) == 0)
{
lean_object* v___x_2268_; 
lean_dec_ref_known(v___x_2266_, 1);
if (v_isShared_2255_ == 0)
{
lean_ctor_set(v___x_2254_, 1, v_mctx_2265_);
lean_ctor_set(v___x_2254_, 0, v_a_2259_);
v___x_2268_ = v___x_2254_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v_a_2259_);
lean_ctor_set(v_reuseFailAlloc_2271_, 1, v_mctx_2265_);
v___x_2268_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2269_ = lean_array_push(v_snd_2252_, v___x_2268_);
v___x_2270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2256_);
lean_ctor_set(v___x_2270_, 1, v___x_2269_);
v_a_2246_ = v___x_2270_;
goto v___jp_2245_;
}
}
else
{
lean_object* v_a_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2279_; 
lean_dec_ref(v_mctx_2265_);
lean_dec(v_a_2259_);
lean_del_object(v___x_2254_);
lean_dec(v_snd_2252_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v_act_2233_);
v_a_2272_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2279_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2274_ = v___x_2266_;
v_isShared_2275_ = v_isSharedCheck_2279_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_a_2272_);
lean_dec(v___x_2266_);
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
lean_object* v_a_2287_; lean_object* v___x_2289_; uint8_t v_isShared_2290_; uint8_t v_isSharedCheck_2323_; 
v_a_2287_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2289_ = v___x_2258_;
v_isShared_2290_ = v_isSharedCheck_2323_;
goto v_resetjp_2288_;
}
else
{
lean_inc(v_a_2287_);
lean_dec(v___x_2258_);
v___x_2289_ = lean_box(0);
v_isShared_2290_ = v_isSharedCheck_2323_;
goto v_resetjp_2288_;
}
v_resetjp_2288_:
{
uint8_t v___x_2291_; 
v___x_2291_ = l_Lean_Exception_isInterrupt(v_a_2287_);
if (v___x_2291_ == 0)
{
uint8_t v___x_2292_; 
lean_inc(v_a_2287_);
v___x_2292_ = l_Lean_Exception_isRuntime(v_a_2287_);
if (v___x_2292_ == 0)
{
lean_object* v___x_2293_; 
lean_del_object(v___x_2289_);
lean_inc_ref(v_a_2234_);
v___x_2293_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2234_, v___y_2241_, v___y_2243_);
if (lean_obj_tag(v___x_2293_) == 0)
{
lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2307_; 
v_isSharedCheck_2307_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2307_ == 0)
{
lean_object* v_unused_2308_; 
v_unused_2308_ = lean_ctor_get(v___x_2293_, 0);
lean_dec(v_unused_2308_);
v___x_2295_ = v___x_2293_;
v_isShared_2296_ = v_isSharedCheck_2307_;
goto v_resetjp_2294_;
}
else
{
lean_dec(v___x_2293_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2307_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
uint8_t v___x_2297_; 
v___x_2297_ = l_Lean_Meta_LibrarySearch_isAbortSpeculation(v_a_2287_);
lean_dec(v_a_2287_);
if (v___x_2297_ == 0)
{
lean_object* v___x_2299_; 
lean_del_object(v___x_2295_);
if (v_isShared_2255_ == 0)
{
lean_ctor_set(v___x_2254_, 0, v___x_2256_);
v___x_2299_ = v___x_2254_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v___x_2256_);
lean_ctor_set(v_reuseFailAlloc_2300_, 1, v_snd_2252_);
v___x_2299_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
v_a_2246_ = v___x_2299_;
goto v___jp_2245_;
}
}
else
{
lean_object* v___x_2302_; 
lean_dec_ref(v_a_2234_);
lean_dec_ref(v_act_2233_);
if (v_isShared_2255_ == 0)
{
lean_ctor_set(v___x_2254_, 0, v___x_2256_);
v___x_2302_ = v___x_2254_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v___x_2256_);
lean_ctor_set(v_reuseFailAlloc_2306_, 1, v_snd_2252_);
v___x_2302_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
lean_object* v___x_2304_; 
if (v_isShared_2296_ == 0)
{
lean_ctor_set(v___x_2295_, 0, v___x_2302_);
v___x_2304_ = v___x_2295_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v___x_2302_);
v___x_2304_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
return v___x_2304_;
}
}
}
}
}
else
{
lean_object* v_a_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2316_; 
lean_dec(v_a_2287_);
lean_del_object(v___x_2254_);
lean_dec(v_snd_2252_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v_act_2233_);
v_a_2309_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2316_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2316_ == 0)
{
v___x_2311_ = v___x_2293_;
v_isShared_2312_ = v_isSharedCheck_2316_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_a_2309_);
lean_dec(v___x_2293_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2316_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v___x_2314_; 
if (v_isShared_2312_ == 0)
{
v___x_2314_ = v___x_2311_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_a_2309_);
v___x_2314_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
return v___x_2314_;
}
}
}
}
else
{
lean_object* v___x_2318_; 
lean_del_object(v___x_2254_);
lean_dec(v_snd_2252_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v_act_2233_);
if (v_isShared_2290_ == 0)
{
v___x_2318_ = v___x_2289_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2287_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
}
else
{
lean_object* v___x_2321_; 
lean_del_object(v___x_2254_);
lean_dec(v_snd_2252_);
lean_dec_ref(v_a_2234_);
lean_dec_ref(v_act_2233_);
if (v_isShared_2290_ == 0)
{
v___x_2321_ = v___x_2289_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2287_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
}
}
v___jp_2245_:
{
size_t v___x_2247_; size_t v___x_2248_; 
v___x_2247_ = ((size_t)1ULL);
v___x_2248_ = lean_usize_add(v_i_2238_, v___x_2247_);
v_i_2238_ = v___x_2248_;
v_b_2239_ = v_a_2246_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0___boxed(lean_object* v_act_2326_, lean_object* v_a_2327_, lean_object* v_collectAll_2328_, lean_object* v_as_2329_, lean_object* v_sz_2330_, lean_object* v_i_2331_, lean_object* v_b_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_){
_start:
{
uint8_t v_collectAll_boxed_2338_; size_t v_sz_boxed_2339_; size_t v_i_boxed_2340_; lean_object* v_res_2341_; 
v_collectAll_boxed_2338_ = lean_unbox(v_collectAll_2328_);
v_sz_boxed_2339_ = lean_unbox_usize(v_sz_2330_);
lean_dec(v_sz_2330_);
v_i_boxed_2340_ = lean_unbox_usize(v_i_2331_);
lean_dec(v_i_2331_);
v_res_2341_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0(v_act_2326_, v_a_2327_, v_collectAll_boxed_2338_, v_as_2329_, v_sz_boxed_2339_, v_i_boxed_2340_, v_b_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
lean_dec(v___y_2336_);
lean_dec_ref(v___y_2335_);
lean_dec(v___y_2334_);
lean_dec_ref(v___y_2333_);
lean_dec_ref(v_as_2329_);
return v_res_2341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryOnEach(lean_object* v_act_2347_, lean_object* v_candidates_2348_, uint8_t v_collectAll_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_){
_start:
{
lean_object* v___x_2355_; 
v___x_2355_ = l_Lean_Meta_saveState___redArg(v_a_2351_, v_a_2353_);
if (lean_obj_tag(v___x_2355_) == 0)
{
lean_object* v_a_2356_; lean_object* v___x_2357_; size_t v_sz_2358_; size_t v___x_2359_; lean_object* v___x_2360_; 
v_a_2356_ = lean_ctor_get(v___x_2355_, 0);
lean_inc(v_a_2356_);
lean_dec_ref_known(v___x_2355_, 1);
v___x_2357_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_tryOnEach___closed__1));
v_sz_2358_ = lean_array_size(v_candidates_2348_);
v___x_2359_ = ((size_t)0ULL);
v___x_2360_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0(v_act_2347_, v_a_2356_, v_collectAll_2349_, v_candidates_2348_, v_sz_2358_, v___x_2359_, v___x_2357_, v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_);
if (lean_obj_tag(v___x_2360_) == 0)
{
lean_object* v_a_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2375_; 
v_a_2361_ = lean_ctor_get(v___x_2360_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2360_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2363_ = v___x_2360_;
v_isShared_2364_ = v_isSharedCheck_2375_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_a_2361_);
lean_dec(v___x_2360_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2375_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v_fst_2365_; 
v_fst_2365_ = lean_ctor_get(v_a_2361_, 0);
if (lean_obj_tag(v_fst_2365_) == 0)
{
lean_object* v_snd_2366_; lean_object* v___x_2367_; lean_object* v___x_2369_; 
v_snd_2366_ = lean_ctor_get(v_a_2361_, 1);
lean_inc(v_snd_2366_);
lean_dec(v_a_2361_);
v___x_2367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2367_, 0, v_snd_2366_);
if (v_isShared_2364_ == 0)
{
lean_ctor_set(v___x_2363_, 0, v___x_2367_);
v___x_2369_ = v___x_2363_;
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
lean_object* v_val_2371_; lean_object* v___x_2373_; 
lean_inc_ref(v_fst_2365_);
lean_dec(v_a_2361_);
v_val_2371_ = lean_ctor_get(v_fst_2365_, 0);
lean_inc(v_val_2371_);
lean_dec_ref_known(v_fst_2365_, 1);
if (v_isShared_2364_ == 0)
{
lean_ctor_set(v___x_2363_, 0, v_val_2371_);
v___x_2373_ = v___x_2363_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_val_2371_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
}
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
v_a_2376_ = lean_ctor_get(v___x_2360_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2360_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v___x_2360_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2360_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
else
{
lean_object* v_a_2384_; lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2391_; 
lean_dec_ref(v_act_2347_);
v_a_2384_ = lean_ctor_get(v___x_2355_, 0);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2355_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2386_ = v___x_2355_;
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
else
{
lean_inc(v_a_2384_);
lean_dec(v___x_2355_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2389_; 
if (v_isShared_2387_ == 0)
{
v___x_2389_ = v___x_2386_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v_a_2384_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryOnEach___boxed(lean_object* v_act_2392_, lean_object* v_candidates_2393_, lean_object* v_collectAll_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_){
_start:
{
uint8_t v_collectAll_boxed_2400_; lean_object* v_res_2401_; 
v_collectAll_boxed_2400_ = lean_unbox(v_collectAll_2394_);
v_res_2401_ = l_Lean_Meta_LibrarySearch_tryOnEach(v_act_2392_, v_candidates_2393_, v_collectAll_boxed_2400_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_);
lean_dec(v_a_2398_);
lean_dec_ref(v_a_2397_);
lean_dec(v_a_2396_);
lean_dec_ref(v_a_2395_);
lean_dec_ref(v_candidates_2393_);
return v_res_2401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___redArg(){
_start:
{
lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2403_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0, &l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0_once, _init_l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0);
v___x_2404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2404_, 0, v___x_2403_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___redArg___boxed(lean_object* v___y_2405_){
_start:
{
lean_object* v_res_2406_; 
v_res_2406_ = l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___redArg();
return v_res_2406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0(lean_object* v_00_u03b1_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
lean_object* v___x_2413_; 
v___x_2413_ = l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___redArg();
return v___x_2413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___boxed(lean_object* v_00_u03b1_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_){
_start:
{
lean_object* v_res_2420_; 
v_res_2420_ = l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0(v_00_u03b1_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_);
lean_dec(v___y_2418_);
lean_dec_ref(v___y_2417_);
lean_dec(v___y_2416_);
lean_dec_ref(v___y_2415_);
return v_res_2420_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(lean_object* v_category_2421_, lean_object* v_opts_2422_, lean_object* v_act_2423_, lean_object* v_decl_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_){
_start:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; 
lean_inc(v___y_2428_);
lean_inc_ref(v___y_2427_);
lean_inc(v___y_2426_);
lean_inc_ref(v___y_2425_);
v___x_2430_ = lean_apply_4(v_act_2423_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_);
v___x_2431_ = l_Lean_profileitIOUnsafe___redArg(v_category_2421_, v_opts_2422_, v___x_2430_, v_decl_2424_);
return v___x_2431_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg___boxed(lean_object* v_category_2432_, lean_object* v_opts_2433_, lean_object* v_act_2434_, lean_object* v_decl_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(v_category_2432_, v_opts_2433_, v_act_2434_, v_decl_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_);
lean_dec(v___y_2439_);
lean_dec_ref(v___y_2438_);
lean_dec(v___y_2437_);
lean_dec_ref(v___y_2436_);
lean_dec_ref(v_opts_2433_);
lean_dec_ref(v_category_2432_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3(lean_object* v_00_u03b1_2442_, lean_object* v_category_2443_, lean_object* v_opts_2444_, lean_object* v_act_2445_, lean_object* v_decl_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_){
_start:
{
lean_object* v___x_2452_; 
v___x_2452_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(v_category_2443_, v_opts_2444_, v_act_2445_, v_decl_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___boxed(lean_object* v_00_u03b1_2453_, lean_object* v_category_2454_, lean_object* v_opts_2455_, lean_object* v_act_2456_, lean_object* v_decl_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_){
_start:
{
lean_object* v_res_2463_; 
v_res_2463_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3(v_00_u03b1_2453_, v_category_2454_, v_opts_2455_, v_act_2456_, v_decl_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_);
lean_dec(v___y_2461_);
lean_dec_ref(v___y_2460_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec_ref(v_opts_2455_);
lean_dec_ref(v_category_2454_);
return v_res_2463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__0(lean_object* v_a_2464_, lean_object* v___x_2465_, lean_object* v_tactic_2466_, lean_object* v_allowFailure_2467_, lean_object* v_cand_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_){
_start:
{
lean_object* v___x_2474_; 
lean_inc(v___y_2472_);
lean_inc_ref(v___y_2471_);
lean_inc(v___y_2470_);
lean_inc_ref(v___y_2469_);
v___x_2474_ = lean_apply_5(v_a_2464_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, lean_box(0));
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; uint8_t v___x_2476_; 
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___x_2474_, 1);
v___x_2476_ = lean_unbox(v_a_2475_);
lean_dec(v_a_2475_);
if (v___x_2476_ == 0)
{
lean_object* v___x_2477_; 
v___x_2477_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma(v___x_2465_, v_tactic_2466_, v_allowFailure_2467_, v_cand_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_);
return v___x_2477_;
}
else
{
lean_object* v___x_2478_; lean_object* v_a_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2486_; 
lean_dec_ref(v_cand_2468_);
lean_dec_ref(v_allowFailure_2467_);
lean_dec_ref(v_tactic_2466_);
lean_dec_ref(v___x_2465_);
v___x_2478_ = l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___redArg();
v_a_2479_ = lean_ctor_get(v___x_2478_, 0);
v_isSharedCheck_2486_ = !lean_is_exclusive(v___x_2478_);
if (v_isSharedCheck_2486_ == 0)
{
v___x_2481_ = v___x_2478_;
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_a_2479_);
lean_dec(v___x_2478_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2484_; 
if (v_isShared_2482_ == 0)
{
v___x_2484_ = v___x_2481_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2485_; 
v_reuseFailAlloc_2485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2485_, 0, v_a_2479_);
v___x_2484_ = v_reuseFailAlloc_2485_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
return v___x_2484_;
}
}
}
}
else
{
lean_object* v_a_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2494_; 
lean_dec_ref(v_cand_2468_);
lean_dec_ref(v_allowFailure_2467_);
lean_dec_ref(v_tactic_2466_);
lean_dec_ref(v___x_2465_);
v_a_2487_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2494_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2489_ = v___x_2474_;
v_isShared_2490_ = v_isSharedCheck_2494_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_a_2487_);
lean_dec(v___x_2474_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2494_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v___x_2492_; 
if (v_isShared_2490_ == 0)
{
v___x_2492_ = v___x_2489_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_a_2487_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
return v___x_2492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__0___boxed(lean_object* v_a_2495_, lean_object* v___x_2496_, lean_object* v_tactic_2497_, lean_object* v_allowFailure_2498_, lean_object* v_cand_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_){
_start:
{
lean_object* v_res_2505_; 
v_res_2505_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__0(v_a_2495_, v___x_2496_, v_tactic_2497_, v_allowFailure_2498_, v_cand_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_);
lean_dec(v___y_2503_);
lean_dec_ref(v___y_2502_);
lean_dec(v___y_2501_);
lean_dec_ref(v___y_2500_);
return v_res_2505_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__2(lean_object* v_as_2506_, size_t v_i_2507_, size_t v_stop_2508_){
_start:
{
uint8_t v___x_2509_; 
v___x_2509_ = lean_usize_dec_eq(v_i_2507_, v_stop_2508_);
if (v___x_2509_ == 0)
{
lean_object* v___x_2510_; lean_object* v_fst_2511_; uint8_t v___x_2512_; 
v___x_2510_ = lean_array_uget_borrowed(v_as_2506_, v_i_2507_);
v_fst_2511_ = lean_ctor_get(v___x_2510_, 0);
v___x_2512_ = l_List_isEmpty___redArg(v_fst_2511_);
if (v___x_2512_ == 0)
{
size_t v___x_2513_; size_t v___x_2514_; 
v___x_2513_ = ((size_t)1ULL);
v___x_2514_ = lean_usize_add(v_i_2507_, v___x_2513_);
v_i_2507_ = v___x_2514_;
goto _start;
}
else
{
return v___x_2512_;
}
}
else
{
uint8_t v___x_2516_; 
v___x_2516_ = 0;
return v___x_2516_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__2___boxed(lean_object* v_as_2517_, lean_object* v_i_2518_, lean_object* v_stop_2519_){
_start:
{
size_t v_i_boxed_2520_; size_t v_stop_boxed_2521_; uint8_t v_res_2522_; lean_object* v_r_2523_; 
v_i_boxed_2520_ = lean_unbox_usize(v_i_2518_);
lean_dec(v_i_2518_);
v_stop_boxed_2521_ = lean_unbox_usize(v_stop_2519_);
lean_dec(v_stop_2519_);
v_res_2522_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__2(v_as_2517_, v_i_boxed_2520_, v_stop_boxed_2521_);
lean_dec_ref(v_as_2517_);
v_r_2523_ = lean_box(v_res_2522_);
return v_r_2523_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__1(lean_object* v_goal_2524_, lean_object* v___x_2525_, size_t v_sz_2526_, size_t v_i_2527_, lean_object* v_bs_2528_){
_start:
{
uint8_t v___x_2529_; 
v___x_2529_ = lean_usize_dec_lt(v_i_2527_, v_sz_2526_);
if (v___x_2529_ == 0)
{
lean_dec_ref(v___x_2525_);
lean_dec(v_goal_2524_);
return v_bs_2528_;
}
else
{
lean_object* v_v_2530_; lean_object* v___x_2531_; lean_object* v_bs_x27_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; size_t v___x_2535_; size_t v___x_2536_; lean_object* v___x_2537_; 
v_v_2530_ = lean_array_uget(v_bs_2528_, v_i_2527_);
v___x_2531_ = lean_unsigned_to_nat(0u);
v_bs_x27_2532_ = lean_array_uset(v_bs_2528_, v_i_2527_, v___x_2531_);
lean_inc_ref(v___x_2525_);
lean_inc(v_goal_2524_);
v___x_2533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2533_, 0, v_goal_2524_);
lean_ctor_set(v___x_2533_, 1, v___x_2525_);
v___x_2534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2533_);
lean_ctor_set(v___x_2534_, 1, v_v_2530_);
v___x_2535_ = ((size_t)1ULL);
v___x_2536_ = lean_usize_add(v_i_2527_, v___x_2535_);
v___x_2537_ = lean_array_uset(v_bs_x27_2532_, v_i_2527_, v___x_2534_);
v_i_2527_ = v___x_2536_;
v_bs_2528_ = v___x_2537_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__1___boxed(lean_object* v_goal_2539_, lean_object* v___x_2540_, lean_object* v_sz_2541_, lean_object* v_i_2542_, lean_object* v_bs_2543_){
_start:
{
size_t v_sz_boxed_2544_; size_t v_i_boxed_2545_; lean_object* v_res_2546_; 
v_sz_boxed_2544_ = lean_unbox_usize(v_sz_2541_);
lean_dec(v_sz_2541_);
v_i_boxed_2545_ = lean_unbox_usize(v_i_2542_);
lean_dec(v_i_2542_);
v_res_2546_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__1(v_goal_2539_, v___x_2540_, v_sz_boxed_2544_, v_i_boxed_2545_, v_bs_2543_);
return v_res_2546_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1(lean_object* v_leavePercentHeartbeats_2548_, lean_object* v___x_2549_, lean_object* v_tactic_2550_, lean_object* v_allowFailure_2551_, lean_object* v_goal_2552_, uint8_t v_collectAll_2553_, uint8_t v_includeStar_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_){
_start:
{
lean_object* v___x_2563_; 
v___x_2563_ = l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg(v_leavePercentHeartbeats_2548_, v___y_2557_);
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_object* v_a_2564_; lean_object* v___f_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
v_a_2564_ = lean_ctor_get(v___x_2563_, 0);
lean_inc(v_a_2564_);
lean_dec_ref_known(v___x_2563_, 1);
v___f_2565_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__0___boxed), 10, 4);
lean_closure_set(v___f_2565_, 0, v_a_2564_);
lean_closure_set(v___f_2565_, 1, v___x_2549_);
lean_closure_set(v___f_2565_, 2, v_tactic_2550_);
lean_closure_set(v___f_2565_, 3, v_allowFailure_2551_);
v___x_2566_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___closed__0));
lean_inc(v_goal_2552_);
v___x_2567_ = l_Lean_Meta_LibrarySearch_librarySearchSymm(v___x_2566_, v_goal_2552_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
if (lean_obj_tag(v___x_2567_) == 0)
{
lean_object* v_a_2568_; lean_object* v___x_2569_; 
v_a_2568_ = lean_ctor_get(v___x_2567_, 0);
lean_inc(v_a_2568_);
lean_dec_ref_known(v___x_2567_, 1);
lean_inc_ref(v___f_2565_);
v___x_2569_ = l_Lean_Meta_LibrarySearch_tryOnEach(v___f_2565_, v_a_2568_, v_collectAll_2553_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
lean_dec(v_a_2568_);
if (lean_obj_tag(v___x_2569_) == 0)
{
lean_object* v_a_2570_; 
v_a_2570_ = lean_ctor_get(v___x_2569_, 0);
if (lean_obj_tag(v_a_2570_) == 0)
{
lean_dec_ref_known(v___x_2569_, 1);
lean_dec_ref(v___f_2565_);
lean_dec(v_goal_2552_);
goto v___jp_2560_;
}
else
{
lean_object* v_val_2571_; lean_object* v___x_2620_; lean_object* v___x_2621_; uint8_t v___x_2622_; 
v_val_2571_ = lean_ctor_get(v_a_2570_, 0);
v___x_2620_ = lean_unsigned_to_nat(0u);
v___x_2621_ = lean_array_get_size(v_val_2571_);
v___x_2622_ = lean_nat_dec_lt(v___x_2620_, v___x_2621_);
if (v___x_2622_ == 0)
{
goto v___jp_2616_;
}
else
{
if (v___x_2622_ == 0)
{
goto v___jp_2616_;
}
else
{
size_t v___x_2623_; size_t v___x_2624_; uint8_t v___x_2625_; 
v___x_2623_ = ((size_t)0ULL);
v___x_2624_ = lean_usize_of_nat(v___x_2621_);
v___x_2625_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__2(v_val_2571_, v___x_2623_, v___x_2624_);
if (v___x_2625_ == 0)
{
goto v___jp_2616_;
}
else
{
lean_dec_ref(v___f_2565_);
lean_dec(v_goal_2552_);
return v___x_2569_;
}
}
}
v___jp_2572_:
{
if (v_includeStar_2554_ == 0)
{
lean_dec_ref(v___f_2565_);
lean_dec(v_goal_2552_);
return v___x_2569_;
}
else
{
lean_object* v___x_2573_; 
lean_inc_ref(v_a_2570_);
lean_dec_ref_known(v___x_2569_, 1);
v___x_2573_ = l_Lean_Meta_LibrarySearch_getStarLemmas(v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2607_; 
v_a_2574_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2607_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2607_ == 0)
{
v___x_2576_ = v___x_2573_;
v_isShared_2577_ = v_isSharedCheck_2607_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_dec(v___x_2573_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2607_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; uint8_t v___x_2580_; 
v___x_2578_ = lean_array_get_size(v_a_2574_);
v___x_2579_ = lean_unsigned_to_nat(0u);
v___x_2580_ = lean_nat_dec_eq(v___x_2578_, v___x_2579_);
if (v___x_2580_ == 0)
{
lean_object* v___x_2581_; lean_object* v_mctx_2582_; size_t v_sz_2583_; size_t v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
lean_inc(v_val_2571_);
lean_del_object(v___x_2576_);
lean_dec_ref_known(v_a_2570_, 1);
v___x_2581_ = lean_st_ref_get(v___y_2556_);
v_mctx_2582_ = lean_ctor_get(v___x_2581_, 0);
lean_inc_ref(v_mctx_2582_);
lean_dec(v___x_2581_);
v_sz_2583_ = lean_array_size(v_a_2574_);
v___x_2584_ = ((size_t)0ULL);
v___x_2585_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__1(v_goal_2552_, v_mctx_2582_, v_sz_2583_, v___x_2584_, v_a_2574_);
v___x_2586_ = l_Lean_Meta_LibrarySearch_tryOnEach(v___f_2565_, v___x_2585_, v_collectAll_2553_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
lean_dec_ref(v___x_2585_);
if (lean_obj_tag(v___x_2586_) == 0)
{
lean_object* v_a_2587_; lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2603_; 
v_a_2587_ = lean_ctor_get(v___x_2586_, 0);
v_isSharedCheck_2603_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2603_ == 0)
{
v___x_2589_ = v___x_2586_;
v_isShared_2590_ = v_isSharedCheck_2603_;
goto v_resetjp_2588_;
}
else
{
lean_inc(v_a_2587_);
lean_dec(v___x_2586_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2603_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
if (lean_obj_tag(v_a_2587_) == 0)
{
lean_del_object(v___x_2589_);
lean_dec(v_val_2571_);
goto v___jp_2560_;
}
else
{
lean_object* v_val_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2602_; 
v_val_2591_ = lean_ctor_get(v_a_2587_, 0);
v_isSharedCheck_2602_ = !lean_is_exclusive(v_a_2587_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2593_ = v_a_2587_;
v_isShared_2594_ = v_isSharedCheck_2602_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_val_2591_);
lean_dec(v_a_2587_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2602_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2595_; lean_object* v___x_2597_; 
v___x_2595_ = l_Array_append___redArg(v_val_2571_, v_val_2591_);
lean_dec(v_val_2591_);
if (v_isShared_2594_ == 0)
{
lean_ctor_set(v___x_2593_, 0, v___x_2595_);
v___x_2597_ = v___x_2593_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v___x_2595_);
v___x_2597_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
lean_object* v___x_2599_; 
if (v_isShared_2590_ == 0)
{
lean_ctor_set(v___x_2589_, 0, v___x_2597_);
v___x_2599_ = v___x_2589_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v___x_2597_);
v___x_2599_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
return v___x_2599_;
}
}
}
}
}
}
else
{
lean_dec(v_val_2571_);
return v___x_2586_;
}
}
else
{
lean_object* v___x_2605_; 
lean_dec(v_a_2574_);
lean_dec_ref(v___f_2565_);
lean_dec(v_goal_2552_);
if (v_isShared_2577_ == 0)
{
lean_ctor_set(v___x_2576_, 0, v_a_2570_);
v___x_2605_ = v___x_2576_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v_a_2570_);
v___x_2605_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
return v___x_2605_;
}
}
}
}
else
{
lean_object* v_a_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2615_; 
lean_dec_ref_known(v_a_2570_, 1);
lean_dec_ref(v___f_2565_);
lean_dec(v_goal_2552_);
v_a_2608_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2615_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2610_ = v___x_2573_;
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_a_2608_);
lean_dec(v___x_2573_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v___x_2613_; 
if (v_isShared_2611_ == 0)
{
v___x_2613_ = v___x_2610_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v_a_2608_);
v___x_2613_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
return v___x_2613_;
}
}
}
}
}
v___jp_2616_:
{
if (v_collectAll_2553_ == 0)
{
lean_object* v___x_2617_; lean_object* v___x_2618_; uint8_t v___x_2619_; 
v___x_2617_ = lean_array_get_size(v_val_2571_);
v___x_2618_ = lean_unsigned_to_nat(0u);
v___x_2619_ = lean_nat_dec_eq(v___x_2617_, v___x_2618_);
if (v___x_2619_ == 0)
{
lean_dec_ref(v___f_2565_);
lean_dec(v_goal_2552_);
return v___x_2569_;
}
else
{
goto v___jp_2572_;
}
}
else
{
goto v___jp_2572_;
}
}
}
}
else
{
lean_dec_ref(v___f_2565_);
lean_dec(v_goal_2552_);
return v___x_2569_;
}
}
else
{
lean_object* v_a_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2633_; 
lean_dec_ref(v___f_2565_);
lean_dec(v_goal_2552_);
v_a_2626_ = lean_ctor_get(v___x_2567_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2628_ = v___x_2567_;
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_a_2626_);
lean_dec(v___x_2567_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2631_; 
if (v_isShared_2629_ == 0)
{
v___x_2631_ = v___x_2628_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v_a_2626_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
return v___x_2631_;
}
}
}
}
else
{
lean_object* v_a_2634_; lean_object* v___x_2636_; uint8_t v_isShared_2637_; uint8_t v_isSharedCheck_2641_; 
lean_dec(v_goal_2552_);
lean_dec_ref(v_allowFailure_2551_);
lean_dec_ref(v_tactic_2550_);
lean_dec_ref(v___x_2549_);
v_a_2634_ = lean_ctor_get(v___x_2563_, 0);
v_isSharedCheck_2641_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2641_ == 0)
{
v___x_2636_ = v___x_2563_;
v_isShared_2637_ = v_isSharedCheck_2641_;
goto v_resetjp_2635_;
}
else
{
lean_inc(v_a_2634_);
lean_dec(v___x_2563_);
v___x_2636_ = lean_box(0);
v_isShared_2637_ = v_isSharedCheck_2641_;
goto v_resetjp_2635_;
}
v_resetjp_2635_:
{
lean_object* v___x_2639_; 
if (v_isShared_2637_ == 0)
{
v___x_2639_ = v___x_2636_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2640_; 
v_reuseFailAlloc_2640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2640_, 0, v_a_2634_);
v___x_2639_ = v_reuseFailAlloc_2640_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
return v___x_2639_;
}
}
}
v___jp_2560_:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; 
v___x_2561_ = lean_box(0);
v___x_2562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2562_, 0, v___x_2561_);
return v___x_2562_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___boxed(lean_object* v_leavePercentHeartbeats_2642_, lean_object* v___x_2643_, lean_object* v_tactic_2644_, lean_object* v_allowFailure_2645_, lean_object* v_goal_2646_, lean_object* v_collectAll_2647_, lean_object* v_includeStar_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_){
_start:
{
uint8_t v_collectAll_boxed_2654_; uint8_t v_includeStar_boxed_2655_; lean_object* v_res_2656_; 
v_collectAll_boxed_2654_ = lean_unbox(v_collectAll_2647_);
v_includeStar_boxed_2655_ = lean_unbox(v_includeStar_2648_);
v_res_2656_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1(v_leavePercentHeartbeats_2642_, v___x_2643_, v_tactic_2644_, v_allowFailure_2645_, v_goal_2646_, v_collectAll_boxed_2654_, v_includeStar_boxed_2655_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_);
lean_dec(v___y_2652_);
lean_dec_ref(v___y_2651_);
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v_leavePercentHeartbeats_2642_);
return v_res_2656_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__2(lean_object* v_goal_2657_, lean_object* v_x_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_){
_start:
{
lean_object* v___x_2664_; 
v___x_2664_ = l_Lean_MVarId_getType(v_goal_2657_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_);
if (lean_obj_tag(v___x_2664_) == 0)
{
lean_object* v_a_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2673_; 
v_a_2665_ = lean_ctor_get(v___x_2664_, 0);
v_isSharedCheck_2673_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2673_ == 0)
{
v___x_2667_ = v___x_2664_;
v_isShared_2668_ = v_isSharedCheck_2673_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_a_2665_);
lean_dec(v___x_2664_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2673_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
lean_object* v___x_2669_; lean_object* v___x_2671_; 
v___x_2669_ = l_Lean_MessageData_ofExpr(v_a_2665_);
if (v_isShared_2668_ == 0)
{
lean_ctor_set(v___x_2667_, 0, v___x_2669_);
v___x_2671_ = v___x_2667_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v___x_2669_);
v___x_2671_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
return v___x_2671_;
}
}
}
else
{
lean_object* v_a_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2681_; 
v_a_2674_ = lean_ctor_get(v___x_2664_, 0);
v_isSharedCheck_2681_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2676_ = v___x_2664_;
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_a_2674_);
lean_dec(v___x_2664_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v___x_2679_; 
if (v_isShared_2677_ == 0)
{
v___x_2679_ = v___x_2676_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v_a_2674_);
v___x_2679_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
return v___x_2679_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__2___boxed(lean_object* v_goal_2682_, lean_object* v_x_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_){
_start:
{
lean_object* v_res_2689_; 
v_res_2689_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__2(v_goal_2682_, v_x_2683_, v___y_2684_, v___y_2685_, v___y_2686_, v___y_2687_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
lean_dec(v___y_2685_);
lean_dec_ref(v___y_2684_);
lean_dec_ref(v_x_2683_);
return v_res_2689_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4_spec__4(lean_object* v_e_2690_){
_start:
{
if (lean_obj_tag(v_e_2690_) == 0)
{
uint8_t v___x_2691_; 
v___x_2691_ = 2;
return v___x_2691_;
}
else
{
lean_object* v_a_2692_; 
v_a_2692_ = lean_ctor_get(v_e_2690_, 0);
if (lean_obj_tag(v_a_2692_) == 0)
{
uint8_t v___x_2693_; 
v___x_2693_ = 1;
return v___x_2693_;
}
else
{
uint8_t v___x_2694_; 
v___x_2694_ = 0;
return v___x_2694_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4_spec__4___boxed(lean_object* v_e_2695_){
_start:
{
uint8_t v_res_2696_; lean_object* v_r_2697_; 
v_res_2696_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4_spec__4(v_e_2695_);
lean_dec_ref(v_e_2695_);
v_r_2697_ = lean_box(v_res_2696_);
return v_r_2697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4(lean_object* v_cls_2698_, uint8_t v_collapsed_2699_, lean_object* v_tag_2700_, lean_object* v_opts_2701_, uint8_t v_clsEnabled_2702_, lean_object* v_oldTraces_2703_, lean_object* v_msg_2704_, lean_object* v_resStartStop_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_){
_start:
{
lean_object* v_fst_2711_; lean_object* v_snd_2712_; lean_object* v___y_2714_; lean_object* v___y_2715_; lean_object* v_data_2716_; lean_object* v_fst_2727_; lean_object* v_snd_2728_; lean_object* v___x_2729_; uint8_t v___x_2730_; lean_object* v___y_2732_; lean_object* v_a_2733_; uint8_t v___y_2748_; double v___y_2780_; 
v_fst_2711_ = lean_ctor_get(v_resStartStop_2705_, 0);
lean_inc(v_fst_2711_);
v_snd_2712_ = lean_ctor_get(v_resStartStop_2705_, 1);
lean_inc(v_snd_2712_);
lean_dec_ref(v_resStartStop_2705_);
v_fst_2727_ = lean_ctor_get(v_snd_2712_, 0);
lean_inc(v_fst_2727_);
v_snd_2728_ = lean_ctor_get(v_snd_2712_, 1);
lean_inc(v_snd_2728_);
lean_dec(v_snd_2712_);
v___x_2729_ = l_Lean_trace_profiler;
v___x_2730_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_opts_2701_, v___x_2729_);
if (v___x_2730_ == 0)
{
v___y_2748_ = v___x_2730_;
goto v___jp_2747_;
}
else
{
lean_object* v___x_2785_; uint8_t v___x_2786_; 
v___x_2785_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2786_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_opts_2701_, v___x_2785_);
if (v___x_2786_ == 0)
{
lean_object* v___x_2787_; lean_object* v___x_2788_; double v___x_2789_; double v___x_2790_; double v___x_2791_; 
v___x_2787_ = l_Lean_trace_profiler_threshold;
v___x_2788_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5(v_opts_2701_, v___x_2787_);
v___x_2789_ = lean_float_of_nat(v___x_2788_);
v___x_2790_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3);
v___x_2791_ = lean_float_div(v___x_2789_, v___x_2790_);
v___y_2780_ = v___x_2791_;
goto v___jp_2779_;
}
else
{
lean_object* v___x_2792_; lean_object* v___x_2793_; double v___x_2794_; 
v___x_2792_ = l_Lean_trace_profiler_threshold;
v___x_2793_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5(v_opts_2701_, v___x_2792_);
v___x_2794_ = lean_float_of_nat(v___x_2793_);
v___y_2780_ = v___x_2794_;
goto v___jp_2779_;
}
}
v___jp_2713_:
{
lean_object* v___x_2717_; 
lean_inc(v___y_2714_);
v___x_2717_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2(v_oldTraces_2703_, v_data_2716_, v___y_2714_, v___y_2715_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
if (lean_obj_tag(v___x_2717_) == 0)
{
lean_object* v___x_2718_; 
lean_dec_ref_known(v___x_2717_, 1);
v___x_2718_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(v_fst_2711_);
return v___x_2718_;
}
else
{
lean_object* v_a_2719_; lean_object* v___x_2721_; uint8_t v_isShared_2722_; uint8_t v_isSharedCheck_2726_; 
lean_dec(v_fst_2711_);
v_a_2719_ = lean_ctor_get(v___x_2717_, 0);
v_isSharedCheck_2726_ = !lean_is_exclusive(v___x_2717_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2721_ = v___x_2717_;
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
else
{
lean_inc(v_a_2719_);
lean_dec(v___x_2717_);
v___x_2721_ = lean_box(0);
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
v_resetjp_2720_:
{
lean_object* v___x_2724_; 
if (v_isShared_2722_ == 0)
{
v___x_2724_ = v___x_2721_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v_a_2719_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
return v___x_2724_;
}
}
}
}
v___jp_2731_:
{
uint8_t v_result_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; double v___x_2737_; lean_object* v_data_2738_; 
v_result_2734_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4_spec__4(v_fst_2711_);
v___x_2735_ = lean_box(v_result_2734_);
v___x_2736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2736_, 0, v___x_2735_);
v___x_2737_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0);
lean_inc_ref(v_tag_2700_);
lean_inc_ref(v___x_2736_);
lean_inc(v_cls_2698_);
v_data_2738_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2738_, 0, v_cls_2698_);
lean_ctor_set(v_data_2738_, 1, v___x_2736_);
lean_ctor_set(v_data_2738_, 2, v_tag_2700_);
lean_ctor_set_float(v_data_2738_, sizeof(void*)*3, v___x_2737_);
lean_ctor_set_float(v_data_2738_, sizeof(void*)*3 + 8, v___x_2737_);
lean_ctor_set_uint8(v_data_2738_, sizeof(void*)*3 + 16, v_collapsed_2699_);
if (v___x_2730_ == 0)
{
lean_dec_ref_known(v___x_2736_, 1);
lean_dec(v_snd_2728_);
lean_dec(v_fst_2727_);
lean_dec_ref(v_tag_2700_);
lean_dec(v_cls_2698_);
v___y_2714_ = v___y_2732_;
v___y_2715_ = v_a_2733_;
v_data_2716_ = v_data_2738_;
goto v___jp_2713_;
}
else
{
lean_object* v_data_2739_; double v___x_2740_; double v___x_2741_; 
lean_dec_ref_known(v_data_2738_, 3);
v_data_2739_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2739_, 0, v_cls_2698_);
lean_ctor_set(v_data_2739_, 1, v___x_2736_);
lean_ctor_set(v_data_2739_, 2, v_tag_2700_);
v___x_2740_ = lean_unbox_float(v_fst_2727_);
lean_dec(v_fst_2727_);
lean_ctor_set_float(v_data_2739_, sizeof(void*)*3, v___x_2740_);
v___x_2741_ = lean_unbox_float(v_snd_2728_);
lean_dec(v_snd_2728_);
lean_ctor_set_float(v_data_2739_, sizeof(void*)*3 + 8, v___x_2741_);
lean_ctor_set_uint8(v_data_2739_, sizeof(void*)*3 + 16, v_collapsed_2699_);
v___y_2714_ = v___y_2732_;
v___y_2715_ = v_a_2733_;
v_data_2716_ = v_data_2739_;
goto v___jp_2713_;
}
}
v___jp_2742_:
{
lean_object* v_ref_2743_; lean_object* v___x_2744_; 
v_ref_2743_ = lean_ctor_get(v___y_2708_, 2);
lean_inc(v___y_2709_);
lean_inc_ref(v___y_2708_);
lean_inc(v___y_2707_);
lean_inc_ref(v___y_2706_);
lean_inc(v_fst_2711_);
v___x_2744_ = lean_apply_6(v_msg_2704_, v_fst_2711_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_, lean_box(0));
if (lean_obj_tag(v___x_2744_) == 0)
{
lean_object* v_a_2745_; 
v_a_2745_ = lean_ctor_get(v___x_2744_, 0);
lean_inc(v_a_2745_);
lean_dec_ref_known(v___x_2744_, 1);
v___y_2732_ = v_ref_2743_;
v_a_2733_ = v_a_2745_;
goto v___jp_2731_;
}
else
{
lean_object* v___x_2746_; 
lean_dec_ref_known(v___x_2744_, 1);
v___x_2746_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2);
v___y_2732_ = v_ref_2743_;
v_a_2733_ = v___x_2746_;
goto v___jp_2731_;
}
}
v___jp_2747_:
{
if (v_clsEnabled_2702_ == 0)
{
if (v___y_2748_ == 0)
{
lean_object* v___x_2749_; lean_object* v_traceState_2750_; lean_object* v_env_2751_; lean_object* v_nextMacroScope_2752_; lean_object* v_ngen_2753_; lean_object* v_auxDeclNGen_2754_; lean_object* v_cache_2755_; lean_object* v_recordedDeps_2756_; lean_object* v_messages_2757_; lean_object* v_infoState_2758_; lean_object* v_snapshotTasks_2759_; lean_object* v___x_2761_; uint8_t v_isShared_2762_; uint8_t v_isSharedCheck_2778_; 
lean_dec(v_snd_2728_);
lean_dec(v_fst_2727_);
lean_dec_ref(v_msg_2704_);
lean_dec_ref(v_tag_2700_);
lean_dec(v_cls_2698_);
v___x_2749_ = lean_st_ref_take(v___y_2709_);
v_traceState_2750_ = lean_ctor_get(v___x_2749_, 4);
v_env_2751_ = lean_ctor_get(v___x_2749_, 0);
v_nextMacroScope_2752_ = lean_ctor_get(v___x_2749_, 1);
v_ngen_2753_ = lean_ctor_get(v___x_2749_, 2);
v_auxDeclNGen_2754_ = lean_ctor_get(v___x_2749_, 3);
v_cache_2755_ = lean_ctor_get(v___x_2749_, 5);
v_recordedDeps_2756_ = lean_ctor_get(v___x_2749_, 6);
v_messages_2757_ = lean_ctor_get(v___x_2749_, 7);
v_infoState_2758_ = lean_ctor_get(v___x_2749_, 8);
v_snapshotTasks_2759_ = lean_ctor_get(v___x_2749_, 9);
v_isSharedCheck_2778_ = !lean_is_exclusive(v___x_2749_);
if (v_isSharedCheck_2778_ == 0)
{
v___x_2761_ = v___x_2749_;
v_isShared_2762_ = v_isSharedCheck_2778_;
goto v_resetjp_2760_;
}
else
{
lean_inc(v_snapshotTasks_2759_);
lean_inc(v_infoState_2758_);
lean_inc(v_messages_2757_);
lean_inc(v_recordedDeps_2756_);
lean_inc(v_cache_2755_);
lean_inc(v_traceState_2750_);
lean_inc(v_auxDeclNGen_2754_);
lean_inc(v_ngen_2753_);
lean_inc(v_nextMacroScope_2752_);
lean_inc(v_env_2751_);
lean_dec(v___x_2749_);
v___x_2761_ = lean_box(0);
v_isShared_2762_ = v_isSharedCheck_2778_;
goto v_resetjp_2760_;
}
v_resetjp_2760_:
{
uint64_t v_tid_2763_; lean_object* v_traces_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2777_; 
v_tid_2763_ = lean_ctor_get_uint64(v_traceState_2750_, sizeof(void*)*1);
v_traces_2764_ = lean_ctor_get(v_traceState_2750_, 0);
v_isSharedCheck_2777_ = !lean_is_exclusive(v_traceState_2750_);
if (v_isSharedCheck_2777_ == 0)
{
v___x_2766_ = v_traceState_2750_;
v_isShared_2767_ = v_isSharedCheck_2777_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_traces_2764_);
lean_dec(v_traceState_2750_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2777_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2768_; lean_object* v___x_2770_; 
v___x_2768_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2703_, v_traces_2764_);
lean_dec_ref(v_traces_2764_);
if (v_isShared_2767_ == 0)
{
lean_ctor_set(v___x_2766_, 0, v___x_2768_);
v___x_2770_ = v___x_2766_;
goto v_reusejp_2769_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v___x_2768_);
lean_ctor_set_uint64(v_reuseFailAlloc_2776_, sizeof(void*)*1, v_tid_2763_);
v___x_2770_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2769_;
}
v_reusejp_2769_:
{
lean_object* v___x_2772_; 
if (v_isShared_2762_ == 0)
{
lean_ctor_set(v___x_2761_, 4, v___x_2770_);
v___x_2772_ = v___x_2761_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2775_, 0, v_env_2751_);
lean_ctor_set(v_reuseFailAlloc_2775_, 1, v_nextMacroScope_2752_);
lean_ctor_set(v_reuseFailAlloc_2775_, 2, v_ngen_2753_);
lean_ctor_set(v_reuseFailAlloc_2775_, 3, v_auxDeclNGen_2754_);
lean_ctor_set(v_reuseFailAlloc_2775_, 4, v___x_2770_);
lean_ctor_set(v_reuseFailAlloc_2775_, 5, v_cache_2755_);
lean_ctor_set(v_reuseFailAlloc_2775_, 6, v_recordedDeps_2756_);
lean_ctor_set(v_reuseFailAlloc_2775_, 7, v_messages_2757_);
lean_ctor_set(v_reuseFailAlloc_2775_, 8, v_infoState_2758_);
lean_ctor_set(v_reuseFailAlloc_2775_, 9, v_snapshotTasks_2759_);
v___x_2772_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2773_ = lean_st_ref_put(v___y_2709_, v___x_2772_);
v___x_2774_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(v_fst_2711_);
return v___x_2774_;
}
}
}
}
}
else
{
goto v___jp_2742_;
}
}
else
{
goto v___jp_2742_;
}
}
v___jp_2779_:
{
double v___x_2781_; double v___x_2782_; double v___x_2783_; uint8_t v___x_2784_; 
v___x_2781_ = lean_unbox_float(v_snd_2728_);
v___x_2782_ = lean_unbox_float(v_fst_2727_);
v___x_2783_ = lean_float_sub(v___x_2781_, v___x_2782_);
v___x_2784_ = lean_float_decLt(v___y_2780_, v___x_2783_);
v___y_2748_ = v___x_2784_;
goto v___jp_2747_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4___boxed(lean_object* v_cls_2795_, lean_object* v_collapsed_2796_, lean_object* v_tag_2797_, lean_object* v_opts_2798_, lean_object* v_clsEnabled_2799_, lean_object* v_oldTraces_2800_, lean_object* v_msg_2801_, lean_object* v_resStartStop_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_){
_start:
{
uint8_t v_collapsed_boxed_2808_; uint8_t v_clsEnabled_boxed_2809_; lean_object* v_res_2810_; 
v_collapsed_boxed_2808_ = lean_unbox(v_collapsed_2796_);
v_clsEnabled_boxed_2809_ = lean_unbox(v_clsEnabled_2799_);
v_res_2810_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4(v_cls_2795_, v_collapsed_boxed_2808_, v_tag_2797_, v_opts_2798_, v_clsEnabled_boxed_2809_, v_oldTraces_2800_, v_msg_2801_, v_resStartStop_2802_, v___y_2803_, v___y_2804_, v___y_2805_, v___y_2806_);
lean_dec(v___y_2806_);
lean_dec_ref(v___y_2805_);
lean_dec(v___y_2804_);
lean_dec_ref(v___y_2803_);
lean_dec_ref(v_opts_2798_);
return v_res_2810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27(lean_object* v_goal_2814_, lean_object* v_tactic_2815_, lean_object* v_allowFailure_2816_, lean_object* v_leavePercentHeartbeats_2817_, uint8_t v_includeStar_2818_, uint8_t v_collectAll_2819_, lean_object* v_a_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_, lean_object* v_a_2823_){
_start:
{
lean_object* v_toCold_2825_; lean_object* v_options_2826_; lean_object* v_inheritedTraceOptions_2827_; uint8_t v_hasTrace_2828_; lean_object* v___x_2829_; 
v_toCold_2825_ = lean_ctor_get(v_a_2822_, 0);
v_options_2826_ = lean_ctor_get(v_toCold_2825_, 2);
v_inheritedTraceOptions_2827_ = lean_ctor_get(v_toCold_2825_, 11);
v_hasTrace_2828_ = lean_ctor_get_uint8(v_options_2826_, sizeof(void*)*1);
v___x_2829_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
if (v_hasTrace_2828_ == 0)
{
lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___f_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; 
v___x_2830_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_2822_);
v___x_2831_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___closed__0));
v___x_2832_ = lean_box(v_collectAll_2819_);
v___x_2833_ = lean_box(v_includeStar_2818_);
v___f_2834_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___boxed), 12, 7);
lean_closure_set(v___f_2834_, 0, v_leavePercentHeartbeats_2817_);
lean_closure_set(v___f_2834_, 1, v___x_2831_);
lean_closure_set(v___f_2834_, 2, v_tactic_2815_);
lean_closure_set(v___f_2834_, 3, v_allowFailure_2816_);
lean_closure_set(v___f_2834_, 4, v_goal_2814_);
lean_closure_set(v___f_2834_, 5, v___x_2832_);
lean_closure_set(v___f_2834_, 6, v___x_2833_);
v___x_2835_ = lean_box(0);
v___x_2836_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(v___x_2829_, v___x_2830_, v___f_2834_, v___x_2835_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_);
lean_dec_ref(v___x_2830_);
return v___x_2836_;
}
else
{
lean_object* v___f_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; uint8_t v___x_2841_; lean_object* v___y_2843_; lean_object* v___y_2844_; lean_object* v_a_2845_; lean_object* v___y_2858_; lean_object* v___y_2859_; lean_object* v_a_2860_; 
lean_inc(v_goal_2814_);
v___f_2837_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__2___boxed), 7, 1);
lean_closure_set(v___f_2837_, 0, v_goal_2814_);
v___x_2838_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_2839_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__4));
v___x_2840_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2);
v___x_2841_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2827_, v_options_2826_, v___x_2840_);
if (v___x_2841_ == 0)
{
lean_object* v___x_2924_; uint8_t v___x_2925_; 
v___x_2924_ = l_Lean_trace_profiler;
v___x_2925_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_options_2826_, v___x_2924_);
if (v___x_2925_ == 0)
{
lean_object* v___x_2926_; uint8_t v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___f_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; 
lean_dec_ref(v___f_2837_);
v___x_2926_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_2822_);
v___x_2927_ = 0;
v___x_2928_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_2928_, 0, v___x_2927_);
lean_ctor_set_uint8(v___x_2928_, 1, v_hasTrace_2828_);
lean_ctor_set_uint8(v___x_2928_, 2, v_hasTrace_2828_);
lean_ctor_set_uint8(v___x_2928_, 3, v_hasTrace_2828_);
v___x_2929_ = lean_box(v_collectAll_2819_);
v___x_2930_ = lean_box(v_includeStar_2818_);
v___f_2931_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___boxed), 12, 7);
lean_closure_set(v___f_2931_, 0, v_leavePercentHeartbeats_2817_);
lean_closure_set(v___f_2931_, 1, v___x_2928_);
lean_closure_set(v___f_2931_, 2, v_tactic_2815_);
lean_closure_set(v___f_2931_, 3, v_allowFailure_2816_);
lean_closure_set(v___f_2931_, 4, v_goal_2814_);
lean_closure_set(v___f_2931_, 5, v___x_2929_);
lean_closure_set(v___f_2931_, 6, v___x_2930_);
v___x_2932_ = lean_box(0);
v___x_2933_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(v___x_2829_, v___x_2926_, v___f_2931_, v___x_2932_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_);
lean_dec_ref(v___x_2926_);
return v___x_2933_;
}
else
{
goto v___jp_2869_;
}
}
else
{
goto v___jp_2869_;
}
v___jp_2842_:
{
lean_object* v___x_2846_; double v___x_2847_; double v___x_2848_; double v___x_2849_; double v___x_2850_; double v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; 
v___x_2846_ = lean_io_mono_nanos_now();
v___x_2847_ = lean_float_of_nat(v___y_2844_);
v___x_2848_ = lean_float_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3);
v___x_2849_ = lean_float_div(v___x_2847_, v___x_2848_);
v___x_2850_ = lean_float_of_nat(v___x_2846_);
v___x_2851_ = lean_float_div(v___x_2850_, v___x_2848_);
v___x_2852_ = lean_box_float(v___x_2849_);
v___x_2853_ = lean_box_float(v___x_2851_);
v___x_2854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2854_, 0, v___x_2852_);
lean_ctor_set(v___x_2854_, 1, v___x_2853_);
v___x_2855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2855_, 0, v_a_2845_);
lean_ctor_set(v___x_2855_, 1, v___x_2854_);
v___x_2856_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4(v___x_2838_, v_hasTrace_2828_, v___x_2839_, v_options_2826_, v___x_2841_, v___y_2843_, v___f_2837_, v___x_2855_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_);
return v___x_2856_;
}
v___jp_2857_:
{
lean_object* v___x_2861_; double v___x_2862_; double v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; 
v___x_2861_ = lean_io_get_num_heartbeats();
v___x_2862_ = lean_float_of_nat(v___y_2859_);
v___x_2863_ = lean_float_of_nat(v___x_2861_);
v___x_2864_ = lean_box_float(v___x_2862_);
v___x_2865_ = lean_box_float(v___x_2863_);
v___x_2866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2864_);
lean_ctor_set(v___x_2866_, 1, v___x_2865_);
v___x_2867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2867_, 0, v_a_2860_);
lean_ctor_set(v___x_2867_, 1, v___x_2866_);
v___x_2868_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4(v___x_2838_, v_hasTrace_2828_, v___x_2839_, v_options_2826_, v___x_2841_, v___y_2858_, v___f_2837_, v___x_2867_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_);
return v___x_2868_;
}
v___jp_2869_:
{
lean_object* v___x_2870_; lean_object* v_a_2871_; lean_object* v___x_2872_; uint8_t v___x_2873_; 
v___x_2870_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg(v_a_2823_);
v_a_2871_ = lean_ctor_get(v___x_2870_, 0);
lean_inc(v_a_2871_);
lean_dec_ref(v___x_2870_);
v___x_2872_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2873_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_options_2826_, v___x_2872_);
if (v___x_2873_ == 0)
{
lean_object* v___x_2874_; lean_object* v___x_2875_; uint8_t v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___f_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; 
v___x_2874_ = lean_io_mono_nanos_now();
v___x_2875_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_2822_);
v___x_2876_ = 0;
v___x_2877_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_2877_, 0, v___x_2876_);
lean_ctor_set_uint8(v___x_2877_, 1, v_hasTrace_2828_);
lean_ctor_set_uint8(v___x_2877_, 2, v_hasTrace_2828_);
lean_ctor_set_uint8(v___x_2877_, 3, v_hasTrace_2828_);
v___x_2878_ = lean_box(v_collectAll_2819_);
v___x_2879_ = lean_box(v_includeStar_2818_);
v___f_2880_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___boxed), 12, 7);
lean_closure_set(v___f_2880_, 0, v_leavePercentHeartbeats_2817_);
lean_closure_set(v___f_2880_, 1, v___x_2877_);
lean_closure_set(v___f_2880_, 2, v_tactic_2815_);
lean_closure_set(v___f_2880_, 3, v_allowFailure_2816_);
lean_closure_set(v___f_2880_, 4, v_goal_2814_);
lean_closure_set(v___f_2880_, 5, v___x_2878_);
lean_closure_set(v___f_2880_, 6, v___x_2879_);
v___x_2881_ = lean_box(0);
v___x_2882_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(v___x_2829_, v___x_2875_, v___f_2880_, v___x_2881_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_);
lean_dec_ref(v___x_2875_);
if (lean_obj_tag(v___x_2882_) == 0)
{
lean_object* v_a_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2890_; 
v_a_2883_ = lean_ctor_get(v___x_2882_, 0);
v_isSharedCheck_2890_ = !lean_is_exclusive(v___x_2882_);
if (v_isSharedCheck_2890_ == 0)
{
v___x_2885_ = v___x_2882_;
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_a_2883_);
lean_dec(v___x_2882_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
lean_object* v___x_2888_; 
if (v_isShared_2886_ == 0)
{
lean_ctor_set_tag(v___x_2885_, 1);
v___x_2888_ = v___x_2885_;
goto v_reusejp_2887_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v_a_2883_);
v___x_2888_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2887_;
}
v_reusejp_2887_:
{
v___y_2843_ = v_a_2871_;
v___y_2844_ = v___x_2874_;
v_a_2845_ = v___x_2888_;
goto v___jp_2842_;
}
}
}
else
{
lean_object* v_a_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2898_; 
v_a_2891_ = lean_ctor_get(v___x_2882_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v___x_2882_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2893_ = v___x_2882_;
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_a_2891_);
lean_dec(v___x_2882_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2896_; 
if (v_isShared_2894_ == 0)
{
lean_ctor_set_tag(v___x_2893_, 0);
v___x_2896_ = v___x_2893_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_a_2891_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
v___y_2843_ = v_a_2871_;
v___y_2844_ = v___x_2874_;
v_a_2845_ = v___x_2896_;
goto v___jp_2842_;
}
}
}
}
else
{
lean_object* v___x_2899_; lean_object* v___x_2900_; uint8_t v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___f_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
v___x_2899_ = lean_io_get_num_heartbeats();
v___x_2900_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_2822_);
v___x_2901_ = 0;
v___x_2902_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_2902_, 0, v___x_2901_);
lean_ctor_set_uint8(v___x_2902_, 1, v___x_2873_);
lean_ctor_set_uint8(v___x_2902_, 2, v___x_2873_);
lean_ctor_set_uint8(v___x_2902_, 3, v___x_2873_);
v___x_2903_ = lean_box(v_collectAll_2819_);
v___x_2904_ = lean_box(v_includeStar_2818_);
v___f_2905_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___boxed), 12, 7);
lean_closure_set(v___f_2905_, 0, v_leavePercentHeartbeats_2817_);
lean_closure_set(v___f_2905_, 1, v___x_2902_);
lean_closure_set(v___f_2905_, 2, v_tactic_2815_);
lean_closure_set(v___f_2905_, 3, v_allowFailure_2816_);
lean_closure_set(v___f_2905_, 4, v_goal_2814_);
lean_closure_set(v___f_2905_, 5, v___x_2903_);
lean_closure_set(v___f_2905_, 6, v___x_2904_);
v___x_2906_ = lean_box(0);
v___x_2907_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(v___x_2829_, v___x_2900_, v___f_2905_, v___x_2906_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_);
lean_dec_ref(v___x_2900_);
if (lean_obj_tag(v___x_2907_) == 0)
{
lean_object* v_a_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2915_; 
v_a_2908_ = lean_ctor_get(v___x_2907_, 0);
v_isSharedCheck_2915_ = !lean_is_exclusive(v___x_2907_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2910_ = v___x_2907_;
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_a_2908_);
lean_dec(v___x_2907_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2913_; 
if (v_isShared_2911_ == 0)
{
lean_ctor_set_tag(v___x_2910_, 1);
v___x_2913_ = v___x_2910_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v_a_2908_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
v___y_2858_ = v_a_2871_;
v___y_2859_ = v___x_2899_;
v_a_2860_ = v___x_2913_;
goto v___jp_2857_;
}
}
}
else
{
lean_object* v_a_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2923_; 
v_a_2916_ = lean_ctor_get(v___x_2907_, 0);
v_isSharedCheck_2923_ = !lean_is_exclusive(v___x_2907_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2918_ = v___x_2907_;
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_a_2916_);
lean_dec(v___x_2907_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
lean_object* v___x_2921_; 
if (v_isShared_2919_ == 0)
{
lean_ctor_set_tag(v___x_2918_, 0);
v___x_2921_ = v___x_2918_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2922_; 
v_reuseFailAlloc_2922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2922_, 0, v_a_2916_);
v___x_2921_ = v_reuseFailAlloc_2922_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
v___y_2858_ = v_a_2871_;
v___y_2859_ = v___x_2899_;
v_a_2860_ = v___x_2921_;
goto v___jp_2857_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___boxed(lean_object* v_goal_2934_, lean_object* v_tactic_2935_, lean_object* v_allowFailure_2936_, lean_object* v_leavePercentHeartbeats_2937_, lean_object* v_includeStar_2938_, lean_object* v_collectAll_2939_, lean_object* v_a_2940_, lean_object* v_a_2941_, lean_object* v_a_2942_, lean_object* v_a_2943_, lean_object* v_a_2944_){
_start:
{
uint8_t v_includeStar_boxed_2945_; uint8_t v_collectAll_boxed_2946_; lean_object* v_res_2947_; 
v_includeStar_boxed_2945_ = lean_unbox(v_includeStar_2938_);
v_collectAll_boxed_2946_ = lean_unbox(v_collectAll_2939_);
v_res_2947_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27(v_goal_2934_, v_tactic_2935_, v_allowFailure_2936_, v_leavePercentHeartbeats_2937_, v_includeStar_boxed_2945_, v_collectAll_boxed_2946_, v_a_2940_, v_a_2941_, v_a_2942_, v_a_2943_);
lean_dec(v_a_2943_);
lean_dec_ref(v_a_2942_);
lean_dec(v_a_2941_);
lean_dec_ref(v_a_2940_);
return v_res_2947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearch(lean_object* v_goal_2948_, lean_object* v_tactic_2949_, lean_object* v_allowFailure_2950_, lean_object* v_leavePercentHeartbeats_2951_, uint8_t v_includeStar_2952_, uint8_t v_collectAll_2953_, lean_object* v_a_2954_, lean_object* v_a_2955_, lean_object* v_a_2956_, lean_object* v_a_2957_){
_start:
{
lean_object* v___x_2959_; 
v___x_2959_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27(v_goal_2948_, v_tactic_2949_, v_allowFailure_2950_, v_leavePercentHeartbeats_2951_, v_includeStar_2952_, v_collectAll_2953_, v_a_2954_, v_a_2955_, v_a_2956_, v_a_2957_);
return v___x_2959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearch___boxed(lean_object* v_goal_2960_, lean_object* v_tactic_2961_, lean_object* v_allowFailure_2962_, lean_object* v_leavePercentHeartbeats_2963_, lean_object* v_includeStar_2964_, lean_object* v_collectAll_2965_, lean_object* v_a_2966_, lean_object* v_a_2967_, lean_object* v_a_2968_, lean_object* v_a_2969_, lean_object* v_a_2970_){
_start:
{
uint8_t v_includeStar_boxed_2971_; uint8_t v_collectAll_boxed_2972_; lean_object* v_res_2973_; 
v_includeStar_boxed_2971_ = lean_unbox(v_includeStar_2964_);
v_collectAll_boxed_2972_ = lean_unbox(v_collectAll_2965_);
v_res_2973_ = l_Lean_Meta_LibrarySearch_librarySearch(v_goal_2960_, v_tactic_2961_, v_allowFailure_2962_, v_leavePercentHeartbeats_2963_, v_includeStar_boxed_2971_, v_collectAll_boxed_2972_, v_a_2966_, v_a_2967_, v_a_2968_, v_a_2969_);
lean_dec(v_a_2969_);
lean_dec_ref(v_a_2968_);
lean_dec(v_a_2967_);
lean_dec_ref(v_a_2966_);
return v_res_2973_;
}
}
lean_object* runtime_initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_SolveByElim(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Heartbeats(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Try(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_LibrarySearch(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_SolveByElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Heartbeats(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Try(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_LibrarySearch_instInhabitedDeclMod_default = _init_l_Lean_Meta_LibrarySearch_instInhabitedDeclMod_default();
l_Lean_Meta_LibrarySearch_instInhabitedDeclMod = _init_l_Lean_Meta_LibrarySearch_instInhabitedDeclMod();
res = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_858108106____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_ext = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_ext);
lean_dec_ref(res);
l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_constantsPerImportTask = _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_constantsPerImportTask();
lean_mark_persistent(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_constantsPerImportTask);
res = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_2955776588____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_starLemmasExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_starLemmasExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_abortSpeculationId = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_abortSpeculationId);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_LibrarySearch(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_SolveByElim(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Main(uint8_t builtin);
lean_object* initialize_Lean_Util_Heartbeats(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
lean_object* initialize_Init_Try(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_LibrarySearch(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_SolveByElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Heartbeats(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Try(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_LibrarySearch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_LibrarySearch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_LibrarySearch(builtin);
}
#ifdef __cplusplus
}
#endif
