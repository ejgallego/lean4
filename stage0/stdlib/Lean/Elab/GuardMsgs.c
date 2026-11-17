// Lean compiler output
// Module: Lean.Elab.GuardMsgs
// Imports: public import Lean.Elab.Notation public import Lean.Server.CodeActions.Attr
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
lean_object* l_String_Slice_slice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_posGE___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_MessageLog_append(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
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
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_String_Slice_Pos_prev_x3f(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t l_Lean_Message_isTrace(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_drop___redArg(lean_object*, lean_object*);
lean_object* l_Subarray_take___redArg(lean_object*, lean_object*);
lean_object* l_Subarray_split___redArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Message_isTrace___boxed(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_FileWorker_EditableDocument_versionedIdentifier(lean_object*);
lean_object* l_Lean_FileMap_utf8RangeToLspRange(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_WorkspaceEdit_ofTextEdit(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_CodeAction_insertBuiltin(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Diff_Action_linePrefix(uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommandTopLevel(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageLog_empty;
lean_object* l_Lean_Language_SnapshotTask_get___redArg(lean_object*);
lean_object* l_Lean_Language_SnapshotTree_getAll(lean_object*);
lean_object* l_Lean_MessageLog_toList(lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_String_Slice_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__0_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "guard_msgs"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__0_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__0_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__1_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "diff"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__1_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__1_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__2_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__0_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(149, 116, 183, 228, 179, 151, 45, 148)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__2_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__2_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__1_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(183, 103, 150, 225, 110, 223, 115, 232)}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__2_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__2_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__3_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "When true, show a diff between expected and actual messages if they don't match. "};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__3_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__3_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__4_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__3_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__4_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__4_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__0_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(172, 38, 186, 54, 247, 153, 194, 0)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__1_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(202, 100, 105, 248, 32, 123, 59, 131)}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_guard__msgs_diff;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@ "};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__1 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__1_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "..."};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__2 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__2_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__3 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__3_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "info:"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__4 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__4_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "warning:"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__5 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__5_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "error:"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__6 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__6_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "trace:"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__7 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__7_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__8 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__8_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":\n"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "guardMsgsFilterAction"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(20, 4, 244, 232, 164, 150, 223, 103)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "token"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "check"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 15, 254, 184, 37, 99, 251, 84)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "drop"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__5_value),LEAN_SCALAR_PTR_LITERAL(134, 195, 191, 35, 155, 125, 225, 61)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pass"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__7_value),LEAN_SCALAR_PTR_LITERAL(130, 109, 187, 122, 38, 7, 169, 2)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__2(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__3(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "guardMsgsFilterSeverity"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(139, 215, 239, 32, 31, 172, 250, 25)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(94, 247, 236, 102, 6, 79, 161, 127)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "info"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(177, 63, 183, 36, 16, 73, 158, 237)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "warning"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(255, 92, 21, 183, 34, 222, 2, 74)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(127, 232, 111, 183, 142, 221, 154, 104)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(125, 222, 92, 133, 213, 211, 83, 105)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__11_value;
static const lean_closure_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Message_isTrace___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___lam__0(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "guardMsgsSpecElt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 108, 205, 157, 13, 129, 29, 60)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "guardMsgsFilter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(20, 187, 182, 29, 56, 60, 165, 253)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "guardMsgsWhitespace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(8, 106, 1, 198, 8, 55, 77, 8)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "guardMsgsOrdering"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 53, 236, 42, 85, 133, 64, 61)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "guardMsgsPositions"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(41, 241, 109, 166, 211, 83, 245, 15)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "guardMsgsSubstring"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(23, 68, 193, 70, 193, 109, 117, 133)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(97, 134, 219, 90, 90, 45, 96, 32)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__13_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__15_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(234, 149, 90, 50, 108, 230, 18, 172)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "guardMsgsPositionsArg"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__16_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__17_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__16_value),LEAN_SCALAR_PTR_LITERAL(72, 235, 102, 225, 139, 166, 36, 119)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__17_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "guardMsgsOrderingArg"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__18_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__19_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(126, 165, 201, 178, 250, 91, 17, 12)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__19_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__20_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__21_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__20_value),LEAN_SCALAR_PTR_LITERAL(255, 187, 8, 190, 181, 123, 198, 7)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__21_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "sorted"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__22_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__23_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__22_value),LEAN_SCALAR_PTR_LITERAL(242, 25, 158, 210, 170, 109, 109, 131)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__23_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "guardMsgsWhitespaceArg"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__24_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__25_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__24_value),LEAN_SCALAR_PTR_LITERAL(133, 245, 235, 68, 150, 72, 242, 178)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__25 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__25_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "normalized"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__26 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__26_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__27_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__26_value),LEAN_SCALAR_PTR_LITERAL(204, 250, 226, 34, 169, 84, 107, 235)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__27 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__27_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lax"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__28_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__29_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__28_value),LEAN_SCALAR_PTR_LITERAL(205, 87, 76, 243, 164, 59, 221, 133)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__29 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__29_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__2(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__2_value)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__3_value)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "guardMsgsSpec"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__6_value),LEAN_SCALAR_PTR_LITERAL(172, 228, 141, 39, 164, 16, 16, 29)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__7_value;
static const lean_array_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__0_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__0_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__0_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__1_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__1_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__1_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__2_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "GuardMsgs"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__2_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__2_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__3_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "GuardMsgFailure"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__3_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__3_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__0_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__1_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__2_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(48, 139, 31, 76, 158, 95, 94, 217)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__3_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(83, 21, 237, 121, 74, 154, 128, 4)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_GuardMsgs_instImpl_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_GuardMsgs_instTypeNameGuardMsgFailure = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\t\n"};
static const lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__0 = (const lean_object*)&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__1 = (const lean_object*)&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__2;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "⏎\n"};
static const lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__1 = (const lean_object*)&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__2;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " \n"};
static const lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__0 = (const lean_object*)&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__1 = (const lean_object*)&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__1_value;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__2;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 3, .m_data = "⏎⏎\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = "\t⏎\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ⏎\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_removeTrailingWhitespaceMarker(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___boxed(lean_object*);
static const lean_ctor_object l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__1;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__0_value;
static const lean_array_object l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___boxed(lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__0 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__0_value;
static lean_once_cell_t l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__1;
static const lean_string_object l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__2 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__2_value;
static const lean_string_object l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__3 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__3_value;
static const lean_string_object l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "commentBody"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__4 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8_spec__19(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9___closed__0 = (const lean_object*)&l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9___closed__0_value;
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__17(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__17___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__18(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14_spec__18(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14___closed__0 = (const lean_object*)&l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__39___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44_spec__46___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20_spec__29___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__0;
static lean_once_cell_t l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__1;
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__16(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__16___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__0 = (const lean_object*)&l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__0_value;
static const lean_ctor_object l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__1 = (const lean_object*)&l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__1_value;
static const lean_ctor_object l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__0_value),((lean_object*)&l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__1_value)}};
static const lean_object* l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__2 = (const lean_object*)&l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "guardMsgsCmd"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(80, 121, 62, 112, 73, 11, 102, 99)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 65, .m_data = "❌️ Docstring on `#guard_msgs` does not match generated message:\n\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "---\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__6_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20_spec__29(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__39(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44_spec__46(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "elabGuardMsgs"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__0_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__1_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__2_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(48, 139, 31, 76, 158, 95, 94, 217)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 103, 231, 132, 249, 141, 167, 146)}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(137) << 1) | 1)),((lean_object*)(((size_t)(42) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(168) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__0_value),((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(137) << 1) | 1)),((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(137) << 1) | 1)),((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__3_value),((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__4_value),((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__1_value),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__8_value)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "/--\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\n-/\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "/-- "};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " -/\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Update #guard_msgs with generated message"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "quickfix"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*10 + 0, .m_other = 10, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__4_value;
static const lean_array_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1___closed__0_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_354__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1___closed__0_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_354_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1___closed__0_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_354__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_354_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_354____boxed(lean_object*);
static const lean_string_object l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PANIC"};
static const lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__0 = (const lean_object*)&l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__0_value;
static const lean_ctor_object l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__1 = (const lean_object*)&l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__1_value;
static lean_once_cell_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__2;
static lean_once_cell_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__3;
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2_spec__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "guardPanicCmd"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 189, 140, 114, 132, 102, 231, 43)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Expected a PANIC but none was found"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__2_value)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabGuardPanic"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__0_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__1_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__2_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(48, 139, 31, 76, 158, 95, 94, 217)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(55, 172, 183, 87, 120, 30, 187, 134)}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_51_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__2_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_));
v___x_52_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__4_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_));
v___x_53_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_));
v___x_54_ = l_Lean_Option_register___at___00__private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__spec__0(v___x_51_, v___x_52_, v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4____boxed(lean_object* v_a_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_();
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0(lean_object* v_line_59_, lean_object* v_pos_60_){
_start:
{
lean_object* v_line_61_; lean_object* v_column_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v_line_61_ = lean_ctor_get(v_pos_60_, 0);
lean_inc(v_line_61_);
v_column_62_ = lean_ctor_get(v_pos_60_, 1);
lean_inc(v_column_62_);
lean_dec_ref(v_pos_60_);
v___x_63_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__0));
v___x_64_ = lean_nat_sub(v_line_61_, v_line_59_);
lean_dec(v_line_61_);
v___x_65_ = l_Nat_reprFast(v___x_64_);
v___x_66_ = lean_string_append(v___x_63_, v___x_65_);
lean_dec_ref(v___x_65_);
v___x_67_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__1));
v___x_68_ = lean_string_append(v___x_66_, v___x_67_);
v___x_69_ = l_Nat_reprFast(v_column_62_);
v___x_70_ = lean_string_append(v___x_68_, v___x_69_);
lean_dec_ref(v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___boxed(lean_object* v_line_71_, lean_object* v_pos_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0(v_line_71_, v_pos_72_);
lean_dec(v_line_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString(lean_object* v_msg_85_, lean_object* v_reportPos_x3f_86_){
_start:
{
lean_object* v___y_89_; lean_object* v___y_93_; uint32_t v___y_94_; lean_object* v___y_98_; lean_object* v_str_101_; lean_object* v_pos_111_; lean_object* v_endPos_112_; uint8_t v_severity_113_; lean_object* v_caption_114_; lean_object* v_data_115_; lean_object* v___y_117_; lean_object* v___y_118_; lean_object* v___y_119_; lean_object* v_str_130_; lean_object* v_str_142_; lean_object* v___y_153_; lean_object* v_str_157_; lean_object* v___x_164_; lean_object* v___x_165_; uint8_t v___x_166_; 
v_pos_111_ = lean_ctor_get(v_msg_85_, 1);
lean_inc_ref(v_pos_111_);
v_endPos_112_ = lean_ctor_get(v_msg_85_, 2);
lean_inc(v_endPos_112_);
v_severity_113_ = lean_ctor_get_uint8(v_msg_85_, sizeof(void*)*5 + 1);
v_caption_114_ = lean_ctor_get(v_msg_85_, 3);
v_data_115_ = lean_ctor_get(v_msg_85_, 4);
lean_inc(v_data_115_);
v___x_164_ = l_Lean_MessageData_toString(v_data_115_);
v___x_165_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9));
v___x_166_ = lean_string_dec_eq(v_caption_114_, v___x_165_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_167_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10));
lean_inc_ref(v_caption_114_);
v___x_168_ = lean_string_append(v_caption_114_, v___x_167_);
v___x_169_ = lean_string_append(v___x_168_, v___x_164_);
lean_dec_ref(v___x_164_);
v_str_157_ = v___x_169_;
goto v___jp_156_;
}
else
{
v_str_157_ = v___x_164_;
goto v___jp_156_;
}
v___jp_88_:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0));
v___x_91_ = lean_string_append(v___y_89_, v___x_90_);
return v___x_91_;
}
v___jp_92_:
{
uint32_t v___x_95_; uint8_t v___x_96_; 
v___x_95_ = 10;
v___x_96_ = lean_uint32_dec_eq(v___y_94_, v___x_95_);
if (v___x_96_ == 0)
{
v___y_89_ = v___y_93_;
goto v___jp_88_;
}
else
{
return v___y_93_;
}
}
v___jp_97_:
{
uint32_t v___x_99_; 
v___x_99_ = 65;
v___y_93_ = v___y_98_;
v___y_94_ = v___x_99_;
goto v___jp_92_;
}
v___jp_100_:
{
lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_102_ = lean_string_utf8_byte_size(v_str_101_);
v___x_103_ = lean_unsigned_to_nat(0u);
v___x_104_ = lean_nat_dec_eq(v___x_102_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; lean_object* v___x_106_; 
lean_inc_ref(v_str_101_);
v___x_105_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_105_, 0, v_str_101_);
lean_ctor_set(v___x_105_, 1, v___x_103_);
lean_ctor_set(v___x_105_, 2, v___x_102_);
v___x_106_ = l_String_Slice_Pos_prev_x3f(v___x_105_, v___x_102_);
if (lean_obj_tag(v___x_106_) == 0)
{
lean_dec_ref_known(v___x_105_, 3);
v___y_98_ = v_str_101_;
goto v___jp_97_;
}
else
{
lean_object* v_val_107_; lean_object* v___x_108_; 
v_val_107_ = lean_ctor_get(v___x_106_, 0);
lean_inc(v_val_107_);
lean_dec_ref_known(v___x_106_, 1);
v___x_108_ = l_String_Slice_Pos_get_x3f(v___x_105_, v_val_107_);
lean_dec(v_val_107_);
lean_dec_ref_known(v___x_105_, 3);
if (lean_obj_tag(v___x_108_) == 0)
{
v___y_98_ = v_str_101_;
goto v___jp_97_;
}
else
{
lean_object* v_val_109_; uint32_t v___x_110_; 
v_val_109_ = lean_ctor_get(v___x_108_, 0);
lean_inc(v_val_109_);
lean_dec_ref_known(v___x_108_, 1);
v___x_110_ = lean_unbox_uint32(v_val_109_);
lean_dec(v_val_109_);
v___y_93_ = v_str_101_;
v___y_94_ = v___x_110_;
goto v___jp_92_;
}
}
}
else
{
v___y_89_ = v_str_101_;
goto v___jp_88_;
}
}
v___jp_116_:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_120_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__1));
v___x_121_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0(v___y_118_, v_pos_111_);
v___x_122_ = lean_string_append(v___x_120_, v___x_121_);
lean_dec_ref(v___x_121_);
v___x_123_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__2));
v___x_124_ = lean_string_append(v___x_122_, v___x_123_);
v___x_125_ = lean_string_append(v___x_124_, v___y_119_);
lean_dec_ref(v___y_119_);
v___x_126_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0));
v___x_127_ = lean_string_append(v___x_125_, v___x_126_);
v___x_128_ = lean_string_append(v___x_127_, v___y_117_);
lean_dec_ref(v___y_117_);
v_str_101_ = v___x_128_;
goto v___jp_100_;
}
v___jp_129_:
{
if (lean_obj_tag(v_reportPos_x3f_86_) == 1)
{
if (lean_obj_tag(v_endPos_112_) == 0)
{
lean_object* v_val_131_; lean_object* v___x_132_; 
v_val_131_ = lean_ctor_get(v_reportPos_x3f_86_, 0);
v___x_132_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__3));
v___y_117_ = v_str_130_;
v___y_118_ = v_val_131_;
v___y_119_ = v___x_132_;
goto v___jp_116_;
}
else
{
lean_object* v_val_133_; lean_object* v_val_134_; lean_object* v_line_135_; lean_object* v_column_136_; lean_object* v_line_137_; uint8_t v___x_138_; 
v_val_133_ = lean_ctor_get(v_endPos_112_, 0);
lean_inc(v_val_133_);
lean_dec_ref_known(v_endPos_112_, 1);
v_val_134_ = lean_ctor_get(v_reportPos_x3f_86_, 0);
v_line_135_ = lean_ctor_get(v_val_133_, 0);
v_column_136_ = lean_ctor_get(v_val_133_, 1);
v_line_137_ = lean_ctor_get(v_pos_111_, 0);
v___x_138_ = lean_nat_dec_eq(v_line_135_, v_line_137_);
if (v___x_138_ == 0)
{
lean_object* v___x_139_; 
v___x_139_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0(v_val_134_, v_val_133_);
v___y_117_ = v_str_130_;
v___y_118_ = v_val_134_;
v___y_119_ = v___x_139_;
goto v___jp_116_;
}
else
{
lean_object* v___x_140_; 
lean_inc(v_column_136_);
lean_dec(v_val_133_);
v___x_140_ = l_Nat_reprFast(v_column_136_);
v___y_117_ = v_str_130_;
v___y_118_ = v_val_134_;
v___y_119_ = v___x_140_;
goto v___jp_116_;
}
}
}
else
{
lean_dec(v_endPos_112_);
lean_dec_ref(v_pos_111_);
v_str_101_ = v_str_130_;
goto v___jp_100_;
}
}
v___jp_141_:
{
uint8_t v___x_143_; 
v___x_143_ = l_Lean_Message_isTrace(v_msg_85_);
lean_dec_ref(v_msg_85_);
if (v___x_143_ == 0)
{
switch(v_severity_113_)
{
case 0:
{
lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_144_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__4));
v___x_145_ = lean_string_append(v___x_144_, v_str_142_);
lean_dec_ref(v_str_142_);
v_str_130_ = v___x_145_;
goto v___jp_129_;
}
case 1:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__5));
v___x_147_ = lean_string_append(v___x_146_, v_str_142_);
lean_dec_ref(v_str_142_);
v_str_130_ = v___x_147_;
goto v___jp_129_;
}
default: 
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__6));
v___x_149_ = lean_string_append(v___x_148_, v_str_142_);
lean_dec_ref(v_str_142_);
v_str_130_ = v___x_149_;
goto v___jp_129_;
}
}
}
else
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__7));
v___x_151_ = lean_string_append(v___x_150_, v_str_142_);
lean_dec_ref(v_str_142_);
v_str_130_ = v___x_151_;
goto v___jp_129_;
}
}
v___jp_152_:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__8));
v___x_155_ = lean_string_append(v___x_154_, v___y_153_);
lean_dec_ref(v___y_153_);
v_str_142_ = v___x_155_;
goto v___jp_141_;
}
v___jp_156_:
{
lean_object* v___x_158_; lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_158_ = lean_string_utf8_byte_size(v_str_157_);
v___x_159_ = lean_unsigned_to_nat(1u);
v___x_160_ = lean_nat_dec_le(v___x_159_, v___x_158_);
if (v___x_160_ == 0)
{
v___y_153_ = v_str_157_;
goto v___jp_152_;
}
else
{
lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_161_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0));
v___x_162_ = lean_unsigned_to_nat(0u);
v___x_163_ = lean_string_memcmp(v_str_157_, v___x_161_, v___x_162_, v___x_162_, v___x_159_);
if (v___x_163_ == 0)
{
v___y_153_ = v_str_157_;
goto v___jp_152_;
}
else
{
v_str_142_ = v_str_157_;
goto v___jp_141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___boxed(lean_object* v_msg_170_, lean_object* v_reportPos_x3f_171_, lean_object* v_a_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString(v_msg_170_, v_reportPos_x3f_171_);
lean_dec(v_reportPos_x3f_171_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorIdx___impl(uint8_t v_x_174_){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = lean_box(v_x_174_);
v___x_176_ = lean_obj_tag_nat(v___x_175_);
lean_dec(v___x_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorIdx___impl___boxed(lean_object* v_x_177_){
_start:
{
uint8_t v_x_4__boxed_178_; lean_object* v_res_179_; 
v_x_4__boxed_178_ = lean_unbox(v_x_177_);
v_res_179_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorIdx___impl(v_x_4__boxed_178_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim___redArg(lean_object* v_k_180_){
_start:
{
lean_inc(v_k_180_);
return v_k_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim___redArg___boxed(lean_object* v_k_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim___redArg(v_k_181_);
lean_dec(v_k_181_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim(lean_object* v_motive_183_, lean_object* v_ctorIdx_184_, uint8_t v_t_185_, lean_object* v_h_186_, lean_object* v_k_187_){
_start:
{
lean_inc(v_k_187_);
return v_k_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim___boxed(lean_object* v_motive_188_, lean_object* v_ctorIdx_189_, lean_object* v_t_190_, lean_object* v_h_191_, lean_object* v_k_192_){
_start:
{
uint8_t v_t_boxed_193_; lean_object* v_res_194_; 
v_t_boxed_193_ = lean_unbox(v_t_190_);
v_res_194_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim(v_motive_188_, v_ctorIdx_189_, v_t_boxed_193_, v_h_191_, v_k_192_);
lean_dec(v_k_192_);
lean_dec(v_ctorIdx_189_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim___redArg(lean_object* v_check_195_){
_start:
{
lean_inc(v_check_195_);
return v_check_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim___redArg___boxed(lean_object* v_check_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim___redArg(v_check_196_);
lean_dec(v_check_196_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim(lean_object* v_motive_198_, uint8_t v_t_199_, lean_object* v_h_200_, lean_object* v_check_201_){
_start:
{
lean_inc(v_check_201_);
return v_check_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim___boxed(lean_object* v_motive_202_, lean_object* v_t_203_, lean_object* v_h_204_, lean_object* v_check_205_){
_start:
{
uint8_t v_t_boxed_206_; lean_object* v_res_207_; 
v_t_boxed_206_ = lean_unbox(v_t_203_);
v_res_207_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim(v_motive_202_, v_t_boxed_206_, v_h_204_, v_check_205_);
lean_dec(v_check_205_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim___redArg(lean_object* v_drop_208_){
_start:
{
lean_inc(v_drop_208_);
return v_drop_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim___redArg___boxed(lean_object* v_drop_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim___redArg(v_drop_209_);
lean_dec(v_drop_209_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim(lean_object* v_motive_211_, uint8_t v_t_212_, lean_object* v_h_213_, lean_object* v_drop_214_){
_start:
{
lean_inc(v_drop_214_);
return v_drop_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim___boxed(lean_object* v_motive_215_, lean_object* v_t_216_, lean_object* v_h_217_, lean_object* v_drop_218_){
_start:
{
uint8_t v_t_boxed_219_; lean_object* v_res_220_; 
v_t_boxed_219_ = lean_unbox(v_t_216_);
v_res_220_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim(v_motive_215_, v_t_boxed_219_, v_h_217_, v_drop_218_);
lean_dec(v_drop_218_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim___redArg(lean_object* v_pass_221_){
_start:
{
lean_inc(v_pass_221_);
return v_pass_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim___redArg___boxed(lean_object* v_pass_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim___redArg(v_pass_222_);
lean_dec(v_pass_222_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim(lean_object* v_motive_224_, uint8_t v_t_225_, lean_object* v_h_226_, lean_object* v_pass_227_){
_start:
{
lean_inc(v_pass_227_);
return v_pass_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim___boxed(lean_object* v_motive_228_, lean_object* v_t_229_, lean_object* v_h_230_, lean_object* v_pass_231_){
_start:
{
uint8_t v_t_boxed_232_; lean_object* v_res_233_; 
v_t_boxed_232_ = lean_unbox(v_t_229_);
v_res_233_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim(v_motive_228_, v_t_boxed_232_, v_h_230_, v_pass_231_);
lean_dec(v_pass_231_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorIdx___impl(uint8_t v_x_234_){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = lean_box(v_x_234_);
v___x_236_ = lean_obj_tag_nat(v___x_235_);
lean_dec(v___x_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorIdx___impl___boxed(lean_object* v_x_237_){
_start:
{
uint8_t v_x_4__boxed_238_; lean_object* v_res_239_; 
v_x_4__boxed_238_ = lean_unbox(v_x_237_);
v_res_239_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorIdx___impl(v_x_4__boxed_238_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim___redArg(lean_object* v_k_240_){
_start:
{
lean_inc(v_k_240_);
return v_k_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim___redArg___boxed(lean_object* v_k_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim___redArg(v_k_241_);
lean_dec(v_k_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim(lean_object* v_motive_243_, lean_object* v_ctorIdx_244_, uint8_t v_t_245_, lean_object* v_h_246_, lean_object* v_k_247_){
_start:
{
lean_inc(v_k_247_);
return v_k_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim___boxed(lean_object* v_motive_248_, lean_object* v_ctorIdx_249_, lean_object* v_t_250_, lean_object* v_h_251_, lean_object* v_k_252_){
_start:
{
uint8_t v_t_boxed_253_; lean_object* v_res_254_; 
v_t_boxed_253_ = lean_unbox(v_t_250_);
v_res_254_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim(v_motive_248_, v_ctorIdx_249_, v_t_boxed_253_, v_h_251_, v_k_252_);
lean_dec(v_k_252_);
lean_dec(v_ctorIdx_249_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim___redArg(lean_object* v_exact_255_){
_start:
{
lean_inc(v_exact_255_);
return v_exact_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim___redArg___boxed(lean_object* v_exact_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim___redArg(v_exact_256_);
lean_dec(v_exact_256_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim(lean_object* v_motive_258_, uint8_t v_t_259_, lean_object* v_h_260_, lean_object* v_exact_261_){
_start:
{
lean_inc(v_exact_261_);
return v_exact_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim___boxed(lean_object* v_motive_262_, lean_object* v_t_263_, lean_object* v_h_264_, lean_object* v_exact_265_){
_start:
{
uint8_t v_t_boxed_266_; lean_object* v_res_267_; 
v_t_boxed_266_ = lean_unbox(v_t_263_);
v_res_267_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim(v_motive_262_, v_t_boxed_266_, v_h_264_, v_exact_265_);
lean_dec(v_exact_265_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim___redArg(lean_object* v_normalized_268_){
_start:
{
lean_inc(v_normalized_268_);
return v_normalized_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim___redArg___boxed(lean_object* v_normalized_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim___redArg(v_normalized_269_);
lean_dec(v_normalized_269_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim(lean_object* v_motive_271_, uint8_t v_t_272_, lean_object* v_h_273_, lean_object* v_normalized_274_){
_start:
{
lean_inc(v_normalized_274_);
return v_normalized_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim___boxed(lean_object* v_motive_275_, lean_object* v_t_276_, lean_object* v_h_277_, lean_object* v_normalized_278_){
_start:
{
uint8_t v_t_boxed_279_; lean_object* v_res_280_; 
v_t_boxed_279_ = lean_unbox(v_t_276_);
v_res_280_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim(v_motive_275_, v_t_boxed_279_, v_h_277_, v_normalized_278_);
lean_dec(v_normalized_278_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim___redArg(lean_object* v_lax_281_){
_start:
{
lean_inc(v_lax_281_);
return v_lax_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim___redArg___boxed(lean_object* v_lax_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim___redArg(v_lax_282_);
lean_dec(v_lax_282_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim(lean_object* v_motive_284_, uint8_t v_t_285_, lean_object* v_h_286_, lean_object* v_lax_287_){
_start:
{
lean_inc(v_lax_287_);
return v_lax_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim___boxed(lean_object* v_motive_288_, lean_object* v_t_289_, lean_object* v_h_290_, lean_object* v_lax_291_){
_start:
{
uint8_t v_t_boxed_292_; lean_object* v_res_293_; 
v_t_boxed_292_ = lean_unbox(v_t_289_);
v_res_293_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim(v_motive_288_, v_t_boxed_292_, v_h_290_, v_lax_291_);
lean_dec(v_lax_291_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorIdx___impl(uint8_t v_x_294_){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lean_box(v_x_294_);
v___x_296_ = lean_obj_tag_nat(v___x_295_);
lean_dec(v___x_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorIdx___impl___boxed(lean_object* v_x_297_){
_start:
{
uint8_t v_x_4__boxed_298_; lean_object* v_res_299_; 
v_x_4__boxed_298_ = lean_unbox(v_x_297_);
v_res_299_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorIdx___impl(v_x_4__boxed_298_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim___redArg(lean_object* v_k_300_){
_start:
{
lean_inc(v_k_300_);
return v_k_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim___redArg___boxed(lean_object* v_k_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim___redArg(v_k_301_);
lean_dec(v_k_301_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim(lean_object* v_motive_303_, lean_object* v_ctorIdx_304_, uint8_t v_t_305_, lean_object* v_h_306_, lean_object* v_k_307_){
_start:
{
lean_inc(v_k_307_);
return v_k_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim___boxed(lean_object* v_motive_308_, lean_object* v_ctorIdx_309_, lean_object* v_t_310_, lean_object* v_h_311_, lean_object* v_k_312_){
_start:
{
uint8_t v_t_boxed_313_; lean_object* v_res_314_; 
v_t_boxed_313_ = lean_unbox(v_t_310_);
v_res_314_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim(v_motive_308_, v_ctorIdx_309_, v_t_boxed_313_, v_h_311_, v_k_312_);
lean_dec(v_k_312_);
lean_dec(v_ctorIdx_309_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim___redArg(lean_object* v_exact_315_){
_start:
{
lean_inc(v_exact_315_);
return v_exact_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim___redArg___boxed(lean_object* v_exact_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim___redArg(v_exact_316_);
lean_dec(v_exact_316_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim(lean_object* v_motive_318_, uint8_t v_t_319_, lean_object* v_h_320_, lean_object* v_exact_321_){
_start:
{
lean_inc(v_exact_321_);
return v_exact_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim___boxed(lean_object* v_motive_322_, lean_object* v_t_323_, lean_object* v_h_324_, lean_object* v_exact_325_){
_start:
{
uint8_t v_t_boxed_326_; lean_object* v_res_327_; 
v_t_boxed_326_ = lean_unbox(v_t_323_);
v_res_327_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim(v_motive_322_, v_t_boxed_326_, v_h_324_, v_exact_325_);
lean_dec(v_exact_325_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim___redArg(lean_object* v_sorted_328_){
_start:
{
lean_inc(v_sorted_328_);
return v_sorted_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim___redArg___boxed(lean_object* v_sorted_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim___redArg(v_sorted_329_);
lean_dec(v_sorted_329_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim(lean_object* v_motive_331_, uint8_t v_t_332_, lean_object* v_h_333_, lean_object* v_sorted_334_){
_start:
{
lean_inc(v_sorted_334_);
return v_sorted_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim___boxed(lean_object* v_motive_335_, lean_object* v_t_336_, lean_object* v_h_337_, lean_object* v_sorted_338_){
_start:
{
uint8_t v_t_boxed_339_; lean_object* v_res_340_; 
v_t_boxed_339_ = lean_unbox(v_t_336_);
v_res_340_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim(v_motive_335_, v_t_boxed_339_, v_h_337_, v_sorted_338_);
lean_dec(v_sorted_338_);
return v_res_340_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_341_ = lean_box(0);
v___x_342_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
lean_ctor_set(v___x_343_, 1, v___x_341_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg(){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___closed__0);
v___x_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___boxed(lean_object* v___y_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0(lean_object* v_00_u03b1_349_, lean_object* v___y_350_, lean_object* v___y_351_){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___boxed(lean_object* v_00_u03b1_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0(v_00_u03b1_354_, v___y_355_, v___y_356_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction(lean_object* v_action_x3f_376_, lean_object* v_a_377_, lean_object* v_a_378_){
_start:
{
if (lean_obj_tag(v_action_x3f_376_) == 1)
{
lean_object* v_val_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_411_; 
v_val_380_ = lean_ctor_get(v_action_x3f_376_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v_action_x3f_376_);
if (v_isSharedCheck_411_ == 0)
{
v___x_382_ = v_action_x3f_376_;
v_isShared_383_ = v_isSharedCheck_411_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_val_380_);
lean_dec(v_action_x3f_376_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_411_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_384_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__1));
lean_inc(v_val_380_);
v___x_385_ = l_Lean_Syntax_isOfKind(v_val_380_, v___x_384_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; 
lean_del_object(v___x_382_);
lean_dec(v_val_380_);
v___x_386_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_386_;
}
else
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_387_ = lean_unsigned_to_nat(0u);
v___x_388_ = l_Lean_Syntax_getArg(v_val_380_, v___x_387_);
lean_dec(v_val_380_);
v___x_389_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__4));
lean_inc(v___x_388_);
v___x_390_ = l_Lean_Syntax_isOfKind(v___x_388_, v___x_389_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; uint8_t v___x_392_; 
v___x_391_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__6));
lean_inc(v___x_388_);
v___x_392_ = l_Lean_Syntax_isOfKind(v___x_388_, v___x_391_);
if (v___x_392_ == 0)
{
lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_393_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__8));
v___x_394_ = l_Lean_Syntax_isOfKind(v___x_388_, v___x_393_);
if (v___x_394_ == 0)
{
lean_object* v___x_395_; 
lean_del_object(v___x_382_);
v___x_395_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_395_;
}
else
{
uint8_t v___x_396_; lean_object* v___x_397_; lean_object* v___x_399_; 
v___x_396_ = 2;
v___x_397_ = lean_box(v___x_396_);
if (v_isShared_383_ == 0)
{
lean_ctor_set_tag(v___x_382_, 0);
lean_ctor_set(v___x_382_, 0, v___x_397_);
v___x_399_ = v___x_382_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v___x_397_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
else
{
uint8_t v___x_401_; lean_object* v___x_402_; lean_object* v___x_404_; 
lean_dec(v___x_388_);
v___x_401_ = 1;
v___x_402_ = lean_box(v___x_401_);
if (v_isShared_383_ == 0)
{
lean_ctor_set_tag(v___x_382_, 0);
lean_ctor_set(v___x_382_, 0, v___x_402_);
v___x_404_ = v___x_382_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v___x_402_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
else
{
uint8_t v___x_406_; lean_object* v___x_407_; lean_object* v___x_409_; 
lean_dec(v___x_388_);
v___x_406_ = 0;
v___x_407_ = lean_box(v___x_406_);
if (v_isShared_383_ == 0)
{
lean_ctor_set_tag(v___x_382_, 0);
lean_ctor_set(v___x_382_, 0, v___x_407_);
v___x_409_ = v___x_382_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_407_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
}
}
else
{
uint8_t v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
lean_dec(v_action_x3f_376_);
v___x_412_ = 0;
v___x_413_ = lean_box(v___x_412_);
v___x_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
return v___x_414_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___boxed(lean_object* v_action_x3f_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction(v_action_x3f_415_, v_a_416_, v_a_417_);
lean_dec(v_a_417_);
lean_dec_ref(v_a_416_);
return v_res_419_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__0(uint8_t v___x_420_, lean_object* v_x_421_){
_start:
{
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__0___boxed(lean_object* v___x_422_, lean_object* v_x_423_){
_start:
{
uint8_t v___x_1335__boxed_424_; uint8_t v_res_425_; lean_object* v_r_426_; 
v___x_1335__boxed_424_ = lean_unbox(v___x_422_);
v_res_425_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__0(v___x_1335__boxed_424_, v_x_423_);
lean_dec_ref(v_x_423_);
v_r_426_ = lean_box(v_res_425_);
return v_r_426_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__1(uint8_t v___x_427_, lean_object* v_msg_428_){
_start:
{
uint8_t v___x_429_; 
v___x_429_ = l_Lean_Message_isTrace(v_msg_428_);
if (v___x_429_ == 0)
{
uint8_t v_severity_430_; uint8_t v___x_431_; uint8_t v___x_432_; 
v_severity_430_ = lean_ctor_get_uint8(v_msg_428_, sizeof(void*)*5 + 1);
v___x_431_ = 2;
v___x_432_ = l_Lean_instBEqMessageSeverity_beq(v_severity_430_, v___x_431_);
return v___x_432_;
}
else
{
return v___x_427_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__1___boxed(lean_object* v___x_433_, lean_object* v_msg_434_){
_start:
{
uint8_t v___x_1341__boxed_435_; uint8_t v_res_436_; lean_object* v_r_437_; 
v___x_1341__boxed_435_ = lean_unbox(v___x_433_);
v_res_436_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__1(v___x_1341__boxed_435_, v_msg_434_);
lean_dec_ref(v_msg_434_);
v_r_437_ = lean_box(v_res_436_);
return v_r_437_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__2(uint8_t v___x_438_, lean_object* v_msg_439_){
_start:
{
uint8_t v___x_440_; 
v___x_440_ = l_Lean_Message_isTrace(v_msg_439_);
if (v___x_440_ == 0)
{
uint8_t v_severity_441_; uint8_t v___x_442_; uint8_t v___x_443_; 
v_severity_441_ = lean_ctor_get_uint8(v_msg_439_, sizeof(void*)*5 + 1);
v___x_442_ = 1;
v___x_443_ = l_Lean_instBEqMessageSeverity_beq(v_severity_441_, v___x_442_);
return v___x_443_;
}
else
{
return v___x_438_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__2___boxed(lean_object* v___x_444_, lean_object* v_msg_445_){
_start:
{
uint8_t v___x_1350__boxed_446_; uint8_t v_res_447_; lean_object* v_r_448_; 
v___x_1350__boxed_446_ = lean_unbox(v___x_444_);
v_res_447_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__2(v___x_1350__boxed_446_, v_msg_445_);
lean_dec_ref(v_msg_445_);
v_r_448_ = lean_box(v_res_447_);
return v_r_448_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__3(uint8_t v___x_449_, lean_object* v_msg_450_){
_start:
{
uint8_t v___x_451_; 
v___x_451_ = l_Lean_Message_isTrace(v_msg_450_);
if (v___x_451_ == 0)
{
uint8_t v_severity_452_; uint8_t v___x_453_; uint8_t v___x_454_; 
v_severity_452_ = lean_ctor_get_uint8(v_msg_450_, sizeof(void*)*5 + 1);
v___x_453_ = 0;
v___x_454_ = l_Lean_instBEqMessageSeverity_beq(v_severity_452_, v___x_453_);
return v___x_454_;
}
else
{
return v___x_449_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__3___boxed(lean_object* v___x_455_, lean_object* v_msg_456_){
_start:
{
uint8_t v___x_1359__boxed_457_; uint8_t v_res_458_; lean_object* v_r_459_; 
v___x_1359__boxed_457_ = lean_unbox(v___x_455_);
v_res_458_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__3(v___x_1359__boxed_457_, v_msg_456_);
lean_dec_ref(v_msg_456_);
v_r_459_ = lean_box(v_res_458_);
return v_r_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg(lean_object* v_x_485_){
_start:
{
lean_object* v___x_487_; uint8_t v___x_488_; 
v___x_487_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__1));
lean_inc(v_x_485_);
v___x_488_ = l_Lean_Syntax_isOfKind(v_x_485_, v___x_487_);
if (v___x_488_ == 0)
{
lean_object* v___x_489_; 
lean_dec(v_x_485_);
v___x_489_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_489_;
}
else
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; uint8_t v___x_493_; 
v___x_490_ = lean_unsigned_to_nat(0u);
v___x_491_ = l_Lean_Syntax_getArg(v_x_485_, v___x_490_);
lean_dec(v_x_485_);
v___x_492_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__3));
lean_inc(v___x_491_);
v___x_493_ = l_Lean_Syntax_isOfKind(v___x_491_, v___x_492_);
if (v___x_493_ == 0)
{
lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_494_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__5));
lean_inc(v___x_491_);
v___x_495_ = l_Lean_Syntax_isOfKind(v___x_491_, v___x_494_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; uint8_t v___x_497_; 
v___x_496_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__7));
lean_inc(v___x_491_);
v___x_497_ = l_Lean_Syntax_isOfKind(v___x_491_, v___x_496_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_498_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__9));
lean_inc(v___x_491_);
v___x_499_ = l_Lean_Syntax_isOfKind(v___x_491_, v___x_498_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; uint8_t v___x_501_; 
v___x_500_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__11));
v___x_501_ = l_Lean_Syntax_isOfKind(v___x_491_, v___x_500_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; 
v___x_502_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_502_;
}
else
{
lean_object* v___x_503_; lean_object* v___f_504_; lean_object* v___x_505_; 
v___x_503_ = lean_box(v___x_501_);
v___f_504_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_504_, 0, v___x_503_);
v___x_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_505_, 0, v___f_504_);
return v___x_505_;
}
}
else
{
lean_object* v___x_506_; lean_object* v___f_507_; lean_object* v___x_508_; 
lean_dec(v___x_491_);
v___x_506_ = lean_box(v___x_497_);
v___f_507_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_507_, 0, v___x_506_);
v___x_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_508_, 0, v___f_507_);
return v___x_508_;
}
}
else
{
lean_object* v___x_509_; lean_object* v___f_510_; lean_object* v___x_511_; 
lean_dec(v___x_491_);
v___x_509_ = lean_box(v___x_495_);
v___f_510_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_510_, 0, v___x_509_);
v___x_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_511_, 0, v___f_510_);
return v___x_511_;
}
}
else
{
lean_object* v___x_512_; lean_object* v___f_513_; lean_object* v___x_514_; 
lean_dec(v___x_491_);
v___x_512_ = lean_box(v___x_493_);
v___f_513_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__3___boxed), 2, 1);
lean_closure_set(v___f_513_, 0, v___x_512_);
v___x_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_514_, 0, v___f_513_);
return v___x_514_;
}
}
else
{
lean_object* v___f_515_; lean_object* v___x_516_; 
lean_dec(v___x_491_);
v___f_515_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__12));
v___x_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_516_, 0, v___f_515_);
return v___x_516_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___boxed(lean_object* v_x_517_, lean_object* v_a_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg(v_x_517_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity(lean_object* v_x_520_, lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
lean_object* v___x_524_; 
v___x_524_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg(v_x_520_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___boxed(lean_object* v_x_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity(v_x_525_, v_a_526_, v_a_527_);
lean_dec(v_a_527_);
lean_dec_ref(v_a_526_);
return v_res_529_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__0(lean_object* v_x_530_){
_start:
{
uint8_t v___x_531_; 
v___x_531_ = 0;
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__0___boxed(lean_object* v_x_532_){
_start:
{
uint8_t v_res_533_; lean_object* v_r_534_; 
v_res_533_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__0(v_x_532_);
lean_dec_ref(v_x_532_);
v_r_534_ = lean_box(v_res_533_);
return v_r_534_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__1(lean_object* v_snd_535_, lean_object* v___y_536_){
_start:
{
if (lean_obj_tag(v_snd_535_) == 0)
{
uint8_t v___x_537_; 
lean_dec_ref(v___y_536_);
v___x_537_ = 0;
return v___x_537_;
}
else
{
lean_object* v_val_538_; lean_object* v___x_539_; uint8_t v___x_540_; 
v_val_538_ = lean_ctor_get(v_snd_535_, 0);
lean_inc(v_val_538_);
lean_dec_ref_known(v_snd_535_, 1);
v___x_539_ = lean_apply_1(v_val_538_, v___y_536_);
v___x_540_ = lean_unbox(v___x_539_);
return v___x_540_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__1___boxed(lean_object* v_snd_541_, lean_object* v___y_542_){
_start:
{
uint8_t v_res_543_; lean_object* v_r_544_; 
v_res_543_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__1(v_snd_541_, v___y_542_);
v_r_544_ = lean_box(v_res_543_);
return v_r_544_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___lam__0(lean_object* v_a_545_, lean_object* v_snd_546_, uint8_t v_a_547_, lean_object* v___y_548_){
_start:
{
lean_object* v___x_549_; uint8_t v___x_550_; 
lean_inc_ref(v___y_548_);
v___x_549_ = lean_apply_1(v_a_545_, v___y_548_);
v___x_550_ = lean_unbox(v___x_549_);
if (v___x_550_ == 0)
{
if (lean_obj_tag(v_snd_546_) == 0)
{
uint8_t v___x_551_; 
lean_dec_ref(v___y_548_);
v___x_551_ = 2;
return v___x_551_;
}
else
{
lean_object* v_val_552_; lean_object* v___x_553_; uint8_t v___x_554_; 
v_val_552_ = lean_ctor_get(v_snd_546_, 0);
lean_inc(v_val_552_);
lean_dec_ref_known(v_snd_546_, 1);
v___x_553_ = lean_apply_1(v_val_552_, v___y_548_);
v___x_554_ = lean_unbox(v___x_553_);
return v___x_554_;
}
}
else
{
lean_dec_ref(v___y_548_);
lean_dec(v_snd_546_);
return v_a_547_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___lam__0___boxed(lean_object* v_a_555_, lean_object* v_snd_556_, lean_object* v_a_557_, lean_object* v___y_558_){
_start:
{
uint8_t v_a_10350__boxed_559_; uint8_t v_res_560_; lean_object* v_r_561_; 
v_a_10350__boxed_559_ = lean_unbox(v_a_557_);
v_res_560_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___lam__0(v_a_555_, v_snd_556_, v_a_10350__boxed_559_, v___y_558_);
v_r_561_ = lean_box(v_res_560_);
return v_r_561_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0(lean_object* v_as_622_, size_t v_sz_623_, size_t v_i_624_, lean_object* v_b_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
lean_object* v_a_630_; uint8_t v___x_634_; 
v___x_634_ = lean_usize_dec_lt(v_i_624_, v_sz_623_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; 
v___x_635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_635_, 0, v_b_625_);
return v___x_635_;
}
else
{
lean_object* v_snd_636_; lean_object* v_snd_637_; lean_object* v_snd_638_; lean_object* v_fst_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_946_; 
v_snd_636_ = lean_ctor_get(v_b_625_, 1);
lean_inc(v_snd_636_);
v_snd_637_ = lean_ctor_get(v_snd_636_, 1);
lean_inc(v_snd_637_);
v_snd_638_ = lean_ctor_get(v_snd_637_, 1);
lean_inc(v_snd_638_);
v_fst_639_ = lean_ctor_get(v_b_625_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v_b_625_);
if (v_isSharedCheck_946_ == 0)
{
lean_object* v_unused_947_; 
v_unused_947_ = lean_ctor_get(v_b_625_, 1);
lean_dec(v_unused_947_);
v___x_641_ = v_b_625_;
v_isShared_642_ = v_isSharedCheck_946_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_fst_639_);
lean_dec(v_b_625_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_946_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v_fst_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_944_; 
v_fst_643_ = lean_ctor_get(v_snd_636_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v_snd_636_);
if (v_isSharedCheck_944_ == 0)
{
lean_object* v_unused_945_; 
v_unused_945_ = lean_ctor_get(v_snd_636_, 1);
lean_dec(v_unused_945_);
v___x_645_ = v_snd_636_;
v_isShared_646_ = v_isSharedCheck_944_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_fst_643_);
lean_dec(v_snd_636_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_944_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v_fst_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_942_; 
v_fst_647_ = lean_ctor_get(v_snd_637_, 0);
v_isSharedCheck_942_ = !lean_is_exclusive(v_snd_637_);
if (v_isSharedCheck_942_ == 0)
{
lean_object* v_unused_943_; 
v_unused_943_ = lean_ctor_get(v_snd_637_, 1);
lean_dec(v_unused_943_);
v___x_649_ = v_snd_637_;
v_isShared_650_ = v_isSharedCheck_942_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_fst_647_);
lean_dec(v_snd_637_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_942_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v_fst_651_; lean_object* v_snd_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_941_; 
v_fst_651_ = lean_ctor_get(v_snd_638_, 0);
v_snd_652_ = lean_ctor_get(v_snd_638_, 1);
v_isSharedCheck_941_ = !lean_is_exclusive(v_snd_638_);
if (v_isSharedCheck_941_ == 0)
{
v___x_654_ = v_snd_638_;
v_isShared_655_ = v_isSharedCheck_941_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_snd_652_);
lean_inc(v_fst_651_);
lean_dec(v_snd_638_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_941_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v_a_656_; lean_object* v___x_657_; uint8_t v___x_658_; 
v_a_656_ = lean_array_uget_borrowed(v_as_622_, v_i_624_);
v___x_657_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__1));
lean_inc(v_a_656_);
v___x_658_ = l_Lean_Syntax_isOfKind(v_a_656_, v___x_657_);
if (v___x_658_ == 0)
{
lean_object* v___x_659_; 
v___x_659_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_659_) == 0)
{
lean_object* v___x_661_; 
lean_dec_ref_known(v___x_659_, 1);
if (v_isShared_655_ == 0)
{
v___x_661_ = v___x_654_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_fst_651_);
lean_ctor_set(v_reuseFailAlloc_671_, 1, v_snd_652_);
v___x_661_ = v_reuseFailAlloc_671_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
lean_object* v___x_663_; 
if (v_isShared_650_ == 0)
{
lean_ctor_set(v___x_649_, 1, v___x_661_);
v___x_663_ = v___x_649_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_fst_647_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v___x_661_);
v___x_663_ = v_reuseFailAlloc_670_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
lean_object* v___x_665_; 
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 1, v___x_663_);
v___x_665_ = v___x_645_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_fst_643_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v___x_663_);
v___x_665_ = v_reuseFailAlloc_669_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
lean_object* v___x_667_; 
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 1, v___x_665_);
v___x_667_ = v___x_641_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_fst_639_);
lean_ctor_set(v_reuseFailAlloc_668_, 1, v___x_665_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
v_a_630_ = v___x_667_;
goto v___jp_629_;
}
}
}
}
}
else
{
lean_object* v_a_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_679_; 
lean_del_object(v___x_654_);
lean_dec(v_snd_652_);
lean_dec(v_fst_651_);
lean_del_object(v___x_649_);
lean_dec(v_fst_647_);
lean_del_object(v___x_645_);
lean_dec(v_fst_643_);
lean_del_object(v___x_641_);
lean_dec(v_fst_639_);
v_a_672_ = lean_ctor_get(v___x_659_, 0);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_679_ == 0)
{
v___x_674_ = v___x_659_;
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_a_672_);
lean_dec(v___x_659_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_677_; 
if (v_isShared_675_ == 0)
{
v___x_677_ = v___x_674_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_a_672_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
}
else
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v_action_x3f_683_; lean_object* v___y_684_; lean_object* v___y_685_; lean_object* v___x_722_; uint8_t v___x_723_; 
v___x_680_ = lean_unsigned_to_nat(0u);
v___x_681_ = l_Lean_Syntax_getArg(v_a_656_, v___x_680_);
v___x_722_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__3));
lean_inc(v___x_681_);
v___x_723_ = l_Lean_Syntax_isOfKind(v___x_681_, v___x_722_);
if (v___x_723_ == 0)
{
lean_object* v___x_724_; uint8_t v___x_725_; 
lean_del_object(v___x_654_);
lean_del_object(v___x_649_);
lean_del_object(v___x_645_);
lean_del_object(v___x_641_);
v___x_724_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__5));
lean_inc(v___x_681_);
v___x_725_ = l_Lean_Syntax_isOfKind(v___x_681_, v___x_724_);
if (v___x_725_ == 0)
{
lean_object* v___x_726_; uint8_t v_substring_727_; 
v___x_726_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__7));
lean_inc(v___x_681_);
v_substring_727_ = l_Lean_Syntax_isOfKind(v___x_681_, v___x_726_);
if (v_substring_727_ == 0)
{
lean_object* v___x_728_; uint8_t v___x_729_; 
v___x_728_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__9));
lean_inc(v___x_681_);
v___x_729_ = l_Lean_Syntax_isOfKind(v___x_681_, v___x_728_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; uint8_t v___x_731_; 
v___x_730_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__11));
lean_inc(v___x_681_);
v___x_731_ = l_Lean_Syntax_isOfKind(v___x_681_, v___x_730_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; 
lean_dec(v___x_681_);
v___x_732_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
lean_dec_ref_known(v___x_732_, 1);
v___x_733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_733_, 0, v_fst_651_);
lean_ctor_set(v___x_733_, 1, v_snd_652_);
v___x_734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_734_, 0, v_fst_647_);
lean_ctor_set(v___x_734_, 1, v___x_733_);
v___x_735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_735_, 0, v_fst_643_);
lean_ctor_set(v___x_735_, 1, v___x_734_);
v___x_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_736_, 0, v_fst_639_);
lean_ctor_set(v___x_736_, 1, v___x_735_);
v_a_630_ = v___x_736_;
goto v___jp_629_;
}
else
{
lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_744_; 
lean_dec(v_snd_652_);
lean_dec(v_fst_651_);
lean_dec(v_fst_647_);
lean_dec(v_fst_643_);
lean_dec(v_fst_639_);
v_a_737_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_744_ == 0)
{
v___x_739_ = v___x_732_;
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v___x_732_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_742_; 
if (v_isShared_740_ == 0)
{
v___x_742_ = v___x_739_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_a_737_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
return v___x_742_;
}
}
}
}
else
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; uint8_t v___x_748_; 
v___x_745_ = lean_unsigned_to_nat(2u);
v___x_746_ = l_Lean_Syntax_getArg(v___x_681_, v___x_745_);
lean_dec(v___x_681_);
v___x_747_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__13));
lean_inc(v___x_746_);
v___x_748_ = l_Lean_Syntax_isOfKind(v___x_746_, v___x_747_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; uint8_t v___x_750_; 
v___x_749_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__15));
v___x_750_ = l_Lean_Syntax_isOfKind(v___x_746_, v___x_749_);
if (v___x_750_ == 0)
{
lean_object* v___x_751_; 
v___x_751_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_751_) == 0)
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
lean_dec_ref_known(v___x_751_, 1);
v___x_752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_752_, 0, v_fst_651_);
lean_ctor_set(v___x_752_, 1, v_snd_652_);
v___x_753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_753_, 0, v_fst_647_);
lean_ctor_set(v___x_753_, 1, v___x_752_);
v___x_754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_754_, 0, v_fst_643_);
lean_ctor_set(v___x_754_, 1, v___x_753_);
v___x_755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_755_, 0, v_fst_639_);
lean_ctor_set(v___x_755_, 1, v___x_754_);
v_a_630_ = v___x_755_;
goto v___jp_629_;
}
else
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_763_; 
lean_dec(v_snd_652_);
lean_dec(v_fst_651_);
lean_dec(v_fst_647_);
lean_dec(v_fst_643_);
lean_dec(v_fst_639_);
v_a_756_ = lean_ctor_get(v___x_751_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_751_);
if (v_isSharedCheck_763_ == 0)
{
v___x_758_ = v___x_751_;
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v___x_751_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
else
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
lean_dec(v_fst_651_);
v___x_764_ = lean_box(v_substring_727_);
v___x_765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_765_, 0, v___x_764_);
lean_ctor_set(v___x_765_, 1, v_snd_652_);
v___x_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_766_, 0, v_fst_647_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_767_, 0, v_fst_643_);
lean_ctor_set(v___x_767_, 1, v___x_766_);
v___x_768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_768_, 0, v_fst_639_);
lean_ctor_set(v___x_768_, 1, v___x_767_);
v_a_630_ = v___x_768_;
goto v___jp_629_;
}
}
else
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
lean_dec(v___x_746_);
lean_dec(v_fst_651_);
v___x_769_ = lean_box(v___x_748_);
v___x_770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_770_, 0, v___x_769_);
lean_ctor_set(v___x_770_, 1, v_snd_652_);
v___x_771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_771_, 0, v_fst_647_);
lean_ctor_set(v___x_771_, 1, v___x_770_);
v___x_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_772_, 0, v_fst_643_);
lean_ctor_set(v___x_772_, 1, v___x_771_);
v___x_773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_773_, 0, v_fst_639_);
lean_ctor_set(v___x_773_, 1, v___x_772_);
v_a_630_ = v___x_773_;
goto v___jp_629_;
}
}
}
else
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; 
v___x_774_ = lean_unsigned_to_nat(2u);
v___x_775_ = l_Lean_Syntax_getArg(v___x_681_, v___x_774_);
lean_dec(v___x_681_);
v___x_776_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__17));
lean_inc(v___x_775_);
v___x_777_ = l_Lean_Syntax_isOfKind(v___x_775_, v___x_776_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; 
lean_dec(v___x_775_);
v___x_778_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
lean_dec_ref_known(v___x_778_, 1);
v___x_779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_779_, 0, v_fst_651_);
lean_ctor_set(v___x_779_, 1, v_snd_652_);
v___x_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_780_, 0, v_fst_647_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
v___x_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_781_, 0, v_fst_643_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
v___x_782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_782_, 0, v_fst_639_);
lean_ctor_set(v___x_782_, 1, v___x_781_);
v_a_630_ = v___x_782_;
goto v___jp_629_;
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
lean_dec(v_snd_652_);
lean_dec(v_fst_651_);
lean_dec(v_fst_647_);
lean_dec(v_fst_643_);
lean_dec(v_fst_639_);
v_a_783_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v___x_778_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_778_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_788_; 
if (v_isShared_786_ == 0)
{
v___x_788_ = v___x_785_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_a_783_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
else
{
lean_object* v___x_791_; lean_object* v___x_792_; uint8_t v___x_793_; 
v___x_791_ = l_Lean_Syntax_getArg(v___x_775_, v___x_680_);
lean_dec(v___x_775_);
v___x_792_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__13));
lean_inc(v___x_791_);
v___x_793_ = l_Lean_Syntax_isOfKind(v___x_791_, v___x_792_);
if (v___x_793_ == 0)
{
lean_object* v___x_794_; uint8_t v___x_795_; 
v___x_794_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__15));
v___x_795_ = l_Lean_Syntax_isOfKind(v___x_791_, v___x_794_);
if (v___x_795_ == 0)
{
lean_object* v___x_796_; 
v___x_796_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_796_) == 0)
{
lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
lean_dec_ref_known(v___x_796_, 1);
v___x_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_797_, 0, v_fst_651_);
lean_ctor_set(v___x_797_, 1, v_snd_652_);
v___x_798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_798_, 0, v_fst_647_);
lean_ctor_set(v___x_798_, 1, v___x_797_);
v___x_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_799_, 0, v_fst_643_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
v___x_800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_800_, 0, v_fst_639_);
lean_ctor_set(v___x_800_, 1, v___x_799_);
v_a_630_ = v___x_800_;
goto v___jp_629_;
}
else
{
lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_808_; 
lean_dec(v_snd_652_);
lean_dec(v_fst_651_);
lean_dec(v_fst_647_);
lean_dec(v_fst_643_);
lean_dec(v_fst_639_);
v_a_801_ = lean_ctor_get(v___x_796_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_796_);
if (v_isSharedCheck_808_ == 0)
{
v___x_803_ = v___x_796_;
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v___x_796_);
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
v_reuseFailAlloc_807_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
lean_dec(v_fst_647_);
v___x_809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_809_, 0, v_fst_651_);
lean_ctor_set(v___x_809_, 1, v_snd_652_);
v___x_810_ = lean_box(v_substring_727_);
v___x_811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_811_, 0, v___x_810_);
lean_ctor_set(v___x_811_, 1, v___x_809_);
v___x_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_812_, 0, v_fst_643_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_813_, 0, v_fst_639_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
v_a_630_ = v___x_813_;
goto v___jp_629_;
}
}
else
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
lean_dec(v___x_791_);
lean_dec(v_fst_647_);
v___x_814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_814_, 0, v_fst_651_);
lean_ctor_set(v___x_814_, 1, v_snd_652_);
v___x_815_ = lean_box(v___x_793_);
v___x_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
lean_ctor_set(v___x_816_, 1, v___x_814_);
v___x_817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_817_, 0, v_fst_643_);
lean_ctor_set(v___x_817_, 1, v___x_816_);
v___x_818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_818_, 0, v_fst_639_);
lean_ctor_set(v___x_818_, 1, v___x_817_);
v_a_630_ = v___x_818_;
goto v___jp_629_;
}
}
}
}
else
{
lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; uint8_t v___x_822_; 
v___x_819_ = lean_unsigned_to_nat(2u);
v___x_820_ = l_Lean_Syntax_getArg(v___x_681_, v___x_819_);
lean_dec(v___x_681_);
v___x_821_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__19));
lean_inc(v___x_820_);
v___x_822_ = l_Lean_Syntax_isOfKind(v___x_820_, v___x_821_);
if (v___x_822_ == 0)
{
lean_object* v___x_823_; 
lean_dec(v___x_820_);
v___x_823_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
lean_dec_ref_known(v___x_823_, 1);
v___x_824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_824_, 0, v_fst_651_);
lean_ctor_set(v___x_824_, 1, v_snd_652_);
v___x_825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_825_, 0, v_fst_647_);
lean_ctor_set(v___x_825_, 1, v___x_824_);
v___x_826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_826_, 0, v_fst_643_);
lean_ctor_set(v___x_826_, 1, v___x_825_);
v___x_827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_827_, 0, v_fst_639_);
lean_ctor_set(v___x_827_, 1, v___x_826_);
v_a_630_ = v___x_827_;
goto v___jp_629_;
}
else
{
lean_object* v_a_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_835_; 
lean_dec(v_snd_652_);
lean_dec(v_fst_651_);
lean_dec(v_fst_647_);
lean_dec(v_fst_643_);
lean_dec(v_fst_639_);
v_a_828_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_835_ == 0)
{
v___x_830_ = v___x_823_;
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_a_828_);
lean_dec(v___x_823_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_833_; 
if (v_isShared_831_ == 0)
{
v___x_833_ = v___x_830_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_a_828_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
}
else
{
lean_object* v___x_836_; lean_object* v___x_837_; uint8_t v___x_838_; 
v___x_836_ = l_Lean_Syntax_getArg(v___x_820_, v___x_680_);
lean_dec(v___x_820_);
v___x_837_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__21));
lean_inc(v___x_836_);
v___x_838_ = l_Lean_Syntax_isOfKind(v___x_836_, v___x_837_);
if (v___x_838_ == 0)
{
lean_object* v___x_839_; uint8_t v___x_840_; 
v___x_839_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__23));
v___x_840_ = l_Lean_Syntax_isOfKind(v___x_836_, v___x_839_);
if (v___x_840_ == 0)
{
lean_object* v___x_841_; 
v___x_841_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
lean_dec_ref_known(v___x_841_, 1);
v___x_842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_842_, 0, v_fst_651_);
lean_ctor_set(v___x_842_, 1, v_snd_652_);
v___x_843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_843_, 0, v_fst_647_);
lean_ctor_set(v___x_843_, 1, v___x_842_);
v___x_844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_844_, 0, v_fst_643_);
lean_ctor_set(v___x_844_, 1, v___x_843_);
v___x_845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_845_, 0, v_fst_639_);
lean_ctor_set(v___x_845_, 1, v___x_844_);
v_a_630_ = v___x_845_;
goto v___jp_629_;
}
else
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_853_; 
lean_dec(v_snd_652_);
lean_dec(v_fst_651_);
lean_dec(v_fst_647_);
lean_dec(v_fst_643_);
lean_dec(v_fst_639_);
v_a_846_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_853_ == 0)
{
v___x_848_ = v___x_841_;
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_841_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_a_846_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
}
else
{
uint8_t v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
lean_dec(v_fst_643_);
v___x_854_ = 1;
v___x_855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_855_, 0, v_fst_651_);
lean_ctor_set(v___x_855_, 1, v_snd_652_);
v___x_856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_856_, 0, v_fst_647_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
v___x_857_ = lean_box(v___x_854_);
v___x_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_858_, 0, v___x_857_);
lean_ctor_set(v___x_858_, 1, v___x_856_);
v___x_859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_859_, 0, v_fst_639_);
lean_ctor_set(v___x_859_, 1, v___x_858_);
v_a_630_ = v___x_859_;
goto v___jp_629_;
}
}
else
{
uint8_t v_ordering_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
lean_dec(v___x_836_);
lean_dec(v_fst_643_);
v_ordering_860_ = 0;
v___x_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_861_, 0, v_fst_651_);
lean_ctor_set(v___x_861_, 1, v_snd_652_);
v___x_862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_862_, 0, v_fst_647_);
lean_ctor_set(v___x_862_, 1, v___x_861_);
v___x_863_ = lean_box(v_ordering_860_);
v___x_864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_864_, 0, v___x_863_);
lean_ctor_set(v___x_864_, 1, v___x_862_);
v___x_865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_865_, 0, v_fst_639_);
lean_ctor_set(v___x_865_, 1, v___x_864_);
v_a_630_ = v___x_865_;
goto v___jp_629_;
}
}
}
}
else
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; uint8_t v___x_869_; 
v___x_866_ = lean_unsigned_to_nat(2u);
v___x_867_ = l_Lean_Syntax_getArg(v___x_681_, v___x_866_);
lean_dec(v___x_681_);
v___x_868_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__25));
lean_inc(v___x_867_);
v___x_869_ = l_Lean_Syntax_isOfKind(v___x_867_, v___x_868_);
if (v___x_869_ == 0)
{
lean_object* v___x_870_; 
lean_dec(v___x_867_);
v___x_870_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
lean_dec_ref_known(v___x_870_, 1);
v___x_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_871_, 0, v_fst_651_);
lean_ctor_set(v___x_871_, 1, v_snd_652_);
v___x_872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_872_, 0, v_fst_647_);
lean_ctor_set(v___x_872_, 1, v___x_871_);
v___x_873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_873_, 0, v_fst_643_);
lean_ctor_set(v___x_873_, 1, v___x_872_);
v___x_874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_874_, 0, v_fst_639_);
lean_ctor_set(v___x_874_, 1, v___x_873_);
v_a_630_ = v___x_874_;
goto v___jp_629_;
}
else
{
lean_object* v_a_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_882_; 
lean_dec(v_snd_652_);
lean_dec(v_fst_651_);
lean_dec(v_fst_647_);
lean_dec(v_fst_643_);
lean_dec(v_fst_639_);
v_a_875_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_882_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_882_ == 0)
{
v___x_877_ = v___x_870_;
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_a_875_);
lean_dec(v___x_870_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_880_; 
if (v_isShared_878_ == 0)
{
v___x_880_ = v___x_877_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_a_875_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
else
{
lean_object* v___x_883_; lean_object* v___x_884_; uint8_t v___x_885_; 
v___x_883_ = l_Lean_Syntax_getArg(v___x_867_, v___x_680_);
lean_dec(v___x_867_);
v___x_884_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__21));
lean_inc(v___x_883_);
v___x_885_ = l_Lean_Syntax_isOfKind(v___x_883_, v___x_884_);
if (v___x_885_ == 0)
{
lean_object* v___x_886_; uint8_t v___x_887_; 
v___x_886_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__27));
lean_inc(v___x_883_);
v___x_887_ = l_Lean_Syntax_isOfKind(v___x_883_, v___x_886_);
if (v___x_887_ == 0)
{
lean_object* v___x_888_; uint8_t v___x_889_; 
v___x_888_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__29));
v___x_889_ = l_Lean_Syntax_isOfKind(v___x_883_, v___x_888_);
if (v___x_889_ == 0)
{
lean_object* v___x_890_; 
v___x_890_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
lean_dec_ref_known(v___x_890_, 1);
v___x_891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_891_, 0, v_fst_651_);
lean_ctor_set(v___x_891_, 1, v_snd_652_);
v___x_892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_892_, 0, v_fst_647_);
lean_ctor_set(v___x_892_, 1, v___x_891_);
v___x_893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_893_, 0, v_fst_643_);
lean_ctor_set(v___x_893_, 1, v___x_892_);
v___x_894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_894_, 0, v_fst_639_);
lean_ctor_set(v___x_894_, 1, v___x_893_);
v_a_630_ = v___x_894_;
goto v___jp_629_;
}
else
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_902_; 
lean_dec(v_snd_652_);
lean_dec(v_fst_651_);
lean_dec(v_fst_647_);
lean_dec(v_fst_643_);
lean_dec(v_fst_639_);
v_a_895_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_902_ == 0)
{
v___x_897_ = v___x_890_;
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_890_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_900_; 
if (v_isShared_898_ == 0)
{
v___x_900_ = v___x_897_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_a_895_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
}
else
{
uint8_t v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
lean_dec(v_fst_639_);
v___x_903_ = 2;
v___x_904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_904_, 0, v_fst_651_);
lean_ctor_set(v___x_904_, 1, v_snd_652_);
v___x_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_905_, 0, v_fst_647_);
lean_ctor_set(v___x_905_, 1, v___x_904_);
v___x_906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_906_, 0, v_fst_643_);
lean_ctor_set(v___x_906_, 1, v___x_905_);
v___x_907_ = lean_box(v___x_903_);
v___x_908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_908_, 0, v___x_907_);
lean_ctor_set(v___x_908_, 1, v___x_906_);
v_a_630_ = v___x_908_;
goto v___jp_629_;
}
}
else
{
uint8_t v_whitespace_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
lean_dec(v___x_883_);
lean_dec(v_fst_639_);
v_whitespace_909_ = 1;
v___x_910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_910_, 0, v_fst_651_);
lean_ctor_set(v___x_910_, 1, v_snd_652_);
v___x_911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_911_, 0, v_fst_647_);
lean_ctor_set(v___x_911_, 1, v___x_910_);
v___x_912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_912_, 0, v_fst_643_);
lean_ctor_set(v___x_912_, 1, v___x_911_);
v___x_913_ = lean_box(v_whitespace_909_);
v___x_914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_913_);
lean_ctor_set(v___x_914_, 1, v___x_912_);
v_a_630_ = v___x_914_;
goto v___jp_629_;
}
}
else
{
uint8_t v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
lean_dec(v___x_883_);
lean_dec(v_fst_639_);
v___x_915_ = 0;
v___x_916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_916_, 0, v_fst_651_);
lean_ctor_set(v___x_916_, 1, v_snd_652_);
v___x_917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_917_, 0, v_fst_647_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
v___x_918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_918_, 0, v_fst_643_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = lean_box(v___x_915_);
v___x_920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_919_);
lean_ctor_set(v___x_920_, 1, v___x_918_);
v_a_630_ = v___x_920_;
goto v___jp_629_;
}
}
}
}
else
{
lean_object* v___x_921_; uint8_t v___x_922_; 
v___x_921_ = l_Lean_Syntax_getArg(v___x_681_, v___x_680_);
v___x_922_ = l_Lean_Syntax_isNone(v___x_921_);
if (v___x_922_ == 0)
{
lean_object* v___x_923_; uint8_t v___x_924_; 
v___x_923_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_921_);
v___x_924_ = l_Lean_Syntax_matchesNull(v___x_921_, v___x_923_);
if (v___x_924_ == 0)
{
lean_object* v___x_925_; 
lean_dec(v___x_921_);
lean_dec(v___x_681_);
lean_del_object(v___x_654_);
lean_del_object(v___x_649_);
lean_del_object(v___x_645_);
lean_del_object(v___x_641_);
v___x_925_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
lean_dec_ref_known(v___x_925_, 1);
v___x_926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_926_, 0, v_fst_651_);
lean_ctor_set(v___x_926_, 1, v_snd_652_);
v___x_927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_927_, 0, v_fst_647_);
lean_ctor_set(v___x_927_, 1, v___x_926_);
v___x_928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_928_, 0, v_fst_643_);
lean_ctor_set(v___x_928_, 1, v___x_927_);
v___x_929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_929_, 0, v_fst_639_);
lean_ctor_set(v___x_929_, 1, v___x_928_);
v_a_630_ = v___x_929_;
goto v___jp_629_;
}
else
{
lean_object* v_a_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_937_; 
lean_dec(v_snd_652_);
lean_dec(v_fst_651_);
lean_dec(v_fst_647_);
lean_dec(v_fst_643_);
lean_dec(v_fst_639_);
v_a_930_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_937_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_937_ == 0)
{
v___x_932_ = v___x_925_;
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_a_930_);
lean_dec(v___x_925_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_935_; 
if (v_isShared_933_ == 0)
{
v___x_935_ = v___x_932_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_a_930_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
return v___x_935_;
}
}
}
}
else
{
lean_object* v___x_938_; lean_object* v___x_939_; 
v___x_938_ = l_Lean_Syntax_getArg(v___x_921_, v___x_680_);
lean_dec(v___x_921_);
v___x_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_939_, 0, v___x_938_);
v_action_x3f_683_ = v___x_939_;
v___y_684_ = v___y_626_;
v___y_685_ = v___y_627_;
goto v___jp_682_;
}
}
else
{
lean_object* v___x_940_; 
lean_dec(v___x_921_);
v___x_940_ = lean_box(0);
v_action_x3f_683_ = v___x_940_;
v___y_684_ = v___y_626_;
v___y_685_ = v___y_627_;
goto v___jp_682_;
}
}
v___jp_682_:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_686_ = lean_unsigned_to_nat(1u);
v___x_687_ = l_Lean_Syntax_getArg(v___x_681_, v___x_686_);
lean_dec(v___x_681_);
v___x_688_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction(v_action_x3f_683_, v___y_684_, v___y_685_);
if (lean_obj_tag(v___x_688_) == 0)
{
lean_object* v_a_689_; lean_object* v___x_690_; 
v_a_689_ = lean_ctor_get(v___x_688_, 0);
lean_inc(v_a_689_);
lean_dec_ref_known(v___x_688_, 1);
v___x_690_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg(v___x_687_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v_a_691_; lean_object* v___f_692_; lean_object* v___x_693_; lean_object* v___x_695_; 
v_a_691_ = lean_ctor_get(v___x_690_, 0);
lean_inc(v_a_691_);
lean_dec_ref_known(v___x_690_, 1);
v___f_692_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___lam__0___boxed), 4, 3);
lean_closure_set(v___f_692_, 0, v_a_691_);
lean_closure_set(v___f_692_, 1, v_snd_652_);
lean_closure_set(v___f_692_, 2, v_a_689_);
v___x_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_693_, 0, v___f_692_);
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 1, v___x_693_);
v___x_695_ = v___x_654_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_fst_651_);
lean_ctor_set(v_reuseFailAlloc_705_, 1, v___x_693_);
v___x_695_ = v_reuseFailAlloc_705_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
lean_object* v___x_697_; 
if (v_isShared_650_ == 0)
{
lean_ctor_set(v___x_649_, 1, v___x_695_);
v___x_697_ = v___x_649_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_fst_647_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v___x_695_);
v___x_697_ = v_reuseFailAlloc_704_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
lean_object* v___x_699_; 
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 1, v___x_697_);
v___x_699_ = v___x_645_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_fst_643_);
lean_ctor_set(v_reuseFailAlloc_703_, 1, v___x_697_);
v___x_699_ = v_reuseFailAlloc_703_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
lean_object* v___x_701_; 
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 1, v___x_699_);
v___x_701_ = v___x_641_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_fst_639_);
lean_ctor_set(v_reuseFailAlloc_702_, 1, v___x_699_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
v_a_630_ = v___x_701_;
goto v___jp_629_;
}
}
}
}
}
else
{
lean_object* v_a_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_713_; 
lean_dec(v_a_689_);
lean_del_object(v___x_654_);
lean_dec(v_snd_652_);
lean_dec(v_fst_651_);
lean_del_object(v___x_649_);
lean_dec(v_fst_647_);
lean_del_object(v___x_645_);
lean_dec(v_fst_643_);
lean_del_object(v___x_641_);
lean_dec(v_fst_639_);
v_a_706_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_713_ == 0)
{
v___x_708_ = v___x_690_;
v_isShared_709_ = v_isSharedCheck_713_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_a_706_);
lean_dec(v___x_690_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_713_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_711_; 
if (v_isShared_709_ == 0)
{
v___x_711_ = v___x_708_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v_a_706_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
return v___x_711_;
}
}
}
}
else
{
lean_object* v_a_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_721_; 
lean_dec(v___x_687_);
lean_del_object(v___x_654_);
lean_dec(v_snd_652_);
lean_dec(v_fst_651_);
lean_del_object(v___x_649_);
lean_dec(v_fst_647_);
lean_del_object(v___x_645_);
lean_dec(v_fst_643_);
lean_del_object(v___x_641_);
lean_dec(v_fst_639_);
v_a_714_ = lean_ctor_get(v___x_688_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_688_);
if (v_isSharedCheck_721_ == 0)
{
v___x_716_ = v___x_688_;
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_a_714_);
lean_dec(v___x_688_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_719_; 
if (v_isShared_717_ == 0)
{
v___x_719_ = v___x_716_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_a_714_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
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
v___jp_629_:
{
size_t v___x_631_; size_t v___x_632_; 
v___x_631_ = ((size_t)1ULL);
v___x_632_ = lean_usize_add(v_i_624_, v___x_631_);
v_i_624_ = v___x_632_;
v_b_625_ = v_a_630_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___boxed(lean_object* v_as_948_, lean_object* v_sz_949_, lean_object* v_i_950_, lean_object* v_b_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
size_t v_sz_boxed_955_; size_t v_i_boxed_956_; lean_object* v_res_957_; 
v_sz_boxed_955_ = lean_unbox_usize(v_sz_949_);
lean_dec(v_sz_949_);
v_i_boxed_956_ = lean_unbox_usize(v_i_950_);
lean_dec(v_i_950_);
v_res_957_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0(v_as_948_, v_sz_boxed_955_, v_i_boxed_956_, v_b_951_, v___y_952_, v___y_953_);
lean_dec(v___y_953_);
lean_dec_ref(v___y_952_);
lean_dec_ref(v_as_948_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__1(size_t v_sz_958_, size_t v_i_959_, lean_object* v_bs_960_){
_start:
{
uint8_t v___x_961_; 
v___x_961_ = lean_usize_dec_lt(v_i_959_, v_sz_958_);
if (v___x_961_ == 0)
{
lean_object* v___x_962_; 
v___x_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_962_, 0, v_bs_960_);
return v___x_962_;
}
else
{
lean_object* v_v_963_; lean_object* v___x_964_; uint8_t v___x_965_; 
v_v_963_ = lean_array_uget(v_bs_960_, v_i_959_);
v___x_964_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__1));
lean_inc(v_v_963_);
v___x_965_ = l_Lean_Syntax_isOfKind(v_v_963_, v___x_964_);
if (v___x_965_ == 0)
{
lean_object* v___x_966_; 
lean_dec(v_v_963_);
lean_dec_ref(v_bs_960_);
v___x_966_ = lean_box(0);
return v___x_966_;
}
else
{
lean_object* v___x_967_; lean_object* v_bs_x27_968_; size_t v___x_969_; size_t v___x_970_; lean_object* v___x_971_; 
v___x_967_ = lean_unsigned_to_nat(0u);
v_bs_x27_968_ = lean_array_uset(v_bs_960_, v_i_959_, v___x_967_);
v___x_969_ = ((size_t)1ULL);
v___x_970_ = lean_usize_add(v_i_959_, v___x_969_);
v___x_971_ = lean_array_uset(v_bs_x27_968_, v_i_959_, v_v_963_);
v_i_959_ = v___x_970_;
v_bs_960_ = v___x_971_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__1___boxed(lean_object* v_sz_973_, lean_object* v_i_974_, lean_object* v_bs_975_){
_start:
{
size_t v_sz_boxed_976_; size_t v_i_boxed_977_; lean_object* v_res_978_; 
v_sz_boxed_976_ = lean_unbox_usize(v_sz_973_);
lean_dec(v_sz_973_);
v_i_boxed_977_ = lean_unbox_usize(v_i_974_);
lean_dec(v_i_974_);
v_res_978_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__1(v_sz_boxed_976_, v_i_boxed_977_, v_bs_975_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__2(uint8_t v___x_979_, lean_object* v_as_980_, size_t v_i_981_, size_t v_stop_982_, lean_object* v_b_983_){
_start:
{
lean_object* v___y_985_; uint8_t v___x_989_; 
v___x_989_ = lean_usize_dec_eq(v_i_981_, v_stop_982_);
if (v___x_989_ == 0)
{
lean_object* v_fst_990_; uint8_t v___x_991_; 
v_fst_990_ = lean_ctor_get(v_b_983_, 0);
v___x_991_ = lean_unbox(v_fst_990_);
if (v___x_991_ == 0)
{
lean_object* v_snd_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1000_; 
v_snd_992_ = lean_ctor_get(v_b_983_, 1);
v_isSharedCheck_1000_ = !lean_is_exclusive(v_b_983_);
if (v_isSharedCheck_1000_ == 0)
{
lean_object* v_unused_1001_; 
v_unused_1001_ = lean_ctor_get(v_b_983_, 0);
lean_dec(v_unused_1001_);
v___x_994_ = v_b_983_;
v_isShared_995_ = v_isSharedCheck_1000_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_snd_992_);
lean_dec(v_b_983_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1000_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_996_; lean_object* v___x_998_; 
v___x_996_ = lean_box(v___x_979_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 0, v___x_996_);
v___x_998_ = v___x_994_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v___x_996_);
lean_ctor_set(v_reuseFailAlloc_999_, 1, v_snd_992_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
v___y_985_ = v___x_998_;
goto v___jp_984_;
}
}
}
else
{
lean_object* v_snd_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1012_; 
v_snd_1002_ = lean_ctor_get(v_b_983_, 1);
v_isSharedCheck_1012_ = !lean_is_exclusive(v_b_983_);
if (v_isSharedCheck_1012_ == 0)
{
lean_object* v_unused_1013_; 
v_unused_1013_ = lean_ctor_get(v_b_983_, 0);
lean_dec(v_unused_1013_);
v___x_1004_ = v_b_983_;
v_isShared_1005_ = v_isSharedCheck_1012_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_snd_1002_);
lean_dec(v_b_983_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1012_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1010_; 
v___x_1006_ = lean_array_uget_borrowed(v_as_980_, v_i_981_);
lean_inc(v___x_1006_);
v___x_1007_ = lean_array_push(v_snd_1002_, v___x_1006_);
v___x_1008_ = lean_box(v___x_989_);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 1, v___x_1007_);
lean_ctor_set(v___x_1004_, 0, v___x_1008_);
v___x_1010_ = v___x_1004_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v___x_1008_);
lean_ctor_set(v_reuseFailAlloc_1011_, 1, v___x_1007_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
v___y_985_ = v___x_1010_;
goto v___jp_984_;
}
}
}
}
else
{
return v_b_983_;
}
v___jp_984_:
{
size_t v___x_986_; size_t v___x_987_; 
v___x_986_ = ((size_t)1ULL);
v___x_987_ = lean_usize_add(v_i_981_, v___x_986_);
v_i_981_ = v___x_987_;
v_b_983_ = v___y_985_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__2___boxed(lean_object* v___x_1014_, lean_object* v_as_1015_, lean_object* v_i_1016_, lean_object* v_stop_1017_, lean_object* v_b_1018_){
_start:
{
uint8_t v___x_11225__boxed_1019_; size_t v_i_boxed_1020_; size_t v_stop_boxed_1021_; lean_object* v_res_1022_; 
v___x_11225__boxed_1019_ = lean_unbox(v___x_1014_);
v_i_boxed_1020_ = lean_unbox_usize(v_i_1016_);
lean_dec(v_i_1016_);
v_stop_boxed_1021_ = lean_unbox_usize(v_stop_1017_);
lean_dec(v_stop_1017_);
v_res_1022_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__2(v___x_11225__boxed_1019_, v_as_1015_, v_i_boxed_1020_, v_stop_boxed_1021_, v_b_1018_);
lean_dec_ref(v_as_1015_);
return v_res_1022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec(lean_object* v_spec_x3f_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v_elts_1056_; lean_object* v___y_1057_; lean_object* v___y_1058_; lean_object* v___y_1095_; lean_object* v_cfg_1109_; 
v_cfg_1109_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__5));
if (lean_obj_tag(v_spec_x3f_1051_) == 1)
{
lean_object* v_val_1110_; lean_object* v___x_1111_; uint8_t v___x_1112_; 
v_val_1110_ = lean_ctor_get(v_spec_x3f_1051_, 0);
lean_inc_n(v_val_1110_, 2);
lean_dec_ref_known(v_spec_x3f_1051_, 1);
v___x_1111_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__7));
v___x_1112_ = l_Lean_Syntax_isOfKind(v_val_1110_, v___x_1111_);
if (v___x_1112_ == 0)
{
lean_object* v___x_1113_; lean_object* v_a_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1121_; 
lean_dec(v_val_1110_);
v___x_1113_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
v_a_1114_ = lean_ctor_get(v___x_1113_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1116_ = v___x_1113_;
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_a_1114_);
lean_dec(v___x_1113_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1119_; 
if (v_isShared_1117_ == 0)
{
v___x_1119_ = v___x_1116_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_a_1114_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
else
{
lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; uint8_t v___x_1128_; 
v___x_1122_ = lean_unsigned_to_nat(1u);
v___x_1123_ = l_Lean_Syntax_getArg(v_val_1110_, v___x_1122_);
lean_dec(v_val_1110_);
v___x_1124_ = l_Lean_Syntax_getArgs(v___x_1123_);
lean_dec(v___x_1123_);
v___x_1125_ = lean_unsigned_to_nat(0u);
v___x_1126_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__8));
v___x_1127_ = lean_array_get_size(v___x_1124_);
v___x_1128_ = lean_nat_dec_lt(v___x_1125_, v___x_1127_);
if (v___x_1128_ == 0)
{
lean_dec_ref(v___x_1124_);
v___y_1095_ = v___x_1126_;
goto v___jp_1094_;
}
else
{
lean_object* v___x_1129_; lean_object* v___x_1130_; size_t v___x_1131_; size_t v___x_1132_; lean_object* v___x_1133_; lean_object* v_snd_1134_; 
v___x_1129_ = lean_box(v___x_1128_);
v___x_1130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
lean_ctor_set(v___x_1130_, 1, v___x_1126_);
v___x_1131_ = ((size_t)0ULL);
v___x_1132_ = lean_usize_of_nat(v___x_1127_);
v___x_1133_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__2(v___x_1112_, v___x_1124_, v___x_1131_, v___x_1132_, v___x_1130_);
lean_dec_ref(v___x_1124_);
v_snd_1134_ = lean_ctor_get(v___x_1133_, 1);
lean_inc(v_snd_1134_);
lean_dec_ref(v___x_1133_);
v___y_1095_ = v_snd_1134_;
goto v___jp_1094_;
}
}
}
else
{
lean_object* v___x_1135_; 
lean_dec(v_spec_x3f_1051_);
v___x_1135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1135_, 0, v_cfg_1109_);
return v___x_1135_;
}
v___jp_1055_:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; size_t v_sz_1061_; size_t v___x_1062_; lean_object* v___x_1063_; 
v___x_1059_ = l_Array_reverse___redArg(v_elts_1056_);
v___x_1060_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__4));
v_sz_1061_ = lean_array_size(v___x_1059_);
v___x_1062_ = ((size_t)0ULL);
v___x_1063_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0(v___x_1059_, v_sz_1061_, v___x_1062_, v___x_1060_, v___y_1057_, v___y_1058_);
lean_dec_ref(v___x_1059_);
if (lean_obj_tag(v___x_1063_) == 0)
{
lean_object* v_a_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1085_; 
v_a_1064_ = lean_ctor_get(v___x_1063_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v___x_1063_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1066_ = v___x_1063_;
v_isShared_1067_ = v_isSharedCheck_1085_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_a_1064_);
lean_dec(v___x_1063_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1085_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v_snd_1068_; lean_object* v_snd_1069_; lean_object* v_snd_1070_; lean_object* v_fst_1071_; lean_object* v_fst_1072_; lean_object* v_fst_1073_; lean_object* v_fst_1074_; lean_object* v_snd_1075_; lean_object* v___y_1076_; lean_object* v___x_1077_; uint8_t v___x_1078_; uint8_t v___x_1079_; uint8_t v___x_1080_; uint8_t v___x_1081_; lean_object* v___x_1083_; 
v_snd_1068_ = lean_ctor_get(v_a_1064_, 1);
lean_inc(v_snd_1068_);
v_snd_1069_ = lean_ctor_get(v_snd_1068_, 1);
lean_inc(v_snd_1069_);
v_snd_1070_ = lean_ctor_get(v_snd_1069_, 1);
lean_inc(v_snd_1070_);
v_fst_1071_ = lean_ctor_get(v_a_1064_, 0);
lean_inc(v_fst_1071_);
lean_dec(v_a_1064_);
v_fst_1072_ = lean_ctor_get(v_snd_1068_, 0);
lean_inc(v_fst_1072_);
lean_dec(v_snd_1068_);
v_fst_1073_ = lean_ctor_get(v_snd_1069_, 0);
lean_inc(v_fst_1073_);
lean_dec(v_snd_1069_);
v_fst_1074_ = lean_ctor_get(v_snd_1070_, 0);
lean_inc(v_fst_1074_);
v_snd_1075_ = lean_ctor_get(v_snd_1070_, 1);
lean_inc(v_snd_1075_);
lean_dec(v_snd_1070_);
v___y_1076_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__1___boxed), 2, 1);
lean_closure_set(v___y_1076_, 0, v_snd_1075_);
v___x_1077_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_1077_, 0, v___y_1076_);
v___x_1078_ = lean_unbox(v_fst_1071_);
lean_dec(v_fst_1071_);
lean_ctor_set_uint8(v___x_1077_, sizeof(void*)*1, v___x_1078_);
v___x_1079_ = lean_unbox(v_fst_1072_);
lean_dec(v_fst_1072_);
lean_ctor_set_uint8(v___x_1077_, sizeof(void*)*1 + 1, v___x_1079_);
v___x_1080_ = lean_unbox(v_fst_1073_);
lean_dec(v_fst_1073_);
lean_ctor_set_uint8(v___x_1077_, sizeof(void*)*1 + 2, v___x_1080_);
v___x_1081_ = lean_unbox(v_fst_1074_);
lean_dec(v_fst_1074_);
lean_ctor_set_uint8(v___x_1077_, sizeof(void*)*1 + 3, v___x_1081_);
if (v_isShared_1067_ == 0)
{
lean_ctor_set(v___x_1066_, 0, v___x_1077_);
v___x_1083_ = v___x_1066_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v___x_1077_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
else
{
lean_object* v_a_1086_; lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1093_; 
v_a_1086_ = lean_ctor_get(v___x_1063_, 0);
v_isSharedCheck_1093_ = !lean_is_exclusive(v___x_1063_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1088_ = v___x_1063_;
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
else
{
lean_inc(v_a_1086_);
lean_dec(v___x_1063_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
v_resetjp_1087_:
{
lean_object* v___x_1091_; 
if (v_isShared_1089_ == 0)
{
v___x_1091_ = v___x_1088_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_a_1086_);
v___x_1091_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
return v___x_1091_;
}
}
}
}
v___jp_1094_:
{
size_t v_sz_1096_; size_t v___x_1097_; lean_object* v___x_1098_; 
v_sz_1096_ = lean_array_size(v___y_1095_);
v___x_1097_ = ((size_t)0ULL);
v___x_1098_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__1(v_sz_1096_, v___x_1097_, v___y_1095_);
if (lean_obj_tag(v___x_1098_) == 0)
{
lean_object* v___x_1099_; lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
v___x_1099_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v___x_1099_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_a_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
else
{
lean_object* v_val_1108_; 
v_val_1108_ = lean_ctor_get(v___x_1098_, 0);
lean_inc(v_val_1108_);
lean_dec_ref_known(v___x_1098_, 1);
v_elts_1056_ = v_val_1108_;
v___y_1057_ = v_a_1052_;
v___y_1058_ = v_a_1053_;
goto v___jp_1055_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___boxed(lean_object* v_spec_x3f_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_){
_start:
{
lean_object* v_res_1140_; 
v_res_1140_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec(v_spec_x3f_1136_, v_a_1137_, v_a_1138_);
lean_dec(v_a_1138_);
lean_dec_ref(v_a_1137_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(lean_object* v_s_1153_, lean_object* v_replacement_1154_, lean_object* v_a_1155_, lean_object* v_b_1156_){
_start:
{
lean_object* v_it_1158_; lean_object* v_startPos_1159_; lean_object* v_endPos_1160_; lean_object* v_it_1169_; 
switch(lean_obj_tag(v_a_1155_))
{
case 0:
{
lean_object* v_pos_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1187_; 
v_pos_1175_ = lean_ctor_get(v_a_1155_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v_a_1155_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1177_ = v_a_1155_;
v_isShared_1178_ = v_isSharedCheck_1187_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_pos_1175_);
lean_dec(v_a_1155_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1187_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v_startInclusive_1179_; lean_object* v_endExclusive_1180_; lean_object* v___x_1181_; uint8_t v_decide_1182_; 
v_startInclusive_1179_ = lean_ctor_get(v_s_1153_, 1);
v_endExclusive_1180_ = lean_ctor_get(v_s_1153_, 2);
v___x_1181_ = lean_nat_sub(v_endExclusive_1180_, v_startInclusive_1179_);
v_decide_1182_ = lean_nat_dec_eq(v_pos_1175_, v___x_1181_);
lean_dec(v___x_1181_);
if (v_decide_1182_ == 0)
{
lean_object* v___x_1184_; 
if (v_isShared_1178_ == 0)
{
lean_ctor_set_tag(v___x_1177_, 1);
v___x_1184_ = v___x_1177_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_pos_1175_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
v_it_1169_ = v___x_1184_;
goto v___jp_1168_;
}
}
else
{
lean_object* v___x_1186_; 
lean_del_object(v___x_1177_);
lean_dec(v_pos_1175_);
v___x_1186_ = lean_box(3);
v_it_1169_ = v___x_1186_;
goto v___jp_1168_;
}
}
}
case 1:
{
lean_object* v_pos_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1200_; 
v_pos_1188_ = lean_ctor_get(v_a_1155_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v_a_1155_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1190_ = v_a_1155_;
v_isShared_1191_ = v_isSharedCheck_1200_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_pos_1188_);
lean_dec(v_a_1155_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1200_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v_str_1192_; lean_object* v_startInclusive_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1198_; 
v_str_1192_ = lean_ctor_get(v_s_1153_, 0);
v_startInclusive_1193_ = lean_ctor_get(v_s_1153_, 1);
v___x_1194_ = lean_nat_add(v_startInclusive_1193_, v_pos_1188_);
v___x_1195_ = lean_string_utf8_next_fast(v_str_1192_, v___x_1194_);
lean_dec(v___x_1194_);
v___x_1196_ = lean_nat_sub(v___x_1195_, v_startInclusive_1193_);
lean_inc(v___x_1196_);
if (v_isShared_1191_ == 0)
{
lean_ctor_set_tag(v___x_1190_, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1196_);
v___x_1198_ = v___x_1190_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v___x_1196_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
v_it_1158_ = v___x_1198_;
v_startPos_1159_ = v_pos_1188_;
v_endPos_1160_ = v___x_1196_;
goto v___jp_1157_;
}
}
}
case 2:
{
lean_object* v_needle_1201_; lean_object* v_table_1202_; lean_object* v_stackPos_1203_; lean_object* v_needlePos_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1265_; 
v_needle_1201_ = lean_ctor_get(v_a_1155_, 0);
v_table_1202_ = lean_ctor_get(v_a_1155_, 1);
v_stackPos_1203_ = lean_ctor_get(v_a_1155_, 2);
v_needlePos_1204_ = lean_ctor_get(v_a_1155_, 3);
v_isSharedCheck_1265_ = !lean_is_exclusive(v_a_1155_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1206_ = v_a_1155_;
v_isShared_1207_ = v_isSharedCheck_1265_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_needlePos_1204_);
lean_inc(v_stackPos_1203_);
lean_inc(v_table_1202_);
lean_inc(v_needle_1201_);
lean_dec(v_a_1155_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1265_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v_str_1208_; lean_object* v_startInclusive_1209_; lean_object* v_endExclusive_1210_; lean_object* v_str_1211_; lean_object* v_startInclusive_1212_; lean_object* v_endExclusive_1213_; lean_object* v_basePos_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; uint8_t v___x_1218_; 
v_str_1208_ = lean_ctor_get(v_needle_1201_, 0);
v_startInclusive_1209_ = lean_ctor_get(v_needle_1201_, 1);
v_endExclusive_1210_ = lean_ctor_get(v_needle_1201_, 2);
v_str_1211_ = lean_ctor_get(v_s_1153_, 0);
v_startInclusive_1212_ = lean_ctor_get(v_s_1153_, 1);
v_endExclusive_1213_ = lean_ctor_get(v_s_1153_, 2);
v_basePos_1214_ = lean_nat_sub(v_stackPos_1203_, v_needlePos_1204_);
v___x_1215_ = lean_nat_sub(v_endExclusive_1210_, v_startInclusive_1209_);
v___x_1216_ = lean_nat_add(v_basePos_1214_, v___x_1215_);
v___x_1217_ = lean_nat_sub(v_endExclusive_1213_, v_startInclusive_1212_);
v___x_1218_ = lean_nat_dec_le(v___x_1216_, v___x_1217_);
lean_dec(v___x_1216_);
if (v___x_1218_ == 0)
{
lean_object* v___x_1219_; lean_object* v___x_1220_; uint8_t v___x_1221_; 
lean_dec(v___x_1215_);
lean_del_object(v___x_1206_);
lean_dec(v_needlePos_1204_);
lean_dec(v_stackPos_1203_);
lean_dec_ref(v_table_1202_);
lean_dec_ref(v_needle_1201_);
v___x_1219_ = lean_unsigned_to_nat(1u);
v___x_1220_ = lean_nat_add(v_basePos_1214_, v___x_1219_);
v___x_1221_ = lean_nat_dec_le(v___x_1220_, v___x_1217_);
lean_dec(v___x_1220_);
if (v___x_1221_ == 0)
{
lean_dec(v___x_1217_);
lean_dec(v_basePos_1214_);
lean_dec_ref(v_s_1153_);
return v_b_1156_;
}
else
{
lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1222_ = l_String_Slice_pos_x21(v_s_1153_, v_basePos_1214_);
lean_dec(v_basePos_1214_);
v___x_1223_ = lean_box(3);
v_it_1158_ = v___x_1223_;
v_startPos_1159_ = v___x_1222_;
v_endPos_1160_ = v___x_1217_;
goto v___jp_1157_;
}
}
else
{
lean_object* v___x_1224_; uint8_t v_stackByte_1225_; lean_object* v___x_1226_; uint8_t v_patByte_1227_; uint8_t v___x_1228_; 
lean_dec(v___x_1217_);
v___x_1224_ = lean_nat_add(v_startInclusive_1212_, v_stackPos_1203_);
v_stackByte_1225_ = lean_string_get_byte_fast(v_str_1211_, v___x_1224_);
v___x_1226_ = lean_nat_add(v_startInclusive_1209_, v_needlePos_1204_);
v_patByte_1227_ = lean_string_get_byte_fast(v_str_1208_, v___x_1226_);
v___x_1228_ = lean_uint8_dec_eq(v_stackByte_1225_, v_patByte_1227_);
if (v___x_1228_ == 0)
{
lean_object* v___x_1229_; uint8_t v_decide_1230_; 
lean_dec(v___x_1215_);
v___x_1229_ = lean_unsigned_to_nat(0u);
v_decide_1230_ = lean_nat_dec_eq(v_needlePos_1204_, v___x_1229_);
if (v_decide_1230_ == 0)
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v_newNeedlePos_1233_; uint8_t v___x_1234_; 
v___x_1231_ = lean_unsigned_to_nat(1u);
v___x_1232_ = lean_nat_sub(v_needlePos_1204_, v___x_1231_);
lean_dec(v_needlePos_1204_);
v_newNeedlePos_1233_ = lean_array_fget_borrowed(v_table_1202_, v___x_1232_);
lean_dec(v___x_1232_);
v___x_1234_ = lean_nat_dec_eq(v_newNeedlePos_1233_, v___x_1229_);
if (v___x_1234_ == 0)
{
lean_object* v_oldBasePos_1235_; lean_object* v___x_1236_; lean_object* v_newBasePos_1237_; lean_object* v___x_1239_; 
lean_inc(v_newNeedlePos_1233_);
v_oldBasePos_1235_ = l_String_Slice_pos_x21(v_s_1153_, v_basePos_1214_);
lean_dec(v_basePos_1214_);
v___x_1236_ = lean_nat_sub(v_stackPos_1203_, v_newNeedlePos_1233_);
v_newBasePos_1237_ = l_String_Slice_pos_x21(v_s_1153_, v___x_1236_);
lean_dec(v___x_1236_);
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 3, v_newNeedlePos_1233_);
v___x_1239_ = v___x_1206_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_needle_1201_);
lean_ctor_set(v_reuseFailAlloc_1240_, 1, v_table_1202_);
lean_ctor_set(v_reuseFailAlloc_1240_, 2, v_stackPos_1203_);
lean_ctor_set(v_reuseFailAlloc_1240_, 3, v_newNeedlePos_1233_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
v_it_1158_ = v___x_1239_;
v_startPos_1159_ = v_oldBasePos_1235_;
v_endPos_1160_ = v_newBasePos_1237_;
goto v___jp_1157_;
}
}
else
{
lean_object* v_basePos_1241_; lean_object* v_nextStackPos_1242_; lean_object* v___x_1244_; 
v_basePos_1241_ = l_String_Slice_pos_x21(v_s_1153_, v_basePos_1214_);
lean_dec(v_basePos_1214_);
v_nextStackPos_1242_ = l_String_Slice_posGE___redArg(v_s_1153_, v_stackPos_1203_);
lean_inc(v_nextStackPos_1242_);
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 3, v___x_1229_);
lean_ctor_set(v___x_1206_, 2, v_nextStackPos_1242_);
v___x_1244_ = v___x_1206_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_needle_1201_);
lean_ctor_set(v_reuseFailAlloc_1245_, 1, v_table_1202_);
lean_ctor_set(v_reuseFailAlloc_1245_, 2, v_nextStackPos_1242_);
lean_ctor_set(v_reuseFailAlloc_1245_, 3, v___x_1229_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
v_it_1158_ = v___x_1244_;
v_startPos_1159_ = v_basePos_1241_;
v_endPos_1160_ = v_nextStackPos_1242_;
goto v___jp_1157_;
}
}
}
else
{
lean_object* v_basePos_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v_nextStackPos_1249_; lean_object* v___x_1251_; 
lean_dec(v_basePos_1214_);
lean_dec(v_needlePos_1204_);
v_basePos_1246_ = l_String_Slice_pos_x21(v_s_1153_, v_stackPos_1203_);
v___x_1247_ = lean_unsigned_to_nat(1u);
v___x_1248_ = lean_nat_add(v_stackPos_1203_, v___x_1247_);
lean_dec(v_stackPos_1203_);
v_nextStackPos_1249_ = l_String_Slice_posGE___redArg(v_s_1153_, v___x_1248_);
lean_inc(v_nextStackPos_1249_);
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 3, v___x_1229_);
lean_ctor_set(v___x_1206_, 2, v_nextStackPos_1249_);
v___x_1251_ = v___x_1206_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_needle_1201_);
lean_ctor_set(v_reuseFailAlloc_1252_, 1, v_table_1202_);
lean_ctor_set(v_reuseFailAlloc_1252_, 2, v_nextStackPos_1249_);
lean_ctor_set(v_reuseFailAlloc_1252_, 3, v___x_1229_);
v___x_1251_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
v_it_1158_ = v___x_1251_;
v_startPos_1159_ = v_basePos_1246_;
v_endPos_1160_ = v_nextStackPos_1249_;
goto v___jp_1157_;
}
}
}
else
{
lean_object* v___x_1253_; lean_object* v_nextStackPos_1254_; lean_object* v_nextNeedlePos_1255_; uint8_t v_decide_1256_; 
lean_dec(v_basePos_1214_);
v___x_1253_ = lean_unsigned_to_nat(1u);
v_nextStackPos_1254_ = lean_nat_add(v_stackPos_1203_, v___x_1253_);
lean_dec(v_stackPos_1203_);
v_nextNeedlePos_1255_ = lean_nat_add(v_needlePos_1204_, v___x_1253_);
lean_dec(v_needlePos_1204_);
v_decide_1256_ = lean_nat_dec_eq(v_nextNeedlePos_1255_, v___x_1215_);
lean_dec(v___x_1215_);
if (v_decide_1256_ == 0)
{
lean_object* v___x_1258_; 
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 3, v_nextNeedlePos_1255_);
lean_ctor_set(v___x_1206_, 2, v_nextStackPos_1254_);
v___x_1258_ = v___x_1206_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v_needle_1201_);
lean_ctor_set(v_reuseFailAlloc_1260_, 1, v_table_1202_);
lean_ctor_set(v_reuseFailAlloc_1260_, 2, v_nextStackPos_1254_);
lean_ctor_set(v_reuseFailAlloc_1260_, 3, v_nextNeedlePos_1255_);
v___x_1258_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
v_a_1155_ = v___x_1258_;
goto _start;
}
}
else
{
lean_object* v___x_1261_; lean_object* v___x_1263_; 
lean_dec(v_nextNeedlePos_1255_);
v___x_1261_ = lean_unsigned_to_nat(0u);
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 3, v___x_1261_);
lean_ctor_set(v___x_1206_, 2, v_nextStackPos_1254_);
v___x_1263_ = v___x_1206_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_needle_1201_);
lean_ctor_set(v_reuseFailAlloc_1264_, 1, v_table_1202_);
lean_ctor_set(v_reuseFailAlloc_1264_, 2, v_nextStackPos_1254_);
lean_ctor_set(v_reuseFailAlloc_1264_, 3, v___x_1261_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
v_it_1169_ = v___x_1263_;
goto v___jp_1168_;
}
}
}
}
}
}
default: 
{
lean_dec_ref(v_s_1153_);
return v_b_1156_;
}
}
v___jp_1157_:
{
lean_object* v___x_1161_; lean_object* v_str_1162_; lean_object* v_startInclusive_1163_; lean_object* v_endExclusive_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
lean_inc_ref(v_s_1153_);
v___x_1161_ = l_String_Slice_slice_x21(v_s_1153_, v_startPos_1159_, v_endPos_1160_);
lean_dec(v_endPos_1160_);
lean_dec(v_startPos_1159_);
v_str_1162_ = lean_ctor_get(v___x_1161_, 0);
lean_inc_ref(v_str_1162_);
v_startInclusive_1163_ = lean_ctor_get(v___x_1161_, 1);
lean_inc(v_startInclusive_1163_);
v_endExclusive_1164_ = lean_ctor_get(v___x_1161_, 2);
lean_inc(v_endExclusive_1164_);
lean_dec_ref(v___x_1161_);
v___x_1165_ = lean_string_utf8_extract_fast(v_str_1162_, v_startInclusive_1163_, v_endExclusive_1164_);
lean_dec(v_endExclusive_1164_);
lean_dec(v_startInclusive_1163_);
lean_dec_ref(v_str_1162_);
v___x_1166_ = lean_string_append(v_b_1156_, v___x_1165_);
lean_dec_ref(v___x_1165_);
v_a_1155_ = v_it_1158_;
v_b_1156_ = v___x_1166_;
goto _start;
}
v___jp_1168_:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1170_ = lean_unsigned_to_nat(0u);
v___x_1171_ = lean_string_utf8_byte_size(v_replacement_1154_);
v___x_1172_ = lean_string_utf8_extract_fast(v_replacement_1154_, v___x_1170_, v___x_1171_);
v___x_1173_ = lean_string_append(v_b_1156_, v___x_1172_);
lean_dec_ref(v___x_1172_);
v_a_1155_ = v_it_1169_;
v_b_1156_ = v___x_1173_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg___boxed(lean_object* v_s_1266_, lean_object* v_replacement_1267_, lean_object* v_a_1268_, lean_object* v_b_1269_){
_start:
{
lean_object* v_res_1270_; 
v_res_1270_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1266_, v_replacement_1267_, v_a_1268_, v_b_1269_);
lean_dec_ref(v_replacement_1267_);
return v_res_1270_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1276_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__1));
v___x_1277_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1276_);
return v___x_1277_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1278_ = lean_unsigned_to_nat(0u);
v___x_1279_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__2, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__2_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__2);
v___x_1280_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__1));
v___x_1281_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1280_);
lean_ctor_set(v___x_1281_, 1, v___x_1279_);
lean_ctor_set(v___x_1281_, 2, v___x_1278_);
lean_ctor_set(v___x_1281_, 3, v___x_1278_);
return v___x_1281_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg(lean_object* v_s_1282_, lean_object* v_replacement_1283_){
_start:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1284_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9));
v___x_1285_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__3, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__3_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__3);
v___x_1286_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1282_, v_replacement_1283_, v___x_1285_, v___x_1284_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___boxed(lean_object* v_s_1287_, lean_object* v_replacement_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg(v_s_1287_, v_replacement_1288_);
lean_dec_ref(v_replacement_1288_);
return v_res_1289_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1295_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__1));
v___x_1296_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1295_);
return v___x_1296_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1297_ = lean_unsigned_to_nat(0u);
v___x_1298_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__2, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__2_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__2);
v___x_1299_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__1));
v___x_1300_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1299_);
lean_ctor_set(v___x_1300_, 1, v___x_1298_);
lean_ctor_set(v___x_1300_, 2, v___x_1297_);
lean_ctor_set(v___x_1300_, 3, v___x_1297_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg(lean_object* v_s_1301_, lean_object* v_replacement_1302_){
_start:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1303_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9));
v___x_1304_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__3, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__3_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__3);
v___x_1305_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1301_, v_replacement_1302_, v___x_1304_, v___x_1303_);
return v___x_1305_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___boxed(lean_object* v_s_1306_, lean_object* v_replacement_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg(v_s_1306_, v_replacement_1307_);
lean_dec_ref(v_replacement_1307_);
return v_res_1308_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__1));
v___x_1315_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1314_);
return v___x_1315_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1316_ = lean_unsigned_to_nat(0u);
v___x_1317_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__2, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__2_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__2);
v___x_1318_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__1));
v___x_1319_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
lean_ctor_set(v___x_1319_, 1, v___x_1317_);
lean_ctor_set(v___x_1319_, 2, v___x_1316_);
lean_ctor_set(v___x_1319_, 3, v___x_1316_);
return v___x_1319_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg(lean_object* v_s_1320_, lean_object* v_replacement_1321_){
_start:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1322_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9));
v___x_1323_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__3, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__3_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__3);
v___x_1324_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1320_, v_replacement_1321_, v___x_1323_, v___x_1322_);
return v___x_1324_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___boxed(lean_object* v_s_1325_, lean_object* v_replacement_1326_){
_start:
{
lean_object* v_res_1327_; 
v_res_1327_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg(v_s_1325_, v_replacement_1326_);
lean_dec_ref(v_replacement_1326_);
return v_res_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace(lean_object* v_s_1331_){
_start:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1332_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__0));
v___x_1333_ = lean_unsigned_to_nat(0u);
v___x_1334_ = lean_string_utf8_byte_size(v_s_1331_);
v___x_1335_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1335_, 0, v_s_1331_);
lean_ctor_set(v___x_1335_, 1, v___x_1333_);
lean_ctor_set(v___x_1335_, 2, v___x_1334_);
v___x_1336_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg(v___x_1335_, v___x_1332_);
v___x_1337_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__1));
v___x_1338_ = lean_string_utf8_byte_size(v___x_1336_);
v___x_1339_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1336_);
lean_ctor_set(v___x_1339_, 1, v___x_1333_);
lean_ctor_set(v___x_1339_, 2, v___x_1338_);
v___x_1340_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg(v___x_1339_, v___x_1337_);
v___x_1341_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__2));
v___x_1342_ = lean_string_utf8_byte_size(v___x_1340_);
v___x_1343_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1340_);
lean_ctor_set(v___x_1343_, 1, v___x_1333_);
lean_ctor_set(v___x_1343_, 2, v___x_1342_);
v___x_1344_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg(v___x_1343_, v___x_1341_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0(lean_object* v_s_1345_, lean_object* v_pattern_1346_, lean_object* v_replacement_1347_){
_start:
{
lean_object* v___x_1348_; 
v___x_1348_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg(v_s_1345_, v_replacement_1347_);
return v___x_1348_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___boxed(lean_object* v_s_1349_, lean_object* v_pattern_1350_, lean_object* v_replacement_1351_){
_start:
{
lean_object* v_res_1352_; 
v_res_1352_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0(v_s_1349_, v_pattern_1350_, v_replacement_1351_);
lean_dec_ref(v_replacement_1351_);
lean_dec_ref(v_pattern_1350_);
return v_res_1352_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1(lean_object* v_s_1353_, lean_object* v_pattern_1354_, lean_object* v_replacement_1355_){
_start:
{
lean_object* v___x_1356_; 
v___x_1356_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg(v_s_1353_, v_replacement_1355_);
return v___x_1356_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___boxed(lean_object* v_s_1357_, lean_object* v_pattern_1358_, lean_object* v_replacement_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1(v_s_1357_, v_pattern_1358_, v_replacement_1359_);
lean_dec_ref(v_replacement_1359_);
lean_dec_ref(v_pattern_1358_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2(lean_object* v_s_1361_, lean_object* v_pattern_1362_, lean_object* v_replacement_1363_){
_start:
{
lean_object* v___x_1364_; 
v___x_1364_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg(v_s_1361_, v_replacement_1363_);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___boxed(lean_object* v_s_1365_, lean_object* v_pattern_1366_, lean_object* v_replacement_1367_){
_start:
{
lean_object* v_res_1368_; 
v_res_1368_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2(v_s_1365_, v_pattern_1366_, v_replacement_1367_);
lean_dec_ref(v_replacement_1367_);
lean_dec_ref(v_pattern_1366_);
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0(lean_object* v_s_1369_, lean_object* v_replacement_1370_, lean_object* v_inst_1371_, lean_object* v_R_1372_, lean_object* v_a_1373_, lean_object* v_b_1374_, lean_object* v_c_1375_){
_start:
{
lean_object* v___x_1376_; 
v___x_1376_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1369_, v_replacement_1370_, v_a_1373_, v_b_1374_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___boxed(lean_object* v_s_1377_, lean_object* v_replacement_1378_, lean_object* v_inst_1379_, lean_object* v_R_1380_, lean_object* v_a_1381_, lean_object* v_b_1382_, lean_object* v_c_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0(v_s_1377_, v_replacement_1378_, v_inst_1379_, v_R_1380_, v_a_1381_, v_b_1382_, v_c_1383_);
lean_dec_ref(v_replacement_1378_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_removeTrailingWhitespaceMarker(lean_object* v_s_1385_){
_start:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1386_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0));
v___x_1387_ = lean_unsigned_to_nat(0u);
v___x_1388_ = lean_string_utf8_byte_size(v_s_1385_);
v___x_1389_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1389_, 0, v_s_1385_);
lean_ctor_set(v___x_1389_, 1, v___x_1387_);
lean_ctor_set(v___x_1389_, 2, v___x_1388_);
v___x_1390_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg(v___x_1389_, v___x_1386_);
return v___x_1390_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg(){
_start:
{
lean_object* v___x_1394_; 
v___x_1394_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg___closed__0));
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg___boxed(lean_object* v___dummy_1395_){
_start:
{
lean_object* v_res_1396_; 
v_res_1396_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg();
return v_res_1396_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1397_; 
v___x_1397_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg();
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1(lean_object* v_s_1398_){
_start:
{
lean_object* v___x_1399_; 
v___x_1399_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___boxed(lean_object* v_s_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1(v_s_1400_);
lean_dec_ref(v_s_1400_);
return v_res_1401_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1406_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__0));
v___x_1407_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1406_);
return v___x_1407_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
v___x_1408_ = lean_unsigned_to_nat(0u);
v___x_1409_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__1, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__1_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__1);
v___x_1410_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__0));
v___x_1411_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1410_);
lean_ctor_set(v___x_1411_, 1, v___x_1409_);
lean_ctor_set(v___x_1411_, 2, v___x_1408_);
lean_ctor_set(v___x_1411_, 3, v___x_1408_);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg(lean_object* v_s_1412_, lean_object* v_replacement_1413_){
_start:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1414_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9));
v___x_1415_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__2, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__2_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__2);
v___x_1416_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1412_, v_replacement_1413_, v___x_1415_, v___x_1414_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___boxed(lean_object* v_s_1417_, lean_object* v_replacement_1418_){
_start:
{
lean_object* v_res_1419_; 
v_res_1419_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg(v_s_1417_, v_replacement_1418_);
lean_dec_ref(v_replacement_1418_);
return v_res_1419_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___redArg(lean_object* v_s_1420_, lean_object* v___x_1421_, lean_object* v___x_1422_, lean_object* v_a_1423_, lean_object* v_b_1424_){
_start:
{
lean_object* v_it_1426_; lean_object* v_startInclusive_1427_; lean_object* v_endExclusive_1428_; 
if (lean_obj_tag(v_a_1423_) == 0)
{
lean_object* v_currPos_1436_; lean_object* v_searcher_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1465_; 
v_currPos_1436_ = lean_ctor_get(v_a_1423_, 0);
v_searcher_1437_ = lean_ctor_get(v_a_1423_, 1);
v_isSharedCheck_1465_ = !lean_is_exclusive(v_a_1423_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1439_ = v_a_1423_;
v_isShared_1440_ = v_isSharedCheck_1465_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_searcher_1437_);
lean_inc(v_currPos_1436_);
lean_dec(v_a_1423_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1465_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
uint8_t v_decide_1451_; 
v_decide_1451_ = lean_nat_dec_eq(v_searcher_1437_, v___x_1422_);
if (v_decide_1451_ == 0)
{
uint32_t v___x_1452_; uint32_t v___x_1453_; uint8_t v___x_1454_; 
v___x_1452_ = lean_string_utf8_get_fast(v_s_1420_, v_searcher_1437_);
v___x_1453_ = 32;
v___x_1454_ = lean_uint32_dec_eq(v___x_1452_, v___x_1453_);
if (v___x_1454_ == 0)
{
uint32_t v___x_1455_; uint8_t v___x_1456_; 
v___x_1455_ = 9;
v___x_1456_ = lean_uint32_dec_eq(v___x_1452_, v___x_1455_);
if (v___x_1456_ == 0)
{
uint32_t v___x_1457_; uint8_t v___x_1458_; 
v___x_1457_ = 13;
v___x_1458_ = lean_uint32_dec_eq(v___x_1452_, v___x_1457_);
if (v___x_1458_ == 0)
{
uint32_t v___x_1459_; uint8_t v___x_1460_; 
v___x_1459_ = 10;
v___x_1460_ = lean_uint32_dec_eq(v___x_1452_, v___x_1459_);
if (v___x_1460_ == 0)
{
lean_object* v___x_1461_; lean_object* v___x_1462_; 
lean_del_object(v___x_1439_);
v___x_1461_ = lean_string_utf8_next_fast(v_s_1420_, v_searcher_1437_);
lean_dec(v_searcher_1437_);
v___x_1462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1462_, 0, v_currPos_1436_);
lean_ctor_set(v___x_1462_, 1, v___x_1461_);
v_a_1423_ = v___x_1462_;
goto _start;
}
else
{
goto v___jp_1441_;
}
}
else
{
goto v___jp_1441_;
}
}
else
{
goto v___jp_1441_;
}
}
else
{
goto v___jp_1441_;
}
}
else
{
lean_object* v___x_1464_; 
lean_del_object(v___x_1439_);
lean_dec(v_searcher_1437_);
v___x_1464_ = lean_box(1);
lean_inc(v___x_1422_);
v_it_1426_ = v___x_1464_;
v_startInclusive_1427_ = v_currPos_1436_;
v_endExclusive_1428_ = v___x_1422_;
goto v___jp_1425_;
}
v___jp_1441_:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v_slice_1445_; lean_object* v_nextIt_1447_; 
v___x_1442_ = lean_string_utf8_next_fast(v_s_1420_, v_searcher_1437_);
v___x_1443_ = lean_nat_sub(v___x_1442_, v_searcher_1437_);
v___x_1444_ = lean_nat_add(v_searcher_1437_, v___x_1443_);
lean_dec(v___x_1443_);
v_slice_1445_ = l_String_Slice_subslice_x21(v___x_1421_, v_currPos_1436_, v_searcher_1437_);
lean_inc(v___x_1444_);
if (v_isShared_1440_ == 0)
{
lean_ctor_set(v___x_1439_, 1, v___x_1444_);
lean_ctor_set(v___x_1439_, 0, v___x_1444_);
v_nextIt_1447_ = v___x_1439_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v___x_1444_);
lean_ctor_set(v_reuseFailAlloc_1450_, 1, v___x_1444_);
v_nextIt_1447_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
lean_object* v_startInclusive_1448_; lean_object* v_endExclusive_1449_; 
v_startInclusive_1448_ = lean_ctor_get(v_slice_1445_, 0);
lean_inc(v_startInclusive_1448_);
v_endExclusive_1449_ = lean_ctor_get(v_slice_1445_, 1);
lean_inc(v_endExclusive_1449_);
lean_dec_ref(v_slice_1445_);
v_it_1426_ = v_nextIt_1447_;
v_startInclusive_1427_ = v_startInclusive_1448_;
v_endExclusive_1428_ = v_endExclusive_1449_;
goto v___jp_1425_;
}
}
}
}
else
{
lean_dec(v___x_1422_);
lean_dec_ref(v_s_1420_);
return v_b_1424_;
}
v___jp_1425_:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; uint8_t v___x_1431_; 
v___x_1429_ = lean_nat_sub(v_endExclusive_1428_, v_startInclusive_1427_);
v___x_1430_ = lean_unsigned_to_nat(0u);
v___x_1431_ = lean_nat_dec_eq(v___x_1429_, v___x_1430_);
lean_dec(v___x_1429_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1432_; lean_object* v___x_1433_; 
lean_inc_ref(v_s_1420_);
v___x_1432_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1432_, 0, v_s_1420_);
lean_ctor_set(v___x_1432_, 1, v_startInclusive_1427_);
lean_ctor_set(v___x_1432_, 2, v_endExclusive_1428_);
v___x_1433_ = lean_array_push(v_b_1424_, v___x_1432_);
v_a_1423_ = v_it_1426_;
v_b_1424_ = v___x_1433_;
goto _start;
}
else
{
lean_dec(v_endExclusive_1428_);
lean_dec(v_startInclusive_1427_);
v_a_1423_ = v_it_1426_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___redArg___boxed(lean_object* v_s_1466_, lean_object* v___x_1467_, lean_object* v___x_1468_, lean_object* v_a_1469_, lean_object* v_b_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___redArg(v_s_1466_, v___x_1467_, v___x_1468_, v_a_1469_, v_b_1470_);
lean_dec_ref(v___x_1467_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply(uint8_t v_mode_1478_, lean_object* v_s_1479_){
_start:
{
switch(v_mode_1478_)
{
case 0:
{
return v_s_1479_;
}
case 1:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; 
v___x_1480_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__8));
v___x_1481_ = lean_unsigned_to_nat(0u);
v___x_1482_ = lean_string_utf8_byte_size(v_s_1479_);
v___x_1483_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1483_, 0, v_s_1479_);
lean_ctor_set(v___x_1483_, 1, v___x_1481_);
lean_ctor_set(v___x_1483_, 2, v___x_1482_);
v___x_1484_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg(v___x_1483_, v___x_1480_);
return v___x_1484_;
}
default: 
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1485_ = lean_unsigned_to_nat(0u);
v___x_1486_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__0));
v___x_1487_ = lean_string_utf8_byte_size(v_s_1479_);
lean_inc_ref(v_s_1479_);
v___x_1488_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1488_, 0, v_s_1479_);
lean_ctor_set(v___x_1488_, 1, v___x_1485_);
lean_ctor_set(v___x_1488_, 2, v___x_1487_);
v___x_1489_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0);
v___x_1490_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__1));
v___x_1491_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___redArg(v_s_1479_, v___x_1488_, v___x_1487_, v___x_1489_, v___x_1490_);
lean_dec_ref_known(v___x_1488_, 3);
v___x_1492_ = lean_array_to_list(v___x_1491_);
v___x_1493_ = l_String_Slice_intercalate(v___x_1486_, v___x_1492_);
lean_dec(v___x_1492_);
return v___x_1493_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___boxed(lean_object* v_mode_1494_, lean_object* v_s_1495_){
_start:
{
uint8_t v_mode_boxed_1496_; lean_object* v_res_1497_; 
v_mode_boxed_1496_ = lean_unbox(v_mode_1494_);
v_res_1497_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply(v_mode_boxed_1496_, v_s_1495_);
return v_res_1497_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0(lean_object* v_s_1498_, lean_object* v_pattern_1499_, lean_object* v_replacement_1500_){
_start:
{
lean_object* v___x_1501_; 
v___x_1501_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg(v_s_1498_, v_replacement_1500_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___boxed(lean_object* v_s_1502_, lean_object* v_pattern_1503_, lean_object* v_replacement_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0(v_s_1502_, v_pattern_1503_, v_replacement_1504_);
lean_dec_ref(v_replacement_1504_);
lean_dec_ref(v_pattern_1503_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2(lean_object* v_s_1506_, lean_object* v___x_1507_, lean_object* v___x_1508_, lean_object* v_inst_1509_, lean_object* v_R_1510_, lean_object* v_a_1511_, lean_object* v_b_1512_){
_start:
{
lean_object* v___x_1513_; 
v___x_1513_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___redArg(v_s_1506_, v___x_1507_, v___x_1508_, v_a_1511_, v_b_1512_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___boxed(lean_object* v_s_1514_, lean_object* v___x_1515_, lean_object* v___x_1516_, lean_object* v_inst_1517_, lean_object* v_R_1518_, lean_object* v_a_1519_, lean_object* v_b_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2(v_s_1514_, v___x_1515_, v___x_1516_, v_inst_1517_, v_R_1518_, v_a_1519_, v_b_1520_);
lean_dec_ref(v___x_1515_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___redArg(lean_object* v_hi_1522_, lean_object* v_pivot_1523_, lean_object* v_as_1524_, lean_object* v_i_1525_, lean_object* v_k_1526_){
_start:
{
uint8_t v___x_1527_; 
v___x_1527_ = lean_nat_dec_lt(v_k_1526_, v_hi_1522_);
if (v___x_1527_ == 0)
{
lean_object* v___x_1528_; lean_object* v___x_1529_; 
lean_dec(v_k_1526_);
v___x_1528_ = lean_array_fswap(v_as_1524_, v_i_1525_, v_hi_1522_);
v___x_1529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1529_, 0, v_i_1525_);
lean_ctor_set(v___x_1529_, 1, v___x_1528_);
return v___x_1529_;
}
else
{
lean_object* v___x_1530_; uint8_t v___x_1531_; 
v___x_1530_ = lean_array_fget_borrowed(v_as_1524_, v_k_1526_);
v___x_1531_ = lean_string_dec_lt(v___x_1530_, v_pivot_1523_);
if (v___x_1531_ == 0)
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1532_ = lean_unsigned_to_nat(1u);
v___x_1533_ = lean_nat_add(v_k_1526_, v___x_1532_);
lean_dec(v_k_1526_);
v_k_1526_ = v___x_1533_;
goto _start;
}
else
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1535_ = lean_array_fswap(v_as_1524_, v_i_1525_, v_k_1526_);
v___x_1536_ = lean_unsigned_to_nat(1u);
v___x_1537_ = lean_nat_add(v_i_1525_, v___x_1536_);
lean_dec(v_i_1525_);
v___x_1538_ = lean_nat_add(v_k_1526_, v___x_1536_);
lean_dec(v_k_1526_);
v_as_1524_ = v___x_1535_;
v_i_1525_ = v___x_1537_;
v_k_1526_ = v___x_1538_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___redArg___boxed(lean_object* v_hi_1540_, lean_object* v_pivot_1541_, lean_object* v_as_1542_, lean_object* v_i_1543_, lean_object* v_k_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___redArg(v_hi_1540_, v_pivot_1541_, v_as_1542_, v_i_1543_, v_k_1544_);
lean_dec_ref(v_pivot_1541_);
lean_dec(v_hi_1540_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg(lean_object* v_n_1546_, lean_object* v_as_1547_, lean_object* v_lo_1548_, lean_object* v_hi_1549_){
_start:
{
lean_object* v___y_1551_; uint8_t v___x_1561_; 
v___x_1561_ = lean_nat_dec_lt(v_lo_1548_, v_hi_1549_);
if (v___x_1561_ == 0)
{
lean_dec(v_lo_1548_);
return v_as_1547_;
}
else
{
lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v_mid_1564_; lean_object* v___y_1566_; lean_object* v___y_1572_; lean_object* v___x_1577_; lean_object* v___x_1578_; uint8_t v___x_1579_; 
v___x_1562_ = lean_nat_add(v_lo_1548_, v_hi_1549_);
v___x_1563_ = lean_unsigned_to_nat(1u);
v_mid_1564_ = lean_nat_shiftr(v___x_1562_, v___x_1563_);
lean_dec(v___x_1562_);
v___x_1577_ = lean_array_fget_borrowed(v_as_1547_, v_mid_1564_);
v___x_1578_ = lean_array_fget_borrowed(v_as_1547_, v_lo_1548_);
v___x_1579_ = lean_string_dec_lt(v___x_1577_, v___x_1578_);
if (v___x_1579_ == 0)
{
v___y_1572_ = v_as_1547_;
goto v___jp_1571_;
}
else
{
lean_object* v___x_1580_; 
v___x_1580_ = lean_array_fswap(v_as_1547_, v_lo_1548_, v_mid_1564_);
v___y_1572_ = v___x_1580_;
goto v___jp_1571_;
}
v___jp_1565_:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; uint8_t v___x_1569_; 
v___x_1567_ = lean_array_fget_borrowed(v___y_1566_, v_mid_1564_);
v___x_1568_ = lean_array_fget_borrowed(v___y_1566_, v_hi_1549_);
v___x_1569_ = lean_string_dec_lt(v___x_1567_, v___x_1568_);
if (v___x_1569_ == 0)
{
lean_dec(v_mid_1564_);
v___y_1551_ = v___y_1566_;
goto v___jp_1550_;
}
else
{
lean_object* v___x_1570_; 
v___x_1570_ = lean_array_fswap(v___y_1566_, v_mid_1564_, v_hi_1549_);
lean_dec(v_mid_1564_);
v___y_1551_ = v___x_1570_;
goto v___jp_1550_;
}
}
v___jp_1571_:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; uint8_t v___x_1575_; 
v___x_1573_ = lean_array_fget_borrowed(v___y_1572_, v_hi_1549_);
v___x_1574_ = lean_array_fget_borrowed(v___y_1572_, v_lo_1548_);
v___x_1575_ = lean_string_dec_lt(v___x_1573_, v___x_1574_);
if (v___x_1575_ == 0)
{
v___y_1566_ = v___y_1572_;
goto v___jp_1565_;
}
else
{
lean_object* v___x_1576_; 
v___x_1576_ = lean_array_fswap(v___y_1572_, v_lo_1548_, v_hi_1549_);
v___y_1566_ = v___x_1576_;
goto v___jp_1565_;
}
}
}
v___jp_1550_:
{
lean_object* v_pivot_1552_; lean_object* v___x_1553_; lean_object* v_fst_1554_; lean_object* v_snd_1555_; uint8_t v___x_1556_; 
v_pivot_1552_ = lean_array_fget(v___y_1551_, v_hi_1549_);
lean_inc_n(v_lo_1548_, 2);
v___x_1553_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___redArg(v_hi_1549_, v_pivot_1552_, v___y_1551_, v_lo_1548_, v_lo_1548_);
lean_dec(v_pivot_1552_);
v_fst_1554_ = lean_ctor_get(v___x_1553_, 0);
lean_inc(v_fst_1554_);
v_snd_1555_ = lean_ctor_get(v___x_1553_, 1);
lean_inc(v_snd_1555_);
lean_dec_ref(v___x_1553_);
v___x_1556_ = lean_nat_dec_le(v_hi_1549_, v_fst_1554_);
if (v___x_1556_ == 0)
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1557_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg(v_n_1546_, v_snd_1555_, v_lo_1548_, v_fst_1554_);
v___x_1558_ = lean_unsigned_to_nat(1u);
v___x_1559_ = lean_nat_add(v_fst_1554_, v___x_1558_);
lean_dec(v_fst_1554_);
v_as_1547_ = v___x_1557_;
v_lo_1548_ = v___x_1559_;
goto _start;
}
else
{
lean_dec(v_fst_1554_);
lean_dec(v_lo_1548_);
return v_snd_1555_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg___boxed(lean_object* v_n_1581_, lean_object* v_as_1582_, lean_object* v_lo_1583_, lean_object* v_hi_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg(v_n_1581_, v_as_1582_, v_lo_1583_, v_hi_1584_);
lean_dec(v_hi_1584_);
lean_dec(v_n_1581_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply(uint8_t v_mode_1586_, lean_object* v_msgs_1587_){
_start:
{
if (v_mode_1586_ == 0)
{
return v_msgs_1587_;
}
else
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___y_1591_; lean_object* v___y_1592_; lean_object* v___x_1595_; uint8_t v___x_1596_; 
v___x_1588_ = lean_array_mk(v_msgs_1587_);
v___x_1589_ = lean_array_get_size(v___x_1588_);
v___x_1595_ = lean_unsigned_to_nat(0u);
v___x_1596_ = lean_nat_dec_eq(v___x_1589_, v___x_1595_);
if (v___x_1596_ == 0)
{
lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___y_1600_; uint8_t v___x_1602_; 
v___x_1597_ = lean_unsigned_to_nat(1u);
v___x_1598_ = lean_nat_sub(v___x_1589_, v___x_1597_);
v___x_1602_ = lean_nat_dec_le(v___x_1595_, v___x_1598_);
if (v___x_1602_ == 0)
{
lean_inc(v___x_1598_);
v___y_1600_ = v___x_1598_;
goto v___jp_1599_;
}
else
{
v___y_1600_ = v___x_1595_;
goto v___jp_1599_;
}
v___jp_1599_:
{
uint8_t v___x_1601_; 
v___x_1601_ = lean_nat_dec_le(v___y_1600_, v___x_1598_);
if (v___x_1601_ == 0)
{
lean_dec(v___x_1598_);
lean_inc(v___y_1600_);
v___y_1591_ = v___y_1600_;
v___y_1592_ = v___y_1600_;
goto v___jp_1590_;
}
else
{
v___y_1591_ = v___y_1600_;
v___y_1592_ = v___x_1598_;
goto v___jp_1590_;
}
}
}
else
{
lean_object* v___x_1603_; 
v___x_1603_ = lean_array_to_list(v___x_1588_);
return v___x_1603_;
}
v___jp_1590_:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1593_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg(v___x_1589_, v___x_1588_, v___y_1591_, v___y_1592_);
lean_dec(v___y_1592_);
v___x_1594_ = lean_array_to_list(v___x_1593_);
return v___x_1594_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply___boxed(lean_object* v_mode_1604_, lean_object* v_msgs_1605_){
_start:
{
uint8_t v_mode_boxed_1606_; lean_object* v_res_1607_; 
v_mode_boxed_1606_ = lean_unbox(v_mode_1604_);
v_res_1607_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply(v_mode_boxed_1606_, v_msgs_1605_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0(lean_object* v_n_1608_, lean_object* v_as_1609_, lean_object* v_lo_1610_, lean_object* v_hi_1611_, lean_object* v_w_1612_, lean_object* v_hlo_1613_, lean_object* v_hhi_1614_){
_start:
{
lean_object* v___x_1615_; 
v___x_1615_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg(v_n_1608_, v_as_1609_, v_lo_1610_, v_hi_1611_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___boxed(lean_object* v_n_1616_, lean_object* v_as_1617_, lean_object* v_lo_1618_, lean_object* v_hi_1619_, lean_object* v_w_1620_, lean_object* v_hlo_1621_, lean_object* v_hhi_1622_){
_start:
{
lean_object* v_res_1623_; 
v_res_1623_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0(v_n_1616_, v_as_1617_, v_lo_1618_, v_hi_1619_, v_w_1620_, v_hlo_1621_, v_hhi_1622_);
lean_dec(v_hi_1619_);
lean_dec(v_n_1616_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0(lean_object* v_n_1624_, lean_object* v_lo_1625_, lean_object* v_hi_1626_, lean_object* v_hhi_1627_, lean_object* v_pivot_1628_, lean_object* v_as_1629_, lean_object* v_i_1630_, lean_object* v_k_1631_, lean_object* v_ilo_1632_, lean_object* v_ik_1633_, lean_object* v_w_1634_){
_start:
{
lean_object* v___x_1635_; 
v___x_1635_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___redArg(v_hi_1626_, v_pivot_1628_, v_as_1629_, v_i_1630_, v_k_1631_);
return v___x_1635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___boxed(lean_object* v_n_1636_, lean_object* v_lo_1637_, lean_object* v_hi_1638_, lean_object* v_hhi_1639_, lean_object* v_pivot_1640_, lean_object* v_as_1641_, lean_object* v_i_1642_, lean_object* v_k_1643_, lean_object* v_ilo_1644_, lean_object* v_ik_1645_, lean_object* v_w_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0(v_n_1636_, v_lo_1637_, v_hi_1638_, v_hhi_1639_, v_pivot_1640_, v_as_1641_, v_i_1642_, v_k_1643_, v_ilo_1644_, v_ik_1645_, v_w_1646_);
lean_dec_ref(v_pivot_1640_);
lean_dec(v_hi_1638_);
lean_dec(v_lo_1637_);
lean_dec(v_n_1636_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__0(lean_object* v_as_1648_, size_t v_i_1649_, size_t v_stop_1650_, lean_object* v_b_1651_){
_start:
{
uint8_t v___x_1652_; 
v___x_1652_ = lean_usize_dec_eq(v_i_1649_, v_stop_1650_);
if (v___x_1652_ == 0)
{
lean_object* v___x_1653_; lean_object* v_diagnostics_1654_; lean_object* v_msgLog_1655_; lean_object* v___x_1656_; size_t v___x_1657_; size_t v___x_1658_; 
v___x_1653_ = lean_array_uget_borrowed(v_as_1648_, v_i_1649_);
v_diagnostics_1654_ = lean_ctor_get(v___x_1653_, 1);
v_msgLog_1655_ = lean_ctor_get(v_diagnostics_1654_, 0);
lean_inc_ref(v_msgLog_1655_);
v___x_1656_ = l_Lean_MessageLog_append(v_b_1651_, v_msgLog_1655_);
v___x_1657_ = ((size_t)1ULL);
v___x_1658_ = lean_usize_add(v_i_1649_, v___x_1657_);
v_i_1649_ = v___x_1658_;
v_b_1651_ = v___x_1656_;
goto _start;
}
else
{
return v_b_1651_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__0___boxed(lean_object* v_as_1660_, lean_object* v_i_1661_, lean_object* v_stop_1662_, lean_object* v_b_1663_){
_start:
{
size_t v_i_boxed_1664_; size_t v_stop_boxed_1665_; lean_object* v_res_1666_; 
v_i_boxed_1664_ = lean_unbox_usize(v_i_1661_);
lean_dec(v_i_1661_);
v_stop_boxed_1665_ = lean_unbox_usize(v_stop_1662_);
lean_dec(v_stop_1662_);
v_res_1666_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__0(v_as_1660_, v_i_boxed_1664_, v_stop_boxed_1665_, v_b_1663_);
lean_dec_ref(v_as_1660_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__1(lean_object* v_as_1667_, size_t v_i_1668_, size_t v_stop_1669_, lean_object* v_b_1670_){
_start:
{
lean_object* v___y_1672_; uint8_t v___x_1676_; 
v___x_1676_ = lean_usize_dec_eq(v_i_1668_, v_stop_1669_);
if (v___x_1676_ == 0)
{
lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; uint8_t v___x_1683_; 
v___x_1677_ = lean_array_uget_borrowed(v_as_1667_, v_i_1668_);
v___x_1678_ = l_Lean_MessageLog_empty;
lean_inc(v___x_1677_);
v___x_1679_ = l_Lean_Language_SnapshotTask_get___redArg(v___x_1677_);
v___x_1680_ = l_Lean_Language_SnapshotTree_getAll(v___x_1679_);
v___x_1681_ = lean_unsigned_to_nat(0u);
v___x_1682_ = lean_array_get_size(v___x_1680_);
v___x_1683_ = lean_nat_dec_lt(v___x_1681_, v___x_1682_);
if (v___x_1683_ == 0)
{
lean_object* v___x_1684_; 
lean_dec_ref(v___x_1680_);
v___x_1684_ = l_Lean_MessageLog_append(v_b_1670_, v___x_1678_);
v___y_1672_ = v___x_1684_;
goto v___jp_1671_;
}
else
{
size_t v___x_1685_; size_t v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1685_ = ((size_t)0ULL);
v___x_1686_ = lean_usize_of_nat(v___x_1682_);
v___x_1687_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__0(v___x_1680_, v___x_1685_, v___x_1686_, v___x_1678_);
lean_dec_ref(v___x_1680_);
v___x_1688_ = l_Lean_MessageLog_append(v_b_1670_, v___x_1687_);
v___y_1672_ = v___x_1688_;
goto v___jp_1671_;
}
}
else
{
return v_b_1670_;
}
v___jp_1671_:
{
size_t v___x_1673_; size_t v___x_1674_; 
v___x_1673_ = ((size_t)1ULL);
v___x_1674_ = lean_usize_add(v_i_1668_, v___x_1673_);
v_i_1668_ = v___x_1674_;
v_b_1670_ = v___y_1672_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__1___boxed(lean_object* v_as_1689_, lean_object* v_i_1690_, lean_object* v_stop_1691_, lean_object* v_b_1692_){
_start:
{
size_t v_i_boxed_1693_; size_t v_stop_boxed_1694_; lean_object* v_res_1695_; 
v_i_boxed_1693_ = lean_unbox_usize(v_i_1690_);
lean_dec(v_i_1690_);
v_stop_boxed_1694_ = lean_unbox_usize(v_stop_1691_);
lean_dec(v_stop_1691_);
v_res_1695_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__1(v_as_1689_, v_i_boxed_1693_, v_stop_boxed_1694_, v_b_1692_);
lean_dec_ref(v_as_1689_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages(lean_object* v_cmd_1698_, lean_object* v_a_1699_, lean_object* v_a_1700_){
_start:
{
lean_object* v_fileName_1702_; lean_object* v_fileMap_1703_; lean_object* v_currRecDepth_1704_; lean_object* v_cmdPos_1705_; lean_object* v_macroStack_1706_; lean_object* v_quotContext_x3f_1707_; lean_object* v_currMacroScope_1708_; lean_object* v_ref_1709_; lean_object* v_cancelTk_x3f_1710_; uint8_t v_suppressElabErrors_1711_; uint8_t v_checkDeprecated_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; 
v_fileName_1702_ = lean_ctor_get(v_a_1699_, 0);
v_fileMap_1703_ = lean_ctor_get(v_a_1699_, 1);
v_currRecDepth_1704_ = lean_ctor_get(v_a_1699_, 2);
v_cmdPos_1705_ = lean_ctor_get(v_a_1699_, 3);
v_macroStack_1706_ = lean_ctor_get(v_a_1699_, 4);
v_quotContext_x3f_1707_ = lean_ctor_get(v_a_1699_, 5);
v_currMacroScope_1708_ = lean_ctor_get(v_a_1699_, 6);
v_ref_1709_ = lean_ctor_get(v_a_1699_, 7);
v_cancelTk_x3f_1710_ = lean_ctor_get(v_a_1699_, 9);
v_suppressElabErrors_1711_ = lean_ctor_get_uint8(v_a_1699_, sizeof(void*)*10);
v_checkDeprecated_1712_ = lean_ctor_get_uint8(v_a_1699_, sizeof(void*)*10 + 1);
v___x_1713_ = lean_box(0);
lean_inc(v_cancelTk_x3f_1710_);
lean_inc(v_ref_1709_);
lean_inc(v_currMacroScope_1708_);
lean_inc(v_quotContext_x3f_1707_);
lean_inc(v_macroStack_1706_);
lean_inc(v_cmdPos_1705_);
lean_inc(v_currRecDepth_1704_);
lean_inc_ref(v_fileMap_1703_);
lean_inc_ref(v_fileName_1702_);
v___x_1714_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_1714_, 0, v_fileName_1702_);
lean_ctor_set(v___x_1714_, 1, v_fileMap_1703_);
lean_ctor_set(v___x_1714_, 2, v_currRecDepth_1704_);
lean_ctor_set(v___x_1714_, 3, v_cmdPos_1705_);
lean_ctor_set(v___x_1714_, 4, v_macroStack_1706_);
lean_ctor_set(v___x_1714_, 5, v_quotContext_x3f_1707_);
lean_ctor_set(v___x_1714_, 6, v_currMacroScope_1708_);
lean_ctor_set(v___x_1714_, 7, v_ref_1709_);
lean_ctor_set(v___x_1714_, 8, v___x_1713_);
lean_ctor_set(v___x_1714_, 9, v_cancelTk_x3f_1710_);
lean_ctor_set_uint8(v___x_1714_, sizeof(void*)*10, v_suppressElabErrors_1711_);
lean_ctor_set_uint8(v___x_1714_, sizeof(void*)*10 + 1, v_checkDeprecated_1712_);
v___x_1715_ = l_Lean_Elab_Command_elabCommandTopLevel(v_cmd_1698_, v___x_1714_, v_a_1700_);
lean_dec_ref_known(v___x_1714_, 10);
if (lean_obj_tag(v___x_1715_) == 0)
{
lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1759_; 
v_isSharedCheck_1759_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1759_ == 0)
{
lean_object* v_unused_1760_; 
v_unused_1760_ = lean_ctor_get(v___x_1715_, 0);
lean_dec(v_unused_1760_);
v___x_1717_ = v___x_1715_;
v_isShared_1718_ = v_isSharedCheck_1759_;
goto v_resetjp_1716_;
}
else
{
lean_dec(v___x_1715_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1759_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v_messages_1721_; lean_object* v___y_1723_; lean_object* v_snapshotTasks_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; uint8_t v___x_1755_; 
v___x_1719_ = lean_st_ref_get(v_a_1700_);
v___x_1720_ = lean_st_ref_get(v_a_1700_);
v_messages_1721_ = lean_ctor_get(v___x_1719_, 1);
lean_inc_ref(v_messages_1721_);
lean_dec(v___x_1719_);
v_snapshotTasks_1751_ = lean_ctor_get(v___x_1720_, 10);
lean_inc_ref(v_snapshotTasks_1751_);
lean_dec(v___x_1720_);
v___x_1752_ = l_Lean_MessageLog_empty;
v___x_1753_ = lean_unsigned_to_nat(0u);
v___x_1754_ = lean_array_get_size(v_snapshotTasks_1751_);
v___x_1755_ = lean_nat_dec_lt(v___x_1753_, v___x_1754_);
if (v___x_1755_ == 0)
{
lean_dec_ref(v_snapshotTasks_1751_);
v___y_1723_ = v___x_1752_;
goto v___jp_1722_;
}
else
{
size_t v___x_1756_; size_t v___x_1757_; lean_object* v___x_1758_; 
v___x_1756_ = ((size_t)0ULL);
v___x_1757_ = lean_usize_of_nat(v___x_1754_);
v___x_1758_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__1(v_snapshotTasks_1751_, v___x_1756_, v___x_1757_, v___x_1752_);
lean_dec_ref(v_snapshotTasks_1751_);
v___y_1723_ = v___x_1758_;
goto v___jp_1722_;
}
v___jp_1722_:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v_env_1726_; lean_object* v_messages_1727_; lean_object* v_scopes_1728_; lean_object* v_usedQuotCtxts_1729_; lean_object* v_nextMacroScope_1730_; lean_object* v_maxRecDepth_1731_; lean_object* v_ngen_1732_; lean_object* v_auxDeclNGen_1733_; lean_object* v_infoState_1734_; lean_object* v_traceState_1735_; lean_object* v_prevLinterStates_1736_; lean_object* v_codeQualityEntryTasks_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1749_; 
v___x_1724_ = l_Lean_MessageLog_append(v_messages_1721_, v___y_1723_);
v___x_1725_ = lean_st_ref_take(v_a_1700_);
v_env_1726_ = lean_ctor_get(v___x_1725_, 0);
v_messages_1727_ = lean_ctor_get(v___x_1725_, 1);
v_scopes_1728_ = lean_ctor_get(v___x_1725_, 2);
v_usedQuotCtxts_1729_ = lean_ctor_get(v___x_1725_, 3);
v_nextMacroScope_1730_ = lean_ctor_get(v___x_1725_, 4);
v_maxRecDepth_1731_ = lean_ctor_get(v___x_1725_, 5);
v_ngen_1732_ = lean_ctor_get(v___x_1725_, 6);
v_auxDeclNGen_1733_ = lean_ctor_get(v___x_1725_, 7);
v_infoState_1734_ = lean_ctor_get(v___x_1725_, 8);
v_traceState_1735_ = lean_ctor_get(v___x_1725_, 9);
v_prevLinterStates_1736_ = lean_ctor_get(v___x_1725_, 11);
v_codeQualityEntryTasks_1737_ = lean_ctor_get(v___x_1725_, 12);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1725_);
if (v_isSharedCheck_1749_ == 0)
{
lean_object* v_unused_1750_; 
v_unused_1750_ = lean_ctor_get(v___x_1725_, 10);
lean_dec(v_unused_1750_);
v___x_1739_ = v___x_1725_;
v_isShared_1740_ = v_isSharedCheck_1749_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1737_);
lean_inc(v_prevLinterStates_1736_);
lean_inc(v_traceState_1735_);
lean_inc(v_infoState_1734_);
lean_inc(v_auxDeclNGen_1733_);
lean_inc(v_ngen_1732_);
lean_inc(v_maxRecDepth_1731_);
lean_inc(v_nextMacroScope_1730_);
lean_inc(v_usedQuotCtxts_1729_);
lean_inc(v_scopes_1728_);
lean_inc(v_messages_1727_);
lean_inc(v_env_1726_);
lean_dec(v___x_1725_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1749_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1741_; lean_object* v___x_1743_; 
v___x_1741_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages___closed__0));
if (v_isShared_1740_ == 0)
{
lean_ctor_set(v___x_1739_, 10, v___x_1741_);
v___x_1743_ = v___x_1739_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_env_1726_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v_messages_1727_);
lean_ctor_set(v_reuseFailAlloc_1748_, 2, v_scopes_1728_);
lean_ctor_set(v_reuseFailAlloc_1748_, 3, v_usedQuotCtxts_1729_);
lean_ctor_set(v_reuseFailAlloc_1748_, 4, v_nextMacroScope_1730_);
lean_ctor_set(v_reuseFailAlloc_1748_, 5, v_maxRecDepth_1731_);
lean_ctor_set(v_reuseFailAlloc_1748_, 6, v_ngen_1732_);
lean_ctor_set(v_reuseFailAlloc_1748_, 7, v_auxDeclNGen_1733_);
lean_ctor_set(v_reuseFailAlloc_1748_, 8, v_infoState_1734_);
lean_ctor_set(v_reuseFailAlloc_1748_, 9, v_traceState_1735_);
lean_ctor_set(v_reuseFailAlloc_1748_, 10, v___x_1741_);
lean_ctor_set(v_reuseFailAlloc_1748_, 11, v_prevLinterStates_1736_);
lean_ctor_set(v_reuseFailAlloc_1748_, 12, v_codeQualityEntryTasks_1737_);
v___x_1743_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
lean_object* v___x_1744_; lean_object* v___x_1746_; 
v___x_1744_ = lean_st_ref_put(v_a_1700_, v___x_1743_);
if (v_isShared_1718_ == 0)
{
lean_ctor_set(v___x_1717_, 0, v___x_1724_);
v___x_1746_ = v___x_1717_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v___x_1724_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
}
}
}
}
else
{
lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1768_; 
v_a_1761_ = lean_ctor_get(v___x_1715_, 0);
v_isSharedCheck_1768_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1763_ = v___x_1715_;
v_isShared_1764_ = v_isSharedCheck_1768_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_dec(v___x_1715_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1768_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1766_; 
if (v_isShared_1764_ == 0)
{
v___x_1766_ = v___x_1763_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v_a_1761_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages___boxed(lean_object* v_cmd_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages(v_cmd_1769_, v_a_1770_, v_a_1771_);
lean_dec(v_a_1771_);
lean_dec_ref(v_a_1770_);
return v_res_1773_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4(lean_object* v_opts_1774_, lean_object* v_opt_1775_){
_start:
{
lean_object* v_name_1776_; lean_object* v_defValue_1777_; lean_object* v_map_1778_; lean_object* v___x_1779_; 
v_name_1776_ = lean_ctor_get(v_opt_1775_, 0);
v_defValue_1777_ = lean_ctor_get(v_opt_1775_, 1);
v_map_1778_ = lean_ctor_get(v_opts_1774_, 0);
v___x_1779_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1778_, v_name_1776_);
if (lean_obj_tag(v___x_1779_) == 0)
{
uint8_t v___x_1780_; 
v___x_1780_ = lean_unbox(v_defValue_1777_);
return v___x_1780_;
}
else
{
lean_object* v_val_1781_; 
v_val_1781_ = lean_ctor_get(v___x_1779_, 0);
lean_inc(v_val_1781_);
lean_dec_ref_known(v___x_1779_, 1);
if (lean_obj_tag(v_val_1781_) == 1)
{
uint8_t v_v_1782_; 
v_v_1782_ = lean_ctor_get_uint8(v_val_1781_, 0);
lean_dec_ref_known(v_val_1781_, 0);
return v_v_1782_;
}
else
{
uint8_t v___x_1783_; 
lean_dec(v_val_1781_);
v___x_1783_ = lean_unbox(v_defValue_1777_);
return v___x_1783_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4___boxed(lean_object* v_opts_1784_, lean_object* v_opt_1785_){
_start:
{
uint8_t v_res_1786_; lean_object* v_r_1787_; 
v_res_1786_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4(v_opts_1784_, v_opt_1785_);
lean_dec_ref(v_opt_1785_);
lean_dec_ref(v_opts_1784_);
v_r_1787_ = lean_box(v_res_1786_);
return v_r_1787_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg(){
_start:
{
lean_object* v___x_1791_; 
v___x_1791_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg___closed__0));
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg___boxed(lean_object* v___dummy_1792_){
_start:
{
lean_object* v_res_1793_; 
v_res_1793_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg();
return v_res_1793_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1794_; 
v___x_1794_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg();
return v___x_1794_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5(lean_object* v_s_1795_){
_start:
{
lean_object* v___x_1796_; 
v___x_1796_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___boxed(lean_object* v_s_1797_){
_start:
{
lean_object* v_res_1798_; 
v_res_1798_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5(v_s_1797_);
lean_dec_ref(v_s_1797_);
return v_res_1798_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0(void){
_start:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1799_ = lean_box(1);
v___x_1800_ = l_Lean_MessageData_ofFormat(v___x_1799_);
return v___x_1800_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__3(void){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1804_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__2));
v___x_1805_ = l_Lean_MessageData_ofFormat(v___x_1804_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46(lean_object* v_x_1806_, lean_object* v_x_1807_){
_start:
{
if (lean_obj_tag(v_x_1807_) == 0)
{
return v_x_1806_;
}
else
{
lean_object* v_head_1808_; lean_object* v_tail_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1831_; 
v_head_1808_ = lean_ctor_get(v_x_1807_, 0);
v_tail_1809_ = lean_ctor_get(v_x_1807_, 1);
v_isSharedCheck_1831_ = !lean_is_exclusive(v_x_1807_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1811_ = v_x_1807_;
v_isShared_1812_ = v_isSharedCheck_1831_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_tail_1809_);
lean_inc(v_head_1808_);
lean_dec(v_x_1807_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1831_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
lean_object* v_before_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1829_; 
v_before_1813_ = lean_ctor_get(v_head_1808_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v_head_1808_);
if (v_isSharedCheck_1829_ == 0)
{
lean_object* v_unused_1830_; 
v_unused_1830_ = lean_ctor_get(v_head_1808_, 1);
lean_dec(v_unused_1830_);
v___x_1815_ = v_head_1808_;
v_isShared_1816_ = v_isSharedCheck_1829_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_before_1813_);
lean_dec(v_head_1808_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1829_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1817_; lean_object* v___x_1819_; 
v___x_1817_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0);
if (v_isShared_1816_ == 0)
{
lean_ctor_set_tag(v___x_1815_, 7);
lean_ctor_set(v___x_1815_, 1, v___x_1817_);
lean_ctor_set(v___x_1815_, 0, v_x_1806_);
v___x_1819_ = v___x_1815_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v_x_1806_);
lean_ctor_set(v_reuseFailAlloc_1828_, 1, v___x_1817_);
v___x_1819_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
lean_object* v___x_1820_; lean_object* v___x_1822_; 
v___x_1820_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__3);
if (v_isShared_1812_ == 0)
{
lean_ctor_set_tag(v___x_1811_, 7);
lean_ctor_set(v___x_1811_, 1, v___x_1820_);
lean_ctor_set(v___x_1811_, 0, v___x_1819_);
v___x_1822_ = v___x_1811_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v___x_1819_);
lean_ctor_set(v_reuseFailAlloc_1827_, 1, v___x_1820_);
v___x_1822_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1823_ = l_Lean_MessageData_ofSyntax(v_before_1813_);
v___x_1824_ = l_Lean_indentD(v___x_1823_);
v___x_1825_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1822_);
lean_ctor_set(v___x_1825_, 1, v___x_1824_);
v_x_1806_ = v___x_1825_;
v_x_1807_ = v_tail_1809_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__2(void){
_start:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; 
v___x_1835_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__1));
v___x_1836_ = l_Lean_MessageData_ofFormat(v___x_1835_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg(lean_object* v_msgData_1837_, lean_object* v_macroStack_1838_, lean_object* v___y_1839_){
_start:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v_scopes_1843_; lean_object* v___x_1844_; lean_object* v_opts_1845_; lean_object* v___x_1846_; uint8_t v___x_1847_; 
v___x_1841_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1842_ = lean_st_ref_get(v___y_1839_);
v_scopes_1843_ = lean_ctor_get(v___x_1842_, 2);
lean_inc(v_scopes_1843_);
lean_dec(v___x_1842_);
v___x_1844_ = l_List_head_x21___redArg(v___x_1841_, v_scopes_1843_);
lean_dec(v_scopes_1843_);
v_opts_1845_ = lean_ctor_get(v___x_1844_, 1);
lean_inc_ref(v_opts_1845_);
lean_dec(v___x_1844_);
v___x_1846_ = l_Lean_Elab_pp_macroStack;
v___x_1847_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4(v_opts_1845_, v___x_1846_);
lean_dec_ref(v_opts_1845_);
if (v___x_1847_ == 0)
{
lean_object* v___x_1848_; 
lean_dec(v_macroStack_1838_);
v___x_1848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1848_, 0, v_msgData_1837_);
return v___x_1848_;
}
else
{
if (lean_obj_tag(v_macroStack_1838_) == 0)
{
lean_object* v___x_1849_; 
v___x_1849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1849_, 0, v_msgData_1837_);
return v___x_1849_;
}
else
{
lean_object* v_head_1850_; lean_object* v_after_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1866_; 
v_head_1850_ = lean_ctor_get(v_macroStack_1838_, 0);
lean_inc(v_head_1850_);
v_after_1851_ = lean_ctor_get(v_head_1850_, 1);
v_isSharedCheck_1866_ = !lean_is_exclusive(v_head_1850_);
if (v_isSharedCheck_1866_ == 0)
{
lean_object* v_unused_1867_; 
v_unused_1867_ = lean_ctor_get(v_head_1850_, 0);
lean_dec(v_unused_1867_);
v___x_1853_ = v_head_1850_;
v_isShared_1854_ = v_isSharedCheck_1866_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_after_1851_);
lean_dec(v_head_1850_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1866_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1855_; lean_object* v___x_1857_; 
v___x_1855_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0);
if (v_isShared_1854_ == 0)
{
lean_ctor_set_tag(v___x_1853_, 7);
lean_ctor_set(v___x_1853_, 1, v___x_1855_);
lean_ctor_set(v___x_1853_, 0, v_msgData_1837_);
v___x_1857_ = v___x_1853_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_msgData_1837_);
lean_ctor_set(v_reuseFailAlloc_1865_, 1, v___x_1855_);
v___x_1857_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v_msgData_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1858_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__2);
v___x_1859_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1857_);
lean_ctor_set(v___x_1859_, 1, v___x_1858_);
v___x_1860_ = l_Lean_MessageData_ofSyntax(v_after_1851_);
v___x_1861_ = l_Lean_indentD(v___x_1860_);
v_msgData_1862_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1862_, 0, v___x_1859_);
lean_ctor_set(v_msgData_1862_, 1, v___x_1861_);
v___x_1863_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46(v_msgData_1862_, v_macroStack_1838_);
v___x_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1863_);
return v___x_1864_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___boxed(lean_object* v_msgData_1868_, lean_object* v_macroStack_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_){
_start:
{
lean_object* v_res_1872_; 
v_res_1872_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg(v_msgData_1868_, v_macroStack_1869_, v___y_1870_);
lean_dec(v___y_1870_);
return v_res_1872_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1873_; 
v___x_1873_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1873_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1874_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__0);
v___x_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1874_);
return v___x_1875_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1876_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1);
v___x_1877_ = lean_unsigned_to_nat(0u);
v___x_1878_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1878_, 0, v___x_1877_);
lean_ctor_set(v___x_1878_, 1, v___x_1877_);
lean_ctor_set(v___x_1878_, 2, v___x_1877_);
lean_ctor_set(v___x_1878_, 3, v___x_1877_);
lean_ctor_set(v___x_1878_, 4, v___x_1876_);
lean_ctor_set(v___x_1878_, 5, v___x_1876_);
lean_ctor_set(v___x_1878_, 6, v___x_1876_);
lean_ctor_set(v___x_1878_, 7, v___x_1876_);
lean_ctor_set(v___x_1878_, 8, v___x_1876_);
lean_ctor_set(v___x_1878_, 9, v___x_1876_);
lean_ctor_set(v___x_1878_, 10, v___x_1876_);
return v___x_1878_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1879_ = lean_unsigned_to_nat(32u);
v___x_1880_ = lean_mk_empty_array_with_capacity(v___x_1879_);
v___x_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1881_, 0, v___x_1880_);
return v___x_1881_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__4(void){
_start:
{
size_t v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1882_ = ((size_t)5ULL);
v___x_1883_ = lean_unsigned_to_nat(0u);
v___x_1884_ = lean_unsigned_to_nat(32u);
v___x_1885_ = lean_mk_empty_array_with_capacity(v___x_1884_);
v___x_1886_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__3);
v___x_1887_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1887_, 0, v___x_1886_);
lean_ctor_set(v___x_1887_, 1, v___x_1885_);
lean_ctor_set(v___x_1887_, 2, v___x_1883_);
lean_ctor_set(v___x_1887_, 3, v___x_1883_);
lean_ctor_set_usize(v___x_1887_, 4, v___x_1882_);
return v___x_1887_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1888_ = lean_box(1);
v___x_1889_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__4);
v___x_1890_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1);
v___x_1891_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1891_, 0, v___x_1890_);
lean_ctor_set(v___x_1891_, 1, v___x_1889_);
lean_ctor_set(v___x_1891_, 2, v___x_1888_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg(lean_object* v_msgData_1892_, lean_object* v___y_1893_){
_start:
{
lean_object* v___x_1895_; lean_object* v_env_1896_; uint8_t v___x_1897_; lean_object* v_env_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v_scopes_1901_; lean_object* v___x_1902_; lean_object* v_opts_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1895_ = lean_st_ref_get(v___y_1893_);
v_env_1896_ = lean_ctor_get(v___x_1895_, 0);
lean_inc_ref(v_env_1896_);
lean_dec(v___x_1895_);
v___x_1897_ = 0;
v_env_1898_ = l_Lean_Environment_setRecordingDeps(v_env_1896_, v___x_1897_);
v___x_1899_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1900_ = lean_st_ref_get(v___y_1893_);
v_scopes_1901_ = lean_ctor_get(v___x_1900_, 2);
lean_inc(v_scopes_1901_);
lean_dec(v___x_1900_);
v___x_1902_ = l_List_head_x21___redArg(v___x_1899_, v_scopes_1901_);
lean_dec(v_scopes_1901_);
v_opts_1903_ = lean_ctor_get(v___x_1902_, 1);
lean_inc_ref(v_opts_1903_);
lean_dec(v___x_1902_);
v___x_1904_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__2);
v___x_1905_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__5);
v___x_1906_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1906_, 0, v_env_1898_);
lean_ctor_set(v___x_1906_, 1, v___x_1904_);
lean_ctor_set(v___x_1906_, 2, v___x_1905_);
lean_ctor_set(v___x_1906_, 3, v_opts_1903_);
v___x_1907_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1907_, 0, v___x_1906_);
lean_ctor_set(v___x_1907_, 1, v_msgData_1892_);
v___x_1908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1908_, 0, v___x_1907_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___boxed(lean_object* v_msgData_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg(v_msgData_1909_, v___y_1910_);
lean_dec(v___y_1910_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___redArg(lean_object* v_msg_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_){
_start:
{
lean_object* v___x_1917_; 
v___x_1917_ = l_Lean_Elab_Command_getRef___redArg(v___y_1914_);
if (lean_obj_tag(v___x_1917_) == 0)
{
lean_object* v_a_1918_; lean_object* v_macroStack_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v_a_1922_; lean_object* v___x_1923_; lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1932_; 
v_a_1918_ = lean_ctor_get(v___x_1917_, 0);
lean_inc(v_a_1918_);
lean_dec_ref_known(v___x_1917_, 1);
v_macroStack_1919_ = lean_ctor_get(v___y_1914_, 4);
v___x_1920_ = l_Lean_Elab_getBetterRef(v_a_1918_, v_macroStack_1919_);
lean_dec(v_a_1918_);
v___x_1921_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg(v_msg_1913_, v___y_1915_);
v_a_1922_ = lean_ctor_get(v___x_1921_, 0);
lean_inc(v_a_1922_);
lean_dec_ref(v___x_1921_);
lean_inc(v_macroStack_1919_);
v___x_1923_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg(v_a_1922_, v_macroStack_1919_, v___y_1915_);
v_a_1924_ = lean_ctor_get(v___x_1923_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v___x_1923_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1926_ = v___x_1923_;
v_isShared_1927_ = v_isSharedCheck_1932_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1923_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1932_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1928_; lean_object* v___x_1930_; 
v___x_1928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1928_, 0, v___x_1920_);
lean_ctor_set(v___x_1928_, 1, v_a_1924_);
if (v_isShared_1927_ == 0)
{
lean_ctor_set_tag(v___x_1926_, 1);
lean_ctor_set(v___x_1926_, 0, v___x_1928_);
v___x_1930_ = v___x_1926_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v___x_1928_);
v___x_1930_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
return v___x_1930_;
}
}
}
else
{
lean_object* v_a_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1940_; 
lean_dec_ref(v_msg_1913_);
v_a_1933_ = lean_ctor_get(v___x_1917_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1935_ = v___x_1917_;
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_a_1933_);
lean_dec(v___x_1917_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1938_; 
if (v_isShared_1936_ == 0)
{
v___x_1938_ = v___x_1935_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_a_1933_);
v___x_1938_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
return v___x_1938_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___redArg___boxed(lean_object* v_msg_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___redArg(v_msg_1941_, v___y_1942_, v___y_1943_);
lean_dec(v___y_1943_);
lean_dec_ref(v___y_1942_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___redArg(lean_object* v_ref_1946_, lean_object* v_msg_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_){
_start:
{
lean_object* v___x_1951_; 
v___x_1951_ = l_Lean_Elab_Command_getRef___redArg(v___y_1948_);
if (lean_obj_tag(v___x_1951_) == 0)
{
lean_object* v_a_1952_; lean_object* v_fileName_1953_; lean_object* v_fileMap_1954_; lean_object* v_currRecDepth_1955_; lean_object* v_cmdPos_1956_; lean_object* v_macroStack_1957_; lean_object* v_quotContext_x3f_1958_; lean_object* v_currMacroScope_1959_; lean_object* v_snap_x3f_1960_; lean_object* v_cancelTk_x3f_1961_; uint8_t v_suppressElabErrors_1962_; uint8_t v_checkDeprecated_1963_; lean_object* v_ref_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; 
v_a_1952_ = lean_ctor_get(v___x_1951_, 0);
lean_inc(v_a_1952_);
lean_dec_ref_known(v___x_1951_, 1);
v_fileName_1953_ = lean_ctor_get(v___y_1948_, 0);
v_fileMap_1954_ = lean_ctor_get(v___y_1948_, 1);
v_currRecDepth_1955_ = lean_ctor_get(v___y_1948_, 2);
v_cmdPos_1956_ = lean_ctor_get(v___y_1948_, 3);
v_macroStack_1957_ = lean_ctor_get(v___y_1948_, 4);
v_quotContext_x3f_1958_ = lean_ctor_get(v___y_1948_, 5);
v_currMacroScope_1959_ = lean_ctor_get(v___y_1948_, 6);
v_snap_x3f_1960_ = lean_ctor_get(v___y_1948_, 8);
v_cancelTk_x3f_1961_ = lean_ctor_get(v___y_1948_, 9);
v_suppressElabErrors_1962_ = lean_ctor_get_uint8(v___y_1948_, sizeof(void*)*10);
v_checkDeprecated_1963_ = lean_ctor_get_uint8(v___y_1948_, sizeof(void*)*10 + 1);
v_ref_1964_ = l_Lean_replaceRef(v_ref_1946_, v_a_1952_);
lean_dec(v_a_1952_);
lean_inc(v_cancelTk_x3f_1961_);
lean_inc(v_snap_x3f_1960_);
lean_inc(v_currMacroScope_1959_);
lean_inc(v_quotContext_x3f_1958_);
lean_inc(v_macroStack_1957_);
lean_inc(v_cmdPos_1956_);
lean_inc(v_currRecDepth_1955_);
lean_inc_ref(v_fileMap_1954_);
lean_inc_ref(v_fileName_1953_);
v___x_1965_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_1965_, 0, v_fileName_1953_);
lean_ctor_set(v___x_1965_, 1, v_fileMap_1954_);
lean_ctor_set(v___x_1965_, 2, v_currRecDepth_1955_);
lean_ctor_set(v___x_1965_, 3, v_cmdPos_1956_);
lean_ctor_set(v___x_1965_, 4, v_macroStack_1957_);
lean_ctor_set(v___x_1965_, 5, v_quotContext_x3f_1958_);
lean_ctor_set(v___x_1965_, 6, v_currMacroScope_1959_);
lean_ctor_set(v___x_1965_, 7, v_ref_1964_);
lean_ctor_set(v___x_1965_, 8, v_snap_x3f_1960_);
lean_ctor_set(v___x_1965_, 9, v_cancelTk_x3f_1961_);
lean_ctor_set_uint8(v___x_1965_, sizeof(void*)*10, v_suppressElabErrors_1962_);
lean_ctor_set_uint8(v___x_1965_, sizeof(void*)*10 + 1, v_checkDeprecated_1963_);
v___x_1966_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___redArg(v_msg_1947_, v___x_1965_, v___y_1949_);
lean_dec_ref_known(v___x_1965_, 10);
return v___x_1966_;
}
else
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
lean_dec_ref(v_msg_1947_);
v_a_1967_ = lean_ctor_get(v___x_1951_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1951_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v___x_1951_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1951_);
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
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___redArg___boxed(lean_object* v_ref_1975_, lean_object* v_msg_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___redArg(v_ref_1975_, v_msg_1976_, v___y_1977_, v___y_1978_);
lean_dec(v___y_1978_);
lean_dec_ref(v___y_1977_);
lean_dec(v_ref_1975_);
return v_res_1980_;
}
}
static lean_object* _init_l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__1(void){
_start:
{
lean_object* v___x_1982_; lean_object* v___x_1983_; 
v___x_1982_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__0));
v___x_1983_ = l_Lean_stringToMessageData(v___x_1982_);
return v___x_1983_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10(lean_object* v_stx_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_){
_start:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; 
v___x_1997_ = lean_unsigned_to_nat(1u);
v___x_1998_ = l_Lean_Syntax_getArg(v_stx_1987_, v___x_1997_);
if (lean_obj_tag(v___x_1998_) == 1)
{
lean_object* v_kind_1999_; 
v_kind_1999_ = lean_ctor_get(v___x_1998_, 1);
lean_inc(v_kind_1999_);
if (lean_obj_tag(v_kind_1999_) == 1)
{
lean_object* v_pre_2000_; 
v_pre_2000_ = lean_ctor_get(v_kind_1999_, 0);
lean_inc(v_pre_2000_);
if (lean_obj_tag(v_pre_2000_) == 1)
{
lean_object* v_pre_2001_; 
v_pre_2001_ = lean_ctor_get(v_pre_2000_, 0);
lean_inc(v_pre_2001_);
if (lean_obj_tag(v_pre_2001_) == 1)
{
lean_object* v_pre_2002_; 
v_pre_2002_ = lean_ctor_get(v_pre_2001_, 0);
lean_inc(v_pre_2002_);
if (lean_obj_tag(v_pre_2002_) == 1)
{
lean_object* v_pre_2003_; 
v_pre_2003_ = lean_ctor_get(v_pre_2002_, 0);
if (lean_obj_tag(v_pre_2003_) == 0)
{
lean_object* v_args_2004_; lean_object* v_str_2005_; lean_object* v_str_2006_; lean_object* v_str_2007_; lean_object* v_str_2008_; lean_object* v___x_2009_; uint8_t v___x_2010_; 
v_args_2004_ = lean_ctor_get(v___x_1998_, 2);
lean_inc_ref(v_args_2004_);
lean_dec_ref_known(v___x_1998_, 3);
v_str_2005_ = lean_ctor_get(v_kind_1999_, 1);
lean_inc_ref(v_str_2005_);
lean_dec_ref_known(v_kind_1999_, 2);
v_str_2006_ = lean_ctor_get(v_pre_2000_, 1);
lean_inc_ref(v_str_2006_);
lean_dec_ref_known(v_pre_2000_, 2);
v_str_2007_ = lean_ctor_get(v_pre_2001_, 1);
lean_inc_ref(v_str_2007_);
lean_dec_ref_known(v_pre_2001_, 2);
v_str_2008_ = lean_ctor_get(v_pre_2002_, 1);
lean_inc_ref(v_str_2008_);
lean_dec_ref_known(v_pre_2002_, 2);
v___x_2009_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_));
v___x_2010_ = lean_string_dec_eq(v_str_2008_, v___x_2009_);
lean_dec_ref(v_str_2008_);
if (v___x_2010_ == 0)
{
lean_dec_ref(v_str_2007_);
lean_dec_ref(v_str_2006_);
lean_dec_ref(v_str_2005_);
lean_dec_ref(v_args_2004_);
goto v___jp_1991_;
}
else
{
lean_object* v___x_2011_; uint8_t v___x_2012_; 
v___x_2011_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__2));
v___x_2012_ = lean_string_dec_eq(v_str_2007_, v___x_2011_);
lean_dec_ref(v_str_2007_);
if (v___x_2012_ == 0)
{
lean_dec_ref(v_str_2006_);
lean_dec_ref(v_str_2005_);
lean_dec_ref(v_args_2004_);
goto v___jp_1991_;
}
else
{
lean_object* v___x_2013_; uint8_t v___x_2014_; 
v___x_2013_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__3));
v___x_2014_ = lean_string_dec_eq(v_str_2006_, v___x_2013_);
lean_dec_ref(v_str_2006_);
if (v___x_2014_ == 0)
{
lean_dec_ref(v_str_2005_);
lean_dec_ref(v_args_2004_);
goto v___jp_1991_;
}
else
{
lean_object* v___x_2015_; uint8_t v___x_2016_; 
v___x_2015_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__4));
v___x_2016_ = lean_string_dec_eq(v_str_2005_, v___x_2015_);
lean_dec_ref(v_str_2005_);
if (v___x_2016_ == 0)
{
lean_dec_ref(v_args_2004_);
goto v___jp_1991_;
}
else
{
lean_object* v___x_2017_; lean_object* v___x_2018_; uint8_t v___x_2019_; 
v___x_2017_ = lean_array_get_size(v_args_2004_);
v___x_2018_ = lean_unsigned_to_nat(2u);
v___x_2019_ = lean_nat_dec_eq(v___x_2017_, v___x_2018_);
if (v___x_2019_ == 0)
{
lean_dec_ref(v_args_2004_);
goto v___jp_1991_;
}
else
{
lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2020_ = lean_unsigned_to_nat(0u);
v___x_2021_ = lean_array_fget(v_args_2004_, v___x_2020_);
lean_dec_ref(v_args_2004_);
if (lean_obj_tag(v___x_2021_) == 2)
{
lean_object* v_val_2022_; lean_object* v___x_2023_; 
lean_dec(v_stx_1987_);
v_val_2022_ = lean_ctor_get(v___x_2021_, 1);
lean_inc_ref(v_val_2022_);
lean_dec_ref_known(v___x_2021_, 2);
v___x_2023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2023_, 0, v_val_2022_);
return v___x_2023_;
}
else
{
lean_dec(v___x_2021_);
goto v___jp_1991_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_2002_, 2);
lean_dec_ref_known(v_pre_2001_, 2);
lean_dec_ref_known(v_pre_2000_, 2);
lean_dec_ref_known(v_kind_1999_, 2);
lean_dec_ref_known(v___x_1998_, 3);
goto v___jp_1991_;
}
}
else
{
lean_dec_ref_known(v_pre_2001_, 2);
lean_dec(v_pre_2002_);
lean_dec_ref_known(v_pre_2000_, 2);
lean_dec_ref_known(v_kind_1999_, 2);
lean_dec_ref_known(v___x_1998_, 3);
goto v___jp_1991_;
}
}
else
{
lean_dec(v_pre_2001_);
lean_dec_ref_known(v_pre_2000_, 2);
lean_dec_ref_known(v_kind_1999_, 2);
lean_dec_ref_known(v___x_1998_, 3);
goto v___jp_1991_;
}
}
else
{
lean_dec_ref_known(v_kind_1999_, 2);
lean_dec(v_pre_2000_);
lean_dec_ref_known(v___x_1998_, 3);
goto v___jp_1991_;
}
}
else
{
lean_dec(v_kind_1999_);
lean_dec_ref_known(v___x_1998_, 3);
goto v___jp_1991_;
}
}
else
{
lean_dec(v___x_1998_);
goto v___jp_1991_;
}
v___jp_1991_:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1992_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__1, &l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__1);
lean_inc(v_stx_1987_);
v___x_1993_ = l_Lean_MessageData_ofSyntax(v_stx_1987_);
v___x_1994_ = l_Lean_indentD(v___x_1993_);
v___x_1995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1995_, 0, v___x_1992_);
lean_ctor_set(v___x_1995_, 1, v___x_1994_);
v___x_1996_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___redArg(v_stx_1987_, v___x_1995_, v___y_1988_, v___y_1989_);
lean_dec(v_stx_1987_);
return v___x_1996_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___boxed(lean_object* v_stx_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10(v_stx_2024_, v___y_2025_, v___y_2026_);
lean_dec(v___y_2026_);
lean_dec_ref(v___y_2025_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8_spec__19(lean_object* v_as_2029_, size_t v_sz_2030_, size_t v_i_2031_, lean_object* v_b_2032_){
_start:
{
lean_object* v_a_2034_; uint8_t v___x_2038_; 
v___x_2038_ = lean_usize_dec_lt(v_i_2031_, v_sz_2030_);
if (v___x_2038_ == 0)
{
return v_b_2032_;
}
else
{
lean_object* v_a_2039_; lean_object* v_fst_2040_; lean_object* v_snd_2041_; lean_object* v_out_2042_; uint8_t v___x_2043_; 
v_a_2039_ = lean_array_uget_borrowed(v_as_2029_, v_i_2031_);
v_fst_2040_ = lean_ctor_get(v_a_2039_, 0);
v_snd_2041_ = lean_ctor_get(v_a_2039_, 1);
v_out_2042_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9));
v___x_2043_ = lean_string_dec_eq(v_snd_2041_, v_out_2042_);
if (v___x_2043_ == 0)
{
uint8_t v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___x_2044_ = lean_unbox(v_fst_2040_);
v___x_2045_ = l_Lean_Diff_Action_linePrefix(v___x_2044_);
v___x_2046_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__8));
v___x_2047_ = lean_string_append(v___x_2045_, v___x_2046_);
v___x_2048_ = lean_string_append(v___x_2047_, v_snd_2041_);
v___x_2049_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0));
v___x_2050_ = lean_string_append(v___x_2048_, v___x_2049_);
v___x_2051_ = lean_string_append(v_b_2032_, v___x_2050_);
lean_dec_ref(v___x_2050_);
v_a_2034_ = v___x_2051_;
goto v___jp_2033_;
}
else
{
uint8_t v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; 
v___x_2052_ = lean_unbox(v_fst_2040_);
v___x_2053_ = l_Lean_Diff_Action_linePrefix(v___x_2052_);
v___x_2054_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0));
v___x_2055_ = lean_string_append(v___x_2053_, v___x_2054_);
v___x_2056_ = lean_string_append(v_b_2032_, v___x_2055_);
lean_dec_ref(v___x_2055_);
v_a_2034_ = v___x_2056_;
goto v___jp_2033_;
}
}
v___jp_2033_:
{
size_t v___x_2035_; size_t v___x_2036_; 
v___x_2035_ = ((size_t)1ULL);
v___x_2036_ = lean_usize_add(v_i_2031_, v___x_2035_);
v_i_2031_ = v___x_2036_;
v_b_2032_ = v_a_2034_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8_spec__19___boxed(lean_object* v_as_2057_, lean_object* v_sz_2058_, lean_object* v_i_2059_, lean_object* v_b_2060_){
_start:
{
size_t v_sz_boxed_2061_; size_t v_i_boxed_2062_; lean_object* v_res_2063_; 
v_sz_boxed_2061_ = lean_unbox_usize(v_sz_2058_);
lean_dec(v_sz_2058_);
v_i_boxed_2062_ = lean_unbox_usize(v_i_2059_);
lean_dec(v_i_2059_);
v_res_2063_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8_spec__19(v_as_2057_, v_sz_boxed_2061_, v_i_boxed_2062_, v_b_2060_);
lean_dec_ref(v_as_2057_);
return v_res_2063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8(lean_object* v_lines_2064_){
_start:
{
lean_object* v_out_2065_; size_t v_sz_2066_; size_t v___x_2067_; lean_object* v___x_2068_; 
v_out_2065_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9));
v_sz_2066_ = lean_array_size(v_lines_2064_);
v___x_2067_ = ((size_t)0ULL);
v___x_2068_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8_spec__19(v_lines_2064_, v_sz_2066_, v___x_2067_, v_out_2065_);
return v___x_2068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8___boxed(lean_object* v_lines_2069_){
_start:
{
lean_object* v_res_2070_; 
v_res_2070_ = l_Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8(v_lines_2069_);
lean_dec_ref(v_lines_2069_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___redArg(lean_object* v_filterFn_2071_, lean_object* v_as_x27_2072_, lean_object* v_b_2073_){
_start:
{
if (lean_obj_tag(v_as_x27_2072_) == 0)
{
lean_object* v___x_2075_; 
lean_dec_ref(v_filterFn_2071_);
v___x_2075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2075_, 0, v_b_2073_);
return v___x_2075_;
}
else
{
lean_object* v_head_2076_; lean_object* v_tail_2077_; lean_object* v_fst_2078_; lean_object* v_snd_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2097_; 
v_head_2076_ = lean_ctor_get(v_as_x27_2072_, 0);
v_tail_2077_ = lean_ctor_get(v_as_x27_2072_, 1);
v_fst_2078_ = lean_ctor_get(v_b_2073_, 0);
v_snd_2079_ = lean_ctor_get(v_b_2073_, 1);
v_isSharedCheck_2097_ = !lean_is_exclusive(v_b_2073_);
if (v_isSharedCheck_2097_ == 0)
{
v___x_2081_ = v_b_2073_;
v_isShared_2082_ = v_isSharedCheck_2097_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_snd_2079_);
lean_inc(v_fst_2078_);
lean_dec(v_b_2073_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2097_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
uint8_t v_isSilent_2088_; 
v_isSilent_2088_ = lean_ctor_get_uint8(v_head_2076_, sizeof(void*)*5 + 2);
if (v_isSilent_2088_ == 0)
{
lean_object* v___x_2089_; uint8_t v___x_2090_; 
lean_inc_ref(v_filterFn_2071_);
lean_inc(v_head_2076_);
v___x_2089_ = lean_apply_1(v_filterFn_2071_, v_head_2076_);
v___x_2090_ = lean_unbox(v___x_2089_);
switch(v___x_2090_)
{
case 0:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; 
lean_del_object(v___x_2081_);
lean_inc(v_head_2076_);
v___x_2091_ = l_Lean_MessageLog_add(v_head_2076_, v_fst_2078_);
v___x_2092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2091_);
lean_ctor_set(v___x_2092_, 1, v_snd_2079_);
v_as_x27_2072_ = v_tail_2077_;
v_b_2073_ = v___x_2092_;
goto _start;
}
case 1:
{
goto v___jp_2083_;
}
default: 
{
lean_object* v___x_2094_; lean_object* v___x_2095_; 
lean_del_object(v___x_2081_);
lean_inc(v_head_2076_);
v___x_2094_ = l_Lean_MessageLog_add(v_head_2076_, v_snd_2079_);
v___x_2095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2095_, 0, v_fst_2078_);
lean_ctor_set(v___x_2095_, 1, v___x_2094_);
v_as_x27_2072_ = v_tail_2077_;
v_b_2073_ = v___x_2095_;
goto _start;
}
}
}
else
{
goto v___jp_2083_;
}
v___jp_2083_:
{
lean_object* v___x_2085_; 
if (v_isShared_2082_ == 0)
{
v___x_2085_ = v___x_2081_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_fst_2078_);
lean_ctor_set(v_reuseFailAlloc_2087_, 1, v_snd_2079_);
v___x_2085_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
v_as_x27_2072_ = v_tail_2077_;
v_b_2073_ = v___x_2085_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___redArg___boxed(lean_object* v_filterFn_2098_, lean_object* v_as_x27_2099_, lean_object* v_b_2100_, lean_object* v___y_2101_){
_start:
{
lean_object* v_res_2102_; 
v_res_2102_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___redArg(v_filterFn_2098_, v_as_x27_2099_, v_b_2100_);
lean_dec(v_as_x27_2099_);
return v_res_2102_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg(lean_object* v_s_2103_, lean_object* v_a_2104_, uint8_t v_b_2105_){
_start:
{
uint8_t v___x_2106_; 
v___x_2106_ = 0;
switch(lean_obj_tag(v_a_2104_))
{
case 0:
{
lean_object* v_pos_2107_; lean_object* v_startInclusive_2108_; lean_object* v_endExclusive_2109_; lean_object* v___x_2110_; uint8_t v_decide_2111_; 
v_pos_2107_ = lean_ctor_get(v_a_2104_, 0);
lean_inc(v_pos_2107_);
lean_dec_ref_known(v_a_2104_, 1);
v_startInclusive_2108_ = lean_ctor_get(v_s_2103_, 1);
v_endExclusive_2109_ = lean_ctor_get(v_s_2103_, 2);
v___x_2110_ = lean_nat_sub(v_endExclusive_2109_, v_startInclusive_2108_);
v_decide_2111_ = lean_nat_dec_eq(v_pos_2107_, v___x_2110_);
lean_dec(v___x_2110_);
lean_dec(v_pos_2107_);
if (v_decide_2111_ == 0)
{
uint8_t v___x_2112_; 
v___x_2112_ = 1;
return v___x_2112_;
}
else
{
return v_decide_2111_;
}
}
case 1:
{
lean_object* v_pos_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2126_; 
v_pos_2113_ = lean_ctor_get(v_a_2104_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v_a_2104_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2115_ = v_a_2104_;
v_isShared_2116_ = v_isSharedCheck_2126_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_pos_2113_);
lean_dec(v_a_2104_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2126_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v_str_2117_; lean_object* v_startInclusive_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2123_; 
v_str_2117_ = lean_ctor_get(v_s_2103_, 0);
v_startInclusive_2118_ = lean_ctor_get(v_s_2103_, 1);
v___x_2119_ = lean_nat_add(v_startInclusive_2118_, v_pos_2113_);
lean_dec(v_pos_2113_);
v___x_2120_ = lean_string_utf8_next_fast(v_str_2117_, v___x_2119_);
lean_dec(v___x_2119_);
v___x_2121_ = lean_nat_sub(v___x_2120_, v_startInclusive_2118_);
if (v_isShared_2116_ == 0)
{
lean_ctor_set_tag(v___x_2115_, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2121_);
v___x_2123_ = v___x_2115_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v___x_2121_);
v___x_2123_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
v_a_2104_ = v___x_2123_;
v_b_2105_ = v___x_2106_;
goto _start;
}
}
}
case 2:
{
lean_object* v_needle_2127_; lean_object* v_table_2128_; lean_object* v_stackPos_2129_; lean_object* v_needlePos_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2185_; 
v_needle_2127_ = lean_ctor_get(v_a_2104_, 0);
v_table_2128_ = lean_ctor_get(v_a_2104_, 1);
v_stackPos_2129_ = lean_ctor_get(v_a_2104_, 2);
v_needlePos_2130_ = lean_ctor_get(v_a_2104_, 3);
v_isSharedCheck_2185_ = !lean_is_exclusive(v_a_2104_);
if (v_isSharedCheck_2185_ == 0)
{
v___x_2132_ = v_a_2104_;
v_isShared_2133_ = v_isSharedCheck_2185_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_needlePos_2130_);
lean_inc(v_stackPos_2129_);
lean_inc(v_table_2128_);
lean_inc(v_needle_2127_);
lean_dec(v_a_2104_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2185_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v_str_2134_; lean_object* v_startInclusive_2135_; lean_object* v_endExclusive_2136_; lean_object* v_str_2137_; lean_object* v_startInclusive_2138_; lean_object* v_endExclusive_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; uint8_t v___x_2144_; 
v_str_2134_ = lean_ctor_get(v_needle_2127_, 0);
v_startInclusive_2135_ = lean_ctor_get(v_needle_2127_, 1);
v_endExclusive_2136_ = lean_ctor_get(v_needle_2127_, 2);
v_str_2137_ = lean_ctor_get(v_s_2103_, 0);
v_startInclusive_2138_ = lean_ctor_get(v_s_2103_, 1);
v_endExclusive_2139_ = lean_ctor_get(v_s_2103_, 2);
v___x_2140_ = lean_nat_sub(v_stackPos_2129_, v_needlePos_2130_);
v___x_2141_ = lean_nat_sub(v_endExclusive_2136_, v_startInclusive_2135_);
v___x_2142_ = lean_nat_add(v___x_2140_, v___x_2141_);
v___x_2143_ = lean_nat_sub(v_endExclusive_2139_, v_startInclusive_2138_);
v___x_2144_ = lean_nat_dec_le(v___x_2142_, v___x_2143_);
lean_dec(v___x_2142_);
if (v___x_2144_ == 0)
{
lean_object* v___x_2145_; lean_object* v___x_2146_; uint8_t v___x_2147_; 
lean_dec(v___x_2141_);
lean_del_object(v___x_2132_);
lean_dec(v_needlePos_2130_);
lean_dec(v_stackPos_2129_);
lean_dec_ref(v_table_2128_);
lean_dec_ref(v_needle_2127_);
v___x_2145_ = lean_unsigned_to_nat(1u);
v___x_2146_ = lean_nat_add(v___x_2140_, v___x_2145_);
lean_dec(v___x_2140_);
v___x_2147_ = lean_nat_dec_le(v___x_2146_, v___x_2143_);
lean_dec(v___x_2143_);
lean_dec(v___x_2146_);
if (v___x_2147_ == 0)
{
return v_b_2105_;
}
else
{
lean_object* v___x_2148_; 
v___x_2148_ = lean_box(3);
v_a_2104_ = v___x_2148_;
v_b_2105_ = v___x_2106_;
goto _start;
}
}
else
{
lean_object* v___x_2150_; uint8_t v_stackByte_2151_; lean_object* v___x_2152_; uint8_t v_patByte_2153_; uint8_t v___x_2154_; 
lean_dec(v___x_2143_);
lean_dec(v___x_2140_);
v___x_2150_ = lean_nat_add(v_startInclusive_2138_, v_stackPos_2129_);
v_stackByte_2151_ = lean_string_get_byte_fast(v_str_2137_, v___x_2150_);
v___x_2152_ = lean_nat_add(v_startInclusive_2135_, v_needlePos_2130_);
v_patByte_2153_ = lean_string_get_byte_fast(v_str_2134_, v___x_2152_);
v___x_2154_ = lean_uint8_dec_eq(v_stackByte_2151_, v_patByte_2153_);
if (v___x_2154_ == 0)
{
lean_object* v___x_2155_; uint8_t v_decide_2156_; 
lean_dec(v___x_2141_);
v___x_2155_ = lean_unsigned_to_nat(0u);
v_decide_2156_ = lean_nat_dec_eq(v_needlePos_2130_, v___x_2155_);
if (v_decide_2156_ == 0)
{
lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v_newNeedlePos_2159_; uint8_t v___x_2160_; 
v___x_2157_ = lean_unsigned_to_nat(1u);
v___x_2158_ = lean_nat_sub(v_needlePos_2130_, v___x_2157_);
lean_dec(v_needlePos_2130_);
v_newNeedlePos_2159_ = lean_array_fget_borrowed(v_table_2128_, v___x_2158_);
lean_dec(v___x_2158_);
v___x_2160_ = lean_nat_dec_eq(v_newNeedlePos_2159_, v___x_2155_);
if (v___x_2160_ == 0)
{
lean_object* v___x_2162_; 
lean_inc(v_newNeedlePos_2159_);
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 3, v_newNeedlePos_2159_);
v___x_2162_ = v___x_2132_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v_needle_2127_);
lean_ctor_set(v_reuseFailAlloc_2164_, 1, v_table_2128_);
lean_ctor_set(v_reuseFailAlloc_2164_, 2, v_stackPos_2129_);
lean_ctor_set(v_reuseFailAlloc_2164_, 3, v_newNeedlePos_2159_);
v___x_2162_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
v_a_2104_ = v___x_2162_;
v_b_2105_ = v___x_2106_;
goto _start;
}
}
else
{
lean_object* v_nextStackPos_2165_; lean_object* v___x_2167_; 
v_nextStackPos_2165_ = l_String_Slice_posGE___redArg(v_s_2103_, v_stackPos_2129_);
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 3, v___x_2155_);
lean_ctor_set(v___x_2132_, 2, v_nextStackPos_2165_);
v___x_2167_ = v___x_2132_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v_needle_2127_);
lean_ctor_set(v_reuseFailAlloc_2169_, 1, v_table_2128_);
lean_ctor_set(v_reuseFailAlloc_2169_, 2, v_nextStackPos_2165_);
lean_ctor_set(v_reuseFailAlloc_2169_, 3, v___x_2155_);
v___x_2167_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
v_a_2104_ = v___x_2167_;
v_b_2105_ = v___x_2106_;
goto _start;
}
}
}
else
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v_nextStackPos_2172_; lean_object* v___x_2174_; 
lean_dec(v_needlePos_2130_);
v___x_2170_ = lean_unsigned_to_nat(1u);
v___x_2171_ = lean_nat_add(v_stackPos_2129_, v___x_2170_);
lean_dec(v_stackPos_2129_);
v_nextStackPos_2172_ = l_String_Slice_posGE___redArg(v_s_2103_, v___x_2171_);
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 3, v___x_2155_);
lean_ctor_set(v___x_2132_, 2, v_nextStackPos_2172_);
v___x_2174_ = v___x_2132_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_needle_2127_);
lean_ctor_set(v_reuseFailAlloc_2176_, 1, v_table_2128_);
lean_ctor_set(v_reuseFailAlloc_2176_, 2, v_nextStackPos_2172_);
lean_ctor_set(v_reuseFailAlloc_2176_, 3, v___x_2155_);
v___x_2174_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
v_a_2104_ = v___x_2174_;
v_b_2105_ = v___x_2106_;
goto _start;
}
}
}
else
{
lean_object* v___x_2177_; lean_object* v_nextNeedlePos_2178_; uint8_t v_decide_2179_; 
v___x_2177_ = lean_unsigned_to_nat(1u);
v_nextNeedlePos_2178_ = lean_nat_add(v_needlePos_2130_, v___x_2177_);
lean_dec(v_needlePos_2130_);
v_decide_2179_ = lean_nat_dec_eq(v_nextNeedlePos_2178_, v___x_2141_);
lean_dec(v___x_2141_);
if (v_decide_2179_ == 0)
{
lean_object* v_nextStackPos_2180_; lean_object* v___x_2182_; 
v_nextStackPos_2180_ = lean_nat_add(v_stackPos_2129_, v___x_2177_);
lean_dec(v_stackPos_2129_);
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 3, v_nextNeedlePos_2178_);
lean_ctor_set(v___x_2132_, 2, v_nextStackPos_2180_);
v___x_2182_ = v___x_2132_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v_needle_2127_);
lean_ctor_set(v_reuseFailAlloc_2184_, 1, v_table_2128_);
lean_ctor_set(v_reuseFailAlloc_2184_, 2, v_nextStackPos_2180_);
lean_ctor_set(v_reuseFailAlloc_2184_, 3, v_nextNeedlePos_2178_);
v___x_2182_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
v_a_2104_ = v___x_2182_;
goto _start;
}
}
else
{
lean_dec(v_nextNeedlePos_2178_);
lean_del_object(v___x_2132_);
lean_dec(v_stackPos_2129_);
lean_dec_ref(v_table_2128_);
lean_dec_ref(v_needle_2127_);
return v_decide_2179_;
}
}
}
}
}
default: 
{
return v_b_2105_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg___boxed(lean_object* v_s_2186_, lean_object* v_a_2187_, lean_object* v_b_2188_){
_start:
{
uint8_t v_b_boxed_2189_; uint8_t v_res_2190_; lean_object* v_r_2191_; 
v_b_boxed_2189_ = lean_unbox(v_b_2188_);
v_res_2190_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg(v_s_2186_, v_a_2187_, v_b_boxed_2189_);
lean_dec_ref(v_s_2186_);
v_r_2191_ = lean_box(v_res_2190_);
return v_r_2191_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9(lean_object* v___x_2194_, lean_object* v_s_2195_){
_start:
{
lean_object* v___y_2197_; lean_object* v___x_2200_; lean_object* v___x_2201_; uint8_t v___x_2202_; 
v___x_2200_ = lean_unsigned_to_nat(0u);
v___x_2201_ = lean_string_utf8_byte_size(v___x_2194_);
v___x_2202_ = lean_nat_dec_eq(v___x_2201_, v___x_2200_);
if (v___x_2202_ == 0)
{
lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2203_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2194_);
lean_ctor_set(v___x_2203_, 1, v___x_2200_);
lean_ctor_set(v___x_2203_, 2, v___x_2201_);
v___x_2204_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_2203_);
v___x_2205_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2203_);
lean_ctor_set(v___x_2205_, 1, v___x_2204_);
lean_ctor_set(v___x_2205_, 2, v___x_2200_);
lean_ctor_set(v___x_2205_, 3, v___x_2200_);
v___y_2197_ = v___x_2205_;
goto v___jp_2196_;
}
else
{
lean_object* v___x_2206_; 
lean_dec_ref(v___x_2194_);
v___x_2206_ = ((lean_object*)(l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9___closed__0));
v___y_2197_ = v___x_2206_;
goto v___jp_2196_;
}
v___jp_2196_:
{
uint8_t v___x_2198_; uint8_t v___x_2199_; 
v___x_2198_ = 0;
v___x_2199_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg(v_s_2195_, v___y_2197_, v___x_2198_);
return v___x_2199_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9___boxed(lean_object* v___x_2207_, lean_object* v_s_2208_){
_start:
{
uint8_t v_res_2209_; lean_object* v_r_2210_; 
v_res_2209_ = l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9(v___x_2207_, v_s_2208_);
lean_dec_ref(v_s_2208_);
v_r_2210_ = lean_box(v_res_2209_);
return v_r_2210_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___lam__0(uint8_t v___x_2211_, lean_object* v_x_2212_){
_start:
{
if (lean_obj_tag(v_x_2212_) == 1)
{
lean_object* v_pre_2213_; 
v_pre_2213_ = lean_ctor_get(v_x_2212_, 0);
if (lean_obj_tag(v_pre_2213_) == 0)
{
lean_object* v_str_2214_; lean_object* v___x_2215_; uint8_t v___x_2216_; 
v_str_2214_ = lean_ctor_get(v_x_2212_, 1);
v___x_2215_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__2));
v___x_2216_ = lean_string_dec_eq(v_str_2214_, v___x_2215_);
return v___x_2216_;
}
else
{
return v___x_2211_;
}
}
else
{
return v___x_2211_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___lam__0___boxed(lean_object* v___x_2217_, lean_object* v_x_2218_){
_start:
{
uint8_t v___x_27917__boxed_2219_; uint8_t v_res_2220_; lean_object* v_r_2221_; 
v___x_27917__boxed_2219_ = lean_unbox(v___x_2217_);
v_res_2220_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___lam__0(v___x_27917__boxed_2219_, v_x_2218_);
lean_dec(v_x_2218_);
v_r_2221_ = lean_box(v_res_2220_);
return v_r_2221_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2(lean_object* v_ref_2225_, lean_object* v_msgData_2226_, uint8_t v_severity_2227_, uint8_t v_isSilent_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_){
_start:
{
lean_object* v___y_2233_; uint8_t v___y_2234_; lean_object* v___y_2235_; lean_object* v___y_2236_; uint8_t v___y_2237_; lean_object* v___y_2238_; lean_object* v___y_2239_; lean_object* v___y_2240_; lean_object* v___y_2298_; lean_object* v___y_2299_; uint8_t v___y_2300_; uint8_t v___y_2301_; lean_object* v___y_2302_; lean_object* v___y_2323_; lean_object* v___y_2324_; uint8_t v___y_2325_; uint8_t v___y_2326_; lean_object* v___y_2327_; uint8_t v___y_2331_; uint8_t v___x_2359_; uint8_t v___x_2360_; 
v___x_2359_ = 2;
v___x_2360_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2227_, v___x_2359_);
if (v___x_2360_ == 0)
{
goto v___jp_2348_;
}
else
{
uint8_t v___x_2361_; 
lean_inc_ref(v_msgData_2226_);
v___x_2361_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2226_);
if (v___x_2361_ == 0)
{
goto v___jp_2348_;
}
else
{
lean_object* v___x_2362_; lean_object* v___x_2363_; 
lean_dec_ref(v_msgData_2226_);
v___x_2362_ = lean_box(0);
v___x_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2362_);
return v___x_2363_;
}
}
v___jp_2232_:
{
lean_object* v___x_2241_; 
v___x_2241_ = l_Lean_Elab_Command_getScope___redArg(v___y_2240_);
if (lean_obj_tag(v___x_2241_) == 0)
{
lean_object* v_a_2242_; lean_object* v_currNamespace_2243_; lean_object* v___x_2244_; 
v_a_2242_ = lean_ctor_get(v___x_2241_, 0);
lean_inc(v_a_2242_);
lean_dec_ref_known(v___x_2241_, 1);
v_currNamespace_2243_ = lean_ctor_get(v_a_2242_, 2);
lean_inc(v_currNamespace_2243_);
lean_dec(v_a_2242_);
v___x_2244_ = l_Lean_Elab_Command_getScope___redArg(v___y_2240_);
if (lean_obj_tag(v___x_2244_) == 0)
{
lean_object* v_a_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2280_; 
v_a_2245_ = lean_ctor_get(v___x_2244_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v___x_2244_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2247_ = v___x_2244_;
v_isShared_2248_ = v_isSharedCheck_2280_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_a_2245_);
lean_dec(v___x_2244_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2280_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v_openDecls_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v_env_2254_; lean_object* v_messages_2255_; lean_object* v_scopes_2256_; lean_object* v_usedQuotCtxts_2257_; lean_object* v_nextMacroScope_2258_; lean_object* v_maxRecDepth_2259_; lean_object* v_ngen_2260_; lean_object* v_auxDeclNGen_2261_; lean_object* v_infoState_2262_; lean_object* v_traceState_2263_; lean_object* v_snapshotTasks_2264_; lean_object* v_prevLinterStates_2265_; lean_object* v_codeQualityEntryTasks_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2279_; 
v_openDecls_2249_ = lean_ctor_get(v_a_2245_, 3);
lean_inc(v_openDecls_2249_);
lean_dec(v_a_2245_);
v___x_2250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2250_, 0, v_currNamespace_2243_);
lean_ctor_set(v___x_2250_, 1, v_openDecls_2249_);
v___x_2251_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2250_);
lean_ctor_set(v___x_2251_, 1, v___y_2235_);
lean_inc_ref(v___y_2238_);
lean_inc_ref(v___y_2239_);
v___x_2252_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2252_, 0, v___y_2239_);
lean_ctor_set(v___x_2252_, 1, v___y_2233_);
lean_ctor_set(v___x_2252_, 2, v___y_2236_);
lean_ctor_set(v___x_2252_, 3, v___y_2238_);
lean_ctor_set(v___x_2252_, 4, v___x_2251_);
lean_ctor_set_uint8(v___x_2252_, sizeof(void*)*5, v___y_2237_);
lean_ctor_set_uint8(v___x_2252_, sizeof(void*)*5 + 1, v___y_2234_);
lean_ctor_set_uint8(v___x_2252_, sizeof(void*)*5 + 2, v_isSilent_2228_);
v___x_2253_ = lean_st_ref_take(v___y_2240_);
v_env_2254_ = lean_ctor_get(v___x_2253_, 0);
v_messages_2255_ = lean_ctor_get(v___x_2253_, 1);
v_scopes_2256_ = lean_ctor_get(v___x_2253_, 2);
v_usedQuotCtxts_2257_ = lean_ctor_get(v___x_2253_, 3);
v_nextMacroScope_2258_ = lean_ctor_get(v___x_2253_, 4);
v_maxRecDepth_2259_ = lean_ctor_get(v___x_2253_, 5);
v_ngen_2260_ = lean_ctor_get(v___x_2253_, 6);
v_auxDeclNGen_2261_ = lean_ctor_get(v___x_2253_, 7);
v_infoState_2262_ = lean_ctor_get(v___x_2253_, 8);
v_traceState_2263_ = lean_ctor_get(v___x_2253_, 9);
v_snapshotTasks_2264_ = lean_ctor_get(v___x_2253_, 10);
v_prevLinterStates_2265_ = lean_ctor_get(v___x_2253_, 11);
v_codeQualityEntryTasks_2266_ = lean_ctor_get(v___x_2253_, 12);
v_isSharedCheck_2279_ = !lean_is_exclusive(v___x_2253_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2268_ = v___x_2253_;
v_isShared_2269_ = v_isSharedCheck_2279_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2266_);
lean_inc(v_prevLinterStates_2265_);
lean_inc(v_snapshotTasks_2264_);
lean_inc(v_traceState_2263_);
lean_inc(v_infoState_2262_);
lean_inc(v_auxDeclNGen_2261_);
lean_inc(v_ngen_2260_);
lean_inc(v_maxRecDepth_2259_);
lean_inc(v_nextMacroScope_2258_);
lean_inc(v_usedQuotCtxts_2257_);
lean_inc(v_scopes_2256_);
lean_inc(v_messages_2255_);
lean_inc(v_env_2254_);
lean_dec(v___x_2253_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2279_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2273_; 
v___x_2270_ = lean_box(0);
v___x_2271_ = l_Lean_MessageLog_add(v___x_2252_, v_messages_2255_);
if (v_isShared_2269_ == 0)
{
lean_ctor_set(v___x_2268_, 1, v___x_2271_);
v___x_2273_ = v___x_2268_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v_env_2254_);
lean_ctor_set(v_reuseFailAlloc_2278_, 1, v___x_2271_);
lean_ctor_set(v_reuseFailAlloc_2278_, 2, v_scopes_2256_);
lean_ctor_set(v_reuseFailAlloc_2278_, 3, v_usedQuotCtxts_2257_);
lean_ctor_set(v_reuseFailAlloc_2278_, 4, v_nextMacroScope_2258_);
lean_ctor_set(v_reuseFailAlloc_2278_, 5, v_maxRecDepth_2259_);
lean_ctor_set(v_reuseFailAlloc_2278_, 6, v_ngen_2260_);
lean_ctor_set(v_reuseFailAlloc_2278_, 7, v_auxDeclNGen_2261_);
lean_ctor_set(v_reuseFailAlloc_2278_, 8, v_infoState_2262_);
lean_ctor_set(v_reuseFailAlloc_2278_, 9, v_traceState_2263_);
lean_ctor_set(v_reuseFailAlloc_2278_, 10, v_snapshotTasks_2264_);
lean_ctor_set(v_reuseFailAlloc_2278_, 11, v_prevLinterStates_2265_);
lean_ctor_set(v_reuseFailAlloc_2278_, 12, v_codeQualityEntryTasks_2266_);
v___x_2273_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
lean_object* v___x_2274_; lean_object* v___x_2276_; 
v___x_2274_ = lean_st_ref_put(v___y_2240_, v___x_2273_);
if (v_isShared_2248_ == 0)
{
lean_ctor_set(v___x_2247_, 0, v___x_2270_);
v___x_2276_ = v___x_2247_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v___x_2270_);
v___x_2276_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
return v___x_2276_;
}
}
}
}
}
else
{
lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2288_; 
lean_dec(v_currNamespace_2243_);
lean_dec(v___y_2236_);
lean_dec_ref(v___y_2235_);
lean_dec_ref(v___y_2233_);
v_a_2281_ = lean_ctor_get(v___x_2244_, 0);
v_isSharedCheck_2288_ = !lean_is_exclusive(v___x_2244_);
if (v_isSharedCheck_2288_ == 0)
{
v___x_2283_ = v___x_2244_;
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v___x_2244_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2286_; 
if (v_isShared_2284_ == 0)
{
v___x_2286_ = v___x_2283_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v_a_2281_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
return v___x_2286_;
}
}
}
}
else
{
lean_object* v_a_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2296_; 
lean_dec(v___y_2236_);
lean_dec_ref(v___y_2235_);
lean_dec_ref(v___y_2233_);
v_a_2289_ = lean_ctor_get(v___x_2241_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2291_ = v___x_2241_;
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_a_2289_);
lean_dec(v___x_2241_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2294_; 
if (v_isShared_2292_ == 0)
{
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
return v___x_2294_;
}
}
}
}
v___jp_2297_:
{
lean_object* v_fileName_2303_; lean_object* v_fileMap_2304_; uint8_t v_suppressElabErrors_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v_a_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2321_; 
v_fileName_2303_ = lean_ctor_get(v___y_2229_, 0);
v_fileMap_2304_ = lean_ctor_get(v___y_2229_, 1);
v_suppressElabErrors_2305_ = lean_ctor_get_uint8(v___y_2229_, sizeof(void*)*10);
v___x_2306_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2226_);
v___x_2307_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg(v___x_2306_, v___y_2230_);
v_a_2308_ = lean_ctor_get(v___x_2307_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2307_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2310_ = v___x_2307_;
v_isShared_2311_ = v_isSharedCheck_2321_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_a_2308_);
lean_dec(v___x_2307_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2321_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; 
lean_inc_ref_n(v_fileMap_2304_, 2);
v___x_2312_ = l_Lean_FileMap_toPosition(v_fileMap_2304_, v___y_2299_);
lean_dec(v___y_2299_);
v___x_2313_ = l_Lean_FileMap_toPosition(v_fileMap_2304_, v___y_2302_);
lean_dec(v___y_2302_);
v___x_2314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2313_);
v___x_2315_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9));
if (v_suppressElabErrors_2305_ == 0)
{
lean_del_object(v___x_2310_);
v___y_2233_ = v___x_2312_;
v___y_2234_ = v___y_2300_;
v___y_2235_ = v_a_2308_;
v___y_2236_ = v___x_2314_;
v___y_2237_ = v___y_2301_;
v___y_2238_ = v___x_2315_;
v___y_2239_ = v_fileName_2303_;
v___y_2240_ = v___y_2230_;
goto v___jp_2232_;
}
else
{
uint8_t v___x_2316_; 
lean_inc(v_a_2308_);
lean_inc_ref(v___y_2298_);
v___x_2316_ = l_Lean_MessageData_hasTag(v___y_2298_, v_a_2308_);
if (v___x_2316_ == 0)
{
lean_object* v___x_2317_; lean_object* v___x_2319_; 
lean_dec_ref_known(v___x_2314_, 1);
lean_dec_ref(v___x_2312_);
lean_dec(v_a_2308_);
v___x_2317_ = lean_box(0);
if (v_isShared_2311_ == 0)
{
lean_ctor_set(v___x_2310_, 0, v___x_2317_);
v___x_2319_ = v___x_2310_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v___x_2317_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
else
{
lean_del_object(v___x_2310_);
v___y_2233_ = v___x_2312_;
v___y_2234_ = v___y_2300_;
v___y_2235_ = v_a_2308_;
v___y_2236_ = v___x_2314_;
v___y_2237_ = v___y_2301_;
v___y_2238_ = v___x_2315_;
v___y_2239_ = v_fileName_2303_;
v___y_2240_ = v___y_2230_;
goto v___jp_2232_;
}
}
}
}
v___jp_2322_:
{
lean_object* v___x_2328_; 
v___x_2328_ = l_Lean_Syntax_getTailPos_x3f(v___y_2323_, v___y_2325_);
lean_dec(v___y_2323_);
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_inc(v___y_2327_);
v___y_2298_ = v___y_2324_;
v___y_2299_ = v___y_2327_;
v___y_2300_ = v___y_2326_;
v___y_2301_ = v___y_2325_;
v___y_2302_ = v___y_2327_;
goto v___jp_2297_;
}
else
{
lean_object* v_val_2329_; 
v_val_2329_ = lean_ctor_get(v___x_2328_, 0);
lean_inc(v_val_2329_);
lean_dec_ref_known(v___x_2328_, 1);
v___y_2298_ = v___y_2324_;
v___y_2299_ = v___y_2327_;
v___y_2300_ = v___y_2326_;
v___y_2301_ = v___y_2325_;
v___y_2302_ = v_val_2329_;
goto v___jp_2297_;
}
}
v___jp_2330_:
{
lean_object* v___x_2332_; 
v___x_2332_ = l_Lean_Elab_Command_getRef___redArg(v___y_2229_);
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_object* v_a_2333_; lean_object* v_ref_2334_; uint8_t v___x_2335_; lean_object* v___f_2336_; lean_object* v___x_2337_; 
v_a_2333_ = lean_ctor_get(v___x_2332_, 0);
lean_inc(v_a_2333_);
lean_dec_ref_known(v___x_2332_, 1);
v_ref_2334_ = l_Lean_replaceRef(v_ref_2225_, v_a_2333_);
lean_dec(v_a_2333_);
v___x_2335_ = 0;
v___f_2336_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___closed__0));
v___x_2337_ = l_Lean_Syntax_getPos_x3f(v_ref_2334_, v___x_2335_);
if (lean_obj_tag(v___x_2337_) == 0)
{
lean_object* v___x_2338_; 
v___x_2338_ = lean_unsigned_to_nat(0u);
v___y_2323_ = v_ref_2334_;
v___y_2324_ = v___f_2336_;
v___y_2325_ = v___x_2335_;
v___y_2326_ = v___y_2331_;
v___y_2327_ = v___x_2338_;
goto v___jp_2322_;
}
else
{
lean_object* v_val_2339_; 
v_val_2339_ = lean_ctor_get(v___x_2337_, 0);
lean_inc(v_val_2339_);
lean_dec_ref_known(v___x_2337_, 1);
v___y_2323_ = v_ref_2334_;
v___y_2324_ = v___f_2336_;
v___y_2325_ = v___x_2335_;
v___y_2326_ = v___y_2331_;
v___y_2327_ = v_val_2339_;
goto v___jp_2322_;
}
}
else
{
lean_object* v_a_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2347_; 
lean_dec_ref(v_msgData_2226_);
v_a_2340_ = lean_ctor_get(v___x_2332_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___x_2332_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2342_ = v___x_2332_;
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_a_2340_);
lean_dec(v___x_2332_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2345_; 
if (v_isShared_2343_ == 0)
{
v___x_2345_ = v___x_2342_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_a_2340_);
v___x_2345_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
return v___x_2345_;
}
}
}
}
v___jp_2348_:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v_scopes_2351_; lean_object* v___x_2352_; lean_object* v_opts_2353_; uint8_t v___x_2354_; uint8_t v___x_2355_; 
v___x_2349_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2350_ = lean_st_ref_get(v___y_2230_);
v_scopes_2351_ = lean_ctor_get(v___x_2350_, 2);
lean_inc(v_scopes_2351_);
lean_dec(v___x_2350_);
v___x_2352_ = l_List_head_x21___redArg(v___x_2349_, v_scopes_2351_);
lean_dec(v_scopes_2351_);
v_opts_2353_ = lean_ctor_get(v___x_2352_, 1);
lean_inc_ref(v_opts_2353_);
lean_dec(v___x_2352_);
v___x_2354_ = 1;
v___x_2355_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2227_, v___x_2354_);
if (v___x_2355_ == 0)
{
lean_dec_ref(v_opts_2353_);
v___y_2331_ = v_severity_2227_;
goto v___jp_2330_;
}
else
{
lean_object* v___x_2356_; uint8_t v___x_2357_; 
v___x_2356_ = l_Lean_warningAsError;
v___x_2357_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4(v_opts_2353_, v___x_2356_);
lean_dec_ref(v_opts_2353_);
if (v___x_2357_ == 0)
{
v___y_2331_ = v_severity_2227_;
goto v___jp_2330_;
}
else
{
uint8_t v___x_2358_; 
v___x_2358_ = 2;
v___y_2331_ = v___x_2358_;
goto v___jp_2330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___boxed(lean_object* v_ref_2364_, lean_object* v_msgData_2365_, lean_object* v_severity_2366_, lean_object* v_isSilent_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_){
_start:
{
uint8_t v_severity_boxed_2371_; uint8_t v_isSilent_boxed_2372_; lean_object* v_res_2373_; 
v_severity_boxed_2371_ = lean_unbox(v_severity_2366_);
v_isSilent_boxed_2372_ = lean_unbox(v_isSilent_2367_);
v_res_2373_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2(v_ref_2364_, v_msgData_2365_, v_severity_boxed_2371_, v_isSilent_boxed_2372_, v___y_2368_, v___y_2369_);
lean_dec(v___y_2369_);
lean_dec_ref(v___y_2368_);
lean_dec(v_ref_2364_);
return v_res_2373_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2(lean_object* v_ref_2374_, lean_object* v_msgData_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_){
_start:
{
uint8_t v___x_2379_; uint8_t v___x_2380_; lean_object* v___x_2381_; 
v___x_2379_ = 2;
v___x_2380_ = 0;
v___x_2381_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2(v_ref_2374_, v_msgData_2375_, v___x_2379_, v___x_2380_, v___y_2376_, v___y_2377_);
return v___x_2381_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2___boxed(lean_object* v_ref_2382_, lean_object* v_msgData_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_){
_start:
{
lean_object* v_res_2387_; 
v_res_2387_ = l_Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2(v_ref_2382_, v_msgData_2383_, v___y_2384_, v___y_2385_);
lean_dec(v___y_2385_);
lean_dec_ref(v___y_2384_);
lean_dec(v_ref_2382_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg(lean_object* v___x_2388_, lean_object* v___x_2389_, lean_object* v___x_2390_, lean_object* v_a_2391_, lean_object* v_b_2392_){
_start:
{
lean_object* v_it_2394_; lean_object* v_startInclusive_2395_; lean_object* v_endExclusive_2396_; 
if (lean_obj_tag(v_a_2391_) == 0)
{
lean_object* v_currPos_2401_; lean_object* v_searcher_2402_; lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2431_; 
v_currPos_2401_ = lean_ctor_get(v_a_2391_, 0);
v_searcher_2402_ = lean_ctor_get(v_a_2391_, 1);
v_isSharedCheck_2431_ = !lean_is_exclusive(v_a_2391_);
if (v_isSharedCheck_2431_ == 0)
{
v___x_2404_ = v_a_2391_;
v_isShared_2405_ = v_isSharedCheck_2431_;
goto v_resetjp_2403_;
}
else
{
lean_inc(v_searcher_2402_);
lean_inc(v_currPos_2401_);
lean_dec(v_a_2391_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2431_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
lean_object* v_str_2406_; lean_object* v_startInclusive_2407_; lean_object* v_endExclusive_2408_; lean_object* v___x_2409_; uint8_t v_decide_2410_; 
v_str_2406_ = lean_ctor_get(v___x_2389_, 0);
v_startInclusive_2407_ = lean_ctor_get(v___x_2389_, 1);
v_endExclusive_2408_ = lean_ctor_get(v___x_2389_, 2);
v___x_2409_ = lean_nat_sub(v_endExclusive_2408_, v_startInclusive_2407_);
v_decide_2410_ = lean_nat_dec_eq(v_searcher_2402_, v___x_2409_);
lean_dec(v___x_2409_);
if (v_decide_2410_ == 0)
{
uint32_t v___x_2411_; lean_object* v___x_2412_; uint32_t v___x_2413_; uint8_t v___x_2414_; 
v___x_2411_ = 10;
v___x_2412_ = lean_nat_add(v_startInclusive_2407_, v_searcher_2402_);
v___x_2413_ = lean_string_utf8_get_fast(v_str_2406_, v___x_2412_);
v___x_2414_ = lean_uint32_dec_eq(v___x_2413_, v___x_2411_);
if (v___x_2414_ == 0)
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2418_; 
lean_dec(v_searcher_2402_);
v___x_2415_ = lean_string_utf8_next_fast(v_str_2406_, v___x_2412_);
lean_dec(v___x_2412_);
v___x_2416_ = lean_nat_sub(v___x_2415_, v_startInclusive_2407_);
if (v_isShared_2405_ == 0)
{
lean_ctor_set(v___x_2404_, 1, v___x_2416_);
v___x_2418_ = v___x_2404_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_currPos_2401_);
lean_ctor_set(v_reuseFailAlloc_2420_, 1, v___x_2416_);
v___x_2418_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
v_a_2391_ = v___x_2418_;
goto _start;
}
}
else
{
lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v_slice_2424_; lean_object* v_nextIt_2426_; 
v___x_2421_ = lean_string_utf8_next_fast(v_str_2406_, v___x_2412_);
v___x_2422_ = lean_nat_sub(v___x_2421_, v___x_2412_);
lean_dec(v___x_2412_);
v___x_2423_ = lean_nat_add(v_searcher_2402_, v___x_2422_);
lean_dec(v___x_2422_);
v_slice_2424_ = l_String_Slice_subslice_x21(v___x_2389_, v_currPos_2401_, v_searcher_2402_);
lean_inc(v___x_2423_);
if (v_isShared_2405_ == 0)
{
lean_ctor_set(v___x_2404_, 1, v___x_2423_);
lean_ctor_set(v___x_2404_, 0, v___x_2423_);
v_nextIt_2426_ = v___x_2404_;
goto v_reusejp_2425_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v___x_2423_);
lean_ctor_set(v_reuseFailAlloc_2429_, 1, v___x_2423_);
v_nextIt_2426_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2425_;
}
v_reusejp_2425_:
{
lean_object* v_startInclusive_2427_; lean_object* v_endExclusive_2428_; 
v_startInclusive_2427_ = lean_ctor_get(v_slice_2424_, 0);
lean_inc(v_startInclusive_2427_);
v_endExclusive_2428_ = lean_ctor_get(v_slice_2424_, 1);
lean_inc(v_endExclusive_2428_);
lean_dec_ref(v_slice_2424_);
v_it_2394_ = v_nextIt_2426_;
v_startInclusive_2395_ = v_startInclusive_2427_;
v_endExclusive_2396_ = v_endExclusive_2428_;
goto v___jp_2393_;
}
}
}
else
{
lean_object* v___x_2430_; 
lean_del_object(v___x_2404_);
lean_dec(v_searcher_2402_);
v___x_2430_ = lean_box(1);
lean_inc(v___x_2390_);
v_it_2394_ = v___x_2430_;
v_startInclusive_2395_ = v_currPos_2401_;
v_endExclusive_2396_ = v___x_2390_;
goto v___jp_2393_;
}
}
}
else
{
lean_dec(v___x_2390_);
lean_dec_ref(v___x_2388_);
return v_b_2392_;
}
v___jp_2393_:
{
lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; 
lean_inc_ref(v___x_2388_);
v___x_2397_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2397_, 0, v___x_2388_);
lean_ctor_set(v___x_2397_, 1, v_startInclusive_2395_);
lean_ctor_set(v___x_2397_, 2, v_endExclusive_2396_);
v___x_2398_ = l_String_Slice_toString(v___x_2397_);
lean_dec_ref_known(v___x_2397_, 3);
v___x_2399_ = lean_array_push(v_b_2392_, v___x_2398_);
v_a_2391_ = v_it_2394_;
v_b_2392_ = v___x_2399_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg___boxed(lean_object* v___x_2432_, lean_object* v___x_2433_, lean_object* v___x_2434_, lean_object* v_a_2435_, lean_object* v_b_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg(v___x_2432_, v___x_2433_, v___x_2434_, v_a_2435_, v_b_2436_);
lean_dec_ref(v___x_2433_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg(lean_object* v___x_2438_, lean_object* v___x_2439_, lean_object* v___x_2440_, lean_object* v_a_2441_, lean_object* v_b_2442_){
_start:
{
lean_object* v_it_2444_; lean_object* v_startInclusive_2445_; lean_object* v_endExclusive_2446_; 
if (lean_obj_tag(v_a_2441_) == 0)
{
lean_object* v_currPos_2451_; lean_object* v_searcher_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2481_; 
v_currPos_2451_ = lean_ctor_get(v_a_2441_, 0);
v_searcher_2452_ = lean_ctor_get(v_a_2441_, 1);
v_isSharedCheck_2481_ = !lean_is_exclusive(v_a_2441_);
if (v_isSharedCheck_2481_ == 0)
{
v___x_2454_ = v_a_2441_;
v_isShared_2455_ = v_isSharedCheck_2481_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_searcher_2452_);
lean_inc(v_currPos_2451_);
lean_dec(v_a_2441_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2481_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v_str_2456_; lean_object* v_startInclusive_2457_; lean_object* v_endExclusive_2458_; lean_object* v___x_2459_; uint8_t v_decide_2460_; 
v_str_2456_ = lean_ctor_get(v___x_2439_, 0);
v_startInclusive_2457_ = lean_ctor_get(v___x_2439_, 1);
v_endExclusive_2458_ = lean_ctor_get(v___x_2439_, 2);
v___x_2459_ = lean_nat_sub(v_endExclusive_2458_, v_startInclusive_2457_);
v_decide_2460_ = lean_nat_dec_eq(v_searcher_2452_, v___x_2459_);
lean_dec(v___x_2459_);
if (v_decide_2460_ == 0)
{
lean_object* v___x_2461_; uint32_t v___x_2462_; uint32_t v___x_2463_; uint8_t v___x_2464_; 
v___x_2461_ = lean_nat_add(v_startInclusive_2457_, v_searcher_2452_);
v___x_2462_ = lean_string_utf8_get_fast(v_str_2456_, v___x_2461_);
v___x_2463_ = 10;
v___x_2464_ = lean_uint32_dec_eq(v___x_2462_, v___x_2463_);
if (v___x_2464_ == 0)
{
lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2468_; 
lean_dec(v_searcher_2452_);
v___x_2465_ = lean_string_utf8_next_fast(v_str_2456_, v___x_2461_);
lean_dec(v___x_2461_);
v___x_2466_ = lean_nat_sub(v___x_2465_, v_startInclusive_2457_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 1, v___x_2466_);
v___x_2468_ = v___x_2454_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v_currPos_2451_);
lean_ctor_set(v_reuseFailAlloc_2470_, 1, v___x_2466_);
v___x_2468_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
lean_object* v___x_2469_; 
v___x_2469_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg(v___x_2438_, v___x_2439_, v___x_2440_, v___x_2468_, v_b_2442_);
return v___x_2469_;
}
}
else
{
lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v_slice_2474_; lean_object* v_nextIt_2476_; 
v___x_2471_ = lean_string_utf8_next_fast(v_str_2456_, v___x_2461_);
v___x_2472_ = lean_nat_sub(v___x_2471_, v___x_2461_);
lean_dec(v___x_2461_);
v___x_2473_ = lean_nat_add(v_searcher_2452_, v___x_2472_);
lean_dec(v___x_2472_);
v_slice_2474_ = l_String_Slice_subslice_x21(v___x_2439_, v_currPos_2451_, v_searcher_2452_);
lean_inc(v___x_2473_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 1, v___x_2473_);
lean_ctor_set(v___x_2454_, 0, v___x_2473_);
v_nextIt_2476_ = v___x_2454_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v___x_2473_);
lean_ctor_set(v_reuseFailAlloc_2479_, 1, v___x_2473_);
v_nextIt_2476_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
lean_object* v_startInclusive_2477_; lean_object* v_endExclusive_2478_; 
v_startInclusive_2477_ = lean_ctor_get(v_slice_2474_, 0);
lean_inc(v_startInclusive_2477_);
v_endExclusive_2478_ = lean_ctor_get(v_slice_2474_, 1);
lean_inc(v_endExclusive_2478_);
lean_dec_ref(v_slice_2474_);
v_it_2444_ = v_nextIt_2476_;
v_startInclusive_2445_ = v_startInclusive_2477_;
v_endExclusive_2446_ = v_endExclusive_2478_;
goto v___jp_2443_;
}
}
}
else
{
lean_object* v___x_2480_; 
lean_del_object(v___x_2454_);
lean_dec(v_searcher_2452_);
v___x_2480_ = lean_box(1);
lean_inc(v___x_2440_);
v_it_2444_ = v___x_2480_;
v_startInclusive_2445_ = v_currPos_2451_;
v_endExclusive_2446_ = v___x_2440_;
goto v___jp_2443_;
}
}
}
else
{
lean_dec(v___x_2440_);
lean_dec_ref(v___x_2438_);
return v_b_2442_;
}
v___jp_2443_:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; 
lean_inc_ref(v___x_2438_);
v___x_2447_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2447_, 0, v___x_2438_);
lean_ctor_set(v___x_2447_, 1, v_startInclusive_2445_);
lean_ctor_set(v___x_2447_, 2, v_endExclusive_2446_);
v___x_2448_ = l_String_Slice_toString(v___x_2447_);
lean_dec_ref_known(v___x_2447_, 3);
v___x_2449_ = lean_array_push(v_b_2442_, v___x_2448_);
v___x_2450_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg(v___x_2438_, v___x_2439_, v___x_2440_, v_it_2444_, v___x_2449_);
return v___x_2450_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg___boxed(lean_object* v___x_2482_, lean_object* v___x_2483_, lean_object* v___x_2484_, lean_object* v_a_2485_, lean_object* v_b_2486_){
_start:
{
lean_object* v_res_2487_; 
v_res_2487_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg(v___x_2482_, v___x_2483_, v___x_2484_, v_a_2485_, v_b_2486_);
lean_dec_ref(v___x_2483_);
return v_res_2487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___redArg(lean_object* v_t_2488_, lean_object* v___y_2489_){
_start:
{
lean_object* v___x_2491_; lean_object* v_infoState_2492_; uint8_t v_enabled_2493_; 
v___x_2491_ = lean_st_ref_get(v___y_2489_);
v_infoState_2492_ = lean_ctor_get(v___x_2491_, 8);
lean_inc_ref(v_infoState_2492_);
lean_dec(v___x_2491_);
v_enabled_2493_ = lean_ctor_get_uint8(v_infoState_2492_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2492_);
if (v_enabled_2493_ == 0)
{
lean_object* v___x_2494_; lean_object* v___x_2495_; 
lean_dec_ref(v_t_2488_);
v___x_2494_ = lean_box(0);
v___x_2495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2494_);
return v___x_2495_;
}
else
{
lean_object* v___x_2496_; lean_object* v_infoState_2497_; lean_object* v_env_2498_; lean_object* v_messages_2499_; lean_object* v_scopes_2500_; lean_object* v_usedQuotCtxts_2501_; lean_object* v_nextMacroScope_2502_; lean_object* v_maxRecDepth_2503_; lean_object* v_ngen_2504_; lean_object* v_auxDeclNGen_2505_; lean_object* v_traceState_2506_; lean_object* v_snapshotTasks_2507_; lean_object* v_prevLinterStates_2508_; lean_object* v_codeQualityEntryTasks_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2531_; 
v___x_2496_ = lean_st_ref_take(v___y_2489_);
v_infoState_2497_ = lean_ctor_get(v___x_2496_, 8);
v_env_2498_ = lean_ctor_get(v___x_2496_, 0);
v_messages_2499_ = lean_ctor_get(v___x_2496_, 1);
v_scopes_2500_ = lean_ctor_get(v___x_2496_, 2);
v_usedQuotCtxts_2501_ = lean_ctor_get(v___x_2496_, 3);
v_nextMacroScope_2502_ = lean_ctor_get(v___x_2496_, 4);
v_maxRecDepth_2503_ = lean_ctor_get(v___x_2496_, 5);
v_ngen_2504_ = lean_ctor_get(v___x_2496_, 6);
v_auxDeclNGen_2505_ = lean_ctor_get(v___x_2496_, 7);
v_traceState_2506_ = lean_ctor_get(v___x_2496_, 9);
v_snapshotTasks_2507_ = lean_ctor_get(v___x_2496_, 10);
v_prevLinterStates_2508_ = lean_ctor_get(v___x_2496_, 11);
v_codeQualityEntryTasks_2509_ = lean_ctor_get(v___x_2496_, 12);
v_isSharedCheck_2531_ = !lean_is_exclusive(v___x_2496_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2511_ = v___x_2496_;
v_isShared_2512_ = v_isSharedCheck_2531_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2509_);
lean_inc(v_prevLinterStates_2508_);
lean_inc(v_snapshotTasks_2507_);
lean_inc(v_traceState_2506_);
lean_inc(v_infoState_2497_);
lean_inc(v_auxDeclNGen_2505_);
lean_inc(v_ngen_2504_);
lean_inc(v_maxRecDepth_2503_);
lean_inc(v_nextMacroScope_2502_);
lean_inc(v_usedQuotCtxts_2501_);
lean_inc(v_scopes_2500_);
lean_inc(v_messages_2499_);
lean_inc(v_env_2498_);
lean_dec(v___x_2496_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2531_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
uint8_t v_enabled_2513_; lean_object* v_assignment_2514_; lean_object* v_lazyAssignment_2515_; lean_object* v_trees_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2530_; 
v_enabled_2513_ = lean_ctor_get_uint8(v_infoState_2497_, sizeof(void*)*3);
v_assignment_2514_ = lean_ctor_get(v_infoState_2497_, 0);
v_lazyAssignment_2515_ = lean_ctor_get(v_infoState_2497_, 1);
v_trees_2516_ = lean_ctor_get(v_infoState_2497_, 2);
v_isSharedCheck_2530_ = !lean_is_exclusive(v_infoState_2497_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2518_ = v_infoState_2497_;
v_isShared_2519_ = v_isSharedCheck_2530_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_trees_2516_);
lean_inc(v_lazyAssignment_2515_);
lean_inc(v_assignment_2514_);
lean_dec(v_infoState_2497_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2530_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2523_; 
v___x_2520_ = lean_box(0);
v___x_2521_ = l_Lean_PersistentArray_push___redArg(v_trees_2516_, v_t_2488_);
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 2, v___x_2521_);
v___x_2523_ = v___x_2518_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_assignment_2514_);
lean_ctor_set(v_reuseFailAlloc_2529_, 1, v_lazyAssignment_2515_);
lean_ctor_set(v_reuseFailAlloc_2529_, 2, v___x_2521_);
lean_ctor_set_uint8(v_reuseFailAlloc_2529_, sizeof(void*)*3, v_enabled_2513_);
v___x_2523_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
lean_object* v___x_2525_; 
if (v_isShared_2512_ == 0)
{
lean_ctor_set(v___x_2511_, 8, v___x_2523_);
v___x_2525_ = v___x_2511_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v_env_2498_);
lean_ctor_set(v_reuseFailAlloc_2528_, 1, v_messages_2499_);
lean_ctor_set(v_reuseFailAlloc_2528_, 2, v_scopes_2500_);
lean_ctor_set(v_reuseFailAlloc_2528_, 3, v_usedQuotCtxts_2501_);
lean_ctor_set(v_reuseFailAlloc_2528_, 4, v_nextMacroScope_2502_);
lean_ctor_set(v_reuseFailAlloc_2528_, 5, v_maxRecDepth_2503_);
lean_ctor_set(v_reuseFailAlloc_2528_, 6, v_ngen_2504_);
lean_ctor_set(v_reuseFailAlloc_2528_, 7, v_auxDeclNGen_2505_);
lean_ctor_set(v_reuseFailAlloc_2528_, 8, v___x_2523_);
lean_ctor_set(v_reuseFailAlloc_2528_, 9, v_traceState_2506_);
lean_ctor_set(v_reuseFailAlloc_2528_, 10, v_snapshotTasks_2507_);
lean_ctor_set(v_reuseFailAlloc_2528_, 11, v_prevLinterStates_2508_);
lean_ctor_set(v_reuseFailAlloc_2528_, 12, v_codeQualityEntryTasks_2509_);
v___x_2525_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2526_ = lean_st_ref_put(v___y_2489_, v___x_2525_);
v___x_2527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2520_);
return v___x_2527_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___redArg___boxed(lean_object* v_t_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_){
_start:
{
lean_object* v_res_2535_; 
v_res_2535_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___redArg(v_t_2532_, v___y_2533_);
lean_dec(v___y_2533_);
return v_res_2535_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; 
v___x_2536_ = lean_unsigned_to_nat(32u);
v___x_2537_ = lean_mk_empty_array_with_capacity(v___x_2536_);
v___x_2538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2538_, 0, v___x_2537_);
return v___x_2538_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__1(void){
_start:
{
size_t v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2539_ = ((size_t)5ULL);
v___x_2540_ = lean_unsigned_to_nat(0u);
v___x_2541_ = lean_unsigned_to_nat(32u);
v___x_2542_ = lean_mk_empty_array_with_capacity(v___x_2541_);
v___x_2543_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__0);
v___x_2544_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2544_, 0, v___x_2543_);
lean_ctor_set(v___x_2544_, 1, v___x_2542_);
lean_ctor_set(v___x_2544_, 2, v___x_2540_);
lean_ctor_set(v___x_2544_, 3, v___x_2540_);
lean_ctor_set_usize(v___x_2544_, 4, v___x_2539_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3(lean_object* v_t_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_){
_start:
{
lean_object* v___x_2549_; lean_object* v_infoState_2550_; uint8_t v_enabled_2551_; 
v___x_2549_ = lean_st_ref_get(v___y_2547_);
v_infoState_2550_ = lean_ctor_get(v___x_2549_, 8);
lean_inc_ref(v_infoState_2550_);
lean_dec(v___x_2549_);
v_enabled_2551_ = lean_ctor_get_uint8(v_infoState_2550_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2550_);
if (v_enabled_2551_ == 0)
{
lean_object* v___x_2552_; lean_object* v___x_2553_; 
lean_dec_ref(v_t_2545_);
v___x_2552_ = lean_box(0);
v___x_2553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2553_, 0, v___x_2552_);
return v___x_2553_;
}
else
{
lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; 
v___x_2554_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__1);
v___x_2555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2555_, 0, v_t_2545_);
lean_ctor_set(v___x_2555_, 1, v___x_2554_);
v___x_2556_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___redArg(v___x_2555_, v___y_2547_);
return v___x_2556_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___boxed(lean_object* v_t_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_){
_start:
{
lean_object* v_res_2561_; 
v_res_2561_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3(v_t_2557_, v___y_2558_, v___y_2559_);
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg(lean_object* v___x_2562_, lean_object* v_edited_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_){
_start:
{
lean_object* v_fst_2566_; lean_object* v_snd_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2591_; 
v_fst_2566_ = lean_ctor_get(v_a_2565_, 0);
v_snd_2567_ = lean_ctor_get(v_a_2565_, 1);
v_isSharedCheck_2591_ = !lean_is_exclusive(v_a_2565_);
if (v_isSharedCheck_2591_ == 0)
{
v___x_2569_ = v_a_2565_;
v_isShared_2570_ = v_isSharedCheck_2591_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_snd_2567_);
lean_inc(v_fst_2566_);
lean_dec(v_a_2565_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2591_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
uint8_t v___x_2571_; 
v___x_2571_ = lean_nat_dec_lt(v_snd_2567_, v___x_2562_);
if (v___x_2571_ == 0)
{
lean_object* v___x_2573_; 
if (v_isShared_2570_ == 0)
{
v___x_2573_ = v___x_2569_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v_fst_2566_);
lean_ctor_set(v_reuseFailAlloc_2574_, 1, v_snd_2567_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
else
{
lean_object* v___x_2575_; lean_object* v___x_2576_; uint8_t v___x_2577_; 
v___x_2575_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9));
v___x_2576_ = lean_array_get_borrowed(v___x_2575_, v_edited_2563_, v_snd_2567_);
v___x_2577_ = lean_string_dec_eq(v___x_2576_, v_a_2564_);
if (v___x_2577_ == 0)
{
uint8_t v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2581_; 
v___x_2578_ = 0;
v___x_2579_ = lean_box(v___x_2578_);
lean_inc(v___x_2576_);
if (v_isShared_2570_ == 0)
{
lean_ctor_set(v___x_2569_, 1, v___x_2576_);
lean_ctor_set(v___x_2569_, 0, v___x_2579_);
v___x_2581_ = v___x_2569_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v___x_2579_);
lean_ctor_set(v_reuseFailAlloc_2587_, 1, v___x_2576_);
v___x_2581_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2582_ = lean_array_push(v_fst_2566_, v___x_2581_);
v___x_2583_ = lean_unsigned_to_nat(1u);
v___x_2584_ = lean_nat_add(v_snd_2567_, v___x_2583_);
lean_dec(v_snd_2567_);
v___x_2585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2585_, 0, v___x_2582_);
lean_ctor_set(v___x_2585_, 1, v___x_2584_);
v_a_2565_ = v___x_2585_;
goto _start;
}
}
else
{
lean_object* v___x_2589_; 
if (v_isShared_2570_ == 0)
{
v___x_2589_ = v___x_2569_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2590_, 0, v_fst_2566_);
lean_ctor_set(v_reuseFailAlloc_2590_, 1, v_snd_2567_);
v___x_2589_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
return v___x_2589_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg___boxed(lean_object* v___x_2592_, lean_object* v_edited_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_){
_start:
{
lean_object* v_res_2596_; 
v_res_2596_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg(v___x_2592_, v_edited_2593_, v_a_2594_, v_a_2595_);
lean_dec_ref(v_a_2594_);
lean_dec_ref(v_edited_2593_);
lean_dec(v___x_2592_);
return v_res_2596_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg(lean_object* v___x_2597_, lean_object* v_original_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_){
_start:
{
lean_object* v_fst_2601_; lean_object* v_snd_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2626_; 
v_fst_2601_ = lean_ctor_get(v_a_2600_, 0);
v_snd_2602_ = lean_ctor_get(v_a_2600_, 1);
v_isSharedCheck_2626_ = !lean_is_exclusive(v_a_2600_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2604_ = v_a_2600_;
v_isShared_2605_ = v_isSharedCheck_2626_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_snd_2602_);
lean_inc(v_fst_2601_);
lean_dec(v_a_2600_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2626_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
uint8_t v___x_2606_; 
v___x_2606_ = lean_nat_dec_lt(v_snd_2602_, v___x_2597_);
if (v___x_2606_ == 0)
{
lean_object* v___x_2608_; 
if (v_isShared_2605_ == 0)
{
v___x_2608_ = v___x_2604_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_fst_2601_);
lean_ctor_set(v_reuseFailAlloc_2609_, 1, v_snd_2602_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
else
{
lean_object* v___x_2610_; lean_object* v___x_2611_; uint8_t v___x_2612_; 
v___x_2610_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9));
v___x_2611_ = lean_array_get_borrowed(v___x_2610_, v_original_2598_, v_snd_2602_);
v___x_2612_ = lean_string_dec_eq(v___x_2611_, v_a_2599_);
if (v___x_2612_ == 0)
{
uint8_t v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2616_; 
v___x_2613_ = 1;
v___x_2614_ = lean_box(v___x_2613_);
lean_inc(v___x_2611_);
if (v_isShared_2605_ == 0)
{
lean_ctor_set(v___x_2604_, 1, v___x_2611_);
lean_ctor_set(v___x_2604_, 0, v___x_2614_);
v___x_2616_ = v___x_2604_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v___x_2614_);
lean_ctor_set(v_reuseFailAlloc_2622_, 1, v___x_2611_);
v___x_2616_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; 
v___x_2617_ = lean_array_push(v_fst_2601_, v___x_2616_);
v___x_2618_ = lean_unsigned_to_nat(1u);
v___x_2619_ = lean_nat_add(v_snd_2602_, v___x_2618_);
lean_dec(v_snd_2602_);
v___x_2620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2620_, 0, v___x_2617_);
lean_ctor_set(v___x_2620_, 1, v___x_2619_);
v_a_2600_ = v___x_2620_;
goto _start;
}
}
else
{
lean_object* v___x_2624_; 
if (v_isShared_2605_ == 0)
{
v___x_2624_ = v___x_2604_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_fst_2601_);
lean_ctor_set(v_reuseFailAlloc_2625_, 1, v_snd_2602_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg___boxed(lean_object* v___x_2627_, lean_object* v_original_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_){
_start:
{
lean_object* v_res_2631_; 
v_res_2631_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg(v___x_2627_, v_original_2628_, v_a_2629_, v_a_2630_);
lean_dec_ref(v_a_2629_);
lean_dec_ref(v_original_2628_);
lean_dec(v___x_2627_);
return v_res_2631_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13_spec__24(lean_object* v___x_2632_, lean_object* v_original_2633_, lean_object* v___x_2634_, lean_object* v_edited_2635_, lean_object* v_as_2636_, size_t v_sz_2637_, size_t v_i_2638_, lean_object* v_b_2639_){
_start:
{
uint8_t v___x_2640_; 
v___x_2640_ = lean_usize_dec_lt(v_i_2638_, v_sz_2637_);
if (v___x_2640_ == 0)
{
return v_b_2639_;
}
else
{
lean_object* v_snd_2641_; lean_object* v_fst_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2689_; 
v_snd_2641_ = lean_ctor_get(v_b_2639_, 1);
v_fst_2642_ = lean_ctor_get(v_b_2639_, 0);
v_isSharedCheck_2689_ = !lean_is_exclusive(v_b_2639_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2644_ = v_b_2639_;
v_isShared_2645_ = v_isSharedCheck_2689_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_snd_2641_);
lean_inc(v_fst_2642_);
lean_dec(v_b_2639_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2689_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
lean_object* v_fst_2646_; lean_object* v_snd_2647_; lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2688_; 
v_fst_2646_ = lean_ctor_get(v_snd_2641_, 0);
v_snd_2647_ = lean_ctor_get(v_snd_2641_, 1);
v_isSharedCheck_2688_ = !lean_is_exclusive(v_snd_2641_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2649_ = v_snd_2641_;
v_isShared_2650_ = v_isSharedCheck_2688_;
goto v_resetjp_2648_;
}
else
{
lean_inc(v_snd_2647_);
lean_inc(v_fst_2646_);
lean_dec(v_snd_2641_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2688_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
lean_object* v_a_2651_; lean_object* v___x_2653_; 
v_a_2651_ = lean_array_uget_borrowed(v_as_2636_, v_i_2638_);
if (v_isShared_2650_ == 0)
{
lean_ctor_set(v___x_2649_, 1, v_fst_2646_);
lean_ctor_set(v___x_2649_, 0, v_fst_2642_);
v___x_2653_ = v___x_2649_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_fst_2642_);
lean_ctor_set(v_reuseFailAlloc_2687_, 1, v_fst_2646_);
v___x_2653_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
lean_object* v___x_2654_; lean_object* v_fst_2655_; lean_object* v_snd_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2686_; 
v___x_2654_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg(v___x_2632_, v_original_2633_, v_a_2651_, v___x_2653_);
v_fst_2655_ = lean_ctor_get(v___x_2654_, 0);
v_snd_2656_ = lean_ctor_get(v___x_2654_, 1);
v_isSharedCheck_2686_ = !lean_is_exclusive(v___x_2654_);
if (v_isSharedCheck_2686_ == 0)
{
v___x_2658_ = v___x_2654_;
v_isShared_2659_ = v_isSharedCheck_2686_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_snd_2656_);
lean_inc(v_fst_2655_);
lean_dec(v___x_2654_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2686_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
lean_object* v___x_2661_; 
if (v_isShared_2659_ == 0)
{
lean_ctor_set(v___x_2658_, 1, v_snd_2647_);
v___x_2661_ = v___x_2658_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v_fst_2655_);
lean_ctor_set(v_reuseFailAlloc_2685_, 1, v_snd_2647_);
v___x_2661_ = v_reuseFailAlloc_2685_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
lean_object* v___x_2662_; lean_object* v_fst_2663_; lean_object* v_snd_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2684_; 
v___x_2662_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg(v___x_2634_, v_edited_2635_, v_a_2651_, v___x_2661_);
v_fst_2663_ = lean_ctor_get(v___x_2662_, 0);
v_snd_2664_ = lean_ctor_get(v___x_2662_, 1);
v_isSharedCheck_2684_ = !lean_is_exclusive(v___x_2662_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2666_ = v___x_2662_;
v_isShared_2667_ = v_isSharedCheck_2684_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_snd_2664_);
lean_inc(v_fst_2663_);
lean_dec(v___x_2662_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2684_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
uint8_t v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2671_; 
v___x_2668_ = 2;
v___x_2669_ = lean_box(v___x_2668_);
lean_inc(v_a_2651_);
if (v_isShared_2667_ == 0)
{
lean_ctor_set(v___x_2666_, 1, v_a_2651_);
lean_ctor_set(v___x_2666_, 0, v___x_2669_);
v___x_2671_ = v___x_2666_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v___x_2669_);
lean_ctor_set(v_reuseFailAlloc_2683_, 1, v_a_2651_);
v___x_2671_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2677_; 
v___x_2672_ = lean_array_push(v_fst_2663_, v___x_2671_);
v___x_2673_ = lean_unsigned_to_nat(1u);
v___x_2674_ = lean_nat_add(v_snd_2656_, v___x_2673_);
lean_dec(v_snd_2656_);
v___x_2675_ = lean_nat_add(v_snd_2664_, v___x_2673_);
lean_dec(v_snd_2664_);
if (v_isShared_2645_ == 0)
{
lean_ctor_set(v___x_2644_, 1, v___x_2675_);
lean_ctor_set(v___x_2644_, 0, v___x_2674_);
v___x_2677_ = v___x_2644_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v___x_2674_);
lean_ctor_set(v_reuseFailAlloc_2682_, 1, v___x_2675_);
v___x_2677_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
lean_object* v___x_2678_; size_t v___x_2679_; size_t v___x_2680_; 
v___x_2678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2678_, 0, v___x_2672_);
lean_ctor_set(v___x_2678_, 1, v___x_2677_);
v___x_2679_ = ((size_t)1ULL);
v___x_2680_ = lean_usize_add(v_i_2638_, v___x_2679_);
v_i_2638_ = v___x_2680_;
v_b_2639_ = v___x_2678_;
goto _start;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13_spec__24___boxed(lean_object* v___x_2690_, lean_object* v_original_2691_, lean_object* v___x_2692_, lean_object* v_edited_2693_, lean_object* v_as_2694_, lean_object* v_sz_2695_, lean_object* v_i_2696_, lean_object* v_b_2697_){
_start:
{
size_t v_sz_boxed_2698_; size_t v_i_boxed_2699_; lean_object* v_res_2700_; 
v_sz_boxed_2698_ = lean_unbox_usize(v_sz_2695_);
lean_dec(v_sz_2695_);
v_i_boxed_2699_ = lean_unbox_usize(v_i_2696_);
lean_dec(v_i_2696_);
v_res_2700_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13_spec__24(v___x_2690_, v_original_2691_, v___x_2692_, v_edited_2693_, v_as_2694_, v_sz_boxed_2698_, v_i_boxed_2699_, v_b_2697_);
lean_dec_ref(v_as_2694_);
lean_dec_ref(v_edited_2693_);
lean_dec(v___x_2692_);
lean_dec_ref(v_original_2691_);
lean_dec(v___x_2690_);
return v_res_2700_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13(lean_object* v___x_2701_, lean_object* v_edited_2702_, lean_object* v___x_2703_, lean_object* v_original_2704_, lean_object* v_as_2705_, size_t v_sz_2706_, size_t v_i_2707_, lean_object* v_b_2708_){
_start:
{
uint8_t v___x_2709_; 
v___x_2709_ = lean_usize_dec_lt(v_i_2707_, v_sz_2706_);
if (v___x_2709_ == 0)
{
return v_b_2708_;
}
else
{
lean_object* v_snd_2710_; lean_object* v_fst_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2758_; 
v_snd_2710_ = lean_ctor_get(v_b_2708_, 1);
v_fst_2711_ = lean_ctor_get(v_b_2708_, 0);
v_isSharedCheck_2758_ = !lean_is_exclusive(v_b_2708_);
if (v_isSharedCheck_2758_ == 0)
{
v___x_2713_ = v_b_2708_;
v_isShared_2714_ = v_isSharedCheck_2758_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_snd_2710_);
lean_inc(v_fst_2711_);
lean_dec(v_b_2708_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2758_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v_fst_2715_; lean_object* v_snd_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2757_; 
v_fst_2715_ = lean_ctor_get(v_snd_2710_, 0);
v_snd_2716_ = lean_ctor_get(v_snd_2710_, 1);
v_isSharedCheck_2757_ = !lean_is_exclusive(v_snd_2710_);
if (v_isSharedCheck_2757_ == 0)
{
v___x_2718_ = v_snd_2710_;
v_isShared_2719_ = v_isSharedCheck_2757_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_snd_2716_);
lean_inc(v_fst_2715_);
lean_dec(v_snd_2710_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2757_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v_a_2720_; lean_object* v___x_2722_; 
v_a_2720_ = lean_array_uget_borrowed(v_as_2705_, v_i_2707_);
if (v_isShared_2719_ == 0)
{
lean_ctor_set(v___x_2718_, 1, v_fst_2715_);
lean_ctor_set(v___x_2718_, 0, v_fst_2711_);
v___x_2722_ = v___x_2718_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_fst_2711_);
lean_ctor_set(v_reuseFailAlloc_2756_, 1, v_fst_2715_);
v___x_2722_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
lean_object* v___x_2723_; lean_object* v_fst_2724_; lean_object* v_snd_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2755_; 
v___x_2723_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg(v___x_2703_, v_original_2704_, v_a_2720_, v___x_2722_);
v_fst_2724_ = lean_ctor_get(v___x_2723_, 0);
v_snd_2725_ = lean_ctor_get(v___x_2723_, 1);
v_isSharedCheck_2755_ = !lean_is_exclusive(v___x_2723_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2727_ = v___x_2723_;
v_isShared_2728_ = v_isSharedCheck_2755_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_snd_2725_);
lean_inc(v_fst_2724_);
lean_dec(v___x_2723_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2755_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2730_; 
if (v_isShared_2728_ == 0)
{
lean_ctor_set(v___x_2727_, 1, v_snd_2716_);
v___x_2730_ = v___x_2727_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_fst_2724_);
lean_ctor_set(v_reuseFailAlloc_2754_, 1, v_snd_2716_);
v___x_2730_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
lean_object* v___x_2731_; lean_object* v_fst_2732_; lean_object* v_snd_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2753_; 
v___x_2731_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg(v___x_2701_, v_edited_2702_, v_a_2720_, v___x_2730_);
v_fst_2732_ = lean_ctor_get(v___x_2731_, 0);
v_snd_2733_ = lean_ctor_get(v___x_2731_, 1);
v_isSharedCheck_2753_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2735_ = v___x_2731_;
v_isShared_2736_ = v_isSharedCheck_2753_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_snd_2733_);
lean_inc(v_fst_2732_);
lean_dec(v___x_2731_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2753_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
uint8_t v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2740_; 
v___x_2737_ = 2;
v___x_2738_ = lean_box(v___x_2737_);
lean_inc(v_a_2720_);
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 1, v_a_2720_);
lean_ctor_set(v___x_2735_, 0, v___x_2738_);
v___x_2740_ = v___x_2735_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v___x_2738_);
lean_ctor_set(v_reuseFailAlloc_2752_, 1, v_a_2720_);
v___x_2740_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2746_; 
v___x_2741_ = lean_array_push(v_fst_2732_, v___x_2740_);
v___x_2742_ = lean_unsigned_to_nat(1u);
v___x_2743_ = lean_nat_add(v_snd_2725_, v___x_2742_);
lean_dec(v_snd_2725_);
v___x_2744_ = lean_nat_add(v_snd_2733_, v___x_2742_);
lean_dec(v_snd_2733_);
if (v_isShared_2714_ == 0)
{
lean_ctor_set(v___x_2713_, 1, v___x_2744_);
lean_ctor_set(v___x_2713_, 0, v___x_2743_);
v___x_2746_ = v___x_2713_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v___x_2743_);
lean_ctor_set(v_reuseFailAlloc_2751_, 1, v___x_2744_);
v___x_2746_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
lean_object* v___x_2747_; size_t v___x_2748_; size_t v___x_2749_; lean_object* v___x_2750_; 
v___x_2747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2747_, 0, v___x_2741_);
lean_ctor_set(v___x_2747_, 1, v___x_2746_);
v___x_2748_ = ((size_t)1ULL);
v___x_2749_ = lean_usize_add(v_i_2707_, v___x_2748_);
v___x_2750_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13_spec__24(v___x_2703_, v_original_2704_, v___x_2701_, v_edited_2702_, v_as_2705_, v_sz_2706_, v___x_2749_, v___x_2747_);
return v___x_2750_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13___boxed(lean_object* v___x_2759_, lean_object* v_edited_2760_, lean_object* v___x_2761_, lean_object* v_original_2762_, lean_object* v_as_2763_, lean_object* v_sz_2764_, lean_object* v_i_2765_, lean_object* v_b_2766_){
_start:
{
size_t v_sz_boxed_2767_; size_t v_i_boxed_2768_; lean_object* v_res_2769_; 
v_sz_boxed_2767_ = lean_unbox_usize(v_sz_2764_);
lean_dec(v_sz_2764_);
v_i_boxed_2768_ = lean_unbox_usize(v_i_2765_);
lean_dec(v_i_2765_);
v_res_2769_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13(v___x_2759_, v_edited_2760_, v___x_2761_, v_original_2762_, v_as_2763_, v_sz_boxed_2767_, v_i_boxed_2768_, v_b_2766_);
lean_dec_ref(v_as_2763_);
lean_dec_ref(v_original_2762_);
lean_dec(v___x_2761_);
lean_dec_ref(v_edited_2760_);
lean_dec(v___x_2759_);
return v_res_2769_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___redArg(lean_object* v___x_2770_, lean_object* v_original_2771_, lean_object* v_a_2772_){
_start:
{
lean_object* v_fst_2773_; lean_object* v_snd_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2793_; 
v_fst_2773_ = lean_ctor_get(v_a_2772_, 0);
v_snd_2774_ = lean_ctor_get(v_a_2772_, 1);
v_isSharedCheck_2793_ = !lean_is_exclusive(v_a_2772_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2776_ = v_a_2772_;
v_isShared_2777_ = v_isSharedCheck_2793_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_snd_2774_);
lean_inc(v_fst_2773_);
lean_dec(v_a_2772_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2793_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
uint8_t v___x_2778_; 
v___x_2778_ = lean_nat_dec_lt(v_snd_2774_, v___x_2770_);
if (v___x_2778_ == 0)
{
lean_object* v___x_2780_; 
if (v_isShared_2777_ == 0)
{
v___x_2780_ = v___x_2776_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v_fst_2773_);
lean_ctor_set(v_reuseFailAlloc_2781_, 1, v_snd_2774_);
v___x_2780_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
return v___x_2780_;
}
}
else
{
uint8_t v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2786_; 
v___x_2782_ = 1;
v___x_2783_ = lean_array_fget_borrowed(v_original_2771_, v_snd_2774_);
v___x_2784_ = lean_box(v___x_2782_);
lean_inc(v___x_2783_);
if (v_isShared_2777_ == 0)
{
lean_ctor_set(v___x_2776_, 1, v___x_2783_);
lean_ctor_set(v___x_2776_, 0, v___x_2784_);
v___x_2786_ = v___x_2776_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v___x_2784_);
lean_ctor_set(v_reuseFailAlloc_2792_, 1, v___x_2783_);
v___x_2786_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; 
v___x_2787_ = lean_array_push(v_fst_2773_, v___x_2786_);
v___x_2788_ = lean_unsigned_to_nat(1u);
v___x_2789_ = lean_nat_add(v_snd_2774_, v___x_2788_);
lean_dec(v_snd_2774_);
v___x_2790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2790_, 0, v___x_2787_);
lean_ctor_set(v___x_2790_, 1, v___x_2789_);
v_a_2772_ = v___x_2790_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___redArg___boxed(lean_object* v___x_2794_, lean_object* v_original_2795_, lean_object* v_a_2796_){
_start:
{
lean_object* v_res_2797_; 
v_res_2797_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___redArg(v___x_2794_, v_original_2795_, v_a_2796_);
lean_dec_ref(v_original_2795_);
lean_dec(v___x_2794_);
return v_res_2797_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__17(size_t v_sz_2798_, size_t v_i_2799_, lean_object* v_bs_2800_){
_start:
{
uint8_t v___x_2801_; 
v___x_2801_ = lean_usize_dec_lt(v_i_2799_, v_sz_2798_);
if (v___x_2801_ == 0)
{
return v_bs_2800_;
}
else
{
lean_object* v_v_2802_; lean_object* v___x_2803_; lean_object* v_bs_x27_2804_; uint8_t v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; size_t v___x_2808_; size_t v___x_2809_; lean_object* v___x_2810_; 
v_v_2802_ = lean_array_uget(v_bs_2800_, v_i_2799_);
v___x_2803_ = lean_unsigned_to_nat(0u);
v_bs_x27_2804_ = lean_array_uset(v_bs_2800_, v_i_2799_, v___x_2803_);
v___x_2805_ = 0;
v___x_2806_ = lean_box(v___x_2805_);
v___x_2807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2806_);
lean_ctor_set(v___x_2807_, 1, v_v_2802_);
v___x_2808_ = ((size_t)1ULL);
v___x_2809_ = lean_usize_add(v_i_2799_, v___x_2808_);
v___x_2810_ = lean_array_uset(v_bs_x27_2804_, v_i_2799_, v___x_2807_);
v_i_2799_ = v___x_2809_;
v_bs_2800_ = v___x_2810_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__17___boxed(lean_object* v_sz_2812_, lean_object* v_i_2813_, lean_object* v_bs_2814_){
_start:
{
size_t v_sz_boxed_2815_; size_t v_i_boxed_2816_; lean_object* v_res_2817_; 
v_sz_boxed_2815_ = lean_unbox_usize(v_sz_2812_);
lean_dec(v_sz_2812_);
v_i_boxed_2816_ = lean_unbox_usize(v_i_2813_);
lean_dec(v_i_2813_);
v_res_2817_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__17(v_sz_boxed_2815_, v_i_boxed_2816_, v_bs_2814_);
return v_res_2817_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___redArg(lean_object* v___x_2818_, lean_object* v_edited_2819_, lean_object* v_a_2820_){
_start:
{
lean_object* v_fst_2821_; lean_object* v_snd_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2841_; 
v_fst_2821_ = lean_ctor_get(v_a_2820_, 0);
v_snd_2822_ = lean_ctor_get(v_a_2820_, 1);
v_isSharedCheck_2841_ = !lean_is_exclusive(v_a_2820_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2824_ = v_a_2820_;
v_isShared_2825_ = v_isSharedCheck_2841_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_snd_2822_);
lean_inc(v_fst_2821_);
lean_dec(v_a_2820_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2841_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
uint8_t v___x_2826_; 
v___x_2826_ = lean_nat_dec_lt(v_snd_2822_, v___x_2818_);
if (v___x_2826_ == 0)
{
lean_object* v___x_2828_; 
if (v_isShared_2825_ == 0)
{
v___x_2828_ = v___x_2824_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_fst_2821_);
lean_ctor_set(v_reuseFailAlloc_2829_, 1, v_snd_2822_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
return v___x_2828_;
}
}
else
{
uint8_t v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2834_; 
v___x_2830_ = 0;
v___x_2831_ = lean_array_fget_borrowed(v_edited_2819_, v_snd_2822_);
v___x_2832_ = lean_box(v___x_2830_);
lean_inc(v___x_2831_);
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 1, v___x_2831_);
lean_ctor_set(v___x_2824_, 0, v___x_2832_);
v___x_2834_ = v___x_2824_;
goto v_reusejp_2833_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v___x_2832_);
lean_ctor_set(v_reuseFailAlloc_2840_, 1, v___x_2831_);
v___x_2834_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2833_;
}
v_reusejp_2833_:
{
lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
v___x_2835_ = lean_array_push(v_fst_2821_, v___x_2834_);
v___x_2836_ = lean_unsigned_to_nat(1u);
v___x_2837_ = lean_nat_add(v_snd_2822_, v___x_2836_);
lean_dec(v_snd_2822_);
v___x_2838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2838_, 0, v___x_2835_);
lean_ctor_set(v___x_2838_, 1, v___x_2837_);
v_a_2820_ = v___x_2838_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___redArg___boxed(lean_object* v___x_2842_, lean_object* v_edited_2843_, lean_object* v_a_2844_){
_start:
{
lean_object* v_res_2845_; 
v_res_2845_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___redArg(v___x_2842_, v_edited_2843_, v_a_2844_);
lean_dec_ref(v_edited_2843_);
lean_dec(v___x_2842_);
return v_res_2845_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__17(lean_object* v_x_2846_, lean_object* v_x_2847_){
_start:
{
if (lean_obj_tag(v_x_2847_) == 0)
{
lean_inc(v_x_2846_);
return v_x_2846_;
}
else
{
lean_object* v_key_2848_; lean_object* v_value_2849_; lean_object* v_tail_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; 
v_key_2848_ = lean_ctor_get(v_x_2847_, 0);
v_value_2849_ = lean_ctor_get(v_x_2847_, 1);
v_tail_2850_ = lean_ctor_get(v_x_2847_, 2);
v___x_2851_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__17(v_x_2846_, v_tail_2850_);
lean_inc(v_value_2849_);
lean_inc(v_key_2848_);
v___x_2852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2852_, 0, v_key_2848_);
lean_ctor_set(v___x_2852_, 1, v_value_2849_);
v___x_2853_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2853_, 0, v___x_2852_);
lean_ctor_set(v___x_2853_, 1, v___x_2851_);
return v___x_2853_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__17___boxed(lean_object* v_x_2854_, lean_object* v_x_2855_){
_start:
{
lean_object* v_res_2856_; 
v_res_2856_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__17(v_x_2854_, v_x_2855_);
lean_dec(v_x_2855_);
lean_dec(v_x_2854_);
return v_res_2856_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__18(lean_object* v_as_2857_, size_t v_i_2858_, size_t v_stop_2859_, lean_object* v_b_2860_){
_start:
{
uint8_t v___x_2861_; 
v___x_2861_ = lean_usize_dec_eq(v_i_2858_, v_stop_2859_);
if (v___x_2861_ == 0)
{
size_t v___x_2862_; size_t v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; 
v___x_2862_ = ((size_t)1ULL);
v___x_2863_ = lean_usize_sub(v_i_2858_, v___x_2862_);
v___x_2864_ = lean_array_uget_borrowed(v_as_2857_, v___x_2863_);
v___x_2865_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__17(v_b_2860_, v___x_2864_);
lean_dec(v_b_2860_);
v_i_2858_ = v___x_2863_;
v_b_2860_ = v___x_2865_;
goto _start;
}
else
{
return v_b_2860_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__18___boxed(lean_object* v_as_2867_, lean_object* v_i_2868_, lean_object* v_stop_2869_, lean_object* v_b_2870_){
_start:
{
size_t v_i_boxed_2871_; size_t v_stop_boxed_2872_; lean_object* v_res_2873_; 
v_i_boxed_2871_ = lean_unbox_usize(v_i_2868_);
lean_dec(v_i_2868_);
v_stop_boxed_2872_ = lean_unbox_usize(v_stop_2869_);
lean_dec(v_stop_2869_);
v_res_2873_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__18(v_as_2867_, v_i_boxed_2871_, v_stop_boxed_2872_, v_b_2870_);
lean_dec_ref(v_as_2867_);
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14_spec__18(lean_object* v_left_2874_, lean_object* v_right_2875_, lean_object* v_pref_2876_){
_start:
{
lean_object* v_start_2877_; lean_object* v_stop_2878_; lean_object* v_i_2879_; lean_object* v___x_2885_; uint8_t v___x_2886_; 
v_start_2877_ = lean_ctor_get(v_left_2874_, 1);
v_stop_2878_ = lean_ctor_get(v_left_2874_, 2);
v_i_2879_ = lean_array_get_size(v_pref_2876_);
v___x_2885_ = lean_nat_sub(v_stop_2878_, v_start_2877_);
v___x_2886_ = lean_nat_dec_lt(v_i_2879_, v___x_2885_);
lean_dec(v___x_2885_);
if (v___x_2886_ == 0)
{
goto v___jp_2880_;
}
else
{
lean_object* v_start_2887_; lean_object* v_stop_2888_; lean_object* v___x_2889_; uint8_t v___x_2890_; 
v_start_2887_ = lean_ctor_get(v_right_2875_, 1);
v_stop_2888_ = lean_ctor_get(v_right_2875_, 2);
v___x_2889_ = lean_nat_sub(v_stop_2888_, v_start_2887_);
v___x_2890_ = lean_nat_dec_lt(v_i_2879_, v___x_2889_);
lean_dec(v___x_2889_);
if (v___x_2890_ == 0)
{
goto v___jp_2880_;
}
else
{
lean_object* v___x_2891_; lean_object* v___x_2892_; uint8_t v___x_2893_; 
v___x_2891_ = l_Subarray_get___redArg(v_left_2874_, v_i_2879_);
v___x_2892_ = l_Subarray_get___redArg(v_right_2875_, v_i_2879_);
v___x_2893_ = lean_string_dec_eq(v___x_2891_, v___x_2892_);
lean_dec(v___x_2892_);
if (v___x_2893_ == 0)
{
lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; 
lean_dec(v___x_2891_);
v___x_2894_ = l_Subarray_drop___redArg(v_left_2874_, v_i_2879_);
v___x_2895_ = l_Subarray_drop___redArg(v_right_2875_, v_i_2879_);
v___x_2896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2896_, 0, v___x_2894_);
lean_ctor_set(v___x_2896_, 1, v___x_2895_);
v___x_2897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2897_, 0, v_pref_2876_);
lean_ctor_set(v___x_2897_, 1, v___x_2896_);
return v___x_2897_;
}
else
{
lean_object* v___x_2898_; 
v___x_2898_ = lean_array_push(v_pref_2876_, v___x_2891_);
v_pref_2876_ = v___x_2898_;
goto _start;
}
}
}
v___jp_2880_:
{
lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
v___x_2881_ = l_Subarray_drop___redArg(v_left_2874_, v_i_2879_);
v___x_2882_ = l_Subarray_drop___redArg(v_right_2875_, v_i_2879_);
v___x_2883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2881_);
lean_ctor_set(v___x_2883_, 1, v___x_2882_);
v___x_2884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2884_, 0, v_pref_2876_);
lean_ctor_set(v___x_2884_, 1, v___x_2883_);
return v___x_2884_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14(lean_object* v_left_2902_, lean_object* v_right_2903_){
_start:
{
lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2904_ = ((lean_object*)(l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14___closed__0));
v___x_2905_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14_spec__18(v_left_2902_, v_right_2903_, v___x_2904_);
return v___x_2905_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__39___redArg(lean_object* v_a_2906_, lean_object* v_b_2907_, lean_object* v_x_2908_){
_start:
{
if (lean_obj_tag(v_x_2908_) == 0)
{
lean_dec(v_b_2907_);
lean_dec_ref(v_a_2906_);
return v_x_2908_;
}
else
{
lean_object* v_key_2909_; lean_object* v_value_2910_; lean_object* v_tail_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_2923_; 
v_key_2909_ = lean_ctor_get(v_x_2908_, 0);
v_value_2910_ = lean_ctor_get(v_x_2908_, 1);
v_tail_2911_ = lean_ctor_get(v_x_2908_, 2);
v_isSharedCheck_2923_ = !lean_is_exclusive(v_x_2908_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2913_ = v_x_2908_;
v_isShared_2914_ = v_isSharedCheck_2923_;
goto v_resetjp_2912_;
}
else
{
lean_inc(v_tail_2911_);
lean_inc(v_value_2910_);
lean_inc(v_key_2909_);
lean_dec(v_x_2908_);
v___x_2913_ = lean_box(0);
v_isShared_2914_ = v_isSharedCheck_2923_;
goto v_resetjp_2912_;
}
v_resetjp_2912_:
{
uint8_t v___x_2915_; 
v___x_2915_ = lean_string_dec_eq(v_key_2909_, v_a_2906_);
if (v___x_2915_ == 0)
{
lean_object* v___x_2916_; lean_object* v___x_2918_; 
v___x_2916_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__39___redArg(v_a_2906_, v_b_2907_, v_tail_2911_);
if (v_isShared_2914_ == 0)
{
lean_ctor_set(v___x_2913_, 2, v___x_2916_);
v___x_2918_ = v___x_2913_;
goto v_reusejp_2917_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v_key_2909_);
lean_ctor_set(v_reuseFailAlloc_2919_, 1, v_value_2910_);
lean_ctor_set(v_reuseFailAlloc_2919_, 2, v___x_2916_);
v___x_2918_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2917_;
}
v_reusejp_2917_:
{
return v___x_2918_;
}
}
else
{
lean_object* v___x_2921_; 
lean_dec(v_value_2910_);
lean_dec(v_key_2909_);
if (v_isShared_2914_ == 0)
{
lean_ctor_set(v___x_2913_, 1, v_b_2907_);
lean_ctor_set(v___x_2913_, 0, v_a_2906_);
v___x_2921_ = v___x_2913_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2922_; 
v_reuseFailAlloc_2922_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2922_, 0, v_a_2906_);
lean_ctor_set(v_reuseFailAlloc_2922_, 1, v_b_2907_);
lean_ctor_set(v_reuseFailAlloc_2922_, 2, v_tail_2911_);
v___x_2921_ = v_reuseFailAlloc_2922_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
return v___x_2921_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44_spec__46___redArg(lean_object* v_x_2924_, lean_object* v_x_2925_){
_start:
{
if (lean_obj_tag(v_x_2925_) == 0)
{
return v_x_2924_;
}
else
{
lean_object* v_key_2926_; lean_object* v_value_2927_; lean_object* v_tail_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2951_; 
v_key_2926_ = lean_ctor_get(v_x_2925_, 0);
v_value_2927_ = lean_ctor_get(v_x_2925_, 1);
v_tail_2928_ = lean_ctor_get(v_x_2925_, 2);
v_isSharedCheck_2951_ = !lean_is_exclusive(v_x_2925_);
if (v_isSharedCheck_2951_ == 0)
{
v___x_2930_ = v_x_2925_;
v_isShared_2931_ = v_isSharedCheck_2951_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_tail_2928_);
lean_inc(v_value_2927_);
lean_inc(v_key_2926_);
lean_dec(v_x_2925_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2951_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v___x_2932_; uint64_t v___x_2933_; uint64_t v___x_2934_; uint64_t v___x_2935_; uint64_t v_fold_2936_; uint64_t v___x_2937_; uint64_t v___x_2938_; uint64_t v___x_2939_; size_t v___x_2940_; size_t v___x_2941_; size_t v___x_2942_; size_t v___x_2943_; size_t v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2947_; 
v___x_2932_ = lean_array_get_size(v_x_2924_);
v___x_2933_ = lean_string_hash(v_key_2926_);
v___x_2934_ = 32ULL;
v___x_2935_ = lean_uint64_shift_right(v___x_2933_, v___x_2934_);
v_fold_2936_ = lean_uint64_xor(v___x_2933_, v___x_2935_);
v___x_2937_ = 16ULL;
v___x_2938_ = lean_uint64_shift_right(v_fold_2936_, v___x_2937_);
v___x_2939_ = lean_uint64_xor(v_fold_2936_, v___x_2938_);
v___x_2940_ = lean_uint64_to_usize(v___x_2939_);
v___x_2941_ = lean_usize_of_nat(v___x_2932_);
v___x_2942_ = ((size_t)1ULL);
v___x_2943_ = lean_usize_sub(v___x_2941_, v___x_2942_);
v___x_2944_ = lean_usize_land(v___x_2940_, v___x_2943_);
v___x_2945_ = lean_array_uget_borrowed(v_x_2924_, v___x_2944_);
lean_inc(v___x_2945_);
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 2, v___x_2945_);
v___x_2947_ = v___x_2930_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_key_2926_);
lean_ctor_set(v_reuseFailAlloc_2950_, 1, v_value_2927_);
lean_ctor_set(v_reuseFailAlloc_2950_, 2, v___x_2945_);
v___x_2947_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
lean_object* v___x_2948_; 
v___x_2948_ = lean_array_uset(v_x_2924_, v___x_2944_, v___x_2947_);
v_x_2924_ = v___x_2948_;
v_x_2925_ = v_tail_2928_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44___redArg(lean_object* v_i_2952_, lean_object* v_source_2953_, lean_object* v_target_2954_){
_start:
{
lean_object* v___x_2955_; uint8_t v___x_2956_; 
v___x_2955_ = lean_array_get_size(v_source_2953_);
v___x_2956_ = lean_nat_dec_lt(v_i_2952_, v___x_2955_);
if (v___x_2956_ == 0)
{
lean_dec_ref(v_source_2953_);
lean_dec(v_i_2952_);
return v_target_2954_;
}
else
{
lean_object* v_es_2957_; lean_object* v___x_2958_; lean_object* v_source_2959_; lean_object* v_target_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
v_es_2957_ = lean_array_fget(v_source_2953_, v_i_2952_);
v___x_2958_ = lean_box(0);
v_source_2959_ = lean_array_fset(v_source_2953_, v_i_2952_, v___x_2958_);
v_target_2960_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44_spec__46___redArg(v_target_2954_, v_es_2957_);
v___x_2961_ = lean_unsigned_to_nat(1u);
v___x_2962_ = lean_nat_add(v_i_2952_, v___x_2961_);
lean_dec(v_i_2952_);
v_i_2952_ = v___x_2962_;
v_source_2953_ = v_source_2959_;
v_target_2954_ = v_target_2960_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38___redArg(lean_object* v_data_2964_){
_start:
{
lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v_nbuckets_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2965_ = lean_array_get_size(v_data_2964_);
v___x_2966_ = lean_unsigned_to_nat(2u);
v_nbuckets_2967_ = lean_nat_mul(v___x_2965_, v___x_2966_);
v___x_2968_ = lean_unsigned_to_nat(0u);
v___x_2969_ = lean_box(0);
v___x_2970_ = lean_mk_array(v_nbuckets_2967_, v___x_2969_);
v___x_2971_ = lean_array_propagate_mark(v_data_2964_, v___x_2970_);
v___x_2972_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44___redArg(v___x_2968_, v_data_2964_, v___x_2971_);
return v___x_2972_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___redArg(lean_object* v_a_2973_, lean_object* v_x_2974_){
_start:
{
if (lean_obj_tag(v_x_2974_) == 0)
{
uint8_t v___x_2975_; 
v___x_2975_ = 0;
return v___x_2975_;
}
else
{
lean_object* v_key_2976_; lean_object* v_tail_2977_; uint8_t v___x_2978_; 
v_key_2976_ = lean_ctor_get(v_x_2974_, 0);
v_tail_2977_ = lean_ctor_get(v_x_2974_, 2);
v___x_2978_ = lean_string_dec_eq(v_key_2976_, v_a_2973_);
if (v___x_2978_ == 0)
{
v_x_2974_ = v_tail_2977_;
goto _start;
}
else
{
return v___x_2978_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___redArg___boxed(lean_object* v_a_2980_, lean_object* v_x_2981_){
_start:
{
uint8_t v_res_2982_; lean_object* v_r_2983_; 
v_res_2982_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___redArg(v_a_2980_, v_x_2981_);
lean_dec(v_x_2981_);
lean_dec_ref(v_a_2980_);
v_r_2983_ = lean_box(v_res_2982_);
return v_r_2983_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26___redArg(lean_object* v_m_2984_, lean_object* v_a_2985_, lean_object* v_b_2986_){
_start:
{
lean_object* v_size_2987_; lean_object* v_buckets_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_3031_; 
v_size_2987_ = lean_ctor_get(v_m_2984_, 0);
v_buckets_2988_ = lean_ctor_get(v_m_2984_, 1);
v_isSharedCheck_3031_ = !lean_is_exclusive(v_m_2984_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_2990_ = v_m_2984_;
v_isShared_2991_ = v_isSharedCheck_3031_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_buckets_2988_);
lean_inc(v_size_2987_);
lean_dec(v_m_2984_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_3031_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2992_; uint64_t v___x_2993_; uint64_t v___x_2994_; uint64_t v___x_2995_; uint64_t v_fold_2996_; uint64_t v___x_2997_; uint64_t v___x_2998_; uint64_t v___x_2999_; size_t v___x_3000_; size_t v___x_3001_; size_t v___x_3002_; size_t v___x_3003_; size_t v___x_3004_; lean_object* v_bkt_3005_; uint8_t v___x_3006_; 
v___x_2992_ = lean_array_get_size(v_buckets_2988_);
v___x_2993_ = lean_string_hash(v_a_2985_);
v___x_2994_ = 32ULL;
v___x_2995_ = lean_uint64_shift_right(v___x_2993_, v___x_2994_);
v_fold_2996_ = lean_uint64_xor(v___x_2993_, v___x_2995_);
v___x_2997_ = 16ULL;
v___x_2998_ = lean_uint64_shift_right(v_fold_2996_, v___x_2997_);
v___x_2999_ = lean_uint64_xor(v_fold_2996_, v___x_2998_);
v___x_3000_ = lean_uint64_to_usize(v___x_2999_);
v___x_3001_ = lean_usize_of_nat(v___x_2992_);
v___x_3002_ = ((size_t)1ULL);
v___x_3003_ = lean_usize_sub(v___x_3001_, v___x_3002_);
v___x_3004_ = lean_usize_land(v___x_3000_, v___x_3003_);
v_bkt_3005_ = lean_array_uget_borrowed(v_buckets_2988_, v___x_3004_);
v___x_3006_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___redArg(v_a_2985_, v_bkt_3005_);
if (v___x_3006_ == 0)
{
lean_object* v___x_3007_; lean_object* v_size_x27_3008_; lean_object* v___x_3009_; lean_object* v_buckets_x27_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; uint8_t v___x_3016_; 
v___x_3007_ = lean_unsigned_to_nat(1u);
v_size_x27_3008_ = lean_nat_add(v_size_2987_, v___x_3007_);
lean_dec(v_size_2987_);
lean_inc(v_bkt_3005_);
v___x_3009_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3009_, 0, v_a_2985_);
lean_ctor_set(v___x_3009_, 1, v_b_2986_);
lean_ctor_set(v___x_3009_, 2, v_bkt_3005_);
v_buckets_x27_3010_ = lean_array_uset(v_buckets_2988_, v___x_3004_, v___x_3009_);
v___x_3011_ = lean_unsigned_to_nat(4u);
v___x_3012_ = lean_nat_mul(v_size_x27_3008_, v___x_3011_);
v___x_3013_ = lean_unsigned_to_nat(3u);
v___x_3014_ = lean_nat_div(v___x_3012_, v___x_3013_);
lean_dec(v___x_3012_);
v___x_3015_ = lean_array_get_size(v_buckets_x27_3010_);
v___x_3016_ = lean_nat_dec_le(v___x_3014_, v___x_3015_);
lean_dec(v___x_3014_);
if (v___x_3016_ == 0)
{
lean_object* v_val_3017_; lean_object* v___x_3019_; 
v_val_3017_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38___redArg(v_buckets_x27_3010_);
if (v_isShared_2991_ == 0)
{
lean_ctor_set(v___x_2990_, 1, v_val_3017_);
lean_ctor_set(v___x_2990_, 0, v_size_x27_3008_);
v___x_3019_ = v___x_2990_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v_size_x27_3008_);
lean_ctor_set(v_reuseFailAlloc_3020_, 1, v_val_3017_);
v___x_3019_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
return v___x_3019_;
}
}
else
{
lean_object* v___x_3022_; 
if (v_isShared_2991_ == 0)
{
lean_ctor_set(v___x_2990_, 1, v_buckets_x27_3010_);
lean_ctor_set(v___x_2990_, 0, v_size_x27_3008_);
v___x_3022_ = v___x_2990_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v_size_x27_3008_);
lean_ctor_set(v_reuseFailAlloc_3023_, 1, v_buckets_x27_3010_);
v___x_3022_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
return v___x_3022_;
}
}
}
else
{
lean_object* v___x_3024_; lean_object* v_buckets_x27_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3029_; 
lean_inc(v_bkt_3005_);
v___x_3024_ = lean_box(0);
v_buckets_x27_3025_ = lean_array_uset(v_buckets_2988_, v___x_3004_, v___x_3024_);
v___x_3026_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__39___redArg(v_a_2985_, v_b_2986_, v_bkt_3005_);
v___x_3027_ = lean_array_uset(v_buckets_x27_3025_, v___x_3004_, v___x_3026_);
if (v_isShared_2991_ == 0)
{
lean_ctor_set(v___x_2990_, 1, v___x_3027_);
v___x_3029_ = v___x_2990_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_size_2987_);
lean_ctor_set(v_reuseFailAlloc_3030_, 1, v___x_3027_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
return v___x_3029_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___redArg(lean_object* v_a_3032_, lean_object* v_x_3033_){
_start:
{
if (lean_obj_tag(v_x_3033_) == 0)
{
lean_object* v___x_3034_; 
v___x_3034_ = lean_box(0);
return v___x_3034_;
}
else
{
lean_object* v_key_3035_; lean_object* v_value_3036_; lean_object* v_tail_3037_; uint8_t v___x_3038_; 
v_key_3035_ = lean_ctor_get(v_x_3033_, 0);
v_value_3036_ = lean_ctor_get(v_x_3033_, 1);
v_tail_3037_ = lean_ctor_get(v_x_3033_, 2);
v___x_3038_ = lean_string_dec_eq(v_key_3035_, v_a_3032_);
if (v___x_3038_ == 0)
{
v_x_3033_ = v_tail_3037_;
goto _start;
}
else
{
lean_object* v___x_3040_; 
lean_inc(v_value_3036_);
v___x_3040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3040_, 0, v_value_3036_);
return v___x_3040_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___redArg___boxed(lean_object* v_a_3041_, lean_object* v_x_3042_){
_start:
{
lean_object* v_res_3043_; 
v_res_3043_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___redArg(v_a_3041_, v_x_3042_);
lean_dec(v_x_3042_);
lean_dec_ref(v_a_3041_);
return v_res_3043_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg(lean_object* v_m_3044_, lean_object* v_a_3045_){
_start:
{
lean_object* v_buckets_3046_; lean_object* v___x_3047_; uint64_t v___x_3048_; uint64_t v___x_3049_; uint64_t v___x_3050_; uint64_t v_fold_3051_; uint64_t v___x_3052_; uint64_t v___x_3053_; uint64_t v___x_3054_; size_t v___x_3055_; size_t v___x_3056_; size_t v___x_3057_; size_t v___x_3058_; size_t v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; 
v_buckets_3046_ = lean_ctor_get(v_m_3044_, 1);
v___x_3047_ = lean_array_get_size(v_buckets_3046_);
v___x_3048_ = lean_string_hash(v_a_3045_);
v___x_3049_ = 32ULL;
v___x_3050_ = lean_uint64_shift_right(v___x_3048_, v___x_3049_);
v_fold_3051_ = lean_uint64_xor(v___x_3048_, v___x_3050_);
v___x_3052_ = 16ULL;
v___x_3053_ = lean_uint64_shift_right(v_fold_3051_, v___x_3052_);
v___x_3054_ = lean_uint64_xor(v_fold_3051_, v___x_3053_);
v___x_3055_ = lean_uint64_to_usize(v___x_3054_);
v___x_3056_ = lean_usize_of_nat(v___x_3047_);
v___x_3057_ = ((size_t)1ULL);
v___x_3058_ = lean_usize_sub(v___x_3056_, v___x_3057_);
v___x_3059_ = lean_usize_land(v___x_3055_, v___x_3058_);
v___x_3060_ = lean_array_uget_borrowed(v_buckets_3046_, v___x_3059_);
v___x_3061_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___redArg(v_a_3045_, v___x_3060_);
return v___x_3061_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg___boxed(lean_object* v_m_3062_, lean_object* v_a_3063_){
_start:
{
lean_object* v_res_3064_; 
v_res_3064_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg(v_m_3062_, v_a_3063_);
lean_dec_ref(v_a_3063_);
lean_dec_ref(v_m_3062_);
return v_res_3064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21___redArg(lean_object* v_histogram_3065_, lean_object* v_index_3066_, lean_object* v_val_3067_){
_start:
{
lean_object* v___x_3068_; 
v___x_3068_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg(v_histogram_3065_, v_val_3067_);
if (lean_obj_tag(v___x_3068_) == 0)
{
lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; 
v___x_3069_ = lean_unsigned_to_nat(1u);
v___x_3070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3070_, 0, v_index_3066_);
v___x_3071_ = lean_unsigned_to_nat(0u);
v___x_3072_ = lean_box(0);
v___x_3073_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3069_);
lean_ctor_set(v___x_3073_, 1, v___x_3070_);
lean_ctor_set(v___x_3073_, 2, v___x_3071_);
lean_ctor_set(v___x_3073_, 3, v___x_3072_);
v___x_3074_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26___redArg(v_histogram_3065_, v_val_3067_, v___x_3073_);
return v___x_3074_;
}
else
{
lean_object* v_val_3075_; lean_object* v___x_3077_; uint8_t v_isShared_3078_; uint8_t v_isSharedCheck_3096_; 
v_val_3075_ = lean_ctor_get(v___x_3068_, 0);
v_isSharedCheck_3096_ = !lean_is_exclusive(v___x_3068_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3077_ = v___x_3068_;
v_isShared_3078_ = v_isSharedCheck_3096_;
goto v_resetjp_3076_;
}
else
{
lean_inc(v_val_3075_);
lean_dec(v___x_3068_);
v___x_3077_ = lean_box(0);
v_isShared_3078_ = v_isSharedCheck_3096_;
goto v_resetjp_3076_;
}
v_resetjp_3076_:
{
lean_object* v_leftCount_3079_; lean_object* v_rightCount_3080_; lean_object* v_rightIndex_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3094_; 
v_leftCount_3079_ = lean_ctor_get(v_val_3075_, 0);
v_rightCount_3080_ = lean_ctor_get(v_val_3075_, 2);
v_rightIndex_3081_ = lean_ctor_get(v_val_3075_, 3);
v_isSharedCheck_3094_ = !lean_is_exclusive(v_val_3075_);
if (v_isSharedCheck_3094_ == 0)
{
lean_object* v_unused_3095_; 
v_unused_3095_ = lean_ctor_get(v_val_3075_, 1);
lean_dec(v_unused_3095_);
v___x_3083_ = v_val_3075_;
v_isShared_3084_ = v_isSharedCheck_3094_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_rightIndex_3081_);
lean_inc(v_rightCount_3080_);
lean_inc(v_leftCount_3079_);
lean_dec(v_val_3075_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3094_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3088_; 
v___x_3085_ = lean_unsigned_to_nat(1u);
v___x_3086_ = lean_nat_add(v_leftCount_3079_, v___x_3085_);
lean_dec(v_leftCount_3079_);
if (v_isShared_3078_ == 0)
{
lean_ctor_set(v___x_3077_, 0, v_index_3066_);
v___x_3088_ = v___x_3077_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v_index_3066_);
v___x_3088_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
lean_object* v___x_3090_; 
if (v_isShared_3084_ == 0)
{
lean_ctor_set(v___x_3083_, 1, v___x_3088_);
lean_ctor_set(v___x_3083_, 0, v___x_3086_);
v___x_3090_ = v___x_3083_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v___x_3086_);
lean_ctor_set(v_reuseFailAlloc_3092_, 1, v___x_3088_);
lean_ctor_set(v_reuseFailAlloc_3092_, 2, v_rightCount_3080_);
lean_ctor_set(v_reuseFailAlloc_3092_, 3, v_rightIndex_3081_);
v___x_3090_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
lean_object* v___x_3091_; 
v___x_3091_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26___redArg(v_histogram_3065_, v_val_3067_, v___x_3090_);
return v___x_3091_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___redArg(lean_object* v_upperBound_3097_, lean_object* v_fst_3098_, lean_object* v___x_3099_, lean_object* v_fst_3100_, lean_object* v_a_3101_, lean_object* v_b_3102_){
_start:
{
uint8_t v___x_3103_; 
v___x_3103_ = lean_nat_dec_lt(v_a_3101_, v_upperBound_3097_);
if (v___x_3103_ == 0)
{
lean_dec(v_a_3101_);
return v_b_3102_;
}
else
{
lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
v___x_3104_ = l_Subarray_get___redArg(v_fst_3100_, v_a_3101_);
lean_inc(v_a_3101_);
v___x_3105_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21___redArg(v_b_3102_, v_a_3101_, v___x_3104_);
v___x_3106_ = lean_unsigned_to_nat(1u);
v___x_3107_ = lean_nat_add(v_a_3101_, v___x_3106_);
lean_dec(v_a_3101_);
v_a_3101_ = v___x_3107_;
v_b_3102_ = v___x_3105_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___redArg___boxed(lean_object* v_upperBound_3109_, lean_object* v_fst_3110_, lean_object* v___x_3111_, lean_object* v_fst_3112_, lean_object* v_a_3113_, lean_object* v_b_3114_){
_start:
{
lean_object* v_res_3115_; 
v_res_3115_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___redArg(v_upperBound_3109_, v_fst_3110_, v___x_3111_, v_fst_3112_, v_a_3113_, v_b_3114_);
lean_dec_ref(v_fst_3112_);
lean_dec(v___x_3111_);
lean_dec_ref(v_fst_3110_);
lean_dec(v_upperBound_3109_);
return v_res_3115_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___redArg(lean_object* v_as_x27_3116_, lean_object* v_b_3117_){
_start:
{
if (lean_obj_tag(v_as_x27_3116_) == 0)
{
return v_b_3117_;
}
else
{
lean_object* v_head_3118_; lean_object* v_snd_3119_; lean_object* v_leftIndex_3120_; 
v_head_3118_ = lean_ctor_get(v_as_x27_3116_, 0);
v_snd_3119_ = lean_ctor_get(v_head_3118_, 1);
v_leftIndex_3120_ = lean_ctor_get(v_snd_3119_, 1);
if (lean_obj_tag(v_leftIndex_3120_) == 1)
{
lean_object* v_rightIndex_3121_; 
v_rightIndex_3121_ = lean_ctor_get(v_snd_3119_, 3);
if (lean_obj_tag(v_rightIndex_3121_) == 1)
{
lean_object* v_tail_3122_; lean_object* v_fst_3123_; lean_object* v_leftCount_3124_; lean_object* v_rightCount_3125_; lean_object* v_val_3126_; lean_object* v_val_3127_; 
v_tail_3122_ = lean_ctor_get(v_as_x27_3116_, 1);
v_fst_3123_ = lean_ctor_get(v_head_3118_, 0);
v_leftCount_3124_ = lean_ctor_get(v_snd_3119_, 0);
v_rightCount_3125_ = lean_ctor_get(v_snd_3119_, 2);
v_val_3126_ = lean_ctor_get(v_leftIndex_3120_, 0);
v_val_3127_ = lean_ctor_get(v_rightIndex_3121_, 0);
if (lean_obj_tag(v_b_3117_) == 0)
{
goto v___jp_3128_;
}
else
{
lean_object* v_val_3135_; lean_object* v_fst_3136_; lean_object* v___x_3137_; uint8_t v___x_3138_; 
v_val_3135_ = lean_ctor_get(v_b_3117_, 0);
v_fst_3136_ = lean_ctor_get(v_val_3135_, 0);
v___x_3137_ = lean_nat_add(v_leftCount_3124_, v_rightCount_3125_);
v___x_3138_ = lean_nat_dec_lt(v___x_3137_, v_fst_3136_);
lean_dec(v___x_3137_);
if (v___x_3138_ == 0)
{
v_as_x27_3116_ = v_tail_3122_;
goto _start;
}
else
{
lean_dec_ref_known(v_b_3117_, 1);
goto v___jp_3128_;
}
}
v___jp_3128_:
{
lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; 
v___x_3129_ = lean_nat_add(v_leftCount_3124_, v_rightCount_3125_);
lean_inc(v_val_3127_);
lean_inc(v_val_3126_);
v___x_3130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3130_, 0, v_val_3126_);
lean_ctor_set(v___x_3130_, 1, v_val_3127_);
lean_inc(v_fst_3123_);
v___x_3131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3131_, 0, v_fst_3123_);
lean_ctor_set(v___x_3131_, 1, v___x_3130_);
v___x_3132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3132_, 0, v___x_3129_);
lean_ctor_set(v___x_3132_, 1, v___x_3131_);
v___x_3133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3132_);
v_as_x27_3116_ = v_tail_3122_;
v_b_3117_ = v___x_3133_;
goto _start;
}
}
else
{
lean_object* v_tail_3140_; 
v_tail_3140_ = lean_ctor_get(v_as_x27_3116_, 1);
v_as_x27_3116_ = v_tail_3140_;
goto _start;
}
}
else
{
lean_object* v_tail_3142_; 
v_tail_3142_ = lean_ctor_get(v_as_x27_3116_, 1);
v_as_x27_3116_ = v_tail_3142_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___redArg___boxed(lean_object* v_as_x27_3144_, lean_object* v_b_3145_){
_start:
{
lean_object* v_res_3146_; 
v_res_3146_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___redArg(v_as_x27_3144_, v_b_3145_);
lean_dec(v_as_x27_3144_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19___redArg(lean_object* v_histogram_3147_, lean_object* v_index_3148_, lean_object* v_val_3149_){
_start:
{
lean_object* v___x_3150_; 
v___x_3150_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg(v_histogram_3147_, v_val_3149_);
if (lean_obj_tag(v___x_3150_) == 0)
{
lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; 
v___x_3151_ = lean_unsigned_to_nat(0u);
v___x_3152_ = lean_box(0);
v___x_3153_ = lean_unsigned_to_nat(1u);
v___x_3154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3154_, 0, v_index_3148_);
v___x_3155_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3151_);
lean_ctor_set(v___x_3155_, 1, v___x_3152_);
lean_ctor_set(v___x_3155_, 2, v___x_3153_);
lean_ctor_set(v___x_3155_, 3, v___x_3154_);
v___x_3156_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26___redArg(v_histogram_3147_, v_val_3149_, v___x_3155_);
return v___x_3156_;
}
else
{
lean_object* v_val_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3178_; 
v_val_3157_ = lean_ctor_get(v___x_3150_, 0);
v_isSharedCheck_3178_ = !lean_is_exclusive(v___x_3150_);
if (v_isSharedCheck_3178_ == 0)
{
v___x_3159_ = v___x_3150_;
v_isShared_3160_ = v_isSharedCheck_3178_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_val_3157_);
lean_dec(v___x_3150_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3178_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v_leftCount_3161_; lean_object* v_leftIndex_3162_; lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3175_; 
v_leftCount_3161_ = lean_ctor_get(v_val_3157_, 0);
v_leftIndex_3162_ = lean_ctor_get(v_val_3157_, 1);
v_isSharedCheck_3175_ = !lean_is_exclusive(v_val_3157_);
if (v_isSharedCheck_3175_ == 0)
{
lean_object* v_unused_3176_; lean_object* v_unused_3177_; 
v_unused_3176_ = lean_ctor_get(v_val_3157_, 3);
lean_dec(v_unused_3176_);
v_unused_3177_ = lean_ctor_get(v_val_3157_, 2);
lean_dec(v_unused_3177_);
v___x_3164_ = v_val_3157_;
v_isShared_3165_ = v_isSharedCheck_3175_;
goto v_resetjp_3163_;
}
else
{
lean_inc(v_leftIndex_3162_);
lean_inc(v_leftCount_3161_);
lean_dec(v_val_3157_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3175_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3169_; 
v___x_3166_ = lean_unsigned_to_nat(1u);
v___x_3167_ = lean_nat_add(v_leftCount_3161_, v___x_3166_);
if (v_isShared_3160_ == 0)
{
lean_ctor_set(v___x_3159_, 0, v_index_3148_);
v___x_3169_ = v___x_3159_;
goto v_reusejp_3168_;
}
else
{
lean_object* v_reuseFailAlloc_3174_; 
v_reuseFailAlloc_3174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3174_, 0, v_index_3148_);
v___x_3169_ = v_reuseFailAlloc_3174_;
goto v_reusejp_3168_;
}
v_reusejp_3168_:
{
lean_object* v___x_3171_; 
if (v_isShared_3165_ == 0)
{
lean_ctor_set(v___x_3164_, 3, v___x_3169_);
lean_ctor_set(v___x_3164_, 2, v___x_3167_);
v___x_3171_ = v___x_3164_;
goto v_reusejp_3170_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v_leftCount_3161_);
lean_ctor_set(v_reuseFailAlloc_3173_, 1, v_leftIndex_3162_);
lean_ctor_set(v_reuseFailAlloc_3173_, 2, v___x_3167_);
lean_ctor_set(v_reuseFailAlloc_3173_, 3, v___x_3169_);
v___x_3171_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3170_;
}
v_reusejp_3170_:
{
lean_object* v___x_3172_; 
v___x_3172_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26___redArg(v_histogram_3147_, v_val_3149_, v___x_3171_);
return v___x_3172_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___redArg(lean_object* v_upperBound_3179_, lean_object* v___x_3180_, lean_object* v_fst_3181_, lean_object* v___x_3182_, lean_object* v_a_3183_, lean_object* v_b_3184_){
_start:
{
uint8_t v___x_3185_; 
v___x_3185_ = lean_nat_dec_lt(v_a_3183_, v_upperBound_3179_);
if (v___x_3185_ == 0)
{
lean_dec(v_a_3183_);
return v_b_3184_;
}
else
{
lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; 
v___x_3186_ = l_Subarray_get___redArg(v_fst_3181_, v_a_3183_);
lean_inc(v_a_3183_);
v___x_3187_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19___redArg(v_b_3184_, v_a_3183_, v___x_3186_);
v___x_3188_ = lean_unsigned_to_nat(1u);
v___x_3189_ = lean_nat_add(v_a_3183_, v___x_3188_);
lean_dec(v_a_3183_);
v_a_3183_ = v___x_3189_;
v_b_3184_ = v___x_3187_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___redArg___boxed(lean_object* v_upperBound_3191_, lean_object* v___x_3192_, lean_object* v_fst_3193_, lean_object* v___x_3194_, lean_object* v_a_3195_, lean_object* v_b_3196_){
_start:
{
lean_object* v_res_3197_; 
v_res_3197_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___redArg(v_upperBound_3191_, v___x_3192_, v_fst_3193_, v___x_3194_, v_a_3195_, v_b_3196_);
lean_dec(v___x_3194_);
lean_dec_ref(v_fst_3193_);
lean_dec(v___x_3192_);
lean_dec(v_upperBound_3191_);
return v_res_3197_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20_spec__29___redArg(lean_object* v_a_3198_, lean_object* v_b_3199_){
_start:
{
lean_object* v_array_3200_; lean_object* v_start_3201_; lean_object* v_stop_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3215_; 
v_array_3200_ = lean_ctor_get(v_a_3198_, 0);
v_start_3201_ = lean_ctor_get(v_a_3198_, 1);
v_stop_3202_ = lean_ctor_get(v_a_3198_, 2);
v_isSharedCheck_3215_ = !lean_is_exclusive(v_a_3198_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3204_ = v_a_3198_;
v_isShared_3205_ = v_isSharedCheck_3215_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_stop_3202_);
lean_inc(v_start_3201_);
lean_inc(v_array_3200_);
lean_dec(v_a_3198_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3215_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
uint8_t v___x_3206_; 
v___x_3206_ = lean_nat_dec_lt(v_start_3201_, v_stop_3202_);
if (v___x_3206_ == 0)
{
lean_del_object(v___x_3204_);
lean_dec(v_stop_3202_);
lean_dec(v_start_3201_);
lean_dec_ref(v_array_3200_);
return v_b_3199_;
}
else
{
lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3210_; 
v___x_3207_ = lean_unsigned_to_nat(1u);
v___x_3208_ = lean_nat_add(v_start_3201_, v___x_3207_);
lean_inc_ref(v_array_3200_);
if (v_isShared_3205_ == 0)
{
lean_ctor_set(v___x_3204_, 1, v___x_3208_);
v___x_3210_ = v___x_3204_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v_array_3200_);
lean_ctor_set(v_reuseFailAlloc_3214_, 1, v___x_3208_);
lean_ctor_set(v_reuseFailAlloc_3214_, 2, v_stop_3202_);
v___x_3210_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
lean_object* v___x_3211_; lean_object* v___x_3212_; 
v___x_3211_ = lean_array_fget(v_array_3200_, v_start_3201_);
lean_dec(v_start_3201_);
lean_dec_ref(v_array_3200_);
v___x_3212_ = lean_array_push(v_b_3199_, v___x_3211_);
v_a_3198_ = v___x_3210_;
v_b_3199_ = v___x_3212_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20(lean_object* v_left_3216_, lean_object* v_right_3217_, lean_object* v_i_3218_){
_start:
{
lean_object* v_start_3219_; lean_object* v_stop_3220_; lean_object* v___x_3221_; uint8_t v___x_3235_; 
v_start_3219_ = lean_ctor_get(v_left_3216_, 1);
v_stop_3220_ = lean_ctor_get(v_left_3216_, 2);
v___x_3221_ = lean_nat_sub(v_stop_3220_, v_start_3219_);
v___x_3235_ = lean_nat_dec_lt(v_i_3218_, v___x_3221_);
if (v___x_3235_ == 0)
{
goto v___jp_3222_;
}
else
{
lean_object* v_start_3236_; lean_object* v_stop_3237_; lean_object* v___x_3238_; uint8_t v___x_3239_; 
v_start_3236_ = lean_ctor_get(v_right_3217_, 1);
v_stop_3237_ = lean_ctor_get(v_right_3217_, 2);
v___x_3238_ = lean_nat_sub(v_stop_3237_, v_start_3236_);
v___x_3239_ = lean_nat_dec_lt(v_i_3218_, v___x_3238_);
if (v___x_3239_ == 0)
{
lean_dec(v___x_3238_);
goto v___jp_3222_;
}
else
{
lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; uint8_t v___x_3247_; 
v___x_3240_ = lean_nat_sub(v___x_3221_, v_i_3218_);
lean_dec(v___x_3221_);
v___x_3241_ = lean_unsigned_to_nat(1u);
v___x_3242_ = lean_nat_sub(v___x_3240_, v___x_3241_);
v___x_3243_ = l_Subarray_get___redArg(v_left_3216_, v___x_3242_);
lean_dec(v___x_3242_);
v___x_3244_ = lean_nat_sub(v___x_3238_, v_i_3218_);
lean_dec(v___x_3238_);
v___x_3245_ = lean_nat_sub(v___x_3244_, v___x_3241_);
v___x_3246_ = l_Subarray_get___redArg(v_right_3217_, v___x_3245_);
lean_dec(v___x_3245_);
v___x_3247_ = lean_string_dec_eq(v___x_3243_, v___x_3246_);
lean_dec(v___x_3246_);
lean_dec(v___x_3243_);
if (v___x_3247_ == 0)
{
lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; 
lean_dec(v_i_3218_);
lean_inc_ref(v_left_3216_);
v___x_3248_ = l_Subarray_take___redArg(v_left_3216_, v___x_3240_);
v___x_3249_ = l_Subarray_take___redArg(v_right_3217_, v___x_3244_);
lean_dec(v___x_3244_);
v___x_3250_ = l_Subarray_drop___redArg(v_left_3216_, v___x_3240_);
lean_dec(v___x_3240_);
v___x_3251_ = ((lean_object*)(l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14___closed__0));
v___x_3252_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20_spec__29___redArg(v___x_3250_, v___x_3251_);
v___x_3253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3249_);
lean_ctor_set(v___x_3253_, 1, v___x_3252_);
v___x_3254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3248_);
lean_ctor_set(v___x_3254_, 1, v___x_3253_);
return v___x_3254_;
}
else
{
lean_object* v___x_3255_; 
lean_dec(v___x_3244_);
lean_dec(v___x_3240_);
v___x_3255_ = lean_nat_add(v_i_3218_, v___x_3241_);
lean_dec(v_i_3218_);
v_i_3218_ = v___x_3255_;
goto _start;
}
}
}
v___jp_3222_:
{
lean_object* v_start_3223_; lean_object* v_stop_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; 
v_start_3223_ = lean_ctor_get(v_right_3217_, 1);
v_stop_3224_ = lean_ctor_get(v_right_3217_, 2);
v___x_3225_ = lean_nat_sub(v___x_3221_, v_i_3218_);
lean_dec(v___x_3221_);
lean_inc_ref(v_left_3216_);
v___x_3226_ = l_Subarray_take___redArg(v_left_3216_, v___x_3225_);
v___x_3227_ = lean_nat_sub(v_stop_3224_, v_start_3223_);
v___x_3228_ = lean_nat_sub(v___x_3227_, v_i_3218_);
lean_dec(v_i_3218_);
lean_dec(v___x_3227_);
v___x_3229_ = l_Subarray_take___redArg(v_right_3217_, v___x_3228_);
lean_dec(v___x_3228_);
v___x_3230_ = l_Subarray_drop___redArg(v_left_3216_, v___x_3225_);
lean_dec(v___x_3225_);
v___x_3231_ = ((lean_object*)(l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14___closed__0));
v___x_3232_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20_spec__29___redArg(v___x_3230_, v___x_3231_);
v___x_3233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3229_);
lean_ctor_set(v___x_3233_, 1, v___x_3232_);
v___x_3234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3234_, 0, v___x_3226_);
lean_ctor_set(v___x_3234_, 1, v___x_3233_);
return v___x_3234_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15(lean_object* v_left_3257_, lean_object* v_right_3258_){
_start:
{
lean_object* v___x_3259_; lean_object* v___x_3260_; 
v___x_3259_ = lean_unsigned_to_nat(0u);
v___x_3260_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20(v_left_3257_, v_right_3258_, v___x_3259_);
return v___x_3260_;
}
}
static lean_object* _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__0(void){
_start:
{
lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; 
v___x_3261_ = lean_box(0);
v___x_3262_ = lean_unsigned_to_nat(16u);
v___x_3263_ = lean_mk_array(v___x_3262_, v___x_3261_);
return v___x_3263_;
}
}
static lean_object* _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__1(void){
_start:
{
lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v_hist_3266_; 
v___x_3264_ = lean_obj_once(&l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__0, &l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__0_once, _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__0);
v___x_3265_ = lean_unsigned_to_nat(0u);
v_hist_3266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_hist_3266_, 0, v___x_3265_);
lean_ctor_set(v_hist_3266_, 1, v___x_3264_);
return v_hist_3266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12(lean_object* v_left_3267_, lean_object* v_right_3268_){
_start:
{
lean_object* v___x_3269_; lean_object* v_snd_3270_; lean_object* v_fst_3271_; lean_object* v_fst_3272_; lean_object* v_snd_3273_; lean_object* v___x_3274_; lean_object* v_snd_3275_; lean_object* v_fst_3276_; lean_object* v_fst_3277_; lean_object* v_snd_3278_; lean_object* v_start_3279_; lean_object* v_stop_3280_; lean_object* v___x_3281_; lean_object* v_hist_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v_start_3285_; lean_object* v_stop_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v_buckets_3289_; lean_object* v___x_3290_; lean_object* v___y_3292_; lean_object* v___x_3318_; lean_object* v___x_3319_; uint8_t v___x_3320_; 
v___x_3269_ = l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14(v_left_3267_, v_right_3268_);
v_snd_3270_ = lean_ctor_get(v___x_3269_, 1);
lean_inc(v_snd_3270_);
v_fst_3271_ = lean_ctor_get(v___x_3269_, 0);
lean_inc(v_fst_3271_);
lean_dec_ref(v___x_3269_);
v_fst_3272_ = lean_ctor_get(v_snd_3270_, 0);
lean_inc(v_fst_3272_);
v_snd_3273_ = lean_ctor_get(v_snd_3270_, 1);
lean_inc(v_snd_3273_);
lean_dec(v_snd_3270_);
v___x_3274_ = l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15(v_fst_3272_, v_snd_3273_);
v_snd_3275_ = lean_ctor_get(v___x_3274_, 1);
lean_inc(v_snd_3275_);
v_fst_3276_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_fst_3276_);
lean_dec_ref(v___x_3274_);
v_fst_3277_ = lean_ctor_get(v_snd_3275_, 0);
lean_inc(v_fst_3277_);
v_snd_3278_ = lean_ctor_get(v_snd_3275_, 1);
lean_inc(v_snd_3278_);
lean_dec(v_snd_3275_);
v_start_3279_ = lean_ctor_get(v_fst_3276_, 1);
v_stop_3280_ = lean_ctor_get(v_fst_3276_, 2);
v___x_3281_ = lean_unsigned_to_nat(0u);
v_hist_3282_ = lean_obj_once(&l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__1, &l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__1_once, _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__1);
v___x_3283_ = lean_nat_sub(v_stop_3280_, v_start_3279_);
v___x_3284_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___redArg(v___x_3283_, v_fst_3277_, v___x_3283_, v_fst_3276_, v___x_3281_, v_hist_3282_);
v_start_3285_ = lean_ctor_get(v_fst_3277_, 1);
v_stop_3286_ = lean_ctor_get(v_fst_3277_, 2);
v___x_3287_ = lean_nat_sub(v_stop_3286_, v_start_3285_);
v___x_3288_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___redArg(v___x_3287_, v___x_3287_, v_fst_3277_, v___x_3283_, v___x_3281_, v___x_3284_);
lean_dec(v___x_3283_);
lean_dec(v___x_3287_);
v_buckets_3289_ = lean_ctor_get(v___x_3288_, 1);
lean_inc_ref(v_buckets_3289_);
lean_dec_ref(v___x_3288_);
v___x_3290_ = lean_box(0);
v___x_3318_ = lean_box(0);
v___x_3319_ = lean_array_get_size(v_buckets_3289_);
v___x_3320_ = lean_nat_dec_lt(v___x_3281_, v___x_3319_);
if (v___x_3320_ == 0)
{
lean_dec_ref(v_buckets_3289_);
v___y_3292_ = v___x_3318_;
goto v___jp_3291_;
}
else
{
size_t v___x_3321_; size_t v___x_3322_; lean_object* v___x_3323_; 
v___x_3321_ = lean_usize_of_nat(v___x_3319_);
v___x_3322_ = ((size_t)0ULL);
v___x_3323_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__18(v_buckets_3289_, v___x_3321_, v___x_3322_, v___x_3318_);
lean_dec_ref(v_buckets_3289_);
v___y_3292_ = v___x_3323_;
goto v___jp_3291_;
}
v___jp_3291_:
{
lean_object* v___x_3293_; 
v___x_3293_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___redArg(v___y_3292_, v___x_3290_);
lean_dec(v___y_3292_);
if (lean_obj_tag(v___x_3293_) == 1)
{
lean_object* v_val_3294_; lean_object* v_snd_3295_; lean_object* v_snd_3296_; lean_object* v_fst_3297_; lean_object* v_fst_3298_; lean_object* v_snd_3299_; lean_object* v___x_3300_; lean_object* v_fst_3301_; lean_object* v_snd_3302_; lean_object* v___x_3303_; lean_object* v_fst_3304_; lean_object* v_snd_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; 
v_val_3294_ = lean_ctor_get(v___x_3293_, 0);
lean_inc(v_val_3294_);
lean_dec_ref_known(v___x_3293_, 1);
v_snd_3295_ = lean_ctor_get(v_val_3294_, 1);
lean_inc(v_snd_3295_);
lean_dec(v_val_3294_);
v_snd_3296_ = lean_ctor_get(v_snd_3295_, 1);
lean_inc(v_snd_3296_);
v_fst_3297_ = lean_ctor_get(v_snd_3295_, 0);
lean_inc(v_fst_3297_);
lean_dec(v_snd_3295_);
v_fst_3298_ = lean_ctor_get(v_snd_3296_, 0);
lean_inc(v_fst_3298_);
v_snd_3299_ = lean_ctor_get(v_snd_3296_, 1);
lean_inc(v_snd_3299_);
lean_dec(v_snd_3296_);
v___x_3300_ = l_Subarray_split___redArg(v_fst_3276_, v_fst_3298_);
lean_dec(v_fst_3298_);
v_fst_3301_ = lean_ctor_get(v___x_3300_, 0);
lean_inc(v_fst_3301_);
v_snd_3302_ = lean_ctor_get(v___x_3300_, 1);
lean_inc(v_snd_3302_);
lean_dec_ref(v___x_3300_);
v___x_3303_ = l_Subarray_split___redArg(v_fst_3277_, v_snd_3299_);
lean_dec(v_snd_3299_);
v_fst_3304_ = lean_ctor_get(v___x_3303_, 0);
lean_inc(v_fst_3304_);
v_snd_3305_ = lean_ctor_get(v___x_3303_, 1);
lean_inc(v_snd_3305_);
lean_dec_ref(v___x_3303_);
v___x_3306_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12(v_fst_3301_, v_fst_3304_);
v___x_3307_ = l_Array_append___redArg(v_fst_3271_, v___x_3306_);
lean_dec_ref(v___x_3306_);
v___x_3308_ = lean_unsigned_to_nat(1u);
v___x_3309_ = lean_mk_empty_array_with_capacity(v___x_3308_);
v___x_3310_ = lean_array_push(v___x_3309_, v_fst_3297_);
v___x_3311_ = l_Array_append___redArg(v___x_3307_, v___x_3310_);
lean_dec_ref(v___x_3310_);
v___x_3312_ = l_Subarray_drop___redArg(v_snd_3302_, v___x_3308_);
v___x_3313_ = l_Subarray_drop___redArg(v_snd_3305_, v___x_3308_);
v___x_3314_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12(v___x_3312_, v___x_3313_);
v___x_3315_ = l_Array_append___redArg(v___x_3311_, v___x_3314_);
lean_dec_ref(v___x_3314_);
v___x_3316_ = l_Array_append___redArg(v___x_3315_, v_snd_3278_);
lean_dec(v_snd_3278_);
return v___x_3316_;
}
else
{
lean_object* v___x_3317_; 
lean_dec(v___x_3293_);
lean_dec(v_fst_3277_);
lean_dec(v_fst_3276_);
v___x_3317_ = l_Array_append___redArg(v_fst_3271_, v_snd_3278_);
lean_dec(v_snd_3278_);
return v___x_3317_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__16(size_t v_sz_3324_, size_t v_i_3325_, lean_object* v_bs_3326_){
_start:
{
uint8_t v___x_3327_; 
v___x_3327_ = lean_usize_dec_lt(v_i_3325_, v_sz_3324_);
if (v___x_3327_ == 0)
{
return v_bs_3326_;
}
else
{
lean_object* v_v_3328_; lean_object* v___x_3329_; lean_object* v_bs_x27_3330_; uint8_t v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; size_t v___x_3334_; size_t v___x_3335_; lean_object* v___x_3336_; 
v_v_3328_ = lean_array_uget(v_bs_3326_, v_i_3325_);
v___x_3329_ = lean_unsigned_to_nat(0u);
v_bs_x27_3330_ = lean_array_uset(v_bs_3326_, v_i_3325_, v___x_3329_);
v___x_3331_ = 1;
v___x_3332_ = lean_box(v___x_3331_);
v___x_3333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3332_);
lean_ctor_set(v___x_3333_, 1, v_v_3328_);
v___x_3334_ = ((size_t)1ULL);
v___x_3335_ = lean_usize_add(v_i_3325_, v___x_3334_);
v___x_3336_ = lean_array_uset(v_bs_x27_3330_, v_i_3325_, v___x_3333_);
v_i_3325_ = v___x_3335_;
v_bs_3326_ = v___x_3336_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__16___boxed(lean_object* v_sz_3338_, lean_object* v_i_3339_, lean_object* v_bs_3340_){
_start:
{
size_t v_sz_boxed_3341_; size_t v_i_boxed_3342_; lean_object* v_res_3343_; 
v_sz_boxed_3341_ = lean_unbox_usize(v_sz_3338_);
lean_dec(v_sz_3338_);
v_i_boxed_3342_ = lean_unbox_usize(v_i_3339_);
lean_dec(v_i_3339_);
v_res_3343_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__16(v_sz_boxed_3341_, v_i_boxed_3342_, v_bs_3340_);
return v_res_3343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7(lean_object* v_original_3351_, lean_object* v_edited_3352_){
_start:
{
lean_object* v_i_3353_; lean_object* v___x_3354_; uint8_t v___x_3355_; 
v_i_3353_ = lean_unsigned_to_nat(0u);
v___x_3354_ = lean_array_get_size(v_original_3351_);
v___x_3355_ = lean_nat_dec_lt(v_i_3353_, v___x_3354_);
if (v___x_3355_ == 0)
{
size_t v_sz_3356_; size_t v___x_3357_; lean_object* v___x_3358_; 
lean_dec_ref(v_original_3351_);
v_sz_3356_ = lean_array_size(v_edited_3352_);
v___x_3357_ = ((size_t)0ULL);
v___x_3358_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__17(v_sz_3356_, v___x_3357_, v_edited_3352_);
return v___x_3358_;
}
else
{
lean_object* v___x_3359_; uint8_t v___x_3360_; 
v___x_3359_ = lean_array_get_size(v_edited_3352_);
v___x_3360_ = lean_nat_dec_lt(v_i_3353_, v___x_3359_);
if (v___x_3360_ == 0)
{
size_t v_sz_3361_; size_t v___x_3362_; lean_object* v___x_3363_; 
lean_dec_ref(v_edited_3352_);
v_sz_3361_ = lean_array_size(v_original_3351_);
v___x_3362_ = ((size_t)0ULL);
v___x_3363_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__16(v_sz_3361_, v___x_3362_, v_original_3351_);
return v___x_3363_;
}
else
{
lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v_ds_3366_; lean_object* v___x_3367_; size_t v_sz_3368_; size_t v___x_3369_; lean_object* v___x_3370_; lean_object* v_snd_3371_; lean_object* v_fst_3372_; lean_object* v_fst_3373_; lean_object* v_snd_3374_; lean_object* v___x_3376_; uint8_t v_isShared_3377_; uint8_t v_isSharedCheck_3393_; 
lean_inc_ref(v_original_3351_);
v___x_3364_ = l_Array_toSubarray___redArg(v_original_3351_, v_i_3353_, v___x_3354_);
lean_inc_ref(v_edited_3352_);
v___x_3365_ = l_Array_toSubarray___redArg(v_edited_3352_, v_i_3353_, v___x_3359_);
v_ds_3366_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12(v___x_3364_, v___x_3365_);
v___x_3367_ = ((lean_object*)(l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__2));
v_sz_3368_ = lean_array_size(v_ds_3366_);
v___x_3369_ = ((size_t)0ULL);
v___x_3370_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13(v___x_3359_, v_edited_3352_, v___x_3354_, v_original_3351_, v_ds_3366_, v_sz_3368_, v___x_3369_, v___x_3367_);
lean_dec_ref(v_ds_3366_);
v_snd_3371_ = lean_ctor_get(v___x_3370_, 1);
lean_inc(v_snd_3371_);
v_fst_3372_ = lean_ctor_get(v___x_3370_, 0);
lean_inc(v_fst_3372_);
lean_dec_ref(v___x_3370_);
v_fst_3373_ = lean_ctor_get(v_snd_3371_, 0);
v_snd_3374_ = lean_ctor_get(v_snd_3371_, 1);
v_isSharedCheck_3393_ = !lean_is_exclusive(v_snd_3371_);
if (v_isSharedCheck_3393_ == 0)
{
v___x_3376_ = v_snd_3371_;
v_isShared_3377_ = v_isSharedCheck_3393_;
goto v_resetjp_3375_;
}
else
{
lean_inc(v_snd_3374_);
lean_inc(v_fst_3373_);
lean_dec(v_snd_3371_);
v___x_3376_ = lean_box(0);
v_isShared_3377_ = v_isSharedCheck_3393_;
goto v_resetjp_3375_;
}
v_resetjp_3375_:
{
lean_object* v___x_3379_; 
if (v_isShared_3377_ == 0)
{
lean_ctor_set(v___x_3376_, 1, v_fst_3373_);
lean_ctor_set(v___x_3376_, 0, v_fst_3372_);
v___x_3379_ = v___x_3376_;
goto v_reusejp_3378_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v_fst_3372_);
lean_ctor_set(v_reuseFailAlloc_3392_, 1, v_fst_3373_);
v___x_3379_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3378_;
}
v_reusejp_3378_:
{
lean_object* v___x_3380_; lean_object* v_fst_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3390_; 
v___x_3380_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___redArg(v___x_3354_, v_original_3351_, v___x_3379_);
lean_dec_ref(v_original_3351_);
v_fst_3381_ = lean_ctor_get(v___x_3380_, 0);
v_isSharedCheck_3390_ = !lean_is_exclusive(v___x_3380_);
if (v_isSharedCheck_3390_ == 0)
{
lean_object* v_unused_3391_; 
v_unused_3391_ = lean_ctor_get(v___x_3380_, 1);
lean_dec(v_unused_3391_);
v___x_3383_ = v___x_3380_;
v_isShared_3384_ = v_isSharedCheck_3390_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_fst_3381_);
lean_dec(v___x_3380_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3390_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
lean_ctor_set(v___x_3383_, 1, v_snd_3374_);
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3389_; 
v_reuseFailAlloc_3389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3389_, 0, v_fst_3381_);
lean_ctor_set(v_reuseFailAlloc_3389_, 1, v_snd_3374_);
v___x_3386_ = v_reuseFailAlloc_3389_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
lean_object* v___x_3387_; lean_object* v_fst_3388_; 
v___x_3387_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___redArg(v___x_3359_, v_edited_3352_, v___x_3386_);
lean_dec_ref(v_edited_3352_);
v_fst_3388_ = lean_ctor_get(v___x_3387_, 0);
lean_inc(v_fst_3388_);
lean_dec_ref(v___x_3387_);
return v_fst_3388_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___redArg(lean_object* v___y_3394_, lean_object* v_x_3395_, lean_object* v_x_3396_){
_start:
{
if (lean_obj_tag(v_x_3395_) == 0)
{
lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3398_ = l_List_reverse___redArg(v_x_3396_);
v___x_3399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3398_);
return v___x_3399_;
}
else
{
lean_object* v_head_3400_; lean_object* v_tail_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3410_; 
v_head_3400_ = lean_ctor_get(v_x_3395_, 0);
v_tail_3401_ = lean_ctor_get(v_x_3395_, 1);
v_isSharedCheck_3410_ = !lean_is_exclusive(v_x_3395_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3403_ = v_x_3395_;
v_isShared_3404_ = v_isSharedCheck_3410_;
goto v_resetjp_3402_;
}
else
{
lean_inc(v_tail_3401_);
lean_inc(v_head_3400_);
lean_dec(v_x_3395_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3410_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v___x_3405_; lean_object* v___x_3407_; 
v___x_3405_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString(v_head_3400_, v___y_3394_);
if (v_isShared_3404_ == 0)
{
lean_ctor_set(v___x_3403_, 1, v_x_3396_);
lean_ctor_set(v___x_3403_, 0, v___x_3405_);
v___x_3407_ = v___x_3403_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v___x_3405_);
lean_ctor_set(v_reuseFailAlloc_3409_, 1, v_x_3396_);
v___x_3407_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
v_x_3395_ = v_tail_3401_;
v_x_3396_ = v___x_3407_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___redArg___boxed(lean_object* v___y_3411_, lean_object* v_x_3412_, lean_object* v_x_3413_, lean_object* v___y_3414_){
_start:
{
lean_object* v_res_3415_; 
v_res_3415_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___redArg(v___y_3411_, v_x_3412_, v_x_3413_);
lean_dec(v___y_3411_);
return v_res_3415_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__3(void){
_start:
{
lean_object* v___x_3421_; lean_object* v___x_3422_; 
v___x_3421_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__2));
v___x_3422_ = l_Lean_stringToMessageData(v___x_3421_);
return v___x_3422_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__5(void){
_start:
{
lean_object* v___x_3424_; lean_object* v___x_3425_; 
v___x_3424_ = l_Lean_MessageLog_empty;
v___x_3425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3425_, 0, v___x_3424_);
lean_ctor_set(v___x_3425_, 1, v___x_3424_);
return v___x_3425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs(lean_object* v_x_3432_, lean_object* v_a_3433_, lean_object* v_a_3434_){
_start:
{
lean_object* v___x_3436_; uint8_t v___x_3437_; 
v___x_3436_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1));
lean_inc(v_x_3432_);
v___x_3437_ = l_Lean_Syntax_isOfKind(v_x_3432_, v___x_3436_);
if (v___x_3437_ == 0)
{
lean_object* v___x_3438_; 
lean_dec(v_x_3432_);
v___x_3438_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_3438_;
}
else
{
lean_object* v___x_3439_; lean_object* v___y_3441_; lean_object* v___y_3442_; lean_object* v___y_3443_; lean_object* v___y_3444_; lean_object* v___y_3445_; lean_object* v___y_3472_; lean_object* v___y_3473_; lean_object* v___y_3474_; lean_object* v___y_3475_; lean_object* v___y_3476_; lean_object* v___y_3477_; lean_object* v___y_3478_; lean_object* v___y_3479_; uint8_t v___y_3480_; lean_object* v___y_3545_; uint8_t v___y_3546_; lean_object* v___y_3547_; lean_object* v___y_3548_; lean_object* v___y_3549_; lean_object* v___y_3550_; uint8_t v___y_3551_; lean_object* v___y_3552_; uint8_t v___y_3553_; lean_object* v___y_3554_; lean_object* v___y_3555_; lean_object* v___y_3556_; lean_object* v___y_3586_; lean_object* v___y_3587_; lean_object* v___y_3588_; lean_object* v___y_3589_; lean_object* v___y_3590_; lean_object* v___y_3591_; lean_object* v___y_3650_; lean_object* v___y_3651_; lean_object* v___y_3652_; lean_object* v___y_3653_; lean_object* v___y_3654_; lean_object* v___y_3655_; lean_object* v_dc_x3f_3669_; lean_object* v___y_3670_; lean_object* v___y_3671_; lean_object* v___x_3688_; lean_object* v___x_3689_; uint8_t v___x_3690_; 
v___x_3439_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_instImpl_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_));
v___x_3688_ = lean_unsigned_to_nat(0u);
v___x_3689_ = l_Lean_Syntax_getArg(v_x_3432_, v___x_3688_);
v___x_3690_ = l_Lean_Syntax_isNone(v___x_3689_);
if (v___x_3690_ == 0)
{
lean_object* v___x_3691_; uint8_t v___x_3692_; 
v___x_3691_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_3689_);
v___x_3692_ = l_Lean_Syntax_matchesNull(v___x_3689_, v___x_3691_);
if (v___x_3692_ == 0)
{
lean_object* v___x_3693_; 
lean_dec(v___x_3689_);
lean_dec(v_x_3432_);
v___x_3693_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_3693_;
}
else
{
lean_object* v_dc_x3f_3694_; lean_object* v___x_3695_; uint8_t v___x_3696_; 
v_dc_x3f_3694_ = l_Lean_Syntax_getArg(v___x_3689_, v___x_3688_);
lean_dec(v___x_3689_);
v___x_3695_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7));
lean_inc(v_dc_x3f_3694_);
v___x_3696_ = l_Lean_Syntax_isOfKind(v_dc_x3f_3694_, v___x_3695_);
if (v___x_3696_ == 0)
{
lean_object* v___x_3697_; 
lean_dec(v_dc_x3f_3694_);
lean_dec(v_x_3432_);
v___x_3697_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_3697_;
}
else
{
lean_object* v___x_3698_; 
v___x_3698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3698_, 0, v_dc_x3f_3694_);
v_dc_x3f_3669_ = v___x_3698_;
v___y_3670_ = v_a_3433_;
v___y_3671_ = v_a_3434_;
goto v___jp_3668_;
}
}
}
else
{
lean_object* v___x_3699_; 
lean_dec(v___x_3689_);
v___x_3699_ = lean_box(0);
v_dc_x3f_3669_ = v___x_3699_;
v___y_3670_ = v_a_3433_;
v___y_3671_ = v_a_3434_;
goto v___jp_3668_;
}
v___jp_3440_:
{
lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; 
v___x_3446_ = lean_obj_once(&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__3, &l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__3_once, _init_l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__3);
v___x_3447_ = l_Lean_stringToMessageData(v___y_3445_);
v___x_3448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3446_);
lean_ctor_set(v___x_3448_, 1, v___x_3447_);
v___x_3449_ = l_Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2(v___y_3443_, v___x_3448_, v___y_3442_, v___y_3444_);
lean_dec(v___y_3443_);
if (lean_obj_tag(v___x_3449_) == 0)
{
lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3469_; 
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3449_);
if (v_isSharedCheck_3469_ == 0)
{
lean_object* v_unused_3470_; 
v_unused_3470_ = lean_ctor_get(v___x_3449_, 0);
lean_dec(v_unused_3470_);
v___x_3451_ = v___x_3449_;
v_isShared_3452_ = v_isSharedCheck_3469_;
goto v_resetjp_3450_;
}
else
{
lean_dec(v___x_3449_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3469_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3453_; 
v___x_3453_ = l_Lean_Elab_Command_getRef___redArg(v___y_3442_);
if (lean_obj_tag(v___x_3453_) == 0)
{
lean_object* v_a_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3458_; 
v_a_3454_ = lean_ctor_get(v___x_3453_, 0);
lean_inc(v_a_3454_);
lean_dec_ref_known(v___x_3453_, 1);
v___x_3455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3455_, 0, v___x_3439_);
lean_ctor_set(v___x_3455_, 1, v___y_3441_);
v___x_3456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3456_, 0, v_a_3454_);
lean_ctor_set(v___x_3456_, 1, v___x_3455_);
if (v_isShared_3452_ == 0)
{
lean_ctor_set_tag(v___x_3451_, 10);
lean_ctor_set(v___x_3451_, 0, v___x_3456_);
v___x_3458_ = v___x_3451_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3460_; 
v_reuseFailAlloc_3460_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3460_, 0, v___x_3456_);
v___x_3458_ = v_reuseFailAlloc_3460_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
lean_object* v___x_3459_; 
v___x_3459_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3(v___x_3458_, v___y_3442_, v___y_3444_);
return v___x_3459_;
}
}
else
{
lean_object* v_a_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3468_; 
lean_del_object(v___x_3451_);
lean_dec_ref(v___y_3441_);
v_a_3461_ = lean_ctor_get(v___x_3453_, 0);
v_isSharedCheck_3468_ = !lean_is_exclusive(v___x_3453_);
if (v_isSharedCheck_3468_ == 0)
{
v___x_3463_ = v___x_3453_;
v_isShared_3464_ = v_isSharedCheck_3468_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_a_3461_);
lean_dec(v___x_3453_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3468_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v___x_3466_; 
if (v_isShared_3464_ == 0)
{
v___x_3466_ = v___x_3463_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v_a_3461_);
v___x_3466_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
return v___x_3466_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_3441_);
return v___x_3449_;
}
}
v___jp_3471_:
{
if (v___y_3480_ == 0)
{
lean_object* v___x_3481_; lean_object* v_env_3482_; lean_object* v_scopes_3483_; lean_object* v_usedQuotCtxts_3484_; lean_object* v_nextMacroScope_3485_; lean_object* v_maxRecDepth_3486_; lean_object* v_ngen_3487_; lean_object* v_auxDeclNGen_3488_; lean_object* v_infoState_3489_; lean_object* v_traceState_3490_; lean_object* v_snapshotTasks_3491_; lean_object* v_prevLinterStates_3492_; lean_object* v_codeQualityEntryTasks_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3518_; 
lean_dec(v___y_3475_);
v___x_3481_ = lean_st_ref_take(v___y_3478_);
v_env_3482_ = lean_ctor_get(v___x_3481_, 0);
v_scopes_3483_ = lean_ctor_get(v___x_3481_, 2);
v_usedQuotCtxts_3484_ = lean_ctor_get(v___x_3481_, 3);
v_nextMacroScope_3485_ = lean_ctor_get(v___x_3481_, 4);
v_maxRecDepth_3486_ = lean_ctor_get(v___x_3481_, 5);
v_ngen_3487_ = lean_ctor_get(v___x_3481_, 6);
v_auxDeclNGen_3488_ = lean_ctor_get(v___x_3481_, 7);
v_infoState_3489_ = lean_ctor_get(v___x_3481_, 8);
v_traceState_3490_ = lean_ctor_get(v___x_3481_, 9);
v_snapshotTasks_3491_ = lean_ctor_get(v___x_3481_, 10);
v_prevLinterStates_3492_ = lean_ctor_get(v___x_3481_, 11);
v_codeQualityEntryTasks_3493_ = lean_ctor_get(v___x_3481_, 12);
v_isSharedCheck_3518_ = !lean_is_exclusive(v___x_3481_);
if (v_isSharedCheck_3518_ == 0)
{
lean_object* v_unused_3519_; 
v_unused_3519_ = lean_ctor_get(v___x_3481_, 1);
lean_dec(v_unused_3519_);
v___x_3495_ = v___x_3481_;
v_isShared_3496_ = v_isSharedCheck_3518_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3493_);
lean_inc(v_prevLinterStates_3492_);
lean_inc(v_snapshotTasks_3491_);
lean_inc(v_traceState_3490_);
lean_inc(v_infoState_3489_);
lean_inc(v_auxDeclNGen_3488_);
lean_inc(v_ngen_3487_);
lean_inc(v_maxRecDepth_3486_);
lean_inc(v_nextMacroScope_3485_);
lean_inc(v_usedQuotCtxts_3484_);
lean_inc(v_scopes_3483_);
lean_inc(v_env_3482_);
lean_dec(v___x_3481_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3518_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3498_; 
if (v_isShared_3496_ == 0)
{
lean_ctor_set(v___x_3495_, 1, v___y_3479_);
v___x_3498_ = v___x_3495_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3517_, 0, v_env_3482_);
lean_ctor_set(v_reuseFailAlloc_3517_, 1, v___y_3479_);
lean_ctor_set(v_reuseFailAlloc_3517_, 2, v_scopes_3483_);
lean_ctor_set(v_reuseFailAlloc_3517_, 3, v_usedQuotCtxts_3484_);
lean_ctor_set(v_reuseFailAlloc_3517_, 4, v_nextMacroScope_3485_);
lean_ctor_set(v_reuseFailAlloc_3517_, 5, v_maxRecDepth_3486_);
lean_ctor_set(v_reuseFailAlloc_3517_, 6, v_ngen_3487_);
lean_ctor_set(v_reuseFailAlloc_3517_, 7, v_auxDeclNGen_3488_);
lean_ctor_set(v_reuseFailAlloc_3517_, 8, v_infoState_3489_);
lean_ctor_set(v_reuseFailAlloc_3517_, 9, v_traceState_3490_);
lean_ctor_set(v_reuseFailAlloc_3517_, 10, v_snapshotTasks_3491_);
lean_ctor_set(v_reuseFailAlloc_3517_, 11, v_prevLinterStates_3492_);
lean_ctor_set(v_reuseFailAlloc_3517_, 12, v_codeQualityEntryTasks_3493_);
v___x_3498_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v_scopes_3502_; lean_object* v___x_3503_; lean_object* v_opts_3504_; lean_object* v___x_3505_; uint8_t v___x_3506_; 
v___x_3499_ = lean_st_ref_put(v___y_3478_, v___x_3498_);
v___x_3500_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3501_ = lean_st_ref_get(v___y_3478_);
v_scopes_3502_ = lean_ctor_get(v___x_3501_, 2);
lean_inc(v_scopes_3502_);
lean_dec(v___x_3501_);
v___x_3503_ = l_List_head_x21___redArg(v___x_3500_, v_scopes_3502_);
lean_dec(v_scopes_3502_);
v_opts_3504_ = lean_ctor_get(v___x_3503_, 1);
lean_inc_ref(v_opts_3504_);
lean_dec(v___x_3503_);
v___x_3505_ = l_Lean_guard__msgs_diff;
v___x_3506_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4(v_opts_3504_, v___x_3505_);
lean_dec_ref(v_opts_3504_);
if (v___x_3506_ == 0)
{
lean_dec(v___y_3474_);
lean_dec_ref(v___y_3473_);
lean_inc_ref(v___y_3472_);
v___y_3441_ = v___y_3472_;
v___y_3442_ = v___y_3477_;
v___y_3443_ = v___y_3476_;
v___y_3444_ = v___y_3478_;
v___y_3445_ = v___y_3472_;
goto v___jp_3440_;
}
else
{
lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3507_ = lean_string_utf8_byte_size(v___y_3473_);
lean_inc(v___y_3474_);
lean_inc_ref(v___y_3473_);
v___x_3508_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3508_, 0, v___y_3473_);
lean_ctor_set(v___x_3508_, 1, v___y_3474_);
lean_ctor_set(v___x_3508_, 2, v___x_3507_);
v___x_3509_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0);
v___x_3510_ = lean_mk_empty_array_with_capacity(v___y_3474_);
lean_inc_ref(v___x_3510_);
v___x_3511_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg(v___y_3473_, v___x_3508_, v___x_3507_, v___x_3509_, v___x_3510_);
lean_dec_ref_known(v___x_3508_, 3);
v___x_3512_ = lean_string_utf8_byte_size(v___y_3472_);
lean_inc_ref_n(v___y_3472_, 2);
v___x_3513_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3513_, 0, v___y_3472_);
lean_ctor_set(v___x_3513_, 1, v___y_3474_);
lean_ctor_set(v___x_3513_, 2, v___x_3512_);
v___x_3514_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg(v___y_3472_, v___x_3513_, v___x_3512_, v___x_3509_, v___x_3510_);
lean_dec_ref_known(v___x_3513_, 3);
v___x_3515_ = l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7(v___x_3511_, v___x_3514_);
v___x_3516_ = l_Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8(v___x_3515_);
lean_dec_ref(v___x_3515_);
v___y_3441_ = v___y_3472_;
v___y_3442_ = v___y_3477_;
v___y_3443_ = v___y_3476_;
v___y_3444_ = v___y_3478_;
v___y_3445_ = v___x_3516_;
goto v___jp_3440_;
}
}
}
}
else
{
lean_object* v___x_3520_; lean_object* v_env_3521_; lean_object* v_scopes_3522_; lean_object* v_usedQuotCtxts_3523_; lean_object* v_nextMacroScope_3524_; lean_object* v_maxRecDepth_3525_; lean_object* v_ngen_3526_; lean_object* v_auxDeclNGen_3527_; lean_object* v_infoState_3528_; lean_object* v_traceState_3529_; lean_object* v_snapshotTasks_3530_; lean_object* v_prevLinterStates_3531_; lean_object* v_codeQualityEntryTasks_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3542_; 
lean_dec_ref(v___y_3479_);
lean_dec(v___y_3476_);
lean_dec(v___y_3474_);
lean_dec_ref(v___y_3473_);
lean_dec_ref(v___y_3472_);
v___x_3520_ = lean_st_ref_take(v___y_3478_);
v_env_3521_ = lean_ctor_get(v___x_3520_, 0);
v_scopes_3522_ = lean_ctor_get(v___x_3520_, 2);
v_usedQuotCtxts_3523_ = lean_ctor_get(v___x_3520_, 3);
v_nextMacroScope_3524_ = lean_ctor_get(v___x_3520_, 4);
v_maxRecDepth_3525_ = lean_ctor_get(v___x_3520_, 5);
v_ngen_3526_ = lean_ctor_get(v___x_3520_, 6);
v_auxDeclNGen_3527_ = lean_ctor_get(v___x_3520_, 7);
v_infoState_3528_ = lean_ctor_get(v___x_3520_, 8);
v_traceState_3529_ = lean_ctor_get(v___x_3520_, 9);
v_snapshotTasks_3530_ = lean_ctor_get(v___x_3520_, 10);
v_prevLinterStates_3531_ = lean_ctor_get(v___x_3520_, 11);
v_codeQualityEntryTasks_3532_ = lean_ctor_get(v___x_3520_, 12);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3520_);
if (v_isSharedCheck_3542_ == 0)
{
lean_object* v_unused_3543_; 
v_unused_3543_ = lean_ctor_get(v___x_3520_, 1);
lean_dec(v_unused_3543_);
v___x_3534_ = v___x_3520_;
v_isShared_3535_ = v_isSharedCheck_3542_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3532_);
lean_inc(v_prevLinterStates_3531_);
lean_inc(v_snapshotTasks_3530_);
lean_inc(v_traceState_3529_);
lean_inc(v_infoState_3528_);
lean_inc(v_auxDeclNGen_3527_);
lean_inc(v_ngen_3526_);
lean_inc(v_maxRecDepth_3525_);
lean_inc(v_nextMacroScope_3524_);
lean_inc(v_usedQuotCtxts_3523_);
lean_inc(v_scopes_3522_);
lean_inc(v_env_3521_);
lean_dec(v___x_3520_);
v___x_3534_ = lean_box(0);
v_isShared_3535_ = v_isSharedCheck_3542_;
goto v_resetjp_3533_;
}
v_resetjp_3533_:
{
lean_object* v___x_3536_; lean_object* v___x_3538_; 
v___x_3536_ = lean_box(0);
if (v_isShared_3535_ == 0)
{
lean_ctor_set(v___x_3534_, 1, v___y_3475_);
v___x_3538_ = v___x_3534_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_env_3521_);
lean_ctor_set(v_reuseFailAlloc_3541_, 1, v___y_3475_);
lean_ctor_set(v_reuseFailAlloc_3541_, 2, v_scopes_3522_);
lean_ctor_set(v_reuseFailAlloc_3541_, 3, v_usedQuotCtxts_3523_);
lean_ctor_set(v_reuseFailAlloc_3541_, 4, v_nextMacroScope_3524_);
lean_ctor_set(v_reuseFailAlloc_3541_, 5, v_maxRecDepth_3525_);
lean_ctor_set(v_reuseFailAlloc_3541_, 6, v_ngen_3526_);
lean_ctor_set(v_reuseFailAlloc_3541_, 7, v_auxDeclNGen_3527_);
lean_ctor_set(v_reuseFailAlloc_3541_, 8, v_infoState_3528_);
lean_ctor_set(v_reuseFailAlloc_3541_, 9, v_traceState_3529_);
lean_ctor_set(v_reuseFailAlloc_3541_, 10, v_snapshotTasks_3530_);
lean_ctor_set(v_reuseFailAlloc_3541_, 11, v_prevLinterStates_3531_);
lean_ctor_set(v_reuseFailAlloc_3541_, 12, v_codeQualityEntryTasks_3532_);
v___x_3538_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
lean_object* v___x_3539_; lean_object* v___x_3540_; 
v___x_3539_ = lean_st_ref_put(v___y_3478_, v___x_3538_);
v___x_3540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3540_, 0, v___x_3536_);
return v___x_3540_;
}
}
}
}
v___jp_3544_:
{
lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v_a_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v_str_3567_; lean_object* v_startInclusive_3568_; lean_object* v_endExclusive_3569_; lean_object* v___x_3571_; uint8_t v_isShared_3572_; uint8_t v_isSharedCheck_3584_; 
v___x_3557_ = l_Lean_MessageLog_toList(v___y_3552_);
lean_dec(v___y_3552_);
v___x_3558_ = lean_box(0);
v___x_3559_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___redArg(v___y_3556_, v___x_3557_, v___x_3558_);
lean_dec(v___y_3556_);
v_a_3560_ = lean_ctor_get(v___x_3559_, 0);
lean_inc(v_a_3560_);
lean_dec_ref(v___x_3559_);
v___x_3561_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply(v___y_3553_, v_a_3560_);
v___x_3562_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__4));
v___x_3563_ = l_String_intercalate(v___x_3562_, v___x_3561_);
v___x_3564_ = lean_string_utf8_byte_size(v___x_3563_);
lean_inc(v___y_3547_);
v___x_3565_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3565_, 0, v___x_3563_);
lean_ctor_set(v___x_3565_, 1, v___y_3547_);
lean_ctor_set(v___x_3565_, 2, v___x_3564_);
v___x_3566_ = l_String_Slice_trimAscii(v___x_3565_);
v_str_3567_ = lean_ctor_get(v___x_3566_, 0);
v_startInclusive_3568_ = lean_ctor_get(v___x_3566_, 1);
v_endExclusive_3569_ = lean_ctor_get(v___x_3566_, 2);
v_isSharedCheck_3584_ = !lean_is_exclusive(v___x_3566_);
if (v_isSharedCheck_3584_ == 0)
{
v___x_3571_ = v___x_3566_;
v_isShared_3572_ = v_isSharedCheck_3584_;
goto v_resetjp_3570_;
}
else
{
lean_inc(v_endExclusive_3569_);
lean_inc(v_startInclusive_3568_);
lean_inc(v_str_3567_);
lean_dec(v___x_3566_);
v___x_3571_ = lean_box(0);
v_isShared_3572_ = v_isSharedCheck_3584_;
goto v_resetjp_3570_;
}
v_resetjp_3570_:
{
lean_object* v___x_3573_; 
v___x_3573_ = lean_string_utf8_extract_fast(v_str_3567_, v_startInclusive_3568_, v_endExclusive_3569_);
lean_dec(v_endExclusive_3569_);
lean_dec(v_startInclusive_3568_);
lean_dec_ref(v_str_3567_);
if (v___y_3551_ == 0)
{
lean_object* v___x_3574_; lean_object* v___x_3575_; uint8_t v___x_3576_; 
lean_del_object(v___x_3571_);
lean_inc_ref(v___y_3545_);
v___x_3574_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply(v___y_3546_, v___y_3545_);
lean_inc_ref(v___x_3573_);
v___x_3575_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply(v___y_3546_, v___x_3573_);
v___x_3576_ = lean_string_dec_eq(v___x_3574_, v___x_3575_);
lean_dec_ref(v___x_3575_);
lean_dec_ref(v___x_3574_);
v___y_3472_ = v___x_3573_;
v___y_3473_ = v___y_3545_;
v___y_3474_ = v___y_3547_;
v___y_3475_ = v___y_3548_;
v___y_3476_ = v___y_3549_;
v___y_3477_ = v___y_3550_;
v___y_3478_ = v___y_3554_;
v___y_3479_ = v___y_3555_;
v___y_3480_ = v___x_3576_;
goto v___jp_3471_;
}
else
{
lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3581_; 
lean_inc_ref(v___x_3573_);
v___x_3577_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply(v___y_3546_, v___x_3573_);
lean_inc_ref(v___y_3545_);
v___x_3578_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply(v___y_3546_, v___y_3545_);
v___x_3579_ = lean_string_utf8_byte_size(v___x_3577_);
lean_inc(v___y_3547_);
if (v_isShared_3572_ == 0)
{
lean_ctor_set(v___x_3571_, 2, v___x_3579_);
lean_ctor_set(v___x_3571_, 1, v___y_3547_);
lean_ctor_set(v___x_3571_, 0, v___x_3577_);
v___x_3581_ = v___x_3571_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v___x_3577_);
lean_ctor_set(v_reuseFailAlloc_3583_, 1, v___y_3547_);
lean_ctor_set(v_reuseFailAlloc_3583_, 2, v___x_3579_);
v___x_3581_ = v_reuseFailAlloc_3583_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
uint8_t v___x_3582_; 
v___x_3582_ = l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9(v___x_3578_, v___x_3581_);
lean_dec_ref(v___x_3581_);
v___y_3472_ = v___x_3573_;
v___y_3473_ = v___y_3545_;
v___y_3474_ = v___y_3547_;
v___y_3475_ = v___y_3548_;
v___y_3476_ = v___y_3549_;
v___y_3477_ = v___y_3550_;
v___y_3478_ = v___y_3554_;
v___y_3479_ = v___y_3555_;
v___y_3480_ = v___x_3582_;
goto v___jp_3471_;
}
}
}
}
v___jp_3585_:
{
lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v_str_3596_; lean_object* v_startInclusive_3597_; lean_object* v_endExclusive_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; 
v___x_3592_ = lean_unsigned_to_nat(0u);
v___x_3593_ = lean_string_utf8_byte_size(v___y_3591_);
v___x_3594_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3594_, 0, v___y_3591_);
lean_ctor_set(v___x_3594_, 1, v___x_3592_);
lean_ctor_set(v___x_3594_, 2, v___x_3593_);
v___x_3595_ = l_String_Slice_trimAscii(v___x_3594_);
v_str_3596_ = lean_ctor_get(v___x_3595_, 0);
lean_inc_ref(v_str_3596_);
v_startInclusive_3597_ = lean_ctor_get(v___x_3595_, 1);
lean_inc(v_startInclusive_3597_);
v_endExclusive_3598_ = lean_ctor_get(v___x_3595_, 2);
lean_inc(v_endExclusive_3598_);
lean_dec_ref(v___x_3595_);
v___x_3599_ = lean_string_utf8_extract_fast(v_str_3596_, v_startInclusive_3597_, v_endExclusive_3598_);
lean_dec(v_endExclusive_3598_);
lean_dec(v_startInclusive_3597_);
lean_dec_ref(v_str_3596_);
v___x_3600_ = l_Lean_Elab_Tactic_GuardMsgs_removeTrailingWhitespaceMarker(v___x_3599_);
v___x_3601_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec(v___y_3586_, v___y_3588_, v___y_3590_);
if (lean_obj_tag(v___x_3601_) == 0)
{
lean_object* v_a_3602_; lean_object* v_filterFn_3603_; uint8_t v_whitespace_3604_; uint8_t v_ordering_3605_; uint8_t v_reportPositions_3606_; uint8_t v_substring_3607_; lean_object* v___x_3608_; 
v_a_3602_ = lean_ctor_get(v___x_3601_, 0);
lean_inc(v_a_3602_);
lean_dec_ref_known(v___x_3601_, 1);
v_filterFn_3603_ = lean_ctor_get(v_a_3602_, 0);
lean_inc_ref(v_filterFn_3603_);
v_whitespace_3604_ = lean_ctor_get_uint8(v_a_3602_, sizeof(void*)*1);
v_ordering_3605_ = lean_ctor_get_uint8(v_a_3602_, sizeof(void*)*1 + 1);
v_reportPositions_3606_ = lean_ctor_get_uint8(v_a_3602_, sizeof(void*)*1 + 2);
v_substring_3607_ = lean_ctor_get_uint8(v_a_3602_, sizeof(void*)*1 + 3);
lean_dec(v_a_3602_);
v___x_3608_ = l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages(v___y_3589_, v___y_3588_, v___y_3590_);
if (lean_obj_tag(v___x_3608_) == 0)
{
lean_object* v_a_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v_a_3613_; 
v_a_3609_ = lean_ctor_get(v___x_3608_, 0);
lean_inc(v_a_3609_);
lean_dec_ref_known(v___x_3608_, 1);
v___x_3610_ = l_Lean_MessageLog_toList(v_a_3609_);
v___x_3611_ = lean_obj_once(&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__5, &l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__5_once, _init_l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__5);
v___x_3612_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___redArg(v_filterFn_3603_, v___x_3610_, v___x_3611_);
lean_dec(v___x_3610_);
v_a_3613_ = lean_ctor_get(v___x_3612_, 0);
lean_inc(v_a_3613_);
lean_dec_ref(v___x_3612_);
if (v_reportPositions_3606_ == 0)
{
lean_object* v_fst_3614_; lean_object* v_snd_3615_; lean_object* v___x_3616_; 
v_fst_3614_ = lean_ctor_get(v_a_3613_, 0);
lean_inc(v_fst_3614_);
v_snd_3615_ = lean_ctor_get(v_a_3613_, 1);
lean_inc(v_snd_3615_);
lean_dec(v_a_3613_);
v___x_3616_ = lean_box(0);
v___y_3545_ = v___x_3600_;
v___y_3546_ = v_whitespace_3604_;
v___y_3547_ = v___x_3592_;
v___y_3548_ = v_snd_3615_;
v___y_3549_ = v___y_3587_;
v___y_3550_ = v___y_3588_;
v___y_3551_ = v_substring_3607_;
v___y_3552_ = v_fst_3614_;
v___y_3553_ = v_ordering_3605_;
v___y_3554_ = v___y_3590_;
v___y_3555_ = v_a_3609_;
v___y_3556_ = v___x_3616_;
goto v___jp_3544_;
}
else
{
lean_object* v_fst_3617_; lean_object* v_snd_3618_; uint8_t v___x_3619_; lean_object* v___x_3620_; 
v_fst_3617_ = lean_ctor_get(v_a_3613_, 0);
lean_inc(v_fst_3617_);
v_snd_3618_ = lean_ctor_get(v_a_3613_, 1);
lean_inc(v_snd_3618_);
lean_dec(v_a_3613_);
v___x_3619_ = 0;
v___x_3620_ = l_Lean_Syntax_getPos_x3f(v___y_3587_, v___x_3619_);
if (lean_obj_tag(v___x_3620_) == 0)
{
lean_object* v___x_3621_; 
v___x_3621_ = lean_box(0);
v___y_3545_ = v___x_3600_;
v___y_3546_ = v_whitespace_3604_;
v___y_3547_ = v___x_3592_;
v___y_3548_ = v_snd_3618_;
v___y_3549_ = v___y_3587_;
v___y_3550_ = v___y_3588_;
v___y_3551_ = v_substring_3607_;
v___y_3552_ = v_fst_3617_;
v___y_3553_ = v_ordering_3605_;
v___y_3554_ = v___y_3590_;
v___y_3555_ = v_a_3609_;
v___y_3556_ = v___x_3621_;
goto v___jp_3544_;
}
else
{
lean_object* v_val_3622_; lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3632_; 
v_val_3622_ = lean_ctor_get(v___x_3620_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3620_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3624_ = v___x_3620_;
v_isShared_3625_ = v_isSharedCheck_3632_;
goto v_resetjp_3623_;
}
else
{
lean_inc(v_val_3622_);
lean_dec(v___x_3620_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3632_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v_fileMap_3626_; lean_object* v___x_3627_; lean_object* v_line_3628_; lean_object* v___x_3630_; 
v_fileMap_3626_ = lean_ctor_get(v___y_3588_, 1);
lean_inc_ref(v_fileMap_3626_);
v___x_3627_ = l_Lean_FileMap_toPosition(v_fileMap_3626_, v_val_3622_);
lean_dec(v_val_3622_);
v_line_3628_ = lean_ctor_get(v___x_3627_, 0);
lean_inc(v_line_3628_);
lean_dec_ref(v___x_3627_);
if (v_isShared_3625_ == 0)
{
lean_ctor_set(v___x_3624_, 0, v_line_3628_);
v___x_3630_ = v___x_3624_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v_line_3628_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
v___y_3545_ = v___x_3600_;
v___y_3546_ = v_whitespace_3604_;
v___y_3547_ = v___x_3592_;
v___y_3548_ = v_snd_3618_;
v___y_3549_ = v___y_3587_;
v___y_3550_ = v___y_3588_;
v___y_3551_ = v_substring_3607_;
v___y_3552_ = v_fst_3617_;
v___y_3553_ = v_ordering_3605_;
v___y_3554_ = v___y_3590_;
v___y_3555_ = v_a_3609_;
v___y_3556_ = v___x_3630_;
goto v___jp_3544_;
}
}
}
}
}
else
{
lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3640_; 
lean_dec_ref(v_filterFn_3603_);
lean_dec_ref(v___x_3600_);
lean_dec(v___y_3587_);
v_a_3633_ = lean_ctor_get(v___x_3608_, 0);
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3608_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3635_ = v___x_3608_;
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_dec(v___x_3608_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
if (v_isShared_3636_ == 0)
{
v___x_3638_ = v___x_3635_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v_a_3633_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
}
}
}
}
else
{
lean_object* v_a_3641_; lean_object* v___x_3643_; uint8_t v_isShared_3644_; uint8_t v_isSharedCheck_3648_; 
lean_dec_ref(v___x_3600_);
lean_dec(v___y_3589_);
lean_dec(v___y_3587_);
v_a_3641_ = lean_ctor_get(v___x_3601_, 0);
v_isSharedCheck_3648_ = !lean_is_exclusive(v___x_3601_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3643_ = v___x_3601_;
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
else
{
lean_inc(v_a_3641_);
lean_dec(v___x_3601_);
v___x_3643_ = lean_box(0);
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
v_resetjp_3642_:
{
lean_object* v___x_3646_; 
if (v_isShared_3644_ == 0)
{
v___x_3646_ = v___x_3643_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v_a_3641_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
return v___x_3646_;
}
}
}
}
v___jp_3649_:
{
if (lean_obj_tag(v___y_3650_) == 0)
{
lean_object* v___x_3656_; 
v___x_3656_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9));
v___y_3586_ = v___y_3655_;
v___y_3587_ = v___y_3651_;
v___y_3588_ = v___y_3652_;
v___y_3589_ = v___y_3653_;
v___y_3590_ = v___y_3654_;
v___y_3591_ = v___x_3656_;
goto v___jp_3585_;
}
else
{
lean_object* v_val_3657_; lean_object* v___x_3658_; 
v_val_3657_ = lean_ctor_get(v___y_3650_, 0);
lean_inc(v_val_3657_);
lean_dec_ref_known(v___y_3650_, 1);
v___x_3658_ = l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10(v_val_3657_, v___y_3652_, v___y_3654_);
if (lean_obj_tag(v___x_3658_) == 0)
{
lean_object* v_a_3659_; 
v_a_3659_ = lean_ctor_get(v___x_3658_, 0);
lean_inc(v_a_3659_);
lean_dec_ref_known(v___x_3658_, 1);
v___y_3586_ = v___y_3655_;
v___y_3587_ = v___y_3651_;
v___y_3588_ = v___y_3652_;
v___y_3589_ = v___y_3653_;
v___y_3590_ = v___y_3654_;
v___y_3591_ = v_a_3659_;
goto v___jp_3585_;
}
else
{
lean_object* v_a_3660_; lean_object* v___x_3662_; uint8_t v_isShared_3663_; uint8_t v_isSharedCheck_3667_; 
lean_dec(v___y_3655_);
lean_dec(v___y_3653_);
lean_dec(v___y_3651_);
v_a_3660_ = lean_ctor_get(v___x_3658_, 0);
v_isSharedCheck_3667_ = !lean_is_exclusive(v___x_3658_);
if (v_isSharedCheck_3667_ == 0)
{
v___x_3662_ = v___x_3658_;
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
else
{
lean_inc(v_a_3660_);
lean_dec(v___x_3658_);
v___x_3662_ = lean_box(0);
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
v_resetjp_3661_:
{
lean_object* v___x_3665_; 
if (v_isShared_3663_ == 0)
{
v___x_3665_ = v___x_3662_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v_a_3660_);
v___x_3665_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
return v___x_3665_;
}
}
}
}
}
v___jp_3668_:
{
lean_object* v___x_3672_; lean_object* v_tk_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; 
v___x_3672_ = lean_unsigned_to_nat(1u);
v_tk_3673_ = l_Lean_Syntax_getArg(v_x_3432_, v___x_3672_);
v___x_3674_ = lean_unsigned_to_nat(2u);
v___x_3675_ = l_Lean_Syntax_getArg(v_x_3432_, v___x_3674_);
v___x_3676_ = lean_unsigned_to_nat(4u);
v___x_3677_ = l_Lean_Syntax_getArg(v_x_3432_, v___x_3676_);
lean_dec(v_x_3432_);
v___x_3678_ = l_Lean_Syntax_getOptional_x3f(v___x_3675_);
lean_dec(v___x_3675_);
if (lean_obj_tag(v___x_3678_) == 0)
{
lean_object* v___x_3679_; 
v___x_3679_ = lean_box(0);
v___y_3650_ = v_dc_x3f_3669_;
v___y_3651_ = v_tk_3673_;
v___y_3652_ = v___y_3670_;
v___y_3653_ = v___x_3677_;
v___y_3654_ = v___y_3671_;
v___y_3655_ = v___x_3679_;
goto v___jp_3649_;
}
else
{
lean_object* v_val_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3687_; 
v_val_3680_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3687_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3687_ == 0)
{
v___x_3682_ = v___x_3678_;
v_isShared_3683_ = v_isSharedCheck_3687_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_val_3680_);
lean_dec(v___x_3678_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3687_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3685_; 
if (v_isShared_3683_ == 0)
{
v___x_3685_ = v___x_3682_;
goto v_reusejp_3684_;
}
else
{
lean_object* v_reuseFailAlloc_3686_; 
v_reuseFailAlloc_3686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3686_, 0, v_val_3680_);
v___x_3685_ = v_reuseFailAlloc_3686_;
goto v_reusejp_3684_;
}
v_reusejp_3684_:
{
v___y_3650_ = v_dc_x3f_3669_;
v___y_3651_ = v_tk_3673_;
v___y_3652_ = v___y_3670_;
v___y_3653_ = v___x_3677_;
v___y_3654_ = v___y_3671_;
v___y_3655_ = v___x_3685_;
goto v___jp_3649_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___boxed(lean_object* v_x_3700_, lean_object* v_a_3701_, lean_object* v_a_3702_, lean_object* v_a_3703_){
_start:
{
lean_object* v_res_3704_; 
v_res_3704_ = l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs(v_x_3700_, v_a_3701_, v_a_3702_);
lean_dec(v_a_3702_);
lean_dec_ref(v_a_3701_);
return v_res_3704_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0(lean_object* v_filterFn_3705_, lean_object* v_as_3706_, lean_object* v_as_x27_3707_, lean_object* v_b_3708_, lean_object* v_a_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_){
_start:
{
lean_object* v___x_3713_; 
v___x_3713_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___redArg(v_filterFn_3705_, v_as_x27_3707_, v_b_3708_);
return v___x_3713_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___boxed(lean_object* v_filterFn_3714_, lean_object* v_as_3715_, lean_object* v_as_x27_3716_, lean_object* v_b_3717_, lean_object* v_a_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_){
_start:
{
lean_object* v_res_3722_; 
v_res_3722_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0(v_filterFn_3714_, v_as_3715_, v_as_x27_3716_, v_b_3717_, v_a_3718_, v___y_3719_, v___y_3720_);
lean_dec(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec(v_as_x27_3716_);
lean_dec(v_as_3715_);
return v_res_3722_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1(lean_object* v___y_3723_, lean_object* v_x_3724_, lean_object* v_x_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_){
_start:
{
lean_object* v___x_3729_; 
v___x_3729_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___redArg(v___y_3723_, v_x_3724_, v_x_3725_);
return v___x_3729_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___boxed(lean_object* v___y_3730_, lean_object* v_x_3731_, lean_object* v_x_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_){
_start:
{
lean_object* v_res_3736_; 
v_res_3736_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1(v___y_3730_, v_x_3731_, v_x_3732_, v___y_3733_, v___y_3734_);
lean_dec(v___y_3734_);
lean_dec_ref(v___y_3733_);
lean_dec(v___y_3730_);
return v_res_3736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4(lean_object* v_t_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_){
_start:
{
lean_object* v___x_3741_; 
v___x_3741_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___redArg(v_t_3737_, v___y_3739_);
return v___x_3741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___boxed(lean_object* v_t_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_){
_start:
{
lean_object* v_res_3746_; 
v_res_3746_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4(v_t_3742_, v___y_3743_, v___y_3744_);
lean_dec(v___y_3744_);
lean_dec_ref(v___y_3743_);
return v_res_3746_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6(lean_object* v___x_3747_, lean_object* v___x_3748_, lean_object* v___x_3749_, lean_object* v_inst_3750_, lean_object* v_R_3751_, lean_object* v_a_3752_, lean_object* v_b_3753_){
_start:
{
lean_object* v___x_3754_; 
v___x_3754_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg(v___x_3747_, v___x_3748_, v___x_3749_, v_a_3752_, v_b_3753_);
return v___x_3754_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___boxed(lean_object* v___x_3755_, lean_object* v___x_3756_, lean_object* v___x_3757_, lean_object* v_inst_3758_, lean_object* v_R_3759_, lean_object* v_a_3760_, lean_object* v_b_3761_){
_start:
{
lean_object* v_res_3762_; 
v_res_3762_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6(v___x_3755_, v___x_3756_, v___x_3757_, v_inst_3758_, v_R_3759_, v_a_3760_, v_b_3761_);
lean_dec_ref(v___x_3756_);
return v_res_3762_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5(lean_object* v_msgData_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_){
_start:
{
lean_object* v___x_3767_; 
v___x_3767_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg(v_msgData_3763_, v___y_3765_);
return v___x_3767_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___boxed(lean_object* v_msgData_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_){
_start:
{
lean_object* v_res_3772_; 
v_res_3772_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5(v_msgData_3768_, v___y_3769_, v___y_3770_);
lean_dec(v___y_3770_);
lean_dec_ref(v___y_3769_);
return v_res_3772_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8(lean_object* v___x_3773_, lean_object* v___x_3774_, lean_object* v___x_3775_, lean_object* v_inst_3776_, lean_object* v_R_3777_, lean_object* v_a_3778_, lean_object* v_b_3779_){
_start:
{
lean_object* v___x_3780_; 
v___x_3780_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg(v___x_3773_, v___x_3774_, v___x_3775_, v_a_3778_, v_b_3779_);
return v___x_3780_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___boxed(lean_object* v___x_3781_, lean_object* v___x_3782_, lean_object* v___x_3783_, lean_object* v_inst_3784_, lean_object* v_R_3785_, lean_object* v_a_3786_, lean_object* v_b_3787_){
_start:
{
lean_object* v_res_3788_; 
v_res_3788_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8(v___x_3781_, v___x_3782_, v___x_3783_, v_inst_3784_, v_R_3785_, v_a_3786_, v_b_3787_);
lean_dec_ref(v___x_3782_);
return v_res_3788_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10(lean_object* v___x_3789_, lean_object* v_original_3790_, lean_object* v_a_3791_, lean_object* v_inst_3792_, lean_object* v_a_3793_){
_start:
{
lean_object* v___x_3794_; 
v___x_3794_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg(v___x_3789_, v_original_3790_, v_a_3791_, v_a_3793_);
return v___x_3794_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___boxed(lean_object* v___x_3795_, lean_object* v_original_3796_, lean_object* v_a_3797_, lean_object* v_inst_3798_, lean_object* v_a_3799_){
_start:
{
lean_object* v_res_3800_; 
v_res_3800_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10(v___x_3795_, v_original_3796_, v_a_3797_, v_inst_3798_, v_a_3799_);
lean_dec_ref(v_a_3797_);
lean_dec_ref(v_original_3796_);
lean_dec(v___x_3795_);
return v_res_3800_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11(lean_object* v___x_3801_, lean_object* v_edited_3802_, lean_object* v_a_3803_, lean_object* v_inst_3804_, lean_object* v_a_3805_){
_start:
{
lean_object* v___x_3806_; 
v___x_3806_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg(v___x_3801_, v_edited_3802_, v_a_3803_, v_a_3805_);
return v___x_3806_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___boxed(lean_object* v___x_3807_, lean_object* v_edited_3808_, lean_object* v_a_3809_, lean_object* v_inst_3810_, lean_object* v_a_3811_){
_start:
{
lean_object* v_res_3812_; 
v_res_3812_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11(v___x_3807_, v_edited_3808_, v_a_3809_, v_inst_3810_, v_a_3811_);
lean_dec_ref(v_a_3809_);
lean_dec_ref(v_edited_3808_);
lean_dec(v___x_3807_);
return v_res_3812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14(lean_object* v___x_3813_, lean_object* v_original_3814_, lean_object* v_inst_3815_, lean_object* v_a_3816_){
_start:
{
lean_object* v___x_3817_; 
v___x_3817_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___redArg(v___x_3813_, v_original_3814_, v_a_3816_);
return v___x_3817_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___boxed(lean_object* v___x_3818_, lean_object* v_original_3819_, lean_object* v_inst_3820_, lean_object* v_a_3821_){
_start:
{
lean_object* v_res_3822_; 
v_res_3822_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14(v___x_3818_, v_original_3819_, v_inst_3820_, v_a_3821_);
lean_dec_ref(v_original_3819_);
lean_dec(v___x_3818_);
return v_res_3822_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15(lean_object* v___x_3823_, lean_object* v_edited_3824_, lean_object* v_inst_3825_, lean_object* v_a_3826_){
_start:
{
lean_object* v___x_3827_; 
v___x_3827_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___redArg(v___x_3823_, v_edited_3824_, v_a_3826_);
return v___x_3827_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___boxed(lean_object* v___x_3828_, lean_object* v_edited_3829_, lean_object* v_inst_3830_, lean_object* v_a_3831_){
_start:
{
lean_object* v_res_3832_; 
v_res_3832_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15(v___x_3828_, v_edited_3829_, v_inst_3830_, v_a_3831_);
lean_dec_ref(v_edited_3829_);
lean_dec(v___x_3828_);
return v_res_3832_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21(lean_object* v_s_3833_, lean_object* v_inst_3834_, lean_object* v_R_3835_, lean_object* v_a_3836_, uint8_t v_b_3837_, lean_object* v_c_3838_){
_start:
{
uint8_t v___x_3839_; 
v___x_3839_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg(v_s_3833_, v_a_3836_, v_b_3837_);
return v___x_3839_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___boxed(lean_object* v_s_3840_, lean_object* v_inst_3841_, lean_object* v_R_3842_, lean_object* v_a_3843_, lean_object* v_b_3844_, lean_object* v_c_3845_){
_start:
{
uint8_t v_b_boxed_3846_; uint8_t v_res_3847_; lean_object* v_r_3848_; 
v_b_boxed_3846_ = lean_unbox(v_b_3844_);
v_res_3847_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21(v_s_3840_, v_inst_3841_, v_R_3842_, v_a_3843_, v_b_boxed_3846_, v_c_3845_);
lean_dec_ref(v_s_3840_);
v_r_3848_ = lean_box(v_res_3847_);
return v_r_3848_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23(lean_object* v_00_u03b1_3849_, lean_object* v_ref_3850_, lean_object* v_msg_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_){
_start:
{
lean_object* v___x_3855_; 
v___x_3855_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___redArg(v_ref_3850_, v_msg_3851_, v___y_3852_, v___y_3853_);
return v___x_3855_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___boxed(lean_object* v_00_u03b1_3856_, lean_object* v_ref_3857_, lean_object* v_msg_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_){
_start:
{
lean_object* v_res_3862_; 
v_res_3862_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23(v_00_u03b1_3856_, v_ref_3857_, v_msg_3858_, v___y_3859_, v___y_3860_);
lean_dec(v___y_3860_);
lean_dec_ref(v___y_3859_);
lean_dec(v_ref_3857_);
return v_res_3862_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16(lean_object* v_as_3863_, lean_object* v_as_x27_3864_, lean_object* v_b_3865_, lean_object* v_a_3866_){
_start:
{
lean_object* v___x_3867_; 
v___x_3867_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___redArg(v_as_x27_3864_, v_b_3865_);
return v___x_3867_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___boxed(lean_object* v_as_3868_, lean_object* v_as_x27_3869_, lean_object* v_b_3870_, lean_object* v_a_3871_){
_start:
{
lean_object* v_res_3872_; 
v_res_3872_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16(v_as_3868_, v_as_x27_3869_, v_b_3870_, v_a_3871_);
lean_dec(v_as_x27_3869_);
lean_dec(v_as_3868_);
return v_res_3872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19(lean_object* v_lsize_3873_, lean_object* v_rsize_3874_, lean_object* v_histogram_3875_, lean_object* v_index_3876_, lean_object* v_val_3877_){
_start:
{
lean_object* v___x_3878_; 
v___x_3878_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19___redArg(v_histogram_3875_, v_index_3876_, v_val_3877_);
return v___x_3878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19___boxed(lean_object* v_lsize_3879_, lean_object* v_rsize_3880_, lean_object* v_histogram_3881_, lean_object* v_index_3882_, lean_object* v_val_3883_){
_start:
{
lean_object* v_res_3884_; 
v_res_3884_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19(v_lsize_3879_, v_rsize_3880_, v_histogram_3881_, v_index_3882_, v_val_3883_);
lean_dec(v_rsize_3880_);
lean_dec(v_lsize_3879_);
return v_res_3884_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20(lean_object* v_upperBound_3885_, lean_object* v___x_3886_, lean_object* v_fst_3887_, lean_object* v___x_3888_, lean_object* v_inst_3889_, lean_object* v_R_3890_, lean_object* v_a_3891_, lean_object* v_b_3892_, lean_object* v_c_3893_){
_start:
{
lean_object* v___x_3894_; 
v___x_3894_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___redArg(v_upperBound_3885_, v___x_3886_, v_fst_3887_, v___x_3888_, v_a_3891_, v_b_3892_);
return v___x_3894_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___boxed(lean_object* v_upperBound_3895_, lean_object* v___x_3896_, lean_object* v_fst_3897_, lean_object* v___x_3898_, lean_object* v_inst_3899_, lean_object* v_R_3900_, lean_object* v_a_3901_, lean_object* v_b_3902_, lean_object* v_c_3903_){
_start:
{
lean_object* v_res_3904_; 
v_res_3904_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20(v_upperBound_3895_, v___x_3896_, v_fst_3897_, v___x_3898_, v_inst_3899_, v_R_3900_, v_a_3901_, v_b_3902_, v_c_3903_);
lean_dec(v___x_3898_);
lean_dec_ref(v_fst_3897_);
lean_dec(v___x_3896_);
lean_dec(v_upperBound_3895_);
return v_res_3904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21(lean_object* v_lsize_3905_, lean_object* v_rsize_3906_, lean_object* v_histogram_3907_, lean_object* v_index_3908_, lean_object* v_val_3909_){
_start:
{
lean_object* v___x_3910_; 
v___x_3910_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21___redArg(v_histogram_3907_, v_index_3908_, v_val_3909_);
return v___x_3910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21___boxed(lean_object* v_lsize_3911_, lean_object* v_rsize_3912_, lean_object* v_histogram_3913_, lean_object* v_index_3914_, lean_object* v_val_3915_){
_start:
{
lean_object* v_res_3916_; 
v_res_3916_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21(v_lsize_3911_, v_rsize_3912_, v_histogram_3913_, v_index_3914_, v_val_3915_);
lean_dec(v_rsize_3912_);
lean_dec(v_lsize_3911_);
return v_res_3916_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22(lean_object* v_upperBound_3917_, lean_object* v_fst_3918_, lean_object* v___x_3919_, lean_object* v_fst_3920_, lean_object* v_inst_3921_, lean_object* v_R_3922_, lean_object* v_a_3923_, lean_object* v_b_3924_, lean_object* v_c_3925_){
_start:
{
lean_object* v___x_3926_; 
v___x_3926_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___redArg(v_upperBound_3917_, v_fst_3918_, v___x_3919_, v_fst_3920_, v_a_3923_, v_b_3924_);
return v___x_3926_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___boxed(lean_object* v_upperBound_3927_, lean_object* v_fst_3928_, lean_object* v___x_3929_, lean_object* v_fst_3930_, lean_object* v_inst_3931_, lean_object* v_R_3932_, lean_object* v_a_3933_, lean_object* v_b_3934_, lean_object* v_c_3935_){
_start:
{
lean_object* v_res_3936_; 
v_res_3936_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22(v_upperBound_3927_, v_fst_3928_, v___x_3929_, v_fst_3930_, v_inst_3931_, v_R_3932_, v_a_3933_, v_b_3934_, v_c_3935_);
lean_dec_ref(v_fst_3930_);
lean_dec(v___x_3929_);
lean_dec_ref(v_fst_3928_);
lean_dec(v_upperBound_3927_);
return v_res_3936_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35(lean_object* v_00_u03b1_3937_, lean_object* v_msg_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_){
_start:
{
lean_object* v___x_3942_; 
v___x_3942_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___redArg(v_msg_3938_, v___y_3939_, v___y_3940_);
return v___x_3942_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___boxed(lean_object* v_00_u03b1_3943_, lean_object* v_msg_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_){
_start:
{
lean_object* v_res_3948_; 
v_res_3948_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35(v_00_u03b1_3943_, v_msg_3944_, v___y_3945_, v___y_3946_);
lean_dec(v___y_3946_);
lean_dec_ref(v___y_3945_);
return v_res_3948_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25(lean_object* v_00_u03b2_3949_, lean_object* v_m_3950_, lean_object* v_a_3951_){
_start:
{
lean_object* v___x_3952_; 
v___x_3952_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg(v_m_3950_, v_a_3951_);
return v___x_3952_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___boxed(lean_object* v_00_u03b2_3953_, lean_object* v_m_3954_, lean_object* v_a_3955_){
_start:
{
lean_object* v_res_3956_; 
v_res_3956_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25(v_00_u03b2_3953_, v_m_3954_, v_a_3955_);
lean_dec_ref(v_a_3955_);
lean_dec_ref(v_m_3954_);
return v_res_3956_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26(lean_object* v_00_u03b2_3957_, lean_object* v_m_3958_, lean_object* v_a_3959_, lean_object* v_b_3960_){
_start:
{
lean_object* v___x_3961_; 
v___x_3961_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26___redArg(v_m_3958_, v_a_3959_, v_b_3960_);
return v___x_3961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40(lean_object* v_msgData_3962_, lean_object* v_macroStack_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_){
_start:
{
lean_object* v___x_3967_; 
v___x_3967_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg(v_msgData_3962_, v_macroStack_3963_, v___y_3965_);
return v___x_3967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___boxed(lean_object* v_msgData_3968_, lean_object* v_macroStack_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_){
_start:
{
lean_object* v_res_3973_; 
v_res_3973_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40(v_msgData_3968_, v_macroStack_3969_, v___y_3970_, v___y_3971_);
lean_dec(v___y_3971_);
lean_dec_ref(v___y_3970_);
return v_res_3973_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20_spec__29(lean_object* v_inst_3974_, lean_object* v_R_3975_, lean_object* v_a_3976_, lean_object* v_b_3977_){
_start:
{
lean_object* v___x_3978_; 
v___x_3978_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20_spec__29___redArg(v_a_3976_, v_b_3977_);
return v___x_3978_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35(lean_object* v_00_u03b2_3979_, lean_object* v_a_3980_, lean_object* v_x_3981_){
_start:
{
lean_object* v___x_3982_; 
v___x_3982_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___redArg(v_a_3980_, v_x_3981_);
return v___x_3982_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___boxed(lean_object* v_00_u03b2_3983_, lean_object* v_a_3984_, lean_object* v_x_3985_){
_start:
{
lean_object* v_res_3986_; 
v_res_3986_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35(v_00_u03b2_3983_, v_a_3984_, v_x_3985_);
lean_dec(v_x_3985_);
lean_dec_ref(v_a_3984_);
return v_res_3986_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37(lean_object* v_00_u03b2_3987_, lean_object* v_a_3988_, lean_object* v_x_3989_){
_start:
{
uint8_t v___x_3990_; 
v___x_3990_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___redArg(v_a_3988_, v_x_3989_);
return v___x_3990_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___boxed(lean_object* v_00_u03b2_3991_, lean_object* v_a_3992_, lean_object* v_x_3993_){
_start:
{
uint8_t v_res_3994_; lean_object* v_r_3995_; 
v_res_3994_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37(v_00_u03b2_3991_, v_a_3992_, v_x_3993_);
lean_dec(v_x_3993_);
lean_dec_ref(v_a_3992_);
v_r_3995_ = lean_box(v_res_3994_);
return v_r_3995_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38(lean_object* v_00_u03b2_3996_, lean_object* v_data_3997_){
_start:
{
lean_object* v___x_3998_; 
v___x_3998_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38___redArg(v_data_3997_);
return v___x_3998_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__39(lean_object* v_00_u03b2_3999_, lean_object* v_a_4000_, lean_object* v_b_4001_, lean_object* v_x_4002_){
_start:
{
lean_object* v___x_4003_; 
v___x_4003_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__39___redArg(v_a_4000_, v_b_4001_, v_x_4002_);
return v___x_4003_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44(lean_object* v_00_u03b2_4004_, lean_object* v_i_4005_, lean_object* v_source_4006_, lean_object* v_target_4007_){
_start:
{
lean_object* v___x_4008_; 
v___x_4008_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44___redArg(v_i_4005_, v_source_4006_, v_target_4007_);
return v___x_4008_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44_spec__46(lean_object* v_00_u03b2_4009_, lean_object* v_x_4010_, lean_object* v_x_4011_){
_start:
{
lean_object* v___x_4012_; 
v___x_4012_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44_spec__46___redArg(v_x_4010_, v_x_4011_);
return v___x_4012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1(){
_start:
{
lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; 
v___x_4021_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_4022_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1));
v___x_4023_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1));
v___x_4024_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___boxed), 4, 0);
v___x_4025_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4021_, v___x_4022_, v___x_4023_, v___x_4024_);
return v___x_4025_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___boxed(lean_object* v_a_4026_){
_start:
{
lean_object* v_res_4027_; 
v_res_4027_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1();
return v_res_4027_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3(){
_start:
{
lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; 
v___x_4054_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1));
v___x_4055_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__6));
v___x_4056_ = l_Lean_addBuiltinDeclarationRanges(v___x_4054_, v___x_4055_);
return v___x_4056_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___boxed(lean_object* v_a_4057_){
_start:
{
lean_object* v_res_4058_; 
v_res_4058_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3();
return v_res_4058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__1(lean_object* v___y_4059_){
_start:
{
lean_object* v_doc_4061_; lean_object* v___x_4062_; 
v_doc_4061_ = lean_ctor_get(v___y_4059_, 1);
lean_inc_ref(v_doc_4061_);
v___x_4062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4062_, 0, v_doc_4061_);
return v___x_4062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__1___boxed(lean_object* v___y_4063_, lean_object* v___y_4064_){
_start:
{
lean_object* v_res_4065_; 
v_res_4065_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__1(v___y_4063_);
lean_dec_ref(v___y_4063_);
return v_res_4065_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___redArg(lean_object* v_s_4066_, lean_object* v_a_4067_, uint8_t v_b_4068_){
_start:
{
lean_object* v_str_4069_; lean_object* v_startInclusive_4070_; lean_object* v_endExclusive_4071_; lean_object* v___x_4072_; uint8_t v_decide_4073_; 
v_str_4069_ = lean_ctor_get(v_s_4066_, 0);
v_startInclusive_4070_ = lean_ctor_get(v_s_4066_, 1);
v_endExclusive_4071_ = lean_ctor_get(v_s_4066_, 2);
v___x_4072_ = lean_nat_sub(v_endExclusive_4071_, v_startInclusive_4070_);
v_decide_4073_ = lean_nat_dec_eq(v_a_4067_, v___x_4072_);
lean_dec(v___x_4072_);
if (v_decide_4073_ == 0)
{
lean_object* v___x_4074_; uint32_t v___x_4075_; uint32_t v___x_4076_; uint8_t v___x_4077_; 
v___x_4074_ = lean_nat_add(v_startInclusive_4070_, v_a_4067_);
lean_dec(v_a_4067_);
v___x_4075_ = lean_string_utf8_get_fast(v_str_4069_, v___x_4074_);
v___x_4076_ = 10;
v___x_4077_ = lean_uint32_dec_eq(v___x_4075_, v___x_4076_);
if (v___x_4077_ == 0)
{
lean_object* v___x_4078_; lean_object* v___x_4079_; 
v___x_4078_ = lean_string_utf8_next_fast(v_str_4069_, v___x_4074_);
lean_dec(v___x_4074_);
v___x_4079_ = lean_nat_sub(v___x_4078_, v_startInclusive_4070_);
v_a_4067_ = v___x_4079_;
v_b_4068_ = v___x_4077_;
goto _start;
}
else
{
lean_dec(v___x_4074_);
return v___x_4077_;
}
}
else
{
lean_dec(v_a_4067_);
return v_b_4068_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___redArg___boxed(lean_object* v_s_4081_, lean_object* v_a_4082_, lean_object* v_b_4083_){
_start:
{
uint8_t v_b_boxed_4084_; uint8_t v_res_4085_; lean_object* v_r_4086_; 
v_b_boxed_4084_ = lean_unbox(v_b_4083_);
v_res_4085_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___redArg(v_s_4081_, v_a_4082_, v_b_boxed_4084_);
lean_dec_ref(v_s_4081_);
v_r_4086_ = lean_box(v_res_4085_);
return v_r_4086_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2(lean_object* v_s_4087_){
_start:
{
lean_object* v_searcher_4088_; uint8_t v___x_4089_; uint8_t v___x_4090_; 
v_searcher_4088_ = lean_unsigned_to_nat(0u);
v___x_4089_ = 0;
v___x_4090_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___redArg(v_s_4087_, v_searcher_4088_, v___x_4089_);
return v___x_4090_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2___boxed(lean_object* v_s_4091_){
_start:
{
uint8_t v_res_4092_; lean_object* v_r_4093_; 
v_res_4092_ = l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2(v_s_4091_);
lean_dec_ref(v_s_4091_);
v_r_4093_ = lean_box(v_res_4092_);
return v_r_4093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0(lean_object* v___x_4105_, lean_object* v_fst_4106_, uint8_t v___x_4107_, lean_object* v_a_4108_, lean_object* v___x_4109_, lean_object* v___x_4110_, lean_object* v___x_4111_, lean_object* v___x_4112_, lean_object* v___x_4113_, lean_object* v___x_4114_, lean_object* v___x_4115_, lean_object* v___x_4116_, lean_object* v_snd_4117_, lean_object* v___x_4118_){
_start:
{
if (lean_obj_tag(v___x_4105_) == 1)
{
lean_object* v_val_4120_; lean_object* v___x_4122_; uint8_t v_isShared_4123_; uint8_t v_isSharedCheck_4181_; 
v_val_4120_ = lean_ctor_get(v___x_4105_, 0);
v_isSharedCheck_4181_ = !lean_is_exclusive(v___x_4105_);
if (v_isSharedCheck_4181_ == 0)
{
v___x_4122_ = v___x_4105_;
v_isShared_4123_ = v_isSharedCheck_4181_;
goto v_resetjp_4121_;
}
else
{
lean_inc(v_val_4120_);
lean_dec(v___x_4105_);
v___x_4122_ = lean_box(0);
v_isShared_4123_ = v_isSharedCheck_4181_;
goto v_resetjp_4121_;
}
v_resetjp_4121_:
{
lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; 
v___x_4124_ = lean_unsigned_to_nat(0u);
v___x_4125_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__2));
v___x_4126_ = l_Lean_Syntax_setArg(v_fst_4106_, v___x_4124_, v___x_4125_);
v___x_4127_ = l_Lean_Syntax_getPos_x3f(v___x_4126_, v___x_4107_);
lean_dec(v___x_4126_);
if (lean_obj_tag(v___x_4127_) == 1)
{
lean_object* v_val_4128_; lean_object* v___x_4130_; uint8_t v_isShared_4131_; uint8_t v_isSharedCheck_4177_; 
lean_dec_ref(v___x_4118_);
v_val_4128_ = lean_ctor_get(v___x_4127_, 0);
v_isSharedCheck_4177_ = !lean_is_exclusive(v___x_4127_);
if (v_isSharedCheck_4177_ == 0)
{
v___x_4130_ = v___x_4127_;
v_isShared_4131_ = v_isSharedCheck_4177_;
goto v_resetjp_4129_;
}
else
{
lean_inc(v_val_4128_);
lean_dec(v___x_4127_);
v___x_4130_ = lean_box(0);
v_isShared_4131_ = v_isSharedCheck_4177_;
goto v_resetjp_4129_;
}
v_resetjp_4129_:
{
lean_object* v___y_4133_; lean_object* v___x_4159_; lean_object* v___x_4165_; uint8_t v___x_4166_; 
v___x_4159_ = l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace(v_snd_4117_);
v___x_4165_ = lean_string_utf8_byte_size(v___x_4159_);
v___x_4166_ = lean_nat_dec_eq(v___x_4165_, v___x_4124_);
if (v___x_4166_ == 0)
{
lean_object* v___x_4167_; lean_object* v___x_4168_; uint8_t v___x_4169_; 
v___x_4167_ = lean_string_length(v___x_4159_);
v___x_4168_ = lean_unsigned_to_nat(93u);
v___x_4169_ = lean_nat_dec_le(v___x_4167_, v___x_4168_);
if (v___x_4169_ == 0)
{
goto v___jp_4160_;
}
else
{
lean_object* v___x_4170_; uint8_t v___x_4171_; 
lean_inc_ref(v___x_4159_);
v___x_4170_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4170_, 0, v___x_4159_);
lean_ctor_set(v___x_4170_, 1, v___x_4124_);
lean_ctor_set(v___x_4170_, 2, v___x_4165_);
v___x_4171_ = l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2(v___x_4170_);
lean_dec_ref_known(v___x_4170_, 3);
if (v___x_4171_ == 0)
{
lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; 
v___x_4172_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__5));
v___x_4173_ = lean_string_append(v___x_4172_, v___x_4159_);
lean_dec_ref(v___x_4159_);
v___x_4174_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__6));
v___x_4175_ = lean_string_append(v___x_4173_, v___x_4174_);
v___y_4133_ = v___x_4175_;
goto v___jp_4132_;
}
else
{
goto v___jp_4160_;
}
}
}
else
{
lean_object* v___x_4176_; 
lean_dec_ref(v___x_4159_);
v___x_4176_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9));
v___y_4133_ = v___x_4176_;
goto v___jp_4132_;
}
v___jp_4132_:
{
lean_object* v_toEditableDocumentCore_4134_; lean_object* v_meta_4135_; lean_object* v___x_4137_; uint8_t v_isShared_4138_; uint8_t v_isSharedCheck_4155_; 
v_toEditableDocumentCore_4134_ = lean_ctor_get(v_a_4108_, 0);
lean_inc_ref(v_toEditableDocumentCore_4134_);
v_meta_4135_ = lean_ctor_get(v_toEditableDocumentCore_4134_, 0);
v_isSharedCheck_4155_ = !lean_is_exclusive(v_toEditableDocumentCore_4134_);
if (v_isSharedCheck_4155_ == 0)
{
lean_object* v_unused_4156_; lean_object* v_unused_4157_; lean_object* v_unused_4158_; 
v_unused_4156_ = lean_ctor_get(v_toEditableDocumentCore_4134_, 3);
lean_dec(v_unused_4156_);
v_unused_4157_ = lean_ctor_get(v_toEditableDocumentCore_4134_, 2);
lean_dec(v_unused_4157_);
v_unused_4158_ = lean_ctor_get(v_toEditableDocumentCore_4134_, 1);
lean_dec(v_unused_4158_);
v___x_4137_ = v_toEditableDocumentCore_4134_;
v_isShared_4138_ = v_isSharedCheck_4155_;
goto v_resetjp_4136_;
}
else
{
lean_inc(v_meta_4135_);
lean_dec(v_toEditableDocumentCore_4134_);
v___x_4137_ = lean_box(0);
v_isShared_4138_ = v_isSharedCheck_4155_;
goto v_resetjp_4136_;
}
v_resetjp_4136_:
{
lean_object* v_text_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4145_; 
v_text_4139_ = lean_ctor_get(v_meta_4135_, 3);
lean_inc_ref(v_text_4139_);
lean_dec_ref(v_meta_4135_);
v___x_4140_ = l_Lean_Server_FileWorker_EditableDocument_versionedIdentifier(v_a_4108_);
v___x_4141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4141_, 0, v_val_4120_);
lean_ctor_set(v___x_4141_, 1, v_val_4128_);
v___x_4142_ = l_Lean_FileMap_utf8RangeToLspRange(v_text_4139_, v___x_4141_);
v___x_4143_ = lean_box(0);
lean_inc(v___x_4109_);
if (v_isShared_4138_ == 0)
{
lean_ctor_set(v___x_4137_, 3, v___x_4109_);
lean_ctor_set(v___x_4137_, 2, v___x_4143_);
lean_ctor_set(v___x_4137_, 1, v___y_4133_);
lean_ctor_set(v___x_4137_, 0, v___x_4142_);
v___x_4145_ = v___x_4137_;
goto v_reusejp_4144_;
}
else
{
lean_object* v_reuseFailAlloc_4154_; 
v_reuseFailAlloc_4154_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4154_, 0, v___x_4142_);
lean_ctor_set(v_reuseFailAlloc_4154_, 1, v___y_4133_);
lean_ctor_set(v_reuseFailAlloc_4154_, 2, v___x_4143_);
lean_ctor_set(v_reuseFailAlloc_4154_, 3, v___x_4109_);
v___x_4145_ = v_reuseFailAlloc_4154_;
goto v_reusejp_4144_;
}
v_reusejp_4144_:
{
lean_object* v___x_4146_; lean_object* v___x_4148_; 
v___x_4146_ = l_Lean_Lsp_WorkspaceEdit_ofTextEdit(v___x_4140_, v___x_4145_);
if (v_isShared_4131_ == 0)
{
lean_ctor_set(v___x_4130_, 0, v___x_4146_);
v___x_4148_ = v___x_4130_;
goto v_reusejp_4147_;
}
else
{
lean_object* v_reuseFailAlloc_4153_; 
v_reuseFailAlloc_4153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4153_, 0, v___x_4146_);
v___x_4148_ = v_reuseFailAlloc_4153_;
goto v_reusejp_4147_;
}
v_reusejp_4147_:
{
lean_object* v___x_4149_; lean_object* v___x_4151_; 
lean_inc(v___x_4109_);
v___x_4149_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_4149_, 0, v___x_4109_);
lean_ctor_set(v___x_4149_, 1, v___x_4109_);
lean_ctor_set(v___x_4149_, 2, v___x_4110_);
lean_ctor_set(v___x_4149_, 3, v___x_4111_);
lean_ctor_set(v___x_4149_, 4, v___x_4112_);
lean_ctor_set(v___x_4149_, 5, v___x_4113_);
lean_ctor_set(v___x_4149_, 6, v___x_4114_);
lean_ctor_set(v___x_4149_, 7, v___x_4148_);
lean_ctor_set(v___x_4149_, 8, v___x_4115_);
lean_ctor_set(v___x_4149_, 9, v___x_4116_);
if (v_isShared_4123_ == 0)
{
lean_ctor_set_tag(v___x_4122_, 0);
lean_ctor_set(v___x_4122_, 0, v___x_4149_);
v___x_4151_ = v___x_4122_;
goto v_reusejp_4150_;
}
else
{
lean_object* v_reuseFailAlloc_4152_; 
v_reuseFailAlloc_4152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4152_, 0, v___x_4149_);
v___x_4151_ = v_reuseFailAlloc_4152_;
goto v_reusejp_4150_;
}
v_reusejp_4150_:
{
return v___x_4151_;
}
}
}
}
}
v___jp_4160_:
{
lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; 
v___x_4161_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__3));
v___x_4162_ = lean_string_append(v___x_4161_, v___x_4159_);
lean_dec_ref(v___x_4159_);
v___x_4163_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__4));
v___x_4164_ = lean_string_append(v___x_4162_, v___x_4163_);
v___y_4133_ = v___x_4164_;
goto v___jp_4132_;
}
}
}
else
{
lean_object* v___x_4179_; 
lean_dec(v___x_4127_);
lean_dec(v_val_4120_);
lean_dec_ref(v_snd_4117_);
lean_dec(v___x_4116_);
lean_dec(v___x_4115_);
lean_dec(v___x_4114_);
lean_dec(v___x_4113_);
lean_dec(v___x_4112_);
lean_dec(v___x_4111_);
lean_dec_ref(v___x_4110_);
lean_dec(v___x_4109_);
lean_dec_ref(v_a_4108_);
if (v_isShared_4123_ == 0)
{
lean_ctor_set_tag(v___x_4122_, 0);
lean_ctor_set(v___x_4122_, 0, v___x_4118_);
v___x_4179_ = v___x_4122_;
goto v_reusejp_4178_;
}
else
{
lean_object* v_reuseFailAlloc_4180_; 
v_reuseFailAlloc_4180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4180_, 0, v___x_4118_);
v___x_4179_ = v_reuseFailAlloc_4180_;
goto v_reusejp_4178_;
}
v_reusejp_4178_:
{
return v___x_4179_;
}
}
}
}
else
{
lean_object* v___x_4182_; 
lean_dec_ref(v_snd_4117_);
lean_dec(v___x_4116_);
lean_dec(v___x_4115_);
lean_dec(v___x_4114_);
lean_dec(v___x_4113_);
lean_dec(v___x_4112_);
lean_dec(v___x_4111_);
lean_dec_ref(v___x_4110_);
lean_dec(v___x_4109_);
lean_dec_ref(v_a_4108_);
lean_dec(v_fst_4106_);
lean_dec(v___x_4105_);
v___x_4182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4182_, 0, v___x_4118_);
return v___x_4182_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___boxed(lean_object* v___x_4183_, lean_object* v_fst_4184_, lean_object* v___x_4185_, lean_object* v_a_4186_, lean_object* v___x_4187_, lean_object* v___x_4188_, lean_object* v___x_4189_, lean_object* v___x_4190_, lean_object* v___x_4191_, lean_object* v___x_4192_, lean_object* v___x_4193_, lean_object* v___x_4194_, lean_object* v_snd_4195_, lean_object* v___x_4196_, lean_object* v___y_4197_){
_start:
{
uint8_t v___x_4626__boxed_4198_; lean_object* v_res_4199_; 
v___x_4626__boxed_4198_ = lean_unbox(v___x_4185_);
v_res_4199_ = l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0(v___x_4183_, v_fst_4184_, v___x_4626__boxed_4198_, v_a_4186_, v___x_4187_, v___x_4188_, v___x_4189_, v___x_4190_, v___x_4191_, v___x_4192_, v___x_4193_, v___x_4194_, v_snd_4195_, v___x_4196_);
return v_res_4199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4(lean_object* v_as_4203_, size_t v_sz_4204_, size_t v_i_4205_, lean_object* v_b_4206_){
_start:
{
lean_object* v_a_4208_; uint8_t v___x_4212_; 
v___x_4212_ = lean_usize_dec_lt(v_i_4205_, v_sz_4204_);
if (v___x_4212_ == 0)
{
lean_inc_ref(v_b_4206_);
return v_b_4206_;
}
else
{
lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v_a_4215_; 
v___x_4213_ = lean_box(0);
v___x_4214_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0));
v_a_4215_ = lean_array_uget(v_as_4203_, v_i_4205_);
if (lean_obj_tag(v_a_4215_) == 1)
{
lean_object* v_i_4216_; lean_object* v___x_4218_; uint8_t v_isShared_4219_; uint8_t v_isSharedCheck_4250_; 
v_i_4216_ = lean_ctor_get(v_a_4215_, 0);
v_isSharedCheck_4250_ = !lean_is_exclusive(v_a_4215_);
if (v_isSharedCheck_4250_ == 0)
{
lean_object* v_unused_4251_; 
v_unused_4251_ = lean_ctor_get(v_a_4215_, 1);
lean_dec(v_unused_4251_);
v___x_4218_ = v_a_4215_;
v_isShared_4219_ = v_isSharedCheck_4250_;
goto v_resetjp_4217_;
}
else
{
lean_inc(v_i_4216_);
lean_dec(v_a_4215_);
v___x_4218_ = lean_box(0);
v_isShared_4219_ = v_isSharedCheck_4250_;
goto v_resetjp_4217_;
}
v_resetjp_4217_:
{
if (lean_obj_tag(v_i_4216_) == 10)
{
lean_object* v_i_4220_; lean_object* v___x_4222_; uint8_t v_isShared_4223_; uint8_t v_isSharedCheck_4249_; 
v_i_4220_ = lean_ctor_get(v_i_4216_, 0);
v_isSharedCheck_4249_ = !lean_is_exclusive(v_i_4216_);
if (v_isSharedCheck_4249_ == 0)
{
v___x_4222_ = v_i_4216_;
v_isShared_4223_ = v_isSharedCheck_4249_;
goto v_resetjp_4221_;
}
else
{
lean_inc(v_i_4220_);
lean_dec(v_i_4216_);
v___x_4222_ = lean_box(0);
v_isShared_4223_ = v_isSharedCheck_4249_;
goto v_resetjp_4221_;
}
v_resetjp_4221_:
{
lean_object* v_stx_4224_; lean_object* v_value_4225_; lean_object* v___x_4227_; uint8_t v_isShared_4228_; uint8_t v_isSharedCheck_4248_; 
v_stx_4224_ = lean_ctor_get(v_i_4220_, 0);
v_value_4225_ = lean_ctor_get(v_i_4220_, 1);
v_isSharedCheck_4248_ = !lean_is_exclusive(v_i_4220_);
if (v_isSharedCheck_4248_ == 0)
{
v___x_4227_ = v_i_4220_;
v_isShared_4228_ = v_isSharedCheck_4248_;
goto v_resetjp_4226_;
}
else
{
lean_inc(v_value_4225_);
lean_inc(v_stx_4224_);
lean_dec(v_i_4220_);
v___x_4227_ = lean_box(0);
v_isShared_4228_ = v_isSharedCheck_4248_;
goto v_resetjp_4226_;
}
v_resetjp_4226_:
{
lean_object* v___x_4229_; lean_object* v___x_4230_; 
v___x_4229_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_instImpl_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_));
v___x_4230_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_value_4225_, v___x_4229_);
lean_dec(v_value_4225_);
if (lean_obj_tag(v___x_4230_) == 0)
{
lean_del_object(v___x_4227_);
lean_dec(v_stx_4224_);
lean_del_object(v___x_4222_);
lean_del_object(v___x_4218_);
v_a_4208_ = v___x_4214_;
goto v___jp_4207_;
}
else
{
lean_object* v_val_4231_; lean_object* v___x_4233_; uint8_t v_isShared_4234_; uint8_t v_isSharedCheck_4247_; 
v_val_4231_ = lean_ctor_get(v___x_4230_, 0);
v_isSharedCheck_4247_ = !lean_is_exclusive(v___x_4230_);
if (v_isSharedCheck_4247_ == 0)
{
v___x_4233_ = v___x_4230_;
v_isShared_4234_ = v_isSharedCheck_4247_;
goto v_resetjp_4232_;
}
else
{
lean_inc(v_val_4231_);
lean_dec(v___x_4230_);
v___x_4233_ = lean_box(0);
v_isShared_4234_ = v_isSharedCheck_4247_;
goto v_resetjp_4232_;
}
v_resetjp_4232_:
{
lean_object* v___x_4236_; 
if (v_isShared_4228_ == 0)
{
lean_ctor_set(v___x_4227_, 1, v_val_4231_);
v___x_4236_ = v___x_4227_;
goto v_reusejp_4235_;
}
else
{
lean_object* v_reuseFailAlloc_4246_; 
v_reuseFailAlloc_4246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4246_, 0, v_stx_4224_);
lean_ctor_set(v_reuseFailAlloc_4246_, 1, v_val_4231_);
v___x_4236_ = v_reuseFailAlloc_4246_;
goto v_reusejp_4235_;
}
v_reusejp_4235_:
{
lean_object* v___x_4238_; 
if (v_isShared_4234_ == 0)
{
lean_ctor_set(v___x_4233_, 0, v___x_4236_);
v___x_4238_ = v___x_4233_;
goto v_reusejp_4237_;
}
else
{
lean_object* v_reuseFailAlloc_4245_; 
v_reuseFailAlloc_4245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v___x_4236_);
v___x_4238_ = v_reuseFailAlloc_4245_;
goto v_reusejp_4237_;
}
v_reusejp_4237_:
{
lean_object* v___x_4240_; 
if (v_isShared_4223_ == 0)
{
lean_ctor_set_tag(v___x_4222_, 1);
lean_ctor_set(v___x_4222_, 0, v___x_4238_);
v___x_4240_ = v___x_4222_;
goto v_reusejp_4239_;
}
else
{
lean_object* v_reuseFailAlloc_4244_; 
v_reuseFailAlloc_4244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4244_, 0, v___x_4238_);
v___x_4240_ = v_reuseFailAlloc_4244_;
goto v_reusejp_4239_;
}
v_reusejp_4239_:
{
lean_object* v___x_4242_; 
if (v_isShared_4219_ == 0)
{
lean_ctor_set_tag(v___x_4218_, 0);
lean_ctor_set(v___x_4218_, 1, v___x_4213_);
lean_ctor_set(v___x_4218_, 0, v___x_4240_);
v___x_4242_ = v___x_4218_;
goto v_reusejp_4241_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v___x_4240_);
lean_ctor_set(v_reuseFailAlloc_4243_, 1, v___x_4213_);
v___x_4242_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4241_;
}
v_reusejp_4241_:
{
return v___x_4242_;
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
lean_del_object(v___x_4218_);
lean_dec_ref(v_i_4216_);
v_a_4208_ = v___x_4214_;
goto v___jp_4207_;
}
}
}
else
{
lean_dec(v_a_4215_);
v_a_4208_ = v___x_4214_;
goto v___jp_4207_;
}
}
v___jp_4207_:
{
size_t v___x_4209_; size_t v___x_4210_; 
v___x_4209_ = ((size_t)1ULL);
v___x_4210_ = lean_usize_add(v_i_4205_, v___x_4209_);
v_i_4205_ = v___x_4210_;
v_b_4206_ = v_a_4208_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___boxed(lean_object* v_as_4252_, lean_object* v_sz_4253_, lean_object* v_i_4254_, lean_object* v_b_4255_){
_start:
{
size_t v_sz_boxed_4256_; size_t v_i_boxed_4257_; lean_object* v_res_4258_; 
v_sz_boxed_4256_ = lean_unbox_usize(v_sz_4253_);
lean_dec(v_sz_4253_);
v_i_boxed_4257_ = lean_unbox_usize(v_i_4254_);
lean_dec(v_i_4254_);
v_res_4258_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4(v_as_4252_, v_sz_boxed_4256_, v_i_boxed_4257_, v_b_4255_);
lean_dec_ref(v_b_4255_);
lean_dec_ref(v_as_4252_);
return v_res_4258_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1(lean_object* v_as_4259_, size_t v_sz_4260_, size_t v_i_4261_, lean_object* v_b_4262_){
_start:
{
lean_object* v_a_4264_; uint8_t v___x_4268_; 
v___x_4268_ = lean_usize_dec_lt(v_i_4261_, v_sz_4260_);
if (v___x_4268_ == 0)
{
lean_inc_ref(v_b_4262_);
return v_b_4262_;
}
else
{
lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v_a_4271_; 
v___x_4269_ = lean_box(0);
v___x_4270_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0));
v_a_4271_ = lean_array_uget(v_as_4259_, v_i_4261_);
if (lean_obj_tag(v_a_4271_) == 1)
{
lean_object* v_i_4272_; lean_object* v___x_4274_; uint8_t v_isShared_4275_; uint8_t v_isSharedCheck_4306_; 
v_i_4272_ = lean_ctor_get(v_a_4271_, 0);
v_isSharedCheck_4306_ = !lean_is_exclusive(v_a_4271_);
if (v_isSharedCheck_4306_ == 0)
{
lean_object* v_unused_4307_; 
v_unused_4307_ = lean_ctor_get(v_a_4271_, 1);
lean_dec(v_unused_4307_);
v___x_4274_ = v_a_4271_;
v_isShared_4275_ = v_isSharedCheck_4306_;
goto v_resetjp_4273_;
}
else
{
lean_inc(v_i_4272_);
lean_dec(v_a_4271_);
v___x_4274_ = lean_box(0);
v_isShared_4275_ = v_isSharedCheck_4306_;
goto v_resetjp_4273_;
}
v_resetjp_4273_:
{
if (lean_obj_tag(v_i_4272_) == 10)
{
lean_object* v_i_4276_; lean_object* v___x_4278_; uint8_t v_isShared_4279_; uint8_t v_isSharedCheck_4305_; 
v_i_4276_ = lean_ctor_get(v_i_4272_, 0);
v_isSharedCheck_4305_ = !lean_is_exclusive(v_i_4272_);
if (v_isSharedCheck_4305_ == 0)
{
v___x_4278_ = v_i_4272_;
v_isShared_4279_ = v_isSharedCheck_4305_;
goto v_resetjp_4277_;
}
else
{
lean_inc(v_i_4276_);
lean_dec(v_i_4272_);
v___x_4278_ = lean_box(0);
v_isShared_4279_ = v_isSharedCheck_4305_;
goto v_resetjp_4277_;
}
v_resetjp_4277_:
{
lean_object* v_stx_4280_; lean_object* v_value_4281_; lean_object* v___x_4283_; uint8_t v_isShared_4284_; uint8_t v_isSharedCheck_4304_; 
v_stx_4280_ = lean_ctor_get(v_i_4276_, 0);
v_value_4281_ = lean_ctor_get(v_i_4276_, 1);
v_isSharedCheck_4304_ = !lean_is_exclusive(v_i_4276_);
if (v_isSharedCheck_4304_ == 0)
{
v___x_4283_ = v_i_4276_;
v_isShared_4284_ = v_isSharedCheck_4304_;
goto v_resetjp_4282_;
}
else
{
lean_inc(v_value_4281_);
lean_inc(v_stx_4280_);
lean_dec(v_i_4276_);
v___x_4283_ = lean_box(0);
v_isShared_4284_ = v_isSharedCheck_4304_;
goto v_resetjp_4282_;
}
v_resetjp_4282_:
{
lean_object* v___x_4285_; lean_object* v___x_4286_; 
v___x_4285_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_instImpl_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_));
v___x_4286_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_value_4281_, v___x_4285_);
lean_dec(v_value_4281_);
if (lean_obj_tag(v___x_4286_) == 0)
{
lean_del_object(v___x_4283_);
lean_dec(v_stx_4280_);
lean_del_object(v___x_4278_);
lean_del_object(v___x_4274_);
v_a_4264_ = v___x_4270_;
goto v___jp_4263_;
}
else
{
lean_object* v_val_4287_; lean_object* v___x_4289_; uint8_t v_isShared_4290_; uint8_t v_isSharedCheck_4303_; 
v_val_4287_ = lean_ctor_get(v___x_4286_, 0);
v_isSharedCheck_4303_ = !lean_is_exclusive(v___x_4286_);
if (v_isSharedCheck_4303_ == 0)
{
v___x_4289_ = v___x_4286_;
v_isShared_4290_ = v_isSharedCheck_4303_;
goto v_resetjp_4288_;
}
else
{
lean_inc(v_val_4287_);
lean_dec(v___x_4286_);
v___x_4289_ = lean_box(0);
v_isShared_4290_ = v_isSharedCheck_4303_;
goto v_resetjp_4288_;
}
v_resetjp_4288_:
{
lean_object* v___x_4292_; 
if (v_isShared_4284_ == 0)
{
lean_ctor_set(v___x_4283_, 1, v_val_4287_);
v___x_4292_ = v___x_4283_;
goto v_reusejp_4291_;
}
else
{
lean_object* v_reuseFailAlloc_4302_; 
v_reuseFailAlloc_4302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4302_, 0, v_stx_4280_);
lean_ctor_set(v_reuseFailAlloc_4302_, 1, v_val_4287_);
v___x_4292_ = v_reuseFailAlloc_4302_;
goto v_reusejp_4291_;
}
v_reusejp_4291_:
{
lean_object* v___x_4294_; 
if (v_isShared_4290_ == 0)
{
lean_ctor_set(v___x_4289_, 0, v___x_4292_);
v___x_4294_ = v___x_4289_;
goto v_reusejp_4293_;
}
else
{
lean_object* v_reuseFailAlloc_4301_; 
v_reuseFailAlloc_4301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4301_, 0, v___x_4292_);
v___x_4294_ = v_reuseFailAlloc_4301_;
goto v_reusejp_4293_;
}
v_reusejp_4293_:
{
lean_object* v___x_4296_; 
if (v_isShared_4279_ == 0)
{
lean_ctor_set_tag(v___x_4278_, 1);
lean_ctor_set(v___x_4278_, 0, v___x_4294_);
v___x_4296_ = v___x_4278_;
goto v_reusejp_4295_;
}
else
{
lean_object* v_reuseFailAlloc_4300_; 
v_reuseFailAlloc_4300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4300_, 0, v___x_4294_);
v___x_4296_ = v_reuseFailAlloc_4300_;
goto v_reusejp_4295_;
}
v_reusejp_4295_:
{
lean_object* v___x_4298_; 
if (v_isShared_4275_ == 0)
{
lean_ctor_set_tag(v___x_4274_, 0);
lean_ctor_set(v___x_4274_, 1, v___x_4269_);
lean_ctor_set(v___x_4274_, 0, v___x_4296_);
v___x_4298_ = v___x_4274_;
goto v_reusejp_4297_;
}
else
{
lean_object* v_reuseFailAlloc_4299_; 
v_reuseFailAlloc_4299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4299_, 0, v___x_4296_);
lean_ctor_set(v_reuseFailAlloc_4299_, 1, v___x_4269_);
v___x_4298_ = v_reuseFailAlloc_4299_;
goto v_reusejp_4297_;
}
v_reusejp_4297_:
{
return v___x_4298_;
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
lean_del_object(v___x_4274_);
lean_dec_ref(v_i_4272_);
v_a_4264_ = v___x_4270_;
goto v___jp_4263_;
}
}
}
else
{
lean_dec(v_a_4271_);
v_a_4264_ = v___x_4270_;
goto v___jp_4263_;
}
}
v___jp_4263_:
{
size_t v___x_4265_; size_t v___x_4266_; lean_object* v___x_4267_; 
v___x_4265_ = ((size_t)1ULL);
v___x_4266_ = lean_usize_add(v_i_4261_, v___x_4265_);
v___x_4267_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4(v_as_4259_, v_sz_4260_, v___x_4266_, v_a_4264_);
return v___x_4267_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1___boxed(lean_object* v_as_4308_, lean_object* v_sz_4309_, lean_object* v_i_4310_, lean_object* v_b_4311_){
_start:
{
size_t v_sz_boxed_4312_; size_t v_i_boxed_4313_; lean_object* v_res_4314_; 
v_sz_boxed_4312_ = lean_unbox_usize(v_sz_4309_);
lean_dec(v_sz_4309_);
v_i_boxed_4313_ = lean_unbox_usize(v_i_4310_);
lean_dec(v_i_4310_);
v_res_4314_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1(v_as_4308_, v_sz_boxed_4312_, v_i_boxed_4313_, v_b_4311_);
lean_dec_ref(v_b_4311_);
lean_dec_ref(v_as_4308_);
return v_res_4314_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0(lean_object* v_x_4315_){
_start:
{
if (lean_obj_tag(v_x_4315_) == 0)
{
lean_object* v_cs_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; size_t v_sz_4319_; size_t v___x_4320_; lean_object* v___x_4321_; lean_object* v_fst_4322_; 
v_cs_4316_ = lean_ctor_get(v_x_4315_, 0);
v___x_4317_ = lean_box(0);
v___x_4318_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0));
v_sz_4319_ = lean_array_size(v_cs_4316_);
v___x_4320_ = ((size_t)0ULL);
v___x_4321_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0_spec__2(v_cs_4316_, v_sz_4319_, v___x_4320_, v___x_4318_);
v_fst_4322_ = lean_ctor_get(v___x_4321_, 0);
lean_inc(v_fst_4322_);
lean_dec_ref(v___x_4321_);
if (lean_obj_tag(v_fst_4322_) == 0)
{
return v___x_4317_;
}
else
{
lean_object* v_val_4323_; 
v_val_4323_ = lean_ctor_get(v_fst_4322_, 0);
lean_inc(v_val_4323_);
lean_dec_ref_known(v_fst_4322_, 1);
return v_val_4323_;
}
}
else
{
lean_object* v_vs_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; size_t v_sz_4327_; size_t v___x_4328_; lean_object* v___x_4329_; lean_object* v_fst_4330_; 
v_vs_4324_ = lean_ctor_get(v_x_4315_, 0);
v___x_4325_ = lean_box(0);
v___x_4326_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0));
v_sz_4327_ = lean_array_size(v_vs_4324_);
v___x_4328_ = ((size_t)0ULL);
v___x_4329_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1(v_vs_4324_, v_sz_4327_, v___x_4328_, v___x_4326_);
v_fst_4330_ = lean_ctor_get(v___x_4329_, 0);
lean_inc(v_fst_4330_);
lean_dec_ref(v___x_4329_);
if (lean_obj_tag(v_fst_4330_) == 0)
{
return v___x_4325_;
}
else
{
lean_object* v_val_4331_; 
v_val_4331_ = lean_ctor_get(v_fst_4330_, 0);
lean_inc(v_val_4331_);
lean_dec_ref_known(v_fst_4330_, 1);
return v_val_4331_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0_spec__2(lean_object* v_as_4332_, size_t v_sz_4333_, size_t v_i_4334_, lean_object* v_b_4335_){
_start:
{
uint8_t v___x_4336_; 
v___x_4336_ = lean_usize_dec_lt(v_i_4334_, v_sz_4333_);
if (v___x_4336_ == 0)
{
lean_inc_ref(v_b_4335_);
return v_b_4335_;
}
else
{
lean_object* v___x_4337_; lean_object* v_a_4338_; lean_object* v___x_4339_; 
v___x_4337_ = lean_box(0);
v_a_4338_ = lean_array_uget_borrowed(v_as_4332_, v_i_4334_);
v___x_4339_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0(v_a_4338_);
if (lean_obj_tag(v___x_4339_) == 1)
{
lean_object* v___x_4340_; lean_object* v___x_4341_; 
v___x_4340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4340_, 0, v___x_4339_);
v___x_4341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4341_, 0, v___x_4340_);
lean_ctor_set(v___x_4341_, 1, v___x_4337_);
return v___x_4341_;
}
else
{
lean_object* v___x_4342_; size_t v___x_4343_; size_t v___x_4344_; 
lean_dec(v___x_4339_);
v___x_4342_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0));
v___x_4343_ = ((size_t)1ULL);
v___x_4344_ = lean_usize_add(v_i_4334_, v___x_4343_);
v_i_4334_ = v___x_4344_;
v_b_4335_ = v___x_4342_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0_spec__2___boxed(lean_object* v_as_4346_, lean_object* v_sz_4347_, lean_object* v_i_4348_, lean_object* v_b_4349_){
_start:
{
size_t v_sz_boxed_4350_; size_t v_i_boxed_4351_; lean_object* v_res_4352_; 
v_sz_boxed_4350_ = lean_unbox_usize(v_sz_4347_);
lean_dec(v_sz_4347_);
v_i_boxed_4351_ = lean_unbox_usize(v_i_4348_);
lean_dec(v_i_4348_);
v_res_4352_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0_spec__2(v_as_4346_, v_sz_boxed_4350_, v_i_boxed_4351_, v_b_4349_);
lean_dec_ref(v_b_4349_);
lean_dec_ref(v_as_4346_);
return v_res_4352_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0___boxed(lean_object* v_x_4353_){
_start:
{
lean_object* v_res_4354_; 
v_res_4354_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0(v_x_4353_);
lean_dec_ref(v_x_4353_);
return v_res_4354_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0(lean_object* v_t_4355_){
_start:
{
lean_object* v_root_4356_; lean_object* v_tail_4357_; lean_object* v___x_4358_; 
v_root_4356_ = lean_ctor_get(v_t_4355_, 0);
v_tail_4357_ = lean_ctor_get(v_t_4355_, 1);
v___x_4358_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0(v_root_4356_);
if (lean_obj_tag(v___x_4358_) == 0)
{
lean_object* v___x_4359_; size_t v_sz_4360_; size_t v___x_4361_; lean_object* v___x_4362_; lean_object* v_fst_4363_; 
v___x_4359_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0));
v_sz_4360_ = lean_array_size(v_tail_4357_);
v___x_4361_ = ((size_t)0ULL);
v___x_4362_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1(v_tail_4357_, v_sz_4360_, v___x_4361_, v___x_4359_);
v_fst_4363_ = lean_ctor_get(v___x_4362_, 0);
lean_inc(v_fst_4363_);
lean_dec_ref(v___x_4362_);
if (lean_obj_tag(v_fst_4363_) == 0)
{
return v___x_4358_;
}
else
{
lean_object* v_val_4364_; 
v_val_4364_ = lean_ctor_get(v_fst_4363_, 0);
lean_inc(v_val_4364_);
lean_dec_ref_known(v_fst_4363_, 1);
return v_val_4364_;
}
}
else
{
return v___x_4358_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0___boxed(lean_object* v_t_4365_){
_start:
{
lean_object* v_res_4366_; 
v_res_4366_ = l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0(v_t_4365_);
lean_dec_ref(v_t_4365_);
return v_res_4366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg(lean_object* v_node_4381_, lean_object* v_a_4382_){
_start:
{
if (lean_obj_tag(v_node_4381_) == 1)
{
lean_object* v_children_4384_; lean_object* v_res_4385_; 
v_children_4384_ = lean_ctor_get(v_node_4381_, 1);
v_res_4385_ = l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0(v_children_4384_);
if (lean_obj_tag(v_res_4385_) == 1)
{
lean_object* v_val_4386_; lean_object* v___x_4388_; uint8_t v_isShared_4389_; uint8_t v_isSharedCheck_4423_; 
v_val_4386_ = lean_ctor_get(v_res_4385_, 0);
v_isSharedCheck_4423_ = !lean_is_exclusive(v_res_4385_);
if (v_isSharedCheck_4423_ == 0)
{
v___x_4388_ = v_res_4385_;
v_isShared_4389_ = v_isSharedCheck_4423_;
goto v_resetjp_4387_;
}
else
{
lean_inc(v_val_4386_);
lean_dec(v_res_4385_);
v___x_4388_ = lean_box(0);
v_isShared_4389_ = v_isSharedCheck_4423_;
goto v_resetjp_4387_;
}
v_resetjp_4387_:
{
lean_object* v_fst_4390_; lean_object* v_snd_4391_; lean_object* v___x_4393_; uint8_t v_isShared_4394_; uint8_t v_isSharedCheck_4422_; 
v_fst_4390_ = lean_ctor_get(v_val_4386_, 0);
v_snd_4391_ = lean_ctor_get(v_val_4386_, 1);
v_isSharedCheck_4422_ = !lean_is_exclusive(v_val_4386_);
if (v_isSharedCheck_4422_ == 0)
{
v___x_4393_ = v_val_4386_;
v_isShared_4394_ = v_isSharedCheck_4422_;
goto v_resetjp_4392_;
}
else
{
lean_inc(v_snd_4391_);
lean_inc(v_fst_4390_);
lean_dec(v_val_4386_);
v___x_4393_ = lean_box(0);
v_isShared_4394_ = v_isSharedCheck_4422_;
goto v_resetjp_4392_;
}
v_resetjp_4392_:
{
lean_object* v___x_4395_; lean_object* v_a_4396_; lean_object* v___x_4398_; uint8_t v_isShared_4399_; uint8_t v_isSharedCheck_4421_; 
v___x_4395_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__1(v_a_4382_);
v_a_4396_ = lean_ctor_get(v___x_4395_, 0);
v_isSharedCheck_4421_ = !lean_is_exclusive(v___x_4395_);
if (v_isSharedCheck_4421_ == 0)
{
v___x_4398_ = v___x_4395_;
v_isShared_4399_ = v_isSharedCheck_4421_;
goto v_resetjp_4397_;
}
else
{
lean_inc(v_a_4396_);
lean_dec(v___x_4395_);
v___x_4398_ = lean_box(0);
v_isShared_4399_ = v_isSharedCheck_4421_;
goto v_resetjp_4397_;
}
v_resetjp_4397_:
{
lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; uint8_t v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___y_4408_; lean_object* v___x_4410_; 
v___x_4400_ = lean_box(0);
v___x_4401_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__0));
v___x_4402_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__2));
v___x_4403_ = 1;
v___x_4404_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__3));
v___x_4405_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__4));
v___x_4406_ = l_Lean_Syntax_getPos_x3f(v_fst_4390_, v___x_4403_);
v___x_4407_ = lean_box(v___x_4403_);
v___y_4408_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___boxed), 15, 14);
lean_closure_set(v___y_4408_, 0, v___x_4406_);
lean_closure_set(v___y_4408_, 1, v_fst_4390_);
lean_closure_set(v___y_4408_, 2, v___x_4407_);
lean_closure_set(v___y_4408_, 3, v_a_4396_);
lean_closure_set(v___y_4408_, 4, v___x_4400_);
lean_closure_set(v___y_4408_, 5, v___x_4401_);
lean_closure_set(v___y_4408_, 6, v___x_4402_);
lean_closure_set(v___y_4408_, 7, v___x_4400_);
lean_closure_set(v___y_4408_, 8, v___x_4404_);
lean_closure_set(v___y_4408_, 9, v___x_4400_);
lean_closure_set(v___y_4408_, 10, v___x_4400_);
lean_closure_set(v___y_4408_, 11, v___x_4400_);
lean_closure_set(v___y_4408_, 12, v_snd_4391_);
lean_closure_set(v___y_4408_, 13, v___x_4405_);
if (v_isShared_4389_ == 0)
{
lean_ctor_set(v___x_4388_, 0, v___y_4408_);
v___x_4410_ = v___x_4388_;
goto v_reusejp_4409_;
}
else
{
lean_object* v_reuseFailAlloc_4420_; 
v_reuseFailAlloc_4420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4420_, 0, v___y_4408_);
v___x_4410_ = v_reuseFailAlloc_4420_;
goto v_reusejp_4409_;
}
v_reusejp_4409_:
{
lean_object* v___x_4412_; 
if (v_isShared_4394_ == 0)
{
lean_ctor_set(v___x_4393_, 1, v___x_4410_);
lean_ctor_set(v___x_4393_, 0, v___x_4405_);
v___x_4412_ = v___x_4393_;
goto v_reusejp_4411_;
}
else
{
lean_object* v_reuseFailAlloc_4419_; 
v_reuseFailAlloc_4419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4419_, 0, v___x_4405_);
lean_ctor_set(v_reuseFailAlloc_4419_, 1, v___x_4410_);
v___x_4412_ = v_reuseFailAlloc_4419_;
goto v_reusejp_4411_;
}
v_reusejp_4411_:
{
lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4417_; 
v___x_4413_ = lean_unsigned_to_nat(1u);
v___x_4414_ = lean_mk_empty_array_with_capacity(v___x_4413_);
v___x_4415_ = lean_array_push(v___x_4414_, v___x_4412_);
if (v_isShared_4399_ == 0)
{
lean_ctor_set(v___x_4398_, 0, v___x_4415_);
v___x_4417_ = v___x_4398_;
goto v_reusejp_4416_;
}
else
{
lean_object* v_reuseFailAlloc_4418_; 
v_reuseFailAlloc_4418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4418_, 0, v___x_4415_);
v___x_4417_ = v_reuseFailAlloc_4418_;
goto v_reusejp_4416_;
}
v_reusejp_4416_:
{
return v___x_4417_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4424_; lean_object* v___x_4425_; 
lean_dec(v_res_4385_);
v___x_4424_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__5));
v___x_4425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4425_, 0, v___x_4424_);
return v___x_4425_;
}
}
else
{
lean_object* v___x_4426_; lean_object* v___x_4427_; 
v___x_4426_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__5));
v___x_4427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4427_, 0, v___x_4426_);
return v___x_4427_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___boxed(lean_object* v_node_4428_, lean_object* v_a_4429_, lean_object* v_a_4430_){
_start:
{
lean_object* v_res_4431_; 
v_res_4431_ = l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg(v_node_4428_, v_a_4429_);
lean_dec_ref(v_a_4429_);
lean_dec_ref(v_node_4428_);
return v_res_4431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction(lean_object* v_x_4432_, lean_object* v_x_4433_, lean_object* v_x_4434_, lean_object* v_node_4435_, lean_object* v_a_4436_){
_start:
{
lean_object* v___x_4438_; 
v___x_4438_ = l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg(v_node_4435_, v_a_4436_);
return v___x_4438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___boxed(lean_object* v_x_4439_, lean_object* v_x_4440_, lean_object* v_x_4441_, lean_object* v_node_4442_, lean_object* v_a_4443_, lean_object* v_a_4444_){
_start:
{
lean_object* v_res_4445_; 
v_res_4445_ = l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction(v_x_4439_, v_x_4440_, v_x_4441_, v_node_4442_, v_a_4443_);
lean_dec_ref(v_a_4443_);
lean_dec_ref(v_node_4442_);
lean_dec_ref(v_x_4441_);
lean_dec_ref(v_x_4440_);
lean_dec_ref(v_x_4439_);
return v_res_4445_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4(lean_object* v_s_4446_, lean_object* v_inst_4447_, lean_object* v_R_4448_, lean_object* v_a_4449_, uint8_t v_b_4450_, lean_object* v_c_4451_){
_start:
{
uint8_t v___x_4452_; 
v___x_4452_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___redArg(v_s_4446_, v_a_4449_, v_b_4450_);
return v___x_4452_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___boxed(lean_object* v_s_4453_, lean_object* v_inst_4454_, lean_object* v_R_4455_, lean_object* v_a_4456_, lean_object* v_b_4457_, lean_object* v_c_4458_){
_start:
{
uint8_t v_b_boxed_4459_; uint8_t v_res_4460_; lean_object* v_r_4461_; 
v_b_boxed_4459_ = lean_unbox(v_b_4457_);
v_res_4460_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4(v_s_4453_, v_inst_4454_, v_R_4455_, v_a_4456_, v_b_boxed_4459_, v_c_4458_);
lean_dec_ref(v_s_4453_);
v_r_4461_ = lean_box(v_res_4460_);
return v_r_4461_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_354_(){
_start:
{
lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; 
v___x_4467_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1___closed__0_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_354_));
v___x_4468_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___boxed), 6, 0);
v___x_4469_ = l_Lean_CodeAction_insertBuiltin(v___x_4467_, v___x_4468_);
return v___x_4469_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_354____boxed(lean_object* v_a_4470_){
_start:
{
lean_object* v_res_4471_; 
v_res_4471_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_354_();
return v_res_4471_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__2(void){
_start:
{
lean_object* v___x_4477_; lean_object* v___x_4478_; 
v___x_4477_ = ((lean_object*)(l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__1));
v___x_4478_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_4477_);
return v___x_4478_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; 
v___x_4479_ = lean_unsigned_to_nat(0u);
v___x_4480_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__2, &l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__2_once, _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__2);
v___x_4481_ = ((lean_object*)(l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__1));
v___x_4482_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_4482_, 0, v___x_4481_);
lean_ctor_set(v___x_4482_, 1, v___x_4480_);
lean_ctor_set(v___x_4482_, 2, v___x_4479_);
lean_ctor_set(v___x_4482_, 3, v___x_4479_);
return v___x_4482_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0(lean_object* v_s_4483_){
_start:
{
lean_object* v___x_4484_; uint8_t v___x_4485_; uint8_t v___x_4486_; 
v___x_4484_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__3, &l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__3_once, _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__3);
v___x_4485_ = 0;
v___x_4486_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg(v_s_4483_, v___x_4484_, v___x_4485_);
return v___x_4486_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___boxed(lean_object* v_s_4487_){
_start:
{
uint8_t v_res_4488_; lean_object* v_r_4489_; 
v_res_4488_ = l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0(v_s_4487_);
lean_dec_ref(v_s_4487_);
v_r_4489_ = lean_box(v_res_4488_);
return v_r_4489_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___redArg(lean_object* v_as_x27_4490_, uint8_t v_b_4491_){
_start:
{
if (lean_obj_tag(v_as_x27_4490_) == 0)
{
lean_object* v___x_4493_; lean_object* v___x_4494_; 
v___x_4493_ = lean_box(v_b_4491_);
v___x_4494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4494_, 0, v___x_4493_);
return v___x_4494_;
}
else
{
lean_object* v_head_4495_; uint8_t v_isSilent_4496_; 
v_head_4495_ = lean_ctor_get(v_as_x27_4490_, 0);
v_isSilent_4496_ = lean_ctor_get_uint8(v_head_4495_, sizeof(void*)*5 + 2);
if (v_isSilent_4496_ == 0)
{
lean_object* v_tail_4497_; lean_object* v_data_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; uint8_t v___x_4503_; 
v_tail_4497_ = lean_ctor_get(v_as_x27_4490_, 1);
v_data_4498_ = lean_ctor_get(v_head_4495_, 4);
lean_inc(v_data_4498_);
v___x_4499_ = l_Lean_MessageData_toString(v_data_4498_);
v___x_4500_ = lean_unsigned_to_nat(0u);
v___x_4501_ = lean_string_utf8_byte_size(v___x_4499_);
v___x_4502_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4502_, 0, v___x_4499_);
lean_ctor_set(v___x_4502_, 1, v___x_4500_);
lean_ctor_set(v___x_4502_, 2, v___x_4501_);
v___x_4503_ = l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0(v___x_4502_);
lean_dec_ref_known(v___x_4502_, 3);
if (v___x_4503_ == 0)
{
v_as_x27_4490_ = v_tail_4497_;
goto _start;
}
else
{
lean_object* v___x_4505_; lean_object* v___x_4506_; 
v___x_4505_ = lean_box(v___x_4503_);
v___x_4506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4506_, 0, v___x_4505_);
return v___x_4506_;
}
}
else
{
lean_object* v_tail_4507_; 
v_tail_4507_ = lean_ctor_get(v_as_x27_4490_, 1);
v_as_x27_4490_ = v_tail_4507_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___redArg___boxed(lean_object* v_as_x27_4509_, lean_object* v_b_4510_, lean_object* v___y_4511_){
_start:
{
uint8_t v_b_boxed_4512_; lean_object* v_res_4513_; 
v_b_boxed_4512_ = lean_unbox(v_b_4510_);
v_res_4513_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___redArg(v_as_x27_4509_, v_b_boxed_4512_);
lean_dec(v_as_x27_4509_);
return v_res_4513_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2_spec__2(lean_object* v_msgData_4514_, uint8_t v_severity_4515_, uint8_t v_isSilent_4516_, lean_object* v___y_4517_, lean_object* v___y_4518_){
_start:
{
lean_object* v___x_4520_; 
v___x_4520_ = l_Lean_Elab_Command_getRef___redArg(v___y_4517_);
if (lean_obj_tag(v___x_4520_) == 0)
{
lean_object* v_a_4521_; lean_object* v___x_4522_; 
v_a_4521_ = lean_ctor_get(v___x_4520_, 0);
lean_inc(v_a_4521_);
lean_dec_ref_known(v___x_4520_, 1);
v___x_4522_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2(v_a_4521_, v_msgData_4514_, v_severity_4515_, v_isSilent_4516_, v___y_4517_, v___y_4518_);
lean_dec(v_a_4521_);
return v___x_4522_;
}
else
{
lean_object* v_a_4523_; lean_object* v___x_4525_; uint8_t v_isShared_4526_; uint8_t v_isSharedCheck_4530_; 
lean_dec_ref(v_msgData_4514_);
v_a_4523_ = lean_ctor_get(v___x_4520_, 0);
v_isSharedCheck_4530_ = !lean_is_exclusive(v___x_4520_);
if (v_isSharedCheck_4530_ == 0)
{
v___x_4525_ = v___x_4520_;
v_isShared_4526_ = v_isSharedCheck_4530_;
goto v_resetjp_4524_;
}
else
{
lean_inc(v_a_4523_);
lean_dec(v___x_4520_);
v___x_4525_ = lean_box(0);
v_isShared_4526_ = v_isSharedCheck_4530_;
goto v_resetjp_4524_;
}
v_resetjp_4524_:
{
lean_object* v___x_4528_; 
if (v_isShared_4526_ == 0)
{
v___x_4528_ = v___x_4525_;
goto v_reusejp_4527_;
}
else
{
lean_object* v_reuseFailAlloc_4529_; 
v_reuseFailAlloc_4529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4529_, 0, v_a_4523_);
v___x_4528_ = v_reuseFailAlloc_4529_;
goto v_reusejp_4527_;
}
v_reusejp_4527_:
{
return v___x_4528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2_spec__2___boxed(lean_object* v_msgData_4531_, lean_object* v_severity_4532_, lean_object* v_isSilent_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_){
_start:
{
uint8_t v_severity_boxed_4537_; uint8_t v_isSilent_boxed_4538_; lean_object* v_res_4539_; 
v_severity_boxed_4537_ = lean_unbox(v_severity_4532_);
v_isSilent_boxed_4538_ = lean_unbox(v_isSilent_4533_);
v_res_4539_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2_spec__2(v_msgData_4531_, v_severity_boxed_4537_, v_isSilent_boxed_4538_, v___y_4534_, v___y_4535_);
lean_dec(v___y_4535_);
lean_dec_ref(v___y_4534_);
return v_res_4539_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2(lean_object* v_msgData_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_){
_start:
{
uint8_t v___x_4544_; uint8_t v___x_4545_; lean_object* v___x_4546_; 
v___x_4544_ = 2;
v___x_4545_ = 0;
v___x_4546_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2_spec__2(v_msgData_4540_, v___x_4544_, v___x_4545_, v___y_4541_, v___y_4542_);
return v___x_4546_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2___boxed(lean_object* v_msgData_4547_, lean_object* v___y_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_){
_start:
{
lean_object* v_res_4551_; 
v_res_4551_ = l_Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2(v_msgData_4547_, v___y_4548_, v___y_4549_);
lean_dec(v___y_4549_);
lean_dec_ref(v___y_4548_);
return v_res_4551_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__4(void){
_start:
{
lean_object* v___x_4559_; lean_object* v___x_4560_; 
v___x_4559_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__3));
v___x_4560_ = l_Lean_MessageData_ofFormat(v___x_4559_);
return v___x_4560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic(lean_object* v_x_4561_, lean_object* v_a_4562_, lean_object* v_a_4563_){
_start:
{
lean_object* v___x_4565_; uint8_t v___x_4566_; 
v___x_4565_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__1));
lean_inc(v_x_4561_);
v___x_4566_ = l_Lean_Syntax_isOfKind(v_x_4561_, v___x_4565_);
if (v___x_4566_ == 0)
{
lean_object* v___x_4567_; 
lean_dec(v_x_4561_);
v___x_4567_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_4567_;
}
else
{
lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; 
v___x_4568_ = lean_unsigned_to_nat(2u);
v___x_4569_ = l_Lean_Syntax_getArg(v_x_4561_, v___x_4568_);
lean_dec(v_x_4561_);
v___x_4570_ = l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages(v___x_4569_, v_a_4562_, v_a_4563_);
if (lean_obj_tag(v___x_4570_) == 0)
{
lean_object* v_a_4571_; uint8_t v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v_a_4575_; lean_object* v___x_4577_; uint8_t v_isShared_4578_; uint8_t v_isSharedCheck_4631_; 
v_a_4571_ = lean_ctor_get(v___x_4570_, 0);
lean_inc(v_a_4571_);
lean_dec_ref_known(v___x_4570_, 1);
v___x_4572_ = 0;
v___x_4573_ = l_Lean_MessageLog_toList(v_a_4571_);
v___x_4574_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___redArg(v___x_4573_, v___x_4572_);
lean_dec(v___x_4573_);
v_a_4575_ = lean_ctor_get(v___x_4574_, 0);
v_isSharedCheck_4631_ = !lean_is_exclusive(v___x_4574_);
if (v_isSharedCheck_4631_ == 0)
{
v___x_4577_ = v___x_4574_;
v_isShared_4578_ = v_isSharedCheck_4631_;
goto v_resetjp_4576_;
}
else
{
lean_inc(v_a_4575_);
lean_dec(v___x_4574_);
v___x_4577_ = lean_box(0);
v_isShared_4578_ = v_isSharedCheck_4631_;
goto v_resetjp_4576_;
}
v_resetjp_4576_:
{
uint8_t v___x_4579_; 
v___x_4579_ = lean_unbox(v_a_4575_);
lean_dec(v_a_4575_);
if (v___x_4579_ == 0)
{
lean_object* v___x_4580_; lean_object* v_env_4581_; lean_object* v_scopes_4582_; lean_object* v_usedQuotCtxts_4583_; lean_object* v_nextMacroScope_4584_; lean_object* v_maxRecDepth_4585_; lean_object* v_ngen_4586_; lean_object* v_auxDeclNGen_4587_; lean_object* v_infoState_4588_; lean_object* v_traceState_4589_; lean_object* v_snapshotTasks_4590_; lean_object* v_prevLinterStates_4591_; lean_object* v_codeQualityEntryTasks_4592_; lean_object* v___x_4594_; uint8_t v_isShared_4595_; uint8_t v_isSharedCheck_4602_; 
lean_del_object(v___x_4577_);
v___x_4580_ = lean_st_ref_take(v_a_4563_);
v_env_4581_ = lean_ctor_get(v___x_4580_, 0);
v_scopes_4582_ = lean_ctor_get(v___x_4580_, 2);
v_usedQuotCtxts_4583_ = lean_ctor_get(v___x_4580_, 3);
v_nextMacroScope_4584_ = lean_ctor_get(v___x_4580_, 4);
v_maxRecDepth_4585_ = lean_ctor_get(v___x_4580_, 5);
v_ngen_4586_ = lean_ctor_get(v___x_4580_, 6);
v_auxDeclNGen_4587_ = lean_ctor_get(v___x_4580_, 7);
v_infoState_4588_ = lean_ctor_get(v___x_4580_, 8);
v_traceState_4589_ = lean_ctor_get(v___x_4580_, 9);
v_snapshotTasks_4590_ = lean_ctor_get(v___x_4580_, 10);
v_prevLinterStates_4591_ = lean_ctor_get(v___x_4580_, 11);
v_codeQualityEntryTasks_4592_ = lean_ctor_get(v___x_4580_, 12);
v_isSharedCheck_4602_ = !lean_is_exclusive(v___x_4580_);
if (v_isSharedCheck_4602_ == 0)
{
lean_object* v_unused_4603_; 
v_unused_4603_ = lean_ctor_get(v___x_4580_, 1);
lean_dec(v_unused_4603_);
v___x_4594_ = v___x_4580_;
v_isShared_4595_ = v_isSharedCheck_4602_;
goto v_resetjp_4593_;
}
else
{
lean_inc(v_codeQualityEntryTasks_4592_);
lean_inc(v_prevLinterStates_4591_);
lean_inc(v_snapshotTasks_4590_);
lean_inc(v_traceState_4589_);
lean_inc(v_infoState_4588_);
lean_inc(v_auxDeclNGen_4587_);
lean_inc(v_ngen_4586_);
lean_inc(v_maxRecDepth_4585_);
lean_inc(v_nextMacroScope_4584_);
lean_inc(v_usedQuotCtxts_4583_);
lean_inc(v_scopes_4582_);
lean_inc(v_env_4581_);
lean_dec(v___x_4580_);
v___x_4594_ = lean_box(0);
v_isShared_4595_ = v_isSharedCheck_4602_;
goto v_resetjp_4593_;
}
v_resetjp_4593_:
{
lean_object* v___x_4597_; 
if (v_isShared_4595_ == 0)
{
lean_ctor_set(v___x_4594_, 1, v_a_4571_);
v___x_4597_ = v___x_4594_;
goto v_reusejp_4596_;
}
else
{
lean_object* v_reuseFailAlloc_4601_; 
v_reuseFailAlloc_4601_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_4601_, 0, v_env_4581_);
lean_ctor_set(v_reuseFailAlloc_4601_, 1, v_a_4571_);
lean_ctor_set(v_reuseFailAlloc_4601_, 2, v_scopes_4582_);
lean_ctor_set(v_reuseFailAlloc_4601_, 3, v_usedQuotCtxts_4583_);
lean_ctor_set(v_reuseFailAlloc_4601_, 4, v_nextMacroScope_4584_);
lean_ctor_set(v_reuseFailAlloc_4601_, 5, v_maxRecDepth_4585_);
lean_ctor_set(v_reuseFailAlloc_4601_, 6, v_ngen_4586_);
lean_ctor_set(v_reuseFailAlloc_4601_, 7, v_auxDeclNGen_4587_);
lean_ctor_set(v_reuseFailAlloc_4601_, 8, v_infoState_4588_);
lean_ctor_set(v_reuseFailAlloc_4601_, 9, v_traceState_4589_);
lean_ctor_set(v_reuseFailAlloc_4601_, 10, v_snapshotTasks_4590_);
lean_ctor_set(v_reuseFailAlloc_4601_, 11, v_prevLinterStates_4591_);
lean_ctor_set(v_reuseFailAlloc_4601_, 12, v_codeQualityEntryTasks_4592_);
v___x_4597_ = v_reuseFailAlloc_4601_;
goto v_reusejp_4596_;
}
v_reusejp_4596_:
{
lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; 
v___x_4598_ = lean_st_ref_put(v_a_4563_, v___x_4597_);
v___x_4599_ = lean_obj_once(&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__4, &l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__4_once, _init_l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__4);
v___x_4600_ = l_Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2(v___x_4599_, v_a_4562_, v_a_4563_);
return v___x_4600_;
}
}
}
else
{
lean_object* v___x_4604_; lean_object* v_env_4605_; lean_object* v_scopes_4606_; lean_object* v_usedQuotCtxts_4607_; lean_object* v_nextMacroScope_4608_; lean_object* v_maxRecDepth_4609_; lean_object* v_ngen_4610_; lean_object* v_auxDeclNGen_4611_; lean_object* v_infoState_4612_; lean_object* v_traceState_4613_; lean_object* v_snapshotTasks_4614_; lean_object* v_prevLinterStates_4615_; lean_object* v_codeQualityEntryTasks_4616_; lean_object* v___x_4618_; uint8_t v_isShared_4619_; uint8_t v_isSharedCheck_4629_; 
lean_dec(v_a_4571_);
v___x_4604_ = lean_st_ref_take(v_a_4563_);
v_env_4605_ = lean_ctor_get(v___x_4604_, 0);
v_scopes_4606_ = lean_ctor_get(v___x_4604_, 2);
v_usedQuotCtxts_4607_ = lean_ctor_get(v___x_4604_, 3);
v_nextMacroScope_4608_ = lean_ctor_get(v___x_4604_, 4);
v_maxRecDepth_4609_ = lean_ctor_get(v___x_4604_, 5);
v_ngen_4610_ = lean_ctor_get(v___x_4604_, 6);
v_auxDeclNGen_4611_ = lean_ctor_get(v___x_4604_, 7);
v_infoState_4612_ = lean_ctor_get(v___x_4604_, 8);
v_traceState_4613_ = lean_ctor_get(v___x_4604_, 9);
v_snapshotTasks_4614_ = lean_ctor_get(v___x_4604_, 10);
v_prevLinterStates_4615_ = lean_ctor_get(v___x_4604_, 11);
v_codeQualityEntryTasks_4616_ = lean_ctor_get(v___x_4604_, 12);
v_isSharedCheck_4629_ = !lean_is_exclusive(v___x_4604_);
if (v_isSharedCheck_4629_ == 0)
{
lean_object* v_unused_4630_; 
v_unused_4630_ = lean_ctor_get(v___x_4604_, 1);
lean_dec(v_unused_4630_);
v___x_4618_ = v___x_4604_;
v_isShared_4619_ = v_isSharedCheck_4629_;
goto v_resetjp_4617_;
}
else
{
lean_inc(v_codeQualityEntryTasks_4616_);
lean_inc(v_prevLinterStates_4615_);
lean_inc(v_snapshotTasks_4614_);
lean_inc(v_traceState_4613_);
lean_inc(v_infoState_4612_);
lean_inc(v_auxDeclNGen_4611_);
lean_inc(v_ngen_4610_);
lean_inc(v_maxRecDepth_4609_);
lean_inc(v_nextMacroScope_4608_);
lean_inc(v_usedQuotCtxts_4607_);
lean_inc(v_scopes_4606_);
lean_inc(v_env_4605_);
lean_dec(v___x_4604_);
v___x_4618_ = lean_box(0);
v_isShared_4619_ = v_isSharedCheck_4629_;
goto v_resetjp_4617_;
}
v_resetjp_4617_:
{
lean_object* v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4623_; 
v___x_4620_ = lean_box(0);
v___x_4621_ = l_Lean_MessageLog_empty;
if (v_isShared_4619_ == 0)
{
lean_ctor_set(v___x_4618_, 1, v___x_4621_);
v___x_4623_ = v___x_4618_;
goto v_reusejp_4622_;
}
else
{
lean_object* v_reuseFailAlloc_4628_; 
v_reuseFailAlloc_4628_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_4628_, 0, v_env_4605_);
lean_ctor_set(v_reuseFailAlloc_4628_, 1, v___x_4621_);
lean_ctor_set(v_reuseFailAlloc_4628_, 2, v_scopes_4606_);
lean_ctor_set(v_reuseFailAlloc_4628_, 3, v_usedQuotCtxts_4607_);
lean_ctor_set(v_reuseFailAlloc_4628_, 4, v_nextMacroScope_4608_);
lean_ctor_set(v_reuseFailAlloc_4628_, 5, v_maxRecDepth_4609_);
lean_ctor_set(v_reuseFailAlloc_4628_, 6, v_ngen_4610_);
lean_ctor_set(v_reuseFailAlloc_4628_, 7, v_auxDeclNGen_4611_);
lean_ctor_set(v_reuseFailAlloc_4628_, 8, v_infoState_4612_);
lean_ctor_set(v_reuseFailAlloc_4628_, 9, v_traceState_4613_);
lean_ctor_set(v_reuseFailAlloc_4628_, 10, v_snapshotTasks_4614_);
lean_ctor_set(v_reuseFailAlloc_4628_, 11, v_prevLinterStates_4615_);
lean_ctor_set(v_reuseFailAlloc_4628_, 12, v_codeQualityEntryTasks_4616_);
v___x_4623_ = v_reuseFailAlloc_4628_;
goto v_reusejp_4622_;
}
v_reusejp_4622_:
{
lean_object* v___x_4624_; lean_object* v___x_4626_; 
v___x_4624_ = lean_st_ref_put(v_a_4563_, v___x_4623_);
if (v_isShared_4578_ == 0)
{
lean_ctor_set(v___x_4577_, 0, v___x_4620_);
v___x_4626_ = v___x_4577_;
goto v_reusejp_4625_;
}
else
{
lean_object* v_reuseFailAlloc_4627_; 
v_reuseFailAlloc_4627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4627_, 0, v___x_4620_);
v___x_4626_ = v_reuseFailAlloc_4627_;
goto v_reusejp_4625_;
}
v_reusejp_4625_:
{
return v___x_4626_;
}
}
}
}
}
}
else
{
lean_object* v_a_4632_; lean_object* v___x_4634_; uint8_t v_isShared_4635_; uint8_t v_isSharedCheck_4639_; 
v_a_4632_ = lean_ctor_get(v___x_4570_, 0);
v_isSharedCheck_4639_ = !lean_is_exclusive(v___x_4570_);
if (v_isSharedCheck_4639_ == 0)
{
v___x_4634_ = v___x_4570_;
v_isShared_4635_ = v_isSharedCheck_4639_;
goto v_resetjp_4633_;
}
else
{
lean_inc(v_a_4632_);
lean_dec(v___x_4570_);
v___x_4634_ = lean_box(0);
v_isShared_4635_ = v_isSharedCheck_4639_;
goto v_resetjp_4633_;
}
v_resetjp_4633_:
{
lean_object* v___x_4637_; 
if (v_isShared_4635_ == 0)
{
v___x_4637_ = v___x_4634_;
goto v_reusejp_4636_;
}
else
{
lean_object* v_reuseFailAlloc_4638_; 
v_reuseFailAlloc_4638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4638_, 0, v_a_4632_);
v___x_4637_ = v_reuseFailAlloc_4638_;
goto v_reusejp_4636_;
}
v_reusejp_4636_:
{
return v___x_4637_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___boxed(lean_object* v_x_4640_, lean_object* v_a_4641_, lean_object* v_a_4642_, lean_object* v_a_4643_){
_start:
{
lean_object* v_res_4644_; 
v_res_4644_ = l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic(v_x_4640_, v_a_4641_, v_a_4642_);
lean_dec(v_a_4642_);
lean_dec_ref(v_a_4641_);
return v_res_4644_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1(lean_object* v_as_4645_, lean_object* v_as_x27_4646_, uint8_t v_b_4647_, lean_object* v_a_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_){
_start:
{
lean_object* v___x_4652_; 
v___x_4652_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___redArg(v_as_x27_4646_, v_b_4647_);
return v___x_4652_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___boxed(lean_object* v_as_4653_, lean_object* v_as_x27_4654_, lean_object* v_b_4655_, lean_object* v_a_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_){
_start:
{
uint8_t v_b_boxed_4660_; lean_object* v_res_4661_; 
v_b_boxed_4660_ = lean_unbox(v_b_4655_);
v_res_4661_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1(v_as_4653_, v_as_x27_4654_, v_b_boxed_4660_, v_a_4656_, v___y_4657_, v___y_4658_);
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
lean_dec(v_as_x27_4654_);
lean_dec(v_as_4653_);
return v_res_4661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1(){
_start:
{
lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; 
v___x_4670_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_4671_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__1));
v___x_4672_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1));
v___x_4673_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___boxed), 4, 0);
v___x_4674_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4670_, v___x_4671_, v___x_4672_, v___x_4673_);
return v___x_4674_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___boxed(lean_object* v_a_4675_){
_start:
{
lean_object* v_res_4676_; 
v_res_4676_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1();
return v_res_4676_;
}
}
lean_object* runtime_initialize_Lean_Elab_Notation(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_CodeActions_Attr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_GuardMsgs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_CodeActions_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_guard__msgs_diff = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_guard__msgs_diff);
lean_dec_ref(res);
res = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_354_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_GuardMsgs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Notation(uint8_t builtin);
lean_object* initialize_Lean_Server_CodeActions_Attr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_GuardMsgs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_CodeActions_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_GuardMsgs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_GuardMsgs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_GuardMsgs(builtin);
}
#ifdef __cplusplus
}
#endif
