// Lean compiler output
// Module: Lean.Meta.LevelDefEq
// Imports: public import Lean.Util.CollectMVars public import Lean.Meta.DecLevel public import Lean.Meta.HasAssignableMVar
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
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableLevelMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqLevelMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_mkLevelMVar(lean_object*);
lean_object* l_Lean_MessageData_ofLevel(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Bool_toLBool(uint8_t);
lean_object* l_Lean_Level_mvarId_x21(lean_object*);
lean_object* l_Lean_LMVarId_isReadOnly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LMVarId_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_occurs(lean_object*, lean_object*);
uint8_t l_Lean_Level_isMax(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelMax_x27(lean_object*, lean_object*);
lean_object* lean_is_level_def_eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_decLevel_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_isParam(lean_object*);
uint8_t l_Lean_Level_isMVar(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_io_mono_nanos_now();
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_Level_getLevelOffset(lean_object*);
lean_object* lean_instantiate_level_mvars(lean_object*, lean_object*);
lean_object* l_Lean_Level_normalize(lean_object*);
uint8_t l_Lean_instBEqLBool_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_hasAssignableLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwIsDefEqStuck___redArg();
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_Level_getOffset(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Meta.LevelDefEq"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__0 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__0_value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "_private.Lean.Meta.LevelDefEq.0.Lean.Meta.solveSelfMax"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1_value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "assertion violation: v.isMax\n  "};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__2 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4_value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "isLevelDefEq"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5_value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "step"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__6 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5_value),LEAN_SCALAR_PTR_LITERAL(198, 68, 1, 201, 101, 121, 53, 108)}};
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__6_value),LEAN_SCALAR_PTR_LITERAL(214, 1, 100, 166, 77, 133, 145, 204)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7_value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__8 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__8_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "solveSelfMax: "};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__11 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__12;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__13 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__13_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "tryApproxSelfMax "};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__0 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "tryApproxMaxMax "};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__0 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "stuck"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__0 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5_value),LEAN_SCALAR_PTR_LITERAL(198, 68, 1, 201, 101, 121, 53, 108)}};
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 131, 35, 104, 114, 254, 231, 20)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " =\?= "};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__3 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__2(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__7___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_isLevelDefEqAuxImpl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_isLevelDefEqAuxImpl___closed__0;
static lean_once_cell_t l_Lean_Meta_isLevelDefEqAuxImpl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__1;
static lean_once_cell_t l_Lean_Meta_isLevelDefEqAuxImpl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__2;
static lean_once_cell_t l_Lean_Meta_isLevelDefEqAuxImpl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__3;
static const lean_string_object l_Lean_Meta_isLevelDefEqAuxImpl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pp"};
static const lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__4 = (const lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__4_value;
static const lean_string_object l_Lean_Meta_isLevelDefEqAuxImpl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "instantiateMVars"};
static const lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__5 = (const lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__5_value;
static const lean_ctor_object l_Lean_Meta_isLevelDefEqAuxImpl___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l_Lean_Meta_isLevelDefEqAuxImpl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__5_value),LEAN_SCALAR_PTR_LITERAL(249, 167, 243, 240, 112, 42, 66, 234)}};
static const lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__6 = (const lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__6_value;
static const lean_ctor_object l_Lean_Meta_isLevelDefEqAuxImpl___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_isLevelDefEqAuxImpl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5_value),LEAN_SCALAR_PTR_LITERAL(198, 68, 1, 201, 101, 121, 53, 108)}};
static const lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__7 = (const lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__7_value;
static lean_once_cell_t l_Lean_Meta_isLevelDefEqAuxImpl___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__8;
LEAN_EXPORT lean_object* lean_is_level_def_eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "LevelDefEq"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(179, 184, 81, 18, 195, 210, 152, 110)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(30, 209, 144, 83, 13, 92, 153, 140)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 46, 128, 72, 56, 107, 184, 50)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4_value),LEAN_SCALAR_PTR_LITERAL(183, 118, 41, 27, 129, 22, 6, 162)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(134, 140, 12, 137, 237, 91, 220, 23)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(55, 22, 128, 151, 69, 154, 194, 107)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(202, 83, 161, 161, 122, 158, 1, 20)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4_value),LEAN_SCALAR_PTR_LITERAL(238, 252, 13, 249, 138, 174, 25, 171)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(35, 71, 113, 221, 79, 59, 169, 47)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1935786688) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(14, 8, 214, 23, 23, 5, 229, 17)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(89, 132, 61, 103, 235, 209, 75, 200)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(145, 197, 4, 86, 142, 168, 54, 111)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(108, 210, 92, 10, 251, 40, 69, 139)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(lean_object* v_lvl_1_, lean_object* v_a_2_){
_start:
{
if (lean_obj_tag(v_a_2_) == 2)
{
lean_object* v_a_3_; lean_object* v_a_4_; uint8_t v___x_5_; 
v_a_3_ = lean_ctor_get(v_a_2_, 0);
v_a_4_ = lean_ctor_get(v_a_2_, 1);
v___x_5_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(v_lvl_1_, v_a_3_);
if (v___x_5_ == 0)
{
v_a_2_ = v_a_4_;
goto _start;
}
else
{
return v___x_5_;
}
}
else
{
uint8_t v___x_7_; 
v___x_7_ = lean_level_eq(v_a_2_, v_lvl_1_);
if (v___x_7_ == 0)
{
uint8_t v___x_8_; 
v___x_8_ = l_Lean_Level_occurs(v_lvl_1_, v_a_2_);
return v___x_8_;
}
else
{
uint8_t v___x_9_; 
v___x_9_ = 0;
return v___x_9_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit___boxed(lean_object* v_lvl_10_, lean_object* v_a_11_){
_start:
{
uint8_t v_res_12_; lean_object* v_r_13_; 
v_res_12_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(v_lvl_10_, v_a_11_);
lean_dec(v_a_11_);
lean_dec(v_lvl_10_);
v_r_13_ = lean_box(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(lean_object* v_lvl_14_, lean_object* v_x_15_){
_start:
{
if (lean_obj_tag(v_x_15_) == 2)
{
lean_object* v_a_16_; lean_object* v_a_17_; uint8_t v___x_18_; 
v_a_16_ = lean_ctor_get(v_x_15_, 0);
v_a_17_ = lean_ctor_get(v_x_15_, 1);
v___x_18_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(v_lvl_14_, v_a_16_);
if (v___x_18_ == 0)
{
uint8_t v___x_19_; 
v___x_19_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(v_lvl_14_, v_a_17_);
return v___x_19_;
}
else
{
return v___x_18_;
}
}
else
{
uint8_t v___x_20_; 
v___x_20_ = 0;
return v___x_20_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax___boxed(lean_object* v_lvl_21_, lean_object* v_x_22_){
_start:
{
uint8_t v_res_23_; lean_object* v_r_24_; 
v_res_23_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(v_lvl_21_, v_x_22_);
lean_dec(v_x_22_);
lean_dec(v_lvl_21_);
v_r_24_ = lean_box(v_res_23_);
return v_r_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(lean_object* v_mvarId_25_, lean_object* v_x_26_, lean_object* v_x_27_){
_start:
{
switch(lean_obj_tag(v_x_26_))
{
case 2:
{
lean_object* v_a_28_; lean_object* v_a_29_; lean_object* v___x_30_; 
v_a_28_ = lean_ctor_get(v_x_26_, 0);
lean_inc(v_a_28_);
v_a_29_ = lean_ctor_get(v_x_26_, 1);
lean_inc(v_a_29_);
lean_dec_ref_known(v_x_26_, 2);
v___x_30_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(v_mvarId_25_, v_a_28_, v_x_27_);
v_x_26_ = v_a_29_;
v_x_27_ = v___x_30_;
goto _start;
}
case 5:
{
lean_object* v_a_32_; uint8_t v___x_33_; 
v_a_32_ = lean_ctor_get(v_x_26_, 0);
v___x_33_ = l_Lean_instBEqLevelMVarId_beq(v_a_32_, v_mvarId_25_);
if (v___x_33_ == 0)
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_mkLevelMax_x27(v_x_27_, v_x_26_);
return v___x_34_;
}
else
{
lean_dec_ref_known(v_x_26_, 1);
return v_x_27_;
}
}
default: 
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_mkLevelMax_x27(v_x_27_, v_x_26_);
return v___x_35_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff___boxed(lean_object* v_mvarId_36_, lean_object* v_x_37_, lean_object* v_x_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(v_mvarId_36_, v_x_37_, v_x_38_);
lean_dec(v_mvarId_36_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0(lean_object* v_msg_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_){
_start:
{
lean_object* v___f_47_; lean_object* v___x_1048__overap_48_; lean_object* v___x_49_; 
v___f_47_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0___closed__0));
v___x_1048__overap_48_ = lean_panic_fn_borrowed(v___f_47_, v_msg_41_);
lean_inc(v___y_45_);
lean_inc_ref(v___y_44_);
lean_inc(v___y_43_);
lean_inc_ref(v___y_42_);
v___x_49_ = lean_apply_5(v___x_1048__overap_48_, v___y_42_, v___y_43_, v___y_44_, v___y_45_, lean_box(0));
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0___boxed(lean_object* v_msg_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0(v_msg_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(lean_object* v_x_57_, lean_object* v_x_58_, lean_object* v_x_59_, lean_object* v_x_60_){
_start:
{
lean_object* v_ks_61_; lean_object* v_vs_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_86_; 
v_ks_61_ = lean_ctor_get(v_x_57_, 0);
v_vs_62_ = lean_ctor_get(v_x_57_, 1);
v_isSharedCheck_86_ = !lean_is_exclusive(v_x_57_);
if (v_isSharedCheck_86_ == 0)
{
v___x_64_ = v_x_57_;
v_isShared_65_ = v_isSharedCheck_86_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_vs_62_);
lean_inc(v_ks_61_);
lean_dec(v_x_57_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_86_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_66_ = lean_array_get_size(v_ks_61_);
v___x_67_ = lean_nat_dec_lt(v_x_58_, v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_71_; 
lean_dec(v_x_58_);
v___x_68_ = lean_array_push(v_ks_61_, v_x_59_);
v___x_69_ = lean_array_push(v_vs_62_, v_x_60_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 1, v___x_69_);
lean_ctor_set(v___x_64_, 0, v___x_68_);
v___x_71_ = v___x_64_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v___x_68_);
lean_ctor_set(v_reuseFailAlloc_72_, 1, v___x_69_);
v___x_71_ = v_reuseFailAlloc_72_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
return v___x_71_;
}
}
else
{
lean_object* v_k_x27_73_; uint8_t v___x_74_; 
v_k_x27_73_ = lean_array_fget_borrowed(v_ks_61_, v_x_58_);
v___x_74_ = l_Lean_instBEqLevelMVarId_beq(v_x_59_, v_k_x27_73_);
if (v___x_74_ == 0)
{
lean_object* v___x_76_; 
if (v_isShared_65_ == 0)
{
v___x_76_ = v___x_64_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v_ks_61_);
lean_ctor_set(v_reuseFailAlloc_80_, 1, v_vs_62_);
v___x_76_ = v_reuseFailAlloc_80_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = lean_unsigned_to_nat(1u);
v___x_78_ = lean_nat_add(v_x_58_, v___x_77_);
lean_dec(v_x_58_);
v_x_57_ = v___x_76_;
v_x_58_ = v___x_78_;
goto _start;
}
}
else
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_84_; 
v___x_81_ = lean_array_fset(v_ks_61_, v_x_58_, v_x_59_);
v___x_82_ = lean_array_fset(v_vs_62_, v_x_58_, v_x_60_);
lean_dec(v_x_58_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 1, v___x_82_);
lean_ctor_set(v___x_64_, 0, v___x_81_);
v___x_84_ = v___x_64_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_81_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v___x_82_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
return v___x_84_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5___redArg(lean_object* v_n_87_, lean_object* v_k_88_, lean_object* v_v_89_){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_unsigned_to_nat(0u);
v___x_91_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(v_n_87_, v___x_90_, v_k_88_, v_v_89_);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg(lean_object* v_x_93_, size_t v_x_94_, size_t v_x_95_, lean_object* v_x_96_, lean_object* v_x_97_){
_start:
{
if (lean_obj_tag(v_x_93_) == 0)
{
lean_object* v_es_98_; size_t v___x_99_; size_t v___x_100_; lean_object* v_j_101_; lean_object* v___x_102_; uint8_t v___x_103_; 
v_es_98_ = lean_ctor_get(v_x_93_, 0);
v___x_99_ = ((size_t)31ULL);
v___x_100_ = lean_usize_land(v_x_94_, v___x_99_);
v_j_101_ = lean_usize_to_nat(v___x_100_);
v___x_102_ = lean_array_get_size(v_es_98_);
v___x_103_ = lean_nat_dec_lt(v_j_101_, v___x_102_);
if (v___x_103_ == 0)
{
lean_dec(v_j_101_);
lean_dec(v_x_97_);
lean_dec(v_x_96_);
return v_x_93_;
}
else
{
lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_142_; 
lean_inc_ref(v_es_98_);
v_isSharedCheck_142_ = !lean_is_exclusive(v_x_93_);
if (v_isSharedCheck_142_ == 0)
{
lean_object* v_unused_143_; 
v_unused_143_ = lean_ctor_get(v_x_93_, 0);
lean_dec(v_unused_143_);
v___x_105_ = v_x_93_;
v_isShared_106_ = v_isSharedCheck_142_;
goto v_resetjp_104_;
}
else
{
lean_dec(v_x_93_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_142_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v_v_107_; lean_object* v___x_108_; lean_object* v_xs_x27_109_; lean_object* v___y_111_; 
v_v_107_ = lean_array_fget(v_es_98_, v_j_101_);
v___x_108_ = lean_box(0);
v_xs_x27_109_ = lean_array_fset(v_es_98_, v_j_101_, v___x_108_);
switch(lean_obj_tag(v_v_107_))
{
case 0:
{
lean_object* v_key_116_; lean_object* v_val_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_127_; 
v_key_116_ = lean_ctor_get(v_v_107_, 0);
v_val_117_ = lean_ctor_get(v_v_107_, 1);
v_isSharedCheck_127_ = !lean_is_exclusive(v_v_107_);
if (v_isSharedCheck_127_ == 0)
{
v___x_119_ = v_v_107_;
v_isShared_120_ = v_isSharedCheck_127_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_val_117_);
lean_inc(v_key_116_);
lean_dec(v_v_107_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_127_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
uint8_t v___x_121_; 
v___x_121_ = l_Lean_instBEqLevelMVarId_beq(v_x_96_, v_key_116_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; lean_object* v___x_123_; 
lean_del_object(v___x_119_);
v___x_122_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_116_, v_val_117_, v_x_96_, v_x_97_);
v___x_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
v___y_111_ = v___x_123_;
goto v___jp_110_;
}
else
{
lean_object* v___x_125_; 
lean_dec(v_val_117_);
lean_dec(v_key_116_);
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 1, v_x_97_);
lean_ctor_set(v___x_119_, 0, v_x_96_);
v___x_125_ = v___x_119_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_x_96_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v_x_97_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
v___y_111_ = v___x_125_;
goto v___jp_110_;
}
}
}
}
case 1:
{
lean_object* v_node_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_140_; 
v_node_128_ = lean_ctor_get(v_v_107_, 0);
v_isSharedCheck_140_ = !lean_is_exclusive(v_v_107_);
if (v_isSharedCheck_140_ == 0)
{
v___x_130_ = v_v_107_;
v_isShared_131_ = v_isSharedCheck_140_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_node_128_);
lean_dec(v_v_107_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_140_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
size_t v___x_132_; size_t v___x_133_; size_t v___x_134_; size_t v___x_135_; lean_object* v___x_136_; lean_object* v___x_138_; 
v___x_132_ = ((size_t)5ULL);
v___x_133_ = lean_usize_shift_right(v_x_94_, v___x_132_);
v___x_134_ = ((size_t)1ULL);
v___x_135_ = lean_usize_add(v_x_95_, v___x_134_);
v___x_136_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg(v_node_128_, v___x_133_, v___x_135_, v_x_96_, v_x_97_);
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 0, v___x_136_);
v___x_138_ = v___x_130_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v___x_136_);
v___x_138_ = v_reuseFailAlloc_139_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
v___y_111_ = v___x_138_;
goto v___jp_110_;
}
}
}
default: 
{
lean_object* v___x_141_; 
v___x_141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_141_, 0, v_x_96_);
lean_ctor_set(v___x_141_, 1, v_x_97_);
v___y_111_ = v___x_141_;
goto v___jp_110_;
}
}
v___jp_110_:
{
lean_object* v___x_112_; lean_object* v___x_114_; 
v___x_112_ = lean_array_fset(v_xs_x27_109_, v_j_101_, v___y_111_);
lean_dec(v_j_101_);
if (v_isShared_106_ == 0)
{
lean_ctor_set(v___x_105_, 0, v___x_112_);
v___x_114_ = v___x_105_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v___x_112_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
}
}
else
{
lean_object* v_ks_144_; lean_object* v_vs_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_163_; 
v_ks_144_ = lean_ctor_get(v_x_93_, 0);
v_vs_145_ = lean_ctor_get(v_x_93_, 1);
v_isSharedCheck_163_ = !lean_is_exclusive(v_x_93_);
if (v_isSharedCheck_163_ == 0)
{
v___x_147_ = v_x_93_;
v_isShared_148_ = v_isSharedCheck_163_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_vs_145_);
lean_inc(v_ks_144_);
lean_dec(v_x_93_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_163_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_150_; 
if (v_isShared_148_ == 0)
{
v___x_150_ = v___x_147_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_ks_144_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v_vs_145_);
v___x_150_ = v_reuseFailAlloc_162_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
lean_object* v_newNode_151_; size_t v___x_152_; uint8_t v___x_153_; 
v_newNode_151_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5___redArg(v___x_150_, v_x_96_, v_x_97_);
v___x_152_ = ((size_t)7ULL);
v___x_153_ = lean_usize_dec_le(v___x_152_, v_x_95_);
if (v___x_153_ == 0)
{
lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_154_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_151_);
v___x_155_ = lean_unsigned_to_nat(4u);
v___x_156_ = lean_nat_dec_lt(v___x_154_, v___x_155_);
lean_dec(v___x_154_);
if (v___x_156_ == 0)
{
lean_object* v_ks_157_; lean_object* v_vs_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v_ks_157_ = lean_ctor_get(v_newNode_151_, 0);
lean_inc_ref(v_ks_157_);
v_vs_158_ = lean_ctor_get(v_newNode_151_, 1);
lean_inc_ref(v_vs_158_);
lean_dec_ref(v_newNode_151_);
v___x_159_ = lean_unsigned_to_nat(0u);
v___x_160_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__0);
v___x_161_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___redArg(v_x_95_, v_ks_157_, v_vs_158_, v___x_159_, v___x_160_);
lean_dec_ref(v_vs_158_);
lean_dec_ref(v_ks_157_);
return v___x_161_;
}
else
{
return v_newNode_151_;
}
}
else
{
return v_newNode_151_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___redArg(size_t v_depth_164_, lean_object* v_keys_165_, lean_object* v_vals_166_, lean_object* v_i_167_, lean_object* v_entries_168_){
_start:
{
lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_169_ = lean_array_get_size(v_keys_165_);
v___x_170_ = lean_nat_dec_lt(v_i_167_, v___x_169_);
if (v___x_170_ == 0)
{
lean_dec(v_i_167_);
return v_entries_168_;
}
else
{
lean_object* v_k_171_; lean_object* v_v_172_; uint64_t v___x_173_; size_t v_h_174_; size_t v___x_175_; lean_object* v___x_176_; size_t v___x_177_; size_t v___x_178_; size_t v___x_179_; size_t v_h_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v_k_171_ = lean_array_fget_borrowed(v_keys_165_, v_i_167_);
v_v_172_ = lean_array_fget_borrowed(v_vals_166_, v_i_167_);
v___x_173_ = l_Lean_instHashableLevelMVarId_hash(v_k_171_);
v_h_174_ = lean_uint64_to_usize(v___x_173_);
v___x_175_ = ((size_t)5ULL);
v___x_176_ = lean_unsigned_to_nat(1u);
v___x_177_ = ((size_t)1ULL);
v___x_178_ = lean_usize_sub(v_depth_164_, v___x_177_);
v___x_179_ = lean_usize_mul(v___x_175_, v___x_178_);
v_h_180_ = lean_usize_shift_right(v_h_174_, v___x_179_);
v___x_181_ = lean_nat_add(v_i_167_, v___x_176_);
lean_dec(v_i_167_);
lean_inc(v_v_172_);
lean_inc(v_k_171_);
v___x_182_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg(v_entries_168_, v_h_180_, v_depth_164_, v_k_171_, v_v_172_);
v_i_167_ = v___x_181_;
v_entries_168_ = v___x_182_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_depth_184_, lean_object* v_keys_185_, lean_object* v_vals_186_, lean_object* v_i_187_, lean_object* v_entries_188_){
_start:
{
size_t v_depth_boxed_189_; lean_object* v_res_190_; 
v_depth_boxed_189_ = lean_unbox_usize(v_depth_184_);
lean_dec(v_depth_184_);
v_res_190_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___redArg(v_depth_boxed_189_, v_keys_185_, v_vals_186_, v_i_187_, v_entries_188_);
lean_dec_ref(v_vals_186_);
lean_dec_ref(v_keys_185_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_x_191_, lean_object* v_x_192_, lean_object* v_x_193_, lean_object* v_x_194_, lean_object* v_x_195_){
_start:
{
size_t v_x_2809__boxed_196_; size_t v_x_2810__boxed_197_; lean_object* v_res_198_; 
v_x_2809__boxed_196_ = lean_unbox_usize(v_x_192_);
lean_dec(v_x_192_);
v_x_2810__boxed_197_ = lean_unbox_usize(v_x_193_);
lean_dec(v_x_193_);
v_res_198_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg(v_x_191_, v_x_2809__boxed_196_, v_x_2810__boxed_197_, v_x_194_, v_x_195_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1___redArg(lean_object* v_x_199_, lean_object* v_x_200_, lean_object* v_x_201_){
_start:
{
uint64_t v___x_202_; size_t v___x_203_; size_t v___x_204_; lean_object* v___x_205_; 
v___x_202_ = l_Lean_instHashableLevelMVarId_hash(v_x_200_);
v___x_203_ = lean_uint64_to_usize(v___x_202_);
v___x_204_ = ((size_t)1ULL);
v___x_205_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg(v_x_199_, v___x_203_, v___x_204_, v_x_200_, v_x_201_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(lean_object* v_mvarId_206_, lean_object* v_val_207_, lean_object* v___y_208_){
_start:
{
lean_object* v___x_210_; lean_object* v_mctx_211_; lean_object* v_cache_212_; lean_object* v_zetaDeltaFVarIds_213_; lean_object* v_postponed_214_; lean_object* v_diag_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_244_; 
v___x_210_ = lean_st_ref_take(v___y_208_);
v_mctx_211_ = lean_ctor_get(v___x_210_, 0);
v_cache_212_ = lean_ctor_get(v___x_210_, 1);
v_zetaDeltaFVarIds_213_ = lean_ctor_get(v___x_210_, 2);
v_postponed_214_ = lean_ctor_get(v___x_210_, 3);
v_diag_215_ = lean_ctor_get(v___x_210_, 4);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_244_ == 0)
{
v___x_217_ = v___x_210_;
v_isShared_218_ = v_isSharedCheck_244_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_diag_215_);
lean_inc(v_postponed_214_);
lean_inc(v_zetaDeltaFVarIds_213_);
lean_inc(v_cache_212_);
lean_inc(v_mctx_211_);
lean_dec(v___x_210_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_244_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v_depth_219_; lean_object* v_levelAssignDepth_220_; lean_object* v_lmvarCounter_221_; lean_object* v_mvarCounter_222_; lean_object* v_lDecls_223_; lean_object* v_decls_224_; lean_object* v_userNames_225_; lean_object* v_lAssignment_226_; lean_object* v_eAssignment_227_; lean_object* v_dAssignment_228_; lean_object* v_instanceTypedMVars_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_243_; 
v_depth_219_ = lean_ctor_get(v_mctx_211_, 0);
v_levelAssignDepth_220_ = lean_ctor_get(v_mctx_211_, 1);
v_lmvarCounter_221_ = lean_ctor_get(v_mctx_211_, 2);
v_mvarCounter_222_ = lean_ctor_get(v_mctx_211_, 3);
v_lDecls_223_ = lean_ctor_get(v_mctx_211_, 4);
v_decls_224_ = lean_ctor_get(v_mctx_211_, 5);
v_userNames_225_ = lean_ctor_get(v_mctx_211_, 6);
v_lAssignment_226_ = lean_ctor_get(v_mctx_211_, 7);
v_eAssignment_227_ = lean_ctor_get(v_mctx_211_, 8);
v_dAssignment_228_ = lean_ctor_get(v_mctx_211_, 9);
v_instanceTypedMVars_229_ = lean_ctor_get(v_mctx_211_, 10);
v_isSharedCheck_243_ = !lean_is_exclusive(v_mctx_211_);
if (v_isSharedCheck_243_ == 0)
{
v___x_231_ = v_mctx_211_;
v_isShared_232_ = v_isSharedCheck_243_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_instanceTypedMVars_229_);
lean_inc(v_dAssignment_228_);
lean_inc(v_eAssignment_227_);
lean_inc(v_lAssignment_226_);
lean_inc(v_userNames_225_);
lean_inc(v_decls_224_);
lean_inc(v_lDecls_223_);
lean_inc(v_mvarCounter_222_);
lean_inc(v_lmvarCounter_221_);
lean_inc(v_levelAssignDepth_220_);
lean_inc(v_depth_219_);
lean_dec(v_mctx_211_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_243_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_236_; 
v___x_233_ = lean_box(0);
v___x_234_ = l_Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1___redArg(v_lAssignment_226_, v_mvarId_206_, v_val_207_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 7, v___x_234_);
v___x_236_ = v___x_231_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_depth_219_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v_levelAssignDepth_220_);
lean_ctor_set(v_reuseFailAlloc_242_, 2, v_lmvarCounter_221_);
lean_ctor_set(v_reuseFailAlloc_242_, 3, v_mvarCounter_222_);
lean_ctor_set(v_reuseFailAlloc_242_, 4, v_lDecls_223_);
lean_ctor_set(v_reuseFailAlloc_242_, 5, v_decls_224_);
lean_ctor_set(v_reuseFailAlloc_242_, 6, v_userNames_225_);
lean_ctor_set(v_reuseFailAlloc_242_, 7, v___x_234_);
lean_ctor_set(v_reuseFailAlloc_242_, 8, v_eAssignment_227_);
lean_ctor_set(v_reuseFailAlloc_242_, 9, v_dAssignment_228_);
lean_ctor_set(v_reuseFailAlloc_242_, 10, v_instanceTypedMVars_229_);
v___x_236_ = v_reuseFailAlloc_242_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
lean_object* v___x_238_; 
if (v_isShared_218_ == 0)
{
lean_ctor_set(v___x_217_, 0, v___x_236_);
v___x_238_ = v___x_217_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v___x_236_);
lean_ctor_set(v_reuseFailAlloc_241_, 1, v_cache_212_);
lean_ctor_set(v_reuseFailAlloc_241_, 2, v_zetaDeltaFVarIds_213_);
lean_ctor_set(v_reuseFailAlloc_241_, 3, v_postponed_214_);
lean_ctor_set(v_reuseFailAlloc_241_, 4, v_diag_215_);
v___x_238_ = v_reuseFailAlloc_241_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = lean_st_ref_put(v___y_208_, v___x_238_);
v___x_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_233_);
return v___x_240_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg___boxed(lean_object* v_mvarId_245_, lean_object* v_val_246_, lean_object* v___y_247_, lean_object* v___y_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_245_, v_val_246_, v___y_247_);
lean_dec(v___y_247_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3(lean_object* v_msgData_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_){
_start:
{
lean_object* v___x_256_; lean_object* v_env_257_; uint8_t v___x_258_; lean_object* v_env_259_; lean_object* v___x_260_; lean_object* v_toCold_261_; lean_object* v_mctx_262_; lean_object* v_lctx_263_; lean_object* v_options_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_256_ = lean_st_ref_get(v___y_254_);
v_env_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc_ref(v_env_257_);
lean_dec(v___x_256_);
v___x_258_ = 0;
v_env_259_ = l_Lean_Environment_setRecordingDeps(v_env_257_, v___x_258_);
v___x_260_ = lean_st_ref_get(v___y_252_);
v_toCold_261_ = lean_ctor_get(v___y_253_, 0);
v_mctx_262_ = lean_ctor_get(v___x_260_, 0);
lean_inc_ref(v_mctx_262_);
lean_dec(v___x_260_);
v_lctx_263_ = lean_ctor_get(v___y_251_, 2);
v_options_264_ = lean_ctor_get(v_toCold_261_, 2);
lean_inc_ref(v_options_264_);
lean_inc_ref(v_lctx_263_);
v___x_265_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_265_, 0, v_env_259_);
lean_ctor_set(v___x_265_, 1, v_mctx_262_);
lean_ctor_set(v___x_265_, 2, v_lctx_263_);
lean_ctor_set(v___x_265_, 3, v_options_264_);
v___x_266_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_266_, 0, v___x_265_);
lean_ctor_set(v___x_266_, 1, v_msgData_250_);
v___x_267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3___boxed(lean_object* v_msgData_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3(v_msgData_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_);
lean_dec(v___y_272_);
lean_dec_ref(v___y_271_);
lean_dec(v___y_270_);
lean_dec_ref(v___y_269_);
return v_res_274_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0(void){
_start:
{
lean_object* v___x_275_; double v___x_276_; 
v___x_275_ = lean_unsigned_to_nat(0u);
v___x_276_ = lean_float_of_nat(v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(lean_object* v_cls_280_, lean_object* v_msg_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_){
_start:
{
lean_object* v_ref_287_; lean_object* v___x_288_; lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_334_; 
v_ref_287_ = lean_ctor_get(v___y_284_, 2);
v___x_288_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3(v_msg_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_);
v_a_289_ = lean_ctor_get(v___x_288_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_334_ == 0)
{
v___x_291_ = v___x_288_;
v_isShared_292_ = v_isSharedCheck_334_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_288_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_334_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_293_; lean_object* v_traceState_294_; lean_object* v_env_295_; lean_object* v_nextMacroScope_296_; lean_object* v_ngen_297_; lean_object* v_auxDeclNGen_298_; lean_object* v_cache_299_; lean_object* v_recordedDeps_300_; lean_object* v_messages_301_; lean_object* v_infoState_302_; lean_object* v_snapshotTasks_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_333_; 
v___x_293_ = lean_st_ref_take(v___y_285_);
v_traceState_294_ = lean_ctor_get(v___x_293_, 4);
v_env_295_ = lean_ctor_get(v___x_293_, 0);
v_nextMacroScope_296_ = lean_ctor_get(v___x_293_, 1);
v_ngen_297_ = lean_ctor_get(v___x_293_, 2);
v_auxDeclNGen_298_ = lean_ctor_get(v___x_293_, 3);
v_cache_299_ = lean_ctor_get(v___x_293_, 5);
v_recordedDeps_300_ = lean_ctor_get(v___x_293_, 6);
v_messages_301_ = lean_ctor_get(v___x_293_, 7);
v_infoState_302_ = lean_ctor_get(v___x_293_, 8);
v_snapshotTasks_303_ = lean_ctor_get(v___x_293_, 9);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_293_);
if (v_isSharedCheck_333_ == 0)
{
v___x_305_ = v___x_293_;
v_isShared_306_ = v_isSharedCheck_333_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_snapshotTasks_303_);
lean_inc(v_infoState_302_);
lean_inc(v_messages_301_);
lean_inc(v_recordedDeps_300_);
lean_inc(v_cache_299_);
lean_inc(v_traceState_294_);
lean_inc(v_auxDeclNGen_298_);
lean_inc(v_ngen_297_);
lean_inc(v_nextMacroScope_296_);
lean_inc(v_env_295_);
lean_dec(v___x_293_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_333_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
uint64_t v_tid_307_; lean_object* v_traces_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_332_; 
v_tid_307_ = lean_ctor_get_uint64(v_traceState_294_, sizeof(void*)*1);
v_traces_308_ = lean_ctor_get(v_traceState_294_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v_traceState_294_);
if (v_isSharedCheck_332_ == 0)
{
v___x_310_ = v_traceState_294_;
v_isShared_311_ = v_isSharedCheck_332_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_traces_308_);
lean_dec(v_traceState_294_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_332_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; lean_object* v___x_313_; double v___x_314_; uint8_t v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_323_; 
v___x_312_ = lean_box(0);
v___x_313_ = lean_box(0);
v___x_314_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0);
v___x_315_ = 0;
v___x_316_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__1));
v___x_317_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_317_, 0, v_cls_280_);
lean_ctor_set(v___x_317_, 1, v___x_313_);
lean_ctor_set(v___x_317_, 2, v___x_316_);
lean_ctor_set_float(v___x_317_, sizeof(void*)*3, v___x_314_);
lean_ctor_set_float(v___x_317_, sizeof(void*)*3 + 8, v___x_314_);
lean_ctor_set_uint8(v___x_317_, sizeof(void*)*3 + 16, v___x_315_);
v___x_318_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__2));
v___x_319_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_319_, 0, v___x_317_);
lean_ctor_set(v___x_319_, 1, v_a_289_);
lean_ctor_set(v___x_319_, 2, v___x_318_);
lean_inc(v_ref_287_);
v___x_320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_320_, 0, v_ref_287_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
v___x_321_ = l_Lean_PersistentArray_push___redArg(v_traces_308_, v___x_320_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 0, v___x_321_);
v___x_323_ = v___x_310_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v___x_321_);
lean_ctor_set_uint64(v_reuseFailAlloc_331_, sizeof(void*)*1, v_tid_307_);
v___x_323_ = v_reuseFailAlloc_331_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
lean_object* v___x_325_; 
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 4, v___x_323_);
v___x_325_ = v___x_305_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_env_295_);
lean_ctor_set(v_reuseFailAlloc_330_, 1, v_nextMacroScope_296_);
lean_ctor_set(v_reuseFailAlloc_330_, 2, v_ngen_297_);
lean_ctor_set(v_reuseFailAlloc_330_, 3, v_auxDeclNGen_298_);
lean_ctor_set(v_reuseFailAlloc_330_, 4, v___x_323_);
lean_ctor_set(v_reuseFailAlloc_330_, 5, v_cache_299_);
lean_ctor_set(v_reuseFailAlloc_330_, 6, v_recordedDeps_300_);
lean_ctor_set(v_reuseFailAlloc_330_, 7, v_messages_301_);
lean_ctor_set(v_reuseFailAlloc_330_, 8, v_infoState_302_);
lean_ctor_set(v_reuseFailAlloc_330_, 9, v_snapshotTasks_303_);
v___x_325_ = v_reuseFailAlloc_330_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
lean_object* v___x_326_; lean_object* v___x_328_; 
v___x_326_ = lean_st_ref_put(v___y_285_, v___x_325_);
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 0, v___x_312_);
v___x_328_ = v___x_291_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_312_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___boxed(lean_object* v_cls_335_, lean_object* v_msg_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v_cls_335_, v_msg_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_);
lean_dec(v___y_340_);
lean_dec_ref(v___y_339_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
return v_res_342_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_346_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__2));
v___x_347_ = lean_unsigned_to_nat(2u);
v___x_348_ = lean_unsigned_to_nat(39u);
v___x_349_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1));
v___x_350_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__0));
v___x_351_ = l_mkPanicMessageWithDecl(v___x_350_, v___x_349_, v___x_348_, v___x_347_, v___x_346_);
return v___x_351_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_362_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7));
v___x_363_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9));
v___x_364_ = l_Lean_Name_append(v___x_363_, v___x_362_);
return v___x_364_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__12(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__11));
v___x_367_ = l_Lean_stringToMessageData(v___x_366_);
return v___x_367_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__13));
v___x_370_ = l_Lean_stringToMessageData(v___x_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax(lean_object* v_mvarId_371_, lean_object* v_v_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_){
_start:
{
uint8_t v___x_378_; 
v___x_378_ = l_Lean_Level_isMax(v_v_372_);
if (v___x_378_ == 0)
{
lean_object* v___x_379_; lean_object* v___x_380_; 
lean_dec(v_v_372_);
lean_dec(v_mvarId_371_);
v___x_379_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3);
v___x_380_ = l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0(v___x_379_, v_a_373_, v_a_374_, v_a_375_, v_a_376_);
return v___x_380_;
}
else
{
lean_object* v___x_381_; 
v___x_381_ = l_Lean_Meta_mkFreshLevelMVar(v_a_373_, v_a_374_, v_a_375_, v_a_376_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_object* v_toCold_382_; lean_object* v_options_383_; lean_object* v_a_384_; lean_object* v_inheritedTraceOptions_385_; uint8_t v_hasTrace_386_; lean_object* v___x_387_; 
v_toCold_382_ = lean_ctor_get(v_a_375_, 0);
v_options_383_ = lean_ctor_get(v_toCold_382_, 2);
v_a_384_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_a_384_);
lean_dec_ref_known(v___x_381_, 1);
v_inheritedTraceOptions_385_ = lean_ctor_get(v_toCold_382_, 11);
v_hasTrace_386_ = lean_ctor_get_uint8(v_options_383_, sizeof(void*)*1);
v___x_387_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(v_mvarId_371_, v_v_372_, v_a_384_);
if (v_hasTrace_386_ == 0)
{
lean_object* v___x_388_; 
v___x_388_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_371_, v___x_387_, v_a_374_);
return v___x_388_;
}
else
{
lean_object* v___x_389_; lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_389_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7));
v___x_390_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10);
v___x_391_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_385_, v_options_383_, v___x_390_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; 
v___x_392_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_371_, v___x_387_, v_a_374_);
return v___x_392_;
}
else
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_393_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__12, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__12_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__12);
lean_inc(v_mvarId_371_);
v___x_394_ = l_Lean_mkLevelMVar(v_mvarId_371_);
v___x_395_ = l_Lean_MessageData_ofLevel(v___x_394_);
v___x_396_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_396_, 0, v___x_393_);
lean_ctor_set(v___x_396_, 1, v___x_395_);
v___x_397_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14);
v___x_398_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_398_, 0, v___x_396_);
lean_ctor_set(v___x_398_, 1, v___x_397_);
lean_inc(v___x_387_);
v___x_399_ = l_Lean_MessageData_ofLevel(v___x_387_);
v___x_400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_398_);
lean_ctor_set(v___x_400_, 1, v___x_399_);
v___x_401_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v___x_389_, v___x_400_, v_a_373_, v_a_374_, v_a_375_, v_a_376_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v___x_402_; 
lean_dec_ref_known(v___x_401_, 1);
v___x_402_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_371_, v___x_387_, v_a_374_);
return v___x_402_;
}
else
{
lean_dec(v___x_387_);
lean_dec(v_mvarId_371_);
return v___x_401_;
}
}
}
}
else
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_410_; 
lean_dec(v_v_372_);
lean_dec(v_mvarId_371_);
v_a_403_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_410_ == 0)
{
v___x_405_ = v___x_381_;
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_381_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_408_; 
if (v_isShared_406_ == 0)
{
v___x_408_ = v___x_405_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_a_403_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___boxed(lean_object* v_mvarId_411_, lean_object* v_v_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax(v_mvarId_411_, v_v_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_);
lean_dec(v_a_416_);
lean_dec_ref(v_a_415_);
lean_dec(v_a_414_);
lean_dec_ref(v_a_413_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1(lean_object* v_mvarId_419_, lean_object* v_val_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_419_, v_val_420_, v___y_422_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___boxed(lean_object* v_mvarId_427_, lean_object* v_val_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1(v_mvarId_427_, v_val_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_);
lean_dec(v___y_432_);
lean_dec_ref(v___y_431_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1(lean_object* v_00_u03b2_435_, lean_object* v_x_436_, lean_object* v_x_437_, lean_object* v_x_438_){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = l_Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1___redArg(v_x_436_, v_x_437_, v_x_438_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_440_, lean_object* v_x_441_, size_t v_x_442_, size_t v_x_443_, lean_object* v_x_444_, lean_object* v_x_445_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg(v_x_441_, v_x_442_, v_x_443_, v_x_444_, v_x_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_447_, lean_object* v_x_448_, lean_object* v_x_449_, lean_object* v_x_450_, lean_object* v_x_451_, lean_object* v_x_452_){
_start:
{
size_t v_x_3319__boxed_453_; size_t v_x_3320__boxed_454_; lean_object* v_res_455_; 
v_x_3319__boxed_453_ = lean_unbox_usize(v_x_449_);
lean_dec(v_x_449_);
v_x_3320__boxed_454_ = lean_unbox_usize(v_x_450_);
lean_dec(v_x_450_);
v_res_455_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2(v_00_u03b2_447_, v_x_448_, v_x_3319__boxed_453_, v_x_3320__boxed_454_, v_x_451_, v_x_452_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_456_, lean_object* v_n_457_, lean_object* v_k_458_, lean_object* v_v_459_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5___redArg(v_n_457_, v_k_458_, v_v_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6(lean_object* v_00_u03b2_461_, size_t v_depth_462_, lean_object* v_keys_463_, lean_object* v_vals_464_, lean_object* v_heq_465_, lean_object* v_i_466_, lean_object* v_entries_467_){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___redArg(v_depth_462_, v_keys_463_, v_vals_464_, v_i_466_, v_entries_467_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___boxed(lean_object* v_00_u03b2_469_, lean_object* v_depth_470_, lean_object* v_keys_471_, lean_object* v_vals_472_, lean_object* v_heq_473_, lean_object* v_i_474_, lean_object* v_entries_475_){
_start:
{
size_t v_depth_boxed_476_; lean_object* v_res_477_; 
v_depth_boxed_476_ = lean_unbox_usize(v_depth_470_);
lean_dec(v_depth_470_);
v_res_477_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6(v_00_u03b2_469_, v_depth_boxed_476_, v_keys_471_, v_vals_472_, v_heq_473_, v_i_474_, v_entries_475_);
lean_dec_ref(v_vals_472_);
lean_dec_ref(v_keys_471_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5_spec__6(lean_object* v_00_u03b2_478_, lean_object* v_x_479_, lean_object* v_x_480_, lean_object* v_x_481_, lean_object* v_x_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(v_x_479_, v_x_480_, v_x_481_, v_x_482_);
return v___x_483_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__1(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__0));
v___x_486_ = l_Lean_stringToMessageData(v___x_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve(lean_object* v_u_487_, lean_object* v_v_x27_488_, lean_object* v_mvarId_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_){
_start:
{
uint8_t v___x_495_; lean_object* v___y_497_; 
v___x_495_ = lean_level_eq(v_u_487_, v_v_x27_488_);
if (v___x_495_ == 0)
{
lean_object* v___x_508_; lean_object* v___x_509_; 
lean_dec(v_mvarId_489_);
lean_dec(v_u_487_);
v___x_508_ = lean_box(v___x_495_);
v___x_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
return v___x_509_;
}
else
{
lean_object* v_toCold_510_; lean_object* v_options_511_; uint8_t v_hasTrace_512_; 
v_toCold_510_ = lean_ctor_get(v_a_492_, 0);
v_options_511_ = lean_ctor_get(v_toCold_510_, 2);
v_hasTrace_512_ = lean_ctor_get_uint8(v_options_511_, sizeof(void*)*1);
if (v_hasTrace_512_ == 0)
{
v___y_497_ = v_a_491_;
goto v___jp_496_;
}
else
{
lean_object* v_inheritedTraceOptions_513_; lean_object* v_cls_514_; lean_object* v___x_515_; uint8_t v___x_516_; 
v_inheritedTraceOptions_513_ = lean_ctor_get(v_toCold_510_, 11);
v_cls_514_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7));
v___x_515_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10);
v___x_516_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_513_, v_options_511_, v___x_515_);
if (v___x_516_ == 0)
{
v___y_497_ = v_a_491_;
goto v___jp_496_;
}
else
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_517_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__1, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__1_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__1);
lean_inc(v_mvarId_489_);
v___x_518_ = l_Lean_mkLevelMVar(v_mvarId_489_);
v___x_519_ = l_Lean_MessageData_ofLevel(v___x_518_);
v___x_520_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_520_, 0, v___x_517_);
lean_ctor_set(v___x_520_, 1, v___x_519_);
v___x_521_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14);
v___x_522_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_522_, 0, v___x_520_);
lean_ctor_set(v___x_522_, 1, v___x_521_);
lean_inc(v_u_487_);
v___x_523_ = l_Lean_MessageData_ofLevel(v_u_487_);
v___x_524_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_524_, 0, v___x_522_);
lean_ctor_set(v___x_524_, 1, v___x_523_);
v___x_525_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v_cls_514_, v___x_524_, v_a_490_, v_a_491_, v_a_492_, v_a_493_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_dec_ref_known(v___x_525_, 1);
v___y_497_ = v_a_491_;
goto v___jp_496_;
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
lean_dec(v_mvarId_489_);
lean_dec(v_u_487_);
v_a_526_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_525_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_525_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
}
}
v___jp_496_:
{
lean_object* v___x_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_506_; 
v___x_498_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_489_, v_u_487_, v___y_497_);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_506_ == 0)
{
lean_object* v_unused_507_; 
v_unused_507_ = lean_ctor_get(v___x_498_, 0);
lean_dec(v_unused_507_);
v___x_500_ = v___x_498_;
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
else
{
lean_dec(v___x_498_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_502_; lean_object* v___x_504_; 
v___x_502_ = lean_box(v___x_495_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 0, v___x_502_);
v___x_504_ = v___x_500_;
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
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___boxed(lean_object* v_u_534_, lean_object* v_v_x27_535_, lean_object* v_mvarId_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve(v_u_534_, v_v_x27_535_, v_mvarId_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_);
lean_dec(v_a_540_);
lean_dec_ref(v_a_539_);
lean_dec(v_a_538_);
lean_dec_ref(v_a_537_);
lean_dec(v_v_x27_535_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax(lean_object* v_u_543_, lean_object* v_v_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_){
_start:
{
if (lean_obj_tag(v_v_544_) == 2)
{
lean_object* v_a_554_; 
v_a_554_ = lean_ctor_get(v_v_544_, 1);
lean_inc(v_a_554_);
if (lean_obj_tag(v_a_554_) == 5)
{
lean_object* v_a_555_; lean_object* v_a_556_; lean_object* v___x_557_; 
v_a_555_ = lean_ctor_get(v_v_544_, 0);
lean_inc(v_a_555_);
lean_dec_ref_known(v_v_544_, 2);
v_a_556_ = lean_ctor_get(v_a_554_, 0);
lean_inc(v_a_556_);
lean_dec_ref_known(v_a_554_, 1);
v___x_557_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve(v_u_543_, v_a_555_, v_a_556_, v_a_545_, v_a_546_, v_a_547_, v_a_548_);
lean_dec(v_a_555_);
return v___x_557_;
}
else
{
lean_object* v_a_558_; 
v_a_558_ = lean_ctor_get(v_v_544_, 0);
lean_inc(v_a_558_);
lean_dec_ref_known(v_v_544_, 2);
if (lean_obj_tag(v_a_558_) == 5)
{
lean_object* v_a_559_; lean_object* v___x_560_; 
v_a_559_ = lean_ctor_get(v_a_558_, 0);
lean_inc(v_a_559_);
lean_dec_ref_known(v_a_558_, 1);
v___x_560_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve(v_u_543_, v_a_554_, v_a_559_, v_a_545_, v_a_546_, v_a_547_, v_a_548_);
lean_dec(v_a_554_);
return v___x_560_;
}
else
{
lean_dec(v_a_558_);
lean_dec(v_a_554_);
lean_dec(v_u_543_);
goto v___jp_550_;
}
}
}
else
{
lean_dec(v_v_544_);
lean_dec(v_u_543_);
goto v___jp_550_;
}
v___jp_550_:
{
uint8_t v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_551_ = 0;
v___x_552_ = lean_box(v___x_551_);
v___x_553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
return v___x_553_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax___boxed(lean_object* v_u_561_, lean_object* v_v_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax(v_u_561_, v_v_562_, v_a_563_, v_a_564_, v_a_565_, v_a_566_);
lean_dec(v_a_566_);
lean_dec_ref(v_a_565_);
lean_dec(v_a_564_);
lean_dec_ref(v_a_563_);
return v_res_568_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1(void){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_570_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__0));
v___x_571_ = l_Lean_stringToMessageData(v___x_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve(lean_object* v_u_u2081_572_, lean_object* v_u_u2082_573_, lean_object* v_v_x27_574_, lean_object* v_mvarId_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_){
_start:
{
uint8_t v___x_581_; lean_object* v___y_583_; 
v___x_581_ = lean_level_eq(v_u_u2081_572_, v_v_x27_574_);
if (v___x_581_ == 0)
{
uint8_t v___x_594_; lean_object* v___y_596_; 
v___x_594_ = lean_level_eq(v_u_u2082_573_, v_v_x27_574_);
lean_dec(v_u_u2082_573_);
if (v___x_594_ == 0)
{
lean_object* v___x_607_; lean_object* v___x_608_; 
lean_dec(v_mvarId_575_);
lean_dec(v_u_u2081_572_);
v___x_607_ = lean_box(v___x_594_);
v___x_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_608_, 0, v___x_607_);
return v___x_608_;
}
else
{
lean_object* v_toCold_609_; lean_object* v_options_610_; uint8_t v_hasTrace_611_; 
v_toCold_609_ = lean_ctor_get(v_a_578_, 0);
v_options_610_ = lean_ctor_get(v_toCold_609_, 2);
v_hasTrace_611_ = lean_ctor_get_uint8(v_options_610_, sizeof(void*)*1);
if (v_hasTrace_611_ == 0)
{
v___y_596_ = v_a_577_;
goto v___jp_595_;
}
else
{
lean_object* v_inheritedTraceOptions_612_; lean_object* v_cls_613_; lean_object* v___x_614_; uint8_t v___x_615_; 
v_inheritedTraceOptions_612_ = lean_ctor_get(v_toCold_609_, 11);
v_cls_613_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7));
v___x_614_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10);
v___x_615_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_612_, v_options_610_, v___x_614_);
if (v___x_615_ == 0)
{
v___y_596_ = v_a_577_;
goto v___jp_595_;
}
else
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_616_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1);
lean_inc(v_mvarId_575_);
v___x_617_ = l_Lean_mkLevelMVar(v_mvarId_575_);
v___x_618_ = l_Lean_MessageData_ofLevel(v___x_617_);
v___x_619_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_616_);
lean_ctor_set(v___x_619_, 1, v___x_618_);
v___x_620_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14);
v___x_621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_619_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
lean_inc(v_u_u2081_572_);
v___x_622_ = l_Lean_MessageData_ofLevel(v_u_u2081_572_);
v___x_623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_623_, 0, v___x_621_);
lean_ctor_set(v___x_623_, 1, v___x_622_);
v___x_624_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v_cls_613_, v___x_623_, v_a_576_, v_a_577_, v_a_578_, v_a_579_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_dec_ref_known(v___x_624_, 1);
v___y_596_ = v_a_577_;
goto v___jp_595_;
}
else
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
lean_dec(v_mvarId_575_);
lean_dec(v_u_u2081_572_);
v_a_625_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_624_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_624_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
}
}
v___jp_595_:
{
lean_object* v___x_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_605_; 
v___x_597_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_575_, v_u_u2081_572_, v___y_596_);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_605_ == 0)
{
lean_object* v_unused_606_; 
v_unused_606_ = lean_ctor_get(v___x_597_, 0);
lean_dec(v_unused_606_);
v___x_599_ = v___x_597_;
v_isShared_600_ = v_isSharedCheck_605_;
goto v_resetjp_598_;
}
else
{
lean_dec(v___x_597_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_605_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_601_; lean_object* v___x_603_; 
v___x_601_ = lean_box(v___x_594_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 0, v___x_601_);
v___x_603_ = v___x_599_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_601_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
}
else
{
lean_object* v_toCold_633_; lean_object* v_options_634_; uint8_t v_hasTrace_635_; 
lean_dec(v_u_u2081_572_);
v_toCold_633_ = lean_ctor_get(v_a_578_, 0);
v_options_634_ = lean_ctor_get(v_toCold_633_, 2);
v_hasTrace_635_ = lean_ctor_get_uint8(v_options_634_, sizeof(void*)*1);
if (v_hasTrace_635_ == 0)
{
v___y_583_ = v_a_577_;
goto v___jp_582_;
}
else
{
lean_object* v_inheritedTraceOptions_636_; lean_object* v_cls_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
v_inheritedTraceOptions_636_ = lean_ctor_get(v_toCold_633_, 11);
v_cls_637_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7));
v___x_638_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10);
v___x_639_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_636_, v_options_634_, v___x_638_);
if (v___x_639_ == 0)
{
v___y_583_ = v_a_577_;
goto v___jp_582_;
}
else
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_640_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1);
lean_inc(v_mvarId_575_);
v___x_641_ = l_Lean_mkLevelMVar(v_mvarId_575_);
v___x_642_ = l_Lean_MessageData_ofLevel(v___x_641_);
v___x_643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_640_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
v___x_644_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14);
v___x_645_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_643_);
lean_ctor_set(v___x_645_, 1, v___x_644_);
lean_inc(v_u_u2082_573_);
v___x_646_ = l_Lean_MessageData_ofLevel(v_u_u2082_573_);
v___x_647_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_647_, 0, v___x_645_);
lean_ctor_set(v___x_647_, 1, v___x_646_);
v___x_648_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v_cls_637_, v___x_647_, v_a_576_, v_a_577_, v_a_578_, v_a_579_);
if (lean_obj_tag(v___x_648_) == 0)
{
lean_dec_ref_known(v___x_648_, 1);
v___y_583_ = v_a_577_;
goto v___jp_582_;
}
else
{
lean_object* v_a_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_656_; 
lean_dec(v_mvarId_575_);
lean_dec(v_u_u2082_573_);
v_a_649_ = lean_ctor_get(v___x_648_, 0);
v_isSharedCheck_656_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_656_ == 0)
{
v___x_651_ = v___x_648_;
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_a_649_);
lean_dec(v___x_648_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_654_; 
if (v_isShared_652_ == 0)
{
v___x_654_ = v___x_651_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_a_649_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
}
}
}
}
v___jp_582_:
{
lean_object* v___x_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_592_; 
v___x_584_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_575_, v_u_u2082_573_, v___y_583_);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_592_ == 0)
{
lean_object* v_unused_593_; 
v_unused_593_ = lean_ctor_get(v___x_584_, 0);
lean_dec(v_unused_593_);
v___x_586_ = v___x_584_;
v_isShared_587_ = v_isSharedCheck_592_;
goto v_resetjp_585_;
}
else
{
lean_dec(v___x_584_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_592_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_588_; lean_object* v___x_590_; 
v___x_588_ = lean_box(v___x_581_);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 0, v___x_588_);
v___x_590_ = v___x_586_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v___x_588_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___boxed(lean_object* v_u_u2081_657_, lean_object* v_u_u2082_658_, lean_object* v_v_x27_659_, lean_object* v_mvarId_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve(v_u_u2081_657_, v_u_u2082_658_, v_v_x27_659_, v_mvarId_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_);
lean_dec(v_a_664_);
lean_dec_ref(v_a_663_);
lean_dec(v_a_662_);
lean_dec_ref(v_a_661_);
lean_dec(v_v_x27_659_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax(lean_object* v_u_667_, lean_object* v_v_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_){
_start:
{
if (lean_obj_tag(v_u_667_) == 2)
{
if (lean_obj_tag(v_v_668_) == 2)
{
lean_object* v_a_678_; 
v_a_678_ = lean_ctor_get(v_v_668_, 1);
lean_inc(v_a_678_);
if (lean_obj_tag(v_a_678_) == 5)
{
lean_object* v_a_679_; lean_object* v_a_680_; lean_object* v_a_681_; lean_object* v_a_682_; lean_object* v___x_683_; 
v_a_679_ = lean_ctor_get(v_u_667_, 0);
lean_inc(v_a_679_);
v_a_680_ = lean_ctor_get(v_u_667_, 1);
lean_inc(v_a_680_);
lean_dec_ref_known(v_u_667_, 2);
v_a_681_ = lean_ctor_get(v_v_668_, 0);
lean_inc(v_a_681_);
lean_dec_ref_known(v_v_668_, 2);
v_a_682_ = lean_ctor_get(v_a_678_, 0);
lean_inc(v_a_682_);
lean_dec_ref_known(v_a_678_, 1);
v___x_683_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve(v_a_679_, v_a_680_, v_a_681_, v_a_682_, v_a_669_, v_a_670_, v_a_671_, v_a_672_);
lean_dec(v_a_681_);
return v___x_683_;
}
else
{
lean_object* v_a_684_; 
v_a_684_ = lean_ctor_get(v_v_668_, 0);
lean_inc(v_a_684_);
lean_dec_ref_known(v_v_668_, 2);
if (lean_obj_tag(v_a_684_) == 5)
{
lean_object* v_a_685_; lean_object* v_a_686_; lean_object* v_a_687_; lean_object* v___x_688_; 
v_a_685_ = lean_ctor_get(v_u_667_, 0);
lean_inc(v_a_685_);
v_a_686_ = lean_ctor_get(v_u_667_, 1);
lean_inc(v_a_686_);
lean_dec_ref_known(v_u_667_, 2);
v_a_687_ = lean_ctor_get(v_a_684_, 0);
lean_inc(v_a_687_);
lean_dec_ref_known(v_a_684_, 1);
v___x_688_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve(v_a_685_, v_a_686_, v_a_678_, v_a_687_, v_a_669_, v_a_670_, v_a_671_, v_a_672_);
lean_dec(v_a_678_);
return v___x_688_;
}
else
{
lean_dec(v_a_684_);
lean_dec(v_a_678_);
lean_dec_ref_known(v_u_667_, 2);
goto v___jp_674_;
}
}
}
else
{
lean_dec_ref_known(v_u_667_, 2);
lean_dec(v_v_668_);
goto v___jp_674_;
}
}
else
{
lean_dec(v_v_668_);
lean_dec(v_u_667_);
goto v___jp_674_;
}
v___jp_674_:
{
uint8_t v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_675_ = 0;
v___x_676_ = lean_box(v___x_675_);
v___x_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_677_, 0, v___x_676_);
return v___x_677_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax___boxed(lean_object* v_u_689_, lean_object* v_v_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax(v_u_689_, v_v_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
lean_dec(v_a_694_);
lean_dec_ref(v_a_693_);
lean_dec(v_a_692_);
lean_dec_ref(v_a_691_);
return v_res_696_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2(void){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_702_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1));
v___x_703_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9));
v___x_704_ = l_Lean_Name_append(v___x_703_, v___x_702_);
return v___x_704_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4(void){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__3));
v___x_707_ = l_Lean_stringToMessageData(v___x_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(lean_object* v_lhs_708_, lean_object* v_rhs_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_){
_start:
{
lean_object* v_toCold_715_; lean_object* v_ref_716_; lean_object* v___y_718_; lean_object* v_options_738_; uint8_t v_hasTrace_739_; 
v_toCold_715_ = lean_ctor_get(v_a_712_, 0);
v_ref_716_ = lean_ctor_get(v_a_712_, 2);
v_options_738_ = lean_ctor_get(v_toCold_715_, 2);
v_hasTrace_739_ = lean_ctor_get_uint8(v_options_738_, sizeof(void*)*1);
if (v_hasTrace_739_ == 0)
{
v___y_718_ = v_a_711_;
goto v___jp_717_;
}
else
{
lean_object* v_inheritedTraceOptions_740_; lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v___x_743_; 
v_inheritedTraceOptions_740_ = lean_ctor_get(v_toCold_715_, 11);
v___x_741_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1));
v___x_742_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2);
v___x_743_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_740_, v_options_738_, v___x_742_);
if (v___x_743_ == 0)
{
v___y_718_ = v_a_711_;
goto v___jp_717_;
}
else
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
lean_inc(v_lhs_708_);
v___x_744_ = l_Lean_MessageData_ofLevel(v_lhs_708_);
v___x_745_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4);
v___x_746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_744_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
lean_inc(v_rhs_709_);
v___x_747_ = l_Lean_MessageData_ofLevel(v_rhs_709_);
v___x_748_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_748_, 0, v___x_746_);
lean_ctor_set(v___x_748_, 1, v___x_747_);
v___x_749_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v___x_741_, v___x_748_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_dec_ref_known(v___x_749_, 1);
v___y_718_ = v_a_711_;
goto v___jp_717_;
}
else
{
lean_dec(v_rhs_709_);
lean_dec(v_lhs_708_);
return v___x_749_;
}
}
}
v___jp_717_:
{
lean_object* v___x_719_; lean_object* v_mctx_720_; lean_object* v_cache_721_; lean_object* v_zetaDeltaFVarIds_722_; lean_object* v_postponed_723_; lean_object* v_diag_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_737_; 
v___x_719_ = lean_st_ref_take(v___y_718_);
v_mctx_720_ = lean_ctor_get(v___x_719_, 0);
v_cache_721_ = lean_ctor_get(v___x_719_, 1);
v_zetaDeltaFVarIds_722_ = lean_ctor_get(v___x_719_, 2);
v_postponed_723_ = lean_ctor_get(v___x_719_, 3);
v_diag_724_ = lean_ctor_get(v___x_719_, 4);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_737_ == 0)
{
v___x_726_ = v___x_719_;
v_isShared_727_ = v_isSharedCheck_737_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_diag_724_);
lean_inc(v_postponed_723_);
lean_inc(v_zetaDeltaFVarIds_722_);
lean_inc(v_cache_721_);
lean_inc(v_mctx_720_);
lean_dec(v___x_719_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_737_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v_defEqCtx_x3f_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_733_; 
v_defEqCtx_x3f_728_ = lean_ctor_get(v_a_710_, 4);
v___x_729_ = lean_box(0);
lean_inc(v_defEqCtx_x3f_728_);
lean_inc(v_ref_716_);
v___x_730_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_730_, 0, v_ref_716_);
lean_ctor_set(v___x_730_, 1, v_lhs_708_);
lean_ctor_set(v___x_730_, 2, v_rhs_709_);
lean_ctor_set(v___x_730_, 3, v_defEqCtx_x3f_728_);
v___x_731_ = l_Lean_PersistentArray_push___redArg(v_postponed_723_, v___x_730_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 3, v___x_731_);
v___x_733_ = v___x_726_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_mctx_720_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v_cache_721_);
lean_ctor_set(v_reuseFailAlloc_736_, 2, v_zetaDeltaFVarIds_722_);
lean_ctor_set(v_reuseFailAlloc_736_, 3, v___x_731_);
lean_ctor_set(v_reuseFailAlloc_736_, 4, v_diag_724_);
v___x_733_ = v_reuseFailAlloc_736_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = lean_st_ref_put(v___y_718_, v___x_733_);
v___x_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_735_, 0, v___x_729_);
return v___x_735_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___boxed(lean_object* v_lhs_750_, lean_object* v_rhs_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(v_lhs_750_, v_rhs_751_, v_a_752_, v_a_753_, v_a_754_, v_a_755_);
lean_dec(v_a_755_);
lean_dec_ref(v_a_754_);
lean_dec(v_a_753_);
lean_dec_ref(v_a_752_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth(lean_object* v_v_758_, lean_object* v_mvarId_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
if (lean_obj_tag(v_v_758_) == 5)
{
lean_object* v_a_765_; lean_object* v___x_766_; 
v_a_765_ = lean_ctor_get(v_v_758_, 0);
lean_inc(v_a_765_);
lean_dec_ref_known(v_v_758_, 1);
v___x_766_ = l_Lean_LMVarId_getLevel(v_a_765_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_768_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_767_);
lean_dec_ref_known(v___x_766_, 1);
v___x_768_ = l_Lean_LMVarId_getLevel(v_mvarId_759_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_778_; 
v_a_769_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_778_ == 0)
{
v___x_771_ = v___x_768_;
v_isShared_772_ = v_isSharedCheck_778_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_768_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_778_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
uint8_t v___x_773_; lean_object* v___x_774_; lean_object* v___x_776_; 
v___x_773_ = lean_nat_dec_lt(v_a_769_, v_a_767_);
lean_dec(v_a_767_);
lean_dec(v_a_769_);
v___x_774_ = lean_box(v___x_773_);
if (v_isShared_772_ == 0)
{
lean_ctor_set(v___x_771_, 0, v___x_774_);
v___x_776_ = v___x_771_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_774_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
lean_dec(v_a_767_);
v_a_779_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_768_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_768_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
else
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_794_; 
lean_dec(v_mvarId_759_);
v_a_787_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_794_ == 0)
{
v___x_789_ = v___x_766_;
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_766_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_792_; 
if (v_isShared_790_ == 0)
{
v___x_792_ = v___x_789_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_a_787_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
else
{
uint8_t v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
lean_dec(v_mvarId_759_);
lean_dec(v_v_758_);
v___x_795_ = 0;
v___x_796_ = lean_box(v___x_795_);
v___x_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
return v___x_797_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth___boxed(lean_object* v_v_798_, lean_object* v_mvarId_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth(v_v_798_, v_mvarId_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_);
lean_dec(v_a_803_);
lean_dec_ref(v_a_802_);
lean_dec(v_a_801_);
lean_dec_ref(v_a_800_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(lean_object* v_u_806_, lean_object* v_v_807_, lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_){
_start:
{
uint8_t v_a_818_; lean_object* v___y_827_; lean_object* v___y_841_; lean_object* v___y_863_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___y_866_; 
switch(lean_obj_tag(v_u_806_))
{
case 5:
{
lean_object* v_a_894_; lean_object* v___x_895_; 
v_a_894_ = lean_ctor_get(v_u_806_, 0);
lean_inc(v_a_894_);
v___x_895_ = l_Lean_LMVarId_isReadOnly(v_a_894_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v_a_896_; uint8_t v___x_897_; 
v_a_896_ = lean_ctor_get(v___x_895_, 0);
lean_inc(v_a_896_);
lean_dec_ref_known(v___x_895_, 1);
v___x_897_ = lean_unbox(v_a_896_);
lean_dec(v_a_896_);
if (v___x_897_ == 0)
{
lean_object* v___x_898_; 
lean_inc(v_a_894_);
lean_inc(v_v_807_);
v___x_898_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth(v_v_807_, v_a_894_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; uint8_t v___x_900_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
lean_dec_ref_known(v___x_898_, 1);
v___x_900_ = lean_unbox(v_a_899_);
lean_dec(v_a_899_);
if (v___x_900_ == 0)
{
uint8_t v___x_901_; 
v___x_901_ = l_Lean_Level_occurs(v_u_806_, v_v_807_);
if (v___x_901_ == 0)
{
lean_object* v_toCold_902_; lean_object* v_options_903_; uint8_t v_hasTrace_904_; 
v_toCold_902_ = lean_ctor_get(v_a_810_, 0);
v_options_903_ = lean_ctor_get(v_toCold_902_, 2);
v_hasTrace_904_ = lean_ctor_get_uint8(v_options_903_, sizeof(void*)*1);
if (v_hasTrace_904_ == 0)
{
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec_ref(v_a_808_);
v___y_827_ = v_a_809_;
goto v___jp_826_;
}
else
{
lean_object* v_inheritedTraceOptions_905_; lean_object* v___x_906_; lean_object* v___x_907_; uint8_t v___x_908_; 
v_inheritedTraceOptions_905_ = lean_ctor_get(v_toCold_902_, 11);
v___x_906_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7));
v___x_907_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10);
v___x_908_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_905_, v_options_903_, v___x_907_);
if (v___x_908_ == 0)
{
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec_ref(v_a_808_);
v___y_827_ = v_a_809_;
goto v___jp_826_;
}
else
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
lean_inc_ref(v_u_806_);
v___x_909_ = l_Lean_MessageData_ofLevel(v_u_806_);
v___x_910_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14);
v___x_911_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_909_);
lean_ctor_set(v___x_911_, 1, v___x_910_);
lean_inc(v_v_807_);
v___x_912_ = l_Lean_MessageData_ofLevel(v_v_807_);
v___x_913_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_911_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v___x_914_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v___x_906_, v___x_913_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec_ref(v_a_808_);
if (lean_obj_tag(v___x_914_) == 0)
{
lean_dec_ref_known(v___x_914_, 1);
v___y_827_ = v_a_809_;
goto v___jp_826_;
}
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
lean_dec_ref_known(v_u_806_, 1);
lean_dec(v_a_809_);
lean_dec(v_v_807_);
v_a_915_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_914_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_914_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_920_; 
if (v_isShared_918_ == 0)
{
v___x_920_ = v___x_917_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_a_915_);
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
}
else
{
uint8_t v___x_923_; 
v___x_923_ = l_Lean_Level_isMax(v_v_807_);
if (v___x_923_ == 0)
{
lean_dec_ref_known(v_u_806_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_v_807_);
goto v___jp_822_;
}
else
{
uint8_t v___x_924_; 
v___x_924_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(v_u_806_, v_v_807_);
if (v___x_924_ == 0)
{
lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_925_ = l_Lean_Level_mvarId_x21(v_u_806_);
lean_dec_ref_known(v_u_806_, 1);
v___x_926_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax(v___x_925_, v_v_807_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
if (lean_obj_tag(v___x_926_) == 0)
{
lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_935_; 
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_935_ == 0)
{
lean_object* v_unused_936_; 
v_unused_936_ = lean_ctor_get(v___x_926_, 0);
lean_dec(v_unused_936_);
v___x_928_ = v___x_926_;
v_isShared_929_ = v_isSharedCheck_935_;
goto v_resetjp_927_;
}
else
{
lean_dec(v___x_926_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_935_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
uint8_t v___x_930_; lean_object* v___x_931_; lean_object* v___x_933_; 
v___x_930_ = 1;
v___x_931_ = lean_box(v___x_930_);
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 0, v___x_931_);
v___x_933_ = v___x_928_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_931_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
else
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
v_a_937_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_944_ == 0)
{
v___x_939_ = v___x_926_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_926_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_a_937_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
else
{
lean_dec_ref_known(v_u_806_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_v_807_);
goto v___jp_822_;
}
}
}
}
else
{
lean_object* v_toCold_945_; lean_object* v_options_946_; uint8_t v_hasTrace_947_; 
v_toCold_945_ = lean_ctor_get(v_a_810_, 0);
v_options_946_ = lean_ctor_get(v_toCold_945_, 2);
v_hasTrace_947_ = lean_ctor_get_uint8(v_options_946_, sizeof(void*)*1);
if (v_hasTrace_947_ == 0)
{
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec_ref(v_a_808_);
v___y_841_ = v_a_809_;
goto v___jp_840_;
}
else
{
lean_object* v_inheritedTraceOptions_948_; lean_object* v___x_949_; lean_object* v___x_950_; uint8_t v___x_951_; 
v_inheritedTraceOptions_948_ = lean_ctor_get(v_toCold_945_, 11);
v___x_949_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7));
v___x_950_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10);
v___x_951_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_948_, v_options_946_, v___x_950_);
if (v___x_951_ == 0)
{
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec_ref(v_a_808_);
v___y_841_ = v_a_809_;
goto v___jp_840_;
}
else
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
lean_inc(v_v_807_);
v___x_952_ = l_Lean_MessageData_ofLevel(v_v_807_);
v___x_953_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14);
v___x_954_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_954_, 0, v___x_952_);
lean_ctor_set(v___x_954_, 1, v___x_953_);
lean_inc_ref(v_u_806_);
v___x_955_ = l_Lean_MessageData_ofLevel(v_u_806_);
v___x_956_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_954_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
v___x_957_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v___x_949_, v___x_956_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec_ref(v_a_808_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_dec_ref_known(v___x_957_, 1);
v___y_841_ = v_a_809_;
goto v___jp_840_;
}
else
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
lean_dec_ref_known(v_u_806_, 1);
lean_dec(v_a_809_);
lean_dec(v_v_807_);
v_a_958_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_957_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_957_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_a_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
lean_dec_ref_known(v_u_806_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_v_807_);
v_a_966_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_898_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_898_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_a_966_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
}
else
{
lean_dec_ref_known(v_u_806_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_v_807_);
goto v___jp_822_;
}
}
else
{
lean_object* v_a_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_981_; 
lean_dec_ref_known(v_u_806_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_v_807_);
v_a_974_ = lean_ctor_get(v___x_895_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_895_);
if (v_isSharedCheck_981_ == 0)
{
v___x_976_ = v___x_895_;
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_a_974_);
lean_dec(v___x_895_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_979_; 
if (v_isShared_977_ == 0)
{
v___x_979_ = v___x_976_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_a_974_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
}
case 0:
{
switch(lean_obj_tag(v_v_807_))
{
case 5:
{
lean_dec_ref_known(v_v_807_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
goto v___jp_890_;
}
case 2:
{
lean_object* v_a_982_; lean_object* v_a_983_; lean_object* v___x_984_; 
v_a_982_ = lean_ctor_get(v_v_807_, 0);
lean_inc(v_a_982_);
v_a_983_ = lean_ctor_get(v_v_807_, 1);
lean_inc(v_a_983_);
lean_dec_ref_known(v_v_807_, 2);
lean_inc(v_a_811_);
lean_inc_ref(v_a_810_);
lean_inc(v_a_809_);
lean_inc_ref(v_a_808_);
v___x_984_ = lean_is_level_def_eq(v_u_806_, v_a_982_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; uint8_t v___x_986_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_985_);
lean_dec_ref_known(v___x_984_, 1);
v___x_986_ = lean_unbox(v_a_985_);
if (v___x_986_ == 0)
{
uint8_t v___x_987_; 
lean_dec(v_a_983_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
v___x_987_ = lean_unbox(v_a_985_);
lean_dec(v_a_985_);
v_a_818_ = v___x_987_;
goto v___jp_817_;
}
else
{
lean_object* v___x_988_; 
lean_dec(v_a_985_);
v___x_988_ = lean_is_level_def_eq(v_u_806_, v_a_983_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_object* v_a_989_; uint8_t v___x_990_; 
v_a_989_ = lean_ctor_get(v___x_988_, 0);
lean_inc(v_a_989_);
lean_dec_ref_known(v___x_988_, 1);
v___x_990_ = lean_unbox(v_a_989_);
lean_dec(v_a_989_);
v_a_818_ = v___x_990_;
goto v___jp_817_;
}
else
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
v_a_991_ = lean_ctor_get(v___x_988_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_988_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_988_);
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
else
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
lean_dec(v_a_983_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
v_a_999_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1001_ = v___x_984_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_984_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1004_; 
if (v_isShared_1002_ == 0)
{
v___x_1004_ = v___x_1001_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_a_999_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
}
case 3:
{
lean_object* v_a_1007_; lean_object* v___x_1008_; 
v_a_1007_ = lean_ctor_get(v_v_807_, 1);
lean_inc(v_a_1007_);
lean_dec_ref_known(v_v_807_, 2);
v___x_1008_ = lean_is_level_def_eq(v_u_806_, v_a_1007_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1019_; 
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1011_ = v___x_1008_;
v_isShared_1012_ = v_isSharedCheck_1019_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_1008_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1019_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
uint8_t v___x_1013_; uint8_t v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1017_; 
v___x_1013_ = lean_unbox(v_a_1009_);
lean_dec(v_a_1009_);
v___x_1014_ = l_Lean_Bool_toLBool(v___x_1013_);
v___x_1015_ = lean_box(v___x_1014_);
if (v_isShared_1012_ == 0)
{
lean_ctor_set(v___x_1011_, 0, v___x_1015_);
v___x_1017_ = v___x_1011_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v___x_1015_);
v___x_1017_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
return v___x_1017_;
}
}
}
else
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1027_; 
v_a_1020_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1022_ = v___x_1008_;
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1008_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_a_1020_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
}
case 1:
{
uint8_t v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
lean_dec_ref_known(v_v_807_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
v___x_1028_ = 0;
v___x_1029_ = lean_box(v___x_1028_);
v___x_1030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1029_);
return v___x_1030_;
}
default: 
{
v___y_863_ = v_a_808_;
v___y_864_ = v_a_809_;
v___y_865_ = v_a_810_;
v___y_866_ = v_a_811_;
goto v___jp_862_;
}
}
}
case 1:
{
lean_object* v_a_1031_; 
v_a_1031_ = lean_ctor_get(v_u_806_, 0);
lean_inc(v_a_1031_);
lean_dec_ref_known(v_u_806_, 1);
if (lean_obj_tag(v_v_807_) == 5)
{
lean_dec_ref_known(v_v_807_, 1);
lean_dec(v_a_1031_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
goto v___jp_890_;
}
else
{
uint8_t v___x_1064_; 
v___x_1064_ = l_Lean_Level_isParam(v_v_807_);
if (v___x_1064_ == 0)
{
uint8_t v___x_1065_; 
v___x_1065_ = l_Lean_Level_isMVar(v_a_1031_);
if (v___x_1065_ == 0)
{
goto v___jp_1032_;
}
else
{
uint8_t v___x_1066_; 
v___x_1066_ = l_Lean_Level_occurs(v_a_1031_, v_v_807_);
if (v___x_1066_ == 0)
{
goto v___jp_1032_;
}
else
{
lean_dec(v_a_1031_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_v_807_);
goto v___jp_813_;
}
}
}
else
{
uint8_t v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; 
lean_dec(v_a_1031_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_v_807_);
v___x_1067_ = 0;
v___x_1068_ = lean_box(v___x_1067_);
v___x_1069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1068_);
return v___x_1069_;
}
}
v___jp_1032_:
{
lean_object* v___x_1033_; 
v___x_1033_ = l_Lean_Meta_decLevel_x3f(v_v_807_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
if (lean_obj_tag(v___x_1033_) == 0)
{
lean_object* v_a_1034_; 
v_a_1034_ = lean_ctor_get(v___x_1033_, 0);
lean_inc(v_a_1034_);
lean_dec_ref_known(v___x_1033_, 1);
if (lean_obj_tag(v_a_1034_) == 0)
{
lean_dec(v_a_1031_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
goto v___jp_813_;
}
else
{
lean_object* v_val_1035_; lean_object* v___x_1036_; 
v_val_1035_ = lean_ctor_get(v_a_1034_, 0);
lean_inc(v_val_1035_);
lean_dec_ref_known(v_a_1034_, 1);
v___x_1036_ = lean_is_level_def_eq(v_a_1031_, v_val_1035_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
if (lean_obj_tag(v___x_1036_) == 0)
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1047_; 
v_a_1037_ = lean_ctor_get(v___x_1036_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1039_ = v___x_1036_;
v_isShared_1040_ = v_isSharedCheck_1047_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v___x_1036_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1047_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
uint8_t v___x_1041_; uint8_t v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1045_; 
v___x_1041_ = lean_unbox(v_a_1037_);
lean_dec(v_a_1037_);
v___x_1042_ = l_Lean_Bool_toLBool(v___x_1041_);
v___x_1043_ = lean_box(v___x_1042_);
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 0, v___x_1043_);
v___x_1045_ = v___x_1039_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v___x_1043_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
return v___x_1045_;
}
}
}
else
{
lean_object* v_a_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1055_; 
v_a_1048_ = lean_ctor_get(v___x_1036_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1050_ = v___x_1036_;
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_a_1048_);
lean_dec(v___x_1036_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1053_; 
if (v_isShared_1051_ == 0)
{
v___x_1053_ = v___x_1050_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v_a_1048_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
}
}
else
{
lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
lean_dec(v_a_1031_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
v_a_1056_ = lean_ctor_get(v___x_1033_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1033_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1058_ = v___x_1033_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v___x_1033_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1056_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
}
}
default: 
{
if (lean_obj_tag(v_v_807_) == 5)
{
lean_dec_ref_known(v_v_807_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_u_806_);
goto v___jp_890_;
}
else
{
v___y_863_ = v_a_808_;
v___y_864_ = v_a_809_;
v___y_865_ = v_a_810_;
v___y_866_ = v_a_811_;
goto v___jp_862_;
}
}
}
v___jp_813_:
{
uint8_t v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_814_ = 2;
v___x_815_ = lean_box(v___x_814_);
v___x_816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
return v___x_816_;
}
v___jp_817_:
{
uint8_t v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_819_ = l_Lean_Bool_toLBool(v_a_818_);
v___x_820_ = lean_box(v___x_819_);
v___x_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_821_, 0, v___x_820_);
return v___x_821_;
}
v___jp_822_:
{
uint8_t v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_823_ = 2;
v___x_824_ = lean_box(v___x_823_);
v___x_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_825_, 0, v___x_824_);
return v___x_825_;
}
v___jp_826_:
{
lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_838_; 
v___x_828_ = l_Lean_Level_mvarId_x21(v_u_806_);
lean_dec(v_u_806_);
v___x_829_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v___x_828_, v_v_807_, v___y_827_);
lean_dec(v___y_827_);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_838_ == 0)
{
lean_object* v_unused_839_; 
v_unused_839_ = lean_ctor_get(v___x_829_, 0);
lean_dec(v_unused_839_);
v___x_831_ = v___x_829_;
v_isShared_832_ = v_isSharedCheck_838_;
goto v_resetjp_830_;
}
else
{
lean_dec(v___x_829_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_838_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
uint8_t v___x_833_; lean_object* v___x_834_; lean_object* v___x_836_; 
v___x_833_ = 1;
v___x_834_ = lean_box(v___x_833_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 0, v___x_834_);
v___x_836_ = v___x_831_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v___x_834_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
v___jp_840_:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_852_; 
v___x_842_ = l_Lean_Level_mvarId_x21(v_v_807_);
lean_dec(v_v_807_);
v___x_843_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v___x_842_, v_u_806_, v___y_841_);
lean_dec(v___y_841_);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_843_);
if (v_isSharedCheck_852_ == 0)
{
lean_object* v_unused_853_; 
v_unused_853_ = lean_ctor_get(v___x_843_, 0);
lean_dec(v_unused_853_);
v___x_845_ = v___x_843_;
v_isShared_846_ = v_isSharedCheck_852_;
goto v_resetjp_844_;
}
else
{
lean_dec(v___x_843_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_852_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
uint8_t v___x_847_; lean_object* v___x_848_; lean_object* v___x_850_; 
v___x_847_ = 1;
v___x_848_ = lean_box(v___x_847_);
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 0, v___x_848_);
v___x_850_ = v___x_845_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v___x_848_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
v___jp_854_:
{
uint8_t v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_855_ = 1;
v___x_856_ = lean_box(v___x_855_);
v___x_857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_857_, 0, v___x_856_);
return v___x_857_;
}
v___jp_858_:
{
uint8_t v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_859_ = 2;
v___x_860_ = lean_box(v___x_859_);
v___x_861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_861_, 0, v___x_860_);
return v___x_861_;
}
v___jp_862_:
{
uint8_t v_univApprox_867_; 
v_univApprox_867_ = lean_ctor_get_uint8(v___y_863_, sizeof(void*)*7 + 1);
if (v_univApprox_867_ == 0)
{
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v_v_807_);
lean_dec(v_u_806_);
goto v___jp_858_;
}
else
{
lean_object* v___x_868_; 
lean_inc(v_v_807_);
lean_inc(v_u_806_);
v___x_868_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax(v_u_806_, v_v_807_, v___y_863_, v___y_864_, v___y_865_, v___y_866_);
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v_a_869_; uint8_t v___x_870_; 
v_a_869_ = lean_ctor_get(v___x_868_, 0);
lean_inc(v_a_869_);
lean_dec_ref_known(v___x_868_, 1);
v___x_870_ = lean_unbox(v_a_869_);
lean_dec(v_a_869_);
if (v___x_870_ == 0)
{
lean_object* v___x_871_; 
v___x_871_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax(v_u_806_, v_v_807_, v___y_863_, v___y_864_, v___y_865_, v___y_866_);
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
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
goto v___jp_858_;
}
else
{
goto v___jp_854_;
}
}
else
{
lean_object* v_a_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_881_; 
v_a_874_ = lean_ctor_get(v___x_871_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v___x_871_);
if (v_isSharedCheck_881_ == 0)
{
v___x_876_ = v___x_871_;
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_a_874_);
lean_dec(v___x_871_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_879_; 
if (v_isShared_877_ == 0)
{
v___x_879_ = v___x_876_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_a_874_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
return v___x_879_;
}
}
}
}
else
{
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v_v_807_);
lean_dec(v_u_806_);
goto v___jp_854_;
}
}
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v_v_807_);
lean_dec(v_u_806_);
v_a_882_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_868_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_868_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_a_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
}
v___jp_890_:
{
uint8_t v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_891_ = 2;
v___x_892_ = lean_box(v___x_891_);
v___x_893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_893_, 0, v___x_892_);
return v___x_893_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve___boxed(lean_object* v_u_1070_, lean_object* v_v_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(v_u_1070_, v_v_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg(lean_object* v_l_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v___x_1081_; lean_object* v_mctx_1082_; lean_object* v___x_1083_; lean_object* v_fst_1084_; lean_object* v_snd_1085_; lean_object* v___x_1086_; lean_object* v_cache_1087_; lean_object* v_zetaDeltaFVarIds_1088_; lean_object* v_postponed_1089_; lean_object* v_diag_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1099_; 
v___x_1081_ = lean_st_ref_get(v___y_1079_);
v_mctx_1082_ = lean_ctor_get(v___x_1081_, 0);
lean_inc_ref(v_mctx_1082_);
lean_dec(v___x_1081_);
v___x_1083_ = lean_instantiate_level_mvars(v_mctx_1082_, v_l_1078_);
v_fst_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_fst_1084_);
v_snd_1085_ = lean_ctor_get(v___x_1083_, 1);
lean_inc(v_snd_1085_);
lean_dec_ref(v___x_1083_);
v___x_1086_ = lean_st_ref_take(v___y_1079_);
v_cache_1087_ = lean_ctor_get(v___x_1086_, 1);
v_zetaDeltaFVarIds_1088_ = lean_ctor_get(v___x_1086_, 2);
v_postponed_1089_ = lean_ctor_get(v___x_1086_, 3);
v_diag_1090_ = lean_ctor_get(v___x_1086_, 4);
v_isSharedCheck_1099_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1099_ == 0)
{
lean_object* v_unused_1100_; 
v_unused_1100_ = lean_ctor_get(v___x_1086_, 0);
lean_dec(v_unused_1100_);
v___x_1092_ = v___x_1086_;
v_isShared_1093_ = v_isSharedCheck_1099_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_diag_1090_);
lean_inc(v_postponed_1089_);
lean_inc(v_zetaDeltaFVarIds_1088_);
lean_inc(v_cache_1087_);
lean_dec(v___x_1086_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1099_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 0, v_fst_1084_);
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v_fst_1084_);
lean_ctor_set(v_reuseFailAlloc_1098_, 1, v_cache_1087_);
lean_ctor_set(v_reuseFailAlloc_1098_, 2, v_zetaDeltaFVarIds_1088_);
lean_ctor_set(v_reuseFailAlloc_1098_, 3, v_postponed_1089_);
lean_ctor_set(v_reuseFailAlloc_1098_, 4, v_diag_1090_);
v___x_1095_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1096_ = lean_st_ref_put(v___y_1079_, v___x_1095_);
v___x_1097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1097_, 0, v_snd_1085_);
return v___x_1097_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg___boxed(lean_object* v_l_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg(v_l_1101_, v___y_1102_);
lean_dec(v___y_1102_);
return v_res_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0(lean_object* v_l_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v___x_1111_; 
v___x_1111_ = l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg(v_l_1105_, v___y_1107_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___boxed(lean_object* v_l_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0(v_l_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_);
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
lean_dec(v___y_1114_);
lean_dec_ref(v___y_1113_);
return v_res_1118_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1119_ = lean_unsigned_to_nat(32u);
v___x_1120_ = lean_mk_empty_array_with_capacity(v___x_1119_);
v___x_1121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1120_);
return v___x_1121_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1122_ = ((size_t)5ULL);
v___x_1123_ = lean_unsigned_to_nat(0u);
v___x_1124_ = lean_unsigned_to_nat(32u);
v___x_1125_ = lean_mk_empty_array_with_capacity(v___x_1124_);
v___x_1126_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__0);
v___x_1127_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1127_, 0, v___x_1126_);
lean_ctor_set(v___x_1127_, 1, v___x_1125_);
lean_ctor_set(v___x_1127_, 2, v___x_1123_);
lean_ctor_set(v___x_1127_, 3, v___x_1123_);
lean_ctor_set_usize(v___x_1127_, 4, v___x_1122_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg(lean_object* v___y_1128_){
_start:
{
lean_object* v___x_1130_; lean_object* v_traceState_1131_; lean_object* v_traces_1132_; lean_object* v___x_1133_; lean_object* v_traceState_1134_; lean_object* v_env_1135_; lean_object* v_nextMacroScope_1136_; lean_object* v_ngen_1137_; lean_object* v_auxDeclNGen_1138_; lean_object* v_cache_1139_; lean_object* v_recordedDeps_1140_; lean_object* v_messages_1141_; lean_object* v_infoState_1142_; lean_object* v_snapshotTasks_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1162_; 
v___x_1130_ = lean_st_ref_get(v___y_1128_);
v_traceState_1131_ = lean_ctor_get(v___x_1130_, 4);
lean_inc_ref(v_traceState_1131_);
lean_dec(v___x_1130_);
v_traces_1132_ = lean_ctor_get(v_traceState_1131_, 0);
lean_inc_ref(v_traces_1132_);
lean_dec_ref(v_traceState_1131_);
v___x_1133_ = lean_st_ref_take(v___y_1128_);
v_traceState_1134_ = lean_ctor_get(v___x_1133_, 4);
v_env_1135_ = lean_ctor_get(v___x_1133_, 0);
v_nextMacroScope_1136_ = lean_ctor_get(v___x_1133_, 1);
v_ngen_1137_ = lean_ctor_get(v___x_1133_, 2);
v_auxDeclNGen_1138_ = lean_ctor_get(v___x_1133_, 3);
v_cache_1139_ = lean_ctor_get(v___x_1133_, 5);
v_recordedDeps_1140_ = lean_ctor_get(v___x_1133_, 6);
v_messages_1141_ = lean_ctor_get(v___x_1133_, 7);
v_infoState_1142_ = lean_ctor_get(v___x_1133_, 8);
v_snapshotTasks_1143_ = lean_ctor_get(v___x_1133_, 9);
v_isSharedCheck_1162_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1145_ = v___x_1133_;
v_isShared_1146_ = v_isSharedCheck_1162_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_snapshotTasks_1143_);
lean_inc(v_infoState_1142_);
lean_inc(v_messages_1141_);
lean_inc(v_recordedDeps_1140_);
lean_inc(v_cache_1139_);
lean_inc(v_traceState_1134_);
lean_inc(v_auxDeclNGen_1138_);
lean_inc(v_ngen_1137_);
lean_inc(v_nextMacroScope_1136_);
lean_inc(v_env_1135_);
lean_dec(v___x_1133_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1162_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
uint64_t v_tid_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1160_; 
v_tid_1147_ = lean_ctor_get_uint64(v_traceState_1134_, sizeof(void*)*1);
v_isSharedCheck_1160_ = !lean_is_exclusive(v_traceState_1134_);
if (v_isSharedCheck_1160_ == 0)
{
lean_object* v_unused_1161_; 
v_unused_1161_ = lean_ctor_get(v_traceState_1134_, 0);
lean_dec(v_unused_1161_);
v___x_1149_ = v_traceState_1134_;
v_isShared_1150_ = v_isSharedCheck_1160_;
goto v_resetjp_1148_;
}
else
{
lean_dec(v_traceState_1134_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1160_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1151_; lean_object* v___x_1153_; 
v___x_1151_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__1);
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 0, v___x_1151_);
v___x_1153_ = v___x_1149_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v___x_1151_);
lean_ctor_set_uint64(v_reuseFailAlloc_1159_, sizeof(void*)*1, v_tid_1147_);
v___x_1153_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
lean_object* v___x_1155_; 
if (v_isShared_1146_ == 0)
{
lean_ctor_set(v___x_1145_, 4, v___x_1153_);
v___x_1155_ = v___x_1145_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_env_1135_);
lean_ctor_set(v_reuseFailAlloc_1158_, 1, v_nextMacroScope_1136_);
lean_ctor_set(v_reuseFailAlloc_1158_, 2, v_ngen_1137_);
lean_ctor_set(v_reuseFailAlloc_1158_, 3, v_auxDeclNGen_1138_);
lean_ctor_set(v_reuseFailAlloc_1158_, 4, v___x_1153_);
lean_ctor_set(v_reuseFailAlloc_1158_, 5, v_cache_1139_);
lean_ctor_set(v_reuseFailAlloc_1158_, 6, v_recordedDeps_1140_);
lean_ctor_set(v_reuseFailAlloc_1158_, 7, v_messages_1141_);
lean_ctor_set(v_reuseFailAlloc_1158_, 8, v_infoState_1142_);
lean_ctor_set(v_reuseFailAlloc_1158_, 9, v_snapshotTasks_1143_);
v___x_1155_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1156_ = lean_st_ref_put(v___y_1128_, v___x_1155_);
v___x_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1157_, 0, v_traces_1132_);
return v___x_1157_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___boxed(lean_object* v___y_1163_, lean_object* v___y_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg(v___y_1163_);
lean_dec(v___y_1163_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1(lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg(v___y_1169_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___boxed(lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1(v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_);
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
lean_dec(v___y_1173_);
lean_dec_ref(v___y_1172_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__2(lean_object* v_o_1178_, lean_object* v_k_1179_, uint8_t v_v_1180_){
_start:
{
lean_object* v_map_1181_; uint8_t v_hasTrace_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1196_; 
v_map_1181_ = lean_ctor_get(v_o_1178_, 0);
v_hasTrace_1182_ = lean_ctor_get_uint8(v_o_1178_, sizeof(void*)*1);
v_isSharedCheck_1196_ = !lean_is_exclusive(v_o_1178_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1184_ = v_o_1178_;
v_isShared_1185_ = v_isSharedCheck_1196_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_map_1181_);
lean_dec(v_o_1178_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1196_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1186_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1186_, 0, v_v_1180_);
lean_inc(v_k_1179_);
v___x_1187_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1179_, v___x_1186_, v_map_1181_);
if (v_hasTrace_1182_ == 0)
{
lean_object* v___x_1188_; uint8_t v___x_1189_; lean_object* v___x_1191_; 
v___x_1188_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9));
v___x_1189_ = l_Lean_Name_isPrefixOf(v___x_1188_, v_k_1179_);
lean_dec(v_k_1179_);
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 0, v___x_1187_);
v___x_1191_ = v___x_1184_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v___x_1187_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
lean_ctor_set_uint8(v___x_1191_, sizeof(void*)*1, v___x_1189_);
return v___x_1191_;
}
}
else
{
lean_object* v___x_1194_; 
lean_dec(v_k_1179_);
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 0, v___x_1187_);
v___x_1194_ = v___x_1184_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v___x_1187_);
lean_ctor_set_uint8(v_reuseFailAlloc_1195_, sizeof(void*)*1, v_hasTrace_1182_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__2___boxed(lean_object* v_o_1197_, lean_object* v_k_1198_, lean_object* v_v_1199_){
_start:
{
uint8_t v_v_boxed_1200_; lean_object* v_res_1201_; 
v_v_boxed_1200_ = lean_unbox(v_v_1199_);
v_res_1201_ = l_Lean_Options_set___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__2(v_o_1197_, v_k_1198_, v_v_boxed_1200_);
return v_res_1201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3(lean_object* v_opts_1202_, lean_object* v_opt_1203_){
_start:
{
lean_object* v_name_1204_; lean_object* v_defValue_1205_; lean_object* v_map_1206_; lean_object* v___x_1207_; 
v_name_1204_ = lean_ctor_get(v_opt_1203_, 0);
v_defValue_1205_ = lean_ctor_get(v_opt_1203_, 1);
v_map_1206_ = lean_ctor_get(v_opts_1202_, 0);
v___x_1207_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1206_, v_name_1204_);
if (lean_obj_tag(v___x_1207_) == 0)
{
lean_inc(v_defValue_1205_);
return v_defValue_1205_;
}
else
{
lean_object* v_val_1208_; 
v_val_1208_ = lean_ctor_get(v___x_1207_, 0);
lean_inc(v_val_1208_);
lean_dec_ref_known(v___x_1207_, 1);
if (lean_obj_tag(v_val_1208_) == 3)
{
lean_object* v_v_1209_; 
v_v_1209_ = lean_ctor_get(v_val_1208_, 0);
lean_inc(v_v_1209_);
lean_dec_ref_known(v_val_1208_, 1);
return v_v_1209_;
}
else
{
lean_dec(v_val_1208_);
lean_inc(v_defValue_1205_);
return v_defValue_1205_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3___boxed(lean_object* v_opts_1210_, lean_object* v_opt_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3(v_opts_1210_, v_opt_1211_);
lean_dec_ref(v_opt_1211_);
lean_dec_ref(v_opts_1210_);
return v_res_1212_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4(lean_object* v_opts_1213_, lean_object* v_opt_1214_){
_start:
{
lean_object* v_name_1215_; lean_object* v_defValue_1216_; lean_object* v_map_1217_; lean_object* v___x_1218_; 
v_name_1215_ = lean_ctor_get(v_opt_1214_, 0);
v_defValue_1216_ = lean_ctor_get(v_opt_1214_, 1);
v_map_1217_ = lean_ctor_get(v_opts_1213_, 0);
v___x_1218_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1217_, v_name_1215_);
if (lean_obj_tag(v___x_1218_) == 0)
{
uint8_t v___x_1219_; 
v___x_1219_ = lean_unbox(v_defValue_1216_);
return v___x_1219_;
}
else
{
lean_object* v_val_1220_; 
v_val_1220_ = lean_ctor_get(v___x_1218_, 0);
lean_inc(v_val_1220_);
lean_dec_ref_known(v___x_1218_, 1);
if (lean_obj_tag(v_val_1220_) == 1)
{
uint8_t v_v_1221_; 
v_v_1221_ = lean_ctor_get_uint8(v_val_1220_, 0);
lean_dec_ref_known(v_val_1220_, 0);
return v_v_1221_;
}
else
{
uint8_t v___x_1222_; 
lean_dec(v_val_1220_);
v___x_1222_ = lean_unbox(v_defValue_1216_);
return v___x_1222_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4___boxed(lean_object* v_opts_1223_, lean_object* v_opt_1224_){
_start:
{
uint8_t v_res_1225_; lean_object* v_r_1226_; 
v_res_1225_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4(v_opts_1223_, v_opt_1224_);
lean_dec_ref(v_opt_1224_);
lean_dec_ref(v_opts_1223_);
v_r_1226_ = lean_box(v_res_1225_);
return v_r_1226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lam__0(uint8_t v___x_1227_, lean_object* v_lhs_1228_, lean_object* v_rhs_1229_, lean_object* v___x_1230_, lean_object* v___x_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_){
_start:
{
uint8_t v_a_1238_; 
if (v___x_1227_ == 0)
{
lean_object* v___x_1257_; lean_object* v_a_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v_a_1261_; lean_object* v___x_1262_; uint8_t v___x_1263_; 
lean_inc(v_lhs_1228_);
v___x_1257_ = l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg(v_lhs_1228_, v___y_1233_);
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_a_1258_);
lean_dec_ref(v___x_1257_);
v___x_1259_ = l_Lean_Level_normalize(v_a_1258_);
lean_dec(v_a_1258_);
lean_inc(v_rhs_1229_);
v___x_1260_ = l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg(v_rhs_1229_, v___y_1233_);
v_a_1261_ = lean_ctor_get(v___x_1260_, 0);
lean_inc(v_a_1261_);
lean_dec_ref(v___x_1260_);
v___x_1262_ = l_Lean_Level_normalize(v_a_1261_);
lean_dec(v_a_1261_);
v___x_1263_ = lean_level_eq(v_lhs_1228_, v___x_1259_);
if (v___x_1263_ == 0)
{
lean_object* v___x_1264_; 
lean_dec_ref(v___x_1231_);
lean_dec_ref(v___x_1230_);
lean_dec(v_rhs_1229_);
lean_dec(v_lhs_1228_);
lean_inc(v___y_1235_);
lean_inc_ref(v___y_1234_);
lean_inc(v___y_1233_);
lean_inc_ref(v___y_1232_);
v___x_1264_ = lean_is_level_def_eq(v___x_1259_, v___x_1262_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_);
return v___x_1264_;
}
else
{
uint8_t v___x_1265_; 
v___x_1265_ = lean_level_eq(v_rhs_1229_, v___x_1262_);
if (v___x_1265_ == 0)
{
lean_object* v___x_1266_; 
lean_dec_ref(v___x_1231_);
lean_dec_ref(v___x_1230_);
lean_dec(v_rhs_1229_);
lean_dec(v_lhs_1228_);
lean_inc(v___y_1235_);
lean_inc_ref(v___y_1234_);
lean_inc(v___y_1233_);
lean_inc_ref(v___y_1232_);
v___x_1266_ = lean_is_level_def_eq(v___x_1259_, v___x_1262_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_);
return v___x_1266_;
}
else
{
lean_object* v___x_1267_; 
lean_dec(v___x_1262_);
lean_dec(v___x_1259_);
lean_inc(v___y_1235_);
lean_inc_ref(v___y_1234_);
lean_inc(v___y_1233_);
lean_inc_ref(v___y_1232_);
lean_inc(v_rhs_1229_);
lean_inc(v_lhs_1228_);
v___x_1267_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(v_lhs_1228_, v_rhs_1229_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_);
if (lean_obj_tag(v___x_1267_) == 0)
{
lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1356_; 
v_a_1268_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1356_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1270_ = v___x_1267_;
v_isShared_1271_ = v_isSharedCheck_1356_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_dec(v___x_1267_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1356_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
uint8_t v___x_1272_; uint8_t v___x_1273_; uint8_t v___x_1274_; 
v___x_1272_ = 2;
v___x_1273_ = lean_unbox(v_a_1268_);
v___x_1274_ = l_Lean_instBEqLBool_beq(v___x_1273_, v___x_1272_);
if (v___x_1274_ == 0)
{
uint8_t v___x_1275_; uint8_t v___x_1276_; uint8_t v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1280_; 
lean_dec_ref(v___x_1231_);
lean_dec_ref(v___x_1230_);
lean_dec(v_rhs_1229_);
lean_dec(v_lhs_1228_);
v___x_1275_ = 1;
v___x_1276_ = lean_unbox(v_a_1268_);
lean_dec(v_a_1268_);
v___x_1277_ = l_Lean_instBEqLBool_beq(v___x_1276_, v___x_1275_);
v___x_1278_ = lean_box(v___x_1277_);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 0, v___x_1278_);
v___x_1280_ = v___x_1270_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1278_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
else
{
lean_object* v___x_1282_; 
lean_del_object(v___x_1270_);
lean_dec(v_a_1268_);
lean_inc(v___y_1235_);
lean_inc_ref(v___y_1234_);
lean_inc(v___y_1233_);
lean_inc_ref(v___y_1232_);
lean_inc(v_lhs_1228_);
lean_inc(v_rhs_1229_);
v___x_1282_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(v_rhs_1229_, v_lhs_1228_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1347_; 
v_a_1283_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1285_ = v___x_1282_;
v_isShared_1286_ = v_isSharedCheck_1347_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1282_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1347_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
uint8_t v___x_1287_; uint8_t v___x_1288_; 
v___x_1287_ = lean_unbox(v_a_1283_);
v___x_1288_ = l_Lean_instBEqLBool_beq(v___x_1287_, v___x_1272_);
if (v___x_1288_ == 0)
{
uint8_t v___x_1289_; uint8_t v___x_1290_; uint8_t v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1294_; 
lean_dec_ref(v___x_1231_);
lean_dec_ref(v___x_1230_);
lean_dec(v_rhs_1229_);
lean_dec(v_lhs_1228_);
v___x_1289_ = 1;
v___x_1290_ = lean_unbox(v_a_1283_);
lean_dec(v_a_1283_);
v___x_1291_ = l_Lean_instBEqLBool_beq(v___x_1290_, v___x_1289_);
v___x_1292_ = lean_box(v___x_1291_);
if (v_isShared_1286_ == 0)
{
lean_ctor_set(v___x_1285_, 0, v___x_1292_);
v___x_1294_ = v___x_1285_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v___x_1292_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
else
{
lean_object* v___x_1296_; 
lean_del_object(v___x_1285_);
lean_dec(v_a_1283_);
lean_inc(v_lhs_1228_);
v___x_1296_ = l_Lean_Meta_hasAssignableLevelMVar(v_lhs_1228_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_);
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_object* v_a_1297_; uint8_t v___x_1298_; 
v_a_1297_ = lean_ctor_get(v___x_1296_, 0);
lean_inc(v_a_1297_);
lean_dec_ref_known(v___x_1296_, 1);
v___x_1298_ = lean_unbox(v_a_1297_);
if (v___x_1298_ == 0)
{
lean_object* v___x_1299_; 
lean_dec(v_a_1297_);
lean_inc(v_rhs_1229_);
v___x_1299_ = l_Lean_Meta_hasAssignableLevelMVar(v_rhs_1229_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_);
if (lean_obj_tag(v___x_1299_) == 0)
{
lean_object* v_a_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1345_; 
v_a_1300_ = lean_ctor_get(v___x_1299_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1299_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1302_ = v___x_1299_;
v_isShared_1303_ = v_isSharedCheck_1345_;
goto v_resetjp_1301_;
}
else
{
lean_inc(v_a_1300_);
lean_dec(v___x_1299_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1345_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
uint8_t v___x_1331_; 
v___x_1331_ = lean_unbox(v_a_1300_);
if (v___x_1331_ == 0)
{
lean_object* v___x_1332_; uint8_t v_isDefEqStuckEx_1333_; 
lean_dec(v_a_1300_);
v___x_1332_ = l_Lean_Meta_Context_config(v___y_1232_);
v_isDefEqStuckEx_1333_ = lean_ctor_get_uint8(v___x_1332_, 4);
lean_dec_ref(v___x_1332_);
if (v_isDefEqStuckEx_1333_ == 0)
{
lean_object* v___x_1334_; lean_object* v___x_1336_; 
lean_dec_ref(v___x_1231_);
lean_dec_ref(v___x_1230_);
lean_dec(v_rhs_1229_);
lean_dec(v_lhs_1228_);
v___x_1334_ = lean_box(v_isDefEqStuckEx_1333_);
if (v_isShared_1303_ == 0)
{
lean_ctor_set(v___x_1302_, 0, v___x_1334_);
v___x_1336_ = v___x_1302_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v___x_1334_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
return v___x_1336_;
}
}
else
{
uint8_t v___x_1338_; 
v___x_1338_ = l_Lean_Level_isMVar(v_lhs_1228_);
if (v___x_1338_ == 0)
{
uint8_t v___x_1339_; 
v___x_1339_ = l_Lean_Level_isMVar(v_rhs_1229_);
if (v___x_1339_ == 0)
{
lean_object* v___x_1340_; lean_object* v___x_1342_; 
lean_dec_ref(v___x_1231_);
lean_dec_ref(v___x_1230_);
lean_dec(v_rhs_1229_);
lean_dec(v_lhs_1228_);
v___x_1340_ = lean_box(v___x_1339_);
if (v_isShared_1303_ == 0)
{
lean_ctor_set(v___x_1302_, 0, v___x_1340_);
v___x_1342_ = v___x_1302_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v___x_1340_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
else
{
lean_del_object(v___x_1302_);
goto v___jp_1304_;
}
}
else
{
lean_del_object(v___x_1302_);
goto v___jp_1304_;
}
}
}
else
{
uint8_t v___x_1344_; 
lean_del_object(v___x_1302_);
lean_dec_ref(v___x_1231_);
lean_dec_ref(v___x_1230_);
v___x_1344_ = lean_unbox(v_a_1300_);
lean_dec(v_a_1300_);
v_a_1238_ = v___x_1344_;
goto v___jp_1237_;
}
v___jp_1304_:
{
lean_object* v_toCold_1305_; lean_object* v_options_1306_; uint8_t v_hasTrace_1307_; 
v_toCold_1305_ = lean_ctor_get(v___y_1234_, 0);
v_options_1306_ = lean_ctor_get(v_toCold_1305_, 2);
v_hasTrace_1307_ = lean_ctor_get_uint8(v_options_1306_, sizeof(void*)*1);
if (v_hasTrace_1307_ == 0)
{
lean_object* v___x_1308_; 
lean_dec_ref(v___x_1231_);
lean_dec_ref(v___x_1230_);
lean_dec(v_rhs_1229_);
lean_dec(v_lhs_1228_);
v___x_1308_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
return v___x_1308_;
}
else
{
lean_object* v_inheritedTraceOptions_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; uint8_t v___x_1314_; 
v_inheritedTraceOptions_1309_ = lean_ctor_get(v_toCold_1305_, 11);
v___x_1310_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__0));
v___x_1311_ = l_Lean_Name_mkStr3(v___x_1230_, v___x_1231_, v___x_1310_);
v___x_1312_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9));
lean_inc(v___x_1311_);
v___x_1313_ = l_Lean_Name_append(v___x_1312_, v___x_1311_);
v___x_1314_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1309_, v_options_1306_, v___x_1313_);
lean_dec(v___x_1313_);
if (v___x_1314_ == 0)
{
lean_object* v___x_1315_; 
lean_dec(v___x_1311_);
lean_dec(v_rhs_1229_);
lean_dec(v_lhs_1228_);
v___x_1315_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
return v___x_1315_;
}
else
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1316_ = l_Lean_MessageData_ofLevel(v_lhs_1228_);
v___x_1317_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4);
v___x_1318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1316_);
lean_ctor_set(v___x_1318_, 1, v___x_1317_);
v___x_1319_ = l_Lean_MessageData_ofLevel(v_rhs_1229_);
v___x_1320_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1318_);
lean_ctor_set(v___x_1320_, 1, v___x_1319_);
v___x_1321_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v___x_1311_, v___x_1320_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_);
if (lean_obj_tag(v___x_1321_) == 0)
{
lean_object* v___x_1322_; 
lean_dec_ref_known(v___x_1321_, 1);
v___x_1322_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
return v___x_1322_;
}
else
{
lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1330_; 
v_a_1323_ = lean_ctor_get(v___x_1321_, 0);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1321_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1325_ = v___x_1321_;
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1321_);
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
}
}
else
{
lean_dec_ref(v___x_1231_);
lean_dec_ref(v___x_1230_);
lean_dec(v_rhs_1229_);
lean_dec(v_lhs_1228_);
return v___x_1299_;
}
}
else
{
uint8_t v___x_1346_; 
lean_dec_ref(v___x_1231_);
lean_dec_ref(v___x_1230_);
v___x_1346_ = lean_unbox(v_a_1297_);
lean_dec(v_a_1297_);
v_a_1238_ = v___x_1346_;
goto v___jp_1237_;
}
}
else
{
lean_dec_ref(v___x_1231_);
lean_dec_ref(v___x_1230_);
lean_dec(v_rhs_1229_);
lean_dec(v_lhs_1228_);
return v___x_1296_;
}
}
}
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
lean_dec_ref(v___x_1231_);
lean_dec_ref(v___x_1230_);
lean_dec(v_rhs_1229_);
lean_dec(v_lhs_1228_);
v_a_1348_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v___x_1282_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1282_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1353_; 
if (v_isShared_1351_ == 0)
{
v___x_1353_ = v___x_1350_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_a_1348_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
}
}
}
}
else
{
lean_object* v_a_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1364_; 
lean_dec_ref(v___x_1231_);
lean_dec_ref(v___x_1230_);
lean_dec(v_rhs_1229_);
lean_dec(v_lhs_1228_);
v_a_1357_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1359_ = v___x_1267_;
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_a_1357_);
lean_dec(v___x_1267_);
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
lean_object* v___x_1365_; lean_object* v___x_1366_; uint8_t v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
lean_dec_ref(v___x_1231_);
lean_dec_ref(v___x_1230_);
v___x_1365_ = l_Lean_Level_getOffset(v_lhs_1228_);
lean_dec(v_lhs_1228_);
v___x_1366_ = l_Lean_Level_getOffset(v_rhs_1229_);
lean_dec(v_rhs_1229_);
v___x_1367_ = lean_nat_dec_eq(v___x_1365_, v___x_1366_);
lean_dec(v___x_1366_);
lean_dec(v___x_1365_);
v___x_1368_ = lean_box(v___x_1367_);
v___x_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1368_);
return v___x_1369_;
}
v___jp_1237_:
{
lean_object* v___x_1239_; 
v___x_1239_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(v_lhs_1228_, v_rhs_1229_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_);
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
v___x_1243_ = lean_box(v_a_1238_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lam__0___boxed(lean_object* v___x_1370_, lean_object* v_lhs_1371_, lean_object* v_rhs_1372_, lean_object* v___x_1373_, lean_object* v___x_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_){
_start:
{
uint8_t v___x_14551__boxed_1380_; lean_object* v_res_1381_; 
v___x_14551__boxed_1380_ = lean_unbox(v___x_1370_);
v_res_1381_ = l_Lean_Meta_isLevelDefEqAuxImpl___lam__0(v___x_14551__boxed_1380_, v_lhs_1371_, v_rhs_1372_, v___x_1373_, v___x_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
return v_res_1381_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__7(lean_object* v_e_1382_){
_start:
{
if (lean_obj_tag(v_e_1382_) == 0)
{
uint8_t v___x_1383_; 
v___x_1383_ = 2;
return v___x_1383_;
}
else
{
lean_object* v_a_1384_; uint8_t v___x_1385_; 
v_a_1384_ = lean_ctor_get(v_e_1382_, 0);
v___x_1385_ = lean_unbox(v_a_1384_);
if (v___x_1385_ == 0)
{
uint8_t v___x_1386_; 
v___x_1386_ = 1;
return v___x_1386_;
}
else
{
uint8_t v___x_1387_; 
v___x_1387_ = 0;
return v___x_1387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__7___boxed(lean_object* v_e_1388_){
_start:
{
uint8_t v_res_1389_; lean_object* v_r_1390_; 
v_res_1389_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__7(v_e_1388_);
lean_dec_ref(v_e_1388_);
v_r_1390_ = lean_box(v_res_1389_);
return v_r_1390_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg(lean_object* v_x_1391_){
_start:
{
if (lean_obj_tag(v_x_1391_) == 0)
{
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1400_; 
v_a_1393_ = lean_ctor_get(v_x_1391_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v_x_1391_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1395_ = v_x_1391_;
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v_x_1391_);
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
return v___x_1398_;
}
}
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
v_a_1401_ = lean_ctor_get(v_x_1391_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v_x_1391_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v_x_1391_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v_x_1391_);
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
return v___x_1406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg___boxed(lean_object* v_x_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg(v_x_1409_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5_spec__6(size_t v_sz_1412_, size_t v_i_1413_, lean_object* v_bs_1414_){
_start:
{
uint8_t v___x_1415_; 
v___x_1415_ = lean_usize_dec_lt(v_i_1413_, v_sz_1412_);
if (v___x_1415_ == 0)
{
return v_bs_1414_;
}
else
{
lean_object* v_v_1416_; lean_object* v_msg_1417_; lean_object* v___x_1418_; lean_object* v_bs_x27_1419_; size_t v___x_1420_; size_t v___x_1421_; lean_object* v___x_1422_; 
v_v_1416_ = lean_array_uget_borrowed(v_bs_1414_, v_i_1413_);
v_msg_1417_ = lean_ctor_get(v_v_1416_, 1);
lean_inc_ref(v_msg_1417_);
v___x_1418_ = lean_unsigned_to_nat(0u);
v_bs_x27_1419_ = lean_array_uset(v_bs_1414_, v_i_1413_, v___x_1418_);
v___x_1420_ = ((size_t)1ULL);
v___x_1421_ = lean_usize_add(v_i_1413_, v___x_1420_);
v___x_1422_ = lean_array_uset(v_bs_x27_1419_, v_i_1413_, v_msg_1417_);
v_i_1413_ = v___x_1421_;
v_bs_1414_ = v___x_1422_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5_spec__6___boxed(lean_object* v_sz_1424_, lean_object* v_i_1425_, lean_object* v_bs_1426_){
_start:
{
size_t v_sz_boxed_1427_; size_t v_i_boxed_1428_; lean_object* v_res_1429_; 
v_sz_boxed_1427_ = lean_unbox_usize(v_sz_1424_);
lean_dec(v_sz_1424_);
v_i_boxed_1428_ = lean_unbox_usize(v_i_1425_);
lean_dec(v_i_1425_);
v_res_1429_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5_spec__6(v_sz_boxed_1427_, v_i_boxed_1428_, v_bs_1426_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5(lean_object* v_oldTraces_1430_, lean_object* v_data_1431_, lean_object* v_ref_1432_, lean_object* v_msg_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
lean_object* v_toCold_1439_; lean_object* v_currRecDepth_1440_; lean_object* v_ref_1441_; uint16_t v_optionFlags_1442_; uint8_t v_suppressElabErrors_1443_; uint8_t v_checkDeprecated_1444_; uint8_t v_isRecordingDeps_1445_; lean_object* v_ref_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v_traceState_1449_; lean_object* v_traces_1450_; lean_object* v___x_1451_; size_t v_sz_1452_; size_t v___x_1453_; lean_object* v___x_1454_; lean_object* v_msg_1455_; lean_object* v___x_1456_; lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1495_; 
v_toCold_1439_ = lean_ctor_get(v___y_1436_, 0);
v_currRecDepth_1440_ = lean_ctor_get(v___y_1436_, 1);
v_ref_1441_ = lean_ctor_get(v___y_1436_, 2);
v_optionFlags_1442_ = lean_ctor_get_uint16(v___y_1436_, sizeof(void*)*3);
v_suppressElabErrors_1443_ = lean_ctor_get_uint8(v___y_1436_, sizeof(void*)*3 + 2);
v_checkDeprecated_1444_ = lean_ctor_get_uint8(v___y_1436_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1445_ = lean_ctor_get_uint8(v___y_1436_, sizeof(void*)*3 + 4);
v_ref_1446_ = l_Lean_replaceRef(v_ref_1432_, v_ref_1441_);
lean_inc(v_currRecDepth_1440_);
lean_inc_ref(v_toCold_1439_);
v___x_1447_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1447_, 0, v_toCold_1439_);
lean_ctor_set(v___x_1447_, 1, v_currRecDepth_1440_);
lean_ctor_set(v___x_1447_, 2, v_ref_1446_);
lean_ctor_set_uint16(v___x_1447_, sizeof(void*)*3, v_optionFlags_1442_);
lean_ctor_set_uint8(v___x_1447_, sizeof(void*)*3 + 2, v_suppressElabErrors_1443_);
lean_ctor_set_uint8(v___x_1447_, sizeof(void*)*3 + 3, v_checkDeprecated_1444_);
lean_ctor_set_uint8(v___x_1447_, sizeof(void*)*3 + 4, v_isRecordingDeps_1445_);
v___x_1448_ = lean_st_ref_get(v___y_1437_);
v_traceState_1449_ = lean_ctor_get(v___x_1448_, 4);
lean_inc_ref(v_traceState_1449_);
lean_dec(v___x_1448_);
v_traces_1450_ = lean_ctor_get(v_traceState_1449_, 0);
lean_inc_ref(v_traces_1450_);
lean_dec_ref(v_traceState_1449_);
v___x_1451_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1450_);
lean_dec_ref(v_traces_1450_);
v_sz_1452_ = lean_array_size(v___x_1451_);
v___x_1453_ = ((size_t)0ULL);
v___x_1454_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5_spec__6(v_sz_1452_, v___x_1453_, v___x_1451_);
v_msg_1455_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1455_, 0, v_data_1431_);
lean_ctor_set(v_msg_1455_, 1, v_msg_1433_);
lean_ctor_set(v_msg_1455_, 2, v___x_1454_);
v___x_1456_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3(v_msg_1455_, v___y_1434_, v___y_1435_, v___x_1447_, v___y_1437_);
lean_dec_ref_known(v___x_1447_, 3);
v_a_1457_ = lean_ctor_get(v___x_1456_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1459_ = v___x_1456_;
v_isShared_1460_ = v_isSharedCheck_1495_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1456_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1495_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1461_; lean_object* v_traceState_1462_; lean_object* v_env_1463_; lean_object* v_nextMacroScope_1464_; lean_object* v_ngen_1465_; lean_object* v_auxDeclNGen_1466_; lean_object* v_cache_1467_; lean_object* v_recordedDeps_1468_; lean_object* v_messages_1469_; lean_object* v_infoState_1470_; lean_object* v_snapshotTasks_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1494_; 
v___x_1461_ = lean_st_ref_take(v___y_1437_);
v_traceState_1462_ = lean_ctor_get(v___x_1461_, 4);
v_env_1463_ = lean_ctor_get(v___x_1461_, 0);
v_nextMacroScope_1464_ = lean_ctor_get(v___x_1461_, 1);
v_ngen_1465_ = lean_ctor_get(v___x_1461_, 2);
v_auxDeclNGen_1466_ = lean_ctor_get(v___x_1461_, 3);
v_cache_1467_ = lean_ctor_get(v___x_1461_, 5);
v_recordedDeps_1468_ = lean_ctor_get(v___x_1461_, 6);
v_messages_1469_ = lean_ctor_get(v___x_1461_, 7);
v_infoState_1470_ = lean_ctor_get(v___x_1461_, 8);
v_snapshotTasks_1471_ = lean_ctor_get(v___x_1461_, 9);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1473_ = v___x_1461_;
v_isShared_1474_ = v_isSharedCheck_1494_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_snapshotTasks_1471_);
lean_inc(v_infoState_1470_);
lean_inc(v_messages_1469_);
lean_inc(v_recordedDeps_1468_);
lean_inc(v_cache_1467_);
lean_inc(v_traceState_1462_);
lean_inc(v_auxDeclNGen_1466_);
lean_inc(v_ngen_1465_);
lean_inc(v_nextMacroScope_1464_);
lean_inc(v_env_1463_);
lean_dec(v___x_1461_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1494_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
uint64_t v_tid_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1492_; 
v_tid_1475_ = lean_ctor_get_uint64(v_traceState_1462_, sizeof(void*)*1);
v_isSharedCheck_1492_ = !lean_is_exclusive(v_traceState_1462_);
if (v_isSharedCheck_1492_ == 0)
{
lean_object* v_unused_1493_; 
v_unused_1493_ = lean_ctor_get(v_traceState_1462_, 0);
lean_dec(v_unused_1493_);
v___x_1477_ = v_traceState_1462_;
v_isShared_1478_ = v_isSharedCheck_1492_;
goto v_resetjp_1476_;
}
else
{
lean_dec(v_traceState_1462_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1492_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1483_; 
v___x_1479_ = lean_box(0);
v___x_1480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1480_, 0, v_ref_1432_);
lean_ctor_set(v___x_1480_, 1, v_a_1457_);
v___x_1481_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1430_, v___x_1480_);
if (v_isShared_1478_ == 0)
{
lean_ctor_set(v___x_1477_, 0, v___x_1481_);
v___x_1483_ = v___x_1477_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v___x_1481_);
lean_ctor_set_uint64(v_reuseFailAlloc_1491_, sizeof(void*)*1, v_tid_1475_);
v___x_1483_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1485_; 
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 4, v___x_1483_);
v___x_1485_ = v___x_1473_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v_env_1463_);
lean_ctor_set(v_reuseFailAlloc_1490_, 1, v_nextMacroScope_1464_);
lean_ctor_set(v_reuseFailAlloc_1490_, 2, v_ngen_1465_);
lean_ctor_set(v_reuseFailAlloc_1490_, 3, v_auxDeclNGen_1466_);
lean_ctor_set(v_reuseFailAlloc_1490_, 4, v___x_1483_);
lean_ctor_set(v_reuseFailAlloc_1490_, 5, v_cache_1467_);
lean_ctor_set(v_reuseFailAlloc_1490_, 6, v_recordedDeps_1468_);
lean_ctor_set(v_reuseFailAlloc_1490_, 7, v_messages_1469_);
lean_ctor_set(v_reuseFailAlloc_1490_, 8, v_infoState_1470_);
lean_ctor_set(v_reuseFailAlloc_1490_, 9, v_snapshotTasks_1471_);
v___x_1485_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
lean_object* v___x_1486_; lean_object* v___x_1488_; 
v___x_1486_ = lean_st_ref_put(v___y_1437_, v___x_1485_);
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 0, v___x_1479_);
v___x_1488_ = v___x_1459_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v___x_1479_);
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5___boxed(lean_object* v_oldTraces_1496_, lean_object* v_data_1497_, lean_object* v_ref_1498_, lean_object* v_msg_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5(v_oldTraces_1496_, v_data_1497_, v_ref_1498_, v_msg_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
lean_dec(v___y_1501_);
lean_dec_ref(v___y_1500_);
return v_res_1505_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1506_; double v___x_1507_; 
v___x_1506_ = lean_unsigned_to_nat(1000u);
v___x_1507_ = lean_float_of_nat(v___x_1506_);
return v___x_1507_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5(lean_object* v_cls_1508_, uint8_t v_collapsed_1509_, lean_object* v_tag_1510_, lean_object* v_opts_1511_, uint8_t v_clsEnabled_1512_, lean_object* v_oldTraces_1513_, lean_object* v_ref_1514_, lean_object* v_msg_1515_, lean_object* v_resStartStop_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_){
_start:
{
lean_object* v_fst_1522_; lean_object* v_snd_1523_; lean_object* v_data_1525_; lean_object* v_fst_1536_; lean_object* v_snd_1537_; lean_object* v___x_1538_; uint8_t v___x_1539_; uint8_t v___y_1550_; double v___y_1582_; 
v_fst_1522_ = lean_ctor_get(v_resStartStop_1516_, 0);
lean_inc(v_fst_1522_);
v_snd_1523_ = lean_ctor_get(v_resStartStop_1516_, 1);
lean_inc(v_snd_1523_);
lean_dec_ref(v_resStartStop_1516_);
v_fst_1536_ = lean_ctor_get(v_snd_1523_, 0);
lean_inc(v_fst_1536_);
v_snd_1537_ = lean_ctor_get(v_snd_1523_, 1);
lean_inc(v_snd_1537_);
lean_dec(v_snd_1523_);
v___x_1538_ = l_Lean_trace_profiler;
v___x_1539_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4(v_opts_1511_, v___x_1538_);
if (v___x_1539_ == 0)
{
v___y_1550_ = v___x_1539_;
goto v___jp_1549_;
}
else
{
lean_object* v___x_1587_; uint8_t v___x_1588_; 
v___x_1587_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1588_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4(v_opts_1511_, v___x_1587_);
if (v___x_1588_ == 0)
{
lean_object* v___x_1589_; lean_object* v___x_1590_; double v___x_1591_; double v___x_1592_; double v___x_1593_; 
v___x_1589_ = l_Lean_trace_profiler_threshold;
v___x_1590_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3(v_opts_1511_, v___x_1589_);
v___x_1591_ = lean_float_of_nat(v___x_1590_);
v___x_1592_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___closed__0);
v___x_1593_ = lean_float_div(v___x_1591_, v___x_1592_);
v___y_1582_ = v___x_1593_;
goto v___jp_1581_;
}
else
{
lean_object* v___x_1594_; lean_object* v___x_1595_; double v___x_1596_; 
v___x_1594_ = l_Lean_trace_profiler_threshold;
v___x_1595_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3(v_opts_1511_, v___x_1594_);
v___x_1596_ = lean_float_of_nat(v___x_1595_);
v___y_1582_ = v___x_1596_;
goto v___jp_1581_;
}
}
v___jp_1524_:
{
lean_object* v___x_1526_; 
v___x_1526_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5(v_oldTraces_1513_, v_data_1525_, v_ref_1514_, v_msg_1515_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v___x_1527_; 
lean_dec_ref_known(v___x_1526_, 1);
v___x_1527_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg(v_fst_1522_);
return v___x_1527_;
}
else
{
lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1535_; 
lean_dec(v_fst_1522_);
v_a_1528_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1535_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1535_ == 0)
{
v___x_1530_ = v___x_1526_;
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1526_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1533_; 
if (v_isShared_1531_ == 0)
{
v___x_1533_ = v___x_1530_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v_a_1528_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
}
}
v___jp_1540_:
{
uint8_t v_result_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; double v___x_1544_; lean_object* v_data_1545_; 
v_result_1541_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__7(v_fst_1522_);
v___x_1542_ = lean_box(v_result_1541_);
v___x_1543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1542_);
v___x_1544_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0);
lean_inc_ref(v_tag_1510_);
lean_inc_ref(v___x_1543_);
lean_inc(v_cls_1508_);
v_data_1545_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1545_, 0, v_cls_1508_);
lean_ctor_set(v_data_1545_, 1, v___x_1543_);
lean_ctor_set(v_data_1545_, 2, v_tag_1510_);
lean_ctor_set_float(v_data_1545_, sizeof(void*)*3, v___x_1544_);
lean_ctor_set_float(v_data_1545_, sizeof(void*)*3 + 8, v___x_1544_);
lean_ctor_set_uint8(v_data_1545_, sizeof(void*)*3 + 16, v_collapsed_1509_);
if (v___x_1539_ == 0)
{
lean_dec_ref_known(v___x_1543_, 1);
lean_dec(v_snd_1537_);
lean_dec(v_fst_1536_);
lean_dec_ref(v_tag_1510_);
lean_dec(v_cls_1508_);
v_data_1525_ = v_data_1545_;
goto v___jp_1524_;
}
else
{
lean_object* v_data_1546_; double v___x_1547_; double v___x_1548_; 
lean_dec_ref_known(v_data_1545_, 3);
v_data_1546_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1546_, 0, v_cls_1508_);
lean_ctor_set(v_data_1546_, 1, v___x_1543_);
lean_ctor_set(v_data_1546_, 2, v_tag_1510_);
v___x_1547_ = lean_unbox_float(v_fst_1536_);
lean_dec(v_fst_1536_);
lean_ctor_set_float(v_data_1546_, sizeof(void*)*3, v___x_1547_);
v___x_1548_ = lean_unbox_float(v_snd_1537_);
lean_dec(v_snd_1537_);
lean_ctor_set_float(v_data_1546_, sizeof(void*)*3 + 8, v___x_1548_);
lean_ctor_set_uint8(v_data_1546_, sizeof(void*)*3 + 16, v_collapsed_1509_);
v_data_1525_ = v_data_1546_;
goto v___jp_1524_;
}
}
v___jp_1549_:
{
if (v_clsEnabled_1512_ == 0)
{
if (v___y_1550_ == 0)
{
lean_object* v___x_1551_; lean_object* v_traceState_1552_; lean_object* v_env_1553_; lean_object* v_nextMacroScope_1554_; lean_object* v_ngen_1555_; lean_object* v_auxDeclNGen_1556_; lean_object* v_cache_1557_; lean_object* v_recordedDeps_1558_; lean_object* v_messages_1559_; lean_object* v_infoState_1560_; lean_object* v_snapshotTasks_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1580_; 
lean_dec(v_snd_1537_);
lean_dec(v_fst_1536_);
lean_dec_ref(v_msg_1515_);
lean_dec(v_ref_1514_);
lean_dec_ref(v_tag_1510_);
lean_dec(v_cls_1508_);
v___x_1551_ = lean_st_ref_take(v___y_1520_);
v_traceState_1552_ = lean_ctor_get(v___x_1551_, 4);
v_env_1553_ = lean_ctor_get(v___x_1551_, 0);
v_nextMacroScope_1554_ = lean_ctor_get(v___x_1551_, 1);
v_ngen_1555_ = lean_ctor_get(v___x_1551_, 2);
v_auxDeclNGen_1556_ = lean_ctor_get(v___x_1551_, 3);
v_cache_1557_ = lean_ctor_get(v___x_1551_, 5);
v_recordedDeps_1558_ = lean_ctor_get(v___x_1551_, 6);
v_messages_1559_ = lean_ctor_get(v___x_1551_, 7);
v_infoState_1560_ = lean_ctor_get(v___x_1551_, 8);
v_snapshotTasks_1561_ = lean_ctor_get(v___x_1551_, 9);
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1563_ = v___x_1551_;
v_isShared_1564_ = v_isSharedCheck_1580_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_snapshotTasks_1561_);
lean_inc(v_infoState_1560_);
lean_inc(v_messages_1559_);
lean_inc(v_recordedDeps_1558_);
lean_inc(v_cache_1557_);
lean_inc(v_traceState_1552_);
lean_inc(v_auxDeclNGen_1556_);
lean_inc(v_ngen_1555_);
lean_inc(v_nextMacroScope_1554_);
lean_inc(v_env_1553_);
lean_dec(v___x_1551_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1580_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
uint64_t v_tid_1565_; lean_object* v_traces_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1579_; 
v_tid_1565_ = lean_ctor_get_uint64(v_traceState_1552_, sizeof(void*)*1);
v_traces_1566_ = lean_ctor_get(v_traceState_1552_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v_traceState_1552_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1568_ = v_traceState_1552_;
v_isShared_1569_ = v_isSharedCheck_1579_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_traces_1566_);
lean_dec(v_traceState_1552_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1579_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1570_; lean_object* v___x_1572_; 
v___x_1570_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1513_, v_traces_1566_);
lean_dec_ref(v_traces_1566_);
if (v_isShared_1569_ == 0)
{
lean_ctor_set(v___x_1568_, 0, v___x_1570_);
v___x_1572_ = v___x_1568_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v___x_1570_);
lean_ctor_set_uint64(v_reuseFailAlloc_1578_, sizeof(void*)*1, v_tid_1565_);
v___x_1572_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
lean_object* v___x_1574_; 
if (v_isShared_1564_ == 0)
{
lean_ctor_set(v___x_1563_, 4, v___x_1572_);
v___x_1574_ = v___x_1563_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v_env_1553_);
lean_ctor_set(v_reuseFailAlloc_1577_, 1, v_nextMacroScope_1554_);
lean_ctor_set(v_reuseFailAlloc_1577_, 2, v_ngen_1555_);
lean_ctor_set(v_reuseFailAlloc_1577_, 3, v_auxDeclNGen_1556_);
lean_ctor_set(v_reuseFailAlloc_1577_, 4, v___x_1572_);
lean_ctor_set(v_reuseFailAlloc_1577_, 5, v_cache_1557_);
lean_ctor_set(v_reuseFailAlloc_1577_, 6, v_recordedDeps_1558_);
lean_ctor_set(v_reuseFailAlloc_1577_, 7, v_messages_1559_);
lean_ctor_set(v_reuseFailAlloc_1577_, 8, v_infoState_1560_);
lean_ctor_set(v_reuseFailAlloc_1577_, 9, v_snapshotTasks_1561_);
v___x_1574_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1575_ = lean_st_ref_put(v___y_1520_, v___x_1574_);
v___x_1576_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg(v_fst_1522_);
return v___x_1576_;
}
}
}
}
}
else
{
goto v___jp_1540_;
}
}
else
{
goto v___jp_1540_;
}
}
v___jp_1581_:
{
double v___x_1583_; double v___x_1584_; double v___x_1585_; uint8_t v___x_1586_; 
v___x_1583_ = lean_unbox_float(v_snd_1537_);
v___x_1584_ = lean_unbox_float(v_fst_1536_);
v___x_1585_ = lean_float_sub(v___x_1583_, v___x_1584_);
v___x_1586_ = lean_float_decLt(v___y_1582_, v___x_1585_);
v___y_1550_ = v___x_1586_;
goto v___jp_1549_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___boxed(lean_object* v_cls_1597_, lean_object* v_collapsed_1598_, lean_object* v_tag_1599_, lean_object* v_opts_1600_, lean_object* v_clsEnabled_1601_, lean_object* v_oldTraces_1602_, lean_object* v_ref_1603_, lean_object* v_msg_1604_, lean_object* v_resStartStop_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_){
_start:
{
uint8_t v_collapsed_boxed_1611_; uint8_t v_clsEnabled_boxed_1612_; lean_object* v_res_1613_; 
v_collapsed_boxed_1611_ = lean_unbox(v_collapsed_1598_);
v_clsEnabled_boxed_1612_ = lean_unbox(v_clsEnabled_1601_);
v_res_1613_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5(v_cls_1597_, v_collapsed_boxed_1611_, v_tag_1599_, v_opts_1600_, v_clsEnabled_boxed_1612_, v_oldTraces_1602_, v_ref_1603_, v_msg_1604_, v_resStartStop_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
lean_dec_ref(v_opts_1600_);
return v_res_1613_;
}
}
static double _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__0(void){
_start:
{
lean_object* v___x_1614_; double v___x_1615_; 
v___x_1614_ = lean_unsigned_to_nat(1000000000u);
v___x_1615_ = lean_float_of_nat(v___x_1614_);
return v___x_1615_;
}
}
static lean_object* _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__1(void){
_start:
{
lean_object* v___x_1616_; 
v___x_1616_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1616_;
}
}
static lean_object* _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__2(void){
_start:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1617_ = lean_obj_once(&l_Lean_Meta_isLevelDefEqAuxImpl___closed__1, &l_Lean_Meta_isLevelDefEqAuxImpl___closed__1_once, _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__1);
v___x_1618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1617_);
return v___x_1618_;
}
}
static lean_object* _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__3(void){
_start:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1619_ = lean_obj_once(&l_Lean_Meta_isLevelDefEqAuxImpl___closed__2, &l_Lean_Meta_isLevelDefEqAuxImpl___closed__2_once, _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__2);
v___x_1620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1619_);
lean_ctor_set(v___x_1620_, 1, v___x_1619_);
return v___x_1620_;
}
}
static lean_object* _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__8(void){
_start:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1629_ = ((lean_object*)(l_Lean_Meta_isLevelDefEqAuxImpl___closed__7));
v___x_1630_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9));
v___x_1631_ = l_Lean_Name_append(v___x_1630_, v___x_1629_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* lean_is_level_def_eq(lean_object* v_x_1632_, lean_object* v_x_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_){
_start:
{
lean_object* v___y_1640_; lean_object* v___y_1641_; lean_object* v___y_1642_; lean_object* v___y_1643_; lean_object* v___y_1644_; lean_object* v___y_1645_; lean_object* v___y_1646_; lean_object* v___y_1647_; uint8_t v___y_1648_; lean_object* v___y_1649_; lean_object* v___y_1650_; lean_object* v___y_1651_; uint8_t v___y_1652_; lean_object* v_a_1653_; lean_object* v___y_1663_; lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1666_; lean_object* v___y_1667_; lean_object* v___y_1668_; lean_object* v___y_1669_; lean_object* v___y_1670_; uint8_t v___y_1671_; lean_object* v___y_1672_; lean_object* v___y_1673_; lean_object* v___y_1674_; uint8_t v___y_1675_; lean_object* v_a_1676_; lean_object* v___y_1689_; lean_object* v___y_1690_; uint16_t v___y_1691_; lean_object* v___y_1692_; lean_object* v___y_1693_; lean_object* v___y_1694_; lean_object* v___y_1695_; lean_object* v___y_1696_; lean_object* v___y_1697_; uint8_t v___y_1698_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v___y_1701_; lean_object* v___y_1702_; uint8_t v___y_1703_; lean_object* v___y_1704_; lean_object* v_toCold_1705_; lean_object* v_currRecDepth_1706_; lean_object* v_ref_1707_; uint8_t v_suppressElabErrors_1708_; uint8_t v_checkDeprecated_1709_; uint8_t v_isRecordingDeps_1710_; lean_object* v___y_1711_; lean_object* v___y_1777_; lean_object* v___y_1778_; uint16_t v___y_1779_; lean_object* v___y_1780_; lean_object* v___y_1781_; lean_object* v___y_1782_; lean_object* v___y_1783_; lean_object* v___y_1784_; lean_object* v___y_1785_; uint8_t v___y_1786_; lean_object* v___y_1787_; lean_object* v___y_1788_; lean_object* v___y_1789_; lean_object* v___y_1790_; lean_object* v_nextMacroScope_1791_; lean_object* v_ngen_1792_; lean_object* v_auxDeclNGen_1793_; lean_object* v_traceState_1794_; lean_object* v_recordedDeps_1795_; lean_object* v_messages_1796_; lean_object* v_infoState_1797_; lean_object* v_snapshotTasks_1798_; uint8_t v___y_1799_; lean_object* v___y_1800_; lean_object* v___y_1801_; lean_object* v___y_1812_; lean_object* v___y_1813_; uint16_t v___y_1814_; lean_object* v___y_1815_; lean_object* v___y_1816_; lean_object* v___y_1817_; lean_object* v___y_1818_; lean_object* v___y_1819_; lean_object* v___y_1820_; uint8_t v___y_1821_; lean_object* v___y_1822_; lean_object* v___y_1823_; lean_object* v___y_1824_; lean_object* v___y_1825_; uint8_t v___y_1826_; lean_object* v___y_1827_; uint8_t v___y_1828_; lean_object* v___y_1846_; lean_object* v___y_1847_; lean_object* v___y_1848_; lean_object* v___y_1849_; lean_object* v___y_1850_; lean_object* v___y_1851_; lean_object* v___y_1852_; uint8_t v___y_1853_; lean_object* v___y_1854_; uint8_t v___y_1855_; lean_object* v___y_1856_; lean_object* v___y_1857_; uint8_t v___y_1858_; lean_object* v___y_1859_; uint16_t v___y_1860_; uint8_t v___y_1861_; uint8_t v___y_1862_; lean_object* v___y_1863_; lean_object* v___y_1864_; lean_object* v_lhs_1886_; lean_object* v_rhs_1887_; lean_object* v___y_1888_; lean_object* v___y_1889_; lean_object* v___y_1890_; lean_object* v___y_1891_; 
if (lean_obj_tag(v_x_1632_) == 1)
{
if (lean_obj_tag(v_x_1633_) == 1)
{
lean_object* v_a_1917_; lean_object* v_a_1918_; lean_object* v___x_1919_; 
v_a_1917_ = lean_ctor_get(v_x_1632_, 0);
lean_inc(v_a_1917_);
lean_dec_ref_known(v_x_1632_, 1);
v_a_1918_ = lean_ctor_get(v_x_1633_, 0);
lean_inc(v_a_1918_);
lean_dec_ref_known(v_x_1633_, 1);
v___x_1919_ = lean_is_level_def_eq(v_a_1917_, v_a_1918_, v_a_1634_, v_a_1635_, v_a_1636_, v_a_1637_);
return v___x_1919_;
}
else
{
v_lhs_1886_ = v_x_1632_;
v_rhs_1887_ = v_x_1633_;
v___y_1888_ = v_a_1634_;
v___y_1889_ = v_a_1635_;
v___y_1890_ = v_a_1636_;
v___y_1891_ = v_a_1637_;
goto v___jp_1885_;
}
}
else
{
v_lhs_1886_ = v_x_1632_;
v_rhs_1887_ = v_x_1633_;
v___y_1888_ = v_a_1634_;
v___y_1889_ = v_a_1635_;
v___y_1890_ = v_a_1636_;
v___y_1891_ = v_a_1637_;
goto v___jp_1885_;
}
v___jp_1639_:
{
lean_object* v___x_1654_; double v___x_1655_; double v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1654_ = lean_io_get_num_heartbeats();
v___x_1655_ = lean_float_of_nat(v___y_1640_);
v___x_1656_ = lean_float_of_nat(v___x_1654_);
v___x_1657_ = lean_box_float(v___x_1655_);
v___x_1658_ = lean_box_float(v___x_1656_);
v___x_1659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1657_);
lean_ctor_set(v___x_1659_, 1, v___x_1658_);
v___x_1660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1660_, 0, v_a_1653_);
lean_ctor_set(v___x_1660_, 1, v___x_1659_);
lean_inc_ref(v___y_1643_);
lean_inc(v___y_1641_);
v___x_1661_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5(v___y_1641_, v___y_1648_, v___y_1643_, v___y_1646_, v___y_1652_, v___y_1642_, v___y_1650_, v___y_1651_, v___x_1660_, v___y_1647_, v___y_1645_, v___y_1649_, v___y_1644_);
lean_dec(v___y_1644_);
lean_dec_ref(v___y_1649_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1647_);
lean_dec_ref(v___y_1646_);
return v___x_1661_;
}
v___jp_1662_:
{
lean_object* v___x_1677_; double v___x_1678_; double v___x_1679_; double v___x_1680_; double v___x_1681_; double v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1677_ = lean_io_mono_nanos_now();
v___x_1678_ = lean_float_of_nat(v___y_1663_);
v___x_1679_ = lean_float_once(&l_Lean_Meta_isLevelDefEqAuxImpl___closed__0, &l_Lean_Meta_isLevelDefEqAuxImpl___closed__0_once, _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__0);
v___x_1680_ = lean_float_div(v___x_1678_, v___x_1679_);
v___x_1681_ = lean_float_of_nat(v___x_1677_);
v___x_1682_ = lean_float_div(v___x_1681_, v___x_1679_);
v___x_1683_ = lean_box_float(v___x_1680_);
v___x_1684_ = lean_box_float(v___x_1682_);
v___x_1685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1683_);
lean_ctor_set(v___x_1685_, 1, v___x_1684_);
v___x_1686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1686_, 0, v_a_1676_);
lean_ctor_set(v___x_1686_, 1, v___x_1685_);
lean_inc_ref(v___y_1666_);
lean_inc(v___y_1664_);
v___x_1687_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5(v___y_1664_, v___y_1671_, v___y_1666_, v___y_1669_, v___y_1675_, v___y_1665_, v___y_1673_, v___y_1674_, v___x_1686_, v___y_1670_, v___y_1668_, v___y_1672_, v___y_1667_);
lean_dec(v___y_1667_);
lean_dec_ref(v___y_1672_);
lean_dec(v___y_1668_);
lean_dec_ref(v___y_1670_);
lean_dec_ref(v___y_1669_);
return v___x_1687_;
}
v___jp_1688_:
{
lean_object* v_fileName_1712_; lean_object* v_fileMap_1713_; lean_object* v_currNamespace_1714_; lean_object* v_openDecls_1715_; lean_object* v_initHeartbeats_1716_; lean_object* v_maxHeartbeats_1717_; lean_object* v_quotContext_1718_; lean_object* v_currMacroScope_1719_; lean_object* v_cancelTk_x3f_1720_; lean_object* v_inheritedTraceOptions_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1773_; 
v_fileName_1712_ = lean_ctor_get(v_toCold_1705_, 0);
v_fileMap_1713_ = lean_ctor_get(v_toCold_1705_, 1);
v_currNamespace_1714_ = lean_ctor_get(v_toCold_1705_, 4);
v_openDecls_1715_ = lean_ctor_get(v_toCold_1705_, 5);
v_initHeartbeats_1716_ = lean_ctor_get(v_toCold_1705_, 6);
v_maxHeartbeats_1717_ = lean_ctor_get(v_toCold_1705_, 7);
v_quotContext_1718_ = lean_ctor_get(v_toCold_1705_, 8);
v_currMacroScope_1719_ = lean_ctor_get(v_toCold_1705_, 9);
v_cancelTk_x3f_1720_ = lean_ctor_get(v_toCold_1705_, 10);
v_inheritedTraceOptions_1721_ = lean_ctor_get(v_toCold_1705_, 11);
v_isSharedCheck_1773_ = !lean_is_exclusive(v_toCold_1705_);
if (v_isSharedCheck_1773_ == 0)
{
lean_object* v_unused_1774_; lean_object* v_unused_1775_; 
v_unused_1774_ = lean_ctor_get(v_toCold_1705_, 3);
lean_dec(v_unused_1774_);
v_unused_1775_ = lean_ctor_get(v_toCold_1705_, 2);
lean_dec(v_unused_1775_);
v___x_1723_ = v_toCold_1705_;
v_isShared_1724_ = v_isSharedCheck_1773_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_inheritedTraceOptions_1721_);
lean_inc(v_cancelTk_x3f_1720_);
lean_inc(v_currMacroScope_1719_);
lean_inc(v_quotContext_1718_);
lean_inc(v_maxHeartbeats_1717_);
lean_inc(v_initHeartbeats_1716_);
lean_inc(v_openDecls_1715_);
lean_inc(v_currNamespace_1714_);
lean_inc(v_fileMap_1713_);
lean_inc(v_fileName_1712_);
lean_dec(v_toCold_1705_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1773_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1728_; 
v___x_1725_ = l_Lean_maxRecDepth;
v___x_1726_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3(v___y_1701_, v___x_1725_);
if (v_isShared_1724_ == 0)
{
lean_ctor_set(v___x_1723_, 3, v___x_1726_);
lean_ctor_set(v___x_1723_, 2, v___y_1701_);
v___x_1728_ = v___x_1723_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v_fileName_1712_);
lean_ctor_set(v_reuseFailAlloc_1772_, 1, v_fileMap_1713_);
lean_ctor_set(v_reuseFailAlloc_1772_, 2, v___y_1701_);
lean_ctor_set(v_reuseFailAlloc_1772_, 3, v___x_1726_);
lean_ctor_set(v_reuseFailAlloc_1772_, 4, v_currNamespace_1714_);
lean_ctor_set(v_reuseFailAlloc_1772_, 5, v_openDecls_1715_);
lean_ctor_set(v_reuseFailAlloc_1772_, 6, v_initHeartbeats_1716_);
lean_ctor_set(v_reuseFailAlloc_1772_, 7, v_maxHeartbeats_1717_);
lean_ctor_set(v_reuseFailAlloc_1772_, 8, v_quotContext_1718_);
lean_ctor_set(v_reuseFailAlloc_1772_, 9, v_currMacroScope_1719_);
lean_ctor_set(v_reuseFailAlloc_1772_, 10, v_cancelTk_x3f_1720_);
lean_ctor_set(v_reuseFailAlloc_1772_, 11, v_inheritedTraceOptions_1721_);
v___x_1728_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v_a_1731_; lean_object* v___x_1732_; lean_object* v_a_1733_; lean_object* v___x_1734_; uint8_t v___x_1735_; 
v___x_1729_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1729_, 0, v___x_1728_);
lean_ctor_set(v___x_1729_, 1, v_currRecDepth_1706_);
lean_ctor_set(v___x_1729_, 2, v_ref_1707_);
lean_ctor_set_uint16(v___x_1729_, sizeof(void*)*3, v___y_1691_);
lean_ctor_set_uint8(v___x_1729_, sizeof(void*)*3 + 2, v_suppressElabErrors_1708_);
lean_ctor_set_uint8(v___x_1729_, sizeof(void*)*3 + 3, v_checkDeprecated_1709_);
lean_ctor_set_uint8(v___x_1729_, sizeof(void*)*3 + 4, v_isRecordingDeps_1710_);
v___x_1730_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3(v___y_1690_, v___y_1697_, v___y_1695_, v___x_1729_, v___y_1711_);
lean_dec(v___y_1711_);
lean_dec_ref_known(v___x_1729_, 3);
v_a_1731_ = lean_ctor_get(v___x_1730_, 0);
lean_inc(v_a_1731_);
lean_dec_ref(v___x_1730_);
v___x_1732_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3(v_a_1731_, v___y_1697_, v___y_1695_, v___y_1702_, v___y_1693_);
lean_dec_ref(v___y_1702_);
v_a_1733_ = lean_ctor_get(v___x_1732_, 0);
lean_inc(v_a_1733_);
lean_dec_ref(v___x_1732_);
v___x_1734_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1735_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4(v___y_1696_, v___x_1734_);
if (v___x_1735_ == 0)
{
lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1736_ = lean_io_mono_nanos_now();
lean_inc(v___y_1693_);
lean_inc_ref(v___y_1699_);
lean_inc(v___y_1695_);
lean_inc_ref(v___y_1697_);
v___x_1737_ = lean_apply_5(v___y_1704_, v___y_1697_, v___y_1695_, v___y_1699_, v___y_1693_, lean_box(0));
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1745_; 
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1740_ = v___x_1737_;
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v___x_1737_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1743_; 
if (v_isShared_1741_ == 0)
{
lean_ctor_set_tag(v___x_1740_, 1);
v___x_1743_ = v___x_1740_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v_a_1738_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
v___y_1663_ = v___x_1736_;
v___y_1664_ = v___y_1689_;
v___y_1665_ = v___y_1692_;
v___y_1666_ = v___y_1694_;
v___y_1667_ = v___y_1693_;
v___y_1668_ = v___y_1695_;
v___y_1669_ = v___y_1696_;
v___y_1670_ = v___y_1697_;
v___y_1671_ = v___y_1698_;
v___y_1672_ = v___y_1699_;
v___y_1673_ = v___y_1700_;
v___y_1674_ = v_a_1733_;
v___y_1675_ = v___y_1703_;
v_a_1676_ = v___x_1743_;
goto v___jp_1662_;
}
}
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1753_; 
v_a_1746_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1748_ = v___x_1737_;
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1737_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1751_; 
if (v_isShared_1749_ == 0)
{
lean_ctor_set_tag(v___x_1748_, 0);
v___x_1751_ = v___x_1748_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1746_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
v___y_1663_ = v___x_1736_;
v___y_1664_ = v___y_1689_;
v___y_1665_ = v___y_1692_;
v___y_1666_ = v___y_1694_;
v___y_1667_ = v___y_1693_;
v___y_1668_ = v___y_1695_;
v___y_1669_ = v___y_1696_;
v___y_1670_ = v___y_1697_;
v___y_1671_ = v___y_1698_;
v___y_1672_ = v___y_1699_;
v___y_1673_ = v___y_1700_;
v___y_1674_ = v_a_1733_;
v___y_1675_ = v___y_1703_;
v_a_1676_ = v___x_1751_;
goto v___jp_1662_;
}
}
}
}
else
{
lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1754_ = lean_io_get_num_heartbeats();
lean_inc(v___y_1693_);
lean_inc_ref(v___y_1699_);
lean_inc(v___y_1695_);
lean_inc_ref(v___y_1697_);
v___x_1755_ = lean_apply_5(v___y_1704_, v___y_1697_, v___y_1695_, v___y_1699_, v___y_1693_, lean_box(0));
if (lean_obj_tag(v___x_1755_) == 0)
{
lean_object* v_a_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1763_; 
v_a_1756_ = lean_ctor_get(v___x_1755_, 0);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1758_ = v___x_1755_;
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_a_1756_);
lean_dec(v___x_1755_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1761_; 
if (v_isShared_1759_ == 0)
{
lean_ctor_set_tag(v___x_1758_, 1);
v___x_1761_ = v___x_1758_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v_a_1756_);
v___x_1761_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
v___y_1640_ = v___x_1754_;
v___y_1641_ = v___y_1689_;
v___y_1642_ = v___y_1692_;
v___y_1643_ = v___y_1694_;
v___y_1644_ = v___y_1693_;
v___y_1645_ = v___y_1695_;
v___y_1646_ = v___y_1696_;
v___y_1647_ = v___y_1697_;
v___y_1648_ = v___y_1698_;
v___y_1649_ = v___y_1699_;
v___y_1650_ = v___y_1700_;
v___y_1651_ = v_a_1733_;
v___y_1652_ = v___y_1703_;
v_a_1653_ = v___x_1761_;
goto v___jp_1639_;
}
}
}
else
{
lean_object* v_a_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1771_; 
v_a_1764_ = lean_ctor_get(v___x_1755_, 0);
v_isSharedCheck_1771_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1766_ = v___x_1755_;
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_a_1764_);
lean_dec(v___x_1755_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1769_; 
if (v_isShared_1767_ == 0)
{
lean_ctor_set_tag(v___x_1766_, 0);
v___x_1769_ = v___x_1766_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_a_1764_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
v___y_1640_ = v___x_1754_;
v___y_1641_ = v___y_1689_;
v___y_1642_ = v___y_1692_;
v___y_1643_ = v___y_1694_;
v___y_1644_ = v___y_1693_;
v___y_1645_ = v___y_1695_;
v___y_1646_ = v___y_1696_;
v___y_1647_ = v___y_1697_;
v___y_1648_ = v___y_1698_;
v___y_1649_ = v___y_1699_;
v___y_1650_ = v___y_1700_;
v___y_1651_ = v_a_1733_;
v___y_1652_ = v___y_1703_;
v_a_1653_ = v___x_1769_;
goto v___jp_1639_;
}
}
}
}
}
}
}
v___jp_1776_:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v_toCold_1805_; lean_object* v_currRecDepth_1806_; lean_object* v_ref_1807_; uint8_t v_suppressElabErrors_1808_; uint8_t v_checkDeprecated_1809_; uint8_t v_isRecordingDeps_1810_; 
v___x_1802_ = lean_obj_once(&l_Lean_Meta_isLevelDefEqAuxImpl___closed__3, &l_Lean_Meta_isLevelDefEqAuxImpl___closed__3_once, _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__3);
v___x_1803_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1803_, 0, v___y_1801_);
lean_ctor_set(v___x_1803_, 1, v_nextMacroScope_1791_);
lean_ctor_set(v___x_1803_, 2, v_ngen_1792_);
lean_ctor_set(v___x_1803_, 3, v_auxDeclNGen_1793_);
lean_ctor_set(v___x_1803_, 4, v_traceState_1794_);
lean_ctor_set(v___x_1803_, 5, v___x_1802_);
lean_ctor_set(v___x_1803_, 6, v_recordedDeps_1795_);
lean_ctor_set(v___x_1803_, 7, v_messages_1796_);
lean_ctor_set(v___x_1803_, 8, v_infoState_1797_);
lean_ctor_set(v___x_1803_, 9, v_snapshotTasks_1798_);
v___x_1804_ = lean_st_ref_put(v___y_1781_, v___x_1803_);
v_toCold_1805_ = lean_ctor_get(v___y_1790_, 0);
lean_inc_ref(v_toCold_1805_);
v_currRecDepth_1806_ = lean_ctor_get(v___y_1790_, 1);
lean_inc(v_currRecDepth_1806_);
v_ref_1807_ = lean_ctor_get(v___y_1790_, 2);
lean_inc(v_ref_1807_);
v_suppressElabErrors_1808_ = lean_ctor_get_uint8(v___y_1790_, sizeof(void*)*3 + 2);
v_checkDeprecated_1809_ = lean_ctor_get_uint8(v___y_1790_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1810_ = lean_ctor_get_uint8(v___y_1790_, sizeof(void*)*3 + 4);
lean_inc(v___y_1781_);
v___y_1689_ = v___y_1777_;
v___y_1690_ = v___y_1778_;
v___y_1691_ = v___y_1779_;
v___y_1692_ = v___y_1780_;
v___y_1693_ = v___y_1781_;
v___y_1694_ = v___y_1782_;
v___y_1695_ = v___y_1783_;
v___y_1696_ = v___y_1784_;
v___y_1697_ = v___y_1785_;
v___y_1698_ = v___y_1786_;
v___y_1699_ = v___y_1787_;
v___y_1700_ = v___y_1788_;
v___y_1701_ = v___y_1789_;
v___y_1702_ = v___y_1790_;
v___y_1703_ = v___y_1799_;
v___y_1704_ = v___y_1800_;
v_toCold_1705_ = v_toCold_1805_;
v_currRecDepth_1706_ = v_currRecDepth_1806_;
v_ref_1707_ = v_ref_1807_;
v_suppressElabErrors_1708_ = v_suppressElabErrors_1808_;
v_checkDeprecated_1709_ = v_checkDeprecated_1809_;
v_isRecordingDeps_1710_ = v_isRecordingDeps_1810_;
v___y_1711_ = v___y_1781_;
goto v___jp_1688_;
}
v___jp_1811_:
{
lean_object* v___x_1829_; lean_object* v_env_1830_; lean_object* v_nextMacroScope_1831_; lean_object* v_ngen_1832_; lean_object* v_auxDeclNGen_1833_; lean_object* v_traceState_1834_; lean_object* v_recordedDeps_1835_; lean_object* v_messages_1836_; lean_object* v_infoState_1837_; lean_object* v_snapshotTasks_1838_; uint16_t v___x_1839_; uint16_t v___x_1840_; uint16_t v___x_1841_; uint8_t v___x_1842_; 
v___x_1829_ = lean_st_ref_take(v___y_1816_);
v_env_1830_ = lean_ctor_get(v___x_1829_, 0);
lean_inc_ref(v_env_1830_);
v_nextMacroScope_1831_ = lean_ctor_get(v___x_1829_, 1);
lean_inc(v_nextMacroScope_1831_);
v_ngen_1832_ = lean_ctor_get(v___x_1829_, 2);
lean_inc_ref(v_ngen_1832_);
v_auxDeclNGen_1833_ = lean_ctor_get(v___x_1829_, 3);
lean_inc_ref(v_auxDeclNGen_1833_);
v_traceState_1834_ = lean_ctor_get(v___x_1829_, 4);
lean_inc_ref(v_traceState_1834_);
v_recordedDeps_1835_ = lean_ctor_get(v___x_1829_, 6);
lean_inc_ref(v_recordedDeps_1835_);
v_messages_1836_ = lean_ctor_get(v___x_1829_, 7);
lean_inc_ref(v_messages_1836_);
v_infoState_1837_ = lean_ctor_get(v___x_1829_, 8);
lean_inc_ref(v_infoState_1837_);
v_snapshotTasks_1838_ = lean_ctor_get(v___x_1829_, 9);
lean_inc_ref(v_snapshotTasks_1838_);
lean_dec(v___x_1829_);
v___x_1839_ = 512;
v___x_1840_ = lean_uint16_land(v___y_1814_, v___x_1839_);
v___x_1841_ = 0;
v___x_1842_ = lean_uint16_dec_eq(v___x_1840_, v___x_1841_);
if (v___x_1842_ == 0)
{
lean_object* v___x_1843_; 
v___x_1843_ = l_Lean_Kernel_enableDiag(v_env_1830_, v___y_1821_);
v___y_1777_ = v___y_1812_;
v___y_1778_ = v___y_1813_;
v___y_1779_ = v___y_1814_;
v___y_1780_ = v___y_1815_;
v___y_1781_ = v___y_1816_;
v___y_1782_ = v___y_1817_;
v___y_1783_ = v___y_1818_;
v___y_1784_ = v___y_1819_;
v___y_1785_ = v___y_1820_;
v___y_1786_ = v___y_1821_;
v___y_1787_ = v___y_1822_;
v___y_1788_ = v___y_1823_;
v___y_1789_ = v___y_1824_;
v___y_1790_ = v___y_1825_;
v_nextMacroScope_1791_ = v_nextMacroScope_1831_;
v_ngen_1792_ = v_ngen_1832_;
v_auxDeclNGen_1793_ = v_auxDeclNGen_1833_;
v_traceState_1794_ = v_traceState_1834_;
v_recordedDeps_1795_ = v_recordedDeps_1835_;
v_messages_1796_ = v_messages_1836_;
v_infoState_1797_ = v_infoState_1837_;
v_snapshotTasks_1798_ = v_snapshotTasks_1838_;
v___y_1799_ = v___y_1826_;
v___y_1800_ = v___y_1827_;
v___y_1801_ = v___x_1843_;
goto v___jp_1776_;
}
else
{
lean_object* v___x_1844_; 
v___x_1844_ = l_Lean_Kernel_enableDiag(v_env_1830_, v___y_1828_);
v___y_1777_ = v___y_1812_;
v___y_1778_ = v___y_1813_;
v___y_1779_ = v___y_1814_;
v___y_1780_ = v___y_1815_;
v___y_1781_ = v___y_1816_;
v___y_1782_ = v___y_1817_;
v___y_1783_ = v___y_1818_;
v___y_1784_ = v___y_1819_;
v___y_1785_ = v___y_1820_;
v___y_1786_ = v___y_1821_;
v___y_1787_ = v___y_1822_;
v___y_1788_ = v___y_1823_;
v___y_1789_ = v___y_1824_;
v___y_1790_ = v___y_1825_;
v_nextMacroScope_1791_ = v_nextMacroScope_1831_;
v_ngen_1792_ = v_ngen_1832_;
v_auxDeclNGen_1793_ = v_auxDeclNGen_1833_;
v_traceState_1794_ = v_traceState_1834_;
v_recordedDeps_1795_ = v_recordedDeps_1835_;
v_messages_1796_ = v_messages_1836_;
v_infoState_1797_ = v_infoState_1837_;
v_snapshotTasks_1798_ = v_snapshotTasks_1838_;
v___y_1799_ = v___y_1826_;
v___y_1800_ = v___y_1827_;
v___y_1801_ = v___x_1844_;
goto v___jp_1776_;
}
}
v___jp_1845_:
{
lean_object* v___x_1865_; lean_object* v_a_1866_; lean_object* v_ref_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; uint8_t v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; uint16_t v___x_1877_; lean_object* v___x_1878_; lean_object* v_env_1879_; uint8_t v___x_1880_; uint16_t v___x_1881_; uint16_t v___x_1882_; uint16_t v___x_1883_; uint8_t v___x_1884_; 
v___x_1865_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg(v___y_1849_);
v_a_1866_ = lean_ctor_get(v___x_1865_, 0);
lean_inc(v_a_1866_);
lean_dec_ref(v___x_1865_);
v_ref_1867_ = l_Lean_replaceRef(v___y_1857_, v___y_1857_);
lean_inc(v_ref_1867_);
lean_inc(v___y_1846_);
lean_inc_ref(v___y_1859_);
v___x_1868_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1868_, 0, v___y_1859_);
lean_ctor_set(v___x_1868_, 1, v___y_1846_);
lean_ctor_set(v___x_1868_, 2, v_ref_1867_);
lean_ctor_set_uint16(v___x_1868_, sizeof(void*)*3, v___y_1860_);
lean_ctor_set_uint8(v___x_1868_, sizeof(void*)*3 + 2, v___y_1862_);
lean_ctor_set_uint8(v___x_1868_, sizeof(void*)*3 + 3, v___y_1858_);
lean_ctor_set_uint8(v___x_1868_, sizeof(void*)*3 + 4, v___y_1853_);
v___x_1869_ = ((lean_object*)(l_Lean_Meta_isLevelDefEqAuxImpl___closed__6));
v___x_1870_ = 0;
v___x_1871_ = l_Lean_MessageData_ofLevel(v___y_1864_);
v___x_1872_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4);
v___x_1873_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1873_, 0, v___x_1871_);
lean_ctor_set(v___x_1873_, 1, v___x_1872_);
v___x_1874_ = l_Lean_MessageData_ofLevel(v___y_1854_);
v___x_1875_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1873_);
lean_ctor_set(v___x_1875_, 1, v___x_1874_);
lean_inc_ref(v___y_1851_);
v___x_1876_ = l_Lean_Options_set___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__2(v___y_1851_, v___x_1869_, v___x_1870_);
v___x_1877_ = l_Lean_OptionFlags_ofOptions(v___x_1876_);
v___x_1878_ = lean_st_ref_get(v___y_1849_);
v_env_1879_ = lean_ctor_get(v___x_1878_, 0);
lean_inc_ref(v_env_1879_);
lean_dec(v___x_1878_);
v___x_1880_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1879_);
lean_dec_ref(v_env_1879_);
v___x_1881_ = 512;
v___x_1882_ = lean_uint16_land(v___x_1877_, v___x_1881_);
v___x_1883_ = 0;
v___x_1884_ = lean_uint16_dec_eq(v___x_1882_, v___x_1883_);
if (v___x_1884_ == 0)
{
if (v___x_1880_ == 0)
{
lean_dec(v_ref_1867_);
lean_dec_ref(v___y_1859_);
lean_dec(v___y_1846_);
v___y_1812_ = v___y_1847_;
v___y_1813_ = v___x_1875_;
v___y_1814_ = v___x_1877_;
v___y_1815_ = v_a_1866_;
v___y_1816_ = v___y_1849_;
v___y_1817_ = v___y_1848_;
v___y_1818_ = v___y_1850_;
v___y_1819_ = v___y_1851_;
v___y_1820_ = v___y_1852_;
v___y_1821_ = v___y_1855_;
v___y_1822_ = v___y_1856_;
v___y_1823_ = v___y_1857_;
v___y_1824_ = v___x_1876_;
v___y_1825_ = v___x_1868_;
v___y_1826_ = v___y_1861_;
v___y_1827_ = v___y_1863_;
v___y_1828_ = v___x_1880_;
goto v___jp_1811_;
}
else
{
lean_inc(v___y_1849_);
v___y_1689_ = v___y_1847_;
v___y_1690_ = v___x_1875_;
v___y_1691_ = v___x_1877_;
v___y_1692_ = v_a_1866_;
v___y_1693_ = v___y_1849_;
v___y_1694_ = v___y_1848_;
v___y_1695_ = v___y_1850_;
v___y_1696_ = v___y_1851_;
v___y_1697_ = v___y_1852_;
v___y_1698_ = v___y_1855_;
v___y_1699_ = v___y_1856_;
v___y_1700_ = v___y_1857_;
v___y_1701_ = v___x_1876_;
v___y_1702_ = v___x_1868_;
v___y_1703_ = v___y_1861_;
v___y_1704_ = v___y_1863_;
v_toCold_1705_ = v___y_1859_;
v_currRecDepth_1706_ = v___y_1846_;
v_ref_1707_ = v_ref_1867_;
v_suppressElabErrors_1708_ = v___y_1862_;
v_checkDeprecated_1709_ = v___y_1858_;
v_isRecordingDeps_1710_ = v___y_1853_;
v___y_1711_ = v___y_1849_;
goto v___jp_1688_;
}
}
else
{
if (v___x_1880_ == 0)
{
lean_inc(v___y_1849_);
v___y_1689_ = v___y_1847_;
v___y_1690_ = v___x_1875_;
v___y_1691_ = v___x_1877_;
v___y_1692_ = v_a_1866_;
v___y_1693_ = v___y_1849_;
v___y_1694_ = v___y_1848_;
v___y_1695_ = v___y_1850_;
v___y_1696_ = v___y_1851_;
v___y_1697_ = v___y_1852_;
v___y_1698_ = v___y_1855_;
v___y_1699_ = v___y_1856_;
v___y_1700_ = v___y_1857_;
v___y_1701_ = v___x_1876_;
v___y_1702_ = v___x_1868_;
v___y_1703_ = v___y_1861_;
v___y_1704_ = v___y_1863_;
v_toCold_1705_ = v___y_1859_;
v_currRecDepth_1706_ = v___y_1846_;
v_ref_1707_ = v_ref_1867_;
v_suppressElabErrors_1708_ = v___y_1862_;
v_checkDeprecated_1709_ = v___y_1858_;
v_isRecordingDeps_1710_ = v___y_1853_;
v___y_1711_ = v___y_1849_;
goto v___jp_1688_;
}
else
{
lean_dec(v_ref_1867_);
lean_dec_ref(v___y_1859_);
lean_dec(v___y_1846_);
v___y_1812_ = v___y_1847_;
v___y_1813_ = v___x_1875_;
v___y_1814_ = v___x_1877_;
v___y_1815_ = v_a_1866_;
v___y_1816_ = v___y_1849_;
v___y_1817_ = v___y_1848_;
v___y_1818_ = v___y_1850_;
v___y_1819_ = v___y_1851_;
v___y_1820_ = v___y_1852_;
v___y_1821_ = v___y_1855_;
v___y_1822_ = v___y_1856_;
v___y_1823_ = v___y_1857_;
v___y_1824_ = v___x_1876_;
v___y_1825_ = v___x_1868_;
v___y_1826_ = v___y_1861_;
v___y_1827_ = v___y_1863_;
v___y_1828_ = v___x_1870_;
goto v___jp_1811_;
}
}
}
v___jp_1885_:
{
lean_object* v_toCold_1892_; lean_object* v_options_1893_; lean_object* v_currRecDepth_1894_; lean_object* v_ref_1895_; uint16_t v_optionFlags_1896_; uint8_t v_suppressElabErrors_1897_; uint8_t v_checkDeprecated_1898_; uint8_t v_isRecordingDeps_1899_; lean_object* v_inheritedTraceOptions_1900_; uint8_t v_hasTrace_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; uint8_t v___x_1906_; lean_object* v___x_1907_; lean_object* v___y_1908_; 
v_toCold_1892_ = lean_ctor_get(v___y_1890_, 0);
v_options_1893_ = lean_ctor_get(v_toCold_1892_, 2);
v_currRecDepth_1894_ = lean_ctor_get(v___y_1890_, 1);
v_ref_1895_ = lean_ctor_get(v___y_1890_, 2);
v_optionFlags_1896_ = lean_ctor_get_uint16(v___y_1890_, sizeof(void*)*3);
v_suppressElabErrors_1897_ = lean_ctor_get_uint8(v___y_1890_, sizeof(void*)*3 + 2);
v_checkDeprecated_1898_ = lean_ctor_get_uint8(v___y_1890_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1899_ = lean_ctor_get_uint8(v___y_1890_, sizeof(void*)*3 + 4);
v_inheritedTraceOptions_1900_ = lean_ctor_get(v_toCold_1892_, 11);
v_hasTrace_1901_ = lean_ctor_get_uint8(v_options_1893_, sizeof(void*)*1);
v___x_1902_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4));
v___x_1903_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5));
v___x_1904_ = l_Lean_Level_getLevelOffset(v_lhs_1886_);
v___x_1905_ = l_Lean_Level_getLevelOffset(v_rhs_1887_);
v___x_1906_ = lean_level_eq(v___x_1904_, v___x_1905_);
lean_dec(v___x_1905_);
lean_dec(v___x_1904_);
v___x_1907_ = lean_box(v___x_1906_);
lean_inc(v_rhs_1887_);
lean_inc(v_lhs_1886_);
v___y_1908_ = lean_alloc_closure((void*)(l_Lean_Meta_isLevelDefEqAuxImpl___lam__0___boxed), 10, 5);
lean_closure_set(v___y_1908_, 0, v___x_1907_);
lean_closure_set(v___y_1908_, 1, v_lhs_1886_);
lean_closure_set(v___y_1908_, 2, v_rhs_1887_);
lean_closure_set(v___y_1908_, 3, v___x_1902_);
lean_closure_set(v___y_1908_, 4, v___x_1903_);
if (v_hasTrace_1901_ == 0)
{
lean_object* v___x_1909_; 
lean_dec_ref(v___y_1908_);
v___x_1909_ = l_Lean_Meta_isLevelDefEqAuxImpl___lam__0(v___x_1906_, v_lhs_1886_, v_rhs_1887_, v___x_1902_, v___x_1903_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1890_);
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
return v___x_1909_;
}
else
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; uint8_t v___x_1913_; 
v___x_1910_ = ((lean_object*)(l_Lean_Meta_isLevelDefEqAuxImpl___closed__7));
v___x_1911_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__1));
v___x_1912_ = lean_obj_once(&l_Lean_Meta_isLevelDefEqAuxImpl___closed__8, &l_Lean_Meta_isLevelDefEqAuxImpl___closed__8_once, _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__8);
v___x_1913_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1900_, v_options_1893_, v___x_1912_);
if (v___x_1913_ == 0)
{
lean_object* v___x_1914_; uint8_t v___x_1915_; 
v___x_1914_ = l_Lean_trace_profiler;
v___x_1915_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4(v_options_1893_, v___x_1914_);
if (v___x_1915_ == 0)
{
lean_object* v___x_1916_; 
lean_dec_ref(v___y_1908_);
v___x_1916_ = l_Lean_Meta_isLevelDefEqAuxImpl___lam__0(v___x_1906_, v_lhs_1886_, v_rhs_1887_, v___x_1902_, v___x_1903_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1890_);
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
return v___x_1916_;
}
else
{
lean_inc(v_ref_1895_);
lean_inc(v_currRecDepth_1894_);
lean_inc_ref(v_options_1893_);
lean_inc_ref(v_toCold_1892_);
v___y_1846_ = v_currRecDepth_1894_;
v___y_1847_ = v___x_1910_;
v___y_1848_ = v___x_1911_;
v___y_1849_ = v___y_1891_;
v___y_1850_ = v___y_1889_;
v___y_1851_ = v_options_1893_;
v___y_1852_ = v___y_1888_;
v___y_1853_ = v_isRecordingDeps_1899_;
v___y_1854_ = v_rhs_1887_;
v___y_1855_ = v_hasTrace_1901_;
v___y_1856_ = v___y_1890_;
v___y_1857_ = v_ref_1895_;
v___y_1858_ = v_checkDeprecated_1898_;
v___y_1859_ = v_toCold_1892_;
v___y_1860_ = v_optionFlags_1896_;
v___y_1861_ = v___x_1913_;
v___y_1862_ = v_suppressElabErrors_1897_;
v___y_1863_ = v___y_1908_;
v___y_1864_ = v_lhs_1886_;
goto v___jp_1845_;
}
}
else
{
lean_inc(v_ref_1895_);
lean_inc(v_currRecDepth_1894_);
lean_inc_ref(v_options_1893_);
lean_inc_ref(v_toCold_1892_);
v___y_1846_ = v_currRecDepth_1894_;
v___y_1847_ = v___x_1910_;
v___y_1848_ = v___x_1911_;
v___y_1849_ = v___y_1891_;
v___y_1850_ = v___y_1889_;
v___y_1851_ = v_options_1893_;
v___y_1852_ = v___y_1888_;
v___y_1853_ = v_isRecordingDeps_1899_;
v___y_1854_ = v_rhs_1887_;
v___y_1855_ = v_hasTrace_1901_;
v___y_1856_ = v___y_1890_;
v___y_1857_ = v_ref_1895_;
v___y_1858_ = v_checkDeprecated_1898_;
v___y_1859_ = v_toCold_1892_;
v___y_1860_ = v_optionFlags_1896_;
v___y_1861_ = v___x_1913_;
v___y_1862_ = v_suppressElabErrors_1897_;
v___y_1863_ = v___y_1908_;
v___y_1864_ = v_lhs_1886_;
goto v___jp_1845_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___boxed(lean_object* v_x_1920_, lean_object* v_x_1921_, lean_object* v_a_1922_, lean_object* v_a_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_){
_start:
{
lean_object* v_res_1927_; 
v_res_1927_ = lean_is_level_def_eq(v_x_1920_, v_x_1921_, v_a_1922_, v_a_1923_, v_a_1924_, v_a_1925_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6(lean_object* v_00_u03b1_1928_, lean_object* v_x_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_){
_start:
{
lean_object* v___x_1935_; 
v___x_1935_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg(v_x_1929_);
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___boxed(lean_object* v_00_u03b1_1936_, lean_object* v_x_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_){
_start:
{
lean_object* v_res_1943_; 
v_res_1943_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6(v_00_u03b1_1936_, v_x_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_);
lean_dec(v___y_1941_);
lean_dec_ref(v___y_1940_);
lean_dec(v___y_1939_);
lean_dec_ref(v___y_1938_);
return v_res_1943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2000_; uint8_t v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; 
v___x_2000_ = ((lean_object*)(l_Lean_Meta_isLevelDefEqAuxImpl___closed__7));
v___x_2001_ = 0;
v___x_2002_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_));
v___x_2003_ = l_Lean_registerTraceClass(v___x_2000_, v___x_2001_, v___x_2002_);
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_object* v___x_2004_; uint8_t v___x_2005_; lean_object* v___x_2006_; 
lean_dec_ref_known(v___x_2003_, 1);
v___x_2004_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1));
v___x_2005_ = 1;
v___x_2006_ = l_Lean_registerTraceClass(v___x_2004_, v___x_2005_, v___x_2002_);
return v___x_2006_;
}
else
{
return v___x_2003_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2____boxed(lean_object* v_a_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_();
return v_res_2008_;
}
}
lean_object* runtime_initialize_Lean_Util_CollectMVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DecLevel(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_HasAssignableMVar(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_LevelDefEq(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Util_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DecLevel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HasAssignableMVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_LevelDefEq(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_CollectMVars(uint8_t builtin);
lean_object* initialize_Lean_Meta_DecLevel(uint8_t builtin);
lean_object* initialize_Lean_Meta_HasAssignableMVar(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_LevelDefEq(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DecLevel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_HasAssignableMVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LevelDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_LevelDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_LevelDefEq(builtin);
}
#ifdef __cplusplus
}
#endif
