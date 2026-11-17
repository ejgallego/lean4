// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Normalize
// Imports: public import Lean.Meta.Tactic.BVDecide.Normalize.Basic public import Lean.Meta.Tactic.BVDecide.Normalize.ApplyControlFlow public import Lean.Meta.Tactic.BVDecide.Normalize.Simproc public import Lean.Meta.Tactic.BVDecide.Normalize.Rewrite public import Lean.Meta.Tactic.BVDecide.Normalize.AndFlatten public import Lean.Meta.Tactic.BVDecide.Normalize.EmbeddedConstraint public import Lean.Meta.Tactic.BVDecide.Normalize.AC public import Lean.Meta.Tactic.BVDecide.Normalize.Structures public import Lean.Meta.Tactic.BVDecide.Normalize.IntToBitVec public import Lean.Meta.Tactic.BVDecide.Normalize.Enums public import Lean.Meta.Tactic.BVDecide.Normalize.TypeAnalysis public import Lean.Meta.Tactic.BVDecide.Normalize.ShortCircuit public import Lean.Meta.Tactic.BVDecide.Normalize.Reduction public import Lean.Meta.Tactic.BVDecide.Normalize.CollectHyps import Lean.Meta.Sym.Util import Lean.Meta.Sym.Intro import Lean.Meta.Sym.Grind import Lean.Meta.Tactic.Grind.BVDecide.Types
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_io_get_num_heartbeats();
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_io_mono_nanos_now();
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_embeddedConstraintPass;
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_andFlatteningPass;
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass;
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass;
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass;
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass;
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_enumsPass;
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass;
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_reductionPass;
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_typeAnalysisPass;
uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_Meta_Grind_BVDecide_bvExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_BVDecide_getCaches___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Running pass: "};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__4___boxed(lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__1_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__2_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__3_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Running preprocessing pipeline"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Preprocessing goal"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Meta_Tactic_BVDecide_Normalize_embeddedConstraintPass;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = l_Lean_Meta_Tactic_BVDecide_Normalize_andFlatteningPass;
v___x_6_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v_passPipeline_9_; 
v___x_7_ = lean_box(0);
v___x_8_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass;
v_passPipeline_9_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_passPipeline_9_, 0, v___x_8_);
lean_ctor_set(v_passPipeline_9_, 1, v___x_7_);
return v_passPipeline_9_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__3(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_10_ = lean_box(0);
v___x_11_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass;
v___x_12_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_12_, 0, v___x_11_);
lean_ctor_set(v___x_12_, 1, v___x_10_);
return v___x_12_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__4(void){
_start:
{
lean_object* v___x_13_; lean_object* v_passPipeline_14_; lean_object* v___x_15_; 
v___x_13_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__3, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__3);
v_passPipeline_14_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2);
v___x_15_ = l_List_appendTR___redArg(v_passPipeline_14_, v___x_13_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg(lean_object* v_a_16_){
_start:
{
lean_object* v_config_18_; uint8_t v_acNf_19_; uint8_t v_andFlattening_20_; uint8_t v_embeddedConstraintSubst_21_; lean_object* v_passPipeline_23_; lean_object* v_passPipeline_29_; lean_object* v_passPipeline_32_; 
v_config_18_ = lean_ctor_get(v_a_16_, 0);
v_acNf_19_ = lean_ctor_get_uint8(v_config_18_, sizeof(void*)*3 + 2);
v_andFlattening_20_ = lean_ctor_get_uint8(v_config_18_, sizeof(void*)*3 + 3);
v_embeddedConstraintSubst_21_ = lean_ctor_get_uint8(v_config_18_, sizeof(void*)*3 + 4);
v_passPipeline_32_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2);
if (v_acNf_19_ == 0)
{
v_passPipeline_29_ = v_passPipeline_32_;
goto v___jp_28_;
}
else
{
lean_object* v___x_33_; 
v___x_33_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__4, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__4_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__4);
v_passPipeline_29_ = v___x_33_;
goto v___jp_28_;
}
v___jp_22_:
{
if (v_embeddedConstraintSubst_21_ == 0)
{
lean_object* v___x_24_; 
v___x_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_24_, 0, v_passPipeline_23_);
return v___x_24_;
}
else
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_25_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__0, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__0);
v___x_26_ = l_List_appendTR___redArg(v_passPipeline_23_, v___x_25_);
v___x_27_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
return v___x_27_;
}
}
v___jp_28_:
{
if (v_embeddedConstraintSubst_21_ == 0)
{
lean_inc(v_passPipeline_29_);
v_passPipeline_23_ = v_passPipeline_29_;
goto v___jp_22_;
}
else
{
if (v_andFlattening_20_ == 0)
{
lean_inc(v_passPipeline_29_);
v_passPipeline_23_ = v_passPipeline_29_;
goto v___jp_22_;
}
else
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__1, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__1);
lean_inc(v_passPipeline_29_);
v___x_31_ = l_List_appendTR___redArg(v_passPipeline_29_, v___x_30_);
v_passPipeline_23_ = v___x_31_;
goto v___jp_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___boxed(lean_object* v_a_34_, lean_object* v_a_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg(v_a_34_);
lean_dec_ref(v_a_34_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline(lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg(v_a_37_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___boxed(lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline(v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_, v_a_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_);
lean_dec(v_a_60_);
lean_dec_ref(v_a_59_);
lean_dec(v_a_58_);
lean_dec_ref(v_a_57_);
lean_dec(v_a_56_);
lean_dec_ref(v_a_55_);
lean_dec(v_a_54_);
lean_dec_ref(v_a_53_);
lean_dec(v_a_52_);
lean_dec(v_a_51_);
lean_dec_ref(v_a_50_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___redArg___lam__0(lean_object* v_x_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_){
_start:
{
lean_object* v___x_74_; 
lean_inc(v___y_68_);
lean_inc_ref(v___y_67_);
lean_inc(v___y_66_);
lean_inc_ref(v___y_65_);
lean_inc(v___y_64_);
v___x_74_ = lean_apply_10(v_x_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_, lean_box(0));
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___redArg___lam__0___boxed(lean_object* v_x_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___redArg___lam__0(v_x_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
lean_dec(v___y_76_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___redArg(lean_object* v_mvarId_87_, lean_object* v_x_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v___f_99_; lean_object* v___x_100_; 
lean_inc(v___y_93_);
lean_inc_ref(v___y_92_);
lean_inc(v___y_91_);
lean_inc_ref(v___y_90_);
lean_inc(v___y_89_);
v___f_99_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_99_, 0, v_x_88_);
lean_closure_set(v___f_99_, 1, v___y_89_);
lean_closure_set(v___f_99_, 2, v___y_90_);
lean_closure_set(v___f_99_, 3, v___y_91_);
lean_closure_set(v___f_99_, 4, v___y_92_);
lean_closure_set(v___f_99_, 5, v___y_93_);
v___x_100_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_87_, v___f_99_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
if (lean_obj_tag(v___x_100_) == 0)
{
return v___x_100_;
}
else
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_108_; 
v_a_101_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_108_ == 0)
{
v___x_103_ = v___x_100_;
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_100_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___redArg___boxed(lean_object* v_mvarId_109_, lean_object* v_x_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___redArg(v_mvarId_109_, v_x_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_, v___y_119_);
lean_dec(v___y_119_);
lean_dec_ref(v___y_118_);
lean_dec(v___y_117_);
lean_dec_ref(v___y_116_);
lean_dec(v___y_115_);
lean_dec_ref(v___y_114_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
lean_dec(v___y_111_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0(lean_object* v_00_u03b1_122_, lean_object* v_mvarId_123_, lean_object* v_x_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___redArg(v_mvarId_123_, v_x_124_, v___y_125_, v___y_126_, v___y_127_, v___y_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___boxed(lean_object* v_00_u03b1_136_, lean_object* v_mvarId_137_, lean_object* v_x_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0(v_00_u03b1_136_, v_mvarId_137_, v_x_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
lean_dec(v___y_143_);
lean_dec_ref(v___y_142_);
lean_dec(v___y_141_);
lean_dec_ref(v___y_140_);
lean_dec(v___y_139_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__0(lean_object* v_caches_150_, lean_object* v_x_151_){
_start:
{
lean_inc_ref(v_caches_150_);
return v_caches_150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__0___boxed(lean_object* v_caches_152_, lean_object* v_x_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__0(v_caches_152_, v_x_153_);
lean_dec_ref(v_x_153_);
lean_dec_ref(v_caches_152_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__1(lean_object* v_goal_155_, lean_object* v___f_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_167_ = lean_st_mk_ref(v_goal_155_);
v___x_168_ = l_Lean_Meta_Grind_BVDecide_bvExt;
v___x_169_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_168_, v___f_156_, v___x_167_);
if (lean_obj_tag(v___x_169_) == 0)
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_179_; 
v_a_170_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_179_ == 0)
{
v___x_172_ = v___x_169_;
v_isShared_173_ = v_isSharedCheck_179_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_169_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_179_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_174_ = lean_st_ref_get(v___x_167_);
lean_dec(v___x_167_);
v___x_175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_175_, 0, v_a_170_);
lean_ctor_set(v___x_175_, 1, v___x_174_);
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 0, v___x_175_);
v___x_177_ = v___x_172_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
else
{
lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_187_; 
lean_dec(v___x_167_);
v_a_180_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_187_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_187_ == 0)
{
v___x_182_ = v___x_169_;
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_dec(v___x_169_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_185_; 
if (v_isShared_183_ == 0)
{
v___x_185_ = v___x_182_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v_a_180_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__1___boxed(lean_object* v_goal_188_, lean_object* v___f_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__1(v_goal_188_, v___f_189_, v___y_190_, v___y_191_, v___y_192_, v___y_193_, v___y_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_);
lean_dec(v___y_198_);
lean_dec_ref(v___y_197_);
lean_dec(v___y_196_);
lean_dec_ref(v___y_195_);
lean_dec(v___y_194_);
lean_dec_ref(v___y_193_);
lean_dec(v___y_192_);
lean_dec_ref(v___y_191_);
lean_dec(v___y_190_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__2(lean_object* v_goal_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_st_mk_ref(v_goal_201_);
v___x_213_ = l_Lean_Meta_Grind_BVDecide_getCaches___redArg(v___x_212_, v___y_209_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_223_; 
v_a_214_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_223_ == 0)
{
v___x_216_ = v___x_213_;
v_isShared_217_ = v_isSharedCheck_223_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_213_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_223_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_221_; 
v___x_218_ = lean_st_ref_get(v___x_212_);
lean_dec(v___x_212_);
v___x_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_219_, 0, v_a_214_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 0, v___x_219_);
v___x_221_ = v___x_216_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_219_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
else
{
lean_object* v_a_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_231_; 
lean_dec(v___x_212_);
v_a_224_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_231_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_231_ == 0)
{
v___x_226_ = v___x_213_;
v_isShared_227_ = v_isSharedCheck_231_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_a_224_);
lean_dec(v___x_213_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_231_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_229_; 
if (v_isShared_227_ == 0)
{
v___x_229_ = v___x_226_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_a_224_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__2___boxed(lean_object* v_goal_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__2(v_goal_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_, v___y_240_, v___y_241_);
lean_dec(v___y_241_);
lean_dec_ref(v___y_240_);
lean_dec(v___y_239_);
lean_dec_ref(v___y_238_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
lean_dec(v___y_233_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg(lean_object* v_x_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_){
_start:
{
lean_object* v___y_258_; lean_object* v___y_259_; lean_object* v___y_260_; lean_object* v___y_261_; lean_object* v___y_262_; lean_object* v___y_263_; lean_object* v___y_264_; lean_object* v___y_265_; lean_object* v___y_266_; lean_object* v___y_267_; lean_object* v___y_268_; lean_object* v___x_328_; lean_object* v_target_329_; 
v___x_328_ = lean_st_ref_get(v_a_246_);
v_target_329_ = lean_ctor_get(v___x_328_, 2);
lean_inc_ref(v_target_329_);
lean_dec(v___x_328_);
if (lean_obj_tag(v_target_329_) == 1)
{
lean_object* v_goal_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_379_; 
v_goal_330_ = lean_ctor_get(v_target_329_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v_target_329_);
if (v_isSharedCheck_379_ == 0)
{
v___x_332_ = v_target_329_;
v_isShared_333_ = v_isSharedCheck_379_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_goal_330_);
lean_dec(v_target_329_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_379_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v_mvarId_334_; lean_object* v___f_335_; lean_object* v___x_336_; 
v_mvarId_334_ = lean_ctor_get(v_goal_330_, 1);
lean_inc(v_mvarId_334_);
v___f_335_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__2___boxed), 11, 1);
lean_closure_set(v___f_335_, 0, v_goal_330_);
v___x_336_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___redArg(v_mvarId_334_, v___f_335_, v_a_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_, v_a_254_, v_a_255_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v_fst_338_; lean_object* v_snd_339_; lean_object* v___x_341_; 
v_a_337_ = lean_ctor_get(v___x_336_, 0);
lean_inc(v_a_337_);
lean_dec_ref_known(v___x_336_, 1);
v_fst_338_ = lean_ctor_get(v_a_337_, 0);
lean_inc(v_fst_338_);
v_snd_339_ = lean_ctor_get(v_a_337_, 1);
lean_inc(v_snd_339_);
lean_dec(v_a_337_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 0, v_snd_339_);
v___x_341_ = v___x_332_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_snd_339_);
v___x_341_ = v_reuseFailAlloc_370_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
lean_object* v___x_342_; lean_object* v_caches_343_; lean_object* v_typeAnalysis_344_; lean_object* v_hypotheses_345_; uint8_t v_didChange_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_368_; 
v___x_342_ = lean_st_ref_take(v_a_246_);
v_caches_343_ = lean_ctor_get(v___x_342_, 0);
v_typeAnalysis_344_ = lean_ctor_get(v___x_342_, 1);
v_hypotheses_345_ = lean_ctor_get(v___x_342_, 3);
v_didChange_346_ = lean_ctor_get_uint8(v___x_342_, sizeof(void*)*4);
v_isSharedCheck_368_ = !lean_is_exclusive(v___x_342_);
if (v_isSharedCheck_368_ == 0)
{
lean_object* v_unused_369_; 
v_unused_369_ = lean_ctor_get(v___x_342_, 2);
lean_dec(v_unused_369_);
v___x_348_ = v___x_342_;
v_isShared_349_ = v_isSharedCheck_368_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_hypotheses_345_);
lean_inc(v_typeAnalysis_344_);
lean_inc(v_caches_343_);
lean_dec(v___x_342_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_368_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 2, v___x_341_);
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v_caches_343_);
lean_ctor_set(v_reuseFailAlloc_367_, 1, v_typeAnalysis_344_);
lean_ctor_set(v_reuseFailAlloc_367_, 2, v___x_341_);
lean_ctor_set(v_reuseFailAlloc_367_, 3, v_hypotheses_345_);
lean_ctor_set_uint8(v_reuseFailAlloc_367_, sizeof(void*)*4, v_didChange_346_);
v___x_351_ = v_reuseFailAlloc_367_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v_typeAnalysis_354_; lean_object* v_target_355_; lean_object* v_hypotheses_356_; uint8_t v_didChange_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_365_; 
v___x_352_ = lean_st_ref_put(v_a_246_, v___x_351_);
v___x_353_ = lean_st_ref_take(v_a_246_);
v_typeAnalysis_354_ = lean_ctor_get(v___x_353_, 1);
v_target_355_ = lean_ctor_get(v___x_353_, 2);
v_hypotheses_356_ = lean_ctor_get(v___x_353_, 3);
v_didChange_357_ = lean_ctor_get_uint8(v___x_353_, sizeof(void*)*4);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_365_ == 0)
{
lean_object* v_unused_366_; 
v_unused_366_ = lean_ctor_get(v___x_353_, 0);
lean_dec(v_unused_366_);
v___x_359_ = v___x_353_;
v_isShared_360_ = v_isSharedCheck_365_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_hypotheses_356_);
lean_inc(v_target_355_);
lean_inc(v_typeAnalysis_354_);
lean_dec(v___x_353_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_365_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_362_; 
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v_fst_338_);
v___x_362_ = v___x_359_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v_fst_338_);
lean_ctor_set(v_reuseFailAlloc_364_, 1, v_typeAnalysis_354_);
lean_ctor_set(v_reuseFailAlloc_364_, 2, v_target_355_);
lean_ctor_set(v_reuseFailAlloc_364_, 3, v_hypotheses_356_);
lean_ctor_set_uint8(v_reuseFailAlloc_364_, sizeof(void*)*4, v_didChange_357_);
v___x_362_ = v_reuseFailAlloc_364_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
lean_object* v___x_363_; 
v___x_363_ = lean_st_ref_put(v_a_246_, v___x_362_);
v___y_258_ = v_a_245_;
v___y_259_ = v_a_246_;
v___y_260_ = v_a_247_;
v___y_261_ = v_a_248_;
v___y_262_ = v_a_249_;
v___y_263_ = v_a_250_;
v___y_264_ = v_a_251_;
v___y_265_ = v_a_252_;
v___y_266_ = v_a_253_;
v___y_267_ = v_a_254_;
v___y_268_ = v_a_255_;
goto v___jp_257_;
}
}
}
}
}
}
else
{
lean_object* v_a_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_378_; 
lean_del_object(v___x_332_);
lean_dec_ref(v_x_244_);
v_a_371_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_378_ == 0)
{
v___x_373_ = v___x_336_;
v_isShared_374_ = v_isSharedCheck_378_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_a_371_);
lean_dec(v___x_336_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_378_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_376_; 
if (v_isShared_374_ == 0)
{
v___x_376_ = v___x_373_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v_a_371_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
return v___x_376_;
}
}
}
}
}
else
{
lean_dec_ref(v_target_329_);
v___y_258_ = v_a_245_;
v___y_259_ = v_a_246_;
v___y_260_ = v_a_247_;
v___y_261_ = v_a_248_;
v___y_262_ = v_a_249_;
v___y_263_ = v_a_250_;
v___y_264_ = v_a_251_;
v___y_265_ = v_a_252_;
v___y_266_ = v_a_253_;
v___y_267_ = v_a_254_;
v___y_268_ = v_a_255_;
goto v___jp_257_;
}
v___jp_257_:
{
lean_object* v___x_269_; 
lean_inc(v___y_268_);
lean_inc_ref(v___y_267_);
lean_inc(v___y_266_);
lean_inc_ref(v___y_265_);
lean_inc(v___y_264_);
lean_inc_ref(v___y_263_);
lean_inc(v___y_262_);
lean_inc_ref(v___y_261_);
lean_inc(v___y_260_);
lean_inc(v___y_259_);
lean_inc_ref(v___y_258_);
v___x_269_ = lean_apply_12(v_x_244_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, lean_box(0));
if (lean_obj_tag(v___x_269_) == 0)
{
lean_object* v_a_270_; lean_object* v_mode_271_; uint8_t v___x_272_; 
v_a_270_ = lean_ctor_get(v___x_269_, 0);
lean_inc(v_a_270_);
v_mode_271_ = lean_ctor_get(v___y_258_, 1);
v___x_272_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(v_mode_271_);
if (v___x_272_ == 0)
{
lean_dec(v_a_270_);
return v___x_269_;
}
else
{
lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_326_; 
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_269_);
if (v_isSharedCheck_326_ == 0)
{
lean_object* v_unused_327_; 
v_unused_327_ = lean_ctor_get(v___x_269_, 0);
lean_dec(v_unused_327_);
v___x_274_ = v___x_269_;
v_isShared_275_ = v_isSharedCheck_326_;
goto v_resetjp_273_;
}
else
{
lean_dec(v___x_269_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_326_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_276_; lean_object* v_caches_277_; lean_object* v___f_278_; lean_object* v___x_279_; lean_object* v_target_280_; 
v___x_276_ = lean_st_ref_get(v___y_259_);
v_caches_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc_ref(v_caches_277_);
lean_dec(v___x_276_);
v___f_278_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_278_, 0, v_caches_277_);
v___x_279_ = lean_st_ref_get(v___y_259_);
v_target_280_ = lean_ctor_get(v___x_279_, 2);
lean_inc_ref(v_target_280_);
lean_dec(v___x_279_);
if (lean_obj_tag(v_target_280_) == 1)
{
lean_object* v_goal_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_322_; 
lean_del_object(v___x_274_);
v_goal_281_ = lean_ctor_get(v_target_280_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v_target_280_);
if (v_isSharedCheck_322_ == 0)
{
v___x_283_ = v_target_280_;
v_isShared_284_ = v_isSharedCheck_322_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_goal_281_);
lean_dec(v_target_280_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_322_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v_mvarId_285_; lean_object* v___f_286_; lean_object* v___x_287_; 
v_mvarId_285_ = lean_ctor_get(v_goal_281_, 1);
lean_inc(v_mvarId_285_);
v___f_286_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___lam__1___boxed), 12, 2);
lean_closure_set(v___f_286_, 0, v_goal_281_);
lean_closure_set(v___f_286_, 1, v___f_278_);
v___x_287_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches_spec__0___redArg(v_mvarId_285_, v___f_286_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_313_; 
v_a_288_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_313_ == 0)
{
v___x_290_ = v___x_287_;
v_isShared_291_ = v_isSharedCheck_313_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_287_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_313_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v_snd_292_; lean_object* v___x_294_; 
v_snd_292_ = lean_ctor_get(v_a_288_, 1);
lean_inc(v_snd_292_);
lean_dec(v_a_288_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 0, v_snd_292_);
v___x_294_ = v___x_283_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_snd_292_);
v___x_294_ = v_reuseFailAlloc_312_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
lean_object* v___x_295_; lean_object* v_caches_296_; lean_object* v_typeAnalysis_297_; lean_object* v_hypotheses_298_; uint8_t v_didChange_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_310_; 
v___x_295_ = lean_st_ref_take(v___y_259_);
v_caches_296_ = lean_ctor_get(v___x_295_, 0);
v_typeAnalysis_297_ = lean_ctor_get(v___x_295_, 1);
v_hypotheses_298_ = lean_ctor_get(v___x_295_, 3);
v_didChange_299_ = lean_ctor_get_uint8(v___x_295_, sizeof(void*)*4);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_310_ == 0)
{
lean_object* v_unused_311_; 
v_unused_311_ = lean_ctor_get(v___x_295_, 2);
lean_dec(v_unused_311_);
v___x_301_ = v___x_295_;
v_isShared_302_ = v_isSharedCheck_310_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_hypotheses_298_);
lean_inc(v_typeAnalysis_297_);
lean_inc(v_caches_296_);
lean_dec(v___x_295_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_310_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_304_; 
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 2, v___x_294_);
v___x_304_ = v___x_301_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_caches_296_);
lean_ctor_set(v_reuseFailAlloc_309_, 1, v_typeAnalysis_297_);
lean_ctor_set(v_reuseFailAlloc_309_, 2, v___x_294_);
lean_ctor_set(v_reuseFailAlloc_309_, 3, v_hypotheses_298_);
lean_ctor_set_uint8(v_reuseFailAlloc_309_, sizeof(void*)*4, v_didChange_299_);
v___x_304_ = v_reuseFailAlloc_309_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
lean_object* v___x_305_; lean_object* v___x_307_; 
v___x_305_ = lean_st_ref_put(v___y_259_, v___x_304_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 0, v_a_270_);
v___x_307_ = v___x_290_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_a_270_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
}
}
else
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_321_; 
lean_del_object(v___x_283_);
lean_dec(v_a_270_);
v_a_314_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_321_ == 0)
{
v___x_316_ = v___x_287_;
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_287_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_319_; 
if (v_isShared_317_ == 0)
{
v___x_319_ = v___x_316_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_314_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
}
else
{
lean_object* v___x_324_; 
lean_dec_ref(v_target_280_);
lean_dec_ref(v___f_278_);
if (v_isShared_275_ == 0)
{
v___x_324_ = v___x_274_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_a_270_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
}
}
else
{
return v___x_269_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg___boxed(lean_object* v_x_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg(v_x_380_, v_a_381_, v_a_382_, v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_387_, v_a_388_, v_a_389_, v_a_390_, v_a_391_);
lean_dec(v_a_391_);
lean_dec_ref(v_a_390_);
lean_dec(v_a_389_);
lean_dec_ref(v_a_388_);
lean_dec(v_a_387_);
lean_dec_ref(v_a_386_);
lean_dec(v_a_385_);
lean_dec_ref(v_a_384_);
lean_dec(v_a_383_);
lean_dec(v_a_382_);
lean_dec_ref(v_a_381_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches(lean_object* v_00_u03b1_394_, lean_object* v_x_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg(v_x_395_, v_a_396_, v_a_397_, v_a_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___boxed(lean_object* v_00_u03b1_409_, lean_object* v_x_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches(v_00_u03b1_409_, v_x_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_, v_a_421_);
lean_dec(v_a_421_);
lean_dec_ref(v_a_420_);
lean_dec(v_a_419_);
lean_dec_ref(v_a_418_);
lean_dec(v_a_417_);
lean_dec_ref(v_a_416_);
lean_dec(v_a_415_);
lean_dec_ref(v_a_414_);
lean_dec(v_a_413_);
lean_dec(v_a_412_);
lean_dec_ref(v_a_411_);
return v_res_423_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_424_ = lean_unsigned_to_nat(32u);
v___x_425_ = lean_mk_empty_array_with_capacity(v___x_424_);
v___x_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
return v___x_426_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_427_ = ((size_t)5ULL);
v___x_428_ = lean_unsigned_to_nat(0u);
v___x_429_ = lean_unsigned_to_nat(32u);
v___x_430_ = lean_mk_empty_array_with_capacity(v___x_429_);
v___x_431_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg___closed__0);
v___x_432_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_432_, 0, v___x_431_);
lean_ctor_set(v___x_432_, 1, v___x_430_);
lean_ctor_set(v___x_432_, 2, v___x_428_);
lean_ctor_set(v___x_432_, 3, v___x_428_);
lean_ctor_set_usize(v___x_432_, 4, v___x_427_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg(lean_object* v___y_433_){
_start:
{
lean_object* v___x_435_; lean_object* v_traceState_436_; lean_object* v_traces_437_; lean_object* v___x_438_; lean_object* v_traceState_439_; lean_object* v_env_440_; lean_object* v_nextMacroScope_441_; lean_object* v_ngen_442_; lean_object* v_auxDeclNGen_443_; lean_object* v_cache_444_; lean_object* v_recordedDeps_445_; lean_object* v_messages_446_; lean_object* v_infoState_447_; lean_object* v_snapshotTasks_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_467_; 
v___x_435_ = lean_st_ref_get(v___y_433_);
v_traceState_436_ = lean_ctor_get(v___x_435_, 4);
lean_inc_ref(v_traceState_436_);
lean_dec(v___x_435_);
v_traces_437_ = lean_ctor_get(v_traceState_436_, 0);
lean_inc_ref(v_traces_437_);
lean_dec_ref(v_traceState_436_);
v___x_438_ = lean_st_ref_take(v___y_433_);
v_traceState_439_ = lean_ctor_get(v___x_438_, 4);
v_env_440_ = lean_ctor_get(v___x_438_, 0);
v_nextMacroScope_441_ = lean_ctor_get(v___x_438_, 1);
v_ngen_442_ = lean_ctor_get(v___x_438_, 2);
v_auxDeclNGen_443_ = lean_ctor_get(v___x_438_, 3);
v_cache_444_ = lean_ctor_get(v___x_438_, 5);
v_recordedDeps_445_ = lean_ctor_get(v___x_438_, 6);
v_messages_446_ = lean_ctor_get(v___x_438_, 7);
v_infoState_447_ = lean_ctor_get(v___x_438_, 8);
v_snapshotTasks_448_ = lean_ctor_get(v___x_438_, 9);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_467_ == 0)
{
v___x_450_ = v___x_438_;
v_isShared_451_ = v_isSharedCheck_467_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_snapshotTasks_448_);
lean_inc(v_infoState_447_);
lean_inc(v_messages_446_);
lean_inc(v_recordedDeps_445_);
lean_inc(v_cache_444_);
lean_inc(v_traceState_439_);
lean_inc(v_auxDeclNGen_443_);
lean_inc(v_ngen_442_);
lean_inc(v_nextMacroScope_441_);
lean_inc(v_env_440_);
lean_dec(v___x_438_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_467_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
uint64_t v_tid_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_465_; 
v_tid_452_ = lean_ctor_get_uint64(v_traceState_439_, sizeof(void*)*1);
v_isSharedCheck_465_ = !lean_is_exclusive(v_traceState_439_);
if (v_isSharedCheck_465_ == 0)
{
lean_object* v_unused_466_; 
v_unused_466_ = lean_ctor_get(v_traceState_439_, 0);
lean_dec(v_unused_466_);
v___x_454_ = v_traceState_439_;
v_isShared_455_ = v_isSharedCheck_465_;
goto v_resetjp_453_;
}
else
{
lean_dec(v_traceState_439_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_465_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_456_; lean_object* v___x_458_; 
v___x_456_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg___closed__1);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 0, v___x_456_);
v___x_458_ = v___x_454_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v___x_456_);
lean_ctor_set_uint64(v_reuseFailAlloc_464_, sizeof(void*)*1, v_tid_452_);
v___x_458_ = v_reuseFailAlloc_464_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
lean_object* v___x_460_; 
if (v_isShared_451_ == 0)
{
lean_ctor_set(v___x_450_, 4, v___x_458_);
v___x_460_ = v___x_450_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_env_440_);
lean_ctor_set(v_reuseFailAlloc_463_, 1, v_nextMacroScope_441_);
lean_ctor_set(v_reuseFailAlloc_463_, 2, v_ngen_442_);
lean_ctor_set(v_reuseFailAlloc_463_, 3, v_auxDeclNGen_443_);
lean_ctor_set(v_reuseFailAlloc_463_, 4, v___x_458_);
lean_ctor_set(v_reuseFailAlloc_463_, 5, v_cache_444_);
lean_ctor_set(v_reuseFailAlloc_463_, 6, v_recordedDeps_445_);
lean_ctor_set(v_reuseFailAlloc_463_, 7, v_messages_446_);
lean_ctor_set(v_reuseFailAlloc_463_, 8, v_infoState_447_);
lean_ctor_set(v_reuseFailAlloc_463_, 9, v_snapshotTasks_448_);
v___x_460_ = v_reuseFailAlloc_463_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_st_ref_put(v___y_433_, v___x_460_);
v___x_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_462_, 0, v_traces_437_);
return v___x_462_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg___boxed(lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg(v___y_468_);
lean_dec(v___y_468_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0(lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg(v___y_481_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___boxed(lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0(v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
lean_dec(v___y_492_);
lean_dec_ref(v___y_491_);
lean_dec(v___y_490_);
lean_dec_ref(v___y_489_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
lean_dec(v___y_486_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
return v_res_496_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(lean_object* v_opts_497_, lean_object* v_opt_498_){
_start:
{
lean_object* v_name_499_; lean_object* v_defValue_500_; lean_object* v_map_501_; lean_object* v___x_502_; 
v_name_499_ = lean_ctor_get(v_opt_498_, 0);
v_defValue_500_ = lean_ctor_get(v_opt_498_, 1);
v_map_501_ = lean_ctor_get(v_opts_497_, 0);
v___x_502_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_501_, v_name_499_);
if (lean_obj_tag(v___x_502_) == 0)
{
uint8_t v___x_503_; 
v___x_503_ = lean_unbox(v_defValue_500_);
return v___x_503_;
}
else
{
lean_object* v_val_504_; 
v_val_504_ = lean_ctor_get(v___x_502_, 0);
lean_inc(v_val_504_);
lean_dec_ref_known(v___x_502_, 1);
if (lean_obj_tag(v_val_504_) == 1)
{
uint8_t v_v_505_; 
v_v_505_ = lean_ctor_get_uint8(v_val_504_, 0);
lean_dec_ref_known(v_val_504_, 0);
return v_v_505_;
}
else
{
uint8_t v___x_506_; 
lean_dec(v_val_504_);
v___x_506_ = lean_unbox(v_defValue_500_);
return v___x_506_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1___boxed(lean_object* v_opts_507_, lean_object* v_opt_508_){
_start:
{
uint8_t v_res_509_; lean_object* v_r_510_; 
v_res_509_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v_opts_507_, v_opt_508_);
lean_dec_ref(v_opt_508_);
lean_dec_ref(v_opts_507_);
v_r_510_ = lean_box(v_res_509_);
return v_r_510_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___closed__1(void){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___closed__0));
v___x_513_ = l_Lean_stringToMessageData(v___x_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0(lean_object* v_name_514_, lean_object* v_x_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_528_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___closed__1, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___closed__1);
v___x_529_ = l_Lean_MessageData_ofName(v_name_514_);
v___x_530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_528_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___x_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___boxed(lean_object* v_name_532_, lean_object* v_x_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0(v_name_532_, v_x_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec(v___y_536_);
lean_dec(v___y_535_);
lean_dec_ref(v___y_534_);
lean_dec_ref(v_x_533_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3_spec__7(lean_object* v_msgData_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_){
_start:
{
lean_object* v___x_553_; lean_object* v_env_554_; uint8_t v___x_555_; lean_object* v_env_556_; lean_object* v___x_557_; lean_object* v_toCold_558_; lean_object* v_mctx_559_; lean_object* v_lctx_560_; lean_object* v_options_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_553_ = lean_st_ref_get(v___y_551_);
v_env_554_ = lean_ctor_get(v___x_553_, 0);
lean_inc_ref(v_env_554_);
lean_dec(v___x_553_);
v___x_555_ = 0;
v_env_556_ = l_Lean_Environment_setRecordingDeps(v_env_554_, v___x_555_);
v___x_557_ = lean_st_ref_get(v___y_549_);
v_toCold_558_ = lean_ctor_get(v___y_550_, 0);
v_mctx_559_ = lean_ctor_get(v___x_557_, 0);
lean_inc_ref(v_mctx_559_);
lean_dec(v___x_557_);
v_lctx_560_ = lean_ctor_get(v___y_548_, 2);
v_options_561_ = lean_ctor_get(v_toCold_558_, 2);
lean_inc_ref(v_options_561_);
lean_inc_ref(v_lctx_560_);
v___x_562_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_562_, 0, v_env_556_);
lean_ctor_set(v___x_562_, 1, v_mctx_559_);
lean_ctor_set(v___x_562_, 2, v_lctx_560_);
lean_ctor_set(v___x_562_, 3, v_options_561_);
v___x_563_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
lean_ctor_set(v___x_563_, 1, v_msgData_547_);
v___x_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3_spec__7___boxed(lean_object* v_msgData_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3_spec__7(v_msgData_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
return v_res_571_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_572_; double v___x_573_; 
v___x_572_ = lean_unsigned_to_nat(0u);
v___x_573_ = lean_float_of_nat(v___x_572_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg(lean_object* v_cls_577_, lean_object* v_msg_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v_ref_584_; lean_object* v___x_585_; lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_631_; 
v_ref_584_ = lean_ctor_get(v___y_581_, 2);
v___x_585_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3_spec__7(v_msg_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_);
v_a_586_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_631_ == 0)
{
v___x_588_ = v___x_585_;
v_isShared_589_ = v_isSharedCheck_631_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_585_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_631_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_590_; lean_object* v_traceState_591_; lean_object* v_env_592_; lean_object* v_nextMacroScope_593_; lean_object* v_ngen_594_; lean_object* v_auxDeclNGen_595_; lean_object* v_cache_596_; lean_object* v_recordedDeps_597_; lean_object* v_messages_598_; lean_object* v_infoState_599_; lean_object* v_snapshotTasks_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_630_; 
v___x_590_ = lean_st_ref_take(v___y_582_);
v_traceState_591_ = lean_ctor_get(v___x_590_, 4);
v_env_592_ = lean_ctor_get(v___x_590_, 0);
v_nextMacroScope_593_ = lean_ctor_get(v___x_590_, 1);
v_ngen_594_ = lean_ctor_get(v___x_590_, 2);
v_auxDeclNGen_595_ = lean_ctor_get(v___x_590_, 3);
v_cache_596_ = lean_ctor_get(v___x_590_, 5);
v_recordedDeps_597_ = lean_ctor_get(v___x_590_, 6);
v_messages_598_ = lean_ctor_get(v___x_590_, 7);
v_infoState_599_ = lean_ctor_get(v___x_590_, 8);
v_snapshotTasks_600_ = lean_ctor_get(v___x_590_, 9);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_630_ == 0)
{
v___x_602_ = v___x_590_;
v_isShared_603_ = v_isSharedCheck_630_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_snapshotTasks_600_);
lean_inc(v_infoState_599_);
lean_inc(v_messages_598_);
lean_inc(v_recordedDeps_597_);
lean_inc(v_cache_596_);
lean_inc(v_traceState_591_);
lean_inc(v_auxDeclNGen_595_);
lean_inc(v_ngen_594_);
lean_inc(v_nextMacroScope_593_);
lean_inc(v_env_592_);
lean_dec(v___x_590_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_630_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
uint64_t v_tid_604_; lean_object* v_traces_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_629_; 
v_tid_604_ = lean_ctor_get_uint64(v_traceState_591_, sizeof(void*)*1);
v_traces_605_ = lean_ctor_get(v_traceState_591_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v_traceState_591_);
if (v_isSharedCheck_629_ == 0)
{
v___x_607_ = v_traceState_591_;
v_isShared_608_ = v_isSharedCheck_629_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_traces_605_);
lean_dec(v_traceState_591_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_629_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_609_; lean_object* v___x_610_; double v___x_611_; uint8_t v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_620_; 
v___x_609_ = lean_box(0);
v___x_610_ = lean_box(0);
v___x_611_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__0);
v___x_612_ = 0;
v___x_613_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__1));
v___x_614_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_614_, 0, v_cls_577_);
lean_ctor_set(v___x_614_, 1, v___x_610_);
lean_ctor_set(v___x_614_, 2, v___x_613_);
lean_ctor_set_float(v___x_614_, sizeof(void*)*3, v___x_611_);
lean_ctor_set_float(v___x_614_, sizeof(void*)*3 + 8, v___x_611_);
lean_ctor_set_uint8(v___x_614_, sizeof(void*)*3 + 16, v___x_612_);
v___x_615_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__2));
v___x_616_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_616_, 0, v___x_614_);
lean_ctor_set(v___x_616_, 1, v_a_586_);
lean_ctor_set(v___x_616_, 2, v___x_615_);
lean_inc(v_ref_584_);
v___x_617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_617_, 0, v_ref_584_);
lean_ctor_set(v___x_617_, 1, v___x_616_);
v___x_618_ = l_Lean_PersistentArray_push___redArg(v_traces_605_, v___x_617_);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v___x_618_);
v___x_620_ = v___x_607_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v___x_618_);
lean_ctor_set_uint64(v_reuseFailAlloc_628_, sizeof(void*)*1, v_tid_604_);
v___x_620_ = v_reuseFailAlloc_628_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
lean_object* v___x_622_; 
if (v_isShared_603_ == 0)
{
lean_ctor_set(v___x_602_, 4, v___x_620_);
v___x_622_ = v___x_602_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_env_592_);
lean_ctor_set(v_reuseFailAlloc_627_, 1, v_nextMacroScope_593_);
lean_ctor_set(v_reuseFailAlloc_627_, 2, v_ngen_594_);
lean_ctor_set(v_reuseFailAlloc_627_, 3, v_auxDeclNGen_595_);
lean_ctor_set(v_reuseFailAlloc_627_, 4, v___x_620_);
lean_ctor_set(v_reuseFailAlloc_627_, 5, v_cache_596_);
lean_ctor_set(v_reuseFailAlloc_627_, 6, v_recordedDeps_597_);
lean_ctor_set(v_reuseFailAlloc_627_, 7, v_messages_598_);
lean_ctor_set(v_reuseFailAlloc_627_, 8, v_infoState_599_);
lean_ctor_set(v_reuseFailAlloc_627_, 9, v_snapshotTasks_600_);
v___x_622_ = v_reuseFailAlloc_627_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
lean_object* v___x_623_; lean_object* v___x_625_; 
v___x_623_ = lean_st_ref_put(v___y_582_, v___x_622_);
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 0, v___x_609_);
v___x_625_ = v___x_588_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_609_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___boxed(lean_object* v_cls_632_, lean_object* v_msg_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg(v_cls_632_, v_msg_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
lean_dec(v___y_637_);
lean_dec_ref(v___y_636_);
lean_dec(v___y_635_);
lean_dec_ref(v___y_634_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__5(lean_object* v_opts_640_, lean_object* v_opt_641_){
_start:
{
lean_object* v_name_642_; lean_object* v_defValue_643_; lean_object* v_map_644_; lean_object* v___x_645_; 
v_name_642_ = lean_ctor_get(v_opt_641_, 0);
v_defValue_643_ = lean_ctor_get(v_opt_641_, 1);
v_map_644_ = lean_ctor_get(v_opts_640_, 0);
v___x_645_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_644_, v_name_642_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_inc(v_defValue_643_);
return v_defValue_643_;
}
else
{
lean_object* v_val_646_; 
v_val_646_ = lean_ctor_get(v___x_645_, 0);
lean_inc(v_val_646_);
lean_dec_ref_known(v___x_645_, 1);
if (lean_obj_tag(v_val_646_) == 3)
{
lean_object* v_v_647_; 
v_v_647_ = lean_ctor_get(v_val_646_, 0);
lean_inc(v_v_647_);
lean_dec_ref_known(v_val_646_, 1);
return v_v_647_;
}
else
{
lean_dec(v_val_646_);
lean_inc(v_defValue_643_);
return v_defValue_643_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__5___boxed(lean_object* v_opts_648_, lean_object* v_opt_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__5(v_opts_648_, v_opt_649_);
lean_dec_ref(v_opt_649_);
lean_dec_ref(v_opts_648_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2_spec__3(size_t v_sz_651_, size_t v_i_652_, lean_object* v_bs_653_){
_start:
{
uint8_t v___x_654_; 
v___x_654_ = lean_usize_dec_lt(v_i_652_, v_sz_651_);
if (v___x_654_ == 0)
{
return v_bs_653_;
}
else
{
lean_object* v_v_655_; lean_object* v_msg_656_; lean_object* v___x_657_; lean_object* v_bs_x27_658_; size_t v___x_659_; size_t v___x_660_; lean_object* v___x_661_; 
v_v_655_ = lean_array_uget_borrowed(v_bs_653_, v_i_652_);
v_msg_656_ = lean_ctor_get(v_v_655_, 1);
lean_inc_ref(v_msg_656_);
v___x_657_ = lean_unsigned_to_nat(0u);
v_bs_x27_658_ = lean_array_uset(v_bs_653_, v_i_652_, v___x_657_);
v___x_659_ = ((size_t)1ULL);
v___x_660_ = lean_usize_add(v_i_652_, v___x_659_);
v___x_661_ = lean_array_uset(v_bs_x27_658_, v_i_652_, v_msg_656_);
v_i_652_ = v___x_660_;
v_bs_653_ = v___x_661_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2_spec__3___boxed(lean_object* v_sz_663_, lean_object* v_i_664_, lean_object* v_bs_665_){
_start:
{
size_t v_sz_boxed_666_; size_t v_i_boxed_667_; lean_object* v_res_668_; 
v_sz_boxed_666_ = lean_unbox_usize(v_sz_663_);
lean_dec(v_sz_663_);
v_i_boxed_667_ = lean_unbox_usize(v_i_664_);
lean_dec(v_i_664_);
v_res_668_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2_spec__3(v_sz_boxed_666_, v_i_boxed_667_, v_bs_665_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2___redArg(lean_object* v_oldTraces_669_, lean_object* v_data_670_, lean_object* v_ref_671_, lean_object* v_msg_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_){
_start:
{
lean_object* v_toCold_678_; lean_object* v_currRecDepth_679_; lean_object* v_ref_680_; uint16_t v_optionFlags_681_; uint8_t v_suppressElabErrors_682_; uint8_t v_checkDeprecated_683_; uint8_t v_isRecordingDeps_684_; lean_object* v_ref_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v_traceState_688_; lean_object* v_traces_689_; lean_object* v___x_690_; size_t v_sz_691_; size_t v___x_692_; lean_object* v___x_693_; lean_object* v_msg_694_; lean_object* v___x_695_; lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_734_; 
v_toCold_678_ = lean_ctor_get(v___y_675_, 0);
v_currRecDepth_679_ = lean_ctor_get(v___y_675_, 1);
v_ref_680_ = lean_ctor_get(v___y_675_, 2);
v_optionFlags_681_ = lean_ctor_get_uint16(v___y_675_, sizeof(void*)*3);
v_suppressElabErrors_682_ = lean_ctor_get_uint8(v___y_675_, sizeof(void*)*3 + 2);
v_checkDeprecated_683_ = lean_ctor_get_uint8(v___y_675_, sizeof(void*)*3 + 3);
v_isRecordingDeps_684_ = lean_ctor_get_uint8(v___y_675_, sizeof(void*)*3 + 4);
v_ref_685_ = l_Lean_replaceRef(v_ref_671_, v_ref_680_);
lean_inc(v_currRecDepth_679_);
lean_inc_ref(v_toCold_678_);
v___x_686_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_686_, 0, v_toCold_678_);
lean_ctor_set(v___x_686_, 1, v_currRecDepth_679_);
lean_ctor_set(v___x_686_, 2, v_ref_685_);
lean_ctor_set_uint16(v___x_686_, sizeof(void*)*3, v_optionFlags_681_);
lean_ctor_set_uint8(v___x_686_, sizeof(void*)*3 + 2, v_suppressElabErrors_682_);
lean_ctor_set_uint8(v___x_686_, sizeof(void*)*3 + 3, v_checkDeprecated_683_);
lean_ctor_set_uint8(v___x_686_, sizeof(void*)*3 + 4, v_isRecordingDeps_684_);
v___x_687_ = lean_st_ref_get(v___y_676_);
v_traceState_688_ = lean_ctor_get(v___x_687_, 4);
lean_inc_ref(v_traceState_688_);
lean_dec(v___x_687_);
v_traces_689_ = lean_ctor_get(v_traceState_688_, 0);
lean_inc_ref(v_traces_689_);
lean_dec_ref(v_traceState_688_);
v___x_690_ = l_Lean_PersistentArray_toArray___redArg(v_traces_689_);
lean_dec_ref(v_traces_689_);
v_sz_691_ = lean_array_size(v___x_690_);
v___x_692_ = ((size_t)0ULL);
v___x_693_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2_spec__3(v_sz_691_, v___x_692_, v___x_690_);
v_msg_694_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_694_, 0, v_data_670_);
lean_ctor_set(v_msg_694_, 1, v_msg_672_);
lean_ctor_set(v_msg_694_, 2, v___x_693_);
v___x_695_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3_spec__7(v_msg_694_, v___y_673_, v___y_674_, v___x_686_, v___y_676_);
lean_dec_ref_known(v___x_686_, 3);
v_a_696_ = lean_ctor_get(v___x_695_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_695_);
if (v_isSharedCheck_734_ == 0)
{
v___x_698_ = v___x_695_;
v_isShared_699_ = v_isSharedCheck_734_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_695_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_734_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_700_; lean_object* v_traceState_701_; lean_object* v_env_702_; lean_object* v_nextMacroScope_703_; lean_object* v_ngen_704_; lean_object* v_auxDeclNGen_705_; lean_object* v_cache_706_; lean_object* v_recordedDeps_707_; lean_object* v_messages_708_; lean_object* v_infoState_709_; lean_object* v_snapshotTasks_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_733_; 
v___x_700_ = lean_st_ref_take(v___y_676_);
v_traceState_701_ = lean_ctor_get(v___x_700_, 4);
v_env_702_ = lean_ctor_get(v___x_700_, 0);
v_nextMacroScope_703_ = lean_ctor_get(v___x_700_, 1);
v_ngen_704_ = lean_ctor_get(v___x_700_, 2);
v_auxDeclNGen_705_ = lean_ctor_get(v___x_700_, 3);
v_cache_706_ = lean_ctor_get(v___x_700_, 5);
v_recordedDeps_707_ = lean_ctor_get(v___x_700_, 6);
v_messages_708_ = lean_ctor_get(v___x_700_, 7);
v_infoState_709_ = lean_ctor_get(v___x_700_, 8);
v_snapshotTasks_710_ = lean_ctor_get(v___x_700_, 9);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_733_ == 0)
{
v___x_712_ = v___x_700_;
v_isShared_713_ = v_isSharedCheck_733_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_snapshotTasks_710_);
lean_inc(v_infoState_709_);
lean_inc(v_messages_708_);
lean_inc(v_recordedDeps_707_);
lean_inc(v_cache_706_);
lean_inc(v_traceState_701_);
lean_inc(v_auxDeclNGen_705_);
lean_inc(v_ngen_704_);
lean_inc(v_nextMacroScope_703_);
lean_inc(v_env_702_);
lean_dec(v___x_700_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_733_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
uint64_t v_tid_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_731_; 
v_tid_714_ = lean_ctor_get_uint64(v_traceState_701_, sizeof(void*)*1);
v_isSharedCheck_731_ = !lean_is_exclusive(v_traceState_701_);
if (v_isSharedCheck_731_ == 0)
{
lean_object* v_unused_732_; 
v_unused_732_ = lean_ctor_get(v_traceState_701_, 0);
lean_dec(v_unused_732_);
v___x_716_ = v_traceState_701_;
v_isShared_717_ = v_isSharedCheck_731_;
goto v_resetjp_715_;
}
else
{
lean_dec(v_traceState_701_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_731_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_722_; 
v___x_718_ = lean_box(0);
v___x_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_719_, 0, v_ref_671_);
lean_ctor_set(v___x_719_, 1, v_a_696_);
v___x_720_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_669_, v___x_719_);
if (v_isShared_717_ == 0)
{
lean_ctor_set(v___x_716_, 0, v___x_720_);
v___x_722_ = v___x_716_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v___x_720_);
lean_ctor_set_uint64(v_reuseFailAlloc_730_, sizeof(void*)*1, v_tid_714_);
v___x_722_ = v_reuseFailAlloc_730_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
lean_object* v___x_724_; 
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 4, v___x_722_);
v___x_724_ = v___x_712_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_env_702_);
lean_ctor_set(v_reuseFailAlloc_729_, 1, v_nextMacroScope_703_);
lean_ctor_set(v_reuseFailAlloc_729_, 2, v_ngen_704_);
lean_ctor_set(v_reuseFailAlloc_729_, 3, v_auxDeclNGen_705_);
lean_ctor_set(v_reuseFailAlloc_729_, 4, v___x_722_);
lean_ctor_set(v_reuseFailAlloc_729_, 5, v_cache_706_);
lean_ctor_set(v_reuseFailAlloc_729_, 6, v_recordedDeps_707_);
lean_ctor_set(v_reuseFailAlloc_729_, 7, v_messages_708_);
lean_ctor_set(v_reuseFailAlloc_729_, 8, v_infoState_709_);
lean_ctor_set(v_reuseFailAlloc_729_, 9, v_snapshotTasks_710_);
v___x_724_ = v_reuseFailAlloc_729_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
lean_object* v___x_725_; lean_object* v___x_727_; 
v___x_725_ = lean_st_ref_put(v___y_676_, v___x_724_);
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 0, v___x_718_);
v___x_727_ = v___x_698_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v___x_718_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2___redArg___boxed(lean_object* v_oldTraces_735_, lean_object* v_data_736_, lean_object* v_ref_737_, lean_object* v_msg_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2___redArg(v_oldTraces_735_, v_data_736_, v_ref_737_, v_msg_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__3___redArg(lean_object* v_x_745_){
_start:
{
if (lean_obj_tag(v_x_745_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
v_a_747_ = lean_ctor_get(v_x_745_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v_x_745_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v_x_745_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v_x_745_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
lean_ctor_set_tag(v___x_749_, 1);
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
v_a_755_ = lean_ctor_get(v_x_745_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v_x_745_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v_x_745_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v_x_745_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
lean_ctor_set_tag(v___x_757_, 0);
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__3___redArg___boxed(lean_object* v_x_763_, lean_object* v___y_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__3___redArg(v_x_763_);
return v_res_765_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__4(lean_object* v_e_766_){
_start:
{
if (lean_obj_tag(v_e_766_) == 0)
{
uint8_t v___x_767_; 
v___x_767_ = 2;
return v___x_767_;
}
else
{
lean_object* v_a_768_; uint8_t v___x_769_; 
v_a_768_ = lean_ctor_get(v_e_766_, 0);
v___x_769_ = lean_unbox(v_a_768_);
if (v___x_769_ == 0)
{
uint8_t v___x_770_; 
v___x_770_ = 1;
return v___x_770_;
}
else
{
uint8_t v___x_771_; 
v___x_771_ = 0;
return v___x_771_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__4___boxed(lean_object* v_e_772_){
_start:
{
uint8_t v_res_773_; lean_object* v_r_774_; 
v_res_773_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__4(v_e_772_);
lean_dec_ref(v_e_772_);
v_r_774_ = lean_box(v_res_773_);
return v_r_774_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__1(void){
_start:
{
lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_776_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__0));
v___x_777_ = l_Lean_stringToMessageData(v___x_776_);
return v___x_777_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__2(void){
_start:
{
lean_object* v___x_778_; double v___x_779_; 
v___x_778_ = lean_unsigned_to_nat(1000u);
v___x_779_ = lean_float_of_nat(v___x_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(lean_object* v_cls_780_, uint8_t v_collapsed_781_, lean_object* v_tag_782_, lean_object* v_opts_783_, uint8_t v_clsEnabled_784_, lean_object* v_oldTraces_785_, lean_object* v_msg_786_, lean_object* v_resStartStop_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_){
_start:
{
lean_object* v_fst_800_; lean_object* v_snd_801_; lean_object* v___y_803_; lean_object* v___y_804_; lean_object* v_data_805_; lean_object* v_fst_816_; lean_object* v_snd_817_; lean_object* v___x_818_; uint8_t v___x_819_; lean_object* v___y_821_; lean_object* v_a_822_; uint8_t v___y_837_; double v___y_869_; 
v_fst_800_ = lean_ctor_get(v_resStartStop_787_, 0);
lean_inc(v_fst_800_);
v_snd_801_ = lean_ctor_get(v_resStartStop_787_, 1);
lean_inc(v_snd_801_);
lean_dec_ref(v_resStartStop_787_);
v_fst_816_ = lean_ctor_get(v_snd_801_, 0);
lean_inc(v_fst_816_);
v_snd_817_ = lean_ctor_get(v_snd_801_, 1);
lean_inc(v_snd_817_);
lean_dec(v_snd_801_);
v___x_818_ = l_Lean_trace_profiler;
v___x_819_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v_opts_783_, v___x_818_);
if (v___x_819_ == 0)
{
v___y_837_ = v___x_819_;
goto v___jp_836_;
}
else
{
lean_object* v___x_874_; uint8_t v___x_875_; 
v___x_874_ = l_Lean_trace_profiler_useHeartbeats;
v___x_875_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v_opts_783_, v___x_874_);
if (v___x_875_ == 0)
{
lean_object* v___x_876_; lean_object* v___x_877_; double v___x_878_; double v___x_879_; double v___x_880_; 
v___x_876_ = l_Lean_trace_profiler_threshold;
v___x_877_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__5(v_opts_783_, v___x_876_);
v___x_878_ = lean_float_of_nat(v___x_877_);
v___x_879_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__2);
v___x_880_ = lean_float_div(v___x_878_, v___x_879_);
v___y_869_ = v___x_880_;
goto v___jp_868_;
}
else
{
lean_object* v___x_881_; lean_object* v___x_882_; double v___x_883_; 
v___x_881_ = l_Lean_trace_profiler_threshold;
v___x_882_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__5(v_opts_783_, v___x_881_);
v___x_883_ = lean_float_of_nat(v___x_882_);
v___y_869_ = v___x_883_;
goto v___jp_868_;
}
}
v___jp_802_:
{
lean_object* v___x_806_; 
lean_inc(v___y_804_);
v___x_806_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2___redArg(v_oldTraces_785_, v_data_805_, v___y_804_, v___y_803_, v___y_795_, v___y_796_, v___y_797_, v___y_798_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_object* v___x_807_; 
lean_dec_ref_known(v___x_806_, 1);
v___x_807_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__3___redArg(v_fst_800_);
return v___x_807_;
}
else
{
lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_815_; 
lean_dec(v_fst_800_);
v_a_808_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_815_ == 0)
{
v___x_810_ = v___x_806_;
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_806_);
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
v___jp_820_:
{
uint8_t v_result_823_; lean_object* v___x_824_; lean_object* v___x_825_; double v___x_826_; lean_object* v_data_827_; 
v_result_823_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__4(v_fst_800_);
v___x_824_ = lean_box(v_result_823_);
v___x_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_825_, 0, v___x_824_);
v___x_826_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__0);
lean_inc_ref(v_tag_782_);
lean_inc_ref(v___x_825_);
lean_inc(v_cls_780_);
v_data_827_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_827_, 0, v_cls_780_);
lean_ctor_set(v_data_827_, 1, v___x_825_);
lean_ctor_set(v_data_827_, 2, v_tag_782_);
lean_ctor_set_float(v_data_827_, sizeof(void*)*3, v___x_826_);
lean_ctor_set_float(v_data_827_, sizeof(void*)*3 + 8, v___x_826_);
lean_ctor_set_uint8(v_data_827_, sizeof(void*)*3 + 16, v_collapsed_781_);
if (v___x_819_ == 0)
{
lean_dec_ref_known(v___x_825_, 1);
lean_dec(v_snd_817_);
lean_dec(v_fst_816_);
lean_dec_ref(v_tag_782_);
lean_dec(v_cls_780_);
v___y_803_ = v_a_822_;
v___y_804_ = v___y_821_;
v_data_805_ = v_data_827_;
goto v___jp_802_;
}
else
{
lean_object* v_data_828_; double v___x_829_; double v___x_830_; 
lean_dec_ref_known(v_data_827_, 3);
v_data_828_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_828_, 0, v_cls_780_);
lean_ctor_set(v_data_828_, 1, v___x_825_);
lean_ctor_set(v_data_828_, 2, v_tag_782_);
v___x_829_ = lean_unbox_float(v_fst_816_);
lean_dec(v_fst_816_);
lean_ctor_set_float(v_data_828_, sizeof(void*)*3, v___x_829_);
v___x_830_ = lean_unbox_float(v_snd_817_);
lean_dec(v_snd_817_);
lean_ctor_set_float(v_data_828_, sizeof(void*)*3 + 8, v___x_830_);
lean_ctor_set_uint8(v_data_828_, sizeof(void*)*3 + 16, v_collapsed_781_);
v___y_803_ = v_a_822_;
v___y_804_ = v___y_821_;
v_data_805_ = v_data_828_;
goto v___jp_802_;
}
}
v___jp_831_:
{
lean_object* v_ref_832_; lean_object* v___x_833_; 
v_ref_832_ = lean_ctor_get(v___y_797_, 2);
lean_inc(v___y_798_);
lean_inc_ref(v___y_797_);
lean_inc(v___y_796_);
lean_inc_ref(v___y_795_);
lean_inc(v___y_794_);
lean_inc_ref(v___y_793_);
lean_inc(v___y_792_);
lean_inc_ref(v___y_791_);
lean_inc(v___y_790_);
lean_inc(v___y_789_);
lean_inc_ref(v___y_788_);
lean_inc(v_fst_800_);
v___x_833_ = lean_apply_13(v_msg_786_, v_fst_800_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, lean_box(0));
if (lean_obj_tag(v___x_833_) == 0)
{
lean_object* v_a_834_; 
v_a_834_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_a_834_);
lean_dec_ref_known(v___x_833_, 1);
v___y_821_ = v_ref_832_;
v_a_822_ = v_a_834_;
goto v___jp_820_;
}
else
{
lean_object* v___x_835_; 
lean_dec_ref_known(v___x_833_, 1);
v___x_835_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___closed__1);
v___y_821_ = v_ref_832_;
v_a_822_ = v___x_835_;
goto v___jp_820_;
}
}
v___jp_836_:
{
if (v_clsEnabled_784_ == 0)
{
if (v___y_837_ == 0)
{
lean_object* v___x_838_; lean_object* v_traceState_839_; lean_object* v_env_840_; lean_object* v_nextMacroScope_841_; lean_object* v_ngen_842_; lean_object* v_auxDeclNGen_843_; lean_object* v_cache_844_; lean_object* v_recordedDeps_845_; lean_object* v_messages_846_; lean_object* v_infoState_847_; lean_object* v_snapshotTasks_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_867_; 
lean_dec(v_snd_817_);
lean_dec(v_fst_816_);
lean_dec_ref(v_msg_786_);
lean_dec_ref(v_tag_782_);
lean_dec(v_cls_780_);
v___x_838_ = lean_st_ref_take(v___y_798_);
v_traceState_839_ = lean_ctor_get(v___x_838_, 4);
v_env_840_ = lean_ctor_get(v___x_838_, 0);
v_nextMacroScope_841_ = lean_ctor_get(v___x_838_, 1);
v_ngen_842_ = lean_ctor_get(v___x_838_, 2);
v_auxDeclNGen_843_ = lean_ctor_get(v___x_838_, 3);
v_cache_844_ = lean_ctor_get(v___x_838_, 5);
v_recordedDeps_845_ = lean_ctor_get(v___x_838_, 6);
v_messages_846_ = lean_ctor_get(v___x_838_, 7);
v_infoState_847_ = lean_ctor_get(v___x_838_, 8);
v_snapshotTasks_848_ = lean_ctor_get(v___x_838_, 9);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_867_ == 0)
{
v___x_850_ = v___x_838_;
v_isShared_851_ = v_isSharedCheck_867_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_snapshotTasks_848_);
lean_inc(v_infoState_847_);
lean_inc(v_messages_846_);
lean_inc(v_recordedDeps_845_);
lean_inc(v_cache_844_);
lean_inc(v_traceState_839_);
lean_inc(v_auxDeclNGen_843_);
lean_inc(v_ngen_842_);
lean_inc(v_nextMacroScope_841_);
lean_inc(v_env_840_);
lean_dec(v___x_838_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_867_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
uint64_t v_tid_852_; lean_object* v_traces_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_866_; 
v_tid_852_ = lean_ctor_get_uint64(v_traceState_839_, sizeof(void*)*1);
v_traces_853_ = lean_ctor_get(v_traceState_839_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v_traceState_839_);
if (v_isSharedCheck_866_ == 0)
{
v___x_855_ = v_traceState_839_;
v_isShared_856_ = v_isSharedCheck_866_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_traces_853_);
lean_dec(v_traceState_839_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_866_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_857_; lean_object* v___x_859_; 
v___x_857_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_785_, v_traces_853_);
lean_dec_ref(v_traces_853_);
if (v_isShared_856_ == 0)
{
lean_ctor_set(v___x_855_, 0, v___x_857_);
v___x_859_ = v___x_855_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v___x_857_);
lean_ctor_set_uint64(v_reuseFailAlloc_865_, sizeof(void*)*1, v_tid_852_);
v___x_859_ = v_reuseFailAlloc_865_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
lean_object* v___x_861_; 
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 4, v___x_859_);
v___x_861_ = v___x_850_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_env_840_);
lean_ctor_set(v_reuseFailAlloc_864_, 1, v_nextMacroScope_841_);
lean_ctor_set(v_reuseFailAlloc_864_, 2, v_ngen_842_);
lean_ctor_set(v_reuseFailAlloc_864_, 3, v_auxDeclNGen_843_);
lean_ctor_set(v_reuseFailAlloc_864_, 4, v___x_859_);
lean_ctor_set(v_reuseFailAlloc_864_, 5, v_cache_844_);
lean_ctor_set(v_reuseFailAlloc_864_, 6, v_recordedDeps_845_);
lean_ctor_set(v_reuseFailAlloc_864_, 7, v_messages_846_);
lean_ctor_set(v_reuseFailAlloc_864_, 8, v_infoState_847_);
lean_ctor_set(v_reuseFailAlloc_864_, 9, v_snapshotTasks_848_);
v___x_861_ = v_reuseFailAlloc_864_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = lean_st_ref_put(v___y_798_, v___x_861_);
v___x_863_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__3___redArg(v_fst_800_);
return v___x_863_;
}
}
}
}
}
else
{
goto v___jp_831_;
}
}
else
{
goto v___jp_831_;
}
}
v___jp_868_:
{
double v___x_870_; double v___x_871_; double v___x_872_; uint8_t v___x_873_; 
v___x_870_ = lean_unbox_float(v_snd_817_);
v___x_871_ = lean_unbox_float(v_fst_816_);
v___x_872_ = lean_float_sub(v___x_870_, v___x_871_);
v___x_873_ = lean_float_decLt(v___y_869_, v___x_872_);
v___y_837_ = v___x_873_;
goto v___jp_836_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2___boxed(lean_object** _args){
lean_object* v_cls_884_ = _args[0];
lean_object* v_collapsed_885_ = _args[1];
lean_object* v_tag_886_ = _args[2];
lean_object* v_opts_887_ = _args[3];
lean_object* v_clsEnabled_888_ = _args[4];
lean_object* v_oldTraces_889_ = _args[5];
lean_object* v_msg_890_ = _args[6];
lean_object* v_resStartStop_891_ = _args[7];
lean_object* v___y_892_ = _args[8];
lean_object* v___y_893_ = _args[9];
lean_object* v___y_894_ = _args[10];
lean_object* v___y_895_ = _args[11];
lean_object* v___y_896_ = _args[12];
lean_object* v___y_897_ = _args[13];
lean_object* v___y_898_ = _args[14];
lean_object* v___y_899_ = _args[15];
lean_object* v___y_900_ = _args[16];
lean_object* v___y_901_ = _args[17];
lean_object* v___y_902_ = _args[18];
lean_object* v___y_903_ = _args[19];
_start:
{
uint8_t v_collapsed_boxed_904_; uint8_t v_clsEnabled_boxed_905_; lean_object* v_res_906_; 
v_collapsed_boxed_904_ = lean_unbox(v_collapsed_885_);
v_clsEnabled_boxed_905_ = lean_unbox(v_clsEnabled_888_);
v_res_906_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(v_cls_884_, v_collapsed_boxed_904_, v_tag_886_, v_opts_887_, v_clsEnabled_boxed_905_, v_oldTraces_889_, v_msg_890_, v_resStartStop_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_);
lean_dec(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec(v___y_900_);
lean_dec_ref(v___y_899_);
lean_dec(v___y_898_);
lean_dec_ref(v___y_897_);
lean_dec(v___y_896_);
lean_dec_ref(v___y_895_);
lean_dec(v___y_894_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec_ref(v_opts_887_);
return v_res_906_;
}
}
static double _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0(void){
_start:
{
lean_object* v___x_907_; double v___x_908_; 
v___x_907_ = lean_unsigned_to_nat(1000000000u);
v___x_908_ = lean_float_of_nat(v___x_907_);
return v___x_908_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7(void){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_919_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4));
v___x_920_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__6));
v___x_921_ = l_Lean_Name_append(v___x_920_, v___x_919_);
return v___x_921_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__9(void){
_start:
{
lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_923_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__8));
v___x_924_ = l_Lean_stringToMessageData(v___x_923_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline(lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_){
_start:
{
uint8_t v___y_942_; lean_object* v___y_943_; uint8_t v___y_955_; lean_object* v___y_956_; lean_object* v___y_957_; lean_object* v___y_958_; lean_object* v___y_959_; lean_object* v___y_960_; lean_object* v___y_961_; lean_object* v___y_962_; lean_object* v___y_963_; uint8_t v___y_964_; lean_object* v___y_965_; lean_object* v___y_966_; uint8_t v___y_967_; lean_object* v___y_968_; lean_object* v___y_969_; lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___y_972_; lean_object* v___y_973_; lean_object* v___y_974_; lean_object* v_a_975_; uint8_t v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_988_; lean_object* v___y_989_; lean_object* v___y_990_; lean_object* v___y_991_; lean_object* v___y_992_; lean_object* v___y_993_; lean_object* v___y_994_; uint8_t v___y_995_; lean_object* v___y_996_; uint8_t v___y_997_; lean_object* v___y_998_; lean_object* v___y_999_; lean_object* v___y_1000_; lean_object* v___y_1001_; lean_object* v___y_1002_; lean_object* v___y_1003_; lean_object* v___y_1004_; lean_object* v_a_1005_; uint8_t v___y_1018_; lean_object* v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v___y_1025_; uint8_t v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1029_; uint8_t v___y_1030_; lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; lean_object* v___y_1035_; lean_object* v___y_1036_; lean_object* v___y_1078_; lean_object* v___y_1079_; lean_object* v___y_1080_; lean_object* v___y_1081_; lean_object* v___y_1082_; lean_object* v___y_1083_; lean_object* v___y_1084_; lean_object* v___y_1085_; lean_object* v___y_1086_; lean_object* v___y_1087_; lean_object* v___y_1088_; lean_object* v___y_1089_; lean_object* v___y_1118_; lean_object* v___y_1119_; lean_object* v___y_1120_; lean_object* v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___y_1126_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; uint8_t v___y_1138_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___y_1141_; lean_object* v___y_1142_; lean_object* v___y_1143_; lean_object* v___y_1144_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v___y_1148_; lean_object* v___y_1149_; uint8_t v___y_1150_; lean_object* v___y_1151_; lean_object* v___y_1152_; lean_object* v___y_1153_; lean_object* v_a_1154_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v___y_1168_; uint8_t v___y_1169_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v___y_1174_; lean_object* v___y_1175_; lean_object* v___y_1176_; lean_object* v___y_1177_; lean_object* v___y_1178_; lean_object* v___y_1179_; uint8_t v___y_1180_; lean_object* v___y_1181_; lean_object* v___y_1182_; lean_object* v___y_1183_; lean_object* v_a_1184_; lean_object* v___y_1197_; lean_object* v___y_1198_; lean_object* v___y_1199_; lean_object* v___y_1200_; uint8_t v___y_1201_; lean_object* v___y_1202_; lean_object* v___y_1203_; lean_object* v___y_1204_; lean_object* v___y_1205_; lean_object* v___y_1206_; lean_object* v___y_1207_; lean_object* v___y_1208_; lean_object* v___y_1209_; lean_object* v___y_1210_; lean_object* v___y_1211_; uint8_t v___y_1212_; lean_object* v___y_1213_; lean_object* v___y_1214_; lean_object* v___y_1215_; lean_object* v___y_1257_; uint8_t v_fixedInt_1258_; lean_object* v___y_1259_; lean_object* v___y_1260_; lean_object* v___y_1261_; lean_object* v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1264_; lean_object* v___y_1265_; lean_object* v___y_1266_; lean_object* v___y_1267_; lean_object* v___y_1268_; lean_object* v___y_1269_; lean_object* v___y_1288_; lean_object* v___y_1289_; lean_object* v___y_1290_; lean_object* v___y_1291_; lean_object* v___y_1292_; lean_object* v___y_1293_; lean_object* v___y_1294_; lean_object* v___y_1295_; lean_object* v___y_1296_; lean_object* v___y_1297_; lean_object* v___y_1298_; lean_object* v___y_1299_; lean_object* v___y_1300_; lean_object* v___y_1305_; lean_object* v___y_1306_; lean_object* v___y_1307_; lean_object* v___y_1308_; lean_object* v___y_1309_; lean_object* v___y_1310_; lean_object* v___y_1311_; lean_object* v___y_1312_; lean_object* v___y_1313_; lean_object* v___y_1314_; lean_object* v___y_1315_; lean_object* v___y_1316_; uint8_t v___y_1317_; lean_object* v___y_1318_; lean_object* v___y_1319_; lean_object* v___y_1320_; lean_object* v___y_1321_; uint8_t v___y_1322_; lean_object* v___y_1323_; lean_object* v___y_1324_; lean_object* v_a_1325_; lean_object* v___y_1335_; lean_object* v___y_1336_; lean_object* v___y_1337_; lean_object* v___y_1338_; lean_object* v___y_1339_; lean_object* v___y_1340_; lean_object* v___y_1341_; lean_object* v___y_1342_; lean_object* v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v___y_1346_; uint8_t v___y_1347_; lean_object* v___y_1348_; lean_object* v___y_1349_; lean_object* v___y_1350_; lean_object* v___y_1351_; lean_object* v___y_1352_; uint8_t v___y_1353_; lean_object* v___y_1354_; lean_object* v_a_1355_; lean_object* v___y_1368_; lean_object* v___y_1369_; lean_object* v___y_1370_; lean_object* v___y_1371_; lean_object* v___y_1372_; lean_object* v___y_1373_; lean_object* v___y_1374_; lean_object* v___y_1375_; lean_object* v___y_1376_; lean_object* v___y_1377_; lean_object* v___y_1378_; lean_object* v___y_1379_; uint8_t v___y_1380_; lean_object* v___y_1381_; lean_object* v___y_1382_; lean_object* v___y_1383_; uint8_t v___y_1384_; lean_object* v___y_1385_; lean_object* v___y_1386_; lean_object* v___y_1428_; uint8_t v_fixedInt_1429_; uint8_t v_enums_1430_; lean_object* v___y_1431_; lean_object* v___y_1432_; lean_object* v___y_1433_; lean_object* v___y_1434_; lean_object* v___y_1435_; lean_object* v___y_1436_; lean_object* v___y_1437_; lean_object* v___y_1438_; lean_object* v___y_1439_; lean_object* v___y_1440_; lean_object* v___y_1441_; lean_object* v___y_1460_; lean_object* v___y_1461_; lean_object* v___y_1462_; lean_object* v___y_1463_; lean_object* v___y_1464_; lean_object* v___y_1465_; lean_object* v___y_1466_; lean_object* v___y_1467_; lean_object* v___y_1468_; lean_object* v___y_1469_; lean_object* v___y_1470_; lean_object* v___y_1471_; lean_object* v___y_1472_; lean_object* v___y_1478_; lean_object* v___y_1479_; uint8_t v___y_1480_; lean_object* v___y_1481_; lean_object* v___y_1482_; lean_object* v___y_1483_; lean_object* v___y_1484_; lean_object* v___y_1485_; lean_object* v___y_1486_; lean_object* v___y_1487_; lean_object* v___y_1488_; lean_object* v___y_1489_; lean_object* v___y_1490_; lean_object* v___y_1491_; uint8_t v___y_1492_; lean_object* v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1495_; lean_object* v___y_1496_; lean_object* v___y_1497_; lean_object* v_a_1498_; lean_object* v___y_1511_; uint8_t v___y_1512_; lean_object* v___y_1513_; lean_object* v___y_1514_; lean_object* v___y_1515_; lean_object* v___y_1516_; lean_object* v___y_1517_; lean_object* v___y_1518_; lean_object* v___y_1519_; lean_object* v___y_1520_; lean_object* v___y_1521_; lean_object* v___y_1522_; lean_object* v___y_1523_; lean_object* v___y_1524_; uint8_t v___y_1525_; lean_object* v___y_1526_; lean_object* v___y_1527_; lean_object* v___y_1528_; lean_object* v___y_1529_; lean_object* v___y_1530_; lean_object* v_a_1531_; lean_object* v___y_1541_; uint8_t v___y_1542_; lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1545_; lean_object* v___y_1546_; lean_object* v___y_1547_; lean_object* v___y_1548_; lean_object* v___y_1549_; lean_object* v___y_1550_; lean_object* v___y_1551_; lean_object* v___y_1552_; lean_object* v___y_1553_; lean_object* v___y_1554_; uint8_t v___y_1555_; lean_object* v___y_1556_; lean_object* v___y_1557_; lean_object* v___y_1558_; lean_object* v___y_1559_; lean_object* v___y_1601_; lean_object* v___y_1602_; lean_object* v___y_1603_; lean_object* v___y_1604_; lean_object* v___y_1605_; lean_object* v___y_1606_; lean_object* v___y_1607_; lean_object* v___y_1608_; lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1611_; lean_object* v___y_1612_; lean_object* v___y_1613_; lean_object* v___y_1637_; lean_object* v___y_1638_; lean_object* v___y_1639_; lean_object* v___y_1640_; lean_object* v___y_1641_; uint8_t v___y_1642_; lean_object* v___y_1643_; lean_object* v___y_1644_; lean_object* v___y_1645_; lean_object* v___y_1646_; lean_object* v___y_1647_; uint8_t v___y_1648_; lean_object* v___y_1649_; lean_object* v___y_1650_; lean_object* v___y_1651_; lean_object* v___y_1652_; lean_object* v___y_1653_; lean_object* v___y_1654_; lean_object* v___y_1655_; lean_object* v___y_1656_; lean_object* v_a_1657_; lean_object* v___y_1667_; lean_object* v___y_1668_; lean_object* v___y_1669_; lean_object* v___y_1670_; lean_object* v___y_1671_; uint8_t v___y_1672_; lean_object* v___y_1673_; lean_object* v___y_1674_; lean_object* v___y_1675_; lean_object* v___y_1676_; uint8_t v___y_1677_; lean_object* v___y_1678_; lean_object* v___y_1679_; lean_object* v___y_1680_; lean_object* v___y_1681_; lean_object* v___y_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v_a_1687_; lean_object* v___y_1700_; lean_object* v___y_1701_; lean_object* v___y_1702_; lean_object* v___y_1703_; lean_object* v___y_1704_; uint8_t v___y_1705_; lean_object* v___y_1706_; lean_object* v___y_1707_; lean_object* v___y_1708_; uint8_t v___y_1709_; lean_object* v___y_1710_; lean_object* v___y_1711_; lean_object* v___y_1712_; lean_object* v___y_1713_; lean_object* v___y_1714_; lean_object* v___y_1715_; lean_object* v___y_1716_; lean_object* v___y_1717_; lean_object* v___y_1718_; lean_object* v___y_1760_; lean_object* v___y_1761_; lean_object* v___y_1762_; lean_object* v___y_1763_; lean_object* v___y_1764_; lean_object* v___y_1765_; lean_object* v___y_1766_; lean_object* v___y_1767_; lean_object* v___y_1768_; lean_object* v___y_1769_; lean_object* v___y_1770_; lean_object* v___y_1771_; lean_object* v___y_1790_; lean_object* v___y_1791_; lean_object* v___y_1792_; lean_object* v___y_1793_; lean_object* v___y_1794_; lean_object* v___y_1795_; lean_object* v___y_1796_; lean_object* v___y_1797_; lean_object* v___y_1798_; lean_object* v___y_1799_; lean_object* v___y_1800_; lean_object* v___y_1801_; lean_object* v___y_1802_; lean_object* v___y_1806_; lean_object* v___y_1807_; lean_object* v___y_1808_; lean_object* v___y_1809_; uint8_t v___y_1810_; lean_object* v___y_1811_; lean_object* v___y_1812_; lean_object* v___y_1813_; uint8_t v___y_1814_; lean_object* v___y_1815_; lean_object* v___y_1816_; lean_object* v___y_1817_; lean_object* v___y_1818_; lean_object* v___y_1819_; lean_object* v___y_1820_; lean_object* v___y_1821_; lean_object* v___y_1822_; lean_object* v___y_1823_; lean_object* v___y_1824_; lean_object* v___y_1825_; lean_object* v_a_1826_; lean_object* v___y_1836_; lean_object* v___y_1837_; lean_object* v___y_1838_; lean_object* v___y_1839_; uint8_t v___y_1840_; lean_object* v___y_1841_; lean_object* v___y_1842_; lean_object* v___y_1843_; uint8_t v___y_1844_; lean_object* v___y_1845_; lean_object* v___y_1846_; lean_object* v___y_1847_; lean_object* v___y_1848_; lean_object* v___y_1849_; lean_object* v___y_1850_; lean_object* v___y_1851_; lean_object* v___y_1852_; lean_object* v___y_1853_; lean_object* v___y_1854_; lean_object* v___y_1855_; lean_object* v_a_1856_; lean_object* v___y_1869_; lean_object* v___y_1870_; lean_object* v___y_1871_; lean_object* v___y_1872_; uint8_t v___y_1873_; lean_object* v___y_1874_; lean_object* v___y_1875_; lean_object* v___y_1876_; uint8_t v___y_1877_; lean_object* v___y_1878_; lean_object* v___y_1879_; lean_object* v___y_1880_; lean_object* v___y_1881_; lean_object* v___y_1882_; lean_object* v___y_1883_; lean_object* v___y_1884_; lean_object* v___y_1885_; lean_object* v___y_1886_; lean_object* v___y_1887_; lean_object* v___y_1929_; lean_object* v___y_1930_; lean_object* v___y_1931_; lean_object* v___y_1932_; lean_object* v___y_1933_; lean_object* v___y_1934_; lean_object* v___y_1935_; lean_object* v___y_1936_; lean_object* v___y_1937_; lean_object* v___y_1938_; lean_object* v___y_1939_; lean_object* v___y_1940_; lean_object* v___y_1959_; lean_object* v___y_1960_; lean_object* v___y_1961_; lean_object* v___y_1962_; lean_object* v___y_1963_; lean_object* v___y_1964_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v___y_1968_; lean_object* v___y_1969_; lean_object* v_toCold_1973_; lean_object* v_options_1974_; uint8_t v_hasTrace_1975_; 
v_toCold_1973_ = lean_ctor_get(v_a_934_, 0);
v_options_1974_ = lean_ctor_get(v_toCold_1973_, 2);
v_hasTrace_1975_ = lean_ctor_get_uint8(v_options_1974_, sizeof(void*)*1);
if (v_hasTrace_1975_ == 0)
{
v___y_1959_ = v_a_925_;
v___y_1960_ = v_a_926_;
v___y_1961_ = v_a_927_;
v___y_1962_ = v_a_928_;
v___y_1963_ = v_a_929_;
v___y_1964_ = v_a_930_;
v___y_1965_ = v_a_931_;
v___y_1966_ = v_a_932_;
v___y_1967_ = v_a_933_;
v___y_1968_ = v_a_934_;
v___y_1969_ = v_a_935_;
goto v___jp_1958_;
}
else
{
lean_object* v_inheritedTraceOptions_1976_; lean_object* v_cls_1977_; lean_object* v___x_1978_; uint8_t v___x_1979_; 
v_inheritedTraceOptions_1976_ = lean_ctor_get(v_toCold_1973_, 11);
v_cls_1977_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4));
v___x_1978_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7);
v___x_1979_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1976_, v_options_1974_, v___x_1978_);
if (v___x_1979_ == 0)
{
v___y_1959_ = v_a_925_;
v___y_1960_ = v_a_926_;
v___y_1961_ = v_a_927_;
v___y_1962_ = v_a_928_;
v___y_1963_ = v_a_929_;
v___y_1964_ = v_a_930_;
v___y_1965_ = v_a_931_;
v___y_1966_ = v_a_932_;
v___y_1967_ = v_a_933_;
v___y_1968_ = v_a_934_;
v___y_1969_ = v_a_935_;
goto v___jp_1958_;
}
else
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1980_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__9, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__9_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__9);
v___x_1981_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg(v_cls_1977_, v___x_1980_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1981_) == 0)
{
lean_dec_ref_known(v___x_1981_, 1);
v___y_1959_ = v_a_925_;
v___y_1960_ = v_a_926_;
v___y_1961_ = v_a_927_;
v___y_1962_ = v_a_928_;
v___y_1963_ = v_a_929_;
v___y_1964_ = v_a_930_;
v___y_1965_ = v_a_931_;
v___y_1966_ = v_a_932_;
v___y_1967_ = v_a_933_;
v___y_1968_ = v_a_934_;
v___y_1969_ = v_a_935_;
goto v___jp_1958_;
}
else
{
lean_object* v_a_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1989_; 
v_a_1982_ = lean_ctor_get(v___x_1981_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v___x_1981_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1984_ = v___x_1981_;
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_a_1982_);
lean_dec(v___x_1981_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1987_; 
if (v_isShared_1985_ == 0)
{
v___x_1987_ = v___x_1984_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_a_1982_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
return v___x_1987_;
}
}
}
}
}
v___jp_937_:
{
uint8_t v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_938_ = 1;
v___x_939_ = lean_box(v___x_938_);
v___x_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
return v___x_940_;
}
v___jp_941_:
{
if (lean_obj_tag(v___y_943_) == 0)
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_953_; 
v_a_944_ = lean_ctor_get(v___y_943_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___y_943_);
if (v_isSharedCheck_953_ == 0)
{
v___x_946_ = v___y_943_;
v_isShared_947_ = v_isSharedCheck_953_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___y_943_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_953_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
uint8_t v___x_948_; 
v___x_948_ = lean_unbox(v_a_944_);
lean_dec(v_a_944_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; lean_object* v___x_951_; 
v___x_949_ = lean_box(v___y_942_);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 0, v___x_949_);
v___x_951_ = v___x_946_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v___x_949_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
else
{
lean_del_object(v___x_946_);
goto v___jp_937_;
}
}
}
else
{
return v___y_943_;
}
}
v___jp_954_:
{
lean_object* v___x_976_; double v___x_977_; double v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_976_ = lean_io_get_num_heartbeats();
v___x_977_ = lean_float_of_nat(v___y_965_);
v___x_978_ = lean_float_of_nat(v___x_976_);
v___x_979_ = lean_box_float(v___x_977_);
v___x_980_ = lean_box_float(v___x_978_);
v___x_981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_979_);
lean_ctor_set(v___x_981_, 1, v___x_980_);
v___x_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_982_, 0, v_a_975_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
lean_inc_ref(v___y_961_);
lean_inc(v___y_968_);
v___x_983_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(v___y_968_, v___y_955_, v___y_961_, v___y_956_, v___y_964_, v___y_962_, v___y_959_, v___x_982_, v___y_974_, v___y_957_, v___y_972_, v___y_958_, v___y_960_, v___y_973_, v___y_970_, v___y_971_, v___y_969_, v___y_963_, v___y_966_);
v___y_942_ = v___y_967_;
v___y_943_ = v___x_983_;
goto v___jp_941_;
}
v___jp_984_:
{
lean_object* v___x_1006_; double v___x_1007_; double v___x_1008_; double v___x_1009_; double v___x_1010_; double v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1006_ = lean_io_mono_nanos_now();
v___x_1007_ = lean_float_of_nat(v___y_991_);
v___x_1008_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0);
v___x_1009_ = lean_float_div(v___x_1007_, v___x_1008_);
v___x_1010_ = lean_float_of_nat(v___x_1006_);
v___x_1011_ = lean_float_div(v___x_1010_, v___x_1008_);
v___x_1012_ = lean_box_float(v___x_1009_);
v___x_1013_ = lean_box_float(v___x_1011_);
v___x_1014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1012_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
v___x_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1015_, 0, v_a_1005_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
lean_inc_ref(v___y_992_);
lean_inc(v___y_998_);
v___x_1016_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(v___y_998_, v___y_985_, v___y_992_, v___y_986_, v___y_995_, v___y_993_, v___y_989_, v___x_1015_, v___y_1004_, v___y_987_, v___y_1002_, v___y_988_, v___y_990_, v___y_1003_, v___y_1000_, v___y_1001_, v___y_999_, v___y_994_, v___y_996_);
v___y_942_ = v___y_997_;
v___y_943_ = v___x_1016_;
goto v___jp_941_;
}
v___jp_1017_:
{
lean_object* v___x_1037_; lean_object* v_a_1038_; lean_object* v___x_1039_; uint8_t v___x_1040_; 
v___x_1037_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg(v___y_1028_);
v_a_1038_ = lean_ctor_get(v___x_1037_, 0);
lean_inc(v_a_1038_);
lean_dec_ref(v___x_1037_);
v___x_1039_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1040_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v___y_1021_, v___x_1039_);
if (v___x_1040_ == 0)
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1041_ = lean_io_mono_nanos_now();
lean_inc(v___y_1028_);
lean_inc_ref(v___y_1027_);
lean_inc(v___y_1031_);
lean_inc_ref(v___y_1034_);
lean_inc(v___y_1032_);
lean_inc_ref(v___y_1035_);
lean_inc(v___y_1023_);
lean_inc_ref(v___y_1020_);
lean_inc(v___y_1033_);
lean_inc(v___y_1019_);
lean_inc_ref(v___y_1036_);
v___x_1042_ = lean_apply_12(v___y_1024_, v___y_1036_, v___y_1019_, v___y_1033_, v___y_1020_, v___y_1023_, v___y_1035_, v___y_1032_, v___y_1034_, v___y_1031_, v___y_1027_, v___y_1028_, lean_box(0));
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1050_; 
v_a_1043_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1045_ = v___x_1042_;
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_dec(v___x_1042_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
lean_ctor_set_tag(v___x_1045_, 1);
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1043_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
v___y_985_ = v___y_1018_;
v___y_986_ = v___y_1021_;
v___y_987_ = v___y_1019_;
v___y_988_ = v___y_1020_;
v___y_989_ = v___y_1022_;
v___y_990_ = v___y_1023_;
v___y_991_ = v___x_1041_;
v___y_992_ = v___y_1025_;
v___y_993_ = v_a_1038_;
v___y_994_ = v___y_1027_;
v___y_995_ = v___y_1026_;
v___y_996_ = v___y_1028_;
v___y_997_ = v___y_1030_;
v___y_998_ = v___y_1029_;
v___y_999_ = v___y_1031_;
v___y_1000_ = v___y_1032_;
v___y_1001_ = v___y_1034_;
v___y_1002_ = v___y_1033_;
v___y_1003_ = v___y_1035_;
v___y_1004_ = v___y_1036_;
v_a_1005_ = v___x_1048_;
goto v___jp_984_;
}
}
}
else
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1058_; 
v_a_1051_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1053_ = v___x_1042_;
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1042_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1056_; 
if (v_isShared_1054_ == 0)
{
lean_ctor_set_tag(v___x_1053_, 0);
v___x_1056_ = v___x_1053_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_a_1051_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
v___y_985_ = v___y_1018_;
v___y_986_ = v___y_1021_;
v___y_987_ = v___y_1019_;
v___y_988_ = v___y_1020_;
v___y_989_ = v___y_1022_;
v___y_990_ = v___y_1023_;
v___y_991_ = v___x_1041_;
v___y_992_ = v___y_1025_;
v___y_993_ = v_a_1038_;
v___y_994_ = v___y_1027_;
v___y_995_ = v___y_1026_;
v___y_996_ = v___y_1028_;
v___y_997_ = v___y_1030_;
v___y_998_ = v___y_1029_;
v___y_999_ = v___y_1031_;
v___y_1000_ = v___y_1032_;
v___y_1001_ = v___y_1034_;
v___y_1002_ = v___y_1033_;
v___y_1003_ = v___y_1035_;
v___y_1004_ = v___y_1036_;
v_a_1005_ = v___x_1056_;
goto v___jp_984_;
}
}
}
}
else
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1059_ = lean_io_get_num_heartbeats();
lean_inc(v___y_1028_);
lean_inc_ref(v___y_1027_);
lean_inc(v___y_1031_);
lean_inc_ref(v___y_1034_);
lean_inc(v___y_1032_);
lean_inc_ref(v___y_1035_);
lean_inc(v___y_1023_);
lean_inc_ref(v___y_1020_);
lean_inc(v___y_1033_);
lean_inc(v___y_1019_);
lean_inc_ref(v___y_1036_);
v___x_1060_ = lean_apply_12(v___y_1024_, v___y_1036_, v___y_1019_, v___y_1033_, v___y_1020_, v___y_1023_, v___y_1035_, v___y_1032_, v___y_1034_, v___y_1031_, v___y_1027_, v___y_1028_, lean_box(0));
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1068_; 
v_a_1061_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1063_ = v___x_1060_;
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1060_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1066_; 
if (v_isShared_1064_ == 0)
{
lean_ctor_set_tag(v___x_1063_, 1);
v___x_1066_ = v___x_1063_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v_a_1061_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
v___y_955_ = v___y_1018_;
v___y_956_ = v___y_1021_;
v___y_957_ = v___y_1019_;
v___y_958_ = v___y_1020_;
v___y_959_ = v___y_1022_;
v___y_960_ = v___y_1023_;
v___y_961_ = v___y_1025_;
v___y_962_ = v_a_1038_;
v___y_963_ = v___y_1027_;
v___y_964_ = v___y_1026_;
v___y_965_ = v___x_1059_;
v___y_966_ = v___y_1028_;
v___y_967_ = v___y_1030_;
v___y_968_ = v___y_1029_;
v___y_969_ = v___y_1031_;
v___y_970_ = v___y_1032_;
v___y_971_ = v___y_1034_;
v___y_972_ = v___y_1033_;
v___y_973_ = v___y_1035_;
v___y_974_ = v___y_1036_;
v_a_975_ = v___x_1066_;
goto v___jp_954_;
}
}
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
v_a_1069_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1060_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1060_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
lean_ctor_set_tag(v___x_1071_, 0);
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
v___y_955_ = v___y_1018_;
v___y_956_ = v___y_1021_;
v___y_957_ = v___y_1019_;
v___y_958_ = v___y_1020_;
v___y_959_ = v___y_1022_;
v___y_960_ = v___y_1023_;
v___y_961_ = v___y_1025_;
v___y_962_ = v_a_1038_;
v___y_963_ = v___y_1027_;
v___y_964_ = v___y_1026_;
v___y_965_ = v___x_1059_;
v___y_966_ = v___y_1028_;
v___y_967_ = v___y_1030_;
v___y_968_ = v___y_1029_;
v___y_969_ = v___y_1031_;
v___y_970_ = v___y_1032_;
v___y_971_ = v___y_1034_;
v___y_972_ = v___y_1033_;
v___y_973_ = v___y_1035_;
v___y_974_ = v___y_1036_;
v_a_975_ = v___x_1074_;
goto v___jp_954_;
}
}
}
}
}
v___jp_1077_:
{
lean_object* v___x_1090_; lean_object* v_a_1091_; lean_object* v___x_1092_; 
v___x_1090_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg(v___y_1079_);
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1091_);
lean_dec_ref(v___x_1090_);
v___x_1092_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(v_a_1091_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_);
lean_dec(v_a_1091_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; uint8_t v___x_1094_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
v___x_1094_ = lean_unbox(v_a_1093_);
if (v___x_1094_ == 0)
{
uint8_t v_shortCircuit_1095_; 
v_shortCircuit_1095_ = lean_ctor_get_uint8(v___y_1078_, sizeof(void*)*3 + 9);
if (v_shortCircuit_1095_ == 0)
{
return v___x_1092_;
}
else
{
lean_object* v___x_1096_; lean_object* v_toCold_1097_; lean_object* v_options_1098_; uint8_t v_hasTrace_1099_; 
lean_inc(v_a_1093_);
lean_dec_ref_known(v___x_1092_, 1);
v___x_1096_ = l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass;
v_toCold_1097_ = lean_ctor_get(v___y_1088_, 0);
v_options_1098_ = lean_ctor_get(v_toCold_1097_, 2);
v_hasTrace_1099_ = lean_ctor_get_uint8(v_options_1098_, sizeof(void*)*1);
if (v_hasTrace_1099_ == 0)
{
lean_object* v_run_x27_1100_; lean_object* v___x_1101_; uint8_t v___x_1102_; 
v_run_x27_1100_ = lean_ctor_get(v___x_1096_, 1);
lean_inc_ref(v_run_x27_1100_);
lean_inc(v___y_1089_);
lean_inc_ref(v___y_1088_);
lean_inc(v___y_1087_);
lean_inc_ref(v___y_1086_);
lean_inc(v___y_1085_);
lean_inc_ref(v___y_1084_);
lean_inc(v___y_1083_);
lean_inc_ref(v___y_1082_);
lean_inc(v___y_1081_);
lean_inc(v___y_1080_);
lean_inc_ref(v___y_1079_);
v___x_1101_ = lean_apply_12(v_run_x27_1100_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_, lean_box(0));
v___x_1102_ = lean_unbox(v_a_1093_);
lean_dec(v_a_1093_);
v___y_942_ = v___x_1102_;
v___y_943_ = v___x_1101_;
goto v___jp_941_;
}
else
{
lean_object* v_name_1103_; lean_object* v_run_x27_1104_; lean_object* v_inheritedTraceOptions_1105_; lean_object* v___f_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; uint8_t v___x_1110_; 
v_name_1103_ = lean_ctor_get(v___x_1096_, 0);
v_run_x27_1104_ = lean_ctor_get(v___x_1096_, 1);
v_inheritedTraceOptions_1105_ = lean_ctor_get(v_toCold_1097_, 11);
lean_inc(v_name_1103_);
v___f_1106_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___boxed), 14, 1);
lean_closure_set(v___f_1106_, 0, v_name_1103_);
v___x_1107_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4));
v___x_1108_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__1));
v___x_1109_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7);
v___x_1110_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1105_, v_options_1098_, v___x_1109_);
if (v___x_1110_ == 0)
{
lean_object* v___x_1111_; uint8_t v___x_1112_; 
v___x_1111_ = l_Lean_trace_profiler;
v___x_1112_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v_options_1098_, v___x_1111_);
if (v___x_1112_ == 0)
{
lean_object* v___x_1113_; uint8_t v___x_1114_; 
lean_dec_ref(v___f_1106_);
lean_inc_ref(v_run_x27_1104_);
lean_inc(v___y_1089_);
lean_inc_ref(v___y_1088_);
lean_inc(v___y_1087_);
lean_inc_ref(v___y_1086_);
lean_inc(v___y_1085_);
lean_inc_ref(v___y_1084_);
lean_inc(v___y_1083_);
lean_inc_ref(v___y_1082_);
lean_inc(v___y_1081_);
lean_inc(v___y_1080_);
lean_inc_ref(v___y_1079_);
v___x_1113_ = lean_apply_12(v_run_x27_1104_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_, lean_box(0));
v___x_1114_ = lean_unbox(v_a_1093_);
lean_dec(v_a_1093_);
v___y_942_ = v___x_1114_;
v___y_943_ = v___x_1113_;
goto v___jp_941_;
}
else
{
uint8_t v___x_1115_; 
v___x_1115_ = lean_unbox(v_a_1093_);
lean_dec(v_a_1093_);
lean_inc_ref(v_run_x27_1104_);
v___y_1018_ = v_hasTrace_1099_;
v___y_1019_ = v___y_1080_;
v___y_1020_ = v___y_1082_;
v___y_1021_ = v_options_1098_;
v___y_1022_ = v___f_1106_;
v___y_1023_ = v___y_1083_;
v___y_1024_ = v_run_x27_1104_;
v___y_1025_ = v___x_1108_;
v___y_1026_ = v___x_1110_;
v___y_1027_ = v___y_1088_;
v___y_1028_ = v___y_1089_;
v___y_1029_ = v___x_1107_;
v___y_1030_ = v___x_1115_;
v___y_1031_ = v___y_1087_;
v___y_1032_ = v___y_1085_;
v___y_1033_ = v___y_1081_;
v___y_1034_ = v___y_1086_;
v___y_1035_ = v___y_1084_;
v___y_1036_ = v___y_1079_;
goto v___jp_1017_;
}
}
else
{
uint8_t v___x_1116_; 
v___x_1116_ = lean_unbox(v_a_1093_);
lean_dec(v_a_1093_);
lean_inc_ref(v_run_x27_1104_);
v___y_1018_ = v_hasTrace_1099_;
v___y_1019_ = v___y_1080_;
v___y_1020_ = v___y_1082_;
v___y_1021_ = v_options_1098_;
v___y_1022_ = v___f_1106_;
v___y_1023_ = v___y_1083_;
v___y_1024_ = v_run_x27_1104_;
v___y_1025_ = v___x_1108_;
v___y_1026_ = v___x_1110_;
v___y_1027_ = v___y_1088_;
v___y_1028_ = v___y_1089_;
v___y_1029_ = v___x_1107_;
v___y_1030_ = v___x_1116_;
v___y_1031_ = v___y_1087_;
v___y_1032_ = v___y_1085_;
v___y_1033_ = v___y_1081_;
v___y_1034_ = v___y_1086_;
v___y_1035_ = v___y_1084_;
v___y_1036_ = v___y_1079_;
goto v___jp_1017_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_1092_, 1);
goto v___jp_937_;
}
}
else
{
return v___x_1092_;
}
}
v___jp_1117_:
{
if (lean_obj_tag(v___y_1130_) == 0)
{
lean_object* v_a_1131_; uint8_t v___x_1132_; 
v_a_1131_ = lean_ctor_get(v___y_1130_, 0);
lean_inc(v_a_1131_);
lean_dec_ref_known(v___y_1130_, 1);
v___x_1132_ = lean_unbox(v_a_1131_);
lean_dec(v_a_1131_);
if (v___x_1132_ == 0)
{
v___y_1078_ = v___y_1119_;
v___y_1079_ = v___y_1122_;
v___y_1080_ = v___y_1128_;
v___y_1081_ = v___y_1118_;
v___y_1082_ = v___y_1126_;
v___y_1083_ = v___y_1121_;
v___y_1084_ = v___y_1129_;
v___y_1085_ = v___y_1125_;
v___y_1086_ = v___y_1124_;
v___y_1087_ = v___y_1123_;
v___y_1088_ = v___y_1120_;
v___y_1089_ = v___y_1127_;
goto v___jp_1077_;
}
else
{
goto v___jp_937_;
}
}
else
{
return v___y_1130_;
}
}
v___jp_1133_:
{
lean_object* v___x_1155_; double v___x_1156_; double v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1155_ = lean_io_get_num_heartbeats();
v___x_1156_ = lean_float_of_nat(v___y_1144_);
v___x_1157_ = lean_float_of_nat(v___x_1155_);
v___x_1158_ = lean_box_float(v___x_1156_);
v___x_1159_ = lean_box_float(v___x_1157_);
v___x_1160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1158_);
lean_ctor_set(v___x_1160_, 1, v___x_1159_);
v___x_1161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1161_, 0, v_a_1154_);
lean_ctor_set(v___x_1161_, 1, v___x_1160_);
lean_inc_ref(v___y_1153_);
lean_inc(v___y_1151_);
v___x_1162_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(v___y_1151_, v___y_1150_, v___y_1153_, v___y_1145_, v___y_1138_, v___y_1135_, v___y_1139_, v___x_1161_, v___y_1134_, v___y_1137_, v___y_1140_, v___y_1148_, v___y_1143_, v___y_1152_, v___y_1147_, v___y_1146_, v___y_1136_, v___y_1142_, v___y_1149_);
v___y_1118_ = v___y_1140_;
v___y_1119_ = v___y_1141_;
v___y_1120_ = v___y_1142_;
v___y_1121_ = v___y_1143_;
v___y_1122_ = v___y_1134_;
v___y_1123_ = v___y_1136_;
v___y_1124_ = v___y_1146_;
v___y_1125_ = v___y_1147_;
v___y_1126_ = v___y_1148_;
v___y_1127_ = v___y_1149_;
v___y_1128_ = v___y_1137_;
v___y_1129_ = v___y_1152_;
v___y_1130_ = v___x_1162_;
goto v___jp_1117_;
}
v___jp_1163_:
{
lean_object* v___x_1185_; double v___x_1186_; double v___x_1187_; double v___x_1188_; double v___x_1189_; double v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1185_ = lean_io_mono_nanos_now();
v___x_1186_ = lean_float_of_nat(v___y_1165_);
v___x_1187_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0);
v___x_1188_ = lean_float_div(v___x_1186_, v___x_1187_);
v___x_1189_ = lean_float_of_nat(v___x_1185_);
v___x_1190_ = lean_float_div(v___x_1189_, v___x_1187_);
v___x_1191_ = lean_box_float(v___x_1188_);
v___x_1192_ = lean_box_float(v___x_1190_);
v___x_1193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1191_);
lean_ctor_set(v___x_1193_, 1, v___x_1192_);
v___x_1194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1194_, 0, v_a_1184_);
lean_ctor_set(v___x_1194_, 1, v___x_1193_);
lean_inc_ref(v___y_1183_);
lean_inc(v___y_1181_);
v___x_1195_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(v___y_1181_, v___y_1180_, v___y_1183_, v___y_1175_, v___y_1169_, v___y_1166_, v___y_1170_, v___x_1194_, v___y_1164_, v___y_1168_, v___y_1171_, v___y_1178_, v___y_1174_, v___y_1182_, v___y_1177_, v___y_1176_, v___y_1167_, v___y_1173_, v___y_1179_);
v___y_1118_ = v___y_1171_;
v___y_1119_ = v___y_1172_;
v___y_1120_ = v___y_1173_;
v___y_1121_ = v___y_1174_;
v___y_1122_ = v___y_1164_;
v___y_1123_ = v___y_1167_;
v___y_1124_ = v___y_1176_;
v___y_1125_ = v___y_1177_;
v___y_1126_ = v___y_1178_;
v___y_1127_ = v___y_1179_;
v___y_1128_ = v___y_1168_;
v___y_1129_ = v___y_1182_;
v___y_1130_ = v___x_1195_;
goto v___jp_1117_;
}
v___jp_1196_:
{
lean_object* v___x_1216_; lean_object* v_a_1217_; lean_object* v___x_1218_; uint8_t v___x_1219_; 
v___x_1216_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg(v___y_1211_);
v_a_1217_ = lean_ctor_get(v___x_1216_, 0);
lean_inc(v_a_1217_);
lean_dec_ref(v___x_1216_);
v___x_1218_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1219_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v___y_1207_, v___x_1218_);
if (v___x_1219_ == 0)
{
lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1220_ = lean_io_mono_nanos_now();
lean_inc(v___y_1211_);
lean_inc_ref(v___y_1206_);
lean_inc(v___y_1198_);
lean_inc_ref(v___y_1209_);
lean_inc(v___y_1208_);
lean_inc_ref(v___y_1215_);
lean_inc(v___y_1205_);
lean_inc_ref(v___y_1210_);
lean_inc(v___y_1203_);
lean_inc(v___y_1200_);
lean_inc_ref(v___y_1197_);
v___x_1221_ = lean_apply_12(v___y_1199_, v___y_1197_, v___y_1200_, v___y_1203_, v___y_1210_, v___y_1205_, v___y_1215_, v___y_1208_, v___y_1209_, v___y_1198_, v___y_1206_, v___y_1211_, lean_box(0));
if (lean_obj_tag(v___x_1221_) == 0)
{
lean_object* v_a_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1229_; 
v_a_1222_ = lean_ctor_get(v___x_1221_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1224_ = v___x_1221_;
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_a_1222_);
lean_dec(v___x_1221_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1227_; 
if (v_isShared_1225_ == 0)
{
lean_ctor_set_tag(v___x_1224_, 1);
v___x_1227_ = v___x_1224_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_a_1222_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
v___y_1164_ = v___y_1197_;
v___y_1165_ = v___x_1220_;
v___y_1166_ = v_a_1217_;
v___y_1167_ = v___y_1198_;
v___y_1168_ = v___y_1200_;
v___y_1169_ = v___y_1201_;
v___y_1170_ = v___y_1202_;
v___y_1171_ = v___y_1203_;
v___y_1172_ = v___y_1204_;
v___y_1173_ = v___y_1206_;
v___y_1174_ = v___y_1205_;
v___y_1175_ = v___y_1207_;
v___y_1176_ = v___y_1209_;
v___y_1177_ = v___y_1208_;
v___y_1178_ = v___y_1210_;
v___y_1179_ = v___y_1211_;
v___y_1180_ = v___y_1212_;
v___y_1181_ = v___y_1213_;
v___y_1182_ = v___y_1215_;
v___y_1183_ = v___y_1214_;
v_a_1184_ = v___x_1227_;
goto v___jp_1163_;
}
}
}
else
{
lean_object* v_a_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1237_; 
v_a_1230_ = lean_ctor_get(v___x_1221_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1232_ = v___x_1221_;
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_a_1230_);
lean_dec(v___x_1221_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v___x_1235_; 
if (v_isShared_1233_ == 0)
{
lean_ctor_set_tag(v___x_1232_, 0);
v___x_1235_ = v___x_1232_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_a_1230_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
v___y_1164_ = v___y_1197_;
v___y_1165_ = v___x_1220_;
v___y_1166_ = v_a_1217_;
v___y_1167_ = v___y_1198_;
v___y_1168_ = v___y_1200_;
v___y_1169_ = v___y_1201_;
v___y_1170_ = v___y_1202_;
v___y_1171_ = v___y_1203_;
v___y_1172_ = v___y_1204_;
v___y_1173_ = v___y_1206_;
v___y_1174_ = v___y_1205_;
v___y_1175_ = v___y_1207_;
v___y_1176_ = v___y_1209_;
v___y_1177_ = v___y_1208_;
v___y_1178_ = v___y_1210_;
v___y_1179_ = v___y_1211_;
v___y_1180_ = v___y_1212_;
v___y_1181_ = v___y_1213_;
v___y_1182_ = v___y_1215_;
v___y_1183_ = v___y_1214_;
v_a_1184_ = v___x_1235_;
goto v___jp_1163_;
}
}
}
}
else
{
lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1238_ = lean_io_get_num_heartbeats();
lean_inc(v___y_1211_);
lean_inc_ref(v___y_1206_);
lean_inc(v___y_1198_);
lean_inc_ref(v___y_1209_);
lean_inc(v___y_1208_);
lean_inc_ref(v___y_1215_);
lean_inc(v___y_1205_);
lean_inc_ref(v___y_1210_);
lean_inc(v___y_1203_);
lean_inc(v___y_1200_);
lean_inc_ref(v___y_1197_);
v___x_1239_ = lean_apply_12(v___y_1199_, v___y_1197_, v___y_1200_, v___y_1203_, v___y_1210_, v___y_1205_, v___y_1215_, v___y_1208_, v___y_1209_, v___y_1198_, v___y_1206_, v___y_1211_, lean_box(0));
if (lean_obj_tag(v___x_1239_) == 0)
{
lean_object* v_a_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1247_; 
v_a_1240_ = lean_ctor_get(v___x_1239_, 0);
v_isSharedCheck_1247_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1242_ = v___x_1239_;
v_isShared_1243_ = v_isSharedCheck_1247_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_a_1240_);
lean_dec(v___x_1239_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1247_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1245_; 
if (v_isShared_1243_ == 0)
{
lean_ctor_set_tag(v___x_1242_, 1);
v___x_1245_ = v___x_1242_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v_a_1240_);
v___x_1245_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
v___y_1134_ = v___y_1197_;
v___y_1135_ = v_a_1217_;
v___y_1136_ = v___y_1198_;
v___y_1137_ = v___y_1200_;
v___y_1138_ = v___y_1201_;
v___y_1139_ = v___y_1202_;
v___y_1140_ = v___y_1203_;
v___y_1141_ = v___y_1204_;
v___y_1142_ = v___y_1206_;
v___y_1143_ = v___y_1205_;
v___y_1144_ = v___x_1238_;
v___y_1145_ = v___y_1207_;
v___y_1146_ = v___y_1209_;
v___y_1147_ = v___y_1208_;
v___y_1148_ = v___y_1210_;
v___y_1149_ = v___y_1211_;
v___y_1150_ = v___y_1212_;
v___y_1151_ = v___y_1213_;
v___y_1152_ = v___y_1215_;
v___y_1153_ = v___y_1214_;
v_a_1154_ = v___x_1245_;
goto v___jp_1133_;
}
}
}
else
{
lean_object* v_a_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1255_; 
v_a_1248_ = lean_ctor_get(v___x_1239_, 0);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1250_ = v___x_1239_;
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_a_1248_);
lean_dec(v___x_1239_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1253_; 
if (v_isShared_1251_ == 0)
{
lean_ctor_set_tag(v___x_1250_, 0);
v___x_1253_ = v___x_1250_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_a_1248_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
v___y_1134_ = v___y_1197_;
v___y_1135_ = v_a_1217_;
v___y_1136_ = v___y_1198_;
v___y_1137_ = v___y_1200_;
v___y_1138_ = v___y_1201_;
v___y_1139_ = v___y_1202_;
v___y_1140_ = v___y_1203_;
v___y_1141_ = v___y_1204_;
v___y_1142_ = v___y_1206_;
v___y_1143_ = v___y_1205_;
v___y_1144_ = v___x_1238_;
v___y_1145_ = v___y_1207_;
v___y_1146_ = v___y_1209_;
v___y_1147_ = v___y_1208_;
v___y_1148_ = v___y_1210_;
v___y_1149_ = v___y_1211_;
v___y_1150_ = v___y_1212_;
v___y_1151_ = v___y_1213_;
v___y_1152_ = v___y_1215_;
v___y_1153_ = v___y_1214_;
v_a_1154_ = v___x_1253_;
goto v___jp_1133_;
}
}
}
}
}
v___jp_1256_:
{
if (v_fixedInt_1258_ == 0)
{
v___y_1078_ = v___y_1257_;
v___y_1079_ = v___y_1259_;
v___y_1080_ = v___y_1260_;
v___y_1081_ = v___y_1261_;
v___y_1082_ = v___y_1262_;
v___y_1083_ = v___y_1263_;
v___y_1084_ = v___y_1264_;
v___y_1085_ = v___y_1265_;
v___y_1086_ = v___y_1266_;
v___y_1087_ = v___y_1267_;
v___y_1088_ = v___y_1268_;
v___y_1089_ = v___y_1269_;
goto v___jp_1077_;
}
else
{
lean_object* v___x_1270_; lean_object* v_toCold_1271_; lean_object* v_options_1272_; uint8_t v_hasTrace_1273_; 
v___x_1270_ = l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass;
v_toCold_1271_ = lean_ctor_get(v___y_1268_, 0);
v_options_1272_ = lean_ctor_get(v_toCold_1271_, 2);
v_hasTrace_1273_ = lean_ctor_get_uint8(v_options_1272_, sizeof(void*)*1);
if (v_hasTrace_1273_ == 0)
{
lean_object* v_run_x27_1274_; lean_object* v___x_1275_; 
v_run_x27_1274_ = lean_ctor_get(v___x_1270_, 1);
lean_inc_ref(v_run_x27_1274_);
lean_inc(v___y_1269_);
lean_inc_ref(v___y_1268_);
lean_inc(v___y_1267_);
lean_inc_ref(v___y_1266_);
lean_inc(v___y_1265_);
lean_inc_ref(v___y_1264_);
lean_inc(v___y_1263_);
lean_inc_ref(v___y_1262_);
lean_inc(v___y_1261_);
lean_inc(v___y_1260_);
lean_inc_ref(v___y_1259_);
v___x_1275_ = lean_apply_12(v_run_x27_1274_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, lean_box(0));
v___y_1118_ = v___y_1261_;
v___y_1119_ = v___y_1257_;
v___y_1120_ = v___y_1268_;
v___y_1121_ = v___y_1263_;
v___y_1122_ = v___y_1259_;
v___y_1123_ = v___y_1267_;
v___y_1124_ = v___y_1266_;
v___y_1125_ = v___y_1265_;
v___y_1126_ = v___y_1262_;
v___y_1127_ = v___y_1269_;
v___y_1128_ = v___y_1260_;
v___y_1129_ = v___y_1264_;
v___y_1130_ = v___x_1275_;
goto v___jp_1117_;
}
else
{
lean_object* v_name_1276_; lean_object* v_run_x27_1277_; lean_object* v_inheritedTraceOptions_1278_; lean_object* v___f_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; uint8_t v___x_1283_; 
v_name_1276_ = lean_ctor_get(v___x_1270_, 0);
v_run_x27_1277_ = lean_ctor_get(v___x_1270_, 1);
v_inheritedTraceOptions_1278_ = lean_ctor_get(v_toCold_1271_, 11);
lean_inc(v_name_1276_);
v___f_1279_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___boxed), 14, 1);
lean_closure_set(v___f_1279_, 0, v_name_1276_);
v___x_1280_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4));
v___x_1281_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__1));
v___x_1282_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7);
v___x_1283_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1278_, v_options_1272_, v___x_1282_);
if (v___x_1283_ == 0)
{
lean_object* v___x_1284_; uint8_t v___x_1285_; 
v___x_1284_ = l_Lean_trace_profiler;
v___x_1285_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v_options_1272_, v___x_1284_);
if (v___x_1285_ == 0)
{
lean_object* v___x_1286_; 
lean_dec_ref(v___f_1279_);
lean_inc_ref(v_run_x27_1277_);
lean_inc(v___y_1269_);
lean_inc_ref(v___y_1268_);
lean_inc(v___y_1267_);
lean_inc_ref(v___y_1266_);
lean_inc(v___y_1265_);
lean_inc_ref(v___y_1264_);
lean_inc(v___y_1263_);
lean_inc_ref(v___y_1262_);
lean_inc(v___y_1261_);
lean_inc(v___y_1260_);
lean_inc_ref(v___y_1259_);
v___x_1286_ = lean_apply_12(v_run_x27_1277_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, lean_box(0));
v___y_1118_ = v___y_1261_;
v___y_1119_ = v___y_1257_;
v___y_1120_ = v___y_1268_;
v___y_1121_ = v___y_1263_;
v___y_1122_ = v___y_1259_;
v___y_1123_ = v___y_1267_;
v___y_1124_ = v___y_1266_;
v___y_1125_ = v___y_1265_;
v___y_1126_ = v___y_1262_;
v___y_1127_ = v___y_1269_;
v___y_1128_ = v___y_1260_;
v___y_1129_ = v___y_1264_;
v___y_1130_ = v___x_1286_;
goto v___jp_1117_;
}
else
{
lean_inc_ref(v_run_x27_1277_);
v___y_1197_ = v___y_1259_;
v___y_1198_ = v___y_1267_;
v___y_1199_ = v_run_x27_1277_;
v___y_1200_ = v___y_1260_;
v___y_1201_ = v___x_1283_;
v___y_1202_ = v___f_1279_;
v___y_1203_ = v___y_1261_;
v___y_1204_ = v___y_1257_;
v___y_1205_ = v___y_1263_;
v___y_1206_ = v___y_1268_;
v___y_1207_ = v_options_1272_;
v___y_1208_ = v___y_1265_;
v___y_1209_ = v___y_1266_;
v___y_1210_ = v___y_1262_;
v___y_1211_ = v___y_1269_;
v___y_1212_ = v_hasTrace_1273_;
v___y_1213_ = v___x_1280_;
v___y_1214_ = v___x_1281_;
v___y_1215_ = v___y_1264_;
goto v___jp_1196_;
}
}
else
{
lean_inc_ref(v_run_x27_1277_);
v___y_1197_ = v___y_1259_;
v___y_1198_ = v___y_1267_;
v___y_1199_ = v_run_x27_1277_;
v___y_1200_ = v___y_1260_;
v___y_1201_ = v___x_1283_;
v___y_1202_ = v___f_1279_;
v___y_1203_ = v___y_1261_;
v___y_1204_ = v___y_1257_;
v___y_1205_ = v___y_1263_;
v___y_1206_ = v___y_1268_;
v___y_1207_ = v_options_1272_;
v___y_1208_ = v___y_1265_;
v___y_1209_ = v___y_1266_;
v___y_1210_ = v___y_1262_;
v___y_1211_ = v___y_1269_;
v___y_1212_ = v_hasTrace_1273_;
v___y_1213_ = v___x_1280_;
v___y_1214_ = v___x_1281_;
v___y_1215_ = v___y_1264_;
goto v___jp_1196_;
}
}
}
}
v___jp_1287_:
{
if (lean_obj_tag(v___y_1300_) == 0)
{
lean_object* v_a_1301_; uint8_t v___x_1302_; 
v_a_1301_ = lean_ctor_get(v___y_1300_, 0);
lean_inc(v_a_1301_);
lean_dec_ref_known(v___y_1300_, 1);
v___x_1302_ = lean_unbox(v_a_1301_);
lean_dec(v_a_1301_);
if (v___x_1302_ == 0)
{
uint8_t v_fixedInt_1303_; 
v_fixedInt_1303_ = lean_ctor_get_uint8(v___y_1288_, sizeof(void*)*3 + 6);
v___y_1257_ = v___y_1288_;
v_fixedInt_1258_ = v_fixedInt_1303_;
v___y_1259_ = v___y_1298_;
v___y_1260_ = v___y_1294_;
v___y_1261_ = v___y_1297_;
v___y_1262_ = v___y_1295_;
v___y_1263_ = v___y_1289_;
v___y_1264_ = v___y_1299_;
v___y_1265_ = v___y_1292_;
v___y_1266_ = v___y_1290_;
v___y_1267_ = v___y_1296_;
v___y_1268_ = v___y_1291_;
v___y_1269_ = v___y_1293_;
goto v___jp_1256_;
}
else
{
goto v___jp_937_;
}
}
else
{
return v___y_1300_;
}
}
v___jp_1304_:
{
lean_object* v___x_1326_; double v___x_1327_; double v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1326_ = lean_io_get_num_heartbeats();
v___x_1327_ = lean_float_of_nat(v___y_1324_);
v___x_1328_ = lean_float_of_nat(v___x_1326_);
v___x_1329_ = lean_box_float(v___x_1327_);
v___x_1330_ = lean_box_float(v___x_1328_);
v___x_1331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1329_);
lean_ctor_set(v___x_1331_, 1, v___x_1330_);
v___x_1332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1332_, 0, v_a_1325_);
lean_ctor_set(v___x_1332_, 1, v___x_1331_);
lean_inc_ref(v___y_1315_);
lean_inc(v___y_1312_);
v___x_1333_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(v___y_1312_, v___y_1317_, v___y_1315_, v___y_1321_, v___y_1322_, v___y_1309_, v___y_1308_, v___x_1332_, v___y_1320_, v___y_1316_, v___y_1319_, v___y_1311_, v___y_1305_, v___y_1323_, v___y_1307_, v___y_1306_, v___y_1318_, v___y_1314_, v___y_1310_);
v___y_1288_ = v___y_1313_;
v___y_1289_ = v___y_1305_;
v___y_1290_ = v___y_1306_;
v___y_1291_ = v___y_1314_;
v___y_1292_ = v___y_1307_;
v___y_1293_ = v___y_1310_;
v___y_1294_ = v___y_1316_;
v___y_1295_ = v___y_1311_;
v___y_1296_ = v___y_1318_;
v___y_1297_ = v___y_1319_;
v___y_1298_ = v___y_1320_;
v___y_1299_ = v___y_1323_;
v___y_1300_ = v___x_1333_;
goto v___jp_1287_;
}
v___jp_1334_:
{
lean_object* v___x_1356_; double v___x_1357_; double v___x_1358_; double v___x_1359_; double v___x_1360_; double v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
v___x_1356_ = lean_io_mono_nanos_now();
v___x_1357_ = lean_float_of_nat(v___y_1349_);
v___x_1358_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0);
v___x_1359_ = lean_float_div(v___x_1357_, v___x_1358_);
v___x_1360_ = lean_float_of_nat(v___x_1356_);
v___x_1361_ = lean_float_div(v___x_1360_, v___x_1358_);
v___x_1362_ = lean_box_float(v___x_1359_);
v___x_1363_ = lean_box_float(v___x_1361_);
v___x_1364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1362_);
lean_ctor_set(v___x_1364_, 1, v___x_1363_);
v___x_1365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1365_, 0, v_a_1355_);
lean_ctor_set(v___x_1365_, 1, v___x_1364_);
lean_inc_ref(v___y_1345_);
lean_inc(v___y_1342_);
v___x_1366_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(v___y_1342_, v___y_1347_, v___y_1345_, v___y_1352_, v___y_1353_, v___y_1339_, v___y_1338_, v___x_1365_, v___y_1351_, v___y_1346_, v___y_1350_, v___y_1341_, v___y_1335_, v___y_1354_, v___y_1337_, v___y_1336_, v___y_1348_, v___y_1344_, v___y_1340_);
v___y_1288_ = v___y_1343_;
v___y_1289_ = v___y_1335_;
v___y_1290_ = v___y_1336_;
v___y_1291_ = v___y_1344_;
v___y_1292_ = v___y_1337_;
v___y_1293_ = v___y_1340_;
v___y_1294_ = v___y_1346_;
v___y_1295_ = v___y_1341_;
v___y_1296_ = v___y_1348_;
v___y_1297_ = v___y_1350_;
v___y_1298_ = v___y_1351_;
v___y_1299_ = v___y_1354_;
v___y_1300_ = v___x_1366_;
goto v___jp_1287_;
}
v___jp_1367_:
{
lean_object* v___x_1387_; lean_object* v_a_1388_; lean_object* v___x_1389_; uint8_t v___x_1390_; 
v___x_1387_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg(v___y_1372_);
v_a_1388_ = lean_ctor_get(v___x_1387_, 0);
lean_inc(v_a_1388_);
lean_dec_ref(v___x_1387_);
v___x_1389_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1390_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v___y_1385_, v___x_1389_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1391_ = lean_io_mono_nanos_now();
lean_inc(v___y_1372_);
lean_inc_ref(v___y_1376_);
lean_inc(v___y_1381_);
lean_inc_ref(v___y_1369_);
lean_inc(v___y_1371_);
lean_inc_ref(v___y_1386_);
lean_inc(v___y_1368_);
lean_inc_ref(v___y_1373_);
lean_inc(v___y_1382_);
lean_inc(v___y_1378_);
lean_inc_ref(v___y_1383_);
v___x_1392_ = lean_apply_12(v___y_1379_, v___y_1383_, v___y_1378_, v___y_1382_, v___y_1373_, v___y_1368_, v___y_1386_, v___y_1371_, v___y_1369_, v___y_1381_, v___y_1376_, v___y_1372_, lean_box(0));
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1400_; 
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1395_ = v___x_1392_;
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v___x_1392_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1398_; 
if (v_isShared_1396_ == 0)
{
lean_ctor_set_tag(v___x_1395_, 1);
v___x_1398_ = v___x_1395_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v_a_1393_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
v___y_1335_ = v___y_1368_;
v___y_1336_ = v___y_1369_;
v___y_1337_ = v___y_1371_;
v___y_1338_ = v___y_1370_;
v___y_1339_ = v_a_1388_;
v___y_1340_ = v___y_1372_;
v___y_1341_ = v___y_1373_;
v___y_1342_ = v___y_1374_;
v___y_1343_ = v___y_1375_;
v___y_1344_ = v___y_1376_;
v___y_1345_ = v___y_1377_;
v___y_1346_ = v___y_1378_;
v___y_1347_ = v___y_1380_;
v___y_1348_ = v___y_1381_;
v___y_1349_ = v___x_1391_;
v___y_1350_ = v___y_1382_;
v___y_1351_ = v___y_1383_;
v___y_1352_ = v___y_1385_;
v___y_1353_ = v___y_1384_;
v___y_1354_ = v___y_1386_;
v_a_1355_ = v___x_1398_;
goto v___jp_1334_;
}
}
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
v_a_1401_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___x_1392_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1392_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1406_; 
if (v_isShared_1404_ == 0)
{
lean_ctor_set_tag(v___x_1403_, 0);
v___x_1406_ = v___x_1403_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_a_1401_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
v___y_1335_ = v___y_1368_;
v___y_1336_ = v___y_1369_;
v___y_1337_ = v___y_1371_;
v___y_1338_ = v___y_1370_;
v___y_1339_ = v_a_1388_;
v___y_1340_ = v___y_1372_;
v___y_1341_ = v___y_1373_;
v___y_1342_ = v___y_1374_;
v___y_1343_ = v___y_1375_;
v___y_1344_ = v___y_1376_;
v___y_1345_ = v___y_1377_;
v___y_1346_ = v___y_1378_;
v___y_1347_ = v___y_1380_;
v___y_1348_ = v___y_1381_;
v___y_1349_ = v___x_1391_;
v___y_1350_ = v___y_1382_;
v___y_1351_ = v___y_1383_;
v___y_1352_ = v___y_1385_;
v___y_1353_ = v___y_1384_;
v___y_1354_ = v___y_1386_;
v_a_1355_ = v___x_1406_;
goto v___jp_1334_;
}
}
}
}
else
{
lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1409_ = lean_io_get_num_heartbeats();
lean_inc(v___y_1372_);
lean_inc_ref(v___y_1376_);
lean_inc(v___y_1381_);
lean_inc_ref(v___y_1369_);
lean_inc(v___y_1371_);
lean_inc_ref(v___y_1386_);
lean_inc(v___y_1368_);
lean_inc_ref(v___y_1373_);
lean_inc(v___y_1382_);
lean_inc(v___y_1378_);
lean_inc_ref(v___y_1383_);
v___x_1410_ = lean_apply_12(v___y_1379_, v___y_1383_, v___y_1378_, v___y_1382_, v___y_1373_, v___y_1368_, v___y_1386_, v___y_1371_, v___y_1369_, v___y_1381_, v___y_1376_, v___y_1372_, lean_box(0));
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v_a_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1418_; 
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1418_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1413_ = v___x_1410_;
v_isShared_1414_ = v_isSharedCheck_1418_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_a_1411_);
lean_dec(v___x_1410_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1418_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v___x_1416_; 
if (v_isShared_1414_ == 0)
{
lean_ctor_set_tag(v___x_1413_, 1);
v___x_1416_ = v___x_1413_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_a_1411_);
v___x_1416_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
v___y_1305_ = v___y_1368_;
v___y_1306_ = v___y_1369_;
v___y_1307_ = v___y_1371_;
v___y_1308_ = v___y_1370_;
v___y_1309_ = v_a_1388_;
v___y_1310_ = v___y_1372_;
v___y_1311_ = v___y_1373_;
v___y_1312_ = v___y_1374_;
v___y_1313_ = v___y_1375_;
v___y_1314_ = v___y_1376_;
v___y_1315_ = v___y_1377_;
v___y_1316_ = v___y_1378_;
v___y_1317_ = v___y_1380_;
v___y_1318_ = v___y_1381_;
v___y_1319_ = v___y_1382_;
v___y_1320_ = v___y_1383_;
v___y_1321_ = v___y_1385_;
v___y_1322_ = v___y_1384_;
v___y_1323_ = v___y_1386_;
v___y_1324_ = v___x_1409_;
v_a_1325_ = v___x_1416_;
goto v___jp_1304_;
}
}
}
else
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
v_a_1419_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1410_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1410_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
if (v_isShared_1422_ == 0)
{
lean_ctor_set_tag(v___x_1421_, 0);
v___x_1424_ = v___x_1421_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_a_1419_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
v___y_1305_ = v___y_1368_;
v___y_1306_ = v___y_1369_;
v___y_1307_ = v___y_1371_;
v___y_1308_ = v___y_1370_;
v___y_1309_ = v_a_1388_;
v___y_1310_ = v___y_1372_;
v___y_1311_ = v___y_1373_;
v___y_1312_ = v___y_1374_;
v___y_1313_ = v___y_1375_;
v___y_1314_ = v___y_1376_;
v___y_1315_ = v___y_1377_;
v___y_1316_ = v___y_1378_;
v___y_1317_ = v___y_1380_;
v___y_1318_ = v___y_1381_;
v___y_1319_ = v___y_1382_;
v___y_1320_ = v___y_1383_;
v___y_1321_ = v___y_1385_;
v___y_1322_ = v___y_1384_;
v___y_1323_ = v___y_1386_;
v___y_1324_ = v___x_1409_;
v_a_1325_ = v___x_1424_;
goto v___jp_1304_;
}
}
}
}
}
v___jp_1427_:
{
if (v_enums_1430_ == 0)
{
v___y_1257_ = v___y_1428_;
v_fixedInt_1258_ = v_fixedInt_1429_;
v___y_1259_ = v___y_1431_;
v___y_1260_ = v___y_1432_;
v___y_1261_ = v___y_1433_;
v___y_1262_ = v___y_1434_;
v___y_1263_ = v___y_1435_;
v___y_1264_ = v___y_1436_;
v___y_1265_ = v___y_1437_;
v___y_1266_ = v___y_1438_;
v___y_1267_ = v___y_1439_;
v___y_1268_ = v___y_1440_;
v___y_1269_ = v___y_1441_;
goto v___jp_1256_;
}
else
{
lean_object* v___x_1442_; lean_object* v_toCold_1443_; lean_object* v_options_1444_; uint8_t v_hasTrace_1445_; 
v___x_1442_ = l_Lean_Meta_Tactic_BVDecide_Normalize_enumsPass;
v_toCold_1443_ = lean_ctor_get(v___y_1440_, 0);
v_options_1444_ = lean_ctor_get(v_toCold_1443_, 2);
v_hasTrace_1445_ = lean_ctor_get_uint8(v_options_1444_, sizeof(void*)*1);
if (v_hasTrace_1445_ == 0)
{
lean_object* v_run_x27_1446_; lean_object* v___x_1447_; 
v_run_x27_1446_ = lean_ctor_get(v___x_1442_, 1);
lean_inc_ref(v_run_x27_1446_);
lean_inc(v___y_1441_);
lean_inc_ref(v___y_1440_);
lean_inc(v___y_1439_);
lean_inc_ref(v___y_1438_);
lean_inc(v___y_1437_);
lean_inc_ref(v___y_1436_);
lean_inc(v___y_1435_);
lean_inc_ref(v___y_1434_);
lean_inc(v___y_1433_);
lean_inc(v___y_1432_);
lean_inc_ref(v___y_1431_);
v___x_1447_ = lean_apply_12(v_run_x27_1446_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, lean_box(0));
v___y_1288_ = v___y_1428_;
v___y_1289_ = v___y_1435_;
v___y_1290_ = v___y_1438_;
v___y_1291_ = v___y_1440_;
v___y_1292_ = v___y_1437_;
v___y_1293_ = v___y_1441_;
v___y_1294_ = v___y_1432_;
v___y_1295_ = v___y_1434_;
v___y_1296_ = v___y_1439_;
v___y_1297_ = v___y_1433_;
v___y_1298_ = v___y_1431_;
v___y_1299_ = v___y_1436_;
v___y_1300_ = v___x_1447_;
goto v___jp_1287_;
}
else
{
lean_object* v_name_1448_; lean_object* v_run_x27_1449_; lean_object* v_inheritedTraceOptions_1450_; lean_object* v___f_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; uint8_t v___x_1455_; 
v_name_1448_ = lean_ctor_get(v___x_1442_, 0);
v_run_x27_1449_ = lean_ctor_get(v___x_1442_, 1);
v_inheritedTraceOptions_1450_ = lean_ctor_get(v_toCold_1443_, 11);
lean_inc(v_name_1448_);
v___f_1451_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___boxed), 14, 1);
lean_closure_set(v___f_1451_, 0, v_name_1448_);
v___x_1452_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4));
v___x_1453_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__1));
v___x_1454_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7);
v___x_1455_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1450_, v_options_1444_, v___x_1454_);
if (v___x_1455_ == 0)
{
lean_object* v___x_1456_; uint8_t v___x_1457_; 
v___x_1456_ = l_Lean_trace_profiler;
v___x_1457_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v_options_1444_, v___x_1456_);
if (v___x_1457_ == 0)
{
lean_object* v___x_1458_; 
lean_dec_ref(v___f_1451_);
lean_inc_ref(v_run_x27_1449_);
lean_inc(v___y_1441_);
lean_inc_ref(v___y_1440_);
lean_inc(v___y_1439_);
lean_inc_ref(v___y_1438_);
lean_inc(v___y_1437_);
lean_inc_ref(v___y_1436_);
lean_inc(v___y_1435_);
lean_inc_ref(v___y_1434_);
lean_inc(v___y_1433_);
lean_inc(v___y_1432_);
lean_inc_ref(v___y_1431_);
v___x_1458_ = lean_apply_12(v_run_x27_1449_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, lean_box(0));
v___y_1288_ = v___y_1428_;
v___y_1289_ = v___y_1435_;
v___y_1290_ = v___y_1438_;
v___y_1291_ = v___y_1440_;
v___y_1292_ = v___y_1437_;
v___y_1293_ = v___y_1441_;
v___y_1294_ = v___y_1432_;
v___y_1295_ = v___y_1434_;
v___y_1296_ = v___y_1439_;
v___y_1297_ = v___y_1433_;
v___y_1298_ = v___y_1431_;
v___y_1299_ = v___y_1436_;
v___y_1300_ = v___x_1458_;
goto v___jp_1287_;
}
else
{
lean_inc_ref(v_run_x27_1449_);
v___y_1368_ = v___y_1435_;
v___y_1369_ = v___y_1438_;
v___y_1370_ = v___f_1451_;
v___y_1371_ = v___y_1437_;
v___y_1372_ = v___y_1441_;
v___y_1373_ = v___y_1434_;
v___y_1374_ = v___x_1452_;
v___y_1375_ = v___y_1428_;
v___y_1376_ = v___y_1440_;
v___y_1377_ = v___x_1453_;
v___y_1378_ = v___y_1432_;
v___y_1379_ = v_run_x27_1449_;
v___y_1380_ = v_hasTrace_1445_;
v___y_1381_ = v___y_1439_;
v___y_1382_ = v___y_1433_;
v___y_1383_ = v___y_1431_;
v___y_1384_ = v___x_1455_;
v___y_1385_ = v_options_1444_;
v___y_1386_ = v___y_1436_;
goto v___jp_1367_;
}
}
else
{
lean_inc_ref(v_run_x27_1449_);
v___y_1368_ = v___y_1435_;
v___y_1369_ = v___y_1438_;
v___y_1370_ = v___f_1451_;
v___y_1371_ = v___y_1437_;
v___y_1372_ = v___y_1441_;
v___y_1373_ = v___y_1434_;
v___y_1374_ = v___x_1452_;
v___y_1375_ = v___y_1428_;
v___y_1376_ = v___y_1440_;
v___y_1377_ = v___x_1453_;
v___y_1378_ = v___y_1432_;
v___y_1379_ = v_run_x27_1449_;
v___y_1380_ = v_hasTrace_1445_;
v___y_1381_ = v___y_1439_;
v___y_1382_ = v___y_1433_;
v___y_1383_ = v___y_1431_;
v___y_1384_ = v___x_1455_;
v___y_1385_ = v_options_1444_;
v___y_1386_ = v___y_1436_;
goto v___jp_1367_;
}
}
}
}
v___jp_1459_:
{
if (lean_obj_tag(v___y_1472_) == 0)
{
lean_object* v_a_1473_; uint8_t v___x_1474_; 
v_a_1473_ = lean_ctor_get(v___y_1472_, 0);
lean_inc(v_a_1473_);
lean_dec_ref_known(v___y_1472_, 1);
v___x_1474_ = lean_unbox(v_a_1473_);
lean_dec(v_a_1473_);
if (v___x_1474_ == 0)
{
uint8_t v_fixedInt_1475_; uint8_t v_enums_1476_; 
v_fixedInt_1475_ = lean_ctor_get_uint8(v___y_1461_, sizeof(void*)*3 + 6);
v_enums_1476_ = lean_ctor_get_uint8(v___y_1461_, sizeof(void*)*3 + 7);
v___y_1428_ = v___y_1461_;
v_fixedInt_1429_ = v_fixedInt_1475_;
v_enums_1430_ = v_enums_1476_;
v___y_1431_ = v___y_1467_;
v___y_1432_ = v___y_1466_;
v___y_1433_ = v___y_1471_;
v___y_1434_ = v___y_1470_;
v___y_1435_ = v___y_1468_;
v___y_1436_ = v___y_1462_;
v___y_1437_ = v___y_1465_;
v___y_1438_ = v___y_1469_;
v___y_1439_ = v___y_1464_;
v___y_1440_ = v___y_1463_;
v___y_1441_ = v___y_1460_;
goto v___jp_1427_;
}
else
{
goto v___jp_937_;
}
}
else
{
return v___y_1472_;
}
}
v___jp_1477_:
{
lean_object* v___x_1499_; double v___x_1500_; double v___x_1501_; double v___x_1502_; double v___x_1503_; double v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1499_ = lean_io_mono_nanos_now();
v___x_1500_ = lean_float_of_nat(v___y_1478_);
v___x_1501_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0);
v___x_1502_ = lean_float_div(v___x_1500_, v___x_1501_);
v___x_1503_ = lean_float_of_nat(v___x_1499_);
v___x_1504_ = lean_float_div(v___x_1503_, v___x_1501_);
v___x_1505_ = lean_box_float(v___x_1502_);
v___x_1506_ = lean_box_float(v___x_1504_);
v___x_1507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1507_, 0, v___x_1505_);
lean_ctor_set(v___x_1507_, 1, v___x_1506_);
v___x_1508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1508_, 0, v_a_1498_);
lean_ctor_set(v___x_1508_, 1, v___x_1507_);
lean_inc_ref(v___y_1496_);
lean_inc(v___y_1486_);
v___x_1509_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(v___y_1486_, v___y_1480_, v___y_1496_, v___y_1481_, v___y_1492_, v___y_1494_, v___y_1484_, v___x_1508_, v___y_1491_, v___y_1490_, v___y_1497_, v___y_1495_, v___y_1493_, v___y_1479_, v___y_1489_, v___y_1483_, v___y_1488_, v___y_1482_, v___y_1485_);
v___y_1460_ = v___y_1485_;
v___y_1461_ = v___y_1487_;
v___y_1462_ = v___y_1479_;
v___y_1463_ = v___y_1482_;
v___y_1464_ = v___y_1488_;
v___y_1465_ = v___y_1489_;
v___y_1466_ = v___y_1490_;
v___y_1467_ = v___y_1491_;
v___y_1468_ = v___y_1493_;
v___y_1469_ = v___y_1483_;
v___y_1470_ = v___y_1495_;
v___y_1471_ = v___y_1497_;
v___y_1472_ = v___x_1509_;
goto v___jp_1459_;
}
v___jp_1510_:
{
lean_object* v___x_1532_; double v___x_1533_; double v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1532_ = lean_io_get_num_heartbeats();
v___x_1533_ = lean_float_of_nat(v___y_1516_);
v___x_1534_ = lean_float_of_nat(v___x_1532_);
v___x_1535_ = lean_box_float(v___x_1533_);
v___x_1536_ = lean_box_float(v___x_1534_);
v___x_1537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1537_, 0, v___x_1535_);
lean_ctor_set(v___x_1537_, 1, v___x_1536_);
v___x_1538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1538_, 0, v_a_1531_);
lean_ctor_set(v___x_1538_, 1, v___x_1537_);
lean_inc_ref(v___y_1529_);
lean_inc(v___y_1519_);
v___x_1539_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(v___y_1519_, v___y_1512_, v___y_1529_, v___y_1513_, v___y_1525_, v___y_1527_, v___y_1517_, v___x_1538_, v___y_1524_, v___y_1523_, v___y_1530_, v___y_1528_, v___y_1526_, v___y_1511_, v___y_1522_, v___y_1515_, v___y_1521_, v___y_1514_, v___y_1518_);
v___y_1460_ = v___y_1518_;
v___y_1461_ = v___y_1520_;
v___y_1462_ = v___y_1511_;
v___y_1463_ = v___y_1514_;
v___y_1464_ = v___y_1521_;
v___y_1465_ = v___y_1522_;
v___y_1466_ = v___y_1523_;
v___y_1467_ = v___y_1524_;
v___y_1468_ = v___y_1526_;
v___y_1469_ = v___y_1515_;
v___y_1470_ = v___y_1528_;
v___y_1471_ = v___y_1530_;
v___y_1472_ = v___x_1539_;
goto v___jp_1459_;
}
v___jp_1540_:
{
lean_object* v___x_1560_; lean_object* v_a_1561_; lean_object* v___x_1562_; uint8_t v___x_1563_; 
v___x_1560_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg(v___y_1548_);
v_a_1561_ = lean_ctor_get(v___x_1560_, 0);
lean_inc(v_a_1561_);
lean_dec_ref(v___x_1560_);
v___x_1562_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1563_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v___y_1543_, v___x_1562_);
if (v___x_1563_ == 0)
{
lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1564_ = lean_io_mono_nanos_now();
lean_inc(v___y_1548_);
lean_inc_ref(v___y_1544_);
lean_inc(v___y_1550_);
lean_inc_ref(v___y_1545_);
lean_inc(v___y_1553_);
lean_inc_ref(v___y_1541_);
lean_inc(v___y_1556_);
lean_inc_ref(v___y_1557_);
lean_inc(v___y_1559_);
lean_inc(v___y_1552_);
lean_inc_ref(v___y_1554_);
v___x_1565_ = lean_apply_12(v___y_1551_, v___y_1554_, v___y_1552_, v___y_1559_, v___y_1557_, v___y_1556_, v___y_1541_, v___y_1553_, v___y_1545_, v___y_1550_, v___y_1544_, v___y_1548_, lean_box(0));
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1573_; 
v_a_1566_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1568_ = v___x_1565_;
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v___x_1565_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1571_; 
if (v_isShared_1569_ == 0)
{
lean_ctor_set_tag(v___x_1568_, 1);
v___x_1571_ = v___x_1568_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_a_1566_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
v___y_1478_ = v___x_1564_;
v___y_1479_ = v___y_1541_;
v___y_1480_ = v___y_1542_;
v___y_1481_ = v___y_1543_;
v___y_1482_ = v___y_1544_;
v___y_1483_ = v___y_1545_;
v___y_1484_ = v___y_1546_;
v___y_1485_ = v___y_1548_;
v___y_1486_ = v___y_1547_;
v___y_1487_ = v___y_1549_;
v___y_1488_ = v___y_1550_;
v___y_1489_ = v___y_1553_;
v___y_1490_ = v___y_1552_;
v___y_1491_ = v___y_1554_;
v___y_1492_ = v___y_1555_;
v___y_1493_ = v___y_1556_;
v___y_1494_ = v_a_1561_;
v___y_1495_ = v___y_1557_;
v___y_1496_ = v___y_1558_;
v___y_1497_ = v___y_1559_;
v_a_1498_ = v___x_1571_;
goto v___jp_1477_;
}
}
}
else
{
lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1581_; 
v_a_1574_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1576_ = v___x_1565_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___x_1565_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1579_; 
if (v_isShared_1577_ == 0)
{
lean_ctor_set_tag(v___x_1576_, 0);
v___x_1579_ = v___x_1576_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v_a_1574_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
v___y_1478_ = v___x_1564_;
v___y_1479_ = v___y_1541_;
v___y_1480_ = v___y_1542_;
v___y_1481_ = v___y_1543_;
v___y_1482_ = v___y_1544_;
v___y_1483_ = v___y_1545_;
v___y_1484_ = v___y_1546_;
v___y_1485_ = v___y_1548_;
v___y_1486_ = v___y_1547_;
v___y_1487_ = v___y_1549_;
v___y_1488_ = v___y_1550_;
v___y_1489_ = v___y_1553_;
v___y_1490_ = v___y_1552_;
v___y_1491_ = v___y_1554_;
v___y_1492_ = v___y_1555_;
v___y_1493_ = v___y_1556_;
v___y_1494_ = v_a_1561_;
v___y_1495_ = v___y_1557_;
v___y_1496_ = v___y_1558_;
v___y_1497_ = v___y_1559_;
v_a_1498_ = v___x_1579_;
goto v___jp_1477_;
}
}
}
}
else
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = lean_io_get_num_heartbeats();
lean_inc(v___y_1548_);
lean_inc_ref(v___y_1544_);
lean_inc(v___y_1550_);
lean_inc_ref(v___y_1545_);
lean_inc(v___y_1553_);
lean_inc_ref(v___y_1541_);
lean_inc(v___y_1556_);
lean_inc_ref(v___y_1557_);
lean_inc(v___y_1559_);
lean_inc(v___y_1552_);
lean_inc_ref(v___y_1554_);
v___x_1583_ = lean_apply_12(v___y_1551_, v___y_1554_, v___y_1552_, v___y_1559_, v___y_1557_, v___y_1556_, v___y_1541_, v___y_1553_, v___y_1545_, v___y_1550_, v___y_1544_, v___y_1548_, lean_box(0));
if (lean_obj_tag(v___x_1583_) == 0)
{
lean_object* v_a_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1591_; 
v_a_1584_ = lean_ctor_get(v___x_1583_, 0);
v_isSharedCheck_1591_ = !lean_is_exclusive(v___x_1583_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1586_ = v___x_1583_;
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_a_1584_);
lean_dec(v___x_1583_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1589_; 
if (v_isShared_1587_ == 0)
{
lean_ctor_set_tag(v___x_1586_, 1);
v___x_1589_ = v___x_1586_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v_a_1584_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
v___y_1511_ = v___y_1541_;
v___y_1512_ = v___y_1542_;
v___y_1513_ = v___y_1543_;
v___y_1514_ = v___y_1544_;
v___y_1515_ = v___y_1545_;
v___y_1516_ = v___x_1582_;
v___y_1517_ = v___y_1546_;
v___y_1518_ = v___y_1548_;
v___y_1519_ = v___y_1547_;
v___y_1520_ = v___y_1549_;
v___y_1521_ = v___y_1550_;
v___y_1522_ = v___y_1553_;
v___y_1523_ = v___y_1552_;
v___y_1524_ = v___y_1554_;
v___y_1525_ = v___y_1555_;
v___y_1526_ = v___y_1556_;
v___y_1527_ = v_a_1561_;
v___y_1528_ = v___y_1557_;
v___y_1529_ = v___y_1558_;
v___y_1530_ = v___y_1559_;
v_a_1531_ = v___x_1589_;
goto v___jp_1510_;
}
}
}
else
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
v_a_1592_ = lean_ctor_get(v___x_1583_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1583_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1594_ = v___x_1583_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1583_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1597_; 
if (v_isShared_1595_ == 0)
{
lean_ctor_set_tag(v___x_1594_, 0);
v___x_1597_ = v___x_1594_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v_a_1592_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
v___y_1511_ = v___y_1541_;
v___y_1512_ = v___y_1542_;
v___y_1513_ = v___y_1543_;
v___y_1514_ = v___y_1544_;
v___y_1515_ = v___y_1545_;
v___y_1516_ = v___x_1582_;
v___y_1517_ = v___y_1546_;
v___y_1518_ = v___y_1548_;
v___y_1519_ = v___y_1547_;
v___y_1520_ = v___y_1549_;
v___y_1521_ = v___y_1550_;
v___y_1522_ = v___y_1553_;
v___y_1523_ = v___y_1552_;
v___y_1524_ = v___y_1554_;
v___y_1525_ = v___y_1555_;
v___y_1526_ = v___y_1556_;
v___y_1527_ = v_a_1561_;
v___y_1528_ = v___y_1557_;
v___y_1529_ = v___y_1558_;
v___y_1530_ = v___y_1559_;
v_a_1531_ = v___x_1597_;
goto v___jp_1510_;
}
}
}
}
}
v___jp_1600_:
{
if (lean_obj_tag(v___y_1613_) == 0)
{
lean_object* v_a_1614_; uint8_t v___x_1615_; 
v_a_1614_ = lean_ctor_get(v___y_1613_, 0);
lean_inc(v_a_1614_);
lean_dec_ref_known(v___y_1613_, 1);
v___x_1615_ = lean_unbox(v_a_1614_);
lean_dec(v_a_1614_);
if (v___x_1615_ == 0)
{
uint8_t v_structures_1616_; 
v_structures_1616_ = lean_ctor_get_uint8(v___y_1603_, sizeof(void*)*3 + 5);
if (v_structures_1616_ == 0)
{
uint8_t v_fixedInt_1617_; uint8_t v_enums_1618_; 
v_fixedInt_1617_ = lean_ctor_get_uint8(v___y_1603_, sizeof(void*)*3 + 6);
v_enums_1618_ = lean_ctor_get_uint8(v___y_1603_, sizeof(void*)*3 + 7);
v___y_1428_ = v___y_1603_;
v_fixedInt_1429_ = v_fixedInt_1617_;
v_enums_1430_ = v_enums_1618_;
v___y_1431_ = v___y_1608_;
v___y_1432_ = v___y_1607_;
v___y_1433_ = v___y_1612_;
v___y_1434_ = v___y_1611_;
v___y_1435_ = v___y_1609_;
v___y_1436_ = v___y_1602_;
v___y_1437_ = v___y_1606_;
v___y_1438_ = v___y_1610_;
v___y_1439_ = v___y_1605_;
v___y_1440_ = v___y_1604_;
v___y_1441_ = v___y_1601_;
goto v___jp_1427_;
}
else
{
lean_object* v___x_1619_; lean_object* v_toCold_1620_; lean_object* v_options_1621_; uint8_t v_hasTrace_1622_; 
v___x_1619_ = l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass;
v_toCold_1620_ = lean_ctor_get(v___y_1604_, 0);
v_options_1621_ = lean_ctor_get(v_toCold_1620_, 2);
v_hasTrace_1622_ = lean_ctor_get_uint8(v_options_1621_, sizeof(void*)*1);
if (v_hasTrace_1622_ == 0)
{
lean_object* v_run_x27_1623_; lean_object* v___x_1624_; 
v_run_x27_1623_ = lean_ctor_get(v___x_1619_, 1);
lean_inc_ref(v_run_x27_1623_);
lean_inc(v___y_1601_);
lean_inc_ref(v___y_1604_);
lean_inc(v___y_1605_);
lean_inc_ref(v___y_1610_);
lean_inc(v___y_1606_);
lean_inc_ref(v___y_1602_);
lean_inc(v___y_1609_);
lean_inc_ref(v___y_1611_);
lean_inc(v___y_1612_);
lean_inc(v___y_1607_);
lean_inc_ref(v___y_1608_);
v___x_1624_ = lean_apply_12(v_run_x27_1623_, v___y_1608_, v___y_1607_, v___y_1612_, v___y_1611_, v___y_1609_, v___y_1602_, v___y_1606_, v___y_1610_, v___y_1605_, v___y_1604_, v___y_1601_, lean_box(0));
v___y_1460_ = v___y_1601_;
v___y_1461_ = v___y_1603_;
v___y_1462_ = v___y_1602_;
v___y_1463_ = v___y_1604_;
v___y_1464_ = v___y_1605_;
v___y_1465_ = v___y_1606_;
v___y_1466_ = v___y_1607_;
v___y_1467_ = v___y_1608_;
v___y_1468_ = v___y_1609_;
v___y_1469_ = v___y_1610_;
v___y_1470_ = v___y_1611_;
v___y_1471_ = v___y_1612_;
v___y_1472_ = v___x_1624_;
goto v___jp_1459_;
}
else
{
lean_object* v_name_1625_; lean_object* v_run_x27_1626_; lean_object* v_inheritedTraceOptions_1627_; lean_object* v___f_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; uint8_t v___x_1632_; 
v_name_1625_ = lean_ctor_get(v___x_1619_, 0);
v_run_x27_1626_ = lean_ctor_get(v___x_1619_, 1);
v_inheritedTraceOptions_1627_ = lean_ctor_get(v_toCold_1620_, 11);
lean_inc(v_name_1625_);
v___f_1628_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___boxed), 14, 1);
lean_closure_set(v___f_1628_, 0, v_name_1625_);
v___x_1629_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4));
v___x_1630_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__1));
v___x_1631_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7);
v___x_1632_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1627_, v_options_1621_, v___x_1631_);
if (v___x_1632_ == 0)
{
lean_object* v___x_1633_; uint8_t v___x_1634_; 
v___x_1633_ = l_Lean_trace_profiler;
v___x_1634_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v_options_1621_, v___x_1633_);
if (v___x_1634_ == 0)
{
lean_object* v___x_1635_; 
lean_dec_ref(v___f_1628_);
lean_inc_ref(v_run_x27_1626_);
lean_inc(v___y_1601_);
lean_inc_ref(v___y_1604_);
lean_inc(v___y_1605_);
lean_inc_ref(v___y_1610_);
lean_inc(v___y_1606_);
lean_inc_ref(v___y_1602_);
lean_inc(v___y_1609_);
lean_inc_ref(v___y_1611_);
lean_inc(v___y_1612_);
lean_inc(v___y_1607_);
lean_inc_ref(v___y_1608_);
v___x_1635_ = lean_apply_12(v_run_x27_1626_, v___y_1608_, v___y_1607_, v___y_1612_, v___y_1611_, v___y_1609_, v___y_1602_, v___y_1606_, v___y_1610_, v___y_1605_, v___y_1604_, v___y_1601_, lean_box(0));
v___y_1460_ = v___y_1601_;
v___y_1461_ = v___y_1603_;
v___y_1462_ = v___y_1602_;
v___y_1463_ = v___y_1604_;
v___y_1464_ = v___y_1605_;
v___y_1465_ = v___y_1606_;
v___y_1466_ = v___y_1607_;
v___y_1467_ = v___y_1608_;
v___y_1468_ = v___y_1609_;
v___y_1469_ = v___y_1610_;
v___y_1470_ = v___y_1611_;
v___y_1471_ = v___y_1612_;
v___y_1472_ = v___x_1635_;
goto v___jp_1459_;
}
else
{
lean_inc_ref(v_run_x27_1626_);
v___y_1541_ = v___y_1602_;
v___y_1542_ = v_hasTrace_1622_;
v___y_1543_ = v_options_1621_;
v___y_1544_ = v___y_1604_;
v___y_1545_ = v___y_1610_;
v___y_1546_ = v___f_1628_;
v___y_1547_ = v___x_1629_;
v___y_1548_ = v___y_1601_;
v___y_1549_ = v___y_1603_;
v___y_1550_ = v___y_1605_;
v___y_1551_ = v_run_x27_1626_;
v___y_1552_ = v___y_1607_;
v___y_1553_ = v___y_1606_;
v___y_1554_ = v___y_1608_;
v___y_1555_ = v___x_1632_;
v___y_1556_ = v___y_1609_;
v___y_1557_ = v___y_1611_;
v___y_1558_ = v___x_1630_;
v___y_1559_ = v___y_1612_;
goto v___jp_1540_;
}
}
else
{
lean_inc_ref(v_run_x27_1626_);
v___y_1541_ = v___y_1602_;
v___y_1542_ = v_hasTrace_1622_;
v___y_1543_ = v_options_1621_;
v___y_1544_ = v___y_1604_;
v___y_1545_ = v___y_1610_;
v___y_1546_ = v___f_1628_;
v___y_1547_ = v___x_1629_;
v___y_1548_ = v___y_1601_;
v___y_1549_ = v___y_1603_;
v___y_1550_ = v___y_1605_;
v___y_1551_ = v_run_x27_1626_;
v___y_1552_ = v___y_1607_;
v___y_1553_ = v___y_1606_;
v___y_1554_ = v___y_1608_;
v___y_1555_ = v___x_1632_;
v___y_1556_ = v___y_1609_;
v___y_1557_ = v___y_1611_;
v___y_1558_ = v___x_1630_;
v___y_1559_ = v___y_1612_;
goto v___jp_1540_;
}
}
}
}
else
{
goto v___jp_937_;
}
}
else
{
return v___y_1613_;
}
}
v___jp_1636_:
{
lean_object* v___x_1658_; double v___x_1659_; double v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1658_ = lean_io_get_num_heartbeats();
v___x_1659_ = lean_float_of_nat(v___y_1647_);
v___x_1660_ = lean_float_of_nat(v___x_1658_);
v___x_1661_ = lean_box_float(v___x_1659_);
v___x_1662_ = lean_box_float(v___x_1660_);
v___x_1663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1661_);
lean_ctor_set(v___x_1663_, 1, v___x_1662_);
v___x_1664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1664_, 0, v_a_1657_);
lean_ctor_set(v___x_1664_, 1, v___x_1663_);
lean_inc_ref(v___y_1637_);
lean_inc(v___y_1653_);
v___x_1665_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(v___y_1653_, v___y_1642_, v___y_1637_, v___y_1641_, v___y_1648_, v___y_1643_, v___y_1639_, v___x_1664_, v___y_1652_, v___y_1651_, v___y_1656_, v___y_1655_, v___y_1654_, v___y_1638_, v___y_1650_, v___y_1644_, v___y_1649_, v___y_1640_, v___y_1645_);
v___y_1601_ = v___y_1645_;
v___y_1602_ = v___y_1638_;
v___y_1603_ = v___y_1646_;
v___y_1604_ = v___y_1640_;
v___y_1605_ = v___y_1649_;
v___y_1606_ = v___y_1650_;
v___y_1607_ = v___y_1651_;
v___y_1608_ = v___y_1652_;
v___y_1609_ = v___y_1654_;
v___y_1610_ = v___y_1644_;
v___y_1611_ = v___y_1655_;
v___y_1612_ = v___y_1656_;
v___y_1613_ = v___x_1665_;
goto v___jp_1600_;
}
v___jp_1666_:
{
lean_object* v___x_1688_; double v___x_1689_; double v___x_1690_; double v___x_1691_; double v___x_1692_; double v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1688_ = lean_io_mono_nanos_now();
v___x_1689_ = lean_float_of_nat(v___y_1681_);
v___x_1690_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0);
v___x_1691_ = lean_float_div(v___x_1689_, v___x_1690_);
v___x_1692_ = lean_float_of_nat(v___x_1688_);
v___x_1693_ = lean_float_div(v___x_1692_, v___x_1690_);
v___x_1694_ = lean_box_float(v___x_1691_);
v___x_1695_ = lean_box_float(v___x_1693_);
v___x_1696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1694_);
lean_ctor_set(v___x_1696_, 1, v___x_1695_);
v___x_1697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1697_, 0, v_a_1687_);
lean_ctor_set(v___x_1697_, 1, v___x_1696_);
lean_inc_ref(v___y_1667_);
lean_inc(v___y_1683_);
v___x_1698_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(v___y_1683_, v___y_1672_, v___y_1667_, v___y_1671_, v___y_1677_, v___y_1673_, v___y_1669_, v___x_1697_, v___y_1682_, v___y_1680_, v___y_1686_, v___y_1685_, v___y_1684_, v___y_1668_, v___y_1679_, v___y_1674_, v___y_1678_, v___y_1670_, v___y_1675_);
v___y_1601_ = v___y_1675_;
v___y_1602_ = v___y_1668_;
v___y_1603_ = v___y_1676_;
v___y_1604_ = v___y_1670_;
v___y_1605_ = v___y_1678_;
v___y_1606_ = v___y_1679_;
v___y_1607_ = v___y_1680_;
v___y_1608_ = v___y_1682_;
v___y_1609_ = v___y_1684_;
v___y_1610_ = v___y_1674_;
v___y_1611_ = v___y_1685_;
v___y_1612_ = v___y_1686_;
v___y_1613_ = v___x_1698_;
goto v___jp_1600_;
}
v___jp_1699_:
{
lean_object* v___x_1719_; lean_object* v_a_1720_; lean_object* v___x_1721_; uint8_t v___x_1722_; 
v___x_1719_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg(v___y_1707_);
v_a_1720_ = lean_ctor_get(v___x_1719_, 0);
lean_inc(v_a_1720_);
lean_dec_ref(v___x_1719_);
v___x_1721_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1722_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v___y_1704_, v___x_1721_);
if (v___x_1722_ == 0)
{
lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1723_ = lean_io_mono_nanos_now();
lean_inc(v___y_1707_);
lean_inc_ref(v___y_1703_);
lean_inc(v___y_1710_);
lean_inc_ref(v___y_1706_);
lean_inc(v___y_1712_);
lean_inc_ref(v___y_1701_);
lean_inc(v___y_1716_);
lean_inc_ref(v___y_1717_);
lean_inc(v___y_1718_);
lean_inc(v___y_1711_);
lean_inc_ref(v___y_1713_);
v___x_1724_ = lean_apply_12(v___y_1714_, v___y_1713_, v___y_1711_, v___y_1718_, v___y_1717_, v___y_1716_, v___y_1701_, v___y_1712_, v___y_1706_, v___y_1710_, v___y_1703_, v___y_1707_, lean_box(0));
if (lean_obj_tag(v___x_1724_) == 0)
{
lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1732_; 
v_a_1725_ = lean_ctor_get(v___x_1724_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1727_ = v___x_1724_;
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___x_1724_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
lean_ctor_set_tag(v___x_1727_, 1);
v___x_1730_ = v___x_1727_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_a_1725_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
v___y_1667_ = v___y_1700_;
v___y_1668_ = v___y_1701_;
v___y_1669_ = v___y_1702_;
v___y_1670_ = v___y_1703_;
v___y_1671_ = v___y_1704_;
v___y_1672_ = v___y_1705_;
v___y_1673_ = v_a_1720_;
v___y_1674_ = v___y_1706_;
v___y_1675_ = v___y_1707_;
v___y_1676_ = v___y_1708_;
v___y_1677_ = v___y_1709_;
v___y_1678_ = v___y_1710_;
v___y_1679_ = v___y_1712_;
v___y_1680_ = v___y_1711_;
v___y_1681_ = v___x_1723_;
v___y_1682_ = v___y_1713_;
v___y_1683_ = v___y_1715_;
v___y_1684_ = v___y_1716_;
v___y_1685_ = v___y_1717_;
v___y_1686_ = v___y_1718_;
v_a_1687_ = v___x_1730_;
goto v___jp_1666_;
}
}
}
else
{
lean_object* v_a_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1740_; 
v_a_1733_ = lean_ctor_get(v___x_1724_, 0);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1735_ = v___x_1724_;
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_a_1733_);
lean_dec(v___x_1724_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1738_; 
if (v_isShared_1736_ == 0)
{
lean_ctor_set_tag(v___x_1735_, 0);
v___x_1738_ = v___x_1735_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_a_1733_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
v___y_1667_ = v___y_1700_;
v___y_1668_ = v___y_1701_;
v___y_1669_ = v___y_1702_;
v___y_1670_ = v___y_1703_;
v___y_1671_ = v___y_1704_;
v___y_1672_ = v___y_1705_;
v___y_1673_ = v_a_1720_;
v___y_1674_ = v___y_1706_;
v___y_1675_ = v___y_1707_;
v___y_1676_ = v___y_1708_;
v___y_1677_ = v___y_1709_;
v___y_1678_ = v___y_1710_;
v___y_1679_ = v___y_1712_;
v___y_1680_ = v___y_1711_;
v___y_1681_ = v___x_1723_;
v___y_1682_ = v___y_1713_;
v___y_1683_ = v___y_1715_;
v___y_1684_ = v___y_1716_;
v___y_1685_ = v___y_1717_;
v___y_1686_ = v___y_1718_;
v_a_1687_ = v___x_1738_;
goto v___jp_1666_;
}
}
}
}
else
{
lean_object* v___x_1741_; lean_object* v___x_1742_; 
v___x_1741_ = lean_io_get_num_heartbeats();
lean_inc(v___y_1707_);
lean_inc_ref(v___y_1703_);
lean_inc(v___y_1710_);
lean_inc_ref(v___y_1706_);
lean_inc(v___y_1712_);
lean_inc_ref(v___y_1701_);
lean_inc(v___y_1716_);
lean_inc_ref(v___y_1717_);
lean_inc(v___y_1718_);
lean_inc(v___y_1711_);
lean_inc_ref(v___y_1713_);
v___x_1742_ = lean_apply_12(v___y_1714_, v___y_1713_, v___y_1711_, v___y_1718_, v___y_1717_, v___y_1716_, v___y_1701_, v___y_1712_, v___y_1706_, v___y_1710_, v___y_1703_, v___y_1707_, lean_box(0));
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1750_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1745_ = v___x_1742_;
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1742_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1748_; 
if (v_isShared_1746_ == 0)
{
lean_ctor_set_tag(v___x_1745_, 1);
v___x_1748_ = v___x_1745_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1743_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
v___y_1637_ = v___y_1700_;
v___y_1638_ = v___y_1701_;
v___y_1639_ = v___y_1702_;
v___y_1640_ = v___y_1703_;
v___y_1641_ = v___y_1704_;
v___y_1642_ = v___y_1705_;
v___y_1643_ = v_a_1720_;
v___y_1644_ = v___y_1706_;
v___y_1645_ = v___y_1707_;
v___y_1646_ = v___y_1708_;
v___y_1647_ = v___x_1741_;
v___y_1648_ = v___y_1709_;
v___y_1649_ = v___y_1710_;
v___y_1650_ = v___y_1712_;
v___y_1651_ = v___y_1711_;
v___y_1652_ = v___y_1713_;
v___y_1653_ = v___y_1715_;
v___y_1654_ = v___y_1716_;
v___y_1655_ = v___y_1717_;
v___y_1656_ = v___y_1718_;
v_a_1657_ = v___x_1748_;
goto v___jp_1636_;
}
}
}
else
{
lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1758_; 
v_a_1751_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1758_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1758_ == 0)
{
v___x_1753_ = v___x_1742_;
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___x_1742_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1756_; 
if (v_isShared_1754_ == 0)
{
lean_ctor_set_tag(v___x_1753_, 0);
v___x_1756_ = v___x_1753_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v_a_1751_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
v___y_1637_ = v___y_1700_;
v___y_1638_ = v___y_1701_;
v___y_1639_ = v___y_1702_;
v___y_1640_ = v___y_1703_;
v___y_1641_ = v___y_1704_;
v___y_1642_ = v___y_1705_;
v___y_1643_ = v_a_1720_;
v___y_1644_ = v___y_1706_;
v___y_1645_ = v___y_1707_;
v___y_1646_ = v___y_1708_;
v___y_1647_ = v___x_1741_;
v___y_1648_ = v___y_1709_;
v___y_1649_ = v___y_1710_;
v___y_1650_ = v___y_1712_;
v___y_1651_ = v___y_1711_;
v___y_1652_ = v___y_1713_;
v___y_1653_ = v___y_1715_;
v___y_1654_ = v___y_1716_;
v___y_1655_ = v___y_1717_;
v___y_1656_ = v___y_1718_;
v_a_1657_ = v___x_1756_;
goto v___jp_1636_;
}
}
}
}
}
v___jp_1759_:
{
lean_object* v___x_1772_; lean_object* v_toCold_1773_; lean_object* v_options_1774_; uint8_t v_hasTrace_1775_; 
v___x_1772_ = l_Lean_Meta_Tactic_BVDecide_Normalize_reductionPass;
v_toCold_1773_ = lean_ctor_get(v___y_1770_, 0);
v_options_1774_ = lean_ctor_get(v_toCold_1773_, 2);
v_hasTrace_1775_ = lean_ctor_get_uint8(v_options_1774_, sizeof(void*)*1);
if (v_hasTrace_1775_ == 0)
{
lean_object* v_run_x27_1776_; lean_object* v___x_1777_; 
v_run_x27_1776_ = lean_ctor_get(v___x_1772_, 1);
lean_inc_ref(v_run_x27_1776_);
lean_inc(v___y_1771_);
lean_inc_ref(v___y_1770_);
lean_inc(v___y_1769_);
lean_inc_ref(v___y_1768_);
lean_inc(v___y_1767_);
lean_inc_ref(v___y_1766_);
lean_inc(v___y_1765_);
lean_inc_ref(v___y_1764_);
lean_inc(v___y_1763_);
lean_inc(v___y_1762_);
lean_inc_ref(v___y_1761_);
v___x_1777_ = lean_apply_12(v_run_x27_1776_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_, lean_box(0));
v___y_1601_ = v___y_1771_;
v___y_1602_ = v___y_1766_;
v___y_1603_ = v___y_1760_;
v___y_1604_ = v___y_1770_;
v___y_1605_ = v___y_1769_;
v___y_1606_ = v___y_1767_;
v___y_1607_ = v___y_1762_;
v___y_1608_ = v___y_1761_;
v___y_1609_ = v___y_1765_;
v___y_1610_ = v___y_1768_;
v___y_1611_ = v___y_1764_;
v___y_1612_ = v___y_1763_;
v___y_1613_ = v___x_1777_;
goto v___jp_1600_;
}
else
{
lean_object* v_name_1778_; lean_object* v_run_x27_1779_; lean_object* v_inheritedTraceOptions_1780_; lean_object* v___f_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; uint8_t v___x_1785_; 
v_name_1778_ = lean_ctor_get(v___x_1772_, 0);
v_run_x27_1779_ = lean_ctor_get(v___x_1772_, 1);
v_inheritedTraceOptions_1780_ = lean_ctor_get(v_toCold_1773_, 11);
lean_inc(v_name_1778_);
v___f_1781_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___boxed), 14, 1);
lean_closure_set(v___f_1781_, 0, v_name_1778_);
v___x_1782_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4));
v___x_1783_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__1));
v___x_1784_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7);
v___x_1785_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1780_, v_options_1774_, v___x_1784_);
if (v___x_1785_ == 0)
{
lean_object* v___x_1786_; uint8_t v___x_1787_; 
v___x_1786_ = l_Lean_trace_profiler;
v___x_1787_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v_options_1774_, v___x_1786_);
if (v___x_1787_ == 0)
{
lean_object* v___x_1788_; 
lean_dec_ref(v___f_1781_);
lean_inc_ref(v_run_x27_1779_);
lean_inc(v___y_1771_);
lean_inc_ref(v___y_1770_);
lean_inc(v___y_1769_);
lean_inc_ref(v___y_1768_);
lean_inc(v___y_1767_);
lean_inc_ref(v___y_1766_);
lean_inc(v___y_1765_);
lean_inc_ref(v___y_1764_);
lean_inc(v___y_1763_);
lean_inc(v___y_1762_);
lean_inc_ref(v___y_1761_);
v___x_1788_ = lean_apply_12(v_run_x27_1779_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_, lean_box(0));
v___y_1601_ = v___y_1771_;
v___y_1602_ = v___y_1766_;
v___y_1603_ = v___y_1760_;
v___y_1604_ = v___y_1770_;
v___y_1605_ = v___y_1769_;
v___y_1606_ = v___y_1767_;
v___y_1607_ = v___y_1762_;
v___y_1608_ = v___y_1761_;
v___y_1609_ = v___y_1765_;
v___y_1610_ = v___y_1768_;
v___y_1611_ = v___y_1764_;
v___y_1612_ = v___y_1763_;
v___y_1613_ = v___x_1788_;
goto v___jp_1600_;
}
else
{
lean_inc_ref(v_run_x27_1779_);
v___y_1700_ = v___x_1783_;
v___y_1701_ = v___y_1766_;
v___y_1702_ = v___f_1781_;
v___y_1703_ = v___y_1770_;
v___y_1704_ = v_options_1774_;
v___y_1705_ = v_hasTrace_1775_;
v___y_1706_ = v___y_1768_;
v___y_1707_ = v___y_1771_;
v___y_1708_ = v___y_1760_;
v___y_1709_ = v___x_1785_;
v___y_1710_ = v___y_1769_;
v___y_1711_ = v___y_1762_;
v___y_1712_ = v___y_1767_;
v___y_1713_ = v___y_1761_;
v___y_1714_ = v_run_x27_1779_;
v___y_1715_ = v___x_1782_;
v___y_1716_ = v___y_1765_;
v___y_1717_ = v___y_1764_;
v___y_1718_ = v___y_1763_;
goto v___jp_1699_;
}
}
else
{
lean_inc_ref(v_run_x27_1779_);
v___y_1700_ = v___x_1783_;
v___y_1701_ = v___y_1766_;
v___y_1702_ = v___f_1781_;
v___y_1703_ = v___y_1770_;
v___y_1704_ = v_options_1774_;
v___y_1705_ = v_hasTrace_1775_;
v___y_1706_ = v___y_1768_;
v___y_1707_ = v___y_1771_;
v___y_1708_ = v___y_1760_;
v___y_1709_ = v___x_1785_;
v___y_1710_ = v___y_1769_;
v___y_1711_ = v___y_1762_;
v___y_1712_ = v___y_1767_;
v___y_1713_ = v___y_1761_;
v___y_1714_ = v_run_x27_1779_;
v___y_1715_ = v___x_1782_;
v___y_1716_ = v___y_1765_;
v___y_1717_ = v___y_1764_;
v___y_1718_ = v___y_1763_;
goto v___jp_1699_;
}
}
}
v___jp_1789_:
{
if (lean_obj_tag(v___y_1802_) == 0)
{
lean_object* v_a_1803_; uint8_t v___x_1804_; 
v_a_1803_ = lean_ctor_get(v___y_1802_, 0);
v___x_1804_ = lean_unbox(v_a_1803_);
if (v___x_1804_ == 0)
{
lean_dec_ref_known(v___y_1802_, 1);
v___y_1760_ = v___y_1792_;
v___y_1761_ = v___y_1791_;
v___y_1762_ = v___y_1790_;
v___y_1763_ = v___y_1794_;
v___y_1764_ = v___y_1798_;
v___y_1765_ = v___y_1801_;
v___y_1766_ = v___y_1797_;
v___y_1767_ = v___y_1793_;
v___y_1768_ = v___y_1795_;
v___y_1769_ = v___y_1799_;
v___y_1770_ = v___y_1800_;
v___y_1771_ = v___y_1796_;
goto v___jp_1759_;
}
else
{
return v___y_1802_;
}
}
else
{
return v___y_1802_;
}
}
v___jp_1805_:
{
lean_object* v___x_1827_; double v___x_1828_; double v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1827_ = lean_io_get_num_heartbeats();
v___x_1828_ = lean_float_of_nat(v___y_1817_);
v___x_1829_ = lean_float_of_nat(v___x_1827_);
v___x_1830_ = lean_box_float(v___x_1828_);
v___x_1831_ = lean_box_float(v___x_1829_);
v___x_1832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1830_);
lean_ctor_set(v___x_1832_, 1, v___x_1831_);
v___x_1833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1833_, 0, v_a_1826_);
lean_ctor_set(v___x_1833_, 1, v___x_1832_);
lean_inc_ref(v___y_1824_);
lean_inc(v___y_1825_);
v___x_1834_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(v___y_1825_, v___y_1810_, v___y_1824_, v___y_1822_, v___y_1814_, v___y_1818_, v___y_1809_, v___x_1833_, v___y_1819_, v___y_1806_, v___y_1807_, v___y_1812_, v___y_1816_, v___y_1811_, v___y_1821_, v___y_1808_, v___y_1813_, v___y_1815_, v___y_1823_);
v___y_1790_ = v___y_1806_;
v___y_1791_ = v___y_1819_;
v___y_1792_ = v___y_1820_;
v___y_1793_ = v___y_1821_;
v___y_1794_ = v___y_1807_;
v___y_1795_ = v___y_1808_;
v___y_1796_ = v___y_1823_;
v___y_1797_ = v___y_1811_;
v___y_1798_ = v___y_1812_;
v___y_1799_ = v___y_1813_;
v___y_1800_ = v___y_1815_;
v___y_1801_ = v___y_1816_;
v___y_1802_ = v___x_1834_;
goto v___jp_1789_;
}
v___jp_1835_:
{
lean_object* v___x_1857_; double v___x_1858_; double v___x_1859_; double v___x_1860_; double v___x_1861_; double v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1857_ = lean_io_mono_nanos_now();
v___x_1858_ = lean_float_of_nat(v___y_1853_);
v___x_1859_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0);
v___x_1860_ = lean_float_div(v___x_1858_, v___x_1859_);
v___x_1861_ = lean_float_of_nat(v___x_1857_);
v___x_1862_ = lean_float_div(v___x_1861_, v___x_1859_);
v___x_1863_ = lean_box_float(v___x_1860_);
v___x_1864_ = lean_box_float(v___x_1862_);
v___x_1865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1863_);
lean_ctor_set(v___x_1865_, 1, v___x_1864_);
v___x_1866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1866_, 0, v_a_1856_);
lean_ctor_set(v___x_1866_, 1, v___x_1865_);
lean_inc_ref(v___y_1854_);
lean_inc(v___y_1855_);
v___x_1867_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(v___y_1855_, v___y_1840_, v___y_1854_, v___y_1851_, v___y_1844_, v___y_1847_, v___y_1839_, v___x_1866_, v___y_1848_, v___y_1836_, v___y_1837_, v___y_1842_, v___y_1846_, v___y_1841_, v___y_1850_, v___y_1838_, v___y_1843_, v___y_1845_, v___y_1852_);
v___y_1790_ = v___y_1836_;
v___y_1791_ = v___y_1848_;
v___y_1792_ = v___y_1849_;
v___y_1793_ = v___y_1850_;
v___y_1794_ = v___y_1837_;
v___y_1795_ = v___y_1838_;
v___y_1796_ = v___y_1852_;
v___y_1797_ = v___y_1841_;
v___y_1798_ = v___y_1842_;
v___y_1799_ = v___y_1843_;
v___y_1800_ = v___y_1845_;
v___y_1801_ = v___y_1846_;
v___y_1802_ = v___x_1867_;
goto v___jp_1789_;
}
v___jp_1868_:
{
lean_object* v___x_1888_; lean_object* v_a_1889_; lean_object* v___x_1890_; uint8_t v___x_1891_; 
v___x_1888_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg(v___y_1885_);
v_a_1889_ = lean_ctor_get(v___x_1888_, 0);
lean_inc(v_a_1889_);
lean_dec_ref(v___x_1888_);
v___x_1890_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1891_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v___y_1884_, v___x_1890_);
if (v___x_1891_ == 0)
{
lean_object* v___x_1892_; lean_object* v___x_1893_; 
v___x_1892_ = lean_io_mono_nanos_now();
lean_inc(v___y_1885_);
lean_inc_ref(v___y_1880_);
lean_inc(v___y_1876_);
lean_inc_ref(v___y_1871_);
lean_inc(v___y_1883_);
lean_inc_ref(v___y_1874_);
lean_inc(v___y_1879_);
lean_inc_ref(v___y_1875_);
lean_inc(v___y_1870_);
lean_inc(v___y_1869_);
lean_inc_ref(v___y_1881_);
v___x_1893_ = lean_apply_12(v___y_1878_, v___y_1881_, v___y_1869_, v___y_1870_, v___y_1875_, v___y_1879_, v___y_1874_, v___y_1883_, v___y_1871_, v___y_1876_, v___y_1880_, v___y_1885_, lean_box(0));
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
v___y_1836_ = v___y_1869_;
v___y_1837_ = v___y_1870_;
v___y_1838_ = v___y_1871_;
v___y_1839_ = v___y_1872_;
v___y_1840_ = v___y_1873_;
v___y_1841_ = v___y_1874_;
v___y_1842_ = v___y_1875_;
v___y_1843_ = v___y_1876_;
v___y_1844_ = v___y_1877_;
v___y_1845_ = v___y_1880_;
v___y_1846_ = v___y_1879_;
v___y_1847_ = v_a_1889_;
v___y_1848_ = v___y_1881_;
v___y_1849_ = v___y_1882_;
v___y_1850_ = v___y_1883_;
v___y_1851_ = v___y_1884_;
v___y_1852_ = v___y_1885_;
v___y_1853_ = v___x_1892_;
v___y_1854_ = v___y_1886_;
v___y_1855_ = v___y_1887_;
v_a_1856_ = v___x_1899_;
goto v___jp_1835_;
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
v___y_1836_ = v___y_1869_;
v___y_1837_ = v___y_1870_;
v___y_1838_ = v___y_1871_;
v___y_1839_ = v___y_1872_;
v___y_1840_ = v___y_1873_;
v___y_1841_ = v___y_1874_;
v___y_1842_ = v___y_1875_;
v___y_1843_ = v___y_1876_;
v___y_1844_ = v___y_1877_;
v___y_1845_ = v___y_1880_;
v___y_1846_ = v___y_1879_;
v___y_1847_ = v_a_1889_;
v___y_1848_ = v___y_1881_;
v___y_1849_ = v___y_1882_;
v___y_1850_ = v___y_1883_;
v___y_1851_ = v___y_1884_;
v___y_1852_ = v___y_1885_;
v___y_1853_ = v___x_1892_;
v___y_1854_ = v___y_1886_;
v___y_1855_ = v___y_1887_;
v_a_1856_ = v___x_1907_;
goto v___jp_1835_;
}
}
}
}
else
{
lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1910_ = lean_io_get_num_heartbeats();
lean_inc(v___y_1885_);
lean_inc_ref(v___y_1880_);
lean_inc(v___y_1876_);
lean_inc_ref(v___y_1871_);
lean_inc(v___y_1883_);
lean_inc_ref(v___y_1874_);
lean_inc(v___y_1879_);
lean_inc_ref(v___y_1875_);
lean_inc(v___y_1870_);
lean_inc(v___y_1869_);
lean_inc_ref(v___y_1881_);
v___x_1911_ = lean_apply_12(v___y_1878_, v___y_1881_, v___y_1869_, v___y_1870_, v___y_1875_, v___y_1879_, v___y_1874_, v___y_1883_, v___y_1871_, v___y_1876_, v___y_1880_, v___y_1885_, lean_box(0));
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1919_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1914_ = v___x_1911_;
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_a_1912_);
lean_dec(v___x_1911_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1917_; 
if (v_isShared_1915_ == 0)
{
lean_ctor_set_tag(v___x_1914_, 1);
v___x_1917_ = v___x_1914_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1912_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
v___y_1806_ = v___y_1869_;
v___y_1807_ = v___y_1870_;
v___y_1808_ = v___y_1871_;
v___y_1809_ = v___y_1872_;
v___y_1810_ = v___y_1873_;
v___y_1811_ = v___y_1874_;
v___y_1812_ = v___y_1875_;
v___y_1813_ = v___y_1876_;
v___y_1814_ = v___y_1877_;
v___y_1815_ = v___y_1880_;
v___y_1816_ = v___y_1879_;
v___y_1817_ = v___x_1910_;
v___y_1818_ = v_a_1889_;
v___y_1819_ = v___y_1881_;
v___y_1820_ = v___y_1882_;
v___y_1821_ = v___y_1883_;
v___y_1822_ = v___y_1884_;
v___y_1823_ = v___y_1885_;
v___y_1824_ = v___y_1886_;
v___y_1825_ = v___y_1887_;
v_a_1826_ = v___x_1917_;
goto v___jp_1805_;
}
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
v_a_1920_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1911_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1911_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
lean_ctor_set_tag(v___x_1922_, 0);
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1920_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
v___y_1806_ = v___y_1869_;
v___y_1807_ = v___y_1870_;
v___y_1808_ = v___y_1871_;
v___y_1809_ = v___y_1872_;
v___y_1810_ = v___y_1873_;
v___y_1811_ = v___y_1874_;
v___y_1812_ = v___y_1875_;
v___y_1813_ = v___y_1876_;
v___y_1814_ = v___y_1877_;
v___y_1815_ = v___y_1880_;
v___y_1816_ = v___y_1879_;
v___y_1817_ = v___x_1910_;
v___y_1818_ = v_a_1889_;
v___y_1819_ = v___y_1881_;
v___y_1820_ = v___y_1882_;
v___y_1821_ = v___y_1883_;
v___y_1822_ = v___y_1884_;
v___y_1823_ = v___y_1885_;
v___y_1824_ = v___y_1886_;
v___y_1825_ = v___y_1887_;
v_a_1826_ = v___x_1925_;
goto v___jp_1805_;
}
}
}
}
}
v___jp_1928_:
{
lean_object* v___x_1941_; lean_object* v_toCold_1942_; lean_object* v_options_1943_; uint8_t v_hasTrace_1944_; 
v___x_1941_ = l_Lean_Meta_Tactic_BVDecide_Normalize_typeAnalysisPass;
v_toCold_1942_ = lean_ctor_get(v___y_1935_, 0);
v_options_1943_ = lean_ctor_get(v_toCold_1942_, 2);
v_hasTrace_1944_ = lean_ctor_get_uint8(v_options_1943_, sizeof(void*)*1);
if (v_hasTrace_1944_ == 0)
{
lean_object* v_run_x27_1945_; lean_object* v___x_1946_; 
v_run_x27_1945_ = lean_ctor_get(v___x_1941_, 1);
lean_inc_ref(v_run_x27_1945_);
lean_inc(v___y_1940_);
lean_inc_ref(v___y_1935_);
lean_inc(v___y_1934_);
lean_inc_ref(v___y_1931_);
lean_inc(v___y_1938_);
lean_inc_ref(v___y_1932_);
lean_inc(v___y_1936_);
lean_inc_ref(v___y_1933_);
lean_inc(v___y_1930_);
lean_inc(v___y_1929_);
lean_inc_ref(v___y_1937_);
v___x_1946_ = lean_apply_12(v_run_x27_1945_, v___y_1937_, v___y_1929_, v___y_1930_, v___y_1933_, v___y_1936_, v___y_1932_, v___y_1938_, v___y_1931_, v___y_1934_, v___y_1935_, v___y_1940_, lean_box(0));
v___y_1790_ = v___y_1929_;
v___y_1791_ = v___y_1937_;
v___y_1792_ = v___y_1939_;
v___y_1793_ = v___y_1938_;
v___y_1794_ = v___y_1930_;
v___y_1795_ = v___y_1931_;
v___y_1796_ = v___y_1940_;
v___y_1797_ = v___y_1932_;
v___y_1798_ = v___y_1933_;
v___y_1799_ = v___y_1934_;
v___y_1800_ = v___y_1935_;
v___y_1801_ = v___y_1936_;
v___y_1802_ = v___x_1946_;
goto v___jp_1789_;
}
else
{
lean_object* v_name_1947_; lean_object* v_run_x27_1948_; lean_object* v_inheritedTraceOptions_1949_; lean_object* v___f_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; uint8_t v___x_1954_; 
v_name_1947_ = lean_ctor_get(v___x_1941_, 0);
v_run_x27_1948_ = lean_ctor_get(v___x_1941_, 1);
v_inheritedTraceOptions_1949_ = lean_ctor_get(v_toCold_1942_, 11);
lean_inc(v_name_1947_);
v___f_1950_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___lam__0___boxed), 14, 1);
lean_closure_set(v___f_1950_, 0, v_name_1947_);
v___x_1951_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4));
v___x_1952_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__1));
v___x_1953_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7);
v___x_1954_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1949_, v_options_1943_, v___x_1953_);
if (v___x_1954_ == 0)
{
lean_object* v___x_1955_; uint8_t v___x_1956_; 
v___x_1955_ = l_Lean_trace_profiler;
v___x_1956_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v_options_1943_, v___x_1955_);
if (v___x_1956_ == 0)
{
lean_object* v___x_1957_; 
lean_dec_ref(v___f_1950_);
lean_inc_ref(v_run_x27_1948_);
lean_inc(v___y_1940_);
lean_inc_ref(v___y_1935_);
lean_inc(v___y_1934_);
lean_inc_ref(v___y_1931_);
lean_inc(v___y_1938_);
lean_inc_ref(v___y_1932_);
lean_inc(v___y_1936_);
lean_inc_ref(v___y_1933_);
lean_inc(v___y_1930_);
lean_inc(v___y_1929_);
lean_inc_ref(v___y_1937_);
v___x_1957_ = lean_apply_12(v_run_x27_1948_, v___y_1937_, v___y_1929_, v___y_1930_, v___y_1933_, v___y_1936_, v___y_1932_, v___y_1938_, v___y_1931_, v___y_1934_, v___y_1935_, v___y_1940_, lean_box(0));
v___y_1790_ = v___y_1929_;
v___y_1791_ = v___y_1937_;
v___y_1792_ = v___y_1939_;
v___y_1793_ = v___y_1938_;
v___y_1794_ = v___y_1930_;
v___y_1795_ = v___y_1931_;
v___y_1796_ = v___y_1940_;
v___y_1797_ = v___y_1932_;
v___y_1798_ = v___y_1933_;
v___y_1799_ = v___y_1934_;
v___y_1800_ = v___y_1935_;
v___y_1801_ = v___y_1936_;
v___y_1802_ = v___x_1957_;
goto v___jp_1789_;
}
else
{
lean_inc_ref(v_run_x27_1948_);
v___y_1869_ = v___y_1929_;
v___y_1870_ = v___y_1930_;
v___y_1871_ = v___y_1931_;
v___y_1872_ = v___f_1950_;
v___y_1873_ = v_hasTrace_1944_;
v___y_1874_ = v___y_1932_;
v___y_1875_ = v___y_1933_;
v___y_1876_ = v___y_1934_;
v___y_1877_ = v___x_1954_;
v___y_1878_ = v_run_x27_1948_;
v___y_1879_ = v___y_1936_;
v___y_1880_ = v___y_1935_;
v___y_1881_ = v___y_1937_;
v___y_1882_ = v___y_1939_;
v___y_1883_ = v___y_1938_;
v___y_1884_ = v_options_1943_;
v___y_1885_ = v___y_1940_;
v___y_1886_ = v___x_1952_;
v___y_1887_ = v___x_1951_;
goto v___jp_1868_;
}
}
else
{
lean_inc_ref(v_run_x27_1948_);
v___y_1869_ = v___y_1929_;
v___y_1870_ = v___y_1930_;
v___y_1871_ = v___y_1931_;
v___y_1872_ = v___f_1950_;
v___y_1873_ = v_hasTrace_1944_;
v___y_1874_ = v___y_1932_;
v___y_1875_ = v___y_1933_;
v___y_1876_ = v___y_1934_;
v___y_1877_ = v___x_1954_;
v___y_1878_ = v_run_x27_1948_;
v___y_1879_ = v___y_1936_;
v___y_1880_ = v___y_1935_;
v___y_1881_ = v___y_1937_;
v___y_1882_ = v___y_1939_;
v___y_1883_ = v___y_1938_;
v___y_1884_ = v_options_1943_;
v___y_1885_ = v___y_1940_;
v___y_1886_ = v___x_1952_;
v___y_1887_ = v___x_1951_;
goto v___jp_1868_;
}
}
}
v___jp_1958_:
{
lean_object* v_config_1970_; uint8_t v_structures_1971_; 
v_config_1970_ = lean_ctor_get(v___y_1959_, 0);
v_structures_1971_ = lean_ctor_get_uint8(v_config_1970_, sizeof(void*)*3 + 5);
if (v_structures_1971_ == 0)
{
uint8_t v_enums_1972_; 
v_enums_1972_ = lean_ctor_get_uint8(v_config_1970_, sizeof(void*)*3 + 7);
if (v_enums_1972_ == 0)
{
v___y_1760_ = v_config_1970_;
v___y_1761_ = v___y_1959_;
v___y_1762_ = v___y_1960_;
v___y_1763_ = v___y_1961_;
v___y_1764_ = v___y_1962_;
v___y_1765_ = v___y_1963_;
v___y_1766_ = v___y_1964_;
v___y_1767_ = v___y_1965_;
v___y_1768_ = v___y_1966_;
v___y_1769_ = v___y_1967_;
v___y_1770_ = v___y_1968_;
v___y_1771_ = v___y_1969_;
goto v___jp_1759_;
}
else
{
v___y_1929_ = v___y_1960_;
v___y_1930_ = v___y_1961_;
v___y_1931_ = v___y_1966_;
v___y_1932_ = v___y_1964_;
v___y_1933_ = v___y_1962_;
v___y_1934_ = v___y_1967_;
v___y_1935_ = v___y_1968_;
v___y_1936_ = v___y_1963_;
v___y_1937_ = v___y_1959_;
v___y_1938_ = v___y_1965_;
v___y_1939_ = v_config_1970_;
v___y_1940_ = v___y_1969_;
goto v___jp_1928_;
}
}
else
{
v___y_1929_ = v___y_1960_;
v___y_1930_ = v___y_1961_;
v___y_1931_ = v___y_1966_;
v___y_1932_ = v___y_1964_;
v___y_1933_ = v___y_1962_;
v___y_1934_ = v___y_1967_;
v___y_1935_ = v___y_1968_;
v___y_1936_ = v___y_1963_;
v___y_1937_ = v___y_1959_;
v___y_1938_ = v___y_1965_;
v___y_1939_ = v_config_1970_;
v___y_1940_ = v___y_1969_;
goto v___jp_1928_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___boxed(lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_){
_start:
{
lean_object* v_res_2002_; 
v_res_2002_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline(v_a_1990_, v_a_1991_, v_a_1992_, v_a_1993_, v_a_1994_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_, v_a_2000_);
lean_dec(v_a_2000_);
lean_dec_ref(v_a_1999_);
lean_dec(v_a_1998_);
lean_dec_ref(v_a_1997_);
lean_dec(v_a_1996_);
lean_dec_ref(v_a_1995_);
lean_dec(v_a_1994_);
lean_dec_ref(v_a_1993_);
lean_dec(v_a_1992_);
lean_dec(v_a_1991_);
lean_dec_ref(v_a_1990_);
return v_res_2002_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__3(lean_object* v_00_u03b1_2003_, lean_object* v_x_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_){
_start:
{
lean_object* v___x_2017_; 
v___x_2017_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__3___redArg(v_x_2004_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__3___boxed(lean_object* v_00_u03b1_2018_, lean_object* v_x_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__3(v_00_u03b1_2018_, v_x_2019_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
lean_dec(v___y_2026_);
lean_dec_ref(v___y_2025_);
lean_dec(v___y_2024_);
lean_dec_ref(v___y_2023_);
lean_dec(v___y_2022_);
lean_dec(v___y_2021_);
lean_dec_ref(v___y_2020_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3(lean_object* v_cls_2033_, lean_object* v_msg_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_){
_start:
{
lean_object* v___x_2047_; 
v___x_2047_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg(v_cls_2033_, v_msg_2034_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_);
return v___x_2047_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___boxed(lean_object* v_cls_2048_, lean_object* v_msg_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_){
_start:
{
lean_object* v_res_2062_; 
v_res_2062_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3(v_cls_2048_, v_msg_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_, v___y_2060_);
lean_dec(v___y_2060_);
lean_dec_ref(v___y_2059_);
lean_dec(v___y_2058_);
lean_dec_ref(v___y_2057_);
lean_dec(v___y_2056_);
lean_dec_ref(v___y_2055_);
lean_dec(v___y_2054_);
lean_dec_ref(v___y_2053_);
lean_dec(v___y_2052_);
lean_dec(v___y_2051_);
lean_dec_ref(v___y_2050_);
return v_res_2062_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2(lean_object* v_oldTraces_2063_, lean_object* v_data_2064_, lean_object* v_ref_2065_, lean_object* v_msg_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_){
_start:
{
lean_object* v___x_2079_; 
v___x_2079_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2___redArg(v_oldTraces_2063_, v_data_2064_, v_ref_2065_, v_msg_2066_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2___boxed(lean_object* v_oldTraces_2080_, lean_object* v_data_2081_, lean_object* v_ref_2082_, lean_object* v_msg_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_){
_start:
{
lean_object* v_res_2096_; 
v_res_2096_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2_spec__2(v_oldTraces_2080_, v_data_2081_, v_ref_2082_, v_msg_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
lean_dec(v___y_2094_);
lean_dec_ref(v___y_2093_);
lean_dec(v___y_2092_);
lean_dec_ref(v___y_2091_);
lean_dec(v___y_2090_);
lean_dec_ref(v___y_2089_);
lean_dec(v___y_2088_);
lean_dec_ref(v___y_2087_);
lean_dec(v___y_2086_);
lean_dec(v___y_2085_);
lean_dec_ref(v___y_2084_);
return v_res_2096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0(lean_object* v_____r_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_){
_start:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2110_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___boxed), 12, 0);
v___x_2111_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_withCaches___redArg(v___x_2110_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_);
return v___x_2111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___boxed(lean_object* v_____r_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_){
_start:
{
lean_object* v_res_2125_; 
v_res_2125_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0(v_____r_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_);
lean_dec(v___y_2123_);
lean_dec_ref(v___y_2122_);
lean_dec(v___y_2121_);
lean_dec_ref(v___y_2120_);
lean_dec(v___y_2119_);
lean_dec_ref(v___y_2118_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec(v___y_2114_);
lean_dec_ref(v___y_2113_);
return v_res_2125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__1(lean_object* v_hyps_x3f_2126_, lean_object* v___f_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_){
_start:
{
if (lean_obj_tag(v_hyps_x3f_2126_) == 1)
{
lean_object* v_val_2140_; lean_object* v___x_2141_; lean_object* v_caches_2142_; lean_object* v_typeAnalysis_2143_; lean_object* v_target_2144_; uint8_t v_didChange_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2155_; 
v_val_2140_ = lean_ctor_get(v_hyps_x3f_2126_, 0);
v___x_2141_ = lean_st_ref_take(v___y_2129_);
v_caches_2142_ = lean_ctor_get(v___x_2141_, 0);
v_typeAnalysis_2143_ = lean_ctor_get(v___x_2141_, 1);
v_target_2144_ = lean_ctor_get(v___x_2141_, 2);
v_didChange_2145_ = lean_ctor_get_uint8(v___x_2141_, sizeof(void*)*4);
v_isSharedCheck_2155_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2155_ == 0)
{
lean_object* v_unused_2156_; 
v_unused_2156_ = lean_ctor_get(v___x_2141_, 3);
lean_dec(v_unused_2156_);
v___x_2147_ = v___x_2141_;
v_isShared_2148_ = v_isSharedCheck_2155_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_target_2144_);
lean_inc(v_typeAnalysis_2143_);
lean_inc(v_caches_2142_);
lean_dec(v___x_2141_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2155_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2149_; lean_object* v___x_2151_; 
v___x_2149_ = lean_box(0);
lean_inc(v_val_2140_);
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 3, v_val_2140_);
v___x_2151_ = v___x_2147_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v_caches_2142_);
lean_ctor_set(v_reuseFailAlloc_2154_, 1, v_typeAnalysis_2143_);
lean_ctor_set(v_reuseFailAlloc_2154_, 2, v_target_2144_);
lean_ctor_set(v_reuseFailAlloc_2154_, 3, v_val_2140_);
lean_ctor_set_uint8(v_reuseFailAlloc_2154_, sizeof(void*)*4, v_didChange_2145_);
v___x_2151_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2152_ = lean_st_ref_put(v___y_2129_, v___x_2151_);
lean_inc(v___y_2138_);
lean_inc_ref(v___y_2137_);
lean_inc(v___y_2136_);
lean_inc_ref(v___y_2135_);
lean_inc(v___y_2134_);
lean_inc_ref(v___y_2133_);
lean_inc(v___y_2132_);
lean_inc_ref(v___y_2131_);
lean_inc(v___y_2130_);
lean_inc(v___y_2129_);
lean_inc_ref(v___y_2128_);
v___x_2153_ = lean_apply_13(v___f_2127_, v___x_2149_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, lean_box(0));
return v___x_2153_;
}
}
}
else
{
lean_object* v___x_2157_; 
v___x_2157_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps(v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v_a_2158_; uint8_t v___x_2159_; 
v_a_2158_ = lean_ctor_get(v___x_2157_, 0);
v___x_2159_ = lean_unbox(v_a_2158_);
if (v___x_2159_ == 0)
{
lean_object* v___x_2160_; lean_object* v___x_2161_; 
lean_dec_ref_known(v___x_2157_, 1);
v___x_2160_ = lean_box(0);
lean_inc(v___y_2138_);
lean_inc_ref(v___y_2137_);
lean_inc(v___y_2136_);
lean_inc_ref(v___y_2135_);
lean_inc(v___y_2134_);
lean_inc_ref(v___y_2133_);
lean_inc(v___y_2132_);
lean_inc_ref(v___y_2131_);
lean_inc(v___y_2130_);
lean_inc(v___y_2129_);
lean_inc_ref(v___y_2128_);
v___x_2161_ = lean_apply_13(v___f_2127_, v___x_2160_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, lean_box(0));
return v___x_2161_;
}
else
{
lean_dec_ref(v___f_2127_);
return v___x_2157_;
}
}
else
{
lean_dec_ref(v___f_2127_);
return v___x_2157_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__1___boxed(lean_object* v_hyps_x3f_2162_, lean_object* v___f_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_){
_start:
{
lean_object* v_res_2176_; 
v_res_2176_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__1(v_hyps_x3f_2162_, v___f_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_);
lean_dec(v___y_2174_);
lean_dec_ref(v___y_2173_);
lean_dec(v___y_2172_);
lean_dec_ref(v___y_2171_);
lean_dec(v___y_2170_);
lean_dec_ref(v___y_2169_);
lean_dec(v___y_2168_);
lean_dec_ref(v___y_2167_);
lean_dec(v___y_2166_);
lean_dec(v___y_2165_);
lean_dec_ref(v___y_2164_);
lean_dec(v_hyps_x3f_2162_);
return v_res_2176_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___closed__2(void){
_start:
{
lean_object* v___x_2180_; lean_object* v___x_2181_; 
v___x_2180_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___closed__1));
v___x_2181_ = l_Lean_MessageData_ofFormat(v___x_2180_);
return v___x_2181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2(lean_object* v_x_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_){
_start:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; 
v___x_2195_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___closed__2);
v___x_2196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2195_);
return v___x_2196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2___boxed(lean_object* v_x_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_){
_start:
{
lean_object* v_res_2210_; 
v_res_2210_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__2(v_x_2197_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
lean_dec(v___y_2208_);
lean_dec_ref(v___y_2207_);
lean_dec(v___y_2206_);
lean_dec_ref(v___y_2205_);
lean_dec(v___y_2204_);
lean_dec_ref(v___y_2203_);
lean_dec(v___y_2202_);
lean_dec_ref(v___y_2201_);
lean_dec(v___y_2200_);
lean_dec(v___y_2199_);
lean_dec_ref(v___y_2198_);
lean_dec_ref(v_x_2197_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize(lean_object* v_hyps_x3f_2213_, lean_object* v_a_2214_, lean_object* v_a_2215_, lean_object* v_a_2216_, lean_object* v_a_2217_, lean_object* v_a_2218_, lean_object* v_a_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_){
_start:
{
lean_object* v_toCold_2226_; lean_object* v_options_2227_; lean_object* v_inheritedTraceOptions_2228_; uint8_t v_hasTrace_2229_; lean_object* v___f_2230_; 
v_toCold_2226_ = lean_ctor_get(v_a_2223_, 0);
v_options_2227_ = lean_ctor_get(v_toCold_2226_, 2);
v_inheritedTraceOptions_2228_ = lean_ctor_get(v_toCold_2226_, 11);
v_hasTrace_2229_ = lean_ctor_get_uint8(v_options_2227_, sizeof(void*)*1);
v___f_2230_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__0));
if (v_hasTrace_2229_ == 0)
{
lean_object* v___x_2231_; 
v___x_2231_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__1(v_hyps_x3f_2213_, v___f_2230_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_);
return v___x_2231_;
}
else
{
lean_object* v___f_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; uint8_t v___x_2236_; lean_object* v___y_2238_; lean_object* v___y_2239_; lean_object* v_a_2240_; lean_object* v___y_2253_; lean_object* v___y_2254_; lean_object* v_a_2255_; 
v___f_2232_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__1));
v___x_2233_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__4));
v___x_2234_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__3___redArg___closed__1));
v___x_2235_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__7);
v___x_2236_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2228_, v_options_2227_, v___x_2235_);
if (v___x_2236_ == 0)
{
lean_object* v___x_2305_; uint8_t v___x_2306_; 
v___x_2305_ = l_Lean_trace_profiler;
v___x_2306_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v_options_2227_, v___x_2305_);
if (v___x_2306_ == 0)
{
lean_object* v___x_2307_; 
v___x_2307_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__1(v_hyps_x3f_2213_, v___f_2230_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_);
return v___x_2307_;
}
else
{
goto v___jp_2264_;
}
}
else
{
goto v___jp_2264_;
}
v___jp_2237_:
{
lean_object* v___x_2241_; double v___x_2242_; double v___x_2243_; double v___x_2244_; double v___x_2245_; double v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2241_ = lean_io_mono_nanos_now();
v___x_2242_ = lean_float_of_nat(v___y_2239_);
v___x_2243_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline___closed__0);
v___x_2244_ = lean_float_div(v___x_2242_, v___x_2243_);
v___x_2245_ = lean_float_of_nat(v___x_2241_);
v___x_2246_ = lean_float_div(v___x_2245_, v___x_2243_);
v___x_2247_ = lean_box_float(v___x_2244_);
v___x_2248_ = lean_box_float(v___x_2246_);
v___x_2249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2249_, 0, v___x_2247_);
lean_ctor_set(v___x_2249_, 1, v___x_2248_);
v___x_2250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2250_, 0, v_a_2240_);
lean_ctor_set(v___x_2250_, 1, v___x_2249_);
v___x_2251_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(v___x_2233_, v_hasTrace_2229_, v___x_2234_, v_options_2227_, v___x_2236_, v___y_2238_, v___f_2232_, v___x_2250_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_);
return v___x_2251_;
}
v___jp_2252_:
{
lean_object* v___x_2256_; double v___x_2257_; double v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2256_ = lean_io_get_num_heartbeats();
v___x_2257_ = lean_float_of_nat(v___y_2254_);
v___x_2258_ = lean_float_of_nat(v___x_2256_);
v___x_2259_ = lean_box_float(v___x_2257_);
v___x_2260_ = lean_box_float(v___x_2258_);
v___x_2261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2259_);
lean_ctor_set(v___x_2261_, 1, v___x_2260_);
v___x_2262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2262_, 0, v_a_2255_);
lean_ctor_set(v___x_2262_, 1, v___x_2261_);
v___x_2263_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__2(v___x_2233_, v_hasTrace_2229_, v___x_2234_, v_options_2227_, v___x_2236_, v___y_2253_, v___f_2232_, v___x_2262_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_);
return v___x_2263_;
}
v___jp_2264_:
{
lean_object* v___x_2265_; lean_object* v_a_2266_; lean_object* v___x_2267_; uint8_t v___x_2268_; 
v___x_2265_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__0___redArg(v_a_2224_);
v_a_2266_ = lean_ctor_get(v___x_2265_, 0);
lean_inc(v_a_2266_);
lean_dec_ref(v___x_2265_);
v___x_2267_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2268_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_runPipeline_spec__1(v_options_2227_, v___x_2267_);
if (v___x_2268_ == 0)
{
lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2269_ = lean_io_mono_nanos_now();
v___x_2270_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__1(v_hyps_x3f_2213_, v___f_2230_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_);
if (lean_obj_tag(v___x_2270_) == 0)
{
lean_object* v_a_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2278_; 
v_a_2271_ = lean_ctor_get(v___x_2270_, 0);
v_isSharedCheck_2278_ = !lean_is_exclusive(v___x_2270_);
if (v_isSharedCheck_2278_ == 0)
{
v___x_2273_ = v___x_2270_;
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_a_2271_);
lean_dec(v___x_2270_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___x_2276_; 
if (v_isShared_2274_ == 0)
{
lean_ctor_set_tag(v___x_2273_, 1);
v___x_2276_ = v___x_2273_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_a_2271_);
v___x_2276_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
v___y_2238_ = v_a_2266_;
v___y_2239_ = v___x_2269_;
v_a_2240_ = v___x_2276_;
goto v___jp_2237_;
}
}
}
else
{
lean_object* v_a_2279_; lean_object* v___x_2281_; uint8_t v_isShared_2282_; uint8_t v_isSharedCheck_2286_; 
v_a_2279_ = lean_ctor_get(v___x_2270_, 0);
v_isSharedCheck_2286_ = !lean_is_exclusive(v___x_2270_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2281_ = v___x_2270_;
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
else
{
lean_inc(v_a_2279_);
lean_dec(v___x_2270_);
v___x_2281_ = lean_box(0);
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
v_resetjp_2280_:
{
lean_object* v___x_2284_; 
if (v_isShared_2282_ == 0)
{
lean_ctor_set_tag(v___x_2281_, 0);
v___x_2284_ = v___x_2281_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v_a_2279_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
v___y_2238_ = v_a_2266_;
v___y_2239_ = v___x_2269_;
v_a_2240_ = v___x_2284_;
goto v___jp_2237_;
}
}
}
}
else
{
lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___x_2287_ = lean_io_get_num_heartbeats();
v___x_2288_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__1(v_hyps_x3f_2213_, v___f_2230_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_);
if (lean_obj_tag(v___x_2288_) == 0)
{
lean_object* v_a_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2296_; 
v_a_2289_ = lean_ctor_get(v___x_2288_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2288_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2291_ = v___x_2288_;
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_a_2289_);
lean_dec(v___x_2288_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2294_; 
if (v_isShared_2292_ == 0)
{
lean_ctor_set_tag(v___x_2291_, 1);
v___x_2294_ = v___x_2291_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_a_2289_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
v___y_2253_ = v_a_2266_;
v___y_2254_ = v___x_2287_;
v_a_2255_ = v___x_2294_;
goto v___jp_2252_;
}
}
}
else
{
lean_object* v_a_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2304_; 
v_a_2297_ = lean_ctor_get(v___x_2288_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2288_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2299_ = v___x_2288_;
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_a_2297_);
lean_dec(v___x_2288_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2302_; 
if (v_isShared_2300_ == 0)
{
lean_ctor_set_tag(v___x_2299_, 0);
v___x_2302_ = v___x_2299_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v_a_2297_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
v___y_2253_ = v_a_2266_;
v___y_2254_ = v___x_2287_;
v_a_2255_ = v___x_2302_;
goto v___jp_2252_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___boxed(lean_object* v_hyps_x3f_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_, lean_object* v_a_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_){
_start:
{
lean_object* v_res_2321_; 
v_res_2321_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize(v_hyps_x3f_2308_, v_a_2309_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_, v_a_2316_, v_a_2317_, v_a_2318_, v_a_2319_);
lean_dec(v_a_2319_);
lean_dec_ref(v_a_2318_);
lean_dec(v_a_2317_);
lean_dec_ref(v_a_2316_);
lean_dec(v_a_2315_);
lean_dec_ref(v_a_2314_);
lean_dec(v_a_2313_);
lean_dec_ref(v_a_2312_);
lean_dec(v_a_2311_);
lean_dec(v_a_2310_);
lean_dec_ref(v_a_2309_);
lean_dec(v_hyps_x3f_2308_);
return v_res_2321_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_AndFlatten(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_EmbeddedConstraint(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_AC(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Structures(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Enums(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_TypeAnalysis(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Reduction(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Intro(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Grind(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_AndFlatten(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_EmbeddedConstraint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_AC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Structures(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Enums(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_TypeAnalysis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Reduction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_AndFlatten(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_EmbeddedConstraint(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_AC(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Structures(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Enums(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_TypeAnalysis(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Reduction(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Intro(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Grind(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_AndFlatten(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_EmbeddedConstraint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_AC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Structures(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Enums(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_TypeAnalysis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Reduction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Normalize(builtin);
}
#ifdef __cplusplus
}
#endif
