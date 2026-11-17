// Lean compiler output
// Module: Lean.Meta.Tactic.Backtrack
// Imports: public import Lean.Meta.Iterator public import Lean.Meta.Tactic.IndependentOf import Init.Data.Nat.Internal.Linear import Init.Omega
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_isIndependentOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_io_mono_nanos_now();
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Iterator_firstM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_filterMapTR_go___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarIds_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarIds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarIds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarIds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__2(lean_object*);
static const lean_array_object l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___closed__1_value;
static const lean_closure_object l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "success!"};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 35, .m_data = "⏬ discharger generated new subgoals"};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 42, .m_data = "⏭️ deemed acceptable, returning as subgoal"};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 45, .m_data = "⏸️ suspending search and returning as subgoal"};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "working on: "};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7_spec__12(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7_spec__12___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__3_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "BacktrackConfig.proc failed: "};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "discarding already assigned goal "};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0;
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Backtrack exceeded the recursion limit"};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__2;
static const lean_closure_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__5_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__7_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__7_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__7_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__7_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__5_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__5_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__1(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "independent goals "};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = " working on them before "};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "failed: "};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ", new: "};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__4___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_BasicAux_0__List_partitionM_go___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_BasicAux_0__List_partitionM_go___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_backtrack___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_backtrack___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_backtrack(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_backtrack___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarId(lean_object* v_g_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Lean_MVarId_getType(v_g_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_);
if (lean_obj_tag(v___x_7_) == 0)
{
lean_object* v_a_8_; lean_object* v___x_9_; 
v_a_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc(v_a_8_);
lean_dec_ref_known(v___x_7_, 1);
v___x_9_ = l_Lean_Meta_ppExpr(v_a_8_, v_a_2_, v_a_3_, v_a_4_, v_a_5_);
return v___x_9_;
}
else
{
lean_object* v_a_10_; lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_17_; 
v_a_10_ = lean_ctor_get(v___x_7_, 0);
v_isSharedCheck_17_ = !lean_is_exclusive(v___x_7_);
if (v_isSharedCheck_17_ == 0)
{
v___x_12_ = v___x_7_;
v_isShared_13_ = v_isSharedCheck_17_;
goto v_resetjp_11_;
}
else
{
lean_inc(v_a_10_);
lean_dec(v___x_7_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_17_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
lean_object* v___x_15_; 
if (v_isShared_13_ == 0)
{
v___x_15_ = v___x_12_;
goto v_reusejp_14_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v_a_10_);
v___x_15_ = v_reuseFailAlloc_16_;
goto v_reusejp_14_;
}
v_reusejp_14_:
{
return v___x_15_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarId___boxed(lean_object* v_g_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarId(v_g_18_, v_a_19_, v_a_20_, v_a_21_, v_a_22_);
lean_dec(v_a_22_);
lean_dec_ref(v_a_21_);
lean_dec(v_a_20_);
lean_dec_ref(v_a_19_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarIds_spec__0(lean_object* v_x_25_, lean_object* v_x_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_){
_start:
{
if (lean_obj_tag(v_x_25_) == 0)
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = l_List_reverse___redArg(v_x_26_);
v___x_33_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
return v___x_33_;
}
else
{
lean_object* v_head_34_; lean_object* v_tail_35_; lean_object* v___x_37_; uint8_t v_isShared_38_; uint8_t v_isSharedCheck_53_; 
v_head_34_ = lean_ctor_get(v_x_25_, 0);
v_tail_35_ = lean_ctor_get(v_x_25_, 1);
v_isSharedCheck_53_ = !lean_is_exclusive(v_x_25_);
if (v_isSharedCheck_53_ == 0)
{
v___x_37_ = v_x_25_;
v_isShared_38_ = v_isSharedCheck_53_;
goto v_resetjp_36_;
}
else
{
lean_inc(v_tail_35_);
lean_inc(v_head_34_);
lean_dec(v_x_25_);
v___x_37_ = lean_box(0);
v_isShared_38_ = v_isSharedCheck_53_;
goto v_resetjp_36_;
}
v_resetjp_36_:
{
lean_object* v___x_39_; 
v___x_39_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarId(v_head_34_, v___y_27_, v___y_28_, v___y_29_, v___y_30_);
if (lean_obj_tag(v___x_39_) == 0)
{
lean_object* v_a_40_; lean_object* v___x_42_; 
v_a_40_ = lean_ctor_get(v___x_39_, 0);
lean_inc(v_a_40_);
lean_dec_ref_known(v___x_39_, 1);
if (v_isShared_38_ == 0)
{
lean_ctor_set(v___x_37_, 1, v_x_26_);
lean_ctor_set(v___x_37_, 0, v_a_40_);
v___x_42_ = v___x_37_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_40_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v_x_26_);
v___x_42_ = v_reuseFailAlloc_44_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
v_x_25_ = v_tail_35_;
v_x_26_ = v___x_42_;
goto _start;
}
}
else
{
lean_object* v_a_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_52_; 
lean_del_object(v___x_37_);
lean_dec(v_tail_35_);
lean_dec(v_x_26_);
v_a_45_ = lean_ctor_get(v___x_39_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_39_);
if (v_isSharedCheck_52_ == 0)
{
v___x_47_ = v___x_39_;
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_a_45_);
lean_dec(v___x_39_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_50_; 
if (v_isShared_48_ == 0)
{
v___x_50_ = v___x_47_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_a_45_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarIds_spec__0___boxed(lean_object* v_x_54_, lean_object* v_x_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarIds_spec__0(v_x_54_, v_x_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
lean_dec(v___y_57_);
lean_dec_ref(v___y_56_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarIds(lean_object* v_gs_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_box(0);
v___x_69_ = l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarIds_spec__0(v_gs_62_, v___x_68_, v_a_63_, v_a_64_, v_a_65_, v_a_66_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarIds___boxed(lean_object* v_gs_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarIds(v_gs_70_, v_a_71_, v_a_72_, v_a_73_, v_a_74_);
lean_dec(v_a_74_);
lean_dec_ref(v_a_73_);
lean_dec(v_a_72_);
lean_dec_ref(v_a_71_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__0(lean_object* v_s_77_){
_start:
{
if (lean_obj_tag(v_s_77_) == 1)
{
lean_object* v_val_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_85_; 
v_val_78_ = lean_ctor_get(v_s_77_, 0);
v_isSharedCheck_85_ = !lean_is_exclusive(v_s_77_);
if (v_isSharedCheck_85_ == 0)
{
v___x_80_ = v_s_77_;
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_val_78_);
lean_dec(v_s_77_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_83_; 
if (v_isShared_81_ == 0)
{
v___x_83_ = v___x_80_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v_val_78_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
else
{
lean_object* v___x_86_; 
lean_dec_ref(v_s_77_);
v___x_86_ = lean_box(0);
return v___x_86_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__1(lean_object* v_s_87_){
_start:
{
if (lean_obj_tag(v_s_87_) == 0)
{
lean_object* v_val_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_95_; 
v_val_88_ = lean_ctor_get(v_s_87_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v_s_87_);
if (v_isSharedCheck_95_ == 0)
{
v___x_90_ = v_s_87_;
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_val_88_);
lean_dec(v_s_87_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_93_; 
if (v_isShared_91_ == 0)
{
lean_ctor_set_tag(v___x_90_, 1);
v___x_93_ = v___x_90_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v_val_88_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
else
{
lean_object* v___x_96_; 
lean_dec_ref(v_s_87_);
v___x_96_ = lean_box(0);
return v___x_96_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__2(lean_object* v_val_97_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_98_, 0, v_val_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__3(lean_object* v___f_101_, lean_object* v___f_102_, lean_object* v_toPure_103_, lean_object* v_R_104_){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_105_ = ((lean_object*)(l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__3___closed__0));
lean_inc(v_R_104_);
v___x_106_ = l_List_filterMapTR_go___redArg(v___f_101_, v_R_104_, v___x_105_);
v___x_107_ = l_List_filterMapTR_go___redArg(v___f_102_, v_R_104_, v___x_105_);
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_106_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = lean_apply_2(v_toPure_103_, lean_box(0), v___x_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__4(lean_object* v_a_110_, lean_object* v_toPure_111_, lean_object* v_x_112_){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_113_, 0, v_a_110_);
v___x_114_ = lean_apply_2(v_toPure_111_, lean_box(0), v___x_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__5(lean_object* v_toFunctor_115_, lean_object* v_toPure_116_, lean_object* v_f_117_, lean_object* v___f_118_, lean_object* v_orElse_119_, lean_object* v_a_120_){
_start:
{
lean_object* v_map_121_; lean_object* v___f_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v_map_121_ = lean_ctor_get(v_toFunctor_115_, 0);
lean_inc(v_map_121_);
lean_dec_ref(v_toFunctor_115_);
lean_inc(v_a_120_);
v___f_122_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__4), 3, 2);
lean_closure_set(v___f_122_, 0, v_a_120_);
lean_closure_set(v___f_122_, 1, v_toPure_116_);
v___x_123_ = lean_apply_1(v_f_117_, v_a_120_);
v___x_124_ = lean_apply_4(v_map_121_, lean_box(0), lean_box(0), v___f_118_, v___x_123_);
v___x_125_ = lean_apply_3(v_orElse_119_, lean_box(0), v___x_124_, v___f_122_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg(lean_object* v_inst_129_, lean_object* v_inst_130_, lean_object* v_L_131_, lean_object* v_f_132_){
_start:
{
lean_object* v_toApplicative_133_; lean_object* v_toBind_134_; lean_object* v_orElse_135_; lean_object* v_toFunctor_136_; lean_object* v_toPure_137_; lean_object* v___f_138_; lean_object* v___f_139_; lean_object* v___f_140_; lean_object* v___f_141_; lean_object* v___f_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v_toApplicative_133_ = lean_ctor_get(v_inst_130_, 0);
lean_inc_ref(v_toApplicative_133_);
v_toBind_134_ = lean_ctor_get(v_inst_129_, 1);
lean_inc(v_toBind_134_);
v_orElse_135_ = lean_ctor_get(v_inst_130_, 2);
lean_inc(v_orElse_135_);
lean_dec_ref(v_inst_130_);
v_toFunctor_136_ = lean_ctor_get(v_toApplicative_133_, 0);
lean_inc_ref(v_toFunctor_136_);
v_toPure_137_ = lean_ctor_get(v_toApplicative_133_, 1);
lean_inc_n(v_toPure_137_, 2);
lean_dec_ref(v_toApplicative_133_);
v___f_138_ = ((lean_object*)(l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___closed__0));
v___f_139_ = ((lean_object*)(l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___closed__1));
v___f_140_ = ((lean_object*)(l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___closed__2));
v___f_141_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__3), 4, 3);
lean_closure_set(v___f_141_, 0, v___f_139_);
lean_closure_set(v___f_141_, 1, v___f_138_);
lean_closure_set(v___f_141_, 2, v_toPure_137_);
v___f_142_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__5), 6, 5);
lean_closure_set(v___f_142_, 0, v_toFunctor_136_);
lean_closure_set(v___f_142_, 1, v_toPure_137_);
lean_closure_set(v___f_142_, 2, v_f_132_);
lean_closure_set(v___f_142_, 3, v___f_140_);
lean_closure_set(v___f_142_, 4, v_orElse_135_);
v___x_143_ = lean_box(0);
v___x_144_ = l_List_mapM_loop___redArg(v_inst_129_, v___f_142_, v_L_131_, v___x_143_);
v___x_145_ = lean_apply_4(v_toBind_134_, lean_box(0), lean_box(0), v___x_144_, v___f_141_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM(lean_object* v_m_146_, lean_object* v_00_u03b1_147_, lean_object* v_00_u03b2_148_, lean_object* v_inst_149_, lean_object* v_inst_150_, lean_object* v_L_151_, lean_object* v_f_152_){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg(v_inst_149_, v_inst_150_, v_L_151_, v_f_152_);
return v___x_153_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = lean_unsigned_to_nat(32u);
v___x_155_ = lean_mk_empty_array_with_capacity(v___x_154_);
v___x_156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
return v___x_156_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_157_ = ((size_t)5ULL);
v___x_158_ = lean_unsigned_to_nat(0u);
v___x_159_ = lean_unsigned_to_nat(32u);
v___x_160_ = lean_mk_empty_array_with_capacity(v___x_159_);
v___x_161_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg___closed__0);
v___x_162_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_162_, 0, v___x_161_);
lean_ctor_set(v___x_162_, 1, v___x_160_);
lean_ctor_set(v___x_162_, 2, v___x_158_);
lean_ctor_set(v___x_162_, 3, v___x_158_);
lean_ctor_set_usize(v___x_162_, 4, v___x_157_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(lean_object* v___y_163_){
_start:
{
lean_object* v___x_165_; lean_object* v_traceState_166_; lean_object* v_traces_167_; lean_object* v___x_168_; lean_object* v_traceState_169_; lean_object* v_env_170_; lean_object* v_nextMacroScope_171_; lean_object* v_ngen_172_; lean_object* v_auxDeclNGen_173_; lean_object* v_cache_174_; lean_object* v_recordedDeps_175_; lean_object* v_messages_176_; lean_object* v_infoState_177_; lean_object* v_snapshotTasks_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_197_; 
v___x_165_ = lean_st_ref_get(v___y_163_);
v_traceState_166_ = lean_ctor_get(v___x_165_, 4);
lean_inc_ref(v_traceState_166_);
lean_dec(v___x_165_);
v_traces_167_ = lean_ctor_get(v_traceState_166_, 0);
lean_inc_ref(v_traces_167_);
lean_dec_ref(v_traceState_166_);
v___x_168_ = lean_st_ref_take(v___y_163_);
v_traceState_169_ = lean_ctor_get(v___x_168_, 4);
v_env_170_ = lean_ctor_get(v___x_168_, 0);
v_nextMacroScope_171_ = lean_ctor_get(v___x_168_, 1);
v_ngen_172_ = lean_ctor_get(v___x_168_, 2);
v_auxDeclNGen_173_ = lean_ctor_get(v___x_168_, 3);
v_cache_174_ = lean_ctor_get(v___x_168_, 5);
v_recordedDeps_175_ = lean_ctor_get(v___x_168_, 6);
v_messages_176_ = lean_ctor_get(v___x_168_, 7);
v_infoState_177_ = lean_ctor_get(v___x_168_, 8);
v_snapshotTasks_178_ = lean_ctor_get(v___x_168_, 9);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_168_);
if (v_isSharedCheck_197_ == 0)
{
v___x_180_ = v___x_168_;
v_isShared_181_ = v_isSharedCheck_197_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_snapshotTasks_178_);
lean_inc(v_infoState_177_);
lean_inc(v_messages_176_);
lean_inc(v_recordedDeps_175_);
lean_inc(v_cache_174_);
lean_inc(v_traceState_169_);
lean_inc(v_auxDeclNGen_173_);
lean_inc(v_ngen_172_);
lean_inc(v_nextMacroScope_171_);
lean_inc(v_env_170_);
lean_dec(v___x_168_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_197_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
uint64_t v_tid_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_195_; 
v_tid_182_ = lean_ctor_get_uint64(v_traceState_169_, sizeof(void*)*1);
v_isSharedCheck_195_ = !lean_is_exclusive(v_traceState_169_);
if (v_isSharedCheck_195_ == 0)
{
lean_object* v_unused_196_; 
v_unused_196_ = lean_ctor_get(v_traceState_169_, 0);
lean_dec(v_unused_196_);
v___x_184_ = v_traceState_169_;
v_isShared_185_ = v_isSharedCheck_195_;
goto v_resetjp_183_;
}
else
{
lean_dec(v_traceState_169_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_195_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_186_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg___closed__1);
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 0, v___x_186_);
v___x_188_ = v___x_184_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_186_);
lean_ctor_set_uint64(v_reuseFailAlloc_194_, sizeof(void*)*1, v_tid_182_);
v___x_188_ = v_reuseFailAlloc_194_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
lean_object* v___x_190_; 
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 4, v___x_188_);
v___x_190_ = v___x_180_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_env_170_);
lean_ctor_set(v_reuseFailAlloc_193_, 1, v_nextMacroScope_171_);
lean_ctor_set(v_reuseFailAlloc_193_, 2, v_ngen_172_);
lean_ctor_set(v_reuseFailAlloc_193_, 3, v_auxDeclNGen_173_);
lean_ctor_set(v_reuseFailAlloc_193_, 4, v___x_188_);
lean_ctor_set(v_reuseFailAlloc_193_, 5, v_cache_174_);
lean_ctor_set(v_reuseFailAlloc_193_, 6, v_recordedDeps_175_);
lean_ctor_set(v_reuseFailAlloc_193_, 7, v_messages_176_);
lean_ctor_set(v_reuseFailAlloc_193_, 8, v_infoState_177_);
lean_ctor_set(v_reuseFailAlloc_193_, 9, v_snapshotTasks_178_);
v___x_190_ = v_reuseFailAlloc_193_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = lean_st_ref_put(v___y_163_, v___x_190_);
v___x_192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_192_, 0, v_traces_167_);
return v___x_192_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg___boxed(lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v___y_198_);
lean_dec(v___y_198_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1(lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v___y_204_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___boxed(lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1(v___y_207_, v___y_208_, v___y_209_, v___y_210_);
lean_dec(v___y_210_);
lean_dec_ref(v___y_209_);
lean_dec(v___y_208_);
lean_dec_ref(v___y_207_);
return v_res_212_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(lean_object* v_opts_213_, lean_object* v_opt_214_){
_start:
{
lean_object* v_name_215_; lean_object* v_defValue_216_; lean_object* v_map_217_; lean_object* v___x_218_; 
v_name_215_ = lean_ctor_get(v_opt_214_, 0);
v_defValue_216_ = lean_ctor_get(v_opt_214_, 1);
v_map_217_ = lean_ctor_get(v_opts_213_, 0);
v___x_218_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_217_, v_name_215_);
if (lean_obj_tag(v___x_218_) == 0)
{
uint8_t v___x_219_; 
v___x_219_ = lean_unbox(v_defValue_216_);
return v___x_219_;
}
else
{
lean_object* v_val_220_; 
v_val_220_ = lean_ctor_get(v___x_218_, 0);
lean_inc(v_val_220_);
lean_dec_ref_known(v___x_218_, 1);
if (lean_obj_tag(v_val_220_) == 1)
{
uint8_t v_v_221_; 
v_v_221_ = lean_ctor_get_uint8(v_val_220_, 0);
lean_dec_ref_known(v_val_220_, 0);
return v_v_221_;
}
else
{
uint8_t v___x_222_; 
lean_dec(v_val_220_);
v___x_222_ = lean_unbox(v_defValue_216_);
return v___x_222_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2___boxed(lean_object* v_opts_223_, lean_object* v_opt_224_){
_start:
{
uint8_t v_res_225_; lean_object* v_r_226_; 
v_res_225_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_opts_223_, v_opt_224_);
lean_dec_ref(v_opt_224_);
lean_dec_ref(v_opts_223_);
v_r_226_ = lean_box(v_res_225_);
return v_r_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__4___redArg(lean_object* v_x_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = l_Lean_Meta_saveState___redArg(v___y_229_, v___y_231_);
if (lean_obj_tag(v___x_233_) == 0)
{
lean_object* v_a_234_; lean_object* v___x_235_; 
v_a_234_ = lean_ctor_get(v___x_233_, 0);
lean_inc(v_a_234_);
lean_dec_ref_known(v___x_233_, 1);
lean_inc(v___y_231_);
lean_inc_ref(v___y_230_);
lean_inc(v___y_229_);
lean_inc_ref(v___y_228_);
v___x_235_ = lean_apply_5(v_x_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_, lean_box(0));
if (lean_obj_tag(v___x_235_) == 0)
{
lean_object* v_a_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_244_; 
lean_dec(v_a_234_);
v_a_236_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_244_ == 0)
{
v___x_238_ = v___x_235_;
v_isShared_239_ = v_isSharedCheck_244_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_a_236_);
lean_dec(v___x_235_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_244_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_240_; lean_object* v___x_242_; 
v___x_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_240_, 0, v_a_236_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 0, v___x_240_);
v___x_242_ = v___x_238_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_240_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
else
{
lean_object* v_a_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_275_; 
v_a_245_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_275_ == 0)
{
v___x_247_ = v___x_235_;
v_isShared_248_ = v_isSharedCheck_275_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_a_245_);
lean_dec(v___x_235_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_275_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
uint8_t v___x_249_; 
v___x_249_ = l_Lean_Exception_isInterrupt(v_a_245_);
if (v___x_249_ == 0)
{
uint8_t v___x_250_; 
lean_inc(v_a_245_);
v___x_250_ = l_Lean_Exception_isRuntime(v_a_245_);
if (v___x_250_ == 0)
{
lean_object* v___x_251_; 
lean_del_object(v___x_247_);
lean_dec(v_a_245_);
v___x_251_ = l_Lean_Meta_SavedState_restore___redArg(v_a_234_, v___y_229_, v___y_231_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_259_; 
v_isSharedCheck_259_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_259_ == 0)
{
lean_object* v_unused_260_; 
v_unused_260_ = lean_ctor_get(v___x_251_, 0);
lean_dec(v_unused_260_);
v___x_253_ = v___x_251_;
v_isShared_254_ = v_isSharedCheck_259_;
goto v_resetjp_252_;
}
else
{
lean_dec(v___x_251_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_259_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_255_; lean_object* v___x_257_; 
v___x_255_ = lean_box(0);
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 0, v___x_255_);
v___x_257_ = v___x_253_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_255_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
else
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_268_; 
v_a_261_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_268_ == 0)
{
v___x_263_ = v___x_251_;
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___x_251_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_261_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
}
else
{
lean_object* v___x_270_; 
lean_dec(v_a_234_);
if (v_isShared_248_ == 0)
{
v___x_270_ = v___x_247_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_a_245_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
else
{
lean_object* v___x_273_; 
lean_dec(v_a_234_);
if (v_isShared_248_ == 0)
{
v___x_273_ = v___x_247_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_245_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
}
}
else
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_283_; 
lean_dec_ref(v_x_227_);
v_a_276_ = lean_ctor_get(v___x_233_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_233_);
if (v_isSharedCheck_283_ == 0)
{
v___x_278_ = v___x_233_;
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_233_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_279_ == 0)
{
v___x_281_ = v___x_278_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_a_276_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__4___redArg___boxed(lean_object* v_x_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__4___redArg(v_x_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__4(lean_object* v_00_u03b1_291_, lean_object* v_x_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__4___redArg(v_x_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__4___boxed(lean_object* v_00_u03b1_299_, lean_object* v_x_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__4(v_00_u03b1_299_, v_x_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__5(lean_object* v_msgData_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
lean_object* v___x_313_; lean_object* v_env_314_; uint8_t v___x_315_; lean_object* v_env_316_; lean_object* v___x_317_; lean_object* v_toCold_318_; lean_object* v_mctx_319_; lean_object* v_lctx_320_; lean_object* v_options_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_313_ = lean_st_ref_get(v___y_311_);
v_env_314_ = lean_ctor_get(v___x_313_, 0);
lean_inc_ref(v_env_314_);
lean_dec(v___x_313_);
v___x_315_ = 0;
v_env_316_ = l_Lean_Environment_setRecordingDeps(v_env_314_, v___x_315_);
v___x_317_ = lean_st_ref_get(v___y_309_);
v_toCold_318_ = lean_ctor_get(v___y_310_, 0);
v_mctx_319_ = lean_ctor_get(v___x_317_, 0);
lean_inc_ref(v_mctx_319_);
lean_dec(v___x_317_);
v_lctx_320_ = lean_ctor_get(v___y_308_, 2);
v_options_321_ = lean_ctor_get(v_toCold_318_, 2);
lean_inc_ref(v_options_321_);
lean_inc_ref(v_lctx_320_);
v___x_322_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_322_, 0, v_env_316_);
lean_ctor_set(v___x_322_, 1, v_mctx_319_);
lean_ctor_set(v___x_322_, 2, v_lctx_320_);
lean_ctor_set(v___x_322_, 3, v_options_321_);
v___x_323_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
lean_ctor_set(v___x_323_, 1, v_msgData_307_);
v___x_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__5___boxed(lean_object* v_msgData_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Lean_addMessageContextFull___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__5(v_msgData_325_, v___y_326_, v___y_327_, v___y_328_, v___y_329_);
lean_dec(v___y_329_);
lean_dec_ref(v___y_328_);
lean_dec(v___y_327_);
lean_dec_ref(v___y_326_);
return v_res_331_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0___closed__1(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0___closed__0));
v___x_334_ = l_Lean_stringToMessageData(v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0(lean_object* v_x_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0___closed__1);
v___x_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0___boxed(lean_object* v_x_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__0(v_x_343_, v___y_344_, v___y_345_, v___y_346_, v___y_347_);
lean_dec(v___y_347_);
lean_dec_ref(v___y_346_);
lean_dec(v___y_345_);
lean_dec_ref(v___y_344_);
lean_dec_ref(v_x_343_);
return v_res_349_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1___closed__1(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1___closed__0));
v___x_352_ = l_Lean_stringToMessageData(v___x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1(lean_object* v_x_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_359_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1___closed__1, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1___closed__1_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1___closed__1);
v___x_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1___boxed(lean_object* v_x_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__1(v_x_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_);
lean_dec(v___y_365_);
lean_dec_ref(v___y_364_);
lean_dec(v___y_363_);
lean_dec_ref(v___y_362_);
lean_dec_ref(v_x_361_);
return v_res_367_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4___closed__1(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4___closed__0));
v___x_370_ = l_Lean_stringToMessageData(v___x_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4(lean_object* v_x_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_377_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4___closed__1, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4___closed__1_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4___closed__1);
v___x_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_378_, 0, v___x_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4___boxed(lean_object* v_x_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__4(v_x_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_);
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec_ref(v_x_379_);
return v_res_385_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2___closed__1(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2___closed__0));
v___x_388_ = l_Lean_stringToMessageData(v___x_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2(lean_object* v_x_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_395_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2___closed__1, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2___closed__1_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2___closed__1);
v___x_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2___boxed(lean_object* v_x_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__2(v_x_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec_ref(v_x_397_);
return v_res_403_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3___closed__1(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3___closed__0));
v___x_406_ = l_Lean_stringToMessageData(v___x_405_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3(lean_object* v_head_407_, lean_object* v_x_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_425_; 
v___x_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_414_, 0, v_head_407_);
v___x_415_ = l_Lean_addMessageContextFull___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__5(v___x_414_, v___y_409_, v___y_410_, v___y_411_, v___y_412_);
v_a_416_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_425_ == 0)
{
v___x_418_ = v___x_415_;
v_isShared_419_ = v_isSharedCheck_425_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v___x_415_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_425_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_423_; 
v___x_420_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3___closed__1, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3___closed__1_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3___closed__1);
v___x_421_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
lean_ctor_set(v___x_421_, 1, v_a_416_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_421_);
v___x_423_ = v___x_418_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_421_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3___boxed(lean_object* v_head_426_, lean_object* v_x_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3(v_head_426_, v_x_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
lean_dec_ref(v_x_427_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__6(lean_object* v_opts_434_, lean_object* v_opt_435_){
_start:
{
lean_object* v_name_436_; lean_object* v_defValue_437_; lean_object* v_map_438_; lean_object* v___x_439_; 
v_name_436_ = lean_ctor_get(v_opt_435_, 0);
v_defValue_437_ = lean_ctor_get(v_opt_435_, 1);
v_map_438_ = lean_ctor_get(v_opts_434_, 0);
v___x_439_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_438_, v_name_436_);
if (lean_obj_tag(v___x_439_) == 0)
{
lean_inc(v_defValue_437_);
return v_defValue_437_;
}
else
{
lean_object* v_val_440_; 
v_val_440_ = lean_ctor_get(v___x_439_, 0);
lean_inc(v_val_440_);
lean_dec_ref_known(v___x_439_, 1);
if (lean_obj_tag(v_val_440_) == 3)
{
lean_object* v_v_441_; 
v_v_441_ = lean_ctor_get(v_val_440_, 0);
lean_inc(v_v_441_);
lean_dec_ref_known(v_val_440_, 1);
return v_v_441_;
}
else
{
lean_dec(v_val_440_);
lean_inc(v_defValue_437_);
return v_defValue_437_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__6___boxed(lean_object* v_opts_442_, lean_object* v_opt_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__6(v_opts_442_, v_opt_443_);
lean_dec_ref(v_opt_443_);
lean_dec_ref(v_opts_442_);
return v_res_444_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7_spec__12(lean_object* v_e_445_){
_start:
{
if (lean_obj_tag(v_e_445_) == 0)
{
uint8_t v___x_446_; 
v___x_446_ = 2;
return v___x_446_;
}
else
{
lean_object* v_a_447_; 
v_a_447_ = lean_ctor_get(v_e_445_, 0);
if (lean_obj_tag(v_a_447_) == 0)
{
uint8_t v___x_448_; 
v___x_448_ = 1;
return v___x_448_;
}
else
{
uint8_t v___x_449_; 
v___x_449_ = 0;
return v___x_449_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7_spec__12___boxed(lean_object* v_e_450_){
_start:
{
uint8_t v_res_451_; lean_object* v_r_452_; 
v_res_451_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7_spec__12(v_e_450_);
lean_dec_ref(v_e_450_);
v_r_452_ = lean_box(v_res_451_);
return v_r_452_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__4___redArg(lean_object* v_x_453_){
_start:
{
if (lean_obj_tag(v_x_453_) == 0)
{
lean_object* v_a_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_462_; 
v_a_455_ = lean_ctor_get(v_x_453_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v_x_453_);
if (v_isSharedCheck_462_ == 0)
{
v___x_457_ = v_x_453_;
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_a_455_);
lean_dec(v_x_453_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_460_; 
if (v_isShared_458_ == 0)
{
lean_ctor_set_tag(v___x_457_, 1);
v___x_460_ = v___x_457_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_a_455_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
else
{
lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_470_; 
v_a_463_ = lean_ctor_get(v_x_453_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v_x_453_);
if (v_isSharedCheck_470_ == 0)
{
v___x_465_ = v_x_453_;
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_dec(v_x_453_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
lean_ctor_set_tag(v___x_465_, 0);
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_a_463_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__4___redArg___boxed(lean_object* v_x_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__4___redArg(v_x_471_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__3_spec__6(size_t v_sz_474_, size_t v_i_475_, lean_object* v_bs_476_){
_start:
{
uint8_t v___x_477_; 
v___x_477_ = lean_usize_dec_lt(v_i_475_, v_sz_474_);
if (v___x_477_ == 0)
{
return v_bs_476_;
}
else
{
lean_object* v_v_478_; lean_object* v_msg_479_; lean_object* v___x_480_; lean_object* v_bs_x27_481_; size_t v___x_482_; size_t v___x_483_; lean_object* v___x_484_; 
v_v_478_ = lean_array_uget_borrowed(v_bs_476_, v_i_475_);
v_msg_479_ = lean_ctor_get(v_v_478_, 1);
lean_inc_ref(v_msg_479_);
v___x_480_ = lean_unsigned_to_nat(0u);
v_bs_x27_481_ = lean_array_uset(v_bs_476_, v_i_475_, v___x_480_);
v___x_482_ = ((size_t)1ULL);
v___x_483_ = lean_usize_add(v_i_475_, v___x_482_);
v___x_484_ = lean_array_uset(v_bs_x27_481_, v_i_475_, v_msg_479_);
v_i_475_ = v___x_483_;
v_bs_476_ = v___x_484_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__3_spec__6___boxed(lean_object* v_sz_486_, lean_object* v_i_487_, lean_object* v_bs_488_){
_start:
{
size_t v_sz_boxed_489_; size_t v_i_boxed_490_; lean_object* v_res_491_; 
v_sz_boxed_489_ = lean_unbox_usize(v_sz_486_);
lean_dec(v_sz_486_);
v_i_boxed_490_ = lean_unbox_usize(v_i_487_);
lean_dec(v_i_487_);
v_res_491_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__3_spec__6(v_sz_boxed_489_, v_i_boxed_490_, v_bs_488_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__3(lean_object* v_oldTraces_492_, lean_object* v_data_493_, lean_object* v_ref_494_, lean_object* v_msg_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_){
_start:
{
lean_object* v_toCold_501_; lean_object* v_currRecDepth_502_; lean_object* v_ref_503_; uint16_t v_optionFlags_504_; uint8_t v_suppressElabErrors_505_; uint8_t v_checkDeprecated_506_; uint8_t v_isRecordingDeps_507_; lean_object* v_ref_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v_traceState_511_; lean_object* v_traces_512_; lean_object* v___x_513_; size_t v_sz_514_; size_t v___x_515_; lean_object* v___x_516_; lean_object* v_msg_517_; lean_object* v___x_518_; lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_557_; 
v_toCold_501_ = lean_ctor_get(v___y_498_, 0);
v_currRecDepth_502_ = lean_ctor_get(v___y_498_, 1);
v_ref_503_ = lean_ctor_get(v___y_498_, 2);
v_optionFlags_504_ = lean_ctor_get_uint16(v___y_498_, sizeof(void*)*3);
v_suppressElabErrors_505_ = lean_ctor_get_uint8(v___y_498_, sizeof(void*)*3 + 2);
v_checkDeprecated_506_ = lean_ctor_get_uint8(v___y_498_, sizeof(void*)*3 + 3);
v_isRecordingDeps_507_ = lean_ctor_get_uint8(v___y_498_, sizeof(void*)*3 + 4);
v_ref_508_ = l_Lean_replaceRef(v_ref_494_, v_ref_503_);
lean_inc(v_currRecDepth_502_);
lean_inc_ref(v_toCold_501_);
v___x_509_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_509_, 0, v_toCold_501_);
lean_ctor_set(v___x_509_, 1, v_currRecDepth_502_);
lean_ctor_set(v___x_509_, 2, v_ref_508_);
lean_ctor_set_uint16(v___x_509_, sizeof(void*)*3, v_optionFlags_504_);
lean_ctor_set_uint8(v___x_509_, sizeof(void*)*3 + 2, v_suppressElabErrors_505_);
lean_ctor_set_uint8(v___x_509_, sizeof(void*)*3 + 3, v_checkDeprecated_506_);
lean_ctor_set_uint8(v___x_509_, sizeof(void*)*3 + 4, v_isRecordingDeps_507_);
v___x_510_ = lean_st_ref_get(v___y_499_);
v_traceState_511_ = lean_ctor_get(v___x_510_, 4);
lean_inc_ref(v_traceState_511_);
lean_dec(v___x_510_);
v_traces_512_ = lean_ctor_get(v_traceState_511_, 0);
lean_inc_ref(v_traces_512_);
lean_dec_ref(v_traceState_511_);
v___x_513_ = l_Lean_PersistentArray_toArray___redArg(v_traces_512_);
lean_dec_ref(v_traces_512_);
v_sz_514_ = lean_array_size(v___x_513_);
v___x_515_ = ((size_t)0ULL);
v___x_516_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__3_spec__6(v_sz_514_, v___x_515_, v___x_513_);
v_msg_517_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_517_, 0, v_data_493_);
lean_ctor_set(v_msg_517_, 1, v_msg_495_);
lean_ctor_set(v_msg_517_, 2, v___x_516_);
v___x_518_ = l_Lean_addMessageContextFull___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__5(v_msg_517_, v___y_496_, v___y_497_, v___x_509_, v___y_499_);
lean_dec_ref_known(v___x_509_, 3);
v_a_519_ = lean_ctor_get(v___x_518_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_518_);
if (v_isSharedCheck_557_ == 0)
{
v___x_521_ = v___x_518_;
v_isShared_522_ = v_isSharedCheck_557_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v___x_518_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_557_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_523_; lean_object* v_traceState_524_; lean_object* v_env_525_; lean_object* v_nextMacroScope_526_; lean_object* v_ngen_527_; lean_object* v_auxDeclNGen_528_; lean_object* v_cache_529_; lean_object* v_recordedDeps_530_; lean_object* v_messages_531_; lean_object* v_infoState_532_; lean_object* v_snapshotTasks_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_556_; 
v___x_523_ = lean_st_ref_take(v___y_499_);
v_traceState_524_ = lean_ctor_get(v___x_523_, 4);
v_env_525_ = lean_ctor_get(v___x_523_, 0);
v_nextMacroScope_526_ = lean_ctor_get(v___x_523_, 1);
v_ngen_527_ = lean_ctor_get(v___x_523_, 2);
v_auxDeclNGen_528_ = lean_ctor_get(v___x_523_, 3);
v_cache_529_ = lean_ctor_get(v___x_523_, 5);
v_recordedDeps_530_ = lean_ctor_get(v___x_523_, 6);
v_messages_531_ = lean_ctor_get(v___x_523_, 7);
v_infoState_532_ = lean_ctor_get(v___x_523_, 8);
v_snapshotTasks_533_ = lean_ctor_get(v___x_523_, 9);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_556_ == 0)
{
v___x_535_ = v___x_523_;
v_isShared_536_ = v_isSharedCheck_556_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_snapshotTasks_533_);
lean_inc(v_infoState_532_);
lean_inc(v_messages_531_);
lean_inc(v_recordedDeps_530_);
lean_inc(v_cache_529_);
lean_inc(v_traceState_524_);
lean_inc(v_auxDeclNGen_528_);
lean_inc(v_ngen_527_);
lean_inc(v_nextMacroScope_526_);
lean_inc(v_env_525_);
lean_dec(v___x_523_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_556_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
uint64_t v_tid_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_554_; 
v_tid_537_ = lean_ctor_get_uint64(v_traceState_524_, sizeof(void*)*1);
v_isSharedCheck_554_ = !lean_is_exclusive(v_traceState_524_);
if (v_isSharedCheck_554_ == 0)
{
lean_object* v_unused_555_; 
v_unused_555_ = lean_ctor_get(v_traceState_524_, 0);
lean_dec(v_unused_555_);
v___x_539_ = v_traceState_524_;
v_isShared_540_ = v_isSharedCheck_554_;
goto v_resetjp_538_;
}
else
{
lean_dec(v_traceState_524_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_554_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_545_; 
v___x_541_ = lean_box(0);
v___x_542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_542_, 0, v_ref_494_);
lean_ctor_set(v___x_542_, 1, v_a_519_);
v___x_543_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_492_, v___x_542_);
if (v_isShared_540_ == 0)
{
lean_ctor_set(v___x_539_, 0, v___x_543_);
v___x_545_ = v___x_539_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v___x_543_);
lean_ctor_set_uint64(v_reuseFailAlloc_553_, sizeof(void*)*1, v_tid_537_);
v___x_545_ = v_reuseFailAlloc_553_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
lean_object* v___x_547_; 
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 4, v___x_545_);
v___x_547_ = v___x_535_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_env_525_);
lean_ctor_set(v_reuseFailAlloc_552_, 1, v_nextMacroScope_526_);
lean_ctor_set(v_reuseFailAlloc_552_, 2, v_ngen_527_);
lean_ctor_set(v_reuseFailAlloc_552_, 3, v_auxDeclNGen_528_);
lean_ctor_set(v_reuseFailAlloc_552_, 4, v___x_545_);
lean_ctor_set(v_reuseFailAlloc_552_, 5, v_cache_529_);
lean_ctor_set(v_reuseFailAlloc_552_, 6, v_recordedDeps_530_);
lean_ctor_set(v_reuseFailAlloc_552_, 7, v_messages_531_);
lean_ctor_set(v_reuseFailAlloc_552_, 8, v_infoState_532_);
lean_ctor_set(v_reuseFailAlloc_552_, 9, v_snapshotTasks_533_);
v___x_547_ = v_reuseFailAlloc_552_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
lean_object* v___x_548_; lean_object* v___x_550_; 
v___x_548_ = lean_st_ref_put(v___y_499_, v___x_547_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 0, v___x_541_);
v___x_550_ = v___x_521_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v___x_541_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
return v___x_550_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__3___boxed(lean_object* v_oldTraces_558_, lean_object* v_data_559_, lean_object* v_ref_560_, lean_object* v_msg_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__3(v_oldTraces_558_, v_data_559_, v_ref_560_, v_msg_561_, v___y_562_, v___y_563_, v___y_564_, v___y_565_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec(v___y_563_);
lean_dec_ref(v___y_562_);
return v_res_567_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__0(void){
_start:
{
lean_object* v___x_568_; double v___x_569_; 
v___x_568_ = lean_unsigned_to_nat(0u);
v___x_569_ = lean_float_of_nat(v___x_568_);
return v___x_569_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__2(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__1));
v___x_572_ = l_Lean_stringToMessageData(v___x_571_);
return v___x_572_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__3(void){
_start:
{
lean_object* v___x_573_; double v___x_574_; 
v___x_573_ = lean_unsigned_to_nat(1000u);
v___x_574_ = lean_float_of_nat(v___x_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7(lean_object* v_cls_575_, uint8_t v_collapsed_576_, lean_object* v_tag_577_, lean_object* v_opts_578_, uint8_t v_clsEnabled_579_, lean_object* v_oldTraces_580_, lean_object* v_msg_581_, lean_object* v_resStartStop_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_){
_start:
{
lean_object* v_fst_588_; lean_object* v_snd_589_; lean_object* v___y_591_; lean_object* v___y_592_; lean_object* v_data_593_; lean_object* v_fst_604_; lean_object* v_snd_605_; lean_object* v___x_606_; uint8_t v___x_607_; lean_object* v___y_609_; lean_object* v_a_610_; uint8_t v___y_625_; double v___y_657_; 
v_fst_588_ = lean_ctor_get(v_resStartStop_582_, 0);
lean_inc(v_fst_588_);
v_snd_589_ = lean_ctor_get(v_resStartStop_582_, 1);
lean_inc(v_snd_589_);
lean_dec_ref(v_resStartStop_582_);
v_fst_604_ = lean_ctor_get(v_snd_589_, 0);
lean_inc(v_fst_604_);
v_snd_605_ = lean_ctor_get(v_snd_589_, 1);
lean_inc(v_snd_605_);
lean_dec(v_snd_589_);
v___x_606_ = l_Lean_trace_profiler;
v___x_607_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_opts_578_, v___x_606_);
if (v___x_607_ == 0)
{
v___y_625_ = v___x_607_;
goto v___jp_624_;
}
else
{
lean_object* v___x_662_; uint8_t v___x_663_; 
v___x_662_ = l_Lean_trace_profiler_useHeartbeats;
v___x_663_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_opts_578_, v___x_662_);
if (v___x_663_ == 0)
{
lean_object* v___x_664_; lean_object* v___x_665_; double v___x_666_; double v___x_667_; double v___x_668_; 
v___x_664_ = l_Lean_trace_profiler_threshold;
v___x_665_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__6(v_opts_578_, v___x_664_);
v___x_666_ = lean_float_of_nat(v___x_665_);
v___x_667_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__3);
v___x_668_ = lean_float_div(v___x_666_, v___x_667_);
v___y_657_ = v___x_668_;
goto v___jp_656_;
}
else
{
lean_object* v___x_669_; lean_object* v___x_670_; double v___x_671_; 
v___x_669_ = l_Lean_trace_profiler_threshold;
v___x_670_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__6(v_opts_578_, v___x_669_);
v___x_671_ = lean_float_of_nat(v___x_670_);
v___y_657_ = v___x_671_;
goto v___jp_656_;
}
}
v___jp_590_:
{
lean_object* v___x_594_; 
lean_inc(v___y_591_);
v___x_594_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__3(v_oldTraces_580_, v_data_593_, v___y_591_, v___y_592_, v___y_583_, v___y_584_, v___y_585_, v___y_586_);
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v___x_595_; 
lean_dec_ref_known(v___x_594_, 1);
v___x_595_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__4___redArg(v_fst_588_);
return v___x_595_;
}
else
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_603_; 
lean_dec(v_fst_588_);
v_a_596_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_603_ == 0)
{
v___x_598_ = v___x_594_;
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_594_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_601_; 
if (v_isShared_599_ == 0)
{
v___x_601_ = v___x_598_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_a_596_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
}
}
v___jp_608_:
{
uint8_t v_result_611_; lean_object* v___x_612_; lean_object* v___x_613_; double v___x_614_; lean_object* v_data_615_; 
v_result_611_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7_spec__12(v_fst_588_);
v___x_612_ = lean_box(v_result_611_);
v___x_613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
v___x_614_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__0);
lean_inc_ref(v_tag_577_);
lean_inc_ref(v___x_613_);
lean_inc(v_cls_575_);
v_data_615_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_615_, 0, v_cls_575_);
lean_ctor_set(v_data_615_, 1, v___x_613_);
lean_ctor_set(v_data_615_, 2, v_tag_577_);
lean_ctor_set_float(v_data_615_, sizeof(void*)*3, v___x_614_);
lean_ctor_set_float(v_data_615_, sizeof(void*)*3 + 8, v___x_614_);
lean_ctor_set_uint8(v_data_615_, sizeof(void*)*3 + 16, v_collapsed_576_);
if (v___x_607_ == 0)
{
lean_dec_ref_known(v___x_613_, 1);
lean_dec(v_snd_605_);
lean_dec(v_fst_604_);
lean_dec_ref(v_tag_577_);
lean_dec(v_cls_575_);
v___y_591_ = v___y_609_;
v___y_592_ = v_a_610_;
v_data_593_ = v_data_615_;
goto v___jp_590_;
}
else
{
lean_object* v_data_616_; double v___x_617_; double v___x_618_; 
lean_dec_ref_known(v_data_615_, 3);
v_data_616_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_616_, 0, v_cls_575_);
lean_ctor_set(v_data_616_, 1, v___x_613_);
lean_ctor_set(v_data_616_, 2, v_tag_577_);
v___x_617_ = lean_unbox_float(v_fst_604_);
lean_dec(v_fst_604_);
lean_ctor_set_float(v_data_616_, sizeof(void*)*3, v___x_617_);
v___x_618_ = lean_unbox_float(v_snd_605_);
lean_dec(v_snd_605_);
lean_ctor_set_float(v_data_616_, sizeof(void*)*3 + 8, v___x_618_);
lean_ctor_set_uint8(v_data_616_, sizeof(void*)*3 + 16, v_collapsed_576_);
v___y_591_ = v___y_609_;
v___y_592_ = v_a_610_;
v_data_593_ = v_data_616_;
goto v___jp_590_;
}
}
v___jp_619_:
{
lean_object* v_ref_620_; lean_object* v___x_621_; 
v_ref_620_ = lean_ctor_get(v___y_585_, 2);
lean_inc(v___y_586_);
lean_inc_ref(v___y_585_);
lean_inc(v___y_584_);
lean_inc_ref(v___y_583_);
lean_inc(v_fst_588_);
v___x_621_ = lean_apply_6(v_msg_581_, v_fst_588_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, lean_box(0));
if (lean_obj_tag(v___x_621_) == 0)
{
lean_object* v_a_622_; 
v_a_622_ = lean_ctor_get(v___x_621_, 0);
lean_inc(v_a_622_);
lean_dec_ref_known(v___x_621_, 1);
v___y_609_ = v_ref_620_;
v_a_610_ = v_a_622_;
goto v___jp_608_;
}
else
{
lean_object* v___x_623_; 
lean_dec_ref_known(v___x_621_, 1);
v___x_623_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__2);
v___y_609_ = v_ref_620_;
v_a_610_ = v___x_623_;
goto v___jp_608_;
}
}
v___jp_624_:
{
if (v_clsEnabled_579_ == 0)
{
if (v___y_625_ == 0)
{
lean_object* v___x_626_; lean_object* v_traceState_627_; lean_object* v_env_628_; lean_object* v_nextMacroScope_629_; lean_object* v_ngen_630_; lean_object* v_auxDeclNGen_631_; lean_object* v_cache_632_; lean_object* v_recordedDeps_633_; lean_object* v_messages_634_; lean_object* v_infoState_635_; lean_object* v_snapshotTasks_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_655_; 
lean_dec(v_snd_605_);
lean_dec(v_fst_604_);
lean_dec_ref(v_msg_581_);
lean_dec_ref(v_tag_577_);
lean_dec(v_cls_575_);
v___x_626_ = lean_st_ref_take(v___y_586_);
v_traceState_627_ = lean_ctor_get(v___x_626_, 4);
v_env_628_ = lean_ctor_get(v___x_626_, 0);
v_nextMacroScope_629_ = lean_ctor_get(v___x_626_, 1);
v_ngen_630_ = lean_ctor_get(v___x_626_, 2);
v_auxDeclNGen_631_ = lean_ctor_get(v___x_626_, 3);
v_cache_632_ = lean_ctor_get(v___x_626_, 5);
v_recordedDeps_633_ = lean_ctor_get(v___x_626_, 6);
v_messages_634_ = lean_ctor_get(v___x_626_, 7);
v_infoState_635_ = lean_ctor_get(v___x_626_, 8);
v_snapshotTasks_636_ = lean_ctor_get(v___x_626_, 9);
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_655_ == 0)
{
v___x_638_ = v___x_626_;
v_isShared_639_ = v_isSharedCheck_655_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_snapshotTasks_636_);
lean_inc(v_infoState_635_);
lean_inc(v_messages_634_);
lean_inc(v_recordedDeps_633_);
lean_inc(v_cache_632_);
lean_inc(v_traceState_627_);
lean_inc(v_auxDeclNGen_631_);
lean_inc(v_ngen_630_);
lean_inc(v_nextMacroScope_629_);
lean_inc(v_env_628_);
lean_dec(v___x_626_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_655_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
uint64_t v_tid_640_; lean_object* v_traces_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_654_; 
v_tid_640_ = lean_ctor_get_uint64(v_traceState_627_, sizeof(void*)*1);
v_traces_641_ = lean_ctor_get(v_traceState_627_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v_traceState_627_);
if (v_isSharedCheck_654_ == 0)
{
v___x_643_ = v_traceState_627_;
v_isShared_644_ = v_isSharedCheck_654_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_traces_641_);
lean_dec(v_traceState_627_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_654_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_645_; lean_object* v___x_647_; 
v___x_645_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_580_, v_traces_641_);
lean_dec_ref(v_traces_641_);
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 0, v___x_645_);
v___x_647_ = v___x_643_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_645_);
lean_ctor_set_uint64(v_reuseFailAlloc_653_, sizeof(void*)*1, v_tid_640_);
v___x_647_ = v_reuseFailAlloc_653_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
lean_object* v___x_649_; 
if (v_isShared_639_ == 0)
{
lean_ctor_set(v___x_638_, 4, v___x_647_);
v___x_649_ = v___x_638_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_env_628_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v_nextMacroScope_629_);
lean_ctor_set(v_reuseFailAlloc_652_, 2, v_ngen_630_);
lean_ctor_set(v_reuseFailAlloc_652_, 3, v_auxDeclNGen_631_);
lean_ctor_set(v_reuseFailAlloc_652_, 4, v___x_647_);
lean_ctor_set(v_reuseFailAlloc_652_, 5, v_cache_632_);
lean_ctor_set(v_reuseFailAlloc_652_, 6, v_recordedDeps_633_);
lean_ctor_set(v_reuseFailAlloc_652_, 7, v_messages_634_);
lean_ctor_set(v_reuseFailAlloc_652_, 8, v_infoState_635_);
lean_ctor_set(v_reuseFailAlloc_652_, 9, v_snapshotTasks_636_);
v___x_649_ = v_reuseFailAlloc_652_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = lean_st_ref_put(v___y_586_, v___x_649_);
v___x_651_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__4___redArg(v_fst_588_);
return v___x_651_;
}
}
}
}
}
else
{
goto v___jp_619_;
}
}
else
{
goto v___jp_619_;
}
}
v___jp_656_:
{
double v___x_658_; double v___x_659_; double v___x_660_; uint8_t v___x_661_; 
v___x_658_ = lean_unbox_float(v_snd_605_);
v___x_659_ = lean_unbox_float(v_fst_604_);
v___x_660_ = lean_float_sub(v___x_658_, v___x_659_);
v___x_661_ = lean_float_decLt(v___y_657_, v___x_660_);
v___y_625_ = v___x_661_;
goto v___jp_624_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___boxed(lean_object* v_cls_672_, lean_object* v_collapsed_673_, lean_object* v_tag_674_, lean_object* v_opts_675_, lean_object* v_clsEnabled_676_, lean_object* v_oldTraces_677_, lean_object* v_msg_678_, lean_object* v_resStartStop_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_){
_start:
{
uint8_t v_collapsed_boxed_685_; uint8_t v_clsEnabled_boxed_686_; lean_object* v_res_687_; 
v_collapsed_boxed_685_ = lean_unbox(v_collapsed_673_);
v_clsEnabled_boxed_686_ = lean_unbox(v_clsEnabled_676_);
v_res_687_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7(v_cls_672_, v_collapsed_boxed_685_, v_tag_674_, v_opts_675_, v_clsEnabled_boxed_686_, v_oldTraces_677_, v_msg_678_, v_resStartStop_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
lean_dec(v___y_683_);
lean_dec_ref(v___y_682_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
lean_dec_ref(v_opts_675_);
return v_res_687_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12_spec__15___redArg(lean_object* v_keys_688_, lean_object* v_i_689_, lean_object* v_k_690_){
_start:
{
lean_object* v___x_691_; uint8_t v___x_692_; 
v___x_691_ = lean_array_get_size(v_keys_688_);
v___x_692_ = lean_nat_dec_lt(v_i_689_, v___x_691_);
if (v___x_692_ == 0)
{
lean_dec(v_i_689_);
return v___x_692_;
}
else
{
lean_object* v_k_x27_693_; uint8_t v___x_694_; 
v_k_x27_693_ = lean_array_fget_borrowed(v_keys_688_, v_i_689_);
v___x_694_ = l_Lean_instBEqMVarId_beq(v_k_690_, v_k_x27_693_);
if (v___x_694_ == 0)
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = lean_unsigned_to_nat(1u);
v___x_696_ = lean_nat_add(v_i_689_, v___x_695_);
lean_dec(v_i_689_);
v_i_689_ = v___x_696_;
goto _start;
}
else
{
lean_dec(v_i_689_);
return v___x_692_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12_spec__15___redArg___boxed(lean_object* v_keys_698_, lean_object* v_i_699_, lean_object* v_k_700_){
_start:
{
uint8_t v_res_701_; lean_object* v_r_702_; 
v_res_701_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12_spec__15___redArg(v_keys_698_, v_i_699_, v_k_700_);
lean_dec(v_k_700_);
lean_dec_ref(v_keys_698_);
v_r_702_ = lean_box(v_res_701_);
return v_r_702_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12___redArg(lean_object* v_x_703_, size_t v_x_704_, lean_object* v_x_705_){
_start:
{
if (lean_obj_tag(v_x_703_) == 0)
{
lean_object* v_es_706_; lean_object* v___x_707_; size_t v___x_708_; size_t v___x_709_; lean_object* v_j_710_; lean_object* v___x_711_; 
v_es_706_ = lean_ctor_get(v_x_703_, 0);
v___x_707_ = lean_box(2);
v___x_708_ = ((size_t)31ULL);
v___x_709_ = lean_usize_land(v_x_704_, v___x_708_);
v_j_710_ = lean_usize_to_nat(v___x_709_);
v___x_711_ = lean_array_get_borrowed(v___x_707_, v_es_706_, v_j_710_);
lean_dec(v_j_710_);
switch(lean_obj_tag(v___x_711_))
{
case 0:
{
lean_object* v_key_712_; uint8_t v___x_713_; 
v_key_712_ = lean_ctor_get(v___x_711_, 0);
v___x_713_ = l_Lean_instBEqMVarId_beq(v_x_705_, v_key_712_);
return v___x_713_;
}
case 1:
{
lean_object* v_node_714_; size_t v___x_715_; size_t v___x_716_; 
v_node_714_ = lean_ctor_get(v___x_711_, 0);
v___x_715_ = ((size_t)5ULL);
v___x_716_ = lean_usize_shift_right(v_x_704_, v___x_715_);
v_x_703_ = v_node_714_;
v_x_704_ = v___x_716_;
goto _start;
}
default: 
{
uint8_t v___x_718_; 
v___x_718_ = 0;
return v___x_718_;
}
}
}
else
{
lean_object* v_ks_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v_ks_719_ = lean_ctor_get(v_x_703_, 0);
v___x_720_ = lean_unsigned_to_nat(0u);
v___x_721_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12_spec__15___redArg(v_ks_719_, v___x_720_, v_x_705_);
return v___x_721_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12___redArg___boxed(lean_object* v_x_722_, lean_object* v_x_723_, lean_object* v_x_724_){
_start:
{
size_t v_x_76759__boxed_725_; uint8_t v_res_726_; lean_object* v_r_727_; 
v_x_76759__boxed_725_ = lean_unbox_usize(v_x_723_);
lean_dec(v_x_723_);
v_res_726_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12___redArg(v_x_722_, v_x_76759__boxed_725_, v_x_724_);
lean_dec(v_x_724_);
lean_dec_ref(v_x_722_);
v_r_727_ = lean_box(v_res_726_);
return v_r_727_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10___redArg(lean_object* v_x_728_, lean_object* v_x_729_){
_start:
{
uint64_t v___x_730_; size_t v___x_731_; uint8_t v___x_732_; 
v___x_730_ = l_Lean_instHashableMVarId_hash(v_x_729_);
v___x_731_ = lean_uint64_to_usize(v___x_730_);
v___x_732_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12___redArg(v_x_728_, v___x_731_, v_x_729_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10___redArg___boxed(lean_object* v_x_733_, lean_object* v_x_734_){
_start:
{
uint8_t v_res_735_; lean_object* v_r_736_; 
v_res_735_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10___redArg(v_x_733_, v_x_734_);
lean_dec(v_x_734_);
lean_dec_ref(v_x_733_);
v_r_736_ = lean_box(v_res_735_);
return v_r_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6___redArg(lean_object* v_mvarId_737_, lean_object* v___y_738_){
_start:
{
lean_object* v___x_740_; lean_object* v_mctx_741_; lean_object* v_eAssignment_742_; uint8_t v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_740_ = lean_st_ref_get(v___y_738_);
v_mctx_741_ = lean_ctor_get(v___x_740_, 0);
lean_inc_ref(v_mctx_741_);
lean_dec(v___x_740_);
v_eAssignment_742_ = lean_ctor_get(v_mctx_741_, 8);
lean_inc_ref(v_eAssignment_742_);
lean_dec_ref(v_mctx_741_);
v___x_743_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10___redArg(v_eAssignment_742_, v_mvarId_737_);
lean_dec_ref(v_eAssignment_742_);
v___x_744_ = lean_box(v___x_743_);
v___x_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_745_, 0, v___x_744_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6___redArg___boxed(lean_object* v_mvarId_746_, lean_object* v___y_747_, lean_object* v___y_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6___redArg(v_mvarId_746_, v___y_747_);
lean_dec(v___y_747_);
lean_dec(v_mvarId_746_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___redArg(lean_object* v_msg_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v_ref_756_; lean_object* v___x_757_; lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_766_; 
v_ref_756_ = lean_ctor_get(v___y_753_, 2);
v___x_757_ = l_Lean_addMessageContextFull___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__5(v_msg_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
v_a_758_ = lean_ctor_get(v___x_757_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_766_ == 0)
{
v___x_760_ = v___x_757_;
v_isShared_761_ = v_isSharedCheck_766_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_757_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_766_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_762_; lean_object* v___x_764_; 
lean_inc(v_ref_756_);
v___x_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_762_, 0, v_ref_756_);
lean_ctor_set(v___x_762_, 1, v_a_758_);
if (v_isShared_761_ == 0)
{
lean_ctor_set_tag(v___x_760_, 1);
lean_ctor_set(v___x_760_, 0, v___x_762_);
v___x_764_ = v___x_760_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v___x_762_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___redArg___boxed(lean_object* v_msg_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___redArg(v_msg_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_);
lean_dec(v___y_771_);
lean_dec_ref(v___y_770_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
return v_res_773_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5___closed__1(void){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_775_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5___closed__0));
v___x_776_ = l_Lean_stringToMessageData(v___x_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5(lean_object* v_a_777_, lean_object* v_x_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_784_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5___closed__1, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5___closed__1_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5___closed__1);
v___x_785_ = l_Lean_Exception_toMessageData(v_a_777_);
v___x_786_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_784_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
v___x_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5___boxed(lean_object* v_a_788_, lean_object* v_x_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5(v_a_788_, v_x_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec(v___y_791_);
lean_dec_ref(v___y_790_);
lean_dec_ref(v_x_789_);
return v_res_795_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__5(lean_object* v_e_796_){
_start:
{
if (lean_obj_tag(v_e_796_) == 0)
{
uint8_t v___x_797_; 
v___x_797_ = 2;
return v___x_797_;
}
else
{
uint8_t v___x_798_; 
v___x_798_ = 0;
return v___x_798_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__5___boxed(lean_object* v_e_799_){
_start:
{
uint8_t v_res_800_; lean_object* v_r_801_; 
v_res_800_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__5(v_e_799_);
lean_dec_ref(v_e_799_);
v_r_801_ = lean_box(v_res_800_);
return v_r_801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(lean_object* v_cls_802_, uint8_t v_collapsed_803_, lean_object* v_tag_804_, lean_object* v_opts_805_, uint8_t v_clsEnabled_806_, lean_object* v_oldTraces_807_, lean_object* v_msg_808_, lean_object* v_resStartStop_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
lean_object* v_fst_815_; lean_object* v_snd_816_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v_data_820_; lean_object* v_fst_831_; lean_object* v_snd_832_; lean_object* v___x_833_; uint8_t v___x_834_; lean_object* v___y_836_; lean_object* v_a_837_; uint8_t v___y_852_; double v___y_884_; 
v_fst_815_ = lean_ctor_get(v_resStartStop_809_, 0);
lean_inc(v_fst_815_);
v_snd_816_ = lean_ctor_get(v_resStartStop_809_, 1);
lean_inc(v_snd_816_);
lean_dec_ref(v_resStartStop_809_);
v_fst_831_ = lean_ctor_get(v_snd_816_, 0);
lean_inc(v_fst_831_);
v_snd_832_ = lean_ctor_get(v_snd_816_, 1);
lean_inc(v_snd_832_);
lean_dec(v_snd_816_);
v___x_833_ = l_Lean_trace_profiler;
v___x_834_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_opts_805_, v___x_833_);
if (v___x_834_ == 0)
{
v___y_852_ = v___x_834_;
goto v___jp_851_;
}
else
{
lean_object* v___x_889_; uint8_t v___x_890_; 
v___x_889_ = l_Lean_trace_profiler_useHeartbeats;
v___x_890_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_opts_805_, v___x_889_);
if (v___x_890_ == 0)
{
lean_object* v___x_891_; lean_object* v___x_892_; double v___x_893_; double v___x_894_; double v___x_895_; 
v___x_891_ = l_Lean_trace_profiler_threshold;
v___x_892_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__6(v_opts_805_, v___x_891_);
v___x_893_ = lean_float_of_nat(v___x_892_);
v___x_894_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__3);
v___x_895_ = lean_float_div(v___x_893_, v___x_894_);
v___y_884_ = v___x_895_;
goto v___jp_883_;
}
else
{
lean_object* v___x_896_; lean_object* v___x_897_; double v___x_898_; 
v___x_896_ = l_Lean_trace_profiler_threshold;
v___x_897_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__6(v_opts_805_, v___x_896_);
v___x_898_ = lean_float_of_nat(v___x_897_);
v___y_884_ = v___x_898_;
goto v___jp_883_;
}
}
v___jp_817_:
{
lean_object* v___x_821_; 
lean_inc(v___y_818_);
v___x_821_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__3(v_oldTraces_807_, v_data_820_, v___y_818_, v___y_819_, v___y_810_, v___y_811_, v___y_812_, v___y_813_);
if (lean_obj_tag(v___x_821_) == 0)
{
lean_object* v___x_822_; 
lean_dec_ref_known(v___x_821_, 1);
v___x_822_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__4___redArg(v_fst_815_);
return v___x_822_;
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
lean_dec(v_fst_815_);
v_a_823_ = lean_ctor_get(v___x_821_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_821_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___x_821_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_821_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_826_ == 0)
{
v___x_828_ = v___x_825_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_823_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
v___jp_835_:
{
uint8_t v_result_838_; lean_object* v___x_839_; lean_object* v___x_840_; double v___x_841_; lean_object* v_data_842_; 
v_result_838_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__5(v_fst_815_);
v___x_839_ = lean_box(v_result_838_);
v___x_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
v___x_841_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__0);
lean_inc_ref(v_tag_804_);
lean_inc_ref(v___x_840_);
lean_inc(v_cls_802_);
v_data_842_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_842_, 0, v_cls_802_);
lean_ctor_set(v_data_842_, 1, v___x_840_);
lean_ctor_set(v_data_842_, 2, v_tag_804_);
lean_ctor_set_float(v_data_842_, sizeof(void*)*3, v___x_841_);
lean_ctor_set_float(v_data_842_, sizeof(void*)*3 + 8, v___x_841_);
lean_ctor_set_uint8(v_data_842_, sizeof(void*)*3 + 16, v_collapsed_803_);
if (v___x_834_ == 0)
{
lean_dec_ref_known(v___x_840_, 1);
lean_dec(v_snd_832_);
lean_dec(v_fst_831_);
lean_dec_ref(v_tag_804_);
lean_dec(v_cls_802_);
v___y_818_ = v___y_836_;
v___y_819_ = v_a_837_;
v_data_820_ = v_data_842_;
goto v___jp_817_;
}
else
{
lean_object* v_data_843_; double v___x_844_; double v___x_845_; 
lean_dec_ref_known(v_data_842_, 3);
v_data_843_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_843_, 0, v_cls_802_);
lean_ctor_set(v_data_843_, 1, v___x_840_);
lean_ctor_set(v_data_843_, 2, v_tag_804_);
v___x_844_ = lean_unbox_float(v_fst_831_);
lean_dec(v_fst_831_);
lean_ctor_set_float(v_data_843_, sizeof(void*)*3, v___x_844_);
v___x_845_ = lean_unbox_float(v_snd_832_);
lean_dec(v_snd_832_);
lean_ctor_set_float(v_data_843_, sizeof(void*)*3 + 8, v___x_845_);
lean_ctor_set_uint8(v_data_843_, sizeof(void*)*3 + 16, v_collapsed_803_);
v___y_818_ = v___y_836_;
v___y_819_ = v_a_837_;
v_data_820_ = v_data_843_;
goto v___jp_817_;
}
}
v___jp_846_:
{
lean_object* v_ref_847_; lean_object* v___x_848_; 
v_ref_847_ = lean_ctor_get(v___y_812_, 2);
lean_inc(v___y_813_);
lean_inc_ref(v___y_812_);
lean_inc(v___y_811_);
lean_inc_ref(v___y_810_);
lean_inc(v_fst_815_);
v___x_848_ = lean_apply_6(v_msg_808_, v_fst_815_, v___y_810_, v___y_811_, v___y_812_, v___y_813_, lean_box(0));
if (lean_obj_tag(v___x_848_) == 0)
{
lean_object* v_a_849_; 
v_a_849_ = lean_ctor_get(v___x_848_, 0);
lean_inc(v_a_849_);
lean_dec_ref_known(v___x_848_, 1);
v___y_836_ = v_ref_847_;
v_a_837_ = v_a_849_;
goto v___jp_835_;
}
else
{
lean_object* v___x_850_; 
lean_dec_ref_known(v___x_848_, 1);
v___x_850_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7___closed__2);
v___y_836_ = v_ref_847_;
v_a_837_ = v___x_850_;
goto v___jp_835_;
}
}
v___jp_851_:
{
if (v_clsEnabled_806_ == 0)
{
if (v___y_852_ == 0)
{
lean_object* v___x_853_; lean_object* v_traceState_854_; lean_object* v_env_855_; lean_object* v_nextMacroScope_856_; lean_object* v_ngen_857_; lean_object* v_auxDeclNGen_858_; lean_object* v_cache_859_; lean_object* v_recordedDeps_860_; lean_object* v_messages_861_; lean_object* v_infoState_862_; lean_object* v_snapshotTasks_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_882_; 
lean_dec(v_snd_832_);
lean_dec(v_fst_831_);
lean_dec_ref(v_msg_808_);
lean_dec_ref(v_tag_804_);
lean_dec(v_cls_802_);
v___x_853_ = lean_st_ref_take(v___y_813_);
v_traceState_854_ = lean_ctor_get(v___x_853_, 4);
v_env_855_ = lean_ctor_get(v___x_853_, 0);
v_nextMacroScope_856_ = lean_ctor_get(v___x_853_, 1);
v_ngen_857_ = lean_ctor_get(v___x_853_, 2);
v_auxDeclNGen_858_ = lean_ctor_get(v___x_853_, 3);
v_cache_859_ = lean_ctor_get(v___x_853_, 5);
v_recordedDeps_860_ = lean_ctor_get(v___x_853_, 6);
v_messages_861_ = lean_ctor_get(v___x_853_, 7);
v_infoState_862_ = lean_ctor_get(v___x_853_, 8);
v_snapshotTasks_863_ = lean_ctor_get(v___x_853_, 9);
v_isSharedCheck_882_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_882_ == 0)
{
v___x_865_ = v___x_853_;
v_isShared_866_ = v_isSharedCheck_882_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_snapshotTasks_863_);
lean_inc(v_infoState_862_);
lean_inc(v_messages_861_);
lean_inc(v_recordedDeps_860_);
lean_inc(v_cache_859_);
lean_inc(v_traceState_854_);
lean_inc(v_auxDeclNGen_858_);
lean_inc(v_ngen_857_);
lean_inc(v_nextMacroScope_856_);
lean_inc(v_env_855_);
lean_dec(v___x_853_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_882_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
uint64_t v_tid_867_; lean_object* v_traces_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_881_; 
v_tid_867_ = lean_ctor_get_uint64(v_traceState_854_, sizeof(void*)*1);
v_traces_868_ = lean_ctor_get(v_traceState_854_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v_traceState_854_);
if (v_isSharedCheck_881_ == 0)
{
v___x_870_ = v_traceState_854_;
v_isShared_871_ = v_isSharedCheck_881_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_traces_868_);
lean_dec(v_traceState_854_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_881_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_872_; lean_object* v___x_874_; 
v___x_872_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_807_, v_traces_868_);
lean_dec_ref(v_traces_868_);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 0, v___x_872_);
v___x_874_ = v___x_870_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___x_872_);
lean_ctor_set_uint64(v_reuseFailAlloc_880_, sizeof(void*)*1, v_tid_867_);
v___x_874_ = v_reuseFailAlloc_880_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
lean_object* v___x_876_; 
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 4, v___x_874_);
v___x_876_ = v___x_865_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_env_855_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v_nextMacroScope_856_);
lean_ctor_set(v_reuseFailAlloc_879_, 2, v_ngen_857_);
lean_ctor_set(v_reuseFailAlloc_879_, 3, v_auxDeclNGen_858_);
lean_ctor_set(v_reuseFailAlloc_879_, 4, v___x_874_);
lean_ctor_set(v_reuseFailAlloc_879_, 5, v_cache_859_);
lean_ctor_set(v_reuseFailAlloc_879_, 6, v_recordedDeps_860_);
lean_ctor_set(v_reuseFailAlloc_879_, 7, v_messages_861_);
lean_ctor_set(v_reuseFailAlloc_879_, 8, v_infoState_862_);
lean_ctor_set(v_reuseFailAlloc_879_, 9, v_snapshotTasks_863_);
v___x_876_ = v_reuseFailAlloc_879_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_877_ = lean_st_ref_put(v___y_813_, v___x_876_);
v___x_878_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__4___redArg(v_fst_815_);
return v___x_878_;
}
}
}
}
}
else
{
goto v___jp_846_;
}
}
else
{
goto v___jp_846_;
}
}
v___jp_883_:
{
double v___x_885_; double v___x_886_; double v___x_887_; uint8_t v___x_888_; 
v___x_885_ = lean_unbox_float(v_snd_832_);
v___x_886_ = lean_unbox_float(v_fst_831_);
v___x_887_ = lean_float_sub(v___x_885_, v___x_886_);
v___x_888_ = lean_float_decLt(v___y_884_, v___x_887_);
v___y_852_ = v___x_888_;
goto v___jp_851_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3___boxed(lean_object* v_cls_899_, lean_object* v_collapsed_900_, lean_object* v_tag_901_, lean_object* v_opts_902_, lean_object* v_clsEnabled_903_, lean_object* v_oldTraces_904_, lean_object* v_msg_905_, lean_object* v_resStartStop_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
uint8_t v_collapsed_boxed_912_; uint8_t v_clsEnabled_boxed_913_; lean_object* v_res_914_; 
v_collapsed_boxed_912_ = lean_unbox(v_collapsed_900_);
v_clsEnabled_boxed_913_ = lean_unbox(v_clsEnabled_903_);
v_res_914_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_cls_899_, v_collapsed_boxed_912_, v_tag_901_, v_opts_902_, v_clsEnabled_boxed_913_, v_oldTraces_904_, v_msg_905_, v_resStartStop_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_);
lean_dec(v___y_910_);
lean_dec_ref(v___y_909_);
lean_dec(v___y_908_);
lean_dec_ref(v___y_907_);
lean_dec_ref(v_opts_902_);
return v_res_914_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7___closed__1(void){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_916_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7___closed__0));
v___x_917_ = l_Lean_stringToMessageData(v___x_916_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7(lean_object* v_head_918_, lean_object* v_x_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_925_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7___closed__1, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7___closed__1_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7___closed__1);
v___x_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_926_, 0, v_head_918_);
v___x_927_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_927_, 0, v___x_925_);
lean_ctor_set(v___x_927_, 1, v___x_926_);
v___x_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7___boxed(lean_object* v_head_929_, lean_object* v_x_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7(v_head_929_, v_x_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
lean_dec_ref(v_x_930_);
return v_res_936_;
}
}
static double _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0(void){
_start:
{
lean_object* v___x_937_; double v___x_938_; 
v___x_937_ = lean_unsigned_to_nat(1000000000u);
v___x_938_ = lean_float_of_nat(v___x_937_);
return v___x_938_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__2(void){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__1));
v___x_941_ = l_Lean_stringToMessageData(v___x_940_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__8___boxed(lean_object* v_tail_950_, lean_object* v_cfg_951_, lean_object* v_trace_952_, lean_object* v_next_953_, lean_object* v_goals_954_, lean_object* v_n_955_, lean_object* v_acc_956_, lean_object* v_r_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__8(v_tail_950_, v_cfg_951_, v_trace_952_, v_next_953_, v_goals_954_, v_n_955_, v_acc_956_, v_r_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
lean_dec(v___y_961_);
lean_dec_ref(v___y_960_);
lean_dec(v___y_959_);
lean_dec_ref(v___y_958_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(lean_object* v_cfg_964_, lean_object* v_trace_965_, lean_object* v_next_966_, lean_object* v_goals_967_, lean_object* v_n_968_, lean_object* v_curr_969_, lean_object* v_acc_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_){
_start:
{
uint8_t v___y_977_; lean_object* v___y_978_; lean_object* v___y_979_; lean_object* v___y_980_; uint8_t v___y_981_; lean_object* v___y_982_; lean_object* v___y_983_; lean_object* v_a_984_; uint8_t v___y_994_; lean_object* v___y_995_; lean_object* v___y_996_; lean_object* v___y_997_; lean_object* v___y_998_; uint8_t v___y_999_; lean_object* v___y_1000_; lean_object* v_a_1001_; uint8_t v___y_1014_; lean_object* v___y_1015_; lean_object* v___y_1016_; uint8_t v___y_1017_; lean_object* v___y_1018_; lean_object* v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1062_; lean_object* v___y_1063_; lean_object* v___y_1064_; uint8_t v___y_1065_; uint8_t v___y_1066_; lean_object* v___y_1067_; lean_object* v___y_1068_; lean_object* v_a_1069_; lean_object* v___y_1079_; lean_object* v___y_1080_; lean_object* v___y_1081_; uint8_t v___y_1082_; uint8_t v___y_1083_; lean_object* v___y_1084_; lean_object* v___y_1085_; lean_object* v_a_1086_; lean_object* v___y_1089_; lean_object* v___y_1090_; lean_object* v___y_1091_; uint8_t v___y_1092_; uint8_t v___y_1093_; lean_object* v___y_1094_; lean_object* v___y_1095_; lean_object* v_a_1096_; lean_object* v___y_1099_; lean_object* v___y_1100_; lean_object* v___y_1101_; uint8_t v___y_1102_; uint8_t v___y_1103_; lean_object* v___y_1104_; lean_object* v___y_1105_; lean_object* v___y_1106_; lean_object* v___y_1110_; lean_object* v___y_1111_; uint8_t v___y_1112_; uint8_t v___y_1113_; lean_object* v___y_1114_; lean_object* v___y_1115_; lean_object* v___y_1116_; lean_object* v_a_1117_; lean_object* v___y_1130_; lean_object* v___y_1131_; uint8_t v___y_1132_; uint8_t v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v_a_1137_; lean_object* v___y_1140_; lean_object* v___y_1141_; uint8_t v___y_1142_; uint8_t v___y_1143_; lean_object* v___y_1144_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v_a_1147_; lean_object* v___y_1150_; lean_object* v___y_1151_; uint8_t v___y_1152_; uint8_t v___y_1153_; lean_object* v___y_1154_; lean_object* v___y_1155_; lean_object* v___y_1156_; lean_object* v___y_1157_; lean_object* v_zero_1160_; uint8_t v_isZero_1161_; 
v_zero_1160_ = lean_unsigned_to_nat(0u);
v_isZero_1161_ = lean_nat_dec_eq(v_n_968_, v_zero_1160_);
if (v_isZero_1161_ == 1)
{
lean_object* v___x_1162_; lean_object* v___x_1163_; 
lean_dec(v_acc_970_);
lean_dec(v_curr_969_);
lean_dec(v_n_968_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
v___x_1162_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__2, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__2_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__2);
v___x_1163_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___redArg(v___x_1162_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
return v___x_1163_;
}
else
{
lean_object* v_proc_1164_; lean_object* v_suspend_1165_; lean_object* v_discharge_1166_; lean_object* v___f_1167_; uint8_t v___y_1169_; lean_object* v___y_1170_; lean_object* v___y_1171_; uint8_t v___y_1172_; lean_object* v___y_1173_; lean_object* v___f_1209_; lean_object* v___y_1211_; uint8_t v___y_1212_; lean_object* v___y_1213_; lean_object* v___y_1214_; uint8_t v___y_1215_; lean_object* v___y_1216_; lean_object* v_a_1217_; lean_object* v___y_1230_; uint8_t v___y_1231_; lean_object* v___y_1232_; uint8_t v___y_1233_; lean_object* v___y_1234_; lean_object* v___y_1235_; lean_object* v_a_1236_; uint8_t v___y_1246_; lean_object* v___y_1247_; lean_object* v___y_1248_; uint8_t v___y_1249_; lean_object* v___y_1250_; uint8_t v___y_1251_; uint8_t v___y_1252_; lean_object* v___y_1253_; lean_object* v___y_1254_; lean_object* v___y_1255_; lean_object* v___y_1256_; lean_object* v_a_1257_; lean_object* v___y_1267_; lean_object* v___y_1268_; lean_object* v___y_1269_; uint8_t v___y_1270_; uint8_t v___y_1271_; lean_object* v___y_1272_; lean_object* v___y_1273_; lean_object* v___y_1274_; uint8_t v___y_1275_; lean_object* v___y_1276_; lean_object* v_a_1277_; lean_object* v___f_1289_; lean_object* v___y_1291_; lean_object* v___y_1292_; lean_object* v___y_1293_; lean_object* v___y_1294_; uint8_t v___y_1295_; uint8_t v___y_1296_; uint8_t v___y_1297_; lean_object* v___y_1298_; lean_object* v___y_1299_; lean_object* v___y_1300_; lean_object* v_a_1301_; lean_object* v___y_1314_; lean_object* v___y_1315_; lean_object* v___y_1316_; uint8_t v___y_1317_; uint8_t v___y_1318_; lean_object* v___y_1319_; uint8_t v___y_1320_; lean_object* v___y_1321_; lean_object* v___y_1322_; lean_object* v___y_1323_; lean_object* v___y_1324_; lean_object* v___f_1345_; lean_object* v___y_1347_; lean_object* v___y_1348_; lean_object* v___y_1349_; uint8_t v___y_1350_; uint8_t v___y_1351_; uint8_t v___y_1352_; lean_object* v___y_1353_; uint8_t v___y_1354_; lean_object* v___y_1355_; lean_object* v___y_1356_; lean_object* v___y_1357_; lean_object* v_a_1358_; lean_object* v___y_1371_; uint8_t v___y_1372_; lean_object* v___y_1373_; lean_object* v___y_1374_; lean_object* v___y_1375_; lean_object* v___y_1376_; uint8_t v___y_1377_; uint8_t v___y_1378_; uint8_t v___y_1379_; lean_object* v___y_1380_; lean_object* v___y_1381_; lean_object* v___y_1382_; lean_object* v___y_1404_; lean_object* v___y_1405_; lean_object* v___y_1406_; uint8_t v___y_1407_; uint8_t v___y_1408_; lean_object* v___y_1409_; uint8_t v___y_1410_; uint8_t v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v_a_1415_; lean_object* v___y_1425_; uint8_t v___y_1426_; lean_object* v___y_1427_; uint8_t v___y_1428_; lean_object* v___y_1429_; lean_object* v___y_1430_; lean_object* v___y_1431_; uint8_t v___y_1432_; lean_object* v___y_1433_; uint8_t v___y_1434_; lean_object* v___y_1435_; lean_object* v___y_1436_; lean_object* v___y_1458_; lean_object* v___y_1459_; lean_object* v___y_1460_; uint8_t v___y_1461_; lean_object* v___y_1462_; uint8_t v___y_1463_; uint8_t v___y_1464_; lean_object* v___y_1465_; uint8_t v___y_1466_; lean_object* v___y_1467_; lean_object* v___y_1468_; lean_object* v_a_1469_; lean_object* v___y_1479_; lean_object* v___y_1480_; uint8_t v___y_1481_; lean_object* v___y_1482_; lean_object* v___y_1483_; lean_object* v___y_1484_; lean_object* v___y_1485_; uint8_t v___y_1486_; lean_object* v___y_1487_; uint8_t v___y_1488_; uint8_t v___y_1489_; lean_object* v___y_1490_; uint8_t v___y_1512_; lean_object* v___y_1513_; uint8_t v___y_1514_; lean_object* v___y_1515_; lean_object* v___y_1516_; lean_object* v___y_1517_; lean_object* v_a_1518_; uint8_t v___y_1528_; lean_object* v___y_1529_; lean_object* v___y_1530_; uint8_t v___y_1531_; lean_object* v___y_1532_; lean_object* v___y_1533_; lean_object* v_a_1534_; lean_object* v___y_1547_; uint8_t v___y_1548_; lean_object* v___y_1549_; lean_object* v___y_1550_; lean_object* v___y_1551_; uint8_t v___y_1552_; lean_object* v_a_1553_; lean_object* v___y_1566_; uint8_t v___y_1567_; lean_object* v___y_1568_; lean_object* v___y_1569_; lean_object* v___y_1570_; uint8_t v___y_1571_; lean_object* v_a_1572_; lean_object* v_one_1581_; lean_object* v_n_1582_; lean_object* v___y_1584_; uint8_t v___y_1585_; lean_object* v___y_1586_; uint8_t v___y_1587_; lean_object* v___y_1588_; uint8_t v___y_1589_; uint8_t v___y_1590_; lean_object* v___y_1591_; lean_object* v___y_1592_; lean_object* v___y_1593_; lean_object* v___y_1615_; lean_object* v___y_1616_; uint8_t v___y_1617_; uint8_t v___y_1618_; lean_object* v___y_1619_; lean_object* v___y_1620_; lean_object* v___y_1621_; uint8_t v___y_1622_; lean_object* v___y_1623_; uint8_t v___y_1645_; lean_object* v___y_1646_; lean_object* v___y_1647_; lean_object* v___y_1648_; lean_object* v___y_1649_; lean_object* v___y_1650_; lean_object* v___y_1651_; uint8_t v___y_1652_; lean_object* v___y_1653_; lean_object* v___y_1654_; lean_object* v___y_1655_; lean_object* v___y_1656_; lean_object* v_a_1740_; lean_object* v___y_1994_; lean_object* v___x_2004_; 
v_proc_1164_ = lean_ctor_get(v_cfg_964_, 1);
v_suspend_1165_ = lean_ctor_get(v_cfg_964_, 2);
v_discharge_1166_ = lean_ctor_get(v_cfg_964_, 3);
v___f_1167_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__3));
v___f_1209_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__4));
v___f_1289_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__5));
v___f_1345_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__6));
v_one_1581_ = lean_unsigned_to_nat(1u);
v_n_1582_ = lean_nat_sub(v_n_968_, v_one_1581_);
lean_dec(v_n_968_);
lean_inc_ref(v_proc_1164_);
lean_inc(v_a_974_);
lean_inc_ref(v_a_973_);
lean_inc(v_a_972_);
lean_inc_ref(v_a_971_);
lean_inc(v_curr_969_);
lean_inc(v_goals_967_);
v___x_2004_ = lean_apply_7(v_proc_1164_, v_goals_967_, v_curr_969_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, lean_box(0));
if (lean_obj_tag(v___x_2004_) == 0)
{
lean_object* v_a_2005_; 
v_a_2005_ = lean_ctor_get(v___x_2004_, 0);
lean_inc(v_a_2005_);
lean_dec_ref_known(v___x_2004_, 1);
v_a_1740_ = v_a_2005_;
goto v___jp_1739_;
}
else
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2071_; 
v_a_2006_ = lean_ctor_get(v___x_2004_, 0);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2004_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_2008_ = v___x_2004_;
v_isShared_2009_ = v_isSharedCheck_2071_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v___x_2004_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2071_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
uint8_t v___x_2010_; 
v___x_2010_ = l_Lean_Exception_isInterrupt(v_a_2006_);
if (v___x_2010_ == 0)
{
uint8_t v___x_2011_; 
lean_inc(v_a_2006_);
v___x_2011_ = l_Lean_Exception_isRuntime(v_a_2006_);
if (v___x_2011_ == 0)
{
lean_object* v_toCold_2012_; lean_object* v_options_2013_; uint8_t v_hasTrace_2014_; 
v_toCold_2012_ = lean_ctor_get(v_a_973_, 0);
v_options_2013_ = lean_ctor_get(v_toCold_2012_, 2);
v_hasTrace_2014_ = lean_ctor_get_uint8(v_options_2013_, sizeof(void*)*1);
if (v_hasTrace_2014_ == 0)
{
lean_object* v___x_2016_; 
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_curr_969_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
if (v_isShared_2009_ == 0)
{
v___x_2016_ = v___x_2008_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2006_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
else
{
lean_object* v_inheritedTraceOptions_2018_; lean_object* v___f_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; uint8_t v___x_2023_; 
v_inheritedTraceOptions_2018_ = lean_ctor_get(v_toCold_2012_, 11);
lean_inc(v_a_2006_);
v___f_2019_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__5___boxed), 7, 1);
lean_closure_set(v___f_2019_, 0, v_a_2006_);
v___x_2020_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__9));
v___x_2021_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__8));
lean_inc(v_trace_965_);
v___x_2022_ = l_Lean_Name_append(v___x_2021_, v_trace_965_);
v___x_2023_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2018_, v_options_2013_, v___x_2022_);
lean_dec(v___x_2022_);
if (v___x_2023_ == 0)
{
lean_object* v___x_2060_; uint8_t v___x_2061_; 
v___x_2060_ = l_Lean_trace_profiler;
v___x_2061_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_options_2013_, v___x_2060_);
if (v___x_2061_ == 0)
{
lean_object* v___x_2063_; 
lean_dec_ref(v___f_2019_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_curr_969_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
if (v_isShared_2009_ == 0)
{
v___x_2063_ = v___x_2008_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2006_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
else
{
lean_del_object(v___x_2008_);
goto v___jp_2024_;
}
}
else
{
lean_del_object(v___x_2008_);
goto v___jp_2024_;
}
v___jp_2024_:
{
lean_object* v___x_2025_; lean_object* v_a_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2059_; 
v___x_2025_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_974_);
v_a_2026_ = lean_ctor_get(v___x_2025_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2028_ = v___x_2025_;
v_isShared_2029_ = v_isSharedCheck_2059_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_a_2026_);
lean_dec(v___x_2025_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2059_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___x_2030_; uint8_t v___x_2031_; 
v___x_2030_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2031_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_options_2013_, v___x_2030_);
if (v___x_2031_ == 0)
{
lean_object* v___x_2032_; lean_object* v___x_2034_; 
v___x_2032_ = lean_io_mono_nanos_now();
if (v_isShared_2029_ == 0)
{
lean_ctor_set(v___x_2028_, 0, v_a_2006_);
v___x_2034_ = v___x_2028_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v_a_2006_);
v___x_2034_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
lean_object* v___x_2035_; double v___x_2036_; double v___x_2037_; double v___x_2038_; double v___x_2039_; double v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2035_ = lean_io_mono_nanos_now();
v___x_2036_ = lean_float_of_nat(v___x_2032_);
v___x_2037_ = lean_float_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0);
v___x_2038_ = lean_float_div(v___x_2036_, v___x_2037_);
v___x_2039_ = lean_float_of_nat(v___x_2035_);
v___x_2040_ = lean_float_div(v___x_2039_, v___x_2037_);
v___x_2041_ = lean_box_float(v___x_2038_);
v___x_2042_ = lean_box_float(v___x_2040_);
v___x_2043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2041_);
lean_ctor_set(v___x_2043_, 1, v___x_2042_);
v___x_2044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2034_);
lean_ctor_set(v___x_2044_, 1, v___x_2043_);
lean_inc(v_trace_965_);
v___x_2045_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7(v_trace_965_, v_hasTrace_2014_, v___x_2020_, v_options_2013_, v___x_2023_, v_a_2026_, v___f_2019_, v___x_2044_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
v___y_1994_ = v___x_2045_;
goto v___jp_1993_;
}
}
else
{
lean_object* v___x_2047_; lean_object* v___x_2049_; 
v___x_2047_ = lean_io_get_num_heartbeats();
if (v_isShared_2029_ == 0)
{
lean_ctor_set(v___x_2028_, 0, v_a_2006_);
v___x_2049_ = v___x_2028_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v_a_2006_);
v___x_2049_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
lean_object* v___x_2050_; double v___x_2051_; double v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2050_ = lean_io_get_num_heartbeats();
v___x_2051_ = lean_float_of_nat(v___x_2047_);
v___x_2052_ = lean_float_of_nat(v___x_2050_);
v___x_2053_ = lean_box_float(v___x_2051_);
v___x_2054_ = lean_box_float(v___x_2052_);
v___x_2055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2053_);
lean_ctor_set(v___x_2055_, 1, v___x_2054_);
v___x_2056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2056_, 0, v___x_2049_);
lean_ctor_set(v___x_2056_, 1, v___x_2055_);
lean_inc(v_trace_965_);
v___x_2057_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__7(v_trace_965_, v_hasTrace_2014_, v___x_2020_, v_options_2013_, v___x_2023_, v_a_2026_, v___f_2019_, v___x_2056_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
v___y_1994_ = v___x_2057_;
goto v___jp_1993_;
}
}
}
}
}
}
else
{
lean_object* v___x_2066_; 
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_curr_969_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
if (v_isShared_2009_ == 0)
{
v___x_2066_ = v___x_2008_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_a_2006_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
else
{
lean_object* v___x_2069_; 
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_curr_969_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
if (v_isShared_2009_ == 0)
{
v___x_2069_ = v___x_2008_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_a_2006_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
}
v___jp_1168_:
{
lean_object* v___x_1174_; lean_object* v_a_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1208_; 
v___x_1174_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_974_);
v_a_1175_ = lean_ctor_get(v___x_1174_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1174_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1177_ = v___x_1174_;
v_isShared_1178_ = v_isSharedCheck_1208_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_a_1175_);
lean_dec(v___x_1174_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1208_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1179_; uint8_t v___x_1180_; 
v___x_1179_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1180_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v___y_1173_, v___x_1179_);
if (v___x_1180_ == 0)
{
lean_object* v___x_1181_; lean_object* v___x_1183_; 
v___x_1181_ = lean_io_mono_nanos_now();
if (v_isShared_1178_ == 0)
{
lean_ctor_set_tag(v___x_1177_, 1);
lean_ctor_set(v___x_1177_, 0, v___y_1170_);
v___x_1183_ = v___x_1177_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v___y_1170_);
v___x_1183_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
lean_object* v___x_1184_; double v___x_1185_; double v___x_1186_; double v___x_1187_; double v___x_1188_; double v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1184_ = lean_io_mono_nanos_now();
v___x_1185_ = lean_float_of_nat(v___x_1181_);
v___x_1186_ = lean_float_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0);
v___x_1187_ = lean_float_div(v___x_1185_, v___x_1186_);
v___x_1188_ = lean_float_of_nat(v___x_1184_);
v___x_1189_ = lean_float_div(v___x_1188_, v___x_1186_);
v___x_1190_ = lean_box_float(v___x_1187_);
v___x_1191_ = lean_box_float(v___x_1189_);
v___x_1192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1190_);
lean_ctor_set(v___x_1192_, 1, v___x_1191_);
v___x_1193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1183_);
lean_ctor_set(v___x_1193_, 1, v___x_1192_);
lean_inc_ref(v___y_1171_);
v___x_1194_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1172_, v___y_1171_, v___y_1173_, v___y_1169_, v_a_1175_, v___f_1167_, v___x_1193_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
return v___x_1194_;
}
}
else
{
lean_object* v___x_1196_; lean_object* v___x_1198_; 
v___x_1196_ = lean_io_get_num_heartbeats();
if (v_isShared_1178_ == 0)
{
lean_ctor_set_tag(v___x_1177_, 1);
lean_ctor_set(v___x_1177_, 0, v___y_1170_);
v___x_1198_ = v___x_1177_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v___y_1170_);
v___x_1198_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1199_; double v___x_1200_; double v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1199_ = lean_io_get_num_heartbeats();
v___x_1200_ = lean_float_of_nat(v___x_1196_);
v___x_1201_ = lean_float_of_nat(v___x_1199_);
v___x_1202_ = lean_box_float(v___x_1200_);
v___x_1203_ = lean_box_float(v___x_1201_);
v___x_1204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1204_, 0, v___x_1202_);
lean_ctor_set(v___x_1204_, 1, v___x_1203_);
v___x_1205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1198_);
lean_ctor_set(v___x_1205_, 1, v___x_1204_);
lean_inc_ref(v___y_1171_);
v___x_1206_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1172_, v___y_1171_, v___y_1173_, v___y_1169_, v_a_1175_, v___f_1167_, v___x_1205_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
return v___x_1206_;
}
}
}
}
v___jp_1210_:
{
lean_object* v___x_1218_; double v___x_1219_; double v___x_1220_; double v___x_1221_; double v___x_1222_; double v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1218_ = lean_io_mono_nanos_now();
v___x_1219_ = lean_float_of_nat(v___y_1213_);
v___x_1220_ = lean_float_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0);
v___x_1221_ = lean_float_div(v___x_1219_, v___x_1220_);
v___x_1222_ = lean_float_of_nat(v___x_1218_);
v___x_1223_ = lean_float_div(v___x_1222_, v___x_1220_);
v___x_1224_ = lean_box_float(v___x_1221_);
v___x_1225_ = lean_box_float(v___x_1223_);
v___x_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1224_);
lean_ctor_set(v___x_1226_, 1, v___x_1225_);
v___x_1227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1227_, 0, v_a_1217_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
lean_inc_ref(v___y_1214_);
v___x_1228_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1212_, v___y_1214_, v___y_1211_, v___y_1215_, v___y_1216_, v___f_1209_, v___x_1227_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
return v___x_1228_;
}
v___jp_1229_:
{
lean_object* v___x_1237_; double v___x_1238_; double v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1237_ = lean_io_get_num_heartbeats();
v___x_1238_ = lean_float_of_nat(v___y_1234_);
v___x_1239_ = lean_float_of_nat(v___x_1237_);
v___x_1240_ = lean_box_float(v___x_1238_);
v___x_1241_ = lean_box_float(v___x_1239_);
v___x_1242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1240_);
lean_ctor_set(v___x_1242_, 1, v___x_1241_);
v___x_1243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1243_, 0, v_a_1236_);
lean_ctor_set(v___x_1243_, 1, v___x_1242_);
lean_inc_ref(v___y_1232_);
v___x_1244_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1231_, v___y_1232_, v___y_1230_, v___y_1233_, v___y_1235_, v___f_1209_, v___x_1243_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
return v___x_1244_;
}
v___jp_1245_:
{
lean_object* v___x_1258_; double v___x_1259_; double v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1258_ = lean_io_get_num_heartbeats();
v___x_1259_ = lean_float_of_nat(v___y_1254_);
v___x_1260_ = lean_float_of_nat(v___x_1258_);
v___x_1261_ = lean_box_float(v___x_1259_);
v___x_1262_ = lean_box_float(v___x_1260_);
v___x_1263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1261_);
lean_ctor_set(v___x_1263_, 1, v___x_1262_);
v___x_1264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1264_, 0, v_a_1257_);
lean_ctor_set(v___x_1264_, 1, v___x_1263_);
lean_inc_ref(v___y_1253_);
lean_inc(v_trace_965_);
v___x_1265_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1249_, v___y_1253_, v___y_1247_, v___y_1246_, v___y_1255_, v___f_1209_, v___x_1264_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
v___y_1099_ = v___y_1247_;
v___y_1100_ = v___y_1248_;
v___y_1101_ = v___y_1250_;
v___y_1102_ = v___y_1252_;
v___y_1103_ = v___y_1251_;
v___y_1104_ = v___y_1253_;
v___y_1105_ = v___y_1256_;
v___y_1106_ = v___x_1265_;
goto v___jp_1098_;
}
v___jp_1266_:
{
lean_object* v___x_1278_; double v___x_1279_; double v___x_1280_; double v___x_1281_; double v___x_1282_; double v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1278_ = lean_io_mono_nanos_now();
v___x_1279_ = lean_float_of_nat(v___y_1268_);
v___x_1280_ = lean_float_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0);
v___x_1281_ = lean_float_div(v___x_1279_, v___x_1280_);
v___x_1282_ = lean_float_of_nat(v___x_1278_);
v___x_1283_ = lean_float_div(v___x_1282_, v___x_1280_);
v___x_1284_ = lean_box_float(v___x_1281_);
v___x_1285_ = lean_box_float(v___x_1283_);
v___x_1286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1284_);
lean_ctor_set(v___x_1286_, 1, v___x_1285_);
v___x_1287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1287_, 0, v_a_1277_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
lean_inc_ref(v___y_1272_);
lean_inc(v_trace_965_);
v___x_1288_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1271_, v___y_1272_, v___y_1267_, v___y_1275_, v___y_1273_, v___f_1209_, v___x_1287_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
v___y_1150_ = v___y_1267_;
v___y_1151_ = v___y_1269_;
v___y_1152_ = v___y_1270_;
v___y_1153_ = v___y_1271_;
v___y_1154_ = v___y_1272_;
v___y_1155_ = v___y_1274_;
v___y_1156_ = v___y_1276_;
v___y_1157_ = v___x_1288_;
goto v___jp_1149_;
}
v___jp_1290_:
{
lean_object* v___x_1302_; double v___x_1303_; double v___x_1304_; double v___x_1305_; double v___x_1306_; double v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1302_ = lean_io_mono_nanos_now();
v___x_1303_ = lean_float_of_nat(v___y_1294_);
v___x_1304_ = lean_float_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0);
v___x_1305_ = lean_float_div(v___x_1303_, v___x_1304_);
v___x_1306_ = lean_float_of_nat(v___x_1302_);
v___x_1307_ = lean_float_div(v___x_1306_, v___x_1304_);
v___x_1308_ = lean_box_float(v___x_1305_);
v___x_1309_ = lean_box_float(v___x_1307_);
v___x_1310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1308_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
v___x_1311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1311_, 0, v_a_1301_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
lean_inc_ref(v___y_1298_);
lean_inc(v_trace_965_);
v___x_1312_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1296_, v___y_1298_, v___y_1291_, v___y_1297_, v___y_1293_, v___f_1289_, v___x_1311_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
v___y_1150_ = v___y_1291_;
v___y_1151_ = v___y_1292_;
v___y_1152_ = v___y_1295_;
v___y_1153_ = v___y_1296_;
v___y_1154_ = v___y_1298_;
v___y_1155_ = v___y_1299_;
v___y_1156_ = v___y_1300_;
v___y_1157_ = v___x_1312_;
goto v___jp_1149_;
}
v___jp_1313_:
{
lean_object* v___x_1325_; lean_object* v_a_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1325_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_974_);
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
lean_inc(v_a_1326_);
lean_dec_ref(v___x_1325_);
v___x_1327_ = lean_io_mono_nanos_now();
lean_inc(v_trace_965_);
v___x_1328_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v___y_1316_, v___y_1323_, v___y_1322_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1336_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1331_ = v___x_1328_;
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_a_1329_);
lean_dec(v___x_1328_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1334_; 
if (v_isShared_1332_ == 0)
{
lean_ctor_set_tag(v___x_1331_, 1);
v___x_1334_ = v___x_1331_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_a_1329_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
v___y_1291_ = v___y_1314_;
v___y_1292_ = v___y_1315_;
v___y_1293_ = v_a_1326_;
v___y_1294_ = v___x_1327_;
v___y_1295_ = v___y_1318_;
v___y_1296_ = v___y_1317_;
v___y_1297_ = v___y_1320_;
v___y_1298_ = v___y_1319_;
v___y_1299_ = v___y_1321_;
v___y_1300_ = v___y_1324_;
v_a_1301_ = v___x_1334_;
goto v___jp_1290_;
}
}
}
else
{
lean_object* v_a_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1344_; 
v_a_1337_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1344_ == 0)
{
v___x_1339_ = v___x_1328_;
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_a_1337_);
lean_dec(v___x_1328_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1342_; 
if (v_isShared_1340_ == 0)
{
lean_ctor_set_tag(v___x_1339_, 0);
v___x_1342_ = v___x_1339_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_a_1337_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
v___y_1291_ = v___y_1314_;
v___y_1292_ = v___y_1315_;
v___y_1293_ = v_a_1326_;
v___y_1294_ = v___x_1327_;
v___y_1295_ = v___y_1318_;
v___y_1296_ = v___y_1317_;
v___y_1297_ = v___y_1320_;
v___y_1298_ = v___y_1319_;
v___y_1299_ = v___y_1321_;
v___y_1300_ = v___y_1324_;
v_a_1301_ = v___x_1342_;
goto v___jp_1290_;
}
}
}
}
v___jp_1346_:
{
lean_object* v___x_1359_; double v___x_1360_; double v___x_1361_; double v___x_1362_; double v___x_1363_; double v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1359_ = lean_io_mono_nanos_now();
v___x_1360_ = lean_float_of_nat(v___y_1356_);
v___x_1361_ = lean_float_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0);
v___x_1362_ = lean_float_div(v___x_1360_, v___x_1361_);
v___x_1363_ = lean_float_of_nat(v___x_1359_);
v___x_1364_ = lean_float_div(v___x_1363_, v___x_1361_);
v___x_1365_ = lean_box_float(v___x_1362_);
v___x_1366_ = lean_box_float(v___x_1364_);
v___x_1367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1365_);
lean_ctor_set(v___x_1367_, 1, v___x_1366_);
v___x_1368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1368_, 0, v_a_1358_);
lean_ctor_set(v___x_1368_, 1, v___x_1367_);
lean_inc_ref(v___y_1353_);
lean_inc(v_trace_965_);
v___x_1369_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1350_, v___y_1353_, v___y_1347_, v___y_1354_, v___y_1349_, v___f_1345_, v___x_1368_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
v___y_1150_ = v___y_1347_;
v___y_1151_ = v___y_1348_;
v___y_1152_ = v___y_1352_;
v___y_1153_ = v___y_1351_;
v___y_1154_ = v___y_1353_;
v___y_1155_ = v___y_1355_;
v___y_1156_ = v___y_1357_;
v___y_1157_ = v___x_1369_;
goto v___jp_1149_;
}
v___jp_1370_:
{
lean_object* v___x_1383_; lean_object* v_a_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1383_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_974_);
v_a_1384_ = lean_ctor_get(v___x_1383_, 0);
lean_inc(v_a_1384_);
lean_dec_ref(v___x_1383_);
v___x_1385_ = lean_io_mono_nanos_now();
lean_inc(v_trace_965_);
v___x_1386_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v___y_1381_, v___y_1382_, v___y_1376_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v_a_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1394_; 
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1394_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1394_ == 0)
{
v___x_1389_ = v___x_1386_;
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_a_1387_);
lean_dec(v___x_1386_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v___x_1392_; 
if (v_isShared_1390_ == 0)
{
lean_ctor_set_tag(v___x_1389_, 1);
v___x_1392_ = v___x_1389_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v_a_1387_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
v___y_1347_ = v___y_1375_;
v___y_1348_ = v___y_1371_;
v___y_1349_ = v_a_1384_;
v___y_1350_ = v___y_1377_;
v___y_1351_ = v___y_1372_;
v___y_1352_ = v___y_1378_;
v___y_1353_ = v___y_1373_;
v___y_1354_ = v___y_1379_;
v___y_1355_ = v___y_1380_;
v___y_1356_ = v___x_1385_;
v___y_1357_ = v___y_1374_;
v_a_1358_ = v___x_1392_;
goto v___jp_1346_;
}
}
}
else
{
lean_object* v_a_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1402_; 
v_a_1395_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1402_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1397_ = v___x_1386_;
v_isShared_1398_ = v_isSharedCheck_1402_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_a_1395_);
lean_dec(v___x_1386_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1402_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1400_; 
if (v_isShared_1398_ == 0)
{
lean_ctor_set_tag(v___x_1397_, 0);
v___x_1400_ = v___x_1397_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v_a_1395_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
v___y_1347_ = v___y_1375_;
v___y_1348_ = v___y_1371_;
v___y_1349_ = v_a_1384_;
v___y_1350_ = v___y_1377_;
v___y_1351_ = v___y_1372_;
v___y_1352_ = v___y_1378_;
v___y_1353_ = v___y_1373_;
v___y_1354_ = v___y_1379_;
v___y_1355_ = v___y_1380_;
v___y_1356_ = v___x_1385_;
v___y_1357_ = v___y_1374_;
v_a_1358_ = v___x_1400_;
goto v___jp_1346_;
}
}
}
}
v___jp_1403_:
{
lean_object* v___x_1416_; double v___x_1417_; double v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; 
v___x_1416_ = lean_io_get_num_heartbeats();
v___x_1417_ = lean_float_of_nat(v___y_1406_);
v___x_1418_ = lean_float_of_nat(v___x_1416_);
v___x_1419_ = lean_box_float(v___x_1417_);
v___x_1420_ = lean_box_float(v___x_1418_);
v___x_1421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1419_);
lean_ctor_set(v___x_1421_, 1, v___x_1420_);
v___x_1422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1422_, 0, v_a_1415_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
lean_inc_ref(v___y_1412_);
lean_inc(v_trace_965_);
v___x_1423_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1408_, v___y_1412_, v___y_1404_, v___y_1407_, v___y_1413_, v___f_1289_, v___x_1422_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
v___y_1099_ = v___y_1404_;
v___y_1100_ = v___y_1405_;
v___y_1101_ = v___y_1409_;
v___y_1102_ = v___y_1411_;
v___y_1103_ = v___y_1410_;
v___y_1104_ = v___y_1412_;
v___y_1105_ = v___y_1414_;
v___y_1106_ = v___x_1423_;
goto v___jp_1098_;
}
v___jp_1424_:
{
lean_object* v___x_1437_; lean_object* v_a_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1437_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_974_);
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
lean_inc(v_a_1438_);
lean_dec_ref(v___x_1437_);
v___x_1439_ = lean_io_get_num_heartbeats();
lean_inc(v_trace_965_);
v___x_1440_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v___y_1435_, v___y_1436_, v___y_1433_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1448_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1443_ = v___x_1440_;
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1440_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
lean_ctor_set_tag(v___x_1443_, 1);
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_a_1441_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
v___y_1404_ = v___y_1431_;
v___y_1405_ = v___y_1425_;
v___y_1406_ = v___x_1439_;
v___y_1407_ = v___y_1432_;
v___y_1408_ = v___y_1426_;
v___y_1409_ = v___y_1427_;
v___y_1410_ = v___y_1428_;
v___y_1411_ = v___y_1434_;
v___y_1412_ = v___y_1429_;
v___y_1413_ = v_a_1438_;
v___y_1414_ = v___y_1430_;
v_a_1415_ = v___x_1446_;
goto v___jp_1403_;
}
}
}
else
{
lean_object* v_a_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1456_; 
v_a_1449_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1451_ = v___x_1440_;
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_a_1449_);
lean_dec(v___x_1440_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1454_; 
if (v_isShared_1452_ == 0)
{
lean_ctor_set_tag(v___x_1451_, 0);
v___x_1454_ = v___x_1451_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_a_1449_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
v___y_1404_ = v___y_1431_;
v___y_1405_ = v___y_1425_;
v___y_1406_ = v___x_1439_;
v___y_1407_ = v___y_1432_;
v___y_1408_ = v___y_1426_;
v___y_1409_ = v___y_1427_;
v___y_1410_ = v___y_1428_;
v___y_1411_ = v___y_1434_;
v___y_1412_ = v___y_1429_;
v___y_1413_ = v_a_1438_;
v___y_1414_ = v___y_1430_;
v_a_1415_ = v___x_1454_;
goto v___jp_1403_;
}
}
}
}
v___jp_1457_:
{
lean_object* v___x_1470_; double v___x_1471_; double v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1470_ = lean_io_get_num_heartbeats();
v___x_1471_ = lean_float_of_nat(v___y_1462_);
v___x_1472_ = lean_float_of_nat(v___x_1470_);
v___x_1473_ = lean_box_float(v___x_1471_);
v___x_1474_ = lean_box_float(v___x_1472_);
v___x_1475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1475_, 0, v___x_1473_);
lean_ctor_set(v___x_1475_, 1, v___x_1474_);
v___x_1476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1476_, 0, v_a_1469_);
lean_ctor_set(v___x_1476_, 1, v___x_1475_);
lean_inc_ref(v___y_1465_);
lean_inc(v_trace_965_);
v___x_1477_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1466_, v___y_1465_, v___y_1458_, v___y_1461_, v___y_1467_, v___f_1345_, v___x_1476_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
v___y_1099_ = v___y_1458_;
v___y_1100_ = v___y_1459_;
v___y_1101_ = v___y_1460_;
v___y_1102_ = v___y_1464_;
v___y_1103_ = v___y_1463_;
v___y_1104_ = v___y_1465_;
v___y_1105_ = v___y_1468_;
v___y_1106_ = v___x_1477_;
goto v___jp_1098_;
}
v___jp_1478_:
{
lean_object* v___x_1491_; lean_object* v_a_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1491_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_974_);
v_a_1492_ = lean_ctor_get(v___x_1491_, 0);
lean_inc(v_a_1492_);
lean_dec_ref(v___x_1491_);
v___x_1493_ = lean_io_get_num_heartbeats();
lean_inc(v_trace_965_);
v___x_1494_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v___y_1483_, v___y_1490_, v___y_1487_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v_a_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1502_; 
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1497_ = v___x_1494_;
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_a_1495_);
lean_dec(v___x_1494_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1500_; 
if (v_isShared_1498_ == 0)
{
lean_ctor_set_tag(v___x_1497_, 1);
v___x_1500_ = v___x_1497_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_a_1495_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
v___y_1458_ = v___y_1485_;
v___y_1459_ = v___y_1479_;
v___y_1460_ = v___y_1480_;
v___y_1461_ = v___y_1486_;
v___y_1462_ = v___x_1493_;
v___y_1463_ = v___y_1481_;
v___y_1464_ = v___y_1488_;
v___y_1465_ = v___y_1482_;
v___y_1466_ = v___y_1489_;
v___y_1467_ = v_a_1492_;
v___y_1468_ = v___y_1484_;
v_a_1469_ = v___x_1500_;
goto v___jp_1457_;
}
}
}
else
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
v_a_1503_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___x_1494_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1494_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1508_; 
if (v_isShared_1506_ == 0)
{
lean_ctor_set_tag(v___x_1505_, 0);
v___x_1508_ = v___x_1505_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_a_1503_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
v___y_1458_ = v___y_1485_;
v___y_1459_ = v___y_1479_;
v___y_1460_ = v___y_1480_;
v___y_1461_ = v___y_1486_;
v___y_1462_ = v___x_1493_;
v___y_1463_ = v___y_1481_;
v___y_1464_ = v___y_1488_;
v___y_1465_ = v___y_1482_;
v___y_1466_ = v___y_1489_;
v___y_1467_ = v_a_1492_;
v___y_1468_ = v___y_1484_;
v_a_1469_ = v___x_1508_;
goto v___jp_1457_;
}
}
}
}
v___jp_1511_:
{
lean_object* v___x_1519_; double v___x_1520_; double v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v___x_1519_ = lean_io_get_num_heartbeats();
v___x_1520_ = lean_float_of_nat(v___y_1517_);
v___x_1521_ = lean_float_of_nat(v___x_1519_);
v___x_1522_ = lean_box_float(v___x_1520_);
v___x_1523_ = lean_box_float(v___x_1521_);
v___x_1524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1522_);
lean_ctor_set(v___x_1524_, 1, v___x_1523_);
v___x_1525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1525_, 0, v_a_1518_);
lean_ctor_set(v___x_1525_, 1, v___x_1524_);
lean_inc_ref(v___y_1516_);
v___x_1526_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1514_, v___y_1516_, v___y_1513_, v___y_1512_, v___y_1515_, v___f_1289_, v___x_1525_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
return v___x_1526_;
}
v___jp_1527_:
{
lean_object* v___x_1535_; double v___x_1536_; double v___x_1537_; double v___x_1538_; double v___x_1539_; double v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1535_ = lean_io_mono_nanos_now();
v___x_1536_ = lean_float_of_nat(v___y_1530_);
v___x_1537_ = lean_float_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0);
v___x_1538_ = lean_float_div(v___x_1536_, v___x_1537_);
v___x_1539_ = lean_float_of_nat(v___x_1535_);
v___x_1540_ = lean_float_div(v___x_1539_, v___x_1537_);
v___x_1541_ = lean_box_float(v___x_1538_);
v___x_1542_ = lean_box_float(v___x_1540_);
v___x_1543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1541_);
lean_ctor_set(v___x_1543_, 1, v___x_1542_);
v___x_1544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1544_, 0, v_a_1534_);
lean_ctor_set(v___x_1544_, 1, v___x_1543_);
lean_inc_ref(v___y_1533_);
v___x_1545_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1531_, v___y_1533_, v___y_1529_, v___y_1528_, v___y_1532_, v___f_1289_, v___x_1544_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
return v___x_1545_;
}
v___jp_1546_:
{
lean_object* v___x_1554_; double v___x_1555_; double v___x_1556_; double v___x_1557_; double v___x_1558_; double v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1554_ = lean_io_mono_nanos_now();
v___x_1555_ = lean_float_of_nat(v___y_1550_);
v___x_1556_ = lean_float_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0);
v___x_1557_ = lean_float_div(v___x_1555_, v___x_1556_);
v___x_1558_ = lean_float_of_nat(v___x_1554_);
v___x_1559_ = lean_float_div(v___x_1558_, v___x_1556_);
v___x_1560_ = lean_box_float(v___x_1557_);
v___x_1561_ = lean_box_float(v___x_1559_);
v___x_1562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1560_);
lean_ctor_set(v___x_1562_, 1, v___x_1561_);
v___x_1563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1563_, 0, v_a_1553_);
lean_ctor_set(v___x_1563_, 1, v___x_1562_);
lean_inc_ref(v___y_1549_);
v___x_1564_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1548_, v___y_1549_, v___y_1547_, v___y_1552_, v___y_1551_, v___f_1345_, v___x_1563_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
return v___x_1564_;
}
v___jp_1565_:
{
lean_object* v___x_1573_; double v___x_1574_; double v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1573_ = lean_io_get_num_heartbeats();
v___x_1574_ = lean_float_of_nat(v___y_1568_);
v___x_1575_ = lean_float_of_nat(v___x_1573_);
v___x_1576_ = lean_box_float(v___x_1574_);
v___x_1577_ = lean_box_float(v___x_1575_);
v___x_1578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1576_);
lean_ctor_set(v___x_1578_, 1, v___x_1577_);
v___x_1579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1579_, 0, v_a_1572_);
lean_ctor_set(v___x_1579_, 1, v___x_1578_);
lean_inc_ref(v___y_1569_);
v___x_1580_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1567_, v___y_1569_, v___y_1566_, v___y_1571_, v___y_1570_, v___f_1345_, v___x_1579_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
return v___x_1580_;
}
v___jp_1583_:
{
lean_object* v___x_1594_; lean_object* v_a_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1594_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_974_);
v_a_1595_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_a_1595_);
lean_dec_ref(v___x_1594_);
v___x_1596_ = lean_io_get_num_heartbeats();
lean_inc(v_trace_965_);
v___x_1597_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v_n_1582_, v___y_1592_, v_acc_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
if (lean_obj_tag(v___x_1597_) == 0)
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
v_a_1598_ = lean_ctor_get(v___x_1597_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1597_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1597_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
lean_ctor_set_tag(v___x_1600_, 1);
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
v___y_1246_ = v___y_1585_;
v___y_1247_ = v___y_1584_;
v___y_1248_ = v___y_1586_;
v___y_1249_ = v___y_1587_;
v___y_1250_ = v___y_1588_;
v___y_1251_ = v___y_1590_;
v___y_1252_ = v___y_1589_;
v___y_1253_ = v___y_1591_;
v___y_1254_ = v___x_1596_;
v___y_1255_ = v_a_1595_;
v___y_1256_ = v___y_1593_;
v_a_1257_ = v___x_1603_;
goto v___jp_1245_;
}
}
}
else
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1613_; 
v_a_1606_ = lean_ctor_get(v___x_1597_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1608_ = v___x_1597_;
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v___x_1597_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1611_; 
if (v_isShared_1609_ == 0)
{
lean_ctor_set_tag(v___x_1608_, 0);
v___x_1611_ = v___x_1608_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_a_1606_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
v___y_1246_ = v___y_1585_;
v___y_1247_ = v___y_1584_;
v___y_1248_ = v___y_1586_;
v___y_1249_ = v___y_1587_;
v___y_1250_ = v___y_1588_;
v___y_1251_ = v___y_1590_;
v___y_1252_ = v___y_1589_;
v___y_1253_ = v___y_1591_;
v___y_1254_ = v___x_1596_;
v___y_1255_ = v_a_1595_;
v___y_1256_ = v___y_1593_;
v_a_1257_ = v___x_1611_;
goto v___jp_1245_;
}
}
}
}
v___jp_1614_:
{
lean_object* v___x_1624_; lean_object* v_a_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1624_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_974_);
v_a_1625_ = lean_ctor_get(v___x_1624_, 0);
lean_inc(v_a_1625_);
lean_dec_ref(v___x_1624_);
v___x_1626_ = lean_io_mono_nanos_now();
lean_inc(v_trace_965_);
v___x_1627_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v_n_1582_, v___y_1620_, v_acc_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1635_; 
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1630_ = v___x_1627_;
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1627_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1633_; 
if (v_isShared_1631_ == 0)
{
lean_ctor_set_tag(v___x_1630_, 1);
v___x_1633_ = v___x_1630_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1628_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
v___y_1267_ = v___y_1615_;
v___y_1268_ = v___x_1626_;
v___y_1269_ = v___y_1616_;
v___y_1270_ = v___y_1618_;
v___y_1271_ = v___y_1617_;
v___y_1272_ = v___y_1619_;
v___y_1273_ = v_a_1625_;
v___y_1274_ = v___y_1621_;
v___y_1275_ = v___y_1622_;
v___y_1276_ = v___y_1623_;
v_a_1277_ = v___x_1633_;
goto v___jp_1266_;
}
}
}
else
{
lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1643_; 
v_a_1636_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1643_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1638_ = v___x_1627_;
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1627_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1641_; 
if (v_isShared_1639_ == 0)
{
lean_ctor_set_tag(v___x_1638_, 0);
v___x_1641_ = v___x_1638_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_a_1636_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
v___y_1267_ = v___y_1615_;
v___y_1268_ = v___x_1626_;
v___y_1269_ = v___y_1616_;
v___y_1270_ = v___y_1618_;
v___y_1271_ = v___y_1617_;
v___y_1272_ = v___y_1619_;
v___y_1273_ = v_a_1625_;
v___y_1274_ = v___y_1621_;
v___y_1275_ = v___y_1622_;
v___y_1276_ = v___y_1623_;
v_a_1277_ = v___x_1641_;
goto v___jp_1266_;
}
}
}
}
v___jp_1644_:
{
lean_object* v___x_1657_; lean_object* v_a_1658_; lean_object* v___x_1659_; uint8_t v___x_1660_; 
v___x_1657_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_974_);
v_a_1658_ = lean_ctor_get(v___x_1657_, 0);
lean_inc(v_a_1658_);
lean_dec_ref(v___x_1657_);
v___x_1659_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1660_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v___y_1651_, v___x_1659_);
if (v___x_1660_ == 0)
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
lean_dec_ref(v___y_1648_);
v___x_1661_ = lean_io_mono_nanos_now();
lean_inc(v_a_974_);
lean_inc_ref(v_a_973_);
lean_inc(v_a_972_);
lean_inc_ref(v_a_971_);
lean_inc(v___y_1654_);
v___x_1662_ = lean_apply_6(v___y_1653_, v___y_1654_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, lean_box(0));
if (lean_obj_tag(v___x_1662_) == 0)
{
lean_object* v_a_1663_; uint8_t v___x_1664_; 
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_a_1663_);
lean_dec_ref_known(v___x_1662_, 1);
v___x_1664_ = lean_unbox(v_a_1663_);
if (v___x_1664_ == 0)
{
lean_object* v___x_1665_; 
lean_dec(v_a_1663_);
lean_inc_ref(v_next_966_);
lean_inc(v_a_974_);
lean_inc_ref(v_a_973_);
lean_inc(v_a_972_);
lean_inc_ref(v_a_971_);
lean_inc(v___y_1654_);
v___x_1665_ = lean_apply_7(v_next_966_, v___y_1654_, v___y_1655_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, lean_box(0));
if (lean_obj_tag(v___x_1665_) == 0)
{
lean_object* v_a_1666_; 
lean_dec(v___y_1656_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1647_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec_ref(v_cfg_964_);
v_a_1666_ = lean_ctor_get(v___x_1665_, 0);
lean_inc(v_a_1666_);
lean_dec_ref_known(v___x_1665_, 1);
v___y_1140_ = v___y_1651_;
v___y_1141_ = v_a_1658_;
v___y_1142_ = v___y_1645_;
v___y_1143_ = v___y_1652_;
v___y_1144_ = v___y_1646_;
v___y_1145_ = v___x_1661_;
v___y_1146_ = v___y_1649_;
v_a_1147_ = v_a_1666_;
goto v___jp_1139_;
}
else
{
lean_object* v_a_1667_; uint8_t v___x_1668_; 
v_a_1667_ = lean_ctor_get(v___x_1665_, 0);
lean_inc(v_a_1667_);
lean_dec_ref_known(v___x_1665_, 1);
v___x_1668_ = l_Lean_Exception_isInterrupt(v_a_1667_);
if (v___x_1668_ == 0)
{
uint8_t v___x_1669_; 
lean_inc(v_a_1667_);
v___x_1669_ = l_Lean_Exception_isRuntime(v_a_1667_);
if (v___x_1669_ == 0)
{
lean_object* v___x_1670_; 
lean_dec(v_a_1667_);
lean_inc(v_a_974_);
lean_inc_ref(v_a_973_);
lean_inc(v_a_972_);
lean_inc_ref(v_a_971_);
lean_inc(v___y_1654_);
v___x_1670_ = lean_apply_6(v___y_1647_, v___y_1654_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, lean_box(0));
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v_a_1671_; 
v_a_1671_ = lean_ctor_get(v___x_1670_, 0);
lean_inc(v_a_1671_);
lean_dec_ref_known(v___x_1670_, 1);
if (lean_obj_tag(v_a_1671_) == 0)
{
lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; uint8_t v___x_1676_; 
v___x_1672_ = lean_nat_add(v_n_1582_, v_one_1581_);
lean_dec(v_n_1582_);
v___x_1673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___y_1654_);
lean_ctor_set(v___x_1673_, 1, v_acc_970_);
v___x_1674_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__8));
lean_inc(v_trace_965_);
v___x_1675_ = l_Lean_Name_append(v___x_1674_, v_trace_965_);
v___x_1676_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___y_1650_, v___y_1651_, v___x_1675_);
lean_dec(v___x_1675_);
if (v___x_1676_ == 0)
{
lean_object* v___x_1677_; uint8_t v___x_1678_; 
v___x_1677_ = l_Lean_trace_profiler;
v___x_1678_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v___y_1651_, v___x_1677_);
if (v___x_1678_ == 0)
{
lean_object* v___x_1679_; 
lean_inc(v_trace_965_);
v___x_1679_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v___x_1672_, v___y_1656_, v___x_1673_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
v___y_1150_ = v___y_1651_;
v___y_1151_ = v_a_1658_;
v___y_1152_ = v___y_1652_;
v___y_1153_ = v___y_1645_;
v___y_1154_ = v___y_1646_;
v___y_1155_ = v___x_1661_;
v___y_1156_ = v___y_1649_;
v___y_1157_ = v___x_1679_;
goto v___jp_1149_;
}
else
{
v___y_1314_ = v___y_1651_;
v___y_1315_ = v_a_1658_;
v___y_1316_ = v___x_1672_;
v___y_1317_ = v___y_1645_;
v___y_1318_ = v___y_1652_;
v___y_1319_ = v___y_1646_;
v___y_1320_ = v___x_1676_;
v___y_1321_ = v___x_1661_;
v___y_1322_ = v___x_1673_;
v___y_1323_ = v___y_1656_;
v___y_1324_ = v___y_1649_;
goto v___jp_1313_;
}
}
else
{
v___y_1314_ = v___y_1651_;
v___y_1315_ = v_a_1658_;
v___y_1316_ = v___x_1672_;
v___y_1317_ = v___y_1645_;
v___y_1318_ = v___y_1652_;
v___y_1319_ = v___y_1646_;
v___y_1320_ = v___x_1676_;
v___y_1321_ = v___x_1661_;
v___y_1322_ = v___x_1673_;
v___y_1323_ = v___y_1656_;
v___y_1324_ = v___y_1649_;
goto v___jp_1313_;
}
}
else
{
lean_object* v_val_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; uint8_t v___x_1684_; 
lean_dec(v___y_1654_);
v_val_1680_ = lean_ctor_get(v_a_1671_, 0);
lean_inc(v_val_1680_);
lean_dec_ref_known(v_a_1671_, 1);
v___x_1681_ = l_List_appendTR___redArg(v_val_1680_, v___y_1656_);
v___x_1682_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__8));
lean_inc(v_trace_965_);
v___x_1683_ = l_Lean_Name_append(v___x_1682_, v_trace_965_);
v___x_1684_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___y_1650_, v___y_1651_, v___x_1683_);
lean_dec(v___x_1683_);
if (v___x_1684_ == 0)
{
lean_object* v___x_1685_; uint8_t v___x_1686_; 
v___x_1685_ = l_Lean_trace_profiler;
v___x_1686_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v___y_1651_, v___x_1685_);
if (v___x_1686_ == 0)
{
lean_object* v___x_1687_; 
lean_inc(v_trace_965_);
v___x_1687_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v_n_1582_, v___x_1681_, v_acc_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
v___y_1150_ = v___y_1651_;
v___y_1151_ = v_a_1658_;
v___y_1152_ = v___y_1652_;
v___y_1153_ = v___y_1645_;
v___y_1154_ = v___y_1646_;
v___y_1155_ = v___x_1661_;
v___y_1156_ = v___y_1649_;
v___y_1157_ = v___x_1687_;
goto v___jp_1149_;
}
else
{
v___y_1615_ = v___y_1651_;
v___y_1616_ = v_a_1658_;
v___y_1617_ = v___y_1645_;
v___y_1618_ = v___y_1652_;
v___y_1619_ = v___y_1646_;
v___y_1620_ = v___x_1681_;
v___y_1621_ = v___x_1661_;
v___y_1622_ = v___x_1684_;
v___y_1623_ = v___y_1649_;
goto v___jp_1614_;
}
}
else
{
v___y_1615_ = v___y_1651_;
v___y_1616_ = v_a_1658_;
v___y_1617_ = v___y_1645_;
v___y_1618_ = v___y_1652_;
v___y_1619_ = v___y_1646_;
v___y_1620_ = v___x_1681_;
v___y_1621_ = v___x_1661_;
v___y_1622_ = v___x_1684_;
v___y_1623_ = v___y_1649_;
goto v___jp_1614_;
}
}
}
else
{
lean_object* v_a_1688_; 
lean_dec(v___y_1656_);
lean_dec(v___y_1654_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec_ref(v_cfg_964_);
v_a_1688_ = lean_ctor_get(v___x_1670_, 0);
lean_inc(v_a_1688_);
lean_dec_ref_known(v___x_1670_, 1);
v___y_1130_ = v___y_1651_;
v___y_1131_ = v_a_1658_;
v___y_1132_ = v___y_1645_;
v___y_1133_ = v___y_1652_;
v___y_1134_ = v___y_1646_;
v___y_1135_ = v___x_1661_;
v___y_1136_ = v___y_1649_;
v_a_1137_ = v_a_1688_;
goto v___jp_1129_;
}
}
else
{
lean_dec(v___y_1656_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1647_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec_ref(v_cfg_964_);
v___y_1130_ = v___y_1651_;
v___y_1131_ = v_a_1658_;
v___y_1132_ = v___y_1645_;
v___y_1133_ = v___y_1652_;
v___y_1134_ = v___y_1646_;
v___y_1135_ = v___x_1661_;
v___y_1136_ = v___y_1649_;
v_a_1137_ = v_a_1667_;
goto v___jp_1129_;
}
}
else
{
lean_dec(v___y_1656_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1647_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec_ref(v_cfg_964_);
v___y_1130_ = v___y_1651_;
v___y_1131_ = v_a_1658_;
v___y_1132_ = v___y_1645_;
v___y_1133_ = v___y_1652_;
v___y_1134_ = v___y_1646_;
v___y_1135_ = v___x_1661_;
v___y_1136_ = v___y_1649_;
v_a_1137_ = v_a_1667_;
goto v___jp_1129_;
}
}
}
else
{
lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; uint8_t v___x_1693_; 
lean_dec_ref(v___y_1655_);
lean_dec_ref(v___y_1647_);
v___x_1689_ = lean_nat_add(v_n_1582_, v_one_1581_);
lean_dec(v_n_1582_);
v___x_1690_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1690_, 0, v___y_1654_);
lean_ctor_set(v___x_1690_, 1, v_acc_970_);
v___x_1691_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__8));
lean_inc(v_trace_965_);
v___x_1692_ = l_Lean_Name_append(v___x_1691_, v_trace_965_);
v___x_1693_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___y_1650_, v___y_1651_, v___x_1692_);
lean_dec(v___x_1692_);
if (v___x_1693_ == 0)
{
lean_object* v___x_1694_; uint8_t v___x_1695_; 
v___x_1694_ = l_Lean_trace_profiler;
v___x_1695_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v___y_1651_, v___x_1694_);
if (v___x_1695_ == 0)
{
lean_object* v___x_1696_; 
lean_dec(v_a_1663_);
lean_inc(v_trace_965_);
v___x_1696_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v___x_1689_, v___y_1656_, v___x_1690_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
v___y_1150_ = v___y_1651_;
v___y_1151_ = v_a_1658_;
v___y_1152_ = v___y_1652_;
v___y_1153_ = v___y_1645_;
v___y_1154_ = v___y_1646_;
v___y_1155_ = v___x_1661_;
v___y_1156_ = v___y_1649_;
v___y_1157_ = v___x_1696_;
goto v___jp_1149_;
}
else
{
uint8_t v___x_1697_; 
v___x_1697_ = lean_unbox(v_a_1663_);
lean_dec(v_a_1663_);
v___y_1371_ = v_a_1658_;
v___y_1372_ = v___y_1645_;
v___y_1373_ = v___y_1646_;
v___y_1374_ = v___y_1649_;
v___y_1375_ = v___y_1651_;
v___y_1376_ = v___x_1690_;
v___y_1377_ = v___x_1697_;
v___y_1378_ = v___y_1652_;
v___y_1379_ = v___x_1693_;
v___y_1380_ = v___x_1661_;
v___y_1381_ = v___x_1689_;
v___y_1382_ = v___y_1656_;
goto v___jp_1370_;
}
}
else
{
uint8_t v___x_1698_; 
v___x_1698_ = lean_unbox(v_a_1663_);
lean_dec(v_a_1663_);
v___y_1371_ = v_a_1658_;
v___y_1372_ = v___y_1645_;
v___y_1373_ = v___y_1646_;
v___y_1374_ = v___y_1649_;
v___y_1375_ = v___y_1651_;
v___y_1376_ = v___x_1690_;
v___y_1377_ = v___x_1698_;
v___y_1378_ = v___y_1652_;
v___y_1379_ = v___x_1693_;
v___y_1380_ = v___x_1661_;
v___y_1381_ = v___x_1689_;
v___y_1382_ = v___y_1656_;
goto v___jp_1370_;
}
}
}
else
{
lean_object* v_a_1699_; 
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1647_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec_ref(v_cfg_964_);
v_a_1699_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_a_1699_);
lean_dec_ref_known(v___x_1662_, 1);
v___y_1130_ = v___y_1651_;
v___y_1131_ = v_a_1658_;
v___y_1132_ = v___y_1645_;
v___y_1133_ = v___y_1652_;
v___y_1134_ = v___y_1646_;
v___y_1135_ = v___x_1661_;
v___y_1136_ = v___y_1649_;
v_a_1137_ = v_a_1699_;
goto v___jp_1129_;
}
}
else
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
lean_dec_ref(v___y_1655_);
v___x_1700_ = lean_io_get_num_heartbeats();
lean_inc(v_a_974_);
lean_inc_ref(v_a_973_);
lean_inc(v_a_972_);
lean_inc_ref(v_a_971_);
lean_inc(v___y_1654_);
v___x_1701_ = lean_apply_6(v___y_1653_, v___y_1654_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, lean_box(0));
if (lean_obj_tag(v___x_1701_) == 0)
{
lean_object* v_a_1702_; uint8_t v___x_1703_; 
v_a_1702_ = lean_ctor_get(v___x_1701_, 0);
lean_inc(v_a_1702_);
lean_dec_ref_known(v___x_1701_, 1);
v___x_1703_ = lean_unbox(v_a_1702_);
if (v___x_1703_ == 0)
{
lean_object* v___x_1704_; 
lean_dec(v_a_1702_);
lean_inc_ref(v_next_966_);
lean_inc(v_a_974_);
lean_inc_ref(v_a_973_);
lean_inc(v_a_972_);
lean_inc_ref(v_a_971_);
lean_inc(v___y_1654_);
v___x_1704_ = lean_apply_7(v_next_966_, v___y_1654_, v___y_1648_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, lean_box(0));
if (lean_obj_tag(v___x_1704_) == 0)
{
lean_object* v_a_1705_; 
lean_dec(v___y_1656_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1647_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec_ref(v_cfg_964_);
v_a_1705_ = lean_ctor_get(v___x_1704_, 0);
lean_inc(v_a_1705_);
lean_dec_ref_known(v___x_1704_, 1);
v___y_1089_ = v___y_1651_;
v___y_1090_ = v_a_1658_;
v___y_1091_ = v___x_1700_;
v___y_1092_ = v___y_1645_;
v___y_1093_ = v___y_1652_;
v___y_1094_ = v___y_1646_;
v___y_1095_ = v___y_1649_;
v_a_1096_ = v_a_1705_;
goto v___jp_1088_;
}
else
{
lean_object* v_a_1706_; uint8_t v___x_1707_; 
v_a_1706_ = lean_ctor_get(v___x_1704_, 0);
lean_inc(v_a_1706_);
lean_dec_ref_known(v___x_1704_, 1);
v___x_1707_ = l_Lean_Exception_isInterrupt(v_a_1706_);
if (v___x_1707_ == 0)
{
uint8_t v___x_1708_; 
lean_inc(v_a_1706_);
v___x_1708_ = l_Lean_Exception_isRuntime(v_a_1706_);
if (v___x_1708_ == 0)
{
lean_object* v___x_1709_; 
lean_dec(v_a_1706_);
lean_inc(v_a_974_);
lean_inc_ref(v_a_973_);
lean_inc(v_a_972_);
lean_inc_ref(v_a_971_);
lean_inc(v___y_1654_);
v___x_1709_ = lean_apply_6(v___y_1647_, v___y_1654_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, lean_box(0));
if (lean_obj_tag(v___x_1709_) == 0)
{
lean_object* v_a_1710_; 
v_a_1710_ = lean_ctor_get(v___x_1709_, 0);
lean_inc(v_a_1710_);
lean_dec_ref_known(v___x_1709_, 1);
if (lean_obj_tag(v_a_1710_) == 0)
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; uint8_t v___x_1715_; 
v___x_1711_ = lean_nat_add(v_n_1582_, v_one_1581_);
lean_dec(v_n_1582_);
v___x_1712_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1712_, 0, v___y_1654_);
lean_ctor_set(v___x_1712_, 1, v_acc_970_);
v___x_1713_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__8));
lean_inc(v_trace_965_);
v___x_1714_ = l_Lean_Name_append(v___x_1713_, v_trace_965_);
v___x_1715_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___y_1650_, v___y_1651_, v___x_1714_);
lean_dec(v___x_1714_);
if (v___x_1715_ == 0)
{
lean_object* v___x_1716_; uint8_t v___x_1717_; 
v___x_1716_ = l_Lean_trace_profiler;
v___x_1717_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v___y_1651_, v___x_1716_);
if (v___x_1717_ == 0)
{
lean_object* v___x_1718_; 
lean_inc(v_trace_965_);
v___x_1718_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v___x_1711_, v___y_1656_, v___x_1712_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
v___y_1099_ = v___y_1651_;
v___y_1100_ = v_a_1658_;
v___y_1101_ = v___x_1700_;
v___y_1102_ = v___y_1652_;
v___y_1103_ = v___y_1645_;
v___y_1104_ = v___y_1646_;
v___y_1105_ = v___y_1649_;
v___y_1106_ = v___x_1718_;
goto v___jp_1098_;
}
else
{
v___y_1425_ = v_a_1658_;
v___y_1426_ = v___x_1660_;
v___y_1427_ = v___x_1700_;
v___y_1428_ = v___y_1645_;
v___y_1429_ = v___y_1646_;
v___y_1430_ = v___y_1649_;
v___y_1431_ = v___y_1651_;
v___y_1432_ = v___x_1715_;
v___y_1433_ = v___x_1712_;
v___y_1434_ = v___y_1652_;
v___y_1435_ = v___x_1711_;
v___y_1436_ = v___y_1656_;
goto v___jp_1424_;
}
}
else
{
v___y_1425_ = v_a_1658_;
v___y_1426_ = v___x_1660_;
v___y_1427_ = v___x_1700_;
v___y_1428_ = v___y_1645_;
v___y_1429_ = v___y_1646_;
v___y_1430_ = v___y_1649_;
v___y_1431_ = v___y_1651_;
v___y_1432_ = v___x_1715_;
v___y_1433_ = v___x_1712_;
v___y_1434_ = v___y_1652_;
v___y_1435_ = v___x_1711_;
v___y_1436_ = v___y_1656_;
goto v___jp_1424_;
}
}
else
{
lean_object* v_val_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; uint8_t v___x_1723_; 
lean_dec(v___y_1654_);
v_val_1719_ = lean_ctor_get(v_a_1710_, 0);
lean_inc(v_val_1719_);
lean_dec_ref_known(v_a_1710_, 1);
v___x_1720_ = l_List_appendTR___redArg(v_val_1719_, v___y_1656_);
v___x_1721_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__8));
lean_inc(v_trace_965_);
v___x_1722_ = l_Lean_Name_append(v___x_1721_, v_trace_965_);
v___x_1723_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___y_1650_, v___y_1651_, v___x_1722_);
lean_dec(v___x_1722_);
if (v___x_1723_ == 0)
{
lean_object* v___x_1724_; uint8_t v___x_1725_; 
v___x_1724_ = l_Lean_trace_profiler;
v___x_1725_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v___y_1651_, v___x_1724_);
if (v___x_1725_ == 0)
{
lean_object* v___x_1726_; 
lean_inc(v_trace_965_);
v___x_1726_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v_n_1582_, v___x_1720_, v_acc_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
v___y_1099_ = v___y_1651_;
v___y_1100_ = v_a_1658_;
v___y_1101_ = v___x_1700_;
v___y_1102_ = v___y_1652_;
v___y_1103_ = v___y_1645_;
v___y_1104_ = v___y_1646_;
v___y_1105_ = v___y_1649_;
v___y_1106_ = v___x_1726_;
goto v___jp_1098_;
}
else
{
v___y_1584_ = v___y_1651_;
v___y_1585_ = v___x_1723_;
v___y_1586_ = v_a_1658_;
v___y_1587_ = v___x_1660_;
v___y_1588_ = v___x_1700_;
v___y_1589_ = v___y_1652_;
v___y_1590_ = v___y_1645_;
v___y_1591_ = v___y_1646_;
v___y_1592_ = v___x_1720_;
v___y_1593_ = v___y_1649_;
goto v___jp_1583_;
}
}
else
{
v___y_1584_ = v___y_1651_;
v___y_1585_ = v___x_1723_;
v___y_1586_ = v_a_1658_;
v___y_1587_ = v___x_1660_;
v___y_1588_ = v___x_1700_;
v___y_1589_ = v___y_1652_;
v___y_1590_ = v___y_1645_;
v___y_1591_ = v___y_1646_;
v___y_1592_ = v___x_1720_;
v___y_1593_ = v___y_1649_;
goto v___jp_1583_;
}
}
}
else
{
lean_object* v_a_1727_; 
lean_dec(v___y_1656_);
lean_dec(v___y_1654_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec_ref(v_cfg_964_);
v_a_1727_ = lean_ctor_get(v___x_1709_, 0);
lean_inc(v_a_1727_);
lean_dec_ref_known(v___x_1709_, 1);
v___y_1079_ = v___y_1651_;
v___y_1080_ = v_a_1658_;
v___y_1081_ = v___x_1700_;
v___y_1082_ = v___y_1645_;
v___y_1083_ = v___y_1652_;
v___y_1084_ = v___y_1646_;
v___y_1085_ = v___y_1649_;
v_a_1086_ = v_a_1727_;
goto v___jp_1078_;
}
}
else
{
lean_dec(v___y_1656_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1647_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec_ref(v_cfg_964_);
v___y_1079_ = v___y_1651_;
v___y_1080_ = v_a_1658_;
v___y_1081_ = v___x_1700_;
v___y_1082_ = v___y_1645_;
v___y_1083_ = v___y_1652_;
v___y_1084_ = v___y_1646_;
v___y_1085_ = v___y_1649_;
v_a_1086_ = v_a_1706_;
goto v___jp_1078_;
}
}
else
{
lean_dec(v___y_1656_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1647_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec_ref(v_cfg_964_);
v___y_1079_ = v___y_1651_;
v___y_1080_ = v_a_1658_;
v___y_1081_ = v___x_1700_;
v___y_1082_ = v___y_1645_;
v___y_1083_ = v___y_1652_;
v___y_1084_ = v___y_1646_;
v___y_1085_ = v___y_1649_;
v_a_1086_ = v_a_1706_;
goto v___jp_1078_;
}
}
}
else
{
lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; uint8_t v___x_1732_; 
lean_dec_ref(v___y_1648_);
lean_dec_ref(v___y_1647_);
v___x_1728_ = lean_nat_add(v_n_1582_, v_one_1581_);
lean_dec(v_n_1582_);
v___x_1729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1729_, 0, v___y_1654_);
lean_ctor_set(v___x_1729_, 1, v_acc_970_);
v___x_1730_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__8));
lean_inc(v_trace_965_);
v___x_1731_ = l_Lean_Name_append(v___x_1730_, v_trace_965_);
v___x_1732_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___y_1650_, v___y_1651_, v___x_1731_);
lean_dec(v___x_1731_);
if (v___x_1732_ == 0)
{
lean_object* v___x_1733_; uint8_t v___x_1734_; 
v___x_1733_ = l_Lean_trace_profiler;
v___x_1734_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v___y_1651_, v___x_1733_);
if (v___x_1734_ == 0)
{
lean_object* v___x_1735_; 
lean_dec(v_a_1702_);
lean_inc(v_trace_965_);
v___x_1735_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v___x_1728_, v___y_1656_, v___x_1729_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
v___y_1099_ = v___y_1651_;
v___y_1100_ = v_a_1658_;
v___y_1101_ = v___x_1700_;
v___y_1102_ = v___y_1652_;
v___y_1103_ = v___y_1645_;
v___y_1104_ = v___y_1646_;
v___y_1105_ = v___y_1649_;
v___y_1106_ = v___x_1735_;
goto v___jp_1098_;
}
else
{
uint8_t v___x_1736_; 
v___x_1736_ = lean_unbox(v_a_1702_);
lean_dec(v_a_1702_);
v___y_1479_ = v_a_1658_;
v___y_1480_ = v___x_1700_;
v___y_1481_ = v___y_1645_;
v___y_1482_ = v___y_1646_;
v___y_1483_ = v___x_1728_;
v___y_1484_ = v___y_1649_;
v___y_1485_ = v___y_1651_;
v___y_1486_ = v___x_1732_;
v___y_1487_ = v___x_1729_;
v___y_1488_ = v___y_1652_;
v___y_1489_ = v___x_1736_;
v___y_1490_ = v___y_1656_;
goto v___jp_1478_;
}
}
else
{
uint8_t v___x_1737_; 
v___x_1737_ = lean_unbox(v_a_1702_);
lean_dec(v_a_1702_);
v___y_1479_ = v_a_1658_;
v___y_1480_ = v___x_1700_;
v___y_1481_ = v___y_1645_;
v___y_1482_ = v___y_1646_;
v___y_1483_ = v___x_1728_;
v___y_1484_ = v___y_1649_;
v___y_1485_ = v___y_1651_;
v___y_1486_ = v___x_1732_;
v___y_1487_ = v___x_1729_;
v___y_1488_ = v___y_1652_;
v___y_1489_ = v___x_1737_;
v___y_1490_ = v___y_1656_;
goto v___jp_1478_;
}
}
}
else
{
lean_object* v_a_1738_; 
lean_dec(v___y_1656_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1648_);
lean_dec_ref(v___y_1647_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec_ref(v_cfg_964_);
v_a_1738_ = lean_ctor_get(v___x_1701_, 0);
lean_inc(v_a_1738_);
lean_dec_ref_known(v___x_1701_, 1);
v___y_1079_ = v___y_1651_;
v___y_1080_ = v_a_1658_;
v___y_1081_ = v___x_1700_;
v___y_1082_ = v___y_1645_;
v___y_1083_ = v___y_1652_;
v___y_1084_ = v___y_1646_;
v___y_1085_ = v___y_1649_;
v_a_1086_ = v_a_1738_;
goto v___jp_1078_;
}
}
}
v___jp_1739_:
{
if (lean_obj_tag(v_a_1740_) == 0)
{
if (lean_obj_tag(v_curr_969_) == 0)
{
lean_object* v_toCold_1741_; lean_object* v_options_1742_; lean_object* v_inheritedTraceOptions_1743_; uint8_t v_hasTrace_1744_; lean_object* v___x_1745_; 
lean_dec(v_n_1582_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec_ref(v_cfg_964_);
v_toCold_1741_ = lean_ctor_get(v_a_973_, 0);
v_options_1742_ = lean_ctor_get(v_toCold_1741_, 2);
v_inheritedTraceOptions_1743_ = lean_ctor_get(v_toCold_1741_, 11);
v_hasTrace_1744_ = lean_ctor_get_uint8(v_options_1742_, sizeof(void*)*1);
v___x_1745_ = l_List_reverse___redArg(v_acc_970_);
if (v_hasTrace_1744_ == 0)
{
lean_object* v___x_1746_; 
lean_dec(v_trace_965_);
v___x_1746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1746_, 0, v___x_1745_);
return v___x_1746_;
}
else
{
lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; uint8_t v___x_1750_; 
v___x_1747_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__9));
v___x_1748_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__8));
lean_inc(v_trace_965_);
v___x_1749_ = l_Lean_Name_append(v___x_1748_, v_trace_965_);
v___x_1750_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1743_, v_options_1742_, v___x_1749_);
lean_dec(v___x_1749_);
if (v___x_1750_ == 0)
{
lean_object* v___x_1751_; uint8_t v___x_1752_; 
v___x_1751_ = l_Lean_trace_profiler;
v___x_1752_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_options_1742_, v___x_1751_);
if (v___x_1752_ == 0)
{
lean_object* v___x_1753_; 
lean_dec(v_trace_965_);
v___x_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1745_);
return v___x_1753_;
}
else
{
v___y_1169_ = v___x_1750_;
v___y_1170_ = v___x_1745_;
v___y_1171_ = v___x_1747_;
v___y_1172_ = v_hasTrace_1744_;
v___y_1173_ = v_options_1742_;
goto v___jp_1168_;
}
}
else
{
v___y_1169_ = v___x_1750_;
v___y_1170_ = v___x_1745_;
v___y_1171_ = v___x_1747_;
v___y_1172_ = v_hasTrace_1744_;
v___y_1173_ = v_options_1742_;
goto v___jp_1168_;
}
}
}
else
{
lean_object* v_head_1754_; lean_object* v_tail_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1990_; 
v_head_1754_ = lean_ctor_get(v_curr_969_, 0);
v_tail_1755_ = lean_ctor_get(v_curr_969_, 1);
v_isSharedCheck_1990_ = !lean_is_exclusive(v_curr_969_);
if (v_isSharedCheck_1990_ == 0)
{
v___x_1757_ = v_curr_969_;
v_isShared_1758_ = v_isSharedCheck_1990_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_tail_1755_);
lean_inc(v_head_1754_);
lean_dec(v_curr_969_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1990_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___f_1759_; lean_object* v___f_1760_; lean_object* v___f_1761_; lean_object* v___x_1762_; lean_object* v_a_1763_; uint8_t v___x_1764_; 
lean_inc(v_acc_970_);
lean_inc(v_n_1582_);
lean_inc(v_goals_967_);
lean_inc_ref(v_next_966_);
lean_inc(v_trace_965_);
lean_inc_ref(v_cfg_964_);
lean_inc(v_tail_1755_);
v___f_1759_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__8___boxed), 13, 7);
lean_closure_set(v___f_1759_, 0, v_tail_1755_);
lean_closure_set(v___f_1759_, 1, v_cfg_964_);
lean_closure_set(v___f_1759_, 2, v_trace_965_);
lean_closure_set(v___f_1759_, 3, v_next_966_);
lean_closure_set(v___f_1759_, 4, v_goals_967_);
lean_closure_set(v___f_1759_, 5, v_n_1582_);
lean_closure_set(v___f_1759_, 6, v_acc_970_);
lean_inc_n(v_head_1754_, 2);
v___f_1760_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__7___boxed), 7, 1);
lean_closure_set(v___f_1760_, 0, v_head_1754_);
v___f_1761_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__3___boxed), 7, 1);
lean_closure_set(v___f_1761_, 0, v_head_1754_);
v___x_1762_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6___redArg(v_head_1754_, v_a_972_);
v_a_1763_ = lean_ctor_get(v___x_1762_, 0);
lean_inc(v_a_1763_);
lean_dec_ref(v___x_1762_);
v___x_1764_ = lean_unbox(v_a_1763_);
if (v___x_1764_ == 0)
{
lean_object* v_toCold_1765_; lean_object* v_options_1766_; uint8_t v_hasTrace_1767_; 
lean_dec(v_a_1763_);
lean_dec_ref(v___f_1760_);
v_toCold_1765_ = lean_ctor_get(v_a_973_, 0);
v_options_1766_ = lean_ctor_get(v_toCold_1765_, 2);
v_hasTrace_1767_ = lean_ctor_get_uint8(v_options_1766_, sizeof(void*)*1);
if (v_hasTrace_1767_ == 0)
{
lean_object* v___x_1768_; 
lean_dec_ref(v___f_1761_);
lean_inc_ref(v_suspend_1165_);
lean_inc(v_a_974_);
lean_inc_ref(v_a_973_);
lean_inc(v_a_972_);
lean_inc_ref(v_a_971_);
lean_inc(v_head_1754_);
v___x_1768_ = lean_apply_6(v_suspend_1165_, v_head_1754_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, lean_box(0));
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; uint8_t v___x_1770_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
lean_inc(v_a_1769_);
lean_dec_ref_known(v___x_1768_, 1);
v___x_1770_ = lean_unbox(v_a_1769_);
lean_dec(v_a_1769_);
if (v___x_1770_ == 0)
{
lean_object* v___x_1771_; 
lean_inc_ref(v_next_966_);
lean_inc(v_a_974_);
lean_inc_ref(v_a_973_);
lean_inc(v_a_972_);
lean_inc_ref(v_a_971_);
lean_inc(v_head_1754_);
v___x_1771_ = lean_apply_7(v_next_966_, v_head_1754_, v___f_1759_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, lean_box(0));
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_del_object(v___x_1757_);
lean_dec(v_tail_1755_);
lean_dec(v_head_1754_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
return v___x_1771_;
}
else
{
lean_object* v_a_1772_; uint8_t v___x_1773_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1772_);
v___x_1773_ = l_Lean_Exception_isInterrupt(v_a_1772_);
if (v___x_1773_ == 0)
{
uint8_t v___x_1774_; 
v___x_1774_ = l_Lean_Exception_isRuntime(v_a_1772_);
if (v___x_1774_ == 0)
{
lean_object* v___x_1775_; 
lean_dec_ref_known(v___x_1771_, 1);
lean_inc_ref(v_discharge_1166_);
lean_inc(v_a_974_);
lean_inc_ref(v_a_973_);
lean_inc(v_a_972_);
lean_inc_ref(v_a_971_);
lean_inc(v_head_1754_);
v___x_1775_ = lean_apply_6(v_discharge_1166_, v_head_1754_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, lean_box(0));
if (lean_obj_tag(v___x_1775_) == 0)
{
lean_object* v_a_1776_; 
v_a_1776_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_a_1776_);
lean_dec_ref_known(v___x_1775_, 1);
if (lean_obj_tag(v_a_1776_) == 0)
{
lean_object* v___x_1777_; lean_object* v___x_1779_; 
v___x_1777_ = lean_nat_add(v_n_1582_, v_one_1581_);
lean_dec(v_n_1582_);
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 1, v_acc_970_);
v___x_1779_ = v___x_1757_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v_head_1754_);
lean_ctor_set(v_reuseFailAlloc_1781_, 1, v_acc_970_);
v___x_1779_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
v_n_968_ = v___x_1777_;
v_curr_969_ = v_tail_1755_;
v_acc_970_ = v___x_1779_;
goto _start;
}
}
else
{
lean_object* v_val_1782_; lean_object* v___x_1783_; 
lean_del_object(v___x_1757_);
lean_dec(v_head_1754_);
v_val_1782_ = lean_ctor_get(v_a_1776_, 0);
lean_inc(v_val_1782_);
lean_dec_ref_known(v_a_1776_, 1);
v___x_1783_ = l_List_appendTR___redArg(v_val_1782_, v_tail_1755_);
v_n_968_ = v_n_1582_;
v_curr_969_ = v___x_1783_;
goto _start;
}
}
else
{
lean_object* v_a_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1792_; 
lean_del_object(v___x_1757_);
lean_dec(v_tail_1755_);
lean_dec(v_head_1754_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
v_a_1785_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1792_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1787_ = v___x_1775_;
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_a_1785_);
lean_dec(v___x_1775_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1790_; 
if (v_isShared_1788_ == 0)
{
v___x_1790_ = v___x_1787_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_a_1785_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
}
else
{
lean_del_object(v___x_1757_);
lean_dec(v_tail_1755_);
lean_dec(v_head_1754_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
return v___x_1771_;
}
}
else
{
lean_dec(v_a_1772_);
lean_del_object(v___x_1757_);
lean_dec(v_tail_1755_);
lean_dec(v_head_1754_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
return v___x_1771_;
}
}
}
else
{
lean_object* v___x_1793_; lean_object* v___x_1795_; 
lean_dec_ref(v___f_1759_);
v___x_1793_ = lean_nat_add(v_n_1582_, v_one_1581_);
lean_dec(v_n_1582_);
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 1, v_acc_970_);
v___x_1795_ = v___x_1757_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v_head_1754_);
lean_ctor_set(v_reuseFailAlloc_1797_, 1, v_acc_970_);
v___x_1795_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
v_n_968_ = v___x_1793_;
v_curr_969_ = v_tail_1755_;
v_acc_970_ = v___x_1795_;
goto _start;
}
}
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1805_; 
lean_dec_ref(v___f_1759_);
lean_del_object(v___x_1757_);
lean_dec(v_tail_1755_);
lean_dec(v_head_1754_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
v_a_1798_ = lean_ctor_get(v___x_1768_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1800_ = v___x_1768_;
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v___x_1768_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1803_; 
if (v_isShared_1801_ == 0)
{
v___x_1803_ = v___x_1800_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1798_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
}
}
else
{
lean_object* v_inheritedTraceOptions_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; uint8_t v___x_1810_; 
v_inheritedTraceOptions_1806_ = lean_ctor_get(v_toCold_1765_, 11);
v___x_1807_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__9));
v___x_1808_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__8));
lean_inc(v_trace_965_);
v___x_1809_ = l_Lean_Name_append(v___x_1808_, v_trace_965_);
v___x_1810_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1806_, v_options_1766_, v___x_1809_);
lean_dec(v___x_1809_);
if (v___x_1810_ == 0)
{
lean_object* v___x_1811_; uint8_t v___x_1812_; 
v___x_1811_ = l_Lean_trace_profiler;
v___x_1812_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_options_1766_, v___x_1811_);
if (v___x_1812_ == 0)
{
lean_object* v___x_1813_; 
lean_dec_ref(v___f_1761_);
lean_inc_ref(v_suspend_1165_);
lean_inc(v_a_974_);
lean_inc_ref(v_a_973_);
lean_inc(v_a_972_);
lean_inc_ref(v_a_971_);
lean_inc(v_head_1754_);
v___x_1813_ = lean_apply_6(v_suspend_1165_, v_head_1754_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, lean_box(0));
if (lean_obj_tag(v___x_1813_) == 0)
{
lean_object* v_a_1814_; uint8_t v___x_1815_; 
v_a_1814_ = lean_ctor_get(v___x_1813_, 0);
lean_inc(v_a_1814_);
lean_dec_ref_known(v___x_1813_, 1);
v___x_1815_ = lean_unbox(v_a_1814_);
if (v___x_1815_ == 0)
{
lean_object* v___x_1816_; 
lean_dec(v_a_1814_);
lean_inc_ref(v_next_966_);
lean_inc(v_a_974_);
lean_inc_ref(v_a_973_);
lean_inc(v_a_972_);
lean_inc_ref(v_a_971_);
lean_inc(v_head_1754_);
v___x_1816_ = lean_apply_7(v_next_966_, v_head_1754_, v___f_1759_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, lean_box(0));
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_del_object(v___x_1757_);
lean_dec(v_tail_1755_);
lean_dec(v_head_1754_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
return v___x_1816_;
}
else
{
lean_object* v_a_1817_; uint8_t v___x_1818_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_a_1817_);
v___x_1818_ = l_Lean_Exception_isInterrupt(v_a_1817_);
if (v___x_1818_ == 0)
{
uint8_t v___x_1819_; 
v___x_1819_ = l_Lean_Exception_isRuntime(v_a_1817_);
if (v___x_1819_ == 0)
{
lean_object* v___x_1820_; 
lean_dec_ref_known(v___x_1816_, 1);
lean_inc_ref(v_discharge_1166_);
lean_inc(v_a_974_);
lean_inc_ref(v_a_973_);
lean_inc(v_a_972_);
lean_inc_ref(v_a_971_);
lean_inc(v_head_1754_);
v___x_1820_ = lean_apply_6(v_discharge_1166_, v_head_1754_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, lean_box(0));
if (lean_obj_tag(v___x_1820_) == 0)
{
lean_object* v_a_1821_; 
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_a_1821_);
lean_dec_ref_known(v___x_1820_, 1);
if (lean_obj_tag(v_a_1821_) == 0)
{
lean_object* v___x_1822_; lean_object* v___x_1824_; 
v___x_1822_ = lean_nat_add(v_n_1582_, v_one_1581_);
lean_dec(v_n_1582_);
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 1, v_acc_970_);
v___x_1824_ = v___x_1757_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v_head_1754_);
lean_ctor_set(v_reuseFailAlloc_1866_, 1, v_acc_970_);
v___x_1824_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
if (v___x_1810_ == 0)
{
v_n_968_ = v___x_1822_;
v_curr_969_ = v_tail_1755_;
v_acc_970_ = v___x_1824_;
goto _start;
}
else
{
lean_object* v___x_1826_; lean_object* v_a_1827_; lean_object* v___x_1828_; uint8_t v___x_1829_; 
v___x_1826_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_974_);
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
lean_inc(v_a_1827_);
lean_dec_ref(v___x_1826_);
v___x_1828_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1829_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_options_1766_, v___x_1828_);
if (v___x_1829_ == 0)
{
lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1830_ = lean_io_mono_nanos_now();
lean_inc(v_trace_965_);
v___x_1831_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v___x_1822_, v_tail_1755_, v___x_1824_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1839_; 
v_a_1832_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1834_ = v___x_1831_;
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1831_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1837_; 
if (v_isShared_1835_ == 0)
{
lean_ctor_set_tag(v___x_1834_, 1);
v___x_1837_ = v___x_1834_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1832_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
v___y_1528_ = v___x_1810_;
v___y_1529_ = v_options_1766_;
v___y_1530_ = v___x_1830_;
v___y_1531_ = v_hasTrace_1767_;
v___y_1532_ = v_a_1827_;
v___y_1533_ = v___x_1807_;
v_a_1534_ = v___x_1837_;
goto v___jp_1527_;
}
}
}
else
{
lean_object* v_a_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1847_; 
v_a_1840_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1842_ = v___x_1831_;
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_a_1840_);
lean_dec(v___x_1831_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1845_; 
if (v_isShared_1843_ == 0)
{
lean_ctor_set_tag(v___x_1842_, 0);
v___x_1845_ = v___x_1842_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_a_1840_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
v___y_1528_ = v___x_1810_;
v___y_1529_ = v_options_1766_;
v___y_1530_ = v___x_1830_;
v___y_1531_ = v_hasTrace_1767_;
v___y_1532_ = v_a_1827_;
v___y_1533_ = v___x_1807_;
v_a_1534_ = v___x_1845_;
goto v___jp_1527_;
}
}
}
}
else
{
lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1848_ = lean_io_get_num_heartbeats();
lean_inc(v_trace_965_);
v___x_1849_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v___x_1822_, v_tail_1755_, v___x_1824_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1857_; 
v_a_1850_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1852_ = v___x_1849_;
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1849_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
lean_ctor_set_tag(v___x_1852_, 1);
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_a_1850_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
v___y_1512_ = v___x_1810_;
v___y_1513_ = v_options_1766_;
v___y_1514_ = v_hasTrace_1767_;
v___y_1515_ = v_a_1827_;
v___y_1516_ = v___x_1807_;
v___y_1517_ = v___x_1848_;
v_a_1518_ = v___x_1855_;
goto v___jp_1511_;
}
}
}
else
{
lean_object* v_a_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1865_; 
v_a_1858_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1860_ = v___x_1849_;
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_a_1858_);
lean_dec(v___x_1849_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1863_; 
if (v_isShared_1861_ == 0)
{
lean_ctor_set_tag(v___x_1860_, 0);
v___x_1863_ = v___x_1860_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_a_1858_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
v___y_1512_ = v___x_1810_;
v___y_1513_ = v_options_1766_;
v___y_1514_ = v_hasTrace_1767_;
v___y_1515_ = v_a_1827_;
v___y_1516_ = v___x_1807_;
v___y_1517_ = v___x_1848_;
v_a_1518_ = v___x_1863_;
goto v___jp_1511_;
}
}
}
}
}
}
}
else
{
lean_object* v_val_1867_; lean_object* v___x_1868_; 
lean_del_object(v___x_1757_);
lean_dec(v_head_1754_);
v_val_1867_ = lean_ctor_get(v_a_1821_, 0);
lean_inc(v_val_1867_);
lean_dec_ref_known(v_a_1821_, 1);
v___x_1868_ = l_List_appendTR___redArg(v_val_1867_, v_tail_1755_);
if (v___x_1810_ == 0)
{
v_n_968_ = v_n_1582_;
v_curr_969_ = v___x_1868_;
goto _start;
}
else
{
lean_object* v___x_1870_; lean_object* v_a_1871_; lean_object* v___x_1872_; uint8_t v___x_1873_; 
v___x_1870_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_974_);
v_a_1871_ = lean_ctor_get(v___x_1870_, 0);
lean_inc(v_a_1871_);
lean_dec_ref(v___x_1870_);
v___x_1872_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1873_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_options_1766_, v___x_1872_);
if (v___x_1873_ == 0)
{
lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1874_ = lean_io_mono_nanos_now();
lean_inc(v_trace_965_);
v___x_1875_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v_n_1582_, v___x_1868_, v_acc_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
if (lean_obj_tag(v___x_1875_) == 0)
{
lean_object* v_a_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1883_; 
v_a_1876_ = lean_ctor_get(v___x_1875_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1875_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1878_ = v___x_1875_;
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_a_1876_);
lean_dec(v___x_1875_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v___x_1881_; 
if (v_isShared_1879_ == 0)
{
lean_ctor_set_tag(v___x_1878_, 1);
v___x_1881_ = v___x_1878_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v_a_1876_);
v___x_1881_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
v___y_1211_ = v_options_1766_;
v___y_1212_ = v_hasTrace_1767_;
v___y_1213_ = v___x_1874_;
v___y_1214_ = v___x_1807_;
v___y_1215_ = v___x_1810_;
v___y_1216_ = v_a_1871_;
v_a_1217_ = v___x_1881_;
goto v___jp_1210_;
}
}
}
else
{
lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
v_a_1884_ = lean_ctor_get(v___x_1875_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1875_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1886_ = v___x_1875_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v___x_1875_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
lean_ctor_set_tag(v___x_1886_, 0);
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
v___y_1211_ = v_options_1766_;
v___y_1212_ = v_hasTrace_1767_;
v___y_1213_ = v___x_1874_;
v___y_1214_ = v___x_1807_;
v___y_1215_ = v___x_1810_;
v___y_1216_ = v_a_1871_;
v_a_1217_ = v___x_1889_;
goto v___jp_1210_;
}
}
}
}
else
{
lean_object* v___x_1892_; lean_object* v___x_1893_; 
v___x_1892_ = lean_io_get_num_heartbeats();
lean_inc(v_trace_965_);
v___x_1893_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v_n_1582_, v___x_1868_, v_acc_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
if (lean_obj_tag(v___x_1893_) == 0)
{
lean_object* v_a_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1901_; 
v_a_1894_ = lean_ctor_get(v___x_1893_, 0);
v_isSharedCheck_1901_ = !lean_is_exclusive(v___x_1893_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1896_ = v___x_1893_;
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_a_1894_);
lean_dec(v___x_1893_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1899_; 
if (v_isShared_1897_ == 0)
{
lean_ctor_set_tag(v___x_1896_, 1);
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
v___y_1230_ = v_options_1766_;
v___y_1231_ = v_hasTrace_1767_;
v___y_1232_ = v___x_1807_;
v___y_1233_ = v___x_1810_;
v___y_1234_ = v___x_1892_;
v___y_1235_ = v_a_1871_;
v_a_1236_ = v___x_1899_;
goto v___jp_1229_;
}
}
}
else
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
v_a_1902_ = lean_ctor_get(v___x_1893_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1893_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1893_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1893_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
lean_ctor_set_tag(v___x_1904_, 0);
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1902_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
v___y_1230_ = v_options_1766_;
v___y_1231_ = v_hasTrace_1767_;
v___y_1232_ = v___x_1807_;
v___y_1233_ = v___x_1810_;
v___y_1234_ = v___x_1892_;
v___y_1235_ = v_a_1871_;
v_a_1236_ = v___x_1907_;
goto v___jp_1229_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_del_object(v___x_1757_);
lean_dec(v_tail_1755_);
lean_dec(v_head_1754_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
v_a_1910_ = lean_ctor_get(v___x_1820_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1820_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1820_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
}
else
{
lean_del_object(v___x_1757_);
lean_dec(v_tail_1755_);
lean_dec(v_head_1754_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
return v___x_1816_;
}
}
else
{
lean_dec(v_a_1817_);
lean_del_object(v___x_1757_);
lean_dec(v_tail_1755_);
lean_dec(v_head_1754_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
return v___x_1816_;
}
}
}
else
{
lean_object* v___x_1918_; lean_object* v___x_1920_; 
lean_dec_ref(v___f_1759_);
v___x_1918_ = lean_nat_add(v_n_1582_, v_one_1581_);
lean_dec(v_n_1582_);
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 1, v_acc_970_);
v___x_1920_ = v___x_1757_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v_head_1754_);
lean_ctor_set(v_reuseFailAlloc_1966_, 1, v_acc_970_);
v___x_1920_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
if (v___x_1810_ == 0)
{
lean_dec(v_a_1814_);
v_n_968_ = v___x_1918_;
v_curr_969_ = v_tail_1755_;
v_acc_970_ = v___x_1920_;
goto _start;
}
else
{
lean_object* v___x_1922_; lean_object* v_a_1923_; lean_object* v___x_1924_; uint8_t v___x_1925_; 
v___x_1922_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_974_);
v_a_1923_ = lean_ctor_get(v___x_1922_, 0);
lean_inc(v_a_1923_);
lean_dec_ref(v___x_1922_);
v___x_1924_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1925_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_options_1766_, v___x_1924_);
if (v___x_1925_ == 0)
{
lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1926_ = lean_io_mono_nanos_now();
lean_inc(v_trace_965_);
v___x_1927_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v___x_1918_, v_tail_1755_, v___x_1920_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
if (lean_obj_tag(v___x_1927_) == 0)
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1936_; 
v_a_1928_ = lean_ctor_get(v___x_1927_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1930_ = v___x_1927_;
v_isShared_1931_ = v_isSharedCheck_1936_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1927_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1936_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1933_; 
if (v_isShared_1931_ == 0)
{
lean_ctor_set_tag(v___x_1930_, 1);
v___x_1933_ = v___x_1930_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v_a_1928_);
v___x_1933_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
uint8_t v___x_1934_; 
v___x_1934_ = lean_unbox(v_a_1814_);
lean_dec(v_a_1814_);
v___y_1547_ = v_options_1766_;
v___y_1548_ = v___x_1934_;
v___y_1549_ = v___x_1807_;
v___y_1550_ = v___x_1926_;
v___y_1551_ = v_a_1923_;
v___y_1552_ = v___x_1810_;
v_a_1553_ = v___x_1933_;
goto v___jp_1546_;
}
}
}
else
{
lean_object* v_a_1937_; lean_object* v___x_1939_; uint8_t v_isShared_1940_; uint8_t v_isSharedCheck_1945_; 
v_a_1937_ = lean_ctor_get(v___x_1927_, 0);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1939_ = v___x_1927_;
v_isShared_1940_ = v_isSharedCheck_1945_;
goto v_resetjp_1938_;
}
else
{
lean_inc(v_a_1937_);
lean_dec(v___x_1927_);
v___x_1939_ = lean_box(0);
v_isShared_1940_ = v_isSharedCheck_1945_;
goto v_resetjp_1938_;
}
v_resetjp_1938_:
{
lean_object* v___x_1942_; 
if (v_isShared_1940_ == 0)
{
lean_ctor_set_tag(v___x_1939_, 0);
v___x_1942_ = v___x_1939_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_a_1937_);
v___x_1942_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
uint8_t v___x_1943_; 
v___x_1943_ = lean_unbox(v_a_1814_);
lean_dec(v_a_1814_);
v___y_1547_ = v_options_1766_;
v___y_1548_ = v___x_1943_;
v___y_1549_ = v___x_1807_;
v___y_1550_ = v___x_1926_;
v___y_1551_ = v_a_1923_;
v___y_1552_ = v___x_1810_;
v_a_1553_ = v___x_1942_;
goto v___jp_1546_;
}
}
}
}
else
{
lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1946_ = lean_io_get_num_heartbeats();
lean_inc(v_trace_965_);
v___x_1947_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v___x_1918_, v_tail_1755_, v___x_1920_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1956_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1956_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1950_ = v___x_1947_;
v_isShared_1951_ = v_isSharedCheck_1956_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1947_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1956_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1953_; 
if (v_isShared_1951_ == 0)
{
lean_ctor_set_tag(v___x_1950_, 1);
v___x_1953_ = v___x_1950_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v_a_1948_);
v___x_1953_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
uint8_t v___x_1954_; 
v___x_1954_ = lean_unbox(v_a_1814_);
lean_dec(v_a_1814_);
v___y_1566_ = v_options_1766_;
v___y_1567_ = v___x_1954_;
v___y_1568_ = v___x_1946_;
v___y_1569_ = v___x_1807_;
v___y_1570_ = v_a_1923_;
v___y_1571_ = v___x_1810_;
v_a_1572_ = v___x_1953_;
goto v___jp_1565_;
}
}
}
else
{
lean_object* v_a_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1965_; 
v_a_1957_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1959_ = v___x_1947_;
v_isShared_1960_ = v_isSharedCheck_1965_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_a_1957_);
lean_dec(v___x_1947_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1965_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1962_; 
if (v_isShared_1960_ == 0)
{
lean_ctor_set_tag(v___x_1959_, 0);
v___x_1962_ = v___x_1959_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1957_);
v___x_1962_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
uint8_t v___x_1963_; 
v___x_1963_ = lean_unbox(v_a_1814_);
lean_dec(v_a_1814_);
v___y_1566_ = v_options_1766_;
v___y_1567_ = v___x_1963_;
v___y_1568_ = v___x_1946_;
v___y_1569_ = v___x_1807_;
v___y_1570_ = v_a_1923_;
v___y_1571_ = v___x_1810_;
v_a_1572_ = v___x_1962_;
goto v___jp_1565_;
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
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
lean_dec_ref(v___f_1759_);
lean_del_object(v___x_1757_);
lean_dec(v_tail_1755_);
lean_dec(v_head_1754_);
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
v_a_1967_ = lean_ctor_get(v___x_1813_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1813_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v___x_1813_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1813_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_a_1967_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
}
else
{
lean_del_object(v___x_1757_);
lean_inc_ref(v_suspend_1165_);
lean_inc_ref(v___f_1759_);
lean_inc_ref(v_discharge_1166_);
v___y_1645_ = v_hasTrace_1767_;
v___y_1646_ = v___x_1807_;
v___y_1647_ = v_discharge_1166_;
v___y_1648_ = v___f_1759_;
v___y_1649_ = v___f_1761_;
v___y_1650_ = v_inheritedTraceOptions_1806_;
v___y_1651_ = v_options_1766_;
v___y_1652_ = v___x_1810_;
v___y_1653_ = v_suspend_1165_;
v___y_1654_ = v_head_1754_;
v___y_1655_ = v___f_1759_;
v___y_1656_ = v_tail_1755_;
goto v___jp_1644_;
}
}
else
{
lean_del_object(v___x_1757_);
lean_inc_ref(v_suspend_1165_);
lean_inc_ref(v___f_1759_);
lean_inc_ref(v_discharge_1166_);
v___y_1645_ = v_hasTrace_1767_;
v___y_1646_ = v___x_1807_;
v___y_1647_ = v_discharge_1166_;
v___y_1648_ = v___f_1759_;
v___y_1649_ = v___f_1761_;
v___y_1650_ = v_inheritedTraceOptions_1806_;
v___y_1651_ = v_options_1766_;
v___y_1652_ = v___x_1810_;
v___y_1653_ = v_suspend_1165_;
v___y_1654_ = v_head_1754_;
v___y_1655_ = v___f_1759_;
v___y_1656_ = v_tail_1755_;
goto v___jp_1644_;
}
}
}
else
{
lean_object* v_toCold_1975_; lean_object* v_options_1976_; lean_object* v_inheritedTraceOptions_1977_; uint8_t v_hasTrace_1978_; lean_object* v___x_1979_; 
lean_dec_ref(v___f_1761_);
lean_dec_ref(v___f_1759_);
lean_del_object(v___x_1757_);
lean_dec(v_head_1754_);
v_toCold_1975_ = lean_ctor_get(v_a_973_, 0);
v_options_1976_ = lean_ctor_get(v_toCold_1975_, 2);
v_inheritedTraceOptions_1977_ = lean_ctor_get(v_toCold_1975_, 11);
v_hasTrace_1978_ = lean_ctor_get_uint8(v_options_1976_, sizeof(void*)*1);
v___x_1979_ = lean_nat_add(v_n_1582_, v_one_1581_);
lean_dec(v_n_1582_);
if (v_hasTrace_1978_ == 0)
{
lean_dec(v_a_1763_);
lean_dec_ref(v___f_1760_);
v_n_968_ = v___x_1979_;
v_curr_969_ = v_tail_1755_;
goto _start;
}
else
{
lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; uint8_t v___x_1984_; 
v___x_1981_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__9));
v___x_1982_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__8));
lean_inc(v_trace_965_);
v___x_1983_ = l_Lean_Name_append(v___x_1982_, v_trace_965_);
v___x_1984_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1977_, v_options_1976_, v___x_1983_);
lean_dec(v___x_1983_);
if (v___x_1984_ == 0)
{
lean_object* v___x_1985_; uint8_t v___x_1986_; 
v___x_1985_ = l_Lean_trace_profiler;
v___x_1986_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_options_1976_, v___x_1985_);
if (v___x_1986_ == 0)
{
lean_dec(v_a_1763_);
lean_dec_ref(v___f_1760_);
v_n_968_ = v___x_1979_;
v_curr_969_ = v_tail_1755_;
goto _start;
}
else
{
uint8_t v___x_1988_; 
v___x_1988_ = lean_unbox(v_a_1763_);
lean_dec(v_a_1763_);
v___y_1014_ = v___x_1984_;
v___y_1015_ = v___x_1981_;
v___y_1016_ = v___f_1760_;
v___y_1017_ = v___x_1988_;
v___y_1018_ = v___x_1979_;
v___y_1019_ = v_options_1976_;
v___y_1020_ = v_tail_1755_;
goto v___jp_1013_;
}
}
else
{
uint8_t v___x_1989_; 
v___x_1989_ = lean_unbox(v_a_1763_);
lean_dec(v_a_1763_);
v___y_1014_ = v___x_1984_;
v___y_1015_ = v___x_1981_;
v___y_1016_ = v___f_1760_;
v___y_1017_ = v___x_1989_;
v___y_1018_ = v___x_1979_;
v___y_1019_ = v_options_1976_;
v___y_1020_ = v_tail_1755_;
goto v___jp_1013_;
}
}
}
}
}
}
else
{
lean_object* v_val_1991_; 
lean_dec(v_curr_969_);
v_val_1991_ = lean_ctor_get(v_a_1740_, 0);
lean_inc(v_val_1991_);
lean_dec_ref_known(v_a_1740_, 1);
v_n_968_ = v_n_1582_;
v_curr_969_ = v_val_1991_;
goto _start;
}
}
v___jp_1993_:
{
if (lean_obj_tag(v___y_1994_) == 0)
{
lean_object* v_a_1995_; 
v_a_1995_ = lean_ctor_get(v___y_1994_, 0);
lean_inc(v_a_1995_);
lean_dec_ref_known(v___y_1994_, 1);
v_a_1740_ = v_a_1995_;
goto v___jp_1739_;
}
else
{
lean_object* v_a_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2003_; 
lean_dec(v_n_1582_);
lean_dec(v_acc_970_);
lean_dec(v_curr_969_);
lean_dec(v_goals_967_);
lean_dec_ref(v_next_966_);
lean_dec(v_trace_965_);
lean_dec_ref(v_cfg_964_);
v_a_1996_ = lean_ctor_get(v___y_1994_, 0);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___y_1994_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1998_ = v___y_1994_;
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_a_1996_);
lean_dec(v___y_1994_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2001_; 
if (v_isShared_1999_ == 0)
{
v___x_2001_ = v___x_1998_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v_a_1996_);
v___x_2001_ = v_reuseFailAlloc_2002_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
return v___x_2001_;
}
}
}
}
}
v___jp_976_:
{
lean_object* v___x_985_; double v___x_986_; double v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_985_ = lean_io_get_num_heartbeats();
v___x_986_ = lean_float_of_nat(v___y_983_);
v___x_987_ = lean_float_of_nat(v___x_985_);
v___x_988_ = lean_box_float(v___x_986_);
v___x_989_ = lean_box_float(v___x_987_);
v___x_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_988_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_991_, 0, v_a_984_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
lean_inc_ref(v___y_978_);
v___x_992_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_981_, v___y_978_, v___y_982_, v___y_977_, v___y_979_, v___y_980_, v___x_991_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
return v___x_992_;
}
v___jp_993_:
{
lean_object* v___x_1002_; double v___x_1003_; double v___x_1004_; double v___x_1005_; double v___x_1006_; double v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1002_ = lean_io_mono_nanos_now();
v___x_1003_ = lean_float_of_nat(v___y_996_);
v___x_1004_ = lean_float_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0);
v___x_1005_ = lean_float_div(v___x_1003_, v___x_1004_);
v___x_1006_ = lean_float_of_nat(v___x_1002_);
v___x_1007_ = lean_float_div(v___x_1006_, v___x_1004_);
v___x_1008_ = lean_box_float(v___x_1005_);
v___x_1009_ = lean_box_float(v___x_1007_);
v___x_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1008_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
v___x_1011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1011_, 0, v_a_1001_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
lean_inc_ref(v___y_995_);
v___x_1012_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_999_, v___y_995_, v___y_1000_, v___y_994_, v___y_997_, v___y_998_, v___x_1011_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
return v___x_1012_;
}
v___jp_1013_:
{
lean_object* v___x_1021_; lean_object* v_a_1022_; lean_object* v___x_1023_; uint8_t v___x_1024_; 
v___x_1021_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_974_);
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1022_);
lean_dec_ref(v___x_1021_);
v___x_1023_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1024_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v___y_1019_, v___x_1023_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = lean_io_mono_nanos_now();
lean_inc(v_trace_965_);
v___x_1026_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v___y_1018_, v___y_1020_, v_acc_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
if (lean_obj_tag(v___x_1026_) == 0)
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
v_a_1027_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_1026_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_1026_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
lean_ctor_set_tag(v___x_1029_, 1);
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
v___y_994_ = v___y_1014_;
v___y_995_ = v___y_1015_;
v___y_996_ = v___x_1025_;
v___y_997_ = v_a_1022_;
v___y_998_ = v___y_1016_;
v___y_999_ = v___y_1017_;
v___y_1000_ = v___y_1019_;
v_a_1001_ = v___x_1032_;
goto v___jp_993_;
}
}
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
v_a_1035_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1026_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1026_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
lean_ctor_set_tag(v___x_1037_, 0);
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
v___y_994_ = v___y_1014_;
v___y_995_ = v___y_1015_;
v___y_996_ = v___x_1025_;
v___y_997_ = v_a_1022_;
v___y_998_ = v___y_1016_;
v___y_999_ = v___y_1017_;
v___y_1000_ = v___y_1019_;
v_a_1001_ = v___x_1040_;
goto v___jp_993_;
}
}
}
}
else
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = lean_io_get_num_heartbeats();
lean_inc(v_trace_965_);
v___x_1044_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_964_, v_trace_965_, v_next_966_, v_goals_967_, v___y_1018_, v___y_1020_, v_acc_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v_a_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1052_; 
v_a_1045_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1047_ = v___x_1044_;
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_a_1045_);
lean_dec(v___x_1044_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1050_; 
if (v_isShared_1048_ == 0)
{
lean_ctor_set_tag(v___x_1047_, 1);
v___x_1050_ = v___x_1047_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_a_1045_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
v___y_977_ = v___y_1014_;
v___y_978_ = v___y_1015_;
v___y_979_ = v_a_1022_;
v___y_980_ = v___y_1016_;
v___y_981_ = v___y_1017_;
v___y_982_ = v___y_1019_;
v___y_983_ = v___x_1043_;
v_a_984_ = v___x_1050_;
goto v___jp_976_;
}
}
}
else
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1060_; 
v_a_1053_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1055_ = v___x_1044_;
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v___x_1044_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1058_; 
if (v_isShared_1056_ == 0)
{
lean_ctor_set_tag(v___x_1055_, 0);
v___x_1058_ = v___x_1055_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_a_1053_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
v___y_977_ = v___y_1014_;
v___y_978_ = v___y_1015_;
v___y_979_ = v_a_1022_;
v___y_980_ = v___y_1016_;
v___y_981_ = v___y_1017_;
v___y_982_ = v___y_1019_;
v___y_983_ = v___x_1043_;
v_a_984_ = v___x_1058_;
goto v___jp_976_;
}
}
}
}
}
v___jp_1061_:
{
lean_object* v___x_1070_; double v___x_1071_; double v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1070_ = lean_io_get_num_heartbeats();
v___x_1071_ = lean_float_of_nat(v___y_1064_);
v___x_1072_ = lean_float_of_nat(v___x_1070_);
v___x_1073_ = lean_box_float(v___x_1071_);
v___x_1074_ = lean_box_float(v___x_1072_);
v___x_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1073_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
v___x_1076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1076_, 0, v_a_1069_);
lean_ctor_set(v___x_1076_, 1, v___x_1075_);
lean_inc_ref(v___y_1067_);
v___x_1077_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1066_, v___y_1067_, v___y_1062_, v___y_1065_, v___y_1063_, v___y_1068_, v___x_1076_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
return v___x_1077_;
}
v___jp_1078_:
{
lean_object* v___x_1087_; 
v___x_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1087_, 0, v_a_1086_);
v___y_1062_ = v___y_1079_;
v___y_1063_ = v___y_1080_;
v___y_1064_ = v___y_1081_;
v___y_1065_ = v___y_1083_;
v___y_1066_ = v___y_1082_;
v___y_1067_ = v___y_1084_;
v___y_1068_ = v___y_1085_;
v_a_1069_ = v___x_1087_;
goto v___jp_1061_;
}
v___jp_1088_:
{
lean_object* v___x_1097_; 
v___x_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1097_, 0, v_a_1096_);
v___y_1062_ = v___y_1089_;
v___y_1063_ = v___y_1090_;
v___y_1064_ = v___y_1091_;
v___y_1065_ = v___y_1093_;
v___y_1066_ = v___y_1092_;
v___y_1067_ = v___y_1094_;
v___y_1068_ = v___y_1095_;
v_a_1069_ = v___x_1097_;
goto v___jp_1061_;
}
v___jp_1098_:
{
if (lean_obj_tag(v___y_1106_) == 0)
{
lean_object* v_a_1107_; 
v_a_1107_ = lean_ctor_get(v___y_1106_, 0);
lean_inc(v_a_1107_);
lean_dec_ref_known(v___y_1106_, 1);
v___y_1089_ = v___y_1099_;
v___y_1090_ = v___y_1100_;
v___y_1091_ = v___y_1101_;
v___y_1092_ = v___y_1103_;
v___y_1093_ = v___y_1102_;
v___y_1094_ = v___y_1104_;
v___y_1095_ = v___y_1105_;
v_a_1096_ = v_a_1107_;
goto v___jp_1088_;
}
else
{
lean_object* v_a_1108_; 
v_a_1108_ = lean_ctor_get(v___y_1106_, 0);
lean_inc(v_a_1108_);
lean_dec_ref_known(v___y_1106_, 1);
v___y_1079_ = v___y_1099_;
v___y_1080_ = v___y_1100_;
v___y_1081_ = v___y_1101_;
v___y_1082_ = v___y_1103_;
v___y_1083_ = v___y_1102_;
v___y_1084_ = v___y_1104_;
v___y_1085_ = v___y_1105_;
v_a_1086_ = v_a_1108_;
goto v___jp_1078_;
}
}
v___jp_1109_:
{
lean_object* v___x_1118_; double v___x_1119_; double v___x_1120_; double v___x_1121_; double v___x_1122_; double v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1118_ = lean_io_mono_nanos_now();
v___x_1119_ = lean_float_of_nat(v___y_1115_);
v___x_1120_ = lean_float_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0);
v___x_1121_ = lean_float_div(v___x_1119_, v___x_1120_);
v___x_1122_ = lean_float_of_nat(v___x_1118_);
v___x_1123_ = lean_float_div(v___x_1122_, v___x_1120_);
v___x_1124_ = lean_box_float(v___x_1121_);
v___x_1125_ = lean_box_float(v___x_1123_);
v___x_1126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1124_);
lean_ctor_set(v___x_1126_, 1, v___x_1125_);
v___x_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1127_, 0, v_a_1117_);
lean_ctor_set(v___x_1127_, 1, v___x_1126_);
lean_inc_ref(v___y_1114_);
v___x_1128_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_965_, v___y_1113_, v___y_1114_, v___y_1110_, v___y_1112_, v___y_1111_, v___y_1116_, v___x_1127_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
return v___x_1128_;
}
v___jp_1129_:
{
lean_object* v___x_1138_; 
v___x_1138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1138_, 0, v_a_1137_);
v___y_1110_ = v___y_1130_;
v___y_1111_ = v___y_1131_;
v___y_1112_ = v___y_1133_;
v___y_1113_ = v___y_1132_;
v___y_1114_ = v___y_1134_;
v___y_1115_ = v___y_1135_;
v___y_1116_ = v___y_1136_;
v_a_1117_ = v___x_1138_;
goto v___jp_1109_;
}
v___jp_1139_:
{
lean_object* v___x_1148_; 
v___x_1148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1148_, 0, v_a_1147_);
v___y_1110_ = v___y_1140_;
v___y_1111_ = v___y_1141_;
v___y_1112_ = v___y_1143_;
v___y_1113_ = v___y_1142_;
v___y_1114_ = v___y_1144_;
v___y_1115_ = v___y_1145_;
v___y_1116_ = v___y_1146_;
v_a_1117_ = v___x_1148_;
goto v___jp_1109_;
}
v___jp_1149_:
{
if (lean_obj_tag(v___y_1157_) == 0)
{
lean_object* v_a_1158_; 
v_a_1158_ = lean_ctor_get(v___y_1157_, 0);
lean_inc(v_a_1158_);
lean_dec_ref_known(v___y_1157_, 1);
v___y_1140_ = v___y_1150_;
v___y_1141_ = v___y_1151_;
v___y_1142_ = v___y_1153_;
v___y_1143_ = v___y_1152_;
v___y_1144_ = v___y_1154_;
v___y_1145_ = v___y_1155_;
v___y_1146_ = v___y_1156_;
v_a_1147_ = v_a_1158_;
goto v___jp_1139_;
}
else
{
lean_object* v_a_1159_; 
v_a_1159_ = lean_ctor_get(v___y_1157_, 0);
lean_inc(v_a_1159_);
lean_dec_ref_known(v___y_1157_, 1);
v___y_1130_ = v___y_1150_;
v___y_1131_ = v___y_1151_;
v___y_1132_ = v___y_1153_;
v___y_1133_ = v___y_1152_;
v___y_1134_ = v___y_1154_;
v___y_1135_ = v___y_1155_;
v___y_1136_ = v___y_1156_;
v_a_1137_ = v_a_1159_;
goto v___jp_1129_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___boxed(lean_object* v_cfg_2072_, lean_object* v_trace_2073_, lean_object* v_next_2074_, lean_object* v_goals_2075_, lean_object* v_n_2076_, lean_object* v_curr_2077_, lean_object* v_acc_2078_, lean_object* v_a_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_){
_start:
{
lean_object* v_res_2084_; 
v_res_2084_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_2072_, v_trace_2073_, v_next_2074_, v_goals_2075_, v_n_2076_, v_curr_2077_, v_acc_2078_, v_a_2079_, v_a_2080_, v_a_2081_, v_a_2082_);
lean_dec(v_a_2082_);
lean_dec_ref(v_a_2081_);
lean_dec(v_a_2080_);
lean_dec_ref(v_a_2079_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___lam__8(lean_object* v_tail_2085_, lean_object* v_cfg_2086_, lean_object* v_trace_2087_, lean_object* v_next_2088_, lean_object* v_goals_2089_, lean_object* v_n_2090_, lean_object* v_acc_2091_, lean_object* v_r_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_){
_start:
{
lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2098_ = l_List_appendTR___redArg(v_r_2092_, v_tail_2085_);
v___x_2099_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___boxed), 12, 7);
lean_closure_set(v___x_2099_, 0, v_cfg_2086_);
lean_closure_set(v___x_2099_, 1, v_trace_2087_);
lean_closure_set(v___x_2099_, 2, v_next_2088_);
lean_closure_set(v___x_2099_, 3, v_goals_2089_);
lean_closure_set(v___x_2099_, 4, v_n_2090_);
lean_closure_set(v___x_2099_, 5, v___x_2098_);
lean_closure_set(v___x_2099_, 6, v_acc_2091_);
v___x_2100_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__4___redArg(v___x_2099_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0(lean_object* v_00_u03b1_2101_, lean_object* v_msg_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_){
_start:
{
lean_object* v___x_2108_; 
v___x_2108_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___redArg(v_msg_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
return v___x_2108_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___boxed(lean_object* v_00_u03b1_2109_, lean_object* v_msg_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_){
_start:
{
lean_object* v_res_2116_; 
v_res_2116_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0(v_00_u03b1_2109_, v_msg_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_);
lean_dec(v___y_2114_);
lean_dec_ref(v___y_2113_);
lean_dec(v___y_2112_);
lean_dec_ref(v___y_2111_);
return v_res_2116_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__4(lean_object* v_00_u03b1_2117_, lean_object* v_x_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_){
_start:
{
lean_object* v___x_2124_; 
v___x_2124_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__4___redArg(v_x_2118_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__4___boxed(lean_object* v_00_u03b1_2125_, lean_object* v_x_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_){
_start:
{
lean_object* v_res_2132_; 
v_res_2132_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3_spec__4(v_00_u03b1_2125_, v_x_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6(lean_object* v_mvarId_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_){
_start:
{
lean_object* v___x_2139_; 
v___x_2139_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6___redArg(v_mvarId_2133_, v___y_2135_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6___boxed(lean_object* v_mvarId_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_){
_start:
{
lean_object* v_res_2146_; 
v_res_2146_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6(v_mvarId_2140_, v___y_2141_, v___y_2142_, v___y_2143_, v___y_2144_);
lean_dec(v___y_2144_);
lean_dec_ref(v___y_2143_);
lean_dec(v___y_2142_);
lean_dec_ref(v___y_2141_);
lean_dec(v_mvarId_2140_);
return v_res_2146_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10(lean_object* v_00_u03b2_2147_, lean_object* v_x_2148_, lean_object* v_x_2149_){
_start:
{
uint8_t v___x_2150_; 
v___x_2150_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10___redArg(v_x_2148_, v_x_2149_);
return v___x_2150_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10___boxed(lean_object* v_00_u03b2_2151_, lean_object* v_x_2152_, lean_object* v_x_2153_){
_start:
{
uint8_t v_res_2154_; lean_object* v_r_2155_; 
v_res_2154_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10(v_00_u03b2_2151_, v_x_2152_, v_x_2153_);
lean_dec(v_x_2153_);
lean_dec_ref(v_x_2152_);
v_r_2155_ = lean_box(v_res_2154_);
return v_r_2155_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12(lean_object* v_00_u03b2_2156_, lean_object* v_x_2157_, size_t v_x_2158_, lean_object* v_x_2159_){
_start:
{
uint8_t v___x_2160_; 
v___x_2160_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12___redArg(v_x_2157_, v_x_2158_, v_x_2159_);
return v___x_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12___boxed(lean_object* v_00_u03b2_2161_, lean_object* v_x_2162_, lean_object* v_x_2163_, lean_object* v_x_2164_){
_start:
{
size_t v_x_79448__boxed_2165_; uint8_t v_res_2166_; lean_object* v_r_2167_; 
v_x_79448__boxed_2165_ = lean_unbox_usize(v_x_2163_);
lean_dec(v_x_2163_);
v_res_2166_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12(v_00_u03b2_2161_, v_x_2162_, v_x_79448__boxed_2165_, v_x_2164_);
lean_dec(v_x_2164_);
lean_dec_ref(v_x_2162_);
v_r_2167_ = lean_box(v_res_2166_);
return v_r_2167_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12_spec__15(lean_object* v_00_u03b2_2168_, lean_object* v_keys_2169_, lean_object* v_vals_2170_, lean_object* v_heq_2171_, lean_object* v_i_2172_, lean_object* v_k_2173_){
_start:
{
uint8_t v___x_2174_; 
v___x_2174_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12_spec__15___redArg(v_keys_2169_, v_i_2172_, v_k_2173_);
return v___x_2174_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12_spec__15___boxed(lean_object* v_00_u03b2_2175_, lean_object* v_keys_2176_, lean_object* v_vals_2177_, lean_object* v_heq_2178_, lean_object* v_i_2179_, lean_object* v_k_2180_){
_start:
{
uint8_t v_res_2181_; lean_object* v_r_2182_; 
v_res_2181_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6_spec__10_spec__12_spec__15(v_00_u03b2_2175_, v_keys_2176_, v_vals_2177_, v_heq_2178_, v_i_2179_, v_k_2180_);
lean_dec(v_k_2180_);
lean_dec_ref(v_vals_2177_);
lean_dec_ref(v_keys_2176_);
v_r_2182_ = lean_box(v_res_2181_);
return v_r_2182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__7_splitter___redArg(lean_object* v_n_2183_, lean_object* v_h__1_2184_, lean_object* v_h__2_2185_){
_start:
{
lean_object* v_zero_2186_; uint8_t v_isZero_2187_; 
v_zero_2186_ = lean_unsigned_to_nat(0u);
v_isZero_2187_ = lean_nat_dec_eq(v_n_2183_, v_zero_2186_);
if (v_isZero_2187_ == 1)
{
lean_object* v___x_2188_; lean_object* v___x_2189_; 
lean_dec(v_h__2_2185_);
v___x_2188_ = lean_box(0);
v___x_2189_ = lean_apply_1(v_h__1_2184_, v___x_2188_);
return v___x_2189_;
}
else
{
lean_object* v_one_2190_; lean_object* v_n_2191_; lean_object* v___x_2192_; 
lean_dec(v_h__1_2184_);
v_one_2190_ = lean_unsigned_to_nat(1u);
v_n_2191_ = lean_nat_sub(v_n_2183_, v_one_2190_);
v___x_2192_ = lean_apply_1(v_h__2_2185_, v_n_2191_);
return v___x_2192_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__7_splitter___redArg___boxed(lean_object* v_n_2193_, lean_object* v_h__1_2194_, lean_object* v_h__2_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__7_splitter___redArg(v_n_2193_, v_h__1_2194_, v_h__2_2195_);
lean_dec(v_n_2193_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__7_splitter(lean_object* v_motive_2197_, lean_object* v_n_2198_, lean_object* v_h__1_2199_, lean_object* v_h__2_2200_){
_start:
{
lean_object* v_zero_2201_; uint8_t v_isZero_2202_; 
v_zero_2201_ = lean_unsigned_to_nat(0u);
v_isZero_2202_ = lean_nat_dec_eq(v_n_2198_, v_zero_2201_);
if (v_isZero_2202_ == 1)
{
lean_object* v___x_2203_; lean_object* v___x_2204_; 
lean_dec(v_h__2_2200_);
v___x_2203_ = lean_box(0);
v___x_2204_ = lean_apply_1(v_h__1_2199_, v___x_2203_);
return v___x_2204_;
}
else
{
lean_object* v_one_2205_; lean_object* v_n_2206_; lean_object* v___x_2207_; 
lean_dec(v_h__1_2199_);
v_one_2205_ = lean_unsigned_to_nat(1u);
v_n_2206_ = lean_nat_sub(v_n_2198_, v_one_2205_);
v___x_2207_ = lean_apply_1(v_h__2_2200_, v_n_2206_);
return v___x_2207_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__7_splitter___boxed(lean_object* v_motive_2208_, lean_object* v_n_2209_, lean_object* v_h__1_2210_, lean_object* v_h__2_2211_){
_start:
{
lean_object* v_res_2212_; 
v_res_2212_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__7_splitter(v_motive_2208_, v_n_2209_, v_h__1_2210_, v_h__2_2211_);
lean_dec(v_n_2209_);
return v_res_2212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__5_splitter___redArg(lean_object* v_procResult_x3f_2213_, lean_object* v_h__1_2214_, lean_object* v_h__2_2215_){
_start:
{
if (lean_obj_tag(v_procResult_x3f_2213_) == 0)
{
lean_object* v___x_2216_; lean_object* v___x_2217_; 
lean_dec(v_h__1_2214_);
v___x_2216_ = lean_box(0);
v___x_2217_ = lean_apply_1(v_h__2_2215_, v___x_2216_);
return v___x_2217_;
}
else
{
lean_object* v_val_2218_; lean_object* v___x_2219_; 
lean_dec(v_h__2_2215_);
v_val_2218_ = lean_ctor_get(v_procResult_x3f_2213_, 0);
lean_inc(v_val_2218_);
lean_dec_ref_known(v_procResult_x3f_2213_, 1);
v___x_2219_ = lean_apply_1(v_h__1_2214_, v_val_2218_);
return v___x_2219_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__5_splitter(lean_object* v_motive_2220_, lean_object* v_procResult_x3f_2221_, lean_object* v_h__1_2222_, lean_object* v_h__2_2223_){
_start:
{
if (lean_obj_tag(v_procResult_x3f_2221_) == 0)
{
lean_object* v___x_2224_; lean_object* v___x_2225_; 
lean_dec(v_h__1_2222_);
v___x_2224_ = lean_box(0);
v___x_2225_ = lean_apply_1(v_h__2_2223_, v___x_2224_);
return v___x_2225_;
}
else
{
lean_object* v_val_2226_; lean_object* v___x_2227_; 
lean_dec(v_h__2_2223_);
v_val_2226_ = lean_ctor_get(v_procResult_x3f_2221_, 0);
lean_inc(v_val_2226_);
lean_dec_ref_known(v_procResult_x3f_2221_, 1);
v___x_2227_ = lean_apply_1(v_h__1_2222_, v_val_2226_);
return v___x_2227_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__3_splitter___redArg(lean_object* v_curr_2228_, lean_object* v_h__1_2229_, lean_object* v_h__2_2230_){
_start:
{
if (lean_obj_tag(v_curr_2228_) == 0)
{
lean_object* v___x_2231_; lean_object* v___x_2232_; 
lean_dec(v_h__2_2230_);
v___x_2231_ = lean_box(0);
v___x_2232_ = lean_apply_1(v_h__1_2229_, v___x_2231_);
return v___x_2232_;
}
else
{
lean_object* v_head_2233_; lean_object* v_tail_2234_; lean_object* v___x_2235_; 
lean_dec(v_h__1_2229_);
v_head_2233_ = lean_ctor_get(v_curr_2228_, 0);
lean_inc(v_head_2233_);
v_tail_2234_ = lean_ctor_get(v_curr_2228_, 1);
lean_inc(v_tail_2234_);
lean_dec_ref_known(v_curr_2228_, 2);
v___x_2235_ = lean_apply_2(v_h__2_2230_, v_head_2233_, v_tail_2234_);
return v___x_2235_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__3_splitter(lean_object* v_motive_2236_, lean_object* v_curr_2237_, lean_object* v_h__1_2238_, lean_object* v_h__2_2239_){
_start:
{
if (lean_obj_tag(v_curr_2237_) == 0)
{
lean_object* v___x_2240_; lean_object* v___x_2241_; 
lean_dec(v_h__2_2239_);
v___x_2240_ = lean_box(0);
v___x_2241_ = lean_apply_1(v_h__1_2238_, v___x_2240_);
return v___x_2241_;
}
else
{
lean_object* v_head_2242_; lean_object* v_tail_2243_; lean_object* v___x_2244_; 
lean_dec(v_h__1_2238_);
v_head_2242_ = lean_ctor_get(v_curr_2237_, 0);
lean_inc(v_head_2242_);
v_tail_2243_ = lean_ctor_get(v_curr_2237_, 1);
lean_inc(v_tail_2243_);
lean_dec_ref_known(v_curr_2237_, 2);
v___x_2244_ = lean_apply_2(v_h__2_2239_, v_head_2242_, v_tail_2243_);
return v___x_2244_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__1_splitter___redArg(lean_object* v_____do__lift_2245_, lean_object* v_h__1_2246_, lean_object* v_h__2_2247_){
_start:
{
if (lean_obj_tag(v_____do__lift_2245_) == 0)
{
lean_object* v___x_2248_; lean_object* v___x_2249_; 
lean_dec(v_h__2_2247_);
v___x_2248_ = lean_box(0);
v___x_2249_ = lean_apply_1(v_h__1_2246_, v___x_2248_);
return v___x_2249_;
}
else
{
lean_object* v_val_2250_; lean_object* v___x_2251_; 
lean_dec(v_h__1_2246_);
v_val_2250_ = lean_ctor_get(v_____do__lift_2245_, 0);
lean_inc(v_val_2250_);
lean_dec_ref_known(v_____do__lift_2245_, 1);
v___x_2251_ = lean_apply_1(v_h__2_2247_, v_val_2250_);
return v___x_2251_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_match__1_splitter(lean_object* v_motive_2252_, lean_object* v_____do__lift_2253_, lean_object* v_h__1_2254_, lean_object* v_h__2_2255_){
_start:
{
if (lean_obj_tag(v_____do__lift_2253_) == 0)
{
lean_object* v___x_2256_; lean_object* v___x_2257_; 
lean_dec(v_h__2_2255_);
v___x_2256_ = lean_box(0);
v___x_2257_ = lean_apply_1(v_h__1_2254_, v___x_2256_);
return v___x_2257_;
}
else
{
lean_object* v_val_2258_; lean_object* v___x_2259_; 
lean_dec(v_h__1_2254_);
v_val_2258_ = lean_ctor_get(v_____do__lift_2253_, 0);
lean_inc(v_val_2258_);
lean_dec_ref_known(v_____do__lift_2253_, 1);
v___x_2259_ = lean_apply_1(v_h__2_2255_, v_val_2258_);
return v___x_2259_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__0(lean_object* v_cfg_2260_, lean_object* v_trace_2261_, lean_object* v_next_2262_, lean_object* v_orig_2263_, lean_object* v_g_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_){
_start:
{
lean_object* v_maxDepth_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v_maxDepth_2270_ = lean_ctor_get(v_cfg_2260_, 0);
lean_inc(v_maxDepth_2270_);
v___x_2271_ = lean_box(0);
v___x_2272_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2272_, 0, v_g_2264_);
lean_ctor_set(v___x_2272_, 1, v___x_2271_);
v___x_2273_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_2260_, v_trace_2261_, v_next_2262_, v_orig_2263_, v_maxDepth_2270_, v___x_2272_, v___x_2271_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__0___boxed(lean_object* v_cfg_2274_, lean_object* v_trace_2275_, lean_object* v_next_2276_, lean_object* v_orig_2277_, lean_object* v_g_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_){
_start:
{
lean_object* v_res_2284_; 
v_res_2284_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__0(v_cfg_2274_, v_trace_2275_, v_next_2276_, v_orig_2277_, v_g_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__1(lean_object* v_a_2285_, lean_object* v_a_2286_){
_start:
{
if (lean_obj_tag(v_a_2285_) == 0)
{
lean_object* v___x_2287_; 
v___x_2287_ = l_List_reverse___redArg(v_a_2286_);
return v___x_2287_;
}
else
{
lean_object* v_head_2288_; lean_object* v_tail_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2298_; 
v_head_2288_ = lean_ctor_get(v_a_2285_, 0);
v_tail_2289_ = lean_ctor_get(v_a_2285_, 1);
v_isSharedCheck_2298_ = !lean_is_exclusive(v_a_2285_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2291_ = v_a_2285_;
v_isShared_2292_ = v_isSharedCheck_2298_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_tail_2289_);
lean_inc(v_head_2288_);
lean_dec(v_a_2285_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2298_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2293_; lean_object* v___x_2295_; 
v___x_2293_ = l_Lean_MessageData_ofFormat(v_head_2288_);
if (v_isShared_2292_ == 0)
{
lean_ctor_set(v___x_2291_, 1, v_a_2286_);
lean_ctor_set(v___x_2291_, 0, v___x_2293_);
v___x_2295_ = v___x_2291_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v___x_2293_);
lean_ctor_set(v_reuseFailAlloc_2297_, 1, v_a_2286_);
v___x_2295_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
v_a_2285_ = v_tail_2289_;
v_a_2286_ = v___x_2295_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2300_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__0));
v___x_2301_ = l_Lean_stringToMessageData(v___x_2300_);
return v___x_2301_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2303_; lean_object* v___x_2304_; 
v___x_2303_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__2));
v___x_2304_ = l_Lean_stringToMessageData(v___x_2303_);
return v___x_2304_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__5(void){
_start:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; 
v___x_2306_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__4));
v___x_2307_ = l_Lean_stringToMessageData(v___x_2306_);
return v___x_2307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1(lean_object* v_fst_2308_, lean_object* v_snd_2309_, lean_object* v_x_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_){
_start:
{
lean_object* v___x_2316_; 
v___x_2316_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarIds(v_fst_2308_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
if (lean_obj_tag(v___x_2316_) == 0)
{
lean_object* v_a_2317_; lean_object* v___x_2318_; 
v_a_2317_ = lean_ctor_get(v___x_2316_, 0);
lean_inc(v_a_2317_);
lean_dec_ref_known(v___x_2316_, 1);
v___x_2318_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarIds(v_snd_2309_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2338_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2321_ = v___x_2318_;
v_isShared_2322_ = v_isSharedCheck_2338_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_a_2319_);
lean_dec(v___x_2318_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2338_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2336_; 
v___x_2323_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__1, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__1_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__1);
v___x_2324_ = lean_box(0);
v___x_2325_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__1(v_a_2317_, v___x_2324_);
v___x_2326_ = l_Lean_MessageData_ofList(v___x_2325_);
v___x_2327_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2323_);
lean_ctor_set(v___x_2327_, 1, v___x_2326_);
v___x_2328_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__3);
v___x_2329_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2329_, 0, v___x_2327_);
lean_ctor_set(v___x_2329_, 1, v___x_2328_);
v___x_2330_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__5, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__5_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___closed__5);
v___x_2331_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__1(v_a_2319_, v___x_2324_);
v___x_2332_ = l_Lean_MessageData_ofList(v___x_2331_);
v___x_2333_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2330_);
lean_ctor_set(v___x_2333_, 1, v___x_2332_);
v___x_2334_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2329_);
lean_ctor_set(v___x_2334_, 1, v___x_2333_);
if (v_isShared_2322_ == 0)
{
lean_ctor_set(v___x_2321_, 0, v___x_2334_);
v___x_2336_ = v___x_2321_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v___x_2334_);
v___x_2336_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
return v___x_2336_;
}
}
}
else
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2346_; 
lean_dec(v_a_2317_);
v_a_2339_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2341_ = v___x_2318_;
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v___x_2318_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2344_; 
if (v_isShared_2342_ == 0)
{
v___x_2344_ = v___x_2341_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_a_2339_);
v___x_2344_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
return v___x_2344_;
}
}
}
}
else
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2354_; 
lean_dec(v_snd_2309_);
v_a_2347_ = lean_ctor_get(v___x_2316_, 0);
v_isSharedCheck_2354_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2349_ = v___x_2316_;
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v___x_2316_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
if (v_isShared_2350_ == 0)
{
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_a_2347_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___boxed(lean_object* v_fst_2355_, lean_object* v_snd_2356_, lean_object* v_x_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1(v_fst_2355_, v_snd_2356_, v_x_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
lean_dec(v___y_2361_);
lean_dec_ref(v___y_2360_);
lean_dec(v___y_2359_);
lean_dec_ref(v___y_2358_);
lean_dec_ref(v_x_2357_);
return v_res_2363_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__1(void){
_start:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2365_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__0));
v___x_2366_ = l_Lean_stringToMessageData(v___x_2365_);
return v___x_2366_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; 
v___x_2368_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__2));
v___x_2369_ = l_Lean_stringToMessageData(v___x_2368_);
return v___x_2369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2(lean_object* v_fst_2370_, lean_object* v___x_2371_, lean_object* v_x_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_){
_start:
{
lean_object* v___x_2378_; 
v___x_2378_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarIds(v_fst_2370_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_);
if (lean_obj_tag(v___x_2378_) == 0)
{
lean_object* v_a_2379_; lean_object* v___x_2380_; 
v_a_2379_ = lean_ctor_get(v___x_2378_, 0);
lean_inc(v_a_2379_);
lean_dec_ref_known(v___x_2378_, 1);
v___x_2380_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_ppMVarIds(v___x_2371_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_);
if (lean_obj_tag(v___x_2380_) == 0)
{
lean_object* v_a_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2398_; 
v_a_2381_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2398_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2398_ == 0)
{
v___x_2383_ = v___x_2380_;
v_isShared_2384_ = v_isSharedCheck_2398_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_a_2381_);
lean_dec(v___x_2380_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2398_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2396_; 
v___x_2385_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__1, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__1_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__1);
v___x_2386_ = lean_box(0);
v___x_2387_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__1(v_a_2379_, v___x_2386_);
v___x_2388_ = l_Lean_MessageData_ofList(v___x_2387_);
v___x_2389_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2389_, 0, v___x_2385_);
lean_ctor_set(v___x_2389_, 1, v___x_2388_);
v___x_2390_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__3, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__3_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___closed__3);
v___x_2391_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2391_, 0, v___x_2389_);
lean_ctor_set(v___x_2391_, 1, v___x_2390_);
v___x_2392_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__1(v_a_2381_, v___x_2386_);
v___x_2393_ = l_Lean_MessageData_ofList(v___x_2392_);
v___x_2394_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2391_);
lean_ctor_set(v___x_2394_, 1, v___x_2393_);
if (v_isShared_2384_ == 0)
{
lean_ctor_set(v___x_2383_, 0, v___x_2394_);
v___x_2396_ = v___x_2383_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v___x_2394_);
v___x_2396_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
return v___x_2396_;
}
}
}
else
{
lean_object* v_a_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2406_; 
lean_dec(v_a_2379_);
v_a_2399_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2406_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2401_ = v___x_2380_;
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_a_2399_);
lean_dec(v___x_2380_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
lean_object* v___x_2404_; 
if (v_isShared_2402_ == 0)
{
v___x_2404_ = v___x_2401_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v_a_2399_);
v___x_2404_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
return v___x_2404_;
}
}
}
}
else
{
lean_object* v_a_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2414_; 
lean_dec(v___x_2371_);
v_a_2407_ = lean_ctor_get(v___x_2378_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2378_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2409_ = v___x_2378_;
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_a_2407_);
lean_dec(v___x_2378_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v___x_2412_; 
if (v_isShared_2410_ == 0)
{
v___x_2412_ = v___x_2409_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v_a_2407_);
v___x_2412_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
return v___x_2412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___boxed(lean_object* v_fst_2415_, lean_object* v___x_2416_, lean_object* v_x_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2(v_fst_2415_, v___x_2416_, v_x_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_);
lean_dec(v___y_2421_);
lean_dec_ref(v___y_2420_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
lean_dec_ref(v_x_2417_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__4___redArg(uint8_t v___x_2424_, lean_object* v_x_2425_, lean_object* v_x_2426_, lean_object* v___y_2427_){
_start:
{
if (lean_obj_tag(v_x_2425_) == 0)
{
lean_object* v___x_2429_; 
v___x_2429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2429_, 0, v_x_2426_);
return v___x_2429_;
}
else
{
lean_object* v_head_2430_; lean_object* v_tail_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2444_; 
v_head_2430_ = lean_ctor_get(v_x_2425_, 0);
v_tail_2431_ = lean_ctor_get(v_x_2425_, 1);
v_isSharedCheck_2444_ = !lean_is_exclusive(v_x_2425_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2433_ = v_x_2425_;
v_isShared_2434_ = v_isSharedCheck_2444_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_tail_2431_);
lean_inc(v_head_2430_);
lean_dec(v_x_2425_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2444_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v___x_2440_; lean_object* v_a_2441_; uint8_t v___x_2442_; 
v___x_2440_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6___redArg(v_head_2430_, v___y_2427_);
v_a_2441_ = lean_ctor_get(v___x_2440_, 0);
lean_inc(v_a_2441_);
lean_dec_ref(v___x_2440_);
v___x_2442_ = lean_unbox(v_a_2441_);
lean_dec(v_a_2441_);
if (v___x_2442_ == 0)
{
goto v___jp_2435_;
}
else
{
if (v___x_2424_ == 0)
{
lean_del_object(v___x_2433_);
lean_dec(v_head_2430_);
v_x_2425_ = v_tail_2431_;
goto _start;
}
else
{
goto v___jp_2435_;
}
}
v___jp_2435_:
{
lean_object* v___x_2437_; 
if (v_isShared_2434_ == 0)
{
lean_ctor_set(v___x_2433_, 1, v_x_2426_);
v___x_2437_ = v___x_2433_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v_head_2430_);
lean_ctor_set(v_reuseFailAlloc_2439_, 1, v_x_2426_);
v___x_2437_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
v_x_2425_ = v_tail_2431_;
v_x_2426_ = v___x_2437_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__4___redArg___boxed(lean_object* v___x_2445_, lean_object* v_x_2446_, lean_object* v_x_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_){
_start:
{
uint8_t v___x_48928__boxed_2450_; lean_object* v_res_2451_; 
v___x_48928__boxed_2450_ = lean_unbox(v___x_2445_);
v_res_2451_ = l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__4___redArg(v___x_48928__boxed_2450_, v_x_2446_, v_x_2447_, v___y_2448_);
lean_dec(v___y_2448_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__3(lean_object* v_a_2452_, lean_object* v_a_2453_){
_start:
{
if (lean_obj_tag(v_a_2452_) == 0)
{
lean_object* v___x_2454_; 
v___x_2454_ = lean_array_to_list(v_a_2453_);
return v___x_2454_;
}
else
{
lean_object* v_head_2455_; lean_object* v_tail_2456_; lean_object* v___x_2457_; 
v_head_2455_ = lean_ctor_get(v_a_2452_, 0);
lean_inc(v_head_2455_);
v_tail_2456_ = lean_ctor_get(v_a_2452_, 1);
lean_inc(v_tail_2456_);
lean_dec_ref_known(v_a_2452_, 2);
v___x_2457_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2453_, v_head_2455_);
v_a_2452_ = v_tail_2456_;
v_a_2453_ = v___x_2457_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_BasicAux_0__List_partitionM_go___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__0(lean_object* v_goals_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_){
_start:
{
if (lean_obj_tag(v_a_2460_) == 0)
{
lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
lean_dec(v_goals_2459_);
v___x_2468_ = lean_array_to_list(v_a_2461_);
v___x_2469_ = lean_array_to_list(v_a_2462_);
v___x_2470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2470_, 0, v___x_2468_);
lean_ctor_set(v___x_2470_, 1, v___x_2469_);
v___x_2471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2471_, 0, v___x_2470_);
return v___x_2471_;
}
else
{
lean_object* v_head_2472_; lean_object* v_tail_2473_; lean_object* v___x_2474_; 
v_head_2472_ = lean_ctor_get(v_a_2460_, 0);
lean_inc_n(v_head_2472_, 2);
v_tail_2473_ = lean_ctor_get(v_a_2460_, 1);
lean_inc(v_tail_2473_);
lean_dec_ref_known(v_a_2460_, 2);
lean_inc(v_goals_2459_);
v___x_2474_ = l_Lean_MVarId_isIndependentOf(v_goals_2459_, v_head_2472_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_);
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
v___x_2477_ = lean_array_push(v_a_2462_, v_head_2472_);
v_a_2460_ = v_tail_2473_;
v_a_2462_ = v___x_2477_;
goto _start;
}
else
{
lean_object* v___x_2479_; 
v___x_2479_ = lean_array_push(v_a_2461_, v_head_2472_);
v_a_2460_ = v_tail_2473_;
v_a_2461_ = v___x_2479_;
goto _start;
}
}
else
{
lean_object* v_a_2481_; lean_object* v___x_2483_; uint8_t v_isShared_2484_; uint8_t v_isSharedCheck_2488_; 
lean_dec(v_tail_2473_);
lean_dec(v_head_2472_);
lean_dec_ref(v_a_2462_);
lean_dec_ref(v_a_2461_);
lean_dec(v_goals_2459_);
v_a_2481_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2488_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2483_ = v___x_2474_;
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
else
{
lean_inc(v_a_2481_);
lean_dec(v___x_2474_);
v___x_2483_ = lean_box(0);
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
v_resetjp_2482_:
{
lean_object* v___x_2486_; 
if (v_isShared_2484_ == 0)
{
v___x_2486_ = v___x_2483_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v_a_2481_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_BasicAux_0__List_partitionM_go___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__0___boxed(lean_object* v_goals_2489_, lean_object* v_a_2490_, lean_object* v_a_2491_, lean_object* v_a_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = l___private_Init_Data_List_BasicAux_0__List_partitionM_go___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__0(v_goals_2489_, v_a_2490_, v_a_2491_, v_a_2492_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_);
lean_dec(v___y_2496_);
lean_dec_ref(v___y_2495_);
lean_dec(v___y_2494_);
lean_dec_ref(v___y_2493_);
return v_res_2498_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__3___redArg(lean_object* v_a_2499_, lean_object* v_a_2500_){
_start:
{
if (lean_obj_tag(v_a_2499_) == 0)
{
lean_object* v___x_2501_; 
v___x_2501_ = lean_array_to_list(v_a_2500_);
return v___x_2501_;
}
else
{
lean_object* v_head_2502_; 
v_head_2502_ = lean_ctor_get(v_a_2499_, 0);
if (lean_obj_tag(v_head_2502_) == 0)
{
lean_object* v_tail_2503_; lean_object* v_val_2504_; lean_object* v___x_2505_; 
lean_inc_ref(v_head_2502_);
v_tail_2503_ = lean_ctor_get(v_a_2499_, 1);
lean_inc(v_tail_2503_);
lean_dec_ref_known(v_a_2499_, 2);
v_val_2504_ = lean_ctor_get(v_head_2502_, 0);
lean_inc(v_val_2504_);
lean_dec_ref_known(v_head_2502_, 1);
v___x_2505_ = lean_array_push(v_a_2500_, v_val_2504_);
v_a_2499_ = v_tail_2503_;
v_a_2500_ = v___x_2505_;
goto _start;
}
else
{
lean_object* v_tail_2507_; 
v_tail_2507_ = lean_ctor_get(v_a_2499_, 1);
lean_inc(v_tail_2507_);
lean_dec_ref_known(v_a_2499_, 2);
v_a_2499_ = v_tail_2507_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__2___redArg(lean_object* v_f_2509_, lean_object* v_x_2510_, lean_object* v_x_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
if (lean_obj_tag(v_x_2510_) == 0)
{
lean_object* v___x_2517_; lean_object* v___x_2518_; 
lean_dec_ref(v_f_2509_);
v___x_2517_ = l_List_reverse___redArg(v_x_2511_);
v___x_2518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2518_, 0, v___x_2517_);
return v___x_2518_;
}
else
{
lean_object* v_head_2519_; lean_object* v_tail_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2566_; 
v_head_2519_ = lean_ctor_get(v_x_2510_, 0);
v_tail_2520_ = lean_ctor_get(v_x_2510_, 1);
v_isSharedCheck_2566_ = !lean_is_exclusive(v_x_2510_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2522_ = v_x_2510_;
v_isShared_2523_ = v_isSharedCheck_2566_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_tail_2520_);
lean_inc(v_head_2519_);
lean_dec(v_x_2510_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2566_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v_a_2525_; lean_object* v___x_2530_; 
v___x_2530_ = l_Lean_Meta_saveState___redArg(v___y_2513_, v___y_2515_);
if (lean_obj_tag(v___x_2530_) == 0)
{
lean_object* v_a_2531_; lean_object* v___x_2532_; 
v_a_2531_ = lean_ctor_get(v___x_2530_, 0);
lean_inc(v_a_2531_);
lean_dec_ref_known(v___x_2530_, 1);
lean_inc_ref(v_f_2509_);
lean_inc(v___y_2515_);
lean_inc_ref(v___y_2514_);
lean_inc(v___y_2513_);
lean_inc_ref(v___y_2512_);
lean_inc(v_head_2519_);
v___x_2532_ = lean_apply_6(v_f_2509_, v_head_2519_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, lean_box(0));
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; lean_object* v___x_2534_; 
lean_dec(v_a_2531_);
lean_dec(v_head_2519_);
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v___x_2532_, 1);
v___x_2534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2534_, 0, v_a_2533_);
v_a_2525_ = v___x_2534_;
goto v___jp_2524_;
}
else
{
lean_object* v_a_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2557_; 
v_a_2535_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2537_ = v___x_2532_;
v_isShared_2538_ = v_isSharedCheck_2557_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_a_2535_);
lean_dec(v___x_2532_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2557_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
uint8_t v___x_2539_; 
v___x_2539_ = l_Lean_Exception_isInterrupt(v_a_2535_);
if (v___x_2539_ == 0)
{
uint8_t v___x_2540_; 
lean_inc(v_a_2535_);
v___x_2540_ = l_Lean_Exception_isRuntime(v_a_2535_);
if (v___x_2540_ == 0)
{
lean_object* v___x_2541_; 
lean_del_object(v___x_2537_);
lean_dec(v_a_2535_);
v___x_2541_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2531_, v___y_2513_, v___y_2515_);
if (lean_obj_tag(v___x_2541_) == 0)
{
lean_object* v___x_2542_; 
lean_dec_ref_known(v___x_2541_, 1);
v___x_2542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2542_, 0, v_head_2519_);
v_a_2525_ = v___x_2542_;
goto v___jp_2524_;
}
else
{
lean_object* v_a_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2550_; 
lean_del_object(v___x_2522_);
lean_dec(v_tail_2520_);
lean_dec(v_head_2519_);
lean_dec(v_x_2511_);
lean_dec_ref(v_f_2509_);
v_a_2543_ = lean_ctor_get(v___x_2541_, 0);
v_isSharedCheck_2550_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2550_ == 0)
{
v___x_2545_ = v___x_2541_;
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_a_2543_);
lean_dec(v___x_2541_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
lean_object* v___x_2548_; 
if (v_isShared_2546_ == 0)
{
v___x_2548_ = v___x_2545_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_a_2543_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
}
else
{
lean_object* v___x_2552_; 
lean_dec(v_a_2531_);
lean_del_object(v___x_2522_);
lean_dec(v_tail_2520_);
lean_dec(v_head_2519_);
lean_dec(v_x_2511_);
lean_dec_ref(v_f_2509_);
if (v_isShared_2538_ == 0)
{
v___x_2552_ = v___x_2537_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_a_2535_);
v___x_2552_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
return v___x_2552_;
}
}
}
else
{
lean_object* v___x_2555_; 
lean_dec(v_a_2531_);
lean_del_object(v___x_2522_);
lean_dec(v_tail_2520_);
lean_dec(v_head_2519_);
lean_dec(v_x_2511_);
lean_dec_ref(v_f_2509_);
if (v_isShared_2538_ == 0)
{
v___x_2555_ = v___x_2537_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v_a_2535_);
v___x_2555_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
return v___x_2555_;
}
}
}
}
}
else
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2565_; 
lean_del_object(v___x_2522_);
lean_dec(v_tail_2520_);
lean_dec(v_head_2519_);
lean_dec(v_x_2511_);
lean_dec_ref(v_f_2509_);
v_a_2558_ = lean_ctor_get(v___x_2530_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v___x_2530_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2560_ = v___x_2530_;
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___x_2530_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2563_; 
if (v_isShared_2561_ == 0)
{
v___x_2563_ = v___x_2560_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v_a_2558_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
return v___x_2563_;
}
}
}
v___jp_2524_:
{
lean_object* v___x_2527_; 
if (v_isShared_2523_ == 0)
{
lean_ctor_set(v___x_2522_, 1, v_x_2511_);
lean_ctor_set(v___x_2522_, 0, v_a_2525_);
v___x_2527_ = v___x_2522_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_a_2525_);
lean_ctor_set(v_reuseFailAlloc_2529_, 1, v_x_2511_);
v___x_2527_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
v_x_2510_ = v_tail_2520_;
v_x_2511_ = v___x_2527_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__2___redArg___boxed(lean_object* v_f_2567_, lean_object* v_x_2568_, lean_object* v_x_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_){
_start:
{
lean_object* v_res_2575_; 
v_res_2575_ = l_List_mapM_loop___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__2___redArg(v_f_2567_, v_x_2568_, v_x_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_);
lean_dec(v___y_2573_);
lean_dec_ref(v___y_2572_);
lean_dec(v___y_2571_);
lean_dec_ref(v___y_2570_);
return v_res_2575_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__4___redArg(lean_object* v_a_2576_, lean_object* v_a_2577_){
_start:
{
if (lean_obj_tag(v_a_2576_) == 0)
{
lean_object* v___x_2578_; 
v___x_2578_ = lean_array_to_list(v_a_2577_);
return v___x_2578_;
}
else
{
lean_object* v_head_2579_; 
v_head_2579_ = lean_ctor_get(v_a_2576_, 0);
if (lean_obj_tag(v_head_2579_) == 1)
{
lean_object* v_tail_2580_; lean_object* v_val_2581_; lean_object* v___x_2582_; 
lean_inc_ref(v_head_2579_);
v_tail_2580_ = lean_ctor_get(v_a_2576_, 1);
lean_inc(v_tail_2580_);
lean_dec_ref_known(v_a_2576_, 2);
v_val_2581_ = lean_ctor_get(v_head_2579_, 0);
lean_inc(v_val_2581_);
lean_dec_ref_known(v_head_2579_, 1);
v___x_2582_ = lean_array_push(v_a_2577_, v_val_2581_);
v_a_2576_ = v_tail_2580_;
v_a_2577_ = v___x_2582_;
goto _start;
}
else
{
lean_object* v_tail_2584_; 
v_tail_2584_ = lean_ctor_get(v_a_2576_, 1);
lean_inc(v_tail_2584_);
lean_dec_ref_known(v_a_2576_, 2);
v_a_2576_ = v_tail_2584_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2___redArg(lean_object* v_L_2586_, lean_object* v_f_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_){
_start:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2593_ = lean_box(0);
v___x_2594_ = l_List_mapM_loop___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__2___redArg(v_f_2587_, v_L_2586_, v___x_2593_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_);
if (lean_obj_tag(v___x_2594_) == 0)
{
lean_object* v_a_2595_; lean_object* v___x_2597_; uint8_t v_isShared_2598_; uint8_t v_isSharedCheck_2606_; 
v_a_2595_ = lean_ctor_get(v___x_2594_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2594_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2597_ = v___x_2594_;
v_isShared_2598_ = v_isSharedCheck_2606_;
goto v_resetjp_2596_;
}
else
{
lean_inc(v_a_2595_);
lean_dec(v___x_2594_);
v___x_2597_ = lean_box(0);
v_isShared_2598_ = v_isSharedCheck_2606_;
goto v_resetjp_2596_;
}
v_resetjp_2596_:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2604_; 
v___x_2599_ = ((lean_object*)(l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___redArg___lam__3___closed__0));
lean_inc(v_a_2595_);
v___x_2600_ = l_List_filterMapTR_go___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__3___redArg(v_a_2595_, v___x_2599_);
v___x_2601_ = l_List_filterMapTR_go___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__4___redArg(v_a_2595_, v___x_2599_);
v___x_2602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2600_);
lean_ctor_set(v___x_2602_, 1, v___x_2601_);
if (v_isShared_2598_ == 0)
{
lean_ctor_set(v___x_2597_, 0, v___x_2602_);
v___x_2604_ = v___x_2597_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v___x_2602_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
}
else
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2614_; 
v_a_2607_ = lean_ctor_get(v___x_2594_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2594_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2609_ = v___x_2594_;
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___x_2594_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2612_; 
if (v_isShared_2610_ == 0)
{
v___x_2612_ = v___x_2609_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_a_2607_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2___redArg___boxed(lean_object* v_L_2615_, lean_object* v_f_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_){
_start:
{
lean_object* v_res_2622_; 
v_res_2622_ = l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2___redArg(v_L_2615_, v_f_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_);
lean_dec(v___y_2620_);
lean_dec_ref(v___y_2619_);
lean_dec(v___y_2618_);
lean_dec_ref(v___y_2617_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5___redArg(uint8_t v___x_2623_, uint8_t v___x_2624_, lean_object* v_x_2625_, lean_object* v_x_2626_, lean_object* v___y_2627_){
_start:
{
if (lean_obj_tag(v_x_2625_) == 0)
{
lean_object* v___x_2629_; 
v___x_2629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2629_, 0, v_x_2626_);
return v___x_2629_;
}
else
{
lean_object* v_head_2630_; lean_object* v_tail_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2645_; 
v_head_2630_ = lean_ctor_get(v_x_2625_, 0);
v_tail_2631_ = lean_ctor_get(v_x_2625_, 1);
v_isSharedCheck_2645_ = !lean_is_exclusive(v_x_2625_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2633_ = v_x_2625_;
v_isShared_2634_ = v_isSharedCheck_2645_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_tail_2631_);
lean_inc(v_head_2630_);
lean_dec(v_x_2625_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2645_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
uint8_t v_a_2636_; lean_object* v___x_2642_; lean_object* v_a_2643_; uint8_t v___x_2644_; 
v___x_2642_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__6___redArg(v_head_2630_, v___y_2627_);
v_a_2643_ = lean_ctor_get(v___x_2642_, 0);
lean_inc(v_a_2643_);
lean_dec_ref(v___x_2642_);
v___x_2644_ = lean_unbox(v_a_2643_);
lean_dec(v_a_2643_);
if (v___x_2644_ == 0)
{
v_a_2636_ = v___x_2623_;
goto v___jp_2635_;
}
else
{
v_a_2636_ = v___x_2624_;
goto v___jp_2635_;
}
v___jp_2635_:
{
if (v_a_2636_ == 0)
{
lean_del_object(v___x_2633_);
lean_dec(v_head_2630_);
v_x_2625_ = v_tail_2631_;
goto _start;
}
else
{
lean_object* v___x_2639_; 
if (v_isShared_2634_ == 0)
{
lean_ctor_set(v___x_2633_, 1, v_x_2626_);
v___x_2639_ = v___x_2633_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v_head_2630_);
lean_ctor_set(v_reuseFailAlloc_2641_, 1, v_x_2626_);
v___x_2639_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
v_x_2625_ = v_tail_2631_;
v_x_2626_ = v___x_2639_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5___redArg___boxed(lean_object* v___x_2646_, lean_object* v___x_2647_, lean_object* v_x_2648_, lean_object* v_x_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_){
_start:
{
uint8_t v___x_49280__boxed_2652_; uint8_t v___x_49281__boxed_2653_; lean_object* v_res_2654_; 
v___x_49280__boxed_2652_ = lean_unbox(v___x_2646_);
v___x_49281__boxed_2653_ = lean_unbox(v___x_2647_);
v_res_2654_ = l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5___redArg(v___x_49280__boxed_2652_, v___x_49281__boxed_2653_, v_x_2648_, v_x_2649_, v___y_2650_);
lean_dec(v___y_2650_);
return v_res_2654_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2(void){
_start:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; 
v___x_2658_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__1));
v___x_2659_ = l_Lean_stringToMessageData(v___x_2658_);
return v___x_2659_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(lean_object* v_cfg_2660_, lean_object* v_trace_2661_, lean_object* v_next_2662_, lean_object* v_orig_2663_, lean_object* v_goals_2664_, lean_object* v_remaining_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_){
_start:
{
lean_object* v___f_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; 
lean_inc(v_orig_2663_);
lean_inc_ref(v_next_2662_);
lean_inc(v_trace_2661_);
lean_inc_ref(v_cfg_2660_);
v___f_2671_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__0___boxed), 10, 4);
lean_closure_set(v___f_2671_, 0, v_cfg_2660_);
lean_closure_set(v___f_2671_, 1, v_trace_2661_);
lean_closure_set(v___f_2671_, 2, v_next_2662_);
lean_closure_set(v___f_2671_, 3, v_orig_2663_);
v___x_2672_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__0));
lean_inc(v_remaining_2665_);
lean_inc(v_goals_2664_);
v___x_2673_ = l___private_Init_Data_List_BasicAux_0__List_partitionM_go___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__0(v_goals_2664_, v_remaining_2665_, v___x_2672_, v___x_2672_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_2673_) == 0)
{
lean_object* v_a_2674_; lean_object* v_fst_2675_; lean_object* v_snd_2676_; lean_object* v___x_2678_; uint8_t v_isShared_2679_; uint8_t v_isSharedCheck_3323_; 
v_a_2674_ = lean_ctor_get(v___x_2673_, 0);
lean_inc(v_a_2674_);
lean_dec_ref_known(v___x_2673_, 1);
v_fst_2675_ = lean_ctor_get(v_a_2674_, 0);
v_snd_2676_ = lean_ctor_get(v_a_2674_, 1);
v_isSharedCheck_3323_ = !lean_is_exclusive(v_a_2674_);
if (v_isSharedCheck_3323_ == 0)
{
v___x_2678_ = v_a_2674_;
v_isShared_2679_ = v_isSharedCheck_3323_;
goto v_resetjp_2677_;
}
else
{
lean_inc(v_snd_2676_);
lean_inc(v_fst_2675_);
lean_dec(v_a_2674_);
v___x_2678_ = lean_box(0);
v_isShared_2679_ = v_isSharedCheck_3323_;
goto v_resetjp_2677_;
}
v_resetjp_2677_:
{
uint8_t v___x_2680_; 
v___x_2680_ = l_List_isEmpty___redArg(v_fst_2675_);
if (v___x_2680_ == 0)
{
lean_object* v_toCold_2681_; lean_object* v_options_2682_; uint8_t v_hasTrace_2683_; 
lean_dec(v_remaining_2665_);
v_toCold_2681_ = lean_ctor_get(v_a_2668_, 0);
v_options_2682_ = lean_ctor_get(v_toCold_2681_, 2);
v_hasTrace_2683_ = lean_ctor_get_uint8(v_options_2682_, sizeof(void*)*1);
if (v_hasTrace_2683_ == 0)
{
lean_object* v___x_2684_; 
lean_del_object(v___x_2678_);
v___x_2684_ = l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2___redArg(v_fst_2675_, v___f_2671_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_2684_) == 0)
{
lean_object* v_a_2685_; lean_object* v___x_2687_; uint8_t v_isShared_2688_; uint8_t v_isSharedCheck_2744_; 
v_a_2685_ = lean_ctor_get(v___x_2684_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___x_2684_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2687_ = v___x_2684_;
v_isShared_2688_ = v_isSharedCheck_2744_;
goto v_resetjp_2686_;
}
else
{
lean_inc(v_a_2685_);
lean_dec(v___x_2684_);
v___x_2687_ = lean_box(0);
v_isShared_2688_ = v_isSharedCheck_2744_;
goto v_resetjp_2686_;
}
v_resetjp_2686_:
{
lean_object* v_fst_2689_; lean_object* v_snd_2690_; lean_object* v___x_2691_; lean_object* v_a_2693_; lean_object* v___x_2699_; lean_object* v___x_2700_; 
v_fst_2689_ = lean_ctor_get(v_a_2685_, 0);
lean_inc(v_fst_2689_);
v_snd_2690_ = lean_ctor_get(v_a_2685_, 1);
lean_inc(v_snd_2690_);
lean_dec(v_a_2685_);
v___x_2691_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__3(v_snd_2690_, v___x_2672_);
v___x_2699_ = lean_box(0);
v___x_2700_ = l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__4___redArg(v_hasTrace_2683_, v_goals_2664_, v___x_2699_, v_a_2667_);
if (lean_obj_tag(v___x_2700_) == 0)
{
lean_object* v_a_2701_; uint8_t v_commitIndependentGoals_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; 
v_a_2701_ = lean_ctor_get(v___x_2700_, 0);
lean_inc(v_a_2701_);
lean_dec_ref_known(v___x_2700_, 1);
v_commitIndependentGoals_2702_ = lean_ctor_get_uint8(v_cfg_2660_, sizeof(void*)*4);
v___x_2703_ = l_List_reverse___redArg(v_a_2701_);
lean_inc(v___x_2691_);
v___x_2704_ = l_List_appendTR___redArg(v___x_2703_, v___x_2691_);
if (v_commitIndependentGoals_2702_ == 0)
{
lean_del_object(v___x_2687_);
goto v___jp_2705_;
}
else
{
uint8_t v___x_2719_; 
v___x_2719_ = l_List_isEmpty___redArg(v___x_2691_);
if (v___x_2719_ == 0)
{
lean_object* v___x_2720_; 
v___x_2720_ = l_Lean_Meta_saveState___redArg(v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_2720_) == 0)
{
lean_object* v_a_2721_; lean_object* v___x_2722_; 
v_a_2721_ = lean_ctor_get(v___x_2720_, 0);
lean_inc(v_a_2721_);
lean_dec_ref_known(v___x_2720_, 1);
lean_inc(v_snd_2676_);
v___x_2722_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___x_2704_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_2722_) == 0)
{
lean_object* v_a_2723_; 
lean_dec(v_a_2721_);
lean_dec(v_snd_2676_);
v_a_2723_ = lean_ctor_get(v___x_2722_, 0);
lean_inc(v_a_2723_);
lean_dec_ref_known(v___x_2722_, 1);
v_a_2693_ = v_a_2723_;
goto v___jp_2692_;
}
else
{
lean_object* v_a_2724_; uint8_t v___x_2725_; 
v_a_2724_ = lean_ctor_get(v___x_2722_, 0);
v___x_2725_ = l_Lean_Exception_isInterrupt(v_a_2724_);
if (v___x_2725_ == 0)
{
uint8_t v___x_2726_; 
lean_inc(v_a_2724_);
v___x_2726_ = l_Lean_Exception_isRuntime(v_a_2724_);
if (v___x_2726_ == 0)
{
lean_object* v___x_2727_; 
lean_dec_ref_known(v___x_2722_, 1);
v___x_2727_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2721_, v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_dec_ref_known(v___x_2727_, 1);
v_a_2693_ = v_snd_2676_;
goto v___jp_2692_;
}
else
{
lean_object* v_a_2728_; lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2735_; 
lean_dec(v___x_2691_);
lean_dec(v_fst_2689_);
lean_del_object(v___x_2687_);
lean_dec(v_snd_2676_);
v_a_2728_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2730_ = v___x_2727_;
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
else
{
lean_inc(v_a_2728_);
lean_dec(v___x_2727_);
v___x_2730_ = lean_box(0);
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
v_resetjp_2729_:
{
lean_object* v___x_2733_; 
if (v_isShared_2731_ == 0)
{
v___x_2733_ = v___x_2730_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v_a_2728_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
}
else
{
lean_dec(v_a_2721_);
lean_dec(v___x_2691_);
lean_dec(v_fst_2689_);
lean_del_object(v___x_2687_);
lean_dec(v_snd_2676_);
return v___x_2722_;
}
}
else
{
lean_dec(v_a_2721_);
lean_dec(v___x_2691_);
lean_dec(v_fst_2689_);
lean_del_object(v___x_2687_);
lean_dec(v_snd_2676_);
return v___x_2722_;
}
}
}
else
{
lean_object* v_a_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2743_; 
lean_dec(v___x_2704_);
lean_dec(v___x_2691_);
lean_dec(v_fst_2689_);
lean_del_object(v___x_2687_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec(v_trace_2661_);
lean_dec_ref(v_cfg_2660_);
v_a_2736_ = lean_ctor_get(v___x_2720_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2720_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2738_ = v___x_2720_;
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_a_2736_);
lean_dec(v___x_2720_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v___x_2741_; 
if (v_isShared_2739_ == 0)
{
v___x_2741_ = v___x_2738_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_a_2736_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
return v___x_2741_;
}
}
}
}
else
{
lean_del_object(v___x_2687_);
goto v___jp_2705_;
}
}
v___jp_2705_:
{
uint8_t v___x_2706_; 
v___x_2706_ = l_List_isEmpty___redArg(v_fst_2689_);
lean_dec(v_fst_2689_);
if (v___x_2706_ == 0)
{
lean_object* v___x_2707_; lean_object* v___x_2708_; 
lean_dec(v___x_2704_);
lean_dec(v___x_2691_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec(v_trace_2661_);
lean_dec_ref(v_cfg_2660_);
v___x_2707_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2);
v___x_2708_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___redArg(v___x_2707_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
return v___x_2708_;
}
else
{
lean_object* v___x_2709_; 
v___x_2709_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___x_2704_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_2709_) == 0)
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2718_; 
v_a_2710_ = lean_ctor_get(v___x_2709_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2709_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2712_ = v___x_2709_;
v_isShared_2713_ = v_isSharedCheck_2718_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___x_2709_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2718_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2714_; lean_object* v___x_2716_; 
v___x_2714_ = l_List_appendTR___redArg(v___x_2691_, v_a_2710_);
if (v_isShared_2713_ == 0)
{
lean_ctor_set(v___x_2712_, 0, v___x_2714_);
v___x_2716_ = v___x_2712_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v___x_2714_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
return v___x_2716_;
}
}
}
else
{
lean_dec(v___x_2691_);
return v___x_2709_;
}
}
}
}
else
{
lean_dec(v___x_2691_);
lean_dec(v_fst_2689_);
lean_del_object(v___x_2687_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec(v_trace_2661_);
lean_dec_ref(v_cfg_2660_);
return v___x_2700_;
}
v___jp_2692_:
{
lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2697_; 
v___x_2694_ = l_List_appendTR___redArg(v___x_2691_, v_fst_2689_);
v___x_2695_ = l_List_appendTR___redArg(v___x_2694_, v_a_2693_);
if (v_isShared_2688_ == 0)
{
lean_ctor_set(v___x_2687_, 0, v___x_2695_);
v___x_2697_ = v___x_2687_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v___x_2695_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
return v___x_2697_;
}
}
}
}
else
{
lean_object* v_a_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2752_; 
lean_dec(v_snd_2676_);
lean_dec(v_goals_2664_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec(v_trace_2661_);
lean_dec_ref(v_cfg_2660_);
v_a_2745_ = lean_ctor_get(v___x_2684_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2684_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2747_ = v___x_2684_;
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_a_2745_);
lean_dec(v___x_2684_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v___x_2750_; 
if (v_isShared_2748_ == 0)
{
v___x_2750_ = v___x_2747_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v_a_2745_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
return v___x_2750_;
}
}
}
}
else
{
lean_object* v_inheritedTraceOptions_2753_; lean_object* v___f_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; uint8_t v___x_2758_; lean_object* v___y_2760_; lean_object* v___y_2761_; lean_object* v_a_2762_; lean_object* v___y_2774_; lean_object* v___y_2775_; lean_object* v_a_2776_; lean_object* v___y_2779_; lean_object* v___y_2780_; lean_object* v___y_2781_; lean_object* v___y_2782_; lean_object* v_a_2783_; lean_object* v___y_2787_; lean_object* v___y_2788_; lean_object* v_a_2789_; lean_object* v___y_2792_; lean_object* v___y_2793_; lean_object* v___y_2794_; lean_object* v___y_2798_; uint8_t v___y_2799_; lean_object* v___y_2800_; lean_object* v___y_2801_; uint8_t v___y_2802_; lean_object* v___y_2803_; lean_object* v___y_2804_; lean_object* v_a_2805_; uint8_t v___y_2815_; lean_object* v___y_2816_; lean_object* v___y_2817_; uint8_t v___y_2818_; lean_object* v___y_2819_; lean_object* v___y_2820_; lean_object* v___y_2821_; lean_object* v_a_2822_; uint8_t v___y_2825_; lean_object* v___y_2826_; lean_object* v___y_2827_; uint8_t v___y_2828_; lean_object* v___y_2829_; lean_object* v___y_2830_; lean_object* v___y_2831_; lean_object* v_a_2832_; lean_object* v___y_2835_; lean_object* v___y_2836_; uint8_t v___y_2837_; lean_object* v___y_2838_; lean_object* v___y_2839_; uint8_t v___y_2840_; lean_object* v___y_2841_; lean_object* v___y_2842_; lean_object* v___y_2843_; lean_object* v___y_2844_; lean_object* v___y_2855_; uint8_t v___y_2856_; lean_object* v___y_2857_; lean_object* v___y_2858_; uint8_t v___y_2859_; lean_object* v___y_2860_; lean_object* v___y_2861_; lean_object* v___y_2862_; lean_object* v___y_2863_; lean_object* v_a_2864_; uint8_t v___y_2868_; lean_object* v___y_2869_; uint8_t v___y_2870_; lean_object* v___y_2871_; lean_object* v___y_2872_; lean_object* v___y_2873_; lean_object* v___y_2874_; lean_object* v___y_2875_; lean_object* v___y_2898_; lean_object* v___y_2899_; lean_object* v___y_2900_; lean_object* v___y_2901_; lean_object* v___y_2902_; lean_object* v___y_2911_; lean_object* v___y_2912_; lean_object* v_a_2913_; lean_object* v___y_2926_; lean_object* v___y_2927_; lean_object* v_a_2928_; lean_object* v___y_2931_; lean_object* v___y_2932_; lean_object* v_a_2933_; lean_object* v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2938_; lean_object* v___y_2939_; lean_object* v_a_2940_; lean_object* v___y_2944_; lean_object* v___y_2945_; lean_object* v___y_2946_; lean_object* v___y_2950_; lean_object* v___y_2951_; lean_object* v___y_2952_; lean_object* v___y_2953_; lean_object* v___y_2954_; lean_object* v___y_2963_; uint8_t v___y_2964_; lean_object* v___y_2965_; lean_object* v___y_2966_; lean_object* v___y_2967_; lean_object* v___y_2968_; lean_object* v_a_2969_; lean_object* v___y_2982_; uint8_t v___y_2983_; lean_object* v___y_2984_; lean_object* v___y_2985_; lean_object* v___y_2986_; lean_object* v___y_2987_; lean_object* v_a_2988_; lean_object* v___y_2991_; uint8_t v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___y_2995_; lean_object* v___y_2996_; lean_object* v_a_2997_; lean_object* v___y_3000_; lean_object* v___y_3001_; uint8_t v___y_3002_; lean_object* v___y_3003_; lean_object* v___y_3004_; lean_object* v___y_3005_; lean_object* v___y_3006_; lean_object* v___y_3007_; lean_object* v_a_3008_; lean_object* v___y_3012_; lean_object* v___y_3013_; uint8_t v___y_3014_; lean_object* v___y_3015_; lean_object* v___y_3016_; lean_object* v___y_3017_; lean_object* v___y_3018_; lean_object* v___y_3019_; lean_object* v___y_3020_; lean_object* v___y_3031_; lean_object* v___y_3032_; uint8_t v___y_3033_; lean_object* v___y_3034_; uint8_t v___y_3035_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; 
v_inheritedTraceOptions_2753_ = lean_ctor_get(v_toCold_2681_, 11);
lean_inc(v_snd_2676_);
lean_inc(v_fst_2675_);
v___f_2754_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__1___boxed), 8, 2);
lean_closure_set(v___f_2754_, 0, v_fst_2675_);
lean_closure_set(v___f_2754_, 1, v_snd_2676_);
v___x_2755_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__9));
v___x_2756_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__8));
lean_inc(v_trace_2661_);
v___x_2757_ = l_Lean_Name_append(v___x_2756_, v_trace_2661_);
v___x_2758_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2753_, v_options_2682_, v___x_2757_);
lean_dec(v___x_2757_);
if (v___x_2758_ == 0)
{
lean_object* v___x_3129_; uint8_t v___x_3130_; 
v___x_3129_ = l_Lean_trace_profiler;
v___x_3130_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_options_2682_, v___x_3129_);
if (v___x_3130_ == 0)
{
lean_object* v___x_3131_; 
lean_dec_ref(v___f_2754_);
lean_del_object(v___x_2678_);
v___x_3131_ = l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2___redArg(v_fst_2675_, v___f_2671_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3131_) == 0)
{
lean_object* v_a_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3311_; 
v_a_3132_ = lean_ctor_get(v___x_3131_, 0);
v_isSharedCheck_3311_ = !lean_is_exclusive(v___x_3131_);
if (v_isSharedCheck_3311_ == 0)
{
v___x_3134_ = v___x_3131_;
v_isShared_3135_ = v_isSharedCheck_3311_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_a_3132_);
lean_dec(v___x_3131_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3311_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v_fst_3136_; lean_object* v_snd_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3310_; 
v_fst_3136_ = lean_ctor_get(v_a_3132_, 0);
v_snd_3137_ = lean_ctor_get(v_a_3132_, 1);
v_isSharedCheck_3310_ = !lean_is_exclusive(v_a_3132_);
if (v_isSharedCheck_3310_ == 0)
{
v___x_3139_ = v_a_3132_;
v_isShared_3140_ = v_isSharedCheck_3310_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_snd_3137_);
lean_inc(v_fst_3136_);
lean_dec(v_a_3132_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3310_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3141_; lean_object* v_a_3143_; lean_object* v___x_3149_; 
v___x_3141_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__3(v_snd_3137_, v___x_2672_);
v___x_3149_ = lean_box(0);
if (v___x_2758_ == 0)
{
lean_object* v___x_3150_; 
lean_del_object(v___x_3139_);
v___x_3150_ = l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5___redArg(v_hasTrace_2683_, v___x_3130_, v_goals_2664_, v___x_3149_, v_a_2667_);
if (lean_obj_tag(v___x_3150_) == 0)
{
lean_object* v_a_3151_; uint8_t v_commitIndependentGoals_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; 
v_a_3151_ = lean_ctor_get(v___x_3150_, 0);
lean_inc(v_a_3151_);
lean_dec_ref_known(v___x_3150_, 1);
v_commitIndependentGoals_3152_ = lean_ctor_get_uint8(v_cfg_2660_, sizeof(void*)*4);
v___x_3153_ = l_List_reverse___redArg(v_a_3151_);
lean_inc(v___x_3141_);
v___x_3154_ = l_List_appendTR___redArg(v___x_3153_, v___x_3141_);
if (v_commitIndependentGoals_3152_ == 0)
{
lean_del_object(v___x_3134_);
goto v___jp_3155_;
}
else
{
uint8_t v___x_3169_; 
v___x_3169_ = l_List_isEmpty___redArg(v___x_3141_);
if (v___x_3169_ == 0)
{
lean_object* v___x_3170_; 
v___x_3170_ = l_Lean_Meta_saveState___redArg(v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_3170_) == 0)
{
lean_object* v_a_3171_; lean_object* v___x_3172_; 
v_a_3171_ = lean_ctor_get(v___x_3170_, 0);
lean_inc(v_a_3171_);
lean_dec_ref_known(v___x_3170_, 1);
lean_inc(v_snd_2676_);
v___x_3172_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___x_3154_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3172_) == 0)
{
lean_object* v_a_3173_; 
lean_dec(v_a_3171_);
lean_dec(v_snd_2676_);
v_a_3173_ = lean_ctor_get(v___x_3172_, 0);
lean_inc(v_a_3173_);
lean_dec_ref_known(v___x_3172_, 1);
v_a_3143_ = v_a_3173_;
goto v___jp_3142_;
}
else
{
lean_object* v_a_3174_; uint8_t v___x_3175_; 
v_a_3174_ = lean_ctor_get(v___x_3172_, 0);
v___x_3175_ = l_Lean_Exception_isInterrupt(v_a_3174_);
if (v___x_3175_ == 0)
{
uint8_t v___x_3176_; 
lean_inc(v_a_3174_);
v___x_3176_ = l_Lean_Exception_isRuntime(v_a_3174_);
if (v___x_3176_ == 0)
{
lean_object* v___x_3177_; 
lean_dec_ref_known(v___x_3172_, 1);
v___x_3177_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3171_, v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_3177_) == 0)
{
lean_dec_ref_known(v___x_3177_, 1);
v_a_3143_ = v_snd_2676_;
goto v___jp_3142_;
}
else
{
lean_object* v_a_3178_; lean_object* v___x_3180_; uint8_t v_isShared_3181_; uint8_t v_isSharedCheck_3185_; 
lean_dec(v___x_3141_);
lean_dec(v_fst_3136_);
lean_del_object(v___x_3134_);
lean_dec(v_snd_2676_);
v_a_3178_ = lean_ctor_get(v___x_3177_, 0);
v_isSharedCheck_3185_ = !lean_is_exclusive(v___x_3177_);
if (v_isSharedCheck_3185_ == 0)
{
v___x_3180_ = v___x_3177_;
v_isShared_3181_ = v_isSharedCheck_3185_;
goto v_resetjp_3179_;
}
else
{
lean_inc(v_a_3178_);
lean_dec(v___x_3177_);
v___x_3180_ = lean_box(0);
v_isShared_3181_ = v_isSharedCheck_3185_;
goto v_resetjp_3179_;
}
v_resetjp_3179_:
{
lean_object* v___x_3183_; 
if (v_isShared_3181_ == 0)
{
v___x_3183_ = v___x_3180_;
goto v_reusejp_3182_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v_a_3178_);
v___x_3183_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3182_;
}
v_reusejp_3182_:
{
return v___x_3183_;
}
}
}
}
else
{
lean_dec(v_a_3171_);
lean_dec(v___x_3141_);
lean_dec(v_fst_3136_);
lean_del_object(v___x_3134_);
lean_dec(v_snd_2676_);
return v___x_3172_;
}
}
else
{
lean_dec(v_a_3171_);
lean_dec(v___x_3141_);
lean_dec(v_fst_3136_);
lean_del_object(v___x_3134_);
lean_dec(v_snd_2676_);
return v___x_3172_;
}
}
}
else
{
lean_object* v_a_3186_; lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3193_; 
lean_dec(v___x_3154_);
lean_dec(v___x_3141_);
lean_dec(v_fst_3136_);
lean_del_object(v___x_3134_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec(v_trace_2661_);
lean_dec_ref(v_cfg_2660_);
v_a_3186_ = lean_ctor_get(v___x_3170_, 0);
v_isSharedCheck_3193_ = !lean_is_exclusive(v___x_3170_);
if (v_isSharedCheck_3193_ == 0)
{
v___x_3188_ = v___x_3170_;
v_isShared_3189_ = v_isSharedCheck_3193_;
goto v_resetjp_3187_;
}
else
{
lean_inc(v_a_3186_);
lean_dec(v___x_3170_);
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
else
{
lean_del_object(v___x_3134_);
goto v___jp_3155_;
}
}
v___jp_3155_:
{
uint8_t v___x_3156_; 
v___x_3156_ = l_List_isEmpty___redArg(v_fst_3136_);
lean_dec(v_fst_3136_);
if (v___x_3156_ == 0)
{
lean_object* v___x_3157_; lean_object* v___x_3158_; 
lean_dec(v___x_3154_);
lean_dec(v___x_3141_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec(v_trace_2661_);
lean_dec_ref(v_cfg_2660_);
v___x_3157_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2);
v___x_3158_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___redArg(v___x_3157_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
return v___x_3158_;
}
else
{
lean_object* v___x_3159_; 
v___x_3159_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___x_3154_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3159_) == 0)
{
lean_object* v_a_3160_; lean_object* v___x_3162_; uint8_t v_isShared_3163_; uint8_t v_isSharedCheck_3168_; 
v_a_3160_ = lean_ctor_get(v___x_3159_, 0);
v_isSharedCheck_3168_ = !lean_is_exclusive(v___x_3159_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3162_ = v___x_3159_;
v_isShared_3163_ = v_isSharedCheck_3168_;
goto v_resetjp_3161_;
}
else
{
lean_inc(v_a_3160_);
lean_dec(v___x_3159_);
v___x_3162_ = lean_box(0);
v_isShared_3163_ = v_isSharedCheck_3168_;
goto v_resetjp_3161_;
}
v_resetjp_3161_:
{
lean_object* v___x_3164_; lean_object* v___x_3166_; 
v___x_3164_ = l_List_appendTR___redArg(v___x_3141_, v_a_3160_);
if (v_isShared_3163_ == 0)
{
lean_ctor_set(v___x_3162_, 0, v___x_3164_);
v___x_3166_ = v___x_3162_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v___x_3164_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
}
}
}
else
{
lean_dec(v___x_3141_);
return v___x_3159_;
}
}
}
}
else
{
lean_dec(v___x_3141_);
lean_dec(v_fst_3136_);
lean_del_object(v___x_3134_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec(v_trace_2661_);
lean_dec_ref(v_cfg_2660_);
return v___x_3150_;
}
}
else
{
lean_object* v___f_3194_; lean_object* v___x_3195_; 
lean_del_object(v___x_3134_);
lean_inc(v___x_3141_);
lean_inc(v_fst_3136_);
v___f_3194_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___boxed), 8, 2);
lean_closure_set(v___f_3194_, 0, v_fst_3136_);
lean_closure_set(v___f_3194_, 1, v___x_3141_);
v___x_3195_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_2669_);
if (lean_obj_tag(v___x_3195_) == 0)
{
lean_object* v_a_3196_; lean_object* v___x_3197_; uint8_t v___x_3198_; 
v_a_3196_ = lean_ctor_get(v___x_3195_, 0);
lean_inc(v_a_3196_);
lean_dec_ref_known(v___x_3195_, 1);
v___x_3197_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3198_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_options_2682_, v___x_3197_);
if (v___x_3198_ == 0)
{
lean_object* v___x_3199_; lean_object* v_a_3201_; lean_object* v_a_3216_; lean_object* v_a_3219_; lean_object* v_a_3223_; lean_object* v___x_3225_; 
v___x_3199_ = lean_io_mono_nanos_now();
v___x_3225_ = l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5___redArg(v_hasTrace_2683_, v___x_3130_, v_goals_2664_, v___x_3149_, v_a_2667_);
if (lean_obj_tag(v___x_3225_) == 0)
{
lean_object* v_a_3226_; uint8_t v_commitIndependentGoals_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; 
v_a_3226_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_a_3226_);
lean_dec_ref_known(v___x_3225_, 1);
v_commitIndependentGoals_3227_ = lean_ctor_get_uint8(v_cfg_2660_, sizeof(void*)*4);
v___x_3228_ = l_List_reverse___redArg(v_a_3226_);
lean_inc(v___x_3141_);
v___x_3229_ = l_List_appendTR___redArg(v___x_3228_, v___x_3141_);
if (v_commitIndependentGoals_3227_ == 0)
{
goto v___jp_3230_;
}
else
{
uint8_t v___x_3240_; 
v___x_3240_ = l_List_isEmpty___redArg(v___x_3141_);
if (v___x_3240_ == 0)
{
lean_object* v___x_3241_; 
v___x_3241_ = l_Lean_Meta_saveState___redArg(v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_3241_) == 0)
{
lean_object* v_a_3242_; lean_object* v___x_3243_; 
v_a_3242_ = lean_ctor_get(v___x_3241_, 0);
lean_inc(v_a_3242_);
lean_dec_ref_known(v___x_3241_, 1);
lean_inc(v_snd_2676_);
lean_inc(v_trace_2661_);
v___x_3243_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___x_3229_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3243_) == 0)
{
lean_object* v_a_3244_; 
lean_dec(v_a_3242_);
lean_dec(v_snd_2676_);
v_a_3244_ = lean_ctor_get(v___x_3243_, 0);
lean_inc(v_a_3244_);
lean_dec_ref_known(v___x_3243_, 1);
v_a_3219_ = v_a_3244_;
goto v___jp_3218_;
}
else
{
lean_object* v_a_3245_; uint8_t v___x_3246_; 
v_a_3245_ = lean_ctor_get(v___x_3243_, 0);
lean_inc(v_a_3245_);
lean_dec_ref_known(v___x_3243_, 1);
v___x_3246_ = l_Lean_Exception_isInterrupt(v_a_3245_);
if (v___x_3246_ == 0)
{
uint8_t v___x_3247_; 
lean_inc(v_a_3245_);
v___x_3247_ = l_Lean_Exception_isRuntime(v_a_3245_);
if (v___x_3247_ == 0)
{
lean_object* v___x_3248_; 
lean_dec(v_a_3245_);
v___x_3248_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3242_, v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_3248_) == 0)
{
lean_dec_ref_known(v___x_3248_, 1);
v_a_3219_ = v_snd_2676_;
goto v___jp_3218_;
}
else
{
lean_object* v_a_3249_; 
lean_dec(v___x_3141_);
lean_dec(v_fst_3136_);
lean_dec(v_snd_2676_);
v_a_3249_ = lean_ctor_get(v___x_3248_, 0);
lean_inc(v_a_3249_);
lean_dec_ref_known(v___x_3248_, 1);
v_a_3223_ = v_a_3249_;
goto v___jp_3222_;
}
}
else
{
lean_dec(v_a_3242_);
lean_dec(v___x_3141_);
lean_dec(v_fst_3136_);
lean_dec(v_snd_2676_);
v_a_3223_ = v_a_3245_;
goto v___jp_3222_;
}
}
else
{
lean_dec(v_a_3242_);
lean_dec(v___x_3141_);
lean_dec(v_fst_3136_);
lean_dec(v_snd_2676_);
v_a_3223_ = v_a_3245_;
goto v___jp_3222_;
}
}
}
else
{
lean_object* v_a_3250_; 
lean_dec(v___x_3229_);
lean_dec(v___x_3141_);
lean_dec(v_fst_3136_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_3250_ = lean_ctor_get(v___x_3241_, 0);
lean_inc(v_a_3250_);
lean_dec_ref_known(v___x_3241_, 1);
v_a_3223_ = v_a_3250_;
goto v___jp_3222_;
}
}
else
{
goto v___jp_3230_;
}
}
v___jp_3230_:
{
uint8_t v___x_3231_; 
v___x_3231_ = l_List_isEmpty___redArg(v_fst_3136_);
lean_dec(v_fst_3136_);
if (v___x_3231_ == 0)
{
lean_object* v___x_3232_; lean_object* v___x_3233_; 
lean_dec(v___x_3229_);
lean_dec(v___x_3141_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v___x_3232_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2);
v___x_3233_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___redArg(v___x_3232_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3233_) == 0)
{
lean_object* v_a_3234_; 
v_a_3234_ = lean_ctor_get(v___x_3233_, 0);
lean_inc(v_a_3234_);
lean_dec_ref_known(v___x_3233_, 1);
v_a_3216_ = v_a_3234_;
goto v___jp_3215_;
}
else
{
lean_object* v_a_3235_; 
v_a_3235_ = lean_ctor_get(v___x_3233_, 0);
lean_inc(v_a_3235_);
lean_dec_ref_known(v___x_3233_, 1);
v_a_3223_ = v_a_3235_;
goto v___jp_3222_;
}
}
else
{
lean_object* v___x_3236_; 
lean_inc(v_trace_2661_);
v___x_3236_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___x_3229_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3236_) == 0)
{
lean_object* v_a_3237_; lean_object* v___x_3238_; 
v_a_3237_ = lean_ctor_get(v___x_3236_, 0);
lean_inc(v_a_3237_);
lean_dec_ref_known(v___x_3236_, 1);
v___x_3238_ = l_List_appendTR___redArg(v___x_3141_, v_a_3237_);
v_a_3216_ = v___x_3238_;
goto v___jp_3215_;
}
else
{
lean_object* v_a_3239_; 
lean_dec(v___x_3141_);
v_a_3239_ = lean_ctor_get(v___x_3236_, 0);
lean_inc(v_a_3239_);
lean_dec_ref_known(v___x_3236_, 1);
v_a_3223_ = v_a_3239_;
goto v___jp_3222_;
}
}
}
}
else
{
lean_object* v_a_3251_; 
lean_dec(v___x_3141_);
lean_dec(v_fst_3136_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_3251_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_a_3251_);
lean_dec_ref_known(v___x_3225_, 1);
v_a_3223_ = v_a_3251_;
goto v___jp_3222_;
}
v___jp_3200_:
{
lean_object* v___x_3202_; double v___x_3203_; double v___x_3204_; double v___x_3205_; double v___x_3206_; double v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3211_; 
v___x_3202_ = lean_io_mono_nanos_now();
v___x_3203_ = lean_float_of_nat(v___x_3199_);
v___x_3204_ = lean_float_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0);
v___x_3205_ = lean_float_div(v___x_3203_, v___x_3204_);
v___x_3206_ = lean_float_of_nat(v___x_3202_);
v___x_3207_ = lean_float_div(v___x_3206_, v___x_3204_);
v___x_3208_ = lean_box_float(v___x_3205_);
v___x_3209_ = lean_box_float(v___x_3207_);
if (v_isShared_3140_ == 0)
{
lean_ctor_set(v___x_3139_, 1, v___x_3209_);
lean_ctor_set(v___x_3139_, 0, v___x_3208_);
v___x_3211_ = v___x_3139_;
goto v_reusejp_3210_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v___x_3208_);
lean_ctor_set(v_reuseFailAlloc_3214_, 1, v___x_3209_);
v___x_3211_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3210_;
}
v_reusejp_3210_:
{
lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3212_, 0, v_a_3201_);
lean_ctor_set(v___x_3212_, 1, v___x_3211_);
v___x_3213_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_2661_, v_hasTrace_2683_, v___x_2755_, v_options_2682_, v___x_2758_, v_a_3196_, v___f_3194_, v___x_3212_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
return v___x_3213_;
}
}
v___jp_3215_:
{
lean_object* v___x_3217_; 
v___x_3217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3217_, 0, v_a_3216_);
v_a_3201_ = v___x_3217_;
goto v___jp_3200_;
}
v___jp_3218_:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; 
v___x_3220_ = l_List_appendTR___redArg(v___x_3141_, v_fst_3136_);
v___x_3221_ = l_List_appendTR___redArg(v___x_3220_, v_a_3219_);
v_a_3216_ = v___x_3221_;
goto v___jp_3215_;
}
v___jp_3222_:
{
lean_object* v___x_3224_; 
v___x_3224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3224_, 0, v_a_3223_);
v_a_3201_ = v___x_3224_;
goto v___jp_3200_;
}
}
else
{
lean_object* v___x_3252_; lean_object* v_a_3254_; lean_object* v_a_3266_; lean_object* v_a_3269_; lean_object* v_a_3273_; lean_object* v___x_3275_; 
v___x_3252_ = lean_io_get_num_heartbeats();
v___x_3275_ = l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5___redArg(v_hasTrace_2683_, v___x_3130_, v_goals_2664_, v___x_3149_, v_a_2667_);
if (lean_obj_tag(v___x_3275_) == 0)
{
lean_object* v_a_3276_; uint8_t v_commitIndependentGoals_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
v_a_3276_ = lean_ctor_get(v___x_3275_, 0);
lean_inc(v_a_3276_);
lean_dec_ref_known(v___x_3275_, 1);
v_commitIndependentGoals_3277_ = lean_ctor_get_uint8(v_cfg_2660_, sizeof(void*)*4);
v___x_3278_ = l_List_reverse___redArg(v_a_3276_);
lean_inc(v___x_3141_);
v___x_3279_ = l_List_appendTR___redArg(v___x_3278_, v___x_3141_);
if (v_commitIndependentGoals_3277_ == 0)
{
goto v___jp_3280_;
}
else
{
uint8_t v___x_3290_; 
v___x_3290_ = l_List_isEmpty___redArg(v___x_3141_);
if (v___x_3290_ == 0)
{
lean_object* v___x_3291_; 
v___x_3291_ = l_Lean_Meta_saveState___redArg(v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_3291_) == 0)
{
lean_object* v_a_3292_; lean_object* v___x_3293_; 
v_a_3292_ = lean_ctor_get(v___x_3291_, 0);
lean_inc(v_a_3292_);
lean_dec_ref_known(v___x_3291_, 1);
lean_inc(v_snd_2676_);
lean_inc(v_trace_2661_);
v___x_3293_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___x_3279_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3293_) == 0)
{
lean_object* v_a_3294_; 
lean_dec(v_a_3292_);
lean_dec(v_snd_2676_);
v_a_3294_ = lean_ctor_get(v___x_3293_, 0);
lean_inc(v_a_3294_);
lean_dec_ref_known(v___x_3293_, 1);
v_a_3269_ = v_a_3294_;
goto v___jp_3268_;
}
else
{
lean_object* v_a_3295_; uint8_t v___x_3296_; 
v_a_3295_ = lean_ctor_get(v___x_3293_, 0);
lean_inc(v_a_3295_);
lean_dec_ref_known(v___x_3293_, 1);
v___x_3296_ = l_Lean_Exception_isInterrupt(v_a_3295_);
if (v___x_3296_ == 0)
{
uint8_t v___x_3297_; 
lean_inc(v_a_3295_);
v___x_3297_ = l_Lean_Exception_isRuntime(v_a_3295_);
if (v___x_3297_ == 0)
{
lean_object* v___x_3298_; 
lean_dec(v_a_3295_);
v___x_3298_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3292_, v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_3298_) == 0)
{
lean_dec_ref_known(v___x_3298_, 1);
v_a_3269_ = v_snd_2676_;
goto v___jp_3268_;
}
else
{
lean_object* v_a_3299_; 
lean_dec(v___x_3141_);
lean_dec(v_fst_3136_);
lean_dec(v_snd_2676_);
v_a_3299_ = lean_ctor_get(v___x_3298_, 0);
lean_inc(v_a_3299_);
lean_dec_ref_known(v___x_3298_, 1);
v_a_3273_ = v_a_3299_;
goto v___jp_3272_;
}
}
else
{
lean_dec(v_a_3292_);
lean_dec(v___x_3141_);
lean_dec(v_fst_3136_);
lean_dec(v_snd_2676_);
v_a_3273_ = v_a_3295_;
goto v___jp_3272_;
}
}
else
{
lean_dec(v_a_3292_);
lean_dec(v___x_3141_);
lean_dec(v_fst_3136_);
lean_dec(v_snd_2676_);
v_a_3273_ = v_a_3295_;
goto v___jp_3272_;
}
}
}
else
{
lean_object* v_a_3300_; 
lean_dec(v___x_3279_);
lean_dec(v___x_3141_);
lean_dec(v_fst_3136_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_3300_ = lean_ctor_get(v___x_3291_, 0);
lean_inc(v_a_3300_);
lean_dec_ref_known(v___x_3291_, 1);
v_a_3273_ = v_a_3300_;
goto v___jp_3272_;
}
}
else
{
goto v___jp_3280_;
}
}
v___jp_3280_:
{
uint8_t v___x_3281_; 
v___x_3281_ = l_List_isEmpty___redArg(v_fst_3136_);
lean_dec(v_fst_3136_);
if (v___x_3281_ == 0)
{
lean_object* v___x_3282_; lean_object* v___x_3283_; 
lean_dec(v___x_3279_);
lean_dec(v___x_3141_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v___x_3282_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2);
v___x_3283_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___redArg(v___x_3282_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3283_) == 0)
{
lean_object* v_a_3284_; 
v_a_3284_ = lean_ctor_get(v___x_3283_, 0);
lean_inc(v_a_3284_);
lean_dec_ref_known(v___x_3283_, 1);
v_a_3266_ = v_a_3284_;
goto v___jp_3265_;
}
else
{
lean_object* v_a_3285_; 
v_a_3285_ = lean_ctor_get(v___x_3283_, 0);
lean_inc(v_a_3285_);
lean_dec_ref_known(v___x_3283_, 1);
v_a_3273_ = v_a_3285_;
goto v___jp_3272_;
}
}
else
{
lean_object* v___x_3286_; 
lean_inc(v_trace_2661_);
v___x_3286_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___x_3279_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3286_) == 0)
{
lean_object* v_a_3287_; lean_object* v___x_3288_; 
v_a_3287_ = lean_ctor_get(v___x_3286_, 0);
lean_inc(v_a_3287_);
lean_dec_ref_known(v___x_3286_, 1);
v___x_3288_ = l_List_appendTR___redArg(v___x_3141_, v_a_3287_);
v_a_3266_ = v___x_3288_;
goto v___jp_3265_;
}
else
{
lean_object* v_a_3289_; 
lean_dec(v___x_3141_);
v_a_3289_ = lean_ctor_get(v___x_3286_, 0);
lean_inc(v_a_3289_);
lean_dec_ref_known(v___x_3286_, 1);
v_a_3273_ = v_a_3289_;
goto v___jp_3272_;
}
}
}
}
else
{
lean_object* v_a_3301_; 
lean_dec(v___x_3141_);
lean_dec(v_fst_3136_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_3301_ = lean_ctor_get(v___x_3275_, 0);
lean_inc(v_a_3301_);
lean_dec_ref_known(v___x_3275_, 1);
v_a_3273_ = v_a_3301_;
goto v___jp_3272_;
}
v___jp_3253_:
{
lean_object* v___x_3255_; double v___x_3256_; double v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3261_; 
v___x_3255_ = lean_io_get_num_heartbeats();
v___x_3256_ = lean_float_of_nat(v___x_3252_);
v___x_3257_ = lean_float_of_nat(v___x_3255_);
v___x_3258_ = lean_box_float(v___x_3256_);
v___x_3259_ = lean_box_float(v___x_3257_);
if (v_isShared_3140_ == 0)
{
lean_ctor_set(v___x_3139_, 1, v___x_3259_);
lean_ctor_set(v___x_3139_, 0, v___x_3258_);
v___x_3261_ = v___x_3139_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v___x_3258_);
lean_ctor_set(v_reuseFailAlloc_3264_, 1, v___x_3259_);
v___x_3261_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
lean_object* v___x_3262_; lean_object* v___x_3263_; 
v___x_3262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3262_, 0, v_a_3254_);
lean_ctor_set(v___x_3262_, 1, v___x_3261_);
v___x_3263_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_2661_, v_hasTrace_2683_, v___x_2755_, v_options_2682_, v___x_2758_, v_a_3196_, v___f_3194_, v___x_3262_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
return v___x_3263_;
}
}
v___jp_3265_:
{
lean_object* v___x_3267_; 
v___x_3267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3267_, 0, v_a_3266_);
v_a_3254_ = v___x_3267_;
goto v___jp_3253_;
}
v___jp_3268_:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; 
v___x_3270_ = l_List_appendTR___redArg(v___x_3141_, v_fst_3136_);
v___x_3271_ = l_List_appendTR___redArg(v___x_3270_, v_a_3269_);
v_a_3266_ = v___x_3271_;
goto v___jp_3265_;
}
v___jp_3272_:
{
lean_object* v___x_3274_; 
v___x_3274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3274_, 0, v_a_3273_);
v_a_3254_ = v___x_3274_;
goto v___jp_3253_;
}
}
}
else
{
lean_object* v_a_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3309_; 
lean_dec_ref(v___f_3194_);
lean_dec(v___x_3141_);
lean_del_object(v___x_3139_);
lean_dec(v_fst_3136_);
lean_dec(v_snd_2676_);
lean_dec(v_goals_2664_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec(v_trace_2661_);
lean_dec_ref(v_cfg_2660_);
v_a_3302_ = lean_ctor_get(v___x_3195_, 0);
v_isSharedCheck_3309_ = !lean_is_exclusive(v___x_3195_);
if (v_isSharedCheck_3309_ == 0)
{
v___x_3304_ = v___x_3195_;
v_isShared_3305_ = v_isSharedCheck_3309_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_a_3302_);
lean_dec(v___x_3195_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3309_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
lean_object* v___x_3307_; 
if (v_isShared_3305_ == 0)
{
v___x_3307_ = v___x_3304_;
goto v_reusejp_3306_;
}
else
{
lean_object* v_reuseFailAlloc_3308_; 
v_reuseFailAlloc_3308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3308_, 0, v_a_3302_);
v___x_3307_ = v_reuseFailAlloc_3308_;
goto v_reusejp_3306_;
}
v_reusejp_3306_:
{
return v___x_3307_;
}
}
}
}
v___jp_3142_:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3147_; 
v___x_3144_ = l_List_appendTR___redArg(v___x_3141_, v_fst_3136_);
v___x_3145_ = l_List_appendTR___redArg(v___x_3144_, v_a_3143_);
if (v_isShared_3135_ == 0)
{
lean_ctor_set(v___x_3134_, 0, v___x_3145_);
v___x_3147_ = v___x_3134_;
goto v_reusejp_3146_;
}
else
{
lean_object* v_reuseFailAlloc_3148_; 
v_reuseFailAlloc_3148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3148_, 0, v___x_3145_);
v___x_3147_ = v_reuseFailAlloc_3148_;
goto v_reusejp_3146_;
}
v_reusejp_3146_:
{
return v___x_3147_;
}
}
}
}
}
else
{
lean_object* v_a_3312_; lean_object* v___x_3314_; uint8_t v_isShared_3315_; uint8_t v_isSharedCheck_3319_; 
lean_dec(v_snd_2676_);
lean_dec(v_goals_2664_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec(v_trace_2661_);
lean_dec_ref(v_cfg_2660_);
v_a_3312_ = lean_ctor_get(v___x_3131_, 0);
v_isSharedCheck_3319_ = !lean_is_exclusive(v___x_3131_);
if (v_isSharedCheck_3319_ == 0)
{
v___x_3314_ = v___x_3131_;
v_isShared_3315_ = v_isSharedCheck_3319_;
goto v_resetjp_3313_;
}
else
{
lean_inc(v_a_3312_);
lean_dec(v___x_3131_);
v___x_3314_ = lean_box(0);
v_isShared_3315_ = v_isSharedCheck_3319_;
goto v_resetjp_3313_;
}
v_resetjp_3313_:
{
lean_object* v___x_3317_; 
if (v_isShared_3315_ == 0)
{
v___x_3317_ = v___x_3314_;
goto v_reusejp_3316_;
}
else
{
lean_object* v_reuseFailAlloc_3318_; 
v_reuseFailAlloc_3318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3318_, 0, v_a_3312_);
v___x_3317_ = v_reuseFailAlloc_3318_;
goto v_reusejp_3316_;
}
v_reusejp_3316_:
{
return v___x_3317_;
}
}
}
}
else
{
goto v___jp_3060_;
}
}
else
{
goto v___jp_3060_;
}
v___jp_2759_:
{
lean_object* v___x_2763_; double v___x_2764_; double v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2769_; 
v___x_2763_ = lean_io_get_num_heartbeats();
v___x_2764_ = lean_float_of_nat(v___y_2760_);
v___x_2765_ = lean_float_of_nat(v___x_2763_);
v___x_2766_ = lean_box_float(v___x_2764_);
v___x_2767_ = lean_box_float(v___x_2765_);
if (v_isShared_2679_ == 0)
{
lean_ctor_set(v___x_2678_, 1, v___x_2767_);
lean_ctor_set(v___x_2678_, 0, v___x_2766_);
v___x_2769_ = v___x_2678_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v___x_2766_);
lean_ctor_set(v_reuseFailAlloc_2772_, 1, v___x_2767_);
v___x_2769_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
lean_object* v___x_2770_; lean_object* v___x_2771_; 
v___x_2770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2770_, 0, v_a_2762_);
lean_ctor_set(v___x_2770_, 1, v___x_2769_);
v___x_2771_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_2661_, v_hasTrace_2683_, v___x_2755_, v_options_2682_, v___x_2758_, v___y_2761_, v___f_2754_, v___x_2770_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
return v___x_2771_;
}
}
v___jp_2773_:
{
lean_object* v___x_2777_; 
v___x_2777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2777_, 0, v_a_2776_);
v___y_2760_ = v___y_2774_;
v___y_2761_ = v___y_2775_;
v_a_2762_ = v___x_2777_;
goto v___jp_2759_;
}
v___jp_2778_:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; 
v___x_2784_ = l_List_appendTR___redArg(v___y_2781_, v___y_2782_);
v___x_2785_ = l_List_appendTR___redArg(v___x_2784_, v_a_2783_);
v___y_2774_ = v___y_2779_;
v___y_2775_ = v___y_2780_;
v_a_2776_ = v___x_2785_;
goto v___jp_2773_;
}
v___jp_2786_:
{
lean_object* v___x_2790_; 
v___x_2790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2790_, 0, v_a_2789_);
v___y_2760_ = v___y_2787_;
v___y_2761_ = v___y_2788_;
v_a_2762_ = v___x_2790_;
goto v___jp_2759_;
}
v___jp_2791_:
{
if (lean_obj_tag(v___y_2794_) == 0)
{
lean_object* v_a_2795_; 
v_a_2795_ = lean_ctor_get(v___y_2794_, 0);
lean_inc(v_a_2795_);
lean_dec_ref_known(v___y_2794_, 1);
v___y_2774_ = v___y_2792_;
v___y_2775_ = v___y_2793_;
v_a_2776_ = v_a_2795_;
goto v___jp_2773_;
}
else
{
lean_object* v_a_2796_; 
v_a_2796_ = lean_ctor_get(v___y_2794_, 0);
lean_inc(v_a_2796_);
lean_dec_ref_known(v___y_2794_, 1);
v___y_2787_ = v___y_2792_;
v___y_2788_ = v___y_2793_;
v_a_2789_ = v_a_2796_;
goto v___jp_2786_;
}
}
v___jp_2797_:
{
lean_object* v___x_2806_; double v___x_2807_; double v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
v___x_2806_ = lean_io_get_num_heartbeats();
v___x_2807_ = lean_float_of_nat(v___y_2803_);
v___x_2808_ = lean_float_of_nat(v___x_2806_);
v___x_2809_ = lean_box_float(v___x_2807_);
v___x_2810_ = lean_box_float(v___x_2808_);
v___x_2811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2811_, 0, v___x_2809_);
lean_ctor_set(v___x_2811_, 1, v___x_2810_);
v___x_2812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2812_, 0, v_a_2805_);
lean_ctor_set(v___x_2812_, 1, v___x_2811_);
lean_inc(v_trace_2661_);
v___x_2813_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_2661_, v___y_2802_, v___x_2755_, v_options_2682_, v___y_2799_, v___y_2800_, v___y_2804_, v___x_2812_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
v___y_2792_ = v___y_2798_;
v___y_2793_ = v___y_2801_;
v___y_2794_ = v___x_2813_;
goto v___jp_2791_;
}
v___jp_2814_:
{
lean_object* v___x_2823_; 
v___x_2823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2823_, 0, v_a_2822_);
v___y_2798_ = v___y_2816_;
v___y_2799_ = v___y_2815_;
v___y_2800_ = v___y_2817_;
v___y_2801_ = v___y_2819_;
v___y_2802_ = v___y_2818_;
v___y_2803_ = v___y_2820_;
v___y_2804_ = v___y_2821_;
v_a_2805_ = v___x_2823_;
goto v___jp_2797_;
}
v___jp_2824_:
{
lean_object* v___x_2833_; 
v___x_2833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2833_, 0, v_a_2832_);
v___y_2798_ = v___y_2826_;
v___y_2799_ = v___y_2825_;
v___y_2800_ = v___y_2827_;
v___y_2801_ = v___y_2829_;
v___y_2802_ = v___y_2828_;
v___y_2803_ = v___y_2830_;
v___y_2804_ = v___y_2831_;
v_a_2805_ = v___x_2833_;
goto v___jp_2797_;
}
v___jp_2834_:
{
uint8_t v___x_2845_; 
v___x_2845_ = l_List_isEmpty___redArg(v___y_2843_);
lean_dec(v___y_2843_);
if (v___x_2845_ == 0)
{
lean_object* v___x_2846_; lean_object* v___x_2847_; 
lean_dec(v___y_2841_);
lean_dec(v___y_2835_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v___x_2846_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2);
v___x_2847_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___redArg(v___x_2846_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_2847_) == 0)
{
lean_object* v_a_2848_; 
v_a_2848_ = lean_ctor_get(v___x_2847_, 0);
lean_inc(v_a_2848_);
lean_dec_ref_known(v___x_2847_, 1);
v___y_2825_ = v___y_2837_;
v___y_2826_ = v___y_2836_;
v___y_2827_ = v___y_2838_;
v___y_2828_ = v___y_2840_;
v___y_2829_ = v___y_2839_;
v___y_2830_ = v___y_2842_;
v___y_2831_ = v___y_2844_;
v_a_2832_ = v_a_2848_;
goto v___jp_2824_;
}
else
{
lean_object* v_a_2849_; 
v_a_2849_ = lean_ctor_get(v___x_2847_, 0);
lean_inc(v_a_2849_);
lean_dec_ref_known(v___x_2847_, 1);
v___y_2815_ = v___y_2837_;
v___y_2816_ = v___y_2836_;
v___y_2817_ = v___y_2838_;
v___y_2818_ = v___y_2840_;
v___y_2819_ = v___y_2839_;
v___y_2820_ = v___y_2842_;
v___y_2821_ = v___y_2844_;
v_a_2822_ = v_a_2849_;
goto v___jp_2814_;
}
}
else
{
lean_object* v___x_2850_; 
lean_inc(v_trace_2661_);
v___x_2850_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___y_2835_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_2850_) == 0)
{
lean_object* v_a_2851_; lean_object* v___x_2852_; 
v_a_2851_ = lean_ctor_get(v___x_2850_, 0);
lean_inc(v_a_2851_);
lean_dec_ref_known(v___x_2850_, 1);
v___x_2852_ = l_List_appendTR___redArg(v___y_2841_, v_a_2851_);
v___y_2825_ = v___y_2837_;
v___y_2826_ = v___y_2836_;
v___y_2827_ = v___y_2838_;
v___y_2828_ = v___y_2840_;
v___y_2829_ = v___y_2839_;
v___y_2830_ = v___y_2842_;
v___y_2831_ = v___y_2844_;
v_a_2832_ = v___x_2852_;
goto v___jp_2824_;
}
else
{
lean_object* v_a_2853_; 
lean_dec(v___y_2841_);
v_a_2853_ = lean_ctor_get(v___x_2850_, 0);
lean_inc(v_a_2853_);
lean_dec_ref_known(v___x_2850_, 1);
v___y_2815_ = v___y_2837_;
v___y_2816_ = v___y_2836_;
v___y_2817_ = v___y_2838_;
v___y_2818_ = v___y_2840_;
v___y_2819_ = v___y_2839_;
v___y_2820_ = v___y_2842_;
v___y_2821_ = v___y_2844_;
v_a_2822_ = v_a_2853_;
goto v___jp_2814_;
}
}
}
v___jp_2854_:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2865_ = l_List_appendTR___redArg(v___y_2860_, v___y_2862_);
v___x_2866_ = l_List_appendTR___redArg(v___x_2865_, v_a_2864_);
v___y_2825_ = v___y_2856_;
v___y_2826_ = v___y_2855_;
v___y_2827_ = v___y_2857_;
v___y_2828_ = v___y_2859_;
v___y_2829_ = v___y_2858_;
v___y_2830_ = v___y_2861_;
v___y_2831_ = v___y_2863_;
v_a_2832_ = v___x_2866_;
goto v___jp_2824_;
}
v___jp_2867_:
{
lean_object* v___x_2876_; 
v___x_2876_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_2669_);
if (lean_obj_tag(v___x_2876_) == 0)
{
lean_object* v_a_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v_a_2877_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_a_2877_);
lean_dec_ref_known(v___x_2876_, 1);
v___x_2878_ = lean_io_get_num_heartbeats();
v___x_2879_ = l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5___redArg(v___y_2870_, v___x_2680_, v_goals_2664_, v___y_2872_, v_a_2667_);
if (lean_obj_tag(v___x_2879_) == 0)
{
lean_object* v_a_2880_; uint8_t v_commitIndependentGoals_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; 
v_a_2880_ = lean_ctor_get(v___x_2879_, 0);
lean_inc(v_a_2880_);
lean_dec_ref_known(v___x_2879_, 1);
v_commitIndependentGoals_2881_ = lean_ctor_get_uint8(v_cfg_2660_, sizeof(void*)*4);
v___x_2882_ = l_List_reverse___redArg(v_a_2880_);
lean_inc(v___y_2873_);
v___x_2883_ = l_List_appendTR___redArg(v___x_2882_, v___y_2873_);
if (v_commitIndependentGoals_2881_ == 0)
{
v___y_2835_ = v___x_2883_;
v___y_2836_ = v___y_2869_;
v___y_2837_ = v___y_2868_;
v___y_2838_ = v_a_2877_;
v___y_2839_ = v___y_2871_;
v___y_2840_ = v___y_2870_;
v___y_2841_ = v___y_2873_;
v___y_2842_ = v___x_2878_;
v___y_2843_ = v___y_2874_;
v___y_2844_ = v___y_2875_;
goto v___jp_2834_;
}
else
{
uint8_t v___x_2884_; 
v___x_2884_ = l_List_isEmpty___redArg(v___y_2873_);
if (v___x_2884_ == 0)
{
lean_object* v___x_2885_; 
v___x_2885_ = l_Lean_Meta_saveState___redArg(v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_2885_) == 0)
{
lean_object* v_a_2886_; lean_object* v___x_2887_; 
v_a_2886_ = lean_ctor_get(v___x_2885_, 0);
lean_inc(v_a_2886_);
lean_dec_ref_known(v___x_2885_, 1);
lean_inc(v_snd_2676_);
lean_inc(v_trace_2661_);
v___x_2887_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___x_2883_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_2887_) == 0)
{
lean_object* v_a_2888_; 
lean_dec(v_a_2886_);
lean_dec(v_snd_2676_);
v_a_2888_ = lean_ctor_get(v___x_2887_, 0);
lean_inc(v_a_2888_);
lean_dec_ref_known(v___x_2887_, 1);
v___y_2855_ = v___y_2869_;
v___y_2856_ = v___y_2868_;
v___y_2857_ = v_a_2877_;
v___y_2858_ = v___y_2871_;
v___y_2859_ = v___y_2870_;
v___y_2860_ = v___y_2873_;
v___y_2861_ = v___x_2878_;
v___y_2862_ = v___y_2874_;
v___y_2863_ = v___y_2875_;
v_a_2864_ = v_a_2888_;
goto v___jp_2854_;
}
else
{
lean_object* v_a_2889_; uint8_t v___x_2890_; 
v_a_2889_ = lean_ctor_get(v___x_2887_, 0);
lean_inc(v_a_2889_);
lean_dec_ref_known(v___x_2887_, 1);
v___x_2890_ = l_Lean_Exception_isInterrupt(v_a_2889_);
if (v___x_2890_ == 0)
{
uint8_t v___x_2891_; 
lean_inc(v_a_2889_);
v___x_2891_ = l_Lean_Exception_isRuntime(v_a_2889_);
if (v___x_2891_ == 0)
{
lean_object* v___x_2892_; 
lean_dec(v_a_2889_);
v___x_2892_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2886_, v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_2892_) == 0)
{
lean_dec_ref_known(v___x_2892_, 1);
v___y_2855_ = v___y_2869_;
v___y_2856_ = v___y_2868_;
v___y_2857_ = v_a_2877_;
v___y_2858_ = v___y_2871_;
v___y_2859_ = v___y_2870_;
v___y_2860_ = v___y_2873_;
v___y_2861_ = v___x_2878_;
v___y_2862_ = v___y_2874_;
v___y_2863_ = v___y_2875_;
v_a_2864_ = v_snd_2676_;
goto v___jp_2854_;
}
else
{
lean_object* v_a_2893_; 
lean_dec(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec(v_snd_2676_);
v_a_2893_ = lean_ctor_get(v___x_2892_, 0);
lean_inc(v_a_2893_);
lean_dec_ref_known(v___x_2892_, 1);
v___y_2815_ = v___y_2868_;
v___y_2816_ = v___y_2869_;
v___y_2817_ = v_a_2877_;
v___y_2818_ = v___y_2870_;
v___y_2819_ = v___y_2871_;
v___y_2820_ = v___x_2878_;
v___y_2821_ = v___y_2875_;
v_a_2822_ = v_a_2893_;
goto v___jp_2814_;
}
}
else
{
lean_dec(v_a_2886_);
lean_dec(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec(v_snd_2676_);
v___y_2815_ = v___y_2868_;
v___y_2816_ = v___y_2869_;
v___y_2817_ = v_a_2877_;
v___y_2818_ = v___y_2870_;
v___y_2819_ = v___y_2871_;
v___y_2820_ = v___x_2878_;
v___y_2821_ = v___y_2875_;
v_a_2822_ = v_a_2889_;
goto v___jp_2814_;
}
}
else
{
lean_dec(v_a_2886_);
lean_dec(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec(v_snd_2676_);
v___y_2815_ = v___y_2868_;
v___y_2816_ = v___y_2869_;
v___y_2817_ = v_a_2877_;
v___y_2818_ = v___y_2870_;
v___y_2819_ = v___y_2871_;
v___y_2820_ = v___x_2878_;
v___y_2821_ = v___y_2875_;
v_a_2822_ = v_a_2889_;
goto v___jp_2814_;
}
}
}
else
{
lean_object* v_a_2894_; 
lean_dec(v___x_2883_);
lean_dec(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_2894_ = lean_ctor_get(v___x_2885_, 0);
lean_inc(v_a_2894_);
lean_dec_ref_known(v___x_2885_, 1);
v___y_2815_ = v___y_2868_;
v___y_2816_ = v___y_2869_;
v___y_2817_ = v_a_2877_;
v___y_2818_ = v___y_2870_;
v___y_2819_ = v___y_2871_;
v___y_2820_ = v___x_2878_;
v___y_2821_ = v___y_2875_;
v_a_2822_ = v_a_2894_;
goto v___jp_2814_;
}
}
else
{
v___y_2835_ = v___x_2883_;
v___y_2836_ = v___y_2869_;
v___y_2837_ = v___y_2868_;
v___y_2838_ = v_a_2877_;
v___y_2839_ = v___y_2871_;
v___y_2840_ = v___y_2870_;
v___y_2841_ = v___y_2873_;
v___y_2842_ = v___x_2878_;
v___y_2843_ = v___y_2874_;
v___y_2844_ = v___y_2875_;
goto v___jp_2834_;
}
}
}
else
{
lean_object* v_a_2895_; 
lean_dec(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_2895_ = lean_ctor_get(v___x_2879_, 0);
lean_inc(v_a_2895_);
lean_dec_ref_known(v___x_2879_, 1);
v___y_2815_ = v___y_2868_;
v___y_2816_ = v___y_2869_;
v___y_2817_ = v_a_2877_;
v___y_2818_ = v___y_2870_;
v___y_2819_ = v___y_2871_;
v___y_2820_ = v___x_2878_;
v___y_2821_ = v___y_2875_;
v_a_2822_ = v_a_2895_;
goto v___jp_2814_;
}
}
else
{
lean_object* v_a_2896_; 
lean_dec_ref(v___y_2875_);
lean_dec(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec(v___y_2872_);
lean_dec(v_snd_2676_);
lean_dec(v_goals_2664_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_2896_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_a_2896_);
lean_dec_ref_known(v___x_2876_, 1);
v___y_2787_ = v___y_2869_;
v___y_2788_ = v___y_2871_;
v_a_2789_ = v_a_2896_;
goto v___jp_2786_;
}
}
v___jp_2897_:
{
uint8_t v___x_2903_; 
v___x_2903_ = l_List_isEmpty___redArg(v___y_2901_);
lean_dec(v___y_2901_);
if (v___x_2903_ == 0)
{
lean_object* v___x_2904_; lean_object* v___x_2905_; 
lean_dec(v___y_2902_);
lean_dec(v___y_2900_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v___x_2904_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2);
v___x_2905_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___redArg(v___x_2904_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
v___y_2792_ = v___y_2898_;
v___y_2793_ = v___y_2899_;
v___y_2794_ = v___x_2905_;
goto v___jp_2791_;
}
else
{
lean_object* v___x_2906_; 
lean_inc(v_trace_2661_);
v___x_2906_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___y_2902_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_2906_) == 0)
{
lean_object* v_a_2907_; lean_object* v___x_2908_; 
v_a_2907_ = lean_ctor_get(v___x_2906_, 0);
lean_inc(v_a_2907_);
lean_dec_ref_known(v___x_2906_, 1);
v___x_2908_ = l_List_appendTR___redArg(v___y_2900_, v_a_2907_);
v___y_2774_ = v___y_2898_;
v___y_2775_ = v___y_2899_;
v_a_2776_ = v___x_2908_;
goto v___jp_2773_;
}
else
{
lean_object* v_a_2909_; 
lean_dec(v___y_2900_);
v_a_2909_ = lean_ctor_get(v___x_2906_, 0);
lean_inc(v_a_2909_);
lean_dec_ref_known(v___x_2906_, 1);
v___y_2787_ = v___y_2898_;
v___y_2788_ = v___y_2899_;
v_a_2789_ = v_a_2909_;
goto v___jp_2786_;
}
}
}
v___jp_2910_:
{
lean_object* v___x_2914_; double v___x_2915_; double v___x_2916_; double v___x_2917_; double v___x_2918_; double v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; 
v___x_2914_ = lean_io_mono_nanos_now();
v___x_2915_ = lean_float_of_nat(v___y_2911_);
v___x_2916_ = lean_float_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0);
v___x_2917_ = lean_float_div(v___x_2915_, v___x_2916_);
v___x_2918_ = lean_float_of_nat(v___x_2914_);
v___x_2919_ = lean_float_div(v___x_2918_, v___x_2916_);
v___x_2920_ = lean_box_float(v___x_2917_);
v___x_2921_ = lean_box_float(v___x_2919_);
v___x_2922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2922_, 0, v___x_2920_);
lean_ctor_set(v___x_2922_, 1, v___x_2921_);
v___x_2923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2923_, 0, v_a_2913_);
lean_ctor_set(v___x_2923_, 1, v___x_2922_);
v___x_2924_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_2661_, v_hasTrace_2683_, v___x_2755_, v_options_2682_, v___x_2758_, v___y_2912_, v___f_2754_, v___x_2923_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
return v___x_2924_;
}
v___jp_2925_:
{
lean_object* v___x_2929_; 
v___x_2929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2929_, 0, v_a_2928_);
v___y_2911_ = v___y_2926_;
v___y_2912_ = v___y_2927_;
v_a_2913_ = v___x_2929_;
goto v___jp_2910_;
}
v___jp_2930_:
{
lean_object* v___x_2934_; 
v___x_2934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2934_, 0, v_a_2933_);
v___y_2911_ = v___y_2931_;
v___y_2912_ = v___y_2932_;
v_a_2913_ = v___x_2934_;
goto v___jp_2910_;
}
v___jp_2935_:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2941_ = l_List_appendTR___redArg(v___y_2936_, v___y_2939_);
v___x_2942_ = l_List_appendTR___redArg(v___x_2941_, v_a_2940_);
v___y_2931_ = v___y_2937_;
v___y_2932_ = v___y_2938_;
v_a_2933_ = v___x_2942_;
goto v___jp_2930_;
}
v___jp_2943_:
{
if (lean_obj_tag(v___y_2946_) == 0)
{
lean_object* v_a_2947_; 
v_a_2947_ = lean_ctor_get(v___y_2946_, 0);
lean_inc(v_a_2947_);
lean_dec_ref_known(v___y_2946_, 1);
v___y_2931_ = v___y_2944_;
v___y_2932_ = v___y_2945_;
v_a_2933_ = v_a_2947_;
goto v___jp_2930_;
}
else
{
lean_object* v_a_2948_; 
v_a_2948_ = lean_ctor_get(v___y_2946_, 0);
lean_inc(v_a_2948_);
lean_dec_ref_known(v___y_2946_, 1);
v___y_2926_ = v___y_2944_;
v___y_2927_ = v___y_2945_;
v_a_2928_ = v_a_2948_;
goto v___jp_2925_;
}
}
v___jp_2949_:
{
uint8_t v___x_2955_; 
v___x_2955_ = l_List_isEmpty___redArg(v___y_2954_);
lean_dec(v___y_2954_);
if (v___x_2955_ == 0)
{
lean_object* v___x_2956_; lean_object* v___x_2957_; 
lean_dec(v___y_2953_);
lean_dec(v___y_2950_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v___x_2956_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2);
v___x_2957_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___redArg(v___x_2956_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
v___y_2944_ = v___y_2951_;
v___y_2945_ = v___y_2952_;
v___y_2946_ = v___x_2957_;
goto v___jp_2943_;
}
else
{
lean_object* v___x_2958_; 
lean_inc(v_trace_2661_);
v___x_2958_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___y_2953_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_2958_) == 0)
{
lean_object* v_a_2959_; lean_object* v___x_2960_; 
v_a_2959_ = lean_ctor_get(v___x_2958_, 0);
lean_inc(v_a_2959_);
lean_dec_ref_known(v___x_2958_, 1);
v___x_2960_ = l_List_appendTR___redArg(v___y_2950_, v_a_2959_);
v___y_2931_ = v___y_2951_;
v___y_2932_ = v___y_2952_;
v_a_2933_ = v___x_2960_;
goto v___jp_2930_;
}
else
{
lean_object* v_a_2961_; 
lean_dec(v___y_2950_);
v_a_2961_ = lean_ctor_get(v___x_2958_, 0);
lean_inc(v_a_2961_);
lean_dec_ref_known(v___x_2958_, 1);
v___y_2926_ = v___y_2951_;
v___y_2927_ = v___y_2952_;
v_a_2928_ = v_a_2961_;
goto v___jp_2925_;
}
}
}
v___jp_2962_:
{
lean_object* v___x_2970_; double v___x_2971_; double v___x_2972_; double v___x_2973_; double v___x_2974_; double v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; 
v___x_2970_ = lean_io_mono_nanos_now();
v___x_2971_ = lean_float_of_nat(v___y_2968_);
v___x_2972_ = lean_float_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run___closed__0);
v___x_2973_ = lean_float_div(v___x_2971_, v___x_2972_);
v___x_2974_ = lean_float_of_nat(v___x_2970_);
v___x_2975_ = lean_float_div(v___x_2974_, v___x_2972_);
v___x_2976_ = lean_box_float(v___x_2973_);
v___x_2977_ = lean_box_float(v___x_2975_);
v___x_2978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2978_, 0, v___x_2976_);
lean_ctor_set(v___x_2978_, 1, v___x_2977_);
v___x_2979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2979_, 0, v_a_2969_);
lean_ctor_set(v___x_2979_, 1, v___x_2978_);
lean_inc(v_trace_2661_);
v___x_2980_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__3(v_trace_2661_, v_hasTrace_2683_, v___x_2755_, v_options_2682_, v___y_2964_, v___y_2967_, v___y_2963_, v___x_2979_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
v___y_2944_ = v___y_2965_;
v___y_2945_ = v___y_2966_;
v___y_2946_ = v___x_2980_;
goto v___jp_2943_;
}
v___jp_2981_:
{
lean_object* v___x_2989_; 
v___x_2989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2989_, 0, v_a_2988_);
v___y_2963_ = v___y_2982_;
v___y_2964_ = v___y_2983_;
v___y_2965_ = v___y_2984_;
v___y_2966_ = v___y_2985_;
v___y_2967_ = v___y_2986_;
v___y_2968_ = v___y_2987_;
v_a_2969_ = v___x_2989_;
goto v___jp_2962_;
}
v___jp_2990_:
{
lean_object* v___x_2998_; 
v___x_2998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2998_, 0, v_a_2997_);
v___y_2963_ = v___y_2991_;
v___y_2964_ = v___y_2992_;
v___y_2965_ = v___y_2993_;
v___y_2966_ = v___y_2994_;
v___y_2967_ = v___y_2995_;
v___y_2968_ = v___y_2996_;
v_a_2969_ = v___x_2998_;
goto v___jp_2962_;
}
v___jp_2999_:
{
lean_object* v___x_3009_; lean_object* v___x_3010_; 
v___x_3009_ = l_List_appendTR___redArg(v___y_3001_, v___y_3007_);
v___x_3010_ = l_List_appendTR___redArg(v___x_3009_, v_a_3008_);
v___y_2991_ = v___y_3000_;
v___y_2992_ = v___y_3002_;
v___y_2993_ = v___y_3003_;
v___y_2994_ = v___y_3004_;
v___y_2995_ = v___y_3005_;
v___y_2996_ = v___y_3006_;
v_a_2997_ = v___x_3010_;
goto v___jp_2990_;
}
v___jp_3011_:
{
uint8_t v___x_3021_; 
v___x_3021_ = l_List_isEmpty___redArg(v___y_3020_);
lean_dec(v___y_3020_);
if (v___x_3021_ == 0)
{
lean_object* v___x_3022_; lean_object* v___x_3023_; 
lean_dec(v___y_3017_);
lean_dec(v___y_3013_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v___x_3022_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2, &l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2_once, _init_l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___closed__2);
v___x_3023_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__0___redArg(v___x_3022_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3023_) == 0)
{
lean_object* v_a_3024_; 
v_a_3024_ = lean_ctor_get(v___x_3023_, 0);
lean_inc(v_a_3024_);
lean_dec_ref_known(v___x_3023_, 1);
v___y_2991_ = v___y_3012_;
v___y_2992_ = v___y_3014_;
v___y_2993_ = v___y_3015_;
v___y_2994_ = v___y_3016_;
v___y_2995_ = v___y_3018_;
v___y_2996_ = v___y_3019_;
v_a_2997_ = v_a_3024_;
goto v___jp_2990_;
}
else
{
lean_object* v_a_3025_; 
v_a_3025_ = lean_ctor_get(v___x_3023_, 0);
lean_inc(v_a_3025_);
lean_dec_ref_known(v___x_3023_, 1);
v___y_2982_ = v___y_3012_;
v___y_2983_ = v___y_3014_;
v___y_2984_ = v___y_3015_;
v___y_2985_ = v___y_3016_;
v___y_2986_ = v___y_3018_;
v___y_2987_ = v___y_3019_;
v_a_2988_ = v_a_3025_;
goto v___jp_2981_;
}
}
else
{
lean_object* v___x_3026_; 
lean_inc(v_trace_2661_);
v___x_3026_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___y_3017_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3026_) == 0)
{
lean_object* v_a_3027_; lean_object* v___x_3028_; 
v_a_3027_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_a_3027_);
lean_dec_ref_known(v___x_3026_, 1);
v___x_3028_ = l_List_appendTR___redArg(v___y_3013_, v_a_3027_);
v___y_2991_ = v___y_3012_;
v___y_2992_ = v___y_3014_;
v___y_2993_ = v___y_3015_;
v___y_2994_ = v___y_3016_;
v___y_2995_ = v___y_3018_;
v___y_2996_ = v___y_3019_;
v_a_2997_ = v___x_3028_;
goto v___jp_2990_;
}
else
{
lean_object* v_a_3029_; 
lean_dec(v___y_3013_);
v_a_3029_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_a_3029_);
lean_dec_ref_known(v___x_3026_, 1);
v___y_2982_ = v___y_3012_;
v___y_2983_ = v___y_3014_;
v___y_2984_ = v___y_3015_;
v___y_2985_ = v___y_3016_;
v___y_2986_ = v___y_3018_;
v___y_2987_ = v___y_3019_;
v_a_2988_ = v_a_3029_;
goto v___jp_2981_;
}
}
}
v___jp_3030_:
{
lean_object* v___x_3039_; 
v___x_3039_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_2669_);
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_object* v_a_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; 
v_a_3040_ = lean_ctor_get(v___x_3039_, 0);
lean_inc(v_a_3040_);
lean_dec_ref_known(v___x_3039_, 1);
v___x_3041_ = lean_io_mono_nanos_now();
v___x_3042_ = l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5___redArg(v_hasTrace_2683_, v___y_3035_, v_goals_2664_, v___y_3037_, v_a_2667_);
if (lean_obj_tag(v___x_3042_) == 0)
{
lean_object* v_a_3043_; uint8_t v_commitIndependentGoals_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; 
v_a_3043_ = lean_ctor_get(v___x_3042_, 0);
lean_inc(v_a_3043_);
lean_dec_ref_known(v___x_3042_, 1);
v_commitIndependentGoals_3044_ = lean_ctor_get_uint8(v_cfg_2660_, sizeof(void*)*4);
v___x_3045_ = l_List_reverse___redArg(v_a_3043_);
lean_inc(v___y_3032_);
v___x_3046_ = l_List_appendTR___redArg(v___x_3045_, v___y_3032_);
if (v_commitIndependentGoals_3044_ == 0)
{
v___y_3012_ = v___y_3031_;
v___y_3013_ = v___y_3032_;
v___y_3014_ = v___y_3033_;
v___y_3015_ = v___y_3034_;
v___y_3016_ = v___y_3036_;
v___y_3017_ = v___x_3046_;
v___y_3018_ = v_a_3040_;
v___y_3019_ = v___x_3041_;
v___y_3020_ = v___y_3038_;
goto v___jp_3011_;
}
else
{
uint8_t v___x_3047_; 
v___x_3047_ = l_List_isEmpty___redArg(v___y_3032_);
if (v___x_3047_ == 0)
{
lean_object* v___x_3048_; 
v___x_3048_ = l_Lean_Meta_saveState___redArg(v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_3048_) == 0)
{
lean_object* v_a_3049_; lean_object* v___x_3050_; 
v_a_3049_ = lean_ctor_get(v___x_3048_, 0);
lean_inc(v_a_3049_);
lean_dec_ref_known(v___x_3048_, 1);
lean_inc(v_snd_2676_);
lean_inc(v_trace_2661_);
v___x_3050_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___x_3046_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3050_) == 0)
{
lean_object* v_a_3051_; 
lean_dec(v_a_3049_);
lean_dec(v_snd_2676_);
v_a_3051_ = lean_ctor_get(v___x_3050_, 0);
lean_inc(v_a_3051_);
lean_dec_ref_known(v___x_3050_, 1);
v___y_3000_ = v___y_3031_;
v___y_3001_ = v___y_3032_;
v___y_3002_ = v___y_3033_;
v___y_3003_ = v___y_3034_;
v___y_3004_ = v___y_3036_;
v___y_3005_ = v_a_3040_;
v___y_3006_ = v___x_3041_;
v___y_3007_ = v___y_3038_;
v_a_3008_ = v_a_3051_;
goto v___jp_2999_;
}
else
{
lean_object* v_a_3052_; uint8_t v___x_3053_; 
v_a_3052_ = lean_ctor_get(v___x_3050_, 0);
lean_inc(v_a_3052_);
lean_dec_ref_known(v___x_3050_, 1);
v___x_3053_ = l_Lean_Exception_isInterrupt(v_a_3052_);
if (v___x_3053_ == 0)
{
uint8_t v___x_3054_; 
lean_inc(v_a_3052_);
v___x_3054_ = l_Lean_Exception_isRuntime(v_a_3052_);
if (v___x_3054_ == 0)
{
lean_object* v___x_3055_; 
lean_dec(v_a_3052_);
v___x_3055_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3049_, v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_3055_) == 0)
{
lean_dec_ref_known(v___x_3055_, 1);
v___y_3000_ = v___y_3031_;
v___y_3001_ = v___y_3032_;
v___y_3002_ = v___y_3033_;
v___y_3003_ = v___y_3034_;
v___y_3004_ = v___y_3036_;
v___y_3005_ = v_a_3040_;
v___y_3006_ = v___x_3041_;
v___y_3007_ = v___y_3038_;
v_a_3008_ = v_snd_2676_;
goto v___jp_2999_;
}
else
{
lean_object* v_a_3056_; 
lean_dec(v___y_3038_);
lean_dec(v___y_3032_);
lean_dec(v_snd_2676_);
v_a_3056_ = lean_ctor_get(v___x_3055_, 0);
lean_inc(v_a_3056_);
lean_dec_ref_known(v___x_3055_, 1);
v___y_2982_ = v___y_3031_;
v___y_2983_ = v___y_3033_;
v___y_2984_ = v___y_3034_;
v___y_2985_ = v___y_3036_;
v___y_2986_ = v_a_3040_;
v___y_2987_ = v___x_3041_;
v_a_2988_ = v_a_3056_;
goto v___jp_2981_;
}
}
else
{
lean_dec(v_a_3049_);
lean_dec(v___y_3038_);
lean_dec(v___y_3032_);
lean_dec(v_snd_2676_);
v___y_2982_ = v___y_3031_;
v___y_2983_ = v___y_3033_;
v___y_2984_ = v___y_3034_;
v___y_2985_ = v___y_3036_;
v___y_2986_ = v_a_3040_;
v___y_2987_ = v___x_3041_;
v_a_2988_ = v_a_3052_;
goto v___jp_2981_;
}
}
else
{
lean_dec(v_a_3049_);
lean_dec(v___y_3038_);
lean_dec(v___y_3032_);
lean_dec(v_snd_2676_);
v___y_2982_ = v___y_3031_;
v___y_2983_ = v___y_3033_;
v___y_2984_ = v___y_3034_;
v___y_2985_ = v___y_3036_;
v___y_2986_ = v_a_3040_;
v___y_2987_ = v___x_3041_;
v_a_2988_ = v_a_3052_;
goto v___jp_2981_;
}
}
}
else
{
lean_object* v_a_3057_; 
lean_dec(v___x_3046_);
lean_dec(v___y_3038_);
lean_dec(v___y_3032_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_3057_ = lean_ctor_get(v___x_3048_, 0);
lean_inc(v_a_3057_);
lean_dec_ref_known(v___x_3048_, 1);
v___y_2982_ = v___y_3031_;
v___y_2983_ = v___y_3033_;
v___y_2984_ = v___y_3034_;
v___y_2985_ = v___y_3036_;
v___y_2986_ = v_a_3040_;
v___y_2987_ = v___x_3041_;
v_a_2988_ = v_a_3057_;
goto v___jp_2981_;
}
}
else
{
v___y_3012_ = v___y_3031_;
v___y_3013_ = v___y_3032_;
v___y_3014_ = v___y_3033_;
v___y_3015_ = v___y_3034_;
v___y_3016_ = v___y_3036_;
v___y_3017_ = v___x_3046_;
v___y_3018_ = v_a_3040_;
v___y_3019_ = v___x_3041_;
v___y_3020_ = v___y_3038_;
goto v___jp_3011_;
}
}
}
else
{
lean_object* v_a_3058_; 
lean_dec(v___y_3038_);
lean_dec(v___y_3032_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_3058_ = lean_ctor_get(v___x_3042_, 0);
lean_inc(v_a_3058_);
lean_dec_ref_known(v___x_3042_, 1);
v___y_2982_ = v___y_3031_;
v___y_2983_ = v___y_3033_;
v___y_2984_ = v___y_3034_;
v___y_2985_ = v___y_3036_;
v___y_2986_ = v_a_3040_;
v___y_2987_ = v___x_3041_;
v_a_2988_ = v_a_3058_;
goto v___jp_2981_;
}
}
else
{
lean_object* v_a_3059_; 
lean_dec(v___y_3038_);
lean_dec(v___y_3037_);
lean_dec(v___y_3032_);
lean_dec_ref(v___y_3031_);
lean_dec(v_snd_2676_);
lean_dec(v_goals_2664_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_3059_ = lean_ctor_get(v___x_3039_, 0);
lean_inc(v_a_3059_);
lean_dec_ref_known(v___x_3039_, 1);
v___y_2926_ = v___y_3034_;
v___y_2927_ = v___y_3036_;
v_a_2928_ = v_a_3059_;
goto v___jp_2925_;
}
}
v___jp_3060_:
{
lean_object* v___x_3061_; 
v___x_3061_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__1___redArg(v_a_2669_);
if (lean_obj_tag(v___x_3061_) == 0)
{
lean_object* v_a_3062_; lean_object* v___x_3063_; uint8_t v___x_3064_; 
v_a_3062_ = lean_ctor_get(v___x_3061_, 0);
lean_inc(v_a_3062_);
lean_dec_ref_known(v___x_3061_, 1);
v___x_3063_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3064_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_options_2682_, v___x_3063_);
if (v___x_3064_ == 0)
{
lean_object* v___x_3065_; lean_object* v___x_3066_; 
lean_del_object(v___x_2678_);
v___x_3065_ = lean_io_mono_nanos_now();
v___x_3066_ = l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2___redArg(v_fst_2675_, v___f_2671_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v_a_3067_; lean_object* v_fst_3068_; lean_object* v_snd_3069_; lean_object* v___x_3070_; lean_object* v___f_3071_; lean_object* v___x_3072_; 
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_a_3067_);
lean_dec_ref_known(v___x_3066_, 1);
v_fst_3068_ = lean_ctor_get(v_a_3067_, 0);
lean_inc_n(v_fst_3068_, 2);
v_snd_3069_ = lean_ctor_get(v_a_3067_, 1);
lean_inc(v_snd_3069_);
lean_dec(v_a_3067_);
v___x_3070_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__3(v_snd_3069_, v___x_2672_);
lean_inc(v___x_3070_);
v___f_3071_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___boxed), 8, 2);
lean_closure_set(v___f_3071_, 0, v_fst_3068_);
lean_closure_set(v___f_3071_, 1, v___x_3070_);
v___x_3072_ = lean_box(0);
if (v___x_2758_ == 0)
{
lean_object* v___x_3073_; uint8_t v___x_3074_; 
v___x_3073_ = l_Lean_trace_profiler;
v___x_3074_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_options_2682_, v___x_3073_);
if (v___x_3074_ == 0)
{
lean_object* v___x_3075_; 
lean_dec_ref(v___f_3071_);
v___x_3075_ = l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5___redArg(v_hasTrace_2683_, v___x_3064_, v_goals_2664_, v___x_3072_, v_a_2667_);
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v_a_3076_; uint8_t v_commitIndependentGoals_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; 
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
lean_inc(v_a_3076_);
lean_dec_ref_known(v___x_3075_, 1);
v_commitIndependentGoals_3077_ = lean_ctor_get_uint8(v_cfg_2660_, sizeof(void*)*4);
v___x_3078_ = l_List_reverse___redArg(v_a_3076_);
lean_inc(v___x_3070_);
v___x_3079_ = l_List_appendTR___redArg(v___x_3078_, v___x_3070_);
if (v_commitIndependentGoals_3077_ == 0)
{
v___y_2950_ = v___x_3070_;
v___y_2951_ = v___x_3065_;
v___y_2952_ = v_a_3062_;
v___y_2953_ = v___x_3079_;
v___y_2954_ = v_fst_3068_;
goto v___jp_2949_;
}
else
{
uint8_t v___x_3080_; 
v___x_3080_ = l_List_isEmpty___redArg(v___x_3070_);
if (v___x_3080_ == 0)
{
lean_object* v___x_3081_; 
v___x_3081_ = l_Lean_Meta_saveState___redArg(v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_3081_) == 0)
{
lean_object* v_a_3082_; lean_object* v___x_3083_; 
v_a_3082_ = lean_ctor_get(v___x_3081_, 0);
lean_inc(v_a_3082_);
lean_dec_ref_known(v___x_3081_, 1);
lean_inc(v_snd_2676_);
lean_inc(v_trace_2661_);
v___x_3083_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___x_3079_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3083_) == 0)
{
lean_object* v_a_3084_; 
lean_dec(v_a_3082_);
lean_dec(v_snd_2676_);
v_a_3084_ = lean_ctor_get(v___x_3083_, 0);
lean_inc(v_a_3084_);
lean_dec_ref_known(v___x_3083_, 1);
v___y_2936_ = v___x_3070_;
v___y_2937_ = v___x_3065_;
v___y_2938_ = v_a_3062_;
v___y_2939_ = v_fst_3068_;
v_a_2940_ = v_a_3084_;
goto v___jp_2935_;
}
else
{
lean_object* v_a_3085_; uint8_t v___x_3086_; 
v_a_3085_ = lean_ctor_get(v___x_3083_, 0);
lean_inc(v_a_3085_);
lean_dec_ref_known(v___x_3083_, 1);
v___x_3086_ = l_Lean_Exception_isInterrupt(v_a_3085_);
if (v___x_3086_ == 0)
{
uint8_t v___x_3087_; 
lean_inc(v_a_3085_);
v___x_3087_ = l_Lean_Exception_isRuntime(v_a_3085_);
if (v___x_3087_ == 0)
{
lean_object* v___x_3088_; 
lean_dec(v_a_3085_);
v___x_3088_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3082_, v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_3088_) == 0)
{
lean_dec_ref_known(v___x_3088_, 1);
v___y_2936_ = v___x_3070_;
v___y_2937_ = v___x_3065_;
v___y_2938_ = v_a_3062_;
v___y_2939_ = v_fst_3068_;
v_a_2940_ = v_snd_2676_;
goto v___jp_2935_;
}
else
{
lean_object* v_a_3089_; 
lean_dec(v___x_3070_);
lean_dec(v_fst_3068_);
lean_dec(v_snd_2676_);
v_a_3089_ = lean_ctor_get(v___x_3088_, 0);
lean_inc(v_a_3089_);
lean_dec_ref_known(v___x_3088_, 1);
v___y_2926_ = v___x_3065_;
v___y_2927_ = v_a_3062_;
v_a_2928_ = v_a_3089_;
goto v___jp_2925_;
}
}
else
{
lean_dec(v_a_3082_);
lean_dec(v___x_3070_);
lean_dec(v_fst_3068_);
lean_dec(v_snd_2676_);
v___y_2926_ = v___x_3065_;
v___y_2927_ = v_a_3062_;
v_a_2928_ = v_a_3085_;
goto v___jp_2925_;
}
}
else
{
lean_dec(v_a_3082_);
lean_dec(v___x_3070_);
lean_dec(v_fst_3068_);
lean_dec(v_snd_2676_);
v___y_2926_ = v___x_3065_;
v___y_2927_ = v_a_3062_;
v_a_2928_ = v_a_3085_;
goto v___jp_2925_;
}
}
}
else
{
lean_object* v_a_3090_; 
lean_dec(v___x_3079_);
lean_dec(v___x_3070_);
lean_dec(v_fst_3068_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_3090_ = lean_ctor_get(v___x_3081_, 0);
lean_inc(v_a_3090_);
lean_dec_ref_known(v___x_3081_, 1);
v___y_2926_ = v___x_3065_;
v___y_2927_ = v_a_3062_;
v_a_2928_ = v_a_3090_;
goto v___jp_2925_;
}
}
else
{
v___y_2950_ = v___x_3070_;
v___y_2951_ = v___x_3065_;
v___y_2952_ = v_a_3062_;
v___y_2953_ = v___x_3079_;
v___y_2954_ = v_fst_3068_;
goto v___jp_2949_;
}
}
}
else
{
lean_object* v_a_3091_; 
lean_dec(v___x_3070_);
lean_dec(v_fst_3068_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_3091_ = lean_ctor_get(v___x_3075_, 0);
lean_inc(v_a_3091_);
lean_dec_ref_known(v___x_3075_, 1);
v___y_2926_ = v___x_3065_;
v___y_2927_ = v_a_3062_;
v_a_2928_ = v_a_3091_;
goto v___jp_2925_;
}
}
else
{
v___y_3031_ = v___f_3071_;
v___y_3032_ = v___x_3070_;
v___y_3033_ = v___x_2758_;
v___y_3034_ = v___x_3065_;
v___y_3035_ = v___x_3064_;
v___y_3036_ = v_a_3062_;
v___y_3037_ = v___x_3072_;
v___y_3038_ = v_fst_3068_;
goto v___jp_3030_;
}
}
else
{
v___y_3031_ = v___f_3071_;
v___y_3032_ = v___x_3070_;
v___y_3033_ = v___x_2758_;
v___y_3034_ = v___x_3065_;
v___y_3035_ = v___x_3064_;
v___y_3036_ = v_a_3062_;
v___y_3037_ = v___x_3072_;
v___y_3038_ = v_fst_3068_;
goto v___jp_3030_;
}
}
else
{
lean_object* v_a_3092_; 
lean_dec(v_snd_2676_);
lean_dec(v_goals_2664_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_3092_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_a_3092_);
lean_dec_ref_known(v___x_3066_, 1);
v___y_2926_ = v___x_3065_;
v___y_2927_ = v_a_3062_;
v_a_2928_ = v_a_3092_;
goto v___jp_2925_;
}
}
else
{
lean_object* v___x_3093_; lean_object* v___x_3094_; 
v___x_3093_ = lean_io_get_num_heartbeats();
v___x_3094_ = l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2___redArg(v_fst_2675_, v___f_2671_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3094_) == 0)
{
lean_object* v_a_3095_; lean_object* v_fst_3096_; lean_object* v_snd_3097_; lean_object* v___x_3098_; lean_object* v___f_3099_; lean_object* v___x_3100_; 
v_a_3095_ = lean_ctor_get(v___x_3094_, 0);
lean_inc(v_a_3095_);
lean_dec_ref_known(v___x_3094_, 1);
v_fst_3096_ = lean_ctor_get(v_a_3095_, 0);
lean_inc_n(v_fst_3096_, 2);
v_snd_3097_ = lean_ctor_get(v_a_3095_, 1);
lean_inc(v_snd_3097_);
lean_dec(v_a_3095_);
v___x_3098_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__3(v_snd_3097_, v___x_2672_);
lean_inc(v___x_3098_);
v___f_3099_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___lam__2___boxed), 8, 2);
lean_closure_set(v___f_3099_, 0, v_fst_3096_);
lean_closure_set(v___f_3099_, 1, v___x_3098_);
v___x_3100_ = lean_box(0);
if (v___x_2758_ == 0)
{
lean_object* v___x_3101_; uint8_t v___x_3102_; 
v___x_3101_ = l_Lean_trace_profiler;
v___x_3102_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run_spec__2(v_options_2682_, v___x_3101_);
if (v___x_3102_ == 0)
{
lean_object* v___x_3103_; 
lean_dec_ref(v___f_3099_);
v___x_3103_ = l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5___redArg(v___x_3064_, v___x_2680_, v_goals_2664_, v___x_3100_, v_a_2667_);
if (lean_obj_tag(v___x_3103_) == 0)
{
lean_object* v_a_3104_; uint8_t v_commitIndependentGoals_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
v_a_3104_ = lean_ctor_get(v___x_3103_, 0);
lean_inc(v_a_3104_);
lean_dec_ref_known(v___x_3103_, 1);
v_commitIndependentGoals_3105_ = lean_ctor_get_uint8(v_cfg_2660_, sizeof(void*)*4);
v___x_3106_ = l_List_reverse___redArg(v_a_3104_);
lean_inc(v___x_3098_);
v___x_3107_ = l_List_appendTR___redArg(v___x_3106_, v___x_3098_);
if (v_commitIndependentGoals_3105_ == 0)
{
v___y_2898_ = v___x_3093_;
v___y_2899_ = v_a_3062_;
v___y_2900_ = v___x_3098_;
v___y_2901_ = v_fst_3096_;
v___y_2902_ = v___x_3107_;
goto v___jp_2897_;
}
else
{
uint8_t v___x_3108_; 
v___x_3108_ = l_List_isEmpty___redArg(v___x_3098_);
if (v___x_3108_ == 0)
{
lean_object* v___x_3109_; 
v___x_3109_ = l_Lean_Meta_saveState___redArg(v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_3109_) == 0)
{
lean_object* v_a_3110_; lean_object* v___x_3111_; 
v_a_3110_ = lean_ctor_get(v___x_3109_, 0);
lean_inc(v_a_3110_);
lean_dec_ref_known(v___x_3109_, 1);
lean_inc(v_snd_2676_);
lean_inc(v_trace_2661_);
v___x_3111_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v___x_3107_, v_snd_2676_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_object* v_a_3112_; 
lean_dec(v_a_3110_);
lean_dec(v_snd_2676_);
v_a_3112_ = lean_ctor_get(v___x_3111_, 0);
lean_inc(v_a_3112_);
lean_dec_ref_known(v___x_3111_, 1);
v___y_2779_ = v___x_3093_;
v___y_2780_ = v_a_3062_;
v___y_2781_ = v___x_3098_;
v___y_2782_ = v_fst_3096_;
v_a_2783_ = v_a_3112_;
goto v___jp_2778_;
}
else
{
lean_object* v_a_3113_; uint8_t v___x_3114_; 
v_a_3113_ = lean_ctor_get(v___x_3111_, 0);
lean_inc(v_a_3113_);
lean_dec_ref_known(v___x_3111_, 1);
v___x_3114_ = l_Lean_Exception_isInterrupt(v_a_3113_);
if (v___x_3114_ == 0)
{
uint8_t v___x_3115_; 
lean_inc(v_a_3113_);
v___x_3115_ = l_Lean_Exception_isRuntime(v_a_3113_);
if (v___x_3115_ == 0)
{
lean_object* v___x_3116_; 
lean_dec(v_a_3113_);
v___x_3116_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3110_, v_a_2667_, v_a_2669_);
if (lean_obj_tag(v___x_3116_) == 0)
{
lean_dec_ref_known(v___x_3116_, 1);
v___y_2779_ = v___x_3093_;
v___y_2780_ = v_a_3062_;
v___y_2781_ = v___x_3098_;
v___y_2782_ = v_fst_3096_;
v_a_2783_ = v_snd_2676_;
goto v___jp_2778_;
}
else
{
lean_object* v_a_3117_; 
lean_dec(v___x_3098_);
lean_dec(v_fst_3096_);
lean_dec(v_snd_2676_);
v_a_3117_ = lean_ctor_get(v___x_3116_, 0);
lean_inc(v_a_3117_);
lean_dec_ref_known(v___x_3116_, 1);
v___y_2787_ = v___x_3093_;
v___y_2788_ = v_a_3062_;
v_a_2789_ = v_a_3117_;
goto v___jp_2786_;
}
}
else
{
lean_dec(v_a_3110_);
lean_dec(v___x_3098_);
lean_dec(v_fst_3096_);
lean_dec(v_snd_2676_);
v___y_2787_ = v___x_3093_;
v___y_2788_ = v_a_3062_;
v_a_2789_ = v_a_3113_;
goto v___jp_2786_;
}
}
else
{
lean_dec(v_a_3110_);
lean_dec(v___x_3098_);
lean_dec(v_fst_3096_);
lean_dec(v_snd_2676_);
v___y_2787_ = v___x_3093_;
v___y_2788_ = v_a_3062_;
v_a_2789_ = v_a_3113_;
goto v___jp_2786_;
}
}
}
else
{
lean_object* v_a_3118_; 
lean_dec(v___x_3107_);
lean_dec(v___x_3098_);
lean_dec(v_fst_3096_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_3118_ = lean_ctor_get(v___x_3109_, 0);
lean_inc(v_a_3118_);
lean_dec_ref_known(v___x_3109_, 1);
v___y_2787_ = v___x_3093_;
v___y_2788_ = v_a_3062_;
v_a_2789_ = v_a_3118_;
goto v___jp_2786_;
}
}
else
{
v___y_2898_ = v___x_3093_;
v___y_2899_ = v_a_3062_;
v___y_2900_ = v___x_3098_;
v___y_2901_ = v_fst_3096_;
v___y_2902_ = v___x_3107_;
goto v___jp_2897_;
}
}
}
else
{
lean_object* v_a_3119_; 
lean_dec(v___x_3098_);
lean_dec(v_fst_3096_);
lean_dec(v_snd_2676_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_3119_ = lean_ctor_get(v___x_3103_, 0);
lean_inc(v_a_3119_);
lean_dec_ref_known(v___x_3103_, 1);
v___y_2787_ = v___x_3093_;
v___y_2788_ = v_a_3062_;
v_a_2789_ = v_a_3119_;
goto v___jp_2786_;
}
}
else
{
v___y_2868_ = v___x_2758_;
v___y_2869_ = v___x_3093_;
v___y_2870_ = v___x_3064_;
v___y_2871_ = v_a_3062_;
v___y_2872_ = v___x_3100_;
v___y_2873_ = v___x_3098_;
v___y_2874_ = v_fst_3096_;
v___y_2875_ = v___f_3099_;
goto v___jp_2867_;
}
}
else
{
v___y_2868_ = v___x_2758_;
v___y_2869_ = v___x_3093_;
v___y_2870_ = v___x_3064_;
v___y_2871_ = v_a_3062_;
v___y_2872_ = v___x_3100_;
v___y_2873_ = v___x_3098_;
v___y_2874_ = v_fst_3096_;
v___y_2875_ = v___f_3099_;
goto v___jp_2867_;
}
}
else
{
lean_object* v_a_3120_; 
lean_dec(v_snd_2676_);
lean_dec(v_goals_2664_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec_ref(v_cfg_2660_);
v_a_3120_ = lean_ctor_get(v___x_3094_, 0);
lean_inc(v_a_3120_);
lean_dec_ref_known(v___x_3094_, 1);
v___y_2787_ = v___x_3093_;
v___y_2788_ = v_a_3062_;
v_a_2789_ = v_a_3120_;
goto v___jp_2786_;
}
}
}
else
{
lean_object* v_a_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3128_; 
lean_dec_ref(v___f_2754_);
lean_del_object(v___x_2678_);
lean_dec(v_snd_2676_);
lean_dec(v_fst_2675_);
lean_dec_ref(v___f_2671_);
lean_dec(v_goals_2664_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec(v_trace_2661_);
lean_dec_ref(v_cfg_2660_);
v_a_3121_ = lean_ctor_get(v___x_3061_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3061_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3123_ = v___x_3061_;
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_a_3121_);
lean_dec(v___x_3061_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3126_; 
if (v_isShared_3124_ == 0)
{
v___x_3126_ = v___x_3123_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_a_3121_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
}
}
}
else
{
lean_object* v_maxDepth_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; 
lean_del_object(v___x_2678_);
lean_dec(v_snd_2676_);
lean_dec(v_fst_2675_);
lean_dec_ref(v___f_2671_);
lean_dec(v_goals_2664_);
v_maxDepth_3320_ = lean_ctor_get(v_cfg_2660_, 0);
lean_inc(v_maxDepth_3320_);
v___x_3321_ = lean_box(0);
v___x_3322_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_run(v_cfg_2660_, v_trace_2661_, v_next_2662_, v_orig_2663_, v_maxDepth_3320_, v_remaining_2665_, v___x_3321_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
return v___x_3322_;
}
}
}
else
{
lean_object* v_a_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3331_; 
lean_dec_ref(v___f_2671_);
lean_dec(v_remaining_2665_);
lean_dec(v_goals_2664_);
lean_dec(v_orig_2663_);
lean_dec_ref(v_next_2662_);
lean_dec(v_trace_2661_);
lean_dec_ref(v_cfg_2660_);
v_a_3324_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_3331_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_3331_ == 0)
{
v___x_3326_ = v___x_2673_;
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_a_3324_);
lean_dec(v___x_2673_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
lean_object* v___x_3329_; 
if (v_isShared_3327_ == 0)
{
v___x_3329_ = v___x_3326_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v_a_3324_);
v___x_3329_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
return v___x_3329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals___boxed(lean_object* v_cfg_3332_, lean_object* v_trace_3333_, lean_object* v_next_3334_, lean_object* v_orig_3335_, lean_object* v_goals_3336_, lean_object* v_remaining_3337_, lean_object* v_a_3338_, lean_object* v_a_3339_, lean_object* v_a_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_){
_start:
{
lean_object* v_res_3343_; 
v_res_3343_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_3332_, v_trace_3333_, v_next_3334_, v_orig_3335_, v_goals_3336_, v_remaining_3337_, v_a_3338_, v_a_3339_, v_a_3340_, v_a_3341_);
lean_dec(v_a_3341_);
lean_dec_ref(v_a_3340_);
lean_dec(v_a_3339_);
lean_dec_ref(v_a_3338_);
return v_res_3343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2(lean_object* v_00_u03b1_3344_, lean_object* v_00_u03b2_3345_, lean_object* v_L_3346_, lean_object* v_f_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_){
_start:
{
lean_object* v___x_3353_; 
v___x_3353_ = l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2___redArg(v_L_3346_, v_f_3347_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_);
return v___x_3353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2___boxed(lean_object* v_00_u03b1_3354_, lean_object* v_00_u03b2_3355_, lean_object* v_L_3356_, lean_object* v_f_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_){
_start:
{
lean_object* v_res_3363_; 
v_res_3363_ = l_Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2(v_00_u03b1_3354_, v_00_u03b2_3355_, v_L_3356_, v_f_3357_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_);
lean_dec(v___y_3361_);
lean_dec_ref(v___y_3360_);
lean_dec(v___y_3359_);
lean_dec_ref(v___y_3358_);
return v_res_3363_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__4(uint8_t v___x_3364_, lean_object* v_x_3365_, lean_object* v_x_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_){
_start:
{
lean_object* v___x_3372_; 
v___x_3372_ = l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__4___redArg(v___x_3364_, v_x_3365_, v_x_3366_, v___y_3368_);
return v___x_3372_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__4___boxed(lean_object* v___x_3373_, lean_object* v_x_3374_, lean_object* v_x_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_){
_start:
{
uint8_t v___x_50707__boxed_3381_; lean_object* v_res_3382_; 
v___x_50707__boxed_3381_ = lean_unbox(v___x_3373_);
v_res_3382_ = l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__4(v___x_50707__boxed_3381_, v_x_3374_, v_x_3375_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_);
lean_dec(v___y_3379_);
lean_dec_ref(v___y_3378_);
lean_dec(v___y_3377_);
lean_dec_ref(v___y_3376_);
return v_res_3382_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5(uint8_t v___x_3383_, uint8_t v___x_3384_, lean_object* v_x_3385_, lean_object* v_x_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_){
_start:
{
lean_object* v___x_3392_; 
v___x_3392_ = l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5___redArg(v___x_3383_, v___x_3384_, v_x_3385_, v_x_3386_, v___y_3388_);
return v___x_3392_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5___boxed(lean_object* v___x_3393_, lean_object* v___x_3394_, lean_object* v_x_3395_, lean_object* v_x_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_){
_start:
{
uint8_t v___x_50733__boxed_3402_; uint8_t v___x_50734__boxed_3403_; lean_object* v_res_3404_; 
v___x_50733__boxed_3402_ = lean_unbox(v___x_3393_);
v___x_50734__boxed_3403_ = lean_unbox(v___x_3394_);
v_res_3404_ = l_List_filterAuxM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__5(v___x_50733__boxed_3402_, v___x_50734__boxed_3403_, v_x_3395_, v_x_3396_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_);
lean_dec(v___y_3400_);
lean_dec_ref(v___y_3399_);
lean_dec(v___y_3398_);
lean_dec_ref(v___y_3397_);
return v_res_3404_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__2(lean_object* v_00_u03b1_3405_, lean_object* v_00_u03b2_3406_, lean_object* v_f_3407_, lean_object* v_x_3408_, lean_object* v_x_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_){
_start:
{
lean_object* v___x_3415_; 
v___x_3415_ = l_List_mapM_loop___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__2___redArg(v_f_3407_, v_x_3408_, v_x_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_);
return v___x_3415_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__2___boxed(lean_object* v_00_u03b1_3416_, lean_object* v_00_u03b2_3417_, lean_object* v_f_3418_, lean_object* v_x_3419_, lean_object* v_x_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_){
_start:
{
lean_object* v_res_3426_; 
v_res_3426_ = l_List_mapM_loop___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__2(v_00_u03b1_3416_, v_00_u03b2_3417_, v_f_3418_, v_x_3419_, v_x_3420_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_);
lean_dec(v___y_3424_);
lean_dec_ref(v___y_3423_);
lean_dec(v___y_3422_);
lean_dec_ref(v___y_3421_);
return v_res_3426_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__3(lean_object* v_00_u03b1_3427_, lean_object* v_00_u03b2_3428_, lean_object* v_a_3429_, lean_object* v_a_3430_){
_start:
{
lean_object* v___x_3431_; 
v___x_3431_ = l_List_filterMapTR_go___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__3___redArg(v_a_3429_, v_a_3430_);
return v___x_3431_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__4(lean_object* v_00_u03b1_3432_, lean_object* v_00_u03b2_3433_, lean_object* v_a_3434_, lean_object* v_a_3435_){
_start:
{
lean_object* v___x_3436_; 
v___x_3436_ = l_List_filterMapTR_go___at___00Lean_Meta_Tactic_Backtrack_Backtrack_tryAllM___at___00__private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals_spec__2_spec__4___redArg(v_a_3434_, v_a_3435_);
return v___x_3436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_backtrack___lam__0(lean_object* v_next_3437_, lean_object* v_g_3438_, lean_object* v_f_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_){
_start:
{
lean_object* v___x_3445_; 
lean_inc(v___y_3443_);
lean_inc_ref(v___y_3442_);
lean_inc(v___y_3441_);
lean_inc_ref(v___y_3440_);
v___x_3445_ = lean_apply_6(v_next_3437_, v_g_3438_, v___y_3440_, v___y_3441_, v___y_3442_, v___y_3443_, lean_box(0));
if (lean_obj_tag(v___x_3445_) == 0)
{
lean_object* v_a_3446_; lean_object* v___x_3447_; 
v_a_3446_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3446_);
lean_dec_ref_known(v___x_3445_, 1);
v___x_3447_ = l_Lean_Meta_Iterator_firstM___redArg(v_a_3446_, v_f_3439_, v___y_3440_, v___y_3441_, v___y_3442_, v___y_3443_);
return v___x_3447_;
}
else
{
lean_object* v_a_3448_; lean_object* v___x_3450_; uint8_t v_isShared_3451_; uint8_t v_isSharedCheck_3455_; 
lean_dec_ref(v_f_3439_);
v_a_3448_ = lean_ctor_get(v___x_3445_, 0);
v_isSharedCheck_3455_ = !lean_is_exclusive(v___x_3445_);
if (v_isSharedCheck_3455_ == 0)
{
v___x_3450_ = v___x_3445_;
v_isShared_3451_ = v_isSharedCheck_3455_;
goto v_resetjp_3449_;
}
else
{
lean_inc(v_a_3448_);
lean_dec(v___x_3445_);
v___x_3450_ = lean_box(0);
v_isShared_3451_ = v_isSharedCheck_3455_;
goto v_resetjp_3449_;
}
v_resetjp_3449_:
{
lean_object* v___x_3453_; 
if (v_isShared_3451_ == 0)
{
v___x_3453_ = v___x_3450_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v_a_3448_);
v___x_3453_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
return v___x_3453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_backtrack___lam__0___boxed(lean_object* v_next_3456_, lean_object* v_g_3457_, lean_object* v_f_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_){
_start:
{
lean_object* v_res_3464_; 
v_res_3464_ = l_Lean_Meta_Tactic_Backtrack_backtrack___lam__0(v_next_3456_, v_g_3457_, v_f_3458_, v___y_3459_, v___y_3460_, v___y_3461_, v___y_3462_);
lean_dec(v___y_3462_);
lean_dec_ref(v___y_3461_);
lean_dec(v___y_3460_);
lean_dec_ref(v___y_3459_);
return v_res_3464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_backtrack(lean_object* v_cfg_3465_, lean_object* v_trace_3466_, lean_object* v_next_3467_, lean_object* v_goals_3468_, lean_object* v_a_3469_, lean_object* v_a_3470_, lean_object* v_a_3471_, lean_object* v_a_3472_){
_start:
{
lean_object* v_resolve_3474_; lean_object* v___x_3475_; 
v_resolve_3474_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Backtrack_backtrack___lam__0___boxed), 8, 1);
lean_closure_set(v_resolve_3474_, 0, v_next_3467_);
lean_inc_n(v_goals_3468_, 2);
v___x_3475_ = l___private_Lean_Meta_Tactic_Backtrack_0__Lean_Meta_Tactic_Backtrack_Backtrack_processIndependentGoals(v_cfg_3465_, v_trace_3466_, v_resolve_3474_, v_goals_3468_, v_goals_3468_, v_goals_3468_, v_a_3469_, v_a_3470_, v_a_3471_, v_a_3472_);
return v___x_3475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Backtrack_backtrack___boxed(lean_object* v_cfg_3476_, lean_object* v_trace_3477_, lean_object* v_next_3478_, lean_object* v_goals_3479_, lean_object* v_a_3480_, lean_object* v_a_3481_, lean_object* v_a_3482_, lean_object* v_a_3483_, lean_object* v_a_3484_){
_start:
{
lean_object* v_res_3485_; 
v_res_3485_ = l_Lean_Meta_Tactic_Backtrack_backtrack(v_cfg_3476_, v_trace_3477_, v_next_3478_, v_goals_3479_, v_a_3480_, v_a_3481_, v_a_3482_, v_a_3483_);
lean_dec(v_a_3483_);
lean_dec_ref(v_a_3482_);
lean_dec(v_a_3481_);
lean_dec_ref(v_a_3480_);
return v_res_3485_;
}
}
lean_object* runtime_initialize_Lean_Meta_Iterator(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_IndependentOf(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Backtrack(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Iterator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_IndependentOf(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Backtrack(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Iterator(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_IndependentOf(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Backtrack(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Iterator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_IndependentOf(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Backtrack(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Backtrack(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Backtrack(builtin);
}
#ifdef __cplusplus
}
#endif
