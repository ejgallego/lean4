// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Prover.Cegar.Lemmas
// Imports: public import Lean.Meta.Tactic.BVDecide.Prover.Cegar.Basic import Lean.Meta.Tactic.BVDecide.Normalize import Lean.Meta.Tactic.Grind.Main
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_resetLemmas___redArg(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_getLemmas___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_TacticContext_preProcessContext(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessContext_new(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_io_get_num_heartbeats();
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_solved_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_solved_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_solved_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_solved_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_newHyps_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_newHyps_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_newHyps_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_newHyps_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bv_decide"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Failed to reify CEGAR lemma "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___boxed(lean_object**);
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__1___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Processing new lemmas"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__10(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__10___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__9___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___boxed(lean_object**);
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__0_value),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__7;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__8;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__0___boxed, .m_arity = 16, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__9 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__9_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4___boxed, .m_arity = 16, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__10 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__10_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__11 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__11_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__12_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__13 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__13_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__11_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__14_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__12_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__14_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__13_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__14 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__14_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__15 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__15_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__16 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__16_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__16_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__17 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__17_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__18;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__19;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_solved_elim___redArg(lean_object* v_solved_22_){
_start:
{
lean_inc(v_solved_22_);
return v_solved_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_solved_elim___redArg___boxed(lean_object* v_solved_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_solved_elim___redArg(v_solved_23_);
lean_dec(v_solved_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_solved_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_solved_28_){
_start:
{
lean_inc(v_solved_28_);
return v_solved_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_solved_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_solved_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_solved_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_solved_32_);
lean_dec(v_solved_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_newHyps_elim___redArg(lean_object* v_newHyps_35_){
_start:
{
lean_inc(v_newHyps_35_);
return v_newHyps_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_newHyps_elim___redArg___boxed(lean_object* v_newHyps_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_newHyps_elim___redArg(v_newHyps_36_);
lean_dec(v_newHyps_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_newHyps_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_newHyps_41_){
_start:
{
lean_inc(v_newHyps_41_);
return v_newHyps_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_newHyps_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_newHyps_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_newHyps_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_newHyps_45_);
lean_dec(v_newHyps_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_none_elim___redArg(lean_object* v_none_48_){
_start:
{
lean_inc(v_none_48_);
return v_none_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_none_elim___redArg___boxed(lean_object* v_none_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_none_elim___redArg(v_none_49_);
lean_dec(v_none_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_none_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_none_54_){
_start:
{
lean_inc(v_none_54_);
return v_none_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_none_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_none_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l_Lean_Meta_Tactic_BVDecide_ProcessHypResult_none_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_none_58_);
lean_dec(v_none_58_);
return v_res_60_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = lean_unsigned_to_nat(32u);
v___x_62_ = lean_mk_empty_array_with_capacity(v___x_61_);
v___x_63_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg___closed__1(void){
_start:
{
size_t v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_64_ = ((size_t)5ULL);
v___x_65_ = lean_unsigned_to_nat(0u);
v___x_66_ = lean_unsigned_to_nat(32u);
v___x_67_ = lean_mk_empty_array_with_capacity(v___x_66_);
v___x_68_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg___closed__0);
v___x_69_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
lean_ctor_set(v___x_69_, 2, v___x_65_);
lean_ctor_set(v___x_69_, 3, v___x_65_);
lean_ctor_set_usize(v___x_69_, 4, v___x_64_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg(lean_object* v___y_70_){
_start:
{
lean_object* v___x_72_; lean_object* v_traceState_73_; lean_object* v_traces_74_; lean_object* v___x_75_; lean_object* v_traceState_76_; lean_object* v_env_77_; lean_object* v_nextMacroScope_78_; lean_object* v_ngen_79_; lean_object* v_auxDeclNGen_80_; lean_object* v_cache_81_; lean_object* v_recordedDeps_82_; lean_object* v_messages_83_; lean_object* v_infoState_84_; lean_object* v_snapshotTasks_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_104_; 
v___x_72_ = lean_st_ref_get(v___y_70_);
v_traceState_73_ = lean_ctor_get(v___x_72_, 4);
lean_inc_ref(v_traceState_73_);
lean_dec(v___x_72_);
v_traces_74_ = lean_ctor_get(v_traceState_73_, 0);
lean_inc_ref(v_traces_74_);
lean_dec_ref(v_traceState_73_);
v___x_75_ = lean_st_ref_take(v___y_70_);
v_traceState_76_ = lean_ctor_get(v___x_75_, 4);
v_env_77_ = lean_ctor_get(v___x_75_, 0);
v_nextMacroScope_78_ = lean_ctor_get(v___x_75_, 1);
v_ngen_79_ = lean_ctor_get(v___x_75_, 2);
v_auxDeclNGen_80_ = lean_ctor_get(v___x_75_, 3);
v_cache_81_ = lean_ctor_get(v___x_75_, 5);
v_recordedDeps_82_ = lean_ctor_get(v___x_75_, 6);
v_messages_83_ = lean_ctor_get(v___x_75_, 7);
v_infoState_84_ = lean_ctor_get(v___x_75_, 8);
v_snapshotTasks_85_ = lean_ctor_get(v___x_75_, 9);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_104_ == 0)
{
v___x_87_ = v___x_75_;
v_isShared_88_ = v_isSharedCheck_104_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_snapshotTasks_85_);
lean_inc(v_infoState_84_);
lean_inc(v_messages_83_);
lean_inc(v_recordedDeps_82_);
lean_inc(v_cache_81_);
lean_inc(v_traceState_76_);
lean_inc(v_auxDeclNGen_80_);
lean_inc(v_ngen_79_);
lean_inc(v_nextMacroScope_78_);
lean_inc(v_env_77_);
lean_dec(v___x_75_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_104_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
uint64_t v_tid_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_102_; 
v_tid_89_ = lean_ctor_get_uint64(v_traceState_76_, sizeof(void*)*1);
v_isSharedCheck_102_ = !lean_is_exclusive(v_traceState_76_);
if (v_isSharedCheck_102_ == 0)
{
lean_object* v_unused_103_; 
v_unused_103_ = lean_ctor_get(v_traceState_76_, 0);
lean_dec(v_unused_103_);
v___x_91_ = v_traceState_76_;
v_isShared_92_ = v_isSharedCheck_102_;
goto v_resetjp_90_;
}
else
{
lean_dec(v_traceState_76_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_102_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_93_; lean_object* v___x_95_; 
v___x_93_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg___closed__1);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 0, v___x_93_);
v___x_95_ = v___x_91_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v___x_93_);
lean_ctor_set_uint64(v_reuseFailAlloc_101_, sizeof(void*)*1, v_tid_89_);
v___x_95_ = v_reuseFailAlloc_101_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
lean_object* v___x_97_; 
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 4, v___x_95_);
v___x_97_ = v___x_87_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_env_77_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v_nextMacroScope_78_);
lean_ctor_set(v_reuseFailAlloc_100_, 2, v_ngen_79_);
lean_ctor_set(v_reuseFailAlloc_100_, 3, v_auxDeclNGen_80_);
lean_ctor_set(v_reuseFailAlloc_100_, 4, v___x_95_);
lean_ctor_set(v_reuseFailAlloc_100_, 5, v_cache_81_);
lean_ctor_set(v_reuseFailAlloc_100_, 6, v_recordedDeps_82_);
lean_ctor_set(v_reuseFailAlloc_100_, 7, v_messages_83_);
lean_ctor_set(v_reuseFailAlloc_100_, 8, v_infoState_84_);
lean_ctor_set(v_reuseFailAlloc_100_, 9, v_snapshotTasks_85_);
v___x_97_ = v_reuseFailAlloc_100_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = lean_st_ref_put(v___y_70_, v___x_97_);
v___x_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_99_, 0, v_traces_74_);
return v___x_99_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg___boxed(lean_object* v___y_105_, lean_object* v___y_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg(v___y_105_);
lean_dec(v___y_105_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5(lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg(v___y_121_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___boxed(lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5(v___y_124_, v___y_125_, v___y_126_, v___y_127_, v___y_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
lean_dec(v___y_133_);
lean_dec_ref(v___y_132_);
lean_dec(v___y_131_);
lean_dec_ref(v___y_130_);
lean_dec(v___y_129_);
lean_dec(v___y_128_);
lean_dec_ref(v___y_127_);
lean_dec(v___y_126_);
lean_dec(v___y_125_);
lean_dec_ref(v___y_124_);
return v_res_139_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__6(lean_object* v_opts_140_, lean_object* v_opt_141_){
_start:
{
lean_object* v_name_142_; lean_object* v_defValue_143_; lean_object* v_map_144_; lean_object* v___x_145_; 
v_name_142_ = lean_ctor_get(v_opt_141_, 0);
v_defValue_143_ = lean_ctor_get(v_opt_141_, 1);
v_map_144_ = lean_ctor_get(v_opts_140_, 0);
v___x_145_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_144_, v_name_142_);
if (lean_obj_tag(v___x_145_) == 0)
{
uint8_t v___x_146_; 
v___x_146_ = lean_unbox(v_defValue_143_);
return v___x_146_;
}
else
{
lean_object* v_val_147_; 
v_val_147_ = lean_ctor_get(v___x_145_, 0);
lean_inc(v_val_147_);
lean_dec_ref_known(v___x_145_, 1);
if (lean_obj_tag(v_val_147_) == 1)
{
uint8_t v_v_148_; 
v_v_148_ = lean_ctor_get_uint8(v_val_147_, 0);
lean_dec_ref_known(v_val_147_, 0);
return v_v_148_;
}
else
{
uint8_t v___x_149_; 
lean_dec(v_val_147_);
v___x_149_ = lean_unbox(v_defValue_143_);
return v___x_149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__6___boxed(lean_object* v_opts_150_, lean_object* v_opt_151_){
_start:
{
uint8_t v_res_152_; lean_object* v_r_153_; 
v_res_152_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__6(v_opts_150_, v_opt_151_);
lean_dec_ref(v_opt_151_);
lean_dec_ref(v_opts_150_);
v_r_153_ = lean_box(v_res_152_);
return v_r_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__0(lean_object* v_00___154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
uint8_t v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_170_ = 2;
v___x_171_ = lean_box(v___x_170_);
v___x_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__0___boxed(lean_object* v_00___173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__0(v_00___173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_, v___y_180_, v___y_181_, v___y_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_184_);
lean_dec(v___y_183_);
lean_dec_ref(v___y_182_);
lean_dec(v___y_181_);
lean_dec_ref(v___y_180_);
lean_dec(v___y_179_);
lean_dec(v___y_178_);
lean_dec_ref(v___y_177_);
lean_dec(v___y_176_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__2___redArg(lean_object* v_as_190_, size_t v_i_191_, size_t v_stop_192_, lean_object* v_b_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
uint8_t v___x_201_; 
v___x_201_ = lean_usize_dec_eq(v_i_191_, v_stop_192_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_array_uget_borrowed(v_as_190_, v_i_191_);
lean_inc(v___x_202_);
v___x_203_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg(v_b_193_, v___x_202_, v___y_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_);
if (lean_obj_tag(v___x_203_) == 0)
{
lean_object* v_a_204_; size_t v___x_205_; size_t v___x_206_; 
v_a_204_ = lean_ctor_get(v___x_203_, 0);
lean_inc(v_a_204_);
lean_dec_ref_known(v___x_203_, 1);
v___x_205_ = ((size_t)1ULL);
v___x_206_ = lean_usize_add(v_i_191_, v___x_205_);
v_i_191_ = v___x_206_;
v_b_193_ = v_a_204_;
goto _start;
}
else
{
return v___x_203_;
}
}
else
{
lean_object* v___x_208_; 
v___x_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_208_, 0, v_b_193_);
return v___x_208_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__2___redArg___boxed(lean_object* v_as_209_, lean_object* v_i_210_, lean_object* v_stop_211_, lean_object* v_b_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_){
_start:
{
size_t v_i_boxed_220_; size_t v_stop_boxed_221_; lean_object* v_res_222_; 
v_i_boxed_220_ = lean_unbox_usize(v_i_210_);
lean_dec(v_i_210_);
v_stop_boxed_221_ = lean_unbox_usize(v_stop_211_);
lean_dec(v_stop_211_);
v_res_222_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__2___redArg(v_as_209_, v_i_boxed_220_, v_stop_boxed_221_, v_b_212_, v___y_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_);
lean_dec(v___y_218_);
lean_dec_ref(v___y_217_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
lean_dec_ref(v_as_209_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0_spec__0(lean_object* v_msgData_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_){
_start:
{
lean_object* v___x_229_; lean_object* v_env_230_; uint8_t v___x_231_; lean_object* v_env_232_; lean_object* v___x_233_; lean_object* v_toCold_234_; lean_object* v_mctx_235_; lean_object* v_lctx_236_; lean_object* v_options_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_229_ = lean_st_ref_get(v___y_227_);
v_env_230_ = lean_ctor_get(v___x_229_, 0);
lean_inc_ref(v_env_230_);
lean_dec(v___x_229_);
v___x_231_ = 0;
v_env_232_ = l_Lean_Environment_setRecordingDeps(v_env_230_, v___x_231_);
v___x_233_ = lean_st_ref_get(v___y_225_);
v_toCold_234_ = lean_ctor_get(v___y_226_, 0);
v_mctx_235_ = lean_ctor_get(v___x_233_, 0);
lean_inc_ref(v_mctx_235_);
lean_dec(v___x_233_);
v_lctx_236_ = lean_ctor_get(v___y_224_, 2);
v_options_237_ = lean_ctor_get(v_toCold_234_, 2);
lean_inc_ref(v_options_237_);
lean_inc_ref(v_lctx_236_);
v___x_238_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_238_, 0, v_env_232_);
lean_ctor_set(v___x_238_, 1, v_mctx_235_);
lean_ctor_set(v___x_238_, 2, v_lctx_236_);
lean_ctor_set(v___x_238_, 3, v_options_237_);
v___x_239_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_238_);
lean_ctor_set(v___x_239_, 1, v_msgData_223_);
v___x_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0_spec__0___boxed(lean_object* v_msgData_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0_spec__0(v_msgData_241_, v___y_242_, v___y_243_, v___y_244_, v___y_245_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
lean_dec(v___y_243_);
lean_dec_ref(v___y_242_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0___redArg(lean_object* v_msg_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v_ref_254_; lean_object* v___x_255_; lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_264_; 
v_ref_254_ = lean_ctor_get(v___y_251_, 2);
v___x_255_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0_spec__0(v_msg_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_);
v_a_256_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_264_ == 0)
{
v___x_258_ = v___x_255_;
v_isShared_259_ = v_isSharedCheck_264_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_255_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_264_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_260_; lean_object* v___x_262_; 
lean_inc(v_ref_254_);
v___x_260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_260_, 0, v_ref_254_);
lean_ctor_set(v___x_260_, 1, v_a_256_);
if (v_isShared_259_ == 0)
{
lean_ctor_set_tag(v___x_258_, 1);
lean_ctor_set(v___x_258_, 0, v___x_260_);
v___x_262_ = v___x_258_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v___x_260_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0___redArg___boxed(lean_object* v_msg_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0___redArg(v_msg_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
lean_dec(v___y_269_);
lean_dec_ref(v___y_268_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
return v_res_271_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__4(void){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_277_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__3));
v___x_278_ = l_Lean_stringToMessageData(v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1(lean_object* v_as_279_, size_t v_sz_280_, size_t v_i_281_, lean_object* v_b_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_){
_start:
{
lean_object* v_a_299_; uint8_t v___x_303_; 
v___x_303_ = lean_usize_dec_lt(v_i_281_, v_sz_280_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; 
v___x_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_304_, 0, v_b_282_);
return v___x_304_;
}
else
{
lean_object* v_a_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_a_305_ = lean_array_uget_borrowed(v_as_279_, v_i_281_);
v___x_306_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__0));
v___x_307_ = l_Lean_Core_checkSystem(v___x_306_, v___y_295_, v___y_296_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v_type_308_; lean_object* v___x_309_; uint8_t v___x_310_; 
lean_dec_ref_known(v___x_307_, 1);
v_type_308_ = lean_ctor_get(v_a_305_, 1);
v___x_309_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__2));
v___x_310_ = l_Lean_Expr_isConstOf(v_type_308_, v___x_309_);
if (v___x_310_ == 0)
{
lean_object* v___x_311_; 
v___x_311_ = l_Lean_Meta_Tactic_BVDecide_LemmaM_resetLemmas___redArg(v___y_285_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v___x_312_; 
lean_dec_ref_known(v___x_311_, 1);
lean_inc(v_a_305_);
v___x_312_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of(v_a_305_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_);
if (lean_obj_tag(v___x_312_) == 0)
{
lean_object* v_a_313_; 
v_a_313_ = lean_ctor_get(v___x_312_, 0);
lean_inc(v_a_313_);
lean_dec_ref_known(v___x_312_, 1);
if (lean_obj_tag(v_a_313_) == 1)
{
lean_object* v_val_314_; lean_object* v___x_315_; 
v_val_314_ = lean_ctor_get(v_a_313_, 0);
lean_inc(v_val_314_);
lean_dec_ref_known(v_a_313_, 1);
v___x_315_ = l_Lean_Meta_Tactic_BVDecide_LemmaM_getLemmas___redArg(v___y_285_);
if (lean_obj_tag(v___x_315_) == 0)
{
lean_object* v_a_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v_a_316_ = lean_ctor_get(v___x_315_, 0);
lean_inc(v_a_316_);
lean_dec_ref_known(v___x_315_, 1);
v___x_317_ = l_Array_append___redArg(v_b_282_, v_a_316_);
lean_dec(v_a_316_);
v___x_318_ = lean_array_push(v___x_317_, v_val_314_);
v_a_299_ = v___x_318_;
goto v___jp_298_;
}
else
{
lean_dec(v_val_314_);
lean_dec_ref(v_b_282_);
return v___x_315_;
}
}
else
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
lean_dec(v_a_313_);
v___x_319_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___closed__4);
lean_inc_ref(v_type_308_);
v___x_320_ = l_Lean_MessageData_ofExpr(v_type_308_);
v___x_321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_321_, 0, v___x_319_);
lean_ctor_set(v___x_321_, 1, v___x_320_);
v___x_322_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0___redArg(v___x_321_, v___y_293_, v___y_294_, v___y_295_, v___y_296_);
if (lean_obj_tag(v___x_322_) == 0)
{
lean_dec_ref_known(v___x_322_, 1);
v_a_299_ = v_b_282_;
goto v___jp_298_;
}
else
{
lean_object* v_a_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
lean_dec_ref(v_b_282_);
v_a_323_ = lean_ctor_get(v___x_322_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_322_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v___x_322_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_a_323_);
lean_dec(v___x_322_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_a_323_);
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
}
else
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_338_; 
lean_dec_ref(v_b_282_);
v_a_331_ = lean_ctor_get(v___x_312_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_338_ == 0)
{
v___x_333_ = v___x_312_;
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_312_);
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
lean_dec_ref(v_b_282_);
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
v_a_299_ = v_b_282_;
goto v___jp_298_;
}
}
else
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_354_; 
lean_dec_ref(v_b_282_);
v_a_347_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_354_ == 0)
{
v___x_349_ = v___x_307_;
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_307_);
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
v___jp_298_:
{
size_t v___x_300_; size_t v___x_301_; 
v___x_300_ = ((size_t)1ULL);
v___x_301_ = lean_usize_add(v_i_281_, v___x_300_);
v_i_281_ = v___x_301_;
v_b_282_ = v_a_299_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1___boxed(lean_object** _args){
lean_object* v_as_355_ = _args[0];
lean_object* v_sz_356_ = _args[1];
lean_object* v_i_357_ = _args[2];
lean_object* v_b_358_ = _args[3];
lean_object* v___y_359_ = _args[4];
lean_object* v___y_360_ = _args[5];
lean_object* v___y_361_ = _args[6];
lean_object* v___y_362_ = _args[7];
lean_object* v___y_363_ = _args[8];
lean_object* v___y_364_ = _args[9];
lean_object* v___y_365_ = _args[10];
lean_object* v___y_366_ = _args[11];
lean_object* v___y_367_ = _args[12];
lean_object* v___y_368_ = _args[13];
lean_object* v___y_369_ = _args[14];
lean_object* v___y_370_ = _args[15];
lean_object* v___y_371_ = _args[16];
lean_object* v___y_372_ = _args[17];
lean_object* v___y_373_ = _args[18];
_start:
{
size_t v_sz_boxed_374_; size_t v_i_boxed_375_; lean_object* v_res_376_; 
v_sz_boxed_374_ = lean_unbox_usize(v_sz_356_);
lean_dec(v_sz_356_);
v_i_boxed_375_ = lean_unbox_usize(v_i_357_);
lean_dec(v_i_357_);
v_res_376_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1(v_as_355_, v_sz_boxed_374_, v_i_boxed_375_, v_b_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
lean_dec(v___y_366_);
lean_dec_ref(v___y_365_);
lean_dec(v___y_364_);
lean_dec(v___y_363_);
lean_dec_ref(v___y_362_);
lean_dec(v___y_361_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec_ref(v_as_355_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__1(lean_object* v___f_379_, lean_object* v_____r_380_, lean_object* v_hypQueue_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_){
_start:
{
lean_object* v_a_398_; lean_object* v___x_418_; lean_object* v___x_419_; size_t v_sz_420_; size_t v___x_421_; lean_object* v___x_422_; 
v___x_418_ = lean_unsigned_to_nat(0u);
v___x_419_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__1___closed__0));
v_sz_420_ = lean_array_size(v_hypQueue_381_);
v___x_421_ = ((size_t)0ULL);
v___x_422_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1(v_hypQueue_381_, v_sz_420_, v___x_421_, v___x_419_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v_a_423_; lean_object* v___x_424_; uint8_t v___x_425_; 
v_a_423_ = lean_ctor_get(v___x_422_, 0);
lean_inc(v_a_423_);
lean_dec_ref_known(v___x_422_, 1);
v___x_424_ = lean_array_get_size(v_a_423_);
v___x_425_ = lean_nat_dec_eq(v___x_424_, v___x_418_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; lean_object* v_satExpr_427_; uint8_t v___x_428_; 
lean_dec_ref(v___f_379_);
v___x_426_ = lean_st_ref_get(v___y_383_);
v_satExpr_427_ = lean_ctor_get(v___x_426_, 0);
lean_inc_ref(v_satExpr_427_);
lean_dec(v___x_426_);
v___x_428_ = lean_nat_dec_lt(v___x_418_, v___x_424_);
if (v___x_428_ == 0)
{
lean_dec(v_a_423_);
v_a_398_ = v_satExpr_427_;
goto v___jp_397_;
}
else
{
size_t v___x_429_; lean_object* v___x_430_; 
v___x_429_ = lean_usize_of_nat(v___x_424_);
v___x_430_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__2___redArg(v_a_423_, v___x_421_, v___x_429_, v_satExpr_427_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_);
lean_dec(v_a_423_);
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v_a_431_; 
v_a_431_ = lean_ctor_get(v___x_430_, 0);
lean_inc(v_a_431_);
lean_dec_ref_known(v___x_430_, 1);
v_a_398_ = v_a_431_;
goto v___jp_397_;
}
else
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
v_a_432_ = lean_ctor_get(v___x_430_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_430_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_430_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
}
else
{
lean_object* v___x_440_; lean_object* v___x_441_; 
lean_dec(v_a_423_);
v___x_440_ = lean_box(0);
lean_inc(v___y_395_);
lean_inc_ref(v___y_394_);
lean_inc(v___y_393_);
lean_inc_ref(v___y_392_);
lean_inc(v___y_391_);
lean_inc_ref(v___y_390_);
lean_inc(v___y_389_);
lean_inc_ref(v___y_388_);
lean_inc(v___y_387_);
lean_inc(v___y_386_);
lean_inc_ref(v___y_385_);
lean_inc(v___y_384_);
lean_inc(v___y_383_);
lean_inc_ref(v___y_382_);
v___x_441_ = lean_apply_16(v___f_379_, v___x_440_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, lean_box(0));
return v___x_441_;
}
}
else
{
lean_object* v_a_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_449_; 
lean_dec_ref(v___f_379_);
v_a_442_ = lean_ctor_get(v___x_422_, 0);
v_isSharedCheck_449_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_449_ == 0)
{
v___x_444_ = v___x_422_;
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_a_442_);
lean_dec(v___x_422_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_447_; 
if (v_isShared_445_ == 0)
{
v___x_447_ = v___x_444_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v_a_442_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
}
v___jp_397_:
{
lean_object* v___x_399_; lean_object* v_hypQueue_400_; lean_object* v_usedHyps_401_; uint8_t v_didChange_402_; lean_object* v_theoryState_403_; lean_object* v_solverTimeBudgetMs_404_; lean_object* v_roundBudget_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_416_; 
v___x_399_ = lean_st_ref_take(v___y_383_);
v_hypQueue_400_ = lean_ctor_get(v___x_399_, 1);
v_usedHyps_401_ = lean_ctor_get(v___x_399_, 2);
v_didChange_402_ = lean_ctor_get_uint8(v___x_399_, sizeof(void*)*6);
v_theoryState_403_ = lean_ctor_get(v___x_399_, 3);
v_solverTimeBudgetMs_404_ = lean_ctor_get(v___x_399_, 4);
v_roundBudget_405_ = lean_ctor_get(v___x_399_, 5);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_416_ == 0)
{
lean_object* v_unused_417_; 
v_unused_417_ = lean_ctor_get(v___x_399_, 0);
lean_dec(v_unused_417_);
v___x_407_ = v___x_399_;
v_isShared_408_ = v_isSharedCheck_416_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_roundBudget_405_);
lean_inc(v_solverTimeBudgetMs_404_);
lean_inc(v_theoryState_403_);
lean_inc(v_usedHyps_401_);
lean_inc(v_hypQueue_400_);
lean_dec(v___x_399_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_416_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_410_; 
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 0, v_a_398_);
v___x_410_ = v___x_407_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_398_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v_hypQueue_400_);
lean_ctor_set(v_reuseFailAlloc_415_, 2, v_usedHyps_401_);
lean_ctor_set(v_reuseFailAlloc_415_, 3, v_theoryState_403_);
lean_ctor_set(v_reuseFailAlloc_415_, 4, v_solverTimeBudgetMs_404_);
lean_ctor_set(v_reuseFailAlloc_415_, 5, v_roundBudget_405_);
lean_ctor_set_uint8(v_reuseFailAlloc_415_, sizeof(void*)*6, v_didChange_402_);
v___x_410_ = v_reuseFailAlloc_415_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
lean_object* v___x_411_; uint8_t v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_411_ = lean_st_ref_put(v___y_383_, v___x_410_);
v___x_412_ = 1;
v___x_413_ = lean_box(v___x_412_);
v___x_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
return v___x_414_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__1___boxed(lean_object** _args){
lean_object* v___f_450_ = _args[0];
lean_object* v_____r_451_ = _args[1];
lean_object* v_hypQueue_452_ = _args[2];
lean_object* v___y_453_ = _args[3];
lean_object* v___y_454_ = _args[4];
lean_object* v___y_455_ = _args[5];
lean_object* v___y_456_ = _args[6];
lean_object* v___y_457_ = _args[7];
lean_object* v___y_458_ = _args[8];
lean_object* v___y_459_ = _args[9];
lean_object* v___y_460_ = _args[10];
lean_object* v___y_461_ = _args[11];
lean_object* v___y_462_ = _args[12];
lean_object* v___y_463_ = _args[13];
lean_object* v___y_464_ = _args[14];
lean_object* v___y_465_ = _args[15];
lean_object* v___y_466_ = _args[16];
lean_object* v___y_467_ = _args[17];
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__1(v___f_450_, v_____r_451_, v_hypQueue_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_);
lean_dec(v___y_466_);
lean_dec_ref(v___y_465_);
lean_dec(v___y_464_);
lean_dec_ref(v___y_463_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
lean_dec(v___y_458_);
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
lean_dec(v___y_455_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec_ref(v_hypQueue_452_);
return v_res_468_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4___closed__1(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4___closed__0));
v___x_471_ = l_Lean_stringToMessageData(v___x_470_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4(lean_object* v_x_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4___closed__1, &l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4___closed__1);
v___x_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4___boxed(lean_object* v_x_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__4(v_x_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
lean_dec(v___y_504_);
lean_dec_ref(v___y_503_);
lean_dec(v___y_502_);
lean_dec_ref(v___y_501_);
lean_dec(v___y_500_);
lean_dec_ref(v___y_499_);
lean_dec(v___y_498_);
lean_dec_ref(v___y_497_);
lean_dec(v___y_496_);
lean_dec(v___y_495_);
lean_dec_ref(v___y_494_);
lean_dec(v___y_493_);
lean_dec(v___y_492_);
lean_dec_ref(v___y_491_);
lean_dec_ref(v_x_490_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__4(size_t v_sz_507_, size_t v_i_508_, lean_object* v_bs_509_){
_start:
{
uint8_t v___x_510_; 
v___x_510_ = lean_usize_dec_lt(v_i_508_, v_sz_507_);
if (v___x_510_ == 0)
{
return v_bs_509_;
}
else
{
lean_object* v_v_511_; lean_object* v_hyp_512_; lean_object* v___x_513_; lean_object* v_bs_x27_514_; size_t v___x_515_; size_t v___x_516_; lean_object* v___x_517_; 
v_v_511_ = lean_array_uget_borrowed(v_bs_509_, v_i_508_);
v_hyp_512_ = lean_ctor_get(v_v_511_, 0);
lean_inc_ref(v_hyp_512_);
v___x_513_ = lean_unsigned_to_nat(0u);
v_bs_x27_514_ = lean_array_uset(v_bs_509_, v_i_508_, v___x_513_);
v___x_515_ = ((size_t)1ULL);
v___x_516_ = lean_usize_add(v_i_508_, v___x_515_);
v___x_517_ = lean_array_uset(v_bs_x27_514_, v_i_508_, v_hyp_512_);
v_i_508_ = v___x_516_;
v_bs_509_ = v___x_517_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__4___boxed(lean_object* v_sz_519_, lean_object* v_i_520_, lean_object* v_bs_521_){
_start:
{
size_t v_sz_boxed_522_; size_t v_i_boxed_523_; lean_object* v_res_524_; 
v_sz_boxed_522_ = lean_unbox_usize(v_sz_519_);
lean_dec(v_sz_519_);
v_i_boxed_523_ = lean_unbox_usize(v_i_520_);
lean_dec(v_i_520_);
v_res_524_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__4(v_sz_boxed_522_, v_i_boxed_523_, v_bs_521_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__3(lean_object* v_as_525_, size_t v_sz_526_, size_t v_i_527_, lean_object* v_b_528_){
_start:
{
lean_object* v_a_530_; uint8_t v___x_534_; 
v___x_534_ = lean_usize_dec_lt(v_i_527_, v_sz_526_);
if (v___x_534_ == 0)
{
return v_b_528_;
}
else
{
lean_object* v_fst_535_; lean_object* v_snd_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_550_; 
v_fst_535_ = lean_ctor_get(v_b_528_, 0);
v_snd_536_ = lean_ctor_get(v_b_528_, 1);
v_isSharedCheck_550_ = !lean_is_exclusive(v_b_528_);
if (v_isSharedCheck_550_ == 0)
{
v___x_538_ = v_b_528_;
v_isShared_539_ = v_isSharedCheck_550_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_snd_536_);
lean_inc(v_fst_535_);
lean_dec(v_b_528_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_550_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v_a_540_; uint8_t v_isNormalized_541_; 
v_a_540_ = lean_array_uget_borrowed(v_as_525_, v_i_527_);
v_isNormalized_541_ = lean_ctor_get_uint8(v_a_540_, sizeof(void*)*3);
if (v_isNormalized_541_ == 0)
{
lean_object* v___x_542_; lean_object* v___x_544_; 
lean_inc(v_a_540_);
v___x_542_ = lean_array_push(v_snd_536_, v_a_540_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 1, v___x_542_);
v___x_544_ = v___x_538_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_fst_535_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v___x_542_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
v_a_530_ = v___x_544_;
goto v___jp_529_;
}
}
else
{
lean_object* v___x_546_; lean_object* v___x_548_; 
lean_inc(v_a_540_);
v___x_546_ = lean_array_push(v_fst_535_, v_a_540_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 0, v___x_546_);
v___x_548_ = v___x_538_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v___x_546_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v_snd_536_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
v_a_530_ = v___x_548_;
goto v___jp_529_;
}
}
}
}
v___jp_529_:
{
size_t v___x_531_; size_t v___x_532_; 
v___x_531_ = ((size_t)1ULL);
v___x_532_ = lean_usize_add(v_i_527_, v___x_531_);
v_i_527_ = v___x_532_;
v_b_528_ = v_a_530_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__3___boxed(lean_object* v_as_551_, lean_object* v_sz_552_, lean_object* v_i_553_, lean_object* v_b_554_){
_start:
{
size_t v_sz_boxed_555_; size_t v_i_boxed_556_; lean_object* v_res_557_; 
v_sz_boxed_555_ = lean_unbox_usize(v_sz_552_);
lean_dec(v_sz_552_);
v_i_boxed_556_ = lean_unbox_usize(v_i_553_);
lean_dec(v_i_553_);
v_res_557_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__3(v_as_551_, v_sz_boxed_555_, v_i_boxed_556_, v_b_554_);
lean_dec_ref(v_as_551_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__11(lean_object* v_opts_558_, lean_object* v_opt_559_){
_start:
{
lean_object* v_name_560_; lean_object* v_defValue_561_; lean_object* v_map_562_; lean_object* v___x_563_; 
v_name_560_ = lean_ctor_get(v_opt_559_, 0);
v_defValue_561_ = lean_ctor_get(v_opt_559_, 1);
v_map_562_ = lean_ctor_get(v_opts_558_, 0);
v___x_563_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_562_, v_name_560_);
if (lean_obj_tag(v___x_563_) == 0)
{
lean_inc(v_defValue_561_);
return v_defValue_561_;
}
else
{
lean_object* v_val_564_; 
v_val_564_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_val_564_);
lean_dec_ref_known(v___x_563_, 1);
if (lean_obj_tag(v_val_564_) == 3)
{
lean_object* v_v_565_; 
v_v_565_ = lean_ctor_get(v_val_564_, 0);
lean_inc(v_v_565_);
lean_dec_ref_known(v_val_564_, 1);
return v_v_565_;
}
else
{
lean_dec(v_val_564_);
lean_inc(v_defValue_561_);
return v_defValue_561_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__11___boxed(lean_object* v_opts_566_, lean_object* v_opt_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__11(v_opts_566_, v_opt_567_);
lean_dec_ref(v_opt_567_);
lean_dec_ref(v_opts_566_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8_spec__9(size_t v_sz_569_, size_t v_i_570_, lean_object* v_bs_571_){
_start:
{
uint8_t v___x_572_; 
v___x_572_ = lean_usize_dec_lt(v_i_570_, v_sz_569_);
if (v___x_572_ == 0)
{
return v_bs_571_;
}
else
{
lean_object* v_v_573_; lean_object* v_msg_574_; lean_object* v___x_575_; lean_object* v_bs_x27_576_; size_t v___x_577_; size_t v___x_578_; lean_object* v___x_579_; 
v_v_573_ = lean_array_uget_borrowed(v_bs_571_, v_i_570_);
v_msg_574_ = lean_ctor_get(v_v_573_, 1);
lean_inc_ref(v_msg_574_);
v___x_575_ = lean_unsigned_to_nat(0u);
v_bs_x27_576_ = lean_array_uset(v_bs_571_, v_i_570_, v___x_575_);
v___x_577_ = ((size_t)1ULL);
v___x_578_ = lean_usize_add(v_i_570_, v___x_577_);
v___x_579_ = lean_array_uset(v_bs_x27_576_, v_i_570_, v_msg_574_);
v_i_570_ = v___x_578_;
v_bs_571_ = v___x_579_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8_spec__9___boxed(lean_object* v_sz_581_, lean_object* v_i_582_, lean_object* v_bs_583_){
_start:
{
size_t v_sz_boxed_584_; size_t v_i_boxed_585_; lean_object* v_res_586_; 
v_sz_boxed_584_ = lean_unbox_usize(v_sz_581_);
lean_dec(v_sz_581_);
v_i_boxed_585_ = lean_unbox_usize(v_i_582_);
lean_dec(v_i_582_);
v_res_586_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8_spec__9(v_sz_boxed_584_, v_i_boxed_585_, v_bs_583_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8___redArg(lean_object* v_oldTraces_587_, lean_object* v_data_588_, lean_object* v_ref_589_, lean_object* v_msg_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
lean_object* v_toCold_596_; lean_object* v_currRecDepth_597_; lean_object* v_ref_598_; uint16_t v_optionFlags_599_; uint8_t v_suppressElabErrors_600_; uint8_t v_checkDeprecated_601_; uint8_t v_isRecordingDeps_602_; lean_object* v_ref_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v_traceState_606_; lean_object* v_traces_607_; lean_object* v___x_608_; size_t v_sz_609_; size_t v___x_610_; lean_object* v___x_611_; lean_object* v_msg_612_; lean_object* v___x_613_; lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_652_; 
v_toCold_596_ = lean_ctor_get(v___y_593_, 0);
v_currRecDepth_597_ = lean_ctor_get(v___y_593_, 1);
v_ref_598_ = lean_ctor_get(v___y_593_, 2);
v_optionFlags_599_ = lean_ctor_get_uint16(v___y_593_, sizeof(void*)*3);
v_suppressElabErrors_600_ = lean_ctor_get_uint8(v___y_593_, sizeof(void*)*3 + 2);
v_checkDeprecated_601_ = lean_ctor_get_uint8(v___y_593_, sizeof(void*)*3 + 3);
v_isRecordingDeps_602_ = lean_ctor_get_uint8(v___y_593_, sizeof(void*)*3 + 4);
v_ref_603_ = l_Lean_replaceRef(v_ref_589_, v_ref_598_);
lean_inc(v_currRecDepth_597_);
lean_inc_ref(v_toCold_596_);
v___x_604_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_604_, 0, v_toCold_596_);
lean_ctor_set(v___x_604_, 1, v_currRecDepth_597_);
lean_ctor_set(v___x_604_, 2, v_ref_603_);
lean_ctor_set_uint16(v___x_604_, sizeof(void*)*3, v_optionFlags_599_);
lean_ctor_set_uint8(v___x_604_, sizeof(void*)*3 + 2, v_suppressElabErrors_600_);
lean_ctor_set_uint8(v___x_604_, sizeof(void*)*3 + 3, v_checkDeprecated_601_);
lean_ctor_set_uint8(v___x_604_, sizeof(void*)*3 + 4, v_isRecordingDeps_602_);
v___x_605_ = lean_st_ref_get(v___y_594_);
v_traceState_606_ = lean_ctor_get(v___x_605_, 4);
lean_inc_ref(v_traceState_606_);
lean_dec(v___x_605_);
v_traces_607_ = lean_ctor_get(v_traceState_606_, 0);
lean_inc_ref(v_traces_607_);
lean_dec_ref(v_traceState_606_);
v___x_608_ = l_Lean_PersistentArray_toArray___redArg(v_traces_607_);
lean_dec_ref(v_traces_607_);
v_sz_609_ = lean_array_size(v___x_608_);
v___x_610_ = ((size_t)0ULL);
v___x_611_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8_spec__9(v_sz_609_, v___x_610_, v___x_608_);
v_msg_612_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_612_, 0, v_data_588_);
lean_ctor_set(v_msg_612_, 1, v_msg_590_);
lean_ctor_set(v_msg_612_, 2, v___x_611_);
v___x_613_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0_spec__0(v_msg_612_, v___y_591_, v___y_592_, v___x_604_, v___y_594_);
lean_dec_ref_known(v___x_604_, 3);
v_a_614_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_652_ == 0)
{
v___x_616_ = v___x_613_;
v_isShared_617_ = v_isSharedCheck_652_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_613_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_652_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_618_; lean_object* v_traceState_619_; lean_object* v_env_620_; lean_object* v_nextMacroScope_621_; lean_object* v_ngen_622_; lean_object* v_auxDeclNGen_623_; lean_object* v_cache_624_; lean_object* v_recordedDeps_625_; lean_object* v_messages_626_; lean_object* v_infoState_627_; lean_object* v_snapshotTasks_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_651_; 
v___x_618_ = lean_st_ref_take(v___y_594_);
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
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_651_ == 0)
{
v___x_630_ = v___x_618_;
v_isShared_631_ = v_isSharedCheck_651_;
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
v_isShared_631_ = v_isSharedCheck_651_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
uint64_t v_tid_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_649_; 
v_tid_632_ = lean_ctor_get_uint64(v_traceState_619_, sizeof(void*)*1);
v_isSharedCheck_649_ = !lean_is_exclusive(v_traceState_619_);
if (v_isSharedCheck_649_ == 0)
{
lean_object* v_unused_650_; 
v_unused_650_ = lean_ctor_get(v_traceState_619_, 0);
lean_dec(v_unused_650_);
v___x_634_ = v_traceState_619_;
v_isShared_635_ = v_isSharedCheck_649_;
goto v_resetjp_633_;
}
else
{
lean_dec(v_traceState_619_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_649_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_640_; 
v___x_636_ = lean_box(0);
v___x_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_637_, 0, v_ref_589_);
lean_ctor_set(v___x_637_, 1, v_a_614_);
v___x_638_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_587_, v___x_637_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v___x_638_);
v___x_640_ = v___x_634_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v___x_638_);
lean_ctor_set_uint64(v_reuseFailAlloc_648_, sizeof(void*)*1, v_tid_632_);
v___x_640_ = v_reuseFailAlloc_648_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_642_; 
if (v_isShared_631_ == 0)
{
lean_ctor_set(v___x_630_, 4, v___x_640_);
v___x_642_ = v___x_630_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_env_620_);
lean_ctor_set(v_reuseFailAlloc_647_, 1, v_nextMacroScope_621_);
lean_ctor_set(v_reuseFailAlloc_647_, 2, v_ngen_622_);
lean_ctor_set(v_reuseFailAlloc_647_, 3, v_auxDeclNGen_623_);
lean_ctor_set(v_reuseFailAlloc_647_, 4, v___x_640_);
lean_ctor_set(v_reuseFailAlloc_647_, 5, v_cache_624_);
lean_ctor_set(v_reuseFailAlloc_647_, 6, v_recordedDeps_625_);
lean_ctor_set(v_reuseFailAlloc_647_, 7, v_messages_626_);
lean_ctor_set(v_reuseFailAlloc_647_, 8, v_infoState_627_);
lean_ctor_set(v_reuseFailAlloc_647_, 9, v_snapshotTasks_628_);
v___x_642_ = v_reuseFailAlloc_647_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
lean_object* v___x_643_; lean_object* v___x_645_; 
v___x_643_ = lean_st_ref_put(v___y_594_, v___x_642_);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 0, v___x_636_);
v___x_645_ = v___x_616_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v___x_636_);
v___x_645_ = v_reuseFailAlloc_646_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
return v___x_645_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8___redArg___boxed(lean_object* v_oldTraces_653_, lean_object* v_data_654_, lean_object* v_ref_655_, lean_object* v_msg_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8___redArg(v_oldTraces_653_, v_data_654_, v_ref_655_, v_msg_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
return v_res_662_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__10(lean_object* v_e_663_){
_start:
{
if (lean_obj_tag(v_e_663_) == 0)
{
uint8_t v___x_664_; 
v___x_664_ = 2;
return v___x_664_;
}
else
{
uint8_t v___x_665_; 
v___x_665_ = 0;
return v___x_665_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__10___boxed(lean_object* v_e_666_){
_start:
{
uint8_t v_res_667_; lean_object* v_r_668_; 
v_res_667_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__10(v_e_666_);
lean_dec_ref(v_e_666_);
v_r_668_ = lean_box(v_res_667_);
return v_r_668_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__9___redArg(lean_object* v_x_669_){
_start:
{
if (lean_obj_tag(v_x_669_) == 0)
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
v_a_671_ = lean_ctor_get(v_x_669_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v_x_669_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v_x_669_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v_x_669_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
lean_ctor_set_tag(v___x_673_, 1);
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
else
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_686_; 
v_a_679_ = lean_ctor_get(v_x_669_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v_x_669_);
if (v_isSharedCheck_686_ == 0)
{
v___x_681_ = v_x_669_;
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v_x_669_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_684_; 
if (v_isShared_682_ == 0)
{
lean_ctor_set_tag(v___x_681_, 0);
v___x_684_ = v___x_681_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
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
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__9___redArg___boxed(lean_object* v_x_687_, lean_object* v___y_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__9___redArg(v_x_687_);
return v_res_689_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__0(void){
_start:
{
lean_object* v___x_690_; double v___x_691_; 
v___x_690_ = lean_unsigned_to_nat(0u);
v___x_691_ = lean_float_of_nat(v___x_690_);
return v___x_691_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__2(void){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_693_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__1));
v___x_694_ = l_Lean_stringToMessageData(v___x_693_);
return v___x_694_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__3(void){
_start:
{
lean_object* v___x_695_; double v___x_696_; 
v___x_695_ = lean_unsigned_to_nat(1000u);
v___x_696_ = lean_float_of_nat(v___x_695_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7(lean_object* v_cls_697_, uint8_t v_collapsed_698_, lean_object* v_tag_699_, lean_object* v_opts_700_, uint8_t v_clsEnabled_701_, lean_object* v_oldTraces_702_, lean_object* v_msg_703_, lean_object* v_resStartStop_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v_fst_720_; lean_object* v_snd_721_; lean_object* v___y_723_; lean_object* v___y_724_; lean_object* v_data_725_; lean_object* v_fst_736_; lean_object* v_snd_737_; lean_object* v___x_738_; uint8_t v___x_739_; lean_object* v___y_741_; lean_object* v_a_742_; uint8_t v___y_757_; double v___y_789_; 
v_fst_720_ = lean_ctor_get(v_resStartStop_704_, 0);
lean_inc(v_fst_720_);
v_snd_721_ = lean_ctor_get(v_resStartStop_704_, 1);
lean_inc(v_snd_721_);
lean_dec_ref(v_resStartStop_704_);
v_fst_736_ = lean_ctor_get(v_snd_721_, 0);
lean_inc(v_fst_736_);
v_snd_737_ = lean_ctor_get(v_snd_721_, 1);
lean_inc(v_snd_737_);
lean_dec(v_snd_721_);
v___x_738_ = l_Lean_trace_profiler;
v___x_739_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__6(v_opts_700_, v___x_738_);
if (v___x_739_ == 0)
{
v___y_757_ = v___x_739_;
goto v___jp_756_;
}
else
{
lean_object* v___x_794_; uint8_t v___x_795_; 
v___x_794_ = l_Lean_trace_profiler_useHeartbeats;
v___x_795_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__6(v_opts_700_, v___x_794_);
if (v___x_795_ == 0)
{
lean_object* v___x_796_; lean_object* v___x_797_; double v___x_798_; double v___x_799_; double v___x_800_; 
v___x_796_ = l_Lean_trace_profiler_threshold;
v___x_797_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__11(v_opts_700_, v___x_796_);
v___x_798_ = lean_float_of_nat(v___x_797_);
v___x_799_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__3);
v___x_800_ = lean_float_div(v___x_798_, v___x_799_);
v___y_789_ = v___x_800_;
goto v___jp_788_;
}
else
{
lean_object* v___x_801_; lean_object* v___x_802_; double v___x_803_; 
v___x_801_ = l_Lean_trace_profiler_threshold;
v___x_802_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__11(v_opts_700_, v___x_801_);
v___x_803_ = lean_float_of_nat(v___x_802_);
v___y_789_ = v___x_803_;
goto v___jp_788_;
}
}
v___jp_722_:
{
lean_object* v___x_726_; 
lean_inc(v___y_724_);
v___x_726_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8___redArg(v_oldTraces_702_, v_data_725_, v___y_724_, v___y_723_, v___y_715_, v___y_716_, v___y_717_, v___y_718_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v___x_727_; 
lean_dec_ref_known(v___x_726_, 1);
v___x_727_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__9___redArg(v_fst_720_);
return v___x_727_;
}
else
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_735_; 
lean_dec(v_fst_720_);
v_a_728_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_735_ == 0)
{
v___x_730_ = v___x_726_;
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___x_726_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_a_728_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
}
v___jp_740_:
{
uint8_t v_result_743_; lean_object* v___x_744_; lean_object* v___x_745_; double v___x_746_; lean_object* v_data_747_; 
v_result_743_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__10(v_fst_720_);
v___x_744_ = lean_box(v_result_743_);
v___x_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_745_, 0, v___x_744_);
v___x_746_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__0);
lean_inc_ref(v_tag_699_);
lean_inc_ref(v___x_745_);
lean_inc(v_cls_697_);
v_data_747_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_747_, 0, v_cls_697_);
lean_ctor_set(v_data_747_, 1, v___x_745_);
lean_ctor_set(v_data_747_, 2, v_tag_699_);
lean_ctor_set_float(v_data_747_, sizeof(void*)*3, v___x_746_);
lean_ctor_set_float(v_data_747_, sizeof(void*)*3 + 8, v___x_746_);
lean_ctor_set_uint8(v_data_747_, sizeof(void*)*3 + 16, v_collapsed_698_);
if (v___x_739_ == 0)
{
lean_dec_ref_known(v___x_745_, 1);
lean_dec(v_snd_737_);
lean_dec(v_fst_736_);
lean_dec_ref(v_tag_699_);
lean_dec(v_cls_697_);
v___y_723_ = v_a_742_;
v___y_724_ = v___y_741_;
v_data_725_ = v_data_747_;
goto v___jp_722_;
}
else
{
lean_object* v_data_748_; double v___x_749_; double v___x_750_; 
lean_dec_ref_known(v_data_747_, 3);
v_data_748_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_748_, 0, v_cls_697_);
lean_ctor_set(v_data_748_, 1, v___x_745_);
lean_ctor_set(v_data_748_, 2, v_tag_699_);
v___x_749_ = lean_unbox_float(v_fst_736_);
lean_dec(v_fst_736_);
lean_ctor_set_float(v_data_748_, sizeof(void*)*3, v___x_749_);
v___x_750_ = lean_unbox_float(v_snd_737_);
lean_dec(v_snd_737_);
lean_ctor_set_float(v_data_748_, sizeof(void*)*3 + 8, v___x_750_);
lean_ctor_set_uint8(v_data_748_, sizeof(void*)*3 + 16, v_collapsed_698_);
v___y_723_ = v_a_742_;
v___y_724_ = v___y_741_;
v_data_725_ = v_data_748_;
goto v___jp_722_;
}
}
v___jp_751_:
{
lean_object* v_ref_752_; lean_object* v___x_753_; 
v_ref_752_ = lean_ctor_get(v___y_717_, 2);
lean_inc(v___y_718_);
lean_inc_ref(v___y_717_);
lean_inc(v___y_716_);
lean_inc_ref(v___y_715_);
lean_inc(v___y_714_);
lean_inc_ref(v___y_713_);
lean_inc(v___y_712_);
lean_inc_ref(v___y_711_);
lean_inc(v___y_710_);
lean_inc(v___y_709_);
lean_inc_ref(v___y_708_);
lean_inc(v___y_707_);
lean_inc(v___y_706_);
lean_inc_ref(v___y_705_);
lean_inc(v_fst_720_);
v___x_753_ = lean_apply_16(v_msg_703_, v_fst_720_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_, v___y_718_, lean_box(0));
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v_a_754_; 
v_a_754_ = lean_ctor_get(v___x_753_, 0);
lean_inc(v_a_754_);
lean_dec_ref_known(v___x_753_, 1);
v___y_741_ = v_ref_752_;
v_a_742_ = v_a_754_;
goto v___jp_740_;
}
else
{
lean_object* v___x_755_; 
lean_dec_ref_known(v___x_753_, 1);
v___x_755_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___closed__2);
v___y_741_ = v_ref_752_;
v_a_742_ = v___x_755_;
goto v___jp_740_;
}
}
v___jp_756_:
{
if (v_clsEnabled_701_ == 0)
{
if (v___y_757_ == 0)
{
lean_object* v___x_758_; lean_object* v_traceState_759_; lean_object* v_env_760_; lean_object* v_nextMacroScope_761_; lean_object* v_ngen_762_; lean_object* v_auxDeclNGen_763_; lean_object* v_cache_764_; lean_object* v_recordedDeps_765_; lean_object* v_messages_766_; lean_object* v_infoState_767_; lean_object* v_snapshotTasks_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_787_; 
lean_dec(v_snd_737_);
lean_dec(v_fst_736_);
lean_dec_ref(v_msg_703_);
lean_dec_ref(v_tag_699_);
lean_dec(v_cls_697_);
v___x_758_ = lean_st_ref_take(v___y_718_);
v_traceState_759_ = lean_ctor_get(v___x_758_, 4);
v_env_760_ = lean_ctor_get(v___x_758_, 0);
v_nextMacroScope_761_ = lean_ctor_get(v___x_758_, 1);
v_ngen_762_ = lean_ctor_get(v___x_758_, 2);
v_auxDeclNGen_763_ = lean_ctor_get(v___x_758_, 3);
v_cache_764_ = lean_ctor_get(v___x_758_, 5);
v_recordedDeps_765_ = lean_ctor_get(v___x_758_, 6);
v_messages_766_ = lean_ctor_get(v___x_758_, 7);
v_infoState_767_ = lean_ctor_get(v___x_758_, 8);
v_snapshotTasks_768_ = lean_ctor_get(v___x_758_, 9);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_787_ == 0)
{
v___x_770_ = v___x_758_;
v_isShared_771_ = v_isSharedCheck_787_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_snapshotTasks_768_);
lean_inc(v_infoState_767_);
lean_inc(v_messages_766_);
lean_inc(v_recordedDeps_765_);
lean_inc(v_cache_764_);
lean_inc(v_traceState_759_);
lean_inc(v_auxDeclNGen_763_);
lean_inc(v_ngen_762_);
lean_inc(v_nextMacroScope_761_);
lean_inc(v_env_760_);
lean_dec(v___x_758_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_787_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
uint64_t v_tid_772_; lean_object* v_traces_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_786_; 
v_tid_772_ = lean_ctor_get_uint64(v_traceState_759_, sizeof(void*)*1);
v_traces_773_ = lean_ctor_get(v_traceState_759_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v_traceState_759_);
if (v_isSharedCheck_786_ == 0)
{
v___x_775_ = v_traceState_759_;
v_isShared_776_ = v_isSharedCheck_786_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_traces_773_);
lean_dec(v_traceState_759_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_786_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_777_; lean_object* v___x_779_; 
v___x_777_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_702_, v_traces_773_);
lean_dec_ref(v_traces_773_);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 0, v___x_777_);
v___x_779_ = v___x_775_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v___x_777_);
lean_ctor_set_uint64(v_reuseFailAlloc_785_, sizeof(void*)*1, v_tid_772_);
v___x_779_ = v_reuseFailAlloc_785_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
lean_object* v___x_781_; 
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 4, v___x_779_);
v___x_781_ = v___x_770_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_env_760_);
lean_ctor_set(v_reuseFailAlloc_784_, 1, v_nextMacroScope_761_);
lean_ctor_set(v_reuseFailAlloc_784_, 2, v_ngen_762_);
lean_ctor_set(v_reuseFailAlloc_784_, 3, v_auxDeclNGen_763_);
lean_ctor_set(v_reuseFailAlloc_784_, 4, v___x_779_);
lean_ctor_set(v_reuseFailAlloc_784_, 5, v_cache_764_);
lean_ctor_set(v_reuseFailAlloc_784_, 6, v_recordedDeps_765_);
lean_ctor_set(v_reuseFailAlloc_784_, 7, v_messages_766_);
lean_ctor_set(v_reuseFailAlloc_784_, 8, v_infoState_767_);
lean_ctor_set(v_reuseFailAlloc_784_, 9, v_snapshotTasks_768_);
v___x_781_ = v_reuseFailAlloc_784_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_782_ = lean_st_ref_put(v___y_718_, v___x_781_);
v___x_783_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__9___redArg(v_fst_720_);
return v___x_783_;
}
}
}
}
}
else
{
goto v___jp_751_;
}
}
else
{
goto v___jp_751_;
}
}
v___jp_788_:
{
double v___x_790_; double v___x_791_; double v___x_792_; uint8_t v___x_793_; 
v___x_790_ = lean_unbox_float(v_snd_737_);
v___x_791_ = lean_unbox_float(v_fst_736_);
v___x_792_ = lean_float_sub(v___x_790_, v___x_791_);
v___x_793_ = lean_float_decLt(v___y_789_, v___x_792_);
v___y_757_ = v___x_793_;
goto v___jp_756_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7___boxed(lean_object** _args){
lean_object* v_cls_804_ = _args[0];
lean_object* v_collapsed_805_ = _args[1];
lean_object* v_tag_806_ = _args[2];
lean_object* v_opts_807_ = _args[3];
lean_object* v_clsEnabled_808_ = _args[4];
lean_object* v_oldTraces_809_ = _args[5];
lean_object* v_msg_810_ = _args[6];
lean_object* v_resStartStop_811_ = _args[7];
lean_object* v___y_812_ = _args[8];
lean_object* v___y_813_ = _args[9];
lean_object* v___y_814_ = _args[10];
lean_object* v___y_815_ = _args[11];
lean_object* v___y_816_ = _args[12];
lean_object* v___y_817_ = _args[13];
lean_object* v___y_818_ = _args[14];
lean_object* v___y_819_ = _args[15];
lean_object* v___y_820_ = _args[16];
lean_object* v___y_821_ = _args[17];
lean_object* v___y_822_ = _args[18];
lean_object* v___y_823_ = _args[19];
lean_object* v___y_824_ = _args[20];
lean_object* v___y_825_ = _args[21];
lean_object* v___y_826_ = _args[22];
_start:
{
uint8_t v_collapsed_boxed_827_; uint8_t v_clsEnabled_boxed_828_; lean_object* v_res_829_; 
v_collapsed_boxed_827_ = lean_unbox(v_collapsed_805_);
v_clsEnabled_boxed_828_ = lean_unbox(v_clsEnabled_808_);
v_res_829_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7(v_cls_804_, v_collapsed_boxed_827_, v_tag_806_, v_opts_807_, v_clsEnabled_boxed_828_, v_oldTraces_809_, v_msg_810_, v_resStartStop_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
lean_dec(v___y_821_);
lean_dec_ref(v___y_820_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_818_);
lean_dec(v___y_817_);
lean_dec(v___y_816_);
lean_dec_ref(v___y_815_);
lean_dec(v___y_814_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
lean_dec_ref(v_opts_807_);
return v_res_829_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__3(void){
_start:
{
lean_object* v___x_837_; 
v___x_837_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_837_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__4(void){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_838_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__3, &l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__3);
v___x_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
return v___x_839_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__5(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__4, &l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__4);
v___x_841_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
lean_ctor_set(v___x_841_, 1, v___x_840_);
lean_ctor_set(v___x_841_, 2, v___x_840_);
lean_ctor_set(v___x_841_, 3, v___x_840_);
return v___x_841_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__6(void){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_842_ = lean_box(0);
v___x_843_ = lean_unsigned_to_nat(16u);
v___x_844_ = lean_mk_array(v___x_843_, v___x_842_);
return v___x_844_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__7(void){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_845_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__6, &l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__6);
v___x_846_ = lean_unsigned_to_nat(0u);
v___x_847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
lean_ctor_set(v___x_847_, 1, v___x_845_);
return v___x_847_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__8(void){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_848_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__7, &l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__7);
v___x_849_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_849_, 0, v___x_848_);
lean_ctor_set(v___x_849_, 1, v___x_848_);
lean_ctor_set(v___x_849_, 2, v___x_848_);
lean_ctor_set(v___x_849_, 3, v___x_848_);
return v___x_849_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__18(void){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_863_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__14));
v___x_864_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__17));
v___x_865_ = l_Lean_Name_append(v___x_864_, v___x_863_);
return v___x_865_;
}
}
static double _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__19(void){
_start:
{
lean_object* v___x_866_; double v___x_867_; 
v___x_866_ = lean_unsigned_to_nat(1000000000u);
v___x_867_ = lean_float_of_nat(v___x_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps(lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_){
_start:
{
lean_object* v___y_888_; lean_object* v_a_889_; lean_object* v_hypQueue_910_; lean_object* v___y_911_; lean_object* v___y_912_; lean_object* v___y_913_; lean_object* v___y_914_; lean_object* v___y_915_; lean_object* v___y_916_; lean_object* v___y_917_; lean_object* v___y_918_; lean_object* v___y_919_; lean_object* v___y_920_; lean_object* v___y_921_; lean_object* v___y_922_; lean_object* v___y_923_; lean_object* v___y_924_; lean_object* v_hypQueue_956_; lean_object* v___y_957_; lean_object* v___y_958_; lean_object* v___y_959_; lean_object* v___y_960_; lean_object* v___y_961_; lean_object* v___y_962_; lean_object* v___y_963_; lean_object* v___y_964_; lean_object* v___y_965_; lean_object* v___y_966_; lean_object* v___y_967_; lean_object* v___y_968_; lean_object* v___y_969_; lean_object* v___y_970_; lean_object* v_toCold_1110_; lean_object* v_options_1111_; uint8_t v_hasTrace_1112_; 
v_toCold_1110_ = lean_ctor_get(v_a_880_, 0);
v_options_1111_ = lean_ctor_get(v_toCold_1110_, 2);
v_hasTrace_1112_ = lean_ctor_get_uint8(v_options_1111_, sizeof(void*)*1);
if (v_hasTrace_1112_ == 0)
{
lean_object* v___x_1113_; lean_object* v_satExpr_1114_; lean_object* v_hypQueue_1115_; lean_object* v_usedHyps_1116_; uint8_t v_didChange_1117_; lean_object* v_theoryState_1118_; lean_object* v_solverTimeBudgetMs_1119_; lean_object* v_roundBudget_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1130_; 
v___x_1113_ = lean_st_ref_take(v_a_869_);
v_satExpr_1114_ = lean_ctor_get(v___x_1113_, 0);
v_hypQueue_1115_ = lean_ctor_get(v___x_1113_, 1);
v_usedHyps_1116_ = lean_ctor_get(v___x_1113_, 2);
v_didChange_1117_ = lean_ctor_get_uint8(v___x_1113_, sizeof(void*)*6);
v_theoryState_1118_ = lean_ctor_get(v___x_1113_, 3);
v_solverTimeBudgetMs_1119_ = lean_ctor_get(v___x_1113_, 4);
v_roundBudget_1120_ = lean_ctor_get(v___x_1113_, 5);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1122_ = v___x_1113_;
v_isShared_1123_ = v_isSharedCheck_1130_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_roundBudget_1120_);
lean_inc(v_solverTimeBudgetMs_1119_);
lean_inc(v_theoryState_1118_);
lean_inc(v_usedHyps_1116_);
lean_inc(v_hypQueue_1115_);
lean_inc(v_satExpr_1114_);
lean_dec(v___x_1113_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1130_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1127_; 
v___x_1124_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__0));
v___x_1125_ = l_Array_append___redArg(v_usedHyps_1116_, v_hypQueue_1115_);
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 2, v___x_1125_);
lean_ctor_set(v___x_1122_, 1, v___x_1124_);
v___x_1127_ = v___x_1122_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v_satExpr_1114_);
lean_ctor_set(v_reuseFailAlloc_1129_, 1, v___x_1124_);
lean_ctor_set(v_reuseFailAlloc_1129_, 2, v___x_1125_);
lean_ctor_set(v_reuseFailAlloc_1129_, 3, v_theoryState_1118_);
lean_ctor_set(v_reuseFailAlloc_1129_, 4, v_solverTimeBudgetMs_1119_);
lean_ctor_set(v_reuseFailAlloc_1129_, 5, v_roundBudget_1120_);
lean_ctor_set_uint8(v_reuseFailAlloc_1129_, sizeof(void*)*6, v_didChange_1117_);
v___x_1127_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
lean_object* v___x_1128_; 
v___x_1128_ = lean_st_ref_put(v_a_869_, v___x_1127_);
v_hypQueue_956_ = v_hypQueue_1115_;
v___y_957_ = v_a_868_;
v___y_958_ = v_a_869_;
v___y_959_ = v_a_870_;
v___y_960_ = v_a_871_;
v___y_961_ = v_a_872_;
v___y_962_ = v_a_873_;
v___y_963_ = v_a_874_;
v___y_964_ = v_a_875_;
v___y_965_ = v_a_876_;
v___y_966_ = v_a_877_;
v___y_967_ = v_a_878_;
v___y_968_ = v_a_879_;
v___y_969_ = v_a_880_;
v___y_970_ = v_a_881_;
goto v___jp_955_;
}
}
}
else
{
lean_object* v_inheritedTraceOptions_1131_; lean_object* v___f_1132_; lean_object* v___f_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; uint8_t v___x_1137_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v_a_1141_; lean_object* v___y_1154_; lean_object* v___y_1155_; lean_object* v_a_1156_; lean_object* v___y_1159_; lean_object* v___y_1160_; uint8_t v_a_1161_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v_a_1174_; lean_object* v___y_1184_; lean_object* v___y_1185_; lean_object* v_a_1186_; lean_object* v___y_1189_; lean_object* v___y_1190_; uint8_t v_a_1191_; lean_object* v___y_1195_; lean_object* v___y_1196_; lean_object* v___y_1197_; 
v_inheritedTraceOptions_1131_ = lean_ctor_get(v_toCold_1110_, 11);
v___f_1132_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__9));
v___f_1133_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__10));
v___x_1134_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__14));
v___x_1135_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__15));
v___x_1136_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__18, &l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__18_once, _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__18);
v___x_1137_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1131_, v_options_1111_, v___x_1136_);
if (v___x_1137_ == 0)
{
lean_object* v___x_1512_; uint8_t v___x_1513_; 
v___x_1512_ = l_Lean_trace_profiler;
v___x_1513_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__6(v_options_1111_, v___x_1512_);
if (v___x_1513_ == 0)
{
lean_object* v___x_1514_; lean_object* v_satExpr_1515_; lean_object* v_hypQueue_1516_; lean_object* v_usedHyps_1517_; uint8_t v_didChange_1518_; lean_object* v_theoryState_1519_; lean_object* v_solverTimeBudgetMs_1520_; lean_object* v_roundBudget_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1531_; 
v___x_1514_ = lean_st_ref_take(v_a_869_);
v_satExpr_1515_ = lean_ctor_get(v___x_1514_, 0);
v_hypQueue_1516_ = lean_ctor_get(v___x_1514_, 1);
v_usedHyps_1517_ = lean_ctor_get(v___x_1514_, 2);
v_didChange_1518_ = lean_ctor_get_uint8(v___x_1514_, sizeof(void*)*6);
v_theoryState_1519_ = lean_ctor_get(v___x_1514_, 3);
v_solverTimeBudgetMs_1520_ = lean_ctor_get(v___x_1514_, 4);
v_roundBudget_1521_ = lean_ctor_get(v___x_1514_, 5);
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1514_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1523_ = v___x_1514_;
v_isShared_1524_ = v_isSharedCheck_1531_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_roundBudget_1521_);
lean_inc(v_solverTimeBudgetMs_1520_);
lean_inc(v_theoryState_1519_);
lean_inc(v_usedHyps_1517_);
lean_inc(v_hypQueue_1516_);
lean_inc(v_satExpr_1515_);
lean_dec(v___x_1514_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1531_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1528_; 
v___x_1525_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__0));
v___x_1526_ = l_Array_append___redArg(v_usedHyps_1517_, v_hypQueue_1516_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 2, v___x_1526_);
lean_ctor_set(v___x_1523_, 1, v___x_1525_);
v___x_1528_ = v___x_1523_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_satExpr_1515_);
lean_ctor_set(v_reuseFailAlloc_1530_, 1, v___x_1525_);
lean_ctor_set(v_reuseFailAlloc_1530_, 2, v___x_1526_);
lean_ctor_set(v_reuseFailAlloc_1530_, 3, v_theoryState_1519_);
lean_ctor_set(v_reuseFailAlloc_1530_, 4, v_solverTimeBudgetMs_1520_);
lean_ctor_set(v_reuseFailAlloc_1530_, 5, v_roundBudget_1521_);
lean_ctor_set_uint8(v_reuseFailAlloc_1530_, sizeof(void*)*6, v_didChange_1518_);
v___x_1528_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
lean_object* v___x_1529_; 
v___x_1529_ = lean_st_ref_put(v_a_869_, v___x_1528_);
v_hypQueue_956_ = v_hypQueue_1516_;
v___y_957_ = v_a_868_;
v___y_958_ = v_a_869_;
v___y_959_ = v_a_870_;
v___y_960_ = v_a_871_;
v___y_961_ = v_a_872_;
v___y_962_ = v_a_873_;
v___y_963_ = v_a_874_;
v___y_964_ = v_a_875_;
v___y_965_ = v_a_876_;
v___y_966_ = v_a_877_;
v___y_967_ = v_a_878_;
v___y_968_ = v_a_879_;
v___y_969_ = v_a_880_;
v___y_970_ = v_a_881_;
goto v___jp_955_;
}
}
}
else
{
goto v___jp_1201_;
}
}
else
{
goto v___jp_1201_;
}
v___jp_1138_:
{
lean_object* v___x_1142_; double v___x_1143_; double v___x_1144_; double v___x_1145_; double v___x_1146_; double v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1142_ = lean_io_mono_nanos_now();
v___x_1143_ = lean_float_of_nat(v___y_1140_);
v___x_1144_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__19, &l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__19_once, _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__19);
v___x_1145_ = lean_float_div(v___x_1143_, v___x_1144_);
v___x_1146_ = lean_float_of_nat(v___x_1142_);
v___x_1147_ = lean_float_div(v___x_1146_, v___x_1144_);
v___x_1148_ = lean_box_float(v___x_1145_);
v___x_1149_ = lean_box_float(v___x_1147_);
v___x_1150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1148_);
lean_ctor_set(v___x_1150_, 1, v___x_1149_);
v___x_1151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1151_, 0, v_a_1141_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v___x_1152_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7(v___x_1134_, v_hasTrace_1112_, v___x_1135_, v_options_1111_, v___x_1137_, v___y_1139_, v___f_1133_, v___x_1151_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_);
return v___x_1152_;
}
v___jp_1153_:
{
lean_object* v___x_1157_; 
v___x_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1157_, 0, v_a_1156_);
v___y_1139_ = v___y_1154_;
v___y_1140_ = v___y_1155_;
v_a_1141_ = v___x_1157_;
goto v___jp_1138_;
}
v___jp_1158_:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1162_ = lean_box(v_a_1161_);
v___x_1163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1162_);
v___y_1139_ = v___y_1159_;
v___y_1140_ = v___y_1160_;
v_a_1141_ = v___x_1163_;
goto v___jp_1138_;
}
v___jp_1164_:
{
if (lean_obj_tag(v___y_1167_) == 0)
{
lean_object* v_a_1168_; uint8_t v___x_1169_; 
v_a_1168_ = lean_ctor_get(v___y_1167_, 0);
lean_inc(v_a_1168_);
lean_dec_ref_known(v___y_1167_, 1);
v___x_1169_ = lean_unbox(v_a_1168_);
lean_dec(v_a_1168_);
v___y_1159_ = v___y_1165_;
v___y_1160_ = v___y_1166_;
v_a_1161_ = v___x_1169_;
goto v___jp_1158_;
}
else
{
lean_object* v_a_1170_; 
v_a_1170_ = lean_ctor_get(v___y_1167_, 0);
lean_inc(v_a_1170_);
lean_dec_ref_known(v___y_1167_, 1);
v___y_1154_ = v___y_1165_;
v___y_1155_ = v___y_1166_;
v_a_1156_ = v_a_1170_;
goto v___jp_1153_;
}
}
v___jp_1171_:
{
lean_object* v___x_1175_; double v___x_1176_; double v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1175_ = lean_io_get_num_heartbeats();
v___x_1176_ = lean_float_of_nat(v___y_1173_);
v___x_1177_ = lean_float_of_nat(v___x_1175_);
v___x_1178_ = lean_box_float(v___x_1176_);
v___x_1179_ = lean_box_float(v___x_1177_);
v___x_1180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1178_);
lean_ctor_set(v___x_1180_, 1, v___x_1179_);
v___x_1181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1181_, 0, v_a_1174_);
lean_ctor_set(v___x_1181_, 1, v___x_1180_);
v___x_1182_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7(v___x_1134_, v_hasTrace_1112_, v___x_1135_, v_options_1111_, v___x_1137_, v___y_1172_, v___f_1133_, v___x_1181_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_);
return v___x_1182_;
}
v___jp_1183_:
{
lean_object* v___x_1187_; 
v___x_1187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1187_, 0, v_a_1186_);
v___y_1172_ = v___y_1184_;
v___y_1173_ = v___y_1185_;
v_a_1174_ = v___x_1187_;
goto v___jp_1171_;
}
v___jp_1188_:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = lean_box(v_a_1191_);
v___x_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1192_);
v___y_1172_ = v___y_1189_;
v___y_1173_ = v___y_1190_;
v_a_1174_ = v___x_1193_;
goto v___jp_1171_;
}
v___jp_1194_:
{
if (lean_obj_tag(v___y_1197_) == 0)
{
lean_object* v_a_1198_; uint8_t v___x_1199_; 
v_a_1198_ = lean_ctor_get(v___y_1197_, 0);
lean_inc(v_a_1198_);
lean_dec_ref_known(v___y_1197_, 1);
v___x_1199_ = lean_unbox(v_a_1198_);
lean_dec(v_a_1198_);
v___y_1189_ = v___y_1195_;
v___y_1190_ = v___y_1196_;
v_a_1191_ = v___x_1199_;
goto v___jp_1188_;
}
else
{
lean_object* v_a_1200_; 
v_a_1200_ = lean_ctor_get(v___y_1197_, 0);
lean_inc(v_a_1200_);
lean_dec_ref_known(v___y_1197_, 1);
v___y_1184_ = v___y_1195_;
v___y_1185_ = v___y_1196_;
v_a_1186_ = v_a_1200_;
goto v___jp_1183_;
}
}
v___jp_1201_:
{
lean_object* v___x_1202_; lean_object* v_a_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1511_; 
v___x_1202_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__5___redArg(v_a_881_);
v_a_1203_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1205_ = v___x_1202_;
v_isShared_1206_ = v_isSharedCheck_1511_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_a_1203_);
lean_dec(v___x_1202_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1511_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1207_; uint8_t v___x_1208_; 
v___x_1207_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1208_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__6(v_options_1111_, v___x_1207_);
if (v___x_1208_ == 0)
{
lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v_satExpr_1211_; lean_object* v_hypQueue_1212_; lean_object* v_usedHyps_1213_; uint8_t v_didChange_1214_; lean_object* v_theoryState_1215_; lean_object* v_solverTimeBudgetMs_1216_; lean_object* v_roundBudget_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1359_; 
v___x_1209_ = lean_io_mono_nanos_now();
v___x_1210_ = lean_st_ref_take(v_a_869_);
v_satExpr_1211_ = lean_ctor_get(v___x_1210_, 0);
v_hypQueue_1212_ = lean_ctor_get(v___x_1210_, 1);
v_usedHyps_1213_ = lean_ctor_get(v___x_1210_, 2);
v_didChange_1214_ = lean_ctor_get_uint8(v___x_1210_, sizeof(void*)*6);
v_theoryState_1215_ = lean_ctor_get(v___x_1210_, 3);
v_solverTimeBudgetMs_1216_ = lean_ctor_get(v___x_1210_, 4);
v_roundBudget_1217_ = lean_ctor_get(v___x_1210_, 5);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1210_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1219_ = v___x_1210_;
v_isShared_1220_ = v_isSharedCheck_1359_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_roundBudget_1217_);
lean_inc(v_solverTimeBudgetMs_1216_);
lean_inc(v_theoryState_1215_);
lean_inc(v_usedHyps_1213_);
lean_inc(v_hypQueue_1212_);
lean_inc(v_satExpr_1211_);
lean_dec(v___x_1210_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1359_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1225_; 
v___x_1221_ = lean_unsigned_to_nat(0u);
v___x_1222_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__0));
v___x_1223_ = l_Array_append___redArg(v_usedHyps_1213_, v_hypQueue_1212_);
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 2, v___x_1223_);
lean_ctor_set(v___x_1219_, 1, v___x_1222_);
v___x_1225_ = v___x_1219_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_satExpr_1211_);
lean_ctor_set(v_reuseFailAlloc_1358_, 1, v___x_1222_);
lean_ctor_set(v_reuseFailAlloc_1358_, 2, v___x_1223_);
lean_ctor_set(v_reuseFailAlloc_1358_, 3, v_theoryState_1215_);
lean_ctor_set(v_reuseFailAlloc_1358_, 4, v_solverTimeBudgetMs_1216_);
lean_ctor_set(v_reuseFailAlloc_1358_, 5, v_roundBudget_1217_);
lean_ctor_set_uint8(v_reuseFailAlloc_1358_, sizeof(void*)*6, v_didChange_1214_);
v___x_1225_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; uint8_t v___x_1228_; 
v___x_1226_ = lean_st_ref_put(v_a_869_, v___x_1225_);
v___x_1227_ = lean_array_get_size(v_hypQueue_1212_);
v___x_1228_ = lean_nat_dec_eq(v___x_1227_, v___x_1221_);
if (v___x_1228_ == 0)
{
lean_object* v___x_1229_; size_t v_sz_1230_; size_t v___x_1231_; lean_object* v___x_1232_; lean_object* v_fst_1233_; lean_object* v_snd_1234_; size_t v_sz_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; uint8_t v___x_1238_; 
v___x_1229_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__1));
v_sz_1230_ = lean_array_size(v_hypQueue_1212_);
v___x_1231_ = ((size_t)0ULL);
v___x_1232_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__3(v_hypQueue_1212_, v_sz_1230_, v___x_1231_, v___x_1229_);
lean_dec_ref(v_hypQueue_1212_);
v_fst_1233_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_fst_1233_);
v_snd_1234_ = lean_ctor_get(v___x_1232_, 1);
lean_inc(v_snd_1234_);
lean_dec_ref(v___x_1232_);
v_sz_1235_ = lean_array_size(v_fst_1233_);
v___x_1236_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__4(v_sz_1235_, v___x_1231_, v_fst_1233_);
v___x_1237_ = lean_array_get_size(v_snd_1234_);
v___x_1238_ = lean_nat_dec_eq(v___x_1237_, v___x_1221_);
if (v___x_1238_ == 0)
{
lean_object* v_goal_1239_; lean_object* v_tacticContext_1240_; lean_object* v___x_1241_; lean_object* v_config_1242_; lean_object* v_mode_1243_; lean_object* v_timeout_1244_; uint8_t v_trimProofs_1245_; uint8_t v_binaryProofs_1246_; uint8_t v_acNf_1247_; uint8_t v_andFlattening_1248_; uint8_t v_embeddedConstraintSubst_1249_; uint8_t v_graphviz_1250_; lean_object* v_maxSteps_1251_; uint8_t v_solverMode_1252_; uint8_t v_uf_1253_; lean_object* v_cegarRounds_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1353_; 
v_goal_1239_ = lean_ctor_get(v_a_868_, 0);
v_tacticContext_1240_ = lean_ctor_get(v_a_868_, 2);
lean_inc_ref(v_tacticContext_1240_);
v___x_1241_ = l_Lean_Meta_Tactic_BVDecide_TacticContext_preProcessContext(v_tacticContext_1240_);
v_config_1242_ = lean_ctor_get(v___x_1241_, 0);
lean_inc_ref(v_config_1242_);
v_mode_1243_ = lean_ctor_get(v___x_1241_, 1);
lean_inc(v_mode_1243_);
lean_dec_ref(v___x_1241_);
v_timeout_1244_ = lean_ctor_get(v_config_1242_, 0);
v_trimProofs_1245_ = lean_ctor_get_uint8(v_config_1242_, sizeof(void*)*3);
v_binaryProofs_1246_ = lean_ctor_get_uint8(v_config_1242_, sizeof(void*)*3 + 1);
v_acNf_1247_ = lean_ctor_get_uint8(v_config_1242_, sizeof(void*)*3 + 2);
v_andFlattening_1248_ = lean_ctor_get_uint8(v_config_1242_, sizeof(void*)*3 + 3);
v_embeddedConstraintSubst_1249_ = lean_ctor_get_uint8(v_config_1242_, sizeof(void*)*3 + 4);
v_graphviz_1250_ = lean_ctor_get_uint8(v_config_1242_, sizeof(void*)*3 + 8);
v_maxSteps_1251_ = lean_ctor_get(v_config_1242_, 1);
v_solverMode_1252_ = lean_ctor_get_uint8(v_config_1242_, sizeof(void*)*3 + 10);
v_uf_1253_ = lean_ctor_get_uint8(v_config_1242_, sizeof(void*)*3 + 11);
v_cegarRounds_1254_ = lean_ctor_get(v_config_1242_, 2);
v_isSharedCheck_1353_ = !lean_is_exclusive(v_config_1242_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1256_ = v_config_1242_;
v_isShared_1257_ = v_isSharedCheck_1353_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_cegarRounds_1254_);
lean_inc(v_maxSteps_1251_);
lean_inc(v_timeout_1244_);
lean_dec(v_config_1242_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1353_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1259_; 
lean_inc(v_goal_1239_);
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 0, v_goal_1239_);
v___x_1259_ = v___x_1205_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_goal_1239_);
v___x_1259_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
lean_object* v___x_1261_; 
if (v_isShared_1257_ == 0)
{
v___x_1261_ = v___x_1256_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 3, 12);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_timeout_1244_);
lean_ctor_set(v_reuseFailAlloc_1351_, 1, v_maxSteps_1251_);
lean_ctor_set(v_reuseFailAlloc_1351_, 2, v_cegarRounds_1254_);
lean_ctor_set_uint8(v_reuseFailAlloc_1351_, sizeof(void*)*3, v_trimProofs_1245_);
lean_ctor_set_uint8(v_reuseFailAlloc_1351_, sizeof(void*)*3 + 1, v_binaryProofs_1246_);
lean_ctor_set_uint8(v_reuseFailAlloc_1351_, sizeof(void*)*3 + 2, v_acNf_1247_);
lean_ctor_set_uint8(v_reuseFailAlloc_1351_, sizeof(void*)*3 + 3, v_andFlattening_1248_);
lean_ctor_set_uint8(v_reuseFailAlloc_1351_, sizeof(void*)*3 + 4, v_embeddedConstraintSubst_1249_);
lean_ctor_set_uint8(v_reuseFailAlloc_1351_, sizeof(void*)*3 + 8, v_graphviz_1250_);
lean_ctor_set_uint8(v_reuseFailAlloc_1351_, sizeof(void*)*3 + 10, v_solverMode_1252_);
lean_ctor_set_uint8(v_reuseFailAlloc_1351_, sizeof(void*)*3 + 11, v_uf_1253_);
v___x_1261_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v_theoryState_1266_; lean_object* v_satExpr_1267_; lean_object* v_hypQueue_1268_; lean_object* v_usedHyps_1269_; uint8_t v_didChange_1270_; lean_object* v_solverTimeBudgetMs_1271_; lean_object* v_roundBudget_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1350_; 
lean_ctor_set_uint8(v___x_1261_, sizeof(void*)*3 + 5, v___x_1238_);
lean_ctor_set_uint8(v___x_1261_, sizeof(void*)*3 + 6, v___x_1238_);
lean_ctor_set_uint8(v___x_1261_, sizeof(void*)*3 + 7, v___x_1238_);
lean_ctor_set_uint8(v___x_1261_, sizeof(void*)*3 + 9, v___x_1238_);
v___x_1262_ = lean_box(v_hasTrace_1112_);
v___x_1263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1262_);
v___x_1264_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessContext_new(v_mode_1243_, v___x_1261_, v___x_1263_);
lean_dec_ref_known(v___x_1263_, 1);
v___x_1265_ = lean_st_ref_take(v_a_869_);
v_theoryState_1266_ = lean_ctor_get(v___x_1265_, 3);
v_satExpr_1267_ = lean_ctor_get(v___x_1265_, 0);
v_hypQueue_1268_ = lean_ctor_get(v___x_1265_, 1);
v_usedHyps_1269_ = lean_ctor_get(v___x_1265_, 2);
v_didChange_1270_ = lean_ctor_get_uint8(v___x_1265_, sizeof(void*)*6);
v_solverTimeBudgetMs_1271_ = lean_ctor_get(v___x_1265_, 4);
v_roundBudget_1272_ = lean_ctor_get(v___x_1265_, 5);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1274_ = v___x_1265_;
v_isShared_1275_ = v_isSharedCheck_1350_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_roundBudget_1272_);
lean_inc(v_solverTimeBudgetMs_1271_);
lean_inc(v_theoryState_1266_);
lean_inc(v_usedHyps_1269_);
lean_inc(v_hypQueue_1268_);
lean_inc(v_satExpr_1267_);
lean_dec(v___x_1265_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1350_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v_funState_1276_; lean_object* v_bitvecState_1277_; lean_object* v_preprocessCaches_1278_; lean_object* v_satSolver_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1349_; 
v_funState_1276_ = lean_ctor_get(v_theoryState_1266_, 0);
v_bitvecState_1277_ = lean_ctor_get(v_theoryState_1266_, 1);
v_preprocessCaches_1278_ = lean_ctor_get(v_theoryState_1266_, 2);
v_satSolver_1279_ = lean_ctor_get(v_theoryState_1266_, 3);
v_isSharedCheck_1349_ = !lean_is_exclusive(v_theoryState_1266_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1281_ = v_theoryState_1266_;
v_isShared_1282_ = v_isSharedCheck_1349_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_satSolver_1279_);
lean_inc(v_preprocessCaches_1278_);
lean_inc(v_bitvecState_1277_);
lean_inc(v_funState_1276_);
lean_dec(v_theoryState_1266_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1349_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1283_; lean_object* v___x_1285_; 
v___x_1283_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__5, &l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__5);
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 2, v___x_1283_);
v___x_1285_ = v___x_1281_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_funState_1276_);
lean_ctor_set(v_reuseFailAlloc_1348_, 1, v_bitvecState_1277_);
lean_ctor_set(v_reuseFailAlloc_1348_, 2, v___x_1283_);
lean_ctor_set(v_reuseFailAlloc_1348_, 3, v_satSolver_1279_);
v___x_1285_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
lean_object* v___x_1287_; 
if (v_isShared_1275_ == 0)
{
lean_ctor_set(v___x_1274_, 3, v___x_1285_);
v___x_1287_ = v___x_1274_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v_satExpr_1267_);
lean_ctor_set(v_reuseFailAlloc_1347_, 1, v_hypQueue_1268_);
lean_ctor_set(v_reuseFailAlloc_1347_, 2, v_usedHyps_1269_);
lean_ctor_set(v_reuseFailAlloc_1347_, 3, v___x_1285_);
lean_ctor_set(v_reuseFailAlloc_1347_, 4, v_solverTimeBudgetMs_1271_);
lean_ctor_set(v_reuseFailAlloc_1347_, 5, v_roundBudget_1272_);
lean_ctor_set_uint8(v_reuseFailAlloc_1347_, sizeof(void*)*6, v_didChange_1270_);
v___x_1287_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v_typeAnalysis_1293_; lean_object* v_target_1294_; lean_object* v_hypotheses_1295_; uint8_t v_didChange_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1345_; 
v___x_1288_ = lean_st_ref_put(v_a_869_, v___x_1287_);
v___x_1289_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__8, &l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__8_once, _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__8);
v___x_1290_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1290_, 0, v___x_1283_);
lean_ctor_set(v___x_1290_, 1, v___x_1289_);
lean_ctor_set(v___x_1290_, 2, v___x_1259_);
lean_ctor_set(v___x_1290_, 3, v___x_1222_);
lean_ctor_set_uint8(v___x_1290_, sizeof(void*)*4, v___x_1238_);
v___x_1291_ = lean_st_mk_ref(v___x_1290_);
v___x_1292_ = lean_st_ref_take(v___x_1291_);
v_typeAnalysis_1293_ = lean_ctor_get(v___x_1292_, 1);
v_target_1294_ = lean_ctor_get(v___x_1292_, 2);
v_hypotheses_1295_ = lean_ctor_get(v___x_1292_, 3);
v_didChange_1296_ = lean_ctor_get_uint8(v___x_1292_, sizeof(void*)*4);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1292_);
if (v_isSharedCheck_1345_ == 0)
{
lean_object* v_unused_1346_; 
v_unused_1346_ = lean_ctor_get(v___x_1292_, 0);
lean_dec(v_unused_1346_);
v___x_1298_ = v___x_1292_;
v_isShared_1299_ = v_isSharedCheck_1345_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_hypotheses_1295_);
lean_inc(v_target_1294_);
lean_inc(v_typeAnalysis_1293_);
lean_dec(v___x_1292_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1345_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
lean_ctor_set(v___x_1298_, 0, v_preprocessCaches_1278_);
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_preprocessCaches_1278_);
lean_ctor_set(v_reuseFailAlloc_1344_, 1, v_typeAnalysis_1293_);
lean_ctor_set(v_reuseFailAlloc_1344_, 2, v_target_1294_);
lean_ctor_set(v_reuseFailAlloc_1344_, 3, v_hypotheses_1295_);
lean_ctor_set_uint8(v_reuseFailAlloc_1344_, sizeof(void*)*4, v_didChange_1296_);
v___x_1301_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
lean_object* v___x_1302_; size_t v_sz_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1302_ = lean_st_ref_put(v___x_1291_, v___x_1301_);
v_sz_1303_ = lean_array_size(v_snd_1234_);
v___x_1304_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__4(v_sz_1303_, v___x_1231_, v_snd_1234_);
v___x_1305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1304_);
v___x_1306_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize(v___x_1305_, v___x_1264_, v___x_1291_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_);
lean_dec_ref(v___x_1264_);
lean_dec_ref_known(v___x_1305_, 1);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_object* v_a_1307_; lean_object* v___x_1308_; uint8_t v___x_1309_; 
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_a_1307_);
lean_dec_ref_known(v___x_1306_, 1);
v___x_1308_ = lean_st_ref_get(v___x_1291_);
lean_dec(v___x_1291_);
v___x_1309_ = lean_unbox(v_a_1307_);
lean_dec(v_a_1307_);
if (v___x_1309_ == 0)
{
lean_object* v_caches_1310_; lean_object* v_hypotheses_1311_; lean_object* v___x_1312_; lean_object* v_theoryState_1313_; lean_object* v_satExpr_1314_; lean_object* v_hypQueue_1315_; lean_object* v_usedHyps_1316_; uint8_t v_didChange_1317_; lean_object* v_solverTimeBudgetMs_1318_; lean_object* v_roundBudget_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1341_; 
v_caches_1310_ = lean_ctor_get(v___x_1308_, 0);
lean_inc_ref(v_caches_1310_);
v_hypotheses_1311_ = lean_ctor_get(v___x_1308_, 3);
lean_inc_ref(v_hypotheses_1311_);
lean_dec(v___x_1308_);
v___x_1312_ = lean_st_ref_take(v_a_869_);
v_theoryState_1313_ = lean_ctor_get(v___x_1312_, 3);
v_satExpr_1314_ = lean_ctor_get(v___x_1312_, 0);
v_hypQueue_1315_ = lean_ctor_get(v___x_1312_, 1);
v_usedHyps_1316_ = lean_ctor_get(v___x_1312_, 2);
v_didChange_1317_ = lean_ctor_get_uint8(v___x_1312_, sizeof(void*)*6);
v_solverTimeBudgetMs_1318_ = lean_ctor_get(v___x_1312_, 4);
v_roundBudget_1319_ = lean_ctor_get(v___x_1312_, 5);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1312_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1321_ = v___x_1312_;
v_isShared_1322_ = v_isSharedCheck_1341_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_roundBudget_1319_);
lean_inc(v_solverTimeBudgetMs_1318_);
lean_inc(v_theoryState_1313_);
lean_inc(v_usedHyps_1316_);
lean_inc(v_hypQueue_1315_);
lean_inc(v_satExpr_1314_);
lean_dec(v___x_1312_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1341_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v_funState_1323_; lean_object* v_bitvecState_1324_; lean_object* v_satSolver_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1339_; 
v_funState_1323_ = lean_ctor_get(v_theoryState_1313_, 0);
v_bitvecState_1324_ = lean_ctor_get(v_theoryState_1313_, 1);
v_satSolver_1325_ = lean_ctor_get(v_theoryState_1313_, 3);
v_isSharedCheck_1339_ = !lean_is_exclusive(v_theoryState_1313_);
if (v_isSharedCheck_1339_ == 0)
{
lean_object* v_unused_1340_; 
v_unused_1340_ = lean_ctor_get(v_theoryState_1313_, 2);
lean_dec(v_unused_1340_);
v___x_1327_ = v_theoryState_1313_;
v_isShared_1328_ = v_isSharedCheck_1339_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_satSolver_1325_);
lean_inc(v_bitvecState_1324_);
lean_inc(v_funState_1323_);
lean_dec(v_theoryState_1313_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1339_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
lean_ctor_set(v___x_1327_, 2, v_caches_1310_);
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_funState_1323_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v_bitvecState_1324_);
lean_ctor_set(v_reuseFailAlloc_1338_, 2, v_caches_1310_);
lean_ctor_set(v_reuseFailAlloc_1338_, 3, v_satSolver_1325_);
v___x_1330_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
lean_object* v___x_1332_; 
if (v_isShared_1322_ == 0)
{
lean_ctor_set(v___x_1321_, 3, v___x_1330_);
v___x_1332_ = v___x_1321_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v_satExpr_1314_);
lean_ctor_set(v_reuseFailAlloc_1337_, 1, v_hypQueue_1315_);
lean_ctor_set(v_reuseFailAlloc_1337_, 2, v_usedHyps_1316_);
lean_ctor_set(v_reuseFailAlloc_1337_, 3, v___x_1330_);
lean_ctor_set(v_reuseFailAlloc_1337_, 4, v_solverTimeBudgetMs_1318_);
lean_ctor_set(v_reuseFailAlloc_1337_, 5, v_roundBudget_1319_);
lean_ctor_set_uint8(v_reuseFailAlloc_1337_, sizeof(void*)*6, v_didChange_1317_);
v___x_1332_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1333_ = lean_st_ref_put(v_a_869_, v___x_1332_);
v___x_1334_ = l_Array_append___redArg(v___x_1236_, v_hypotheses_1311_);
lean_dec_ref(v_hypotheses_1311_);
v___x_1335_ = lean_box(0);
v___x_1336_ = l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__1(v___f_1132_, v___x_1335_, v___x_1334_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_);
lean_dec_ref(v___x_1334_);
v___y_1165_ = v_a_1203_;
v___y_1166_ = v___x_1209_;
v___y_1167_ = v___x_1336_;
goto v___jp_1164_;
}
}
}
}
}
else
{
uint8_t v___x_1342_; 
lean_dec(v___x_1308_);
lean_dec_ref(v___x_1236_);
v___x_1342_ = 0;
v___y_1159_ = v_a_1203_;
v___y_1160_ = v___x_1209_;
v_a_1161_ = v___x_1342_;
goto v___jp_1158_;
}
}
else
{
lean_object* v_a_1343_; 
lean_dec(v___x_1291_);
lean_dec_ref(v___x_1236_);
v_a_1343_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_a_1343_);
lean_dec_ref_known(v___x_1306_, 1);
v___y_1154_ = v_a_1203_;
v___y_1155_ = v___x_1209_;
v_a_1156_ = v_a_1343_;
goto v___jp_1153_;
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
lean_object* v___x_1354_; lean_object* v___x_1355_; 
lean_dec(v_snd_1234_);
lean_del_object(v___x_1205_);
v___x_1354_ = lean_box(0);
v___x_1355_ = l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__1(v___f_1132_, v___x_1354_, v___x_1236_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_);
lean_dec_ref(v___x_1236_);
v___y_1165_ = v_a_1203_;
v___y_1166_ = v___x_1209_;
v___y_1167_ = v___x_1355_;
goto v___jp_1164_;
}
}
else
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
lean_dec_ref(v_hypQueue_1212_);
lean_del_object(v___x_1205_);
v___x_1356_ = lean_box(0);
v___x_1357_ = l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__0(v___x_1356_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_);
v___y_1165_ = v_a_1203_;
v___y_1166_ = v___x_1209_;
v___y_1167_ = v___x_1357_;
goto v___jp_1164_;
}
}
}
}
else
{
lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v_satExpr_1362_; lean_object* v_hypQueue_1363_; lean_object* v_usedHyps_1364_; uint8_t v_didChange_1365_; lean_object* v_theoryState_1366_; lean_object* v_solverTimeBudgetMs_1367_; lean_object* v_roundBudget_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1510_; 
v___x_1360_ = lean_io_get_num_heartbeats();
v___x_1361_ = lean_st_ref_take(v_a_869_);
v_satExpr_1362_ = lean_ctor_get(v___x_1361_, 0);
v_hypQueue_1363_ = lean_ctor_get(v___x_1361_, 1);
v_usedHyps_1364_ = lean_ctor_get(v___x_1361_, 2);
v_didChange_1365_ = lean_ctor_get_uint8(v___x_1361_, sizeof(void*)*6);
v_theoryState_1366_ = lean_ctor_get(v___x_1361_, 3);
v_solverTimeBudgetMs_1367_ = lean_ctor_get(v___x_1361_, 4);
v_roundBudget_1368_ = lean_ctor_get(v___x_1361_, 5);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1361_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1370_ = v___x_1361_;
v_isShared_1371_ = v_isSharedCheck_1510_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_roundBudget_1368_);
lean_inc(v_solverTimeBudgetMs_1367_);
lean_inc(v_theoryState_1366_);
lean_inc(v_usedHyps_1364_);
lean_inc(v_hypQueue_1363_);
lean_inc(v_satExpr_1362_);
lean_dec(v___x_1361_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1510_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1376_; 
v___x_1372_ = lean_unsigned_to_nat(0u);
v___x_1373_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__0));
v___x_1374_ = l_Array_append___redArg(v_usedHyps_1364_, v_hypQueue_1363_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 2, v___x_1374_);
lean_ctor_set(v___x_1370_, 1, v___x_1373_);
v___x_1376_ = v___x_1370_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_satExpr_1362_);
lean_ctor_set(v_reuseFailAlloc_1509_, 1, v___x_1373_);
lean_ctor_set(v_reuseFailAlloc_1509_, 2, v___x_1374_);
lean_ctor_set(v_reuseFailAlloc_1509_, 3, v_theoryState_1366_);
lean_ctor_set(v_reuseFailAlloc_1509_, 4, v_solverTimeBudgetMs_1367_);
lean_ctor_set(v_reuseFailAlloc_1509_, 5, v_roundBudget_1368_);
lean_ctor_set_uint8(v_reuseFailAlloc_1509_, sizeof(void*)*6, v_didChange_1365_);
v___x_1376_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; uint8_t v___x_1379_; 
v___x_1377_ = lean_st_ref_put(v_a_869_, v___x_1376_);
v___x_1378_ = lean_array_get_size(v_hypQueue_1363_);
v___x_1379_ = lean_nat_dec_eq(v___x_1378_, v___x_1372_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; size_t v_sz_1381_; size_t v___x_1382_; lean_object* v___x_1383_; lean_object* v_fst_1384_; lean_object* v_snd_1385_; size_t v_sz_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; uint8_t v___x_1389_; 
v___x_1380_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__1));
v_sz_1381_ = lean_array_size(v_hypQueue_1363_);
v___x_1382_ = ((size_t)0ULL);
v___x_1383_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__3(v_hypQueue_1363_, v_sz_1381_, v___x_1382_, v___x_1380_);
lean_dec_ref(v_hypQueue_1363_);
v_fst_1384_ = lean_ctor_get(v___x_1383_, 0);
lean_inc(v_fst_1384_);
v_snd_1385_ = lean_ctor_get(v___x_1383_, 1);
lean_inc(v_snd_1385_);
lean_dec_ref(v___x_1383_);
v_sz_1386_ = lean_array_size(v_fst_1384_);
v___x_1387_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__4(v_sz_1386_, v___x_1382_, v_fst_1384_);
v___x_1388_ = lean_array_get_size(v_snd_1385_);
v___x_1389_ = lean_nat_dec_eq(v___x_1388_, v___x_1372_);
if (v___x_1389_ == 0)
{
lean_object* v_goal_1390_; lean_object* v_tacticContext_1391_; lean_object* v___x_1392_; lean_object* v_config_1393_; lean_object* v_mode_1394_; lean_object* v_timeout_1395_; uint8_t v_trimProofs_1396_; uint8_t v_binaryProofs_1397_; uint8_t v_acNf_1398_; uint8_t v_andFlattening_1399_; uint8_t v_embeddedConstraintSubst_1400_; uint8_t v_graphviz_1401_; lean_object* v_maxSteps_1402_; uint8_t v_solverMode_1403_; uint8_t v_uf_1404_; lean_object* v_cegarRounds_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1504_; 
v_goal_1390_ = lean_ctor_get(v_a_868_, 0);
v_tacticContext_1391_ = lean_ctor_get(v_a_868_, 2);
lean_inc_ref(v_tacticContext_1391_);
v___x_1392_ = l_Lean_Meta_Tactic_BVDecide_TacticContext_preProcessContext(v_tacticContext_1391_);
v_config_1393_ = lean_ctor_get(v___x_1392_, 0);
lean_inc_ref(v_config_1393_);
v_mode_1394_ = lean_ctor_get(v___x_1392_, 1);
lean_inc(v_mode_1394_);
lean_dec_ref(v___x_1392_);
v_timeout_1395_ = lean_ctor_get(v_config_1393_, 0);
v_trimProofs_1396_ = lean_ctor_get_uint8(v_config_1393_, sizeof(void*)*3);
v_binaryProofs_1397_ = lean_ctor_get_uint8(v_config_1393_, sizeof(void*)*3 + 1);
v_acNf_1398_ = lean_ctor_get_uint8(v_config_1393_, sizeof(void*)*3 + 2);
v_andFlattening_1399_ = lean_ctor_get_uint8(v_config_1393_, sizeof(void*)*3 + 3);
v_embeddedConstraintSubst_1400_ = lean_ctor_get_uint8(v_config_1393_, sizeof(void*)*3 + 4);
v_graphviz_1401_ = lean_ctor_get_uint8(v_config_1393_, sizeof(void*)*3 + 8);
v_maxSteps_1402_ = lean_ctor_get(v_config_1393_, 1);
v_solverMode_1403_ = lean_ctor_get_uint8(v_config_1393_, sizeof(void*)*3 + 10);
v_uf_1404_ = lean_ctor_get_uint8(v_config_1393_, sizeof(void*)*3 + 11);
v_cegarRounds_1405_ = lean_ctor_get(v_config_1393_, 2);
v_isSharedCheck_1504_ = !lean_is_exclusive(v_config_1393_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1407_ = v_config_1393_;
v_isShared_1408_ = v_isSharedCheck_1504_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_cegarRounds_1405_);
lean_inc(v_maxSteps_1402_);
lean_inc(v_timeout_1395_);
lean_dec(v_config_1393_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1504_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1410_; 
lean_inc(v_goal_1390_);
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 0, v_goal_1390_);
v___x_1410_ = v___x_1205_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_goal_1390_);
v___x_1410_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
lean_object* v___x_1412_; 
if (v_isShared_1408_ == 0)
{
v___x_1412_ = v___x_1407_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 3, 12);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_timeout_1395_);
lean_ctor_set(v_reuseFailAlloc_1502_, 1, v_maxSteps_1402_);
lean_ctor_set(v_reuseFailAlloc_1502_, 2, v_cegarRounds_1405_);
lean_ctor_set_uint8(v_reuseFailAlloc_1502_, sizeof(void*)*3, v_trimProofs_1396_);
lean_ctor_set_uint8(v_reuseFailAlloc_1502_, sizeof(void*)*3 + 1, v_binaryProofs_1397_);
lean_ctor_set_uint8(v_reuseFailAlloc_1502_, sizeof(void*)*3 + 2, v_acNf_1398_);
lean_ctor_set_uint8(v_reuseFailAlloc_1502_, sizeof(void*)*3 + 3, v_andFlattening_1399_);
lean_ctor_set_uint8(v_reuseFailAlloc_1502_, sizeof(void*)*3 + 4, v_embeddedConstraintSubst_1400_);
lean_ctor_set_uint8(v_reuseFailAlloc_1502_, sizeof(void*)*3 + 8, v_graphviz_1401_);
lean_ctor_set_uint8(v_reuseFailAlloc_1502_, sizeof(void*)*3 + 10, v_solverMode_1403_);
lean_ctor_set_uint8(v_reuseFailAlloc_1502_, sizeof(void*)*3 + 11, v_uf_1404_);
v___x_1412_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v_theoryState_1417_; lean_object* v_satExpr_1418_; lean_object* v_hypQueue_1419_; lean_object* v_usedHyps_1420_; uint8_t v_didChange_1421_; lean_object* v_solverTimeBudgetMs_1422_; lean_object* v_roundBudget_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1501_; 
lean_ctor_set_uint8(v___x_1412_, sizeof(void*)*3 + 5, v___x_1389_);
lean_ctor_set_uint8(v___x_1412_, sizeof(void*)*3 + 6, v___x_1389_);
lean_ctor_set_uint8(v___x_1412_, sizeof(void*)*3 + 7, v___x_1389_);
lean_ctor_set_uint8(v___x_1412_, sizeof(void*)*3 + 9, v___x_1389_);
v___x_1413_ = lean_box(v___x_1208_);
v___x_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1413_);
v___x_1415_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessContext_new(v_mode_1394_, v___x_1412_, v___x_1414_);
lean_dec_ref_known(v___x_1414_, 1);
v___x_1416_ = lean_st_ref_take(v_a_869_);
v_theoryState_1417_ = lean_ctor_get(v___x_1416_, 3);
v_satExpr_1418_ = lean_ctor_get(v___x_1416_, 0);
v_hypQueue_1419_ = lean_ctor_get(v___x_1416_, 1);
v_usedHyps_1420_ = lean_ctor_get(v___x_1416_, 2);
v_didChange_1421_ = lean_ctor_get_uint8(v___x_1416_, sizeof(void*)*6);
v_solverTimeBudgetMs_1422_ = lean_ctor_get(v___x_1416_, 4);
v_roundBudget_1423_ = lean_ctor_get(v___x_1416_, 5);
v_isSharedCheck_1501_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1425_ = v___x_1416_;
v_isShared_1426_ = v_isSharedCheck_1501_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_roundBudget_1423_);
lean_inc(v_solverTimeBudgetMs_1422_);
lean_inc(v_theoryState_1417_);
lean_inc(v_usedHyps_1420_);
lean_inc(v_hypQueue_1419_);
lean_inc(v_satExpr_1418_);
lean_dec(v___x_1416_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1501_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v_funState_1427_; lean_object* v_bitvecState_1428_; lean_object* v_preprocessCaches_1429_; lean_object* v_satSolver_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1500_; 
v_funState_1427_ = lean_ctor_get(v_theoryState_1417_, 0);
v_bitvecState_1428_ = lean_ctor_get(v_theoryState_1417_, 1);
v_preprocessCaches_1429_ = lean_ctor_get(v_theoryState_1417_, 2);
v_satSolver_1430_ = lean_ctor_get(v_theoryState_1417_, 3);
v_isSharedCheck_1500_ = !lean_is_exclusive(v_theoryState_1417_);
if (v_isSharedCheck_1500_ == 0)
{
v___x_1432_ = v_theoryState_1417_;
v_isShared_1433_ = v_isSharedCheck_1500_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_satSolver_1430_);
lean_inc(v_preprocessCaches_1429_);
lean_inc(v_bitvecState_1428_);
lean_inc(v_funState_1427_);
lean_dec(v_theoryState_1417_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1500_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1434_; lean_object* v___x_1436_; 
v___x_1434_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__5, &l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__5);
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 2, v___x_1434_);
v___x_1436_ = v___x_1432_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v_funState_1427_);
lean_ctor_set(v_reuseFailAlloc_1499_, 1, v_bitvecState_1428_);
lean_ctor_set(v_reuseFailAlloc_1499_, 2, v___x_1434_);
lean_ctor_set(v_reuseFailAlloc_1499_, 3, v_satSolver_1430_);
v___x_1436_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
lean_object* v___x_1438_; 
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 3, v___x_1436_);
v___x_1438_ = v___x_1425_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v_satExpr_1418_);
lean_ctor_set(v_reuseFailAlloc_1498_, 1, v_hypQueue_1419_);
lean_ctor_set(v_reuseFailAlloc_1498_, 2, v_usedHyps_1420_);
lean_ctor_set(v_reuseFailAlloc_1498_, 3, v___x_1436_);
lean_ctor_set(v_reuseFailAlloc_1498_, 4, v_solverTimeBudgetMs_1422_);
lean_ctor_set(v_reuseFailAlloc_1498_, 5, v_roundBudget_1423_);
lean_ctor_set_uint8(v_reuseFailAlloc_1498_, sizeof(void*)*6, v_didChange_1421_);
v___x_1438_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v_typeAnalysis_1444_; lean_object* v_target_1445_; lean_object* v_hypotheses_1446_; uint8_t v_didChange_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1496_; 
v___x_1439_ = lean_st_ref_put(v_a_869_, v___x_1438_);
v___x_1440_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__8, &l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__8_once, _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__8);
v___x_1441_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1441_, 0, v___x_1434_);
lean_ctor_set(v___x_1441_, 1, v___x_1440_);
lean_ctor_set(v___x_1441_, 2, v___x_1410_);
lean_ctor_set(v___x_1441_, 3, v___x_1373_);
lean_ctor_set_uint8(v___x_1441_, sizeof(void*)*4, v___x_1389_);
v___x_1442_ = lean_st_mk_ref(v___x_1441_);
v___x_1443_ = lean_st_ref_take(v___x_1442_);
v_typeAnalysis_1444_ = lean_ctor_get(v___x_1443_, 1);
v_target_1445_ = lean_ctor_get(v___x_1443_, 2);
v_hypotheses_1446_ = lean_ctor_get(v___x_1443_, 3);
v_didChange_1447_ = lean_ctor_get_uint8(v___x_1443_, sizeof(void*)*4);
v_isSharedCheck_1496_ = !lean_is_exclusive(v___x_1443_);
if (v_isSharedCheck_1496_ == 0)
{
lean_object* v_unused_1497_; 
v_unused_1497_ = lean_ctor_get(v___x_1443_, 0);
lean_dec(v_unused_1497_);
v___x_1449_ = v___x_1443_;
v_isShared_1450_ = v_isSharedCheck_1496_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_hypotheses_1446_);
lean_inc(v_target_1445_);
lean_inc(v_typeAnalysis_1444_);
lean_dec(v___x_1443_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1496_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1452_; 
if (v_isShared_1450_ == 0)
{
lean_ctor_set(v___x_1449_, 0, v_preprocessCaches_1429_);
v___x_1452_ = v___x_1449_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_preprocessCaches_1429_);
lean_ctor_set(v_reuseFailAlloc_1495_, 1, v_typeAnalysis_1444_);
lean_ctor_set(v_reuseFailAlloc_1495_, 2, v_target_1445_);
lean_ctor_set(v_reuseFailAlloc_1495_, 3, v_hypotheses_1446_);
lean_ctor_set_uint8(v_reuseFailAlloc_1495_, sizeof(void*)*4, v_didChange_1447_);
v___x_1452_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
lean_object* v___x_1453_; size_t v_sz_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v___x_1453_ = lean_st_ref_put(v___x_1442_, v___x_1452_);
v_sz_1454_ = lean_array_size(v_snd_1385_);
v___x_1455_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__4(v_sz_1454_, v___x_1382_, v_snd_1385_);
v___x_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
v___x_1457_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize(v___x_1456_, v___x_1415_, v___x_1442_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_);
lean_dec_ref(v___x_1415_);
lean_dec_ref_known(v___x_1456_, 1);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_object* v_a_1458_; lean_object* v___x_1459_; uint8_t v___x_1460_; 
v_a_1458_ = lean_ctor_get(v___x_1457_, 0);
lean_inc(v_a_1458_);
lean_dec_ref_known(v___x_1457_, 1);
v___x_1459_ = lean_st_ref_get(v___x_1442_);
lean_dec(v___x_1442_);
v___x_1460_ = lean_unbox(v_a_1458_);
lean_dec(v_a_1458_);
if (v___x_1460_ == 0)
{
lean_object* v_caches_1461_; lean_object* v_hypotheses_1462_; lean_object* v___x_1463_; lean_object* v_theoryState_1464_; lean_object* v_satExpr_1465_; lean_object* v_hypQueue_1466_; lean_object* v_usedHyps_1467_; uint8_t v_didChange_1468_; lean_object* v_solverTimeBudgetMs_1469_; lean_object* v_roundBudget_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1492_; 
v_caches_1461_ = lean_ctor_get(v___x_1459_, 0);
lean_inc_ref(v_caches_1461_);
v_hypotheses_1462_ = lean_ctor_get(v___x_1459_, 3);
lean_inc_ref(v_hypotheses_1462_);
lean_dec(v___x_1459_);
v___x_1463_ = lean_st_ref_take(v_a_869_);
v_theoryState_1464_ = lean_ctor_get(v___x_1463_, 3);
v_satExpr_1465_ = lean_ctor_get(v___x_1463_, 0);
v_hypQueue_1466_ = lean_ctor_get(v___x_1463_, 1);
v_usedHyps_1467_ = lean_ctor_get(v___x_1463_, 2);
v_didChange_1468_ = lean_ctor_get_uint8(v___x_1463_, sizeof(void*)*6);
v_solverTimeBudgetMs_1469_ = lean_ctor_get(v___x_1463_, 4);
v_roundBudget_1470_ = lean_ctor_get(v___x_1463_, 5);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1472_ = v___x_1463_;
v_isShared_1473_ = v_isSharedCheck_1492_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_roundBudget_1470_);
lean_inc(v_solverTimeBudgetMs_1469_);
lean_inc(v_theoryState_1464_);
lean_inc(v_usedHyps_1467_);
lean_inc(v_hypQueue_1466_);
lean_inc(v_satExpr_1465_);
lean_dec(v___x_1463_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1492_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v_funState_1474_; lean_object* v_bitvecState_1475_; lean_object* v_satSolver_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1490_; 
v_funState_1474_ = lean_ctor_get(v_theoryState_1464_, 0);
v_bitvecState_1475_ = lean_ctor_get(v_theoryState_1464_, 1);
v_satSolver_1476_ = lean_ctor_get(v_theoryState_1464_, 3);
v_isSharedCheck_1490_ = !lean_is_exclusive(v_theoryState_1464_);
if (v_isSharedCheck_1490_ == 0)
{
lean_object* v_unused_1491_; 
v_unused_1491_ = lean_ctor_get(v_theoryState_1464_, 2);
lean_dec(v_unused_1491_);
v___x_1478_ = v_theoryState_1464_;
v_isShared_1479_ = v_isSharedCheck_1490_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_satSolver_1476_);
lean_inc(v_bitvecState_1475_);
lean_inc(v_funState_1474_);
lean_dec(v_theoryState_1464_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1490_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1481_; 
if (v_isShared_1479_ == 0)
{
lean_ctor_set(v___x_1478_, 2, v_caches_1461_);
v___x_1481_ = v___x_1478_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_funState_1474_);
lean_ctor_set(v_reuseFailAlloc_1489_, 1, v_bitvecState_1475_);
lean_ctor_set(v_reuseFailAlloc_1489_, 2, v_caches_1461_);
lean_ctor_set(v_reuseFailAlloc_1489_, 3, v_satSolver_1476_);
v___x_1481_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
lean_object* v___x_1483_; 
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 3, v___x_1481_);
v___x_1483_ = v___x_1472_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_satExpr_1465_);
lean_ctor_set(v_reuseFailAlloc_1488_, 1, v_hypQueue_1466_);
lean_ctor_set(v_reuseFailAlloc_1488_, 2, v_usedHyps_1467_);
lean_ctor_set(v_reuseFailAlloc_1488_, 3, v___x_1481_);
lean_ctor_set(v_reuseFailAlloc_1488_, 4, v_solverTimeBudgetMs_1469_);
lean_ctor_set(v_reuseFailAlloc_1488_, 5, v_roundBudget_1470_);
lean_ctor_set_uint8(v_reuseFailAlloc_1488_, sizeof(void*)*6, v_didChange_1468_);
v___x_1483_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1484_ = lean_st_ref_put(v_a_869_, v___x_1483_);
v___x_1485_ = l_Array_append___redArg(v___x_1387_, v_hypotheses_1462_);
lean_dec_ref(v_hypotheses_1462_);
v___x_1486_ = lean_box(0);
v___x_1487_ = l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__1(v___f_1132_, v___x_1486_, v___x_1485_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_);
lean_dec_ref(v___x_1485_);
v___y_1195_ = v_a_1203_;
v___y_1196_ = v___x_1360_;
v___y_1197_ = v___x_1487_;
goto v___jp_1194_;
}
}
}
}
}
else
{
uint8_t v___x_1493_; 
lean_dec(v___x_1459_);
lean_dec_ref(v___x_1387_);
v___x_1493_ = 0;
v___y_1189_ = v_a_1203_;
v___y_1190_ = v___x_1360_;
v_a_1191_ = v___x_1493_;
goto v___jp_1188_;
}
}
else
{
lean_object* v_a_1494_; 
lean_dec(v___x_1442_);
lean_dec_ref(v___x_1387_);
v_a_1494_ = lean_ctor_get(v___x_1457_, 0);
lean_inc(v_a_1494_);
lean_dec_ref_known(v___x_1457_, 1);
v___y_1184_ = v_a_1203_;
v___y_1185_ = v___x_1360_;
v_a_1186_ = v_a_1494_;
goto v___jp_1183_;
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
lean_object* v___x_1505_; lean_object* v___x_1506_; 
lean_dec(v_snd_1385_);
lean_del_object(v___x_1205_);
v___x_1505_ = lean_box(0);
v___x_1506_ = l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__1(v___f_1132_, v___x_1505_, v___x_1387_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_);
lean_dec_ref(v___x_1387_);
v___y_1195_ = v_a_1203_;
v___y_1196_ = v___x_1360_;
v___y_1197_ = v___x_1506_;
goto v___jp_1194_;
}
}
else
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
lean_dec_ref(v_hypQueue_1363_);
lean_del_object(v___x_1205_);
v___x_1507_ = lean_box(0);
v___x_1508_ = l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__0(v___x_1507_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_);
v___y_1195_ = v_a_1203_;
v___y_1196_ = v___x_1360_;
v___y_1197_ = v___x_1508_;
goto v___jp_1194_;
}
}
}
}
}
}
}
v___jp_883_:
{
uint8_t v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_884_ = 2;
v___x_885_ = lean_box(v___x_884_);
v___x_886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_886_, 0, v___x_885_);
return v___x_886_;
}
v___jp_887_:
{
lean_object* v___x_890_; lean_object* v_hypQueue_891_; lean_object* v_usedHyps_892_; uint8_t v_didChange_893_; lean_object* v_theoryState_894_; lean_object* v_solverTimeBudgetMs_895_; lean_object* v_roundBudget_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_907_; 
v___x_890_ = lean_st_ref_take(v___y_888_);
v_hypQueue_891_ = lean_ctor_get(v___x_890_, 1);
v_usedHyps_892_ = lean_ctor_get(v___x_890_, 2);
v_didChange_893_ = lean_ctor_get_uint8(v___x_890_, sizeof(void*)*6);
v_theoryState_894_ = lean_ctor_get(v___x_890_, 3);
v_solverTimeBudgetMs_895_ = lean_ctor_get(v___x_890_, 4);
v_roundBudget_896_ = lean_ctor_get(v___x_890_, 5);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_907_ == 0)
{
lean_object* v_unused_908_; 
v_unused_908_ = lean_ctor_get(v___x_890_, 0);
lean_dec(v_unused_908_);
v___x_898_ = v___x_890_;
v_isShared_899_ = v_isSharedCheck_907_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_roundBudget_896_);
lean_inc(v_solverTimeBudgetMs_895_);
lean_inc(v_theoryState_894_);
lean_inc(v_usedHyps_892_);
lean_inc(v_hypQueue_891_);
lean_dec(v___x_890_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_907_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_899_ == 0)
{
lean_ctor_set(v___x_898_, 0, v_a_889_);
v___x_901_ = v___x_898_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_a_889_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_hypQueue_891_);
lean_ctor_set(v_reuseFailAlloc_906_, 2, v_usedHyps_892_);
lean_ctor_set(v_reuseFailAlloc_906_, 3, v_theoryState_894_);
lean_ctor_set(v_reuseFailAlloc_906_, 4, v_solverTimeBudgetMs_895_);
lean_ctor_set(v_reuseFailAlloc_906_, 5, v_roundBudget_896_);
lean_ctor_set_uint8(v_reuseFailAlloc_906_, sizeof(void*)*6, v_didChange_893_);
v___x_901_ = v_reuseFailAlloc_906_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
lean_object* v___x_902_; uint8_t v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_902_ = lean_st_ref_put(v___y_888_, v___x_901_);
v___x_903_ = 1;
v___x_904_ = lean_box(v___x_903_);
v___x_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
return v___x_905_;
}
}
}
v___jp_909_:
{
lean_object* v___x_925_; lean_object* v_sats_926_; size_t v_sz_927_; size_t v___x_928_; lean_object* v___x_929_; 
v___x_925_ = lean_unsigned_to_nat(0u);
v_sats_926_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___lam__1___closed__0));
v_sz_927_ = lean_array_size(v_hypQueue_910_);
v___x_928_ = ((size_t)0ULL);
v___x_929_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__1(v_hypQueue_910_, v_sz_927_, v___x_928_, v_sats_926_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_);
lean_dec_ref(v_hypQueue_910_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v_a_930_; lean_object* v___x_931_; uint8_t v___x_932_; 
v_a_930_ = lean_ctor_get(v___x_929_, 0);
lean_inc(v_a_930_);
lean_dec_ref_known(v___x_929_, 1);
v___x_931_ = lean_array_get_size(v_a_930_);
v___x_932_ = lean_nat_dec_eq(v___x_931_, v___x_925_);
if (v___x_932_ == 0)
{
lean_object* v___x_933_; lean_object* v_satExpr_934_; uint8_t v___x_935_; 
v___x_933_ = lean_st_ref_get(v___y_912_);
v_satExpr_934_ = lean_ctor_get(v___x_933_, 0);
lean_inc_ref(v_satExpr_934_);
lean_dec(v___x_933_);
v___x_935_ = lean_nat_dec_lt(v___x_925_, v___x_931_);
if (v___x_935_ == 0)
{
lean_dec(v_a_930_);
v___y_888_ = v___y_912_;
v_a_889_ = v_satExpr_934_;
goto v___jp_887_;
}
else
{
size_t v___x_936_; lean_object* v___x_937_; 
v___x_936_ = lean_usize_of_nat(v___x_931_);
v___x_937_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__2___redArg(v_a_930_, v___x_928_, v___x_936_, v_satExpr_934_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_);
lean_dec(v_a_930_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
lean_inc(v_a_938_);
lean_dec_ref_known(v___x_937_, 1);
v___y_888_ = v___y_912_;
v_a_889_ = v_a_938_;
goto v___jp_887_;
}
else
{
lean_object* v_a_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_946_; 
v_a_939_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_946_ == 0)
{
v___x_941_ = v___x_937_;
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_a_939_);
lean_dec(v___x_937_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_944_; 
if (v_isShared_942_ == 0)
{
v___x_944_ = v___x_941_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_a_939_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
}
else
{
lean_dec(v_a_930_);
goto v___jp_883_;
}
}
else
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_954_; 
v_a_947_ = lean_ctor_get(v___x_929_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_954_ == 0)
{
v___x_949_ = v___x_929_;
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_929_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_a_947_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
v___jp_955_:
{
lean_object* v___x_971_; lean_object* v___x_972_; uint8_t v___x_973_; 
v___x_971_ = lean_array_get_size(v_hypQueue_956_);
v___x_972_ = lean_unsigned_to_nat(0u);
v___x_973_ = lean_nat_dec_eq(v___x_971_, v___x_972_);
if (v___x_973_ == 0)
{
lean_object* v_bs_974_; lean_object* v___x_975_; size_t v_sz_976_; size_t v___x_977_; lean_object* v___x_978_; lean_object* v_fst_979_; lean_object* v_snd_980_; size_t v_sz_981_; lean_object* v_hypQueue_982_; lean_object* v___x_983_; uint8_t v___x_984_; 
v_bs_974_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__0));
v___x_975_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__1));
v_sz_976_ = lean_array_size(v_hypQueue_956_);
v___x_977_ = ((size_t)0ULL);
v___x_978_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__3(v_hypQueue_956_, v_sz_976_, v___x_977_, v___x_975_);
lean_dec_ref(v_hypQueue_956_);
v_fst_979_ = lean_ctor_get(v___x_978_, 0);
lean_inc(v_fst_979_);
v_snd_980_ = lean_ctor_get(v___x_978_, 1);
lean_inc(v_snd_980_);
lean_dec_ref(v___x_978_);
v_sz_981_ = lean_array_size(v_fst_979_);
v_hypQueue_982_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__4(v_sz_981_, v___x_977_, v_fst_979_);
v___x_983_ = lean_array_get_size(v_snd_980_);
v___x_984_ = lean_nat_dec_eq(v___x_983_, v___x_972_);
if (v___x_984_ == 0)
{
lean_object* v_goal_985_; lean_object* v_tacticContext_986_; lean_object* v___x_987_; lean_object* v_config_988_; lean_object* v_mode_989_; lean_object* v_timeout_990_; uint8_t v_trimProofs_991_; uint8_t v_binaryProofs_992_; uint8_t v_acNf_993_; uint8_t v_andFlattening_994_; uint8_t v_embeddedConstraintSubst_995_; uint8_t v_graphviz_996_; lean_object* v_maxSteps_997_; uint8_t v_solverMode_998_; uint8_t v_uf_999_; lean_object* v_cegarRounds_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1109_; 
v_goal_985_ = lean_ctor_get(v___y_957_, 0);
v_tacticContext_986_ = lean_ctor_get(v___y_957_, 2);
lean_inc_ref(v_tacticContext_986_);
v___x_987_ = l_Lean_Meta_Tactic_BVDecide_TacticContext_preProcessContext(v_tacticContext_986_);
v_config_988_ = lean_ctor_get(v___x_987_, 0);
lean_inc_ref(v_config_988_);
v_mode_989_ = lean_ctor_get(v___x_987_, 1);
lean_inc(v_mode_989_);
lean_dec_ref(v___x_987_);
v_timeout_990_ = lean_ctor_get(v_config_988_, 0);
v_trimProofs_991_ = lean_ctor_get_uint8(v_config_988_, sizeof(void*)*3);
v_binaryProofs_992_ = lean_ctor_get_uint8(v_config_988_, sizeof(void*)*3 + 1);
v_acNf_993_ = lean_ctor_get_uint8(v_config_988_, sizeof(void*)*3 + 2);
v_andFlattening_994_ = lean_ctor_get_uint8(v_config_988_, sizeof(void*)*3 + 3);
v_embeddedConstraintSubst_995_ = lean_ctor_get_uint8(v_config_988_, sizeof(void*)*3 + 4);
v_graphviz_996_ = lean_ctor_get_uint8(v_config_988_, sizeof(void*)*3 + 8);
v_maxSteps_997_ = lean_ctor_get(v_config_988_, 1);
v_solverMode_998_ = lean_ctor_get_uint8(v_config_988_, sizeof(void*)*3 + 10);
v_uf_999_ = lean_ctor_get_uint8(v_config_988_, sizeof(void*)*3 + 11);
v_cegarRounds_1000_ = lean_ctor_get(v_config_988_, 2);
v_isSharedCheck_1109_ = !lean_is_exclusive(v_config_988_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1002_ = v_config_988_;
v_isShared_1003_ = v_isSharedCheck_1109_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_cegarRounds_1000_);
lean_inc(v_maxSteps_997_);
lean_inc(v_timeout_990_);
lean_dec(v_config_988_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1109_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1004_; lean_object* v___x_1006_; 
lean_inc(v_goal_985_);
v___x_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1004_, 0, v_goal_985_);
if (v_isShared_1003_ == 0)
{
v___x_1006_ = v___x_1002_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 3, 12);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_timeout_990_);
lean_ctor_set(v_reuseFailAlloc_1108_, 1, v_maxSteps_997_);
lean_ctor_set(v_reuseFailAlloc_1108_, 2, v_cegarRounds_1000_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, sizeof(void*)*3, v_trimProofs_991_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, sizeof(void*)*3 + 1, v_binaryProofs_992_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, sizeof(void*)*3 + 2, v_acNf_993_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, sizeof(void*)*3 + 3, v_andFlattening_994_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, sizeof(void*)*3 + 4, v_embeddedConstraintSubst_995_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, sizeof(void*)*3 + 8, v_graphviz_996_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, sizeof(void*)*3 + 10, v_solverMode_998_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, sizeof(void*)*3 + 11, v_uf_999_);
v___x_1006_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v_theoryState_1010_; lean_object* v_satExpr_1011_; lean_object* v_hypQueue_1012_; lean_object* v_usedHyps_1013_; uint8_t v_didChange_1014_; lean_object* v_solverTimeBudgetMs_1015_; lean_object* v_roundBudget_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1107_; 
lean_ctor_set_uint8(v___x_1006_, sizeof(void*)*3 + 5, v___x_984_);
lean_ctor_set_uint8(v___x_1006_, sizeof(void*)*3 + 6, v___x_984_);
lean_ctor_set_uint8(v___x_1006_, sizeof(void*)*3 + 7, v___x_984_);
lean_ctor_set_uint8(v___x_1006_, sizeof(void*)*3 + 9, v___x_984_);
v___x_1007_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__2));
v___x_1008_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessContext_new(v_mode_989_, v___x_1006_, v___x_1007_);
v___x_1009_ = lean_st_ref_take(v___y_958_);
v_theoryState_1010_ = lean_ctor_get(v___x_1009_, 3);
v_satExpr_1011_ = lean_ctor_get(v___x_1009_, 0);
v_hypQueue_1012_ = lean_ctor_get(v___x_1009_, 1);
v_usedHyps_1013_ = lean_ctor_get(v___x_1009_, 2);
v_didChange_1014_ = lean_ctor_get_uint8(v___x_1009_, sizeof(void*)*6);
v_solverTimeBudgetMs_1015_ = lean_ctor_get(v___x_1009_, 4);
v_roundBudget_1016_ = lean_ctor_get(v___x_1009_, 5);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1018_ = v___x_1009_;
v_isShared_1019_ = v_isSharedCheck_1107_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_roundBudget_1016_);
lean_inc(v_solverTimeBudgetMs_1015_);
lean_inc(v_theoryState_1010_);
lean_inc(v_usedHyps_1013_);
lean_inc(v_hypQueue_1012_);
lean_inc(v_satExpr_1011_);
lean_dec(v___x_1009_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1107_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v_funState_1020_; lean_object* v_bitvecState_1021_; lean_object* v_preprocessCaches_1022_; lean_object* v_satSolver_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1106_; 
v_funState_1020_ = lean_ctor_get(v_theoryState_1010_, 0);
v_bitvecState_1021_ = lean_ctor_get(v_theoryState_1010_, 1);
v_preprocessCaches_1022_ = lean_ctor_get(v_theoryState_1010_, 2);
v_satSolver_1023_ = lean_ctor_get(v_theoryState_1010_, 3);
v_isSharedCheck_1106_ = !lean_is_exclusive(v_theoryState_1010_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1025_ = v_theoryState_1010_;
v_isShared_1026_ = v_isSharedCheck_1106_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_satSolver_1023_);
lean_inc(v_preprocessCaches_1022_);
lean_inc(v_bitvecState_1021_);
lean_inc(v_funState_1020_);
lean_dec(v_theoryState_1010_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1106_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1027_; lean_object* v___x_1029_; 
v___x_1027_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__5, &l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__5);
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 2, v___x_1027_);
v___x_1029_ = v___x_1025_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_funState_1020_);
lean_ctor_set(v_reuseFailAlloc_1105_, 1, v_bitvecState_1021_);
lean_ctor_set(v_reuseFailAlloc_1105_, 2, v___x_1027_);
lean_ctor_set(v_reuseFailAlloc_1105_, 3, v_satSolver_1023_);
v___x_1029_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
lean_object* v___x_1031_; 
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 3, v___x_1029_);
v___x_1031_ = v___x_1018_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_satExpr_1011_);
lean_ctor_set(v_reuseFailAlloc_1104_, 1, v_hypQueue_1012_);
lean_ctor_set(v_reuseFailAlloc_1104_, 2, v_usedHyps_1013_);
lean_ctor_set(v_reuseFailAlloc_1104_, 3, v___x_1029_);
lean_ctor_set(v_reuseFailAlloc_1104_, 4, v_solverTimeBudgetMs_1015_);
lean_ctor_set(v_reuseFailAlloc_1104_, 5, v_roundBudget_1016_);
lean_ctor_set_uint8(v_reuseFailAlloc_1104_, sizeof(void*)*6, v_didChange_1014_);
v___x_1031_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v_typeAnalysis_1037_; lean_object* v_target_1038_; lean_object* v_hypotheses_1039_; uint8_t v_didChange_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1102_; 
v___x_1032_ = lean_st_ref_put(v___y_958_, v___x_1031_);
v___x_1033_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__8, &l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__8_once, _init_l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___closed__8);
v___x_1034_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1034_, 0, v___x_1027_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
lean_ctor_set(v___x_1034_, 2, v___x_1004_);
lean_ctor_set(v___x_1034_, 3, v_bs_974_);
lean_ctor_set_uint8(v___x_1034_, sizeof(void*)*4, v___x_984_);
v___x_1035_ = lean_st_mk_ref(v___x_1034_);
v___x_1036_ = lean_st_ref_take(v___x_1035_);
v_typeAnalysis_1037_ = lean_ctor_get(v___x_1036_, 1);
v_target_1038_ = lean_ctor_get(v___x_1036_, 2);
v_hypotheses_1039_ = lean_ctor_get(v___x_1036_, 3);
v_didChange_1040_ = lean_ctor_get_uint8(v___x_1036_, sizeof(void*)*4);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1102_ == 0)
{
lean_object* v_unused_1103_; 
v_unused_1103_ = lean_ctor_get(v___x_1036_, 0);
lean_dec(v_unused_1103_);
v___x_1042_ = v___x_1036_;
v_isShared_1043_ = v_isSharedCheck_1102_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_hypotheses_1039_);
lean_inc(v_target_1038_);
lean_inc(v_typeAnalysis_1037_);
lean_dec(v___x_1036_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1102_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1045_; 
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 0, v_preprocessCaches_1022_);
v___x_1045_ = v___x_1042_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_preprocessCaches_1022_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v_typeAnalysis_1037_);
lean_ctor_set(v_reuseFailAlloc_1101_, 2, v_target_1038_);
lean_ctor_set(v_reuseFailAlloc_1101_, 3, v_hypotheses_1039_);
lean_ctor_set_uint8(v_reuseFailAlloc_1101_, sizeof(void*)*4, v_didChange_1040_);
v___x_1045_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
lean_object* v___x_1046_; size_t v_sz_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1046_ = lean_st_ref_put(v___x_1035_, v___x_1045_);
v_sz_1047_ = lean_array_size(v_snd_980_);
v___x_1048_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__4(v_sz_1047_, v___x_977_, v_snd_980_);
v___x_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
v___x_1050_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize(v___x_1049_, v___x_1008_, v___x_1035_, v___y_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
lean_dec_ref(v___x_1008_);
lean_dec_ref_known(v___x_1049_, 1);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1092_; 
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1053_ = v___x_1050_;
v_isShared_1054_ = v_isSharedCheck_1092_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1050_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1092_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1055_; uint8_t v___x_1056_; 
v___x_1055_ = lean_st_ref_get(v___x_1035_);
lean_dec(v___x_1035_);
v___x_1056_ = lean_unbox(v_a_1051_);
lean_dec(v_a_1051_);
if (v___x_1056_ == 0)
{
lean_object* v_caches_1057_; lean_object* v_hypotheses_1058_; lean_object* v___x_1059_; lean_object* v_theoryState_1060_; lean_object* v_satExpr_1061_; lean_object* v_hypQueue_1062_; lean_object* v_usedHyps_1063_; uint8_t v_didChange_1064_; lean_object* v_solverTimeBudgetMs_1065_; lean_object* v_roundBudget_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1086_; 
lean_del_object(v___x_1053_);
v_caches_1057_ = lean_ctor_get(v___x_1055_, 0);
lean_inc_ref(v_caches_1057_);
v_hypotheses_1058_ = lean_ctor_get(v___x_1055_, 3);
lean_inc_ref(v_hypotheses_1058_);
lean_dec(v___x_1055_);
v___x_1059_ = lean_st_ref_take(v___y_958_);
v_theoryState_1060_ = lean_ctor_get(v___x_1059_, 3);
v_satExpr_1061_ = lean_ctor_get(v___x_1059_, 0);
v_hypQueue_1062_ = lean_ctor_get(v___x_1059_, 1);
v_usedHyps_1063_ = lean_ctor_get(v___x_1059_, 2);
v_didChange_1064_ = lean_ctor_get_uint8(v___x_1059_, sizeof(void*)*6);
v_solverTimeBudgetMs_1065_ = lean_ctor_get(v___x_1059_, 4);
v_roundBudget_1066_ = lean_ctor_get(v___x_1059_, 5);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1059_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1068_ = v___x_1059_;
v_isShared_1069_ = v_isSharedCheck_1086_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_roundBudget_1066_);
lean_inc(v_solverTimeBudgetMs_1065_);
lean_inc(v_theoryState_1060_);
lean_inc(v_usedHyps_1063_);
lean_inc(v_hypQueue_1062_);
lean_inc(v_satExpr_1061_);
lean_dec(v___x_1059_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1086_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v_funState_1070_; lean_object* v_bitvecState_1071_; lean_object* v_satSolver_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1084_; 
v_funState_1070_ = lean_ctor_get(v_theoryState_1060_, 0);
v_bitvecState_1071_ = lean_ctor_get(v_theoryState_1060_, 1);
v_satSolver_1072_ = lean_ctor_get(v_theoryState_1060_, 3);
v_isSharedCheck_1084_ = !lean_is_exclusive(v_theoryState_1060_);
if (v_isSharedCheck_1084_ == 0)
{
lean_object* v_unused_1085_; 
v_unused_1085_ = lean_ctor_get(v_theoryState_1060_, 2);
lean_dec(v_unused_1085_);
v___x_1074_ = v_theoryState_1060_;
v_isShared_1075_ = v_isSharedCheck_1084_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_satSolver_1072_);
lean_inc(v_bitvecState_1071_);
lean_inc(v_funState_1070_);
lean_dec(v_theoryState_1060_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1084_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
lean_ctor_set(v___x_1074_, 2, v_caches_1057_);
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_funState_1070_);
lean_ctor_set(v_reuseFailAlloc_1083_, 1, v_bitvecState_1071_);
lean_ctor_set(v_reuseFailAlloc_1083_, 2, v_caches_1057_);
lean_ctor_set(v_reuseFailAlloc_1083_, 3, v_satSolver_1072_);
v___x_1077_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
lean_object* v___x_1079_; 
if (v_isShared_1069_ == 0)
{
lean_ctor_set(v___x_1068_, 3, v___x_1077_);
v___x_1079_ = v___x_1068_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_satExpr_1061_);
lean_ctor_set(v_reuseFailAlloc_1082_, 1, v_hypQueue_1062_);
lean_ctor_set(v_reuseFailAlloc_1082_, 2, v_usedHyps_1063_);
lean_ctor_set(v_reuseFailAlloc_1082_, 3, v___x_1077_);
lean_ctor_set(v_reuseFailAlloc_1082_, 4, v_solverTimeBudgetMs_1065_);
lean_ctor_set(v_reuseFailAlloc_1082_, 5, v_roundBudget_1066_);
lean_ctor_set_uint8(v_reuseFailAlloc_1082_, sizeof(void*)*6, v_didChange_1064_);
v___x_1079_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1080_ = lean_st_ref_put(v___y_958_, v___x_1079_);
v___x_1081_ = l_Array_append___redArg(v_hypQueue_982_, v_hypotheses_1058_);
lean_dec_ref(v_hypotheses_1058_);
v_hypQueue_910_ = v___x_1081_;
v___y_911_ = v___y_957_;
v___y_912_ = v___y_958_;
v___y_913_ = v___y_959_;
v___y_914_ = v___y_960_;
v___y_915_ = v___y_961_;
v___y_916_ = v___y_962_;
v___y_917_ = v___y_963_;
v___y_918_ = v___y_964_;
v___y_919_ = v___y_965_;
v___y_920_ = v___y_966_;
v___y_921_ = v___y_967_;
v___y_922_ = v___y_968_;
v___y_923_ = v___y_969_;
v___y_924_ = v___y_970_;
goto v___jp_909_;
}
}
}
}
}
else
{
uint8_t v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1090_; 
lean_dec(v___x_1055_);
lean_dec_ref(v_hypQueue_982_);
v___x_1087_ = 0;
v___x_1088_ = lean_box(v___x_1087_);
if (v_isShared_1054_ == 0)
{
lean_ctor_set(v___x_1053_, 0, v___x_1088_);
v___x_1090_ = v___x_1053_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v___x_1088_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
}
else
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1100_; 
lean_dec(v___x_1035_);
lean_dec_ref(v_hypQueue_982_);
v_a_1093_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1095_ = v___x_1050_;
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_1050_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1098_; 
if (v_isShared_1096_ == 0)
{
v___x_1098_ = v___x_1095_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_a_1093_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
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
}
else
{
lean_dec(v_snd_980_);
v_hypQueue_910_ = v_hypQueue_982_;
v___y_911_ = v___y_957_;
v___y_912_ = v___y_958_;
v___y_913_ = v___y_959_;
v___y_914_ = v___y_960_;
v___y_915_ = v___y_961_;
v___y_916_ = v___y_962_;
v___y_917_ = v___y_963_;
v___y_918_ = v___y_964_;
v___y_919_ = v___y_965_;
v___y_920_ = v___y_966_;
v___y_921_ = v___y_967_;
v___y_922_ = v___y_968_;
v___y_923_ = v___y_969_;
v___y_924_ = v___y_970_;
goto v___jp_909_;
}
}
else
{
lean_dec_ref(v_hypQueue_956_);
goto v___jp_883_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps___boxed(lean_object* v_a_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = l_Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps(v_a_1532_, v_a_1533_, v_a_1534_, v_a_1535_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_);
lean_dec(v_a_1545_);
lean_dec_ref(v_a_1544_);
lean_dec(v_a_1543_);
lean_dec_ref(v_a_1542_);
lean_dec(v_a_1541_);
lean_dec_ref(v_a_1540_);
lean_dec(v_a_1539_);
lean_dec_ref(v_a_1538_);
lean_dec(v_a_1537_);
lean_dec(v_a_1536_);
lean_dec_ref(v_a_1535_);
lean_dec(v_a_1534_);
lean_dec(v_a_1533_);
lean_dec_ref(v_a_1532_);
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0(lean_object* v_00_u03b1_1548_, lean_object* v_msg_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v___x_1565_; 
v___x_1565_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0___redArg(v_msg_1549_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0___boxed(lean_object** _args){
lean_object* v_00_u03b1_1566_ = _args[0];
lean_object* v_msg_1567_ = _args[1];
lean_object* v___y_1568_ = _args[2];
lean_object* v___y_1569_ = _args[3];
lean_object* v___y_1570_ = _args[4];
lean_object* v___y_1571_ = _args[5];
lean_object* v___y_1572_ = _args[6];
lean_object* v___y_1573_ = _args[7];
lean_object* v___y_1574_ = _args[8];
lean_object* v___y_1575_ = _args[9];
lean_object* v___y_1576_ = _args[10];
lean_object* v___y_1577_ = _args[11];
lean_object* v___y_1578_ = _args[12];
lean_object* v___y_1579_ = _args[13];
lean_object* v___y_1580_ = _args[14];
lean_object* v___y_1581_ = _args[15];
lean_object* v___y_1582_ = _args[16];
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__0(v_00_u03b1_1566_, v_msg_1567_, v___y_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_);
lean_dec(v___y_1581_);
lean_dec_ref(v___y_1580_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec(v___y_1575_);
lean_dec_ref(v___y_1574_);
lean_dec(v___y_1573_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec(v___y_1570_);
lean_dec(v___y_1569_);
lean_dec_ref(v___y_1568_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__2(lean_object* v_as_1584_, size_t v_i_1585_, size_t v_stop_1586_, lean_object* v_b_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__2___redArg(v_as_1584_, v_i_1585_, v_stop_1586_, v_b_1587_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__2___boxed(lean_object** _args){
lean_object* v_as_1604_ = _args[0];
lean_object* v_i_1605_ = _args[1];
lean_object* v_stop_1606_ = _args[2];
lean_object* v_b_1607_ = _args[3];
lean_object* v___y_1608_ = _args[4];
lean_object* v___y_1609_ = _args[5];
lean_object* v___y_1610_ = _args[6];
lean_object* v___y_1611_ = _args[7];
lean_object* v___y_1612_ = _args[8];
lean_object* v___y_1613_ = _args[9];
lean_object* v___y_1614_ = _args[10];
lean_object* v___y_1615_ = _args[11];
lean_object* v___y_1616_ = _args[12];
lean_object* v___y_1617_ = _args[13];
lean_object* v___y_1618_ = _args[14];
lean_object* v___y_1619_ = _args[15];
lean_object* v___y_1620_ = _args[16];
lean_object* v___y_1621_ = _args[17];
lean_object* v___y_1622_ = _args[18];
_start:
{
size_t v_i_boxed_1623_; size_t v_stop_boxed_1624_; lean_object* v_res_1625_; 
v_i_boxed_1623_ = lean_unbox_usize(v_i_1605_);
lean_dec(v_i_1605_);
v_stop_boxed_1624_ = lean_unbox_usize(v_stop_1606_);
lean_dec(v_stop_1606_);
v_res_1625_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__2(v_as_1604_, v_i_boxed_1623_, v_stop_boxed_1624_, v_b_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
lean_dec(v___y_1617_);
lean_dec_ref(v___y_1616_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
lean_dec(v___y_1613_);
lean_dec(v___y_1612_);
lean_dec_ref(v___y_1611_);
lean_dec(v___y_1610_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
lean_dec_ref(v_as_1604_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__9(lean_object* v_00_u03b1_1626_, lean_object* v_x_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v___x_1643_; 
v___x_1643_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__9___redArg(v_x_1627_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__9___boxed(lean_object** _args){
lean_object* v_00_u03b1_1644_ = _args[0];
lean_object* v_x_1645_ = _args[1];
lean_object* v___y_1646_ = _args[2];
lean_object* v___y_1647_ = _args[3];
lean_object* v___y_1648_ = _args[4];
lean_object* v___y_1649_ = _args[5];
lean_object* v___y_1650_ = _args[6];
lean_object* v___y_1651_ = _args[7];
lean_object* v___y_1652_ = _args[8];
lean_object* v___y_1653_ = _args[9];
lean_object* v___y_1654_ = _args[10];
lean_object* v___y_1655_ = _args[11];
lean_object* v___y_1656_ = _args[12];
lean_object* v___y_1657_ = _args[13];
lean_object* v___y_1658_ = _args[14];
lean_object* v___y_1659_ = _args[15];
lean_object* v___y_1660_ = _args[16];
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__9(v_00_u03b1_1644_, v_x_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_);
lean_dec(v___y_1659_);
lean_dec_ref(v___y_1658_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1656_);
lean_dec(v___y_1655_);
lean_dec_ref(v___y_1654_);
lean_dec(v___y_1653_);
lean_dec_ref(v___y_1652_);
lean_dec(v___y_1651_);
lean_dec(v___y_1650_);
lean_dec_ref(v___y_1649_);
lean_dec(v___y_1648_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8(lean_object* v_oldTraces_1662_, lean_object* v_data_1663_, lean_object* v_ref_1664_, lean_object* v_msg_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_){
_start:
{
lean_object* v___x_1681_; 
v___x_1681_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8___redArg(v_oldTraces_1662_, v_data_1663_, v_ref_1664_, v_msg_1665_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
return v___x_1681_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8___boxed(lean_object** _args){
lean_object* v_oldTraces_1682_ = _args[0];
lean_object* v_data_1683_ = _args[1];
lean_object* v_ref_1684_ = _args[2];
lean_object* v_msg_1685_ = _args[3];
lean_object* v___y_1686_ = _args[4];
lean_object* v___y_1687_ = _args[5];
lean_object* v___y_1688_ = _args[6];
lean_object* v___y_1689_ = _args[7];
lean_object* v___y_1690_ = _args[8];
lean_object* v___y_1691_ = _args[9];
lean_object* v___y_1692_ = _args[10];
lean_object* v___y_1693_ = _args[11];
lean_object* v___y_1694_ = _args[12];
lean_object* v___y_1695_ = _args[13];
lean_object* v___y_1696_ = _args[14];
lean_object* v___y_1697_ = _args[15];
lean_object* v___y_1698_ = _args[16];
lean_object* v___y_1699_ = _args[17];
lean_object* v___y_1700_ = _args[18];
_start:
{
lean_object* v_res_1701_; 
v_res_1701_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Cegar_processNewHyps_spec__7_spec__8(v_oldTraces_1682_, v_data_1683_, v_ref_1684_, v_msg_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_);
lean_dec(v___y_1699_);
lean_dec_ref(v___y_1698_);
lean_dec(v___y_1697_);
lean_dec_ref(v___y_1696_);
lean_dec(v___y_1695_);
lean_dec_ref(v___y_1694_);
lean_dec(v___y_1693_);
lean_dec_ref(v___y_1692_);
lean_dec(v___y_1691_);
lean_dec(v___y_1690_);
lean_dec_ref(v___y_1689_);
lean_dec(v___y_1688_);
lean_dec(v___y_1687_);
lean_dec_ref(v___y_1686_);
return v_res_1701_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Prover_Cegar_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Main(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Prover_Cegar_Lemmas(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Prover_Cegar_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Prover_Cegar_Lemmas(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Prover_Cegar_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Main(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Prover_Cegar_Lemmas(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Prover_Cegar_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Prover_Cegar_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Prover_Cegar_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Prover_Cegar_Lemmas(builtin);
}
#ifdef __cplusplus
}
#endif
