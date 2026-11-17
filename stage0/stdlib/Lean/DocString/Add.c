// Lean compiler output
// Module: Lean.DocString.Add
// Imports: import Lean.Elab.DocString public import Lean.DocString.DeferredCheck public import Lean.DocString.Types import Lean.DocString.Parser public import Lean.Elab.Term.TermElabM
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
extern lean_object* l_Lean_Doc_deferredCheckExt;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Doc_Parser_BlockCtxt_forDocString(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserState(lean_object*);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lean_Doc_Parser_documentFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Doc_Parser_locateError(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_toString(lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_elabModSnippet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_DocM_execForModule___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getMainVersoModuleDocs(lean_object*);
lean_object* l_Lean_VersoModuleDocs_terminalNesting(lean_object*);
lean_object* l_Lean_TSyntax_getVersoBlocks(lean_object*);
lean_object* l_Lean_getMainModuleDoc(lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_addVersoModuleDocSnippet(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_Lean_versoDocStringExt;
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_TSyntax_getDocString(lean_object*);
lean_object* l_Lean_rewriteManualLinksCore(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_docStringExt;
lean_object* l_String_removeLeadingSpaces(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_FileMap_ofString(lean_object*);
lean_object* l_Lean_Core_getAndEmptyMessageLog___redArg(lean_object*);
lean_object* l_Lean_Core_setMessageLog___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Doc_elabBlocks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_DocM_exec___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_toArray(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_getDocStringText___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_instMonadEIO___aux__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Doc_parseFailureKind;
lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
uint8_t l_Lean_isVersoDocComment(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_findInternalDocString_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_removeBuiltinDocString(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage___closed__0 = (const lean_object*)&l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_document_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_document_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_parseFailure_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_parseFailure_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_stx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_stx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringView_of(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringView_of___boxed(lean_object*);
static const lean_string_object l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "The "};
static const lean_object* l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__0 = (const lean_object*)&l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__0_value;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__1;
static const lean_string_object l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = " of this documentation comment has no source location, so it cannot be parsed."};
static const lean_object* l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__2 = (const lean_object*)&l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__2_value;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_noSourceLocation(lean_object*);
static const lean_string_object l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "closing delimiter"};
static const lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__0 = (const lean_object*)&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__0_value;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__1;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2;
static const lean_string_object l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "content"};
static const lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__3 = (const lean_object*)&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__3_value;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__4;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5;
static const lean_string_object l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "opening delimiter"};
static const lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__6 = (const lean_object*)&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__6_value;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__7;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___boxed(lean_object*);
static const lean_string_object l_Lean_docStringRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "This documentation comment has an unexpected structure, so it cannot be parsed."};
static const lean_object* l_Lean_docStringRange___closed__0 = (const lean_object*)&l_Lean_docStringRange___closed__0_value;
static lean_once_cell_t l_Lean_docStringRange___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_docStringRange___closed__1;
static lean_once_cell_t l_Lean_docStringRange___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_docStringRange___closed__2;
LEAN_EXPORT lean_object* l_Lean_docStringRange(lean_object*);
LEAN_EXPORT lean_object* l_Lean_docStringRange___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocStringAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocStringAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_versoDocStringOfText___closed__0 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__0_value;
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringOfText___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_versoDocStringOfText___closed__1 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__1_value;
static const lean_closure_object l_Lean_versoDocStringOfText___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_documentFn, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_versoDocStringOfText___closed__1_value)} };
static const lean_object* l_Lean_versoDocStringOfText___closed__2 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__2_value;
static const lean_array_object l_Lean_versoDocStringOfText___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_versoDocStringOfText___closed__3 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__3_value;
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_versoDocStringOfText___closed__3_value),((lean_object*)&l_Lean_versoDocStringOfText___closed__3_value)}};
static const lean_object* l_Lean_versoDocStringOfText___closed__4 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__4_value;
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_versoDocStringOfText___closed__4_value),((lean_object*)&l_Lean_versoDocStringOfText___closed__3_value)}};
static const lean_object* l_Lean_versoDocStringOfText___closed__5 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_versoDocString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_versoDocString___closed__0 = (const lean_object*)&l_Lean_versoDocString___closed__0_value;
static const lean_string_object l_Lean_versoDocString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_versoDocString___closed__1 = (const lean_object*)&l_Lean_versoDocString___closed__1_value;
static const lean_string_object l_Lean_versoDocString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_versoDocString___closed__2 = (const lean_object*)&l_Lean_versoDocString___closed__2_value;
static const lean_string_object l_Lean_versoDocString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "versoCommentBody"};
static const lean_object* l_Lean_versoDocString___closed__3 = (const lean_object*)&l_Lean_versoDocString___closed__3_value;
static const lean_ctor_object l_Lean_versoDocString___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_versoDocString___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_versoDocString___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__4_value_aux_0),((lean_object*)&l_Lean_versoDocString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_versoDocString___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__4_value_aux_1),((lean_object*)&l_Lean_versoDocString___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_versoDocString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__4_value_aux_2),((lean_object*)&l_Lean_versoDocString___closed__3_value),LEAN_SCALAR_PTR_LITERAL(13, 150, 193, 173, 39, 149, 4, 235)}};
static const lean_object* l_Lean_versoDocString___closed__4 = (const lean_object*)&l_Lean_versoDocString___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_versoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoModDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoModDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_versoDocStringFromString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_versoDocStringFromString___closed__0 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__0_value;
static const lean_string_object l_Lean_versoDocStringFromString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_versoDocStringFromString___closed__1 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__1_value;
static const lean_ctor_object l_Lean_versoDocStringFromString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringFromString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_versoDocStringFromString___closed__2 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__2_value;
static const lean_ctor_object l_Lean_versoDocStringFromString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringFromString___closed__2_value),((lean_object*)&l_Lean_versoDocStringFromString___closed__0_value)}};
static const lean_object* l_Lean_versoDocStringFromString___closed__3 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__4(lean_object*, lean_object*);
static const lean_string_object l_Lean_addMarkdownDocString___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration `"};
static const lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_addMarkdownDocString___redArg___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__1;
static const lean_string_object l_Lean_addMarkdownDocString___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is in an imported module"};
static const lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__2 = (const lean_object*)&l_Lean_addMarkdownDocString___redArg___lam__5___closed__2_value;
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__3;
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__2_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__3 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__3_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__4 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__4_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__5 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__5_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__6 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__6_value;
static const lean_ctor_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1_value)}};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__7 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__7_value;
static const lean_ctor_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__7_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__2_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__3_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__4_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__5_value)}};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__8 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__8_value;
static const lean_ctor_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__8_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__6_value)}};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__9 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoDocStringCore___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration '"};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__4___closed__0 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__4___closed__0_value;
static const lean_string_object l_Lean_addVersoDocStringCore___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "' is in an imported module"};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__4___closed__1 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Error adding module docs: "};
static const lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "Can't add Verso-format module docs because there is already Markdown-format content present."};
static const lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__4;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1;
static const lean_string_object l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "commentBody"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringOf(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "invalid doc string removal, declaration `"};
static const lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0 = (const lean_object*)&l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_makeDocStringVerso___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Documentation for `"};
static const lean_object* l_Lean_makeDocStringVerso___closed__0 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__0_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__1;
static const lean_string_object l_Lean_makeDocStringVerso___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "` is already in Verso format"};
static const lean_object* l_Lean_makeDocStringVerso___closed__2 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__2_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__3;
static const lean_string_object l_Lean_makeDocStringVerso___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "No documentation found for `"};
static const lean_object* l_Lean_makeDocStringVerso___closed__4 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__4_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__5;
static const lean_string_object l_Lean_makeDocStringVerso___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_makeDocStringVerso___closed__6 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__6_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__7;
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__0(lean_object* v_toPure_1_, lean_object* v_____s_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_box(0);
v___x_4_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__1(lean_object* v___x_5_, lean_object* v_toPure_6_, lean_object* v_r_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_5_);
v___x_9_ = lean_apply_2(v_toPure_6_, lean_box(0), v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3(lean_object* v___y_10_, lean_object* v_str_11_, lean_object* v_inst_12_, lean_object* v_inst_13_, lean_object* v_inst_14_, lean_object* v_inst_15_, lean_object* v_toBind_16_, lean_object* v___f_17_, lean_object* v___f_18_, lean_object* v_a_19_, lean_object* v_x_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_fst_22_; 
v_fst_22_ = lean_ctor_get(v_a_19_, 0);
lean_inc(v_fst_22_);
if (lean_obj_tag(v___y_10_) == 1)
{
lean_object* v_snd_23_; lean_object* v_start_24_; lean_object* v_stop_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_48_; 
lean_dec(v___f_18_);
v_snd_23_ = lean_ctor_get(v_a_19_, 1);
lean_inc(v_snd_23_);
lean_dec_ref(v_a_19_);
v_start_24_ = lean_ctor_get(v_fst_22_, 0);
v_stop_25_ = lean_ctor_get(v_fst_22_, 1);
v_isSharedCheck_48_ = !lean_is_exclusive(v_fst_22_);
if (v_isSharedCheck_48_ == 0)
{
v___x_27_ = v_fst_22_;
v_isShared_28_ = v_isSharedCheck_48_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_stop_25_);
lean_inc(v_start_24_);
lean_dec(v_fst_22_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_48_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v_val_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_47_; 
v_val_29_ = lean_ctor_get(v___y_10_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___y_10_);
if (v_isSharedCheck_47_ == 0)
{
v___x_31_ = v___y_10_;
v_isShared_32_ = v_isSharedCheck_47_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_val_29_);
lean_dec(v___y_10_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_47_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; lean_object* v___x_34_; uint8_t v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_33_ = lean_nat_add(v_val_29_, v_start_24_);
v___x_34_ = lean_nat_add(v_val_29_, v_stop_25_);
lean_dec(v_val_29_);
v___x_35_ = 0;
v___x_36_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_36_, 0, v___x_33_);
lean_ctor_set(v___x_36_, 1, v___x_34_);
lean_ctor_set_uint8(v___x_36_, sizeof(void*)*2, v___x_35_);
v___x_37_ = lean_string_utf8_extract(v_str_11_, v_start_24_, v_stop_25_);
lean_dec(v_stop_25_);
lean_dec(v_start_24_);
if (v_isShared_28_ == 0)
{
lean_ctor_set_tag(v___x_27_, 2);
lean_ctor_set(v___x_27_, 1, v___x_37_);
lean_ctor_set(v___x_27_, 0, v___x_36_);
v___x_39_ = v___x_27_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v___x_36_);
lean_ctor_set(v_reuseFailAlloc_46_, 1, v___x_37_);
v___x_39_ = v_reuseFailAlloc_46_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
lean_object* v___x_41_; 
if (v_isShared_32_ == 0)
{
lean_ctor_set_tag(v___x_31_, 3);
lean_ctor_set(v___x_31_, 0, v_snd_23_);
v___x_41_ = v___x_31_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_snd_23_);
v___x_41_ = v_reuseFailAlloc_45_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = l_Lean_MessageData_ofFormat(v___x_41_);
v___x_43_ = l_Lean_logErrorAt___redArg(v_inst_12_, v_inst_13_, v_inst_14_, v_inst_15_, v___x_39_, v___x_42_);
v___x_44_ = lean_apply_4(v_toBind_16_, lean_box(0), lean_box(0), v___x_43_, v___f_17_);
return v___x_44_;
}
}
}
}
}
else
{
lean_object* v_snd_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
lean_dec(v_fst_22_);
lean_dec(v___f_17_);
lean_dec(v___y_10_);
v_snd_49_ = lean_ctor_get(v_a_19_, 1);
lean_inc(v_snd_49_);
lean_dec_ref(v_a_19_);
v___x_50_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_50_, 0, v_snd_49_);
v___x_51_ = l_Lean_MessageData_ofFormat(v___x_50_);
v___x_52_ = l_Lean_logError___redArg(v_inst_12_, v_inst_13_, v_inst_14_, v_inst_15_, v___x_51_);
v___x_53_ = lean_apply_4(v_toBind_16_, lean_box(0), lean_box(0), v___x_52_, v___f_18_);
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3___boxed(lean_object* v___y_54_, lean_object* v_str_55_, lean_object* v_inst_56_, lean_object* v_inst_57_, lean_object* v_inst_58_, lean_object* v_inst_59_, lean_object* v_toBind_60_, lean_object* v___f_61_, lean_object* v___f_62_, lean_object* v_a_63_, lean_object* v_x_64_, lean_object* v___y_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_validateDocComment___redArg___lam__3(v___y_54_, v_str_55_, v_inst_56_, v_inst_57_, v_inst_58_, v_inst_59_, v_toBind_60_, v___f_61_, v___f_62_, v_a_63_, v_x_64_, v___y_65_);
lean_dec_ref(v_str_55_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__2(lean_object* v_toPure_67_, lean_object* v___y_68_, lean_object* v_str_69_, lean_object* v_inst_70_, lean_object* v_inst_71_, lean_object* v_inst_72_, lean_object* v_inst_73_, lean_object* v_toBind_74_, lean_object* v___f_75_, lean_object* v_____x_76_){
_start:
{
lean_object* v_fst_77_; lean_object* v___x_78_; lean_object* v___f_79_; lean_object* v___f_80_; size_t v_sz_81_; size_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_fst_77_ = lean_ctor_get(v_____x_76_, 0);
lean_inc(v_fst_77_);
lean_dec_ref(v_____x_76_);
v___x_78_ = lean_box(0);
v___f_79_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__1), 3, 2);
lean_closure_set(v___f_79_, 0, v___x_78_);
lean_closure_set(v___f_79_, 1, v_toPure_67_);
lean_inc_ref(v___f_79_);
lean_inc(v_toBind_74_);
lean_inc_ref(v_inst_70_);
v___f_80_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__3___boxed), 12, 9);
lean_closure_set(v___f_80_, 0, v___y_68_);
lean_closure_set(v___f_80_, 1, v_str_69_);
lean_closure_set(v___f_80_, 2, v_inst_70_);
lean_closure_set(v___f_80_, 3, v_inst_71_);
lean_closure_set(v___f_80_, 4, v_inst_72_);
lean_closure_set(v___f_80_, 5, v_inst_73_);
lean_closure_set(v___f_80_, 6, v_toBind_74_);
lean_closure_set(v___f_80_, 7, v___f_79_);
lean_closure_set(v___f_80_, 8, v___f_79_);
v_sz_81_ = lean_array_size(v_fst_77_);
v___x_82_ = ((size_t)0ULL);
v___x_83_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_70_, v_fst_77_, v___f_80_, v_sz_81_, v___x_82_, v___x_78_);
v___x_84_ = lean_apply_4(v_toBind_74_, lean_box(0), lean_box(0), v___x_83_, v___f_75_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg(lean_object* v_inst_85_, lean_object* v_inst_86_, lean_object* v_inst_87_, lean_object* v_inst_88_, lean_object* v_inst_89_, lean_object* v_docstring_90_){
_start:
{
lean_object* v_toApplicative_91_; lean_object* v_toBind_92_; lean_object* v_toPure_93_; lean_object* v_str_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___f_98_; lean_object* v___y_100_; 
v_toApplicative_91_ = lean_ctor_get(v_inst_85_, 0);
v_toBind_92_ = lean_ctor_get(v_inst_85_, 1);
lean_inc(v_toBind_92_);
v_toPure_93_ = lean_ctor_get(v_toApplicative_91_, 1);
lean_inc_n(v_toPure_93_, 2);
v_str_94_ = l_Lean_TSyntax_getDocString(v_docstring_90_);
v___x_95_ = lean_unsigned_to_nat(1u);
v___x_96_ = l_Lean_Syntax_getArg(v_docstring_90_, v___x_95_);
v___x_97_ = l_Lean_Syntax_getHeadInfo_x3f(v___x_96_);
lean_dec(v___x_96_);
v___f_98_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__0), 2, 1);
lean_closure_set(v___f_98_, 0, v_toPure_93_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v___x_106_; 
v___x_106_ = lean_box(0);
v___y_100_ = v___x_106_;
goto v___jp_99_;
}
else
{
lean_object* v_val_107_; uint8_t v___x_108_; lean_object* v___x_109_; 
v_val_107_ = lean_ctor_get(v___x_97_, 0);
lean_inc(v_val_107_);
lean_dec_ref_known(v___x_97_, 1);
v___x_108_ = 0;
v___x_109_ = l_Lean_SourceInfo_getPos_x3f(v_val_107_, v___x_108_);
lean_dec(v_val_107_);
v___y_100_ = v___x_109_;
goto v___jp_99_;
}
v___jp_99_:
{
lean_object* v___f_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
lean_inc(v_toBind_92_);
lean_inc_ref(v_str_94_);
v___f_101_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__2), 10, 9);
lean_closure_set(v___f_101_, 0, v_toPure_93_);
lean_closure_set(v___f_101_, 1, v___y_100_);
lean_closure_set(v___f_101_, 2, v_str_94_);
lean_closure_set(v___f_101_, 3, v_inst_85_);
lean_closure_set(v___f_101_, 4, v_inst_87_);
lean_closure_set(v___f_101_, 5, v_inst_88_);
lean_closure_set(v___f_101_, 6, v_inst_89_);
lean_closure_set(v___f_101_, 7, v_toBind_92_);
lean_closure_set(v___f_101_, 8, v___f_98_);
v___x_102_ = l_Lean_rewriteManualLinksCore(v_str_94_);
v___x_103_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__5___boxed), 4, 3);
lean_closure_set(v___x_103_, 0, lean_box(0));
lean_closure_set(v___x_103_, 1, lean_box(0));
lean_closure_set(v___x_103_, 2, v___x_102_);
v___x_104_ = lean_apply_2(v_inst_86_, lean_box(0), v___x_103_);
v___x_105_ = lean_apply_4(v_toBind_92_, lean_box(0), lean_box(0), v___x_104_, v___f_101_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___boxed(lean_object* v_inst_110_, lean_object* v_inst_111_, lean_object* v_inst_112_, lean_object* v_inst_113_, lean_object* v_inst_114_, lean_object* v_docstring_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lean_validateDocComment___redArg(v_inst_110_, v_inst_111_, v_inst_112_, v_inst_113_, v_inst_114_, v_docstring_115_);
lean_dec(v_docstring_115_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment(lean_object* v_m_117_, lean_object* v_inst_118_, lean_object* v_inst_119_, lean_object* v_inst_120_, lean_object* v_inst_121_, lean_object* v_inst_122_, lean_object* v_docstring_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lean_validateDocComment___redArg(v_inst_118_, v_inst_119_, v_inst_120_, v_inst_121_, v_inst_122_, v_docstring_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___boxed(lean_object* v_m_125_, lean_object* v_inst_126_, lean_object* v_inst_127_, lean_object* v_inst_128_, lean_object* v_inst_129_, lean_object* v_inst_130_, lean_object* v_docstring_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Lean_validateDocComment(v_m_125_, v_inst_126_, v_inst_127_, v_inst_128_, v_inst_129_, v_inst_130_, v_docstring_131_);
lean_dec(v_docstring_131_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage(lean_object* v_ictx_134_, lean_object* v_pos_135_, lean_object* v_e_136_){
_start:
{
lean_object* v___x_137_; lean_object* v_snd_138_; lean_object* v_fst_139_; lean_object* v_fst_140_; lean_object* v_snd_141_; lean_object* v_fileName_142_; lean_object* v_fileMap_143_; lean_object* v___x_144_; lean_object* v___y_146_; 
v___x_137_ = l_Lean_Doc_Parser_locateError(v_ictx_134_, v_pos_135_, v_e_136_);
v_snd_138_ = lean_ctor_get(v___x_137_, 1);
lean_inc(v_snd_138_);
v_fst_139_ = lean_ctor_get(v___x_137_, 0);
lean_inc(v_fst_139_);
lean_dec_ref(v___x_137_);
v_fst_140_ = lean_ctor_get(v_snd_138_, 0);
lean_inc(v_fst_140_);
v_snd_141_ = lean_ctor_get(v_snd_138_, 1);
lean_inc(v_snd_141_);
lean_dec(v_snd_138_);
v_fileName_142_ = lean_ctor_get(v_ictx_134_, 1);
lean_inc_ref(v_fileName_142_);
v_fileMap_143_ = lean_ctor_get(v_ictx_134_, 2);
lean_inc_ref_n(v_fileMap_143_, 2);
lean_dec_ref(v_ictx_134_);
v___x_144_ = l_Lean_FileMap_toPosition(v_fileMap_143_, v_fst_139_);
lean_dec(v_fst_139_);
if (lean_obj_tag(v_fst_140_) == 0)
{
lean_object* v___x_155_; 
lean_dec_ref(v_fileMap_143_);
v___x_155_ = lean_box(0);
v___y_146_ = v___x_155_;
goto v___jp_145_;
}
else
{
lean_object* v_val_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_164_; 
v_val_156_ = lean_ctor_get(v_fst_140_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v_fst_140_);
if (v_isSharedCheck_164_ == 0)
{
v___x_158_ = v_fst_140_;
v_isShared_159_ = v_isSharedCheck_164_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_val_156_);
lean_dec(v_fst_140_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_164_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_160_ = l_Lean_FileMap_toPosition(v_fileMap_143_, v_val_156_);
lean_dec(v_val_156_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 0, v___x_160_);
v___x_162_ = v___x_158_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v___x_160_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
v___y_146_ = v___x_162_;
goto v___jp_145_;
}
}
}
v___jp_145_:
{
uint8_t v___x_147_; uint8_t v___x_148_; uint8_t v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_147_ = 1;
v___x_148_ = 2;
v___x_149_ = 0;
v___x_150_ = ((lean_object*)(l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage___closed__0));
v___x_151_ = l_Lean_Parser_Error_toString(v_snd_141_);
v___x_152_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
v___x_153_ = l_Lean_MessageData_ofFormat(v___x_152_);
v___x_154_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_154_, 0, v_fileName_142_);
lean_ctor_set(v___x_154_, 1, v___x_144_);
lean_ctor_set(v___x_154_, 2, v___y_146_);
lean_ctor_set(v___x_154_, 3, v___x_150_);
lean_ctor_set(v___x_154_, 4, v___x_153_);
lean_ctor_set_uint8(v___x_154_, sizeof(void*)*5, v___x_147_);
lean_ctor_set_uint8(v___x_154_, sizeof(void*)*5 + 1, v___x_148_);
lean_ctor_set_uint8(v___x_154_, sizeof(void*)*5 + 2, v___x_149_);
return v___x_154_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorIdx___impl(lean_object* v_x_165_){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lean_obj_tag_nat(v_x_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorIdx___impl___boxed(lean_object* v_x_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_VersoDocstringMarkup_ctorIdx___impl(v_x_167_);
lean_dec_ref(v_x_167_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorElim___redArg(lean_object* v_t_169_, lean_object* v_k_170_){
_start:
{
lean_object* v_doc_171_; lean_object* v___x_172_; 
v_doc_171_ = lean_ctor_get(v_t_169_, 0);
lean_inc(v_doc_171_);
lean_dec_ref(v_t_169_);
v___x_172_ = lean_apply_1(v_k_170_, v_doc_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorElim(lean_object* v_motive_173_, lean_object* v_ctorIdx_174_, lean_object* v_t_175_, lean_object* v_h_176_, lean_object* v_k_177_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l_Lean_VersoDocstringMarkup_ctorElim___redArg(v_t_175_, v_k_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorElim___boxed(lean_object* v_motive_179_, lean_object* v_ctorIdx_180_, lean_object* v_t_181_, lean_object* v_h_182_, lean_object* v_k_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lean_VersoDocstringMarkup_ctorElim(v_motive_179_, v_ctorIdx_180_, v_t_181_, v_h_182_, v_k_183_);
lean_dec(v_ctorIdx_180_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_document_elim___redArg(lean_object* v_t_185_, lean_object* v_document_186_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l_Lean_VersoDocstringMarkup_ctorElim___redArg(v_t_185_, v_document_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_document_elim(lean_object* v_motive_188_, lean_object* v_t_189_, lean_object* v_h_190_, lean_object* v_document_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = l_Lean_VersoDocstringMarkup_ctorElim___redArg(v_t_189_, v_document_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_parseFailure_elim___redArg(lean_object* v_t_193_, lean_object* v_parseFailure_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l_Lean_VersoDocstringMarkup_ctorElim___redArg(v_t_193_, v_parseFailure_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_parseFailure_elim(lean_object* v_motive_196_, lean_object* v_t_197_, lean_object* v_h_198_, lean_object* v_parseFailure_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l_Lean_VersoDocstringMarkup_ctorElim___redArg(v_t_197_, v_parseFailure_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_stx(lean_object* v_x_201_){
_start:
{
lean_object* v_doc_202_; 
v_doc_202_ = lean_ctor_get(v_x_201_, 0);
lean_inc(v_doc_202_);
return v_doc_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_stx___boxed(lean_object* v_x_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lean_VersoDocstringMarkup_stx(v_x_203_);
lean_dec_ref(v_x_203_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringView_of(lean_object* v_docComment_205_){
_start:
{
lean_object* v___x_206_; lean_object* v_body_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___y_211_; lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_206_ = lean_unsigned_to_nat(1u);
v_body_207_ = l_Lean_Syntax_getArg(v_docComment_205_, v___x_206_);
v___x_208_ = lean_unsigned_to_nat(0u);
v___x_209_ = l_Lean_Syntax_getArg(v_docComment_205_, v___x_208_);
v___x_214_ = l_Lean_Syntax_getArg(v_body_207_, v___x_208_);
v___x_215_ = l_Lean_Doc_parseFailureKind;
lean_inc(v___x_214_);
v___x_216_ = l_Lean_Syntax_isOfKind(v___x_214_, v___x_215_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; 
v___x_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_214_);
v___y_211_ = v___x_217_;
goto v___jp_210_;
}
else
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = l_Lean_Syntax_getArg(v___x_214_, v___x_208_);
lean_dec(v___x_214_);
v___x_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
v___y_211_ = v___x_219_;
goto v___jp_210_;
}
v___jp_210_:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = l_Lean_Syntax_getArg(v_body_207_, v___x_206_);
lean_dec(v_body_207_);
v___x_213_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_213_, 0, v___x_209_);
lean_ctor_set(v___x_213_, 1, v___y_211_);
lean_ctor_set(v___x_213_, 2, v___x_212_);
return v___x_213_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringView_of___boxed(lean_object* v_docComment_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lean_VersoDocstringView_of(v_docComment_220_);
lean_dec(v_docComment_220_);
return v_res_221_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__1(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = ((lean_object*)(l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__0));
v___x_224_ = l_Lean_stringToMessageData(v___x_223_);
return v___x_224_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__3(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = ((lean_object*)(l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__2));
v___x_227_ = l_Lean_stringToMessageData(v___x_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_noSourceLocation(lean_object* v_what_228_){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_229_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__1, &l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__1_once, _init_l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__1);
v___x_230_ = l_Lean_stringToMessageData(v_what_228_);
v___x_231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__3, &l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__3_once, _init_l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__3);
v___x_233_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_231_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
return v___x_233_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__1(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = ((lean_object*)(l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__0));
v___x_236_ = l___private_Lean_DocString_Add_0__Lean_noSourceLocation(v___x_235_);
return v___x_236_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2(void){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__1, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__1_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__1);
v___x_238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
return v___x_238_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__4(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = ((lean_object*)(l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__3));
v___x_241_ = l___private_Lean_DocString_Add_0__Lean_noSourceLocation(v___x_240_);
return v___x_241_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__4, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__4_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__4);
v___x_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
return v___x_243_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__7(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = ((lean_object*)(l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__6));
v___x_246_ = l___private_Lean_DocString_Add_0__Lean_noSourceLocation(v___x_245_);
return v___x_246_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__7, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__7_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__7);
v___x_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange(lean_object* v_view_249_){
_start:
{
lean_object* v_opener_250_; lean_object* v_markup_251_; lean_object* v_closer_252_; uint8_t v___x_253_; lean_object* v___x_254_; 
v_opener_250_ = lean_ctor_get(v_view_249_, 0);
v_markup_251_ = lean_ctor_get(v_view_249_, 1);
v_closer_252_ = lean_ctor_get(v_view_249_, 2);
v___x_253_ = 1;
v___x_254_ = l_Lean_Syntax_getPos_x3f(v_opener_250_, v___x_253_);
if (lean_obj_tag(v___x_254_) == 1)
{
lean_object* v_val_255_; lean_object* v___y_257_; lean_object* v_doc_273_; 
v_val_255_ = lean_ctor_get(v___x_254_, 0);
lean_inc(v_val_255_);
lean_dec_ref_known(v___x_254_, 1);
v_doc_273_ = lean_ctor_get(v_markup_251_, 0);
v___y_257_ = v_doc_273_;
goto v___jp_256_;
v___jp_256_:
{
lean_object* v___x_258_; 
v___x_258_ = l_Lean_Syntax_getPos_x3f(v___y_257_, v___x_253_);
if (lean_obj_tag(v___x_258_) == 1)
{
lean_object* v_val_259_; lean_object* v___x_260_; 
v_val_259_ = lean_ctor_get(v___x_258_, 0);
lean_inc(v_val_259_);
lean_dec_ref_known(v___x_258_, 1);
v___x_260_ = l_Lean_Syntax_getPos_x3f(v_closer_252_, v___x_253_);
if (lean_obj_tag(v___x_260_) == 1)
{
lean_object* v_val_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_270_; 
v_val_261_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_270_ == 0)
{
v___x_263_ = v___x_260_;
v_isShared_264_ = v_isSharedCheck_270_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_val_261_);
lean_dec(v___x_260_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_270_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_268_; 
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v_val_259_);
lean_ctor_set(v___x_265_, 1, v_val_261_);
v___x_266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_266_, 0, v_val_255_);
lean_ctor_set(v___x_266_, 1, v___x_265_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 0, v___x_266_);
v___x_268_ = v___x_263_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v___x_266_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
else
{
lean_object* v___x_271_; 
lean_dec(v___x_260_);
lean_dec(v_val_259_);
lean_dec(v_val_255_);
v___x_271_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2);
return v___x_271_;
}
}
else
{
lean_object* v___x_272_; 
lean_dec(v___x_258_);
lean_dec(v_val_255_);
v___x_272_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5);
return v___x_272_;
}
}
}
else
{
lean_object* v___x_274_; 
lean_dec(v___x_254_);
v___x_274_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8);
return v___x_274_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___boxed(lean_object* v_view_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l___private_Lean_DocString_Add_0__Lean_docCommentRange(v_view_275_);
lean_dec_ref(v_view_275_);
return v_res_276_;
}
}
static lean_object* _init_l_Lean_docStringRange___closed__1(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = ((lean_object*)(l_Lean_docStringRange___closed__0));
v___x_279_ = l_Lean_stringToMessageData(v___x_278_);
return v___x_279_;
}
}
static lean_object* _init_l_Lean_docStringRange___closed__2(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = lean_obj_once(&l_Lean_docStringRange___closed__1, &l_Lean_docStringRange___closed__1_once, _init_l_Lean_docStringRange___closed__1);
v___x_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_docStringRange(lean_object* v_docComment_282_){
_start:
{
if (lean_obj_tag(v_docComment_282_) == 1)
{
lean_object* v_args_285_; lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v_args_285_ = lean_ctor_get(v_docComment_282_, 2);
v___x_286_ = lean_array_get_size(v_args_285_);
v___x_287_ = lean_unsigned_to_nat(2u);
v___x_288_ = lean_nat_dec_eq(v___x_286_, v___x_287_);
if (v___x_288_ == 0)
{
goto v___jp_283_;
}
else
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = lean_unsigned_to_nat(1u);
v___x_290_ = lean_array_fget_borrowed(v_args_285_, v___x_289_);
if (lean_obj_tag(v___x_290_) == 1)
{
lean_object* v_args_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v_args_291_ = lean_ctor_get(v___x_290_, 2);
v___x_292_ = lean_array_get_size(v_args_291_);
v___x_293_ = lean_nat_dec_eq(v___x_292_, v___x_287_);
if (v___x_293_ == 0)
{
goto v___jp_283_;
}
else
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_294_ = lean_unsigned_to_nat(0u);
v___x_295_ = lean_array_fget_borrowed(v_args_285_, v___x_294_);
v___x_296_ = l_Lean_Syntax_getPos_x3f(v___x_295_, v___x_293_);
if (lean_obj_tag(v___x_296_) == 1)
{
lean_object* v_val_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v_val_297_ = lean_ctor_get(v___x_296_, 0);
lean_inc(v_val_297_);
lean_dec_ref_known(v___x_296_, 1);
v___x_298_ = lean_array_fget_borrowed(v_args_291_, v___x_294_);
v___x_299_ = l_Lean_Syntax_getPos_x3f(v___x_298_, v___x_293_);
if (lean_obj_tag(v___x_299_) == 1)
{
lean_object* v_val_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v_val_300_ = lean_ctor_get(v___x_299_, 0);
lean_inc(v_val_300_);
lean_dec_ref_known(v___x_299_, 1);
v___x_301_ = lean_array_fget_borrowed(v_args_291_, v___x_289_);
v___x_302_ = l_Lean_Syntax_getPos_x3f(v___x_301_, v___x_293_);
if (lean_obj_tag(v___x_302_) == 1)
{
lean_object* v_val_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_312_; 
v_val_303_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_312_ == 0)
{
v___x_305_ = v___x_302_;
v_isShared_306_ = v_isSharedCheck_312_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_val_303_);
lean_dec(v___x_302_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_312_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_310_; 
v___x_307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_307_, 0, v_val_300_);
lean_ctor_set(v___x_307_, 1, v_val_303_);
v___x_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_308_, 0, v_val_297_);
lean_ctor_set(v___x_308_, 1, v___x_307_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_308_);
v___x_310_ = v___x_305_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v___x_308_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
else
{
lean_object* v___x_313_; 
lean_dec(v___x_302_);
lean_dec(v_val_300_);
lean_dec(v_val_297_);
v___x_313_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2);
return v___x_313_;
}
}
else
{
lean_object* v___x_314_; 
lean_dec(v___x_299_);
lean_dec(v_val_297_);
v___x_314_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5);
return v___x_314_;
}
}
else
{
lean_object* v___x_315_; 
lean_dec(v___x_296_);
v___x_315_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8);
return v___x_315_;
}
}
}
else
{
goto v___jp_283_;
}
}
}
else
{
goto v___jp_283_;
}
v___jp_283_:
{
lean_object* v___x_284_; 
v___x_284_ = lean_obj_once(&l_Lean_docStringRange___closed__2, &l_Lean_docStringRange___closed__2_once, _init_l_Lean_docStringRange___closed__2);
return v___x_284_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_docStringRange___boxed(lean_object* v_docComment_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lean_docStringRange(v_docComment_316_);
lean_dec(v_docComment_316_);
return v_res_317_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0(uint8_t v___x_326_, lean_object* v_x_327_){
_start:
{
if (lean_obj_tag(v_x_327_) == 1)
{
lean_object* v_pre_328_; 
v_pre_328_ = lean_ctor_get(v_x_327_, 0);
switch(lean_obj_tag(v_pre_328_))
{
case 1:
{
lean_object* v_pre_329_; 
v_pre_329_ = lean_ctor_get(v_pre_328_, 0);
switch(lean_obj_tag(v_pre_329_))
{
case 0:
{
lean_object* v_str_330_; lean_object* v_str_331_; lean_object* v___x_332_; uint8_t v___x_333_; 
v_str_330_ = lean_ctor_get(v_x_327_, 1);
v_str_331_ = lean_ctor_get(v_pre_328_, 1);
v___x_332_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__0));
v___x_333_ = lean_string_dec_eq(v_str_331_, v___x_332_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_334_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__1));
v___x_335_ = lean_string_dec_eq(v_str_331_, v___x_334_);
if (v___x_335_ == 0)
{
return v___x_335_;
}
else
{
lean_object* v___x_336_; uint8_t v___x_337_; 
v___x_336_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__2));
v___x_337_ = lean_string_dec_eq(v_str_330_, v___x_336_);
return v___x_337_;
}
}
else
{
lean_object* v___x_338_; uint8_t v___x_339_; 
v___x_338_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__3));
v___x_339_ = lean_string_dec_eq(v_str_330_, v___x_338_);
return v___x_339_;
}
}
case 1:
{
lean_object* v_pre_340_; 
v_pre_340_ = lean_ctor_get(v_pre_329_, 0);
if (lean_obj_tag(v_pre_340_) == 0)
{
lean_object* v_str_341_; lean_object* v_str_342_; lean_object* v_str_343_; lean_object* v___x_344_; uint8_t v___x_345_; 
v_str_341_ = lean_ctor_get(v_x_327_, 1);
v_str_342_ = lean_ctor_get(v_pre_328_, 1);
v_str_343_ = lean_ctor_get(v_pre_329_, 1);
v___x_344_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__4));
v___x_345_ = lean_string_dec_eq(v_str_343_, v___x_344_);
if (v___x_345_ == 0)
{
return v___x_345_;
}
else
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__5));
v___x_347_ = lean_string_dec_eq(v_str_342_, v___x_346_);
if (v___x_347_ == 0)
{
return v___x_347_;
}
else
{
lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__6));
v___x_349_ = lean_string_dec_eq(v_str_341_, v___x_348_);
return v___x_349_;
}
}
}
else
{
return v___x_326_;
}
}
default: 
{
return v___x_326_;
}
}
}
case 0:
{
lean_object* v_str_350_; lean_object* v___x_351_; uint8_t v___x_352_; 
v_str_350_ = lean_ctor_get(v_x_327_, 1);
v___x_351_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__7));
v___x_352_ = lean_string_dec_eq(v_str_350_, v___x_351_);
return v___x_352_;
}
default: 
{
return v___x_326_;
}
}
}
else
{
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___boxed(lean_object* v___x_353_, lean_object* v_x_354_){
_start:
{
uint8_t v___x_3801__boxed_355_; uint8_t v_res_356_; lean_object* v_r_357_; 
v___x_3801__boxed_355_ = lean_unbox(v___x_353_);
v_res_356_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0(v___x_3801__boxed_355_, v_x_354_);
lean_dec(v_x_354_);
v_r_357_ = lean_box(v_res_356_);
return v_r_357_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0(lean_object* v___x_358_, lean_object* v___x_359_, lean_object* v_as_360_, size_t v_sz_361_, size_t v_i_362_, lean_object* v_b_363_, lean_object* v___y_364_, lean_object* v___y_365_){
_start:
{
lean_object* v_a_368_; uint8_t v___x_372_; 
v___x_372_ = lean_usize_dec_lt(v_i_362_, v_sz_361_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; 
lean_dec_ref(v___x_358_);
v___x_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_373_, 0, v_b_363_);
return v___x_373_;
}
else
{
lean_object* v_a_374_; lean_object* v_snd_375_; lean_object* v_fst_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_442_; 
v_a_374_ = lean_array_uget(v_as_360_, v_i_362_);
v_snd_375_ = lean_ctor_get(v_a_374_, 1);
v_fst_376_ = lean_ctor_get(v_a_374_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v_a_374_);
if (v_isSharedCheck_442_ == 0)
{
v___x_378_ = v_a_374_;
v_isShared_379_ = v_isSharedCheck_442_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_snd_375_);
lean_inc(v_fst_376_);
lean_dec(v_a_374_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_442_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v_snd_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_440_; 
v_snd_380_ = lean_ctor_get(v_snd_375_, 1);
v_isSharedCheck_440_ = !lean_is_exclusive(v_snd_375_);
if (v_isSharedCheck_440_ == 0)
{
lean_object* v_unused_441_; 
v_unused_441_ = lean_ctor_get(v_snd_375_, 0);
lean_dec(v_unused_441_);
v___x_382_ = v_snd_375_;
v_isShared_383_ = v_isSharedCheck_440_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_snd_380_);
lean_dec(v_snd_375_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_440_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
uint8_t v_suppressElabErrors_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___y_388_; lean_object* v___y_389_; 
v_suppressElabErrors_384_ = lean_ctor_get_uint8(v___y_364_, sizeof(void*)*3 + 2);
v___x_385_ = lean_box(0);
lean_inc_ref(v___x_358_);
v___x_386_ = l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage(v___x_358_, v_fst_376_, v_snd_380_);
if (v_suppressElabErrors_384_ == 0)
{
v___y_388_ = v___y_364_;
v___y_389_ = v___y_365_;
goto v___jp_387_;
}
else
{
lean_object* v_data_434_; lean_object* v___x_435_; uint8_t v___x_436_; lean_object* v___x_437_; lean_object* v___f_438_; uint8_t v___x_439_; 
v_data_434_ = lean_ctor_get(v___x_386_, 4);
v___x_435_ = lean_unsigned_to_nat(0u);
v___x_436_ = lean_nat_dec_eq(v___x_359_, v___x_435_);
v___x_437_ = lean_box(v___x_436_);
v___f_438_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_438_, 0, v___x_437_);
lean_inc(v_data_434_);
v___x_439_ = l_Lean_MessageData_hasTag(v___f_438_, v_data_434_);
if (v___x_439_ == 0)
{
lean_dec_ref(v___x_386_);
lean_del_object(v___x_382_);
lean_del_object(v___x_378_);
v_a_368_ = v___x_385_;
goto v___jp_367_;
}
else
{
v___y_388_ = v___y_364_;
v___y_389_ = v___y_365_;
goto v___jp_387_;
}
}
v___jp_387_:
{
lean_object* v_toCold_390_; lean_object* v_fileName_391_; lean_object* v_pos_392_; lean_object* v_endPos_393_; uint8_t v_keepFullRange_394_; uint8_t v_severity_395_; uint8_t v_isSilent_396_; lean_object* v_caption_397_; lean_object* v_data_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_433_; 
v_toCold_390_ = lean_ctor_get(v___y_388_, 0);
v_fileName_391_ = lean_ctor_get(v___x_386_, 0);
v_pos_392_ = lean_ctor_get(v___x_386_, 1);
v_endPos_393_ = lean_ctor_get(v___x_386_, 2);
v_keepFullRange_394_ = lean_ctor_get_uint8(v___x_386_, sizeof(void*)*5);
v_severity_395_ = lean_ctor_get_uint8(v___x_386_, sizeof(void*)*5 + 1);
v_isSilent_396_ = lean_ctor_get_uint8(v___x_386_, sizeof(void*)*5 + 2);
v_caption_397_ = lean_ctor_get(v___x_386_, 3);
v_data_398_ = lean_ctor_get(v___x_386_, 4);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_386_);
if (v_isSharedCheck_433_ == 0)
{
v___x_400_ = v___x_386_;
v_isShared_401_ = v_isSharedCheck_433_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_data_398_);
lean_inc(v_caption_397_);
lean_inc(v_endPos_393_);
lean_inc(v_pos_392_);
lean_inc(v_fileName_391_);
lean_dec(v___x_386_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_433_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v_currNamespace_402_; lean_object* v_openDecls_403_; lean_object* v___x_405_; 
v_currNamespace_402_ = lean_ctor_get(v_toCold_390_, 4);
v_openDecls_403_ = lean_ctor_get(v_toCold_390_, 5);
lean_inc(v_openDecls_403_);
lean_inc(v_currNamespace_402_);
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 1, v_openDecls_403_);
lean_ctor_set(v___x_382_, 0, v_currNamespace_402_);
v___x_405_ = v___x_382_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_currNamespace_402_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v_openDecls_403_);
v___x_405_ = v_reuseFailAlloc_432_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
lean_object* v___x_407_; 
if (v_isShared_379_ == 0)
{
lean_ctor_set_tag(v___x_378_, 4);
lean_ctor_set(v___x_378_, 1, v_data_398_);
lean_ctor_set(v___x_378_, 0, v___x_405_);
v___x_407_ = v___x_378_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v___x_405_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_data_398_);
v___x_407_ = v_reuseFailAlloc_431_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
lean_object* v___x_409_; 
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 4, v___x_407_);
v___x_409_ = v___x_400_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_fileName_391_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v_pos_392_);
lean_ctor_set(v_reuseFailAlloc_430_, 2, v_endPos_393_);
lean_ctor_set(v_reuseFailAlloc_430_, 3, v_caption_397_);
lean_ctor_set(v_reuseFailAlloc_430_, 4, v___x_407_);
lean_ctor_set_uint8(v_reuseFailAlloc_430_, sizeof(void*)*5, v_keepFullRange_394_);
lean_ctor_set_uint8(v_reuseFailAlloc_430_, sizeof(void*)*5 + 1, v_severity_395_);
lean_ctor_set_uint8(v_reuseFailAlloc_430_, sizeof(void*)*5 + 2, v_isSilent_396_);
v___x_409_ = v_reuseFailAlloc_430_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
lean_object* v___x_410_; lean_object* v_env_411_; lean_object* v_nextMacroScope_412_; lean_object* v_ngen_413_; lean_object* v_auxDeclNGen_414_; lean_object* v_traceState_415_; lean_object* v_cache_416_; lean_object* v_recordedDeps_417_; lean_object* v_messages_418_; lean_object* v_infoState_419_; lean_object* v_snapshotTasks_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_429_; 
v___x_410_ = lean_st_ref_take(v___y_389_);
v_env_411_ = lean_ctor_get(v___x_410_, 0);
v_nextMacroScope_412_ = lean_ctor_get(v___x_410_, 1);
v_ngen_413_ = lean_ctor_get(v___x_410_, 2);
v_auxDeclNGen_414_ = lean_ctor_get(v___x_410_, 3);
v_traceState_415_ = lean_ctor_get(v___x_410_, 4);
v_cache_416_ = lean_ctor_get(v___x_410_, 5);
v_recordedDeps_417_ = lean_ctor_get(v___x_410_, 6);
v_messages_418_ = lean_ctor_get(v___x_410_, 7);
v_infoState_419_ = lean_ctor_get(v___x_410_, 8);
v_snapshotTasks_420_ = lean_ctor_get(v___x_410_, 9);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_410_);
if (v_isSharedCheck_429_ == 0)
{
v___x_422_ = v___x_410_;
v_isShared_423_ = v_isSharedCheck_429_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_snapshotTasks_420_);
lean_inc(v_infoState_419_);
lean_inc(v_messages_418_);
lean_inc(v_recordedDeps_417_);
lean_inc(v_cache_416_);
lean_inc(v_traceState_415_);
lean_inc(v_auxDeclNGen_414_);
lean_inc(v_ngen_413_);
lean_inc(v_nextMacroScope_412_);
lean_inc(v_env_411_);
lean_dec(v___x_410_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_429_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; lean_object* v___x_426_; 
v___x_424_ = l_Lean_MessageLog_add(v___x_409_, v_messages_418_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 7, v___x_424_);
v___x_426_ = v___x_422_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_env_411_);
lean_ctor_set(v_reuseFailAlloc_428_, 1, v_nextMacroScope_412_);
lean_ctor_set(v_reuseFailAlloc_428_, 2, v_ngen_413_);
lean_ctor_set(v_reuseFailAlloc_428_, 3, v_auxDeclNGen_414_);
lean_ctor_set(v_reuseFailAlloc_428_, 4, v_traceState_415_);
lean_ctor_set(v_reuseFailAlloc_428_, 5, v_cache_416_);
lean_ctor_set(v_reuseFailAlloc_428_, 6, v_recordedDeps_417_);
lean_ctor_set(v_reuseFailAlloc_428_, 7, v___x_424_);
lean_ctor_set(v_reuseFailAlloc_428_, 8, v_infoState_419_);
lean_ctor_set(v_reuseFailAlloc_428_, 9, v_snapshotTasks_420_);
v___x_426_ = v_reuseFailAlloc_428_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
lean_object* v___x_427_; 
v___x_427_ = lean_st_ref_put(v___y_389_, v___x_426_);
v_a_368_ = v___x_385_;
goto v___jp_367_;
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
v___jp_367_:
{
size_t v___x_369_; size_t v___x_370_; 
v___x_369_ = ((size_t)1ULL);
v___x_370_ = lean_usize_add(v_i_362_, v___x_369_);
v_i_362_ = v___x_370_;
v_b_363_ = v_a_368_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___boxed(lean_object* v___x_443_, lean_object* v___x_444_, lean_object* v_as_445_, lean_object* v_sz_446_, lean_object* v_i_447_, lean_object* v_b_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_){
_start:
{
size_t v_sz_boxed_452_; size_t v_i_boxed_453_; lean_object* v_res_454_; 
v_sz_boxed_452_ = lean_unbox_usize(v_sz_446_);
lean_dec(v_sz_446_);
v_i_boxed_453_ = lean_unbox_usize(v_i_447_);
lean_dec(v_i_447_);
v_res_454_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0(v___x_443_, v___x_444_, v_as_445_, v_sz_boxed_452_, v_i_boxed_453_, v_b_448_, v___y_449_, v___y_450_);
lean_dec(v___y_450_);
lean_dec_ref(v___y_449_);
lean_dec_ref(v_as_445_);
lean_dec(v___x_444_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocStringAt(lean_object* v_openPos_455_, lean_object* v_startPos_456_, lean_object* v_endPos_457_, lean_object* v_a_458_, lean_object* v_a_459_){
_start:
{
lean_object* v_toCold_461_; lean_object* v_fileMap_462_; lean_object* v_fileName_463_; lean_object* v_currNamespace_464_; lean_object* v_openDecls_465_; lean_object* v_source_466_; lean_object* v___y_468_; lean_object* v___x_509_; uint8_t v___x_510_; 
v_toCold_461_ = lean_ctor_get(v_a_458_, 0);
v_fileMap_462_ = lean_ctor_get(v_toCold_461_, 1);
v_fileName_463_ = lean_ctor_get(v_toCold_461_, 0);
v_currNamespace_464_ = lean_ctor_get(v_toCold_461_, 4);
v_openDecls_465_ = lean_ctor_get(v_toCold_461_, 5);
v_source_466_ = lean_ctor_get(v_fileMap_462_, 0);
v___x_509_ = lean_string_utf8_byte_size(v_source_466_);
v___x_510_ = lean_nat_dec_le(v_endPos_457_, v___x_509_);
if (v___x_510_ == 0)
{
lean_dec(v_endPos_457_);
v___y_468_ = v___x_509_;
goto v___jp_467_;
}
else
{
v___y_468_ = v_endPos_457_;
goto v___jp_467_;
}
v___jp_467_:
{
lean_object* v___x_469_; lean_object* v_env_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_469_ = lean_st_ref_get(v_a_459_);
v_env_470_ = lean_ctor_get(v___x_469_, 0);
lean_inc_ref_n(v_env_470_, 2);
lean_dec(v___x_469_);
lean_inc(v___y_468_);
lean_inc_ref_n(v_fileMap_462_, 2);
lean_inc_ref(v_fileName_463_);
lean_inc_ref(v_source_466_);
v___x_471_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_471_, 0, v_source_466_);
lean_ctor_set(v___x_471_, 1, v_fileName_463_);
lean_ctor_set(v___x_471_, 2, v_fileMap_462_);
lean_ctor_set(v___x_471_, 3, v___y_468_);
v___x_472_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_458_);
lean_inc(v_openDecls_465_);
lean_inc(v_currNamespace_464_);
v___x_473_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_473_, 0, v_env_470_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
lean_ctor_set(v___x_473_, 2, v_currNamespace_464_);
lean_ctor_set(v___x_473_, 3, v_openDecls_465_);
lean_inc(v_startPos_456_);
v___x_474_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v_fileMap_462_, v_openPos_455_, v_startPos_456_, v___y_468_);
v___x_475_ = l_Lean_Parser_mkParserState(v_source_466_);
v___x_476_ = l_Lean_Parser_ParserState_setPos(v___x_475_, v_startPos_456_);
v___x_477_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_documentFn), 3, 1);
lean_closure_set(v___x_477_, 0, v___x_474_);
v___x_478_ = l_Lean_Parser_getTokenTable(v_env_470_);
lean_inc_ref(v___x_471_);
v___x_479_ = l_Lean_Parser_ParserFn_run(v___x_477_, v___x_471_, v___x_473_, v___x_478_, v___x_476_);
lean_inc_ref(v___x_479_);
v___x_480_ = l_Lean_Parser_ParserState_allErrors(v___x_479_);
v___x_481_ = lean_array_get_size(v___x_480_);
v___x_482_ = lean_unsigned_to_nat(0u);
v___x_483_ = lean_nat_dec_eq(v___x_481_, v___x_482_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; size_t v_sz_485_; size_t v___x_486_; lean_object* v___x_487_; 
lean_dec_ref(v___x_479_);
v___x_484_ = lean_box(0);
v_sz_485_ = lean_array_size(v___x_480_);
v___x_486_ = ((size_t)0ULL);
v___x_487_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0(v___x_471_, v___x_481_, v___x_480_, v_sz_485_, v___x_486_, v___x_484_, v_a_458_, v_a_459_);
lean_dec_ref(v___x_480_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_495_; 
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_495_ == 0)
{
lean_object* v_unused_496_; 
v_unused_496_ = lean_ctor_get(v___x_487_, 0);
lean_dec(v_unused_496_);
v___x_489_ = v___x_487_;
v_isShared_490_ = v_isSharedCheck_495_;
goto v_resetjp_488_;
}
else
{
lean_dec(v___x_487_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_495_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_491_; lean_object* v___x_493_; 
v___x_491_ = lean_box(0);
if (v_isShared_490_ == 0)
{
lean_ctor_set(v___x_489_, 0, v___x_491_);
v___x_493_ = v___x_489_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v___x_491_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
else
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_504_; 
v_a_497_ = lean_ctor_get(v___x_487_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_504_ == 0)
{
v___x_499_ = v___x_487_;
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_487_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_502_; 
if (v_isShared_500_ == 0)
{
v___x_502_ = v___x_499_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_a_497_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
}
else
{
lean_object* v_stxStack_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
lean_dec_ref(v___x_480_);
lean_dec_ref_known(v___x_471_, 4);
v_stxStack_505_ = lean_ctor_get(v___x_479_, 0);
lean_inc_ref(v_stxStack_505_);
lean_dec_ref(v___x_479_);
v___x_506_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_505_);
lean_dec_ref(v_stxStack_505_);
v___x_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_507_, 0, v___x_506_);
v___x_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
return v___x_508_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocStringAt___boxed(lean_object* v_openPos_511_, lean_object* v_startPos_512_, lean_object* v_endPos_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lean_parseVersoDocStringAt(v_openPos_511_, v_startPos_512_, v_endPos_513_, v_a_514_, v_a_515_);
lean_dec(v_a_515_);
lean_dec_ref(v_a_514_);
lean_dec(v_openPos_511_);
return v_res_517_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_518_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_519_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0);
v___x_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_520_, 0, v___x_519_);
return v___x_520_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_521_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1);
v___x_522_ = lean_unsigned_to_nat(0u);
v___x_523_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_523_, 0, v___x_522_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
lean_ctor_set(v___x_523_, 2, v___x_522_);
lean_ctor_set(v___x_523_, 3, v___x_522_);
lean_ctor_set(v___x_523_, 4, v___x_521_);
lean_ctor_set(v___x_523_, 5, v___x_521_);
lean_ctor_set(v___x_523_, 6, v___x_521_);
lean_ctor_set(v___x_523_, 7, v___x_521_);
lean_ctor_set(v___x_523_, 8, v___x_521_);
lean_ctor_set(v___x_523_, 9, v___x_521_);
lean_ctor_set(v___x_523_, 10, v___x_521_);
return v___x_523_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_524_ = lean_unsigned_to_nat(32u);
v___x_525_ = lean_mk_empty_array_with_capacity(v___x_524_);
v___x_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
return v___x_526_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_527_ = ((size_t)5ULL);
v___x_528_ = lean_unsigned_to_nat(0u);
v___x_529_ = lean_unsigned_to_nat(32u);
v___x_530_ = lean_mk_empty_array_with_capacity(v___x_529_);
v___x_531_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__3);
v___x_532_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_532_, 0, v___x_531_);
lean_ctor_set(v___x_532_, 1, v___x_530_);
lean_ctor_set(v___x_532_, 2, v___x_528_);
lean_ctor_set(v___x_532_, 3, v___x_528_);
lean_ctor_set_usize(v___x_532_, 4, v___x_527_);
return v___x_532_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_533_ = lean_box(1);
v___x_534_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__4);
v___x_535_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1);
v___x_536_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
lean_ctor_set(v___x_536_, 1, v___x_534_);
lean_ctor_set(v___x_536_, 2, v___x_533_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0(lean_object* v_msgData_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
lean_object* v___x_541_; lean_object* v_toCold_542_; lean_object* v_env_543_; lean_object* v_options_544_; uint8_t v___x_545_; lean_object* v_env_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_541_ = lean_st_ref_get(v___y_539_);
v_toCold_542_ = lean_ctor_get(v___y_538_, 0);
v_env_543_ = lean_ctor_get(v___x_541_, 0);
lean_inc_ref(v_env_543_);
lean_dec(v___x_541_);
v_options_544_ = lean_ctor_get(v_toCold_542_, 2);
v___x_545_ = 0;
v_env_546_ = l_Lean_Environment_setRecordingDeps(v_env_543_, v___x_545_);
v___x_547_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__2);
v___x_548_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_544_);
v___x_549_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_549_, 0, v_env_546_);
lean_ctor_set(v___x_549_, 1, v___x_547_);
lean_ctor_set(v___x_549_, 2, v___x_548_);
lean_ctor_set(v___x_549_, 3, v_options_544_);
v___x_550_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
lean_ctor_set(v___x_550_, 1, v_msgData_537_);
v___x_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___boxed(lean_object* v_msgData_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0(v_msgData_552_, v___y_553_, v___y_554_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg(lean_object* v_msg_557_, lean_object* v___y_558_, lean_object* v___y_559_){
_start:
{
lean_object* v_ref_561_; lean_object* v___x_562_; lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_571_; 
v_ref_561_ = lean_ctor_get(v___y_558_, 2);
v___x_562_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0(v_msg_557_, v___y_558_, v___y_559_);
v_a_563_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_571_ == 0)
{
v___x_565_ = v___x_562_;
v_isShared_566_ = v_isSharedCheck_571_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_562_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_571_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_567_; lean_object* v___x_569_; 
lean_inc(v_ref_561_);
v___x_567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_567_, 0, v_ref_561_);
lean_ctor_set(v___x_567_, 1, v_a_563_);
if (v_isShared_566_ == 0)
{
lean_ctor_set_tag(v___x_565_, 1);
lean_ctor_set(v___x_565_, 0, v___x_567_);
v___x_569_ = v___x_565_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_567_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg___boxed(lean_object* v_msg_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg(v_msg_572_, v___y_573_, v___y_574_);
lean_dec(v___y_574_);
lean_dec_ref(v___y_573_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString(lean_object* v_docComment_577_, lean_object* v_a_578_, lean_object* v_a_579_){
_start:
{
lean_object* v_____x_582_; lean_object* v___y_583_; lean_object* v___y_584_; lean_object* v___x_590_; 
v___x_590_ = l_Lean_docStringRange(v_docComment_577_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v_a_591_; lean_object* v___x_592_; lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_600_; 
v_a_591_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_591_);
lean_dec_ref_known(v___x_590_, 1);
v___x_592_ = l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg(v_a_591_, v_a_578_, v_a_579_);
v_a_593_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_600_ == 0)
{
v___x_595_ = v___x_592_;
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_592_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_598_; 
if (v_isShared_596_ == 0)
{
v___x_598_ = v___x_595_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_593_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
else
{
lean_object* v_a_601_; 
v_a_601_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_601_);
lean_dec_ref_known(v___x_590_, 1);
v_____x_582_ = v_a_601_;
v___y_583_ = v_a_578_;
v___y_584_ = v_a_579_;
goto v___jp_581_;
}
v___jp_581_:
{
lean_object* v_snd_585_; lean_object* v_fst_586_; lean_object* v_fst_587_; lean_object* v_snd_588_; lean_object* v___x_589_; 
v_snd_585_ = lean_ctor_get(v_____x_582_, 1);
lean_inc(v_snd_585_);
v_fst_586_ = lean_ctor_get(v_____x_582_, 0);
lean_inc(v_fst_586_);
lean_dec_ref(v_____x_582_);
v_fst_587_ = lean_ctor_get(v_snd_585_, 0);
lean_inc(v_fst_587_);
v_snd_588_ = lean_ctor_get(v_snd_585_, 1);
lean_inc(v_snd_588_);
lean_dec(v_snd_585_);
v___x_589_ = l_Lean_parseVersoDocStringAt(v_fst_586_, v_fst_587_, v_snd_588_, v___y_583_, v___y_584_);
lean_dec(v_fst_586_);
return v___x_589_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___boxed(lean_object* v_docComment_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l_Lean_parseVersoDocString(v_docComment_602_, v_a_603_, v_a_604_);
lean_dec(v_a_604_);
lean_dec_ref(v_a_603_);
lean_dec(v_docComment_602_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0(lean_object* v_00_u03b1_607_, lean_object* v_msg_608_, lean_object* v___y_609_, lean_object* v___y_610_){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg(v_msg_608_, v___y_609_, v___y_610_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___boxed(lean_object* v_00_u03b1_613_, lean_object* v_msg_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0(v_00_u03b1_613_, v_msg_614_, v___y_615_, v___y_616_);
lean_dec(v___y_616_);
lean_dec_ref(v___y_615_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure(lean_object* v_view_619_, lean_object* v_a_620_, lean_object* v_a_621_){
_start:
{
lean_object* v_____x_624_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___x_649_; 
v___x_649_ = l___private_Lean_DocString_Add_0__Lean_docCommentRange(v_view_619_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v_a_650_; lean_object* v___x_651_; lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_659_; 
v_a_650_ = lean_ctor_get(v___x_649_, 0);
lean_inc(v_a_650_);
lean_dec_ref_known(v___x_649_, 1);
v___x_651_ = l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg(v_a_650_, v_a_620_, v_a_621_);
v_a_652_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_659_ == 0)
{
v___x_654_ = v___x_651_;
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v___x_651_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_657_; 
if (v_isShared_655_ == 0)
{
v___x_657_ = v___x_654_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_a_652_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
else
{
lean_object* v_a_660_; 
v_a_660_ = lean_ctor_get(v___x_649_, 0);
lean_inc(v_a_660_);
lean_dec_ref_known(v___x_649_, 1);
v_____x_624_ = v_a_660_;
v___y_625_ = v_a_620_;
v___y_626_ = v_a_621_;
goto v___jp_623_;
}
v___jp_623_:
{
lean_object* v_snd_627_; lean_object* v_fst_628_; lean_object* v_fst_629_; lean_object* v_snd_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v_snd_627_ = lean_ctor_get(v_____x_624_, 1);
lean_inc(v_snd_627_);
v_fst_628_ = lean_ctor_get(v_____x_624_, 0);
lean_inc(v_fst_628_);
lean_dec_ref(v_____x_624_);
v_fst_629_ = lean_ctor_get(v_snd_627_, 0);
lean_inc(v_fst_629_);
v_snd_630_ = lean_ctor_get(v_snd_627_, 1);
lean_inc(v_snd_630_);
lean_dec(v_snd_627_);
v___x_631_ = lean_box(0);
v___x_632_ = l_Lean_parseVersoDocStringAt(v_fst_628_, v_fst_629_, v_snd_630_, v___y_625_, v___y_626_);
lean_dec(v_fst_628_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_639_; 
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_639_ == 0)
{
lean_object* v_unused_640_; 
v_unused_640_ = lean_ctor_get(v___x_632_, 0);
lean_dec(v_unused_640_);
v___x_634_ = v___x_632_;
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
else
{
lean_dec(v___x_632_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_637_; 
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v___x_631_);
v___x_637_ = v___x_634_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v___x_631_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
else
{
lean_object* v_a_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_648_; 
v_a_641_ = lean_ctor_get(v___x_632_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_648_ == 0)
{
v___x_643_ = v___x_632_;
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_a_641_);
lean_dec(v___x_632_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_646_; 
if (v_isShared_644_ == 0)
{
v___x_646_ = v___x_643_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_a_641_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___boxed(lean_object* v_view_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lean_reportVersoParseFailure(v_view_661_, v_a_662_, v_a_663_);
lean_dec(v_a_663_);
lean_dec_ref(v_a_662_);
lean_dec_ref(v_view_661_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0(lean_object* v_fileMap_x3f_666_, lean_object* v_declName_667_, lean_object* v_binders_668_, lean_object* v___x_669_, uint8_t v___x_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_){
_start:
{
if (lean_obj_tag(v_fileMap_x3f_666_) == 0)
{
lean_object* v___x_678_; 
v___x_678_ = l_Lean_Doc_DocM_exec___redArg(v_declName_667_, v_binders_668_, v___x_669_, v___x_670_, v___y_671_, v___y_672_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
return v___x_678_;
}
else
{
lean_object* v_toCold_679_; lean_object* v_val_680_; lean_object* v_currRecDepth_681_; lean_object* v_ref_682_; uint16_t v_optionFlags_683_; uint8_t v_suppressElabErrors_684_; uint8_t v_checkDeprecated_685_; uint8_t v_isRecordingDeps_686_; lean_object* v_fileName_687_; lean_object* v_options_688_; lean_object* v_maxRecDepth_689_; lean_object* v_currNamespace_690_; lean_object* v_openDecls_691_; lean_object* v_initHeartbeats_692_; lean_object* v_maxHeartbeats_693_; lean_object* v_quotContext_694_; lean_object* v_currMacroScope_695_; lean_object* v_cancelTk_x3f_696_; lean_object* v_inheritedTraceOptions_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v_toCold_679_ = lean_ctor_get(v___y_675_, 0);
v_val_680_ = lean_ctor_get(v_fileMap_x3f_666_, 0);
v_currRecDepth_681_ = lean_ctor_get(v___y_675_, 1);
v_ref_682_ = lean_ctor_get(v___y_675_, 2);
v_optionFlags_683_ = lean_ctor_get_uint16(v___y_675_, sizeof(void*)*3);
v_suppressElabErrors_684_ = lean_ctor_get_uint8(v___y_675_, sizeof(void*)*3 + 2);
v_checkDeprecated_685_ = lean_ctor_get_uint8(v___y_675_, sizeof(void*)*3 + 3);
v_isRecordingDeps_686_ = lean_ctor_get_uint8(v___y_675_, sizeof(void*)*3 + 4);
v_fileName_687_ = lean_ctor_get(v_toCold_679_, 0);
v_options_688_ = lean_ctor_get(v_toCold_679_, 2);
v_maxRecDepth_689_ = lean_ctor_get(v_toCold_679_, 3);
v_currNamespace_690_ = lean_ctor_get(v_toCold_679_, 4);
v_openDecls_691_ = lean_ctor_get(v_toCold_679_, 5);
v_initHeartbeats_692_ = lean_ctor_get(v_toCold_679_, 6);
v_maxHeartbeats_693_ = lean_ctor_get(v_toCold_679_, 7);
v_quotContext_694_ = lean_ctor_get(v_toCold_679_, 8);
v_currMacroScope_695_ = lean_ctor_get(v_toCold_679_, 9);
v_cancelTk_x3f_696_ = lean_ctor_get(v_toCold_679_, 10);
v_inheritedTraceOptions_697_ = lean_ctor_get(v_toCold_679_, 11);
lean_inc_ref(v_inheritedTraceOptions_697_);
lean_inc(v_cancelTk_x3f_696_);
lean_inc(v_currMacroScope_695_);
lean_inc(v_quotContext_694_);
lean_inc(v_maxHeartbeats_693_);
lean_inc(v_initHeartbeats_692_);
lean_inc(v_openDecls_691_);
lean_inc(v_currNamespace_690_);
lean_inc(v_maxRecDepth_689_);
lean_inc_ref(v_options_688_);
lean_inc(v_val_680_);
lean_inc_ref(v_fileName_687_);
v___x_698_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_698_, 0, v_fileName_687_);
lean_ctor_set(v___x_698_, 1, v_val_680_);
lean_ctor_set(v___x_698_, 2, v_options_688_);
lean_ctor_set(v___x_698_, 3, v_maxRecDepth_689_);
lean_ctor_set(v___x_698_, 4, v_currNamespace_690_);
lean_ctor_set(v___x_698_, 5, v_openDecls_691_);
lean_ctor_set(v___x_698_, 6, v_initHeartbeats_692_);
lean_ctor_set(v___x_698_, 7, v_maxHeartbeats_693_);
lean_ctor_set(v___x_698_, 8, v_quotContext_694_);
lean_ctor_set(v___x_698_, 9, v_currMacroScope_695_);
lean_ctor_set(v___x_698_, 10, v_cancelTk_x3f_696_);
lean_ctor_set(v___x_698_, 11, v_inheritedTraceOptions_697_);
lean_inc(v_ref_682_);
lean_inc(v_currRecDepth_681_);
v___x_699_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_699_, 0, v___x_698_);
lean_ctor_set(v___x_699_, 1, v_currRecDepth_681_);
lean_ctor_set(v___x_699_, 2, v_ref_682_);
lean_ctor_set_uint16(v___x_699_, sizeof(void*)*3, v_optionFlags_683_);
lean_ctor_set_uint8(v___x_699_, sizeof(void*)*3 + 2, v_suppressElabErrors_684_);
lean_ctor_set_uint8(v___x_699_, sizeof(void*)*3 + 3, v_checkDeprecated_685_);
lean_ctor_set_uint8(v___x_699_, sizeof(void*)*3 + 4, v_isRecordingDeps_686_);
v___x_700_ = l_Lean_Doc_DocM_exec___redArg(v_declName_667_, v_binders_668_, v___x_669_, v___x_670_, v___y_671_, v___y_672_, v___y_673_, v___y_674_, v___x_699_, v___y_676_);
lean_dec_ref_known(v___x_699_, 3);
return v___x_700_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0___boxed(lean_object* v_fileMap_x3f_701_, lean_object* v_declName_702_, lean_object* v_binders_703_, lean_object* v___x_704_, lean_object* v___x_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
uint8_t v___x_9640__boxed_713_; lean_object* v_res_714_; 
v___x_9640__boxed_713_ = lean_unbox(v___x_705_);
v_res_714_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0(v_fileMap_x3f_701_, v_declName_702_, v_binders_703_, v___x_704_, v___x_9640__boxed_713_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec(v___y_707_);
lean_dec_ref(v___y_706_);
lean_dec(v_fileMap_x3f_701_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(size_t v_sz_715_, size_t v_i_716_, lean_object* v_bs_717_){
_start:
{
uint8_t v___x_718_; 
v___x_718_ = lean_usize_dec_lt(v_i_716_, v_sz_715_);
if (v___x_718_ == 0)
{
return v_bs_717_;
}
else
{
lean_object* v_v_719_; lean_object* v___x_720_; lean_object* v_bs_x27_721_; size_t v___x_722_; size_t v___x_723_; lean_object* v___x_724_; 
v_v_719_ = lean_array_uget(v_bs_717_, v_i_716_);
v___x_720_ = lean_unsigned_to_nat(0u);
v_bs_x27_721_ = lean_array_uset(v_bs_717_, v_i_716_, v___x_720_);
v___x_722_ = ((size_t)1ULL);
v___x_723_ = lean_usize_add(v_i_716_, v___x_722_);
v___x_724_ = lean_array_uset(v_bs_x27_721_, v_i_716_, v_v_719_);
v_i_716_ = v___x_723_;
v_bs_717_ = v___x_724_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0___boxed(lean_object* v_sz_726_, lean_object* v_i_727_, lean_object* v_bs_728_){
_start:
{
size_t v_sz_boxed_729_; size_t v_i_boxed_730_; lean_object* v_res_731_; 
v_sz_boxed_729_ = lean_unbox_usize(v_sz_726_);
lean_dec(v_sz_726_);
v_i_boxed_730_ = lean_unbox_usize(v_i_727_);
lean_dec(v_i_727_);
v_res_731_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(v_sz_boxed_729_, v_i_boxed_730_, v_bs_728_);
return v_res_731_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(lean_object* v_opts_732_, lean_object* v_opt_733_){
_start:
{
lean_object* v_name_734_; lean_object* v_defValue_735_; lean_object* v_map_736_; lean_object* v___x_737_; 
v_name_734_ = lean_ctor_get(v_opt_733_, 0);
v_defValue_735_ = lean_ctor_get(v_opt_733_, 1);
v_map_736_ = lean_ctor_get(v_opts_732_, 0);
v___x_737_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_736_, v_name_734_);
if (lean_obj_tag(v___x_737_) == 0)
{
uint8_t v___x_738_; 
v___x_738_ = lean_unbox(v_defValue_735_);
return v___x_738_;
}
else
{
lean_object* v_val_739_; 
v_val_739_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_val_739_);
lean_dec_ref_known(v___x_737_, 1);
if (lean_obj_tag(v_val_739_) == 1)
{
uint8_t v_v_740_; 
v_v_740_ = lean_ctor_get_uint8(v_val_739_, 0);
lean_dec_ref_known(v_val_739_, 0);
return v_v_740_;
}
else
{
uint8_t v___x_741_; 
lean_dec(v_val_739_);
v___x_741_ = lean_unbox(v_defValue_735_);
return v___x_741_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4___boxed(lean_object* v_opts_742_, lean_object* v_opt_743_){
_start:
{
uint8_t v_res_744_; lean_object* v_r_745_; 
v_res_744_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v_opts_742_, v_opt_743_);
lean_dec_ref(v_opt_743_);
lean_dec_ref(v_opts_742_);
v_r_745_ = lean_box(v_res_744_);
return v_r_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(lean_object* v_msgData_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_){
_start:
{
lean_object* v___x_752_; lean_object* v_env_753_; uint8_t v___x_754_; lean_object* v_env_755_; lean_object* v___x_756_; lean_object* v_toCold_757_; lean_object* v_mctx_758_; lean_object* v_lctx_759_; lean_object* v_options_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_752_ = lean_st_ref_get(v___y_750_);
v_env_753_ = lean_ctor_get(v___x_752_, 0);
lean_inc_ref(v_env_753_);
lean_dec(v___x_752_);
v___x_754_ = 0;
v_env_755_ = l_Lean_Environment_setRecordingDeps(v_env_753_, v___x_754_);
v___x_756_ = lean_st_ref_get(v___y_748_);
v_toCold_757_ = lean_ctor_get(v___y_749_, 0);
v_mctx_758_ = lean_ctor_get(v___x_756_, 0);
lean_inc_ref(v_mctx_758_);
lean_dec(v___x_756_);
v_lctx_759_ = lean_ctor_get(v___y_747_, 2);
v_options_760_ = lean_ctor_get(v_toCold_757_, 2);
lean_inc_ref(v_options_760_);
lean_inc_ref(v_lctx_759_);
v___x_761_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_761_, 0, v_env_755_);
lean_ctor_set(v___x_761_, 1, v_mctx_758_);
lean_ctor_set(v___x_761_, 2, v_lctx_759_);
lean_ctor_set(v___x_761_, 3, v_options_760_);
v___x_762_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
lean_ctor_set(v___x_762_, 1, v_msgData_746_);
v___x_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_763_, 0, v___x_762_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3___boxed(lean_object* v_msgData_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(v_msgData_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
return v_res_770_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0(uint8_t v___x_771_, lean_object* v_x_772_){
_start:
{
if (lean_obj_tag(v_x_772_) == 1)
{
lean_object* v_pre_773_; 
v_pre_773_ = lean_ctor_get(v_x_772_, 0);
switch(lean_obj_tag(v_pre_773_))
{
case 1:
{
lean_object* v_pre_774_; 
v_pre_774_ = lean_ctor_get(v_pre_773_, 0);
switch(lean_obj_tag(v_pre_774_))
{
case 0:
{
lean_object* v_str_775_; lean_object* v_str_776_; lean_object* v___x_777_; uint8_t v___x_778_; 
v_str_775_ = lean_ctor_get(v_x_772_, 1);
v_str_776_ = lean_ctor_get(v_pre_773_, 1);
v___x_777_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__0));
v___x_778_ = lean_string_dec_eq(v_str_776_, v___x_777_);
if (v___x_778_ == 0)
{
lean_object* v___x_779_; uint8_t v___x_780_; 
v___x_779_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__1));
v___x_780_ = lean_string_dec_eq(v_str_776_, v___x_779_);
if (v___x_780_ == 0)
{
return v___x_780_;
}
else
{
lean_object* v___x_781_; uint8_t v___x_782_; 
v___x_781_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__2));
v___x_782_ = lean_string_dec_eq(v_str_775_, v___x_781_);
return v___x_782_;
}
}
else
{
lean_object* v___x_783_; uint8_t v___x_784_; 
v___x_783_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__3));
v___x_784_ = lean_string_dec_eq(v_str_775_, v___x_783_);
return v___x_784_;
}
}
case 1:
{
lean_object* v_pre_785_; 
v_pre_785_ = lean_ctor_get(v_pre_774_, 0);
if (lean_obj_tag(v_pre_785_) == 0)
{
lean_object* v_str_786_; lean_object* v_str_787_; lean_object* v_str_788_; lean_object* v___x_789_; uint8_t v___x_790_; 
v_str_786_ = lean_ctor_get(v_x_772_, 1);
v_str_787_ = lean_ctor_get(v_pre_773_, 1);
v_str_788_ = lean_ctor_get(v_pre_774_, 1);
v___x_789_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__4));
v___x_790_ = lean_string_dec_eq(v_str_788_, v___x_789_);
if (v___x_790_ == 0)
{
return v___x_790_;
}
else
{
lean_object* v___x_791_; uint8_t v___x_792_; 
v___x_791_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__5));
v___x_792_ = lean_string_dec_eq(v_str_787_, v___x_791_);
if (v___x_792_ == 0)
{
return v___x_792_;
}
else
{
lean_object* v___x_793_; uint8_t v___x_794_; 
v___x_793_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__6));
v___x_794_ = lean_string_dec_eq(v_str_786_, v___x_793_);
return v___x_794_;
}
}
}
else
{
return v___x_771_;
}
}
default: 
{
return v___x_771_;
}
}
}
case 0:
{
lean_object* v_str_795_; lean_object* v___x_796_; uint8_t v___x_797_; 
v_str_795_ = lean_ctor_get(v_x_772_, 1);
v___x_796_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__7));
v___x_797_ = lean_string_dec_eq(v_str_795_, v___x_796_);
return v___x_797_;
}
default: 
{
return v___x_771_;
}
}
}
else
{
return v___x_771_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___boxed(lean_object* v___x_798_, lean_object* v_x_799_){
_start:
{
uint8_t v___x_9733__boxed_800_; uint8_t v_res_801_; lean_object* v_r_802_; 
v___x_9733__boxed_800_ = lean_unbox(v___x_798_);
v_res_801_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0(v___x_9733__boxed_800_, v_x_799_);
lean_dec(v_x_799_);
v_r_802_ = lean_box(v_res_801_);
return v_r_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(lean_object* v_ref_806_, lean_object* v_msgData_807_, uint8_t v_severity_808_, uint8_t v_isSilent_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
lean_object* v___y_816_; uint8_t v___y_817_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; uint8_t v___y_821_; lean_object* v___y_822_; lean_object* v_toCold_823_; lean_object* v___y_824_; lean_object* v___y_853_; lean_object* v___y_854_; uint8_t v___y_855_; lean_object* v___y_856_; uint8_t v___y_857_; lean_object* v___y_858_; uint8_t v___y_859_; lean_object* v___y_860_; lean_object* v___y_880_; uint8_t v___y_881_; lean_object* v___y_882_; lean_object* v___y_883_; uint8_t v___y_884_; uint8_t v___y_885_; lean_object* v___y_886_; uint8_t v___y_890_; uint8_t v___x_907_; uint8_t v___x_908_; 
v___x_907_ = 2;
v___x_908_ = l_Lean_instBEqMessageSeverity_beq(v_severity_808_, v___x_907_);
if (v___x_908_ == 0)
{
goto v___jp_900_;
}
else
{
uint8_t v___x_909_; 
lean_inc_ref(v_msgData_807_);
v___x_909_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_807_);
if (v___x_909_ == 0)
{
goto v___jp_900_;
}
else
{
lean_object* v___x_910_; lean_object* v___x_911_; 
lean_dec_ref(v_msgData_807_);
v___x_910_ = lean_box(0);
v___x_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
return v___x_911_;
}
}
v___jp_815_:
{
lean_object* v_currNamespace_825_; lean_object* v_openDecls_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v_env_831_; lean_object* v_nextMacroScope_832_; lean_object* v_ngen_833_; lean_object* v_auxDeclNGen_834_; lean_object* v_traceState_835_; lean_object* v_cache_836_; lean_object* v_recordedDeps_837_; lean_object* v_messages_838_; lean_object* v_infoState_839_; lean_object* v_snapshotTasks_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_851_; 
v_currNamespace_825_ = lean_ctor_get(v_toCold_823_, 4);
v_openDecls_826_ = lean_ctor_get(v_toCold_823_, 5);
lean_inc(v_openDecls_826_);
lean_inc(v_currNamespace_825_);
v___x_827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_827_, 0, v_currNamespace_825_);
lean_ctor_set(v___x_827_, 1, v_openDecls_826_);
v___x_828_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
lean_ctor_set(v___x_828_, 1, v___y_820_);
lean_inc_ref(v___y_816_);
lean_inc_ref(v___y_818_);
v___x_829_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_829_, 0, v___y_818_);
lean_ctor_set(v___x_829_, 1, v___y_819_);
lean_ctor_set(v___x_829_, 2, v___y_822_);
lean_ctor_set(v___x_829_, 3, v___y_816_);
lean_ctor_set(v___x_829_, 4, v___x_828_);
lean_ctor_set_uint8(v___x_829_, sizeof(void*)*5, v___y_821_);
lean_ctor_set_uint8(v___x_829_, sizeof(void*)*5 + 1, v___y_817_);
lean_ctor_set_uint8(v___x_829_, sizeof(void*)*5 + 2, v_isSilent_809_);
v___x_830_ = lean_st_ref_take(v___y_824_);
v_env_831_ = lean_ctor_get(v___x_830_, 0);
v_nextMacroScope_832_ = lean_ctor_get(v___x_830_, 1);
v_ngen_833_ = lean_ctor_get(v___x_830_, 2);
v_auxDeclNGen_834_ = lean_ctor_get(v___x_830_, 3);
v_traceState_835_ = lean_ctor_get(v___x_830_, 4);
v_cache_836_ = lean_ctor_get(v___x_830_, 5);
v_recordedDeps_837_ = lean_ctor_get(v___x_830_, 6);
v_messages_838_ = lean_ctor_get(v___x_830_, 7);
v_infoState_839_ = lean_ctor_get(v___x_830_, 8);
v_snapshotTasks_840_ = lean_ctor_get(v___x_830_, 9);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_851_ == 0)
{
v___x_842_ = v___x_830_;
v_isShared_843_ = v_isSharedCheck_851_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_snapshotTasks_840_);
lean_inc(v_infoState_839_);
lean_inc(v_messages_838_);
lean_inc(v_recordedDeps_837_);
lean_inc(v_cache_836_);
lean_inc(v_traceState_835_);
lean_inc(v_auxDeclNGen_834_);
lean_inc(v_ngen_833_);
lean_inc(v_nextMacroScope_832_);
lean_inc(v_env_831_);
lean_dec(v___x_830_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_851_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_847_; 
v___x_844_ = lean_box(0);
v___x_845_ = l_Lean_MessageLog_add(v___x_829_, v_messages_838_);
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 7, v___x_845_);
v___x_847_ = v___x_842_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v_env_831_);
lean_ctor_set(v_reuseFailAlloc_850_, 1, v_nextMacroScope_832_);
lean_ctor_set(v_reuseFailAlloc_850_, 2, v_ngen_833_);
lean_ctor_set(v_reuseFailAlloc_850_, 3, v_auxDeclNGen_834_);
lean_ctor_set(v_reuseFailAlloc_850_, 4, v_traceState_835_);
lean_ctor_set(v_reuseFailAlloc_850_, 5, v_cache_836_);
lean_ctor_set(v_reuseFailAlloc_850_, 6, v_recordedDeps_837_);
lean_ctor_set(v_reuseFailAlloc_850_, 7, v___x_845_);
lean_ctor_set(v_reuseFailAlloc_850_, 8, v_infoState_839_);
lean_ctor_set(v_reuseFailAlloc_850_, 9, v_snapshotTasks_840_);
v___x_847_ = v_reuseFailAlloc_850_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_848_ = lean_st_ref_put(v___y_824_, v___x_847_);
v___x_849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_849_, 0, v___x_844_);
return v___x_849_;
}
}
}
v___jp_852_:
{
lean_object* v_fileName_861_; lean_object* v_fileMap_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_878_; 
v_fileName_861_ = lean_ctor_get(v___y_856_, 0);
v_fileMap_862_ = lean_ctor_get(v___y_856_, 1);
v___x_863_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_807_);
v___x_864_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(v___x_863_, v___y_810_, v___y_811_, v___y_812_, v___y_813_);
v_a_865_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_878_ == 0)
{
v___x_867_ = v___x_864_;
v_isShared_868_ = v_isSharedCheck_878_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_864_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_878_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
lean_inc_ref_n(v_fileMap_862_, 2);
v___x_869_ = l_Lean_FileMap_toPosition(v_fileMap_862_, v___y_858_);
lean_dec(v___y_858_);
v___x_870_ = l_Lean_FileMap_toPosition(v_fileMap_862_, v___y_860_);
lean_dec(v___y_860_);
v___x_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
v___x_872_ = ((lean_object*)(l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage___closed__0));
if (v___y_857_ == 0)
{
lean_del_object(v___x_867_);
v___y_816_ = v___x_872_;
v___y_817_ = v___y_855_;
v___y_818_ = v_fileName_861_;
v___y_819_ = v___x_869_;
v___y_820_ = v_a_865_;
v___y_821_ = v___y_859_;
v___y_822_ = v___x_871_;
v_toCold_823_ = v___y_853_;
v___y_824_ = v___y_813_;
goto v___jp_815_;
}
else
{
uint8_t v___x_873_; 
lean_inc(v_a_865_);
lean_inc_ref(v___y_854_);
v___x_873_ = l_Lean_MessageData_hasTag(v___y_854_, v_a_865_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; lean_object* v___x_876_; 
lean_dec_ref_known(v___x_871_, 1);
lean_dec_ref(v___x_869_);
lean_dec(v_a_865_);
v___x_874_ = lean_box(0);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 0, v___x_874_);
v___x_876_ = v___x_867_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v___x_874_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
else
{
lean_del_object(v___x_867_);
v___y_816_ = v___x_872_;
v___y_817_ = v___y_855_;
v___y_818_ = v_fileName_861_;
v___y_819_ = v___x_869_;
v___y_820_ = v_a_865_;
v___y_821_ = v___y_859_;
v___y_822_ = v___x_871_;
v_toCold_823_ = v___y_853_;
v___y_824_ = v___y_813_;
goto v___jp_815_;
}
}
}
}
v___jp_879_:
{
lean_object* v___x_887_; 
v___x_887_ = l_Lean_Syntax_getTailPos_x3f(v___y_883_, v___y_884_);
lean_dec(v___y_883_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_inc(v___y_886_);
v___y_853_ = v___y_880_;
v___y_854_ = v___y_882_;
v___y_855_ = v___y_885_;
v___y_856_ = v___y_880_;
v___y_857_ = v___y_881_;
v___y_858_ = v___y_886_;
v___y_859_ = v___y_884_;
v___y_860_ = v___y_886_;
goto v___jp_852_;
}
else
{
lean_object* v_val_888_; 
v_val_888_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_val_888_);
lean_dec_ref_known(v___x_887_, 1);
v___y_853_ = v___y_880_;
v___y_854_ = v___y_882_;
v___y_855_ = v___y_885_;
v___y_856_ = v___y_880_;
v___y_857_ = v___y_881_;
v___y_858_ = v___y_886_;
v___y_859_ = v___y_884_;
v___y_860_ = v_val_888_;
goto v___jp_852_;
}
}
v___jp_889_:
{
lean_object* v_toCold_891_; lean_object* v_ref_892_; uint8_t v_suppressElabErrors_893_; lean_object* v_ref_894_; uint8_t v___x_895_; lean_object* v___f_896_; lean_object* v___x_897_; 
v_toCold_891_ = lean_ctor_get(v___y_812_, 0);
v_ref_892_ = lean_ctor_get(v___y_812_, 2);
v_suppressElabErrors_893_ = lean_ctor_get_uint8(v___y_812_, sizeof(void*)*3 + 2);
v_ref_894_ = l_Lean_replaceRef(v_ref_806_, v_ref_892_);
v___x_895_ = 0;
v___f_896_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___closed__0));
v___x_897_ = l_Lean_Syntax_getPos_x3f(v_ref_894_, v___x_895_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v___x_898_; 
v___x_898_ = lean_unsigned_to_nat(0u);
v___y_880_ = v_toCold_891_;
v___y_881_ = v_suppressElabErrors_893_;
v___y_882_ = v___f_896_;
v___y_883_ = v_ref_894_;
v___y_884_ = v___x_895_;
v___y_885_ = v___y_890_;
v___y_886_ = v___x_898_;
goto v___jp_879_;
}
else
{
lean_object* v_val_899_; 
v_val_899_ = lean_ctor_get(v___x_897_, 0);
lean_inc(v_val_899_);
lean_dec_ref_known(v___x_897_, 1);
v___y_880_ = v_toCold_891_;
v___y_881_ = v_suppressElabErrors_893_;
v___y_882_ = v___f_896_;
v___y_883_ = v_ref_894_;
v___y_884_ = v___x_895_;
v___y_885_ = v___y_890_;
v___y_886_ = v_val_899_;
goto v___jp_879_;
}
}
v___jp_900_:
{
uint8_t v___x_901_; uint8_t v___x_902_; 
v___x_901_ = 1;
v___x_902_ = l_Lean_instBEqMessageSeverity_beq(v_severity_808_, v___x_901_);
if (v___x_902_ == 0)
{
v___y_890_ = v_severity_808_;
goto v___jp_889_;
}
else
{
lean_object* v___x_903_; lean_object* v___x_904_; uint8_t v___x_905_; 
v___x_903_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_812_);
v___x_904_ = l_Lean_warningAsError;
v___x_905_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v___x_903_, v___x_904_);
lean_dec_ref(v___x_903_);
if (v___x_905_ == 0)
{
v___y_890_ = v_severity_808_;
goto v___jp_889_;
}
else
{
uint8_t v___x_906_; 
v___x_906_ = 2;
v___y_890_ = v___x_906_;
goto v___jp_889_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___boxed(lean_object* v_ref_912_, lean_object* v_msgData_913_, lean_object* v_severity_914_, lean_object* v_isSilent_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_){
_start:
{
uint8_t v_severity_boxed_921_; uint8_t v_isSilent_boxed_922_; lean_object* v_res_923_; 
v_severity_boxed_921_ = lean_unbox(v_severity_914_);
v_isSilent_boxed_922_ = lean_unbox(v_isSilent_915_);
v_res_923_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_912_, v_msgData_913_, v_severity_boxed_921_, v_isSilent_boxed_922_, v___y_916_, v___y_917_, v___y_918_, v___y_919_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
lean_dec(v_ref_912_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(lean_object* v_as_924_, size_t v_sz_925_, size_t v_i_926_, lean_object* v_b_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
uint8_t v___x_935_; 
v___x_935_ = lean_usize_dec_lt(v_i_926_, v_sz_925_);
if (v___x_935_ == 0)
{
lean_object* v___x_936_; 
v___x_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_936_, 0, v_b_927_);
return v___x_936_;
}
else
{
lean_object* v_ref_937_; lean_object* v_a_938_; uint8_t v_severity_939_; uint8_t v_isSilent_940_; lean_object* v_data_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v_ref_937_ = lean_ctor_get(v___y_932_, 2);
v_a_938_ = lean_array_uget_borrowed(v_as_924_, v_i_926_);
v_severity_939_ = lean_ctor_get_uint8(v_a_938_, sizeof(void*)*5 + 1);
v_isSilent_940_ = lean_ctor_get_uint8(v_a_938_, sizeof(void*)*5 + 2);
v_data_941_ = lean_ctor_get(v_a_938_, 4);
v___x_942_ = lean_box(0);
lean_inc(v_data_941_);
v___x_943_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_937_, v_data_941_, v_severity_939_, v_isSilent_940_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
if (lean_obj_tag(v___x_943_) == 0)
{
size_t v___x_944_; size_t v___x_945_; 
lean_dec_ref_known(v___x_943_, 1);
v___x_944_ = ((size_t)1ULL);
v___x_945_ = lean_usize_add(v_i_926_, v___x_944_);
v_i_926_ = v___x_945_;
v_b_927_ = v___x_942_;
goto _start;
}
else
{
return v___x_943_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3___boxed(lean_object* v_as_947_, lean_object* v_sz_948_, lean_object* v_i_949_, lean_object* v_b_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
size_t v_sz_boxed_958_; size_t v_i_boxed_959_; lean_object* v_res_960_; 
v_sz_boxed_958_ = lean_unbox_usize(v_sz_948_);
lean_dec(v_sz_948_);
v_i_boxed_959_ = lean_unbox_usize(v_i_949_);
lean_dec(v_i_949_);
v_res_960_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(v_as_947_, v_sz_boxed_958_, v_i_boxed_959_, v_b_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_);
lean_dec(v___y_956_);
lean_dec_ref(v___y_955_);
lean_dec(v___y_954_);
lean_dec_ref(v___y_953_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
lean_dec_ref(v_as_947_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(uint8_t v_flag_961_, lean_object* v___y_962_){
_start:
{
lean_object* v___x_964_; lean_object* v_infoState_965_; lean_object* v_env_966_; lean_object* v_nextMacroScope_967_; lean_object* v_ngen_968_; lean_object* v_auxDeclNGen_969_; lean_object* v_traceState_970_; lean_object* v_cache_971_; lean_object* v_recordedDeps_972_; lean_object* v_messages_973_; lean_object* v_snapshotTasks_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_994_; 
v___x_964_ = lean_st_ref_take(v___y_962_);
v_infoState_965_ = lean_ctor_get(v___x_964_, 8);
v_env_966_ = lean_ctor_get(v___x_964_, 0);
v_nextMacroScope_967_ = lean_ctor_get(v___x_964_, 1);
v_ngen_968_ = lean_ctor_get(v___x_964_, 2);
v_auxDeclNGen_969_ = lean_ctor_get(v___x_964_, 3);
v_traceState_970_ = lean_ctor_get(v___x_964_, 4);
v_cache_971_ = lean_ctor_get(v___x_964_, 5);
v_recordedDeps_972_ = lean_ctor_get(v___x_964_, 6);
v_messages_973_ = lean_ctor_get(v___x_964_, 7);
v_snapshotTasks_974_ = lean_ctor_get(v___x_964_, 9);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_994_ == 0)
{
v___x_976_ = v___x_964_;
v_isShared_977_ = v_isSharedCheck_994_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_snapshotTasks_974_);
lean_inc(v_infoState_965_);
lean_inc(v_messages_973_);
lean_inc(v_recordedDeps_972_);
lean_inc(v_cache_971_);
lean_inc(v_traceState_970_);
lean_inc(v_auxDeclNGen_969_);
lean_inc(v_ngen_968_);
lean_inc(v_nextMacroScope_967_);
lean_inc(v_env_966_);
lean_dec(v___x_964_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_994_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v_assignment_978_; lean_object* v_lazyAssignment_979_; lean_object* v_trees_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_993_; 
v_assignment_978_ = lean_ctor_get(v_infoState_965_, 0);
v_lazyAssignment_979_ = lean_ctor_get(v_infoState_965_, 1);
v_trees_980_ = lean_ctor_get(v_infoState_965_, 2);
v_isSharedCheck_993_ = !lean_is_exclusive(v_infoState_965_);
if (v_isSharedCheck_993_ == 0)
{
v___x_982_ = v_infoState_965_;
v_isShared_983_ = v_isSharedCheck_993_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_trees_980_);
lean_inc(v_lazyAssignment_979_);
lean_inc(v_assignment_978_);
lean_dec(v_infoState_965_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_993_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_984_; lean_object* v___x_986_; 
v___x_984_ = lean_box(0);
if (v_isShared_983_ == 0)
{
v___x_986_ = v___x_982_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_assignment_978_);
lean_ctor_set(v_reuseFailAlloc_992_, 1, v_lazyAssignment_979_);
lean_ctor_set(v_reuseFailAlloc_992_, 2, v_trees_980_);
v___x_986_ = v_reuseFailAlloc_992_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
lean_object* v___x_988_; 
lean_ctor_set_uint8(v___x_986_, sizeof(void*)*3, v_flag_961_);
if (v_isShared_977_ == 0)
{
lean_ctor_set(v___x_976_, 8, v___x_986_);
v___x_988_ = v___x_976_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_env_966_);
lean_ctor_set(v_reuseFailAlloc_991_, 1, v_nextMacroScope_967_);
lean_ctor_set(v_reuseFailAlloc_991_, 2, v_ngen_968_);
lean_ctor_set(v_reuseFailAlloc_991_, 3, v_auxDeclNGen_969_);
lean_ctor_set(v_reuseFailAlloc_991_, 4, v_traceState_970_);
lean_ctor_set(v_reuseFailAlloc_991_, 5, v_cache_971_);
lean_ctor_set(v_reuseFailAlloc_991_, 6, v_recordedDeps_972_);
lean_ctor_set(v_reuseFailAlloc_991_, 7, v_messages_973_);
lean_ctor_set(v_reuseFailAlloc_991_, 8, v___x_986_);
lean_ctor_set(v_reuseFailAlloc_991_, 9, v_snapshotTasks_974_);
v___x_988_ = v_reuseFailAlloc_991_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = lean_st_ref_put(v___y_962_, v___x_988_);
v___x_990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_990_, 0, v___x_984_);
return v___x_990_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg___boxed(lean_object* v_flag_995_, lean_object* v___y_996_, lean_object* v___y_997_){
_start:
{
uint8_t v_flag_boxed_998_; lean_object* v_res_999_; 
v_flag_boxed_998_ = lean_unbox(v_flag_995_);
v_res_999_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_flag_boxed_998_, v___y_996_);
lean_dec(v___y_996_);
return v_res_999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(uint8_t v_flag_1000_, lean_object* v_x_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
lean_object* v___x_1009_; lean_object* v_infoState_1010_; uint8_t v_enabled_1011_; lean_object* v_a_1013_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1009_ = lean_st_ref_get(v___y_1007_);
v_infoState_1010_ = lean_ctor_get(v___x_1009_, 8);
lean_inc_ref(v_infoState_1010_);
lean_dec(v___x_1009_);
v_enabled_1011_ = lean_ctor_get_uint8(v_infoState_1010_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1010_);
v___x_1023_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_flag_1000_, v___y_1007_);
lean_dec_ref(v___x_1023_);
lean_inc(v___y_1007_);
lean_inc_ref(v___y_1006_);
lean_inc(v___y_1005_);
lean_inc_ref(v___y_1004_);
lean_inc(v___y_1003_);
lean_inc_ref(v___y_1002_);
v___x_1024_ = lean_apply_7(v_x_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_, lean_box(0));
if (lean_obj_tag(v___x_1024_) == 0)
{
lean_object* v_a_1025_; lean_object* v___x_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1033_; 
v_a_1025_ = lean_ctor_get(v___x_1024_, 0);
lean_inc(v_a_1025_);
lean_dec_ref_known(v___x_1024_, 1);
v___x_1026_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_enabled_1011_, v___y_1007_);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1033_ == 0)
{
lean_object* v_unused_1034_; 
v_unused_1034_ = lean_ctor_get(v___x_1026_, 0);
lean_dec(v_unused_1034_);
v___x_1028_ = v___x_1026_;
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
else
{
lean_dec(v___x_1026_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1031_; 
if (v_isShared_1029_ == 0)
{
lean_ctor_set(v___x_1028_, 0, v_a_1025_);
v___x_1031_ = v___x_1028_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_a_1025_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
else
{
lean_object* v_a_1035_; 
v_a_1035_ = lean_ctor_get(v___x_1024_, 0);
lean_inc(v_a_1035_);
lean_dec_ref_known(v___x_1024_, 1);
v_a_1013_ = v_a_1035_;
goto v___jp_1012_;
}
v___jp_1012_:
{
lean_object* v___x_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1021_; 
v___x_1014_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_enabled_1011_, v___y_1007_);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_1014_);
if (v_isSharedCheck_1021_ == 0)
{
lean_object* v_unused_1022_; 
v_unused_1022_ = lean_ctor_get(v___x_1014_, 0);
lean_dec(v_unused_1022_);
v___x_1016_ = v___x_1014_;
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
else
{
lean_dec(v___x_1014_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1019_; 
if (v_isShared_1017_ == 0)
{
lean_ctor_set_tag(v___x_1016_, 1);
lean_ctor_set(v___x_1016_, 0, v_a_1013_);
v___x_1019_ = v___x_1016_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_a_1013_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg___boxed(lean_object* v_flag_1036_, lean_object* v_x_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
uint8_t v_flag_boxed_1045_; lean_object* v_res_1046_; 
v_flag_boxed_1045_ = lean_unbox(v_flag_1036_);
v_res_1046_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(v_flag_boxed_1045_, v_x_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(lean_object* v_declName_1047_, lean_object* v_binders_1048_, lean_object* v_blocks_1049_, lean_object* v_fileMap_x3f_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_){
_start:
{
lean_object* v___x_1058_; 
v___x_1058_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v_a_1056_);
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_object* v_a_1059_; lean_object* v_a_1061_; size_t v_sz_1079_; size_t v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; uint8_t v___x_1083_; lean_object* v___x_1084_; lean_object* v___y_1085_; uint8_t v___x_1086_; lean_object* v___x_1087_; 
v_a_1059_ = lean_ctor_get(v___x_1058_, 0);
lean_inc(v_a_1059_);
lean_dec_ref_known(v___x_1058_, 1);
v_sz_1079_ = lean_array_size(v_blocks_1049_);
v___x_1080_ = ((size_t)0ULL);
v___x_1081_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(v_sz_1079_, v___x_1080_, v_blocks_1049_);
v___x_1082_ = lean_alloc_closure((void*)(l_Lean_Doc_elabBlocks___boxed), 11, 1);
lean_closure_set(v___x_1082_, 0, v___x_1081_);
v___x_1083_ = 1;
v___x_1084_ = lean_box(v___x_1083_);
v___y_1085_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0___boxed), 12, 5);
lean_closure_set(v___y_1085_, 0, v_fileMap_x3f_1050_);
lean_closure_set(v___y_1085_, 1, v_declName_1047_);
lean_closure_set(v___y_1085_, 2, v_binders_1048_);
lean_closure_set(v___y_1085_, 3, v___x_1082_);
lean_closure_set(v___y_1085_, 4, v___x_1084_);
v___x_1086_ = 0;
v___x_1087_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(v___x_1086_, v___y_1085_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1089_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1088_);
lean_dec_ref_known(v___x_1087_, 1);
v___x_1089_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v_a_1056_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v_a_1090_; lean_object* v___x_1091_; 
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_a_1090_);
lean_dec_ref_known(v___x_1089_, 1);
v___x_1091_ = l_Lean_Core_setMessageLog___redArg(v_a_1059_, v_a_1056_);
if (lean_obj_tag(v___x_1091_) == 0)
{
lean_object* v___x_1092_; lean_object* v___x_1093_; size_t v_sz_1094_; lean_object* v___x_1095_; 
lean_dec_ref_known(v___x_1091_, 1);
v___x_1092_ = l_Lean_MessageLog_toArray(v_a_1090_);
lean_dec(v_a_1090_);
v___x_1093_ = lean_box(0);
v_sz_1094_ = lean_array_size(v___x_1092_);
v___x_1095_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(v___x_1092_, v_sz_1094_, v___x_1080_, v___x_1093_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_);
lean_dec_ref(v___x_1092_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1120_; 
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1120_ == 0)
{
lean_object* v_unused_1121_; 
v_unused_1121_ = lean_ctor_get(v___x_1095_, 0);
lean_dec(v_unused_1121_);
v___x_1097_ = v___x_1095_;
v_isShared_1098_ = v_isSharedCheck_1120_;
goto v_resetjp_1096_;
}
else
{
lean_dec(v___x_1095_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1120_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v_fst_1099_; lean_object* v_snd_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1119_; 
v_fst_1099_ = lean_ctor_get(v_a_1088_, 0);
v_snd_1100_ = lean_ctor_get(v_a_1088_, 1);
v_isSharedCheck_1119_ = !lean_is_exclusive(v_a_1088_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1102_ = v_a_1088_;
v_isShared_1103_ = v_isSharedCheck_1119_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_snd_1100_);
lean_inc(v_fst_1099_);
lean_dec(v_a_1088_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1119_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v_fst_1104_; lean_object* v_snd_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1118_; 
v_fst_1104_ = lean_ctor_get(v_fst_1099_, 0);
v_snd_1105_ = lean_ctor_get(v_fst_1099_, 1);
v_isSharedCheck_1118_ = !lean_is_exclusive(v_fst_1099_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1107_ = v_fst_1099_;
v_isShared_1108_ = v_isSharedCheck_1118_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_snd_1105_);
lean_inc(v_fst_1104_);
lean_dec(v_fst_1099_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1118_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1108_ == 0)
{
v___x_1110_ = v___x_1107_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_fst_1104_);
lean_ctor_set(v_reuseFailAlloc_1117_, 1, v_snd_1105_);
v___x_1110_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
lean_object* v___x_1112_; 
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 0, v___x_1110_);
v___x_1112_ = v___x_1102_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1116_, 1, v_snd_1100_);
v___x_1112_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
lean_object* v___x_1114_; 
if (v_isShared_1098_ == 0)
{
lean_ctor_set(v___x_1097_, 0, v___x_1112_);
v___x_1114_ = v___x_1097_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v___x_1112_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1129_; 
lean_dec(v_a_1088_);
v_a_1122_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1124_ = v___x_1095_;
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_a_1122_);
lean_dec(v___x_1095_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1127_; 
if (v_isShared_1125_ == 0)
{
v___x_1127_ = v___x_1124_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_a_1122_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
}
}
else
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1137_; 
lean_dec(v_a_1090_);
lean_dec(v_a_1088_);
v_a_1130_ = lean_ctor_get(v___x_1091_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1132_ = v___x_1091_;
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v___x_1091_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1130_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
}
else
{
lean_object* v_a_1138_; 
lean_dec(v_a_1088_);
v_a_1138_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_a_1138_);
lean_dec_ref_known(v___x_1089_, 1);
v_a_1061_ = v_a_1138_;
goto v___jp_1060_;
}
}
else
{
lean_object* v_a_1139_; 
v_a_1139_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1139_);
lean_dec_ref_known(v___x_1087_, 1);
v_a_1061_ = v_a_1139_;
goto v___jp_1060_;
}
v___jp_1060_:
{
lean_object* v___x_1062_; 
v___x_1062_ = l_Lean_Core_setMessageLog___redArg(v_a_1059_, v_a_1056_);
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1069_; 
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1069_ == 0)
{
lean_object* v_unused_1070_; 
v_unused_1070_ = lean_ctor_get(v___x_1062_, 0);
lean_dec(v_unused_1070_);
v___x_1064_ = v___x_1062_;
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
else
{
lean_dec(v___x_1062_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1067_; 
if (v_isShared_1065_ == 0)
{
lean_ctor_set_tag(v___x_1064_, 1);
lean_ctor_set(v___x_1064_, 0, v_a_1061_);
v___x_1067_ = v___x_1064_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_a_1061_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
else
{
lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1078_; 
lean_dec_ref(v_a_1061_);
v_a_1071_ = lean_ctor_get(v___x_1062_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1073_ = v___x_1062_;
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1062_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1076_; 
if (v_isShared_1074_ == 0)
{
v___x_1076_ = v___x_1073_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_a_1071_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
}
else
{
lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1147_; 
lean_dec(v_fileMap_x3f_1050_);
lean_dec_ref(v_blocks_1049_);
lean_dec(v_binders_1048_);
lean_dec(v_declName_1047_);
v_a_1140_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1147_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1142_ = v___x_1058_;
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_a_1140_);
lean_dec(v___x_1058_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1145_; 
if (v_isShared_1143_ == 0)
{
v___x_1145_ = v___x_1142_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v_a_1140_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___boxed(lean_object* v_declName_1148_, lean_object* v_binders_1149_, lean_object* v_blocks_1150_, lean_object* v_fileMap_x3f_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(v_declName_1148_, v_binders_1149_, v_blocks_1150_, v_fileMap_x3f_1151_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_);
lean_dec(v_a_1157_);
lean_dec_ref(v_a_1156_);
lean_dec(v_a_1155_);
lean_dec_ref(v_a_1154_);
lean_dec(v_a_1153_);
lean_dec_ref(v_a_1152_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1(uint8_t v_flag_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
lean_object* v___x_1168_; 
v___x_1168_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_flag_1160_, v___y_1166_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___boxed(lean_object* v_flag_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_){
_start:
{
uint8_t v_flag_boxed_1177_; lean_object* v_res_1178_; 
v_flag_boxed_1177_ = lean_unbox(v_flag_1169_);
v_res_1178_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1(v_flag_boxed_1177_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_);
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
lean_dec(v___y_1173_);
lean_dec_ref(v___y_1172_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1(lean_object* v_00_u03b1_1179_, uint8_t v_flag_1180_, lean_object* v_x_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_){
_start:
{
lean_object* v___x_1189_; 
v___x_1189_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(v_flag_1180_, v_x_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___boxed(lean_object* v_00_u03b1_1190_, lean_object* v_flag_1191_, lean_object* v_x_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
uint8_t v_flag_boxed_1200_; lean_object* v_res_1201_; 
v_flag_boxed_1200_ = lean_unbox(v_flag_1191_);
v_res_1201_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1(v_00_u03b1_1190_, v_flag_boxed_1200_, v_x_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_);
lean_dec(v___y_1198_);
lean_dec_ref(v___y_1197_);
lean_dec(v___y_1196_);
lean_dec_ref(v___y_1195_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
return v_res_1201_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2(lean_object* v_ref_1202_, lean_object* v_msgData_1203_, uint8_t v_severity_1204_, uint8_t v_isSilent_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1202_, v_msgData_1203_, v_severity_1204_, v_isSilent_1205_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___boxed(lean_object* v_ref_1214_, lean_object* v_msgData_1215_, lean_object* v_severity_1216_, lean_object* v_isSilent_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_){
_start:
{
uint8_t v_severity_boxed_1225_; uint8_t v_isSilent_boxed_1226_; lean_object* v_res_1227_; 
v_severity_boxed_1225_ = lean_unbox(v_severity_1216_);
v_isSilent_boxed_1226_ = lean_unbox(v_isSilent_1217_);
v_res_1227_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2(v_ref_1214_, v_msgData_1215_, v_severity_boxed_1225_, v_isSilent_boxed_1226_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
lean_dec(v___y_1223_);
lean_dec_ref(v___y_1222_);
lean_dec(v___y_1221_);
lean_dec_ref(v___y_1220_);
lean_dec(v___y_1219_);
lean_dec_ref(v___y_1218_);
lean_dec(v_ref_1214_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(lean_object* v_msgData_1228_, uint8_t v_severity_1229_, uint8_t v_isSilent_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
lean_object* v_ref_1236_; lean_object* v___x_1237_; 
v_ref_1236_ = lean_ctor_get(v___y_1233_, 2);
v___x_1237_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1236_, v_msgData_1228_, v_severity_1229_, v_isSilent_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_);
return v___x_1237_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg___boxed(lean_object* v_msgData_1238_, lean_object* v_severity_1239_, lean_object* v_isSilent_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
uint8_t v_severity_boxed_1246_; uint8_t v_isSilent_boxed_1247_; lean_object* v_res_1248_; 
v_severity_boxed_1246_ = lean_unbox(v_severity_1239_);
v_isSilent_boxed_1247_ = lean_unbox(v_isSilent_1240_);
v_res_1248_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(v_msgData_1238_, v_severity_boxed_1246_, v_isSilent_boxed_1247_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec_ref(v___y_1241_);
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(lean_object* v_msgData_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_){
_start:
{
uint8_t v___x_1257_; uint8_t v___x_1258_; lean_object* v___x_1259_; 
v___x_1257_ = 2;
v___x_1258_ = 0;
v___x_1259_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(v_msgData_1249_, v___x_1257_, v___x_1258_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0___boxed(lean_object* v_msgData_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(v_msgData_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
lean_dec(v___y_1266_);
lean_dec_ref(v___y_1265_);
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
lean_dec(v___y_1262_);
lean_dec_ref(v___y_1261_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(lean_object* v_as_1269_, size_t v_sz_1270_, size_t v_i_1271_, lean_object* v_b_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_){
_start:
{
uint8_t v___x_1280_; 
v___x_1280_ = lean_usize_dec_lt(v_i_1271_, v_sz_1270_);
if (v___x_1280_ == 0)
{
lean_object* v___x_1281_; 
v___x_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1281_, 0, v_b_1272_);
return v___x_1281_;
}
else
{
lean_object* v_a_1282_; lean_object* v_snd_1283_; lean_object* v_snd_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
v_a_1282_ = lean_array_uget_borrowed(v_as_1269_, v_i_1271_);
v_snd_1283_ = lean_ctor_get(v_a_1282_, 1);
v_snd_1284_ = lean_ctor_get(v_snd_1283_, 1);
v___x_1285_ = lean_box(0);
lean_inc(v_snd_1284_);
v___x_1286_ = l_Lean_Parser_Error_toString(v_snd_1284_);
v___x_1287_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1286_);
v___x_1288_ = l_Lean_MessageData_ofFormat(v___x_1287_);
v___x_1289_ = l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(v___x_1288_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_);
if (lean_obj_tag(v___x_1289_) == 0)
{
size_t v___x_1290_; size_t v___x_1291_; 
lean_dec_ref_known(v___x_1289_, 1);
v___x_1290_ = ((size_t)1ULL);
v___x_1291_ = lean_usize_add(v_i_1271_, v___x_1290_);
v_i_1271_ = v___x_1291_;
v_b_1272_ = v___x_1285_;
goto _start;
}
else
{
return v___x_1289_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1___boxed(lean_object* v_as_1293_, lean_object* v_sz_1294_, lean_object* v_i_1295_, lean_object* v_b_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_){
_start:
{
size_t v_sz_boxed_1304_; size_t v_i_boxed_1305_; lean_object* v_res_1306_; 
v_sz_boxed_1304_ = lean_unbox_usize(v_sz_1294_);
lean_dec(v_sz_1294_);
v_i_boxed_1305_ = lean_unbox_usize(v_i_1295_);
lean_dec(v_i_1295_);
v_res_1306_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(v_as_1293_, v_sz_boxed_1304_, v_i_boxed_1305_, v_b_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec_ref(v_as_1293_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText(lean_object* v_declName_1325_, lean_object* v_binders_1326_, lean_object* v_docComment_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_){
_start:
{
lean_object* v___x_1335_; lean_object* v_toCold_1336_; lean_object* v_env_1337_; lean_object* v_fileName_1338_; lean_object* v_currNamespace_1339_; lean_object* v_openDecls_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; uint8_t v___x_1353_; 
v___x_1335_ = lean_st_ref_get(v_a_1333_);
v_toCold_1336_ = lean_ctor_get(v_a_1332_, 0);
v_env_1337_ = lean_ctor_get(v___x_1335_, 0);
lean_inc_ref_n(v_env_1337_, 2);
lean_dec(v___x_1335_);
v_fileName_1338_ = lean_ctor_get(v_toCold_1336_, 0);
v_currNamespace_1339_ = lean_ctor_get(v_toCold_1336_, 4);
v_openDecls_1340_ = lean_ctor_get(v_toCold_1336_, 5);
v___x_1341_ = lean_string_utf8_byte_size(v_docComment_1327_);
lean_inc_ref_n(v_docComment_1327_, 2);
v___x_1342_ = l_Lean_FileMap_ofString(v_docComment_1327_);
lean_inc_ref(v___x_1342_);
lean_inc_ref(v_fileName_1338_);
v___x_1343_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1343_, 0, v_docComment_1327_);
lean_ctor_set(v___x_1343_, 1, v_fileName_1338_);
lean_ctor_set(v___x_1343_, 2, v___x_1342_);
lean_ctor_set(v___x_1343_, 3, v___x_1341_);
v___x_1344_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_1332_);
lean_inc(v_openDecls_1340_);
lean_inc(v_currNamespace_1339_);
v___x_1345_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1345_, 0, v_env_1337_);
lean_ctor_set(v___x_1345_, 1, v___x_1344_);
lean_ctor_set(v___x_1345_, 2, v_currNamespace_1339_);
lean_ctor_set(v___x_1345_, 3, v_openDecls_1340_);
v___x_1346_ = l_Lean_Parser_mkParserState(v_docComment_1327_);
lean_dec_ref(v_docComment_1327_);
v___x_1347_ = lean_unsigned_to_nat(0u);
v___x_1348_ = ((lean_object*)(l_Lean_versoDocStringOfText___closed__2));
v___x_1349_ = l_Lean_Parser_getTokenTable(v_env_1337_);
v___x_1350_ = l_Lean_Parser_ParserFn_run(v___x_1348_, v___x_1343_, v___x_1345_, v___x_1349_, v___x_1346_);
lean_inc_ref(v___x_1350_);
v___x_1351_ = l_Lean_Parser_ParserState_allErrors(v___x_1350_);
v___x_1352_ = lean_array_get_size(v___x_1351_);
v___x_1353_ = lean_nat_dec_eq(v___x_1352_, v___x_1347_);
if (v___x_1353_ == 0)
{
lean_object* v___x_1354_; size_t v_sz_1355_; size_t v___x_1356_; lean_object* v___x_1357_; 
lean_dec_ref(v___x_1350_);
lean_dec_ref(v___x_1342_);
lean_dec(v_binders_1326_);
lean_dec(v_declName_1325_);
v___x_1354_ = lean_box(0);
v_sz_1355_ = lean_array_size(v___x_1351_);
v___x_1356_ = ((size_t)0ULL);
v___x_1357_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(v___x_1351_, v_sz_1355_, v___x_1356_, v___x_1354_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_);
lean_dec_ref(v___x_1351_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1365_; 
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1365_ == 0)
{
lean_object* v_unused_1366_; 
v_unused_1366_ = lean_ctor_get(v___x_1357_, 0);
lean_dec(v_unused_1366_);
v___x_1359_ = v___x_1357_;
v_isShared_1360_ = v_isSharedCheck_1365_;
goto v_resetjp_1358_;
}
else
{
lean_dec(v___x_1357_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1365_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1361_; lean_object* v___x_1363_; 
v___x_1361_ = ((lean_object*)(l_Lean_versoDocStringOfText___closed__5));
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 0, v___x_1361_);
v___x_1363_ = v___x_1359_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v___x_1361_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
else
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
v_a_1367_ = lean_ctor_get(v___x_1357_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1369_ = v___x_1357_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1357_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1370_ == 0)
{
v___x_1372_ = v___x_1369_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1367_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
}
else
{
lean_object* v_stxStack_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; 
lean_dec_ref(v___x_1351_);
v_stxStack_1375_ = lean_ctor_get(v___x_1350_, 0);
lean_inc_ref(v_stxStack_1375_);
lean_dec_ref(v___x_1350_);
v___x_1376_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1375_);
lean_dec_ref(v_stxStack_1375_);
v___x_1377_ = l_Lean_TSyntax_getVersoBlocks(v___x_1376_);
lean_dec(v___x_1376_);
v___x_1378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1342_);
v___x_1379_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(v_declName_1325_, v_binders_1326_, v___x_1377_, v___x_1378_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_);
return v___x_1379_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText___boxed(lean_object* v_declName_1380_, lean_object* v_binders_1381_, lean_object* v_docComment_1382_, lean_object* v_a_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_){
_start:
{
lean_object* v_res_1390_; 
v_res_1390_ = l_Lean_versoDocStringOfText(v_declName_1380_, v_binders_1381_, v_docComment_1382_, v_a_1383_, v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_, v_a_1388_);
lean_dec(v_a_1388_);
lean_dec_ref(v_a_1387_);
lean_dec(v_a_1386_);
lean_dec_ref(v_a_1385_);
lean_dec(v_a_1384_);
lean_dec_ref(v_a_1383_);
return v_res_1390_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0(lean_object* v_msgData_1391_, uint8_t v_severity_1392_, uint8_t v_isSilent_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_){
_start:
{
lean_object* v___x_1401_; 
v___x_1401_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(v_msgData_1391_, v_severity_1392_, v_isSilent_1393_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_);
return v___x_1401_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___boxed(lean_object* v_msgData_1402_, lean_object* v_severity_1403_, lean_object* v_isSilent_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
uint8_t v_severity_boxed_1412_; uint8_t v_isSilent_boxed_1413_; lean_object* v_res_1414_; 
v_severity_boxed_1412_ = lean_unbox(v_severity_1403_);
v_isSilent_boxed_1413_ = lean_unbox(v_isSilent_1404_);
v_res_1414_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0(v_msgData_1402_, v_severity_boxed_1412_, v_isSilent_boxed_1413_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_);
lean_dec(v___y_1410_);
lean_dec_ref(v___y_1409_);
lean_dec(v___y_1408_);
lean_dec_ref(v___y_1407_);
lean_dec(v___y_1406_);
lean_dec_ref(v___y_1405_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocString(lean_object* v_declName_1424_, lean_object* v_binders_1425_, lean_object* v_docComment_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_){
_start:
{
lean_object* v___x_1434_; 
v___x_1434_ = l_Lean_docStringRange(v_docComment_1426_);
if (lean_obj_tag(v___x_1434_) == 0)
{
lean_object* v___x_1435_; lean_object* v_body_1436_; lean_object* v___x_1437_; uint8_t v___x_1438_; 
lean_dec_ref_known(v___x_1434_, 1);
v___x_1435_ = lean_unsigned_to_nat(1u);
v_body_1436_ = l_Lean_Syntax_getArg(v_docComment_1426_, v___x_1435_);
v___x_1437_ = ((lean_object*)(l_Lean_versoDocString___closed__4));
v___x_1438_ = l_Lean_Syntax_isOfKind(v_body_1436_, v___x_1437_);
if (v___x_1438_ == 0)
{
lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1439_ = l_Lean_TSyntax_getDocString(v_docComment_1426_);
v___x_1440_ = l_Lean_versoDocStringOfText(v_declName_1424_, v_binders_1425_, v___x_1439_, v_a_1427_, v_a_1428_, v_a_1429_, v_a_1430_, v_a_1431_, v_a_1432_);
return v___x_1440_;
}
else
{
lean_object* v___x_1441_; lean_object* v_markup_1442_; 
v___x_1441_ = l_Lean_VersoDocstringView_of(v_docComment_1426_);
v_markup_1442_ = lean_ctor_get(v___x_1441_, 1);
lean_inc_ref(v_markup_1442_);
lean_dec_ref(v___x_1441_);
if (lean_obj_tag(v_markup_1442_) == 0)
{
lean_object* v_doc_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v_doc_1443_ = lean_ctor_get(v_markup_1442_, 0);
lean_inc(v_doc_1443_);
lean_dec_ref_known(v_markup_1442_, 1);
v___x_1444_ = l_Lean_TSyntax_getVersoBlocks(v_doc_1443_);
lean_dec(v_doc_1443_);
v___x_1445_ = lean_box(0);
v___x_1446_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(v_declName_1424_, v_binders_1425_, v___x_1444_, v___x_1445_, v_a_1427_, v_a_1428_, v_a_1429_, v_a_1430_, v_a_1431_, v_a_1432_);
return v___x_1446_;
}
else
{
lean_object* v_text_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v_text_1447_ = lean_ctor_get(v_markup_1442_, 0);
lean_inc(v_text_1447_);
lean_dec_ref_known(v_markup_1442_, 1);
v___x_1448_ = l_Lean_Syntax_getAtomVal(v_text_1447_);
lean_dec(v_text_1447_);
v___x_1449_ = l_Lean_versoDocStringOfText(v_declName_1424_, v_binders_1425_, v___x_1448_, v_a_1427_, v_a_1428_, v_a_1429_, v_a_1430_, v_a_1431_, v_a_1432_);
return v___x_1449_;
}
}
}
else
{
lean_object* v___x_1450_; 
lean_dec_ref_known(v___x_1434_, 1);
v___x_1450_ = l_Lean_parseVersoDocString(v_docComment_1426_, v_a_1431_, v_a_1432_);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v_a_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1498_; 
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1453_ = v___x_1450_;
v_isShared_1454_ = v_isSharedCheck_1498_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_a_1451_);
lean_dec(v___x_1450_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1498_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
if (lean_obj_tag(v_a_1451_) == 1)
{
lean_object* v_val_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; uint8_t v___x_1458_; lean_object* v___x_1459_; 
lean_del_object(v___x_1453_);
v_val_1455_ = lean_ctor_get(v_a_1451_, 0);
lean_inc(v_val_1455_);
lean_dec_ref_known(v_a_1451_, 1);
v___x_1456_ = l_Lean_TSyntax_getVersoBlocks(v_val_1455_);
lean_dec(v_val_1455_);
v___x_1457_ = lean_alloc_closure((void*)(l_Lean_Doc_elabBlocks___boxed), 11, 1);
lean_closure_set(v___x_1457_, 0, v___x_1456_);
v___x_1458_ = 0;
v___x_1459_ = l_Lean_Doc_DocM_exec___redArg(v_declName_1424_, v_binders_1425_, v___x_1457_, v___x_1458_, v_a_1427_, v_a_1428_, v_a_1429_, v_a_1430_, v_a_1431_, v_a_1432_);
if (lean_obj_tag(v___x_1459_) == 0)
{
lean_object* v_a_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1485_; 
v_a_1460_ = lean_ctor_get(v___x_1459_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1459_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1462_ = v___x_1459_;
v_isShared_1463_ = v_isSharedCheck_1485_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_a_1460_);
lean_dec(v___x_1459_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1485_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v_fst_1464_; lean_object* v_snd_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1484_; 
v_fst_1464_ = lean_ctor_get(v_a_1460_, 0);
v_snd_1465_ = lean_ctor_get(v_a_1460_, 1);
v_isSharedCheck_1484_ = !lean_is_exclusive(v_a_1460_);
if (v_isSharedCheck_1484_ == 0)
{
v___x_1467_ = v_a_1460_;
v_isShared_1468_ = v_isSharedCheck_1484_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_snd_1465_);
lean_inc(v_fst_1464_);
lean_dec(v_a_1460_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1484_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v_fst_1469_; lean_object* v_snd_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1483_; 
v_fst_1469_ = lean_ctor_get(v_fst_1464_, 0);
v_snd_1470_ = lean_ctor_get(v_fst_1464_, 1);
v_isSharedCheck_1483_ = !lean_is_exclusive(v_fst_1464_);
if (v_isSharedCheck_1483_ == 0)
{
v___x_1472_ = v_fst_1464_;
v_isShared_1473_ = v_isSharedCheck_1483_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_snd_1470_);
lean_inc(v_fst_1469_);
lean_dec(v_fst_1464_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1483_;
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
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_fst_1469_);
lean_ctor_set(v_reuseFailAlloc_1482_, 1, v_snd_1470_);
v___x_1475_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
lean_object* v___x_1477_; 
if (v_isShared_1468_ == 0)
{
lean_ctor_set(v___x_1467_, 0, v___x_1475_);
v___x_1477_ = v___x_1467_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v___x_1475_);
lean_ctor_set(v_reuseFailAlloc_1481_, 1, v_snd_1465_);
v___x_1477_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
lean_object* v___x_1479_; 
if (v_isShared_1463_ == 0)
{
lean_ctor_set(v___x_1462_, 0, v___x_1477_);
v___x_1479_ = v___x_1462_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v___x_1477_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
v_a_1486_ = lean_ctor_get(v___x_1459_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1459_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1488_ = v___x_1459_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_a_1486_);
lean_dec(v___x_1459_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_a_1486_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
}
else
{
lean_object* v___x_1494_; lean_object* v___x_1496_; 
lean_dec(v_a_1451_);
lean_dec(v_binders_1425_);
lean_dec(v_declName_1424_);
v___x_1494_ = ((lean_object*)(l_Lean_versoDocStringOfText___closed__5));
if (v_isShared_1454_ == 0)
{
lean_ctor_set(v___x_1453_, 0, v___x_1494_);
v___x_1496_ = v___x_1453_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v___x_1494_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
}
else
{
lean_object* v_a_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1506_; 
lean_dec(v_binders_1425_);
lean_dec(v_declName_1424_);
v_a_1499_ = lean_ctor_get(v___x_1450_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1501_ = v___x_1450_;
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_a_1499_);
lean_dec(v___x_1450_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1504_; 
if (v_isShared_1502_ == 0)
{
v___x_1504_ = v___x_1501_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_a_1499_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocString___boxed(lean_object* v_declName_1507_, lean_object* v_binders_1508_, lean_object* v_docComment_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lean_versoDocString(v_declName_1507_, v_binders_1508_, v_docComment_1509_, v_a_1510_, v_a_1511_, v_a_1512_, v_a_1513_, v_a_1514_, v_a_1515_);
lean_dec(v_a_1515_);
lean_dec_ref(v_a_1514_);
lean_dec(v_a_1513_);
lean_dec_ref(v_a_1512_);
lean_dec(v_a_1511_);
lean_dec_ref(v_a_1510_);
lean_dec(v_docComment_1509_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoModDocString(lean_object* v_range_1518_, lean_object* v_doc_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_){
_start:
{
lean_object* v___x_1527_; lean_object* v___y_1529_; lean_object* v___y_1530_; lean_object* v_env_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1527_ = lean_st_ref_get(v_a_1525_);
v_env_1534_ = lean_ctor_get(v___x_1527_, 0);
lean_inc_ref(v_env_1534_);
lean_dec(v___x_1527_);
v___x_1535_ = l_Lean_getMainVersoModuleDocs(v_env_1534_);
v___x_1536_ = l_Lean_VersoModuleDocs_terminalNesting(v___x_1535_);
lean_dec_ref(v___x_1535_);
if (lean_obj_tag(v___x_1536_) == 0)
{
lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1537_ = l_Lean_TSyntax_getVersoBlocks(v_doc_1519_);
v___x_1538_ = lean_unsigned_to_nat(0u);
v___y_1529_ = v___x_1537_;
v___y_1530_ = v___x_1538_;
goto v___jp_1528_;
}
else
{
lean_object* v_val_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v_val_1539_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_val_1539_);
lean_dec_ref_known(v___x_1536_, 1);
v___x_1540_ = lean_unsigned_to_nat(1u);
v___x_1541_ = lean_nat_add(v_val_1539_, v___x_1540_);
lean_dec(v_val_1539_);
v___x_1542_ = l_Lean_TSyntax_getVersoBlocks(v_doc_1519_);
v___y_1529_ = v___x_1542_;
v___y_1530_ = v___x_1541_;
goto v___jp_1528_;
}
v___jp_1528_:
{
lean_object* v___x_1531_; uint8_t v___x_1532_; lean_object* v___x_1533_; 
v___x_1531_ = lean_alloc_closure((void*)(l_Lean_Doc_elabModSnippet___boxed), 13, 3);
lean_closure_set(v___x_1531_, 0, v_range_1518_);
lean_closure_set(v___x_1531_, 1, v___y_1529_);
lean_closure_set(v___x_1531_, 2, v___y_1530_);
v___x_1532_ = 0;
v___x_1533_ = l_Lean_Doc_DocM_execForModule___redArg(v___x_1531_, v___x_1532_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
return v___x_1533_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoModDocString___boxed(lean_object* v_range_1543_, lean_object* v_doc_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l_Lean_versoModDocString(v_range_1543_, v_doc_1544_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_, v_a_1549_, v_a_1550_);
lean_dec(v_a_1550_);
lean_dec_ref(v_a_1549_);
lean_dec(v_a_1548_);
lean_dec_ref(v_a_1547_);
lean_dec(v_a_1546_);
lean_dec_ref(v_a_1545_);
lean_dec(v_doc_1544_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString(lean_object* v_declName_1562_, lean_object* v_docComment_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_){
_start:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1571_ = ((lean_object*)(l_Lean_versoDocStringFromString___closed__3));
v___x_1572_ = l_Lean_versoDocStringOfText(v_declName_1562_, v___x_1571_, v_docComment_1563_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___boxed(lean_object* v_declName_1573_, lean_object* v_docComment_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l_Lean_versoDocStringFromString(v_declName_1573_, v_docComment_1574_, v_a_1575_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_, v_a_1580_);
lean_dec(v_a_1580_);
lean_dec_ref(v_a_1579_);
lean_dec(v_a_1578_);
lean_dec_ref(v_a_1577_);
lean_dec(v_a_1576_);
lean_dec_ref(v_a_1575_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0(lean_object* v_docString_1583_, lean_object* v_declName_1584_, lean_object* v_env_1585_){
_start:
{
lean_object* v___x_1586_; lean_object* v___x_1587_; uint8_t v___x_1588_; lean_object* v___x_1589_; 
v___x_1586_ = l_Lean_docStringExt;
v___x_1587_ = l_String_removeLeadingSpaces(v_docString_1583_);
v___x_1588_ = 1;
v___x_1589_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1586_, v_env_1585_, v_declName_1584_, v___x_1587_, v___x_1588_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1(lean_object* v_declName_1590_, lean_object* v_modifyEnv_1591_, lean_object* v_docString_1592_){
_start:
{
lean_object* v___f_1593_; lean_object* v___x_1594_; 
v___f_1593_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1593_, 0, v_docString_1592_);
lean_closure_set(v___f_1593_, 1, v_declName_1590_);
v___x_1594_ = lean_apply_1(v_modifyEnv_1591_, v___f_1593_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__2(lean_object* v_inst_1595_, lean_object* v_inst_1596_, lean_object* v_docComment_1597_, lean_object* v_toBind_1598_, lean_object* v___f_1599_, lean_object* v_____r_1600_){
_start:
{
lean_object* v___x_1601_; lean_object* v___x_1602_; 
v___x_1601_ = l_Lean_getDocStringText___redArg(v_inst_1595_, v_inst_1596_, v_docComment_1597_);
v___x_1602_ = lean_apply_4(v_toBind_1598_, lean_box(0), lean_box(0), v___x_1601_, v___f_1599_);
return v___x_1602_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3(lean_object* v_inst_1603_, lean_object* v_inst_1604_, lean_object* v_inst_1605_, lean_object* v_inst_1606_, lean_object* v_inst_1607_, lean_object* v_docComment_1608_, lean_object* v_toBind_1609_, lean_object* v___f_1610_, lean_object* v_____r_1611_){
_start:
{
lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1612_ = l_Lean_validateDocComment___redArg(v_inst_1603_, v_inst_1604_, v_inst_1605_, v_inst_1606_, v_inst_1607_, v_docComment_1608_);
v___x_1613_ = lean_apply_4(v_toBind_1609_, lean_box(0), lean_box(0), v___x_1612_, v___f_1610_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3___boxed(lean_object* v_inst_1614_, lean_object* v_inst_1615_, lean_object* v_inst_1616_, lean_object* v_inst_1617_, lean_object* v_inst_1618_, lean_object* v_docComment_1619_, lean_object* v_toBind_1620_, lean_object* v___f_1621_, lean_object* v_____r_1622_){
_start:
{
lean_object* v_res_1623_; 
v_res_1623_ = l_Lean_addMarkdownDocString___redArg___lam__3(v_inst_1614_, v_inst_1615_, v_inst_1616_, v_inst_1617_, v_inst_1618_, v_docComment_1619_, v_toBind_1620_, v___f_1621_, v_____r_1622_);
lean_dec(v_docComment_1619_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__4(lean_object* v___f_1624_, lean_object* v_____r_1625_){
_start:
{
lean_object* v___x_1626_; 
v___x_1626_ = lean_apply_1(v___f_1624_, v_____r_1625_);
return v___x_1626_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1628_ = ((lean_object*)(l_Lean_addMarkdownDocString___redArg___lam__5___closed__0));
v___x_1629_ = l_Lean_stringToMessageData(v___x_1628_);
return v___x_1629_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1631_ = ((lean_object*)(l_Lean_addMarkdownDocString___redArg___lam__5___closed__2));
v___x_1632_ = l_Lean_stringToMessageData(v___x_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5(lean_object* v_declName_1633_, lean_object* v___f_1634_, uint8_t v___x_1635_, lean_object* v_inst_1636_, lean_object* v_inst_1637_, lean_object* v_toBind_1638_, lean_object* v___f_1639_, lean_object* v_____do__lift_1640_){
_start:
{
lean_object* v___x_1641_; 
v___x_1641_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_1640_, v_declName_1633_);
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v___x_1642_; lean_object* v___x_1643_; 
lean_dec(v___f_1639_);
lean_dec(v_toBind_1638_);
lean_dec_ref(v_inst_1637_);
lean_dec_ref(v_inst_1636_);
lean_dec(v_declName_1633_);
v___x_1642_ = lean_box(0);
v___x_1643_ = lean_apply_1(v___f_1634_, v___x_1642_);
return v___x_1643_;
}
else
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
lean_dec_ref_known(v___x_1641_, 1);
lean_dec(v___f_1634_);
v___x_1644_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__1, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1);
v___x_1645_ = l_Lean_MessageData_ofConstName(v_declName_1633_, v___x_1635_);
v___x_1646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1646_, 0, v___x_1644_);
lean_ctor_set(v___x_1646_, 1, v___x_1645_);
v___x_1647_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_1648_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1648_, 0, v___x_1646_);
lean_ctor_set(v___x_1648_, 1, v___x_1647_);
v___x_1649_ = l_Lean_throwError___redArg(v_inst_1636_, v_inst_1637_, v___x_1648_);
v___x_1650_ = lean_apply_4(v_toBind_1638_, lean_box(0), lean_box(0), v___x_1649_, v___f_1639_);
return v___x_1650_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___boxed(lean_object* v_declName_1651_, lean_object* v___f_1652_, lean_object* v___x_1653_, lean_object* v_inst_1654_, lean_object* v_inst_1655_, lean_object* v_toBind_1656_, lean_object* v___f_1657_, lean_object* v_____do__lift_1658_){
_start:
{
uint8_t v___x_327__boxed_1659_; lean_object* v_res_1660_; 
v___x_327__boxed_1659_ = lean_unbox(v___x_1653_);
v_res_1660_ = l_Lean_addMarkdownDocString___redArg___lam__5(v_declName_1651_, v___f_1652_, v___x_327__boxed_1659_, v_inst_1654_, v_inst_1655_, v_toBind_1656_, v___f_1657_, v_____do__lift_1658_);
lean_dec_ref(v_____do__lift_1658_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg(lean_object* v_inst_1661_, lean_object* v_inst_1662_, lean_object* v_inst_1663_, lean_object* v_inst_1664_, lean_object* v_inst_1665_, lean_object* v_inst_1666_, lean_object* v_inst_1667_, lean_object* v_declName_1668_, lean_object* v_docComment_1669_){
_start:
{
lean_object* v_toApplicative_1670_; lean_object* v_toBind_1671_; lean_object* v_toPure_1672_; uint8_t v___x_1673_; 
v_toApplicative_1670_ = lean_ctor_get(v_inst_1661_, 0);
v_toBind_1671_ = lean_ctor_get(v_inst_1661_, 1);
lean_inc(v_toBind_1671_);
v_toPure_1672_ = lean_ctor_get(v_toApplicative_1670_, 1);
v___x_1673_ = l_Lean_Name_isAnonymous(v_declName_1668_);
if (v___x_1673_ == 0)
{
lean_object* v_getEnv_1674_; lean_object* v_modifyEnv_1675_; lean_object* v___f_1676_; lean_object* v___f_1677_; lean_object* v___f_1678_; lean_object* v___f_1679_; lean_object* v___x_1680_; lean_object* v___f_1681_; lean_object* v___x_1682_; 
v_getEnv_1674_ = lean_ctor_get(v_inst_1664_, 0);
lean_inc(v_getEnv_1674_);
v_modifyEnv_1675_ = lean_ctor_get(v_inst_1664_, 1);
lean_inc(v_modifyEnv_1675_);
lean_dec_ref(v_inst_1664_);
lean_inc(v_declName_1668_);
v___f_1676_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1676_, 0, v_declName_1668_);
lean_closure_set(v___f_1676_, 1, v_modifyEnv_1675_);
lean_inc_n(v_toBind_1671_, 3);
lean_inc(v_docComment_1669_);
lean_inc_ref(v_inst_1665_);
lean_inc_ref_n(v_inst_1661_, 2);
v___f_1677_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__2), 6, 5);
lean_closure_set(v___f_1677_, 0, v_inst_1661_);
lean_closure_set(v___f_1677_, 1, v_inst_1665_);
lean_closure_set(v___f_1677_, 2, v_docComment_1669_);
lean_closure_set(v___f_1677_, 3, v_toBind_1671_);
lean_closure_set(v___f_1677_, 4, v___f_1676_);
v___f_1678_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_1678_, 0, v_inst_1661_);
lean_closure_set(v___f_1678_, 1, v_inst_1662_);
lean_closure_set(v___f_1678_, 2, v_inst_1666_);
lean_closure_set(v___f_1678_, 3, v_inst_1667_);
lean_closure_set(v___f_1678_, 4, v_inst_1663_);
lean_closure_set(v___f_1678_, 5, v_docComment_1669_);
lean_closure_set(v___f_1678_, 6, v_toBind_1671_);
lean_closure_set(v___f_1678_, 7, v___f_1677_);
lean_inc_ref(v___f_1678_);
v___f_1679_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__4), 2, 1);
lean_closure_set(v___f_1679_, 0, v___f_1678_);
v___x_1680_ = lean_box(v___x_1673_);
v___f_1681_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_1681_, 0, v_declName_1668_);
lean_closure_set(v___f_1681_, 1, v___f_1678_);
lean_closure_set(v___f_1681_, 2, v___x_1680_);
lean_closure_set(v___f_1681_, 3, v_inst_1661_);
lean_closure_set(v___f_1681_, 4, v_inst_1665_);
lean_closure_set(v___f_1681_, 5, v_toBind_1671_);
lean_closure_set(v___f_1681_, 6, v___f_1679_);
v___x_1682_ = lean_apply_4(v_toBind_1671_, lean_box(0), lean_box(0), v_getEnv_1674_, v___f_1681_);
return v___x_1682_;
}
else
{
lean_object* v___x_1683_; lean_object* v___x_1684_; 
lean_inc(v_toPure_1672_);
lean_dec(v_toBind_1671_);
lean_dec(v_docComment_1669_);
lean_dec(v_declName_1668_);
lean_dec(v_inst_1667_);
lean_dec_ref(v_inst_1666_);
lean_dec_ref(v_inst_1665_);
lean_dec_ref(v_inst_1664_);
lean_dec_ref(v_inst_1663_);
lean_dec(v_inst_1662_);
lean_dec_ref(v_inst_1661_);
v___x_1683_ = lean_box(0);
v___x_1684_ = lean_apply_2(v_toPure_1672_, lean_box(0), v___x_1683_);
return v___x_1684_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString(lean_object* v_m_1685_, lean_object* v_inst_1686_, lean_object* v_inst_1687_, lean_object* v_inst_1688_, lean_object* v_inst_1689_, lean_object* v_inst_1690_, lean_object* v_inst_1691_, lean_object* v_inst_1692_, lean_object* v_declName_1693_, lean_object* v_docComment_1694_){
_start:
{
lean_object* v___x_1695_; 
v___x_1695_ = l_Lean_addMarkdownDocString___redArg(v_inst_1686_, v_inst_1687_, v_inst_1688_, v_inst_1689_, v_inst_1690_, v_inst_1691_, v_inst_1692_, v_declName_1693_, v_docComment_1694_);
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__0(lean_object* v_addEntryFn_1696_, lean_object* v___x_1697_, lean_object* v_s_1698_){
_start:
{
lean_object* v_importedEntries_1699_; lean_object* v_state_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1708_; 
v_importedEntries_1699_ = lean_ctor_get(v_s_1698_, 0);
v_state_1700_ = lean_ctor_get(v_s_1698_, 1);
v_isSharedCheck_1708_ = !lean_is_exclusive(v_s_1698_);
if (v_isSharedCheck_1708_ == 0)
{
v___x_1702_ = v_s_1698_;
v_isShared_1703_ = v_isSharedCheck_1708_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_state_1700_);
lean_inc(v_importedEntries_1699_);
lean_dec(v_s_1698_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1708_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v_state_1704_; lean_object* v___x_1706_; 
v_state_1704_ = lean_apply_2(v_addEntryFn_1696_, v_state_1700_, v___x_1697_);
if (v_isShared_1703_ == 0)
{
lean_ctor_set(v___x_1702_, 1, v_state_1704_);
v___x_1706_ = v___x_1702_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_importedEntries_1699_);
lean_ctor_set(v_reuseFailAlloc_1707_, 1, v_state_1704_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1(lean_object* v_declName_1709_, lean_object* v_x1_1710_, lean_object* v_x2_1711_){
_start:
{
lean_object* v_index_1712_; lean_object* v_sourceString_1713_; lean_object* v_imports_1714_; lean_object* v_currNamespace_1715_; lean_object* v_openDecls_1716_; lean_object* v_options_1717_; lean_object* v_check_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1737_; 
v_index_1712_ = lean_ctor_get(v_x2_1711_, 1);
v_sourceString_1713_ = lean_ctor_get(v_x2_1711_, 2);
v_imports_1714_ = lean_ctor_get(v_x2_1711_, 3);
v_currNamespace_1715_ = lean_ctor_get(v_x2_1711_, 4);
v_openDecls_1716_ = lean_ctor_get(v_x2_1711_, 5);
v_options_1717_ = lean_ctor_get(v_x2_1711_, 6);
v_check_1718_ = lean_ctor_get(v_x2_1711_, 7);
v_isSharedCheck_1737_ = !lean_is_exclusive(v_x2_1711_);
if (v_isSharedCheck_1737_ == 0)
{
lean_object* v_unused_1738_; 
v_unused_1738_ = lean_ctor_get(v_x2_1711_, 0);
lean_dec(v_unused_1738_);
v___x_1720_ = v_x2_1711_;
v_isShared_1721_ = v_isSharedCheck_1737_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_check_1718_);
lean_inc(v_options_1717_);
lean_inc(v_openDecls_1716_);
lean_inc(v_currNamespace_1715_);
lean_inc(v_imports_1714_);
lean_inc(v_sourceString_1713_);
lean_inc(v_index_1712_);
lean_dec(v_x2_1711_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1737_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1722_; lean_object* v_toEnvExtension_1723_; lean_object* v_addEntryFn_1724_; lean_object* v_asyncMode_1725_; uint8_t v_logWrites_1726_; lean_object* v___x_1727_; lean_object* v___x_1729_; 
v___x_1722_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_1723_ = lean_ctor_get(v___x_1722_, 0);
v_addEntryFn_1724_ = lean_ctor_get(v___x_1722_, 3);
v_asyncMode_1725_ = lean_ctor_get(v_toEnvExtension_1723_, 2);
v_logWrites_1726_ = lean_ctor_get_uint8(v_toEnvExtension_1723_, sizeof(void*)*6);
v___x_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1727_, 0, v_declName_1709_);
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1727_);
v___x_1729_ = v___x_1720_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v___x_1727_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_index_1712_);
lean_ctor_set(v_reuseFailAlloc_1736_, 2, v_sourceString_1713_);
lean_ctor_set(v_reuseFailAlloc_1736_, 3, v_imports_1714_);
lean_ctor_set(v_reuseFailAlloc_1736_, 4, v_currNamespace_1715_);
lean_ctor_set(v_reuseFailAlloc_1736_, 5, v_openDecls_1716_);
lean_ctor_set(v_reuseFailAlloc_1736_, 6, v_options_1717_);
lean_ctor_set(v_reuseFailAlloc_1736_, 7, v_check_1718_);
v___x_1729_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
lean_object* v___f_1730_; lean_object* v___x_1731_; uint8_t v___x_1732_; 
lean_inc(v_addEntryFn_1724_);
v___f_1730_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1730_, 0, v_addEntryFn_1724_);
lean_closure_set(v___f_1730_, 1, v___x_1729_);
v___x_1731_ = lean_box(0);
v___x_1732_ = 1;
if (v_logWrites_1726_ == 0)
{
lean_object* v___x_1733_; 
lean_inc_ref(v_toEnvExtension_1723_);
v___x_1733_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1723_, v_x1_1710_, v___f_1730_, v_asyncMode_1725_, v___x_1731_, v___x_1732_);
return v___x_1733_;
}
else
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
lean_inc_ref_n(v_toEnvExtension_1723_, 2);
v___x_1734_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1723_, v_x1_1710_);
lean_dec_ref(v_x1_1710_);
v___x_1735_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1723_, v___x_1734_, v___f_1730_, v_asyncMode_1725_, v___x_1731_, v___x_1732_);
return v___x_1735_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2(lean_object* v_declName_1758_, lean_object* v_docs_1759_, lean_object* v_deferred_1760_, lean_object* v___f_1761_, lean_object* v_env_1762_){
_start:
{
lean_object* v___x_1763_; uint8_t v___x_1764_; lean_object* v_env_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; uint8_t v___x_1769_; 
v___x_1763_ = l_Lean_versoDocStringExt;
v___x_1764_ = 1;
v_env_1765_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1763_, v_env_1762_, v_declName_1758_, v_docs_1759_, v___x_1764_);
v___x_1766_ = lean_unsigned_to_nat(0u);
v___x_1767_ = lean_array_get_size(v_deferred_1760_);
v___x_1768_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__9));
v___x_1769_ = lean_nat_dec_lt(v___x_1766_, v___x_1767_);
if (v___x_1769_ == 0)
{
lean_dec_ref(v___f_1761_);
lean_dec_ref(v_deferred_1760_);
return v_env_1765_;
}
else
{
size_t v___x_1770_; size_t v___x_1771_; lean_object* v___x_1772_; 
v___x_1770_ = ((size_t)0ULL);
v___x_1771_ = lean_usize_of_nat(v___x_1767_);
v___x_1772_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1768_, v___f_1761_, v_deferred_1760_, v___x_1770_, v___x_1771_, v_env_1765_);
return v___x_1772_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3(lean_object* v_modifyEnv_1773_, lean_object* v___f_1774_, lean_object* v_____r_1775_){
_start:
{
lean_object* v___x_1776_; 
v___x_1776_ = lean_apply_1(v_modifyEnv_1773_, v___f_1774_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__4(lean_object* v_declName_1779_, lean_object* v_modifyEnv_1780_, lean_object* v___f_1781_, lean_object* v_inst_1782_, lean_object* v_inst_1783_, lean_object* v_toBind_1784_, lean_object* v___f_1785_, lean_object* v_____do__lift_1786_){
_start:
{
lean_object* v___x_1787_; 
v___x_1787_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_1786_, v_declName_1779_);
if (lean_obj_tag(v___x_1787_) == 0)
{
lean_object* v___x_1788_; 
lean_dec(v___f_1785_);
lean_dec(v_toBind_1784_);
lean_dec_ref(v_inst_1783_);
lean_dec_ref(v_inst_1782_);
lean_dec(v_declName_1779_);
v___x_1788_ = lean_apply_1(v_modifyEnv_1780_, v___f_1781_);
return v___x_1788_;
}
else
{
lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1804_; 
lean_dec_ref(v___f_1781_);
lean_dec(v_modifyEnv_1780_);
v_isSharedCheck_1804_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1804_ == 0)
{
lean_object* v_unused_1805_; 
v_unused_1805_ = lean_ctor_get(v___x_1787_, 0);
lean_dec(v_unused_1805_);
v___x_1790_ = v___x_1787_;
v_isShared_1791_ = v_isSharedCheck_1804_;
goto v_resetjp_1789_;
}
else
{
lean_dec(v___x_1787_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1804_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v___x_1792_; uint8_t v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1799_; 
v___x_1792_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__0));
v___x_1793_ = 1;
v___x_1794_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_1779_, v___x_1793_);
v___x_1795_ = lean_string_append(v___x_1792_, v___x_1794_);
lean_dec_ref(v___x_1794_);
v___x_1796_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__1));
v___x_1797_ = lean_string_append(v___x_1795_, v___x_1796_);
if (v_isShared_1791_ == 0)
{
lean_ctor_set_tag(v___x_1790_, 3);
lean_ctor_set(v___x_1790_, 0, v___x_1797_);
v___x_1799_ = v___x_1790_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v___x_1797_);
v___x_1799_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1800_ = l_Lean_MessageData_ofFormat(v___x_1799_);
v___x_1801_ = l_Lean_throwError___redArg(v_inst_1782_, v_inst_1783_, v___x_1800_);
v___x_1802_ = lean_apply_4(v_toBind_1784_, lean_box(0), lean_box(0), v___x_1801_, v___f_1785_);
return v___x_1802_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__4___boxed(lean_object* v_declName_1806_, lean_object* v_modifyEnv_1807_, lean_object* v___f_1808_, lean_object* v_inst_1809_, lean_object* v_inst_1810_, lean_object* v_toBind_1811_, lean_object* v___f_1812_, lean_object* v_____do__lift_1813_){
_start:
{
lean_object* v_res_1814_; 
v_res_1814_ = l_Lean_addVersoDocStringCore___redArg___lam__4(v_declName_1806_, v_modifyEnv_1807_, v___f_1808_, v_inst_1809_, v_inst_1810_, v_toBind_1811_, v___f_1812_, v_____do__lift_1813_);
lean_dec_ref(v_____do__lift_1813_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg(lean_object* v_inst_1815_, lean_object* v_inst_1816_, lean_object* v_inst_1817_, lean_object* v_declName_1818_, lean_object* v_docs_1819_, lean_object* v_deferred_1820_){
_start:
{
lean_object* v_toApplicative_1821_; lean_object* v_toBind_1822_; lean_object* v_toPure_1823_; uint8_t v___x_1824_; 
v_toApplicative_1821_ = lean_ctor_get(v_inst_1815_, 0);
v_toBind_1822_ = lean_ctor_get(v_inst_1815_, 1);
lean_inc(v_toBind_1822_);
v_toPure_1823_ = lean_ctor_get(v_toApplicative_1821_, 1);
v___x_1824_ = l_Lean_Name_isAnonymous(v_declName_1818_);
if (v___x_1824_ == 0)
{
lean_object* v_getEnv_1825_; lean_object* v_modifyEnv_1826_; lean_object* v___f_1827_; lean_object* v___f_1828_; lean_object* v___f_1829_; lean_object* v___f_1830_; lean_object* v___x_1831_; 
v_getEnv_1825_ = lean_ctor_get(v_inst_1816_, 0);
lean_inc(v_getEnv_1825_);
v_modifyEnv_1826_ = lean_ctor_get(v_inst_1816_, 1);
lean_inc_n(v_modifyEnv_1826_, 2);
lean_dec_ref(v_inst_1816_);
lean_inc_n(v_declName_1818_, 2);
v___f_1827_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__1), 3, 1);
lean_closure_set(v___f_1827_, 0, v_declName_1818_);
v___f_1828_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__2), 5, 4);
lean_closure_set(v___f_1828_, 0, v_declName_1818_);
lean_closure_set(v___f_1828_, 1, v_docs_1819_);
lean_closure_set(v___f_1828_, 2, v_deferred_1820_);
lean_closure_set(v___f_1828_, 3, v___f_1827_);
lean_inc_ref(v___f_1828_);
v___f_1829_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__3), 3, 2);
lean_closure_set(v___f_1829_, 0, v_modifyEnv_1826_);
lean_closure_set(v___f_1829_, 1, v___f_1828_);
lean_inc(v_toBind_1822_);
v___f_1830_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__4___boxed), 8, 7);
lean_closure_set(v___f_1830_, 0, v_declName_1818_);
lean_closure_set(v___f_1830_, 1, v_modifyEnv_1826_);
lean_closure_set(v___f_1830_, 2, v___f_1828_);
lean_closure_set(v___f_1830_, 3, v_inst_1815_);
lean_closure_set(v___f_1830_, 4, v_inst_1817_);
lean_closure_set(v___f_1830_, 5, v_toBind_1822_);
lean_closure_set(v___f_1830_, 6, v___f_1829_);
v___x_1831_ = lean_apply_4(v_toBind_1822_, lean_box(0), lean_box(0), v_getEnv_1825_, v___f_1830_);
return v___x_1831_;
}
else
{
lean_object* v___x_1832_; lean_object* v___x_1833_; 
lean_inc(v_toPure_1823_);
lean_dec(v_toBind_1822_);
lean_dec_ref(v_deferred_1820_);
lean_dec_ref(v_docs_1819_);
lean_dec(v_declName_1818_);
lean_dec_ref(v_inst_1817_);
lean_dec_ref(v_inst_1816_);
lean_dec_ref(v_inst_1815_);
v___x_1832_ = lean_box(0);
v___x_1833_ = lean_apply_2(v_toPure_1823_, lean_box(0), v___x_1832_);
return v___x_1833_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore(lean_object* v_m_1834_, lean_object* v_inst_1835_, lean_object* v_inst_1836_, lean_object* v_inst_1837_, lean_object* v_inst_1838_, lean_object* v_declName_1839_, lean_object* v_docs_1840_, lean_object* v_deferred_1841_){
_start:
{
lean_object* v___x_1842_; 
v___x_1842_ = l_Lean_addVersoDocStringCore___redArg(v_inst_1835_, v_inst_1836_, v_inst_1838_, v_declName_1839_, v_docs_1840_, v_deferred_1841_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___boxed(lean_object* v_m_1843_, lean_object* v_inst_1844_, lean_object* v_inst_1845_, lean_object* v_inst_1846_, lean_object* v_inst_1847_, lean_object* v_declName_1848_, lean_object* v_docs_1849_, lean_object* v_deferred_1850_){
_start:
{
lean_object* v_res_1851_; 
v_res_1851_ = l_Lean_addVersoDocStringCore(v_m_1843_, v_inst_1844_, v_inst_1845_, v_inst_1846_, v_inst_1847_, v_declName_1848_, v_docs_1849_, v_deferred_1850_);
lean_dec(v_inst_1846_);
return v_res_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1(lean_object* v_size_1852_, uint8_t v___x_1853_, lean_object* v_x1_1854_, lean_object* v_x2_1855_){
_start:
{
lean_object* v_index_1856_; lean_object* v_sourceString_1857_; lean_object* v_imports_1858_; lean_object* v_currNamespace_1859_; lean_object* v_openDecls_1860_; lean_object* v_options_1861_; lean_object* v_check_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1880_; 
v_index_1856_ = lean_ctor_get(v_x2_1855_, 1);
v_sourceString_1857_ = lean_ctor_get(v_x2_1855_, 2);
v_imports_1858_ = lean_ctor_get(v_x2_1855_, 3);
v_currNamespace_1859_ = lean_ctor_get(v_x2_1855_, 4);
v_openDecls_1860_ = lean_ctor_get(v_x2_1855_, 5);
v_options_1861_ = lean_ctor_get(v_x2_1855_, 6);
v_check_1862_ = lean_ctor_get(v_x2_1855_, 7);
v_isSharedCheck_1880_ = !lean_is_exclusive(v_x2_1855_);
if (v_isSharedCheck_1880_ == 0)
{
lean_object* v_unused_1881_; 
v_unused_1881_ = lean_ctor_get(v_x2_1855_, 0);
lean_dec(v_unused_1881_);
v___x_1864_ = v_x2_1855_;
v_isShared_1865_ = v_isSharedCheck_1880_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_check_1862_);
lean_inc(v_options_1861_);
lean_inc(v_openDecls_1860_);
lean_inc(v_currNamespace_1859_);
lean_inc(v_imports_1858_);
lean_inc(v_sourceString_1857_);
lean_inc(v_index_1856_);
lean_dec(v_x2_1855_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1880_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___x_1866_; lean_object* v_toEnvExtension_1867_; lean_object* v_addEntryFn_1868_; lean_object* v_asyncMode_1869_; uint8_t v_logWrites_1870_; lean_object* v___x_1871_; lean_object* v___x_1873_; 
v___x_1866_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_1867_ = lean_ctor_get(v___x_1866_, 0);
v_addEntryFn_1868_ = lean_ctor_get(v___x_1866_, 3);
v_asyncMode_1869_ = lean_ctor_get(v_toEnvExtension_1867_, 2);
v_logWrites_1870_ = lean_ctor_get_uint8(v_toEnvExtension_1867_, sizeof(void*)*6);
v___x_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1871_, 0, v_size_1852_);
if (v_isShared_1865_ == 0)
{
lean_ctor_set(v___x_1864_, 0, v___x_1871_);
v___x_1873_ = v___x_1864_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v___x_1871_);
lean_ctor_set(v_reuseFailAlloc_1879_, 1, v_index_1856_);
lean_ctor_set(v_reuseFailAlloc_1879_, 2, v_sourceString_1857_);
lean_ctor_set(v_reuseFailAlloc_1879_, 3, v_imports_1858_);
lean_ctor_set(v_reuseFailAlloc_1879_, 4, v_currNamespace_1859_);
lean_ctor_set(v_reuseFailAlloc_1879_, 5, v_openDecls_1860_);
lean_ctor_set(v_reuseFailAlloc_1879_, 6, v_options_1861_);
lean_ctor_set(v_reuseFailAlloc_1879_, 7, v_check_1862_);
v___x_1873_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
lean_object* v___f_1874_; lean_object* v___x_1875_; 
lean_inc(v_addEntryFn_1868_);
v___f_1874_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1874_, 0, v_addEntryFn_1868_);
lean_closure_set(v___f_1874_, 1, v___x_1873_);
v___x_1875_ = lean_box(0);
if (v_logWrites_1870_ == 0)
{
lean_object* v___x_1876_; 
lean_inc_ref(v_toEnvExtension_1867_);
v___x_1876_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1867_, v_x1_1854_, v___f_1874_, v_asyncMode_1869_, v___x_1875_, v___x_1853_);
return v___x_1876_;
}
else
{
lean_object* v___x_1877_; lean_object* v___x_1878_; 
lean_inc_ref_n(v_toEnvExtension_1867_, 2);
v___x_1877_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1867_, v_x1_1854_);
lean_dec_ref(v_x1_1854_);
v___x_1878_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1867_, v___x_1877_, v___f_1874_, v_asyncMode_1869_, v___x_1875_, v___x_1853_);
return v___x_1878_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1___boxed(lean_object* v_size_1882_, lean_object* v___x_1883_, lean_object* v_x1_1884_, lean_object* v_x2_1885_){
_start:
{
uint8_t v___x_382__boxed_1886_; lean_object* v_res_1887_; 
v___x_382__boxed_1886_ = lean_unbox(v___x_1883_);
v_res_1887_ = l_Lean_addVersoModDocStringCore___redArg___lam__1(v_size_1882_, v___x_382__boxed_1886_, v_x1_1884_, v_x2_1885_);
return v_res_1887_;
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; 
v___x_1889_ = ((lean_object*)(l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0));
v___x_1890_ = l_Lean_stringToMessageData(v___x_1889_);
return v___x_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0(lean_object* v_docs_1891_, lean_object* v_inst_1892_, lean_object* v_inst_1893_, lean_object* v_deferred_1894_, lean_object* v_inst_1895_, lean_object* v___f_1896_, lean_object* v_____do__lift_1897_){
_start:
{
lean_object* v___x_1898_; 
v___x_1898_ = l_Lean_addVersoModuleDocSnippet(v_____do__lift_1897_, v_docs_1891_);
if (lean_obj_tag(v___x_1898_) == 0)
{
lean_object* v_a_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; 
lean_dec_ref(v___f_1896_);
lean_dec_ref(v_inst_1895_);
lean_dec_ref(v_deferred_1894_);
v_a_1899_ = lean_ctor_get(v___x_1898_, 0);
lean_inc(v_a_1899_);
lean_dec_ref_known(v___x_1898_, 1);
v___x_1900_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1);
v___x_1901_ = l_Lean_stringToMessageData(v_a_1899_);
v___x_1902_ = l_Lean_indentD(v___x_1901_);
v___x_1903_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1900_);
lean_ctor_set(v___x_1903_, 1, v___x_1902_);
v___x_1904_ = l_Lean_throwError___redArg(v_inst_1892_, v_inst_1893_, v___x_1903_);
return v___x_1904_;
}
else
{
lean_object* v_a_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; uint8_t v___x_1909_; 
lean_dec_ref(v_inst_1893_);
lean_dec_ref(v_inst_1892_);
v_a_1905_ = lean_ctor_get(v___x_1898_, 0);
lean_inc(v_a_1905_);
lean_dec_ref_known(v___x_1898_, 1);
v___x_1906_ = lean_unsigned_to_nat(0u);
v___x_1907_ = lean_array_get_size(v_deferred_1894_);
v___x_1908_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__9));
v___x_1909_ = lean_nat_dec_lt(v___x_1906_, v___x_1907_);
if (v___x_1909_ == 0)
{
lean_object* v___x_1910_; 
lean_dec_ref(v___f_1896_);
lean_dec_ref(v_deferred_1894_);
v___x_1910_ = l_Lean_setEnv___redArg(v_inst_1895_, v_a_1905_);
return v___x_1910_;
}
else
{
size_t v___x_1911_; size_t v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1911_ = ((size_t)0ULL);
v___x_1912_ = lean_usize_of_nat(v___x_1907_);
v___x_1913_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1908_, v___f_1896_, v_deferred_1894_, v___x_1911_, v___x_1912_, v_a_1905_);
v___x_1914_ = l_Lean_setEnv___redArg(v_inst_1895_, v___x_1913_);
return v___x_1914_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__2(uint8_t v___x_1915_, lean_object* v_docs_1916_, lean_object* v_inst_1917_, lean_object* v_inst_1918_, lean_object* v_deferred_1919_, lean_object* v_inst_1920_, lean_object* v_toBind_1921_, lean_object* v_getEnv_1922_, lean_object* v_____do__lift_1923_){
_start:
{
lean_object* v___x_1924_; lean_object* v_size_1925_; lean_object* v___x_1926_; lean_object* v___f_1927_; lean_object* v___f_1928_; lean_object* v___x_1929_; 
v___x_1924_ = l_Lean_getMainVersoModuleDocs(v_____do__lift_1923_);
v_size_1925_ = lean_ctor_get(v___x_1924_, 2);
lean_inc(v_size_1925_);
lean_dec_ref(v___x_1924_);
v___x_1926_ = lean_box(v___x_1915_);
v___f_1927_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1927_, 0, v_size_1925_);
lean_closure_set(v___f_1927_, 1, v___x_1926_);
v___f_1928_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__0), 7, 6);
lean_closure_set(v___f_1928_, 0, v_docs_1916_);
lean_closure_set(v___f_1928_, 1, v_inst_1917_);
lean_closure_set(v___f_1928_, 2, v_inst_1918_);
lean_closure_set(v___f_1928_, 3, v_deferred_1919_);
lean_closure_set(v___f_1928_, 4, v_inst_1920_);
lean_closure_set(v___f_1928_, 5, v___f_1927_);
v___x_1929_ = lean_apply_4(v_toBind_1921_, lean_box(0), lean_box(0), v_getEnv_1922_, v___f_1928_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__2___boxed(lean_object* v___x_1930_, lean_object* v_docs_1931_, lean_object* v_inst_1932_, lean_object* v_inst_1933_, lean_object* v_deferred_1934_, lean_object* v_inst_1935_, lean_object* v_toBind_1936_, lean_object* v_getEnv_1937_, lean_object* v_____do__lift_1938_){
_start:
{
uint8_t v___x_493__boxed_1939_; lean_object* v_res_1940_; 
v___x_493__boxed_1939_ = lean_unbox(v___x_1930_);
v_res_1940_ = l_Lean_addVersoModDocStringCore___redArg___lam__2(v___x_493__boxed_1939_, v_docs_1931_, v_inst_1932_, v_inst_1933_, v_deferred_1934_, v_inst_1935_, v_toBind_1936_, v_getEnv_1937_, v_____do__lift_1938_);
return v_res_1940_;
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1942_ = ((lean_object*)(l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0));
v___x_1943_ = l_Lean_stringToMessageData(v___x_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3(lean_object* v_inst_1944_, lean_object* v_inst_1945_, lean_object* v_docs_1946_, lean_object* v_deferred_1947_, lean_object* v_inst_1948_, lean_object* v_toBind_1949_, lean_object* v_getEnv_1950_, lean_object* v_____do__lift_1951_){
_start:
{
lean_object* v___x_1952_; uint8_t v___x_1953_; 
v___x_1952_ = l_Lean_getMainModuleDoc(v_____do__lift_1951_);
v___x_1953_ = l_Lean_PersistentArray_isEmpty___redArg(v___x_1952_);
lean_dec_ref(v___x_1952_);
if (v___x_1953_ == 0)
{
lean_object* v___x_1954_; lean_object* v___x_1955_; 
lean_dec(v_getEnv_1950_);
lean_dec(v_toBind_1949_);
lean_dec_ref(v_inst_1948_);
lean_dec_ref(v_deferred_1947_);
lean_dec_ref(v_docs_1946_);
v___x_1954_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1);
v___x_1955_ = l_Lean_throwError___redArg(v_inst_1944_, v_inst_1945_, v___x_1954_);
return v___x_1955_;
}
else
{
lean_object* v___x_1956_; lean_object* v___f_1957_; lean_object* v___x_1958_; 
v___x_1956_ = lean_box(v___x_1953_);
lean_inc(v_getEnv_1950_);
lean_inc(v_toBind_1949_);
v___f_1957_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_1957_, 0, v___x_1956_);
lean_closure_set(v___f_1957_, 1, v_docs_1946_);
lean_closure_set(v___f_1957_, 2, v_inst_1944_);
lean_closure_set(v___f_1957_, 3, v_inst_1945_);
lean_closure_set(v___f_1957_, 4, v_deferred_1947_);
lean_closure_set(v___f_1957_, 5, v_inst_1948_);
lean_closure_set(v___f_1957_, 6, v_toBind_1949_);
lean_closure_set(v___f_1957_, 7, v_getEnv_1950_);
v___x_1958_ = lean_apply_4(v_toBind_1949_, lean_box(0), lean_box(0), v_getEnv_1950_, v___f_1957_);
return v___x_1958_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg(lean_object* v_inst_1959_, lean_object* v_inst_1960_, lean_object* v_inst_1961_, lean_object* v_docs_1962_, lean_object* v_deferred_1963_){
_start:
{
lean_object* v_toBind_1964_; lean_object* v_getEnv_1965_; lean_object* v___f_1966_; lean_object* v___x_1967_; 
v_toBind_1964_ = lean_ctor_get(v_inst_1959_, 1);
lean_inc_n(v_toBind_1964_, 2);
v_getEnv_1965_ = lean_ctor_get(v_inst_1960_, 0);
lean_inc_n(v_getEnv_1965_, 2);
v___f_1966_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__3), 8, 7);
lean_closure_set(v___f_1966_, 0, v_inst_1959_);
lean_closure_set(v___f_1966_, 1, v_inst_1961_);
lean_closure_set(v___f_1966_, 2, v_docs_1962_);
lean_closure_set(v___f_1966_, 3, v_deferred_1963_);
lean_closure_set(v___f_1966_, 4, v_inst_1960_);
lean_closure_set(v___f_1966_, 5, v_toBind_1964_);
lean_closure_set(v___f_1966_, 6, v_getEnv_1965_);
v___x_1967_ = lean_apply_4(v_toBind_1964_, lean_box(0), lean_box(0), v_getEnv_1965_, v___f_1966_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore(lean_object* v_m_1968_, lean_object* v_inst_1969_, lean_object* v_inst_1970_, lean_object* v_inst_1971_, lean_object* v_inst_1972_, lean_object* v_docs_1973_, lean_object* v_deferred_1974_){
_start:
{
lean_object* v___x_1975_; 
v___x_1975_ = l_Lean_addVersoModDocStringCore___redArg(v_inst_1969_, v_inst_1970_, v_inst_1972_, v_docs_1973_, v_deferred_1974_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___boxed(lean_object* v_m_1976_, lean_object* v_inst_1977_, lean_object* v_inst_1978_, lean_object* v_inst_1979_, lean_object* v_inst_1980_, lean_object* v_docs_1981_, lean_object* v_deferred_1982_){
_start:
{
lean_object* v_res_1983_; 
v_res_1983_ = l_Lean_addVersoModDocStringCore(v_m_1976_, v_inst_1977_, v_inst_1978_, v_inst_1979_, v_inst_1980_, v_docs_1981_, v_deferred_1982_);
lean_dec(v_inst_1979_);
return v_res_1983_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1984_ = lean_box(1);
v___x_1985_ = l_Lean_MessageData_ofFormat(v___x_1984_);
return v___x_1985_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__3(void){
_start:
{
lean_object* v___x_1989_; lean_object* v___x_1990_; 
v___x_1989_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__2));
v___x_1990_ = l_Lean_MessageData_ofFormat(v___x_1989_);
return v___x_1990_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5(lean_object* v_x_1991_, lean_object* v_x_1992_){
_start:
{
if (lean_obj_tag(v_x_1992_) == 0)
{
return v_x_1991_;
}
else
{
lean_object* v_head_1993_; lean_object* v_tail_1994_; lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2016_; 
v_head_1993_ = lean_ctor_get(v_x_1992_, 0);
v_tail_1994_ = lean_ctor_get(v_x_1992_, 1);
v_isSharedCheck_2016_ = !lean_is_exclusive(v_x_1992_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_1996_ = v_x_1992_;
v_isShared_1997_ = v_isSharedCheck_2016_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_tail_1994_);
lean_inc(v_head_1993_);
lean_dec(v_x_1992_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2016_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v_before_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2014_; 
v_before_1998_ = lean_ctor_get(v_head_1993_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v_head_1993_);
if (v_isSharedCheck_2014_ == 0)
{
lean_object* v_unused_2015_; 
v_unused_2015_ = lean_ctor_get(v_head_1993_, 1);
lean_dec(v_unused_2015_);
v___x_2000_ = v_head_1993_;
v_isShared_2001_ = v_isSharedCheck_2014_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_before_1998_);
lean_dec(v_head_1993_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2014_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2002_; lean_object* v___x_2004_; 
v___x_2002_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__0);
if (v_isShared_2001_ == 0)
{
lean_ctor_set_tag(v___x_2000_, 7);
lean_ctor_set(v___x_2000_, 1, v___x_2002_);
lean_ctor_set(v___x_2000_, 0, v_x_1991_);
v___x_2004_ = v___x_2000_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v_x_1991_);
lean_ctor_set(v_reuseFailAlloc_2013_, 1, v___x_2002_);
v___x_2004_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
lean_object* v___x_2005_; lean_object* v___x_2007_; 
v___x_2005_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__3);
if (v_isShared_1997_ == 0)
{
lean_ctor_set_tag(v___x_1996_, 7);
lean_ctor_set(v___x_1996_, 1, v___x_2005_);
lean_ctor_set(v___x_1996_, 0, v___x_2004_);
v___x_2007_ = v___x_1996_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v___x_2004_);
lean_ctor_set(v_reuseFailAlloc_2012_, 1, v___x_2005_);
v___x_2007_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2008_ = l_Lean_MessageData_ofSyntax(v_before_1998_);
v___x_2009_ = l_Lean_indentD(v___x_2008_);
v___x_2010_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2010_, 0, v___x_2007_);
lean_ctor_set(v___x_2010_, 1, v___x_2009_);
v_x_1991_ = v___x_2010_;
v_x_1992_ = v_tail_1994_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2020_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___closed__1));
v___x_2021_ = l_Lean_MessageData_ofFormat(v___x_2020_);
return v___x_2021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg(lean_object* v_msgData_2022_, lean_object* v_macroStack_2023_, lean_object* v___y_2024_){
_start:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; uint8_t v___x_2028_; 
v___x_2026_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2024_);
v___x_2027_ = l_Lean_Elab_pp_macroStack;
v___x_2028_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v___x_2026_, v___x_2027_);
lean_dec_ref(v___x_2026_);
if (v___x_2028_ == 0)
{
lean_object* v___x_2029_; 
lean_dec(v_macroStack_2023_);
v___x_2029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2029_, 0, v_msgData_2022_);
return v___x_2029_;
}
else
{
if (lean_obj_tag(v_macroStack_2023_) == 0)
{
lean_object* v___x_2030_; 
v___x_2030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2030_, 0, v_msgData_2022_);
return v___x_2030_;
}
else
{
lean_object* v_head_2031_; lean_object* v_after_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2047_; 
v_head_2031_ = lean_ctor_get(v_macroStack_2023_, 0);
lean_inc(v_head_2031_);
v_after_2032_ = lean_ctor_get(v_head_2031_, 1);
v_isSharedCheck_2047_ = !lean_is_exclusive(v_head_2031_);
if (v_isSharedCheck_2047_ == 0)
{
lean_object* v_unused_2048_; 
v_unused_2048_ = lean_ctor_get(v_head_2031_, 0);
lean_dec(v_unused_2048_);
v___x_2034_ = v_head_2031_;
v_isShared_2035_ = v_isSharedCheck_2047_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_after_2032_);
lean_dec(v_head_2031_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2047_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v___x_2036_; lean_object* v___x_2038_; 
v___x_2036_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5___closed__0);
if (v_isShared_2035_ == 0)
{
lean_ctor_set_tag(v___x_2034_, 7);
lean_ctor_set(v___x_2034_, 1, v___x_2036_);
lean_ctor_set(v___x_2034_, 0, v_msgData_2022_);
v___x_2038_ = v___x_2034_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v_msgData_2022_);
lean_ctor_set(v_reuseFailAlloc_2046_, 1, v___x_2036_);
v___x_2038_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v_msgData_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2039_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___closed__2);
v___x_2040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2038_);
lean_ctor_set(v___x_2040_, 1, v___x_2039_);
v___x_2041_ = l_Lean_MessageData_ofSyntax(v_after_2032_);
v___x_2042_ = l_Lean_indentD(v___x_2041_);
v_msgData_2043_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2043_, 0, v___x_2040_);
lean_ctor_set(v_msgData_2043_, 1, v___x_2042_);
v___x_2044_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3_spec__5(v_msgData_2043_, v_macroStack_2023_);
v___x_2045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2044_);
return v___x_2045_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg___boxed(lean_object* v_msgData_2049_, lean_object* v_macroStack_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg(v_msgData_2049_, v_macroStack_2050_, v___y_2051_);
lean_dec_ref(v___y_2051_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(lean_object* v_msg_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_){
_start:
{
lean_object* v_ref_2062_; lean_object* v_macroStack_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v_a_2066_; lean_object* v___x_2067_; lean_object* v_a_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2076_; 
v_ref_2062_ = lean_ctor_get(v___y_2059_, 2);
v_macroStack_2063_ = lean_ctor_get(v___y_2055_, 1);
v___x_2064_ = l_Lean_Elab_getBetterRef(v_ref_2062_, v_macroStack_2063_);
v___x_2065_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(v_msg_2054_, v___y_2057_, v___y_2058_, v___y_2059_, v___y_2060_);
v_a_2066_ = lean_ctor_get(v___x_2065_, 0);
lean_inc(v_a_2066_);
lean_dec_ref(v___x_2065_);
lean_inc(v_macroStack_2063_);
v___x_2067_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg(v_a_2066_, v_macroStack_2063_, v___y_2059_);
v_a_2068_ = lean_ctor_get(v___x_2067_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2070_ = v___x_2067_;
v_isShared_2071_ = v_isSharedCheck_2076_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_a_2068_);
lean_dec(v___x_2067_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2076_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v___x_2072_; lean_object* v___x_2074_; 
v___x_2072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2072_, 0, v___x_2064_);
lean_ctor_set(v___x_2072_, 1, v_a_2068_);
if (v_isShared_2071_ == 0)
{
lean_ctor_set_tag(v___x_2070_, 1);
lean_ctor_set(v___x_2070_, 0, v___x_2072_);
v___x_2074_ = v___x_2070_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v___x_2072_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg___boxed(lean_object* v_msg_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_){
_start:
{
lean_object* v_res_2085_; 
v_res_2085_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v_msg_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_);
lean_dec(v___y_2083_);
lean_dec_ref(v___y_2082_);
lean_dec(v___y_2081_);
lean_dec_ref(v___y_2080_);
lean_dec(v___y_2079_);
lean_dec_ref(v___y_2078_);
return v_res_2085_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; 
v___x_2086_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0);
v___x_2087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2087_, 0, v___x_2086_);
return v___x_2087_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0_spec__1___redArg(){
_start:
{
lean_object* v___x_2089_; 
v___x_2089_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0_spec__1___redArg___closed__0);
return v___x_2089_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v___dummy_2090_){
_start:
{
lean_object* v_res_2091_; 
v_res_2091_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0_spec__1___redArg();
return v_res_2091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__1___lam__0(lean_object* v_addEntryFn_2092_, lean_object* v___x_2093_, lean_object* v_s_2094_){
_start:
{
lean_object* v_importedEntries_2095_; lean_object* v_state_2096_; lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2104_; 
v_importedEntries_2095_ = lean_ctor_get(v_s_2094_, 0);
v_state_2096_ = lean_ctor_get(v_s_2094_, 1);
v_isSharedCheck_2104_ = !lean_is_exclusive(v_s_2094_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2098_ = v_s_2094_;
v_isShared_2099_ = v_isSharedCheck_2104_;
goto v_resetjp_2097_;
}
else
{
lean_inc(v_state_2096_);
lean_inc(v_importedEntries_2095_);
lean_dec(v_s_2094_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2104_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
lean_object* v_state_2100_; lean_object* v___x_2102_; 
v_state_2100_ = lean_apply_2(v_addEntryFn_2092_, v_state_2096_, v___x_2093_);
if (v_isShared_2099_ == 0)
{
lean_ctor_set(v___x_2098_, 1, v_state_2100_);
v___x_2102_ = v___x_2098_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v_importedEntries_2095_);
lean_ctor_set(v_reuseFailAlloc_2103_, 1, v_state_2100_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__1(lean_object* v_declName_2105_, lean_object* v_as_2106_, size_t v_i_2107_, size_t v_stop_2108_, lean_object* v_b_2109_){
_start:
{
lean_object* v___y_2111_; uint8_t v___x_2115_; 
v___x_2115_ = lean_usize_dec_eq(v_i_2107_, v_stop_2108_);
if (v___x_2115_ == 0)
{
lean_object* v___x_2116_; lean_object* v_index_2117_; lean_object* v_sourceString_2118_; lean_object* v_imports_2119_; lean_object* v_currNamespace_2120_; lean_object* v_openDecls_2121_; lean_object* v_options_2122_; lean_object* v_check_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2142_; 
v___x_2116_ = lean_array_uget(v_as_2106_, v_i_2107_);
v_index_2117_ = lean_ctor_get(v___x_2116_, 1);
v_sourceString_2118_ = lean_ctor_get(v___x_2116_, 2);
v_imports_2119_ = lean_ctor_get(v___x_2116_, 3);
v_currNamespace_2120_ = lean_ctor_get(v___x_2116_, 4);
v_openDecls_2121_ = lean_ctor_get(v___x_2116_, 5);
v_options_2122_ = lean_ctor_get(v___x_2116_, 6);
v_check_2123_ = lean_ctor_get(v___x_2116_, 7);
v_isSharedCheck_2142_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2142_ == 0)
{
lean_object* v_unused_2143_; 
v_unused_2143_ = lean_ctor_get(v___x_2116_, 0);
lean_dec(v_unused_2143_);
v___x_2125_ = v___x_2116_;
v_isShared_2126_ = v_isSharedCheck_2142_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_check_2123_);
lean_inc(v_options_2122_);
lean_inc(v_openDecls_2121_);
lean_inc(v_currNamespace_2120_);
lean_inc(v_imports_2119_);
lean_inc(v_sourceString_2118_);
lean_inc(v_index_2117_);
lean_dec(v___x_2116_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2142_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2127_; lean_object* v_toEnvExtension_2128_; lean_object* v_addEntryFn_2129_; lean_object* v_asyncMode_2130_; uint8_t v_logWrites_2131_; lean_object* v___x_2132_; lean_object* v___x_2134_; 
v___x_2127_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_2128_ = lean_ctor_get(v___x_2127_, 0);
v_addEntryFn_2129_ = lean_ctor_get(v___x_2127_, 3);
v_asyncMode_2130_ = lean_ctor_get(v_toEnvExtension_2128_, 2);
v_logWrites_2131_ = lean_ctor_get_uint8(v_toEnvExtension_2128_, sizeof(void*)*6);
lean_inc(v_declName_2105_);
v___x_2132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2132_, 0, v_declName_2105_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 0, v___x_2132_);
v___x_2134_ = v___x_2125_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v___x_2132_);
lean_ctor_set(v_reuseFailAlloc_2141_, 1, v_index_2117_);
lean_ctor_set(v_reuseFailAlloc_2141_, 2, v_sourceString_2118_);
lean_ctor_set(v_reuseFailAlloc_2141_, 3, v_imports_2119_);
lean_ctor_set(v_reuseFailAlloc_2141_, 4, v_currNamespace_2120_);
lean_ctor_set(v_reuseFailAlloc_2141_, 5, v_openDecls_2121_);
lean_ctor_set(v_reuseFailAlloc_2141_, 6, v_options_2122_);
lean_ctor_set(v_reuseFailAlloc_2141_, 7, v_check_2123_);
v___x_2134_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
lean_object* v___f_2135_; lean_object* v___x_2136_; uint8_t v___x_2137_; 
lean_inc(v_addEntryFn_2129_);
v___f_2135_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__1___lam__0), 3, 2);
lean_closure_set(v___f_2135_, 0, v_addEntryFn_2129_);
lean_closure_set(v___f_2135_, 1, v___x_2134_);
v___x_2136_ = lean_box(0);
v___x_2137_ = 1;
if (v_logWrites_2131_ == 0)
{
lean_object* v___x_2138_; 
lean_inc_ref(v_toEnvExtension_2128_);
v___x_2138_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2128_, v_b_2109_, v___f_2135_, v_asyncMode_2130_, v___x_2136_, v___x_2137_);
v___y_2111_ = v___x_2138_;
goto v___jp_2110_;
}
else
{
lean_object* v___x_2139_; lean_object* v___x_2140_; 
lean_inc_ref_n(v_toEnvExtension_2128_, 2);
v___x_2139_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_2128_, v_b_2109_);
lean_dec_ref(v_b_2109_);
v___x_2140_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2128_, v___x_2139_, v___f_2135_, v_asyncMode_2130_, v___x_2136_, v___x_2137_);
v___y_2111_ = v___x_2140_;
goto v___jp_2110_;
}
}
}
}
else
{
lean_dec(v_declName_2105_);
return v_b_2109_;
}
v___jp_2110_:
{
size_t v___x_2112_; size_t v___x_2113_; 
v___x_2112_ = ((size_t)1ULL);
v___x_2113_ = lean_usize_add(v_i_2107_, v___x_2112_);
v_i_2107_ = v___x_2113_;
v_b_2109_ = v___y_2111_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__1___boxed(lean_object* v_declName_2144_, lean_object* v_as_2145_, lean_object* v_i_2146_, lean_object* v_stop_2147_, lean_object* v_b_2148_){
_start:
{
size_t v_i_boxed_2149_; size_t v_stop_boxed_2150_; lean_object* v_res_2151_; 
v_i_boxed_2149_ = lean_unbox_usize(v_i_2146_);
lean_dec(v_i_2146_);
v_stop_boxed_2150_ = lean_unbox_usize(v_stop_2147_);
lean_dec(v_stop_2147_);
v_res_2151_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__1(v_declName_2144_, v_as_2145_, v_i_boxed_2149_, v_stop_boxed_2150_, v_b_2148_);
lean_dec_ref(v_as_2145_);
return v_res_2151_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2152_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0);
v___x_2153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2153_, 0, v___x_2152_);
return v___x_2153_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; 
v___x_2154_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0);
v___x_2155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2154_);
lean_ctor_set(v___x_2155_, 1, v___x_2154_);
return v___x_2155_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2156_; 
v___x_2156_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0_spec__1___redArg();
return v___x_2156_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; 
v___x_2157_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0);
v___x_2158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2158_, 0, v___x_2157_);
lean_ctor_set(v___x_2158_, 1, v___x_2157_);
return v___x_2158_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__4(void){
_start:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2159_ = lean_unsigned_to_nat(0u);
v___x_2160_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0);
v___x_2161_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2160_);
lean_ctor_set(v___x_2161_, 1, v___x_2160_);
lean_ctor_set(v___x_2161_, 2, v___x_2159_);
return v___x_2161_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__5(void){
_start:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
v___x_2162_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__4, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__4_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__4);
v___x_2163_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
v___x_2164_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0);
v___x_2165_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
v___x_2166_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2165_);
lean_ctor_set(v___x_2166_, 1, v___x_2164_);
lean_ctor_set(v___x_2166_, 2, v___x_2163_);
lean_ctor_set(v___x_2166_, 3, v___x_2164_);
lean_ctor_set(v___x_2166_, 4, v___x_2164_);
lean_ctor_set(v___x_2166_, 5, v___x_2164_);
lean_ctor_set(v___x_2166_, 6, v___x_2164_);
lean_ctor_set(v___x_2166_, 7, v___x_2162_);
return v___x_2166_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(lean_object* v_declName_2167_, lean_object* v_docs_2168_, lean_object* v_deferred_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_){
_start:
{
lean_object* v___y_2178_; lean_object* v___y_2179_; lean_object* v___y_2180_; lean_object* v___y_2181_; lean_object* v___y_2182_; lean_object* v___y_2183_; lean_object* v___y_2184_; lean_object* v___y_2185_; lean_object* v___y_2186_; lean_object* v___y_2187_; lean_object* v___y_2188_; lean_object* v___y_2210_; lean_object* v___y_2211_; uint8_t v___x_2231_; 
v___x_2231_ = l_Lean_Name_isAnonymous(v_declName_2167_);
if (v___x_2231_ == 0)
{
lean_object* v___x_2232_; lean_object* v_env_2233_; lean_object* v___x_2234_; 
v___x_2232_ = lean_st_ref_get(v___y_2175_);
v_env_2233_ = lean_ctor_get(v___x_2232_, 0);
lean_inc_ref(v_env_2233_);
lean_dec(v___x_2232_);
v___x_2234_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2233_, v_declName_2167_);
lean_dec_ref(v_env_2233_);
if (lean_obj_tag(v___x_2234_) == 0)
{
v___y_2210_ = v___y_2173_;
v___y_2211_ = v___y_2175_;
goto v___jp_2209_;
}
else
{
lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2249_; 
lean_dec_ref(v_docs_2168_);
v_isSharedCheck_2249_ = !lean_is_exclusive(v___x_2234_);
if (v_isSharedCheck_2249_ == 0)
{
lean_object* v_unused_2250_; 
v_unused_2250_ = lean_ctor_get(v___x_2234_, 0);
lean_dec(v_unused_2250_);
v___x_2236_ = v___x_2234_;
v_isShared_2237_ = v_isSharedCheck_2249_;
goto v_resetjp_2235_;
}
else
{
lean_dec(v___x_2234_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2249_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2238_; uint8_t v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2245_; 
v___x_2238_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__0));
v___x_2239_ = 1;
v___x_2240_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2167_, v___x_2239_);
v___x_2241_ = lean_string_append(v___x_2238_, v___x_2240_);
lean_dec_ref(v___x_2240_);
v___x_2242_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__1));
v___x_2243_ = lean_string_append(v___x_2241_, v___x_2242_);
if (v_isShared_2237_ == 0)
{
lean_ctor_set_tag(v___x_2236_, 3);
lean_ctor_set(v___x_2236_, 0, v___x_2243_);
v___x_2245_ = v___x_2236_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v___x_2243_);
v___x_2245_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2246_ = l_Lean_MessageData_ofFormat(v___x_2245_);
v___x_2247_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_2246_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_);
return v___x_2247_;
}
}
}
}
else
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
lean_dec_ref(v_docs_2168_);
lean_dec(v_declName_2167_);
v___x_2251_ = lean_box(0);
v___x_2252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2252_, 0, v___x_2251_);
return v___x_2252_;
}
v___jp_2177_:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v_mctx_2193_; lean_object* v_zetaDeltaFVarIds_2194_; lean_object* v_postponed_2195_; lean_object* v_diag_2196_; lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2207_; 
v___x_2189_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
v___x_2190_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2190_, 0, v___y_2188_);
lean_ctor_set(v___x_2190_, 1, v___y_2183_);
lean_ctor_set(v___x_2190_, 2, v___y_2180_);
lean_ctor_set(v___x_2190_, 3, v___y_2179_);
lean_ctor_set(v___x_2190_, 4, v___y_2187_);
lean_ctor_set(v___x_2190_, 5, v___x_2189_);
lean_ctor_set(v___x_2190_, 6, v___y_2181_);
lean_ctor_set(v___x_2190_, 7, v___y_2182_);
lean_ctor_set(v___x_2190_, 8, v___y_2178_);
lean_ctor_set(v___x_2190_, 9, v___y_2184_);
v___x_2191_ = lean_st_ref_put(v___y_2186_, v___x_2190_);
v___x_2192_ = lean_st_ref_take(v___y_2185_);
v_mctx_2193_ = lean_ctor_get(v___x_2192_, 0);
v_zetaDeltaFVarIds_2194_ = lean_ctor_get(v___x_2192_, 2);
v_postponed_2195_ = lean_ctor_get(v___x_2192_, 3);
v_diag_2196_ = lean_ctor_get(v___x_2192_, 4);
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2192_);
if (v_isSharedCheck_2207_ == 0)
{
lean_object* v_unused_2208_; 
v_unused_2208_ = lean_ctor_get(v___x_2192_, 1);
lean_dec(v_unused_2208_);
v___x_2198_ = v___x_2192_;
v_isShared_2199_ = v_isSharedCheck_2207_;
goto v_resetjp_2197_;
}
else
{
lean_inc(v_diag_2196_);
lean_inc(v_postponed_2195_);
lean_inc(v_zetaDeltaFVarIds_2194_);
lean_inc(v_mctx_2193_);
lean_dec(v___x_2192_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2207_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2203_; 
v___x_2200_ = lean_box(0);
v___x_2201_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__5, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__5_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__5);
if (v_isShared_2199_ == 0)
{
lean_ctor_set(v___x_2198_, 1, v___x_2201_);
v___x_2203_ = v___x_2198_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v_mctx_2193_);
lean_ctor_set(v_reuseFailAlloc_2206_, 1, v___x_2201_);
lean_ctor_set(v_reuseFailAlloc_2206_, 2, v_zetaDeltaFVarIds_2194_);
lean_ctor_set(v_reuseFailAlloc_2206_, 3, v_postponed_2195_);
lean_ctor_set(v_reuseFailAlloc_2206_, 4, v_diag_2196_);
v___x_2203_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = lean_st_ref_put(v___y_2185_, v___x_2203_);
v___x_2205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2200_);
return v___x_2205_;
}
}
}
v___jp_2209_:
{
lean_object* v___x_2212_; lean_object* v_env_2213_; lean_object* v_nextMacroScope_2214_; lean_object* v_ngen_2215_; lean_object* v_auxDeclNGen_2216_; lean_object* v_traceState_2217_; lean_object* v_recordedDeps_2218_; lean_object* v_messages_2219_; lean_object* v_infoState_2220_; lean_object* v_snapshotTasks_2221_; lean_object* v___x_2222_; uint8_t v___x_2223_; lean_object* v_env_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; uint8_t v___x_2227_; 
v___x_2212_ = lean_st_ref_take(v___y_2211_);
v_env_2213_ = lean_ctor_get(v___x_2212_, 0);
lean_inc_ref(v_env_2213_);
v_nextMacroScope_2214_ = lean_ctor_get(v___x_2212_, 1);
lean_inc(v_nextMacroScope_2214_);
v_ngen_2215_ = lean_ctor_get(v___x_2212_, 2);
lean_inc_ref(v_ngen_2215_);
v_auxDeclNGen_2216_ = lean_ctor_get(v___x_2212_, 3);
lean_inc_ref(v_auxDeclNGen_2216_);
v_traceState_2217_ = lean_ctor_get(v___x_2212_, 4);
lean_inc_ref(v_traceState_2217_);
v_recordedDeps_2218_ = lean_ctor_get(v___x_2212_, 6);
lean_inc_ref(v_recordedDeps_2218_);
v_messages_2219_ = lean_ctor_get(v___x_2212_, 7);
lean_inc_ref(v_messages_2219_);
v_infoState_2220_ = lean_ctor_get(v___x_2212_, 8);
lean_inc_ref(v_infoState_2220_);
v_snapshotTasks_2221_ = lean_ctor_get(v___x_2212_, 9);
lean_inc_ref(v_snapshotTasks_2221_);
lean_dec(v___x_2212_);
v___x_2222_ = l_Lean_versoDocStringExt;
v___x_2223_ = 1;
lean_inc(v_declName_2167_);
v_env_2224_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2222_, v_env_2213_, v_declName_2167_, v_docs_2168_, v___x_2223_);
v___x_2225_ = lean_unsigned_to_nat(0u);
v___x_2226_ = lean_array_get_size(v_deferred_2169_);
v___x_2227_ = lean_nat_dec_lt(v___x_2225_, v___x_2226_);
if (v___x_2227_ == 0)
{
lean_dec(v_declName_2167_);
v___y_2178_ = v_infoState_2220_;
v___y_2179_ = v_auxDeclNGen_2216_;
v___y_2180_ = v_ngen_2215_;
v___y_2181_ = v_recordedDeps_2218_;
v___y_2182_ = v_messages_2219_;
v___y_2183_ = v_nextMacroScope_2214_;
v___y_2184_ = v_snapshotTasks_2221_;
v___y_2185_ = v___y_2210_;
v___y_2186_ = v___y_2211_;
v___y_2187_ = v_traceState_2217_;
v___y_2188_ = v_env_2224_;
goto v___jp_2177_;
}
else
{
size_t v___x_2228_; size_t v___x_2229_; lean_object* v___x_2230_; 
v___x_2228_ = ((size_t)0ULL);
v___x_2229_ = lean_usize_of_nat(v___x_2226_);
v___x_2230_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__1(v_declName_2167_, v_deferred_2169_, v___x_2228_, v___x_2229_, v_env_2224_);
v___y_2178_ = v_infoState_2220_;
v___y_2179_ = v_auxDeclNGen_2216_;
v___y_2180_ = v_ngen_2215_;
v___y_2181_ = v_recordedDeps_2218_;
v___y_2182_ = v_messages_2219_;
v___y_2183_ = v_nextMacroScope_2214_;
v___y_2184_ = v_snapshotTasks_2221_;
v___y_2185_ = v___y_2210_;
v___y_2186_ = v___y_2211_;
v___y_2187_ = v_traceState_2217_;
v___y_2188_ = v___x_2230_;
goto v___jp_2177_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___boxed(lean_object* v_declName_2253_, lean_object* v_docs_2254_, lean_object* v_deferred_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2253_, v_docs_2254_, v_deferred_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_);
lean_dec(v___y_2261_);
lean_dec_ref(v___y_2260_);
lean_dec(v___y_2259_);
lean_dec_ref(v___y_2258_);
lean_dec(v___y_2257_);
lean_dec_ref(v___y_2256_);
lean_dec_ref(v_deferred_2255_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocString(lean_object* v_declName_2264_, lean_object* v_binders_2265_, lean_object* v_docComment_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_, lean_object* v_a_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_){
_start:
{
lean_object* v___y_2275_; lean_object* v___y_2276_; lean_object* v___y_2277_; lean_object* v___y_2278_; lean_object* v___y_2279_; lean_object* v___y_2280_; lean_object* v___x_2294_; lean_object* v_env_2295_; lean_object* v___x_2296_; 
v___x_2294_ = lean_st_ref_get(v_a_2272_);
v_env_2295_ = lean_ctor_get(v___x_2294_, 0);
lean_inc_ref(v_env_2295_);
lean_dec(v___x_2294_);
v___x_2296_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2295_, v_declName_2264_);
lean_dec_ref(v_env_2295_);
if (lean_obj_tag(v___x_2296_) == 0)
{
v___y_2275_ = v_a_2267_;
v___y_2276_ = v_a_2268_;
v___y_2277_ = v_a_2269_;
v___y_2278_ = v_a_2270_;
v___y_2279_ = v_a_2271_;
v___y_2280_ = v_a_2272_;
goto v___jp_2274_;
}
else
{
lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2311_; 
lean_dec(v_binders_2265_);
v_isSharedCheck_2311_ = !lean_is_exclusive(v___x_2296_);
if (v_isSharedCheck_2311_ == 0)
{
lean_object* v_unused_2312_; 
v_unused_2312_ = lean_ctor_get(v___x_2296_, 0);
lean_dec(v_unused_2312_);
v___x_2298_ = v___x_2296_;
v_isShared_2299_ = v_isSharedCheck_2311_;
goto v_resetjp_2297_;
}
else
{
lean_dec(v___x_2296_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2311_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2300_; uint8_t v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2307_; 
v___x_2300_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__0));
v___x_2301_ = 1;
v___x_2302_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2264_, v___x_2301_);
v___x_2303_ = lean_string_append(v___x_2300_, v___x_2302_);
lean_dec_ref(v___x_2302_);
v___x_2304_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__1));
v___x_2305_ = lean_string_append(v___x_2303_, v___x_2304_);
if (v_isShared_2299_ == 0)
{
lean_ctor_set_tag(v___x_2298_, 3);
lean_ctor_set(v___x_2298_, 0, v___x_2305_);
v___x_2307_ = v___x_2298_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v___x_2305_);
v___x_2307_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2308_ = l_Lean_MessageData_ofFormat(v___x_2307_);
v___x_2309_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_2308_, v_a_2267_, v_a_2268_, v_a_2269_, v_a_2270_, v_a_2271_, v_a_2272_);
return v___x_2309_;
}
}
}
v___jp_2274_:
{
lean_object* v___x_2281_; 
lean_inc(v_declName_2264_);
v___x_2281_ = l_Lean_versoDocString(v_declName_2264_, v_binders_2265_, v_docComment_2266_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
if (lean_obj_tag(v___x_2281_) == 0)
{
lean_object* v_a_2282_; lean_object* v_toVersoDocString_2283_; lean_object* v_deferredChecks_2284_; lean_object* v___x_2285_; 
v_a_2282_ = lean_ctor_get(v___x_2281_, 0);
lean_inc(v_a_2282_);
lean_dec_ref_known(v___x_2281_, 1);
v_toVersoDocString_2283_ = lean_ctor_get(v_a_2282_, 0);
lean_inc_ref(v_toVersoDocString_2283_);
v_deferredChecks_2284_ = lean_ctor_get(v_a_2282_, 1);
lean_inc_ref(v_deferredChecks_2284_);
lean_dec(v_a_2282_);
v___x_2285_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2264_, v_toVersoDocString_2283_, v_deferredChecks_2284_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
lean_dec_ref(v_deferredChecks_2284_);
return v___x_2285_;
}
else
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2293_; 
lean_dec(v_declName_2264_);
v_a_2286_ = lean_ctor_get(v___x_2281_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2281_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2288_ = v___x_2281_;
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2281_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v___x_2291_; 
if (v_isShared_2289_ == 0)
{
v___x_2291_ = v___x_2288_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_a_2286_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
return v___x_2291_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocString___boxed(lean_object* v_declName_2313_, lean_object* v_binders_2314_, lean_object* v_docComment_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lean_addVersoDocString(v_declName_2313_, v_binders_2314_, v_docComment_2315_, v_a_2316_, v_a_2317_, v_a_2318_, v_a_2319_, v_a_2320_, v_a_2321_);
lean_dec(v_a_2321_);
lean_dec_ref(v_a_2320_);
lean_dec(v_a_2319_);
lean_dec_ref(v_a_2318_);
lean_dec(v_a_2317_);
lean_dec_ref(v_a_2316_);
lean_dec(v_docComment_2315_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1(lean_object* v_00_u03b1_2324_, lean_object* v_msg_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_){
_start:
{
lean_object* v___x_2333_; 
v___x_2333_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v_msg_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
return v___x_2333_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___boxed(lean_object* v_00_u03b1_2334_, lean_object* v_msg_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_){
_start:
{
lean_object* v_res_2343_; 
v_res_2343_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1(v_00_u03b1_2334_, v_msg_2335_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_);
lean_dec(v___y_2341_);
lean_dec_ref(v___y_2340_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
lean_dec(v___y_2337_);
lean_dec_ref(v___y_2336_);
return v_res_2343_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2344_){
_start:
{
lean_object* v___x_2345_; 
v___x_2345_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
return v___x_2345_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_2347_; 
v___x_2347_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
return v___x_2347_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0___redArg___boxed(lean_object* v___dummy_2348_){
_start:
{
lean_object* v_res_2349_; 
v_res_2349_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0___redArg();
return v_res_2349_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0(lean_object* v_00_u03b2_2350_){
_start:
{
lean_object* v___x_2351_; 
v___x_2351_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
return v___x_2351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3(lean_object* v_msgData_2352_, lean_object* v_macroStack_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_){
_start:
{
lean_object* v___x_2361_; 
v___x_2361_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___redArg(v_msgData_2352_, v_macroStack_2353_, v___y_2358_);
return v___x_2361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3___boxed(lean_object* v_msgData_2362_, lean_object* v_macroStack_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_){
_start:
{
lean_object* v_res_2371_; 
v_res_2371_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__3(v_msgData_2362_, v_macroStack_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_);
lean_dec(v___y_2369_);
lean_dec_ref(v___y_2368_);
lean_dec(v___y_2367_);
lean_dec_ref(v___y_2366_);
lean_dec(v___y_2365_);
lean_dec_ref(v___y_2364_);
return v_res_2371_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString(lean_object* v_declName_2372_, lean_object* v_docComment_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_){
_start:
{
lean_object* v___y_2382_; lean_object* v___y_2383_; lean_object* v___y_2384_; lean_object* v___y_2385_; lean_object* v___y_2386_; lean_object* v___y_2387_; lean_object* v___x_2401_; lean_object* v_env_2402_; lean_object* v___x_2403_; 
v___x_2401_ = lean_st_ref_get(v_a_2379_);
v_env_2402_ = lean_ctor_get(v___x_2401_, 0);
lean_inc_ref(v_env_2402_);
lean_dec(v___x_2401_);
v___x_2403_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2402_, v_declName_2372_);
lean_dec_ref(v_env_2402_);
if (lean_obj_tag(v___x_2403_) == 0)
{
v___y_2382_ = v_a_2374_;
v___y_2383_ = v_a_2375_;
v___y_2384_ = v_a_2376_;
v___y_2385_ = v_a_2377_;
v___y_2386_ = v_a_2378_;
v___y_2387_ = v_a_2379_;
goto v___jp_2381_;
}
else
{
lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2418_; 
lean_dec_ref(v_docComment_2373_);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2403_);
if (v_isSharedCheck_2418_ == 0)
{
lean_object* v_unused_2419_; 
v_unused_2419_ = lean_ctor_get(v___x_2403_, 0);
lean_dec(v_unused_2419_);
v___x_2405_ = v___x_2403_;
v_isShared_2406_ = v_isSharedCheck_2418_;
goto v_resetjp_2404_;
}
else
{
lean_dec(v___x_2403_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2418_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2407_; uint8_t v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2414_; 
v___x_2407_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__0));
v___x_2408_ = 1;
v___x_2409_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2372_, v___x_2408_);
v___x_2410_ = lean_string_append(v___x_2407_, v___x_2409_);
lean_dec_ref(v___x_2409_);
v___x_2411_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__1));
v___x_2412_ = lean_string_append(v___x_2410_, v___x_2411_);
if (v_isShared_2406_ == 0)
{
lean_ctor_set_tag(v___x_2405_, 3);
lean_ctor_set(v___x_2405_, 0, v___x_2412_);
v___x_2414_ = v___x_2405_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v___x_2412_);
v___x_2414_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; 
v___x_2415_ = l_Lean_MessageData_ofFormat(v___x_2414_);
v___x_2416_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_2415_, v_a_2374_, v_a_2375_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
return v___x_2416_;
}
}
}
v___jp_2381_:
{
lean_object* v___x_2388_; 
lean_inc(v_declName_2372_);
v___x_2388_ = l_Lean_versoDocStringFromString(v_declName_2372_, v_docComment_2373_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_);
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v_a_2389_; lean_object* v_toVersoDocString_2390_; lean_object* v_deferredChecks_2391_; lean_object* v___x_2392_; 
v_a_2389_ = lean_ctor_get(v___x_2388_, 0);
lean_inc(v_a_2389_);
lean_dec_ref_known(v___x_2388_, 1);
v_toVersoDocString_2390_ = lean_ctor_get(v_a_2389_, 0);
lean_inc_ref(v_toVersoDocString_2390_);
v_deferredChecks_2391_ = lean_ctor_get(v_a_2389_, 1);
lean_inc_ref(v_deferredChecks_2391_);
lean_dec(v_a_2389_);
v___x_2392_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2372_, v_toVersoDocString_2390_, v_deferredChecks_2391_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_);
lean_dec_ref(v_deferredChecks_2391_);
return v___x_2392_;
}
else
{
lean_object* v_a_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2400_; 
lean_dec(v_declName_2372_);
v_a_2393_ = lean_ctor_get(v___x_2388_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2395_ = v___x_2388_;
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_a_2393_);
lean_dec(v___x_2388_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2398_; 
if (v_isShared_2396_ == 0)
{
v___x_2398_ = v___x_2395_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_a_2393_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString___boxed(lean_object* v_declName_2420_, lean_object* v_docComment_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_, lean_object* v_a_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l_Lean_addVersoDocStringFromString(v_declName_2420_, v_docComment_2421_, v_a_2422_, v_a_2423_, v_a_2424_, v_a_2425_, v_a_2426_, v_a_2427_);
lean_dec(v_a_2427_);
lean_dec_ref(v_a_2426_);
lean_dec(v_a_2425_);
lean_dec_ref(v_a_2424_);
lean_dec(v_a_2423_);
lean_dec_ref(v_a_2422_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_2430_, lean_object* v_msgData_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_){
_start:
{
uint8_t v___x_2437_; uint8_t v___x_2438_; lean_object* v___x_2439_; 
v___x_2437_ = 2;
v___x_2438_ = 0;
v___x_2439_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_2430_, v_msgData_2431_, v___x_2437_, v___x_2438_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_2440_, lean_object* v_msgData_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v_ref_2440_, v_msgData_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_);
lean_dec(v___y_2445_);
lean_dec_ref(v___y_2444_);
lean_dec(v___y_2443_);
lean_dec_ref(v___y_2442_);
lean_dec(v_ref_2440_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(lean_object* v___y_2448_, lean_object* v_str_2449_, lean_object* v_as_2450_, size_t v_sz_2451_, size_t v_i_2452_, lean_object* v_b_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_){
_start:
{
lean_object* v_a_2462_; uint8_t v___x_2466_; 
v___x_2466_ = lean_usize_dec_lt(v_i_2452_, v_sz_2451_);
if (v___x_2466_ == 0)
{
lean_object* v___x_2467_; 
v___x_2467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2467_, 0, v_b_2453_);
return v___x_2467_;
}
else
{
lean_object* v_a_2468_; lean_object* v_fst_2469_; lean_object* v_snd_2470_; lean_object* v_start_2471_; lean_object* v_stop_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2492_; 
v_a_2468_ = lean_array_uget_borrowed(v_as_2450_, v_i_2452_);
v_fst_2469_ = lean_ctor_get(v_a_2468_, 0);
lean_inc(v_fst_2469_);
v_snd_2470_ = lean_ctor_get(v_a_2468_, 1);
v_start_2471_ = lean_ctor_get(v_fst_2469_, 0);
v_stop_2472_ = lean_ctor_get(v_fst_2469_, 1);
v_isSharedCheck_2492_ = !lean_is_exclusive(v_fst_2469_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2474_ = v_fst_2469_;
v_isShared_2475_ = v_isSharedCheck_2492_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_stop_2472_);
lean_inc(v_start_2471_);
lean_dec(v_fst_2469_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2492_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2476_; 
v___x_2476_ = lean_box(0);
if (lean_obj_tag(v___y_2448_) == 1)
{
lean_object* v_val_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; uint8_t v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2484_; 
v_val_2477_ = lean_ctor_get(v___y_2448_, 0);
v___x_2478_ = lean_nat_add(v_val_2477_, v_start_2471_);
v___x_2479_ = lean_nat_add(v_val_2477_, v_stop_2472_);
v___x_2480_ = 0;
v___x_2481_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_2481_, 0, v___x_2478_);
lean_ctor_set(v___x_2481_, 1, v___x_2479_);
lean_ctor_set_uint8(v___x_2481_, sizeof(void*)*2, v___x_2480_);
v___x_2482_ = lean_string_utf8_extract(v_str_2449_, v_start_2471_, v_stop_2472_);
lean_dec(v_stop_2472_);
lean_dec(v_start_2471_);
if (v_isShared_2475_ == 0)
{
lean_ctor_set_tag(v___x_2474_, 2);
lean_ctor_set(v___x_2474_, 1, v___x_2482_);
lean_ctor_set(v___x_2474_, 0, v___x_2481_);
v___x_2484_ = v___x_2474_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v___x_2481_);
lean_ctor_set(v_reuseFailAlloc_2488_, 1, v___x_2482_);
v___x_2484_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
lean_inc(v_snd_2470_);
v___x_2485_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2485_, 0, v_snd_2470_);
v___x_2486_ = l_Lean_MessageData_ofFormat(v___x_2485_);
v___x_2487_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v___x_2484_, v___x_2486_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
lean_dec_ref(v___x_2484_);
if (lean_obj_tag(v___x_2487_) == 0)
{
lean_dec_ref_known(v___x_2487_, 1);
v_a_2462_ = v___x_2476_;
goto v___jp_2461_;
}
else
{
return v___x_2487_;
}
}
}
else
{
lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
lean_del_object(v___x_2474_);
lean_dec(v_stop_2472_);
lean_dec(v_start_2471_);
lean_inc(v_snd_2470_);
v___x_2489_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2489_, 0, v_snd_2470_);
v___x_2490_ = l_Lean_MessageData_ofFormat(v___x_2489_);
v___x_2491_ = l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(v___x_2490_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
if (lean_obj_tag(v___x_2491_) == 0)
{
lean_dec_ref_known(v___x_2491_, 1);
v_a_2462_ = v___x_2476_;
goto v___jp_2461_;
}
else
{
return v___x_2491_;
}
}
}
}
v___jp_2461_:
{
size_t v___x_2463_; size_t v___x_2464_; 
v___x_2463_ = ((size_t)1ULL);
v___x_2464_ = lean_usize_add(v_i_2452_, v___x_2463_);
v_i_2452_ = v___x_2464_;
v_b_2453_ = v_a_2462_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2___boxed(lean_object* v___y_2493_, lean_object* v_str_2494_, lean_object* v_as_2495_, lean_object* v_sz_2496_, lean_object* v_i_2497_, lean_object* v_b_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_){
_start:
{
size_t v_sz_boxed_2506_; size_t v_i_boxed_2507_; lean_object* v_res_2508_; 
v_sz_boxed_2506_ = lean_unbox_usize(v_sz_2496_);
lean_dec(v_sz_2496_);
v_i_boxed_2507_ = lean_unbox_usize(v_i_2497_);
lean_dec(v_i_2497_);
v_res_2508_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(v___y_2493_, v_str_2494_, v_as_2495_, v_sz_boxed_2506_, v_i_boxed_2507_, v_b_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_);
lean_dec(v___y_2504_);
lean_dec_ref(v___y_2503_);
lean_dec(v___y_2502_);
lean_dec_ref(v___y_2501_);
lean_dec(v___y_2500_);
lean_dec_ref(v___y_2499_);
lean_dec_ref(v_as_2495_);
lean_dec_ref(v_str_2494_);
lean_dec(v___y_2493_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(lean_object* v_docstring_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
lean_object* v_str_2517_; lean_object* v___y_2519_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
v_str_2517_ = l_Lean_TSyntax_getDocString(v_docstring_2509_);
v___x_2534_ = lean_unsigned_to_nat(1u);
v___x_2535_ = l_Lean_Syntax_getArg(v_docstring_2509_, v___x_2534_);
v___x_2536_ = l_Lean_Syntax_getHeadInfo_x3f(v___x_2535_);
lean_dec(v___x_2535_);
if (lean_obj_tag(v___x_2536_) == 0)
{
lean_object* v___x_2537_; 
v___x_2537_ = lean_box(0);
v___y_2519_ = v___x_2537_;
goto v___jp_2518_;
}
else
{
lean_object* v_val_2538_; uint8_t v___x_2539_; lean_object* v___x_2540_; 
v_val_2538_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_val_2538_);
lean_dec_ref_known(v___x_2536_, 1);
v___x_2539_ = 0;
v___x_2540_ = l_Lean_SourceInfo_getPos_x3f(v_val_2538_, v___x_2539_);
lean_dec(v_val_2538_);
v___y_2519_ = v___x_2540_;
goto v___jp_2518_;
}
v___jp_2518_:
{
lean_object* v___x_2520_; lean_object* v_fst_2521_; lean_object* v___x_2522_; size_t v_sz_2523_; size_t v___x_2524_; lean_object* v___x_2525_; 
lean_inc_ref(v_str_2517_);
v___x_2520_ = l_Lean_rewriteManualLinksCore(v_str_2517_);
v_fst_2521_ = lean_ctor_get(v___x_2520_, 0);
lean_inc(v_fst_2521_);
lean_dec_ref(v___x_2520_);
v___x_2522_ = lean_box(0);
v_sz_2523_ = lean_array_size(v_fst_2521_);
v___x_2524_ = ((size_t)0ULL);
v___x_2525_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(v___y_2519_, v_str_2517_, v_fst_2521_, v_sz_2523_, v___x_2524_, v___x_2522_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_);
lean_dec(v_fst_2521_);
lean_dec_ref(v_str_2517_);
lean_dec(v___y_2519_);
if (lean_obj_tag(v___x_2525_) == 0)
{
lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2532_; 
v_isSharedCheck_2532_ = !lean_is_exclusive(v___x_2525_);
if (v_isSharedCheck_2532_ == 0)
{
lean_object* v_unused_2533_; 
v_unused_2533_ = lean_ctor_get(v___x_2525_, 0);
lean_dec(v_unused_2533_);
v___x_2527_ = v___x_2525_;
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
else
{
lean_dec(v___x_2525_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
lean_object* v___x_2530_; 
if (v_isShared_2528_ == 0)
{
lean_ctor_set(v___x_2527_, 0, v___x_2522_);
v___x_2530_ = v___x_2527_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v___x_2522_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
return v___x_2530_;
}
}
}
else
{
return v___x_2525_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0___boxed(lean_object* v_docstring_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(v_docstring_2541_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec(v___y_2545_);
lean_dec_ref(v___y_2544_);
lean_dec(v___y_2543_);
lean_dec_ref(v___y_2542_);
lean_dec(v_docstring_2541_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___redArg(lean_object* v_ref_2550_, lean_object* v_msg_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_){
_start:
{
lean_object* v_toCold_2559_; lean_object* v_currRecDepth_2560_; lean_object* v_ref_2561_; uint16_t v_optionFlags_2562_; uint8_t v_suppressElabErrors_2563_; uint8_t v_checkDeprecated_2564_; uint8_t v_isRecordingDeps_2565_; lean_object* v_ref_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v_toCold_2559_ = lean_ctor_get(v___y_2556_, 0);
v_currRecDepth_2560_ = lean_ctor_get(v___y_2556_, 1);
v_ref_2561_ = lean_ctor_get(v___y_2556_, 2);
v_optionFlags_2562_ = lean_ctor_get_uint16(v___y_2556_, sizeof(void*)*3);
v_suppressElabErrors_2563_ = lean_ctor_get_uint8(v___y_2556_, sizeof(void*)*3 + 2);
v_checkDeprecated_2564_ = lean_ctor_get_uint8(v___y_2556_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2565_ = lean_ctor_get_uint8(v___y_2556_, sizeof(void*)*3 + 4);
v_ref_2566_ = l_Lean_replaceRef(v_ref_2550_, v_ref_2561_);
lean_inc(v_currRecDepth_2560_);
lean_inc_ref(v_toCold_2559_);
v___x_2567_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2567_, 0, v_toCold_2559_);
lean_ctor_set(v___x_2567_, 1, v_currRecDepth_2560_);
lean_ctor_set(v___x_2567_, 2, v_ref_2566_);
lean_ctor_set_uint16(v___x_2567_, sizeof(void*)*3, v_optionFlags_2562_);
lean_ctor_set_uint8(v___x_2567_, sizeof(void*)*3 + 2, v_suppressElabErrors_2563_);
lean_ctor_set_uint8(v___x_2567_, sizeof(void*)*3 + 3, v_checkDeprecated_2564_);
lean_ctor_set_uint8(v___x_2567_, sizeof(void*)*3 + 4, v_isRecordingDeps_2565_);
v___x_2568_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v_msg_2551_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___x_2567_, v___y_2557_);
lean_dec_ref_known(v___x_2567_, 3);
return v___x_2568_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ref_2569_, lean_object* v_msg_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_){
_start:
{
lean_object* v_res_2578_; 
v_res_2578_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___redArg(v_ref_2569_, v_msg_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_, v___y_2576_);
lean_dec(v___y_2576_);
lean_dec_ref(v___y_2575_);
lean_dec(v___y_2574_);
lean_dec_ref(v___y_2573_);
lean_dec(v___y_2572_);
lean_dec_ref(v___y_2571_);
lean_dec(v_ref_2569_);
return v_res_2578_;
}
}
static lean_object* _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2580_; lean_object* v___x_2581_; 
v___x_2580_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0));
v___x_2581_ = l_Lean_stringToMessageData(v___x_2580_);
return v___x_2581_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(lean_object* v_stx_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_){
_start:
{
lean_object* v___x_2597_; lean_object* v___x_2598_; 
v___x_2597_ = lean_unsigned_to_nat(1u);
v___x_2598_ = l_Lean_Syntax_getArg(v_stx_2583_, v___x_2597_);
if (lean_obj_tag(v___x_2598_) == 1)
{
lean_object* v_kind_2599_; 
v_kind_2599_ = lean_ctor_get(v___x_2598_, 1);
lean_inc(v_kind_2599_);
if (lean_obj_tag(v_kind_2599_) == 1)
{
lean_object* v_pre_2600_; 
v_pre_2600_ = lean_ctor_get(v_kind_2599_, 0);
lean_inc(v_pre_2600_);
if (lean_obj_tag(v_pre_2600_) == 1)
{
lean_object* v_pre_2601_; 
v_pre_2601_ = lean_ctor_get(v_pre_2600_, 0);
lean_inc(v_pre_2601_);
if (lean_obj_tag(v_pre_2601_) == 1)
{
lean_object* v_pre_2602_; 
v_pre_2602_ = lean_ctor_get(v_pre_2601_, 0);
lean_inc(v_pre_2602_);
if (lean_obj_tag(v_pre_2602_) == 1)
{
lean_object* v_pre_2603_; 
v_pre_2603_ = lean_ctor_get(v_pre_2602_, 0);
if (lean_obj_tag(v_pre_2603_) == 0)
{
lean_object* v_args_2604_; lean_object* v_str_2605_; lean_object* v_str_2606_; lean_object* v_str_2607_; lean_object* v_str_2608_; lean_object* v___x_2609_; uint8_t v___x_2610_; 
v_args_2604_ = lean_ctor_get(v___x_2598_, 2);
lean_inc_ref(v_args_2604_);
lean_dec_ref_known(v___x_2598_, 3);
v_str_2605_ = lean_ctor_get(v_kind_2599_, 1);
lean_inc_ref(v_str_2605_);
lean_dec_ref_known(v_kind_2599_, 2);
v_str_2606_ = lean_ctor_get(v_pre_2600_, 1);
lean_inc_ref(v_str_2606_);
lean_dec_ref_known(v_pre_2600_, 2);
v_str_2607_ = lean_ctor_get(v_pre_2601_, 1);
lean_inc_ref(v_str_2607_);
lean_dec_ref_known(v_pre_2601_, 2);
v_str_2608_ = lean_ctor_get(v_pre_2602_, 1);
lean_inc_ref(v_str_2608_);
lean_dec_ref_known(v_pre_2602_, 2);
v___x_2609_ = ((lean_object*)(l_Lean_versoDocString___closed__0));
v___x_2610_ = lean_string_dec_eq(v_str_2608_, v___x_2609_);
lean_dec_ref(v_str_2608_);
if (v___x_2610_ == 0)
{
lean_dec_ref(v_str_2607_);
lean_dec_ref(v_str_2606_);
lean_dec_ref(v_str_2605_);
lean_dec_ref(v_args_2604_);
goto v___jp_2591_;
}
else
{
lean_object* v___x_2611_; uint8_t v___x_2612_; 
v___x_2611_ = ((lean_object*)(l_Lean_versoDocString___closed__1));
v___x_2612_ = lean_string_dec_eq(v_str_2607_, v___x_2611_);
lean_dec_ref(v_str_2607_);
if (v___x_2612_ == 0)
{
lean_dec_ref(v_str_2606_);
lean_dec_ref(v_str_2605_);
lean_dec_ref(v_args_2604_);
goto v___jp_2591_;
}
else
{
lean_object* v___x_2613_; uint8_t v___x_2614_; 
v___x_2613_ = ((lean_object*)(l_Lean_versoDocString___closed__2));
v___x_2614_ = lean_string_dec_eq(v_str_2606_, v___x_2613_);
lean_dec_ref(v_str_2606_);
if (v___x_2614_ == 0)
{
lean_dec_ref(v_str_2605_);
lean_dec_ref(v_args_2604_);
goto v___jp_2591_;
}
else
{
lean_object* v___x_2615_; uint8_t v___x_2616_; 
v___x_2615_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__2));
v___x_2616_ = lean_string_dec_eq(v_str_2605_, v___x_2615_);
lean_dec_ref(v_str_2605_);
if (v___x_2616_ == 0)
{
lean_dec_ref(v_args_2604_);
goto v___jp_2591_;
}
else
{
lean_object* v___x_2617_; lean_object* v___x_2618_; uint8_t v___x_2619_; 
v___x_2617_ = lean_array_get_size(v_args_2604_);
v___x_2618_ = lean_unsigned_to_nat(2u);
v___x_2619_ = lean_nat_dec_eq(v___x_2617_, v___x_2618_);
if (v___x_2619_ == 0)
{
lean_dec_ref(v_args_2604_);
goto v___jp_2591_;
}
else
{
lean_object* v___x_2620_; lean_object* v___x_2621_; 
v___x_2620_ = lean_unsigned_to_nat(0u);
v___x_2621_ = lean_array_fget(v_args_2604_, v___x_2620_);
lean_dec_ref(v_args_2604_);
if (lean_obj_tag(v___x_2621_) == 2)
{
lean_object* v_val_2622_; lean_object* v___x_2623_; 
lean_dec(v_stx_2583_);
v_val_2622_ = lean_ctor_get(v___x_2621_, 1);
lean_inc_ref(v_val_2622_);
lean_dec_ref_known(v___x_2621_, 2);
v___x_2623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2623_, 0, v_val_2622_);
return v___x_2623_;
}
else
{
lean_dec(v___x_2621_);
goto v___jp_2591_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_2602_, 2);
lean_dec_ref_known(v_pre_2601_, 2);
lean_dec_ref_known(v_pre_2600_, 2);
lean_dec_ref_known(v_kind_2599_, 2);
lean_dec_ref_known(v___x_2598_, 3);
goto v___jp_2591_;
}
}
else
{
lean_dec_ref_known(v_pre_2601_, 2);
lean_dec(v_pre_2602_);
lean_dec_ref_known(v_pre_2600_, 2);
lean_dec_ref_known(v_kind_2599_, 2);
lean_dec_ref_known(v___x_2598_, 3);
goto v___jp_2591_;
}
}
else
{
lean_dec_ref_known(v_pre_2600_, 2);
lean_dec(v_pre_2601_);
lean_dec_ref_known(v_kind_2599_, 2);
lean_dec_ref_known(v___x_2598_, 3);
goto v___jp_2591_;
}
}
else
{
lean_dec_ref_known(v_kind_2599_, 2);
lean_dec(v_pre_2600_);
lean_dec_ref_known(v___x_2598_, 3);
goto v___jp_2591_;
}
}
else
{
lean_dec_ref_known(v___x_2598_, 3);
lean_dec(v_kind_2599_);
goto v___jp_2591_;
}
}
else
{
lean_dec(v___x_2598_);
goto v___jp_2591_;
}
v___jp_2591_:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; 
v___x_2592_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1, &l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1);
lean_inc(v_stx_2583_);
v___x_2593_ = l_Lean_MessageData_ofSyntax(v_stx_2583_);
v___x_2594_ = l_Lean_indentD(v___x_2593_);
v___x_2595_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2592_);
lean_ctor_set(v___x_2595_, 1, v___x_2594_);
v___x_2596_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___redArg(v_stx_2583_, v___x_2595_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_);
lean_dec(v_stx_2583_);
return v___x_2596_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___boxed(lean_object* v_stx_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_){
_start:
{
lean_object* v_res_2632_; 
v_res_2632_ = l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(v_stx_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_);
lean_dec(v___y_2630_);
lean_dec_ref(v___y_2629_);
lean_dec(v___y_2628_);
lean_dec_ref(v___y_2627_);
lean_dec(v___y_2626_);
lean_dec_ref(v___y_2625_);
return v_res_2632_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(lean_object* v_declName_2633_, lean_object* v_docComment_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_){
_start:
{
lean_object* v___y_2643_; lean_object* v___y_2644_; lean_object* v___y_2645_; lean_object* v___y_2646_; lean_object* v___y_2647_; lean_object* v___y_2648_; uint8_t v___x_2707_; 
v___x_2707_ = l_Lean_Name_isAnonymous(v_declName_2633_);
if (v___x_2707_ == 0)
{
lean_object* v___x_2708_; lean_object* v_env_2709_; lean_object* v___x_2710_; 
v___x_2708_ = lean_st_ref_get(v___y_2640_);
v_env_2709_ = lean_ctor_get(v___x_2708_, 0);
lean_inc_ref(v_env_2709_);
lean_dec(v___x_2708_);
v___x_2710_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2709_, v_declName_2633_);
lean_dec_ref(v_env_2709_);
if (lean_obj_tag(v___x_2710_) == 0)
{
v___y_2643_ = v___y_2635_;
v___y_2644_ = v___y_2636_;
v___y_2645_ = v___y_2637_;
v___y_2646_ = v___y_2638_;
v___y_2647_ = v___y_2639_;
v___y_2648_ = v___y_2640_;
goto v___jp_2642_;
}
else
{
lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
lean_dec_ref_known(v___x_2710_, 1);
lean_dec(v_docComment_2634_);
v___x_2711_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__1, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1);
v___x_2712_ = l_Lean_MessageData_ofConstName(v_declName_2633_, v___x_2707_);
v___x_2713_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2713_, 0, v___x_2711_);
lean_ctor_set(v___x_2713_, 1, v___x_2712_);
v___x_2714_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_2715_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2715_, 0, v___x_2713_);
lean_ctor_set(v___x_2715_, 1, v___x_2714_);
v___x_2716_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_2715_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_);
return v___x_2716_;
}
}
else
{
lean_object* v___x_2717_; lean_object* v___x_2718_; 
lean_dec(v_docComment_2634_);
lean_dec(v_declName_2633_);
v___x_2717_ = lean_box(0);
v___x_2718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2718_, 0, v___x_2717_);
return v___x_2718_;
}
v___jp_2642_:
{
lean_object* v___x_2649_; 
v___x_2649_ = l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(v_docComment_2634_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_);
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v___x_2650_; 
lean_dec_ref_known(v___x_2649_, 1);
v___x_2650_ = l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(v_docComment_2634_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_);
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v_a_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2698_; 
v_a_2651_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2653_ = v___x_2650_;
v_isShared_2654_ = v_isSharedCheck_2698_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_a_2651_);
lean_dec(v___x_2650_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2698_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
lean_object* v___x_2655_; lean_object* v_env_2656_; lean_object* v_nextMacroScope_2657_; lean_object* v_ngen_2658_; lean_object* v_auxDeclNGen_2659_; lean_object* v_traceState_2660_; lean_object* v_recordedDeps_2661_; lean_object* v_messages_2662_; lean_object* v_infoState_2663_; lean_object* v_snapshotTasks_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2696_; 
v___x_2655_ = lean_st_ref_take(v___y_2648_);
v_env_2656_ = lean_ctor_get(v___x_2655_, 0);
v_nextMacroScope_2657_ = lean_ctor_get(v___x_2655_, 1);
v_ngen_2658_ = lean_ctor_get(v___x_2655_, 2);
v_auxDeclNGen_2659_ = lean_ctor_get(v___x_2655_, 3);
v_traceState_2660_ = lean_ctor_get(v___x_2655_, 4);
v_recordedDeps_2661_ = lean_ctor_get(v___x_2655_, 6);
v_messages_2662_ = lean_ctor_get(v___x_2655_, 7);
v_infoState_2663_ = lean_ctor_get(v___x_2655_, 8);
v_snapshotTasks_2664_ = lean_ctor_get(v___x_2655_, 9);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___x_2655_);
if (v_isSharedCheck_2696_ == 0)
{
lean_object* v_unused_2697_; 
v_unused_2697_ = lean_ctor_get(v___x_2655_, 5);
lean_dec(v_unused_2697_);
v___x_2666_ = v___x_2655_;
v_isShared_2667_ = v_isSharedCheck_2696_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_snapshotTasks_2664_);
lean_inc(v_infoState_2663_);
lean_inc(v_messages_2662_);
lean_inc(v_recordedDeps_2661_);
lean_inc(v_traceState_2660_);
lean_inc(v_auxDeclNGen_2659_);
lean_inc(v_ngen_2658_);
lean_inc(v_nextMacroScope_2657_);
lean_inc(v_env_2656_);
lean_dec(v___x_2655_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2696_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2668_; lean_object* v___x_2669_; uint8_t v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2674_; 
v___x_2668_ = l_Lean_docStringExt;
v___x_2669_ = l_String_removeLeadingSpaces(v_a_2651_);
v___x_2670_ = 1;
v___x_2671_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2668_, v_env_2656_, v_declName_2633_, v___x_2669_, v___x_2670_);
v___x_2672_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
if (v_isShared_2667_ == 0)
{
lean_ctor_set(v___x_2666_, 5, v___x_2672_);
lean_ctor_set(v___x_2666_, 0, v___x_2671_);
v___x_2674_ = v___x_2666_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v___x_2671_);
lean_ctor_set(v_reuseFailAlloc_2695_, 1, v_nextMacroScope_2657_);
lean_ctor_set(v_reuseFailAlloc_2695_, 2, v_ngen_2658_);
lean_ctor_set(v_reuseFailAlloc_2695_, 3, v_auxDeclNGen_2659_);
lean_ctor_set(v_reuseFailAlloc_2695_, 4, v_traceState_2660_);
lean_ctor_set(v_reuseFailAlloc_2695_, 5, v___x_2672_);
lean_ctor_set(v_reuseFailAlloc_2695_, 6, v_recordedDeps_2661_);
lean_ctor_set(v_reuseFailAlloc_2695_, 7, v_messages_2662_);
lean_ctor_set(v_reuseFailAlloc_2695_, 8, v_infoState_2663_);
lean_ctor_set(v_reuseFailAlloc_2695_, 9, v_snapshotTasks_2664_);
v___x_2674_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v_mctx_2677_; lean_object* v_zetaDeltaFVarIds_2678_; lean_object* v_postponed_2679_; lean_object* v_diag_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2693_; 
v___x_2675_ = lean_st_ref_put(v___y_2648_, v___x_2674_);
v___x_2676_ = lean_st_ref_take(v___y_2646_);
v_mctx_2677_ = lean_ctor_get(v___x_2676_, 0);
v_zetaDeltaFVarIds_2678_ = lean_ctor_get(v___x_2676_, 2);
v_postponed_2679_ = lean_ctor_get(v___x_2676_, 3);
v_diag_2680_ = lean_ctor_get(v___x_2676_, 4);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2676_);
if (v_isSharedCheck_2693_ == 0)
{
lean_object* v_unused_2694_; 
v_unused_2694_ = lean_ctor_get(v___x_2676_, 1);
lean_dec(v_unused_2694_);
v___x_2682_ = v___x_2676_;
v_isShared_2683_ = v_isSharedCheck_2693_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_diag_2680_);
lean_inc(v_postponed_2679_);
lean_inc(v_zetaDeltaFVarIds_2678_);
lean_inc(v_mctx_2677_);
lean_dec(v___x_2676_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2693_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2687_; 
v___x_2684_ = lean_box(0);
v___x_2685_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__5, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__5_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__5);
if (v_isShared_2683_ == 0)
{
lean_ctor_set(v___x_2682_, 1, v___x_2685_);
v___x_2687_ = v___x_2682_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_mctx_2677_);
lean_ctor_set(v_reuseFailAlloc_2692_, 1, v___x_2685_);
lean_ctor_set(v_reuseFailAlloc_2692_, 2, v_zetaDeltaFVarIds_2678_);
lean_ctor_set(v_reuseFailAlloc_2692_, 3, v_postponed_2679_);
lean_ctor_set(v_reuseFailAlloc_2692_, 4, v_diag_2680_);
v___x_2687_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
lean_object* v___x_2688_; lean_object* v___x_2690_; 
v___x_2688_ = lean_st_ref_put(v___y_2646_, v___x_2687_);
if (v_isShared_2654_ == 0)
{
lean_ctor_set(v___x_2653_, 0, v___x_2684_);
v___x_2690_ = v___x_2653_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___x_2684_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2706_; 
lean_dec(v_declName_2633_);
v_a_2699_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2706_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2706_ == 0)
{
v___x_2701_ = v___x_2650_;
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
else
{
lean_inc(v_a_2699_);
lean_dec(v___x_2650_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v___x_2704_; 
if (v_isShared_2702_ == 0)
{
v___x_2704_ = v___x_2701_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v_a_2699_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
}
}
}
}
else
{
lean_dec(v_docComment_2634_);
lean_dec(v_declName_2633_);
return v___x_2649_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0___boxed(lean_object* v_declName_2719_, lean_object* v_docComment_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_){
_start:
{
lean_object* v_res_2728_; 
v_res_2728_ = l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(v_declName_2719_, v_docComment_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
lean_dec(v___y_2726_);
lean_dec_ref(v___y_2725_);
lean_dec(v___y_2724_);
lean_dec_ref(v___y_2723_);
lean_dec(v___y_2722_);
lean_dec_ref(v___y_2721_);
return v_res_2728_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringOf(uint8_t v_isVerso_2729_, lean_object* v_declName_2730_, lean_object* v_binders_2731_, lean_object* v_docComment_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_){
_start:
{
if (v_isVerso_2729_ == 0)
{
lean_object* v___x_2740_; 
lean_dec(v_binders_2731_);
v___x_2740_ = l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(v_declName_2730_, v_docComment_2732_, v_a_2733_, v_a_2734_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_);
return v___x_2740_;
}
else
{
lean_object* v___x_2741_; 
v___x_2741_ = l_Lean_addVersoDocString(v_declName_2730_, v_binders_2731_, v_docComment_2732_, v_a_2733_, v_a_2734_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_);
lean_dec(v_docComment_2732_);
return v___x_2741_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringOf___boxed(lean_object* v_isVerso_2742_, lean_object* v_declName_2743_, lean_object* v_binders_2744_, lean_object* v_docComment_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_, lean_object* v_a_2750_, lean_object* v_a_2751_, lean_object* v_a_2752_){
_start:
{
uint8_t v_isVerso_boxed_2753_; lean_object* v_res_2754_; 
v_isVerso_boxed_2753_ = lean_unbox(v_isVerso_2742_);
v_res_2754_ = l_Lean_addDocStringOf(v_isVerso_boxed_2753_, v_declName_2743_, v_binders_2744_, v_docComment_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_);
lean_dec(v_a_2751_);
lean_dec_ref(v_a_2750_);
lean_dec(v_a_2749_);
lean_dec_ref(v_a_2748_);
lean_dec(v_a_2747_);
lean_dec_ref(v_a_2746_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(lean_object* v_ref_2755_, lean_object* v_msgData_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_){
_start:
{
lean_object* v___x_2764_; 
v___x_2764_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v_ref_2755_, v_msgData_2756_, v___y_2759_, v___y_2760_, v___y_2761_, v___y_2762_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_2765_, lean_object* v_msgData_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_){
_start:
{
lean_object* v_res_2774_; 
v_res_2774_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(v_ref_2765_, v_msgData_2766_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_);
lean_dec(v___y_2772_);
lean_dec_ref(v___y_2771_);
lean_dec(v___y_2770_);
lean_dec_ref(v___y_2769_);
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec(v_ref_2765_);
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_2775_, lean_object* v_ref_2776_, lean_object* v_msg_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_){
_start:
{
lean_object* v___x_2785_; 
v___x_2785_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___redArg(v_ref_2776_, v_msg_2777_, v___y_2778_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_);
return v___x_2785_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_2786_, lean_object* v_ref_2787_, lean_object* v_msg_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_){
_start:
{
lean_object* v_res_2796_; 
v_res_2796_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4(v_00_u03b1_2786_, v_ref_2787_, v_msg_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_);
lean_dec(v___y_2794_);
lean_dec_ref(v___y_2793_);
lean_dec(v___y_2792_);
lean_dec_ref(v___y_2791_);
lean_dec(v___y_2790_);
lean_dec_ref(v___y_2789_);
lean_dec(v_ref_2787_);
return v_res_2796_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(lean_object* v_k_2797_, lean_object* v_t_2798_){
_start:
{
if (lean_obj_tag(v_t_2798_) == 0)
{
lean_object* v_k_2799_; lean_object* v_v_2800_; lean_object* v_l_2801_; lean_object* v_r_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_3456_; 
v_k_2799_ = lean_ctor_get(v_t_2798_, 1);
v_v_2800_ = lean_ctor_get(v_t_2798_, 2);
v_l_2801_ = lean_ctor_get(v_t_2798_, 3);
v_r_2802_ = lean_ctor_get(v_t_2798_, 4);
v_isSharedCheck_3456_ = !lean_is_exclusive(v_t_2798_);
if (v_isSharedCheck_3456_ == 0)
{
lean_object* v_unused_3457_; 
v_unused_3457_ = lean_ctor_get(v_t_2798_, 0);
lean_dec(v_unused_3457_);
v___x_2804_ = v_t_2798_;
v_isShared_2805_ = v_isSharedCheck_3456_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_r_2802_);
lean_inc(v_l_2801_);
lean_inc(v_v_2800_);
lean_inc(v_k_2799_);
lean_dec(v_t_2798_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_3456_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
uint8_t v___x_2806_; 
v___x_2806_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2797_, v_k_2799_);
switch(v___x_2806_)
{
case 0:
{
lean_object* v_impl_2807_; lean_object* v___x_2808_; 
v_impl_2807_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_2797_, v_l_2801_);
v___x_2808_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_2807_) == 0)
{
if (lean_obj_tag(v_r_2802_) == 0)
{
lean_object* v_size_2809_; lean_object* v_size_2810_; lean_object* v_k_2811_; lean_object* v_v_2812_; lean_object* v_l_2813_; lean_object* v_r_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; uint8_t v___x_2817_; 
v_size_2809_ = lean_ctor_get(v_impl_2807_, 0);
v_size_2810_ = lean_ctor_get(v_r_2802_, 0);
v_k_2811_ = lean_ctor_get(v_r_2802_, 1);
v_v_2812_ = lean_ctor_get(v_r_2802_, 2);
v_l_2813_ = lean_ctor_get(v_r_2802_, 3);
lean_inc(v_l_2813_);
v_r_2814_ = lean_ctor_get(v_r_2802_, 4);
v___x_2815_ = lean_unsigned_to_nat(3u);
v___x_2816_ = lean_nat_mul(v___x_2815_, v_size_2809_);
v___x_2817_ = lean_nat_dec_lt(v___x_2816_, v_size_2810_);
lean_dec(v___x_2816_);
if (v___x_2817_ == 0)
{
lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2821_; 
lean_dec(v_l_2813_);
v___x_2818_ = lean_nat_add(v___x_2808_, v_size_2809_);
v___x_2819_ = lean_nat_add(v___x_2818_, v_size_2810_);
lean_dec(v___x_2818_);
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 3, v_impl_2807_);
lean_ctor_set(v___x_2804_, 0, v___x_2819_);
v___x_2821_ = v___x_2804_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v___x_2819_);
lean_ctor_set(v_reuseFailAlloc_2822_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_2822_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_2822_, 3, v_impl_2807_);
lean_ctor_set(v_reuseFailAlloc_2822_, 4, v_r_2802_);
v___x_2821_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
return v___x_2821_;
}
}
else
{
lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2886_; 
lean_inc(v_r_2814_);
lean_inc(v_v_2812_);
lean_inc(v_k_2811_);
lean_inc(v_size_2810_);
v_isSharedCheck_2886_ = !lean_is_exclusive(v_r_2802_);
if (v_isSharedCheck_2886_ == 0)
{
lean_object* v_unused_2887_; lean_object* v_unused_2888_; lean_object* v_unused_2889_; lean_object* v_unused_2890_; lean_object* v_unused_2891_; 
v_unused_2887_ = lean_ctor_get(v_r_2802_, 4);
lean_dec(v_unused_2887_);
v_unused_2888_ = lean_ctor_get(v_r_2802_, 3);
lean_dec(v_unused_2888_);
v_unused_2889_ = lean_ctor_get(v_r_2802_, 2);
lean_dec(v_unused_2889_);
v_unused_2890_ = lean_ctor_get(v_r_2802_, 1);
lean_dec(v_unused_2890_);
v_unused_2891_ = lean_ctor_get(v_r_2802_, 0);
lean_dec(v_unused_2891_);
v___x_2824_ = v_r_2802_;
v_isShared_2825_ = v_isSharedCheck_2886_;
goto v_resetjp_2823_;
}
else
{
lean_dec(v_r_2802_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2886_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
lean_object* v_size_2826_; lean_object* v_k_2827_; lean_object* v_v_2828_; lean_object* v_l_2829_; lean_object* v_r_2830_; lean_object* v_size_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; uint8_t v___x_2834_; 
v_size_2826_ = lean_ctor_get(v_l_2813_, 0);
v_k_2827_ = lean_ctor_get(v_l_2813_, 1);
v_v_2828_ = lean_ctor_get(v_l_2813_, 2);
v_l_2829_ = lean_ctor_get(v_l_2813_, 3);
v_r_2830_ = lean_ctor_get(v_l_2813_, 4);
v_size_2831_ = lean_ctor_get(v_r_2814_, 0);
v___x_2832_ = lean_unsigned_to_nat(2u);
v___x_2833_ = lean_nat_mul(v___x_2832_, v_size_2831_);
v___x_2834_ = lean_nat_dec_lt(v_size_2826_, v___x_2833_);
lean_dec(v___x_2833_);
if (v___x_2834_ == 0)
{
lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2862_; 
lean_inc(v_r_2830_);
lean_inc(v_l_2829_);
lean_inc(v_v_2828_);
lean_inc(v_k_2827_);
v_isSharedCheck_2862_ = !lean_is_exclusive(v_l_2813_);
if (v_isSharedCheck_2862_ == 0)
{
lean_object* v_unused_2863_; lean_object* v_unused_2864_; lean_object* v_unused_2865_; lean_object* v_unused_2866_; lean_object* v_unused_2867_; 
v_unused_2863_ = lean_ctor_get(v_l_2813_, 4);
lean_dec(v_unused_2863_);
v_unused_2864_ = lean_ctor_get(v_l_2813_, 3);
lean_dec(v_unused_2864_);
v_unused_2865_ = lean_ctor_get(v_l_2813_, 2);
lean_dec(v_unused_2865_);
v_unused_2866_ = lean_ctor_get(v_l_2813_, 1);
lean_dec(v_unused_2866_);
v_unused_2867_ = lean_ctor_get(v_l_2813_, 0);
lean_dec(v_unused_2867_);
v___x_2836_ = v_l_2813_;
v_isShared_2837_ = v_isSharedCheck_2862_;
goto v_resetjp_2835_;
}
else
{
lean_dec(v_l_2813_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2862_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___y_2841_; lean_object* v___y_2842_; lean_object* v___y_2843_; lean_object* v___y_2852_; 
v___x_2838_ = lean_nat_add(v___x_2808_, v_size_2809_);
v___x_2839_ = lean_nat_add(v___x_2838_, v_size_2810_);
lean_dec(v_size_2810_);
if (lean_obj_tag(v_l_2829_) == 0)
{
lean_object* v_size_2860_; 
v_size_2860_ = lean_ctor_get(v_l_2829_, 0);
lean_inc(v_size_2860_);
v___y_2852_ = v_size_2860_;
goto v___jp_2851_;
}
else
{
lean_object* v___x_2861_; 
v___x_2861_ = lean_unsigned_to_nat(0u);
v___y_2852_ = v___x_2861_;
goto v___jp_2851_;
}
v___jp_2840_:
{
lean_object* v___x_2844_; lean_object* v___x_2846_; 
v___x_2844_ = lean_nat_add(v___y_2842_, v___y_2843_);
lean_dec(v___y_2843_);
lean_dec(v___y_2842_);
if (v_isShared_2837_ == 0)
{
lean_ctor_set(v___x_2836_, 4, v_r_2814_);
lean_ctor_set(v___x_2836_, 3, v_r_2830_);
lean_ctor_set(v___x_2836_, 2, v_v_2812_);
lean_ctor_set(v___x_2836_, 1, v_k_2811_);
lean_ctor_set(v___x_2836_, 0, v___x_2844_);
v___x_2846_ = v___x_2836_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v___x_2844_);
lean_ctor_set(v_reuseFailAlloc_2850_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_2850_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_2850_, 3, v_r_2830_);
lean_ctor_set(v_reuseFailAlloc_2850_, 4, v_r_2814_);
v___x_2846_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
lean_object* v___x_2848_; 
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 4, v___x_2846_);
lean_ctor_set(v___x_2824_, 3, v___y_2841_);
lean_ctor_set(v___x_2824_, 2, v_v_2828_);
lean_ctor_set(v___x_2824_, 1, v_k_2827_);
lean_ctor_set(v___x_2824_, 0, v___x_2839_);
v___x_2848_ = v___x_2824_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v___x_2839_);
lean_ctor_set(v_reuseFailAlloc_2849_, 1, v_k_2827_);
lean_ctor_set(v_reuseFailAlloc_2849_, 2, v_v_2828_);
lean_ctor_set(v_reuseFailAlloc_2849_, 3, v___y_2841_);
lean_ctor_set(v_reuseFailAlloc_2849_, 4, v___x_2846_);
v___x_2848_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
return v___x_2848_;
}
}
}
v___jp_2851_:
{
lean_object* v___x_2853_; lean_object* v___x_2855_; 
v___x_2853_ = lean_nat_add(v___x_2838_, v___y_2852_);
lean_dec(v___y_2852_);
lean_dec(v___x_2838_);
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 4, v_l_2829_);
lean_ctor_set(v___x_2804_, 3, v_impl_2807_);
lean_ctor_set(v___x_2804_, 0, v___x_2853_);
v___x_2855_ = v___x_2804_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v___x_2853_);
lean_ctor_set(v_reuseFailAlloc_2859_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_2859_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_2859_, 3, v_impl_2807_);
lean_ctor_set(v_reuseFailAlloc_2859_, 4, v_l_2829_);
v___x_2855_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
lean_object* v___x_2856_; 
v___x_2856_ = lean_nat_add(v___x_2808_, v_size_2831_);
if (lean_obj_tag(v_r_2830_) == 0)
{
lean_object* v_size_2857_; 
v_size_2857_ = lean_ctor_get(v_r_2830_, 0);
lean_inc(v_size_2857_);
v___y_2841_ = v___x_2855_;
v___y_2842_ = v___x_2856_;
v___y_2843_ = v_size_2857_;
goto v___jp_2840_;
}
else
{
lean_object* v___x_2858_; 
v___x_2858_ = lean_unsigned_to_nat(0u);
v___y_2841_ = v___x_2855_;
v___y_2842_ = v___x_2856_;
v___y_2843_ = v___x_2858_;
goto v___jp_2840_;
}
}
}
}
}
else
{
lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2872_; 
lean_del_object(v___x_2804_);
v___x_2868_ = lean_nat_add(v___x_2808_, v_size_2809_);
v___x_2869_ = lean_nat_add(v___x_2868_, v_size_2810_);
lean_dec(v_size_2810_);
v___x_2870_ = lean_nat_add(v___x_2868_, v_size_2826_);
lean_dec(v___x_2868_);
lean_inc_ref(v_impl_2807_);
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 4, v_l_2813_);
lean_ctor_set(v___x_2824_, 3, v_impl_2807_);
lean_ctor_set(v___x_2824_, 2, v_v_2800_);
lean_ctor_set(v___x_2824_, 1, v_k_2799_);
lean_ctor_set(v___x_2824_, 0, v___x_2870_);
v___x_2872_ = v___x_2824_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v___x_2870_);
lean_ctor_set(v_reuseFailAlloc_2885_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_2885_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_2885_, 3, v_impl_2807_);
lean_ctor_set(v_reuseFailAlloc_2885_, 4, v_l_2813_);
v___x_2872_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2879_; 
v_isSharedCheck_2879_ = !lean_is_exclusive(v_impl_2807_);
if (v_isSharedCheck_2879_ == 0)
{
lean_object* v_unused_2880_; lean_object* v_unused_2881_; lean_object* v_unused_2882_; lean_object* v_unused_2883_; lean_object* v_unused_2884_; 
v_unused_2880_ = lean_ctor_get(v_impl_2807_, 4);
lean_dec(v_unused_2880_);
v_unused_2881_ = lean_ctor_get(v_impl_2807_, 3);
lean_dec(v_unused_2881_);
v_unused_2882_ = lean_ctor_get(v_impl_2807_, 2);
lean_dec(v_unused_2882_);
v_unused_2883_ = lean_ctor_get(v_impl_2807_, 1);
lean_dec(v_unused_2883_);
v_unused_2884_ = lean_ctor_get(v_impl_2807_, 0);
lean_dec(v_unused_2884_);
v___x_2874_ = v_impl_2807_;
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
else
{
lean_dec(v_impl_2807_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2877_; 
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 4, v_r_2814_);
lean_ctor_set(v___x_2874_, 3, v___x_2872_);
lean_ctor_set(v___x_2874_, 2, v_v_2812_);
lean_ctor_set(v___x_2874_, 1, v_k_2811_);
lean_ctor_set(v___x_2874_, 0, v___x_2869_);
v___x_2877_ = v___x_2874_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v___x_2869_);
lean_ctor_set(v_reuseFailAlloc_2878_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_2878_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_2878_, 3, v___x_2872_);
lean_ctor_set(v_reuseFailAlloc_2878_, 4, v_r_2814_);
v___x_2877_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
return v___x_2877_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_2892_; lean_object* v___x_2893_; lean_object* v___x_2895_; 
v_size_2892_ = lean_ctor_get(v_impl_2807_, 0);
v___x_2893_ = lean_nat_add(v___x_2808_, v_size_2892_);
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 3, v_impl_2807_);
lean_ctor_set(v___x_2804_, 0, v___x_2893_);
v___x_2895_ = v___x_2804_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v___x_2893_);
lean_ctor_set(v_reuseFailAlloc_2896_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_2896_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_2896_, 3, v_impl_2807_);
lean_ctor_set(v_reuseFailAlloc_2896_, 4, v_r_2802_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
}
else
{
if (lean_obj_tag(v_r_2802_) == 0)
{
lean_object* v_l_2897_; 
v_l_2897_ = lean_ctor_get(v_r_2802_, 3);
lean_inc(v_l_2897_);
if (lean_obj_tag(v_l_2897_) == 0)
{
lean_object* v_r_2898_; 
v_r_2898_ = lean_ctor_get(v_r_2802_, 4);
lean_inc(v_r_2898_);
if (lean_obj_tag(v_r_2898_) == 0)
{
lean_object* v_size_2899_; lean_object* v_k_2900_; lean_object* v_v_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2914_; 
v_size_2899_ = lean_ctor_get(v_r_2802_, 0);
v_k_2900_ = lean_ctor_get(v_r_2802_, 1);
v_v_2901_ = lean_ctor_get(v_r_2802_, 2);
v_isSharedCheck_2914_ = !lean_is_exclusive(v_r_2802_);
if (v_isSharedCheck_2914_ == 0)
{
lean_object* v_unused_2915_; lean_object* v_unused_2916_; 
v_unused_2915_ = lean_ctor_get(v_r_2802_, 4);
lean_dec(v_unused_2915_);
v_unused_2916_ = lean_ctor_get(v_r_2802_, 3);
lean_dec(v_unused_2916_);
v___x_2903_ = v_r_2802_;
v_isShared_2904_ = v_isSharedCheck_2914_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_v_2901_);
lean_inc(v_k_2900_);
lean_inc(v_size_2899_);
lean_dec(v_r_2802_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2914_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v_size_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2909_; 
v_size_2905_ = lean_ctor_get(v_l_2897_, 0);
v___x_2906_ = lean_nat_add(v___x_2808_, v_size_2899_);
lean_dec(v_size_2899_);
v___x_2907_ = lean_nat_add(v___x_2808_, v_size_2905_);
if (v_isShared_2904_ == 0)
{
lean_ctor_set(v___x_2903_, 4, v_l_2897_);
lean_ctor_set(v___x_2903_, 3, v_impl_2807_);
lean_ctor_set(v___x_2903_, 2, v_v_2800_);
lean_ctor_set(v___x_2903_, 1, v_k_2799_);
lean_ctor_set(v___x_2903_, 0, v___x_2907_);
v___x_2909_ = v___x_2903_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v___x_2907_);
lean_ctor_set(v_reuseFailAlloc_2913_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_2913_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_2913_, 3, v_impl_2807_);
lean_ctor_set(v_reuseFailAlloc_2913_, 4, v_l_2897_);
v___x_2909_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
lean_object* v___x_2911_; 
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 4, v_r_2898_);
lean_ctor_set(v___x_2804_, 3, v___x_2909_);
lean_ctor_set(v___x_2804_, 2, v_v_2901_);
lean_ctor_set(v___x_2804_, 1, v_k_2900_);
lean_ctor_set(v___x_2804_, 0, v___x_2906_);
v___x_2911_ = v___x_2804_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v___x_2906_);
lean_ctor_set(v_reuseFailAlloc_2912_, 1, v_k_2900_);
lean_ctor_set(v_reuseFailAlloc_2912_, 2, v_v_2901_);
lean_ctor_set(v_reuseFailAlloc_2912_, 3, v___x_2909_);
lean_ctor_set(v_reuseFailAlloc_2912_, 4, v_r_2898_);
v___x_2911_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
return v___x_2911_;
}
}
}
}
else
{
lean_object* v_k_2917_; lean_object* v_v_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2941_; 
v_k_2917_ = lean_ctor_get(v_r_2802_, 1);
v_v_2918_ = lean_ctor_get(v_r_2802_, 2);
v_isSharedCheck_2941_ = !lean_is_exclusive(v_r_2802_);
if (v_isSharedCheck_2941_ == 0)
{
lean_object* v_unused_2942_; lean_object* v_unused_2943_; lean_object* v_unused_2944_; 
v_unused_2942_ = lean_ctor_get(v_r_2802_, 4);
lean_dec(v_unused_2942_);
v_unused_2943_ = lean_ctor_get(v_r_2802_, 3);
lean_dec(v_unused_2943_);
v_unused_2944_ = lean_ctor_get(v_r_2802_, 0);
lean_dec(v_unused_2944_);
v___x_2920_ = v_r_2802_;
v_isShared_2921_ = v_isSharedCheck_2941_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_v_2918_);
lean_inc(v_k_2917_);
lean_dec(v_r_2802_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2941_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v_k_2922_; lean_object* v_v_2923_; lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2937_; 
v_k_2922_ = lean_ctor_get(v_l_2897_, 1);
v_v_2923_ = lean_ctor_get(v_l_2897_, 2);
v_isSharedCheck_2937_ = !lean_is_exclusive(v_l_2897_);
if (v_isSharedCheck_2937_ == 0)
{
lean_object* v_unused_2938_; lean_object* v_unused_2939_; lean_object* v_unused_2940_; 
v_unused_2938_ = lean_ctor_get(v_l_2897_, 4);
lean_dec(v_unused_2938_);
v_unused_2939_ = lean_ctor_get(v_l_2897_, 3);
lean_dec(v_unused_2939_);
v_unused_2940_ = lean_ctor_get(v_l_2897_, 0);
lean_dec(v_unused_2940_);
v___x_2925_ = v_l_2897_;
v_isShared_2926_ = v_isSharedCheck_2937_;
goto v_resetjp_2924_;
}
else
{
lean_inc(v_v_2923_);
lean_inc(v_k_2922_);
lean_dec(v_l_2897_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2937_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v___x_2927_; lean_object* v___x_2929_; 
v___x_2927_ = lean_unsigned_to_nat(3u);
if (v_isShared_2926_ == 0)
{
lean_ctor_set(v___x_2925_, 4, v_r_2898_);
lean_ctor_set(v___x_2925_, 3, v_r_2898_);
lean_ctor_set(v___x_2925_, 2, v_v_2800_);
lean_ctor_set(v___x_2925_, 1, v_k_2799_);
lean_ctor_set(v___x_2925_, 0, v___x_2808_);
v___x_2929_ = v___x_2925_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v___x_2808_);
lean_ctor_set(v_reuseFailAlloc_2936_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_2936_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_2936_, 3, v_r_2898_);
lean_ctor_set(v_reuseFailAlloc_2936_, 4, v_r_2898_);
v___x_2929_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
lean_object* v___x_2931_; 
if (v_isShared_2921_ == 0)
{
lean_ctor_set(v___x_2920_, 3, v_r_2898_);
lean_ctor_set(v___x_2920_, 0, v___x_2808_);
v___x_2931_ = v___x_2920_;
goto v_reusejp_2930_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v___x_2808_);
lean_ctor_set(v_reuseFailAlloc_2935_, 1, v_k_2917_);
lean_ctor_set(v_reuseFailAlloc_2935_, 2, v_v_2918_);
lean_ctor_set(v_reuseFailAlloc_2935_, 3, v_r_2898_);
lean_ctor_set(v_reuseFailAlloc_2935_, 4, v_r_2898_);
v___x_2931_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2930_;
}
v_reusejp_2930_:
{
lean_object* v___x_2933_; 
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 4, v___x_2931_);
lean_ctor_set(v___x_2804_, 3, v___x_2929_);
lean_ctor_set(v___x_2804_, 2, v_v_2923_);
lean_ctor_set(v___x_2804_, 1, v_k_2922_);
lean_ctor_set(v___x_2804_, 0, v___x_2927_);
v___x_2933_ = v___x_2804_;
goto v_reusejp_2932_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v___x_2927_);
lean_ctor_set(v_reuseFailAlloc_2934_, 1, v_k_2922_);
lean_ctor_set(v_reuseFailAlloc_2934_, 2, v_v_2923_);
lean_ctor_set(v_reuseFailAlloc_2934_, 3, v___x_2929_);
lean_ctor_set(v_reuseFailAlloc_2934_, 4, v___x_2931_);
v___x_2933_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2932_;
}
v_reusejp_2932_:
{
return v___x_2933_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_2945_; 
v_r_2945_ = lean_ctor_get(v_r_2802_, 4);
lean_inc(v_r_2945_);
if (lean_obj_tag(v_r_2945_) == 0)
{
lean_object* v_k_2946_; lean_object* v_v_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2958_; 
v_k_2946_ = lean_ctor_get(v_r_2802_, 1);
v_v_2947_ = lean_ctor_get(v_r_2802_, 2);
v_isSharedCheck_2958_ = !lean_is_exclusive(v_r_2802_);
if (v_isSharedCheck_2958_ == 0)
{
lean_object* v_unused_2959_; lean_object* v_unused_2960_; lean_object* v_unused_2961_; 
v_unused_2959_ = lean_ctor_get(v_r_2802_, 4);
lean_dec(v_unused_2959_);
v_unused_2960_ = lean_ctor_get(v_r_2802_, 3);
lean_dec(v_unused_2960_);
v_unused_2961_ = lean_ctor_get(v_r_2802_, 0);
lean_dec(v_unused_2961_);
v___x_2949_ = v_r_2802_;
v_isShared_2950_ = v_isSharedCheck_2958_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_v_2947_);
lean_inc(v_k_2946_);
lean_dec(v_r_2802_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2958_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
lean_object* v___x_2951_; lean_object* v___x_2953_; 
v___x_2951_ = lean_unsigned_to_nat(3u);
if (v_isShared_2950_ == 0)
{
lean_ctor_set(v___x_2949_, 4, v_l_2897_);
lean_ctor_set(v___x_2949_, 2, v_v_2800_);
lean_ctor_set(v___x_2949_, 1, v_k_2799_);
lean_ctor_set(v___x_2949_, 0, v___x_2808_);
v___x_2953_ = v___x_2949_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v___x_2808_);
lean_ctor_set(v_reuseFailAlloc_2957_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_2957_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_2957_, 3, v_l_2897_);
lean_ctor_set(v_reuseFailAlloc_2957_, 4, v_l_2897_);
v___x_2953_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
lean_object* v___x_2955_; 
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 4, v_r_2945_);
lean_ctor_set(v___x_2804_, 3, v___x_2953_);
lean_ctor_set(v___x_2804_, 2, v_v_2947_);
lean_ctor_set(v___x_2804_, 1, v_k_2946_);
lean_ctor_set(v___x_2804_, 0, v___x_2951_);
v___x_2955_ = v___x_2804_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v___x_2951_);
lean_ctor_set(v_reuseFailAlloc_2956_, 1, v_k_2946_);
lean_ctor_set(v_reuseFailAlloc_2956_, 2, v_v_2947_);
lean_ctor_set(v_reuseFailAlloc_2956_, 3, v___x_2953_);
lean_ctor_set(v_reuseFailAlloc_2956_, 4, v_r_2945_);
v___x_2955_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
return v___x_2955_;
}
}
}
}
else
{
lean_object* v_size_2962_; lean_object* v_k_2963_; lean_object* v_v_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2975_; 
v_size_2962_ = lean_ctor_get(v_r_2802_, 0);
v_k_2963_ = lean_ctor_get(v_r_2802_, 1);
v_v_2964_ = lean_ctor_get(v_r_2802_, 2);
v_isSharedCheck_2975_ = !lean_is_exclusive(v_r_2802_);
if (v_isSharedCheck_2975_ == 0)
{
lean_object* v_unused_2976_; lean_object* v_unused_2977_; 
v_unused_2976_ = lean_ctor_get(v_r_2802_, 4);
lean_dec(v_unused_2976_);
v_unused_2977_ = lean_ctor_get(v_r_2802_, 3);
lean_dec(v_unused_2977_);
v___x_2966_ = v_r_2802_;
v_isShared_2967_ = v_isSharedCheck_2975_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_v_2964_);
lean_inc(v_k_2963_);
lean_inc(v_size_2962_);
lean_dec(v_r_2802_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2975_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
lean_object* v___x_2969_; 
if (v_isShared_2967_ == 0)
{
lean_ctor_set(v___x_2966_, 3, v_r_2945_);
v___x_2969_ = v___x_2966_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v_size_2962_);
lean_ctor_set(v_reuseFailAlloc_2974_, 1, v_k_2963_);
lean_ctor_set(v_reuseFailAlloc_2974_, 2, v_v_2964_);
lean_ctor_set(v_reuseFailAlloc_2974_, 3, v_r_2945_);
lean_ctor_set(v_reuseFailAlloc_2974_, 4, v_r_2945_);
v___x_2969_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
lean_object* v___x_2970_; lean_object* v___x_2972_; 
v___x_2970_ = lean_unsigned_to_nat(2u);
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 4, v___x_2969_);
lean_ctor_set(v___x_2804_, 3, v_r_2945_);
lean_ctor_set(v___x_2804_, 0, v___x_2970_);
v___x_2972_ = v___x_2804_;
goto v_reusejp_2971_;
}
else
{
lean_object* v_reuseFailAlloc_2973_; 
v_reuseFailAlloc_2973_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2973_, 0, v___x_2970_);
lean_ctor_set(v_reuseFailAlloc_2973_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_2973_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_2973_, 3, v_r_2945_);
lean_ctor_set(v_reuseFailAlloc_2973_, 4, v___x_2969_);
v___x_2972_ = v_reuseFailAlloc_2973_;
goto v_reusejp_2971_;
}
v_reusejp_2971_:
{
return v___x_2972_;
}
}
}
}
}
}
else
{
lean_object* v___x_2979_; 
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 3, v_r_2802_);
lean_ctor_set(v___x_2804_, 0, v___x_2808_);
v___x_2979_ = v___x_2804_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v___x_2808_);
lean_ctor_set(v_reuseFailAlloc_2980_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_2980_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_2980_, 3, v_r_2802_);
lean_ctor_set(v_reuseFailAlloc_2980_, 4, v_r_2802_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
return v___x_2979_;
}
}
}
}
case 1:
{
lean_del_object(v___x_2804_);
lean_dec(v_v_2800_);
lean_dec(v_k_2799_);
if (lean_obj_tag(v_l_2801_) == 0)
{
if (lean_obj_tag(v_r_2802_) == 0)
{
lean_object* v_size_2981_; lean_object* v_k_2982_; lean_object* v_v_2983_; lean_object* v_l_2984_; lean_object* v_r_2985_; lean_object* v_size_2986_; lean_object* v_k_2987_; lean_object* v_v_2988_; lean_object* v_l_2989_; lean_object* v_r_2990_; lean_object* v___x_2991_; uint8_t v___x_2992_; 
v_size_2981_ = lean_ctor_get(v_l_2801_, 0);
v_k_2982_ = lean_ctor_get(v_l_2801_, 1);
v_v_2983_ = lean_ctor_get(v_l_2801_, 2);
v_l_2984_ = lean_ctor_get(v_l_2801_, 3);
v_r_2985_ = lean_ctor_get(v_l_2801_, 4);
lean_inc(v_r_2985_);
v_size_2986_ = lean_ctor_get(v_r_2802_, 0);
v_k_2987_ = lean_ctor_get(v_r_2802_, 1);
v_v_2988_ = lean_ctor_get(v_r_2802_, 2);
v_l_2989_ = lean_ctor_get(v_r_2802_, 3);
lean_inc(v_l_2989_);
v_r_2990_ = lean_ctor_get(v_r_2802_, 4);
v___x_2991_ = lean_unsigned_to_nat(1u);
v___x_2992_ = lean_nat_dec_lt(v_size_2981_, v_size_2986_);
if (v___x_2992_ == 0)
{
lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_3128_; 
lean_inc(v_l_2984_);
lean_inc(v_v_2983_);
lean_inc(v_k_2982_);
v_isSharedCheck_3128_ = !lean_is_exclusive(v_l_2801_);
if (v_isSharedCheck_3128_ == 0)
{
lean_object* v_unused_3129_; lean_object* v_unused_3130_; lean_object* v_unused_3131_; lean_object* v_unused_3132_; lean_object* v_unused_3133_; 
v_unused_3129_ = lean_ctor_get(v_l_2801_, 4);
lean_dec(v_unused_3129_);
v_unused_3130_ = lean_ctor_get(v_l_2801_, 3);
lean_dec(v_unused_3130_);
v_unused_3131_ = lean_ctor_get(v_l_2801_, 2);
lean_dec(v_unused_3131_);
v_unused_3132_ = lean_ctor_get(v_l_2801_, 1);
lean_dec(v_unused_3132_);
v_unused_3133_ = lean_ctor_get(v_l_2801_, 0);
lean_dec(v_unused_3133_);
v___x_2994_ = v_l_2801_;
v_isShared_2995_ = v_isSharedCheck_3128_;
goto v_resetjp_2993_;
}
else
{
lean_dec(v_l_2801_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_3128_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
lean_object* v___x_2996_; lean_object* v_tree_2997_; 
v___x_2996_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_2982_, v_v_2983_, v_l_2984_, v_r_2985_);
v_tree_2997_ = lean_ctor_get(v___x_2996_, 2);
if (lean_obj_tag(v_tree_2997_) == 0)
{
lean_object* v_k_2998_; lean_object* v_v_2999_; lean_object* v_size_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; uint8_t v___x_3003_; 
lean_inc_ref(v_tree_2997_);
v_k_2998_ = lean_ctor_get(v___x_2996_, 0);
lean_inc(v_k_2998_);
v_v_2999_ = lean_ctor_get(v___x_2996_, 1);
lean_inc(v_v_2999_);
lean_dec_ref(v___x_2996_);
v_size_3000_ = lean_ctor_get(v_tree_2997_, 0);
v___x_3001_ = lean_unsigned_to_nat(3u);
v___x_3002_ = lean_nat_mul(v___x_3001_, v_size_3000_);
v___x_3003_ = lean_nat_dec_lt(v___x_3002_, v_size_2986_);
lean_dec(v___x_3002_);
if (v___x_3003_ == 0)
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3007_; 
lean_dec(v_l_2989_);
v___x_3004_ = lean_nat_add(v___x_2991_, v_size_3000_);
v___x_3005_ = lean_nat_add(v___x_3004_, v_size_2986_);
lean_dec(v___x_3004_);
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 4, v_r_2802_);
lean_ctor_set(v___x_2994_, 3, v_tree_2997_);
lean_ctor_set(v___x_2994_, 2, v_v_2999_);
lean_ctor_set(v___x_2994_, 1, v_k_2998_);
lean_ctor_set(v___x_2994_, 0, v___x_3005_);
v___x_3007_ = v___x_2994_;
goto v_reusejp_3006_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v___x_3005_);
lean_ctor_set(v_reuseFailAlloc_3008_, 1, v_k_2998_);
lean_ctor_set(v_reuseFailAlloc_3008_, 2, v_v_2999_);
lean_ctor_set(v_reuseFailAlloc_3008_, 3, v_tree_2997_);
lean_ctor_set(v_reuseFailAlloc_3008_, 4, v_r_2802_);
v___x_3007_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3006_;
}
v_reusejp_3006_:
{
return v___x_3007_;
}
}
else
{
lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3063_; 
lean_inc(v_r_2990_);
lean_inc(v_v_2988_);
lean_inc(v_k_2987_);
lean_inc(v_size_2986_);
v_isSharedCheck_3063_ = !lean_is_exclusive(v_r_2802_);
if (v_isSharedCheck_3063_ == 0)
{
lean_object* v_unused_3064_; lean_object* v_unused_3065_; lean_object* v_unused_3066_; lean_object* v_unused_3067_; lean_object* v_unused_3068_; 
v_unused_3064_ = lean_ctor_get(v_r_2802_, 4);
lean_dec(v_unused_3064_);
v_unused_3065_ = lean_ctor_get(v_r_2802_, 3);
lean_dec(v_unused_3065_);
v_unused_3066_ = lean_ctor_get(v_r_2802_, 2);
lean_dec(v_unused_3066_);
v_unused_3067_ = lean_ctor_get(v_r_2802_, 1);
lean_dec(v_unused_3067_);
v_unused_3068_ = lean_ctor_get(v_r_2802_, 0);
lean_dec(v_unused_3068_);
v___x_3010_ = v_r_2802_;
v_isShared_3011_ = v_isSharedCheck_3063_;
goto v_resetjp_3009_;
}
else
{
lean_dec(v_r_2802_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3063_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v_size_3012_; lean_object* v_k_3013_; lean_object* v_v_3014_; lean_object* v_l_3015_; lean_object* v_r_3016_; lean_object* v_size_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; uint8_t v___x_3020_; 
v_size_3012_ = lean_ctor_get(v_l_2989_, 0);
v_k_3013_ = lean_ctor_get(v_l_2989_, 1);
v_v_3014_ = lean_ctor_get(v_l_2989_, 2);
v_l_3015_ = lean_ctor_get(v_l_2989_, 3);
v_r_3016_ = lean_ctor_get(v_l_2989_, 4);
v_size_3017_ = lean_ctor_get(v_r_2990_, 0);
v___x_3018_ = lean_unsigned_to_nat(2u);
v___x_3019_ = lean_nat_mul(v___x_3018_, v_size_3017_);
v___x_3020_ = lean_nat_dec_lt(v_size_3012_, v___x_3019_);
lean_dec(v___x_3019_);
if (v___x_3020_ == 0)
{
lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3048_; 
lean_inc(v_r_3016_);
lean_inc(v_l_3015_);
lean_inc(v_v_3014_);
lean_inc(v_k_3013_);
v_isSharedCheck_3048_ = !lean_is_exclusive(v_l_2989_);
if (v_isSharedCheck_3048_ == 0)
{
lean_object* v_unused_3049_; lean_object* v_unused_3050_; lean_object* v_unused_3051_; lean_object* v_unused_3052_; lean_object* v_unused_3053_; 
v_unused_3049_ = lean_ctor_get(v_l_2989_, 4);
lean_dec(v_unused_3049_);
v_unused_3050_ = lean_ctor_get(v_l_2989_, 3);
lean_dec(v_unused_3050_);
v_unused_3051_ = lean_ctor_get(v_l_2989_, 2);
lean_dec(v_unused_3051_);
v_unused_3052_ = lean_ctor_get(v_l_2989_, 1);
lean_dec(v_unused_3052_);
v_unused_3053_ = lean_ctor_get(v_l_2989_, 0);
lean_dec(v_unused_3053_);
v___x_3022_ = v_l_2989_;
v_isShared_3023_ = v_isSharedCheck_3048_;
goto v_resetjp_3021_;
}
else
{
lean_dec(v_l_2989_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3048_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___y_3027_; lean_object* v___y_3028_; lean_object* v___y_3029_; lean_object* v___y_3038_; 
v___x_3024_ = lean_nat_add(v___x_2991_, v_size_3000_);
v___x_3025_ = lean_nat_add(v___x_3024_, v_size_2986_);
lean_dec(v_size_2986_);
if (lean_obj_tag(v_l_3015_) == 0)
{
lean_object* v_size_3046_; 
v_size_3046_ = lean_ctor_get(v_l_3015_, 0);
lean_inc(v_size_3046_);
v___y_3038_ = v_size_3046_;
goto v___jp_3037_;
}
else
{
lean_object* v___x_3047_; 
v___x_3047_ = lean_unsigned_to_nat(0u);
v___y_3038_ = v___x_3047_;
goto v___jp_3037_;
}
v___jp_3026_:
{
lean_object* v___x_3030_; lean_object* v___x_3032_; 
v___x_3030_ = lean_nat_add(v___y_3028_, v___y_3029_);
lean_dec(v___y_3029_);
lean_dec(v___y_3028_);
if (v_isShared_3023_ == 0)
{
lean_ctor_set(v___x_3022_, 4, v_r_2990_);
lean_ctor_set(v___x_3022_, 3, v_r_3016_);
lean_ctor_set(v___x_3022_, 2, v_v_2988_);
lean_ctor_set(v___x_3022_, 1, v_k_2987_);
lean_ctor_set(v___x_3022_, 0, v___x_3030_);
v___x_3032_ = v___x_3022_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v___x_3030_);
lean_ctor_set(v_reuseFailAlloc_3036_, 1, v_k_2987_);
lean_ctor_set(v_reuseFailAlloc_3036_, 2, v_v_2988_);
lean_ctor_set(v_reuseFailAlloc_3036_, 3, v_r_3016_);
lean_ctor_set(v_reuseFailAlloc_3036_, 4, v_r_2990_);
v___x_3032_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
lean_object* v___x_3034_; 
if (v_isShared_3011_ == 0)
{
lean_ctor_set(v___x_3010_, 4, v___x_3032_);
lean_ctor_set(v___x_3010_, 3, v___y_3027_);
lean_ctor_set(v___x_3010_, 2, v_v_3014_);
lean_ctor_set(v___x_3010_, 1, v_k_3013_);
lean_ctor_set(v___x_3010_, 0, v___x_3025_);
v___x_3034_ = v___x_3010_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3035_; 
v_reuseFailAlloc_3035_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3035_, 0, v___x_3025_);
lean_ctor_set(v_reuseFailAlloc_3035_, 1, v_k_3013_);
lean_ctor_set(v_reuseFailAlloc_3035_, 2, v_v_3014_);
lean_ctor_set(v_reuseFailAlloc_3035_, 3, v___y_3027_);
lean_ctor_set(v_reuseFailAlloc_3035_, 4, v___x_3032_);
v___x_3034_ = v_reuseFailAlloc_3035_;
goto v_reusejp_3033_;
}
v_reusejp_3033_:
{
return v___x_3034_;
}
}
}
v___jp_3037_:
{
lean_object* v___x_3039_; lean_object* v___x_3041_; 
v___x_3039_ = lean_nat_add(v___x_3024_, v___y_3038_);
lean_dec(v___y_3038_);
lean_dec(v___x_3024_);
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 4, v_l_3015_);
lean_ctor_set(v___x_2994_, 3, v_tree_2997_);
lean_ctor_set(v___x_2994_, 2, v_v_2999_);
lean_ctor_set(v___x_2994_, 1, v_k_2998_);
lean_ctor_set(v___x_2994_, 0, v___x_3039_);
v___x_3041_ = v___x_2994_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v___x_3039_);
lean_ctor_set(v_reuseFailAlloc_3045_, 1, v_k_2998_);
lean_ctor_set(v_reuseFailAlloc_3045_, 2, v_v_2999_);
lean_ctor_set(v_reuseFailAlloc_3045_, 3, v_tree_2997_);
lean_ctor_set(v_reuseFailAlloc_3045_, 4, v_l_3015_);
v___x_3041_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
lean_object* v___x_3042_; 
v___x_3042_ = lean_nat_add(v___x_2991_, v_size_3017_);
if (lean_obj_tag(v_r_3016_) == 0)
{
lean_object* v_size_3043_; 
v_size_3043_ = lean_ctor_get(v_r_3016_, 0);
lean_inc(v_size_3043_);
v___y_3027_ = v___x_3041_;
v___y_3028_ = v___x_3042_;
v___y_3029_ = v_size_3043_;
goto v___jp_3026_;
}
else
{
lean_object* v___x_3044_; 
v___x_3044_ = lean_unsigned_to_nat(0u);
v___y_3027_ = v___x_3041_;
v___y_3028_ = v___x_3042_;
v___y_3029_ = v___x_3044_;
goto v___jp_3026_;
}
}
}
}
}
else
{
lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3058_; 
v___x_3054_ = lean_nat_add(v___x_2991_, v_size_3000_);
v___x_3055_ = lean_nat_add(v___x_3054_, v_size_2986_);
lean_dec(v_size_2986_);
v___x_3056_ = lean_nat_add(v___x_3054_, v_size_3012_);
lean_dec(v___x_3054_);
if (v_isShared_3011_ == 0)
{
lean_ctor_set(v___x_3010_, 4, v_l_2989_);
lean_ctor_set(v___x_3010_, 3, v_tree_2997_);
lean_ctor_set(v___x_3010_, 2, v_v_2999_);
lean_ctor_set(v___x_3010_, 1, v_k_2998_);
lean_ctor_set(v___x_3010_, 0, v___x_3056_);
v___x_3058_ = v___x_3010_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v___x_3056_);
lean_ctor_set(v_reuseFailAlloc_3062_, 1, v_k_2998_);
lean_ctor_set(v_reuseFailAlloc_3062_, 2, v_v_2999_);
lean_ctor_set(v_reuseFailAlloc_3062_, 3, v_tree_2997_);
lean_ctor_set(v_reuseFailAlloc_3062_, 4, v_l_2989_);
v___x_3058_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
lean_object* v___x_3060_; 
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 4, v_r_2990_);
lean_ctor_set(v___x_2994_, 3, v___x_3058_);
lean_ctor_set(v___x_2994_, 2, v_v_2988_);
lean_ctor_set(v___x_2994_, 1, v_k_2987_);
lean_ctor_set(v___x_2994_, 0, v___x_3055_);
v___x_3060_ = v___x_2994_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v___x_3055_);
lean_ctor_set(v_reuseFailAlloc_3061_, 1, v_k_2987_);
lean_ctor_set(v_reuseFailAlloc_3061_, 2, v_v_2988_);
lean_ctor_set(v_reuseFailAlloc_3061_, 3, v___x_3058_);
lean_ctor_set(v_reuseFailAlloc_3061_, 4, v_r_2990_);
v___x_3060_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
return v___x_3060_;
}
}
}
}
}
}
else
{
lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3122_; 
lean_inc(v_r_2990_);
lean_inc(v_v_2988_);
lean_inc(v_k_2987_);
lean_inc(v_size_2986_);
v_isSharedCheck_3122_ = !lean_is_exclusive(v_r_2802_);
if (v_isSharedCheck_3122_ == 0)
{
lean_object* v_unused_3123_; lean_object* v_unused_3124_; lean_object* v_unused_3125_; lean_object* v_unused_3126_; lean_object* v_unused_3127_; 
v_unused_3123_ = lean_ctor_get(v_r_2802_, 4);
lean_dec(v_unused_3123_);
v_unused_3124_ = lean_ctor_get(v_r_2802_, 3);
lean_dec(v_unused_3124_);
v_unused_3125_ = lean_ctor_get(v_r_2802_, 2);
lean_dec(v_unused_3125_);
v_unused_3126_ = lean_ctor_get(v_r_2802_, 1);
lean_dec(v_unused_3126_);
v_unused_3127_ = lean_ctor_get(v_r_2802_, 0);
lean_dec(v_unused_3127_);
v___x_3070_ = v_r_2802_;
v_isShared_3071_ = v_isSharedCheck_3122_;
goto v_resetjp_3069_;
}
else
{
lean_dec(v_r_2802_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3122_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
if (lean_obj_tag(v_l_2989_) == 0)
{
if (lean_obj_tag(v_r_2990_) == 0)
{
lean_object* v_k_3072_; lean_object* v_v_3073_; lean_object* v_size_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3078_; 
lean_inc(v_tree_2997_);
v_k_3072_ = lean_ctor_get(v___x_2996_, 0);
lean_inc(v_k_3072_);
v_v_3073_ = lean_ctor_get(v___x_2996_, 1);
lean_inc(v_v_3073_);
lean_dec_ref(v___x_2996_);
v_size_3074_ = lean_ctor_get(v_l_2989_, 0);
v___x_3075_ = lean_nat_add(v___x_2991_, v_size_2986_);
lean_dec(v_size_2986_);
v___x_3076_ = lean_nat_add(v___x_2991_, v_size_3074_);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 4, v_l_2989_);
lean_ctor_set(v___x_3070_, 3, v_tree_2997_);
lean_ctor_set(v___x_3070_, 2, v_v_3073_);
lean_ctor_set(v___x_3070_, 1, v_k_3072_);
lean_ctor_set(v___x_3070_, 0, v___x_3076_);
v___x_3078_ = v___x_3070_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v___x_3076_);
lean_ctor_set(v_reuseFailAlloc_3082_, 1, v_k_3072_);
lean_ctor_set(v_reuseFailAlloc_3082_, 2, v_v_3073_);
lean_ctor_set(v_reuseFailAlloc_3082_, 3, v_tree_2997_);
lean_ctor_set(v_reuseFailAlloc_3082_, 4, v_l_2989_);
v___x_3078_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
lean_object* v___x_3080_; 
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 4, v_r_2990_);
lean_ctor_set(v___x_2994_, 3, v___x_3078_);
lean_ctor_set(v___x_2994_, 2, v_v_2988_);
lean_ctor_set(v___x_2994_, 1, v_k_2987_);
lean_ctor_set(v___x_2994_, 0, v___x_3075_);
v___x_3080_ = v___x_2994_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v___x_3075_);
lean_ctor_set(v_reuseFailAlloc_3081_, 1, v_k_2987_);
lean_ctor_set(v_reuseFailAlloc_3081_, 2, v_v_2988_);
lean_ctor_set(v_reuseFailAlloc_3081_, 3, v___x_3078_);
lean_ctor_set(v_reuseFailAlloc_3081_, 4, v_r_2990_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
else
{
lean_object* v_k_3083_; lean_object* v_v_3084_; lean_object* v_k_3085_; lean_object* v_v_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3100_; 
lean_dec(v_size_2986_);
v_k_3083_ = lean_ctor_get(v___x_2996_, 0);
lean_inc(v_k_3083_);
v_v_3084_ = lean_ctor_get(v___x_2996_, 1);
lean_inc(v_v_3084_);
lean_dec_ref(v___x_2996_);
v_k_3085_ = lean_ctor_get(v_l_2989_, 1);
v_v_3086_ = lean_ctor_get(v_l_2989_, 2);
v_isSharedCheck_3100_ = !lean_is_exclusive(v_l_2989_);
if (v_isSharedCheck_3100_ == 0)
{
lean_object* v_unused_3101_; lean_object* v_unused_3102_; lean_object* v_unused_3103_; 
v_unused_3101_ = lean_ctor_get(v_l_2989_, 4);
lean_dec(v_unused_3101_);
v_unused_3102_ = lean_ctor_get(v_l_2989_, 3);
lean_dec(v_unused_3102_);
v_unused_3103_ = lean_ctor_get(v_l_2989_, 0);
lean_dec(v_unused_3103_);
v___x_3088_ = v_l_2989_;
v_isShared_3089_ = v_isSharedCheck_3100_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_v_3086_);
lean_inc(v_k_3085_);
lean_dec(v_l_2989_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3100_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3090_; lean_object* v___x_3092_; 
v___x_3090_ = lean_unsigned_to_nat(3u);
if (v_isShared_3089_ == 0)
{
lean_ctor_set(v___x_3088_, 4, v_r_2990_);
lean_ctor_set(v___x_3088_, 3, v_r_2990_);
lean_ctor_set(v___x_3088_, 2, v_v_3084_);
lean_ctor_set(v___x_3088_, 1, v_k_3083_);
lean_ctor_set(v___x_3088_, 0, v___x_2991_);
v___x_3092_ = v___x_3088_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v___x_2991_);
lean_ctor_set(v_reuseFailAlloc_3099_, 1, v_k_3083_);
lean_ctor_set(v_reuseFailAlloc_3099_, 2, v_v_3084_);
lean_ctor_set(v_reuseFailAlloc_3099_, 3, v_r_2990_);
lean_ctor_set(v_reuseFailAlloc_3099_, 4, v_r_2990_);
v___x_3092_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
lean_object* v___x_3094_; 
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 3, v_r_2990_);
lean_ctor_set(v___x_3070_, 0, v___x_2991_);
v___x_3094_ = v___x_3070_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v___x_2991_);
lean_ctor_set(v_reuseFailAlloc_3098_, 1, v_k_2987_);
lean_ctor_set(v_reuseFailAlloc_3098_, 2, v_v_2988_);
lean_ctor_set(v_reuseFailAlloc_3098_, 3, v_r_2990_);
lean_ctor_set(v_reuseFailAlloc_3098_, 4, v_r_2990_);
v___x_3094_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
lean_object* v___x_3096_; 
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 4, v___x_3094_);
lean_ctor_set(v___x_2994_, 3, v___x_3092_);
lean_ctor_set(v___x_2994_, 2, v_v_3086_);
lean_ctor_set(v___x_2994_, 1, v_k_3085_);
lean_ctor_set(v___x_2994_, 0, v___x_3090_);
v___x_3096_ = v___x_2994_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v___x_3090_);
lean_ctor_set(v_reuseFailAlloc_3097_, 1, v_k_3085_);
lean_ctor_set(v_reuseFailAlloc_3097_, 2, v_v_3086_);
lean_ctor_set(v_reuseFailAlloc_3097_, 3, v___x_3092_);
lean_ctor_set(v_reuseFailAlloc_3097_, 4, v___x_3094_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
return v___x_3096_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_2990_) == 0)
{
lean_object* v_k_3104_; lean_object* v_v_3105_; lean_object* v___x_3106_; lean_object* v___x_3108_; 
lean_dec(v_size_2986_);
v_k_3104_ = lean_ctor_get(v___x_2996_, 0);
lean_inc(v_k_3104_);
v_v_3105_ = lean_ctor_get(v___x_2996_, 1);
lean_inc(v_v_3105_);
lean_dec_ref(v___x_2996_);
v___x_3106_ = lean_unsigned_to_nat(3u);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 4, v_l_2989_);
lean_ctor_set(v___x_3070_, 2, v_v_3105_);
lean_ctor_set(v___x_3070_, 1, v_k_3104_);
lean_ctor_set(v___x_3070_, 0, v___x_2991_);
v___x_3108_ = v___x_3070_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v___x_2991_);
lean_ctor_set(v_reuseFailAlloc_3112_, 1, v_k_3104_);
lean_ctor_set(v_reuseFailAlloc_3112_, 2, v_v_3105_);
lean_ctor_set(v_reuseFailAlloc_3112_, 3, v_l_2989_);
lean_ctor_set(v_reuseFailAlloc_3112_, 4, v_l_2989_);
v___x_3108_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
lean_object* v___x_3110_; 
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 4, v_r_2990_);
lean_ctor_set(v___x_2994_, 3, v___x_3108_);
lean_ctor_set(v___x_2994_, 2, v_v_2988_);
lean_ctor_set(v___x_2994_, 1, v_k_2987_);
lean_ctor_set(v___x_2994_, 0, v___x_3106_);
v___x_3110_ = v___x_2994_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v___x_3106_);
lean_ctor_set(v_reuseFailAlloc_3111_, 1, v_k_2987_);
lean_ctor_set(v_reuseFailAlloc_3111_, 2, v_v_2988_);
lean_ctor_set(v_reuseFailAlloc_3111_, 3, v___x_3108_);
lean_ctor_set(v_reuseFailAlloc_3111_, 4, v_r_2990_);
v___x_3110_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
return v___x_3110_;
}
}
}
else
{
lean_object* v_k_3113_; lean_object* v_v_3114_; lean_object* v___x_3116_; 
v_k_3113_ = lean_ctor_get(v___x_2996_, 0);
lean_inc(v_k_3113_);
v_v_3114_ = lean_ctor_get(v___x_2996_, 1);
lean_inc(v_v_3114_);
lean_dec_ref(v___x_2996_);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 3, v_r_2990_);
v___x_3116_ = v___x_3070_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_size_2986_);
lean_ctor_set(v_reuseFailAlloc_3121_, 1, v_k_2987_);
lean_ctor_set(v_reuseFailAlloc_3121_, 2, v_v_2988_);
lean_ctor_set(v_reuseFailAlloc_3121_, 3, v_r_2990_);
lean_ctor_set(v_reuseFailAlloc_3121_, 4, v_r_2990_);
v___x_3116_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
lean_object* v___x_3117_; lean_object* v___x_3119_; 
v___x_3117_ = lean_unsigned_to_nat(2u);
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 4, v___x_3116_);
lean_ctor_set(v___x_2994_, 3, v_r_2990_);
lean_ctor_set(v___x_2994_, 2, v_v_3114_);
lean_ctor_set(v___x_2994_, 1, v_k_3113_);
lean_ctor_set(v___x_2994_, 0, v___x_3117_);
v___x_3119_ = v___x_2994_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v___x_3117_);
lean_ctor_set(v_reuseFailAlloc_3120_, 1, v_k_3113_);
lean_ctor_set(v_reuseFailAlloc_3120_, 2, v_v_3114_);
lean_ctor_set(v_reuseFailAlloc_3120_, 3, v_r_2990_);
lean_ctor_set(v_reuseFailAlloc_3120_, 4, v___x_3116_);
v___x_3119_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
return v___x_3119_;
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
lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3286_; 
lean_inc(v_r_2990_);
lean_inc(v_v_2988_);
lean_inc(v_k_2987_);
v_isSharedCheck_3286_ = !lean_is_exclusive(v_r_2802_);
if (v_isSharedCheck_3286_ == 0)
{
lean_object* v_unused_3287_; lean_object* v_unused_3288_; lean_object* v_unused_3289_; lean_object* v_unused_3290_; lean_object* v_unused_3291_; 
v_unused_3287_ = lean_ctor_get(v_r_2802_, 4);
lean_dec(v_unused_3287_);
v_unused_3288_ = lean_ctor_get(v_r_2802_, 3);
lean_dec(v_unused_3288_);
v_unused_3289_ = lean_ctor_get(v_r_2802_, 2);
lean_dec(v_unused_3289_);
v_unused_3290_ = lean_ctor_get(v_r_2802_, 1);
lean_dec(v_unused_3290_);
v_unused_3291_ = lean_ctor_get(v_r_2802_, 0);
lean_dec(v_unused_3291_);
v___x_3135_ = v_r_2802_;
v_isShared_3136_ = v_isSharedCheck_3286_;
goto v_resetjp_3134_;
}
else
{
lean_dec(v_r_2802_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3286_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v___x_3137_; lean_object* v_tree_3138_; 
v___x_3137_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_2987_, v_v_2988_, v_l_2989_, v_r_2990_);
v_tree_3138_ = lean_ctor_get(v___x_3137_, 2);
lean_inc(v_tree_3138_);
if (lean_obj_tag(v_tree_3138_) == 0)
{
lean_object* v_k_3139_; lean_object* v_v_3140_; lean_object* v_size_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; uint8_t v___x_3144_; 
v_k_3139_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_k_3139_);
v_v_3140_ = lean_ctor_get(v___x_3137_, 1);
lean_inc(v_v_3140_);
lean_dec_ref(v___x_3137_);
v_size_3141_ = lean_ctor_get(v_tree_3138_, 0);
v___x_3142_ = lean_unsigned_to_nat(3u);
v___x_3143_ = lean_nat_mul(v___x_3142_, v_size_3141_);
v___x_3144_ = lean_nat_dec_lt(v___x_3143_, v_size_2981_);
lean_dec(v___x_3143_);
if (v___x_3144_ == 0)
{
lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3148_; 
lean_dec(v_r_2985_);
v___x_3145_ = lean_nat_add(v___x_2991_, v_size_2981_);
v___x_3146_ = lean_nat_add(v___x_3145_, v_size_3141_);
lean_dec(v___x_3145_);
if (v_isShared_3136_ == 0)
{
lean_ctor_set(v___x_3135_, 4, v_tree_3138_);
lean_ctor_set(v___x_3135_, 3, v_l_2801_);
lean_ctor_set(v___x_3135_, 2, v_v_3140_);
lean_ctor_set(v___x_3135_, 1, v_k_3139_);
lean_ctor_set(v___x_3135_, 0, v___x_3146_);
v___x_3148_ = v___x_3135_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v___x_3146_);
lean_ctor_set(v_reuseFailAlloc_3149_, 1, v_k_3139_);
lean_ctor_set(v_reuseFailAlloc_3149_, 2, v_v_3140_);
lean_ctor_set(v_reuseFailAlloc_3149_, 3, v_l_2801_);
lean_ctor_set(v_reuseFailAlloc_3149_, 4, v_tree_3138_);
v___x_3148_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
return v___x_3148_;
}
}
else
{
lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3215_; 
lean_inc(v_l_2984_);
lean_inc(v_v_2983_);
lean_inc(v_k_2982_);
lean_inc(v_size_2981_);
v_isSharedCheck_3215_ = !lean_is_exclusive(v_l_2801_);
if (v_isSharedCheck_3215_ == 0)
{
lean_object* v_unused_3216_; lean_object* v_unused_3217_; lean_object* v_unused_3218_; lean_object* v_unused_3219_; lean_object* v_unused_3220_; 
v_unused_3216_ = lean_ctor_get(v_l_2801_, 4);
lean_dec(v_unused_3216_);
v_unused_3217_ = lean_ctor_get(v_l_2801_, 3);
lean_dec(v_unused_3217_);
v_unused_3218_ = lean_ctor_get(v_l_2801_, 2);
lean_dec(v_unused_3218_);
v_unused_3219_ = lean_ctor_get(v_l_2801_, 1);
lean_dec(v_unused_3219_);
v_unused_3220_ = lean_ctor_get(v_l_2801_, 0);
lean_dec(v_unused_3220_);
v___x_3151_ = v_l_2801_;
v_isShared_3152_ = v_isSharedCheck_3215_;
goto v_resetjp_3150_;
}
else
{
lean_dec(v_l_2801_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3215_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v_size_3153_; lean_object* v_size_3154_; lean_object* v_k_3155_; lean_object* v_v_3156_; lean_object* v_l_3157_; lean_object* v_r_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; uint8_t v___x_3161_; 
v_size_3153_ = lean_ctor_get(v_l_2984_, 0);
v_size_3154_ = lean_ctor_get(v_r_2985_, 0);
v_k_3155_ = lean_ctor_get(v_r_2985_, 1);
v_v_3156_ = lean_ctor_get(v_r_2985_, 2);
v_l_3157_ = lean_ctor_get(v_r_2985_, 3);
v_r_3158_ = lean_ctor_get(v_r_2985_, 4);
v___x_3159_ = lean_unsigned_to_nat(2u);
v___x_3160_ = lean_nat_mul(v___x_3159_, v_size_3153_);
v___x_3161_ = lean_nat_dec_lt(v_size_3154_, v___x_3160_);
lean_dec(v___x_3160_);
if (v___x_3161_ == 0)
{
lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3199_; 
lean_inc(v_r_3158_);
lean_inc(v_l_3157_);
lean_inc(v_v_3156_);
lean_inc(v_k_3155_);
lean_del_object(v___x_3151_);
v_isSharedCheck_3199_ = !lean_is_exclusive(v_r_2985_);
if (v_isSharedCheck_3199_ == 0)
{
lean_object* v_unused_3200_; lean_object* v_unused_3201_; lean_object* v_unused_3202_; lean_object* v_unused_3203_; lean_object* v_unused_3204_; 
v_unused_3200_ = lean_ctor_get(v_r_2985_, 4);
lean_dec(v_unused_3200_);
v_unused_3201_ = lean_ctor_get(v_r_2985_, 3);
lean_dec(v_unused_3201_);
v_unused_3202_ = lean_ctor_get(v_r_2985_, 2);
lean_dec(v_unused_3202_);
v_unused_3203_ = lean_ctor_get(v_r_2985_, 1);
lean_dec(v_unused_3203_);
v_unused_3204_ = lean_ctor_get(v_r_2985_, 0);
lean_dec(v_unused_3204_);
v___x_3163_ = v_r_2985_;
v_isShared_3164_ = v_isSharedCheck_3199_;
goto v_resetjp_3162_;
}
else
{
lean_dec(v_r_2985_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3199_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___y_3168_; lean_object* v___y_3169_; lean_object* v___y_3170_; lean_object* v___x_3187_; lean_object* v___y_3189_; 
v___x_3165_ = lean_nat_add(v___x_2991_, v_size_2981_);
lean_dec(v_size_2981_);
v___x_3166_ = lean_nat_add(v___x_3165_, v_size_3141_);
lean_dec(v___x_3165_);
v___x_3187_ = lean_nat_add(v___x_2991_, v_size_3153_);
if (lean_obj_tag(v_l_3157_) == 0)
{
lean_object* v_size_3197_; 
v_size_3197_ = lean_ctor_get(v_l_3157_, 0);
lean_inc(v_size_3197_);
v___y_3189_ = v_size_3197_;
goto v___jp_3188_;
}
else
{
lean_object* v___x_3198_; 
v___x_3198_ = lean_unsigned_to_nat(0u);
v___y_3189_ = v___x_3198_;
goto v___jp_3188_;
}
v___jp_3167_:
{
lean_object* v___x_3171_; lean_object* v___x_3173_; 
v___x_3171_ = lean_nat_add(v___y_3168_, v___y_3170_);
lean_dec(v___y_3170_);
lean_dec(v___y_3168_);
lean_inc_ref(v_tree_3138_);
if (v_isShared_3164_ == 0)
{
lean_ctor_set(v___x_3163_, 4, v_tree_3138_);
lean_ctor_set(v___x_3163_, 3, v_r_3158_);
lean_ctor_set(v___x_3163_, 2, v_v_3140_);
lean_ctor_set(v___x_3163_, 1, v_k_3139_);
lean_ctor_set(v___x_3163_, 0, v___x_3171_);
v___x_3173_ = v___x_3163_;
goto v_reusejp_3172_;
}
else
{
lean_object* v_reuseFailAlloc_3186_; 
v_reuseFailAlloc_3186_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3186_, 0, v___x_3171_);
lean_ctor_set(v_reuseFailAlloc_3186_, 1, v_k_3139_);
lean_ctor_set(v_reuseFailAlloc_3186_, 2, v_v_3140_);
lean_ctor_set(v_reuseFailAlloc_3186_, 3, v_r_3158_);
lean_ctor_set(v_reuseFailAlloc_3186_, 4, v_tree_3138_);
v___x_3173_ = v_reuseFailAlloc_3186_;
goto v_reusejp_3172_;
}
v_reusejp_3172_:
{
lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3180_; 
v_isSharedCheck_3180_ = !lean_is_exclusive(v_tree_3138_);
if (v_isSharedCheck_3180_ == 0)
{
lean_object* v_unused_3181_; lean_object* v_unused_3182_; lean_object* v_unused_3183_; lean_object* v_unused_3184_; lean_object* v_unused_3185_; 
v_unused_3181_ = lean_ctor_get(v_tree_3138_, 4);
lean_dec(v_unused_3181_);
v_unused_3182_ = lean_ctor_get(v_tree_3138_, 3);
lean_dec(v_unused_3182_);
v_unused_3183_ = lean_ctor_get(v_tree_3138_, 2);
lean_dec(v_unused_3183_);
v_unused_3184_ = lean_ctor_get(v_tree_3138_, 1);
lean_dec(v_unused_3184_);
v_unused_3185_ = lean_ctor_get(v_tree_3138_, 0);
lean_dec(v_unused_3185_);
v___x_3175_ = v_tree_3138_;
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
else
{
lean_dec(v_tree_3138_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v___x_3178_; 
if (v_isShared_3176_ == 0)
{
lean_ctor_set(v___x_3175_, 4, v___x_3173_);
lean_ctor_set(v___x_3175_, 3, v___y_3169_);
lean_ctor_set(v___x_3175_, 2, v_v_3156_);
lean_ctor_set(v___x_3175_, 1, v_k_3155_);
lean_ctor_set(v___x_3175_, 0, v___x_3166_);
v___x_3178_ = v___x_3175_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v___x_3166_);
lean_ctor_set(v_reuseFailAlloc_3179_, 1, v_k_3155_);
lean_ctor_set(v_reuseFailAlloc_3179_, 2, v_v_3156_);
lean_ctor_set(v_reuseFailAlloc_3179_, 3, v___y_3169_);
lean_ctor_set(v_reuseFailAlloc_3179_, 4, v___x_3173_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
return v___x_3178_;
}
}
}
}
v___jp_3188_:
{
lean_object* v___x_3190_; lean_object* v___x_3192_; 
v___x_3190_ = lean_nat_add(v___x_3187_, v___y_3189_);
lean_dec(v___y_3189_);
lean_dec(v___x_3187_);
if (v_isShared_3136_ == 0)
{
lean_ctor_set(v___x_3135_, 4, v_l_3157_);
lean_ctor_set(v___x_3135_, 3, v_l_2984_);
lean_ctor_set(v___x_3135_, 2, v_v_2983_);
lean_ctor_set(v___x_3135_, 1, v_k_2982_);
lean_ctor_set(v___x_3135_, 0, v___x_3190_);
v___x_3192_ = v___x_3135_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3196_; 
v_reuseFailAlloc_3196_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3196_, 0, v___x_3190_);
lean_ctor_set(v_reuseFailAlloc_3196_, 1, v_k_2982_);
lean_ctor_set(v_reuseFailAlloc_3196_, 2, v_v_2983_);
lean_ctor_set(v_reuseFailAlloc_3196_, 3, v_l_2984_);
lean_ctor_set(v_reuseFailAlloc_3196_, 4, v_l_3157_);
v___x_3192_ = v_reuseFailAlloc_3196_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
lean_object* v___x_3193_; 
v___x_3193_ = lean_nat_add(v___x_2991_, v_size_3141_);
if (lean_obj_tag(v_r_3158_) == 0)
{
lean_object* v_size_3194_; 
v_size_3194_ = lean_ctor_get(v_r_3158_, 0);
lean_inc(v_size_3194_);
v___y_3168_ = v___x_3193_;
v___y_3169_ = v___x_3192_;
v___y_3170_ = v_size_3194_;
goto v___jp_3167_;
}
else
{
lean_object* v___x_3195_; 
v___x_3195_ = lean_unsigned_to_nat(0u);
v___y_3168_ = v___x_3193_;
v___y_3169_ = v___x_3192_;
v___y_3170_ = v___x_3195_;
goto v___jp_3167_;
}
}
}
}
}
else
{
lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3210_; 
v___x_3205_ = lean_nat_add(v___x_2991_, v_size_2981_);
lean_dec(v_size_2981_);
v___x_3206_ = lean_nat_add(v___x_3205_, v_size_3141_);
lean_dec(v___x_3205_);
v___x_3207_ = lean_nat_add(v___x_2991_, v_size_3141_);
v___x_3208_ = lean_nat_add(v___x_3207_, v_size_3154_);
lean_dec(v___x_3207_);
if (v_isShared_3136_ == 0)
{
lean_ctor_set(v___x_3135_, 4, v_tree_3138_);
lean_ctor_set(v___x_3135_, 3, v_r_2985_);
lean_ctor_set(v___x_3135_, 2, v_v_3140_);
lean_ctor_set(v___x_3135_, 1, v_k_3139_);
lean_ctor_set(v___x_3135_, 0, v___x_3208_);
v___x_3210_ = v___x_3135_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v___x_3208_);
lean_ctor_set(v_reuseFailAlloc_3214_, 1, v_k_3139_);
lean_ctor_set(v_reuseFailAlloc_3214_, 2, v_v_3140_);
lean_ctor_set(v_reuseFailAlloc_3214_, 3, v_r_2985_);
lean_ctor_set(v_reuseFailAlloc_3214_, 4, v_tree_3138_);
v___x_3210_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
lean_object* v___x_3212_; 
if (v_isShared_3152_ == 0)
{
lean_ctor_set(v___x_3151_, 4, v___x_3210_);
lean_ctor_set(v___x_3151_, 0, v___x_3206_);
v___x_3212_ = v___x_3151_;
goto v_reusejp_3211_;
}
else
{
lean_object* v_reuseFailAlloc_3213_; 
v_reuseFailAlloc_3213_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3213_, 0, v___x_3206_);
lean_ctor_set(v_reuseFailAlloc_3213_, 1, v_k_2982_);
lean_ctor_set(v_reuseFailAlloc_3213_, 2, v_v_2983_);
lean_ctor_set(v_reuseFailAlloc_3213_, 3, v_l_2984_);
lean_ctor_set(v_reuseFailAlloc_3213_, 4, v___x_3210_);
v___x_3212_ = v_reuseFailAlloc_3213_;
goto v_reusejp_3211_;
}
v_reusejp_3211_:
{
return v___x_3212_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_2984_) == 0)
{
lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3244_; 
lean_inc_ref(v_l_2984_);
lean_inc(v_v_2983_);
lean_inc(v_k_2982_);
lean_inc(v_size_2981_);
v_isSharedCheck_3244_ = !lean_is_exclusive(v_l_2801_);
if (v_isSharedCheck_3244_ == 0)
{
lean_object* v_unused_3245_; lean_object* v_unused_3246_; lean_object* v_unused_3247_; lean_object* v_unused_3248_; lean_object* v_unused_3249_; 
v_unused_3245_ = lean_ctor_get(v_l_2801_, 4);
lean_dec(v_unused_3245_);
v_unused_3246_ = lean_ctor_get(v_l_2801_, 3);
lean_dec(v_unused_3246_);
v_unused_3247_ = lean_ctor_get(v_l_2801_, 2);
lean_dec(v_unused_3247_);
v_unused_3248_ = lean_ctor_get(v_l_2801_, 1);
lean_dec(v_unused_3248_);
v_unused_3249_ = lean_ctor_get(v_l_2801_, 0);
lean_dec(v_unused_3249_);
v___x_3222_ = v_l_2801_;
v_isShared_3223_ = v_isSharedCheck_3244_;
goto v_resetjp_3221_;
}
else
{
lean_dec(v_l_2801_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3244_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
if (lean_obj_tag(v_r_2985_) == 0)
{
lean_object* v_k_3224_; lean_object* v_v_3225_; lean_object* v_size_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3230_; 
v_k_3224_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_k_3224_);
v_v_3225_ = lean_ctor_get(v___x_3137_, 1);
lean_inc(v_v_3225_);
lean_dec_ref(v___x_3137_);
v_size_3226_ = lean_ctor_get(v_r_2985_, 0);
v___x_3227_ = lean_nat_add(v___x_2991_, v_size_2981_);
lean_dec(v_size_2981_);
v___x_3228_ = lean_nat_add(v___x_2991_, v_size_3226_);
if (v_isShared_3136_ == 0)
{
lean_ctor_set(v___x_3135_, 4, v_tree_3138_);
lean_ctor_set(v___x_3135_, 3, v_r_2985_);
lean_ctor_set(v___x_3135_, 2, v_v_3225_);
lean_ctor_set(v___x_3135_, 1, v_k_3224_);
lean_ctor_set(v___x_3135_, 0, v___x_3228_);
v___x_3230_ = v___x_3135_;
goto v_reusejp_3229_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v___x_3228_);
lean_ctor_set(v_reuseFailAlloc_3234_, 1, v_k_3224_);
lean_ctor_set(v_reuseFailAlloc_3234_, 2, v_v_3225_);
lean_ctor_set(v_reuseFailAlloc_3234_, 3, v_r_2985_);
lean_ctor_set(v_reuseFailAlloc_3234_, 4, v_tree_3138_);
v___x_3230_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3229_;
}
v_reusejp_3229_:
{
lean_object* v___x_3232_; 
if (v_isShared_3223_ == 0)
{
lean_ctor_set(v___x_3222_, 4, v___x_3230_);
lean_ctor_set(v___x_3222_, 0, v___x_3227_);
v___x_3232_ = v___x_3222_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v___x_3227_);
lean_ctor_set(v_reuseFailAlloc_3233_, 1, v_k_2982_);
lean_ctor_set(v_reuseFailAlloc_3233_, 2, v_v_2983_);
lean_ctor_set(v_reuseFailAlloc_3233_, 3, v_l_2984_);
lean_ctor_set(v_reuseFailAlloc_3233_, 4, v___x_3230_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
else
{
lean_object* v_k_3235_; lean_object* v_v_3236_; lean_object* v___x_3237_; lean_object* v___x_3239_; 
lean_dec(v_size_2981_);
v_k_3235_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_k_3235_);
v_v_3236_ = lean_ctor_get(v___x_3137_, 1);
lean_inc(v_v_3236_);
lean_dec_ref(v___x_3137_);
v___x_3237_ = lean_unsigned_to_nat(3u);
if (v_isShared_3136_ == 0)
{
lean_ctor_set(v___x_3135_, 4, v_r_2985_);
lean_ctor_set(v___x_3135_, 3, v_r_2985_);
lean_ctor_set(v___x_3135_, 2, v_v_3236_);
lean_ctor_set(v___x_3135_, 1, v_k_3235_);
lean_ctor_set(v___x_3135_, 0, v___x_2991_);
v___x_3239_ = v___x_3135_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v___x_2991_);
lean_ctor_set(v_reuseFailAlloc_3243_, 1, v_k_3235_);
lean_ctor_set(v_reuseFailAlloc_3243_, 2, v_v_3236_);
lean_ctor_set(v_reuseFailAlloc_3243_, 3, v_r_2985_);
lean_ctor_set(v_reuseFailAlloc_3243_, 4, v_r_2985_);
v___x_3239_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
lean_object* v___x_3241_; 
if (v_isShared_3223_ == 0)
{
lean_ctor_set(v___x_3222_, 4, v___x_3239_);
lean_ctor_set(v___x_3222_, 0, v___x_3237_);
v___x_3241_ = v___x_3222_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v___x_3237_);
lean_ctor_set(v_reuseFailAlloc_3242_, 1, v_k_2982_);
lean_ctor_set(v_reuseFailAlloc_3242_, 2, v_v_2983_);
lean_ctor_set(v_reuseFailAlloc_3242_, 3, v_l_2984_);
lean_ctor_set(v_reuseFailAlloc_3242_, 4, v___x_3239_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_2985_) == 0)
{
lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3274_; 
lean_inc(v_l_2984_);
lean_inc(v_v_2983_);
lean_inc(v_k_2982_);
v_isSharedCheck_3274_ = !lean_is_exclusive(v_l_2801_);
if (v_isSharedCheck_3274_ == 0)
{
lean_object* v_unused_3275_; lean_object* v_unused_3276_; lean_object* v_unused_3277_; lean_object* v_unused_3278_; lean_object* v_unused_3279_; 
v_unused_3275_ = lean_ctor_get(v_l_2801_, 4);
lean_dec(v_unused_3275_);
v_unused_3276_ = lean_ctor_get(v_l_2801_, 3);
lean_dec(v_unused_3276_);
v_unused_3277_ = lean_ctor_get(v_l_2801_, 2);
lean_dec(v_unused_3277_);
v_unused_3278_ = lean_ctor_get(v_l_2801_, 1);
lean_dec(v_unused_3278_);
v_unused_3279_ = lean_ctor_get(v_l_2801_, 0);
lean_dec(v_unused_3279_);
v___x_3251_ = v_l_2801_;
v_isShared_3252_ = v_isSharedCheck_3274_;
goto v_resetjp_3250_;
}
else
{
lean_dec(v_l_2801_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3274_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v_k_3253_; lean_object* v_v_3254_; lean_object* v_k_3255_; lean_object* v_v_3256_; lean_object* v___x_3258_; uint8_t v_isShared_3259_; uint8_t v_isSharedCheck_3270_; 
v_k_3253_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_k_3253_);
v_v_3254_ = lean_ctor_get(v___x_3137_, 1);
lean_inc(v_v_3254_);
lean_dec_ref(v___x_3137_);
v_k_3255_ = lean_ctor_get(v_r_2985_, 1);
v_v_3256_ = lean_ctor_get(v_r_2985_, 2);
v_isSharedCheck_3270_ = !lean_is_exclusive(v_r_2985_);
if (v_isSharedCheck_3270_ == 0)
{
lean_object* v_unused_3271_; lean_object* v_unused_3272_; lean_object* v_unused_3273_; 
v_unused_3271_ = lean_ctor_get(v_r_2985_, 4);
lean_dec(v_unused_3271_);
v_unused_3272_ = lean_ctor_get(v_r_2985_, 3);
lean_dec(v_unused_3272_);
v_unused_3273_ = lean_ctor_get(v_r_2985_, 0);
lean_dec(v_unused_3273_);
v___x_3258_ = v_r_2985_;
v_isShared_3259_ = v_isSharedCheck_3270_;
goto v_resetjp_3257_;
}
else
{
lean_inc(v_v_3256_);
lean_inc(v_k_3255_);
lean_dec(v_r_2985_);
v___x_3258_ = lean_box(0);
v_isShared_3259_ = v_isSharedCheck_3270_;
goto v_resetjp_3257_;
}
v_resetjp_3257_:
{
lean_object* v___x_3260_; lean_object* v___x_3262_; 
v___x_3260_ = lean_unsigned_to_nat(3u);
if (v_isShared_3259_ == 0)
{
lean_ctor_set(v___x_3258_, 4, v_l_2984_);
lean_ctor_set(v___x_3258_, 3, v_l_2984_);
lean_ctor_set(v___x_3258_, 2, v_v_2983_);
lean_ctor_set(v___x_3258_, 1, v_k_2982_);
lean_ctor_set(v___x_3258_, 0, v___x_2991_);
v___x_3262_ = v___x_3258_;
goto v_reusejp_3261_;
}
else
{
lean_object* v_reuseFailAlloc_3269_; 
v_reuseFailAlloc_3269_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3269_, 0, v___x_2991_);
lean_ctor_set(v_reuseFailAlloc_3269_, 1, v_k_2982_);
lean_ctor_set(v_reuseFailAlloc_3269_, 2, v_v_2983_);
lean_ctor_set(v_reuseFailAlloc_3269_, 3, v_l_2984_);
lean_ctor_set(v_reuseFailAlloc_3269_, 4, v_l_2984_);
v___x_3262_ = v_reuseFailAlloc_3269_;
goto v_reusejp_3261_;
}
v_reusejp_3261_:
{
lean_object* v___x_3264_; 
if (v_isShared_3136_ == 0)
{
lean_ctor_set(v___x_3135_, 4, v_l_2984_);
lean_ctor_set(v___x_3135_, 3, v_l_2984_);
lean_ctor_set(v___x_3135_, 2, v_v_3254_);
lean_ctor_set(v___x_3135_, 1, v_k_3253_);
lean_ctor_set(v___x_3135_, 0, v___x_2991_);
v___x_3264_ = v___x_3135_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3268_; 
v_reuseFailAlloc_3268_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3268_, 0, v___x_2991_);
lean_ctor_set(v_reuseFailAlloc_3268_, 1, v_k_3253_);
lean_ctor_set(v_reuseFailAlloc_3268_, 2, v_v_3254_);
lean_ctor_set(v_reuseFailAlloc_3268_, 3, v_l_2984_);
lean_ctor_set(v_reuseFailAlloc_3268_, 4, v_l_2984_);
v___x_3264_ = v_reuseFailAlloc_3268_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
lean_object* v___x_3266_; 
if (v_isShared_3252_ == 0)
{
lean_ctor_set(v___x_3251_, 4, v___x_3264_);
lean_ctor_set(v___x_3251_, 3, v___x_3262_);
lean_ctor_set(v___x_3251_, 2, v_v_3256_);
lean_ctor_set(v___x_3251_, 1, v_k_3255_);
lean_ctor_set(v___x_3251_, 0, v___x_3260_);
v___x_3266_ = v___x_3251_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v___x_3260_);
lean_ctor_set(v_reuseFailAlloc_3267_, 1, v_k_3255_);
lean_ctor_set(v_reuseFailAlloc_3267_, 2, v_v_3256_);
lean_ctor_set(v_reuseFailAlloc_3267_, 3, v___x_3262_);
lean_ctor_set(v_reuseFailAlloc_3267_, 4, v___x_3264_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
}
}
else
{
lean_object* v_k_3280_; lean_object* v_v_3281_; lean_object* v___x_3282_; lean_object* v___x_3284_; 
v_k_3280_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_k_3280_);
v_v_3281_ = lean_ctor_get(v___x_3137_, 1);
lean_inc(v_v_3281_);
lean_dec_ref(v___x_3137_);
v___x_3282_ = lean_unsigned_to_nat(2u);
if (v_isShared_3136_ == 0)
{
lean_ctor_set(v___x_3135_, 4, v_r_2985_);
lean_ctor_set(v___x_3135_, 3, v_l_2801_);
lean_ctor_set(v___x_3135_, 2, v_v_3281_);
lean_ctor_set(v___x_3135_, 1, v_k_3280_);
lean_ctor_set(v___x_3135_, 0, v___x_3282_);
v___x_3284_ = v___x_3135_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v___x_3282_);
lean_ctor_set(v_reuseFailAlloc_3285_, 1, v_k_3280_);
lean_ctor_set(v_reuseFailAlloc_3285_, 2, v_v_3281_);
lean_ctor_set(v_reuseFailAlloc_3285_, 3, v_l_2801_);
lean_ctor_set(v_reuseFailAlloc_3285_, 4, v_r_2985_);
v___x_3284_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
return v___x_3284_;
}
}
}
}
}
}
}
else
{
return v_l_2801_;
}
}
else
{
return v_r_2802_;
}
}
default: 
{
lean_object* v_impl_3292_; lean_object* v___x_3293_; 
v_impl_3292_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_2797_, v_r_2802_);
v___x_3293_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_3292_) == 0)
{
if (lean_obj_tag(v_l_2801_) == 0)
{
lean_object* v_size_3294_; lean_object* v_size_3295_; lean_object* v_k_3296_; lean_object* v_v_3297_; lean_object* v_l_3298_; lean_object* v_r_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; uint8_t v___x_3302_; 
v_size_3294_ = lean_ctor_get(v_impl_3292_, 0);
v_size_3295_ = lean_ctor_get(v_l_2801_, 0);
v_k_3296_ = lean_ctor_get(v_l_2801_, 1);
v_v_3297_ = lean_ctor_get(v_l_2801_, 2);
v_l_3298_ = lean_ctor_get(v_l_2801_, 3);
v_r_3299_ = lean_ctor_get(v_l_2801_, 4);
lean_inc(v_r_3299_);
v___x_3300_ = lean_unsigned_to_nat(3u);
v___x_3301_ = lean_nat_mul(v___x_3300_, v_size_3294_);
v___x_3302_ = lean_nat_dec_lt(v___x_3301_, v_size_3295_);
lean_dec(v___x_3301_);
if (v___x_3302_ == 0)
{
lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3306_; 
lean_dec(v_r_3299_);
v___x_3303_ = lean_nat_add(v___x_3293_, v_size_3295_);
v___x_3304_ = lean_nat_add(v___x_3303_, v_size_3294_);
lean_dec(v___x_3303_);
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 4, v_impl_3292_);
lean_ctor_set(v___x_2804_, 0, v___x_3304_);
v___x_3306_ = v___x_2804_;
goto v_reusejp_3305_;
}
else
{
lean_object* v_reuseFailAlloc_3307_; 
v_reuseFailAlloc_3307_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3307_, 0, v___x_3304_);
lean_ctor_set(v_reuseFailAlloc_3307_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_3307_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_3307_, 3, v_l_2801_);
lean_ctor_set(v_reuseFailAlloc_3307_, 4, v_impl_3292_);
v___x_3306_ = v_reuseFailAlloc_3307_;
goto v_reusejp_3305_;
}
v_reusejp_3305_:
{
return v___x_3306_;
}
}
else
{
lean_object* v___x_3309_; uint8_t v_isShared_3310_; uint8_t v_isSharedCheck_3373_; 
lean_inc(v_l_3298_);
lean_inc(v_v_3297_);
lean_inc(v_k_3296_);
lean_inc(v_size_3295_);
v_isSharedCheck_3373_ = !lean_is_exclusive(v_l_2801_);
if (v_isSharedCheck_3373_ == 0)
{
lean_object* v_unused_3374_; lean_object* v_unused_3375_; lean_object* v_unused_3376_; lean_object* v_unused_3377_; lean_object* v_unused_3378_; 
v_unused_3374_ = lean_ctor_get(v_l_2801_, 4);
lean_dec(v_unused_3374_);
v_unused_3375_ = lean_ctor_get(v_l_2801_, 3);
lean_dec(v_unused_3375_);
v_unused_3376_ = lean_ctor_get(v_l_2801_, 2);
lean_dec(v_unused_3376_);
v_unused_3377_ = lean_ctor_get(v_l_2801_, 1);
lean_dec(v_unused_3377_);
v_unused_3378_ = lean_ctor_get(v_l_2801_, 0);
lean_dec(v_unused_3378_);
v___x_3309_ = v_l_2801_;
v_isShared_3310_ = v_isSharedCheck_3373_;
goto v_resetjp_3308_;
}
else
{
lean_dec(v_l_2801_);
v___x_3309_ = lean_box(0);
v_isShared_3310_ = v_isSharedCheck_3373_;
goto v_resetjp_3308_;
}
v_resetjp_3308_:
{
lean_object* v_size_3311_; lean_object* v_size_3312_; lean_object* v_k_3313_; lean_object* v_v_3314_; lean_object* v_l_3315_; lean_object* v_r_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; uint8_t v___x_3319_; 
v_size_3311_ = lean_ctor_get(v_l_3298_, 0);
v_size_3312_ = lean_ctor_get(v_r_3299_, 0);
v_k_3313_ = lean_ctor_get(v_r_3299_, 1);
v_v_3314_ = lean_ctor_get(v_r_3299_, 2);
v_l_3315_ = lean_ctor_get(v_r_3299_, 3);
v_r_3316_ = lean_ctor_get(v_r_3299_, 4);
v___x_3317_ = lean_unsigned_to_nat(2u);
v___x_3318_ = lean_nat_mul(v___x_3317_, v_size_3311_);
v___x_3319_ = lean_nat_dec_lt(v_size_3312_, v___x_3318_);
lean_dec(v___x_3318_);
if (v___x_3319_ == 0)
{
lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3348_; 
lean_inc(v_r_3316_);
lean_inc(v_l_3315_);
lean_inc(v_v_3314_);
lean_inc(v_k_3313_);
v_isSharedCheck_3348_ = !lean_is_exclusive(v_r_3299_);
if (v_isSharedCheck_3348_ == 0)
{
lean_object* v_unused_3349_; lean_object* v_unused_3350_; lean_object* v_unused_3351_; lean_object* v_unused_3352_; lean_object* v_unused_3353_; 
v_unused_3349_ = lean_ctor_get(v_r_3299_, 4);
lean_dec(v_unused_3349_);
v_unused_3350_ = lean_ctor_get(v_r_3299_, 3);
lean_dec(v_unused_3350_);
v_unused_3351_ = lean_ctor_get(v_r_3299_, 2);
lean_dec(v_unused_3351_);
v_unused_3352_ = lean_ctor_get(v_r_3299_, 1);
lean_dec(v_unused_3352_);
v_unused_3353_ = lean_ctor_get(v_r_3299_, 0);
lean_dec(v_unused_3353_);
v___x_3321_ = v_r_3299_;
v_isShared_3322_ = v_isSharedCheck_3348_;
goto v_resetjp_3320_;
}
else
{
lean_dec(v_r_3299_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3348_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___y_3326_; lean_object* v___y_3327_; lean_object* v___y_3328_; lean_object* v___x_3336_; lean_object* v___y_3338_; 
v___x_3323_ = lean_nat_add(v___x_3293_, v_size_3295_);
lean_dec(v_size_3295_);
v___x_3324_ = lean_nat_add(v___x_3323_, v_size_3294_);
lean_dec(v___x_3323_);
v___x_3336_ = lean_nat_add(v___x_3293_, v_size_3311_);
if (lean_obj_tag(v_l_3315_) == 0)
{
lean_object* v_size_3346_; 
v_size_3346_ = lean_ctor_get(v_l_3315_, 0);
lean_inc(v_size_3346_);
v___y_3338_ = v_size_3346_;
goto v___jp_3337_;
}
else
{
lean_object* v___x_3347_; 
v___x_3347_ = lean_unsigned_to_nat(0u);
v___y_3338_ = v___x_3347_;
goto v___jp_3337_;
}
v___jp_3325_:
{
lean_object* v___x_3329_; lean_object* v___x_3331_; 
v___x_3329_ = lean_nat_add(v___y_3326_, v___y_3328_);
lean_dec(v___y_3328_);
lean_dec(v___y_3326_);
if (v_isShared_3322_ == 0)
{
lean_ctor_set(v___x_3321_, 4, v_impl_3292_);
lean_ctor_set(v___x_3321_, 3, v_r_3316_);
lean_ctor_set(v___x_3321_, 2, v_v_2800_);
lean_ctor_set(v___x_3321_, 1, v_k_2799_);
lean_ctor_set(v___x_3321_, 0, v___x_3329_);
v___x_3331_ = v___x_3321_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v___x_3329_);
lean_ctor_set(v_reuseFailAlloc_3335_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_3335_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_3335_, 3, v_r_3316_);
lean_ctor_set(v_reuseFailAlloc_3335_, 4, v_impl_3292_);
v___x_3331_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
lean_object* v___x_3333_; 
if (v_isShared_3310_ == 0)
{
lean_ctor_set(v___x_3309_, 4, v___x_3331_);
lean_ctor_set(v___x_3309_, 3, v___y_3327_);
lean_ctor_set(v___x_3309_, 2, v_v_3314_);
lean_ctor_set(v___x_3309_, 1, v_k_3313_);
lean_ctor_set(v___x_3309_, 0, v___x_3324_);
v___x_3333_ = v___x_3309_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v___x_3324_);
lean_ctor_set(v_reuseFailAlloc_3334_, 1, v_k_3313_);
lean_ctor_set(v_reuseFailAlloc_3334_, 2, v_v_3314_);
lean_ctor_set(v_reuseFailAlloc_3334_, 3, v___y_3327_);
lean_ctor_set(v_reuseFailAlloc_3334_, 4, v___x_3331_);
v___x_3333_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
return v___x_3333_;
}
}
}
v___jp_3337_:
{
lean_object* v___x_3339_; lean_object* v___x_3341_; 
v___x_3339_ = lean_nat_add(v___x_3336_, v___y_3338_);
lean_dec(v___y_3338_);
lean_dec(v___x_3336_);
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 4, v_l_3315_);
lean_ctor_set(v___x_2804_, 3, v_l_3298_);
lean_ctor_set(v___x_2804_, 2, v_v_3297_);
lean_ctor_set(v___x_2804_, 1, v_k_3296_);
lean_ctor_set(v___x_2804_, 0, v___x_3339_);
v___x_3341_ = v___x_2804_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3345_; 
v_reuseFailAlloc_3345_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3345_, 0, v___x_3339_);
lean_ctor_set(v_reuseFailAlloc_3345_, 1, v_k_3296_);
lean_ctor_set(v_reuseFailAlloc_3345_, 2, v_v_3297_);
lean_ctor_set(v_reuseFailAlloc_3345_, 3, v_l_3298_);
lean_ctor_set(v_reuseFailAlloc_3345_, 4, v_l_3315_);
v___x_3341_ = v_reuseFailAlloc_3345_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
lean_object* v___x_3342_; 
v___x_3342_ = lean_nat_add(v___x_3293_, v_size_3294_);
if (lean_obj_tag(v_r_3316_) == 0)
{
lean_object* v_size_3343_; 
v_size_3343_ = lean_ctor_get(v_r_3316_, 0);
lean_inc(v_size_3343_);
v___y_3326_ = v___x_3342_;
v___y_3327_ = v___x_3341_;
v___y_3328_ = v_size_3343_;
goto v___jp_3325_;
}
else
{
lean_object* v___x_3344_; 
v___x_3344_ = lean_unsigned_to_nat(0u);
v___y_3326_ = v___x_3342_;
v___y_3327_ = v___x_3341_;
v___y_3328_ = v___x_3344_;
goto v___jp_3325_;
}
}
}
}
}
else
{
lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3359_; 
lean_del_object(v___x_2804_);
v___x_3354_ = lean_nat_add(v___x_3293_, v_size_3295_);
lean_dec(v_size_3295_);
v___x_3355_ = lean_nat_add(v___x_3354_, v_size_3294_);
lean_dec(v___x_3354_);
v___x_3356_ = lean_nat_add(v___x_3293_, v_size_3294_);
v___x_3357_ = lean_nat_add(v___x_3356_, v_size_3312_);
lean_dec(v___x_3356_);
lean_inc_ref(v_impl_3292_);
if (v_isShared_3310_ == 0)
{
lean_ctor_set(v___x_3309_, 4, v_impl_3292_);
lean_ctor_set(v___x_3309_, 3, v_r_3299_);
lean_ctor_set(v___x_3309_, 2, v_v_2800_);
lean_ctor_set(v___x_3309_, 1, v_k_2799_);
lean_ctor_set(v___x_3309_, 0, v___x_3357_);
v___x_3359_ = v___x_3309_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v___x_3357_);
lean_ctor_set(v_reuseFailAlloc_3372_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_3372_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_3372_, 3, v_r_3299_);
lean_ctor_set(v_reuseFailAlloc_3372_, 4, v_impl_3292_);
v___x_3359_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3366_; 
v_isSharedCheck_3366_ = !lean_is_exclusive(v_impl_3292_);
if (v_isSharedCheck_3366_ == 0)
{
lean_object* v_unused_3367_; lean_object* v_unused_3368_; lean_object* v_unused_3369_; lean_object* v_unused_3370_; lean_object* v_unused_3371_; 
v_unused_3367_ = lean_ctor_get(v_impl_3292_, 4);
lean_dec(v_unused_3367_);
v_unused_3368_ = lean_ctor_get(v_impl_3292_, 3);
lean_dec(v_unused_3368_);
v_unused_3369_ = lean_ctor_get(v_impl_3292_, 2);
lean_dec(v_unused_3369_);
v_unused_3370_ = lean_ctor_get(v_impl_3292_, 1);
lean_dec(v_unused_3370_);
v_unused_3371_ = lean_ctor_get(v_impl_3292_, 0);
lean_dec(v_unused_3371_);
v___x_3361_ = v_impl_3292_;
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
else
{
lean_dec(v_impl_3292_);
v___x_3361_ = lean_box(0);
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
v_resetjp_3360_:
{
lean_object* v___x_3364_; 
if (v_isShared_3362_ == 0)
{
lean_ctor_set(v___x_3361_, 4, v___x_3359_);
lean_ctor_set(v___x_3361_, 3, v_l_3298_);
lean_ctor_set(v___x_3361_, 2, v_v_3297_);
lean_ctor_set(v___x_3361_, 1, v_k_3296_);
lean_ctor_set(v___x_3361_, 0, v___x_3355_);
v___x_3364_ = v___x_3361_;
goto v_reusejp_3363_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v___x_3355_);
lean_ctor_set(v_reuseFailAlloc_3365_, 1, v_k_3296_);
lean_ctor_set(v_reuseFailAlloc_3365_, 2, v_v_3297_);
lean_ctor_set(v_reuseFailAlloc_3365_, 3, v_l_3298_);
lean_ctor_set(v_reuseFailAlloc_3365_, 4, v___x_3359_);
v___x_3364_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3363_;
}
v_reusejp_3363_:
{
return v___x_3364_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_3379_; lean_object* v___x_3380_; lean_object* v___x_3382_; 
v_size_3379_ = lean_ctor_get(v_impl_3292_, 0);
v___x_3380_ = lean_nat_add(v___x_3293_, v_size_3379_);
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 4, v_impl_3292_);
lean_ctor_set(v___x_2804_, 0, v___x_3380_);
v___x_3382_ = v___x_2804_;
goto v_reusejp_3381_;
}
else
{
lean_object* v_reuseFailAlloc_3383_; 
v_reuseFailAlloc_3383_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3383_, 0, v___x_3380_);
lean_ctor_set(v_reuseFailAlloc_3383_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_3383_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_3383_, 3, v_l_2801_);
lean_ctor_set(v_reuseFailAlloc_3383_, 4, v_impl_3292_);
v___x_3382_ = v_reuseFailAlloc_3383_;
goto v_reusejp_3381_;
}
v_reusejp_3381_:
{
return v___x_3382_;
}
}
}
else
{
if (lean_obj_tag(v_l_2801_) == 0)
{
lean_object* v_l_3384_; 
v_l_3384_ = lean_ctor_get(v_l_2801_, 3);
if (lean_obj_tag(v_l_3384_) == 0)
{
lean_object* v_r_3385_; 
lean_inc_ref(v_l_3384_);
v_r_3385_ = lean_ctor_get(v_l_2801_, 4);
lean_inc(v_r_3385_);
if (lean_obj_tag(v_r_3385_) == 0)
{
lean_object* v_size_3386_; lean_object* v_k_3387_; lean_object* v_v_3388_; lean_object* v___x_3390_; uint8_t v_isShared_3391_; uint8_t v_isSharedCheck_3401_; 
v_size_3386_ = lean_ctor_get(v_l_2801_, 0);
v_k_3387_ = lean_ctor_get(v_l_2801_, 1);
v_v_3388_ = lean_ctor_get(v_l_2801_, 2);
v_isSharedCheck_3401_ = !lean_is_exclusive(v_l_2801_);
if (v_isSharedCheck_3401_ == 0)
{
lean_object* v_unused_3402_; lean_object* v_unused_3403_; 
v_unused_3402_ = lean_ctor_get(v_l_2801_, 4);
lean_dec(v_unused_3402_);
v_unused_3403_ = lean_ctor_get(v_l_2801_, 3);
lean_dec(v_unused_3403_);
v___x_3390_ = v_l_2801_;
v_isShared_3391_ = v_isSharedCheck_3401_;
goto v_resetjp_3389_;
}
else
{
lean_inc(v_v_3388_);
lean_inc(v_k_3387_);
lean_inc(v_size_3386_);
lean_dec(v_l_2801_);
v___x_3390_ = lean_box(0);
v_isShared_3391_ = v_isSharedCheck_3401_;
goto v_resetjp_3389_;
}
v_resetjp_3389_:
{
lean_object* v_size_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3396_; 
v_size_3392_ = lean_ctor_get(v_r_3385_, 0);
v___x_3393_ = lean_nat_add(v___x_3293_, v_size_3386_);
lean_dec(v_size_3386_);
v___x_3394_ = lean_nat_add(v___x_3293_, v_size_3392_);
if (v_isShared_3391_ == 0)
{
lean_ctor_set(v___x_3390_, 4, v_impl_3292_);
lean_ctor_set(v___x_3390_, 3, v_r_3385_);
lean_ctor_set(v___x_3390_, 2, v_v_2800_);
lean_ctor_set(v___x_3390_, 1, v_k_2799_);
lean_ctor_set(v___x_3390_, 0, v___x_3394_);
v___x_3396_ = v___x_3390_;
goto v_reusejp_3395_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v___x_3394_);
lean_ctor_set(v_reuseFailAlloc_3400_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_3400_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_3400_, 3, v_r_3385_);
lean_ctor_set(v_reuseFailAlloc_3400_, 4, v_impl_3292_);
v___x_3396_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3395_;
}
v_reusejp_3395_:
{
lean_object* v___x_3398_; 
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 4, v___x_3396_);
lean_ctor_set(v___x_2804_, 3, v_l_3384_);
lean_ctor_set(v___x_2804_, 2, v_v_3388_);
lean_ctor_set(v___x_2804_, 1, v_k_3387_);
lean_ctor_set(v___x_2804_, 0, v___x_3393_);
v___x_3398_ = v___x_2804_;
goto v_reusejp_3397_;
}
else
{
lean_object* v_reuseFailAlloc_3399_; 
v_reuseFailAlloc_3399_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3399_, 0, v___x_3393_);
lean_ctor_set(v_reuseFailAlloc_3399_, 1, v_k_3387_);
lean_ctor_set(v_reuseFailAlloc_3399_, 2, v_v_3388_);
lean_ctor_set(v_reuseFailAlloc_3399_, 3, v_l_3384_);
lean_ctor_set(v_reuseFailAlloc_3399_, 4, v___x_3396_);
v___x_3398_ = v_reuseFailAlloc_3399_;
goto v_reusejp_3397_;
}
v_reusejp_3397_:
{
return v___x_3398_;
}
}
}
}
else
{
lean_object* v_k_3404_; lean_object* v_v_3405_; lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3416_; 
v_k_3404_ = lean_ctor_get(v_l_2801_, 1);
v_v_3405_ = lean_ctor_get(v_l_2801_, 2);
v_isSharedCheck_3416_ = !lean_is_exclusive(v_l_2801_);
if (v_isSharedCheck_3416_ == 0)
{
lean_object* v_unused_3417_; lean_object* v_unused_3418_; lean_object* v_unused_3419_; 
v_unused_3417_ = lean_ctor_get(v_l_2801_, 4);
lean_dec(v_unused_3417_);
v_unused_3418_ = lean_ctor_get(v_l_2801_, 3);
lean_dec(v_unused_3418_);
v_unused_3419_ = lean_ctor_get(v_l_2801_, 0);
lean_dec(v_unused_3419_);
v___x_3407_ = v_l_2801_;
v_isShared_3408_ = v_isSharedCheck_3416_;
goto v_resetjp_3406_;
}
else
{
lean_inc(v_v_3405_);
lean_inc(v_k_3404_);
lean_dec(v_l_2801_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3416_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
lean_object* v___x_3409_; lean_object* v___x_3411_; 
v___x_3409_ = lean_unsigned_to_nat(3u);
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 3, v_r_3385_);
lean_ctor_set(v___x_3407_, 2, v_v_2800_);
lean_ctor_set(v___x_3407_, 1, v_k_2799_);
lean_ctor_set(v___x_3407_, 0, v___x_3293_);
v___x_3411_ = v___x_3407_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v___x_3293_);
lean_ctor_set(v_reuseFailAlloc_3415_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_3415_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_3415_, 3, v_r_3385_);
lean_ctor_set(v_reuseFailAlloc_3415_, 4, v_r_3385_);
v___x_3411_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
lean_object* v___x_3413_; 
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 4, v___x_3411_);
lean_ctor_set(v___x_2804_, 3, v_l_3384_);
lean_ctor_set(v___x_2804_, 2, v_v_3405_);
lean_ctor_set(v___x_2804_, 1, v_k_3404_);
lean_ctor_set(v___x_2804_, 0, v___x_3409_);
v___x_3413_ = v___x_2804_;
goto v_reusejp_3412_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v___x_3409_);
lean_ctor_set(v_reuseFailAlloc_3414_, 1, v_k_3404_);
lean_ctor_set(v_reuseFailAlloc_3414_, 2, v_v_3405_);
lean_ctor_set(v_reuseFailAlloc_3414_, 3, v_l_3384_);
lean_ctor_set(v_reuseFailAlloc_3414_, 4, v___x_3411_);
v___x_3413_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3412_;
}
v_reusejp_3412_:
{
return v___x_3413_;
}
}
}
}
}
else
{
lean_object* v_r_3420_; 
v_r_3420_ = lean_ctor_get(v_l_2801_, 4);
lean_inc(v_r_3420_);
if (lean_obj_tag(v_r_3420_) == 0)
{
lean_object* v_k_3421_; lean_object* v_v_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3445_; 
lean_inc(v_l_3384_);
v_k_3421_ = lean_ctor_get(v_l_2801_, 1);
v_v_3422_ = lean_ctor_get(v_l_2801_, 2);
v_isSharedCheck_3445_ = !lean_is_exclusive(v_l_2801_);
if (v_isSharedCheck_3445_ == 0)
{
lean_object* v_unused_3446_; lean_object* v_unused_3447_; lean_object* v_unused_3448_; 
v_unused_3446_ = lean_ctor_get(v_l_2801_, 4);
lean_dec(v_unused_3446_);
v_unused_3447_ = lean_ctor_get(v_l_2801_, 3);
lean_dec(v_unused_3447_);
v_unused_3448_ = lean_ctor_get(v_l_2801_, 0);
lean_dec(v_unused_3448_);
v___x_3424_ = v_l_2801_;
v_isShared_3425_ = v_isSharedCheck_3445_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_v_3422_);
lean_inc(v_k_3421_);
lean_dec(v_l_2801_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3445_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v_k_3426_; lean_object* v_v_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3441_; 
v_k_3426_ = lean_ctor_get(v_r_3420_, 1);
v_v_3427_ = lean_ctor_get(v_r_3420_, 2);
v_isSharedCheck_3441_ = !lean_is_exclusive(v_r_3420_);
if (v_isSharedCheck_3441_ == 0)
{
lean_object* v_unused_3442_; lean_object* v_unused_3443_; lean_object* v_unused_3444_; 
v_unused_3442_ = lean_ctor_get(v_r_3420_, 4);
lean_dec(v_unused_3442_);
v_unused_3443_ = lean_ctor_get(v_r_3420_, 3);
lean_dec(v_unused_3443_);
v_unused_3444_ = lean_ctor_get(v_r_3420_, 0);
lean_dec(v_unused_3444_);
v___x_3429_ = v_r_3420_;
v_isShared_3430_ = v_isSharedCheck_3441_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_v_3427_);
lean_inc(v_k_3426_);
lean_dec(v_r_3420_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3441_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
lean_object* v___x_3431_; lean_object* v___x_3433_; 
v___x_3431_ = lean_unsigned_to_nat(3u);
if (v_isShared_3430_ == 0)
{
lean_ctor_set(v___x_3429_, 4, v_l_3384_);
lean_ctor_set(v___x_3429_, 3, v_l_3384_);
lean_ctor_set(v___x_3429_, 2, v_v_3422_);
lean_ctor_set(v___x_3429_, 1, v_k_3421_);
lean_ctor_set(v___x_3429_, 0, v___x_3293_);
v___x_3433_ = v___x_3429_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3440_; 
v_reuseFailAlloc_3440_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3440_, 0, v___x_3293_);
lean_ctor_set(v_reuseFailAlloc_3440_, 1, v_k_3421_);
lean_ctor_set(v_reuseFailAlloc_3440_, 2, v_v_3422_);
lean_ctor_set(v_reuseFailAlloc_3440_, 3, v_l_3384_);
lean_ctor_set(v_reuseFailAlloc_3440_, 4, v_l_3384_);
v___x_3433_ = v_reuseFailAlloc_3440_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
lean_object* v___x_3435_; 
if (v_isShared_3425_ == 0)
{
lean_ctor_set(v___x_3424_, 4, v_l_3384_);
lean_ctor_set(v___x_3424_, 2, v_v_2800_);
lean_ctor_set(v___x_3424_, 1, v_k_2799_);
lean_ctor_set(v___x_3424_, 0, v___x_3293_);
v___x_3435_ = v___x_3424_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v___x_3293_);
lean_ctor_set(v_reuseFailAlloc_3439_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_3439_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_3439_, 3, v_l_3384_);
lean_ctor_set(v_reuseFailAlloc_3439_, 4, v_l_3384_);
v___x_3435_ = v_reuseFailAlloc_3439_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
lean_object* v___x_3437_; 
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 4, v___x_3435_);
lean_ctor_set(v___x_2804_, 3, v___x_3433_);
lean_ctor_set(v___x_2804_, 2, v_v_3427_);
lean_ctor_set(v___x_2804_, 1, v_k_3426_);
lean_ctor_set(v___x_2804_, 0, v___x_3431_);
v___x_3437_ = v___x_2804_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v___x_3431_);
lean_ctor_set(v_reuseFailAlloc_3438_, 1, v_k_3426_);
lean_ctor_set(v_reuseFailAlloc_3438_, 2, v_v_3427_);
lean_ctor_set(v_reuseFailAlloc_3438_, 3, v___x_3433_);
lean_ctor_set(v_reuseFailAlloc_3438_, 4, v___x_3435_);
v___x_3437_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
return v___x_3437_;
}
}
}
}
}
}
else
{
lean_object* v___x_3449_; lean_object* v___x_3451_; 
v___x_3449_ = lean_unsigned_to_nat(2u);
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 4, v_r_3420_);
lean_ctor_set(v___x_2804_, 0, v___x_3449_);
v___x_3451_ = v___x_2804_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v___x_3449_);
lean_ctor_set(v_reuseFailAlloc_3452_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_3452_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_3452_, 3, v_l_2801_);
lean_ctor_set(v_reuseFailAlloc_3452_, 4, v_r_3420_);
v___x_3451_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
return v___x_3451_;
}
}
}
}
else
{
lean_object* v___x_3454_; 
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 4, v_l_2801_);
lean_ctor_set(v___x_2804_, 0, v___x_3293_);
v___x_3454_ = v___x_2804_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v___x_3293_);
lean_ctor_set(v_reuseFailAlloc_3455_, 1, v_k_2799_);
lean_ctor_set(v_reuseFailAlloc_3455_, 2, v_v_2800_);
lean_ctor_set(v_reuseFailAlloc_3455_, 3, v_l_2801_);
lean_ctor_set(v_reuseFailAlloc_3455_, 4, v_l_2801_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
return v___x_3454_;
}
}
}
}
}
}
}
else
{
return v_t_2798_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg___boxed(lean_object* v_k_3458_, lean_object* v_t_3459_){
_start:
{
lean_object* v_res_3460_; 
v_res_3460_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3458_, v_t_3459_);
lean_dec(v_k_3458_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(lean_object* v_declName_3461_, lean_object* v_ps_3462_){
_start:
{
lean_object* v_importedEntries_3463_; lean_object* v_state_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3472_; 
v_importedEntries_3463_ = lean_ctor_get(v_ps_3462_, 0);
v_state_3464_ = lean_ctor_get(v_ps_3462_, 1);
v_isSharedCheck_3472_ = !lean_is_exclusive(v_ps_3462_);
if (v_isSharedCheck_3472_ == 0)
{
v___x_3466_ = v_ps_3462_;
v_isShared_3467_ = v_isSharedCheck_3472_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_state_3464_);
lean_inc(v_importedEntries_3463_);
lean_dec(v_ps_3462_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3472_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
lean_object* v___x_3468_; lean_object* v___x_3470_; 
v___x_3468_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_declName_3461_, v_state_3464_);
if (v_isShared_3467_ == 0)
{
lean_ctor_set(v___x_3466_, 1, v___x_3468_);
v___x_3470_ = v___x_3466_;
goto v_reusejp_3469_;
}
else
{
lean_object* v_reuseFailAlloc_3471_; 
v_reuseFailAlloc_3471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3471_, 0, v_importedEntries_3463_);
lean_ctor_set(v_reuseFailAlloc_3471_, 1, v___x_3468_);
v___x_3470_ = v_reuseFailAlloc_3471_;
goto v_reusejp_3469_;
}
v_reusejp_3469_:
{
return v___x_3470_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed(lean_object* v_declName_3473_, lean_object* v_ps_3474_){
_start:
{
lean_object* v_res_3475_; 
v_res_3475_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(v_declName_3473_, v_ps_3474_);
lean_dec(v_declName_3473_);
return v_res_3475_;
}
}
static lean_object* _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3477_; lean_object* v___x_3478_; 
v___x_3477_ = ((lean_object*)(l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0));
v___x_3478_ = l_Lean_stringToMessageData(v___x_3477_);
return v___x_3478_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(lean_object* v_declName_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_){
_start:
{
lean_object* v___y_3488_; lean_object* v___y_3489_; lean_object* v___y_3490_; lean_object* v___y_3491_; lean_object* v___y_3492_; lean_object* v___y_3493_; lean_object* v___y_3494_; lean_object* v___y_3495_; lean_object* v___y_3496_; lean_object* v___y_3497_; lean_object* v___y_3498_; lean_object* v___f_3519_; lean_object* v___y_3521_; lean_object* v___y_3522_; lean_object* v___x_3542_; lean_object* v_env_3543_; lean_object* v___x_3544_; 
lean_inc(v_declName_3479_);
v___f_3519_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3519_, 0, v_declName_3479_);
v___x_3542_ = lean_st_ref_get(v___y_3485_);
v_env_3543_ = lean_ctor_get(v___x_3542_, 0);
lean_inc_ref(v_env_3543_);
lean_dec(v___x_3542_);
v___x_3544_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3543_, v_declName_3479_);
lean_dec_ref(v_env_3543_);
if (lean_obj_tag(v___x_3544_) == 0)
{
lean_dec(v_declName_3479_);
v___y_3521_ = v___y_3483_;
v___y_3522_ = v___y_3485_;
goto v___jp_3520_;
}
else
{
lean_object* v___x_3545_; uint8_t v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; 
lean_dec_ref_known(v___x_3544_, 1);
lean_dec_ref(v___f_3519_);
v___x_3545_ = lean_obj_once(&l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1, &l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1_once, _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1);
v___x_3546_ = 0;
v___x_3547_ = l_Lean_MessageData_ofConstName(v_declName_3479_, v___x_3546_);
v___x_3548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3548_, 0, v___x_3545_);
lean_ctor_set(v___x_3548_, 1, v___x_3547_);
v___x_3549_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_3550_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3550_, 0, v___x_3548_);
lean_ctor_set(v___x_3550_, 1, v___x_3549_);
v___x_3551_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_3550_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_);
return v___x_3551_;
}
v___jp_3487_:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v_mctx_3503_; lean_object* v_zetaDeltaFVarIds_3504_; lean_object* v_postponed_3505_; lean_object* v_diag_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3517_; 
v___x_3499_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
v___x_3500_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3500_, 0, v___y_3498_);
lean_ctor_set(v___x_3500_, 1, v___y_3493_);
lean_ctor_set(v___x_3500_, 2, v___y_3496_);
lean_ctor_set(v___x_3500_, 3, v___y_3492_);
lean_ctor_set(v___x_3500_, 4, v___y_3490_);
lean_ctor_set(v___x_3500_, 5, v___x_3499_);
lean_ctor_set(v___x_3500_, 6, v___y_3495_);
lean_ctor_set(v___x_3500_, 7, v___y_3491_);
lean_ctor_set(v___x_3500_, 8, v___y_3488_);
lean_ctor_set(v___x_3500_, 9, v___y_3497_);
v___x_3501_ = lean_st_ref_put(v___y_3494_, v___x_3500_);
v___x_3502_ = lean_st_ref_take(v___y_3489_);
v_mctx_3503_ = lean_ctor_get(v___x_3502_, 0);
v_zetaDeltaFVarIds_3504_ = lean_ctor_get(v___x_3502_, 2);
v_postponed_3505_ = lean_ctor_get(v___x_3502_, 3);
v_diag_3506_ = lean_ctor_get(v___x_3502_, 4);
v_isSharedCheck_3517_ = !lean_is_exclusive(v___x_3502_);
if (v_isSharedCheck_3517_ == 0)
{
lean_object* v_unused_3518_; 
v_unused_3518_ = lean_ctor_get(v___x_3502_, 1);
lean_dec(v_unused_3518_);
v___x_3508_ = v___x_3502_;
v_isShared_3509_ = v_isSharedCheck_3517_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_diag_3506_);
lean_inc(v_postponed_3505_);
lean_inc(v_zetaDeltaFVarIds_3504_);
lean_inc(v_mctx_3503_);
lean_dec(v___x_3502_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3517_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3513_; 
v___x_3510_ = lean_box(0);
v___x_3511_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__5, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__5_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__5);
if (v_isShared_3509_ == 0)
{
lean_ctor_set(v___x_3508_, 1, v___x_3511_);
v___x_3513_ = v___x_3508_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v_mctx_3503_);
lean_ctor_set(v_reuseFailAlloc_3516_, 1, v___x_3511_);
lean_ctor_set(v_reuseFailAlloc_3516_, 2, v_zetaDeltaFVarIds_3504_);
lean_ctor_set(v_reuseFailAlloc_3516_, 3, v_postponed_3505_);
lean_ctor_set(v_reuseFailAlloc_3516_, 4, v_diag_3506_);
v___x_3513_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
lean_object* v___x_3514_; lean_object* v___x_3515_; 
v___x_3514_ = lean_st_ref_put(v___y_3489_, v___x_3513_);
v___x_3515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3515_, 0, v___x_3510_);
return v___x_3515_;
}
}
}
v___jp_3520_:
{
lean_object* v___x_3523_; lean_object* v_env_3524_; lean_object* v_nextMacroScope_3525_; lean_object* v_ngen_3526_; lean_object* v_auxDeclNGen_3527_; lean_object* v_traceState_3528_; lean_object* v_recordedDeps_3529_; lean_object* v_messages_3530_; lean_object* v_infoState_3531_; lean_object* v_snapshotTasks_3532_; lean_object* v___x_3533_; lean_object* v_toEnvExtension_3534_; uint8_t v_logWrites_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; uint8_t v___x_3538_; 
v___x_3523_ = lean_st_ref_take(v___y_3522_);
v_env_3524_ = lean_ctor_get(v___x_3523_, 0);
lean_inc_ref(v_env_3524_);
v_nextMacroScope_3525_ = lean_ctor_get(v___x_3523_, 1);
lean_inc(v_nextMacroScope_3525_);
v_ngen_3526_ = lean_ctor_get(v___x_3523_, 2);
lean_inc_ref(v_ngen_3526_);
v_auxDeclNGen_3527_ = lean_ctor_get(v___x_3523_, 3);
lean_inc_ref(v_auxDeclNGen_3527_);
v_traceState_3528_ = lean_ctor_get(v___x_3523_, 4);
lean_inc_ref(v_traceState_3528_);
v_recordedDeps_3529_ = lean_ctor_get(v___x_3523_, 6);
lean_inc_ref(v_recordedDeps_3529_);
v_messages_3530_ = lean_ctor_get(v___x_3523_, 7);
lean_inc_ref(v_messages_3530_);
v_infoState_3531_ = lean_ctor_get(v___x_3523_, 8);
lean_inc_ref(v_infoState_3531_);
v_snapshotTasks_3532_ = lean_ctor_get(v___x_3523_, 9);
lean_inc_ref(v_snapshotTasks_3532_);
lean_dec(v___x_3523_);
v___x_3533_ = l_Lean_docStringExt;
v_toEnvExtension_3534_ = lean_ctor_get(v___x_3533_, 0);
v_logWrites_3535_ = lean_ctor_get_uint8(v_toEnvExtension_3534_, sizeof(void*)*6);
v___x_3536_ = lean_box(2);
v___x_3537_ = lean_box(0);
v___x_3538_ = 1;
if (v_logWrites_3535_ == 0)
{
lean_object* v___x_3539_; 
lean_inc_ref(v_toEnvExtension_3534_);
v___x_3539_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3534_, v_env_3524_, v___f_3519_, v___x_3536_, v___x_3537_, v___x_3538_);
v___y_3488_ = v_infoState_3531_;
v___y_3489_ = v___y_3521_;
v___y_3490_ = v_traceState_3528_;
v___y_3491_ = v_messages_3530_;
v___y_3492_ = v_auxDeclNGen_3527_;
v___y_3493_ = v_nextMacroScope_3525_;
v___y_3494_ = v___y_3522_;
v___y_3495_ = v_recordedDeps_3529_;
v___y_3496_ = v_ngen_3526_;
v___y_3497_ = v_snapshotTasks_3532_;
v___y_3498_ = v___x_3539_;
goto v___jp_3487_;
}
else
{
lean_object* v___x_3540_; lean_object* v___x_3541_; 
lean_inc_ref_n(v_toEnvExtension_3534_, 2);
v___x_3540_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_3534_, v_env_3524_);
lean_dec_ref(v_env_3524_);
v___x_3541_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3534_, v___x_3540_, v___f_3519_, v___x_3536_, v___x_3537_, v___x_3538_);
v___y_3488_ = v_infoState_3531_;
v___y_3489_ = v___y_3521_;
v___y_3490_ = v_traceState_3528_;
v___y_3491_ = v_messages_3530_;
v___y_3492_ = v_auxDeclNGen_3527_;
v___y_3493_ = v_nextMacroScope_3525_;
v___y_3494_ = v___y_3522_;
v___y_3495_ = v_recordedDeps_3529_;
v___y_3496_ = v_ngen_3526_;
v___y_3497_ = v_snapshotTasks_3532_;
v___y_3498_ = v___x_3541_;
goto v___jp_3487_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___boxed(lean_object* v_declName_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_){
_start:
{
lean_object* v_res_3560_; 
v_res_3560_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(v_declName_3552_, v___y_3553_, v___y_3554_, v___y_3555_, v___y_3556_, v___y_3557_, v___y_3558_);
lean_dec(v___y_3558_);
lean_dec_ref(v___y_3557_);
lean_dec(v___y_3556_);
lean_dec_ref(v___y_3555_);
lean_dec(v___y_3554_);
lean_dec_ref(v___y_3553_);
return v_res_3560_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__1(void){
_start:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; 
v___x_3562_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__0));
v___x_3563_ = l_Lean_stringToMessageData(v___x_3562_);
return v___x_3563_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__3(void){
_start:
{
lean_object* v___x_3565_; lean_object* v___x_3566_; 
v___x_3565_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__2));
v___x_3566_ = l_Lean_stringToMessageData(v___x_3565_);
return v___x_3566_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__5(void){
_start:
{
lean_object* v___x_3568_; lean_object* v___x_3569_; 
v___x_3568_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__4));
v___x_3569_ = l_Lean_stringToMessageData(v___x_3568_);
return v___x_3569_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__7(void){
_start:
{
lean_object* v___x_3571_; lean_object* v___x_3572_; 
v___x_3571_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__6));
v___x_3572_ = l_Lean_stringToMessageData(v___x_3571_);
return v___x_3572_;
}
}
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso(lean_object* v_declName_3573_, lean_object* v_a_3574_, lean_object* v_a_3575_, lean_object* v_a_3576_, lean_object* v_a_3577_, lean_object* v_a_3578_, lean_object* v_a_3579_){
_start:
{
lean_object* v___x_3581_; lean_object* v_env_3582_; lean_object* v_ref_3583_; uint8_t v___x_3584_; lean_object* v___x_3585_; 
v___x_3581_ = lean_st_ref_get(v_a_3579_);
v_env_3582_ = lean_ctor_get(v___x_3581_, 0);
lean_inc_ref(v_env_3582_);
lean_dec(v___x_3581_);
v_ref_3583_ = lean_ctor_get(v_a_3578_, 2);
v___x_3584_ = 1;
lean_inc(v_declName_3573_);
v___x_3585_ = l_Lean_findInternalDocString_x3f(v_env_3582_, v_declName_3573_, v___x_3584_);
if (lean_obj_tag(v___x_3585_) == 0)
{
lean_object* v_a_3586_; 
v_a_3586_ = lean_ctor_get(v___x_3585_, 0);
lean_inc(v_a_3586_);
lean_dec_ref_known(v___x_3585_, 1);
if (lean_obj_tag(v_a_3586_) == 1)
{
lean_object* v_val_3587_; 
v_val_3587_ = lean_ctor_get(v_a_3586_, 0);
lean_inc(v_val_3587_);
lean_dec_ref_known(v_a_3586_, 1);
if (lean_obj_tag(v_val_3587_) == 0)
{
lean_object* v_val_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3609_; 
v_val_3588_ = lean_ctor_get(v_val_3587_, 0);
v_isSharedCheck_3609_ = !lean_is_exclusive(v_val_3587_);
if (v_isSharedCheck_3609_ == 0)
{
v___x_3590_ = v_val_3587_;
v_isShared_3591_ = v_isSharedCheck_3609_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_val_3588_);
lean_dec(v_val_3587_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3609_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3592_; 
v___x_3592_ = l_Lean_removeBuiltinDocString(v_declName_3573_);
if (lean_obj_tag(v___x_3592_) == 0)
{
lean_object* v___x_3593_; 
lean_dec_ref_known(v___x_3592_, 1);
lean_del_object(v___x_3590_);
lean_inc(v_declName_3573_);
v___x_3593_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(v_declName_3573_, v_a_3574_, v_a_3575_, v_a_3576_, v_a_3577_, v_a_3578_, v_a_3579_);
if (lean_obj_tag(v___x_3593_) == 0)
{
lean_object* v___x_3594_; 
lean_dec_ref_known(v___x_3593_, 1);
v___x_3594_ = l_Lean_addVersoDocStringFromString(v_declName_3573_, v_val_3588_, v_a_3574_, v_a_3575_, v_a_3576_, v_a_3577_, v_a_3578_, v_a_3579_);
return v___x_3594_;
}
else
{
lean_dec(v_val_3588_);
lean_dec(v_declName_3573_);
return v___x_3593_;
}
}
else
{
lean_object* v_a_3595_; lean_object* v___x_3597_; uint8_t v_isShared_3598_; uint8_t v_isSharedCheck_3608_; 
lean_dec(v_val_3588_);
lean_dec(v_declName_3573_);
v_a_3595_ = lean_ctor_get(v___x_3592_, 0);
v_isSharedCheck_3608_ = !lean_is_exclusive(v___x_3592_);
if (v_isSharedCheck_3608_ == 0)
{
v___x_3597_ = v___x_3592_;
v_isShared_3598_ = v_isSharedCheck_3608_;
goto v_resetjp_3596_;
}
else
{
lean_inc(v_a_3595_);
lean_dec(v___x_3592_);
v___x_3597_ = lean_box(0);
v_isShared_3598_ = v_isSharedCheck_3608_;
goto v_resetjp_3596_;
}
v_resetjp_3596_:
{
lean_object* v___x_3599_; lean_object* v___x_3601_; 
v___x_3599_ = lean_io_error_to_string(v_a_3595_);
if (v_isShared_3591_ == 0)
{
lean_ctor_set_tag(v___x_3590_, 3);
lean_ctor_set(v___x_3590_, 0, v___x_3599_);
v___x_3601_ = v___x_3590_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3607_; 
v_reuseFailAlloc_3607_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3607_, 0, v___x_3599_);
v___x_3601_ = v_reuseFailAlloc_3607_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3605_; 
v___x_3602_ = l_Lean_MessageData_ofFormat(v___x_3601_);
lean_inc(v_ref_3583_);
v___x_3603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3603_, 0, v_ref_3583_);
lean_ctor_set(v___x_3603_, 1, v___x_3602_);
if (v_isShared_3598_ == 0)
{
lean_ctor_set(v___x_3597_, 0, v___x_3603_);
v___x_3605_ = v___x_3597_;
goto v_reusejp_3604_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v___x_3603_);
v___x_3605_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3604_;
}
v_reusejp_3604_:
{
return v___x_3605_;
}
}
}
}
}
}
else
{
lean_object* v___x_3610_; uint8_t v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; 
lean_dec(v_val_3587_);
v___x_3610_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__1, &l_Lean_makeDocStringVerso___closed__1_once, _init_l_Lean_makeDocStringVerso___closed__1);
v___x_3611_ = 0;
v___x_3612_ = l_Lean_MessageData_ofConstName(v_declName_3573_, v___x_3611_);
v___x_3613_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3613_, 0, v___x_3610_);
lean_ctor_set(v___x_3613_, 1, v___x_3612_);
v___x_3614_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__3, &l_Lean_makeDocStringVerso___closed__3_once, _init_l_Lean_makeDocStringVerso___closed__3);
v___x_3615_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3615_, 0, v___x_3613_);
lean_ctor_set(v___x_3615_, 1, v___x_3614_);
v___x_3616_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_3615_, v_a_3574_, v_a_3575_, v_a_3576_, v_a_3577_, v_a_3578_, v_a_3579_);
return v___x_3616_;
}
}
else
{
lean_object* v___x_3617_; uint8_t v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; 
lean_dec(v_a_3586_);
v___x_3617_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__5, &l_Lean_makeDocStringVerso___closed__5_once, _init_l_Lean_makeDocStringVerso___closed__5);
v___x_3618_ = 0;
v___x_3619_ = l_Lean_MessageData_ofConstName(v_declName_3573_, v___x_3618_);
v___x_3620_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3620_, 0, v___x_3617_);
lean_ctor_set(v___x_3620_, 1, v___x_3619_);
v___x_3621_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__7, &l_Lean_makeDocStringVerso___closed__7_once, _init_l_Lean_makeDocStringVerso___closed__7);
v___x_3622_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3622_, 0, v___x_3620_);
lean_ctor_set(v___x_3622_, 1, v___x_3621_);
v___x_3623_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_3622_, v_a_3574_, v_a_3575_, v_a_3576_, v_a_3577_, v_a_3578_, v_a_3579_);
return v___x_3623_;
}
}
else
{
lean_object* v_a_3624_; lean_object* v___x_3626_; uint8_t v_isShared_3627_; uint8_t v_isSharedCheck_3635_; 
lean_dec(v_declName_3573_);
v_a_3624_ = lean_ctor_get(v___x_3585_, 0);
v_isSharedCheck_3635_ = !lean_is_exclusive(v___x_3585_);
if (v_isSharedCheck_3635_ == 0)
{
v___x_3626_ = v___x_3585_;
v_isShared_3627_ = v_isSharedCheck_3635_;
goto v_resetjp_3625_;
}
else
{
lean_inc(v_a_3624_);
lean_dec(v___x_3585_);
v___x_3626_ = lean_box(0);
v_isShared_3627_ = v_isSharedCheck_3635_;
goto v_resetjp_3625_;
}
v_resetjp_3625_:
{
lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3633_; 
v___x_3628_ = lean_io_error_to_string(v_a_3624_);
v___x_3629_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3629_, 0, v___x_3628_);
v___x_3630_ = l_Lean_MessageData_ofFormat(v___x_3629_);
lean_inc(v_ref_3583_);
v___x_3631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3631_, 0, v_ref_3583_);
lean_ctor_set(v___x_3631_, 1, v___x_3630_);
if (v_isShared_3627_ == 0)
{
lean_ctor_set(v___x_3626_, 0, v___x_3631_);
v___x_3633_ = v___x_3626_;
goto v_reusejp_3632_;
}
else
{
lean_object* v_reuseFailAlloc_3634_; 
v_reuseFailAlloc_3634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3634_, 0, v___x_3631_);
v___x_3633_ = v_reuseFailAlloc_3634_;
goto v_reusejp_3632_;
}
v_reusejp_3632_:
{
return v___x_3633_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso___boxed(lean_object* v_declName_3636_, lean_object* v_a_3637_, lean_object* v_a_3638_, lean_object* v_a_3639_, lean_object* v_a_3640_, lean_object* v_a_3641_, lean_object* v_a_3642_, lean_object* v_a_3643_){
_start:
{
lean_object* v_res_3644_; 
v_res_3644_ = l_Lean_makeDocStringVerso(v_declName_3636_, v_a_3637_, v_a_3638_, v_a_3639_, v_a_3640_, v_a_3641_, v_a_3642_);
lean_dec(v_a_3642_);
lean_dec_ref(v_a_3641_);
lean_dec(v_a_3640_);
lean_dec_ref(v_a_3639_);
lean_dec(v_a_3638_);
lean_dec_ref(v_a_3637_);
return v_res_3644_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(lean_object* v_00_u03b2_3645_, lean_object* v_k_3646_, lean_object* v_t_3647_, lean_object* v_h_3648_){
_start:
{
lean_object* v___x_3649_; 
v___x_3649_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3646_, v_t_3647_);
return v___x_3649_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3650_, lean_object* v_k_3651_, lean_object* v_t_3652_, lean_object* v_h_3653_){
_start:
{
lean_object* v_res_3654_; 
v_res_3654_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(v_00_u03b2_3650_, v_k_3651_, v_t_3652_, v_h_3653_);
lean_dec(v_k_3651_);
return v_res_3654_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString(lean_object* v_declName_3655_, lean_object* v_binders_3656_, lean_object* v_docComment_3657_, lean_object* v_a_3658_, lean_object* v_a_3659_, lean_object* v_a_3660_, lean_object* v_a_3661_, lean_object* v_a_3662_, lean_object* v_a_3663_){
_start:
{
uint8_t v___x_3665_; lean_object* v___x_3666_; 
v___x_3665_ = l_Lean_isVersoDocComment(v_docComment_3657_);
v___x_3666_ = l_Lean_addDocStringOf(v___x_3665_, v_declName_3655_, v_binders_3656_, v_docComment_3657_, v_a_3658_, v_a_3659_, v_a_3660_, v_a_3661_, v_a_3662_, v_a_3663_);
return v___x_3666_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString___boxed(lean_object* v_declName_3667_, lean_object* v_binders_3668_, lean_object* v_docComment_3669_, lean_object* v_a_3670_, lean_object* v_a_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_){
_start:
{
lean_object* v_res_3677_; 
v_res_3677_ = l_Lean_addDocString(v_declName_3667_, v_binders_3668_, v_docComment_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_);
lean_dec(v_a_3675_);
lean_dec_ref(v_a_3674_);
lean_dec(v_a_3673_);
lean_dec_ref(v_a_3672_);
lean_dec(v_a_3671_);
lean_dec_ref(v_a_3670_);
return v_res_3677_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString_x27(lean_object* v_declName_3678_, lean_object* v_binders_3679_, lean_object* v_docString_x3f_3680_, lean_object* v_a_3681_, lean_object* v_a_3682_, lean_object* v_a_3683_, lean_object* v_a_3684_, lean_object* v_a_3685_, lean_object* v_a_3686_){
_start:
{
if (lean_obj_tag(v_docString_x3f_3680_) == 0)
{
lean_object* v___x_3688_; lean_object* v___x_3689_; 
lean_dec(v_binders_3679_);
lean_dec(v_declName_3678_);
v___x_3688_ = lean_box(0);
v___x_3689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3688_);
return v___x_3689_;
}
else
{
lean_object* v_val_3690_; lean_object* v___x_3691_; 
v_val_3690_ = lean_ctor_get(v_docString_x3f_3680_, 0);
lean_inc(v_val_3690_);
lean_dec_ref_known(v_docString_x3f_3680_, 1);
v___x_3691_ = l_Lean_addDocString(v_declName_3678_, v_binders_3679_, v_val_3690_, v_a_3681_, v_a_3682_, v_a_3683_, v_a_3684_, v_a_3685_, v_a_3686_);
return v___x_3691_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString_x27___boxed(lean_object* v_declName_3692_, lean_object* v_binders_3693_, lean_object* v_docString_x3f_3694_, lean_object* v_a_3695_, lean_object* v_a_3696_, lean_object* v_a_3697_, lean_object* v_a_3698_, lean_object* v_a_3699_, lean_object* v_a_3700_, lean_object* v_a_3701_){
_start:
{
lean_object* v_res_3702_; 
v_res_3702_ = l_Lean_addDocString_x27(v_declName_3692_, v_binders_3693_, v_docString_x3f_3694_, v_a_3695_, v_a_3696_, v_a_3697_, v_a_3698_, v_a_3699_, v_a_3700_);
lean_dec(v_a_3700_);
lean_dec_ref(v_a_3699_);
lean_dec(v_a_3698_);
lean_dec_ref(v_a_3697_);
lean_dec(v_a_3696_);
lean_dec_ref(v_a_3695_);
return v_res_3702_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(lean_object* v_env_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_){
_start:
{
lean_object* v___x_3707_; lean_object* v_nextMacroScope_3708_; lean_object* v_ngen_3709_; lean_object* v_auxDeclNGen_3710_; lean_object* v_traceState_3711_; lean_object* v_recordedDeps_3712_; lean_object* v_messages_3713_; lean_object* v_infoState_3714_; lean_object* v_snapshotTasks_3715_; lean_object* v___x_3717_; uint8_t v_isShared_3718_; uint8_t v_isSharedCheck_3741_; 
v___x_3707_ = lean_st_ref_take(v___y_3705_);
v_nextMacroScope_3708_ = lean_ctor_get(v___x_3707_, 1);
v_ngen_3709_ = lean_ctor_get(v___x_3707_, 2);
v_auxDeclNGen_3710_ = lean_ctor_get(v___x_3707_, 3);
v_traceState_3711_ = lean_ctor_get(v___x_3707_, 4);
v_recordedDeps_3712_ = lean_ctor_get(v___x_3707_, 6);
v_messages_3713_ = lean_ctor_get(v___x_3707_, 7);
v_infoState_3714_ = lean_ctor_get(v___x_3707_, 8);
v_snapshotTasks_3715_ = lean_ctor_get(v___x_3707_, 9);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3741_ == 0)
{
lean_object* v_unused_3742_; lean_object* v_unused_3743_; 
v_unused_3742_ = lean_ctor_get(v___x_3707_, 5);
lean_dec(v_unused_3742_);
v_unused_3743_ = lean_ctor_get(v___x_3707_, 0);
lean_dec(v_unused_3743_);
v___x_3717_ = v___x_3707_;
v_isShared_3718_ = v_isSharedCheck_3741_;
goto v_resetjp_3716_;
}
else
{
lean_inc(v_snapshotTasks_3715_);
lean_inc(v_infoState_3714_);
lean_inc(v_messages_3713_);
lean_inc(v_recordedDeps_3712_);
lean_inc(v_traceState_3711_);
lean_inc(v_auxDeclNGen_3710_);
lean_inc(v_ngen_3709_);
lean_inc(v_nextMacroScope_3708_);
lean_dec(v___x_3707_);
v___x_3717_ = lean_box(0);
v_isShared_3718_ = v_isSharedCheck_3741_;
goto v_resetjp_3716_;
}
v_resetjp_3716_:
{
lean_object* v___x_3719_; lean_object* v___x_3721_; 
v___x_3719_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 5, v___x_3719_);
lean_ctor_set(v___x_3717_, 0, v_env_3703_);
v___x_3721_ = v___x_3717_;
goto v_reusejp_3720_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v_env_3703_);
lean_ctor_set(v_reuseFailAlloc_3740_, 1, v_nextMacroScope_3708_);
lean_ctor_set(v_reuseFailAlloc_3740_, 2, v_ngen_3709_);
lean_ctor_set(v_reuseFailAlloc_3740_, 3, v_auxDeclNGen_3710_);
lean_ctor_set(v_reuseFailAlloc_3740_, 4, v_traceState_3711_);
lean_ctor_set(v_reuseFailAlloc_3740_, 5, v___x_3719_);
lean_ctor_set(v_reuseFailAlloc_3740_, 6, v_recordedDeps_3712_);
lean_ctor_set(v_reuseFailAlloc_3740_, 7, v_messages_3713_);
lean_ctor_set(v_reuseFailAlloc_3740_, 8, v_infoState_3714_);
lean_ctor_set(v_reuseFailAlloc_3740_, 9, v_snapshotTasks_3715_);
v___x_3721_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3720_;
}
v_reusejp_3720_:
{
lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v_mctx_3724_; lean_object* v_zetaDeltaFVarIds_3725_; lean_object* v_postponed_3726_; lean_object* v_diag_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3738_; 
v___x_3722_ = lean_st_ref_put(v___y_3705_, v___x_3721_);
v___x_3723_ = lean_st_ref_take(v___y_3704_);
v_mctx_3724_ = lean_ctor_get(v___x_3723_, 0);
v_zetaDeltaFVarIds_3725_ = lean_ctor_get(v___x_3723_, 2);
v_postponed_3726_ = lean_ctor_get(v___x_3723_, 3);
v_diag_3727_ = lean_ctor_get(v___x_3723_, 4);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3723_);
if (v_isSharedCheck_3738_ == 0)
{
lean_object* v_unused_3739_; 
v_unused_3739_ = lean_ctor_get(v___x_3723_, 1);
lean_dec(v_unused_3739_);
v___x_3729_ = v___x_3723_;
v_isShared_3730_ = v_isSharedCheck_3738_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_diag_3727_);
lean_inc(v_postponed_3726_);
lean_inc(v_zetaDeltaFVarIds_3725_);
lean_inc(v_mctx_3724_);
lean_dec(v___x_3723_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3738_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3734_; 
v___x_3731_ = lean_box(0);
v___x_3732_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__5, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__5_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__5);
if (v_isShared_3730_ == 0)
{
lean_ctor_set(v___x_3729_, 1, v___x_3732_);
v___x_3734_ = v___x_3729_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3737_, 0, v_mctx_3724_);
lean_ctor_set(v_reuseFailAlloc_3737_, 1, v___x_3732_);
lean_ctor_set(v_reuseFailAlloc_3737_, 2, v_zetaDeltaFVarIds_3725_);
lean_ctor_set(v_reuseFailAlloc_3737_, 3, v_postponed_3726_);
lean_ctor_set(v_reuseFailAlloc_3737_, 4, v_diag_3727_);
v___x_3734_ = v_reuseFailAlloc_3737_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
lean_object* v___x_3735_; lean_object* v___x_3736_; 
v___x_3735_ = lean_st_ref_put(v___y_3704_, v___x_3734_);
v___x_3736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3736_, 0, v___x_3731_);
return v___x_3736_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg___boxed(lean_object* v_env_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_){
_start:
{
lean_object* v_res_3748_; 
v_res_3748_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_env_3744_, v___y_3745_, v___y_3746_);
lean_dec(v___y_3746_);
lean_dec(v___y_3745_);
return v_res_3748_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(lean_object* v_n_3749_, uint8_t v___x_3750_, lean_object* v_as_3751_, size_t v_i_3752_, size_t v_stop_3753_, lean_object* v_b_3754_){
_start:
{
lean_object* v___y_3756_; uint8_t v___x_3760_; 
v___x_3760_ = lean_usize_dec_eq(v_i_3752_, v_stop_3753_);
if (v___x_3760_ == 0)
{
lean_object* v___x_3761_; lean_object* v_index_3762_; lean_object* v_sourceString_3763_; lean_object* v_imports_3764_; lean_object* v_currNamespace_3765_; lean_object* v_openDecls_3766_; lean_object* v_options_3767_; lean_object* v_check_3768_; lean_object* v___x_3770_; uint8_t v_isShared_3771_; uint8_t v_isSharedCheck_3786_; 
v___x_3761_ = lean_array_uget(v_as_3751_, v_i_3752_);
v_index_3762_ = lean_ctor_get(v___x_3761_, 1);
v_sourceString_3763_ = lean_ctor_get(v___x_3761_, 2);
v_imports_3764_ = lean_ctor_get(v___x_3761_, 3);
v_currNamespace_3765_ = lean_ctor_get(v___x_3761_, 4);
v_openDecls_3766_ = lean_ctor_get(v___x_3761_, 5);
v_options_3767_ = lean_ctor_get(v___x_3761_, 6);
v_check_3768_ = lean_ctor_get(v___x_3761_, 7);
v_isSharedCheck_3786_ = !lean_is_exclusive(v___x_3761_);
if (v_isSharedCheck_3786_ == 0)
{
lean_object* v_unused_3787_; 
v_unused_3787_ = lean_ctor_get(v___x_3761_, 0);
lean_dec(v_unused_3787_);
v___x_3770_ = v___x_3761_;
v_isShared_3771_ = v_isSharedCheck_3786_;
goto v_resetjp_3769_;
}
else
{
lean_inc(v_check_3768_);
lean_inc(v_options_3767_);
lean_inc(v_openDecls_3766_);
lean_inc(v_currNamespace_3765_);
lean_inc(v_imports_3764_);
lean_inc(v_sourceString_3763_);
lean_inc(v_index_3762_);
lean_dec(v___x_3761_);
v___x_3770_ = lean_box(0);
v_isShared_3771_ = v_isSharedCheck_3786_;
goto v_resetjp_3769_;
}
v_resetjp_3769_:
{
lean_object* v___x_3772_; lean_object* v_toEnvExtension_3773_; lean_object* v_addEntryFn_3774_; lean_object* v_asyncMode_3775_; uint8_t v_logWrites_3776_; lean_object* v___x_3777_; lean_object* v___x_3779_; 
v___x_3772_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_3773_ = lean_ctor_get(v___x_3772_, 0);
v_addEntryFn_3774_ = lean_ctor_get(v___x_3772_, 3);
v_asyncMode_3775_ = lean_ctor_get(v_toEnvExtension_3773_, 2);
v_logWrites_3776_ = lean_ctor_get_uint8(v_toEnvExtension_3773_, sizeof(void*)*6);
lean_inc(v_n_3749_);
v___x_3777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3777_, 0, v_n_3749_);
if (v_isShared_3771_ == 0)
{
lean_ctor_set(v___x_3770_, 0, v___x_3777_);
v___x_3779_ = v___x_3770_;
goto v_reusejp_3778_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v___x_3777_);
lean_ctor_set(v_reuseFailAlloc_3785_, 1, v_index_3762_);
lean_ctor_set(v_reuseFailAlloc_3785_, 2, v_sourceString_3763_);
lean_ctor_set(v_reuseFailAlloc_3785_, 3, v_imports_3764_);
lean_ctor_set(v_reuseFailAlloc_3785_, 4, v_currNamespace_3765_);
lean_ctor_set(v_reuseFailAlloc_3785_, 5, v_openDecls_3766_);
lean_ctor_set(v_reuseFailAlloc_3785_, 6, v_options_3767_);
lean_ctor_set(v_reuseFailAlloc_3785_, 7, v_check_3768_);
v___x_3779_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3778_;
}
v_reusejp_3778_:
{
lean_object* v___f_3780_; lean_object* v___x_3781_; 
lean_inc(v_addEntryFn_3774_);
v___f_3780_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__1___lam__0), 3, 2);
lean_closure_set(v___f_3780_, 0, v_addEntryFn_3774_);
lean_closure_set(v___f_3780_, 1, v___x_3779_);
v___x_3781_ = lean_box(0);
if (v_logWrites_3776_ == 0)
{
lean_object* v___x_3782_; 
lean_inc_ref(v_toEnvExtension_3773_);
v___x_3782_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3773_, v_b_3754_, v___f_3780_, v_asyncMode_3775_, v___x_3781_, v___x_3750_);
v___y_3756_ = v___x_3782_;
goto v___jp_3755_;
}
else
{
lean_object* v___x_3783_; lean_object* v___x_3784_; 
lean_inc_ref_n(v_toEnvExtension_3773_, 2);
v___x_3783_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_3773_, v_b_3754_);
lean_dec_ref(v_b_3754_);
v___x_3784_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3773_, v___x_3783_, v___f_3780_, v_asyncMode_3775_, v___x_3781_, v___x_3750_);
v___y_3756_ = v___x_3784_;
goto v___jp_3755_;
}
}
}
}
else
{
lean_dec(v_n_3749_);
return v_b_3754_;
}
v___jp_3755_:
{
size_t v___x_3757_; size_t v___x_3758_; 
v___x_3757_ = ((size_t)1ULL);
v___x_3758_ = lean_usize_add(v_i_3752_, v___x_3757_);
v_i_3752_ = v___x_3758_;
v_b_3754_ = v___y_3756_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1___boxed(lean_object* v_n_3788_, lean_object* v___x_3789_, lean_object* v_as_3790_, lean_object* v_i_3791_, lean_object* v_stop_3792_, lean_object* v_b_3793_){
_start:
{
uint8_t v___x_1426__boxed_3794_; size_t v_i_boxed_3795_; size_t v_stop_boxed_3796_; lean_object* v_res_3797_; 
v___x_1426__boxed_3794_ = lean_unbox(v___x_3789_);
v_i_boxed_3795_ = lean_unbox_usize(v_i_3791_);
lean_dec(v_i_3791_);
v_stop_boxed_3796_ = lean_unbox_usize(v_stop_3792_);
lean_dec(v_stop_3792_);
v_res_3797_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(v_n_3788_, v___x_1426__boxed_3794_, v_as_3790_, v_i_boxed_3795_, v_stop_boxed_3796_, v_b_3793_);
lean_dec_ref(v_as_3790_);
return v_res_3797_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(lean_object* v_docs_3798_, lean_object* v_deferred_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_){
_start:
{
lean_object* v___x_3807_; lean_object* v_env_3808_; lean_object* v___x_3809_; uint8_t v___x_3810_; 
v___x_3807_ = lean_st_ref_get(v___y_3805_);
v_env_3808_ = lean_ctor_get(v___x_3807_, 0);
lean_inc_ref(v_env_3808_);
lean_dec(v___x_3807_);
v___x_3809_ = l_Lean_getMainModuleDoc(v_env_3808_);
v___x_3810_ = l_Lean_PersistentArray_isEmpty___redArg(v___x_3809_);
lean_dec_ref(v___x_3809_);
if (v___x_3810_ == 0)
{
lean_object* v___x_3811_; lean_object* v___x_3812_; 
lean_dec_ref(v_docs_3798_);
v___x_3811_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1);
v___x_3812_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_3811_, v___y_3800_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_);
return v___x_3812_;
}
else
{
lean_object* v___x_3813_; lean_object* v_env_3814_; lean_object* v___x_3815_; lean_object* v_size_3816_; lean_object* v___x_3817_; lean_object* v_env_3818_; lean_object* v___x_3819_; 
v___x_3813_ = lean_st_ref_get(v___y_3805_);
v_env_3814_ = lean_ctor_get(v___x_3813_, 0);
lean_inc_ref(v_env_3814_);
lean_dec(v___x_3813_);
v___x_3815_ = l_Lean_getMainVersoModuleDocs(v_env_3814_);
v_size_3816_ = lean_ctor_get(v___x_3815_, 2);
lean_inc(v_size_3816_);
lean_dec_ref(v___x_3815_);
v___x_3817_ = lean_st_ref_get(v___y_3805_);
v_env_3818_ = lean_ctor_get(v___x_3817_, 0);
lean_inc_ref(v_env_3818_);
lean_dec(v___x_3817_);
v___x_3819_ = l_Lean_addVersoModuleDocSnippet(v_env_3818_, v_docs_3798_);
if (lean_obj_tag(v___x_3819_) == 0)
{
lean_object* v_a_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; 
lean_dec(v_size_3816_);
v_a_3820_ = lean_ctor_get(v___x_3819_, 0);
lean_inc(v_a_3820_);
lean_dec_ref_known(v___x_3819_, 1);
v___x_3821_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1);
v___x_3822_ = l_Lean_stringToMessageData(v_a_3820_);
v___x_3823_ = l_Lean_indentD(v___x_3822_);
v___x_3824_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3824_, 0, v___x_3821_);
lean_ctor_set(v___x_3824_, 1, v___x_3823_);
v___x_3825_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_3824_, v___y_3800_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_);
return v___x_3825_;
}
else
{
lean_object* v_a_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; uint8_t v___x_3829_; 
v_a_3826_ = lean_ctor_get(v___x_3819_, 0);
lean_inc(v_a_3826_);
lean_dec_ref_known(v___x_3819_, 1);
v___x_3827_ = lean_unsigned_to_nat(0u);
v___x_3828_ = lean_array_get_size(v_deferred_3799_);
v___x_3829_ = lean_nat_dec_lt(v___x_3827_, v___x_3828_);
if (v___x_3829_ == 0)
{
lean_object* v___x_3830_; 
lean_dec(v_size_3816_);
v___x_3830_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_a_3826_, v___y_3803_, v___y_3805_);
return v___x_3830_;
}
else
{
size_t v___x_3831_; size_t v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; 
v___x_3831_ = ((size_t)0ULL);
v___x_3832_ = lean_usize_of_nat(v___x_3828_);
v___x_3833_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(v_size_3816_, v___x_3810_, v_deferred_3799_, v___x_3831_, v___x_3832_, v_a_3826_);
v___x_3834_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v___x_3833_, v___y_3803_, v___y_3805_);
return v___x_3834_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0___boxed(lean_object* v_docs_3835_, lean_object* v_deferred_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_){
_start:
{
lean_object* v_res_3844_; 
v_res_3844_ = l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(v_docs_3835_, v_deferred_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_);
lean_dec(v___y_3842_);
lean_dec_ref(v___y_3841_);
lean_dec(v___y_3840_);
lean_dec_ref(v___y_3839_);
lean_dec(v___y_3838_);
lean_dec_ref(v___y_3837_);
lean_dec_ref(v_deferred_3836_);
return v_res_3844_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString(lean_object* v_range_3845_, lean_object* v_doc_3846_, lean_object* v_a_3847_, lean_object* v_a_3848_, lean_object* v_a_3849_, lean_object* v_a_3850_, lean_object* v_a_3851_, lean_object* v_a_3852_){
_start:
{
lean_object* v___x_3854_; 
v___x_3854_ = l_Lean_versoModDocString(v_range_3845_, v_doc_3846_, v_a_3847_, v_a_3848_, v_a_3849_, v_a_3850_, v_a_3851_, v_a_3852_);
if (lean_obj_tag(v___x_3854_) == 0)
{
lean_object* v_a_3855_; lean_object* v_fst_3856_; lean_object* v_snd_3857_; lean_object* v___x_3858_; 
v_a_3855_ = lean_ctor_get(v___x_3854_, 0);
lean_inc(v_a_3855_);
lean_dec_ref_known(v___x_3854_, 1);
v_fst_3856_ = lean_ctor_get(v_a_3855_, 0);
lean_inc(v_fst_3856_);
v_snd_3857_ = lean_ctor_get(v_a_3855_, 1);
lean_inc(v_snd_3857_);
lean_dec(v_a_3855_);
v___x_3858_ = l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(v_fst_3856_, v_snd_3857_, v_a_3847_, v_a_3848_, v_a_3849_, v_a_3850_, v_a_3851_, v_a_3852_);
lean_dec(v_snd_3857_);
return v___x_3858_;
}
else
{
lean_object* v_a_3859_; lean_object* v___x_3861_; uint8_t v_isShared_3862_; uint8_t v_isSharedCheck_3866_; 
v_a_3859_ = lean_ctor_get(v___x_3854_, 0);
v_isSharedCheck_3866_ = !lean_is_exclusive(v___x_3854_);
if (v_isSharedCheck_3866_ == 0)
{
v___x_3861_ = v___x_3854_;
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
else
{
lean_inc(v_a_3859_);
lean_dec(v___x_3854_);
v___x_3861_ = lean_box(0);
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
v_resetjp_3860_:
{
lean_object* v___x_3864_; 
if (v_isShared_3862_ == 0)
{
v___x_3864_ = v___x_3861_;
goto v_reusejp_3863_;
}
else
{
lean_object* v_reuseFailAlloc_3865_; 
v_reuseFailAlloc_3865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3865_, 0, v_a_3859_);
v___x_3864_ = v_reuseFailAlloc_3865_;
goto v_reusejp_3863_;
}
v_reusejp_3863_:
{
return v___x_3864_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString___boxed(lean_object* v_range_3867_, lean_object* v_doc_3868_, lean_object* v_a_3869_, lean_object* v_a_3870_, lean_object* v_a_3871_, lean_object* v_a_3872_, lean_object* v_a_3873_, lean_object* v_a_3874_, lean_object* v_a_3875_){
_start:
{
lean_object* v_res_3876_; 
v_res_3876_ = l_Lean_addVersoModDocString(v_range_3867_, v_doc_3868_, v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_, v_a_3873_, v_a_3874_);
lean_dec(v_a_3874_);
lean_dec_ref(v_a_3873_);
lean_dec(v_a_3872_);
lean_dec_ref(v_a_3871_);
lean_dec(v_a_3870_);
lean_dec_ref(v_a_3869_);
lean_dec(v_doc_3868_);
return v_res_3876_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(lean_object* v_env_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_){
_start:
{
lean_object* v___x_3885_; 
v___x_3885_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_env_3877_, v___y_3881_, v___y_3883_);
return v___x_3885_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___boxed(lean_object* v_env_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_){
_start:
{
lean_object* v_res_3894_; 
v_res_3894_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(v_env_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_, v___y_3892_);
lean_dec(v___y_3892_);
lean_dec_ref(v___y_3891_);
lean_dec(v___y_3890_);
lean_dec_ref(v___y_3889_);
lean_dec(v___y_3888_);
lean_dec_ref(v___y_3887_);
return v_res_3894_;
}
}
lean_object* runtime_initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_DeferredCheck(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Parser(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_DeferredCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* initialize_Lean_DocString_DeferredCheck(uint8_t builtin);
lean_object* initialize_Lean_DocString_Types(uint8_t builtin);
lean_object* initialize_Lean_DocString_Parser(uint8_t builtin);
lean_object* initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_DeferredCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DocString_Add(builtin);
}
#ifdef __cplusplus
}
#endif
