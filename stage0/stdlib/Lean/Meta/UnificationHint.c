// Lean compiler output
// Module: Lean.Meta.UnificationHint
// Imports: public import Lean.Meta.SynthInstance
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_value_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Meta_lambdaMetaTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Config_toConfigWithKey(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty___redArg();
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_instBEqKey_beq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabited___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getResetPostponed___redArg(lean_object*);
lean_object* l_Lean_Meta_processPostponed(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instantiateValueLevelParams(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* lean_is_expr_def_eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Attribute_Builtin_ensureNoArgs(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_instToFormatName__lean___lam__0(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_format___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_recordExtGenAccess___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_DiscrTree_getMatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
static const lean_array_object l_Lean_Meta_instInhabitedUnificationHintEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_instInhabitedUnificationHintEntry_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedUnificationHintEntry_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instInhabitedUnificationHintEntry_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_instInhabitedUnificationHintEntry_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_instInhabitedUnificationHintEntry_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedUnificationHintEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedUnificationHintEntry_default = (const lean_object*)&l_Lean_Meta_instInhabitedUnificationHintEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedUnificationHintEntry = (const lean_object*)&l_Lean_Meta_instInhabitedUnificationHintEntry_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedUnificationHints_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedUnificationHints_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedUnificationHints_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedUnificationHints;
LEAN_EXPORT lean_object* l_Lean_Meta_instToFormatUnificationHints___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instToFormatUnificationHints___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToFormatName__lean___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instToFormatUnificationHints___closed__0 = (const lean_object*)&l_Lean_Meta_instToFormatUnificationHints___closed__0_value;
static const lean_closure_object l_Lean_Meta_instToFormatUnificationHints___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instToFormatUnificationHints___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_instToFormatUnificationHints___closed__0_value)} };
static const lean_object* l_Lean_Meta_instToFormatUnificationHints___closed__1 = (const lean_object*)&l_Lean_Meta_instToFormatUnificationHints___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instToFormatUnificationHints = (const lean_object*)&l_Lean_Meta_instToFormatUnificationHints___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 0, 1, 0, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config___closed__0 = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__13___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__2(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0___closed__0_value),((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__2(lean_object*);
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.DiscrTree.Basic"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.DiscrTree.insertKeyValue"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid key sequence"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_UnificationHints_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__13(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "unificationHintExtension"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 204, 145, 124, 244, 133, 63, 146)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_UnificationHints_add, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unificationHintExtension;
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__0 = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__1 = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__1_value;
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "invalid unification hint constraint, unexpected term"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__2 = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint(lean_object*);
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "invalid unification hint constraint, unexpected dependency"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decode___closed__0 = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decode___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decode___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decode___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decode(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint___closed__0 = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "invalid unification hint, failed to unify constraint left-hand-side"};
static const lean_object* l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__0 = (const lean_object*)&l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__0_value;
static lean_once_cell_t l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__1;
static const lean_string_object l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "\nwith right-hand-side"};
static const lean_object* l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__2 = (const lean_object*)&l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__2_value;
static lean_once_cell_t l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__3;
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "invalid unification hint, failed to unify pattern left-hand-side"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint___closed__0 = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_addUnificationHint_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_addUnificationHint_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_addUnificationHint_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_addUnificationHint_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__3;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__4;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_addUnificationHint___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "invalid unification hint, it must be a definition"};
static const lean_object* l_Lean_Meta_addUnificationHint___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_addUnificationHint___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_addUnificationHint___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addUnificationHint___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_addUnificationHint___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addUnificationHint___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addUnificationHint(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addUnificationHint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "UnificationHint"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(73, 112, 70, 159, 80, 199, 244, 3)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2____boxed, .m_arity = 8, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(12, 201, 225, 55, 169, 192, 235, 23)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(141, 76, 73, 18, 200, 34, 166, 102)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(69, 195, 224, 136, 81, 175, 205, 78)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(76, 1, 154, 40, 227, 230, 26, 25)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(37, 208, 18, 32, 63, 140, 98, 77)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(240, 91, 67, 57, 71, 246, 20, 20)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(124, 2, 155, 161, 116, 126, 168, 23)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(147, 237, 31, 132, 39, 246, 206, 71)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unification_hint"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(169, 153, 150, 74, 163, 227, 238, 154)}};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unification hint"};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_getRecordedHints(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_getRecordedHints___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_isDefEqPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_isDefEqPattern___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__2___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isDefEq"};
static const lean_object* l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__0 = (const lean_object*)&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__0_value;
static const lean_string_object l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hint"};
static const lean_object* l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__1 = (const lean_object*)&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__1_value;
static const lean_ctor_object l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(210, 173, 228, 229, 125, 117, 225, 10)}};
static const lean_ctor_object l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 131, 150, 64, 79, 8, 33, 190)}};
static const lean_object* l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__2 = (const lean_object*)&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__2_value;
static lean_once_cell_t l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__3;
static const lean_ctor_object l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__4 = (const lean_object*)&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__4_value;
static const lean_string_object l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__5 = (const lean_object*)&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__5_value;
static const lean_ctor_object l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__6 = (const lean_object*)&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__6_value;
static lean_once_cell_t l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__7;
static const lean_string_object l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = " succeeded, applying constraints"};
static const lean_object* l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__8 = (const lean_object*)&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__8_value;
static lean_once_cell_t l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__6___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hint "};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " at "};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__3;
static const lean_string_object l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " =\?= "};
static const lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__9___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__7_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__8___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_tryUnificationHints_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_tryUnificationHints_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_tryUnificationHints(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_tryUnificationHints___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Meta_instInhabitedUnificationHints_default___closed__0(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lean_Meta_DiscrTree_empty___redArg();
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedUnificationHints_default(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l_Lean_Meta_instInhabitedUnificationHints_default___closed__0, &l_Lean_Meta_instInhabitedUnificationHints_default___closed__0_once, _init_l_Lean_Meta_instInhabitedUnificationHints_default___closed__0);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedUnificationHints(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_obj_once(&l_Lean_Meta_instInhabitedUnificationHints_default___closed__0, &l_Lean_Meta_instInhabitedUnificationHints_default___closed__0_once, _init_l_Lean_Meta_instInhabitedUnificationHints_default___closed__0);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instToFormatUnificationHints___lam__0(lean_object* v___f_11_, lean_object* v_h_12_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = l_Lean_Meta_DiscrTree_format___redArg(v___f_11_, v_h_12_);
return v___x_13_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config___closed__1(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config___closed__0));
v___x_25_ = l_Lean_Meta_Config_toConfigWithKey(v___x_24_);
return v___x_25_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config___closed__1, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config___closed__1_once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config___closed__1);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__12_spec__13___redArg(lean_object* v_x_27_, lean_object* v_x_28_, lean_object* v_x_29_, lean_object* v_x_30_){
_start:
{
lean_object* v_ks_31_; lean_object* v_vs_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_56_; 
v_ks_31_ = lean_ctor_get(v_x_27_, 0);
v_vs_32_ = lean_ctor_get(v_x_27_, 1);
v_isSharedCheck_56_ = !lean_is_exclusive(v_x_27_);
if (v_isSharedCheck_56_ == 0)
{
v___x_34_ = v_x_27_;
v_isShared_35_ = v_isSharedCheck_56_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_vs_32_);
lean_inc(v_ks_31_);
lean_dec(v_x_27_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_56_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_36_; uint8_t v___x_37_; 
v___x_36_ = lean_array_get_size(v_ks_31_);
v___x_37_ = lean_nat_dec_lt(v_x_28_, v___x_36_);
if (v___x_37_ == 0)
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_41_; 
lean_dec(v_x_28_);
v___x_38_ = lean_array_push(v_ks_31_, v_x_29_);
v___x_39_ = lean_array_push(v_vs_32_, v_x_30_);
if (v_isShared_35_ == 0)
{
lean_ctor_set(v___x_34_, 1, v___x_39_);
lean_ctor_set(v___x_34_, 0, v___x_38_);
v___x_41_ = v___x_34_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v___x_38_);
lean_ctor_set(v_reuseFailAlloc_42_, 1, v___x_39_);
v___x_41_ = v_reuseFailAlloc_42_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
return v___x_41_;
}
}
else
{
lean_object* v_k_x27_43_; uint8_t v___x_44_; 
v_k_x27_43_ = lean_array_fget_borrowed(v_ks_31_, v_x_28_);
v___x_44_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_29_, v_k_x27_43_);
if (v___x_44_ == 0)
{
lean_object* v___x_46_; 
if (v_isShared_35_ == 0)
{
v___x_46_ = v___x_34_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v_ks_31_);
lean_ctor_set(v_reuseFailAlloc_50_, 1, v_vs_32_);
v___x_46_ = v_reuseFailAlloc_50_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = lean_unsigned_to_nat(1u);
v___x_48_ = lean_nat_add(v_x_28_, v___x_47_);
lean_dec(v_x_28_);
v_x_27_ = v___x_46_;
v_x_28_ = v___x_48_;
goto _start;
}
}
else
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_54_; 
v___x_51_ = lean_array_fset(v_ks_31_, v_x_28_, v_x_29_);
v___x_52_ = lean_array_fset(v_vs_32_, v_x_28_, v_x_30_);
lean_dec(v_x_28_);
if (v_isShared_35_ == 0)
{
lean_ctor_set(v___x_34_, 1, v___x_52_);
lean_ctor_set(v___x_34_, 0, v___x_51_);
v___x_54_ = v___x_34_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v___x_51_);
lean_ctor_set(v_reuseFailAlloc_55_, 1, v___x_52_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__12___redArg(lean_object* v_n_57_, lean_object* v_k_58_, lean_object* v_v_59_){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_unsigned_to_nat(0u);
v___x_61_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__12_spec__13___redArg(v_n_57_, v___x_60_, v_k_58_, v_v_59_);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___redArg(lean_object* v_x_63_, size_t v_x_64_, size_t v_x_65_, lean_object* v_x_66_, lean_object* v_x_67_){
_start:
{
if (lean_obj_tag(v_x_63_) == 0)
{
lean_object* v_es_68_; size_t v___x_69_; size_t v___x_70_; lean_object* v_j_71_; lean_object* v___x_72_; uint8_t v___x_73_; 
v_es_68_ = lean_ctor_get(v_x_63_, 0);
v___x_69_ = ((size_t)31ULL);
v___x_70_ = lean_usize_land(v_x_64_, v___x_69_);
v_j_71_ = lean_usize_to_nat(v___x_70_);
v___x_72_ = lean_array_get_size(v_es_68_);
v___x_73_ = lean_nat_dec_lt(v_j_71_, v___x_72_);
if (v___x_73_ == 0)
{
lean_dec(v_j_71_);
lean_dec(v_x_67_);
lean_dec(v_x_66_);
return v_x_63_;
}
else
{
lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_112_; 
lean_inc_ref(v_es_68_);
v_isSharedCheck_112_ = !lean_is_exclusive(v_x_63_);
if (v_isSharedCheck_112_ == 0)
{
lean_object* v_unused_113_; 
v_unused_113_ = lean_ctor_get(v_x_63_, 0);
lean_dec(v_unused_113_);
v___x_75_ = v_x_63_;
v_isShared_76_ = v_isSharedCheck_112_;
goto v_resetjp_74_;
}
else
{
lean_dec(v_x_63_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_112_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v_v_77_; lean_object* v___x_78_; lean_object* v_xs_x27_79_; lean_object* v___y_81_; 
v_v_77_ = lean_array_fget(v_es_68_, v_j_71_);
v___x_78_ = lean_box(0);
v_xs_x27_79_ = lean_array_fset(v_es_68_, v_j_71_, v___x_78_);
switch(lean_obj_tag(v_v_77_))
{
case 0:
{
lean_object* v_key_86_; lean_object* v_val_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_97_; 
v_key_86_ = lean_ctor_get(v_v_77_, 0);
v_val_87_ = lean_ctor_get(v_v_77_, 1);
v_isSharedCheck_97_ = !lean_is_exclusive(v_v_77_);
if (v_isSharedCheck_97_ == 0)
{
v___x_89_ = v_v_77_;
v_isShared_90_ = v_isSharedCheck_97_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_val_87_);
lean_inc(v_key_86_);
lean_dec(v_v_77_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_97_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
uint8_t v___x_91_; 
v___x_91_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_66_, v_key_86_);
if (v___x_91_ == 0)
{
lean_object* v___x_92_; lean_object* v___x_93_; 
lean_del_object(v___x_89_);
v___x_92_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_86_, v_val_87_, v_x_66_, v_x_67_);
v___x_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
v___y_81_ = v___x_93_;
goto v___jp_80_;
}
else
{
lean_object* v___x_95_; 
lean_dec(v_val_87_);
lean_dec(v_key_86_);
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 1, v_x_67_);
lean_ctor_set(v___x_89_, 0, v_x_66_);
v___x_95_ = v___x_89_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v_x_66_);
lean_ctor_set(v_reuseFailAlloc_96_, 1, v_x_67_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
v___y_81_ = v___x_95_;
goto v___jp_80_;
}
}
}
}
case 1:
{
lean_object* v_node_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_110_; 
v_node_98_ = lean_ctor_get(v_v_77_, 0);
v_isSharedCheck_110_ = !lean_is_exclusive(v_v_77_);
if (v_isSharedCheck_110_ == 0)
{
v___x_100_ = v_v_77_;
v_isShared_101_ = v_isSharedCheck_110_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_node_98_);
lean_dec(v_v_77_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_110_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
size_t v___x_102_; size_t v___x_103_; size_t v___x_104_; size_t v___x_105_; lean_object* v___x_106_; lean_object* v___x_108_; 
v___x_102_ = ((size_t)5ULL);
v___x_103_ = lean_usize_shift_right(v_x_64_, v___x_102_);
v___x_104_ = ((size_t)1ULL);
v___x_105_ = lean_usize_add(v_x_65_, v___x_104_);
v___x_106_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___redArg(v_node_98_, v___x_103_, v___x_105_, v_x_66_, v_x_67_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 0, v___x_106_);
v___x_108_ = v___x_100_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v___x_106_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
v___y_81_ = v___x_108_;
goto v___jp_80_;
}
}
}
default: 
{
lean_object* v___x_111_; 
v___x_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_111_, 0, v_x_66_);
lean_ctor_set(v___x_111_, 1, v_x_67_);
v___y_81_ = v___x_111_;
goto v___jp_80_;
}
}
v___jp_80_:
{
lean_object* v___x_82_; lean_object* v___x_84_; 
v___x_82_ = lean_array_fset(v_xs_x27_79_, v_j_71_, v___y_81_);
lean_dec(v_j_71_);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 0, v___x_82_);
v___x_84_ = v___x_75_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_82_);
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
else
{
lean_object* v_ks_114_; lean_object* v_vs_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_133_; 
v_ks_114_ = lean_ctor_get(v_x_63_, 0);
v_vs_115_ = lean_ctor_get(v_x_63_, 1);
v_isSharedCheck_133_ = !lean_is_exclusive(v_x_63_);
if (v_isSharedCheck_133_ == 0)
{
v___x_117_ = v_x_63_;
v_isShared_118_ = v_isSharedCheck_133_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_vs_115_);
lean_inc(v_ks_114_);
lean_dec(v_x_63_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_133_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_120_; 
if (v_isShared_118_ == 0)
{
v___x_120_ = v___x_117_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v_ks_114_);
lean_ctor_set(v_reuseFailAlloc_132_, 1, v_vs_115_);
v___x_120_ = v_reuseFailAlloc_132_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
lean_object* v_newNode_121_; size_t v___x_122_; uint8_t v___x_123_; 
v_newNode_121_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__12___redArg(v___x_120_, v_x_66_, v_x_67_);
v___x_122_ = ((size_t)7ULL);
v___x_123_ = lean_usize_dec_le(v___x_122_, v_x_65_);
if (v___x_123_ == 0)
{
lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_124_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_121_);
v___x_125_ = lean_unsigned_to_nat(4u);
v___x_126_ = lean_nat_dec_lt(v___x_124_, v___x_125_);
lean_dec(v___x_124_);
if (v___x_126_ == 0)
{
lean_object* v_ks_127_; lean_object* v_vs_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v_ks_127_ = lean_ctor_get(v_newNode_121_, 0);
lean_inc_ref(v_ks_127_);
v_vs_128_ = lean_ctor_get(v_newNode_121_, 1);
lean_inc_ref(v_vs_128_);
lean_dec_ref(v_newNode_121_);
v___x_129_ = lean_unsigned_to_nat(0u);
v___x_130_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___redArg___closed__0);
v___x_131_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__13___redArg(v_x_65_, v_ks_127_, v_vs_128_, v___x_129_, v___x_130_);
lean_dec_ref(v_vs_128_);
lean_dec_ref(v_ks_127_);
return v___x_131_;
}
else
{
return v_newNode_121_;
}
}
else
{
return v_newNode_121_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__13___redArg(size_t v_depth_134_, lean_object* v_keys_135_, lean_object* v_vals_136_, lean_object* v_i_137_, lean_object* v_entries_138_){
_start:
{
lean_object* v___x_139_; uint8_t v___x_140_; 
v___x_139_ = lean_array_get_size(v_keys_135_);
v___x_140_ = lean_nat_dec_lt(v_i_137_, v___x_139_);
if (v___x_140_ == 0)
{
lean_dec(v_i_137_);
return v_entries_138_;
}
else
{
lean_object* v_k_141_; lean_object* v_v_142_; uint64_t v___x_143_; size_t v_h_144_; size_t v___x_145_; lean_object* v___x_146_; size_t v___x_147_; size_t v___x_148_; size_t v___x_149_; size_t v_h_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v_k_141_ = lean_array_fget_borrowed(v_keys_135_, v_i_137_);
v_v_142_ = lean_array_fget_borrowed(v_vals_136_, v_i_137_);
v___x_143_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_141_);
v_h_144_ = lean_uint64_to_usize(v___x_143_);
v___x_145_ = ((size_t)5ULL);
v___x_146_ = lean_unsigned_to_nat(1u);
v___x_147_ = ((size_t)1ULL);
v___x_148_ = lean_usize_sub(v_depth_134_, v___x_147_);
v___x_149_ = lean_usize_mul(v___x_145_, v___x_148_);
v_h_150_ = lean_usize_shift_right(v_h_144_, v___x_149_);
v___x_151_ = lean_nat_add(v_i_137_, v___x_146_);
lean_dec(v_i_137_);
lean_inc(v_v_142_);
lean_inc(v_k_141_);
v___x_152_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___redArg(v_entries_138_, v_h_150_, v_depth_134_, v_k_141_, v_v_142_);
v_i_137_ = v___x_151_;
v_entries_138_ = v___x_152_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__13___redArg___boxed(lean_object* v_depth_154_, lean_object* v_keys_155_, lean_object* v_vals_156_, lean_object* v_i_157_, lean_object* v_entries_158_){
_start:
{
size_t v_depth_boxed_159_; lean_object* v_res_160_; 
v_depth_boxed_159_ = lean_unbox_usize(v_depth_154_);
lean_dec(v_depth_154_);
v_res_160_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__13___redArg(v_depth_boxed_159_, v_keys_155_, v_vals_156_, v_i_157_, v_entries_158_);
lean_dec_ref(v_vals_156_);
lean_dec_ref(v_keys_155_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___redArg___boxed(lean_object* v_x_161_, lean_object* v_x_162_, lean_object* v_x_163_, lean_object* v_x_164_, lean_object* v_x_165_){
_start:
{
size_t v_x_2629__boxed_166_; size_t v_x_2630__boxed_167_; lean_object* v_res_168_; 
v_x_2629__boxed_166_ = lean_unbox_usize(v_x_162_);
lean_dec(v_x_162_);
v_x_2630__boxed_167_ = lean_unbox_usize(v_x_163_);
lean_dec(v_x_163_);
v_res_168_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___redArg(v_x_161_, v_x_2629__boxed_166_, v_x_2630__boxed_167_, v_x_164_, v_x_165_);
return v_res_168_;
}
}
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0(lean_object* v_a_169_, lean_object* v_b_170_){
_start:
{
lean_object* v_fst_171_; lean_object* v_fst_172_; uint8_t v___x_173_; 
v_fst_171_ = lean_ctor_get(v_a_169_, 0);
v_fst_172_ = lean_ctor_get(v_b_170_, 0);
v___x_173_ = l_Lean_Meta_DiscrTree_Key_lt(v_fst_171_, v_fst_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v_a_174_, lean_object* v_b_175_){
_start:
{
uint8_t v_res_176_; lean_object* v_r_177_; 
v_res_176_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0(v_a_174_, v_b_175_);
lean_dec_ref(v_b_175_);
lean_dec_ref(v_a_174_);
v_r_177_ = lean_box(v_res_176_);
return v_r_177_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v___x_178_, lean_object* v_as_179_, lean_object* v_k_180_, lean_object* v_x_181_, lean_object* v_x_182_){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v_mid_185_; lean_object* v_midVal_186_; uint8_t v___x_187_; 
v___x_183_ = lean_nat_add(v_x_181_, v_x_182_);
v___x_184_ = lean_unsigned_to_nat(1u);
v_mid_185_ = lean_nat_shiftr(v___x_183_, v___x_184_);
lean_dec(v___x_183_);
v_midVal_186_ = lean_array_fget_borrowed(v_as_179_, v_mid_185_);
v___x_187_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0(v_midVal_186_, v_k_180_);
if (v___x_187_ == 0)
{
uint8_t v___x_188_; 
lean_dec(v_x_182_);
v___x_188_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0(v_k_180_, v_midVal_186_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; uint8_t v___x_190_; 
lean_dec(v_x_181_);
v___x_189_ = lean_array_get_size(v_as_179_);
v___x_190_ = lean_nat_dec_lt(v_mid_185_, v___x_189_);
if (v___x_190_ == 0)
{
lean_dec(v_mid_185_);
lean_dec_ref(v___x_178_);
return v_as_179_;
}
else
{
lean_object* v___x_191_; lean_object* v_xs_x27_192_; lean_object* v___x_193_; 
v___x_191_ = lean_box(0);
v_xs_x27_192_ = lean_array_fset(v_as_179_, v_mid_185_, v___x_191_);
v___x_193_ = lean_array_fset(v_xs_x27_192_, v_mid_185_, v___x_178_);
lean_dec(v_mid_185_);
return v___x_193_;
}
}
else
{
v_x_182_ = v_mid_185_;
goto _start;
}
}
else
{
uint8_t v___x_195_; 
v___x_195_ = lean_nat_dec_eq(v_mid_185_, v_x_181_);
if (v___x_195_ == 0)
{
lean_dec(v_x_181_);
v_x_181_ = v_mid_185_;
goto _start;
}
else
{
lean_object* v___x_197_; lean_object* v_j_198_; lean_object* v_as_199_; lean_object* v___x_200_; 
lean_dec(v_mid_185_);
lean_dec(v_x_182_);
v___x_197_ = lean_nat_add(v_x_181_, v___x_184_);
lean_dec(v_x_181_);
v_j_198_ = lean_array_get_size(v_as_179_);
v_as_199_ = lean_array_push(v_as_179_, v___x_178_);
v___x_200_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_197_, v_as_199_, v_j_198_);
lean_dec(v___x_197_);
return v___x_200_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v___x_201_, lean_object* v_as_202_, lean_object* v_k_203_, lean_object* v_x_204_, lean_object* v_x_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1_spec__3___redArg(v___x_201_, v_as_202_, v_k_203_, v_x_204_, v_x_205_);
lean_dec_ref(v_k_203_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1(lean_object* v___x_207_, lean_object* v_as_208_, lean_object* v_k_209_){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; uint8_t v___x_212_; 
v___x_210_ = lean_array_get_size(v_as_208_);
v___x_211_ = lean_unsigned_to_nat(0u);
v___x_212_ = lean_nat_dec_eq(v___x_210_, v___x_211_);
if (v___x_212_ == 0)
{
lean_object* v___x_213_; uint8_t v___x_214_; 
v___x_213_ = lean_array_fget_borrowed(v_as_208_, v___x_211_);
v___x_214_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0(v_k_209_, v___x_213_);
if (v___x_214_ == 0)
{
uint8_t v___x_215_; 
v___x_215_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0(v___x_213_, v_k_209_);
if (v___x_215_ == 0)
{
uint8_t v___x_216_; 
v___x_216_ = lean_nat_dec_lt(v___x_211_, v___x_210_);
if (v___x_216_ == 0)
{
lean_dec_ref(v___x_207_);
return v_as_208_;
}
else
{
lean_object* v___x_217_; lean_object* v_xs_x27_218_; lean_object* v___x_219_; 
v___x_217_ = lean_box(0);
v_xs_x27_218_ = lean_array_fset(v_as_208_, v___x_211_, v___x_217_);
v___x_219_ = lean_array_fset(v_xs_x27_218_, v___x_211_, v___x_207_);
return v___x_219_;
}
}
else
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_220_ = lean_unsigned_to_nat(1u);
v___x_221_ = lean_nat_sub(v___x_210_, v___x_220_);
v___x_222_ = lean_array_fget_borrowed(v_as_208_, v___x_221_);
v___x_223_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0(v___x_222_, v_k_209_);
if (v___x_223_ == 0)
{
uint8_t v___x_224_; 
v___x_224_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0(v_k_209_, v___x_222_);
if (v___x_224_ == 0)
{
uint8_t v___x_225_; 
v___x_225_ = lean_nat_dec_lt(v___x_221_, v___x_210_);
if (v___x_225_ == 0)
{
lean_dec(v___x_221_);
lean_dec_ref(v___x_207_);
return v_as_208_;
}
else
{
lean_object* v___x_226_; lean_object* v_xs_x27_227_; lean_object* v___x_228_; 
v___x_226_ = lean_box(0);
v_xs_x27_227_ = lean_array_fset(v_as_208_, v___x_221_, v___x_226_);
v___x_228_ = lean_array_fset(v_xs_x27_227_, v___x_221_, v___x_207_);
lean_dec(v___x_221_);
return v___x_228_;
}
}
else
{
lean_object* v___x_229_; 
v___x_229_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1_spec__3___redArg(v___x_207_, v_as_208_, v_k_209_, v___x_211_, v___x_221_);
return v___x_229_;
}
}
else
{
lean_object* v___x_230_; 
lean_dec(v___x_221_);
v___x_230_ = lean_array_push(v_as_208_, v___x_207_);
return v___x_230_;
}
}
}
else
{
lean_object* v_as_231_; lean_object* v___x_232_; 
v_as_231_ = lean_array_push(v_as_208_, v___x_207_);
v___x_232_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_211_, v_as_231_, v___x_210_);
return v___x_232_;
}
}
else
{
lean_object* v___x_233_; 
v___x_233_ = lean_array_push(v_as_208_, v___x_207_);
return v___x_233_;
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___boxed(lean_object* v___x_234_, lean_object* v_as_235_, lean_object* v_k_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1(v___x_234_, v_as_235_, v_k_236_);
lean_dec_ref(v_k_236_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___lam__0(lean_object* v_x_238_, lean_object* v_keys_239_, lean_object* v_v_240_, lean_object* v_k_241_, lean_object* v_x_242_){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v_c_245_; lean_object* v___x_246_; 
v___x_243_ = lean_unsigned_to_nat(1u);
v___x_244_ = lean_nat_add(v_x_238_, v___x_243_);
v_c_245_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_239_, v_v_240_, v___x_244_);
lean_dec(v___x_244_);
v___x_246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_246_, 0, v_k_241_);
lean_ctor_set(v___x_246_, 1, v_c_245_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___lam__0___boxed(lean_object* v_x_247_, lean_object* v_keys_248_, lean_object* v_v_249_, lean_object* v_k_250_, lean_object* v_x_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___lam__0(v_x_247_, v_keys_248_, v_v_249_, v_k_250_, v_x_251_);
lean_dec_ref(v_keys_248_);
lean_dec(v_x_247_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__2_spec__5(lean_object* v_vs_253_, lean_object* v_v_254_, lean_object* v_i_255_){
_start:
{
lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_256_ = lean_array_get_size(v_vs_253_);
v___x_257_ = lean_nat_dec_lt(v_i_255_, v___x_256_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; 
lean_dec(v_i_255_);
v___x_258_ = lean_array_push(v_vs_253_, v_v_254_);
return v___x_258_;
}
else
{
lean_object* v___x_259_; uint8_t v___x_260_; 
v___x_259_ = lean_array_fget_borrowed(v_vs_253_, v_i_255_);
v___x_260_ = lean_name_eq(v_v_254_, v___x_259_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = lean_unsigned_to_nat(1u);
v___x_262_ = lean_nat_add(v_i_255_, v___x_261_);
lean_dec(v_i_255_);
v_i_255_ = v___x_262_;
goto _start;
}
else
{
lean_object* v___x_264_; 
v___x_264_ = lean_array_fset(v_vs_253_, v_i_255_, v_v_254_);
lean_dec(v_i_255_);
return v___x_264_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__2(lean_object* v_vs_265_, lean_object* v_v_266_){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(0u);
v___x_268_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__2_spec__5(v_vs_265_, v_v_266_, v___x_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3_spec__7___redArg(lean_object* v_x_273_, lean_object* v_keys_274_, lean_object* v_v_275_, lean_object* v_k_276_, lean_object* v_as_277_, lean_object* v_k_278_, lean_object* v_x_279_, lean_object* v_x_280_){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v_mid_283_; lean_object* v_midVal_284_; uint8_t v___x_285_; 
v___x_281_ = lean_nat_add(v_x_279_, v_x_280_);
v___x_282_ = lean_unsigned_to_nat(1u);
v_mid_283_ = lean_nat_shiftr(v___x_281_, v___x_282_);
lean_dec(v___x_281_);
v_midVal_284_ = lean_array_fget(v_as_277_, v_mid_283_);
v___x_285_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0(v_midVal_284_, v_k_278_);
if (v___x_285_ == 0)
{
uint8_t v___x_286_; 
lean_dec(v_x_280_);
v___x_286_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0(v_k_278_, v_midVal_284_);
if (v___x_286_ == 0)
{
lean_object* v___x_287_; uint8_t v___x_288_; 
lean_dec(v_x_279_);
v___x_287_ = lean_array_get_size(v_as_277_);
v___x_288_ = lean_nat_dec_lt(v_mid_283_, v___x_287_);
if (v___x_288_ == 0)
{
lean_dec(v_midVal_284_);
lean_dec(v_mid_283_);
lean_dec(v_k_276_);
lean_dec(v_v_275_);
return v_as_277_;
}
else
{
lean_object* v_snd_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_301_; 
v_snd_289_ = lean_ctor_get(v_midVal_284_, 1);
v_isSharedCheck_301_ = !lean_is_exclusive(v_midVal_284_);
if (v_isSharedCheck_301_ == 0)
{
lean_object* v_unused_302_; 
v_unused_302_ = lean_ctor_get(v_midVal_284_, 0);
lean_dec(v_unused_302_);
v___x_291_ = v_midVal_284_;
v_isShared_292_ = v_isSharedCheck_301_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_snd_289_);
lean_dec(v_midVal_284_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_301_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_293_; lean_object* v_xs_x27_294_; lean_object* v___x_295_; lean_object* v_c_296_; lean_object* v___x_298_; 
v___x_293_ = lean_box(0);
v_xs_x27_294_ = lean_array_fset(v_as_277_, v_mid_283_, v___x_293_);
v___x_295_ = lean_nat_add(v_x_273_, v___x_282_);
v_c_296_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0(v_keys_274_, v_v_275_, v___x_295_, v_snd_289_);
lean_dec(v___x_295_);
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 1, v_c_296_);
lean_ctor_set(v___x_291_, 0, v_k_276_);
v___x_298_ = v___x_291_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_k_276_);
lean_ctor_set(v_reuseFailAlloc_300_, 1, v_c_296_);
v___x_298_ = v_reuseFailAlloc_300_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
lean_object* v___x_299_; 
v___x_299_ = lean_array_fset(v_xs_x27_294_, v_mid_283_, v___x_298_);
lean_dec(v_mid_283_);
return v___x_299_;
}
}
}
}
else
{
lean_dec(v_midVal_284_);
v_x_280_ = v_mid_283_;
goto _start;
}
}
else
{
uint8_t v___x_304_; 
lean_dec(v_midVal_284_);
v___x_304_ = lean_nat_dec_eq(v_mid_283_, v_x_279_);
if (v___x_304_ == 0)
{
lean_dec(v_x_279_);
v_x_279_ = v_mid_283_;
goto _start;
}
else
{
lean_object* v___x_306_; lean_object* v_c_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v_j_310_; lean_object* v_as_311_; lean_object* v___x_312_; 
lean_dec(v_mid_283_);
lean_dec(v_x_280_);
v___x_306_ = lean_nat_add(v_x_273_, v___x_282_);
v_c_307_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_274_, v_v_275_, v___x_306_);
lean_dec(v___x_306_);
v___x_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_308_, 0, v_k_276_);
lean_ctor_set(v___x_308_, 1, v_c_307_);
v___x_309_ = lean_nat_add(v_x_279_, v___x_282_);
lean_dec(v_x_279_);
v_j_310_ = lean_array_get_size(v_as_277_);
v_as_311_ = lean_array_push(v_as_277_, v___x_308_);
v___x_312_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_309_, v_as_311_, v_j_310_);
lean_dec(v___x_309_);
return v___x_312_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3(lean_object* v_x_313_, lean_object* v_keys_314_, lean_object* v_v_315_, lean_object* v_k_316_, lean_object* v_as_317_, lean_object* v_k_318_){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; uint8_t v___x_321_; 
v___x_319_ = lean_array_get_size(v_as_317_);
v___x_320_ = lean_unsigned_to_nat(0u);
v___x_321_ = lean_nat_dec_eq(v___x_319_, v___x_320_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_322_ = lean_array_fget_borrowed(v_as_317_, v___x_320_);
v___x_323_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0(v_k_318_, v___x_322_);
if (v___x_323_ == 0)
{
uint8_t v___x_324_; 
v___x_324_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0(v___x_322_, v_k_318_);
if (v___x_324_ == 0)
{
uint8_t v___x_325_; 
v___x_325_ = lean_nat_dec_lt(v___x_320_, v___x_319_);
if (v___x_325_ == 0)
{
lean_dec(v_k_316_);
lean_dec(v_v_315_);
return v_as_317_;
}
else
{
lean_object* v___x_326_; lean_object* v_xs_x27_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
lean_inc(v___x_322_);
v___x_326_ = lean_box(0);
v_xs_x27_327_ = lean_array_fset(v_as_317_, v___x_320_, v___x_326_);
v___x_328_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___lam__2(v_x_313_, v_keys_314_, v_v_315_, v_k_316_, v___x_322_);
v___x_329_ = lean_array_fset(v_xs_x27_327_, v___x_320_, v___x_328_);
return v___x_329_;
}
}
else
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_330_ = lean_unsigned_to_nat(1u);
v___x_331_ = lean_nat_sub(v___x_319_, v___x_330_);
v___x_332_ = lean_array_fget_borrowed(v_as_317_, v___x_331_);
v___x_333_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0(v___x_332_, v_k_318_);
if (v___x_333_ == 0)
{
uint8_t v___x_334_; 
v___x_334_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1___lam__0(v_k_318_, v___x_332_);
if (v___x_334_ == 0)
{
uint8_t v___x_335_; 
v___x_335_ = lean_nat_dec_lt(v___x_331_, v___x_319_);
if (v___x_335_ == 0)
{
lean_dec(v___x_331_);
lean_dec(v_k_316_);
lean_dec(v_v_315_);
return v_as_317_;
}
else
{
lean_object* v___x_336_; lean_object* v_xs_x27_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
lean_inc(v___x_332_);
v___x_336_ = lean_box(0);
v_xs_x27_337_ = lean_array_fset(v_as_317_, v___x_331_, v___x_336_);
v___x_338_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___lam__2(v_x_313_, v_keys_314_, v_v_315_, v_k_316_, v___x_332_);
v___x_339_ = lean_array_fset(v_xs_x27_337_, v___x_331_, v___x_338_);
lean_dec(v___x_331_);
return v___x_339_;
}
}
else
{
lean_object* v___x_340_; 
v___x_340_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3_spec__7___redArg(v_x_313_, v_keys_314_, v_v_315_, v_k_316_, v_as_317_, v_k_318_, v___x_320_, v___x_331_);
return v___x_340_;
}
}
else
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
lean_dec(v___x_331_);
v___x_341_ = lean_box(0);
v___x_342_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___lam__0(v_x_313_, v_keys_314_, v_v_315_, v_k_316_, v___x_341_);
v___x_343_ = lean_array_push(v_as_317_, v___x_342_);
return v___x_343_;
}
}
}
else
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v_as_346_; lean_object* v___x_347_; 
v___x_344_ = lean_box(0);
v___x_345_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___lam__0(v_x_313_, v_keys_314_, v_v_315_, v_k_316_, v___x_344_);
v_as_346_ = lean_array_push(v_as_317_, v___x_345_);
v___x_347_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_320_, v_as_346_, v___x_319_);
return v___x_347_;
}
}
else
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_348_ = lean_box(0);
v___x_349_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___lam__0(v_x_313_, v_keys_314_, v_v_315_, v_k_316_, v___x_348_);
v___x_350_ = lean_array_push(v_as_317_, v___x_349_);
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0(lean_object* v_keys_351_, lean_object* v_v_352_, lean_object* v_x_353_, lean_object* v_x_354_){
_start:
{
if (lean_obj_tag(v_x_354_) == 0)
{
lean_object* v_key_355_; lean_object* v_child_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_390_; 
v_key_355_ = lean_ctor_get(v_x_354_, 0);
v_child_356_ = lean_ctor_get(v_x_354_, 1);
v_isSharedCheck_390_ = !lean_is_exclusive(v_x_354_);
if (v_isSharedCheck_390_ == 0)
{
v___x_358_ = v_x_354_;
v_isShared_359_ = v_isSharedCheck_390_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_child_356_);
lean_inc(v_key_355_);
lean_dec(v_x_354_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_390_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_360_; uint8_t v___x_361_; 
v___x_360_ = lean_array_get_size(v_keys_351_);
v___x_361_ = lean_nat_dec_lt(v_x_353_, v___x_360_);
if (v___x_361_ == 0)
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_368_; 
v___x_362_ = lean_unsigned_to_nat(1u);
v___x_363_ = lean_mk_empty_array_with_capacity(v___x_362_);
lean_inc_ref(v___x_363_);
v___x_364_ = lean_array_push(v___x_363_, v_v_352_);
v___x_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_365_, 0, v_key_355_);
lean_ctor_set(v___x_365_, 1, v_child_356_);
v___x_366_ = lean_array_push(v___x_363_, v___x_365_);
if (v_isShared_359_ == 0)
{
lean_ctor_set_tag(v___x_358_, 1);
lean_ctor_set(v___x_358_, 1, v___x_366_);
lean_ctor_set(v___x_358_, 0, v___x_364_);
v___x_368_ = v___x_358_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v___x_364_);
lean_ctor_set(v_reuseFailAlloc_369_, 1, v___x_366_);
v___x_368_ = v_reuseFailAlloc_369_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
return v___x_368_;
}
}
else
{
lean_object* v___x_370_; uint8_t v___x_371_; 
v___x_370_ = lean_array_fget_borrowed(v_keys_351_, v_x_353_);
v___x_371_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v___x_370_, v_key_355_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_382_; 
v___x_372_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0___closed__0));
v___x_373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_373_, 0, v_key_355_);
lean_ctor_set(v___x_373_, 1, v_child_356_);
v___x_374_ = lean_unsigned_to_nat(1u);
v___x_375_ = lean_mk_empty_array_with_capacity(v___x_374_);
v___x_376_ = lean_array_push(v___x_375_, v___x_373_);
v___x_377_ = lean_nat_add(v_x_353_, v___x_374_);
v___x_378_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_351_, v_v_352_, v___x_377_);
lean_dec(v___x_377_);
lean_inc(v___x_370_);
v___x_379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_370_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
lean_inc_ref(v___x_379_);
v___x_380_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1(v___x_379_, v___x_376_, v___x_379_);
lean_dec_ref_known(v___x_379_, 2);
if (v_isShared_359_ == 0)
{
lean_ctor_set_tag(v___x_358_, 1);
lean_ctor_set(v___x_358_, 1, v___x_380_);
lean_ctor_set(v___x_358_, 0, v___x_372_);
v___x_382_ = v___x_358_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v___x_372_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v___x_380_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
else
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_384_ = lean_unsigned_to_nat(1u);
v___x_385_ = lean_nat_add(v_x_353_, v___x_384_);
v___x_386_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0(v_keys_351_, v_v_352_, v___x_385_, v_child_356_);
lean_dec(v___x_385_);
if (v_isShared_359_ == 0)
{
lean_ctor_set(v___x_358_, 1, v___x_386_);
v___x_388_ = v___x_358_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_key_355_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v___x_386_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
}
else
{
lean_object* v_vs_391_; lean_object* v_children_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_409_; 
v_vs_391_ = lean_ctor_get(v_x_354_, 0);
v_children_392_ = lean_ctor_get(v_x_354_, 1);
v_isSharedCheck_409_ = !lean_is_exclusive(v_x_354_);
if (v_isSharedCheck_409_ == 0)
{
v___x_394_ = v_x_354_;
v_isShared_395_ = v_isSharedCheck_409_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_children_392_);
lean_inc(v_vs_391_);
lean_dec(v_x_354_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_409_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_396_; uint8_t v___x_397_; 
v___x_396_ = lean_array_get_size(v_keys_351_);
v___x_397_ = lean_nat_dec_lt(v_x_353_, v___x_396_);
if (v___x_397_ == 0)
{
lean_object* v___x_398_; lean_object* v___x_400_; 
v___x_398_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__2(v_vs_391_, v_v_352_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 0, v___x_398_);
v___x_400_ = v___x_394_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v___x_398_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v_children_392_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
else
{
lean_object* v_k_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v_c_405_; lean_object* v___x_407_; 
v_k_402_ = lean_array_fget_borrowed(v_keys_351_, v_x_353_);
v___x_403_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0___closed__1));
lean_inc_n(v_k_402_, 2);
v___x_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_404_, 0, v_k_402_);
lean_ctor_set(v___x_404_, 1, v___x_403_);
v_c_405_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3(v_x_353_, v_keys_351_, v_v_352_, v_k_402_, v_children_392_, v___x_404_);
lean_dec_ref_known(v___x_404_, 2);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 1, v_c_405_);
v___x_407_ = v___x_394_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_vs_391_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v_c_405_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___lam__2(lean_object* v_x_410_, lean_object* v_keys_411_, lean_object* v_v_412_, lean_object* v_k_413_, lean_object* v_x_414_){
_start:
{
lean_object* v_snd_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_425_; 
v_snd_415_ = lean_ctor_get(v_x_414_, 1);
v_isSharedCheck_425_ = !lean_is_exclusive(v_x_414_);
if (v_isSharedCheck_425_ == 0)
{
lean_object* v_unused_426_; 
v_unused_426_ = lean_ctor_get(v_x_414_, 0);
lean_dec(v_unused_426_);
v___x_417_ = v_x_414_;
v_isShared_418_ = v_isSharedCheck_425_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_snd_415_);
lean_dec(v_x_414_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_425_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v_c_421_; lean_object* v___x_423_; 
v___x_419_ = lean_unsigned_to_nat(1u);
v___x_420_ = lean_nat_add(v_x_410_, v___x_419_);
v_c_421_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0(v_keys_411_, v_v_412_, v___x_420_, v_snd_415_);
lean_dec(v___x_420_);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 1, v_c_421_);
lean_ctor_set(v___x_417_, 0, v_k_413_);
v___x_423_ = v___x_417_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_k_413_);
lean_ctor_set(v_reuseFailAlloc_424_, 1, v_c_421_);
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
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___lam__2___boxed(lean_object* v_x_427_, lean_object* v_keys_428_, lean_object* v_v_429_, lean_object* v_k_430_, lean_object* v_x_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___lam__2(v_x_427_, v_keys_428_, v_v_429_, v_k_430_, v_x_431_);
lean_dec_ref(v_keys_428_);
lean_dec(v_x_427_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3_spec__7___redArg___boxed(lean_object* v_x_433_, lean_object* v_keys_434_, lean_object* v_v_435_, lean_object* v_k_436_, lean_object* v_as_437_, lean_object* v_k_438_, lean_object* v_x_439_, lean_object* v_x_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3_spec__7___redArg(v_x_433_, v_keys_434_, v_v_435_, v_k_436_, v_as_437_, v_k_438_, v_x_439_, v_x_440_);
lean_dec_ref(v_k_438_);
lean_dec_ref(v_keys_434_);
lean_dec(v_x_433_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0___boxed(lean_object* v_keys_442_, lean_object* v_v_443_, lean_object* v_x_444_, lean_object* v_x_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0(v_keys_442_, v_v_443_, v_x_444_, v_x_445_);
lean_dec(v_x_444_);
lean_dec_ref(v_keys_442_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3___boxed(lean_object* v_x_447_, lean_object* v_keys_448_, lean_object* v_v_449_, lean_object* v_k_450_, lean_object* v_as_451_, lean_object* v_k_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3(v_x_447_, v_keys_448_, v_v_449_, v_k_450_, v_as_451_, v_k_452_);
lean_dec_ref(v_k_452_);
lean_dec_ref(v_keys_448_);
lean_dec(v_x_447_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1___lam__0(lean_object* v_keys_454_, lean_object* v_v_455_, lean_object* v_x_456_){
_start:
{
if (lean_obj_tag(v_x_456_) == 0)
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_457_ = lean_unsigned_to_nat(1u);
v___x_458_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_454_, v_v_455_, v___x_457_);
v___x_459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
return v___x_459_;
}
else
{
lean_object* v_val_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_469_; 
v_val_460_ = lean_ctor_get(v_x_456_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v_x_456_);
if (v_isSharedCheck_469_ == 0)
{
v___x_462_ = v_x_456_;
v_isShared_463_ = v_isSharedCheck_469_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_val_460_);
lean_dec(v_x_456_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_469_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_467_; 
v___x_464_ = lean_unsigned_to_nat(1u);
v___x_465_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0(v_keys_454_, v_v_455_, v___x_464_, v_val_460_);
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 0, v___x_465_);
v___x_467_ = v___x_462_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v___x_465_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1___lam__0___boxed(lean_object* v_keys_470_, lean_object* v_v_471_, lean_object* v_x_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1___lam__0(v_keys_470_, v_v_471_, v_x_472_);
lean_dec_ref(v_keys_470_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__5_spec__10(lean_object* v_xs_474_, lean_object* v_v_475_, lean_object* v_i_476_){
_start:
{
lean_object* v___x_477_; uint8_t v___x_478_; 
v___x_477_ = lean_array_get_size(v_xs_474_);
v___x_478_ = lean_nat_dec_lt(v_i_476_, v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; 
lean_dec(v_i_476_);
v___x_479_ = lean_box(0);
return v___x_479_;
}
else
{
lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_480_ = lean_array_fget_borrowed(v_xs_474_, v_i_476_);
v___x_481_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v___x_480_, v_v_475_);
if (v___x_481_ == 0)
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = lean_unsigned_to_nat(1u);
v___x_483_ = lean_nat_add(v_i_476_, v___x_482_);
lean_dec(v_i_476_);
v_i_476_ = v___x_483_;
goto _start;
}
else
{
lean_object* v___x_485_; 
v___x_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_485_, 0, v_i_476_);
return v___x_485_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__5_spec__10___boxed(lean_object* v_xs_486_, lean_object* v_v_487_, lean_object* v_i_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__5_spec__10(v_xs_486_, v_v_487_, v_i_488_);
lean_dec(v_v_487_);
lean_dec_ref(v_xs_486_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__5(lean_object* v_xs_490_, lean_object* v_v_491_){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_unsigned_to_nat(0u);
v___x_493_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__5_spec__10(v_xs_490_, v_v_491_, v___x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__5___boxed(lean_object* v_xs_494_, lean_object* v_v_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__5(v_xs_494_, v_v_495_);
lean_dec(v_v_495_);
lean_dec_ref(v_xs_494_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1(lean_object* v_keys_497_, lean_object* v_v_498_, lean_object* v_x_499_, size_t v_x_500_, size_t v_x_501_, lean_object* v_x_502_){
_start:
{
if (lean_obj_tag(v_x_499_) == 0)
{
lean_object* v_es_503_; size_t v___x_504_; size_t v___x_505_; lean_object* v_j_506_; lean_object* v___x_507_; uint8_t v___x_508_; 
v_es_503_ = lean_ctor_get(v_x_499_, 0);
v___x_504_ = ((size_t)31ULL);
v___x_505_ = lean_usize_land(v_x_500_, v___x_504_);
v_j_506_ = lean_usize_to_nat(v___x_505_);
v___x_507_ = lean_array_get_size(v_es_503_);
v___x_508_ = lean_nat_dec_lt(v_j_506_, v___x_507_);
if (v___x_508_ == 0)
{
lean_dec(v_j_506_);
lean_dec(v_x_502_);
lean_dec(v_v_498_);
return v_x_499_;
}
else
{
lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_576_; 
lean_inc_ref(v_es_503_);
v_isSharedCheck_576_ = !lean_is_exclusive(v_x_499_);
if (v_isSharedCheck_576_ == 0)
{
lean_object* v_unused_577_; 
v_unused_577_ = lean_ctor_get(v_x_499_, 0);
lean_dec(v_unused_577_);
v___x_510_ = v_x_499_;
v_isShared_511_ = v_isSharedCheck_576_;
goto v_resetjp_509_;
}
else
{
lean_dec(v_x_499_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_576_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v_v_512_; lean_object* v___x_513_; lean_object* v_xs_x27_514_; lean_object* v___y_516_; 
v_v_512_ = lean_array_fget(v_es_503_, v_j_506_);
v___x_513_ = lean_box(0);
v_xs_x27_514_ = lean_array_fset(v_es_503_, v_j_506_, v___x_513_);
switch(lean_obj_tag(v_v_512_))
{
case 0:
{
lean_object* v_key_521_; lean_object* v_val_522_; uint8_t v___x_523_; 
v_key_521_ = lean_ctor_get(v_v_512_, 0);
v_val_522_ = lean_ctor_get(v_v_512_, 1);
v___x_523_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_502_, v_key_521_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = lean_box(0);
v___x_525_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1___lam__0(v_keys_497_, v_v_498_, v___x_524_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_dec(v_x_502_);
v___y_516_ = v_v_512_;
goto v___jp_515_;
}
else
{
lean_object* v_val_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_534_; 
lean_inc(v_val_522_);
lean_inc(v_key_521_);
lean_dec_ref_known(v_v_512_, 2);
v_val_526_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_534_ == 0)
{
v___x_528_ = v___x_525_;
v_isShared_529_ = v_isSharedCheck_534_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_val_526_);
lean_dec(v___x_525_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_534_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_530_; lean_object* v___x_532_; 
v___x_530_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_521_, v_val_522_, v_x_502_, v_val_526_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v___x_530_);
v___x_532_ = v___x_528_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
v___y_516_ = v___x_532_;
goto v___jp_515_;
}
}
}
}
else
{
lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_545_; 
lean_inc(v_val_522_);
v_isSharedCheck_545_ = !lean_is_exclusive(v_v_512_);
if (v_isSharedCheck_545_ == 0)
{
lean_object* v_unused_546_; lean_object* v_unused_547_; 
v_unused_546_ = lean_ctor_get(v_v_512_, 1);
lean_dec(v_unused_546_);
v_unused_547_ = lean_ctor_get(v_v_512_, 0);
lean_dec(v_unused_547_);
v___x_536_ = v_v_512_;
v_isShared_537_ = v_isSharedCheck_545_;
goto v_resetjp_535_;
}
else
{
lean_dec(v_v_512_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_545_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_538_, 0, v_val_522_);
v___x_539_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1___lam__0(v_keys_497_, v_v_498_, v___x_538_);
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v___x_540_; 
lean_del_object(v___x_536_);
lean_dec(v_x_502_);
v___x_540_ = lean_box(2);
v___y_516_ = v___x_540_;
goto v___jp_515_;
}
else
{
lean_object* v_val_541_; lean_object* v___x_543_; 
v_val_541_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_val_541_);
lean_dec_ref_known(v___x_539_, 1);
if (v_isShared_537_ == 0)
{
lean_ctor_set(v___x_536_, 1, v_val_541_);
lean_ctor_set(v___x_536_, 0, v_x_502_);
v___x_543_ = v___x_536_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_x_502_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v_val_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
v___y_516_ = v___x_543_;
goto v___jp_515_;
}
}
}
}
}
case 1:
{
lean_object* v_node_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_571_; 
v_node_548_ = lean_ctor_get(v_v_512_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v_v_512_);
if (v_isSharedCheck_571_ == 0)
{
v___x_550_ = v_v_512_;
v_isShared_551_ = v_isSharedCheck_571_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_node_548_);
lean_dec(v_v_512_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_571_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
size_t v___x_552_; size_t v___x_553_; size_t v___x_554_; size_t v___x_555_; lean_object* v_newNode_556_; lean_object* v___x_557_; 
v___x_552_ = ((size_t)5ULL);
v___x_553_ = lean_usize_shift_right(v_x_500_, v___x_552_);
v___x_554_ = ((size_t)1ULL);
v___x_555_ = lean_usize_add(v_x_501_, v___x_554_);
v_newNode_556_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1(v_keys_497_, v_v_498_, v_node_548_, v___x_553_, v___x_555_, v_x_502_);
lean_inc_ref(v_newNode_556_);
v___x_557_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_556_);
if (lean_obj_tag(v___x_557_) == 0)
{
lean_object* v___x_559_; 
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 0, v_newNode_556_);
v___x_559_ = v___x_550_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_newNode_556_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
v___y_516_ = v___x_559_;
goto v___jp_515_;
}
}
else
{
lean_object* v_val_561_; lean_object* v_fst_562_; lean_object* v_snd_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
lean_dec_ref(v_newNode_556_);
lean_del_object(v___x_550_);
v_val_561_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_val_561_);
lean_dec_ref_known(v___x_557_, 1);
v_fst_562_ = lean_ctor_get(v_val_561_, 0);
v_snd_563_ = lean_ctor_get(v_val_561_, 1);
v_isSharedCheck_570_ = !lean_is_exclusive(v_val_561_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v_val_561_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_snd_563_);
lean_inc(v_fst_562_);
lean_dec(v_val_561_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_fst_562_);
lean_ctor_set(v_reuseFailAlloc_569_, 1, v_snd_563_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
v___y_516_ = v___x_568_;
goto v___jp_515_;
}
}
}
}
}
default: 
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = lean_box(0);
v___x_573_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1___lam__0(v_keys_497_, v_v_498_, v___x_572_);
if (lean_obj_tag(v___x_573_) == 0)
{
lean_dec(v_x_502_);
v___y_516_ = v_v_512_;
goto v___jp_515_;
}
else
{
lean_object* v_val_574_; lean_object* v___x_575_; 
v_val_574_ = lean_ctor_get(v___x_573_, 0);
lean_inc(v_val_574_);
lean_dec_ref_known(v___x_573_, 1);
v___x_575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_575_, 0, v_x_502_);
lean_ctor_set(v___x_575_, 1, v_val_574_);
v___y_516_ = v___x_575_;
goto v___jp_515_;
}
}
}
v___jp_515_:
{
lean_object* v___x_517_; lean_object* v___x_519_; 
v___x_517_ = lean_array_fset(v_xs_x27_514_, v_j_506_, v___y_516_);
lean_dec(v_j_506_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 0, v___x_517_);
v___x_519_ = v___x_510_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v___x_517_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
}
}
else
{
lean_object* v_ks_578_; lean_object* v_vs_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_612_; 
v_ks_578_ = lean_ctor_get(v_x_499_, 0);
v_vs_579_ = lean_ctor_get(v_x_499_, 1);
v_isSharedCheck_612_ = !lean_is_exclusive(v_x_499_);
if (v_isSharedCheck_612_ == 0)
{
v___x_581_ = v_x_499_;
v_isShared_582_ = v_isSharedCheck_612_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_vs_579_);
lean_inc(v_ks_578_);
lean_dec(v_x_499_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_612_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_583_; 
v___x_583_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__5(v_ks_578_, v_x_502_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v___x_585_; 
if (v_isShared_582_ == 0)
{
v___x_585_ = v___x_581_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_ks_578_);
lean_ctor_set(v_reuseFailAlloc_590_, 1, v_vs_579_);
v___x_585_ = v_reuseFailAlloc_590_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = lean_box(0);
v___x_587_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1___lam__0(v_keys_497_, v_v_498_, v___x_586_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_dec(v_x_502_);
return v___x_585_;
}
else
{
lean_object* v_val_588_; lean_object* v___x_589_; 
v_val_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_val_588_);
lean_dec_ref_known(v___x_587_, 1);
v___x_589_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___redArg(v___x_585_, v_x_500_, v_x_501_, v_x_502_, v_val_588_);
return v___x_589_;
}
}
}
else
{
lean_object* v_val_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_611_; 
v_val_591_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_611_ == 0)
{
v___x_593_ = v___x_583_;
v_isShared_594_ = v_isSharedCheck_611_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_val_591_);
lean_dec(v___x_583_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_611_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v_v_x27_595_; lean_object* v_keys_596_; lean_object* v_vals_597_; lean_object* v___x_599_; 
v_v_x27_595_ = lean_array_fget(v_vs_579_, v_val_591_);
lean_inc(v_val_591_);
v_keys_596_ = l_Array_eraseIdx___redArg(v_ks_578_, v_val_591_);
v_vals_597_ = l_Array_eraseIdx___redArg(v_vs_579_, v_val_591_);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 0, v_v_x27_595_);
v___x_599_ = v___x_593_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_v_x27_595_);
v___x_599_ = v_reuseFailAlloc_610_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
lean_object* v___x_600_; 
v___x_600_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1___lam__0(v_keys_497_, v_v_498_, v___x_599_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v___x_602_; 
lean_dec(v_x_502_);
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 1, v_vals_597_);
lean_ctor_set(v___x_581_, 0, v_keys_596_);
v___x_602_ = v___x_581_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_keys_596_);
lean_ctor_set(v_reuseFailAlloc_603_, 1, v_vals_597_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
else
{
lean_object* v_val_604_; lean_object* v_keys_605_; lean_object* v_vals_606_; lean_object* v___x_608_; 
v_val_604_ = lean_ctor_get(v___x_600_, 0);
lean_inc(v_val_604_);
lean_dec_ref_known(v___x_600_, 1);
v_keys_605_ = lean_array_push(v_keys_596_, v_x_502_);
v_vals_606_ = lean_array_push(v_vals_597_, v_val_604_);
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 1, v_vals_606_);
lean_ctor_set(v___x_581_, 0, v_keys_605_);
v___x_608_ = v___x_581_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_keys_605_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v_vals_606_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1___boxed(lean_object* v_keys_613_, lean_object* v_v_614_, lean_object* v_x_615_, lean_object* v_x_616_, lean_object* v_x_617_, lean_object* v_x_618_){
_start:
{
size_t v_x_3226__boxed_619_; size_t v_x_3227__boxed_620_; lean_object* v_res_621_; 
v_x_3226__boxed_619_ = lean_unbox_usize(v_x_616_);
lean_dec(v_x_616_);
v_x_3227__boxed_620_ = lean_unbox_usize(v_x_617_);
lean_dec(v_x_617_);
v_res_621_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1(v_keys_613_, v_v_614_, v_x_615_, v_x_3226__boxed_619_, v_x_3227__boxed_620_, v_x_618_);
lean_dec_ref(v_keys_613_);
return v_res_621_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = l_Lean_Meta_DiscrTree_instInhabited___redArg();
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__2(lean_object* v_msg_623_){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__2___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__2___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__2___closed__0);
v___x_625_ = lean_panic_fn_borrowed(v___x_624_, v_msg_623_);
return v___x_625_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__3(void){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_629_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__2));
v___x_630_ = lean_unsigned_to_nat(23u);
v___x_631_ = lean_unsigned_to_nat(179u);
v___x_632_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__1));
v___x_633_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__0));
v___x_634_ = l_mkPanicMessageWithDecl(v___x_633_, v___x_632_, v___x_631_, v___x_630_, v___x_629_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0(lean_object* v_d_635_, lean_object* v_keys_636_, lean_object* v_v_637_){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; uint8_t v___x_640_; 
v___x_638_ = lean_array_get_size(v_keys_636_);
v___x_639_ = lean_unsigned_to_nat(0u);
v___x_640_ = lean_nat_dec_eq(v___x_638_, v___x_639_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; lean_object* v_k_642_; uint64_t v___x_643_; size_t v_h_644_; size_t v___x_645_; lean_object* v___x_646_; 
v___x_641_ = lean_box(0);
v_k_642_ = lean_array_get_borrowed(v___x_641_, v_keys_636_, v___x_639_);
v___x_643_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_642_);
v_h_644_ = lean_uint64_to_usize(v___x_643_);
v___x_645_ = ((size_t)1ULL);
lean_inc(v_k_642_);
v___x_646_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1(v_keys_636_, v_v_637_, v_d_635_, v_h_644_, v___x_645_, v_k_642_);
return v___x_646_;
}
else
{
lean_object* v___x_647_; lean_object* v___x_648_; 
lean_dec(v_v_637_);
lean_dec_ref(v_d_635_);
v___x_647_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__3, &l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__3_once, _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___closed__3);
v___x_648_ = l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__2(v___x_647_);
return v___x_648_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0___boxed(lean_object* v_d_649_, lean_object* v_keys_650_, lean_object* v_v_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0(v_d_649_, v_keys_650_, v_v_651_);
lean_dec_ref(v_keys_650_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_UnificationHints_add(lean_object* v_hints_653_, lean_object* v_e_654_){
_start:
{
lean_object* v_keys_655_; lean_object* v_val_656_; lean_object* v___x_657_; 
v_keys_655_ = lean_ctor_get(v_e_654_, 0);
lean_inc_ref(v_keys_655_);
v_val_656_ = lean_ctor_get(v_e_654_, 1);
lean_inc(v_val_656_);
lean_dec_ref(v_e_654_);
v___x_657_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0(v_hints_653_, v_keys_655_, v_val_656_);
lean_dec_ref(v_keys_655_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6(lean_object* v_00_u03b2_658_, lean_object* v_x_659_, size_t v_x_660_, size_t v_x_661_, lean_object* v_x_662_, lean_object* v_x_663_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___redArg(v_x_659_, v_x_660_, v_x_661_, v_x_662_, v_x_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6___boxed(lean_object* v_00_u03b2_665_, lean_object* v_x_666_, lean_object* v_x_667_, lean_object* v_x_668_, lean_object* v_x_669_, lean_object* v_x_670_){
_start:
{
size_t v_x_3494__boxed_671_; size_t v_x_3495__boxed_672_; lean_object* v_res_673_; 
v_x_3494__boxed_671_ = lean_unbox_usize(v_x_667_);
lean_dec(v_x_667_);
v_x_3495__boxed_672_ = lean_unbox_usize(v_x_668_);
lean_dec(v_x_668_);
v_res_673_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6(v_00_u03b2_665_, v_x_666_, v_x_3494__boxed_671_, v_x_3495__boxed_672_, v_x_669_, v_x_670_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1_spec__3(lean_object* v___x_674_, lean_object* v_as_675_, lean_object* v_k_676_, lean_object* v_x_677_, lean_object* v_x_678_, lean_object* v_x_679_, lean_object* v_x_680_){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1_spec__3___redArg(v___x_674_, v_as_675_, v_k_676_, v_x_677_, v_x_678_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v___x_682_, lean_object* v_as_683_, lean_object* v_k_684_, lean_object* v_x_685_, lean_object* v_x_686_, lean_object* v_x_687_, lean_object* v_x_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__1_spec__3(v___x_682_, v_as_683_, v_k_684_, v_x_685_, v_x_686_, v_x_687_, v_x_688_);
lean_dec_ref(v_k_684_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3_spec__7(lean_object* v_x_690_, lean_object* v_keys_691_, lean_object* v_v_692_, lean_object* v_k_693_, lean_object* v_as_694_, lean_object* v_k_695_, lean_object* v_x_696_, lean_object* v_x_697_, lean_object* v_x_698_, lean_object* v_x_699_){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3_spec__7___redArg(v_x_690_, v_keys_691_, v_v_692_, v_k_693_, v_as_694_, v_k_695_, v_x_696_, v_x_697_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3_spec__7___boxed(lean_object* v_x_701_, lean_object* v_keys_702_, lean_object* v_v_703_, lean_object* v_k_704_, lean_object* v_as_705_, lean_object* v_k_706_, lean_object* v_x_707_, lean_object* v_x_708_, lean_object* v_x_709_, lean_object* v_x_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__0_spec__3_spec__7(v_x_701_, v_keys_702_, v_v_703_, v_k_704_, v_as_705_, v_k_706_, v_x_707_, v_x_708_, v_x_709_, v_x_710_);
lean_dec_ref(v_k_706_);
lean_dec_ref(v_keys_702_);
lean_dec(v_x_701_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__12(lean_object* v_00_u03b2_712_, lean_object* v_n_713_, lean_object* v_k_714_, lean_object* v_v_715_){
_start:
{
lean_object* v___x_716_; 
v___x_716_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__12___redArg(v_n_713_, v_k_714_, v_v_715_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__13(lean_object* v_00_u03b2_717_, size_t v_depth_718_, lean_object* v_keys_719_, lean_object* v_vals_720_, lean_object* v_heq_721_, lean_object* v_i_722_, lean_object* v_entries_723_){
_start:
{
lean_object* v___x_724_; 
v___x_724_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__13___redArg(v_depth_718_, v_keys_719_, v_vals_720_, v_i_722_, v_entries_723_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__13___boxed(lean_object* v_00_u03b2_725_, lean_object* v_depth_726_, lean_object* v_keys_727_, lean_object* v_vals_728_, lean_object* v_heq_729_, lean_object* v_i_730_, lean_object* v_entries_731_){
_start:
{
size_t v_depth_boxed_732_; lean_object* v_res_733_; 
v_depth_boxed_732_ = lean_unbox_usize(v_depth_726_);
lean_dec(v_depth_726_);
v_res_733_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__13(v_00_u03b2_725_, v_depth_boxed_732_, v_keys_727_, v_vals_728_, v_heq_729_, v_i_730_, v_entries_731_);
lean_dec_ref(v_vals_728_);
lean_dec_ref(v_keys_727_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__12_spec__13(lean_object* v_00_u03b2_734_, lean_object* v_x_735_, lean_object* v_x_736_, lean_object* v_x_737_, lean_object* v_x_738_){
_start:
{
lean_object* v___x_739_; 
v___x_739_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_UnificationHints_add_spec__0_spec__1_spec__6_spec__12_spec__13___redArg(v_x_735_, v_x_736_, v_x_737_, v_x_738_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_(lean_object* v_x_740_, lean_object* v_a_741_){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_742_, 0, v_a_741_);
lean_inc_ref_n(v___x_742_, 2);
v___x_743_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_743_, 0, v___x_742_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
lean_ctor_set(v___x_743_, 2, v___x_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2____boxed(lean_object* v_x_744_, lean_object* v_a_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_(v_x_744_, v_a_745_);
lean_dec_ref(v_x_744_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_(lean_object* v___y_747_){
_start:
{
lean_inc_ref(v___y_747_);
return v___y_747_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2____boxed(lean_object* v___y_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_(v___y_748_);
lean_dec_ref(v___y_748_);
return v_res_749_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_760_; uint8_t v___x_761_; uint8_t v___x_762_; lean_object* v___f_763_; lean_object* v___f_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_760_ = lean_box(0);
v___x_761_ = 0;
v___x_762_ = 1;
v___f_763_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_));
v___f_764_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_));
v___x_765_ = lean_obj_once(&l_Lean_Meta_instInhabitedUnificationHints_default___closed__0, &l_Lean_Meta_instInhabitedUnificationHints_default___closed__0_once, _init_l_Lean_Meta_instInhabitedUnificationHints_default___closed__0);
v___x_766_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_));
v___x_767_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_));
v___x_768_ = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(v___x_768_, 0, v___x_767_);
lean_ctor_set(v___x_768_, 1, v___x_766_);
lean_ctor_set(v___x_768_, 2, v___x_766_);
lean_ctor_set(v___x_768_, 3, v___x_765_);
lean_ctor_set(v___x_768_, 4, v___f_764_);
lean_ctor_set(v___x_768_, 5, v___f_763_);
lean_ctor_set(v___x_768_, 6, v___x_760_);
lean_ctor_set_uint8(v___x_768_, sizeof(void*)*7, v___x_762_);
lean_ctor_set_uint8(v___x_768_, sizeof(void*)*7 + 1, v___x_761_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_);
v___x_771_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_770_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2____boxed(lean_object* v_a_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_();
return v_res_773_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__3(void){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_778_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__2));
v___x_779_ = l_Lean_stringToMessageData(v___x_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint(lean_object* v_e_780_){
_start:
{
lean_object* v___x_781_; lean_object* v___x_782_; uint8_t v___x_783_; 
v___x_781_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__1));
v___x_782_ = lean_unsigned_to_nat(3u);
v___x_783_ = l_Lean_Expr_isAppOfArity(v_e_780_, v___x_781_, v___x_782_);
if (v___x_783_ == 0)
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_784_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__3, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__3_once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint___closed__3);
v___x_785_ = l_Lean_indentExpr(v_e_780_);
v___x_786_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_784_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
v___x_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
return v___x_787_;
}
else
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_788_ = l_Lean_Expr_appFn_x21(v_e_780_);
v___x_789_ = l_Lean_Expr_appArg_x21(v___x_788_);
lean_dec_ref(v___x_788_);
v___x_790_ = l_Lean_Expr_appArg_x21(v_e_780_);
lean_dec_ref(v_e_780_);
v___x_791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_791_, 0, v___x_789_);
lean_ctor_set(v___x_791_, 1, v___x_790_);
v___x_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_792_, 0, v___x_791_);
return v___x_792_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decode___closed__1(void){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_794_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decode___closed__0));
v___x_795_ = l_Lean_stringToMessageData(v___x_794_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decode(lean_object* v_e_796_, lean_object* v_cs_797_){
_start:
{
if (lean_obj_tag(v_e_796_) == 7)
{
lean_object* v_binderType_798_; lean_object* v_body_799_; lean_object* v___x_800_; 
v_binderType_798_ = lean_ctor_get(v_e_796_, 1);
v_body_799_ = lean_ctor_get(v_e_796_, 2);
lean_inc_ref(v_binderType_798_);
v___x_800_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint(v_binderType_798_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_808_; 
lean_dec_ref_known(v_e_796_, 3);
lean_dec_ref(v_cs_797_);
v_a_801_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_808_ == 0)
{
v___x_803_ = v___x_800_;
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v___x_800_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_806_; 
if (v_isShared_804_ == 0)
{
v___x_806_ = v___x_803_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_a_801_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
else
{
lean_object* v_a_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_822_; 
v_a_809_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_822_ == 0)
{
v___x_811_ = v___x_800_;
v_isShared_812_ = v_isSharedCheck_822_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_a_809_);
lean_dec(v___x_800_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_822_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
uint8_t v___x_813_; 
v___x_813_ = l_Lean_Expr_hasLooseBVars(v_body_799_);
if (v___x_813_ == 0)
{
lean_object* v___x_814_; 
lean_inc_ref(v_body_799_);
lean_del_object(v___x_811_);
lean_dec_ref_known(v_e_796_, 3);
v___x_814_ = lean_array_push(v_cs_797_, v_a_809_);
v_e_796_ = v_body_799_;
v_cs_797_ = v___x_814_;
goto _start;
}
else
{
lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_820_; 
lean_dec(v_a_809_);
lean_dec_ref(v_cs_797_);
v___x_816_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decode___closed__1, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decode___closed__1_once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decode___closed__1);
v___x_817_ = l_Lean_indentExpr(v_e_796_);
v___x_818_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_818_, 0, v___x_816_);
lean_ctor_set(v___x_818_, 1, v___x_817_);
if (v_isShared_812_ == 0)
{
lean_ctor_set_tag(v___x_811_, 0);
lean_ctor_set(v___x_811_, 0, v___x_818_);
v___x_820_ = v___x_811_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v___x_818_);
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
else
{
lean_object* v___x_823_; 
v___x_823_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decodeConstraint(v_e_796_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_831_; 
lean_dec_ref(v_cs_797_);
v_a_824_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_831_ == 0)
{
v___x_826_ = v___x_823_;
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_823_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_824_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
else
{
lean_object* v_a_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_841_; 
v_a_832_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_841_ == 0)
{
v___x_834_ = v___x_823_;
v_isShared_835_ = v_isSharedCheck_841_;
goto v_resetjp_833_;
}
else
{
lean_inc(v_a_832_);
lean_dec(v___x_823_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_841_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_839_; 
v___x_836_ = lean_array_to_list(v_cs_797_);
v___x_837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_837_, 0, v_a_832_);
lean_ctor_set(v___x_837_, 1, v___x_836_);
if (v_isShared_835_ == 0)
{
lean_ctor_set(v___x_834_, 0, v___x_837_);
v___x_839_ = v___x_834_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v___x_837_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint(lean_object* v_e_844_){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_845_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint___closed__0));
v___x_846_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint_decode(v_e_844_, v___x_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0_spec__0(lean_object* v_msgData_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v___x_853_; lean_object* v_env_854_; uint8_t v___x_855_; lean_object* v_env_856_; lean_object* v___x_857_; lean_object* v_toCold_858_; lean_object* v_mctx_859_; lean_object* v_lctx_860_; lean_object* v_options_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_853_ = lean_st_ref_get(v___y_851_);
v_env_854_ = lean_ctor_get(v___x_853_, 0);
lean_inc_ref(v_env_854_);
lean_dec(v___x_853_);
v___x_855_ = 0;
v_env_856_ = l_Lean_Environment_setRecordingDeps(v_env_854_, v___x_855_);
v___x_857_ = lean_st_ref_get(v___y_849_);
v_toCold_858_ = lean_ctor_get(v___y_850_, 0);
v_mctx_859_ = lean_ctor_get(v___x_857_, 0);
lean_inc_ref(v_mctx_859_);
lean_dec(v___x_857_);
v_lctx_860_ = lean_ctor_get(v___y_848_, 2);
v_options_861_ = lean_ctor_get(v_toCold_858_, 2);
lean_inc_ref(v_options_861_);
lean_inc_ref(v_lctx_860_);
v___x_862_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_862_, 0, v_env_856_);
lean_ctor_set(v___x_862_, 1, v_mctx_859_);
lean_ctor_set(v___x_862_, 2, v_lctx_860_);
lean_ctor_set(v___x_862_, 3, v_options_861_);
v___x_863_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_863_, 0, v___x_862_);
lean_ctor_set(v___x_863_, 1, v_msgData_847_);
v___x_864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_864_, 0, v___x_863_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0_spec__0___boxed(lean_object* v_msgData_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0_spec__0(v_msgData_865_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
lean_dec(v___y_867_);
lean_dec_ref(v___y_866_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0___redArg(lean_object* v_msg_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_){
_start:
{
lean_object* v_ref_878_; lean_object* v___x_879_; lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_888_; 
v_ref_878_ = lean_ctor_get(v___y_875_, 2);
v___x_879_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0_spec__0(v_msg_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_);
v_a_880_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_888_ == 0)
{
v___x_882_ = v___x_879_;
v_isShared_883_ = v_isSharedCheck_888_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_879_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_888_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_884_; lean_object* v___x_886_; 
lean_inc(v_ref_878_);
v___x_884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_884_, 0, v_ref_878_);
lean_ctor_set(v___x_884_, 1, v_a_880_);
if (v_isShared_883_ == 0)
{
lean_ctor_set_tag(v___x_882_, 1);
lean_ctor_set(v___x_882_, 0, v___x_884_);
v___x_886_ = v___x_882_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_884_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0___redArg___boxed(lean_object* v_msg_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0___redArg(v_msg_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec(v___y_891_);
lean_dec_ref(v___y_890_);
return v_res_895_;
}
}
static lean_object* _init_l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__1(void){
_start:
{
lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_897_ = ((lean_object*)(l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__0));
v___x_898_ = l_Lean_stringToMessageData(v___x_897_);
return v___x_898_;
}
}
static lean_object* _init_l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__3(void){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_900_ = ((lean_object*)(l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__2));
v___x_901_ = l_Lean_stringToMessageData(v___x_900_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1(lean_object* v_as_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_){
_start:
{
if (lean_obj_tag(v_as_902_) == 0)
{
lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_908_ = lean_box(0);
v___x_909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
return v___x_909_;
}
else
{
lean_object* v_head_910_; lean_object* v_tail_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_945_; 
v_head_910_ = lean_ctor_get(v_as_902_, 0);
v_tail_911_ = lean_ctor_get(v_as_902_, 1);
v_isSharedCheck_945_ = !lean_is_exclusive(v_as_902_);
if (v_isSharedCheck_945_ == 0)
{
v___x_913_ = v_as_902_;
v_isShared_914_ = v_isSharedCheck_945_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_tail_911_);
lean_inc(v_head_910_);
lean_dec(v_as_902_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_945_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v_lhs_915_; lean_object* v_rhs_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_944_; 
v_lhs_915_ = lean_ctor_get(v_head_910_, 0);
v_rhs_916_ = lean_ctor_get(v_head_910_, 1);
v_isSharedCheck_944_ = !lean_is_exclusive(v_head_910_);
if (v_isSharedCheck_944_ == 0)
{
v___x_918_ = v_head_910_;
v_isShared_919_ = v_isSharedCheck_944_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_rhs_916_);
lean_inc(v_lhs_915_);
lean_dec(v_head_910_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_944_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_920_; 
lean_inc_ref(v_rhs_916_);
lean_inc_ref(v_lhs_915_);
v___x_920_ = l_Lean_Meta_isExprDefEq(v_lhs_915_, v_rhs_916_, v___y_903_, v___y_904_, v___y_905_, v___y_906_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v_a_921_; uint8_t v___x_922_; 
v_a_921_ = lean_ctor_get(v___x_920_, 0);
lean_inc(v_a_921_);
lean_dec_ref_known(v___x_920_, 1);
v___x_922_ = lean_unbox(v_a_921_);
lean_dec(v_a_921_);
if (v___x_922_ == 0)
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_926_; 
lean_dec(v_tail_911_);
v___x_923_ = lean_obj_once(&l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__1, &l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__1_once, _init_l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__1);
v___x_924_ = l_Lean_indentExpr(v_lhs_915_);
if (v_isShared_919_ == 0)
{
lean_ctor_set_tag(v___x_918_, 7);
lean_ctor_set(v___x_918_, 1, v___x_924_);
lean_ctor_set(v___x_918_, 0, v___x_923_);
v___x_926_ = v___x_918_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_923_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v___x_924_);
v___x_926_ = v_reuseFailAlloc_934_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
lean_object* v___x_927_; lean_object* v___x_929_; 
v___x_927_ = lean_obj_once(&l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__3, &l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__3_once, _init_l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__3);
if (v_isShared_914_ == 0)
{
lean_ctor_set_tag(v___x_913_, 7);
lean_ctor_set(v___x_913_, 1, v___x_927_);
lean_ctor_set(v___x_913_, 0, v___x_926_);
v___x_929_ = v___x_913_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_926_);
lean_ctor_set(v_reuseFailAlloc_933_, 1, v___x_927_);
v___x_929_ = v_reuseFailAlloc_933_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_930_ = l_Lean_indentExpr(v_rhs_916_);
v___x_931_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_931_, 0, v___x_929_);
lean_ctor_set(v___x_931_, 1, v___x_930_);
v___x_932_ = l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0___redArg(v___x_931_, v___y_903_, v___y_904_, v___y_905_, v___y_906_);
return v___x_932_;
}
}
}
else
{
lean_del_object(v___x_918_);
lean_dec_ref(v_rhs_916_);
lean_dec_ref(v_lhs_915_);
lean_del_object(v___x_913_);
v_as_902_ = v_tail_911_;
goto _start;
}
}
else
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
lean_del_object(v___x_918_);
lean_dec_ref(v_rhs_916_);
lean_dec_ref(v_lhs_915_);
lean_del_object(v___x_913_);
lean_dec(v_tail_911_);
v_a_936_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_920_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_920_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___boxed(lean_object* v_as_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1(v_as_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_);
lean_dec(v___y_950_);
lean_dec_ref(v___y_949_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
return v_res_952_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint___closed__1(void){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_954_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint___closed__0));
v___x_955_ = l_Lean_stringToMessageData(v___x_954_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint(lean_object* v_hint_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_){
_start:
{
lean_object* v_pattern_962_; lean_object* v_constraints_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_1005_; 
v_pattern_962_ = lean_ctor_get(v_hint_956_, 0);
v_constraints_963_ = lean_ctor_get(v_hint_956_, 1);
v_isSharedCheck_1005_ = !lean_is_exclusive(v_hint_956_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_965_ = v_hint_956_;
v_isShared_966_ = v_isSharedCheck_1005_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_constraints_963_);
lean_inc(v_pattern_962_);
lean_dec(v_hint_956_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_1005_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_967_; 
v___x_967_ = l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1(v_constraints_963_, v_a_957_, v_a_958_, v_a_959_, v_a_960_);
if (lean_obj_tag(v___x_967_) == 0)
{
lean_object* v_lhs_968_; lean_object* v_rhs_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_1004_; 
lean_dec_ref_known(v___x_967_, 1);
v_lhs_968_ = lean_ctor_get(v_pattern_962_, 0);
v_rhs_969_ = lean_ctor_get(v_pattern_962_, 1);
v_isSharedCheck_1004_ = !lean_is_exclusive(v_pattern_962_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_971_ = v_pattern_962_;
v_isShared_972_ = v_isSharedCheck_1004_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_rhs_969_);
lean_inc(v_lhs_968_);
lean_dec(v_pattern_962_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_1004_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_973_; 
lean_inc_ref(v_rhs_969_);
lean_inc_ref(v_lhs_968_);
v___x_973_ = l_Lean_Meta_isExprDefEq(v_lhs_968_, v_rhs_969_, v_a_957_, v_a_958_, v_a_959_, v_a_960_);
if (lean_obj_tag(v___x_973_) == 0)
{
lean_object* v_a_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_995_; 
v_a_974_ = lean_ctor_get(v___x_973_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_995_ == 0)
{
v___x_976_ = v___x_973_;
v_isShared_977_ = v_isSharedCheck_995_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_a_974_);
lean_dec(v___x_973_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_995_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
uint8_t v___x_978_; 
v___x_978_ = lean_unbox(v_a_974_);
lean_dec(v_a_974_);
if (v___x_978_ == 0)
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_982_; 
lean_del_object(v___x_976_);
v___x_979_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint___closed__1, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint___closed__1_once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint___closed__1);
v___x_980_ = l_Lean_indentExpr(v_lhs_968_);
if (v_isShared_972_ == 0)
{
lean_ctor_set_tag(v___x_971_, 7);
lean_ctor_set(v___x_971_, 1, v___x_980_);
lean_ctor_set(v___x_971_, 0, v___x_979_);
v___x_982_ = v___x_971_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v___x_979_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v___x_980_);
v___x_982_ = v_reuseFailAlloc_990_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
lean_object* v___x_983_; lean_object* v___x_985_; 
v___x_983_ = lean_obj_once(&l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__3, &l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__3_once, _init_l_List_forM___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__1___closed__3);
if (v_isShared_966_ == 0)
{
lean_ctor_set_tag(v___x_965_, 7);
lean_ctor_set(v___x_965_, 1, v___x_983_);
lean_ctor_set(v___x_965_, 0, v___x_982_);
v___x_985_ = v___x_965_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v___x_982_);
lean_ctor_set(v_reuseFailAlloc_989_, 1, v___x_983_);
v___x_985_ = v_reuseFailAlloc_989_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_986_ = l_Lean_indentExpr(v_rhs_969_);
v___x_987_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_985_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
v___x_988_ = l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0___redArg(v___x_987_, v_a_957_, v_a_958_, v_a_959_, v_a_960_);
return v___x_988_;
}
}
}
else
{
lean_object* v___x_991_; lean_object* v___x_993_; 
lean_del_object(v___x_971_);
lean_dec_ref(v_rhs_969_);
lean_dec_ref(v_lhs_968_);
lean_del_object(v___x_965_);
v___x_991_ = lean_box(0);
if (v_isShared_977_ == 0)
{
lean_ctor_set(v___x_976_, 0, v___x_991_);
v___x_993_ = v___x_976_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_991_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
else
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1003_; 
lean_del_object(v___x_971_);
lean_dec_ref(v_rhs_969_);
lean_dec_ref(v_lhs_968_);
lean_del_object(v___x_965_);
v_a_996_ = lean_ctor_get(v___x_973_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_998_ = v___x_973_;
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v___x_973_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_a_996_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
}
else
{
lean_del_object(v___x_965_);
lean_dec_ref(v_pattern_962_);
return v___x_967_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint___boxed(lean_object* v_hint_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint(v_hint_1006_, v_a_1007_, v_a_1008_, v_a_1009_, v_a_1010_);
lean_dec(v_a_1010_);
lean_dec_ref(v_a_1009_);
lean_dec(v_a_1008_);
lean_dec_ref(v_a_1007_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0(lean_object* v_00_u03b1_1013_, lean_object* v_msg_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v___x_1020_; 
v___x_1020_ = l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0___redArg(v_msg_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0___boxed(lean_object* v_00_u03b1_1021_, lean_object* v_msg_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0(v_00_u03b1_1021_, v_msg_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_addUnificationHint_spec__2___redArg(lean_object* v_k_1029_, uint8_t v_allowLevelAssignments_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
lean_object* v___x_1036_; 
v___x_1036_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1030_, v_k_1029_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_);
if (lean_obj_tag(v___x_1036_) == 0)
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1044_; 
v_a_1037_ = lean_ctor_get(v___x_1036_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1039_ = v___x_1036_;
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v___x_1036_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1042_; 
if (v_isShared_1040_ == 0)
{
v___x_1042_ = v___x_1039_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_a_1037_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
else
{
lean_object* v_a_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1052_; 
v_a_1045_ = lean_ctor_get(v___x_1036_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1047_ = v___x_1036_;
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_a_1045_);
lean_dec(v___x_1036_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1050_; 
if (v_isShared_1048_ == 0)
{
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
return v___x_1050_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_addUnificationHint_spec__2___redArg___boxed(lean_object* v_k_1053_, lean_object* v_allowLevelAssignments_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1060_; lean_object* v_res_1061_; 
v_allowLevelAssignments_boxed_1060_ = lean_unbox(v_allowLevelAssignments_1054_);
v_res_1061_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_addUnificationHint_spec__2___redArg(v_k_1053_, v_allowLevelAssignments_boxed_1060_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v___y_1056_);
lean_dec_ref(v___y_1055_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_addUnificationHint_spec__2(lean_object* v_00_u03b1_1062_, lean_object* v_k_1063_, uint8_t v_allowLevelAssignments_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_addUnificationHint_spec__2___redArg(v_k_1063_, v_allowLevelAssignments_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_addUnificationHint_spec__2___boxed(lean_object* v_00_u03b1_1071_, lean_object* v_k_1072_, lean_object* v_allowLevelAssignments_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1079_; lean_object* v_res_1080_; 
v_allowLevelAssignments_boxed_1079_ = lean_unbox(v_allowLevelAssignments_1073_);
v_res_1080_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_addUnificationHint_spec__2(v_00_u03b1_1071_, v_k_1072_, v_allowLevelAssignments_boxed_1079_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
return v_res_1080_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1081_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1082_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0);
v___x_1083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg(){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__1);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v___dummy_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg();
return v_res_1087_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1088_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0);
v___x_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
return v___x_1089_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1090_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__0);
v___x_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
return v___x_1091_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1092_; 
v___x_1092_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg();
return v___x_1092_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1093_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__0);
v___x_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1093_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
return v___x_1094_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1095_ = lean_unsigned_to_nat(0u);
v___x_1096_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__0);
v___x_1097_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
lean_ctor_set(v___x_1097_, 2, v___x_1095_);
return v___x_1097_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__5(void){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1098_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__4, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__4_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__4);
v___x_1099_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__3, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__3);
v___x_1100_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__0);
v___x_1101_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2);
v___x_1102_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
lean_ctor_set(v___x_1102_, 1, v___x_1100_);
lean_ctor_set(v___x_1102_, 2, v___x_1099_);
lean_ctor_set(v___x_1102_, 3, v___x_1100_);
lean_ctor_set(v___x_1102_, 4, v___x_1100_);
lean_ctor_set(v___x_1102_, 5, v___x_1100_);
lean_ctor_set(v___x_1102_, 6, v___x_1100_);
lean_ctor_set(v___x_1102_, 7, v___x_1098_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg(lean_object* v_ext_1103_, lean_object* v_b_1104_, uint8_t v_kind_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v_toCold_1110_; lean_object* v_currNamespace_1111_; lean_object* v___x_1112_; lean_object* v_env_1113_; lean_object* v_nextMacroScope_1114_; lean_object* v_ngen_1115_; lean_object* v_auxDeclNGen_1116_; lean_object* v_traceState_1117_; lean_object* v_recordedDeps_1118_; lean_object* v_messages_1119_; lean_object* v_infoState_1120_; lean_object* v_snapshotTasks_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1148_; 
v_toCold_1110_ = lean_ctor_get(v___y_1107_, 0);
v_currNamespace_1111_ = lean_ctor_get(v_toCold_1110_, 4);
v___x_1112_ = lean_st_ref_take(v___y_1108_);
v_env_1113_ = lean_ctor_get(v___x_1112_, 0);
v_nextMacroScope_1114_ = lean_ctor_get(v___x_1112_, 1);
v_ngen_1115_ = lean_ctor_get(v___x_1112_, 2);
v_auxDeclNGen_1116_ = lean_ctor_get(v___x_1112_, 3);
v_traceState_1117_ = lean_ctor_get(v___x_1112_, 4);
v_recordedDeps_1118_ = lean_ctor_get(v___x_1112_, 6);
v_messages_1119_ = lean_ctor_get(v___x_1112_, 7);
v_infoState_1120_ = lean_ctor_get(v___x_1112_, 8);
v_snapshotTasks_1121_ = lean_ctor_get(v___x_1112_, 9);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1148_ == 0)
{
lean_object* v_unused_1149_; 
v_unused_1149_ = lean_ctor_get(v___x_1112_, 5);
lean_dec(v_unused_1149_);
v___x_1123_ = v___x_1112_;
v_isShared_1124_ = v_isSharedCheck_1148_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_snapshotTasks_1121_);
lean_inc(v_infoState_1120_);
lean_inc(v_messages_1119_);
lean_inc(v_recordedDeps_1118_);
lean_inc(v_traceState_1117_);
lean_inc(v_auxDeclNGen_1116_);
lean_inc(v_ngen_1115_);
lean_inc(v_nextMacroScope_1114_);
lean_inc(v_env_1113_);
lean_dec(v___x_1112_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1148_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1128_; 
lean_inc(v_currNamespace_1111_);
v___x_1125_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_1113_, v_ext_1103_, v_b_1104_, v_kind_1105_, v_currNamespace_1111_);
v___x_1126_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__1);
if (v_isShared_1124_ == 0)
{
lean_ctor_set(v___x_1123_, 5, v___x_1126_);
lean_ctor_set(v___x_1123_, 0, v___x_1125_);
v___x_1128_ = v___x_1123_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v___x_1125_);
lean_ctor_set(v_reuseFailAlloc_1147_, 1, v_nextMacroScope_1114_);
lean_ctor_set(v_reuseFailAlloc_1147_, 2, v_ngen_1115_);
lean_ctor_set(v_reuseFailAlloc_1147_, 3, v_auxDeclNGen_1116_);
lean_ctor_set(v_reuseFailAlloc_1147_, 4, v_traceState_1117_);
lean_ctor_set(v_reuseFailAlloc_1147_, 5, v___x_1126_);
lean_ctor_set(v_reuseFailAlloc_1147_, 6, v_recordedDeps_1118_);
lean_ctor_set(v_reuseFailAlloc_1147_, 7, v_messages_1119_);
lean_ctor_set(v_reuseFailAlloc_1147_, 8, v_infoState_1120_);
lean_ctor_set(v_reuseFailAlloc_1147_, 9, v_snapshotTasks_1121_);
v___x_1128_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v_mctx_1131_; lean_object* v_zetaDeltaFVarIds_1132_; lean_object* v_postponed_1133_; lean_object* v_diag_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1145_; 
v___x_1129_ = lean_st_ref_put(v___y_1108_, v___x_1128_);
v___x_1130_ = lean_st_ref_take(v___y_1106_);
v_mctx_1131_ = lean_ctor_get(v___x_1130_, 0);
v_zetaDeltaFVarIds_1132_ = lean_ctor_get(v___x_1130_, 2);
v_postponed_1133_ = lean_ctor_get(v___x_1130_, 3);
v_diag_1134_ = lean_ctor_get(v___x_1130_, 4);
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1145_ == 0)
{
lean_object* v_unused_1146_; 
v_unused_1146_ = lean_ctor_get(v___x_1130_, 1);
lean_dec(v_unused_1146_);
v___x_1136_ = v___x_1130_;
v_isShared_1137_ = v_isSharedCheck_1145_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_diag_1134_);
lean_inc(v_postponed_1133_);
lean_inc(v_zetaDeltaFVarIds_1132_);
lean_inc(v_mctx_1131_);
lean_dec(v___x_1130_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1145_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1141_; 
v___x_1138_ = lean_box(0);
v___x_1139_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__5, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__5_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__5);
if (v_isShared_1137_ == 0)
{
lean_ctor_set(v___x_1136_, 1, v___x_1139_);
v___x_1141_ = v___x_1136_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_mctx_1131_);
lean_ctor_set(v_reuseFailAlloc_1144_, 1, v___x_1139_);
lean_ctor_set(v_reuseFailAlloc_1144_, 2, v_zetaDeltaFVarIds_1132_);
lean_ctor_set(v_reuseFailAlloc_1144_, 3, v_postponed_1133_);
lean_ctor_set(v_reuseFailAlloc_1144_, 4, v_diag_1134_);
v___x_1141_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = lean_st_ref_put(v___y_1106_, v___x_1141_);
v___x_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1138_);
return v___x_1143_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___boxed(lean_object* v_ext_1150_, lean_object* v_b_1151_, lean_object* v_kind_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
uint8_t v_kind_boxed_1157_; lean_object* v_res_1158_; 
v_kind_boxed_1157_ = lean_unbox(v_kind_1152_);
v_res_1158_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg(v_ext_1150_, v_b_1151_, v_kind_boxed_1157_, v___y_1153_, v___y_1154_, v___y_1155_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
lean_dec(v___y_1153_);
return v_res_1158_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__8___redArg(lean_object* v_ref_1159_, lean_object* v_msg_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_){
_start:
{
lean_object* v_toCold_1166_; lean_object* v_currRecDepth_1167_; lean_object* v_ref_1168_; uint16_t v_optionFlags_1169_; uint8_t v_suppressElabErrors_1170_; uint8_t v_checkDeprecated_1171_; uint8_t v_isRecordingDeps_1172_; lean_object* v_ref_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v_toCold_1166_ = lean_ctor_get(v___y_1163_, 0);
v_currRecDepth_1167_ = lean_ctor_get(v___y_1163_, 1);
v_ref_1168_ = lean_ctor_get(v___y_1163_, 2);
v_optionFlags_1169_ = lean_ctor_get_uint16(v___y_1163_, sizeof(void*)*3);
v_suppressElabErrors_1170_ = lean_ctor_get_uint8(v___y_1163_, sizeof(void*)*3 + 2);
v_checkDeprecated_1171_ = lean_ctor_get_uint8(v___y_1163_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1172_ = lean_ctor_get_uint8(v___y_1163_, sizeof(void*)*3 + 4);
v_ref_1173_ = l_Lean_replaceRef(v_ref_1159_, v_ref_1168_);
lean_inc(v_currRecDepth_1167_);
lean_inc_ref(v_toCold_1166_);
v___x_1174_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1174_, 0, v_toCold_1166_);
lean_ctor_set(v___x_1174_, 1, v_currRecDepth_1167_);
lean_ctor_set(v___x_1174_, 2, v_ref_1173_);
lean_ctor_set_uint16(v___x_1174_, sizeof(void*)*3, v_optionFlags_1169_);
lean_ctor_set_uint8(v___x_1174_, sizeof(void*)*3 + 2, v_suppressElabErrors_1170_);
lean_ctor_set_uint8(v___x_1174_, sizeof(void*)*3 + 3, v_checkDeprecated_1171_);
lean_ctor_set_uint8(v___x_1174_, sizeof(void*)*3 + 4, v_isRecordingDeps_1172_);
v___x_1175_ = l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0___redArg(v_msg_1160_, v___y_1161_, v___y_1162_, v___x_1174_, v___y_1164_);
lean_dec_ref_known(v___x_1174_, 3);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_ref_1176_, lean_object* v_msg_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
lean_object* v_res_1183_; 
v_res_1183_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__8___redArg(v_ref_1176_, v_msg_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
lean_dec(v_ref_1176_);
return v_res_1183_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1184_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0);
v___x_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1184_);
return v___x_1185_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1186_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__0);
v___x_1187_ = lean_unsigned_to_nat(0u);
v___x_1188_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1187_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
lean_ctor_set(v___x_1188_, 2, v___x_1187_);
lean_ctor_set(v___x_1188_, 3, v___x_1187_);
lean_ctor_set(v___x_1188_, 4, v___x_1186_);
lean_ctor_set(v___x_1188_, 5, v___x_1186_);
lean_ctor_set(v___x_1188_, 6, v___x_1186_);
lean_ctor_set(v___x_1188_, 7, v___x_1186_);
lean_ctor_set(v___x_1188_, 8, v___x_1186_);
lean_ctor_set(v___x_1188_, 9, v___x_1186_);
lean_ctor_set(v___x_1188_, 10, v___x_1186_);
return v___x_1188_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1189_ = lean_unsigned_to_nat(32u);
v___x_1190_ = lean_mk_empty_array_with_capacity(v___x_1189_);
v___x_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1190_);
return v___x_1191_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__3(void){
_start:
{
size_t v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1192_ = ((size_t)5ULL);
v___x_1193_ = lean_unsigned_to_nat(0u);
v___x_1194_ = lean_unsigned_to_nat(32u);
v___x_1195_ = lean_mk_empty_array_with_capacity(v___x_1194_);
v___x_1196_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__2);
v___x_1197_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1197_, 0, v___x_1196_);
lean_ctor_set(v___x_1197_, 1, v___x_1195_);
lean_ctor_set(v___x_1197_, 2, v___x_1193_);
lean_ctor_set(v___x_1197_, 3, v___x_1193_);
lean_ctor_set_usize(v___x_1197_, 4, v___x_1192_);
return v___x_1197_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__4(void){
_start:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1198_ = lean_box(1);
v___x_1199_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__3);
v___x_1200_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__0);
v___x_1201_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1200_);
lean_ctor_set(v___x_1201_, 1, v___x_1199_);
lean_ctor_set(v___x_1201_, 2, v___x_1198_);
return v___x_1201_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__6(void){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1203_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__5));
v___x_1204_ = l_Lean_stringToMessageData(v___x_1203_);
return v___x_1204_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__8(void){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1206_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__7));
v___x_1207_ = l_Lean_stringToMessageData(v___x_1206_);
return v___x_1207_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__10(void){
_start:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1209_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__9));
v___x_1210_ = l_Lean_stringToMessageData(v___x_1209_);
return v___x_1210_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__12(void){
_start:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1212_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__11));
v___x_1213_ = l_Lean_stringToMessageData(v___x_1212_);
return v___x_1213_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__14(void){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1215_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__13));
v___x_1216_ = l_Lean_stringToMessageData(v___x_1215_);
return v___x_1216_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__16(void){
_start:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1218_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__15));
v___x_1219_ = l_Lean_stringToMessageData(v___x_1218_);
return v___x_1219_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__18(void){
_start:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1221_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__17));
v___x_1222_ = l_Lean_stringToMessageData(v___x_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg(lean_object* v_msg_1223_, lean_object* v_declHint_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v_env_1229_; uint8_t v___x_1230_; 
v___x_1227_ = lean_box(0);
v___x_1228_ = lean_st_ref_get(v___y_1225_);
v_env_1229_ = lean_ctor_get(v___x_1228_, 0);
lean_inc_ref(v_env_1229_);
lean_dec(v___x_1228_);
v___x_1230_ = l_Lean_Name_isAnonymous(v_declHint_1224_);
if (v___x_1230_ == 0)
{
uint8_t v_isExporting_1231_; 
v_isExporting_1231_ = lean_ctor_get_uint8(v_env_1229_, sizeof(void*)*13);
if (v_isExporting_1231_ == 0)
{
lean_object* v___x_1232_; 
lean_dec_ref(v_env_1229_);
lean_dec(v_declHint_1224_);
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v_msg_1223_);
return v___x_1232_;
}
else
{
lean_object* v___x_1233_; uint8_t v___x_1234_; 
lean_inc_ref(v_env_1229_);
v___x_1233_ = l_Lean_Environment_setExporting(v_env_1229_, v___x_1230_);
lean_inc(v_declHint_1224_);
lean_inc_ref(v___x_1233_);
v___x_1234_ = l_Lean_Environment_contains(v___x_1233_, v_declHint_1224_, v_isExporting_1231_);
if (v___x_1234_ == 0)
{
lean_object* v___x_1235_; 
lean_dec_ref(v___x_1233_);
lean_dec_ref(v_env_1229_);
lean_dec(v_declHint_1224_);
v___x_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1235_, 0, v_msg_1223_);
return v___x_1235_;
}
else
{
lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v_c_1241_; lean_object* v___x_1242_; 
v___x_1236_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__1);
v___x_1237_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__4);
v___x_1238_ = l_Lean_Options_empty;
lean_inc_ref(v___x_1233_);
v___x_1239_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1233_);
lean_ctor_set(v___x_1239_, 1, v___x_1236_);
lean_ctor_set(v___x_1239_, 2, v___x_1237_);
lean_ctor_set(v___x_1239_, 3, v___x_1238_);
lean_inc(v_declHint_1224_);
v___x_1240_ = l_Lean_MessageData_ofConstName(v_declHint_1224_, v___x_1230_);
v_c_1241_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1241_, 0, v___x_1239_);
lean_ctor_set(v_c_1241_, 1, v___x_1240_);
v___x_1242_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_1233_, v_declHint_1224_);
lean_dec_ref(v___x_1233_);
if (lean_obj_tag(v___x_1242_) == 0)
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
lean_dec_ref(v_env_1229_);
lean_dec(v_declHint_1224_);
v___x_1243_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__6);
v___x_1244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1243_);
lean_ctor_set(v___x_1244_, 1, v_c_1241_);
v___x_1245_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__8);
v___x_1246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1244_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = l_Lean_MessageData_note(v___x_1246_);
v___x_1248_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1248_, 0, v_msg_1223_);
lean_ctor_set(v___x_1248_, 1, v___x_1247_);
v___x_1249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1248_);
return v___x_1249_;
}
else
{
lean_object* v_val_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1284_; 
v_val_1250_ = lean_ctor_get(v___x_1242_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v___x_1242_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1252_ = v___x_1242_;
v_isShared_1253_ = v_isSharedCheck_1284_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_val_1250_);
lean_dec(v___x_1242_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1284_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1254_; lean_object* v_moduleNames_1255_; lean_object* v_mod_1256_; uint8_t v___x_1257_; 
v___x_1254_ = l_Lean_Environment_header(v_env_1229_);
lean_dec_ref(v_env_1229_);
v_moduleNames_1255_ = lean_ctor_get(v___x_1254_, 4);
lean_inc_ref(v_moduleNames_1255_);
lean_dec_ref(v___x_1254_);
v_mod_1256_ = lean_array_get(v___x_1227_, v_moduleNames_1255_, v_val_1250_);
lean_dec(v_val_1250_);
lean_dec_ref(v_moduleNames_1255_);
v___x_1257_ = l_Lean_isPrivateName(v_declHint_1224_);
lean_dec(v_declHint_1224_);
if (v___x_1257_ == 0)
{
lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1269_; 
v___x_1258_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__10);
v___x_1259_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
lean_ctor_set(v___x_1259_, 1, v_c_1241_);
v___x_1260_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__12);
v___x_1261_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1259_);
lean_ctor_set(v___x_1261_, 1, v___x_1260_);
v___x_1262_ = l_Lean_MessageData_ofName(v_mod_1256_);
v___x_1263_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1261_);
lean_ctor_set(v___x_1263_, 1, v___x_1262_);
v___x_1264_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__14);
v___x_1265_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1263_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
v___x_1266_ = l_Lean_MessageData_note(v___x_1265_);
v___x_1267_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1267_, 0, v_msg_1223_);
lean_ctor_set(v___x_1267_, 1, v___x_1266_);
if (v_isShared_1253_ == 0)
{
lean_ctor_set_tag(v___x_1252_, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1267_);
v___x_1269_ = v___x_1252_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v___x_1267_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
else
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1282_; 
v___x_1271_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__6);
v___x_1272_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1271_);
lean_ctor_set(v___x_1272_, 1, v_c_1241_);
v___x_1273_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__16);
v___x_1274_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1272_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
v___x_1275_ = l_Lean_MessageData_ofName(v_mod_1256_);
v___x_1276_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1274_);
lean_ctor_set(v___x_1276_, 1, v___x_1275_);
v___x_1277_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__18);
v___x_1278_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1276_);
lean_ctor_set(v___x_1278_, 1, v___x_1277_);
v___x_1279_ = l_Lean_MessageData_note(v___x_1278_);
v___x_1280_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1280_, 0, v_msg_1223_);
lean_ctor_set(v___x_1280_, 1, v___x_1279_);
if (v_isShared_1253_ == 0)
{
lean_ctor_set_tag(v___x_1252_, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1280_);
v___x_1282_ = v___x_1252_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v___x_1280_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
return v___x_1282_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1285_; 
lean_dec_ref(v_env_1229_);
lean_dec(v_declHint_1224_);
v___x_1285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1285_, 0, v_msg_1223_);
return v___x_1285_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___boxed(lean_object* v_msg_1286_, lean_object* v_declHint_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg(v_msg_1286_, v_declHint_1287_, v___y_1288_);
lean_dec(v___y_1288_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7(lean_object* v_msg_1291_, lean_object* v_declHint_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v___x_1298_; lean_object* v_a_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1308_; 
v___x_1298_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg(v_msg_1291_, v_declHint_1292_, v___y_1296_);
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1301_ = v___x_1298_;
v_isShared_1302_ = v_isSharedCheck_1308_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_a_1299_);
lean_dec(v___x_1298_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1308_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1306_; 
v___x_1303_ = l_Lean_unknownIdentifierMessageTag;
v___x_1304_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
lean_ctor_set(v___x_1304_, 1, v_a_1299_);
if (v_isShared_1302_ == 0)
{
lean_ctor_set(v___x_1301_, 0, v___x_1304_);
v___x_1306_ = v___x_1301_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v___x_1304_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7___boxed(lean_object* v_msg_1309_, lean_object* v_declHint_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_){
_start:
{
lean_object* v_res_1316_; 
v_res_1316_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7(v_msg_1309_, v_declHint_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
return v_res_1316_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_ref_1317_, lean_object* v_msg_1318_, lean_object* v_declHint_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_){
_start:
{
lean_object* v___x_1325_; lean_object* v_a_1326_; lean_object* v___x_1327_; 
v___x_1325_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7(v_msg_1318_, v_declHint_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_);
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
lean_inc(v_a_1326_);
lean_dec_ref(v___x_1325_);
v___x_1327_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__8___redArg(v_ref_1317_, v_a_1326_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_);
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_ref_1328_, lean_object* v_msg_1329_, lean_object* v_declHint_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_){
_start:
{
lean_object* v_res_1336_; 
v_res_1336_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4___redArg(v_ref_1328_, v_msg_1329_, v_declHint_1330_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec(v___y_1332_);
lean_dec_ref(v___y_1331_);
lean_dec(v_ref_1328_);
return v_res_1336_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_1338_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_1339_ = l_Lean_stringToMessageData(v___x_1338_);
return v___x_1339_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1341_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__2));
v___x_1342_ = l_Lean_stringToMessageData(v___x_1341_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg(lean_object* v_ref_1343_, lean_object* v_constName_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_){
_start:
{
lean_object* v___x_1350_; uint8_t v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; 
v___x_1350_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_1351_ = 0;
lean_inc(v_constName_1344_);
v___x_1352_ = l_Lean_MessageData_ofConstName(v_constName_1344_, v___x_1351_);
v___x_1353_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1350_);
lean_ctor_set(v___x_1353_, 1, v___x_1352_);
v___x_1354_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___closed__3);
v___x_1355_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1355_, 0, v___x_1353_);
lean_ctor_set(v___x_1355_, 1, v___x_1354_);
v___x_1356_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4___redArg(v_ref_1343_, v___x_1355_, v_constName_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_);
return v___x_1356_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_ref_1357_, lean_object* v_constName_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v_res_1364_; 
v_res_1364_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg(v_ref_1357_, v_constName_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
lean_dec(v___y_1362_);
lean_dec_ref(v___y_1361_);
lean_dec(v___y_1360_);
lean_dec_ref(v___y_1359_);
lean_dec(v_ref_1357_);
return v_res_1364_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0___redArg(lean_object* v_constName_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_){
_start:
{
lean_object* v_ref_1371_; lean_object* v___x_1372_; 
v_ref_1371_ = lean_ctor_get(v___y_1368_, 2);
v___x_1372_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg(v_ref_1371_, v_constName_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
return v___x_1372_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0___redArg(v_constName_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
lean_dec(v___y_1377_);
lean_dec_ref(v___y_1376_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0(lean_object* v_constName_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_){
_start:
{
lean_object* v___x_1386_; lean_object* v_env_1387_; uint8_t v___x_1388_; lean_object* v___x_1389_; 
v___x_1386_ = lean_st_ref_get(v___y_1384_);
v_env_1387_ = lean_ctor_get(v___x_1386_, 0);
lean_inc_ref(v_env_1387_);
lean_dec(v___x_1386_);
v___x_1388_ = 0;
lean_inc(v_constName_1380_);
v___x_1389_ = l_Lean_Environment_find_x3f(v_env_1387_, v_constName_1380_, v___x_1388_);
if (lean_obj_tag(v___x_1389_) == 0)
{
lean_object* v___x_1390_; 
v___x_1390_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0___redArg(v_constName_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
return v___x_1390_;
}
else
{
lean_object* v_val_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1398_; 
lean_dec(v_constName_1380_);
v_val_1391_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1393_ = v___x_1389_;
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_val_1391_);
lean_dec(v___x_1389_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1396_; 
if (v_isShared_1394_ == 0)
{
lean_ctor_set_tag(v___x_1393_, 0);
v___x_1396_ = v___x_1393_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_val_1391_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0___boxed(lean_object* v_constName_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l_Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0(v_constName_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
lean_dec(v___y_1401_);
lean_dec_ref(v___y_1400_);
return v_res_1405_;
}
}
static lean_object* _init_l_Lean_Meta_addUnificationHint___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1407_ = ((lean_object*)(l_Lean_Meta_addUnificationHint___lam__0___closed__0));
v___x_1408_ = l_Lean_stringToMessageData(v___x_1407_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addUnificationHint___lam__0(lean_object* v_declName_1409_, uint8_t v_kind_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v___x_1416_; 
lean_inc(v_declName_1409_);
v___x_1416_ = l_Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0(v_declName_1409_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; uint8_t v___x_1418_; lean_object* v___x_1419_; 
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_a_1417_);
lean_dec_ref_known(v___x_1416_, 1);
v___x_1418_ = 0;
v___x_1419_ = l_Lean_ConstantInfo_value_x3f(v_a_1417_, v___x_1418_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v___x_1420_; lean_object* v___x_1421_; 
lean_dec(v_declName_1409_);
v___x_1420_ = lean_obj_once(&l_Lean_Meta_addUnificationHint___lam__0___closed__1, &l_Lean_Meta_addUnificationHint___lam__0___closed__1_once, _init_l_Lean_Meta_addUnificationHint___lam__0___closed__1);
v___x_1421_ = l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0___redArg(v___x_1420_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_);
return v___x_1421_;
}
else
{
lean_object* v_val_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
v_val_1422_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_val_1422_);
lean_dec_ref_known(v___x_1419_, 1);
v___x_1423_ = lean_box(0);
v___x_1424_ = l_Lean_Meta_lambdaMetaTelescope(v_val_1422_, v___x_1423_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_);
lean_dec(v_val_1422_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_a_1425_; lean_object* v_snd_1426_; lean_object* v_snd_1427_; lean_object* v___x_1428_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
lean_inc(v_a_1425_);
lean_dec_ref_known(v___x_1424_, 1);
v_snd_1426_ = lean_ctor_get(v_a_1425_, 1);
lean_inc(v_snd_1426_);
lean_dec(v_a_1425_);
v_snd_1427_ = lean_ctor_get(v_snd_1426_, 1);
lean_inc(v_snd_1427_);
lean_dec(v_snd_1426_);
v___x_1428_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint(v_snd_1427_);
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v_a_1429_; lean_object* v___x_1430_; 
lean_dec(v_declName_1409_);
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
lean_inc(v_a_1429_);
lean_dec_ref_known(v___x_1428_, 1);
v___x_1430_ = l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0___redArg(v_a_1429_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_);
return v___x_1430_;
}
else
{
lean_object* v_a_1431_; lean_object* v_pattern_1432_; lean_object* v_lhs_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1468_; 
v_a_1431_ = lean_ctor_get(v___x_1428_, 0);
lean_inc(v_a_1431_);
lean_dec_ref_known(v___x_1428_, 1);
v_pattern_1432_ = lean_ctor_get(v_a_1431_, 0);
lean_inc_ref(v_pattern_1432_);
v_lhs_1433_ = lean_ctor_get(v_pattern_1432_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v_pattern_1432_);
if (v_isSharedCheck_1468_ == 0)
{
lean_object* v_unused_1469_; 
v_unused_1469_ = lean_ctor_get(v_pattern_1432_, 1);
lean_dec(v_unused_1469_);
v___x_1435_ = v_pattern_1432_;
v_isShared_1436_ = v_isSharedCheck_1468_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_lhs_1433_);
lean_dec(v_pattern_1432_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1468_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1437_; lean_object* v_config_1438_; uint8_t v_trackZetaDelta_1439_; lean_object* v_zetaDeltaSet_1440_; lean_object* v_lctx_1441_; lean_object* v_localInstances_1442_; lean_object* v_defEqCtx_x3f_1443_; lean_object* v_synthPendingDepth_1444_; lean_object* v_customCanUnfoldPredicate_x3f_1445_; uint8_t v_univApprox_1446_; uint8_t v_inTypeClassResolution_1447_; uint8_t v_cacheInferType_1448_; uint64_t v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1437_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config;
v_config_1438_ = lean_ctor_get(v___x_1437_, 0);
v_trackZetaDelta_1439_ = lean_ctor_get_uint8(v___y_1411_, sizeof(void*)*7);
v_zetaDeltaSet_1440_ = lean_ctor_get(v___y_1411_, 1);
v_lctx_1441_ = lean_ctor_get(v___y_1411_, 2);
v_localInstances_1442_ = lean_ctor_get(v___y_1411_, 3);
v_defEqCtx_x3f_1443_ = lean_ctor_get(v___y_1411_, 4);
v_synthPendingDepth_1444_ = lean_ctor_get(v___y_1411_, 5);
v_customCanUnfoldPredicate_x3f_1445_ = lean_ctor_get(v___y_1411_, 6);
v_univApprox_1446_ = lean_ctor_get_uint8(v___y_1411_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1447_ = lean_ctor_get_uint8(v___y_1411_, sizeof(void*)*7 + 2);
v_cacheInferType_1448_ = lean_ctor_get_uint8(v___y_1411_, sizeof(void*)*7 + 3);
v___x_1449_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v_config_1438_);
lean_inc_ref(v_config_1438_);
v___x_1450_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1450_, 0, v_config_1438_);
lean_ctor_set_uint64(v___x_1450_, sizeof(void*)*1, v___x_1449_);
lean_inc(v_customCanUnfoldPredicate_x3f_1445_);
lean_inc(v_synthPendingDepth_1444_);
lean_inc(v_defEqCtx_x3f_1443_);
lean_inc_ref(v_localInstances_1442_);
lean_inc_ref(v_lctx_1441_);
lean_inc(v_zetaDeltaSet_1440_);
v___x_1451_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1451_, 0, v___x_1450_);
lean_ctor_set(v___x_1451_, 1, v_zetaDeltaSet_1440_);
lean_ctor_set(v___x_1451_, 2, v_lctx_1441_);
lean_ctor_set(v___x_1451_, 3, v_localInstances_1442_);
lean_ctor_set(v___x_1451_, 4, v_defEqCtx_x3f_1443_);
lean_ctor_set(v___x_1451_, 5, v_synthPendingDepth_1444_);
lean_ctor_set(v___x_1451_, 6, v_customCanUnfoldPredicate_x3f_1445_);
lean_ctor_set_uint8(v___x_1451_, sizeof(void*)*7, v_trackZetaDelta_1439_);
lean_ctor_set_uint8(v___x_1451_, sizeof(void*)*7 + 1, v_univApprox_1446_);
lean_ctor_set_uint8(v___x_1451_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1447_);
lean_ctor_set_uint8(v___x_1451_, sizeof(void*)*7 + 3, v_cacheInferType_1448_);
v___x_1452_ = l_Lean_Meta_DiscrTree_mkPath(v_lhs_1433_, v___x_1418_, v___x_1451_, v___y_1412_, v___y_1413_, v___y_1414_);
lean_dec_ref_known(v___x_1451_, 7);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v_a_1453_; lean_object* v___x_1454_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
lean_inc(v_a_1453_);
lean_dec_ref_known(v___x_1452_, 1);
v___x_1454_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint(v_a_1431_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_);
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v___x_1455_; lean_object* v___x_1457_; 
lean_dec_ref_known(v___x_1454_, 1);
v___x_1455_ = l_Lean_Meta_unificationHintExtension;
if (v_isShared_1436_ == 0)
{
lean_ctor_set(v___x_1435_, 1, v_declName_1409_);
lean_ctor_set(v___x_1435_, 0, v_a_1453_);
v___x_1457_ = v___x_1435_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_a_1453_);
lean_ctor_set(v_reuseFailAlloc_1459_, 1, v_declName_1409_);
v___x_1457_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
lean_object* v___x_1458_; 
v___x_1458_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg(v___x_1455_, v___x_1457_, v_kind_1410_, v___y_1412_, v___y_1413_, v___y_1414_);
return v___x_1458_;
}
}
else
{
lean_dec(v_a_1453_);
lean_del_object(v___x_1435_);
lean_dec(v_declName_1409_);
return v___x_1454_;
}
}
else
{
lean_object* v_a_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1467_; 
lean_del_object(v___x_1435_);
lean_dec(v_a_1431_);
lean_dec(v_declName_1409_);
v_a_1460_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1467_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1462_ = v___x_1452_;
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_a_1460_);
lean_dec(v___x_1452_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___x_1465_; 
if (v_isShared_1463_ == 0)
{
v___x_1465_ = v___x_1462_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v_a_1460_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
return v___x_1465_;
}
}
}
}
}
}
else
{
lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1477_; 
lean_dec(v_declName_1409_);
v_a_1470_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1472_ = v___x_1424_;
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1424_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1475_; 
if (v_isShared_1473_ == 0)
{
v___x_1475_ = v___x_1472_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_a_1470_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
}
}
else
{
lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1485_; 
lean_dec(v_declName_1409_);
v_a_1478_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1480_ = v___x_1416_;
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v___x_1416_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_a_1478_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addUnificationHint___lam__0___boxed(lean_object* v_declName_1486_, lean_object* v_kind_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
uint8_t v_kind_boxed_1493_; lean_object* v_res_1494_; 
v_kind_boxed_1493_ = lean_unbox(v_kind_1487_);
v_res_1494_ = l_Lean_Meta_addUnificationHint___lam__0(v_declName_1486_, v_kind_boxed_1493_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_);
lean_dec(v___y_1491_);
lean_dec_ref(v___y_1490_);
lean_dec(v___y_1489_);
lean_dec_ref(v___y_1488_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addUnificationHint(lean_object* v_declName_1495_, uint8_t v_kind_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_){
_start:
{
lean_object* v___x_1502_; lean_object* v___f_1503_; uint8_t v___x_1504_; lean_object* v___x_1505_; 
v___x_1502_ = lean_box(v_kind_1496_);
v___f_1503_ = lean_alloc_closure((void*)(l_Lean_Meta_addUnificationHint___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1503_, 0, v_declName_1495_);
lean_closure_set(v___f_1503_, 1, v___x_1502_);
v___x_1504_ = 0;
v___x_1505_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_addUnificationHint_spec__2___redArg(v___f_1503_, v___x_1504_, v_a_1497_, v_a_1498_, v_a_1499_, v_a_1500_);
return v___x_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addUnificationHint___boxed(lean_object* v_declName_1506_, lean_object* v_kind_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_){
_start:
{
uint8_t v_kind_boxed_1513_; lean_object* v_res_1514_; 
v_kind_boxed_1513_ = lean_unbox(v_kind_1507_);
v_res_1514_ = l_Lean_Meta_addUnificationHint(v_declName_1506_, v_kind_boxed_1513_, v_a_1508_, v_a_1509_, v_a_1510_, v_a_1511_);
lean_dec(v_a_1511_);
lean_dec_ref(v_a_1510_);
lean_dec(v_a_1509_);
lean_dec_ref(v_a_1508_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1(lean_object* v_00_u03b1_1515_, lean_object* v_00_u03b2_1516_, lean_object* v_00_u03c3_1517_, lean_object* v_ext_1518_, lean_object* v_b_1519_, uint8_t v_kind_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_){
_start:
{
lean_object* v___x_1526_; 
v___x_1526_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg(v_ext_1518_, v_b_1519_, v_kind_1520_, v___y_1522_, v___y_1523_, v___y_1524_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___boxed(lean_object* v_00_u03b1_1527_, lean_object* v_00_u03b2_1528_, lean_object* v_00_u03c3_1529_, lean_object* v_ext_1530_, lean_object* v_b_1531_, lean_object* v_kind_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_){
_start:
{
uint8_t v_kind_boxed_1538_; lean_object* v_res_1539_; 
v_kind_boxed_1538_ = lean_unbox(v_kind_1532_);
v_res_1539_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1(v_00_u03b1_1527_, v_00_u03b2_1528_, v_00_u03c3_1529_, v_ext_1530_, v_b_1531_, v_kind_boxed_1538_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_);
lean_dec(v___y_1536_);
lean_dec_ref(v___y_1535_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0(lean_object* v_00_u03b1_1540_, lean_object* v_constName_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_){
_start:
{
lean_object* v___x_1547_; 
v___x_1547_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0___redArg(v_constName_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1548_, lean_object* v_constName_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_){
_start:
{
lean_object* v_res_1555_; 
v_res_1555_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0(v_00_u03b1_1548_, v_constName_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_);
lean_dec(v___y_1553_);
lean_dec_ref(v___y_1552_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
return v_res_1555_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_1556_){
_start:
{
lean_object* v___x_1557_; 
v___x_1557_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2___redArg(){
_start:
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2);
return v___x_1559_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2___redArg___boxed(lean_object* v___dummy_1560_){
_start:
{
lean_object* v_res_1561_; 
v_res_1561_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2___redArg();
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2(lean_object* v_00_u03b2_1562_){
_start:
{
lean_object* v___x_1563_; 
v___x_1563_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_1564_, lean_object* v_ref_1565_, lean_object* v_constName_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_){
_start:
{
lean_object* v___x_1572_; 
v___x_1572_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___redArg(v_ref_1565_, v_constName_1566_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_1573_, lean_object* v_ref_1574_, lean_object* v_constName_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_){
_start:
{
lean_object* v_res_1581_; 
v_res_1581_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2(v_00_u03b1_1573_, v_ref_1574_, v_constName_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec(v_ref_1574_);
return v_res_1581_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b1_1582_, lean_object* v_ref_1583_, lean_object* v_msg_1584_, lean_object* v_declHint_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_){
_start:
{
lean_object* v___x_1591_; 
v___x_1591_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4___redArg(v_ref_1583_, v_msg_1584_, v_declHint_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_00_u03b1_1592_, lean_object* v_ref_1593_, lean_object* v_msg_1594_, lean_object* v_declHint_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_){
_start:
{
lean_object* v_res_1601_; 
v_res_1601_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4(v_00_u03b1_1592_, v_ref_1593_, v_msg_1594_, v_declHint_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
lean_dec(v___y_1599_);
lean_dec_ref(v___y_1598_);
lean_dec(v___y_1597_);
lean_dec_ref(v___y_1596_);
lean_dec(v_ref_1593_);
return v_res_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8(lean_object* v_msg_1602_, lean_object* v_declHint_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_){
_start:
{
lean_object* v___x_1609_; 
v___x_1609_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg(v_msg_1602_, v_declHint_1603_, v___y_1607_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___boxed(lean_object* v_msg_1610_, lean_object* v_declHint_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8(v_msg_1610_, v_declHint_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object* v_00_u03b1_1618_, lean_object* v_ref_1619_, lean_object* v_msg_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_){
_start:
{
lean_object* v___x_1626_; 
v___x_1626_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__8___redArg(v_ref_1619_, v_msg_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b1_1627_, lean_object* v_ref_1628_, lean_object* v_msg_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__8(v_00_u03b1_1627_, v_ref_1628_, v_msg_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_);
lean_dec(v___y_1633_);
lean_dec_ref(v___y_1632_);
lean_dec(v___y_1631_);
lean_dec_ref(v___y_1630_);
lean_dec(v_ref_1628_);
return v_res_1635_;
}
}
static uint64_t _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1642_; uint64_t v___x_1643_; 
v___x_1642_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_));
v___x_1643_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1642_);
return v___x_1643_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
v___x_1644_ = lean_uint64_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_);
v___x_1645_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_));
v___x_1646_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1646_, 0, v___x_1645_);
lean_ctor_set_uint64(v___x_1646_, sizeof(void*)*1, v___x_1644_);
return v___x_1646_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; 
v___x_1647_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0);
v___x_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1648_, 0, v___x_1647_);
return v___x_1648_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1649_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_);
v___x_1650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1649_);
lean_ctor_set(v___x_1650_, 1, v___x_1649_);
return v___x_1650_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1651_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_);
v___x_1652_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1651_);
lean_ctor_set(v___x_1652_, 1, v___x_1651_);
lean_ctor_set(v___x_1652_, 2, v___x_1651_);
lean_ctor_set(v___x_1652_, 3, v___x_1651_);
lean_ctor_set(v___x_1652_, 4, v___x_1651_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(lean_object* v___x_1653_, lean_object* v___x_1654_, lean_object* v_declName_1655_, lean_object* v_stx_1656_, uint8_t v_kind_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_){
_start:
{
lean_object* v___x_1661_; 
v___x_1661_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_1656_, v___y_1658_, v___y_1659_);
if (lean_obj_tag(v___x_1661_) == 0)
{
uint8_t v___x_1662_; uint8_t v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; size_t v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; 
lean_dec_ref_known(v___x_1661_, 1);
v___x_1662_ = 0;
v___x_1663_ = 1;
v___x_1664_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_);
v___x_1665_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_);
v___x_1666_ = lean_unsigned_to_nat(32u);
v___x_1667_ = lean_mk_empty_array_with_capacity(v___x_1666_);
v___x_1668_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__2);
v___x_1669_ = ((size_t)5ULL);
lean_inc_n(v___x_1653_, 7);
v___x_1670_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1670_, 0, v___x_1668_);
lean_ctor_set(v___x_1670_, 1, v___x_1667_);
lean_ctor_set(v___x_1670_, 2, v___x_1653_);
lean_ctor_set(v___x_1670_, 3, v___x_1653_);
lean_ctor_set_usize(v___x_1670_, 4, v___x_1669_);
v___x_1671_ = lean_box(1);
lean_inc_ref(v___x_1670_);
v___x_1672_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1665_);
lean_ctor_set(v___x_1672_, 1, v___x_1670_);
lean_ctor_set(v___x_1672_, 2, v___x_1671_);
v___x_1673_ = lean_mk_empty_array_with_capacity(v___x_1653_);
v___x_1674_ = lean_box(0);
lean_inc(v___x_1654_);
v___x_1675_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1675_, 0, v___x_1664_);
lean_ctor_set(v___x_1675_, 1, v___x_1654_);
lean_ctor_set(v___x_1675_, 2, v___x_1672_);
lean_ctor_set(v___x_1675_, 3, v___x_1673_);
lean_ctor_set(v___x_1675_, 4, v___x_1674_);
lean_ctor_set(v___x_1675_, 5, v___x_1653_);
lean_ctor_set(v___x_1675_, 6, v___x_1674_);
lean_ctor_set_uint8(v___x_1675_, sizeof(void*)*7, v___x_1662_);
lean_ctor_set_uint8(v___x_1675_, sizeof(void*)*7 + 1, v___x_1662_);
lean_ctor_set_uint8(v___x_1675_, sizeof(void*)*7 + 2, v___x_1662_);
lean_ctor_set_uint8(v___x_1675_, sizeof(void*)*7 + 3, v___x_1663_);
v___x_1676_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1653_);
lean_ctor_set(v___x_1676_, 1, v___x_1653_);
lean_ctor_set(v___x_1676_, 2, v___x_1653_);
lean_ctor_set(v___x_1676_, 3, v___x_1653_);
lean_ctor_set(v___x_1676_, 4, v___x_1665_);
lean_ctor_set(v___x_1676_, 5, v___x_1665_);
lean_ctor_set(v___x_1676_, 6, v___x_1665_);
lean_ctor_set(v___x_1676_, 7, v___x_1665_);
lean_ctor_set(v___x_1676_, 8, v___x_1665_);
lean_ctor_set(v___x_1676_, 9, v___x_1665_);
lean_ctor_set(v___x_1676_, 10, v___x_1665_);
v___x_1677_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1___redArg___closed__2);
v___x_1678_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_);
v___x_1679_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1665_);
lean_ctor_set(v___x_1679_, 1, v___x_1665_);
lean_ctor_set(v___x_1679_, 2, v___x_1653_);
v___x_1680_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1680_, 0, v___x_1677_);
lean_ctor_set(v___x_1680_, 1, v___x_1665_);
lean_ctor_set(v___x_1680_, 2, v___x_1678_);
lean_ctor_set(v___x_1680_, 3, v___x_1665_);
lean_ctor_set(v___x_1680_, 4, v___x_1665_);
lean_ctor_set(v___x_1680_, 5, v___x_1665_);
lean_ctor_set(v___x_1680_, 6, v___x_1665_);
lean_ctor_set(v___x_1680_, 7, v___x_1679_);
v___x_1681_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_);
v___x_1682_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1676_);
lean_ctor_set(v___x_1682_, 1, v___x_1680_);
lean_ctor_set(v___x_1682_, 2, v___x_1654_);
lean_ctor_set(v___x_1682_, 3, v___x_1670_);
lean_ctor_set(v___x_1682_, 4, v___x_1681_);
v___x_1683_ = lean_box(0);
v___x_1684_ = lean_st_mk_ref(v___x_1682_);
v___x_1685_ = l_Lean_Meta_addUnificationHint(v_declName_1655_, v_kind_1657_, v___x_1675_, v___x_1684_, v___y_1658_, v___y_1659_);
lean_dec_ref_known(v___x_1675_, 7);
if (lean_obj_tag(v___x_1685_) == 0)
{
lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1693_; 
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1693_ == 0)
{
lean_object* v_unused_1694_; 
v_unused_1694_ = lean_ctor_get(v___x_1685_, 0);
lean_dec(v_unused_1694_);
v___x_1687_ = v___x_1685_;
v_isShared_1688_ = v_isSharedCheck_1693_;
goto v_resetjp_1686_;
}
else
{
lean_dec(v___x_1685_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1693_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1689_; lean_object* v___x_1691_; 
v___x_1689_ = lean_st_ref_get(v___x_1684_);
lean_dec(v___x_1684_);
lean_dec(v___x_1689_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 0, v___x_1683_);
v___x_1691_ = v___x_1687_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v___x_1683_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
}
else
{
lean_dec(v___x_1684_);
return v___x_1685_;
}
}
else
{
lean_dec(v_declName_1655_);
lean_dec(v___x_1654_);
lean_dec(v___x_1653_);
return v___x_1661_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2____boxed(lean_object* v___x_1695_, lean_object* v___x_1696_, lean_object* v_declName_1697_, lean_object* v_stx_1698_, lean_object* v_kind_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
uint8_t v_kind_boxed_1703_; lean_object* v_res_1704_; 
v_kind_boxed_1703_ = lean_unbox(v_kind_1699_);
v_res_1704_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(v___x_1695_, v___x_1696_, v_declName_1697_, v_stx_1698_, v_kind_boxed_1703_, v___y_1700_, v___y_1701_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_){
_start:
{
lean_object* v___x_1709_; lean_object* v_toCold_1710_; lean_object* v_env_1711_; lean_object* v_options_1712_; uint8_t v___x_1713_; lean_object* v_env_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1709_ = lean_st_ref_get(v___y_1707_);
v_toCold_1710_ = lean_ctor_get(v___y_1706_, 0);
v_env_1711_ = lean_ctor_get(v___x_1709_, 0);
lean_inc_ref(v_env_1711_);
lean_dec(v___x_1709_);
v_options_1712_ = lean_ctor_get(v_toCold_1710_, 2);
v___x_1713_ = 0;
v_env_1714_ = l_Lean_Environment_setRecordingDeps(v_env_1711_, v___x_1713_);
v___x_1715_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__1);
v___x_1716_ = lean_unsigned_to_nat(32u);
v___x_1717_ = lean_mk_empty_array_with_capacity(v___x_1716_);
lean_dec_ref(v___x_1717_);
v___x_1718_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0_spec__0_spec__2_spec__4_spec__7_spec__8___redArg___closed__4);
lean_inc_ref(v_options_1712_);
v___x_1719_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1719_, 0, v_env_1714_);
lean_ctor_set(v___x_1719_, 1, v___x_1715_);
lean_ctor_set(v___x_1719_, 2, v___x_1718_);
lean_ctor_set(v___x_1719_, 3, v_options_1712_);
v___x_1720_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1719_);
lean_ctor_set(v___x_1720_, 1, v_msgData_1705_);
v___x_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1720_);
return v___x_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0_spec__0(v_msgData_1722_, v___y_1723_, v___y_1724_);
lean_dec(v___y_1724_);
lean_dec_ref(v___y_1723_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_){
_start:
{
lean_object* v_ref_1731_; lean_object* v___x_1732_; lean_object* v_a_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1741_; 
v_ref_1731_ = lean_ctor_get(v___y_1728_, 2);
v___x_1732_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0_spec__0(v_msg_1727_, v___y_1728_, v___y_1729_);
v_a_1733_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1735_ = v___x_1732_;
v_isShared_1736_ = v_isSharedCheck_1741_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_a_1733_);
lean_dec(v___x_1732_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1741_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1737_; lean_object* v___x_1739_; 
lean_inc(v_ref_1731_);
v___x_1737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1737_, 0, v_ref_1731_);
lean_ctor_set(v___x_1737_, 1, v_a_1733_);
if (v_isShared_1736_ == 0)
{
lean_ctor_set_tag(v___x_1735_, 1);
lean_ctor_set(v___x_1735_, 0, v___x_1737_);
v___x_1739_ = v___x_1735_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v___x_1737_);
v___x_1739_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
return v___x_1739_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_){
_start:
{
lean_object* v_res_1746_; 
v_res_1746_ = l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0___redArg(v_msg_1742_, v___y_1743_, v___y_1744_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
return v_res_1746_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1748_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_));
v___x_1749_ = l_Lean_stringToMessageData(v___x_1748_);
return v___x_1749_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1751_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_));
v___x_1752_ = l_Lean_stringToMessageData(v___x_1751_);
return v___x_1752_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(lean_object* v___x_1753_, lean_object* v_decl_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
v___x_1758_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_);
v___x_1759_ = l_Lean_MessageData_ofName(v___x_1753_);
v___x_1760_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1760_, 0, v___x_1758_);
lean_ctor_set(v___x_1760_, 1, v___x_1759_);
v___x_1761_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_);
v___x_1762_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1760_);
lean_ctor_set(v___x_1762_, 1, v___x_1761_);
v___x_1763_ = l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0___redArg(v___x_1762_, v___y_1755_, v___y_1756_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2____boxed(lean_object* v___x_1764_, lean_object* v_decl_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(v___x_1764_, v_decl_1765_, v___y_1766_, v___y_1767_);
lean_dec(v___y_1767_);
lean_dec_ref(v___y_1766_);
lean_dec(v_decl_1765_);
return v_res_1769_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1813_ = lean_unsigned_to_nat(3033092106u);
v___x_1814_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_));
v___x_1815_ = l_Lean_Name_num___override(v___x_1814_, v___x_1813_);
return v___x_1815_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1817_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_));
v___x_1818_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_);
v___x_1819_ = l_Lean_Name_str___override(v___x_1818_, v___x_1817_);
return v___x_1819_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1821_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_));
v___x_1822_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_);
v___x_1823_ = l_Lean_Name_str___override(v___x_1822_, v___x_1821_);
return v___x_1823_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1824_ = lean_unsigned_to_nat(2u);
v___x_1825_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_);
v___x_1826_ = l_Lean_Name_num___override(v___x_1825_, v___x_1824_);
return v___x_1826_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1833_ = 0;
v___x_1834_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_));
v___x_1835_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_));
v___x_1836_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_);
v___x_1837_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1837_, 0, v___x_1836_);
lean_ctor_set(v___x_1837_, 1, v___x_1835_);
lean_ctor_set(v___x_1837_, 2, v___x_1834_);
lean_ctor_set_uint8(v___x_1837_, sizeof(void*)*3, v___x_1833_);
return v___x_1837_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_1838_; lean_object* v___f_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; 
v___f_1838_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_));
v___f_1839_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_));
v___x_1840_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_);
v___x_1841_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1840_);
lean_ctor_set(v___x_1841_, 1, v___f_1839_);
lean_ctor_set(v___x_1841_, 2, v___f_1838_);
return v___x_1841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; 
v___x_1843_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_);
v___x_1844_ = l_Lean_registerBuiltinAttribute(v___x_1843_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2____boxed(lean_object* v_a_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_();
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_1847_, lean_object* v_msg_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_){
_start:
{
lean_object* v___x_1852_; 
v___x_1852_ = l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0___redArg(v_msg_1848_, v___y_1849_, v___y_1850_);
return v___x_1852_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_1853_, lean_object* v_msg_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_){
_start:
{
lean_object* v_res_1858_; 
v_res_1858_ = l_Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2__spec__0(v_00_u03b1_1853_, v_msg_1854_, v___y_1855_, v___y_1856_);
lean_dec(v___y_1856_);
lean_dec_ref(v___y_1855_);
return v_res_1858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_getRecordedHints(lean_object* v_a_1859_, lean_object* v_a_1860_){
_start:
{
lean_object* v___x_1862_; lean_object* v_ext_1863_; lean_object* v_toEnvExtension_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1862_ = l_Lean_Meta_unificationHintExtension;
v_ext_1863_ = lean_ctor_get(v___x_1862_, 1);
v_toEnvExtension_1864_ = lean_ctor_get(v_ext_1863_, 0);
v___x_1865_ = lean_obj_once(&l_Lean_Meta_instInhabitedUnificationHints_default___closed__0, &l_Lean_Meta_instInhabitedUnificationHints_default___closed__0_once, _init_l_Lean_Meta_instInhabitedUnificationHints_default___closed__0);
lean_inc_ref(v_toEnvExtension_1864_);
v___x_1866_ = l_Lean_recordExtGenAccess___redArg(v_toEnvExtension_1864_, v_a_1859_, v_a_1860_);
if (lean_obj_tag(v___x_1866_) == 0)
{
lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1878_; 
v_isSharedCheck_1878_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1878_ == 0)
{
lean_object* v_unused_1879_; 
v_unused_1879_ = lean_ctor_get(v___x_1866_, 0);
lean_dec(v_unused_1879_);
v___x_1868_ = v___x_1866_;
v_isShared_1869_ = v_isSharedCheck_1878_;
goto v_resetjp_1867_;
}
else
{
lean_dec(v___x_1866_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1878_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1870_; lean_object* v_env_1871_; lean_object* v_asyncMode_1872_; uint8_t v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1876_; 
v___x_1870_ = lean_st_ref_get(v_a_1860_);
v_env_1871_ = lean_ctor_get(v___x_1870_, 0);
lean_inc_ref(v_env_1871_);
lean_dec(v___x_1870_);
v_asyncMode_1872_ = lean_ctor_get(v_toEnvExtension_1864_, 2);
v___x_1873_ = 1;
v___x_1874_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1865_, v___x_1862_, v_env_1871_, v_asyncMode_1872_, v___x_1873_);
if (v_isShared_1869_ == 0)
{
lean_ctor_set(v___x_1868_, 0, v___x_1874_);
v___x_1876_ = v___x_1868_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v___x_1874_);
v___x_1876_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
return v___x_1876_;
}
}
}
else
{
lean_object* v_a_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1887_; 
v_a_1880_ = lean_ctor_get(v___x_1866_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1882_ = v___x_1866_;
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_a_1880_);
lean_dec(v___x_1866_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1885_; 
if (v_isShared_1883_ == 0)
{
v___x_1885_ = v___x_1882_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_a_1880_);
v___x_1885_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
return v___x_1885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_getRecordedHints___boxed(lean_object* v_a_1888_, lean_object* v_a_1889_, lean_object* v_a_1890_){
_start:
{
lean_object* v_res_1891_; 
v_res_1891_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_getRecordedHints(v_a_1888_, v_a_1889_);
lean_dec(v_a_1889_);
lean_dec_ref(v_a_1888_);
return v_res_1891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_isDefEqPattern(lean_object* v_p_1892_, lean_object* v_e_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_){
_start:
{
lean_object* v___y_1900_; lean_object* v___x_1917_; uint8_t v_transparency_1918_; uint8_t v___x_1919_; uint8_t v___x_1920_; 
v___x_1917_ = l_Lean_Meta_Context_config(v_a_1894_);
v_transparency_1918_ = lean_ctor_get_uint8(v___x_1917_, 9);
lean_dec_ref(v___x_1917_);
v___x_1919_ = 2;
v___x_1920_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1918_, v___x_1919_);
if (v___x_1920_ == 0)
{
lean_object* v_keyedConfig_1921_; uint8_t v_trackZetaDelta_1922_; lean_object* v_zetaDeltaSet_1923_; lean_object* v_lctx_1924_; lean_object* v_localInstances_1925_; lean_object* v_defEqCtx_x3f_1926_; lean_object* v_synthPendingDepth_1927_; lean_object* v_customCanUnfoldPredicate_x3f_1928_; uint8_t v_univApprox_1929_; uint8_t v_inTypeClassResolution_1930_; uint8_t v_cacheInferType_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
v_keyedConfig_1921_ = lean_ctor_get(v_a_1894_, 0);
v_trackZetaDelta_1922_ = lean_ctor_get_uint8(v_a_1894_, sizeof(void*)*7);
v_zetaDeltaSet_1923_ = lean_ctor_get(v_a_1894_, 1);
v_lctx_1924_ = lean_ctor_get(v_a_1894_, 2);
v_localInstances_1925_ = lean_ctor_get(v_a_1894_, 3);
v_defEqCtx_x3f_1926_ = lean_ctor_get(v_a_1894_, 4);
v_synthPendingDepth_1927_ = lean_ctor_get(v_a_1894_, 5);
v_customCanUnfoldPredicate_x3f_1928_ = lean_ctor_get(v_a_1894_, 6);
v_univApprox_1929_ = lean_ctor_get_uint8(v_a_1894_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1930_ = lean_ctor_get_uint8(v_a_1894_, sizeof(void*)*7 + 2);
v_cacheInferType_1931_ = lean_ctor_get_uint8(v_a_1894_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1921_);
v___x_1932_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1919_, v_keyedConfig_1921_);
lean_inc(v_customCanUnfoldPredicate_x3f_1928_);
lean_inc(v_synthPendingDepth_1927_);
lean_inc(v_defEqCtx_x3f_1926_);
lean_inc_ref(v_localInstances_1925_);
lean_inc_ref(v_lctx_1924_);
lean_inc(v_zetaDeltaSet_1923_);
v___x_1933_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1933_, 0, v___x_1932_);
lean_ctor_set(v___x_1933_, 1, v_zetaDeltaSet_1923_);
lean_ctor_set(v___x_1933_, 2, v_lctx_1924_);
lean_ctor_set(v___x_1933_, 3, v_localInstances_1925_);
lean_ctor_set(v___x_1933_, 4, v_defEqCtx_x3f_1926_);
lean_ctor_set(v___x_1933_, 5, v_synthPendingDepth_1927_);
lean_ctor_set(v___x_1933_, 6, v_customCanUnfoldPredicate_x3f_1928_);
lean_ctor_set_uint8(v___x_1933_, sizeof(void*)*7, v_trackZetaDelta_1922_);
lean_ctor_set_uint8(v___x_1933_, sizeof(void*)*7 + 1, v_univApprox_1929_);
lean_ctor_set_uint8(v___x_1933_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1930_);
lean_ctor_set_uint8(v___x_1933_, sizeof(void*)*7 + 3, v_cacheInferType_1931_);
lean_inc(v_a_1897_);
lean_inc_ref(v_a_1896_);
lean_inc(v_a_1895_);
v___x_1934_ = lean_is_expr_def_eq(v_p_1892_, v_e_1893_, v___x_1933_, v_a_1895_, v_a_1896_, v_a_1897_);
v___y_1900_ = v___x_1934_;
goto v___jp_1899_;
}
else
{
lean_object* v___x_1935_; 
lean_inc(v_a_1897_);
lean_inc_ref(v_a_1896_);
lean_inc(v_a_1895_);
lean_inc_ref(v_a_1894_);
v___x_1935_ = lean_is_expr_def_eq(v_p_1892_, v_e_1893_, v_a_1894_, v_a_1895_, v_a_1896_, v_a_1897_);
v___y_1900_ = v___x_1935_;
goto v___jp_1899_;
}
v___jp_1899_:
{
if (lean_obj_tag(v___y_1900_) == 0)
{
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
v_a_1901_ = lean_ctor_get(v___y_1900_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___y_1900_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___y_1900_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___y_1900_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1906_; 
if (v_isShared_1904_ == 0)
{
v___x_1906_ = v___x_1903_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_a_1901_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
else
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1916_; 
v_a_1909_ = lean_ctor_get(v___y_1900_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___y_1900_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1911_ = v___y_1900_;
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___y_1900_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1914_; 
if (v_isShared_1912_ == 0)
{
v___x_1914_ = v___x_1911_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_a_1909_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_isDefEqPattern___boxed(lean_object* v_p_1936_, lean_object* v_e_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_, lean_object* v_a_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_){
_start:
{
lean_object* v_res_1943_; 
v_res_1943_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_isDefEqPattern(v_p_1936_, v_e_1937_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_);
lean_dec(v_a_1941_);
lean_dec_ref(v_a_1940_);
lean_dec(v_a_1939_);
lean_dec_ref(v_a_1938_);
return v_res_1943_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__0(lean_object* v_x_1944_, lean_object* v_x_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_){
_start:
{
if (lean_obj_tag(v_x_1944_) == 0)
{
lean_object* v___x_1951_; lean_object* v___x_1952_; 
v___x_1951_ = l_List_reverse___redArg(v_x_1945_);
v___x_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1951_);
return v___x_1952_;
}
else
{
lean_object* v_tail_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1971_; 
v_tail_1953_ = lean_ctor_get(v_x_1944_, 1);
v_isSharedCheck_1971_ = !lean_is_exclusive(v_x_1944_);
if (v_isSharedCheck_1971_ == 0)
{
lean_object* v_unused_1972_; 
v_unused_1972_ = lean_ctor_get(v_x_1944_, 0);
lean_dec(v_unused_1972_);
v___x_1955_ = v_x_1944_;
v_isShared_1956_ = v_isSharedCheck_1971_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_tail_1953_);
lean_dec(v_x_1944_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1971_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1957_; 
v___x_1957_ = l_Lean_Meta_mkFreshLevelMVar(v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; lean_object* v___x_1960_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
lean_inc(v_a_1958_);
lean_dec_ref_known(v___x_1957_, 1);
if (v_isShared_1956_ == 0)
{
lean_ctor_set(v___x_1955_, 1, v_x_1945_);
lean_ctor_set(v___x_1955_, 0, v_a_1958_);
v___x_1960_ = v___x_1955_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v_a_1958_);
lean_ctor_set(v_reuseFailAlloc_1962_, 1, v_x_1945_);
v___x_1960_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
v_x_1944_ = v_tail_1953_;
v_x_1945_ = v___x_1960_;
goto _start;
}
}
else
{
lean_object* v_a_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1970_; 
lean_del_object(v___x_1955_);
lean_dec(v_tail_1953_);
lean_dec(v_x_1945_);
v_a_1963_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1965_ = v___x_1957_;
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_a_1963_);
lean_dec(v___x_1957_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1968_; 
if (v_isShared_1966_ == 0)
{
v___x_1968_ = v___x_1965_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_a_1963_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__0___boxed(lean_object* v_x_1973_, lean_object* v_x_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l_List_mapM_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__0(v_x_1973_, v_x_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
lean_dec(v___y_1978_);
lean_dec_ref(v___y_1977_);
lean_dec(v___y_1976_);
lean_dec_ref(v___y_1975_);
return v_res_1980_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1981_; double v___x_1982_; 
v___x_1981_ = lean_unsigned_to_nat(0u);
v___x_1982_ = lean_float_of_nat(v___x_1981_);
return v___x_1982_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3(lean_object* v_cls_1986_, lean_object* v_msg_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_){
_start:
{
lean_object* v_ref_1993_; lean_object* v___x_1994_; lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2040_; 
v_ref_1993_ = lean_ctor_get(v___y_1990_, 2);
v___x_1994_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0_spec__0(v_msg_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_);
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
v_isSharedCheck_2040_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_1997_ = v___x_1994_;
v_isShared_1998_ = v_isSharedCheck_2040_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v___x_1994_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2040_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_1999_; lean_object* v_traceState_2000_; lean_object* v_env_2001_; lean_object* v_nextMacroScope_2002_; lean_object* v_ngen_2003_; lean_object* v_auxDeclNGen_2004_; lean_object* v_cache_2005_; lean_object* v_recordedDeps_2006_; lean_object* v_messages_2007_; lean_object* v_infoState_2008_; lean_object* v_snapshotTasks_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2039_; 
v___x_1999_ = lean_st_ref_take(v___y_1991_);
v_traceState_2000_ = lean_ctor_get(v___x_1999_, 4);
v_env_2001_ = lean_ctor_get(v___x_1999_, 0);
v_nextMacroScope_2002_ = lean_ctor_get(v___x_1999_, 1);
v_ngen_2003_ = lean_ctor_get(v___x_1999_, 2);
v_auxDeclNGen_2004_ = lean_ctor_get(v___x_1999_, 3);
v_cache_2005_ = lean_ctor_get(v___x_1999_, 5);
v_recordedDeps_2006_ = lean_ctor_get(v___x_1999_, 6);
v_messages_2007_ = lean_ctor_get(v___x_1999_, 7);
v_infoState_2008_ = lean_ctor_get(v___x_1999_, 8);
v_snapshotTasks_2009_ = lean_ctor_get(v___x_1999_, 9);
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2011_ = v___x_1999_;
v_isShared_2012_ = v_isSharedCheck_2039_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_snapshotTasks_2009_);
lean_inc(v_infoState_2008_);
lean_inc(v_messages_2007_);
lean_inc(v_recordedDeps_2006_);
lean_inc(v_cache_2005_);
lean_inc(v_traceState_2000_);
lean_inc(v_auxDeclNGen_2004_);
lean_inc(v_ngen_2003_);
lean_inc(v_nextMacroScope_2002_);
lean_inc(v_env_2001_);
lean_dec(v___x_1999_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2039_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
uint64_t v_tid_2013_; lean_object* v_traces_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2038_; 
v_tid_2013_ = lean_ctor_get_uint64(v_traceState_2000_, sizeof(void*)*1);
v_traces_2014_ = lean_ctor_get(v_traceState_2000_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v_traceState_2000_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2016_ = v_traceState_2000_;
v_isShared_2017_ = v_isSharedCheck_2038_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_traces_2014_);
lean_dec(v_traceState_2000_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2038_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2018_; lean_object* v___x_2019_; double v___x_2020_; uint8_t v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2029_; 
v___x_2018_ = lean_box(0);
v___x_2019_ = lean_box(0);
v___x_2020_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__0);
v___x_2021_ = 0;
v___x_2022_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__1));
v___x_2023_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2023_, 0, v_cls_1986_);
lean_ctor_set(v___x_2023_, 1, v___x_2019_);
lean_ctor_set(v___x_2023_, 2, v___x_2022_);
lean_ctor_set_float(v___x_2023_, sizeof(void*)*3, v___x_2020_);
lean_ctor_set_float(v___x_2023_, sizeof(void*)*3 + 8, v___x_2020_);
lean_ctor_set_uint8(v___x_2023_, sizeof(void*)*3 + 16, v___x_2021_);
v___x_2024_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__2));
v___x_2025_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2023_);
lean_ctor_set(v___x_2025_, 1, v_a_1995_);
lean_ctor_set(v___x_2025_, 2, v___x_2024_);
lean_inc(v_ref_1993_);
v___x_2026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2026_, 0, v_ref_1993_);
lean_ctor_set(v___x_2026_, 1, v___x_2025_);
v___x_2027_ = l_Lean_PersistentArray_push___redArg(v_traces_2014_, v___x_2026_);
if (v_isShared_2017_ == 0)
{
lean_ctor_set(v___x_2016_, 0, v___x_2027_);
v___x_2029_ = v___x_2016_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v___x_2027_);
lean_ctor_set_uint64(v_reuseFailAlloc_2037_, sizeof(void*)*1, v_tid_2013_);
v___x_2029_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
lean_object* v___x_2031_; 
if (v_isShared_2012_ == 0)
{
lean_ctor_set(v___x_2011_, 4, v___x_2029_);
v___x_2031_ = v___x_2011_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_env_2001_);
lean_ctor_set(v_reuseFailAlloc_2036_, 1, v_nextMacroScope_2002_);
lean_ctor_set(v_reuseFailAlloc_2036_, 2, v_ngen_2003_);
lean_ctor_set(v_reuseFailAlloc_2036_, 3, v_auxDeclNGen_2004_);
lean_ctor_set(v_reuseFailAlloc_2036_, 4, v___x_2029_);
lean_ctor_set(v_reuseFailAlloc_2036_, 5, v_cache_2005_);
lean_ctor_set(v_reuseFailAlloc_2036_, 6, v_recordedDeps_2006_);
lean_ctor_set(v_reuseFailAlloc_2036_, 7, v_messages_2007_);
lean_ctor_set(v_reuseFailAlloc_2036_, 8, v_infoState_2008_);
lean_ctor_set(v_reuseFailAlloc_2036_, 9, v_snapshotTasks_2009_);
v___x_2031_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
lean_object* v___x_2032_; lean_object* v___x_2034_; 
v___x_2032_ = lean_st_ref_put(v___y_1991_, v___x_2031_);
if (v_isShared_1998_ == 0)
{
lean_ctor_set(v___x_1997_, 0, v___x_2018_);
v___x_2034_ = v___x_1997_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v___x_2018_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___boxed(lean_object* v_cls_2041_, lean_object* v_msg_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_){
_start:
{
lean_object* v_res_2048_; 
v_res_2048_ = l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3(v_cls_2041_, v_msg_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_);
lean_dec(v___y_2046_);
lean_dec_ref(v___y_2045_);
lean_dec(v___y_2044_);
lean_dec_ref(v___y_2043_);
return v_res_2048_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__2(lean_object* v_as_2052_, size_t v_sz_2053_, size_t v_i_2054_, lean_object* v_b_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_){
_start:
{
lean_object* v_a_2062_; uint8_t v___x_2066_; 
v___x_2066_ = lean_usize_dec_lt(v_i_2054_, v_sz_2053_);
if (v___x_2066_ == 0)
{
lean_object* v___x_2067_; 
v___x_2067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2067_, 0, v_b_2055_);
return v___x_2067_;
}
else
{
lean_object* v_snd_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2158_; 
v_snd_2068_ = lean_ctor_get(v_b_2055_, 1);
v_isSharedCheck_2158_ = !lean_is_exclusive(v_b_2055_);
if (v_isSharedCheck_2158_ == 0)
{
lean_object* v_unused_2159_; 
v_unused_2159_ = lean_ctor_get(v_b_2055_, 0);
lean_dec(v_unused_2159_);
v___x_2070_ = v_b_2055_;
v_isShared_2071_ = v_isSharedCheck_2158_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_snd_2068_);
lean_dec(v_b_2055_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2158_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v_array_2072_; lean_object* v_start_2073_; lean_object* v_stop_2074_; lean_object* v___x_2075_; uint8_t v___x_2076_; 
v_array_2072_ = lean_ctor_get(v_snd_2068_, 0);
v_start_2073_ = lean_ctor_get(v_snd_2068_, 1);
v_stop_2074_ = lean_ctor_get(v_snd_2068_, 2);
v___x_2075_ = lean_box(0);
v___x_2076_ = lean_nat_dec_lt(v_start_2073_, v_stop_2074_);
if (v___x_2076_ == 0)
{
lean_object* v___x_2078_; 
if (v_isShared_2071_ == 0)
{
lean_ctor_set(v___x_2070_, 0, v___x_2075_);
v___x_2078_ = v___x_2070_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v___x_2075_);
lean_ctor_set(v_reuseFailAlloc_2080_, 1, v_snd_2068_);
v___x_2078_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
lean_object* v___x_2079_; 
v___x_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2078_);
return v___x_2079_;
}
}
else
{
lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2154_; 
lean_inc(v_stop_2074_);
lean_inc(v_start_2073_);
lean_inc_ref(v_array_2072_);
v_isSharedCheck_2154_ = !lean_is_exclusive(v_snd_2068_);
if (v_isSharedCheck_2154_ == 0)
{
lean_object* v_unused_2155_; lean_object* v_unused_2156_; lean_object* v_unused_2157_; 
v_unused_2155_ = lean_ctor_get(v_snd_2068_, 2);
lean_dec(v_unused_2155_);
v_unused_2156_ = lean_ctor_get(v_snd_2068_, 1);
lean_dec(v_unused_2156_);
v_unused_2157_ = lean_ctor_get(v_snd_2068_, 0);
lean_dec(v_unused_2157_);
v___x_2082_ = v_snd_2068_;
v_isShared_2083_ = v_isSharedCheck_2154_;
goto v_resetjp_2081_;
}
else
{
lean_dec(v_snd_2068_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2154_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2088_; 
v___x_2084_ = lean_array_fget(v_array_2072_, v_start_2073_);
v___x_2085_ = lean_unsigned_to_nat(1u);
v___x_2086_ = lean_nat_add(v_start_2073_, v___x_2085_);
lean_dec(v_start_2073_);
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 1, v___x_2086_);
v___x_2088_ = v___x_2082_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_array_2072_);
lean_ctor_set(v_reuseFailAlloc_2153_, 1, v___x_2086_);
lean_ctor_set(v_reuseFailAlloc_2153_, 2, v_stop_2074_);
v___x_2088_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
uint8_t v___x_2089_; uint8_t v___x_2090_; uint8_t v___x_2091_; 
v___x_2089_ = 3;
v___x_2090_ = lean_unbox(v___x_2084_);
lean_dec(v___x_2084_);
v___x_2091_ = l_Lean_instBEqBinderInfo_beq(v___x_2090_, v___x_2089_);
if (v___x_2091_ == 0)
{
lean_object* v___x_2093_; 
if (v_isShared_2071_ == 0)
{
lean_ctor_set(v___x_2070_, 1, v___x_2088_);
lean_ctor_set(v___x_2070_, 0, v___x_2075_);
v___x_2093_ = v___x_2070_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v___x_2075_);
lean_ctor_set(v_reuseFailAlloc_2094_, 1, v___x_2088_);
v___x_2093_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
v_a_2062_ = v___x_2093_;
goto v___jp_2061_;
}
}
else
{
lean_object* v_a_2095_; lean_object* v___x_2096_; 
v_a_2095_ = lean_array_uget_borrowed(v_as_2052_, v_i_2054_);
lean_inc(v___y_2059_);
lean_inc_ref(v___y_2058_);
lean_inc(v___y_2057_);
lean_inc_ref(v___y_2056_);
lean_inc(v_a_2095_);
v___x_2096_ = lean_infer_type(v_a_2095_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_);
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v_a_2097_; lean_object* v___x_2098_; 
v_a_2097_ = lean_ctor_get(v___x_2096_, 0);
lean_inc(v_a_2097_);
lean_dec_ref_known(v___x_2096_, 1);
v___x_2098_ = l_Lean_Meta_trySynthInstance(v_a_2097_, v___x_2075_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_);
if (lean_obj_tag(v___x_2098_) == 0)
{
lean_object* v_a_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2136_; 
v_a_2099_ = lean_ctor_get(v___x_2098_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2098_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2101_ = v___x_2098_;
v_isShared_2102_ = v_isSharedCheck_2136_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_a_2099_);
lean_dec(v___x_2098_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2136_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
if (lean_obj_tag(v_a_2099_) == 1)
{
lean_object* v_a_2103_; lean_object* v___x_2104_; 
lean_del_object(v___x_2101_);
v_a_2103_ = lean_ctor_get(v_a_2099_, 0);
lean_inc(v_a_2103_);
lean_dec_ref_known(v_a_2099_, 1);
lean_inc(v_a_2095_);
v___x_2104_ = l_Lean_Meta_isExprDefEq(v_a_2095_, v_a_2103_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_);
if (lean_obj_tag(v___x_2104_) == 0)
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2120_; 
v_a_2105_ = lean_ctor_get(v___x_2104_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v___x_2104_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2107_ = v___x_2104_;
v_isShared_2108_ = v_isSharedCheck_2120_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_2104_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2120_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
uint8_t v___x_2109_; 
v___x_2109_ = lean_unbox(v_a_2105_);
lean_dec(v_a_2105_);
if (v___x_2109_ == 0)
{
lean_object* v___x_2110_; lean_object* v___x_2112_; 
v___x_2110_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__2___closed__0));
if (v_isShared_2071_ == 0)
{
lean_ctor_set(v___x_2070_, 1, v___x_2088_);
lean_ctor_set(v___x_2070_, 0, v___x_2110_);
v___x_2112_ = v___x_2070_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v___x_2110_);
lean_ctor_set(v_reuseFailAlloc_2116_, 1, v___x_2088_);
v___x_2112_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
lean_object* v___x_2114_; 
if (v_isShared_2108_ == 0)
{
lean_ctor_set(v___x_2107_, 0, v___x_2112_);
v___x_2114_ = v___x_2107_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v___x_2112_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
}
else
{
lean_object* v___x_2118_; 
lean_del_object(v___x_2107_);
if (v_isShared_2071_ == 0)
{
lean_ctor_set(v___x_2070_, 1, v___x_2088_);
lean_ctor_set(v___x_2070_, 0, v___x_2075_);
v___x_2118_ = v___x_2070_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v___x_2075_);
lean_ctor_set(v_reuseFailAlloc_2119_, 1, v___x_2088_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
v_a_2062_ = v___x_2118_;
goto v___jp_2061_;
}
}
}
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
lean_dec_ref(v___x_2088_);
lean_del_object(v___x_2070_);
v_a_2121_ = lean_ctor_get(v___x_2104_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2104_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_2104_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2104_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_a_2121_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
else
{
lean_object* v___x_2129_; lean_object* v___x_2131_; 
lean_dec(v_a_2099_);
v___x_2129_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__2___closed__0));
if (v_isShared_2071_ == 0)
{
lean_ctor_set(v___x_2070_, 1, v___x_2088_);
lean_ctor_set(v___x_2070_, 0, v___x_2129_);
v___x_2131_ = v___x_2070_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v___x_2129_);
lean_ctor_set(v_reuseFailAlloc_2135_, 1, v___x_2088_);
v___x_2131_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
lean_object* v___x_2133_; 
if (v_isShared_2102_ == 0)
{
lean_ctor_set(v___x_2101_, 0, v___x_2131_);
v___x_2133_ = v___x_2101_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2131_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
}
}
}
else
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2144_; 
lean_dec_ref(v___x_2088_);
lean_del_object(v___x_2070_);
v_a_2137_ = lean_ctor_get(v___x_2098_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2098_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2139_ = v___x_2098_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2098_);
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
else
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2152_; 
lean_dec_ref(v___x_2088_);
lean_del_object(v___x_2070_);
v_a_2145_ = lean_ctor_get(v___x_2096_, 0);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2096_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2147_ = v___x_2096_;
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2096_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2150_; 
if (v_isShared_2148_ == 0)
{
v___x_2150_ = v___x_2147_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_a_2145_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
}
}
}
}
}
v___jp_2061_:
{
size_t v___x_2063_; size_t v___x_2064_; 
v___x_2063_ = ((size_t)1ULL);
v___x_2064_ = lean_usize_add(v_i_2054_, v___x_2063_);
v_i_2054_ = v___x_2064_;
v_b_2055_ = v_a_2062_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__2___boxed(lean_object* v_as_2160_, lean_object* v_sz_2161_, lean_object* v_i_2162_, lean_object* v_b_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_){
_start:
{
size_t v_sz_boxed_2169_; size_t v_i_boxed_2170_; lean_object* v_res_2171_; 
v_sz_boxed_2169_ = lean_unbox_usize(v_sz_2161_);
lean_dec(v_sz_2161_);
v_i_boxed_2170_ = lean_unbox_usize(v_i_2162_);
lean_dec(v_i_2162_);
v_res_2171_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__2(v_as_2160_, v_sz_boxed_2169_, v_i_boxed_2170_, v_b_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2166_);
lean_dec(v___y_2165_);
lean_dec_ref(v___y_2164_);
lean_dec_ref(v_as_2160_);
return v_res_2171_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg(lean_object* v_as_x27_2178_, lean_object* v_b_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_){
_start:
{
if (lean_obj_tag(v_as_x27_2178_) == 0)
{
lean_object* v___x_2185_; 
v___x_2185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2185_, 0, v_b_2179_);
return v___x_2185_;
}
else
{
lean_object* v_head_2186_; lean_object* v_tail_2187_; lean_object* v_lhs_2188_; lean_object* v_rhs_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; 
lean_dec_ref(v_b_2179_);
v_head_2186_ = lean_ctor_get(v_as_x27_2178_, 0);
v_tail_2187_ = lean_ctor_get(v_as_x27_2178_, 1);
v_lhs_2188_ = lean_ctor_get(v_head_2186_, 0);
v_rhs_2189_ = lean_ctor_get(v_head_2186_, 1);
v___x_2190_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg___closed__0));
lean_inc(v___y_2183_);
lean_inc_ref(v___y_2182_);
lean_inc(v___y_2181_);
lean_inc_ref(v___y_2180_);
lean_inc_ref(v_rhs_2189_);
lean_inc_ref(v_lhs_2188_);
v___x_2191_ = lean_is_expr_def_eq(v_lhs_2188_, v_rhs_2189_, v___y_2180_, v___y_2181_, v___y_2182_, v___y_2183_);
if (lean_obj_tag(v___x_2191_) == 0)
{
lean_object* v_a_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2202_; 
v_a_2192_ = lean_ctor_get(v___x_2191_, 0);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2194_ = v___x_2191_;
v_isShared_2195_ = v_isSharedCheck_2202_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_a_2192_);
lean_dec(v___x_2191_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2202_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
uint8_t v___x_2196_; 
v___x_2196_ = lean_unbox(v_a_2192_);
lean_dec(v_a_2192_);
if (v___x_2196_ == 0)
{
lean_object* v___x_2197_; lean_object* v___x_2199_; 
v___x_2197_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg___closed__1));
if (v_isShared_2195_ == 0)
{
lean_ctor_set(v___x_2194_, 0, v___x_2197_);
v___x_2199_ = v___x_2194_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v___x_2197_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
else
{
lean_del_object(v___x_2194_);
v_as_x27_2178_ = v_tail_2187_;
v_b_2179_ = v___x_2190_;
goto _start;
}
}
}
else
{
lean_object* v_a_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2210_; 
v_a_2203_ = lean_ctor_get(v___x_2191_, 0);
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2205_ = v___x_2191_;
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_a_2203_);
lean_dec(v___x_2191_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2208_; 
if (v_isShared_2206_ == 0)
{
v___x_2208_ = v___x_2205_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_a_2203_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg___boxed(lean_object* v_as_x27_2211_, lean_object* v_b_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg(v_as_x27_2211_, v_b_2212_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_);
lean_dec(v___y_2216_);
lean_dec_ref(v___y_2215_);
lean_dec(v___y_2214_);
lean_dec_ref(v___y_2213_);
lean_dec(v_as_x27_2211_);
return v_res_2218_;
}
}
static lean_object* _init_l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__3(void){
_start:
{
lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2225_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addUnificationHint_spec__1_spec__2_spec__5___redArg___closed__0);
v___x_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2225_);
return v___x_2226_;
}
}
static lean_object* _init_l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__7(void){
_start:
{
lean_object* v_cls_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; 
v_cls_2233_ = ((lean_object*)(l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__2));
v___x_2234_ = ((lean_object*)(l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__6));
v___x_2235_ = l_Lean_Name_append(v___x_2234_, v_cls_2233_);
return v___x_2235_;
}
}
static lean_object* _init_l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__9(void){
_start:
{
lean_object* v___x_2237_; lean_object* v___x_2238_; 
v___x_2237_ = ((lean_object*)(l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__8));
v___x_2238_ = l_Lean_stringToMessageData(v___x_2237_);
return v___x_2238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4(lean_object* v_candidate_2239_, lean_object* v_t_2240_, lean_object* v_s_2241_, uint8_t v_mayPostpone_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_){
_start:
{
lean_object* v_cls_2248_; lean_object* v___x_2249_; 
v_cls_2248_ = ((lean_object*)(l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__2));
v___x_2249_ = l_Lean_Meta_saveState___redArg(v_a_2244_, v_a_2246_);
if (lean_obj_tag(v___x_2249_) == 0)
{
lean_object* v_a_2250_; lean_object* v___x_2252_; uint8_t v_isShared_2253_; uint8_t v_isSharedCheck_2499_; 
v_a_2250_ = lean_ctor_get(v___x_2249_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2249_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2252_ = v___x_2249_;
v_isShared_2253_ = v_isSharedCheck_2499_;
goto v_resetjp_2251_;
}
else
{
lean_inc(v_a_2250_);
lean_dec(v___x_2249_);
v___x_2252_ = lean_box(0);
v_isShared_2253_ = v_isSharedCheck_2499_;
goto v_resetjp_2251_;
}
v_resetjp_2251_:
{
lean_object* v_a_2255_; uint8_t v_a_2282_; lean_object* v___x_2294_; lean_object* v_cache_2295_; lean_object* v_mctx_2296_; lean_object* v_zetaDeltaFVarIds_2297_; lean_object* v_postponed_2298_; lean_object* v_diag_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2498_; 
v___x_2294_ = lean_st_ref_take(v_a_2244_);
v_cache_2295_ = lean_ctor_get(v___x_2294_, 1);
v_mctx_2296_ = lean_ctor_get(v___x_2294_, 0);
v_zetaDeltaFVarIds_2297_ = lean_ctor_get(v___x_2294_, 2);
v_postponed_2298_ = lean_ctor_get(v___x_2294_, 3);
v_diag_2299_ = lean_ctor_get(v___x_2294_, 4);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2301_ = v___x_2294_;
v_isShared_2302_ = v_isSharedCheck_2498_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_diag_2299_);
lean_inc(v_postponed_2298_);
lean_inc(v_zetaDeltaFVarIds_2297_);
lean_inc(v_cache_2295_);
lean_inc(v_mctx_2296_);
lean_dec(v___x_2294_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2498_;
goto v_resetjp_2300_;
}
v___jp_2254_:
{
uint8_t v___x_2256_; 
v___x_2256_ = l_Lean_Exception_isInterrupt(v_a_2255_);
if (v___x_2256_ == 0)
{
uint8_t v___x_2257_; 
lean_inc_ref(v_a_2255_);
v___x_2257_ = l_Lean_Exception_isRuntime(v_a_2255_);
if (v___x_2257_ == 0)
{
lean_object* v___x_2258_; 
lean_del_object(v___x_2252_);
v___x_2258_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2250_, v_a_2244_, v_a_2246_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2265_; 
v_isSharedCheck_2265_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2265_ == 0)
{
lean_object* v_unused_2266_; 
v_unused_2266_ = lean_ctor_get(v___x_2258_, 0);
lean_dec(v_unused_2266_);
v___x_2260_ = v___x_2258_;
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
else
{
lean_dec(v___x_2258_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2263_; 
if (v_isShared_2261_ == 0)
{
lean_ctor_set_tag(v___x_2260_, 1);
lean_ctor_set(v___x_2260_, 0, v_a_2255_);
v___x_2263_ = v___x_2260_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v_a_2255_);
v___x_2263_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
return v___x_2263_;
}
}
}
else
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2274_; 
lean_dec_ref(v_a_2255_);
v_a_2267_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2269_ = v___x_2258_;
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2258_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2272_; 
if (v_isShared_2270_ == 0)
{
v___x_2272_ = v___x_2269_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_a_2267_);
v___x_2272_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
return v___x_2272_;
}
}
}
}
else
{
lean_object* v___x_2276_; 
lean_dec(v_a_2250_);
if (v_isShared_2253_ == 0)
{
lean_ctor_set_tag(v___x_2252_, 1);
lean_ctor_set(v___x_2252_, 0, v_a_2255_);
v___x_2276_ = v___x_2252_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_a_2255_);
v___x_2276_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
return v___x_2276_;
}
}
}
else
{
lean_object* v___x_2279_; 
lean_dec(v_a_2250_);
if (v_isShared_2253_ == 0)
{
lean_ctor_set_tag(v___x_2252_, 1);
lean_ctor_set(v___x_2252_, 0, v_a_2255_);
v___x_2279_ = v___x_2252_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v_a_2255_);
v___x_2279_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
return v___x_2279_;
}
}
}
v___jp_2281_:
{
lean_object* v___x_2283_; 
lean_inc(v_a_2250_);
v___x_2283_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2250_, v_a_2244_, v_a_2246_);
if (lean_obj_tag(v___x_2283_) == 0)
{
lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2291_; 
lean_del_object(v___x_2252_);
lean_dec(v_a_2250_);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2291_ == 0)
{
lean_object* v_unused_2292_; 
v_unused_2292_ = lean_ctor_get(v___x_2283_, 0);
lean_dec(v_unused_2292_);
v___x_2285_ = v___x_2283_;
v_isShared_2286_ = v_isSharedCheck_2291_;
goto v_resetjp_2284_;
}
else
{
lean_dec(v___x_2283_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2291_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2287_; lean_object* v___x_2289_; 
v___x_2287_ = lean_box(v_a_2282_);
if (v_isShared_2286_ == 0)
{
lean_ctor_set(v___x_2285_, 0, v___x_2287_);
v___x_2289_ = v___x_2285_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v___x_2287_);
v___x_2289_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
return v___x_2289_;
}
}
}
else
{
lean_object* v_a_2293_; 
v_a_2293_ = lean_ctor_get(v___x_2283_, 0);
lean_inc(v_a_2293_);
lean_dec_ref_known(v___x_2283_, 1);
v_a_2255_ = v_a_2293_;
goto v___jp_2254_;
}
}
v_resetjp_2300_:
{
lean_object* v_inferType_2303_; lean_object* v_funInfo_2304_; lean_object* v_synthInstance_2305_; lean_object* v_whnf_2306_; lean_object* v_defEqPerm_2307_; lean_object* v_isUnitLike_2308_; lean_object* v_unfold_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2496_; 
v_inferType_2303_ = lean_ctor_get(v_cache_2295_, 0);
v_funInfo_2304_ = lean_ctor_get(v_cache_2295_, 1);
v_synthInstance_2305_ = lean_ctor_get(v_cache_2295_, 2);
v_whnf_2306_ = lean_ctor_get(v_cache_2295_, 3);
v_defEqPerm_2307_ = lean_ctor_get(v_cache_2295_, 5);
v_isUnitLike_2308_ = lean_ctor_get(v_cache_2295_, 6);
v_unfold_2309_ = lean_ctor_get(v_cache_2295_, 7);
v_isSharedCheck_2496_ = !lean_is_exclusive(v_cache_2295_);
if (v_isSharedCheck_2496_ == 0)
{
lean_object* v_unused_2497_; 
v_unused_2497_ = lean_ctor_get(v_cache_2295_, 4);
lean_dec(v_unused_2497_);
v___x_2311_ = v_cache_2295_;
v_isShared_2312_ = v_isSharedCheck_2496_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_unfold_2309_);
lean_inc(v_isUnitLike_2308_);
lean_inc(v_defEqPerm_2307_);
lean_inc(v_whnf_2306_);
lean_inc(v_synthInstance_2305_);
lean_inc(v_funInfo_2304_);
lean_inc(v_inferType_2303_);
lean_dec(v_cache_2295_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2496_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v___x_2313_; lean_object* v___x_2315_; 
v___x_2313_ = lean_obj_once(&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__3, &l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__3_once, _init_l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__3);
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 4, v___x_2313_);
v___x_2315_ = v___x_2311_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v_inferType_2303_);
lean_ctor_set(v_reuseFailAlloc_2495_, 1, v_funInfo_2304_);
lean_ctor_set(v_reuseFailAlloc_2495_, 2, v_synthInstance_2305_);
lean_ctor_set(v_reuseFailAlloc_2495_, 3, v_whnf_2306_);
lean_ctor_set(v_reuseFailAlloc_2495_, 4, v___x_2313_);
lean_ctor_set(v_reuseFailAlloc_2495_, 5, v_defEqPerm_2307_);
lean_ctor_set(v_reuseFailAlloc_2495_, 6, v_isUnitLike_2308_);
lean_ctor_set(v_reuseFailAlloc_2495_, 7, v_unfold_2309_);
v___x_2315_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
lean_object* v___x_2317_; 
if (v_isShared_2302_ == 0)
{
lean_ctor_set(v___x_2301_, 1, v___x_2315_);
v___x_2317_ = v___x_2301_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v_mctx_2296_);
lean_ctor_set(v_reuseFailAlloc_2494_, 1, v___x_2315_);
lean_ctor_set(v_reuseFailAlloc_2494_, 2, v_zetaDeltaFVarIds_2297_);
lean_ctor_set(v_reuseFailAlloc_2494_, 3, v_postponed_2298_);
lean_ctor_set(v_reuseFailAlloc_2494_, 4, v_diag_2299_);
v___x_2317_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2318_ = lean_st_ref_put(v_a_2244_, v___x_2317_);
v___x_2319_ = l_Lean_Meta_getResetPostponed___redArg(v_a_2244_);
if (lean_obj_tag(v___x_2319_) == 0)
{
lean_object* v_a_2320_; uint8_t v_a_2363_; lean_object* v___x_2364_; 
v_a_2320_ = lean_ctor_get(v___x_2319_, 0);
lean_inc(v_a_2320_);
lean_dec_ref_known(v___x_2319_, 1);
lean_inc(v_candidate_2239_);
v___x_2364_ = l_Lean_getConstInfo___at___00Lean_Meta_addUnificationHint_spec__0(v_candidate_2239_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2364_) == 0)
{
lean_object* v_a_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
v_a_2365_ = lean_ctor_get(v___x_2364_, 0);
lean_inc(v_a_2365_);
lean_dec_ref_known(v___x_2364_, 1);
v___x_2366_ = l_Lean_ConstantInfo_levelParams(v_a_2365_);
v___x_2367_ = lean_box(0);
v___x_2368_ = l_List_mapM_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__0(v___x_2366_, v___x_2367_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2368_) == 0)
{
lean_object* v_a_2369_; uint8_t v___x_2370_; lean_object* v___x_2371_; 
v_a_2369_ = lean_ctor_get(v___x_2368_, 0);
lean_inc(v_a_2369_);
lean_dec_ref_known(v___x_2368_, 1);
v___x_2370_ = 0;
v___x_2371_ = l_Lean_Core_instantiateValueLevelParams(v_a_2365_, v_a_2369_, v___x_2370_, v_a_2245_, v_a_2246_);
lean_dec(v_a_2365_);
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v_a_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; 
v_a_2372_ = lean_ctor_get(v___x_2371_, 0);
lean_inc(v_a_2372_);
lean_dec_ref_known(v___x_2371_, 1);
v___x_2373_ = lean_box(0);
v___x_2374_ = l_Lean_Meta_lambdaMetaTelescope(v_a_2372_, v___x_2373_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
lean_dec(v_a_2372_);
if (lean_obj_tag(v___x_2374_) == 0)
{
lean_object* v_a_2375_; lean_object* v_snd_2376_; lean_object* v_fst_2377_; lean_object* v_fst_2378_; lean_object* v_snd_2379_; lean_object* v___x_2380_; uint8_t v_foApprox_2381_; uint8_t v_ctxApprox_2382_; uint8_t v_quasiPatternApprox_2383_; uint8_t v_constApprox_2384_; uint8_t v_isDefEqStuckEx_2385_; uint8_t v_proofIrrelevance_2386_; uint8_t v_assignSyntheticOpaque_2387_; uint8_t v_offsetCnstrs_2388_; uint8_t v_transparency_2389_; uint8_t v_etaStruct_2390_; uint8_t v_univApprox_2391_; uint8_t v_iota_2392_; uint8_t v_beta_2393_; uint8_t v_proj_2394_; uint8_t v_zeta_2395_; uint8_t v_zetaDelta_2396_; uint8_t v_zetaUnused_2397_; uint8_t v_zetaHave_2398_; uint8_t v_canUnfoldPredicateConfig_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2481_; 
v_a_2375_ = lean_ctor_get(v___x_2374_, 0);
lean_inc(v_a_2375_);
lean_dec_ref_known(v___x_2374_, 1);
v_snd_2376_ = lean_ctor_get(v_a_2375_, 1);
lean_inc(v_snd_2376_);
v_fst_2377_ = lean_ctor_get(v_a_2375_, 0);
lean_inc(v_fst_2377_);
lean_dec(v_a_2375_);
v_fst_2378_ = lean_ctor_get(v_snd_2376_, 0);
lean_inc(v_fst_2378_);
v_snd_2379_ = lean_ctor_get(v_snd_2376_, 1);
lean_inc(v_snd_2379_);
lean_dec(v_snd_2376_);
v___x_2380_ = l_Lean_Meta_Context_config(v_a_2243_);
v_foApprox_2381_ = lean_ctor_get_uint8(v___x_2380_, 0);
v_ctxApprox_2382_ = lean_ctor_get_uint8(v___x_2380_, 1);
v_quasiPatternApprox_2383_ = lean_ctor_get_uint8(v___x_2380_, 2);
v_constApprox_2384_ = lean_ctor_get_uint8(v___x_2380_, 3);
v_isDefEqStuckEx_2385_ = lean_ctor_get_uint8(v___x_2380_, 4);
v_proofIrrelevance_2386_ = lean_ctor_get_uint8(v___x_2380_, 6);
v_assignSyntheticOpaque_2387_ = lean_ctor_get_uint8(v___x_2380_, 7);
v_offsetCnstrs_2388_ = lean_ctor_get_uint8(v___x_2380_, 8);
v_transparency_2389_ = lean_ctor_get_uint8(v___x_2380_, 9);
v_etaStruct_2390_ = lean_ctor_get_uint8(v___x_2380_, 10);
v_univApprox_2391_ = lean_ctor_get_uint8(v___x_2380_, 11);
v_iota_2392_ = lean_ctor_get_uint8(v___x_2380_, 12);
v_beta_2393_ = lean_ctor_get_uint8(v___x_2380_, 13);
v_proj_2394_ = lean_ctor_get_uint8(v___x_2380_, 14);
v_zeta_2395_ = lean_ctor_get_uint8(v___x_2380_, 15);
v_zetaDelta_2396_ = lean_ctor_get_uint8(v___x_2380_, 16);
v_zetaUnused_2397_ = lean_ctor_get_uint8(v___x_2380_, 17);
v_zetaHave_2398_ = lean_ctor_get_uint8(v___x_2380_, 18);
v_canUnfoldPredicateConfig_2399_ = lean_ctor_get_uint8(v___x_2380_, 19);
v_isSharedCheck_2481_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2481_ == 0)
{
v___x_2401_ = v___x_2380_;
v_isShared_2402_ = v_isSharedCheck_2481_;
goto v_resetjp_2400_;
}
else
{
lean_dec(v___x_2380_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2481_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
lean_object* v___x_2403_; 
v___x_2403_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_decodeUnificationHint(v_snd_2379_);
if (lean_obj_tag(v___x_2403_) == 0)
{
lean_dec_ref_known(v___x_2403_, 1);
lean_del_object(v___x_2401_);
lean_dec(v_fst_2378_);
lean_dec(v_fst_2377_);
lean_dec(v_a_2320_);
lean_dec_ref(v_s_2241_);
lean_dec_ref(v_t_2240_);
lean_dec(v_candidate_2239_);
v_a_2282_ = v___x_2370_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2404_; uint8_t v_trackZetaDelta_2405_; lean_object* v_zetaDeltaSet_2406_; lean_object* v_lctx_2407_; lean_object* v_localInstances_2408_; lean_object* v_defEqCtx_x3f_2409_; lean_object* v_synthPendingDepth_2410_; lean_object* v_customCanUnfoldPredicate_x3f_2411_; uint8_t v_univApprox_2412_; uint8_t v_inTypeClassResolution_2413_; uint8_t v_cacheInferType_2414_; lean_object* v_pattern_2415_; lean_object* v_constraints_2416_; lean_object* v___y_2418_; lean_object* v___y_2419_; lean_object* v___y_2420_; lean_object* v___y_2421_; lean_object* v_lhs_2448_; lean_object* v_rhs_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2480_; 
v_a_2404_ = lean_ctor_get(v___x_2403_, 0);
lean_inc(v_a_2404_);
lean_dec_ref_known(v___x_2403_, 1);
v_trackZetaDelta_2405_ = lean_ctor_get_uint8(v_a_2243_, sizeof(void*)*7);
v_zetaDeltaSet_2406_ = lean_ctor_get(v_a_2243_, 1);
v_lctx_2407_ = lean_ctor_get(v_a_2243_, 2);
v_localInstances_2408_ = lean_ctor_get(v_a_2243_, 3);
v_defEqCtx_x3f_2409_ = lean_ctor_get(v_a_2243_, 4);
v_synthPendingDepth_2410_ = lean_ctor_get(v_a_2243_, 5);
v_customCanUnfoldPredicate_x3f_2411_ = lean_ctor_get(v_a_2243_, 6);
v_univApprox_2412_ = lean_ctor_get_uint8(v_a_2243_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2413_ = lean_ctor_get_uint8(v_a_2243_, sizeof(void*)*7 + 2);
v_cacheInferType_2414_ = lean_ctor_get_uint8(v_a_2243_, sizeof(void*)*7 + 3);
v_pattern_2415_ = lean_ctor_get(v_a_2404_, 0);
lean_inc_ref(v_pattern_2415_);
v_constraints_2416_ = lean_ctor_get(v_a_2404_, 1);
lean_inc(v_constraints_2416_);
lean_dec(v_a_2404_);
v_lhs_2448_ = lean_ctor_get(v_pattern_2415_, 0);
v_rhs_2449_ = lean_ctor_get(v_pattern_2415_, 1);
v_isSharedCheck_2480_ = !lean_is_exclusive(v_pattern_2415_);
if (v_isSharedCheck_2480_ == 0)
{
v___x_2451_ = v_pattern_2415_;
v_isShared_2452_ = v_isSharedCheck_2480_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_rhs_2449_);
lean_inc(v_lhs_2448_);
lean_dec(v_pattern_2415_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2480_;
goto v_resetjp_2450_;
}
v___jp_2417_:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; 
v___x_2422_ = ((lean_object*)(l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__4));
v___x_2423_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg(v_constraints_2416_, v___x_2422_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_);
lean_dec(v_constraints_2416_);
if (lean_obj_tag(v___x_2423_) == 0)
{
lean_object* v_a_2424_; lean_object* v_fst_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2445_; 
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
lean_inc(v_a_2424_);
lean_dec_ref_known(v___x_2423_, 1);
v_fst_2425_ = lean_ctor_get(v_a_2424_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v_a_2424_);
if (v_isSharedCheck_2445_ == 0)
{
lean_object* v_unused_2446_; 
v_unused_2446_ = lean_ctor_get(v_a_2424_, 1);
lean_dec(v_unused_2446_);
v___x_2427_ = v_a_2424_;
v_isShared_2428_ = v_isSharedCheck_2445_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_fst_2425_);
lean_dec(v_a_2424_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2445_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
if (lean_obj_tag(v_fst_2425_) == 0)
{
lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2433_; 
v___x_2429_ = lean_unsigned_to_nat(0u);
v___x_2430_ = lean_array_get_size(v_fst_2378_);
v___x_2431_ = l_Array_toSubarray___redArg(v_fst_2378_, v___x_2429_, v___x_2430_);
if (v_isShared_2428_ == 0)
{
lean_ctor_set(v___x_2427_, 1, v___x_2431_);
lean_ctor_set(v___x_2427_, 0, v___x_2373_);
v___x_2433_ = v___x_2427_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2373_);
lean_ctor_set(v_reuseFailAlloc_2442_, 1, v___x_2431_);
v___x_2433_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
size_t v_sz_2434_; size_t v___x_2435_; lean_object* v___x_2436_; 
v_sz_2434_ = lean_array_size(v_fst_2377_);
v___x_2435_ = ((size_t)0ULL);
v___x_2436_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__2(v_fst_2377_, v_sz_2434_, v___x_2435_, v___x_2433_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_);
lean_dec(v_fst_2377_);
if (lean_obj_tag(v___x_2436_) == 0)
{
lean_object* v_a_2437_; lean_object* v_fst_2438_; 
v_a_2437_ = lean_ctor_get(v___x_2436_, 0);
lean_inc(v_a_2437_);
lean_dec_ref_known(v___x_2436_, 1);
v_fst_2438_ = lean_ctor_get(v_a_2437_, 0);
lean_inc(v_fst_2438_);
lean_dec(v_a_2437_);
if (lean_obj_tag(v_fst_2438_) == 0)
{
goto v___jp_2321_;
}
else
{
lean_object* v_val_2439_; uint8_t v___x_2440_; 
v_val_2439_ = lean_ctor_get(v_fst_2438_, 0);
lean_inc(v_val_2439_);
lean_dec_ref_known(v_fst_2438_, 1);
v___x_2440_ = lean_unbox(v_val_2439_);
lean_dec(v_val_2439_);
v_a_2363_ = v___x_2440_;
goto v___jp_2362_;
}
}
else
{
lean_object* v_a_2441_; 
lean_dec(v_a_2320_);
v_a_2441_ = lean_ctor_get(v___x_2436_, 0);
lean_inc(v_a_2441_);
lean_dec_ref_known(v___x_2436_, 1);
v_a_2255_ = v_a_2441_;
goto v___jp_2254_;
}
}
}
else
{
lean_object* v_val_2443_; uint8_t v___x_2444_; 
lean_del_object(v___x_2427_);
lean_dec(v_fst_2378_);
lean_dec(v_fst_2377_);
v_val_2443_ = lean_ctor_get(v_fst_2425_, 0);
lean_inc(v_val_2443_);
lean_dec_ref_known(v_fst_2425_, 1);
v___x_2444_ = lean_unbox(v_val_2443_);
lean_dec(v_val_2443_);
v_a_2363_ = v___x_2444_;
goto v___jp_2362_;
}
}
}
else
{
lean_object* v_a_2447_; 
lean_dec(v_fst_2378_);
lean_dec(v_fst_2377_);
lean_dec(v_a_2320_);
v_a_2447_ = lean_ctor_get(v___x_2423_, 0);
lean_inc(v_a_2447_);
lean_dec_ref_known(v___x_2423_, 1);
v_a_2255_ = v_a_2447_;
goto v___jp_2254_;
}
}
v_resetjp_2450_:
{
lean_object* v___x_2454_; 
if (v_isShared_2402_ == 0)
{
v___x_2454_ = v___x_2401_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 0, v_foApprox_2381_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 1, v_ctxApprox_2382_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 2, v_quasiPatternApprox_2383_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 3, v_constApprox_2384_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 4, v_isDefEqStuckEx_2385_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 6, v_proofIrrelevance_2386_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 7, v_assignSyntheticOpaque_2387_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 8, v_offsetCnstrs_2388_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 9, v_transparency_2389_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 10, v_etaStruct_2390_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 11, v_univApprox_2391_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 12, v_iota_2392_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 13, v_beta_2393_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 14, v_proj_2394_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 15, v_zeta_2395_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 16, v_zetaDelta_2396_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 17, v_zetaUnused_2397_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 18, v_zetaHave_2398_);
lean_ctor_set_uint8(v_reuseFailAlloc_2479_, 19, v_canUnfoldPredicateConfig_2399_);
v___x_2454_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
uint64_t v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
lean_ctor_set_uint8(v___x_2454_, 5, v___x_2370_);
v___x_2455_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2454_);
v___x_2456_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2456_, 0, v___x_2454_);
lean_ctor_set_uint64(v___x_2456_, sizeof(void*)*1, v___x_2455_);
lean_inc(v_customCanUnfoldPredicate_x3f_2411_);
lean_inc(v_synthPendingDepth_2410_);
lean_inc(v_defEqCtx_x3f_2409_);
lean_inc_ref(v_localInstances_2408_);
lean_inc_ref(v_lctx_2407_);
lean_inc(v_zetaDeltaSet_2406_);
v___x_2457_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2457_, 0, v___x_2456_);
lean_ctor_set(v___x_2457_, 1, v_zetaDeltaSet_2406_);
lean_ctor_set(v___x_2457_, 2, v_lctx_2407_);
lean_ctor_set(v___x_2457_, 3, v_localInstances_2408_);
lean_ctor_set(v___x_2457_, 4, v_defEqCtx_x3f_2409_);
lean_ctor_set(v___x_2457_, 5, v_synthPendingDepth_2410_);
lean_ctor_set(v___x_2457_, 6, v_customCanUnfoldPredicate_x3f_2411_);
lean_ctor_set_uint8(v___x_2457_, sizeof(void*)*7, v_trackZetaDelta_2405_);
lean_ctor_set_uint8(v___x_2457_, sizeof(void*)*7 + 1, v_univApprox_2412_);
lean_ctor_set_uint8(v___x_2457_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2413_);
lean_ctor_set_uint8(v___x_2457_, sizeof(void*)*7 + 3, v_cacheInferType_2414_);
v___x_2458_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_isDefEqPattern(v_lhs_2448_, v_t_2240_, v___x_2457_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2458_) == 0)
{
lean_object* v_a_2459_; uint8_t v___x_2460_; 
v_a_2459_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_a_2459_);
lean_dec_ref_known(v___x_2458_, 1);
v___x_2460_ = lean_unbox(v_a_2459_);
lean_dec(v_a_2459_);
if (v___x_2460_ == 0)
{
lean_dec_ref_known(v___x_2457_, 7);
lean_del_object(v___x_2451_);
lean_dec_ref(v_rhs_2449_);
lean_dec(v_constraints_2416_);
lean_dec(v_fst_2378_);
lean_dec(v_fst_2377_);
lean_dec(v_a_2320_);
lean_dec_ref(v_s_2241_);
lean_dec(v_candidate_2239_);
v_a_2282_ = v___x_2370_;
goto v___jp_2281_;
}
else
{
lean_object* v___x_2461_; 
v___x_2461_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_isDefEqPattern(v_rhs_2449_, v_s_2241_, v___x_2457_, v_a_2244_, v_a_2245_, v_a_2246_);
lean_dec_ref_known(v___x_2457_, 7);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_object* v_a_2462_; uint8_t v___x_2463_; 
v_a_2462_ = lean_ctor_get(v___x_2461_, 0);
lean_inc(v_a_2462_);
lean_dec_ref_known(v___x_2461_, 1);
v___x_2463_ = lean_unbox(v_a_2462_);
lean_dec(v_a_2462_);
if (v___x_2463_ == 0)
{
lean_del_object(v___x_2451_);
lean_dec(v_constraints_2416_);
lean_dec(v_fst_2378_);
lean_dec(v_fst_2377_);
lean_dec(v_a_2320_);
lean_dec(v_candidate_2239_);
v_a_2282_ = v___x_2370_;
goto v___jp_2281_;
}
else
{
lean_object* v_toCold_2464_; lean_object* v_options_2465_; uint8_t v_hasTrace_2466_; 
v_toCold_2464_ = lean_ctor_get(v_a_2245_, 0);
v_options_2465_ = lean_ctor_get(v_toCold_2464_, 2);
v_hasTrace_2466_ = lean_ctor_get_uint8(v_options_2465_, sizeof(void*)*1);
if (v_hasTrace_2466_ == 0)
{
lean_del_object(v___x_2451_);
lean_dec(v_candidate_2239_);
v___y_2418_ = v_a_2243_;
v___y_2419_ = v_a_2244_;
v___y_2420_ = v_a_2245_;
v___y_2421_ = v_a_2246_;
goto v___jp_2417_;
}
else
{
lean_object* v_inheritedTraceOptions_2467_; lean_object* v___x_2468_; uint8_t v___x_2469_; 
v_inheritedTraceOptions_2467_ = lean_ctor_get(v_toCold_2464_, 11);
v___x_2468_ = lean_obj_once(&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__7, &l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__7_once, _init_l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__7);
v___x_2469_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2467_, v_options_2465_, v___x_2468_);
if (v___x_2469_ == 0)
{
lean_del_object(v___x_2451_);
lean_dec(v_candidate_2239_);
v___y_2418_ = v_a_2243_;
v___y_2419_ = v_a_2244_;
v___y_2420_ = v_a_2245_;
v___y_2421_ = v_a_2246_;
goto v___jp_2417_;
}
else
{
lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2473_; 
v___x_2470_ = l_Lean_MessageData_ofName(v_candidate_2239_);
v___x_2471_ = lean_obj_once(&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__9, &l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__9_once, _init_l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__9);
if (v_isShared_2452_ == 0)
{
lean_ctor_set_tag(v___x_2451_, 7);
lean_ctor_set(v___x_2451_, 1, v___x_2471_);
lean_ctor_set(v___x_2451_, 0, v___x_2470_);
v___x_2473_ = v___x_2451_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v___x_2470_);
lean_ctor_set(v_reuseFailAlloc_2476_, 1, v___x_2471_);
v___x_2473_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
lean_object* v___x_2474_; 
v___x_2474_ = l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3(v_cls_2248_, v___x_2473_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_dec_ref_known(v___x_2474_, 1);
v___y_2418_ = v_a_2243_;
v___y_2419_ = v_a_2244_;
v___y_2420_ = v_a_2245_;
v___y_2421_ = v_a_2246_;
goto v___jp_2417_;
}
else
{
lean_object* v_a_2475_; 
lean_dec(v_constraints_2416_);
lean_dec(v_fst_2378_);
lean_dec(v_fst_2377_);
lean_dec(v_a_2320_);
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___x_2474_, 1);
v_a_2255_ = v_a_2475_;
goto v___jp_2254_;
}
}
}
}
}
}
else
{
lean_object* v_a_2477_; 
lean_del_object(v___x_2451_);
lean_dec(v_constraints_2416_);
lean_dec(v_fst_2378_);
lean_dec(v_fst_2377_);
lean_dec(v_a_2320_);
lean_dec(v_candidate_2239_);
v_a_2477_ = lean_ctor_get(v___x_2461_, 0);
lean_inc(v_a_2477_);
lean_dec_ref_known(v___x_2461_, 1);
v_a_2255_ = v_a_2477_;
goto v___jp_2254_;
}
}
}
else
{
lean_object* v_a_2478_; 
lean_dec_ref_known(v___x_2457_, 7);
lean_del_object(v___x_2451_);
lean_dec_ref(v_rhs_2449_);
lean_dec(v_constraints_2416_);
lean_dec(v_fst_2378_);
lean_dec(v_fst_2377_);
lean_dec(v_a_2320_);
lean_dec_ref(v_s_2241_);
lean_dec(v_candidate_2239_);
v_a_2478_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_a_2478_);
lean_dec_ref_known(v___x_2458_, 1);
v_a_2255_ = v_a_2478_;
goto v___jp_2254_;
}
}
}
}
}
}
else
{
lean_object* v_a_2482_; 
lean_dec(v_a_2320_);
lean_dec_ref(v_s_2241_);
lean_dec_ref(v_t_2240_);
lean_dec(v_candidate_2239_);
v_a_2482_ = lean_ctor_get(v___x_2374_, 0);
lean_inc(v_a_2482_);
lean_dec_ref_known(v___x_2374_, 1);
v_a_2255_ = v_a_2482_;
goto v___jp_2254_;
}
}
else
{
lean_object* v_a_2483_; 
lean_dec(v_a_2320_);
lean_dec_ref(v_s_2241_);
lean_dec_ref(v_t_2240_);
lean_dec(v_candidate_2239_);
v_a_2483_ = lean_ctor_get(v___x_2371_, 0);
lean_inc(v_a_2483_);
lean_dec_ref_known(v___x_2371_, 1);
v_a_2255_ = v_a_2483_;
goto v___jp_2254_;
}
}
else
{
lean_object* v_a_2484_; 
lean_dec(v_a_2365_);
lean_dec(v_a_2320_);
lean_dec_ref(v_s_2241_);
lean_dec_ref(v_t_2240_);
lean_dec(v_candidate_2239_);
v_a_2484_ = lean_ctor_get(v___x_2368_, 0);
lean_inc(v_a_2484_);
lean_dec_ref_known(v___x_2368_, 1);
v_a_2255_ = v_a_2484_;
goto v___jp_2254_;
}
}
else
{
lean_object* v_a_2485_; 
lean_dec(v_a_2320_);
lean_dec_ref(v_s_2241_);
lean_dec_ref(v_t_2240_);
lean_dec(v_candidate_2239_);
v_a_2485_ = lean_ctor_get(v___x_2364_, 0);
lean_inc(v_a_2485_);
lean_dec_ref_known(v___x_2364_, 1);
v_a_2255_ = v_a_2485_;
goto v___jp_2254_;
}
v___jp_2321_:
{
uint8_t v___x_2322_; lean_object* v___x_2323_; 
v___x_2322_ = 0;
v___x_2323_ = l_Lean_Meta_processPostponed(v_mayPostpone_2242_, v___x_2322_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2323_) == 0)
{
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2360_; 
v_a_2324_ = lean_ctor_get(v___x_2323_, 0);
v_isSharedCheck_2360_ = !lean_is_exclusive(v___x_2323_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2326_ = v___x_2323_;
v_isShared_2327_ = v_isSharedCheck_2360_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2323_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2360_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
uint8_t v___x_2328_; 
v___x_2328_ = lean_unbox(v_a_2324_);
if (v___x_2328_ == 0)
{
lean_object* v___x_2329_; 
lean_del_object(v___x_2326_);
lean_dec(v_a_2324_);
lean_dec(v_a_2320_);
lean_inc(v_a_2250_);
v___x_2329_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2250_, v_a_2244_, v_a_2246_);
if (lean_obj_tag(v___x_2329_) == 0)
{
lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2337_; 
lean_del_object(v___x_2252_);
lean_dec(v_a_2250_);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2329_);
if (v_isSharedCheck_2337_ == 0)
{
lean_object* v_unused_2338_; 
v_unused_2338_ = lean_ctor_get(v___x_2329_, 0);
lean_dec(v_unused_2338_);
v___x_2331_ = v___x_2329_;
v_isShared_2332_ = v_isSharedCheck_2337_;
goto v_resetjp_2330_;
}
else
{
lean_dec(v___x_2329_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2337_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2333_; lean_object* v___x_2335_; 
v___x_2333_ = lean_box(v___x_2322_);
if (v_isShared_2332_ == 0)
{
lean_ctor_set(v___x_2331_, 0, v___x_2333_);
v___x_2335_ = v___x_2331_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v___x_2333_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
else
{
lean_object* v_a_2339_; 
v_a_2339_ = lean_ctor_get(v___x_2329_, 0);
lean_inc(v_a_2339_);
lean_dec_ref_known(v___x_2329_, 1);
v_a_2255_ = v_a_2339_;
goto v___jp_2254_;
}
}
else
{
lean_object* v___x_2340_; lean_object* v_postponed_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v_mctx_2344_; lean_object* v_cache_2345_; lean_object* v_zetaDeltaFVarIds_2346_; lean_object* v_diag_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2358_; 
lean_del_object(v___x_2252_);
lean_dec(v_a_2250_);
v___x_2340_ = lean_st_ref_get(v_a_2244_);
v_postponed_2341_ = lean_ctor_get(v___x_2340_, 3);
lean_inc_ref(v_postponed_2341_);
lean_dec(v___x_2340_);
v___x_2342_ = l_Lean_PersistentArray_append___redArg(v_a_2320_, v_postponed_2341_);
lean_dec_ref(v_postponed_2341_);
v___x_2343_ = lean_st_ref_take(v_a_2244_);
v_mctx_2344_ = lean_ctor_get(v___x_2343_, 0);
v_cache_2345_ = lean_ctor_get(v___x_2343_, 1);
v_zetaDeltaFVarIds_2346_ = lean_ctor_get(v___x_2343_, 2);
v_diag_2347_ = lean_ctor_get(v___x_2343_, 4);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___x_2343_);
if (v_isSharedCheck_2358_ == 0)
{
lean_object* v_unused_2359_; 
v_unused_2359_ = lean_ctor_get(v___x_2343_, 3);
lean_dec(v_unused_2359_);
v___x_2349_ = v___x_2343_;
v_isShared_2350_ = v_isSharedCheck_2358_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_diag_2347_);
lean_inc(v_zetaDeltaFVarIds_2346_);
lean_inc(v_cache_2345_);
lean_inc(v_mctx_2344_);
lean_dec(v___x_2343_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2358_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
if (v_isShared_2350_ == 0)
{
lean_ctor_set(v___x_2349_, 3, v___x_2342_);
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_mctx_2344_);
lean_ctor_set(v_reuseFailAlloc_2357_, 1, v_cache_2345_);
lean_ctor_set(v_reuseFailAlloc_2357_, 2, v_zetaDeltaFVarIds_2346_);
lean_ctor_set(v_reuseFailAlloc_2357_, 3, v___x_2342_);
lean_ctor_set(v_reuseFailAlloc_2357_, 4, v_diag_2347_);
v___x_2352_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
lean_object* v___x_2353_; lean_object* v___x_2355_; 
v___x_2353_ = lean_st_ref_put(v_a_2244_, v___x_2352_);
if (v_isShared_2327_ == 0)
{
v___x_2355_ = v___x_2326_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2324_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
}
}
}
else
{
lean_object* v_a_2361_; 
lean_dec(v_a_2320_);
v_a_2361_ = lean_ctor_get(v___x_2323_, 0);
lean_inc(v_a_2361_);
lean_dec_ref_known(v___x_2323_, 1);
v_a_2255_ = v_a_2361_;
goto v___jp_2254_;
}
}
v___jp_2362_:
{
if (v_a_2363_ == 0)
{
lean_dec(v_a_2320_);
v_a_2282_ = v_a_2363_;
goto v___jp_2281_;
}
else
{
goto v___jp_2321_;
}
}
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
lean_del_object(v___x_2252_);
lean_dec(v_a_2250_);
lean_dec_ref(v_s_2241_);
lean_dec_ref(v_t_2240_);
lean_dec(v_candidate_2239_);
v_a_2486_ = lean_ctor_get(v___x_2319_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2319_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2319_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2491_; 
if (v_isShared_2489_ == 0)
{
v___x_2491_ = v___x_2488_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_a_2486_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
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
lean_object* v_a_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2507_; 
lean_dec_ref(v_s_2241_);
lean_dec_ref(v_t_2240_);
lean_dec(v_candidate_2239_);
v_a_2500_ = lean_ctor_get(v___x_2249_, 0);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2249_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2502_ = v___x_2249_;
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_a_2500_);
lean_dec(v___x_2249_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2505_; 
if (v_isShared_2503_ == 0)
{
v___x_2505_ = v___x_2502_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_a_2500_);
v___x_2505_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
return v___x_2505_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___boxed(lean_object* v_candidate_2508_, lean_object* v_t_2509_, lean_object* v_s_2510_, lean_object* v_mayPostpone_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_, lean_object* v_a_2514_, lean_object* v_a_2515_, lean_object* v_a_2516_){
_start:
{
uint8_t v_mayPostpone_boxed_2517_; lean_object* v_res_2518_; 
v_mayPostpone_boxed_2517_ = lean_unbox(v_mayPostpone_2511_);
v_res_2518_ = l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4(v_candidate_2508_, v_t_2509_, v_s_2510_, v_mayPostpone_boxed_2517_, v_a_2512_, v_a_2513_, v_a_2514_, v_a_2515_);
lean_dec(v_a_2515_);
lean_dec_ref(v_a_2514_);
lean_dec(v_a_2513_);
lean_dec_ref(v_a_2512_);
return v_res_2518_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2519_ = lean_unsigned_to_nat(32u);
v___x_2520_ = lean_mk_empty_array_with_capacity(v___x_2519_);
v___x_2521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2520_);
return v___x_2521_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg___closed__1(void){
_start:
{
size_t v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2522_ = ((size_t)5ULL);
v___x_2523_ = lean_unsigned_to_nat(0u);
v___x_2524_ = lean_unsigned_to_nat(32u);
v___x_2525_ = lean_mk_empty_array_with_capacity(v___x_2524_);
v___x_2526_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg___closed__0);
v___x_2527_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2527_, 0, v___x_2526_);
lean_ctor_set(v___x_2527_, 1, v___x_2525_);
lean_ctor_set(v___x_2527_, 2, v___x_2523_);
lean_ctor_set(v___x_2527_, 3, v___x_2523_);
lean_ctor_set_usize(v___x_2527_, 4, v___x_2522_);
return v___x_2527_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg(lean_object* v___y_2528_){
_start:
{
lean_object* v___x_2530_; lean_object* v_traceState_2531_; lean_object* v_traces_2532_; lean_object* v___x_2533_; lean_object* v_traceState_2534_; lean_object* v_env_2535_; lean_object* v_nextMacroScope_2536_; lean_object* v_ngen_2537_; lean_object* v_auxDeclNGen_2538_; lean_object* v_cache_2539_; lean_object* v_recordedDeps_2540_; lean_object* v_messages_2541_; lean_object* v_infoState_2542_; lean_object* v_snapshotTasks_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2562_; 
v___x_2530_ = lean_st_ref_get(v___y_2528_);
v_traceState_2531_ = lean_ctor_get(v___x_2530_, 4);
lean_inc_ref(v_traceState_2531_);
lean_dec(v___x_2530_);
v_traces_2532_ = lean_ctor_get(v_traceState_2531_, 0);
lean_inc_ref(v_traces_2532_);
lean_dec_ref(v_traceState_2531_);
v___x_2533_ = lean_st_ref_take(v___y_2528_);
v_traceState_2534_ = lean_ctor_get(v___x_2533_, 4);
v_env_2535_ = lean_ctor_get(v___x_2533_, 0);
v_nextMacroScope_2536_ = lean_ctor_get(v___x_2533_, 1);
v_ngen_2537_ = lean_ctor_get(v___x_2533_, 2);
v_auxDeclNGen_2538_ = lean_ctor_get(v___x_2533_, 3);
v_cache_2539_ = lean_ctor_get(v___x_2533_, 5);
v_recordedDeps_2540_ = lean_ctor_get(v___x_2533_, 6);
v_messages_2541_ = lean_ctor_get(v___x_2533_, 7);
v_infoState_2542_ = lean_ctor_get(v___x_2533_, 8);
v_snapshotTasks_2543_ = lean_ctor_get(v___x_2533_, 9);
v_isSharedCheck_2562_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2562_ == 0)
{
v___x_2545_ = v___x_2533_;
v_isShared_2546_ = v_isSharedCheck_2562_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_snapshotTasks_2543_);
lean_inc(v_infoState_2542_);
lean_inc(v_messages_2541_);
lean_inc(v_recordedDeps_2540_);
lean_inc(v_cache_2539_);
lean_inc(v_traceState_2534_);
lean_inc(v_auxDeclNGen_2538_);
lean_inc(v_ngen_2537_);
lean_inc(v_nextMacroScope_2536_);
lean_inc(v_env_2535_);
lean_dec(v___x_2533_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2562_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
uint64_t v_tid_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2560_; 
v_tid_2547_ = lean_ctor_get_uint64(v_traceState_2534_, sizeof(void*)*1);
v_isSharedCheck_2560_ = !lean_is_exclusive(v_traceState_2534_);
if (v_isSharedCheck_2560_ == 0)
{
lean_object* v_unused_2561_; 
v_unused_2561_ = lean_ctor_get(v_traceState_2534_, 0);
lean_dec(v_unused_2561_);
v___x_2549_ = v_traceState_2534_;
v_isShared_2550_ = v_isSharedCheck_2560_;
goto v_resetjp_2548_;
}
else
{
lean_dec(v_traceState_2534_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2560_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2551_; lean_object* v___x_2553_; 
v___x_2551_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg___closed__1);
if (v_isShared_2550_ == 0)
{
lean_ctor_set(v___x_2549_, 0, v___x_2551_);
v___x_2553_ = v___x_2549_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v___x_2551_);
lean_ctor_set_uint64(v_reuseFailAlloc_2559_, sizeof(void*)*1, v_tid_2547_);
v___x_2553_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2552_;
}
v_reusejp_2552_:
{
lean_object* v___x_2555_; 
if (v_isShared_2546_ == 0)
{
lean_ctor_set(v___x_2545_, 4, v___x_2553_);
v___x_2555_ = v___x_2545_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_env_2535_);
lean_ctor_set(v_reuseFailAlloc_2558_, 1, v_nextMacroScope_2536_);
lean_ctor_set(v_reuseFailAlloc_2558_, 2, v_ngen_2537_);
lean_ctor_set(v_reuseFailAlloc_2558_, 3, v_auxDeclNGen_2538_);
lean_ctor_set(v_reuseFailAlloc_2558_, 4, v___x_2553_);
lean_ctor_set(v_reuseFailAlloc_2558_, 5, v_cache_2539_);
lean_ctor_set(v_reuseFailAlloc_2558_, 6, v_recordedDeps_2540_);
lean_ctor_set(v_reuseFailAlloc_2558_, 7, v_messages_2541_);
lean_ctor_set(v_reuseFailAlloc_2558_, 8, v_infoState_2542_);
lean_ctor_set(v_reuseFailAlloc_2558_, 9, v_snapshotTasks_2543_);
v___x_2555_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = lean_st_ref_put(v___y_2528_, v___x_2555_);
v___x_2557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2557_, 0, v_traces_2532_);
return v___x_2557_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg___boxed(lean_object* v___y_2563_, lean_object* v___y_2564_){
_start:
{
lean_object* v_res_2565_; 
v_res_2565_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg(v___y_2563_);
lean_dec(v___y_2563_);
return v_res_2565_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5(lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_){
_start:
{
lean_object* v___x_2571_; 
v___x_2571_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg(v___y_2569_);
return v___x_2571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___boxed(lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5(v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_);
lean_dec(v___y_2575_);
lean_dec_ref(v___y_2574_);
lean_dec(v___y_2573_);
lean_dec_ref(v___y_2572_);
return v_res_2577_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__6(lean_object* v_opts_2578_, lean_object* v_opt_2579_){
_start:
{
lean_object* v_name_2580_; lean_object* v_defValue_2581_; lean_object* v_map_2582_; lean_object* v___x_2583_; 
v_name_2580_ = lean_ctor_get(v_opt_2579_, 0);
v_defValue_2581_ = lean_ctor_get(v_opt_2579_, 1);
v_map_2582_ = lean_ctor_get(v_opts_2578_, 0);
v___x_2583_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2582_, v_name_2580_);
if (lean_obj_tag(v___x_2583_) == 0)
{
uint8_t v___x_2584_; 
v___x_2584_ = lean_unbox(v_defValue_2581_);
return v___x_2584_;
}
else
{
lean_object* v_val_2585_; 
v_val_2585_ = lean_ctor_get(v___x_2583_, 0);
lean_inc(v_val_2585_);
lean_dec_ref_known(v___x_2583_, 1);
if (lean_obj_tag(v_val_2585_) == 1)
{
uint8_t v_v_2586_; 
v_v_2586_ = lean_ctor_get_uint8(v_val_2585_, 0);
lean_dec_ref_known(v_val_2585_, 0);
return v_v_2586_;
}
else
{
uint8_t v___x_2587_; 
lean_dec(v_val_2585_);
v___x_2587_ = lean_unbox(v_defValue_2581_);
return v___x_2587_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__6___boxed(lean_object* v_opts_2588_, lean_object* v_opt_2589_){
_start:
{
uint8_t v_res_2590_; lean_object* v_r_2591_; 
v_res_2590_ = l_Lean_Option_get___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__6(v_opts_2588_, v_opt_2589_);
lean_dec_ref(v_opt_2589_);
lean_dec_ref(v_opts_2588_);
v_r_2591_ = lean_box(v_res_2590_);
return v_r_2591_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2593_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__0));
v___x_2594_ = l_Lean_stringToMessageData(v___x_2593_);
return v___x_2594_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2596_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__2));
v___x_2597_ = l_Lean_stringToMessageData(v___x_2596_);
return v___x_2597_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2599_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__4));
v___x_2600_ = l_Lean_stringToMessageData(v___x_2599_);
return v___x_2600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0(lean_object* v_candidate_2601_, lean_object* v_t_2602_, lean_object* v_s_2603_, lean_object* v_x_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_){
_start:
{
lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; 
v___x_2610_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__1, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__1_once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__1);
v___x_2611_ = l_Lean_MessageData_ofName(v_candidate_2601_);
v___x_2612_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2610_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
v___x_2613_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__3, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__3_once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__3);
v___x_2614_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2612_);
lean_ctor_set(v___x_2614_, 1, v___x_2613_);
v___x_2615_ = l_Lean_MessageData_ofExpr(v_t_2602_);
v___x_2616_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2616_, 0, v___x_2614_);
lean_ctor_set(v___x_2616_, 1, v___x_2615_);
v___x_2617_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__5, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__5_once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__5);
v___x_2618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2616_);
lean_ctor_set(v___x_2618_, 1, v___x_2617_);
v___x_2619_ = l_Lean_MessageData_ofExpr(v_s_2603_);
v___x_2620_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2620_, 0, v___x_2618_);
lean_ctor_set(v___x_2620_, 1, v___x_2619_);
v___x_2621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2621_, 0, v___x_2620_);
return v___x_2621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___boxed(lean_object* v_candidate_2622_, lean_object* v_t_2623_, lean_object* v_s_2624_, lean_object* v_x_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_){
_start:
{
lean_object* v_res_2631_; 
v_res_2631_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0(v_candidate_2622_, v_t_2623_, v_s_2624_, v_x_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
lean_dec(v___y_2629_);
lean_dec_ref(v___y_2628_);
lean_dec(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec_ref(v_x_2625_);
return v_res_2631_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__9(lean_object* v_e_2632_){
_start:
{
if (lean_obj_tag(v_e_2632_) == 0)
{
uint8_t v___x_2633_; 
v___x_2633_ = 2;
return v___x_2633_;
}
else
{
lean_object* v_a_2634_; uint8_t v___x_2635_; 
v_a_2634_ = lean_ctor_get(v_e_2632_, 0);
v___x_2635_ = lean_unbox(v_a_2634_);
if (v___x_2635_ == 0)
{
uint8_t v___x_2636_; 
v___x_2636_ = 1;
return v___x_2636_;
}
else
{
uint8_t v___x_2637_; 
v___x_2637_ = 0;
return v___x_2637_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__9___boxed(lean_object* v_e_2638_){
_start:
{
uint8_t v_res_2639_; lean_object* v_r_2640_; 
v_res_2639_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__9(v_e_2638_);
lean_dec_ref(v_e_2638_);
v_r_2640_ = lean_box(v_res_2639_);
return v_r_2640_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__7_spec__8(size_t v_sz_2641_, size_t v_i_2642_, lean_object* v_bs_2643_){
_start:
{
uint8_t v___x_2644_; 
v___x_2644_ = lean_usize_dec_lt(v_i_2642_, v_sz_2641_);
if (v___x_2644_ == 0)
{
return v_bs_2643_;
}
else
{
lean_object* v_v_2645_; lean_object* v_msg_2646_; lean_object* v___x_2647_; lean_object* v_bs_x27_2648_; size_t v___x_2649_; size_t v___x_2650_; lean_object* v___x_2651_; 
v_v_2645_ = lean_array_uget_borrowed(v_bs_2643_, v_i_2642_);
v_msg_2646_ = lean_ctor_get(v_v_2645_, 1);
lean_inc_ref(v_msg_2646_);
v___x_2647_ = lean_unsigned_to_nat(0u);
v_bs_x27_2648_ = lean_array_uset(v_bs_2643_, v_i_2642_, v___x_2647_);
v___x_2649_ = ((size_t)1ULL);
v___x_2650_ = lean_usize_add(v_i_2642_, v___x_2649_);
v___x_2651_ = lean_array_uset(v_bs_x27_2648_, v_i_2642_, v_msg_2646_);
v_i_2642_ = v___x_2650_;
v_bs_2643_ = v___x_2651_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__7_spec__8___boxed(lean_object* v_sz_2653_, lean_object* v_i_2654_, lean_object* v_bs_2655_){
_start:
{
size_t v_sz_boxed_2656_; size_t v_i_boxed_2657_; lean_object* v_res_2658_; 
v_sz_boxed_2656_ = lean_unbox_usize(v_sz_2653_);
lean_dec(v_sz_2653_);
v_i_boxed_2657_ = lean_unbox_usize(v_i_2654_);
lean_dec(v_i_2654_);
v_res_2658_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__7_spec__8(v_sz_boxed_2656_, v_i_boxed_2657_, v_bs_2655_);
return v_res_2658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__7(lean_object* v_oldTraces_2659_, lean_object* v_data_2660_, lean_object* v_ref_2661_, lean_object* v_msg_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_){
_start:
{
lean_object* v_toCold_2668_; lean_object* v_currRecDepth_2669_; lean_object* v_ref_2670_; uint16_t v_optionFlags_2671_; uint8_t v_suppressElabErrors_2672_; uint8_t v_checkDeprecated_2673_; uint8_t v_isRecordingDeps_2674_; lean_object* v_ref_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v_traceState_2678_; lean_object* v_traces_2679_; lean_object* v___x_2680_; size_t v_sz_2681_; size_t v___x_2682_; lean_object* v___x_2683_; lean_object* v_msg_2684_; lean_object* v___x_2685_; lean_object* v_a_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2724_; 
v_toCold_2668_ = lean_ctor_get(v___y_2665_, 0);
v_currRecDepth_2669_ = lean_ctor_get(v___y_2665_, 1);
v_ref_2670_ = lean_ctor_get(v___y_2665_, 2);
v_optionFlags_2671_ = lean_ctor_get_uint16(v___y_2665_, sizeof(void*)*3);
v_suppressElabErrors_2672_ = lean_ctor_get_uint8(v___y_2665_, sizeof(void*)*3 + 2);
v_checkDeprecated_2673_ = lean_ctor_get_uint8(v___y_2665_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2674_ = lean_ctor_get_uint8(v___y_2665_, sizeof(void*)*3 + 4);
v_ref_2675_ = l_Lean_replaceRef(v_ref_2661_, v_ref_2670_);
lean_inc(v_currRecDepth_2669_);
lean_inc_ref(v_toCold_2668_);
v___x_2676_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2676_, 0, v_toCold_2668_);
lean_ctor_set(v___x_2676_, 1, v_currRecDepth_2669_);
lean_ctor_set(v___x_2676_, 2, v_ref_2675_);
lean_ctor_set_uint16(v___x_2676_, sizeof(void*)*3, v_optionFlags_2671_);
lean_ctor_set_uint8(v___x_2676_, sizeof(void*)*3 + 2, v_suppressElabErrors_2672_);
lean_ctor_set_uint8(v___x_2676_, sizeof(void*)*3 + 3, v_checkDeprecated_2673_);
lean_ctor_set_uint8(v___x_2676_, sizeof(void*)*3 + 4, v_isRecordingDeps_2674_);
v___x_2677_ = lean_st_ref_get(v___y_2666_);
v_traceState_2678_ = lean_ctor_get(v___x_2677_, 4);
lean_inc_ref(v_traceState_2678_);
lean_dec(v___x_2677_);
v_traces_2679_ = lean_ctor_get(v_traceState_2678_, 0);
lean_inc_ref(v_traces_2679_);
lean_dec_ref(v_traceState_2678_);
v___x_2680_ = l_Lean_PersistentArray_toArray___redArg(v_traces_2679_);
lean_dec_ref(v_traces_2679_);
v_sz_2681_ = lean_array_size(v___x_2680_);
v___x_2682_ = ((size_t)0ULL);
v___x_2683_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__7_spec__8(v_sz_2681_, v___x_2682_, v___x_2680_);
v_msg_2684_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_2684_, 0, v_data_2660_);
lean_ctor_set(v_msg_2684_, 1, v_msg_2662_);
lean_ctor_set(v_msg_2684_, 2, v___x_2683_);
v___x_2685_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_validateHint_spec__0_spec__0(v_msg_2684_, v___y_2663_, v___y_2664_, v___x_2676_, v___y_2666_);
lean_dec_ref_known(v___x_2676_, 3);
v_a_2686_ = lean_ctor_get(v___x_2685_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2685_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2688_ = v___x_2685_;
v_isShared_2689_ = v_isSharedCheck_2724_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_a_2686_);
lean_dec(v___x_2685_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2724_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v___x_2690_; lean_object* v_traceState_2691_; lean_object* v_env_2692_; lean_object* v_nextMacroScope_2693_; lean_object* v_ngen_2694_; lean_object* v_auxDeclNGen_2695_; lean_object* v_cache_2696_; lean_object* v_recordedDeps_2697_; lean_object* v_messages_2698_; lean_object* v_infoState_2699_; lean_object* v_snapshotTasks_2700_; lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2723_; 
v___x_2690_ = lean_st_ref_take(v___y_2666_);
v_traceState_2691_ = lean_ctor_get(v___x_2690_, 4);
v_env_2692_ = lean_ctor_get(v___x_2690_, 0);
v_nextMacroScope_2693_ = lean_ctor_get(v___x_2690_, 1);
v_ngen_2694_ = lean_ctor_get(v___x_2690_, 2);
v_auxDeclNGen_2695_ = lean_ctor_get(v___x_2690_, 3);
v_cache_2696_ = lean_ctor_get(v___x_2690_, 5);
v_recordedDeps_2697_ = lean_ctor_get(v___x_2690_, 6);
v_messages_2698_ = lean_ctor_get(v___x_2690_, 7);
v_infoState_2699_ = lean_ctor_get(v___x_2690_, 8);
v_snapshotTasks_2700_ = lean_ctor_get(v___x_2690_, 9);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2702_ = v___x_2690_;
v_isShared_2703_ = v_isSharedCheck_2723_;
goto v_resetjp_2701_;
}
else
{
lean_inc(v_snapshotTasks_2700_);
lean_inc(v_infoState_2699_);
lean_inc(v_messages_2698_);
lean_inc(v_recordedDeps_2697_);
lean_inc(v_cache_2696_);
lean_inc(v_traceState_2691_);
lean_inc(v_auxDeclNGen_2695_);
lean_inc(v_ngen_2694_);
lean_inc(v_nextMacroScope_2693_);
lean_inc(v_env_2692_);
lean_dec(v___x_2690_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2723_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
uint64_t v_tid_2704_; lean_object* v___x_2706_; uint8_t v_isShared_2707_; uint8_t v_isSharedCheck_2721_; 
v_tid_2704_ = lean_ctor_get_uint64(v_traceState_2691_, sizeof(void*)*1);
v_isSharedCheck_2721_ = !lean_is_exclusive(v_traceState_2691_);
if (v_isSharedCheck_2721_ == 0)
{
lean_object* v_unused_2722_; 
v_unused_2722_ = lean_ctor_get(v_traceState_2691_, 0);
lean_dec(v_unused_2722_);
v___x_2706_ = v_traceState_2691_;
v_isShared_2707_ = v_isSharedCheck_2721_;
goto v_resetjp_2705_;
}
else
{
lean_dec(v_traceState_2691_);
v___x_2706_ = lean_box(0);
v_isShared_2707_ = v_isSharedCheck_2721_;
goto v_resetjp_2705_;
}
v_resetjp_2705_:
{
lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2712_; 
v___x_2708_ = lean_box(0);
v___x_2709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2709_, 0, v_ref_2661_);
lean_ctor_set(v___x_2709_, 1, v_a_2686_);
v___x_2710_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_2659_, v___x_2709_);
if (v_isShared_2707_ == 0)
{
lean_ctor_set(v___x_2706_, 0, v___x_2710_);
v___x_2712_ = v___x_2706_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v___x_2710_);
lean_ctor_set_uint64(v_reuseFailAlloc_2720_, sizeof(void*)*1, v_tid_2704_);
v___x_2712_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
lean_object* v___x_2714_; 
if (v_isShared_2703_ == 0)
{
lean_ctor_set(v___x_2702_, 4, v___x_2712_);
v___x_2714_ = v___x_2702_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v_env_2692_);
lean_ctor_set(v_reuseFailAlloc_2719_, 1, v_nextMacroScope_2693_);
lean_ctor_set(v_reuseFailAlloc_2719_, 2, v_ngen_2694_);
lean_ctor_set(v_reuseFailAlloc_2719_, 3, v_auxDeclNGen_2695_);
lean_ctor_set(v_reuseFailAlloc_2719_, 4, v___x_2712_);
lean_ctor_set(v_reuseFailAlloc_2719_, 5, v_cache_2696_);
lean_ctor_set(v_reuseFailAlloc_2719_, 6, v_recordedDeps_2697_);
lean_ctor_set(v_reuseFailAlloc_2719_, 7, v_messages_2698_);
lean_ctor_set(v_reuseFailAlloc_2719_, 8, v_infoState_2699_);
lean_ctor_set(v_reuseFailAlloc_2719_, 9, v_snapshotTasks_2700_);
v___x_2714_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
lean_object* v___x_2715_; lean_object* v___x_2717_; 
v___x_2715_ = lean_st_ref_put(v___y_2666_, v___x_2714_);
if (v_isShared_2689_ == 0)
{
lean_ctor_set(v___x_2688_, 0, v___x_2708_);
v___x_2717_ = v___x_2688_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v___x_2708_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__7___boxed(lean_object* v_oldTraces_2725_, lean_object* v_data_2726_, lean_object* v_ref_2727_, lean_object* v_msg_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_){
_start:
{
lean_object* v_res_2734_; 
v_res_2734_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__7(v_oldTraces_2725_, v_data_2726_, v_ref_2727_, v_msg_2728_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_);
lean_dec(v___y_2732_);
lean_dec_ref(v___y_2731_);
lean_dec(v___y_2730_);
lean_dec_ref(v___y_2729_);
return v_res_2734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__10(lean_object* v_opts_2735_, lean_object* v_opt_2736_){
_start:
{
lean_object* v_name_2737_; lean_object* v_defValue_2738_; lean_object* v_map_2739_; lean_object* v___x_2740_; 
v_name_2737_ = lean_ctor_get(v_opt_2736_, 0);
v_defValue_2738_ = lean_ctor_get(v_opt_2736_, 1);
v_map_2739_ = lean_ctor_get(v_opts_2735_, 0);
v___x_2740_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2739_, v_name_2737_);
if (lean_obj_tag(v___x_2740_) == 0)
{
lean_inc(v_defValue_2738_);
return v_defValue_2738_;
}
else
{
lean_object* v_val_2741_; 
v_val_2741_ = lean_ctor_get(v___x_2740_, 0);
lean_inc(v_val_2741_);
lean_dec_ref_known(v___x_2740_, 1);
if (lean_obj_tag(v_val_2741_) == 3)
{
lean_object* v_v_2742_; 
v_v_2742_ = lean_ctor_get(v_val_2741_, 0);
lean_inc(v_v_2742_);
lean_dec_ref_known(v_val_2741_, 1);
return v_v_2742_;
}
else
{
lean_dec(v_val_2741_);
lean_inc(v_defValue_2738_);
return v_defValue_2738_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__10___boxed(lean_object* v_opts_2743_, lean_object* v_opt_2744_){
_start:
{
lean_object* v_res_2745_; 
v_res_2745_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__10(v_opts_2743_, v_opt_2744_);
lean_dec_ref(v_opt_2744_);
lean_dec_ref(v_opts_2743_);
return v_res_2745_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__8___redArg(lean_object* v_x_2746_){
_start:
{
if (lean_obj_tag(v_x_2746_) == 0)
{
lean_object* v_a_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2755_; 
v_a_2748_ = lean_ctor_get(v_x_2746_, 0);
v_isSharedCheck_2755_ = !lean_is_exclusive(v_x_2746_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2750_ = v_x_2746_;
v_isShared_2751_ = v_isSharedCheck_2755_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_a_2748_);
lean_dec(v_x_2746_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2755_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
lean_object* v___x_2753_; 
if (v_isShared_2751_ == 0)
{
lean_ctor_set_tag(v___x_2750_, 1);
v___x_2753_ = v___x_2750_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_a_2748_);
v___x_2753_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
return v___x_2753_;
}
}
}
else
{
lean_object* v_a_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2763_; 
v_a_2756_ = lean_ctor_get(v_x_2746_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v_x_2746_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2758_ = v_x_2746_;
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_a_2756_);
lean_dec(v_x_2746_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v___x_2761_; 
if (v_isShared_2759_ == 0)
{
lean_ctor_set_tag(v___x_2758_, 0);
v___x_2761_ = v___x_2758_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_a_2756_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
return v___x_2761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__8___redArg___boxed(lean_object* v_x_2764_, lean_object* v___y_2765_){
_start:
{
lean_object* v_res_2766_; 
v_res_2766_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__8___redArg(v_x_2764_);
return v_res_2766_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__1(void){
_start:
{
lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2768_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__0));
v___x_2769_ = l_Lean_stringToMessageData(v___x_2768_);
return v___x_2769_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__2(void){
_start:
{
lean_object* v___x_2770_; double v___x_2771_; 
v___x_2770_ = lean_unsigned_to_nat(1000u);
v___x_2771_ = lean_float_of_nat(v___x_2770_);
return v___x_2771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7(lean_object* v_cls_2772_, uint8_t v_collapsed_2773_, lean_object* v_tag_2774_, lean_object* v_opts_2775_, uint8_t v_clsEnabled_2776_, lean_object* v_oldTraces_2777_, lean_object* v_msg_2778_, lean_object* v_resStartStop_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_){
_start:
{
lean_object* v_fst_2785_; lean_object* v_snd_2786_; lean_object* v___y_2788_; lean_object* v___y_2789_; lean_object* v_data_2790_; lean_object* v_fst_2801_; lean_object* v_snd_2802_; lean_object* v___x_2803_; uint8_t v___x_2804_; lean_object* v___y_2806_; lean_object* v_a_2807_; uint8_t v___y_2822_; double v___y_2854_; 
v_fst_2785_ = lean_ctor_get(v_resStartStop_2779_, 0);
lean_inc(v_fst_2785_);
v_snd_2786_ = lean_ctor_get(v_resStartStop_2779_, 1);
lean_inc(v_snd_2786_);
lean_dec_ref(v_resStartStop_2779_);
v_fst_2801_ = lean_ctor_get(v_snd_2786_, 0);
lean_inc(v_fst_2801_);
v_snd_2802_ = lean_ctor_get(v_snd_2786_, 1);
lean_inc(v_snd_2802_);
lean_dec(v_snd_2786_);
v___x_2803_ = l_Lean_trace_profiler;
v___x_2804_ = l_Lean_Option_get___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__6(v_opts_2775_, v___x_2803_);
if (v___x_2804_ == 0)
{
v___y_2822_ = v___x_2804_;
goto v___jp_2821_;
}
else
{
lean_object* v___x_2859_; uint8_t v___x_2860_; 
v___x_2859_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2860_ = l_Lean_Option_get___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__6(v_opts_2775_, v___x_2859_);
if (v___x_2860_ == 0)
{
lean_object* v___x_2861_; lean_object* v___x_2862_; double v___x_2863_; double v___x_2864_; double v___x_2865_; 
v___x_2861_ = l_Lean_trace_profiler_threshold;
v___x_2862_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__10(v_opts_2775_, v___x_2861_);
v___x_2863_ = lean_float_of_nat(v___x_2862_);
v___x_2864_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__2);
v___x_2865_ = lean_float_div(v___x_2863_, v___x_2864_);
v___y_2854_ = v___x_2865_;
goto v___jp_2853_;
}
else
{
lean_object* v___x_2866_; lean_object* v___x_2867_; double v___x_2868_; 
v___x_2866_ = l_Lean_trace_profiler_threshold;
v___x_2867_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__10(v_opts_2775_, v___x_2866_);
v___x_2868_ = lean_float_of_nat(v___x_2867_);
v___y_2854_ = v___x_2868_;
goto v___jp_2853_;
}
}
v___jp_2787_:
{
lean_object* v___x_2791_; 
lean_inc(v___y_2789_);
v___x_2791_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__7(v_oldTraces_2777_, v_data_2790_, v___y_2789_, v___y_2788_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_);
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_object* v___x_2792_; 
lean_dec_ref_known(v___x_2791_, 1);
v___x_2792_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__8___redArg(v_fst_2785_);
return v___x_2792_;
}
else
{
lean_object* v_a_2793_; lean_object* v___x_2795_; uint8_t v_isShared_2796_; uint8_t v_isSharedCheck_2800_; 
lean_dec(v_fst_2785_);
v_a_2793_ = lean_ctor_get(v___x_2791_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v___x_2791_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2795_ = v___x_2791_;
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
else
{
lean_inc(v_a_2793_);
lean_dec(v___x_2791_);
v___x_2795_ = lean_box(0);
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
v_resetjp_2794_:
{
lean_object* v___x_2798_; 
if (v_isShared_2796_ == 0)
{
v___x_2798_ = v___x_2795_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v_a_2793_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
return v___x_2798_;
}
}
}
}
v___jp_2805_:
{
uint8_t v_result_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; double v___x_2811_; lean_object* v_data_2812_; 
v_result_2808_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__9(v_fst_2785_);
v___x_2809_ = lean_box(v_result_2808_);
v___x_2810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2810_, 0, v___x_2809_);
v___x_2811_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__0);
lean_inc_ref(v_tag_2774_);
lean_inc_ref(v___x_2810_);
lean_inc(v_cls_2772_);
v_data_2812_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2812_, 0, v_cls_2772_);
lean_ctor_set(v_data_2812_, 1, v___x_2810_);
lean_ctor_set(v_data_2812_, 2, v_tag_2774_);
lean_ctor_set_float(v_data_2812_, sizeof(void*)*3, v___x_2811_);
lean_ctor_set_float(v_data_2812_, sizeof(void*)*3 + 8, v___x_2811_);
lean_ctor_set_uint8(v_data_2812_, sizeof(void*)*3 + 16, v_collapsed_2773_);
if (v___x_2804_ == 0)
{
lean_dec_ref_known(v___x_2810_, 1);
lean_dec(v_snd_2802_);
lean_dec(v_fst_2801_);
lean_dec_ref(v_tag_2774_);
lean_dec(v_cls_2772_);
v___y_2788_ = v_a_2807_;
v___y_2789_ = v___y_2806_;
v_data_2790_ = v_data_2812_;
goto v___jp_2787_;
}
else
{
lean_object* v_data_2813_; double v___x_2814_; double v___x_2815_; 
lean_dec_ref_known(v_data_2812_, 3);
v_data_2813_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2813_, 0, v_cls_2772_);
lean_ctor_set(v_data_2813_, 1, v___x_2810_);
lean_ctor_set(v_data_2813_, 2, v_tag_2774_);
v___x_2814_ = lean_unbox_float(v_fst_2801_);
lean_dec(v_fst_2801_);
lean_ctor_set_float(v_data_2813_, sizeof(void*)*3, v___x_2814_);
v___x_2815_ = lean_unbox_float(v_snd_2802_);
lean_dec(v_snd_2802_);
lean_ctor_set_float(v_data_2813_, sizeof(void*)*3 + 8, v___x_2815_);
lean_ctor_set_uint8(v_data_2813_, sizeof(void*)*3 + 16, v_collapsed_2773_);
v___y_2788_ = v_a_2807_;
v___y_2789_ = v___y_2806_;
v_data_2790_ = v_data_2813_;
goto v___jp_2787_;
}
}
v___jp_2816_:
{
lean_object* v_ref_2817_; lean_object* v___x_2818_; 
v_ref_2817_ = lean_ctor_get(v___y_2782_, 2);
lean_inc(v___y_2783_);
lean_inc_ref(v___y_2782_);
lean_inc(v___y_2781_);
lean_inc_ref(v___y_2780_);
lean_inc(v_fst_2785_);
v___x_2818_ = lean_apply_6(v_msg_2778_, v_fst_2785_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_, lean_box(0));
if (lean_obj_tag(v___x_2818_) == 0)
{
lean_object* v_a_2819_; 
v_a_2819_ = lean_ctor_get(v___x_2818_, 0);
lean_inc(v_a_2819_);
lean_dec_ref_known(v___x_2818_, 1);
v___y_2806_ = v_ref_2817_;
v_a_2807_ = v_a_2819_;
goto v___jp_2805_;
}
else
{
lean_object* v___x_2820_; 
lean_dec_ref_known(v___x_2818_, 1);
v___x_2820_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___closed__1);
v___y_2806_ = v_ref_2817_;
v_a_2807_ = v___x_2820_;
goto v___jp_2805_;
}
}
v___jp_2821_:
{
if (v_clsEnabled_2776_ == 0)
{
if (v___y_2822_ == 0)
{
lean_object* v___x_2823_; lean_object* v_traceState_2824_; lean_object* v_env_2825_; lean_object* v_nextMacroScope_2826_; lean_object* v_ngen_2827_; lean_object* v_auxDeclNGen_2828_; lean_object* v_cache_2829_; lean_object* v_recordedDeps_2830_; lean_object* v_messages_2831_; lean_object* v_infoState_2832_; lean_object* v_snapshotTasks_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2852_; 
lean_dec(v_snd_2802_);
lean_dec(v_fst_2801_);
lean_dec_ref(v_msg_2778_);
lean_dec_ref(v_tag_2774_);
lean_dec(v_cls_2772_);
v___x_2823_ = lean_st_ref_take(v___y_2783_);
v_traceState_2824_ = lean_ctor_get(v___x_2823_, 4);
v_env_2825_ = lean_ctor_get(v___x_2823_, 0);
v_nextMacroScope_2826_ = lean_ctor_get(v___x_2823_, 1);
v_ngen_2827_ = lean_ctor_get(v___x_2823_, 2);
v_auxDeclNGen_2828_ = lean_ctor_get(v___x_2823_, 3);
v_cache_2829_ = lean_ctor_get(v___x_2823_, 5);
v_recordedDeps_2830_ = lean_ctor_get(v___x_2823_, 6);
v_messages_2831_ = lean_ctor_get(v___x_2823_, 7);
v_infoState_2832_ = lean_ctor_get(v___x_2823_, 8);
v_snapshotTasks_2833_ = lean_ctor_get(v___x_2823_, 9);
v_isSharedCheck_2852_ = !lean_is_exclusive(v___x_2823_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2835_ = v___x_2823_;
v_isShared_2836_ = v_isSharedCheck_2852_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_snapshotTasks_2833_);
lean_inc(v_infoState_2832_);
lean_inc(v_messages_2831_);
lean_inc(v_recordedDeps_2830_);
lean_inc(v_cache_2829_);
lean_inc(v_traceState_2824_);
lean_inc(v_auxDeclNGen_2828_);
lean_inc(v_ngen_2827_);
lean_inc(v_nextMacroScope_2826_);
lean_inc(v_env_2825_);
lean_dec(v___x_2823_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2852_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
uint64_t v_tid_2837_; lean_object* v_traces_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2851_; 
v_tid_2837_ = lean_ctor_get_uint64(v_traceState_2824_, sizeof(void*)*1);
v_traces_2838_ = lean_ctor_get(v_traceState_2824_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v_traceState_2824_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2840_ = v_traceState_2824_;
v_isShared_2841_ = v_isSharedCheck_2851_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_traces_2838_);
lean_dec(v_traceState_2824_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2851_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
lean_object* v___x_2842_; lean_object* v___x_2844_; 
v___x_2842_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2777_, v_traces_2838_);
lean_dec_ref(v_traces_2838_);
if (v_isShared_2841_ == 0)
{
lean_ctor_set(v___x_2840_, 0, v___x_2842_);
v___x_2844_ = v___x_2840_;
goto v_reusejp_2843_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v___x_2842_);
lean_ctor_set_uint64(v_reuseFailAlloc_2850_, sizeof(void*)*1, v_tid_2837_);
v___x_2844_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2843_;
}
v_reusejp_2843_:
{
lean_object* v___x_2846_; 
if (v_isShared_2836_ == 0)
{
lean_ctor_set(v___x_2835_, 4, v___x_2844_);
v___x_2846_ = v___x_2835_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v_env_2825_);
lean_ctor_set(v_reuseFailAlloc_2849_, 1, v_nextMacroScope_2826_);
lean_ctor_set(v_reuseFailAlloc_2849_, 2, v_ngen_2827_);
lean_ctor_set(v_reuseFailAlloc_2849_, 3, v_auxDeclNGen_2828_);
lean_ctor_set(v_reuseFailAlloc_2849_, 4, v___x_2844_);
lean_ctor_set(v_reuseFailAlloc_2849_, 5, v_cache_2829_);
lean_ctor_set(v_reuseFailAlloc_2849_, 6, v_recordedDeps_2830_);
lean_ctor_set(v_reuseFailAlloc_2849_, 7, v_messages_2831_);
lean_ctor_set(v_reuseFailAlloc_2849_, 8, v_infoState_2832_);
lean_ctor_set(v_reuseFailAlloc_2849_, 9, v_snapshotTasks_2833_);
v___x_2846_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2847_ = lean_st_ref_put(v___y_2783_, v___x_2846_);
v___x_2848_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__8___redArg(v_fst_2785_);
return v___x_2848_;
}
}
}
}
}
else
{
goto v___jp_2816_;
}
}
else
{
goto v___jp_2816_;
}
}
v___jp_2853_:
{
double v___x_2855_; double v___x_2856_; double v___x_2857_; uint8_t v___x_2858_; 
v___x_2855_ = lean_unbox_float(v_snd_2802_);
v___x_2856_ = lean_unbox_float(v_fst_2801_);
v___x_2857_ = lean_float_sub(v___x_2855_, v___x_2856_);
v___x_2858_ = lean_float_decLt(v___y_2854_, v___x_2857_);
v___y_2822_ = v___x_2858_;
goto v___jp_2821_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7___boxed(lean_object* v_cls_2869_, lean_object* v_collapsed_2870_, lean_object* v_tag_2871_, lean_object* v_opts_2872_, lean_object* v_clsEnabled_2873_, lean_object* v_oldTraces_2874_, lean_object* v_msg_2875_, lean_object* v_resStartStop_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_){
_start:
{
uint8_t v_collapsed_boxed_2882_; uint8_t v_clsEnabled_boxed_2883_; lean_object* v_res_2884_; 
v_collapsed_boxed_2882_ = lean_unbox(v_collapsed_2870_);
v_clsEnabled_boxed_2883_ = lean_unbox(v_clsEnabled_2873_);
v_res_2884_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7(v_cls_2869_, v_collapsed_boxed_2882_, v_tag_2871_, v_opts_2872_, v_clsEnabled_boxed_2883_, v_oldTraces_2874_, v_msg_2875_, v_resStartStop_2876_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec_ref(v_opts_2872_);
return v_res_2884_;
}
}
static double _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___closed__0(void){
_start:
{
lean_object* v___x_2885_; double v___x_2886_; 
v___x_2885_ = lean_unsigned_to_nat(1000000000u);
v___x_2886_ = lean_float_of_nat(v___x_2885_);
return v___x_2886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate(lean_object* v_t_2887_, lean_object* v_s_2888_, lean_object* v_candidate_2889_, lean_object* v_a_2890_, lean_object* v_a_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_){
_start:
{
lean_object* v_toCold_2895_; lean_object* v_options_2896_; lean_object* v_inheritedTraceOptions_2897_; uint8_t v_hasTrace_2898_; uint8_t v___x_2899_; 
v_toCold_2895_ = lean_ctor_get(v_a_2892_, 0);
v_options_2896_ = lean_ctor_get(v_toCold_2895_, 2);
v_inheritedTraceOptions_2897_ = lean_ctor_get(v_toCold_2895_, 11);
v_hasTrace_2898_ = lean_ctor_get_uint8(v_options_2896_, sizeof(void*)*1);
v___x_2899_ = 1;
if (v_hasTrace_2898_ == 0)
{
lean_object* v___x_2900_; 
v___x_2900_ = l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4(v_candidate_2889_, v_t_2887_, v_s_2888_, v___x_2899_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_);
return v___x_2900_;
}
else
{
lean_object* v___f_2901_; lean_object* v_cls_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; uint8_t v___x_2905_; lean_object* v___y_2907_; lean_object* v___y_2908_; lean_object* v_a_2909_; lean_object* v___y_2922_; lean_object* v___y_2923_; lean_object* v_a_2924_; 
lean_inc_ref(v_s_2888_);
lean_inc_ref(v_t_2887_);
lean_inc(v_candidate_2889_);
v___f_2901_ = lean_alloc_closure((void*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2901_, 0, v_candidate_2889_);
lean_closure_set(v___f_2901_, 1, v_t_2887_);
lean_closure_set(v___f_2901_, 2, v_s_2888_);
v_cls_2902_ = ((lean_object*)(l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__2));
v___x_2903_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3___closed__1));
v___x_2904_ = lean_obj_once(&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__7, &l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__7_once, _init_l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__7);
v___x_2905_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2897_, v_options_2896_, v___x_2904_);
if (v___x_2905_ == 0)
{
lean_object* v___x_2974_; uint8_t v___x_2975_; 
v___x_2974_ = l_Lean_trace_profiler;
v___x_2975_ = l_Lean_Option_get___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__6(v_options_2896_, v___x_2974_);
if (v___x_2975_ == 0)
{
lean_object* v___x_2976_; 
lean_dec_ref(v___f_2901_);
v___x_2976_ = l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4(v_candidate_2889_, v_t_2887_, v_s_2888_, v___x_2899_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_);
return v___x_2976_;
}
else
{
goto v___jp_2933_;
}
}
else
{
goto v___jp_2933_;
}
v___jp_2906_:
{
lean_object* v___x_2910_; double v___x_2911_; double v___x_2912_; double v___x_2913_; double v___x_2914_; double v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; 
v___x_2910_ = lean_io_mono_nanos_now();
v___x_2911_ = lean_float_of_nat(v___y_2908_);
v___x_2912_ = lean_float_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___closed__0, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___closed__0_once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___closed__0);
v___x_2913_ = lean_float_div(v___x_2911_, v___x_2912_);
v___x_2914_ = lean_float_of_nat(v___x_2910_);
v___x_2915_ = lean_float_div(v___x_2914_, v___x_2912_);
v___x_2916_ = lean_box_float(v___x_2913_);
v___x_2917_ = lean_box_float(v___x_2915_);
v___x_2918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2918_, 0, v___x_2916_);
lean_ctor_set(v___x_2918_, 1, v___x_2917_);
v___x_2919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2919_, 0, v_a_2909_);
lean_ctor_set(v___x_2919_, 1, v___x_2918_);
v___x_2920_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7(v_cls_2902_, v___x_2899_, v___x_2903_, v_options_2896_, v___x_2905_, v___y_2907_, v___f_2901_, v___x_2919_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_);
return v___x_2920_;
}
v___jp_2921_:
{
lean_object* v___x_2925_; double v___x_2926_; double v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___x_2925_ = lean_io_get_num_heartbeats();
v___x_2926_ = lean_float_of_nat(v___y_2922_);
v___x_2927_ = lean_float_of_nat(v___x_2925_);
v___x_2928_ = lean_box_float(v___x_2926_);
v___x_2929_ = lean_box_float(v___x_2927_);
v___x_2930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2930_, 0, v___x_2928_);
lean_ctor_set(v___x_2930_, 1, v___x_2929_);
v___x_2931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2931_, 0, v_a_2924_);
lean_ctor_set(v___x_2931_, 1, v___x_2930_);
v___x_2932_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7(v_cls_2902_, v___x_2899_, v___x_2903_, v_options_2896_, v___x_2905_, v___y_2923_, v___f_2901_, v___x_2931_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_);
return v___x_2932_;
}
v___jp_2933_:
{
lean_object* v___x_2934_; lean_object* v_a_2935_; lean_object* v___x_2936_; uint8_t v___x_2937_; 
v___x_2934_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__5___redArg(v_a_2893_);
v_a_2935_ = lean_ctor_get(v___x_2934_, 0);
lean_inc(v_a_2935_);
lean_dec_ref(v___x_2934_);
v___x_2936_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2937_ = l_Lean_Option_get___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__6(v_options_2896_, v___x_2936_);
if (v___x_2937_ == 0)
{
lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2938_ = lean_io_mono_nanos_now();
v___x_2939_ = l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4(v_candidate_2889_, v_t_2887_, v_s_2888_, v___x_2899_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v_a_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2947_; 
v_a_2940_ = lean_ctor_get(v___x_2939_, 0);
v_isSharedCheck_2947_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_2947_ == 0)
{
v___x_2942_ = v___x_2939_;
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_a_2940_);
lean_dec(v___x_2939_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2945_; 
if (v_isShared_2943_ == 0)
{
lean_ctor_set_tag(v___x_2942_, 1);
v___x_2945_ = v___x_2942_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v_a_2940_);
v___x_2945_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
v___y_2907_ = v_a_2935_;
v___y_2908_ = v___x_2938_;
v_a_2909_ = v___x_2945_;
goto v___jp_2906_;
}
}
}
else
{
lean_object* v_a_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2955_; 
v_a_2948_ = lean_ctor_get(v___x_2939_, 0);
v_isSharedCheck_2955_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2950_ = v___x_2939_;
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_a_2948_);
lean_dec(v___x_2939_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v___x_2953_; 
if (v_isShared_2951_ == 0)
{
lean_ctor_set_tag(v___x_2950_, 0);
v___x_2953_ = v___x_2950_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v_a_2948_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
v___y_2907_ = v_a_2935_;
v___y_2908_ = v___x_2938_;
v_a_2909_ = v___x_2953_;
goto v___jp_2906_;
}
}
}
}
else
{
lean_object* v___x_2956_; lean_object* v___x_2957_; 
v___x_2956_ = lean_io_get_num_heartbeats();
v___x_2957_ = l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4(v_candidate_2889_, v_t_2887_, v_s_2888_, v___x_2899_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_);
if (lean_obj_tag(v___x_2957_) == 0)
{
lean_object* v_a_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2965_; 
v_a_2958_ = lean_ctor_get(v___x_2957_, 0);
v_isSharedCheck_2965_ = !lean_is_exclusive(v___x_2957_);
if (v_isSharedCheck_2965_ == 0)
{
v___x_2960_ = v___x_2957_;
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_a_2958_);
lean_dec(v___x_2957_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v___x_2963_; 
if (v_isShared_2961_ == 0)
{
lean_ctor_set_tag(v___x_2960_, 1);
v___x_2963_ = v___x_2960_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v_a_2958_);
v___x_2963_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
v___y_2922_ = v___x_2956_;
v___y_2923_ = v_a_2935_;
v_a_2924_ = v___x_2963_;
goto v___jp_2921_;
}
}
}
else
{
lean_object* v_a_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2973_; 
v_a_2966_ = lean_ctor_get(v___x_2957_, 0);
v_isSharedCheck_2973_ = !lean_is_exclusive(v___x_2957_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2968_ = v___x_2957_;
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_a_2966_);
lean_dec(v___x_2957_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2971_; 
if (v_isShared_2969_ == 0)
{
lean_ctor_set_tag(v___x_2968_, 0);
v___x_2971_ = v___x_2968_;
goto v_reusejp_2970_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v_a_2966_);
v___x_2971_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2970_;
}
v_reusejp_2970_:
{
v___y_2922_ = v___x_2956_;
v___y_2923_ = v_a_2935_;
v_a_2924_ = v___x_2971_;
goto v___jp_2921_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___boxed(lean_object* v_t_2977_, lean_object* v_s_2978_, lean_object* v_candidate_2979_, lean_object* v_a_2980_, lean_object* v_a_2981_, lean_object* v_a_2982_, lean_object* v_a_2983_, lean_object* v_a_2984_){
_start:
{
lean_object* v_res_2985_; 
v_res_2985_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate(v_t_2977_, v_s_2978_, v_candidate_2979_, v_a_2980_, v_a_2981_, v_a_2982_, v_a_2983_);
lean_dec(v_a_2983_);
lean_dec_ref(v_a_2982_);
lean_dec(v_a_2981_);
lean_dec_ref(v_a_2980_);
return v_res_2985_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1(lean_object* v_as_2986_, lean_object* v_as_x27_2987_, lean_object* v_b_2988_, lean_object* v_a_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_){
_start:
{
lean_object* v___x_2995_; 
v___x_2995_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg(v_as_x27_2987_, v_b_2988_, v___y_2990_, v___y_2991_, v___y_2992_, v___y_2993_);
return v___x_2995_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___boxed(lean_object* v_as_2996_, lean_object* v_as_x27_2997_, lean_object* v_b_2998_, lean_object* v_a_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_){
_start:
{
lean_object* v_res_3005_; 
v_res_3005_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1(v_as_2996_, v_as_x27_2997_, v_b_2998_, v_a_2999_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_3002_);
lean_dec(v___y_3001_);
lean_dec_ref(v___y_3000_);
lean_dec(v_as_x27_2997_);
lean_dec(v_as_2996_);
return v_res_3005_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__8(lean_object* v_00_u03b1_3006_, lean_object* v_x_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_){
_start:
{
lean_object* v___x_3013_; 
v___x_3013_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__8___redArg(v_x_3007_);
return v___x_3013_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__8___boxed(lean_object* v_00_u03b1_3014_, lean_object* v_x_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_){
_start:
{
lean_object* v_res_3021_; 
v_res_3021_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__7_spec__8(v_00_u03b1_3014_, v_x_3015_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_);
lean_dec(v___y_3019_);
lean_dec_ref(v___y_3018_);
lean_dec(v___y_3017_);
lean_dec_ref(v___y_3016_);
return v_res_3021_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_tryUnificationHints_spec__0(lean_object* v_t_3022_, lean_object* v_s_3023_, lean_object* v_as_3024_, size_t v_sz_3025_, size_t v_i_3026_, lean_object* v_b_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_){
_start:
{
uint8_t v___x_3033_; 
v___x_3033_ = lean_usize_dec_lt(v_i_3026_, v_sz_3025_);
if (v___x_3033_ == 0)
{
lean_object* v___x_3034_; 
lean_dec_ref(v_s_3023_);
lean_dec_ref(v_t_3022_);
v___x_3034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3034_, 0, v_b_3027_);
return v___x_3034_;
}
else
{
lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v_a_3037_; lean_object* v___x_3038_; 
lean_dec_ref(v_b_3027_);
v___x_3035_ = lean_box(0);
v___x_3036_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg___closed__0));
v_a_3037_ = lean_array_uget_borrowed(v_as_3024_, v_i_3026_);
lean_inc(v_a_3037_);
lean_inc_ref(v_s_3023_);
lean_inc_ref(v_t_3022_);
v___x_3038_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate(v_t_3022_, v_s_3023_, v_a_3037_, v___y_3028_, v___y_3029_, v___y_3030_, v___y_3031_);
if (lean_obj_tag(v___x_3038_) == 0)
{
lean_object* v_a_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3052_; 
v_a_3039_ = lean_ctor_get(v___x_3038_, 0);
v_isSharedCheck_3052_ = !lean_is_exclusive(v___x_3038_);
if (v_isSharedCheck_3052_ == 0)
{
v___x_3041_ = v___x_3038_;
v_isShared_3042_ = v_isSharedCheck_3052_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_a_3039_);
lean_dec(v___x_3038_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3052_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
uint8_t v___x_3043_; 
v___x_3043_ = lean_unbox(v_a_3039_);
if (v___x_3043_ == 0)
{
size_t v___x_3044_; size_t v___x_3045_; 
lean_del_object(v___x_3041_);
lean_dec(v_a_3039_);
v___x_3044_ = ((size_t)1ULL);
v___x_3045_ = lean_usize_add(v_i_3026_, v___x_3044_);
v_i_3026_ = v___x_3045_;
v_b_3027_ = v___x_3036_;
goto _start;
}
else
{
lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3050_; 
lean_dec_ref(v_s_3023_);
lean_dec_ref(v_t_3022_);
v___x_3047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3047_, 0, v_a_3039_);
v___x_3048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3048_, 0, v___x_3047_);
lean_ctor_set(v___x_3048_, 1, v___x_3035_);
if (v_isShared_3042_ == 0)
{
lean_ctor_set(v___x_3041_, 0, v___x_3048_);
v___x_3050_ = v___x_3041_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v___x_3048_);
v___x_3050_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
return v___x_3050_;
}
}
}
}
else
{
lean_object* v_a_3053_; lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3060_; 
lean_dec_ref(v_s_3023_);
lean_dec_ref(v_t_3022_);
v_a_3053_ = lean_ctor_get(v___x_3038_, 0);
v_isSharedCheck_3060_ = !lean_is_exclusive(v___x_3038_);
if (v_isSharedCheck_3060_ == 0)
{
v___x_3055_ = v___x_3038_;
v_isShared_3056_ = v_isSharedCheck_3060_;
goto v_resetjp_3054_;
}
else
{
lean_inc(v_a_3053_);
lean_dec(v___x_3038_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3060_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
lean_object* v___x_3058_; 
if (v_isShared_3056_ == 0)
{
v___x_3058_ = v___x_3055_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_a_3053_);
v___x_3058_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
return v___x_3058_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_tryUnificationHints_spec__0___boxed(lean_object* v_t_3061_, lean_object* v_s_3062_, lean_object* v_as_3063_, lean_object* v_sz_3064_, lean_object* v_i_3065_, lean_object* v_b_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_){
_start:
{
size_t v_sz_boxed_3072_; size_t v_i_boxed_3073_; lean_object* v_res_3074_; 
v_sz_boxed_3072_ = lean_unbox_usize(v_sz_3064_);
lean_dec(v_sz_3064_);
v_i_boxed_3073_ = lean_unbox_usize(v_i_3065_);
lean_dec(v_i_3065_);
v_res_3074_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_tryUnificationHints_spec__0(v_t_3061_, v_s_3062_, v_as_3063_, v_sz_boxed_3072_, v_i_boxed_3073_, v_b_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_);
lean_dec(v___y_3070_);
lean_dec_ref(v___y_3069_);
lean_dec(v___y_3068_);
lean_dec_ref(v___y_3067_);
lean_dec_ref(v_as_3063_);
return v_res_3074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_tryUnificationHints(lean_object* v_t_3075_, lean_object* v_s_3076_, lean_object* v_a_3077_, lean_object* v_a_3078_, lean_object* v_a_3079_, lean_object* v_a_3080_){
_start:
{
lean_object* v___y_3087_; lean_object* v___y_3088_; lean_object* v___y_3089_; lean_object* v___y_3090_; lean_object* v_toCold_3153_; lean_object* v_options_3154_; uint8_t v_hasTrace_3155_; 
v_toCold_3153_ = lean_ctor_get(v_a_3079_, 0);
v_options_3154_ = lean_ctor_get(v_toCold_3153_, 2);
v_hasTrace_3155_ = lean_ctor_get_uint8(v_options_3154_, sizeof(void*)*1);
if (v_hasTrace_3155_ == 0)
{
v___y_3087_ = v_a_3077_;
v___y_3088_ = v_a_3078_;
v___y_3089_ = v_a_3079_;
v___y_3090_ = v_a_3080_;
goto v___jp_3086_;
}
else
{
lean_object* v_inheritedTraceOptions_3156_; lean_object* v_cls_3157_; lean_object* v___x_3158_; uint8_t v___x_3159_; 
v_inheritedTraceOptions_3156_ = lean_ctor_get(v_toCold_3153_, 11);
v_cls_3157_ = ((lean_object*)(l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__2));
v___x_3158_ = lean_obj_once(&l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__7, &l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__7_once, _init_l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__7);
v___x_3159_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3156_, v_options_3154_, v___x_3158_);
if (v___x_3159_ == 0)
{
v___y_3087_ = v_a_3077_;
v___y_3088_ = v_a_3078_;
v___y_3089_ = v_a_3079_;
v___y_3090_ = v_a_3080_;
goto v___jp_3086_;
}
else
{
lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; 
lean_inc_ref(v_t_3075_);
v___x_3160_ = l_Lean_MessageData_ofExpr(v_t_3075_);
v___x_3161_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__5, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__5_once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate___lam__0___closed__5);
v___x_3162_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3160_);
lean_ctor_set(v___x_3162_, 1, v___x_3161_);
lean_inc_ref(v_s_3076_);
v___x_3163_ = l_Lean_MessageData_ofExpr(v_s_3076_);
v___x_3164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3162_);
lean_ctor_set(v___x_3164_, 1, v___x_3163_);
v___x_3165_ = l_Lean_addTrace___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__3(v_cls_3157_, v___x_3164_, v_a_3077_, v_a_3078_, v_a_3079_, v_a_3080_);
if (lean_obj_tag(v___x_3165_) == 0)
{
lean_dec_ref_known(v___x_3165_, 1);
v___y_3087_ = v_a_3077_;
v___y_3088_ = v_a_3078_;
v___y_3089_ = v_a_3079_;
v___y_3090_ = v_a_3080_;
goto v___jp_3086_;
}
else
{
lean_object* v_a_3166_; lean_object* v___x_3168_; uint8_t v_isShared_3169_; uint8_t v_isSharedCheck_3173_; 
lean_dec_ref(v_s_3076_);
lean_dec_ref(v_t_3075_);
v_a_3166_ = lean_ctor_get(v___x_3165_, 0);
v_isSharedCheck_3173_ = !lean_is_exclusive(v___x_3165_);
if (v_isSharedCheck_3173_ == 0)
{
v___x_3168_ = v___x_3165_;
v_isShared_3169_ = v_isSharedCheck_3173_;
goto v_resetjp_3167_;
}
else
{
lean_inc(v_a_3166_);
lean_dec(v___x_3165_);
v___x_3168_ = lean_box(0);
v_isShared_3169_ = v_isSharedCheck_3173_;
goto v_resetjp_3167_;
}
v_resetjp_3167_:
{
lean_object* v___x_3171_; 
if (v_isShared_3169_ == 0)
{
v___x_3171_ = v___x_3168_;
goto v_reusejp_3170_;
}
else
{
lean_object* v_reuseFailAlloc_3172_; 
v_reuseFailAlloc_3172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3172_, 0, v_a_3166_);
v___x_3171_ = v_reuseFailAlloc_3172_;
goto v_reusejp_3170_;
}
v_reusejp_3170_:
{
return v___x_3171_;
}
}
}
}
}
v___jp_3082_:
{
uint8_t v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; 
v___x_3083_ = 0;
v___x_3084_ = lean_box(v___x_3083_);
v___x_3085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3085_, 0, v___x_3084_);
return v___x_3085_;
}
v___jp_3086_:
{
lean_object* v___x_3091_; uint8_t v_unificationHints_3092_; 
v___x_3091_ = l_Lean_Meta_Context_config(v___y_3087_);
v_unificationHints_3092_ = lean_ctor_get_uint8(v___x_3091_, 5);
lean_dec_ref(v___x_3091_);
if (v_unificationHints_3092_ == 0)
{
lean_object* v___x_3093_; lean_object* v___x_3094_; 
lean_dec_ref(v_s_3076_);
lean_dec_ref(v_t_3075_);
v___x_3093_ = lean_box(v_unificationHints_3092_);
v___x_3094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3094_, 0, v___x_3093_);
return v___x_3094_;
}
else
{
uint8_t v___x_3095_; 
v___x_3095_ = l_Lean_Expr_isMVar(v_t_3075_);
if (v___x_3095_ == 0)
{
lean_object* v___x_3096_; 
v___x_3096_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_getRecordedHints(v___y_3089_, v___y_3090_);
if (lean_obj_tag(v___x_3096_) == 0)
{
lean_object* v_a_3097_; lean_object* v___x_3098_; lean_object* v_config_3099_; uint8_t v_trackZetaDelta_3100_; lean_object* v_zetaDeltaSet_3101_; lean_object* v_lctx_3102_; lean_object* v_localInstances_3103_; lean_object* v_defEqCtx_x3f_3104_; lean_object* v_synthPendingDepth_3105_; lean_object* v_customCanUnfoldPredicate_x3f_3106_; uint8_t v_univApprox_3107_; uint8_t v_inTypeClassResolution_3108_; uint8_t v_cacheInferType_3109_; uint64_t v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; 
v_a_3097_ = lean_ctor_get(v___x_3096_, 0);
lean_inc(v_a_3097_);
lean_dec_ref_known(v___x_3096_, 1);
v___x_3098_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config;
v_config_3099_ = lean_ctor_get(v___x_3098_, 0);
v_trackZetaDelta_3100_ = lean_ctor_get_uint8(v___y_3087_, sizeof(void*)*7);
v_zetaDeltaSet_3101_ = lean_ctor_get(v___y_3087_, 1);
v_lctx_3102_ = lean_ctor_get(v___y_3087_, 2);
v_localInstances_3103_ = lean_ctor_get(v___y_3087_, 3);
v_defEqCtx_x3f_3104_ = lean_ctor_get(v___y_3087_, 4);
v_synthPendingDepth_3105_ = lean_ctor_get(v___y_3087_, 5);
v_customCanUnfoldPredicate_x3f_3106_ = lean_ctor_get(v___y_3087_, 6);
v_univApprox_3107_ = lean_ctor_get_uint8(v___y_3087_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3108_ = lean_ctor_get_uint8(v___y_3087_, sizeof(void*)*7 + 2);
v_cacheInferType_3109_ = lean_ctor_get_uint8(v___y_3087_, sizeof(void*)*7 + 3);
v___x_3110_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v_config_3099_);
lean_inc_ref(v_config_3099_);
v___x_3111_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3111_, 0, v_config_3099_);
lean_ctor_set_uint64(v___x_3111_, sizeof(void*)*1, v___x_3110_);
lean_inc(v_customCanUnfoldPredicate_x3f_3106_);
lean_inc(v_synthPendingDepth_3105_);
lean_inc(v_defEqCtx_x3f_3104_);
lean_inc_ref(v_localInstances_3103_);
lean_inc_ref(v_lctx_3102_);
lean_inc(v_zetaDeltaSet_3101_);
v___x_3112_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3112_, 0, v___x_3111_);
lean_ctor_set(v___x_3112_, 1, v_zetaDeltaSet_3101_);
lean_ctor_set(v___x_3112_, 2, v_lctx_3102_);
lean_ctor_set(v___x_3112_, 3, v_localInstances_3103_);
lean_ctor_set(v___x_3112_, 4, v_defEqCtx_x3f_3104_);
lean_ctor_set(v___x_3112_, 5, v_synthPendingDepth_3105_);
lean_ctor_set(v___x_3112_, 6, v_customCanUnfoldPredicate_x3f_3106_);
lean_ctor_set_uint8(v___x_3112_, sizeof(void*)*7, v_trackZetaDelta_3100_);
lean_ctor_set_uint8(v___x_3112_, sizeof(void*)*7 + 1, v_univApprox_3107_);
lean_ctor_set_uint8(v___x_3112_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3108_);
lean_ctor_set_uint8(v___x_3112_, sizeof(void*)*7 + 3, v_cacheInferType_3109_);
lean_inc_ref(v_t_3075_);
v___x_3113_ = l_Lean_Meta_DiscrTree_getMatch___redArg(v_a_3097_, v_t_3075_, v___x_3112_, v___y_3088_, v___y_3089_, v___y_3090_);
lean_dec_ref_known(v___x_3112_, 7);
lean_dec(v_a_3097_);
if (lean_obj_tag(v___x_3113_) == 0)
{
lean_object* v_a_3114_; lean_object* v___x_3115_; size_t v_sz_3116_; size_t v___x_3117_; lean_object* v___x_3118_; 
v_a_3114_ = lean_ctor_get(v___x_3113_, 0);
lean_inc(v_a_3114_);
lean_dec_ref_known(v___x_3113_, 1);
v___x_3115_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__1___redArg___closed__0));
v_sz_3116_ = lean_array_size(v_a_3114_);
v___x_3117_ = ((size_t)0ULL);
v___x_3118_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_tryUnificationHints_spec__0(v_t_3075_, v_s_3076_, v_a_3114_, v_sz_3116_, v___x_3117_, v___x_3115_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_);
lean_dec(v_a_3114_);
if (lean_obj_tag(v___x_3118_) == 0)
{
lean_object* v_a_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3128_; 
v_a_3119_ = lean_ctor_get(v___x_3118_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3118_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3121_ = v___x_3118_;
v_isShared_3122_ = v_isSharedCheck_3128_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_a_3119_);
lean_dec(v___x_3118_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3128_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v_fst_3123_; 
v_fst_3123_ = lean_ctor_get(v_a_3119_, 0);
lean_inc(v_fst_3123_);
lean_dec(v_a_3119_);
if (lean_obj_tag(v_fst_3123_) == 0)
{
lean_del_object(v___x_3121_);
goto v___jp_3082_;
}
else
{
lean_object* v_val_3124_; lean_object* v___x_3126_; 
v_val_3124_ = lean_ctor_get(v_fst_3123_, 0);
lean_inc(v_val_3124_);
lean_dec_ref_known(v_fst_3123_, 1);
if (v_isShared_3122_ == 0)
{
lean_ctor_set(v___x_3121_, 0, v_val_3124_);
v___x_3126_ = v___x_3121_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_val_3124_);
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
else
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
v_a_3129_ = lean_ctor_get(v___x_3118_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3118_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3131_ = v___x_3118_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v___x_3118_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3134_; 
if (v_isShared_3132_ == 0)
{
v___x_3134_ = v___x_3131_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_a_3129_);
v___x_3134_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
return v___x_3134_;
}
}
}
}
else
{
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3144_; 
lean_dec_ref(v_s_3076_);
lean_dec_ref(v_t_3075_);
v_a_3137_ = lean_ctor_get(v___x_3113_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3113_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3139_ = v___x_3113_;
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3113_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3142_; 
if (v_isShared_3140_ == 0)
{
v___x_3142_ = v___x_3139_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3137_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
return v___x_3142_;
}
}
}
}
else
{
lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3152_; 
lean_dec_ref(v_s_3076_);
lean_dec_ref(v_t_3075_);
v_a_3145_ = lean_ctor_get(v___x_3096_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3096_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3147_ = v___x_3096_;
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3096_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3150_; 
if (v_isShared_3148_ == 0)
{
v___x_3150_ = v___x_3147_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_a_3145_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
}
}
else
{
lean_dec_ref(v_s_3076_);
lean_dec_ref(v_t_3075_);
goto v___jp_3082_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_tryUnificationHints___boxed(lean_object* v_t_3174_, lean_object* v_s_3175_, lean_object* v_a_3176_, lean_object* v_a_3177_, lean_object* v_a_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_){
_start:
{
lean_object* v_res_3181_; 
v_res_3181_ = l_Lean_Meta_tryUnificationHints(v_t_3174_, v_s_3175_, v_a_3176_, v_a_3177_, v_a_3178_, v_a_3179_);
lean_dec(v_a_3179_);
lean_dec_ref(v_a_3178_);
lean_dec(v_a_3177_);
lean_dec_ref(v_a_3176_);
return v_res_3181_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v___x_3182_ = lean_unsigned_to_nat(2674080740u);
v___x_3183_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_));
v___x_3184_ = l_Lean_Name_num___override(v___x_3183_, v___x_3182_);
return v___x_3184_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3185_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_));
v___x_3186_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_);
v___x_3187_ = l_Lean_Name_str___override(v___x_3186_, v___x_3185_);
return v___x_3187_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; 
v___x_3188_ = ((lean_object*)(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_));
v___x_3189_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_);
v___x_3190_ = l_Lean_Name_str___override(v___x_3189_, v___x_3188_);
return v___x_3190_;
}
}
static lean_object* _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; 
v___x_3191_ = lean_unsigned_to_nat(2u);
v___x_3192_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_);
v___x_3193_ = l_Lean_Name_num___override(v___x_3192_, v___x_3191_);
return v___x_3193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3195_; uint8_t v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___x_3195_ = ((lean_object*)(l_Lean_Meta_checkpointDefEq___at___00__private_Lean_Meta_UnificationHint_0__Lean_Meta_tryUnificationHints_tryCandidate_spec__4___closed__2));
v___x_3196_ = 0;
v___x_3197_ = lean_obj_once(&l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_, &l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_);
v___x_3198_ = l_Lean_registerTraceClass(v___x_3195_, v___x_3196_, v___x_3197_);
return v___x_3198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2____boxed(lean_object* v_a_3199_){
_start:
{
lean_object* v_res_3200_; 
v_res_3200_ = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_();
return v_res_3200_;
}
}
lean_object* runtime_initialize_Lean_Meta_SynthInstance(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_UnificationHint(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instInhabitedUnificationHints_default = _init_l_Lean_Meta_instInhabitedUnificationHints_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedUnificationHints_default);
l_Lean_Meta_instInhabitedUnificationHints = _init_l_Lean_Meta_instInhabitedUnificationHints();
lean_mark_persistent(l_Lean_Meta_instInhabitedUnificationHints);
l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config = _init_l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config();
lean_mark_persistent(l___private_Lean_Meta_UnificationHint_0__Lean_Meta_config);
res = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3890461423____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_unificationHintExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_unificationHintExtension);
lean_dec_ref(res);
res = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_3033092106____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_UnificationHint_0__Lean_Meta_initFn_00___x40_Lean_Meta_UnificationHint_2674080740____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_UnificationHint(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_SynthInstance(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_UnificationHint(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_UnificationHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_UnificationHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_UnificationHint(builtin);
}
#ifdef __cplusplus
}
#endif
