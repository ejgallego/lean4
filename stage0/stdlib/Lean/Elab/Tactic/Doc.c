// Lean compiler output
// Module: Lean.Elab.Tactic.Doc
// Imports: import Lean.DocString import Lean.DocString.Add import Lean.Elab.DocString public import Lean.Elab.Command public import Lean.Parser.Tactic.Doc
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
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isVersoDocComment(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_parseVersoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getVersoBlocks(lean_object*);
lean_object* l_Lean_Doc_elabBlocks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_DocM_execForModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Doc_joinInlines(lean_object*);
lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trim(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_withRendererFallback(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_codeBlockLines(lean_object*);
lean_object* l_Lean_Doc_joinBlocks(lean_object*);
lean_object* l_Lean_Doc_prefixListLines(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Doc_prefixLines(lean_object*, lean_object*);
lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_MarkdownM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_Doc_tacticDocExtExt;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_Tactic_Doc_isTactic(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Parser_Tactic_Doc_alternativeOfTactic(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtensionState___redArg(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_withExprHover(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_Doc_tacticNameExt;
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_constants(lean_object*);
lean_object* l_Lean_ConstMap_find_x3f_x27(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_Level_param___override(lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_Doc_tacticTagExt;
extern lean_object* l_Lean_Parser_ParserExtension_instInhabitedState_default;
extern lean_object* l_Lean_Parser_parserExtension;
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_nestD(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_findDocString_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Doc_getTacticExtensions(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__0_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__1_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__2 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__2_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "**"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__3 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__3_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__3_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__4 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__4_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__5 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__5_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "$$"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__6 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__6_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__7 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__7_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__7_value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__7_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__8 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__8_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]("};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__11 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__11_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__12 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__12_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__9 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__9_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__9_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__10 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__10_value;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__13;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__14 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__14_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[^"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__15 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__15_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__16 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__16_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "!["};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__17 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__17_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___boxed__const__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___lam__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__9(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "* "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "  "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ". "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__10___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__10___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__10(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___closed__1_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___closed__1_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "> "};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___closed__0_value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___closed__0_value)} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___closed__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__7(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___lam__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__4(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__17___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__0 = (const lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__1;
static const lean_string_object l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__2 = (const lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__2_value;
static const lean_string_object l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__3 = (const lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__3_value;
static const lean_string_object l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__4 = (const lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__4_value;
static const lean_string_object l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "commentBody"};
static const lean_object* l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__5 = (const lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "tactic_extension"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value),LEAN_SCALAR_PTR_LITERAL(226, 244, 145, 122, 23, 135, 199, 68)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Malformed tactic extension command"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "` is not a tactic"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "` is an alternative form of `"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Missing documentation comment"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__14_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__15;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "elabTacticExtension"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(197, 62, 21, 167, 211, 43, 164, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(128, 44, 144, 107, 80, 40, 109, 178)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__0_value),((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__1_value),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(47) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(66) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__3_value),((lean_object*)(((size_t)(47) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__4_value),((lean_object*)(((size_t)(66) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Malformed `register_tactic_tag` command"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__2_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "register_tactic_tag"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__4_value),LEAN_SCALAR_PTR_LITERAL(207, 55, 57, 11, 65, 76, 175, 2)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "elabRegisterTacticTag"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(197, 62, 21, 167, 211, 43, 164, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 30, 89, 153, 147, 186, 30, 23)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__0_value),((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__1_value),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(71) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__3_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__4_value),((lean_object*)(((size_t)(71) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(158, 68, 185, 128, 48, 210, 24, 186)}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__7_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__3_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__4_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__8_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__0_value)} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1;
static const lean_closure_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_param___override, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8_spec__14(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__0_value;
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "• "};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__1 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__1_value;
static lean_once_cell_t l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2;
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 4, .m_data = " — \""};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__3 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__3_value;
static lean_once_cell_t l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4;
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__5 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__5_value;
static lean_once_cell_t l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6;
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__7 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__7_value;
static const lean_ctor_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__7_value)}};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__8 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__8_value;
static lean_once_cell_t l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Available tags: "};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "printTacTags"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 6, 105, 20, 120, 144, 238, 207)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "elabPrintTacTags"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(197, 62, 21, 167, 211, 43, 164, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(202, 38, 126, 200, 28, 172, 117, 128)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "Displays all available tactic tags, with documentation."};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(98) << 1) | 1)),((lean_object*)(((size_t)(37) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(130) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__0_value),((lean_object*)(((size_t)(37) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__1_value),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(98) << 1) | 1)),((lean_object*)(((size_t)(41) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(98) << 1) | 1)),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__3_value),((lean_object*)(((size_t)(41) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__4_value),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Doc_allTacticDocs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_allTacticDocs___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__13(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_28_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__10));
v___x_29_ = lean_unsigned_to_nat(3u);
v___x_30_ = lean_mk_empty_array_with_capacity(v___x_29_);
v___x_31_ = lean_array_push(v___x_30_, v___x_28_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___boxed(lean_object* v_x_36_, lean_object* v_x_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2(v_x_36_, v_x_37_, v_a_38_, v_a_39_, v_a_40_);
lean_dec(v_a_40_);
lean_dec_ref(v_a_39_);
lean_dec(v_a_38_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___lam__0___boxed(lean_object* v_x_45_, lean_object* v_sz_46_, lean_object* v___x_47_, lean_object* v_content_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_){
_start:
{
size_t v_sz_boxed_53_; size_t v___x_6066__boxed_54_; lean_object* v_res_55_; 
v_sz_boxed_53_ = lean_unbox_usize(v_sz_46_);
lean_dec(v_sz_46_);
v___x_6066__boxed_54_ = lean_unbox_usize(v___x_47_);
lean_dec(v___x_47_);
v_res_55_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___lam__0(v_x_45_, v_sz_boxed_53_, v___x_6066__boxed_54_, v_content_48_, v___y_49_, v___y_50_, v___y_51_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
lean_dec(v___y_49_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2(lean_object* v_x_56_, lean_object* v_x_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_){
_start:
{
lean_object* v_pieces_63_; lean_object* v_pieces_67_; 
switch(lean_obj_tag(v_x_57_))
{
case 0:
{
lean_object* v_string_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
lean_dec_ref(v_x_56_);
v_string_70_ = lean_ctor_get(v_x_57_, 0);
lean_inc_ref(v_string_70_);
lean_dec_ref_known(v_x_57_, 1);
v___x_71_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(v_string_70_);
lean_dec_ref(v_string_70_);
v___x_72_ = lean_unsigned_to_nat(1u);
v___x_73_ = lean_mk_empty_array_with_capacity(v___x_72_);
v___x_74_ = lean_array_push(v___x_73_, v___x_71_);
v___x_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
return v___x_75_;
}
case 1:
{
lean_object* v_content_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_127_; 
v_content_76_ = lean_ctor_get(v_x_57_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v_x_57_);
if (v_isSharedCheck_127_ == 0)
{
v___x_78_ = v_x_57_;
v_isShared_79_ = v_isSharedCheck_127_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_content_76_);
lean_dec(v_x_57_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_127_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_81_; 
if (v_isShared_79_ == 0)
{
lean_ctor_set_tag(v___x_78_, 9);
v___x_81_ = v___x_78_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_content_76_);
v___x_81_ = v_reuseFailAlloc_126_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
lean_object* v___x_82_; lean_object* v_snd_83_; lean_object* v_fst_84_; lean_object* v_fst_85_; lean_object* v_snd_86_; lean_object* v_pieces_88_; uint8_t v_inEmph_96_; uint8_t v_inBold_97_; uint8_t v_inLink_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_125_; 
v___x_82_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trim(lean_box(0), v___x_81_);
v_snd_83_ = lean_ctor_get(v___x_82_, 1);
lean_inc(v_snd_83_);
v_fst_84_ = lean_ctor_get(v___x_82_, 0);
lean_inc(v_fst_84_);
lean_dec_ref(v___x_82_);
v_fst_85_ = lean_ctor_get(v_snd_83_, 0);
lean_inc(v_fst_85_);
v_snd_86_ = lean_ctor_get(v_snd_83_, 1);
lean_inc(v_snd_86_);
lean_dec(v_snd_83_);
v_inEmph_96_ = lean_ctor_get_uint8(v_x_56_, 0);
v_inBold_97_ = lean_ctor_get_uint8(v_x_56_, 1);
v_inLink_98_ = lean_ctor_get_uint8(v_x_56_, 2);
v_isSharedCheck_125_ = !lean_is_exclusive(v_x_56_);
if (v_isSharedCheck_125_ == 0)
{
v___x_100_ = v_x_56_;
v_isShared_101_ = v_isSharedCheck_125_;
goto v_resetjp_99_;
}
else
{
lean_dec(v_x_56_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_125_;
goto v_resetjp_99_;
}
v___jp_87_:
{
lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v___x_91_; 
v___x_89_ = lean_string_utf8_byte_size(v_snd_86_);
v___x_90_ = lean_unsigned_to_nat(0u);
v___x_91_ = lean_nat_dec_eq(v___x_89_, v___x_90_);
if (v___x_91_ == 0)
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_92_ = lean_unsigned_to_nat(1u);
v___x_93_ = lean_mk_empty_array_with_capacity(v___x_92_);
v___x_94_ = lean_array_push(v___x_93_, v_snd_86_);
v___x_95_ = lean_array_push(v_pieces_88_, v___x_94_);
v_pieces_67_ = v___x_95_;
goto v___jp_66_;
}
else
{
lean_dec(v_snd_86_);
v_pieces_67_ = v_pieces_88_;
goto v___jp_66_;
}
}
v_resetjp_99_:
{
uint8_t v___x_102_; lean_object* v___x_104_; 
v___x_102_ = 1;
if (v_isShared_101_ == 0)
{
v___x_104_ = v___x_100_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_124_, 1, v_inBold_97_);
lean_ctor_set_uint8(v_reuseFailAlloc_124_, 2, v_inLink_98_);
v___x_104_ = v_reuseFailAlloc_124_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
lean_object* v___x_105_; 
lean_ctor_set_uint8(v___x_104_, 0, v___x_102_);
v___x_105_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2(v___x_104_, v_fst_85_, v_a_58_, v_a_59_, v_a_60_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v_pieces_108_; lean_object* v_pieces_113_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; uint8_t v___x_119_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_a_106_);
lean_dec_ref_known(v___x_105_, 1);
v___x_116_ = lean_unsigned_to_nat(0u);
v___x_117_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__2));
v___x_118_ = lean_string_utf8_byte_size(v_fst_84_);
v___x_119_ = lean_nat_dec_eq(v___x_118_, v___x_116_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_120_ = lean_unsigned_to_nat(1u);
v___x_121_ = lean_mk_empty_array_with_capacity(v___x_120_);
v___x_122_ = lean_array_push(v___x_121_, v_fst_84_);
v___x_123_ = lean_array_push(v___x_117_, v___x_122_);
v_pieces_113_ = v___x_123_;
goto v___jp_112_;
}
else
{
lean_dec(v_fst_84_);
v_pieces_113_ = v___x_117_;
goto v___jp_112_;
}
v___jp_107_:
{
lean_object* v___x_109_; 
v___x_109_ = lean_array_push(v_pieces_108_, v_a_106_);
if (v_inEmph_96_ == 0)
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__1));
v___x_111_ = lean_array_push(v___x_109_, v___x_110_);
v_pieces_88_ = v___x_111_;
goto v___jp_87_;
}
else
{
v_pieces_88_ = v___x_109_;
goto v___jp_87_;
}
}
v___jp_112_:
{
if (v_inEmph_96_ == 0)
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__1));
v___x_115_ = lean_array_push(v_pieces_113_, v___x_114_);
v_pieces_108_ = v___x_115_;
goto v___jp_107_;
}
else
{
v_pieces_108_ = v_pieces_113_;
goto v___jp_107_;
}
}
}
else
{
lean_dec(v_snd_86_);
lean_dec(v_fst_84_);
return v___x_105_;
}
}
}
}
}
}
case 2:
{
lean_object* v_content_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_179_; 
v_content_128_ = lean_ctor_get(v_x_57_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v_x_57_);
if (v_isSharedCheck_179_ == 0)
{
v___x_130_ = v_x_57_;
v_isShared_131_ = v_isSharedCheck_179_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_content_128_);
lean_dec(v_x_57_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_179_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_133_; 
if (v_isShared_131_ == 0)
{
lean_ctor_set_tag(v___x_130_, 9);
v___x_133_ = v___x_130_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_content_128_);
v___x_133_ = v_reuseFailAlloc_178_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
lean_object* v___x_134_; lean_object* v_snd_135_; lean_object* v_fst_136_; lean_object* v_fst_137_; lean_object* v_snd_138_; lean_object* v_pieces_140_; uint8_t v_inEmph_148_; uint8_t v_inBold_149_; uint8_t v_inLink_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_177_; 
v___x_134_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trim(lean_box(0), v___x_133_);
v_snd_135_ = lean_ctor_get(v___x_134_, 1);
lean_inc(v_snd_135_);
v_fst_136_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_fst_136_);
lean_dec_ref(v___x_134_);
v_fst_137_ = lean_ctor_get(v_snd_135_, 0);
lean_inc(v_fst_137_);
v_snd_138_ = lean_ctor_get(v_snd_135_, 1);
lean_inc(v_snd_138_);
lean_dec(v_snd_135_);
v_inEmph_148_ = lean_ctor_get_uint8(v_x_56_, 0);
v_inBold_149_ = lean_ctor_get_uint8(v_x_56_, 1);
v_inLink_150_ = lean_ctor_get_uint8(v_x_56_, 2);
v_isSharedCheck_177_ = !lean_is_exclusive(v_x_56_);
if (v_isSharedCheck_177_ == 0)
{
v___x_152_ = v_x_56_;
v_isShared_153_ = v_isSharedCheck_177_;
goto v_resetjp_151_;
}
else
{
lean_dec(v_x_56_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_177_;
goto v_resetjp_151_;
}
v___jp_139_:
{
lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; 
v___x_141_ = lean_string_utf8_byte_size(v_snd_138_);
v___x_142_ = lean_unsigned_to_nat(0u);
v___x_143_ = lean_nat_dec_eq(v___x_141_, v___x_142_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_144_ = lean_unsigned_to_nat(1u);
v___x_145_ = lean_mk_empty_array_with_capacity(v___x_144_);
v___x_146_ = lean_array_push(v___x_145_, v_snd_138_);
v___x_147_ = lean_array_push(v_pieces_140_, v___x_146_);
v_pieces_63_ = v___x_147_;
goto v___jp_62_;
}
else
{
lean_dec(v_snd_138_);
v_pieces_63_ = v_pieces_140_;
goto v___jp_62_;
}
}
v_resetjp_151_:
{
uint8_t v___x_154_; lean_object* v___x_156_; 
v___x_154_ = 1;
if (v_isShared_153_ == 0)
{
v___x_156_ = v___x_152_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_176_, 0, v_inEmph_148_);
lean_ctor_set_uint8(v_reuseFailAlloc_176_, 2, v_inLink_150_);
v___x_156_ = v_reuseFailAlloc_176_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
lean_object* v___x_157_; 
lean_ctor_set_uint8(v___x_156_, 1, v___x_154_);
v___x_157_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2(v___x_156_, v_fst_137_, v_a_58_, v_a_59_, v_a_60_);
if (lean_obj_tag(v___x_157_) == 0)
{
lean_object* v_a_158_; lean_object* v_pieces_160_; lean_object* v_pieces_165_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; uint8_t v___x_171_; 
v_a_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc(v_a_158_);
lean_dec_ref_known(v___x_157_, 1);
v___x_168_ = lean_unsigned_to_nat(0u);
v___x_169_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__2));
v___x_170_ = lean_string_utf8_byte_size(v_fst_136_);
v___x_171_ = lean_nat_dec_eq(v___x_170_, v___x_168_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_172_ = lean_unsigned_to_nat(1u);
v___x_173_ = lean_mk_empty_array_with_capacity(v___x_172_);
v___x_174_ = lean_array_push(v___x_173_, v_fst_136_);
v___x_175_ = lean_array_push(v___x_169_, v___x_174_);
v_pieces_165_ = v___x_175_;
goto v___jp_164_;
}
else
{
lean_dec(v_fst_136_);
v_pieces_165_ = v___x_169_;
goto v___jp_164_;
}
v___jp_159_:
{
lean_object* v___x_161_; 
v___x_161_ = lean_array_push(v_pieces_160_, v_a_158_);
if (v_inBold_149_ == 0)
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__4));
v___x_163_ = lean_array_push(v___x_161_, v___x_162_);
v_pieces_140_ = v___x_163_;
goto v___jp_139_;
}
else
{
v_pieces_140_ = v___x_161_;
goto v___jp_139_;
}
}
v___jp_164_:
{
if (v_inBold_149_ == 0)
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__4));
v___x_167_ = lean_array_push(v_pieces_165_, v___x_166_);
v_pieces_160_ = v___x_167_;
goto v___jp_159_;
}
else
{
v_pieces_160_ = v_pieces_165_;
goto v___jp_159_;
}
}
}
else
{
lean_dec(v_snd_138_);
lean_dec(v_fst_136_);
return v___x_157_;
}
}
}
}
}
}
case 3:
{
lean_object* v_string_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
lean_dec_ref(v_x_56_);
v_string_180_ = lean_ctor_get(v_x_57_, 0);
lean_inc_ref(v_string_180_);
lean_dec_ref_known(v_x_57_, 1);
v___x_181_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode(v_string_180_);
v___x_182_ = lean_unsigned_to_nat(1u);
v___x_183_ = lean_mk_empty_array_with_capacity(v___x_182_);
v___x_184_ = lean_array_push(v___x_183_, v___x_181_);
v___x_185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
return v___x_185_;
}
case 4:
{
uint8_t v_mode_186_; 
lean_dec_ref(v_x_56_);
v_mode_186_ = lean_ctor_get_uint8(v_x_57_, sizeof(void*)*1);
if (v_mode_186_ == 0)
{
lean_object* v_string_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v_string_187_ = lean_ctor_get(v_x_57_, 0);
lean_inc_ref(v_string_187_);
lean_dec_ref_known(v_x_57_, 1);
v___x_188_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__5));
v___x_189_ = lean_string_append(v___x_188_, v_string_187_);
lean_dec_ref(v_string_187_);
v___x_190_ = lean_string_append(v___x_189_, v___x_188_);
v___x_191_ = lean_unsigned_to_nat(1u);
v___x_192_ = lean_mk_empty_array_with_capacity(v___x_191_);
v___x_193_ = lean_array_push(v___x_192_, v___x_190_);
v___x_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
return v___x_194_;
}
else
{
lean_object* v_string_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_string_195_ = lean_ctor_get(v_x_57_, 0);
lean_inc_ref(v_string_195_);
lean_dec_ref_known(v_x_57_, 1);
v___x_196_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__6));
v___x_197_ = lean_string_append(v___x_196_, v_string_195_);
lean_dec_ref(v_string_195_);
v___x_198_ = lean_string_append(v___x_197_, v___x_196_);
v___x_199_ = lean_unsigned_to_nat(1u);
v___x_200_ = lean_mk_empty_array_with_capacity(v___x_199_);
v___x_201_ = lean_array_push(v___x_200_, v___x_198_);
v___x_202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
return v___x_202_;
}
}
case 5:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
lean_dec_ref_known(v_x_57_, 1);
lean_dec_ref(v_x_56_);
v___x_203_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__8));
v___x_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
return v___x_204_;
}
case 6:
{
uint8_t v_inLink_205_; 
v_inLink_205_ = lean_ctor_get_uint8(v_x_56_, 2);
if (v_inLink_205_ == 0)
{
lean_object* v_content_206_; lean_object* v_url_207_; uint8_t v_inEmph_208_; uint8_t v_inBold_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_238_; 
v_content_206_ = lean_ctor_get(v_x_57_, 0);
lean_inc_ref(v_content_206_);
v_url_207_ = lean_ctor_get(v_x_57_, 1);
lean_inc_ref(v_url_207_);
lean_dec_ref_known(v_x_57_, 2);
v_inEmph_208_ = lean_ctor_get_uint8(v_x_56_, 0);
v_inBold_209_ = lean_ctor_get_uint8(v_x_56_, 1);
v_isSharedCheck_238_ = !lean_is_exclusive(v_x_56_);
if (v_isSharedCheck_238_ == 0)
{
v___x_211_ = v_x_56_;
v_isShared_212_ = v_isSharedCheck_238_;
goto v_resetjp_210_;
}
else
{
lean_dec(v_x_56_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_238_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
uint8_t v___x_213_; lean_object* v___x_215_; 
v___x_213_ = 1;
if (v_isShared_212_ == 0)
{
v___x_215_ = v___x_211_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 0, v_inEmph_208_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 1, v_inBold_209_);
v___x_215_ = v_reuseFailAlloc_237_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
lean_ctor_set_uint8(v___x_215_, 2, v___x_213_);
v___x_216_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_216_, 0, v_content_206_);
v___x_217_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2(v___x_215_, v___x_216_, v_a_58_, v_a_59_, v_a_60_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_236_; 
v_a_218_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_236_ == 0)
{
v___x_220_ = v___x_217_;
v_isShared_221_ = v_isSharedCheck_236_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_217_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_236_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_234_; 
v___x_222_ = lean_unsigned_to_nat(1u);
v___x_223_ = lean_mk_empty_array_with_capacity(v___x_222_);
v___x_224_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__11));
v___x_225_ = lean_string_append(v___x_224_, v_url_207_);
lean_dec_ref(v_url_207_);
v___x_226_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__12));
v___x_227_ = lean_string_append(v___x_225_, v___x_226_);
v___x_228_ = lean_array_push(v___x_223_, v___x_227_);
v___x_229_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__13, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__13_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__13);
v___x_230_ = lean_array_push(v___x_229_, v_a_218_);
v___x_231_ = lean_array_push(v___x_230_, v___x_228_);
v___x_232_ = l_Lean_Doc_joinInlines(v___x_231_);
lean_dec_ref(v___x_231_);
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 0, v___x_232_);
v___x_234_ = v___x_220_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_232_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
else
{
lean_dec_ref(v_url_207_);
return v___x_217_;
}
}
}
}
else
{
lean_object* v_content_239_; size_t v_sz_240_; size_t v___x_241_; lean_object* v___x_242_; 
v_content_239_ = lean_ctor_get(v_x_57_, 0);
lean_inc_ref(v_content_239_);
lean_dec_ref_known(v_x_57_, 2);
v_sz_240_ = lean_array_size(v_content_239_);
v___x_241_ = ((size_t)0ULL);
v___x_242_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2_spec__4(v_x_56_, v_sz_240_, v___x_241_, v_content_239_, v_a_58_, v_a_59_, v_a_60_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_251_; 
v_a_243_ = lean_ctor_get(v___x_242_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_251_ == 0)
{
v___x_245_ = v___x_242_;
v_isShared_246_ = v_isSharedCheck_251_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_a_243_);
lean_dec(v___x_242_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_251_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_247_ = l_Lean_Doc_joinInlines(v_a_243_);
lean_dec(v_a_243_);
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 0, v___x_247_);
v___x_249_ = v___x_245_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_247_);
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
lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_259_; 
v_a_252_ = lean_ctor_get(v___x_242_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_259_ == 0)
{
v___x_254_ = v___x_242_;
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_dec(v___x_242_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_255_ == 0)
{
v___x_257_ = v___x_254_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_a_252_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
}
}
case 7:
{
lean_object* v_name_260_; lean_object* v_content_261_; size_t v_sz_262_; size_t v___x_263_; lean_object* v___x_264_; 
v_name_260_ = lean_ctor_get(v_x_57_, 0);
lean_inc_ref(v_name_260_);
v_content_261_ = lean_ctor_get(v_x_57_, 1);
lean_inc_ref(v_content_261_);
lean_dec_ref_known(v_x_57_, 2);
v_sz_262_ = lean_array_size(v_content_261_);
v___x_263_ = ((size_t)0ULL);
v___x_264_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2_spec__4(v_x_56_, v_sz_262_, v___x_263_, v_content_261_, v_a_58_, v_a_59_, v_a_60_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v_a_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v_a_265_ = lean_ctor_get(v___x_264_, 0);
lean_inc(v_a_265_);
lean_dec_ref_known(v___x_264_, 1);
v___x_266_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__14));
v___x_267_ = l_Lean_Doc_joinInlines(v_a_265_);
lean_dec(v_a_265_);
v___x_268_ = lean_array_to_list(v___x_267_);
v___x_269_ = l_String_intercalate(v___x_266_, v___x_268_);
lean_inc_ref(v_name_260_);
v___x_270_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote(v_name_260_, v___x_269_, v_a_58_, v_a_59_, v_a_60_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_284_; 
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_270_);
if (v_isSharedCheck_284_ == 0)
{
lean_object* v_unused_285_; 
v_unused_285_ = lean_ctor_get(v___x_270_, 0);
lean_dec(v_unused_285_);
v___x_272_ = v___x_270_;
v_isShared_273_ = v_isSharedCheck_284_;
goto v_resetjp_271_;
}
else
{
lean_dec(v___x_270_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_284_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_282_; 
v___x_274_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__15));
v___x_275_ = lean_string_append(v___x_274_, v_name_260_);
lean_dec_ref(v_name_260_);
v___x_276_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__16));
v___x_277_ = lean_string_append(v___x_275_, v___x_276_);
v___x_278_ = lean_unsigned_to_nat(1u);
v___x_279_ = lean_mk_empty_array_with_capacity(v___x_278_);
v___x_280_ = lean_array_push(v___x_279_, v___x_277_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 0, v___x_280_);
v___x_282_ = v___x_272_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_280_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
else
{
lean_object* v_a_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_293_; 
lean_dec_ref(v_name_260_);
v_a_286_ = lean_ctor_get(v___x_270_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_270_);
if (v_isSharedCheck_293_ == 0)
{
v___x_288_ = v___x_270_;
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v___x_270_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_291_; 
if (v_isShared_289_ == 0)
{
v___x_291_ = v___x_288_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_a_286_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
}
else
{
lean_object* v_a_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_301_; 
lean_dec_ref(v_name_260_);
v_a_294_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_301_ == 0)
{
v___x_296_ = v___x_264_;
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_a_294_);
lean_dec(v___x_264_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_299_; 
if (v_isShared_297_ == 0)
{
v___x_299_ = v___x_296_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_a_294_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
}
case 8:
{
lean_object* v_alt_302_; lean_object* v_url_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
lean_dec_ref(v_x_56_);
v_alt_302_ = lean_ctor_get(v_x_57_, 0);
lean_inc_ref(v_alt_302_);
v_url_303_ = lean_ctor_get(v_x_57_, 1);
lean_inc_ref(v_url_303_);
lean_dec_ref_known(v_x_57_, 2);
v___x_304_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__17));
v___x_305_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(v_alt_302_);
lean_dec_ref(v_alt_302_);
v___x_306_ = lean_string_append(v___x_304_, v___x_305_);
lean_dec_ref(v___x_305_);
v___x_307_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__11));
v___x_308_ = lean_string_append(v___x_306_, v___x_307_);
v___x_309_ = lean_string_append(v___x_308_, v_url_303_);
lean_dec_ref(v_url_303_);
v___x_310_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__12));
v___x_311_ = lean_string_append(v___x_309_, v___x_310_);
v___x_312_ = lean_unsigned_to_nat(1u);
v___x_313_ = lean_mk_empty_array_with_capacity(v___x_312_);
v___x_314_ = lean_array_push(v___x_313_, v___x_311_);
v___x_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
return v___x_315_;
}
case 9:
{
lean_object* v_content_316_; size_t v_sz_317_; size_t v___x_318_; lean_object* v___x_319_; 
v_content_316_ = lean_ctor_get(v_x_57_, 0);
lean_inc_ref(v_content_316_);
lean_dec_ref_known(v_x_57_, 1);
v_sz_317_ = lean_array_size(v_content_316_);
v___x_318_ = ((size_t)0ULL);
v___x_319_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2_spec__4(v_x_56_, v_sz_317_, v___x_318_, v_content_316_, v_a_58_, v_a_59_, v_a_60_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_328_; 
v_a_320_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_328_ == 0)
{
v___x_322_ = v___x_319_;
v_isShared_323_ = v_isSharedCheck_328_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_319_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_328_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_324_; lean_object* v___x_326_; 
v___x_324_ = l_Lean_Doc_joinInlines(v_a_320_);
lean_dec(v_a_320_);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 0, v___x_324_);
v___x_326_ = v___x_322_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v___x_324_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
else
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_336_; 
v_a_329_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_336_ == 0)
{
v___x_331_ = v___x_319_;
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_319_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_334_; 
if (v_isShared_332_ == 0)
{
v___x_334_ = v___x_331_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_a_329_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
}
default: 
{
lean_object* v_container_337_; 
v_container_337_ = lean_ctor_get(v_x_57_, 0);
if (lean_obj_tag(v_container_337_) == 0)
{
lean_object* v_content_338_; lean_object* v_val_339_; lean_object* v___x_340_; size_t v_sz_341_; size_t v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v_fallback_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
lean_inc_ref(v_container_337_);
v_content_338_ = lean_ctor_get(v_x_57_, 1);
lean_inc_ref_n(v_content_338_, 2);
lean_dec_ref_known(v_x_57_, 2);
v_val_339_ = lean_ctor_get(v_container_337_, 0);
lean_inc(v_val_339_);
lean_dec_ref_known(v_container_337_, 1);
lean_inc_ref_n(v_x_56_, 2);
v___x_340_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___boxed), 6, 1);
lean_closure_set(v___x_340_, 0, v_x_56_);
v_sz_341_ = lean_array_size(v_content_338_);
v___x_342_ = ((size_t)0ULL);
v___x_343_ = lean_box_usize(v_sz_341_);
v___x_344_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___boxed__const__1));
v_fallback_345_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___lam__0___boxed), 8, 4);
lean_closure_set(v_fallback_345_, 0, v_x_56_);
lean_closure_set(v_fallback_345_, 1, v___x_343_);
lean_closure_set(v_fallback_345_, 2, v___x_344_);
lean_closure_set(v_fallback_345_, 3, v_content_338_);
v___x_346_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_339_);
v___x_347_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe(v___x_346_, v_a_59_, v_a_60_);
lean_dec(v___x_346_);
if (lean_obj_tag(v___x_347_) == 0)
{
lean_object* v_a_348_; 
v_a_348_ = lean_ctor_get(v___x_347_, 0);
lean_inc(v_a_348_);
lean_dec_ref_known(v___x_347_, 1);
if (lean_obj_tag(v_a_348_) == 0)
{
lean_object* v___x_349_; 
lean_dec_ref(v_fallback_345_);
lean_dec_ref(v___x_340_);
lean_dec(v_val_339_);
v___x_349_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2_spec__4(v_x_56_, v_sz_341_, v___x_342_, v_content_338_, v_a_58_, v_a_59_, v_a_60_);
if (lean_obj_tag(v___x_349_) == 0)
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_358_; 
v_a_350_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_358_ == 0)
{
v___x_352_ = v___x_349_;
v_isShared_353_ = v_isSharedCheck_358_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_349_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_358_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_354_; lean_object* v___x_356_; 
v___x_354_ = l_Lean_Doc_joinInlines(v_a_350_);
lean_dec(v_a_350_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 0, v___x_354_);
v___x_356_ = v___x_352_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___x_354_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
}
else
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_366_; 
v_a_359_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_366_ == 0)
{
v___x_361_ = v___x_349_;
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_349_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_364_; 
if (v_isShared_362_ == 0)
{
v___x_364_ = v___x_361_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_359_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
else
{
lean_object* v_val_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
lean_dec_ref(v_x_56_);
v_val_367_ = lean_ctor_get(v_a_348_, 0);
lean_inc(v_val_367_);
lean_dec_ref_known(v_a_348_, 1);
v___x_368_ = lean_apply_3(v_val_367_, v___x_340_, v_val_339_, v_content_338_);
v___x_369_ = l_Lean_Doc_withRendererFallback(v_fallback_345_, v___x_368_, v_a_58_, v_a_59_, v_a_60_);
return v___x_369_;
}
}
else
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_377_; 
lean_dec_ref(v_fallback_345_);
lean_dec_ref(v___x_340_);
lean_dec(v_val_339_);
lean_dec_ref(v_content_338_);
lean_dec_ref(v_x_56_);
v_a_370_ = lean_ctor_get(v___x_347_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v___x_347_);
if (v_isSharedCheck_377_ == 0)
{
v___x_372_ = v___x_347_;
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_347_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_375_; 
if (v_isShared_373_ == 0)
{
v___x_375_ = v___x_372_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_a_370_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
}
}
else
{
lean_object* v_content_378_; size_t v_sz_379_; size_t v___x_380_; lean_object* v___x_381_; 
v_content_378_ = lean_ctor_get(v_x_57_, 1);
lean_inc_ref(v_content_378_);
lean_dec_ref_known(v_x_57_, 2);
v_sz_379_ = lean_array_size(v_content_378_);
v___x_380_ = ((size_t)0ULL);
v___x_381_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2_spec__4(v_x_56_, v_sz_379_, v___x_380_, v_content_378_, v_a_58_, v_a_59_, v_a_60_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_object* v_a_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_390_; 
v_a_382_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_390_ == 0)
{
v___x_384_ = v___x_381_;
v_isShared_385_ = v_isSharedCheck_390_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_a_382_);
lean_dec(v___x_381_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_390_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_386_ = l_Lean_Doc_joinInlines(v_a_382_);
lean_dec(v_a_382_);
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 0, v___x_386_);
v___x_388_ = v___x_384_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_386_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
else
{
lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_398_; 
v_a_391_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_398_ == 0)
{
v___x_393_ = v___x_381_;
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_dec(v___x_381_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_396_; 
if (v_isShared_394_ == 0)
{
v___x_396_ = v___x_393_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_a_391_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
}
}
}
v___jp_62_:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = l_Lean_Doc_joinInlines(v_pieces_63_);
lean_dec_ref(v_pieces_63_);
v___x_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
return v___x_65_;
}
v___jp_66_:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = l_Lean_Doc_joinInlines(v_pieces_67_);
lean_dec_ref(v_pieces_67_);
v___x_69_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
return v___x_69_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2_spec__4(lean_object* v_x_399_, size_t v_sz_400_, size_t v_i_401_, lean_object* v_bs_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
uint8_t v___x_407_; 
v___x_407_ = lean_usize_dec_lt(v_i_401_, v_sz_400_);
if (v___x_407_ == 0)
{
lean_object* v___x_408_; 
lean_dec_ref(v_x_399_);
v___x_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_408_, 0, v_bs_402_);
return v___x_408_;
}
else
{
lean_object* v_v_409_; lean_object* v___x_410_; lean_object* v_bs_x27_411_; lean_object* v___x_412_; 
v_v_409_ = lean_array_uget(v_bs_402_, v_i_401_);
v___x_410_ = lean_unsigned_to_nat(0u);
v_bs_x27_411_ = lean_array_uset(v_bs_402_, v_i_401_, v___x_410_);
lean_inc_ref(v_x_399_);
v___x_412_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2(v_x_399_, v_v_409_, v___y_403_, v___y_404_, v___y_405_);
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_413_; size_t v___x_414_; size_t v___x_415_; lean_object* v___x_416_; 
v_a_413_ = lean_ctor_get(v___x_412_, 0);
lean_inc(v_a_413_);
lean_dec_ref_known(v___x_412_, 1);
v___x_414_ = ((size_t)1ULL);
v___x_415_ = lean_usize_add(v_i_401_, v___x_414_);
v___x_416_ = lean_array_uset(v_bs_x27_411_, v_i_401_, v_a_413_);
v_i_401_ = v___x_415_;
v_bs_402_ = v___x_416_;
goto _start;
}
else
{
lean_object* v_a_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_425_; 
lean_dec_ref(v_bs_x27_411_);
lean_dec_ref(v_x_399_);
v_a_418_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_425_ == 0)
{
v___x_420_ = v___x_412_;
v_isShared_421_ = v_isSharedCheck_425_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_a_418_);
lean_dec(v___x_412_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_425_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_423_; 
if (v_isShared_421_ == 0)
{
v___x_423_ = v___x_420_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_a_418_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___lam__0(lean_object* v_x_426_, size_t v_sz_427_, size_t v___x_428_, lean_object* v_content_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_){
_start:
{
lean_object* v___x_434_; 
v___x_434_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2_spec__4(v_x_426_, v_sz_427_, v___x_428_, v_content_429_, v___y_430_, v___y_431_, v___y_432_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v_a_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_443_; 
v_a_435_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_443_ == 0)
{
v___x_437_ = v___x_434_;
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_a_435_);
lean_dec(v___x_434_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_439_; lean_object* v___x_441_; 
v___x_439_ = l_Lean_Doc_joinInlines(v_a_435_);
lean_dec(v_a_435_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 0, v___x_439_);
v___x_441_ = v___x_437_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_439_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
else
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_451_; 
v_a_444_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_451_ == 0)
{
v___x_446_ = v___x_434_;
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_434_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_449_; 
if (v_isShared_447_ == 0)
{
v___x_449_ = v___x_446_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_a_444_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2_spec__4___boxed(lean_object* v_x_452_, lean_object* v_sz_453_, lean_object* v_i_454_, lean_object* v_bs_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
size_t v_sz_boxed_460_; size_t v_i_boxed_461_; lean_object* v_res_462_; 
v_sz_boxed_460_ = lean_unbox_usize(v_sz_453_);
lean_dec(v_sz_453_);
v_i_boxed_461_ = lean_unbox_usize(v_i_454_);
lean_dec(v_i_454_);
v_res_462_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2_spec__4(v_x_452_, v_sz_boxed_460_, v_i_boxed_461_, v_bs_455_, v___y_456_, v___y_457_, v___y_458_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec(v___y_456_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__9(lean_object* v_x_463_, lean_object* v_x_464_){
_start:
{
lean_object* v_zero_465_; uint8_t v_isZero_466_; 
v_zero_465_ = lean_unsigned_to_nat(0u);
v_isZero_466_ = lean_nat_dec_eq(v_x_463_, v_zero_465_);
if (v_isZero_466_ == 1)
{
lean_dec(v_x_463_);
return v_x_464_;
}
else
{
uint32_t v___x_467_; lean_object* v_one_468_; lean_object* v_n_469_; lean_object* v___x_470_; 
v___x_467_ = 32;
v_one_468_ = lean_unsigned_to_nat(1u);
v_n_469_ = lean_nat_sub(v_x_463_, v_one_468_);
lean_dec(v_x_463_);
v___x_470_ = lean_string_push(v_x_464_, v___x_467_);
v_x_463_ = v_n_469_;
v_x_464_ = v___x_470_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8(size_t v_sz_476_, size_t v_i_477_, lean_object* v_bs_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_){
_start:
{
uint8_t v___x_483_; 
v___x_483_ = lean_usize_dec_lt(v_i_477_, v_sz_476_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; 
v___x_484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_484_, 0, v_bs_478_);
return v___x_484_;
}
else
{
lean_object* v_v_485_; lean_object* v___x_486_; lean_object* v_bs_x27_487_; size_t v_sz_488_; size_t v___x_489_; lean_object* v___x_490_; 
v_v_485_ = lean_array_uget(v_bs_478_, v_i_477_);
v___x_486_ = lean_unsigned_to_nat(0u);
v_bs_x27_487_ = lean_array_uset(v_bs_478_, v_i_477_, v___x_486_);
v_sz_488_ = lean_array_size(v_v_485_);
v___x_489_ = ((size_t)0ULL);
v___x_490_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__7(v_sz_488_, v___x_489_, v_v_485_, v___y_479_, v___y_480_, v___y_481_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v_a_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; size_t v___x_496_; size_t v___x_497_; lean_object* v___x_498_; 
v_a_491_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_a_491_);
lean_dec_ref_known(v___x_490_, 1);
v___x_492_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8___closed__0));
v___x_493_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8___closed__1));
v___x_494_ = l_Lean_Doc_joinBlocks(v_a_491_);
lean_dec(v_a_491_);
v___x_495_ = l_Lean_Doc_prefixListLines(v___x_492_, v___x_493_, v___x_494_);
v___x_496_ = ((size_t)1ULL);
v___x_497_ = lean_usize_add(v_i_477_, v___x_496_);
v___x_498_ = lean_array_uset(v_bs_x27_487_, v_i_477_, v___x_495_);
v_i_477_ = v___x_497_;
v_bs_478_ = v___x_498_;
goto _start;
}
else
{
lean_dec_ref(v_bs_x27_487_);
return v___x_490_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__10(lean_object* v_as_501_, size_t v_sz_502_, size_t v_i_503_, lean_object* v_b_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_){
_start:
{
uint8_t v___x_509_; 
v___x_509_ = lean_usize_dec_lt(v_i_503_, v_sz_502_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; 
v___x_510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_510_, 0, v_b_504_);
return v___x_510_;
}
else
{
lean_object* v_fst_511_; lean_object* v_snd_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_546_; 
v_fst_511_ = lean_ctor_get(v_b_504_, 0);
v_snd_512_ = lean_ctor_get(v_b_504_, 1);
v_isSharedCheck_546_ = !lean_is_exclusive(v_b_504_);
if (v_isSharedCheck_546_ == 0)
{
v___x_514_ = v_b_504_;
v_isShared_515_ = v_isSharedCheck_546_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_snd_512_);
lean_inc(v_fst_511_);
lean_dec(v_b_504_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_546_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_516_; lean_object* v_a_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; size_t v_sz_524_; size_t v___x_525_; lean_object* v___x_526_; 
v___x_516_ = lean_unsigned_to_nat(1u);
v_a_517_ = lean_array_uget_borrowed(v_as_501_, v_i_503_);
lean_inc(v_snd_512_);
v___x_518_ = l_Nat_reprFast(v_snd_512_);
v___x_519_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__10___closed__0));
v___x_520_ = lean_string_append(v___x_518_, v___x_519_);
v___x_521_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__7));
v___x_522_ = lean_string_utf8_byte_size(v___x_520_);
v___x_523_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__9(v___x_522_, v___x_521_);
v_sz_524_ = lean_array_size(v_a_517_);
v___x_525_ = ((size_t)0ULL);
lean_inc(v_a_517_);
v___x_526_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__7(v_sz_524_, v___x_525_, v_a_517_, v___y_505_, v___y_506_, v___y_507_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_533_; 
v_a_527_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_a_527_);
lean_dec_ref_known(v___x_526_, 1);
v___x_528_ = l_Lean_Doc_joinBlocks(v_a_527_);
lean_dec(v_a_527_);
v___x_529_ = l_Lean_Doc_prefixListLines(v___x_520_, v___x_523_, v___x_528_);
v___x_530_ = lean_array_push(v_fst_511_, v___x_529_);
v___x_531_ = lean_nat_add(v_snd_512_, v___x_516_);
lean_dec(v_snd_512_);
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 1, v___x_531_);
lean_ctor_set(v___x_514_, 0, v___x_530_);
v___x_533_ = v___x_514_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v___x_530_);
lean_ctor_set(v_reuseFailAlloc_537_, 1, v___x_531_);
v___x_533_ = v_reuseFailAlloc_537_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
size_t v___x_534_; size_t v___x_535_; 
v___x_534_ = ((size_t)1ULL);
v___x_535_ = lean_usize_add(v_i_503_, v___x_534_);
v_i_503_ = v___x_535_;
v_b_504_ = v___x_533_;
goto _start;
}
}
else
{
lean_object* v_a_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_545_; 
lean_dec_ref(v___x_523_);
lean_dec_ref(v___x_520_);
lean_del_object(v___x_514_);
lean_dec(v_snd_512_);
lean_dec(v_fst_511_);
v_a_538_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_545_ == 0)
{
v___x_540_ = v___x_526_;
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_a_538_);
lean_dec(v___x_526_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_543_; 
if (v_isShared_541_ == 0)
{
v___x_543_ = v___x_540_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_a_538_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11(size_t v_sz_552_, size_t v_i_553_, lean_object* v_bs_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
uint8_t v___x_559_; 
v___x_559_ = lean_usize_dec_lt(v_i_553_, v_sz_552_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; 
v___x_560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_560_, 0, v_bs_554_);
return v___x_560_;
}
else
{
lean_object* v_v_561_; lean_object* v___x_562_; lean_object* v_term_563_; lean_object* v_desc_564_; lean_object* v___x_565_; lean_object* v_bs_x27_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v_v_561_ = lean_array_uget_borrowed(v_bs_554_, v_i_553_);
v___x_562_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___closed__0));
v_term_563_ = lean_ctor_get(v_v_561_, 0);
lean_inc_ref(v_term_563_);
v_desc_564_ = lean_ctor_get(v_v_561_, 1);
lean_inc_ref(v_desc_564_);
v___x_565_ = lean_unsigned_to_nat(0u);
v_bs_x27_566_ = lean_array_uset(v_bs_554_, v_i_553_, v___x_565_);
v___x_567_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_567_, 0, v_term_563_);
v___x_568_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2(v___x_562_, v___x_567_, v___y_555_, v___y_556_, v___y_557_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v_a_569_; size_t v_sz_570_; size_t v___x_571_; lean_object* v___x_572_; 
v_a_569_ = lean_ctor_get(v___x_568_, 0);
lean_inc(v_a_569_);
lean_dec_ref_known(v___x_568_, 1);
v_sz_570_ = lean_array_size(v_desc_564_);
v___x_571_ = ((size_t)0ULL);
lean_inc_ref(v_desc_564_);
v___x_572_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__7(v_sz_570_, v___x_571_, v_desc_564_, v___y_555_, v___y_556_, v___y_557_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v_a_573_; lean_object* v___y_575_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; uint8_t v___x_592_; 
v_a_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_a_573_);
lean_dec_ref_known(v___x_572_, 1);
v___x_583_ = lean_unsigned_to_nat(1u);
v___x_584_ = lean_mk_empty_array_with_capacity(v___x_583_);
v___x_585_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___closed__2));
v___x_586_ = lean_unsigned_to_nat(2u);
v___x_587_ = lean_mk_empty_array_with_capacity(v___x_586_);
v___x_588_ = lean_array_push(v___x_587_, v_a_569_);
v___x_589_ = lean_array_push(v___x_588_, v___x_585_);
v___x_590_ = l_Lean_Doc_joinInlines(v___x_589_);
lean_dec_ref(v___x_589_);
v___x_591_ = lean_array_get_size(v_desc_564_);
lean_dec_ref(v_desc_564_);
v___x_592_ = lean_nat_dec_le(v___x_591_, v___x_583_);
if (v___x_592_ == 0)
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_593_ = lean_array_push(v___x_584_, v___x_590_);
v___x_594_ = l_Array_append___redArg(v___x_593_, v_a_573_);
lean_dec(v_a_573_);
v___x_595_ = l_Lean_Doc_joinBlocks(v___x_594_);
lean_dec_ref(v___x_594_);
v___y_575_ = v___x_595_;
goto v___jp_574_;
}
else
{
lean_object* v___x_596_; lean_object* v___x_597_; 
lean_dec_ref(v___x_584_);
v___x_596_ = l_Lean_Doc_joinBlocks(v_a_573_);
lean_dec(v_a_573_);
v___x_597_ = l_Array_append___redArg(v___x_590_, v___x_596_);
lean_dec_ref(v___x_596_);
v___y_575_ = v___x_597_;
goto v___jp_574_;
}
v___jp_574_:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; size_t v___x_579_; size_t v___x_580_; lean_object* v___x_581_; 
v___x_576_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8___closed__0));
v___x_577_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8___closed__1));
v___x_578_ = l_Lean_Doc_prefixListLines(v___x_576_, v___x_577_, v___y_575_);
v___x_579_ = ((size_t)1ULL);
v___x_580_ = lean_usize_add(v_i_553_, v___x_579_);
v___x_581_ = lean_array_uset(v_bs_x27_566_, v_i_553_, v___x_578_);
v_i_553_ = v___x_580_;
v_bs_554_ = v___x_581_;
goto _start;
}
}
else
{
lean_dec(v_a_569_);
lean_dec_ref(v_bs_x27_566_);
lean_dec_ref(v_desc_564_);
return v___x_572_;
}
}
else
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_605_; 
lean_dec_ref(v_bs_x27_566_);
lean_dec_ref(v_desc_564_);
v_a_598_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_605_ == 0)
{
v___x_600_ = v___x_568_;
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_568_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_603_; 
if (v_isShared_601_ == 0)
{
v___x_603_ = v___x_600_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_a_598_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___boxed(lean_object* v_x_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2(v_x_609_, v_a_610_, v_a_611_, v_a_612_);
lean_dec(v_a_612_);
lean_dec_ref(v_a_611_);
lean_dec(v_a_610_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___lam__0___boxed(lean_object* v_sz_615_, lean_object* v___x_616_, lean_object* v_content_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_){
_start:
{
size_t v_sz_boxed_622_; size_t v___x_6928__boxed_623_; lean_object* v_res_624_; 
v_sz_boxed_622_ = lean_unbox_usize(v_sz_615_);
lean_dec(v_sz_615_);
v___x_6928__boxed_623_ = lean_unbox_usize(v___x_616_);
lean_dec(v___x_616_);
v_res_624_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___lam__0(v_sz_boxed_622_, v___x_6928__boxed_623_, v_content_617_, v___y_618_, v___y_619_, v___y_620_);
lean_dec(v___y_620_);
lean_dec_ref(v___y_619_);
lean_dec(v___y_618_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2(lean_object* v_x_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_){
_start:
{
switch(lean_obj_tag(v_x_625_))
{
case 0:
{
lean_object* v_contents_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_639_; 
v_contents_630_ = lean_ctor_get(v_x_625_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v_x_625_);
if (v_isSharedCheck_639_ == 0)
{
v___x_632_ = v_x_625_;
v_isShared_633_ = v_isSharedCheck_639_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_contents_630_);
lean_dec(v_x_625_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_639_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_634_; lean_object* v___x_636_; 
v___x_634_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___closed__0));
if (v_isShared_633_ == 0)
{
lean_ctor_set_tag(v___x_632_, 9);
v___x_636_ = v___x_632_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_contents_630_);
v___x_636_ = v_reuseFailAlloc_638_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
lean_object* v___x_637_; 
v___x_637_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2(v___x_634_, v___x_636_, v_a_626_, v_a_627_, v_a_628_);
return v___x_637_;
}
}
}
case 1:
{
lean_object* v_content_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_648_; 
v_content_640_ = lean_ctor_get(v_x_625_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v_x_625_);
if (v_isSharedCheck_648_ == 0)
{
v___x_642_ = v_x_625_;
v_isShared_643_ = v_isSharedCheck_648_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_content_640_);
lean_dec(v_x_625_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_648_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_644_; lean_object* v___x_646_; 
v___x_644_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_codeBlockLines(v_content_640_);
if (v_isShared_643_ == 0)
{
lean_ctor_set_tag(v___x_642_, 0);
lean_ctor_set(v___x_642_, 0, v___x_644_);
v___x_646_ = v___x_642_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v___x_644_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
case 2:
{
lean_object* v_items_649_; size_t v_sz_650_; size_t v___x_651_; lean_object* v___x_652_; 
v_items_649_ = lean_ctor_get(v_x_625_, 0);
lean_inc_ref(v_items_649_);
lean_dec_ref_known(v_x_625_, 1);
v_sz_650_ = lean_array_size(v_items_649_);
v___x_651_ = ((size_t)0ULL);
v___x_652_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8(v_sz_650_, v___x_651_, v_items_649_, v_a_626_, v_a_627_, v_a_628_);
if (lean_obj_tag(v___x_652_) == 0)
{
lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_661_; 
v_a_653_ = lean_ctor_get(v___x_652_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_661_ == 0)
{
v___x_655_ = v___x_652_;
v_isShared_656_ = v_isSharedCheck_661_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v___x_652_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_661_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_657_; lean_object* v___x_659_; 
v___x_657_ = l_Lean_Doc_joinBlocks(v_a_653_);
lean_dec(v_a_653_);
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 0, v___x_657_);
v___x_659_ = v___x_655_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_657_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
else
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_669_; 
v_a_662_ = lean_ctor_get(v___x_652_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_669_ == 0)
{
v___x_664_ = v___x_652_;
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_652_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_a_662_);
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
case 3:
{
lean_object* v_start_670_; lean_object* v_items_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_705_; 
v_start_670_ = lean_ctor_get(v_x_625_, 0);
v_items_671_ = lean_ctor_get(v_x_625_, 1);
v_isSharedCheck_705_ = !lean_is_exclusive(v_x_625_);
if (v_isSharedCheck_705_ == 0)
{
v___x_673_ = v_x_625_;
v_isShared_674_ = v_isSharedCheck_705_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_items_671_);
lean_inc(v_start_670_);
lean_dec(v_x_625_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_705_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v_out_675_; lean_object* v___y_677_; lean_object* v___x_702_; lean_object* v___x_703_; uint8_t v___x_704_; 
v_out_675_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__2));
v___x_702_ = lean_unsigned_to_nat(1u);
v___x_703_ = l_Int_toNat(v_start_670_);
lean_dec(v_start_670_);
v___x_704_ = lean_nat_dec_le(v___x_702_, v___x_703_);
if (v___x_704_ == 0)
{
lean_dec(v___x_703_);
v___y_677_ = v___x_702_;
goto v___jp_676_;
}
else
{
v___y_677_ = v___x_703_;
goto v___jp_676_;
}
v___jp_676_:
{
lean_object* v___x_679_; 
if (v_isShared_674_ == 0)
{
lean_ctor_set_tag(v___x_673_, 0);
lean_ctor_set(v___x_673_, 1, v___y_677_);
lean_ctor_set(v___x_673_, 0, v_out_675_);
v___x_679_ = v___x_673_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_out_675_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v___y_677_);
v___x_679_ = v_reuseFailAlloc_701_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
size_t v_sz_680_; size_t v___x_681_; lean_object* v___x_682_; 
v_sz_680_ = lean_array_size(v_items_671_);
v___x_681_ = ((size_t)0ULL);
v___x_682_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__10(v_items_671_, v_sz_680_, v___x_681_, v___x_679_, v_a_626_, v_a_627_, v_a_628_);
lean_dec_ref(v_items_671_);
if (lean_obj_tag(v___x_682_) == 0)
{
lean_object* v_a_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_692_; 
v_a_683_ = lean_ctor_get(v___x_682_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_692_ == 0)
{
v___x_685_ = v___x_682_;
v_isShared_686_ = v_isSharedCheck_692_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_a_683_);
lean_dec(v___x_682_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_692_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v_fst_687_; lean_object* v___x_688_; lean_object* v___x_690_; 
v_fst_687_ = lean_ctor_get(v_a_683_, 0);
lean_inc(v_fst_687_);
lean_dec(v_a_683_);
v___x_688_ = l_Lean_Doc_joinBlocks(v_fst_687_);
lean_dec(v_fst_687_);
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 0, v___x_688_);
v___x_690_ = v___x_685_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_688_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
else
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_700_; 
v_a_693_ = lean_ctor_get(v___x_682_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_700_ == 0)
{
v___x_695_ = v___x_682_;
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_682_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_698_; 
if (v_isShared_696_ == 0)
{
v___x_698_ = v___x_695_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_a_693_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
}
}
}
case 4:
{
lean_object* v_items_706_; size_t v_sz_707_; size_t v___x_708_; lean_object* v___x_709_; 
v_items_706_ = lean_ctor_get(v_x_625_, 0);
lean_inc_ref(v_items_706_);
lean_dec_ref_known(v_x_625_, 1);
v_sz_707_ = lean_array_size(v_items_706_);
v___x_708_ = ((size_t)0ULL);
v___x_709_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11(v_sz_707_, v___x_708_, v_items_706_, v_a_626_, v_a_627_, v_a_628_);
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_718_; 
v_a_710_ = lean_ctor_get(v___x_709_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_718_ == 0)
{
v___x_712_ = v___x_709_;
v_isShared_713_ = v_isSharedCheck_718_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_709_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_718_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_714_ = l_Lean_Doc_joinBlocks(v_a_710_);
lean_dec(v_a_710_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 0, v___x_714_);
v___x_716_ = v___x_712_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_714_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
else
{
lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_726_; 
v_a_719_ = lean_ctor_get(v___x_709_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_726_ == 0)
{
v___x_721_ = v___x_709_;
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_709_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_724_; 
if (v_isShared_722_ == 0)
{
v___x_724_ = v___x_721_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_a_719_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
return v___x_724_;
}
}
}
}
case 5:
{
lean_object* v_items_727_; size_t v_sz_728_; size_t v___x_729_; lean_object* v___x_730_; 
v_items_727_ = lean_ctor_get(v_x_625_, 0);
lean_inc_ref(v_items_727_);
lean_dec_ref_known(v_x_625_, 1);
v_sz_728_ = lean_array_size(v_items_727_);
v___x_729_ = ((size_t)0ULL);
v___x_730_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__7(v_sz_728_, v___x_729_, v_items_727_, v_a_626_, v_a_627_, v_a_628_);
if (lean_obj_tag(v___x_730_) == 0)
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_741_; 
v_a_731_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_741_ == 0)
{
v___x_733_ = v___x_730_;
v_isShared_734_ = v_isSharedCheck_741_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_730_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_741_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_739_; 
v___x_735_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___closed__0));
v___x_736_ = l_Lean_Doc_joinBlocks(v_a_731_);
lean_dec(v_a_731_);
v___x_737_ = l_Lean_Doc_prefixLines(v___x_735_, v___x_736_);
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 0, v___x_737_);
v___x_739_ = v___x_733_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v___x_737_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
return v___x_739_;
}
}
}
else
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
v_a_742_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_749_ == 0)
{
v___x_744_ = v___x_730_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_730_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_742_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
case 6:
{
lean_object* v_content_750_; size_t v_sz_751_; size_t v___x_752_; lean_object* v___x_753_; 
v_content_750_ = lean_ctor_get(v_x_625_, 0);
lean_inc_ref(v_content_750_);
lean_dec_ref_known(v_x_625_, 1);
v_sz_751_ = lean_array_size(v_content_750_);
v___x_752_ = ((size_t)0ULL);
v___x_753_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__7(v_sz_751_, v___x_752_, v_content_750_, v_a_626_, v_a_627_, v_a_628_);
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_762_; 
v_a_754_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_762_ == 0)
{
v___x_756_ = v___x_753_;
v_isShared_757_ = v_isSharedCheck_762_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_753_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_762_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_758_; lean_object* v___x_760_; 
v___x_758_ = l_Lean_Doc_joinBlocks(v_a_754_);
lean_dec(v_a_754_);
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 0, v___x_758_);
v___x_760_ = v___x_756_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v___x_758_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
else
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_770_; 
v_a_763_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_770_ == 0)
{
v___x_765_ = v___x_753_;
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v___x_753_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_a_763_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
default: 
{
lean_object* v_container_771_; 
v_container_771_ = lean_ctor_get(v_x_625_, 0);
if (lean_obj_tag(v_container_771_) == 0)
{
lean_object* v_content_772_; lean_object* v_val_773_; lean_object* v___x_774_; lean_object* v___x_775_; size_t v_sz_776_; size_t v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v_fallback_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
lean_inc_ref(v_container_771_);
v_content_772_ = lean_ctor_get(v_x_625_, 1);
lean_inc_ref_n(v_content_772_, 2);
lean_dec_ref_known(v_x_625_, 2);
v_val_773_ = lean_ctor_get(v_container_771_, 0);
lean_inc(v_val_773_);
lean_dec_ref_known(v_container_771_, 1);
v___x_774_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___closed__1));
v___x_775_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___boxed), 5, 0);
v_sz_776_ = lean_array_size(v_content_772_);
v___x_777_ = ((size_t)0ULL);
v___x_778_ = lean_box_usize(v_sz_776_);
v___x_779_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___boxed__const__1));
v_fallback_780_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___lam__0___boxed), 7, 3);
lean_closure_set(v_fallback_780_, 0, v___x_778_);
lean_closure_set(v_fallback_780_, 1, v___x_779_);
lean_closure_set(v_fallback_780_, 2, v_content_772_);
v___x_781_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_773_);
v___x_782_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe(v___x_781_, v_a_627_, v_a_628_);
lean_dec(v___x_781_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v_a_783_; 
v_a_783_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_a_783_);
lean_dec_ref_known(v___x_782_, 1);
if (lean_obj_tag(v_a_783_) == 0)
{
lean_object* v___x_784_; 
lean_dec_ref(v_fallback_780_);
lean_dec_ref(v___x_775_);
lean_dec(v_val_773_);
v___x_784_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__7(v_sz_776_, v___x_777_, v_content_772_, v_a_626_, v_a_627_, v_a_628_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_793_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_793_ == 0)
{
v___x_787_ = v___x_784_;
v_isShared_788_ = v_isSharedCheck_793_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_784_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_793_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_789_; lean_object* v___x_791_; 
v___x_789_ = l_Lean_Doc_joinBlocks(v_a_785_);
lean_dec(v_a_785_);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v___x_789_);
v___x_791_ = v___x_787_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
v_a_794_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_784_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_784_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_794_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
else
{
lean_object* v_val_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v_val_802_ = lean_ctor_get(v_a_783_, 0);
lean_inc(v_val_802_);
lean_dec_ref_known(v_a_783_, 1);
v___x_803_ = lean_apply_4(v_val_802_, v___x_774_, v___x_775_, v_val_773_, v_content_772_);
v___x_804_ = l_Lean_Doc_withRendererFallback(v_fallback_780_, v___x_803_, v_a_626_, v_a_627_, v_a_628_);
return v___x_804_;
}
}
else
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_812_; 
lean_dec_ref(v_fallback_780_);
lean_dec_ref(v___x_775_);
lean_dec(v_val_773_);
lean_dec_ref(v_content_772_);
v_a_805_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_812_ == 0)
{
v___x_807_ = v___x_782_;
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v___x_782_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_810_; 
if (v_isShared_808_ == 0)
{
v___x_810_ = v___x_807_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_a_805_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
}
else
{
lean_object* v_content_813_; size_t v_sz_814_; size_t v___x_815_; lean_object* v___x_816_; 
v_content_813_ = lean_ctor_get(v_x_625_, 1);
lean_inc_ref(v_content_813_);
lean_dec_ref_known(v_x_625_, 2);
v_sz_814_ = lean_array_size(v_content_813_);
v___x_815_ = ((size_t)0ULL);
v___x_816_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__7(v_sz_814_, v___x_815_, v_content_813_, v_a_626_, v_a_627_, v_a_628_);
if (lean_obj_tag(v___x_816_) == 0)
{
lean_object* v_a_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_825_; 
v_a_817_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_825_ == 0)
{
v___x_819_ = v___x_816_;
v_isShared_820_ = v_isSharedCheck_825_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_a_817_);
lean_dec(v___x_816_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_825_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___x_821_; lean_object* v___x_823_; 
v___x_821_ = l_Lean_Doc_joinBlocks(v_a_817_);
lean_dec(v_a_817_);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 0, v___x_821_);
v___x_823_ = v___x_819_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v___x_821_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
else
{
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_833_; 
v_a_826_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_833_ == 0)
{
v___x_828_ = v___x_816_;
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___x_816_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_831_; 
if (v_isShared_829_ == 0)
{
v___x_831_ = v___x_828_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_a_826_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__7(size_t v_sz_834_, size_t v_i_835_, lean_object* v_bs_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
uint8_t v___x_841_; 
v___x_841_ = lean_usize_dec_lt(v_i_835_, v_sz_834_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; 
v___x_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_842_, 0, v_bs_836_);
return v___x_842_;
}
else
{
lean_object* v_v_843_; lean_object* v___x_844_; lean_object* v_bs_x27_845_; lean_object* v___x_846_; 
v_v_843_ = lean_array_uget(v_bs_836_, v_i_835_);
v___x_844_ = lean_unsigned_to_nat(0u);
v_bs_x27_845_ = lean_array_uset(v_bs_836_, v_i_835_, v___x_844_);
v___x_846_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2(v_v_843_, v___y_837_, v___y_838_, v___y_839_);
if (lean_obj_tag(v___x_846_) == 0)
{
lean_object* v_a_847_; size_t v___x_848_; size_t v___x_849_; lean_object* v___x_850_; 
v_a_847_ = lean_ctor_get(v___x_846_, 0);
lean_inc(v_a_847_);
lean_dec_ref_known(v___x_846_, 1);
v___x_848_ = ((size_t)1ULL);
v___x_849_ = lean_usize_add(v_i_835_, v___x_848_);
v___x_850_ = lean_array_uset(v_bs_x27_845_, v_i_835_, v_a_847_);
v_i_835_ = v___x_849_;
v_bs_836_ = v___x_850_;
goto _start;
}
else
{
lean_object* v_a_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_859_; 
lean_dec_ref(v_bs_x27_845_);
v_a_852_ = lean_ctor_get(v___x_846_, 0);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_846_);
if (v_isSharedCheck_859_ == 0)
{
v___x_854_ = v___x_846_;
v_isShared_855_ = v_isSharedCheck_859_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_a_852_);
lean_dec(v___x_846_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_859_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
lean_object* v___x_857_; 
if (v_isShared_855_ == 0)
{
v___x_857_ = v___x_854_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_a_852_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2___lam__0(size_t v_sz_860_, size_t v___x_861_, lean_object* v_content_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
lean_object* v___x_867_; 
v___x_867_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__7(v_sz_860_, v___x_861_, v_content_862_, v___y_863_, v___y_864_, v___y_865_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_876_; 
v_a_868_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_876_ == 0)
{
v___x_870_ = v___x_867_;
v_isShared_871_ = v_isSharedCheck_876_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_dec(v___x_867_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_876_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_872_; lean_object* v___x_874_; 
v___x_872_ = l_Lean_Doc_joinBlocks(v_a_868_);
lean_dec(v_a_868_);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 0, v___x_872_);
v___x_874_ = v___x_870_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_872_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
else
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
v_a_877_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_867_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_867_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__7___boxed(lean_object* v_sz_885_, lean_object* v_i_886_, lean_object* v_bs_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
size_t v_sz_boxed_892_; size_t v_i_boxed_893_; lean_object* v_res_894_; 
v_sz_boxed_892_ = lean_unbox_usize(v_sz_885_);
lean_dec(v_sz_885_);
v_i_boxed_893_ = lean_unbox_usize(v_i_886_);
lean_dec(v_i_886_);
v_res_894_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__7(v_sz_boxed_892_, v_i_boxed_893_, v_bs_887_, v___y_888_, v___y_889_, v___y_890_);
lean_dec(v___y_890_);
lean_dec_ref(v___y_889_);
lean_dec(v___y_888_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8___boxed(lean_object* v_sz_895_, lean_object* v_i_896_, lean_object* v_bs_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_){
_start:
{
size_t v_sz_boxed_902_; size_t v_i_boxed_903_; lean_object* v_res_904_; 
v_sz_boxed_902_ = lean_unbox_usize(v_sz_895_);
lean_dec(v_sz_895_);
v_i_boxed_903_ = lean_unbox_usize(v_i_896_);
lean_dec(v_i_896_);
v_res_904_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__8(v_sz_boxed_902_, v_i_boxed_903_, v_bs_897_, v___y_898_, v___y_899_, v___y_900_);
lean_dec(v___y_900_);
lean_dec_ref(v___y_899_);
lean_dec(v___y_898_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__10___boxed(lean_object* v_as_905_, lean_object* v_sz_906_, lean_object* v_i_907_, lean_object* v_b_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
size_t v_sz_boxed_913_; size_t v_i_boxed_914_; lean_object* v_res_915_; 
v_sz_boxed_913_ = lean_unbox_usize(v_sz_906_);
lean_dec(v_sz_906_);
v_i_boxed_914_ = lean_unbox_usize(v_i_907_);
lean_dec(v_i_907_);
v_res_915_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__10(v_as_905_, v_sz_boxed_913_, v_i_boxed_914_, v_b_908_, v___y_909_, v___y_910_, v___y_911_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
lean_dec(v___y_909_);
lean_dec_ref(v_as_905_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___boxed(lean_object* v_sz_916_, lean_object* v_i_917_, lean_object* v_bs_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
size_t v_sz_boxed_923_; size_t v_i_boxed_924_; lean_object* v_res_925_; 
v_sz_boxed_923_ = lean_unbox_usize(v_sz_916_);
lean_dec(v_sz_916_);
v_i_boxed_924_ = lean_unbox_usize(v_i_917_);
lean_dec(v_i_917_);
v_res_925_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11(v_sz_boxed_923_, v_i_boxed_924_, v_bs_918_, v___y_919_, v___y_920_, v___y_921_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
lean_dec(v___y_919_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__3(size_t v_sz_926_, size_t v_i_927_, lean_object* v_bs_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
uint8_t v___x_933_; 
v___x_933_ = lean_usize_dec_lt(v_i_927_, v_sz_926_);
if (v___x_933_ == 0)
{
lean_object* v___x_934_; 
v___x_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_934_, 0, v_bs_928_);
return v___x_934_;
}
else
{
lean_object* v_v_935_; lean_object* v___x_936_; lean_object* v_bs_x27_937_; lean_object* v___x_938_; 
v_v_935_ = lean_array_uget(v_bs_928_, v_i_927_);
v___x_936_ = lean_unsigned_to_nat(0u);
v_bs_x27_937_ = lean_array_uset(v_bs_928_, v_i_927_, v___x_936_);
v___x_938_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2(v_v_935_, v___y_929_, v___y_930_, v___y_931_);
if (lean_obj_tag(v___x_938_) == 0)
{
lean_object* v_a_939_; size_t v___x_940_; size_t v___x_941_; lean_object* v___x_942_; 
v_a_939_ = lean_ctor_get(v___x_938_, 0);
lean_inc(v_a_939_);
lean_dec_ref_known(v___x_938_, 1);
v___x_940_ = ((size_t)1ULL);
v___x_941_ = lean_usize_add(v_i_927_, v___x_940_);
v___x_942_ = lean_array_uset(v_bs_x27_937_, v_i_927_, v_a_939_);
v_i_927_ = v___x_941_;
v_bs_928_ = v___x_942_;
goto _start;
}
else
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
lean_dec_ref(v_bs_x27_937_);
v_a_944_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_938_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_938_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__3___boxed(lean_object* v_sz_952_, lean_object* v_i_953_, lean_object* v_bs_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_){
_start:
{
size_t v_sz_boxed_959_; size_t v_i_boxed_960_; lean_object* v_res_961_; 
v_sz_boxed_959_ = lean_unbox_usize(v_sz_952_);
lean_dec(v_sz_952_);
v_i_boxed_960_ = lean_unbox_usize(v_i_953_);
lean_dec(v_i_953_);
v_res_961_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__3(v_sz_boxed_959_, v_i_boxed_960_, v_bs_954_, v___y_955_, v___y_956_, v___y_957_);
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
lean_dec(v___y_955_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__4(lean_object* v_x_962_, lean_object* v_x_963_){
_start:
{
lean_object* v_zero_964_; uint8_t v_isZero_965_; 
v_zero_964_ = lean_unsigned_to_nat(0u);
v_isZero_965_ = lean_nat_dec_eq(v_x_962_, v_zero_964_);
if (v_isZero_965_ == 1)
{
lean_dec(v_x_962_);
return v_x_963_;
}
else
{
uint32_t v___x_966_; lean_object* v_one_967_; lean_object* v_n_968_; lean_object* v___x_969_; 
v___x_966_ = 35;
v_one_967_ = lean_unsigned_to_nat(1u);
v_n_968_ = lean_nat_sub(v_x_962_, v_one_967_);
lean_dec(v_x_962_);
v___x_969_ = lean_string_push(v_x_963_, v___x_966_);
v_x_962_ = v_n_968_;
v_x_963_ = v___x_969_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__3(size_t v_sz_971_, size_t v_i_972_, lean_object* v_bs_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
uint8_t v___x_978_; 
v___x_978_ = lean_usize_dec_lt(v_i_972_, v_sz_971_);
if (v___x_978_ == 0)
{
lean_object* v___x_979_; 
v___x_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_979_, 0, v_bs_973_);
return v___x_979_;
}
else
{
lean_object* v_v_980_; lean_object* v___x_981_; lean_object* v_bs_x27_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v_v_980_ = lean_array_uget(v_bs_973_, v_i_972_);
v___x_981_ = lean_unsigned_to_nat(0u);
v_bs_x27_982_ = lean_array_uset(v_bs_973_, v_i_972_, v___x_981_);
v___x_983_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__2_spec__11___closed__0));
v___x_984_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2(v___x_983_, v_v_980_, v___y_974_, v___y_975_, v___y_976_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; size_t v___x_986_; size_t v___x_987_; lean_object* v___x_988_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_985_);
lean_dec_ref_known(v___x_984_, 1);
v___x_986_ = ((size_t)1ULL);
v___x_987_ = lean_usize_add(v_i_972_, v___x_986_);
v___x_988_ = lean_array_uset(v_bs_x27_982_, v_i_972_, v_a_985_);
v_i_972_ = v___x_987_;
v_bs_973_ = v___x_988_;
goto _start;
}
else
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_997_; 
lean_dec_ref(v_bs_x27_982_);
v_a_990_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_997_ == 0)
{
v___x_992_ = v___x_984_;
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_984_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_995_; 
if (v_isShared_993_ == 0)
{
v___x_995_ = v___x_992_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_a_990_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__3___boxed(lean_object* v_sz_998_, lean_object* v_i_999_, lean_object* v_bs_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
size_t v_sz_boxed_1005_; size_t v_i_boxed_1006_; lean_object* v_res_1007_; 
v_sz_boxed_1005_ = lean_unbox_usize(v_sz_998_);
lean_dec(v_sz_998_);
v_i_boxed_1006_ = lean_unbox_usize(v_i_999_);
lean_dec(v_i_999_);
v_res_1007_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__3(v_sz_boxed_1005_, v_i_boxed_1006_, v_bs_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v___y_1001_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1___redArg(lean_object* v_level_1009_, lean_object* v_part_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_){
_start:
{
lean_object* v_title_1015_; lean_object* v_content_1016_; lean_object* v_subParts_1017_; size_t v_sz_1018_; size_t v___x_1019_; lean_object* v___x_1020_; 
v_title_1015_ = lean_ctor_get(v_part_1010_, 0);
lean_inc_ref(v_title_1015_);
v_content_1016_ = lean_ctor_get(v_part_1010_, 3);
lean_inc_ref(v_content_1016_);
v_subParts_1017_ = lean_ctor_get(v_part_1010_, 4);
lean_inc_ref(v_subParts_1017_);
lean_dec_ref(v_part_1010_);
v_sz_1018_ = lean_array_size(v_title_1015_);
v___x_1019_ = ((size_t)0ULL);
v___x_1020_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__3(v_sz_1018_, v___x_1019_, v_title_1015_, v_a_1011_, v_a_1012_, v_a_1013_);
if (lean_obj_tag(v___x_1020_) == 0)
{
lean_object* v_a_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; size_t v_sz_1033_; lean_object* v___x_1034_; 
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
lean_inc(v_a_1021_);
lean_dec_ref_known(v___x_1020_, 1);
v___x_1022_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__7));
v___x_1023_ = lean_unsigned_to_nat(1u);
v___x_1024_ = lean_nat_add(v_level_1009_, v___x_1023_);
lean_inc(v___x_1024_);
v___x_1025_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__4(v___x_1024_, v___x_1022_);
v___x_1026_ = ((lean_object*)(l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1___redArg___closed__0));
v___x_1027_ = lean_string_append(v___x_1025_, v___x_1026_);
v___x_1028_ = lean_mk_empty_array_with_capacity(v___x_1023_);
lean_inc_ref_n(v___x_1028_, 2);
v___x_1029_ = lean_array_push(v___x_1028_, v___x_1027_);
v___x_1030_ = lean_array_push(v___x_1028_, v___x_1029_);
v___x_1031_ = l_Array_append___redArg(v___x_1030_, v_a_1021_);
lean_dec(v_a_1021_);
v___x_1032_ = l_Lean_Doc_joinInlines(v___x_1031_);
lean_dec_ref(v___x_1031_);
v_sz_1033_ = lean_array_size(v_content_1016_);
v___x_1034_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__3(v_sz_1033_, v___x_1019_, v_content_1016_, v_a_1011_, v_a_1012_, v_a_1013_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; size_t v_sz_1036_; lean_object* v___x_1037_; 
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
lean_inc(v_a_1035_);
lean_dec_ref_known(v___x_1034_, 1);
v_sz_1036_ = lean_array_size(v_subParts_1017_);
v___x_1037_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__5___redArg(v___x_1024_, v_sz_1036_, v___x_1019_, v_subParts_1017_, v_a_1011_, v_a_1012_, v_a_1013_);
lean_dec(v___x_1024_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1049_; 
v_a_1038_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1040_ = v___x_1037_;
v_isShared_1041_ = v_isSharedCheck_1049_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v___x_1037_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1049_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1047_; 
v___x_1042_ = lean_array_push(v___x_1028_, v___x_1032_);
v___x_1043_ = l_Array_append___redArg(v___x_1042_, v_a_1035_);
lean_dec(v_a_1035_);
v___x_1044_ = l_Array_append___redArg(v___x_1043_, v_a_1038_);
lean_dec(v_a_1038_);
v___x_1045_ = l_Lean_Doc_joinBlocks(v___x_1044_);
lean_dec_ref(v___x_1044_);
if (v_isShared_1041_ == 0)
{
lean_ctor_set(v___x_1040_, 0, v___x_1045_);
v___x_1047_ = v___x_1040_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v___x_1045_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
else
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1057_; 
lean_dec(v_a_1035_);
lean_dec_ref(v___x_1032_);
lean_dec_ref(v___x_1028_);
v_a_1050_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1052_ = v___x_1037_;
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1037_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1055_; 
if (v_isShared_1053_ == 0)
{
v___x_1055_ = v___x_1052_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_a_1050_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
}
else
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
lean_dec_ref(v___x_1032_);
lean_dec_ref(v___x_1028_);
lean_dec(v___x_1024_);
lean_dec_ref(v_subParts_1017_);
v_a_1058_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1060_ = v___x_1034_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1034_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1063_; 
if (v_isShared_1061_ == 0)
{
v___x_1063_ = v___x_1060_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_a_1058_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
else
{
lean_object* v_a_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1073_; 
lean_dec_ref(v_subParts_1017_);
lean_dec_ref(v_content_1016_);
v_a_1066_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1068_ = v___x_1020_;
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_a_1066_);
lean_dec(v___x_1020_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1071_; 
if (v_isShared_1069_ == 0)
{
v___x_1071_ = v___x_1068_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_a_1066_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__5___redArg(lean_object* v___x_1074_, size_t v_sz_1075_, size_t v_i_1076_, lean_object* v_bs_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
uint8_t v___x_1082_; 
v___x_1082_ = lean_usize_dec_lt(v_i_1076_, v_sz_1075_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1083_; 
v___x_1083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1083_, 0, v_bs_1077_);
return v___x_1083_;
}
else
{
lean_object* v_v_1084_; lean_object* v___x_1085_; lean_object* v_bs_x27_1086_; lean_object* v___x_1087_; 
v_v_1084_ = lean_array_uget(v_bs_1077_, v_i_1076_);
v___x_1085_ = lean_unsigned_to_nat(0u);
v_bs_x27_1086_ = lean_array_uset(v_bs_1077_, v_i_1076_, v___x_1085_);
v___x_1087_ = l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1___redArg(v___x_1074_, v_v_1084_, v___y_1078_, v___y_1079_, v___y_1080_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; size_t v___x_1089_; size_t v___x_1090_; lean_object* v___x_1091_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1088_);
lean_dec_ref_known(v___x_1087_, 1);
v___x_1089_ = ((size_t)1ULL);
v___x_1090_ = lean_usize_add(v_i_1076_, v___x_1089_);
v___x_1091_ = lean_array_uset(v_bs_x27_1086_, v_i_1076_, v_a_1088_);
v_i_1076_ = v___x_1090_;
v_bs_1077_ = v___x_1091_;
goto _start;
}
else
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1100_; 
lean_dec_ref(v_bs_x27_1086_);
v_a_1093_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1095_ = v___x_1087_;
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_1087_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__5___redArg___boxed(lean_object* v___x_1101_, lean_object* v_sz_1102_, lean_object* v_i_1103_, lean_object* v_bs_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
size_t v_sz_boxed_1109_; size_t v_i_boxed_1110_; lean_object* v_res_1111_; 
v_sz_boxed_1109_ = lean_unbox_usize(v_sz_1102_);
lean_dec(v_sz_1102_);
v_i_boxed_1110_ = lean_unbox_usize(v_i_1103_);
lean_dec(v_i_1103_);
v_res_1111_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__5___redArg(v___x_1101_, v_sz_boxed_1109_, v_i_boxed_1110_, v_bs_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec(v___x_1101_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1___redArg___boxed(lean_object* v_level_1112_, lean_object* v_part_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1___redArg(v_level_1112_, v_part_1113_, v_a_1114_, v_a_1115_, v_a_1116_);
lean_dec(v_a_1116_);
lean_dec_ref(v_a_1115_);
lean_dec(v_a_1114_);
lean_dec(v_level_1112_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__4(size_t v_sz_1119_, size_t v_i_1120_, lean_object* v_bs_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
uint8_t v___x_1126_; 
v___x_1126_ = lean_usize_dec_lt(v_i_1120_, v_sz_1119_);
if (v___x_1126_ == 0)
{
lean_object* v___x_1127_; 
v___x_1127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1127_, 0, v_bs_1121_);
return v___x_1127_;
}
else
{
lean_object* v_v_1128_; lean_object* v___x_1129_; lean_object* v_bs_x27_1130_; lean_object* v___x_1131_; 
v_v_1128_ = lean_array_uget(v_bs_1121_, v_i_1120_);
v___x_1129_ = lean_unsigned_to_nat(0u);
v_bs_x27_1130_ = lean_array_uset(v_bs_1121_, v_i_1120_, v___x_1129_);
v___x_1131_ = l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1___redArg(v___x_1129_, v_v_1128_, v___y_1122_, v___y_1123_, v___y_1124_);
if (lean_obj_tag(v___x_1131_) == 0)
{
lean_object* v_a_1132_; size_t v___x_1133_; size_t v___x_1134_; lean_object* v___x_1135_; 
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
lean_inc(v_a_1132_);
lean_dec_ref_known(v___x_1131_, 1);
v___x_1133_ = ((size_t)1ULL);
v___x_1134_ = lean_usize_add(v_i_1120_, v___x_1133_);
v___x_1135_ = lean_array_uset(v_bs_x27_1130_, v_i_1120_, v_a_1132_);
v_i_1120_ = v___x_1134_;
v_bs_1121_ = v___x_1135_;
goto _start;
}
else
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1144_; 
lean_dec_ref(v_bs_x27_1130_);
v_a_1137_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1139_ = v___x_1131_;
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v___x_1131_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1142_; 
if (v_isShared_1140_ == 0)
{
v___x_1142_ = v___x_1139_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_a_1137_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__4___boxed(lean_object* v_sz_1145_, lean_object* v_i_1146_, lean_object* v_bs_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_){
_start:
{
size_t v_sz_boxed_1152_; size_t v_i_boxed_1153_; lean_object* v_res_1154_; 
v_sz_boxed_1152_ = lean_unbox_usize(v_sz_1145_);
lean_dec(v_sz_1145_);
v_i_boxed_1153_ = lean_unbox_usize(v_i_1146_);
lean_dec(v_i_1146_);
v_res_1154_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__4(v_sz_boxed_1152_, v_i_boxed_1153_, v_bs_1147_, v___y_1148_, v___y_1149_, v___y_1150_);
lean_dec(v___y_1150_);
lean_dec_ref(v___y_1149_);
lean_dec(v___y_1148_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown___lam__0(lean_object* v_fst_1155_, lean_object* v_snd_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_){
_start:
{
size_t v_sz_1161_; size_t v___x_1162_; lean_object* v___x_1163_; 
v_sz_1161_ = lean_array_size(v_fst_1155_);
v___x_1162_ = ((size_t)0ULL);
v___x_1163_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__3(v_sz_1161_, v___x_1162_, v_fst_1155_, v___y_1157_, v___y_1158_, v___y_1159_);
if (lean_obj_tag(v___x_1163_) == 0)
{
lean_object* v_a_1164_; size_t v_sz_1165_; lean_object* v___x_1166_; 
v_a_1164_ = lean_ctor_get(v___x_1163_, 0);
lean_inc(v_a_1164_);
lean_dec_ref_known(v___x_1163_, 1);
v_sz_1165_ = lean_array_size(v_snd_1156_);
v___x_1166_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__4(v_sz_1165_, v___x_1162_, v_snd_1156_, v___y_1157_, v___y_1158_, v___y_1159_);
if (lean_obj_tag(v___x_1166_) == 0)
{
lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1176_; 
v_a_1167_ = lean_ctor_get(v___x_1166_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1166_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1169_ = v___x_1166_;
v_isShared_1170_ = v_isSharedCheck_1176_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_dec(v___x_1166_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1176_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1174_; 
v___x_1171_ = l_Array_append___redArg(v_a_1164_, v_a_1167_);
lean_dec(v_a_1167_);
v___x_1172_ = l_Lean_Doc_joinBlocks(v___x_1171_);
lean_dec_ref(v___x_1171_);
if (v_isShared_1170_ == 0)
{
lean_ctor_set(v___x_1169_, 0, v___x_1172_);
v___x_1174_ = v___x_1169_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v___x_1172_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
else
{
lean_object* v_a_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1184_; 
lean_dec(v_a_1164_);
v_a_1177_ = lean_ctor_get(v___x_1166_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v___x_1166_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1179_ = v___x_1166_;
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_a_1177_);
lean_dec(v___x_1166_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1182_; 
if (v_isShared_1180_ == 0)
{
v___x_1182_ = v___x_1179_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v_a_1177_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
}
}
else
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1192_; 
lean_dec_ref(v_snd_1156_);
v_a_1185_ = lean_ctor_get(v___x_1163_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1163_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1187_ = v___x_1163_;
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v___x_1163_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_a_1185_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown___lam__0___boxed(lean_object* v_fst_1193_, lean_object* v_snd_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown___lam__0(v_fst_1193_, v_snd_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
lean_dec(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec(v___y_1195_);
return v_res_1199_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_1200_; 
v___x_1200_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1200_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1201_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__0);
v___x_1202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1201_);
return v___x_1202_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1203_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__1);
v___x_1204_ = lean_unsigned_to_nat(0u);
v___x_1205_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1204_);
lean_ctor_set(v___x_1205_, 1, v___x_1204_);
lean_ctor_set(v___x_1205_, 2, v___x_1204_);
lean_ctor_set(v___x_1205_, 3, v___x_1204_);
lean_ctor_set(v___x_1205_, 4, v___x_1203_);
lean_ctor_set(v___x_1205_, 5, v___x_1203_);
lean_ctor_set(v___x_1205_, 6, v___x_1203_);
lean_ctor_set(v___x_1205_, 7, v___x_1203_);
lean_ctor_set(v___x_1205_, 8, v___x_1203_);
lean_ctor_set(v___x_1205_, 9, v___x_1203_);
lean_ctor_set(v___x_1205_, 10, v___x_1203_);
return v___x_1205_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1206_ = lean_unsigned_to_nat(32u);
v___x_1207_ = lean_mk_empty_array_with_capacity(v___x_1206_);
v___x_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1207_);
return v___x_1208_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__4(void){
_start:
{
size_t v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1209_ = ((size_t)5ULL);
v___x_1210_ = lean_unsigned_to_nat(0u);
v___x_1211_ = lean_unsigned_to_nat(32u);
v___x_1212_ = lean_mk_empty_array_with_capacity(v___x_1211_);
v___x_1213_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__3);
v___x_1214_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1214_, 0, v___x_1213_);
lean_ctor_set(v___x_1214_, 1, v___x_1212_);
lean_ctor_set(v___x_1214_, 2, v___x_1210_);
lean_ctor_set(v___x_1214_, 3, v___x_1210_);
lean_ctor_set_usize(v___x_1214_, 4, v___x_1209_);
return v___x_1214_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1215_ = lean_box(1);
v___x_1216_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__4);
v___x_1217_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__1);
v___x_1218_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
lean_ctor_set(v___x_1218_, 1, v___x_1216_);
lean_ctor_set(v___x_1218_, 2, v___x_1215_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg(lean_object* v_msgData_1219_, lean_object* v___y_1220_){
_start:
{
lean_object* v___x_1222_; lean_object* v_env_1223_; uint8_t v___x_1224_; lean_object* v_env_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v_scopes_1228_; lean_object* v___x_1229_; lean_object* v_opts_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1222_ = lean_st_ref_get(v___y_1220_);
v_env_1223_ = lean_ctor_get(v___x_1222_, 0);
lean_inc_ref(v_env_1223_);
lean_dec(v___x_1222_);
v___x_1224_ = 0;
v_env_1225_ = l_Lean_Environment_setRecordingDeps(v_env_1223_, v___x_1224_);
v___x_1226_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1227_ = lean_st_ref_get(v___y_1220_);
v_scopes_1228_ = lean_ctor_get(v___x_1227_, 2);
lean_inc(v_scopes_1228_);
lean_dec(v___x_1227_);
v___x_1229_ = l_List_head_x21___redArg(v___x_1226_, v_scopes_1228_);
lean_dec(v_scopes_1228_);
v_opts_1230_ = lean_ctor_get(v___x_1229_, 1);
lean_inc_ref(v_opts_1230_);
lean_dec(v___x_1229_);
v___x_1231_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__2);
v___x_1232_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__5);
v___x_1233_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1233_, 0, v_env_1225_);
lean_ctor_set(v___x_1233_, 1, v___x_1231_);
lean_ctor_set(v___x_1233_, 2, v___x_1232_);
lean_ctor_set(v___x_1233_, 3, v_opts_1230_);
v___x_1234_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1233_);
lean_ctor_set(v___x_1234_, 1, v_msgData_1219_);
v___x_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___boxed(lean_object* v_msgData_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg(v_msgData_1236_, v___y_1237_);
lean_dec(v___y_1237_);
return v_res_1239_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0(void){
_start:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1240_ = lean_box(1);
v___x_1241_ = l_Lean_MessageData_ofFormat(v___x_1240_);
return v___x_1241_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__3(void){
_start:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1245_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__2));
v___x_1246_ = l_Lean_MessageData_ofFormat(v___x_1245_);
return v___x_1246_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18(lean_object* v_x_1247_, lean_object* v_x_1248_){
_start:
{
if (lean_obj_tag(v_x_1248_) == 0)
{
return v_x_1247_;
}
else
{
lean_object* v_head_1249_; lean_object* v_tail_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1272_; 
v_head_1249_ = lean_ctor_get(v_x_1248_, 0);
v_tail_1250_ = lean_ctor_get(v_x_1248_, 1);
v_isSharedCheck_1272_ = !lean_is_exclusive(v_x_1248_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1252_ = v_x_1248_;
v_isShared_1253_ = v_isSharedCheck_1272_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_tail_1250_);
lean_inc(v_head_1249_);
lean_dec(v_x_1248_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1272_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v_before_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1270_; 
v_before_1254_ = lean_ctor_get(v_head_1249_, 0);
v_isSharedCheck_1270_ = !lean_is_exclusive(v_head_1249_);
if (v_isSharedCheck_1270_ == 0)
{
lean_object* v_unused_1271_; 
v_unused_1271_ = lean_ctor_get(v_head_1249_, 1);
lean_dec(v_unused_1271_);
v___x_1256_ = v_head_1249_;
v_isShared_1257_ = v_isSharedCheck_1270_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_before_1254_);
lean_dec(v_head_1249_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1270_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1258_; lean_object* v___x_1260_; 
v___x_1258_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0);
if (v_isShared_1257_ == 0)
{
lean_ctor_set_tag(v___x_1256_, 7);
lean_ctor_set(v___x_1256_, 1, v___x_1258_);
lean_ctor_set(v___x_1256_, 0, v_x_1247_);
v___x_1260_ = v___x_1256_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_x_1247_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v___x_1258_);
v___x_1260_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
lean_object* v___x_1261_; lean_object* v___x_1263_; 
v___x_1261_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__3);
if (v_isShared_1253_ == 0)
{
lean_ctor_set_tag(v___x_1252_, 7);
lean_ctor_set(v___x_1252_, 1, v___x_1261_);
lean_ctor_set(v___x_1252_, 0, v___x_1260_);
v___x_1263_ = v___x_1252_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v___x_1260_);
lean_ctor_set(v_reuseFailAlloc_1268_, 1, v___x_1261_);
v___x_1263_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1264_ = l_Lean_MessageData_ofSyntax(v_before_1254_);
v___x_1265_ = l_Lean_indentD(v___x_1264_);
v___x_1266_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1263_);
lean_ctor_set(v___x_1266_, 1, v___x_1265_);
v_x_1247_ = v___x_1266_;
v_x_1248_ = v_tail_1250_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__17(lean_object* v_opts_1273_, lean_object* v_opt_1274_){
_start:
{
lean_object* v_name_1275_; lean_object* v_defValue_1276_; lean_object* v_map_1277_; lean_object* v___x_1278_; 
v_name_1275_ = lean_ctor_get(v_opt_1274_, 0);
v_defValue_1276_ = lean_ctor_get(v_opt_1274_, 1);
v_map_1277_ = lean_ctor_get(v_opts_1273_, 0);
v___x_1278_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1277_, v_name_1275_);
if (lean_obj_tag(v___x_1278_) == 0)
{
uint8_t v___x_1279_; 
v___x_1279_ = lean_unbox(v_defValue_1276_);
return v___x_1279_;
}
else
{
lean_object* v_val_1280_; 
v_val_1280_ = lean_ctor_get(v___x_1278_, 0);
lean_inc(v_val_1280_);
lean_dec_ref_known(v___x_1278_, 1);
if (lean_obj_tag(v_val_1280_) == 1)
{
uint8_t v_v_1281_; 
v_v_1281_ = lean_ctor_get_uint8(v_val_1280_, 0);
lean_dec_ref_known(v_val_1280_, 0);
return v_v_1281_;
}
else
{
uint8_t v___x_1282_; 
lean_dec(v_val_1280_);
v___x_1282_ = lean_unbox(v_defValue_1276_);
return v___x_1282_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__17___boxed(lean_object* v_opts_1283_, lean_object* v_opt_1284_){
_start:
{
uint8_t v_res_1285_; lean_object* v_r_1286_; 
v_res_1285_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__17(v_opts_1283_, v_opt_1284_);
lean_dec_ref(v_opt_1284_);
lean_dec_ref(v_opts_1283_);
v_r_1286_ = lean_box(v_res_1285_);
return v_r_1286_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1290_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___closed__1));
v___x_1291_ = l_Lean_MessageData_ofFormat(v___x_1290_);
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg(lean_object* v_msgData_1292_, lean_object* v_macroStack_1293_, lean_object* v___y_1294_){
_start:
{
lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v_scopes_1298_; lean_object* v___x_1299_; lean_object* v_opts_1300_; lean_object* v___x_1301_; uint8_t v___x_1302_; 
v___x_1296_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1297_ = lean_st_ref_get(v___y_1294_);
v_scopes_1298_ = lean_ctor_get(v___x_1297_, 2);
lean_inc(v_scopes_1298_);
lean_dec(v___x_1297_);
v___x_1299_ = l_List_head_x21___redArg(v___x_1296_, v_scopes_1298_);
lean_dec(v_scopes_1298_);
v_opts_1300_ = lean_ctor_get(v___x_1299_, 1);
lean_inc_ref(v_opts_1300_);
lean_dec(v___x_1299_);
v___x_1301_ = l_Lean_Elab_pp_macroStack;
v___x_1302_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__17(v_opts_1300_, v___x_1301_);
lean_dec_ref(v_opts_1300_);
if (v___x_1302_ == 0)
{
lean_object* v___x_1303_; 
lean_dec(v_macroStack_1293_);
v___x_1303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1303_, 0, v_msgData_1292_);
return v___x_1303_;
}
else
{
if (lean_obj_tag(v_macroStack_1293_) == 0)
{
lean_object* v___x_1304_; 
v___x_1304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1304_, 0, v_msgData_1292_);
return v___x_1304_;
}
else
{
lean_object* v_head_1305_; lean_object* v_after_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1321_; 
v_head_1305_ = lean_ctor_get(v_macroStack_1293_, 0);
lean_inc(v_head_1305_);
v_after_1306_ = lean_ctor_get(v_head_1305_, 1);
v_isSharedCheck_1321_ = !lean_is_exclusive(v_head_1305_);
if (v_isSharedCheck_1321_ == 0)
{
lean_object* v_unused_1322_; 
v_unused_1322_ = lean_ctor_get(v_head_1305_, 0);
lean_dec(v_unused_1322_);
v___x_1308_ = v_head_1305_;
v_isShared_1309_ = v_isSharedCheck_1321_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_after_1306_);
lean_dec(v_head_1305_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1321_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1310_; lean_object* v___x_1312_; 
v___x_1310_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0);
if (v_isShared_1309_ == 0)
{
lean_ctor_set_tag(v___x_1308_, 7);
lean_ctor_set(v___x_1308_, 1, v___x_1310_);
lean_ctor_set(v___x_1308_, 0, v_msgData_1292_);
v___x_1312_ = v___x_1308_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_msgData_1292_);
lean_ctor_set(v_reuseFailAlloc_1320_, 1, v___x_1310_);
v___x_1312_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v_msgData_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1313_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___closed__2);
v___x_1314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1312_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1315_ = l_Lean_MessageData_ofSyntax(v_after_1306_);
v___x_1316_ = l_Lean_indentD(v___x_1315_);
v_msgData_1317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1317_, 0, v___x_1314_);
lean_ctor_set(v_msgData_1317_, 1, v___x_1316_);
v___x_1318_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18(v_msgData_1317_, v_macroStack_1293_);
v___x_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
return v___x_1319_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg___boxed(lean_object* v_msgData_1323_, lean_object* v_macroStack_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_){
_start:
{
lean_object* v_res_1327_; 
v_res_1327_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg(v_msgData_1323_, v_macroStack_1324_, v___y_1325_);
lean_dec(v___y_1325_);
return v_res_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_){
_start:
{
lean_object* v___x_1332_; 
v___x_1332_ = l_Lean_Elab_Command_getRef___redArg(v___y_1329_);
if (lean_obj_tag(v___x_1332_) == 0)
{
lean_object* v_a_1333_; lean_object* v_macroStack_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v_a_1337_; lean_object* v___x_1338_; lean_object* v_a_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1347_; 
v_a_1333_ = lean_ctor_get(v___x_1332_, 0);
lean_inc(v_a_1333_);
lean_dec_ref_known(v___x_1332_, 1);
v_macroStack_1334_ = lean_ctor_get(v___y_1329_, 4);
v___x_1335_ = l_Lean_Elab_getBetterRef(v_a_1333_, v_macroStack_1334_);
lean_dec(v_a_1333_);
v___x_1336_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg(v_msg_1328_, v___y_1330_);
v_a_1337_ = lean_ctor_get(v___x_1336_, 0);
lean_inc(v_a_1337_);
lean_dec_ref(v___x_1336_);
lean_inc(v_macroStack_1334_);
v___x_1338_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg(v_a_1337_, v_macroStack_1334_, v___y_1330_);
v_a_1339_ = lean_ctor_get(v___x_1338_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1338_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1341_ = v___x_1338_;
v_isShared_1342_ = v_isSharedCheck_1347_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_a_1339_);
lean_dec(v___x_1338_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1347_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1343_; lean_object* v___x_1345_; 
v___x_1343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1335_);
lean_ctor_set(v___x_1343_, 1, v_a_1339_);
if (v_isShared_1342_ == 0)
{
lean_ctor_set_tag(v___x_1341_, 1);
lean_ctor_set(v___x_1341_, 0, v___x_1343_);
v___x_1345_ = v___x_1341_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v___x_1343_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
lean_dec_ref(v_msg_1328_);
v_a_1348_ = lean_ctor_get(v___x_1332_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1332_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v___x_1332_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1332_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_msg_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg(v_msg_1356_, v___y_1357_, v___y_1358_);
lean_dec(v___y_1358_);
lean_dec_ref(v___y_1357_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0___redArg(lean_object* v_ref_1361_, lean_object* v_msg_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v___x_1366_; 
v___x_1366_ = l_Lean_Elab_Command_getRef___redArg(v___y_1363_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; lean_object* v_fileName_1368_; lean_object* v_fileMap_1369_; lean_object* v_currRecDepth_1370_; lean_object* v_cmdPos_1371_; lean_object* v_macroStack_1372_; lean_object* v_quotContext_x3f_1373_; lean_object* v_currMacroScope_1374_; lean_object* v_snap_x3f_1375_; lean_object* v_cancelTk_x3f_1376_; uint8_t v_suppressElabErrors_1377_; uint8_t v_checkDeprecated_1378_; lean_object* v_ref_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
lean_inc(v_a_1367_);
lean_dec_ref_known(v___x_1366_, 1);
v_fileName_1368_ = lean_ctor_get(v___y_1363_, 0);
v_fileMap_1369_ = lean_ctor_get(v___y_1363_, 1);
v_currRecDepth_1370_ = lean_ctor_get(v___y_1363_, 2);
v_cmdPos_1371_ = lean_ctor_get(v___y_1363_, 3);
v_macroStack_1372_ = lean_ctor_get(v___y_1363_, 4);
v_quotContext_x3f_1373_ = lean_ctor_get(v___y_1363_, 5);
v_currMacroScope_1374_ = lean_ctor_get(v___y_1363_, 6);
v_snap_x3f_1375_ = lean_ctor_get(v___y_1363_, 8);
v_cancelTk_x3f_1376_ = lean_ctor_get(v___y_1363_, 9);
v_suppressElabErrors_1377_ = lean_ctor_get_uint8(v___y_1363_, sizeof(void*)*10);
v_checkDeprecated_1378_ = lean_ctor_get_uint8(v___y_1363_, sizeof(void*)*10 + 1);
v_ref_1379_ = l_Lean_replaceRef(v_ref_1361_, v_a_1367_);
lean_dec(v_a_1367_);
lean_inc(v_cancelTk_x3f_1376_);
lean_inc(v_snap_x3f_1375_);
lean_inc(v_currMacroScope_1374_);
lean_inc(v_quotContext_x3f_1373_);
lean_inc(v_macroStack_1372_);
lean_inc(v_cmdPos_1371_);
lean_inc(v_currRecDepth_1370_);
lean_inc_ref(v_fileMap_1369_);
lean_inc_ref(v_fileName_1368_);
v___x_1380_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_1380_, 0, v_fileName_1368_);
lean_ctor_set(v___x_1380_, 1, v_fileMap_1369_);
lean_ctor_set(v___x_1380_, 2, v_currRecDepth_1370_);
lean_ctor_set(v___x_1380_, 3, v_cmdPos_1371_);
lean_ctor_set(v___x_1380_, 4, v_macroStack_1372_);
lean_ctor_set(v___x_1380_, 5, v_quotContext_x3f_1373_);
lean_ctor_set(v___x_1380_, 6, v_currMacroScope_1374_);
lean_ctor_set(v___x_1380_, 7, v_ref_1379_);
lean_ctor_set(v___x_1380_, 8, v_snap_x3f_1375_);
lean_ctor_set(v___x_1380_, 9, v_cancelTk_x3f_1376_);
lean_ctor_set_uint8(v___x_1380_, sizeof(void*)*10, v_suppressElabErrors_1377_);
lean_ctor_set_uint8(v___x_1380_, sizeof(void*)*10 + 1, v_checkDeprecated_1378_);
v___x_1381_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg(v_msg_1362_, v___x_1380_, v___y_1364_);
lean_dec_ref_known(v___x_1380_, 10);
return v___x_1381_;
}
else
{
lean_object* v_a_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1389_; 
lean_dec_ref(v_msg_1362_);
v_a_1382_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1384_ = v___x_1366_;
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_a_1382_);
lean_dec(v___x_1366_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1387_; 
if (v_isShared_1385_ == 0)
{
v___x_1387_ = v___x_1384_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_a_1382_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0___redArg___boxed(lean_object* v_ref_1390_, lean_object* v_msg_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_){
_start:
{
lean_object* v_res_1395_; 
v_res_1395_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0___redArg(v_ref_1390_, v_msg_1391_, v___y_1392_, v___y_1393_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
lean_dec(v_ref_1390_);
return v_res_1395_;
}
}
static lean_object* _init_l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1397_ = ((lean_object*)(l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__0));
v___x_1398_ = l_Lean_stringToMessageData(v___x_1397_);
return v___x_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0(lean_object* v_stx_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; 
v___x_1413_ = lean_unsigned_to_nat(1u);
v___x_1414_ = l_Lean_Syntax_getArg(v_stx_1403_, v___x_1413_);
if (lean_obj_tag(v___x_1414_) == 1)
{
lean_object* v_kind_1415_; 
v_kind_1415_ = lean_ctor_get(v___x_1414_, 1);
lean_inc(v_kind_1415_);
if (lean_obj_tag(v_kind_1415_) == 1)
{
lean_object* v_pre_1416_; 
v_pre_1416_ = lean_ctor_get(v_kind_1415_, 0);
lean_inc(v_pre_1416_);
if (lean_obj_tag(v_pre_1416_) == 1)
{
lean_object* v_pre_1417_; 
v_pre_1417_ = lean_ctor_get(v_pre_1416_, 0);
lean_inc(v_pre_1417_);
if (lean_obj_tag(v_pre_1417_) == 1)
{
lean_object* v_pre_1418_; 
v_pre_1418_ = lean_ctor_get(v_pre_1417_, 0);
lean_inc(v_pre_1418_);
if (lean_obj_tag(v_pre_1418_) == 1)
{
lean_object* v_pre_1419_; 
v_pre_1419_ = lean_ctor_get(v_pre_1418_, 0);
if (lean_obj_tag(v_pre_1419_) == 0)
{
lean_object* v_args_1420_; lean_object* v_str_1421_; lean_object* v_str_1422_; lean_object* v_str_1423_; lean_object* v_str_1424_; lean_object* v___x_1425_; uint8_t v___x_1426_; 
v_args_1420_ = lean_ctor_get(v___x_1414_, 2);
lean_inc_ref(v_args_1420_);
lean_dec_ref_known(v___x_1414_, 3);
v_str_1421_ = lean_ctor_get(v_kind_1415_, 1);
lean_inc_ref(v_str_1421_);
lean_dec_ref_known(v_kind_1415_, 2);
v_str_1422_ = lean_ctor_get(v_pre_1416_, 1);
lean_inc_ref(v_str_1422_);
lean_dec_ref_known(v_pre_1416_, 2);
v_str_1423_ = lean_ctor_get(v_pre_1417_, 1);
lean_inc_ref(v_str_1423_);
lean_dec_ref_known(v_pre_1417_, 2);
v_str_1424_ = lean_ctor_get(v_pre_1418_, 1);
lean_inc_ref(v_str_1424_);
lean_dec_ref_known(v_pre_1418_, 2);
v___x_1425_ = ((lean_object*)(l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__2));
v___x_1426_ = lean_string_dec_eq(v_str_1424_, v___x_1425_);
lean_dec_ref(v_str_1424_);
if (v___x_1426_ == 0)
{
lean_dec_ref(v_str_1423_);
lean_dec_ref(v_str_1422_);
lean_dec_ref(v_str_1421_);
lean_dec_ref(v_args_1420_);
goto v___jp_1407_;
}
else
{
lean_object* v___x_1427_; uint8_t v___x_1428_; 
v___x_1427_ = ((lean_object*)(l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__3));
v___x_1428_ = lean_string_dec_eq(v_str_1423_, v___x_1427_);
lean_dec_ref(v_str_1423_);
if (v___x_1428_ == 0)
{
lean_dec_ref(v_str_1422_);
lean_dec_ref(v_str_1421_);
lean_dec_ref(v_args_1420_);
goto v___jp_1407_;
}
else
{
lean_object* v___x_1429_; uint8_t v___x_1430_; 
v___x_1429_ = ((lean_object*)(l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__4));
v___x_1430_ = lean_string_dec_eq(v_str_1422_, v___x_1429_);
lean_dec_ref(v_str_1422_);
if (v___x_1430_ == 0)
{
lean_dec_ref(v_str_1421_);
lean_dec_ref(v_args_1420_);
goto v___jp_1407_;
}
else
{
lean_object* v___x_1431_; uint8_t v___x_1432_; 
v___x_1431_ = ((lean_object*)(l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__5));
v___x_1432_ = lean_string_dec_eq(v_str_1421_, v___x_1431_);
lean_dec_ref(v_str_1421_);
if (v___x_1432_ == 0)
{
lean_dec_ref(v_args_1420_);
goto v___jp_1407_;
}
else
{
lean_object* v___x_1433_; lean_object* v___x_1434_; uint8_t v___x_1435_; 
v___x_1433_ = lean_array_get_size(v_args_1420_);
v___x_1434_ = lean_unsigned_to_nat(2u);
v___x_1435_ = lean_nat_dec_eq(v___x_1433_, v___x_1434_);
if (v___x_1435_ == 0)
{
lean_dec_ref(v_args_1420_);
goto v___jp_1407_;
}
else
{
lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1436_ = lean_unsigned_to_nat(0u);
v___x_1437_ = lean_array_fget(v_args_1420_, v___x_1436_);
lean_dec_ref(v_args_1420_);
if (lean_obj_tag(v___x_1437_) == 2)
{
lean_object* v_val_1438_; lean_object* v___x_1439_; 
lean_dec(v_stx_1403_);
v_val_1438_ = lean_ctor_get(v___x_1437_, 1);
lean_inc_ref(v_val_1438_);
lean_dec_ref_known(v___x_1437_, 2);
v___x_1439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1439_, 0, v_val_1438_);
return v___x_1439_;
}
else
{
lean_dec(v___x_1437_);
goto v___jp_1407_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1418_, 2);
lean_dec_ref_known(v_pre_1417_, 2);
lean_dec_ref_known(v_pre_1416_, 2);
lean_dec_ref_known(v_kind_1415_, 2);
lean_dec_ref_known(v___x_1414_, 3);
goto v___jp_1407_;
}
}
else
{
lean_dec_ref_known(v_pre_1417_, 2);
lean_dec(v_pre_1418_);
lean_dec_ref_known(v_pre_1416_, 2);
lean_dec_ref_known(v_kind_1415_, 2);
lean_dec_ref_known(v___x_1414_, 3);
goto v___jp_1407_;
}
}
else
{
lean_dec(v_pre_1417_);
lean_dec_ref_known(v_pre_1416_, 2);
lean_dec_ref_known(v_kind_1415_, 2);
lean_dec_ref_known(v___x_1414_, 3);
goto v___jp_1407_;
}
}
else
{
lean_dec_ref_known(v_kind_1415_, 2);
lean_dec(v_pre_1416_);
lean_dec_ref_known(v___x_1414_, 3);
goto v___jp_1407_;
}
}
else
{
lean_dec_ref_known(v___x_1414_, 3);
lean_dec(v_kind_1415_);
goto v___jp_1407_;
}
}
else
{
lean_dec(v___x_1414_);
goto v___jp_1407_;
}
v___jp_1407_:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1408_ = lean_obj_once(&l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__1, &l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__1_once, _init_l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___closed__1);
lean_inc(v_stx_1403_);
v___x_1409_ = l_Lean_MessageData_ofSyntax(v_stx_1403_);
v___x_1410_ = l_Lean_indentD(v___x_1409_);
v___x_1411_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1408_);
lean_ctor_set(v___x_1411_, 1, v___x_1410_);
v___x_1412_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0___redArg(v_stx_1403_, v___x_1411_, v___y_1404_, v___y_1405_);
lean_dec(v_stx_1403_);
return v___x_1412_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0___boxed(lean_object* v_stx_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0(v_stx_1440_, v___y_1441_, v___y_1442_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown(lean_object* v_doc_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_){
_start:
{
uint8_t v___x_1449_; 
v___x_1449_ = l_Lean_isVersoDocComment(v_doc_1445_);
if (v___x_1449_ == 0)
{
lean_object* v___x_1450_; 
v___x_1450_ = l_Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0(v_doc_1445_, v_a_1446_, v_a_1447_);
return v___x_1450_;
}
else
{
lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1451_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___boxed), 4, 1);
lean_closure_set(v___x_1451_, 0, v_doc_1445_);
v___x_1452_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_1451_, v_a_1446_, v_a_1447_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v_a_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1483_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1483_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1483_ == 0)
{
v___x_1455_ = v___x_1452_;
v_isShared_1456_ = v_isSharedCheck_1483_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_a_1453_);
lean_dec(v___x_1452_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1483_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
if (lean_obj_tag(v_a_1453_) == 1)
{
lean_object* v_val_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; uint8_t v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; 
lean_del_object(v___x_1455_);
v_val_1457_ = lean_ctor_get(v_a_1453_, 0);
lean_inc(v_val_1457_);
lean_dec_ref_known(v_a_1453_, 1);
v___x_1458_ = l_Lean_TSyntax_getVersoBlocks(v_val_1457_);
lean_dec(v_val_1457_);
v___x_1459_ = lean_alloc_closure((void*)(l_Lean_Doc_elabBlocks___boxed), 11, 1);
lean_closure_set(v___x_1459_, 0, v___x_1458_);
v___x_1460_ = 0;
v___x_1461_ = lean_box(v___x_1460_);
v___x_1462_ = lean_alloc_closure((void*)(l_Lean_Doc_DocM_execForModule___boxed), 10, 3);
lean_closure_set(v___x_1462_, 0, lean_box(0));
lean_closure_set(v___x_1462_, 1, v___x_1459_);
lean_closure_set(v___x_1462_, 2, v___x_1461_);
v___x_1463_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_1462_, v_a_1446_, v_a_1447_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_object* v_a_1464_; lean_object* v_fst_1465_; lean_object* v_fst_1466_; lean_object* v_snd_1467_; lean_object* v___f_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v_a_1464_ = lean_ctor_get(v___x_1463_, 0);
lean_inc(v_a_1464_);
lean_dec_ref_known(v___x_1463_, 1);
v_fst_1465_ = lean_ctor_get(v_a_1464_, 0);
lean_inc(v_fst_1465_);
lean_dec(v_a_1464_);
v_fst_1466_ = lean_ctor_get(v_fst_1465_, 0);
lean_inc(v_fst_1466_);
v_snd_1467_ = lean_ctor_get(v_fst_1465_, 1);
lean_inc(v_snd_1467_);
lean_dec(v_fst_1465_);
v___f_1468_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown___lam__0___boxed), 6, 2);
lean_closure_set(v___f_1468_, 0, v_fst_1466_);
lean_closure_set(v___f_1468_, 1, v_snd_1467_);
v___x_1469_ = lean_alloc_closure((void*)(l_Lean_Doc_MarkdownM_run_x27___boxed), 4, 1);
lean_closure_set(v___x_1469_, 0, v___f_1468_);
v___x_1470_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_1469_, v_a_1446_, v_a_1447_);
return v___x_1470_;
}
else
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1478_; 
v_a_1471_ = lean_ctor_get(v___x_1463_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1473_ = v___x_1463_;
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1463_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1476_; 
if (v_isShared_1474_ == 0)
{
v___x_1476_ = v___x_1473_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v_a_1471_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
}
else
{
lean_object* v___x_1479_; lean_object* v___x_1481_; 
lean_dec(v_a_1453_);
v___x_1479_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__7));
if (v_isShared_1456_ == 0)
{
lean_ctor_set(v___x_1455_, 0, v___x_1479_);
v___x_1481_ = v___x_1455_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v___x_1479_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
}
else
{
lean_object* v_a_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1491_; 
v_a_1484_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1491_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1491_ == 0)
{
v___x_1486_ = v___x_1452_;
v_isShared_1487_ = v_isSharedCheck_1491_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_a_1484_);
lean_dec(v___x_1452_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1491_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v___x_1489_; 
if (v_isShared_1487_ == 0)
{
v___x_1489_ = v___x_1486_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v_a_1484_);
v___x_1489_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
return v___x_1489_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown___boxed(lean_object* v_doc_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown(v_doc_1492_, v_a_1493_, v_a_1494_);
lean_dec(v_a_1494_);
lean_dec_ref(v_a_1493_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1(lean_object* v_p_1497_, lean_object* v_level_1498_, lean_object* v_part_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_){
_start:
{
lean_object* v___x_1504_; 
v___x_1504_ = l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1___redArg(v_level_1498_, v_part_1499_, v_a_1500_, v_a_1501_, v_a_1502_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1___boxed(lean_object* v_p_1505_, lean_object* v_level_1506_, lean_object* v_part_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_){
_start:
{
lean_object* v_res_1512_; 
v_res_1512_ = l_Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1(v_p_1505_, v_level_1506_, v_part_1507_, v_a_1508_, v_a_1509_, v_a_1510_);
lean_dec(v_a_1510_);
lean_dec_ref(v_a_1509_);
lean_dec(v_a_1508_);
lean_dec(v_level_1506_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0(lean_object* v_00_u03b1_1513_, lean_object* v_ref_1514_, lean_object* v_msg_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_){
_start:
{
lean_object* v___x_1519_; 
v___x_1519_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0___redArg(v_ref_1514_, v_msg_1515_, v___y_1516_, v___y_1517_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1520_, lean_object* v_ref_1521_, lean_object* v_msg_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0(v_00_u03b1_1520_, v_ref_1521_, v_msg_1522_, v___y_1523_, v___y_1524_);
lean_dec(v___y_1524_);
lean_dec_ref(v___y_1523_);
lean_dec(v_ref_1521_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__5(lean_object* v_p_1527_, lean_object* v___x_1528_, size_t v_sz_1529_, size_t v_i_1530_, lean_object* v_bs_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_){
_start:
{
lean_object* v___x_1536_; 
v___x_1536_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__5___redArg(v___x_1528_, v_sz_1529_, v_i_1530_, v_bs_1531_, v___y_1532_, v___y_1533_, v___y_1534_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__5___boxed(lean_object* v_p_1537_, lean_object* v___x_1538_, lean_object* v_sz_1539_, lean_object* v_i_1540_, lean_object* v_bs_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_){
_start:
{
size_t v_sz_boxed_1546_; size_t v_i_boxed_1547_; lean_object* v_res_1548_; 
v_sz_boxed_1546_ = lean_unbox_usize(v_sz_1539_);
lean_dec(v_sz_1539_);
v_i_boxed_1547_ = lean_unbox_usize(v_i_1540_);
lean_dec(v_i_1540_);
v_res_1548_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__5(v_p_1537_, v___x_1538_, v_sz_boxed_1546_, v_i_boxed_1547_, v_bs_1541_, v___y_1542_, v___y_1543_, v___y_1544_);
lean_dec(v___y_1544_);
lean_dec_ref(v___y_1543_);
lean_dec(v___y_1542_);
lean_dec(v___x_1538_);
return v_res_1548_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6(lean_object* v_msgData_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_){
_start:
{
lean_object* v___x_1553_; 
v___x_1553_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg(v_msgData_1549_, v___y_1551_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___boxed(lean_object* v_msgData_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6(v_msgData_1554_, v___y_1555_, v___y_1556_);
lean_dec(v___y_1556_);
lean_dec_ref(v___y_1555_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1559_, lean_object* v_msg_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_){
_start:
{
lean_object* v___x_1564_; 
v___x_1564_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg(v_msg_1560_, v___y_1561_, v___y_1562_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1565_, lean_object* v_msg_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1(v_00_u03b1_1565_, v_msg_1566_, v___y_1567_, v___y_1568_);
lean_dec(v___y_1568_);
lean_dec_ref(v___y_1567_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7(lean_object* v_msgData_1571_, lean_object* v_macroStack_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_){
_start:
{
lean_object* v___x_1576_; 
v___x_1576_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___redArg(v_msgData_1571_, v_macroStack_1572_, v___y_1574_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7___boxed(lean_object* v_msgData_1577_, lean_object* v_macroStack_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7(v_msgData_1577_, v_macroStack_1578_, v___y_1579_, v___y_1580_);
lean_dec(v___y_1580_);
lean_dec_ref(v___y_1579_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0(lean_object* v___x_1583_, lean_object* v___x_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v___x_1592_; 
v___x_1592_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v___x_1583_, v___x_1584_, v___y_1589_, v___y_1590_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0___boxed(lean_object* v___x_1593_, lean_object* v___x_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v_res_1602_; 
v_res_1602_ = l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0(v___x_1593_, v___x_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_);
lean_dec(v___y_1600_);
lean_dec_ref(v___y_1599_);
lean_dec(v___y_1598_);
lean_dec_ref(v___y_1597_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__1(lean_object* v_addEntryFn_1603_, lean_object* v___x_1604_, lean_object* v_s_1605_){
_start:
{
lean_object* v_importedEntries_1606_; lean_object* v_state_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1615_; 
v_importedEntries_1606_ = lean_ctor_get(v_s_1605_, 0);
v_state_1607_ = lean_ctor_get(v_s_1605_, 1);
v_isSharedCheck_1615_ = !lean_is_exclusive(v_s_1605_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1609_ = v_s_1605_;
v_isShared_1610_ = v_isSharedCheck_1615_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_state_1607_);
lean_inc(v_importedEntries_1606_);
lean_dec(v_s_1605_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1615_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v_state_1611_; lean_object* v___x_1613_; 
v_state_1611_ = lean_apply_2(v_addEntryFn_1603_, v_state_1607_, v___x_1604_);
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 1, v_state_1611_);
v___x_1613_ = v___x_1609_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_importedEntries_1606_);
lean_ctor_set(v_reuseFailAlloc_1614_, 1, v_state_1611_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
return v___x_1613_;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3(void){
_start:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1623_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2));
v___x_1624_ = l_Lean_stringToMessageData(v___x_1623_);
return v___x_1624_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9(void){
_start:
{
lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1635_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8));
v___x_1636_ = l_Lean_stringToMessageData(v___x_1635_);
return v___x_1636_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11(void){
_start:
{
lean_object* v___x_1638_; lean_object* v___x_1639_; 
v___x_1638_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__10));
v___x_1639_ = l_Lean_stringToMessageData(v___x_1638_);
return v___x_1639_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13(void){
_start:
{
lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1641_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12));
v___x_1642_ = l_Lean_stringToMessageData(v___x_1641_);
return v___x_1642_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__15(void){
_start:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1644_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__14));
v___x_1645_ = l_Lean_stringToMessageData(v___x_1644_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension(lean_object* v_x_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_){
_start:
{
lean_object* v___y_1651_; lean_object* v_messages_1652_; lean_object* v_scopes_1653_; lean_object* v_usedQuotCtxts_1654_; lean_object* v_nextMacroScope_1655_; lean_object* v_maxRecDepth_1656_; lean_object* v_ngen_1657_; lean_object* v_auxDeclNGen_1658_; lean_object* v_infoState_1659_; lean_object* v_traceState_1660_; lean_object* v_snapshotTasks_1661_; lean_object* v_prevLinterStates_1662_; lean_object* v_codeQualityEntryTasks_1663_; lean_object* v___y_1664_; lean_object* v___x_1669_; uint8_t v___x_1670_; 
v___x_1669_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1));
lean_inc(v_x_1646_);
v___x_1670_ = l_Lean_Syntax_isOfKind(v_x_1646_, v___x_1669_);
if (v___x_1670_ == 0)
{
lean_object* v___x_1671_; lean_object* v___x_1672_; 
lean_dec(v_x_1646_);
v___x_1671_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3);
v___x_1672_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg(v___x_1671_, v_a_1647_, v_a_1648_);
return v___x_1672_;
}
else
{
lean_object* v___x_1673_; lean_object* v___x_1674_; uint8_t v___x_1675_; 
v___x_1673_ = lean_unsigned_to_nat(0u);
v___x_1674_ = l_Lean_Syntax_getArg(v_x_1646_, v___x_1673_);
lean_inc(v___x_1674_);
v___x_1675_ = l_Lean_Syntax_matchesNull(v___x_1674_, v___x_1673_);
if (v___x_1675_ == 0)
{
lean_object* v___x_1676_; uint8_t v___x_1677_; 
v___x_1676_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1674_);
v___x_1677_ = l_Lean_Syntax_matchesNull(v___x_1674_, v___x_1676_);
if (v___x_1677_ == 0)
{
lean_object* v___x_1678_; lean_object* v___x_1679_; 
lean_dec(v___x_1674_);
lean_dec(v_x_1646_);
v___x_1678_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3);
v___x_1679_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg(v___x_1678_, v_a_1647_, v_a_1648_);
return v___x_1679_;
}
else
{
lean_object* v_docs_1680_; lean_object* v___x_1681_; uint8_t v___x_1682_; 
v_docs_1680_ = l_Lean_Syntax_getArg(v___x_1674_, v___x_1673_);
lean_dec(v___x_1674_);
v___x_1681_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5));
lean_inc(v_docs_1680_);
v___x_1682_ = l_Lean_Syntax_isOfKind(v_docs_1680_, v___x_1681_);
if (v___x_1682_ == 0)
{
lean_object* v___x_1683_; lean_object* v___x_1684_; 
lean_dec(v_docs_1680_);
lean_dec(v_x_1646_);
v___x_1683_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3);
v___x_1684_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg(v___x_1683_, v_a_1647_, v_a_1648_);
return v___x_1684_;
}
else
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; uint8_t v___x_1688_; 
v___x_1685_ = lean_unsigned_to_nat(2u);
v___x_1686_ = l_Lean_Syntax_getArg(v_x_1646_, v___x_1685_);
lean_dec(v_x_1646_);
v___x_1687_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7));
lean_inc(v___x_1686_);
v___x_1688_ = l_Lean_Syntax_isOfKind(v___x_1686_, v___x_1687_);
if (v___x_1688_ == 0)
{
lean_object* v___x_1689_; lean_object* v___x_1690_; 
lean_dec(v___x_1686_);
lean_dec(v_docs_1680_);
v___x_1689_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3);
v___x_1690_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg(v___x_1689_, v_a_1647_, v_a_1648_);
return v___x_1690_;
}
else
{
lean_object* v___x_1691_; lean_object* v___f_1692_; lean_object* v___x_1693_; 
v___x_1691_ = lean_box(0);
lean_inc(v___x_1686_);
v___f_1692_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1692_, 0, v___x_1686_);
lean_closure_set(v___f_1692_, 1, v___x_1691_);
v___x_1693_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_1692_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v_a_1694_; lean_object* v___y_1696_; lean_object* v___y_1697_; lean_object* v___y_1734_; lean_object* v___y_1735_; lean_object* v___x_1745_; lean_object* v_env_1746_; lean_object* v___x_1747_; 
v_a_1694_ = lean_ctor_get(v___x_1693_, 0);
lean_inc_n(v_a_1694_, 2);
lean_dec_ref_known(v___x_1693_, 1);
v___x_1745_ = lean_st_ref_get(v_a_1648_);
v_env_1746_ = lean_ctor_get(v___x_1745_, 0);
lean_inc_ref(v_env_1746_);
lean_dec(v___x_1745_);
v___x_1747_ = l_Lean_Parser_Tactic_Doc_alternativeOfTactic(v_env_1746_, v_a_1694_);
if (lean_obj_tag(v___x_1747_) == 1)
{
lean_object* v_val_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
lean_dec(v_docs_1680_);
v_val_1748_ = lean_ctor_get(v___x_1747_, 0);
lean_inc(v_val_1748_);
lean_dec_ref_known(v___x_1747_, 1);
v___x_1749_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9);
v___x_1750_ = l_Lean_MessageData_ofConstName(v_a_1694_, v___x_1675_);
v___x_1751_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1749_);
lean_ctor_set(v___x_1751_, 1, v___x_1750_);
v___x_1752_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13);
v___x_1753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1751_);
lean_ctor_set(v___x_1753_, 1, v___x_1752_);
v___x_1754_ = l_Lean_MessageData_ofConstName(v_val_1748_, v___x_1675_);
v___x_1755_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1753_);
lean_ctor_set(v___x_1755_, 1, v___x_1754_);
v___x_1756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1755_);
lean_ctor_set(v___x_1756_, 1, v___x_1749_);
v___x_1757_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0___redArg(v___x_1686_, v___x_1756_, v_a_1647_, v_a_1648_);
lean_dec(v___x_1686_);
return v___x_1757_;
}
else
{
lean_dec(v___x_1747_);
v___y_1734_ = v_a_1647_;
v___y_1735_ = v_a_1648_;
goto v___jp_1733_;
}
v___jp_1695_:
{
lean_object* v___x_1698_; 
v___x_1698_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown(v_docs_1680_, v___y_1696_, v___y_1697_);
if (lean_obj_tag(v___x_1698_) == 0)
{
lean_object* v_a_1699_; lean_object* v___x_1700_; lean_object* v_env_1701_; lean_object* v_messages_1702_; lean_object* v_scopes_1703_; lean_object* v_usedQuotCtxts_1704_; lean_object* v_nextMacroScope_1705_; lean_object* v_maxRecDepth_1706_; lean_object* v_ngen_1707_; lean_object* v_auxDeclNGen_1708_; lean_object* v_infoState_1709_; lean_object* v_traceState_1710_; lean_object* v_snapshotTasks_1711_; lean_object* v_prevLinterStates_1712_; lean_object* v_codeQualityEntryTasks_1713_; lean_object* v___x_1714_; lean_object* v_toEnvExtension_1715_; lean_object* v_addEntryFn_1716_; lean_object* v_asyncMode_1717_; uint8_t v_logWrites_1718_; lean_object* v___x_1719_; lean_object* v___f_1720_; lean_object* v___x_1721_; 
v_a_1699_ = lean_ctor_get(v___x_1698_, 0);
lean_inc(v_a_1699_);
lean_dec_ref_known(v___x_1698_, 1);
v___x_1700_ = lean_st_ref_take(v___y_1697_);
v_env_1701_ = lean_ctor_get(v___x_1700_, 0);
lean_inc_ref(v_env_1701_);
v_messages_1702_ = lean_ctor_get(v___x_1700_, 1);
lean_inc_ref(v_messages_1702_);
v_scopes_1703_ = lean_ctor_get(v___x_1700_, 2);
lean_inc(v_scopes_1703_);
v_usedQuotCtxts_1704_ = lean_ctor_get(v___x_1700_, 3);
lean_inc(v_usedQuotCtxts_1704_);
v_nextMacroScope_1705_ = lean_ctor_get(v___x_1700_, 4);
lean_inc(v_nextMacroScope_1705_);
v_maxRecDepth_1706_ = lean_ctor_get(v___x_1700_, 5);
lean_inc(v_maxRecDepth_1706_);
v_ngen_1707_ = lean_ctor_get(v___x_1700_, 6);
lean_inc_ref(v_ngen_1707_);
v_auxDeclNGen_1708_ = lean_ctor_get(v___x_1700_, 7);
lean_inc_ref(v_auxDeclNGen_1708_);
v_infoState_1709_ = lean_ctor_get(v___x_1700_, 8);
lean_inc_ref(v_infoState_1709_);
v_traceState_1710_ = lean_ctor_get(v___x_1700_, 9);
lean_inc_ref(v_traceState_1710_);
v_snapshotTasks_1711_ = lean_ctor_get(v___x_1700_, 10);
lean_inc_ref(v_snapshotTasks_1711_);
v_prevLinterStates_1712_ = lean_ctor_get(v___x_1700_, 11);
lean_inc(v_prevLinterStates_1712_);
v_codeQualityEntryTasks_1713_ = lean_ctor_get(v___x_1700_, 12);
lean_inc_ref(v_codeQualityEntryTasks_1713_);
lean_dec(v___x_1700_);
v___x_1714_ = l_Lean_Parser_Tactic_Doc_tacticDocExtExt;
v_toEnvExtension_1715_ = lean_ctor_get(v___x_1714_, 0);
v_addEntryFn_1716_ = lean_ctor_get(v___x_1714_, 3);
v_asyncMode_1717_ = lean_ctor_get(v_toEnvExtension_1715_, 2);
v_logWrites_1718_ = lean_ctor_get_uint8(v_toEnvExtension_1715_, sizeof(void*)*6);
v___x_1719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1719_, 0, v_a_1694_);
lean_ctor_set(v___x_1719_, 1, v_a_1699_);
lean_inc(v_addEntryFn_1716_);
v___f_1720_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__1), 3, 2);
lean_closure_set(v___f_1720_, 0, v_addEntryFn_1716_);
lean_closure_set(v___f_1720_, 1, v___x_1719_);
v___x_1721_ = lean_box(0);
if (v_logWrites_1718_ == 0)
{
lean_object* v___x_1722_; 
lean_inc_ref(v_toEnvExtension_1715_);
v___x_1722_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1715_, v_env_1701_, v___f_1720_, v_asyncMode_1717_, v___x_1721_, v___x_1688_);
v___y_1651_ = v___y_1697_;
v_messages_1652_ = v_messages_1702_;
v_scopes_1653_ = v_scopes_1703_;
v_usedQuotCtxts_1654_ = v_usedQuotCtxts_1704_;
v_nextMacroScope_1655_ = v_nextMacroScope_1705_;
v_maxRecDepth_1656_ = v_maxRecDepth_1706_;
v_ngen_1657_ = v_ngen_1707_;
v_auxDeclNGen_1658_ = v_auxDeclNGen_1708_;
v_infoState_1659_ = v_infoState_1709_;
v_traceState_1660_ = v_traceState_1710_;
v_snapshotTasks_1661_ = v_snapshotTasks_1711_;
v_prevLinterStates_1662_ = v_prevLinterStates_1712_;
v_codeQualityEntryTasks_1663_ = v_codeQualityEntryTasks_1713_;
v___y_1664_ = v___x_1722_;
goto v___jp_1650_;
}
else
{
lean_object* v___x_1723_; lean_object* v___x_1724_; 
lean_inc_ref_n(v_toEnvExtension_1715_, 2);
v___x_1723_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1715_, v_env_1701_);
lean_dec_ref(v_env_1701_);
v___x_1724_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1715_, v___x_1723_, v___f_1720_, v_asyncMode_1717_, v___x_1721_, v___x_1688_);
v___y_1651_ = v___y_1697_;
v_messages_1652_ = v_messages_1702_;
v_scopes_1653_ = v_scopes_1703_;
v_usedQuotCtxts_1654_ = v_usedQuotCtxts_1704_;
v_nextMacroScope_1655_ = v_nextMacroScope_1705_;
v_maxRecDepth_1656_ = v_maxRecDepth_1706_;
v_ngen_1657_ = v_ngen_1707_;
v_auxDeclNGen_1658_ = v_auxDeclNGen_1708_;
v_infoState_1659_ = v_infoState_1709_;
v_traceState_1660_ = v_traceState_1710_;
v_snapshotTasks_1661_ = v_snapshotTasks_1711_;
v_prevLinterStates_1662_ = v_prevLinterStates_1712_;
v_codeQualityEntryTasks_1663_ = v_codeQualityEntryTasks_1713_;
v___y_1664_ = v___x_1724_;
goto v___jp_1650_;
}
}
else
{
lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1732_; 
lean_dec(v_a_1694_);
v_a_1725_ = lean_ctor_get(v___x_1698_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1698_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1727_ = v___x_1698_;
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___x_1698_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
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
return v___x_1730_;
}
}
}
}
v___jp_1733_:
{
lean_object* v___x_1736_; lean_object* v_env_1737_; uint8_t v___x_1738_; 
v___x_1736_ = lean_st_ref_get(v___y_1735_);
v_env_1737_ = lean_ctor_get(v___x_1736_, 0);
lean_inc_ref(v_env_1737_);
lean_dec(v___x_1736_);
v___x_1738_ = l_Lean_Parser_Tactic_Doc_isTactic(v_env_1737_, v_a_1694_);
if (v___x_1738_ == 0)
{
lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
lean_dec(v_docs_1680_);
v___x_1739_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9);
v___x_1740_ = l_Lean_MessageData_ofConstName(v_a_1694_, v___x_1675_);
v___x_1741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1739_);
lean_ctor_set(v___x_1741_, 1, v___x_1740_);
v___x_1742_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11);
v___x_1743_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1743_, 0, v___x_1741_);
lean_ctor_set(v___x_1743_, 1, v___x_1742_);
v___x_1744_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0___redArg(v___x_1686_, v___x_1743_, v___y_1734_, v___y_1735_);
lean_dec(v___x_1686_);
return v___x_1744_;
}
else
{
lean_dec(v___x_1686_);
v___y_1696_ = v___y_1734_;
v___y_1697_ = v___y_1735_;
goto v___jp_1695_;
}
}
}
else
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1765_; 
lean_dec(v___x_1686_);
lean_dec(v_docs_1680_);
v_a_1758_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1760_ = v___x_1693_;
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v___x_1693_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1763_; 
if (v_isShared_1761_ == 0)
{
v___x_1763_ = v___x_1760_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_a_1758_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1766_; lean_object* v_cmd_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
lean_dec(v___x_1674_);
v___x_1766_ = lean_unsigned_to_nat(1u);
v_cmd_1767_ = l_Lean_Syntax_getArg(v_x_1646_, v___x_1766_);
lean_dec(v_x_1646_);
v___x_1768_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__15, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__15_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__15);
v___x_1769_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0___redArg(v_cmd_1767_, v___x_1768_, v_a_1647_, v_a_1648_);
lean_dec(v_cmd_1767_);
return v___x_1769_;
}
}
v___jp_1650_:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1665_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_1665_, 0, v___y_1664_);
lean_ctor_set(v___x_1665_, 1, v_messages_1652_);
lean_ctor_set(v___x_1665_, 2, v_scopes_1653_);
lean_ctor_set(v___x_1665_, 3, v_usedQuotCtxts_1654_);
lean_ctor_set(v___x_1665_, 4, v_nextMacroScope_1655_);
lean_ctor_set(v___x_1665_, 5, v_maxRecDepth_1656_);
lean_ctor_set(v___x_1665_, 6, v_ngen_1657_);
lean_ctor_set(v___x_1665_, 7, v_auxDeclNGen_1658_);
lean_ctor_set(v___x_1665_, 8, v_infoState_1659_);
lean_ctor_set(v___x_1665_, 9, v_traceState_1660_);
lean_ctor_set(v___x_1665_, 10, v_snapshotTasks_1661_);
lean_ctor_set(v___x_1665_, 11, v_prevLinterStates_1662_);
lean_ctor_set(v___x_1665_, 12, v_codeQualityEntryTasks_1663_);
v___x_1666_ = lean_st_ref_put(v___y_1651_, v___x_1665_);
v___x_1667_ = lean_box(0);
v___x_1668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1667_);
return v___x_1668_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___boxed(lean_object* v_x_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_){
_start:
{
lean_object* v_res_1774_; 
v_res_1774_ = l_Lean_Elab_Tactic_Doc_elabTacticExtension(v_x_1770_, v_a_1771_, v_a_1772_);
lean_dec(v_a_1772_);
lean_dec_ref(v_a_1771_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1(){
_start:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1786_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_1787_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1));
v___x_1788_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4));
v___x_1789_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___boxed), 4, 0);
v___x_1790_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1786_, v___x_1787_, v___x_1788_, v___x_1789_);
return v___x_1790_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___boxed(lean_object* v_a_1791_){
_start:
{
lean_object* v_res_1792_; 
v_res_1792_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1();
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3(){
_start:
{
lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___x_1819_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4));
v___x_1820_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__6));
v___x_1821_ = l_Lean_addBuiltinDeclarationRanges(v___x_1819_, v___x_1820_);
return v___x_1821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___boxed(lean_object* v_a_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3();
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___lam__0(lean_object* v_addEntryFn_1824_, lean_object* v___x_1825_, lean_object* v_s_1826_){
_start:
{
lean_object* v_importedEntries_1827_; lean_object* v_state_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1836_; 
v_importedEntries_1827_ = lean_ctor_get(v_s_1826_, 0);
v_state_1828_ = lean_ctor_get(v_s_1826_, 1);
v_isSharedCheck_1836_ = !lean_is_exclusive(v_s_1826_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1830_ = v_s_1826_;
v_isShared_1831_ = v_isSharedCheck_1836_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_state_1828_);
lean_inc(v_importedEntries_1827_);
lean_dec(v_s_1826_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1836_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v_state_1832_; lean_object* v___x_1834_; 
v_state_1832_ = lean_apply_2(v_addEntryFn_1824_, v_state_1828_, v___x_1825_);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 1, v_state_1832_);
v___x_1834_ = v___x_1830_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_importedEntries_1827_);
lean_ctor_set(v_reuseFailAlloc_1835_, 1, v_state_1832_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1(void){
_start:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1838_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__0));
v___x_1839_ = l_Lean_stringToMessageData(v___x_1838_);
return v___x_1839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag(lean_object* v_x_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_){
_start:
{
lean_object* v_messages_1854_; lean_object* v_scopes_1855_; lean_object* v_usedQuotCtxts_1856_; lean_object* v_nextMacroScope_1857_; lean_object* v_maxRecDepth_1858_; lean_object* v_ngen_1859_; lean_object* v_auxDeclNGen_1860_; lean_object* v_infoState_1861_; lean_object* v_traceState_1862_; lean_object* v_snapshotTasks_1863_; lean_object* v_prevLinterStates_1864_; lean_object* v_codeQualityEntryTasks_1865_; lean_object* v___y_1866_; lean_object* v___y_1867_; lean_object* v___y_1868_; uint8_t v___y_1873_; lean_object* v___y_1874_; lean_object* v___y_1875_; lean_object* v___y_1876_; lean_object* v_a_1877_; lean_object* v_doc_1908_; lean_object* v___y_1909_; lean_object* v___y_1910_; lean_object* v___x_1942_; uint8_t v___x_1943_; 
v___x_1942_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5));
lean_inc(v_x_1849_);
v___x_1943_ = l_Lean_Syntax_isOfKind(v_x_1849_, v___x_1942_);
if (v___x_1943_ == 0)
{
lean_object* v___x_1944_; lean_object* v___x_1945_; 
lean_dec(v_x_1849_);
v___x_1944_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1, &l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1);
v___x_1945_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg(v___x_1944_, v_a_1850_, v_a_1851_);
return v___x_1945_;
}
else
{
lean_object* v___x_1946_; lean_object* v___x_1947_; uint8_t v___x_1948_; 
v___x_1946_ = lean_unsigned_to_nat(0u);
v___x_1947_ = l_Lean_Syntax_getArg(v_x_1849_, v___x_1946_);
v___x_1948_ = l_Lean_Syntax_isNone(v___x_1947_);
if (v___x_1948_ == 0)
{
lean_object* v___x_1949_; uint8_t v___x_1950_; 
v___x_1949_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1947_);
v___x_1950_ = l_Lean_Syntax_matchesNull(v___x_1947_, v___x_1949_);
if (v___x_1950_ == 0)
{
lean_object* v___x_1951_; lean_object* v___x_1952_; 
lean_dec(v___x_1947_);
lean_dec(v_x_1849_);
v___x_1951_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1, &l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1);
v___x_1952_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg(v___x_1951_, v_a_1850_, v_a_1851_);
return v___x_1952_;
}
else
{
lean_object* v_doc_1953_; lean_object* v___x_1954_; uint8_t v___x_1955_; 
v_doc_1953_ = l_Lean_Syntax_getArg(v___x_1947_, v___x_1946_);
lean_dec(v___x_1947_);
v___x_1954_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5));
lean_inc(v_doc_1953_);
v___x_1955_ = l_Lean_Syntax_isOfKind(v_doc_1953_, v___x_1954_);
if (v___x_1955_ == 0)
{
lean_object* v___x_1956_; lean_object* v___x_1957_; 
lean_dec(v_doc_1953_);
lean_dec(v_x_1849_);
v___x_1956_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1, &l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1);
v___x_1957_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg(v___x_1956_, v_a_1850_, v_a_1851_);
return v___x_1957_;
}
else
{
lean_object* v___x_1958_; 
v___x_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1958_, 0, v_doc_1953_);
v_doc_1908_ = v___x_1958_;
v___y_1909_ = v_a_1850_;
v___y_1910_ = v_a_1851_;
goto v___jp_1907_;
}
}
}
else
{
lean_object* v___x_1959_; 
lean_dec(v___x_1947_);
v___x_1959_ = lean_box(0);
v_doc_1908_ = v___x_1959_;
v___y_1909_ = v_a_1850_;
v___y_1910_ = v_a_1851_;
goto v___jp_1907_;
}
}
v___jp_1853_:
{
lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1869_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_1869_, 0, v___y_1868_);
lean_ctor_set(v___x_1869_, 1, v_messages_1854_);
lean_ctor_set(v___x_1869_, 2, v_scopes_1855_);
lean_ctor_set(v___x_1869_, 3, v_usedQuotCtxts_1856_);
lean_ctor_set(v___x_1869_, 4, v_nextMacroScope_1857_);
lean_ctor_set(v___x_1869_, 5, v_maxRecDepth_1858_);
lean_ctor_set(v___x_1869_, 6, v_ngen_1859_);
lean_ctor_set(v___x_1869_, 7, v_auxDeclNGen_1860_);
lean_ctor_set(v___x_1869_, 8, v_infoState_1861_);
lean_ctor_set(v___x_1869_, 9, v_traceState_1862_);
lean_ctor_set(v___x_1869_, 10, v_snapshotTasks_1863_);
lean_ctor_set(v___x_1869_, 11, v_prevLinterStates_1864_);
lean_ctor_set(v___x_1869_, 12, v_codeQualityEntryTasks_1865_);
v___x_1870_ = lean_st_ref_put(v___y_1867_, v___x_1869_);
v___x_1871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1871_, 0, v___y_1866_);
return v___x_1871_;
}
v___jp_1872_:
{
lean_object* v___x_1878_; lean_object* v_env_1879_; lean_object* v_messages_1880_; lean_object* v_scopes_1881_; lean_object* v_usedQuotCtxts_1882_; lean_object* v_nextMacroScope_1883_; lean_object* v_maxRecDepth_1884_; lean_object* v_ngen_1885_; lean_object* v_auxDeclNGen_1886_; lean_object* v_infoState_1887_; lean_object* v_traceState_1888_; lean_object* v_snapshotTasks_1889_; lean_object* v_prevLinterStates_1890_; lean_object* v_codeQualityEntryTasks_1891_; lean_object* v___x_1892_; lean_object* v_toEnvExtension_1893_; lean_object* v_addEntryFn_1894_; lean_object* v_asyncMode_1895_; uint8_t v_logWrites_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___f_1902_; lean_object* v___x_1903_; 
v___x_1878_ = lean_st_ref_take(v___y_1876_);
v_env_1879_ = lean_ctor_get(v___x_1878_, 0);
lean_inc_ref(v_env_1879_);
v_messages_1880_ = lean_ctor_get(v___x_1878_, 1);
lean_inc_ref(v_messages_1880_);
v_scopes_1881_ = lean_ctor_get(v___x_1878_, 2);
lean_inc(v_scopes_1881_);
v_usedQuotCtxts_1882_ = lean_ctor_get(v___x_1878_, 3);
lean_inc(v_usedQuotCtxts_1882_);
v_nextMacroScope_1883_ = lean_ctor_get(v___x_1878_, 4);
lean_inc(v_nextMacroScope_1883_);
v_maxRecDepth_1884_ = lean_ctor_get(v___x_1878_, 5);
lean_inc(v_maxRecDepth_1884_);
v_ngen_1885_ = lean_ctor_get(v___x_1878_, 6);
lean_inc_ref(v_ngen_1885_);
v_auxDeclNGen_1886_ = lean_ctor_get(v___x_1878_, 7);
lean_inc_ref(v_auxDeclNGen_1886_);
v_infoState_1887_ = lean_ctor_get(v___x_1878_, 8);
lean_inc_ref(v_infoState_1887_);
v_traceState_1888_ = lean_ctor_get(v___x_1878_, 9);
lean_inc_ref(v_traceState_1888_);
v_snapshotTasks_1889_ = lean_ctor_get(v___x_1878_, 10);
lean_inc_ref(v_snapshotTasks_1889_);
v_prevLinterStates_1890_ = lean_ctor_get(v___x_1878_, 11);
lean_inc(v_prevLinterStates_1890_);
v_codeQualityEntryTasks_1891_ = lean_ctor_get(v___x_1878_, 12);
lean_inc_ref(v_codeQualityEntryTasks_1891_);
lean_dec(v___x_1878_);
v___x_1892_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_1893_ = lean_ctor_get(v___x_1892_, 0);
v_addEntryFn_1894_ = lean_ctor_get(v___x_1892_, 3);
v_asyncMode_1895_ = lean_ctor_get(v_toEnvExtension_1893_, 2);
v_logWrites_1896_ = lean_ctor_get_uint8(v_toEnvExtension_1893_, sizeof(void*)*6);
v___x_1897_ = lean_box(0);
v___x_1898_ = l_Lean_TSyntax_getId(v___y_1875_);
lean_dec(v___y_1875_);
v___x_1899_ = l_Lean_TSyntax_getString(v___y_1874_);
lean_dec(v___y_1874_);
v___x_1900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1899_);
lean_ctor_set(v___x_1900_, 1, v_a_1877_);
v___x_1901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1898_);
lean_ctor_set(v___x_1901_, 1, v___x_1900_);
lean_inc(v_addEntryFn_1894_);
v___f_1902_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___lam__0), 3, 2);
lean_closure_set(v___f_1902_, 0, v_addEntryFn_1894_);
lean_closure_set(v___f_1902_, 1, v___x_1901_);
v___x_1903_ = lean_box(0);
if (v_logWrites_1896_ == 0)
{
lean_object* v___x_1904_; 
lean_inc_ref(v_toEnvExtension_1893_);
v___x_1904_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1893_, v_env_1879_, v___f_1902_, v_asyncMode_1895_, v___x_1903_, v___y_1873_);
v_messages_1854_ = v_messages_1880_;
v_scopes_1855_ = v_scopes_1881_;
v_usedQuotCtxts_1856_ = v_usedQuotCtxts_1882_;
v_nextMacroScope_1857_ = v_nextMacroScope_1883_;
v_maxRecDepth_1858_ = v_maxRecDepth_1884_;
v_ngen_1859_ = v_ngen_1885_;
v_auxDeclNGen_1860_ = v_auxDeclNGen_1886_;
v_infoState_1861_ = v_infoState_1887_;
v_traceState_1862_ = v_traceState_1888_;
v_snapshotTasks_1863_ = v_snapshotTasks_1889_;
v_prevLinterStates_1864_ = v_prevLinterStates_1890_;
v_codeQualityEntryTasks_1865_ = v_codeQualityEntryTasks_1891_;
v___y_1866_ = v___x_1897_;
v___y_1867_ = v___y_1876_;
v___y_1868_ = v___x_1904_;
goto v___jp_1853_;
}
else
{
lean_object* v___x_1905_; lean_object* v___x_1906_; 
lean_inc_ref_n(v_toEnvExtension_1893_, 2);
v___x_1905_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1893_, v_env_1879_);
lean_dec_ref(v_env_1879_);
v___x_1906_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1893_, v___x_1905_, v___f_1902_, v_asyncMode_1895_, v___x_1903_, v___y_1873_);
v_messages_1854_ = v_messages_1880_;
v_scopes_1855_ = v_scopes_1881_;
v_usedQuotCtxts_1856_ = v_usedQuotCtxts_1882_;
v_nextMacroScope_1857_ = v_nextMacroScope_1883_;
v_maxRecDepth_1858_ = v_maxRecDepth_1884_;
v_ngen_1859_ = v_ngen_1885_;
v_auxDeclNGen_1860_ = v_auxDeclNGen_1886_;
v_infoState_1861_ = v_infoState_1887_;
v_traceState_1862_ = v_traceState_1888_;
v_snapshotTasks_1863_ = v_snapshotTasks_1889_;
v_prevLinterStates_1864_ = v_prevLinterStates_1890_;
v_codeQualityEntryTasks_1865_ = v_codeQualityEntryTasks_1891_;
v___y_1866_ = v___x_1897_;
v___y_1867_ = v___y_1876_;
v___y_1868_ = v___x_1906_;
goto v___jp_1853_;
}
}
v___jp_1907_:
{
lean_object* v___x_1911_; lean_object* v_tag_1912_; lean_object* v___x_1913_; uint8_t v___x_1914_; 
v___x_1911_ = lean_unsigned_to_nat(2u);
v_tag_1912_ = l_Lean_Syntax_getArg(v_x_1849_, v___x_1911_);
v___x_1913_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7));
lean_inc(v_tag_1912_);
v___x_1914_ = l_Lean_Syntax_isOfKind(v_tag_1912_, v___x_1913_);
if (v___x_1914_ == 0)
{
lean_object* v___x_1915_; lean_object* v___x_1916_; 
lean_dec(v_tag_1912_);
lean_dec(v_doc_1908_);
lean_dec(v_x_1849_);
v___x_1915_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1, &l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1);
v___x_1916_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg(v___x_1915_, v___y_1909_, v___y_1910_);
return v___x_1916_;
}
else
{
lean_object* v___x_1917_; lean_object* v_user_1918_; lean_object* v___x_1919_; uint8_t v___x_1920_; 
v___x_1917_ = lean_unsigned_to_nat(3u);
v_user_1918_ = l_Lean_Syntax_getArg(v_x_1849_, v___x_1917_);
lean_dec(v_x_1849_);
v___x_1919_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__3));
lean_inc(v_user_1918_);
v___x_1920_ = l_Lean_Syntax_isOfKind(v_user_1918_, v___x_1919_);
if (v___x_1920_ == 0)
{
lean_object* v___x_1921_; lean_object* v___x_1922_; 
lean_dec(v_user_1918_);
lean_dec(v_tag_1912_);
lean_dec(v_doc_1908_);
v___x_1921_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1, &l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1);
v___x_1922_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1___redArg(v___x_1921_, v___y_1909_, v___y_1910_);
return v___x_1922_;
}
else
{
if (lean_obj_tag(v_doc_1908_) == 0)
{
lean_object* v___x_1923_; 
v___x_1923_ = lean_box(0);
v___y_1873_ = v___x_1920_;
v___y_1874_ = v_user_1918_;
v___y_1875_ = v_tag_1912_;
v___y_1876_ = v___y_1910_;
v_a_1877_ = v___x_1923_;
goto v___jp_1872_;
}
else
{
lean_object* v_val_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1941_; 
v_val_1924_ = lean_ctor_get(v_doc_1908_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v_doc_1908_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1926_ = v_doc_1908_;
v_isShared_1927_ = v_isSharedCheck_1941_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_val_1924_);
lean_dec(v_doc_1908_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1941_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1928_; 
v___x_1928_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown(v_val_1924_, v___y_1909_, v___y_1910_);
if (lean_obj_tag(v___x_1928_) == 0)
{
lean_object* v_a_1929_; lean_object* v___x_1931_; 
v_a_1929_ = lean_ctor_get(v___x_1928_, 0);
lean_inc(v_a_1929_);
lean_dec_ref_known(v___x_1928_, 1);
if (v_isShared_1927_ == 0)
{
lean_ctor_set(v___x_1926_, 0, v_a_1929_);
v___x_1931_ = v___x_1926_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_a_1929_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
v___y_1873_ = v___x_1920_;
v___y_1874_ = v_user_1918_;
v___y_1875_ = v_tag_1912_;
v___y_1876_ = v___y_1910_;
v_a_1877_ = v___x_1931_;
goto v___jp_1872_;
}
}
else
{
lean_object* v_a_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1940_; 
lean_del_object(v___x_1926_);
lean_dec(v_user_1918_);
lean_dec(v_tag_1912_);
v_a_1933_ = lean_ctor_get(v___x_1928_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1928_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1935_ = v___x_1928_;
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_a_1933_);
lean_dec(v___x_1928_);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___boxed(lean_object* v_x_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_){
_start:
{
lean_object* v_res_1964_; 
v_res_1964_ = l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag(v_x_1960_, v_a_1961_, v_a_1962_);
lean_dec(v_a_1962_);
lean_dec_ref(v_a_1961_);
return v_res_1964_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1(){
_start:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1973_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_1974_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5));
v___x_1975_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1));
v___x_1976_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___boxed), 4, 0);
v___x_1977_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1973_, v___x_1974_, v___x_1975_, v___x_1976_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___boxed(lean_object* v_a_1978_){
_start:
{
lean_object* v_res_1979_; 
v_res_1979_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1();
return v_res_1979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3(){
_start:
{
lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2006_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1));
v___x_2007_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__6));
v___x_2008_ = l_Lean_addBuiltinDeclarationRanges(v___x_2006_, v___x_2007_);
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___boxed(lean_object* v_a_2009_){
_start:
{
lean_object* v_res_2010_; 
v_res_2010_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3();
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0(lean_object* v___x_2011_, lean_object* v_x_2012_){
_start:
{
if (lean_obj_tag(v_x_2012_) == 0)
{
lean_object* v___x_2013_; 
v___x_2013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2013_, 0, v___x_2011_);
return v___x_2013_;
}
else
{
lean_dec_ref(v___x_2011_);
lean_inc_ref(v_x_2012_);
return v_x_2012_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0___boxed(lean_object* v___x_2014_, lean_object* v_x_2015_){
_start:
{
lean_object* v_res_2016_; 
v_res_2016_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0(v___x_2014_, v_x_2015_);
lean_dec(v_x_2015_);
return v_res_2016_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(lean_object* v___x_2017_, lean_object* v_k_2018_, lean_object* v_t_2019_){
_start:
{
if (lean_obj_tag(v_t_2019_) == 0)
{
lean_object* v_size_2020_; lean_object* v_k_2021_; lean_object* v_v_2022_; lean_object* v_l_2023_; lean_object* v_r_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2350_; 
v_size_2020_ = lean_ctor_get(v_t_2019_, 0);
v_k_2021_ = lean_ctor_get(v_t_2019_, 1);
v_v_2022_ = lean_ctor_get(v_t_2019_, 2);
v_l_2023_ = lean_ctor_get(v_t_2019_, 3);
v_r_2024_ = lean_ctor_get(v_t_2019_, 4);
v_isSharedCheck_2350_ = !lean_is_exclusive(v_t_2019_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2026_ = v_t_2019_;
v_isShared_2027_ = v_isSharedCheck_2350_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_r_2024_);
lean_inc(v_l_2023_);
lean_inc(v_v_2022_);
lean_inc(v_k_2021_);
lean_inc(v_size_2020_);
lean_dec(v_t_2019_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2350_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
uint8_t v___x_2028_; 
v___x_2028_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2018_, v_k_2021_);
switch(v___x_2028_)
{
case 0:
{
lean_object* v_impl_2029_; lean_object* v___x_2030_; 
lean_del_object(v___x_2026_);
lean_dec(v_size_2020_);
v_impl_2029_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(v___x_2017_, v_k_2018_, v_l_2023_);
v___x_2030_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_2021_, v_v_2022_, v_impl_2029_, v_r_2024_);
return v___x_2030_;
}
case 1:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; 
lean_dec(v_k_2021_);
v___x_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2031_, 0, v_v_2022_);
v___x_2032_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0(v___x_2017_, v___x_2031_);
lean_dec_ref_known(v___x_2031_, 1);
if (lean_obj_tag(v___x_2032_) == 0)
{
lean_del_object(v___x_2026_);
lean_dec(v_size_2020_);
lean_dec(v_k_2018_);
if (lean_obj_tag(v_l_2023_) == 0)
{
if (lean_obj_tag(v_r_2024_) == 0)
{
lean_object* v_size_2033_; lean_object* v_k_2034_; lean_object* v_v_2035_; lean_object* v_l_2036_; lean_object* v_r_2037_; lean_object* v_size_2038_; lean_object* v_k_2039_; lean_object* v_v_2040_; lean_object* v_l_2041_; lean_object* v_r_2042_; lean_object* v___x_2043_; uint8_t v___x_2044_; 
v_size_2033_ = lean_ctor_get(v_l_2023_, 0);
v_k_2034_ = lean_ctor_get(v_l_2023_, 1);
v_v_2035_ = lean_ctor_get(v_l_2023_, 2);
v_l_2036_ = lean_ctor_get(v_l_2023_, 3);
v_r_2037_ = lean_ctor_get(v_l_2023_, 4);
lean_inc(v_r_2037_);
v_size_2038_ = lean_ctor_get(v_r_2024_, 0);
v_k_2039_ = lean_ctor_get(v_r_2024_, 1);
v_v_2040_ = lean_ctor_get(v_r_2024_, 2);
v_l_2041_ = lean_ctor_get(v_r_2024_, 3);
lean_inc(v_l_2041_);
v_r_2042_ = lean_ctor_get(v_r_2024_, 4);
v___x_2043_ = lean_unsigned_to_nat(1u);
v___x_2044_ = lean_nat_dec_lt(v_size_2033_, v_size_2038_);
if (v___x_2044_ == 0)
{
lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2180_; 
lean_inc(v_l_2036_);
lean_inc(v_v_2035_);
lean_inc(v_k_2034_);
v_isSharedCheck_2180_ = !lean_is_exclusive(v_l_2023_);
if (v_isSharedCheck_2180_ == 0)
{
lean_object* v_unused_2181_; lean_object* v_unused_2182_; lean_object* v_unused_2183_; lean_object* v_unused_2184_; lean_object* v_unused_2185_; 
v_unused_2181_ = lean_ctor_get(v_l_2023_, 4);
lean_dec(v_unused_2181_);
v_unused_2182_ = lean_ctor_get(v_l_2023_, 3);
lean_dec(v_unused_2182_);
v_unused_2183_ = lean_ctor_get(v_l_2023_, 2);
lean_dec(v_unused_2183_);
v_unused_2184_ = lean_ctor_get(v_l_2023_, 1);
lean_dec(v_unused_2184_);
v_unused_2185_ = lean_ctor_get(v_l_2023_, 0);
lean_dec(v_unused_2185_);
v___x_2046_ = v_l_2023_;
v_isShared_2047_ = v_isSharedCheck_2180_;
goto v_resetjp_2045_;
}
else
{
lean_dec(v_l_2023_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2180_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___x_2048_; lean_object* v_tree_2049_; 
v___x_2048_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_2034_, v_v_2035_, v_l_2036_, v_r_2037_);
v_tree_2049_ = lean_ctor_get(v___x_2048_, 2);
if (lean_obj_tag(v_tree_2049_) == 0)
{
lean_object* v_k_2050_; lean_object* v_v_2051_; lean_object* v_size_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; uint8_t v___x_2055_; 
lean_inc_ref(v_tree_2049_);
v_k_2050_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_k_2050_);
v_v_2051_ = lean_ctor_get(v___x_2048_, 1);
lean_inc(v_v_2051_);
lean_dec_ref(v___x_2048_);
v_size_2052_ = lean_ctor_get(v_tree_2049_, 0);
v___x_2053_ = lean_unsigned_to_nat(3u);
v___x_2054_ = lean_nat_mul(v___x_2053_, v_size_2052_);
v___x_2055_ = lean_nat_dec_lt(v___x_2054_, v_size_2038_);
lean_dec(v___x_2054_);
if (v___x_2055_ == 0)
{
lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2059_; 
lean_dec(v_l_2041_);
v___x_2056_ = lean_nat_add(v___x_2043_, v_size_2052_);
v___x_2057_ = lean_nat_add(v___x_2056_, v_size_2038_);
lean_dec(v___x_2056_);
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 4, v_r_2024_);
lean_ctor_set(v___x_2046_, 3, v_tree_2049_);
lean_ctor_set(v___x_2046_, 2, v_v_2051_);
lean_ctor_set(v___x_2046_, 1, v_k_2050_);
lean_ctor_set(v___x_2046_, 0, v___x_2057_);
v___x_2059_ = v___x_2046_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v___x_2057_);
lean_ctor_set(v_reuseFailAlloc_2060_, 1, v_k_2050_);
lean_ctor_set(v_reuseFailAlloc_2060_, 2, v_v_2051_);
lean_ctor_set(v_reuseFailAlloc_2060_, 3, v_tree_2049_);
lean_ctor_set(v_reuseFailAlloc_2060_, 4, v_r_2024_);
v___x_2059_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
return v___x_2059_;
}
}
else
{
lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2115_; 
lean_inc(v_r_2042_);
lean_inc(v_v_2040_);
lean_inc(v_k_2039_);
lean_inc(v_size_2038_);
v_isSharedCheck_2115_ = !lean_is_exclusive(v_r_2024_);
if (v_isSharedCheck_2115_ == 0)
{
lean_object* v_unused_2116_; lean_object* v_unused_2117_; lean_object* v_unused_2118_; lean_object* v_unused_2119_; lean_object* v_unused_2120_; 
v_unused_2116_ = lean_ctor_get(v_r_2024_, 4);
lean_dec(v_unused_2116_);
v_unused_2117_ = lean_ctor_get(v_r_2024_, 3);
lean_dec(v_unused_2117_);
v_unused_2118_ = lean_ctor_get(v_r_2024_, 2);
lean_dec(v_unused_2118_);
v_unused_2119_ = lean_ctor_get(v_r_2024_, 1);
lean_dec(v_unused_2119_);
v_unused_2120_ = lean_ctor_get(v_r_2024_, 0);
lean_dec(v_unused_2120_);
v___x_2062_ = v_r_2024_;
v_isShared_2063_ = v_isSharedCheck_2115_;
goto v_resetjp_2061_;
}
else
{
lean_dec(v_r_2024_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2115_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v_size_2064_; lean_object* v_k_2065_; lean_object* v_v_2066_; lean_object* v_l_2067_; lean_object* v_r_2068_; lean_object* v_size_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; uint8_t v___x_2072_; 
v_size_2064_ = lean_ctor_get(v_l_2041_, 0);
v_k_2065_ = lean_ctor_get(v_l_2041_, 1);
v_v_2066_ = lean_ctor_get(v_l_2041_, 2);
v_l_2067_ = lean_ctor_get(v_l_2041_, 3);
v_r_2068_ = lean_ctor_get(v_l_2041_, 4);
v_size_2069_ = lean_ctor_get(v_r_2042_, 0);
v___x_2070_ = lean_unsigned_to_nat(2u);
v___x_2071_ = lean_nat_mul(v___x_2070_, v_size_2069_);
v___x_2072_ = lean_nat_dec_lt(v_size_2064_, v___x_2071_);
lean_dec(v___x_2071_);
if (v___x_2072_ == 0)
{
lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2100_; 
lean_inc(v_r_2068_);
lean_inc(v_l_2067_);
lean_inc(v_v_2066_);
lean_inc(v_k_2065_);
v_isSharedCheck_2100_ = !lean_is_exclusive(v_l_2041_);
if (v_isSharedCheck_2100_ == 0)
{
lean_object* v_unused_2101_; lean_object* v_unused_2102_; lean_object* v_unused_2103_; lean_object* v_unused_2104_; lean_object* v_unused_2105_; 
v_unused_2101_ = lean_ctor_get(v_l_2041_, 4);
lean_dec(v_unused_2101_);
v_unused_2102_ = lean_ctor_get(v_l_2041_, 3);
lean_dec(v_unused_2102_);
v_unused_2103_ = lean_ctor_get(v_l_2041_, 2);
lean_dec(v_unused_2103_);
v_unused_2104_ = lean_ctor_get(v_l_2041_, 1);
lean_dec(v_unused_2104_);
v_unused_2105_ = lean_ctor_get(v_l_2041_, 0);
lean_dec(v_unused_2105_);
v___x_2074_ = v_l_2041_;
v_isShared_2075_ = v_isSharedCheck_2100_;
goto v_resetjp_2073_;
}
else
{
lean_dec(v_l_2041_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2100_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___y_2079_; lean_object* v___y_2080_; lean_object* v___y_2081_; lean_object* v___y_2090_; 
v___x_2076_ = lean_nat_add(v___x_2043_, v_size_2052_);
v___x_2077_ = lean_nat_add(v___x_2076_, v_size_2038_);
lean_dec(v_size_2038_);
if (lean_obj_tag(v_l_2067_) == 0)
{
lean_object* v_size_2098_; 
v_size_2098_ = lean_ctor_get(v_l_2067_, 0);
lean_inc(v_size_2098_);
v___y_2090_ = v_size_2098_;
goto v___jp_2089_;
}
else
{
lean_object* v___x_2099_; 
v___x_2099_ = lean_unsigned_to_nat(0u);
v___y_2090_ = v___x_2099_;
goto v___jp_2089_;
}
v___jp_2078_:
{
lean_object* v___x_2082_; lean_object* v___x_2084_; 
v___x_2082_ = lean_nat_add(v___y_2079_, v___y_2081_);
lean_dec(v___y_2081_);
lean_dec(v___y_2079_);
if (v_isShared_2075_ == 0)
{
lean_ctor_set(v___x_2074_, 4, v_r_2042_);
lean_ctor_set(v___x_2074_, 3, v_r_2068_);
lean_ctor_set(v___x_2074_, 2, v_v_2040_);
lean_ctor_set(v___x_2074_, 1, v_k_2039_);
lean_ctor_set(v___x_2074_, 0, v___x_2082_);
v___x_2084_ = v___x_2074_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v___x_2082_);
lean_ctor_set(v_reuseFailAlloc_2088_, 1, v_k_2039_);
lean_ctor_set(v_reuseFailAlloc_2088_, 2, v_v_2040_);
lean_ctor_set(v_reuseFailAlloc_2088_, 3, v_r_2068_);
lean_ctor_set(v_reuseFailAlloc_2088_, 4, v_r_2042_);
v___x_2084_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
lean_object* v___x_2086_; 
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 4, v___x_2084_);
lean_ctor_set(v___x_2062_, 3, v___y_2080_);
lean_ctor_set(v___x_2062_, 2, v_v_2066_);
lean_ctor_set(v___x_2062_, 1, v_k_2065_);
lean_ctor_set(v___x_2062_, 0, v___x_2077_);
v___x_2086_ = v___x_2062_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v___x_2077_);
lean_ctor_set(v_reuseFailAlloc_2087_, 1, v_k_2065_);
lean_ctor_set(v_reuseFailAlloc_2087_, 2, v_v_2066_);
lean_ctor_set(v_reuseFailAlloc_2087_, 3, v___y_2080_);
lean_ctor_set(v_reuseFailAlloc_2087_, 4, v___x_2084_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
v___jp_2089_:
{
lean_object* v___x_2091_; lean_object* v___x_2093_; 
v___x_2091_ = lean_nat_add(v___x_2076_, v___y_2090_);
lean_dec(v___y_2090_);
lean_dec(v___x_2076_);
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 4, v_l_2067_);
lean_ctor_set(v___x_2046_, 3, v_tree_2049_);
lean_ctor_set(v___x_2046_, 2, v_v_2051_);
lean_ctor_set(v___x_2046_, 1, v_k_2050_);
lean_ctor_set(v___x_2046_, 0, v___x_2091_);
v___x_2093_ = v___x_2046_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v___x_2091_);
lean_ctor_set(v_reuseFailAlloc_2097_, 1, v_k_2050_);
lean_ctor_set(v_reuseFailAlloc_2097_, 2, v_v_2051_);
lean_ctor_set(v_reuseFailAlloc_2097_, 3, v_tree_2049_);
lean_ctor_set(v_reuseFailAlloc_2097_, 4, v_l_2067_);
v___x_2093_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
lean_object* v___x_2094_; 
v___x_2094_ = lean_nat_add(v___x_2043_, v_size_2069_);
if (lean_obj_tag(v_r_2068_) == 0)
{
lean_object* v_size_2095_; 
v_size_2095_ = lean_ctor_get(v_r_2068_, 0);
lean_inc(v_size_2095_);
v___y_2079_ = v___x_2094_;
v___y_2080_ = v___x_2093_;
v___y_2081_ = v_size_2095_;
goto v___jp_2078_;
}
else
{
lean_object* v___x_2096_; 
v___x_2096_ = lean_unsigned_to_nat(0u);
v___y_2079_ = v___x_2094_;
v___y_2080_ = v___x_2093_;
v___y_2081_ = v___x_2096_;
goto v___jp_2078_;
}
}
}
}
}
else
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2110_; 
v___x_2106_ = lean_nat_add(v___x_2043_, v_size_2052_);
v___x_2107_ = lean_nat_add(v___x_2106_, v_size_2038_);
lean_dec(v_size_2038_);
v___x_2108_ = lean_nat_add(v___x_2106_, v_size_2064_);
lean_dec(v___x_2106_);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 4, v_l_2041_);
lean_ctor_set(v___x_2062_, 3, v_tree_2049_);
lean_ctor_set(v___x_2062_, 2, v_v_2051_);
lean_ctor_set(v___x_2062_, 1, v_k_2050_);
lean_ctor_set(v___x_2062_, 0, v___x_2108_);
v___x_2110_ = v___x_2062_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v___x_2108_);
lean_ctor_set(v_reuseFailAlloc_2114_, 1, v_k_2050_);
lean_ctor_set(v_reuseFailAlloc_2114_, 2, v_v_2051_);
lean_ctor_set(v_reuseFailAlloc_2114_, 3, v_tree_2049_);
lean_ctor_set(v_reuseFailAlloc_2114_, 4, v_l_2041_);
v___x_2110_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
lean_object* v___x_2112_; 
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 4, v_r_2042_);
lean_ctor_set(v___x_2046_, 3, v___x_2110_);
lean_ctor_set(v___x_2046_, 2, v_v_2040_);
lean_ctor_set(v___x_2046_, 1, v_k_2039_);
lean_ctor_set(v___x_2046_, 0, v___x_2107_);
v___x_2112_ = v___x_2046_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v___x_2107_);
lean_ctor_set(v_reuseFailAlloc_2113_, 1, v_k_2039_);
lean_ctor_set(v_reuseFailAlloc_2113_, 2, v_v_2040_);
lean_ctor_set(v_reuseFailAlloc_2113_, 3, v___x_2110_);
lean_ctor_set(v_reuseFailAlloc_2113_, 4, v_r_2042_);
v___x_2112_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
return v___x_2112_;
}
}
}
}
}
}
else
{
lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2174_; 
lean_inc(v_r_2042_);
lean_inc(v_v_2040_);
lean_inc(v_k_2039_);
lean_inc(v_size_2038_);
v_isSharedCheck_2174_ = !lean_is_exclusive(v_r_2024_);
if (v_isSharedCheck_2174_ == 0)
{
lean_object* v_unused_2175_; lean_object* v_unused_2176_; lean_object* v_unused_2177_; lean_object* v_unused_2178_; lean_object* v_unused_2179_; 
v_unused_2175_ = lean_ctor_get(v_r_2024_, 4);
lean_dec(v_unused_2175_);
v_unused_2176_ = lean_ctor_get(v_r_2024_, 3);
lean_dec(v_unused_2176_);
v_unused_2177_ = lean_ctor_get(v_r_2024_, 2);
lean_dec(v_unused_2177_);
v_unused_2178_ = lean_ctor_get(v_r_2024_, 1);
lean_dec(v_unused_2178_);
v_unused_2179_ = lean_ctor_get(v_r_2024_, 0);
lean_dec(v_unused_2179_);
v___x_2122_ = v_r_2024_;
v_isShared_2123_ = v_isSharedCheck_2174_;
goto v_resetjp_2121_;
}
else
{
lean_dec(v_r_2024_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2174_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
if (lean_obj_tag(v_l_2041_) == 0)
{
if (lean_obj_tag(v_r_2042_) == 0)
{
lean_object* v_k_2124_; lean_object* v_v_2125_; lean_object* v_size_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2130_; 
lean_inc(v_tree_2049_);
v_k_2124_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_k_2124_);
v_v_2125_ = lean_ctor_get(v___x_2048_, 1);
lean_inc(v_v_2125_);
lean_dec_ref(v___x_2048_);
v_size_2126_ = lean_ctor_get(v_l_2041_, 0);
v___x_2127_ = lean_nat_add(v___x_2043_, v_size_2038_);
lean_dec(v_size_2038_);
v___x_2128_ = lean_nat_add(v___x_2043_, v_size_2126_);
if (v_isShared_2123_ == 0)
{
lean_ctor_set(v___x_2122_, 4, v_l_2041_);
lean_ctor_set(v___x_2122_, 3, v_tree_2049_);
lean_ctor_set(v___x_2122_, 2, v_v_2125_);
lean_ctor_set(v___x_2122_, 1, v_k_2124_);
lean_ctor_set(v___x_2122_, 0, v___x_2128_);
v___x_2130_ = v___x_2122_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2128_);
lean_ctor_set(v_reuseFailAlloc_2134_, 1, v_k_2124_);
lean_ctor_set(v_reuseFailAlloc_2134_, 2, v_v_2125_);
lean_ctor_set(v_reuseFailAlloc_2134_, 3, v_tree_2049_);
lean_ctor_set(v_reuseFailAlloc_2134_, 4, v_l_2041_);
v___x_2130_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
lean_object* v___x_2132_; 
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 4, v_r_2042_);
lean_ctor_set(v___x_2046_, 3, v___x_2130_);
lean_ctor_set(v___x_2046_, 2, v_v_2040_);
lean_ctor_set(v___x_2046_, 1, v_k_2039_);
lean_ctor_set(v___x_2046_, 0, v___x_2127_);
v___x_2132_ = v___x_2046_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v___x_2127_);
lean_ctor_set(v_reuseFailAlloc_2133_, 1, v_k_2039_);
lean_ctor_set(v_reuseFailAlloc_2133_, 2, v_v_2040_);
lean_ctor_set(v_reuseFailAlloc_2133_, 3, v___x_2130_);
lean_ctor_set(v_reuseFailAlloc_2133_, 4, v_r_2042_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
}
else
{
lean_object* v_k_2135_; lean_object* v_v_2136_; lean_object* v_k_2137_; lean_object* v_v_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2152_; 
lean_dec(v_size_2038_);
v_k_2135_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_k_2135_);
v_v_2136_ = lean_ctor_get(v___x_2048_, 1);
lean_inc(v_v_2136_);
lean_dec_ref(v___x_2048_);
v_k_2137_ = lean_ctor_get(v_l_2041_, 1);
v_v_2138_ = lean_ctor_get(v_l_2041_, 2);
v_isSharedCheck_2152_ = !lean_is_exclusive(v_l_2041_);
if (v_isSharedCheck_2152_ == 0)
{
lean_object* v_unused_2153_; lean_object* v_unused_2154_; lean_object* v_unused_2155_; 
v_unused_2153_ = lean_ctor_get(v_l_2041_, 4);
lean_dec(v_unused_2153_);
v_unused_2154_ = lean_ctor_get(v_l_2041_, 3);
lean_dec(v_unused_2154_);
v_unused_2155_ = lean_ctor_get(v_l_2041_, 0);
lean_dec(v_unused_2155_);
v___x_2140_ = v_l_2041_;
v_isShared_2141_ = v_isSharedCheck_2152_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_v_2138_);
lean_inc(v_k_2137_);
lean_dec(v_l_2041_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2152_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2142_; lean_object* v___x_2144_; 
v___x_2142_ = lean_unsigned_to_nat(3u);
if (v_isShared_2141_ == 0)
{
lean_ctor_set(v___x_2140_, 4, v_r_2042_);
lean_ctor_set(v___x_2140_, 3, v_r_2042_);
lean_ctor_set(v___x_2140_, 2, v_v_2136_);
lean_ctor_set(v___x_2140_, 1, v_k_2135_);
lean_ctor_set(v___x_2140_, 0, v___x_2043_);
v___x_2144_ = v___x_2140_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v___x_2043_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v_k_2135_);
lean_ctor_set(v_reuseFailAlloc_2151_, 2, v_v_2136_);
lean_ctor_set(v_reuseFailAlloc_2151_, 3, v_r_2042_);
lean_ctor_set(v_reuseFailAlloc_2151_, 4, v_r_2042_);
v___x_2144_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
lean_object* v___x_2146_; 
if (v_isShared_2123_ == 0)
{
lean_ctor_set(v___x_2122_, 3, v_r_2042_);
lean_ctor_set(v___x_2122_, 0, v___x_2043_);
v___x_2146_ = v___x_2122_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v___x_2043_);
lean_ctor_set(v_reuseFailAlloc_2150_, 1, v_k_2039_);
lean_ctor_set(v_reuseFailAlloc_2150_, 2, v_v_2040_);
lean_ctor_set(v_reuseFailAlloc_2150_, 3, v_r_2042_);
lean_ctor_set(v_reuseFailAlloc_2150_, 4, v_r_2042_);
v___x_2146_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
lean_object* v___x_2148_; 
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 4, v___x_2146_);
lean_ctor_set(v___x_2046_, 3, v___x_2144_);
lean_ctor_set(v___x_2046_, 2, v_v_2138_);
lean_ctor_set(v___x_2046_, 1, v_k_2137_);
lean_ctor_set(v___x_2046_, 0, v___x_2142_);
v___x_2148_ = v___x_2046_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v___x_2142_);
lean_ctor_set(v_reuseFailAlloc_2149_, 1, v_k_2137_);
lean_ctor_set(v_reuseFailAlloc_2149_, 2, v_v_2138_);
lean_ctor_set(v_reuseFailAlloc_2149_, 3, v___x_2144_);
lean_ctor_set(v_reuseFailAlloc_2149_, 4, v___x_2146_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_2042_) == 0)
{
lean_object* v_k_2156_; lean_object* v_v_2157_; lean_object* v___x_2158_; lean_object* v___x_2160_; 
lean_dec(v_size_2038_);
v_k_2156_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_k_2156_);
v_v_2157_ = lean_ctor_get(v___x_2048_, 1);
lean_inc(v_v_2157_);
lean_dec_ref(v___x_2048_);
v___x_2158_ = lean_unsigned_to_nat(3u);
if (v_isShared_2123_ == 0)
{
lean_ctor_set(v___x_2122_, 4, v_l_2041_);
lean_ctor_set(v___x_2122_, 2, v_v_2157_);
lean_ctor_set(v___x_2122_, 1, v_k_2156_);
lean_ctor_set(v___x_2122_, 0, v___x_2043_);
v___x_2160_ = v___x_2122_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v___x_2043_);
lean_ctor_set(v_reuseFailAlloc_2164_, 1, v_k_2156_);
lean_ctor_set(v_reuseFailAlloc_2164_, 2, v_v_2157_);
lean_ctor_set(v_reuseFailAlloc_2164_, 3, v_l_2041_);
lean_ctor_set(v_reuseFailAlloc_2164_, 4, v_l_2041_);
v___x_2160_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
lean_object* v___x_2162_; 
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 4, v_r_2042_);
lean_ctor_set(v___x_2046_, 3, v___x_2160_);
lean_ctor_set(v___x_2046_, 2, v_v_2040_);
lean_ctor_set(v___x_2046_, 1, v_k_2039_);
lean_ctor_set(v___x_2046_, 0, v___x_2158_);
v___x_2162_ = v___x_2046_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v___x_2158_);
lean_ctor_set(v_reuseFailAlloc_2163_, 1, v_k_2039_);
lean_ctor_set(v_reuseFailAlloc_2163_, 2, v_v_2040_);
lean_ctor_set(v_reuseFailAlloc_2163_, 3, v___x_2160_);
lean_ctor_set(v_reuseFailAlloc_2163_, 4, v_r_2042_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
return v___x_2162_;
}
}
}
else
{
lean_object* v_k_2165_; lean_object* v_v_2166_; lean_object* v___x_2168_; 
v_k_2165_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_k_2165_);
v_v_2166_ = lean_ctor_get(v___x_2048_, 1);
lean_inc(v_v_2166_);
lean_dec_ref(v___x_2048_);
if (v_isShared_2123_ == 0)
{
lean_ctor_set(v___x_2122_, 3, v_r_2042_);
v___x_2168_ = v___x_2122_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_size_2038_);
lean_ctor_set(v_reuseFailAlloc_2173_, 1, v_k_2039_);
lean_ctor_set(v_reuseFailAlloc_2173_, 2, v_v_2040_);
lean_ctor_set(v_reuseFailAlloc_2173_, 3, v_r_2042_);
lean_ctor_set(v_reuseFailAlloc_2173_, 4, v_r_2042_);
v___x_2168_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
lean_object* v___x_2169_; lean_object* v___x_2171_; 
v___x_2169_ = lean_unsigned_to_nat(2u);
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 4, v___x_2168_);
lean_ctor_set(v___x_2046_, 3, v_r_2042_);
lean_ctor_set(v___x_2046_, 2, v_v_2166_);
lean_ctor_set(v___x_2046_, 1, v_k_2165_);
lean_ctor_set(v___x_2046_, 0, v___x_2169_);
v___x_2171_ = v___x_2046_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v___x_2169_);
lean_ctor_set(v_reuseFailAlloc_2172_, 1, v_k_2165_);
lean_ctor_set(v_reuseFailAlloc_2172_, 2, v_v_2166_);
lean_ctor_set(v_reuseFailAlloc_2172_, 3, v_r_2042_);
lean_ctor_set(v_reuseFailAlloc_2172_, 4, v___x_2168_);
v___x_2171_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
return v___x_2171_;
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
lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2338_; 
lean_inc(v_r_2042_);
lean_inc(v_v_2040_);
lean_inc(v_k_2039_);
v_isSharedCheck_2338_ = !lean_is_exclusive(v_r_2024_);
if (v_isSharedCheck_2338_ == 0)
{
lean_object* v_unused_2339_; lean_object* v_unused_2340_; lean_object* v_unused_2341_; lean_object* v_unused_2342_; lean_object* v_unused_2343_; 
v_unused_2339_ = lean_ctor_get(v_r_2024_, 4);
lean_dec(v_unused_2339_);
v_unused_2340_ = lean_ctor_get(v_r_2024_, 3);
lean_dec(v_unused_2340_);
v_unused_2341_ = lean_ctor_get(v_r_2024_, 2);
lean_dec(v_unused_2341_);
v_unused_2342_ = lean_ctor_get(v_r_2024_, 1);
lean_dec(v_unused_2342_);
v_unused_2343_ = lean_ctor_get(v_r_2024_, 0);
lean_dec(v_unused_2343_);
v___x_2187_ = v_r_2024_;
v_isShared_2188_ = v_isSharedCheck_2338_;
goto v_resetjp_2186_;
}
else
{
lean_dec(v_r_2024_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2338_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v___x_2189_; lean_object* v_tree_2190_; 
v___x_2189_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_2039_, v_v_2040_, v_l_2041_, v_r_2042_);
v_tree_2190_ = lean_ctor_get(v___x_2189_, 2);
lean_inc(v_tree_2190_);
if (lean_obj_tag(v_tree_2190_) == 0)
{
lean_object* v_k_2191_; lean_object* v_v_2192_; lean_object* v_size_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; uint8_t v___x_2196_; 
v_k_2191_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_k_2191_);
v_v_2192_ = lean_ctor_get(v___x_2189_, 1);
lean_inc(v_v_2192_);
lean_dec_ref(v___x_2189_);
v_size_2193_ = lean_ctor_get(v_tree_2190_, 0);
v___x_2194_ = lean_unsigned_to_nat(3u);
v___x_2195_ = lean_nat_mul(v___x_2194_, v_size_2193_);
v___x_2196_ = lean_nat_dec_lt(v___x_2195_, v_size_2033_);
lean_dec(v___x_2195_);
if (v___x_2196_ == 0)
{
lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2200_; 
lean_dec(v_r_2037_);
v___x_2197_ = lean_nat_add(v___x_2043_, v_size_2033_);
v___x_2198_ = lean_nat_add(v___x_2197_, v_size_2193_);
lean_dec(v___x_2197_);
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 4, v_tree_2190_);
lean_ctor_set(v___x_2187_, 3, v_l_2023_);
lean_ctor_set(v___x_2187_, 2, v_v_2192_);
lean_ctor_set(v___x_2187_, 1, v_k_2191_);
lean_ctor_set(v___x_2187_, 0, v___x_2198_);
v___x_2200_ = v___x_2187_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v___x_2198_);
lean_ctor_set(v_reuseFailAlloc_2201_, 1, v_k_2191_);
lean_ctor_set(v_reuseFailAlloc_2201_, 2, v_v_2192_);
lean_ctor_set(v_reuseFailAlloc_2201_, 3, v_l_2023_);
lean_ctor_set(v_reuseFailAlloc_2201_, 4, v_tree_2190_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
return v___x_2200_;
}
}
else
{
lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2267_; 
lean_inc(v_l_2036_);
lean_inc(v_v_2035_);
lean_inc(v_k_2034_);
lean_inc(v_size_2033_);
v_isSharedCheck_2267_ = !lean_is_exclusive(v_l_2023_);
if (v_isSharedCheck_2267_ == 0)
{
lean_object* v_unused_2268_; lean_object* v_unused_2269_; lean_object* v_unused_2270_; lean_object* v_unused_2271_; lean_object* v_unused_2272_; 
v_unused_2268_ = lean_ctor_get(v_l_2023_, 4);
lean_dec(v_unused_2268_);
v_unused_2269_ = lean_ctor_get(v_l_2023_, 3);
lean_dec(v_unused_2269_);
v_unused_2270_ = lean_ctor_get(v_l_2023_, 2);
lean_dec(v_unused_2270_);
v_unused_2271_ = lean_ctor_get(v_l_2023_, 1);
lean_dec(v_unused_2271_);
v_unused_2272_ = lean_ctor_get(v_l_2023_, 0);
lean_dec(v_unused_2272_);
v___x_2203_ = v_l_2023_;
v_isShared_2204_ = v_isSharedCheck_2267_;
goto v_resetjp_2202_;
}
else
{
lean_dec(v_l_2023_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2267_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v_size_2205_; lean_object* v_size_2206_; lean_object* v_k_2207_; lean_object* v_v_2208_; lean_object* v_l_2209_; lean_object* v_r_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; uint8_t v___x_2213_; 
v_size_2205_ = lean_ctor_get(v_l_2036_, 0);
v_size_2206_ = lean_ctor_get(v_r_2037_, 0);
v_k_2207_ = lean_ctor_get(v_r_2037_, 1);
v_v_2208_ = lean_ctor_get(v_r_2037_, 2);
v_l_2209_ = lean_ctor_get(v_r_2037_, 3);
v_r_2210_ = lean_ctor_get(v_r_2037_, 4);
v___x_2211_ = lean_unsigned_to_nat(2u);
v___x_2212_ = lean_nat_mul(v___x_2211_, v_size_2205_);
v___x_2213_ = lean_nat_dec_lt(v_size_2206_, v___x_2212_);
lean_dec(v___x_2212_);
if (v___x_2213_ == 0)
{
lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2251_; 
lean_inc(v_r_2210_);
lean_inc(v_l_2209_);
lean_inc(v_v_2208_);
lean_inc(v_k_2207_);
lean_del_object(v___x_2203_);
v_isSharedCheck_2251_ = !lean_is_exclusive(v_r_2037_);
if (v_isSharedCheck_2251_ == 0)
{
lean_object* v_unused_2252_; lean_object* v_unused_2253_; lean_object* v_unused_2254_; lean_object* v_unused_2255_; lean_object* v_unused_2256_; 
v_unused_2252_ = lean_ctor_get(v_r_2037_, 4);
lean_dec(v_unused_2252_);
v_unused_2253_ = lean_ctor_get(v_r_2037_, 3);
lean_dec(v_unused_2253_);
v_unused_2254_ = lean_ctor_get(v_r_2037_, 2);
lean_dec(v_unused_2254_);
v_unused_2255_ = lean_ctor_get(v_r_2037_, 1);
lean_dec(v_unused_2255_);
v_unused_2256_ = lean_ctor_get(v_r_2037_, 0);
lean_dec(v_unused_2256_);
v___x_2215_ = v_r_2037_;
v_isShared_2216_ = v_isSharedCheck_2251_;
goto v_resetjp_2214_;
}
else
{
lean_dec(v_r_2037_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2251_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___y_2220_; lean_object* v___y_2221_; lean_object* v___y_2222_; lean_object* v___x_2239_; lean_object* v___y_2241_; 
v___x_2217_ = lean_nat_add(v___x_2043_, v_size_2033_);
lean_dec(v_size_2033_);
v___x_2218_ = lean_nat_add(v___x_2217_, v_size_2193_);
lean_dec(v___x_2217_);
v___x_2239_ = lean_nat_add(v___x_2043_, v_size_2205_);
if (lean_obj_tag(v_l_2209_) == 0)
{
lean_object* v_size_2249_; 
v_size_2249_ = lean_ctor_get(v_l_2209_, 0);
lean_inc(v_size_2249_);
v___y_2241_ = v_size_2249_;
goto v___jp_2240_;
}
else
{
lean_object* v___x_2250_; 
v___x_2250_ = lean_unsigned_to_nat(0u);
v___y_2241_ = v___x_2250_;
goto v___jp_2240_;
}
v___jp_2219_:
{
lean_object* v___x_2223_; lean_object* v___x_2225_; 
v___x_2223_ = lean_nat_add(v___y_2221_, v___y_2222_);
lean_dec(v___y_2222_);
lean_dec(v___y_2221_);
lean_inc_ref(v_tree_2190_);
if (v_isShared_2216_ == 0)
{
lean_ctor_set(v___x_2215_, 4, v_tree_2190_);
lean_ctor_set(v___x_2215_, 3, v_r_2210_);
lean_ctor_set(v___x_2215_, 2, v_v_2192_);
lean_ctor_set(v___x_2215_, 1, v_k_2191_);
lean_ctor_set(v___x_2215_, 0, v___x_2223_);
v___x_2225_ = v___x_2215_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v___x_2223_);
lean_ctor_set(v_reuseFailAlloc_2238_, 1, v_k_2191_);
lean_ctor_set(v_reuseFailAlloc_2238_, 2, v_v_2192_);
lean_ctor_set(v_reuseFailAlloc_2238_, 3, v_r_2210_);
lean_ctor_set(v_reuseFailAlloc_2238_, 4, v_tree_2190_);
v___x_2225_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
lean_object* v___x_2227_; uint8_t v_isShared_2228_; uint8_t v_isSharedCheck_2232_; 
v_isSharedCheck_2232_ = !lean_is_exclusive(v_tree_2190_);
if (v_isSharedCheck_2232_ == 0)
{
lean_object* v_unused_2233_; lean_object* v_unused_2234_; lean_object* v_unused_2235_; lean_object* v_unused_2236_; lean_object* v_unused_2237_; 
v_unused_2233_ = lean_ctor_get(v_tree_2190_, 4);
lean_dec(v_unused_2233_);
v_unused_2234_ = lean_ctor_get(v_tree_2190_, 3);
lean_dec(v_unused_2234_);
v_unused_2235_ = lean_ctor_get(v_tree_2190_, 2);
lean_dec(v_unused_2235_);
v_unused_2236_ = lean_ctor_get(v_tree_2190_, 1);
lean_dec(v_unused_2236_);
v_unused_2237_ = lean_ctor_get(v_tree_2190_, 0);
lean_dec(v_unused_2237_);
v___x_2227_ = v_tree_2190_;
v_isShared_2228_ = v_isSharedCheck_2232_;
goto v_resetjp_2226_;
}
else
{
lean_dec(v_tree_2190_);
v___x_2227_ = lean_box(0);
v_isShared_2228_ = v_isSharedCheck_2232_;
goto v_resetjp_2226_;
}
v_resetjp_2226_:
{
lean_object* v___x_2230_; 
if (v_isShared_2228_ == 0)
{
lean_ctor_set(v___x_2227_, 4, v___x_2225_);
lean_ctor_set(v___x_2227_, 3, v___y_2220_);
lean_ctor_set(v___x_2227_, 2, v_v_2208_);
lean_ctor_set(v___x_2227_, 1, v_k_2207_);
lean_ctor_set(v___x_2227_, 0, v___x_2218_);
v___x_2230_ = v___x_2227_;
goto v_reusejp_2229_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v___x_2218_);
lean_ctor_set(v_reuseFailAlloc_2231_, 1, v_k_2207_);
lean_ctor_set(v_reuseFailAlloc_2231_, 2, v_v_2208_);
lean_ctor_set(v_reuseFailAlloc_2231_, 3, v___y_2220_);
lean_ctor_set(v_reuseFailAlloc_2231_, 4, v___x_2225_);
v___x_2230_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2229_;
}
v_reusejp_2229_:
{
return v___x_2230_;
}
}
}
}
v___jp_2240_:
{
lean_object* v___x_2242_; lean_object* v___x_2244_; 
v___x_2242_ = lean_nat_add(v___x_2239_, v___y_2241_);
lean_dec(v___y_2241_);
lean_dec(v___x_2239_);
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 4, v_l_2209_);
lean_ctor_set(v___x_2187_, 3, v_l_2036_);
lean_ctor_set(v___x_2187_, 2, v_v_2035_);
lean_ctor_set(v___x_2187_, 1, v_k_2034_);
lean_ctor_set(v___x_2187_, 0, v___x_2242_);
v___x_2244_ = v___x_2187_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v___x_2242_);
lean_ctor_set(v_reuseFailAlloc_2248_, 1, v_k_2034_);
lean_ctor_set(v_reuseFailAlloc_2248_, 2, v_v_2035_);
lean_ctor_set(v_reuseFailAlloc_2248_, 3, v_l_2036_);
lean_ctor_set(v_reuseFailAlloc_2248_, 4, v_l_2209_);
v___x_2244_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
lean_object* v___x_2245_; 
v___x_2245_ = lean_nat_add(v___x_2043_, v_size_2193_);
if (lean_obj_tag(v_r_2210_) == 0)
{
lean_object* v_size_2246_; 
v_size_2246_ = lean_ctor_get(v_r_2210_, 0);
lean_inc(v_size_2246_);
v___y_2220_ = v___x_2244_;
v___y_2221_ = v___x_2245_;
v___y_2222_ = v_size_2246_;
goto v___jp_2219_;
}
else
{
lean_object* v___x_2247_; 
v___x_2247_ = lean_unsigned_to_nat(0u);
v___y_2220_ = v___x_2244_;
v___y_2221_ = v___x_2245_;
v___y_2222_ = v___x_2247_;
goto v___jp_2219_;
}
}
}
}
}
else
{
lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2262_; 
v___x_2257_ = lean_nat_add(v___x_2043_, v_size_2033_);
lean_dec(v_size_2033_);
v___x_2258_ = lean_nat_add(v___x_2257_, v_size_2193_);
lean_dec(v___x_2257_);
v___x_2259_ = lean_nat_add(v___x_2043_, v_size_2193_);
v___x_2260_ = lean_nat_add(v___x_2259_, v_size_2206_);
lean_dec(v___x_2259_);
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 4, v_tree_2190_);
lean_ctor_set(v___x_2187_, 3, v_r_2037_);
lean_ctor_set(v___x_2187_, 2, v_v_2192_);
lean_ctor_set(v___x_2187_, 1, v_k_2191_);
lean_ctor_set(v___x_2187_, 0, v___x_2260_);
v___x_2262_ = v___x_2187_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v___x_2260_);
lean_ctor_set(v_reuseFailAlloc_2266_, 1, v_k_2191_);
lean_ctor_set(v_reuseFailAlloc_2266_, 2, v_v_2192_);
lean_ctor_set(v_reuseFailAlloc_2266_, 3, v_r_2037_);
lean_ctor_set(v_reuseFailAlloc_2266_, 4, v_tree_2190_);
v___x_2262_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
lean_object* v___x_2264_; 
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 4, v___x_2262_);
lean_ctor_set(v___x_2203_, 0, v___x_2258_);
v___x_2264_ = v___x_2203_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v___x_2258_);
lean_ctor_set(v_reuseFailAlloc_2265_, 1, v_k_2034_);
lean_ctor_set(v_reuseFailAlloc_2265_, 2, v_v_2035_);
lean_ctor_set(v_reuseFailAlloc_2265_, 3, v_l_2036_);
lean_ctor_set(v_reuseFailAlloc_2265_, 4, v___x_2262_);
v___x_2264_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
return v___x_2264_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_2036_) == 0)
{
lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2296_; 
lean_inc_ref(v_l_2036_);
lean_inc(v_v_2035_);
lean_inc(v_k_2034_);
lean_inc(v_size_2033_);
v_isSharedCheck_2296_ = !lean_is_exclusive(v_l_2023_);
if (v_isSharedCheck_2296_ == 0)
{
lean_object* v_unused_2297_; lean_object* v_unused_2298_; lean_object* v_unused_2299_; lean_object* v_unused_2300_; lean_object* v_unused_2301_; 
v_unused_2297_ = lean_ctor_get(v_l_2023_, 4);
lean_dec(v_unused_2297_);
v_unused_2298_ = lean_ctor_get(v_l_2023_, 3);
lean_dec(v_unused_2298_);
v_unused_2299_ = lean_ctor_get(v_l_2023_, 2);
lean_dec(v_unused_2299_);
v_unused_2300_ = lean_ctor_get(v_l_2023_, 1);
lean_dec(v_unused_2300_);
v_unused_2301_ = lean_ctor_get(v_l_2023_, 0);
lean_dec(v_unused_2301_);
v___x_2274_ = v_l_2023_;
v_isShared_2275_ = v_isSharedCheck_2296_;
goto v_resetjp_2273_;
}
else
{
lean_dec(v_l_2023_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2296_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
if (lean_obj_tag(v_r_2037_) == 0)
{
lean_object* v_k_2276_; lean_object* v_v_2277_; lean_object* v_size_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2282_; 
v_k_2276_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_k_2276_);
v_v_2277_ = lean_ctor_get(v___x_2189_, 1);
lean_inc(v_v_2277_);
lean_dec_ref(v___x_2189_);
v_size_2278_ = lean_ctor_get(v_r_2037_, 0);
v___x_2279_ = lean_nat_add(v___x_2043_, v_size_2033_);
lean_dec(v_size_2033_);
v___x_2280_ = lean_nat_add(v___x_2043_, v_size_2278_);
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 4, v_tree_2190_);
lean_ctor_set(v___x_2187_, 3, v_r_2037_);
lean_ctor_set(v___x_2187_, 2, v_v_2277_);
lean_ctor_set(v___x_2187_, 1, v_k_2276_);
lean_ctor_set(v___x_2187_, 0, v___x_2280_);
v___x_2282_ = v___x_2187_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v___x_2280_);
lean_ctor_set(v_reuseFailAlloc_2286_, 1, v_k_2276_);
lean_ctor_set(v_reuseFailAlloc_2286_, 2, v_v_2277_);
lean_ctor_set(v_reuseFailAlloc_2286_, 3, v_r_2037_);
lean_ctor_set(v_reuseFailAlloc_2286_, 4, v_tree_2190_);
v___x_2282_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
lean_object* v___x_2284_; 
if (v_isShared_2275_ == 0)
{
lean_ctor_set(v___x_2274_, 4, v___x_2282_);
lean_ctor_set(v___x_2274_, 0, v___x_2279_);
v___x_2284_ = v___x_2274_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v___x_2279_);
lean_ctor_set(v_reuseFailAlloc_2285_, 1, v_k_2034_);
lean_ctor_set(v_reuseFailAlloc_2285_, 2, v_v_2035_);
lean_ctor_set(v_reuseFailAlloc_2285_, 3, v_l_2036_);
lean_ctor_set(v_reuseFailAlloc_2285_, 4, v___x_2282_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
}
}
}
else
{
lean_object* v_k_2287_; lean_object* v_v_2288_; lean_object* v___x_2289_; lean_object* v___x_2291_; 
lean_dec(v_size_2033_);
v_k_2287_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_k_2287_);
v_v_2288_ = lean_ctor_get(v___x_2189_, 1);
lean_inc(v_v_2288_);
lean_dec_ref(v___x_2189_);
v___x_2289_ = lean_unsigned_to_nat(3u);
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 4, v_r_2037_);
lean_ctor_set(v___x_2187_, 3, v_r_2037_);
lean_ctor_set(v___x_2187_, 2, v_v_2288_);
lean_ctor_set(v___x_2187_, 1, v_k_2287_);
lean_ctor_set(v___x_2187_, 0, v___x_2043_);
v___x_2291_ = v___x_2187_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v___x_2043_);
lean_ctor_set(v_reuseFailAlloc_2295_, 1, v_k_2287_);
lean_ctor_set(v_reuseFailAlloc_2295_, 2, v_v_2288_);
lean_ctor_set(v_reuseFailAlloc_2295_, 3, v_r_2037_);
lean_ctor_set(v_reuseFailAlloc_2295_, 4, v_r_2037_);
v___x_2291_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
lean_object* v___x_2293_; 
if (v_isShared_2275_ == 0)
{
lean_ctor_set(v___x_2274_, 4, v___x_2291_);
lean_ctor_set(v___x_2274_, 0, v___x_2289_);
v___x_2293_ = v___x_2274_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v___x_2289_);
lean_ctor_set(v_reuseFailAlloc_2294_, 1, v_k_2034_);
lean_ctor_set(v_reuseFailAlloc_2294_, 2, v_v_2035_);
lean_ctor_set(v_reuseFailAlloc_2294_, 3, v_l_2036_);
lean_ctor_set(v_reuseFailAlloc_2294_, 4, v___x_2291_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_2037_) == 0)
{
lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2326_; 
lean_inc(v_l_2036_);
lean_inc(v_v_2035_);
lean_inc(v_k_2034_);
v_isSharedCheck_2326_ = !lean_is_exclusive(v_l_2023_);
if (v_isSharedCheck_2326_ == 0)
{
lean_object* v_unused_2327_; lean_object* v_unused_2328_; lean_object* v_unused_2329_; lean_object* v_unused_2330_; lean_object* v_unused_2331_; 
v_unused_2327_ = lean_ctor_get(v_l_2023_, 4);
lean_dec(v_unused_2327_);
v_unused_2328_ = lean_ctor_get(v_l_2023_, 3);
lean_dec(v_unused_2328_);
v_unused_2329_ = lean_ctor_get(v_l_2023_, 2);
lean_dec(v_unused_2329_);
v_unused_2330_ = lean_ctor_get(v_l_2023_, 1);
lean_dec(v_unused_2330_);
v_unused_2331_ = lean_ctor_get(v_l_2023_, 0);
lean_dec(v_unused_2331_);
v___x_2303_ = v_l_2023_;
v_isShared_2304_ = v_isSharedCheck_2326_;
goto v_resetjp_2302_;
}
else
{
lean_dec(v_l_2023_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2326_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v_k_2305_; lean_object* v_v_2306_; lean_object* v_k_2307_; lean_object* v_v_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2322_; 
v_k_2305_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_k_2305_);
v_v_2306_ = lean_ctor_get(v___x_2189_, 1);
lean_inc(v_v_2306_);
lean_dec_ref(v___x_2189_);
v_k_2307_ = lean_ctor_get(v_r_2037_, 1);
v_v_2308_ = lean_ctor_get(v_r_2037_, 2);
v_isSharedCheck_2322_ = !lean_is_exclusive(v_r_2037_);
if (v_isSharedCheck_2322_ == 0)
{
lean_object* v_unused_2323_; lean_object* v_unused_2324_; lean_object* v_unused_2325_; 
v_unused_2323_ = lean_ctor_get(v_r_2037_, 4);
lean_dec(v_unused_2323_);
v_unused_2324_ = lean_ctor_get(v_r_2037_, 3);
lean_dec(v_unused_2324_);
v_unused_2325_ = lean_ctor_get(v_r_2037_, 0);
lean_dec(v_unused_2325_);
v___x_2310_ = v_r_2037_;
v_isShared_2311_ = v_isSharedCheck_2322_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_v_2308_);
lean_inc(v_k_2307_);
lean_dec(v_r_2037_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2322_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v___x_2312_; lean_object* v___x_2314_; 
v___x_2312_ = lean_unsigned_to_nat(3u);
if (v_isShared_2311_ == 0)
{
lean_ctor_set(v___x_2310_, 4, v_l_2036_);
lean_ctor_set(v___x_2310_, 3, v_l_2036_);
lean_ctor_set(v___x_2310_, 2, v_v_2035_);
lean_ctor_set(v___x_2310_, 1, v_k_2034_);
lean_ctor_set(v___x_2310_, 0, v___x_2043_);
v___x_2314_ = v___x_2310_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v___x_2043_);
lean_ctor_set(v_reuseFailAlloc_2321_, 1, v_k_2034_);
lean_ctor_set(v_reuseFailAlloc_2321_, 2, v_v_2035_);
lean_ctor_set(v_reuseFailAlloc_2321_, 3, v_l_2036_);
lean_ctor_set(v_reuseFailAlloc_2321_, 4, v_l_2036_);
v___x_2314_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
lean_object* v___x_2316_; 
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 4, v_l_2036_);
lean_ctor_set(v___x_2187_, 3, v_l_2036_);
lean_ctor_set(v___x_2187_, 2, v_v_2306_);
lean_ctor_set(v___x_2187_, 1, v_k_2305_);
lean_ctor_set(v___x_2187_, 0, v___x_2043_);
v___x_2316_ = v___x_2187_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v___x_2043_);
lean_ctor_set(v_reuseFailAlloc_2320_, 1, v_k_2305_);
lean_ctor_set(v_reuseFailAlloc_2320_, 2, v_v_2306_);
lean_ctor_set(v_reuseFailAlloc_2320_, 3, v_l_2036_);
lean_ctor_set(v_reuseFailAlloc_2320_, 4, v_l_2036_);
v___x_2316_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
lean_object* v___x_2318_; 
if (v_isShared_2304_ == 0)
{
lean_ctor_set(v___x_2303_, 4, v___x_2316_);
lean_ctor_set(v___x_2303_, 3, v___x_2314_);
lean_ctor_set(v___x_2303_, 2, v_v_2308_);
lean_ctor_set(v___x_2303_, 1, v_k_2307_);
lean_ctor_set(v___x_2303_, 0, v___x_2312_);
v___x_2318_ = v___x_2303_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v___x_2312_);
lean_ctor_set(v_reuseFailAlloc_2319_, 1, v_k_2307_);
lean_ctor_set(v_reuseFailAlloc_2319_, 2, v_v_2308_);
lean_ctor_set(v_reuseFailAlloc_2319_, 3, v___x_2314_);
lean_ctor_set(v_reuseFailAlloc_2319_, 4, v___x_2316_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
}
}
}
}
else
{
lean_object* v_k_2332_; lean_object* v_v_2333_; lean_object* v___x_2334_; lean_object* v___x_2336_; 
v_k_2332_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_k_2332_);
v_v_2333_ = lean_ctor_get(v___x_2189_, 1);
lean_inc(v_v_2333_);
lean_dec_ref(v___x_2189_);
v___x_2334_ = lean_unsigned_to_nat(2u);
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 4, v_r_2037_);
lean_ctor_set(v___x_2187_, 3, v_l_2023_);
lean_ctor_set(v___x_2187_, 2, v_v_2333_);
lean_ctor_set(v___x_2187_, 1, v_k_2332_);
lean_ctor_set(v___x_2187_, 0, v___x_2334_);
v___x_2336_ = v___x_2187_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v___x_2334_);
lean_ctor_set(v_reuseFailAlloc_2337_, 1, v_k_2332_);
lean_ctor_set(v_reuseFailAlloc_2337_, 2, v_v_2333_);
lean_ctor_set(v_reuseFailAlloc_2337_, 3, v_l_2023_);
lean_ctor_set(v_reuseFailAlloc_2337_, 4, v_r_2037_);
v___x_2336_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
return v___x_2336_;
}
}
}
}
}
}
}
else
{
return v_l_2023_;
}
}
else
{
return v_r_2024_;
}
}
else
{
lean_object* v_val_2344_; lean_object* v___x_2346_; 
v_val_2344_ = lean_ctor_get(v___x_2032_, 0);
lean_inc(v_val_2344_);
lean_dec_ref_known(v___x_2032_, 1);
if (v_isShared_2027_ == 0)
{
lean_ctor_set(v___x_2026_, 2, v_val_2344_);
lean_ctor_set(v___x_2026_, 1, v_k_2018_);
v___x_2346_ = v___x_2026_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v_size_2020_);
lean_ctor_set(v_reuseFailAlloc_2347_, 1, v_k_2018_);
lean_ctor_set(v_reuseFailAlloc_2347_, 2, v_val_2344_);
lean_ctor_set(v_reuseFailAlloc_2347_, 3, v_l_2023_);
lean_ctor_set(v_reuseFailAlloc_2347_, 4, v_r_2024_);
v___x_2346_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
return v___x_2346_;
}
}
}
default: 
{
lean_object* v_impl_2348_; lean_object* v___x_2349_; 
lean_del_object(v___x_2026_);
lean_dec(v_size_2020_);
v_impl_2348_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(v___x_2017_, v_k_2018_, v_r_2024_);
v___x_2349_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_2021_, v_v_2022_, v_l_2023_, v_impl_2348_);
return v___x_2349_;
}
}
}
}
else
{
lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2351_ = lean_box(0);
v___x_2352_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0(v___x_2017_, v___x_2351_);
if (lean_obj_tag(v___x_2352_) == 0)
{
lean_dec(v_k_2018_);
return v_t_2019_;
}
else
{
lean_object* v_val_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
v_val_2353_ = lean_ctor_get(v___x_2352_, 0);
lean_inc(v_val_2353_);
lean_dec_ref_known(v___x_2352_, 1);
v___x_2354_ = lean_unsigned_to_nat(1u);
v___x_2355_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2355_, 0, v___x_2354_);
lean_ctor_set(v___x_2355_, 1, v_k_2018_);
lean_ctor_set(v___x_2355_, 2, v_val_2353_);
lean_ctor_set(v___x_2355_, 3, v_t_2019_);
lean_ctor_set(v___x_2355_, 4, v_t_2019_);
return v___x_2355_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_2356_, lean_object* v_i_2357_, lean_object* v_k_2358_){
_start:
{
lean_object* v___x_2359_; uint8_t v___x_2360_; 
v___x_2359_ = lean_array_get_size(v_keys_2356_);
v___x_2360_ = lean_nat_dec_lt(v_i_2357_, v___x_2359_);
if (v___x_2360_ == 0)
{
lean_dec(v_i_2357_);
return v___x_2360_;
}
else
{
lean_object* v_k_x27_2361_; uint8_t v___x_2362_; 
v_k_x27_2361_ = lean_array_fget_borrowed(v_keys_2356_, v_i_2357_);
v___x_2362_ = lean_name_eq(v_k_2358_, v_k_x27_2361_);
if (v___x_2362_ == 0)
{
lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2363_ = lean_unsigned_to_nat(1u);
v___x_2364_ = lean_nat_add(v_i_2357_, v___x_2363_);
lean_dec(v_i_2357_);
v_i_2357_ = v___x_2364_;
goto _start;
}
else
{
lean_dec(v_i_2357_);
return v___x_2360_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_2366_, lean_object* v_i_2367_, lean_object* v_k_2368_){
_start:
{
uint8_t v_res_2369_; lean_object* v_r_2370_; 
v_res_2369_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg(v_keys_2366_, v_i_2367_, v_k_2368_);
lean_dec(v_k_2368_);
lean_dec_ref(v_keys_2366_);
v_r_2370_ = lean_box(v_res_2369_);
return v_r_2370_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg(lean_object* v_x_2371_, size_t v_x_2372_, lean_object* v_x_2373_){
_start:
{
if (lean_obj_tag(v_x_2371_) == 0)
{
lean_object* v_es_2374_; lean_object* v___x_2375_; size_t v___x_2376_; size_t v___x_2377_; lean_object* v_j_2378_; lean_object* v___x_2379_; 
v_es_2374_ = lean_ctor_get(v_x_2371_, 0);
v___x_2375_ = lean_box(2);
v___x_2376_ = ((size_t)31ULL);
v___x_2377_ = lean_usize_land(v_x_2372_, v___x_2376_);
v_j_2378_ = lean_usize_to_nat(v___x_2377_);
v___x_2379_ = lean_array_get_borrowed(v___x_2375_, v_es_2374_, v_j_2378_);
lean_dec(v_j_2378_);
switch(lean_obj_tag(v___x_2379_))
{
case 0:
{
lean_object* v_key_2380_; uint8_t v___x_2381_; 
v_key_2380_ = lean_ctor_get(v___x_2379_, 0);
v___x_2381_ = lean_name_eq(v_x_2373_, v_key_2380_);
return v___x_2381_;
}
case 1:
{
lean_object* v_node_2382_; size_t v___x_2383_; size_t v___x_2384_; 
v_node_2382_ = lean_ctor_get(v___x_2379_, 0);
v___x_2383_ = ((size_t)5ULL);
v___x_2384_ = lean_usize_shift_right(v_x_2372_, v___x_2383_);
v_x_2371_ = v_node_2382_;
v_x_2372_ = v___x_2384_;
goto _start;
}
default: 
{
uint8_t v___x_2386_; 
v___x_2386_ = 0;
return v___x_2386_;
}
}
}
else
{
lean_object* v_ks_2387_; lean_object* v___x_2388_; uint8_t v___x_2389_; 
v_ks_2387_ = lean_ctor_get(v_x_2371_, 0);
v___x_2388_ = lean_unsigned_to_nat(0u);
v___x_2389_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg(v_ks_2387_, v___x_2388_, v_x_2373_);
return v___x_2389_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg___boxed(lean_object* v_x_2390_, lean_object* v_x_2391_, lean_object* v_x_2392_){
_start:
{
size_t v_x_3910__boxed_2393_; uint8_t v_res_2394_; lean_object* v_r_2395_; 
v_x_3910__boxed_2393_ = lean_unbox_usize(v_x_2391_);
lean_dec(v_x_2391_);
v_res_2394_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg(v_x_2390_, v_x_3910__boxed_2393_, v_x_2392_);
lean_dec(v_x_2392_);
lean_dec_ref(v_x_2390_);
v_r_2395_ = lean_box(v_res_2394_);
return v_r_2395_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg(lean_object* v_x_2396_, lean_object* v_x_2397_){
_start:
{
uint64_t v___y_2399_; 
if (lean_obj_tag(v_x_2397_) == 0)
{
uint64_t v___x_2402_; 
v___x_2402_ = 1723ULL;
v___y_2399_ = v___x_2402_;
goto v___jp_2398_;
}
else
{
uint64_t v_hash_2403_; 
v_hash_2403_ = lean_ctor_get_uint64(v_x_2397_, sizeof(void*)*2);
v___y_2399_ = v_hash_2403_;
goto v___jp_2398_;
}
v___jp_2398_:
{
size_t v___x_2400_; uint8_t v___x_2401_; 
v___x_2400_ = lean_uint64_to_usize(v___y_2399_);
v___x_2401_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg(v_x_2396_, v___x_2400_, v_x_2397_);
return v___x_2401_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg___boxed(lean_object* v_x_2404_, lean_object* v_x_2405_){
_start:
{
uint8_t v_res_2406_; lean_object* v_r_2407_; 
v_res_2406_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg(v_x_2404_, v_x_2405_);
lean_dec(v_x_2405_);
lean_dec_ref(v_x_2404_);
v_r_2407_ = lean_box(v_res_2406_);
return v_r_2407_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0(lean_object* v_tactics_2408_, lean_object* v_a_2409_, uint8_t v___x_2410_, lean_object* v_x_2411_, lean_object* v_____s_2412_){
_start:
{
lean_object* v_fst_2413_; lean_object* v_kinds_2414_; uint8_t v___x_2415_; 
v_fst_2413_ = lean_ctor_get(v_x_2411_, 0);
lean_inc(v_fst_2413_);
lean_dec_ref(v_x_2411_);
v_kinds_2414_ = lean_ctor_get(v_tactics_2408_, 1);
v___x_2415_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg(v_kinds_2414_, v_fst_2413_);
if (v___x_2415_ == 0)
{
lean_object* v___x_2416_; 
lean_dec(v_fst_2413_);
lean_dec(v_a_2409_);
v___x_2416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2416_, 0, v_____s_2412_);
return v___x_2416_;
}
else
{
lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; 
v___x_2417_ = l_Lean_Name_toString(v_a_2409_, v___x_2410_);
v___x_2418_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(v___x_2417_, v_fst_2413_, v_____s_2412_);
v___x_2419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2418_);
return v___x_2419_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0___boxed(lean_object* v_tactics_2420_, lean_object* v_a_2421_, lean_object* v___x_2422_, lean_object* v_x_2423_, lean_object* v_____s_2424_){
_start:
{
uint8_t v___x_3966__boxed_2425_; lean_object* v_res_2426_; 
v___x_3966__boxed_2425_ = lean_unbox(v___x_2422_);
v_res_2426_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0(v_tactics_2420_, v_a_2421_, v___x_3966__boxed_2425_, v_x_2423_, v_____s_2424_);
lean_dec_ref(v_tactics_2420_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg(lean_object* v_f_2427_, lean_object* v_keys_2428_, lean_object* v_vals_2429_, lean_object* v_i_2430_, lean_object* v_acc_2431_){
_start:
{
lean_object* v___x_2432_; uint8_t v___x_2433_; 
v___x_2432_ = lean_array_get_size(v_keys_2428_);
v___x_2433_ = lean_nat_dec_lt(v_i_2430_, v___x_2432_);
if (v___x_2433_ == 0)
{
lean_object* v___x_2434_; 
lean_dec(v_i_2430_);
lean_dec_ref(v_f_2427_);
v___x_2434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2434_, 0, v_acc_2431_);
return v___x_2434_;
}
else
{
lean_object* v_k_2435_; lean_object* v_v_2436_; lean_object* v___x_2437_; 
v_k_2435_ = lean_array_fget_borrowed(v_keys_2428_, v_i_2430_);
v_v_2436_ = lean_array_fget_borrowed(v_vals_2429_, v_i_2430_);
lean_inc_ref(v_f_2427_);
lean_inc(v_v_2436_);
lean_inc(v_k_2435_);
v___x_2437_ = lean_apply_3(v_f_2427_, v_acc_2431_, v_k_2435_, v_v_2436_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_dec(v_i_2430_);
lean_dec_ref(v_f_2427_);
return v___x_2437_;
}
else
{
lean_object* v_a_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
lean_inc(v_a_2438_);
lean_dec_ref_known(v___x_2437_, 1);
v___x_2439_ = lean_unsigned_to_nat(1u);
v___x_2440_ = lean_nat_add(v_i_2430_, v___x_2439_);
lean_dec(v_i_2430_);
v_i_2430_ = v___x_2440_;
v_acc_2431_ = v_a_2438_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_f_2442_, lean_object* v_keys_2443_, lean_object* v_vals_2444_, lean_object* v_i_2445_, lean_object* v_acc_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg(v_f_2442_, v_keys_2443_, v_vals_2444_, v_i_2445_, v_acc_2446_);
lean_dec_ref(v_vals_2444_);
lean_dec_ref(v_keys_2443_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(lean_object* v_f_2448_, lean_object* v_as_2449_, size_t v_i_2450_, size_t v_stop_2451_, lean_object* v_b_2452_){
_start:
{
lean_object* v_a_2454_; lean_object* v___y_2459_; uint8_t v___x_2461_; 
v___x_2461_ = lean_usize_dec_eq(v_i_2450_, v_stop_2451_);
if (v___x_2461_ == 0)
{
lean_object* v___x_2462_; 
v___x_2462_ = lean_array_uget_borrowed(v_as_2449_, v_i_2450_);
switch(lean_obj_tag(v___x_2462_))
{
case 0:
{
lean_object* v_key_2463_; lean_object* v_val_2464_; lean_object* v___x_2465_; 
v_key_2463_ = lean_ctor_get(v___x_2462_, 0);
v_val_2464_ = lean_ctor_get(v___x_2462_, 1);
lean_inc_ref(v_f_2448_);
lean_inc(v_val_2464_);
lean_inc(v_key_2463_);
v___x_2465_ = lean_apply_3(v_f_2448_, v_b_2452_, v_key_2463_, v_val_2464_);
v___y_2459_ = v___x_2465_;
goto v___jp_2458_;
}
case 1:
{
lean_object* v_node_2466_; lean_object* v___x_2467_; 
v_node_2466_ = lean_ctor_get(v___x_2462_, 0);
lean_inc(v_node_2466_);
lean_inc_ref(v_f_2448_);
v___x_2467_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(v_f_2448_, v_node_2466_, v_b_2452_);
v___y_2459_ = v___x_2467_;
goto v___jp_2458_;
}
default: 
{
v_a_2454_ = v_b_2452_;
goto v___jp_2453_;
}
}
}
else
{
lean_object* v___x_2468_; 
lean_dec_ref(v_f_2448_);
v___x_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2468_, 0, v_b_2452_);
return v___x_2468_;
}
v___jp_2453_:
{
size_t v___x_2455_; size_t v___x_2456_; 
v___x_2455_ = ((size_t)1ULL);
v___x_2456_ = lean_usize_add(v_i_2450_, v___x_2455_);
v_i_2450_ = v___x_2456_;
v_b_2452_ = v_a_2454_;
goto _start;
}
v___jp_2458_:
{
if (lean_obj_tag(v___y_2459_) == 0)
{
lean_dec_ref(v_f_2448_);
return v___y_2459_;
}
else
{
lean_object* v_a_2460_; 
v_a_2460_ = lean_ctor_get(v___y_2459_, 0);
lean_inc(v_a_2460_);
lean_dec_ref_known(v___y_2459_, 1);
v_a_2454_ = v_a_2460_;
goto v___jp_2453_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(lean_object* v_f_2469_, lean_object* v_x_2470_, lean_object* v_x_2471_){
_start:
{
if (lean_obj_tag(v_x_2470_) == 0)
{
lean_object* v_es_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2485_; 
v_es_2472_ = lean_ctor_get(v_x_2470_, 0);
v_isSharedCheck_2485_ = !lean_is_exclusive(v_x_2470_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2474_ = v_x_2470_;
v_isShared_2475_ = v_isSharedCheck_2485_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_es_2472_);
lean_dec(v_x_2470_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2485_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2476_; lean_object* v___x_2477_; uint8_t v___x_2478_; 
v___x_2476_ = lean_unsigned_to_nat(0u);
v___x_2477_ = lean_array_get_size(v_es_2472_);
v___x_2478_ = lean_nat_dec_lt(v___x_2476_, v___x_2477_);
if (v___x_2478_ == 0)
{
lean_object* v___x_2480_; 
lean_dec_ref(v_es_2472_);
lean_dec_ref(v_f_2469_);
if (v_isShared_2475_ == 0)
{
lean_ctor_set_tag(v___x_2474_, 1);
lean_ctor_set(v___x_2474_, 0, v_x_2471_);
v___x_2480_ = v___x_2474_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_x_2471_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
else
{
size_t v___x_2482_; size_t v___x_2483_; lean_object* v___x_2484_; 
lean_del_object(v___x_2474_);
v___x_2482_ = ((size_t)0ULL);
v___x_2483_ = lean_usize_of_nat(v___x_2477_);
v___x_2484_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(v_f_2469_, v_es_2472_, v___x_2482_, v___x_2483_, v_x_2471_);
lean_dec_ref(v_es_2472_);
return v___x_2484_;
}
}
}
else
{
lean_object* v_ks_2486_; lean_object* v_vs_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; 
v_ks_2486_ = lean_ctor_get(v_x_2470_, 0);
lean_inc_ref(v_ks_2486_);
v_vs_2487_ = lean_ctor_get(v_x_2470_, 1);
lean_inc_ref(v_vs_2487_);
lean_dec_ref_known(v_x_2470_, 2);
v___x_2488_ = lean_unsigned_to_nat(0u);
v___x_2489_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg(v_f_2469_, v_ks_2486_, v_vs_2487_, v___x_2488_, v_x_2471_);
lean_dec_ref(v_vs_2487_);
lean_dec_ref(v_ks_2486_);
return v___x_2489_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg___boxed(lean_object* v_f_2490_, lean_object* v_as_2491_, lean_object* v_i_2492_, lean_object* v_stop_2493_, lean_object* v_b_2494_){
_start:
{
size_t v_i_boxed_2495_; size_t v_stop_boxed_2496_; lean_object* v_res_2497_; 
v_i_boxed_2495_ = lean_unbox_usize(v_i_2492_);
lean_dec(v_i_2492_);
v_stop_boxed_2496_ = lean_unbox_usize(v_stop_2493_);
lean_dec(v_stop_2493_);
v_res_2497_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(v_f_2490_, v_as_2491_, v_i_boxed_2495_, v_stop_boxed_2496_, v_b_2494_);
lean_dec_ref(v_as_2491_);
return v_res_2497_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg___lam__0(lean_object* v_f_2498_, lean_object* v_s_2499_, lean_object* v_a_2500_, lean_object* v_b_2501_){
_start:
{
lean_object* v___x_2502_; lean_object* v___x_2503_; 
v___x_2502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2502_, 0, v_a_2500_);
lean_ctor_set(v___x_2502_, 1, v_b_2501_);
v___x_2503_ = lean_apply_2(v_f_2498_, v___x_2502_, v_s_2499_);
if (lean_obj_tag(v___x_2503_) == 0)
{
lean_object* v_a_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2511_; 
v_a_2504_ = lean_ctor_get(v___x_2503_, 0);
v_isSharedCheck_2511_ = !lean_is_exclusive(v___x_2503_);
if (v_isSharedCheck_2511_ == 0)
{
v___x_2506_ = v___x_2503_;
v_isShared_2507_ = v_isSharedCheck_2511_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_a_2504_);
lean_dec(v___x_2503_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2511_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
lean_object* v___x_2509_; 
if (v_isShared_2507_ == 0)
{
v___x_2509_ = v___x_2506_;
goto v_reusejp_2508_;
}
else
{
lean_object* v_reuseFailAlloc_2510_; 
v_reuseFailAlloc_2510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2510_, 0, v_a_2504_);
v___x_2509_ = v_reuseFailAlloc_2510_;
goto v_reusejp_2508_;
}
v_reusejp_2508_:
{
return v___x_2509_;
}
}
}
else
{
lean_object* v_a_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2519_; 
v_a_2512_ = lean_ctor_get(v___x_2503_, 0);
v_isSharedCheck_2519_ = !lean_is_exclusive(v___x_2503_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2514_ = v___x_2503_;
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_a_2512_);
lean_dec(v___x_2503_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
lean_object* v___x_2517_; 
if (v_isShared_2515_ == 0)
{
v___x_2517_ = v___x_2514_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v_a_2512_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
return v___x_2517_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg(lean_object* v_map_2520_, lean_object* v_init_2521_, lean_object* v_f_2522_){
_start:
{
lean_object* v___f_2523_; lean_object* v___x_2524_; lean_object* v_a_2525_; 
v___f_2523_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2523_, 0, v_f_2522_);
lean_inc_ref(v_map_2520_);
v___x_2524_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(v___f_2523_, v_map_2520_, v_init_2521_);
v_a_2525_ = lean_ctor_get(v___x_2524_, 0);
lean_inc(v_a_2525_);
lean_dec_ref(v___x_2524_);
return v_a_2525_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg___boxed(lean_object* v_map_2526_, lean_object* v_init_2527_, lean_object* v_f_2528_){
_start:
{
lean_object* v_res_2529_; 
v_res_2529_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg(v_map_2526_, v_init_2527_, v_f_2528_);
lean_dec_ref(v_map_2526_);
return v_res_2529_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2530_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__0);
v___x_2531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2530_);
return v___x_2531_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg(lean_object* v_tactics_2532_, lean_object* v_a_2533_, uint8_t v___x_2534_, lean_object* v_as_x27_2535_, lean_object* v_b_2536_){
_start:
{
if (lean_obj_tag(v_as_x27_2535_) == 0)
{
lean_dec(v_a_2533_);
lean_dec_ref(v_tactics_2532_);
return v_b_2536_;
}
else
{
lean_object* v_head_2537_; lean_object* v_fst_2538_; lean_object* v_info_2539_; lean_object* v_tail_2540_; lean_object* v_collectKinds_2541_; lean_object* v___x_2542_; lean_object* v___f_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v_head_2537_ = lean_ctor_get(v_as_x27_2535_, 0);
v_fst_2538_ = lean_ctor_get(v_head_2537_, 0);
v_info_2539_ = lean_ctor_get(v_fst_2538_, 0);
v_tail_2540_ = lean_ctor_get(v_as_x27_2535_, 1);
v_collectKinds_2541_ = lean_ctor_get(v_info_2539_, 1);
v___x_2542_ = lean_box(v___x_2534_);
lean_inc(v_a_2533_);
lean_inc_ref(v_tactics_2532_);
v___f_2543_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_2543_, 0, v_tactics_2532_);
lean_closure_set(v___f_2543_, 1, v_a_2533_);
lean_closure_set(v___f_2543_, 2, v___x_2542_);
v___x_2544_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0);
lean_inc_ref(v_collectKinds_2541_);
v___x_2545_ = lean_apply_1(v_collectKinds_2541_, v___x_2544_);
v___x_2546_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg(v___x_2545_, v_b_2536_, v___f_2543_);
lean_dec_ref(v___x_2545_);
v_as_x27_2535_ = v_tail_2540_;
v_b_2536_ = v___x_2546_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___boxed(lean_object* v_tactics_2548_, lean_object* v_a_2549_, lean_object* v___x_2550_, lean_object* v_as_x27_2551_, lean_object* v_b_2552_){
_start:
{
uint8_t v___x_4125__boxed_2553_; lean_object* v_res_2554_; 
v___x_4125__boxed_2553_ = lean_unbox(v___x_2550_);
v_res_2554_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg(v_tactics_2548_, v_a_2549_, v___x_4125__boxed_2553_, v_as_x27_2551_, v_b_2552_);
lean_dec(v_as_x27_2551_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4(lean_object* v_tactics_2557_, lean_object* v_init_2558_, lean_object* v_x_2559_){
_start:
{
if (lean_obj_tag(v_x_2559_) == 0)
{
lean_object* v_k_2560_; lean_object* v_v_2561_; lean_object* v_l_2562_; lean_object* v_r_2563_; lean_object* v___x_2564_; lean_object* v_a_2565_; lean_object* v___x_2566_; uint8_t v___x_2567_; 
v_k_2560_ = lean_ctor_get(v_x_2559_, 1);
lean_inc(v_k_2560_);
v_v_2561_ = lean_ctor_get(v_x_2559_, 2);
lean_inc(v_v_2561_);
v_l_2562_ = lean_ctor_get(v_x_2559_, 3);
lean_inc(v_l_2562_);
v_r_2563_ = lean_ctor_get(v_x_2559_, 4);
lean_inc(v_r_2563_);
lean_dec_ref_known(v_x_2559_, 5);
lean_inc_ref(v_tactics_2557_);
v___x_2564_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4(v_tactics_2557_, v_init_2558_, v_l_2562_);
v_a_2565_ = lean_ctor_get(v___x_2564_, 0);
lean_inc(v_a_2565_);
lean_dec_ref(v___x_2564_);
v___x_2566_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__0));
v___x_2567_ = lean_name_eq(v_k_2560_, v___x_2566_);
if (v___x_2567_ == 0)
{
lean_object* v___x_2568_; 
lean_inc_ref(v_tactics_2557_);
v___x_2568_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg(v_tactics_2557_, v_k_2560_, v___x_2567_, v_v_2561_, v_a_2565_);
lean_dec(v_v_2561_);
v_init_2558_ = v___x_2568_;
v_x_2559_ = v_r_2563_;
goto _start;
}
else
{
lean_dec(v_v_2561_);
lean_dec(v_k_2560_);
v_init_2558_ = v_a_2565_;
v_x_2559_ = v_r_2563_;
goto _start;
}
}
else
{
lean_object* v___x_2571_; 
lean_dec_ref(v_tactics_2557_);
v___x_2571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2571_, 0, v_init_2558_);
return v___x_2571_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(lean_object* v_tactics_2572_, lean_object* v_table_2573_, lean_object* v_firsts_2574_){
_start:
{
lean_object* v___x_2575_; lean_object* v_a_2576_; 
v___x_2575_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4(v_tactics_2572_, v_firsts_2574_, v_table_2573_);
v_a_2576_ = lean_ctor_get(v___x_2575_, 0);
lean_inc(v_a_2576_);
lean_dec_ref(v___x_2575_);
return v_a_2576_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0(lean_object* v_00_u03b2_2577_, lean_object* v_x_2578_, lean_object* v_x_2579_){
_start:
{
uint8_t v___x_2580_; 
v___x_2580_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg(v_x_2578_, v_x_2579_);
return v___x_2580_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___boxed(lean_object* v_00_u03b2_2581_, lean_object* v_x_2582_, lean_object* v_x_2583_){
_start:
{
uint8_t v_res_2584_; lean_object* v_r_2585_; 
v_res_2584_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0(v_00_u03b2_2581_, v_x_2582_, v_x_2583_);
lean_dec(v_x_2583_);
lean_dec_ref(v_x_2582_);
v_r_2585_ = lean_box(v_res_2584_);
return v_r_2585_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1(lean_object* v___x_2586_, lean_object* v_k_2587_, lean_object* v_t_2588_, lean_object* v_hl_2589_){
_start:
{
lean_object* v___x_2590_; 
v___x_2590_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(v___x_2586_, v_k_2587_, v_t_2588_);
return v___x_2590_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2(lean_object* v_00_u03c3_2591_, lean_object* v_00_u03b2_2592_, lean_object* v_map_2593_, lean_object* v_init_2594_, lean_object* v_f_2595_){
_start:
{
lean_object* v___x_2596_; 
v___x_2596_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg(v_map_2593_, v_init_2594_, v_f_2595_);
return v___x_2596_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___boxed(lean_object* v_00_u03c3_2597_, lean_object* v_00_u03b2_2598_, lean_object* v_map_2599_, lean_object* v_init_2600_, lean_object* v_f_2601_){
_start:
{
lean_object* v_res_2602_; 
v_res_2602_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2(v_00_u03c3_2597_, v_00_u03b2_2598_, v_map_2599_, v_init_2600_, v_f_2601_);
lean_dec_ref(v_map_2599_);
return v_res_2602_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3(lean_object* v_tactics_2603_, lean_object* v_a_2604_, uint8_t v___x_2605_, lean_object* v_as_2606_, lean_object* v_as_x27_2607_, lean_object* v_b_2608_, lean_object* v_a_2609_){
_start:
{
lean_object* v___x_2610_; 
v___x_2610_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg(v_tactics_2603_, v_a_2604_, v___x_2605_, v_as_x27_2607_, v_b_2608_);
return v___x_2610_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___boxed(lean_object* v_tactics_2611_, lean_object* v_a_2612_, lean_object* v___x_2613_, lean_object* v_as_2614_, lean_object* v_as_x27_2615_, lean_object* v_b_2616_, lean_object* v_a_2617_){
_start:
{
uint8_t v___x_4202__boxed_2618_; lean_object* v_res_2619_; 
v___x_4202__boxed_2618_ = lean_unbox(v___x_2613_);
v_res_2619_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3(v_tactics_2611_, v_a_2612_, v___x_4202__boxed_2618_, v_as_2614_, v_as_x27_2615_, v_b_2616_, v_a_2617_);
lean_dec(v_as_x27_2615_);
lean_dec(v_as_2614_);
return v_res_2619_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0(lean_object* v_00_u03b2_2620_, lean_object* v_x_2621_, size_t v_x_2622_, lean_object* v_x_2623_){
_start:
{
uint8_t v___x_2624_; 
v___x_2624_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg(v_x_2621_, v_x_2622_, v_x_2623_);
return v___x_2624_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2625_, lean_object* v_x_2626_, lean_object* v_x_2627_, lean_object* v_x_2628_){
_start:
{
size_t v_x_4211__boxed_2629_; uint8_t v_res_2630_; lean_object* v_r_2631_; 
v_x_4211__boxed_2629_ = lean_unbox_usize(v_x_2627_);
lean_dec(v_x_2627_);
v_res_2630_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0(v_00_u03b2_2625_, v_x_2626_, v_x_4211__boxed_2629_, v_x_2628_);
lean_dec(v_x_2628_);
lean_dec_ref(v_x_2626_);
v_r_2631_ = lean_box(v_res_2630_);
return v_r_2631_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3___redArg(lean_object* v_map_2632_, lean_object* v_f_2633_, lean_object* v_init_2634_){
_start:
{
lean_object* v___x_2635_; 
v___x_2635_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(v_f_2633_, v_map_2632_, v_init_2634_);
return v___x_2635_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3(lean_object* v_00_u03c3_2636_, lean_object* v_00_u03c3_2637_, lean_object* v_00_u03b2_2638_, lean_object* v_map_2639_, lean_object* v_f_2640_, lean_object* v_init_2641_){
_start:
{
lean_object* v___x_2642_; 
v___x_2642_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(v_f_2640_, v_map_2639_, v_init_2641_);
return v___x_2642_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2643_, lean_object* v_keys_2644_, lean_object* v_vals_2645_, lean_object* v_heq_2646_, lean_object* v_i_2647_, lean_object* v_k_2648_){
_start:
{
uint8_t v___x_2649_; 
v___x_2649_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg(v_keys_2644_, v_i_2647_, v_k_2648_);
return v___x_2649_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2650_, lean_object* v_keys_2651_, lean_object* v_vals_2652_, lean_object* v_heq_2653_, lean_object* v_i_2654_, lean_object* v_k_2655_){
_start:
{
uint8_t v_res_2656_; lean_object* v_r_2657_; 
v_res_2656_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1(v_00_u03b2_2650_, v_keys_2651_, v_vals_2652_, v_heq_2653_, v_i_2654_, v_k_2655_);
lean_dec(v_k_2655_);
lean_dec_ref(v_vals_2652_);
lean_dec_ref(v_keys_2651_);
v_r_2657_ = lean_box(v_res_2656_);
return v_r_2657_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5(lean_object* v_00_u03c3_2658_, lean_object* v_00_u03c3_2659_, lean_object* v_00_u03b1_2660_, lean_object* v_00_u03b2_2661_, lean_object* v_f_2662_, lean_object* v_x_2663_, lean_object* v_x_2664_){
_start:
{
lean_object* v___x_2665_; 
v___x_2665_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(v_f_2662_, v_x_2663_, v_x_2664_);
return v___x_2665_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8(lean_object* v_00_u03b1_2666_, lean_object* v_00_u03b2_2667_, lean_object* v_00_u03c3_2668_, lean_object* v_00_u03c3_2669_, lean_object* v_f_2670_, lean_object* v_as_2671_, size_t v_i_2672_, size_t v_stop_2673_, lean_object* v_b_2674_){
_start:
{
lean_object* v___x_2675_; 
v___x_2675_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(v_f_2670_, v_as_2671_, v_i_2672_, v_stop_2673_, v_b_2674_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___boxed(lean_object* v_00_u03b1_2676_, lean_object* v_00_u03b2_2677_, lean_object* v_00_u03c3_2678_, lean_object* v_00_u03c3_2679_, lean_object* v_f_2680_, lean_object* v_as_2681_, lean_object* v_i_2682_, lean_object* v_stop_2683_, lean_object* v_b_2684_){
_start:
{
size_t v_i_boxed_2685_; size_t v_stop_boxed_2686_; lean_object* v_res_2687_; 
v_i_boxed_2685_ = lean_unbox_usize(v_i_2682_);
lean_dec(v_i_2682_);
v_stop_boxed_2686_ = lean_unbox_usize(v_stop_2683_);
lean_dec(v_stop_2683_);
v_res_2687_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8(v_00_u03b1_2676_, v_00_u03b2_2677_, v_00_u03c3_2678_, v_00_u03c3_2679_, v_f_2680_, v_as_2681_, v_i_boxed_2685_, v_stop_boxed_2686_, v_b_2684_);
lean_dec_ref(v_as_2681_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9(lean_object* v_00_u03c3_2688_, lean_object* v_00_u03c3_2689_, lean_object* v_00_u03b1_2690_, lean_object* v_00_u03b2_2691_, lean_object* v_f_2692_, lean_object* v_keys_2693_, lean_object* v_vals_2694_, lean_object* v_heq_2695_, lean_object* v_i_2696_, lean_object* v_acc_2697_){
_start:
{
lean_object* v___x_2698_; 
v___x_2698_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg(v_f_2692_, v_keys_2693_, v_vals_2694_, v_i_2696_, v_acc_2697_);
return v___x_2698_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03c3_2699_, lean_object* v_00_u03c3_2700_, lean_object* v_00_u03b1_2701_, lean_object* v_00_u03b2_2702_, lean_object* v_f_2703_, lean_object* v_keys_2704_, lean_object* v_vals_2705_, lean_object* v_heq_2706_, lean_object* v_i_2707_, lean_object* v_acc_2708_){
_start:
{
lean_object* v_res_2709_; 
v_res_2709_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9(v_00_u03c3_2699_, v_00_u03c3_2700_, v_00_u03b1_2701_, v_00_u03b2_2702_, v_f_2703_, v_keys_2704_, v_vals_2705_, v_heq_2706_, v_i_2707_, v_acc_2708_);
lean_dec_ref(v_vals_2705_);
lean_dec_ref(v_keys_2704_);
return v_res_2709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__0(lean_object* v_x1_2710_, lean_object* v_x2_2711_){
_start:
{
lean_object* v_fst_2712_; lean_object* v_snd_2713_; lean_object* v___x_2714_; 
v_fst_2712_ = lean_ctor_get(v_x2_2711_, 0);
lean_inc(v_fst_2712_);
v_snd_2713_ = lean_ctor_get(v_x2_2711_, 1);
lean_inc(v_snd_2713_);
lean_dec_ref(v_x2_2711_);
v___x_2714_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2712_, v_snd_2713_, v_x1_2710_);
return v___x_2714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1(lean_object* v___f_2734_, lean_object* v_x1_2735_, lean_object* v_x2_2736_){
_start:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; uint8_t v___x_2740_; 
v___x_2737_ = lean_unsigned_to_nat(0u);
v___x_2738_ = lean_array_get_size(v_x2_2736_);
v___x_2739_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__9));
v___x_2740_ = lean_nat_dec_lt(v___x_2737_, v___x_2738_);
if (v___x_2740_ == 0)
{
lean_dec_ref(v_x2_2736_);
lean_dec_ref(v___f_2734_);
return v_x1_2735_;
}
else
{
size_t v___x_2741_; size_t v___x_2742_; lean_object* v___x_2743_; 
v___x_2741_ = ((size_t)0ULL);
v___x_2742_ = lean_usize_of_nat(v___x_2738_);
v___x_2743_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2739_, v___f_2734_, v_x2_2736_, v___x_2741_, v___x_2742_, v_x1_2735_);
return v___x_2743_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2(lean_object* v___x_2747_, lean_object* v___x_2748_, lean_object* v___x_2749_, lean_object* v___x_2750_, lean_object* v___x_2751_, lean_object* v_toPure_2752_, lean_object* v___f_2753_, lean_object* v_env_2754_){
_start:
{
lean_object* v___x_2755_; lean_object* v_ext_2756_; lean_object* v_toEnvExtension_2757_; lean_object* v_asyncMode_2758_; uint8_t v___x_2759_; lean_object* v___x_2760_; lean_object* v_categories_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; 
v___x_2755_ = l_Lean_Parser_parserExtension;
v_ext_2756_ = lean_ctor_get(v___x_2755_, 1);
v_toEnvExtension_2757_ = lean_ctor_get(v_ext_2756_, 0);
v_asyncMode_2758_ = lean_ctor_get(v_toEnvExtension_2757_, 2);
v___x_2759_ = 0;
lean_inc_ref(v_env_2754_);
v___x_2760_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2747_, v___x_2755_, v_env_2754_, v_asyncMode_2758_, v___x_2759_);
v_categories_2761_ = lean_ctor_get(v___x_2760_, 2);
lean_inc_ref(v_categories_2761_);
lean_dec(v___x_2760_);
v___x_2762_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1));
v___x_2763_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_2748_, v___x_2749_, v_categories_2761_, v___x_2762_);
lean_dec_ref(v_categories_2761_);
if (lean_obj_tag(v___x_2763_) == 1)
{
lean_object* v_val_2764_; lean_object* v___y_2766_; lean_object* v___x_2773_; lean_object* v_toEnvExtension_2774_; lean_object* v_exportEntriesFn_2775_; lean_object* v_asyncMode_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v_importedEntries_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v_exported_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; uint8_t v___x_2788_; 
v_val_2764_ = lean_ctor_get(v___x_2763_, 0);
lean_inc(v_val_2764_);
lean_dec_ref_known(v___x_2763_, 1);
v___x_2773_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_2774_ = lean_ctor_get(v___x_2773_, 0);
v_exportEntriesFn_2775_ = lean_ctor_get(v___x_2773_, 4);
v_asyncMode_2776_ = lean_ctor_get(v_toEnvExtension_2774_, 2);
v___x_2777_ = lean_box(0);
lean_inc_ref_n(v_env_2754_, 2);
v___x_2778_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2750_, v_toEnvExtension_2774_, v_env_2754_, v_asyncMode_2776_, v___x_2777_, v___x_2759_);
v_importedEntries_2779_ = lean_ctor_get(v___x_2778_, 0);
lean_inc_ref(v_importedEntries_2779_);
lean_dec(v___x_2778_);
v___x_2780_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2751_, v___x_2773_, v_env_2754_, v_asyncMode_2776_, v___x_2777_, v___x_2759_);
lean_inc_ref(v_exportEntriesFn_2775_);
v___x_2781_ = lean_apply_2(v_exportEntriesFn_2775_, v_env_2754_, v___x_2780_);
v_exported_2782_ = lean_ctor_get(v___x_2781_, 0);
lean_inc(v_exported_2782_);
lean_dec_ref(v___x_2781_);
v___x_2783_ = lean_box(1);
v___x_2784_ = lean_array_push(v_importedEntries_2779_, v_exported_2782_);
v___x_2785_ = lean_unsigned_to_nat(0u);
v___x_2786_ = lean_array_get_size(v___x_2784_);
v___x_2787_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__9));
v___x_2788_ = lean_nat_dec_lt(v___x_2785_, v___x_2786_);
if (v___x_2788_ == 0)
{
lean_dec_ref(v___x_2784_);
lean_dec_ref(v___f_2753_);
v___y_2766_ = v___x_2783_;
goto v___jp_2765_;
}
else
{
size_t v___x_2789_; size_t v___x_2790_; lean_object* v___x_2791_; 
v___x_2789_ = ((size_t)0ULL);
v___x_2790_ = lean_usize_of_nat(v___x_2786_);
v___x_2791_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2787_, v___f_2753_, v___x_2784_, v___x_2789_, v___x_2790_, v___x_2783_);
v___y_2766_ = v___x_2791_;
goto v___jp_2765_;
}
v___jp_2765_:
{
lean_object* v_tables_2767_; lean_object* v_leadingTable_2768_; lean_object* v_trailingTable_2769_; lean_object* v_firstTokens_2770_; lean_object* v_firstTokens_2771_; lean_object* v___x_2772_; 
v_tables_2767_ = lean_ctor_get(v_val_2764_, 2);
v_leadingTable_2768_ = lean_ctor_get(v_tables_2767_, 0);
v_trailingTable_2769_ = lean_ctor_get(v_tables_2767_, 2);
lean_inc(v_trailingTable_2769_);
lean_inc(v_leadingTable_2768_);
lean_inc(v_val_2764_);
v_firstTokens_2770_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_2764_, v_leadingTable_2768_, v___y_2766_);
v_firstTokens_2771_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_2764_, v_trailingTable_2769_, v_firstTokens_2770_);
v___x_2772_ = lean_apply_2(v_toPure_2752_, lean_box(0), v_firstTokens_2771_);
return v___x_2772_;
}
}
else
{
lean_object* v___x_2792_; lean_object* v___x_2793_; 
lean_dec(v___x_2763_);
lean_dec_ref(v_env_2754_);
lean_dec_ref(v___f_2753_);
lean_dec(v___x_2751_);
v___x_2792_ = lean_box(1);
v___x_2793_ = lean_apply_2(v_toPure_2752_, lean_box(0), v___x_2792_);
return v___x_2793_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___boxed(lean_object* v___x_2794_, lean_object* v___x_2795_, lean_object* v___x_2796_, lean_object* v___x_2797_, lean_object* v___x_2798_, lean_object* v_toPure_2799_, lean_object* v___f_2800_, lean_object* v_env_2801_){
_start:
{
lean_object* v_res_2802_; 
v_res_2802_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2(v___x_2794_, v___x_2795_, v___x_2796_, v___x_2797_, v___x_2798_, v_toPure_2799_, v___f_2800_, v_env_2801_);
lean_dec_ref(v___x_2797_);
lean_dec_ref(v___x_2794_);
return v_res_2802_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2(void){
_start:
{
lean_object* v___x_2806_; lean_object* v___x_2807_; 
v___x_2806_ = lean_box(1);
v___x_2807_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v___x_2806_);
return v___x_2807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg(lean_object* v_inst_2810_, lean_object* v_inst_2811_){
_start:
{
lean_object* v_toApplicative_2812_; lean_object* v_toBind_2813_; lean_object* v_getEnv_2814_; lean_object* v_toPure_2815_; lean_object* v___f_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___f_2822_; lean_object* v___x_2823_; 
v_toApplicative_2812_ = lean_ctor_get(v_inst_2810_, 0);
lean_inc_ref(v_toApplicative_2812_);
v_toBind_2813_ = lean_ctor_get(v_inst_2810_, 1);
lean_inc(v_toBind_2813_);
lean_dec_ref(v_inst_2810_);
v_getEnv_2814_ = lean_ctor_get(v_inst_2811_, 0);
lean_inc(v_getEnv_2814_);
lean_dec_ref(v_inst_2811_);
v_toPure_2815_ = lean_ctor_get(v_toApplicative_2812_, 1);
lean_inc(v_toPure_2815_);
lean_dec_ref(v_toApplicative_2812_);
v___f_2816_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__1));
v___x_2817_ = lean_box(1);
v___x_2818_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2);
v___x_2819_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__3));
v___x_2820_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__4));
v___x_2821_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___f_2822_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_2822_, 0, v___x_2821_);
lean_closure_set(v___f_2822_, 1, v___x_2819_);
lean_closure_set(v___f_2822_, 2, v___x_2820_);
lean_closure_set(v___f_2822_, 3, v___x_2818_);
lean_closure_set(v___f_2822_, 4, v___x_2817_);
lean_closure_set(v___f_2822_, 5, v_toPure_2815_);
lean_closure_set(v___f_2822_, 6, v___f_2816_);
v___x_2823_ = lean_apply_4(v_toBind_2813_, lean_box(0), lean_box(0), v_getEnv_2814_, v___f_2822_);
return v___x_2823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens(lean_object* v_m_2824_, lean_object* v_inst_2825_, lean_object* v_inst_2826_){
_start:
{
lean_object* v___x_2827_; 
v___x_2827_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg(v_inst_2825_, v_inst_2826_);
return v___x_2827_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2828_; lean_object* v___x_2829_; 
v___x_2828_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__0);
v___x_2829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2829_, 0, v___x_2828_);
return v___x_2829_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; 
v___x_2830_ = lean_box(1);
v___x_2831_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg___closed__4);
v___x_2832_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0, &l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0_once, _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0);
v___x_2833_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2833_, 0, v___x_2832_);
lean_ctor_set(v___x_2833_, 1, v___x_2831_);
lean_ctor_set(v___x_2833_, 2, v___x_2830_);
return v___x_2833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0(lean_object* v_n_2835_, lean_object* v___y_2836_, lean_object* v_toPure_2837_, lean_object* v_firsts_2838_, lean_object* v_____do__lift_2839_){
_start:
{
lean_object* v___y_2841_; lean_object* v_val_2852_; 
if (lean_obj_tag(v_____do__lift_2839_) == 0)
{
lean_object* v___x_2854_; lean_object* v___x_2855_; 
v___x_2854_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2));
lean_inc(v_n_2835_);
v___x_2855_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___x_2854_, v_firsts_2838_, v_n_2835_);
if (lean_obj_tag(v___x_2855_) == 0)
{
uint8_t v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2856_ = 1;
lean_inc(v_n_2835_);
v___x_2857_ = l_Lean_Name_toString(v_n_2835_, v___x_2856_);
v___x_2858_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2857_);
v___y_2841_ = v___x_2858_;
goto v___jp_2840_;
}
else
{
lean_object* v_val_2859_; 
v_val_2859_ = lean_ctor_get(v___x_2855_, 0);
lean_inc(v_val_2859_);
lean_dec_ref_known(v___x_2855_, 1);
v_val_2852_ = v_val_2859_;
goto v___jp_2851_;
}
}
else
{
lean_object* v_val_2860_; 
lean_dec(v_firsts_2838_);
v_val_2860_ = lean_ctor_get(v_____do__lift_2839_, 0);
lean_inc(v_val_2860_);
lean_dec_ref_known(v_____do__lift_2839_, 1);
v_val_2852_ = v_val_2860_;
goto v___jp_2851_;
}
v___jp_2840_:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; uint8_t v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; 
v___x_2842_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9);
v___x_2843_ = l_Lean_Expr_const___override(v_n_2835_, v___y_2836_);
v___x_2844_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1, &l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1);
v___x_2845_ = lean_box(0);
v___x_2846_ = 0;
v___x_2847_ = l_Lean_MessageData_withExprHover(v___y_2841_, v___x_2843_, v___x_2844_, v___x_2845_, v___x_2845_, v___x_2845_, v___x_2846_);
v___x_2848_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2842_);
lean_ctor_set(v___x_2848_, 1, v___x_2847_);
v___x_2849_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2849_, 0, v___x_2848_);
lean_ctor_set(v___x_2849_, 1, v___x_2842_);
v___x_2850_ = lean_apply_2(v_toPure_2837_, lean_box(0), v___x_2849_);
return v___x_2850_;
}
v___jp_2851_:
{
lean_object* v___x_2853_; 
v___x_2853_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2853_, 0, v_val_2852_);
v___y_2841_ = v___x_2853_;
goto v___jp_2840_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__1(lean_object* v_n_2861_, lean_object* v_toPure_2862_, lean_object* v_firsts_2863_, lean_object* v_inst_2864_, lean_object* v_inst_2865_, lean_object* v_toBind_2866_, lean_object* v___f_2867_, lean_object* v_env_2868_){
_start:
{
lean_object* v___y_2870_; lean_object* v___x_2874_; lean_object* v___x_2875_; 
v___x_2874_ = l_Lean_Environment_constants(v_env_2868_);
v___x_2875_ = l_Lean_ConstMap_find_x3f_x27(v___x_2874_, v_n_2861_);
lean_dec_ref(v___x_2874_);
if (lean_obj_tag(v___x_2875_) == 0)
{
lean_object* v___x_2876_; 
lean_dec_ref(v___f_2867_);
v___x_2876_ = lean_box(0);
v___y_2870_ = v___x_2876_;
goto v___jp_2869_;
}
else
{
lean_object* v_val_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v_val_2877_ = lean_ctor_get(v___x_2875_, 0);
lean_inc(v_val_2877_);
lean_dec_ref_known(v___x_2875_, 1);
v___x_2878_ = l_Lean_ConstantInfo_levelParams(v_val_2877_);
lean_dec(v_val_2877_);
v___x_2879_ = lean_box(0);
v___x_2880_ = l_List_mapTR_loop___redArg(v___f_2867_, v___x_2878_, v___x_2879_);
v___y_2870_ = v___x_2880_;
goto v___jp_2869_;
}
v___jp_2869_:
{
lean_object* v___f_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; 
lean_inc(v_n_2861_);
v___f_2871_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2871_, 0, v_n_2861_);
lean_closure_set(v___f_2871_, 1, v___y_2870_);
lean_closure_set(v___f_2871_, 2, v_toPure_2862_);
lean_closure_set(v___f_2871_, 3, v_firsts_2863_);
v___x_2872_ = l_Lean_Parser_Tactic_Doc_customTacticName___redArg(v_inst_2864_, v_inst_2865_, v_n_2861_);
v___x_2873_ = lean_apply_4(v_toBind_2866_, lean_box(0), lean_box(0), v___x_2872_, v___f_2871_);
return v___x_2873_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg(lean_object* v_inst_2882_, lean_object* v_inst_2883_, lean_object* v_firsts_2884_, lean_object* v_n_2885_){
_start:
{
lean_object* v_toApplicative_2886_; lean_object* v_toBind_2887_; lean_object* v_getEnv_2888_; lean_object* v_toPure_2889_; lean_object* v___f_2890_; lean_object* v___f_2891_; lean_object* v___x_2892_; 
v_toApplicative_2886_ = lean_ctor_get(v_inst_2882_, 0);
v_toBind_2887_ = lean_ctor_get(v_inst_2882_, 1);
lean_inc_n(v_toBind_2887_, 2);
v_getEnv_2888_ = lean_ctor_get(v_inst_2883_, 0);
lean_inc(v_getEnv_2888_);
v_toPure_2889_ = lean_ctor_get(v_toApplicative_2886_, 1);
lean_inc(v_toPure_2889_);
v___f_2890_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___closed__0));
v___f_2891_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__1), 8, 7);
lean_closure_set(v___f_2891_, 0, v_n_2885_);
lean_closure_set(v___f_2891_, 1, v_toPure_2889_);
lean_closure_set(v___f_2891_, 2, v_firsts_2884_);
lean_closure_set(v___f_2891_, 3, v_inst_2882_);
lean_closure_set(v___f_2891_, 4, v_inst_2883_);
lean_closure_set(v___f_2891_, 5, v_toBind_2887_);
lean_closure_set(v___f_2891_, 6, v___f_2890_);
v___x_2892_ = lean_apply_4(v_toBind_2887_, lean_box(0), lean_box(0), v_getEnv_2888_, v___f_2891_);
return v___x_2892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName(lean_object* v_m_2893_, lean_object* v_inst_2894_, lean_object* v_inst_2895_, lean_object* v_firsts_2896_, lean_object* v_n_2897_){
_start:
{
lean_object* v___x_2898_; 
v___x_2898_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg(v_inst_2894_, v_inst_2895_, v_firsts_2896_, v_n_2897_);
return v___x_2898_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg(){
_start:
{
lean_object* v___x_2902_; 
v___x_2902_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg___closed__0));
return v___x_2902_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg___boxed(lean_object* v___dummy_2903_){
_start:
{
lean_object* v_res_2904_; 
v_res_2904_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg();
return v_res_2904_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0(void){
_start:
{
lean_object* v___x_2905_; 
v___x_2905_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___redArg();
return v___x_2905_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4(lean_object* v_s_2906_){
_start:
{
lean_object* v___x_2907_; 
v___x_2907_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0);
return v___x_2907_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___boxed(lean_object* v_s_2908_){
_start:
{
lean_object* v_res_2909_; 
v_res_2909_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4(v_s_2908_);
lean_dec_ref(v_s_2908_);
return v_res_2909_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8_spec__14(lean_object* v_init_2910_, lean_object* v_x_2911_){
_start:
{
if (lean_obj_tag(v_x_2911_) == 0)
{
lean_object* v_k_2912_; lean_object* v_l_2913_; lean_object* v_r_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; 
v_k_2912_ = lean_ctor_get(v_x_2911_, 1);
lean_inc(v_k_2912_);
v_l_2913_ = lean_ctor_get(v_x_2911_, 3);
lean_inc(v_l_2913_);
v_r_2914_ = lean_ctor_get(v_x_2911_, 4);
lean_inc(v_r_2914_);
lean_dec_ref_known(v_x_2911_, 5);
v___x_2915_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8_spec__14(v_init_2910_, v_l_2913_);
v___x_2916_ = lean_array_push(v___x_2915_, v_k_2912_);
v_init_2910_ = v___x_2916_;
v_x_2911_ = v_r_2914_;
goto _start;
}
else
{
return v_init_2910_;
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(uint8_t v___x_2918_, lean_object* v_x1_2919_, lean_object* v_x2_2920_){
_start:
{
lean_object* v___x_2921_; lean_object* v___x_2922_; uint8_t v___x_2923_; 
v___x_2921_ = l_Lean_Name_toString(v_x1_2919_, v___x_2918_);
v___x_2922_ = l_Lean_Name_toString(v_x2_2920_, v___x_2918_);
v___x_2923_ = lean_string_dec_lt(v___x_2921_, v___x_2922_);
lean_dec_ref(v___x_2922_);
lean_dec_ref(v___x_2921_);
return v___x_2923_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0___boxed(lean_object* v___x_2924_, lean_object* v_x1_2925_, lean_object* v_x2_2926_){
_start:
{
uint8_t v___x_16976__boxed_2927_; uint8_t v_res_2928_; lean_object* v_r_2929_; 
v___x_16976__boxed_2927_ = lean_unbox(v___x_2924_);
v_res_2928_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(v___x_16976__boxed_2927_, v_x1_2925_, v_x2_2926_);
v_r_2929_ = lean_box(v_res_2928_);
return v_r_2929_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___redArg(lean_object* v_hi_2930_, lean_object* v_pivot_2931_, lean_object* v_as_2932_, lean_object* v_i_2933_, lean_object* v_k_2934_){
_start:
{
uint8_t v___x_2935_; 
v___x_2935_ = lean_nat_dec_lt(v_k_2934_, v_hi_2930_);
if (v___x_2935_ == 0)
{
lean_object* v___x_2936_; lean_object* v___x_2937_; 
lean_dec(v_k_2934_);
lean_dec(v_pivot_2931_);
v___x_2936_ = lean_array_fswap(v_as_2932_, v_i_2933_, v_hi_2930_);
v___x_2937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2937_, 0, v_i_2933_);
lean_ctor_set(v___x_2937_, 1, v___x_2936_);
return v___x_2937_;
}
else
{
lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; uint8_t v___x_2941_; 
v___x_2938_ = lean_array_fget_borrowed(v_as_2932_, v_k_2934_);
lean_inc(v___x_2938_);
v___x_2939_ = l_Lean_Name_toString(v___x_2938_, v___x_2935_);
lean_inc(v_pivot_2931_);
v___x_2940_ = l_Lean_Name_toString(v_pivot_2931_, v___x_2935_);
v___x_2941_ = lean_string_dec_lt(v___x_2939_, v___x_2940_);
lean_dec_ref(v___x_2940_);
lean_dec_ref(v___x_2939_);
if (v___x_2941_ == 0)
{
lean_object* v___x_2942_; lean_object* v___x_2943_; 
v___x_2942_ = lean_unsigned_to_nat(1u);
v___x_2943_ = lean_nat_add(v_k_2934_, v___x_2942_);
lean_dec(v_k_2934_);
v_k_2934_ = v___x_2943_;
goto _start;
}
else
{
lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; 
v___x_2945_ = lean_array_fswap(v_as_2932_, v_i_2933_, v_k_2934_);
v___x_2946_ = lean_unsigned_to_nat(1u);
v___x_2947_ = lean_nat_add(v_i_2933_, v___x_2946_);
lean_dec(v_i_2933_);
v___x_2948_ = lean_nat_add(v_k_2934_, v___x_2946_);
lean_dec(v_k_2934_);
v_as_2932_ = v___x_2945_;
v_i_2933_ = v___x_2947_;
v_k_2934_ = v___x_2948_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___redArg___boxed(lean_object* v_hi_2950_, lean_object* v_pivot_2951_, lean_object* v_as_2952_, lean_object* v_i_2953_, lean_object* v_k_2954_){
_start:
{
lean_object* v_res_2955_; 
v_res_2955_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___redArg(v_hi_2950_, v_pivot_2951_, v_as_2952_, v_i_2953_, v_k_2954_);
lean_dec(v_hi_2950_);
return v_res_2955_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(lean_object* v_n_2956_, lean_object* v_as_2957_, lean_object* v_lo_2958_, lean_object* v_hi_2959_){
_start:
{
lean_object* v___y_2961_; uint8_t v___x_2971_; 
v___x_2971_ = lean_nat_dec_lt(v_lo_2958_, v_hi_2959_);
if (v___x_2971_ == 0)
{
lean_dec(v_lo_2958_);
return v_as_2957_;
}
else
{
lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v_mid_2974_; lean_object* v___y_2976_; lean_object* v___y_2982_; lean_object* v___x_2987_; lean_object* v___x_2988_; uint8_t v___x_2989_; 
v___x_2972_ = lean_nat_add(v_lo_2958_, v_hi_2959_);
v___x_2973_ = lean_unsigned_to_nat(1u);
v_mid_2974_ = lean_nat_shiftr(v___x_2972_, v___x_2973_);
lean_dec(v___x_2972_);
v___x_2987_ = lean_array_fget_borrowed(v_as_2957_, v_mid_2974_);
v___x_2988_ = lean_array_fget_borrowed(v_as_2957_, v_lo_2958_);
lean_inc(v___x_2988_);
lean_inc(v___x_2987_);
v___x_2989_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(v___x_2971_, v___x_2987_, v___x_2988_);
if (v___x_2989_ == 0)
{
v___y_2982_ = v_as_2957_;
goto v___jp_2981_;
}
else
{
lean_object* v___x_2990_; 
v___x_2990_ = lean_array_fswap(v_as_2957_, v_lo_2958_, v_mid_2974_);
v___y_2982_ = v___x_2990_;
goto v___jp_2981_;
}
v___jp_2975_:
{
lean_object* v___x_2977_; lean_object* v___x_2978_; uint8_t v___x_2979_; 
v___x_2977_ = lean_array_fget_borrowed(v___y_2976_, v_mid_2974_);
v___x_2978_ = lean_array_fget_borrowed(v___y_2976_, v_hi_2959_);
lean_inc(v___x_2978_);
lean_inc(v___x_2977_);
v___x_2979_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(v___x_2971_, v___x_2977_, v___x_2978_);
if (v___x_2979_ == 0)
{
lean_dec(v_mid_2974_);
v___y_2961_ = v___y_2976_;
goto v___jp_2960_;
}
else
{
lean_object* v___x_2980_; 
v___x_2980_ = lean_array_fswap(v___y_2976_, v_mid_2974_, v_hi_2959_);
lean_dec(v_mid_2974_);
v___y_2961_ = v___x_2980_;
goto v___jp_2960_;
}
}
v___jp_2981_:
{
lean_object* v___x_2983_; lean_object* v___x_2984_; uint8_t v___x_2985_; 
v___x_2983_ = lean_array_fget_borrowed(v___y_2982_, v_hi_2959_);
v___x_2984_ = lean_array_fget_borrowed(v___y_2982_, v_lo_2958_);
lean_inc(v___x_2984_);
lean_inc(v___x_2983_);
v___x_2985_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(v___x_2971_, v___x_2983_, v___x_2984_);
if (v___x_2985_ == 0)
{
v___y_2976_ = v___y_2982_;
goto v___jp_2975_;
}
else
{
lean_object* v___x_2986_; 
v___x_2986_ = lean_array_fswap(v___y_2982_, v_lo_2958_, v_hi_2959_);
v___y_2976_ = v___x_2986_;
goto v___jp_2975_;
}
}
}
v___jp_2960_:
{
lean_object* v_pivot_2962_; lean_object* v___x_2963_; lean_object* v_fst_2964_; lean_object* v_snd_2965_; uint8_t v___x_2966_; 
v_pivot_2962_ = lean_array_fget(v___y_2961_, v_hi_2959_);
lean_inc_n(v_lo_2958_, 2);
v___x_2963_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___redArg(v_hi_2959_, v_pivot_2962_, v___y_2961_, v_lo_2958_, v_lo_2958_);
v_fst_2964_ = lean_ctor_get(v___x_2963_, 0);
lean_inc(v_fst_2964_);
v_snd_2965_ = lean_ctor_get(v___x_2963_, 1);
lean_inc(v_snd_2965_);
lean_dec_ref(v___x_2963_);
v___x_2966_ = lean_nat_dec_le(v_hi_2959_, v_fst_2964_);
if (v___x_2966_ == 0)
{
lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; 
v___x_2967_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(v_n_2956_, v_snd_2965_, v_lo_2958_, v_fst_2964_);
v___x_2968_ = lean_unsigned_to_nat(1u);
v___x_2969_ = lean_nat_add(v_fst_2964_, v___x_2968_);
lean_dec(v_fst_2964_);
v_as_2957_ = v___x_2967_;
v_lo_2958_ = v___x_2969_;
goto _start;
}
else
{
lean_dec(v_fst_2964_);
lean_dec(v_lo_2958_);
return v_snd_2965_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___boxed(lean_object* v_n_2991_, lean_object* v_as_2992_, lean_object* v_lo_2993_, lean_object* v_hi_2994_){
_start:
{
lean_object* v_res_2995_; 
v_res_2995_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(v_n_2991_, v_as_2992_, v_lo_2993_, v_hi_2994_);
lean_dec(v_hi_2994_);
lean_dec(v_n_2991_);
return v_res_2995_;
}
}
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0(lean_object* v_x1_2996_, lean_object* v_x2_2997_){
_start:
{
lean_object* v_fst_2998_; lean_object* v_fst_2999_; uint8_t v___x_3000_; 
v_fst_2998_ = lean_ctor_get(v_x1_2996_, 0);
v_fst_2999_ = lean_ctor_get(v_x2_2997_, 0);
v___x_3000_ = l_Lean_Name_quickLt(v_fst_2998_, v_fst_2999_);
return v___x_3000_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0___boxed(lean_object* v_x1_3001_, lean_object* v_x2_3002_){
_start:
{
uint8_t v_res_3003_; lean_object* v_r_3004_; 
v_res_3003_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0(v_x1_3001_, v_x2_3002_);
lean_dec_ref(v_x2_3002_);
lean_dec_ref(v_x1_3001_);
v_r_3004_ = lean_box(v_res_3003_);
return v_r_3004_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg(lean_object* v_as_3005_, lean_object* v_k_3006_, lean_object* v_x_3007_, lean_object* v_x_3008_){
_start:
{
lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v_m_3011_; lean_object* v_a_3012_; uint8_t v___x_3013_; 
v___x_3009_ = lean_nat_add(v_x_3007_, v_x_3008_);
v___x_3010_ = lean_unsigned_to_nat(1u);
v_m_3011_ = lean_nat_shiftr(v___x_3009_, v___x_3010_);
lean_dec(v___x_3009_);
v_a_3012_ = lean_array_fget_borrowed(v_as_3005_, v_m_3011_);
v___x_3013_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0(v_a_3012_, v_k_3006_);
if (v___x_3013_ == 0)
{
uint8_t v___x_3014_; 
lean_dec(v_x_3008_);
v___x_3014_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0(v_k_3006_, v_a_3012_);
if (v___x_3014_ == 0)
{
lean_object* v___x_3015_; 
lean_dec(v_m_3011_);
lean_dec(v_x_3007_);
lean_inc(v_a_3012_);
v___x_3015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3015_, 0, v_a_3012_);
return v___x_3015_;
}
else
{
lean_object* v___x_3016_; uint8_t v___x_3017_; 
v___x_3016_ = lean_unsigned_to_nat(0u);
v___x_3017_ = lean_nat_dec_eq(v_m_3011_, v___x_3016_);
if (v___x_3017_ == 0)
{
lean_object* v___x_3018_; uint8_t v___x_3019_; 
v___x_3018_ = lean_nat_sub(v_m_3011_, v___x_3010_);
lean_dec(v_m_3011_);
v___x_3019_ = lean_nat_dec_lt(v___x_3018_, v_x_3007_);
if (v___x_3019_ == 0)
{
v_x_3008_ = v___x_3018_;
goto _start;
}
else
{
lean_object* v___x_3021_; 
lean_dec(v___x_3018_);
lean_dec(v_x_3007_);
v___x_3021_ = lean_box(0);
return v___x_3021_;
}
}
else
{
lean_object* v___x_3022_; 
lean_dec(v_m_3011_);
lean_dec(v_x_3007_);
v___x_3022_ = lean_box(0);
return v___x_3022_;
}
}
}
else
{
lean_object* v___x_3023_; uint8_t v___x_3024_; 
lean_dec(v_x_3007_);
v___x_3023_ = lean_nat_add(v_m_3011_, v___x_3010_);
lean_dec(v_m_3011_);
v___x_3024_ = lean_nat_dec_le(v___x_3023_, v_x_3008_);
if (v___x_3024_ == 0)
{
lean_object* v___x_3025_; 
lean_dec(v___x_3023_);
lean_dec(v_x_3008_);
v___x_3025_ = lean_box(0);
return v___x_3025_;
}
else
{
v_x_3007_ = v___x_3023_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___boxed(lean_object* v_as_3027_, lean_object* v_k_3028_, lean_object* v_x_3029_, lean_object* v_x_3030_){
_start:
{
lean_object* v_res_3031_; 
v_res_3031_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg(v_as_3027_, v_k_3028_, v_x_3029_, v_x_3030_);
lean_dec_ref(v_k_3028_);
lean_dec_ref(v_as_3027_);
return v_res_3031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg(lean_object* v_tac_3032_, lean_object* v___y_3033_){
_start:
{
lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v_env_3040_; lean_object* v___x_3041_; 
v___x_3035_ = lean_box(1);
v___x_3036_ = lean_st_ref_get(v___y_3033_);
v_env_3040_ = lean_ctor_get(v___x_3036_, 0);
lean_inc_ref(v_env_3040_);
lean_dec(v___x_3036_);
v___x_3041_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3040_, v_tac_3032_);
if (lean_obj_tag(v___x_3041_) == 0)
{
lean_object* v___x_3042_; lean_object* v_toEnvExtension_3043_; lean_object* v_asyncMode_3044_; lean_object* v___x_3045_; uint8_t v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3042_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_3043_ = lean_ctor_get(v___x_3042_, 0);
v_asyncMode_3044_ = lean_ctor_get(v_toEnvExtension_3043_, 2);
v___x_3045_ = lean_box(0);
v___x_3046_ = 0;
v___x_3047_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3035_, v___x_3042_, v_env_3040_, v_asyncMode_3044_, v___x_3045_, v___x_3046_);
v___x_3048_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_3047_, v_tac_3032_);
lean_dec(v_tac_3032_);
lean_dec(v___x_3047_);
v___x_3049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3049_, 0, v___x_3048_);
return v___x_3049_;
}
else
{
lean_object* v_val_3050_; lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3078_; 
v_val_3050_ = lean_ctor_get(v___x_3041_, 0);
v_isSharedCheck_3078_ = !lean_is_exclusive(v___x_3041_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3052_ = v___x_3041_;
v_isShared_3053_ = v_isSharedCheck_3078_;
goto v_resetjp_3051_;
}
else
{
lean_inc(v_val_3050_);
lean_dec(v___x_3041_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3078_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
lean_object* v___x_3054_; uint8_t v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; uint8_t v___x_3059_; 
v___x_3054_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v___x_3055_ = 0;
v___x_3056_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_3035_, v___x_3054_, v_env_3040_, v_val_3050_, v___x_3055_);
lean_dec(v_val_3050_);
lean_dec_ref(v_env_3040_);
v___x_3057_ = lean_unsigned_to_nat(0u);
v___x_3058_ = lean_array_get_size(v___x_3056_);
v___x_3059_ = lean_nat_dec_lt(v___x_3057_, v___x_3058_);
if (v___x_3059_ == 0)
{
lean_dec_ref(v___x_3056_);
lean_del_object(v___x_3052_);
lean_dec(v_tac_3032_);
goto v___jp_3037_;
}
else
{
lean_object* v___x_3060_; lean_object* v___x_3061_; uint8_t v___x_3062_; 
v___x_3060_ = lean_unsigned_to_nat(1u);
v___x_3061_ = lean_nat_sub(v___x_3058_, v___x_3060_);
v___x_3062_ = lean_nat_dec_le(v___x_3057_, v___x_3061_);
if (v___x_3062_ == 0)
{
lean_dec(v___x_3061_);
lean_dec_ref(v___x_3056_);
lean_del_object(v___x_3052_);
lean_dec(v_tac_3032_);
goto v___jp_3037_;
}
else
{
lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; 
v___x_3063_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__7));
v___x_3064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3064_, 0, v_tac_3032_);
lean_ctor_set(v___x_3064_, 1, v___x_3063_);
v___x_3065_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg(v___x_3056_, v___x_3064_, v___x_3057_, v___x_3061_);
lean_dec_ref_known(v___x_3064_, 2);
lean_dec_ref(v___x_3056_);
if (lean_obj_tag(v___x_3065_) == 0)
{
lean_del_object(v___x_3052_);
goto v___jp_3037_;
}
else
{
lean_object* v_val_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3077_; 
v_val_3066_ = lean_ctor_get(v___x_3065_, 0);
v_isSharedCheck_3077_ = !lean_is_exclusive(v___x_3065_);
if (v_isSharedCheck_3077_ == 0)
{
v___x_3068_ = v___x_3065_;
v_isShared_3069_ = v_isSharedCheck_3077_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_val_3066_);
lean_dec(v___x_3065_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3077_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v_snd_3070_; lean_object* v___x_3072_; 
v_snd_3070_ = lean_ctor_get(v_val_3066_, 1);
lean_inc(v_snd_3070_);
lean_dec(v_val_3066_);
if (v_isShared_3069_ == 0)
{
lean_ctor_set(v___x_3068_, 0, v_snd_3070_);
v___x_3072_ = v___x_3068_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v_snd_3070_);
v___x_3072_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
lean_object* v___x_3074_; 
if (v_isShared_3053_ == 0)
{
lean_ctor_set_tag(v___x_3052_, 0);
lean_ctor_set(v___x_3052_, 0, v___x_3072_);
v___x_3074_ = v___x_3052_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v___x_3072_);
v___x_3074_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
return v___x_3074_;
}
}
}
}
}
}
}
}
v___jp_3037_:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; 
v___x_3038_ = lean_box(0);
v___x_3039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3039_, 0, v___x_3038_);
return v___x_3039_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___boxed(lean_object* v_tac_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_){
_start:
{
lean_object* v_res_3082_; 
v_res_3082_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg(v_tac_3079_, v___y_3080_);
lean_dec(v___y_3080_);
return v_res_3082_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11(lean_object* v_a_3083_, lean_object* v_a_3084_){
_start:
{
if (lean_obj_tag(v_a_3083_) == 0)
{
lean_object* v___x_3085_; 
v___x_3085_ = l_List_reverse___redArg(v_a_3084_);
return v___x_3085_;
}
else
{
lean_object* v_head_3086_; lean_object* v_tail_3087_; lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3096_; 
v_head_3086_ = lean_ctor_get(v_a_3083_, 0);
v_tail_3087_ = lean_ctor_get(v_a_3083_, 1);
v_isSharedCheck_3096_ = !lean_is_exclusive(v_a_3083_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3089_ = v_a_3083_;
v_isShared_3090_ = v_isSharedCheck_3096_;
goto v_resetjp_3088_;
}
else
{
lean_inc(v_tail_3087_);
lean_inc(v_head_3086_);
lean_dec(v_a_3083_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3096_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v___x_3091_; lean_object* v___x_3093_; 
v___x_3091_ = l_Lean_Level_param___override(v_head_3086_);
if (v_isShared_3090_ == 0)
{
lean_ctor_set(v___x_3089_, 1, v_a_3084_);
lean_ctor_set(v___x_3089_, 0, v___x_3091_);
v___x_3093_ = v___x_3089_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v___x_3091_);
lean_ctor_set(v_reuseFailAlloc_3095_, 1, v_a_3084_);
v___x_3093_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
v_a_3083_ = v_tail_3087_;
v_a_3084_ = v___x_3093_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(lean_object* v_t_3097_, lean_object* v_k_3098_){
_start:
{
if (lean_obj_tag(v_t_3097_) == 0)
{
lean_object* v_k_3099_; lean_object* v_v_3100_; lean_object* v_l_3101_; lean_object* v_r_3102_; uint8_t v___x_3103_; 
v_k_3099_ = lean_ctor_get(v_t_3097_, 1);
v_v_3100_ = lean_ctor_get(v_t_3097_, 2);
v_l_3101_ = lean_ctor_get(v_t_3097_, 3);
v_r_3102_ = lean_ctor_get(v_t_3097_, 4);
v___x_3103_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3098_, v_k_3099_);
switch(v___x_3103_)
{
case 0:
{
v_t_3097_ = v_l_3101_;
goto _start;
}
case 1:
{
lean_object* v___x_3105_; 
lean_inc(v_v_3100_);
v___x_3105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3105_, 0, v_v_3100_);
return v___x_3105_;
}
default: 
{
v_t_3097_ = v_r_3102_;
goto _start;
}
}
}
else
{
lean_object* v___x_3107_; 
v___x_3107_ = lean_box(0);
return v___x_3107_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg___boxed(lean_object* v_t_3108_, lean_object* v_k_3109_){
_start:
{
lean_object* v_res_3110_; 
v_res_3110_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(v_t_3108_, v_k_3109_);
lean_dec(v_k_3109_);
lean_dec(v_t_3108_);
return v_res_3110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6(lean_object* v_firsts_3111_, lean_object* v_n_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_){
_start:
{
lean_object* v___y_3117_; lean_object* v___y_3118_; lean_object* v___y_3131_; lean_object* v_val_3132_; lean_object* v___x_3134_; lean_object* v___y_3136_; lean_object* v_env_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; 
v___x_3134_ = lean_st_ref_get(v___y_3114_);
v_env_3151_ = lean_ctor_get(v___x_3134_, 0);
lean_inc_ref(v_env_3151_);
lean_dec(v___x_3134_);
v___x_3152_ = l_Lean_Environment_constants(v_env_3151_);
v___x_3153_ = l_Lean_ConstMap_find_x3f_x27(v___x_3152_, v_n_3112_);
lean_dec_ref(v___x_3152_);
if (lean_obj_tag(v___x_3153_) == 0)
{
lean_object* v___x_3154_; 
v___x_3154_ = lean_box(0);
v___y_3136_ = v___x_3154_;
goto v___jp_3135_;
}
else
{
lean_object* v_val_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; 
v_val_3155_ = lean_ctor_get(v___x_3153_, 0);
lean_inc(v_val_3155_);
lean_dec_ref_known(v___x_3153_, 1);
v___x_3156_ = l_Lean_ConstantInfo_levelParams(v_val_3155_);
lean_dec(v_val_3155_);
v___x_3157_ = lean_box(0);
v___x_3158_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11(v___x_3156_, v___x_3157_);
v___y_3136_ = v___x_3158_;
goto v___jp_3135_;
}
v___jp_3116_:
{
lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; uint8_t v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; 
v___x_3119_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9);
v___x_3120_ = l_Lean_Expr_const___override(v_n_3112_, v___y_3117_);
v___x_3121_ = lean_unsigned_to_nat(32u);
v___x_3122_ = lean_mk_empty_array_with_capacity(v___x_3121_);
lean_dec_ref(v___x_3122_);
v___x_3123_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1, &l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1);
v___x_3124_ = lean_box(0);
v___x_3125_ = 0;
v___x_3126_ = l_Lean_MessageData_withExprHover(v___y_3118_, v___x_3120_, v___x_3123_, v___x_3124_, v___x_3124_, v___x_3124_, v___x_3125_);
v___x_3127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3127_, 0, v___x_3119_);
lean_ctor_set(v___x_3127_, 1, v___x_3126_);
v___x_3128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3127_);
lean_ctor_set(v___x_3128_, 1, v___x_3119_);
v___x_3129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3128_);
return v___x_3129_;
}
v___jp_3130_:
{
lean_object* v___x_3133_; 
v___x_3133_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3133_, 0, v_val_3132_);
v___y_3117_ = v___y_3131_;
v___y_3118_ = v___x_3133_;
goto v___jp_3116_;
}
v___jp_3135_:
{
lean_object* v___x_3137_; lean_object* v_a_3138_; lean_object* v___x_3140_; uint8_t v_isShared_3141_; uint8_t v_isSharedCheck_3150_; 
lean_inc(v_n_3112_);
v___x_3137_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg(v_n_3112_, v___y_3114_);
v_a_3138_ = lean_ctor_get(v___x_3137_, 0);
v_isSharedCheck_3150_ = !lean_is_exclusive(v___x_3137_);
if (v_isSharedCheck_3150_ == 0)
{
v___x_3140_ = v___x_3137_;
v_isShared_3141_ = v_isSharedCheck_3150_;
goto v_resetjp_3139_;
}
else
{
lean_inc(v_a_3138_);
lean_dec(v___x_3137_);
v___x_3140_ = lean_box(0);
v_isShared_3141_ = v_isSharedCheck_3150_;
goto v_resetjp_3139_;
}
v_resetjp_3139_:
{
if (lean_obj_tag(v_a_3138_) == 0)
{
lean_object* v___x_3142_; 
v___x_3142_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(v_firsts_3111_, v_n_3112_);
if (lean_obj_tag(v___x_3142_) == 0)
{
uint8_t v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3146_; 
v___x_3143_ = 1;
lean_inc(v_n_3112_);
v___x_3144_ = l_Lean_Name_toString(v_n_3112_, v___x_3143_);
if (v_isShared_3141_ == 0)
{
lean_ctor_set_tag(v___x_3140_, 3);
lean_ctor_set(v___x_3140_, 0, v___x_3144_);
v___x_3146_ = v___x_3140_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v___x_3144_);
v___x_3146_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
v___y_3117_ = v___y_3136_;
v___y_3118_ = v___x_3146_;
goto v___jp_3116_;
}
}
else
{
lean_object* v_val_3148_; 
lean_del_object(v___x_3140_);
v_val_3148_ = lean_ctor_get(v___x_3142_, 0);
lean_inc(v_val_3148_);
lean_dec_ref_known(v___x_3142_, 1);
v___y_3131_ = v___y_3136_;
v_val_3132_ = v_val_3148_;
goto v___jp_3130_;
}
}
else
{
lean_object* v_val_3149_; 
lean_del_object(v___x_3140_);
v_val_3149_ = lean_ctor_get(v_a_3138_, 0);
lean_inc(v_val_3149_);
lean_dec_ref_known(v_a_3138_, 1);
v___y_3131_ = v___y_3136_;
v_val_3132_ = v_val_3149_;
goto v___jp_3130_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6___boxed(lean_object* v_firsts_3159_, lean_object* v_n_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_){
_start:
{
lean_object* v_res_3164_; 
v_res_3164_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6(v_firsts_3159_, v_n_3160_, v___y_3161_, v___y_3162_);
lean_dec(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec(v_firsts_3159_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7(lean_object* v_a_3165_, lean_object* v_x_3166_, lean_object* v_x_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_){
_start:
{
if (lean_obj_tag(v_x_3166_) == 0)
{
lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3171_ = l_List_reverse___redArg(v_x_3167_);
v___x_3172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3172_, 0, v___x_3171_);
return v___x_3172_;
}
else
{
lean_object* v_head_3173_; lean_object* v_tail_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3192_; 
v_head_3173_ = lean_ctor_get(v_x_3166_, 0);
v_tail_3174_ = lean_ctor_get(v_x_3166_, 1);
v_isSharedCheck_3192_ = !lean_is_exclusive(v_x_3166_);
if (v_isSharedCheck_3192_ == 0)
{
v___x_3176_ = v_x_3166_;
v_isShared_3177_ = v_isSharedCheck_3192_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_tail_3174_);
lean_inc(v_head_3173_);
lean_dec(v_x_3166_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3192_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v___x_3178_; 
v___x_3178_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6(v_a_3165_, v_head_3173_, v___y_3168_, v___y_3169_);
if (lean_obj_tag(v___x_3178_) == 0)
{
lean_object* v_a_3179_; lean_object* v___x_3181_; 
v_a_3179_ = lean_ctor_get(v___x_3178_, 0);
lean_inc(v_a_3179_);
lean_dec_ref_known(v___x_3178_, 1);
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 1, v_x_3167_);
lean_ctor_set(v___x_3176_, 0, v_a_3179_);
v___x_3181_ = v___x_3176_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v_a_3179_);
lean_ctor_set(v_reuseFailAlloc_3183_, 1, v_x_3167_);
v___x_3181_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
v_x_3166_ = v_tail_3174_;
v_x_3167_ = v___x_3181_;
goto _start;
}
}
else
{
lean_object* v_a_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3191_; 
lean_del_object(v___x_3176_);
lean_dec(v_tail_3174_);
lean_dec(v_x_3167_);
v_a_3184_ = lean_ctor_get(v___x_3178_, 0);
v_isSharedCheck_3191_ = !lean_is_exclusive(v___x_3178_);
if (v_isSharedCheck_3191_ == 0)
{
v___x_3186_ = v___x_3178_;
v_isShared_3187_ = v_isSharedCheck_3191_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_a_3184_);
lean_dec(v___x_3178_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3191_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v___x_3189_; 
if (v_isShared_3187_ == 0)
{
v___x_3189_ = v___x_3186_;
goto v_reusejp_3188_;
}
else
{
lean_object* v_reuseFailAlloc_3190_; 
v_reuseFailAlloc_3190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3190_, 0, v_a_3184_);
v___x_3189_ = v_reuseFailAlloc_3190_;
goto v_reusejp_3188_;
}
v_reusejp_3188_:
{
return v___x_3189_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7___boxed(lean_object* v_a_3193_, lean_object* v_x_3194_, lean_object* v_x_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_){
_start:
{
lean_object* v_res_3199_; 
v_res_3199_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7(v_a_3193_, v_x_3194_, v_x_3195_, v___y_3196_, v___y_3197_);
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
lean_dec(v_a_3193_);
return v_res_3199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg(lean_object* v_val_3200_, lean_object* v___x_3201_, lean_object* v___x_3202_, lean_object* v_a_3203_, lean_object* v_b_3204_){
_start:
{
lean_object* v_it_3206_; lean_object* v_startInclusive_3207_; lean_object* v_endExclusive_3208_; 
if (lean_obj_tag(v_a_3203_) == 0)
{
lean_object* v_currPos_3213_; lean_object* v_searcher_3214_; lean_object* v___x_3216_; uint8_t v_isShared_3217_; uint8_t v_isSharedCheck_3237_; 
v_currPos_3213_ = lean_ctor_get(v_a_3203_, 0);
v_searcher_3214_ = lean_ctor_get(v_a_3203_, 1);
v_isSharedCheck_3237_ = !lean_is_exclusive(v_a_3203_);
if (v_isSharedCheck_3237_ == 0)
{
v___x_3216_ = v_a_3203_;
v_isShared_3217_ = v_isSharedCheck_3237_;
goto v_resetjp_3215_;
}
else
{
lean_inc(v_searcher_3214_);
lean_inc(v_currPos_3213_);
lean_dec(v_a_3203_);
v___x_3216_ = lean_box(0);
v_isShared_3217_ = v_isSharedCheck_3237_;
goto v_resetjp_3215_;
}
v_resetjp_3215_:
{
uint8_t v_decide_3218_; 
v_decide_3218_ = lean_nat_dec_eq(v_searcher_3214_, v___x_3202_);
if (v_decide_3218_ == 0)
{
uint32_t v___x_3219_; uint32_t v___x_3220_; uint8_t v___x_3221_; 
v___x_3219_ = 10;
v___x_3220_ = lean_string_utf8_get_fast(v_val_3200_, v_searcher_3214_);
v___x_3221_ = lean_uint32_dec_eq(v___x_3220_, v___x_3219_);
if (v___x_3221_ == 0)
{
lean_object* v___x_3222_; lean_object* v___x_3224_; 
v___x_3222_ = lean_string_utf8_next_fast(v_val_3200_, v_searcher_3214_);
lean_dec(v_searcher_3214_);
if (v_isShared_3217_ == 0)
{
lean_ctor_set(v___x_3216_, 1, v___x_3222_);
v___x_3224_ = v___x_3216_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v_currPos_3213_);
lean_ctor_set(v_reuseFailAlloc_3226_, 1, v___x_3222_);
v___x_3224_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
v_a_3203_ = v___x_3224_;
goto _start;
}
}
else
{
lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v_slice_3230_; lean_object* v_nextIt_3232_; 
v___x_3227_ = lean_string_utf8_next_fast(v_val_3200_, v_searcher_3214_);
v___x_3228_ = lean_nat_sub(v___x_3227_, v_searcher_3214_);
v___x_3229_ = lean_nat_add(v_searcher_3214_, v___x_3228_);
lean_dec(v___x_3228_);
v_slice_3230_ = l_String_Slice_subslice_x21(v___x_3201_, v_currPos_3213_, v_searcher_3214_);
lean_inc(v___x_3229_);
if (v_isShared_3217_ == 0)
{
lean_ctor_set(v___x_3216_, 1, v___x_3229_);
lean_ctor_set(v___x_3216_, 0, v___x_3229_);
v_nextIt_3232_ = v___x_3216_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3235_; 
v_reuseFailAlloc_3235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3235_, 0, v___x_3229_);
lean_ctor_set(v_reuseFailAlloc_3235_, 1, v___x_3229_);
v_nextIt_3232_ = v_reuseFailAlloc_3235_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
lean_object* v_startInclusive_3233_; lean_object* v_endExclusive_3234_; 
v_startInclusive_3233_ = lean_ctor_get(v_slice_3230_, 0);
lean_inc(v_startInclusive_3233_);
v_endExclusive_3234_ = lean_ctor_get(v_slice_3230_, 1);
lean_inc(v_endExclusive_3234_);
lean_dec_ref(v_slice_3230_);
v_it_3206_ = v_nextIt_3232_;
v_startInclusive_3207_ = v_startInclusive_3233_;
v_endExclusive_3208_ = v_endExclusive_3234_;
goto v___jp_3205_;
}
}
}
else
{
lean_object* v___x_3236_; 
lean_del_object(v___x_3216_);
lean_dec(v_searcher_3214_);
v___x_3236_ = lean_box(1);
lean_inc(v___x_3202_);
v_it_3206_ = v___x_3236_;
v_startInclusive_3207_ = v_currPos_3213_;
v_endExclusive_3208_ = v___x_3202_;
goto v___jp_3205_;
}
}
}
else
{
lean_dec(v___x_3202_);
return v_b_3204_;
}
v___jp_3205_:
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
v___x_3209_ = lean_string_utf8_extract_fast(v_val_3200_, v_startInclusive_3207_, v_endExclusive_3208_);
lean_dec(v_endExclusive_3208_);
lean_dec(v_startInclusive_3207_);
v___x_3210_ = l_Lean_stringToMessageData(v___x_3209_);
v___x_3211_ = lean_array_push(v_b_3204_, v___x_3210_);
v_a_3203_ = v_it_3206_;
v_b_3204_ = v___x_3211_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg___boxed(lean_object* v_val_3238_, lean_object* v___x_3239_, lean_object* v___x_3240_, lean_object* v_a_3241_, lean_object* v_b_3242_){
_start:
{
lean_object* v_res_3243_; 
v_res_3243_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg(v_val_3238_, v___x_3239_, v___x_3240_, v_a_3241_, v_b_3242_);
lean_dec_ref(v___x_3239_);
lean_dec_ref(v_val_3238_);
return v_res_3243_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___lam__0(lean_object* v_00___3244_, lean_object* v___y_3245_, lean_object* v___y_3246_){
_start:
{
lean_object* v___x_3248_; lean_object* v___x_3249_; 
v___x_3248_ = l_Lean_MessageData_nil;
v___x_3249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3249_, 0, v___x_3248_);
return v___x_3249_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___lam__0___boxed(lean_object* v_00___3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_){
_start:
{
lean_object* v_res_3254_; 
v_res_3254_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___lam__0(v_00___3250_, v___y_3251_, v___y_3252_);
lean_dec(v___y_3252_);
lean_dec_ref(v___y_3251_);
return v_res_3254_;
}
}
static lean_object* _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2(void){
_start:
{
lean_object* v___x_3258_; lean_object* v___x_3259_; 
v___x_3258_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__1));
v___x_3259_ = l_Lean_stringToMessageData(v___x_3258_);
return v___x_3259_;
}
}
static lean_object* _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4(void){
_start:
{
lean_object* v___x_3261_; lean_object* v___x_3262_; 
v___x_3261_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__3));
v___x_3262_ = l_Lean_stringToMessageData(v___x_3261_);
return v___x_3262_;
}
}
static lean_object* _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6(void){
_start:
{
lean_object* v___x_3264_; lean_object* v___x_3265_; 
v___x_3264_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__5));
v___x_3265_ = l_Lean_stringToMessageData(v___x_3264_);
return v___x_3265_;
}
}
static lean_object* _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9(void){
_start:
{
lean_object* v___x_3269_; lean_object* v___x_3270_; 
v___x_3269_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__8));
v___x_3270_ = l_Lean_MessageData_ofFormat(v___x_3269_);
return v___x_3270_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11(lean_object* v_a_3271_, lean_object* v_a_3272_, lean_object* v_x_3273_, lean_object* v_x_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_){
_start:
{
if (lean_obj_tag(v_x_3273_) == 0)
{
lean_object* v___x_3278_; lean_object* v___x_3279_; 
v___x_3278_ = l_List_reverse___redArg(v_x_3274_);
v___x_3279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3278_);
return v___x_3279_;
}
else
{
lean_object* v_head_3280_; lean_object* v_tail_3281_; lean_object* v___x_3283_; uint8_t v_isShared_3284_; uint8_t v_isSharedCheck_3383_; 
v_head_3280_ = lean_ctor_get(v_x_3273_, 0);
v_tail_3281_ = lean_ctor_get(v_x_3273_, 1);
v_isSharedCheck_3383_ = !lean_is_exclusive(v_x_3273_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3283_ = v_x_3273_;
v_isShared_3284_ = v_isSharedCheck_3383_;
goto v_resetjp_3282_;
}
else
{
lean_inc(v_tail_3281_);
lean_inc(v_head_3280_);
lean_dec(v_x_3273_);
v___x_3283_ = lean_box(0);
v_isShared_3284_ = v_isSharedCheck_3383_;
goto v_resetjp_3282_;
}
v_resetjp_3282_:
{
lean_object* v___y_3286_; lean_object* v___y_3287_; lean_object* v___y_3288_; lean_object* v___y_3289_; lean_object* v_snd_3298_; lean_object* v_fst_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3382_; 
v_snd_3298_ = lean_ctor_get(v_head_3280_, 1);
v_fst_3299_ = lean_ctor_get(v_head_3280_, 0);
v_isSharedCheck_3382_ = !lean_is_exclusive(v_head_3280_);
if (v_isSharedCheck_3382_ == 0)
{
v___x_3301_ = v_head_3280_;
v_isShared_3302_ = v_isSharedCheck_3382_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_snd_3298_);
lean_inc(v_fst_3299_);
lean_dec(v_head_3280_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3382_;
goto v_resetjp_3300_;
}
v___jp_3285_:
{
lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3295_; 
v___x_3290_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3290_, 0, v___y_3288_);
lean_ctor_set(v___x_3290_, 1, v___y_3289_);
v___x_3291_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3291_, 0, v___x_3290_);
lean_ctor_set(v___x_3291_, 1, v___y_3287_);
v___x_3292_ = l_Lean_MessageData_nestD(v___x_3291_);
lean_inc_ref(v___y_3286_);
v___x_3293_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3293_, 0, v___y_3286_);
lean_ctor_set(v___x_3293_, 1, v___x_3292_);
if (v_isShared_3284_ == 0)
{
lean_ctor_set(v___x_3283_, 1, v_x_3274_);
lean_ctor_set(v___x_3283_, 0, v___x_3293_);
v___x_3295_ = v___x_3283_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v___x_3293_);
lean_ctor_set(v_reuseFailAlloc_3297_, 1, v_x_3274_);
v___x_3295_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
v_x_3273_ = v_tail_3281_;
v_x_3274_ = v___x_3295_;
goto _start;
}
}
v_resetjp_3300_:
{
lean_object* v_fst_3303_; lean_object* v_snd_3304_; lean_object* v___x_3306_; uint8_t v_isShared_3307_; uint8_t v_isSharedCheck_3381_; 
v_fst_3303_ = lean_ctor_get(v_snd_3298_, 0);
v_snd_3304_ = lean_ctor_get(v_snd_3298_, 1);
v_isSharedCheck_3381_ = !lean_is_exclusive(v_snd_3298_);
if (v_isSharedCheck_3381_ == 0)
{
v___x_3306_ = v_snd_3298_;
v_isShared_3307_ = v_isSharedCheck_3381_;
goto v_resetjp_3305_;
}
else
{
lean_inc(v_snd_3304_);
lean_inc(v_fst_3303_);
lean_dec(v_snd_3298_);
v___x_3306_ = lean_box(0);
v_isShared_3307_ = v_isSharedCheck_3381_;
goto v_resetjp_3305_;
}
v_resetjp_3305_:
{
lean_object* v___y_3309_; lean_object* v___y_3310_; lean_object* v___y_3311_; lean_object* v___y_3312_; lean_object* v_a_3331_; lean_object* v___y_3347_; lean_object* v___y_3350_; lean_object* v___x_3359_; 
v___x_3359_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_3272_, v_fst_3299_);
if (lean_obj_tag(v___x_3359_) == 0)
{
lean_object* v___x_3360_; lean_object* v___x_3361_; 
v___x_3360_ = lean_box(0);
v___x_3361_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___lam__0(v___x_3360_, v___y_3275_, v___y_3276_);
v___y_3347_ = v___x_3361_;
goto v___jp_3346_;
}
else
{
lean_object* v_val_3362_; 
v_val_3362_ = lean_ctor_get(v___x_3359_, 0);
lean_inc(v_val_3362_);
lean_dec_ref_known(v___x_3359_, 1);
if (lean_obj_tag(v_val_3362_) == 0)
{
lean_object* v_size_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___y_3368_; lean_object* v___y_3369_; lean_object* v___x_3371_; uint8_t v___x_3372_; 
v_size_3363_ = lean_ctor_get(v_val_3362_, 0);
v___x_3364_ = lean_mk_empty_array_with_capacity(v_size_3363_);
v___x_3365_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8_spec__14(v___x_3364_, v_val_3362_);
v___x_3366_ = lean_array_get_size(v___x_3365_);
v___x_3371_ = lean_unsigned_to_nat(0u);
v___x_3372_ = lean_nat_dec_eq(v___x_3366_, v___x_3371_);
if (v___x_3372_ == 0)
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___y_3376_; uint8_t v___x_3378_; 
v___x_3373_ = lean_unsigned_to_nat(1u);
v___x_3374_ = lean_nat_sub(v___x_3366_, v___x_3373_);
v___x_3378_ = lean_nat_dec_le(v___x_3371_, v___x_3374_);
if (v___x_3378_ == 0)
{
lean_inc(v___x_3374_);
v___y_3376_ = v___x_3374_;
goto v___jp_3375_;
}
else
{
v___y_3376_ = v___x_3371_;
goto v___jp_3375_;
}
v___jp_3375_:
{
uint8_t v___x_3377_; 
v___x_3377_ = lean_nat_dec_le(v___y_3376_, v___x_3374_);
if (v___x_3377_ == 0)
{
lean_dec(v___x_3374_);
lean_inc(v___y_3376_);
v___y_3368_ = v___y_3376_;
v___y_3369_ = v___y_3376_;
goto v___jp_3367_;
}
else
{
v___y_3368_ = v___y_3376_;
v___y_3369_ = v___x_3374_;
goto v___jp_3367_;
}
}
}
else
{
v___y_3350_ = v___x_3365_;
goto v___jp_3349_;
}
v___jp_3367_:
{
lean_object* v___x_3370_; 
v___x_3370_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(v___x_3366_, v___x_3365_, v___y_3368_, v___y_3369_);
lean_dec(v___y_3369_);
v___y_3350_ = v___x_3370_;
goto v___jp_3349_;
}
}
else
{
lean_object* v___x_3379_; lean_object* v___x_3380_; 
v___x_3379_ = lean_box(0);
v___x_3380_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___lam__0(v___x_3379_, v___y_3275_, v___y_3276_);
v___y_3347_ = v___x_3380_;
goto v___jp_3346_;
}
}
v___jp_3308_:
{
lean_object* v___x_3314_; 
if (v_isShared_3307_ == 0)
{
lean_ctor_set_tag(v___x_3306_, 7);
lean_ctor_set(v___x_3306_, 1, v___y_3312_);
lean_ctor_set(v___x_3306_, 0, v___y_3311_);
v___x_3314_ = v___x_3306_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3329_; 
v_reuseFailAlloc_3329_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3329_, 0, v___y_3311_);
lean_ctor_set(v_reuseFailAlloc_3329_, 1, v___y_3312_);
v___x_3314_ = v_reuseFailAlloc_3329_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
if (lean_obj_tag(v_snd_3304_) == 0)
{
lean_object* v___x_3315_; 
lean_del_object(v___x_3301_);
v___x_3315_ = l_Lean_MessageData_nil;
v___y_3286_ = v___y_3309_;
v___y_3287_ = v___y_3310_;
v___y_3288_ = v___x_3314_;
v___y_3289_ = v___x_3315_;
goto v___jp_3285_;
}
else
{
lean_object* v_val_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3327_; 
v_val_3316_ = lean_ctor_get(v_snd_3304_, 0);
lean_inc_n(v_val_3316_, 2);
lean_dec_ref_known(v_snd_3304_, 1);
v___x_3317_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0);
v___x_3318_ = lean_unsigned_to_nat(0u);
v___x_3319_ = lean_string_utf8_byte_size(v_val_3316_);
v___x_3320_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3320_, 0, v_val_3316_);
lean_ctor_set(v___x_3320_, 1, v___x_3318_);
lean_ctor_set(v___x_3320_, 2, v___x_3319_);
v___x_3321_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0);
v___x_3322_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__0));
v___x_3323_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg(v_val_3316_, v___x_3320_, v___x_3319_, v___x_3321_, v___x_3322_);
lean_dec_ref_known(v___x_3320_, 3);
lean_dec(v_val_3316_);
v___x_3324_ = lean_array_to_list(v___x_3323_);
v___x_3325_ = l_Lean_MessageData_joinSep(v___x_3324_, v___x_3317_);
if (v_isShared_3302_ == 0)
{
lean_ctor_set_tag(v___x_3301_, 7);
lean_ctor_set(v___x_3301_, 1, v___x_3325_);
lean_ctor_set(v___x_3301_, 0, v___x_3317_);
v___x_3327_ = v___x_3301_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v___x_3317_);
lean_ctor_set(v_reuseFailAlloc_3328_, 1, v___x_3325_);
v___x_3327_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
v___y_3286_ = v___y_3309_;
v___y_3287_ = v___y_3310_;
v___y_3288_ = v___x_3314_;
v___y_3289_ = v___x_3327_;
goto v___jp_3285_;
}
}
}
}
v___jp_3330_:
{
lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; uint8_t v___x_3337_; lean_object* v___x_3338_; uint8_t v___x_3339_; 
v___x_3332_ = lean_obj_once(&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2, &l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2_once, _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2);
v___x_3333_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9);
lean_inc(v_fst_3299_);
v___x_3334_ = l_Lean_MessageData_ofName(v_fst_3299_);
v___x_3335_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3335_, 0, v___x_3333_);
lean_ctor_set(v___x_3335_, 1, v___x_3334_);
v___x_3336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3335_);
lean_ctor_set(v___x_3336_, 1, v___x_3333_);
v___x_3337_ = 1;
v___x_3338_ = l_Lean_Name_toString(v_fst_3299_, v___x_3337_);
v___x_3339_ = lean_string_dec_eq(v___x_3338_, v_fst_3303_);
lean_dec_ref(v___x_3338_);
if (v___x_3339_ == 0)
{
lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3340_ = lean_obj_once(&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4, &l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4_once, _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4);
v___x_3341_ = l_Lean_stringToMessageData(v_fst_3303_);
v___x_3342_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3340_);
lean_ctor_set(v___x_3342_, 1, v___x_3341_);
v___x_3343_ = lean_obj_once(&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6, &l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6_once, _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6);
v___x_3344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3344_, 0, v___x_3342_);
lean_ctor_set(v___x_3344_, 1, v___x_3343_);
v___y_3309_ = v___x_3332_;
v___y_3310_ = v_a_3331_;
v___y_3311_ = v___x_3336_;
v___y_3312_ = v___x_3344_;
goto v___jp_3308_;
}
else
{
lean_object* v___x_3345_; 
lean_dec(v_fst_3303_);
v___x_3345_ = l_Lean_MessageData_nil;
v___y_3309_ = v___x_3332_;
v___y_3310_ = v_a_3331_;
v___y_3311_ = v___x_3336_;
v___y_3312_ = v___x_3345_;
goto v___jp_3308_;
}
}
v___jp_3346_:
{
lean_object* v_a_3348_; 
v_a_3348_ = lean_ctor_get(v___y_3347_, 0);
lean_inc(v_a_3348_);
lean_dec_ref(v___y_3347_);
v_a_3331_ = v_a_3348_;
goto v___jp_3330_;
}
v___jp_3349_:
{
lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3351_ = lean_array_to_list(v___y_3350_);
v___x_3352_ = lean_box(0);
v___x_3353_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7(v_a_3271_, v___x_3351_, v___x_3352_, v___y_3275_, v___y_3276_);
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v_a_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; 
v_a_3354_ = lean_ctor_get(v___x_3353_, 0);
lean_inc(v_a_3354_);
lean_dec_ref_known(v___x_3353_, 1);
v___x_3355_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0);
v___x_3356_ = lean_obj_once(&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9, &l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9_once, _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9);
v___x_3357_ = l_Lean_MessageData_joinSep(v_a_3354_, v___x_3356_);
v___x_3358_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3355_);
lean_ctor_set(v___x_3358_, 1, v___x_3357_);
v_a_3331_ = v___x_3358_;
goto v___jp_3330_;
}
else
{
lean_del_object(v___x_3306_);
lean_dec(v_snd_3304_);
lean_dec(v_fst_3303_);
lean_del_object(v___x_3301_);
lean_dec(v_fst_3299_);
lean_del_object(v___x_3283_);
lean_dec(v_tail_3281_);
lean_dec(v_x_3274_);
return v___x_3353_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___boxed(lean_object* v_a_3384_, lean_object* v_a_3385_, lean_object* v_x_3386_, lean_object* v_x_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_){
_start:
{
lean_object* v_res_3391_; 
v_res_3391_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11(v_a_3384_, v_a_3385_, v_x_3386_, v_x_3387_, v___y_3388_, v___y_3389_);
lean_dec(v___y_3389_);
lean_dec_ref(v___y_3388_);
lean_dec(v_a_3385_);
lean_dec(v_a_3384_);
return v_res_3391_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0(uint8_t v___x_3393_, lean_object* v_x_3394_){
_start:
{
if (lean_obj_tag(v_x_3394_) == 1)
{
lean_object* v_pre_3395_; 
v_pre_3395_ = lean_ctor_get(v_x_3394_, 0);
if (lean_obj_tag(v_pre_3395_) == 0)
{
lean_object* v_str_3396_; lean_object* v___x_3397_; uint8_t v___x_3398_; 
v_str_3396_ = lean_ctor_get(v_x_3394_, 1);
v___x_3397_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0___closed__0));
v___x_3398_ = lean_string_dec_eq(v_str_3396_, v___x_3397_);
return v___x_3398_;
}
else
{
return v___x_3393_;
}
}
else
{
return v___x_3393_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0___boxed(lean_object* v___x_3399_, lean_object* v_x_3400_){
_start:
{
uint8_t v___x_17819__boxed_3401_; uint8_t v_res_3402_; lean_object* v_r_3403_; 
v___x_17819__boxed_3401_ = lean_unbox(v___x_3399_);
v_res_3402_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0(v___x_17819__boxed_3401_, v_x_3400_);
lean_dec(v_x_3400_);
v_r_3403_ = lean_box(v_res_3402_);
return v_r_3403_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30(lean_object* v_ref_3407_, lean_object* v_msgData_3408_, uint8_t v_severity_3409_, uint8_t v_isSilent_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_){
_start:
{
uint8_t v___y_3415_; lean_object* v___y_3416_; uint8_t v___y_3417_; lean_object* v___y_3418_; lean_object* v___y_3419_; lean_object* v___y_3420_; lean_object* v___y_3421_; lean_object* v___y_3422_; lean_object* v___y_3480_; uint8_t v___y_3481_; uint8_t v___y_3482_; lean_object* v___y_3483_; lean_object* v___y_3484_; uint8_t v___y_3505_; lean_object* v___y_3506_; lean_object* v___y_3507_; uint8_t v___y_3508_; lean_object* v___y_3509_; uint8_t v___y_3513_; uint8_t v___x_3541_; uint8_t v___x_3542_; 
v___x_3541_ = 2;
v___x_3542_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3409_, v___x_3541_);
if (v___x_3542_ == 0)
{
goto v___jp_3530_;
}
else
{
uint8_t v___x_3543_; 
lean_inc_ref(v_msgData_3408_);
v___x_3543_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3408_);
if (v___x_3543_ == 0)
{
goto v___jp_3530_;
}
else
{
lean_object* v___x_3544_; lean_object* v___x_3545_; 
lean_dec_ref(v_msgData_3408_);
v___x_3544_ = lean_box(0);
v___x_3545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3545_, 0, v___x_3544_);
return v___x_3545_;
}
}
v___jp_3414_:
{
lean_object* v___x_3423_; 
v___x_3423_ = l_Lean_Elab_Command_getScope___redArg(v___y_3422_);
if (lean_obj_tag(v___x_3423_) == 0)
{
lean_object* v_a_3424_; lean_object* v_currNamespace_3425_; lean_object* v___x_3426_; 
v_a_3424_ = lean_ctor_get(v___x_3423_, 0);
lean_inc(v_a_3424_);
lean_dec_ref_known(v___x_3423_, 1);
v_currNamespace_3425_ = lean_ctor_get(v_a_3424_, 2);
lean_inc(v_currNamespace_3425_);
lean_dec(v_a_3424_);
v___x_3426_ = l_Lean_Elab_Command_getScope___redArg(v___y_3422_);
if (lean_obj_tag(v___x_3426_) == 0)
{
lean_object* v_a_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3462_; 
v_a_3427_ = lean_ctor_get(v___x_3426_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_3426_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3429_ = v___x_3426_;
v_isShared_3430_ = v_isSharedCheck_3462_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_a_3427_);
lean_dec(v___x_3426_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3462_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
lean_object* v_openDecls_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v_env_3436_; lean_object* v_messages_3437_; lean_object* v_scopes_3438_; lean_object* v_usedQuotCtxts_3439_; lean_object* v_nextMacroScope_3440_; lean_object* v_maxRecDepth_3441_; lean_object* v_ngen_3442_; lean_object* v_auxDeclNGen_3443_; lean_object* v_infoState_3444_; lean_object* v_traceState_3445_; lean_object* v_snapshotTasks_3446_; lean_object* v_prevLinterStates_3447_; lean_object* v_codeQualityEntryTasks_3448_; lean_object* v___x_3450_; uint8_t v_isShared_3451_; uint8_t v_isSharedCheck_3461_; 
v_openDecls_3431_ = lean_ctor_get(v_a_3427_, 3);
lean_inc(v_openDecls_3431_);
lean_dec(v_a_3427_);
v___x_3432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3432_, 0, v_currNamespace_3425_);
lean_ctor_set(v___x_3432_, 1, v_openDecls_3431_);
v___x_3433_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3433_, 0, v___x_3432_);
lean_ctor_set(v___x_3433_, 1, v___y_3419_);
lean_inc_ref(v___y_3420_);
lean_inc_ref(v___y_3421_);
v___x_3434_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3434_, 0, v___y_3421_);
lean_ctor_set(v___x_3434_, 1, v___y_3418_);
lean_ctor_set(v___x_3434_, 2, v___y_3416_);
lean_ctor_set(v___x_3434_, 3, v___y_3420_);
lean_ctor_set(v___x_3434_, 4, v___x_3433_);
lean_ctor_set_uint8(v___x_3434_, sizeof(void*)*5, v___y_3415_);
lean_ctor_set_uint8(v___x_3434_, sizeof(void*)*5 + 1, v___y_3417_);
lean_ctor_set_uint8(v___x_3434_, sizeof(void*)*5 + 2, v_isSilent_3410_);
v___x_3435_ = lean_st_ref_take(v___y_3422_);
v_env_3436_ = lean_ctor_get(v___x_3435_, 0);
v_messages_3437_ = lean_ctor_get(v___x_3435_, 1);
v_scopes_3438_ = lean_ctor_get(v___x_3435_, 2);
v_usedQuotCtxts_3439_ = lean_ctor_get(v___x_3435_, 3);
v_nextMacroScope_3440_ = lean_ctor_get(v___x_3435_, 4);
v_maxRecDepth_3441_ = lean_ctor_get(v___x_3435_, 5);
v_ngen_3442_ = lean_ctor_get(v___x_3435_, 6);
v_auxDeclNGen_3443_ = lean_ctor_get(v___x_3435_, 7);
v_infoState_3444_ = lean_ctor_get(v___x_3435_, 8);
v_traceState_3445_ = lean_ctor_get(v___x_3435_, 9);
v_snapshotTasks_3446_ = lean_ctor_get(v___x_3435_, 10);
v_prevLinterStates_3447_ = lean_ctor_get(v___x_3435_, 11);
v_codeQualityEntryTasks_3448_ = lean_ctor_get(v___x_3435_, 12);
v_isSharedCheck_3461_ = !lean_is_exclusive(v___x_3435_);
if (v_isSharedCheck_3461_ == 0)
{
v___x_3450_ = v___x_3435_;
v_isShared_3451_ = v_isSharedCheck_3461_;
goto v_resetjp_3449_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3448_);
lean_inc(v_prevLinterStates_3447_);
lean_inc(v_snapshotTasks_3446_);
lean_inc(v_traceState_3445_);
lean_inc(v_infoState_3444_);
lean_inc(v_auxDeclNGen_3443_);
lean_inc(v_ngen_3442_);
lean_inc(v_maxRecDepth_3441_);
lean_inc(v_nextMacroScope_3440_);
lean_inc(v_usedQuotCtxts_3439_);
lean_inc(v_scopes_3438_);
lean_inc(v_messages_3437_);
lean_inc(v_env_3436_);
lean_dec(v___x_3435_);
v___x_3450_ = lean_box(0);
v_isShared_3451_ = v_isSharedCheck_3461_;
goto v_resetjp_3449_;
}
v_resetjp_3449_:
{
lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3455_; 
v___x_3452_ = lean_box(0);
v___x_3453_ = l_Lean_MessageLog_add(v___x_3434_, v_messages_3437_);
if (v_isShared_3451_ == 0)
{
lean_ctor_set(v___x_3450_, 1, v___x_3453_);
v___x_3455_ = v___x_3450_;
goto v_reusejp_3454_;
}
else
{
lean_object* v_reuseFailAlloc_3460_; 
v_reuseFailAlloc_3460_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3460_, 0, v_env_3436_);
lean_ctor_set(v_reuseFailAlloc_3460_, 1, v___x_3453_);
lean_ctor_set(v_reuseFailAlloc_3460_, 2, v_scopes_3438_);
lean_ctor_set(v_reuseFailAlloc_3460_, 3, v_usedQuotCtxts_3439_);
lean_ctor_set(v_reuseFailAlloc_3460_, 4, v_nextMacroScope_3440_);
lean_ctor_set(v_reuseFailAlloc_3460_, 5, v_maxRecDepth_3441_);
lean_ctor_set(v_reuseFailAlloc_3460_, 6, v_ngen_3442_);
lean_ctor_set(v_reuseFailAlloc_3460_, 7, v_auxDeclNGen_3443_);
lean_ctor_set(v_reuseFailAlloc_3460_, 8, v_infoState_3444_);
lean_ctor_set(v_reuseFailAlloc_3460_, 9, v_traceState_3445_);
lean_ctor_set(v_reuseFailAlloc_3460_, 10, v_snapshotTasks_3446_);
lean_ctor_set(v_reuseFailAlloc_3460_, 11, v_prevLinterStates_3447_);
lean_ctor_set(v_reuseFailAlloc_3460_, 12, v_codeQualityEntryTasks_3448_);
v___x_3455_ = v_reuseFailAlloc_3460_;
goto v_reusejp_3454_;
}
v_reusejp_3454_:
{
lean_object* v___x_3456_; lean_object* v___x_3458_; 
v___x_3456_ = lean_st_ref_put(v___y_3422_, v___x_3455_);
if (v_isShared_3430_ == 0)
{
lean_ctor_set(v___x_3429_, 0, v___x_3452_);
v___x_3458_ = v___x_3429_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v___x_3452_);
v___x_3458_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
return v___x_3458_;
}
}
}
}
}
else
{
lean_object* v_a_3463_; lean_object* v___x_3465_; uint8_t v_isShared_3466_; uint8_t v_isSharedCheck_3470_; 
lean_dec(v_currNamespace_3425_);
lean_dec_ref(v___y_3419_);
lean_dec_ref(v___y_3418_);
lean_dec(v___y_3416_);
v_a_3463_ = lean_ctor_get(v___x_3426_, 0);
v_isSharedCheck_3470_ = !lean_is_exclusive(v___x_3426_);
if (v_isSharedCheck_3470_ == 0)
{
v___x_3465_ = v___x_3426_;
v_isShared_3466_ = v_isSharedCheck_3470_;
goto v_resetjp_3464_;
}
else
{
lean_inc(v_a_3463_);
lean_dec(v___x_3426_);
v___x_3465_ = lean_box(0);
v_isShared_3466_ = v_isSharedCheck_3470_;
goto v_resetjp_3464_;
}
v_resetjp_3464_:
{
lean_object* v___x_3468_; 
if (v_isShared_3466_ == 0)
{
v___x_3468_ = v___x_3465_;
goto v_reusejp_3467_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v_a_3463_);
v___x_3468_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3467_;
}
v_reusejp_3467_:
{
return v___x_3468_;
}
}
}
}
else
{
lean_object* v_a_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3478_; 
lean_dec_ref(v___y_3419_);
lean_dec_ref(v___y_3418_);
lean_dec(v___y_3416_);
v_a_3471_ = lean_ctor_get(v___x_3423_, 0);
v_isSharedCheck_3478_ = !lean_is_exclusive(v___x_3423_);
if (v_isSharedCheck_3478_ == 0)
{
v___x_3473_ = v___x_3423_;
v_isShared_3474_ = v_isSharedCheck_3478_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_a_3471_);
lean_dec(v___x_3423_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3478_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
lean_object* v___x_3476_; 
if (v_isShared_3474_ == 0)
{
v___x_3476_ = v___x_3473_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v_a_3471_);
v___x_3476_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
return v___x_3476_;
}
}
}
}
v___jp_3479_:
{
lean_object* v_fileName_3485_; lean_object* v_fileMap_3486_; uint8_t v_suppressElabErrors_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3503_; 
v_fileName_3485_ = lean_ctor_get(v___y_3411_, 0);
v_fileMap_3486_ = lean_ctor_get(v___y_3411_, 1);
v_suppressElabErrors_3487_ = lean_ctor_get_uint8(v___y_3411_, sizeof(void*)*10);
v___x_3488_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3408_);
v___x_3489_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__6___redArg(v___x_3488_, v___y_3412_);
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
v_isSharedCheck_3503_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3503_ == 0)
{
v___x_3492_ = v___x_3489_;
v_isShared_3493_ = v_isSharedCheck_3503_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v___x_3489_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3503_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
lean_inc_ref_n(v_fileMap_3486_, 2);
v___x_3494_ = l_Lean_FileMap_toPosition(v_fileMap_3486_, v___y_3483_);
lean_dec(v___y_3483_);
v___x_3495_ = l_Lean_FileMap_toPosition(v_fileMap_3486_, v___y_3484_);
lean_dec(v___y_3484_);
v___x_3496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3495_);
v___x_3497_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__1_spec__2___closed__7));
if (v_suppressElabErrors_3487_ == 0)
{
lean_del_object(v___x_3492_);
v___y_3415_ = v___y_3481_;
v___y_3416_ = v___x_3496_;
v___y_3417_ = v___y_3482_;
v___y_3418_ = v___x_3494_;
v___y_3419_ = v_a_3490_;
v___y_3420_ = v___x_3497_;
v___y_3421_ = v_fileName_3485_;
v___y_3422_ = v___y_3412_;
goto v___jp_3414_;
}
else
{
uint8_t v___x_3498_; 
lean_inc(v_a_3490_);
lean_inc_ref(v___y_3480_);
v___x_3498_ = l_Lean_MessageData_hasTag(v___y_3480_, v_a_3490_);
if (v___x_3498_ == 0)
{
lean_object* v___x_3499_; lean_object* v___x_3501_; 
lean_dec_ref_known(v___x_3496_, 1);
lean_dec_ref(v___x_3494_);
lean_dec(v_a_3490_);
v___x_3499_ = lean_box(0);
if (v_isShared_3493_ == 0)
{
lean_ctor_set(v___x_3492_, 0, v___x_3499_);
v___x_3501_ = v___x_3492_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v___x_3499_);
v___x_3501_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
return v___x_3501_;
}
}
else
{
lean_del_object(v___x_3492_);
v___y_3415_ = v___y_3481_;
v___y_3416_ = v___x_3496_;
v___y_3417_ = v___y_3482_;
v___y_3418_ = v___x_3494_;
v___y_3419_ = v_a_3490_;
v___y_3420_ = v___x_3497_;
v___y_3421_ = v_fileName_3485_;
v___y_3422_ = v___y_3412_;
goto v___jp_3414_;
}
}
}
}
v___jp_3504_:
{
lean_object* v___x_3510_; 
v___x_3510_ = l_Lean_Syntax_getTailPos_x3f(v___y_3506_, v___y_3505_);
lean_dec(v___y_3506_);
if (lean_obj_tag(v___x_3510_) == 0)
{
lean_inc(v___y_3509_);
v___y_3480_ = v___y_3507_;
v___y_3481_ = v___y_3505_;
v___y_3482_ = v___y_3508_;
v___y_3483_ = v___y_3509_;
v___y_3484_ = v___y_3509_;
goto v___jp_3479_;
}
else
{
lean_object* v_val_3511_; 
v_val_3511_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_val_3511_);
lean_dec_ref_known(v___x_3510_, 1);
v___y_3480_ = v___y_3507_;
v___y_3481_ = v___y_3505_;
v___y_3482_ = v___y_3508_;
v___y_3483_ = v___y_3509_;
v___y_3484_ = v_val_3511_;
goto v___jp_3479_;
}
}
v___jp_3512_:
{
lean_object* v___x_3514_; 
v___x_3514_ = l_Lean_Elab_Command_getRef___redArg(v___y_3411_);
if (lean_obj_tag(v___x_3514_) == 0)
{
lean_object* v_a_3515_; lean_object* v_ref_3516_; uint8_t v___x_3517_; lean_object* v___f_3518_; lean_object* v___x_3519_; 
v_a_3515_ = lean_ctor_get(v___x_3514_, 0);
lean_inc(v_a_3515_);
lean_dec_ref_known(v___x_3514_, 1);
v_ref_3516_ = l_Lean_replaceRef(v_ref_3407_, v_a_3515_);
lean_dec(v_a_3515_);
v___x_3517_ = 0;
v___f_3518_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___closed__0));
v___x_3519_ = l_Lean_Syntax_getPos_x3f(v_ref_3516_, v___x_3517_);
if (lean_obj_tag(v___x_3519_) == 0)
{
lean_object* v___x_3520_; 
v___x_3520_ = lean_unsigned_to_nat(0u);
v___y_3505_ = v___x_3517_;
v___y_3506_ = v_ref_3516_;
v___y_3507_ = v___f_3518_;
v___y_3508_ = v___y_3513_;
v___y_3509_ = v___x_3520_;
goto v___jp_3504_;
}
else
{
lean_object* v_val_3521_; 
v_val_3521_ = lean_ctor_get(v___x_3519_, 0);
lean_inc(v_val_3521_);
lean_dec_ref_known(v___x_3519_, 1);
v___y_3505_ = v___x_3517_;
v___y_3506_ = v_ref_3516_;
v___y_3507_ = v___f_3518_;
v___y_3508_ = v___y_3513_;
v___y_3509_ = v_val_3521_;
goto v___jp_3504_;
}
}
else
{
lean_object* v_a_3522_; lean_object* v___x_3524_; uint8_t v_isShared_3525_; uint8_t v_isSharedCheck_3529_; 
lean_dec_ref(v_msgData_3408_);
v_a_3522_ = lean_ctor_get(v___x_3514_, 0);
v_isSharedCheck_3529_ = !lean_is_exclusive(v___x_3514_);
if (v_isSharedCheck_3529_ == 0)
{
v___x_3524_ = v___x_3514_;
v_isShared_3525_ = v_isSharedCheck_3529_;
goto v_resetjp_3523_;
}
else
{
lean_inc(v_a_3522_);
lean_dec(v___x_3514_);
v___x_3524_ = lean_box(0);
v_isShared_3525_ = v_isSharedCheck_3529_;
goto v_resetjp_3523_;
}
v_resetjp_3523_:
{
lean_object* v___x_3527_; 
if (v_isShared_3525_ == 0)
{
v___x_3527_ = v___x_3524_;
goto v_reusejp_3526_;
}
else
{
lean_object* v_reuseFailAlloc_3528_; 
v_reuseFailAlloc_3528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3528_, 0, v_a_3522_);
v___x_3527_ = v_reuseFailAlloc_3528_;
goto v_reusejp_3526_;
}
v_reusejp_3526_:
{
return v___x_3527_;
}
}
}
}
v___jp_3530_:
{
lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v_scopes_3533_; lean_object* v___x_3534_; lean_object* v_opts_3535_; uint8_t v___x_3536_; uint8_t v___x_3537_; 
v___x_3531_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3532_ = lean_st_ref_get(v___y_3412_);
v_scopes_3533_ = lean_ctor_get(v___x_3532_, 2);
lean_inc(v_scopes_3533_);
lean_dec(v___x_3532_);
v___x_3534_ = l_List_head_x21___redArg(v___x_3531_, v_scopes_3533_);
lean_dec(v_scopes_3533_);
v_opts_3535_ = lean_ctor_get(v___x_3534_, 1);
lean_inc_ref(v_opts_3535_);
lean_dec(v___x_3534_);
v___x_3536_ = 1;
v___x_3537_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3409_, v___x_3536_);
if (v___x_3537_ == 0)
{
lean_dec_ref(v_opts_3535_);
v___y_3513_ = v_severity_3409_;
goto v___jp_3512_;
}
else
{
lean_object* v___x_3538_; uint8_t v___x_3539_; 
v___x_3538_ = l_Lean_warningAsError;
v___x_3539_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__17(v_opts_3535_, v___x_3538_);
lean_dec_ref(v_opts_3535_);
if (v___x_3539_ == 0)
{
v___y_3513_ = v_severity_3409_;
goto v___jp_3512_;
}
else
{
uint8_t v___x_3540_; 
v___x_3540_ = 2;
v___y_3513_ = v___x_3540_;
goto v___jp_3512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___boxed(lean_object* v_ref_3546_, lean_object* v_msgData_3547_, lean_object* v_severity_3548_, lean_object* v_isSilent_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_){
_start:
{
uint8_t v_severity_boxed_3553_; uint8_t v_isSilent_boxed_3554_; lean_object* v_res_3555_; 
v_severity_boxed_3553_ = lean_unbox(v_severity_3548_);
v_isSilent_boxed_3554_ = lean_unbox(v_isSilent_3549_);
v_res_3555_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30(v_ref_3546_, v_msgData_3547_, v_severity_boxed_3553_, v_isSilent_boxed_3554_, v___y_3550_, v___y_3551_);
lean_dec(v___y_3551_);
lean_dec_ref(v___y_3550_);
lean_dec(v_ref_3546_);
return v_res_3555_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25(lean_object* v_msgData_3556_, uint8_t v_severity_3557_, uint8_t v_isSilent_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_){
_start:
{
lean_object* v___x_3562_; 
v___x_3562_ = l_Lean_Elab_Command_getRef___redArg(v___y_3559_);
if (lean_obj_tag(v___x_3562_) == 0)
{
lean_object* v_a_3563_; lean_object* v___x_3564_; 
v_a_3563_ = lean_ctor_get(v___x_3562_, 0);
lean_inc(v_a_3563_);
lean_dec_ref_known(v___x_3562_, 1);
v___x_3564_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30(v_a_3563_, v_msgData_3556_, v_severity_3557_, v_isSilent_3558_, v___y_3559_, v___y_3560_);
lean_dec(v_a_3563_);
return v___x_3564_;
}
else
{
lean_object* v_a_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3572_; 
lean_dec_ref(v_msgData_3556_);
v_a_3565_ = lean_ctor_get(v___x_3562_, 0);
v_isSharedCheck_3572_ = !lean_is_exclusive(v___x_3562_);
if (v_isSharedCheck_3572_ == 0)
{
v___x_3567_ = v___x_3562_;
v_isShared_3568_ = v_isSharedCheck_3572_;
goto v_resetjp_3566_;
}
else
{
lean_inc(v_a_3565_);
lean_dec(v___x_3562_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3572_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
lean_object* v___x_3570_; 
if (v_isShared_3568_ == 0)
{
v___x_3570_ = v___x_3567_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v_a_3565_);
v___x_3570_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
return v___x_3570_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25___boxed(lean_object* v_msgData_3573_, lean_object* v_severity_3574_, lean_object* v_isSilent_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_){
_start:
{
uint8_t v_severity_boxed_3579_; uint8_t v_isSilent_boxed_3580_; lean_object* v_res_3581_; 
v_severity_boxed_3579_ = lean_unbox(v_severity_3574_);
v_isSilent_boxed_3580_ = lean_unbox(v_isSilent_3575_);
v_res_3581_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25(v_msgData_3573_, v_severity_boxed_3579_, v_isSilent_boxed_3580_, v___y_3576_, v___y_3577_);
lean_dec(v___y_3577_);
lean_dec_ref(v___y_3576_);
return v_res_3581_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12(lean_object* v_msgData_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_){
_start:
{
uint8_t v___x_3586_; uint8_t v___x_3587_; lean_object* v___x_3588_; 
v___x_3586_ = 0;
v___x_3587_ = 0;
v___x_3588_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25(v_msgData_3582_, v___x_3586_, v___x_3587_, v___y_3583_, v___y_3584_);
return v___x_3588_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12___boxed(lean_object* v_msgData_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_){
_start:
{
lean_object* v_res_3593_; 
v_res_3593_ = l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12(v_msgData_3589_, v___y_3590_, v___y_3591_);
lean_dec(v___y_3591_);
lean_dec_ref(v___y_3590_);
return v_res_3593_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(lean_object* v_init_3594_, lean_object* v_x_3595_){
_start:
{
if (lean_obj_tag(v_x_3595_) == 0)
{
lean_object* v_k_3597_; lean_object* v_v_3598_; lean_object* v_l_3599_; lean_object* v_r_3600_; lean_object* v___x_3601_; lean_object* v_a_3602_; lean_object* v_a_3603_; lean_object* v___x_3604_; 
v_k_3597_ = lean_ctor_get(v_x_3595_, 1);
lean_inc(v_k_3597_);
v_v_3598_ = lean_ctor_get(v_x_3595_, 2);
lean_inc(v_v_3598_);
v_l_3599_ = lean_ctor_get(v_x_3595_, 3);
lean_inc(v_l_3599_);
v_r_3600_ = lean_ctor_get(v_x_3595_, 4);
lean_inc(v_r_3600_);
lean_dec_ref_known(v_x_3595_, 5);
v___x_3601_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(v_init_3594_, v_l_3599_);
v_a_3602_ = lean_ctor_get(v___x_3601_, 0);
lean_inc(v_a_3602_);
lean_dec_ref(v___x_3601_);
v_a_3603_ = lean_ctor_get(v_a_3602_, 0);
lean_inc(v_a_3603_);
lean_dec(v_a_3602_);
v___x_3604_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_3597_, v_v_3598_, v_a_3603_);
v_init_3594_ = v___x_3604_;
v_x_3595_ = v_r_3600_;
goto _start;
}
else
{
lean_object* v___x_3606_; lean_object* v___x_3607_; 
v___x_3606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3606_, 0, v_init_3594_);
v___x_3607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3606_);
return v___x_3607_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg___boxed(lean_object* v_init_3608_, lean_object* v_x_3609_, lean_object* v___y_3610_){
_start:
{
lean_object* v_res_3611_; 
v_res_3611_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(v_init_3608_, v_x_3609_);
return v_res_3611_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23(lean_object* v_init_3612_, lean_object* v_x_3613_){
_start:
{
if (lean_obj_tag(v_x_3613_) == 0)
{
lean_object* v_k_3614_; lean_object* v_v_3615_; lean_object* v_l_3616_; lean_object* v_r_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; 
v_k_3614_ = lean_ctor_get(v_x_3613_, 1);
v_v_3615_ = lean_ctor_get(v_x_3613_, 2);
v_l_3616_ = lean_ctor_get(v_x_3613_, 3);
v_r_3617_ = lean_ctor_get(v_x_3613_, 4);
v___x_3618_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23(v_init_3612_, v_l_3616_);
lean_inc(v_v_3615_);
lean_inc(v_k_3614_);
v___x_3619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3619_, 0, v_k_3614_);
lean_ctor_set(v___x_3619_, 1, v_v_3615_);
v___x_3620_ = lean_array_push(v___x_3618_, v___x_3619_);
v_init_3612_ = v___x_3620_;
v_x_3613_ = v_r_3617_;
goto _start;
}
else
{
return v_init_3612_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23___boxed(lean_object* v_init_3622_, lean_object* v_x_3623_){
_start:
{
lean_object* v_res_3624_; 
v_res_3624_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23(v_init_3622_, v_x_3623_);
lean_dec(v_x_3623_);
return v_res_3624_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0(uint8_t v___x_3625_, lean_object* v_x1_3626_, lean_object* v_x2_3627_){
_start:
{
lean_object* v_fst_3628_; lean_object* v_fst_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; uint8_t v___x_3632_; 
v_fst_3628_ = lean_ctor_get(v_x1_3626_, 0);
lean_inc(v_fst_3628_);
lean_dec_ref(v_x1_3626_);
v_fst_3629_ = lean_ctor_get(v_x2_3627_, 0);
lean_inc(v_fst_3629_);
lean_dec_ref(v_x2_3627_);
v___x_3630_ = l_Lean_Name_toString(v_fst_3628_, v___x_3625_);
v___x_3631_ = l_Lean_Name_toString(v_fst_3629_, v___x_3625_);
v___x_3632_ = lean_string_dec_lt(v___x_3630_, v___x_3631_);
lean_dec_ref(v___x_3631_);
lean_dec_ref(v___x_3630_);
return v___x_3632_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0___boxed(lean_object* v___x_3633_, lean_object* v_x1_3634_, lean_object* v_x2_3635_){
_start:
{
uint8_t v___x_18177__boxed_3636_; uint8_t v_res_3637_; lean_object* v_r_3638_; 
v___x_18177__boxed_3636_ = lean_unbox(v___x_3633_);
v_res_3637_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0(v___x_18177__boxed_3636_, v_x1_3634_, v_x2_3635_);
v_r_3638_ = lean_box(v_res_3637_);
return v_r_3638_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___redArg(lean_object* v_hi_3639_, lean_object* v_pivot_3640_, lean_object* v_as_3641_, lean_object* v_i_3642_, lean_object* v_k_3643_){
_start:
{
uint8_t v___x_3644_; 
v___x_3644_ = lean_nat_dec_lt(v_k_3643_, v_hi_3639_);
if (v___x_3644_ == 0)
{
lean_object* v___x_3645_; lean_object* v___x_3646_; 
lean_dec(v_k_3643_);
lean_dec_ref(v_pivot_3640_);
v___x_3645_ = lean_array_fswap(v_as_3641_, v_i_3642_, v_hi_3639_);
v___x_3646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3646_, 0, v_i_3642_);
lean_ctor_set(v___x_3646_, 1, v___x_3645_);
return v___x_3646_;
}
else
{
lean_object* v___x_3647_; lean_object* v_fst_3648_; lean_object* v_fst_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; uint8_t v___x_3652_; 
v___x_3647_ = lean_array_fget_borrowed(v_as_3641_, v_k_3643_);
v_fst_3648_ = lean_ctor_get(v___x_3647_, 0);
v_fst_3649_ = lean_ctor_get(v_pivot_3640_, 0);
lean_inc(v_fst_3648_);
v___x_3650_ = l_Lean_Name_toString(v_fst_3648_, v___x_3644_);
lean_inc(v_fst_3649_);
v___x_3651_ = l_Lean_Name_toString(v_fst_3649_, v___x_3644_);
v___x_3652_ = lean_string_dec_lt(v___x_3650_, v___x_3651_);
lean_dec_ref(v___x_3651_);
lean_dec_ref(v___x_3650_);
if (v___x_3652_ == 0)
{
lean_object* v___x_3653_; lean_object* v___x_3654_; 
v___x_3653_ = lean_unsigned_to_nat(1u);
v___x_3654_ = lean_nat_add(v_k_3643_, v___x_3653_);
lean_dec(v_k_3643_);
v_k_3643_ = v___x_3654_;
goto _start;
}
else
{
lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; 
v___x_3656_ = lean_array_fswap(v_as_3641_, v_i_3642_, v_k_3643_);
v___x_3657_ = lean_unsigned_to_nat(1u);
v___x_3658_ = lean_nat_add(v_i_3642_, v___x_3657_);
lean_dec(v_i_3642_);
v___x_3659_ = lean_nat_add(v_k_3643_, v___x_3657_);
lean_dec(v_k_3643_);
v_as_3641_ = v___x_3656_;
v_i_3642_ = v___x_3658_;
v_k_3643_ = v___x_3659_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___redArg___boxed(lean_object* v_hi_3661_, lean_object* v_pivot_3662_, lean_object* v_as_3663_, lean_object* v_i_3664_, lean_object* v_k_3665_){
_start:
{
lean_object* v_res_3666_; 
v_res_3666_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___redArg(v_hi_3661_, v_pivot_3662_, v_as_3663_, v_i_3664_, v_k_3665_);
lean_dec(v_hi_3661_);
return v_res_3666_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg(lean_object* v_n_3667_, lean_object* v_as_3668_, lean_object* v_lo_3669_, lean_object* v_hi_3670_){
_start:
{
lean_object* v___y_3672_; uint8_t v___x_3682_; 
v___x_3682_ = lean_nat_dec_lt(v_lo_3669_, v_hi_3670_);
if (v___x_3682_ == 0)
{
lean_dec(v_lo_3669_);
return v_as_3668_;
}
else
{
lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v_mid_3685_; lean_object* v___y_3687_; lean_object* v___y_3693_; lean_object* v___x_3698_; lean_object* v___x_3699_; uint8_t v___x_3700_; 
v___x_3683_ = lean_nat_add(v_lo_3669_, v_hi_3670_);
v___x_3684_ = lean_unsigned_to_nat(1u);
v_mid_3685_ = lean_nat_shiftr(v___x_3683_, v___x_3684_);
lean_dec(v___x_3683_);
v___x_3698_ = lean_array_fget_borrowed(v_as_3668_, v_mid_3685_);
v___x_3699_ = lean_array_fget_borrowed(v_as_3668_, v_lo_3669_);
lean_inc(v___x_3699_);
lean_inc(v___x_3698_);
v___x_3700_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0(v___x_3682_, v___x_3698_, v___x_3699_);
if (v___x_3700_ == 0)
{
v___y_3693_ = v_as_3668_;
goto v___jp_3692_;
}
else
{
lean_object* v___x_3701_; 
v___x_3701_ = lean_array_fswap(v_as_3668_, v_lo_3669_, v_mid_3685_);
v___y_3693_ = v___x_3701_;
goto v___jp_3692_;
}
v___jp_3686_:
{
lean_object* v___x_3688_; lean_object* v___x_3689_; uint8_t v___x_3690_; 
v___x_3688_ = lean_array_fget_borrowed(v___y_3687_, v_mid_3685_);
v___x_3689_ = lean_array_fget_borrowed(v___y_3687_, v_hi_3670_);
lean_inc(v___x_3689_);
lean_inc(v___x_3688_);
v___x_3690_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0(v___x_3682_, v___x_3688_, v___x_3689_);
if (v___x_3690_ == 0)
{
lean_dec(v_mid_3685_);
v___y_3672_ = v___y_3687_;
goto v___jp_3671_;
}
else
{
lean_object* v___x_3691_; 
v___x_3691_ = lean_array_fswap(v___y_3687_, v_mid_3685_, v_hi_3670_);
lean_dec(v_mid_3685_);
v___y_3672_ = v___x_3691_;
goto v___jp_3671_;
}
}
v___jp_3692_:
{
lean_object* v___x_3694_; lean_object* v___x_3695_; uint8_t v___x_3696_; 
v___x_3694_ = lean_array_fget_borrowed(v___y_3693_, v_hi_3670_);
v___x_3695_ = lean_array_fget_borrowed(v___y_3693_, v_lo_3669_);
lean_inc(v___x_3695_);
lean_inc(v___x_3694_);
v___x_3696_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0(v___x_3682_, v___x_3694_, v___x_3695_);
if (v___x_3696_ == 0)
{
v___y_3687_ = v___y_3693_;
goto v___jp_3686_;
}
else
{
lean_object* v___x_3697_; 
v___x_3697_ = lean_array_fswap(v___y_3693_, v_lo_3669_, v_hi_3670_);
v___y_3687_ = v___x_3697_;
goto v___jp_3686_;
}
}
}
v___jp_3671_:
{
lean_object* v_pivot_3673_; lean_object* v___x_3674_; lean_object* v_fst_3675_; lean_object* v_snd_3676_; uint8_t v___x_3677_; 
v_pivot_3673_ = lean_array_fget(v___y_3672_, v_hi_3670_);
lean_inc_n(v_lo_3669_, 2);
v___x_3674_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___redArg(v_hi_3670_, v_pivot_3673_, v___y_3672_, v_lo_3669_, v_lo_3669_);
v_fst_3675_ = lean_ctor_get(v___x_3674_, 0);
lean_inc(v_fst_3675_);
v_snd_3676_ = lean_ctor_get(v___x_3674_, 1);
lean_inc(v_snd_3676_);
lean_dec_ref(v___x_3674_);
v___x_3677_ = lean_nat_dec_le(v_hi_3670_, v_fst_3675_);
if (v___x_3677_ == 0)
{
lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; 
v___x_3678_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg(v_n_3667_, v_snd_3676_, v_lo_3669_, v_fst_3675_);
v___x_3679_ = lean_unsigned_to_nat(1u);
v___x_3680_ = lean_nat_add(v_fst_3675_, v___x_3679_);
lean_dec(v_fst_3675_);
v_as_3668_ = v___x_3678_;
v_lo_3669_ = v___x_3680_;
goto _start;
}
else
{
lean_dec(v_fst_3675_);
lean_dec(v_lo_3669_);
return v_snd_3676_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___boxed(lean_object* v_n_3702_, lean_object* v_as_3703_, lean_object* v_lo_3704_, lean_object* v_hi_3705_){
_start:
{
lean_object* v_res_3706_; 
v_res_3706_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg(v_n_3702_, v_as_3703_, v_lo_3704_, v_hi_3705_);
lean_dec(v_hi_3705_);
lean_dec(v_n_3702_);
return v_res_3706_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___redArg(lean_object* v_as_3707_, size_t v_sz_3708_, size_t v_i_3709_, lean_object* v_b_3710_){
_start:
{
uint8_t v___x_3712_; 
v___x_3712_ = lean_usize_dec_lt(v_i_3709_, v_sz_3708_);
if (v___x_3712_ == 0)
{
lean_object* v___x_3713_; 
v___x_3713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3713_, 0, v_b_3710_);
return v___x_3713_;
}
else
{
lean_object* v_a_3714_; lean_object* v_fst_3715_; lean_object* v_snd_3716_; lean_object* v_found_3717_; size_t v___x_3718_; size_t v___x_3719_; 
v_a_3714_ = lean_array_uget_borrowed(v_as_3707_, v_i_3709_);
v_fst_3715_ = lean_ctor_get(v_a_3714_, 0);
v_snd_3716_ = lean_ctor_get(v_a_3714_, 1);
lean_inc(v_snd_3716_);
lean_inc(v_fst_3715_);
v_found_3717_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_3715_, v_snd_3716_, v_b_3710_);
v___x_3718_ = ((size_t)1ULL);
v___x_3719_ = lean_usize_add(v_i_3709_, v___x_3718_);
v_i_3709_ = v___x_3719_;
v_b_3710_ = v_found_3717_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___redArg___boxed(lean_object* v_as_3721_, lean_object* v_sz_3722_, lean_object* v_i_3723_, lean_object* v_b_3724_, lean_object* v___y_3725_){
_start:
{
size_t v_sz_boxed_3726_; size_t v_i_boxed_3727_; lean_object* v_res_3728_; 
v_sz_boxed_3726_ = lean_unbox_usize(v_sz_3722_);
lean_dec(v_sz_3722_);
v_i_boxed_3727_ = lean_unbox_usize(v_i_3723_);
lean_dec(v_i_3723_);
v_res_3728_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___redArg(v_as_3721_, v_sz_boxed_3726_, v_i_boxed_3727_, v_b_3724_);
lean_dec_ref(v_as_3721_);
return v_res_3728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19(lean_object* v_as_3729_, size_t v_sz_3730_, size_t v_i_3731_, lean_object* v_b_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_){
_start:
{
uint8_t v___x_3736_; 
v___x_3736_ = lean_usize_dec_lt(v_i_3731_, v_sz_3730_);
if (v___x_3736_ == 0)
{
lean_object* v___x_3737_; 
v___x_3737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3737_, 0, v_b_3732_);
return v___x_3737_;
}
else
{
lean_object* v_a_3738_; size_t v_sz_3739_; size_t v___x_3740_; lean_object* v___x_3741_; 
v_a_3738_ = lean_array_uget_borrowed(v_as_3729_, v_i_3731_);
v_sz_3739_ = lean_array_size(v_a_3738_);
v___x_3740_ = ((size_t)0ULL);
v___x_3741_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___redArg(v_a_3738_, v_sz_3739_, v___x_3740_, v_b_3732_);
if (lean_obj_tag(v___x_3741_) == 0)
{
lean_object* v_a_3742_; size_t v___x_3743_; size_t v___x_3744_; 
v_a_3742_ = lean_ctor_get(v___x_3741_, 0);
lean_inc(v_a_3742_);
lean_dec_ref_known(v___x_3741_, 1);
v___x_3743_ = ((size_t)1ULL);
v___x_3744_ = lean_usize_add(v_i_3731_, v___x_3743_);
v_i_3731_ = v___x_3744_;
v_b_3732_ = v_a_3742_;
goto _start;
}
else
{
return v___x_3741_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19___boxed(lean_object* v_as_3746_, lean_object* v_sz_3747_, lean_object* v_i_3748_, lean_object* v_b_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_){
_start:
{
size_t v_sz_boxed_3753_; size_t v_i_boxed_3754_; lean_object* v_res_3755_; 
v_sz_boxed_3753_ = lean_unbox_usize(v_sz_3747_);
lean_dec(v_sz_3747_);
v_i_boxed_3754_ = lean_unbox_usize(v_i_3748_);
lean_dec(v_i_3748_);
v_res_3755_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19(v_as_3746_, v_sz_boxed_3753_, v_i_boxed_3754_, v_b_3749_, v___y_3750_, v___y_3751_);
lean_dec(v___y_3751_);
lean_dec_ref(v___y_3750_);
lean_dec_ref(v_as_3746_);
return v_res_3755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10(lean_object* v___y_3758_, lean_object* v___y_3759_){
_start:
{
lean_object* v___y_3762_; lean_object* v___y_3766_; lean_object* v___y_3767_; lean_object* v___y_3768_; lean_object* v___y_3769_; lean_object* v___y_3772_; lean_object* v___y_3773_; lean_object* v___y_3774_; lean_object* v___y_3775_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v_env_3780_; lean_object* v___x_3781_; lean_object* v_toEnvExtension_3782_; lean_object* v_asyncMode_3783_; lean_object* v___x_3784_; uint8_t v___x_3785_; lean_object* v_a_3787_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v_a_3812_; lean_object* v_a_3813_; 
v___x_3777_ = lean_box(1);
v___x_3778_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2);
v___x_3779_ = lean_st_ref_get(v___y_3759_);
v_env_3780_ = lean_ctor_get(v___x_3779_, 0);
lean_inc_ref_n(v_env_3780_, 2);
lean_dec(v___x_3779_);
v___x_3781_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_3782_ = lean_ctor_get(v___x_3781_, 0);
v_asyncMode_3783_ = lean_ctor_get(v_toEnvExtension_3782_, 2);
v___x_3784_ = lean_box(0);
v___x_3785_ = 0;
v___x_3810_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3777_, v___x_3781_, v_env_3780_, v_asyncMode_3783_, v___x_3784_, v___x_3785_);
v___x_3811_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(v___x_3777_, v___x_3810_);
v_a_3812_ = lean_ctor_get(v___x_3811_, 0);
lean_inc(v_a_3812_);
lean_dec_ref(v___x_3811_);
v_a_3813_ = lean_ctor_get(v_a_3812_, 0);
lean_inc(v_a_3813_);
lean_dec(v_a_3812_);
v_a_3787_ = v_a_3813_;
goto v___jp_3786_;
v___jp_3761_:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; 
v___x_3763_ = lean_array_to_list(v___y_3762_);
v___x_3764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3764_, 0, v___x_3763_);
return v___x_3764_;
}
v___jp_3765_:
{
lean_object* v___x_3770_; 
v___x_3770_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg(v___y_3768_, v___y_3766_, v___y_3767_, v___y_3769_);
lean_dec(v___y_3769_);
lean_dec(v___y_3768_);
v___y_3762_ = v___x_3770_;
goto v___jp_3761_;
}
v___jp_3771_:
{
uint8_t v___x_3776_; 
v___x_3776_ = lean_nat_dec_le(v___y_3775_, v___y_3773_);
if (v___x_3776_ == 0)
{
lean_dec(v___y_3773_);
lean_inc(v___y_3775_);
v___y_3766_ = v___y_3772_;
v___y_3767_ = v___y_3775_;
v___y_3768_ = v___y_3774_;
v___y_3769_ = v___y_3775_;
goto v___jp_3765_;
}
else
{
v___y_3766_ = v___y_3772_;
v___y_3767_ = v___y_3775_;
v___y_3768_ = v___y_3774_;
v___y_3769_ = v___y_3773_;
goto v___jp_3765_;
}
}
v___jp_3786_:
{
lean_object* v___x_3788_; lean_object* v_importedEntries_3789_; size_t v_sz_3790_; size_t v___x_3791_; lean_object* v___x_3792_; 
v___x_3788_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_3778_, v_toEnvExtension_3782_, v_env_3780_, v_asyncMode_3783_, v___x_3784_, v___x_3785_);
v_importedEntries_3789_ = lean_ctor_get(v___x_3788_, 0);
lean_inc_ref(v_importedEntries_3789_);
lean_dec(v___x_3788_);
v_sz_3790_ = lean_array_size(v_importedEntries_3789_);
v___x_3791_ = ((size_t)0ULL);
v___x_3792_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19(v_importedEntries_3789_, v_sz_3790_, v___x_3791_, v_a_3787_, v___y_3758_, v___y_3759_);
lean_dec_ref(v_importedEntries_3789_);
if (lean_obj_tag(v___x_3792_) == 0)
{
lean_object* v_a_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v_arr_3796_; lean_object* v___x_3797_; uint8_t v___x_3798_; 
v_a_3793_ = lean_ctor_get(v___x_3792_, 0);
lean_inc(v_a_3793_);
lean_dec_ref_known(v___x_3792_, 1);
v___x_3794_ = lean_unsigned_to_nat(0u);
v___x_3795_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__0));
v_arr_3796_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23(v___x_3795_, v_a_3793_);
lean_dec(v_a_3793_);
v___x_3797_ = lean_array_get_size(v_arr_3796_);
v___x_3798_ = lean_nat_dec_eq(v___x_3797_, v___x_3794_);
if (v___x_3798_ == 0)
{
lean_object* v___x_3799_; lean_object* v___x_3800_; uint8_t v___x_3801_; 
v___x_3799_ = lean_unsigned_to_nat(1u);
v___x_3800_ = lean_nat_sub(v___x_3797_, v___x_3799_);
v___x_3801_ = lean_nat_dec_le(v___x_3794_, v___x_3800_);
if (v___x_3801_ == 0)
{
lean_inc(v___x_3800_);
v___y_3772_ = v_arr_3796_;
v___y_3773_ = v___x_3800_;
v___y_3774_ = v___x_3797_;
v___y_3775_ = v___x_3800_;
goto v___jp_3771_;
}
else
{
v___y_3772_ = v_arr_3796_;
v___y_3773_ = v___x_3800_;
v___y_3774_ = v___x_3797_;
v___y_3775_ = v___x_3794_;
goto v___jp_3771_;
}
}
else
{
v___y_3762_ = v_arr_3796_;
goto v___jp_3761_;
}
}
else
{
lean_object* v_a_3802_; lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3809_; 
v_a_3802_ = lean_ctor_get(v___x_3792_, 0);
v_isSharedCheck_3809_ = !lean_is_exclusive(v___x_3792_);
if (v_isSharedCheck_3809_ == 0)
{
v___x_3804_ = v___x_3792_;
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
else
{
lean_inc(v_a_3802_);
lean_dec(v___x_3792_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
v_resetjp_3803_:
{
lean_object* v___x_3807_; 
if (v_isShared_3805_ == 0)
{
v___x_3807_ = v___x_3804_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_a_3802_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___boxed(lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_){
_start:
{
lean_object* v_res_3817_; 
v_res_3817_ = l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10(v___y_3814_, v___y_3815_);
lean_dec(v___y_3815_);
lean_dec_ref(v___y_3814_);
return v_res_3817_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(lean_object* v_t_3818_, lean_object* v_k_3819_, lean_object* v_fallback_3820_){
_start:
{
if (lean_obj_tag(v_t_3818_) == 0)
{
lean_object* v_k_3821_; lean_object* v_v_3822_; lean_object* v_l_3823_; lean_object* v_r_3824_; uint8_t v___x_3825_; 
v_k_3821_ = lean_ctor_get(v_t_3818_, 1);
v_v_3822_ = lean_ctor_get(v_t_3818_, 2);
v_l_3823_ = lean_ctor_get(v_t_3818_, 3);
v_r_3824_ = lean_ctor_get(v_t_3818_, 4);
v___x_3825_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3819_, v_k_3821_);
switch(v___x_3825_)
{
case 0:
{
v_t_3818_ = v_l_3823_;
goto _start;
}
case 1:
{
lean_inc(v_v_3822_);
return v_v_3822_;
}
default: 
{
v_t_3818_ = v_r_3824_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_3820_);
return v_fallback_3820_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg___boxed(lean_object* v_t_3828_, lean_object* v_k_3829_, lean_object* v_fallback_3830_){
_start:
{
lean_object* v_res_3831_; 
v_res_3831_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(v_t_3828_, v_k_3829_, v_fallback_3830_);
lean_dec(v_fallback_3830_);
lean_dec(v_k_3829_);
lean_dec(v_t_3828_);
return v_res_3831_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg(lean_object* v_as_3832_, size_t v_sz_3833_, size_t v_i_3834_, lean_object* v_b_3835_){
_start:
{
uint8_t v___x_3837_; 
v___x_3837_ = lean_usize_dec_lt(v_i_3834_, v_sz_3833_);
if (v___x_3837_ == 0)
{
lean_object* v___x_3838_; 
v___x_3838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3838_, 0, v_b_3835_);
return v___x_3838_;
}
else
{
lean_object* v_a_3839_; lean_object* v_fst_3840_; lean_object* v_snd_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; size_t v___x_3846_; size_t v___x_3847_; 
v_a_3839_ = lean_array_uget_borrowed(v_as_3832_, v_i_3834_);
v_fst_3840_ = lean_ctor_get(v_a_3839_, 0);
v_snd_3841_ = lean_ctor_get(v_a_3839_, 1);
v___x_3842_ = l_Lean_NameSet_empty;
v___x_3843_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(v_b_3835_, v_snd_3841_, v___x_3842_);
lean_inc(v_fst_3840_);
v___x_3844_ = l_Lean_NameSet_insert(v___x_3843_, v_fst_3840_);
lean_inc(v_snd_3841_);
v___x_3845_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_snd_3841_, v___x_3844_, v_b_3835_);
v___x_3846_ = ((size_t)1ULL);
v___x_3847_ = lean_usize_add(v_i_3834_, v___x_3846_);
v_i_3834_ = v___x_3847_;
v_b_3835_ = v___x_3845_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg___boxed(lean_object* v_as_3849_, lean_object* v_sz_3850_, lean_object* v_i_3851_, lean_object* v_b_3852_, lean_object* v___y_3853_){
_start:
{
size_t v_sz_boxed_3854_; size_t v_i_boxed_3855_; lean_object* v_res_3856_; 
v_sz_boxed_3854_ = lean_unbox_usize(v_sz_3850_);
lean_dec(v_sz_3850_);
v_i_boxed_3855_ = lean_unbox_usize(v_i_3851_);
lean_dec(v_i_3851_);
v_res_3856_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg(v_as_3849_, v_sz_boxed_3854_, v_i_boxed_3855_, v_b_3852_);
lean_dec_ref(v_as_3849_);
return v_res_3856_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2(lean_object* v_as_3857_, size_t v_sz_3858_, size_t v_i_3859_, lean_object* v_b_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_){
_start:
{
uint8_t v___x_3864_; 
v___x_3864_ = lean_usize_dec_lt(v_i_3859_, v_sz_3858_);
if (v___x_3864_ == 0)
{
lean_object* v___x_3865_; 
v___x_3865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3865_, 0, v_b_3860_);
return v___x_3865_;
}
else
{
lean_object* v_a_3866_; size_t v_sz_3867_; size_t v___x_3868_; lean_object* v___x_3869_; 
v_a_3866_ = lean_array_uget_borrowed(v_as_3857_, v_i_3859_);
v_sz_3867_ = lean_array_size(v_a_3866_);
v___x_3868_ = ((size_t)0ULL);
v___x_3869_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg(v_a_3866_, v_sz_3867_, v___x_3868_, v_b_3860_);
if (lean_obj_tag(v___x_3869_) == 0)
{
lean_object* v_a_3870_; size_t v___x_3871_; size_t v___x_3872_; 
v_a_3870_ = lean_ctor_get(v___x_3869_, 0);
lean_inc(v_a_3870_);
lean_dec_ref_known(v___x_3869_, 1);
v___x_3871_ = ((size_t)1ULL);
v___x_3872_ = lean_usize_add(v_i_3859_, v___x_3871_);
v_i_3859_ = v___x_3872_;
v_b_3860_ = v_a_3870_;
goto _start;
}
else
{
return v___x_3869_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2___boxed(lean_object* v_as_3874_, lean_object* v_sz_3875_, lean_object* v_i_3876_, lean_object* v_b_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_){
_start:
{
size_t v_sz_boxed_3881_; size_t v_i_boxed_3882_; lean_object* v_res_3883_; 
v_sz_boxed_3881_ = lean_unbox_usize(v_sz_3875_);
lean_dec(v_sz_3875_);
v_i_boxed_3882_ = lean_unbox_usize(v_i_3876_);
lean_dec(v_i_3876_);
v_res_3883_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2(v_as_3874_, v_sz_boxed_3881_, v_i_boxed_3882_, v_b_3877_, v___y_3878_, v___y_3879_);
lean_dec(v___y_3879_);
lean_dec_ref(v___y_3878_);
lean_dec_ref(v_as_3874_);
return v_res_3883_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3(lean_object* v_as_3884_, size_t v_i_3885_, size_t v_stop_3886_, lean_object* v_b_3887_){
_start:
{
uint8_t v___x_3888_; 
v___x_3888_ = lean_usize_dec_eq(v_i_3885_, v_stop_3886_);
if (v___x_3888_ == 0)
{
lean_object* v___x_3889_; lean_object* v_fst_3890_; lean_object* v_snd_3891_; lean_object* v___x_3892_; size_t v___x_3893_; size_t v___x_3894_; 
v___x_3889_ = lean_array_uget_borrowed(v_as_3884_, v_i_3885_);
v_fst_3890_ = lean_ctor_get(v___x_3889_, 0);
v_snd_3891_ = lean_ctor_get(v___x_3889_, 1);
lean_inc(v_snd_3891_);
lean_inc(v_fst_3890_);
v___x_3892_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_3890_, v_snd_3891_, v_b_3887_);
v___x_3893_ = ((size_t)1ULL);
v___x_3894_ = lean_usize_add(v_i_3885_, v___x_3893_);
v_i_3885_ = v___x_3894_;
v_b_3887_ = v___x_3892_;
goto _start;
}
else
{
return v_b_3887_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3___boxed(lean_object* v_as_3896_, lean_object* v_i_3897_, lean_object* v_stop_3898_, lean_object* v_b_3899_){
_start:
{
size_t v_i_boxed_3900_; size_t v_stop_boxed_3901_; lean_object* v_res_3902_; 
v_i_boxed_3900_ = lean_unbox_usize(v_i_3897_);
lean_dec(v_i_3897_);
v_stop_boxed_3901_ = lean_unbox_usize(v_stop_3898_);
lean_dec(v_stop_3898_);
v_res_3902_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3(v_as_3896_, v_i_boxed_3900_, v_stop_boxed_3901_, v_b_3899_);
lean_dec_ref(v_as_3896_);
return v_res_3902_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(lean_object* v_as_3903_, size_t v_i_3904_, size_t v_stop_3905_, lean_object* v_b_3906_){
_start:
{
lean_object* v___y_3908_; uint8_t v___x_3912_; 
v___x_3912_ = lean_usize_dec_eq(v_i_3904_, v_stop_3905_);
if (v___x_3912_ == 0)
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; uint8_t v___x_3916_; 
v___x_3913_ = lean_array_uget_borrowed(v_as_3903_, v_i_3904_);
v___x_3914_ = lean_unsigned_to_nat(0u);
v___x_3915_ = lean_array_get_size(v___x_3913_);
v___x_3916_ = lean_nat_dec_lt(v___x_3914_, v___x_3915_);
if (v___x_3916_ == 0)
{
v___y_3908_ = v_b_3906_;
goto v___jp_3907_;
}
else
{
size_t v___x_3917_; size_t v___x_3918_; lean_object* v___x_3919_; 
v___x_3917_ = ((size_t)0ULL);
v___x_3918_ = lean_usize_of_nat(v___x_3915_);
v___x_3919_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3(v___x_3913_, v___x_3917_, v___x_3918_, v_b_3906_);
v___y_3908_ = v___x_3919_;
goto v___jp_3907_;
}
}
else
{
return v_b_3906_;
}
v___jp_3907_:
{
size_t v___x_3909_; size_t v___x_3910_; 
v___x_3909_ = ((size_t)1ULL);
v___x_3910_ = lean_usize_add(v_i_3904_, v___x_3909_);
v_i_3904_ = v___x_3910_;
v_b_3906_ = v___y_3908_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5___boxed(lean_object* v_as_3920_, lean_object* v_i_3921_, lean_object* v_stop_3922_, lean_object* v_b_3923_){
_start:
{
size_t v_i_boxed_3924_; size_t v_stop_boxed_3925_; lean_object* v_res_3926_; 
v_i_boxed_3924_ = lean_unbox_usize(v_i_3921_);
lean_dec(v_i_3921_);
v_stop_boxed_3925_ = lean_unbox_usize(v_stop_3922_);
lean_dec(v_stop_3922_);
v_res_3926_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(v_as_3920_, v_i_boxed_3924_, v_stop_boxed_3925_, v_b_3923_);
lean_dec_ref(v_as_3920_);
return v_res_3926_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg(lean_object* v_keys_3927_, lean_object* v_vals_3928_, lean_object* v_i_3929_, lean_object* v_k_3930_){
_start:
{
lean_object* v___x_3931_; uint8_t v___x_3932_; 
v___x_3931_ = lean_array_get_size(v_keys_3927_);
v___x_3932_ = lean_nat_dec_lt(v_i_3929_, v___x_3931_);
if (v___x_3932_ == 0)
{
lean_object* v___x_3933_; 
lean_dec(v_i_3929_);
v___x_3933_ = lean_box(0);
return v___x_3933_;
}
else
{
lean_object* v_k_x27_3934_; uint8_t v___x_3935_; 
v_k_x27_3934_ = lean_array_fget_borrowed(v_keys_3927_, v_i_3929_);
v___x_3935_ = lean_name_eq(v_k_3930_, v_k_x27_3934_);
if (v___x_3935_ == 0)
{
lean_object* v___x_3936_; lean_object* v___x_3937_; 
v___x_3936_ = lean_unsigned_to_nat(1u);
v___x_3937_ = lean_nat_add(v_i_3929_, v___x_3936_);
lean_dec(v_i_3929_);
v_i_3929_ = v___x_3937_;
goto _start;
}
else
{
lean_object* v___x_3939_; lean_object* v___x_3940_; 
v___x_3939_ = lean_array_fget_borrowed(v_vals_3928_, v_i_3929_);
lean_dec(v_i_3929_);
lean_inc(v___x_3939_);
v___x_3940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3940_, 0, v___x_3939_);
return v___x_3940_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg___boxed(lean_object* v_keys_3941_, lean_object* v_vals_3942_, lean_object* v_i_3943_, lean_object* v_k_3944_){
_start:
{
lean_object* v_res_3945_; 
v_res_3945_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg(v_keys_3941_, v_vals_3942_, v_i_3943_, v_k_3944_);
lean_dec(v_k_3944_);
lean_dec_ref(v_vals_3942_);
lean_dec_ref(v_keys_3941_);
return v_res_3945_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg(lean_object* v_x_3946_, size_t v_x_3947_, lean_object* v_x_3948_){
_start:
{
if (lean_obj_tag(v_x_3946_) == 0)
{
lean_object* v_es_3949_; lean_object* v___x_3950_; size_t v___x_3951_; size_t v___x_3952_; lean_object* v_j_3953_; lean_object* v___x_3954_; 
v_es_3949_ = lean_ctor_get(v_x_3946_, 0);
v___x_3950_ = lean_box(2);
v___x_3951_ = ((size_t)31ULL);
v___x_3952_ = lean_usize_land(v_x_3947_, v___x_3951_);
v_j_3953_ = lean_usize_to_nat(v___x_3952_);
v___x_3954_ = lean_array_get_borrowed(v___x_3950_, v_es_3949_, v_j_3953_);
lean_dec(v_j_3953_);
switch(lean_obj_tag(v___x_3954_))
{
case 0:
{
lean_object* v_key_3955_; lean_object* v_val_3956_; uint8_t v___x_3957_; 
v_key_3955_ = lean_ctor_get(v___x_3954_, 0);
v_val_3956_ = lean_ctor_get(v___x_3954_, 1);
v___x_3957_ = lean_name_eq(v_x_3948_, v_key_3955_);
if (v___x_3957_ == 0)
{
lean_object* v___x_3958_; 
v___x_3958_ = lean_box(0);
return v___x_3958_;
}
else
{
lean_object* v___x_3959_; 
lean_inc(v_val_3956_);
v___x_3959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3959_, 0, v_val_3956_);
return v___x_3959_;
}
}
case 1:
{
lean_object* v_node_3960_; size_t v___x_3961_; size_t v___x_3962_; 
v_node_3960_ = lean_ctor_get(v___x_3954_, 0);
v___x_3961_ = ((size_t)5ULL);
v___x_3962_ = lean_usize_shift_right(v_x_3947_, v___x_3961_);
v_x_3946_ = v_node_3960_;
v_x_3947_ = v___x_3962_;
goto _start;
}
default: 
{
lean_object* v___x_3964_; 
v___x_3964_ = lean_box(0);
return v___x_3964_;
}
}
}
else
{
lean_object* v_ks_3965_; lean_object* v_vs_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; 
v_ks_3965_ = lean_ctor_get(v_x_3946_, 0);
v_vs_3966_ = lean_ctor_get(v_x_3946_, 1);
v___x_3967_ = lean_unsigned_to_nat(0u);
v___x_3968_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg(v_ks_3965_, v_vs_3966_, v___x_3967_, v_x_3948_);
return v___x_3968_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg___boxed(lean_object* v_x_3969_, lean_object* v_x_3970_, lean_object* v_x_3971_){
_start:
{
size_t v_x_18563__boxed_3972_; lean_object* v_res_3973_; 
v_x_18563__boxed_3972_ = lean_unbox_usize(v_x_3970_);
lean_dec(v_x_3970_);
v_res_3973_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg(v_x_3969_, v_x_18563__boxed_3972_, v_x_3971_);
lean_dec(v_x_3971_);
lean_dec_ref(v_x_3969_);
return v_res_3973_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(lean_object* v_x_3974_, lean_object* v_x_3975_){
_start:
{
uint64_t v___y_3977_; 
if (lean_obj_tag(v_x_3975_) == 0)
{
uint64_t v___x_3980_; 
v___x_3980_ = 1723ULL;
v___y_3977_ = v___x_3980_;
goto v___jp_3976_;
}
else
{
uint64_t v_hash_3981_; 
v_hash_3981_ = lean_ctor_get_uint64(v_x_3975_, sizeof(void*)*2);
v___y_3977_ = v_hash_3981_;
goto v___jp_3976_;
}
v___jp_3976_:
{
size_t v___x_3978_; lean_object* v___x_3979_; 
v___x_3978_ = lean_uint64_to_usize(v___y_3977_);
v___x_3979_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg(v_x_3974_, v___x_3978_, v_x_3975_);
return v___x_3979_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg___boxed(lean_object* v_x_3982_, lean_object* v_x_3983_){
_start:
{
lean_object* v_res_3984_; 
v_res_3984_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_x_3982_, v_x_3983_);
lean_dec(v_x_3983_);
lean_dec_ref(v_x_3982_);
return v_res_3984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg(lean_object* v___y_3985_){
_start:
{
lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v_env_3991_; lean_object* v___x_3992_; lean_object* v_ext_3993_; lean_object* v_toEnvExtension_3994_; lean_object* v_asyncMode_3995_; uint8_t v___x_3996_; lean_object* v___x_3997_; lean_object* v_categories_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; 
v___x_3987_ = lean_box(1);
v___x_3988_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2);
v___x_3989_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_3990_ = lean_st_ref_get(v___y_3985_);
v_env_3991_ = lean_ctor_get(v___x_3990_, 0);
lean_inc_ref_n(v_env_3991_, 2);
lean_dec(v___x_3990_);
v___x_3992_ = l_Lean_Parser_parserExtension;
v_ext_3993_ = lean_ctor_get(v___x_3992_, 1);
v_toEnvExtension_3994_ = lean_ctor_get(v_ext_3993_, 0);
v_asyncMode_3995_ = lean_ctor_get(v_toEnvExtension_3994_, 2);
v___x_3996_ = 0;
v___x_3997_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_3989_, v___x_3992_, v_env_3991_, v_asyncMode_3995_, v___x_3996_);
v_categories_3998_ = lean_ctor_get(v___x_3997_, 2);
lean_inc_ref(v_categories_3998_);
lean_dec(v___x_3997_);
v___x_3999_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1));
v___x_4000_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_categories_3998_, v___x_3999_);
lean_dec_ref(v_categories_3998_);
if (lean_obj_tag(v___x_4000_) == 1)
{
lean_object* v_val_4001_; lean_object* v___x_4003_; uint8_t v_isShared_4004_; uint8_t v_isSharedCheck_4032_; 
v_val_4001_ = lean_ctor_get(v___x_4000_, 0);
v_isSharedCheck_4032_ = !lean_is_exclusive(v___x_4000_);
if (v_isSharedCheck_4032_ == 0)
{
v___x_4003_ = v___x_4000_;
v_isShared_4004_ = v_isSharedCheck_4032_;
goto v_resetjp_4002_;
}
else
{
lean_inc(v_val_4001_);
lean_dec(v___x_4000_);
v___x_4003_ = lean_box(0);
v_isShared_4004_ = v_isSharedCheck_4032_;
goto v_resetjp_4002_;
}
v_resetjp_4002_:
{
lean_object* v___y_4006_; lean_object* v___x_4015_; lean_object* v_toEnvExtension_4016_; lean_object* v_exportEntriesFn_4017_; lean_object* v_asyncMode_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v_importedEntries_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v_exported_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; uint8_t v___x_4028_; 
v___x_4015_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_4016_ = lean_ctor_get(v___x_4015_, 0);
v_exportEntriesFn_4017_ = lean_ctor_get(v___x_4015_, 4);
v_asyncMode_4018_ = lean_ctor_get(v_toEnvExtension_4016_, 2);
v___x_4019_ = lean_box(0);
lean_inc_ref_n(v_env_3991_, 2);
v___x_4020_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_3988_, v_toEnvExtension_4016_, v_env_3991_, v_asyncMode_4018_, v___x_4019_, v___x_3996_);
v_importedEntries_4021_ = lean_ctor_get(v___x_4020_, 0);
lean_inc_ref(v_importedEntries_4021_);
lean_dec(v___x_4020_);
v___x_4022_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3987_, v___x_4015_, v_env_3991_, v_asyncMode_4018_, v___x_4019_, v___x_3996_);
lean_inc_ref(v_exportEntriesFn_4017_);
v___x_4023_ = lean_apply_2(v_exportEntriesFn_4017_, v_env_3991_, v___x_4022_);
v_exported_4024_ = lean_ctor_get(v___x_4023_, 0);
lean_inc(v_exported_4024_);
lean_dec_ref(v___x_4023_);
v___x_4025_ = lean_array_push(v_importedEntries_4021_, v_exported_4024_);
v___x_4026_ = lean_unsigned_to_nat(0u);
v___x_4027_ = lean_array_get_size(v___x_4025_);
v___x_4028_ = lean_nat_dec_lt(v___x_4026_, v___x_4027_);
if (v___x_4028_ == 0)
{
lean_dec_ref(v___x_4025_);
v___y_4006_ = v___x_3987_;
goto v___jp_4005_;
}
else
{
size_t v___x_4029_; size_t v___x_4030_; lean_object* v___x_4031_; 
v___x_4029_ = ((size_t)0ULL);
v___x_4030_ = lean_usize_of_nat(v___x_4027_);
v___x_4031_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(v___x_4025_, v___x_4029_, v___x_4030_, v___x_3987_);
lean_dec_ref(v___x_4025_);
v___y_4006_ = v___x_4031_;
goto v___jp_4005_;
}
v___jp_4005_:
{
lean_object* v_tables_4007_; lean_object* v_leadingTable_4008_; lean_object* v_trailingTable_4009_; lean_object* v_firstTokens_4010_; lean_object* v_firstTokens_4011_; lean_object* v___x_4013_; 
v_tables_4007_ = lean_ctor_get(v_val_4001_, 2);
v_leadingTable_4008_ = lean_ctor_get(v_tables_4007_, 0);
v_trailingTable_4009_ = lean_ctor_get(v_tables_4007_, 2);
lean_inc(v_trailingTable_4009_);
lean_inc(v_leadingTable_4008_);
lean_inc(v_val_4001_);
v_firstTokens_4010_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_4001_, v_leadingTable_4008_, v___y_4006_);
v_firstTokens_4011_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_4001_, v_trailingTable_4009_, v_firstTokens_4010_);
if (v_isShared_4004_ == 0)
{
lean_ctor_set_tag(v___x_4003_, 0);
lean_ctor_set(v___x_4003_, 0, v_firstTokens_4011_);
v___x_4013_ = v___x_4003_;
goto v_reusejp_4012_;
}
else
{
lean_object* v_reuseFailAlloc_4014_; 
v_reuseFailAlloc_4014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4014_, 0, v_firstTokens_4011_);
v___x_4013_ = v_reuseFailAlloc_4014_;
goto v_reusejp_4012_;
}
v_reusejp_4012_:
{
return v___x_4013_;
}
}
}
}
else
{
lean_object* v___x_4033_; 
lean_dec(v___x_4000_);
lean_dec_ref(v_env_3991_);
v___x_4033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4033_, 0, v___x_3987_);
return v___x_4033_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg___boxed(lean_object* v___y_4034_, lean_object* v___y_4035_){
_start:
{
lean_object* v_res_4036_; 
v_res_4036_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg(v___y_4034_);
lean_dec(v___y_4034_);
return v_res_4036_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1(void){
_start:
{
lean_object* v___x_4038_; lean_object* v___x_4039_; 
v___x_4038_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0));
v___x_4039_ = l_Lean_stringToMessageData(v___x_4038_);
return v___x_4039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg(lean_object* v_a_4040_, lean_object* v_a_4041_){
_start:
{
lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v_env_4046_; lean_object* v___x_4047_; lean_object* v_env_4048_; lean_object* v___x_4049_; lean_object* v_env_4050_; lean_object* v___x_4051_; lean_object* v_toEnvExtension_4052_; lean_object* v_exportEntriesFn_4053_; lean_object* v_asyncMode_4054_; lean_object* v___x_4055_; uint8_t v___x_4056_; lean_object* v___x_4057_; lean_object* v_importedEntries_4058_; lean_object* v___x_4060_; uint8_t v_isShared_4061_; uint8_t v_isSharedCheck_4110_; 
v___x_4043_ = lean_box(1);
v___x_4044_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2);
v___x_4045_ = lean_st_ref_get(v_a_4041_);
v_env_4046_ = lean_ctor_get(v___x_4045_, 0);
lean_inc_ref(v_env_4046_);
lean_dec(v___x_4045_);
v___x_4047_ = lean_st_ref_get(v_a_4041_);
v_env_4048_ = lean_ctor_get(v___x_4047_, 0);
lean_inc_ref(v_env_4048_);
lean_dec(v___x_4047_);
v___x_4049_ = lean_st_ref_get(v_a_4041_);
v_env_4050_ = lean_ctor_get(v___x_4049_, 0);
lean_inc_ref(v_env_4050_);
lean_dec(v___x_4049_);
v___x_4051_ = l_Lean_Parser_Tactic_Doc_tacticTagExt;
v_toEnvExtension_4052_ = lean_ctor_get(v___x_4051_, 0);
v_exportEntriesFn_4053_ = lean_ctor_get(v___x_4051_, 4);
v_asyncMode_4054_ = lean_ctor_get(v_toEnvExtension_4052_, 2);
v___x_4055_ = lean_box(0);
v___x_4056_ = 0;
v___x_4057_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_4044_, v_toEnvExtension_4052_, v_env_4046_, v_asyncMode_4054_, v___x_4055_, v___x_4056_);
v_importedEntries_4058_ = lean_ctor_get(v___x_4057_, 0);
v_isSharedCheck_4110_ = !lean_is_exclusive(v___x_4057_);
if (v_isSharedCheck_4110_ == 0)
{
lean_object* v_unused_4111_; 
v_unused_4111_ = lean_ctor_get(v___x_4057_, 1);
lean_dec(v_unused_4111_);
v___x_4060_ = v___x_4057_;
v_isShared_4061_ = v_isSharedCheck_4110_;
goto v_resetjp_4059_;
}
else
{
lean_inc(v_importedEntries_4058_);
lean_dec(v___x_4057_);
v___x_4060_ = lean_box(0);
v_isShared_4061_ = v_isSharedCheck_4110_;
goto v_resetjp_4059_;
}
v_resetjp_4059_:
{
lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v_exported_4064_; lean_object* v___x_4065_; size_t v_sz_4066_; size_t v___x_4067_; lean_object* v___x_4068_; 
v___x_4062_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4043_, v___x_4051_, v_env_4050_, v_asyncMode_4054_, v___x_4055_, v___x_4056_);
lean_inc_ref(v_exportEntriesFn_4053_);
v___x_4063_ = lean_apply_2(v_exportEntriesFn_4053_, v_env_4048_, v___x_4062_);
v_exported_4064_ = lean_ctor_get(v___x_4063_, 0);
lean_inc(v_exported_4064_);
lean_dec_ref(v___x_4063_);
v___x_4065_ = lean_array_push(v_importedEntries_4058_, v_exported_4064_);
v_sz_4066_ = lean_array_size(v___x_4065_);
v___x_4067_ = ((size_t)0ULL);
v___x_4068_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2(v___x_4065_, v_sz_4066_, v___x_4067_, v___x_4043_, v_a_4040_, v_a_4041_);
lean_dec_ref(v___x_4065_);
if (lean_obj_tag(v___x_4068_) == 0)
{
lean_object* v_a_4069_; lean_object* v___x_4070_; lean_object* v_a_4071_; lean_object* v___x_4072_; 
v_a_4069_ = lean_ctor_get(v___x_4068_, 0);
lean_inc(v_a_4069_);
lean_dec_ref_known(v___x_4068_, 1);
v___x_4070_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg(v_a_4041_);
v_a_4071_ = lean_ctor_get(v___x_4070_, 0);
lean_inc(v_a_4071_);
lean_dec_ref(v___x_4070_);
v___x_4072_ = l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10(v_a_4040_, v_a_4041_);
if (lean_obj_tag(v___x_4072_) == 0)
{
lean_object* v_a_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; 
v_a_4073_ = lean_ctor_get(v___x_4072_, 0);
lean_inc(v_a_4073_);
lean_dec_ref_known(v___x_4072_, 1);
v___x_4074_ = lean_box(0);
v___x_4075_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11(v_a_4071_, v_a_4069_, v_a_4073_, v___x_4074_, v_a_4040_, v_a_4041_);
lean_dec(v_a_4069_);
lean_dec(v_a_4071_);
if (lean_obj_tag(v___x_4075_) == 0)
{
lean_object* v_a_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4081_; 
v_a_4076_ = lean_ctor_get(v___x_4075_, 0);
lean_inc(v_a_4076_);
lean_dec_ref_known(v___x_4075_, 1);
v___x_4077_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1, &l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1);
v___x_4078_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_docCommentMarkdown_spec__0_spec__0_spec__1_spec__7_spec__18___closed__0);
v___x_4079_ = l_Lean_MessageData_joinSep(v_a_4076_, v___x_4078_);
if (v_isShared_4061_ == 0)
{
lean_ctor_set_tag(v___x_4060_, 7);
lean_ctor_set(v___x_4060_, 1, v___x_4079_);
lean_ctor_set(v___x_4060_, 0, v___x_4078_);
v___x_4081_ = v___x_4060_;
goto v_reusejp_4080_;
}
else
{
lean_object* v_reuseFailAlloc_4085_; 
v_reuseFailAlloc_4085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4085_, 0, v___x_4078_);
lean_ctor_set(v_reuseFailAlloc_4085_, 1, v___x_4079_);
v___x_4081_ = v_reuseFailAlloc_4085_;
goto v_reusejp_4080_;
}
v_reusejp_4080_:
{
lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; 
v___x_4082_ = l_Lean_MessageData_nestD(v___x_4081_);
v___x_4083_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4083_, 0, v___x_4077_);
lean_ctor_set(v___x_4083_, 1, v___x_4082_);
v___x_4084_ = l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12(v___x_4083_, v_a_4040_, v_a_4041_);
return v___x_4084_;
}
}
else
{
lean_object* v_a_4086_; lean_object* v___x_4088_; uint8_t v_isShared_4089_; uint8_t v_isSharedCheck_4093_; 
lean_del_object(v___x_4060_);
v_a_4086_ = lean_ctor_get(v___x_4075_, 0);
v_isSharedCheck_4093_ = !lean_is_exclusive(v___x_4075_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4088_ = v___x_4075_;
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
else
{
lean_inc(v_a_4086_);
lean_dec(v___x_4075_);
v___x_4088_ = lean_box(0);
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
v_resetjp_4087_:
{
lean_object* v___x_4091_; 
if (v_isShared_4089_ == 0)
{
v___x_4091_ = v___x_4088_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v_a_4086_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
return v___x_4091_;
}
}
}
}
else
{
lean_object* v_a_4094_; lean_object* v___x_4096_; uint8_t v_isShared_4097_; uint8_t v_isSharedCheck_4101_; 
lean_dec(v_a_4071_);
lean_dec(v_a_4069_);
lean_del_object(v___x_4060_);
v_a_4094_ = lean_ctor_get(v___x_4072_, 0);
v_isSharedCheck_4101_ = !lean_is_exclusive(v___x_4072_);
if (v_isSharedCheck_4101_ == 0)
{
v___x_4096_ = v___x_4072_;
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
else
{
lean_inc(v_a_4094_);
lean_dec(v___x_4072_);
v___x_4096_ = lean_box(0);
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
v_resetjp_4095_:
{
lean_object* v___x_4099_; 
if (v_isShared_4097_ == 0)
{
v___x_4099_ = v___x_4096_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v_a_4094_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
}
}
else
{
lean_object* v_a_4102_; lean_object* v___x_4104_; uint8_t v_isShared_4105_; uint8_t v_isSharedCheck_4109_; 
lean_del_object(v___x_4060_);
v_a_4102_ = lean_ctor_get(v___x_4068_, 0);
v_isSharedCheck_4109_ = !lean_is_exclusive(v___x_4068_);
if (v_isSharedCheck_4109_ == 0)
{
v___x_4104_ = v___x_4068_;
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
else
{
lean_inc(v_a_4102_);
lean_dec(v___x_4068_);
v___x_4104_ = lean_box(0);
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
v_resetjp_4103_:
{
lean_object* v___x_4107_; 
if (v_isShared_4105_ == 0)
{
v___x_4107_ = v___x_4104_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v_a_4102_);
v___x_4107_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
return v___x_4107_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___boxed(lean_object* v_a_4112_, lean_object* v_a_4113_, lean_object* v_a_4114_){
_start:
{
lean_object* v_res_4115_; 
v_res_4115_ = l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg(v_a_4112_, v_a_4113_);
lean_dec(v_a_4113_);
lean_dec_ref(v_a_4112_);
return v_res_4115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags(lean_object* v___stx_4116_, lean_object* v_a_4117_, lean_object* v_a_4118_){
_start:
{
lean_object* v___x_4120_; 
v___x_4120_ = l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg(v_a_4117_, v_a_4118_);
return v___x_4120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___boxed(lean_object* v___stx_4121_, lean_object* v_a_4122_, lean_object* v_a_4123_, lean_object* v_a_4124_){
_start:
{
lean_object* v_res_4125_; 
v_res_4125_ = l_Lean_Elab_Tactic_Doc_elabPrintTacTags(v___stx_4121_, v_a_4122_, v_a_4123_);
lean_dec(v_a_4123_);
lean_dec_ref(v_a_4122_);
lean_dec(v___stx_4121_);
return v_res_4125_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0(lean_object* v_00_u03b4_4126_, lean_object* v_t_4127_, lean_object* v_k_4128_, lean_object* v_fallback_4129_){
_start:
{
lean_object* v___x_4130_; 
v___x_4130_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(v_t_4127_, v_k_4128_, v_fallback_4129_);
return v___x_4130_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___boxed(lean_object* v_00_u03b4_4131_, lean_object* v_t_4132_, lean_object* v_k_4133_, lean_object* v_fallback_4134_){
_start:
{
lean_object* v_res_4135_; 
v_res_4135_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0(v_00_u03b4_4131_, v_t_4132_, v_k_4133_, v_fallback_4134_);
lean_dec(v_fallback_4134_);
lean_dec(v_k_4133_);
lean_dec(v_t_4132_);
return v_res_4135_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1(lean_object* v_as_4136_, size_t v_sz_4137_, size_t v_i_4138_, lean_object* v_b_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_){
_start:
{
lean_object* v___x_4143_; 
v___x_4143_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg(v_as_4136_, v_sz_4137_, v_i_4138_, v_b_4139_);
return v___x_4143_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___boxed(lean_object* v_as_4144_, lean_object* v_sz_4145_, lean_object* v_i_4146_, lean_object* v_b_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_){
_start:
{
size_t v_sz_boxed_4151_; size_t v_i_boxed_4152_; lean_object* v_res_4153_; 
v_sz_boxed_4151_ = lean_unbox_usize(v_sz_4145_);
lean_dec(v_sz_4145_);
v_i_boxed_4152_ = lean_unbox_usize(v_i_4146_);
lean_dec(v_i_4146_);
v_res_4153_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1(v_as_4144_, v_sz_boxed_4151_, v_i_boxed_4152_, v_b_4147_, v___y_4148_, v___y_4149_);
lean_dec(v___y_4149_);
lean_dec_ref(v___y_4148_);
lean_dec_ref(v_as_4144_);
return v_res_4153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3(lean_object* v___y_4154_, lean_object* v___y_4155_){
_start:
{
lean_object* v___x_4157_; 
v___x_4157_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg(v___y_4155_);
return v___x_4157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___boxed(lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_){
_start:
{
lean_object* v_res_4161_; 
v_res_4161_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3(v___y_4158_, v___y_4159_);
lean_dec(v___y_4159_);
lean_dec_ref(v___y_4158_);
return v_res_4161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5(lean_object* v_val_4162_, lean_object* v___x_4163_, lean_object* v___x_4164_, lean_object* v_inst_4165_, lean_object* v_R_4166_, lean_object* v_a_4167_, lean_object* v_b_4168_){
_start:
{
lean_object* v___x_4169_; 
v___x_4169_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg(v_val_4162_, v___x_4163_, v___x_4164_, v_a_4167_, v_b_4168_);
return v___x_4169_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___boxed(lean_object* v_val_4170_, lean_object* v___x_4171_, lean_object* v___x_4172_, lean_object* v_inst_4173_, lean_object* v_R_4174_, lean_object* v_a_4175_, lean_object* v_b_4176_){
_start:
{
lean_object* v_res_4177_; 
v_res_4177_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5(v_val_4170_, v___x_4171_, v___x_4172_, v_inst_4173_, v_R_4174_, v_a_4175_, v_b_4176_);
lean_dec_ref(v___x_4171_);
lean_dec_ref(v_val_4170_);
return v_res_4177_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8(lean_object* v_init_4178_, lean_object* v_t_4179_){
_start:
{
lean_object* v___x_4180_; 
v___x_4180_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8_spec__14(v_init_4178_, v_t_4179_);
return v___x_4180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9(lean_object* v_n_4181_, lean_object* v_as_4182_, lean_object* v_lo_4183_, lean_object* v_hi_4184_, lean_object* v_w_4185_, lean_object* v_hlo_4186_, lean_object* v_hhi_4187_){
_start:
{
lean_object* v___x_4188_; 
v___x_4188_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(v_n_4181_, v_as_4182_, v_lo_4183_, v_hi_4184_);
return v___x_4188_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___boxed(lean_object* v_n_4189_, lean_object* v_as_4190_, lean_object* v_lo_4191_, lean_object* v_hi_4192_, lean_object* v_w_4193_, lean_object* v_hlo_4194_, lean_object* v_hhi_4195_){
_start:
{
lean_object* v_res_4196_; 
v_res_4196_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9(v_n_4189_, v_as_4190_, v_lo_4191_, v_hi_4192_, v_w_4193_, v_hlo_4194_, v_hhi_4195_);
lean_dec(v_hi_4192_);
lean_dec(v_n_4189_);
return v_res_4196_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4(lean_object* v_00_u03b2_4197_, lean_object* v_x_4198_, lean_object* v_x_4199_){
_start:
{
lean_object* v___x_4200_; 
v___x_4200_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_x_4198_, v_x_4199_);
return v___x_4200_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___boxed(lean_object* v_00_u03b2_4201_, lean_object* v_x_4202_, lean_object* v_x_4203_){
_start:
{
lean_object* v_res_4204_; 
v_res_4204_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4(v_00_u03b2_4201_, v_x_4202_, v_x_4203_);
lean_dec(v_x_4203_);
lean_dec_ref(v_x_4202_);
return v_res_4204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9(lean_object* v_tac_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_){
_start:
{
lean_object* v___x_4209_; 
v___x_4209_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg(v_tac_4205_, v___y_4207_);
return v___x_4209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___boxed(lean_object* v_tac_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_){
_start:
{
lean_object* v_res_4214_; 
v_res_4214_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9(v_tac_4210_, v___y_4211_, v___y_4212_);
lean_dec(v___y_4212_);
lean_dec_ref(v___y_4211_);
return v_res_4214_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10(lean_object* v_00_u03b4_4215_, lean_object* v_t_4216_, lean_object* v_k_4217_){
_start:
{
lean_object* v___x_4218_; 
v___x_4218_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(v_t_4216_, v_k_4217_);
return v___x_4218_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___boxed(lean_object* v_00_u03b4_4219_, lean_object* v_t_4220_, lean_object* v_k_4221_){
_start:
{
lean_object* v_res_4222_; 
v_res_4222_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10(v_00_u03b4_4219_, v_t_4220_, v_k_4221_);
lean_dec(v_k_4221_);
lean_dec(v_t_4220_);
return v_res_4222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16(lean_object* v_n_4223_, lean_object* v_lo_4224_, lean_object* v_hi_4225_, lean_object* v_hhi_4226_, lean_object* v_pivot_4227_, lean_object* v_as_4228_, lean_object* v_i_4229_, lean_object* v_k_4230_, lean_object* v_ilo_4231_, lean_object* v_ik_4232_, lean_object* v_w_4233_){
_start:
{
lean_object* v___x_4234_; 
v___x_4234_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___redArg(v_hi_4225_, v_pivot_4227_, v_as_4228_, v_i_4229_, v_k_4230_);
return v___x_4234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___boxed(lean_object* v_n_4235_, lean_object* v_lo_4236_, lean_object* v_hi_4237_, lean_object* v_hhi_4238_, lean_object* v_pivot_4239_, lean_object* v_as_4240_, lean_object* v_i_4241_, lean_object* v_k_4242_, lean_object* v_ilo_4243_, lean_object* v_ik_4244_, lean_object* v_w_4245_){
_start:
{
lean_object* v_res_4246_; 
v_res_4246_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16(v_n_4235_, v_lo_4236_, v_hi_4237_, v_hhi_4238_, v_pivot_4239_, v_as_4240_, v_i_4241_, v_k_4242_, v_ilo_4243_, v_ik_4244_, v_w_4245_);
lean_dec(v_hi_4237_);
lean_dec(v_lo_4236_);
lean_dec(v_n_4235_);
return v_res_4246_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18(lean_object* v_as_4247_, size_t v_sz_4248_, size_t v_i_4249_, lean_object* v_b_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_){
_start:
{
lean_object* v___x_4254_; 
v___x_4254_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___redArg(v_as_4247_, v_sz_4248_, v_i_4249_, v_b_4250_);
return v___x_4254_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___boxed(lean_object* v_as_4255_, lean_object* v_sz_4256_, lean_object* v_i_4257_, lean_object* v_b_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_){
_start:
{
size_t v_sz_boxed_4262_; size_t v_i_boxed_4263_; lean_object* v_res_4264_; 
v_sz_boxed_4262_ = lean_unbox_usize(v_sz_4256_);
lean_dec(v_sz_4256_);
v_i_boxed_4263_ = lean_unbox_usize(v_i_4257_);
lean_dec(v_i_4257_);
v_res_4264_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18(v_as_4255_, v_sz_boxed_4262_, v_i_boxed_4263_, v_b_4258_, v___y_4259_, v___y_4260_);
lean_dec(v___y_4260_);
lean_dec_ref(v___y_4259_);
lean_dec_ref(v_as_4255_);
return v_res_4264_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20(lean_object* v_init_4265_, lean_object* v_t_4266_){
_start:
{
lean_object* v___x_4267_; 
v___x_4267_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23(v_init_4265_, v_t_4266_);
return v___x_4267_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20___boxed(lean_object* v_init_4268_, lean_object* v_t_4269_){
_start:
{
lean_object* v_res_4270_; 
v_res_4270_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20(v_init_4268_, v_t_4269_);
lean_dec(v_t_4269_);
return v_res_4270_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21(lean_object* v_n_4271_, lean_object* v_as_4272_, lean_object* v_lo_4273_, lean_object* v_hi_4274_, lean_object* v_w_4275_, lean_object* v_hlo_4276_, lean_object* v_hhi_4277_){
_start:
{
lean_object* v___x_4278_; 
v___x_4278_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg(v_n_4271_, v_as_4272_, v_lo_4273_, v_hi_4274_);
return v___x_4278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___boxed(lean_object* v_n_4279_, lean_object* v_as_4280_, lean_object* v_lo_4281_, lean_object* v_hi_4282_, lean_object* v_w_4283_, lean_object* v_hlo_4284_, lean_object* v_hhi_4285_){
_start:
{
lean_object* v_res_4286_; 
v_res_4286_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21(v_n_4279_, v_as_4280_, v_lo_4281_, v_hi_4282_, v_w_4283_, v_hlo_4284_, v_hhi_4285_);
lean_dec(v_hi_4282_);
lean_dec(v_n_4279_);
return v_res_4286_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22(lean_object* v_init_4287_, lean_object* v_x_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_){
_start:
{
lean_object* v___x_4292_; 
v___x_4292_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(v_init_4287_, v_x_4288_);
return v___x_4292_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___boxed(lean_object* v_init_4293_, lean_object* v_x_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_){
_start:
{
lean_object* v_res_4298_; 
v_res_4298_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22(v_init_4293_, v_x_4294_, v___y_4295_, v___y_4296_);
lean_dec(v___y_4296_);
lean_dec_ref(v___y_4295_);
return v_res_4298_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_4299_, lean_object* v_x_4300_, size_t v_x_4301_, lean_object* v_x_4302_){
_start:
{
lean_object* v___x_4303_; 
v___x_4303_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg(v_x_4300_, v_x_4301_, v_x_4302_);
return v___x_4303_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___boxed(lean_object* v_00_u03b2_4304_, lean_object* v_x_4305_, lean_object* v_x_4306_, lean_object* v_x_4307_){
_start:
{
size_t v_x_18938__boxed_4308_; lean_object* v_res_4309_; 
v_x_18938__boxed_4308_ = lean_unbox_usize(v_x_4306_);
lean_dec(v_x_4306_);
v_res_4309_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6(v_00_u03b2_4304_, v_x_4305_, v_x_18938__boxed_4308_, v_x_4307_);
lean_dec(v_x_4307_);
lean_dec_ref(v_x_4305_);
return v_res_4309_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11(lean_object* v_as_4310_, lean_object* v_k_4311_, lean_object* v_x_4312_, lean_object* v_x_4313_, lean_object* v_x_4314_){
_start:
{
lean_object* v___x_4315_; 
v___x_4315_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg(v_as_4310_, v_k_4311_, v_x_4312_, v_x_4313_);
return v___x_4315_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___boxed(lean_object* v_as_4316_, lean_object* v_k_4317_, lean_object* v_x_4318_, lean_object* v_x_4319_, lean_object* v_x_4320_){
_start:
{
lean_object* v_res_4321_; 
v_res_4321_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11(v_as_4316_, v_k_4317_, v_x_4318_, v_x_4319_, v_x_4320_);
lean_dec_ref(v_k_4317_);
lean_dec_ref(v_as_4316_);
return v_res_4321_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25(lean_object* v_n_4322_, lean_object* v_lo_4323_, lean_object* v_hi_4324_, lean_object* v_hhi_4325_, lean_object* v_pivot_4326_, lean_object* v_as_4327_, lean_object* v_i_4328_, lean_object* v_k_4329_, lean_object* v_ilo_4330_, lean_object* v_ik_4331_, lean_object* v_w_4332_){
_start:
{
lean_object* v___x_4333_; 
v___x_4333_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___redArg(v_hi_4324_, v_pivot_4326_, v_as_4327_, v_i_4328_, v_k_4329_);
return v___x_4333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___boxed(lean_object* v_n_4334_, lean_object* v_lo_4335_, lean_object* v_hi_4336_, lean_object* v_hhi_4337_, lean_object* v_pivot_4338_, lean_object* v_as_4339_, lean_object* v_i_4340_, lean_object* v_k_4341_, lean_object* v_ilo_4342_, lean_object* v_ik_4343_, lean_object* v_w_4344_){
_start:
{
lean_object* v_res_4345_; 
v_res_4345_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25(v_n_4334_, v_lo_4335_, v_hi_4336_, v_hhi_4337_, v_pivot_4338_, v_as_4339_, v_i_4340_, v_k_4341_, v_ilo_4342_, v_ik_4343_, v_w_4344_);
lean_dec(v_hi_4336_);
lean_dec(v_lo_4335_);
lean_dec(v_n_4334_);
return v_res_4345_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15(lean_object* v_00_u03b2_4346_, lean_object* v_keys_4347_, lean_object* v_vals_4348_, lean_object* v_heq_4349_, lean_object* v_i_4350_, lean_object* v_k_4351_){
_start:
{
lean_object* v___x_4352_; 
v___x_4352_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg(v_keys_4347_, v_vals_4348_, v_i_4350_, v_k_4351_);
return v___x_4352_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___boxed(lean_object* v_00_u03b2_4353_, lean_object* v_keys_4354_, lean_object* v_vals_4355_, lean_object* v_heq_4356_, lean_object* v_i_4357_, lean_object* v_k_4358_){
_start:
{
lean_object* v_res_4359_; 
v_res_4359_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15(v_00_u03b2_4353_, v_keys_4354_, v_vals_4355_, v_heq_4356_, v_i_4357_, v_k_4358_);
lean_dec(v_k_4358_);
lean_dec_ref(v_vals_4355_);
lean_dec_ref(v_keys_4354_);
return v_res_4359_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1(){
_start:
{
lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; 
v___x_4374_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_4375_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1));
v___x_4376_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3));
v___x_4377_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_elabPrintTacTags___boxed), 4, 0);
v___x_4378_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4374_, v___x_4375_, v___x_4376_, v___x_4377_);
return v___x_4378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___boxed(lean_object* v_a_4379_){
_start:
{
lean_object* v_res_4380_; 
v_res_4380_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1();
return v_res_4380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3(){
_start:
{
lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; 
v___x_4383_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3));
v___x_4384_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___closed__0));
v___x_4385_ = l_Lean_addBuiltinDocString(v___x_4383_, v___x_4384_);
return v___x_4385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___boxed(lean_object* v_a_4386_){
_start:
{
lean_object* v_res_4387_; 
v_res_4387_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3();
return v_res_4387_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5(){
_start:
{
lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; 
v___x_4414_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3));
v___x_4415_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__6));
v___x_4416_ = l_Lean_addBuiltinDeclarationRanges(v___x_4414_, v___x_4415_);
return v___x_4416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___boxed(lean_object* v_a_4417_){
_start:
{
lean_object* v_res_4418_; 
v_res_4418_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5();
return v_res_4418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0(lean_object* v_env_4419_, lean_object* v___x_4420_, lean_object* v_a_4421_, lean_object* v_a_4422_, uint8_t v_includeUnnamed_4423_, lean_object* v_x_4424_, lean_object* v_____s_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_){
_start:
{
lean_object* v_fst_4431_; lean_object* v___x_4433_; uint8_t v_isShared_4434_; uint8_t v_isSharedCheck_4486_; 
v_fst_4431_ = lean_ctor_get(v_x_4424_, 0);
v_isSharedCheck_4486_ = !lean_is_exclusive(v_x_4424_);
if (v_isSharedCheck_4486_ == 0)
{
lean_object* v_unused_4487_; 
v_unused_4487_ = lean_ctor_get(v_x_4424_, 1);
lean_dec(v_unused_4487_);
v___x_4433_ = v_x_4424_;
v_isShared_4434_ = v_isSharedCheck_4486_;
goto v_resetjp_4432_;
}
else
{
lean_inc(v_fst_4431_);
lean_dec(v_x_4424_);
v___x_4433_ = lean_box(0);
v_isShared_4434_ = v_isSharedCheck_4486_;
goto v_resetjp_4432_;
}
v_resetjp_4432_:
{
lean_object* v_userName_4436_; lean_object* v___y_4437_; lean_object* v___x_4471_; 
lean_inc(v_fst_4431_);
lean_inc_ref(v_env_4419_);
v___x_4471_ = l_Lean_Parser_Tactic_Doc_alternativeOfTactic(v_env_4419_, v_fst_4431_);
if (lean_obj_tag(v___x_4471_) == 1)
{
lean_object* v___x_4473_; uint8_t v_isShared_4474_; uint8_t v_isSharedCheck_4479_; 
lean_del_object(v___x_4433_);
lean_dec(v_fst_4431_);
lean_dec(v___x_4420_);
lean_dec_ref(v_env_4419_);
v_isSharedCheck_4479_ = !lean_is_exclusive(v___x_4471_);
if (v_isSharedCheck_4479_ == 0)
{
lean_object* v_unused_4480_; 
v_unused_4480_ = lean_ctor_get(v___x_4471_, 0);
lean_dec(v_unused_4480_);
v___x_4473_ = v___x_4471_;
v_isShared_4474_ = v_isSharedCheck_4479_;
goto v_resetjp_4472_;
}
else
{
lean_dec(v___x_4471_);
v___x_4473_ = lean_box(0);
v_isShared_4474_ = v_isSharedCheck_4479_;
goto v_resetjp_4472_;
}
v_resetjp_4472_:
{
lean_object* v___x_4476_; 
if (v_isShared_4474_ == 0)
{
lean_ctor_set(v___x_4473_, 0, v_____s_4425_);
v___x_4476_ = v___x_4473_;
goto v_reusejp_4475_;
}
else
{
lean_object* v_reuseFailAlloc_4478_; 
v_reuseFailAlloc_4478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4478_, 0, v_____s_4425_);
v___x_4476_ = v_reuseFailAlloc_4478_;
goto v_reusejp_4475_;
}
v_reusejp_4475_:
{
lean_object* v___x_4477_; 
v___x_4477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4477_, 0, v___x_4476_);
return v___x_4477_;
}
}
}
else
{
lean_object* v___x_4481_; 
lean_dec(v___x_4471_);
v___x_4481_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(v_a_4422_, v_fst_4431_);
if (lean_obj_tag(v___x_4481_) == 1)
{
lean_object* v_val_4482_; 
v_val_4482_ = lean_ctor_get(v___x_4481_, 0);
lean_inc(v_val_4482_);
lean_dec_ref_known(v___x_4481_, 1);
v_userName_4436_ = v_val_4482_;
v___y_4437_ = v___y_4428_;
goto v___jp_4435_;
}
else
{
lean_dec(v___x_4481_);
if (v_includeUnnamed_4423_ == 0)
{
lean_object* v___x_4483_; lean_object* v___x_4484_; 
lean_del_object(v___x_4433_);
lean_dec(v_fst_4431_);
lean_dec(v___x_4420_);
lean_dec_ref(v_env_4419_);
v___x_4483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4483_, 0, v_____s_4425_);
v___x_4484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4484_, 0, v___x_4483_);
return v___x_4484_;
}
else
{
lean_object* v___x_4485_; 
lean_inc(v_fst_4431_);
v___x_4485_ = l_Lean_Name_toString(v_fst_4431_, v_includeUnnamed_4423_);
v_userName_4436_ = v___x_4485_;
v___y_4437_ = v___y_4428_;
goto v___jp_4435_;
}
}
}
v___jp_4435_:
{
lean_object* v_ref_4438_; uint8_t v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; 
v_ref_4438_ = lean_ctor_get(v___y_4437_, 2);
v___x_4439_ = 1;
v___x_4440_ = l_Lean_Options_empty;
v___x_4441_ = lean_box(0);
lean_inc(v_fst_4431_);
lean_inc_ref(v_env_4419_);
v___x_4442_ = l_Lean_findDocString_x3f(v_env_4419_, v_fst_4431_, v___x_4439_, v___x_4440_, v___x_4420_, v___x_4441_);
if (lean_obj_tag(v___x_4442_) == 0)
{
lean_object* v_a_4443_; lean_object* v___x_4445_; uint8_t v_isShared_4446_; uint8_t v_isSharedCheck_4456_; 
lean_del_object(v___x_4433_);
v_a_4443_ = lean_ctor_get(v___x_4442_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v___x_4442_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4445_ = v___x_4442_;
v_isShared_4446_ = v_isSharedCheck_4456_;
goto v_resetjp_4444_;
}
else
{
lean_inc(v_a_4443_);
lean_dec(v___x_4442_);
v___x_4445_ = lean_box(0);
v_isShared_4446_ = v_isSharedCheck_4456_;
goto v_resetjp_4444_;
}
v_resetjp_4444_:
{
lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4454_; 
v___x_4447_ = l_Lean_NameSet_empty;
v___x_4448_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(v_a_4421_, v_fst_4431_, v___x_4447_);
lean_inc(v_fst_4431_);
v___x_4449_ = l_Lean_Parser_Tactic_Doc_getTacticExtensions(v_env_4419_, v_fst_4431_);
v___x_4450_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4450_, 0, v_fst_4431_);
lean_ctor_set(v___x_4450_, 1, v_userName_4436_);
lean_ctor_set(v___x_4450_, 2, v___x_4448_);
lean_ctor_set(v___x_4450_, 3, v_a_4443_);
lean_ctor_set(v___x_4450_, 4, v___x_4449_);
v___x_4451_ = lean_array_push(v_____s_4425_, v___x_4450_);
v___x_4452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4452_, 0, v___x_4451_);
if (v_isShared_4446_ == 0)
{
lean_ctor_set(v___x_4445_, 0, v___x_4452_);
v___x_4454_ = v___x_4445_;
goto v_reusejp_4453_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v___x_4452_);
v___x_4454_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4453_;
}
v_reusejp_4453_:
{
return v___x_4454_;
}
}
}
else
{
lean_object* v_a_4457_; lean_object* v___x_4459_; uint8_t v_isShared_4460_; uint8_t v_isSharedCheck_4470_; 
lean_dec_ref(v_userName_4436_);
lean_dec(v_fst_4431_);
lean_dec_ref(v_____s_4425_);
lean_dec_ref(v_env_4419_);
v_a_4457_ = lean_ctor_get(v___x_4442_, 0);
v_isSharedCheck_4470_ = !lean_is_exclusive(v___x_4442_);
if (v_isSharedCheck_4470_ == 0)
{
v___x_4459_ = v___x_4442_;
v_isShared_4460_ = v_isSharedCheck_4470_;
goto v_resetjp_4458_;
}
else
{
lean_inc(v_a_4457_);
lean_dec(v___x_4442_);
v___x_4459_ = lean_box(0);
v_isShared_4460_ = v_isSharedCheck_4470_;
goto v_resetjp_4458_;
}
v_resetjp_4458_:
{
lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4465_; 
v___x_4461_ = lean_io_error_to_string(v_a_4457_);
v___x_4462_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4462_, 0, v___x_4461_);
v___x_4463_ = l_Lean_MessageData_ofFormat(v___x_4462_);
lean_inc(v_ref_4438_);
if (v_isShared_4434_ == 0)
{
lean_ctor_set(v___x_4433_, 1, v___x_4463_);
lean_ctor_set(v___x_4433_, 0, v_ref_4438_);
v___x_4465_ = v___x_4433_;
goto v_reusejp_4464_;
}
else
{
lean_object* v_reuseFailAlloc_4469_; 
v_reuseFailAlloc_4469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4469_, 0, v_ref_4438_);
lean_ctor_set(v_reuseFailAlloc_4469_, 1, v___x_4463_);
v___x_4465_ = v_reuseFailAlloc_4469_;
goto v_reusejp_4464_;
}
v_reusejp_4464_:
{
lean_object* v___x_4467_; 
if (v_isShared_4460_ == 0)
{
lean_ctor_set(v___x_4459_, 0, v___x_4465_);
v___x_4467_ = v___x_4459_;
goto v_reusejp_4466_;
}
else
{
lean_object* v_reuseFailAlloc_4468_; 
v_reuseFailAlloc_4468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4468_, 0, v___x_4465_);
v___x_4467_ = v_reuseFailAlloc_4468_;
goto v_reusejp_4466_;
}
v_reusejp_4466_:
{
return v___x_4467_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0___boxed(lean_object* v_env_4488_, lean_object* v___x_4489_, lean_object* v_a_4490_, lean_object* v_a_4491_, lean_object* v_includeUnnamed_4492_, lean_object* v_x_4493_, lean_object* v_____s_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_){
_start:
{
uint8_t v_includeUnnamed_boxed_4500_; lean_object* v_res_4501_; 
v_includeUnnamed_boxed_4500_ = lean_unbox(v_includeUnnamed_4492_);
v_res_4501_ = l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0(v_env_4488_, v___x_4489_, v_a_4490_, v_a_4491_, v_includeUnnamed_boxed_4500_, v_x_4493_, v_____s_4494_, v___y_4495_, v___y_4496_, v___y_4497_, v___y_4498_);
lean_dec(v___y_4498_);
lean_dec_ref(v___y_4497_);
lean_dec(v___y_4496_);
lean_dec_ref(v___y_4495_);
lean_dec(v_a_4491_);
lean_dec(v_a_4490_);
return v_res_4501_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg(lean_object* v_as_4502_, size_t v_sz_4503_, size_t v_i_4504_, lean_object* v_b_4505_){
_start:
{
uint8_t v___x_4507_; 
v___x_4507_ = lean_usize_dec_lt(v_i_4504_, v_sz_4503_);
if (v___x_4507_ == 0)
{
lean_object* v___x_4508_; 
v___x_4508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4508_, 0, v_b_4505_);
return v___x_4508_;
}
else
{
lean_object* v_a_4509_; lean_object* v_fst_4510_; lean_object* v_snd_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; size_t v___x_4516_; size_t v___x_4517_; 
v_a_4509_ = lean_array_uget_borrowed(v_as_4502_, v_i_4504_);
v_fst_4510_ = lean_ctor_get(v_a_4509_, 0);
v_snd_4511_ = lean_ctor_get(v_a_4509_, 1);
v___x_4512_ = l_Lean_NameSet_empty;
v___x_4513_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(v_b_4505_, v_fst_4510_, v___x_4512_);
lean_inc(v_snd_4511_);
v___x_4514_ = l_Lean_NameSet_insert(v___x_4513_, v_snd_4511_);
lean_inc(v_fst_4510_);
v___x_4515_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_4510_, v___x_4514_, v_b_4505_);
v___x_4516_ = ((size_t)1ULL);
v___x_4517_ = lean_usize_add(v_i_4504_, v___x_4516_);
v_i_4504_ = v___x_4517_;
v_b_4505_ = v___x_4515_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg___boxed(lean_object* v_as_4519_, lean_object* v_sz_4520_, lean_object* v_i_4521_, lean_object* v_b_4522_, lean_object* v___y_4523_){
_start:
{
size_t v_sz_boxed_4524_; size_t v_i_boxed_4525_; lean_object* v_res_4526_; 
v_sz_boxed_4524_ = lean_unbox_usize(v_sz_4520_);
lean_dec(v_sz_4520_);
v_i_boxed_4525_ = lean_unbox_usize(v_i_4521_);
lean_dec(v_i_4521_);
v_res_4526_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg(v_as_4519_, v_sz_boxed_4524_, v_i_boxed_4525_, v_b_4522_);
lean_dec_ref(v_as_4519_);
return v_res_4526_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1(lean_object* v_as_4527_, size_t v_sz_4528_, size_t v_i_4529_, lean_object* v_b_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_){
_start:
{
uint8_t v___x_4536_; 
v___x_4536_ = lean_usize_dec_lt(v_i_4529_, v_sz_4528_);
if (v___x_4536_ == 0)
{
lean_object* v___x_4537_; 
v___x_4537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4537_, 0, v_b_4530_);
return v___x_4537_;
}
else
{
lean_object* v_a_4538_; size_t v_sz_4539_; size_t v___x_4540_; lean_object* v___x_4541_; 
v_a_4538_ = lean_array_uget_borrowed(v_as_4527_, v_i_4529_);
v_sz_4539_ = lean_array_size(v_a_4538_);
v___x_4540_ = ((size_t)0ULL);
v___x_4541_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg(v_a_4538_, v_sz_4539_, v___x_4540_, v_b_4530_);
if (lean_obj_tag(v___x_4541_) == 0)
{
lean_object* v_a_4542_; size_t v___x_4543_; size_t v___x_4544_; 
v_a_4542_ = lean_ctor_get(v___x_4541_, 0);
lean_inc(v_a_4542_);
lean_dec_ref_known(v___x_4541_, 1);
v___x_4543_ = ((size_t)1ULL);
v___x_4544_ = lean_usize_add(v_i_4529_, v___x_4543_);
v_i_4529_ = v___x_4544_;
v_b_4530_ = v_a_4542_;
goto _start;
}
else
{
return v___x_4541_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1___boxed(lean_object* v_as_4546_, lean_object* v_sz_4547_, lean_object* v_i_4548_, lean_object* v_b_4549_, lean_object* v___y_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_){
_start:
{
size_t v_sz_boxed_4555_; size_t v_i_boxed_4556_; lean_object* v_res_4557_; 
v_sz_boxed_4555_ = lean_unbox_usize(v_sz_4547_);
lean_dec(v_sz_4547_);
v_i_boxed_4556_ = lean_unbox_usize(v_i_4548_);
lean_dec(v_i_4548_);
v_res_4557_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1(v_as_4546_, v_sz_boxed_4555_, v_i_boxed_4556_, v_b_4549_, v___y_4550_, v___y_4551_, v___y_4552_, v___y_4553_);
lean_dec(v___y_4553_);
lean_dec_ref(v___y_4552_);
lean_dec(v___y_4551_);
lean_dec_ref(v___y_4550_);
lean_dec_ref(v_as_4546_);
return v_res_4557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg(lean_object* v_f_4558_, lean_object* v_keys_4559_, lean_object* v_vals_4560_, lean_object* v_i_4561_, lean_object* v_acc_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_){
_start:
{
lean_object* v___x_4568_; uint8_t v___x_4569_; 
v___x_4568_ = lean_array_get_size(v_keys_4559_);
v___x_4569_ = lean_nat_dec_lt(v_i_4561_, v___x_4568_);
if (v___x_4569_ == 0)
{
lean_object* v___x_4570_; lean_object* v___x_4571_; 
lean_dec(v_i_4561_);
lean_dec_ref(v_f_4558_);
v___x_4570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4570_, 0, v_acc_4562_);
v___x_4571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4571_, 0, v___x_4570_);
return v___x_4571_;
}
else
{
lean_object* v_k_4572_; lean_object* v_v_4573_; lean_object* v___x_4574_; 
v_k_4572_ = lean_array_fget_borrowed(v_keys_4559_, v_i_4561_);
v_v_4573_ = lean_array_fget_borrowed(v_vals_4560_, v_i_4561_);
lean_inc_ref(v_f_4558_);
lean_inc(v___y_4566_);
lean_inc_ref(v___y_4565_);
lean_inc(v___y_4564_);
lean_inc_ref(v___y_4563_);
lean_inc(v_v_4573_);
lean_inc(v_k_4572_);
v___x_4574_ = lean_apply_8(v_f_4558_, v_acc_4562_, v_k_4572_, v_v_4573_, v___y_4563_, v___y_4564_, v___y_4565_, v___y_4566_, lean_box(0));
if (lean_obj_tag(v___x_4574_) == 0)
{
lean_object* v_a_4575_; 
v_a_4575_ = lean_ctor_get(v___x_4574_, 0);
lean_inc(v_a_4575_);
if (lean_obj_tag(v_a_4575_) == 0)
{
lean_dec_ref_known(v_a_4575_, 1);
lean_dec(v_i_4561_);
lean_dec_ref(v_f_4558_);
return v___x_4574_;
}
else
{
lean_object* v_a_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; 
lean_dec_ref_known(v___x_4574_, 1);
v_a_4576_ = lean_ctor_get(v_a_4575_, 0);
lean_inc(v_a_4576_);
lean_dec_ref_known(v_a_4575_, 1);
v___x_4577_ = lean_unsigned_to_nat(1u);
v___x_4578_ = lean_nat_add(v_i_4561_, v___x_4577_);
lean_dec(v_i_4561_);
v_i_4561_ = v___x_4578_;
v_acc_4562_ = v_a_4576_;
goto _start;
}
}
else
{
lean_dec(v_i_4561_);
lean_dec_ref(v_f_4558_);
return v___x_4574_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg___boxed(lean_object* v_f_4580_, lean_object* v_keys_4581_, lean_object* v_vals_4582_, lean_object* v_i_4583_, lean_object* v_acc_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_){
_start:
{
lean_object* v_res_4590_; 
v_res_4590_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg(v_f_4580_, v_keys_4581_, v_vals_4582_, v_i_4583_, v_acc_4584_, v___y_4585_, v___y_4586_, v___y_4587_, v___y_4588_);
lean_dec(v___y_4588_);
lean_dec_ref(v___y_4587_);
lean_dec(v___y_4586_);
lean_dec_ref(v___y_4585_);
lean_dec_ref(v_vals_4582_);
lean_dec_ref(v_keys_4581_);
return v_res_4590_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(lean_object* v_f_4591_, lean_object* v_as_4592_, size_t v_i_4593_, size_t v_stop_4594_, lean_object* v_b_4595_, lean_object* v___y_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_){
_start:
{
lean_object* v_a_4602_; lean_object* v___y_4607_; uint8_t v___x_4610_; 
v___x_4610_ = lean_usize_dec_eq(v_i_4593_, v_stop_4594_);
if (v___x_4610_ == 0)
{
lean_object* v___x_4611_; 
v___x_4611_ = lean_array_uget_borrowed(v_as_4592_, v_i_4593_);
switch(lean_obj_tag(v___x_4611_))
{
case 0:
{
lean_object* v_key_4612_; lean_object* v_val_4613_; lean_object* v___x_4614_; 
v_key_4612_ = lean_ctor_get(v___x_4611_, 0);
v_val_4613_ = lean_ctor_get(v___x_4611_, 1);
lean_inc_ref(v_f_4591_);
lean_inc(v___y_4599_);
lean_inc_ref(v___y_4598_);
lean_inc(v___y_4597_);
lean_inc_ref(v___y_4596_);
lean_inc(v_val_4613_);
lean_inc(v_key_4612_);
v___x_4614_ = lean_apply_8(v_f_4591_, v_b_4595_, v_key_4612_, v_val_4613_, v___y_4596_, v___y_4597_, v___y_4598_, v___y_4599_, lean_box(0));
v___y_4607_ = v___x_4614_;
goto v___jp_4606_;
}
case 1:
{
lean_object* v_node_4615_; lean_object* v___x_4616_; 
v_node_4615_ = lean_ctor_get(v___x_4611_, 0);
lean_inc(v_node_4615_);
lean_inc_ref(v_f_4591_);
v___x_4616_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v_f_4591_, v_node_4615_, v_b_4595_, v___y_4596_, v___y_4597_, v___y_4598_, v___y_4599_);
v___y_4607_ = v___x_4616_;
goto v___jp_4606_;
}
default: 
{
v_a_4602_ = v_b_4595_;
goto v___jp_4601_;
}
}
}
else
{
lean_object* v___x_4617_; lean_object* v___x_4618_; 
lean_dec_ref(v_f_4591_);
v___x_4617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4617_, 0, v_b_4595_);
v___x_4618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4618_, 0, v___x_4617_);
return v___x_4618_;
}
v___jp_4601_:
{
size_t v___x_4603_; size_t v___x_4604_; 
v___x_4603_ = ((size_t)1ULL);
v___x_4604_ = lean_usize_add(v_i_4593_, v___x_4603_);
v_i_4593_ = v___x_4604_;
v_b_4595_ = v_a_4602_;
goto _start;
}
v___jp_4606_:
{
if (lean_obj_tag(v___y_4607_) == 0)
{
lean_object* v_a_4608_; 
v_a_4608_ = lean_ctor_get(v___y_4607_, 0);
if (lean_obj_tag(v_a_4608_) == 0)
{
lean_dec_ref(v_f_4591_);
return v___y_4607_;
}
else
{
lean_object* v_a_4609_; 
lean_inc_ref(v_a_4608_);
lean_dec_ref_known(v___y_4607_, 1);
v_a_4609_ = lean_ctor_get(v_a_4608_, 0);
lean_inc(v_a_4609_);
lean_dec_ref_known(v_a_4608_, 1);
v_a_4602_ = v_a_4609_;
goto v___jp_4601_;
}
}
else
{
lean_dec_ref(v_f_4591_);
return v___y_4607_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(lean_object* v_f_4619_, lean_object* v_x_4620_, lean_object* v_x_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_){
_start:
{
if (lean_obj_tag(v_x_4620_) == 0)
{
lean_object* v_es_4627_; lean_object* v___x_4629_; uint8_t v_isShared_4630_; uint8_t v_isSharedCheck_4641_; 
v_es_4627_ = lean_ctor_get(v_x_4620_, 0);
v_isSharedCheck_4641_ = !lean_is_exclusive(v_x_4620_);
if (v_isSharedCheck_4641_ == 0)
{
v___x_4629_ = v_x_4620_;
v_isShared_4630_ = v_isSharedCheck_4641_;
goto v_resetjp_4628_;
}
else
{
lean_inc(v_es_4627_);
lean_dec(v_x_4620_);
v___x_4629_ = lean_box(0);
v_isShared_4630_ = v_isSharedCheck_4641_;
goto v_resetjp_4628_;
}
v_resetjp_4628_:
{
lean_object* v___x_4631_; lean_object* v___x_4632_; uint8_t v___x_4633_; 
v___x_4631_ = lean_unsigned_to_nat(0u);
v___x_4632_ = lean_array_get_size(v_es_4627_);
v___x_4633_ = lean_nat_dec_lt(v___x_4631_, v___x_4632_);
if (v___x_4633_ == 0)
{
lean_object* v___x_4635_; 
lean_dec_ref(v_es_4627_);
lean_dec_ref(v_f_4619_);
if (v_isShared_4630_ == 0)
{
lean_ctor_set_tag(v___x_4629_, 1);
lean_ctor_set(v___x_4629_, 0, v_x_4621_);
v___x_4635_ = v___x_4629_;
goto v_reusejp_4634_;
}
else
{
lean_object* v_reuseFailAlloc_4637_; 
v_reuseFailAlloc_4637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4637_, 0, v_x_4621_);
v___x_4635_ = v_reuseFailAlloc_4637_;
goto v_reusejp_4634_;
}
v_reusejp_4634_:
{
lean_object* v___x_4636_; 
v___x_4636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4636_, 0, v___x_4635_);
return v___x_4636_;
}
}
else
{
size_t v___x_4638_; size_t v___x_4639_; lean_object* v___x_4640_; 
lean_del_object(v___x_4629_);
v___x_4638_ = ((size_t)0ULL);
v___x_4639_ = lean_usize_of_nat(v___x_4632_);
v___x_4640_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(v_f_4619_, v_es_4627_, v___x_4638_, v___x_4639_, v_x_4621_, v___y_4622_, v___y_4623_, v___y_4624_, v___y_4625_);
lean_dec_ref(v_es_4627_);
return v___x_4640_;
}
}
}
else
{
lean_object* v_ks_4642_; lean_object* v_vs_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; 
v_ks_4642_ = lean_ctor_get(v_x_4620_, 0);
lean_inc_ref(v_ks_4642_);
v_vs_4643_ = lean_ctor_get(v_x_4620_, 1);
lean_inc_ref(v_vs_4643_);
lean_dec_ref_known(v_x_4620_, 2);
v___x_4644_ = lean_unsigned_to_nat(0u);
v___x_4645_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg(v_f_4619_, v_ks_4642_, v_vs_4643_, v___x_4644_, v_x_4621_, v___y_4622_, v___y_4623_, v___y_4624_, v___y_4625_);
lean_dec_ref(v_vs_4643_);
lean_dec_ref(v_ks_4642_);
return v___x_4645_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg___boxed(lean_object* v_f_4646_, lean_object* v_x_4647_, lean_object* v_x_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_, lean_object* v___y_4652_, lean_object* v___y_4653_){
_start:
{
lean_object* v_res_4654_; 
v_res_4654_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v_f_4646_, v_x_4647_, v_x_4648_, v___y_4649_, v___y_4650_, v___y_4651_, v___y_4652_);
lean_dec(v___y_4652_);
lean_dec_ref(v___y_4651_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
return v_res_4654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg___boxed(lean_object* v_f_4655_, lean_object* v_as_4656_, lean_object* v_i_4657_, lean_object* v_stop_4658_, lean_object* v_b_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_, lean_object* v___y_4664_){
_start:
{
size_t v_i_boxed_4665_; size_t v_stop_boxed_4666_; lean_object* v_res_4667_; 
v_i_boxed_4665_ = lean_unbox_usize(v_i_4657_);
lean_dec(v_i_4657_);
v_stop_boxed_4666_ = lean_unbox_usize(v_stop_4658_);
lean_dec(v_stop_4658_);
v_res_4667_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(v_f_4655_, v_as_4656_, v_i_boxed_4665_, v_stop_boxed_4666_, v_b_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_);
lean_dec(v___y_4663_);
lean_dec_ref(v___y_4662_);
lean_dec(v___y_4661_);
lean_dec_ref(v___y_4660_);
lean_dec_ref(v_as_4656_);
return v_res_4667_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0(lean_object* v_f_4668_, lean_object* v_s_4669_, lean_object* v_a_4670_, lean_object* v_b_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_, lean_object* v___y_4675_){
_start:
{
lean_object* v___x_4677_; lean_object* v___x_4678_; 
v___x_4677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4677_, 0, v_a_4670_);
lean_ctor_set(v___x_4677_, 1, v_b_4671_);
lean_inc(v___y_4675_);
lean_inc_ref(v___y_4674_);
lean_inc(v___y_4673_);
lean_inc_ref(v___y_4672_);
v___x_4678_ = lean_apply_7(v_f_4668_, v___x_4677_, v_s_4669_, v___y_4672_, v___y_4673_, v___y_4674_, v___y_4675_, lean_box(0));
if (lean_obj_tag(v___x_4678_) == 0)
{
lean_object* v_a_4679_; lean_object* v___x_4681_; uint8_t v_isShared_4682_; uint8_t v_isSharedCheck_4705_; 
v_a_4679_ = lean_ctor_get(v___x_4678_, 0);
v_isSharedCheck_4705_ = !lean_is_exclusive(v___x_4678_);
if (v_isSharedCheck_4705_ == 0)
{
v___x_4681_ = v___x_4678_;
v_isShared_4682_ = v_isSharedCheck_4705_;
goto v_resetjp_4680_;
}
else
{
lean_inc(v_a_4679_);
lean_dec(v___x_4678_);
v___x_4681_ = lean_box(0);
v_isShared_4682_ = v_isSharedCheck_4705_;
goto v_resetjp_4680_;
}
v_resetjp_4680_:
{
if (lean_obj_tag(v_a_4679_) == 0)
{
lean_object* v_a_4683_; lean_object* v___x_4685_; uint8_t v_isShared_4686_; uint8_t v_isSharedCheck_4693_; 
v_a_4683_ = lean_ctor_get(v_a_4679_, 0);
v_isSharedCheck_4693_ = !lean_is_exclusive(v_a_4679_);
if (v_isSharedCheck_4693_ == 0)
{
v___x_4685_ = v_a_4679_;
v_isShared_4686_ = v_isSharedCheck_4693_;
goto v_resetjp_4684_;
}
else
{
lean_inc(v_a_4683_);
lean_dec(v_a_4679_);
v___x_4685_ = lean_box(0);
v_isShared_4686_ = v_isSharedCheck_4693_;
goto v_resetjp_4684_;
}
v_resetjp_4684_:
{
lean_object* v___x_4688_; 
if (v_isShared_4686_ == 0)
{
v___x_4688_ = v___x_4685_;
goto v_reusejp_4687_;
}
else
{
lean_object* v_reuseFailAlloc_4692_; 
v_reuseFailAlloc_4692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4692_, 0, v_a_4683_);
v___x_4688_ = v_reuseFailAlloc_4692_;
goto v_reusejp_4687_;
}
v_reusejp_4687_:
{
lean_object* v___x_4690_; 
if (v_isShared_4682_ == 0)
{
lean_ctor_set(v___x_4681_, 0, v___x_4688_);
v___x_4690_ = v___x_4681_;
goto v_reusejp_4689_;
}
else
{
lean_object* v_reuseFailAlloc_4691_; 
v_reuseFailAlloc_4691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4691_, 0, v___x_4688_);
v___x_4690_ = v_reuseFailAlloc_4691_;
goto v_reusejp_4689_;
}
v_reusejp_4689_:
{
return v___x_4690_;
}
}
}
}
else
{
lean_object* v_a_4694_; lean_object* v___x_4696_; uint8_t v_isShared_4697_; uint8_t v_isSharedCheck_4704_; 
v_a_4694_ = lean_ctor_get(v_a_4679_, 0);
v_isSharedCheck_4704_ = !lean_is_exclusive(v_a_4679_);
if (v_isSharedCheck_4704_ == 0)
{
v___x_4696_ = v_a_4679_;
v_isShared_4697_ = v_isSharedCheck_4704_;
goto v_resetjp_4695_;
}
else
{
lean_inc(v_a_4694_);
lean_dec(v_a_4679_);
v___x_4696_ = lean_box(0);
v_isShared_4697_ = v_isSharedCheck_4704_;
goto v_resetjp_4695_;
}
v_resetjp_4695_:
{
lean_object* v___x_4699_; 
if (v_isShared_4697_ == 0)
{
v___x_4699_ = v___x_4696_;
goto v_reusejp_4698_;
}
else
{
lean_object* v_reuseFailAlloc_4703_; 
v_reuseFailAlloc_4703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4703_, 0, v_a_4694_);
v___x_4699_ = v_reuseFailAlloc_4703_;
goto v_reusejp_4698_;
}
v_reusejp_4698_:
{
lean_object* v___x_4701_; 
if (v_isShared_4682_ == 0)
{
lean_ctor_set(v___x_4681_, 0, v___x_4699_);
v___x_4701_ = v___x_4681_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v___x_4699_);
v___x_4701_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
return v___x_4701_;
}
}
}
}
}
}
else
{
lean_object* v_a_4706_; lean_object* v___x_4708_; uint8_t v_isShared_4709_; uint8_t v_isSharedCheck_4713_; 
v_a_4706_ = lean_ctor_get(v___x_4678_, 0);
v_isSharedCheck_4713_ = !lean_is_exclusive(v___x_4678_);
if (v_isSharedCheck_4713_ == 0)
{
v___x_4708_ = v___x_4678_;
v_isShared_4709_ = v_isSharedCheck_4713_;
goto v_resetjp_4707_;
}
else
{
lean_inc(v_a_4706_);
lean_dec(v___x_4678_);
v___x_4708_ = lean_box(0);
v_isShared_4709_ = v_isSharedCheck_4713_;
goto v_resetjp_4707_;
}
v_resetjp_4707_:
{
lean_object* v___x_4711_; 
if (v_isShared_4709_ == 0)
{
v___x_4711_ = v___x_4708_;
goto v_reusejp_4710_;
}
else
{
lean_object* v_reuseFailAlloc_4712_; 
v_reuseFailAlloc_4712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4712_, 0, v_a_4706_);
v___x_4711_ = v_reuseFailAlloc_4712_;
goto v_reusejp_4710_;
}
v_reusejp_4710_:
{
return v___x_4711_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0___boxed(lean_object* v_f_4714_, lean_object* v_s_4715_, lean_object* v_a_4716_, lean_object* v_b_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_){
_start:
{
lean_object* v_res_4723_; 
v_res_4723_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0(v_f_4714_, v_s_4715_, v_a_4716_, v_b_4717_, v___y_4718_, v___y_4719_, v___y_4720_, v___y_4721_);
lean_dec(v___y_4721_);
lean_dec_ref(v___y_4720_);
lean_dec(v___y_4719_);
lean_dec_ref(v___y_4718_);
return v_res_4723_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg(lean_object* v_map_4724_, lean_object* v_init_4725_, lean_object* v_f_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_, lean_object* v___y_4729_, lean_object* v___y_4730_){
_start:
{
lean_object* v___f_4732_; lean_object* v___x_4733_; 
v___f_4732_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_4732_, 0, v_f_4726_);
lean_inc_ref(v_map_4724_);
v___x_4733_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v___f_4732_, v_map_4724_, v_init_4725_, v___y_4727_, v___y_4728_, v___y_4729_, v___y_4730_);
if (lean_obj_tag(v___x_4733_) == 0)
{
lean_object* v_a_4734_; lean_object* v___x_4736_; uint8_t v_isShared_4737_; uint8_t v_isSharedCheck_4742_; 
v_a_4734_ = lean_ctor_get(v___x_4733_, 0);
v_isSharedCheck_4742_ = !lean_is_exclusive(v___x_4733_);
if (v_isSharedCheck_4742_ == 0)
{
v___x_4736_ = v___x_4733_;
v_isShared_4737_ = v_isSharedCheck_4742_;
goto v_resetjp_4735_;
}
else
{
lean_inc(v_a_4734_);
lean_dec(v___x_4733_);
v___x_4736_ = lean_box(0);
v_isShared_4737_ = v_isSharedCheck_4742_;
goto v_resetjp_4735_;
}
v_resetjp_4735_:
{
lean_object* v_a_4738_; lean_object* v___x_4740_; 
v_a_4738_ = lean_ctor_get(v_a_4734_, 0);
lean_inc(v_a_4738_);
lean_dec(v_a_4734_);
if (v_isShared_4737_ == 0)
{
lean_ctor_set(v___x_4736_, 0, v_a_4738_);
v___x_4740_ = v___x_4736_;
goto v_reusejp_4739_;
}
else
{
lean_object* v_reuseFailAlloc_4741_; 
v_reuseFailAlloc_4741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4741_, 0, v_a_4738_);
v___x_4740_ = v_reuseFailAlloc_4741_;
goto v_reusejp_4739_;
}
v_reusejp_4739_:
{
return v___x_4740_;
}
}
}
else
{
lean_object* v_a_4743_; lean_object* v___x_4745_; uint8_t v_isShared_4746_; uint8_t v_isSharedCheck_4750_; 
v_a_4743_ = lean_ctor_get(v___x_4733_, 0);
v_isSharedCheck_4750_ = !lean_is_exclusive(v___x_4733_);
if (v_isSharedCheck_4750_ == 0)
{
v___x_4745_ = v___x_4733_;
v_isShared_4746_ = v_isSharedCheck_4750_;
goto v_resetjp_4744_;
}
else
{
lean_inc(v_a_4743_);
lean_dec(v___x_4733_);
v___x_4745_ = lean_box(0);
v_isShared_4746_ = v_isSharedCheck_4750_;
goto v_resetjp_4744_;
}
v_resetjp_4744_:
{
lean_object* v___x_4748_; 
if (v_isShared_4746_ == 0)
{
v___x_4748_ = v___x_4745_;
goto v_reusejp_4747_;
}
else
{
lean_object* v_reuseFailAlloc_4749_; 
v_reuseFailAlloc_4749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4749_, 0, v_a_4743_);
v___x_4748_ = v_reuseFailAlloc_4749_;
goto v_reusejp_4747_;
}
v_reusejp_4747_:
{
return v___x_4748_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___boxed(lean_object* v_map_4751_, lean_object* v_init_4752_, lean_object* v_f_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_){
_start:
{
lean_object* v_res_4759_; 
v_res_4759_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg(v_map_4751_, v_init_4752_, v_f_4753_, v___y_4754_, v___y_4755_, v___y_4756_, v___y_4757_);
lean_dec(v___y_4757_);
lean_dec_ref(v___y_4756_);
lean_dec(v___y_4755_);
lean_dec_ref(v___y_4754_);
lean_dec_ref(v_map_4751_);
return v_res_4759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg(lean_object* v___y_4760_){
_start:
{
lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v_env_4766_; lean_object* v___x_4767_; lean_object* v_ext_4768_; lean_object* v_toEnvExtension_4769_; lean_object* v_asyncMode_4770_; uint8_t v___x_4771_; lean_object* v___x_4772_; lean_object* v_categories_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; 
v___x_4762_ = lean_box(1);
v___x_4763_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2);
v___x_4764_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_4765_ = lean_st_ref_get(v___y_4760_);
v_env_4766_ = lean_ctor_get(v___x_4765_, 0);
lean_inc_ref_n(v_env_4766_, 2);
lean_dec(v___x_4765_);
v___x_4767_ = l_Lean_Parser_parserExtension;
v_ext_4768_ = lean_ctor_get(v___x_4767_, 1);
v_toEnvExtension_4769_ = lean_ctor_get(v_ext_4768_, 0);
v_asyncMode_4770_ = lean_ctor_get(v_toEnvExtension_4769_, 2);
v___x_4771_ = 0;
v___x_4772_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_4764_, v___x_4767_, v_env_4766_, v_asyncMode_4770_, v___x_4771_);
v_categories_4773_ = lean_ctor_get(v___x_4772_, 2);
lean_inc_ref(v_categories_4773_);
lean_dec(v___x_4772_);
v___x_4774_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1));
v___x_4775_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_categories_4773_, v___x_4774_);
lean_dec_ref(v_categories_4773_);
if (lean_obj_tag(v___x_4775_) == 1)
{
lean_object* v_val_4776_; lean_object* v___x_4778_; uint8_t v_isShared_4779_; uint8_t v_isSharedCheck_4807_; 
v_val_4776_ = lean_ctor_get(v___x_4775_, 0);
v_isSharedCheck_4807_ = !lean_is_exclusive(v___x_4775_);
if (v_isSharedCheck_4807_ == 0)
{
v___x_4778_ = v___x_4775_;
v_isShared_4779_ = v_isSharedCheck_4807_;
goto v_resetjp_4777_;
}
else
{
lean_inc(v_val_4776_);
lean_dec(v___x_4775_);
v___x_4778_ = lean_box(0);
v_isShared_4779_ = v_isSharedCheck_4807_;
goto v_resetjp_4777_;
}
v_resetjp_4777_:
{
lean_object* v___y_4781_; lean_object* v___x_4790_; lean_object* v_toEnvExtension_4791_; lean_object* v_exportEntriesFn_4792_; lean_object* v_asyncMode_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v_importedEntries_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v_exported_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; uint8_t v___x_4803_; 
v___x_4790_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_4791_ = lean_ctor_get(v___x_4790_, 0);
v_exportEntriesFn_4792_ = lean_ctor_get(v___x_4790_, 4);
v_asyncMode_4793_ = lean_ctor_get(v_toEnvExtension_4791_, 2);
v___x_4794_ = lean_box(0);
lean_inc_ref_n(v_env_4766_, 2);
v___x_4795_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_4763_, v_toEnvExtension_4791_, v_env_4766_, v_asyncMode_4793_, v___x_4794_, v___x_4771_);
v_importedEntries_4796_ = lean_ctor_get(v___x_4795_, 0);
lean_inc_ref(v_importedEntries_4796_);
lean_dec(v___x_4795_);
v___x_4797_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4762_, v___x_4790_, v_env_4766_, v_asyncMode_4793_, v___x_4794_, v___x_4771_);
lean_inc_ref(v_exportEntriesFn_4792_);
v___x_4798_ = lean_apply_2(v_exportEntriesFn_4792_, v_env_4766_, v___x_4797_);
v_exported_4799_ = lean_ctor_get(v___x_4798_, 0);
lean_inc(v_exported_4799_);
lean_dec_ref(v___x_4798_);
v___x_4800_ = lean_array_push(v_importedEntries_4796_, v_exported_4799_);
v___x_4801_ = lean_unsigned_to_nat(0u);
v___x_4802_ = lean_array_get_size(v___x_4800_);
v___x_4803_ = lean_nat_dec_lt(v___x_4801_, v___x_4802_);
if (v___x_4803_ == 0)
{
lean_dec_ref(v___x_4800_);
v___y_4781_ = v___x_4762_;
goto v___jp_4780_;
}
else
{
size_t v___x_4804_; size_t v___x_4805_; lean_object* v___x_4806_; 
v___x_4804_ = ((size_t)0ULL);
v___x_4805_ = lean_usize_of_nat(v___x_4802_);
v___x_4806_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(v___x_4800_, v___x_4804_, v___x_4805_, v___x_4762_);
lean_dec_ref(v___x_4800_);
v___y_4781_ = v___x_4806_;
goto v___jp_4780_;
}
v___jp_4780_:
{
lean_object* v_tables_4782_; lean_object* v_leadingTable_4783_; lean_object* v_trailingTable_4784_; lean_object* v_firstTokens_4785_; lean_object* v_firstTokens_4786_; lean_object* v___x_4788_; 
v_tables_4782_ = lean_ctor_get(v_val_4776_, 2);
v_leadingTable_4783_ = lean_ctor_get(v_tables_4782_, 0);
v_trailingTable_4784_ = lean_ctor_get(v_tables_4782_, 2);
lean_inc(v_trailingTable_4784_);
lean_inc(v_leadingTable_4783_);
lean_inc(v_val_4776_);
v_firstTokens_4785_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_4776_, v_leadingTable_4783_, v___y_4781_);
v_firstTokens_4786_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_4776_, v_trailingTable_4784_, v_firstTokens_4785_);
if (v_isShared_4779_ == 0)
{
lean_ctor_set_tag(v___x_4778_, 0);
lean_ctor_set(v___x_4778_, 0, v_firstTokens_4786_);
v___x_4788_ = v___x_4778_;
goto v_reusejp_4787_;
}
else
{
lean_object* v_reuseFailAlloc_4789_; 
v_reuseFailAlloc_4789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4789_, 0, v_firstTokens_4786_);
v___x_4788_ = v_reuseFailAlloc_4789_;
goto v_reusejp_4787_;
}
v_reusejp_4787_:
{
return v___x_4788_;
}
}
}
}
else
{
lean_object* v___x_4808_; 
lean_dec(v___x_4775_);
lean_dec_ref(v_env_4766_);
v___x_4808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4808_, 0, v___x_4762_);
return v___x_4808_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg___boxed(lean_object* v___y_4809_, lean_object* v___y_4810_){
_start:
{
lean_object* v_res_4811_; 
v_res_4811_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg(v___y_4809_);
lean_dec(v___y_4809_);
return v_res_4811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs(uint8_t v_includeUnnamed_4814_, lean_object* v_a_4815_, lean_object* v_a_4816_, lean_object* v_a_4817_, lean_object* v_a_4818_){
_start:
{
lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v_env_4824_; lean_object* v___x_4825_; lean_object* v_toEnvExtension_4826_; lean_object* v_exportEntriesFn_4827_; lean_object* v_asyncMode_4828_; lean_object* v___x_4829_; uint8_t v___x_4830_; lean_object* v___x_4831_; lean_object* v_importedEntries_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v_exported_4835_; lean_object* v___x_4836_; size_t v_sz_4837_; size_t v___x_4838_; lean_object* v___x_4839_; 
v___x_4820_ = lean_box(1);
v___x_4821_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2);
v___x_4822_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_4823_ = lean_st_ref_get(v_a_4818_);
v_env_4824_ = lean_ctor_get(v___x_4823_, 0);
lean_inc_ref_n(v_env_4824_, 4);
lean_dec(v___x_4823_);
v___x_4825_ = l_Lean_Parser_Tactic_Doc_tacticTagExt;
v_toEnvExtension_4826_ = lean_ctor_get(v___x_4825_, 0);
v_exportEntriesFn_4827_ = lean_ctor_get(v___x_4825_, 4);
v_asyncMode_4828_ = lean_ctor_get(v_toEnvExtension_4826_, 2);
v___x_4829_ = lean_box(0);
v___x_4830_ = 0;
v___x_4831_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_4821_, v_toEnvExtension_4826_, v_env_4824_, v_asyncMode_4828_, v___x_4829_, v___x_4830_);
v_importedEntries_4832_ = lean_ctor_get(v___x_4831_, 0);
lean_inc_ref(v_importedEntries_4832_);
lean_dec(v___x_4831_);
v___x_4833_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4820_, v___x_4825_, v_env_4824_, v_asyncMode_4828_, v___x_4829_, v___x_4830_);
lean_inc_ref(v_exportEntriesFn_4827_);
v___x_4834_ = lean_apply_2(v_exportEntriesFn_4827_, v_env_4824_, v___x_4833_);
v_exported_4835_ = lean_ctor_get(v___x_4834_, 0);
lean_inc(v_exported_4835_);
lean_dec_ref(v___x_4834_);
v___x_4836_ = lean_array_push(v_importedEntries_4832_, v_exported_4835_);
v_sz_4837_ = lean_array_size(v___x_4836_);
v___x_4838_ = ((size_t)0ULL);
v___x_4839_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1(v___x_4836_, v_sz_4837_, v___x_4838_, v___x_4820_, v_a_4815_, v_a_4816_, v_a_4817_, v_a_4818_);
lean_dec_ref(v___x_4836_);
if (lean_obj_tag(v___x_4839_) == 0)
{
lean_object* v_a_4840_; lean_object* v___x_4842_; uint8_t v_isShared_4843_; uint8_t v_isSharedCheck_4863_; 
v_a_4840_ = lean_ctor_get(v___x_4839_, 0);
v_isSharedCheck_4863_ = !lean_is_exclusive(v___x_4839_);
if (v_isSharedCheck_4863_ == 0)
{
v___x_4842_ = v___x_4839_;
v_isShared_4843_ = v_isSharedCheck_4863_;
goto v_resetjp_4841_;
}
else
{
lean_inc(v_a_4840_);
lean_dec(v___x_4839_);
v___x_4842_ = lean_box(0);
v_isShared_4843_ = v_isSharedCheck_4863_;
goto v_resetjp_4841_;
}
v_resetjp_4841_:
{
lean_object* v___x_4844_; lean_object* v_ext_4845_; lean_object* v_toEnvExtension_4846_; lean_object* v_asyncMode_4847_; lean_object* v___x_4848_; lean_object* v_categories_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; 
v___x_4844_ = l_Lean_Parser_parserExtension;
v_ext_4845_ = lean_ctor_get(v___x_4844_, 1);
v_toEnvExtension_4846_ = lean_ctor_get(v_ext_4845_, 0);
v_asyncMode_4847_ = lean_ctor_get(v_toEnvExtension_4846_, 2);
lean_inc_ref(v_env_4824_);
v___x_4848_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_4822_, v___x_4844_, v_env_4824_, v_asyncMode_4847_, v___x_4830_);
v_categories_4849_ = lean_ctor_get(v___x_4848_, 2);
lean_inc_ref(v_categories_4849_);
lean_dec(v___x_4848_);
v___x_4850_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_allTacticDocs___closed__0));
v___x_4851_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1));
v___x_4852_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_categories_4849_, v___x_4851_);
lean_dec_ref(v_categories_4849_);
if (lean_obj_tag(v___x_4852_) == 1)
{
lean_object* v_val_4853_; lean_object* v___x_4854_; lean_object* v_a_4855_; lean_object* v_kinds_4856_; lean_object* v___x_4857_; lean_object* v___f_4858_; lean_object* v___x_4859_; 
lean_del_object(v___x_4842_);
v_val_4853_ = lean_ctor_get(v___x_4852_, 0);
lean_inc(v_val_4853_);
lean_dec_ref_known(v___x_4852_, 1);
v___x_4854_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg(v_a_4818_);
v_a_4855_ = lean_ctor_get(v___x_4854_, 0);
lean_inc(v_a_4855_);
lean_dec_ref(v___x_4854_);
v_kinds_4856_ = lean_ctor_get(v_val_4853_, 1);
lean_inc_ref(v_kinds_4856_);
lean_dec(v_val_4853_);
v___x_4857_ = lean_box(v_includeUnnamed_4814_);
v___f_4858_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0___boxed), 12, 5);
lean_closure_set(v___f_4858_, 0, v_env_4824_);
lean_closure_set(v___f_4858_, 1, v___x_4829_);
lean_closure_set(v___f_4858_, 2, v_a_4840_);
lean_closure_set(v___f_4858_, 3, v_a_4855_);
lean_closure_set(v___f_4858_, 4, v___x_4857_);
v___x_4859_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg(v_kinds_4856_, v___x_4850_, v___f_4858_, v_a_4815_, v_a_4816_, v_a_4817_, v_a_4818_);
lean_dec_ref(v_kinds_4856_);
return v___x_4859_;
}
else
{
lean_object* v___x_4861_; 
lean_dec(v___x_4852_);
lean_dec(v_a_4840_);
lean_dec_ref(v_env_4824_);
if (v_isShared_4843_ == 0)
{
lean_ctor_set(v___x_4842_, 0, v___x_4850_);
v___x_4861_ = v___x_4842_;
goto v_reusejp_4860_;
}
else
{
lean_object* v_reuseFailAlloc_4862_; 
v_reuseFailAlloc_4862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4862_, 0, v___x_4850_);
v___x_4861_ = v_reuseFailAlloc_4862_;
goto v_reusejp_4860_;
}
v_reusejp_4860_:
{
return v___x_4861_;
}
}
}
}
else
{
lean_object* v_a_4864_; lean_object* v___x_4866_; uint8_t v_isShared_4867_; uint8_t v_isSharedCheck_4871_; 
lean_dec_ref(v_env_4824_);
v_a_4864_ = lean_ctor_get(v___x_4839_, 0);
v_isSharedCheck_4871_ = !lean_is_exclusive(v___x_4839_);
if (v_isSharedCheck_4871_ == 0)
{
v___x_4866_ = v___x_4839_;
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
else
{
lean_inc(v_a_4864_);
lean_dec(v___x_4839_);
v___x_4866_ = lean_box(0);
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
v_resetjp_4865_:
{
lean_object* v___x_4869_; 
if (v_isShared_4867_ == 0)
{
v___x_4869_ = v___x_4866_;
goto v_reusejp_4868_;
}
else
{
lean_object* v_reuseFailAlloc_4870_; 
v_reuseFailAlloc_4870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4870_, 0, v_a_4864_);
v___x_4869_ = v_reuseFailAlloc_4870_;
goto v_reusejp_4868_;
}
v_reusejp_4868_:
{
return v___x_4869_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___boxed(lean_object* v_includeUnnamed_4872_, lean_object* v_a_4873_, lean_object* v_a_4874_, lean_object* v_a_4875_, lean_object* v_a_4876_, lean_object* v_a_4877_){
_start:
{
uint8_t v_includeUnnamed_boxed_4878_; lean_object* v_res_4879_; 
v_includeUnnamed_boxed_4878_ = lean_unbox(v_includeUnnamed_4872_);
v_res_4879_ = l_Lean_Elab_Tactic_Doc_allTacticDocs(v_includeUnnamed_boxed_4878_, v_a_4873_, v_a_4874_, v_a_4875_, v_a_4876_);
lean_dec(v_a_4876_);
lean_dec_ref(v_a_4875_);
lean_dec(v_a_4874_);
lean_dec_ref(v_a_4873_);
return v_res_4879_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0(lean_object* v_as_4880_, size_t v_sz_4881_, size_t v_i_4882_, lean_object* v_b_4883_, lean_object* v___y_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_){
_start:
{
lean_object* v___x_4889_; 
v___x_4889_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg(v_as_4880_, v_sz_4881_, v_i_4882_, v_b_4883_);
return v___x_4889_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___boxed(lean_object* v_as_4890_, lean_object* v_sz_4891_, lean_object* v_i_4892_, lean_object* v_b_4893_, lean_object* v___y_4894_, lean_object* v___y_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_, lean_object* v___y_4898_){
_start:
{
size_t v_sz_boxed_4899_; size_t v_i_boxed_4900_; lean_object* v_res_4901_; 
v_sz_boxed_4899_ = lean_unbox_usize(v_sz_4891_);
lean_dec(v_sz_4891_);
v_i_boxed_4900_ = lean_unbox_usize(v_i_4892_);
lean_dec(v_i_4892_);
v_res_4901_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0(v_as_4890_, v_sz_boxed_4899_, v_i_boxed_4900_, v_b_4893_, v___y_4894_, v___y_4895_, v___y_4896_, v___y_4897_);
lean_dec(v___y_4897_);
lean_dec_ref(v___y_4896_);
lean_dec(v___y_4895_);
lean_dec_ref(v___y_4894_);
lean_dec_ref(v_as_4890_);
return v_res_4901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2(lean_object* v___y_4902_, lean_object* v___y_4903_, lean_object* v___y_4904_, lean_object* v___y_4905_){
_start:
{
lean_object* v___x_4907_; 
v___x_4907_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg(v___y_4905_);
return v___x_4907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___boxed(lean_object* v___y_4908_, lean_object* v___y_4909_, lean_object* v___y_4910_, lean_object* v___y_4911_, lean_object* v___y_4912_){
_start:
{
lean_object* v_res_4913_; 
v_res_4913_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2(v___y_4908_, v___y_4909_, v___y_4910_, v___y_4911_);
lean_dec(v___y_4911_);
lean_dec_ref(v___y_4910_);
lean_dec(v___y_4909_);
lean_dec_ref(v___y_4908_);
return v_res_4913_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3(lean_object* v_00_u03c3_4914_, lean_object* v_00_u03b2_4915_, lean_object* v_map_4916_, lean_object* v_init_4917_, lean_object* v_f_4918_, lean_object* v___y_4919_, lean_object* v___y_4920_, lean_object* v___y_4921_, lean_object* v___y_4922_){
_start:
{
lean_object* v___x_4924_; 
v___x_4924_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg(v_map_4916_, v_init_4917_, v_f_4918_, v___y_4919_, v___y_4920_, v___y_4921_, v___y_4922_);
return v___x_4924_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___boxed(lean_object* v_00_u03c3_4925_, lean_object* v_00_u03b2_4926_, lean_object* v_map_4927_, lean_object* v_init_4928_, lean_object* v_f_4929_, lean_object* v___y_4930_, lean_object* v___y_4931_, lean_object* v___y_4932_, lean_object* v___y_4933_, lean_object* v___y_4934_){
_start:
{
lean_object* v_res_4935_; 
v_res_4935_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3(v_00_u03c3_4925_, v_00_u03b2_4926_, v_map_4927_, v_init_4928_, v_f_4929_, v___y_4930_, v___y_4931_, v___y_4932_, v___y_4933_);
lean_dec(v___y_4933_);
lean_dec_ref(v___y_4932_);
lean_dec(v___y_4931_);
lean_dec_ref(v___y_4930_);
lean_dec_ref(v_map_4927_);
return v_res_4935_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___redArg(lean_object* v_map_4936_, lean_object* v_f_4937_, lean_object* v_init_4938_, lean_object* v___y_4939_, lean_object* v___y_4940_, lean_object* v___y_4941_, lean_object* v___y_4942_){
_start:
{
lean_object* v___x_4944_; 
v___x_4944_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v_f_4937_, v_map_4936_, v_init_4938_, v___y_4939_, v___y_4940_, v___y_4941_, v___y_4942_);
return v___x_4944_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___redArg___boxed(lean_object* v_map_4945_, lean_object* v_f_4946_, lean_object* v_init_4947_, lean_object* v___y_4948_, lean_object* v___y_4949_, lean_object* v___y_4950_, lean_object* v___y_4951_, lean_object* v___y_4952_){
_start:
{
lean_object* v_res_4953_; 
v_res_4953_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___redArg(v_map_4945_, v_f_4946_, v_init_4947_, v___y_4948_, v___y_4949_, v___y_4950_, v___y_4951_);
lean_dec(v___y_4951_);
lean_dec_ref(v___y_4950_);
lean_dec(v___y_4949_);
lean_dec_ref(v___y_4948_);
return v_res_4953_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3(lean_object* v_00_u03c3_4954_, lean_object* v_00_u03c3_4955_, lean_object* v_00_u03b2_4956_, lean_object* v_map_4957_, lean_object* v_f_4958_, lean_object* v_init_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_, lean_object* v___y_4963_){
_start:
{
lean_object* v___x_4965_; 
v___x_4965_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v_f_4958_, v_map_4957_, v_init_4959_, v___y_4960_, v___y_4961_, v___y_4962_, v___y_4963_);
return v___x_4965_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___boxed(lean_object* v_00_u03c3_4966_, lean_object* v_00_u03c3_4967_, lean_object* v_00_u03b2_4968_, lean_object* v_map_4969_, lean_object* v_f_4970_, lean_object* v_init_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_, lean_object* v___y_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_){
_start:
{
lean_object* v_res_4977_; 
v_res_4977_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3(v_00_u03c3_4966_, v_00_u03c3_4967_, v_00_u03b2_4968_, v_map_4969_, v_f_4970_, v_init_4971_, v___y_4972_, v___y_4973_, v___y_4974_, v___y_4975_);
lean_dec(v___y_4975_);
lean_dec_ref(v___y_4974_);
lean_dec(v___y_4973_);
lean_dec_ref(v___y_4972_);
return v_res_4977_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4(lean_object* v_00_u03c3_4978_, lean_object* v_00_u03c3_4979_, lean_object* v_00_u03b1_4980_, lean_object* v_00_u03b2_4981_, lean_object* v_f_4982_, lean_object* v_x_4983_, lean_object* v_x_4984_, lean_object* v___y_4985_, lean_object* v___y_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_){
_start:
{
lean_object* v___x_4990_; 
v___x_4990_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v_f_4982_, v_x_4983_, v_x_4984_, v___y_4985_, v___y_4986_, v___y_4987_, v___y_4988_);
return v___x_4990_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___boxed(lean_object* v_00_u03c3_4991_, lean_object* v_00_u03c3_4992_, lean_object* v_00_u03b1_4993_, lean_object* v_00_u03b2_4994_, lean_object* v_f_4995_, lean_object* v_x_4996_, lean_object* v_x_4997_, lean_object* v___y_4998_, lean_object* v___y_4999_, lean_object* v___y_5000_, lean_object* v___y_5001_, lean_object* v___y_5002_){
_start:
{
lean_object* v_res_5003_; 
v_res_5003_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4(v_00_u03c3_4991_, v_00_u03c3_4992_, v_00_u03b1_4993_, v_00_u03b2_4994_, v_f_4995_, v_x_4996_, v_x_4997_, v___y_4998_, v___y_4999_, v___y_5000_, v___y_5001_);
lean_dec(v___y_5001_);
lean_dec_ref(v___y_5000_);
lean_dec(v___y_4999_);
lean_dec_ref(v___y_4998_);
return v_res_5003_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5(lean_object* v_00_u03b1_5004_, lean_object* v_00_u03b2_5005_, lean_object* v_00_u03c3_5006_, lean_object* v_00_u03c3_5007_, lean_object* v_f_5008_, lean_object* v_as_5009_, size_t v_i_5010_, size_t v_stop_5011_, lean_object* v_b_5012_, lean_object* v___y_5013_, lean_object* v___y_5014_, lean_object* v___y_5015_, lean_object* v___y_5016_){
_start:
{
lean_object* v___x_5018_; 
v___x_5018_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(v_f_5008_, v_as_5009_, v_i_5010_, v_stop_5011_, v_b_5012_, v___y_5013_, v___y_5014_, v___y_5015_, v___y_5016_);
return v___x_5018_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___boxed(lean_object* v_00_u03b1_5019_, lean_object* v_00_u03b2_5020_, lean_object* v_00_u03c3_5021_, lean_object* v_00_u03c3_5022_, lean_object* v_f_5023_, lean_object* v_as_5024_, lean_object* v_i_5025_, lean_object* v_stop_5026_, lean_object* v_b_5027_, lean_object* v___y_5028_, lean_object* v___y_5029_, lean_object* v___y_5030_, lean_object* v___y_5031_, lean_object* v___y_5032_){
_start:
{
size_t v_i_boxed_5033_; size_t v_stop_boxed_5034_; lean_object* v_res_5035_; 
v_i_boxed_5033_ = lean_unbox_usize(v_i_5025_);
lean_dec(v_i_5025_);
v_stop_boxed_5034_ = lean_unbox_usize(v_stop_5026_);
lean_dec(v_stop_5026_);
v_res_5035_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5(v_00_u03b1_5019_, v_00_u03b2_5020_, v_00_u03c3_5021_, v_00_u03c3_5022_, v_f_5023_, v_as_5024_, v_i_boxed_5033_, v_stop_boxed_5034_, v_b_5027_, v___y_5028_, v___y_5029_, v___y_5030_, v___y_5031_);
lean_dec(v___y_5031_);
lean_dec_ref(v___y_5030_);
lean_dec(v___y_5029_);
lean_dec_ref(v___y_5028_);
lean_dec_ref(v_as_5024_);
return v_res_5035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6(lean_object* v_00_u03c3_5036_, lean_object* v_00_u03c3_5037_, lean_object* v_00_u03b1_5038_, lean_object* v_00_u03b2_5039_, lean_object* v_f_5040_, lean_object* v_keys_5041_, lean_object* v_vals_5042_, lean_object* v_heq_5043_, lean_object* v_i_5044_, lean_object* v_acc_5045_, lean_object* v___y_5046_, lean_object* v___y_5047_, lean_object* v___y_5048_, lean_object* v___y_5049_){
_start:
{
lean_object* v___x_5051_; 
v___x_5051_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg(v_f_5040_, v_keys_5041_, v_vals_5042_, v_i_5044_, v_acc_5045_, v___y_5046_, v___y_5047_, v___y_5048_, v___y_5049_);
return v___x_5051_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___boxed(lean_object* v_00_u03c3_5052_, lean_object* v_00_u03c3_5053_, lean_object* v_00_u03b1_5054_, lean_object* v_00_u03b2_5055_, lean_object* v_f_5056_, lean_object* v_keys_5057_, lean_object* v_vals_5058_, lean_object* v_heq_5059_, lean_object* v_i_5060_, lean_object* v_acc_5061_, lean_object* v___y_5062_, lean_object* v___y_5063_, lean_object* v___y_5064_, lean_object* v___y_5065_, lean_object* v___y_5066_){
_start:
{
lean_object* v_res_5067_; 
v_res_5067_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6(v_00_u03c3_5052_, v_00_u03c3_5053_, v_00_u03b1_5054_, v_00_u03b2_5055_, v_f_5056_, v_keys_5057_, v_vals_5058_, v_heq_5059_, v_i_5060_, v_acc_5061_, v___y_5062_, v___y_5063_, v___y_5064_, v___y_5065_);
lean_dec(v___y_5065_);
lean_dec_ref(v___y_5064_);
lean_dec(v___y_5063_);
lean_dec_ref(v___y_5062_);
lean_dec_ref(v_vals_5058_);
lean_dec_ref(v_keys_5057_);
return v_res_5067_;
}
}
lean_object* runtime_initialize_Lean_DocString(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Add(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Tactic_Doc(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Doc(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Doc(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_DocString(uint8_t builtin);
lean_object* initialize_Lean_DocString_Add(uint8_t builtin);
lean_object* initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Parser_Tactic_Doc(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Doc(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Doc(builtin);
}
#ifdef __cplusplus
}
#endif
