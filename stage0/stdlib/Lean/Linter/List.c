// Lean compiler output
// Module: Lean.Linter.List
// Imports: public import Lean.Linter.Basic public import Lean.Elab.InfoTree.Util import Lean.Linter.Init
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
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Elab_Info_stx(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_deepestNodes___redArg(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
extern lean_object* l_Lean_Linter_linterMessageTag;
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_withSetOptionIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_addLinter(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__0_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__0_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__0_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__1_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "indexVariables"};
static const lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__1_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__1_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__2_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__0_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__2_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__2_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__1_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(140, 104, 174, 176, 68, 7, 230, 32)}};
static const lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__2_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__2_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__3_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 106, .m_capacity = 106, .m_length = 105, .m_data = "Validate that variables appearing as an index (e.g. in `xs[i]` or `xs.take i`) are only `i`, `j`, or `k`."};
static const lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__3_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__3_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__3_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__5_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__5_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__5_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__6_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__6_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__6_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__8_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__5_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__8_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__8_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__6_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__8_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__8_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(250, 37, 25, 55, 115, 214, 21, 187)}};
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__8_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__8_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__0_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(15, 84, 189, 165, 50, 238, 102, 128)}};
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__8_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__8_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__1_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(157, 17, 204, 51, 209, 5, 242, 167)}};
static const lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__8_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__8_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_linter_indexVariables;
static const lean_string_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__0_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "listVariables"};
static const lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__0_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__0_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__1_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__0_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__1_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__1_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__0_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(210, 104, 103, 104, 246, 30, 91, 67)}};
static const lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__1_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__1_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__2_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "Validate that all `List`/`Array`/`Vector` variables use allowed names."};
static const lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__2_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__2_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__3_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__2_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__3_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__3_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__5_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__6_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(250, 37, 25, 55, 115, 214, 21, 187)}};
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__0_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(15, 84, 189, 165, 50, 238, 102, 128)}};
static const lean_ctor_object l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__0_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(43, 141, 236, 21, 178, 9, 197, 167)}};
static const lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_linter_listVariables;
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalIndices___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalIndices___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Linter_List_numericalIndices_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Linter_List_numericalIndices___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__0 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__0_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__1 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "zipIdx"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__2 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__2_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__3_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(136, 194, 118, 33, 195, 222, 129, 117)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__3 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__3_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eraseIdx!"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__4 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__4_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__5_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(222, 140, 125, 199, 125, 185, 235, 149)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__5 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__5_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "shrink"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__6 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__6_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__7_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__6_value),LEAN_SCALAR_PTR_LITERAL(18, 53, 16, 214, 100, 18, 191, 53)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__7 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__7_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "drop"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__8 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__8_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__9_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__8_value),LEAN_SCALAR_PTR_LITERAL(222, 63, 213, 104, 51, 86, 254, 30)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__9 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__9_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "take"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__10 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__10_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__11_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__10_value),LEAN_SCALAR_PTR_LITERAL(65, 23, 32, 164, 148, 92, 18, 72)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__11 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__11_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__12_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(188, 166, 17, 216, 125, 179, 132, 222)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__12 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__12_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "eraseIdx"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__13 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__13_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__14_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__13_value),LEAN_SCALAR_PTR_LITERAL(166, 201, 72, 71, 56, 255, 95, 19)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__14 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__14_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__15_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__8_value),LEAN_SCALAR_PTR_LITERAL(106, 246, 106, 249, 224, 85, 68, 146)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__15 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__15_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__16_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__10_value),LEAN_SCALAR_PTR_LITERAL(205, 25, 66, 234, 231, 175, 30, 225)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__16 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__16_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Vector"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__17 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__18_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(8, 73, 216, 63, 47, 97, 234, 251)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__18 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__18_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__19_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(94, 254, 191, 187, 182, 154, 189, 137)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__19 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__19_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__20_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__6_value),LEAN_SCALAR_PTR_LITERAL(146, 195, 13, 75, 237, 215, 49, 91)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__20 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__20_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__21_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__8_value),LEAN_SCALAR_PTR_LITERAL(94, 145, 198, 121, 56, 216, 207, 226)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__21 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__21_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__22_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__10_value),LEAN_SCALAR_PTR_LITERAL(193, 48, 133, 103, 235, 147, 189, 166)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__22 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__22_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "modify"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__23 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__23_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__24_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__23_value),LEAN_SCALAR_PTR_LITERAL(190, 5, 193, 94, 64, 205, 30, 70)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__24 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__24_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "eraseIdxIfInBounds"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__25 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__25_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__26_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__25_value),LEAN_SCALAR_PTR_LITERAL(136, 5, 10, 10, 176, 131, 36, 61)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__26 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__26_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__27_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__13_value),LEAN_SCALAR_PTR_LITERAL(114, 229, 173, 144, 205, 255, 115, 251)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__27 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__27_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "insertIdx!"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__28 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__28_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__29_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__28_value),LEAN_SCALAR_PTR_LITERAL(67, 172, 64, 217, 46, 187, 199, 144)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__29 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__29_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "insertIdxIfInBounds"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__30 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__30_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__31_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__30_value),LEAN_SCALAR_PTR_LITERAL(94, 238, 180, 209, 138, 243, 59, 10)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__31 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__31_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "setIfInBounds"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__32 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__32_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__33_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__32_value),LEAN_SCALAR_PTR_LITERAL(76, 176, 191, 100, 168, 104, 38, 199)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__33 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__33_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "extract"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__34 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__34_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__35_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__34_value),LEAN_SCALAR_PTR_LITERAL(31, 2, 177, 81, 29, 192, 186, 111)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__35 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__35_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__36_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__23_value),LEAN_SCALAR_PTR_LITERAL(138, 2, 71, 43, 166, 133, 203, 68)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__36 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__36_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "insertIdx"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__37 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__37_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__38_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__37_value),LEAN_SCALAR_PTR_LITERAL(123, 109, 244, 207, 23, 221, 99, 50)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__38 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__38_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "set"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__39 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__39_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__40_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__39_value),LEAN_SCALAR_PTR_LITERAL(149, 125, 231, 31, 126, 57, 111, 88)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__40 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__40_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__41_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__28_value),LEAN_SCALAR_PTR_LITERAL(195, 186, 242, 84, 73, 231, 33, 9)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__41 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__41_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__42_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__13_value),LEAN_SCALAR_PTR_LITERAL(242, 235, 217, 48, 226, 81, 229, 53)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__42 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__42_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__43_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__32_value),LEAN_SCALAR_PTR_LITERAL(204, 22, 185, 115, 150, 146, 40, 66)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__43 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__43_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__44_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__34_value),LEAN_SCALAR_PTR_LITERAL(159, 211, 128, 175, 184, 40, 61, 64)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__44 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__44_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "swap"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__45 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__45_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__46_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__45_value),LEAN_SCALAR_PTR_LITERAL(65, 76, 162, 254, 94, 72, 66, 28)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__46 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__46_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__47_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__37_value),LEAN_SCALAR_PTR_LITERAL(71, 53, 94, 141, 60, 249, 54, 14)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__47 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__47_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "uset"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__48 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__48_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__49_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__48_value),LEAN_SCALAR_PTR_LITERAL(94, 60, 218, 202, 150, 167, 67, 245)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__49 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__49_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__50_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__39_value),LEAN_SCALAR_PTR_LITERAL(9, 27, 248, 22, 165, 105, 163, 43)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__50 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__50_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__51_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__45_value),LEAN_SCALAR_PTR_LITERAL(193, 189, 102, 247, 123, 80, 42, 233)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__51 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__51_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__52_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__37_value),LEAN_SCALAR_PTR_LITERAL(199, 187, 43, 91, 128, 145, 22, 210)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__52 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__52_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__53_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__39_value),LEAN_SCALAR_PTR_LITERAL(137, 108, 233, 253, 150, 184, 88, 232)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__53 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__53_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "GetElem\?"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__54 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__54_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "getElem\?"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__55 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__55_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__54_value),LEAN_SCALAR_PTR_LITERAL(76, 182, 194, 21, 171, 76, 210, 17)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__56_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__55_value),LEAN_SCALAR_PTR_LITERAL(53, 231, 183, 124, 210, 168, 65, 205)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__56 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__56_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "GetElem"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__57 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__57_value;
static const lean_string_object l_Lean_Linter_List_numericalIndices___lam__2___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "getElem"};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__58 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__58_value;
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__59_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__57_value),LEAN_SCALAR_PTR_LITERAL(111, 233, 51, 226, 114, 128, 218, 11)}};
static const lean_ctor_object l_Lean_Linter_List_numericalIndices___lam__2___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__59_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__58_value),LEAN_SCALAR_PTR_LITERAL(194, 164, 165, 74, 8, 252, 37, 122)}};
static const lean_object* l_Lean_Linter_List_numericalIndices___lam__2___closed__59 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__59_value;
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalIndices___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalIndices___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Linter_List_numericalIndices_spec__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Linter_List_numericalIndices___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_List_numericalIndices___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_List_numericalIndices___closed__0 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___closed__0_value;
static const lean_closure_object l_Lean_Linter_List_numericalIndices___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_List_numericalIndices___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_List_numericalIndices___closed__1 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___closed__1_value;
static const lean_closure_object l_Lean_Linter_List_numericalIndices___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_List_numericalIndices___lam__2___boxed, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalIndices___closed__0_value),((lean_object*)&l_Lean_Linter_List_numericalIndices___closed__1_value)} };
static const lean_object* l_Lean_Linter_List_numericalIndices___closed__2 = (const lean_object*)&l_Lean_Linter_List_numericalIndices___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalIndices(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalWidths___lam__0(lean_object*);
static const lean_string_object l_Lean_Linter_List_numericalWidths___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "range"};
static const lean_object* l_Lean_Linter_List_numericalWidths___lam__1___closed__0 = (const lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 77, 183, 229, 104, 240, 130, 241)}};
static const lean_object* l_Lean_Linter_List_numericalWidths___lam__1___closed__1 = (const lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__1_value;
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 123, 231, 181, 109, 241, 236, 140)}};
static const lean_object* l_Lean_Linter_List_numericalWidths___lam__1___closed__2 = (const lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 67, 17, 14, 131, 131, 189, 98)}};
static const lean_object* l_Lean_Linter_List_numericalWidths___lam__1___closed__3 = (const lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__3_value;
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_object* l_Lean_Linter_List_numericalWidths___lam__1___closed__4 = (const lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__4_value;
static const lean_string_object l_Lean_Linter_List_numericalWidths___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "range'"};
static const lean_object* l_Lean_Linter_List_numericalWidths___lam__1___closed__5 = (const lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__5_value;
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__6_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(112, 223, 146, 83, 118, 136, 28, 110)}};
static const lean_object* l_Lean_Linter_List_numericalWidths___lam__1___closed__6 = (const lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__7_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(240, 208, 10, 228, 248, 70, 168, 150)}};
static const lean_object* l_Lean_Linter_List_numericalWidths___lam__1___closed__7 = (const lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__8_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(36, 105, 217, 127, 193, 8, 191, 52)}};
static const lean_object* l_Lean_Linter_List_numericalWidths___lam__1___closed__8 = (const lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__8_value;
static const lean_string_object l_Lean_Linter_List_numericalWidths___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "replicate"};
static const lean_object* l_Lean_Linter_List_numericalWidths___lam__1___closed__9 = (const lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__9_value;
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 98, 30, 71, 224, 237, 30)}};
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__10_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(235, 65, 196, 76, 247, 95, 193, 213)}};
static const lean_object* l_Lean_Linter_List_numericalWidths___lam__1___closed__10 = (const lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__10_value;
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__11_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(107, 168, 147, 224, 100, 148, 41, 41)}};
static const lean_object* l_Lean_Linter_List_numericalWidths___lam__1___closed__11 = (const lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__11_value;
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Linter_List_numericalWidths___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__12_value_aux_0),((lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(247, 254, 27, 73, 83, 86, 207, 8)}};
static const lean_object* l_Lean_Linter_List_numericalWidths___lam__1___closed__12 = (const lean_object*)&l_Lean_Linter_List_numericalWidths___lam__1___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalWidths___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalWidths___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Linter_List_numericalWidths___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_List_numericalWidths___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_List_numericalWidths___closed__0 = (const lean_object*)&l_Lean_Linter_List_numericalWidths___closed__0_value;
static const lean_closure_object l_Lean_Linter_List_numericalWidths___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_List_numericalWidths___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Linter_List_numericalWidths___closed__0_value)} };
static const lean_object* l_Lean_Linter_List_numericalWidths___closed__1 = (const lean_object*)&l_Lean_Linter_List_numericalWidths___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalWidths(lean_object*);
static const lean_string_object l_Lean_Linter_List_bitVecWidths___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l_Lean_Linter_List_bitVecWidths___lam__0___closed__0 = (const lean_object*)&l_Lean_Linter_List_bitVecWidths___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Linter_List_bitVecWidths___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_bitVecWidths___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_object* l_Lean_Linter_List_bitVecWidths___lam__0___closed__1 = (const lean_object*)&l_Lean_Linter_List_bitVecWidths___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Linter_List_bitVecWidths___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_bitVecWidths___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Linter_List_bitVecWidths___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_List_bitVecWidths___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_List_bitVecWidths___closed__0 = (const lean_object*)&l_Lean_Linter_List_bitVecWidths___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Linter_List_bitVecWidths(lean_object*);
static const lean_string_object l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "₁"};
static const lean_object* l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__1___closed__0 = (const lean_object*)&l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__1(lean_object*);
static const lean_string_object l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "₂"};
static const lean_object* l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__2___closed__0 = (const lean_object*)&l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__2(lean_object*);
static const lean_string_object l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "₃"};
static const lean_object* l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__3___closed__0 = (const lean_object*)&l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__3(lean_object*);
static const lean_string_object l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "₄"};
static const lean_object* l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__4___closed__0 = (const lean_object*)&l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__4(lean_object*);
static const lean_string_object l_String_Slice_dropSuffix___at___00String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_String_Slice_dropSuffix___at___00String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_dropSuffix___at___00String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___at___00String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_stripBinderName(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___at___00String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___at___00String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_List_allowedIndices___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l_Lean_Linter_List_allowedIndices___closed__0 = (const lean_object*)&l_Lean_Linter_List_allowedIndices___closed__0_value;
static const lean_string_object l_Lean_Linter_List_allowedIndices___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "j"};
static const lean_object* l_Lean_Linter_List_allowedIndices___closed__1 = (const lean_object*)&l_Lean_Linter_List_allowedIndices___closed__1_value;
static const lean_string_object l_Lean_Linter_List_allowedIndices___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "k"};
static const lean_object* l_Lean_Linter_List_allowedIndices___closed__2 = (const lean_object*)&l_Lean_Linter_List_allowedIndices___closed__2_value;
static const lean_string_object l_Lean_Linter_List_allowedIndices___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* l_Lean_Linter_List_allowedIndices___closed__3 = (const lean_object*)&l_Lean_Linter_List_allowedIndices___closed__3_value;
static const lean_string_object l_Lean_Linter_List_allowedIndices___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "stop"};
static const lean_object* l_Lean_Linter_List_allowedIndices___closed__4 = (const lean_object*)&l_Lean_Linter_List_allowedIndices___closed__4_value;
static const lean_string_object l_Lean_Linter_List_allowedIndices___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "step"};
static const lean_object* l_Lean_Linter_List_allowedIndices___closed__5 = (const lean_object*)&l_Lean_Linter_List_allowedIndices___closed__5_value;
static const lean_ctor_object l_Lean_Linter_List_allowedIndices___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedIndices___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Linter_List_allowedIndices___closed__6 = (const lean_object*)&l_Lean_Linter_List_allowedIndices___closed__6_value;
static const lean_ctor_object l_Lean_Linter_List_allowedIndices___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedIndices___closed__4_value),((lean_object*)&l_Lean_Linter_List_allowedIndices___closed__6_value)}};
static const lean_object* l_Lean_Linter_List_allowedIndices___closed__7 = (const lean_object*)&l_Lean_Linter_List_allowedIndices___closed__7_value;
static const lean_ctor_object l_Lean_Linter_List_allowedIndices___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedIndices___closed__3_value),((lean_object*)&l_Lean_Linter_List_allowedIndices___closed__7_value)}};
static const lean_object* l_Lean_Linter_List_allowedIndices___closed__8 = (const lean_object*)&l_Lean_Linter_List_allowedIndices___closed__8_value;
static const lean_ctor_object l_Lean_Linter_List_allowedIndices___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedIndices___closed__2_value),((lean_object*)&l_Lean_Linter_List_allowedIndices___closed__8_value)}};
static const lean_object* l_Lean_Linter_List_allowedIndices___closed__9 = (const lean_object*)&l_Lean_Linter_List_allowedIndices___closed__9_value;
static const lean_ctor_object l_Lean_Linter_List_allowedIndices___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedIndices___closed__1_value),((lean_object*)&l_Lean_Linter_List_allowedIndices___closed__9_value)}};
static const lean_object* l_Lean_Linter_List_allowedIndices___closed__10 = (const lean_object*)&l_Lean_Linter_List_allowedIndices___closed__10_value;
static const lean_ctor_object l_Lean_Linter_List_allowedIndices___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedIndices___closed__0_value),((lean_object*)&l_Lean_Linter_List_allowedIndices___closed__10_value)}};
static const lean_object* l_Lean_Linter_List_allowedIndices___closed__11 = (const lean_object*)&l_Lean_Linter_List_allowedIndices___closed__11_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_List_allowedIndices = (const lean_object*)&l_Lean_Linter_List_allowedIndices___closed__11_value;
static const lean_string_object l_Lean_Linter_List_allowedWidths___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* l_Lean_Linter_List_allowedWidths___closed__0 = (const lean_object*)&l_Lean_Linter_List_allowedWidths___closed__0_value;
static const lean_string_object l_Lean_Linter_List_allowedWidths___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l_Lean_Linter_List_allowedWidths___closed__1 = (const lean_object*)&l_Lean_Linter_List_allowedWidths___closed__1_value;
static const lean_string_object l_Lean_Linter_List_allowedWidths___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "l"};
static const lean_object* l_Lean_Linter_List_allowedWidths___closed__2 = (const lean_object*)&l_Lean_Linter_List_allowedWidths___closed__2_value;
static const lean_string_object l_Lean_Linter_List_allowedWidths___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* l_Lean_Linter_List_allowedWidths___closed__3 = (const lean_object*)&l_Lean_Linter_List_allowedWidths___closed__3_value;
static const lean_ctor_object l_Lean_Linter_List_allowedWidths___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedWidths___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Linter_List_allowedWidths___closed__4 = (const lean_object*)&l_Lean_Linter_List_allowedWidths___closed__4_value;
static const lean_ctor_object l_Lean_Linter_List_allowedWidths___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedWidths___closed__2_value),((lean_object*)&l_Lean_Linter_List_allowedWidths___closed__4_value)}};
static const lean_object* l_Lean_Linter_List_allowedWidths___closed__5 = (const lean_object*)&l_Lean_Linter_List_allowedWidths___closed__5_value;
static const lean_ctor_object l_Lean_Linter_List_allowedWidths___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedIndices___closed__2_value),((lean_object*)&l_Lean_Linter_List_allowedWidths___closed__5_value)}};
static const lean_object* l_Lean_Linter_List_allowedWidths___closed__6 = (const lean_object*)&l_Lean_Linter_List_allowedWidths___closed__6_value;
static const lean_ctor_object l_Lean_Linter_List_allowedWidths___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedWidths___closed__1_value),((lean_object*)&l_Lean_Linter_List_allowedWidths___closed__6_value)}};
static const lean_object* l_Lean_Linter_List_allowedWidths___closed__7 = (const lean_object*)&l_Lean_Linter_List_allowedWidths___closed__7_value;
static const lean_ctor_object l_Lean_Linter_List_allowedWidths___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedWidths___closed__0_value),((lean_object*)&l_Lean_Linter_List_allowedWidths___closed__7_value)}};
static const lean_object* l_Lean_Linter_List_allowedWidths___closed__8 = (const lean_object*)&l_Lean_Linter_List_allowedWidths___closed__8_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_List_allowedWidths = (const lean_object*)&l_Lean_Linter_List_allowedWidths___closed__8_value;
static const lean_string_object l_Lean_Linter_List_allowedBitVecWidths___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "w"};
static const lean_object* l_Lean_Linter_List_allowedBitVecWidths___closed__0 = (const lean_object*)&l_Lean_Linter_List_allowedBitVecWidths___closed__0_value;
static const lean_ctor_object l_Lean_Linter_List_allowedBitVecWidths___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedBitVecWidths___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Linter_List_allowedBitVecWidths___closed__1 = (const lean_object*)&l_Lean_Linter_List_allowedBitVecWidths___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_List_allowedBitVecWidths = (const lean_object*)&l_Lean_Linter_List_allowedBitVecWidths___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_List_indexLinter_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_List_indexLinter_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_List_indexLinter_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_List_indexLinter_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__9___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Linter_List_indexLinter_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Linter_List_indexLinter_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "Forbidden variable appearing as a width: use `n` or `m`: "};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "Forbidden variable appearing as a BitVec width: use `w`: "};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "Forbidden variable appearing as an index: use `i`, `j`, or `k`: "};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10_spec__13___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10_spec__13___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10_spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8_spec__12___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8_spec__12___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8_spec__12(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_indexLinter___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_indexLinter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Linter_List_indexLinter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_List_indexLinter___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_List_indexLinter___closed__0 = (const lean_object*)&l_Lean_Linter_List_indexLinter___closed__0_value;
static const lean_closure_object l_Lean_Linter_List_indexLinter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_withSetOptionIn___boxed, .m_arity = 6, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_indexLinter___closed__0_value)} };
static const lean_object* l_Lean_Linter_List_indexLinter___closed__1 = (const lean_object*)&l_Lean_Linter_List_indexLinter___closed__1_value;
static const lean_string_object l_Lean_Linter_List_indexLinter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "indexLinter"};
static const lean_object* l_Lean_Linter_List_indexLinter___closed__2 = (const lean_object*)&l_Lean_Linter_List_indexLinter___closed__2_value;
static const lean_ctor_object l_Lean_Linter_List_indexLinter___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__5_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_List_indexLinter___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_indexLinter___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__6_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l_Lean_Linter_List_indexLinter___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_indexLinter___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(250, 37, 25, 55, 115, 214, 21, 187)}};
static const lean_ctor_object l_Lean_Linter_List_indexLinter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_indexLinter___closed__3_value_aux_2),((lean_object*)&l_Lean_Linter_List_indexLinter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(205, 166, 39, 65, 52, 244, 216, 94)}};
static const lean_object* l_Lean_Linter_List_indexLinter___closed__3 = (const lean_object*)&l_Lean_Linter_List_indexLinter___closed__3_value;
static const lean_ctor_object l_Lean_Linter_List_indexLinter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Linter_List_indexLinter___closed__1_value),((lean_object*)&l_Lean_Linter_List_indexLinter___closed__3_value)}};
static const lean_object* l_Lean_Linter_List_indexLinter___closed__4 = (const lean_object*)&l_Lean_Linter_List_indexLinter___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_List_indexLinter = (const lean_object*)&l_Lean_Linter_List_indexLinter___closed__4_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_88313950____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_88313950____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l_Lean_Linter_List_allowedListNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "r"};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__0 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__0_value;
static const lean_string_object l_Lean_Linter_List_allowedListNames___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__1 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__1_value;
static const lean_string_object l_Lean_Linter_List_allowedListNames___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "t"};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__2 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__2_value;
static const lean_string_object l_Lean_Linter_List_allowedListNames___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "tl"};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__3 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__3_value;
static const lean_string_object l_Lean_Linter_List_allowedListNames___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ws"};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__4 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__4_value;
static const lean_string_object l_Lean_Linter_List_allowedListNames___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "xs"};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__5 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__5_value;
static const lean_string_object l_Lean_Linter_List_allowedListNames___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ys"};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__6 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__6_value;
static const lean_string_object l_Lean_Linter_List_allowedListNames___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "zs"};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__7 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__7_value;
static const lean_string_object l_Lean_Linter_List_allowedListNames___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "as"};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__8 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__8_value;
static const lean_string_object l_Lean_Linter_List_allowedListNames___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bs"};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__9 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__9_value;
static const lean_string_object l_Lean_Linter_List_allowedListNames___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "cs"};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__10 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__10_value;
static const lean_string_object l_Lean_Linter_List_allowedListNames___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ds"};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__11 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__11_value;
static const lean_string_object l_Lean_Linter_List_allowedListNames___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "acc"};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__12 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__12_value;
static const lean_ctor_object l_Lean_Linter_List_allowedListNames___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__13 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__13_value;
static const lean_ctor_object l_Lean_Linter_List_allowedListNames___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__11_value),((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__13_value)}};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__14 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__14_value;
static const lean_ctor_object l_Lean_Linter_List_allowedListNames___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__10_value),((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__14_value)}};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__15 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__15_value;
static const lean_ctor_object l_Lean_Linter_List_allowedListNames___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__9_value),((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__15_value)}};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__16 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__16_value;
static const lean_ctor_object l_Lean_Linter_List_allowedListNames___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__8_value),((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__16_value)}};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__17 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__17_value;
static const lean_ctor_object l_Lean_Linter_List_allowedListNames___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__7_value),((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__17_value)}};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__18 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__18_value;
static const lean_ctor_object l_Lean_Linter_List_allowedListNames___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__6_value),((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__18_value)}};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__19 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__19_value;
static const lean_ctor_object l_Lean_Linter_List_allowedListNames___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__5_value),((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__19_value)}};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__20 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__20_value;
static const lean_ctor_object l_Lean_Linter_List_allowedListNames___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__4_value),((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__20_value)}};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__21 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__21_value;
static const lean_ctor_object l_Lean_Linter_List_allowedListNames___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__3_value),((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__21_value)}};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__22 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__22_value;
static const lean_ctor_object l_Lean_Linter_List_allowedListNames___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__2_value),((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__22_value)}};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__23 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__23_value;
static const lean_ctor_object l_Lean_Linter_List_allowedListNames___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__1_value),((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__23_value)}};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__24 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__24_value;
static const lean_ctor_object l_Lean_Linter_List_allowedListNames___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__0_value),((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__24_value)}};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__25 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__25_value;
static const lean_ctor_object l_Lean_Linter_List_allowedListNames___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_allowedWidths___closed__2_value),((lean_object*)&l_Lean_Linter_List_allowedListNames___closed__25_value)}};
static const lean_object* l_Lean_Linter_List_allowedListNames___closed__26 = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__26_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_List_allowedListNames = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__26_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_List_allowedArrayNames = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__21_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_List_allowedVectorNames = (const lean_object*)&l_Lean_Linter_List_allowedListNames___closed__21_value;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_List_binders_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_List_binders_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_List_binders_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_List_binders_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_List_binders___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l_Lean_Linter_List_binders___lam__0___closed__0 = (const lean_object*)&l_Lean_Linter_List_binders___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Linter_List_binders___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_binders___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l_Lean_Linter_List_binders___lam__0___closed__1 = (const lean_object*)&l_Lean_Linter_List_binders___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Linter_List_binders___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_List_binders___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Linter_List_binders___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_binders___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_binders___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_binders___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_binders(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_binders___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Forbidden variable appearing as a `Array` name: "};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__1;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "xss"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__2_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_numericalIndices___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Forbidden variable appearing as a `List` name: "};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__1;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "L"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__2_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__2(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Forbidden variable appearing as a `Vector` name: "};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__8_spec__9(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__8(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__7(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7_spec__10(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_listVariablesLinter___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_List_listVariablesLinter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Linter_List_listVariablesLinter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_List_listVariablesLinter___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_List_listVariablesLinter___closed__0 = (const lean_object*)&l_Lean_Linter_List_listVariablesLinter___closed__0_value;
static const lean_closure_object l_Lean_Linter_List_listVariablesLinter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_withSetOptionIn___boxed, .m_arity = 6, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_List_listVariablesLinter___closed__0_value)} };
static const lean_object* l_Lean_Linter_List_listVariablesLinter___closed__1 = (const lean_object*)&l_Lean_Linter_List_listVariablesLinter___closed__1_value;
static const lean_string_object l_Lean_Linter_List_listVariablesLinter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "listVariablesLinter"};
static const lean_object* l_Lean_Linter_List_listVariablesLinter___closed__2 = (const lean_object*)&l_Lean_Linter_List_listVariablesLinter___closed__2_value;
static const lean_ctor_object l_Lean_Linter_List_listVariablesLinter___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__5_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_List_listVariablesLinter___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_listVariablesLinter___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__6_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l_Lean_Linter_List_listVariablesLinter___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_listVariablesLinter___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__7_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(250, 37, 25, 55, 115, 214, 21, 187)}};
static const lean_ctor_object l_Lean_Linter_List_listVariablesLinter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_List_listVariablesLinter___closed__3_value_aux_2),((lean_object*)&l_Lean_Linter_List_listVariablesLinter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(178, 104, 155, 83, 102, 4, 128, 194)}};
static const lean_object* l_Lean_Linter_List_listVariablesLinter___closed__3 = (const lean_object*)&l_Lean_Linter_List_listVariablesLinter___closed__3_value;
static const lean_ctor_object l_Lean_Linter_List_listVariablesLinter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Linter_List_listVariablesLinter___closed__1_value),((lean_object*)&l_Lean_Linter_List_listVariablesLinter___closed__3_value)}};
static const lean_object* l_Lean_Linter_List_listVariablesLinter___closed__4 = (const lean_object*)&l_Lean_Linter_List_listVariablesLinter___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_List_listVariablesLinter = (const lean_object*)&l_Lean_Linter_List_listVariablesLinter___closed__4_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_4228040398____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_4228040398____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_55_ = ((lean_object*)(l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__2_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_));
v___x_56_ = ((lean_object*)(l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_));
v___x_57_ = ((lean_object*)(l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__8_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_));
v___x_58_ = l_Lean_Option_register___at___00__private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__spec__0(v___x_55_, v___x_56_, v___x_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4____boxed(lean_object* v_a_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_();
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_78_ = ((lean_object*)(l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__1_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4_));
v___x_79_ = ((lean_object*)(l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__3_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4_));
v___x_80_ = ((lean_object*)(l___private_Lean_Linter_List_0__Lean_Linter_List_initFn___closed__4_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4_));
v___x_81_ = l_Lean_Option_register___at___00__private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4__spec__0(v___x_78_, v___x_79_, v___x_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4____boxed(lean_object* v_a_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4_();
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalIndices___lam__0(lean_object* v_i_84_){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_box(0);
v___x_86_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_86_, 0, v_i_84_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalIndices___lam__1(lean_object* v_i_87_, lean_object* v_j_88_){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_89_ = lean_box(0);
v___x_90_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_90_, 0, v_j_88_);
lean_ctor_set(v___x_90_, 1, v___x_89_);
v___x_91_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_91_, 0, v_i_87_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Linter_List_numericalIndices_spec__0(lean_object* v_i_92_, lean_object* v_stx_93_, lean_object* v_a_94_, lean_object* v_a_95_){
_start:
{
if (lean_obj_tag(v_a_94_) == 0)
{
lean_object* v___x_96_; 
lean_dec(v_stx_93_);
lean_dec_ref(v_i_92_);
v___x_96_ = lean_array_to_list(v_a_95_);
return v___x_96_;
}
else
{
lean_object* v_head_97_; 
v_head_97_ = lean_ctor_get(v_a_94_, 0);
if (lean_obj_tag(v_head_97_) == 1)
{
lean_object* v_tail_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_113_; 
lean_inc_ref(v_head_97_);
v_tail_98_ = lean_ctor_get(v_a_94_, 1);
v_isSharedCheck_113_ = !lean_is_exclusive(v_a_94_);
if (v_isSharedCheck_113_ == 0)
{
lean_object* v_unused_114_; 
v_unused_114_ = lean_ctor_get(v_a_94_, 0);
lean_dec(v_unused_114_);
v___x_100_ = v_a_94_;
v_isShared_101_ = v_isSharedCheck_113_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_tail_98_);
lean_dec(v_a_94_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_113_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v_fvarId_102_; lean_object* v_lctx_103_; lean_object* v___x_104_; 
v_fvarId_102_ = lean_ctor_get(v_head_97_, 0);
lean_inc(v_fvarId_102_);
lean_dec_ref_known(v_head_97_, 1);
v_lctx_103_ = lean_ctor_get(v_i_92_, 1);
lean_inc_ref(v_lctx_103_);
v___x_104_ = lean_local_ctx_find(v_lctx_103_, v_fvarId_102_);
if (lean_obj_tag(v___x_104_) == 0)
{
lean_del_object(v___x_100_);
v_a_94_ = v_tail_98_;
goto _start;
}
else
{
lean_object* v_val_106_; lean_object* v___x_107_; lean_object* v___x_109_; 
v_val_106_ = lean_ctor_get(v___x_104_, 0);
lean_inc(v_val_106_);
lean_dec_ref_known(v___x_104_, 1);
v___x_107_ = l_Lean_LocalDecl_userName(v_val_106_);
lean_dec(v_val_106_);
lean_inc(v_stx_93_);
if (v_isShared_101_ == 0)
{
lean_ctor_set_tag(v___x_100_, 0);
lean_ctor_set(v___x_100_, 1, v___x_107_);
lean_ctor_set(v___x_100_, 0, v_stx_93_);
v___x_109_ = v___x_100_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v_stx_93_);
lean_ctor_set(v_reuseFailAlloc_112_, 1, v___x_107_);
v___x_109_ = v_reuseFailAlloc_112_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
lean_object* v___x_110_; 
v___x_110_ = lean_array_push(v_a_95_, v___x_109_);
v_a_94_ = v_tail_98_;
v_a_95_ = v___x_110_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_115_; 
v_tail_115_ = lean_ctor_get(v_a_94_, 1);
lean_inc(v_tail_115_);
lean_dec_ref_known(v_a_94_, 2);
v_a_94_ = v_tail_115_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalIndices___lam__2(lean_object* v___f_252_, lean_object* v___f_253_, lean_object* v_x_254_, lean_object* v_info_255_, lean_object* v_x_256_){
_start:
{
if (lean_obj_tag(v_info_255_) == 1)
{
lean_object* v_i_257_; lean_object* v_expr_258_; lean_object* v___x_259_; uint8_t v___x_260_; 
v_i_257_ = lean_ctor_get(v_info_255_, 0);
lean_inc_ref(v_i_257_);
v_expr_258_ = lean_ctor_get(v_i_257_, 3);
v___x_259_ = l_Lean_Expr_cleanupAnnotations(v_expr_258_);
v___x_260_ = l_Lean_Expr_isApp(v___x_259_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; 
lean_dec_ref(v___x_259_);
lean_dec_ref(v_i_257_);
lean_dec_ref_known(v_info_255_, 1);
lean_dec_ref(v___f_253_);
lean_dec_ref(v___f_252_);
v___x_261_ = lean_box(0);
return v___x_261_;
}
else
{
lean_object* v___x_262_; uint8_t v___x_263_; 
v___x_262_ = l_Lean_Expr_appFnCleanup___redArg(v___x_259_);
v___x_263_ = l_Lean_Expr_isApp(v___x_262_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; 
lean_dec_ref(v___x_262_);
lean_dec_ref(v___x_259_);
lean_dec_ref(v_i_257_);
lean_dec_ref_known(v_info_255_, 1);
lean_dec_ref(v___f_253_);
lean_dec_ref(v___f_252_);
v___x_264_ = lean_box(0);
return v___x_264_;
}
else
{
lean_object* v___x_265_; uint8_t v___x_266_; 
v___x_265_ = l_Lean_Expr_appFnCleanup___redArg(v___x_262_);
v___x_266_ = l_Lean_Expr_isApp(v___x_265_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; 
lean_dec_ref(v___x_265_);
lean_dec_ref(v___x_262_);
lean_dec_ref(v___x_259_);
lean_dec_ref_known(v_info_255_, 1);
lean_dec_ref(v_i_257_);
lean_dec_ref(v___f_253_);
lean_dec_ref(v___f_252_);
v___x_267_ = lean_box(0);
return v___x_267_;
}
else
{
lean_object* v_arg_268_; lean_object* v_stx_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_411_; 
v_arg_268_ = lean_ctor_get(v___x_259_, 1);
lean_inc_ref(v_arg_268_);
lean_dec_ref(v___x_259_);
v_stx_269_ = l_Lean_Elab_Info_stx(v_info_255_);
v_isSharedCheck_411_ = !lean_is_exclusive(v_info_255_);
if (v_isSharedCheck_411_ == 0)
{
lean_object* v_unused_412_; 
v_unused_412_ = lean_ctor_get(v_info_255_, 0);
lean_dec(v_unused_412_);
v___x_271_ = v_info_255_;
v_isShared_272_ = v_isSharedCheck_411_;
goto v_resetjp_270_;
}
else
{
lean_dec(v_info_255_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_411_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___y_274_; lean_object* v___x_281_; lean_object* v___x_282_; uint8_t v___x_283_; 
v___x_281_ = l_Lean_Expr_appFnCleanup___redArg(v___x_265_);
v___x_282_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__3));
v___x_283_ = l_Lean_Expr_isConstOf(v___x_281_, v___x_282_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; uint8_t v___x_285_; 
v___x_284_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__5));
v___x_285_ = l_Lean_Expr_isConstOf(v___x_281_, v___x_284_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; uint8_t v___x_287_; 
v___x_286_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__7));
v___x_287_ = l_Lean_Expr_isConstOf(v___x_281_, v___x_286_);
if (v___x_287_ == 0)
{
lean_object* v___x_288_; uint8_t v___x_289_; 
v___x_288_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__9));
v___x_289_ = l_Lean_Expr_isConstOf(v___x_281_, v___x_288_);
if (v___x_289_ == 0)
{
lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_290_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__11));
v___x_291_ = l_Lean_Expr_isConstOf(v___x_281_, v___x_290_);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_292_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__12));
v___x_293_ = l_Lean_Expr_isConstOf(v___x_281_, v___x_292_);
if (v___x_293_ == 0)
{
lean_object* v___x_294_; uint8_t v___x_295_; 
v___x_294_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__14));
v___x_295_ = l_Lean_Expr_isConstOf(v___x_281_, v___x_294_);
if (v___x_295_ == 0)
{
lean_object* v_arg_296_; lean_object* v___x_297_; uint8_t v___x_298_; 
v_arg_296_ = lean_ctor_get(v___x_262_, 1);
lean_inc_ref(v_arg_296_);
lean_dec_ref(v___x_262_);
v___x_297_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__15));
v___x_298_ = l_Lean_Expr_isConstOf(v___x_281_, v___x_297_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__16));
v___x_300_ = l_Lean_Expr_isConstOf(v___x_281_, v___x_299_);
if (v___x_300_ == 0)
{
uint8_t v___x_301_; 
v___x_301_ = l_Lean_Expr_isApp(v___x_281_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; 
lean_dec_ref(v_arg_296_);
lean_dec_ref(v___x_281_);
lean_del_object(v___x_271_);
lean_dec(v_stx_269_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v_i_257_);
lean_dec_ref(v___f_253_);
lean_dec_ref(v___f_252_);
v___x_302_ = lean_box(0);
return v___x_302_;
}
else
{
lean_object* v___x_303_; lean_object* v___x_304_; uint8_t v___x_305_; 
v___x_303_ = l_Lean_Expr_appFnCleanup___redArg(v___x_281_);
lean_dec_ref(v___x_281_);
v___x_304_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__18));
v___x_305_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_304_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; uint8_t v___x_307_; 
v___x_306_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__19));
v___x_307_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_306_);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; uint8_t v___x_309_; 
v___x_308_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__20));
v___x_309_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_308_);
if (v___x_309_ == 0)
{
lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_310_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__21));
v___x_311_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_310_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; uint8_t v___x_313_; 
v___x_312_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__22));
v___x_313_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_312_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_314_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__24));
v___x_315_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_314_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; uint8_t v___x_317_; 
v___x_316_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__26));
v___x_317_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_316_);
if (v___x_317_ == 0)
{
lean_object* v___x_318_; uint8_t v___x_319_; 
v___x_318_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__27));
v___x_319_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_318_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; uint8_t v___x_321_; 
v___x_320_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__29));
v___x_321_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_320_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_322_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__31));
v___x_323_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_322_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; uint8_t v___x_325_; 
v___x_324_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__33));
v___x_325_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_324_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; uint8_t v___x_327_; 
v___x_326_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__35));
v___x_327_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_326_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; uint8_t v___x_329_; 
v___x_328_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__36));
v___x_329_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_328_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; uint8_t v___x_331_; 
v___x_330_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__38));
v___x_331_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_330_);
if (v___x_331_ == 0)
{
lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_332_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__40));
v___x_333_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_332_);
if (v___x_333_ == 0)
{
uint8_t v___x_334_; 
v___x_334_ = l_Lean_Expr_isApp(v___x_303_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_296_);
lean_del_object(v___x_271_);
lean_dec(v_stx_269_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v_i_257_);
lean_dec_ref(v___f_253_);
lean_dec_ref(v___f_252_);
v___x_335_ = lean_box(0);
return v___x_335_;
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; uint8_t v___x_338_; 
v___x_336_ = l_Lean_Expr_appFnCleanup___redArg(v___x_303_);
lean_dec_ref(v___x_303_);
v___x_337_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__41));
v___x_338_ = l_Lean_Expr_isConstOf(v___x_336_, v___x_337_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; uint8_t v___x_340_; 
v___x_339_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__42));
v___x_340_ = l_Lean_Expr_isConstOf(v___x_336_, v___x_339_);
if (v___x_340_ == 0)
{
lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_341_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__43));
v___x_342_ = l_Lean_Expr_isConstOf(v___x_336_, v___x_341_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; uint8_t v___x_344_; 
v___x_343_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__44));
v___x_344_ = l_Lean_Expr_isConstOf(v___x_336_, v___x_343_);
if (v___x_344_ == 0)
{
lean_object* v_arg_345_; lean_object* v___x_346_; uint8_t v___x_347_; 
v_arg_345_ = lean_ctor_get(v___x_265_, 1);
lean_inc_ref(v_arg_345_);
lean_dec_ref(v___x_265_);
v___x_346_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__46));
v___x_347_ = l_Lean_Expr_isConstOf(v___x_336_, v___x_346_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__47));
v___x_349_ = l_Lean_Expr_isConstOf(v___x_336_, v___x_348_);
if (v___x_349_ == 0)
{
lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_350_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__49));
v___x_351_ = l_Lean_Expr_isConstOf(v___x_336_, v___x_350_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_352_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__50));
v___x_353_ = l_Lean_Expr_isConstOf(v___x_336_, v___x_352_);
if (v___x_353_ == 0)
{
uint8_t v___x_354_; 
v___x_354_ = l_Lean_Expr_isApp(v___x_336_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; 
lean_dec_ref(v_arg_345_);
lean_dec_ref(v___x_336_);
lean_dec_ref(v_arg_296_);
lean_del_object(v___x_271_);
lean_dec(v_stx_269_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v_i_257_);
lean_dec_ref(v___f_253_);
lean_dec_ref(v___f_252_);
v___x_355_ = lean_box(0);
return v___x_355_;
}
else
{
lean_object* v___x_356_; lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_356_ = l_Lean_Expr_appFnCleanup___redArg(v___x_336_);
lean_dec_ref(v___x_336_);
v___x_357_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__51));
v___x_358_ = l_Lean_Expr_isConstOf(v___x_356_, v___x_357_);
if (v___x_358_ == 0)
{
lean_object* v___x_359_; uint8_t v___x_360_; 
lean_dec_ref(v___f_253_);
v___x_359_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__52));
v___x_360_ = l_Lean_Expr_isConstOf(v___x_356_, v___x_359_);
if (v___x_360_ == 0)
{
lean_object* v___x_361_; uint8_t v___x_362_; 
v___x_361_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__53));
v___x_362_ = l_Lean_Expr_isConstOf(v___x_356_, v___x_361_);
if (v___x_362_ == 0)
{
uint8_t v___x_363_; 
lean_dec_ref(v_arg_345_);
v___x_363_ = l_Lean_Expr_isApp(v___x_356_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; 
lean_dec_ref(v___x_356_);
lean_dec_ref(v_arg_296_);
lean_del_object(v___x_271_);
lean_dec(v_stx_269_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v_i_257_);
lean_dec_ref(v___f_252_);
v___x_364_ = lean_box(0);
return v___x_364_;
}
else
{
lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; 
v___x_365_ = l_Lean_Expr_appFnCleanup___redArg(v___x_356_);
lean_dec_ref(v___x_356_);
v___x_366_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__56));
v___x_367_ = l_Lean_Expr_isConstOf(v___x_365_, v___x_366_);
if (v___x_367_ == 0)
{
uint8_t v___x_368_; 
lean_dec_ref(v_arg_268_);
v___x_368_ = l_Lean_Expr_isApp(v___x_365_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; 
lean_dec_ref(v___x_365_);
lean_dec_ref(v_arg_296_);
lean_del_object(v___x_271_);
lean_dec(v_stx_269_);
lean_dec_ref(v_i_257_);
lean_dec_ref(v___f_252_);
v___x_369_ = lean_box(0);
return v___x_369_;
}
else
{
lean_object* v___x_370_; lean_object* v___x_371_; uint8_t v___x_372_; 
v___x_370_ = l_Lean_Expr_appFnCleanup___redArg(v___x_365_);
lean_dec_ref(v___x_365_);
v___x_371_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__59));
v___x_372_ = l_Lean_Expr_isConstOf(v___x_370_, v___x_371_);
lean_dec_ref(v___x_370_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; 
lean_dec_ref(v_arg_296_);
lean_del_object(v___x_271_);
lean_dec(v_stx_269_);
lean_dec_ref(v_i_257_);
lean_dec_ref(v___f_252_);
v___x_373_ = lean_box(0);
return v___x_373_;
}
else
{
lean_object* v___x_374_; 
v___x_374_ = lean_apply_1(v___f_252_, v_arg_296_);
v___y_274_ = v___x_374_;
goto v___jp_273_;
}
}
}
else
{
lean_object* v___x_375_; 
lean_dec_ref(v___x_365_);
lean_dec_ref(v_arg_296_);
v___x_375_ = lean_apply_1(v___f_252_, v_arg_268_);
v___y_274_ = v___x_375_;
goto v___jp_273_;
}
}
}
else
{
lean_object* v___x_376_; 
lean_dec_ref(v___x_356_);
lean_dec_ref(v_arg_296_);
lean_dec_ref(v_arg_268_);
v___x_376_ = lean_apply_1(v___f_252_, v_arg_345_);
v___y_274_ = v___x_376_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_377_; 
lean_dec_ref(v___x_356_);
lean_dec_ref(v_arg_296_);
lean_dec_ref(v_arg_268_);
v___x_377_ = lean_apply_1(v___f_252_, v_arg_345_);
v___y_274_ = v___x_377_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_378_; 
lean_dec_ref(v___x_356_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___f_252_);
v___x_378_ = lean_apply_2(v___f_253_, v_arg_345_, v_arg_296_);
v___y_274_ = v___x_378_;
goto v___jp_273_;
}
}
}
else
{
lean_object* v___x_379_; 
lean_dec_ref(v___x_336_);
lean_dec_ref(v_arg_296_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___f_253_);
v___x_379_ = lean_apply_1(v___f_252_, v_arg_345_);
v___y_274_ = v___x_379_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_380_; 
lean_dec_ref(v___x_336_);
lean_dec_ref(v_arg_296_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___f_253_);
v___x_380_ = lean_apply_1(v___f_252_, v_arg_345_);
v___y_274_ = v___x_380_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_381_; 
lean_dec_ref(v___x_336_);
lean_dec_ref(v_arg_296_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___f_253_);
v___x_381_ = lean_apply_1(v___f_252_, v_arg_345_);
v___y_274_ = v___x_381_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_382_; 
lean_dec_ref(v___x_336_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___f_252_);
v___x_382_ = lean_apply_2(v___f_253_, v_arg_345_, v_arg_296_);
v___y_274_ = v___x_382_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_383_; 
lean_dec_ref(v___x_336_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_252_);
v___x_383_ = lean_apply_2(v___f_253_, v_arg_296_, v_arg_268_);
v___y_274_ = v___x_383_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_384_; 
lean_dec_ref(v___x_336_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_384_ = lean_apply_1(v___f_252_, v_arg_296_);
v___y_274_ = v___x_384_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_385_; 
lean_dec_ref(v___x_336_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_385_ = lean_apply_1(v___f_252_, v_arg_296_);
v___y_274_ = v___x_385_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_386_; 
lean_dec_ref(v___x_336_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_386_ = lean_apply_1(v___f_252_, v_arg_296_);
v___y_274_ = v___x_386_;
goto v___jp_273_;
}
}
}
else
{
lean_object* v___x_387_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_387_ = lean_apply_1(v___f_252_, v_arg_296_);
v___y_274_ = v___x_387_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_388_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_388_ = lean_apply_1(v___f_252_, v_arg_296_);
v___y_274_ = v___x_388_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_389_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_389_ = lean_apply_1(v___f_252_, v_arg_296_);
v___y_274_ = v___x_389_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_390_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_252_);
v___x_390_ = lean_apply_2(v___f_253_, v_arg_296_, v_arg_268_);
v___y_274_ = v___x_390_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_391_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_391_ = lean_apply_1(v___f_252_, v_arg_296_);
v___y_274_ = v___x_391_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_392_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_392_ = lean_apply_1(v___f_252_, v_arg_296_);
v___y_274_ = v___x_392_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_393_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_393_ = lean_apply_1(v___f_252_, v_arg_296_);
v___y_274_ = v___x_393_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_394_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_394_ = lean_apply_1(v___f_252_, v_arg_296_);
v___y_274_ = v___x_394_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_395_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_395_ = lean_apply_1(v___f_252_, v_arg_296_);
v___y_274_ = v___x_395_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_396_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_396_ = lean_apply_1(v___f_252_, v_arg_296_);
v___y_274_ = v___x_396_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_397_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_296_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_397_ = lean_apply_1(v___f_252_, v_arg_268_);
v___y_274_ = v___x_397_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_398_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_296_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_398_ = lean_apply_1(v___f_252_, v_arg_268_);
v___y_274_ = v___x_398_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_399_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_296_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_399_ = lean_apply_1(v___f_252_, v_arg_268_);
v___y_274_ = v___x_399_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_400_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_296_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_400_ = lean_apply_1(v___f_252_, v_arg_268_);
v___y_274_ = v___x_400_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_401_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_296_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_401_ = lean_apply_1(v___f_252_, v_arg_268_);
v___y_274_ = v___x_401_;
goto v___jp_273_;
}
}
}
else
{
lean_object* v___x_402_; 
lean_dec_ref(v___x_281_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_402_ = lean_apply_1(v___f_252_, v_arg_296_);
v___y_274_ = v___x_402_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_403_; 
lean_dec_ref(v___x_281_);
lean_dec_ref(v_arg_268_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___f_253_);
v___x_403_ = lean_apply_1(v___f_252_, v_arg_296_);
v___y_274_ = v___x_403_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_404_; 
lean_dec_ref(v___x_281_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___x_262_);
lean_dec_ref(v___f_253_);
v___x_404_ = lean_apply_1(v___f_252_, v_arg_268_);
v___y_274_ = v___x_404_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_405_; 
lean_dec_ref(v___x_281_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___x_262_);
lean_dec_ref(v___f_253_);
v___x_405_ = lean_apply_1(v___f_252_, v_arg_268_);
v___y_274_ = v___x_405_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_406_; 
lean_dec_ref(v___x_281_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___x_262_);
lean_dec_ref(v___f_253_);
v___x_406_ = lean_apply_1(v___f_252_, v_arg_268_);
v___y_274_ = v___x_406_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_407_; 
lean_dec_ref(v___x_281_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___x_262_);
lean_dec_ref(v___f_253_);
v___x_407_ = lean_apply_1(v___f_252_, v_arg_268_);
v___y_274_ = v___x_407_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_408_; 
lean_dec_ref(v___x_281_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___x_262_);
lean_dec_ref(v___f_253_);
v___x_408_ = lean_apply_1(v___f_252_, v_arg_268_);
v___y_274_ = v___x_408_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_409_; 
lean_dec_ref(v___x_281_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___x_262_);
lean_dec_ref(v___f_253_);
v___x_409_ = lean_apply_1(v___f_252_, v_arg_268_);
v___y_274_ = v___x_409_;
goto v___jp_273_;
}
}
else
{
lean_object* v___x_410_; 
lean_dec_ref(v___x_281_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___x_262_);
lean_dec_ref(v___f_253_);
v___x_410_ = lean_apply_1(v___f_252_, v_arg_268_);
v___y_274_ = v___x_410_;
goto v___jp_273_;
}
v___jp_273_:
{
if (lean_obj_tag(v___y_274_) == 0)
{
lean_object* v___x_275_; 
lean_del_object(v___x_271_);
lean_dec(v_stx_269_);
lean_dec_ref(v_i_257_);
v___x_275_ = lean_box(0);
return v___x_275_;
}
else
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_279_; 
v___x_276_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__0));
v___x_277_ = l_List_filterMapTR_go___at___00Lean_Linter_List_numericalIndices_spec__0(v_i_257_, v_stx_269_, v___y_274_, v___x_276_);
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 0, v___x_277_);
v___x_279_ = v___x_271_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v___x_277_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
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
lean_object* v___x_413_; 
lean_dec_ref(v_info_255_);
lean_dec_ref(v___f_253_);
lean_dec_ref(v___f_252_);
v___x_413_ = lean_box(0);
return v___x_413_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalIndices___lam__2___boxed(lean_object* v___f_414_, lean_object* v___f_415_, lean_object* v_x_416_, lean_object* v_info_417_, lean_object* v_x_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Lean_Linter_List_numericalIndices___lam__2(v___f_414_, v___f_415_, v_x_416_, v_info_417_, v_x_418_);
lean_dec_ref(v_x_418_);
lean_dec_ref(v_x_416_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Linter_List_numericalIndices_spec__1(lean_object* v_a_420_, lean_object* v_a_421_){
_start:
{
if (lean_obj_tag(v_a_420_) == 0)
{
lean_object* v___x_422_; 
v___x_422_ = lean_array_to_list(v_a_421_);
return v___x_422_;
}
else
{
lean_object* v_head_423_; lean_object* v_tail_424_; lean_object* v___x_425_; 
v_head_423_ = lean_ctor_get(v_a_420_, 0);
lean_inc(v_head_423_);
v_tail_424_ = lean_ctor_get(v_a_420_, 1);
lean_inc(v_tail_424_);
lean_dec_ref_known(v_a_420_, 2);
v___x_425_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_421_, v_head_423_);
v_a_420_ = v_tail_424_;
v_a_421_ = v___x_425_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalIndices(lean_object* v_t_432_){
_start:
{
lean_object* v___f_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
v___f_433_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___closed__2));
v___x_434_ = l_Lean_Elab_InfoTree_deepestNodes___redArg(v___f_433_, v_t_432_);
v___x_435_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__0));
v___x_436_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Linter_List_numericalIndices_spec__1(v___x_434_, v___x_435_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalWidths___lam__0(lean_object* v_n_437_){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = lean_box(0);
v___x_439_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_439_, 0, v_n_437_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalWidths___lam__1(lean_object* v___f_472_, lean_object* v_x_473_, lean_object* v_info_474_, lean_object* v_x_475_){
_start:
{
if (lean_obj_tag(v_info_474_) == 1)
{
lean_object* v_i_476_; lean_object* v_expr_477_; lean_object* v___x_478_; uint8_t v___x_479_; 
v_i_476_ = lean_ctor_get(v_info_474_, 0);
lean_inc_ref(v_i_476_);
v_expr_477_ = lean_ctor_get(v_i_476_, 3);
v___x_478_ = l_Lean_Expr_cleanupAnnotations(v_expr_477_);
v___x_479_ = l_Lean_Expr_isApp(v___x_478_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; 
lean_dec_ref(v___x_478_);
lean_dec_ref(v_i_476_);
lean_dec_ref_known(v_info_474_, 1);
lean_dec_ref(v___f_472_);
v___x_480_ = lean_box(0);
return v___x_480_;
}
else
{
lean_object* v_arg_481_; lean_object* v_stx_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_533_; 
v_arg_481_ = lean_ctor_get(v___x_478_, 1);
lean_inc_ref(v_arg_481_);
v_stx_482_ = l_Lean_Elab_Info_stx(v_info_474_);
v_isSharedCheck_533_ = !lean_is_exclusive(v_info_474_);
if (v_isSharedCheck_533_ == 0)
{
lean_object* v_unused_534_; 
v_unused_534_ = lean_ctor_get(v_info_474_, 0);
lean_dec(v_unused_534_);
v___x_484_ = v_info_474_;
v_isShared_485_ = v_isSharedCheck_533_;
goto v_resetjp_483_;
}
else
{
lean_dec(v_info_474_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_533_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___y_487_; lean_object* v___x_494_; lean_object* v___x_495_; uint8_t v___x_496_; 
v___x_494_ = l_Lean_Expr_appFnCleanup___redArg(v___x_478_);
lean_dec_ref(v___x_478_);
v___x_495_ = ((lean_object*)(l_Lean_Linter_List_numericalWidths___lam__1___closed__1));
v___x_496_ = l_Lean_Expr_isConstOf(v___x_494_, v___x_495_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; uint8_t v___x_498_; 
v___x_497_ = ((lean_object*)(l_Lean_Linter_List_numericalWidths___lam__1___closed__2));
v___x_498_ = l_Lean_Expr_isConstOf(v___x_494_, v___x_497_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; uint8_t v___x_500_; 
v___x_499_ = ((lean_object*)(l_Lean_Linter_List_numericalWidths___lam__1___closed__3));
v___x_500_ = l_Lean_Expr_isConstOf(v___x_494_, v___x_499_);
if (v___x_500_ == 0)
{
uint8_t v___x_501_; 
v___x_501_ = l_Lean_Expr_isApp(v___x_494_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; 
lean_dec_ref(v___x_494_);
lean_del_object(v___x_484_);
lean_dec(v_stx_482_);
lean_dec_ref(v_arg_481_);
lean_dec_ref(v_i_476_);
lean_dec_ref(v___f_472_);
v___x_502_ = lean_box(0);
return v___x_502_;
}
else
{
lean_object* v___x_503_; lean_object* v___x_504_; uint8_t v___x_505_; 
v___x_503_ = l_Lean_Expr_appFnCleanup___redArg(v___x_494_);
v___x_504_ = ((lean_object*)(l_Lean_Linter_List_numericalWidths___lam__1___closed__4));
v___x_505_ = l_Lean_Expr_isConstOf(v___x_503_, v___x_504_);
if (v___x_505_ == 0)
{
uint8_t v___x_506_; 
lean_dec_ref(v_arg_481_);
v___x_506_ = l_Lean_Expr_isApp(v___x_503_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; 
lean_dec_ref(v___x_503_);
lean_dec_ref(v___x_494_);
lean_del_object(v___x_484_);
lean_dec(v_stx_482_);
lean_dec_ref(v_i_476_);
lean_dec_ref(v___f_472_);
v___x_507_ = lean_box(0);
return v___x_507_;
}
else
{
lean_object* v_arg_508_; lean_object* v___x_509_; lean_object* v___x_510_; uint8_t v___x_511_; 
v_arg_508_ = lean_ctor_get(v___x_494_, 1);
lean_inc_ref(v_arg_508_);
lean_dec_ref(v___x_494_);
v___x_509_ = l_Lean_Expr_appFnCleanup___redArg(v___x_503_);
lean_dec_ref(v___x_503_);
v___x_510_ = ((lean_object*)(l_Lean_Linter_List_numericalWidths___lam__1___closed__6));
v___x_511_ = l_Lean_Expr_isConstOf(v___x_509_, v___x_510_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = ((lean_object*)(l_Lean_Linter_List_numericalWidths___lam__1___closed__7));
v___x_513_ = l_Lean_Expr_isConstOf(v___x_509_, v___x_512_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; uint8_t v___x_515_; 
v___x_514_ = ((lean_object*)(l_Lean_Linter_List_numericalWidths___lam__1___closed__8));
v___x_515_ = l_Lean_Expr_isConstOf(v___x_509_, v___x_514_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; uint8_t v___x_517_; 
v___x_516_ = ((lean_object*)(l_Lean_Linter_List_numericalWidths___lam__1___closed__10));
v___x_517_ = l_Lean_Expr_isConstOf(v___x_509_, v___x_516_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; uint8_t v___x_519_; 
v___x_518_ = ((lean_object*)(l_Lean_Linter_List_numericalWidths___lam__1___closed__11));
v___x_519_ = l_Lean_Expr_isConstOf(v___x_509_, v___x_518_);
if (v___x_519_ == 0)
{
lean_object* v___x_520_; uint8_t v___x_521_; 
v___x_520_ = ((lean_object*)(l_Lean_Linter_List_numericalWidths___lam__1___closed__12));
v___x_521_ = l_Lean_Expr_isConstOf(v___x_509_, v___x_520_);
lean_dec_ref(v___x_509_);
if (v___x_521_ == 0)
{
lean_object* v___x_522_; 
lean_dec_ref(v_arg_508_);
lean_del_object(v___x_484_);
lean_dec(v_stx_482_);
lean_dec_ref(v_i_476_);
lean_dec_ref(v___f_472_);
v___x_522_ = lean_box(0);
return v___x_522_;
}
else
{
lean_object* v___x_523_; 
v___x_523_ = lean_apply_1(v___f_472_, v_arg_508_);
v___y_487_ = v___x_523_;
goto v___jp_486_;
}
}
else
{
lean_object* v___x_524_; 
lean_dec_ref(v___x_509_);
v___x_524_ = lean_apply_1(v___f_472_, v_arg_508_);
v___y_487_ = v___x_524_;
goto v___jp_486_;
}
}
else
{
lean_object* v___x_525_; 
lean_dec_ref(v___x_509_);
v___x_525_ = lean_apply_1(v___f_472_, v_arg_508_);
v___y_487_ = v___x_525_;
goto v___jp_486_;
}
}
else
{
lean_object* v___x_526_; 
lean_dec_ref(v___x_509_);
v___x_526_ = lean_apply_1(v___f_472_, v_arg_508_);
v___y_487_ = v___x_526_;
goto v___jp_486_;
}
}
else
{
lean_object* v___x_527_; 
lean_dec_ref(v___x_509_);
v___x_527_ = lean_apply_1(v___f_472_, v_arg_508_);
v___y_487_ = v___x_527_;
goto v___jp_486_;
}
}
else
{
lean_object* v___x_528_; 
lean_dec_ref(v___x_509_);
v___x_528_ = lean_apply_1(v___f_472_, v_arg_508_);
v___y_487_ = v___x_528_;
goto v___jp_486_;
}
}
}
else
{
lean_object* v___x_529_; 
lean_dec_ref(v___x_503_);
lean_dec_ref(v___x_494_);
v___x_529_ = lean_apply_1(v___f_472_, v_arg_481_);
v___y_487_ = v___x_529_;
goto v___jp_486_;
}
}
}
else
{
lean_object* v___x_530_; 
lean_dec_ref(v___x_494_);
v___x_530_ = lean_apply_1(v___f_472_, v_arg_481_);
v___y_487_ = v___x_530_;
goto v___jp_486_;
}
}
else
{
lean_object* v___x_531_; 
lean_dec_ref(v___x_494_);
v___x_531_ = lean_apply_1(v___f_472_, v_arg_481_);
v___y_487_ = v___x_531_;
goto v___jp_486_;
}
}
else
{
lean_object* v___x_532_; 
lean_dec_ref(v___x_494_);
v___x_532_ = lean_apply_1(v___f_472_, v_arg_481_);
v___y_487_ = v___x_532_;
goto v___jp_486_;
}
v___jp_486_:
{
if (lean_obj_tag(v___y_487_) == 0)
{
lean_object* v___x_488_; 
lean_del_object(v___x_484_);
lean_dec(v_stx_482_);
lean_dec_ref(v_i_476_);
v___x_488_ = lean_box(0);
return v___x_488_;
}
else
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_492_; 
v___x_489_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__0));
v___x_490_ = l_List_filterMapTR_go___at___00Lean_Linter_List_numericalIndices_spec__0(v_i_476_, v_stx_482_, v___y_487_, v___x_489_);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 0, v___x_490_);
v___x_492_ = v___x_484_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_490_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
}
}
else
{
lean_object* v___x_535_; 
lean_dec_ref(v_info_474_);
lean_dec_ref(v___f_472_);
v___x_535_ = lean_box(0);
return v___x_535_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalWidths___lam__1___boxed(lean_object* v___f_536_, lean_object* v_x_537_, lean_object* v_info_538_, lean_object* v_x_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lean_Linter_List_numericalWidths___lam__1(v___f_536_, v_x_537_, v_info_538_, v_x_539_);
lean_dec_ref(v_x_539_);
lean_dec_ref(v_x_537_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_numericalWidths(lean_object* v_t_544_){
_start:
{
lean_object* v___f_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v___f_545_ = ((lean_object*)(l_Lean_Linter_List_numericalWidths___closed__1));
v___x_546_ = l_Lean_Elab_InfoTree_deepestNodes___redArg(v___f_545_, v_t_544_);
v___x_547_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__0));
v___x_548_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Linter_List_numericalIndices_spec__1(v___x_546_, v___x_547_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_bitVecWidths___lam__0(lean_object* v_x_552_, lean_object* v_info_553_, lean_object* v_x_554_){
_start:
{
if (lean_obj_tag(v_info_553_) == 1)
{
lean_object* v_i_555_; lean_object* v_expr_556_; lean_object* v___x_557_; uint8_t v___x_558_; 
v_i_555_ = lean_ctor_get(v_info_553_, 0);
lean_inc_ref(v_i_555_);
v_expr_556_ = lean_ctor_get(v_i_555_, 3);
v___x_557_ = l_Lean_Expr_cleanupAnnotations(v_expr_556_);
v___x_558_ = l_Lean_Expr_isApp(v___x_557_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; 
lean_dec_ref(v___x_557_);
lean_dec_ref_known(v_info_553_, 1);
lean_dec_ref(v_i_555_);
v___x_559_ = lean_box(0);
return v___x_559_;
}
else
{
lean_object* v___x_560_; lean_object* v___x_561_; uint8_t v___x_562_; 
v___x_560_ = l_Lean_Expr_appFnCleanup___redArg(v___x_557_);
v___x_561_ = ((lean_object*)(l_Lean_Linter_List_bitVecWidths___lam__0___closed__1));
v___x_562_ = l_Lean_Expr_isConstOf(v___x_560_, v___x_561_);
lean_dec_ref(v___x_560_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; 
lean_dec_ref(v___x_557_);
lean_dec_ref_known(v_info_553_, 1);
lean_dec_ref(v_i_555_);
v___x_563_ = lean_box(0);
return v___x_563_;
}
else
{
lean_object* v_arg_564_; lean_object* v_stx_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_576_; 
v_arg_564_ = lean_ctor_get(v___x_557_, 1);
lean_inc_ref(v_arg_564_);
lean_dec_ref(v___x_557_);
v_stx_565_ = l_Lean_Elab_Info_stx(v_info_553_);
v_isSharedCheck_576_ = !lean_is_exclusive(v_info_553_);
if (v_isSharedCheck_576_ == 0)
{
lean_object* v_unused_577_; 
v_unused_577_ = lean_ctor_get(v_info_553_, 0);
lean_dec(v_unused_577_);
v___x_567_ = v_info_553_;
v_isShared_568_ = v_isSharedCheck_576_;
goto v_resetjp_566_;
}
else
{
lean_dec(v_info_553_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_576_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_574_; 
v___x_569_ = lean_box(0);
v___x_570_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_570_, 0, v_arg_564_);
lean_ctor_set(v___x_570_, 1, v___x_569_);
v___x_571_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__0));
v___x_572_ = l_List_filterMapTR_go___at___00Lean_Linter_List_numericalIndices_spec__0(v_i_555_, v_stx_565_, v___x_570_, v___x_571_);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 0, v___x_572_);
v___x_574_ = v___x_567_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_572_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
}
}
else
{
lean_object* v___x_578_; 
lean_dec_ref(v_info_553_);
v___x_578_ = lean_box(0);
return v___x_578_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_bitVecWidths___lam__0___boxed(lean_object* v_x_579_, lean_object* v_info_580_, lean_object* v_x_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lean_Linter_List_bitVecWidths___lam__0(v_x_579_, v_info_580_, v_x_581_);
lean_dec_ref(v_x_581_);
lean_dec_ref(v_x_579_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_bitVecWidths(lean_object* v_t_584_){
_start:
{
lean_object* v___f_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___f_585_ = ((lean_object*)(l_Lean_Linter_List_bitVecWidths___closed__0));
v___x_586_ = l_Lean_Elab_InfoTree_deepestNodes___redArg(v___f_585_, v_t_584_);
v___x_587_ = ((lean_object*)(l_Lean_Linter_List_numericalIndices___lam__2___closed__0));
v___x_588_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Linter_List_numericalIndices_spec__1(v___x_586_, v___x_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__1(lean_object* v_s_590_){
_start:
{
lean_object* v_str_591_; lean_object* v_startInclusive_592_; lean_object* v_endExclusive_593_; lean_object* v___x_594_; lean_object* v___x_595_; uint8_t v___x_596_; 
v_str_591_ = lean_ctor_get(v_s_590_, 0);
v_startInclusive_592_ = lean_ctor_get(v_s_590_, 1);
v_endExclusive_593_ = lean_ctor_get(v_s_590_, 2);
v___x_594_ = lean_unsigned_to_nat(3u);
v___x_595_ = lean_nat_sub(v_endExclusive_593_, v_startInclusive_592_);
v___x_596_ = lean_nat_dec_le(v___x_594_, v___x_595_);
if (v___x_596_ == 0)
{
lean_dec(v___x_595_);
return v_s_590_;
}
else
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; uint8_t v___x_601_; 
v___x_597_ = ((lean_object*)(l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__1___closed__0));
v___x_598_ = lean_unsigned_to_nat(0u);
v___x_599_ = lean_nat_sub(v___x_595_, v___x_594_);
lean_dec(v___x_595_);
v___x_600_ = lean_nat_add(v_startInclusive_592_, v___x_599_);
v___x_601_ = lean_string_memcmp(v_str_591_, v___x_597_, v___x_600_, v___x_598_, v___x_594_);
lean_dec(v___x_600_);
if (v___x_601_ == 0)
{
lean_dec(v___x_599_);
return v_s_590_;
}
else
{
lean_object* v___x_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_610_; 
lean_inc(v_startInclusive_592_);
lean_inc_ref(v_str_591_);
v___x_602_ = l_String_Slice_pos_x21(v_s_590_, v___x_599_);
lean_dec(v___x_599_);
v_isSharedCheck_610_ = !lean_is_exclusive(v_s_590_);
if (v_isSharedCheck_610_ == 0)
{
lean_object* v_unused_611_; lean_object* v_unused_612_; lean_object* v_unused_613_; 
v_unused_611_ = lean_ctor_get(v_s_590_, 2);
lean_dec(v_unused_611_);
v_unused_612_ = lean_ctor_get(v_s_590_, 1);
lean_dec(v_unused_612_);
v_unused_613_ = lean_ctor_get(v_s_590_, 0);
lean_dec(v_unused_613_);
v___x_604_ = v_s_590_;
v_isShared_605_ = v_isSharedCheck_610_;
goto v_resetjp_603_;
}
else
{
lean_dec(v_s_590_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_610_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_606_; lean_object* v___x_608_; 
v___x_606_ = lean_nat_add(v_startInclusive_592_, v___x_602_);
lean_dec(v___x_602_);
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 2, v___x_606_);
v___x_608_ = v___x_604_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_str_591_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v_startInclusive_592_);
lean_ctor_set(v_reuseFailAlloc_609_, 2, v___x_606_);
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
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__2(lean_object* v_s_615_){
_start:
{
lean_object* v_str_616_; lean_object* v_startInclusive_617_; lean_object* v_endExclusive_618_; lean_object* v___x_619_; lean_object* v___x_620_; uint8_t v___x_621_; 
v_str_616_ = lean_ctor_get(v_s_615_, 0);
v_startInclusive_617_ = lean_ctor_get(v_s_615_, 1);
v_endExclusive_618_ = lean_ctor_get(v_s_615_, 2);
v___x_619_ = lean_unsigned_to_nat(3u);
v___x_620_ = lean_nat_sub(v_endExclusive_618_, v_startInclusive_617_);
v___x_621_ = lean_nat_dec_le(v___x_619_, v___x_620_);
if (v___x_621_ == 0)
{
lean_dec(v___x_620_);
return v_s_615_;
}
else
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; uint8_t v___x_626_; 
v___x_622_ = ((lean_object*)(l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__2___closed__0));
v___x_623_ = lean_unsigned_to_nat(0u);
v___x_624_ = lean_nat_sub(v___x_620_, v___x_619_);
lean_dec(v___x_620_);
v___x_625_ = lean_nat_add(v_startInclusive_617_, v___x_624_);
v___x_626_ = lean_string_memcmp(v_str_616_, v___x_622_, v___x_625_, v___x_623_, v___x_619_);
lean_dec(v___x_625_);
if (v___x_626_ == 0)
{
lean_dec(v___x_624_);
return v_s_615_;
}
else
{
lean_object* v___x_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_635_; 
lean_inc(v_startInclusive_617_);
lean_inc_ref(v_str_616_);
v___x_627_ = l_String_Slice_pos_x21(v_s_615_, v___x_624_);
lean_dec(v___x_624_);
v_isSharedCheck_635_ = !lean_is_exclusive(v_s_615_);
if (v_isSharedCheck_635_ == 0)
{
lean_object* v_unused_636_; lean_object* v_unused_637_; lean_object* v_unused_638_; 
v_unused_636_ = lean_ctor_get(v_s_615_, 2);
lean_dec(v_unused_636_);
v_unused_637_ = lean_ctor_get(v_s_615_, 1);
lean_dec(v_unused_637_);
v_unused_638_ = lean_ctor_get(v_s_615_, 0);
lean_dec(v_unused_638_);
v___x_629_ = v_s_615_;
v_isShared_630_ = v_isSharedCheck_635_;
goto v_resetjp_628_;
}
else
{
lean_dec(v_s_615_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_635_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_631_; lean_object* v___x_633_; 
v___x_631_ = lean_nat_add(v_startInclusive_617_, v___x_627_);
lean_dec(v___x_627_);
if (v_isShared_630_ == 0)
{
lean_ctor_set(v___x_629_, 2, v___x_631_);
v___x_633_ = v___x_629_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_str_616_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v_startInclusive_617_);
lean_ctor_set(v_reuseFailAlloc_634_, 2, v___x_631_);
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
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__3(lean_object* v_s_640_){
_start:
{
lean_object* v_str_641_; lean_object* v_startInclusive_642_; lean_object* v_endExclusive_643_; lean_object* v___x_644_; lean_object* v___x_645_; uint8_t v___x_646_; 
v_str_641_ = lean_ctor_get(v_s_640_, 0);
v_startInclusive_642_ = lean_ctor_get(v_s_640_, 1);
v_endExclusive_643_ = lean_ctor_get(v_s_640_, 2);
v___x_644_ = lean_unsigned_to_nat(3u);
v___x_645_ = lean_nat_sub(v_endExclusive_643_, v_startInclusive_642_);
v___x_646_ = lean_nat_dec_le(v___x_644_, v___x_645_);
if (v___x_646_ == 0)
{
lean_dec(v___x_645_);
return v_s_640_;
}
else
{
lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; uint8_t v___x_651_; 
v___x_647_ = ((lean_object*)(l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__3___closed__0));
v___x_648_ = lean_unsigned_to_nat(0u);
v___x_649_ = lean_nat_sub(v___x_645_, v___x_644_);
lean_dec(v___x_645_);
v___x_650_ = lean_nat_add(v_startInclusive_642_, v___x_649_);
v___x_651_ = lean_string_memcmp(v_str_641_, v___x_647_, v___x_650_, v___x_648_, v___x_644_);
lean_dec(v___x_650_);
if (v___x_651_ == 0)
{
lean_dec(v___x_649_);
return v_s_640_;
}
else
{
lean_object* v___x_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_660_; 
lean_inc(v_startInclusive_642_);
lean_inc_ref(v_str_641_);
v___x_652_ = l_String_Slice_pos_x21(v_s_640_, v___x_649_);
lean_dec(v___x_649_);
v_isSharedCheck_660_ = !lean_is_exclusive(v_s_640_);
if (v_isSharedCheck_660_ == 0)
{
lean_object* v_unused_661_; lean_object* v_unused_662_; lean_object* v_unused_663_; 
v_unused_661_ = lean_ctor_get(v_s_640_, 2);
lean_dec(v_unused_661_);
v_unused_662_ = lean_ctor_get(v_s_640_, 1);
lean_dec(v_unused_662_);
v_unused_663_ = lean_ctor_get(v_s_640_, 0);
lean_dec(v_unused_663_);
v___x_654_ = v_s_640_;
v_isShared_655_ = v_isSharedCheck_660_;
goto v_resetjp_653_;
}
else
{
lean_dec(v_s_640_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_660_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_656_; lean_object* v___x_658_; 
v___x_656_ = lean_nat_add(v_startInclusive_642_, v___x_652_);
lean_dec(v___x_652_);
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 2, v___x_656_);
v___x_658_ = v___x_654_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_str_641_);
lean_ctor_set(v_reuseFailAlloc_659_, 1, v_startInclusive_642_);
lean_ctor_set(v_reuseFailAlloc_659_, 2, v___x_656_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__4(lean_object* v_s_665_){
_start:
{
lean_object* v_str_666_; lean_object* v_startInclusive_667_; lean_object* v_endExclusive_668_; lean_object* v___x_669_; lean_object* v___x_670_; uint8_t v___x_671_; 
v_str_666_ = lean_ctor_get(v_s_665_, 0);
v_startInclusive_667_ = lean_ctor_get(v_s_665_, 1);
v_endExclusive_668_ = lean_ctor_get(v_s_665_, 2);
v___x_669_ = lean_unsigned_to_nat(3u);
v___x_670_ = lean_nat_sub(v_endExclusive_668_, v_startInclusive_667_);
v___x_671_ = lean_nat_dec_le(v___x_669_, v___x_670_);
if (v___x_671_ == 0)
{
lean_dec(v___x_670_);
return v_s_665_;
}
else
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; uint8_t v___x_676_; 
v___x_672_ = ((lean_object*)(l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__4___closed__0));
v___x_673_ = lean_unsigned_to_nat(0u);
v___x_674_ = lean_nat_sub(v___x_670_, v___x_669_);
lean_dec(v___x_670_);
v___x_675_ = lean_nat_add(v_startInclusive_667_, v___x_674_);
v___x_676_ = lean_string_memcmp(v_str_666_, v___x_672_, v___x_675_, v___x_673_, v___x_669_);
lean_dec(v___x_675_);
if (v___x_676_ == 0)
{
lean_dec(v___x_674_);
return v_s_665_;
}
else
{
lean_object* v___x_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_685_; 
lean_inc(v_startInclusive_667_);
lean_inc_ref(v_str_666_);
v___x_677_ = l_String_Slice_pos_x21(v_s_665_, v___x_674_);
lean_dec(v___x_674_);
v_isSharedCheck_685_ = !lean_is_exclusive(v_s_665_);
if (v_isSharedCheck_685_ == 0)
{
lean_object* v_unused_686_; lean_object* v_unused_687_; lean_object* v_unused_688_; 
v_unused_686_ = lean_ctor_get(v_s_665_, 2);
lean_dec(v_unused_686_);
v_unused_687_ = lean_ctor_get(v_s_665_, 1);
lean_dec(v_unused_687_);
v_unused_688_ = lean_ctor_get(v_s_665_, 0);
lean_dec(v_unused_688_);
v___x_679_ = v_s_665_;
v_isShared_680_ = v_isSharedCheck_685_;
goto v_resetjp_678_;
}
else
{
lean_dec(v_s_665_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_685_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_681_; lean_object* v___x_683_; 
v___x_681_ = lean_nat_add(v_startInclusive_667_, v___x_677_);
lean_dec(v___x_677_);
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 2, v___x_681_);
v___x_683_ = v___x_679_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_str_666_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v_startInclusive_667_);
lean_ctor_set(v_reuseFailAlloc_684_, 2, v___x_681_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___at___00String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0_spec__0___redArg(lean_object* v_s_690_){
_start:
{
lean_object* v_str_691_; lean_object* v_startInclusive_692_; lean_object* v_endExclusive_693_; lean_object* v___x_694_; lean_object* v___x_695_; uint8_t v___x_696_; 
v_str_691_ = lean_ctor_get(v_s_690_, 0);
v_startInclusive_692_ = lean_ctor_get(v_s_690_, 1);
v_endExclusive_693_ = lean_ctor_get(v_s_690_, 2);
v___x_694_ = lean_unsigned_to_nat(1u);
v___x_695_ = lean_nat_sub(v_endExclusive_693_, v_startInclusive_692_);
v___x_696_ = lean_nat_dec_le(v___x_694_, v___x_695_);
if (v___x_696_ == 0)
{
lean_dec(v___x_695_);
return v_s_690_;
}
else
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; uint8_t v___x_701_; 
v___x_697_ = ((lean_object*)(l_String_Slice_dropSuffix___at___00String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0_spec__0___redArg___closed__0));
v___x_698_ = lean_unsigned_to_nat(0u);
v___x_699_ = lean_nat_sub(v___x_695_, v___x_694_);
lean_dec(v___x_695_);
v___x_700_ = lean_nat_add(v_startInclusive_692_, v___x_699_);
v___x_701_ = lean_string_memcmp(v_str_691_, v___x_697_, v___x_700_, v___x_698_, v___x_694_);
lean_dec(v___x_700_);
if (v___x_701_ == 0)
{
lean_dec(v___x_699_);
return v_s_690_;
}
else
{
lean_object* v___x_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_710_; 
lean_inc(v_startInclusive_692_);
lean_inc_ref(v_str_691_);
v___x_702_ = l_String_Slice_pos_x21(v_s_690_, v___x_699_);
lean_dec(v___x_699_);
v_isSharedCheck_710_ = !lean_is_exclusive(v_s_690_);
if (v_isSharedCheck_710_ == 0)
{
lean_object* v_unused_711_; lean_object* v_unused_712_; lean_object* v_unused_713_; 
v_unused_711_ = lean_ctor_get(v_s_690_, 2);
lean_dec(v_unused_711_);
v_unused_712_ = lean_ctor_get(v_s_690_, 1);
lean_dec(v_unused_712_);
v_unused_713_ = lean_ctor_get(v_s_690_, 0);
lean_dec(v_unused_713_);
v___x_704_ = v_s_690_;
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
else
{
lean_dec(v_s_690_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_706_; lean_object* v___x_708_; 
v___x_706_ = lean_nat_add(v_startInclusive_692_, v___x_702_);
lean_dec(v___x_702_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 2, v___x_706_);
v___x_708_ = v___x_704_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_str_691_);
lean_ctor_set(v_reuseFailAlloc_709_, 1, v_startInclusive_692_);
lean_ctor_set(v_reuseFailAlloc_709_, 2, v___x_706_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0(lean_object* v_s_714_, lean_object* v_pat_715_){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_716_ = lean_unsigned_to_nat(0u);
v___x_717_ = lean_string_utf8_byte_size(v_s_714_);
v___x_718_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_718_, 0, v_s_714_);
lean_ctor_set(v___x_718_, 1, v___x_716_);
lean_ctor_set(v___x_718_, 2, v___x_717_);
v___x_719_ = l_String_Slice_dropSuffix___at___00String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0_spec__0___redArg(v___x_718_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0___boxed(lean_object* v_s_720_, lean_object* v_pat_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0(v_s_720_, v_pat_721_);
lean_dec_ref(v_pat_721_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_stripBinderName(lean_object* v_s_723_){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v_str_730_; lean_object* v_startInclusive_731_; lean_object* v_endExclusive_732_; lean_object* v___x_733_; 
v___x_724_ = ((lean_object*)(l_String_Slice_dropSuffix___at___00String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0_spec__0___redArg___closed__0));
v___x_725_ = l_String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0(v_s_723_, v___x_724_);
v___x_726_ = l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__1(v___x_725_);
v___x_727_ = l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__2(v___x_726_);
v___x_728_ = l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__3(v___x_727_);
v___x_729_ = l_String_Slice_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__4(v___x_728_);
v_str_730_ = lean_ctor_get(v___x_729_, 0);
lean_inc_ref(v_str_730_);
v_startInclusive_731_ = lean_ctor_get(v___x_729_, 1);
lean_inc(v_startInclusive_731_);
v_endExclusive_732_ = lean_ctor_get(v___x_729_, 2);
lean_inc(v_endExclusive_732_);
lean_dec_ref(v___x_729_);
v___x_733_ = lean_string_utf8_extract_fast(v_str_730_, v_startInclusive_731_, v_endExclusive_732_);
lean_dec(v_endExclusive_732_);
lean_dec(v_startInclusive_731_);
lean_dec_ref(v_str_730_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___at___00String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0_spec__0(lean_object* v_pat_734_, lean_object* v_s_735_){
_start:
{
lean_object* v___x_736_; 
v___x_736_ = l_String_Slice_dropSuffix___at___00String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0_spec__0___redArg(v_s_735_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___at___00String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0_spec__0___boxed(lean_object* v_pat_737_, lean_object* v_s_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_String_Slice_dropSuffix___at___00String_dropSuffix___at___00Lean_Linter_List_stripBinderName_spec__0_spec__0(v_pat_737_, v_s_738_);
lean_dec_ref(v_pat_737_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_List_indexLinter_spec__0___redArg(lean_object* v___y_790_){
_start:
{
lean_object* v___x_792_; lean_object* v_infoState_793_; lean_object* v_trees_794_; lean_object* v___x_795_; 
v___x_792_ = lean_st_ref_get(v___y_790_);
v_infoState_793_ = lean_ctor_get(v___x_792_, 8);
lean_inc_ref(v_infoState_793_);
lean_dec(v___x_792_);
v_trees_794_ = lean_ctor_get(v_infoState_793_, 2);
lean_inc_ref(v_trees_794_);
lean_dec_ref(v_infoState_793_);
v___x_795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_795_, 0, v_trees_794_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_List_indexLinter_spec__0___redArg___boxed(lean_object* v___y_796_, lean_object* v___y_797_){
_start:
{
lean_object* v_res_798_; 
v_res_798_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_List_indexLinter_spec__0___redArg(v___y_796_);
lean_dec(v___y_796_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_List_indexLinter_spec__0(lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v___x_802_; 
v___x_802_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_List_indexLinter_spec__0___redArg(v___y_800_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_List_indexLinter_spec__0___boxed(lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_List_indexLinter_spec__0(v___y_803_, v___y_804_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
return v_res_806_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__9(lean_object* v_opts_807_, lean_object* v_opt_808_){
_start:
{
lean_object* v_name_809_; lean_object* v_defValue_810_; lean_object* v_map_811_; lean_object* v___x_812_; 
v_name_809_ = lean_ctor_get(v_opt_808_, 0);
v_defValue_810_ = lean_ctor_get(v_opt_808_, 1);
v_map_811_ = lean_ctor_get(v_opts_807_, 0);
v___x_812_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_811_, v_name_809_);
if (lean_obj_tag(v___x_812_) == 0)
{
uint8_t v___x_813_; 
v___x_813_ = lean_unbox(v_defValue_810_);
return v___x_813_;
}
else
{
lean_object* v_val_814_; 
v_val_814_ = lean_ctor_get(v___x_812_, 0);
lean_inc(v_val_814_);
lean_dec_ref_known(v___x_812_, 1);
if (lean_obj_tag(v_val_814_) == 1)
{
uint8_t v_v_815_; 
v_v_815_ = lean_ctor_get_uint8(v_val_814_, 0);
lean_dec_ref_known(v_val_814_, 0);
return v_v_815_;
}
else
{
uint8_t v___x_816_; 
lean_dec(v_val_814_);
v___x_816_ = lean_unbox(v_defValue_810_);
return v___x_816_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__9___boxed(lean_object* v_opts_817_, lean_object* v_opt_818_){
_start:
{
uint8_t v_res_819_; lean_object* v_r_820_; 
v_res_819_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__9(v_opts_817_, v_opt_818_);
lean_dec_ref(v_opt_818_);
lean_dec_ref(v_opts_817_);
v_r_820_ = lean_box(v_res_819_);
return v_r_820_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___lam__0(uint8_t v___x_822_, lean_object* v_x_823_){
_start:
{
if (lean_obj_tag(v_x_823_) == 1)
{
lean_object* v_pre_824_; 
v_pre_824_ = lean_ctor_get(v_x_823_, 0);
if (lean_obj_tag(v_pre_824_) == 0)
{
lean_object* v_str_825_; lean_object* v___x_826_; uint8_t v___x_827_; 
v_str_825_ = lean_ctor_get(v_x_823_, 1);
v___x_826_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___lam__0___closed__0));
v___x_827_ = lean_string_dec_eq(v_str_825_, v___x_826_);
return v___x_827_;
}
else
{
return v___x_822_;
}
}
else
{
return v___x_822_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___lam__0___boxed(lean_object* v___x_828_, lean_object* v_x_829_){
_start:
{
uint8_t v___x_11846__boxed_830_; uint8_t v_res_831_; lean_object* v_r_832_; 
v___x_11846__boxed_830_ = lean_unbox(v___x_828_);
v_res_831_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___lam__0(v___x_11846__boxed_830_, v_x_829_);
lean_dec(v_x_829_);
v_r_832_ = lean_box(v_res_831_);
return v_r_832_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_833_; 
v___x_833_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_833_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_834_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__0);
v___x_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
return v___x_835_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_836_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__1);
v___x_837_ = lean_unsigned_to_nat(0u);
v___x_838_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_838_, 0, v___x_837_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
lean_ctor_set(v___x_838_, 2, v___x_837_);
lean_ctor_set(v___x_838_, 3, v___x_837_);
lean_ctor_set(v___x_838_, 4, v___x_836_);
lean_ctor_set(v___x_838_, 5, v___x_836_);
lean_ctor_set(v___x_838_, 6, v___x_836_);
lean_ctor_set(v___x_838_, 7, v___x_836_);
lean_ctor_set(v___x_838_, 8, v___x_836_);
lean_ctor_set(v___x_838_, 9, v___x_836_);
lean_ctor_set(v___x_838_, 10, v___x_836_);
return v___x_838_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__3(void){
_start:
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_839_ = lean_unsigned_to_nat(32u);
v___x_840_ = lean_mk_empty_array_with_capacity(v___x_839_);
v___x_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
return v___x_841_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__4(void){
_start:
{
size_t v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_842_ = ((size_t)5ULL);
v___x_843_ = lean_unsigned_to_nat(0u);
v___x_844_ = lean_unsigned_to_nat(32u);
v___x_845_ = lean_mk_empty_array_with_capacity(v___x_844_);
v___x_846_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__3);
v___x_847_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_847_, 0, v___x_846_);
lean_ctor_set(v___x_847_, 1, v___x_845_);
lean_ctor_set(v___x_847_, 2, v___x_843_);
lean_ctor_set(v___x_847_, 3, v___x_843_);
lean_ctor_set_usize(v___x_847_, 4, v___x_842_);
return v___x_847_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_848_ = lean_box(1);
v___x_849_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__4);
v___x_850_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__1);
v___x_851_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_851_, 0, v___x_850_);
lean_ctor_set(v___x_851_, 1, v___x_849_);
lean_ctor_set(v___x_851_, 2, v___x_848_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg(lean_object* v_msgData_852_, lean_object* v___y_853_){
_start:
{
lean_object* v___x_855_; lean_object* v_env_856_; uint8_t v___x_857_; lean_object* v_env_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v_scopes_861_; lean_object* v___x_862_; lean_object* v_opts_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_855_ = lean_st_ref_get(v___y_853_);
v_env_856_ = lean_ctor_get(v___x_855_, 0);
lean_inc_ref(v_env_856_);
lean_dec(v___x_855_);
v___x_857_ = 0;
v_env_858_ = l_Lean_Environment_setRecordingDeps(v_env_856_, v___x_857_);
v___x_859_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_860_ = lean_st_ref_get(v___y_853_);
v_scopes_861_ = lean_ctor_get(v___x_860_, 2);
lean_inc(v_scopes_861_);
lean_dec(v___x_860_);
v___x_862_ = l_List_head_x21___redArg(v___x_859_, v_scopes_861_);
lean_dec(v_scopes_861_);
v_opts_863_ = lean_ctor_get(v___x_862_, 1);
lean_inc_ref(v_opts_863_);
lean_dec(v___x_862_);
v___x_864_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__2);
v___x_865_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___closed__5);
v___x_866_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_866_, 0, v_env_858_);
lean_ctor_set(v___x_866_, 1, v___x_864_);
lean_ctor_set(v___x_866_, 2, v___x_865_);
lean_ctor_set(v___x_866_, 3, v_opts_863_);
v___x_867_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_867_, 0, v___x_866_);
lean_ctor_set(v___x_867_, 1, v_msgData_852_);
v___x_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_868_, 0, v___x_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg___boxed(lean_object* v_msgData_869_, lean_object* v___y_870_, lean_object* v___y_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg(v_msgData_869_, v___y_870_);
lean_dec(v___y_870_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3(lean_object* v_ref_877_, lean_object* v_msgData_878_, uint8_t v_severity_879_, uint8_t v_isSilent_880_, lean_object* v___y_881_, lean_object* v___y_882_){
_start:
{
lean_object* v___y_885_; lean_object* v___y_886_; lean_object* v___y_887_; uint8_t v___y_888_; lean_object* v___y_889_; uint8_t v___y_890_; lean_object* v___y_891_; lean_object* v___y_892_; lean_object* v___y_950_; uint8_t v___y_951_; uint8_t v___y_952_; lean_object* v___y_953_; lean_object* v___y_954_; lean_object* v___y_975_; lean_object* v___y_976_; uint8_t v___y_977_; uint8_t v___y_978_; lean_object* v___y_979_; uint8_t v___y_983_; uint8_t v___x_1011_; uint8_t v___x_1012_; 
v___x_1011_ = 2;
v___x_1012_ = l_Lean_instBEqMessageSeverity_beq(v_severity_879_, v___x_1011_);
if (v___x_1012_ == 0)
{
goto v___jp_1000_;
}
else
{
uint8_t v___x_1013_; 
lean_inc_ref(v_msgData_878_);
v___x_1013_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_878_);
if (v___x_1013_ == 0)
{
goto v___jp_1000_;
}
else
{
lean_object* v___x_1014_; lean_object* v___x_1015_; 
lean_dec_ref(v_msgData_878_);
v___x_1014_ = lean_box(0);
v___x_1015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1014_);
return v___x_1015_;
}
}
v___jp_884_:
{
lean_object* v___x_893_; 
v___x_893_ = l_Lean_Elab_Command_getScope___redArg(v___y_892_);
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v_a_894_; lean_object* v_currNamespace_895_; lean_object* v___x_896_; 
v_a_894_ = lean_ctor_get(v___x_893_, 0);
lean_inc(v_a_894_);
lean_dec_ref_known(v___x_893_, 1);
v_currNamespace_895_ = lean_ctor_get(v_a_894_, 2);
lean_inc(v_currNamespace_895_);
lean_dec(v_a_894_);
v___x_896_ = l_Lean_Elab_Command_getScope___redArg(v___y_892_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_932_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_932_ == 0)
{
v___x_899_ = v___x_896_;
v_isShared_900_ = v_isSharedCheck_932_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_a_897_);
lean_dec(v___x_896_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_932_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v_openDecls_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v_env_906_; lean_object* v_messages_907_; lean_object* v_scopes_908_; lean_object* v_usedQuotCtxts_909_; lean_object* v_nextMacroScope_910_; lean_object* v_maxRecDepth_911_; lean_object* v_ngen_912_; lean_object* v_auxDeclNGen_913_; lean_object* v_infoState_914_; lean_object* v_traceState_915_; lean_object* v_snapshotTasks_916_; lean_object* v_prevLinterStates_917_; lean_object* v_codeQualityEntryTasks_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_931_; 
v_openDecls_901_ = lean_ctor_get(v_a_897_, 3);
lean_inc(v_openDecls_901_);
lean_dec(v_a_897_);
v___x_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_902_, 0, v_currNamespace_895_);
lean_ctor_set(v___x_902_, 1, v_openDecls_901_);
v___x_903_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_903_, 0, v___x_902_);
lean_ctor_set(v___x_903_, 1, v___y_891_);
lean_inc_ref(v___y_887_);
lean_inc_ref(v___y_885_);
v___x_904_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_904_, 0, v___y_885_);
lean_ctor_set(v___x_904_, 1, v___y_886_);
lean_ctor_set(v___x_904_, 2, v___y_889_);
lean_ctor_set(v___x_904_, 3, v___y_887_);
lean_ctor_set(v___x_904_, 4, v___x_903_);
lean_ctor_set_uint8(v___x_904_, sizeof(void*)*5, v___y_890_);
lean_ctor_set_uint8(v___x_904_, sizeof(void*)*5 + 1, v___y_888_);
lean_ctor_set_uint8(v___x_904_, sizeof(void*)*5 + 2, v_isSilent_880_);
v___x_905_ = lean_st_ref_take(v___y_892_);
v_env_906_ = lean_ctor_get(v___x_905_, 0);
v_messages_907_ = lean_ctor_get(v___x_905_, 1);
v_scopes_908_ = lean_ctor_get(v___x_905_, 2);
v_usedQuotCtxts_909_ = lean_ctor_get(v___x_905_, 3);
v_nextMacroScope_910_ = lean_ctor_get(v___x_905_, 4);
v_maxRecDepth_911_ = lean_ctor_get(v___x_905_, 5);
v_ngen_912_ = lean_ctor_get(v___x_905_, 6);
v_auxDeclNGen_913_ = lean_ctor_get(v___x_905_, 7);
v_infoState_914_ = lean_ctor_get(v___x_905_, 8);
v_traceState_915_ = lean_ctor_get(v___x_905_, 9);
v_snapshotTasks_916_ = lean_ctor_get(v___x_905_, 10);
v_prevLinterStates_917_ = lean_ctor_get(v___x_905_, 11);
v_codeQualityEntryTasks_918_ = lean_ctor_get(v___x_905_, 12);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_931_ == 0)
{
v___x_920_ = v___x_905_;
v_isShared_921_ = v_isSharedCheck_931_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_codeQualityEntryTasks_918_);
lean_inc(v_prevLinterStates_917_);
lean_inc(v_snapshotTasks_916_);
lean_inc(v_traceState_915_);
lean_inc(v_infoState_914_);
lean_inc(v_auxDeclNGen_913_);
lean_inc(v_ngen_912_);
lean_inc(v_maxRecDepth_911_);
lean_inc(v_nextMacroScope_910_);
lean_inc(v_usedQuotCtxts_909_);
lean_inc(v_scopes_908_);
lean_inc(v_messages_907_);
lean_inc(v_env_906_);
lean_dec(v___x_905_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_931_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_925_; 
v___x_922_ = lean_box(0);
v___x_923_ = l_Lean_MessageLog_add(v___x_904_, v_messages_907_);
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 1, v___x_923_);
v___x_925_ = v___x_920_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_env_906_);
lean_ctor_set(v_reuseFailAlloc_930_, 1, v___x_923_);
lean_ctor_set(v_reuseFailAlloc_930_, 2, v_scopes_908_);
lean_ctor_set(v_reuseFailAlloc_930_, 3, v_usedQuotCtxts_909_);
lean_ctor_set(v_reuseFailAlloc_930_, 4, v_nextMacroScope_910_);
lean_ctor_set(v_reuseFailAlloc_930_, 5, v_maxRecDepth_911_);
lean_ctor_set(v_reuseFailAlloc_930_, 6, v_ngen_912_);
lean_ctor_set(v_reuseFailAlloc_930_, 7, v_auxDeclNGen_913_);
lean_ctor_set(v_reuseFailAlloc_930_, 8, v_infoState_914_);
lean_ctor_set(v_reuseFailAlloc_930_, 9, v_traceState_915_);
lean_ctor_set(v_reuseFailAlloc_930_, 10, v_snapshotTasks_916_);
lean_ctor_set(v_reuseFailAlloc_930_, 11, v_prevLinterStates_917_);
lean_ctor_set(v_reuseFailAlloc_930_, 12, v_codeQualityEntryTasks_918_);
v___x_925_ = v_reuseFailAlloc_930_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
lean_object* v___x_926_; lean_object* v___x_928_; 
v___x_926_ = lean_st_ref_put(v___y_892_, v___x_925_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 0, v___x_922_);
v___x_928_ = v___x_899_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_922_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
}
else
{
lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_940_; 
lean_dec(v_currNamespace_895_);
lean_dec_ref(v___y_891_);
lean_dec(v___y_889_);
lean_dec_ref(v___y_886_);
v_a_933_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_940_ == 0)
{
v___x_935_ = v___x_896_;
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_dec(v___x_896_);
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
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
lean_dec_ref(v___y_891_);
lean_dec(v___y_889_);
lean_dec_ref(v___y_886_);
v_a_941_ = lean_ctor_get(v___x_893_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_948_ == 0)
{
v___x_943_ = v___x_893_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v___x_893_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_941_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
}
v___jp_949_:
{
lean_object* v_fileName_955_; lean_object* v_fileMap_956_; uint8_t v_suppressElabErrors_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_973_; 
v_fileName_955_ = lean_ctor_get(v___y_881_, 0);
v_fileMap_956_ = lean_ctor_get(v___y_881_, 1);
v_suppressElabErrors_957_ = lean_ctor_get_uint8(v___y_881_, sizeof(void*)*10);
v___x_958_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_878_);
v___x_959_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg(v___x_958_, v___y_882_);
v_a_960_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_973_ == 0)
{
v___x_962_ = v___x_959_;
v_isShared_963_ = v_isSharedCheck_973_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_959_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_973_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
lean_inc_ref_n(v_fileMap_956_, 2);
v___x_964_ = l_Lean_FileMap_toPosition(v_fileMap_956_, v___y_953_);
lean_dec(v___y_953_);
v___x_965_ = l_Lean_FileMap_toPosition(v_fileMap_956_, v___y_954_);
lean_dec(v___y_954_);
v___x_966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
v___x_967_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___closed__0));
if (v_suppressElabErrors_957_ == 0)
{
lean_del_object(v___x_962_);
v___y_885_ = v_fileName_955_;
v___y_886_ = v___x_964_;
v___y_887_ = v___x_967_;
v___y_888_ = v___y_951_;
v___y_889_ = v___x_966_;
v___y_890_ = v___y_952_;
v___y_891_ = v_a_960_;
v___y_892_ = v___y_882_;
goto v___jp_884_;
}
else
{
uint8_t v___x_968_; 
lean_inc(v_a_960_);
lean_inc_ref(v___y_950_);
v___x_968_ = l_Lean_MessageData_hasTag(v___y_950_, v_a_960_);
if (v___x_968_ == 0)
{
lean_object* v___x_969_; lean_object* v___x_971_; 
lean_dec_ref_known(v___x_966_, 1);
lean_dec_ref(v___x_964_);
lean_dec(v_a_960_);
v___x_969_ = lean_box(0);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 0, v___x_969_);
v___x_971_ = v___x_962_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v___x_969_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
else
{
lean_del_object(v___x_962_);
v___y_885_ = v_fileName_955_;
v___y_886_ = v___x_964_;
v___y_887_ = v___x_967_;
v___y_888_ = v___y_951_;
v___y_889_ = v___x_966_;
v___y_890_ = v___y_952_;
v___y_891_ = v_a_960_;
v___y_892_ = v___y_882_;
goto v___jp_884_;
}
}
}
}
v___jp_974_:
{
lean_object* v___x_980_; 
v___x_980_ = l_Lean_Syntax_getTailPos_x3f(v___y_975_, v___y_977_);
lean_dec(v___y_975_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_inc(v___y_979_);
v___y_950_ = v___y_976_;
v___y_951_ = v___y_978_;
v___y_952_ = v___y_977_;
v___y_953_ = v___y_979_;
v___y_954_ = v___y_979_;
goto v___jp_949_;
}
else
{
lean_object* v_val_981_; 
v_val_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_val_981_);
lean_dec_ref_known(v___x_980_, 1);
v___y_950_ = v___y_976_;
v___y_951_ = v___y_978_;
v___y_952_ = v___y_977_;
v___y_953_ = v___y_979_;
v___y_954_ = v_val_981_;
goto v___jp_949_;
}
}
v___jp_982_:
{
lean_object* v___x_984_; 
v___x_984_ = l_Lean_Elab_Command_getRef___redArg(v___y_881_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; lean_object* v_ref_986_; uint8_t v___x_987_; lean_object* v___f_988_; lean_object* v___x_989_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_985_);
lean_dec_ref_known(v___x_984_, 1);
v_ref_986_ = l_Lean_replaceRef(v_ref_877_, v_a_985_);
lean_dec(v_a_985_);
v___x_987_ = 0;
v___f_988_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___closed__1));
v___x_989_ = l_Lean_Syntax_getPos_x3f(v_ref_986_, v___x_987_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v___x_990_; 
v___x_990_ = lean_unsigned_to_nat(0u);
v___y_975_ = v_ref_986_;
v___y_976_ = v___f_988_;
v___y_977_ = v___x_987_;
v___y_978_ = v___y_983_;
v___y_979_ = v___x_990_;
goto v___jp_974_;
}
else
{
lean_object* v_val_991_; 
v_val_991_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_val_991_);
lean_dec_ref_known(v___x_989_, 1);
v___y_975_ = v_ref_986_;
v___y_976_ = v___f_988_;
v___y_977_ = v___x_987_;
v___y_978_ = v___y_983_;
v___y_979_ = v_val_991_;
goto v___jp_974_;
}
}
else
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
lean_dec_ref(v_msgData_878_);
v_a_992_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v___x_984_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_984_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_992_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
}
v___jp_1000_:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v_scopes_1003_; lean_object* v___x_1004_; lean_object* v_opts_1005_; uint8_t v___x_1006_; uint8_t v___x_1007_; 
v___x_1001_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1002_ = lean_st_ref_get(v___y_882_);
v_scopes_1003_ = lean_ctor_get(v___x_1002_, 2);
lean_inc(v_scopes_1003_);
lean_dec(v___x_1002_);
v___x_1004_ = l_List_head_x21___redArg(v___x_1001_, v_scopes_1003_);
lean_dec(v_scopes_1003_);
v_opts_1005_ = lean_ctor_get(v___x_1004_, 1);
lean_inc_ref(v_opts_1005_);
lean_dec(v___x_1004_);
v___x_1006_ = 1;
v___x_1007_ = l_Lean_instBEqMessageSeverity_beq(v_severity_879_, v___x_1006_);
if (v___x_1007_ == 0)
{
lean_dec_ref(v_opts_1005_);
v___y_983_ = v_severity_879_;
goto v___jp_982_;
}
else
{
lean_object* v___x_1008_; uint8_t v___x_1009_; 
v___x_1008_ = l_Lean_warningAsError;
v___x_1009_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__9(v_opts_1005_, v___x_1008_);
lean_dec_ref(v_opts_1005_);
if (v___x_1009_ == 0)
{
v___y_983_ = v_severity_879_;
goto v___jp_982_;
}
else
{
uint8_t v___x_1010_; 
v___x_1010_ = 2;
v___y_983_ = v___x_1010_;
goto v___jp_982_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3___boxed(lean_object* v_ref_1016_, lean_object* v_msgData_1017_, lean_object* v_severity_1018_, lean_object* v_isSilent_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_){
_start:
{
uint8_t v_severity_boxed_1023_; uint8_t v_isSilent_boxed_1024_; lean_object* v_res_1025_; 
v_severity_boxed_1023_ = lean_unbox(v_severity_1018_);
v_isSilent_boxed_1024_ = lean_unbox(v_isSilent_1019_);
v_res_1025_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3(v_ref_1016_, v_msgData_1017_, v_severity_boxed_1023_, v_isSilent_boxed_1024_, v___y_1020_, v___y_1021_);
lean_dec(v___y_1021_);
lean_dec_ref(v___y_1020_);
lean_dec(v_ref_1016_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2(lean_object* v_ref_1026_, lean_object* v_msgData_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_){
_start:
{
uint8_t v___x_1031_; uint8_t v___x_1032_; lean_object* v___x_1033_; 
v___x_1031_ = 1;
v___x_1032_ = 0;
v___x_1033_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3(v_ref_1026_, v_msgData_1027_, v___x_1031_, v___x_1032_, v___y_1028_, v___y_1029_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2___boxed(lean_object* v_ref_1034_, lean_object* v_msgData_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2(v_ref_1034_, v_msgData_1035_, v___y_1036_, v___y_1037_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec(v_ref_1034_);
return v_res_1039_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1041_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__0));
v___x_1042_ = l_Lean_stringToMessageData(v___x_1041_);
return v___x_1042_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1044_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__2));
v___x_1045_ = l_Lean_stringToMessageData(v___x_1044_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2(lean_object* v_linterOption_1046_, lean_object* v_stx_1047_, lean_object* v_msg_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_){
_start:
{
lean_object* v_name_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1070_; 
v_name_1052_ = lean_ctor_get(v_linterOption_1046_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v_linterOption_1046_);
if (v_isSharedCheck_1070_ == 0)
{
lean_object* v_unused_1071_; 
v_unused_1071_ = lean_ctor_get(v_linterOption_1046_, 1);
lean_dec(v_unused_1071_);
v___x_1054_ = v_linterOption_1046_;
v_isShared_1055_ = v_isSharedCheck_1070_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_name_1052_);
lean_dec(v_linterOption_1046_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1070_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1059_; 
v___x_1056_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__1);
lean_inc(v_name_1052_);
v___x_1057_ = l_Lean_MessageData_ofName(v_name_1052_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set_tag(v___x_1054_, 7);
lean_ctor_set(v___x_1054_, 1, v___x_1057_);
lean_ctor_set(v___x_1054_, 0, v___x_1056_);
v___x_1059_ = v___x_1054_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v___x_1056_);
lean_ctor_set(v_reuseFailAlloc_1069_, 1, v___x_1057_);
v___x_1059_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v_disable_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1060_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___closed__3);
v___x_1061_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1059_);
lean_ctor_set(v___x_1061_, 1, v___x_1060_);
v_disable_1062_ = l_Lean_MessageData_note(v___x_1061_);
v___x_1063_ = l_Lean_Linter_linterMessageTag;
v___x_1064_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1064_, 0, v_msg_1048_);
lean_ctor_set(v___x_1064_, 1, v_disable_1062_);
v___x_1065_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1063_);
lean_ctor_set(v___x_1065_, 1, v___x_1064_);
v___x_1066_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1066_, 0, v_name_1052_);
lean_ctor_set(v___x_1066_, 1, v___x_1065_);
lean_inc(v_stx_1047_);
v___x_1067_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_1067_, 0, v_stx_1047_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
v___x_1068_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2(v_stx_1047_, v___x_1067_, v___y_1049_, v___y_1050_);
lean_dec(v_stx_1047_);
return v___x_1068_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2___boxed(lean_object* v_linterOption_1072_, lean_object* v_stx_1073_, lean_object* v_msg_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2(v_linterOption_1072_, v_stx_1073_, v_msg_1074_, v___y_1075_, v___y_1076_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
return v_res_1078_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Linter_List_indexLinter_spec__1(lean_object* v_a_1079_, lean_object* v_x_1080_){
_start:
{
if (lean_obj_tag(v_x_1080_) == 0)
{
uint8_t v___x_1081_; 
v___x_1081_ = 0;
return v___x_1081_;
}
else
{
lean_object* v_head_1082_; lean_object* v_tail_1083_; uint8_t v___x_1084_; 
v_head_1082_ = lean_ctor_get(v_x_1080_, 0);
v_tail_1083_ = lean_ctor_get(v_x_1080_, 1);
v___x_1084_ = lean_string_dec_eq(v_a_1079_, v_head_1082_);
if (v___x_1084_ == 0)
{
v_x_1080_ = v_tail_1083_;
goto _start;
}
else
{
return v___x_1084_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Linter_List_indexLinter_spec__1___boxed(lean_object* v_a_1086_, lean_object* v_x_1087_){
_start:
{
uint8_t v_res_1088_; lean_object* v_r_1089_; 
v_res_1088_ = l_List_elem___at___00Lean_Linter_List_indexLinter_spec__1(v_a_1086_, v_x_1087_);
lean_dec(v_x_1087_);
lean_dec_ref(v_a_1086_);
v_r_1089_ = lean_box(v_res_1088_);
return v_r_1089_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1091_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg___closed__0));
v___x_1092_ = l_Lean_stringToMessageData(v___x_1091_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg(lean_object* v_as_x27_1093_, lean_object* v_b_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_){
_start:
{
if (lean_obj_tag(v_as_x27_1093_) == 0)
{
lean_object* v___x_1098_; 
v___x_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1098_, 0, v_b_1094_);
return v___x_1098_;
}
else
{
lean_object* v_head_1099_; lean_object* v_tail_1100_; lean_object* v_fst_1101_; lean_object* v_snd_1102_; lean_object* v___x_1103_; 
v_head_1099_ = lean_ctor_get(v_as_x27_1093_, 0);
v_tail_1100_ = lean_ctor_get(v_as_x27_1093_, 1);
v_fst_1101_ = lean_ctor_get(v_head_1099_, 0);
v_snd_1102_ = lean_ctor_get(v_head_1099_, 1);
v___x_1103_ = lean_box(0);
if (lean_obj_tag(v_snd_1102_) == 1)
{
lean_object* v_str_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; uint8_t v___x_1107_; 
v_str_1104_ = lean_ctor_get(v_snd_1102_, 1);
v___x_1105_ = ((lean_object*)(l_Lean_Linter_List_allowedWidths));
lean_inc_ref(v_str_1104_);
v___x_1106_ = l_Lean_Linter_List_stripBinderName(v_str_1104_);
v___x_1107_ = l_List_elem___at___00Lean_Linter_List_indexLinter_spec__1(v___x_1106_, v___x_1105_);
lean_dec_ref(v___x_1106_);
if (v___x_1107_ == 0)
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1108_ = l_Lean_Linter_List_linter_indexVariables;
v___x_1109_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg___closed__1, &l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg___closed__1);
lean_inc_ref(v_str_1104_);
v___x_1110_ = l_Lean_stringToMessageData(v_str_1104_);
v___x_1111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1109_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
lean_inc(v_fst_1101_);
v___x_1112_ = l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2(v___x_1108_, v_fst_1101_, v___x_1111_, v___y_1095_, v___y_1096_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_dec_ref_known(v___x_1112_, 1);
v_as_x27_1093_ = v_tail_1100_;
v_b_1094_ = v___x_1103_;
goto _start;
}
else
{
return v___x_1112_;
}
}
else
{
v_as_x27_1093_ = v_tail_1100_;
v_b_1094_ = v___x_1103_;
goto _start;
}
}
else
{
v_as_x27_1093_ = v_tail_1100_;
v_b_1094_ = v___x_1103_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg___boxed(lean_object* v_as_x27_1116_, lean_object* v_b_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg(v_as_x27_1116_, v_b_1117_, v___y_1118_, v___y_1119_);
lean_dec(v___y_1119_);
lean_dec_ref(v___y_1118_);
lean_dec(v_as_x27_1116_);
return v_res_1121_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1123_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg___closed__0));
v___x_1124_ = l_Lean_stringToMessageData(v___x_1123_);
return v___x_1124_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg(lean_object* v_as_x27_1125_, lean_object* v_b_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_){
_start:
{
if (lean_obj_tag(v_as_x27_1125_) == 0)
{
lean_object* v___x_1130_; 
v___x_1130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1130_, 0, v_b_1126_);
return v___x_1130_;
}
else
{
lean_object* v_head_1131_; lean_object* v_tail_1132_; lean_object* v_fst_1133_; lean_object* v_snd_1134_; lean_object* v___x_1135_; 
v_head_1131_ = lean_ctor_get(v_as_x27_1125_, 0);
v_tail_1132_ = lean_ctor_get(v_as_x27_1125_, 1);
v_fst_1133_ = lean_ctor_get(v_head_1131_, 0);
v_snd_1134_ = lean_ctor_get(v_head_1131_, 1);
v___x_1135_ = lean_box(0);
if (lean_obj_tag(v_snd_1134_) == 1)
{
lean_object* v_str_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; uint8_t v___x_1139_; 
v_str_1136_ = lean_ctor_get(v_snd_1134_, 1);
v___x_1137_ = ((lean_object*)(l_Lean_Linter_List_allowedBitVecWidths));
lean_inc_ref(v_str_1136_);
v___x_1138_ = l_Lean_Linter_List_stripBinderName(v_str_1136_);
v___x_1139_ = l_List_elem___at___00Lean_Linter_List_indexLinter_spec__1(v___x_1138_, v___x_1137_);
lean_dec_ref(v___x_1138_);
if (v___x_1139_ == 0)
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1140_ = l_Lean_Linter_List_linter_indexVariables;
v___x_1141_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg___closed__1, &l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg___closed__1);
lean_inc_ref(v_str_1136_);
v___x_1142_ = l_Lean_stringToMessageData(v_str_1136_);
v___x_1143_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1141_);
lean_ctor_set(v___x_1143_, 1, v___x_1142_);
lean_inc(v_fst_1133_);
v___x_1144_ = l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2(v___x_1140_, v_fst_1133_, v___x_1143_, v___y_1127_, v___y_1128_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_dec_ref_known(v___x_1144_, 1);
v_as_x27_1125_ = v_tail_1132_;
v_b_1126_ = v___x_1135_;
goto _start;
}
else
{
return v___x_1144_;
}
}
else
{
v_as_x27_1125_ = v_tail_1132_;
v_b_1126_ = v___x_1135_;
goto _start;
}
}
else
{
v_as_x27_1125_ = v_tail_1132_;
v_b_1126_ = v___x_1135_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg___boxed(lean_object* v_as_x27_1148_, lean_object* v_b_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
lean_object* v_res_1153_; 
v_res_1153_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg(v_as_x27_1148_, v_b_1149_, v___y_1150_, v___y_1151_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
lean_dec(v_as_x27_1148_);
return v_res_1153_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1155_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg___closed__0));
v___x_1156_ = l_Lean_stringToMessageData(v___x_1155_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg(lean_object* v_as_x27_1157_, lean_object* v_b_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
if (lean_obj_tag(v_as_x27_1157_) == 0)
{
lean_object* v___x_1162_; 
v___x_1162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1162_, 0, v_b_1158_);
return v___x_1162_;
}
else
{
lean_object* v_head_1163_; lean_object* v_tail_1164_; lean_object* v_fst_1165_; lean_object* v_snd_1166_; lean_object* v___x_1167_; 
v_head_1163_ = lean_ctor_get(v_as_x27_1157_, 0);
v_tail_1164_ = lean_ctor_get(v_as_x27_1157_, 1);
v_fst_1165_ = lean_ctor_get(v_head_1163_, 0);
v_snd_1166_ = lean_ctor_get(v_head_1163_, 1);
v___x_1167_ = lean_box(0);
if (lean_obj_tag(v_snd_1166_) == 1)
{
lean_object* v_str_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; uint8_t v___x_1171_; 
v_str_1168_ = lean_ctor_get(v_snd_1166_, 1);
v___x_1169_ = ((lean_object*)(l_Lean_Linter_List_allowedIndices));
lean_inc_ref(v_str_1168_);
v___x_1170_ = l_Lean_Linter_List_stripBinderName(v_str_1168_);
v___x_1171_ = l_List_elem___at___00Lean_Linter_List_indexLinter_spec__1(v___x_1170_, v___x_1169_);
lean_dec_ref(v___x_1170_);
if (v___x_1171_ == 0)
{
lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1172_ = l_Lean_Linter_List_linter_indexVariables;
v___x_1173_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg___closed__1, &l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg___closed__1);
lean_inc_ref(v_str_1168_);
v___x_1174_ = l_Lean_stringToMessageData(v_str_1168_);
v___x_1175_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1173_);
lean_ctor_set(v___x_1175_, 1, v___x_1174_);
lean_inc(v_fst_1165_);
v___x_1176_ = l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2(v___x_1172_, v_fst_1165_, v___x_1175_, v___y_1159_, v___y_1160_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_dec_ref_known(v___x_1176_, 1);
v_as_x27_1157_ = v_tail_1164_;
v_b_1158_ = v___x_1167_;
goto _start;
}
else
{
return v___x_1176_;
}
}
else
{
v_as_x27_1157_ = v_tail_1164_;
v_b_1158_ = v___x_1167_;
goto _start;
}
}
else
{
v_as_x27_1157_ = v_tail_1164_;
v_b_1158_ = v___x_1167_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg___boxed(lean_object* v_as_x27_1180_, lean_object* v_b_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg(v_as_x27_1180_, v_b_1181_, v___y_1182_, v___y_1183_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
lean_dec(v_as_x27_1180_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10_spec__13(lean_object* v_as_1189_, size_t v_sz_1190_, size_t v_i_1191_, lean_object* v_b_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
uint8_t v___x_1196_; 
v___x_1196_ = lean_usize_dec_lt(v_i_1191_, v_sz_1190_);
if (v___x_1196_ == 0)
{
lean_object* v___x_1197_; 
v___x_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1197_, 0, v_b_1192_);
return v___x_1197_;
}
else
{
lean_object* v___x_1198_; lean_object* v_a_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
lean_dec_ref(v_b_1192_);
v___x_1198_ = lean_box(0);
v_a_1199_ = lean_array_uget_borrowed(v_as_1189_, v_i_1191_);
lean_inc(v_a_1199_);
v___x_1200_ = l_Lean_Linter_List_numericalIndices(v_a_1199_);
v___x_1201_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg(v___x_1200_, v___x_1198_, v___y_1193_, v___y_1194_);
lean_dec(v___x_1200_);
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
lean_dec_ref_known(v___x_1201_, 1);
lean_inc(v_a_1199_);
v___x_1202_ = l_Lean_Linter_List_numericalWidths(v_a_1199_);
v___x_1203_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg(v___x_1202_, v___x_1198_, v___y_1193_, v___y_1194_);
lean_dec(v___x_1202_);
if (lean_obj_tag(v___x_1203_) == 0)
{
lean_object* v___x_1204_; lean_object* v___x_1205_; 
lean_dec_ref_known(v___x_1203_, 1);
lean_inc(v_a_1199_);
v___x_1204_ = l_Lean_Linter_List_bitVecWidths(v_a_1199_);
v___x_1205_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg(v___x_1204_, v___x_1198_, v___y_1193_, v___y_1194_);
lean_dec(v___x_1204_);
if (lean_obj_tag(v___x_1205_) == 0)
{
lean_object* v___x_1206_; size_t v___x_1207_; size_t v___x_1208_; 
lean_dec_ref_known(v___x_1205_, 1);
v___x_1206_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10_spec__13___closed__0));
v___x_1207_ = ((size_t)1ULL);
v___x_1208_ = lean_usize_add(v_i_1191_, v___x_1207_);
v_i_1191_ = v___x_1208_;
v_b_1192_ = v___x_1206_;
goto _start;
}
else
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1217_; 
v_a_1210_ = lean_ctor_get(v___x_1205_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1205_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1212_ = v___x_1205_;
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1205_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
if (v_isShared_1213_ == 0)
{
v___x_1215_ = v___x_1212_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_a_1210_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
}
}
else
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
v_a_1218_ = lean_ctor_get(v___x_1203_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1203_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1203_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1203_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
else
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
v_a_1226_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1228_ = v___x_1201_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1201_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_a_1226_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10_spec__13___boxed(lean_object* v_as_1234_, lean_object* v_sz_1235_, lean_object* v_i_1236_, lean_object* v_b_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
size_t v_sz_boxed_1241_; size_t v_i_boxed_1242_; lean_object* v_res_1243_; 
v_sz_boxed_1241_ = lean_unbox_usize(v_sz_1235_);
lean_dec(v_sz_1235_);
v_i_boxed_1242_ = lean_unbox_usize(v_i_1236_);
lean_dec(v_i_1236_);
v_res_1243_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10_spec__13(v_as_1234_, v_sz_boxed_1241_, v_i_boxed_1242_, v_b_1237_, v___y_1238_, v___y_1239_);
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_dec_ref(v_as_1234_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10(lean_object* v_as_1244_, size_t v_sz_1245_, size_t v_i_1246_, lean_object* v_b_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_){
_start:
{
uint8_t v___x_1251_; 
v___x_1251_ = lean_usize_dec_lt(v_i_1246_, v_sz_1245_);
if (v___x_1251_ == 0)
{
lean_object* v___x_1252_; 
v___x_1252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1252_, 0, v_b_1247_);
return v___x_1252_;
}
else
{
lean_object* v___x_1253_; lean_object* v_a_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
lean_dec_ref(v_b_1247_);
v___x_1253_ = lean_box(0);
v_a_1254_ = lean_array_uget_borrowed(v_as_1244_, v_i_1246_);
lean_inc(v_a_1254_);
v___x_1255_ = l_Lean_Linter_List_numericalIndices(v_a_1254_);
v___x_1256_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg(v___x_1255_, v___x_1253_, v___y_1248_, v___y_1249_);
lean_dec(v___x_1255_);
if (lean_obj_tag(v___x_1256_) == 0)
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
lean_dec_ref_known(v___x_1256_, 1);
lean_inc(v_a_1254_);
v___x_1257_ = l_Lean_Linter_List_numericalWidths(v_a_1254_);
v___x_1258_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg(v___x_1257_, v___x_1253_, v___y_1248_, v___y_1249_);
lean_dec(v___x_1257_);
if (lean_obj_tag(v___x_1258_) == 0)
{
lean_object* v___x_1259_; lean_object* v___x_1260_; 
lean_dec_ref_known(v___x_1258_, 1);
lean_inc(v_a_1254_);
v___x_1259_ = l_Lean_Linter_List_bitVecWidths(v_a_1254_);
v___x_1260_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg(v___x_1259_, v___x_1253_, v___y_1248_, v___y_1249_);
lean_dec(v___x_1259_);
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v___x_1261_; size_t v___x_1262_; size_t v___x_1263_; lean_object* v___x_1264_; 
lean_dec_ref_known(v___x_1260_, 1);
v___x_1261_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10_spec__13___closed__0));
v___x_1262_ = ((size_t)1ULL);
v___x_1263_ = lean_usize_add(v_i_1246_, v___x_1262_);
v___x_1264_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10_spec__13(v_as_1244_, v_sz_1245_, v___x_1263_, v___x_1261_, v___y_1248_, v___y_1249_);
return v___x_1264_;
}
else
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1272_; 
v_a_1265_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1267_ = v___x_1260_;
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v___x_1260_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___x_1270_; 
if (v_isShared_1268_ == 0)
{
v___x_1270_ = v___x_1267_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_a_1265_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
}
else
{
lean_object* v_a_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1280_; 
v_a_1273_ = lean_ctor_get(v___x_1258_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1258_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1275_ = v___x_1258_;
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_a_1273_);
lean_dec(v___x_1258_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1278_; 
if (v_isShared_1276_ == 0)
{
v___x_1278_ = v___x_1275_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v_a_1273_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
}
else
{
lean_object* v_a_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1288_; 
v_a_1281_ = lean_ctor_get(v___x_1256_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1256_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1283_ = v___x_1256_;
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_a_1281_);
lean_dec(v___x_1256_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1286_; 
if (v_isShared_1284_ == 0)
{
v___x_1286_ = v___x_1283_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_a_1281_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10___boxed(lean_object* v_as_1289_, lean_object* v_sz_1290_, lean_object* v_i_1291_, lean_object* v_b_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_){
_start:
{
size_t v_sz_boxed_1296_; size_t v_i_boxed_1297_; lean_object* v_res_1298_; 
v_sz_boxed_1296_ = lean_unbox_usize(v_sz_1290_);
lean_dec(v_sz_1290_);
v_i_boxed_1297_ = lean_unbox_usize(v_i_1291_);
lean_dec(v_i_1291_);
v_res_1298_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10(v_as_1289_, v_sz_boxed_1296_, v_i_boxed_1297_, v_b_1292_, v___y_1293_, v___y_1294_);
lean_dec(v___y_1294_);
lean_dec_ref(v___y_1293_);
lean_dec_ref(v_as_1289_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7(lean_object* v_init_1299_, lean_object* v_n_1300_, lean_object* v_b_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_){
_start:
{
if (lean_obj_tag(v_n_1300_) == 0)
{
lean_object* v_cs_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; size_t v_sz_1308_; size_t v___x_1309_; lean_object* v___x_1310_; 
v_cs_1305_ = lean_ctor_get(v_n_1300_, 0);
v___x_1306_ = lean_box(0);
v___x_1307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
lean_ctor_set(v___x_1307_, 1, v_b_1301_);
v_sz_1308_ = lean_array_size(v_cs_1305_);
v___x_1309_ = ((size_t)0ULL);
v___x_1310_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__9(v_init_1299_, v_cs_1305_, v_sz_1308_, v___x_1309_, v___x_1307_, v___y_1302_, v___y_1303_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1325_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1313_ = v___x_1310_;
v_isShared_1314_ = v_isSharedCheck_1325_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1310_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1325_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v_fst_1315_; 
v_fst_1315_ = lean_ctor_get(v_a_1311_, 0);
if (lean_obj_tag(v_fst_1315_) == 0)
{
lean_object* v_snd_1316_; lean_object* v___x_1317_; lean_object* v___x_1319_; 
v_snd_1316_ = lean_ctor_get(v_a_1311_, 1);
lean_inc(v_snd_1316_);
lean_dec(v_a_1311_);
v___x_1317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1317_, 0, v_snd_1316_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 0, v___x_1317_);
v___x_1319_ = v___x_1313_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v___x_1317_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
else
{
lean_object* v_val_1321_; lean_object* v___x_1323_; 
lean_inc_ref(v_fst_1315_);
lean_dec(v_a_1311_);
v_val_1321_ = lean_ctor_get(v_fst_1315_, 0);
lean_inc(v_val_1321_);
lean_dec_ref_known(v_fst_1315_, 1);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 0, v_val_1321_);
v___x_1323_ = v___x_1313_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_val_1321_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
else
{
lean_object* v_a_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1333_; 
v_a_1326_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1328_ = v___x_1310_;
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_a_1326_);
lean_dec(v___x_1310_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v___x_1331_; 
if (v_isShared_1329_ == 0)
{
v___x_1331_ = v___x_1328_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v_a_1326_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
else
{
lean_object* v_vs_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; size_t v_sz_1337_; size_t v___x_1338_; lean_object* v___x_1339_; 
v_vs_1334_ = lean_ctor_get(v_n_1300_, 0);
v___x_1335_ = lean_box(0);
v___x_1336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1335_);
lean_ctor_set(v___x_1336_, 1, v_b_1301_);
v_sz_1337_ = lean_array_size(v_vs_1334_);
v___x_1338_ = ((size_t)0ULL);
v___x_1339_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10(v_vs_1334_, v_sz_1337_, v___x_1338_, v___x_1336_, v___y_1302_, v___y_1303_);
if (lean_obj_tag(v___x_1339_) == 0)
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1354_; 
v_a_1340_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1342_ = v___x_1339_;
v_isShared_1343_ = v_isSharedCheck_1354_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1339_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1354_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v_fst_1344_; 
v_fst_1344_ = lean_ctor_get(v_a_1340_, 0);
if (lean_obj_tag(v_fst_1344_) == 0)
{
lean_object* v_snd_1345_; lean_object* v___x_1346_; lean_object* v___x_1348_; 
v_snd_1345_ = lean_ctor_get(v_a_1340_, 1);
lean_inc(v_snd_1345_);
lean_dec(v_a_1340_);
v___x_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1346_, 0, v_snd_1345_);
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 0, v___x_1346_);
v___x_1348_ = v___x_1342_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v___x_1346_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
else
{
lean_object* v_val_1350_; lean_object* v___x_1352_; 
lean_inc_ref(v_fst_1344_);
lean_dec(v_a_1340_);
v_val_1350_ = lean_ctor_get(v_fst_1344_, 0);
lean_inc(v_val_1350_);
lean_dec_ref_known(v_fst_1344_, 1);
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 0, v_val_1350_);
v___x_1352_ = v___x_1342_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_val_1350_);
v___x_1352_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
return v___x_1352_;
}
}
}
}
else
{
lean_object* v_a_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1362_; 
v_a_1355_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1357_ = v___x_1339_;
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_a_1355_);
lean_dec(v___x_1339_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1360_; 
if (v_isShared_1358_ == 0)
{
v___x_1360_ = v___x_1357_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v_a_1355_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__9(lean_object* v_init_1363_, lean_object* v_as_1364_, size_t v_sz_1365_, size_t v_i_1366_, lean_object* v_b_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_){
_start:
{
uint8_t v___x_1371_; 
v___x_1371_ = lean_usize_dec_lt(v_i_1366_, v_sz_1365_);
if (v___x_1371_ == 0)
{
lean_object* v___x_1372_; 
v___x_1372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1372_, 0, v_b_1367_);
return v___x_1372_;
}
else
{
lean_object* v_snd_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1407_; 
v_snd_1373_ = lean_ctor_get(v_b_1367_, 1);
v_isSharedCheck_1407_ = !lean_is_exclusive(v_b_1367_);
if (v_isSharedCheck_1407_ == 0)
{
lean_object* v_unused_1408_; 
v_unused_1408_ = lean_ctor_get(v_b_1367_, 0);
lean_dec(v_unused_1408_);
v___x_1375_ = v_b_1367_;
v_isShared_1376_ = v_isSharedCheck_1407_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_snd_1373_);
lean_dec(v_b_1367_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1407_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; lean_object* v_a_1378_; lean_object* v___x_1379_; 
v___x_1377_ = lean_box(0);
v_a_1378_ = lean_array_uget_borrowed(v_as_1364_, v_i_1366_);
lean_inc(v_snd_1373_);
v___x_1379_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7(v_init_1363_, v_a_1378_, v_snd_1373_, v___y_1368_, v___y_1369_);
if (lean_obj_tag(v___x_1379_) == 0)
{
lean_object* v_a_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1398_; 
v_a_1380_ = lean_ctor_get(v___x_1379_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1379_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1382_ = v___x_1379_;
v_isShared_1383_ = v_isSharedCheck_1398_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_a_1380_);
lean_dec(v___x_1379_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1398_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
if (lean_obj_tag(v_a_1380_) == 0)
{
lean_object* v___x_1384_; lean_object* v___x_1386_; 
v___x_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1384_, 0, v_a_1380_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v___x_1384_);
v___x_1386_ = v___x_1375_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v___x_1384_);
lean_ctor_set(v_reuseFailAlloc_1390_, 1, v_snd_1373_);
v___x_1386_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
lean_object* v___x_1388_; 
if (v_isShared_1383_ == 0)
{
lean_ctor_set(v___x_1382_, 0, v___x_1386_);
v___x_1388_ = v___x_1382_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v___x_1386_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
else
{
lean_object* v_a_1391_; lean_object* v___x_1393_; 
lean_del_object(v___x_1382_);
lean_dec(v_snd_1373_);
v_a_1391_ = lean_ctor_get(v_a_1380_, 0);
lean_inc(v_a_1391_);
lean_dec_ref_known(v_a_1380_, 1);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 1, v_a_1391_);
lean_ctor_set(v___x_1375_, 0, v___x_1377_);
v___x_1393_ = v___x_1375_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v___x_1377_);
lean_ctor_set(v_reuseFailAlloc_1397_, 1, v_a_1391_);
v___x_1393_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
size_t v___x_1394_; size_t v___x_1395_; 
v___x_1394_ = ((size_t)1ULL);
v___x_1395_ = lean_usize_add(v_i_1366_, v___x_1394_);
v_i_1366_ = v___x_1395_;
v_b_1367_ = v___x_1393_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1406_; 
lean_del_object(v___x_1375_);
lean_dec(v_snd_1373_);
v_a_1399_ = lean_ctor_get(v___x_1379_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1379_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1401_ = v___x_1379_;
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v___x_1379_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1404_; 
if (v_isShared_1402_ == 0)
{
v___x_1404_ = v___x_1401_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_a_1399_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__9___boxed(lean_object* v_init_1409_, lean_object* v_as_1410_, lean_object* v_sz_1411_, lean_object* v_i_1412_, lean_object* v_b_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
size_t v_sz_boxed_1417_; size_t v_i_boxed_1418_; lean_object* v_res_1419_; 
v_sz_boxed_1417_ = lean_unbox_usize(v_sz_1411_);
lean_dec(v_sz_1411_);
v_i_boxed_1418_ = lean_unbox_usize(v_i_1412_);
lean_dec(v_i_1412_);
v_res_1419_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__9(v_init_1409_, v_as_1410_, v_sz_boxed_1417_, v_i_boxed_1418_, v_b_1413_, v___y_1414_, v___y_1415_);
lean_dec(v___y_1415_);
lean_dec_ref(v___y_1414_);
lean_dec_ref(v_as_1410_);
return v_res_1419_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7___boxed(lean_object* v_init_1420_, lean_object* v_n_1421_, lean_object* v_b_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7(v_init_1420_, v_n_1421_, v_b_1422_, v___y_1423_, v___y_1424_);
lean_dec(v___y_1424_);
lean_dec_ref(v___y_1423_);
lean_dec_ref(v_n_1421_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8_spec__12(lean_object* v_as_1430_, size_t v_sz_1431_, size_t v_i_1432_, lean_object* v_b_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_){
_start:
{
uint8_t v___x_1437_; 
v___x_1437_ = lean_usize_dec_lt(v_i_1432_, v_sz_1431_);
if (v___x_1437_ == 0)
{
lean_object* v___x_1438_; 
v___x_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1438_, 0, v_b_1433_);
return v___x_1438_;
}
else
{
lean_object* v___x_1439_; lean_object* v_a_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
lean_dec_ref(v_b_1433_);
v___x_1439_ = lean_box(0);
v_a_1440_ = lean_array_uget_borrowed(v_as_1430_, v_i_1432_);
lean_inc(v_a_1440_);
v___x_1441_ = l_Lean_Linter_List_numericalIndices(v_a_1440_);
v___x_1442_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg(v___x_1441_, v___x_1439_, v___y_1434_, v___y_1435_);
lean_dec(v___x_1441_);
if (lean_obj_tag(v___x_1442_) == 0)
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
lean_dec_ref_known(v___x_1442_, 1);
lean_inc(v_a_1440_);
v___x_1443_ = l_Lean_Linter_List_numericalWidths(v_a_1440_);
v___x_1444_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg(v___x_1443_, v___x_1439_, v___y_1434_, v___y_1435_);
lean_dec(v___x_1443_);
if (lean_obj_tag(v___x_1444_) == 0)
{
lean_object* v___x_1445_; lean_object* v___x_1446_; 
lean_dec_ref_known(v___x_1444_, 1);
lean_inc(v_a_1440_);
v___x_1445_ = l_Lean_Linter_List_bitVecWidths(v_a_1440_);
v___x_1446_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg(v___x_1445_, v___x_1439_, v___y_1434_, v___y_1435_);
lean_dec(v___x_1445_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v___x_1447_; size_t v___x_1448_; size_t v___x_1449_; 
lean_dec_ref_known(v___x_1446_, 1);
v___x_1447_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8_spec__12___closed__0));
v___x_1448_ = ((size_t)1ULL);
v___x_1449_ = lean_usize_add(v_i_1432_, v___x_1448_);
v_i_1432_ = v___x_1449_;
v_b_1433_ = v___x_1447_;
goto _start;
}
else
{
lean_object* v_a_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1458_; 
v_a_1451_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1458_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1453_ = v___x_1446_;
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_a_1451_);
lean_dec(v___x_1446_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1456_; 
if (v_isShared_1454_ == 0)
{
v___x_1456_ = v___x_1453_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v_a_1451_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
return v___x_1456_;
}
}
}
}
else
{
lean_object* v_a_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1466_; 
v_a_1459_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1461_ = v___x_1444_;
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_a_1459_);
lean_dec(v___x_1444_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v___x_1464_; 
if (v_isShared_1462_ == 0)
{
v___x_1464_ = v___x_1461_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v_a_1459_);
v___x_1464_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
return v___x_1464_;
}
}
}
}
else
{
lean_object* v_a_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1474_; 
v_a_1467_ = lean_ctor_get(v___x_1442_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1442_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1469_ = v___x_1442_;
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_a_1467_);
lean_dec(v___x_1442_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1472_; 
if (v_isShared_1470_ == 0)
{
v___x_1472_ = v___x_1469_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_a_1467_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8_spec__12___boxed(lean_object* v_as_1475_, lean_object* v_sz_1476_, lean_object* v_i_1477_, lean_object* v_b_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
size_t v_sz_boxed_1482_; size_t v_i_boxed_1483_; lean_object* v_res_1484_; 
v_sz_boxed_1482_ = lean_unbox_usize(v_sz_1476_);
lean_dec(v_sz_1476_);
v_i_boxed_1483_ = lean_unbox_usize(v_i_1477_);
lean_dec(v_i_1477_);
v_res_1484_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8_spec__12(v_as_1475_, v_sz_boxed_1482_, v_i_boxed_1483_, v_b_1478_, v___y_1479_, v___y_1480_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec_ref(v_as_1475_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8(lean_object* v_as_1485_, size_t v_sz_1486_, size_t v_i_1487_, lean_object* v_b_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_){
_start:
{
uint8_t v___x_1492_; 
v___x_1492_ = lean_usize_dec_lt(v_i_1487_, v_sz_1486_);
if (v___x_1492_ == 0)
{
lean_object* v___x_1493_; 
v___x_1493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1493_, 0, v_b_1488_);
return v___x_1493_;
}
else
{
lean_object* v___x_1494_; lean_object* v_a_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
lean_dec_ref(v_b_1488_);
v___x_1494_ = lean_box(0);
v_a_1495_ = lean_array_uget_borrowed(v_as_1485_, v_i_1487_);
lean_inc(v_a_1495_);
v___x_1496_ = l_Lean_Linter_List_numericalIndices(v_a_1495_);
v___x_1497_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg(v___x_1496_, v___x_1494_, v___y_1489_, v___y_1490_);
lean_dec(v___x_1496_);
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v___x_1498_; lean_object* v___x_1499_; 
lean_dec_ref_known(v___x_1497_, 1);
lean_inc(v_a_1495_);
v___x_1498_ = l_Lean_Linter_List_numericalWidths(v_a_1495_);
v___x_1499_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg(v___x_1498_, v___x_1494_, v___y_1489_, v___y_1490_);
lean_dec(v___x_1498_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v___x_1500_; lean_object* v___x_1501_; 
lean_dec_ref_known(v___x_1499_, 1);
lean_inc(v_a_1495_);
v___x_1500_ = l_Lean_Linter_List_bitVecWidths(v_a_1495_);
v___x_1501_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg(v___x_1500_, v___x_1494_, v___y_1489_, v___y_1490_);
lean_dec(v___x_1500_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v___x_1502_; size_t v___x_1503_; size_t v___x_1504_; lean_object* v___x_1505_; 
lean_dec_ref_known(v___x_1501_, 1);
v___x_1502_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8_spec__12___closed__0));
v___x_1503_ = ((size_t)1ULL);
v___x_1504_ = lean_usize_add(v_i_1487_, v___x_1503_);
v___x_1505_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8_spec__12(v_as_1485_, v_sz_1486_, v___x_1504_, v___x_1502_, v___y_1489_, v___y_1490_);
return v___x_1505_;
}
else
{
lean_object* v_a_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1513_; 
v_a_1506_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1508_ = v___x_1501_;
v_isShared_1509_ = v_isSharedCheck_1513_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_a_1506_);
lean_dec(v___x_1501_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1513_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v___x_1511_; 
if (v_isShared_1509_ == 0)
{
v___x_1511_ = v___x_1508_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v_a_1506_);
v___x_1511_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
return v___x_1511_;
}
}
}
}
else
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1521_; 
v_a_1514_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1516_ = v___x_1499_;
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1499_);
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
v_a_1522_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1529_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1529_ == 0)
{
v___x_1524_ = v___x_1497_;
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_a_1522_);
lean_dec(v___x_1497_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8___boxed(lean_object* v_as_1530_, lean_object* v_sz_1531_, lean_object* v_i_1532_, lean_object* v_b_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_){
_start:
{
size_t v_sz_boxed_1537_; size_t v_i_boxed_1538_; lean_object* v_res_1539_; 
v_sz_boxed_1537_ = lean_unbox_usize(v_sz_1531_);
lean_dec(v_sz_1531_);
v_i_boxed_1538_ = lean_unbox_usize(v_i_1532_);
lean_dec(v_i_1532_);
v_res_1539_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8(v_as_1530_, v_sz_boxed_1537_, v_i_boxed_1538_, v_b_1533_, v___y_1534_, v___y_1535_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec_ref(v_as_1530_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6(lean_object* v_t_1540_, lean_object* v_init_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_){
_start:
{
lean_object* v_root_1545_; lean_object* v_tail_1546_; lean_object* v___x_1547_; 
v_root_1545_ = lean_ctor_get(v_t_1540_, 0);
v_tail_1546_ = lean_ctor_get(v_t_1540_, 1);
v___x_1547_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7(v_init_1541_, v_root_1545_, v_init_1541_, v___y_1542_, v___y_1543_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1584_; 
v_a_1548_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1584_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1584_ == 0)
{
v___x_1550_ = v___x_1547_;
v_isShared_1551_ = v_isSharedCheck_1584_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1547_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1584_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
if (lean_obj_tag(v_a_1548_) == 0)
{
lean_object* v_a_1552_; lean_object* v___x_1554_; 
v_a_1552_ = lean_ctor_get(v_a_1548_, 0);
lean_inc(v_a_1552_);
lean_dec_ref_known(v_a_1548_, 1);
if (v_isShared_1551_ == 0)
{
lean_ctor_set(v___x_1550_, 0, v_a_1552_);
v___x_1554_ = v___x_1550_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_a_1552_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
else
{
lean_object* v_a_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; size_t v_sz_1559_; size_t v___x_1560_; lean_object* v___x_1561_; 
lean_del_object(v___x_1550_);
v_a_1556_ = lean_ctor_get(v_a_1548_, 0);
lean_inc(v_a_1556_);
lean_dec_ref_known(v_a_1548_, 1);
v___x_1557_ = lean_box(0);
v___x_1558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1557_);
lean_ctor_set(v___x_1558_, 1, v_a_1556_);
v_sz_1559_ = lean_array_size(v_tail_1546_);
v___x_1560_ = ((size_t)0ULL);
v___x_1561_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8(v_tail_1546_, v_sz_1559_, v___x_1560_, v___x_1558_, v___y_1542_, v___y_1543_);
if (lean_obj_tag(v___x_1561_) == 0)
{
lean_object* v_a_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1575_; 
v_a_1562_ = lean_ctor_get(v___x_1561_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1561_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1564_ = v___x_1561_;
v_isShared_1565_ = v_isSharedCheck_1575_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_a_1562_);
lean_dec(v___x_1561_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1575_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v_fst_1566_; 
v_fst_1566_ = lean_ctor_get(v_a_1562_, 0);
if (lean_obj_tag(v_fst_1566_) == 0)
{
lean_object* v_snd_1567_; lean_object* v___x_1569_; 
v_snd_1567_ = lean_ctor_get(v_a_1562_, 1);
lean_inc(v_snd_1567_);
lean_dec(v_a_1562_);
if (v_isShared_1565_ == 0)
{
lean_ctor_set(v___x_1564_, 0, v_snd_1567_);
v___x_1569_ = v___x_1564_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_snd_1567_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
else
{
lean_object* v_val_1571_; lean_object* v___x_1573_; 
lean_inc_ref(v_fst_1566_);
lean_dec(v_a_1562_);
v_val_1571_ = lean_ctor_get(v_fst_1566_, 0);
lean_inc(v_val_1571_);
lean_dec_ref_known(v_fst_1566_, 1);
if (v_isShared_1565_ == 0)
{
lean_ctor_set(v___x_1564_, 0, v_val_1571_);
v___x_1573_ = v___x_1564_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_val_1571_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
}
}
}
}
else
{
lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1583_; 
v_a_1576_ = lean_ctor_get(v___x_1561_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1561_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1578_ = v___x_1561_;
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_dec(v___x_1561_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1581_; 
if (v_isShared_1579_ == 0)
{
v___x_1581_ = v___x_1578_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_a_1576_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
}
}
}
else
{
lean_object* v_a_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1592_; 
v_a_1585_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1592_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1587_ = v___x_1547_;
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_a_1585_);
lean_dec(v___x_1547_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1590_; 
if (v_isShared_1588_ == 0)
{
v___x_1590_ = v___x_1587_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_a_1585_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
return v___x_1590_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6___boxed(lean_object* v_t_1593_, lean_object* v_init_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = l_Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6(v_t_1593_, v_init_1594_, v___y_1595_, v___y_1596_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
lean_dec_ref(v_t_1593_);
return v_res_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_indexLinter___lam__0(lean_object* v_stx_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v_scopes_1611_; lean_object* v___x_1612_; lean_object* v_opts_1613_; lean_object* v___x_1614_; lean_object* v_name_1615_; lean_object* v_map_1616_; lean_object* v___x_1617_; 
v___x_1606_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1607_ = lean_st_ref_get(v___y_1601_);
v_scopes_1611_ = lean_ctor_get(v___x_1607_, 2);
lean_inc(v_scopes_1611_);
lean_dec(v___x_1607_);
v___x_1612_ = l_List_head_x21___redArg(v___x_1606_, v_scopes_1611_);
lean_dec(v_scopes_1611_);
v_opts_1613_ = lean_ctor_get(v___x_1612_, 1);
lean_inc_ref(v_opts_1613_);
lean_dec(v___x_1612_);
v___x_1614_ = l_Lean_Linter_List_linter_indexVariables;
v_name_1615_ = lean_ctor_get(v___x_1614_, 0);
v_map_1616_ = lean_ctor_get(v_opts_1613_, 0);
lean_inc(v_map_1616_);
lean_dec_ref(v_opts_1613_);
v___x_1617_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1616_, v_name_1615_);
lean_dec(v_map_1616_);
if (lean_obj_tag(v___x_1617_) == 0)
{
goto v___jp_1608_;
}
else
{
lean_object* v_val_1618_; 
v_val_1618_ = lean_ctor_get(v___x_1617_, 0);
lean_inc(v_val_1618_);
lean_dec_ref_known(v___x_1617_, 1);
if (lean_obj_tag(v_val_1618_) == 1)
{
uint8_t v_v_1619_; 
v_v_1619_ = lean_ctor_get_uint8(v_val_1618_, 0);
lean_dec_ref_known(v_val_1618_, 0);
if (v_v_1619_ == 0)
{
goto v___jp_1608_;
}
else
{
lean_object* v___x_1620_; lean_object* v_messages_1621_; uint8_t v___x_1622_; 
v___x_1620_ = lean_st_ref_get(v___y_1601_);
v_messages_1621_ = lean_ctor_get(v___x_1620_, 1);
lean_inc_ref(v_messages_1621_);
lean_dec(v___x_1620_);
v___x_1622_ = l_Lean_MessageLog_hasErrors(v_messages_1621_);
lean_dec_ref(v_messages_1621_);
if (v___x_1622_ == 0)
{
lean_object* v___x_1623_; lean_object* v_infoState_1624_; uint8_t v_enabled_1625_; 
v___x_1623_ = lean_st_ref_get(v___y_1601_);
v_infoState_1624_ = lean_ctor_get(v___x_1623_, 8);
lean_inc_ref(v_infoState_1624_);
lean_dec(v___x_1623_);
v_enabled_1625_ = lean_ctor_get_uint8(v_infoState_1624_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1624_);
if (v_enabled_1625_ == 0)
{
goto v___jp_1603_;
}
else
{
lean_object* v___x_1626_; lean_object* v_a_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1626_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_List_indexLinter_spec__0___redArg(v___y_1601_);
v_a_1627_ = lean_ctor_get(v___x_1626_, 0);
lean_inc(v_a_1627_);
lean_dec_ref(v___x_1626_);
v___x_1628_ = lean_box(0);
v___x_1629_ = l_Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6(v_a_1627_, v___x_1628_, v___y_1600_, v___y_1601_);
lean_dec(v_a_1627_);
if (lean_obj_tag(v___x_1629_) == 0)
{
lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1636_; 
v_isSharedCheck_1636_ = !lean_is_exclusive(v___x_1629_);
if (v_isSharedCheck_1636_ == 0)
{
lean_object* v_unused_1637_; 
v_unused_1637_ = lean_ctor_get(v___x_1629_, 0);
lean_dec(v_unused_1637_);
v___x_1631_ = v___x_1629_;
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
else
{
lean_dec(v___x_1629_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1634_; 
if (v_isShared_1632_ == 0)
{
lean_ctor_set(v___x_1631_, 0, v___x_1628_);
v___x_1634_ = v___x_1631_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v___x_1628_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
return v___x_1634_;
}
}
}
else
{
return v___x_1629_;
}
}
}
else
{
goto v___jp_1603_;
}
}
}
else
{
lean_dec(v_val_1618_);
goto v___jp_1608_;
}
}
v___jp_1603_:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; 
v___x_1604_ = lean_box(0);
v___x_1605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1604_);
return v___x_1605_;
}
v___jp_1608_:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1609_ = lean_box(0);
v___x_1610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1609_);
return v___x_1610_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_indexLinter___lam__0___boxed(lean_object* v_stx_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l_Lean_Linter_List_indexLinter___lam__0(v_stx_1638_, v___y_1639_, v___y_1640_);
lean_dec(v___y_1640_);
lean_dec_ref(v___y_1639_);
lean_dec(v_stx_1638_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3(lean_object* v_as_1656_, lean_object* v_as_x27_1657_, lean_object* v_b_1658_, lean_object* v_a_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___redArg(v_as_x27_1657_, v_b_1658_, v___y_1660_, v___y_1661_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3___boxed(lean_object* v_as_1664_, lean_object* v_as_x27_1665_, lean_object* v_b_1666_, lean_object* v_a_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_){
_start:
{
lean_object* v_res_1671_; 
v_res_1671_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__3(v_as_1664_, v_as_x27_1665_, v_b_1666_, v_a_1667_, v___y_1668_, v___y_1669_);
lean_dec(v___y_1669_);
lean_dec_ref(v___y_1668_);
lean_dec(v_as_x27_1665_);
lean_dec(v_as_1664_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4(lean_object* v_as_1672_, lean_object* v_as_x27_1673_, lean_object* v_b_1674_, lean_object* v_a_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_){
_start:
{
lean_object* v___x_1679_; 
v___x_1679_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___redArg(v_as_x27_1673_, v_b_1674_, v___y_1676_, v___y_1677_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4___boxed(lean_object* v_as_1680_, lean_object* v_as_x27_1681_, lean_object* v_b_1682_, lean_object* v_a_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_){
_start:
{
lean_object* v_res_1687_; 
v_res_1687_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__4(v_as_1680_, v_as_x27_1681_, v_b_1682_, v_a_1683_, v___y_1684_, v___y_1685_);
lean_dec(v___y_1685_);
lean_dec_ref(v___y_1684_);
lean_dec(v_as_x27_1681_);
lean_dec(v_as_1680_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5(lean_object* v_as_1688_, lean_object* v_as_x27_1689_, lean_object* v_b_1690_, lean_object* v_a_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_){
_start:
{
lean_object* v___x_1695_; 
v___x_1695_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___redArg(v_as_x27_1689_, v_b_1690_, v___y_1692_, v___y_1693_);
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5___boxed(lean_object* v_as_1696_, lean_object* v_as_x27_1697_, lean_object* v_b_1698_, lean_object* v_a_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
lean_object* v_res_1703_; 
v_res_1703_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_indexLinter_spec__5(v_as_1696_, v_as_x27_1697_, v_b_1698_, v_a_1699_, v___y_1700_, v___y_1701_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec(v_as_x27_1697_);
lean_dec(v_as_1696_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8(lean_object* v_msgData_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_){
_start:
{
lean_object* v___x_1708_; 
v___x_1708_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___redArg(v_msgData_1704_, v___y_1706_);
return v___x_1708_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8___boxed(lean_object* v_msgData_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2_spec__2_spec__3_spec__8(v_msgData_1709_, v___y_1710_, v___y_1711_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_88313950____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1715_ = ((lean_object*)(l_Lean_Linter_List_indexLinter));
v___x_1716_ = l_Lean_Elab_Command_addLinter(v___x_1715_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_88313950____hygCtx___hyg_2____boxed(lean_object* v_a_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_88313950____hygCtx___hyg_2_();
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_List_binders_spec__0___redArg(lean_object* v_e_1777_, lean_object* v___y_1778_){
_start:
{
uint8_t v___x_1780_; 
v___x_1780_ = l_Lean_Expr_hasMVar(v_e_1777_);
if (v___x_1780_ == 0)
{
lean_object* v___x_1781_; 
v___x_1781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1781_, 0, v_e_1777_);
return v___x_1781_;
}
else
{
lean_object* v___x_1782_; lean_object* v_mctx_1783_; lean_object* v___x_1784_; lean_object* v_fst_1785_; lean_object* v_snd_1786_; lean_object* v___x_1787_; lean_object* v_cache_1788_; lean_object* v_zetaDeltaFVarIds_1789_; lean_object* v_postponed_1790_; lean_object* v_diag_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1800_; 
v___x_1782_ = lean_st_ref_get(v___y_1778_);
v_mctx_1783_ = lean_ctor_get(v___x_1782_, 0);
lean_inc_ref(v_mctx_1783_);
lean_dec(v___x_1782_);
v___x_1784_ = l_Lean_instantiateMVarsCore(v_mctx_1783_, v_e_1777_);
v_fst_1785_ = lean_ctor_get(v___x_1784_, 0);
lean_inc(v_fst_1785_);
v_snd_1786_ = lean_ctor_get(v___x_1784_, 1);
lean_inc(v_snd_1786_);
lean_dec_ref(v___x_1784_);
v___x_1787_ = lean_st_ref_take(v___y_1778_);
v_cache_1788_ = lean_ctor_get(v___x_1787_, 1);
v_zetaDeltaFVarIds_1789_ = lean_ctor_get(v___x_1787_, 2);
v_postponed_1790_ = lean_ctor_get(v___x_1787_, 3);
v_diag_1791_ = lean_ctor_get(v___x_1787_, 4);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1800_ == 0)
{
lean_object* v_unused_1801_; 
v_unused_1801_ = lean_ctor_get(v___x_1787_, 0);
lean_dec(v_unused_1801_);
v___x_1793_ = v___x_1787_;
v_isShared_1794_ = v_isSharedCheck_1800_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_diag_1791_);
lean_inc(v_postponed_1790_);
lean_inc(v_zetaDeltaFVarIds_1789_);
lean_inc(v_cache_1788_);
lean_dec(v___x_1787_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1800_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v___x_1796_; 
if (v_isShared_1794_ == 0)
{
lean_ctor_set(v___x_1793_, 0, v_snd_1786_);
v___x_1796_ = v___x_1793_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_snd_1786_);
lean_ctor_set(v_reuseFailAlloc_1799_, 1, v_cache_1788_);
lean_ctor_set(v_reuseFailAlloc_1799_, 2, v_zetaDeltaFVarIds_1789_);
lean_ctor_set(v_reuseFailAlloc_1799_, 3, v_postponed_1790_);
lean_ctor_set(v_reuseFailAlloc_1799_, 4, v_diag_1791_);
v___x_1796_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1797_ = lean_st_ref_put(v___y_1778_, v___x_1796_);
v___x_1798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1798_, 0, v_fst_1785_);
return v___x_1798_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_List_binders_spec__0___redArg___boxed(lean_object* v_e_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l_Lean_instantiateMVars___at___00Lean_Linter_List_binders_spec__0___redArg(v_e_1802_, v___y_1803_);
lean_dec(v___y_1803_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_List_binders_spec__0(lean_object* v_e_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_){
_start:
{
lean_object* v___x_1812_; 
v___x_1812_ = l_Lean_instantiateMVars___at___00Lean_Linter_List_binders_spec__0___redArg(v_e_1806_, v___y_1808_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_List_binders_spec__0___boxed(lean_object* v_e_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_){
_start:
{
lean_object* v_res_1819_; 
v_res_1819_ = l_Lean_instantiateMVars___at___00Lean_Linter_List_binders_spec__0(v_e_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
lean_dec(v___y_1817_);
lean_dec_ref(v___y_1816_);
lean_dec(v___y_1815_);
lean_dec_ref(v___y_1814_);
return v_res_1819_;
}
}
static lean_object* _init_l_Lean_Linter_List_binders___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1823_ = lean_box(0);
v___x_1824_ = ((lean_object*)(l_Lean_Linter_List_binders___lam__0___closed__1));
v___x_1825_ = l_Lean_Expr_const___override(v___x_1824_, v___x_1823_);
return v___x_1825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_binders___lam__0(lean_object* v_expr_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_){
_start:
{
lean_object* v___x_1832_; 
v___x_1832_ = l_Lean_Meta_saveState___redArg(v___y_1828_, v___y_1830_);
if (lean_obj_tag(v___x_1832_) == 0)
{
lean_object* v_a_1833_; lean_object* v___x_1834_; 
v_a_1833_ = lean_ctor_get(v___x_1832_, 0);
lean_inc(v_a_1833_);
lean_dec_ref_known(v___x_1832_, 1);
lean_inc(v___y_1830_);
lean_inc(v___y_1828_);
v___x_1834_ = lean_infer_type(v_expr_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_);
if (lean_obj_tag(v___x_1834_) == 0)
{
lean_object* v_a_1835_; lean_object* v___x_1836_; 
lean_dec(v_a_1833_);
lean_dec(v___y_1830_);
v_a_1835_ = lean_ctor_get(v___x_1834_, 0);
lean_inc(v_a_1835_);
lean_dec_ref_known(v___x_1834_, 1);
v___x_1836_ = l_Lean_instantiateMVars___at___00Lean_Linter_List_binders_spec__0___redArg(v_a_1835_, v___y_1828_);
lean_dec(v___y_1828_);
return v___x_1836_;
}
else
{
lean_object* v_a_1837_; uint8_t v___x_1838_; 
v_a_1837_ = lean_ctor_get(v___x_1834_, 0);
v___x_1838_ = l_Lean_Exception_isInterrupt(v_a_1837_);
if (v___x_1838_ == 0)
{
uint8_t v___x_1839_; 
lean_inc(v_a_1837_);
v___x_1839_ = l_Lean_Exception_isRuntime(v_a_1837_);
if (v___x_1839_ == 0)
{
lean_object* v___x_1840_; 
lean_dec_ref_known(v___x_1834_, 1);
v___x_1840_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1833_, v___y_1828_, v___y_1830_);
lean_dec(v___y_1830_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v___x_1841_; lean_object* v___x_1842_; 
lean_dec_ref_known(v___x_1840_, 1);
v___x_1841_ = lean_obj_once(&l_Lean_Linter_List_binders___lam__0___closed__2, &l_Lean_Linter_List_binders___lam__0___closed__2_once, _init_l_Lean_Linter_List_binders___lam__0___closed__2);
v___x_1842_ = l_Lean_instantiateMVars___at___00Lean_Linter_List_binders_spec__0___redArg(v___x_1841_, v___y_1828_);
lean_dec(v___y_1828_);
return v___x_1842_;
}
else
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1850_; 
lean_dec(v___y_1828_);
v_a_1843_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1845_ = v___x_1840_;
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1840_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1846_ == 0)
{
v___x_1848_ = v___x_1845_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
}
}
else
{
lean_dec(v_a_1833_);
lean_dec(v___y_1830_);
lean_dec(v___y_1828_);
return v___x_1834_;
}
}
else
{
lean_dec(v_a_1833_);
lean_dec(v___y_1830_);
lean_dec(v___y_1828_);
return v___x_1834_;
}
}
}
else
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1858_; 
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec_ref(v_expr_1826_);
v_a_1851_ = lean_ctor_get(v___x_1832_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1832_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1853_ = v___x_1832_;
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___x_1832_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1856_; 
if (v_isShared_1854_ == 0)
{
v___x_1856_ = v___x_1853_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v_a_1851_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_binders___lam__0___boxed(lean_object* v_expr_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_){
_start:
{
lean_object* v_res_1865_; 
v_res_1865_ = l_Lean_Linter_List_binders___lam__0(v_expr_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_binders___lam__1(lean_object* v_p_1866_, lean_object* v_ctx_1867_, lean_object* v_ti_1868_){
_start:
{
uint8_t v_isBinder_1870_; 
v_isBinder_1870_ = lean_ctor_get_uint8(v_ti_1868_, sizeof(void*)*4);
if (v_isBinder_1870_ == 0)
{
lean_object* v___x_1871_; lean_object* v___x_1872_; 
lean_dec_ref(v_ti_1868_);
lean_dec_ref(v_ctx_1867_);
lean_dec_ref(v_p_1866_);
v___x_1871_ = lean_box(0);
v___x_1872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1871_);
return v___x_1872_;
}
else
{
lean_object* v_toElabInfo_1873_; lean_object* v_lctx_1874_; lean_object* v_expr_1875_; lean_object* v___f_1876_; lean_object* v___x_1877_; 
v_toElabInfo_1873_ = lean_ctor_get(v_ti_1868_, 0);
lean_inc_ref(v_toElabInfo_1873_);
v_lctx_1874_ = lean_ctor_get(v_ti_1868_, 1);
lean_inc_ref_n(v_lctx_1874_, 2);
v_expr_1875_ = lean_ctor_get(v_ti_1868_, 3);
lean_inc_ref_n(v_expr_1875_, 2);
lean_dec_ref(v_ti_1868_);
v___f_1876_ = lean_alloc_closure((void*)(l_Lean_Linter_List_binders___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1876_, 0, v_expr_1875_);
v___x_1877_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_1867_, v_lctx_1874_, v___f_1876_);
if (lean_obj_tag(v___x_1877_) == 0)
{
lean_object* v_a_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1921_; 
v_a_1878_ = lean_ctor_get(v___x_1877_, 0);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1880_ = v___x_1877_;
v_isShared_1881_ = v_isSharedCheck_1921_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_a_1878_);
lean_dec(v___x_1877_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1921_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; uint8_t v___x_1884_; 
v___x_1882_ = l_Lean_Expr_cleanupAnnotations(v_a_1878_);
v___x_1883_ = lean_apply_1(v_p_1866_, v___x_1882_);
v___x_1884_ = lean_unbox(v___x_1883_);
if (v___x_1884_ == 0)
{
lean_object* v___x_1885_; lean_object* v___x_1887_; 
lean_dec(v_a_1878_);
lean_dec_ref(v_expr_1875_);
lean_dec_ref(v_lctx_1874_);
lean_dec_ref(v_toElabInfo_1873_);
v___x_1885_ = lean_box(0);
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 0, v___x_1885_);
v___x_1887_ = v___x_1880_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v___x_1885_);
v___x_1887_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
return v___x_1887_;
}
}
else
{
if (lean_obj_tag(v_expr_1875_) == 1)
{
lean_object* v_fvarId_1889_; lean_object* v___x_1890_; 
v_fvarId_1889_ = lean_ctor_get(v_expr_1875_, 0);
lean_inc(v_fvarId_1889_);
lean_dec_ref_known(v_expr_1875_, 1);
v___x_1890_ = lean_local_ctx_find(v_lctx_1874_, v_fvarId_1889_);
if (lean_obj_tag(v___x_1890_) == 0)
{
lean_object* v___x_1891_; lean_object* v___x_1893_; 
lean_dec(v_a_1878_);
lean_dec_ref(v_toElabInfo_1873_);
v___x_1891_ = lean_box(0);
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 0, v___x_1891_);
v___x_1893_ = v___x_1880_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v___x_1891_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
return v___x_1893_;
}
}
else
{
lean_object* v_val_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1916_; 
v_val_1895_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1897_ = v___x_1890_;
v_isShared_1898_ = v_isSharedCheck_1916_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_val_1895_);
lean_dec(v___x_1890_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1916_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v_stx_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1914_; 
v_stx_1899_ = lean_ctor_get(v_toElabInfo_1873_, 1);
v_isSharedCheck_1914_ = !lean_is_exclusive(v_toElabInfo_1873_);
if (v_isSharedCheck_1914_ == 0)
{
lean_object* v_unused_1915_; 
v_unused_1915_ = lean_ctor_get(v_toElabInfo_1873_, 0);
lean_dec(v_unused_1915_);
v___x_1901_ = v_toElabInfo_1873_;
v_isShared_1902_ = v_isSharedCheck_1914_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_stx_1899_);
lean_dec(v_toElabInfo_1873_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1914_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1903_; lean_object* v___x_1905_; 
v___x_1903_ = l_Lean_LocalDecl_userName(v_val_1895_);
lean_dec(v_val_1895_);
if (v_isShared_1902_ == 0)
{
lean_ctor_set(v___x_1901_, 1, v_a_1878_);
lean_ctor_set(v___x_1901_, 0, v___x_1903_);
v___x_1905_ = v___x_1901_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v___x_1903_);
lean_ctor_set(v_reuseFailAlloc_1913_, 1, v_a_1878_);
v___x_1905_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
lean_object* v___x_1906_; lean_object* v___x_1908_; 
v___x_1906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1906_, 0, v_stx_1899_);
lean_ctor_set(v___x_1906_, 1, v___x_1905_);
if (v_isShared_1898_ == 0)
{
lean_ctor_set(v___x_1897_, 0, v___x_1906_);
v___x_1908_ = v___x_1897_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v___x_1906_);
v___x_1908_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
lean_object* v___x_1910_; 
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 0, v___x_1908_);
v___x_1910_ = v___x_1880_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v___x_1908_);
v___x_1910_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
return v___x_1910_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1917_; lean_object* v___x_1919_; 
lean_dec(v_a_1878_);
lean_dec_ref(v_expr_1875_);
lean_dec_ref(v_lctx_1874_);
lean_dec_ref(v_toElabInfo_1873_);
v___x_1917_ = lean_box(0);
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 0, v___x_1917_);
v___x_1919_ = v___x_1880_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v___x_1917_);
v___x_1919_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
return v___x_1919_;
}
}
}
}
}
else
{
lean_object* v_a_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1929_; 
lean_dec_ref(v_expr_1875_);
lean_dec_ref(v_lctx_1874_);
lean_dec_ref(v_toElabInfo_1873_);
lean_dec_ref(v_p_1866_);
v_a_1922_ = lean_ctor_get(v___x_1877_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1924_ = v___x_1877_;
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_a_1922_);
lean_dec(v___x_1877_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_binders___lam__1___boxed(lean_object* v_p_1930_, lean_object* v_ctx_1931_, lean_object* v_ti_1932_, lean_object* v___y_1933_){
_start:
{
lean_object* v_res_1934_; 
v_res_1934_ = l_Lean_Linter_List_binders___lam__1(v_p_1930_, v_ctx_1931_, v_ti_1932_);
return v_res_1934_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_1935_; 
v___x_1935_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__6___redArg(lean_object* v_f_1936_, lean_object* v___x_1937_, lean_object* v_x_1938_, lean_object* v_x_1939_){
_start:
{
if (lean_obj_tag(v_x_1938_) == 0)
{
lean_object* v_cs_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1954_; 
v_cs_1941_ = lean_ctor_get(v_x_1938_, 0);
v_isSharedCheck_1954_ = !lean_is_exclusive(v_x_1938_);
if (v_isSharedCheck_1954_ == 0)
{
v___x_1943_ = v_x_1938_;
v_isShared_1944_ = v_isSharedCheck_1954_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_cs_1941_);
lean_dec(v_x_1938_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1954_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; uint8_t v___x_1947_; 
v___x_1945_ = lean_unsigned_to_nat(0u);
v___x_1946_ = lean_array_get_size(v_cs_1941_);
v___x_1947_ = lean_nat_dec_lt(v___x_1945_, v___x_1946_);
if (v___x_1947_ == 0)
{
lean_object* v___x_1949_; 
lean_dec_ref(v_cs_1941_);
lean_dec(v___x_1937_);
lean_dec_ref(v_f_1936_);
if (v_isShared_1944_ == 0)
{
lean_ctor_set(v___x_1943_, 0, v_x_1939_);
v___x_1949_ = v___x_1943_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_x_1939_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
else
{
size_t v___x_1951_; size_t v___x_1952_; lean_object* v___x_1953_; 
lean_del_object(v___x_1943_);
v___x_1951_ = ((size_t)0ULL);
v___x_1952_ = lean_usize_of_nat(v___x_1946_);
v___x_1953_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(v_f_1936_, v___x_1937_, v_cs_1941_, v___x_1951_, v___x_1952_, v_x_1939_);
lean_dec_ref(v_cs_1941_);
return v___x_1953_;
}
}
}
else
{
lean_object* v_vs_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1968_; 
v_vs_1955_ = lean_ctor_get(v_x_1938_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v_x_1938_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1957_ = v_x_1938_;
v_isShared_1958_ = v_isSharedCheck_1968_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_vs_1955_);
lean_dec(v_x_1938_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1968_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; uint8_t v___x_1961_; 
v___x_1959_ = lean_unsigned_to_nat(0u);
v___x_1960_ = lean_array_get_size(v_vs_1955_);
v___x_1961_ = lean_nat_dec_lt(v___x_1959_, v___x_1960_);
if (v___x_1961_ == 0)
{
lean_object* v___x_1963_; 
lean_dec_ref(v_vs_1955_);
lean_dec(v___x_1937_);
lean_dec_ref(v_f_1936_);
if (v_isShared_1958_ == 0)
{
lean_ctor_set_tag(v___x_1957_, 0);
lean_ctor_set(v___x_1957_, 0, v_x_1939_);
v___x_1963_ = v___x_1957_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_x_1939_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
else
{
size_t v___x_1965_; size_t v___x_1966_; lean_object* v___x_1967_; 
lean_del_object(v___x_1957_);
v___x_1965_ = ((size_t)0ULL);
v___x_1966_ = lean_usize_of_nat(v___x_1960_);
v___x_1967_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5___redArg(v_f_1936_, v___x_1937_, v_vs_1955_, v___x_1965_, v___x_1966_, v_x_1939_);
lean_dec_ref(v_vs_1955_);
return v___x_1967_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(lean_object* v_f_1969_, lean_object* v___x_1970_, lean_object* v_as_1971_, size_t v_i_1972_, size_t v_stop_1973_, lean_object* v_b_1974_){
_start:
{
uint8_t v___x_1976_; 
v___x_1976_ = lean_usize_dec_eq(v_i_1972_, v_stop_1973_);
if (v___x_1976_ == 0)
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1977_ = lean_array_uget_borrowed(v_as_1971_, v_i_1972_);
lean_inc(v___x_1977_);
lean_inc(v___x_1970_);
lean_inc_ref(v_f_1969_);
v___x_1978_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__6___redArg(v_f_1969_, v___x_1970_, v___x_1977_, v_b_1974_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_a_1979_; size_t v___x_1980_; size_t v___x_1981_; 
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
lean_inc(v_a_1979_);
lean_dec_ref_known(v___x_1978_, 1);
v___x_1980_ = ((size_t)1ULL);
v___x_1981_ = lean_usize_add(v_i_1972_, v___x_1980_);
v_i_1972_ = v___x_1981_;
v_b_1974_ = v_a_1979_;
goto _start;
}
else
{
lean_dec(v___x_1970_);
lean_dec_ref(v_f_1969_);
return v___x_1978_;
}
}
else
{
lean_object* v___x_1983_; 
lean_dec(v___x_1970_);
lean_dec_ref(v_f_1969_);
v___x_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1983_, 0, v_b_1974_);
return v___x_1983_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_f_1984_, lean_object* v___x_1985_, lean_object* v_x_1986_, size_t v_x_1987_, size_t v_x_1988_, lean_object* v_x_1989_){
_start:
{
if (lean_obj_tag(v_x_1986_) == 0)
{
lean_object* v_cs_1991_; lean_object* v___x_1992_; size_t v___x_1993_; lean_object* v_j_1994_; lean_object* v___x_1995_; size_t v___x_1996_; size_t v___x_1997_; size_t v___x_1998_; size_t v___x_1999_; size_t v___x_2000_; size_t v___x_2001_; lean_object* v___x_2002_; 
v_cs_1991_ = lean_ctor_get(v_x_1986_, 0);
lean_inc_ref(v_cs_1991_);
lean_dec_ref_known(v_x_1986_, 1);
v___x_1992_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___redArg___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_1993_ = lean_usize_shift_right(v_x_1987_, v_x_1988_);
v_j_1994_ = lean_usize_to_nat(v___x_1993_);
v___x_1995_ = lean_array_get_borrowed(v___x_1992_, v_cs_1991_, v_j_1994_);
v___x_1996_ = ((size_t)1ULL);
v___x_1997_ = lean_usize_shift_left(v___x_1996_, v_x_1988_);
v___x_1998_ = lean_usize_sub(v___x_1997_, v___x_1996_);
v___x_1999_ = lean_usize_land(v_x_1987_, v___x_1998_);
v___x_2000_ = ((size_t)5ULL);
v___x_2001_ = lean_usize_sub(v_x_1988_, v___x_2000_);
lean_inc(v___x_1995_);
lean_inc(v___x_1985_);
lean_inc_ref(v_f_1984_);
v___x_2002_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(v_f_1984_, v___x_1985_, v___x_1995_, v___x_1999_, v___x_2001_, v_x_1989_);
if (lean_obj_tag(v___x_2002_) == 0)
{
lean_object* v_a_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; uint8_t v___x_2007_; 
v_a_2003_ = lean_ctor_get(v___x_2002_, 0);
v___x_2004_ = lean_unsigned_to_nat(1u);
v___x_2005_ = lean_nat_add(v_j_1994_, v___x_2004_);
lean_dec(v_j_1994_);
v___x_2006_ = lean_array_get_size(v_cs_1991_);
v___x_2007_ = lean_nat_dec_lt(v___x_2005_, v___x_2006_);
if (v___x_2007_ == 0)
{
lean_dec(v___x_2005_);
lean_dec_ref(v_cs_1991_);
lean_dec(v___x_1985_);
lean_dec_ref(v_f_1984_);
return v___x_2002_;
}
else
{
size_t v___x_2008_; size_t v___x_2009_; lean_object* v___x_2010_; 
lean_inc(v_a_2003_);
lean_dec_ref_known(v___x_2002_, 1);
v___x_2008_ = lean_usize_of_nat(v___x_2005_);
lean_dec(v___x_2005_);
v___x_2009_ = lean_usize_of_nat(v___x_2006_);
v___x_2010_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(v_f_1984_, v___x_1985_, v_cs_1991_, v___x_2008_, v___x_2009_, v_a_2003_);
lean_dec_ref(v_cs_1991_);
return v___x_2010_;
}
}
else
{
lean_dec(v_j_1994_);
lean_dec_ref(v_cs_1991_);
lean_dec(v___x_1985_);
lean_dec_ref(v_f_1984_);
return v___x_2002_;
}
}
else
{
lean_object* v_vs_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2024_; 
v_vs_2011_ = lean_ctor_get(v_x_1986_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v_x_1986_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2013_ = v_x_1986_;
v_isShared_2014_ = v_isSharedCheck_2024_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_vs_2011_);
lean_dec(v_x_1986_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2024_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; uint8_t v___x_2017_; 
v___x_2015_ = lean_usize_to_nat(v_x_1987_);
v___x_2016_ = lean_array_get_size(v_vs_2011_);
v___x_2017_ = lean_nat_dec_lt(v___x_2015_, v___x_2016_);
if (v___x_2017_ == 0)
{
lean_object* v___x_2019_; 
lean_dec(v___x_2015_);
lean_dec_ref(v_vs_2011_);
lean_dec(v___x_1985_);
lean_dec_ref(v_f_1984_);
if (v_isShared_2014_ == 0)
{
lean_ctor_set_tag(v___x_2013_, 0);
lean_ctor_set(v___x_2013_, 0, v_x_1989_);
v___x_2019_ = v___x_2013_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_x_1989_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
else
{
size_t v___x_2021_; size_t v___x_2022_; lean_object* v___x_2023_; 
lean_del_object(v___x_2013_);
v___x_2021_ = lean_usize_of_nat(v___x_2015_);
lean_dec(v___x_2015_);
v___x_2022_ = lean_usize_of_nat(v___x_2016_);
v___x_2023_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5___redArg(v_f_1984_, v___x_1985_, v_vs_2011_, v___x_2021_, v___x_2022_, v_x_1989_);
lean_dec_ref(v_vs_2011_);
return v___x_2023_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3___redArg(lean_object* v_f_2025_, lean_object* v___x_2026_, lean_object* v_t_2027_, lean_object* v_init_2028_, lean_object* v_start_2029_){
_start:
{
lean_object* v___x_2031_; uint8_t v___x_2032_; 
v___x_2031_ = lean_unsigned_to_nat(0u);
v___x_2032_ = lean_nat_dec_eq(v_start_2029_, v___x_2031_);
if (v___x_2032_ == 0)
{
lean_object* v_root_2033_; lean_object* v_tail_2034_; size_t v_shift_2035_; lean_object* v_tailOff_2036_; uint8_t v___x_2037_; 
v_root_2033_ = lean_ctor_get(v_t_2027_, 0);
lean_inc_ref(v_root_2033_);
v_tail_2034_ = lean_ctor_get(v_t_2027_, 1);
lean_inc_ref(v_tail_2034_);
v_shift_2035_ = lean_ctor_get_usize(v_t_2027_, 4);
v_tailOff_2036_ = lean_ctor_get(v_t_2027_, 3);
lean_inc(v_tailOff_2036_);
lean_dec_ref(v_t_2027_);
v___x_2037_ = lean_nat_dec_le(v_tailOff_2036_, v_start_2029_);
if (v___x_2037_ == 0)
{
size_t v___x_2038_; lean_object* v___x_2039_; 
lean_dec(v_tailOff_2036_);
v___x_2038_ = lean_usize_of_nat(v_start_2029_);
lean_inc(v___x_2026_);
lean_inc_ref(v_f_2025_);
v___x_2039_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(v_f_2025_, v___x_2026_, v_root_2033_, v___x_2038_, v_shift_2035_, v_init_2028_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v_a_2040_; lean_object* v___x_2041_; uint8_t v___x_2042_; 
v_a_2040_ = lean_ctor_get(v___x_2039_, 0);
v___x_2041_ = lean_array_get_size(v_tail_2034_);
v___x_2042_ = lean_nat_dec_lt(v___x_2031_, v___x_2041_);
if (v___x_2042_ == 0)
{
lean_dec_ref(v_tail_2034_);
lean_dec(v___x_2026_);
lean_dec_ref(v_f_2025_);
return v___x_2039_;
}
else
{
size_t v___x_2043_; size_t v___x_2044_; lean_object* v___x_2045_; 
lean_inc(v_a_2040_);
lean_dec_ref_known(v___x_2039_, 1);
v___x_2043_ = ((size_t)0ULL);
v___x_2044_ = lean_usize_of_nat(v___x_2041_);
v___x_2045_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5___redArg(v_f_2025_, v___x_2026_, v_tail_2034_, v___x_2043_, v___x_2044_, v_a_2040_);
lean_dec_ref(v_tail_2034_);
return v___x_2045_;
}
}
else
{
lean_dec_ref(v_tail_2034_);
lean_dec(v___x_2026_);
lean_dec_ref(v_f_2025_);
return v___x_2039_;
}
}
else
{
lean_object* v___x_2046_; lean_object* v___x_2047_; uint8_t v___x_2048_; 
lean_dec_ref(v_root_2033_);
v___x_2046_ = lean_nat_sub(v_start_2029_, v_tailOff_2036_);
lean_dec(v_tailOff_2036_);
v___x_2047_ = lean_array_get_size(v_tail_2034_);
v___x_2048_ = lean_nat_dec_lt(v___x_2046_, v___x_2047_);
if (v___x_2048_ == 0)
{
lean_object* v___x_2049_; 
lean_dec(v___x_2046_);
lean_dec_ref(v_tail_2034_);
lean_dec(v___x_2026_);
lean_dec_ref(v_f_2025_);
v___x_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2049_, 0, v_init_2028_);
return v___x_2049_;
}
else
{
size_t v___x_2050_; size_t v___x_2051_; lean_object* v___x_2052_; 
v___x_2050_ = lean_usize_of_nat(v___x_2046_);
lean_dec(v___x_2046_);
v___x_2051_ = lean_usize_of_nat(v___x_2047_);
v___x_2052_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5___redArg(v_f_2025_, v___x_2026_, v_tail_2034_, v___x_2050_, v___x_2051_, v_init_2028_);
lean_dec_ref(v_tail_2034_);
return v___x_2052_;
}
}
}
else
{
lean_object* v_root_2053_; lean_object* v_tail_2054_; lean_object* v___x_2055_; 
v_root_2053_ = lean_ctor_get(v_t_2027_, 0);
lean_inc_ref(v_root_2053_);
v_tail_2054_ = lean_ctor_get(v_t_2027_, 1);
lean_inc_ref(v_tail_2054_);
lean_dec_ref(v_t_2027_);
lean_inc(v___x_2026_);
lean_inc_ref(v_f_2025_);
v___x_2055_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__6___redArg(v_f_2025_, v___x_2026_, v_root_2053_, v_init_2028_);
if (lean_obj_tag(v___x_2055_) == 0)
{
lean_object* v_a_2056_; lean_object* v___x_2057_; uint8_t v___x_2058_; 
v_a_2056_ = lean_ctor_get(v___x_2055_, 0);
v___x_2057_ = lean_array_get_size(v_tail_2054_);
v___x_2058_ = lean_nat_dec_lt(v___x_2031_, v___x_2057_);
if (v___x_2058_ == 0)
{
lean_dec_ref(v_tail_2054_);
lean_dec(v___x_2026_);
lean_dec_ref(v_f_2025_);
return v___x_2055_;
}
else
{
size_t v___x_2059_; size_t v___x_2060_; lean_object* v___x_2061_; 
lean_inc(v_a_2056_);
lean_dec_ref_known(v___x_2055_, 1);
v___x_2059_ = ((size_t)0ULL);
v___x_2060_ = lean_usize_of_nat(v___x_2057_);
v___x_2061_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5___redArg(v_f_2025_, v___x_2026_, v_tail_2054_, v___x_2059_, v___x_2060_, v_a_2056_);
lean_dec_ref(v_tail_2054_);
return v___x_2061_;
}
}
else
{
lean_dec_ref(v_tail_2054_);
lean_dec(v___x_2026_);
lean_dec_ref(v_f_2025_);
return v___x_2055_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2___redArg(lean_object* v_f_2062_, lean_object* v_ctx_x3f_2063_, lean_object* v_a_2064_, lean_object* v_x_2065_){
_start:
{
switch(lean_obj_tag(v_x_2065_))
{
case 0:
{
lean_object* v_i_2067_; lean_object* v_t_2068_; lean_object* v___x_2069_; 
v_i_2067_ = lean_ctor_get(v_x_2065_, 0);
lean_inc_ref(v_i_2067_);
v_t_2068_ = lean_ctor_get(v_x_2065_, 1);
lean_inc_ref(v_t_2068_);
lean_dec_ref_known(v_x_2065_, 2);
v___x_2069_ = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(v_i_2067_, v_ctx_x3f_2063_);
v_ctx_x3f_2063_ = v___x_2069_;
v_x_2065_ = v_t_2068_;
goto _start;
}
case 1:
{
lean_object* v_i_2071_; lean_object* v_children_2072_; lean_object* v_a_2074_; 
v_i_2071_ = lean_ctor_get(v_x_2065_, 0);
lean_inc_ref(v_i_2071_);
v_children_2072_ = lean_ctor_get(v_x_2065_, 1);
lean_inc_ref(v_children_2072_);
lean_dec_ref_known(v_x_2065_, 2);
if (lean_obj_tag(v_ctx_x3f_2063_) == 0)
{
v_a_2074_ = v_a_2064_;
goto v___jp_2073_;
}
else
{
lean_object* v_val_2078_; lean_object* v___x_2079_; 
v_val_2078_ = lean_ctor_get(v_ctx_x3f_2063_, 0);
lean_inc_ref(v_f_2062_);
lean_inc_ref(v_i_2071_);
lean_inc(v_val_2078_);
v___x_2079_ = lean_apply_4(v_f_2062_, v_val_2078_, v_i_2071_, v_a_2064_, lean_box(0));
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_object* v_a_2080_; 
v_a_2080_ = lean_ctor_get(v___x_2079_, 0);
lean_inc(v_a_2080_);
lean_dec_ref_known(v___x_2079_, 1);
v_a_2074_ = v_a_2080_;
goto v___jp_2073_;
}
else
{
lean_dec_ref_known(v_ctx_x3f_2063_, 1);
lean_dec_ref(v_children_2072_);
lean_dec_ref(v_i_2071_);
lean_dec_ref(v_f_2062_);
return v___x_2079_;
}
}
v___jp_2073_:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2075_ = l_Lean_Elab_Info_updateContext_x3f(v_ctx_x3f_2063_, v_i_2071_);
lean_dec_ref(v_i_2071_);
v___x_2076_ = lean_unsigned_to_nat(0u);
v___x_2077_ = l_Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3___redArg(v_f_2062_, v___x_2075_, v_children_2072_, v_a_2074_, v___x_2076_);
return v___x_2077_;
}
}
default: 
{
lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2087_; 
lean_dec(v_ctx_x3f_2063_);
lean_dec_ref(v_f_2062_);
v_isSharedCheck_2087_ = !lean_is_exclusive(v_x_2065_);
if (v_isSharedCheck_2087_ == 0)
{
lean_object* v_unused_2088_; 
v_unused_2088_ = lean_ctor_get(v_x_2065_, 0);
lean_dec(v_unused_2088_);
v___x_2082_ = v_x_2065_;
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
else
{
lean_dec(v_x_2065_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2083_ == 0)
{
lean_ctor_set_tag(v___x_2082_, 0);
lean_ctor_set(v___x_2082_, 0, v_a_2064_);
v___x_2085_ = v___x_2082_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_a_2064_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_f_2089_, lean_object* v___x_2090_, lean_object* v_as_2091_, size_t v_i_2092_, size_t v_stop_2093_, lean_object* v_b_2094_){
_start:
{
uint8_t v___x_2096_; 
v___x_2096_ = lean_usize_dec_eq(v_i_2092_, v_stop_2093_);
if (v___x_2096_ == 0)
{
lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2097_ = lean_array_uget_borrowed(v_as_2091_, v_i_2092_);
lean_inc(v___x_2097_);
lean_inc(v___x_2090_);
lean_inc_ref(v_f_2089_);
v___x_2098_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2___redArg(v_f_2089_, v___x_2090_, v_b_2094_, v___x_2097_);
if (lean_obj_tag(v___x_2098_) == 0)
{
lean_object* v_a_2099_; size_t v___x_2100_; size_t v___x_2101_; 
v_a_2099_ = lean_ctor_get(v___x_2098_, 0);
lean_inc(v_a_2099_);
lean_dec_ref_known(v___x_2098_, 1);
v___x_2100_ = ((size_t)1ULL);
v___x_2101_ = lean_usize_add(v_i_2092_, v___x_2100_);
v_i_2092_ = v___x_2101_;
v_b_2094_ = v_a_2099_;
goto _start;
}
else
{
lean_dec(v___x_2090_);
lean_dec_ref(v_f_2089_);
return v___x_2098_;
}
}
else
{
lean_object* v___x_2103_; 
lean_dec(v___x_2090_);
lean_dec_ref(v_f_2089_);
v___x_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2103_, 0, v_b_2094_);
return v___x_2103_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_f_2104_, lean_object* v___x_2105_, lean_object* v_as_2106_, lean_object* v_i_2107_, lean_object* v_stop_2108_, lean_object* v_b_2109_, lean_object* v___y_2110_){
_start:
{
size_t v_i_boxed_2111_; size_t v_stop_boxed_2112_; lean_object* v_res_2113_; 
v_i_boxed_2111_ = lean_unbox_usize(v_i_2107_);
lean_dec(v_i_2107_);
v_stop_boxed_2112_ = lean_unbox_usize(v_stop_2108_);
lean_dec(v_stop_2108_);
v_res_2113_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5___redArg(v_f_2104_, v___x_2105_, v_as_2106_, v_i_boxed_2111_, v_stop_boxed_2112_, v_b_2109_);
lean_dec_ref(v_as_2106_);
return v_res_2113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___boxed(lean_object* v_f_2114_, lean_object* v___x_2115_, lean_object* v_as_2116_, lean_object* v_i_2117_, lean_object* v_stop_2118_, lean_object* v_b_2119_, lean_object* v___y_2120_){
_start:
{
size_t v_i_boxed_2121_; size_t v_stop_boxed_2122_; lean_object* v_res_2123_; 
v_i_boxed_2121_ = lean_unbox_usize(v_i_2117_);
lean_dec(v_i_2117_);
v_stop_boxed_2122_ = lean_unbox_usize(v_stop_2118_);
lean_dec(v_stop_2118_);
v_res_2123_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(v_f_2114_, v___x_2115_, v_as_2116_, v_i_boxed_2121_, v_stop_boxed_2122_, v_b_2119_);
lean_dec_ref(v_as_2116_);
return v_res_2123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_f_2124_, lean_object* v_ctx_x3f_2125_, lean_object* v_a_2126_, lean_object* v_x_2127_, lean_object* v___y_2128_){
_start:
{
lean_object* v_res_2129_; 
v_res_2129_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2___redArg(v_f_2124_, v_ctx_x3f_2125_, v_a_2126_, v_x_2127_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_f_2130_, lean_object* v___x_2131_, lean_object* v_x_2132_, lean_object* v_x_2133_, lean_object* v___y_2134_){
_start:
{
lean_object* v_res_2135_; 
v_res_2135_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__6___redArg(v_f_2130_, v___x_2131_, v_x_2132_, v_x_2133_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_f_2136_, lean_object* v___x_2137_, lean_object* v_x_2138_, lean_object* v_x_2139_, lean_object* v_x_2140_, lean_object* v_x_2141_, lean_object* v___y_2142_){
_start:
{
size_t v_x_2586__boxed_2143_; size_t v_x_2587__boxed_2144_; lean_object* v_res_2145_; 
v_x_2586__boxed_2143_ = lean_unbox_usize(v_x_2139_);
lean_dec(v_x_2139_);
v_x_2587__boxed_2144_ = lean_unbox_usize(v_x_2140_);
lean_dec(v_x_2140_);
v_res_2145_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(v_f_2136_, v___x_2137_, v_x_2138_, v_x_2586__boxed_2143_, v_x_2587__boxed_2144_, v_x_2141_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_f_2146_, lean_object* v___x_2147_, lean_object* v_t_2148_, lean_object* v_init_2149_, lean_object* v_start_2150_, lean_object* v___y_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l_Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3___redArg(v_f_2146_, v___x_2147_, v_t_2148_, v_init_2149_, v_start_2150_);
lean_dec(v_start_2150_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1___redArg(lean_object* v_f_2153_, lean_object* v_init_2154_, lean_object* v_x_2155_){
_start:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; 
v___x_2157_ = lean_box(0);
v___x_2158_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2___redArg(v_f_2153_, v___x_2157_, v_init_2154_, v_x_2155_);
return v___x_2158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1___redArg___boxed(lean_object* v_f_2159_, lean_object* v_init_2160_, lean_object* v_x_2161_, lean_object* v___y_2162_){
_start:
{
lean_object* v_res_2163_; 
v_res_2163_ = l_Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1___redArg(v_f_2159_, v_init_2160_, v_x_2161_);
return v_res_2163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1___redArg___lam__0(lean_object* v_f_2164_, lean_object* v_ctx_2165_, lean_object* v_info_2166_, lean_object* v_result_2167_){
_start:
{
if (lean_obj_tag(v_info_2166_) == 1)
{
lean_object* v_i_2169_; lean_object* v___x_2170_; 
v_i_2169_ = lean_ctor_get(v_info_2166_, 0);
lean_inc_ref(v_i_2169_);
lean_dec_ref_known(v_info_2166_, 1);
v___x_2170_ = lean_apply_3(v_f_2164_, v_ctx_2165_, v_i_2169_, lean_box(0));
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2183_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2173_ = v___x_2170_;
v_isShared_2174_ = v_isSharedCheck_2183_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2170_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2183_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
if (lean_obj_tag(v_a_2171_) == 0)
{
lean_object* v___x_2176_; 
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 0, v_result_2167_);
v___x_2176_ = v___x_2173_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_result_2167_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
else
{
lean_object* v_val_2178_; lean_object* v___x_2179_; lean_object* v___x_2181_; 
v_val_2178_ = lean_ctor_get(v_a_2171_, 0);
lean_inc(v_val_2178_);
lean_dec_ref_known(v_a_2171_, 1);
v___x_2179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2179_, 0, v_val_2178_);
lean_ctor_set(v___x_2179_, 1, v_result_2167_);
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 0, v___x_2179_);
v___x_2181_ = v___x_2173_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v___x_2179_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
lean_dec(v_result_2167_);
v_a_2184_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2170_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2170_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
else
{
lean_object* v___x_2192_; 
lean_dec_ref(v_info_2166_);
lean_dec_ref(v_ctx_2165_);
lean_dec_ref(v_f_2164_);
v___x_2192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2192_, 0, v_result_2167_);
return v___x_2192_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1___redArg___lam__0___boxed(lean_object* v_f_2193_, lean_object* v_ctx_2194_, lean_object* v_info_2195_, lean_object* v_result_2196_, lean_object* v___y_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1___redArg___lam__0(v_f_2193_, v_ctx_2194_, v_info_2195_, v_result_2196_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1___redArg(lean_object* v_t_2199_, lean_object* v_f_2200_){
_start:
{
lean_object* v___f_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___f_2202_ = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v___f_2202_, 0, v_f_2200_);
v___x_2203_ = lean_box(0);
v___x_2204_ = l_Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1___redArg(v___f_2202_, v___x_2203_, v_t_2199_);
return v___x_2204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1___redArg___boxed(lean_object* v_t_2205_, lean_object* v_f_2206_, lean_object* v___y_2207_){
_start:
{
lean_object* v_res_2208_; 
v_res_2208_ = l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1___redArg(v_t_2205_, v_f_2206_);
return v_res_2208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_binders(lean_object* v_t_2209_, lean_object* v_p_2210_){
_start:
{
lean_object* v___f_2212_; lean_object* v___x_2213_; 
v___f_2212_ = lean_alloc_closure((void*)(l_Lean_Linter_List_binders___lam__1___boxed), 4, 1);
lean_closure_set(v___f_2212_, 0, v_p_2210_);
v___x_2213_ = l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1___redArg(v_t_2209_, v___f_2212_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_binders___boxed(lean_object* v_t_2214_, lean_object* v_p_2215_, lean_object* v_a_2216_){
_start:
{
lean_object* v_res_2217_; 
v_res_2217_ = l_Lean_Linter_List_binders(v_t_2214_, v_p_2215_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1(lean_object* v_00_u03b1_2218_, lean_object* v_t_2219_, lean_object* v_f_2220_){
_start:
{
lean_object* v___x_2222_; 
v___x_2222_ = l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1___redArg(v_t_2219_, v_f_2220_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1___boxed(lean_object* v_00_u03b1_2223_, lean_object* v_t_2224_, lean_object* v_f_2225_, lean_object* v___y_2226_){
_start:
{
lean_object* v_res_2227_; 
v_res_2227_ = l_Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1(v_00_u03b1_2223_, v_t_2224_, v_f_2225_);
return v_res_2227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1(lean_object* v_00_u03b1_2228_, lean_object* v_f_2229_, lean_object* v_init_2230_, lean_object* v_x_2231_){
_start:
{
lean_object* v___x_2233_; 
v___x_2233_ = l_Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1___redArg(v_f_2229_, v_init_2230_, v_x_2231_);
return v___x_2233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1___boxed(lean_object* v_00_u03b1_2234_, lean_object* v_f_2235_, lean_object* v_init_2236_, lean_object* v_x_2237_, lean_object* v___y_2238_){
_start:
{
lean_object* v_res_2239_; 
v_res_2239_ = l_Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1(v_00_u03b1_2234_, v_f_2235_, v_init_2236_, v_x_2237_);
return v_res_2239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2(lean_object* v_00_u03b1_2240_, lean_object* v_f_2241_, lean_object* v_ctx_x3f_2242_, lean_object* v_a_2243_, lean_object* v_x_2244_){
_start:
{
lean_object* v___x_2246_; 
v___x_2246_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2___redArg(v_f_2241_, v_ctx_x3f_2242_, v_a_2243_, v_x_2244_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b1_2247_, lean_object* v_f_2248_, lean_object* v_ctx_x3f_2249_, lean_object* v_a_2250_, lean_object* v_x_2251_, lean_object* v___y_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2(v_00_u03b1_2247_, v_f_2248_, v_ctx_x3f_2249_, v_a_2250_, v_x_2251_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3(lean_object* v_00_u03b1_2254_, lean_object* v_f_2255_, lean_object* v___x_2256_, lean_object* v_t_2257_, lean_object* v_init_2258_, lean_object* v_start_2259_){
_start:
{
lean_object* v___x_2261_; 
v___x_2261_ = l_Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3___redArg(v_f_2255_, v___x_2256_, v_t_2257_, v_init_2258_, v_start_2259_);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03b1_2262_, lean_object* v_f_2263_, lean_object* v___x_2264_, lean_object* v_t_2265_, lean_object* v_init_2266_, lean_object* v_start_2267_, lean_object* v___y_2268_){
_start:
{
lean_object* v_res_2269_; 
v_res_2269_ = l_Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3(v_00_u03b1_2262_, v_f_2263_, v___x_2264_, v_t_2265_, v_init_2266_, v_start_2267_);
lean_dec(v_start_2267_);
return v_res_2269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b1_2270_, lean_object* v_f_2271_, lean_object* v___x_2272_, lean_object* v_x_2273_, size_t v_x_2274_, size_t v_x_2275_, lean_object* v_x_2276_){
_start:
{
lean_object* v___x_2278_; 
v___x_2278_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(v_f_2271_, v___x_2272_, v_x_2273_, v_x_2274_, v_x_2275_, v_x_2276_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b1_2279_, lean_object* v_f_2280_, lean_object* v___x_2281_, lean_object* v_x_2282_, lean_object* v_x_2283_, lean_object* v_x_2284_, lean_object* v_x_2285_, lean_object* v___y_2286_){
_start:
{
size_t v_x_2940__boxed_2287_; size_t v_x_2941__boxed_2288_; lean_object* v_res_2289_; 
v_x_2940__boxed_2287_ = lean_unbox_usize(v_x_2283_);
lean_dec(v_x_2283_);
v_x_2941__boxed_2288_ = lean_unbox_usize(v_x_2284_);
lean_dec(v_x_2284_);
v_res_2289_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4(v_00_u03b1_2279_, v_f_2280_, v___x_2281_, v_x_2282_, v_x_2940__boxed_2287_, v_x_2941__boxed_2288_, v_x_2285_);
return v_res_2289_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b1_2290_, lean_object* v_f_2291_, lean_object* v___x_2292_, lean_object* v_as_2293_, size_t v_i_2294_, size_t v_stop_2295_, lean_object* v_b_2296_){
_start:
{
lean_object* v___x_2298_; 
v___x_2298_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5___redArg(v_f_2291_, v___x_2292_, v_as_2293_, v_i_2294_, v_stop_2295_, v_b_2296_);
return v___x_2298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b1_2299_, lean_object* v_f_2300_, lean_object* v___x_2301_, lean_object* v_as_2302_, lean_object* v_i_2303_, lean_object* v_stop_2304_, lean_object* v_b_2305_, lean_object* v___y_2306_){
_start:
{
size_t v_i_boxed_2307_; size_t v_stop_boxed_2308_; lean_object* v_res_2309_; 
v_i_boxed_2307_ = lean_unbox_usize(v_i_2303_);
lean_dec(v_i_2303_);
v_stop_boxed_2308_ = lean_unbox_usize(v_stop_2304_);
lean_dec(v_stop_2304_);
v_res_2309_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__5(v_00_u03b1_2299_, v_f_2300_, v___x_2301_, v_as_2302_, v_i_boxed_2307_, v_stop_boxed_2308_, v_b_2305_);
lean_dec_ref(v_as_2302_);
return v_res_2309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__6(lean_object* v_00_u03b1_2310_, lean_object* v_f_2311_, lean_object* v___x_2312_, lean_object* v_x_2313_, lean_object* v_x_2314_){
_start:
{
lean_object* v___x_2316_; 
v___x_2316_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__6___redArg(v_f_2311_, v___x_2312_, v_x_2313_, v_x_2314_);
return v___x_2316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b1_2317_, lean_object* v_f_2318_, lean_object* v___x_2319_, lean_object* v_x_2320_, lean_object* v_x_2321_, lean_object* v___y_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__6(v_00_u03b1_2317_, v_f_2318_, v___x_2319_, v_x_2320_, v_x_2321_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5(lean_object* v_00_u03b1_2324_, lean_object* v_f_2325_, lean_object* v___x_2326_, lean_object* v_as_2327_, size_t v_i_2328_, size_t v_stop_2329_, lean_object* v_b_2330_){
_start:
{
lean_object* v___x_2332_; 
v___x_2332_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(v_f_2325_, v___x_2326_, v_as_2327_, v_i_2328_, v_stop_2329_, v_b_2330_);
return v___x_2332_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___boxed(lean_object* v_00_u03b1_2333_, lean_object* v_f_2334_, lean_object* v___x_2335_, lean_object* v_as_2336_, lean_object* v_i_2337_, lean_object* v_stop_2338_, lean_object* v_b_2339_, lean_object* v___y_2340_){
_start:
{
size_t v_i_boxed_2341_; size_t v_stop_boxed_2342_; lean_object* v_res_2343_; 
v_i_boxed_2341_ = lean_unbox_usize(v_i_2337_);
lean_dec(v_i_2337_);
v_stop_boxed_2342_ = lean_unbox_usize(v_stop_2338_);
lean_dec(v_stop_2338_);
v_res_2343_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_foldInfoM_go___at___00Lean_Elab_InfoTree_foldInfoM___at___00Lean_Elab_InfoTree_collectTermInfoM___at___00Lean_Linter_List_binders_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5(v_00_u03b1_2333_, v_f_2334_, v___x_2335_, v_as_2336_, v_i_boxed_2341_, v_stop_boxed_2342_, v_b_2339_);
lean_dec_ref(v_as_2336_);
return v_res_2343_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_2345_; lean_object* v___x_2346_; 
v___x_2345_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__0));
v___x_2346_ = l_Lean_stringToMessageData(v___x_2345_);
return v___x_2346_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg(lean_object* v_as_x27_2350_, lean_object* v_b_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_){
_start:
{
if (lean_obj_tag(v_as_x27_2350_) == 0)
{
lean_object* v___x_2355_; 
v___x_2355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2355_, 0, v_b_2351_);
return v___x_2355_;
}
else
{
lean_object* v_head_2356_; lean_object* v_snd_2357_; lean_object* v_tail_2358_; lean_object* v_fst_2359_; lean_object* v_fst_2360_; lean_object* v_snd_2361_; lean_object* v___x_2362_; 
v_head_2356_ = lean_ctor_get(v_as_x27_2350_, 0);
v_snd_2357_ = lean_ctor_get(v_head_2356_, 1);
v_tail_2358_ = lean_ctor_get(v_as_x27_2350_, 1);
v_fst_2359_ = lean_ctor_get(v_head_2356_, 0);
v_fst_2360_ = lean_ctor_get(v_snd_2357_, 0);
v_snd_2361_ = lean_ctor_get(v_snd_2357_, 1);
v___x_2362_ = lean_box(0);
if (lean_obj_tag(v_fst_2360_) == 1)
{
lean_object* v_str_2363_; lean_object* v___x_2364_; lean_object* v___x_2376_; uint8_t v___x_2377_; 
v_str_2363_ = lean_ctor_get(v_fst_2360_, 1);
lean_inc_ref(v_str_2363_);
v___x_2364_ = l_Lean_Linter_List_stripBinderName(v_str_2363_);
v___x_2376_ = ((lean_object*)(l_Lean_Linter_List_allowedArrayNames));
v___x_2377_ = l_List_elem___at___00Lean_Linter_List_indexLinter_spec__1(v___x_2364_, v___x_2376_);
if (v___x_2377_ == 0)
{
lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; uint8_t v___x_2383_; 
v___x_2378_ = l_Lean_Expr_getAppNumArgs(v_snd_2361_);
v___x_2379_ = lean_unsigned_to_nat(1u);
v___x_2380_ = lean_nat_sub(v___x_2378_, v___x_2379_);
lean_dec(v___x_2378_);
v___x_2381_ = l_Lean_Expr_getRevArg_x21(v_snd_2361_, v___x_2380_);
v___x_2382_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__3));
v___x_2383_ = l_Lean_Expr_isAppOf(v___x_2381_, v___x_2382_);
if (v___x_2383_ == 0)
{
lean_object* v___x_2384_; uint8_t v___x_2385_; 
v___x_2384_ = ((lean_object*)(l_Lean_Linter_List_numericalWidths___lam__1___closed__4));
v___x_2385_ = l_Lean_Expr_isAppOf(v___x_2381_, v___x_2384_);
lean_dec_ref(v___x_2381_);
if (v___x_2385_ == 0)
{
goto v___jp_2365_;
}
else
{
goto v___jp_2372_;
}
}
else
{
lean_dec_ref(v___x_2381_);
goto v___jp_2372_;
}
}
else
{
lean_dec_ref(v___x_2364_);
v_as_x27_2350_ = v_tail_2358_;
v_b_2351_ = v___x_2362_;
goto _start;
}
v___jp_2365_:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; 
v___x_2366_ = l_Lean_Linter_List_linter_listVariables;
v___x_2367_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__1, &l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__1);
v___x_2368_ = l_Lean_stringToMessageData(v___x_2364_);
v___x_2369_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2369_, 0, v___x_2367_);
lean_ctor_set(v___x_2369_, 1, v___x_2368_);
lean_inc(v_fst_2359_);
v___x_2370_ = l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2(v___x_2366_, v_fst_2359_, v___x_2369_, v___y_2352_, v___y_2353_);
if (lean_obj_tag(v___x_2370_) == 0)
{
lean_dec_ref_known(v___x_2370_, 1);
v_as_x27_2350_ = v_tail_2358_;
v_b_2351_ = v___x_2362_;
goto _start;
}
else
{
return v___x_2370_;
}
}
v___jp_2372_:
{
lean_object* v___x_2373_; uint8_t v___x_2374_; 
v___x_2373_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__2));
v___x_2374_ = lean_string_dec_eq(v___x_2364_, v___x_2373_);
if (v___x_2374_ == 0)
{
goto v___jp_2365_;
}
else
{
lean_dec_ref(v___x_2364_);
v_as_x27_2350_ = v_tail_2358_;
v_b_2351_ = v___x_2362_;
goto _start;
}
}
}
else
{
v_as_x27_2350_ = v_tail_2358_;
v_b_2351_ = v___x_2362_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___boxed(lean_object* v_as_x27_2388_, lean_object* v_b_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg(v_as_x27_2388_, v_b_2389_, v___y_2390_, v___y_2391_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
lean_dec(v_as_x27_2388_);
return v_res_2393_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; 
v___x_2395_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__0));
v___x_2396_ = l_Lean_stringToMessageData(v___x_2395_);
return v___x_2396_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg(lean_object* v_as_x27_2400_, lean_object* v_b_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_){
_start:
{
if (lean_obj_tag(v_as_x27_2400_) == 0)
{
lean_object* v___x_2405_; 
v___x_2405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2405_, 0, v_b_2401_);
return v___x_2405_;
}
else
{
lean_object* v_head_2406_; lean_object* v_snd_2407_; lean_object* v_tail_2408_; lean_object* v_fst_2409_; lean_object* v_fst_2410_; lean_object* v_snd_2411_; lean_object* v___x_2412_; 
v_head_2406_ = lean_ctor_get(v_as_x27_2400_, 0);
v_snd_2407_ = lean_ctor_get(v_head_2406_, 1);
v_tail_2408_ = lean_ctor_get(v_as_x27_2400_, 1);
v_fst_2409_ = lean_ctor_get(v_head_2406_, 0);
v_fst_2410_ = lean_ctor_get(v_snd_2407_, 0);
v_snd_2411_ = lean_ctor_get(v_snd_2407_, 1);
v___x_2412_ = lean_box(0);
if (lean_obj_tag(v_fst_2410_) == 1)
{
lean_object* v_str_2413_; lean_object* v___x_2414_; lean_object* v___x_2429_; uint8_t v___x_2430_; 
v_str_2413_ = lean_ctor_get(v_fst_2410_, 1);
lean_inc_ref(v_str_2413_);
v___x_2414_ = l_Lean_Linter_List_stripBinderName(v_str_2413_);
v___x_2429_ = ((lean_object*)(l_Lean_Linter_List_allowedListNames));
v___x_2430_ = l_List_elem___at___00Lean_Linter_List_indexLinter_spec__1(v___x_2414_, v___x_2429_);
if (v___x_2430_ == 0)
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; uint8_t v___x_2436_; 
v___x_2431_ = l_Lean_Expr_getAppNumArgs(v_snd_2411_);
v___x_2432_ = lean_unsigned_to_nat(1u);
v___x_2433_ = lean_nat_sub(v___x_2431_, v___x_2432_);
lean_dec(v___x_2431_);
v___x_2434_ = l_Lean_Expr_getRevArg_x21(v_snd_2411_, v___x_2433_);
v___x_2435_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__3));
v___x_2436_ = l_Lean_Expr_isAppOf(v___x_2434_, v___x_2435_);
if (v___x_2436_ == 0)
{
lean_object* v___x_2437_; uint8_t v___x_2438_; 
v___x_2437_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__3));
v___x_2438_ = l_Lean_Expr_isAppOf(v___x_2434_, v___x_2437_);
lean_dec_ref(v___x_2434_);
if (v___x_2438_ == 0)
{
goto v___jp_2415_;
}
else
{
goto v___jp_2422_;
}
}
else
{
lean_dec_ref(v___x_2434_);
goto v___jp_2422_;
}
}
else
{
lean_dec_ref(v___x_2414_);
v_as_x27_2400_ = v_tail_2408_;
v_b_2401_ = v___x_2412_;
goto _start;
}
v___jp_2415_:
{
lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2416_ = l_Lean_Linter_List_linter_listVariables;
v___x_2417_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__1, &l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__1);
v___x_2418_ = l_Lean_stringToMessageData(v___x_2414_);
v___x_2419_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2417_);
lean_ctor_set(v___x_2419_, 1, v___x_2418_);
lean_inc(v_fst_2409_);
v___x_2420_ = l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2(v___x_2416_, v_fst_2409_, v___x_2419_, v___y_2402_, v___y_2403_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_dec_ref_known(v___x_2420_, 1);
v_as_x27_2400_ = v_tail_2408_;
v_b_2401_ = v___x_2412_;
goto _start;
}
else
{
return v___x_2420_;
}
}
v___jp_2422_:
{
lean_object* v___x_2423_; uint8_t v___x_2424_; 
v___x_2423_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__2));
v___x_2424_ = lean_string_dec_eq(v___x_2414_, v___x_2423_);
if (v___x_2424_ == 0)
{
lean_object* v___x_2425_; uint8_t v___x_2426_; 
v___x_2425_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__2));
v___x_2426_ = lean_string_dec_eq(v___x_2414_, v___x_2425_);
if (v___x_2426_ == 0)
{
goto v___jp_2415_;
}
else
{
lean_dec_ref(v___x_2414_);
v_as_x27_2400_ = v_tail_2408_;
v_b_2401_ = v___x_2412_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_2414_);
v_as_x27_2400_ = v_tail_2408_;
v_b_2401_ = v___x_2412_;
goto _start;
}
}
}
else
{
v_as_x27_2400_ = v_tail_2408_;
v_b_2401_ = v___x_2412_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___boxed(lean_object* v_as_x27_2441_, lean_object* v_b_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_){
_start:
{
lean_object* v_res_2446_; 
v_res_2446_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg(v_as_x27_2441_, v_b_2442_, v___y_2443_, v___y_2444_);
lean_dec(v___y_2444_);
lean_dec_ref(v___y_2443_);
lean_dec(v_as_x27_2441_);
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__2(lean_object* v_a_2447_, lean_object* v_a_2448_){
_start:
{
if (lean_obj_tag(v_a_2447_) == 0)
{
lean_object* v___x_2449_; 
v___x_2449_ = l_List_reverse___redArg(v_a_2448_);
return v___x_2449_;
}
else
{
lean_object* v_head_2450_; lean_object* v_snd_2451_; lean_object* v_tail_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2464_; 
v_head_2450_ = lean_ctor_get(v_a_2447_, 0);
lean_inc(v_head_2450_);
v_snd_2451_ = lean_ctor_get(v_head_2450_, 1);
v_tail_2452_ = lean_ctor_get(v_a_2447_, 1);
v_isSharedCheck_2464_ = !lean_is_exclusive(v_a_2447_);
if (v_isSharedCheck_2464_ == 0)
{
lean_object* v_unused_2465_; 
v_unused_2465_ = lean_ctor_get(v_a_2447_, 0);
lean_dec(v_unused_2465_);
v___x_2454_ = v_a_2447_;
v_isShared_2455_ = v_isSharedCheck_2464_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_tail_2452_);
lean_dec(v_a_2447_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2464_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v_snd_2456_; lean_object* v___x_2457_; uint8_t v___x_2458_; 
v_snd_2456_ = lean_ctor_get(v_snd_2451_, 1);
v___x_2457_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__3));
v___x_2458_ = l_Lean_Expr_isAppOf(v_snd_2456_, v___x_2457_);
if (v___x_2458_ == 0)
{
lean_del_object(v___x_2454_);
lean_dec(v_head_2450_);
v_a_2447_ = v_tail_2452_;
goto _start;
}
else
{
lean_object* v___x_2461_; 
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 1, v_a_2448_);
v___x_2461_ = v___x_2454_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v_head_2450_);
lean_ctor_set(v_reuseFailAlloc_2463_, 1, v_a_2448_);
v___x_2461_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
v_a_2447_ = v_tail_2452_;
v_a_2448_ = v___x_2461_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7___lam__0(uint8_t v_v_2466_, lean_object* v_x_2467_){
_start:
{
return v_v_2466_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7___lam__0___boxed(lean_object* v_v_2468_, lean_object* v_x_2469_){
_start:
{
uint8_t v_v_14798__boxed_2470_; uint8_t v_res_2471_; lean_object* v_r_2472_; 
v_v_14798__boxed_2470_ = lean_unbox(v_v_2468_);
v_res_2471_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7___lam__0(v_v_14798__boxed_2470_, v_x_2469_);
lean_dec_ref(v_x_2469_);
v_r_2472_ = lean_box(v_res_2471_);
return v_r_2472_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__0(lean_object* v_a_2473_, lean_object* v_a_2474_){
_start:
{
if (lean_obj_tag(v_a_2473_) == 0)
{
lean_object* v___x_2475_; 
v___x_2475_ = l_List_reverse___redArg(v_a_2474_);
return v___x_2475_;
}
else
{
lean_object* v_head_2476_; lean_object* v_snd_2477_; lean_object* v_tail_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2490_; 
v_head_2476_ = lean_ctor_get(v_a_2473_, 0);
lean_inc(v_head_2476_);
v_snd_2477_ = lean_ctor_get(v_head_2476_, 1);
v_tail_2478_ = lean_ctor_get(v_a_2473_, 1);
v_isSharedCheck_2490_ = !lean_is_exclusive(v_a_2473_);
if (v_isSharedCheck_2490_ == 0)
{
lean_object* v_unused_2491_; 
v_unused_2491_ = lean_ctor_get(v_a_2473_, 0);
lean_dec(v_unused_2491_);
v___x_2480_ = v_a_2473_;
v_isShared_2481_ = v_isSharedCheck_2490_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_tail_2478_);
lean_dec(v_a_2473_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2490_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v_snd_2482_; lean_object* v___x_2483_; uint8_t v___x_2484_; 
v_snd_2482_ = lean_ctor_get(v_snd_2477_, 1);
v___x_2483_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg___closed__3));
v___x_2484_ = l_Lean_Expr_isAppOf(v_snd_2482_, v___x_2483_);
if (v___x_2484_ == 0)
{
lean_del_object(v___x_2480_);
lean_dec(v_head_2476_);
v_a_2473_ = v_tail_2478_;
goto _start;
}
else
{
lean_object* v___x_2487_; 
if (v_isShared_2481_ == 0)
{
lean_ctor_set(v___x_2480_, 1, v_a_2474_);
v___x_2487_ = v___x_2480_;
goto v_reusejp_2486_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_head_2476_);
lean_ctor_set(v_reuseFailAlloc_2489_, 1, v_a_2474_);
v___x_2487_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2486_;
}
v_reusejp_2486_:
{
v_a_2473_ = v_tail_2478_;
v_a_2474_ = v___x_2487_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_2493_; lean_object* v___x_2494_; 
v___x_2493_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg___closed__0));
v___x_2494_ = l_Lean_stringToMessageData(v___x_2493_);
return v___x_2494_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg(lean_object* v_as_x27_2495_, lean_object* v_b_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_){
_start:
{
if (lean_obj_tag(v_as_x27_2495_) == 0)
{
lean_object* v___x_2500_; 
v___x_2500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2500_, 0, v_b_2496_);
return v___x_2500_;
}
else
{
lean_object* v_head_2501_; lean_object* v_snd_2502_; lean_object* v_tail_2503_; lean_object* v_fst_2504_; lean_object* v_fst_2505_; lean_object* v_snd_2506_; lean_object* v___x_2507_; 
v_head_2501_ = lean_ctor_get(v_as_x27_2495_, 0);
v_snd_2502_ = lean_ctor_get(v_head_2501_, 1);
v_tail_2503_ = lean_ctor_get(v_as_x27_2495_, 1);
v_fst_2504_ = lean_ctor_get(v_head_2501_, 0);
v_fst_2505_ = lean_ctor_get(v_snd_2502_, 0);
v_snd_2506_ = lean_ctor_get(v_snd_2502_, 1);
v___x_2507_ = lean_box(0);
if (lean_obj_tag(v_fst_2505_) == 1)
{
lean_object* v_str_2508_; lean_object* v___x_2509_; lean_object* v___x_2517_; uint8_t v___x_2518_; 
v_str_2508_ = lean_ctor_get(v_fst_2505_, 1);
lean_inc_ref(v_str_2508_);
v___x_2509_ = l_Lean_Linter_List_stripBinderName(v_str_2508_);
v___x_2517_ = ((lean_object*)(l_Lean_Linter_List_allowedVectorNames));
v___x_2518_ = l_List_elem___at___00Lean_Linter_List_indexLinter_spec__1(v___x_2509_, v___x_2517_);
if (v___x_2518_ == 0)
{
lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; uint8_t v___x_2524_; 
v___x_2519_ = l_Lean_Expr_getAppNumArgs(v_snd_2506_);
v___x_2520_ = lean_unsigned_to_nat(1u);
v___x_2521_ = lean_nat_sub(v___x_2519_, v___x_2520_);
lean_dec(v___x_2519_);
v___x_2522_ = l_Lean_Expr_getRevArg_x21(v_snd_2506_, v___x_2521_);
v___x_2523_ = ((lean_object*)(l_Lean_Linter_List_numericalWidths___lam__1___closed__4));
v___x_2524_ = l_Lean_Expr_isAppOf(v___x_2522_, v___x_2523_);
lean_dec_ref(v___x_2522_);
if (v___x_2524_ == 0)
{
goto v___jp_2510_;
}
else
{
lean_object* v___x_2525_; uint8_t v___x_2526_; 
v___x_2525_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg___closed__2));
v___x_2526_ = lean_string_dec_eq(v___x_2509_, v___x_2525_);
if (v___x_2526_ == 0)
{
goto v___jp_2510_;
}
else
{
lean_dec_ref(v___x_2509_);
v_as_x27_2495_ = v_tail_2503_;
v_b_2496_ = v___x_2507_;
goto _start;
}
}
}
else
{
lean_dec_ref(v___x_2509_);
v_as_x27_2495_ = v_tail_2503_;
v_b_2496_ = v___x_2507_;
goto _start;
}
v___jp_2510_:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; 
v___x_2511_ = l_Lean_Linter_List_linter_listVariables;
v___x_2512_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg___closed__1, &l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg___closed__1);
v___x_2513_ = l_Lean_stringToMessageData(v___x_2509_);
v___x_2514_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2514_, 0, v___x_2512_);
lean_ctor_set(v___x_2514_, 1, v___x_2513_);
lean_inc(v_fst_2504_);
v___x_2515_ = l_Lean_Linter_logLint___at___00Lean_Linter_List_indexLinter_spec__2(v___x_2511_, v_fst_2504_, v___x_2514_, v___y_2497_, v___y_2498_);
if (lean_obj_tag(v___x_2515_) == 0)
{
lean_dec_ref_known(v___x_2515_, 1);
v_as_x27_2495_ = v_tail_2503_;
v_b_2496_ = v___x_2507_;
goto _start;
}
else
{
return v___x_2515_;
}
}
}
else
{
v_as_x27_2495_ = v_tail_2503_;
v_b_2496_ = v___x_2507_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg___boxed(lean_object* v_as_x27_2530_, lean_object* v_b_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_){
_start:
{
lean_object* v_res_2535_; 
v_res_2535_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg(v_as_x27_2530_, v_b_2531_, v___y_2532_, v___y_2533_);
lean_dec(v___y_2533_);
lean_dec_ref(v___y_2532_);
lean_dec(v_as_x27_2530_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__4(lean_object* v_a_2536_, lean_object* v_a_2537_){
_start:
{
if (lean_obj_tag(v_a_2536_) == 0)
{
lean_object* v___x_2538_; 
v___x_2538_ = l_List_reverse___redArg(v_a_2537_);
return v___x_2538_;
}
else
{
lean_object* v_head_2539_; lean_object* v_snd_2540_; lean_object* v_tail_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2553_; 
v_head_2539_ = lean_ctor_get(v_a_2536_, 0);
lean_inc(v_head_2539_);
v_snd_2540_ = lean_ctor_get(v_head_2539_, 1);
v_tail_2541_ = lean_ctor_get(v_a_2536_, 1);
v_isSharedCheck_2553_ = !lean_is_exclusive(v_a_2536_);
if (v_isSharedCheck_2553_ == 0)
{
lean_object* v_unused_2554_; 
v_unused_2554_ = lean_ctor_get(v_a_2536_, 0);
lean_dec(v_unused_2554_);
v___x_2543_ = v_a_2536_;
v_isShared_2544_ = v_isSharedCheck_2553_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_tail_2541_);
lean_dec(v_a_2536_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2553_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v_snd_2545_; lean_object* v___x_2546_; uint8_t v___x_2547_; 
v_snd_2545_ = lean_ctor_get(v_snd_2540_, 1);
v___x_2546_ = ((lean_object*)(l_Lean_Linter_List_numericalWidths___lam__1___closed__4));
v___x_2547_ = l_Lean_Expr_isAppOf(v_snd_2545_, v___x_2546_);
if (v___x_2547_ == 0)
{
lean_del_object(v___x_2543_);
lean_dec(v_head_2539_);
v_a_2536_ = v_tail_2541_;
goto _start;
}
else
{
lean_object* v___x_2550_; 
if (v_isShared_2544_ == 0)
{
lean_ctor_set(v___x_2543_, 1, v_a_2537_);
v___x_2550_ = v___x_2543_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2552_; 
v_reuseFailAlloc_2552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2552_, 0, v_head_2539_);
lean_ctor_set(v_reuseFailAlloc_2552_, 1, v_a_2537_);
v___x_2550_ = v_reuseFailAlloc_2552_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
v_a_2536_ = v_tail_2541_;
v_a_2537_ = v___x_2550_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__8_spec__9(uint8_t v_v_2555_, lean_object* v_as_2556_, size_t v_sz_2557_, size_t v_i_2558_, lean_object* v_b_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_){
_start:
{
uint8_t v___x_2563_; 
v___x_2563_ = lean_usize_dec_lt(v_i_2558_, v_sz_2557_);
if (v___x_2563_ == 0)
{
lean_object* v___x_2564_; 
v___x_2564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2564_, 0, v_b_2559_);
return v___x_2564_;
}
else
{
lean_object* v___x_2565_; lean_object* v___f_2566_; lean_object* v___x_2567_; lean_object* v_a_2568_; lean_object* v___x_2569_; 
lean_dec_ref(v_b_2559_);
v___x_2565_ = lean_box(v_v_2555_);
v___f_2566_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2566_, 0, v___x_2565_);
v___x_2567_ = lean_box(0);
v_a_2568_ = lean_array_uget_borrowed(v_as_2556_, v_i_2558_);
lean_inc(v_a_2568_);
v___x_2569_ = l_Lean_Linter_List_binders(v_a_2568_, v___f_2566_);
if (lean_obj_tag(v___x_2569_) == 0)
{
lean_object* v_a_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v_a_2570_ = lean_ctor_get(v___x_2569_, 0);
lean_inc_n(v_a_2570_, 2);
lean_dec_ref_known(v___x_2569_, 1);
v___x_2571_ = lean_box(0);
v___x_2572_ = l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__0(v_a_2570_, v___x_2571_);
v___x_2573_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg(v___x_2572_, v___x_2567_, v___y_2560_, v___y_2561_);
lean_dec(v___x_2572_);
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v___x_2574_; lean_object* v___x_2575_; 
lean_dec_ref_known(v___x_2573_, 1);
lean_inc(v_a_2570_);
v___x_2574_ = l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__2(v_a_2570_, v___x_2571_);
v___x_2575_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg(v___x_2574_, v___x_2567_, v___y_2560_, v___y_2561_);
lean_dec(v___x_2574_);
if (lean_obj_tag(v___x_2575_) == 0)
{
lean_object* v___x_2576_; lean_object* v___x_2577_; 
lean_dec_ref_known(v___x_2575_, 1);
v___x_2576_ = l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__4(v_a_2570_, v___x_2571_);
v___x_2577_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg(v___x_2576_, v___x_2567_, v___y_2560_, v___y_2561_);
lean_dec(v___x_2576_);
if (lean_obj_tag(v___x_2577_) == 0)
{
lean_object* v___x_2578_; size_t v___x_2579_; size_t v___x_2580_; 
lean_dec_ref_known(v___x_2577_, 1);
v___x_2578_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10_spec__13___closed__0));
v___x_2579_ = ((size_t)1ULL);
v___x_2580_ = lean_usize_add(v_i_2558_, v___x_2579_);
v_i_2558_ = v___x_2580_;
v_b_2559_ = v___x_2578_;
goto _start;
}
else
{
lean_object* v_a_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2589_; 
v_a_2582_ = lean_ctor_get(v___x_2577_, 0);
v_isSharedCheck_2589_ = !lean_is_exclusive(v___x_2577_);
if (v_isSharedCheck_2589_ == 0)
{
v___x_2584_ = v___x_2577_;
v_isShared_2585_ = v_isSharedCheck_2589_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_a_2582_);
lean_dec(v___x_2577_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2589_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v___x_2587_; 
if (v_isShared_2585_ == 0)
{
v___x_2587_ = v___x_2584_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v_a_2582_);
v___x_2587_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
return v___x_2587_;
}
}
}
}
else
{
lean_object* v_a_2590_; lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2597_; 
lean_dec(v_a_2570_);
v_a_2590_ = lean_ctor_get(v___x_2575_, 0);
v_isSharedCheck_2597_ = !lean_is_exclusive(v___x_2575_);
if (v_isSharedCheck_2597_ == 0)
{
v___x_2592_ = v___x_2575_;
v_isShared_2593_ = v_isSharedCheck_2597_;
goto v_resetjp_2591_;
}
else
{
lean_inc(v_a_2590_);
lean_dec(v___x_2575_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2597_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
lean_object* v___x_2595_; 
if (v_isShared_2593_ == 0)
{
v___x_2595_ = v___x_2592_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v_a_2590_);
v___x_2595_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
return v___x_2595_;
}
}
}
}
else
{
lean_object* v_a_2598_; lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2605_; 
lean_dec(v_a_2570_);
v_a_2598_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2605_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2605_ == 0)
{
v___x_2600_ = v___x_2573_;
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
else
{
lean_inc(v_a_2598_);
lean_dec(v___x_2573_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
lean_object* v___x_2603_; 
if (v_isShared_2601_ == 0)
{
v___x_2603_ = v___x_2600_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v_a_2598_);
v___x_2603_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
return v___x_2603_;
}
}
}
}
else
{
lean_object* v_a_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2618_; 
v_a_2606_ = lean_ctor_get(v___x_2569_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2569_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2608_ = v___x_2569_;
v_isShared_2609_ = v_isSharedCheck_2618_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_a_2606_);
lean_dec(v___x_2569_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2618_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v_ref_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2616_; 
v_ref_2610_ = lean_ctor_get(v___y_2560_, 7);
v___x_2611_ = lean_io_error_to_string(v_a_2606_);
v___x_2612_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2611_);
v___x_2613_ = l_Lean_MessageData_ofFormat(v___x_2612_);
lean_inc(v_ref_2610_);
v___x_2614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2614_, 0, v_ref_2610_);
lean_ctor_set(v___x_2614_, 1, v___x_2613_);
if (v_isShared_2609_ == 0)
{
lean_ctor_set(v___x_2608_, 0, v___x_2614_);
v___x_2616_ = v___x_2608_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v___x_2614_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__8_spec__9___boxed(lean_object* v_v_2619_, lean_object* v_as_2620_, lean_object* v_sz_2621_, lean_object* v_i_2622_, lean_object* v_b_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_){
_start:
{
uint8_t v_v_14978__boxed_2627_; size_t v_sz_boxed_2628_; size_t v_i_boxed_2629_; lean_object* v_res_2630_; 
v_v_14978__boxed_2627_ = lean_unbox(v_v_2619_);
v_sz_boxed_2628_ = lean_unbox_usize(v_sz_2621_);
lean_dec(v_sz_2621_);
v_i_boxed_2629_ = lean_unbox_usize(v_i_2622_);
lean_dec(v_i_2622_);
v_res_2630_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__8_spec__9(v_v_14978__boxed_2627_, v_as_2620_, v_sz_boxed_2628_, v_i_boxed_2629_, v_b_2623_, v___y_2624_, v___y_2625_);
lean_dec(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec_ref(v_as_2620_);
return v_res_2630_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__8(uint8_t v_v_2631_, lean_object* v_as_2632_, size_t v_sz_2633_, size_t v_i_2634_, lean_object* v_b_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_){
_start:
{
uint8_t v___x_2639_; 
v___x_2639_ = lean_usize_dec_lt(v_i_2634_, v_sz_2633_);
if (v___x_2639_ == 0)
{
lean_object* v___x_2640_; 
v___x_2640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2640_, 0, v_b_2635_);
return v___x_2640_;
}
else
{
lean_object* v___x_2641_; lean_object* v___f_2642_; lean_object* v___x_2643_; lean_object* v_a_2644_; lean_object* v___x_2645_; 
lean_dec_ref(v_b_2635_);
v___x_2641_ = lean_box(v_v_2631_);
v___f_2642_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2642_, 0, v___x_2641_);
v___x_2643_ = lean_box(0);
v_a_2644_ = lean_array_uget_borrowed(v_as_2632_, v_i_2634_);
lean_inc(v_a_2644_);
v___x_2645_ = l_Lean_Linter_List_binders(v_a_2644_, v___f_2642_);
if (lean_obj_tag(v___x_2645_) == 0)
{
lean_object* v_a_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; 
v_a_2646_ = lean_ctor_get(v___x_2645_, 0);
lean_inc_n(v_a_2646_, 2);
lean_dec_ref_known(v___x_2645_, 1);
v___x_2647_ = lean_box(0);
v___x_2648_ = l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__0(v_a_2646_, v___x_2647_);
v___x_2649_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg(v___x_2648_, v___x_2643_, v___y_2636_, v___y_2637_);
lean_dec(v___x_2648_);
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v___x_2650_; lean_object* v___x_2651_; 
lean_dec_ref_known(v___x_2649_, 1);
lean_inc(v_a_2646_);
v___x_2650_ = l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__2(v_a_2646_, v___x_2647_);
v___x_2651_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg(v___x_2650_, v___x_2643_, v___y_2636_, v___y_2637_);
lean_dec(v___x_2650_);
if (lean_obj_tag(v___x_2651_) == 0)
{
lean_object* v___x_2652_; lean_object* v___x_2653_; 
lean_dec_ref_known(v___x_2651_, 1);
v___x_2652_ = l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__4(v_a_2646_, v___x_2647_);
v___x_2653_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg(v___x_2652_, v___x_2643_, v___y_2636_, v___y_2637_);
lean_dec(v___x_2652_);
if (lean_obj_tag(v___x_2653_) == 0)
{
lean_object* v___x_2654_; size_t v___x_2655_; size_t v___x_2656_; lean_object* v___x_2657_; 
lean_dec_ref_known(v___x_2653_, 1);
v___x_2654_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__7_spec__10_spec__13___closed__0));
v___x_2655_ = ((size_t)1ULL);
v___x_2656_ = lean_usize_add(v_i_2634_, v___x_2655_);
v___x_2657_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__8_spec__9(v_v_2631_, v_as_2632_, v_sz_2633_, v___x_2656_, v___x_2654_, v___y_2636_, v___y_2637_);
return v___x_2657_;
}
else
{
lean_object* v_a_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2665_; 
v_a_2658_ = lean_ctor_get(v___x_2653_, 0);
v_isSharedCheck_2665_ = !lean_is_exclusive(v___x_2653_);
if (v_isSharedCheck_2665_ == 0)
{
v___x_2660_ = v___x_2653_;
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_a_2658_);
lean_dec(v___x_2653_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2663_; 
if (v_isShared_2661_ == 0)
{
v___x_2663_ = v___x_2660_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v_a_2658_);
v___x_2663_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
return v___x_2663_;
}
}
}
}
else
{
lean_object* v_a_2666_; lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2673_; 
lean_dec(v_a_2646_);
v_a_2666_ = lean_ctor_get(v___x_2651_, 0);
v_isSharedCheck_2673_ = !lean_is_exclusive(v___x_2651_);
if (v_isSharedCheck_2673_ == 0)
{
v___x_2668_ = v___x_2651_;
v_isShared_2669_ = v_isSharedCheck_2673_;
goto v_resetjp_2667_;
}
else
{
lean_inc(v_a_2666_);
lean_dec(v___x_2651_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2673_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
lean_object* v___x_2671_; 
if (v_isShared_2669_ == 0)
{
v___x_2671_ = v___x_2668_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v_a_2666_);
v___x_2671_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
return v___x_2671_;
}
}
}
}
else
{
lean_object* v_a_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2681_; 
lean_dec(v_a_2646_);
v_a_2674_ = lean_ctor_get(v___x_2649_, 0);
v_isSharedCheck_2681_ = !lean_is_exclusive(v___x_2649_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2676_ = v___x_2649_;
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_a_2674_);
lean_dec(v___x_2649_);
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
else
{
lean_object* v_a_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2694_; 
v_a_2682_ = lean_ctor_get(v___x_2645_, 0);
v_isSharedCheck_2694_ = !lean_is_exclusive(v___x_2645_);
if (v_isSharedCheck_2694_ == 0)
{
v___x_2684_ = v___x_2645_;
v_isShared_2685_ = v_isSharedCheck_2694_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_a_2682_);
lean_dec(v___x_2645_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2694_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
lean_object* v_ref_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2692_; 
v_ref_2686_ = lean_ctor_get(v___y_2636_, 7);
v___x_2687_ = lean_io_error_to_string(v_a_2682_);
v___x_2688_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2687_);
v___x_2689_ = l_Lean_MessageData_ofFormat(v___x_2688_);
lean_inc(v_ref_2686_);
v___x_2690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2690_, 0, v_ref_2686_);
lean_ctor_set(v___x_2690_, 1, v___x_2689_);
if (v_isShared_2685_ == 0)
{
lean_ctor_set(v___x_2684_, 0, v___x_2690_);
v___x_2692_ = v___x_2684_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v___x_2690_);
v___x_2692_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
return v___x_2692_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__8___boxed(lean_object* v_v_2695_, lean_object* v_as_2696_, lean_object* v_sz_2697_, lean_object* v_i_2698_, lean_object* v_b_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_){
_start:
{
uint8_t v_v_15105__boxed_2703_; size_t v_sz_boxed_2704_; size_t v_i_boxed_2705_; lean_object* v_res_2706_; 
v_v_15105__boxed_2703_ = lean_unbox(v_v_2695_);
v_sz_boxed_2704_ = lean_unbox_usize(v_sz_2697_);
lean_dec(v_sz_2697_);
v_i_boxed_2705_ = lean_unbox_usize(v_i_2698_);
lean_dec(v_i_2698_);
v_res_2706_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__8(v_v_15105__boxed_2703_, v_as_2696_, v_sz_boxed_2704_, v_i_boxed_2705_, v_b_2699_, v___y_2700_, v___y_2701_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
lean_dec_ref(v_as_2696_);
return v_res_2706_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6(lean_object* v_init_2707_, uint8_t v_v_2708_, lean_object* v_n_2709_, lean_object* v_b_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_){
_start:
{
if (lean_obj_tag(v_n_2709_) == 0)
{
lean_object* v_cs_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; size_t v_sz_2717_; size_t v___x_2718_; lean_object* v___x_2719_; 
v_cs_2714_ = lean_ctor_get(v_n_2709_, 0);
v___x_2715_ = lean_box(0);
v___x_2716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2715_);
lean_ctor_set(v___x_2716_, 1, v_b_2710_);
v_sz_2717_ = lean_array_size(v_cs_2714_);
v___x_2718_ = ((size_t)0ULL);
v___x_2719_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__7(v_init_2707_, v_v_2708_, v_cs_2714_, v_sz_2717_, v___x_2718_, v___x_2716_, v___y_2711_, v___y_2712_);
if (lean_obj_tag(v___x_2719_) == 0)
{
lean_object* v_a_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2734_; 
v_a_2720_ = lean_ctor_get(v___x_2719_, 0);
v_isSharedCheck_2734_ = !lean_is_exclusive(v___x_2719_);
if (v_isSharedCheck_2734_ == 0)
{
v___x_2722_ = v___x_2719_;
v_isShared_2723_ = v_isSharedCheck_2734_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_a_2720_);
lean_dec(v___x_2719_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2734_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
lean_object* v_fst_2724_; 
v_fst_2724_ = lean_ctor_get(v_a_2720_, 0);
if (lean_obj_tag(v_fst_2724_) == 0)
{
lean_object* v_snd_2725_; lean_object* v___x_2726_; lean_object* v___x_2728_; 
v_snd_2725_ = lean_ctor_get(v_a_2720_, 1);
lean_inc(v_snd_2725_);
lean_dec(v_a_2720_);
v___x_2726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2726_, 0, v_snd_2725_);
if (v_isShared_2723_ == 0)
{
lean_ctor_set(v___x_2722_, 0, v___x_2726_);
v___x_2728_ = v___x_2722_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v___x_2726_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
else
{
lean_object* v_val_2730_; lean_object* v___x_2732_; 
lean_inc_ref(v_fst_2724_);
lean_dec(v_a_2720_);
v_val_2730_ = lean_ctor_get(v_fst_2724_, 0);
lean_inc(v_val_2730_);
lean_dec_ref_known(v_fst_2724_, 1);
if (v_isShared_2723_ == 0)
{
lean_ctor_set(v___x_2722_, 0, v_val_2730_);
v___x_2732_ = v___x_2722_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v_val_2730_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
return v___x_2732_;
}
}
}
}
else
{
lean_object* v_a_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2742_; 
v_a_2735_ = lean_ctor_get(v___x_2719_, 0);
v_isSharedCheck_2742_ = !lean_is_exclusive(v___x_2719_);
if (v_isSharedCheck_2742_ == 0)
{
v___x_2737_ = v___x_2719_;
v_isShared_2738_ = v_isSharedCheck_2742_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_a_2735_);
lean_dec(v___x_2719_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2742_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
lean_object* v___x_2740_; 
if (v_isShared_2738_ == 0)
{
v___x_2740_ = v___x_2737_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v_a_2735_);
v___x_2740_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
return v___x_2740_;
}
}
}
}
else
{
lean_object* v_vs_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; size_t v_sz_2746_; size_t v___x_2747_; lean_object* v___x_2748_; 
v_vs_2743_ = lean_ctor_get(v_n_2709_, 0);
v___x_2744_ = lean_box(0);
v___x_2745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2745_, 0, v___x_2744_);
lean_ctor_set(v___x_2745_, 1, v_b_2710_);
v_sz_2746_ = lean_array_size(v_vs_2743_);
v___x_2747_ = ((size_t)0ULL);
v___x_2748_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__8(v_v_2708_, v_vs_2743_, v_sz_2746_, v___x_2747_, v___x_2745_, v___y_2711_, v___y_2712_);
if (lean_obj_tag(v___x_2748_) == 0)
{
lean_object* v_a_2749_; lean_object* v___x_2751_; uint8_t v_isShared_2752_; uint8_t v_isSharedCheck_2763_; 
v_a_2749_ = lean_ctor_get(v___x_2748_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2748_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2751_ = v___x_2748_;
v_isShared_2752_ = v_isSharedCheck_2763_;
goto v_resetjp_2750_;
}
else
{
lean_inc(v_a_2749_);
lean_dec(v___x_2748_);
v___x_2751_ = lean_box(0);
v_isShared_2752_ = v_isSharedCheck_2763_;
goto v_resetjp_2750_;
}
v_resetjp_2750_:
{
lean_object* v_fst_2753_; 
v_fst_2753_ = lean_ctor_get(v_a_2749_, 0);
if (lean_obj_tag(v_fst_2753_) == 0)
{
lean_object* v_snd_2754_; lean_object* v___x_2755_; lean_object* v___x_2757_; 
v_snd_2754_ = lean_ctor_get(v_a_2749_, 1);
lean_inc(v_snd_2754_);
lean_dec(v_a_2749_);
v___x_2755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2755_, 0, v_snd_2754_);
if (v_isShared_2752_ == 0)
{
lean_ctor_set(v___x_2751_, 0, v___x_2755_);
v___x_2757_ = v___x_2751_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v___x_2755_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
return v___x_2757_;
}
}
else
{
lean_object* v_val_2759_; lean_object* v___x_2761_; 
lean_inc_ref(v_fst_2753_);
lean_dec(v_a_2749_);
v_val_2759_ = lean_ctor_get(v_fst_2753_, 0);
lean_inc(v_val_2759_);
lean_dec_ref_known(v_fst_2753_, 1);
if (v_isShared_2752_ == 0)
{
lean_ctor_set(v___x_2751_, 0, v_val_2759_);
v___x_2761_ = v___x_2751_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_val_2759_);
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
else
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
v_a_2764_ = lean_ctor_get(v___x_2748_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2748_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2766_ = v___x_2748_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v___x_2748_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2769_; 
if (v_isShared_2767_ == 0)
{
v___x_2769_ = v___x_2766_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_a_2764_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__7(lean_object* v_init_2772_, uint8_t v_v_2773_, lean_object* v_as_2774_, size_t v_sz_2775_, size_t v_i_2776_, lean_object* v_b_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_){
_start:
{
uint8_t v___x_2781_; 
v___x_2781_ = lean_usize_dec_lt(v_i_2776_, v_sz_2775_);
if (v___x_2781_ == 0)
{
lean_object* v___x_2782_; 
v___x_2782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2782_, 0, v_b_2777_);
return v___x_2782_;
}
else
{
lean_object* v_snd_2783_; lean_object* v___x_2785_; uint8_t v_isShared_2786_; uint8_t v_isSharedCheck_2817_; 
v_snd_2783_ = lean_ctor_get(v_b_2777_, 1);
v_isSharedCheck_2817_ = !lean_is_exclusive(v_b_2777_);
if (v_isSharedCheck_2817_ == 0)
{
lean_object* v_unused_2818_; 
v_unused_2818_ = lean_ctor_get(v_b_2777_, 0);
lean_dec(v_unused_2818_);
v___x_2785_ = v_b_2777_;
v_isShared_2786_ = v_isSharedCheck_2817_;
goto v_resetjp_2784_;
}
else
{
lean_inc(v_snd_2783_);
lean_dec(v_b_2777_);
v___x_2785_ = lean_box(0);
v_isShared_2786_ = v_isSharedCheck_2817_;
goto v_resetjp_2784_;
}
v_resetjp_2784_:
{
lean_object* v___x_2787_; lean_object* v_a_2788_; lean_object* v___x_2789_; 
v___x_2787_ = lean_box(0);
v_a_2788_ = lean_array_uget_borrowed(v_as_2774_, v_i_2776_);
lean_inc(v_snd_2783_);
v___x_2789_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6(v_init_2772_, v_v_2773_, v_a_2788_, v_snd_2783_, v___y_2778_, v___y_2779_);
if (lean_obj_tag(v___x_2789_) == 0)
{
lean_object* v_a_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2808_; 
v_a_2790_ = lean_ctor_get(v___x_2789_, 0);
v_isSharedCheck_2808_ = !lean_is_exclusive(v___x_2789_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2792_ = v___x_2789_;
v_isShared_2793_ = v_isSharedCheck_2808_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_a_2790_);
lean_dec(v___x_2789_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2808_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
if (lean_obj_tag(v_a_2790_) == 0)
{
lean_object* v___x_2794_; lean_object* v___x_2796_; 
v___x_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2794_, 0, v_a_2790_);
if (v_isShared_2786_ == 0)
{
lean_ctor_set(v___x_2785_, 0, v___x_2794_);
v___x_2796_ = v___x_2785_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v___x_2794_);
lean_ctor_set(v_reuseFailAlloc_2800_, 1, v_snd_2783_);
v___x_2796_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
lean_object* v___x_2798_; 
if (v_isShared_2793_ == 0)
{
lean_ctor_set(v___x_2792_, 0, v___x_2796_);
v___x_2798_ = v___x_2792_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v___x_2796_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
return v___x_2798_;
}
}
}
else
{
lean_object* v_a_2801_; lean_object* v___x_2803_; 
lean_del_object(v___x_2792_);
lean_dec(v_snd_2783_);
v_a_2801_ = lean_ctor_get(v_a_2790_, 0);
lean_inc(v_a_2801_);
lean_dec_ref_known(v_a_2790_, 1);
if (v_isShared_2786_ == 0)
{
lean_ctor_set(v___x_2785_, 1, v_a_2801_);
lean_ctor_set(v___x_2785_, 0, v___x_2787_);
v___x_2803_ = v___x_2785_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v___x_2787_);
lean_ctor_set(v_reuseFailAlloc_2807_, 1, v_a_2801_);
v___x_2803_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
size_t v___x_2804_; size_t v___x_2805_; 
v___x_2804_ = ((size_t)1ULL);
v___x_2805_ = lean_usize_add(v_i_2776_, v___x_2804_);
v_i_2776_ = v___x_2805_;
v_b_2777_ = v___x_2803_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2809_; lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2816_; 
lean_del_object(v___x_2785_);
lean_dec(v_snd_2783_);
v_a_2809_ = lean_ctor_get(v___x_2789_, 0);
v_isSharedCheck_2816_ = !lean_is_exclusive(v___x_2789_);
if (v_isSharedCheck_2816_ == 0)
{
v___x_2811_ = v___x_2789_;
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
else
{
lean_inc(v_a_2809_);
lean_dec(v___x_2789_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
lean_object* v___x_2814_; 
if (v_isShared_2812_ == 0)
{
v___x_2814_ = v___x_2811_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v_a_2809_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
return v___x_2814_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__7___boxed(lean_object* v_init_2819_, lean_object* v_v_2820_, lean_object* v_as_2821_, lean_object* v_sz_2822_, lean_object* v_i_2823_, lean_object* v_b_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_){
_start:
{
uint8_t v_v_15229__boxed_2828_; size_t v_sz_boxed_2829_; size_t v_i_boxed_2830_; lean_object* v_res_2831_; 
v_v_15229__boxed_2828_ = lean_unbox(v_v_2820_);
v_sz_boxed_2829_ = lean_unbox_usize(v_sz_2822_);
lean_dec(v_sz_2822_);
v_i_boxed_2830_ = lean_unbox_usize(v_i_2823_);
lean_dec(v_i_2823_);
v_res_2831_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6_spec__7(v_init_2819_, v_v_15229__boxed_2828_, v_as_2821_, v_sz_boxed_2829_, v_i_boxed_2830_, v_b_2824_, v___y_2825_, v___y_2826_);
lean_dec(v___y_2826_);
lean_dec_ref(v___y_2825_);
lean_dec_ref(v_as_2821_);
return v_res_2831_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6___boxed(lean_object* v_init_2832_, lean_object* v_v_2833_, lean_object* v_n_2834_, lean_object* v_b_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_){
_start:
{
uint8_t v_v_15249__boxed_2839_; lean_object* v_res_2840_; 
v_v_15249__boxed_2839_ = lean_unbox(v_v_2833_);
v_res_2840_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6(v_init_2832_, v_v_15249__boxed_2839_, v_n_2834_, v_b_2835_, v___y_2836_, v___y_2837_);
lean_dec(v___y_2837_);
lean_dec_ref(v___y_2836_);
lean_dec_ref(v_n_2834_);
return v_res_2840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7_spec__10(uint8_t v_v_2841_, lean_object* v_as_2842_, size_t v_sz_2843_, size_t v_i_2844_, lean_object* v_b_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_){
_start:
{
uint8_t v___x_2849_; 
v___x_2849_ = lean_usize_dec_lt(v_i_2844_, v_sz_2843_);
if (v___x_2849_ == 0)
{
lean_object* v___x_2850_; 
v___x_2850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2850_, 0, v_b_2845_);
return v___x_2850_;
}
else
{
lean_object* v___x_2851_; lean_object* v___f_2852_; lean_object* v___x_2853_; lean_object* v_a_2854_; lean_object* v___x_2855_; 
lean_dec_ref(v_b_2845_);
v___x_2851_ = lean_box(v_v_2841_);
v___f_2852_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2852_, 0, v___x_2851_);
v___x_2853_ = lean_box(0);
v_a_2854_ = lean_array_uget_borrowed(v_as_2842_, v_i_2844_);
lean_inc(v_a_2854_);
v___x_2855_ = l_Lean_Linter_List_binders(v_a_2854_, v___f_2852_);
if (lean_obj_tag(v___x_2855_) == 0)
{
lean_object* v_a_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
v_a_2856_ = lean_ctor_get(v___x_2855_, 0);
lean_inc_n(v_a_2856_, 2);
lean_dec_ref_known(v___x_2855_, 1);
v___x_2857_ = lean_box(0);
v___x_2858_ = l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__0(v_a_2856_, v___x_2857_);
v___x_2859_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg(v___x_2858_, v___x_2853_, v___y_2846_, v___y_2847_);
lean_dec(v___x_2858_);
if (lean_obj_tag(v___x_2859_) == 0)
{
lean_object* v___x_2860_; lean_object* v___x_2861_; 
lean_dec_ref_known(v___x_2859_, 1);
lean_inc(v_a_2856_);
v___x_2860_ = l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__2(v_a_2856_, v___x_2857_);
v___x_2861_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg(v___x_2860_, v___x_2853_, v___y_2846_, v___y_2847_);
lean_dec(v___x_2860_);
if (lean_obj_tag(v___x_2861_) == 0)
{
lean_object* v___x_2862_; lean_object* v___x_2863_; 
lean_dec_ref_known(v___x_2861_, 1);
v___x_2862_ = l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__4(v_a_2856_, v___x_2857_);
v___x_2863_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg(v___x_2862_, v___x_2853_, v___y_2846_, v___y_2847_);
lean_dec(v___x_2862_);
if (lean_obj_tag(v___x_2863_) == 0)
{
lean_object* v___x_2864_; size_t v___x_2865_; size_t v___x_2866_; 
lean_dec_ref_known(v___x_2863_, 1);
v___x_2864_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8_spec__12___closed__0));
v___x_2865_ = ((size_t)1ULL);
v___x_2866_ = lean_usize_add(v_i_2844_, v___x_2865_);
v_i_2844_ = v___x_2866_;
v_b_2845_ = v___x_2864_;
goto _start;
}
else
{
lean_object* v_a_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_2875_; 
v_a_2868_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_2875_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2875_ == 0)
{
v___x_2870_ = v___x_2863_;
v_isShared_2871_ = v_isSharedCheck_2875_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_a_2868_);
lean_dec(v___x_2863_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_2875_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
lean_object* v___x_2873_; 
if (v_isShared_2871_ == 0)
{
v___x_2873_ = v___x_2870_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v_a_2868_);
v___x_2873_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
return v___x_2873_;
}
}
}
}
else
{
lean_object* v_a_2876_; lean_object* v___x_2878_; uint8_t v_isShared_2879_; uint8_t v_isSharedCheck_2883_; 
lean_dec(v_a_2856_);
v_a_2876_ = lean_ctor_get(v___x_2861_, 0);
v_isSharedCheck_2883_ = !lean_is_exclusive(v___x_2861_);
if (v_isSharedCheck_2883_ == 0)
{
v___x_2878_ = v___x_2861_;
v_isShared_2879_ = v_isSharedCheck_2883_;
goto v_resetjp_2877_;
}
else
{
lean_inc(v_a_2876_);
lean_dec(v___x_2861_);
v___x_2878_ = lean_box(0);
v_isShared_2879_ = v_isSharedCheck_2883_;
goto v_resetjp_2877_;
}
v_resetjp_2877_:
{
lean_object* v___x_2881_; 
if (v_isShared_2879_ == 0)
{
v___x_2881_ = v___x_2878_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v_a_2876_);
v___x_2881_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
return v___x_2881_;
}
}
}
}
else
{
lean_object* v_a_2884_; lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2891_; 
lean_dec(v_a_2856_);
v_a_2884_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2891_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2891_ == 0)
{
v___x_2886_ = v___x_2859_;
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
else
{
lean_inc(v_a_2884_);
lean_dec(v___x_2859_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
lean_object* v___x_2889_; 
if (v_isShared_2887_ == 0)
{
v___x_2889_ = v___x_2886_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2890_; 
v_reuseFailAlloc_2890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2890_, 0, v_a_2884_);
v___x_2889_ = v_reuseFailAlloc_2890_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
return v___x_2889_;
}
}
}
}
else
{
lean_object* v_a_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2904_; 
v_a_2892_ = lean_ctor_get(v___x_2855_, 0);
v_isSharedCheck_2904_ = !lean_is_exclusive(v___x_2855_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2894_ = v___x_2855_;
v_isShared_2895_ = v_isSharedCheck_2904_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_a_2892_);
lean_dec(v___x_2855_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2904_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v_ref_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2902_; 
v_ref_2896_ = lean_ctor_get(v___y_2846_, 7);
v___x_2897_ = lean_io_error_to_string(v_a_2892_);
v___x_2898_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2898_, 0, v___x_2897_);
v___x_2899_ = l_Lean_MessageData_ofFormat(v___x_2898_);
lean_inc(v_ref_2896_);
v___x_2900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2900_, 0, v_ref_2896_);
lean_ctor_set(v___x_2900_, 1, v___x_2899_);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 0, v___x_2900_);
v___x_2902_ = v___x_2894_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v___x_2900_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
return v___x_2902_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7_spec__10___boxed(lean_object* v_v_2905_, lean_object* v_as_2906_, lean_object* v_sz_2907_, lean_object* v_i_2908_, lean_object* v_b_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_){
_start:
{
uint8_t v_v_15433__boxed_2913_; size_t v_sz_boxed_2914_; size_t v_i_boxed_2915_; lean_object* v_res_2916_; 
v_v_15433__boxed_2913_ = lean_unbox(v_v_2905_);
v_sz_boxed_2914_ = lean_unbox_usize(v_sz_2907_);
lean_dec(v_sz_2907_);
v_i_boxed_2915_ = lean_unbox_usize(v_i_2908_);
lean_dec(v_i_2908_);
v_res_2916_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7_spec__10(v_v_15433__boxed_2913_, v_as_2906_, v_sz_boxed_2914_, v_i_boxed_2915_, v_b_2909_, v___y_2910_, v___y_2911_);
lean_dec(v___y_2911_);
lean_dec_ref(v___y_2910_);
lean_dec_ref(v_as_2906_);
return v_res_2916_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7(uint8_t v_v_2917_, lean_object* v_as_2918_, size_t v_sz_2919_, size_t v_i_2920_, lean_object* v_b_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_){
_start:
{
uint8_t v___x_2925_; 
v___x_2925_ = lean_usize_dec_lt(v_i_2920_, v_sz_2919_);
if (v___x_2925_ == 0)
{
lean_object* v___x_2926_; 
v___x_2926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2926_, 0, v_b_2921_);
return v___x_2926_;
}
else
{
lean_object* v___x_2927_; lean_object* v___f_2928_; lean_object* v___x_2929_; lean_object* v_a_2930_; lean_object* v___x_2931_; 
lean_dec_ref(v_b_2921_);
v___x_2927_ = lean_box(v_v_2917_);
v___f_2928_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2928_, 0, v___x_2927_);
v___x_2929_ = lean_box(0);
v_a_2930_ = lean_array_uget_borrowed(v_as_2918_, v_i_2920_);
lean_inc(v_a_2930_);
v___x_2931_ = l_Lean_Linter_List_binders(v_a_2930_, v___f_2928_);
if (lean_obj_tag(v___x_2931_) == 0)
{
lean_object* v_a_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; 
v_a_2932_ = lean_ctor_get(v___x_2931_, 0);
lean_inc_n(v_a_2932_, 2);
lean_dec_ref_known(v___x_2931_, 1);
v___x_2933_ = lean_box(0);
v___x_2934_ = l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__0(v_a_2932_, v___x_2933_);
v___x_2935_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg(v___x_2934_, v___x_2929_, v___y_2922_, v___y_2923_);
lean_dec(v___x_2934_);
if (lean_obj_tag(v___x_2935_) == 0)
{
lean_object* v___x_2936_; lean_object* v___x_2937_; 
lean_dec_ref_known(v___x_2935_, 1);
lean_inc(v_a_2932_);
v___x_2936_ = l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__2(v_a_2932_, v___x_2933_);
v___x_2937_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg(v___x_2936_, v___x_2929_, v___y_2922_, v___y_2923_);
lean_dec(v___x_2936_);
if (lean_obj_tag(v___x_2937_) == 0)
{
lean_object* v___x_2938_; lean_object* v___x_2939_; 
lean_dec_ref_known(v___x_2937_, 1);
v___x_2938_ = l_List_filterTR_loop___at___00Lean_Linter_List_listVariablesLinter_spec__4(v_a_2932_, v___x_2933_);
v___x_2939_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg(v___x_2938_, v___x_2929_, v___y_2922_, v___y_2923_);
lean_dec(v___x_2938_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v___x_2940_; size_t v___x_2941_; size_t v___x_2942_; lean_object* v___x_2943_; 
lean_dec_ref_known(v___x_2939_, 1);
v___x_2940_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_indexLinter_spec__6_spec__8_spec__12___closed__0));
v___x_2941_ = ((size_t)1ULL);
v___x_2942_ = lean_usize_add(v_i_2920_, v___x_2941_);
v___x_2943_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7_spec__10(v_v_2917_, v_as_2918_, v_sz_2919_, v___x_2942_, v___x_2940_, v___y_2922_, v___y_2923_);
return v___x_2943_;
}
else
{
lean_object* v_a_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2951_; 
v_a_2944_ = lean_ctor_get(v___x_2939_, 0);
v_isSharedCheck_2951_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_2951_ == 0)
{
v___x_2946_ = v___x_2939_;
v_isShared_2947_ = v_isSharedCheck_2951_;
goto v_resetjp_2945_;
}
else
{
lean_inc(v_a_2944_);
lean_dec(v___x_2939_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2951_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v___x_2949_; 
if (v_isShared_2947_ == 0)
{
v___x_2949_ = v___x_2946_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_a_2944_);
v___x_2949_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
return v___x_2949_;
}
}
}
}
else
{
lean_object* v_a_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2959_; 
lean_dec(v_a_2932_);
v_a_2952_ = lean_ctor_get(v___x_2937_, 0);
v_isSharedCheck_2959_ = !lean_is_exclusive(v___x_2937_);
if (v_isSharedCheck_2959_ == 0)
{
v___x_2954_ = v___x_2937_;
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_a_2952_);
lean_dec(v___x_2937_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v___x_2957_; 
if (v_isShared_2955_ == 0)
{
v___x_2957_ = v___x_2954_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v_a_2952_);
v___x_2957_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
return v___x_2957_;
}
}
}
}
else
{
lean_object* v_a_2960_; lean_object* v___x_2962_; uint8_t v_isShared_2963_; uint8_t v_isSharedCheck_2967_; 
lean_dec(v_a_2932_);
v_a_2960_ = lean_ctor_get(v___x_2935_, 0);
v_isSharedCheck_2967_ = !lean_is_exclusive(v___x_2935_);
if (v_isSharedCheck_2967_ == 0)
{
v___x_2962_ = v___x_2935_;
v_isShared_2963_ = v_isSharedCheck_2967_;
goto v_resetjp_2961_;
}
else
{
lean_inc(v_a_2960_);
lean_dec(v___x_2935_);
v___x_2962_ = lean_box(0);
v_isShared_2963_ = v_isSharedCheck_2967_;
goto v_resetjp_2961_;
}
v_resetjp_2961_:
{
lean_object* v___x_2965_; 
if (v_isShared_2963_ == 0)
{
v___x_2965_ = v___x_2962_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v_a_2960_);
v___x_2965_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
return v___x_2965_;
}
}
}
}
else
{
lean_object* v_a_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2980_; 
v_a_2968_ = lean_ctor_get(v___x_2931_, 0);
v_isSharedCheck_2980_ = !lean_is_exclusive(v___x_2931_);
if (v_isSharedCheck_2980_ == 0)
{
v___x_2970_ = v___x_2931_;
v_isShared_2971_ = v_isSharedCheck_2980_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_a_2968_);
lean_dec(v___x_2931_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2980_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v_ref_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2978_; 
v_ref_2972_ = lean_ctor_get(v___y_2922_, 7);
v___x_2973_ = lean_io_error_to_string(v_a_2968_);
v___x_2974_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2973_);
v___x_2975_ = l_Lean_MessageData_ofFormat(v___x_2974_);
lean_inc(v_ref_2972_);
v___x_2976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2976_, 0, v_ref_2972_);
lean_ctor_set(v___x_2976_, 1, v___x_2975_);
if (v_isShared_2971_ == 0)
{
lean_ctor_set(v___x_2970_, 0, v___x_2976_);
v___x_2978_ = v___x_2970_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v___x_2976_);
v___x_2978_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
return v___x_2978_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7___boxed(lean_object* v_v_2981_, lean_object* v_as_2982_, lean_object* v_sz_2983_, lean_object* v_i_2984_, lean_object* v_b_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_){
_start:
{
uint8_t v_v_15560__boxed_2989_; size_t v_sz_boxed_2990_; size_t v_i_boxed_2991_; lean_object* v_res_2992_; 
v_v_15560__boxed_2989_ = lean_unbox(v_v_2981_);
v_sz_boxed_2990_ = lean_unbox_usize(v_sz_2983_);
lean_dec(v_sz_2983_);
v_i_boxed_2991_ = lean_unbox_usize(v_i_2984_);
lean_dec(v_i_2984_);
v_res_2992_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7(v_v_15560__boxed_2989_, v_as_2982_, v_sz_boxed_2990_, v_i_boxed_2991_, v_b_2985_, v___y_2986_, v___y_2987_);
lean_dec(v___y_2987_);
lean_dec_ref(v___y_2986_);
lean_dec_ref(v_as_2982_);
return v_res_2992_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6(uint8_t v_v_2993_, lean_object* v_t_2994_, lean_object* v_init_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_){
_start:
{
lean_object* v_root_2999_; lean_object* v_tail_3000_; lean_object* v___x_3001_; 
v_root_2999_ = lean_ctor_get(v_t_2994_, 0);
v_tail_3000_ = lean_ctor_get(v_t_2994_, 1);
v___x_3001_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__6(v_init_2995_, v_v_2993_, v_root_2999_, v_init_2995_, v___y_2996_, v___y_2997_);
if (lean_obj_tag(v___x_3001_) == 0)
{
lean_object* v_a_3002_; lean_object* v___x_3004_; uint8_t v_isShared_3005_; uint8_t v_isSharedCheck_3038_; 
v_a_3002_ = lean_ctor_get(v___x_3001_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_3001_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3004_ = v___x_3001_;
v_isShared_3005_ = v_isSharedCheck_3038_;
goto v_resetjp_3003_;
}
else
{
lean_inc(v_a_3002_);
lean_dec(v___x_3001_);
v___x_3004_ = lean_box(0);
v_isShared_3005_ = v_isSharedCheck_3038_;
goto v_resetjp_3003_;
}
v_resetjp_3003_:
{
if (lean_obj_tag(v_a_3002_) == 0)
{
lean_object* v_a_3006_; lean_object* v___x_3008_; 
v_a_3006_ = lean_ctor_get(v_a_3002_, 0);
lean_inc(v_a_3006_);
lean_dec_ref_known(v_a_3002_, 1);
if (v_isShared_3005_ == 0)
{
lean_ctor_set(v___x_3004_, 0, v_a_3006_);
v___x_3008_ = v___x_3004_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v_a_3006_);
v___x_3008_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
return v___x_3008_;
}
}
else
{
lean_object* v_a_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; size_t v_sz_3013_; size_t v___x_3014_; lean_object* v___x_3015_; 
lean_del_object(v___x_3004_);
v_a_3010_ = lean_ctor_get(v_a_3002_, 0);
lean_inc(v_a_3010_);
lean_dec_ref_known(v_a_3002_, 1);
v___x_3011_ = lean_box(0);
v___x_3012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3012_, 0, v___x_3011_);
lean_ctor_set(v___x_3012_, 1, v_a_3010_);
v_sz_3013_ = lean_array_size(v_tail_3000_);
v___x_3014_ = ((size_t)0ULL);
v___x_3015_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6_spec__7(v_v_2993_, v_tail_3000_, v_sz_3013_, v___x_3014_, v___x_3012_, v___y_2996_, v___y_2997_);
if (lean_obj_tag(v___x_3015_) == 0)
{
lean_object* v_a_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3029_; 
v_a_3016_ = lean_ctor_get(v___x_3015_, 0);
v_isSharedCheck_3029_ = !lean_is_exclusive(v___x_3015_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_3018_ = v___x_3015_;
v_isShared_3019_ = v_isSharedCheck_3029_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_a_3016_);
lean_dec(v___x_3015_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3029_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v_fst_3020_; 
v_fst_3020_ = lean_ctor_get(v_a_3016_, 0);
if (lean_obj_tag(v_fst_3020_) == 0)
{
lean_object* v_snd_3021_; lean_object* v___x_3023_; 
v_snd_3021_ = lean_ctor_get(v_a_3016_, 1);
lean_inc(v_snd_3021_);
lean_dec(v_a_3016_);
if (v_isShared_3019_ == 0)
{
lean_ctor_set(v___x_3018_, 0, v_snd_3021_);
v___x_3023_ = v___x_3018_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v_snd_3021_);
v___x_3023_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
return v___x_3023_;
}
}
else
{
lean_object* v_val_3025_; lean_object* v___x_3027_; 
lean_inc_ref(v_fst_3020_);
lean_dec(v_a_3016_);
v_val_3025_ = lean_ctor_get(v_fst_3020_, 0);
lean_inc(v_val_3025_);
lean_dec_ref_known(v_fst_3020_, 1);
if (v_isShared_3019_ == 0)
{
lean_ctor_set(v___x_3018_, 0, v_val_3025_);
v___x_3027_ = v___x_3018_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_val_3025_);
v___x_3027_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
return v___x_3027_;
}
}
}
}
else
{
lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3037_; 
v_a_3030_ = lean_ctor_get(v___x_3015_, 0);
v_isSharedCheck_3037_ = !lean_is_exclusive(v___x_3015_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_3032_ = v___x_3015_;
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v___x_3015_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___x_3035_; 
if (v_isShared_3033_ == 0)
{
v___x_3035_ = v___x_3032_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v_a_3030_);
v___x_3035_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
return v___x_3035_;
}
}
}
}
}
}
else
{
lean_object* v_a_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3046_; 
v_a_3039_ = lean_ctor_get(v___x_3001_, 0);
v_isSharedCheck_3046_ = !lean_is_exclusive(v___x_3001_);
if (v_isSharedCheck_3046_ == 0)
{
v___x_3041_ = v___x_3001_;
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_a_3039_);
lean_dec(v___x_3001_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
lean_object* v___x_3044_; 
if (v_isShared_3042_ == 0)
{
v___x_3044_ = v___x_3041_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_a_3039_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
return v___x_3044_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6___boxed(lean_object* v_v_3047_, lean_object* v_t_3048_, lean_object* v_init_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_){
_start:
{
uint8_t v_v_15684__boxed_3053_; lean_object* v_res_3054_; 
v_v_15684__boxed_3053_ = lean_unbox(v_v_3047_);
v_res_3054_ = l_Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6(v_v_15684__boxed_3053_, v_t_3048_, v_init_3049_, v___y_3050_, v___y_3051_);
lean_dec(v___y_3051_);
lean_dec_ref(v___y_3050_);
lean_dec_ref(v_t_3048_);
return v_res_3054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_listVariablesLinter___lam__0(lean_object* v_stx_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_){
_start:
{
lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v_scopes_3067_; lean_object* v___x_3068_; lean_object* v_opts_3069_; lean_object* v___x_3070_; lean_object* v_name_3071_; lean_object* v_map_3072_; lean_object* v___x_3073_; 
v___x_3062_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3063_ = lean_st_ref_get(v___y_3057_);
v_scopes_3067_ = lean_ctor_get(v___x_3063_, 2);
lean_inc(v_scopes_3067_);
lean_dec(v___x_3063_);
v___x_3068_ = l_List_head_x21___redArg(v___x_3062_, v_scopes_3067_);
lean_dec(v_scopes_3067_);
v_opts_3069_ = lean_ctor_get(v___x_3068_, 1);
lean_inc_ref(v_opts_3069_);
lean_dec(v___x_3068_);
v___x_3070_ = l_Lean_Linter_List_linter_listVariables;
v_name_3071_ = lean_ctor_get(v___x_3070_, 0);
v_map_3072_ = lean_ctor_get(v_opts_3069_, 0);
lean_inc(v_map_3072_);
lean_dec_ref(v_opts_3069_);
v___x_3073_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3072_, v_name_3071_);
lean_dec(v_map_3072_);
if (lean_obj_tag(v___x_3073_) == 0)
{
goto v___jp_3064_;
}
else
{
lean_object* v_val_3074_; 
v_val_3074_ = lean_ctor_get(v___x_3073_, 0);
lean_inc(v_val_3074_);
lean_dec_ref_known(v___x_3073_, 1);
if (lean_obj_tag(v_val_3074_) == 1)
{
uint8_t v_v_3075_; 
v_v_3075_ = lean_ctor_get_uint8(v_val_3074_, 0);
lean_dec_ref_known(v_val_3074_, 0);
if (v_v_3075_ == 0)
{
goto v___jp_3064_;
}
else
{
lean_object* v___x_3076_; lean_object* v_messages_3077_; uint8_t v___x_3078_; 
v___x_3076_ = lean_st_ref_get(v___y_3057_);
v_messages_3077_ = lean_ctor_get(v___x_3076_, 1);
lean_inc_ref(v_messages_3077_);
lean_dec(v___x_3076_);
v___x_3078_ = l_Lean_MessageLog_hasErrors(v_messages_3077_);
lean_dec_ref(v_messages_3077_);
if (v___x_3078_ == 0)
{
lean_object* v___x_3079_; lean_object* v_infoState_3080_; uint8_t v_enabled_3081_; 
v___x_3079_ = lean_st_ref_get(v___y_3057_);
v_infoState_3080_ = lean_ctor_get(v___x_3079_, 8);
lean_inc_ref(v_infoState_3080_);
lean_dec(v___x_3079_);
v_enabled_3081_ = lean_ctor_get_uint8(v_infoState_3080_, sizeof(void*)*3);
lean_dec_ref(v_infoState_3080_);
if (v_enabled_3081_ == 0)
{
goto v___jp_3059_;
}
else
{
lean_object* v___x_3082_; lean_object* v_a_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; 
v___x_3082_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_List_indexLinter_spec__0___redArg(v___y_3057_);
v_a_3083_ = lean_ctor_get(v___x_3082_, 0);
lean_inc(v_a_3083_);
lean_dec_ref(v___x_3082_);
v___x_3084_ = lean_box(0);
v___x_3085_ = l_Lean_PersistentArray_forIn___at___00Lean_Linter_List_listVariablesLinter_spec__6(v_v_3075_, v_a_3083_, v___x_3084_, v___y_3056_, v___y_3057_);
lean_dec(v_a_3083_);
if (lean_obj_tag(v___x_3085_) == 0)
{
lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3092_; 
v_isSharedCheck_3092_ = !lean_is_exclusive(v___x_3085_);
if (v_isSharedCheck_3092_ == 0)
{
lean_object* v_unused_3093_; 
v_unused_3093_ = lean_ctor_get(v___x_3085_, 0);
lean_dec(v_unused_3093_);
v___x_3087_ = v___x_3085_;
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
else
{
lean_dec(v___x_3085_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3090_; 
if (v_isShared_3088_ == 0)
{
lean_ctor_set(v___x_3087_, 0, v___x_3084_);
v___x_3090_ = v___x_3087_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3091_; 
v_reuseFailAlloc_3091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3091_, 0, v___x_3084_);
v___x_3090_ = v_reuseFailAlloc_3091_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
return v___x_3090_;
}
}
}
else
{
return v___x_3085_;
}
}
}
else
{
goto v___jp_3059_;
}
}
}
else
{
lean_dec(v_val_3074_);
goto v___jp_3064_;
}
}
v___jp_3059_:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3060_ = lean_box(0);
v___x_3061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3061_, 0, v___x_3060_);
return v___x_3061_;
}
v___jp_3064_:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3065_ = lean_box(0);
v___x_3066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3066_, 0, v___x_3065_);
return v___x_3066_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_List_listVariablesLinter___lam__0___boxed(lean_object* v_stx_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_){
_start:
{
lean_object* v_res_3098_; 
v_res_3098_ = l_Lean_Linter_List_listVariablesLinter___lam__0(v_stx_3094_, v___y_3095_, v___y_3096_);
lean_dec(v___y_3096_);
lean_dec_ref(v___y_3095_);
lean_dec(v_stx_3094_);
return v_res_3098_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1(lean_object* v_as_3112_, lean_object* v_as_x27_3113_, lean_object* v_b_3114_, lean_object* v_a_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_){
_start:
{
lean_object* v___x_3119_; 
v___x_3119_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___redArg(v_as_x27_3113_, v_b_3114_, v___y_3116_, v___y_3117_);
return v___x_3119_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1___boxed(lean_object* v_as_3120_, lean_object* v_as_x27_3121_, lean_object* v_b_3122_, lean_object* v_a_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_){
_start:
{
lean_object* v_res_3127_; 
v_res_3127_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__1(v_as_3120_, v_as_x27_3121_, v_b_3122_, v_a_3123_, v___y_3124_, v___y_3125_);
lean_dec(v___y_3125_);
lean_dec_ref(v___y_3124_);
lean_dec(v_as_x27_3121_);
lean_dec(v_as_3120_);
return v_res_3127_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3(lean_object* v_as_3128_, lean_object* v_as_x27_3129_, lean_object* v_b_3130_, lean_object* v_a_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_){
_start:
{
lean_object* v___x_3135_; 
v___x_3135_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___redArg(v_as_x27_3129_, v_b_3130_, v___y_3132_, v___y_3133_);
return v___x_3135_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3___boxed(lean_object* v_as_3136_, lean_object* v_as_x27_3137_, lean_object* v_b_3138_, lean_object* v_a_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_){
_start:
{
lean_object* v_res_3143_; 
v_res_3143_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__3(v_as_3136_, v_as_x27_3137_, v_b_3138_, v_a_3139_, v___y_3140_, v___y_3141_);
lean_dec(v___y_3141_);
lean_dec_ref(v___y_3140_);
lean_dec(v_as_x27_3137_);
lean_dec(v_as_3136_);
return v_res_3143_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5(lean_object* v_as_3144_, lean_object* v_as_x27_3145_, lean_object* v_b_3146_, lean_object* v_a_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_){
_start:
{
lean_object* v___x_3151_; 
v___x_3151_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___redArg(v_as_x27_3145_, v_b_3146_, v___y_3148_, v___y_3149_);
return v___x_3151_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5___boxed(lean_object* v_as_3152_, lean_object* v_as_x27_3153_, lean_object* v_b_3154_, lean_object* v_a_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_){
_start:
{
lean_object* v_res_3159_; 
v_res_3159_ = l_List_forIn_x27_loop___at___00Lean_Linter_List_listVariablesLinter_spec__5(v_as_3152_, v_as_x27_3153_, v_b_3154_, v_a_3155_, v___y_3156_, v___y_3157_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3156_);
lean_dec(v_as_x27_3153_);
lean_dec(v_as_3152_);
return v_res_3159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_4228040398____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3161_ = ((lean_object*)(l_Lean_Linter_List_listVariablesLinter));
v___x_3162_ = l_Lean_Elab_Command_addLinter(v___x_3161_);
return v___x_3162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_4228040398____hygCtx___hyg_2____boxed(lean_object* v_a_3163_){
_start:
{
lean_object* v_res_3164_; 
v_res_3164_ = l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_4228040398____hygCtx___hyg_2_();
return v_res_3164_;
}
}
lean_object* runtime_initialize_Lean_Linter_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_InfoTree_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_List(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_95049808____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_List_linter_indexVariables = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_List_linter_indexVariables);
lean_dec_ref(res);
res = l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_3536400388____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_List_linter_listVariables = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_List_linter_listVariables);
lean_dec_ref(res);
res = l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_88313950____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_List_0__Lean_Linter_List_initFn_00___x40_Lean_Linter_List_4228040398____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_List(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Linter_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_InfoTree_Util(uint8_t builtin);
lean_object* initialize_Lean_Linter_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_List(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_InfoTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_List(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_List(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_List(builtin);
}
#ifdef __cplusplus
}
#endif
