// Lean compiler output
// Module: Lean.Widget.UserWidget
// Imports: public import Lean.Elab.Eval public import Lean.Server.Rpc.RequestHandling import Lean.Language.Lean.Util
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
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConstCheck___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ofExcept___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* l_Lean_UInt64_fromJson_x3f(lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonRange_fromJson(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Lean_bignumToJson(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Lsp_instToJsonRange_toJson(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonPosition_fromJson(lean_object*);
lean_object* l_Lean_Elab_Info_pos_x3f(lean_object*);
lean_object* l_Lean_Elab_Info_tailPos_x3f(lean_object*);
lean_object* l_Lean_FileMap_utf8PosToLspPos(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_add___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_DTreeMap_Internal_Impl_erase___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalExpr_x27___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Lean_FileMap_lspPosToUtf8Pos(lean_object*, lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_endPos(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_env(lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Server_RequestM_runTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestM_withWaitFindSnap___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
extern lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_builtinRpcProcedures;
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Prod_map___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_Lean_Server_RequestM_mapTaskCheap___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Elab_InfoTree_deepestNodes___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_Range_toLspRange(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestError_ofIoError(lean_object*);
lean_object* l_Lean_Language_Lean_findInfoTreeAtPos(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Server_RequestM_mapTaskCostly___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonPosition_toJson(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_ToExpr_0__Lean_Name_toExprAux(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_declareBuiltin(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Attribute_Builtin_ensureNoArgs(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
uint64_t lean_string_hash(lean_object*);
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__0 = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__0_value;
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Widget"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__1 = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__1_value;
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Module"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__2 = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__2_value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__2_value),LEAN_SCALAR_PTR_LITERAL(222, 167, 125, 136, 228, 207, 28, 37)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__3 = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "WidgetInstance"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe___closed__0 = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe___closed__0_value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 26, 248, 187, 7, 143, 98, 88)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe___closed__1 = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Widget_instToModuleModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Widget_instToModuleModule___closed__0 = (const lean_object*)&l_Lean_Widget_instToModuleModule___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instToModuleModule = (const lean_object*)&l_Lean_Widget_instToModuleModule___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2402277489____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2402277489____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_builtinModulesRef;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0___redArg(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addBuiltinModule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addBuiltinModule___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__1_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__1_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(238, 115, 46, 200, 151, 151, 185, 65)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UserWidget"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(121, 103, 214, 126, 13, 168, 26, 227)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(92, 251, 38, 1, 61, 247, 222, 51)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 50, 155, 99, 229, 150, 16, 192)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 81, 65, 205, 201, 62, 183, 195)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "moduleRegistry"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 46, 162, 28, 144, 98, 40, 33)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_moduleRegistry;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___redArg(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5_spec__8___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__3;
static lean_once_cell_t l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__4;
static lean_once_cell_t l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid attribute scope: Attribute `["};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "]` must be global, not `"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__5;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__6_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__7 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__7_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__8 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__10___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "addBuiltinModule"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "A widget module with the same hash (JS source code) was already registered at "};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__5_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ToModule"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__5_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__5_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__6_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toModule"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__6_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__6_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__7_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "A builtin widget module with the same hash (JS source code) was already registered."};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__7_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__7_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__8_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__8_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_;
static const lean_array_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__5_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__5_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__5_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__6_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__6_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__7_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__7_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__8_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__8_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__9_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__9_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__10_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__10_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "widgetModuleAttrImpl"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(43, 203, 59, 214, 15, 221, 203, 217)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "Registers a widget module. Its type must implement Lean.Widget.ToModule."};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "(builtin) "};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "builtin_widget_module"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(247, 42, 123, 194, 197, 140, 191, 110)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "widget_module"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(127, 72, 138, 198, 227, 75, 129, 42)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_widgetModuleAttrImpl;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Widget_instToJsonGetWidgetSourceParams_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hash"};
static const lean_object* l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__0 = (const lean_object*)&l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__0_value;
static const lean_string_object l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pos"};
static const lean_object* l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__1 = (const lean_object*)&l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__1_value;
static const lean_array_object l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__2 = (const lean_object*)&l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Widget_instToJsonGetWidgetSourceParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instToJsonGetWidgetSourceParams___closed__0 = (const lean_object*)&l_Lean_Widget_instToJsonGetWidgetSourceParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instToJsonGetWidgetSourceParams = (const lean_object*)&l_Lean_Widget_instToJsonGetWidgetSourceParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "GetWidgetSourceParams"};
static const lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(235, 36, 203, 156, 237, 33, 76, 231)}};
static const lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__2;
static lean_once_cell_t l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__3;
static const lean_ctor_object l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 103, 194, 67, 121, 216, 187, 106)}};
static const lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__4 = (const lean_object*)&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__5;
static lean_once_cell_t l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__6;
static const lean_string_object l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__7 = (const lean_object*)&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__7_value;
static lean_once_cell_t l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__8;
static const lean_ctor_object l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(175, 67, 188, 228, 198, 126, 180, 88)}};
static const lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__9 = (const lean_object*)&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__9_value;
static lean_once_cell_t l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__10;
static lean_once_cell_t l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__11;
static lean_once_cell_t l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__12;
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Widget_instFromJsonGetWidgetSourceParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams___closed__0 = (const lean_object*)&l_Lean_Widget_instFromJsonGetWidgetSourceParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams = (const lean_object*)&l_Lean_Widget_instFromJsonGetWidgetSourceParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instInhabitedWidgetSource_default = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instInhabitedWidgetSource = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___closed__0_value;
static const lean_string_object l_Lean_Widget_instToJsonWidgetSource_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "sourcetext"};
static const lean_object* l_Lean_Widget_instToJsonWidgetSource_toJson___closed__0 = (const lean_object*)&l_Lean_Widget_instToJsonWidgetSource_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonWidgetSource_toJson(lean_object*);
static const lean_closure_object l_Lean_Widget_instToJsonWidgetSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instToJsonWidgetSource_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instToJsonWidgetSource___closed__0 = (const lean_object*)&l_Lean_Widget_instToJsonWidgetSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instToJsonWidgetSource = (const lean_object*)&l_Lean_Widget_instToJsonWidgetSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonWidgetSource_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonWidgetSource_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "WidgetSource"};
static const lean_object* l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__0 = (const lean_object*)&l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(175, 228, 124, 26, 26, 173, 31, 40)}};
static const lean_object* l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__1 = (const lean_object*)&l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__2;
static lean_once_cell_t l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__3;
static const lean_ctor_object l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instToJsonWidgetSource_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(46, 49, 211, 208, 134, 118, 118, 141)}};
static const lean_object* l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__4 = (const lean_object*)&l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__5;
static lean_once_cell_t l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__6;
static lean_once_cell_t l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__7;
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonWidgetSource_fromJson(lean_object*);
static const lean_closure_object l_Lean_Widget_instFromJsonWidgetSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instFromJsonWidgetSource_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instFromJsonWidgetSource___closed__0 = (const lean_object*)&l_Lean_Widget_instFromJsonWidgetSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instFromJsonWidgetSource = (const lean_object*)&l_Lean_Widget_instFromJsonWidgetSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Widget_getWidgetSource_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Widget_getWidgetSource_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_getWidgetSource_spec__1___redArg(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_getWidgetSource_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Widget_getWidgetSource___lam__0(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___lam__3(uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_getWidgetSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "No widget module with hash "};
static const lean_object* l_Lean_Widget_getWidgetSource___closed__0 = (const lean_object*)&l_Lean_Widget_getWidgetSource___closed__0_value;
static const lean_string_object l_Lean_Widget_getWidgetSource___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " registered"};
static const lean_object* l_Lean_Widget_getWidgetSource___closed__1 = (const lean_object*)&l_Lean_Widget_getWidgetSource___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_getWidgetSource_spec__1(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_getWidgetSource_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Cannot decode params in RPC call '"};
static const lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__0 = (const lean_object*)&l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__0_value;
static const lean_string_object l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__1 = (const lean_object*)&l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__1_value;
static const lean_string_object l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ")'\n"};
static const lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__2 = (const lean_object*)&l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__2_value;
static const lean_string_object l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Outdated RPC session"};
static const lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__3 = (const lean_object*)&l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__3_value;
static const lean_ctor_object l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(9, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__4 = (const lean_object*)&l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Failed to register builtin RPC call handler for '"};
static const lean_object* l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__0 = (const lean_object*)&l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__0_value;
static const lean_string_object l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__1 = (const lean_object*)&l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__1_value;
static const lean_string_object l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = ": only possible during initialization"};
static const lean_object* l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__2 = (const lean_object*)&l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__2_value;
static const lean_string_object l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = ": already registered"};
static const lean_object* l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__3 = (const lean_object*)&l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "getWidgetSource"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(119, 105, 173, 159, 3, 254, 1, 84)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_getWidgetSource___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_global_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_global_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_local_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_local_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__spec__0___redArg(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__1_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__1_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__1_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "panelWidgetsExt"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(45, 5, 183, 119, 198, 138, 143, 105)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_panelWidgetsExt;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Widget_evalPanelWidgets_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Widget_evalPanelWidgets_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Widget_evalPanelWidgets_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Widget_evalPanelWidgets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Widget_evalPanelWidgets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Widget_evalPanelWidgets___closed__0 = (const lean_object*)&l_Lean_Widget_evalPanelWidgets___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Widget_evalPanelWidgets(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_evalPanelWidgets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Widget_evalPanelWidgets_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Widget_evalPanelWidgets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetGlobal___redArg(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetGlobal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetGlobal(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetGlobal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetScoped___redArg(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetScoped___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetScoped(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetScoped___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Widget_addPanelWidgetLocal___redArg___lam__0(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___redArg___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Widget_addPanelWidgetLocal___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_addPanelWidgetLocal___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_addPanelWidgetLocal___redArg___closed__0 = (const lean_object*)&l_Lean_Widget_addPanelWidgetLocal___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___redArg___lam__1(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___redArg(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget(lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_WidgetInstance_ofHash(uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_WidgetInstance_ofHash___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_savePanelWidgetInfo(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_savePanelWidgetInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Widget_instInhabitedUserWidgetDefinition_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___closed__0_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___closed__0_value)}};
static const lean_object* l_Lean_Widget_instInhabitedUserWidgetDefinition_default___closed__0 = (const lean_object*)&l_Lean_Widget_instInhabitedUserWidgetDefinition_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instInhabitedUserWidgetDefinition_default = (const lean_object*)&l_Lean_Widget_instInhabitedUserWidgetDefinition_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instInhabitedUserWidgetDefinition = (const lean_object*)&l_Lean_Widget_instInhabitedUserWidgetDefinition_default___closed__0_value;
static const lean_string_object l_Lean_Widget_instToJsonUserWidgetDefinition_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_Widget_instToJsonUserWidgetDefinition_toJson___closed__0 = (const lean_object*)&l_Lean_Widget_instToJsonUserWidgetDefinition_toJson___closed__0_value;
static const lean_string_object l_Lean_Widget_instToJsonUserWidgetDefinition_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "javascript"};
static const lean_object* l_Lean_Widget_instToJsonUserWidgetDefinition_toJson___closed__1 = (const lean_object*)&l_Lean_Widget_instToJsonUserWidgetDefinition_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonUserWidgetDefinition_toJson(lean_object*);
static const lean_closure_object l_Lean_Widget_instToJsonUserWidgetDefinition___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instToJsonUserWidgetDefinition_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instToJsonUserWidgetDefinition___closed__0 = (const lean_object*)&l_Lean_Widget_instToJsonUserWidgetDefinition___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instToJsonUserWidgetDefinition = (const lean_object*)&l_Lean_Widget_instToJsonUserWidgetDefinition___closed__0_value;
static const lean_string_object l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "UserWidgetDefinition"};
static const lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__0 = (const lean_object*)&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(217, 148, 125, 199, 96, 60, 76, 213)}};
static const lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__1 = (const lean_object*)&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__2;
static lean_once_cell_t l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__3;
static const lean_ctor_object l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instToJsonUserWidgetDefinition_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__4 = (const lean_object*)&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__5;
static lean_once_cell_t l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__6;
static lean_once_cell_t l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__7;
static const lean_ctor_object l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instToJsonUserWidgetDefinition_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(124, 118, 184, 62, 15, 192, 226, 192)}};
static const lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__8 = (const lean_object*)&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__9;
static lean_once_cell_t l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__10;
static lean_once_cell_t l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__11;
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson(lean_object*);
static const lean_closure_object l_Lean_Widget_instFromJsonUserWidgetDefinition___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition___closed__0 = (const lean_object*)&l_Lean_Widget_instFromJsonUserWidgetDefinition___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition = (const lean_object*)&l_Lean_Widget_instFromJsonUserWidgetDefinition___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Widget_instToModuleUserWidgetDefinition___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instToModuleUserWidgetDefinition___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Widget_instToModuleUserWidgetDefinition___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instToModuleUserWidgetDefinition___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instToModuleUserWidgetDefinition___closed__0 = (const lean_object*)&l_Lean_Widget_instToModuleUserWidgetDefinition___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instToModuleUserWidgetDefinition = (const lean_object*)&l_Lean_Widget_instToModuleUserWidgetDefinition___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_stringToMessageData, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg___closed__0 = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_widgetInfosAt_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_widgetInfosAt_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_widgetInfosAt_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__1_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "javascriptHash"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "props"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "range"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__value;
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_(lean_object*);
static const lean_closure_object l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_25__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_25_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_25__value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_25_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_25__value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_42__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_42__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_42_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_42____boxed(lean_object*);
static const lean_closure_object l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_48__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_42____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_48_ = (const lean_object*)&l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_48__value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_48_ = (const lean_object*)&l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_48__value;
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodablePanelWidgetInstance_enc_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodablePanelWidgetInstance_dec___redArg___lam__0_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodablePanelWidgetInstance_dec___redArg_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodablePanelWidgetInstance_dec_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodablePanelWidgetInstance_dec_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1____boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Widget_instRpcEncodablePanelWidgetInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instRpcEncodablePanelWidgetInstance_enc_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodablePanelWidgetInstance___closed__0 = (const lean_object*)&l_Lean_Widget_instRpcEncodablePanelWidgetInstance___closed__0_value;
static const lean_closure_object l_Lean_Widget_instRpcEncodablePanelWidgetInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instRpcEncodablePanelWidgetInstance_dec_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodablePanelWidgetInstance___closed__1 = (const lean_object*)&l_Lean_Widget_instRpcEncodablePanelWidgetInstance___closed__1_value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodablePanelWidgetInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instRpcEncodablePanelWidgetInstance___closed__0_value),((lean_object*)&l_Lean_Widget_instRpcEncodablePanelWidgetInstance___closed__1_value)}};
static const lean_object* l_Lean_Widget_instRpcEncodablePanelWidgetInstance___closed__2 = (const lean_object*)&l_Lean_Widget_instRpcEncodablePanelWidgetInstance___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instRpcEncodablePanelWidgetInstance = (const lean_object*)&l_Lean_Widget_instRpcEncodablePanelWidgetInstance___closed__2_value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "widgets"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_10_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_10__value;
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_10_(lean_object*);
static const lean_closure_object l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_15__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_10_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_15_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_15__value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_15_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_15__value;
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_32_(lean_object*);
static const lean_closure_object l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_38__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_32_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_38_ = (const lean_object*)&l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_38__value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_38_ = (const lean_object*)&l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_38__value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Widget_instRpcEncodableGetWidgetsResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableGetWidgetsResponse___closed__0 = (const lean_object*)&l_Lean_Widget_instRpcEncodableGetWidgetsResponse___closed__0_value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableGetWidgetsResponse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableGetWidgetsResponse___closed__1 = (const lean_object*)&l_Lean_Widget_instRpcEncodableGetWidgetsResponse___closed__1_value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableGetWidgetsResponse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instRpcEncodableGetWidgetsResponse___closed__0_value),((lean_object*)&l_Lean_Widget_instRpcEncodableGetWidgetsResponse___closed__1_value)}};
static const lean_object* l_Lean_Widget_instRpcEncodableGetWidgetsResponse___closed__2 = (const lean_object*)&l_Lean_Widget_instRpcEncodableGetWidgetsResponse___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instRpcEncodableGetWidgetsResponse = (const lean_object*)&l_Lean_Widget_instRpcEncodableGetWidgetsResponse___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_getWidgets_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_getWidgets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_getWidgets_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_getWidgets_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Widget_getWidgets___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Widget_getWidgets___lam__1___closed__0 = (const lean_object*)&l_Lean_Widget_getWidgets___lam__1___closed__0_value;
static const lean_array_object l_Lean_Widget_getWidgets___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Widget_getWidgets___lam__1___closed__1 = (const lean_object*)&l_Lean_Widget_getWidgets___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgets___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgets___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgets(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgets___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "getWidgets"};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(92, 94, 165, 187, 253, 193, 202, 121)}};
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_getWidgets___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe(lean_object* v_e_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_){
_start:
{
lean_object* v___x_14_; uint8_t v___x_15_; uint8_t v___x_16_; lean_object* v___x_17_; 
v___x_14_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__3));
v___x_15_ = 1;
v___x_16_ = 1;
v___x_17_ = l_Lean_Meta_evalExpr_x27___redArg(v___x_14_, v_e_8_, v___x_15_, v___x_16_, v_a_9_, v_a_10_, v_a_11_, v_a_12_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___boxed(lean_object* v_e_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe(v_e_18_, v_a_19_, v_a_20_, v_a_21_, v_a_22_);
lean_dec(v_a_22_);
lean_dec_ref(v_a_21_);
lean_dec(v_a_20_);
lean_dec_ref(v_a_19_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe(lean_object* v_e_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_){
_start:
{
lean_object* v___x_36_; uint8_t v___x_37_; uint8_t v___x_38_; lean_object* v___x_39_; 
v___x_36_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe___closed__1));
v___x_37_ = 1;
v___x_38_ = 1;
v___x_39_ = l_Lean_Meta_evalExpr_x27___redArg(v___x_36_, v_e_30_, v___x_37_, v___x_38_, v_a_31_, v_a_32_, v_a_33_, v_a_34_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe___boxed(lean_object* v_e_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe(v_e_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_);
lean_dec(v_a_44_);
lean_dec_ref(v_a_43_);
lean_dec(v_a_42_);
lean_dec_ref(v_a_41_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2402277489____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = lean_box(1);
v___x_51_ = lean_st_mk_ref(v___x_50_);
v___x_52_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2402277489____hygCtx___hyg_2____boxed(lean_object* v_a_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2402277489____hygCtx___hyg_2_();
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0___redArg(uint64_t v_k_55_, lean_object* v_v_56_, lean_object* v_t_57_){
_start:
{
if (lean_obj_tag(v_t_57_) == 0)
{
lean_object* v_size_58_; lean_object* v_k_59_; lean_object* v_v_60_; lean_object* v_l_61_; lean_object* v_r_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_346_; 
v_size_58_ = lean_ctor_get(v_t_57_, 0);
v_k_59_ = lean_ctor_get(v_t_57_, 1);
v_v_60_ = lean_ctor_get(v_t_57_, 2);
v_l_61_ = lean_ctor_get(v_t_57_, 3);
v_r_62_ = lean_ctor_get(v_t_57_, 4);
v_isSharedCheck_346_ = !lean_is_exclusive(v_t_57_);
if (v_isSharedCheck_346_ == 0)
{
v___x_64_ = v_t_57_;
v_isShared_65_ = v_isSharedCheck_346_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_r_62_);
lean_inc(v_l_61_);
lean_inc(v_v_60_);
lean_inc(v_k_59_);
lean_inc(v_size_58_);
lean_dec(v_t_57_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_346_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
uint64_t v___x_66_; uint8_t v___x_67_; 
v___x_66_ = lean_unbox_uint64(v_k_59_);
v___x_67_ = lean_uint64_dec_lt(v_k_55_, v___x_66_);
if (v___x_67_ == 0)
{
uint64_t v___x_68_; uint8_t v___x_69_; 
v___x_68_ = lean_unbox_uint64(v_k_59_);
v___x_69_ = lean_uint64_dec_eq(v_k_55_, v___x_68_);
if (v___x_69_ == 0)
{
lean_object* v_impl_70_; lean_object* v___x_71_; 
lean_dec(v_size_58_);
v_impl_70_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0___redArg(v_k_55_, v_v_56_, v_r_62_);
v___x_71_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_61_) == 0)
{
lean_object* v_size_72_; lean_object* v_size_73_; lean_object* v_k_74_; lean_object* v_v_75_; lean_object* v_l_76_; lean_object* v_r_77_; lean_object* v___x_78_; lean_object* v___x_79_; uint8_t v___x_80_; 
v_size_72_ = lean_ctor_get(v_l_61_, 0);
v_size_73_ = lean_ctor_get(v_impl_70_, 0);
v_k_74_ = lean_ctor_get(v_impl_70_, 1);
v_v_75_ = lean_ctor_get(v_impl_70_, 2);
v_l_76_ = lean_ctor_get(v_impl_70_, 3);
lean_inc(v_l_76_);
v_r_77_ = lean_ctor_get(v_impl_70_, 4);
v___x_78_ = lean_unsigned_to_nat(3u);
v___x_79_ = lean_nat_mul(v___x_78_, v_size_72_);
v___x_80_ = lean_nat_dec_lt(v___x_79_, v_size_73_);
lean_dec(v___x_79_);
if (v___x_80_ == 0)
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_84_; 
lean_dec(v_l_76_);
v___x_81_ = lean_nat_add(v___x_71_, v_size_72_);
v___x_82_ = lean_nat_add(v___x_81_, v_size_73_);
lean_dec(v___x_81_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 4, v_impl_70_);
lean_ctor_set(v___x_64_, 0, v___x_82_);
v___x_84_ = v___x_64_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_82_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v_k_59_);
lean_ctor_set(v_reuseFailAlloc_85_, 2, v_v_60_);
lean_ctor_set(v_reuseFailAlloc_85_, 3, v_l_61_);
lean_ctor_set(v_reuseFailAlloc_85_, 4, v_impl_70_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
return v___x_84_;
}
}
else
{
lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_149_; 
lean_inc(v_r_77_);
lean_inc(v_v_75_);
lean_inc(v_k_74_);
lean_inc(v_size_73_);
v_isSharedCheck_149_ = !lean_is_exclusive(v_impl_70_);
if (v_isSharedCheck_149_ == 0)
{
lean_object* v_unused_150_; lean_object* v_unused_151_; lean_object* v_unused_152_; lean_object* v_unused_153_; lean_object* v_unused_154_; 
v_unused_150_ = lean_ctor_get(v_impl_70_, 4);
lean_dec(v_unused_150_);
v_unused_151_ = lean_ctor_get(v_impl_70_, 3);
lean_dec(v_unused_151_);
v_unused_152_ = lean_ctor_get(v_impl_70_, 2);
lean_dec(v_unused_152_);
v_unused_153_ = lean_ctor_get(v_impl_70_, 1);
lean_dec(v_unused_153_);
v_unused_154_ = lean_ctor_get(v_impl_70_, 0);
lean_dec(v_unused_154_);
v___x_87_ = v_impl_70_;
v_isShared_88_ = v_isSharedCheck_149_;
goto v_resetjp_86_;
}
else
{
lean_dec(v_impl_70_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_149_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v_size_89_; lean_object* v_k_90_; lean_object* v_v_91_; lean_object* v_l_92_; lean_object* v_r_93_; lean_object* v_size_94_; lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; 
v_size_89_ = lean_ctor_get(v_l_76_, 0);
v_k_90_ = lean_ctor_get(v_l_76_, 1);
v_v_91_ = lean_ctor_get(v_l_76_, 2);
v_l_92_ = lean_ctor_get(v_l_76_, 3);
v_r_93_ = lean_ctor_get(v_l_76_, 4);
v_size_94_ = lean_ctor_get(v_r_77_, 0);
v___x_95_ = lean_unsigned_to_nat(2u);
v___x_96_ = lean_nat_mul(v___x_95_, v_size_94_);
v___x_97_ = lean_nat_dec_lt(v_size_89_, v___x_96_);
lean_dec(v___x_96_);
if (v___x_97_ == 0)
{
lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_125_; 
lean_inc(v_r_93_);
lean_inc(v_l_92_);
lean_inc(v_v_91_);
lean_inc(v_k_90_);
v_isSharedCheck_125_ = !lean_is_exclusive(v_l_76_);
if (v_isSharedCheck_125_ == 0)
{
lean_object* v_unused_126_; lean_object* v_unused_127_; lean_object* v_unused_128_; lean_object* v_unused_129_; lean_object* v_unused_130_; 
v_unused_126_ = lean_ctor_get(v_l_76_, 4);
lean_dec(v_unused_126_);
v_unused_127_ = lean_ctor_get(v_l_76_, 3);
lean_dec(v_unused_127_);
v_unused_128_ = lean_ctor_get(v_l_76_, 2);
lean_dec(v_unused_128_);
v_unused_129_ = lean_ctor_get(v_l_76_, 1);
lean_dec(v_unused_129_);
v_unused_130_ = lean_ctor_get(v_l_76_, 0);
lean_dec(v_unused_130_);
v___x_99_ = v_l_76_;
v_isShared_100_ = v_isSharedCheck_125_;
goto v_resetjp_98_;
}
else
{
lean_dec(v_l_76_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_125_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___y_104_; lean_object* v___y_105_; lean_object* v___y_106_; lean_object* v___y_115_; 
v___x_101_ = lean_nat_add(v___x_71_, v_size_72_);
v___x_102_ = lean_nat_add(v___x_101_, v_size_73_);
lean_dec(v_size_73_);
if (lean_obj_tag(v_l_92_) == 0)
{
lean_object* v_size_123_; 
v_size_123_ = lean_ctor_get(v_l_92_, 0);
lean_inc(v_size_123_);
v___y_115_ = v_size_123_;
goto v___jp_114_;
}
else
{
lean_object* v___x_124_; 
v___x_124_ = lean_unsigned_to_nat(0u);
v___y_115_ = v___x_124_;
goto v___jp_114_;
}
v___jp_103_:
{
lean_object* v___x_107_; lean_object* v___x_109_; 
v___x_107_ = lean_nat_add(v___y_104_, v___y_106_);
lean_dec(v___y_106_);
lean_dec(v___y_104_);
if (v_isShared_100_ == 0)
{
lean_ctor_set(v___x_99_, 4, v_r_77_);
lean_ctor_set(v___x_99_, 3, v_r_93_);
lean_ctor_set(v___x_99_, 2, v_v_75_);
lean_ctor_set(v___x_99_, 1, v_k_74_);
lean_ctor_set(v___x_99_, 0, v___x_107_);
v___x_109_ = v___x_99_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v___x_107_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v_k_74_);
lean_ctor_set(v_reuseFailAlloc_113_, 2, v_v_75_);
lean_ctor_set(v_reuseFailAlloc_113_, 3, v_r_93_);
lean_ctor_set(v_reuseFailAlloc_113_, 4, v_r_77_);
v___x_109_ = v_reuseFailAlloc_113_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
lean_object* v___x_111_; 
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 4, v___x_109_);
lean_ctor_set(v___x_87_, 3, v___y_105_);
lean_ctor_set(v___x_87_, 2, v_v_91_);
lean_ctor_set(v___x_87_, 1, v_k_90_);
lean_ctor_set(v___x_87_, 0, v___x_102_);
v___x_111_ = v___x_87_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v___x_102_);
lean_ctor_set(v_reuseFailAlloc_112_, 1, v_k_90_);
lean_ctor_set(v_reuseFailAlloc_112_, 2, v_v_91_);
lean_ctor_set(v_reuseFailAlloc_112_, 3, v___y_105_);
lean_ctor_set(v_reuseFailAlloc_112_, 4, v___x_109_);
v___x_111_ = v_reuseFailAlloc_112_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
return v___x_111_;
}
}
}
v___jp_114_:
{
lean_object* v___x_116_; lean_object* v___x_118_; 
v___x_116_ = lean_nat_add(v___x_101_, v___y_115_);
lean_dec(v___y_115_);
lean_dec(v___x_101_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 4, v_l_92_);
lean_ctor_set(v___x_64_, 0, v___x_116_);
v___x_118_ = v___x_64_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v___x_116_);
lean_ctor_set(v_reuseFailAlloc_122_, 1, v_k_59_);
lean_ctor_set(v_reuseFailAlloc_122_, 2, v_v_60_);
lean_ctor_set(v_reuseFailAlloc_122_, 3, v_l_61_);
lean_ctor_set(v_reuseFailAlloc_122_, 4, v_l_92_);
v___x_118_ = v_reuseFailAlloc_122_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
lean_object* v___x_119_; 
v___x_119_ = lean_nat_add(v___x_71_, v_size_94_);
if (lean_obj_tag(v_r_93_) == 0)
{
lean_object* v_size_120_; 
v_size_120_ = lean_ctor_get(v_r_93_, 0);
lean_inc(v_size_120_);
v___y_104_ = v___x_119_;
v___y_105_ = v___x_118_;
v___y_106_ = v_size_120_;
goto v___jp_103_;
}
else
{
lean_object* v___x_121_; 
v___x_121_ = lean_unsigned_to_nat(0u);
v___y_104_ = v___x_119_;
v___y_105_ = v___x_118_;
v___y_106_ = v___x_121_;
goto v___jp_103_;
}
}
}
}
}
else
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_135_; 
lean_del_object(v___x_64_);
v___x_131_ = lean_nat_add(v___x_71_, v_size_72_);
v___x_132_ = lean_nat_add(v___x_131_, v_size_73_);
lean_dec(v_size_73_);
v___x_133_ = lean_nat_add(v___x_131_, v_size_89_);
lean_dec(v___x_131_);
lean_inc_ref(v_l_61_);
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 4, v_l_76_);
lean_ctor_set(v___x_87_, 3, v_l_61_);
lean_ctor_set(v___x_87_, 2, v_v_60_);
lean_ctor_set(v___x_87_, 1, v_k_59_);
lean_ctor_set(v___x_87_, 0, v___x_133_);
v___x_135_ = v___x_87_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_133_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_k_59_);
lean_ctor_set(v_reuseFailAlloc_148_, 2, v_v_60_);
lean_ctor_set(v_reuseFailAlloc_148_, 3, v_l_61_);
lean_ctor_set(v_reuseFailAlloc_148_, 4, v_l_76_);
v___x_135_ = v_reuseFailAlloc_148_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_142_; 
v_isSharedCheck_142_ = !lean_is_exclusive(v_l_61_);
if (v_isSharedCheck_142_ == 0)
{
lean_object* v_unused_143_; lean_object* v_unused_144_; lean_object* v_unused_145_; lean_object* v_unused_146_; lean_object* v_unused_147_; 
v_unused_143_ = lean_ctor_get(v_l_61_, 4);
lean_dec(v_unused_143_);
v_unused_144_ = lean_ctor_get(v_l_61_, 3);
lean_dec(v_unused_144_);
v_unused_145_ = lean_ctor_get(v_l_61_, 2);
lean_dec(v_unused_145_);
v_unused_146_ = lean_ctor_get(v_l_61_, 1);
lean_dec(v_unused_146_);
v_unused_147_ = lean_ctor_get(v_l_61_, 0);
lean_dec(v_unused_147_);
v___x_137_ = v_l_61_;
v_isShared_138_ = v_isSharedCheck_142_;
goto v_resetjp_136_;
}
else
{
lean_dec(v_l_61_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_142_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v___x_140_; 
if (v_isShared_138_ == 0)
{
lean_ctor_set(v___x_137_, 4, v_r_77_);
lean_ctor_set(v___x_137_, 3, v___x_135_);
lean_ctor_set(v___x_137_, 2, v_v_75_);
lean_ctor_set(v___x_137_, 1, v_k_74_);
lean_ctor_set(v___x_137_, 0, v___x_132_);
v___x_140_ = v___x_137_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v___x_132_);
lean_ctor_set(v_reuseFailAlloc_141_, 1, v_k_74_);
lean_ctor_set(v_reuseFailAlloc_141_, 2, v_v_75_);
lean_ctor_set(v_reuseFailAlloc_141_, 3, v___x_135_);
lean_ctor_set(v_reuseFailAlloc_141_, 4, v_r_77_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_155_; 
v_l_155_ = lean_ctor_get(v_impl_70_, 3);
lean_inc(v_l_155_);
if (lean_obj_tag(v_l_155_) == 0)
{
lean_object* v_r_156_; lean_object* v_k_157_; lean_object* v_v_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_181_; 
v_r_156_ = lean_ctor_get(v_impl_70_, 4);
v_k_157_ = lean_ctor_get(v_impl_70_, 1);
v_v_158_ = lean_ctor_get(v_impl_70_, 2);
v_isSharedCheck_181_ = !lean_is_exclusive(v_impl_70_);
if (v_isSharedCheck_181_ == 0)
{
lean_object* v_unused_182_; lean_object* v_unused_183_; 
v_unused_182_ = lean_ctor_get(v_impl_70_, 3);
lean_dec(v_unused_182_);
v_unused_183_ = lean_ctor_get(v_impl_70_, 0);
lean_dec(v_unused_183_);
v___x_160_ = v_impl_70_;
v_isShared_161_ = v_isSharedCheck_181_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_r_156_);
lean_inc(v_v_158_);
lean_inc(v_k_157_);
lean_dec(v_impl_70_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_181_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v_k_162_; lean_object* v_v_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_177_; 
v_k_162_ = lean_ctor_get(v_l_155_, 1);
v_v_163_ = lean_ctor_get(v_l_155_, 2);
v_isSharedCheck_177_ = !lean_is_exclusive(v_l_155_);
if (v_isSharedCheck_177_ == 0)
{
lean_object* v_unused_178_; lean_object* v_unused_179_; lean_object* v_unused_180_; 
v_unused_178_ = lean_ctor_get(v_l_155_, 4);
lean_dec(v_unused_178_);
v_unused_179_ = lean_ctor_get(v_l_155_, 3);
lean_dec(v_unused_179_);
v_unused_180_ = lean_ctor_get(v_l_155_, 0);
lean_dec(v_unused_180_);
v___x_165_ = v_l_155_;
v_isShared_166_ = v_isSharedCheck_177_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_v_163_);
lean_inc(v_k_162_);
lean_dec(v_l_155_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_177_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___x_167_; lean_object* v___x_169_; 
v___x_167_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_156_, 2);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 4, v_r_156_);
lean_ctor_set(v___x_165_, 3, v_r_156_);
lean_ctor_set(v___x_165_, 2, v_v_60_);
lean_ctor_set(v___x_165_, 1, v_k_59_);
lean_ctor_set(v___x_165_, 0, v___x_71_);
v___x_169_ = v___x_165_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v___x_71_);
lean_ctor_set(v_reuseFailAlloc_176_, 1, v_k_59_);
lean_ctor_set(v_reuseFailAlloc_176_, 2, v_v_60_);
lean_ctor_set(v_reuseFailAlloc_176_, 3, v_r_156_);
lean_ctor_set(v_reuseFailAlloc_176_, 4, v_r_156_);
v___x_169_ = v_reuseFailAlloc_176_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
lean_object* v___x_171_; 
lean_inc(v_r_156_);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 3, v_r_156_);
lean_ctor_set(v___x_160_, 0, v___x_71_);
v___x_171_ = v___x_160_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___x_71_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v_k_157_);
lean_ctor_set(v_reuseFailAlloc_175_, 2, v_v_158_);
lean_ctor_set(v_reuseFailAlloc_175_, 3, v_r_156_);
lean_ctor_set(v_reuseFailAlloc_175_, 4, v_r_156_);
v___x_171_ = v_reuseFailAlloc_175_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
lean_object* v___x_173_; 
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 4, v___x_171_);
lean_ctor_set(v___x_64_, 3, v___x_169_);
lean_ctor_set(v___x_64_, 2, v_v_163_);
lean_ctor_set(v___x_64_, 1, v_k_162_);
lean_ctor_set(v___x_64_, 0, v___x_167_);
v___x_173_ = v___x_64_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v___x_167_);
lean_ctor_set(v_reuseFailAlloc_174_, 1, v_k_162_);
lean_ctor_set(v_reuseFailAlloc_174_, 2, v_v_163_);
lean_ctor_set(v_reuseFailAlloc_174_, 3, v___x_169_);
lean_ctor_set(v_reuseFailAlloc_174_, 4, v___x_171_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
}
}
else
{
lean_object* v_r_184_; 
v_r_184_ = lean_ctor_get(v_impl_70_, 4);
lean_inc(v_r_184_);
if (lean_obj_tag(v_r_184_) == 0)
{
lean_object* v_k_185_; lean_object* v_v_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_197_; 
v_k_185_ = lean_ctor_get(v_impl_70_, 1);
v_v_186_ = lean_ctor_get(v_impl_70_, 2);
v_isSharedCheck_197_ = !lean_is_exclusive(v_impl_70_);
if (v_isSharedCheck_197_ == 0)
{
lean_object* v_unused_198_; lean_object* v_unused_199_; lean_object* v_unused_200_; 
v_unused_198_ = lean_ctor_get(v_impl_70_, 4);
lean_dec(v_unused_198_);
v_unused_199_ = lean_ctor_get(v_impl_70_, 3);
lean_dec(v_unused_199_);
v_unused_200_ = lean_ctor_get(v_impl_70_, 0);
lean_dec(v_unused_200_);
v___x_188_ = v_impl_70_;
v_isShared_189_ = v_isSharedCheck_197_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_v_186_);
lean_inc(v_k_185_);
lean_dec(v_impl_70_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_197_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_190_; lean_object* v___x_192_; 
v___x_190_ = lean_unsigned_to_nat(3u);
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 4, v_l_155_);
lean_ctor_set(v___x_188_, 2, v_v_60_);
lean_ctor_set(v___x_188_, 1, v_k_59_);
lean_ctor_set(v___x_188_, 0, v___x_71_);
v___x_192_ = v___x_188_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v___x_71_);
lean_ctor_set(v_reuseFailAlloc_196_, 1, v_k_59_);
lean_ctor_set(v_reuseFailAlloc_196_, 2, v_v_60_);
lean_ctor_set(v_reuseFailAlloc_196_, 3, v_l_155_);
lean_ctor_set(v_reuseFailAlloc_196_, 4, v_l_155_);
v___x_192_ = v_reuseFailAlloc_196_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
lean_object* v___x_194_; 
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 4, v_r_184_);
lean_ctor_set(v___x_64_, 3, v___x_192_);
lean_ctor_set(v___x_64_, 2, v_v_186_);
lean_ctor_set(v___x_64_, 1, v_k_185_);
lean_ctor_set(v___x_64_, 0, v___x_190_);
v___x_194_ = v___x_64_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_190_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v_k_185_);
lean_ctor_set(v_reuseFailAlloc_195_, 2, v_v_186_);
lean_ctor_set(v_reuseFailAlloc_195_, 3, v___x_192_);
lean_ctor_set(v_reuseFailAlloc_195_, 4, v_r_184_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
}
else
{
lean_object* v___x_201_; lean_object* v___x_203_; 
v___x_201_ = lean_unsigned_to_nat(2u);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 4, v_impl_70_);
lean_ctor_set(v___x_64_, 3, v_r_184_);
lean_ctor_set(v___x_64_, 0, v___x_201_);
v___x_203_ = v___x_64_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v___x_201_);
lean_ctor_set(v_reuseFailAlloc_204_, 1, v_k_59_);
lean_ctor_set(v_reuseFailAlloc_204_, 2, v_v_60_);
lean_ctor_set(v_reuseFailAlloc_204_, 3, v_r_184_);
lean_ctor_set(v_reuseFailAlloc_204_, 4, v_impl_70_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
}
}
else
{
lean_object* v___x_205_; lean_object* v___x_207_; 
lean_dec(v_v_60_);
lean_dec(v_k_59_);
v___x_205_ = lean_box_uint64(v_k_55_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 2, v_v_56_);
lean_ctor_set(v___x_64_, 1, v___x_205_);
v___x_207_ = v___x_64_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_size_58_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v___x_205_);
lean_ctor_set(v_reuseFailAlloc_208_, 2, v_v_56_);
lean_ctor_set(v_reuseFailAlloc_208_, 3, v_l_61_);
lean_ctor_set(v_reuseFailAlloc_208_, 4, v_r_62_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
else
{
lean_object* v_impl_209_; lean_object* v___x_210_; 
lean_dec(v_size_58_);
v_impl_209_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0___redArg(v_k_55_, v_v_56_, v_l_61_);
v___x_210_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_62_) == 0)
{
lean_object* v_size_211_; lean_object* v_size_212_; lean_object* v_k_213_; lean_object* v_v_214_; lean_object* v_l_215_; lean_object* v_r_216_; lean_object* v___x_217_; lean_object* v___x_218_; uint8_t v___x_219_; 
v_size_211_ = lean_ctor_get(v_r_62_, 0);
v_size_212_ = lean_ctor_get(v_impl_209_, 0);
v_k_213_ = lean_ctor_get(v_impl_209_, 1);
v_v_214_ = lean_ctor_get(v_impl_209_, 2);
v_l_215_ = lean_ctor_get(v_impl_209_, 3);
v_r_216_ = lean_ctor_get(v_impl_209_, 4);
lean_inc(v_r_216_);
v___x_217_ = lean_unsigned_to_nat(3u);
v___x_218_ = lean_nat_mul(v___x_217_, v_size_211_);
v___x_219_ = lean_nat_dec_lt(v___x_218_, v_size_212_);
lean_dec(v___x_218_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_223_; 
lean_dec(v_r_216_);
v___x_220_ = lean_nat_add(v___x_210_, v_size_212_);
v___x_221_ = lean_nat_add(v___x_220_, v_size_211_);
lean_dec(v___x_220_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 3, v_impl_209_);
lean_ctor_set(v___x_64_, 0, v___x_221_);
v___x_223_ = v___x_64_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v___x_221_);
lean_ctor_set(v_reuseFailAlloc_224_, 1, v_k_59_);
lean_ctor_set(v_reuseFailAlloc_224_, 2, v_v_60_);
lean_ctor_set(v_reuseFailAlloc_224_, 3, v_impl_209_);
lean_ctor_set(v_reuseFailAlloc_224_, 4, v_r_62_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
else
{
lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_290_; 
lean_inc(v_l_215_);
lean_inc(v_v_214_);
lean_inc(v_k_213_);
lean_inc(v_size_212_);
v_isSharedCheck_290_ = !lean_is_exclusive(v_impl_209_);
if (v_isSharedCheck_290_ == 0)
{
lean_object* v_unused_291_; lean_object* v_unused_292_; lean_object* v_unused_293_; lean_object* v_unused_294_; lean_object* v_unused_295_; 
v_unused_291_ = lean_ctor_get(v_impl_209_, 4);
lean_dec(v_unused_291_);
v_unused_292_ = lean_ctor_get(v_impl_209_, 3);
lean_dec(v_unused_292_);
v_unused_293_ = lean_ctor_get(v_impl_209_, 2);
lean_dec(v_unused_293_);
v_unused_294_ = lean_ctor_get(v_impl_209_, 1);
lean_dec(v_unused_294_);
v_unused_295_ = lean_ctor_get(v_impl_209_, 0);
lean_dec(v_unused_295_);
v___x_226_ = v_impl_209_;
v_isShared_227_ = v_isSharedCheck_290_;
goto v_resetjp_225_;
}
else
{
lean_dec(v_impl_209_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_290_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v_size_228_; lean_object* v_size_229_; lean_object* v_k_230_; lean_object* v_v_231_; lean_object* v_l_232_; lean_object* v_r_233_; lean_object* v___x_234_; lean_object* v___x_235_; uint8_t v___x_236_; 
v_size_228_ = lean_ctor_get(v_l_215_, 0);
v_size_229_ = lean_ctor_get(v_r_216_, 0);
v_k_230_ = lean_ctor_get(v_r_216_, 1);
v_v_231_ = lean_ctor_get(v_r_216_, 2);
v_l_232_ = lean_ctor_get(v_r_216_, 3);
v_r_233_ = lean_ctor_get(v_r_216_, 4);
v___x_234_ = lean_unsigned_to_nat(2u);
v___x_235_ = lean_nat_mul(v___x_234_, v_size_228_);
v___x_236_ = lean_nat_dec_lt(v_size_229_, v___x_235_);
lean_dec(v___x_235_);
if (v___x_236_ == 0)
{
lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_265_; 
lean_inc(v_r_233_);
lean_inc(v_l_232_);
lean_inc(v_v_231_);
lean_inc(v_k_230_);
v_isSharedCheck_265_ = !lean_is_exclusive(v_r_216_);
if (v_isSharedCheck_265_ == 0)
{
lean_object* v_unused_266_; lean_object* v_unused_267_; lean_object* v_unused_268_; lean_object* v_unused_269_; lean_object* v_unused_270_; 
v_unused_266_ = lean_ctor_get(v_r_216_, 4);
lean_dec(v_unused_266_);
v_unused_267_ = lean_ctor_get(v_r_216_, 3);
lean_dec(v_unused_267_);
v_unused_268_ = lean_ctor_get(v_r_216_, 2);
lean_dec(v_unused_268_);
v_unused_269_ = lean_ctor_get(v_r_216_, 1);
lean_dec(v_unused_269_);
v_unused_270_ = lean_ctor_get(v_r_216_, 0);
lean_dec(v_unused_270_);
v___x_238_ = v_r_216_;
v_isShared_239_ = v_isSharedCheck_265_;
goto v_resetjp_237_;
}
else
{
lean_dec(v_r_216_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_265_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___y_243_; lean_object* v___y_244_; lean_object* v___y_245_; lean_object* v___x_253_; lean_object* v___y_255_; 
v___x_240_ = lean_nat_add(v___x_210_, v_size_212_);
lean_dec(v_size_212_);
v___x_241_ = lean_nat_add(v___x_240_, v_size_211_);
lean_dec(v___x_240_);
v___x_253_ = lean_nat_add(v___x_210_, v_size_228_);
if (lean_obj_tag(v_l_232_) == 0)
{
lean_object* v_size_263_; 
v_size_263_ = lean_ctor_get(v_l_232_, 0);
lean_inc(v_size_263_);
v___y_255_ = v_size_263_;
goto v___jp_254_;
}
else
{
lean_object* v___x_264_; 
v___x_264_ = lean_unsigned_to_nat(0u);
v___y_255_ = v___x_264_;
goto v___jp_254_;
}
v___jp_242_:
{
lean_object* v___x_246_; lean_object* v___x_248_; 
v___x_246_ = lean_nat_add(v___y_243_, v___y_245_);
lean_dec(v___y_245_);
lean_dec(v___y_243_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 4, v_r_62_);
lean_ctor_set(v___x_238_, 3, v_r_233_);
lean_ctor_set(v___x_238_, 2, v_v_60_);
lean_ctor_set(v___x_238_, 1, v_k_59_);
lean_ctor_set(v___x_238_, 0, v___x_246_);
v___x_248_ = v___x_238_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v___x_246_);
lean_ctor_set(v_reuseFailAlloc_252_, 1, v_k_59_);
lean_ctor_set(v_reuseFailAlloc_252_, 2, v_v_60_);
lean_ctor_set(v_reuseFailAlloc_252_, 3, v_r_233_);
lean_ctor_set(v_reuseFailAlloc_252_, 4, v_r_62_);
v___x_248_ = v_reuseFailAlloc_252_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
lean_object* v___x_250_; 
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 4, v___x_248_);
lean_ctor_set(v___x_226_, 3, v___y_244_);
lean_ctor_set(v___x_226_, 2, v_v_231_);
lean_ctor_set(v___x_226_, 1, v_k_230_);
lean_ctor_set(v___x_226_, 0, v___x_241_);
v___x_250_ = v___x_226_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v___x_241_);
lean_ctor_set(v_reuseFailAlloc_251_, 1, v_k_230_);
lean_ctor_set(v_reuseFailAlloc_251_, 2, v_v_231_);
lean_ctor_set(v_reuseFailAlloc_251_, 3, v___y_244_);
lean_ctor_set(v_reuseFailAlloc_251_, 4, v___x_248_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
}
}
}
v___jp_254_:
{
lean_object* v___x_256_; lean_object* v___x_258_; 
v___x_256_ = lean_nat_add(v___x_253_, v___y_255_);
lean_dec(v___y_255_);
lean_dec(v___x_253_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 4, v_l_232_);
lean_ctor_set(v___x_64_, 3, v_l_215_);
lean_ctor_set(v___x_64_, 2, v_v_214_);
lean_ctor_set(v___x_64_, 1, v_k_213_);
lean_ctor_set(v___x_64_, 0, v___x_256_);
v___x_258_ = v___x_64_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_256_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v_k_213_);
lean_ctor_set(v_reuseFailAlloc_262_, 2, v_v_214_);
lean_ctor_set(v_reuseFailAlloc_262_, 3, v_l_215_);
lean_ctor_set(v_reuseFailAlloc_262_, 4, v_l_232_);
v___x_258_ = v_reuseFailAlloc_262_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
lean_object* v___x_259_; 
v___x_259_ = lean_nat_add(v___x_210_, v_size_211_);
if (lean_obj_tag(v_r_233_) == 0)
{
lean_object* v_size_260_; 
v_size_260_ = lean_ctor_get(v_r_233_, 0);
lean_inc(v_size_260_);
v___y_243_ = v___x_259_;
v___y_244_ = v___x_258_;
v___y_245_ = v_size_260_;
goto v___jp_242_;
}
else
{
lean_object* v___x_261_; 
v___x_261_ = lean_unsigned_to_nat(0u);
v___y_243_ = v___x_259_;
v___y_244_ = v___x_258_;
v___y_245_ = v___x_261_;
goto v___jp_242_;
}
}
}
}
}
else
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_276_; 
lean_del_object(v___x_64_);
v___x_271_ = lean_nat_add(v___x_210_, v_size_212_);
lean_dec(v_size_212_);
v___x_272_ = lean_nat_add(v___x_271_, v_size_211_);
lean_dec(v___x_271_);
v___x_273_ = lean_nat_add(v___x_210_, v_size_211_);
v___x_274_ = lean_nat_add(v___x_273_, v_size_229_);
lean_dec(v___x_273_);
lean_inc_ref(v_r_62_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 4, v_r_62_);
lean_ctor_set(v___x_226_, 3, v_r_216_);
lean_ctor_set(v___x_226_, 2, v_v_60_);
lean_ctor_set(v___x_226_, 1, v_k_59_);
lean_ctor_set(v___x_226_, 0, v___x_274_);
v___x_276_ = v___x_226_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v___x_274_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v_k_59_);
lean_ctor_set(v_reuseFailAlloc_289_, 2, v_v_60_);
lean_ctor_set(v_reuseFailAlloc_289_, 3, v_r_216_);
lean_ctor_set(v_reuseFailAlloc_289_, 4, v_r_62_);
v___x_276_ = v_reuseFailAlloc_289_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_283_; 
v_isSharedCheck_283_ = !lean_is_exclusive(v_r_62_);
if (v_isSharedCheck_283_ == 0)
{
lean_object* v_unused_284_; lean_object* v_unused_285_; lean_object* v_unused_286_; lean_object* v_unused_287_; lean_object* v_unused_288_; 
v_unused_284_ = lean_ctor_get(v_r_62_, 4);
lean_dec(v_unused_284_);
v_unused_285_ = lean_ctor_get(v_r_62_, 3);
lean_dec(v_unused_285_);
v_unused_286_ = lean_ctor_get(v_r_62_, 2);
lean_dec(v_unused_286_);
v_unused_287_ = lean_ctor_get(v_r_62_, 1);
lean_dec(v_unused_287_);
v_unused_288_ = lean_ctor_get(v_r_62_, 0);
lean_dec(v_unused_288_);
v___x_278_ = v_r_62_;
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
else
{
lean_dec(v_r_62_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 4, v___x_276_);
lean_ctor_set(v___x_278_, 3, v_l_215_);
lean_ctor_set(v___x_278_, 2, v_v_214_);
lean_ctor_set(v___x_278_, 1, v_k_213_);
lean_ctor_set(v___x_278_, 0, v___x_272_);
v___x_281_ = v___x_278_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_272_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_k_213_);
lean_ctor_set(v_reuseFailAlloc_282_, 2, v_v_214_);
lean_ctor_set(v_reuseFailAlloc_282_, 3, v_l_215_);
lean_ctor_set(v_reuseFailAlloc_282_, 4, v___x_276_);
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
}
}
else
{
lean_object* v_l_296_; 
v_l_296_ = lean_ctor_get(v_impl_209_, 3);
if (lean_obj_tag(v_l_296_) == 0)
{
lean_object* v_r_297_; lean_object* v_k_298_; lean_object* v_v_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_310_; 
lean_inc_ref(v_l_296_);
v_r_297_ = lean_ctor_get(v_impl_209_, 4);
v_k_298_ = lean_ctor_get(v_impl_209_, 1);
v_v_299_ = lean_ctor_get(v_impl_209_, 2);
v_isSharedCheck_310_ = !lean_is_exclusive(v_impl_209_);
if (v_isSharedCheck_310_ == 0)
{
lean_object* v_unused_311_; lean_object* v_unused_312_; 
v_unused_311_ = lean_ctor_get(v_impl_209_, 3);
lean_dec(v_unused_311_);
v_unused_312_ = lean_ctor_get(v_impl_209_, 0);
lean_dec(v_unused_312_);
v___x_301_ = v_impl_209_;
v_isShared_302_ = v_isSharedCheck_310_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_r_297_);
lean_inc(v_v_299_);
lean_inc(v_k_298_);
lean_dec(v_impl_209_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_310_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_303_; lean_object* v___x_305_; 
v___x_303_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_297_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 3, v_r_297_);
lean_ctor_set(v___x_301_, 2, v_v_60_);
lean_ctor_set(v___x_301_, 1, v_k_59_);
lean_ctor_set(v___x_301_, 0, v___x_210_);
v___x_305_ = v___x_301_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v___x_210_);
lean_ctor_set(v_reuseFailAlloc_309_, 1, v_k_59_);
lean_ctor_set(v_reuseFailAlloc_309_, 2, v_v_60_);
lean_ctor_set(v_reuseFailAlloc_309_, 3, v_r_297_);
lean_ctor_set(v_reuseFailAlloc_309_, 4, v_r_297_);
v___x_305_ = v_reuseFailAlloc_309_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
lean_object* v___x_307_; 
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 4, v___x_305_);
lean_ctor_set(v___x_64_, 3, v_l_296_);
lean_ctor_set(v___x_64_, 2, v_v_299_);
lean_ctor_set(v___x_64_, 1, v_k_298_);
lean_ctor_set(v___x_64_, 0, v___x_303_);
v___x_307_ = v___x_64_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v___x_303_);
lean_ctor_set(v_reuseFailAlloc_308_, 1, v_k_298_);
lean_ctor_set(v_reuseFailAlloc_308_, 2, v_v_299_);
lean_ctor_set(v_reuseFailAlloc_308_, 3, v_l_296_);
lean_ctor_set(v_reuseFailAlloc_308_, 4, v___x_305_);
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
else
{
lean_object* v_r_313_; 
v_r_313_ = lean_ctor_get(v_impl_209_, 4);
lean_inc(v_r_313_);
if (lean_obj_tag(v_r_313_) == 0)
{
lean_object* v_k_314_; lean_object* v_v_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_338_; 
lean_inc(v_l_296_);
v_k_314_ = lean_ctor_get(v_impl_209_, 1);
v_v_315_ = lean_ctor_get(v_impl_209_, 2);
v_isSharedCheck_338_ = !lean_is_exclusive(v_impl_209_);
if (v_isSharedCheck_338_ == 0)
{
lean_object* v_unused_339_; lean_object* v_unused_340_; lean_object* v_unused_341_; 
v_unused_339_ = lean_ctor_get(v_impl_209_, 4);
lean_dec(v_unused_339_);
v_unused_340_ = lean_ctor_get(v_impl_209_, 3);
lean_dec(v_unused_340_);
v_unused_341_ = lean_ctor_get(v_impl_209_, 0);
lean_dec(v_unused_341_);
v___x_317_ = v_impl_209_;
v_isShared_318_ = v_isSharedCheck_338_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_v_315_);
lean_inc(v_k_314_);
lean_dec(v_impl_209_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_338_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v_k_319_; lean_object* v_v_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_334_; 
v_k_319_ = lean_ctor_get(v_r_313_, 1);
v_v_320_ = lean_ctor_get(v_r_313_, 2);
v_isSharedCheck_334_ = !lean_is_exclusive(v_r_313_);
if (v_isSharedCheck_334_ == 0)
{
lean_object* v_unused_335_; lean_object* v_unused_336_; lean_object* v_unused_337_; 
v_unused_335_ = lean_ctor_get(v_r_313_, 4);
lean_dec(v_unused_335_);
v_unused_336_ = lean_ctor_get(v_r_313_, 3);
lean_dec(v_unused_336_);
v_unused_337_ = lean_ctor_get(v_r_313_, 0);
lean_dec(v_unused_337_);
v___x_322_ = v_r_313_;
v_isShared_323_ = v_isSharedCheck_334_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_v_320_);
lean_inc(v_k_319_);
lean_dec(v_r_313_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_334_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_324_; lean_object* v___x_326_; 
v___x_324_ = lean_unsigned_to_nat(3u);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 4, v_l_296_);
lean_ctor_set(v___x_322_, 3, v_l_296_);
lean_ctor_set(v___x_322_, 2, v_v_315_);
lean_ctor_set(v___x_322_, 1, v_k_314_);
lean_ctor_set(v___x_322_, 0, v___x_210_);
v___x_326_ = v___x_322_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_210_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v_k_314_);
lean_ctor_set(v_reuseFailAlloc_333_, 2, v_v_315_);
lean_ctor_set(v_reuseFailAlloc_333_, 3, v_l_296_);
lean_ctor_set(v_reuseFailAlloc_333_, 4, v_l_296_);
v___x_326_ = v_reuseFailAlloc_333_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
lean_object* v___x_328_; 
if (v_isShared_318_ == 0)
{
lean_ctor_set(v___x_317_, 4, v_l_296_);
lean_ctor_set(v___x_317_, 2, v_v_60_);
lean_ctor_set(v___x_317_, 1, v_k_59_);
lean_ctor_set(v___x_317_, 0, v___x_210_);
v___x_328_ = v___x_317_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_210_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_k_59_);
lean_ctor_set(v_reuseFailAlloc_332_, 2, v_v_60_);
lean_ctor_set(v_reuseFailAlloc_332_, 3, v_l_296_);
lean_ctor_set(v_reuseFailAlloc_332_, 4, v_l_296_);
v___x_328_ = v_reuseFailAlloc_332_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
lean_object* v___x_330_; 
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 4, v___x_328_);
lean_ctor_set(v___x_64_, 3, v___x_326_);
lean_ctor_set(v___x_64_, 2, v_v_320_);
lean_ctor_set(v___x_64_, 1, v_k_319_);
lean_ctor_set(v___x_64_, 0, v___x_324_);
v___x_330_ = v___x_64_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v___x_324_);
lean_ctor_set(v_reuseFailAlloc_331_, 1, v_k_319_);
lean_ctor_set(v_reuseFailAlloc_331_, 2, v_v_320_);
lean_ctor_set(v_reuseFailAlloc_331_, 3, v___x_326_);
lean_ctor_set(v_reuseFailAlloc_331_, 4, v___x_328_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
}
}
else
{
lean_object* v___x_342_; lean_object* v___x_344_; 
v___x_342_ = lean_unsigned_to_nat(2u);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 4, v_r_313_);
lean_ctor_set(v___x_64_, 3, v_impl_209_);
lean_ctor_set(v___x_64_, 0, v___x_342_);
v___x_344_ = v___x_64_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v___x_342_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v_k_59_);
lean_ctor_set(v_reuseFailAlloc_345_, 2, v_v_60_);
lean_ctor_set(v_reuseFailAlloc_345_, 3, v_impl_209_);
lean_ctor_set(v_reuseFailAlloc_345_, 4, v_r_313_);
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
}
}
}
else
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_347_ = lean_unsigned_to_nat(1u);
v___x_348_ = lean_box_uint64(v_k_55_);
v___x_349_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_349_, 0, v___x_347_);
lean_ctor_set(v___x_349_, 1, v___x_348_);
lean_ctor_set(v___x_349_, 2, v_v_56_);
lean_ctor_set(v___x_349_, 3, v_t_57_);
lean_ctor_set(v___x_349_, 4, v_t_57_);
return v___x_349_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0___redArg___boxed(lean_object* v_k_350_, lean_object* v_v_351_, lean_object* v_t_352_){
_start:
{
uint64_t v_k_boxed_353_; lean_object* v_res_354_; 
v_k_boxed_353_ = lean_unbox_uint64(v_k_350_);
lean_dec_ref(v_k_350_);
v_res_354_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0___redArg(v_k_boxed_353_, v_v_351_, v_t_352_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addBuiltinModule(lean_object* v_id_355_, lean_object* v_m_356_){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; uint64_t v_javascriptHash_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_358_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_builtinModulesRef;
v___x_359_ = lean_st_ref_take(v___x_358_);
v_javascriptHash_360_ = lean_ctor_get_uint64(v_m_356_, sizeof(void*)*1);
v___x_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_361_, 0, v_id_355_);
lean_ctor_set(v___x_361_, 1, v_m_356_);
v___x_362_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0___redArg(v_javascriptHash_360_, v___x_361_, v___x_359_);
v___x_363_ = lean_st_ref_put(v___x_358_, v___x_362_);
v___x_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addBuiltinModule___boxed(lean_object* v_id_365_, lean_object* v_m_366_, lean_object* v_a_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Lean_Widget_addBuiltinModule(v_id_365_, v_m_366_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0(lean_object* v_00_u03b2_369_, uint64_t v_k_370_, lean_object* v_v_371_, lean_object* v_t_372_, lean_object* v_hl_373_){
_start:
{
lean_object* v___x_374_; 
v___x_374_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0___redArg(v_k_370_, v_v_371_, v_t_372_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0___boxed(lean_object* v_00_u03b2_375_, lean_object* v_k_376_, lean_object* v_v_377_, lean_object* v_t_378_, lean_object* v_hl_379_){
_start:
{
uint64_t v_k_boxed_380_; lean_object* v_res_381_; 
v_k_boxed_380_ = lean_unbox_uint64(v_k_376_);
lean_dec_ref(v_k_376_);
v_res_381_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0(v_00_u03b2_375_, v_k_boxed_380_, v_v_377_, v_t_378_, v_hl_379_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_(lean_object* v_s_382_, lean_object* v_n_383_){
_start:
{
lean_object* v_fst_384_; lean_object* v_snd_385_; uint64_t v___x_386_; lean_object* v___x_387_; 
v_fst_384_ = lean_ctor_get(v_n_383_, 0);
lean_inc(v_fst_384_);
v_snd_385_ = lean_ctor_get(v_n_383_, 1);
lean_inc(v_snd_385_);
lean_dec_ref(v_n_383_);
v___x_386_ = lean_unbox_uint64(v_fst_384_);
lean_dec(v_fst_384_);
v___x_387_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0___redArg(v___x_386_, v_snd_385_, v_s_382_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__1_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_(lean_object* v_es_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = lean_array_mk(v_es_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_390_, size_t v_i_391_, size_t v_stop_392_, lean_object* v_b_393_){
_start:
{
uint8_t v___x_394_; 
v___x_394_ = lean_usize_dec_eq(v_i_391_, v_stop_392_);
if (v___x_394_ == 0)
{
lean_object* v___x_395_; lean_object* v_fst_396_; lean_object* v_snd_397_; uint64_t v___x_398_; lean_object* v___x_399_; size_t v___x_400_; size_t v___x_401_; 
v___x_395_ = lean_array_uget_borrowed(v_as_390_, v_i_391_);
v_fst_396_ = lean_ctor_get(v___x_395_, 0);
v_snd_397_ = lean_ctor_get(v___x_395_, 1);
v___x_398_ = lean_unbox_uint64(v_fst_396_);
lean_inc(v_snd_397_);
v___x_399_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0___redArg(v___x_398_, v_snd_397_, v_b_393_);
v___x_400_ = ((size_t)1ULL);
v___x_401_ = lean_usize_add(v_i_391_, v___x_400_);
v_i_391_ = v___x_401_;
v_b_393_ = v___x_399_;
goto _start;
}
else
{
return v_b_393_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_403_, lean_object* v_i_404_, lean_object* v_stop_405_, lean_object* v_b_406_){
_start:
{
size_t v_i_boxed_407_; size_t v_stop_boxed_408_; lean_object* v_res_409_; 
v_i_boxed_407_ = lean_unbox_usize(v_i_404_);
lean_dec(v_i_404_);
v_stop_boxed_408_ = lean_unbox_usize(v_stop_405_);
lean_dec(v_stop_405_);
v_res_409_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__0_spec__0(v_as_403_, v_i_boxed_407_, v_stop_boxed_408_, v_b_406_);
lean_dec_ref(v_as_403_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__0(lean_object* v_as_410_, size_t v_i_411_, size_t v_stop_412_, lean_object* v_b_413_){
_start:
{
uint8_t v___x_414_; 
v___x_414_ = lean_usize_dec_eq(v_i_411_, v_stop_412_);
if (v___x_414_ == 0)
{
lean_object* v___x_415_; lean_object* v_fst_416_; lean_object* v_snd_417_; uint64_t v___x_418_; lean_object* v___x_419_; size_t v___x_420_; size_t v___x_421_; lean_object* v___x_422_; 
v___x_415_ = lean_array_uget_borrowed(v_as_410_, v_i_411_);
v_fst_416_ = lean_ctor_get(v___x_415_, 0);
v_snd_417_ = lean_ctor_get(v___x_415_, 1);
v___x_418_ = lean_unbox_uint64(v_fst_416_);
lean_inc(v_snd_417_);
v___x_419_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0___redArg(v___x_418_, v_snd_417_, v_b_413_);
v___x_420_ = ((size_t)1ULL);
v___x_421_ = lean_usize_add(v_i_411_, v___x_420_);
v___x_422_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__0_spec__0(v_as_410_, v___x_421_, v_stop_412_, v___x_419_);
return v___x_422_;
}
else
{
return v_b_413_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__0___boxed(lean_object* v_as_423_, lean_object* v_i_424_, lean_object* v_stop_425_, lean_object* v_b_426_){
_start:
{
size_t v_i_boxed_427_; size_t v_stop_boxed_428_; lean_object* v_res_429_; 
v_i_boxed_427_ = lean_unbox_usize(v_i_424_);
lean_dec(v_i_424_);
v_stop_boxed_428_ = lean_unbox_usize(v_stop_425_);
lean_dec(v_stop_425_);
v_res_429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__0(v_as_423_, v_i_boxed_427_, v_stop_boxed_428_, v_b_426_);
lean_dec_ref(v_as_423_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__1(lean_object* v_as_430_, size_t v_i_431_, size_t v_stop_432_, lean_object* v_b_433_){
_start:
{
lean_object* v___y_435_; uint8_t v___x_439_; 
v___x_439_ = lean_usize_dec_eq(v_i_431_, v_stop_432_);
if (v___x_439_ == 0)
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_440_ = lean_unsigned_to_nat(0u);
v___x_441_ = lean_array_uget_borrowed(v_as_430_, v_i_431_);
v___x_442_ = lean_array_get_size(v___x_441_);
v___x_443_ = lean_nat_dec_lt(v___x_440_, v___x_442_);
if (v___x_443_ == 0)
{
v___y_435_ = v_b_433_;
goto v___jp_434_;
}
else
{
size_t v___x_444_; size_t v___x_445_; lean_object* v___x_446_; 
v___x_444_ = ((size_t)0ULL);
v___x_445_ = lean_usize_of_nat(v___x_442_);
v___x_446_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__0(v___x_441_, v___x_444_, v___x_445_, v_b_433_);
v___y_435_ = v___x_446_;
goto v___jp_434_;
}
}
else
{
return v_b_433_;
}
v___jp_434_:
{
size_t v___x_436_; size_t v___x_437_; 
v___x_436_ = ((size_t)1ULL);
v___x_437_ = lean_usize_add(v_i_431_, v___x_436_);
v_i_431_ = v___x_437_;
v_b_433_ = v___y_435_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__1___boxed(lean_object* v_as_447_, lean_object* v_i_448_, lean_object* v_stop_449_, lean_object* v_b_450_){
_start:
{
size_t v_i_boxed_451_; size_t v_stop_boxed_452_; lean_object* v_res_453_; 
v_i_boxed_451_ = lean_unbox_usize(v_i_448_);
lean_dec(v_i_448_);
v_stop_boxed_452_ = lean_unbox_usize(v_stop_449_);
lean_dec(v_stop_449_);
v_res_453_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__1(v_as_447_, v_i_boxed_451_, v_stop_boxed_452_, v_b_450_);
lean_dec_ref(v_as_447_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_(lean_object* v___x_454_, lean_object* v_xss_455_){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_456_ = lean_box(1);
v___x_457_ = lean_array_get_size(v_xss_455_);
v___x_458_ = lean_nat_dec_lt(v___x_454_, v___x_457_);
if (v___x_458_ == 0)
{
return v___x_456_;
}
else
{
size_t v___x_459_; size_t v___x_460_; lean_object* v___x_461_; 
v___x_459_ = ((size_t)0ULL);
v___x_460_ = lean_usize_of_nat(v___x_457_);
v___x_461_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2__spec__1(v_xss_455_, v___x_459_, v___x_460_, v___x_456_);
return v___x_461_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2____boxed(lean_object* v___x_462_, lean_object* v_xss_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_(v___x_462_, v_xss_463_);
lean_dec_ref(v_xss_463_);
lean_dec(v___x_462_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_));
v___x_506_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2____boxed(lean_object* v_a_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_();
return v_res_508_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_509_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_510_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
return v___x_511_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_512_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_513_ = lean_unsigned_to_nat(0u);
v___x_514_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
lean_ctor_set(v___x_514_, 2, v___x_513_);
lean_ctor_set(v___x_514_, 3, v___x_513_);
lean_ctor_set(v___x_514_, 4, v___x_512_);
lean_ctor_set(v___x_514_, 5, v___x_512_);
lean_ctor_set(v___x_514_, 6, v___x_512_);
lean_ctor_set(v___x_514_, 7, v___x_512_);
lean_ctor_set(v___x_514_, 8, v___x_512_);
lean_ctor_set(v___x_514_, 9, v___x_512_);
lean_ctor_set(v___x_514_, 10, v___x_512_);
return v___x_514_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_515_ = lean_unsigned_to_nat(32u);
v___x_516_ = lean_mk_empty_array_with_capacity(v___x_515_);
v___x_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
return v___x_517_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_518_ = ((size_t)5ULL);
v___x_519_ = lean_unsigned_to_nat(0u);
v___x_520_ = lean_unsigned_to_nat(32u);
v___x_521_ = lean_mk_empty_array_with_capacity(v___x_520_);
v___x_522_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_523_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_523_, 0, v___x_522_);
lean_ctor_set(v___x_523_, 1, v___x_521_);
lean_ctor_set(v___x_523_, 2, v___x_519_);
lean_ctor_set(v___x_523_, 3, v___x_519_);
lean_ctor_set_usize(v___x_523_, 4, v___x_518_);
return v___x_523_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_524_ = lean_box(1);
v___x_525_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_526_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_527_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
lean_ctor_set(v___x_527_, 1, v___x_525_);
lean_ctor_set(v___x_527_, 2, v___x_524_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
lean_object* v___x_532_; lean_object* v_toCold_533_; lean_object* v_env_534_; lean_object* v_options_535_; uint8_t v___x_536_; lean_object* v_env_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_532_ = lean_st_ref_get(v___y_530_);
v_toCold_533_ = lean_ctor_get(v___y_529_, 0);
v_env_534_ = lean_ctor_get(v___x_532_, 0);
lean_inc_ref(v_env_534_);
lean_dec(v___x_532_);
v_options_535_ = lean_ctor_get(v_toCold_533_, 2);
v___x_536_ = 0;
v_env_537_ = l_Lean_Environment_setRecordingDeps(v_env_534_, v___x_536_);
v___x_538_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_539_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__5);
lean_inc_ref(v_options_535_);
v___x_540_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_540_, 0, v_env_537_);
lean_ctor_set(v___x_540_, 1, v___x_538_);
lean_ctor_set(v___x_540_, 2, v___x_539_);
lean_ctor_set(v___x_540_, 3, v_options_535_);
v___x_541_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
lean_ctor_set(v___x_541_, 1, v_msgData_528_);
v___x_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0(v_msgData_543_, v___y_544_, v___y_545_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_548_, lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
lean_object* v_ref_552_; lean_object* v___x_553_; lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_562_; 
v_ref_552_ = lean_ctor_get(v___y_549_, 2);
v___x_553_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0(v_msg_548_, v___y_549_, v___y_550_);
v_a_554_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_562_ == 0)
{
v___x_556_ = v___x_553_;
v_isShared_557_ = v_isSharedCheck_562_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_553_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_562_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_558_; lean_object* v___x_560_; 
lean_inc(v_ref_552_);
v___x_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_558_, 0, v_ref_552_);
lean_ctor_set(v___x_558_, 1, v_a_554_);
if (v_isShared_557_ == 0)
{
lean_ctor_set_tag(v___x_556_, 1);
lean_ctor_set(v___x_556_, 0, v___x_558_);
v___x_560_ = v___x_556_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_558_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0___redArg(v_msg_563_, v___y_564_, v___y_565_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
return v_res_567_;
}
}
static lean_object* _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_569_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___x_570_ = l_Lean_stringToMessageData(v___x_569_);
return v___x_570_;
}
}
static lean_object* _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___x_573_ = l_Lean_stringToMessageData(v___x_572_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(lean_object* v_name_574_, lean_object* v_decl_575_, lean_object* v___y_576_, lean_object* v___y_577_){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_579_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_580_ = l_Lean_MessageData_ofName(v_name_574_);
v___x_581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_579_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_581_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = l_Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0___redArg(v___x_583_, v___y_576_, v___y_577_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2____boxed(lean_object* v_name_585_, lean_object* v_decl_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(v_name_585_, v_decl_586_, v___y_587_, v___y_588_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec(v_decl_586_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(lean_object* v_addEntryFn_591_, lean_object* v___x_592_, lean_object* v_s_593_){
_start:
{
lean_object* v_importedEntries_594_; lean_object* v_state_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_603_; 
v_importedEntries_594_ = lean_ctor_get(v_s_593_, 0);
v_state_595_ = lean_ctor_get(v_s_593_, 1);
v_isSharedCheck_603_ = !lean_is_exclusive(v_s_593_);
if (v_isSharedCheck_603_ == 0)
{
v___x_597_ = v_s_593_;
v_isShared_598_ = v_isSharedCheck_603_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_state_595_);
lean_inc(v_importedEntries_594_);
lean_dec(v_s_593_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_603_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v_state_599_; lean_object* v___x_601_; 
v_state_599_ = lean_apply_2(v_addEntryFn_591_, v_state_595_, v___x_592_);
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 1, v_state_599_);
v___x_601_ = v___x_597_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_importedEntries_594_);
lean_ctor_set(v_reuseFailAlloc_602_, 1, v_state_599_);
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
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___redArg(lean_object* v_t_604_, uint64_t v_k_605_){
_start:
{
if (lean_obj_tag(v_t_604_) == 0)
{
lean_object* v_k_606_; lean_object* v_v_607_; lean_object* v_l_608_; lean_object* v_r_609_; uint64_t v___x_610_; uint8_t v___x_611_; 
v_k_606_ = lean_ctor_get(v_t_604_, 1);
v_v_607_ = lean_ctor_get(v_t_604_, 2);
v_l_608_ = lean_ctor_get(v_t_604_, 3);
v_r_609_ = lean_ctor_get(v_t_604_, 4);
v___x_610_ = lean_unbox_uint64(v_k_606_);
v___x_611_ = lean_uint64_dec_lt(v_k_605_, v___x_610_);
if (v___x_611_ == 0)
{
uint64_t v___x_612_; uint8_t v___x_613_; 
v___x_612_ = lean_unbox_uint64(v_k_606_);
v___x_613_ = lean_uint64_dec_eq(v_k_605_, v___x_612_);
if (v___x_613_ == 0)
{
v_t_604_ = v_r_609_;
goto _start;
}
else
{
lean_object* v___x_615_; 
lean_inc(v_v_607_);
v___x_615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_615_, 0, v_v_607_);
return v___x_615_;
}
}
else
{
v_t_604_ = v_l_608_;
goto _start;
}
}
else
{
lean_object* v___x_617_; 
v___x_617_ = lean_box(0);
return v___x_617_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_t_618_, lean_object* v_k_619_){
_start:
{
uint64_t v_k_boxed_620_; lean_object* v_res_621_; 
v_k_boxed_620_ = lean_unbox_uint64(v_k_619_);
lean_dec_ref(v_k_619_);
v_res_621_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___redArg(v_t_618_, v_k_boxed_620_);
lean_dec(v_t_618_);
return v_res_621_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_623_, 0, v___x_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5_spec__8___redArg(){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5_spec__8___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5_spec__8___redArg___closed__0);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5_spec__8___redArg___boxed(lean_object* v___dummy_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5_spec__8___redArg();
return v_res_627_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
return v___x_629_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__0, &l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__0_once, _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__0);
v___x_631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
return v___x_631_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5_spec__8___redArg();
return v___x_632_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__0, &l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__0_once, _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__0);
v___x_634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
return v___x_634_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_635_ = lean_unsigned_to_nat(0u);
v___x_636_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__0, &l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__0_once, _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__0);
v___x_637_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
lean_ctor_set(v___x_637_, 2, v___x_635_);
return v___x_637_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__5(void){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_638_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__4, &l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__4_once, _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__4);
v___x_639_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__3, &l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__3_once, _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__3);
v___x_640_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__0, &l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__0_once, _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__0);
v___x_641_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2, &l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2_once, _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2);
v___x_642_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
lean_ctor_set(v___x_642_, 1, v___x_640_);
lean_ctor_set(v___x_642_, 2, v___x_639_);
lean_ctor_set(v___x_642_, 3, v___x_640_);
lean_ctor_set(v___x_642_, 4, v___x_640_);
lean_ctor_set(v___x_642_, 5, v___x_640_);
lean_ctor_set(v___x_642_, 6, v___x_640_);
lean_ctor_set(v___x_642_, 7, v___x_638_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg(lean_object* v_env_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
lean_object* v___x_647_; lean_object* v_nextMacroScope_648_; lean_object* v_ngen_649_; lean_object* v_auxDeclNGen_650_; lean_object* v_traceState_651_; lean_object* v_recordedDeps_652_; lean_object* v_messages_653_; lean_object* v_infoState_654_; lean_object* v_snapshotTasks_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_681_; 
v___x_647_ = lean_st_ref_take(v___y_645_);
v_nextMacroScope_648_ = lean_ctor_get(v___x_647_, 1);
v_ngen_649_ = lean_ctor_get(v___x_647_, 2);
v_auxDeclNGen_650_ = lean_ctor_get(v___x_647_, 3);
v_traceState_651_ = lean_ctor_get(v___x_647_, 4);
v_recordedDeps_652_ = lean_ctor_get(v___x_647_, 6);
v_messages_653_ = lean_ctor_get(v___x_647_, 7);
v_infoState_654_ = lean_ctor_get(v___x_647_, 8);
v_snapshotTasks_655_ = lean_ctor_get(v___x_647_, 9);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_681_ == 0)
{
lean_object* v_unused_682_; lean_object* v_unused_683_; 
v_unused_682_ = lean_ctor_get(v___x_647_, 5);
lean_dec(v_unused_682_);
v_unused_683_ = lean_ctor_get(v___x_647_, 0);
lean_dec(v_unused_683_);
v___x_657_ = v___x_647_;
v_isShared_658_ = v_isSharedCheck_681_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_snapshotTasks_655_);
lean_inc(v_infoState_654_);
lean_inc(v_messages_653_);
lean_inc(v_recordedDeps_652_);
lean_inc(v_traceState_651_);
lean_inc(v_auxDeclNGen_650_);
lean_inc(v_ngen_649_);
lean_inc(v_nextMacroScope_648_);
lean_dec(v___x_647_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_681_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_659_; lean_object* v___x_661_; 
v___x_659_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__1, &l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__1_once, _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__1);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 5, v___x_659_);
lean_ctor_set(v___x_657_, 0, v_env_643_);
v___x_661_ = v___x_657_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_env_643_);
lean_ctor_set(v_reuseFailAlloc_680_, 1, v_nextMacroScope_648_);
lean_ctor_set(v_reuseFailAlloc_680_, 2, v_ngen_649_);
lean_ctor_set(v_reuseFailAlloc_680_, 3, v_auxDeclNGen_650_);
lean_ctor_set(v_reuseFailAlloc_680_, 4, v_traceState_651_);
lean_ctor_set(v_reuseFailAlloc_680_, 5, v___x_659_);
lean_ctor_set(v_reuseFailAlloc_680_, 6, v_recordedDeps_652_);
lean_ctor_set(v_reuseFailAlloc_680_, 7, v_messages_653_);
lean_ctor_set(v_reuseFailAlloc_680_, 8, v_infoState_654_);
lean_ctor_set(v_reuseFailAlloc_680_, 9, v_snapshotTasks_655_);
v___x_661_ = v_reuseFailAlloc_680_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v_mctx_664_; lean_object* v_zetaDeltaFVarIds_665_; lean_object* v_postponed_666_; lean_object* v_diag_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_678_; 
v___x_662_ = lean_st_ref_put(v___y_645_, v___x_661_);
v___x_663_ = lean_st_ref_take(v___y_644_);
v_mctx_664_ = lean_ctor_get(v___x_663_, 0);
v_zetaDeltaFVarIds_665_ = lean_ctor_get(v___x_663_, 2);
v_postponed_666_ = lean_ctor_get(v___x_663_, 3);
v_diag_667_ = lean_ctor_get(v___x_663_, 4);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_678_ == 0)
{
lean_object* v_unused_679_; 
v_unused_679_ = lean_ctor_get(v___x_663_, 1);
lean_dec(v_unused_679_);
v___x_669_ = v___x_663_;
v_isShared_670_ = v_isSharedCheck_678_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_diag_667_);
lean_inc(v_postponed_666_);
lean_inc(v_zetaDeltaFVarIds_665_);
lean_inc(v_mctx_664_);
lean_dec(v___x_663_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_678_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_674_; 
v___x_671_ = lean_box(0);
v___x_672_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__5, &l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__5_once, _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__5);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 1, v___x_672_);
v___x_674_ = v___x_669_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_mctx_664_);
lean_ctor_set(v_reuseFailAlloc_677_, 1, v___x_672_);
lean_ctor_set(v_reuseFailAlloc_677_, 2, v_zetaDeltaFVarIds_665_);
lean_ctor_set(v_reuseFailAlloc_677_, 3, v_postponed_666_);
lean_ctor_set(v_reuseFailAlloc_677_, 4, v_diag_667_);
v___x_674_ = v_reuseFailAlloc_677_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_675_ = lean_st_ref_put(v___y_644_, v___x_674_);
v___x_676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_676_, 0, v___x_671_);
return v___x_676_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_env_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg(v_env_684_, v___y_685_, v___y_686_);
lean_dec(v___y_686_);
lean_dec(v___y_685_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6_spec__8(lean_object* v_msgData_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_){
_start:
{
lean_object* v___x_695_; lean_object* v_env_696_; uint8_t v___x_697_; lean_object* v_env_698_; lean_object* v___x_699_; lean_object* v_toCold_700_; lean_object* v_mctx_701_; lean_object* v_lctx_702_; lean_object* v_options_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_695_ = lean_st_ref_get(v___y_693_);
v_env_696_ = lean_ctor_get(v___x_695_, 0);
lean_inc_ref(v_env_696_);
lean_dec(v___x_695_);
v___x_697_ = 0;
v_env_698_ = l_Lean_Environment_setRecordingDeps(v_env_696_, v___x_697_);
v___x_699_ = lean_st_ref_get(v___y_691_);
v_toCold_700_ = lean_ctor_get(v___y_692_, 0);
v_mctx_701_ = lean_ctor_get(v___x_699_, 0);
lean_inc_ref(v_mctx_701_);
lean_dec(v___x_699_);
v_lctx_702_ = lean_ctor_get(v___y_690_, 2);
v_options_703_ = lean_ctor_get(v_toCold_700_, 2);
lean_inc_ref(v_options_703_);
lean_inc_ref(v_lctx_702_);
v___x_704_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_704_, 0, v_env_698_);
lean_ctor_set(v___x_704_, 1, v_mctx_701_);
lean_ctor_set(v___x_704_, 2, v_lctx_702_);
lean_ctor_set(v___x_704_, 3, v_options_703_);
v___x_705_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_705_, 0, v___x_704_);
lean_ctor_set(v___x_705_, 1, v_msgData_689_);
v___x_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_706_, 0, v___x_705_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6_spec__8___boxed(lean_object* v_msgData_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6_spec__8(v_msgData_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6___redArg(lean_object* v_msg_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v_ref_720_; lean_object* v___x_721_; lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_730_; 
v_ref_720_ = lean_ctor_get(v___y_717_, 2);
v___x_721_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6_spec__8(v_msg_714_, v___y_715_, v___y_716_, v___y_717_, v___y_718_);
v_a_722_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_730_ == 0)
{
v___x_724_ = v___x_721_;
v_isShared_725_ = v_isSharedCheck_730_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_721_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_730_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_726_; lean_object* v___x_728_; 
lean_inc(v_ref_720_);
v___x_726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_726_, 0, v_ref_720_);
lean_ctor_set(v___x_726_, 1, v_a_722_);
if (v_isShared_725_ == 0)
{
lean_ctor_set_tag(v___x_724_, 1);
lean_ctor_set(v___x_724_, 0, v___x_726_);
v___x_728_ = v___x_724_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v___x_726_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6___redArg___boxed(lean_object* v_msg_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l_Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6___redArg(v_msg_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
return v_res_737_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_739_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__0));
v___x_740_ = l_Lean_stringToMessageData(v___x_739_);
return v___x_740_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__2));
v___x_743_ = l_Lean_stringToMessageData(v___x_742_);
return v___x_743_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__4));
v___x_746_ = l_Lean_stringToMessageData(v___x_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg(lean_object* v_name_750_, uint8_t v_kind_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___y_763_; 
v___x_757_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__1);
v___x_758_ = l_Lean_MessageData_ofName(v_name_750_);
v___x_759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_759_, 0, v___x_757_);
lean_ctor_set(v___x_759_, 1, v___x_758_);
v___x_760_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__3);
v___x_761_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_761_, 0, v___x_759_);
lean_ctor_set(v___x_761_, 1, v___x_760_);
switch(v_kind_751_)
{
case 0:
{
lean_object* v___x_770_; 
v___x_770_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__6));
v___y_763_ = v___x_770_;
goto v___jp_762_;
}
case 1:
{
lean_object* v___x_771_; 
v___x_771_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__7));
v___y_763_ = v___x_771_;
goto v___jp_762_;
}
default: 
{
lean_object* v___x_772_; 
v___x_772_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__8));
v___y_763_ = v___x_772_;
goto v___jp_762_;
}
}
v___jp_762_:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
lean_inc_ref(v___y_763_);
v___x_764_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_764_, 0, v___y_763_);
v___x_765_ = l_Lean_MessageData_ofFormat(v___x_764_);
v___x_766_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_761_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___closed__5);
v___x_768_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_768_, 0, v___x_766_);
lean_ctor_set(v___x_768_, 1, v___x_767_);
v___x_769_ = l_Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6___redArg(v___x_768_, v___y_752_, v___y_753_, v___y_754_, v___y_755_);
return v___x_769_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg___boxed(lean_object* v_name_773_, lean_object* v_kind_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
uint8_t v_kind_boxed_780_; lean_object* v_res_781_; 
v_kind_boxed_780_ = lean_unbox(v_kind_774_);
v_res_781_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg(v_name_773_, v_kind_boxed_780_, v___y_775_, v___y_776_, v___y_777_, v___y_778_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
return v_res_781_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0(uint8_t v___x_790_, lean_object* v_x_791_){
_start:
{
if (lean_obj_tag(v_x_791_) == 1)
{
lean_object* v_pre_792_; 
v_pre_792_ = lean_ctor_get(v_x_791_, 0);
switch(lean_obj_tag(v_pre_792_))
{
case 1:
{
lean_object* v_pre_793_; 
v_pre_793_ = lean_ctor_get(v_pre_792_, 0);
switch(lean_obj_tag(v_pre_793_))
{
case 0:
{
lean_object* v_str_794_; lean_object* v_str_795_; lean_object* v___x_796_; uint8_t v___x_797_; 
v_str_794_ = lean_ctor_get(v_x_791_, 1);
v_str_795_ = lean_ctor_get(v_pre_792_, 1);
v___x_796_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__0));
v___x_797_ = lean_string_dec_eq(v_str_795_, v___x_796_);
if (v___x_797_ == 0)
{
lean_object* v___x_798_; uint8_t v___x_799_; 
v___x_798_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__1));
v___x_799_ = lean_string_dec_eq(v_str_795_, v___x_798_);
if (v___x_799_ == 0)
{
return v___x_799_;
}
else
{
lean_object* v___x_800_; uint8_t v___x_801_; 
v___x_800_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__2));
v___x_801_ = lean_string_dec_eq(v_str_794_, v___x_800_);
return v___x_801_;
}
}
else
{
lean_object* v___x_802_; uint8_t v___x_803_; 
v___x_802_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__3));
v___x_803_ = lean_string_dec_eq(v_str_794_, v___x_802_);
return v___x_803_;
}
}
case 1:
{
lean_object* v_pre_804_; 
v_pre_804_ = lean_ctor_get(v_pre_793_, 0);
if (lean_obj_tag(v_pre_804_) == 0)
{
lean_object* v_str_805_; lean_object* v_str_806_; lean_object* v_str_807_; lean_object* v___x_808_; uint8_t v___x_809_; 
v_str_805_ = lean_ctor_get(v_x_791_, 1);
v_str_806_ = lean_ctor_get(v_pre_792_, 1);
v_str_807_ = lean_ctor_get(v_pre_793_, 1);
v___x_808_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__4));
v___x_809_ = lean_string_dec_eq(v_str_807_, v___x_808_);
if (v___x_809_ == 0)
{
return v___x_809_;
}
else
{
lean_object* v___x_810_; uint8_t v___x_811_; 
v___x_810_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__5));
v___x_811_ = lean_string_dec_eq(v_str_806_, v___x_810_);
if (v___x_811_ == 0)
{
return v___x_811_;
}
else
{
lean_object* v___x_812_; uint8_t v___x_813_; 
v___x_812_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__6));
v___x_813_ = lean_string_dec_eq(v_str_805_, v___x_812_);
return v___x_813_;
}
}
}
else
{
return v___x_790_;
}
}
default: 
{
return v___x_790_;
}
}
}
case 0:
{
lean_object* v_str_814_; lean_object* v___x_815_; uint8_t v___x_816_; 
v_str_814_ = lean_ctor_get(v_x_791_, 1);
v___x_815_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___closed__7));
v___x_816_ = lean_string_dec_eq(v_str_814_, v___x_815_);
return v___x_816_;
}
default: 
{
return v___x_790_;
}
}
}
else
{
return v___x_790_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0___boxed(lean_object* v___x_817_, lean_object* v_x_818_){
_start:
{
uint8_t v___x_11904__boxed_819_; uint8_t v_res_820_; lean_object* v_r_821_; 
v___x_11904__boxed_819_ = lean_unbox(v___x_817_);
v_res_820_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___lam__0(v___x_11904__boxed_819_, v_x_818_);
lean_dec(v_x_818_);
v_r_821_ = lean_box(v_res_820_);
return v_r_821_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__10(lean_object* v_opts_822_, lean_object* v_opt_823_){
_start:
{
lean_object* v_name_824_; lean_object* v_defValue_825_; lean_object* v_map_826_; lean_object* v___x_827_; 
v_name_824_ = lean_ctor_get(v_opt_823_, 0);
v_defValue_825_ = lean_ctor_get(v_opt_823_, 1);
v_map_826_ = lean_ctor_get(v_opts_822_, 0);
v___x_827_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_826_, v_name_824_);
if (lean_obj_tag(v___x_827_) == 0)
{
uint8_t v___x_828_; 
v___x_828_ = lean_unbox(v_defValue_825_);
return v___x_828_;
}
else
{
lean_object* v_val_829_; 
v_val_829_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_val_829_);
lean_dec_ref_known(v___x_827_, 1);
if (lean_obj_tag(v_val_829_) == 1)
{
uint8_t v_v_830_; 
v_v_830_ = lean_ctor_get_uint8(v_val_829_, 0);
lean_dec_ref_known(v_val_829_, 0);
return v_v_830_;
}
else
{
uint8_t v___x_831_; 
lean_dec(v_val_829_);
v___x_831_ = lean_unbox(v_defValue_825_);
return v___x_831_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__10___boxed(lean_object* v_opts_832_, lean_object* v_opt_833_){
_start:
{
uint8_t v_res_834_; lean_object* v_r_835_; 
v_res_834_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__10(v_opts_832_, v_opt_833_);
lean_dec_ref(v_opt_833_);
lean_dec_ref(v_opts_832_);
v_r_835_ = lean_box(v_res_834_);
return v_r_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5(lean_object* v_ref_840_, lean_object* v_msgData_841_, uint8_t v_severity_842_, uint8_t v_isSilent_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_){
_start:
{
lean_object* v___y_850_; lean_object* v___y_851_; lean_object* v___y_852_; lean_object* v___y_853_; uint8_t v___y_854_; uint8_t v___y_855_; lean_object* v___y_856_; lean_object* v_toCold_857_; lean_object* v___y_858_; lean_object* v___y_887_; lean_object* v___y_888_; uint8_t v___y_889_; uint8_t v___y_890_; uint8_t v___y_891_; lean_object* v___y_892_; lean_object* v___y_893_; lean_object* v___y_894_; lean_object* v___y_914_; uint8_t v___y_915_; uint8_t v___y_916_; lean_object* v___y_917_; lean_object* v___y_918_; uint8_t v___y_919_; lean_object* v___y_920_; uint8_t v___y_924_; uint8_t v___x_941_; uint8_t v___x_942_; 
v___x_941_ = 2;
v___x_942_ = l_Lean_instBEqMessageSeverity_beq(v_severity_842_, v___x_941_);
if (v___x_942_ == 0)
{
goto v___jp_934_;
}
else
{
uint8_t v___x_943_; 
lean_inc_ref(v_msgData_841_);
v___x_943_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_841_);
if (v___x_943_ == 0)
{
goto v___jp_934_;
}
else
{
lean_object* v___x_944_; lean_object* v___x_945_; 
lean_dec_ref(v_msgData_841_);
v___x_944_ = lean_box(0);
v___x_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
return v___x_945_;
}
}
v___jp_849_:
{
lean_object* v_currNamespace_859_; lean_object* v_openDecls_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v_env_865_; lean_object* v_nextMacroScope_866_; lean_object* v_ngen_867_; lean_object* v_auxDeclNGen_868_; lean_object* v_traceState_869_; lean_object* v_cache_870_; lean_object* v_recordedDeps_871_; lean_object* v_messages_872_; lean_object* v_infoState_873_; lean_object* v_snapshotTasks_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_885_; 
v_currNamespace_859_ = lean_ctor_get(v_toCold_857_, 4);
v_openDecls_860_ = lean_ctor_get(v_toCold_857_, 5);
lean_inc(v_openDecls_860_);
lean_inc(v_currNamespace_859_);
v___x_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_861_, 0, v_currNamespace_859_);
lean_ctor_set(v___x_861_, 1, v_openDecls_860_);
v___x_862_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_862_, 0, v___x_861_);
lean_ctor_set(v___x_862_, 1, v___y_851_);
lean_inc_ref(v___y_850_);
lean_inc_ref(v___y_856_);
v___x_863_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_863_, 0, v___y_856_);
lean_ctor_set(v___x_863_, 1, v___y_852_);
lean_ctor_set(v___x_863_, 2, v___y_853_);
lean_ctor_set(v___x_863_, 3, v___y_850_);
lean_ctor_set(v___x_863_, 4, v___x_862_);
lean_ctor_set_uint8(v___x_863_, sizeof(void*)*5, v___y_854_);
lean_ctor_set_uint8(v___x_863_, sizeof(void*)*5 + 1, v___y_855_);
lean_ctor_set_uint8(v___x_863_, sizeof(void*)*5 + 2, v_isSilent_843_);
v___x_864_ = lean_st_ref_take(v___y_858_);
v_env_865_ = lean_ctor_get(v___x_864_, 0);
v_nextMacroScope_866_ = lean_ctor_get(v___x_864_, 1);
v_ngen_867_ = lean_ctor_get(v___x_864_, 2);
v_auxDeclNGen_868_ = lean_ctor_get(v___x_864_, 3);
v_traceState_869_ = lean_ctor_get(v___x_864_, 4);
v_cache_870_ = lean_ctor_get(v___x_864_, 5);
v_recordedDeps_871_ = lean_ctor_get(v___x_864_, 6);
v_messages_872_ = lean_ctor_get(v___x_864_, 7);
v_infoState_873_ = lean_ctor_get(v___x_864_, 8);
v_snapshotTasks_874_ = lean_ctor_get(v___x_864_, 9);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_885_ == 0)
{
v___x_876_ = v___x_864_;
v_isShared_877_ = v_isSharedCheck_885_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_snapshotTasks_874_);
lean_inc(v_infoState_873_);
lean_inc(v_messages_872_);
lean_inc(v_recordedDeps_871_);
lean_inc(v_cache_870_);
lean_inc(v_traceState_869_);
lean_inc(v_auxDeclNGen_868_);
lean_inc(v_ngen_867_);
lean_inc(v_nextMacroScope_866_);
lean_inc(v_env_865_);
lean_dec(v___x_864_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_885_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_881_; 
v___x_878_ = lean_box(0);
v___x_879_ = l_Lean_MessageLog_add(v___x_863_, v_messages_872_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 7, v___x_879_);
v___x_881_ = v___x_876_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_env_865_);
lean_ctor_set(v_reuseFailAlloc_884_, 1, v_nextMacroScope_866_);
lean_ctor_set(v_reuseFailAlloc_884_, 2, v_ngen_867_);
lean_ctor_set(v_reuseFailAlloc_884_, 3, v_auxDeclNGen_868_);
lean_ctor_set(v_reuseFailAlloc_884_, 4, v_traceState_869_);
lean_ctor_set(v_reuseFailAlloc_884_, 5, v_cache_870_);
lean_ctor_set(v_reuseFailAlloc_884_, 6, v_recordedDeps_871_);
lean_ctor_set(v_reuseFailAlloc_884_, 7, v___x_879_);
lean_ctor_set(v_reuseFailAlloc_884_, 8, v_infoState_873_);
lean_ctor_set(v_reuseFailAlloc_884_, 9, v_snapshotTasks_874_);
v___x_881_ = v_reuseFailAlloc_884_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = lean_st_ref_put(v___y_858_, v___x_881_);
v___x_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_883_, 0, v___x_878_);
return v___x_883_;
}
}
}
v___jp_886_:
{
lean_object* v_fileName_895_; lean_object* v_fileMap_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_912_; 
v_fileName_895_ = lean_ctor_get(v___y_892_, 0);
v_fileMap_896_ = lean_ctor_get(v___y_892_, 1);
v___x_897_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_841_);
v___x_898_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6_spec__8(v___x_897_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
v_a_899_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_912_ == 0)
{
v___x_901_ = v___x_898_;
v_isShared_902_ = v_isSharedCheck_912_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v___x_898_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_912_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
lean_inc_ref_n(v_fileMap_896_, 2);
v___x_903_ = l_Lean_FileMap_toPosition(v_fileMap_896_, v___y_893_);
lean_dec(v___y_893_);
v___x_904_ = l_Lean_FileMap_toPosition(v_fileMap_896_, v___y_894_);
lean_dec(v___y_894_);
v___x_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
v___x_906_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___closed__0));
if (v___y_890_ == 0)
{
lean_del_object(v___x_901_);
v___y_850_ = v___x_906_;
v___y_851_ = v_a_899_;
v___y_852_ = v___x_903_;
v___y_853_ = v___x_905_;
v___y_854_ = v___y_889_;
v___y_855_ = v___y_891_;
v___y_856_ = v_fileName_895_;
v_toCold_857_ = v___y_888_;
v___y_858_ = v___y_847_;
goto v___jp_849_;
}
else
{
uint8_t v___x_907_; 
lean_inc(v_a_899_);
lean_inc_ref(v___y_887_);
v___x_907_ = l_Lean_MessageData_hasTag(v___y_887_, v_a_899_);
if (v___x_907_ == 0)
{
lean_object* v___x_908_; lean_object* v___x_910_; 
lean_dec_ref_known(v___x_905_, 1);
lean_dec_ref(v___x_903_);
lean_dec(v_a_899_);
v___x_908_ = lean_box(0);
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 0, v___x_908_);
v___x_910_ = v___x_901_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v___x_908_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
else
{
lean_del_object(v___x_901_);
v___y_850_ = v___x_906_;
v___y_851_ = v_a_899_;
v___y_852_ = v___x_903_;
v___y_853_ = v___x_905_;
v___y_854_ = v___y_889_;
v___y_855_ = v___y_891_;
v___y_856_ = v_fileName_895_;
v_toCold_857_ = v___y_888_;
v___y_858_ = v___y_847_;
goto v___jp_849_;
}
}
}
}
v___jp_913_:
{
lean_object* v___x_921_; 
v___x_921_ = l_Lean_Syntax_getTailPos_x3f(v___y_918_, v___y_915_);
lean_dec(v___y_918_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_inc(v___y_920_);
v___y_887_ = v___y_914_;
v___y_888_ = v___y_917_;
v___y_889_ = v___y_915_;
v___y_890_ = v___y_916_;
v___y_891_ = v___y_919_;
v___y_892_ = v___y_917_;
v___y_893_ = v___y_920_;
v___y_894_ = v___y_920_;
goto v___jp_886_;
}
else
{
lean_object* v_val_922_; 
v_val_922_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_val_922_);
lean_dec_ref_known(v___x_921_, 1);
v___y_887_ = v___y_914_;
v___y_888_ = v___y_917_;
v___y_889_ = v___y_915_;
v___y_890_ = v___y_916_;
v___y_891_ = v___y_919_;
v___y_892_ = v___y_917_;
v___y_893_ = v___y_920_;
v___y_894_ = v_val_922_;
goto v___jp_886_;
}
}
v___jp_923_:
{
lean_object* v_toCold_925_; lean_object* v_ref_926_; uint8_t v_suppressElabErrors_927_; lean_object* v_ref_928_; uint8_t v___x_929_; lean_object* v___f_930_; lean_object* v___x_931_; 
v_toCold_925_ = lean_ctor_get(v___y_846_, 0);
v_ref_926_ = lean_ctor_get(v___y_846_, 2);
v_suppressElabErrors_927_ = lean_ctor_get_uint8(v___y_846_, sizeof(void*)*3 + 2);
v_ref_928_ = l_Lean_replaceRef(v_ref_840_, v_ref_926_);
v___x_929_ = 0;
v___f_930_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___closed__1));
v___x_931_ = l_Lean_Syntax_getPos_x3f(v_ref_928_, v___x_929_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v___x_932_; 
v___x_932_ = lean_unsigned_to_nat(0u);
v___y_914_ = v___f_930_;
v___y_915_ = v___x_929_;
v___y_916_ = v_suppressElabErrors_927_;
v___y_917_ = v_toCold_925_;
v___y_918_ = v_ref_928_;
v___y_919_ = v___y_924_;
v___y_920_ = v___x_932_;
goto v___jp_913_;
}
else
{
lean_object* v_val_933_; 
v_val_933_ = lean_ctor_get(v___x_931_, 0);
lean_inc(v_val_933_);
lean_dec_ref_known(v___x_931_, 1);
v___y_914_ = v___f_930_;
v___y_915_ = v___x_929_;
v___y_916_ = v_suppressElabErrors_927_;
v___y_917_ = v_toCold_925_;
v___y_918_ = v_ref_928_;
v___y_919_ = v___y_924_;
v___y_920_ = v_val_933_;
goto v___jp_913_;
}
}
v___jp_934_:
{
uint8_t v___x_935_; uint8_t v___x_936_; 
v___x_935_ = 1;
v___x_936_ = l_Lean_instBEqMessageSeverity_beq(v_severity_842_, v___x_935_);
if (v___x_936_ == 0)
{
v___y_924_ = v_severity_842_;
goto v___jp_923_;
}
else
{
lean_object* v___x_937_; lean_object* v___x_938_; uint8_t v___x_939_; 
v___x_937_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_846_);
v___x_938_ = l_Lean_warningAsError;
v___x_939_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__10(v___x_937_, v___x_938_);
lean_dec_ref(v___x_937_);
if (v___x_939_ == 0)
{
v___y_924_ = v_severity_842_;
goto v___jp_923_;
}
else
{
uint8_t v___x_940_; 
v___x_940_ = 2;
v___y_924_ = v___x_940_;
goto v___jp_923_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___boxed(lean_object* v_ref_946_, lean_object* v_msgData_947_, lean_object* v_severity_948_, lean_object* v_isSilent_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
uint8_t v_severity_boxed_955_; uint8_t v_isSilent_boxed_956_; lean_object* v_res_957_; 
v_severity_boxed_955_ = lean_unbox(v_severity_948_);
v_isSilent_boxed_956_ = lean_unbox(v_isSilent_949_);
v_res_957_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5(v_ref_946_, v_msgData_947_, v_severity_boxed_955_, v_isSilent_boxed_956_, v___y_950_, v___y_951_, v___y_952_, v___y_953_);
lean_dec(v___y_953_);
lean_dec_ref(v___y_952_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
lean_dec(v_ref_946_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4(lean_object* v_msgData_958_, uint8_t v_severity_959_, uint8_t v_isSilent_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
lean_object* v_ref_966_; lean_object* v___x_967_; 
v_ref_966_ = lean_ctor_get(v___y_963_, 2);
v___x_967_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5(v_ref_966_, v_msgData_958_, v_severity_959_, v_isSilent_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4___boxed(lean_object* v_msgData_968_, lean_object* v_severity_969_, lean_object* v_isSilent_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
uint8_t v_severity_boxed_976_; uint8_t v_isSilent_boxed_977_; lean_object* v_res_978_; 
v_severity_boxed_976_ = lean_unbox(v_severity_969_);
v_isSilent_boxed_977_ = lean_unbox(v_isSilent_970_);
v_res_978_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4(v_msgData_968_, v_severity_boxed_976_, v_isSilent_boxed_977_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3(lean_object* v_msgData_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_){
_start:
{
uint8_t v___x_985_; uint8_t v___x_986_; lean_object* v___x_987_; 
v___x_985_ = 1;
v___x_986_ = 0;
v___x_987_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4(v_msgData_979_, v___x_985_, v___x_986_, v___y_980_, v___y_981_, v___y_982_, v___y_983_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3___boxed(lean_object* v_msgData_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l_Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3(v_msgData_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
return v_res_994_;
}
}
static lean_object* _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___x_998_ = l_Lean_stringToMessageData(v___x_997_);
return v___x_998_;
}
}
static lean_object* _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___x_1001_ = l_Lean_stringToMessageData(v___x_1000_);
return v___x_1001_;
}
}
static lean_object* _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__8_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__7_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___x_1006_ = l_Lean_stringToMessageData(v___x_1005_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(uint8_t v_builtin_1007_, lean_object* v_decl_1008_, lean_object* v___x_1009_, lean_object* v___x_1010_, lean_object* v_stx_1011_, uint8_t v_kind_1012_, lean_object* v_name_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1054_; lean_object* v___y_1055_; lean_object* v___y_1056_; lean_object* v___y_1057_; lean_object* v___y_1058_; lean_object* v___y_1059_; lean_object* v___y_1060_; lean_object* v___y_1061_; lean_object* v___x_1124_; 
v___x_1124_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_1011_, v___y_1016_, v___y_1017_);
if (lean_obj_tag(v___x_1124_) == 0)
{
uint8_t v___x_1125_; uint8_t v___x_1126_; 
lean_dec_ref_known(v___x_1124_, 1);
v___x_1125_ = 0;
v___x_1126_ = l_Lean_instBEqAttributeKind_beq(v_kind_1012_, v___x_1125_);
if (v___x_1126_ == 0)
{
lean_object* v___x_1127_; 
lean_dec_ref(v___x_1010_);
lean_dec_ref(v___x_1009_);
lean_dec(v_decl_1008_);
v___x_1127_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg(v_name_1013_, v_kind_1012_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
return v___x_1127_;
}
else
{
lean_dec(v_name_1013_);
goto v___jp_1086_;
}
}
else
{
lean_dec(v_name_1013_);
lean_dec_ref(v___x_1010_);
lean_dec_ref(v___x_1009_);
lean_dec(v_decl_1008_);
return v___x_1124_;
}
v___jp_1019_:
{
lean_object* v___x_1027_; 
v___x_1027_ = lean_st_ref_get(v___y_1026_);
if (v_builtin_1007_ == 0)
{
lean_object* v_env_1028_; uint64_t v_javascriptHash_1029_; lean_object* v___x_1030_; lean_object* v_toEnvExtension_1031_; lean_object* v_addEntryFn_1032_; lean_object* v_asyncMode_1033_; uint8_t v_logWrites_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___f_1038_; lean_object* v___x_1039_; uint8_t v___x_1040_; 
lean_dec(v___y_1020_);
lean_dec_ref(v___x_1010_);
lean_dec_ref(v___x_1009_);
v_env_1028_ = lean_ctor_get(v___x_1027_, 0);
lean_inc_ref(v_env_1028_);
lean_dec(v___x_1027_);
v_javascriptHash_1029_ = lean_ctor_get_uint64(v___y_1021_, sizeof(void*)*1);
lean_dec_ref(v___y_1021_);
v___x_1030_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_moduleRegistry;
v_toEnvExtension_1031_ = lean_ctor_get(v___x_1030_, 0);
v_addEntryFn_1032_ = lean_ctor_get(v___x_1030_, 3);
v_asyncMode_1033_ = lean_ctor_get(v_toEnvExtension_1031_, 2);
v_logWrites_1034_ = lean_ctor_get_uint8(v_toEnvExtension_1031_, sizeof(void*)*6);
v___x_1035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1035_, 0, v_decl_1008_);
lean_ctor_set(v___x_1035_, 1, v___y_1022_);
v___x_1036_ = lean_box_uint64(v_javascriptHash_1029_);
v___x_1037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1036_);
lean_ctor_set(v___x_1037_, 1, v___x_1035_);
lean_inc(v_addEntryFn_1032_);
v___f_1038_ = lean_alloc_closure((void*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_), 3, 2);
lean_closure_set(v___f_1038_, 0, v_addEntryFn_1032_);
lean_closure_set(v___f_1038_, 1, v___x_1037_);
v___x_1039_ = lean_box(0);
v___x_1040_ = 1;
if (v_logWrites_1034_ == 0)
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
lean_inc_ref(v_toEnvExtension_1031_);
v___x_1041_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1031_, v_env_1028_, v___f_1038_, v_asyncMode_1033_, v___x_1039_, v___x_1040_);
v___x_1042_ = l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg(v___x_1041_, v___y_1024_, v___y_1026_);
return v___x_1042_;
}
else
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
lean_inc_ref_n(v_toEnvExtension_1031_, 2);
v___x_1043_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1031_, v_env_1028_);
lean_dec_ref(v_env_1028_);
v___x_1044_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1031_, v___x_1043_, v___f_1038_, v_asyncMode_1033_, v___x_1039_, v___x_1040_);
v___x_1045_ = l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg(v___x_1044_, v___y_1024_, v___y_1026_);
return v___x_1045_;
}
}
else
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
lean_dec(v___x_1027_);
lean_dec_ref(v___y_1022_);
lean_dec_ref(v___y_1021_);
lean_inc(v___y_1020_);
lean_inc_n(v_decl_1008_, 2);
v___x_1046_ = l_Lean_mkConst(v_decl_1008_, v___y_1020_);
v___x_1047_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___x_1048_ = l_Lean_Name_mkStr3(v___x_1009_, v___x_1010_, v___x_1047_);
v___x_1049_ = l_Lean_mkConst(v___x_1048_, v___y_1020_);
v___x_1050_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v_decl_1008_);
v___x_1051_ = l_Lean_mkAppB(v___x_1049_, v___x_1050_, v___x_1046_);
v___x_1052_ = l_Lean_declareBuiltin(v_decl_1008_, v___x_1051_, v___y_1025_, v___y_1026_);
return v___x_1052_;
}
}
v___jp_1053_:
{
lean_object* v___x_1062_; lean_object* v_toEnvExtension_1063_; lean_object* v_asyncMode_1064_; uint64_t v_javascriptHash_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1062_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_moduleRegistry;
v_toEnvExtension_1063_ = lean_ctor_get(v___x_1062_, 0);
v_asyncMode_1064_ = lean_ctor_get(v_toEnvExtension_1063_, 2);
v_javascriptHash_1065_ = lean_ctor_get_uint64(v___y_1055_, sizeof(void*)*1);
v___x_1066_ = lean_box(1);
v___x_1067_ = lean_box(0);
v___x_1068_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1066_, v___x_1062_, v___y_1057_, v_asyncMode_1064_, v___x_1067_);
v___x_1069_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___redArg(v___x_1068_, v_javascriptHash_1065_);
lean_dec(v___x_1068_);
if (lean_obj_tag(v___x_1069_) == 1)
{
lean_object* v_val_1070_; lean_object* v_fst_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1084_; 
v_val_1070_ = lean_ctor_get(v___x_1069_, 0);
lean_inc(v_val_1070_);
lean_dec_ref_known(v___x_1069_, 1);
v_fst_1071_ = lean_ctor_get(v_val_1070_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v_val_1070_);
if (v_isSharedCheck_1084_ == 0)
{
lean_object* v_unused_1085_; 
v_unused_1085_ = lean_ctor_get(v_val_1070_, 1);
lean_dec(v_unused_1085_);
v___x_1073_ = v_val_1070_;
v_isShared_1074_ = v_isSharedCheck_1084_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_fst_1071_);
lean_dec(v_val_1070_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1084_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1075_; uint8_t v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1079_; 
v___x_1075_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1076_ = 1;
v___x_1077_ = l_Lean_MessageData_ofConstName(v_fst_1071_, v___x_1076_);
if (v_isShared_1074_ == 0)
{
lean_ctor_set_tag(v___x_1073_, 7);
lean_ctor_set(v___x_1073_, 1, v___x_1077_);
lean_ctor_set(v___x_1073_, 0, v___x_1075_);
v___x_1079_ = v___x_1073_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v___x_1075_);
lean_ctor_set(v_reuseFailAlloc_1083_, 1, v___x_1077_);
v___x_1079_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1080_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1081_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1079_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_1082_ = l_Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3(v___x_1081_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_);
if (lean_obj_tag(v___x_1082_) == 0)
{
lean_dec_ref_known(v___x_1082_, 1);
v___y_1020_ = v___y_1054_;
v___y_1021_ = v___y_1055_;
v___y_1022_ = v___y_1056_;
v___y_1023_ = v___y_1058_;
v___y_1024_ = v___y_1059_;
v___y_1025_ = v___y_1060_;
v___y_1026_ = v___y_1061_;
goto v___jp_1019_;
}
else
{
lean_dec_ref(v___y_1056_);
lean_dec_ref(v___y_1055_);
lean_dec(v___y_1054_);
lean_dec_ref(v___x_1010_);
lean_dec_ref(v___x_1009_);
lean_dec(v_decl_1008_);
return v___x_1082_;
}
}
}
}
else
{
lean_dec(v___x_1069_);
v___y_1020_ = v___y_1054_;
v___y_1021_ = v___y_1055_;
v___y_1022_ = v___y_1056_;
v___y_1023_ = v___y_1058_;
v___y_1024_ = v___y_1059_;
v___y_1025_ = v___y_1060_;
v___y_1026_ = v___y_1061_;
goto v___jp_1019_;
}
}
v___jp_1086_:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1087_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__5_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___x_1088_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__6_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
lean_inc_ref(v___x_1010_);
lean_inc_ref(v___x_1009_);
v___x_1089_ = l_Lean_Name_mkStr4(v___x_1009_, v___x_1010_, v___x_1087_, v___x_1088_);
v___x_1090_ = lean_box(0);
lean_inc(v_decl_1008_);
v___x_1091_ = l_Lean_Expr_const___override(v_decl_1008_, v___x_1090_);
v___x_1092_ = lean_unsigned_to_nat(1u);
v___x_1093_ = lean_mk_empty_array_with_capacity(v___x_1092_);
v___x_1094_ = lean_array_push(v___x_1093_, v___x_1091_);
v___x_1095_ = l_Lean_Meta_mkAppM(v___x_1089_, v___x_1094_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v_a_1096_; lean_object* v___x_1097_; 
v_a_1096_ = lean_ctor_get(v___x_1095_, 0);
lean_inc_n(v_a_1096_, 2);
lean_dec_ref_known(v___x_1095_, 1);
v___x_1097_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe(v_a_1096_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
if (lean_obj_tag(v___x_1097_) == 0)
{
lean_object* v_a_1098_; lean_object* v___x_1099_; 
v_a_1098_ = lean_ctor_get(v___x_1097_, 0);
lean_inc(v_a_1098_);
lean_dec_ref_known(v___x_1097_, 1);
v___x_1099_ = lean_st_ref_get(v___y_1017_);
if (v_builtin_1007_ == 0)
{
lean_object* v_env_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; uint64_t v_javascriptHash_1103_; lean_object* v___x_1104_; 
v_env_1100_ = lean_ctor_get(v___x_1099_, 0);
lean_inc_ref(v_env_1100_);
lean_dec(v___x_1099_);
v___x_1101_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_builtinModulesRef;
v___x_1102_ = lean_st_ref_get(v___x_1101_);
v_javascriptHash_1103_ = lean_ctor_get_uint64(v_a_1098_, sizeof(void*)*1);
v___x_1104_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___redArg(v___x_1102_, v_javascriptHash_1103_);
lean_dec(v___x_1102_);
if (lean_obj_tag(v___x_1104_) == 1)
{
lean_object* v___x_1105_; lean_object* v___x_1106_; 
lean_dec_ref_known(v___x_1104_, 1);
v___x_1105_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__8_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__8_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__8_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1106_ = l_Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3(v___x_1105_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_dec_ref_known(v___x_1106_, 1);
v___y_1054_ = v___x_1090_;
v___y_1055_ = v_a_1098_;
v___y_1056_ = v_a_1096_;
v___y_1057_ = v_env_1100_;
v___y_1058_ = v___y_1014_;
v___y_1059_ = v___y_1015_;
v___y_1060_ = v___y_1016_;
v___y_1061_ = v___y_1017_;
goto v___jp_1053_;
}
else
{
lean_dec_ref(v_env_1100_);
lean_dec(v_a_1098_);
lean_dec(v_a_1096_);
lean_dec_ref(v___x_1010_);
lean_dec_ref(v___x_1009_);
lean_dec(v_decl_1008_);
return v___x_1106_;
}
}
else
{
lean_dec(v___x_1104_);
v___y_1054_ = v___x_1090_;
v___y_1055_ = v_a_1098_;
v___y_1056_ = v_a_1096_;
v___y_1057_ = v_env_1100_;
v___y_1058_ = v___y_1014_;
v___y_1059_ = v___y_1015_;
v___y_1060_ = v___y_1016_;
v___y_1061_ = v___y_1017_;
goto v___jp_1053_;
}
}
else
{
lean_object* v_env_1107_; 
v_env_1107_ = lean_ctor_get(v___x_1099_, 0);
lean_inc_ref(v_env_1107_);
lean_dec(v___x_1099_);
v___y_1054_ = v___x_1090_;
v___y_1055_ = v_a_1098_;
v___y_1056_ = v_a_1096_;
v___y_1057_ = v_env_1107_;
v___y_1058_ = v___y_1014_;
v___y_1059_ = v___y_1015_;
v___y_1060_ = v___y_1016_;
v___y_1061_ = v___y_1017_;
goto v___jp_1053_;
}
}
else
{
lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1115_; 
lean_dec(v_a_1096_);
lean_dec_ref(v___x_1010_);
lean_dec_ref(v___x_1009_);
lean_dec(v_decl_1008_);
v_a_1108_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1110_ = v___x_1097_;
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v___x_1097_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1113_; 
if (v_isShared_1111_ == 0)
{
v___x_1113_ = v___x_1110_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_a_1108_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
}
else
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
lean_dec_ref(v___x_1010_);
lean_dec_ref(v___x_1009_);
lean_dec(v_decl_1008_);
v_a_1116_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1118_ = v___x_1095_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1095_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1116_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2____boxed(lean_object* v_builtin_1128_, lean_object* v_decl_1129_, lean_object* v___x_1130_, lean_object* v___x_1131_, lean_object* v_stx_1132_, lean_object* v_kind_1133_, lean_object* v_name_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_){
_start:
{
uint8_t v_builtin_boxed_1140_; uint8_t v_kind_boxed_1141_; lean_object* v_res_1142_; 
v_builtin_boxed_1140_ = lean_unbox(v_builtin_1128_);
v_kind_boxed_1141_ = lean_unbox(v_kind_1133_);
v_res_1142_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(v_builtin_boxed_1140_, v_decl_1129_, v___x_1130_, v___x_1131_, v_stx_1132_, v_kind_boxed_1141_, v_name_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
lean_dec(v___y_1136_);
lean_dec_ref(v___y_1135_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___redArg___lam__0(lean_object* v___y_1143_, uint8_t v_isExporting_1144_, lean_object* v___x_1145_, lean_object* v___y_1146_, lean_object* v___x_1147_, lean_object* v_a_x3f_1148_){
_start:
{
lean_object* v___x_1150_; lean_object* v_env_1151_; lean_object* v_nextMacroScope_1152_; lean_object* v_ngen_1153_; lean_object* v_auxDeclNGen_1154_; lean_object* v_traceState_1155_; lean_object* v_recordedDeps_1156_; lean_object* v_messages_1157_; lean_object* v_infoState_1158_; lean_object* v_snapshotTasks_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1184_; 
v___x_1150_ = lean_st_ref_take(v___y_1143_);
v_env_1151_ = lean_ctor_get(v___x_1150_, 0);
v_nextMacroScope_1152_ = lean_ctor_get(v___x_1150_, 1);
v_ngen_1153_ = lean_ctor_get(v___x_1150_, 2);
v_auxDeclNGen_1154_ = lean_ctor_get(v___x_1150_, 3);
v_traceState_1155_ = lean_ctor_get(v___x_1150_, 4);
v_recordedDeps_1156_ = lean_ctor_get(v___x_1150_, 6);
v_messages_1157_ = lean_ctor_get(v___x_1150_, 7);
v_infoState_1158_ = lean_ctor_get(v___x_1150_, 8);
v_snapshotTasks_1159_ = lean_ctor_get(v___x_1150_, 9);
v_isSharedCheck_1184_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1184_ == 0)
{
lean_object* v_unused_1185_; 
v_unused_1185_ = lean_ctor_get(v___x_1150_, 5);
lean_dec(v_unused_1185_);
v___x_1161_ = v___x_1150_;
v_isShared_1162_ = v_isSharedCheck_1184_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_snapshotTasks_1159_);
lean_inc(v_infoState_1158_);
lean_inc(v_messages_1157_);
lean_inc(v_recordedDeps_1156_);
lean_inc(v_traceState_1155_);
lean_inc(v_auxDeclNGen_1154_);
lean_inc(v_ngen_1153_);
lean_inc(v_nextMacroScope_1152_);
lean_inc(v_env_1151_);
lean_dec(v___x_1150_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1184_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1163_; lean_object* v___x_1165_; 
v___x_1163_ = l_Lean_Environment_setExporting(v_env_1151_, v_isExporting_1144_);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 5, v___x_1145_);
lean_ctor_set(v___x_1161_, 0, v___x_1163_);
v___x_1165_ = v___x_1161_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v___x_1163_);
lean_ctor_set(v_reuseFailAlloc_1183_, 1, v_nextMacroScope_1152_);
lean_ctor_set(v_reuseFailAlloc_1183_, 2, v_ngen_1153_);
lean_ctor_set(v_reuseFailAlloc_1183_, 3, v_auxDeclNGen_1154_);
lean_ctor_set(v_reuseFailAlloc_1183_, 4, v_traceState_1155_);
lean_ctor_set(v_reuseFailAlloc_1183_, 5, v___x_1145_);
lean_ctor_set(v_reuseFailAlloc_1183_, 6, v_recordedDeps_1156_);
lean_ctor_set(v_reuseFailAlloc_1183_, 7, v_messages_1157_);
lean_ctor_set(v_reuseFailAlloc_1183_, 8, v_infoState_1158_);
lean_ctor_set(v_reuseFailAlloc_1183_, 9, v_snapshotTasks_1159_);
v___x_1165_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v_mctx_1168_; lean_object* v_zetaDeltaFVarIds_1169_; lean_object* v_postponed_1170_; lean_object* v_diag_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1181_; 
v___x_1166_ = lean_st_ref_put(v___y_1143_, v___x_1165_);
v___x_1167_ = lean_st_ref_take(v___y_1146_);
v_mctx_1168_ = lean_ctor_get(v___x_1167_, 0);
v_zetaDeltaFVarIds_1169_ = lean_ctor_get(v___x_1167_, 2);
v_postponed_1170_ = lean_ctor_get(v___x_1167_, 3);
v_diag_1171_ = lean_ctor_get(v___x_1167_, 4);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1181_ == 0)
{
lean_object* v_unused_1182_; 
v_unused_1182_ = lean_ctor_get(v___x_1167_, 1);
lean_dec(v_unused_1182_);
v___x_1173_ = v___x_1167_;
v_isShared_1174_ = v_isSharedCheck_1181_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_diag_1171_);
lean_inc(v_postponed_1170_);
lean_inc(v_zetaDeltaFVarIds_1169_);
lean_inc(v_mctx_1168_);
lean_dec(v___x_1167_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1181_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1175_; lean_object* v___x_1177_; 
v___x_1175_ = lean_box(0);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 1, v___x_1147_);
v___x_1177_ = v___x_1173_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_mctx_1168_);
lean_ctor_set(v_reuseFailAlloc_1180_, 1, v___x_1147_);
lean_ctor_set(v_reuseFailAlloc_1180_, 2, v_zetaDeltaFVarIds_1169_);
lean_ctor_set(v_reuseFailAlloc_1180_, 3, v_postponed_1170_);
lean_ctor_set(v_reuseFailAlloc_1180_, 4, v_diag_1171_);
v___x_1177_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1178_ = lean_st_ref_put(v___y_1146_, v___x_1177_);
v___x_1179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1175_);
return v___x_1179_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___redArg___lam__0___boxed(lean_object* v___y_1186_, lean_object* v_isExporting_1187_, lean_object* v___x_1188_, lean_object* v___y_1189_, lean_object* v___x_1190_, lean_object* v_a_x3f_1191_, lean_object* v___y_1192_){
_start:
{
uint8_t v_isExporting_boxed_1193_; lean_object* v_res_1194_; 
v_isExporting_boxed_1193_ = lean_unbox(v_isExporting_1187_);
v_res_1194_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___redArg___lam__0(v___y_1186_, v_isExporting_boxed_1193_, v___x_1188_, v___y_1189_, v___x_1190_, v_a_x3f_1191_);
lean_dec(v_a_x3f_1191_);
lean_dec(v___y_1189_);
lean_dec(v___y_1186_);
return v_res_1194_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___redArg(lean_object* v_x_1195_, uint8_t v_isExporting_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_){
_start:
{
lean_object* v___x_1202_; lean_object* v_env_1203_; lean_object* v___x_1204_; uint8_t v_isModule_1205_; 
v___x_1202_ = lean_st_ref_get(v___y_1200_);
v_env_1203_ = lean_ctor_get(v___x_1202_, 0);
lean_inc_ref(v_env_1203_);
lean_dec(v___x_1202_);
v___x_1204_ = l_Lean_Environment_header(v_env_1203_);
v_isModule_1205_ = lean_ctor_get_uint8(v___x_1204_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_1204_);
if (v_isModule_1205_ == 0)
{
lean_object* v___x_1206_; 
lean_dec_ref(v_env_1203_);
lean_inc(v___y_1200_);
lean_inc_ref(v___y_1199_);
lean_inc(v___y_1198_);
lean_inc_ref(v___y_1197_);
v___x_1206_ = lean_apply_5(v_x_1195_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, lean_box(0));
return v___x_1206_;
}
else
{
uint8_t v_isExporting_1207_; 
v_isExporting_1207_ = lean_ctor_get_uint8(v_env_1203_, sizeof(void*)*13);
lean_dec_ref(v_env_1203_);
if (v_isExporting_1196_ == 0)
{
if (v_isExporting_1207_ == 0)
{
lean_object* v___x_1274_; 
lean_inc(v___y_1200_);
lean_inc_ref(v___y_1199_);
lean_inc(v___y_1198_);
lean_inc_ref(v___y_1197_);
v___x_1274_ = lean_apply_5(v_x_1195_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, lean_box(0));
return v___x_1274_;
}
else
{
goto v___jp_1208_;
}
}
else
{
if (v_isExporting_1207_ == 0)
{
goto v___jp_1208_;
}
else
{
lean_object* v___x_1275_; 
lean_inc(v___y_1200_);
lean_inc_ref(v___y_1199_);
lean_inc(v___y_1198_);
lean_inc_ref(v___y_1197_);
v___x_1275_ = lean_apply_5(v_x_1195_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, lean_box(0));
return v___x_1275_;
}
}
v___jp_1208_:
{
lean_object* v___x_1209_; lean_object* v_env_1210_; lean_object* v_nextMacroScope_1211_; lean_object* v_ngen_1212_; lean_object* v_auxDeclNGen_1213_; lean_object* v_traceState_1214_; lean_object* v_recordedDeps_1215_; lean_object* v_messages_1216_; lean_object* v_infoState_1217_; lean_object* v_snapshotTasks_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1272_; 
v___x_1209_ = lean_st_ref_take(v___y_1200_);
v_env_1210_ = lean_ctor_get(v___x_1209_, 0);
v_nextMacroScope_1211_ = lean_ctor_get(v___x_1209_, 1);
v_ngen_1212_ = lean_ctor_get(v___x_1209_, 2);
v_auxDeclNGen_1213_ = lean_ctor_get(v___x_1209_, 3);
v_traceState_1214_ = lean_ctor_get(v___x_1209_, 4);
v_recordedDeps_1215_ = lean_ctor_get(v___x_1209_, 6);
v_messages_1216_ = lean_ctor_get(v___x_1209_, 7);
v_infoState_1217_ = lean_ctor_get(v___x_1209_, 8);
v_snapshotTasks_1218_ = lean_ctor_get(v___x_1209_, 9);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1272_ == 0)
{
lean_object* v_unused_1273_; 
v_unused_1273_ = lean_ctor_get(v___x_1209_, 5);
lean_dec(v_unused_1273_);
v___x_1220_ = v___x_1209_;
v_isShared_1221_ = v_isSharedCheck_1272_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_snapshotTasks_1218_);
lean_inc(v_infoState_1217_);
lean_inc(v_messages_1216_);
lean_inc(v_recordedDeps_1215_);
lean_inc(v_traceState_1214_);
lean_inc(v_auxDeclNGen_1213_);
lean_inc(v_ngen_1212_);
lean_inc(v_nextMacroScope_1211_);
lean_inc(v_env_1210_);
lean_dec(v___x_1209_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1272_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1225_; 
v___x_1222_ = l_Lean_Environment_setExporting(v_env_1210_, v_isExporting_1196_);
v___x_1223_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__1, &l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__1_once, _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__1);
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 5, v___x_1223_);
lean_ctor_set(v___x_1220_, 0, v___x_1222_);
v___x_1225_ = v___x_1220_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v___x_1222_);
lean_ctor_set(v_reuseFailAlloc_1271_, 1, v_nextMacroScope_1211_);
lean_ctor_set(v_reuseFailAlloc_1271_, 2, v_ngen_1212_);
lean_ctor_set(v_reuseFailAlloc_1271_, 3, v_auxDeclNGen_1213_);
lean_ctor_set(v_reuseFailAlloc_1271_, 4, v_traceState_1214_);
lean_ctor_set(v_reuseFailAlloc_1271_, 5, v___x_1223_);
lean_ctor_set(v_reuseFailAlloc_1271_, 6, v_recordedDeps_1215_);
lean_ctor_set(v_reuseFailAlloc_1271_, 7, v_messages_1216_);
lean_ctor_set(v_reuseFailAlloc_1271_, 8, v_infoState_1217_);
lean_ctor_set(v_reuseFailAlloc_1271_, 9, v_snapshotTasks_1218_);
v___x_1225_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v_mctx_1228_; lean_object* v_zetaDeltaFVarIds_1229_; lean_object* v_postponed_1230_; lean_object* v_diag_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1269_; 
v___x_1226_ = lean_st_ref_put(v___y_1200_, v___x_1225_);
v___x_1227_ = lean_st_ref_take(v___y_1198_);
v_mctx_1228_ = lean_ctor_get(v___x_1227_, 0);
v_zetaDeltaFVarIds_1229_ = lean_ctor_get(v___x_1227_, 2);
v_postponed_1230_ = lean_ctor_get(v___x_1227_, 3);
v_diag_1231_ = lean_ctor_get(v___x_1227_, 4);
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1227_);
if (v_isSharedCheck_1269_ == 0)
{
lean_object* v_unused_1270_; 
v_unused_1270_ = lean_ctor_get(v___x_1227_, 1);
lean_dec(v_unused_1270_);
v___x_1233_ = v___x_1227_;
v_isShared_1234_ = v_isSharedCheck_1269_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_diag_1231_);
lean_inc(v_postponed_1230_);
lean_inc(v_zetaDeltaFVarIds_1229_);
lean_inc(v_mctx_1228_);
lean_dec(v___x_1227_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1269_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1235_; lean_object* v___x_1237_; 
v___x_1235_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__5, &l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__5_once, _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__5);
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 1, v___x_1235_);
v___x_1237_ = v___x_1233_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_mctx_1228_);
lean_ctor_set(v_reuseFailAlloc_1268_, 1, v___x_1235_);
lean_ctor_set(v_reuseFailAlloc_1268_, 2, v_zetaDeltaFVarIds_1229_);
lean_ctor_set(v_reuseFailAlloc_1268_, 3, v_postponed_1230_);
lean_ctor_set(v_reuseFailAlloc_1268_, 4, v_diag_1231_);
v___x_1237_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
lean_object* v___x_1238_; lean_object* v_r_1239_; 
v___x_1238_ = lean_st_ref_put(v___y_1198_, v___x_1237_);
lean_inc(v___y_1200_);
lean_inc_ref(v___y_1199_);
lean_inc(v___y_1198_);
lean_inc_ref(v___y_1197_);
v_r_1239_ = lean_apply_5(v_x_1195_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, lean_box(0));
if (lean_obj_tag(v_r_1239_) == 0)
{
lean_object* v_a_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1256_; 
v_a_1240_ = lean_ctor_get(v_r_1239_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v_r_1239_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1242_ = v_r_1239_;
v_isShared_1243_ = v_isSharedCheck_1256_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_a_1240_);
lean_dec(v_r_1239_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1256_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1245_; 
lean_inc(v_a_1240_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set_tag(v___x_1242_, 1);
v___x_1245_ = v___x_1242_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_a_1240_);
v___x_1245_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
lean_object* v___x_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1253_; 
v___x_1246_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___redArg___lam__0(v___y_1200_, v_isExporting_1207_, v___x_1223_, v___y_1198_, v___x_1235_, v___x_1245_);
lean_dec_ref(v___x_1245_);
v_isSharedCheck_1253_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1253_ == 0)
{
lean_object* v_unused_1254_; 
v_unused_1254_ = lean_ctor_get(v___x_1246_, 0);
lean_dec(v_unused_1254_);
v___x_1248_ = v___x_1246_;
v_isShared_1249_ = v_isSharedCheck_1253_;
goto v_resetjp_1247_;
}
else
{
lean_dec(v___x_1246_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1253_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
lean_object* v___x_1251_; 
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 0, v_a_1240_);
v___x_1251_ = v___x_1248_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_a_1240_);
v___x_1251_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
return v___x_1251_;
}
}
}
}
}
else
{
lean_object* v_a_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1266_; 
v_a_1257_ = lean_ctor_get(v_r_1239_, 0);
lean_inc(v_a_1257_);
lean_dec_ref_known(v_r_1239_, 1);
v___x_1258_ = lean_box(0);
v___x_1259_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___redArg___lam__0(v___y_1200_, v_isExporting_1207_, v___x_1223_, v___y_1198_, v___x_1235_, v___x_1258_);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1266_ == 0)
{
lean_object* v_unused_1267_; 
v_unused_1267_ = lean_ctor_get(v___x_1259_, 0);
lean_dec(v_unused_1267_);
v___x_1261_ = v___x_1259_;
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
else
{
lean_dec(v___x_1259_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1264_; 
if (v_isShared_1262_ == 0)
{
lean_ctor_set_tag(v___x_1261_, 1);
lean_ctor_set(v___x_1261_, 0, v_a_1257_);
v___x_1264_ = v___x_1261_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_a_1257_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___redArg___boxed(lean_object* v_x_1276_, lean_object* v_isExporting_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_){
_start:
{
uint8_t v_isExporting_boxed_1283_; lean_object* v_res_1284_; 
v_isExporting_boxed_1283_ = lean_unbox(v_isExporting_1277_);
v_res_1284_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___redArg(v_x_1276_, v_isExporting_boxed_1283_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6___redArg(lean_object* v_x_1285_, uint8_t v_when_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_){
_start:
{
if (v_when_1286_ == 0)
{
lean_object* v___x_1292_; 
lean_inc(v___y_1290_);
lean_inc_ref(v___y_1289_);
lean_inc(v___y_1288_);
lean_inc_ref(v___y_1287_);
v___x_1292_ = lean_apply_5(v_x_1285_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, lean_box(0));
return v___x_1292_;
}
else
{
uint8_t v___x_1293_; lean_object* v___x_1294_; 
v___x_1293_ = 0;
v___x_1294_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___redArg(v_x_1285_, v___x_1293_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_);
return v___x_1294_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6___redArg___boxed(lean_object* v_x_1295_, lean_object* v_when_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_){
_start:
{
uint8_t v_when_boxed_1302_; lean_object* v_res_1303_; 
v_when_boxed_1302_ = lean_unbox(v_when_1296_);
v_res_1303_ = l_Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6___redArg(v_x_1295_, v_when_boxed_1302_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
return v_res_1303_;
}
}
static uint64_t _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1310_; uint64_t v___x_1311_; 
v___x_1310_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___x_1311_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1310_);
return v___x_1311_;
}
}
static lean_object* _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1312_ = lean_uint64_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1313_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___x_1314_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1314_, 0, v___x_1313_);
lean_ctor_set_uint64(v___x_1314_, sizeof(void*)*1, v___x_1312_);
return v___x_1314_;
}
}
static lean_object* _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1315_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_1316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
return v___x_1316_;
}
}
static lean_object* _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1317_ = lean_box(1);
v___x_1318_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_1319_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1320_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1319_);
lean_ctor_set(v___x_1320_, 1, v___x_1318_);
lean_ctor_set(v___x_1320_, 2, v___x_1317_);
return v___x_1320_;
}
}
static lean_object* _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__6_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1323_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1324_ = lean_unsigned_to_nat(0u);
v___x_1325_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
lean_ctor_set(v___x_1325_, 1, v___x_1324_);
lean_ctor_set(v___x_1325_, 2, v___x_1324_);
lean_ctor_set(v___x_1325_, 3, v___x_1324_);
lean_ctor_set(v___x_1325_, 4, v___x_1323_);
lean_ctor_set(v___x_1325_, 5, v___x_1323_);
lean_ctor_set(v___x_1325_, 6, v___x_1323_);
lean_ctor_set(v___x_1325_, 7, v___x_1323_);
lean_ctor_set(v___x_1325_, 8, v___x_1323_);
lean_ctor_set(v___x_1325_, 9, v___x_1323_);
lean_ctor_set(v___x_1325_, 10, v___x_1323_);
return v___x_1325_;
}
}
static lean_object* _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__7_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
lean_ctor_set(v___x_1327_, 1, v___x_1326_);
return v___x_1327_;
}
}
static lean_object* _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__8_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1328_ = lean_unsigned_to_nat(0u);
v___x_1329_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1330_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1329_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
lean_ctor_set(v___x_1330_, 2, v___x_1328_);
return v___x_1330_;
}
}
static lean_object* _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__9_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1331_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__8_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__8_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__8_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1332_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__7_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__7_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__7_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1333_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1334_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2, &l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2_once, _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2);
v___x_1335_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1334_);
lean_ctor_set(v___x_1335_, 1, v___x_1333_);
lean_ctor_set(v___x_1335_, 2, v___x_1332_);
lean_ctor_set(v___x_1335_, 3, v___x_1333_);
lean_ctor_set(v___x_1335_, 4, v___x_1333_);
lean_ctor_set(v___x_1335_, 5, v___x_1333_);
lean_ctor_set(v___x_1335_, 6, v___x_1333_);
lean_ctor_set(v___x_1335_, 7, v___x_1331_);
return v___x_1335_;
}
}
static lean_object* _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__10_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1336_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1337_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1336_);
lean_ctor_set(v___x_1337_, 1, v___x_1336_);
lean_ctor_set(v___x_1337_, 2, v___x_1336_);
lean_ctor_set(v___x_1337_, 3, v___x_1336_);
lean_ctor_set(v___x_1337_, 4, v___x_1336_);
return v___x_1337_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(uint8_t v_builtin_1338_, lean_object* v___x_1339_, lean_object* v___x_1340_, lean_object* v_name_1341_, lean_object* v___x_1342_, lean_object* v_decl_1343_, lean_object* v_stx_1344_, uint8_t v_kind_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___f_1351_; uint8_t v___x_1352_; uint8_t v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
v___x_1349_ = lean_box(v_builtin_1338_);
v___x_1350_ = lean_box(v_kind_1345_);
v___f_1351_ = lean_alloc_closure((void*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2____boxed), 12, 7);
lean_closure_set(v___f_1351_, 0, v___x_1349_);
lean_closure_set(v___f_1351_, 1, v_decl_1343_);
lean_closure_set(v___f_1351_, 2, v___x_1339_);
lean_closure_set(v___f_1351_, 3, v___x_1340_);
lean_closure_set(v___f_1351_, 4, v_stx_1344_);
lean_closure_set(v___f_1351_, 5, v___x_1350_);
lean_closure_set(v___f_1351_, 6, v_name_1341_);
v___x_1352_ = 1;
v___x_1353_ = 0;
v___x_1354_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1355_ = lean_unsigned_to_nat(0u);
v___x_1356_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_1357_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1358_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__5_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___x_1359_ = lean_box(0);
lean_inc(v___x_1342_);
v___x_1360_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1360_, 0, v___x_1354_);
lean_ctor_set(v___x_1360_, 1, v___x_1342_);
lean_ctor_set(v___x_1360_, 2, v___x_1357_);
lean_ctor_set(v___x_1360_, 3, v___x_1358_);
lean_ctor_set(v___x_1360_, 4, v___x_1359_);
lean_ctor_set(v___x_1360_, 5, v___x_1355_);
lean_ctor_set(v___x_1360_, 6, v___x_1359_);
lean_ctor_set_uint8(v___x_1360_, sizeof(void*)*7, v___x_1353_);
lean_ctor_set_uint8(v___x_1360_, sizeof(void*)*7 + 1, v___x_1353_);
lean_ctor_set_uint8(v___x_1360_, sizeof(void*)*7 + 2, v___x_1353_);
lean_ctor_set_uint8(v___x_1360_, sizeof(void*)*7 + 3, v___x_1352_);
v___x_1361_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__6_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__6_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__6_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1362_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__9_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__9_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__9_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1363_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__10_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__10_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__10_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_1364_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1361_);
lean_ctor_set(v___x_1364_, 1, v___x_1362_);
lean_ctor_set(v___x_1364_, 2, v___x_1342_);
lean_ctor_set(v___x_1364_, 3, v___x_1356_);
lean_ctor_set(v___x_1364_, 4, v___x_1363_);
v___x_1365_ = lean_st_mk_ref(v___x_1364_);
v___x_1366_ = l_Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6___redArg(v___f_1351_, v___x_1352_, v___x_1360_, v___x_1365_, v___y_1346_, v___y_1347_);
lean_dec_ref_known(v___x_1360_, 7);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1375_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1375_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1369_ = v___x_1366_;
v_isShared_1370_ = v_isSharedCheck_1375_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1366_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1375_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1371_; lean_object* v___x_1373_; 
v___x_1371_ = lean_st_ref_get(v___x_1365_);
lean_dec(v___x_1365_);
lean_dec(v___x_1371_);
if (v_isShared_1370_ == 0)
{
v___x_1373_ = v___x_1369_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v_a_1367_);
v___x_1373_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
return v___x_1373_;
}
}
}
else
{
lean_dec(v___x_1365_);
return v___x_1366_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2____boxed(lean_object* v_builtin_1376_, lean_object* v___x_1377_, lean_object* v___x_1378_, lean_object* v_name_1379_, lean_object* v___x_1380_, lean_object* v_decl_1381_, lean_object* v_stx_1382_, lean_object* v_kind_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_){
_start:
{
uint8_t v_builtin_boxed_1387_; uint8_t v_kind_boxed_1388_; lean_object* v_res_1389_; 
v_builtin_boxed_1387_ = lean_unbox(v_builtin_1376_);
v_kind_boxed_1388_ = lean_unbox(v_kind_1383_);
v_res_1389_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(v_builtin_boxed_1387_, v___x_1377_, v___x_1378_, v_name_1379_, v___x_1380_, v_decl_1381_, v_stx_1382_, v_kind_boxed_1388_, v___y_1384_, v___y_1385_);
lean_dec(v___y_1385_);
lean_dec_ref(v___y_1384_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(lean_object* v___x_1397_, uint8_t v_builtin_1398_, lean_object* v_name_1399_){
_start:
{
lean_object* v___f_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___f_1405_; lean_object* v___x_1406_; lean_object* v___y_1408_; 
lean_inc_n(v_name_1399_, 2);
v___f_1401_ = lean_alloc_closure((void*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2____boxed), 5, 1);
lean_closure_set(v___f_1401_, 0, v_name_1399_);
v___x_1402_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__0));
v___x_1403_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe___closed__1));
v___x_1404_ = lean_box(v_builtin_1398_);
v___f_1405_ = lean_alloc_closure((void*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2____boxed), 11, 5);
lean_closure_set(v___f_1405_, 0, v___x_1404_);
lean_closure_set(v___f_1405_, 1, v___x_1402_);
lean_closure_set(v___f_1405_, 2, v___x_1403_);
lean_closure_set(v___f_1405_, 3, v_name_1399_);
lean_closure_set(v___f_1405_, 4, v___x_1397_);
v___x_1406_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
if (v_builtin_1398_ == 0)
{
lean_object* v___x_1431_; 
v___x_1431_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__3_spec__4_spec__5___closed__0));
v___y_1408_ = v___x_1431_;
goto v___jp_1407_;
}
else
{
lean_object* v___x_1432_; 
v___x_1432_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___y_1408_ = v___x_1432_;
goto v___jp_1407_;
}
v___jp_1407_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; uint8_t v___x_1411_; lean_object* v___x_1412_; lean_object* v_impl_1413_; lean_object* v___x_1414_; 
v___x_1409_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4___closed__2_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
lean_inc_ref(v___y_1408_);
v___x_1410_ = lean_string_append(v___y_1408_, v___x_1409_);
v___x_1411_ = 1;
v___x_1412_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1412_, 0, v___x_1406_);
lean_ctor_set(v___x_1412_, 1, v_name_1399_);
lean_ctor_set(v___x_1412_, 2, v___x_1410_);
lean_ctor_set_uint8(v___x_1412_, sizeof(void*)*3, v___x_1411_);
v_impl_1413_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_impl_1413_, 0, v___x_1412_);
lean_ctor_set(v_impl_1413_, 1, v___f_1405_);
lean_ctor_set(v_impl_1413_, 2, v___f_1401_);
lean_inc_ref(v_impl_1413_);
v___x_1414_ = l_Lean_registerBuiltinAttribute(v_impl_1413_);
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1421_ == 0)
{
lean_object* v_unused_1422_; 
v_unused_1422_ = lean_ctor_get(v___x_1414_, 0);
lean_dec(v_unused_1422_);
v___x_1416_ = v___x_1414_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_dec(v___x_1414_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 0, v_impl_1413_);
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_impl_1413_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
else
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1430_; 
lean_dec_ref_known(v_impl_1413_, 3);
v_a_1423_ = lean_ctor_get(v___x_1414_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1425_ = v___x_1414_;
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1414_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2____boxed(lean_object* v___x_1433_, lean_object* v_builtin_1434_, lean_object* v_name_1435_, lean_object* v___y_1436_){
_start:
{
uint8_t v_builtin_boxed_1437_; lean_object* v_res_1438_; 
v_builtin_boxed_1437_ = lean_unbox(v_builtin_1434_);
v_res_1438_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(v___x_1433_, v_builtin_boxed_1437_, v_name_1435_);
return v_res_1438_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1446_; uint8_t v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1446_ = lean_box(1);
v___x_1447_ = 1;
v___x_1448_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___x_1449_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(v___x_1446_, v___x_1447_, v___x_1448_);
if (lean_obj_tag(v___x_1449_) == 0)
{
uint8_t v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
lean_dec_ref_known(v___x_1449_, 1);
v___x_1450_ = 0;
v___x_1451_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___x_1452_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_(v___x_1446_, v___x_1450_, v___x_1451_);
return v___x_1452_;
}
else
{
return v___x_1449_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2____boxed(lean_object* v_a_1453_){
_start:
{
lean_object* v_res_1454_; 
v_res_1454_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_();
return v_res_1454_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_1455_, lean_object* v_msg_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_){
_start:
{
lean_object* v___x_1460_; 
v___x_1460_ = l_Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0___redArg(v_msg_1456_, v___y_1457_, v___y_1458_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_1461_, lean_object* v_msg_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = l_Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0(v_00_u03b1_1461_, v_msg_1462_, v___y_1463_, v___y_1464_);
lean_dec(v___y_1464_);
lean_dec_ref(v___y_1463_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1(lean_object* v_env_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v___x_1473_; 
v___x_1473_ = l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg(v_env_1467_, v___y_1469_, v___y_1471_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___boxed(lean_object* v_env_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1(v_env_1474_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2(lean_object* v_00_u03b4_1481_, lean_object* v_t_1482_, uint64_t v_k_1483_){
_start:
{
lean_object* v___x_1484_; 
v___x_1484_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___redArg(v_t_1482_, v_k_1483_);
return v___x_1484_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___boxed(lean_object* v_00_u03b4_1485_, lean_object* v_t_1486_, lean_object* v_k_1487_){
_start:
{
uint64_t v_k_boxed_1488_; lean_object* v_res_1489_; 
v_k_boxed_1488_ = lean_unbox_uint64(v_k_1487_);
lean_dec_ref(v_k_1487_);
v_res_1489_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2(v_00_u03b4_1485_, v_t_1486_, v_k_boxed_1488_);
lean_dec(v_t_1486_);
return v_res_1489_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4(lean_object* v_00_u03b1_1490_, lean_object* v_name_1491_, uint8_t v_kind_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_){
_start:
{
lean_object* v___x_1498_; 
v___x_1498_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___redArg(v_name_1491_, v_kind_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_);
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4___boxed(lean_object* v_00_u03b1_1499_, lean_object* v_name_1500_, lean_object* v_kind_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
uint8_t v_kind_boxed_1507_; lean_object* v_res_1508_; 
v_kind_boxed_1507_ = lean_unbox(v_kind_1501_);
v_res_1508_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4(v_00_u03b1_1499_, v_name_1500_, v_kind_boxed_1507_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_);
lean_dec(v___y_1505_);
lean_dec_ref(v___y_1504_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5_spec__8(lean_object* v_00_u03b2_1509_){
_start:
{
lean_object* v___x_1510_; 
v___x_1510_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2, &l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2_once, _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5___redArg(){
_start:
{
lean_object* v___x_1512_; 
v___x_1512_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2, &l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2_once, _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5___redArg___boxed(lean_object* v___dummy_1513_){
_start:
{
lean_object* v_res_1514_; 
v_res_1514_ = l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5___redArg();
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__5(lean_object* v_00_u03b2_1515_){
_start:
{
lean_object* v___x_1516_; 
v___x_1516_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2, &l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2_once, _init_l_Lean_setEnv___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__1___redArg___closed__2);
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6(lean_object* v_00_u03b1_1517_, lean_object* v_x_1518_, uint8_t v_when_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
lean_object* v___x_1525_; 
v___x_1525_ = l_Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6___redArg(v_x_1518_, v_when_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6___boxed(lean_object* v_00_u03b1_1526_, lean_object* v_x_1527_, lean_object* v_when_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_){
_start:
{
uint8_t v_when_boxed_1534_; lean_object* v_res_1535_; 
v_when_boxed_1534_ = lean_unbox(v_when_1528_);
v_res_1535_ = l_Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6(v_00_u03b1_1526_, v_x_1527_, v_when_boxed_1534_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6(lean_object* v_00_u03b1_1536_, lean_object* v_msg_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_){
_start:
{
lean_object* v___x_1543_; 
v___x_1543_ = l_Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6___redArg(v_msg_1537_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6___boxed(lean_object* v_00_u03b1_1544_, lean_object* v_msg_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6(v_00_u03b1_1544_, v_msg_1545_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_);
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
lean_dec(v___y_1547_);
lean_dec_ref(v___y_1546_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10(lean_object* v_00_u03b1_1552_, lean_object* v_x_1553_, uint8_t v_isExporting_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___redArg(v_x_1553_, v_isExporting_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10___boxed(lean_object* v_00_u03b1_1561_, lean_object* v_x_1562_, lean_object* v_isExporting_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
uint8_t v_isExporting_boxed_1569_; lean_object* v_res_1570_; 
v_isExporting_boxed_1569_ = lean_unbox(v_isExporting_1563_);
v_res_1570_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__6_spec__10(v_00_u03b1_1561_, v_x_1562_, v_isExporting_boxed_1569_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Widget_instToJsonGetWidgetSourceParams_toJson_spec__0(lean_object* v_a_1571_, lean_object* v_a_1572_){
_start:
{
if (lean_obj_tag(v_a_1571_) == 0)
{
lean_object* v___x_1573_; 
v___x_1573_ = lean_array_to_list(v_a_1572_);
return v___x_1573_;
}
else
{
lean_object* v_head_1574_; lean_object* v_tail_1575_; lean_object* v___x_1576_; 
v_head_1574_ = lean_ctor_get(v_a_1571_, 0);
lean_inc(v_head_1574_);
v_tail_1575_ = lean_ctor_get(v_a_1571_, 1);
lean_inc(v_tail_1575_);
lean_dec_ref_known(v_a_1571_, 2);
v___x_1576_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1572_, v_head_1574_);
v_a_1571_ = v_tail_1575_;
v_a_1572_ = v___x_1576_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson(lean_object* v_x_1582_){
_start:
{
uint64_t v_hash_1583_; lean_object* v_pos_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
v_hash_1583_ = lean_ctor_get_uint64(v_x_1582_, sizeof(void*)*1);
v_pos_1584_ = lean_ctor_get(v_x_1582_, 0);
lean_inc_ref(v_pos_1584_);
lean_dec_ref(v_x_1582_);
v___x_1585_ = ((lean_object*)(l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__0));
v___x_1586_ = lean_uint64_to_nat(v_hash_1583_);
v___x_1587_ = l_Lean_bignumToJson(v___x_1586_);
v___x_1588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1585_);
lean_ctor_set(v___x_1588_, 1, v___x_1587_);
v___x_1589_ = lean_box(0);
v___x_1590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1588_);
lean_ctor_set(v___x_1590_, 1, v___x_1589_);
v___x_1591_ = ((lean_object*)(l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__1));
v___x_1592_ = l_Lean_Lsp_instToJsonPosition_toJson(v_pos_1584_);
v___x_1593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1591_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
v___x_1594_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1594_, 0, v___x_1593_);
lean_ctor_set(v___x_1594_, 1, v___x_1589_);
v___x_1595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1594_);
lean_ctor_set(v___x_1595_, 1, v___x_1589_);
v___x_1596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1590_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
v___x_1597_ = ((lean_object*)(l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__2));
v___x_1598_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Widget_instToJsonGetWidgetSourceParams_toJson_spec__0(v___x_1596_, v___x_1597_);
v___x_1599_ = l_Lean_Json_mkObj(v___x_1598_);
lean_dec(v___x_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson_spec__0(lean_object* v_j_1602_, lean_object* v_k_1603_){
_start:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; 
v___x_1604_ = l_Lean_Json_getObjValD(v_j_1602_, v_k_1603_);
v___x_1605_ = l_Lean_UInt64_fromJson_x3f(v___x_1604_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson_spec__0___boxed(lean_object* v_j_1606_, lean_object* v_k_1607_){
_start:
{
lean_object* v_res_1608_; 
v_res_1608_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson_spec__0(v_j_1606_, v_k_1607_);
lean_dec_ref(v_k_1607_);
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson_spec__1(lean_object* v_j_1609_, lean_object* v_k_1610_){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1611_ = l_Lean_Json_getObjValD(v_j_1609_, v_k_1610_);
v___x_1612_ = l_Lean_Lsp_instFromJsonPosition_fromJson(v___x_1611_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson_spec__1___boxed(lean_object* v_j_1613_, lean_object* v_k_1614_){
_start:
{
lean_object* v_res_1615_; 
v_res_1615_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson_spec__1(v_j_1613_, v_k_1614_);
lean_dec_ref(v_k_1614_);
return v_res_1615_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1621_ = 1;
v___x_1622_ = ((lean_object*)(l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__1));
v___x_1623_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1622_, v___x_1621_);
return v___x_1623_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1624_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___x_1625_ = lean_obj_once(&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__2, &l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__2_once, _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__2);
v___x_1626_ = lean_string_append(v___x_1625_, v___x_1624_);
return v___x_1626_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1629_ = 1;
v___x_1630_ = ((lean_object*)(l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__4));
v___x_1631_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1630_, v___x_1629_);
return v___x_1631_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__6(void){
_start:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
v___x_1632_ = lean_obj_once(&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__5, &l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__5_once, _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__5);
v___x_1633_ = lean_obj_once(&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__3, &l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__3_once, _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__3);
v___x_1634_ = lean_string_append(v___x_1633_, v___x_1632_);
return v___x_1634_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1636_ = ((lean_object*)(l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__7));
v___x_1637_ = lean_obj_once(&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__6, &l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__6_once, _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__6);
v___x_1638_ = lean_string_append(v___x_1637_, v___x_1636_);
return v___x_1638_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__10(void){
_start:
{
uint8_t v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1641_ = 1;
v___x_1642_ = ((lean_object*)(l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__9));
v___x_1643_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1642_, v___x_1641_);
return v___x_1643_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__11(void){
_start:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
v___x_1644_ = lean_obj_once(&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__10, &l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__10_once, _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__10);
v___x_1645_ = lean_obj_once(&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__3, &l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__3_once, _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__3);
v___x_1646_ = lean_string_append(v___x_1645_, v___x_1644_);
return v___x_1646_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__12(void){
_start:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; 
v___x_1647_ = ((lean_object*)(l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__7));
v___x_1648_ = lean_obj_once(&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__11, &l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__11_once, _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__11);
v___x_1649_ = lean_string_append(v___x_1648_, v___x_1647_);
return v___x_1649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson(lean_object* v_json_1650_){
_start:
{
lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1651_ = ((lean_object*)(l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__0));
lean_inc(v_json_1650_);
v___x_1652_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson_spec__0(v_json_1650_, v___x_1651_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v_a_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1662_; 
lean_dec(v_json_1650_);
v_a_1653_ = lean_ctor_get(v___x_1652_, 0);
v_isSharedCheck_1662_ = !lean_is_exclusive(v___x_1652_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1655_ = v___x_1652_;
v_isShared_1656_ = v_isSharedCheck_1662_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_a_1653_);
lean_dec(v___x_1652_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1662_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1660_; 
v___x_1657_ = lean_obj_once(&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__8, &l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__8_once, _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__8);
v___x_1658_ = lean_string_append(v___x_1657_, v_a_1653_);
lean_dec(v_a_1653_);
if (v_isShared_1656_ == 0)
{
lean_ctor_set(v___x_1655_, 0, v___x_1658_);
v___x_1660_ = v___x_1655_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v___x_1658_);
v___x_1660_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
return v___x_1660_;
}
}
}
else
{
lean_object* v_a_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v_a_1663_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_a_1663_);
lean_dec_ref_known(v___x_1652_, 1);
v___x_1664_ = ((lean_object*)(l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__1));
v___x_1665_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson_spec__1(v_json_1650_, v___x_1664_);
if (lean_obj_tag(v___x_1665_) == 0)
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1675_; 
lean_dec(v_a_1663_);
v_a_1666_ = lean_ctor_get(v___x_1665_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1665_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1668_ = v___x_1665_;
v_isShared_1669_ = v_isSharedCheck_1675_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1665_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1675_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1673_; 
v___x_1670_ = lean_obj_once(&l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__12, &l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__12_once, _init_l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__12);
v___x_1671_ = lean_string_append(v___x_1670_, v_a_1666_);
lean_dec(v_a_1666_);
if (v_isShared_1669_ == 0)
{
lean_ctor_set(v___x_1668_, 0, v___x_1671_);
v___x_1673_ = v___x_1668_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v___x_1671_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
else
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1685_; 
v_a_1676_ = lean_ctor_get(v___x_1665_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v___x_1665_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1678_ = v___x_1665_;
v_isShared_1679_ = v_isSharedCheck_1685_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v___x_1665_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1685_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1680_; uint64_t v___x_1681_; lean_object* v___x_1683_; 
v___x_1680_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1680_, 0, v_a_1676_);
v___x_1681_ = lean_unbox_uint64(v_a_1663_);
lean_dec(v_a_1663_);
lean_ctor_set_uint64(v___x_1680_, sizeof(void*)*1, v___x_1681_);
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 0, v___x_1680_);
v___x_1683_ = v___x_1678_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v___x_1680_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
return v___x_1683_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonWidgetSource_toJson(lean_object* v_x_1691_){
_start:
{
lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1692_ = ((lean_object*)(l_Lean_Widget_instToJsonWidgetSource_toJson___closed__0));
v___x_1693_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1693_, 0, v_x_1691_);
v___x_1694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1694_, 0, v___x_1692_);
lean_ctor_set(v___x_1694_, 1, v___x_1693_);
v___x_1695_ = lean_box(0);
v___x_1696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1694_);
lean_ctor_set(v___x_1696_, 1, v___x_1695_);
v___x_1697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1697_, 0, v___x_1696_);
lean_ctor_set(v___x_1697_, 1, v___x_1695_);
v___x_1698_ = ((lean_object*)(l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__2));
v___x_1699_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Widget_instToJsonGetWidgetSourceParams_toJson_spec__0(v___x_1697_, v___x_1698_);
v___x_1700_ = l_Lean_Json_mkObj(v___x_1699_);
lean_dec(v___x_1699_);
return v___x_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonWidgetSource_fromJson_spec__0(lean_object* v_j_1703_, lean_object* v_k_1704_){
_start:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1705_ = l_Lean_Json_getObjValD(v_j_1703_, v_k_1704_);
v___x_1706_ = l_Lean_Json_getStr_x3f(v___x_1705_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonWidgetSource_fromJson_spec__0___boxed(lean_object* v_j_1707_, lean_object* v_k_1708_){
_start:
{
lean_object* v_res_1709_; 
v_res_1709_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonWidgetSource_fromJson_spec__0(v_j_1707_, v_k_1708_);
lean_dec_ref(v_k_1708_);
return v_res_1709_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1715_ = 1;
v___x_1716_ = ((lean_object*)(l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__1));
v___x_1717_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1716_, v___x_1715_);
return v___x_1717_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1718_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___x_1719_ = lean_obj_once(&l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__2, &l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__2_once, _init_l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__2);
v___x_1720_ = lean_string_append(v___x_1719_, v___x_1718_);
return v___x_1720_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1723_ = 1;
v___x_1724_ = ((lean_object*)(l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__4));
v___x_1725_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1724_, v___x_1723_);
return v___x_1725_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__6(void){
_start:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v___x_1726_ = lean_obj_once(&l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__5, &l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__5_once, _init_l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__5);
v___x_1727_ = lean_obj_once(&l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__3, &l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__3_once, _init_l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__3);
v___x_1728_ = lean_string_append(v___x_1727_, v___x_1726_);
return v___x_1728_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1729_ = ((lean_object*)(l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__7));
v___x_1730_ = lean_obj_once(&l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__6, &l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__6_once, _init_l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__6);
v___x_1731_ = lean_string_append(v___x_1730_, v___x_1729_);
return v___x_1731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonWidgetSource_fromJson(lean_object* v_json_1732_){
_start:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___x_1733_ = ((lean_object*)(l_Lean_Widget_instToJsonWidgetSource_toJson___closed__0));
v___x_1734_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonWidgetSource_fromJson_spec__0(v_json_1732_, v___x_1733_);
if (lean_obj_tag(v___x_1734_) == 0)
{
lean_object* v_a_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1744_; 
v_a_1735_ = lean_ctor_get(v___x_1734_, 0);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1734_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1737_ = v___x_1734_;
v_isShared_1738_ = v_isSharedCheck_1744_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_a_1735_);
lean_dec(v___x_1734_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1744_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1742_; 
v___x_1739_ = lean_obj_once(&l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__7, &l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__7_once, _init_l_Lean_Widget_instFromJsonWidgetSource_fromJson___closed__7);
v___x_1740_ = lean_string_append(v___x_1739_, v_a_1735_);
lean_dec(v_a_1735_);
if (v_isShared_1738_ == 0)
{
lean_ctor_set(v___x_1737_, 0, v___x_1740_);
v___x_1742_ = v___x_1737_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v___x_1740_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
}
else
{
lean_object* v_a_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1752_; 
v_a_1745_ = lean_ctor_get(v___x_1734_, 0);
v_isSharedCheck_1752_ = !lean_is_exclusive(v___x_1734_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1747_ = v___x_1734_;
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_a_1745_);
lean_dec(v___x_1734_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v___x_1750_; 
if (v_isShared_1748_ == 0)
{
v___x_1750_ = v___x_1747_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v_a_1745_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
return v___x_1750_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Widget_getWidgetSource_spec__0(lean_object* v___y_1755_){
_start:
{
lean_object* v_doc_1757_; lean_object* v___x_1758_; 
v_doc_1757_ = lean_ctor_get(v___y_1755_, 1);
lean_inc_ref(v_doc_1757_);
v___x_1758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1758_, 0, v_doc_1757_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Widget_getWidgetSource_spec__0___boxed(lean_object* v___y_1759_, lean_object* v___y_1760_){
_start:
{
lean_object* v_res_1761_; 
v_res_1761_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Widget_getWidgetSource_spec__0(v___y_1759_);
lean_dec_ref(v___y_1759_);
return v_res_1761_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_getWidgetSource_spec__1___redArg(uint64_t v_k_1762_, lean_object* v_t_1763_){
_start:
{
if (lean_obj_tag(v_t_1763_) == 0)
{
lean_object* v_k_1764_; lean_object* v_l_1765_; lean_object* v_r_1766_; uint64_t v___x_1767_; uint8_t v___x_1768_; 
v_k_1764_ = lean_ctor_get(v_t_1763_, 1);
v_l_1765_ = lean_ctor_get(v_t_1763_, 3);
v_r_1766_ = lean_ctor_get(v_t_1763_, 4);
v___x_1767_ = lean_unbox_uint64(v_k_1764_);
v___x_1768_ = lean_uint64_dec_lt(v_k_1762_, v___x_1767_);
if (v___x_1768_ == 0)
{
uint64_t v___x_1769_; uint8_t v___x_1770_; 
v___x_1769_ = lean_unbox_uint64(v_k_1764_);
v___x_1770_ = lean_uint64_dec_eq(v_k_1762_, v___x_1769_);
if (v___x_1770_ == 0)
{
v_t_1763_ = v_r_1766_;
goto _start;
}
else
{
return v___x_1770_;
}
}
else
{
v_t_1763_ = v_l_1765_;
goto _start;
}
}
else
{
uint8_t v___x_1773_; 
v___x_1773_ = 0;
return v___x_1773_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_getWidgetSource_spec__1___redArg___boxed(lean_object* v_k_1774_, lean_object* v_t_1775_){
_start:
{
uint64_t v_k_boxed_1776_; uint8_t v_res_1777_; lean_object* v_r_1778_; 
v_k_boxed_1776_ = lean_unbox_uint64(v_k_1774_);
lean_dec_ref(v_k_1774_);
v_res_1777_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_getWidgetSource_spec__1___redArg(v_k_boxed_1776_, v_t_1775_);
lean_dec(v_t_1775_);
v_r_1778_ = lean_box(v_res_1777_);
return v_r_1778_;
}
}
LEAN_EXPORT uint8_t l_Lean_Widget_getWidgetSource___lam__0(lean_object* v___x_1779_, uint64_t v_hash_1780_, lean_object* v_s_1781_){
_start:
{
lean_object* v___x_1782_; uint8_t v___x_1783_; 
v___x_1782_ = l_Lean_Server_Snapshots_Snapshot_endPos(v_s_1781_);
v___x_1783_ = lean_nat_dec_le(v___x_1779_, v___x_1782_);
lean_dec(v___x_1782_);
if (v___x_1783_ == 0)
{
lean_object* v___x_1784_; lean_object* v_toEnvExtension_1785_; lean_object* v_asyncMode_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; uint8_t v___x_1791_; 
v___x_1784_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_moduleRegistry;
v_toEnvExtension_1785_ = lean_ctor_get(v___x_1784_, 0);
v_asyncMode_1786_ = lean_ctor_get(v_toEnvExtension_1785_, 2);
v___x_1787_ = lean_box(1);
v___x_1788_ = l_Lean_Server_Snapshots_Snapshot_env(v_s_1781_);
v___x_1789_ = lean_box(0);
v___x_1790_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1787_, v___x_1784_, v___x_1788_, v_asyncMode_1786_, v___x_1789_);
v___x_1791_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_getWidgetSource_spec__1___redArg(v_hash_1780_, v___x_1790_);
lean_dec(v___x_1790_);
return v___x_1791_;
}
else
{
return v___x_1783_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___lam__0___boxed(lean_object* v___x_1792_, lean_object* v_hash_1793_, lean_object* v_s_1794_){
_start:
{
uint64_t v_hash_boxed_1795_; uint8_t v_res_1796_; lean_object* v_r_1797_; 
v_hash_boxed_1795_ = lean_unbox_uint64(v_hash_1793_);
lean_dec_ref(v_hash_1793_);
v_res_1796_ = l_Lean_Widget_getWidgetSource___lam__0(v___x_1792_, v_hash_boxed_1795_, v_s_1794_);
lean_dec_ref(v_s_1794_);
lean_dec(v___x_1792_);
v_r_1797_ = lean_box(v_res_1796_);
return v_r_1797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___lam__1(lean_object* v___x_1798_, lean_object* v___y_1799_){
_start:
{
lean_object* v___x_1801_; 
v___x_1801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1798_);
return v___x_1801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___lam__1___boxed(lean_object* v___x_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l_Lean_Widget_getWidgetSource___lam__1(v___x_1802_, v___y_1803_);
lean_dec_ref(v___y_1803_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___lam__2(lean_object* v_snd_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_){
_start:
{
lean_object* v___x_1815_; 
v___x_1815_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalModuleUnsafe(v_snd_1806_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
if (lean_obj_tag(v___x_1815_) == 0)
{
lean_object* v_a_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1825_; 
v_a_1816_ = lean_ctor_get(v___x_1815_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1815_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1818_ = v___x_1815_;
v_isShared_1819_ = v_isSharedCheck_1825_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_a_1816_);
lean_dec(v___x_1815_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1825_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v_javascript_1820_; lean_object* v___x_1821_; lean_object* v___x_1823_; 
v_javascript_1820_ = lean_ctor_get(v_a_1816_, 0);
lean_inc_ref(v_javascript_1820_);
lean_dec(v_a_1816_);
v___x_1821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1821_, 0, v_javascript_1820_);
if (v_isShared_1819_ == 0)
{
lean_ctor_set(v___x_1818_, 0, v___x_1821_);
v___x_1823_ = v___x_1818_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1821_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
else
{
lean_object* v_a_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1833_; 
v_a_1826_ = lean_ctor_get(v___x_1815_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1815_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1828_ = v___x_1815_;
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_a_1826_);
lean_dec(v___x_1815_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1831_; 
if (v_isShared_1829_ == 0)
{
v___x_1831_ = v___x_1828_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_a_1826_);
v___x_1831_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
return v___x_1831_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___lam__2___boxed(lean_object* v_snd_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_){
_start:
{
lean_object* v_res_1843_; 
v_res_1843_ = l_Lean_Widget_getWidgetSource___lam__2(v_snd_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_);
lean_dec(v___y_1841_);
lean_dec_ref(v___y_1840_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
lean_dec(v___y_1837_);
lean_dec_ref(v___y_1836_);
lean_dec_ref(v___y_1835_);
return v_res_1843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___lam__3(uint64_t v_hash_1844_, lean_object* v___x_1845_, lean_object* v_snap_1846_, lean_object* v___y_1847_){
_start:
{
lean_object* v___x_1849_; lean_object* v_toEnvExtension_1850_; lean_object* v_asyncMode_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1849_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_moduleRegistry;
v_toEnvExtension_1850_ = lean_ctor_get(v___x_1849_, 0);
v_asyncMode_1851_ = lean_ctor_get(v_toEnvExtension_1850_, 2);
v___x_1852_ = lean_box(1);
v___x_1853_ = l_Lean_Server_Snapshots_Snapshot_env(v_snap_1846_);
v___x_1854_ = lean_box(0);
v___x_1855_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1852_, v___x_1849_, v___x_1853_, v_asyncMode_1851_, v___x_1854_);
v___x_1856_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___redArg(v___x_1855_, v_hash_1844_);
lean_dec(v___x_1855_);
if (lean_obj_tag(v___x_1856_) == 1)
{
lean_object* v_val_1857_; lean_object* v_snd_1858_; lean_object* v___f_1859_; lean_object* v___x_1860_; 
lean_dec_ref(v___x_1845_);
v_val_1857_ = lean_ctor_get(v___x_1856_, 0);
lean_inc(v_val_1857_);
lean_dec_ref_known(v___x_1856_, 1);
v_snd_1858_ = lean_ctor_get(v_val_1857_, 1);
lean_inc(v_snd_1858_);
lean_dec(v_val_1857_);
v___f_1859_ = lean_alloc_closure((void*)(l_Lean_Widget_getWidgetSource___lam__2___boxed), 9, 1);
lean_closure_set(v___f_1859_, 0, v_snd_1858_);
v___x_1860_ = l_Lean_Server_RequestM_runTermElabM___redArg(v_snap_1846_, v___f_1859_, v___y_1847_);
return v___x_1860_;
}
else
{
lean_object* v___x_1861_; 
lean_dec(v___x_1856_);
lean_dec_ref(v_snap_1846_);
v___x_1861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1861_, 0, v___x_1845_);
return v___x_1861_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___lam__3___boxed(lean_object* v_hash_1862_, lean_object* v___x_1863_, lean_object* v_snap_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_){
_start:
{
uint64_t v_hash_boxed_1867_; lean_object* v_res_1868_; 
v_hash_boxed_1867_ = lean_unbox_uint64(v_hash_1862_);
lean_dec_ref(v_hash_1862_);
v_res_1868_ = l_Lean_Widget_getWidgetSource___lam__3(v_hash_boxed_1867_, v___x_1863_, v_snap_1864_, v___y_1865_);
lean_dec_ref(v___y_1865_);
return v_res_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource(lean_object* v_args_1871_, lean_object* v_a_1872_){
_start:
{
lean_object* v___x_1874_; lean_object* v___x_1875_; uint64_t v_hash_1876_; lean_object* v_pos_1877_; lean_object* v___x_1878_; 
v___x_1874_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_builtinModulesRef;
v___x_1875_ = lean_st_ref_get(v___x_1874_);
v_hash_1876_ = lean_ctor_get_uint64(v_args_1871_, sizeof(void*)*1);
v_pos_1877_ = lean_ctor_get(v_args_1871_, 0);
lean_inc_ref(v_pos_1877_);
lean_dec_ref(v_args_1871_);
v___x_1878_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___redArg(v___x_1875_, v_hash_1876_);
lean_dec(v___x_1875_);
if (lean_obj_tag(v___x_1878_) == 1)
{
lean_object* v_val_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1890_; 
lean_dec_ref(v_pos_1877_);
v_val_1879_ = lean_ctor_get(v___x_1878_, 0);
v_isSharedCheck_1890_ = !lean_is_exclusive(v___x_1878_);
if (v_isSharedCheck_1890_ == 0)
{
v___x_1881_ = v___x_1878_;
v_isShared_1882_ = v_isSharedCheck_1890_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_val_1879_);
lean_dec(v___x_1878_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1890_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v_snd_1883_; lean_object* v_javascript_1884_; lean_object* v___x_1886_; 
v_snd_1883_ = lean_ctor_get(v_val_1879_, 1);
lean_inc(v_snd_1883_);
lean_dec(v_val_1879_);
v_javascript_1884_ = lean_ctor_get(v_snd_1883_, 0);
lean_inc_ref(v_javascript_1884_);
lean_dec(v_snd_1883_);
if (v_isShared_1882_ == 0)
{
lean_ctor_set(v___x_1881_, 0, v_javascript_1884_);
v___x_1886_ = v___x_1881_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v_javascript_1884_);
v___x_1886_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1887_ = lean_task_pure(v___x_1886_);
v___x_1888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1888_, 0, v___x_1887_);
return v___x_1888_;
}
}
}
else
{
lean_object* v___x_1891_; lean_object* v_a_1892_; lean_object* v_toEditableDocumentCore_1893_; lean_object* v_meta_1894_; lean_object* v_text_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___f_1898_; uint8_t v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___f_1907_; lean_object* v___x_1908_; lean_object* v___f_1909_; lean_object* v___x_1910_; 
lean_dec(v___x_1878_);
v___x_1891_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Widget_getWidgetSource_spec__0(v_a_1872_);
v_a_1892_ = lean_ctor_get(v___x_1891_, 0);
lean_inc(v_a_1892_);
lean_dec_ref(v___x_1891_);
v_toEditableDocumentCore_1893_ = lean_ctor_get(v_a_1892_, 0);
v_meta_1894_ = lean_ctor_get(v_toEditableDocumentCore_1893_, 0);
v_text_1895_ = lean_ctor_get(v_meta_1894_, 3);
v___x_1896_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_1895_, v_pos_1877_);
v___x_1897_ = lean_box_uint64(v_hash_1876_);
v___f_1898_ = lean_alloc_closure((void*)(l_Lean_Widget_getWidgetSource___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1898_, 0, v___x_1896_);
lean_closure_set(v___f_1898_, 1, v___x_1897_);
v___x_1899_ = 3;
v___x_1900_ = ((lean_object*)(l_Lean_Widget_getWidgetSource___closed__0));
v___x_1901_ = lean_uint64_to_nat(v_hash_1876_);
v___x_1902_ = l_Nat_reprFast(v___x_1901_);
v___x_1903_ = lean_string_append(v___x_1900_, v___x_1902_);
lean_dec_ref(v___x_1902_);
v___x_1904_ = ((lean_object*)(l_Lean_Widget_getWidgetSource___closed__1));
v___x_1905_ = lean_string_append(v___x_1903_, v___x_1904_);
v___x_1906_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1906_, 0, v___x_1905_);
lean_ctor_set_uint8(v___x_1906_, sizeof(void*)*1, v___x_1899_);
lean_inc_ref(v___x_1906_);
v___f_1907_ = lean_alloc_closure((void*)(l_Lean_Widget_getWidgetSource___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1907_, 0, v___x_1906_);
v___x_1908_ = lean_box_uint64(v_hash_1876_);
v___f_1909_ = lean_alloc_closure((void*)(l_Lean_Widget_getWidgetSource___lam__3___boxed), 5, 2);
lean_closure_set(v___f_1909_, 0, v___x_1908_);
lean_closure_set(v___f_1909_, 1, v___x_1906_);
v___x_1910_ = l_Lean_Server_RequestM_withWaitFindSnap___redArg(v_a_1892_, v___f_1898_, v___f_1907_, v___f_1909_, v_a_1872_);
return v___x_1910_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgetSource___boxed(lean_object* v_args_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_){
_start:
{
lean_object* v_res_1914_; 
v_res_1914_ = l_Lean_Widget_getWidgetSource(v_args_1911_, v_a_1912_);
lean_dec_ref(v_a_1912_);
return v_res_1914_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_getWidgetSource_spec__1(lean_object* v_00_u03b2_1915_, uint64_t v_k_1916_, lean_object* v_t_1917_){
_start:
{
uint8_t v___x_1918_; 
v___x_1918_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_getWidgetSource_spec__1___redArg(v_k_1916_, v_t_1917_);
return v___x_1918_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_getWidgetSource_spec__1___boxed(lean_object* v_00_u03b2_1919_, lean_object* v_k_1920_, lean_object* v_t_1921_){
_start:
{
uint64_t v_k_boxed_1922_; uint8_t v_res_1923_; lean_object* v_r_1924_; 
v_k_boxed_1922_ = lean_unbox_uint64(v_k_1920_);
lean_dec_ref(v_k_1920_);
v_res_1923_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_getWidgetSource_spec__1(v_00_u03b2_1919_, v_k_boxed_1922_, v_t_1921_);
lean_dec(v_t_1921_);
v_r_1924_ = lean_box(v_res_1923_);
return v_r_1924_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_keys_1925_, lean_object* v_i_1926_, lean_object* v_k_1927_){
_start:
{
lean_object* v___x_1928_; uint8_t v___x_1929_; 
v___x_1928_ = lean_array_get_size(v_keys_1925_);
v___x_1929_ = lean_nat_dec_lt(v_i_1926_, v___x_1928_);
if (v___x_1929_ == 0)
{
lean_dec(v_i_1926_);
return v___x_1929_;
}
else
{
lean_object* v_k_x27_1930_; uint8_t v___x_1931_; 
v_k_x27_1930_ = lean_array_fget_borrowed(v_keys_1925_, v_i_1926_);
v___x_1931_ = lean_name_eq(v_k_1927_, v_k_x27_1930_);
if (v___x_1931_ == 0)
{
lean_object* v___x_1932_; lean_object* v___x_1933_; 
v___x_1932_ = lean_unsigned_to_nat(1u);
v___x_1933_ = lean_nat_add(v_i_1926_, v___x_1932_);
lean_dec(v_i_1926_);
v_i_1926_ = v___x_1933_;
goto _start;
}
else
{
lean_dec(v_i_1926_);
return v___x_1929_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_keys_1935_, lean_object* v_i_1936_, lean_object* v_k_1937_){
_start:
{
uint8_t v_res_1938_; lean_object* v_r_1939_; 
v_res_1938_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_keys_1935_, v_i_1936_, v_k_1937_);
lean_dec(v_k_1937_);
lean_dec_ref(v_keys_1935_);
v_r_1939_ = lean_box(v_res_1938_);
return v_r_1939_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_x_1940_, size_t v_x_1941_, lean_object* v_x_1942_){
_start:
{
if (lean_obj_tag(v_x_1940_) == 0)
{
lean_object* v_es_1943_; lean_object* v___x_1944_; size_t v___x_1945_; size_t v___x_1946_; lean_object* v_j_1947_; lean_object* v___x_1948_; 
v_es_1943_ = lean_ctor_get(v_x_1940_, 0);
v___x_1944_ = lean_box(2);
v___x_1945_ = ((size_t)31ULL);
v___x_1946_ = lean_usize_land(v_x_1941_, v___x_1945_);
v_j_1947_ = lean_usize_to_nat(v___x_1946_);
v___x_1948_ = lean_array_get_borrowed(v___x_1944_, v_es_1943_, v_j_1947_);
lean_dec(v_j_1947_);
switch(lean_obj_tag(v___x_1948_))
{
case 0:
{
lean_object* v_key_1949_; uint8_t v___x_1950_; 
v_key_1949_ = lean_ctor_get(v___x_1948_, 0);
v___x_1950_ = lean_name_eq(v_x_1942_, v_key_1949_);
return v___x_1950_;
}
case 1:
{
lean_object* v_node_1951_; size_t v___x_1952_; size_t v___x_1953_; 
v_node_1951_ = lean_ctor_get(v___x_1948_, 0);
v___x_1952_ = ((size_t)5ULL);
v___x_1953_ = lean_usize_shift_right(v_x_1941_, v___x_1952_);
v_x_1940_ = v_node_1951_;
v_x_1941_ = v___x_1953_;
goto _start;
}
default: 
{
uint8_t v___x_1955_; 
v___x_1955_ = 0;
return v___x_1955_;
}
}
}
else
{
lean_object* v_ks_1956_; lean_object* v___x_1957_; uint8_t v___x_1958_; 
v_ks_1956_ = lean_ctor_get(v_x_1940_, 0);
v___x_1957_ = lean_unsigned_to_nat(0u);
v___x_1958_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_ks_1956_, v___x_1957_, v_x_1942_);
return v___x_1958_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_1959_, lean_object* v_x_1960_, lean_object* v_x_1961_){
_start:
{
size_t v_x_1062__boxed_1962_; uint8_t v_res_1963_; lean_object* v_r_1964_; 
v_x_1062__boxed_1962_ = lean_unbox_usize(v_x_1960_);
lean_dec(v_x_1960_);
v_res_1963_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_1959_, v_x_1062__boxed_1962_, v_x_1961_);
lean_dec(v_x_1961_);
lean_dec_ref(v_x_1959_);
v_r_1964_ = lean_box(v_res_1963_);
return v_r_1964_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_x_1965_, lean_object* v_x_1966_){
_start:
{
uint64_t v___y_1968_; 
if (lean_obj_tag(v_x_1966_) == 0)
{
uint64_t v___x_1971_; 
v___x_1971_ = 1723ULL;
v___y_1968_ = v___x_1971_;
goto v___jp_1967_;
}
else
{
uint64_t v_hash_1972_; 
v_hash_1972_ = lean_ctor_get_uint64(v_x_1966_, sizeof(void*)*2);
v___y_1968_ = v_hash_1972_;
goto v___jp_1967_;
}
v___jp_1967_:
{
size_t v___x_1969_; uint8_t v___x_1970_; 
v___x_1969_ = lean_uint64_to_usize(v___y_1968_);
v___x_1970_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_1965_, v___x_1969_, v_x_1966_);
return v___x_1970_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_x_1973_, lean_object* v_x_1974_){
_start:
{
uint8_t v_res_1975_; lean_object* v_r_1976_; 
v_res_1975_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_1973_, v_x_1974_);
lean_dec(v_x_1974_);
lean_dec_ref(v_x_1973_);
v_r_1976_ = lean_box(v_res_1975_);
return v_r_1976_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__7_spec__8___redArg(lean_object* v_x_1977_, lean_object* v_x_1978_, lean_object* v_x_1979_, lean_object* v_x_1980_){
_start:
{
lean_object* v_ks_1981_; lean_object* v_vs_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_2006_; 
v_ks_1981_ = lean_ctor_get(v_x_1977_, 0);
v_vs_1982_ = lean_ctor_get(v_x_1977_, 1);
v_isSharedCheck_2006_ = !lean_is_exclusive(v_x_1977_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_1984_ = v_x_1977_;
v_isShared_1985_ = v_isSharedCheck_2006_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_vs_1982_);
lean_inc(v_ks_1981_);
lean_dec(v_x_1977_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_2006_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1986_; uint8_t v___x_1987_; 
v___x_1986_ = lean_array_get_size(v_ks_1981_);
v___x_1987_ = lean_nat_dec_lt(v_x_1978_, v___x_1986_);
if (v___x_1987_ == 0)
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1991_; 
lean_dec(v_x_1978_);
v___x_1988_ = lean_array_push(v_ks_1981_, v_x_1979_);
v___x_1989_ = lean_array_push(v_vs_1982_, v_x_1980_);
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 1, v___x_1989_);
lean_ctor_set(v___x_1984_, 0, v___x_1988_);
v___x_1991_ = v___x_1984_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v___x_1988_);
lean_ctor_set(v_reuseFailAlloc_1992_, 1, v___x_1989_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
else
{
lean_object* v_k_x27_1993_; uint8_t v___x_1994_; 
v_k_x27_1993_ = lean_array_fget_borrowed(v_ks_1981_, v_x_1978_);
v___x_1994_ = lean_name_eq(v_x_1979_, v_k_x27_1993_);
if (v___x_1994_ == 0)
{
lean_object* v___x_1996_; 
if (v_isShared_1985_ == 0)
{
v___x_1996_ = v___x_1984_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_ks_1981_);
lean_ctor_set(v_reuseFailAlloc_2000_, 1, v_vs_1982_);
v___x_1996_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; 
v___x_1997_ = lean_unsigned_to_nat(1u);
v___x_1998_ = lean_nat_add(v_x_1978_, v___x_1997_);
lean_dec(v_x_1978_);
v_x_1977_ = v___x_1996_;
v_x_1978_ = v___x_1998_;
goto _start;
}
}
else
{
lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2004_; 
v___x_2001_ = lean_array_fset(v_ks_1981_, v_x_1978_, v_x_1979_);
v___x_2002_ = lean_array_fset(v_vs_1982_, v_x_1978_, v_x_1980_);
lean_dec(v_x_1978_);
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 1, v___x_2002_);
lean_ctor_set(v___x_1984_, 0, v___x_2001_);
v___x_2004_ = v___x_1984_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v___x_2001_);
lean_ctor_set(v_reuseFailAlloc_2005_, 1, v___x_2002_);
v___x_2004_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
return v___x_2004_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__7___redArg(lean_object* v_n_2007_, lean_object* v_k_2008_, lean_object* v_v_2009_){
_start:
{
lean_object* v___x_2010_; lean_object* v___x_2011_; 
v___x_2010_ = lean_unsigned_to_nat(0u);
v___x_2011_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__7_spec__8___redArg(v_n_2007_, v___x_2010_, v_k_2008_, v_v_2009_);
return v___x_2011_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_2012_; 
v___x_2012_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_2012_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___redArg(lean_object* v_x_2013_, size_t v_x_2014_, size_t v_x_2015_, lean_object* v_x_2016_, lean_object* v_x_2017_){
_start:
{
if (lean_obj_tag(v_x_2013_) == 0)
{
lean_object* v_es_2018_; size_t v___x_2019_; size_t v___x_2020_; lean_object* v_j_2021_; lean_object* v___x_2022_; uint8_t v___x_2023_; 
v_es_2018_ = lean_ctor_get(v_x_2013_, 0);
v___x_2019_ = ((size_t)31ULL);
v___x_2020_ = lean_usize_land(v_x_2014_, v___x_2019_);
v_j_2021_ = lean_usize_to_nat(v___x_2020_);
v___x_2022_ = lean_array_get_size(v_es_2018_);
v___x_2023_ = lean_nat_dec_lt(v_j_2021_, v___x_2022_);
if (v___x_2023_ == 0)
{
lean_dec(v_j_2021_);
lean_dec(v_x_2017_);
lean_dec(v_x_2016_);
return v_x_2013_;
}
else
{
lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2062_; 
lean_inc_ref(v_es_2018_);
v_isSharedCheck_2062_ = !lean_is_exclusive(v_x_2013_);
if (v_isSharedCheck_2062_ == 0)
{
lean_object* v_unused_2063_; 
v_unused_2063_ = lean_ctor_get(v_x_2013_, 0);
lean_dec(v_unused_2063_);
v___x_2025_ = v_x_2013_;
v_isShared_2026_ = v_isSharedCheck_2062_;
goto v_resetjp_2024_;
}
else
{
lean_dec(v_x_2013_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2062_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
lean_object* v_v_2027_; lean_object* v___x_2028_; lean_object* v_xs_x27_2029_; lean_object* v___y_2031_; 
v_v_2027_ = lean_array_fget(v_es_2018_, v_j_2021_);
v___x_2028_ = lean_box(0);
v_xs_x27_2029_ = lean_array_fset(v_es_2018_, v_j_2021_, v___x_2028_);
switch(lean_obj_tag(v_v_2027_))
{
case 0:
{
lean_object* v_key_2036_; lean_object* v_val_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2047_; 
v_key_2036_ = lean_ctor_get(v_v_2027_, 0);
v_val_2037_ = lean_ctor_get(v_v_2027_, 1);
v_isSharedCheck_2047_ = !lean_is_exclusive(v_v_2027_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2039_ = v_v_2027_;
v_isShared_2040_ = v_isSharedCheck_2047_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_val_2037_);
lean_inc(v_key_2036_);
lean_dec(v_v_2027_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2047_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
uint8_t v___x_2041_; 
v___x_2041_ = lean_name_eq(v_x_2016_, v_key_2036_);
if (v___x_2041_ == 0)
{
lean_object* v___x_2042_; lean_object* v___x_2043_; 
lean_del_object(v___x_2039_);
v___x_2042_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2036_, v_val_2037_, v_x_2016_, v_x_2017_);
v___x_2043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2042_);
v___y_2031_ = v___x_2043_;
goto v___jp_2030_;
}
else
{
lean_object* v___x_2045_; 
lean_dec(v_val_2037_);
lean_dec(v_key_2036_);
if (v_isShared_2040_ == 0)
{
lean_ctor_set(v___x_2039_, 1, v_x_2017_);
lean_ctor_set(v___x_2039_, 0, v_x_2016_);
v___x_2045_ = v___x_2039_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v_x_2016_);
lean_ctor_set(v_reuseFailAlloc_2046_, 1, v_x_2017_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
v___y_2031_ = v___x_2045_;
goto v___jp_2030_;
}
}
}
}
case 1:
{
lean_object* v_node_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2060_; 
v_node_2048_ = lean_ctor_get(v_v_2027_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v_v_2027_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2050_ = v_v_2027_;
v_isShared_2051_ = v_isSharedCheck_2060_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_node_2048_);
lean_dec(v_v_2027_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2060_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
size_t v___x_2052_; size_t v___x_2053_; size_t v___x_2054_; size_t v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2058_; 
v___x_2052_ = ((size_t)5ULL);
v___x_2053_ = lean_usize_shift_right(v_x_2014_, v___x_2052_);
v___x_2054_ = ((size_t)1ULL);
v___x_2055_ = lean_usize_add(v_x_2015_, v___x_2054_);
v___x_2056_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___redArg(v_node_2048_, v___x_2053_, v___x_2055_, v_x_2016_, v_x_2017_);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2056_);
v___x_2058_ = v___x_2050_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v___x_2056_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
v___y_2031_ = v___x_2058_;
goto v___jp_2030_;
}
}
}
default: 
{
lean_object* v___x_2061_; 
v___x_2061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2061_, 0, v_x_2016_);
lean_ctor_set(v___x_2061_, 1, v_x_2017_);
v___y_2031_ = v___x_2061_;
goto v___jp_2030_;
}
}
v___jp_2030_:
{
lean_object* v___x_2032_; lean_object* v___x_2034_; 
v___x_2032_ = lean_array_fset(v_xs_x27_2029_, v_j_2021_, v___y_2031_);
lean_dec(v_j_2021_);
if (v_isShared_2026_ == 0)
{
lean_ctor_set(v___x_2025_, 0, v___x_2032_);
v___x_2034_ = v___x_2025_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v___x_2032_);
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
else
{
lean_object* v_ks_2064_; lean_object* v_vs_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2083_; 
v_ks_2064_ = lean_ctor_get(v_x_2013_, 0);
v_vs_2065_ = lean_ctor_get(v_x_2013_, 1);
v_isSharedCheck_2083_ = !lean_is_exclusive(v_x_2013_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2067_ = v_x_2013_;
v_isShared_2068_ = v_isSharedCheck_2083_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_vs_2065_);
lean_inc(v_ks_2064_);
lean_dec(v_x_2013_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2083_;
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
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v_ks_2064_);
lean_ctor_set(v_reuseFailAlloc_2082_, 1, v_vs_2065_);
v___x_2070_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
lean_object* v_newNode_2071_; size_t v___x_2072_; uint8_t v___x_2073_; 
v_newNode_2071_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__7___redArg(v___x_2070_, v_x_2016_, v_x_2017_);
v___x_2072_ = ((size_t)7ULL);
v___x_2073_ = lean_usize_dec_le(v___x_2072_, v_x_2015_);
if (v___x_2073_ == 0)
{
lean_object* v___x_2074_; lean_object* v___x_2075_; uint8_t v___x_2076_; 
v___x_2074_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2071_);
v___x_2075_ = lean_unsigned_to_nat(4u);
v___x_2076_ = lean_nat_dec_lt(v___x_2074_, v___x_2075_);
lean_dec(v___x_2074_);
if (v___x_2076_ == 0)
{
lean_object* v_ks_2077_; lean_object* v_vs_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v_ks_2077_ = lean_ctor_get(v_newNode_2071_, 0);
lean_inc_ref(v_ks_2077_);
v_vs_2078_ = lean_ctor_get(v_newNode_2071_, 1);
lean_inc_ref(v_vs_2078_);
lean_dec_ref(v_newNode_2071_);
v___x_2079_ = lean_unsigned_to_nat(0u);
v___x_2080_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___redArg___closed__0);
v___x_2081_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__8___redArg(v_x_2015_, v_ks_2077_, v_vs_2078_, v___x_2079_, v___x_2080_);
lean_dec_ref(v_vs_2078_);
lean_dec_ref(v_ks_2077_);
return v___x_2081_;
}
else
{
return v_newNode_2071_;
}
}
else
{
return v_newNode_2071_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__8___redArg(size_t v_depth_2084_, lean_object* v_keys_2085_, lean_object* v_vals_2086_, lean_object* v_i_2087_, lean_object* v_entries_2088_){
_start:
{
lean_object* v___x_2089_; uint8_t v___x_2090_; 
v___x_2089_ = lean_array_get_size(v_keys_2085_);
v___x_2090_ = lean_nat_dec_lt(v_i_2087_, v___x_2089_);
if (v___x_2090_ == 0)
{
lean_dec(v_i_2087_);
return v_entries_2088_;
}
else
{
lean_object* v_k_2091_; lean_object* v_v_2092_; uint64_t v___y_2094_; 
v_k_2091_ = lean_array_fget_borrowed(v_keys_2085_, v_i_2087_);
v_v_2092_ = lean_array_fget_borrowed(v_vals_2086_, v_i_2087_);
if (lean_obj_tag(v_k_2091_) == 0)
{
uint64_t v___x_2105_; 
v___x_2105_ = 1723ULL;
v___y_2094_ = v___x_2105_;
goto v___jp_2093_;
}
else
{
uint64_t v_hash_2106_; 
v_hash_2106_ = lean_ctor_get_uint64(v_k_2091_, sizeof(void*)*2);
v___y_2094_ = v_hash_2106_;
goto v___jp_2093_;
}
v___jp_2093_:
{
size_t v_h_2095_; size_t v___x_2096_; lean_object* v___x_2097_; size_t v___x_2098_; size_t v___x_2099_; size_t v___x_2100_; size_t v_h_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; 
v_h_2095_ = lean_uint64_to_usize(v___y_2094_);
v___x_2096_ = ((size_t)5ULL);
v___x_2097_ = lean_unsigned_to_nat(1u);
v___x_2098_ = ((size_t)1ULL);
v___x_2099_ = lean_usize_sub(v_depth_2084_, v___x_2098_);
v___x_2100_ = lean_usize_mul(v___x_2096_, v___x_2099_);
v_h_2101_ = lean_usize_shift_right(v_h_2095_, v___x_2100_);
v___x_2102_ = lean_nat_add(v_i_2087_, v___x_2097_);
lean_dec(v_i_2087_);
lean_inc(v_v_2092_);
lean_inc(v_k_2091_);
v___x_2103_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___redArg(v_entries_2088_, v_h_2101_, v_depth_2084_, v_k_2091_, v_v_2092_);
v_i_2087_ = v___x_2102_;
v_entries_2088_ = v___x_2103_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__8___redArg___boxed(lean_object* v_depth_2107_, lean_object* v_keys_2108_, lean_object* v_vals_2109_, lean_object* v_i_2110_, lean_object* v_entries_2111_){
_start:
{
size_t v_depth_boxed_2112_; lean_object* v_res_2113_; 
v_depth_boxed_2112_ = lean_unbox_usize(v_depth_2107_);
lean_dec(v_depth_2107_);
v_res_2113_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__8___redArg(v_depth_boxed_2112_, v_keys_2108_, v_vals_2109_, v_i_2110_, v_entries_2111_);
lean_dec_ref(v_vals_2109_);
lean_dec_ref(v_keys_2108_);
return v_res_2113_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_x_2114_, lean_object* v_x_2115_, lean_object* v_x_2116_, lean_object* v_x_2117_, lean_object* v_x_2118_){
_start:
{
size_t v_x_1197__boxed_2119_; size_t v_x_1198__boxed_2120_; lean_object* v_res_2121_; 
v_x_1197__boxed_2119_ = lean_unbox_usize(v_x_2115_);
lean_dec(v_x_2115_);
v_x_1198__boxed_2120_ = lean_unbox_usize(v_x_2116_);
lean_dec(v_x_2116_);
v_res_2121_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___redArg(v_x_2114_, v_x_1197__boxed_2119_, v_x_1198__boxed_2120_, v_x_2117_, v_x_2118_);
return v_res_2121_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2___redArg(lean_object* v_x_2122_, lean_object* v_x_2123_, lean_object* v_x_2124_){
_start:
{
uint64_t v___y_2126_; 
if (lean_obj_tag(v_x_2123_) == 0)
{
uint64_t v___x_2130_; 
v___x_2130_ = 1723ULL;
v___y_2126_ = v___x_2130_;
goto v___jp_2125_;
}
else
{
uint64_t v_hash_2131_; 
v_hash_2131_ = lean_ctor_get_uint64(v_x_2123_, sizeof(void*)*2);
v___y_2126_ = v_hash_2131_;
goto v___jp_2125_;
}
v___jp_2125_:
{
size_t v___x_2127_; size_t v___x_2128_; lean_object* v___x_2129_; 
v___x_2127_ = lean_uint64_to_usize(v___y_2126_);
v___x_2128_ = ((size_t)1ULL);
v___x_2129_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___redArg(v_x_2122_, v___x_2127_, v___x_2128_, v_x_2123_, v_x_2124_);
return v___x_2129_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__0(lean_object* v___y_2132_){
_start:
{
lean_inc(v___y_2132_);
return v___y_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__0___boxed(lean_object* v___y_2133_){
_start:
{
lean_object* v_res_2134_; 
v_res_2134_ = l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__0(v___y_2133_);
lean_dec(v___y_2133_);
return v_res_2134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__1(lean_object* v_expireTime_2135_, lean_object* v_x_2136_){
_start:
{
lean_object* v___x_2137_; 
v___x_2137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2137_, 0, v_x_2136_);
lean_ctor_set(v___x_2137_, 1, v_expireTime_2135_);
return v___x_2137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__2(lean_object* v_val_2138_, lean_object* v___f_2139_, lean_object* v_x_2140_, lean_object* v___y_2141_){
_start:
{
if (lean_obj_tag(v_x_2140_) == 0)
{
lean_object* v_a_2143_; lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2150_; 
lean_dec_ref(v___f_2139_);
v_a_2143_ = lean_ctor_get(v_x_2140_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v_x_2140_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2145_ = v_x_2140_;
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
else
{
lean_inc(v_a_2143_);
lean_dec(v_x_2140_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v___x_2148_; 
if (v_isShared_2146_ == 0)
{
lean_ctor_set_tag(v___x_2145_, 1);
v___x_2148_ = v___x_2145_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_a_2143_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
}
else
{
lean_object* v_a_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2174_; 
v_a_2151_ = lean_ctor_get(v_x_2140_, 0);
v_isSharedCheck_2174_ = !lean_is_exclusive(v_x_2140_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_2153_ = v_x_2140_;
v_isShared_2154_ = v_isSharedCheck_2174_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_a_2151_);
lean_dec(v_x_2140_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2174_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2155_; lean_object* v_objects_2156_; lean_object* v_expireTime_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2173_; 
v___x_2155_ = lean_st_ref_take(v_val_2138_);
v_objects_2156_ = lean_ctor_get(v___x_2155_, 0);
v_expireTime_2157_ = lean_ctor_get(v___x_2155_, 1);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2159_ = v___x_2155_;
v_isShared_2160_ = v_isSharedCheck_2173_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_expireTime_2157_);
lean_inc(v_objects_2156_);
lean_dec(v___x_2155_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2173_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___f_2161_; lean_object* v___x_2162_; lean_object* v___x_2164_; 
v___f_2161_ = lean_alloc_closure((void*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__1), 2, 1);
lean_closure_set(v___f_2161_, 0, v_expireTime_2157_);
v___x_2162_ = l_Lean_Widget_instToJsonWidgetSource_toJson(v_a_2151_);
if (v_isShared_2160_ == 0)
{
lean_ctor_set(v___x_2159_, 1, v_objects_2156_);
lean_ctor_set(v___x_2159_, 0, v___x_2162_);
v___x_2164_ = v___x_2159_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v___x_2162_);
lean_ctor_set(v_reuseFailAlloc_2172_, 1, v_objects_2156_);
v___x_2164_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
lean_object* v___x_2165_; lean_object* v_fst_2166_; lean_object* v_snd_2167_; lean_object* v___x_2168_; lean_object* v___x_2170_; 
v___x_2165_ = l_Prod_map___redArg(v___f_2139_, v___f_2161_, v___x_2164_);
v_fst_2166_ = lean_ctor_get(v___x_2165_, 0);
lean_inc(v_fst_2166_);
v_snd_2167_ = lean_ctor_get(v___x_2165_, 1);
lean_inc(v_snd_2167_);
lean_dec_ref(v___x_2165_);
v___x_2168_ = lean_st_ref_put(v_val_2138_, v_snd_2167_);
if (v_isShared_2154_ == 0)
{
lean_ctor_set_tag(v___x_2153_, 0);
lean_ctor_set(v___x_2153_, 0, v_fst_2166_);
v___x_2170_ = v___x_2153_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_fst_2166_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__2___boxed(lean_object* v_val_2175_, lean_object* v___f_2176_, lean_object* v_x_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_){
_start:
{
lean_object* v_res_2180_; 
v_res_2180_ = l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__2(v_val_2175_, v___f_2176_, v_x_2177_, v___y_2178_);
lean_dec_ref(v___y_2178_);
lean_dec(v_val_2175_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3(lean_object* v___f_2188_, lean_object* v_method_2189_, lean_object* v_handler_2190_, uint64_t v_seshId_2191_, lean_object* v_j_2192_, lean_object* v___y_2193_){
_start:
{
lean_object* v_rpcSessions_2195_; lean_object* v___x_2196_; 
v_rpcSessions_2195_ = lean_ctor_get(v___y_2193_, 0);
v___x_2196_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___redArg(v_rpcSessions_2195_, v_seshId_2191_);
if (lean_obj_tag(v___x_2196_) == 1)
{
lean_object* v_val_2197_; lean_object* v___f_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v_val_2197_ = lean_ctor_get(v___x_2196_, 0);
lean_inc_n(v_val_2197_, 2);
lean_dec_ref_known(v___x_2196_, 1);
v___f_2198_ = lean_alloc_closure((void*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__2___boxed), 5, 2);
lean_closure_set(v___f_2198_, 0, v_val_2197_);
lean_closure_set(v___f_2198_, 1, v___f_2188_);
v___x_2199_ = lean_st_ref_get(v_val_2197_);
lean_dec(v_val_2197_);
lean_dec(v___x_2199_);
lean_inc(v_j_2192_);
v___x_2200_ = l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson(v_j_2192_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2221_; 
lean_dec_ref(v___f_2198_);
lean_dec_ref(v_handler_2190_);
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2203_ = v___x_2200_;
v_isShared_2204_ = v_isSharedCheck_2221_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_dec(v___x_2200_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2221_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
uint8_t v___x_2205_; lean_object* v___x_2206_; uint8_t v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2219_; 
v___x_2205_ = 3;
v___x_2206_ = ((lean_object*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__0));
v___x_2207_ = 1;
v___x_2208_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_method_2189_, v___x_2207_);
v___x_2209_ = lean_string_append(v___x_2206_, v___x_2208_);
lean_dec_ref(v___x_2208_);
v___x_2210_ = ((lean_object*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__1));
v___x_2211_ = lean_string_append(v___x_2209_, v___x_2210_);
v___x_2212_ = l_Lean_Json_compress(v_j_2192_);
v___x_2213_ = lean_string_append(v___x_2211_, v___x_2212_);
lean_dec_ref(v___x_2212_);
v___x_2214_ = ((lean_object*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__2));
v___x_2215_ = lean_string_append(v___x_2213_, v___x_2214_);
v___x_2216_ = lean_string_append(v___x_2215_, v_a_2201_);
lean_dec(v_a_2201_);
v___x_2217_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2217_, 0, v___x_2216_);
lean_ctor_set_uint8(v___x_2217_, sizeof(void*)*1, v___x_2205_);
if (v_isShared_2204_ == 0)
{
lean_ctor_set_tag(v___x_2203_, 1);
lean_ctor_set(v___x_2203_, 0, v___x_2217_);
v___x_2219_ = v___x_2203_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v___x_2217_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
else
{
lean_object* v_a_2222_; lean_object* v___x_2223_; 
lean_dec(v_j_2192_);
lean_dec(v_method_2189_);
v_a_2222_ = lean_ctor_get(v___x_2200_, 0);
lean_inc(v_a_2222_);
lean_dec_ref_known(v___x_2200_, 1);
lean_inc_ref(v___y_2193_);
v___x_2223_ = lean_apply_3(v_handler_2190_, v_a_2222_, v___y_2193_, lean_box(0));
if (lean_obj_tag(v___x_2223_) == 0)
{
lean_object* v_a_2224_; lean_object* v___x_2225_; 
v_a_2224_ = lean_ctor_get(v___x_2223_, 0);
lean_inc(v_a_2224_);
lean_dec_ref_known(v___x_2223_, 1);
v___x_2225_ = l_Lean_Server_RequestM_mapTaskCheap___redArg(v_a_2224_, v___f_2198_, v___y_2193_);
return v___x_2225_;
}
else
{
lean_object* v_a_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2233_; 
lean_dec_ref(v___f_2198_);
v_a_2226_ = lean_ctor_get(v___x_2223_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2223_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2228_ = v___x_2223_;
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_a_2226_);
lean_dec(v___x_2223_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2231_; 
if (v_isShared_2229_ == 0)
{
v___x_2231_ = v___x_2228_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v_a_2226_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
return v___x_2231_;
}
}
}
}
}
else
{
lean_object* v___x_2234_; lean_object* v___x_2235_; 
lean_dec(v___x_2196_);
lean_dec(v_j_2192_);
lean_dec_ref(v_handler_2190_);
lean_dec(v_method_2189_);
lean_dec_ref(v___f_2188_);
v___x_2234_ = ((lean_object*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__4));
v___x_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2234_);
return v___x_2235_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___boxed(lean_object* v___f_2236_, lean_object* v_method_2237_, lean_object* v_handler_2238_, lean_object* v_seshId_2239_, lean_object* v_j_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_){
_start:
{
uint64_t v_seshId_boxed_2243_; lean_object* v_res_2244_; 
v_seshId_boxed_2243_ = lean_unbox_uint64(v_seshId_2239_);
lean_dec_ref(v_seshId_2239_);
v_res_2244_ = l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3(v___f_2236_, v_method_2237_, v_handler_2238_, v_seshId_boxed_2243_, v_j_2240_, v___y_2241_);
lean_dec_ref(v___y_2241_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_method_2246_, lean_object* v_handler_2247_){
_start:
{
lean_object* v___f_2248_; lean_object* v___f_2249_; 
v___f_2248_ = ((lean_object*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___closed__0));
v___f_2249_ = lean_alloc_closure((void*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___boxed), 7, 3);
lean_closure_set(v___f_2249_, 0, v___f_2248_);
lean_closure_set(v___f_2249_, 1, v_method_2246_);
lean_closure_set(v___f_2249_, 2, v_handler_2247_);
return v___f_2249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0(lean_object* v_method_2254_, lean_object* v_handler_2255_){
_start:
{
lean_object* v___x_2257_; uint8_t v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v_errMsg_2262_; uint8_t v___x_2263_; 
v___x_2257_ = ((lean_object*)(l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__0));
v___x_2258_ = 1;
lean_inc(v_method_2254_);
v___x_2259_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_method_2254_, v___x_2258_);
v___x_2260_ = lean_string_append(v___x_2257_, v___x_2259_);
lean_dec_ref(v___x_2259_);
v___x_2261_ = ((lean_object*)(l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__1));
v_errMsg_2262_ = lean_string_append(v___x_2260_, v___x_2261_);
v___x_2263_ = l_Lean_initializing();
if (v___x_2263_ == 0)
{
lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; 
lean_dec_ref(v_handler_2255_);
lean_dec(v_method_2254_);
v___x_2264_ = ((lean_object*)(l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__2));
v___x_2265_ = lean_string_append(v_errMsg_2262_, v___x_2264_);
v___x_2266_ = lean_mk_io_user_error(v___x_2265_);
v___x_2267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2267_, 0, v___x_2266_);
return v___x_2267_;
}
else
{
lean_object* v___x_2268_; lean_object* v___x_2269_; uint8_t v___x_2270_; 
v___x_2268_ = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_builtinRpcProcedures;
v___x_2269_ = lean_st_ref_get(v___x_2268_);
v___x_2270_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0___redArg(v___x_2269_, v_method_2254_);
lean_dec(v___x_2269_);
if (v___x_2270_ == 0)
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; 
lean_dec_ref(v_errMsg_2262_);
lean_inc(v_method_2254_);
v___x_2271_ = l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1(v_method_2254_, v_handler_2255_);
v___x_2272_ = lean_st_ref_take(v___x_2268_);
v___x_2273_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2___redArg(v___x_2272_, v_method_2254_, v___x_2271_);
v___x_2274_ = lean_st_ref_put(v___x_2268_, v___x_2273_);
v___x_2275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2274_);
return v___x_2275_;
}
else
{
lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
lean_dec_ref(v_handler_2255_);
lean_dec(v_method_2254_);
v___x_2276_ = ((lean_object*)(l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__3));
v___x_2277_ = lean_string_append(v_errMsg_2262_, v___x_2276_);
v___x_2278_ = lean_mk_io_user_error(v___x_2277_);
v___x_2279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2279_, 0, v___x_2278_);
return v___x_2279_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___boxed(lean_object* v_method_2280_, lean_object* v_handler_2281_, lean_object* v_a_2282_){
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0(v_method_2280_, v_handler_2281_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2291_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2_));
v___x_2292_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2_));
v___x_2293_ = l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0(v___x_2291_, v___x_2292_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2____boxed(lean_object* v_a_2294_){
_start:
{
lean_object* v_res_2295_; 
v_res_2295_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2_();
return v_res_2295_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_2296_, lean_object* v_x_2297_, lean_object* v_x_2298_){
_start:
{
uint8_t v___x_2299_; 
v___x_2299_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_2297_, v_x_2298_);
return v___x_2299_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_2300_, lean_object* v_x_2301_, lean_object* v_x_2302_){
_start:
{
uint8_t v_res_2303_; lean_object* v_r_2304_; 
v_res_2303_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_2300_, v_x_2301_, v_x_2302_);
lean_dec(v_x_2302_);
lean_dec_ref(v_x_2301_);
v_r_2304_ = lean_box(v_res_2303_);
return v_r_2304_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(lean_object* v_x_2305_){
_start:
{
lean_inc_ref(v_x_2305_);
return v_x_2305_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_x_2306_){
_start:
{
lean_object* v_res_2307_; 
v_res_2307_ = l_MonadExcept_ofExcept___at___00Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(v_x_2306_);
lean_dec_ref(v_x_2306_);
return v_res_2307_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1_spec__3(lean_object* v_00_u03b1_2308_, lean_object* v_x_2309_, lean_object* v___y_2310_){
_start:
{
lean_inc_ref(v_x_2309_);
return v_x_2309_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b1_2311_, lean_object* v_x_2312_, lean_object* v___y_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l_MonadExcept_ofExcept___at___00Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1_spec__3(v_00_u03b1_2311_, v_x_2312_, v___y_2313_);
lean_dec_ref(v___y_2313_);
lean_dec_ref(v_x_2312_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2(lean_object* v_00_u03b2_2315_, lean_object* v_x_2316_, lean_object* v_x_2317_, lean_object* v_x_2318_){
_start:
{
lean_object* v___x_2319_; 
v___x_2319_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2___redArg(v_x_2316_, v_x_2317_, v_x_2318_);
return v___x_2319_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2320_, lean_object* v_x_2321_, size_t v_x_2322_, lean_object* v_x_2323_){
_start:
{
uint8_t v___x_2324_; 
v___x_2324_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_2321_, v_x_2322_, v_x_2323_);
return v___x_2324_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2325_, lean_object* v_x_2326_, lean_object* v_x_2327_, lean_object* v_x_2328_){
_start:
{
size_t v_x_1681__boxed_2329_; uint8_t v_res_2330_; lean_object* v_r_2331_; 
v_x_1681__boxed_2329_ = lean_unbox_usize(v_x_2327_);
lean_dec(v_x_2327_);
v_res_2330_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03b2_2325_, v_x_2326_, v_x_1681__boxed_2329_, v_x_2328_);
lean_dec(v_x_2328_);
lean_dec_ref(v_x_2326_);
v_r_2331_ = lean_box(v_res_2330_);
return v_r_2331_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5(lean_object* v_00_u03b2_2332_, lean_object* v_x_2333_, size_t v_x_2334_, size_t v_x_2335_, lean_object* v_x_2336_, lean_object* v_x_2337_){
_start:
{
lean_object* v___x_2338_; 
v___x_2338_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___redArg(v_x_2333_, v_x_2334_, v_x_2335_, v_x_2336_, v_x_2337_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_2339_, lean_object* v_x_2340_, lean_object* v_x_2341_, lean_object* v_x_2342_, lean_object* v_x_2343_, lean_object* v_x_2344_){
_start:
{
size_t v_x_1692__boxed_2345_; size_t v_x_1693__boxed_2346_; lean_object* v_res_2347_; 
v_x_1692__boxed_2345_ = lean_unbox_usize(v_x_2341_);
lean_dec(v_x_2341_);
v_x_1693__boxed_2346_ = lean_unbox_usize(v_x_2342_);
lean_dec(v_x_2342_);
v_res_2347_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5(v_00_u03b2_2339_, v_x_2340_, v_x_1692__boxed_2345_, v_x_1693__boxed_2346_, v_x_2343_, v_x_2344_);
return v_res_2347_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2348_, lean_object* v_keys_2349_, lean_object* v_vals_2350_, lean_object* v_heq_2351_, lean_object* v_i_2352_, lean_object* v_k_2353_){
_start:
{
uint8_t v___x_2354_; 
v___x_2354_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_keys_2349_, v_i_2352_, v_k_2353_);
return v___x_2354_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2355_, lean_object* v_keys_2356_, lean_object* v_vals_2357_, lean_object* v_heq_2358_, lean_object* v_i_2359_, lean_object* v_k_2360_){
_start:
{
uint8_t v_res_2361_; lean_object* v_r_2362_; 
v_res_2361_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(v_00_u03b2_2355_, v_keys_2356_, v_vals_2357_, v_heq_2358_, v_i_2359_, v_k_2360_);
lean_dec(v_k_2360_);
lean_dec_ref(v_vals_2357_);
lean_dec_ref(v_keys_2356_);
v_r_2362_ = lean_box(v_res_2361_);
return v_r_2362_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__7(lean_object* v_00_u03b2_2363_, lean_object* v_n_2364_, lean_object* v_k_2365_, lean_object* v_v_2366_){
_start:
{
lean_object* v___x_2367_; 
v___x_2367_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__7___redArg(v_n_2364_, v_k_2365_, v_v_2366_);
return v___x_2367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__8(lean_object* v_00_u03b2_2368_, size_t v_depth_2369_, lean_object* v_keys_2370_, lean_object* v_vals_2371_, lean_object* v_heq_2372_, lean_object* v_i_2373_, lean_object* v_entries_2374_){
_start:
{
lean_object* v___x_2375_; 
v___x_2375_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__8___redArg(v_depth_2369_, v_keys_2370_, v_vals_2371_, v_i_2373_, v_entries_2374_);
return v___x_2375_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__8___boxed(lean_object* v_00_u03b2_2376_, lean_object* v_depth_2377_, lean_object* v_keys_2378_, lean_object* v_vals_2379_, lean_object* v_heq_2380_, lean_object* v_i_2381_, lean_object* v_entries_2382_){
_start:
{
size_t v_depth_boxed_2383_; lean_object* v_res_2384_; 
v_depth_boxed_2383_ = lean_unbox_usize(v_depth_2377_);
lean_dec(v_depth_2377_);
v_res_2384_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__8(v_00_u03b2_2376_, v_depth_boxed_2383_, v_keys_2378_, v_vals_2379_, v_heq_2380_, v_i_2381_, v_entries_2382_);
lean_dec_ref(v_vals_2379_);
lean_dec_ref(v_keys_2378_);
return v_res_2384_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__7_spec__8(lean_object* v_00_u03b2_2385_, lean_object* v_x_2386_, lean_object* v_x_2387_, lean_object* v_x_2388_, lean_object* v_x_2389_){
_start:
{
lean_object* v___x_2390_; 
v___x_2390_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__7_spec__8___redArg(v_x_2386_, v_x_2387_, v_x_2388_, v_x_2389_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_ctorIdx___impl(lean_object* v_x_2391_){
_start:
{
lean_object* v___x_2392_; 
v___x_2392_ = lean_obj_tag_nat(v_x_2391_);
return v___x_2392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_ctorIdx___impl___boxed(lean_object* v_x_2393_){
_start:
{
lean_object* v_res_2394_; 
v_res_2394_ = l_Lean_Widget_PanelWidgetsExtEntry_ctorIdx___impl(v_x_2393_);
lean_dec_ref(v_x_2393_);
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_ctorElim___redArg(lean_object* v_t_2395_, lean_object* v_k_2396_){
_start:
{
if (lean_obj_tag(v_t_2395_) == 0)
{
lean_object* v_n_2397_; lean_object* v___x_2398_; 
v_n_2397_ = lean_ctor_get(v_t_2395_, 0);
lean_inc(v_n_2397_);
lean_dec_ref_known(v_t_2395_, 1);
v___x_2398_ = lean_apply_1(v_k_2396_, v_n_2397_);
return v___x_2398_;
}
else
{
lean_object* v_wi_2399_; lean_object* v___x_2400_; 
v_wi_2399_ = lean_ctor_get(v_t_2395_, 0);
lean_inc_ref(v_wi_2399_);
lean_dec_ref_known(v_t_2395_, 1);
v___x_2400_ = lean_apply_1(v_k_2396_, v_wi_2399_);
return v___x_2400_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_ctorElim(lean_object* v_motive_2401_, lean_object* v_ctorIdx_2402_, lean_object* v_t_2403_, lean_object* v_h_2404_, lean_object* v_k_2405_){
_start:
{
lean_object* v___x_2406_; 
v___x_2406_ = l_Lean_Widget_PanelWidgetsExtEntry_ctorElim___redArg(v_t_2403_, v_k_2405_);
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_ctorElim___boxed(lean_object* v_motive_2407_, lean_object* v_ctorIdx_2408_, lean_object* v_t_2409_, lean_object* v_h_2410_, lean_object* v_k_2411_){
_start:
{
lean_object* v_res_2412_; 
v_res_2412_ = l_Lean_Widget_PanelWidgetsExtEntry_ctorElim(v_motive_2407_, v_ctorIdx_2408_, v_t_2409_, v_h_2410_, v_k_2411_);
lean_dec(v_ctorIdx_2408_);
return v_res_2412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_global_elim___redArg(lean_object* v_t_2413_, lean_object* v_global_2414_){
_start:
{
lean_object* v___x_2415_; 
v___x_2415_ = l_Lean_Widget_PanelWidgetsExtEntry_ctorElim___redArg(v_t_2413_, v_global_2414_);
return v___x_2415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_global_elim(lean_object* v_motive_2416_, lean_object* v_t_2417_, lean_object* v_h_2418_, lean_object* v_global_2419_){
_start:
{
lean_object* v___x_2420_; 
v___x_2420_ = l_Lean_Widget_PanelWidgetsExtEntry_ctorElim___redArg(v_t_2417_, v_global_2419_);
return v___x_2420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_local_elim___redArg(lean_object* v_t_2421_, lean_object* v_local_2422_){
_start:
{
lean_object* v___x_2423_; 
v___x_2423_ = l_Lean_Widget_PanelWidgetsExtEntry_ctorElim___redArg(v_t_2421_, v_local_2422_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_PanelWidgetsExtEntry_local_elim(lean_object* v_motive_2424_, lean_object* v_t_2425_, lean_object* v_h_2426_, lean_object* v_local_2427_){
_start:
{
lean_object* v___x_2428_; 
v___x_2428_ = l_Lean_Widget_PanelWidgetsExtEntry_ctorElim___redArg(v_t_2425_, v_local_2427_);
return v___x_2428_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__spec__0___redArg(lean_object* v_t_2429_, uint64_t v_k_2430_, lean_object* v_fallback_2431_){
_start:
{
if (lean_obj_tag(v_t_2429_) == 0)
{
lean_object* v_k_2432_; lean_object* v_v_2433_; lean_object* v_l_2434_; lean_object* v_r_2435_; uint64_t v___x_2436_; uint8_t v___x_2437_; 
v_k_2432_ = lean_ctor_get(v_t_2429_, 1);
v_v_2433_ = lean_ctor_get(v_t_2429_, 2);
v_l_2434_ = lean_ctor_get(v_t_2429_, 3);
v_r_2435_ = lean_ctor_get(v_t_2429_, 4);
v___x_2436_ = lean_unbox_uint64(v_k_2432_);
v___x_2437_ = lean_uint64_dec_lt(v_k_2430_, v___x_2436_);
if (v___x_2437_ == 0)
{
uint64_t v___x_2438_; uint8_t v___x_2439_; 
v___x_2438_ = lean_unbox_uint64(v_k_2432_);
v___x_2439_ = lean_uint64_dec_eq(v_k_2430_, v___x_2438_);
if (v___x_2439_ == 0)
{
v_t_2429_ = v_r_2435_;
goto _start;
}
else
{
lean_inc(v_v_2433_);
return v_v_2433_;
}
}
else
{
v_t_2429_ = v_l_2434_;
goto _start;
}
}
else
{
lean_inc(v_fallback_2431_);
return v_fallback_2431_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_t_2442_, lean_object* v_k_2443_, lean_object* v_fallback_2444_){
_start:
{
uint64_t v_k_boxed_2445_; lean_object* v_res_2446_; 
v_k_boxed_2445_ = lean_unbox_uint64(v_k_2443_);
lean_dec_ref(v_k_2443_);
v_res_2446_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__spec__0___redArg(v_t_2442_, v_k_boxed_2445_, v_fallback_2444_);
lean_dec(v_fallback_2444_);
lean_dec(v_t_2442_);
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__0_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_(lean_object* v_s_2447_, lean_object* v_x_2448_){
_start:
{
lean_object* v_fst_2449_; lean_object* v_snd_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2463_; 
v_fst_2449_ = lean_ctor_get(v_x_2448_, 0);
v_snd_2450_ = lean_ctor_get(v_x_2448_, 1);
v_isSharedCheck_2463_ = !lean_is_exclusive(v_x_2448_);
if (v_isSharedCheck_2463_ == 0)
{
v___x_2452_ = v_x_2448_;
v_isShared_2453_ = v_isSharedCheck_2463_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_snd_2450_);
lean_inc(v_fst_2449_);
lean_dec(v_x_2448_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2463_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; uint64_t v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2459_; 
v___x_2454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2454_, 0, v_snd_2450_);
v___x_2455_ = lean_box(0);
v___x_2456_ = lean_unbox_uint64(v_fst_2449_);
v___x_2457_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__spec__0___redArg(v_s_2447_, v___x_2456_, v___x_2455_);
if (v_isShared_2453_ == 0)
{
lean_ctor_set_tag(v___x_2452_, 1);
lean_ctor_set(v___x_2452_, 1, v___x_2457_);
lean_ctor_set(v___x_2452_, 0, v___x_2454_);
v___x_2459_ = v___x_2452_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v___x_2454_);
lean_ctor_set(v_reuseFailAlloc_2462_, 1, v___x_2457_);
v___x_2459_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
uint64_t v___x_2460_; lean_object* v___x_2461_; 
v___x_2460_ = lean_unbox_uint64(v_fst_2449_);
lean_dec(v_fst_2449_);
v___x_2461_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Widget_addBuiltinModule_spec__0___redArg(v___x_2460_, v___x_2459_, v_s_2447_);
return v___x_2461_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__1_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_(lean_object* v_x_2464_, lean_object* v_a_2465_){
_start:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; 
v___x_2466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2466_, 0, v_a_2465_);
lean_inc_ref_n(v___x_2466_, 2);
v___x_2467_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2467_, 0, v___x_2466_);
lean_ctor_set(v___x_2467_, 1, v___x_2466_);
lean_ctor_set(v___x_2467_, 2, v___x_2466_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__1_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2____boxed(lean_object* v_x_2468_, lean_object* v_a_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__1_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_(v_x_2468_, v_a_2469_);
lean_dec_ref(v_x_2468_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_(lean_object* v___y_2471_){
_start:
{
lean_inc(v___y_2471_);
return v___y_2471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2____boxed(lean_object* v___y_2472_){
_start:
{
lean_object* v_res_2473_; 
v_res_2473_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_(v___y_2472_);
lean_dec(v___y_2472_);
return v_res_2473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; 
v___x_2490_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_));
v___x_2491_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_2490_);
return v___x_2491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2____boxed(lean_object* v_a_2492_){
_start:
{
lean_object* v_res_2493_; 
v_res_2493_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_();
return v_res_2493_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b4_2494_, lean_object* v_t_2495_, uint64_t v_k_2496_, lean_object* v_fallback_2497_){
_start:
{
lean_object* v___x_2498_; 
v___x_2498_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__spec__0___redArg(v_t_2495_, v_k_2496_, v_fallback_2497_);
return v___x_2498_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b4_2499_, lean_object* v_t_2500_, lean_object* v_k_2501_, lean_object* v_fallback_2502_){
_start:
{
uint64_t v_k_boxed_2503_; lean_object* v_res_2504_; 
v_k_boxed_2503_ = lean_unbox_uint64(v_k_2501_);
lean_dec_ref(v_k_2501_);
v_res_2504_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2__spec__0(v_00_u03b4_2499_, v_t_2500_, v_k_boxed_2503_, v_fallback_2502_);
lean_dec(v_fallback_2502_);
lean_dec(v_t_2500_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Widget_evalPanelWidgets_spec__0___redArg(lean_object* v_as_x27_2505_, lean_object* v_b_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_){
_start:
{
if (lean_obj_tag(v_as_x27_2505_) == 0)
{
lean_object* v___x_2512_; 
v___x_2512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2512_, 0, v_b_2506_);
return v___x_2512_;
}
else
{
lean_object* v_head_2513_; 
v_head_2513_ = lean_ctor_get(v_as_x27_2505_, 0);
if (lean_obj_tag(v_head_2513_) == 0)
{
lean_object* v_tail_2514_; lean_object* v_n_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; 
v_tail_2514_ = lean_ctor_get(v_as_x27_2505_, 1);
v_n_2515_ = lean_ctor_get(v_head_2513_, 0);
v___x_2516_ = lean_box(0);
lean_inc(v_n_2515_);
v___x_2517_ = l_Lean_mkConst(v_n_2515_, v___x_2516_);
v___x_2518_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalWidgetInstanceUnsafe(v___x_2517_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_);
if (lean_obj_tag(v___x_2518_) == 0)
{
lean_object* v_a_2519_; lean_object* v___x_2520_; 
v_a_2519_ = lean_ctor_get(v___x_2518_, 0);
lean_inc(v_a_2519_);
lean_dec_ref_known(v___x_2518_, 1);
v___x_2520_ = lean_array_push(v_b_2506_, v_a_2519_);
v_as_x27_2505_ = v_tail_2514_;
v_b_2506_ = v___x_2520_;
goto _start;
}
else
{
lean_object* v_a_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2529_; 
lean_dec_ref(v_b_2506_);
v_a_2522_ = lean_ctor_get(v___x_2518_, 0);
v_isSharedCheck_2529_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2524_ = v___x_2518_;
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_a_2522_);
lean_dec(v___x_2518_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v___x_2527_; 
if (v_isShared_2525_ == 0)
{
v___x_2527_ = v___x_2524_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v_a_2522_);
v___x_2527_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
return v___x_2527_;
}
}
}
}
else
{
lean_object* v_tail_2530_; lean_object* v_wi_2531_; lean_object* v___x_2532_; 
v_tail_2530_ = lean_ctor_get(v_as_x27_2505_, 1);
v_wi_2531_ = lean_ctor_get(v_head_2513_, 0);
lean_inc_ref(v_wi_2531_);
v___x_2532_ = lean_array_push(v_b_2506_, v_wi_2531_);
v_as_x27_2505_ = v_tail_2530_;
v_b_2506_ = v___x_2532_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Widget_evalPanelWidgets_spec__0___redArg___boxed(lean_object* v_as_x27_2534_, lean_object* v_b_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_){
_start:
{
lean_object* v_res_2541_; 
v_res_2541_ = l_List_forIn_x27_loop___at___00Lean_Widget_evalPanelWidgets_spec__0___redArg(v_as_x27_2534_, v_b_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_);
lean_dec(v___y_2539_);
lean_dec_ref(v___y_2538_);
lean_dec(v___y_2537_);
lean_dec_ref(v___y_2536_);
lean_dec(v_as_x27_2534_);
return v_res_2541_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Widget_evalPanelWidgets_spec__1(lean_object* v_init_2542_, lean_object* v_x_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_){
_start:
{
if (lean_obj_tag(v_x_2543_) == 0)
{
lean_object* v_v_2549_; lean_object* v_l_2550_; lean_object* v_r_2551_; lean_object* v___x_2552_; 
v_v_2549_ = lean_ctor_get(v_x_2543_, 2);
v_l_2550_ = lean_ctor_get(v_x_2543_, 3);
v_r_2551_ = lean_ctor_get(v_x_2543_, 4);
v___x_2552_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Widget_evalPanelWidgets_spec__1(v_init_2542_, v_l_2550_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_);
if (lean_obj_tag(v___x_2552_) == 0)
{
lean_object* v_a_2553_; lean_object* v_a_2554_; lean_object* v___x_2555_; 
v_a_2553_ = lean_ctor_get(v___x_2552_, 0);
lean_inc(v_a_2553_);
lean_dec_ref_known(v___x_2552_, 1);
v_a_2554_ = lean_ctor_get(v_a_2553_, 0);
lean_inc(v_a_2554_);
lean_dec(v_a_2553_);
v___x_2555_ = l_List_forIn_x27_loop___at___00Lean_Widget_evalPanelWidgets_spec__0___redArg(v_v_2549_, v_a_2554_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_);
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v_a_2556_; 
v_a_2556_ = lean_ctor_get(v___x_2555_, 0);
lean_inc(v_a_2556_);
lean_dec_ref_known(v___x_2555_, 1);
v_init_2542_ = v_a_2556_;
v_x_2543_ = v_r_2551_;
goto _start;
}
else
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2565_; 
v_a_2558_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2560_ = v___x_2555_;
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___x_2555_);
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
}
else
{
return v___x_2552_;
}
}
else
{
lean_object* v___x_2566_; lean_object* v___x_2567_; 
v___x_2566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2566_, 0, v_init_2542_);
v___x_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2566_);
return v___x_2567_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Widget_evalPanelWidgets_spec__1___boxed(lean_object* v_init_2568_, lean_object* v_x_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_){
_start:
{
lean_object* v_res_2575_; 
v_res_2575_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Widget_evalPanelWidgets_spec__1(v_init_2568_, v_x_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_);
lean_dec(v___y_2573_);
lean_dec_ref(v___y_2572_);
lean_dec(v___y_2571_);
lean_dec_ref(v___y_2570_);
lean_dec(v_x_2569_);
return v_res_2575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_evalPanelWidgets(lean_object* v_a_2578_, lean_object* v_a_2579_, lean_object* v_a_2580_, lean_object* v_a_2581_){
_start:
{
lean_object* v_ret_2583_; lean_object* v___x_2584_; lean_object* v_env_2585_; lean_object* v___x_2586_; lean_object* v_ext_2587_; lean_object* v_toEnvExtension_2588_; lean_object* v_asyncMode_2589_; lean_object* v___x_2590_; uint8_t v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v_ret_2583_ = ((lean_object*)(l_Lean_Widget_evalPanelWidgets___closed__0));
v___x_2584_ = lean_st_ref_get(v_a_2581_);
v_env_2585_ = lean_ctor_get(v___x_2584_, 0);
lean_inc_ref(v_env_2585_);
lean_dec(v___x_2584_);
v___x_2586_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_panelWidgetsExt;
v_ext_2587_ = lean_ctor_get(v___x_2586_, 1);
v_toEnvExtension_2588_ = lean_ctor_get(v_ext_2587_, 0);
v_asyncMode_2589_ = lean_ctor_get(v_toEnvExtension_2588_, 2);
v___x_2590_ = lean_box(1);
v___x_2591_ = 0;
v___x_2592_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2590_, v___x_2586_, v_env_2585_, v_asyncMode_2589_, v___x_2591_);
v___x_2593_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Widget_evalPanelWidgets_spec__1(v_ret_2583_, v___x_2592_, v_a_2578_, v_a_2579_, v_a_2580_, v_a_2581_);
lean_dec(v___x_2592_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v_a_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2602_; 
v_a_2594_ = lean_ctor_get(v___x_2593_, 0);
v_isSharedCheck_2602_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2596_ = v___x_2593_;
v_isShared_2597_ = v_isSharedCheck_2602_;
goto v_resetjp_2595_;
}
else
{
lean_inc(v_a_2594_);
lean_dec(v___x_2593_);
v___x_2596_ = lean_box(0);
v_isShared_2597_ = v_isSharedCheck_2602_;
goto v_resetjp_2595_;
}
v_resetjp_2595_:
{
lean_object* v_a_2598_; lean_object* v___x_2600_; 
v_a_2598_ = lean_ctor_get(v_a_2594_, 0);
lean_inc(v_a_2598_);
lean_dec(v_a_2594_);
if (v_isShared_2597_ == 0)
{
lean_ctor_set(v___x_2596_, 0, v_a_2598_);
v___x_2600_ = v___x_2596_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_a_2598_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
return v___x_2600_;
}
}
}
else
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2610_; 
v_a_2603_ = lean_ctor_get(v___x_2593_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2605_ = v___x_2593_;
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2593_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___x_2608_; 
if (v_isShared_2606_ == 0)
{
v___x_2608_ = v___x_2605_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_a_2603_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_evalPanelWidgets___boxed(lean_object* v_a_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_){
_start:
{
lean_object* v_res_2616_; 
v_res_2616_ = l_Lean_Widget_evalPanelWidgets(v_a_2611_, v_a_2612_, v_a_2613_, v_a_2614_);
lean_dec(v_a_2614_);
lean_dec_ref(v_a_2613_);
lean_dec(v_a_2612_);
lean_dec_ref(v_a_2611_);
return v_res_2616_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Widget_evalPanelWidgets_spec__0(lean_object* v_as_2617_, lean_object* v_as_x27_2618_, lean_object* v_b_2619_, lean_object* v_a_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_){
_start:
{
lean_object* v___x_2626_; 
v___x_2626_ = l_List_forIn_x27_loop___at___00Lean_Widget_evalPanelWidgets_spec__0___redArg(v_as_x27_2618_, v_b_2619_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_);
return v___x_2626_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Widget_evalPanelWidgets_spec__0___boxed(lean_object* v_as_2627_, lean_object* v_as_x27_2628_, lean_object* v_b_2629_, lean_object* v_a_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_){
_start:
{
lean_object* v_res_2636_; 
v_res_2636_ = l_List_forIn_x27_loop___at___00Lean_Widget_evalPanelWidgets_spec__0(v_as_2627_, v_as_x27_2628_, v_b_2629_, v_a_2630_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_);
lean_dec(v___y_2634_);
lean_dec_ref(v___y_2633_);
lean_dec(v___y_2632_);
lean_dec_ref(v___y_2631_);
lean_dec(v_as_x27_2628_);
lean_dec(v_as_2627_);
return v_res_2636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetGlobal___redArg(lean_object* v_inst_2637_, lean_object* v_inst_2638_, lean_object* v_inst_2639_, uint64_t v_h_2640_, lean_object* v_n_2641_){
_start:
{
lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; lean_object* v___x_2646_; 
v___x_2642_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_panelWidgetsExt;
v___x_2643_ = lean_box_uint64(v_h_2640_);
v___x_2644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2643_);
lean_ctor_set(v___x_2644_, 1, v_n_2641_);
v___x_2645_ = 0;
v___x_2646_ = l_Lean_ScopedEnvExtension_add___redArg(v_inst_2637_, v_inst_2639_, v_inst_2638_, v___x_2642_, v___x_2644_, v___x_2645_);
return v___x_2646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetGlobal___redArg___boxed(lean_object* v_inst_2647_, lean_object* v_inst_2648_, lean_object* v_inst_2649_, lean_object* v_h_2650_, lean_object* v_n_2651_){
_start:
{
uint64_t v_h_boxed_2652_; lean_object* v_res_2653_; 
v_h_boxed_2652_ = lean_unbox_uint64(v_h_2650_);
lean_dec_ref(v_h_2650_);
v_res_2653_ = l_Lean_Widget_addPanelWidgetGlobal___redArg(v_inst_2647_, v_inst_2648_, v_inst_2649_, v_h_boxed_2652_, v_n_2651_);
return v_res_2653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetGlobal(lean_object* v_m_2654_, lean_object* v_inst_2655_, lean_object* v_inst_2656_, lean_object* v_inst_2657_, uint64_t v_h_2658_, lean_object* v_n_2659_){
_start:
{
lean_object* v___x_2660_; 
v___x_2660_ = l_Lean_Widget_addPanelWidgetGlobal___redArg(v_inst_2655_, v_inst_2656_, v_inst_2657_, v_h_2658_, v_n_2659_);
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetGlobal___boxed(lean_object* v_m_2661_, lean_object* v_inst_2662_, lean_object* v_inst_2663_, lean_object* v_inst_2664_, lean_object* v_h_2665_, lean_object* v_n_2666_){
_start:
{
uint64_t v_h_boxed_2667_; lean_object* v_res_2668_; 
v_h_boxed_2667_ = lean_unbox_uint64(v_h_2665_);
lean_dec_ref(v_h_2665_);
v_res_2668_ = l_Lean_Widget_addPanelWidgetGlobal(v_m_2661_, v_inst_2662_, v_inst_2663_, v_inst_2664_, v_h_boxed_2667_, v_n_2666_);
return v_res_2668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetScoped___redArg(lean_object* v_inst_2669_, lean_object* v_inst_2670_, lean_object* v_inst_2671_, uint64_t v_h_2672_, lean_object* v_n_2673_){
_start:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; uint8_t v___x_2677_; lean_object* v___x_2678_; 
v___x_2674_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_panelWidgetsExt;
v___x_2675_ = lean_box_uint64(v_h_2672_);
v___x_2676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2675_);
lean_ctor_set(v___x_2676_, 1, v_n_2673_);
v___x_2677_ = 2;
v___x_2678_ = l_Lean_ScopedEnvExtension_add___redArg(v_inst_2669_, v_inst_2671_, v_inst_2670_, v___x_2674_, v___x_2676_, v___x_2677_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetScoped___redArg___boxed(lean_object* v_inst_2679_, lean_object* v_inst_2680_, lean_object* v_inst_2681_, lean_object* v_h_2682_, lean_object* v_n_2683_){
_start:
{
uint64_t v_h_boxed_2684_; lean_object* v_res_2685_; 
v_h_boxed_2684_ = lean_unbox_uint64(v_h_2682_);
lean_dec_ref(v_h_2682_);
v_res_2685_ = l_Lean_Widget_addPanelWidgetScoped___redArg(v_inst_2679_, v_inst_2680_, v_inst_2681_, v_h_boxed_2684_, v_n_2683_);
return v_res_2685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetScoped(lean_object* v_m_2686_, lean_object* v_inst_2687_, lean_object* v_inst_2688_, lean_object* v_inst_2689_, uint64_t v_h_2690_, lean_object* v_n_2691_){
_start:
{
lean_object* v___x_2692_; 
v___x_2692_ = l_Lean_Widget_addPanelWidgetScoped___redArg(v_inst_2687_, v_inst_2688_, v_inst_2689_, v_h_2690_, v_n_2691_);
return v___x_2692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetScoped___boxed(lean_object* v_m_2693_, lean_object* v_inst_2694_, lean_object* v_inst_2695_, lean_object* v_inst_2696_, lean_object* v_h_2697_, lean_object* v_n_2698_){
_start:
{
uint64_t v_h_boxed_2699_; lean_object* v_res_2700_; 
v_h_boxed_2699_ = lean_unbox_uint64(v_h_2697_);
lean_dec_ref(v_h_2697_);
v_res_2700_ = l_Lean_Widget_addPanelWidgetScoped(v_m_2693_, v_inst_2694_, v_inst_2695_, v_inst_2696_, v_h_boxed_2699_, v_n_2698_);
return v_res_2700_;
}
}
LEAN_EXPORT uint8_t l_Lean_Widget_addPanelWidgetLocal___redArg___lam__0(uint64_t v_x_2701_, uint64_t v_y_2702_){
_start:
{
uint8_t v___x_2703_; 
v___x_2703_ = lean_uint64_dec_lt(v_x_2701_, v_y_2702_);
if (v___x_2703_ == 0)
{
uint8_t v___x_2704_; 
v___x_2704_ = lean_uint64_dec_eq(v_x_2701_, v_y_2702_);
if (v___x_2704_ == 0)
{
uint8_t v___x_2705_; 
v___x_2705_ = 2;
return v___x_2705_;
}
else
{
uint8_t v___x_2706_; 
v___x_2706_ = 1;
return v___x_2706_;
}
}
else
{
uint8_t v___x_2707_; 
v___x_2707_ = 0;
return v___x_2707_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___redArg___lam__0___boxed(lean_object* v_x_2708_, lean_object* v_y_2709_){
_start:
{
uint64_t v_x_boxed_2710_; uint64_t v_y_boxed_2711_; uint8_t v_res_2712_; lean_object* v_r_2713_; 
v_x_boxed_2710_ = lean_unbox_uint64(v_x_2708_);
lean_dec_ref(v_x_2708_);
v_y_boxed_2711_ = lean_unbox_uint64(v_y_2709_);
lean_dec_ref(v_y_2709_);
v_res_2712_ = l_Lean_Widget_addPanelWidgetLocal___redArg___lam__0(v_x_boxed_2710_, v_y_boxed_2711_);
v_r_2713_ = lean_box(v_res_2712_);
return v_r_2713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___redArg___lam__1(lean_object* v_wi_2714_, lean_object* v___f_2715_, lean_object* v_s_2716_){
_start:
{
uint64_t v_javascriptHash_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
v_javascriptHash_2717_ = lean_ctor_get_uint64(v_wi_2714_, sizeof(void*)*2);
v___x_2718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2718_, 0, v_wi_2714_);
v___x_2719_ = lean_box(0);
v___x_2720_ = lean_box_uint64(v_javascriptHash_2717_);
lean_inc(v_s_2716_);
lean_inc_ref(v___f_2715_);
v___x_2721_ = l_Std_DTreeMap_Internal_Impl_Const_getD___redArg(v___f_2715_, v_s_2716_, v___x_2720_, v___x_2719_);
v___x_2722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2722_, 0, v___x_2718_);
lean_ctor_set(v___x_2722_, 1, v___x_2721_);
v___x_2723_ = lean_box_uint64(v_javascriptHash_2717_);
v___x_2724_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___f_2715_, v___x_2723_, v___x_2722_, v_s_2716_);
return v___x_2724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___redArg___lam__2(lean_object* v___f_2725_, lean_object* v_env_2726_){
_start:
{
lean_object* v___x_2727_; lean_object* v___x_2728_; 
v___x_2727_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_panelWidgetsExt;
v___x_2728_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v___x_2727_, v_env_2726_, v___f_2725_);
return v___x_2728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___redArg(lean_object* v_inst_2730_, lean_object* v_wi_2731_){
_start:
{
lean_object* v_modifyEnv_2732_; lean_object* v___f_2733_; lean_object* v___f_2734_; lean_object* v___f_2735_; lean_object* v___x_2736_; 
v_modifyEnv_2732_ = lean_ctor_get(v_inst_2730_, 1);
lean_inc(v_modifyEnv_2732_);
lean_dec_ref(v_inst_2730_);
v___f_2733_ = ((lean_object*)(l_Lean_Widget_addPanelWidgetLocal___redArg___closed__0));
v___f_2734_ = lean_alloc_closure((void*)(l_Lean_Widget_addPanelWidgetLocal___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2734_, 0, v_wi_2731_);
lean_closure_set(v___f_2734_, 1, v___f_2733_);
v___f_2735_ = lean_alloc_closure((void*)(l_Lean_Widget_addPanelWidgetLocal___redArg___lam__2), 2, 1);
lean_closure_set(v___f_2735_, 0, v___f_2734_);
v___x_2736_ = lean_apply_1(v_modifyEnv_2732_, v___f_2735_);
return v___x_2736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal(lean_object* v_m_2737_, lean_object* v_inst_2738_, lean_object* v_inst_2739_, lean_object* v_wi_2740_){
_start:
{
lean_object* v___x_2741_; 
v___x_2741_ = l_Lean_Widget_addPanelWidgetLocal___redArg(v_inst_2739_, v_wi_2740_);
return v___x_2741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_addPanelWidgetLocal___boxed(lean_object* v_m_2742_, lean_object* v_inst_2743_, lean_object* v_inst_2744_, lean_object* v_wi_2745_){
_start:
{
lean_object* v_res_2746_; 
v_res_2746_ = l_Lean_Widget_addPanelWidgetLocal(v_m_2742_, v_inst_2743_, v_inst_2744_, v_wi_2745_);
lean_dec_ref(v_inst_2743_);
return v_res_2746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___redArg___lam__1(lean_object* v___f_2747_, uint64_t v_h_2748_, lean_object* v_st_2749_){
_start:
{
lean_object* v___x_2750_; lean_object* v___x_2751_; 
v___x_2750_ = lean_box_uint64(v_h_2748_);
v___x_2751_ = l_Std_DTreeMap_Internal_Impl_erase___redArg(v___f_2747_, v___x_2750_, v_st_2749_);
return v___x_2751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___redArg___lam__1___boxed(lean_object* v___f_2752_, lean_object* v_h_2753_, lean_object* v_st_2754_){
_start:
{
uint64_t v_h_boxed_2755_; lean_object* v_res_2756_; 
v_h_boxed_2755_ = lean_unbox_uint64(v_h_2753_);
lean_dec_ref(v_h_2753_);
v_res_2756_ = l_Lean_Widget_erasePanelWidget___redArg___lam__1(v___f_2752_, v_h_boxed_2755_, v_st_2754_);
return v_res_2756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___redArg(lean_object* v_inst_2757_, uint64_t v_h_2758_){
_start:
{
lean_object* v_modifyEnv_2759_; lean_object* v___f_2760_; lean_object* v___x_2761_; lean_object* v___f_2762_; lean_object* v___f_2763_; lean_object* v___x_2764_; 
v_modifyEnv_2759_ = lean_ctor_get(v_inst_2757_, 1);
lean_inc(v_modifyEnv_2759_);
lean_dec_ref(v_inst_2757_);
v___f_2760_ = ((lean_object*)(l_Lean_Widget_addPanelWidgetLocal___redArg___closed__0));
v___x_2761_ = lean_box_uint64(v_h_2758_);
v___f_2762_ = lean_alloc_closure((void*)(l_Lean_Widget_erasePanelWidget___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2762_, 0, v___f_2760_);
lean_closure_set(v___f_2762_, 1, v___x_2761_);
v___f_2763_ = lean_alloc_closure((void*)(l_Lean_Widget_addPanelWidgetLocal___redArg___lam__2), 2, 1);
lean_closure_set(v___f_2763_, 0, v___f_2762_);
v___x_2764_ = lean_apply_1(v_modifyEnv_2759_, v___f_2763_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___redArg___boxed(lean_object* v_inst_2765_, lean_object* v_h_2766_){
_start:
{
uint64_t v_h_boxed_2767_; lean_object* v_res_2768_; 
v_h_boxed_2767_ = lean_unbox_uint64(v_h_2766_);
lean_dec_ref(v_h_2766_);
v_res_2768_ = l_Lean_Widget_erasePanelWidget___redArg(v_inst_2765_, v_h_boxed_2767_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget(lean_object* v_m_2769_, lean_object* v_inst_2770_, lean_object* v_inst_2771_, uint64_t v_h_2772_){
_start:
{
lean_object* v___x_2773_; 
v___x_2773_ = l_Lean_Widget_erasePanelWidget___redArg(v_inst_2771_, v_h_2772_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_erasePanelWidget___boxed(lean_object* v_m_2774_, lean_object* v_inst_2775_, lean_object* v_inst_2776_, lean_object* v_h_2777_){
_start:
{
uint64_t v_h_boxed_2778_; lean_object* v_res_2779_; 
v_h_boxed_2778_ = lean_unbox_uint64(v_h_2777_);
lean_dec_ref(v_h_2777_);
v_res_2779_ = l_Lean_Widget_erasePanelWidget(v_m_2774_, v_inst_2775_, v_inst_2776_, v_h_boxed_2778_);
lean_dec_ref(v_inst_2775_);
return v_res_2779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_WidgetInstance_ofHash(uint64_t v_hash_2780_, lean_object* v_props_2781_, lean_object* v_a_2782_, lean_object* v_a_2783_){
_start:
{
lean_object* v___x_2785_; lean_object* v_env_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v_val_2790_; lean_object* v___x_2793_; 
v___x_2785_ = lean_st_ref_get(v_a_2783_);
v_env_2786_ = lean_ctor_get(v___x_2785_, 0);
lean_inc_ref(v_env_2786_);
lean_dec(v___x_2785_);
v___x_2787_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_builtinModulesRef;
v___x_2788_ = lean_st_ref_get(v___x_2787_);
v___x_2793_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___redArg(v___x_2788_, v_hash_2780_);
lean_dec(v___x_2788_);
if (lean_obj_tag(v___x_2793_) == 0)
{
lean_object* v___x_2794_; lean_object* v_toEnvExtension_2795_; lean_object* v_asyncMode_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; 
v___x_2794_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_moduleRegistry;
v_toEnvExtension_2795_ = lean_ctor_get(v___x_2794_, 0);
v_asyncMode_2796_ = lean_ctor_get(v_toEnvExtension_2795_, 2);
v___x_2797_ = lean_box(1);
v___x_2798_ = lean_box(0);
v___x_2799_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2797_, v___x_2794_, v_env_2786_, v_asyncMode_2796_, v___x_2798_);
v___x_2800_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___redArg(v___x_2799_, v_hash_2780_);
lean_dec(v___x_2799_);
if (lean_obj_tag(v___x_2800_) == 0)
{
lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; 
lean_dec_ref(v_props_2781_);
v___x_2801_ = ((lean_object*)(l_Lean_Widget_getWidgetSource___closed__0));
v___x_2802_ = lean_uint64_to_nat(v_hash_2780_);
v___x_2803_ = l_Nat_reprFast(v___x_2802_);
v___x_2804_ = lean_string_append(v___x_2801_, v___x_2803_);
lean_dec_ref(v___x_2803_);
v___x_2805_ = ((lean_object*)(l_Lean_Widget_getWidgetSource___closed__1));
v___x_2806_ = lean_string_append(v___x_2804_, v___x_2805_);
v___x_2807_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2806_);
v___x_2808_ = l_Lean_MessageData_ofFormat(v___x_2807_);
v___x_2809_ = l_Lean_throwError___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__0___redArg(v___x_2808_, v_a_2782_, v_a_2783_);
return v___x_2809_;
}
else
{
lean_object* v_val_2810_; lean_object* v_fst_2811_; 
v_val_2810_ = lean_ctor_get(v___x_2800_, 0);
lean_inc(v_val_2810_);
lean_dec_ref_known(v___x_2800_, 1);
v_fst_2811_ = lean_ctor_get(v_val_2810_, 0);
lean_inc(v_fst_2811_);
lean_dec(v_val_2810_);
v_val_2790_ = v_fst_2811_;
goto v___jp_2789_;
}
}
else
{
lean_object* v_val_2812_; lean_object* v_fst_2813_; 
lean_dec_ref(v_env_2786_);
v_val_2812_ = lean_ctor_get(v___x_2793_, 0);
lean_inc(v_val_2812_);
lean_dec_ref_known(v___x_2793_, 1);
v_fst_2813_ = lean_ctor_get(v_val_2812_, 0);
lean_inc(v_fst_2813_);
lean_dec(v_val_2812_);
v_val_2790_ = v_fst_2813_;
goto v___jp_2789_;
}
v___jp_2789_:
{
lean_object* v___x_2791_; lean_object* v___x_2792_; 
v___x_2791_ = lean_alloc_ctor(0, 2, 8);
lean_ctor_set(v___x_2791_, 0, v_val_2790_);
lean_ctor_set(v___x_2791_, 1, v_props_2781_);
lean_ctor_set_uint64(v___x_2791_, sizeof(void*)*2, v_hash_2780_);
v___x_2792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2792_, 0, v___x_2791_);
return v___x_2792_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_WidgetInstance_ofHash___boxed(lean_object* v_hash_2814_, lean_object* v_props_2815_, lean_object* v_a_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_){
_start:
{
uint64_t v_hash_boxed_2819_; lean_object* v_res_2820_; 
v_hash_boxed_2819_ = lean_unbox_uint64(v_hash_2814_);
lean_dec_ref(v_hash_2814_);
v_res_2820_ = l_Lean_Widget_WidgetInstance_ofHash(v_hash_boxed_2819_, v_props_2815_, v_a_2816_, v_a_2817_);
lean_dec(v_a_2817_);
lean_dec_ref(v_a_2816_);
return v_res_2820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0_spec__0___redArg(lean_object* v_t_2821_, lean_object* v___y_2822_){
_start:
{
lean_object* v___x_2824_; lean_object* v_infoState_2825_; uint8_t v_enabled_2826_; 
v___x_2824_ = lean_st_ref_get(v___y_2822_);
v_infoState_2825_ = lean_ctor_get(v___x_2824_, 8);
lean_inc_ref(v_infoState_2825_);
lean_dec(v___x_2824_);
v_enabled_2826_ = lean_ctor_get_uint8(v_infoState_2825_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2825_);
if (v_enabled_2826_ == 0)
{
lean_object* v___x_2827_; lean_object* v___x_2828_; 
lean_dec_ref(v_t_2821_);
v___x_2827_ = lean_box(0);
v___x_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2827_);
return v___x_2828_;
}
else
{
lean_object* v___x_2829_; lean_object* v_infoState_2830_; lean_object* v_env_2831_; lean_object* v_nextMacroScope_2832_; lean_object* v_ngen_2833_; lean_object* v_auxDeclNGen_2834_; lean_object* v_traceState_2835_; lean_object* v_cache_2836_; lean_object* v_recordedDeps_2837_; lean_object* v_messages_2838_; lean_object* v_snapshotTasks_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2861_; 
v___x_2829_ = lean_st_ref_take(v___y_2822_);
v_infoState_2830_ = lean_ctor_get(v___x_2829_, 8);
v_env_2831_ = lean_ctor_get(v___x_2829_, 0);
v_nextMacroScope_2832_ = lean_ctor_get(v___x_2829_, 1);
v_ngen_2833_ = lean_ctor_get(v___x_2829_, 2);
v_auxDeclNGen_2834_ = lean_ctor_get(v___x_2829_, 3);
v_traceState_2835_ = lean_ctor_get(v___x_2829_, 4);
v_cache_2836_ = lean_ctor_get(v___x_2829_, 5);
v_recordedDeps_2837_ = lean_ctor_get(v___x_2829_, 6);
v_messages_2838_ = lean_ctor_get(v___x_2829_, 7);
v_snapshotTasks_2839_ = lean_ctor_get(v___x_2829_, 9);
v_isSharedCheck_2861_ = !lean_is_exclusive(v___x_2829_);
if (v_isSharedCheck_2861_ == 0)
{
v___x_2841_ = v___x_2829_;
v_isShared_2842_ = v_isSharedCheck_2861_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_snapshotTasks_2839_);
lean_inc(v_infoState_2830_);
lean_inc(v_messages_2838_);
lean_inc(v_recordedDeps_2837_);
lean_inc(v_cache_2836_);
lean_inc(v_traceState_2835_);
lean_inc(v_auxDeclNGen_2834_);
lean_inc(v_ngen_2833_);
lean_inc(v_nextMacroScope_2832_);
lean_inc(v_env_2831_);
lean_dec(v___x_2829_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2861_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
uint8_t v_enabled_2843_; lean_object* v_assignment_2844_; lean_object* v_lazyAssignment_2845_; lean_object* v_trees_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2860_; 
v_enabled_2843_ = lean_ctor_get_uint8(v_infoState_2830_, sizeof(void*)*3);
v_assignment_2844_ = lean_ctor_get(v_infoState_2830_, 0);
v_lazyAssignment_2845_ = lean_ctor_get(v_infoState_2830_, 1);
v_trees_2846_ = lean_ctor_get(v_infoState_2830_, 2);
v_isSharedCheck_2860_ = !lean_is_exclusive(v_infoState_2830_);
if (v_isSharedCheck_2860_ == 0)
{
v___x_2848_ = v_infoState_2830_;
v_isShared_2849_ = v_isSharedCheck_2860_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_trees_2846_);
lean_inc(v_lazyAssignment_2845_);
lean_inc(v_assignment_2844_);
lean_dec(v_infoState_2830_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2860_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2853_; 
v___x_2850_ = lean_box(0);
v___x_2851_ = l_Lean_PersistentArray_push___redArg(v_trees_2846_, v_t_2821_);
if (v_isShared_2849_ == 0)
{
lean_ctor_set(v___x_2848_, 2, v___x_2851_);
v___x_2853_ = v___x_2848_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v_assignment_2844_);
lean_ctor_set(v_reuseFailAlloc_2859_, 1, v_lazyAssignment_2845_);
lean_ctor_set(v_reuseFailAlloc_2859_, 2, v___x_2851_);
lean_ctor_set_uint8(v_reuseFailAlloc_2859_, sizeof(void*)*3, v_enabled_2843_);
v___x_2853_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
lean_object* v___x_2855_; 
if (v_isShared_2842_ == 0)
{
lean_ctor_set(v___x_2841_, 8, v___x_2853_);
v___x_2855_ = v___x_2841_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_env_2831_);
lean_ctor_set(v_reuseFailAlloc_2858_, 1, v_nextMacroScope_2832_);
lean_ctor_set(v_reuseFailAlloc_2858_, 2, v_ngen_2833_);
lean_ctor_set(v_reuseFailAlloc_2858_, 3, v_auxDeclNGen_2834_);
lean_ctor_set(v_reuseFailAlloc_2858_, 4, v_traceState_2835_);
lean_ctor_set(v_reuseFailAlloc_2858_, 5, v_cache_2836_);
lean_ctor_set(v_reuseFailAlloc_2858_, 6, v_recordedDeps_2837_);
lean_ctor_set(v_reuseFailAlloc_2858_, 7, v_messages_2838_);
lean_ctor_set(v_reuseFailAlloc_2858_, 8, v___x_2853_);
lean_ctor_set(v_reuseFailAlloc_2858_, 9, v_snapshotTasks_2839_);
v___x_2855_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
lean_object* v___x_2856_; lean_object* v___x_2857_; 
v___x_2856_ = lean_st_ref_put(v___y_2822_, v___x_2855_);
v___x_2857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2857_, 0, v___x_2850_);
return v___x_2857_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0_spec__0___redArg___boxed(lean_object* v_t_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_){
_start:
{
lean_object* v_res_2865_; 
v_res_2865_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0_spec__0___redArg(v_t_2862_, v___y_2863_);
lean_dec(v___y_2863_);
return v_res_2865_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; 
v___x_2866_ = lean_unsigned_to_nat(32u);
v___x_2867_ = lean_mk_empty_array_with_capacity(v___x_2866_);
v___x_2868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2868_, 0, v___x_2867_);
return v___x_2868_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0___closed__1(void){
_start:
{
size_t v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; 
v___x_2869_ = ((size_t)5ULL);
v___x_2870_ = lean_unsigned_to_nat(0u);
v___x_2871_ = lean_unsigned_to_nat(32u);
v___x_2872_ = lean_mk_empty_array_with_capacity(v___x_2871_);
v___x_2873_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0___closed__0);
v___x_2874_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2874_, 0, v___x_2873_);
lean_ctor_set(v___x_2874_, 1, v___x_2872_);
lean_ctor_set(v___x_2874_, 2, v___x_2870_);
lean_ctor_set(v___x_2874_, 3, v___x_2870_);
lean_ctor_set_usize(v___x_2874_, 4, v___x_2869_);
return v___x_2874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0(lean_object* v_t_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_){
_start:
{
lean_object* v___x_2879_; lean_object* v_infoState_2880_; uint8_t v_enabled_2881_; 
v___x_2879_ = lean_st_ref_get(v___y_2877_);
v_infoState_2880_ = lean_ctor_get(v___x_2879_, 8);
lean_inc_ref(v_infoState_2880_);
lean_dec(v___x_2879_);
v_enabled_2881_ = lean_ctor_get_uint8(v_infoState_2880_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2880_);
if (v_enabled_2881_ == 0)
{
lean_object* v___x_2882_; lean_object* v___x_2883_; 
lean_dec_ref(v_t_2875_);
v___x_2882_ = lean_box(0);
v___x_2883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2882_);
return v___x_2883_;
}
else
{
lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; 
v___x_2884_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0___closed__1);
v___x_2885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2885_, 0, v_t_2875_);
lean_ctor_set(v___x_2885_, 1, v___x_2884_);
v___x_2886_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0_spec__0___redArg(v___x_2885_, v___y_2877_);
return v___x_2886_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0___boxed(lean_object* v_t_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_){
_start:
{
lean_object* v_res_2891_; 
v_res_2891_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0(v_t_2887_, v___y_2888_, v___y_2889_);
lean_dec(v___y_2889_);
lean_dec_ref(v___y_2888_);
return v_res_2891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_savePanelWidgetInfo(uint64_t v_hash_2892_, lean_object* v_props_2893_, lean_object* v_stx_2894_, lean_object* v_a_2895_, lean_object* v_a_2896_){
_start:
{
lean_object* v___x_2898_; 
v___x_2898_ = l_Lean_Widget_WidgetInstance_ofHash(v_hash_2892_, v_props_2893_, v_a_2895_, v_a_2896_);
if (lean_obj_tag(v___x_2898_) == 0)
{
lean_object* v_a_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; 
v_a_2899_ = lean_ctor_get(v___x_2898_, 0);
lean_inc(v_a_2899_);
lean_dec_ref_known(v___x_2898_, 1);
v___x_2900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2900_, 0, v_a_2899_);
lean_ctor_set(v___x_2900_, 1, v_stx_2894_);
v___x_2901_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_2901_, 0, v___x_2900_);
v___x_2902_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0(v___x_2901_, v_a_2895_, v_a_2896_);
return v___x_2902_;
}
else
{
lean_object* v_a_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2910_; 
lean_dec(v_stx_2894_);
v_a_2903_ = lean_ctor_get(v___x_2898_, 0);
v_isSharedCheck_2910_ = !lean_is_exclusive(v___x_2898_);
if (v_isSharedCheck_2910_ == 0)
{
v___x_2905_ = v___x_2898_;
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_a_2903_);
lean_dec(v___x_2898_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2908_; 
if (v_isShared_2906_ == 0)
{
v___x_2908_ = v___x_2905_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v_a_2903_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
return v___x_2908_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_savePanelWidgetInfo___boxed(lean_object* v_hash_2911_, lean_object* v_props_2912_, lean_object* v_stx_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_, lean_object* v_a_2916_){
_start:
{
uint64_t v_hash_boxed_2917_; lean_object* v_res_2918_; 
v_hash_boxed_2917_ = lean_unbox_uint64(v_hash_2911_);
lean_dec_ref(v_hash_2911_);
v_res_2918_ = l_Lean_Widget_savePanelWidgetInfo(v_hash_boxed_2917_, v_props_2912_, v_stx_2913_, v_a_2914_, v_a_2915_);
lean_dec(v_a_2915_);
lean_dec_ref(v_a_2914_);
return v_res_2918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0_spec__0(lean_object* v_t_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_){
_start:
{
lean_object* v___x_2923_; 
v___x_2923_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0_spec__0___redArg(v_t_2919_, v___y_2921_);
return v___x_2923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0_spec__0___boxed(lean_object* v_t_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
lean_object* v_res_2928_; 
v_res_2928_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Widget_savePanelWidgetInfo_spec__0_spec__0(v_t_2924_, v___y_2925_, v___y_2926_);
lean_dec(v___y_2926_);
lean_dec_ref(v___y_2925_);
return v_res_2928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonUserWidgetDefinition_toJson(lean_object* v_x_2935_){
_start:
{
lean_object* v_name_2936_; lean_object* v_javascript_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2957_; 
v_name_2936_ = lean_ctor_get(v_x_2935_, 0);
v_javascript_2937_ = lean_ctor_get(v_x_2935_, 1);
v_isSharedCheck_2957_ = !lean_is_exclusive(v_x_2935_);
if (v_isSharedCheck_2957_ == 0)
{
v___x_2939_ = v_x_2935_;
v_isShared_2940_ = v_isSharedCheck_2957_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_javascript_2937_);
lean_inc(v_name_2936_);
lean_dec(v_x_2935_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2957_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2944_; 
v___x_2941_ = ((lean_object*)(l_Lean_Widget_instToJsonUserWidgetDefinition_toJson___closed__0));
v___x_2942_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2942_, 0, v_name_2936_);
if (v_isShared_2940_ == 0)
{
lean_ctor_set(v___x_2939_, 1, v___x_2942_);
lean_ctor_set(v___x_2939_, 0, v___x_2941_);
v___x_2944_ = v___x_2939_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v___x_2941_);
lean_ctor_set(v_reuseFailAlloc_2956_, 1, v___x_2942_);
v___x_2944_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2945_ = lean_box(0);
v___x_2946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2944_);
lean_ctor_set(v___x_2946_, 1, v___x_2945_);
v___x_2947_ = ((lean_object*)(l_Lean_Widget_instToJsonUserWidgetDefinition_toJson___closed__1));
v___x_2948_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2948_, 0, v_javascript_2937_);
v___x_2949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2947_);
lean_ctor_set(v___x_2949_, 1, v___x_2948_);
v___x_2950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2949_);
lean_ctor_set(v___x_2950_, 1, v___x_2945_);
v___x_2951_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2950_);
lean_ctor_set(v___x_2951_, 1, v___x_2945_);
v___x_2952_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2946_);
lean_ctor_set(v___x_2952_, 1, v___x_2951_);
v___x_2953_ = ((lean_object*)(l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__2));
v___x_2954_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Widget_instToJsonGetWidgetSourceParams_toJson_spec__0(v___x_2952_, v___x_2953_);
v___x_2955_ = l_Lean_Json_mkObj(v___x_2954_);
lean_dec(v___x_2954_);
return v___x_2955_;
}
}
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__2(void){
_start:
{
uint8_t v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; 
v___x_2965_ = 1;
v___x_2966_ = ((lean_object*)(l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__1));
v___x_2967_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2966_, v___x_2965_);
return v___x_2967_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__3(void){
_start:
{
lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; 
v___x_2968_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__2___closed__3_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_));
v___x_2969_ = lean_obj_once(&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__2, &l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__2_once, _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__2);
v___x_2970_ = lean_string_append(v___x_2969_, v___x_2968_);
return v___x_2970_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__5(void){
_start:
{
uint8_t v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; 
v___x_2973_ = 1;
v___x_2974_ = ((lean_object*)(l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__4));
v___x_2975_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2974_, v___x_2973_);
return v___x_2975_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__6(void){
_start:
{
lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2976_ = lean_obj_once(&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__5, &l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__5_once, _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__5);
v___x_2977_ = lean_obj_once(&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__3, &l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__3_once, _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__3);
v___x_2978_ = lean_string_append(v___x_2977_, v___x_2976_);
return v___x_2978_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__7(void){
_start:
{
lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; 
v___x_2979_ = ((lean_object*)(l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__7));
v___x_2980_ = lean_obj_once(&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__6, &l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__6_once, _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__6);
v___x_2981_ = lean_string_append(v___x_2980_, v___x_2979_);
return v___x_2981_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__9(void){
_start:
{
uint8_t v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; 
v___x_2984_ = 1;
v___x_2985_ = ((lean_object*)(l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__8));
v___x_2986_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2985_, v___x_2984_);
return v___x_2986_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__10(void){
_start:
{
lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; 
v___x_2987_ = lean_obj_once(&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__9, &l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__9_once, _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__9);
v___x_2988_ = lean_obj_once(&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__3, &l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__3_once, _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__3);
v___x_2989_ = lean_string_append(v___x_2988_, v___x_2987_);
return v___x_2989_;
}
}
static lean_object* _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__11(void){
_start:
{
lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; 
v___x_2990_ = ((lean_object*)(l_Lean_Widget_instFromJsonGetWidgetSourceParams_fromJson___closed__7));
v___x_2991_ = lean_obj_once(&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__10, &l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__10_once, _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__10);
v___x_2992_ = lean_string_append(v___x_2991_, v___x_2990_);
return v___x_2992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson(lean_object* v_json_2993_){
_start:
{
lean_object* v___x_2994_; lean_object* v___x_2995_; 
v___x_2994_ = ((lean_object*)(l_Lean_Widget_instToJsonUserWidgetDefinition_toJson___closed__0));
lean_inc(v_json_2993_);
v___x_2995_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonWidgetSource_fromJson_spec__0(v_json_2993_, v___x_2994_);
if (lean_obj_tag(v___x_2995_) == 0)
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3005_; 
lean_dec(v_json_2993_);
v_a_2996_ = lean_ctor_get(v___x_2995_, 0);
v_isSharedCheck_3005_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3005_ == 0)
{
v___x_2998_ = v___x_2995_;
v_isShared_2999_ = v_isSharedCheck_3005_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2995_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3005_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3003_; 
v___x_3000_ = lean_obj_once(&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__7, &l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__7_once, _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__7);
v___x_3001_ = lean_string_append(v___x_3000_, v_a_2996_);
lean_dec(v_a_2996_);
if (v_isShared_2999_ == 0)
{
lean_ctor_set(v___x_2998_, 0, v___x_3001_);
v___x_3003_ = v___x_2998_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v___x_3001_);
v___x_3003_ = v_reuseFailAlloc_3004_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
return v___x_3003_;
}
}
}
else
{
lean_object* v_a_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; 
v_a_3006_ = lean_ctor_get(v___x_2995_, 0);
lean_inc(v_a_3006_);
lean_dec_ref_known(v___x_2995_, 1);
v___x_3007_ = ((lean_object*)(l_Lean_Widget_instToJsonUserWidgetDefinition_toJson___closed__1));
v___x_3008_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonWidgetSource_fromJson_spec__0(v_json_2993_, v___x_3007_);
if (lean_obj_tag(v___x_3008_) == 0)
{
lean_object* v_a_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3018_; 
lean_dec(v_a_3006_);
v_a_3009_ = lean_ctor_get(v___x_3008_, 0);
v_isSharedCheck_3018_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_3011_ = v___x_3008_;
v_isShared_3012_ = v_isSharedCheck_3018_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_a_3009_);
lean_dec(v___x_3008_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3018_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3016_; 
v___x_3013_ = lean_obj_once(&l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__11, &l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__11_once, _init_l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__11);
v___x_3014_ = lean_string_append(v___x_3013_, v_a_3009_);
lean_dec(v_a_3009_);
if (v_isShared_3012_ == 0)
{
lean_ctor_set(v___x_3011_, 0, v___x_3014_);
v___x_3016_ = v___x_3011_;
goto v_reusejp_3015_;
}
else
{
lean_object* v_reuseFailAlloc_3017_; 
v_reuseFailAlloc_3017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3017_, 0, v___x_3014_);
v___x_3016_ = v_reuseFailAlloc_3017_;
goto v_reusejp_3015_;
}
v_reusejp_3015_:
{
return v___x_3016_;
}
}
}
else
{
lean_object* v_a_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3027_; 
v_a_3019_ = lean_ctor_get(v___x_3008_, 0);
v_isSharedCheck_3027_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3027_ == 0)
{
v___x_3021_ = v___x_3008_;
v_isShared_3022_ = v_isSharedCheck_3027_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_a_3019_);
lean_dec(v___x_3008_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3027_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3023_; lean_object* v___x_3025_; 
v___x_3023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3023_, 0, v_a_3006_);
lean_ctor_set(v___x_3023_, 1, v_a_3019_);
if (v_isShared_3022_ == 0)
{
lean_ctor_set(v___x_3021_, 0, v___x_3023_);
v___x_3025_ = v___x_3021_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v___x_3023_);
v___x_3025_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
return v___x_3025_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToModuleUserWidgetDefinition___lam__0(lean_object* v_uwd_3030_){
_start:
{
lean_object* v_javascript_3031_; uint64_t v___x_3032_; lean_object* v___x_3033_; 
v_javascript_3031_ = lean_ctor_get(v_uwd_3030_, 1);
v___x_3032_ = lean_string_hash(v_javascript_3031_);
lean_inc_ref(v_javascript_3031_);
v___x_3033_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3033_, 0, v_javascript_3031_);
lean_ctor_set_uint64(v___x_3033_, sizeof(void*)*1, v___x_3032_);
return v___x_3033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToModuleUserWidgetDefinition___lam__0___boxed(lean_object* v_uwd_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = l_Lean_Widget_instToModuleUserWidgetDefinition___lam__0(v_uwd_3034_);
lean_dec_ref(v_uwd_3034_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg___lam__0(lean_object* v_____do__lift_3038_, lean_object* v_id_3039_, lean_object* v_inst_3040_, lean_object* v_inst_3041_, lean_object* v___x_3042_, lean_object* v_____do__lift_3043_){
_start:
{
lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; 
v___x_3044_ = ((lean_object*)(l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__1));
v___x_3045_ = l_Lean_Environment_evalConstCheck___redArg(v_____do__lift_3038_, v_____do__lift_3043_, v___x_3044_, v_id_3039_);
v___x_3046_ = l_Lean_ofExcept___redArg(v_inst_3040_, v_inst_3041_, v___x_3042_, v___x_3045_);
return v___x_3046_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg___lam__0___boxed(lean_object* v_____do__lift_3047_, lean_object* v_id_3048_, lean_object* v_inst_3049_, lean_object* v_inst_3050_, lean_object* v___x_3051_, lean_object* v_____do__lift_3052_){
_start:
{
lean_object* v_res_3053_; 
v_res_3053_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg___lam__0(v_____do__lift_3047_, v_id_3048_, v_inst_3049_, v_inst_3050_, v___x_3051_, v_____do__lift_3052_);
lean_dec_ref(v_____do__lift_3052_);
return v_res_3053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg___lam__1(lean_object* v_inst_3054_, lean_object* v_id_3055_, lean_object* v_inst_3056_, lean_object* v_inst_3057_, lean_object* v___x_3058_, lean_object* v_toBind_3059_, lean_object* v_____do__lift_3060_){
_start:
{
lean_object* v_getOptions_3061_; lean_object* v___f_3062_; lean_object* v___x_3063_; 
v_getOptions_3061_ = lean_ctor_get(v_inst_3054_, 0);
lean_inc(v_getOptions_3061_);
lean_dec_ref(v_inst_3054_);
v___f_3062_ = lean_alloc_closure((void*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_3062_, 0, v_____do__lift_3060_);
lean_closure_set(v___f_3062_, 1, v_id_3055_);
lean_closure_set(v___f_3062_, 2, v_inst_3056_);
lean_closure_set(v___f_3062_, 3, v_inst_3057_);
lean_closure_set(v___f_3062_, 4, v___x_3058_);
v___x_3063_ = lean_apply_4(v_toBind_3059_, lean_box(0), lean_box(0), v_getOptions_3061_, v___f_3062_);
return v___x_3063_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg(lean_object* v_inst_3065_, lean_object* v_inst_3066_, lean_object* v_inst_3067_, lean_object* v_inst_3068_, lean_object* v_id_3069_){
_start:
{
lean_object* v_toBind_3070_; lean_object* v_getEnv_3071_; lean_object* v___x_3072_; lean_object* v___f_3073_; lean_object* v___x_3074_; 
v_toBind_3070_ = lean_ctor_get(v_inst_3065_, 1);
lean_inc_n(v_toBind_3070_, 2);
v_getEnv_3071_ = lean_ctor_get(v_inst_3066_, 0);
lean_inc(v_getEnv_3071_);
lean_dec_ref(v_inst_3066_);
v___x_3072_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg___closed__0));
v___f_3073_ = lean_alloc_closure((void*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg___lam__1), 7, 6);
lean_closure_set(v___f_3073_, 0, v_inst_3067_);
lean_closure_set(v___f_3073_, 1, v_id_3069_);
lean_closure_set(v___f_3073_, 2, v_inst_3065_);
lean_closure_set(v___f_3073_, 3, v_inst_3068_);
lean_closure_set(v___f_3073_, 4, v___x_3072_);
lean_closure_set(v___f_3073_, 5, v_toBind_3070_);
v___x_3074_ = lean_apply_4(v_toBind_3070_, lean_box(0), lean_box(0), v_getEnv_3071_, v___f_3073_);
return v___x_3074_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe(lean_object* v_m_3075_, lean_object* v_inst_3076_, lean_object* v_inst_3077_, lean_object* v_inst_3078_, lean_object* v_inst_3079_, lean_object* v_id_3080_){
_start:
{
lean_object* v___x_3081_; 
v___x_3081_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___redArg(v_inst_3076_, v_inst_3077_, v_inst_3078_, v_inst_3079_, v_id_3080_);
return v___x_3081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_widgetInfosAt_x3f___lam__0(lean_object* v_text_3082_, lean_object* v_hoverLine_3083_, lean_object* v_x_3084_, lean_object* v_x_3085_, lean_object* v_x_3086_){
_start:
{
if (lean_obj_tag(v_x_3085_) == 9)
{
lean_object* v_i_3087_; lean_object* v___x_3088_; 
v_i_3087_ = lean_ctor_get(v_x_3085_, 0);
v___x_3088_ = l_Lean_Elab_Info_pos_x3f(v_x_3085_);
if (lean_obj_tag(v___x_3088_) == 1)
{
lean_object* v_val_3089_; lean_object* v___x_3090_; 
v_val_3089_ = lean_ctor_get(v___x_3088_, 0);
lean_inc(v_val_3089_);
lean_dec_ref_known(v___x_3088_, 1);
v___x_3090_ = l_Lean_Elab_Info_tailPos_x3f(v_x_3085_);
if (lean_obj_tag(v___x_3090_) == 1)
{
lean_object* v_val_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3106_; 
v_val_3091_ = lean_ctor_get(v___x_3090_, 0);
v_isSharedCheck_3106_ = !lean_is_exclusive(v___x_3090_);
if (v_isSharedCheck_3106_ == 0)
{
v___x_3093_ = v___x_3090_;
v_isShared_3094_ = v_isSharedCheck_3106_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_val_3091_);
lean_dec(v___x_3090_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3106_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
lean_object* v___x_3095_; lean_object* v_line_3096_; uint8_t v___x_3097_; 
lean_inc_ref(v_text_3082_);
v___x_3095_ = l_Lean_FileMap_utf8PosToLspPos(v_text_3082_, v_val_3089_);
lean_dec(v_val_3089_);
v_line_3096_ = lean_ctor_get(v___x_3095_, 0);
lean_inc(v_line_3096_);
lean_dec_ref(v___x_3095_);
v___x_3097_ = lean_nat_dec_le(v_line_3096_, v_hoverLine_3083_);
lean_dec(v_line_3096_);
if (v___x_3097_ == 0)
{
lean_object* v___x_3098_; 
lean_del_object(v___x_3093_);
lean_dec(v_val_3091_);
lean_dec_ref(v_text_3082_);
v___x_3098_ = lean_box(0);
return v___x_3098_;
}
else
{
lean_object* v___x_3099_; lean_object* v_line_3100_; uint8_t v___x_3101_; 
v___x_3099_ = l_Lean_FileMap_utf8PosToLspPos(v_text_3082_, v_val_3091_);
lean_dec(v_val_3091_);
v_line_3100_ = lean_ctor_get(v___x_3099_, 0);
lean_inc(v_line_3100_);
lean_dec_ref(v___x_3099_);
v___x_3101_ = lean_nat_dec_le(v_hoverLine_3083_, v_line_3100_);
lean_dec(v_line_3100_);
if (v___x_3101_ == 0)
{
lean_object* v___x_3102_; 
lean_del_object(v___x_3093_);
v___x_3102_ = lean_box(0);
return v___x_3102_;
}
else
{
lean_object* v___x_3104_; 
lean_inc_ref(v_i_3087_);
if (v_isShared_3094_ == 0)
{
lean_ctor_set(v___x_3093_, 0, v_i_3087_);
v___x_3104_ = v___x_3093_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3105_; 
v_reuseFailAlloc_3105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3105_, 0, v_i_3087_);
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
else
{
lean_object* v___x_3107_; 
lean_dec(v___x_3090_);
lean_dec(v_val_3089_);
lean_dec_ref(v_text_3082_);
v___x_3107_ = lean_box(0);
return v___x_3107_;
}
}
else
{
lean_object* v___x_3108_; 
lean_dec(v___x_3088_);
lean_dec_ref(v_text_3082_);
v___x_3108_ = lean_box(0);
return v___x_3108_;
}
}
else
{
lean_object* v___x_3109_; 
lean_dec_ref(v_text_3082_);
v___x_3109_ = lean_box(0);
return v___x_3109_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_widgetInfosAt_x3f___lam__0___boxed(lean_object* v_text_3110_, lean_object* v_hoverLine_3111_, lean_object* v_x_3112_, lean_object* v_x_3113_, lean_object* v_x_3114_){
_start:
{
lean_object* v_res_3115_; 
v_res_3115_ = l_Lean_Widget_widgetInfosAt_x3f___lam__0(v_text_3110_, v_hoverLine_3111_, v_x_3112_, v_x_3113_, v_x_3114_);
lean_dec_ref(v_x_3114_);
lean_dec_ref(v_x_3113_);
lean_dec_ref(v_x_3112_);
lean_dec(v_hoverLine_3111_);
return v_res_3115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_widgetInfosAt_x3f(lean_object* v_text_3116_, lean_object* v_t_3117_, lean_object* v_hoverLine_3118_){
_start:
{
lean_object* v___f_3119_; lean_object* v___x_3120_; 
v___f_3119_ = lean_alloc_closure((void*)(l_Lean_Widget_widgetInfosAt_x3f___lam__0___boxed), 5, 2);
lean_closure_set(v___f_3119_, 0, v_text_3116_);
lean_closure_set(v___f_3119_, 1, v_hoverLine_3118_);
v___x_3120_ = l_Lean_Elab_InfoTree_deepestNodes___redArg(v___f_3119_, v_t_3117_);
return v___x_3120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__0(lean_object* v_j_3121_, lean_object* v_k_3122_){
_start:
{
lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3123_ = l_Lean_Json_getObjValD(v_j_3121_, v_k_3122_);
v___x_3124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3123_);
return v___x_3124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__0___boxed(lean_object* v_j_3125_, lean_object* v_k_3126_){
_start:
{
lean_object* v_res_3127_; 
v_res_3127_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__0(v_j_3125_, v_k_3126_);
lean_dec_ref(v_k_3126_);
return v_res_3127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__1_spec__1(lean_object* v_x_3130_){
_start:
{
if (lean_obj_tag(v_x_3130_) == 0)
{
lean_object* v___x_3131_; 
v___x_3131_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__1_spec__1___closed__0));
return v___x_3131_;
}
else
{
lean_object* v___x_3132_; lean_object* v___x_3133_; 
v___x_3132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3132_, 0, v_x_3130_);
v___x_3133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3132_);
return v___x_3133_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__1(lean_object* v_j_3134_, lean_object* v_k_3135_){
_start:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3136_ = l_Lean_Json_getObjValD(v_j_3134_, v_k_3135_);
v___x_3137_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__1_spec__1(v___x_3136_);
return v___x_3137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__1___boxed(lean_object* v_j_3138_, lean_object* v_k_3139_){
_start:
{
lean_object* v_res_3140_; 
v_res_3140_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__1(v_j_3138_, v_k_3139_);
lean_dec_ref(v_k_3139_);
return v_res_3140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_(lean_object* v_json_3145_){
_start:
{
lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v_a_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v_a_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v_a_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v_a_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v_a_3160_; lean_object* v___x_3162_; uint8_t v_isShared_3163_; uint8_t v_isSharedCheck_3168_; 
v___x_3146_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_));
lean_inc_n(v_json_3145_, 4);
v___x_3147_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__0(v_json_3145_, v___x_3146_);
v_a_3148_ = lean_ctor_get(v___x_3147_, 0);
lean_inc(v_a_3148_);
lean_dec_ref(v___x_3147_);
v___x_3149_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_));
v___x_3150_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__0(v_json_3145_, v___x_3149_);
v_a_3151_ = lean_ctor_get(v___x_3150_, 0);
lean_inc(v_a_3151_);
lean_dec_ref(v___x_3150_);
v___x_3152_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_));
v___x_3153_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__0(v_json_3145_, v___x_3152_);
v_a_3154_ = lean_ctor_get(v___x_3153_, 0);
lean_inc(v_a_3154_);
lean_dec_ref(v___x_3153_);
v___x_3155_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_));
v___x_3156_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__1(v_json_3145_, v___x_3155_);
v_a_3157_ = lean_ctor_get(v___x_3156_, 0);
lean_inc(v_a_3157_);
lean_dec_ref(v___x_3156_);
v___x_3158_ = ((lean_object*)(l_Lean_Widget_instToJsonUserWidgetDefinition_toJson___closed__0));
v___x_3159_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__1(v_json_3145_, v___x_3158_);
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
v___x_3164_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3164_, 0, v_a_3148_);
lean_ctor_set(v___x_3164_, 1, v_a_3151_);
lean_ctor_set(v___x_3164_, 2, v_a_3154_);
lean_ctor_set(v___x_3164_, 3, v_a_3157_);
lean_ctor_set(v___x_3164_, 4, v_a_3160_);
if (v_isShared_3163_ == 0)
{
lean_ctor_set(v___x_3162_, 0, v___x_3164_);
v___x_3166_ = v___x_3162_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(1, 1, 0);
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
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_42__spec__0(lean_object* v_k_3171_, lean_object* v_x_3172_){
_start:
{
if (lean_obj_tag(v_x_3172_) == 0)
{
lean_object* v___x_3173_; 
lean_dec_ref(v_k_3171_);
v___x_3173_ = lean_box(0);
return v___x_3173_;
}
else
{
lean_object* v_val_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; 
v_val_3174_ = lean_ctor_get(v_x_3172_, 0);
lean_inc(v_val_3174_);
v___x_3175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3175_, 0, v_k_3171_);
lean_ctor_set(v___x_3175_, 1, v_val_3174_);
v___x_3176_ = lean_box(0);
v___x_3177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3177_, 0, v___x_3175_);
lean_ctor_set(v___x_3177_, 1, v___x_3176_);
return v___x_3177_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_42__spec__0___boxed(lean_object* v_k_3178_, lean_object* v_x_3179_){
_start:
{
lean_object* v_res_3180_; 
v_res_3180_ = l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_42__spec__0(v_k_3178_, v_x_3179_);
lean_dec(v_x_3179_);
return v_res_3180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_42_(lean_object* v_x_3181_){
_start:
{
lean_object* v_id_3182_; lean_object* v_javascriptHash_3183_; lean_object* v_props_3184_; lean_object* v_range_x3f_3185_; lean_object* v_name_x3f_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
v_id_3182_ = lean_ctor_get(v_x_3181_, 0);
v_javascriptHash_3183_ = lean_ctor_get(v_x_3181_, 1);
v_props_3184_ = lean_ctor_get(v_x_3181_, 2);
v_range_x3f_3185_ = lean_ctor_get(v_x_3181_, 3);
v_name_x3f_3186_ = lean_ctor_get(v_x_3181_, 4);
v___x_3187_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_));
lean_inc(v_id_3182_);
v___x_3188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3188_, 0, v___x_3187_);
lean_ctor_set(v___x_3188_, 1, v_id_3182_);
v___x_3189_ = lean_box(0);
v___x_3190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3190_, 0, v___x_3188_);
lean_ctor_set(v___x_3190_, 1, v___x_3189_);
v___x_3191_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_));
lean_inc(v_javascriptHash_3183_);
v___x_3192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3192_, 0, v___x_3191_);
lean_ctor_set(v___x_3192_, 1, v_javascriptHash_3183_);
v___x_3193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3193_, 0, v___x_3192_);
lean_ctor_set(v___x_3193_, 1, v___x_3189_);
v___x_3194_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_));
lean_inc(v_props_3184_);
v___x_3195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3195_, 0, v___x_3194_);
lean_ctor_set(v___x_3195_, 1, v_props_3184_);
v___x_3196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3196_, 0, v___x_3195_);
lean_ctor_set(v___x_3196_, 1, v___x_3189_);
v___x_3197_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_));
v___x_3198_ = l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_42__spec__0(v___x_3197_, v_range_x3f_3185_);
v___x_3199_ = ((lean_object*)(l_Lean_Widget_instToJsonUserWidgetDefinition_toJson___closed__0));
v___x_3200_ = l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_42__spec__0(v___x_3199_, v_name_x3f_3186_);
v___x_3201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3201_, 0, v___x_3200_);
lean_ctor_set(v___x_3201_, 1, v___x_3189_);
v___x_3202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3198_);
lean_ctor_set(v___x_3202_, 1, v___x_3201_);
v___x_3203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3196_);
lean_ctor_set(v___x_3203_, 1, v___x_3202_);
v___x_3204_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3204_, 0, v___x_3193_);
lean_ctor_set(v___x_3204_, 1, v___x_3203_);
v___x_3205_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3205_, 0, v___x_3190_);
lean_ctor_set(v___x_3205_, 1, v___x_3204_);
v___x_3206_ = ((lean_object*)(l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__2));
v___x_3207_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Widget_instToJsonGetWidgetSourceParams_toJson_spec__0(v___x_3205_, v___x_3206_);
v___x_3208_ = l_Lean_Json_mkObj(v___x_3207_);
lean_dec(v___x_3207_);
return v___x_3208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_42____boxed(lean_object* v_x_3209_){
_start:
{
lean_object* v_res_3210_; 
v_res_3210_ = l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_42_(v_x_3209_);
lean_dec_ref(v_x_3209_);
return v_res_3210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodablePanelWidgetInstance_enc_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1_(lean_object* v_a_3213_, lean_object* v_a_3214_){
_start:
{
lean_object* v_toWidgetInstance_3215_; lean_object* v_range_x3f_3216_; lean_object* v_name_x3f_3217_; lean_object* v_id_3218_; uint64_t v_javascriptHash_3219_; lean_object* v_props_3220_; lean_object* v___x_3221_; lean_object* v_fst_3222_; lean_object* v_snd_3223_; lean_object* v___x_3225_; uint8_t v_isShared_3226_; uint8_t v_isSharedCheck_3263_; 
v_toWidgetInstance_3215_ = lean_ctor_get(v_a_3213_, 0);
lean_inc_ref(v_toWidgetInstance_3215_);
v_range_x3f_3216_ = lean_ctor_get(v_a_3213_, 1);
lean_inc(v_range_x3f_3216_);
v_name_x3f_3217_ = lean_ctor_get(v_a_3213_, 2);
lean_inc(v_name_x3f_3217_);
lean_dec_ref(v_a_3213_);
v_id_3218_ = lean_ctor_get(v_toWidgetInstance_3215_, 0);
lean_inc(v_id_3218_);
v_javascriptHash_3219_ = lean_ctor_get_uint64(v_toWidgetInstance_3215_, sizeof(void*)*2);
v_props_3220_ = lean_ctor_get(v_toWidgetInstance_3215_, 1);
lean_inc_ref(v_props_3220_);
lean_dec_ref(v_toWidgetInstance_3215_);
v___x_3221_ = lean_apply_1(v_props_3220_, v_a_3214_);
v_fst_3222_ = lean_ctor_get(v___x_3221_, 0);
v_snd_3223_ = lean_ctor_get(v___x_3221_, 1);
v_isSharedCheck_3263_ = !lean_is_exclusive(v___x_3221_);
if (v_isSharedCheck_3263_ == 0)
{
v___x_3225_ = v___x_3221_;
v_isShared_3226_ = v_isSharedCheck_3263_;
goto v_resetjp_3224_;
}
else
{
lean_inc(v_snd_3223_);
lean_inc(v_fst_3222_);
lean_dec(v___x_3221_);
v___x_3225_ = lean_box(0);
v_isShared_3226_ = v_isSharedCheck_3263_;
goto v_resetjp_3224_;
}
v_resetjp_3224_:
{
uint8_t v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___y_3233_; lean_object* v_fst_3234_; lean_object* v_snd_3235_; lean_object* v_fst_3242_; 
v___x_3227_ = 1;
v___x_3228_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_id_3218_, v___x_3227_);
v___x_3229_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3229_, 0, v___x_3228_);
v___x_3230_ = lean_uint64_to_nat(v_javascriptHash_3219_);
v___x_3231_ = l_Lean_bignumToJson(v___x_3230_);
if (lean_obj_tag(v_range_x3f_3216_) == 0)
{
lean_object* v___x_3253_; 
v___x_3253_ = lean_box(0);
v_fst_3242_ = v___x_3253_;
goto v___jp_3241_;
}
else
{
lean_object* v_val_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3262_; 
v_val_3254_ = lean_ctor_get(v_range_x3f_3216_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v_range_x3f_3216_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3256_ = v_range_x3f_3216_;
v_isShared_3257_ = v_isSharedCheck_3262_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_val_3254_);
lean_dec(v_range_x3f_3216_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3262_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___x_3258_; lean_object* v___x_3260_; 
v___x_3258_ = l_Lean_Lsp_instToJsonRange_toJson(v_val_3254_);
if (v_isShared_3257_ == 0)
{
lean_ctor_set(v___x_3256_, 0, v___x_3258_);
v___x_3260_ = v___x_3256_;
goto v_reusejp_3259_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v___x_3258_);
v___x_3260_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3259_;
}
v_reusejp_3259_:
{
v_fst_3242_ = v___x_3260_;
goto v___jp_3241_;
}
}
}
v___jp_3232_:
{
lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3239_; 
v___x_3236_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3236_, 0, v___x_3229_);
lean_ctor_set(v___x_3236_, 1, v___x_3231_);
lean_ctor_set(v___x_3236_, 2, v_fst_3222_);
lean_ctor_set(v___x_3236_, 3, v___y_3233_);
lean_ctor_set(v___x_3236_, 4, v_fst_3234_);
v___x_3237_ = l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_42_(v___x_3236_);
lean_dec_ref_known(v___x_3236_, 5);
if (v_isShared_3226_ == 0)
{
lean_ctor_set(v___x_3225_, 1, v_snd_3235_);
lean_ctor_set(v___x_3225_, 0, v___x_3237_);
v___x_3239_ = v___x_3225_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v___x_3237_);
lean_ctor_set(v_reuseFailAlloc_3240_, 1, v_snd_3235_);
v___x_3239_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
return v___x_3239_;
}
}
v___jp_3241_:
{
if (lean_obj_tag(v_name_x3f_3217_) == 0)
{
lean_object* v___x_3243_; 
v___x_3243_ = lean_box(0);
v___y_3233_ = v_fst_3242_;
v_fst_3234_ = v___x_3243_;
v_snd_3235_ = v_snd_3223_;
goto v___jp_3232_;
}
else
{
lean_object* v_val_3244_; lean_object* v___x_3246_; uint8_t v_isShared_3247_; uint8_t v_isSharedCheck_3252_; 
v_val_3244_ = lean_ctor_get(v_name_x3f_3217_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v_name_x3f_3217_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3246_ = v_name_x3f_3217_;
v_isShared_3247_ = v_isSharedCheck_3252_;
goto v_resetjp_3245_;
}
else
{
lean_inc(v_val_3244_);
lean_dec(v_name_x3f_3217_);
v___x_3246_ = lean_box(0);
v_isShared_3247_ = v_isSharedCheck_3252_;
goto v_resetjp_3245_;
}
v_resetjp_3245_:
{
lean_object* v___x_3248_; lean_object* v___x_3250_; 
v___x_3248_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3248_, 0, v_val_3244_);
if (v_isShared_3247_ == 0)
{
lean_ctor_set(v___x_3246_, 0, v___x_3248_);
v___x_3250_ = v___x_3246_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v___x_3248_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
v___y_3233_ = v_fst_3242_;
v_fst_3234_ = v___x_3250_;
v_snd_3235_ = v_snd_3223_;
goto v___jp_3232_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodablePanelWidgetInstance_dec___redArg___lam__0_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1_(lean_object* v_props_3264_, lean_object* v___y_3265_){
_start:
{
lean_object* v___x_3266_; 
v___x_3266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3266_, 0, v_props_3264_);
lean_ctor_set(v___x_3266_, 1, v___y_3265_);
return v___x_3266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodablePanelWidgetInstance_dec___redArg_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1_(lean_object* v_j_3267_){
_start:
{
lean_object* v___x_3268_; 
v___x_3268_ = l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20_(v_j_3267_);
if (lean_obj_tag(v___x_3268_) == 0)
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3276_; 
v_a_3269_ = lean_ctor_get(v___x_3268_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v___x_3268_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3271_ = v___x_3268_;
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_3268_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3274_; 
if (v_isShared_3272_ == 0)
{
v___x_3274_ = v___x_3271_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v_a_3269_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
return v___x_3274_;
}
}
}
else
{
lean_object* v_a_3277_; lean_object* v_id_3278_; lean_object* v_javascriptHash_3279_; lean_object* v_props_3280_; lean_object* v_range_x3f_3281_; lean_object* v_name_x3f_3282_; lean_object* v___x_3283_; 
v_a_3277_ = lean_ctor_get(v___x_3268_, 0);
lean_inc(v_a_3277_);
lean_dec_ref_known(v___x_3268_, 1);
v_id_3278_ = lean_ctor_get(v_a_3277_, 0);
lean_inc(v_id_3278_);
v_javascriptHash_3279_ = lean_ctor_get(v_a_3277_, 1);
lean_inc(v_javascriptHash_3279_);
v_props_3280_ = lean_ctor_get(v_a_3277_, 2);
lean_inc(v_props_3280_);
v_range_x3f_3281_ = lean_ctor_get(v_a_3277_, 3);
lean_inc(v_range_x3f_3281_);
v_name_x3f_3282_ = lean_ctor_get(v_a_3277_, 4);
lean_inc(v_name_x3f_3282_);
lean_dec(v_a_3277_);
v___x_3283_ = l_Lean_Name_fromJson_x3f(v_id_3278_);
if (lean_obj_tag(v___x_3283_) == 0)
{
lean_object* v_a_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3291_; 
lean_dec(v_name_x3f_3282_);
lean_dec(v_range_x3f_3281_);
lean_dec(v_props_3280_);
lean_dec(v_javascriptHash_3279_);
v_a_3284_ = lean_ctor_get(v___x_3283_, 0);
v_isSharedCheck_3291_ = !lean_is_exclusive(v___x_3283_);
if (v_isSharedCheck_3291_ == 0)
{
v___x_3286_ = v___x_3283_;
v_isShared_3287_ = v_isSharedCheck_3291_;
goto v_resetjp_3285_;
}
else
{
lean_inc(v_a_3284_);
lean_dec(v___x_3283_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3291_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v___x_3289_; 
if (v_isShared_3287_ == 0)
{
v___x_3289_ = v___x_3286_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v_a_3284_);
v___x_3289_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
return v___x_3289_;
}
}
}
else
{
lean_object* v_a_3292_; lean_object* v___x_3293_; 
v_a_3292_ = lean_ctor_get(v___x_3283_, 0);
lean_inc(v_a_3292_);
lean_dec_ref_known(v___x_3283_, 1);
v___x_3293_ = l_Lean_UInt64_fromJson_x3f(v_javascriptHash_3279_);
if (lean_obj_tag(v___x_3293_) == 0)
{
lean_object* v_a_3294_; lean_object* v___x_3296_; uint8_t v_isShared_3297_; uint8_t v_isSharedCheck_3301_; 
lean_dec(v_a_3292_);
lean_dec(v_name_x3f_3282_);
lean_dec(v_range_x3f_3281_);
lean_dec(v_props_3280_);
v_a_3294_ = lean_ctor_get(v___x_3293_, 0);
v_isSharedCheck_3301_ = !lean_is_exclusive(v___x_3293_);
if (v_isSharedCheck_3301_ == 0)
{
v___x_3296_ = v___x_3293_;
v_isShared_3297_ = v_isSharedCheck_3301_;
goto v_resetjp_3295_;
}
else
{
lean_inc(v_a_3294_);
lean_dec(v___x_3293_);
v___x_3296_ = lean_box(0);
v_isShared_3297_ = v_isSharedCheck_3301_;
goto v_resetjp_3295_;
}
v_resetjp_3295_:
{
lean_object* v___x_3299_; 
if (v_isShared_3297_ == 0)
{
v___x_3299_ = v___x_3296_;
goto v_reusejp_3298_;
}
else
{
lean_object* v_reuseFailAlloc_3300_; 
v_reuseFailAlloc_3300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3300_, 0, v_a_3294_);
v___x_3299_ = v_reuseFailAlloc_3300_;
goto v_reusejp_3298_;
}
v_reusejp_3298_:
{
return v___x_3299_;
}
}
}
else
{
lean_object* v_a_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3356_; 
v_a_3302_ = lean_ctor_get(v___x_3293_, 0);
v_isSharedCheck_3356_ = !lean_is_exclusive(v___x_3293_);
if (v_isSharedCheck_3356_ == 0)
{
v___x_3304_ = v___x_3293_;
v_isShared_3305_ = v_isSharedCheck_3356_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_a_3302_);
lean_dec(v___x_3293_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3356_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
lean_object* v___f_3306_; lean_object* v___y_3308_; lean_object* v_____do__lift_3309_; lean_object* v_____do__lift_3317_; 
v___f_3306_ = lean_alloc_closure((void*)(l_Lean_Widget_instRpcEncodablePanelWidgetInstance_dec___redArg___lam__0_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1_), 2, 1);
lean_closure_set(v___f_3306_, 0, v_props_3280_);
if (lean_obj_tag(v_range_x3f_3281_) == 0)
{
lean_object* v___x_3337_; 
v___x_3337_ = lean_box(0);
v_____do__lift_3317_ = v___x_3337_;
goto v___jp_3316_;
}
else
{
lean_object* v_val_3338_; lean_object* v___x_3340_; uint8_t v_isShared_3341_; uint8_t v_isSharedCheck_3355_; 
v_val_3338_ = lean_ctor_get(v_range_x3f_3281_, 0);
v_isSharedCheck_3355_ = !lean_is_exclusive(v_range_x3f_3281_);
if (v_isSharedCheck_3355_ == 0)
{
v___x_3340_ = v_range_x3f_3281_;
v_isShared_3341_ = v_isSharedCheck_3355_;
goto v_resetjp_3339_;
}
else
{
lean_inc(v_val_3338_);
lean_dec(v_range_x3f_3281_);
v___x_3340_ = lean_box(0);
v_isShared_3341_ = v_isSharedCheck_3355_;
goto v_resetjp_3339_;
}
v_resetjp_3339_:
{
lean_object* v___x_3342_; 
v___x_3342_ = l_Lean_Lsp_instFromJsonRange_fromJson(v_val_3338_);
if (lean_obj_tag(v___x_3342_) == 0)
{
lean_object* v_a_3343_; lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3350_; 
lean_del_object(v___x_3340_);
lean_dec_ref(v___f_3306_);
lean_del_object(v___x_3304_);
lean_dec(v_a_3302_);
lean_dec(v_a_3292_);
lean_dec(v_name_x3f_3282_);
v_a_3343_ = lean_ctor_get(v___x_3342_, 0);
v_isSharedCheck_3350_ = !lean_is_exclusive(v___x_3342_);
if (v_isSharedCheck_3350_ == 0)
{
v___x_3345_ = v___x_3342_;
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
else
{
lean_inc(v_a_3343_);
lean_dec(v___x_3342_);
v___x_3345_ = lean_box(0);
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
v_resetjp_3344_:
{
lean_object* v___x_3348_; 
if (v_isShared_3346_ == 0)
{
v___x_3348_ = v___x_3345_;
goto v_reusejp_3347_;
}
else
{
lean_object* v_reuseFailAlloc_3349_; 
v_reuseFailAlloc_3349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3349_, 0, v_a_3343_);
v___x_3348_ = v_reuseFailAlloc_3349_;
goto v_reusejp_3347_;
}
v_reusejp_3347_:
{
return v___x_3348_;
}
}
}
else
{
lean_object* v_a_3351_; lean_object* v___x_3353_; 
v_a_3351_ = lean_ctor_get(v___x_3342_, 0);
lean_inc(v_a_3351_);
lean_dec_ref_known(v___x_3342_, 1);
if (v_isShared_3341_ == 0)
{
lean_ctor_set(v___x_3340_, 0, v_a_3351_);
v___x_3353_ = v___x_3340_;
goto v_reusejp_3352_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v_a_3351_);
v___x_3353_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3352_;
}
v_reusejp_3352_:
{
v_____do__lift_3317_ = v___x_3353_;
goto v___jp_3316_;
}
}
}
}
v___jp_3307_:
{
lean_object* v___x_3310_; uint64_t v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3314_; 
v___x_3310_ = lean_alloc_ctor(0, 2, 8);
lean_ctor_set(v___x_3310_, 0, v_a_3292_);
lean_ctor_set(v___x_3310_, 1, v___f_3306_);
v___x_3311_ = lean_unbox_uint64(v_a_3302_);
lean_dec(v_a_3302_);
lean_ctor_set_uint64(v___x_3310_, sizeof(void*)*2, v___x_3311_);
v___x_3312_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3312_, 0, v___x_3310_);
lean_ctor_set(v___x_3312_, 1, v___y_3308_);
lean_ctor_set(v___x_3312_, 2, v_____do__lift_3309_);
if (v_isShared_3305_ == 0)
{
lean_ctor_set(v___x_3304_, 0, v___x_3312_);
v___x_3314_ = v___x_3304_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v___x_3312_);
v___x_3314_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
return v___x_3314_;
}
}
v___jp_3316_:
{
if (lean_obj_tag(v_name_x3f_3282_) == 0)
{
lean_object* v___x_3318_; 
v___x_3318_ = lean_box(0);
v___y_3308_ = v_____do__lift_3317_;
v_____do__lift_3309_ = v___x_3318_;
goto v___jp_3307_;
}
else
{
lean_object* v_val_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3336_; 
v_val_3319_ = lean_ctor_get(v_name_x3f_3282_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v_name_x3f_3282_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3321_ = v_name_x3f_3282_;
v_isShared_3322_ = v_isSharedCheck_3336_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_val_3319_);
lean_dec(v_name_x3f_3282_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3336_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___x_3323_; 
v___x_3323_ = l_Lean_Json_getStr_x3f(v_val_3319_);
if (lean_obj_tag(v___x_3323_) == 0)
{
lean_object* v_a_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3331_; 
lean_del_object(v___x_3321_);
lean_dec(v_____do__lift_3317_);
lean_dec_ref(v___f_3306_);
lean_del_object(v___x_3304_);
lean_dec(v_a_3302_);
lean_dec(v_a_3292_);
v_a_3324_ = lean_ctor_get(v___x_3323_, 0);
v_isSharedCheck_3331_ = !lean_is_exclusive(v___x_3323_);
if (v_isSharedCheck_3331_ == 0)
{
v___x_3326_ = v___x_3323_;
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_a_3324_);
lean_dec(v___x_3323_);
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
v_reuseFailAlloc_3330_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_3332_; lean_object* v___x_3334_; 
v_a_3332_ = lean_ctor_get(v___x_3323_, 0);
lean_inc(v_a_3332_);
lean_dec_ref_known(v___x_3323_, 1);
if (v_isShared_3322_ == 0)
{
lean_ctor_set(v___x_3321_, 0, v_a_3332_);
v___x_3334_ = v___x_3321_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v_a_3332_);
v___x_3334_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
v___y_3308_ = v_____do__lift_3317_;
v_____do__lift_3309_ = v___x_3334_;
goto v___jp_3307_;
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
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodablePanelWidgetInstance_dec_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1_(lean_object* v_j_3357_, lean_object* v_a_3358_){
_start:
{
lean_object* v___x_3359_; 
v___x_3359_ = l_Lean_Widget_instRpcEncodablePanelWidgetInstance_dec___redArg_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1_(v_j_3357_);
return v___x_3359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodablePanelWidgetInstance_dec_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1____boxed(lean_object* v_j_3360_, lean_object* v_a_3361_){
_start:
{
lean_object* v_res_3362_; 
v_res_3362_ = l_Lean_Widget_instRpcEncodablePanelWidgetInstance_dec_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1_(v_j_3360_, v_a_3361_);
lean_dec_ref(v_a_3361_);
return v_res_3362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_10_(lean_object* v_json_3370_){
_start:
{
lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v_a_3373_; lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3380_; 
v___x_3371_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_10_));
v___x_3372_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_3273022877____hygCtx___hyg_20__spec__0(v_json_3370_, v___x_3371_);
v_a_3373_ = lean_ctor_get(v___x_3372_, 0);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3372_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3375_ = v___x_3372_;
v_isShared_3376_ = v_isSharedCheck_3380_;
goto v_resetjp_3374_;
}
else
{
lean_inc(v_a_3373_);
lean_dec(v___x_3372_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3380_;
goto v_resetjp_3374_;
}
v_resetjp_3374_:
{
lean_object* v___x_3378_; 
if (v_isShared_3376_ == 0)
{
v___x_3378_ = v___x_3375_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v_a_3373_);
v___x_3378_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
return v___x_3378_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_32_(lean_object* v_x_3383_){
_start:
{
lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; 
v___x_3384_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_10_));
v___x_3385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3385_, 0, v___x_3384_);
lean_ctor_set(v___x_3385_, 1, v_x_3383_);
v___x_3386_ = lean_box(0);
v___x_3387_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3387_, 0, v___x_3385_);
lean_ctor_set(v___x_3387_, 1, v___x_3386_);
v___x_3388_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3388_, 0, v___x_3387_);
lean_ctor_set(v___x_3388_, 1, v___x_3386_);
v___x_3389_ = ((lean_object*)(l_Lean_Widget_instToJsonGetWidgetSourceParams_toJson___closed__2));
v___x_3390_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Widget_instToJsonGetWidgetSourceParams_toJson_spec__0(v___x_3388_, v___x_3389_);
v___x_3391_ = l_Lean_Json_mkObj(v___x_3390_);
lean_dec(v___x_3390_);
return v___x_3391_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1_spec__1(size_t v_sz_3394_, size_t v_i_3395_, lean_object* v_bs_3396_){
_start:
{
uint8_t v___x_3397_; 
v___x_3397_ = lean_usize_dec_lt(v_i_3395_, v_sz_3394_);
if (v___x_3397_ == 0)
{
return v_bs_3396_;
}
else
{
lean_object* v_v_3398_; lean_object* v___x_3399_; lean_object* v_bs_x27_3400_; size_t v___x_3401_; size_t v___x_3402_; lean_object* v___x_3403_; 
v_v_3398_ = lean_array_uget(v_bs_3396_, v_i_3395_);
v___x_3399_ = lean_unsigned_to_nat(0u);
v_bs_x27_3400_ = lean_array_uset(v_bs_3396_, v_i_3395_, v___x_3399_);
v___x_3401_ = ((size_t)1ULL);
v___x_3402_ = lean_usize_add(v_i_3395_, v___x_3401_);
v___x_3403_ = lean_array_uset(v_bs_x27_3400_, v_i_3395_, v_v_3398_);
v_i_3395_ = v___x_3402_;
v_bs_3396_ = v___x_3403_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1_spec__1___boxed(lean_object* v_sz_3405_, lean_object* v_i_3406_, lean_object* v_bs_3407_){
_start:
{
size_t v_sz_boxed_3408_; size_t v_i_boxed_3409_; lean_object* v_res_3410_; 
v_sz_boxed_3408_ = lean_unbox_usize(v_sz_3405_);
lean_dec(v_sz_3405_);
v_i_boxed_3409_ = lean_unbox_usize(v_i_3406_);
lean_dec(v_i_3406_);
v_res_3410_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1_spec__1(v_sz_boxed_3408_, v_i_boxed_3409_, v_bs_3407_);
return v_res_3410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1(lean_object* v_a_3411_){
_start:
{
size_t v_sz_3412_; size_t v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; 
v_sz_3412_ = lean_array_size(v_a_3411_);
v___x_3413_ = ((size_t)0ULL);
v___x_3414_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1_spec__1(v_sz_3412_, v___x_3413_, v_a_3411_);
v___x_3415_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3414_);
return v___x_3415_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0(size_t v_sz_3416_, size_t v_i_3417_, lean_object* v_bs_3418_, lean_object* v___y_3419_){
_start:
{
uint8_t v___x_3420_; 
v___x_3420_ = lean_usize_dec_lt(v_i_3417_, v_sz_3416_);
if (v___x_3420_ == 0)
{
lean_object* v___x_3421_; 
v___x_3421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3421_, 0, v_bs_3418_);
lean_ctor_set(v___x_3421_, 1, v___y_3419_);
return v___x_3421_;
}
else
{
lean_object* v_v_3422_; lean_object* v___x_3423_; lean_object* v_fst_3424_; lean_object* v_snd_3425_; lean_object* v___x_3426_; lean_object* v_bs_x27_3427_; size_t v___x_3428_; size_t v___x_3429_; lean_object* v___x_3430_; 
v_v_3422_ = lean_array_uget_borrowed(v_bs_3418_, v_i_3417_);
lean_inc(v_v_3422_);
v___x_3423_ = l_Lean_Widget_instRpcEncodablePanelWidgetInstance_enc_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1_(v_v_3422_, v___y_3419_);
v_fst_3424_ = lean_ctor_get(v___x_3423_, 0);
lean_inc(v_fst_3424_);
v_snd_3425_ = lean_ctor_get(v___x_3423_, 1);
lean_inc(v_snd_3425_);
lean_dec_ref(v___x_3423_);
v___x_3426_ = lean_unsigned_to_nat(0u);
v_bs_x27_3427_ = lean_array_uset(v_bs_3418_, v_i_3417_, v___x_3426_);
v___x_3428_ = ((size_t)1ULL);
v___x_3429_ = lean_usize_add(v_i_3417_, v___x_3428_);
v___x_3430_ = lean_array_uset(v_bs_x27_3427_, v_i_3417_, v_fst_3424_);
v_i_3417_ = v___x_3429_;
v_bs_3418_ = v___x_3430_;
v___y_3419_ = v_snd_3425_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0___boxed(lean_object* v_sz_3432_, lean_object* v_i_3433_, lean_object* v_bs_3434_, lean_object* v___y_3435_){
_start:
{
size_t v_sz_boxed_3436_; size_t v_i_boxed_3437_; lean_object* v_res_3438_; 
v_sz_boxed_3436_ = lean_unbox_usize(v_sz_3432_);
lean_dec(v_sz_3432_);
v_i_boxed_3437_ = lean_unbox_usize(v_i_3433_);
lean_dec(v_i_3433_);
v_res_3438_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0(v_sz_boxed_3436_, v_i_boxed_3437_, v_bs_3434_, v___y_3435_);
return v_res_3438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1_(lean_object* v_a_3439_, lean_object* v_a_3440_){
_start:
{
size_t v_sz_3441_; size_t v___x_3442_; lean_object* v___x_3443_; lean_object* v_fst_3444_; lean_object* v_snd_3445_; lean_object* v___x_3447_; uint8_t v_isShared_3448_; uint8_t v_isSharedCheck_3454_; 
v_sz_3441_ = lean_array_size(v_a_3439_);
v___x_3442_ = ((size_t)0ULL);
v___x_3443_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0(v_sz_3441_, v___x_3442_, v_a_3439_, v_a_3440_);
v_fst_3444_ = lean_ctor_get(v___x_3443_, 0);
v_snd_3445_ = lean_ctor_get(v___x_3443_, 1);
v_isSharedCheck_3454_ = !lean_is_exclusive(v___x_3443_);
if (v_isSharedCheck_3454_ == 0)
{
v___x_3447_ = v___x_3443_;
v_isShared_3448_ = v_isSharedCheck_3454_;
goto v_resetjp_3446_;
}
else
{
lean_inc(v_snd_3445_);
lean_inc(v_fst_3444_);
lean_dec(v___x_3443_);
v___x_3447_ = lean_box(0);
v_isShared_3448_ = v_isSharedCheck_3454_;
goto v_resetjp_3446_;
}
v_resetjp_3446_:
{
lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3452_; 
v___x_3449_ = l_Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1(v_fst_3444_);
v___x_3450_ = l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_32_(v___x_3449_);
if (v_isShared_3448_ == 0)
{
lean_ctor_set(v___x_3447_, 0, v___x_3450_);
v___x_3452_ = v___x_3447_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v___x_3450_);
lean_ctor_set(v_reuseFailAlloc_3453_, 1, v_snd_3445_);
v___x_3452_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
return v___x_3452_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1___redArg(size_t v_sz_3455_, size_t v_i_3456_, lean_object* v_bs_3457_){
_start:
{
uint8_t v___x_3458_; 
v___x_3458_ = lean_usize_dec_lt(v_i_3456_, v_sz_3455_);
if (v___x_3458_ == 0)
{
lean_object* v___x_3459_; 
v___x_3459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3459_, 0, v_bs_3457_);
return v___x_3459_;
}
else
{
lean_object* v_v_3460_; lean_object* v___x_3461_; 
v_v_3460_ = lean_array_uget_borrowed(v_bs_3457_, v_i_3456_);
lean_inc(v_v_3460_);
v___x_3461_ = l_Lean_Widget_instRpcEncodablePanelWidgetInstance_dec___redArg_00___x40_Lean_Widget_UserWidget_3433604829____hygCtx___hyg_1_(v_v_3460_);
if (lean_obj_tag(v___x_3461_) == 0)
{
lean_object* v_a_3462_; lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3469_; 
lean_dec_ref(v_bs_3457_);
v_a_3462_ = lean_ctor_get(v___x_3461_, 0);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3461_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3464_ = v___x_3461_;
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
else
{
lean_inc(v_a_3462_);
lean_dec(v___x_3461_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
lean_object* v___x_3467_; 
if (v_isShared_3465_ == 0)
{
v___x_3467_ = v___x_3464_;
goto v_reusejp_3466_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v_a_3462_);
v___x_3467_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3466_;
}
v_reusejp_3466_:
{
return v___x_3467_;
}
}
}
else
{
lean_object* v_a_3470_; lean_object* v___x_3471_; lean_object* v_bs_x27_3472_; size_t v___x_3473_; size_t v___x_3474_; lean_object* v___x_3475_; 
v_a_3470_ = lean_ctor_get(v___x_3461_, 0);
lean_inc(v_a_3470_);
lean_dec_ref_known(v___x_3461_, 1);
v___x_3471_ = lean_unsigned_to_nat(0u);
v_bs_x27_3472_ = lean_array_uset(v_bs_3457_, v_i_3456_, v___x_3471_);
v___x_3473_ = ((size_t)1ULL);
v___x_3474_ = lean_usize_add(v_i_3456_, v___x_3473_);
v___x_3475_ = lean_array_uset(v_bs_x27_3472_, v_i_3456_, v_a_3470_);
v_i_3456_ = v___x_3474_;
v_bs_3457_ = v___x_3475_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1___redArg___boxed(lean_object* v_sz_3477_, lean_object* v_i_3478_, lean_object* v_bs_3479_){
_start:
{
size_t v_sz_boxed_3480_; size_t v_i_boxed_3481_; lean_object* v_res_3482_; 
v_sz_boxed_3480_ = lean_unbox_usize(v_sz_3477_);
lean_dec(v_sz_3477_);
v_i_boxed_3481_ = lean_unbox_usize(v_i_3478_);
lean_dec(v_i_3478_);
v_res_3482_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1___redArg(v_sz_boxed_3480_, v_i_boxed_3481_, v_bs_3479_);
return v_res_3482_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0_spec__0(size_t v_sz_3483_, size_t v_i_3484_, lean_object* v_bs_3485_){
_start:
{
uint8_t v___x_3486_; 
v___x_3486_ = lean_usize_dec_lt(v_i_3484_, v_sz_3483_);
if (v___x_3486_ == 0)
{
lean_object* v___x_3487_; 
v___x_3487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3487_, 0, v_bs_3485_);
return v___x_3487_;
}
else
{
lean_object* v_v_3488_; lean_object* v___x_3489_; lean_object* v_bs_x27_3490_; size_t v___x_3491_; size_t v___x_3492_; lean_object* v___x_3493_; 
v_v_3488_ = lean_array_uget(v_bs_3485_, v_i_3484_);
v___x_3489_ = lean_unsigned_to_nat(0u);
v_bs_x27_3490_ = lean_array_uset(v_bs_3485_, v_i_3484_, v___x_3489_);
v___x_3491_ = ((size_t)1ULL);
v___x_3492_ = lean_usize_add(v_i_3484_, v___x_3491_);
v___x_3493_ = lean_array_uset(v_bs_x27_3490_, v_i_3484_, v_v_3488_);
v_i_3484_ = v___x_3492_;
v_bs_3485_ = v___x_3493_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0_spec__0___boxed(lean_object* v_sz_3495_, lean_object* v_i_3496_, lean_object* v_bs_3497_){
_start:
{
size_t v_sz_boxed_3498_; size_t v_i_boxed_3499_; lean_object* v_res_3500_; 
v_sz_boxed_3498_ = lean_unbox_usize(v_sz_3495_);
lean_dec(v_sz_3495_);
v_i_boxed_3499_ = lean_unbox_usize(v_i_3496_);
lean_dec(v_i_3496_);
v_res_3500_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0_spec__0(v_sz_boxed_3498_, v_i_boxed_3499_, v_bs_3497_);
return v_res_3500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0(lean_object* v_x_3502_){
_start:
{
if (lean_obj_tag(v_x_3502_) == 4)
{
lean_object* v_elems_3503_; size_t v_sz_3504_; size_t v___x_3505_; lean_object* v___x_3506_; 
v_elems_3503_ = lean_ctor_get(v_x_3502_, 0);
lean_inc_ref(v_elems_3503_);
lean_dec_ref_known(v_x_3502_, 1);
v_sz_3504_ = lean_array_size(v_elems_3503_);
v___x_3505_ = ((size_t)0ULL);
v___x_3506_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0_spec__0(v_sz_3504_, v___x_3505_, v_elems_3503_);
return v___x_3506_;
}
else
{
lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; 
v___x_3507_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0___closed__0));
v___x_3508_ = lean_unsigned_to_nat(80u);
v___x_3509_ = l_Lean_Json_pretty(v_x_3502_, v___x_3508_);
v___x_3510_ = lean_string_append(v___x_3507_, v___x_3509_);
lean_dec_ref(v___x_3509_);
v___x_3511_ = ((lean_object*)(l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__1));
v___x_3512_ = lean_string_append(v___x_3510_, v___x_3511_);
v___x_3513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3513_, 0, v___x_3512_);
return v___x_3513_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1_(lean_object* v_j_3514_, lean_object* v_a_3515_){
_start:
{
lean_object* v___x_3516_; 
v___x_3516_ = l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_UserWidget_629054736____hygCtx___hyg_10_(v_j_3514_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_object* v_a_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3524_; 
v_a_3517_ = lean_ctor_get(v___x_3516_, 0);
v_isSharedCheck_3524_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3524_ == 0)
{
v___x_3519_ = v___x_3516_;
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_a_3517_);
lean_dec(v___x_3516_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3522_; 
if (v_isShared_3520_ == 0)
{
v___x_3522_ = v___x_3519_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v_a_3517_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
}
else
{
lean_object* v_a_3525_; lean_object* v___x_3526_; 
v_a_3525_ = lean_ctor_get(v___x_3516_, 0);
lean_inc(v_a_3525_);
lean_dec_ref_known(v___x_3516_, 1);
v___x_3526_ = l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__0(v_a_3525_);
if (lean_obj_tag(v___x_3526_) == 0)
{
lean_object* v_a_3527_; lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3534_; 
v_a_3527_ = lean_ctor_get(v___x_3526_, 0);
v_isSharedCheck_3534_ = !lean_is_exclusive(v___x_3526_);
if (v_isSharedCheck_3534_ == 0)
{
v___x_3529_ = v___x_3526_;
v_isShared_3530_ = v_isSharedCheck_3534_;
goto v_resetjp_3528_;
}
else
{
lean_inc(v_a_3527_);
lean_dec(v___x_3526_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3534_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v___x_3532_; 
if (v_isShared_3530_ == 0)
{
v___x_3532_ = v___x_3529_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3533_; 
v_reuseFailAlloc_3533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3533_, 0, v_a_3527_);
v___x_3532_ = v_reuseFailAlloc_3533_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
return v___x_3532_;
}
}
}
else
{
lean_object* v_a_3535_; size_t v_sz_3536_; size_t v___x_3537_; lean_object* v___x_3538_; 
v_a_3535_ = lean_ctor_get(v___x_3526_, 0);
lean_inc(v_a_3535_);
lean_dec_ref_known(v___x_3526_, 1);
v_sz_3536_ = lean_array_size(v_a_3535_);
v___x_3537_ = ((size_t)0ULL);
v___x_3538_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1___redArg(v_sz_3536_, v___x_3537_, v_a_3535_);
if (lean_obj_tag(v___x_3538_) == 0)
{
lean_object* v_a_3539_; lean_object* v___x_3541_; uint8_t v_isShared_3542_; uint8_t v_isSharedCheck_3546_; 
v_a_3539_ = lean_ctor_get(v___x_3538_, 0);
v_isSharedCheck_3546_ = !lean_is_exclusive(v___x_3538_);
if (v_isSharedCheck_3546_ == 0)
{
v___x_3541_ = v___x_3538_;
v_isShared_3542_ = v_isSharedCheck_3546_;
goto v_resetjp_3540_;
}
else
{
lean_inc(v_a_3539_);
lean_dec(v___x_3538_);
v___x_3541_ = lean_box(0);
v_isShared_3542_ = v_isSharedCheck_3546_;
goto v_resetjp_3540_;
}
v_resetjp_3540_:
{
lean_object* v___x_3544_; 
if (v_isShared_3542_ == 0)
{
v___x_3544_ = v___x_3541_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3545_; 
v_reuseFailAlloc_3545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3545_, 0, v_a_3539_);
v___x_3544_ = v_reuseFailAlloc_3545_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
return v___x_3544_;
}
}
}
else
{
lean_object* v_a_3547_; lean_object* v___x_3549_; uint8_t v_isShared_3550_; uint8_t v_isSharedCheck_3554_; 
v_a_3547_ = lean_ctor_get(v___x_3538_, 0);
v_isSharedCheck_3554_ = !lean_is_exclusive(v___x_3538_);
if (v_isSharedCheck_3554_ == 0)
{
v___x_3549_ = v___x_3538_;
v_isShared_3550_ = v_isSharedCheck_3554_;
goto v_resetjp_3548_;
}
else
{
lean_inc(v_a_3547_);
lean_dec(v___x_3538_);
v___x_3549_ = lean_box(0);
v_isShared_3550_ = v_isSharedCheck_3554_;
goto v_resetjp_3548_;
}
v_resetjp_3548_:
{
lean_object* v___x_3552_; 
if (v_isShared_3550_ == 0)
{
v___x_3552_ = v___x_3549_;
goto v_reusejp_3551_;
}
else
{
lean_object* v_reuseFailAlloc_3553_; 
v_reuseFailAlloc_3553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3553_, 0, v_a_3547_);
v___x_3552_ = v_reuseFailAlloc_3553_;
goto v_reusejp_3551_;
}
v_reusejp_3551_:
{
return v___x_3552_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1____boxed(lean_object* v_j_3555_, lean_object* v_a_3556_){
_start:
{
lean_object* v_res_3557_; 
v_res_3557_ = l_Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1_(v_j_3555_, v_a_3556_);
lean_dec_ref(v_a_3556_);
return v_res_3557_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1(size_t v_sz_3558_, size_t v_i_3559_, lean_object* v_bs_3560_, lean_object* v___y_3561_){
_start:
{
lean_object* v___x_3562_; 
v___x_3562_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1___redArg(v_sz_3558_, v_i_3559_, v_bs_3560_);
return v___x_3562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1___boxed(lean_object* v_sz_3563_, lean_object* v_i_3564_, lean_object* v_bs_3565_, lean_object* v___y_3566_){
_start:
{
size_t v_sz_boxed_3567_; size_t v_i_boxed_3568_; lean_object* v_res_3569_; 
v_sz_boxed_3567_ = lean_unbox_usize(v_sz_3563_);
lean_dec(v_sz_3563_);
v_i_boxed_3568_ = lean_unbox_usize(v_i_3564_);
lean_dec(v_i_3564_);
v_res_3569_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableGetWidgetsResponse_dec_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1__spec__1(v_sz_boxed_3567_, v_i_boxed_3568_, v_bs_3565_, v___y_3566_);
lean_dec_ref(v___y_3566_);
return v_res_3569_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0_spec__0___redArg(lean_object* v_x_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_){
_start:
{
if (lean_obj_tag(v_x_3576_) == 0)
{
lean_object* v_a_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; 
v_a_3582_ = lean_ctor_get(v_x_3576_, 0);
lean_inc(v_a_3582_);
lean_dec_ref_known(v_x_3576_, 1);
v___x_3583_ = l_Lean_stringToMessageData(v_a_3582_);
v___x_3584_ = l_Lean_throwError___at___00Lean_throwAttrMustBeGlobal___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__4_spec__6___redArg(v___x_3583_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
return v___x_3584_;
}
else
{
lean_object* v_a_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3592_; 
v_a_3585_ = lean_ctor_get(v_x_3576_, 0);
v_isSharedCheck_3592_ = !lean_is_exclusive(v_x_3576_);
if (v_isSharedCheck_3592_ == 0)
{
v___x_3587_ = v_x_3576_;
v_isShared_3588_ = v_isSharedCheck_3592_;
goto v_resetjp_3586_;
}
else
{
lean_inc(v_a_3585_);
lean_dec(v_x_3576_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3592_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
lean_object* v___x_3590_; 
if (v_isShared_3588_ == 0)
{
lean_ctor_set_tag(v___x_3587_, 0);
v___x_3590_ = v___x_3587_;
goto v_reusejp_3589_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v_a_3585_);
v___x_3590_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3589_;
}
v_reusejp_3589_:
{
return v___x_3590_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0_spec__0___redArg___boxed(lean_object* v_x_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_){
_start:
{
lean_object* v_res_3599_; 
v_res_3599_ = l_Lean_ofExcept___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0_spec__0___redArg(v_x_3593_, v___y_3594_, v___y_3595_, v___y_3596_, v___y_3597_);
lean_dec(v___y_3597_);
lean_dec_ref(v___y_3596_);
lean_dec(v___y_3595_);
lean_dec_ref(v___y_3594_);
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0(lean_object* v_id_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_){
_start:
{
lean_object* v___x_3606_; lean_object* v_env_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; 
v___x_3606_ = lean_st_ref_get(v___y_3604_);
v_env_3607_ = lean_ctor_get(v___x_3606_, 0);
lean_inc_ref(v_env_3607_);
lean_dec(v___x_3606_);
v___x_3608_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3603_);
v___x_3609_ = ((lean_object*)(l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__1));
v___x_3610_ = l_Lean_Environment_evalConstCheck___redArg(v_env_3607_, v___x_3608_, v___x_3609_, v_id_3600_);
lean_dec_ref(v___x_3608_);
v___x_3611_ = l_Lean_ofExcept___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0_spec__0___redArg(v___x_3610_, v___y_3601_, v___y_3602_, v___y_3603_, v___y_3604_);
return v___x_3611_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0___boxed(lean_object* v_id_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_){
_start:
{
lean_object* v_res_3618_; 
v_res_3618_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0(v_id_3612_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_);
lean_dec(v___y_3616_);
lean_dec_ref(v___y_3615_);
lean_dec(v___y_3614_);
lean_dec_ref(v___y_3613_);
return v_res_3618_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_getWidgets_spec__1(lean_object* v___x_3619_, size_t v_sz_3620_, size_t v_i_3621_, lean_object* v_bs_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_){
_start:
{
uint8_t v___x_3628_; 
v___x_3628_ = lean_usize_dec_lt(v_i_3621_, v_sz_3620_);
if (v___x_3628_ == 0)
{
lean_object* v___x_3629_; 
lean_dec_ref(v___x_3619_);
v___x_3629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3629_, 0, v_bs_3622_);
return v___x_3629_;
}
else
{
lean_object* v_v_3630_; lean_object* v_id_3631_; lean_object* v___x_3632_; lean_object* v_bs_x27_3633_; lean_object* v_a_3635_; uint8_t v___x_3644_; lean_object* v___x_3645_; 
v_v_3630_ = lean_array_uget(v_bs_3622_, v_i_3621_);
v_id_3631_ = lean_ctor_get(v_v_3630_, 0);
v___x_3632_ = lean_unsigned_to_nat(0u);
v_bs_x27_3633_ = lean_array_uset(v_bs_3622_, v_i_3621_, v___x_3632_);
v___x_3644_ = 0;
lean_inc(v_id_3631_);
lean_inc_ref(v___x_3619_);
v___x_3645_ = l_Lean_Environment_find_x3f(v___x_3619_, v_id_3631_, v___x_3644_);
if (lean_obj_tag(v___x_3645_) == 0)
{
goto v___jp_3642_;
}
else
{
lean_object* v_val_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3667_; 
v_val_3646_ = lean_ctor_get(v___x_3645_, 0);
v_isSharedCheck_3667_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3667_ == 0)
{
v___x_3648_ = v___x_3645_;
v_isShared_3649_ = v_isSharedCheck_3667_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_val_3646_);
lean_dec(v___x_3645_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3667_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v___x_3650_; lean_object* v___x_3651_; uint8_t v___x_3652_; 
v___x_3650_ = l_Lean_ConstantInfo_type(v_val_3646_);
lean_dec(v_val_3646_);
v___x_3651_ = ((lean_object*)(l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__1));
v___x_3652_ = l_Lean_Expr_isConstOf(v___x_3650_, v___x_3651_);
lean_dec_ref(v___x_3650_);
if (v___x_3652_ == 0)
{
lean_del_object(v___x_3648_);
goto v___jp_3642_;
}
else
{
lean_object* v___x_3653_; 
lean_inc(v_id_3631_);
v___x_3653_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0(v_id_3631_, v___y_3623_, v___y_3624_, v___y_3625_, v___y_3626_);
if (lean_obj_tag(v___x_3653_) == 0)
{
lean_object* v_a_3654_; lean_object* v_name_3655_; lean_object* v___x_3657_; 
v_a_3654_ = lean_ctor_get(v___x_3653_, 0);
lean_inc(v_a_3654_);
lean_dec_ref_known(v___x_3653_, 1);
v_name_3655_ = lean_ctor_get(v_a_3654_, 0);
lean_inc_ref(v_name_3655_);
lean_dec(v_a_3654_);
if (v_isShared_3649_ == 0)
{
lean_ctor_set(v___x_3648_, 0, v_name_3655_);
v___x_3657_ = v___x_3648_;
goto v_reusejp_3656_;
}
else
{
lean_object* v_reuseFailAlloc_3658_; 
v_reuseFailAlloc_3658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3658_, 0, v_name_3655_);
v___x_3657_ = v_reuseFailAlloc_3658_;
goto v_reusejp_3656_;
}
v_reusejp_3656_:
{
v_a_3635_ = v___x_3657_;
goto v___jp_3634_;
}
}
else
{
lean_object* v_a_3659_; lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3666_; 
lean_del_object(v___x_3648_);
lean_dec_ref(v_bs_x27_3633_);
lean_dec(v_v_3630_);
lean_dec_ref(v___x_3619_);
v_a_3659_ = lean_ctor_get(v___x_3653_, 0);
v_isSharedCheck_3666_ = !lean_is_exclusive(v___x_3653_);
if (v_isSharedCheck_3666_ == 0)
{
v___x_3661_ = v___x_3653_;
v_isShared_3662_ = v_isSharedCheck_3666_;
goto v_resetjp_3660_;
}
else
{
lean_inc(v_a_3659_);
lean_dec(v___x_3653_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3666_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v___x_3664_; 
if (v_isShared_3662_ == 0)
{
v___x_3664_ = v___x_3661_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v_a_3659_);
v___x_3664_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
return v___x_3664_;
}
}
}
}
}
}
v___jp_3634_:
{
lean_object* v___x_3636_; lean_object* v___x_3637_; size_t v___x_3638_; size_t v___x_3639_; lean_object* v___x_3640_; 
v___x_3636_ = lean_box(0);
v___x_3637_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3637_, 0, v_v_3630_);
lean_ctor_set(v___x_3637_, 1, v___x_3636_);
lean_ctor_set(v___x_3637_, 2, v_a_3635_);
v___x_3638_ = ((size_t)1ULL);
v___x_3639_ = lean_usize_add(v_i_3621_, v___x_3638_);
v___x_3640_ = lean_array_uset(v_bs_x27_3633_, v_i_3621_, v___x_3637_);
v_i_3621_ = v___x_3639_;
v_bs_3622_ = v___x_3640_;
goto _start;
}
v___jp_3642_:
{
lean_object* v___x_3643_; 
v___x_3643_ = lean_box(0);
v_a_3635_ = v___x_3643_;
goto v___jp_3634_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_getWidgets_spec__1___boxed(lean_object* v___x_3668_, lean_object* v_sz_3669_, lean_object* v_i_3670_, lean_object* v_bs_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_){
_start:
{
size_t v_sz_boxed_3677_; size_t v_i_boxed_3678_; lean_object* v_res_3679_; 
v_sz_boxed_3677_ = lean_unbox_usize(v_sz_3669_);
lean_dec(v_sz_3669_);
v_i_boxed_3678_ = lean_unbox_usize(v_i_3670_);
lean_dec(v_i_3670_);
v_res_3679_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_getWidgets_spec__1(v___x_3668_, v_sz_boxed_3677_, v_i_boxed_3678_, v_bs_3671_, v___y_3672_, v___y_3673_, v___y_3674_, v___y_3675_);
lean_dec(v___y_3675_);
lean_dec_ref(v___y_3674_);
lean_dec(v___y_3673_);
lean_dec_ref(v___y_3672_);
return v_res_3679_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_getWidgets_spec__2(lean_object* v___x_3680_, lean_object* v___x_3681_, size_t v_sz_3682_, size_t v_i_3683_, lean_object* v_bs_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_){
_start:
{
uint8_t v___x_3690_; 
v___x_3690_ = lean_usize_dec_lt(v_i_3683_, v_sz_3682_);
if (v___x_3690_ == 0)
{
lean_object* v___x_3691_; 
lean_dec_ref(v___x_3681_);
lean_dec_ref(v___x_3680_);
v___x_3691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3691_, 0, v_bs_3684_);
return v___x_3691_;
}
else
{
lean_object* v_v_3692_; lean_object* v_toWidgetInstance_3693_; lean_object* v_stx_3694_; lean_object* v_id_3695_; lean_object* v___x_3696_; lean_object* v_bs_x27_3697_; lean_object* v___y_3699_; lean_object* v___y_3700_; uint8_t v___x_3706_; lean_object* v_a_3708_; lean_object* v___x_3722_; 
v_v_3692_ = lean_array_uget_borrowed(v_bs_3684_, v_i_3683_);
v_toWidgetInstance_3693_ = lean_ctor_get(v_v_3692_, 0);
lean_inc_ref(v_toWidgetInstance_3693_);
v_stx_3694_ = lean_ctor_get(v_v_3692_, 1);
lean_inc(v_stx_3694_);
v_id_3695_ = lean_ctor_get(v_toWidgetInstance_3693_, 0);
v___x_3696_ = lean_unsigned_to_nat(0u);
v_bs_x27_3697_ = lean_array_uset(v_bs_3684_, v_i_3683_, v___x_3696_);
v___x_3706_ = 0;
lean_inc(v_id_3695_);
lean_inc_ref(v___x_3681_);
v___x_3722_ = l_Lean_Environment_find_x3f(v___x_3681_, v_id_3695_, v___x_3706_);
if (lean_obj_tag(v___x_3722_) == 0)
{
goto v___jp_3720_;
}
else
{
lean_object* v_val_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3744_; 
v_val_3723_ = lean_ctor_get(v___x_3722_, 0);
v_isSharedCheck_3744_ = !lean_is_exclusive(v___x_3722_);
if (v_isSharedCheck_3744_ == 0)
{
v___x_3725_ = v___x_3722_;
v_isShared_3726_ = v_isSharedCheck_3744_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_val_3723_);
lean_dec(v___x_3722_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3744_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v___x_3727_; lean_object* v___x_3728_; uint8_t v___x_3729_; 
v___x_3727_ = l_Lean_ConstantInfo_type(v_val_3723_);
lean_dec(v_val_3723_);
v___x_3728_ = ((lean_object*)(l_Lean_Widget_instFromJsonUserWidgetDefinition_fromJson___closed__1));
v___x_3729_ = l_Lean_Expr_isConstOf(v___x_3727_, v___x_3728_);
lean_dec_ref(v___x_3727_);
if (v___x_3729_ == 0)
{
lean_del_object(v___x_3725_);
goto v___jp_3720_;
}
else
{
lean_object* v___x_3730_; 
lean_inc(v_id_3695_);
v___x_3730_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0(v_id_3695_, v___y_3685_, v___y_3686_, v___y_3687_, v___y_3688_);
if (lean_obj_tag(v___x_3730_) == 0)
{
lean_object* v_a_3731_; lean_object* v_name_3732_; lean_object* v___x_3734_; 
v_a_3731_ = lean_ctor_get(v___x_3730_, 0);
lean_inc(v_a_3731_);
lean_dec_ref_known(v___x_3730_, 1);
v_name_3732_ = lean_ctor_get(v_a_3731_, 0);
lean_inc_ref(v_name_3732_);
lean_dec(v_a_3731_);
if (v_isShared_3726_ == 0)
{
lean_ctor_set(v___x_3725_, 0, v_name_3732_);
v___x_3734_ = v___x_3725_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v_name_3732_);
v___x_3734_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
v_a_3708_ = v___x_3734_;
goto v___jp_3707_;
}
}
else
{
lean_object* v_a_3736_; lean_object* v___x_3738_; uint8_t v_isShared_3739_; uint8_t v_isSharedCheck_3743_; 
lean_del_object(v___x_3725_);
lean_dec_ref(v_bs_x27_3697_);
lean_dec(v_stx_3694_);
lean_dec_ref(v_toWidgetInstance_3693_);
lean_dec_ref(v___x_3681_);
lean_dec_ref(v___x_3680_);
v_a_3736_ = lean_ctor_get(v___x_3730_, 0);
v_isSharedCheck_3743_ = !lean_is_exclusive(v___x_3730_);
if (v_isSharedCheck_3743_ == 0)
{
v___x_3738_ = v___x_3730_;
v_isShared_3739_ = v_isSharedCheck_3743_;
goto v_resetjp_3737_;
}
else
{
lean_inc(v_a_3736_);
lean_dec(v___x_3730_);
v___x_3738_ = lean_box(0);
v_isShared_3739_ = v_isSharedCheck_3743_;
goto v_resetjp_3737_;
}
v_resetjp_3737_:
{
lean_object* v___x_3741_; 
if (v_isShared_3739_ == 0)
{
v___x_3741_ = v___x_3738_;
goto v_reusejp_3740_;
}
else
{
lean_object* v_reuseFailAlloc_3742_; 
v_reuseFailAlloc_3742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3742_, 0, v_a_3736_);
v___x_3741_ = v_reuseFailAlloc_3742_;
goto v_reusejp_3740_;
}
v_reusejp_3740_:
{
return v___x_3741_;
}
}
}
}
}
}
v___jp_3698_:
{
lean_object* v___x_3701_; size_t v___x_3702_; size_t v___x_3703_; lean_object* v___x_3704_; 
v___x_3701_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3701_, 0, v_toWidgetInstance_3693_);
lean_ctor_set(v___x_3701_, 1, v___y_3700_);
lean_ctor_set(v___x_3701_, 2, v___y_3699_);
v___x_3702_ = ((size_t)1ULL);
v___x_3703_ = lean_usize_add(v_i_3683_, v___x_3702_);
v___x_3704_ = lean_array_uset(v_bs_x27_3697_, v_i_3683_, v___x_3701_);
v_i_3683_ = v___x_3703_;
v_bs_3684_ = v___x_3704_;
goto _start;
}
v___jp_3707_:
{
lean_object* v___x_3709_; 
v___x_3709_ = l_Lean_Syntax_getRange_x3f(v_stx_3694_, v___x_3706_);
lean_dec(v_stx_3694_);
if (lean_obj_tag(v___x_3709_) == 0)
{
lean_object* v___x_3710_; 
v___x_3710_ = lean_box(0);
v___y_3699_ = v_a_3708_;
v___y_3700_ = v___x_3710_;
goto v___jp_3698_;
}
else
{
lean_object* v_val_3711_; lean_object* v___x_3713_; uint8_t v_isShared_3714_; uint8_t v_isSharedCheck_3719_; 
v_val_3711_ = lean_ctor_get(v___x_3709_, 0);
v_isSharedCheck_3719_ = !lean_is_exclusive(v___x_3709_);
if (v_isSharedCheck_3719_ == 0)
{
v___x_3713_ = v___x_3709_;
v_isShared_3714_ = v_isSharedCheck_3719_;
goto v_resetjp_3712_;
}
else
{
lean_inc(v_val_3711_);
lean_dec(v___x_3709_);
v___x_3713_ = lean_box(0);
v_isShared_3714_ = v_isSharedCheck_3719_;
goto v_resetjp_3712_;
}
v_resetjp_3712_:
{
lean_object* v___x_3715_; lean_object* v___x_3717_; 
lean_inc_ref(v___x_3680_);
v___x_3715_ = l_Lean_Syntax_Range_toLspRange(v___x_3680_, v_val_3711_);
if (v_isShared_3714_ == 0)
{
lean_ctor_set(v___x_3713_, 0, v___x_3715_);
v___x_3717_ = v___x_3713_;
goto v_reusejp_3716_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v___x_3715_);
v___x_3717_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3716_;
}
v_reusejp_3716_:
{
v___y_3699_ = v_a_3708_;
v___y_3700_ = v___x_3717_;
goto v___jp_3698_;
}
}
}
}
v___jp_3720_:
{
lean_object* v___x_3721_; 
v___x_3721_ = lean_box(0);
v_a_3708_ = v___x_3721_;
goto v___jp_3707_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_getWidgets_spec__2___boxed(lean_object* v___x_3745_, lean_object* v___x_3746_, lean_object* v_sz_3747_, lean_object* v_i_3748_, lean_object* v_bs_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_){
_start:
{
size_t v_sz_boxed_3755_; size_t v_i_boxed_3756_; lean_object* v_res_3757_; 
v_sz_boxed_3755_ = lean_unbox_usize(v_sz_3747_);
lean_dec(v_sz_3747_);
v_i_boxed_3756_ = lean_unbox_usize(v_i_3748_);
lean_dec(v_i_3748_);
v_res_3757_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_getWidgets_spec__2(v___x_3745_, v___x_3746_, v_sz_boxed_3755_, v_i_boxed_3756_, v_bs_3749_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
lean_dec(v___y_3753_);
lean_dec_ref(v___y_3752_);
lean_dec(v___y_3751_);
lean_dec_ref(v___y_3750_);
return v_res_3757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgets___lam__0(lean_object* v_pos_3758_, lean_object* v_text_3759_, lean_object* v_val_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_){
_start:
{
lean_object* v___x_3766_; lean_object* v_env_3767_; lean_object* v___x_3768_; 
v___x_3766_ = lean_st_ref_get(v___y_3764_);
v_env_3767_ = lean_ctor_get(v___x_3766_, 0);
lean_inc_ref(v_env_3767_);
lean_dec(v___x_3766_);
v___x_3768_ = l_Lean_Widget_evalPanelWidgets(v___y_3761_, v___y_3762_, v___y_3763_, v___y_3764_);
if (lean_obj_tag(v___x_3768_) == 0)
{
lean_object* v_a_3769_; size_t v_sz_3770_; size_t v___x_3771_; lean_object* v___x_3772_; 
v_a_3769_ = lean_ctor_get(v___x_3768_, 0);
lean_inc(v_a_3769_);
lean_dec_ref_known(v___x_3768_, 1);
v_sz_3770_ = lean_array_size(v_a_3769_);
v___x_3771_ = ((size_t)0ULL);
lean_inc_ref(v_env_3767_);
v___x_3772_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_getWidgets_spec__1(v_env_3767_, v_sz_3770_, v___x_3771_, v_a_3769_, v___y_3761_, v___y_3762_, v___y_3763_, v___y_3764_);
if (lean_obj_tag(v___x_3772_) == 0)
{
lean_object* v_a_3773_; lean_object* v_line_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; size_t v_sz_3777_; lean_object* v___x_3778_; 
v_a_3773_ = lean_ctor_get(v___x_3772_, 0);
lean_inc(v_a_3773_);
lean_dec_ref_known(v___x_3772_, 1);
v_line_3774_ = lean_ctor_get(v_pos_3758_, 0);
lean_inc(v_line_3774_);
lean_dec_ref(v_pos_3758_);
lean_inc_ref(v_text_3759_);
v___x_3775_ = l_Lean_Widget_widgetInfosAt_x3f(v_text_3759_, v_val_3760_, v_line_3774_);
v___x_3776_ = lean_array_mk(v___x_3775_);
v_sz_3777_ = lean_array_size(v___x_3776_);
v___x_3778_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_getWidgets_spec__2(v_text_3759_, v_env_3767_, v_sz_3777_, v___x_3771_, v___x_3776_, v___y_3761_, v___y_3762_, v___y_3763_, v___y_3764_);
if (lean_obj_tag(v___x_3778_) == 0)
{
lean_object* v_a_3779_; lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3787_; 
v_a_3779_ = lean_ctor_get(v___x_3778_, 0);
v_isSharedCheck_3787_ = !lean_is_exclusive(v___x_3778_);
if (v_isSharedCheck_3787_ == 0)
{
v___x_3781_ = v___x_3778_;
v_isShared_3782_ = v_isSharedCheck_3787_;
goto v_resetjp_3780_;
}
else
{
lean_inc(v_a_3779_);
lean_dec(v___x_3778_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3787_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
lean_object* v___x_3783_; lean_object* v___x_3785_; 
v___x_3783_ = l_Array_append___redArg(v_a_3773_, v_a_3779_);
lean_dec(v_a_3779_);
if (v_isShared_3782_ == 0)
{
lean_ctor_set(v___x_3781_, 0, v___x_3783_);
v___x_3785_ = v___x_3781_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v___x_3783_);
v___x_3785_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
return v___x_3785_;
}
}
}
else
{
lean_object* v_a_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3795_; 
lean_dec(v_a_3773_);
v_a_3788_ = lean_ctor_get(v___x_3778_, 0);
v_isSharedCheck_3795_ = !lean_is_exclusive(v___x_3778_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3790_ = v___x_3778_;
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_a_3788_);
lean_dec(v___x_3778_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3793_; 
if (v_isShared_3791_ == 0)
{
v___x_3793_ = v___x_3790_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v_a_3788_);
v___x_3793_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
return v___x_3793_;
}
}
}
}
else
{
lean_object* v_a_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3803_; 
lean_dec_ref(v_env_3767_);
lean_dec_ref(v_val_3760_);
lean_dec_ref(v_text_3759_);
lean_dec_ref(v_pos_3758_);
v_a_3796_ = lean_ctor_get(v___x_3772_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3772_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3798_ = v___x_3772_;
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
else
{
lean_inc(v_a_3796_);
lean_dec(v___x_3772_);
v___x_3798_ = lean_box(0);
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
v_resetjp_3797_:
{
lean_object* v___x_3801_; 
if (v_isShared_3799_ == 0)
{
v___x_3801_ = v___x_3798_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v_a_3796_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
return v___x_3801_;
}
}
}
}
else
{
lean_object* v_a_3804_; lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3811_; 
lean_dec_ref(v_env_3767_);
lean_dec_ref(v_val_3760_);
lean_dec_ref(v_text_3759_);
lean_dec_ref(v_pos_3758_);
v_a_3804_ = lean_ctor_get(v___x_3768_, 0);
v_isSharedCheck_3811_ = !lean_is_exclusive(v___x_3768_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3806_ = v___x_3768_;
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
else
{
lean_inc(v_a_3804_);
lean_dec(v___x_3768_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
v_resetjp_3805_:
{
lean_object* v___x_3809_; 
if (v_isShared_3807_ == 0)
{
v___x_3809_ = v___x_3806_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v_a_3804_);
v___x_3809_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
return v___x_3809_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgets___lam__0___boxed(lean_object* v_pos_3812_, lean_object* v_text_3813_, lean_object* v_val_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_){
_start:
{
lean_object* v_res_3820_; 
v_res_3820_ = l_Lean_Widget_getWidgets___lam__0(v_pos_3812_, v_text_3813_, v_val_3814_, v___y_3815_, v___y_3816_, v___y_3817_, v___y_3818_);
lean_dec(v___y_3818_);
lean_dec_ref(v___y_3817_);
lean_dec(v___y_3816_);
lean_dec_ref(v___y_3815_);
return v_res_3820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgets___lam__1(lean_object* v_pos_3825_, lean_object* v_text_3826_, lean_object* v_x_3827_, lean_object* v___y_3828_){
_start:
{
if (lean_obj_tag(v_x_3827_) == 1)
{
lean_object* v_val_3833_; 
v_val_3833_ = lean_ctor_get(v_x_3827_, 0);
lean_inc(v_val_3833_);
lean_dec_ref_known(v_x_3827_, 1);
if (lean_obj_tag(v_val_3833_) == 0)
{
lean_object* v_i_3834_; 
v_i_3834_ = lean_ctor_get(v_val_3833_, 0);
if (lean_obj_tag(v_i_3834_) == 0)
{
lean_object* v_info_3835_; lean_object* v___f_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; 
v_info_3835_ = lean_ctor_get(v_i_3834_, 0);
lean_inc_ref(v_info_3835_);
v___f_3836_ = lean_alloc_closure((void*)(l_Lean_Widget_getWidgets___lam__0___boxed), 8, 3);
lean_closure_set(v___f_3836_, 0, v_pos_3825_);
lean_closure_set(v___f_3836_, 1, v_text_3826_);
lean_closure_set(v___f_3836_, 2, v_val_3833_);
v___x_3837_ = lean_box(0);
v___x_3838_ = ((lean_object*)(l_Lean_Widget_getWidgets___lam__1___closed__1));
v___x_3839_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3839_, 0, v_info_3835_);
lean_ctor_set(v___x_3839_, 1, v___x_3837_);
lean_ctor_set(v___x_3839_, 2, v___x_3838_);
v___x_3840_ = lean_obj_once(&l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_, &l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__once, _init_l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___lam__3___closed__4_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_);
v___x_3841_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v___x_3839_, v___x_3840_, v___f_3836_);
if (lean_obj_tag(v___x_3841_) == 0)
{
lean_object* v_a_3842_; lean_object* v___x_3844_; uint8_t v_isShared_3845_; uint8_t v_isSharedCheck_3849_; 
v_a_3842_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3849_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3849_ == 0)
{
v___x_3844_ = v___x_3841_;
v_isShared_3845_ = v_isSharedCheck_3849_;
goto v_resetjp_3843_;
}
else
{
lean_inc(v_a_3842_);
lean_dec(v___x_3841_);
v___x_3844_ = lean_box(0);
v_isShared_3845_ = v_isSharedCheck_3849_;
goto v_resetjp_3843_;
}
v_resetjp_3843_:
{
lean_object* v___x_3847_; 
if (v_isShared_3845_ == 0)
{
v___x_3847_ = v___x_3844_;
goto v_reusejp_3846_;
}
else
{
lean_object* v_reuseFailAlloc_3848_; 
v_reuseFailAlloc_3848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3848_, 0, v_a_3842_);
v___x_3847_ = v_reuseFailAlloc_3848_;
goto v_reusejp_3846_;
}
v_reusejp_3846_:
{
return v___x_3847_;
}
}
}
else
{
lean_object* v_a_3850_; lean_object* v___x_3852_; uint8_t v_isShared_3853_; uint8_t v_isSharedCheck_3858_; 
v_a_3850_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3858_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3858_ == 0)
{
v___x_3852_ = v___x_3841_;
v_isShared_3853_ = v_isSharedCheck_3858_;
goto v_resetjp_3851_;
}
else
{
lean_inc(v_a_3850_);
lean_dec(v___x_3841_);
v___x_3852_ = lean_box(0);
v_isShared_3853_ = v_isSharedCheck_3858_;
goto v_resetjp_3851_;
}
v_resetjp_3851_:
{
lean_object* v___x_3854_; lean_object* v___x_3856_; 
v___x_3854_ = l_Lean_Server_RequestError_ofIoError(v_a_3850_);
if (v_isShared_3853_ == 0)
{
lean_ctor_set(v___x_3852_, 0, v___x_3854_);
v___x_3856_ = v___x_3852_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v___x_3854_);
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
lean_dec_ref_known(v_val_3833_, 2);
lean_dec_ref(v_text_3826_);
lean_dec_ref(v_pos_3825_);
goto v___jp_3830_;
}
}
else
{
lean_dec(v_val_3833_);
lean_dec_ref(v_text_3826_);
lean_dec_ref(v_pos_3825_);
goto v___jp_3830_;
}
}
else
{
lean_dec(v_x_3827_);
lean_dec_ref(v_text_3826_);
lean_dec_ref(v_pos_3825_);
goto v___jp_3830_;
}
v___jp_3830_:
{
lean_object* v___x_3831_; lean_object* v___x_3832_; 
v___x_3831_ = ((lean_object*)(l_Lean_Widget_getWidgets___lam__1___closed__0));
v___x_3832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3832_, 0, v___x_3831_);
return v___x_3832_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgets___lam__1___boxed(lean_object* v_pos_3859_, lean_object* v_text_3860_, lean_object* v_x_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_){
_start:
{
lean_object* v_res_3864_; 
v_res_3864_ = l_Lean_Widget_getWidgets___lam__1(v_pos_3859_, v_text_3860_, v_x_3861_, v___y_3862_);
lean_dec_ref(v___y_3862_);
return v_res_3864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgets(lean_object* v_pos_3865_, lean_object* v_a_3866_){
_start:
{
lean_object* v___x_3868_; lean_object* v_a_3869_; lean_object* v_toEditableDocumentCore_3870_; lean_object* v_meta_3871_; lean_object* v_initSnap_3872_; lean_object* v_text_3873_; lean_object* v___f_3874_; lean_object* v___x_3875_; uint8_t v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; 
v___x_3868_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Widget_getWidgetSource_spec__0(v_a_3866_);
v_a_3869_ = lean_ctor_get(v___x_3868_, 0);
lean_inc(v_a_3869_);
lean_dec_ref(v___x_3868_);
v_toEditableDocumentCore_3870_ = lean_ctor_get(v_a_3869_, 0);
lean_inc_ref(v_toEditableDocumentCore_3870_);
lean_dec(v_a_3869_);
v_meta_3871_ = lean_ctor_get(v_toEditableDocumentCore_3870_, 0);
lean_inc_ref(v_meta_3871_);
v_initSnap_3872_ = lean_ctor_get(v_toEditableDocumentCore_3870_, 1);
lean_inc_ref(v_initSnap_3872_);
lean_dec_ref(v_toEditableDocumentCore_3870_);
v_text_3873_ = lean_ctor_get(v_meta_3871_, 3);
lean_inc_ref_n(v_text_3873_, 2);
lean_dec_ref(v_meta_3871_);
lean_inc_ref(v_pos_3865_);
v___f_3874_ = lean_alloc_closure((void*)(l_Lean_Widget_getWidgets___lam__1___boxed), 5, 2);
lean_closure_set(v___f_3874_, 0, v_pos_3865_);
lean_closure_set(v___f_3874_, 1, v_text_3873_);
v___x_3875_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_3873_, v_pos_3865_);
v___x_3876_ = 1;
v___x_3877_ = l_Lean_Language_Lean_findInfoTreeAtPos(v_initSnap_3872_, v_text_3873_, v___x_3875_, v___x_3876_);
v___x_3878_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v___x_3877_, v___f_3874_, v_a_3866_);
return v___x_3878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_getWidgets___boxed(lean_object* v_pos_3879_, lean_object* v_a_3880_, lean_object* v_a_3881_){
_start:
{
lean_object* v_res_3882_; 
v_res_3882_ = l_Lean_Widget_getWidgets(v_pos_3879_, v_a_3880_);
lean_dec_ref(v_a_3880_);
return v_res_3882_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0_spec__0(lean_object* v_00_u03b1_3883_, lean_object* v_x_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_){
_start:
{
lean_object* v___x_3890_; 
v___x_3890_ = l_Lean_ofExcept___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0_spec__0___redArg(v_x_3884_, v___y_3885_, v___y_3886_, v___y_3887_, v___y_3888_);
return v___x_3890_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3891_, lean_object* v_x_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_){
_start:
{
lean_object* v_res_3898_; 
v_res_3898_ = l_Lean_ofExcept___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_evalUserWidgetDefinitionUnsafe___at___00Lean_Widget_getWidgets_spec__0_spec__0(v_00_u03b1_3891_, v_x_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
lean_dec(v___y_3896_);
lean_dec_ref(v___y_3895_);
lean_dec(v___y_3894_);
lean_dec_ref(v___y_3893_);
return v_res_3898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0_spec__0___lam__2(lean_object* v_val_3899_, lean_object* v___f_3900_, lean_object* v_x_3901_, lean_object* v___y_3902_){
_start:
{
if (lean_obj_tag(v_x_3901_) == 0)
{
lean_object* v_a_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3911_; 
lean_dec_ref(v___f_3900_);
v_a_3904_ = lean_ctor_get(v_x_3901_, 0);
v_isSharedCheck_3911_ = !lean_is_exclusive(v_x_3901_);
if (v_isSharedCheck_3911_ == 0)
{
v___x_3906_ = v_x_3901_;
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_a_3904_);
lean_dec(v_x_3901_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v___x_3909_; 
if (v_isShared_3907_ == 0)
{
lean_ctor_set_tag(v___x_3906_, 1);
v___x_3909_ = v___x_3906_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v_a_3904_);
v___x_3909_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
return v___x_3909_;
}
}
}
else
{
lean_object* v_a_3912_; lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3928_; 
v_a_3912_ = lean_ctor_get(v_x_3901_, 0);
v_isSharedCheck_3928_ = !lean_is_exclusive(v_x_3901_);
if (v_isSharedCheck_3928_ == 0)
{
v___x_3914_ = v_x_3901_;
v_isShared_3915_ = v_isSharedCheck_3928_;
goto v_resetjp_3913_;
}
else
{
lean_inc(v_a_3912_);
lean_dec(v_x_3901_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3928_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
lean_object* v___x_3916_; lean_object* v_objects_3917_; lean_object* v_expireTime_3918_; lean_object* v___f_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v_fst_3922_; lean_object* v_snd_3923_; lean_object* v___x_3924_; lean_object* v___x_3926_; 
v___x_3916_ = lean_st_ref_take(v_val_3899_);
v_objects_3917_ = lean_ctor_get(v___x_3916_, 0);
lean_inc_ref(v_objects_3917_);
v_expireTime_3918_ = lean_ctor_get(v___x_3916_, 1);
lean_inc(v_expireTime_3918_);
lean_dec(v___x_3916_);
v___f_3919_ = lean_alloc_closure((void*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__1), 2, 1);
lean_closure_set(v___f_3919_, 0, v_expireTime_3918_);
v___x_3920_ = l_Lean_Widget_instRpcEncodableGetWidgetsResponse_enc_00___x40_Lean_Widget_UserWidget_577854155____hygCtx___hyg_1_(v_a_3912_, v_objects_3917_);
v___x_3921_ = l_Prod_map___redArg(v___f_3900_, v___f_3919_, v___x_3920_);
v_fst_3922_ = lean_ctor_get(v___x_3921_, 0);
lean_inc(v_fst_3922_);
v_snd_3923_ = lean_ctor_get(v___x_3921_, 1);
lean_inc(v_snd_3923_);
lean_dec_ref(v___x_3921_);
v___x_3924_ = lean_st_ref_put(v_val_3899_, v_snd_3923_);
if (v_isShared_3915_ == 0)
{
lean_ctor_set_tag(v___x_3914_, 0);
lean_ctor_set(v___x_3914_, 0, v_fst_3922_);
v___x_3926_ = v___x_3914_;
goto v_reusejp_3925_;
}
else
{
lean_object* v_reuseFailAlloc_3927_; 
v_reuseFailAlloc_3927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3927_, 0, v_fst_3922_);
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
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0_spec__0___lam__2___boxed(lean_object* v_val_3929_, lean_object* v___f_3930_, lean_object* v_x_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_){
_start:
{
lean_object* v_res_3934_; 
v_res_3934_ = l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0_spec__0___lam__2(v_val_3929_, v___f_3930_, v_x_3931_, v___y_3932_);
lean_dec_ref(v___y_3932_);
lean_dec(v_val_3929_);
return v_res_3934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0_spec__0___lam__0(lean_object* v___f_3935_, lean_object* v_method_3936_, lean_object* v_handler_3937_, uint64_t v_seshId_3938_, lean_object* v_j_3939_, lean_object* v___y_3940_){
_start:
{
lean_object* v_rpcSessions_3942_; lean_object* v___x_3943_; 
v_rpcSessions_3942_ = lean_ctor_get(v___y_3940_, 0);
v___x_3943_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2__spec__2___redArg(v_rpcSessions_3942_, v_seshId_3938_);
if (lean_obj_tag(v___x_3943_) == 1)
{
lean_object* v_val_3944_; lean_object* v___f_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; 
v_val_3944_ = lean_ctor_get(v___x_3943_, 0);
lean_inc_n(v_val_3944_, 2);
lean_dec_ref_known(v___x_3943_, 1);
v___f_3945_ = lean_alloc_closure((void*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0_spec__0___lam__2___boxed), 5, 2);
lean_closure_set(v___f_3945_, 0, v_val_3944_);
lean_closure_set(v___f_3945_, 1, v___f_3935_);
v___x_3946_ = lean_st_ref_get(v_val_3944_);
lean_dec(v_val_3944_);
lean_dec(v___x_3946_);
lean_inc(v_j_3939_);
v___x_3947_ = l_Lean_Lsp_instFromJsonPosition_fromJson(v_j_3939_);
if (lean_obj_tag(v___x_3947_) == 0)
{
lean_object* v_a_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3968_; 
lean_dec_ref(v___f_3945_);
lean_dec_ref(v_handler_3937_);
v_a_3948_ = lean_ctor_get(v___x_3947_, 0);
v_isSharedCheck_3968_ = !lean_is_exclusive(v___x_3947_);
if (v_isSharedCheck_3968_ == 0)
{
v___x_3950_ = v___x_3947_;
v_isShared_3951_ = v_isSharedCheck_3968_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_a_3948_);
lean_dec(v___x_3947_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3968_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
uint8_t v___x_3952_; lean_object* v___x_3953_; uint8_t v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3966_; 
v___x_3952_ = 3;
v___x_3953_ = ((lean_object*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__0));
v___x_3954_ = 1;
v___x_3955_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_method_3936_, v___x_3954_);
v___x_3956_ = lean_string_append(v___x_3953_, v___x_3955_);
lean_dec_ref(v___x_3955_);
v___x_3957_ = ((lean_object*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__1));
v___x_3958_ = lean_string_append(v___x_3956_, v___x_3957_);
v___x_3959_ = l_Lean_Json_compress(v_j_3939_);
v___x_3960_ = lean_string_append(v___x_3958_, v___x_3959_);
lean_dec_ref(v___x_3959_);
v___x_3961_ = ((lean_object*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__2));
v___x_3962_ = lean_string_append(v___x_3960_, v___x_3961_);
v___x_3963_ = lean_string_append(v___x_3962_, v_a_3948_);
lean_dec(v_a_3948_);
v___x_3964_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3964_, 0, v___x_3963_);
lean_ctor_set_uint8(v___x_3964_, sizeof(void*)*1, v___x_3952_);
if (v_isShared_3951_ == 0)
{
lean_ctor_set_tag(v___x_3950_, 1);
lean_ctor_set(v___x_3950_, 0, v___x_3964_);
v___x_3966_ = v___x_3950_;
goto v_reusejp_3965_;
}
else
{
lean_object* v_reuseFailAlloc_3967_; 
v_reuseFailAlloc_3967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3967_, 0, v___x_3964_);
v___x_3966_ = v_reuseFailAlloc_3967_;
goto v_reusejp_3965_;
}
v_reusejp_3965_:
{
return v___x_3966_;
}
}
}
else
{
lean_object* v_a_3969_; lean_object* v___x_3970_; 
lean_dec(v_j_3939_);
lean_dec(v_method_3936_);
v_a_3969_ = lean_ctor_get(v___x_3947_, 0);
lean_inc(v_a_3969_);
lean_dec_ref_known(v___x_3947_, 1);
lean_inc_ref(v___y_3940_);
v___x_3970_ = lean_apply_3(v_handler_3937_, v_a_3969_, v___y_3940_, lean_box(0));
if (lean_obj_tag(v___x_3970_) == 0)
{
lean_object* v_a_3971_; lean_object* v___x_3972_; 
v_a_3971_ = lean_ctor_get(v___x_3970_, 0);
lean_inc(v_a_3971_);
lean_dec_ref_known(v___x_3970_, 1);
v___x_3972_ = l_Lean_Server_RequestM_mapTaskCheap___redArg(v_a_3971_, v___f_3945_, v___y_3940_);
return v___x_3972_;
}
else
{
lean_object* v_a_3973_; lean_object* v___x_3975_; uint8_t v_isShared_3976_; uint8_t v_isSharedCheck_3980_; 
lean_dec_ref(v___f_3945_);
v_a_3973_ = lean_ctor_get(v___x_3970_, 0);
v_isSharedCheck_3980_ = !lean_is_exclusive(v___x_3970_);
if (v_isSharedCheck_3980_ == 0)
{
v___x_3975_ = v___x_3970_;
v_isShared_3976_ = v_isSharedCheck_3980_;
goto v_resetjp_3974_;
}
else
{
lean_inc(v_a_3973_);
lean_dec(v___x_3970_);
v___x_3975_ = lean_box(0);
v_isShared_3976_ = v_isSharedCheck_3980_;
goto v_resetjp_3974_;
}
v_resetjp_3974_:
{
lean_object* v___x_3978_; 
if (v_isShared_3976_ == 0)
{
v___x_3978_ = v___x_3975_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v_a_3973_);
v___x_3978_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3977_;
}
v_reusejp_3977_:
{
return v___x_3978_;
}
}
}
}
}
else
{
lean_object* v___x_3981_; lean_object* v___x_3982_; 
lean_dec(v___x_3943_);
lean_dec(v_j_3939_);
lean_dec_ref(v_handler_3937_);
lean_dec(v_method_3936_);
lean_dec_ref(v___f_3935_);
v___x_3981_ = ((lean_object*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___lam__3___closed__4));
v___x_3982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3982_, 0, v___x_3981_);
return v___x_3982_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0_spec__0___lam__0___boxed(lean_object* v___f_3983_, lean_object* v_method_3984_, lean_object* v_handler_3985_, lean_object* v_seshId_3986_, lean_object* v_j_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_){
_start:
{
uint64_t v_seshId_boxed_3990_; lean_object* v_res_3991_; 
v_seshId_boxed_3990_ = lean_unbox_uint64(v_seshId_3986_);
lean_dec_ref(v_seshId_3986_);
v_res_3991_ = l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0_spec__0___lam__0(v___f_3983_, v_method_3984_, v_handler_3985_, v_seshId_boxed_3990_, v_j_3987_, v___y_3988_);
lean_dec_ref(v___y_3988_);
return v_res_3991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_method_3992_, lean_object* v_handler_3993_){
_start:
{
lean_object* v___f_3994_; lean_object* v___f_3995_; 
v___f_3994_ = ((lean_object*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__1___closed__0));
v___f_3995_ = lean_alloc_closure((void*)(l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0_spec__0___lam__0___boxed), 7, 3);
lean_closure_set(v___f_3995_, 0, v___f_3994_);
lean_closure_set(v___f_3995_, 1, v_method_3992_);
lean_closure_set(v___f_3995_, 2, v_handler_3993_);
return v___f_3995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0(lean_object* v_method_3996_, lean_object* v_handler_3997_){
_start:
{
lean_object* v___x_3999_; uint8_t v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v_errMsg_4004_; uint8_t v___x_4005_; 
v___x_3999_ = ((lean_object*)(l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__0));
v___x_4000_ = 1;
lean_inc(v_method_3996_);
v___x_4001_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_method_3996_, v___x_4000_);
v___x_4002_ = lean_string_append(v___x_3999_, v___x_4001_);
lean_dec_ref(v___x_4001_);
v___x_4003_ = ((lean_object*)(l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__1));
v_errMsg_4004_ = lean_string_append(v___x_4002_, v___x_4003_);
v___x_4005_ = l_Lean_initializing();
if (v___x_4005_ == 0)
{
lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; 
lean_dec_ref(v_handler_3997_);
lean_dec(v_method_3996_);
v___x_4006_ = ((lean_object*)(l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__2));
v___x_4007_ = lean_string_append(v_errMsg_4004_, v___x_4006_);
v___x_4008_ = lean_mk_io_user_error(v___x_4007_);
v___x_4009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4009_, 0, v___x_4008_);
return v___x_4009_;
}
else
{
lean_object* v___x_4010_; lean_object* v___x_4011_; uint8_t v___x_4012_; 
v___x_4010_ = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_builtinRpcProcedures;
v___x_4011_ = lean_st_ref_get(v___x_4010_);
v___x_4012_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__0___redArg(v___x_4011_, v_method_3996_);
lean_dec(v___x_4011_);
if (v___x_4012_ == 0)
{
lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; 
lean_dec_ref(v_errMsg_4004_);
lean_inc(v_method_3996_);
v___x_4013_ = l_Lean_Server_wrapRpcProcedure___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0_spec__0(v_method_3996_, v_handler_3997_);
v___x_4014_ = lean_st_ref_take(v___x_4010_);
v___x_4015_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0_spec__2___redArg(v___x_4014_, v_method_3996_, v___x_4013_);
v___x_4016_ = lean_st_ref_put(v___x_4010_, v___x_4015_);
v___x_4017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4017_, 0, v___x_4016_);
return v___x_4017_;
}
else
{
lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; 
lean_dec_ref(v_handler_3997_);
lean_dec(v_method_3996_);
v___x_4018_ = ((lean_object*)(l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2__spec__0___closed__3));
v___x_4019_ = lean_string_append(v_errMsg_4004_, v___x_4018_);
v___x_4020_ = lean_mk_io_user_error(v___x_4019_);
v___x_4021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4021_, 0, v___x_4020_);
return v___x_4021_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0___boxed(lean_object* v_method_4022_, lean_object* v_handler_4023_, lean_object* v_a_4024_){
_start:
{
lean_object* v_res_4025_; 
v_res_4025_ = l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0(v_method_4022_, v_handler_4023_);
return v_res_4025_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; 
v___x_4033_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2_));
v___x_4034_ = ((lean_object*)(l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2_));
v___x_4035_ = l_Lean_Server_registerBuiltinRpcProcedure___at___00__private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2__spec__0(v___x_4033_, v___x_4034_);
return v___x_4035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2____boxed(lean_object* v_a_4036_){
_start:
{
lean_object* v_res_4037_; 
v_res_4037_ = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2_();
return v_res_4037_;
}
}
lean_object* runtime_initialize_Lean_Elab_Eval(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Rpc_RequestHandling(uint8_t builtin);
lean_object* runtime_initialize_Lean_Language_Lean_Util(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Widget_UserWidget(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Rpc_RequestHandling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2402277489____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Widget_UserWidget_0__Lean_Widget_builtinModulesRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Widget_UserWidget_0__Lean_Widget_builtinModulesRef);
lean_dec_ref(res);
res = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_925824488____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Widget_UserWidget_0__Lean_Widget_moduleRegistry = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Widget_UserWidget_0__Lean_Widget_moduleRegistry);
lean_dec_ref(res);
res = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1579414551____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Widget_widgetModuleAttrImpl = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Widget_widgetModuleAttrImpl);
lean_dec_ref(res);
res = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_2369312278____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_1015473889____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Widget_UserWidget_0__Lean_Widget_panelWidgetsExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Widget_UserWidget_0__Lean_Widget_panelWidgetsExt);
lean_dec_ref(res);
res = l___private_Lean_Widget_UserWidget_0__Lean_Widget_initFn_00___x40_Lean_Widget_UserWidget_915949662____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Widget_UserWidget(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Eval(uint8_t builtin);
lean_object* initialize_Lean_Server_Rpc_RequestHandling(uint8_t builtin);
lean_object* initialize_Lean_Language_Lean_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Widget_UserWidget(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Rpc_RequestHandling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Language_Lean_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Widget_UserWidget(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Widget_UserWidget(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Widget_UserWidget(builtin);
}
#ifdef __cplusplus
}
#endif
