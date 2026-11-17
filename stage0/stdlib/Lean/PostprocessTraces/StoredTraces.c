// Lean compiler output
// Module: Lean.PostprocessTraces.StoredTraces
// Imports: public meta import Lean.PostprocessTraces.Basic public meta import Lean.Elab.Command import Lean.CoreM
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
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_PostprocessTraces_runAndCollectMessages(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l___private_Lean_ToExpr_0__Lean_Name_toExprAux(lean_object*);
lean_object* l_Lean_addAndCompile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
extern lean_object* l_Lean_docStringExt;
lean_object* l_String_removeLeadingSpaces(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_DeclarationRange_ofStringPositions(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_declRangeExt;
uint8_t l_Lean_MapDeclarationExtension_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
extern lean_object* l_Lean_LocalContext_empty;
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Message_isTrace(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_PostprocessTraces_postprocessMessage(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_PostprocessTraces_traceContainer_x3f(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_PostprocessTraces_TraceTree_ofMessageData(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkMessageCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
static const lean_string_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__0 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__0_value;
static const lean_string_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "PostprocessTraces"};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__1 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__1_value;
static const lean_string_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "storeTracesAsCmd"};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__2 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__2_value;
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__3_value_aux_0),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(169, 31, 168, 57, 105, 170, 97, 138)}};
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__3_value_aux_1),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__2_value),LEAN_SCALAR_PTR_LITERAL(234, 198, 145, 81, 140, 195, 110, 227)}};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__3 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__3_value;
static const lean_string_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__4 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__4_value;
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__5 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__5_value;
static const lean_string_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "store_traces_as "};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__6 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__6_value;
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__6_value)}};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__7 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__7_value;
static const lean_string_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__8 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__8_value;
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__8_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__9 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__9_value;
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__9_value)}};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__10 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__10_value;
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__5_value),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__7_value),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__10_value)}};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__11 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__11_value;
static const lean_string_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " in"};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__12 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__12_value;
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__12_value)}};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__13 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__13_value;
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__5_value),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__11_value),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__13_value)}};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__14 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__14_value;
static const lean_string_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ppLine"};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__15 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__15_value;
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__15_value),LEAN_SCALAR_PTR_LITERAL(117, 61, 38, 245, 158, 59, 171, 58)}};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__16 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__16_value;
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__16_value)}};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__17 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__17_value;
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__5_value),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__14_value),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__17_value)}};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__18 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__18_value;
static const lean_string_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__19 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__19_value;
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__19_value),LEAN_SCALAR_PTR_LITERAL(29, 69, 134, 125, 237, 175, 69, 70)}};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__20 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__20_value;
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__21 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__21_value;
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__5_value),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__18_value),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__21_value)}};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__22 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__22_value;
static const lean_ctor_object l_Lean_PostprocessTraces_storeTracesAsCmd___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__3_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__22_value)}};
static const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd___closed__23 = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__23_value;
LEAN_EXPORT const lean_object* l_Lean_PostprocessTraces_storeTracesAsCmd = (const lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__23_value;
static const lean_string_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "postprocessStoredTracesCmd"};
static const lean_object* l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__0 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__0_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__1_value_aux_0),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(169, 31, 168, 57, 105, 170, 97, 138)}};
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__1_value_aux_1),((lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 232, 148, 233, 198, 180, 134, 53)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__1 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__1_value;
static const lean_string_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "#postprocess_traces "};
static const lean_object* l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__2 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__2_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__2_value)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__3 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__3_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__5_value),((lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__3_value),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__10_value)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__4 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__4_value;
static const lean_string_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ppSpace"};
static const lean_object* l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__5 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__5_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__5_value),LEAN_SCALAR_PTR_LITERAL(207, 47, 58, 43, 30, 240, 125, 246)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__6 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__6_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__6_value)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__7 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__7_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__5_value),((lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__4_value),((lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__7_value)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__8 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__8_value;
static const lean_string_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__9 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__9_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__9_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__10 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__10_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__11 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__11_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__5_value),((lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__8_value),((lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__11_value)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__12 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__12_value;
static const lean_ctor_object l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__12_value)}};
static const lean_object* l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__13 = (const lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__13_value;
LEAN_EXPORT const lean_object* l_Lean_PostprocessTraces_postprocessStoredTracesCmd = (const lean_object*)&l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__13_value;
static const lean_array_object l_Lean_PostprocessTraces_instInhabitedStoredTrace_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PostprocessTraces_instInhabitedStoredTrace_default___closed__0 = (const lean_object*)&l_Lean_PostprocessTraces_instInhabitedStoredTrace_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_PostprocessTraces_instInhabitedStoredTrace_default = (const lean_object*)&l_Lean_PostprocessTraces_instInhabitedStoredTrace_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_PostprocessTraces_instInhabitedStoredTrace = (const lean_object*)&l_Lean_PostprocessTraces_instInhabitedStoredTrace_default___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___lam__0_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___lam__0_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__0_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___lam__0_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__0_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__0_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__1_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__1_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__1_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__2_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__1_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__2_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__2_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__3_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__2_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__3_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__3_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__4_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__3_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 174, 235, 17, 5, 20, 197, 19)}};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__4_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__4_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__5_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "StoredTraces"};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__5_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__5_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__6_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__4_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__5_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(143, 140, 81, 237, 236, 170, 11, 110)}};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__6_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__6_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__7_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__6_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(34, 130, 249, 220, 32, 191, 165, 90)}};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__7_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__7_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__8_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__7_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 89, 114, 131, 249, 230, 156, 240)}};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__8_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__8_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__9_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__8_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(128, 162, 58, 245, 173, 21, 89, 88)}};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__9_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__9_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__10_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "storedTracesExt"};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__10_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__10_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__11_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__9_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__10_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(76, 236, 246, 31, 123, 104, 193, 42)}};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__11_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__11_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_storedTracesExt;
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_findStoredTrace_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_findStoredTrace_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_PostprocessTraces_allStoredTraces_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_PostprocessTraces_allStoredTraces_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_allStoredTraces(lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PostprocessTraces_findStoredTrace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "trace data for `"};
static const lean_object* l_Lean_PostprocessTraces_findStoredTrace___closed__0 = (const lean_object*)&l_Lean_PostprocessTraces_findStoredTrace___closed__0_value;
static lean_once_cell_t l_Lean_PostprocessTraces_findStoredTrace___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PostprocessTraces_findStoredTrace___closed__1;
static const lean_string_object l_Lean_PostprocessTraces_findStoredTrace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 122, .m_capacity = 122, .m_length = 121, .m_data = "` is not available in this context (stored traces are kept in memory and are only available in the file that stored them)"};
static const lean_object* l_Lean_PostprocessTraces_findStoredTrace___closed__2 = (const lean_object*)&l_Lean_PostprocessTraces_findStoredTrace___closed__2_value;
static lean_once_cell_t l_Lean_PostprocessTraces_findStoredTrace___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PostprocessTraces_findStoredTrace___closed__3;
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_findStoredTrace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_findStoredTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_storeTraces___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PostprocessTraces_storeTraces___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PostprocessTraces_storeTraces___redArg___closed__0;
static lean_once_cell_t l_Lean_PostprocessTraces_storeTraces___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PostprocessTraces_storeTraces___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_storeTraces___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_storeTraces___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_storeTraces(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_storeTraces___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_PostprocessTraces_StoredTrace_trees___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PostprocessTraces_StoredTrace_trees___closed__0 = (const lean_object*)&l_Lean_PostprocessTraces_StoredTrace_trees___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_StoredTrace_trees(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_StoredTrace_trees___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_StoredTrace_postprocess(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_StoredTrace_postprocess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__7(lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__21___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration `"};
static const lean_object* l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__0 = (const lean_object*)&l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__1;
static const lean_string_object l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is in an imported module"};
static const lean_object* l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__2 = (const lean_object*)&l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__2_value;
static lean_once_cell_t l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Core"};
static const lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__0 = (const lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__0_value;
static const lean_string_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "CoreM"};
static const lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__1 = (const lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__1_value;
static const lean_ctor_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(194, 126, 120, 188, 150, 235, 117, 203)}};
static const lean_ctor_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 114, 191, 177, 45, 189, 121, 141)}};
static const lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__2 = (const lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__2_value;
static lean_once_cell_t l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__3;
static const lean_string_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "StoredTrace"};
static const lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__4 = (const lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__4_value;
static const lean_ctor_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__5_value_aux_0),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(169, 31, 168, 57, 105, 170, 97, 138)}};
static const lean_ctor_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__4_value),LEAN_SCALAR_PTR_LITERAL(167, 162, 213, 104, 244, 174, 40, 67)}};
static const lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__5 = (const lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__5_value;
static lean_once_cell_t l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__6;
static lean_once_cell_t l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__7;
static const lean_string_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "findStoredTrace"};
static const lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__8 = (const lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__8_value;
static const lean_ctor_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__9_value_aux_0),((lean_object*)&l_Lean_PostprocessTraces_storeTracesAsCmd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(169, 31, 168, 57, 105, 170, 97, 138)}};
static const lean_ctor_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__8_value),LEAN_SCALAR_PTR_LITERAL(189, 237, 199, 37, 181, 117, 224, 209)}};
static const lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__9 = (const lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__9_value;
static lean_once_cell_t l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__10;
static const lean_string_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "A trace stored by `store_traces_as` (`"};
static const lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__11 = (const lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__11_value;
static const lean_string_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "`); inspect it with `#trace_roots "};
static const lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__12 = (const lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__12_value;
static const lean_string_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` and `#postprocess_traces "};
static const lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__13 = (const lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__13_value;
static const lean_string_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 64, .m_data = " <postprocessor>`, or in metaprograms, e.g. `#eval do return (← "};
static const lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__14 = (const lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__14_value;
static const lean_string_object l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = ").roots.size`."};
static const lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__15 = (const lean_object*)&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "unknown stored trace `"};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__0 = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__0_value;
static lean_once_cell_t l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__1;
static const lean_string_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "` ("};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__2 = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__2_value;
static lean_once_cell_t l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__3;
static const lean_string_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "); store one using `store_traces_as "};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__4 = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__4_value;
static lean_once_cell_t l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__5;
static const lean_string_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " in <command>`"};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__6 = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__6_value;
static lean_once_cell_t l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__7;
static const lean_string_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "stored traces: "};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__8 = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__8_value;
static lean_once_cell_t l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__9;
static const lean_string_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__10 = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__10_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__10_value)}};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__11 = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__11_value;
static lean_once_cell_t l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__12;
static const lean_string_object l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "no traces have been stored in this file"};
static const lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__13 = (const lean_object*)&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__13_value;
static lean_once_cell_t l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___lam__0_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_(lean_object* v___x_94_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_96_, 0, v___x_94_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___lam__0_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2____boxed(lean_object* v___x_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___lam__0_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_(v___x_97_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; lean_object* v___x_135_; 
v___f_130_ = ((lean_object*)(l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__0_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_));
v___x_131_ = lean_box(0);
v___x_132_ = lean_box(2);
v___x_133_ = ((lean_object*)(l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn___closed__11_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_));
v___x_134_ = 0;
v___x_135_ = l_Lean_registerEnvExtension___redArg(v___f_130_, v___x_131_, v___x_132_, v___x_133_, v___x_134_, v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2____boxed(lean_object* v_a_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_();
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_findStoredTrace_x3f(lean_object* v_env_138_, lean_object* v_declName_139_){
_start:
{
lean_object* v___x_140_; lean_object* v_asyncMode_141_; lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_140_ = l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_storedTracesExt;
v_asyncMode_141_ = lean_ctor_get(v___x_140_, 2);
v___x_142_ = lean_box(1);
v___x_143_ = lean_box(0);
v___x_144_ = 0;
v___x_145_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_142_, v___x_140_, v_env_138_, v_asyncMode_141_, v___x_143_, v___x_144_);
v___x_146_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_145_, v_declName_139_);
lean_dec(v___x_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_findStoredTrace_x3f___boxed(lean_object* v_env_147_, lean_object* v_declName_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Lean_PostprocessTraces_findStoredTrace_x3f(v_env_147_, v_declName_148_);
lean_dec(v_declName_148_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_PostprocessTraces_allStoredTraces_spec__0(lean_object* v_init_150_, lean_object* v_x_151_){
_start:
{
if (lean_obj_tag(v_x_151_) == 0)
{
lean_object* v_k_152_; lean_object* v_v_153_; lean_object* v_l_154_; lean_object* v_r_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v_k_152_ = lean_ctor_get(v_x_151_, 1);
v_v_153_ = lean_ctor_get(v_x_151_, 2);
v_l_154_ = lean_ctor_get(v_x_151_, 3);
v_r_155_ = lean_ctor_get(v_x_151_, 4);
v___x_156_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_PostprocessTraces_allStoredTraces_spec__0(v_init_150_, v_r_155_);
lean_inc(v_v_153_);
lean_inc(v_k_152_);
v___x_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_157_, 0, v_k_152_);
lean_ctor_set(v___x_157_, 1, v_v_153_);
v___x_158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
lean_ctor_set(v___x_158_, 1, v___x_156_);
v_init_150_ = v___x_158_;
v_x_151_ = v_l_154_;
goto _start;
}
else
{
return v_init_150_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_PostprocessTraces_allStoredTraces_spec__0___boxed(lean_object* v_init_160_, lean_object* v_x_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_PostprocessTraces_allStoredTraces_spec__0(v_init_160_, v_x_161_);
lean_dec(v_x_161_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_allStoredTraces(lean_object* v_env_163_){
_start:
{
lean_object* v___x_164_; lean_object* v_asyncMode_165_; lean_object* v___x_166_; lean_object* v___x_167_; uint8_t v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_164_ = l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_storedTracesExt;
v_asyncMode_165_ = lean_ctor_get(v___x_164_, 2);
v___x_166_ = lean_box(1);
v___x_167_ = lean_box(0);
v___x_168_ = 0;
v___x_169_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_166_, v___x_164_, v_env_163_, v_asyncMode_165_, v___x_167_, v___x_168_);
v___x_170_ = lean_box(0);
v___x_171_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_PostprocessTraces_allStoredTraces_spec__0(v___x_170_, v___x_169_);
lean_dec(v___x_169_);
return v___x_171_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_172_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_173_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__0);
v___x_174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_175_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__1);
v___x_176_ = lean_unsigned_to_nat(0u);
v___x_177_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
lean_ctor_set(v___x_177_, 2, v___x_176_);
lean_ctor_set(v___x_177_, 3, v___x_176_);
lean_ctor_set(v___x_177_, 4, v___x_175_);
lean_ctor_set(v___x_177_, 5, v___x_175_);
lean_ctor_set(v___x_177_, 6, v___x_175_);
lean_ctor_set(v___x_177_, 7, v___x_175_);
lean_ctor_set(v___x_177_, 8, v___x_175_);
lean_ctor_set(v___x_177_, 9, v___x_175_);
lean_ctor_set(v___x_177_, 10, v___x_175_);
return v___x_177_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_178_ = lean_unsigned_to_nat(32u);
v___x_179_ = lean_mk_empty_array_with_capacity(v___x_178_);
v___x_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
return v___x_180_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_181_ = ((size_t)5ULL);
v___x_182_ = lean_unsigned_to_nat(0u);
v___x_183_ = lean_unsigned_to_nat(32u);
v___x_184_ = lean_mk_empty_array_with_capacity(v___x_183_);
v___x_185_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__3);
v___x_186_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_186_, 0, v___x_185_);
lean_ctor_set(v___x_186_, 1, v___x_184_);
lean_ctor_set(v___x_186_, 2, v___x_182_);
lean_ctor_set(v___x_186_, 3, v___x_182_);
lean_ctor_set_usize(v___x_186_, 4, v___x_181_);
return v___x_186_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_187_ = lean_box(1);
v___x_188_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__4);
v___x_189_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__1);
v___x_190_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
lean_ctor_set(v___x_190_, 1, v___x_188_);
lean_ctor_set(v___x_190_, 2, v___x_187_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0(lean_object* v_msgData_191_, lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
lean_object* v___x_195_; lean_object* v_toCold_196_; lean_object* v_env_197_; lean_object* v_options_198_; uint8_t v___x_199_; lean_object* v_env_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_195_ = lean_st_ref_get(v___y_193_);
v_toCold_196_ = lean_ctor_get(v___y_192_, 0);
v_env_197_ = lean_ctor_get(v___x_195_, 0);
lean_inc_ref(v_env_197_);
lean_dec(v___x_195_);
v_options_198_ = lean_ctor_get(v_toCold_196_, 2);
v___x_199_ = 0;
v_env_200_ = l_Lean_Environment_setRecordingDeps(v_env_197_, v___x_199_);
v___x_201_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__2);
v___x_202_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_198_);
v___x_203_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_203_, 0, v_env_200_);
lean_ctor_set(v___x_203_, 1, v___x_201_);
lean_ctor_set(v___x_203_, 2, v___x_202_);
lean_ctor_set(v___x_203_, 3, v_options_198_);
v___x_204_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
lean_ctor_set(v___x_204_, 1, v_msgData_191_);
v___x_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___boxed(lean_object* v_msgData_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0(v_msgData_206_, v___y_207_, v___y_208_);
lean_dec(v___y_208_);
lean_dec_ref(v___y_207_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0___redArg(lean_object* v_msg_211_, lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
lean_object* v_ref_215_; lean_object* v___x_216_; lean_object* v_a_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_225_; 
v_ref_215_ = lean_ctor_get(v___y_212_, 2);
v___x_216_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0(v_msg_211_, v___y_212_, v___y_213_);
v_a_217_ = lean_ctor_get(v___x_216_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v___x_216_);
if (v_isSharedCheck_225_ == 0)
{
v___x_219_ = v___x_216_;
v_isShared_220_ = v_isSharedCheck_225_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_a_217_);
lean_dec(v___x_216_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_225_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_221_; lean_object* v___x_223_; 
lean_inc(v_ref_215_);
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v_ref_215_);
lean_ctor_set(v___x_221_, 1, v_a_217_);
if (v_isShared_220_ == 0)
{
lean_ctor_set_tag(v___x_219_, 1);
lean_ctor_set(v___x_219_, 0, v___x_221_);
v___x_223_ = v___x_219_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v___x_221_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0___redArg___boxed(lean_object* v_msg_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0___redArg(v_msg_226_, v___y_227_, v___y_228_);
lean_dec(v___y_228_);
lean_dec_ref(v___y_227_);
return v_res_230_;
}
}
static lean_object* _init_l_Lean_PostprocessTraces_findStoredTrace___closed__1(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = ((lean_object*)(l_Lean_PostprocessTraces_findStoredTrace___closed__0));
v___x_233_ = l_Lean_stringToMessageData(v___x_232_);
return v___x_233_;
}
}
static lean_object* _init_l_Lean_PostprocessTraces_findStoredTrace___closed__3(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = ((lean_object*)(l_Lean_PostprocessTraces_findStoredTrace___closed__2));
v___x_236_ = l_Lean_stringToMessageData(v___x_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_findStoredTrace(lean_object* v_declName_237_, lean_object* v_a_238_, lean_object* v_a_239_){
_start:
{
lean_object* v___x_241_; lean_object* v_env_242_; lean_object* v___x_243_; 
v___x_241_ = lean_st_ref_get(v_a_239_);
v_env_242_ = lean_ctor_get(v___x_241_, 0);
lean_inc_ref(v_env_242_);
lean_dec(v___x_241_);
v___x_243_ = l_Lean_PostprocessTraces_findStoredTrace_x3f(v_env_242_, v_declName_237_);
if (lean_obj_tag(v___x_243_) == 1)
{
lean_object* v_val_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_251_; 
lean_dec(v_declName_237_);
v_val_244_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_251_ == 0)
{
v___x_246_ = v___x_243_;
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_val_244_);
lean_dec(v___x_243_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_249_; 
if (v_isShared_247_ == 0)
{
lean_ctor_set_tag(v___x_246_, 0);
v___x_249_ = v___x_246_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_val_244_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
else
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
lean_dec(v___x_243_);
v___x_252_ = lean_obj_once(&l_Lean_PostprocessTraces_findStoredTrace___closed__1, &l_Lean_PostprocessTraces_findStoredTrace___closed__1_once, _init_l_Lean_PostprocessTraces_findStoredTrace___closed__1);
v___x_253_ = l_Lean_MessageData_ofName(v_declName_237_);
v___x_254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_252_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
v___x_255_ = lean_obj_once(&l_Lean_PostprocessTraces_findStoredTrace___closed__3, &l_Lean_PostprocessTraces_findStoredTrace___closed__3_once, _init_l_Lean_PostprocessTraces_findStoredTrace___closed__3);
v___x_256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_254_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = l_Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0___redArg(v___x_256_, v_a_238_, v_a_239_);
return v___x_257_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_findStoredTrace___boxed(lean_object* v_declName_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Lean_PostprocessTraces_findStoredTrace(v_declName_258_, v_a_259_, v_a_260_);
lean_dec(v_a_260_);
lean_dec_ref(v_a_259_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0(lean_object* v_00_u03b1_263_, lean_object* v_msg_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l_Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0___redArg(v_msg_264_, v___y_265_, v___y_266_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0___boxed(lean_object* v_00_u03b1_269_, lean_object* v_msg_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0(v_00_u03b1_269_, v_msg_270_, v___y_271_, v___y_272_);
lean_dec(v___y_272_);
lean_dec_ref(v___y_271_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_storeTraces___redArg___lam__0(lean_object* v_declName_275_, lean_object* v_t_276_, lean_object* v_x_277_){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_declName_275_, v_t_276_, v_x_277_);
return v___x_278_;
}
}
static lean_object* _init_l_Lean_PostprocessTraces_storeTraces___redArg___closed__0(void){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__0);
v___x_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
return v___x_280_;
}
}
static lean_object* _init_l_Lean_PostprocessTraces_storeTraces___redArg___closed__1(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = lean_obj_once(&l_Lean_PostprocessTraces_storeTraces___redArg___closed__0, &l_Lean_PostprocessTraces_storeTraces___redArg___closed__0_once, _init_l_Lean_PostprocessTraces_storeTraces___redArg___closed__0);
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
lean_ctor_set(v___x_282_, 1, v___x_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_storeTraces___redArg(lean_object* v_declName_283_, lean_object* v_t_284_, lean_object* v_a_285_){
_start:
{
lean_object* v___f_287_; lean_object* v___x_288_; lean_object* v_env_289_; lean_object* v_nextMacroScope_290_; lean_object* v_ngen_291_; lean_object* v_auxDeclNGen_292_; lean_object* v_traceState_293_; lean_object* v_recordedDeps_294_; lean_object* v_messages_295_; lean_object* v_infoState_296_; lean_object* v_snapshotTasks_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_318_; 
v___f_287_ = lean_alloc_closure((void*)(l_Lean_PostprocessTraces_storeTraces___redArg___lam__0), 3, 2);
lean_closure_set(v___f_287_, 0, v_declName_283_);
lean_closure_set(v___f_287_, 1, v_t_284_);
v___x_288_ = lean_st_ref_take(v_a_285_);
v_env_289_ = lean_ctor_get(v___x_288_, 0);
v_nextMacroScope_290_ = lean_ctor_get(v___x_288_, 1);
v_ngen_291_ = lean_ctor_get(v___x_288_, 2);
v_auxDeclNGen_292_ = lean_ctor_get(v___x_288_, 3);
v_traceState_293_ = lean_ctor_get(v___x_288_, 4);
v_recordedDeps_294_ = lean_ctor_get(v___x_288_, 6);
v_messages_295_ = lean_ctor_get(v___x_288_, 7);
v_infoState_296_ = lean_ctor_get(v___x_288_, 8);
v_snapshotTasks_297_ = lean_ctor_get(v___x_288_, 9);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_318_ == 0)
{
lean_object* v_unused_319_; 
v_unused_319_ = lean_ctor_get(v___x_288_, 5);
lean_dec(v_unused_319_);
v___x_299_ = v___x_288_;
v_isShared_300_ = v_isSharedCheck_318_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_snapshotTasks_297_);
lean_inc(v_infoState_296_);
lean_inc(v_messages_295_);
lean_inc(v_recordedDeps_294_);
lean_inc(v_traceState_293_);
lean_inc(v_auxDeclNGen_292_);
lean_inc(v_ngen_291_);
lean_inc(v_nextMacroScope_290_);
lean_inc(v_env_289_);
lean_dec(v___x_288_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_318_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_301_; lean_object* v_asyncMode_302_; uint8_t v_logWrites_303_; lean_object* v___x_304_; lean_object* v___y_306_; lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_301_ = l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_storedTracesExt;
v_asyncMode_302_ = lean_ctor_get(v___x_301_, 2);
v_logWrites_303_ = lean_ctor_get_uint8(v___x_301_, sizeof(void*)*6);
v___x_304_ = lean_box(0);
v___x_313_ = lean_box(0);
v___x_314_ = 1;
if (v_logWrites_303_ == 0)
{
lean_object* v___x_315_; 
v___x_315_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v___x_301_, v_env_289_, v___f_287_, v_asyncMode_302_, v___x_313_, v___x_314_);
v___y_306_ = v___x_315_;
goto v___jp_305_;
}
else
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v___x_301_, v_env_289_);
lean_dec_ref(v_env_289_);
v___x_317_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v___x_301_, v___x_316_, v___f_287_, v_asyncMode_302_, v___x_313_, v___x_314_);
v___y_306_ = v___x_317_;
goto v___jp_305_;
}
v___jp_305_:
{
lean_object* v___x_307_; lean_object* v___x_309_; 
v___x_307_ = lean_obj_once(&l_Lean_PostprocessTraces_storeTraces___redArg___closed__1, &l_Lean_PostprocessTraces_storeTraces___redArg___closed__1_once, _init_l_Lean_PostprocessTraces_storeTraces___redArg___closed__1);
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 5, v___x_307_);
lean_ctor_set(v___x_299_, 0, v___y_306_);
v___x_309_ = v___x_299_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___y_306_);
lean_ctor_set(v_reuseFailAlloc_312_, 1, v_nextMacroScope_290_);
lean_ctor_set(v_reuseFailAlloc_312_, 2, v_ngen_291_);
lean_ctor_set(v_reuseFailAlloc_312_, 3, v_auxDeclNGen_292_);
lean_ctor_set(v_reuseFailAlloc_312_, 4, v_traceState_293_);
lean_ctor_set(v_reuseFailAlloc_312_, 5, v___x_307_);
lean_ctor_set(v_reuseFailAlloc_312_, 6, v_recordedDeps_294_);
lean_ctor_set(v_reuseFailAlloc_312_, 7, v_messages_295_);
lean_ctor_set(v_reuseFailAlloc_312_, 8, v_infoState_296_);
lean_ctor_set(v_reuseFailAlloc_312_, 9, v_snapshotTasks_297_);
v___x_309_ = v_reuseFailAlloc_312_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = lean_st_ref_put(v_a_285_, v___x_309_);
v___x_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_311_, 0, v___x_304_);
return v___x_311_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_storeTraces___redArg___boxed(lean_object* v_declName_320_, lean_object* v_t_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_PostprocessTraces_storeTraces___redArg(v_declName_320_, v_t_321_, v_a_322_);
lean_dec(v_a_322_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_storeTraces(lean_object* v_declName_325_, lean_object* v_t_326_, lean_object* v_a_327_, lean_object* v_a_328_){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = l_Lean_PostprocessTraces_storeTraces___redArg(v_declName_325_, v_t_326_, v_a_328_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_storeTraces___boxed(lean_object* v_declName_331_, lean_object* v_t_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Lean_PostprocessTraces_storeTraces(v_declName_331_, v_t_332_, v_a_333_, v_a_334_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__0(size_t v_sz_337_, size_t v_i_338_, lean_object* v_bs_339_){
_start:
{
uint8_t v___x_340_; 
v___x_340_ = lean_usize_dec_lt(v_i_338_, v_sz_337_);
if (v___x_340_ == 0)
{
return v_bs_339_;
}
else
{
lean_object* v_v_341_; lean_object* v___x_342_; lean_object* v_bs_x27_343_; lean_object* v___x_344_; size_t v___x_345_; size_t v___x_346_; lean_object* v___x_347_; 
v_v_341_ = lean_array_uget(v_bs_339_, v_i_338_);
v___x_342_ = lean_unsigned_to_nat(0u);
v_bs_x27_343_ = lean_array_uset(v_bs_339_, v_i_338_, v___x_342_);
v___x_344_ = l_Lean_PostprocessTraces_TraceTree_ofMessageData(v_v_341_);
v___x_345_ = ((size_t)1ULL);
v___x_346_ = lean_usize_add(v_i_338_, v___x_345_);
v___x_347_ = lean_array_uset(v_bs_x27_343_, v_i_338_, v___x_344_);
v_i_338_ = v___x_346_;
v_bs_339_ = v___x_347_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__0___boxed(lean_object* v_sz_349_, lean_object* v_i_350_, lean_object* v_bs_351_){
_start:
{
size_t v_sz_boxed_352_; size_t v_i_boxed_353_; lean_object* v_res_354_; 
v_sz_boxed_352_ = lean_unbox_usize(v_sz_349_);
lean_dec(v_sz_349_);
v_i_boxed_353_ = lean_unbox_usize(v_i_350_);
lean_dec(v_i_350_);
v_res_354_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__0(v_sz_boxed_352_, v_i_boxed_353_, v_bs_351_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__1(lean_object* v_as_357_, size_t v_i_358_, size_t v_stop_359_, lean_object* v_b_360_){
_start:
{
lean_object* v___y_362_; uint8_t v___x_366_; 
v___x_366_ = lean_usize_dec_eq(v_i_358_, v_stop_359_);
if (v___x_366_ == 0)
{
lean_object* v___x_367_; lean_object* v_data_368_; lean_object* v___x_369_; 
v___x_367_ = lean_array_uget_borrowed(v_as_357_, v_i_358_);
v_data_368_ = lean_ctor_get(v___x_367_, 4);
lean_inc(v_data_368_);
v___x_369_ = l_Lean_Elab_PostprocessTraces_traceContainer_x3f(v_data_368_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__1___closed__0));
v___x_371_ = l_Array_append___redArg(v_b_360_, v___x_370_);
v___y_362_ = v___x_371_;
goto v___jp_361_;
}
else
{
lean_object* v_val_372_; lean_object* v_snd_373_; size_t v_sz_374_; size_t v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v_val_372_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_val_372_);
lean_dec_ref_known(v___x_369_, 1);
v_snd_373_ = lean_ctor_get(v_val_372_, 1);
lean_inc(v_snd_373_);
lean_dec(v_val_372_);
v_sz_374_ = lean_array_size(v_snd_373_);
v___x_375_ = ((size_t)0ULL);
v___x_376_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__0(v_sz_374_, v___x_375_, v_snd_373_);
v___x_377_ = l_Array_append___redArg(v_b_360_, v___x_376_);
lean_dec_ref(v___x_376_);
v___y_362_ = v___x_377_;
goto v___jp_361_;
}
}
else
{
return v_b_360_;
}
v___jp_361_:
{
size_t v___x_363_; size_t v___x_364_; 
v___x_363_ = ((size_t)1ULL);
v___x_364_ = lean_usize_add(v_i_358_, v___x_363_);
v_i_358_ = v___x_364_;
v_b_360_ = v___y_362_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__1___boxed(lean_object* v_as_378_, lean_object* v_i_379_, lean_object* v_stop_380_, lean_object* v_b_381_){
_start:
{
size_t v_i_boxed_382_; size_t v_stop_boxed_383_; lean_object* v_res_384_; 
v_i_boxed_382_ = lean_unbox_usize(v_i_379_);
lean_dec(v_i_379_);
v_stop_boxed_383_ = lean_unbox_usize(v_stop_380_);
lean_dec(v_stop_380_);
v_res_384_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__1(v_as_378_, v_i_boxed_382_, v_stop_boxed_383_, v_b_381_);
lean_dec_ref(v_as_378_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_StoredTrace_trees(lean_object* v_t_387_){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_388_ = lean_unsigned_to_nat(0u);
v___x_389_ = ((lean_object*)(l_Lean_PostprocessTraces_StoredTrace_trees___closed__0));
v___x_390_ = lean_array_get_size(v_t_387_);
v___x_391_ = lean_nat_dec_lt(v___x_388_, v___x_390_);
if (v___x_391_ == 0)
{
return v___x_389_;
}
else
{
size_t v___x_392_; size_t v___x_393_; lean_object* v___x_394_; 
v___x_392_ = ((size_t)0ULL);
v___x_393_ = lean_usize_of_nat(v___x_390_);
v___x_394_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_StoredTrace_trees_spec__1(v_t_387_, v___x_392_, v___x_393_, v___x_389_);
return v___x_394_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_StoredTrace_trees___boxed(lean_object* v_t_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lean_PostprocessTraces_StoredTrace_trees(v_t_395_);
lean_dec_ref(v_t_395_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0_spec__0(lean_object* v_post_397_, lean_object* v_as_398_, size_t v_i_399_, size_t v_stop_400_, lean_object* v_b_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
lean_object* v_a_406_; uint8_t v___x_410_; 
v___x_410_ = lean_usize_dec_eq(v_i_399_, v_stop_400_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = lean_array_uget_borrowed(v_as_398_, v_i_399_);
lean_inc(v___x_411_);
lean_inc_ref(v_post_397_);
v___x_412_ = l_Lean_Elab_PostprocessTraces_postprocessMessage(v_post_397_, v___x_411_, v___y_402_, v___y_403_);
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_413_; 
v_a_413_ = lean_ctor_get(v___x_412_, 0);
lean_inc(v_a_413_);
lean_dec_ref_known(v___x_412_, 1);
if (lean_obj_tag(v_a_413_) == 0)
{
v_a_406_ = v_b_401_;
goto v___jp_405_;
}
else
{
lean_object* v_val_414_; lean_object* v___x_415_; 
v_val_414_ = lean_ctor_get(v_a_413_, 0);
lean_inc(v_val_414_);
lean_dec_ref_known(v_a_413_, 1);
v___x_415_ = lean_array_push(v_b_401_, v_val_414_);
v_a_406_ = v___x_415_;
goto v___jp_405_;
}
}
else
{
lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_423_; 
lean_dec_ref(v_b_401_);
lean_dec_ref(v_post_397_);
v_a_416_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_423_ == 0)
{
v___x_418_ = v___x_412_;
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v___x_412_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_421_; 
if (v_isShared_419_ == 0)
{
v___x_421_ = v___x_418_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_a_416_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
}
else
{
lean_object* v___x_424_; 
lean_dec_ref(v_post_397_);
v___x_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_424_, 0, v_b_401_);
return v___x_424_;
}
v___jp_405_:
{
size_t v___x_407_; size_t v___x_408_; 
v___x_407_ = ((size_t)1ULL);
v___x_408_ = lean_usize_add(v_i_399_, v___x_407_);
v_i_399_ = v___x_408_;
v_b_401_ = v_a_406_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0_spec__0___boxed(lean_object* v_post_425_, lean_object* v_as_426_, lean_object* v_i_427_, lean_object* v_stop_428_, lean_object* v_b_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_){
_start:
{
size_t v_i_boxed_433_; size_t v_stop_boxed_434_; lean_object* v_res_435_; 
v_i_boxed_433_ = lean_unbox_usize(v_i_427_);
lean_dec(v_i_427_);
v_stop_boxed_434_ = lean_unbox_usize(v_stop_428_);
lean_dec(v_stop_428_);
v_res_435_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0_spec__0(v_post_425_, v_as_426_, v_i_boxed_433_, v_stop_boxed_434_, v_b_429_, v___y_430_, v___y_431_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
lean_dec_ref(v_as_426_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0(lean_object* v_post_438_, lean_object* v_as_439_, lean_object* v_start_440_, lean_object* v_stop_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
lean_object* v___x_445_; uint8_t v___x_446_; 
v___x_445_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0___closed__0));
v___x_446_ = lean_nat_dec_lt(v_start_440_, v_stop_441_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; 
lean_dec_ref(v_post_438_);
v___x_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_447_, 0, v___x_445_);
return v___x_447_;
}
else
{
lean_object* v___x_448_; uint8_t v___x_449_; 
v___x_448_ = lean_array_get_size(v_as_439_);
v___x_449_ = lean_nat_dec_le(v_stop_441_, v___x_448_);
if (v___x_449_ == 0)
{
uint8_t v___x_450_; 
v___x_450_ = lean_nat_dec_lt(v_start_440_, v___x_448_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; 
lean_dec_ref(v_post_438_);
v___x_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_445_);
return v___x_451_;
}
else
{
size_t v___x_452_; size_t v___x_453_; lean_object* v___x_454_; 
v___x_452_ = lean_usize_of_nat(v_start_440_);
v___x_453_ = lean_usize_of_nat(v___x_448_);
v___x_454_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0_spec__0(v_post_438_, v_as_439_, v___x_452_, v___x_453_, v___x_445_, v___y_442_, v___y_443_);
return v___x_454_;
}
}
else
{
size_t v___x_455_; size_t v___x_456_; lean_object* v___x_457_; 
v___x_455_ = lean_usize_of_nat(v_start_440_);
v___x_456_ = lean_usize_of_nat(v_stop_441_);
v___x_457_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0_spec__0(v_post_438_, v_as_439_, v___x_455_, v___x_456_, v___x_445_, v___y_442_, v___y_443_);
return v___x_457_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0___boxed(lean_object* v_post_458_, lean_object* v_as_459_, lean_object* v_start_460_, lean_object* v_stop_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0(v_post_458_, v_as_459_, v_start_460_, v_stop_461_, v___y_462_, v___y_463_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v_stop_461_);
lean_dec(v_start_460_);
lean_dec_ref(v_as_459_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_StoredTrace_postprocess(lean_object* v_t_466_, lean_object* v_post_467_, lean_object* v_a_468_, lean_object* v_a_469_){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_471_ = lean_unsigned_to_nat(0u);
v___x_472_ = lean_array_get_size(v_t_466_);
v___x_473_ = l_Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0(v_post_467_, v_t_466_, v___x_471_, v___x_472_, v_a_468_, v_a_469_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
v_a_474_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_473_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_473_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
else
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_489_; 
v_a_482_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_489_ == 0)
{
v___x_484_ = v___x_473_;
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_473_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_a_482_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_StoredTrace_postprocess___boxed(lean_object* v_t_490_, lean_object* v_post_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Lean_PostprocessTraces_StoredTrace_postprocess(v_t_490_, v_post_491_, v_a_492_, v_a_493_);
lean_dec(v_a_493_);
lean_dec_ref(v_a_492_);
lean_dec_ref(v_t_490_);
return v_res_495_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_496_ = lean_box(0);
v___x_497_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_498_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
lean_ctor_set(v___x_498_, 1, v___x_496_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg(){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_500_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg___closed__0);
v___x_501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg___boxed(lean_object* v___y_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg();
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0(lean_object* v_00_u03b1_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg();
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___boxed(lean_object* v_00_u03b1_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0(v_00_u03b1_509_, v___y_510_, v___y_511_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__5(lean_object* v_as_514_, size_t v_i_515_, size_t v_stop_516_, lean_object* v_b_517_){
_start:
{
uint8_t v___x_518_; 
v___x_518_ = lean_usize_dec_eq(v_i_515_, v_stop_516_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; lean_object* v___x_520_; size_t v___x_521_; size_t v___x_522_; 
v___x_519_ = lean_array_uget_borrowed(v_as_514_, v_i_515_);
lean_inc(v___x_519_);
v___x_520_ = l_Lean_MessageLog_add(v___x_519_, v_b_517_);
v___x_521_ = ((size_t)1ULL);
v___x_522_ = lean_usize_add(v_i_515_, v___x_521_);
v_i_515_ = v___x_522_;
v_b_517_ = v___x_520_;
goto _start;
}
else
{
return v_b_517_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__5___boxed(lean_object* v_as_524_, lean_object* v_i_525_, lean_object* v_stop_526_, lean_object* v_b_527_){
_start:
{
size_t v_i_boxed_528_; size_t v_stop_boxed_529_; lean_object* v_res_530_; 
v_i_boxed_528_ = lean_unbox_usize(v_i_525_);
lean_dec(v_i_525_);
v_stop_boxed_529_ = lean_unbox_usize(v_stop_526_);
lean_dec(v_stop_526_);
v_res_530_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__5(v_as_524_, v_i_boxed_528_, v_stop_boxed_529_, v_b_527_);
lean_dec_ref(v_as_524_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__4(lean_object* v_as_531_, size_t v_i_532_, size_t v_stop_533_, lean_object* v_b_534_){
_start:
{
lean_object* v___y_536_; uint8_t v___x_540_; 
v___x_540_ = lean_usize_dec_eq(v_i_532_, v_stop_533_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_541_ = lean_array_uget_borrowed(v_as_531_, v_i_532_);
v___x_542_ = l_Lean_Message_isTrace(v___x_541_);
if (v___x_542_ == 0)
{
v___y_536_ = v_b_534_;
goto v___jp_535_;
}
else
{
lean_object* v___x_543_; 
lean_inc(v___x_541_);
v___x_543_ = lean_array_push(v_b_534_, v___x_541_);
v___y_536_ = v___x_543_;
goto v___jp_535_;
}
}
else
{
return v_b_534_;
}
v___jp_535_:
{
size_t v___x_537_; size_t v___x_538_; 
v___x_537_ = ((size_t)1ULL);
v___x_538_ = lean_usize_add(v_i_532_, v___x_537_);
v_i_532_ = v___x_538_;
v_b_534_ = v___y_536_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__4___boxed(lean_object* v_as_544_, lean_object* v_i_545_, lean_object* v_stop_546_, lean_object* v_b_547_){
_start:
{
size_t v_i_boxed_548_; size_t v_stop_boxed_549_; lean_object* v_res_550_; 
v_i_boxed_548_ = lean_unbox_usize(v_i_545_);
lean_dec(v_i_545_);
v_stop_boxed_549_ = lean_unbox_usize(v_stop_546_);
lean_dec(v_stop_546_);
v_res_550_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__4(v_as_544_, v_i_boxed_548_, v_stop_boxed_549_, v_b_547_);
lean_dec_ref(v_as_544_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__7(lean_object* v_a_551_, lean_object* v_a_552_){
_start:
{
if (lean_obj_tag(v_a_551_) == 0)
{
lean_object* v___x_553_; 
v___x_553_ = l_List_reverse___redArg(v_a_552_);
return v___x_553_;
}
else
{
lean_object* v_head_554_; lean_object* v_tail_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_564_; 
v_head_554_ = lean_ctor_get(v_a_551_, 0);
v_tail_555_ = lean_ctor_get(v_a_551_, 1);
v_isSharedCheck_564_ = !lean_is_exclusive(v_a_551_);
if (v_isSharedCheck_564_ == 0)
{
v___x_557_ = v_a_551_;
v_isShared_558_ = v_isSharedCheck_564_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_tail_555_);
lean_inc(v_head_554_);
lean_dec(v_a_551_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_564_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_559_; lean_object* v___x_561_; 
v___x_559_ = l_Lean_mkLevelParam(v_head_554_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 1, v_a_552_);
lean_ctor_set(v___x_557_, 0, v___x_559_);
v___x_561_ = v___x_557_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___x_559_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_a_552_);
v___x_561_ = v_reuseFailAlloc_563_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
v_a_551_ = v_tail_555_;
v_a_552_ = v___x_561_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__1(void){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__0));
v___x_567_ = l_Lean_stringToMessageData(v___x_566_);
return v___x_567_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__3(void){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_569_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__2));
v___x_570_ = l_Lean_stringToMessageData(v___x_569_);
return v___x_570_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__5(void){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__4));
v___x_573_ = l_Lean_stringToMessageData(v___x_572_);
return v___x_573_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__7(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__6));
v___x_576_ = l_Lean_stringToMessageData(v___x_575_);
return v___x_576_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__9(void){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_578_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__8));
v___x_579_ = l_Lean_stringToMessageData(v___x_578_);
return v___x_579_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__11(void){
_start:
{
lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_581_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__10));
v___x_582_ = l_Lean_stringToMessageData(v___x_581_);
return v___x_582_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__13(void){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__12));
v___x_585_ = l_Lean_stringToMessageData(v___x_584_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg(lean_object* v_msg_586_, lean_object* v_declHint_587_, lean_object* v___y_588_){
_start:
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v_env_592_; uint8_t v___x_593_; 
v___x_590_ = lean_box(0);
v___x_591_ = lean_st_ref_get(v___y_588_);
v_env_592_ = lean_ctor_get(v___x_591_, 0);
lean_inc_ref(v_env_592_);
lean_dec(v___x_591_);
v___x_593_ = l_Lean_Name_isAnonymous(v_declHint_587_);
if (v___x_593_ == 0)
{
uint8_t v_isExporting_594_; 
v_isExporting_594_ = lean_ctor_get_uint8(v_env_592_, sizeof(void*)*13);
if (v_isExporting_594_ == 0)
{
lean_object* v___x_595_; 
lean_dec_ref(v_env_592_);
lean_dec(v_declHint_587_);
v___x_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_595_, 0, v_msg_586_);
return v___x_595_;
}
else
{
lean_object* v___x_596_; uint8_t v___x_597_; 
lean_inc_ref(v_env_592_);
v___x_596_ = l_Lean_Environment_setExporting(v_env_592_, v___x_593_);
lean_inc(v_declHint_587_);
lean_inc_ref(v___x_596_);
v___x_597_ = l_Lean_Environment_contains(v___x_596_, v_declHint_587_, v_isExporting_594_);
if (v___x_597_ == 0)
{
lean_object* v___x_598_; 
lean_dec_ref(v___x_596_);
lean_dec_ref(v_env_592_);
lean_dec(v_declHint_587_);
v___x_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_598_, 0, v_msg_586_);
return v___x_598_;
}
else
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v_c_604_; lean_object* v___x_605_; 
v___x_599_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__2);
v___x_600_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__5);
v___x_601_ = l_Lean_Options_empty;
lean_inc_ref(v___x_596_);
v___x_602_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_602_, 0, v___x_596_);
lean_ctor_set(v___x_602_, 1, v___x_599_);
lean_ctor_set(v___x_602_, 2, v___x_600_);
lean_ctor_set(v___x_602_, 3, v___x_601_);
lean_inc(v_declHint_587_);
v___x_603_ = l_Lean_MessageData_ofConstName(v_declHint_587_, v___x_593_);
v_c_604_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_604_, 0, v___x_602_);
lean_ctor_set(v_c_604_, 1, v___x_603_);
v___x_605_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_596_, v_declHint_587_);
lean_dec_ref(v___x_596_);
if (lean_obj_tag(v___x_605_) == 0)
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
lean_dec_ref(v_env_592_);
lean_dec(v_declHint_587_);
v___x_606_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__1);
v___x_607_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_607_, 0, v___x_606_);
lean_ctor_set(v___x_607_, 1, v_c_604_);
v___x_608_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__3);
v___x_609_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_609_, 0, v___x_607_);
lean_ctor_set(v___x_609_, 1, v___x_608_);
v___x_610_ = l_Lean_MessageData_note(v___x_609_);
v___x_611_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_611_, 0, v_msg_586_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
v___x_612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
return v___x_612_;
}
else
{
lean_object* v_val_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_647_; 
v_val_613_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_647_ == 0)
{
v___x_615_ = v___x_605_;
v_isShared_616_ = v_isSharedCheck_647_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_val_613_);
lean_dec(v___x_605_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_647_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_617_; lean_object* v_moduleNames_618_; lean_object* v_mod_619_; uint8_t v___x_620_; 
v___x_617_ = l_Lean_Environment_header(v_env_592_);
lean_dec_ref(v_env_592_);
v_moduleNames_618_ = lean_ctor_get(v___x_617_, 4);
lean_inc_ref(v_moduleNames_618_);
lean_dec_ref(v___x_617_);
v_mod_619_ = lean_array_get(v___x_590_, v_moduleNames_618_, v_val_613_);
lean_dec(v_val_613_);
lean_dec_ref(v_moduleNames_618_);
v___x_620_ = l_Lean_isPrivateName(v_declHint_587_);
lean_dec(v_declHint_587_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_632_; 
v___x_621_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__5);
v___x_622_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_621_);
lean_ctor_set(v___x_622_, 1, v_c_604_);
v___x_623_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__7);
v___x_624_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_622_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
v___x_625_ = l_Lean_MessageData_ofName(v_mod_619_);
v___x_626_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_626_, 0, v___x_624_);
lean_ctor_set(v___x_626_, 1, v___x_625_);
v___x_627_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__9);
v___x_628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_626_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
v___x_629_ = l_Lean_MessageData_note(v___x_628_);
v___x_630_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_630_, 0, v_msg_586_);
lean_ctor_set(v___x_630_, 1, v___x_629_);
if (v_isShared_616_ == 0)
{
lean_ctor_set_tag(v___x_615_, 0);
lean_ctor_set(v___x_615_, 0, v___x_630_);
v___x_632_ = v___x_615_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v___x_630_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
else
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_645_; 
v___x_634_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__1);
v___x_635_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
lean_ctor_set(v___x_635_, 1, v_c_604_);
v___x_636_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__11);
v___x_637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_635_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v___x_638_ = l_Lean_MessageData_ofName(v_mod_619_);
v___x_639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_639_, 0, v___x_637_);
lean_ctor_set(v___x_639_, 1, v___x_638_);
v___x_640_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___closed__13);
v___x_641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_639_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
v___x_642_ = l_Lean_MessageData_note(v___x_641_);
v___x_643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_643_, 0, v_msg_586_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
if (v_isShared_616_ == 0)
{
lean_ctor_set_tag(v___x_615_, 0);
lean_ctor_set(v___x_615_, 0, v___x_643_);
v___x_645_ = v___x_615_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v___x_643_);
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
else
{
lean_object* v___x_648_; 
lean_dec_ref(v_env_592_);
lean_dec(v_declHint_587_);
v___x_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_648_, 0, v_msg_586_);
return v___x_648_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg___boxed(lean_object* v_msg_649_, lean_object* v_declHint_650_, lean_object* v___y_651_, lean_object* v___y_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg(v_msg_649_, v_declHint_650_, v___y_651_);
lean_dec(v___y_651_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15(lean_object* v_msg_654_, lean_object* v_declHint_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
lean_object* v___x_659_; lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_669_; 
v___x_659_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg(v_msg_654_, v_declHint_655_, v___y_657_);
v_a_660_ = lean_ctor_get(v___x_659_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_669_ == 0)
{
v___x_662_ = v___x_659_;
v_isShared_663_ = v_isSharedCheck_669_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_659_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_669_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_667_; 
v___x_664_ = l_Lean_unknownIdentifierMessageTag;
v___x_665_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
lean_ctor_set(v___x_665_, 1, v_a_660_);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 0, v___x_665_);
v___x_667_ = v___x_662_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v___x_665_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15___boxed(lean_object* v_msg_670_, lean_object* v_declHint_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15(v_msg_670_, v_declHint_671_, v___y_672_, v___y_673_);
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
return v_res_675_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__21(lean_object* v_opts_676_, lean_object* v_opt_677_){
_start:
{
lean_object* v_name_678_; lean_object* v_defValue_679_; lean_object* v_map_680_; lean_object* v___x_681_; 
v_name_678_ = lean_ctor_get(v_opt_677_, 0);
v_defValue_679_ = lean_ctor_get(v_opt_677_, 1);
v_map_680_ = lean_ctor_get(v_opts_676_, 0);
v___x_681_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_680_, v_name_678_);
if (lean_obj_tag(v___x_681_) == 0)
{
uint8_t v___x_682_; 
v___x_682_ = lean_unbox(v_defValue_679_);
return v___x_682_;
}
else
{
lean_object* v_val_683_; 
v_val_683_ = lean_ctor_get(v___x_681_, 0);
lean_inc(v_val_683_);
lean_dec_ref_known(v___x_681_, 1);
if (lean_obj_tag(v_val_683_) == 1)
{
uint8_t v_v_684_; 
v_v_684_ = lean_ctor_get_uint8(v_val_683_, 0);
lean_dec_ref_known(v_val_683_, 0);
return v_v_684_;
}
else
{
uint8_t v___x_685_; 
lean_dec(v_val_683_);
v___x_685_ = lean_unbox(v_defValue_679_);
return v___x_685_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__21___boxed(lean_object* v_opts_686_, lean_object* v_opt_687_){
_start:
{
uint8_t v_res_688_; lean_object* v_r_689_; 
v_res_688_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__21(v_opts_686_, v_opt_687_);
lean_dec_ref(v_opt_687_);
lean_dec_ref(v_opts_686_);
v_r_689_ = lean_box(v_res_688_);
return v_r_689_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__0(void){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_690_ = lean_box(1);
v___x_691_ = l_Lean_MessageData_ofFormat(v___x_690_);
return v___x_691_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__3(void){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__2));
v___x_696_ = l_Lean_MessageData_ofFormat(v___x_695_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22(lean_object* v_x_697_, lean_object* v_x_698_){
_start:
{
if (lean_obj_tag(v_x_698_) == 0)
{
return v_x_697_;
}
else
{
lean_object* v_head_699_; lean_object* v_tail_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_722_; 
v_head_699_ = lean_ctor_get(v_x_698_, 0);
v_tail_700_ = lean_ctor_get(v_x_698_, 1);
v_isSharedCheck_722_ = !lean_is_exclusive(v_x_698_);
if (v_isSharedCheck_722_ == 0)
{
v___x_702_ = v_x_698_;
v_isShared_703_ = v_isSharedCheck_722_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_tail_700_);
lean_inc(v_head_699_);
lean_dec(v_x_698_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_722_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v_before_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_720_; 
v_before_704_ = lean_ctor_get(v_head_699_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v_head_699_);
if (v_isSharedCheck_720_ == 0)
{
lean_object* v_unused_721_; 
v_unused_721_ = lean_ctor_get(v_head_699_, 1);
lean_dec(v_unused_721_);
v___x_706_ = v_head_699_;
v_isShared_707_ = v_isSharedCheck_720_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_before_704_);
lean_dec(v_head_699_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_720_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_708_; lean_object* v___x_710_; 
v___x_708_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__0);
if (v_isShared_707_ == 0)
{
lean_ctor_set_tag(v___x_706_, 7);
lean_ctor_set(v___x_706_, 1, v___x_708_);
lean_ctor_set(v___x_706_, 0, v_x_697_);
v___x_710_ = v___x_706_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_x_697_);
lean_ctor_set(v_reuseFailAlloc_719_, 1, v___x_708_);
v___x_710_ = v_reuseFailAlloc_719_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
lean_object* v___x_711_; lean_object* v___x_713_; 
v___x_711_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__3);
if (v_isShared_703_ == 0)
{
lean_ctor_set_tag(v___x_702_, 7);
lean_ctor_set(v___x_702_, 1, v___x_711_);
lean_ctor_set(v___x_702_, 0, v___x_710_);
v___x_713_ = v___x_702_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_710_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v___x_711_);
v___x_713_ = v_reuseFailAlloc_718_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_714_ = l_Lean_MessageData_ofSyntax(v_before_704_);
v___x_715_ = l_Lean_indentD(v___x_714_);
v___x_716_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_716_, 0, v___x_713_);
lean_ctor_set(v___x_716_, 1, v___x_715_);
v_x_697_ = v___x_716_;
v_x_698_ = v_tail_700_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___closed__2(void){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___closed__1));
v___x_727_ = l_Lean_MessageData_ofFormat(v___x_726_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg(lean_object* v_msgData_728_, lean_object* v_macroStack_729_, lean_object* v___y_730_){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v_scopes_734_; lean_object* v___x_735_; lean_object* v_opts_736_; lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_732_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_733_ = lean_st_ref_get(v___y_730_);
v_scopes_734_ = lean_ctor_get(v___x_733_, 2);
lean_inc(v_scopes_734_);
lean_dec(v___x_733_);
v___x_735_ = l_List_head_x21___redArg(v___x_732_, v_scopes_734_);
lean_dec(v_scopes_734_);
v_opts_736_ = lean_ctor_get(v___x_735_, 1);
lean_inc_ref(v_opts_736_);
lean_dec(v___x_735_);
v___x_737_ = l_Lean_Elab_pp_macroStack;
v___x_738_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__21(v_opts_736_, v___x_737_);
lean_dec_ref(v_opts_736_);
if (v___x_738_ == 0)
{
lean_object* v___x_739_; 
lean_dec(v_macroStack_729_);
v___x_739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_739_, 0, v_msgData_728_);
return v___x_739_;
}
else
{
if (lean_obj_tag(v_macroStack_729_) == 0)
{
lean_object* v___x_740_; 
v___x_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_740_, 0, v_msgData_728_);
return v___x_740_;
}
else
{
lean_object* v_head_741_; lean_object* v_after_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_757_; 
v_head_741_ = lean_ctor_get(v_macroStack_729_, 0);
lean_inc(v_head_741_);
v_after_742_ = lean_ctor_get(v_head_741_, 1);
v_isSharedCheck_757_ = !lean_is_exclusive(v_head_741_);
if (v_isSharedCheck_757_ == 0)
{
lean_object* v_unused_758_; 
v_unused_758_ = lean_ctor_get(v_head_741_, 0);
lean_dec(v_unused_758_);
v___x_744_ = v_head_741_;
v_isShared_745_ = v_isSharedCheck_757_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_after_742_);
lean_dec(v_head_741_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_757_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; lean_object* v___x_748_; 
v___x_746_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22___closed__0);
if (v_isShared_745_ == 0)
{
lean_ctor_set_tag(v___x_744_, 7);
lean_ctor_set(v___x_744_, 1, v___x_746_);
lean_ctor_set(v___x_744_, 0, v_msgData_728_);
v___x_748_ = v___x_744_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_msgData_728_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v___x_746_);
v___x_748_ = v_reuseFailAlloc_756_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v_msgData_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_749_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___closed__2);
v___x_750_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_750_, 0, v___x_748_);
lean_ctor_set(v___x_750_, 1, v___x_749_);
v___x_751_ = l_Lean_MessageData_ofSyntax(v_after_742_);
v___x_752_ = l_Lean_indentD(v___x_751_);
v_msgData_753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_753_, 0, v___x_750_);
lean_ctor_set(v_msgData_753_, 1, v___x_752_);
v___x_754_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20_spec__22(v_msgData_753_, v_macroStack_729_);
v___x_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_755_, 0, v___x_754_);
return v___x_755_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg___boxed(lean_object* v_msgData_759_, lean_object* v_macroStack_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
lean_object* v_res_763_; 
v_res_763_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg(v_msgData_759_, v_macroStack_760_, v___y_761_);
lean_dec(v___y_761_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__19___redArg(lean_object* v_msgData_764_, lean_object* v___y_765_){
_start:
{
lean_object* v___x_767_; lean_object* v_env_768_; uint8_t v___x_769_; lean_object* v_env_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v_scopes_773_; lean_object* v___x_774_; lean_object* v_opts_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_767_ = lean_st_ref_get(v___y_765_);
v_env_768_ = lean_ctor_get(v___x_767_, 0);
lean_inc_ref(v_env_768_);
lean_dec(v___x_767_);
v___x_769_ = 0;
v_env_770_ = l_Lean_Environment_setRecordingDeps(v_env_768_, v___x_769_);
v___x_771_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_772_ = lean_st_ref_get(v___y_765_);
v_scopes_773_ = lean_ctor_get(v___x_772_, 2);
lean_inc(v_scopes_773_);
lean_dec(v___x_772_);
v___x_774_ = l_List_head_x21___redArg(v___x_771_, v_scopes_773_);
lean_dec(v_scopes_773_);
v_opts_775_ = lean_ctor_get(v___x_774_, 1);
lean_inc_ref(v_opts_775_);
lean_dec(v___x_774_);
v___x_776_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__2);
v___x_777_ = lean_unsigned_to_nat(32u);
v___x_778_ = lean_mk_empty_array_with_capacity(v___x_777_);
lean_dec_ref(v___x_778_);
v___x_779_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0_spec__0___closed__5);
v___x_780_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_780_, 0, v_env_770_);
lean_ctor_set(v___x_780_, 1, v___x_776_);
lean_ctor_set(v___x_780_, 2, v___x_779_);
lean_ctor_set(v___x_780_, 3, v_opts_775_);
v___x_781_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_781_, 0, v___x_780_);
lean_ctor_set(v___x_781_, 1, v_msgData_764_);
v___x_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_782_, 0, v___x_781_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__19___redArg___boxed(lean_object* v_msgData_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__19___redArg(v_msgData_783_, v___y_784_);
lean_dec(v___y_784_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18___redArg(lean_object* v_msg_787_, lean_object* v___y_788_, lean_object* v___y_789_){
_start:
{
lean_object* v___x_791_; 
v___x_791_ = l_Lean_Elab_Command_getRef___redArg(v___y_788_);
if (lean_obj_tag(v___x_791_) == 0)
{
lean_object* v_a_792_; lean_object* v_macroStack_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v_a_796_; lean_object* v___x_797_; lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_806_; 
v_a_792_ = lean_ctor_get(v___x_791_, 0);
lean_inc(v_a_792_);
lean_dec_ref_known(v___x_791_, 1);
v_macroStack_793_ = lean_ctor_get(v___y_788_, 4);
v___x_794_ = l_Lean_Elab_getBetterRef(v_a_792_, v_macroStack_793_);
lean_dec(v_a_792_);
v___x_795_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__19___redArg(v_msg_787_, v___y_789_);
v_a_796_ = lean_ctor_get(v___x_795_, 0);
lean_inc(v_a_796_);
lean_dec_ref(v___x_795_);
lean_inc(v_macroStack_793_);
v___x_797_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg(v_a_796_, v_macroStack_793_, v___y_789_);
v_a_798_ = lean_ctor_get(v___x_797_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_806_ == 0)
{
v___x_800_ = v___x_797_;
v_isShared_801_ = v_isSharedCheck_806_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_797_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_806_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_802_; lean_object* v___x_804_; 
v___x_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_802_, 0, v___x_794_);
lean_ctor_set(v___x_802_, 1, v_a_798_);
if (v_isShared_801_ == 0)
{
lean_ctor_set_tag(v___x_800_, 1);
lean_ctor_set(v___x_800_, 0, v___x_802_);
v___x_804_ = v___x_800_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec_ref(v_msg_787_);
v_a_807_ = lean_ctor_get(v___x_791_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_791_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_791_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18___redArg___boxed(lean_object* v_msg_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18___redArg(v_msg_815_, v___y_816_, v___y_817_);
lean_dec(v___y_817_);
lean_dec_ref(v___y_816_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16___redArg(lean_object* v_ref_820_, lean_object* v_msg_821_, lean_object* v___y_822_, lean_object* v___y_823_){
_start:
{
lean_object* v___x_825_; 
v___x_825_ = l_Lean_Elab_Command_getRef___redArg(v___y_822_);
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v_a_826_; lean_object* v_fileName_827_; lean_object* v_fileMap_828_; lean_object* v_currRecDepth_829_; lean_object* v_cmdPos_830_; lean_object* v_macroStack_831_; lean_object* v_quotContext_x3f_832_; lean_object* v_currMacroScope_833_; lean_object* v_snap_x3f_834_; lean_object* v_cancelTk_x3f_835_; uint8_t v_suppressElabErrors_836_; uint8_t v_checkDeprecated_837_; lean_object* v_ref_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v_a_826_ = lean_ctor_get(v___x_825_, 0);
lean_inc(v_a_826_);
lean_dec_ref_known(v___x_825_, 1);
v_fileName_827_ = lean_ctor_get(v___y_822_, 0);
v_fileMap_828_ = lean_ctor_get(v___y_822_, 1);
v_currRecDepth_829_ = lean_ctor_get(v___y_822_, 2);
v_cmdPos_830_ = lean_ctor_get(v___y_822_, 3);
v_macroStack_831_ = lean_ctor_get(v___y_822_, 4);
v_quotContext_x3f_832_ = lean_ctor_get(v___y_822_, 5);
v_currMacroScope_833_ = lean_ctor_get(v___y_822_, 6);
v_snap_x3f_834_ = lean_ctor_get(v___y_822_, 8);
v_cancelTk_x3f_835_ = lean_ctor_get(v___y_822_, 9);
v_suppressElabErrors_836_ = lean_ctor_get_uint8(v___y_822_, sizeof(void*)*10);
v_checkDeprecated_837_ = lean_ctor_get_uint8(v___y_822_, sizeof(void*)*10 + 1);
v_ref_838_ = l_Lean_replaceRef(v_ref_820_, v_a_826_);
lean_dec(v_a_826_);
lean_inc(v_cancelTk_x3f_835_);
lean_inc(v_snap_x3f_834_);
lean_inc(v_currMacroScope_833_);
lean_inc(v_quotContext_x3f_832_);
lean_inc(v_macroStack_831_);
lean_inc(v_cmdPos_830_);
lean_inc(v_currRecDepth_829_);
lean_inc_ref(v_fileMap_828_);
lean_inc_ref(v_fileName_827_);
v___x_839_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_839_, 0, v_fileName_827_);
lean_ctor_set(v___x_839_, 1, v_fileMap_828_);
lean_ctor_set(v___x_839_, 2, v_currRecDepth_829_);
lean_ctor_set(v___x_839_, 3, v_cmdPos_830_);
lean_ctor_set(v___x_839_, 4, v_macroStack_831_);
lean_ctor_set(v___x_839_, 5, v_quotContext_x3f_832_);
lean_ctor_set(v___x_839_, 6, v_currMacroScope_833_);
lean_ctor_set(v___x_839_, 7, v_ref_838_);
lean_ctor_set(v___x_839_, 8, v_snap_x3f_834_);
lean_ctor_set(v___x_839_, 9, v_cancelTk_x3f_835_);
lean_ctor_set_uint8(v___x_839_, sizeof(void*)*10, v_suppressElabErrors_836_);
lean_ctor_set_uint8(v___x_839_, sizeof(void*)*10 + 1, v_checkDeprecated_837_);
v___x_840_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18___redArg(v_msg_821_, v___x_839_, v___y_823_);
lean_dec_ref_known(v___x_839_, 10);
return v___x_840_;
}
else
{
lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_848_; 
lean_dec_ref(v_msg_821_);
v_a_841_ = lean_ctor_get(v___x_825_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_848_ == 0)
{
v___x_843_ = v___x_825_;
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_dec(v___x_825_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_846_; 
if (v_isShared_844_ == 0)
{
v___x_846_ = v___x_843_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_841_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16___redArg___boxed(lean_object* v_ref_849_, lean_object* v_msg_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16___redArg(v_ref_849_, v_msg_850_, v___y_851_, v___y_852_);
lean_dec(v___y_852_);
lean_dec_ref(v___y_851_);
lean_dec(v_ref_849_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14___redArg(lean_object* v_ref_855_, lean_object* v_msg_856_, lean_object* v_declHint_857_, lean_object* v___y_858_, lean_object* v___y_859_){
_start:
{
lean_object* v___x_861_; lean_object* v_a_862_; lean_object* v___x_863_; 
v___x_861_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15(v_msg_856_, v_declHint_857_, v___y_858_, v___y_859_);
v_a_862_ = lean_ctor_get(v___x_861_, 0);
lean_inc(v_a_862_);
lean_dec_ref(v___x_861_);
v___x_863_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16___redArg(v_ref_855_, v_a_862_, v___y_858_, v___y_859_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14___redArg___boxed(lean_object* v_ref_864_, lean_object* v_msg_865_, lean_object* v_declHint_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_){
_start:
{
lean_object* v_res_870_; 
v_res_870_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14___redArg(v_ref_864_, v_msg_865_, v_declHint_866_, v___y_867_, v___y_868_);
lean_dec(v___y_868_);
lean_dec_ref(v___y_867_);
lean_dec(v_ref_864_);
return v_res_870_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__1(void){
_start:
{
lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_872_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__0));
v___x_873_ = l_Lean_stringToMessageData(v___x_872_);
return v___x_873_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__3(void){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__2));
v___x_876_ = l_Lean_stringToMessageData(v___x_875_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg(lean_object* v_ref_877_, lean_object* v_constName_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
lean_object* v___x_882_; uint8_t v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_882_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__1);
v___x_883_ = 0;
lean_inc(v_constName_878_);
v___x_884_ = l_Lean_MessageData_ofConstName(v_constName_878_, v___x_883_);
v___x_885_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_882_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_886_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__3);
v___x_887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_887_, 0, v___x_885_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
v___x_888_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14___redArg(v_ref_877_, v___x_887_, v_constName_878_, v___y_879_, v___y_880_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___boxed(lean_object* v_ref_889_, lean_object* v_constName_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_){
_start:
{
lean_object* v_res_894_; 
v_res_894_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg(v_ref_889_, v_constName_890_, v___y_891_, v___y_892_);
lean_dec(v___y_892_);
lean_dec_ref(v___y_891_);
lean_dec(v_ref_889_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9___redArg(lean_object* v_constName_895_, lean_object* v___y_896_, lean_object* v___y_897_){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = l_Lean_Elab_Command_getRef___redArg(v___y_896_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_901_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_900_);
lean_dec_ref_known(v___x_899_, 1);
v___x_901_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg(v_a_900_, v_constName_895_, v___y_896_, v___y_897_);
lean_dec(v_a_900_);
return v___x_901_;
}
else
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
lean_dec(v_constName_895_);
v_a_902_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_899_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_899_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9___redArg___boxed(lean_object* v_constName_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9___redArg(v_constName_910_, v___y_911_, v___y_912_);
lean_dec(v___y_912_);
lean_dec_ref(v___y_911_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6(lean_object* v_constName_915_, lean_object* v___y_916_, lean_object* v___y_917_){
_start:
{
lean_object* v___x_919_; lean_object* v_env_920_; uint8_t v___x_921_; lean_object* v___x_922_; 
v___x_919_ = lean_st_ref_get(v___y_917_);
v_env_920_ = lean_ctor_get(v___x_919_, 0);
lean_inc_ref(v_env_920_);
lean_dec(v___x_919_);
v___x_921_ = 0;
lean_inc(v_constName_915_);
v___x_922_ = l_Lean_Environment_findConstVal_x3f(v_env_920_, v_constName_915_, v___x_921_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v___x_923_; 
v___x_923_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9___redArg(v_constName_915_, v___y_916_, v___y_917_);
return v___x_923_;
}
else
{
lean_object* v_val_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec(v_constName_915_);
v_val_924_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_922_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_val_924_);
lean_dec(v___x_922_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
lean_ctor_set_tag(v___x_926_, 0);
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_val_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6___boxed(lean_object* v_constName_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6(v_constName_932_, v___y_933_, v___y_934_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5(lean_object* v_constName_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
lean_object* v___x_941_; 
lean_inc(v_constName_937_);
v___x_941_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6(v_constName_937_, v___y_938_, v___y_939_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_953_; 
v_a_942_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_953_ == 0)
{
v___x_944_ = v___x_941_;
v_isShared_945_ = v_isSharedCheck_953_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_941_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_953_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v_levelParams_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_951_; 
v_levelParams_946_ = lean_ctor_get(v_a_942_, 1);
lean_inc(v_levelParams_946_);
lean_dec(v_a_942_);
v___x_947_ = lean_box(0);
v___x_948_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__7(v_levelParams_946_, v___x_947_);
v___x_949_ = l_Lean_mkConst(v_constName_937_, v___x_948_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 0, v___x_949_);
v___x_951_ = v___x_944_;
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
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
lean_dec(v_constName_937_);
v_a_954_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_941_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_941_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5___boxed(lean_object* v_constName_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5(v_constName_962_, v___y_963_, v___y_964_);
lean_dec(v___y_964_);
lean_dec_ref(v___y_963_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6_spec__9___redArg(lean_object* v_t_967_, lean_object* v___y_968_){
_start:
{
lean_object* v___x_970_; lean_object* v_infoState_971_; uint8_t v_enabled_972_; 
v___x_970_ = lean_st_ref_get(v___y_968_);
v_infoState_971_ = lean_ctor_get(v___x_970_, 8);
lean_inc_ref(v_infoState_971_);
lean_dec(v___x_970_);
v_enabled_972_ = lean_ctor_get_uint8(v_infoState_971_, sizeof(void*)*3);
lean_dec_ref(v_infoState_971_);
if (v_enabled_972_ == 0)
{
lean_object* v___x_973_; lean_object* v___x_974_; 
lean_dec_ref(v_t_967_);
v___x_973_ = lean_box(0);
v___x_974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_974_, 0, v___x_973_);
return v___x_974_;
}
else
{
lean_object* v___x_975_; lean_object* v_infoState_976_; lean_object* v_env_977_; lean_object* v_messages_978_; lean_object* v_scopes_979_; lean_object* v_usedQuotCtxts_980_; lean_object* v_nextMacroScope_981_; lean_object* v_maxRecDepth_982_; lean_object* v_ngen_983_; lean_object* v_auxDeclNGen_984_; lean_object* v_traceState_985_; lean_object* v_snapshotTasks_986_; lean_object* v_prevLinterStates_987_; lean_object* v_codeQualityEntryTasks_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_1010_; 
v___x_975_ = lean_st_ref_take(v___y_968_);
v_infoState_976_ = lean_ctor_get(v___x_975_, 8);
v_env_977_ = lean_ctor_get(v___x_975_, 0);
v_messages_978_ = lean_ctor_get(v___x_975_, 1);
v_scopes_979_ = lean_ctor_get(v___x_975_, 2);
v_usedQuotCtxts_980_ = lean_ctor_get(v___x_975_, 3);
v_nextMacroScope_981_ = lean_ctor_get(v___x_975_, 4);
v_maxRecDepth_982_ = lean_ctor_get(v___x_975_, 5);
v_ngen_983_ = lean_ctor_get(v___x_975_, 6);
v_auxDeclNGen_984_ = lean_ctor_get(v___x_975_, 7);
v_traceState_985_ = lean_ctor_get(v___x_975_, 9);
v_snapshotTasks_986_ = lean_ctor_get(v___x_975_, 10);
v_prevLinterStates_987_ = lean_ctor_get(v___x_975_, 11);
v_codeQualityEntryTasks_988_ = lean_ctor_get(v___x_975_, 12);
v_isSharedCheck_1010_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_990_ = v___x_975_;
v_isShared_991_ = v_isSharedCheck_1010_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_codeQualityEntryTasks_988_);
lean_inc(v_prevLinterStates_987_);
lean_inc(v_snapshotTasks_986_);
lean_inc(v_traceState_985_);
lean_inc(v_infoState_976_);
lean_inc(v_auxDeclNGen_984_);
lean_inc(v_ngen_983_);
lean_inc(v_maxRecDepth_982_);
lean_inc(v_nextMacroScope_981_);
lean_inc(v_usedQuotCtxts_980_);
lean_inc(v_scopes_979_);
lean_inc(v_messages_978_);
lean_inc(v_env_977_);
lean_dec(v___x_975_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_1010_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
uint8_t v_enabled_992_; lean_object* v_assignment_993_; lean_object* v_lazyAssignment_994_; lean_object* v_trees_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1009_; 
v_enabled_992_ = lean_ctor_get_uint8(v_infoState_976_, sizeof(void*)*3);
v_assignment_993_ = lean_ctor_get(v_infoState_976_, 0);
v_lazyAssignment_994_ = lean_ctor_get(v_infoState_976_, 1);
v_trees_995_ = lean_ctor_get(v_infoState_976_, 2);
v_isSharedCheck_1009_ = !lean_is_exclusive(v_infoState_976_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_997_ = v_infoState_976_;
v_isShared_998_ = v_isSharedCheck_1009_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_trees_995_);
lean_inc(v_lazyAssignment_994_);
lean_inc(v_assignment_993_);
lean_dec(v_infoState_976_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1009_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1002_; 
v___x_999_ = lean_box(0);
v___x_1000_ = l_Lean_PersistentArray_push___redArg(v_trees_995_, v_t_967_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 2, v___x_1000_);
v___x_1002_ = v___x_997_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_assignment_993_);
lean_ctor_set(v_reuseFailAlloc_1008_, 1, v_lazyAssignment_994_);
lean_ctor_set(v_reuseFailAlloc_1008_, 2, v___x_1000_);
lean_ctor_set_uint8(v_reuseFailAlloc_1008_, sizeof(void*)*3, v_enabled_992_);
v___x_1002_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
lean_object* v___x_1004_; 
if (v_isShared_991_ == 0)
{
lean_ctor_set(v___x_990_, 8, v___x_1002_);
v___x_1004_ = v___x_990_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_env_977_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v_messages_978_);
lean_ctor_set(v_reuseFailAlloc_1007_, 2, v_scopes_979_);
lean_ctor_set(v_reuseFailAlloc_1007_, 3, v_usedQuotCtxts_980_);
lean_ctor_set(v_reuseFailAlloc_1007_, 4, v_nextMacroScope_981_);
lean_ctor_set(v_reuseFailAlloc_1007_, 5, v_maxRecDepth_982_);
lean_ctor_set(v_reuseFailAlloc_1007_, 6, v_ngen_983_);
lean_ctor_set(v_reuseFailAlloc_1007_, 7, v_auxDeclNGen_984_);
lean_ctor_set(v_reuseFailAlloc_1007_, 8, v___x_1002_);
lean_ctor_set(v_reuseFailAlloc_1007_, 9, v_traceState_985_);
lean_ctor_set(v_reuseFailAlloc_1007_, 10, v_snapshotTasks_986_);
lean_ctor_set(v_reuseFailAlloc_1007_, 11, v_prevLinterStates_987_);
lean_ctor_set(v_reuseFailAlloc_1007_, 12, v_codeQualityEntryTasks_988_);
v___x_1004_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = lean_st_ref_put(v___y_968_, v___x_1004_);
v___x_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1006_, 0, v___x_999_);
return v___x_1006_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6_spec__9___redArg___boxed(lean_object* v_t_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6_spec__9___redArg(v_t_1011_, v___y_1012_);
lean_dec(v___y_1012_);
return v_res_1014_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6___closed__0(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1015_ = lean_unsigned_to_nat(32u);
v___x_1016_ = lean_mk_empty_array_with_capacity(v___x_1015_);
v___x_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
return v___x_1017_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6___closed__1(void){
_start:
{
size_t v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1018_ = ((size_t)5ULL);
v___x_1019_ = lean_unsigned_to_nat(0u);
v___x_1020_ = lean_unsigned_to_nat(32u);
v___x_1021_ = lean_mk_empty_array_with_capacity(v___x_1020_);
v___x_1022_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6___closed__0);
v___x_1023_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1023_, 0, v___x_1022_);
lean_ctor_set(v___x_1023_, 1, v___x_1021_);
lean_ctor_set(v___x_1023_, 2, v___x_1019_);
lean_ctor_set(v___x_1023_, 3, v___x_1019_);
lean_ctor_set_usize(v___x_1023_, 4, v___x_1018_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6(lean_object* v_t_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_){
_start:
{
lean_object* v___x_1028_; lean_object* v_infoState_1029_; uint8_t v_enabled_1030_; 
v___x_1028_ = lean_st_ref_get(v___y_1026_);
v_infoState_1029_ = lean_ctor_get(v___x_1028_, 8);
lean_inc_ref(v_infoState_1029_);
lean_dec(v___x_1028_);
v_enabled_1030_ = lean_ctor_get_uint8(v_infoState_1029_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1029_);
if (v_enabled_1030_ == 0)
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
lean_dec_ref(v_t_1024_);
v___x_1031_ = lean_box(0);
v___x_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
return v___x_1032_;
}
else
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1033_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6___closed__1);
v___x_1034_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1034_, 0, v_t_1024_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
v___x_1035_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6_spec__9___redArg(v___x_1034_, v___y_1026_);
return v___x_1035_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6___boxed(lean_object* v_t_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6(v_t_1036_, v___y_1037_, v___y_1038_);
lean_dec(v___y_1038_);
lean_dec_ref(v___y_1037_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3(lean_object* v_stx_1041_, lean_object* v_n_1042_, lean_object* v_expectedType_x3f_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5(v_n_1042_, v___y_1044_, v___y_1045_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v_a_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; uint8_t v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v_a_1048_ = lean_ctor_get(v___x_1047_, 0);
lean_inc(v_a_1048_);
lean_dec_ref_known(v___x_1047_, 1);
v___x_1049_ = lean_box(0);
v___x_1050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1049_);
lean_ctor_set(v___x_1050_, 1, v_stx_1041_);
v___x_1051_ = l_Lean_LocalContext_empty;
v___x_1052_ = 0;
v___x_1053_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1053_, 0, v___x_1050_);
lean_ctor_set(v___x_1053_, 1, v___x_1051_);
lean_ctor_set(v___x_1053_, 2, v_expectedType_x3f_1043_);
lean_ctor_set(v___x_1053_, 3, v_a_1048_);
lean_ctor_set_uint8(v___x_1053_, sizeof(void*)*4, v___x_1052_);
lean_ctor_set_uint8(v___x_1053_, sizeof(void*)*4 + 1, v___x_1052_);
v___x_1054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1053_);
v___x_1055_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6(v___x_1054_, v___y_1044_, v___y_1045_);
return v___x_1055_;
}
else
{
lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
lean_dec(v_expectedType_x3f_1043_);
lean_dec(v_stx_1041_);
v_a_1056_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1058_ = v___x_1047_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v___x_1047_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3___boxed(lean_object* v_stx_1064_, lean_object* v_n_1065_, lean_object* v_expectedType_x3f_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3(v_stx_1064_, v_n_1065_, v_expectedType_x3f_1066_, v___y_1067_, v___y_1068_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
return v_res_1070_;
}
}
static lean_object* _init_l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1072_ = ((lean_object*)(l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__0));
v___x_1073_ = l_Lean_stringToMessageData(v___x_1072_);
return v___x_1073_;
}
}
static lean_object* _init_l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1075_ = ((lean_object*)(l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__2));
v___x_1076_ = l_Lean_stringToMessageData(v___x_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1(lean_object* v_declName_1077_, lean_object* v_docString_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v___y_1083_; lean_object* v___x_1110_; lean_object* v_env_1111_; lean_object* v___x_1112_; 
v___x_1110_ = lean_st_ref_get(v___y_1080_);
v_env_1111_ = lean_ctor_get(v___x_1110_, 0);
lean_inc_ref(v_env_1111_);
lean_dec(v___x_1110_);
v___x_1112_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1111_, v_declName_1077_);
lean_dec_ref(v_env_1111_);
if (lean_obj_tag(v___x_1112_) == 0)
{
v___y_1083_ = v___y_1080_;
goto v___jp_1082_;
}
else
{
lean_object* v___x_1113_; uint8_t v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
lean_dec_ref_known(v___x_1112_, 1);
lean_dec_ref(v_docString_1078_);
v___x_1113_ = lean_obj_once(&l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__1, &l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__1_once, _init_l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__1);
v___x_1114_ = 0;
v___x_1115_ = l_Lean_MessageData_ofConstName(v_declName_1077_, v___x_1114_);
v___x_1116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1113_);
lean_ctor_set(v___x_1116_, 1, v___x_1115_);
v___x_1117_ = lean_obj_once(&l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__3, &l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__3_once, _init_l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___closed__3);
v___x_1118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1116_);
lean_ctor_set(v___x_1118_, 1, v___x_1117_);
v___x_1119_ = l_Lean_throwError___at___00Lean_PostprocessTraces_findStoredTrace_spec__0___redArg(v___x_1118_, v___y_1079_, v___y_1080_);
return v___x_1119_;
}
v___jp_1082_:
{
lean_object* v___x_1084_; lean_object* v_env_1085_; lean_object* v_nextMacroScope_1086_; lean_object* v_ngen_1087_; lean_object* v_auxDeclNGen_1088_; lean_object* v_traceState_1089_; lean_object* v_recordedDeps_1090_; lean_object* v_messages_1091_; lean_object* v_infoState_1092_; lean_object* v_snapshotTasks_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1108_; 
v___x_1084_ = lean_st_ref_take(v___y_1083_);
v_env_1085_ = lean_ctor_get(v___x_1084_, 0);
v_nextMacroScope_1086_ = lean_ctor_get(v___x_1084_, 1);
v_ngen_1087_ = lean_ctor_get(v___x_1084_, 2);
v_auxDeclNGen_1088_ = lean_ctor_get(v___x_1084_, 3);
v_traceState_1089_ = lean_ctor_get(v___x_1084_, 4);
v_recordedDeps_1090_ = lean_ctor_get(v___x_1084_, 6);
v_messages_1091_ = lean_ctor_get(v___x_1084_, 7);
v_infoState_1092_ = lean_ctor_get(v___x_1084_, 8);
v_snapshotTasks_1093_ = lean_ctor_get(v___x_1084_, 9);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1084_);
if (v_isSharedCheck_1108_ == 0)
{
lean_object* v_unused_1109_; 
v_unused_1109_ = lean_ctor_get(v___x_1084_, 5);
lean_dec(v_unused_1109_);
v___x_1095_ = v___x_1084_;
v_isShared_1096_ = v_isSharedCheck_1108_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_snapshotTasks_1093_);
lean_inc(v_infoState_1092_);
lean_inc(v_messages_1091_);
lean_inc(v_recordedDeps_1090_);
lean_inc(v_traceState_1089_);
lean_inc(v_auxDeclNGen_1088_);
lean_inc(v_ngen_1087_);
lean_inc(v_nextMacroScope_1086_);
lean_inc(v_env_1085_);
lean_dec(v___x_1084_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1108_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1104_; 
v___x_1097_ = lean_box(0);
v___x_1098_ = l_Lean_docStringExt;
v___x_1099_ = l_String_removeLeadingSpaces(v_docString_1078_);
v___x_1100_ = 1;
v___x_1101_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1098_, v_env_1085_, v_declName_1077_, v___x_1099_, v___x_1100_);
v___x_1102_ = lean_obj_once(&l_Lean_PostprocessTraces_storeTraces___redArg___closed__1, &l_Lean_PostprocessTraces_storeTraces___redArg___closed__1_once, _init_l_Lean_PostprocessTraces_storeTraces___redArg___closed__1);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 5, v___x_1102_);
lean_ctor_set(v___x_1095_, 0, v___x_1101_);
v___x_1104_ = v___x_1095_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1101_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v_nextMacroScope_1086_);
lean_ctor_set(v_reuseFailAlloc_1107_, 2, v_ngen_1087_);
lean_ctor_set(v_reuseFailAlloc_1107_, 3, v_auxDeclNGen_1088_);
lean_ctor_set(v_reuseFailAlloc_1107_, 4, v_traceState_1089_);
lean_ctor_set(v_reuseFailAlloc_1107_, 5, v___x_1102_);
lean_ctor_set(v_reuseFailAlloc_1107_, 6, v_recordedDeps_1090_);
lean_ctor_set(v_reuseFailAlloc_1107_, 7, v_messages_1091_);
lean_ctor_set(v_reuseFailAlloc_1107_, 8, v_infoState_1092_);
lean_ctor_set(v_reuseFailAlloc_1107_, 9, v_snapshotTasks_1093_);
v___x_1104_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1105_ = lean_st_ref_put(v___y_1083_, v___x_1104_);
v___x_1106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1097_);
return v___x_1106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___boxed(lean_object* v_declName_1120_, lean_object* v_docString_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1(v_declName_1120_, v_docString_1121_, v___y_1122_, v___y_1123_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__2___redArg(lean_object* v_stx_1126_, lean_object* v___y_1127_){
_start:
{
uint8_t v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = 0;
v___x_1130_ = l_Lean_Syntax_getRange_x3f(v_stx_1126_, v___x_1129_);
if (lean_obj_tag(v___x_1130_) == 1)
{
lean_object* v_val_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1143_; 
v_val_1131_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1143_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1133_ = v___x_1130_;
v_isShared_1134_ = v_isSharedCheck_1143_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_val_1131_);
lean_dec(v___x_1130_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1143_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v_fileMap_1135_; lean_object* v_start_1136_; lean_object* v_stop_1137_; lean_object* v___x_1138_; lean_object* v___x_1140_; 
v_fileMap_1135_ = lean_ctor_get(v___y_1127_, 1);
v_start_1136_ = lean_ctor_get(v_val_1131_, 0);
lean_inc(v_start_1136_);
v_stop_1137_ = lean_ctor_get(v_val_1131_, 1);
lean_inc(v_stop_1137_);
lean_dec(v_val_1131_);
lean_inc_ref(v_fileMap_1135_);
v___x_1138_ = l_Lean_DeclarationRange_ofStringPositions(v_fileMap_1135_, v_start_1136_, v_stop_1137_);
lean_dec(v_stop_1137_);
lean_dec(v_start_1136_);
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 0, v___x_1138_);
v___x_1140_ = v___x_1133_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v___x_1138_);
v___x_1140_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
lean_object* v___x_1141_; 
v___x_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
return v___x_1141_;
}
}
}
else
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
lean_dec(v___x_1130_);
v___x_1144_ = lean_box(0);
v___x_1145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1144_);
return v___x_1145_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__2___redArg___boxed(lean_object* v_stx_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__2___redArg(v_stx_1146_, v___y_1147_);
lean_dec_ref(v___y_1147_);
lean_dec(v_stx_1146_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__3___redArg(lean_object* v_declName_1150_, lean_object* v_declRanges_1151_, lean_object* v___y_1152_){
_start:
{
uint8_t v___x_1157_; 
v___x_1157_ = l_Lean_Name_isAnonymous(v_declName_1150_);
if (v___x_1157_ == 0)
{
lean_object* v___x_1158_; lean_object* v_env_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; uint8_t v___x_1162_; 
v___x_1158_ = lean_st_ref_get(v___y_1152_);
v_env_1159_ = lean_ctor_get(v___x_1158_, 0);
lean_inc_ref(v_env_1159_);
lean_dec(v___x_1158_);
v___x_1160_ = l_Lean_declRangeExt;
v___x_1161_ = lean_box(1);
lean_inc(v_declName_1150_);
v___x_1162_ = l_Lean_MapDeclarationExtension_contains___redArg(v___x_1160_, v_env_1159_, v_declName_1150_, v___x_1161_);
if (v___x_1162_ == 0)
{
lean_object* v___x_1163_; lean_object* v_env_1164_; lean_object* v_messages_1165_; lean_object* v_scopes_1166_; lean_object* v_usedQuotCtxts_1167_; lean_object* v_nextMacroScope_1168_; lean_object* v_maxRecDepth_1169_; lean_object* v_ngen_1170_; lean_object* v_auxDeclNGen_1171_; lean_object* v_infoState_1172_; lean_object* v_traceState_1173_; lean_object* v_snapshotTasks_1174_; lean_object* v_prevLinterStates_1175_; lean_object* v_codeQualityEntryTasks_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1187_; 
v___x_1163_ = lean_st_ref_take(v___y_1152_);
v_env_1164_ = lean_ctor_get(v___x_1163_, 0);
v_messages_1165_ = lean_ctor_get(v___x_1163_, 1);
v_scopes_1166_ = lean_ctor_get(v___x_1163_, 2);
v_usedQuotCtxts_1167_ = lean_ctor_get(v___x_1163_, 3);
v_nextMacroScope_1168_ = lean_ctor_get(v___x_1163_, 4);
v_maxRecDepth_1169_ = lean_ctor_get(v___x_1163_, 5);
v_ngen_1170_ = lean_ctor_get(v___x_1163_, 6);
v_auxDeclNGen_1171_ = lean_ctor_get(v___x_1163_, 7);
v_infoState_1172_ = lean_ctor_get(v___x_1163_, 8);
v_traceState_1173_ = lean_ctor_get(v___x_1163_, 9);
v_snapshotTasks_1174_ = lean_ctor_get(v___x_1163_, 10);
v_prevLinterStates_1175_ = lean_ctor_get(v___x_1163_, 11);
v_codeQualityEntryTasks_1176_ = lean_ctor_get(v___x_1163_, 12);
v_isSharedCheck_1187_ = !lean_is_exclusive(v___x_1163_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1178_ = v___x_1163_;
v_isShared_1179_ = v_isSharedCheck_1187_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1176_);
lean_inc(v_prevLinterStates_1175_);
lean_inc(v_snapshotTasks_1174_);
lean_inc(v_traceState_1173_);
lean_inc(v_infoState_1172_);
lean_inc(v_auxDeclNGen_1171_);
lean_inc(v_ngen_1170_);
lean_inc(v_maxRecDepth_1169_);
lean_inc(v_nextMacroScope_1168_);
lean_inc(v_usedQuotCtxts_1167_);
lean_inc(v_scopes_1166_);
lean_inc(v_messages_1165_);
lean_inc(v_env_1164_);
lean_dec(v___x_1163_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1187_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1183_; 
v___x_1180_ = lean_box(0);
v___x_1181_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1160_, v_env_1164_, v_declName_1150_, v_declRanges_1151_, v___x_1162_);
if (v_isShared_1179_ == 0)
{
lean_ctor_set(v___x_1178_, 0, v___x_1181_);
v___x_1183_ = v___x_1178_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v___x_1181_);
lean_ctor_set(v_reuseFailAlloc_1186_, 1, v_messages_1165_);
lean_ctor_set(v_reuseFailAlloc_1186_, 2, v_scopes_1166_);
lean_ctor_set(v_reuseFailAlloc_1186_, 3, v_usedQuotCtxts_1167_);
lean_ctor_set(v_reuseFailAlloc_1186_, 4, v_nextMacroScope_1168_);
lean_ctor_set(v_reuseFailAlloc_1186_, 5, v_maxRecDepth_1169_);
lean_ctor_set(v_reuseFailAlloc_1186_, 6, v_ngen_1170_);
lean_ctor_set(v_reuseFailAlloc_1186_, 7, v_auxDeclNGen_1171_);
lean_ctor_set(v_reuseFailAlloc_1186_, 8, v_infoState_1172_);
lean_ctor_set(v_reuseFailAlloc_1186_, 9, v_traceState_1173_);
lean_ctor_set(v_reuseFailAlloc_1186_, 10, v_snapshotTasks_1174_);
lean_ctor_set(v_reuseFailAlloc_1186_, 11, v_prevLinterStates_1175_);
lean_ctor_set(v_reuseFailAlloc_1186_, 12, v_codeQualityEntryTasks_1176_);
v___x_1183_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1184_ = lean_st_ref_put(v___y_1152_, v___x_1183_);
v___x_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1180_);
return v___x_1185_;
}
}
}
else
{
lean_dec_ref(v_declRanges_1151_);
lean_dec(v_declName_1150_);
goto v___jp_1154_;
}
}
else
{
lean_dec_ref(v_declRanges_1151_);
lean_dec(v_declName_1150_);
goto v___jp_1154_;
}
v___jp_1154_:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1155_ = lean_box(0);
v___x_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
return v___x_1156_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__3___redArg___boxed(lean_object* v_declName_1188_, lean_object* v_declRanges_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__3___redArg(v_declName_1188_, v_declRanges_1189_, v___y_1190_);
lean_dec(v___y_1190_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2(lean_object* v_declName_1193_, lean_object* v_rangeStx_1194_, lean_object* v_selectionRangeStx_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
lean_object* v___x_1199_; lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1216_; 
v___x_1199_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__2___redArg(v_rangeStx_1194_, v___y_1196_);
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1202_ = v___x_1199_;
v_isShared_1203_ = v_isSharedCheck_1216_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1199_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1216_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
if (lean_obj_tag(v_a_1200_) == 1)
{
lean_object* v_val_1204_; lean_object* v_a_1206_; lean_object* v___x_1209_; lean_object* v_a_1210_; 
lean_del_object(v___x_1202_);
v_val_1204_ = lean_ctor_get(v_a_1200_, 0);
lean_inc(v_val_1204_);
lean_dec_ref_known(v_a_1200_, 1);
v___x_1209_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__2___redArg(v_selectionRangeStx_1195_, v___y_1196_);
v_a_1210_ = lean_ctor_get(v___x_1209_, 0);
lean_inc(v_a_1210_);
lean_dec_ref(v___x_1209_);
if (lean_obj_tag(v_a_1210_) == 0)
{
lean_inc(v_val_1204_);
v_a_1206_ = v_val_1204_;
goto v___jp_1205_;
}
else
{
lean_object* v_val_1211_; 
v_val_1211_ = lean_ctor_get(v_a_1210_, 0);
lean_inc(v_val_1211_);
lean_dec_ref_known(v_a_1210_, 1);
v_a_1206_ = v_val_1211_;
goto v___jp_1205_;
}
v___jp_1205_:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1207_, 0, v_val_1204_);
lean_ctor_set(v___x_1207_, 1, v_a_1206_);
v___x_1208_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__3___redArg(v_declName_1193_, v___x_1207_, v___y_1197_);
return v___x_1208_;
}
}
else
{
lean_object* v___x_1212_; lean_object* v___x_1214_; 
lean_dec(v_a_1200_);
lean_dec(v_declName_1193_);
v___x_1212_ = lean_box(0);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v___x_1212_);
v___x_1214_ = v___x_1202_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v___x_1212_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2___boxed(lean_object* v_declName_1217_, lean_object* v_rangeStx_1218_, lean_object* v_selectionRangeStx_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2(v_declName_1217_, v_rangeStx_1218_, v_selectionRangeStx_1219_, v___y_1220_, v___y_1221_);
lean_dec(v___y_1221_);
lean_dec_ref(v___y_1220_);
lean_dec(v_selectionRangeStx_1219_);
lean_dec(v_rangeStx_1218_);
return v_res_1223_;
}
}
static lean_object* _init_l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__3(void){
_start:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1230_ = lean_box(0);
v___x_1231_ = ((lean_object*)(l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__2));
v___x_1232_ = l_Lean_mkConst(v___x_1231_, v___x_1230_);
return v___x_1232_;
}
}
static lean_object* _init_l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__6(void){
_start:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1238_ = lean_box(0);
v___x_1239_ = ((lean_object*)(l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__5));
v___x_1240_ = l_Lean_mkConst(v___x_1239_, v___x_1238_);
return v___x_1240_;
}
}
static lean_object* _init_l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__7(void){
_start:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1241_ = lean_obj_once(&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__6, &l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__6_once, _init_l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__6);
v___x_1242_ = lean_obj_once(&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__3, &l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__3_once, _init_l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__3);
v___x_1243_ = l_Lean_Expr_app___override(v___x_1242_, v___x_1241_);
return v___x_1243_;
}
}
static lean_object* _init_l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__10(void){
_start:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1249_ = lean_box(0);
v___x_1250_ = ((lean_object*)(l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__9));
v___x_1251_ = l_Lean_mkConst(v___x_1250_, v___x_1249_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs(lean_object* v_x_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_){
_start:
{
lean_object* v___x_1261_; uint8_t v___x_1262_; 
v___x_1261_ = ((lean_object*)(l_Lean_PostprocessTraces_storeTracesAsCmd___closed__3));
lean_inc(v_x_1257_);
v___x_1262_ = l_Lean_Syntax_isOfKind(v_x_1257_, v___x_1261_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; 
lean_dec(v_x_1257_);
v___x_1263_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg();
return v___x_1263_;
}
else
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v_id_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v_env_1271_; lean_object* v___x_1272_; 
v___x_1264_ = lean_unsigned_to_nat(0u);
v___x_1265_ = lean_unsigned_to_nat(1u);
v_id_1266_ = l_Lean_Syntax_getArg(v_x_1257_, v___x_1265_);
v___x_1267_ = lean_unsigned_to_nat(3u);
v___x_1268_ = l_Lean_Syntax_getArg(v_x_1257_, v___x_1267_);
lean_dec(v_x_1257_);
v___x_1269_ = lean_box(0);
v___x_1270_ = lean_st_ref_get(v_a_1259_);
v_env_1271_ = lean_ctor_get(v___x_1270_, 0);
lean_inc_ref(v_env_1271_);
lean_dec(v___x_1270_);
v___x_1272_ = l_Lean_Elab_Command_getScope___redArg(v_a_1259_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; lean_object* v_currNamespace_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___y_1279_; lean_object* v___x_1282_; 
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
lean_inc(v_a_1273_);
lean_dec_ref_known(v___x_1272_, 1);
v_currNamespace_1274_ = lean_ctor_get(v_a_1273_, 2);
lean_inc(v_currNamespace_1274_);
lean_dec(v_a_1273_);
v___x_1275_ = l_Lean_TSyntax_getId(v_id_1266_);
lean_inc(v___x_1275_);
v___x_1276_ = l_Lean_Name_append(v_currNamespace_1274_, v___x_1275_);
v___x_1277_ = l_Lean_mkPrivateName(v_env_1271_, v___x_1276_);
lean_dec_ref(v_env_1271_);
v___x_1282_ = l_Lean_Elab_PostprocessTraces_runAndCollectMessages(v___x_1268_, v_a_1258_, v_a_1259_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; lean_object* v___x_1284_; lean_object* v_env_1285_; lean_object* v_messages_1286_; lean_object* v_scopes_1287_; lean_object* v_usedQuotCtxts_1288_; lean_object* v_nextMacroScope_1289_; lean_object* v_maxRecDepth_1290_; lean_object* v_ngen_1291_; lean_object* v_auxDeclNGen_1292_; lean_object* v_infoState_1293_; lean_object* v_traceState_1294_; lean_object* v_snapshotTasks_1295_; lean_object* v_prevLinterStates_1296_; lean_object* v_codeQualityEntryTasks_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1362_; 
v_a_1283_ = lean_ctor_get(v___x_1282_, 0);
lean_inc(v_a_1283_);
lean_dec_ref_known(v___x_1282_, 1);
v___x_1284_ = lean_st_ref_take(v_a_1259_);
v_env_1285_ = lean_ctor_get(v___x_1284_, 0);
v_messages_1286_ = lean_ctor_get(v___x_1284_, 1);
v_scopes_1287_ = lean_ctor_get(v___x_1284_, 2);
v_usedQuotCtxts_1288_ = lean_ctor_get(v___x_1284_, 3);
v_nextMacroScope_1289_ = lean_ctor_get(v___x_1284_, 4);
v_maxRecDepth_1290_ = lean_ctor_get(v___x_1284_, 5);
v_ngen_1291_ = lean_ctor_get(v___x_1284_, 6);
v_auxDeclNGen_1292_ = lean_ctor_get(v___x_1284_, 7);
v_infoState_1293_ = lean_ctor_get(v___x_1284_, 8);
v_traceState_1294_ = lean_ctor_get(v___x_1284_, 9);
v_snapshotTasks_1295_ = lean_ctor_get(v___x_1284_, 10);
v_prevLinterStates_1296_ = lean_ctor_get(v___x_1284_, 11);
v_codeQualityEntryTasks_1297_ = lean_ctor_get(v___x_1284_, 12);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1284_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1299_ = v___x_1284_;
v_isShared_1300_ = v_isSharedCheck_1362_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1297_);
lean_inc(v_prevLinterStates_1296_);
lean_inc(v_snapshotTasks_1295_);
lean_inc(v_traceState_1294_);
lean_inc(v_infoState_1293_);
lean_inc(v_auxDeclNGen_1292_);
lean_inc(v_ngen_1291_);
lean_inc(v_maxRecDepth_1290_);
lean_inc(v_nextMacroScope_1289_);
lean_inc(v_usedQuotCtxts_1288_);
lean_inc(v_scopes_1287_);
lean_inc(v_messages_1286_);
lean_inc(v_env_1285_);
lean_dec(v___x_1284_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1362_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___y_1302_; lean_object* v___x_1357_; uint8_t v___x_1358_; 
v___x_1357_ = lean_array_get_size(v_a_1283_);
v___x_1358_ = lean_nat_dec_lt(v___x_1264_, v___x_1357_);
if (v___x_1358_ == 0)
{
v___y_1302_ = v_messages_1286_;
goto v___jp_1301_;
}
else
{
size_t v___x_1359_; size_t v___x_1360_; lean_object* v___x_1361_; 
v___x_1359_ = ((size_t)0ULL);
v___x_1360_ = lean_usize_of_nat(v___x_1357_);
v___x_1361_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__5(v_a_1283_, v___x_1359_, v___x_1360_, v_messages_1286_);
v___y_1302_ = v___x_1361_;
goto v___jp_1301_;
}
v___jp_1301_:
{
lean_object* v___x_1304_; 
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 1, v___y_1302_);
v___x_1304_ = v___x_1299_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v_env_1285_);
lean_ctor_set(v_reuseFailAlloc_1356_, 1, v___y_1302_);
lean_ctor_set(v_reuseFailAlloc_1356_, 2, v_scopes_1287_);
lean_ctor_set(v_reuseFailAlloc_1356_, 3, v_usedQuotCtxts_1288_);
lean_ctor_set(v_reuseFailAlloc_1356_, 4, v_nextMacroScope_1289_);
lean_ctor_set(v_reuseFailAlloc_1356_, 5, v_maxRecDepth_1290_);
lean_ctor_set(v_reuseFailAlloc_1356_, 6, v_ngen_1291_);
lean_ctor_set(v_reuseFailAlloc_1356_, 7, v_auxDeclNGen_1292_);
lean_ctor_set(v_reuseFailAlloc_1356_, 8, v_infoState_1293_);
lean_ctor_set(v_reuseFailAlloc_1356_, 9, v_traceState_1294_);
lean_ctor_set(v_reuseFailAlloc_1356_, 10, v_snapshotTasks_1295_);
lean_ctor_set(v_reuseFailAlloc_1356_, 11, v_prevLinterStates_1296_);
lean_ctor_set(v_reuseFailAlloc_1356_, 12, v_codeQualityEntryTasks_1297_);
v___x_1304_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; uint8_t v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1305_ = lean_st_ref_put(v_a_1259_, v___x_1304_);
v___x_1306_ = lean_obj_once(&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__7, &l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__7_once, _init_l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__7);
lean_inc_n(v___x_1277_, 3);
v___x_1307_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1277_);
lean_ctor_set(v___x_1307_, 1, v___x_1269_);
lean_ctor_set(v___x_1307_, 2, v___x_1306_);
v___x_1308_ = lean_obj_once(&l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__10, &l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__10_once, _init_l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__10);
v___x_1309_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v___x_1277_);
v___x_1310_ = l_Lean_Expr_app___override(v___x_1308_, v___x_1309_);
v___x_1311_ = lean_box(1);
v___x_1312_ = 1;
v___x_1313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1277_);
lean_ctor_set(v___x_1313_, 1, v___x_1269_);
v___x_1314_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1314_, 0, v___x_1307_);
lean_ctor_set(v___x_1314_, 1, v___x_1310_);
lean_ctor_set(v___x_1314_, 2, v___x_1311_);
lean_ctor_set(v___x_1314_, 3, v___x_1313_);
lean_ctor_set_uint8(v___x_1314_, sizeof(void*)*4, v___x_1312_);
v___x_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1314_);
v___x_1316_ = lean_box(v___x_1262_);
v___x_1317_ = lean_box(v___x_1262_);
v___x_1318_ = lean_alloc_closure((void*)(l_Lean_addAndCompile___boxed), 6, 3);
lean_closure_set(v___x_1318_, 0, v___x_1315_);
lean_closure_set(v___x_1318_, 1, v___x_1316_);
lean_closure_set(v___x_1318_, 2, v___x_1317_);
v___x_1319_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_1318_, v_a_1258_, v_a_1259_);
if (lean_obj_tag(v___x_1319_) == 0)
{
lean_object* v_fileName_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
lean_dec_ref_known(v___x_1319_, 1);
v_fileName_1320_ = lean_ctor_get(v_a_1258_, 0);
v___x_1321_ = ((lean_object*)(l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__11));
v___x_1322_ = lean_string_append(v___x_1321_, v_fileName_1320_);
v___x_1323_ = ((lean_object*)(l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__12));
v___x_1324_ = lean_string_append(v___x_1322_, v___x_1323_);
v___x_1325_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1275_, v___x_1262_);
v___x_1326_ = lean_string_append(v___x_1324_, v___x_1325_);
v___x_1327_ = ((lean_object*)(l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__13));
v___x_1328_ = lean_string_append(v___x_1326_, v___x_1327_);
v___x_1329_ = lean_string_append(v___x_1328_, v___x_1325_);
v___x_1330_ = ((lean_object*)(l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__14));
v___x_1331_ = lean_string_append(v___x_1329_, v___x_1330_);
v___x_1332_ = lean_string_append(v___x_1331_, v___x_1325_);
lean_dec_ref(v___x_1325_);
v___x_1333_ = ((lean_object*)(l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___closed__15));
v___x_1334_ = lean_string_append(v___x_1332_, v___x_1333_);
lean_inc(v___x_1277_);
v___x_1335_ = lean_alloc_closure((void*)(l_Lean_addDocStringCore___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__1___boxed), 5, 2);
lean_closure_set(v___x_1335_, 0, v___x_1277_);
lean_closure_set(v___x_1335_, 1, v___x_1334_);
v___x_1336_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_1335_, v_a_1258_, v_a_1259_);
if (lean_obj_tag(v___x_1336_) == 0)
{
lean_object* v___x_1337_; 
lean_dec_ref_known(v___x_1336_, 1);
v___x_1337_ = l_Lean_Elab_Command_getRef___redArg(v_a_1258_);
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1339_; 
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
lean_inc(v_a_1338_);
lean_dec_ref_known(v___x_1337_, 1);
lean_inc(v___x_1277_);
v___x_1339_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2(v___x_1277_, v_a_1338_, v_id_1266_, v_a_1258_, v_a_1259_);
lean_dec(v_a_1338_);
if (lean_obj_tag(v___x_1339_) == 0)
{
lean_object* v___x_1340_; lean_object* v___x_1341_; 
lean_dec_ref_known(v___x_1339_, 1);
v___x_1340_ = lean_box(0);
lean_inc(v___x_1277_);
v___x_1341_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3(v_id_1266_, v___x_1277_, v___x_1340_, v_a_1258_, v_a_1259_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v___x_1342_; lean_object* v___x_1343_; uint8_t v___x_1344_; 
lean_dec_ref_known(v___x_1341_, 1);
v___x_1342_ = lean_array_get_size(v_a_1283_);
v___x_1343_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_PostprocessTraces_StoredTrace_postprocess_spec__0___closed__0));
v___x_1344_ = lean_nat_dec_lt(v___x_1264_, v___x_1342_);
if (v___x_1344_ == 0)
{
lean_dec(v_a_1283_);
v___y_1279_ = v___x_1343_;
goto v___jp_1278_;
}
else
{
size_t v___x_1345_; size_t v___x_1346_; lean_object* v___x_1347_; 
v___x_1345_ = ((size_t)0ULL);
v___x_1346_ = lean_usize_of_nat(v___x_1342_);
v___x_1347_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__4(v_a_1283_, v___x_1345_, v___x_1346_, v___x_1343_);
lean_dec(v_a_1283_);
v___y_1279_ = v___x_1347_;
goto v___jp_1278_;
}
}
else
{
lean_dec(v_a_1283_);
lean_dec(v___x_1277_);
return v___x_1341_;
}
}
else
{
lean_dec(v_a_1283_);
lean_dec(v___x_1277_);
lean_dec(v_id_1266_);
return v___x_1339_;
}
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
lean_dec(v_a_1283_);
lean_dec(v___x_1277_);
lean_dec(v_id_1266_);
v_a_1348_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v___x_1337_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1337_);
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
else
{
lean_dec(v_a_1283_);
lean_dec(v___x_1277_);
lean_dec(v_id_1266_);
return v___x_1336_;
}
}
else
{
lean_dec(v_a_1283_);
lean_dec(v___x_1277_);
lean_dec(v___x_1275_);
lean_dec(v_id_1266_);
return v___x_1319_;
}
}
}
}
}
else
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1370_; 
lean_dec(v___x_1277_);
lean_dec(v___x_1275_);
lean_dec(v_id_1266_);
v_a_1363_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1365_ = v___x_1282_;
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1282_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1363_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
v___jp_1278_:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1280_ = lean_alloc_closure((void*)(l_Lean_PostprocessTraces_storeTraces___boxed), 5, 2);
lean_closure_set(v___x_1280_, 0, v___x_1277_);
lean_closure_set(v___x_1280_, 1, v___y_1279_);
v___x_1281_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_1280_, v_a_1258_, v_a_1259_);
return v___x_1281_;
}
}
else
{
lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1378_; 
lean_dec_ref(v_env_1271_);
lean_dec(v___x_1268_);
lean_dec(v_id_1266_);
v_a_1371_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1373_ = v___x_1272_;
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_dec(v___x_1272_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1376_; 
if (v_isShared_1374_ == 0)
{
v___x_1376_ = v___x_1373_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_a_1371_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabStoreTraceAs___boxed(lean_object* v_x_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_Lean_Elab_PostprocessTraces_elabStoreTraceAs(v_x_1379_, v_a_1380_, v_a_1381_);
lean_dec(v_a_1381_);
lean_dec_ref(v_a_1380_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__2(lean_object* v_stx_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v___x_1388_; 
v___x_1388_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__2___redArg(v_stx_1384_, v___y_1385_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__2___boxed(lean_object* v_stx_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v_res_1393_; 
v_res_1393_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__2(v_stx_1389_, v___y_1390_, v___y_1391_);
lean_dec(v___y_1391_);
lean_dec_ref(v___y_1390_);
lean_dec(v_stx_1389_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__3(lean_object* v_declName_1394_, lean_object* v_declRanges_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
lean_object* v___x_1399_; 
v___x_1399_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__3___redArg(v_declName_1394_, v_declRanges_1395_, v___y_1397_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__3___boxed(lean_object* v_declName_1400_, lean_object* v_declRanges_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__2_spec__3(v_declName_1400_, v_declRanges_1401_, v___y_1402_, v___y_1403_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6_spec__9(lean_object* v_t_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v___x_1410_; 
v___x_1410_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6_spec__9___redArg(v_t_1406_, v___y_1408_);
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6_spec__9___boxed(lean_object* v_t_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v_res_1415_; 
v_res_1415_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__6_spec__9(v_t_1411_, v___y_1412_, v___y_1413_);
lean_dec(v___y_1413_);
lean_dec_ref(v___y_1412_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9(lean_object* v_00_u03b1_1416_, lean_object* v_constName_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_){
_start:
{
lean_object* v___x_1421_; 
v___x_1421_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9___redArg(v_constName_1417_, v___y_1418_, v___y_1419_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9___boxed(lean_object* v_00_u03b1_1422_, lean_object* v_constName_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_){
_start:
{
lean_object* v_res_1427_; 
v_res_1427_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9(v_00_u03b1_1422_, v_constName_1423_, v___y_1424_, v___y_1425_);
lean_dec(v___y_1425_);
lean_dec_ref(v___y_1424_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12(lean_object* v_00_u03b1_1428_, lean_object* v_ref_1429_, lean_object* v_constName_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_){
_start:
{
lean_object* v___x_1434_; 
v___x_1434_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg(v_ref_1429_, v_constName_1430_, v___y_1431_, v___y_1432_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___boxed(lean_object* v_00_u03b1_1435_, lean_object* v_ref_1436_, lean_object* v_constName_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12(v_00_u03b1_1435_, v_ref_1436_, v_constName_1437_, v___y_1438_, v___y_1439_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec(v_ref_1436_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14(lean_object* v_00_u03b1_1442_, lean_object* v_ref_1443_, lean_object* v_msg_1444_, lean_object* v_declHint_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
lean_object* v___x_1449_; 
v___x_1449_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14___redArg(v_ref_1443_, v_msg_1444_, v_declHint_1445_, v___y_1446_, v___y_1447_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14___boxed(lean_object* v_00_u03b1_1450_, lean_object* v_ref_1451_, lean_object* v_msg_1452_, lean_object* v_declHint_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14(v_00_u03b1_1450_, v_ref_1451_, v_msg_1452_, v_declHint_1453_, v___y_1454_, v___y_1455_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec(v_ref_1451_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16(lean_object* v_msg_1458_, lean_object* v_declHint_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v___x_1463_; 
v___x_1463_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___redArg(v_msg_1458_, v_declHint_1459_, v___y_1461_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16___boxed(lean_object* v_msg_1464_, lean_object* v_declHint_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__15_spec__16(v_msg_1464_, v_declHint_1465_, v___y_1466_, v___y_1467_);
lean_dec(v___y_1467_);
lean_dec_ref(v___y_1466_);
return v_res_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16(lean_object* v_00_u03b1_1470_, lean_object* v_ref_1471_, lean_object* v_msg_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v___x_1476_; 
v___x_1476_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16___redArg(v_ref_1471_, v_msg_1472_, v___y_1473_, v___y_1474_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16___boxed(lean_object* v_00_u03b1_1477_, lean_object* v_ref_1478_, lean_object* v_msg_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_){
_start:
{
lean_object* v_res_1483_; 
v_res_1483_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16(v_00_u03b1_1477_, v_ref_1478_, v_msg_1479_, v___y_1480_, v___y_1481_);
lean_dec(v___y_1481_);
lean_dec_ref(v___y_1480_);
lean_dec(v_ref_1478_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__19(lean_object* v_msgData_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_){
_start:
{
lean_object* v___x_1488_; 
v___x_1488_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__19___redArg(v_msgData_1484_, v___y_1486_);
return v___x_1488_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__19___boxed(lean_object* v_msgData_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v_res_1493_; 
v_res_1493_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__19(v_msgData_1489_, v___y_1490_, v___y_1491_);
lean_dec(v___y_1491_);
lean_dec_ref(v___y_1490_);
return v_res_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18(lean_object* v_00_u03b1_1494_, lean_object* v_msg_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_){
_start:
{
lean_object* v___x_1499_; 
v___x_1499_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18___redArg(v_msg_1495_, v___y_1496_, v___y_1497_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18___boxed(lean_object* v_00_u03b1_1500_, lean_object* v_msg_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18(v_00_u03b1_1500_, v_msg_1501_, v___y_1502_, v___y_1503_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20(lean_object* v_msgData_1506_, lean_object* v_macroStack_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_){
_start:
{
lean_object* v___x_1511_; 
v___x_1511_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___redArg(v_msgData_1506_, v_macroStack_1507_, v___y_1509_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20___boxed(lean_object* v_msgData_1512_, lean_object* v_macroStack_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18_spec__20(v_msgData_1512_, v_macroStack_1513_, v___y_1514_, v___y_1515_);
lean_dec(v___y_1515_);
lean_dec_ref(v___y_1514_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace_spec__0(lean_object* v_a_1518_, lean_object* v_a_1519_){
_start:
{
if (lean_obj_tag(v_a_1518_) == 0)
{
lean_object* v___x_1520_; 
v___x_1520_ = l_List_reverse___redArg(v_a_1519_);
return v___x_1520_;
}
else
{
lean_object* v_head_1521_; lean_object* v_tail_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1543_; 
v_head_1521_ = lean_ctor_get(v_a_1518_, 0);
v_tail_1522_ = lean_ctor_get(v_a_1518_, 1);
v_isSharedCheck_1543_ = !lean_is_exclusive(v_a_1518_);
if (v_isSharedCheck_1543_ == 0)
{
v___x_1524_ = v_a_1518_;
v_isShared_1525_ = v_isSharedCheck_1543_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_tail_1522_);
lean_inc(v_head_1521_);
lean_dec(v_a_1518_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1543_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v_fst_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1541_; 
v_fst_1526_ = lean_ctor_get(v_head_1521_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v_head_1521_);
if (v_isSharedCheck_1541_ == 0)
{
lean_object* v_unused_1542_; 
v_unused_1542_ = lean_ctor_get(v_head_1521_, 1);
lean_dec(v_unused_1542_);
v___x_1528_ = v_head_1521_;
v_isShared_1529_ = v_isSharedCheck_1541_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_fst_1526_);
lean_dec(v_head_1521_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1541_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1534_; 
v___x_1530_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12___redArg___closed__3);
v___x_1531_ = l_Lean_privateToUserName(v_fst_1526_);
v___x_1532_ = l_Lean_MessageData_ofName(v___x_1531_);
if (v_isShared_1529_ == 0)
{
lean_ctor_set_tag(v___x_1528_, 7);
lean_ctor_set(v___x_1528_, 1, v___x_1532_);
lean_ctor_set(v___x_1528_, 0, v___x_1530_);
v___x_1534_ = v___x_1528_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v___x_1530_);
lean_ctor_set(v_reuseFailAlloc_1540_, 1, v___x_1532_);
v___x_1534_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
lean_object* v___x_1535_; lean_object* v___x_1537_; 
v___x_1535_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1534_);
lean_ctor_set(v___x_1535_, 1, v___x_1530_);
if (v_isShared_1525_ == 0)
{
lean_ctor_set(v___x_1524_, 1, v_a_1519_);
lean_ctor_set(v___x_1524_, 0, v___x_1535_);
v___x_1537_ = v___x_1524_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v___x_1535_);
lean_ctor_set(v_reuseFailAlloc_1539_, 1, v_a_1519_);
v___x_1537_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
v_a_1518_ = v_tail_1522_;
v_a_1519_ = v___x_1537_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__1(void){
_start:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1545_ = ((lean_object*)(l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__0));
v___x_1546_ = l_Lean_stringToMessageData(v___x_1545_);
return v___x_1546_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__3(void){
_start:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1548_ = ((lean_object*)(l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__2));
v___x_1549_ = l_Lean_stringToMessageData(v___x_1548_);
return v___x_1549_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__5(void){
_start:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1551_ = ((lean_object*)(l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__4));
v___x_1552_ = l_Lean_stringToMessageData(v___x_1551_);
return v___x_1552_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__7(void){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1554_ = ((lean_object*)(l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__6));
v___x_1555_ = l_Lean_stringToMessageData(v___x_1554_);
return v___x_1555_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__9(void){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1557_ = ((lean_object*)(l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__8));
v___x_1558_ = l_Lean_stringToMessageData(v___x_1557_);
return v___x_1558_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__12(void){
_start:
{
lean_object* v___x_1562_; lean_object* v___x_1563_; 
v___x_1562_ = ((lean_object*)(l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__11));
v___x_1563_ = l_Lean_MessageData_ofFormat(v___x_1562_);
return v___x_1563_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__14(void){
_start:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1565_ = ((lean_object*)(l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__13));
v___x_1566_ = l_Lean_stringToMessageData(v___x_1565_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace(lean_object* v_id_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_){
_start:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1571_ = lean_box(0);
lean_inc(v_id_1567_);
v___x_1572_ = lean_alloc_closure((void*)(l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo___boxed), 5, 2);
lean_closure_set(v___x_1572_, 0, v_id_1567_);
lean_closure_set(v___x_1572_, 1, v___x_1571_);
v___x_1573_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_1572_, v_a_1568_, v_a_1569_);
if (lean_obj_tag(v___x_1573_) == 0)
{
lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1611_; 
v_a_1574_ = lean_ctor_get(v___x_1573_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1576_ = v___x_1573_;
v_isShared_1577_ = v_isSharedCheck_1611_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___x_1573_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1611_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1578_; lean_object* v_env_1579_; lean_object* v___x_1580_; 
v___x_1578_ = lean_st_ref_get(v_a_1569_);
v_env_1579_ = lean_ctor_get(v___x_1578_, 0);
lean_inc_ref(v_env_1579_);
lean_dec(v___x_1578_);
v___x_1580_ = l_Lean_PostprocessTraces_findStoredTrace_x3f(v_env_1579_, v_a_1574_);
lean_dec(v_a_1574_);
if (lean_obj_tag(v___x_1580_) == 1)
{
lean_object* v_val_1581_; lean_object* v___x_1583_; 
lean_dec(v_id_1567_);
v_val_1581_ = lean_ctor_get(v___x_1580_, 0);
lean_inc(v_val_1581_);
lean_dec_ref_known(v___x_1580_, 1);
if (v_isShared_1577_ == 0)
{
lean_ctor_set(v___x_1576_, 0, v_val_1581_);
v___x_1583_ = v___x_1576_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_val_1581_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
else
{
lean_object* v___x_1585_; lean_object* v___y_1587_; lean_object* v_env_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; uint8_t v___x_1605_; 
lean_dec(v___x_1580_);
lean_del_object(v___x_1576_);
v___x_1585_ = lean_st_ref_get(v_a_1569_);
v_env_1601_ = lean_ctor_get(v___x_1585_, 0);
lean_inc_ref(v_env_1601_);
lean_dec(v___x_1585_);
v___x_1602_ = l_Lean_PostprocessTraces_allStoredTraces(v_env_1601_);
v___x_1603_ = lean_box(0);
v___x_1604_ = l_List_mapTR_loop___at___00__private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace_spec__0(v___x_1602_, v___x_1603_);
v___x_1605_ = l_List_isEmpty___redArg(v___x_1604_);
if (v___x_1605_ == 0)
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1606_ = lean_obj_once(&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__9, &l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__9_once, _init_l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__9);
v___x_1607_ = lean_obj_once(&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__12, &l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__12_once, _init_l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__12);
v___x_1608_ = l_Lean_MessageData_joinSep(v___x_1604_, v___x_1607_);
v___x_1609_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1606_);
lean_ctor_set(v___x_1609_, 1, v___x_1608_);
v___y_1587_ = v___x_1609_;
goto v___jp_1586_;
}
else
{
lean_object* v___x_1610_; 
lean_dec(v___x_1604_);
v___x_1610_ = lean_obj_once(&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__14, &l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__14_once, _init_l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__14);
v___y_1587_ = v___x_1610_;
goto v___jp_1586_;
}
v___jp_1586_:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1588_ = lean_obj_once(&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__1, &l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__1_once, _init_l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__1);
v___x_1589_ = l_Lean_TSyntax_getId(v_id_1567_);
v___x_1590_ = l_Lean_MessageData_ofName(v___x_1589_);
lean_inc_ref(v___x_1590_);
v___x_1591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1588_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
v___x_1592_ = lean_obj_once(&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__3, &l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__3_once, _init_l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__3);
v___x_1593_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1591_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
v___x_1594_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1594_, 0, v___x_1593_);
lean_ctor_set(v___x_1594_, 1, v___y_1587_);
v___x_1595_ = lean_obj_once(&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__5, &l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__5_once, _init_l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__5);
v___x_1596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1594_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
v___x_1597_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1596_);
lean_ctor_set(v___x_1597_, 1, v___x_1590_);
v___x_1598_ = lean_obj_once(&l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__7, &l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__7_once, _init_l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___closed__7);
v___x_1599_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1597_);
lean_ctor_set(v___x_1599_, 1, v___x_1598_);
v___x_1600_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16___redArg(v_id_1567_, v___x_1599_, v_a_1568_, v_a_1569_);
lean_dec(v_id_1567_);
return v___x_1600_;
}
}
}
}
else
{
lean_object* v_a_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1619_; 
lean_dec(v_id_1567_);
v_a_1612_ = lean_ctor_get(v___x_1573_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1614_ = v___x_1573_;
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_a_1612_);
lean_dec(v___x_1573_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v___x_1617_; 
if (v_isShared_1615_ == 0)
{
v___x_1617_ = v___x_1614_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v_a_1612_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace___boxed(lean_object* v_id_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_){
_start:
{
lean_object* v_res_1624_; 
v_res_1624_ = l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace(v_id_1620_, v_a_1621_, v_a_1622_);
lean_dec(v_a_1622_);
lean_dec_ref(v_a_1621_);
return v_res_1624_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___lam__0(lean_object* v_x_1626_){
_start:
{
if (lean_obj_tag(v_x_1626_) == 1)
{
lean_object* v_pre_1627_; 
v_pre_1627_ = lean_ctor_get(v_x_1626_, 0);
if (lean_obj_tag(v_pre_1627_) == 0)
{
lean_object* v_str_1628_; lean_object* v___x_1629_; uint8_t v___x_1630_; 
v_str_1628_ = lean_ctor_get(v_x_1626_, 1);
v___x_1629_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___lam__0___closed__0));
v___x_1630_ = lean_string_dec_eq(v_str_1628_, v___x_1629_);
return v___x_1630_;
}
else
{
uint8_t v___x_1631_; 
v___x_1631_ = 0;
return v___x_1631_;
}
}
else
{
uint8_t v___x_1632_; 
v___x_1632_ = 0;
return v___x_1632_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___lam__0___boxed(lean_object* v_x_1633_){
_start:
{
uint8_t v_res_1634_; lean_object* v_r_1635_; 
v_res_1634_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___lam__0(v_x_1633_);
lean_dec(v_x_1633_);
v_r_1635_ = lean_box(v_res_1634_);
return v_r_1635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0(lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v_as_1639_, size_t v_sz_1640_, size_t v_i_1641_, lean_object* v_b_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_){
_start:
{
lean_object* v_a_1647_; uint8_t v___x_1651_; 
v___x_1651_ = lean_usize_dec_lt(v_i_1641_, v_sz_1640_);
if (v___x_1651_ == 0)
{
lean_object* v___x_1652_; 
v___x_1652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1652_, 0, v_b_1642_);
return v___x_1652_;
}
else
{
lean_object* v_fileName_1653_; lean_object* v_fileMap_1654_; uint8_t v_suppressElabErrors_1655_; lean_object* v_a_1656_; lean_object* v_data_1657_; lean_object* v___x_1658_; uint8_t v___x_1659_; lean_object* v___x_1660_; lean_object* v___y_1662_; 
v_fileName_1653_ = lean_ctor_get(v___y_1643_, 0);
v_fileMap_1654_ = lean_ctor_get(v___y_1643_, 1);
v_suppressElabErrors_1655_ = lean_ctor_get_uint8(v___y_1643_, sizeof(void*)*10);
v_a_1656_ = lean_array_uget_borrowed(v_as_1639_, v_i_1641_);
v_data_1657_ = lean_ctor_get(v_a_1656_, 4);
v___x_1658_ = lean_box(0);
v___x_1659_ = 0;
lean_inc(v_data_1657_);
lean_inc_ref(v_fileMap_1654_);
lean_inc_ref(v_fileName_1653_);
v___x_1660_ = l_Lean_Elab_mkMessageCore(v_fileName_1653_, v_fileMap_1654_, v_data_1657_, v___x_1659_, v___y_1637_, v___y_1638_);
if (v_suppressElabErrors_1655_ == 0)
{
v___y_1662_ = v___y_1644_;
goto v___jp_1661_;
}
else
{
lean_object* v_data_1725_; lean_object* v___f_1726_; uint8_t v___x_1727_; 
v_data_1725_ = lean_ctor_get(v___x_1660_, 4);
v___f_1726_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___closed__0));
lean_inc(v_data_1725_);
v___x_1727_ = l_Lean_MessageData_hasTag(v___f_1726_, v_data_1725_);
if (v___x_1727_ == 0)
{
lean_dec_ref(v___x_1660_);
v_a_1647_ = v___x_1658_;
goto v___jp_1646_;
}
else
{
v___y_1662_ = v___y_1644_;
goto v___jp_1661_;
}
}
v___jp_1661_:
{
lean_object* v___x_1663_; 
v___x_1663_ = l_Lean_Elab_Command_getScope___redArg(v___y_1662_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v_a_1664_; lean_object* v_currNamespace_1665_; lean_object* v___x_1666_; 
v_a_1664_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_a_1664_);
lean_dec_ref_known(v___x_1663_, 1);
v_currNamespace_1665_ = lean_ctor_get(v_a_1664_, 2);
lean_inc(v_currNamespace_1665_);
lean_dec(v_a_1664_);
v___x_1666_ = l_Lean_Elab_Command_getScope___redArg(v___y_1662_);
if (lean_obj_tag(v___x_1666_) == 0)
{
lean_object* v_a_1667_; lean_object* v_openDecls_1668_; lean_object* v_fileName_1669_; lean_object* v_pos_1670_; lean_object* v_endPos_1671_; uint8_t v_keepFullRange_1672_; uint8_t v_severity_1673_; uint8_t v_isSilent_1674_; lean_object* v_caption_1675_; lean_object* v_data_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1708_; 
v_a_1667_ = lean_ctor_get(v___x_1666_, 0);
lean_inc(v_a_1667_);
lean_dec_ref_known(v___x_1666_, 1);
v_openDecls_1668_ = lean_ctor_get(v_a_1667_, 3);
lean_inc(v_openDecls_1668_);
lean_dec(v_a_1667_);
v_fileName_1669_ = lean_ctor_get(v___x_1660_, 0);
v_pos_1670_ = lean_ctor_get(v___x_1660_, 1);
v_endPos_1671_ = lean_ctor_get(v___x_1660_, 2);
v_keepFullRange_1672_ = lean_ctor_get_uint8(v___x_1660_, sizeof(void*)*5);
v_severity_1673_ = lean_ctor_get_uint8(v___x_1660_, sizeof(void*)*5 + 1);
v_isSilent_1674_ = lean_ctor_get_uint8(v___x_1660_, sizeof(void*)*5 + 2);
v_caption_1675_ = lean_ctor_get(v___x_1660_, 3);
v_data_1676_ = lean_ctor_get(v___x_1660_, 4);
v_isSharedCheck_1708_ = !lean_is_exclusive(v___x_1660_);
if (v_isSharedCheck_1708_ == 0)
{
v___x_1678_ = v___x_1660_;
v_isShared_1679_ = v_isSharedCheck_1708_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_data_1676_);
lean_inc(v_caption_1675_);
lean_inc(v_endPos_1671_);
lean_inc(v_pos_1670_);
lean_inc(v_fileName_1669_);
lean_dec(v___x_1660_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1708_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1683_; 
v___x_1680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1680_, 0, v_currNamespace_1665_);
lean_ctor_set(v___x_1680_, 1, v_openDecls_1668_);
v___x_1681_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1680_);
lean_ctor_set(v___x_1681_, 1, v_data_1676_);
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 4, v___x_1681_);
v___x_1683_ = v___x_1678_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_fileName_1669_);
lean_ctor_set(v_reuseFailAlloc_1707_, 1, v_pos_1670_);
lean_ctor_set(v_reuseFailAlloc_1707_, 2, v_endPos_1671_);
lean_ctor_set(v_reuseFailAlloc_1707_, 3, v_caption_1675_);
lean_ctor_set(v_reuseFailAlloc_1707_, 4, v___x_1681_);
lean_ctor_set_uint8(v_reuseFailAlloc_1707_, sizeof(void*)*5, v_keepFullRange_1672_);
lean_ctor_set_uint8(v_reuseFailAlloc_1707_, sizeof(void*)*5 + 1, v_severity_1673_);
lean_ctor_set_uint8(v_reuseFailAlloc_1707_, sizeof(void*)*5 + 2, v_isSilent_1674_);
v___x_1683_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
lean_object* v___x_1684_; lean_object* v_env_1685_; lean_object* v_messages_1686_; lean_object* v_scopes_1687_; lean_object* v_usedQuotCtxts_1688_; lean_object* v_nextMacroScope_1689_; lean_object* v_maxRecDepth_1690_; lean_object* v_ngen_1691_; lean_object* v_auxDeclNGen_1692_; lean_object* v_infoState_1693_; lean_object* v_traceState_1694_; lean_object* v_snapshotTasks_1695_; lean_object* v_prevLinterStates_1696_; lean_object* v_codeQualityEntryTasks_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1706_; 
v___x_1684_ = lean_st_ref_take(v___y_1662_);
v_env_1685_ = lean_ctor_get(v___x_1684_, 0);
v_messages_1686_ = lean_ctor_get(v___x_1684_, 1);
v_scopes_1687_ = lean_ctor_get(v___x_1684_, 2);
v_usedQuotCtxts_1688_ = lean_ctor_get(v___x_1684_, 3);
v_nextMacroScope_1689_ = lean_ctor_get(v___x_1684_, 4);
v_maxRecDepth_1690_ = lean_ctor_get(v___x_1684_, 5);
v_ngen_1691_ = lean_ctor_get(v___x_1684_, 6);
v_auxDeclNGen_1692_ = lean_ctor_get(v___x_1684_, 7);
v_infoState_1693_ = lean_ctor_get(v___x_1684_, 8);
v_traceState_1694_ = lean_ctor_get(v___x_1684_, 9);
v_snapshotTasks_1695_ = lean_ctor_get(v___x_1684_, 10);
v_prevLinterStates_1696_ = lean_ctor_get(v___x_1684_, 11);
v_codeQualityEntryTasks_1697_ = lean_ctor_get(v___x_1684_, 12);
v_isSharedCheck_1706_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1699_ = v___x_1684_;
v_isShared_1700_ = v_isSharedCheck_1706_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1697_);
lean_inc(v_prevLinterStates_1696_);
lean_inc(v_snapshotTasks_1695_);
lean_inc(v_traceState_1694_);
lean_inc(v_infoState_1693_);
lean_inc(v_auxDeclNGen_1692_);
lean_inc(v_ngen_1691_);
lean_inc(v_maxRecDepth_1690_);
lean_inc(v_nextMacroScope_1689_);
lean_inc(v_usedQuotCtxts_1688_);
lean_inc(v_scopes_1687_);
lean_inc(v_messages_1686_);
lean_inc(v_env_1685_);
lean_dec(v___x_1684_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1706_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1701_; lean_object* v___x_1703_; 
v___x_1701_ = l_Lean_MessageLog_add(v___x_1683_, v_messages_1686_);
if (v_isShared_1700_ == 0)
{
lean_ctor_set(v___x_1699_, 1, v___x_1701_);
v___x_1703_ = v___x_1699_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_env_1685_);
lean_ctor_set(v_reuseFailAlloc_1705_, 1, v___x_1701_);
lean_ctor_set(v_reuseFailAlloc_1705_, 2, v_scopes_1687_);
lean_ctor_set(v_reuseFailAlloc_1705_, 3, v_usedQuotCtxts_1688_);
lean_ctor_set(v_reuseFailAlloc_1705_, 4, v_nextMacroScope_1689_);
lean_ctor_set(v_reuseFailAlloc_1705_, 5, v_maxRecDepth_1690_);
lean_ctor_set(v_reuseFailAlloc_1705_, 6, v_ngen_1691_);
lean_ctor_set(v_reuseFailAlloc_1705_, 7, v_auxDeclNGen_1692_);
lean_ctor_set(v_reuseFailAlloc_1705_, 8, v_infoState_1693_);
lean_ctor_set(v_reuseFailAlloc_1705_, 9, v_traceState_1694_);
lean_ctor_set(v_reuseFailAlloc_1705_, 10, v_snapshotTasks_1695_);
lean_ctor_set(v_reuseFailAlloc_1705_, 11, v_prevLinterStates_1696_);
lean_ctor_set(v_reuseFailAlloc_1705_, 12, v_codeQualityEntryTasks_1697_);
v___x_1703_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
lean_object* v___x_1704_; 
v___x_1704_ = lean_st_ref_put(v___y_1662_, v___x_1703_);
v_a_1647_ = v___x_1658_;
goto v___jp_1646_;
}
}
}
}
}
else
{
lean_object* v_a_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1716_; 
lean_dec(v_currNamespace_1665_);
lean_dec_ref(v___x_1660_);
v_a_1709_ = lean_ctor_get(v___x_1666_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v___x_1666_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1711_ = v___x_1666_;
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_a_1709_);
lean_dec(v___x_1666_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1714_; 
if (v_isShared_1712_ == 0)
{
v___x_1714_ = v___x_1711_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v_a_1709_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
}
}
else
{
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1724_; 
lean_dec_ref(v___x_1660_);
v_a_1717_ = lean_ctor_get(v___x_1663_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1719_ = v___x_1663_;
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1663_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v___x_1722_; 
if (v_isShared_1720_ == 0)
{
v___x_1722_ = v___x_1719_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_a_1717_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
}
v___jp_1646_:
{
size_t v___x_1648_; size_t v___x_1649_; 
v___x_1648_ = ((size_t)1ULL);
v___x_1649_ = lean_usize_add(v_i_1641_, v___x_1648_);
v_i_1641_ = v___x_1649_;
v_b_1642_ = v_a_1647_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0___boxed(lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v_as_1730_, lean_object* v_sz_1731_, lean_object* v_i_1732_, lean_object* v_b_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_){
_start:
{
size_t v_sz_boxed_1737_; size_t v_i_boxed_1738_; lean_object* v_res_1739_; 
v_sz_boxed_1737_ = lean_unbox_usize(v_sz_1731_);
lean_dec(v_sz_1731_);
v_i_boxed_1738_ = lean_unbox_usize(v_i_1732_);
lean_dec(v_i_1732_);
v_res_1739_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0(v___y_1728_, v___y_1729_, v_as_1730_, v_sz_boxed_1737_, v_i_boxed_1738_, v_b_1733_, v___y_1734_, v___y_1735_);
lean_dec(v___y_1735_);
lean_dec_ref(v___y_1734_);
lean_dec_ref(v_as_1730_);
lean_dec(v___y_1729_);
lean_dec(v___y_1728_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces(lean_object* v_x_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_){
_start:
{
lean_object* v___x_1744_; uint8_t v___x_1745_; 
v___x_1744_ = ((lean_object*)(l_Lean_PostprocessTraces_postprocessStoredTracesCmd___closed__1));
lean_inc(v_x_1740_);
v___x_1745_ = l_Lean_Syntax_isOfKind(v_x_1740_, v___x_1744_);
if (v___x_1745_ == 0)
{
lean_object* v___x_1746_; 
lean_dec(v_x_1740_);
v___x_1746_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg();
return v___x_1746_;
}
else
{
lean_object* v___x_1747_; lean_object* v_id_1748_; lean_object* v___x_1749_; lean_object* v_post_1750_; lean_object* v___x_1751_; 
v___x_1747_ = lean_unsigned_to_nat(1u);
v_id_1748_ = l_Lean_Syntax_getArg(v_x_1740_, v___x_1747_);
v___x_1749_ = lean_unsigned_to_nat(2u);
v_post_1750_ = l_Lean_Syntax_getArg(v_x_1740_, v___x_1749_);
lean_dec(v_x_1740_);
v___x_1751_ = l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_Elab_PostprocessTraces_resolveStoredTrace(v_id_1748_, v_a_1741_, v_a_1742_);
if (lean_obj_tag(v___x_1751_) == 0)
{
lean_object* v_a_1752_; lean_object* v___x_1753_; 
v_a_1752_ = lean_ctor_get(v___x_1751_, 0);
lean_inc(v_a_1752_);
lean_dec_ref_known(v___x_1751_, 1);
v___x_1753_ = l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel(v_post_1750_, v_a_1741_, v_a_1742_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; 
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
lean_inc(v_a_1754_);
lean_dec_ref_known(v___x_1753_, 1);
v___x_1755_ = lean_alloc_closure((void*)(l_Lean_PostprocessTraces_StoredTrace_postprocess___boxed), 5, 2);
lean_closure_set(v___x_1755_, 0, v_a_1752_);
lean_closure_set(v___x_1755_, 1, v_a_1754_);
v___x_1756_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_1755_, v_a_1741_, v_a_1742_);
if (lean_obj_tag(v___x_1756_) == 0)
{
lean_object* v_a_1757_; lean_object* v___x_1758_; 
v_a_1757_ = lean_ctor_get(v___x_1756_, 0);
lean_inc(v_a_1757_);
lean_dec_ref_known(v___x_1756_, 1);
v___x_1758_ = l_Lean_Elab_Command_getRef___redArg(v_a_1741_);
if (lean_obj_tag(v___x_1758_) == 0)
{
lean_object* v_a_1759_; lean_object* v___y_1761_; lean_object* v___y_1762_; uint8_t v___x_1775_; lean_object* v___y_1777_; lean_object* v___x_1780_; 
v_a_1759_ = lean_ctor_get(v___x_1758_, 0);
lean_inc(v_a_1759_);
lean_dec_ref_known(v___x_1758_, 1);
v___x_1775_ = 0;
v___x_1780_ = l_Lean_Syntax_getPos_x3f(v_a_1759_, v___x_1775_);
if (lean_obj_tag(v___x_1780_) == 0)
{
lean_object* v___x_1781_; 
v___x_1781_ = lean_unsigned_to_nat(0u);
v___y_1777_ = v___x_1781_;
goto v___jp_1776_;
}
else
{
lean_object* v_val_1782_; 
v_val_1782_ = lean_ctor_get(v___x_1780_, 0);
lean_inc(v_val_1782_);
lean_dec_ref_known(v___x_1780_, 1);
v___y_1777_ = v_val_1782_;
goto v___jp_1776_;
}
v___jp_1760_:
{
lean_object* v___x_1763_; size_t v_sz_1764_; size_t v___x_1765_; lean_object* v___x_1766_; 
v___x_1763_ = lean_box(0);
v_sz_1764_ = lean_array_size(v_a_1757_);
v___x_1765_ = ((size_t)0ULL);
v___x_1766_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces_spec__0(v___y_1761_, v___y_1762_, v_a_1757_, v_sz_1764_, v___x_1765_, v___x_1763_, v_a_1741_, v_a_1742_);
lean_dec(v_a_1757_);
lean_dec(v___y_1762_);
lean_dec(v___y_1761_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1773_; 
v_isSharedCheck_1773_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_1773_ == 0)
{
lean_object* v_unused_1774_; 
v_unused_1774_ = lean_ctor_get(v___x_1766_, 0);
lean_dec(v_unused_1774_);
v___x_1768_ = v___x_1766_;
v_isShared_1769_ = v_isSharedCheck_1773_;
goto v_resetjp_1767_;
}
else
{
lean_dec(v___x_1766_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1773_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1771_; 
if (v_isShared_1769_ == 0)
{
lean_ctor_set(v___x_1768_, 0, v___x_1763_);
v___x_1771_ = v___x_1768_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v___x_1763_);
v___x_1771_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
return v___x_1771_;
}
}
}
else
{
return v___x_1766_;
}
}
v___jp_1776_:
{
lean_object* v___x_1778_; 
v___x_1778_ = l_Lean_Syntax_getTailPos_x3f(v_a_1759_, v___x_1775_);
lean_dec(v_a_1759_);
if (lean_obj_tag(v___x_1778_) == 0)
{
lean_inc(v___y_1777_);
v___y_1761_ = v___y_1777_;
v___y_1762_ = v___y_1777_;
goto v___jp_1760_;
}
else
{
lean_object* v_val_1779_; 
v_val_1779_ = lean_ctor_get(v___x_1778_, 0);
lean_inc(v_val_1779_);
lean_dec_ref_known(v___x_1778_, 1);
v___y_1761_ = v___y_1777_;
v___y_1762_ = v_val_1779_;
goto v___jp_1760_;
}
}
}
else
{
lean_object* v_a_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1790_; 
lean_dec(v_a_1757_);
v_a_1783_ = lean_ctor_get(v___x_1758_, 0);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___x_1758_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1785_ = v___x_1758_;
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_a_1783_);
lean_dec(v___x_1758_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___x_1788_; 
if (v_isShared_1786_ == 0)
{
v___x_1788_ = v___x_1785_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_a_1783_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
return v___x_1788_;
}
}
}
}
else
{
lean_object* v_a_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1798_; 
v_a_1791_ = lean_ctor_get(v___x_1756_, 0);
v_isSharedCheck_1798_ = !lean_is_exclusive(v___x_1756_);
if (v_isSharedCheck_1798_ == 0)
{
v___x_1793_ = v___x_1756_;
v_isShared_1794_ = v_isSharedCheck_1798_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_a_1791_);
lean_dec(v___x_1756_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1798_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v___x_1796_; 
if (v_isShared_1794_ == 0)
{
v___x_1796_ = v___x_1793_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v_a_1791_);
v___x_1796_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
return v___x_1796_;
}
}
}
}
else
{
lean_object* v_a_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1806_; 
lean_dec(v_a_1752_);
v_a_1799_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1806_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1806_ == 0)
{
v___x_1801_ = v___x_1753_;
v_isShared_1802_ = v_isSharedCheck_1806_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_a_1799_);
lean_dec(v___x_1753_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1806_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v___x_1804_; 
if (v_isShared_1802_ == 0)
{
v___x_1804_ = v___x_1801_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v_a_1799_);
v___x_1804_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
return v___x_1804_;
}
}
}
}
else
{
lean_object* v_a_1807_; lean_object* v___x_1809_; uint8_t v_isShared_1810_; uint8_t v_isSharedCheck_1814_; 
lean_dec(v_post_1750_);
v_a_1807_ = lean_ctor_get(v___x_1751_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v___x_1751_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1809_ = v___x_1751_;
v_isShared_1810_ = v_isSharedCheck_1814_;
goto v_resetjp_1808_;
}
else
{
lean_inc(v_a_1807_);
lean_dec(v___x_1751_);
v___x_1809_ = lean_box(0);
v_isShared_1810_ = v_isSharedCheck_1814_;
goto v_resetjp_1808_;
}
v_resetjp_1808_:
{
lean_object* v___x_1812_; 
if (v_isShared_1810_ == 0)
{
v___x_1812_ = v___x_1809_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v_a_1807_);
v___x_1812_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
return v___x_1812_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces___boxed(lean_object* v_x_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_){
_start:
{
lean_object* v_res_1819_; 
v_res_1819_ = l_Lean_Elab_PostprocessTraces_elabPostprocessStoredTraces(v_x_1815_, v_a_1816_, v_a_1817_);
lean_dec(v_a_1817_);
lean_dec_ref(v_a_1816_);
return v_res_1819_;
}
}
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_PostprocessTraces_StoredTraces(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_PostprocessTraces_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_PostprocessTraces_StoredTraces(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_PostprocessTraces_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_initFn_00___x40_Lean_PostprocessTraces_StoredTraces_3838848863____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_storedTracesExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_PostprocessTraces_StoredTraces_0__Lean_PostprocessTraces_storedTracesExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_PostprocessTraces_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_PostprocessTraces_StoredTraces(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_PostprocessTraces_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PostprocessTraces_StoredTraces(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_PostprocessTraces_StoredTraces(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_PostprocessTraces_StoredTraces(builtin);
}
#ifdef __cplusplus
}
#endif
