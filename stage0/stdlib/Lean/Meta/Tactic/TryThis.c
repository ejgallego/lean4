// Lean compiler output
// Module: Lean.Meta.Tactic.TryThis
// Imports: import Lean.Server.CodeActions import Lean.Meta.Tactic.ExposeNames public import Lean.Widget.UserWidget meta import Lean.Widget.UserWidget
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_pp_mvars_anonymous;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withExposedNames___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_pp_mvars;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Tactic_TryThis_instImpl_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_;
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_utf8RangeToLspRange(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Server_FileWorker_EditableDocument_versionedIdentifier(lean_object*);
lean_object* l_Lean_Lsp_WorkspaceEdit_ofTextEdit(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree(lean_object*);
lean_object* l_Lean_Elab_InfoTree_foldInfo___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_SavedState_restore___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withoutRecover___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_PrettyPrinter_ppExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Meta_Hint_mkSuggestionsMessage(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_Meta_Hint_textInsertionWidget;
lean_object* l_Lean_Widget_addBuiltinModule(lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
extern lean_object* l_Lean_Meta_Hint_tryThisDiffWidget;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_MessageData_ofConst(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_sbracket(lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Lean_Server_addBuiltinCodeActionProvider(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Hint"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "tryThisDiffWidget"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(141, 179, 88, 64, 208, 112, 210, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(174, 189, 209, 40, 106, 230, 251, 8)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "textInsertionWidget"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(141, 179, 88, 64, 208, 112, 210, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 84, 167, 88, 42, 220, 7, 88)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "quickfix"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___lam__0___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__1_value),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__2_value),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__3_value),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "TryThis"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__5_value),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(99, 126, 27, 202, 77, 92, 28, 164)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(46, 88, 15, 193, 232, 241, 126, 15)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__8_value),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 141, 110, 144, 48, 21, 53, 247)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__9_value),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 239, 242, 38, 18, 148, 146, 217)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__10_value),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(134, 113, 30, 192, 80, 214, 160, 233)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__11_value),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(186, 76, 189, 244, 199, 127, 157, 237)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "tryThisProvider"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__12_value),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(81, 41, 66, 117, 61, 224, 165, 238)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__14_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1_spec__1___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1_spec__1___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__5_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__0(lean_object*, uint8_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "No suggestions available"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Tactic did not produce expected goal"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_isValidTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_isValidTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 253, 122, 28, 77, 248, 149, 120)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "exposeNames"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__11_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__10_value),LEAN_SCALAR_PTR_LITERAL(5, 159, 188, 156, 89, 121, 163, 161)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "expose_names"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "(expose_names; "};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__15_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__16;
static lean_once_cell_t l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__17;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "found "};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = ", but the corresponding tactic failed:"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 163, .m_capacity = 163, .m_length = 162, .m_data = "\n\nIt may be possible to correct this proof by adding type annotations, explicitly specifying implicit arguments, or eliminating unnecessary function abstractions."};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "exact "};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "refine "};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "refine"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(49, 130, 130, 160, 131, 48, 178, 245)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 6, .m_data = "\n-- ⊢ "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "proof"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "\n-- Remaining subgoals:"};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "a "};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__6;
static const lean_string_object l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "partial "};
static const lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addExactSuggestion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Try this:"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addExactSuggestion___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addExactSuggestion___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addExactSuggestion(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addExactSuggestion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__1___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Tactic_TryThis_addExactSuggestions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addExactSuggestions___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addExactSuggestions___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addExactSuggestions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addExactSuggestions___closed__0_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addExactSuggestions___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addExactSuggestions___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addExactSuggestions___closed__1_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addExactSuggestions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Try these:"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addExactSuggestions___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addExactSuggestions___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addExactSuggestions(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addExactSuggestions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addTermSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addTermSuggestion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addTermSuggestions_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addTermSuggestions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addTermSuggestions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addTermSuggestions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tacticLet__"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 155, 119, 159, 57, 105, 185, 247)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__2_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__3_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__8_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__8_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__9 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__10_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__10_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__10 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__10_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__11 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__12_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__12_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__12_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__13 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__13_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "let "};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__14 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__14_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__15;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__16 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__16_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__18 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__18_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__19_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__19_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__19_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__19 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__19_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__20 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__20_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__21 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__21_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__22;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__23 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__23_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__23_value),LEAN_SCALAR_PTR_LITERAL(168, 60, 211, 188, 58, 220, 100, 184)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__24 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__24_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "tacticHave__"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__25 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__25_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__26_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__26_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__25_value),LEAN_SCALAR_PTR_LITERAL(57, 244, 114, 225, 1, 158, 79, 25)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__26 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__26_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "have"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__27 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__27_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__28 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__28_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__28_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__29 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__29_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__30;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__31_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__31_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(7, 212, 55, 101, 104, 194, 19, 213)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__31_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(207, 55, 191, 109, 224, 169, 145, 115)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__31 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__31_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__31_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__32 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__32_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__33_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__33 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__33_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__33_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__34 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__34_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__35 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__35_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__36_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__35_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__36 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__36_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__36_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__37 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__37_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__38_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__38_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__38_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__38 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__38_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__38_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__39 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__39_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__40_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__40 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__40_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__40_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__41 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__41_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__42 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__42_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__42_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__43 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__43_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Server"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__44 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__44_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "RequestM"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__45 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__45_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__46_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__46_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__44_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__46_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__45_value),LEAN_SCALAR_PTR_LITERAL(184, 87, 7, 59, 37, 78, 138, 49)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__46 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__46_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__46_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__47 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__47_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__48_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__44_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__48 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__48_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__48_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__49 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__49_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__50_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__50_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__50_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(7, 212, 55, 101, 104, 194, 19, 213)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__50 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__50_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__50_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__51 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__51_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__43_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__52 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__52_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__41_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__52_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__53 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__53_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__41_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__53_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__54 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__54_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__51_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__54_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__55 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__55_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__39_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__55_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__56 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__56_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__39_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__56_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__57 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__57_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__37_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__57_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__58 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__58_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__37_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__58_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__59 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__59_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__34_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__59_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__60 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__60_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__34_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__60_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__61 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__61_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__49_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__61_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__62 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__62_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__49_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__62_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__63 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__63_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__47_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__63_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__64 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__64_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__47_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__64_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__65 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__65_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__43_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__65_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__66 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__66_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__41_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__66_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__67 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__67_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__41_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__67_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__68 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__68_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__41_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__68_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__69 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__69_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__39_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__69_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__70 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__70_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__39_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__70_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__71 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__71_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__39_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__71_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__72 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__72_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__37_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__72_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__73 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__73_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__37_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__73_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__74 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__74_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__37_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__74_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__75 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__75_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__34_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__75_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__76 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__76_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__34_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__76_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__77 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__77_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__34_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__77_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__78 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__78_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__32_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__78_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__79 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__79_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "have : "};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__80 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__80_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__81_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__81;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "have "};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__82 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__82_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__83_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__83;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "have := "};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__84 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__84_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__85_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__85;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "a proof"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "← "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__1___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__1(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rwRule"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(163, 12, 102, 31, 194, 63, 248, 122)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "\n-- no goals"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\n-- "};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__4;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__5_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__7;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rw "};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__9;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " at "};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__10 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__11;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__12_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rwSeq"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__13 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__13_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__14_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__14_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(50, 16, 185, 246, 153, 187, 181, 153)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__14 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__14_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "rw"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__15 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__15_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__16 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__16_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__17_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__17_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__16_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__17 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__17_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rwRuleSeq"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__18 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__18_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__19_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__19_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__19_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(170, 212, 96, 120, 212, 17, 101, 100)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__19 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__19_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__20 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__20_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__21 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__21_value;
static const lean_array_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__22 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__22_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "location"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__23 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__23_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__24_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__24_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__24_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__23_value),LEAN_SCALAR_PTR_LITERAL(124, 82, 43, 228, 241, 102, 135, 24)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__24 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__24_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "at"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__25 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__25_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "locationHyp"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__26 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__26_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__27_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__27_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__27_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__26_value),LEAN_SCALAR_PTR_LITERAL(229, 146, 67, 234, 45, 36, 143, 176)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__27 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__27_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "an applicable rewrite lemma"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1(){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___closed__4));
v___x_12_ = l_Lean_Meta_Hint_tryThisDiffWidget;
v___x_13_ = l_Lean_Widget_addBuiltinModule(v___x_11_, v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1___boxed(lean_object* v_a_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1();
return v_res_15_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1(){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_23_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___closed__1));
v___x_24_ = l_Lean_Meta_Hint_textInsertionWidget;
v___x_25_ = l_Lean_Widget_addBuiltinModule(v___x_23_, v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1___boxed(lean_object* v_a_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1();
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider_spec__0(lean_object* v___y_28_){
_start:
{
lean_object* v_doc_30_; lean_object* v___x_31_; 
v_doc_30_ = lean_ctor_get(v___y_28_, 1);
lean_inc_ref(v_doc_30_);
v___x_31_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_31_, 0, v_doc_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider_spec__0___boxed(lean_object* v___y_32_, lean_object* v___y_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_Lean_Server_RequestM_readDoc___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider_spec__0(v___y_32_);
lean_dec_ref(v___y_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___lam__0(lean_object* v___x_38_, lean_object* v_a_39_, lean_object* v_params_40_, lean_object* v___ctx_41_, lean_object* v_info_42_, lean_object* v_result_43_){
_start:
{
if (lean_obj_tag(v_info_42_) == 10)
{
lean_object* v_i_44_; lean_object* v_stx_45_; lean_object* v_value_46_; lean_object* v___x_47_; 
v_i_44_ = lean_ctor_get(v_info_42_, 0);
v_stx_45_ = lean_ctor_get(v_i_44_, 0);
v_value_46_ = lean_ctor_get(v_i_44_, 1);
v___x_47_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_value_46_, v___x_38_);
if (lean_obj_tag(v___x_47_) == 1)
{
lean_object* v_val_48_; lean_object* v_edit_49_; lean_object* v_codeActionTitle_50_; uint8_t v___x_51_; lean_object* v___x_52_; 
v_val_48_ = lean_ctor_get(v___x_47_, 0);
lean_inc(v_val_48_);
lean_dec_ref_known(v___x_47_, 1);
v_edit_49_ = lean_ctor_get(v_val_48_, 0);
lean_inc_ref(v_edit_49_);
v_codeActionTitle_50_ = lean_ctor_get(v_val_48_, 1);
lean_inc_ref(v_codeActionTitle_50_);
lean_dec(v_val_48_);
v___x_51_ = 0;
v___x_52_ = l_Lean_Syntax_getRange_x3f(v_stx_45_, v___x_51_);
if (lean_obj_tag(v___x_52_) == 1)
{
lean_object* v_toEditableDocumentCore_53_; lean_object* v_meta_54_; lean_object* v_val_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_89_; 
v_toEditableDocumentCore_53_ = lean_ctor_get(v_a_39_, 0);
v_meta_54_ = lean_ctor_get(v_toEditableDocumentCore_53_, 0);
v_val_55_ = lean_ctor_get(v___x_52_, 0);
v_isSharedCheck_89_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_89_ == 0)
{
v___x_57_ = v___x_52_;
v_isShared_58_ = v_isSharedCheck_89_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_val_55_);
lean_dec(v___x_52_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_89_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v_text_59_; lean_object* v___x_60_; lean_object* v_start_61_; lean_object* v_range_62_; lean_object* v_end_63_; lean_object* v_end_64_; lean_object* v_line_65_; lean_object* v_start_66_; lean_object* v_line_67_; uint8_t v___x_68_; 
v_text_59_ = lean_ctor_get(v_meta_54_, 3);
lean_inc_ref(v_text_59_);
v___x_60_ = l_Lean_FileMap_utf8RangeToLspRange(v_text_59_, v_val_55_);
v_start_61_ = lean_ctor_get(v___x_60_, 0);
lean_inc_ref(v_start_61_);
v_range_62_ = lean_ctor_get(v_params_40_, 3);
v_end_63_ = lean_ctor_get(v_range_62_, 1);
v_end_64_ = lean_ctor_get(v___x_60_, 1);
lean_inc_ref(v_end_64_);
lean_dec_ref(v___x_60_);
v_line_65_ = lean_ctor_get(v_start_61_, 0);
lean_inc(v_line_65_);
lean_dec_ref(v_start_61_);
v_start_66_ = lean_ctor_get(v_range_62_, 0);
v_line_67_ = lean_ctor_get(v_end_63_, 0);
v___x_68_ = lean_nat_dec_le(v_line_65_, v_line_67_);
lean_dec(v_line_65_);
if (v___x_68_ == 0)
{
lean_dec_ref(v_end_64_);
lean_del_object(v___x_57_);
lean_dec_ref(v_codeActionTitle_50_);
lean_dec_ref(v_edit_49_);
lean_dec_ref(v_a_39_);
return v_result_43_;
}
else
{
lean_object* v_line_69_; lean_object* v_line_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_87_; 
v_line_69_ = lean_ctor_get(v_start_66_, 0);
v_line_70_ = lean_ctor_get(v_end_64_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v_end_64_);
if (v_isSharedCheck_87_ == 0)
{
lean_object* v_unused_88_; 
v_unused_88_ = lean_ctor_get(v_end_64_, 1);
lean_dec(v_unused_88_);
v___x_72_ = v_end_64_;
v_isShared_73_ = v_isSharedCheck_87_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_line_70_);
lean_dec(v_end_64_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_87_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
uint8_t v___x_74_; 
v___x_74_ = lean_nat_dec_le(v_line_69_, v_line_70_);
lean_dec(v_line_70_);
if (v___x_74_ == 0)
{
lean_del_object(v___x_72_);
lean_del_object(v___x_57_);
lean_dec_ref(v_codeActionTitle_50_);
lean_dec_ref(v_edit_49_);
lean_dec_ref(v_a_39_);
return v_result_43_;
}
else
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_80_; 
v___x_75_ = lean_box(0);
v___x_76_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___lam__0___closed__1));
v___x_77_ = l_Lean_Server_FileWorker_EditableDocument_versionedIdentifier(v_a_39_);
v___x_78_ = l_Lean_Lsp_WorkspaceEdit_ofTextEdit(v___x_77_, v_edit_49_);
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 0, v___x_78_);
v___x_80_ = v___x_57_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_78_);
v___x_80_ = v_reuseFailAlloc_86_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
lean_object* v___x_81_; lean_object* v___x_83_; 
v___x_81_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_81_, 0, v___x_75_);
lean_ctor_set(v___x_81_, 1, v___x_75_);
lean_ctor_set(v___x_81_, 2, v_codeActionTitle_50_);
lean_ctor_set(v___x_81_, 3, v___x_76_);
lean_ctor_set(v___x_81_, 4, v___x_75_);
lean_ctor_set(v___x_81_, 5, v___x_75_);
lean_ctor_set(v___x_81_, 6, v___x_75_);
lean_ctor_set(v___x_81_, 7, v___x_80_);
lean_ctor_set(v___x_81_, 8, v___x_75_);
lean_ctor_set(v___x_81_, 9, v___x_75_);
if (v_isShared_73_ == 0)
{
lean_ctor_set(v___x_72_, 1, v___x_75_);
lean_ctor_set(v___x_72_, 0, v___x_81_);
v___x_83_ = v___x_72_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_81_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v___x_75_);
v___x_83_ = v_reuseFailAlloc_85_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
lean_object* v___x_84_; 
v___x_84_ = lean_array_push(v_result_43_, v___x_83_);
return v___x_84_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_52_);
lean_dec_ref(v_codeActionTitle_50_);
lean_dec_ref(v_edit_49_);
lean_dec_ref(v_a_39_);
return v_result_43_;
}
}
else
{
lean_dec(v___x_47_);
lean_dec_ref(v_a_39_);
return v_result_43_;
}
}
else
{
lean_dec_ref(v_a_39_);
return v_result_43_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___lam__0___boxed(lean_object* v___x_90_, lean_object* v_a_91_, lean_object* v_params_92_, lean_object* v___ctx_93_, lean_object* v_info_94_, lean_object* v_result_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___lam__0(v___x_90_, v_a_91_, v_params_92_, v___ctx_93_, v_info_94_, v_result_95_);
lean_dec_ref(v_info_94_);
lean_dec_ref(v___ctx_93_);
lean_dec_ref(v_params_92_);
lean_dec(v___x_90_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider(lean_object* v_params_99_, lean_object* v_snap_100_, lean_object* v_a_101_){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v_a_105_; lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_116_; 
v___x_103_ = l_Lean_Meta_Tactic_TryThis_instImpl_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_;
v___x_104_ = l_Lean_Server_RequestM_readDoc___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider_spec__0(v_a_101_);
v_a_105_ = lean_ctor_get(v___x_104_, 0);
v_isSharedCheck_116_ = !lean_is_exclusive(v___x_104_);
if (v_isSharedCheck_116_ == 0)
{
v___x_107_ = v___x_104_;
v_isShared_108_ = v_isSharedCheck_116_;
goto v_resetjp_106_;
}
else
{
lean_inc(v_a_105_);
lean_dec(v___x_104_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_116_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v___f_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_114_; 
v___f_109_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___lam__0___boxed), 6, 3);
lean_closure_set(v___f_109_, 0, v___x_103_);
lean_closure_set(v___f_109_, 1, v_a_105_);
lean_closure_set(v___f_109_, 2, v_params_99_);
v___x_110_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___closed__0));
v___x_111_ = l_Lean_Server_Snapshots_Snapshot_infoTree(v_snap_100_);
v___x_112_ = l_Lean_Elab_InfoTree_foldInfo___redArg(v___f_109_, v___x_110_, v___x_111_);
if (v_isShared_108_ == 0)
{
lean_ctor_set(v___x_107_, 0, v___x_112_);
v___x_114_ = v___x_107_;
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___boxed(lean_object* v_params_117_, lean_object* v_snap_118_, lean_object* v_a_119_, lean_object* v_a_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider(v_params_117_, v_snap_118_, v_a_119_);
lean_dec_ref(v_a_119_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1(){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__14));
v___x_161_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___boxed), 4, 0);
v___x_162_ = l_Lean_Server_addBuiltinCodeActionProvider(v___x_160_, v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___boxed(lean_object* v_a_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1();
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__0(lean_object* v_opts_165_, lean_object* v_opt_166_){
_start:
{
lean_object* v_name_167_; lean_object* v_defValue_168_; lean_object* v_map_169_; lean_object* v___x_170_; 
v_name_167_ = lean_ctor_get(v_opt_166_, 0);
v_defValue_168_ = lean_ctor_get(v_opt_166_, 1);
v_map_169_ = lean_ctor_get(v_opts_165_, 0);
v___x_170_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_169_, v_name_167_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_inc(v_defValue_168_);
return v_defValue_168_;
}
else
{
lean_object* v_val_171_; 
v_val_171_ = lean_ctor_get(v___x_170_, 0);
lean_inc(v_val_171_);
lean_dec_ref_known(v___x_170_, 1);
if (lean_obj_tag(v_val_171_) == 3)
{
lean_object* v_v_172_; 
v_v_172_ = lean_ctor_get(v_val_171_, 0);
lean_inc(v_v_172_);
lean_dec_ref_known(v_val_171_, 1);
return v_v_172_;
}
else
{
lean_dec(v_val_171_);
lean_inc(v_defValue_168_);
return v_defValue_168_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__0___boxed(lean_object* v_opts_173_, lean_object* v_opt_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__0(v_opts_173_, v_opt_174_);
lean_dec_ref(v_opt_174_);
lean_dec_ref(v_opts_173_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1_spec__1(lean_object* v_o_179_, lean_object* v_k_180_, uint8_t v_v_181_){
_start:
{
lean_object* v_map_182_; uint8_t v_hasTrace_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_197_; 
v_map_182_ = lean_ctor_get(v_o_179_, 0);
v_hasTrace_183_ = lean_ctor_get_uint8(v_o_179_, sizeof(void*)*1);
v_isSharedCheck_197_ = !lean_is_exclusive(v_o_179_);
if (v_isSharedCheck_197_ == 0)
{
v___x_185_ = v_o_179_;
v_isShared_186_ = v_isSharedCheck_197_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_map_182_);
lean_dec(v_o_179_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_197_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_187_, 0, v_v_181_);
lean_inc(v_k_180_);
v___x_188_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_180_, v___x_187_, v_map_182_);
if (v_hasTrace_183_ == 0)
{
lean_object* v___x_189_; uint8_t v___x_190_; lean_object* v___x_192_; 
v___x_189_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1_spec__1___closed__1));
v___x_190_ = l_Lean_Name_isPrefixOf(v___x_189_, v_k_180_);
lean_dec(v_k_180_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 0, v___x_188_);
v___x_192_ = v___x_185_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v___x_188_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
lean_ctor_set_uint8(v___x_192_, sizeof(void*)*1, v___x_190_);
return v___x_192_;
}
}
else
{
lean_object* v___x_195_; 
lean_dec(v_k_180_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 0, v___x_188_);
v___x_195_ = v___x_185_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v___x_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_196_, sizeof(void*)*1, v_hasTrace_183_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1_spec__1___boxed(lean_object* v_o_198_, lean_object* v_k_199_, lean_object* v_v_200_){
_start:
{
uint8_t v_v_boxed_201_; lean_object* v_res_202_; 
v_v_boxed_201_ = lean_unbox(v_v_200_);
v_res_202_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1_spec__1(v_o_198_, v_k_199_, v_v_boxed_201_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1(lean_object* v_opts_203_, lean_object* v_opt_204_, uint8_t v_val_205_){
_start:
{
lean_object* v_name_206_; lean_object* v___x_207_; 
v_name_206_ = lean_ctor_get(v_opt_204_, 0);
lean_inc(v_name_206_);
lean_dec_ref(v_opt_204_);
v___x_207_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1_spec__1(v_opts_203_, v_name_206_, v_val_205_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1___boxed(lean_object* v_opts_208_, lean_object* v_opt_209_, lean_object* v_val_210_){
_start:
{
uint8_t v_val_boxed_211_; lean_object* v_res_212_; 
v_val_boxed_211_ = lean_unbox(v_val_210_);
v_res_212_ = l_Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1(v_opts_208_, v_opt_209_, v_val_boxed_211_);
return v_res_212_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__0(void){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_213_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__1(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__0, &l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__0_once, _init_l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__0);
v___x_215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
return v___x_215_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__2(void){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__1, &l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__1_once, _init_l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__1);
v___x_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax(lean_object* v_e_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_){
_start:
{
lean_object* v_toCold_224_; lean_object* v_currRecDepth_225_; lean_object* v_ref_226_; uint8_t v_suppressElabErrors_227_; uint8_t v_checkDeprecated_228_; uint8_t v_isRecordingDeps_229_; lean_object* v_fileName_230_; lean_object* v_fileMap_231_; lean_object* v_options_232_; lean_object* v_currNamespace_233_; lean_object* v_openDecls_234_; lean_object* v_initHeartbeats_235_; lean_object* v_maxHeartbeats_236_; lean_object* v_quotContext_237_; lean_object* v_currMacroScope_238_; lean_object* v_cancelTk_x3f_239_; lean_object* v_inheritedTraceOptions_240_; lean_object* v___x_241_; lean_object* v___y_243_; uint16_t v___y_244_; lean_object* v_fileName_245_; lean_object* v_fileMap_246_; lean_object* v_currNamespace_247_; lean_object* v_openDecls_248_; lean_object* v_initHeartbeats_249_; lean_object* v_maxHeartbeats_250_; lean_object* v_quotContext_251_; lean_object* v_currMacroScope_252_; lean_object* v_cancelTk_x3f_253_; lean_object* v_inheritedTraceOptions_254_; lean_object* v_currRecDepth_255_; lean_object* v_ref_256_; uint8_t v_suppressElabErrors_257_; uint8_t v_checkDeprecated_258_; uint8_t v_isRecordingDeps_259_; lean_object* v___y_260_; lean_object* v___y_267_; lean_object* v_nextMacroScope_268_; lean_object* v_ngen_269_; lean_object* v_auxDeclNGen_270_; lean_object* v_traceState_271_; lean_object* v_recordedDeps_272_; lean_object* v_messages_273_; lean_object* v_infoState_274_; lean_object* v_snapshotTasks_275_; uint16_t v___y_276_; lean_object* v___y_277_; lean_object* v___y_282_; uint16_t v___y_283_; uint8_t v___y_284_; lean_object* v___y_303_; 
v_toCold_224_ = lean_ctor_get(v_a_221_, 0);
v_currRecDepth_225_ = lean_ctor_get(v_a_221_, 1);
v_ref_226_ = lean_ctor_get(v_a_221_, 2);
v_suppressElabErrors_227_ = lean_ctor_get_uint8(v_a_221_, sizeof(void*)*3 + 2);
v_checkDeprecated_228_ = lean_ctor_get_uint8(v_a_221_, sizeof(void*)*3 + 3);
v_isRecordingDeps_229_ = lean_ctor_get_uint8(v_a_221_, sizeof(void*)*3 + 4);
v_fileName_230_ = lean_ctor_get(v_toCold_224_, 0);
v_fileMap_231_ = lean_ctor_get(v_toCold_224_, 1);
v_options_232_ = lean_ctor_get(v_toCold_224_, 2);
v_currNamespace_233_ = lean_ctor_get(v_toCold_224_, 4);
v_openDecls_234_ = lean_ctor_get(v_toCold_224_, 5);
v_initHeartbeats_235_ = lean_ctor_get(v_toCold_224_, 6);
v_maxHeartbeats_236_ = lean_ctor_get(v_toCold_224_, 7);
v_quotContext_237_ = lean_ctor_get(v_toCold_224_, 8);
v_currMacroScope_238_ = lean_ctor_get(v_toCold_224_, 9);
v_cancelTk_x3f_239_ = lean_ctor_get(v_toCold_224_, 10);
v_inheritedTraceOptions_240_ = lean_ctor_get(v_toCold_224_, 11);
v___x_241_ = lean_box(1);
if (v_isRecordingDeps_229_ == 0)
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = l_Lean_pp_mvars_anonymous;
lean_inc_ref(v_options_232_);
v___x_314_ = l_Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1(v_options_232_, v___x_313_, v_isRecordingDeps_229_);
v___y_303_ = v___x_314_;
goto v___jp_302_;
}
else
{
lean_object* v___x_315_; 
lean_inc_ref(v_options_232_);
v___x_315_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_232_);
v___y_303_ = v___x_315_;
goto v___jp_302_;
}
v___jp_242_:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_261_ = l_Lean_maxRecDepth;
v___x_262_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__0(v___y_243_, v___x_261_);
v___x_263_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_263_, 0, v_fileName_245_);
lean_ctor_set(v___x_263_, 1, v_fileMap_246_);
lean_ctor_set(v___x_263_, 2, v___y_243_);
lean_ctor_set(v___x_263_, 3, v___x_262_);
lean_ctor_set(v___x_263_, 4, v_currNamespace_247_);
lean_ctor_set(v___x_263_, 5, v_openDecls_248_);
lean_ctor_set(v___x_263_, 6, v_initHeartbeats_249_);
lean_ctor_set(v___x_263_, 7, v_maxHeartbeats_250_);
lean_ctor_set(v___x_263_, 8, v_quotContext_251_);
lean_ctor_set(v___x_263_, 9, v_currMacroScope_252_);
lean_ctor_set(v___x_263_, 10, v_cancelTk_x3f_253_);
lean_ctor_set(v___x_263_, 11, v_inheritedTraceOptions_254_);
lean_inc(v_ref_256_);
lean_inc(v_currRecDepth_255_);
v___x_264_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_264_, 0, v___x_263_);
lean_ctor_set(v___x_264_, 1, v_currRecDepth_255_);
lean_ctor_set(v___x_264_, 2, v_ref_256_);
lean_ctor_set_uint16(v___x_264_, sizeof(void*)*3, v___y_244_);
lean_ctor_set_uint8(v___x_264_, sizeof(void*)*3 + 2, v_suppressElabErrors_257_);
lean_ctor_set_uint8(v___x_264_, sizeof(void*)*3 + 3, v_checkDeprecated_258_);
lean_ctor_set_uint8(v___x_264_, sizeof(void*)*3 + 4, v_isRecordingDeps_259_);
v___x_265_ = l_Lean_PrettyPrinter_delab(v_e_218_, v___x_241_, v_a_219_, v_a_220_, v___x_264_, v___y_260_);
lean_dec_ref_known(v___x_264_, 3);
return v___x_265_;
}
v___jp_266_:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_278_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__2, &l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__2_once, _init_l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__2);
v___x_279_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_279_, 0, v___y_277_);
lean_ctor_set(v___x_279_, 1, v_nextMacroScope_268_);
lean_ctor_set(v___x_279_, 2, v_ngen_269_);
lean_ctor_set(v___x_279_, 3, v_auxDeclNGen_270_);
lean_ctor_set(v___x_279_, 4, v_traceState_271_);
lean_ctor_set(v___x_279_, 5, v___x_278_);
lean_ctor_set(v___x_279_, 6, v_recordedDeps_272_);
lean_ctor_set(v___x_279_, 7, v_messages_273_);
lean_ctor_set(v___x_279_, 8, v_infoState_274_);
lean_ctor_set(v___x_279_, 9, v_snapshotTasks_275_);
v___x_280_ = lean_st_ref_put(v_a_222_, v___x_279_);
lean_inc_ref(v_inheritedTraceOptions_240_);
lean_inc(v_cancelTk_x3f_239_);
lean_inc(v_currMacroScope_238_);
lean_inc(v_quotContext_237_);
lean_inc(v_maxHeartbeats_236_);
lean_inc(v_initHeartbeats_235_);
lean_inc(v_openDecls_234_);
lean_inc(v_currNamespace_233_);
lean_inc_ref(v_fileMap_231_);
lean_inc_ref(v_fileName_230_);
v___y_243_ = v___y_267_;
v___y_244_ = v___y_276_;
v_fileName_245_ = v_fileName_230_;
v_fileMap_246_ = v_fileMap_231_;
v_currNamespace_247_ = v_currNamespace_233_;
v_openDecls_248_ = v_openDecls_234_;
v_initHeartbeats_249_ = v_initHeartbeats_235_;
v_maxHeartbeats_250_ = v_maxHeartbeats_236_;
v_quotContext_251_ = v_quotContext_237_;
v_currMacroScope_252_ = v_currMacroScope_238_;
v_cancelTk_x3f_253_ = v_cancelTk_x3f_239_;
v_inheritedTraceOptions_254_ = v_inheritedTraceOptions_240_;
v_currRecDepth_255_ = v_currRecDepth_225_;
v_ref_256_ = v_ref_226_;
v_suppressElabErrors_257_ = v_suppressElabErrors_227_;
v_checkDeprecated_258_ = v_checkDeprecated_228_;
v_isRecordingDeps_259_ = v_isRecordingDeps_229_;
v___y_260_ = v_a_222_;
goto v___jp_242_;
}
v___jp_281_:
{
uint8_t v___x_285_; lean_object* v___x_286_; lean_object* v_env_287_; lean_object* v_nextMacroScope_288_; lean_object* v_ngen_289_; lean_object* v_auxDeclNGen_290_; lean_object* v_traceState_291_; lean_object* v_recordedDeps_292_; lean_object* v_messages_293_; lean_object* v_infoState_294_; lean_object* v_snapshotTasks_295_; uint16_t v___x_296_; uint16_t v___x_297_; uint16_t v___x_298_; uint8_t v___x_299_; 
v___x_285_ = 1;
v___x_286_ = lean_st_ref_take(v_a_222_);
v_env_287_ = lean_ctor_get(v___x_286_, 0);
lean_inc_ref(v_env_287_);
v_nextMacroScope_288_ = lean_ctor_get(v___x_286_, 1);
lean_inc(v_nextMacroScope_288_);
v_ngen_289_ = lean_ctor_get(v___x_286_, 2);
lean_inc_ref(v_ngen_289_);
v_auxDeclNGen_290_ = lean_ctor_get(v___x_286_, 3);
lean_inc_ref(v_auxDeclNGen_290_);
v_traceState_291_ = lean_ctor_get(v___x_286_, 4);
lean_inc_ref(v_traceState_291_);
v_recordedDeps_292_ = lean_ctor_get(v___x_286_, 6);
lean_inc_ref(v_recordedDeps_292_);
v_messages_293_ = lean_ctor_get(v___x_286_, 7);
lean_inc_ref(v_messages_293_);
v_infoState_294_ = lean_ctor_get(v___x_286_, 8);
lean_inc_ref(v_infoState_294_);
v_snapshotTasks_295_ = lean_ctor_get(v___x_286_, 9);
lean_inc_ref(v_snapshotTasks_295_);
lean_dec(v___x_286_);
v___x_296_ = 512;
v___x_297_ = lean_uint16_land(v___y_283_, v___x_296_);
v___x_298_ = 0;
v___x_299_ = lean_uint16_dec_eq(v___x_297_, v___x_298_);
if (v___x_299_ == 0)
{
lean_object* v___x_300_; 
v___x_300_ = l_Lean_Kernel_enableDiag(v_env_287_, v___x_285_);
v___y_267_ = v___y_282_;
v_nextMacroScope_268_ = v_nextMacroScope_288_;
v_ngen_269_ = v_ngen_289_;
v_auxDeclNGen_270_ = v_auxDeclNGen_290_;
v_traceState_271_ = v_traceState_291_;
v_recordedDeps_272_ = v_recordedDeps_292_;
v_messages_273_ = v_messages_293_;
v_infoState_274_ = v_infoState_294_;
v_snapshotTasks_275_ = v_snapshotTasks_295_;
v___y_276_ = v___y_283_;
v___y_277_ = v___x_300_;
goto v___jp_266_;
}
else
{
lean_object* v___x_301_; 
v___x_301_ = l_Lean_Kernel_enableDiag(v_env_287_, v___y_284_);
v___y_267_ = v___y_282_;
v_nextMacroScope_268_ = v_nextMacroScope_288_;
v_ngen_269_ = v_ngen_289_;
v_auxDeclNGen_270_ = v_auxDeclNGen_290_;
v_traceState_271_ = v_traceState_291_;
v_recordedDeps_272_ = v_recordedDeps_292_;
v_messages_273_ = v_messages_293_;
v_infoState_274_ = v_infoState_294_;
v_snapshotTasks_275_ = v_snapshotTasks_295_;
v___y_276_ = v___y_283_;
v___y_277_ = v___x_301_;
goto v___jp_266_;
}
}
v___jp_302_:
{
uint16_t v___x_304_; lean_object* v___x_305_; lean_object* v_env_306_; uint8_t v___x_307_; uint16_t v___x_308_; uint16_t v___x_309_; uint16_t v___x_310_; uint8_t v___x_311_; 
v___x_304_ = l_Lean_OptionFlags_ofOptions(v___y_303_);
v___x_305_ = lean_st_ref_get(v_a_222_);
v_env_306_ = lean_ctor_get(v___x_305_, 0);
lean_inc_ref(v_env_306_);
lean_dec(v___x_305_);
v___x_307_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_306_);
lean_dec_ref(v_env_306_);
v___x_308_ = 512;
v___x_309_ = lean_uint16_land(v___x_304_, v___x_308_);
v___x_310_ = 0;
v___x_311_ = lean_uint16_dec_eq(v___x_309_, v___x_310_);
if (v___x_311_ == 0)
{
if (v___x_307_ == 0)
{
v___y_282_ = v___y_303_;
v___y_283_ = v___x_304_;
v___y_284_ = v___x_307_;
goto v___jp_281_;
}
else
{
lean_inc_ref(v_inheritedTraceOptions_240_);
lean_inc(v_cancelTk_x3f_239_);
lean_inc(v_currMacroScope_238_);
lean_inc(v_quotContext_237_);
lean_inc(v_maxHeartbeats_236_);
lean_inc(v_initHeartbeats_235_);
lean_inc(v_openDecls_234_);
lean_inc(v_currNamespace_233_);
lean_inc_ref(v_fileMap_231_);
lean_inc_ref(v_fileName_230_);
v___y_243_ = v___y_303_;
v___y_244_ = v___x_304_;
v_fileName_245_ = v_fileName_230_;
v_fileMap_246_ = v_fileMap_231_;
v_currNamespace_247_ = v_currNamespace_233_;
v_openDecls_248_ = v_openDecls_234_;
v_initHeartbeats_249_ = v_initHeartbeats_235_;
v_maxHeartbeats_250_ = v_maxHeartbeats_236_;
v_quotContext_251_ = v_quotContext_237_;
v_currMacroScope_252_ = v_currMacroScope_238_;
v_cancelTk_x3f_253_ = v_cancelTk_x3f_239_;
v_inheritedTraceOptions_254_ = v_inheritedTraceOptions_240_;
v_currRecDepth_255_ = v_currRecDepth_225_;
v_ref_256_ = v_ref_226_;
v_suppressElabErrors_257_ = v_suppressElabErrors_227_;
v_checkDeprecated_258_ = v_checkDeprecated_228_;
v_isRecordingDeps_259_ = v_isRecordingDeps_229_;
v___y_260_ = v_a_222_;
goto v___jp_242_;
}
}
else
{
if (v___x_307_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_240_);
lean_inc(v_cancelTk_x3f_239_);
lean_inc(v_currMacroScope_238_);
lean_inc(v_quotContext_237_);
lean_inc(v_maxHeartbeats_236_);
lean_inc(v_initHeartbeats_235_);
lean_inc(v_openDecls_234_);
lean_inc(v_currNamespace_233_);
lean_inc_ref(v_fileMap_231_);
lean_inc_ref(v_fileName_230_);
v___y_243_ = v___y_303_;
v___y_244_ = v___x_304_;
v_fileName_245_ = v_fileName_230_;
v_fileMap_246_ = v_fileMap_231_;
v_currNamespace_247_ = v_currNamespace_233_;
v_openDecls_248_ = v_openDecls_234_;
v_initHeartbeats_249_ = v_initHeartbeats_235_;
v_maxHeartbeats_250_ = v_maxHeartbeats_236_;
v_quotContext_251_ = v_quotContext_237_;
v_currMacroScope_252_ = v_currMacroScope_238_;
v_cancelTk_x3f_253_ = v_cancelTk_x3f_239_;
v_inheritedTraceOptions_254_ = v_inheritedTraceOptions_240_;
v_currRecDepth_255_ = v_currRecDepth_225_;
v_ref_256_ = v_ref_226_;
v_suppressElabErrors_257_ = v_suppressElabErrors_227_;
v_checkDeprecated_258_ = v_checkDeprecated_228_;
v_isRecordingDeps_259_ = v_isRecordingDeps_229_;
v___y_260_ = v_a_222_;
goto v___jp_242_;
}
else
{
uint8_t v___x_312_; 
v___x_312_ = 0;
v___y_282_ = v___y_303_;
v___y_283_ = v___x_304_;
v___y_284_ = v___x_312_;
goto v___jp_281_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___boxed(lean_object* v_e_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax(v_e_316_, v_a_317_, v_a_318_, v_a_319_, v_a_320_);
lean_dec(v_a_320_);
lean_dec_ref(v_a_319_);
lean_dec(v_a_318_);
lean_dec_ref(v_a_317_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion_spec__0(lean_object* v_msgData_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_){
_start:
{
lean_object* v___x_329_; lean_object* v_env_330_; uint8_t v___x_331_; lean_object* v_env_332_; lean_object* v___x_333_; lean_object* v_toCold_334_; lean_object* v_mctx_335_; lean_object* v_lctx_336_; lean_object* v_options_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_329_ = lean_st_ref_get(v___y_327_);
v_env_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc_ref(v_env_330_);
lean_dec(v___x_329_);
v___x_331_ = 0;
v_env_332_ = l_Lean_Environment_setRecordingDeps(v_env_330_, v___x_331_);
v___x_333_ = lean_st_ref_get(v___y_325_);
v_toCold_334_ = lean_ctor_get(v___y_326_, 0);
v_mctx_335_ = lean_ctor_get(v___x_333_, 0);
lean_inc_ref(v_mctx_335_);
lean_dec(v___x_333_);
v_lctx_336_ = lean_ctor_get(v___y_324_, 2);
v_options_337_ = lean_ctor_get(v_toCold_334_, 2);
lean_inc_ref(v_options_337_);
lean_inc_ref(v_lctx_336_);
v___x_338_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_338_, 0, v_env_332_);
lean_ctor_set(v___x_338_, 1, v_mctx_335_);
lean_ctor_set(v___x_338_, 2, v_lctx_336_);
lean_ctor_set(v___x_338_, 3, v_options_337_);
v___x_339_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
lean_ctor_set(v___x_339_, 1, v_msgData_323_);
v___x_340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion_spec__0___boxed(lean_object* v_msgData_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Lean_addMessageContextFull___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion_spec__0(v_msgData_341_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
lean_dec(v___y_345_);
lean_dec_ref(v___y_344_);
lean_dec(v___y_343_);
lean_dec_ref(v___y_342_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion(lean_object* v_e_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
lean_object* v___x_357_; 
lean_inc_ref(v_e_351_);
v___x_357_ = l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax(v_e_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v_a_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v_a_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_373_; 
v_a_358_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_a_358_);
lean_dec_ref_known(v___x_357_, 1);
v___x_359_ = l_Lean_MessageData_ofExpr(v_e_351_);
v___x_360_ = l_Lean_addMessageContextFull___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion_spec__0(v___x_359_, v_a_352_, v_a_353_, v_a_354_, v_a_355_);
v_a_361_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_373_ == 0)
{
v___x_363_ = v___x_360_;
v_isShared_364_ = v_isSharedCheck_373_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_a_361_);
lean_dec(v___x_360_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_373_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_371_; 
v___x_365_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion___closed__1));
v___x_366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
lean_ctor_set(v___x_366_, 1, v_a_358_);
v___x_367_ = lean_box(0);
v___x_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_368_, 0, v_a_361_);
v___x_369_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_369_, 0, v___x_366_);
lean_ctor_set(v___x_369_, 1, v___x_367_);
lean_ctor_set(v___x_369_, 2, v___x_367_);
lean_ctor_set(v___x_369_, 3, v___x_367_);
lean_ctor_set(v___x_369_, 4, v___x_368_);
lean_ctor_set(v___x_369_, 5, v___x_367_);
if (v_isShared_364_ == 0)
{
lean_ctor_set(v___x_363_, 0, v___x_369_);
v___x_371_ = v___x_363_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_369_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
else
{
lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_381_; 
lean_dec_ref(v_e_351_);
v_a_374_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_381_ == 0)
{
v___x_376_ = v___x_357_;
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v___x_357_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_379_; 
if (v_isShared_377_ == 0)
{
v___x_379_ = v___x_376_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v_a_374_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion___boxed(lean_object* v_e_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion(v_e_382_, v_a_383_, v_a_384_, v_a_385_, v_a_386_);
lean_dec(v_a_386_);
lean_dec_ref(v_a_385_);
lean_dec(v_a_384_);
lean_dec_ref(v_a_383_);
return v_res_388_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__0, &l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__0_once, _init_l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__0);
v___x_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_390_, 0, v___x_389_);
return v___x_390_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_391_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__0);
v___x_392_ = lean_unsigned_to_nat(0u);
v___x_393_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
lean_ctor_set(v___x_393_, 1, v___x_392_);
lean_ctor_set(v___x_393_, 2, v___x_392_);
lean_ctor_set(v___x_393_, 3, v___x_392_);
lean_ctor_set(v___x_393_, 4, v___x_391_);
lean_ctor_set(v___x_393_, 5, v___x_391_);
lean_ctor_set(v___x_393_, 6, v___x_391_);
lean_ctor_set(v___x_393_, 7, v___x_391_);
lean_ctor_set(v___x_393_, 8, v___x_391_);
lean_ctor_set(v___x_393_, 9, v___x_391_);
lean_ctor_set(v___x_393_, 10, v___x_391_);
return v___x_393_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__2(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_394_ = lean_unsigned_to_nat(32u);
v___x_395_ = lean_mk_empty_array_with_capacity(v___x_394_);
v___x_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
return v___x_396_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__3(void){
_start:
{
size_t v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_397_ = ((size_t)5ULL);
v___x_398_ = lean_unsigned_to_nat(0u);
v___x_399_ = lean_unsigned_to_nat(32u);
v___x_400_ = lean_mk_empty_array_with_capacity(v___x_399_);
v___x_401_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__2);
v___x_402_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_402_, 0, v___x_401_);
lean_ctor_set(v___x_402_, 1, v___x_400_);
lean_ctor_set(v___x_402_, 2, v___x_398_);
lean_ctor_set(v___x_402_, 3, v___x_398_);
lean_ctor_set_usize(v___x_402_, 4, v___x_397_);
return v___x_402_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__4(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_403_ = lean_box(1);
v___x_404_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__3);
v___x_405_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__0);
v___x_406_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v___x_404_);
lean_ctor_set(v___x_406_, 2, v___x_403_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1(lean_object* v_msgData_407_, lean_object* v___y_408_, lean_object* v___y_409_){
_start:
{
lean_object* v___x_411_; lean_object* v_toCold_412_; lean_object* v_env_413_; lean_object* v_options_414_; uint8_t v___x_415_; lean_object* v_env_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_411_ = lean_st_ref_get(v___y_409_);
v_toCold_412_ = lean_ctor_get(v___y_408_, 0);
v_env_413_ = lean_ctor_get(v___x_411_, 0);
lean_inc_ref(v_env_413_);
lean_dec(v___x_411_);
v_options_414_ = lean_ctor_get(v_toCold_412_, 2);
v___x_415_ = 0;
v_env_416_ = l_Lean_Environment_setRecordingDeps(v_env_413_, v___x_415_);
v___x_417_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__1);
v___x_418_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___closed__4);
lean_inc_ref(v_options_414_);
v___x_419_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_419_, 0, v_env_416_);
lean_ctor_set(v___x_419_, 1, v___x_417_);
lean_ctor_set(v___x_419_, 2, v___x_418_);
lean_ctor_set(v___x_419_, 3, v_options_414_);
v___x_420_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_420_, 0, v___x_419_);
lean_ctor_set(v___x_420_, 1, v_msgData_407_);
v___x_421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1(v_msgData_422_, v___y_423_, v___y_424_);
lean_dec(v___y_424_);
lean_dec_ref(v___y_423_);
return v_res_426_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__2(lean_object* v_opts_427_, lean_object* v_opt_428_){
_start:
{
lean_object* v_name_429_; lean_object* v_defValue_430_; lean_object* v_map_431_; lean_object* v___x_432_; 
v_name_429_ = lean_ctor_get(v_opt_428_, 0);
v_defValue_430_ = lean_ctor_get(v_opt_428_, 1);
v_map_431_ = lean_ctor_get(v_opts_427_, 0);
v___x_432_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_431_, v_name_429_);
if (lean_obj_tag(v___x_432_) == 0)
{
uint8_t v___x_433_; 
v___x_433_ = lean_unbox(v_defValue_430_);
return v___x_433_;
}
else
{
lean_object* v_val_434_; 
v_val_434_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_val_434_);
lean_dec_ref_known(v___x_432_, 1);
if (lean_obj_tag(v_val_434_) == 1)
{
uint8_t v_v_435_; 
v_v_435_ = lean_ctor_get_uint8(v_val_434_, 0);
lean_dec_ref_known(v_val_434_, 0);
return v_v_435_;
}
else
{
uint8_t v___x_436_; 
lean_dec(v_val_434_);
v___x_436_ = lean_unbox(v_defValue_430_);
return v___x_436_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__2___boxed(lean_object* v_opts_437_, lean_object* v_opt_438_){
_start:
{
uint8_t v_res_439_; lean_object* v_r_440_; 
v_res_439_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__2(v_opts_437_, v_opt_438_);
lean_dec_ref(v_opt_438_);
lean_dec_ref(v_opts_437_);
v_r_440_ = lean_box(v_res_439_);
return v_r_440_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0(uint8_t v___x_447_, lean_object* v_x_448_){
_start:
{
if (lean_obj_tag(v_x_448_) == 1)
{
lean_object* v_pre_449_; 
v_pre_449_ = lean_ctor_get(v_x_448_, 0);
switch(lean_obj_tag(v_pre_449_))
{
case 1:
{
lean_object* v_pre_450_; 
v_pre_450_ = lean_ctor_get(v_pre_449_, 0);
switch(lean_obj_tag(v_pre_450_))
{
case 0:
{
lean_object* v_str_451_; lean_object* v_str_452_; lean_object* v___x_453_; uint8_t v___x_454_; 
v_str_451_ = lean_ctor_get(v_x_448_, 1);
v_str_452_ = lean_ctor_get(v_pre_449_, 1);
v___x_453_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__0));
v___x_454_ = lean_string_dec_eq(v_str_452_, v___x_453_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; uint8_t v___x_456_; 
v___x_455_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1___closed__4));
v___x_456_ = lean_string_dec_eq(v_str_452_, v___x_455_);
if (v___x_456_ == 0)
{
return v___x_456_;
}
else
{
lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_457_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__1));
v___x_458_ = lean_string_dec_eq(v_str_451_, v___x_457_);
return v___x_458_;
}
}
else
{
lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_459_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__2));
v___x_460_ = lean_string_dec_eq(v_str_451_, v___x_459_);
return v___x_460_;
}
}
case 1:
{
lean_object* v_pre_461_; 
v_pre_461_ = lean_ctor_get(v_pre_450_, 0);
if (lean_obj_tag(v_pre_461_) == 0)
{
lean_object* v_str_462_; lean_object* v_str_463_; lean_object* v_str_464_; lean_object* v___x_465_; uint8_t v___x_466_; 
v_str_462_ = lean_ctor_get(v_x_448_, 1);
v_str_463_ = lean_ctor_get(v_pre_449_, 1);
v_str_464_ = lean_ctor_get(v_pre_450_, 1);
v___x_465_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__3));
v___x_466_ = lean_string_dec_eq(v_str_464_, v___x_465_);
if (v___x_466_ == 0)
{
return v___x_466_;
}
else
{
lean_object* v___x_467_; uint8_t v___x_468_; 
v___x_467_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__4));
v___x_468_ = lean_string_dec_eq(v_str_463_, v___x_467_);
if (v___x_468_ == 0)
{
return v___x_468_;
}
else
{
lean_object* v___x_469_; uint8_t v___x_470_; 
v___x_469_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___closed__5));
v___x_470_ = lean_string_dec_eq(v_str_462_, v___x_469_);
return v___x_470_;
}
}
}
else
{
return v___x_447_;
}
}
default: 
{
return v___x_447_;
}
}
}
case 0:
{
lean_object* v_str_471_; lean_object* v___x_472_; uint8_t v___x_473_; 
v_str_471_ = lean_ctor_get(v_x_448_, 1);
v___x_472_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1_spec__1___closed__0));
v___x_473_ = lean_string_dec_eq(v_str_471_, v___x_472_);
return v___x_473_;
}
default: 
{
return v___x_447_;
}
}
}
else
{
return v___x_447_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0___boxed(lean_object* v___x_474_, lean_object* v_x_475_){
_start:
{
uint8_t v___x_2727__boxed_476_; uint8_t v_res_477_; lean_object* v_r_478_; 
v___x_2727__boxed_476_ = lean_unbox(v___x_474_);
v_res_477_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___lam__0(v___x_2727__boxed_476_, v_x_475_);
lean_dec(v_x_475_);
v_r_478_ = lean_box(v_res_477_);
return v_r_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0(lean_object* v_ref_483_, lean_object* v_msgData_484_, uint8_t v_severity_485_, uint8_t v_isSilent_486_, lean_object* v___y_487_, lean_object* v___y_488_){
_start:
{
lean_object* v___y_491_; lean_object* v___y_492_; lean_object* v___y_493_; uint8_t v___y_494_; lean_object* v___y_495_; uint8_t v___y_496_; lean_object* v___y_497_; lean_object* v_toCold_498_; lean_object* v___y_499_; lean_object* v___y_528_; lean_object* v___y_529_; lean_object* v___y_530_; uint8_t v___y_531_; uint8_t v___y_532_; lean_object* v___y_533_; uint8_t v___y_534_; lean_object* v___y_535_; lean_object* v___y_555_; lean_object* v___y_556_; uint8_t v___y_557_; lean_object* v___y_558_; uint8_t v___y_559_; uint8_t v___y_560_; lean_object* v___y_561_; uint8_t v___y_565_; uint8_t v___x_582_; uint8_t v___x_583_; 
v___x_582_ = 2;
v___x_583_ = l_Lean_instBEqMessageSeverity_beq(v_severity_485_, v___x_582_);
if (v___x_583_ == 0)
{
goto v___jp_575_;
}
else
{
uint8_t v___x_584_; 
lean_inc_ref(v_msgData_484_);
v___x_584_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_484_);
if (v___x_584_ == 0)
{
goto v___jp_575_;
}
else
{
lean_object* v___x_585_; lean_object* v___x_586_; 
lean_dec_ref(v_msgData_484_);
v___x_585_ = lean_box(0);
v___x_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
return v___x_586_;
}
}
v___jp_490_:
{
lean_object* v_currNamespace_500_; lean_object* v_openDecls_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v_env_506_; lean_object* v_nextMacroScope_507_; lean_object* v_ngen_508_; lean_object* v_auxDeclNGen_509_; lean_object* v_traceState_510_; lean_object* v_cache_511_; lean_object* v_recordedDeps_512_; lean_object* v_messages_513_; lean_object* v_infoState_514_; lean_object* v_snapshotTasks_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_526_; 
v_currNamespace_500_ = lean_ctor_get(v_toCold_498_, 4);
v_openDecls_501_ = lean_ctor_get(v_toCold_498_, 5);
lean_inc(v_openDecls_501_);
lean_inc(v_currNamespace_500_);
v___x_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_502_, 0, v_currNamespace_500_);
lean_ctor_set(v___x_502_, 1, v_openDecls_501_);
v___x_503_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
lean_ctor_set(v___x_503_, 1, v___y_495_);
lean_inc_ref(v___y_492_);
lean_inc_ref(v___y_493_);
v___x_504_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_504_, 0, v___y_493_);
lean_ctor_set(v___x_504_, 1, v___y_491_);
lean_ctor_set(v___x_504_, 2, v___y_497_);
lean_ctor_set(v___x_504_, 3, v___y_492_);
lean_ctor_set(v___x_504_, 4, v___x_503_);
lean_ctor_set_uint8(v___x_504_, sizeof(void*)*5, v___y_494_);
lean_ctor_set_uint8(v___x_504_, sizeof(void*)*5 + 1, v___y_496_);
lean_ctor_set_uint8(v___x_504_, sizeof(void*)*5 + 2, v_isSilent_486_);
v___x_505_ = lean_st_ref_take(v___y_499_);
v_env_506_ = lean_ctor_get(v___x_505_, 0);
v_nextMacroScope_507_ = lean_ctor_get(v___x_505_, 1);
v_ngen_508_ = lean_ctor_get(v___x_505_, 2);
v_auxDeclNGen_509_ = lean_ctor_get(v___x_505_, 3);
v_traceState_510_ = lean_ctor_get(v___x_505_, 4);
v_cache_511_ = lean_ctor_get(v___x_505_, 5);
v_recordedDeps_512_ = lean_ctor_get(v___x_505_, 6);
v_messages_513_ = lean_ctor_get(v___x_505_, 7);
v_infoState_514_ = lean_ctor_get(v___x_505_, 8);
v_snapshotTasks_515_ = lean_ctor_get(v___x_505_, 9);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_526_ == 0)
{
v___x_517_ = v___x_505_;
v_isShared_518_ = v_isSharedCheck_526_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_snapshotTasks_515_);
lean_inc(v_infoState_514_);
lean_inc(v_messages_513_);
lean_inc(v_recordedDeps_512_);
lean_inc(v_cache_511_);
lean_inc(v_traceState_510_);
lean_inc(v_auxDeclNGen_509_);
lean_inc(v_ngen_508_);
lean_inc(v_nextMacroScope_507_);
lean_inc(v_env_506_);
lean_dec(v___x_505_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_526_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_522_; 
v___x_519_ = lean_box(0);
v___x_520_ = l_Lean_MessageLog_add(v___x_504_, v_messages_513_);
if (v_isShared_518_ == 0)
{
lean_ctor_set(v___x_517_, 7, v___x_520_);
v___x_522_ = v___x_517_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_env_506_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v_nextMacroScope_507_);
lean_ctor_set(v_reuseFailAlloc_525_, 2, v_ngen_508_);
lean_ctor_set(v_reuseFailAlloc_525_, 3, v_auxDeclNGen_509_);
lean_ctor_set(v_reuseFailAlloc_525_, 4, v_traceState_510_);
lean_ctor_set(v_reuseFailAlloc_525_, 5, v_cache_511_);
lean_ctor_set(v_reuseFailAlloc_525_, 6, v_recordedDeps_512_);
lean_ctor_set(v_reuseFailAlloc_525_, 7, v___x_520_);
lean_ctor_set(v_reuseFailAlloc_525_, 8, v_infoState_514_);
lean_ctor_set(v_reuseFailAlloc_525_, 9, v_snapshotTasks_515_);
v___x_522_ = v_reuseFailAlloc_525_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = lean_st_ref_put(v___y_499_, v___x_522_);
v___x_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_524_, 0, v___x_519_);
return v___x_524_;
}
}
}
v___jp_527_:
{
lean_object* v_fileName_536_; lean_object* v_fileMap_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_553_; 
v_fileName_536_ = lean_ctor_get(v___y_533_, 0);
v_fileMap_537_ = lean_ctor_get(v___y_533_, 1);
v___x_538_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_484_);
v___x_539_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1(v___x_538_, v___y_487_, v___y_488_);
v_a_540_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_553_ == 0)
{
v___x_542_ = v___x_539_;
v_isShared_543_ = v_isSharedCheck_553_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_539_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_553_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
lean_inc_ref_n(v_fileMap_537_, 2);
v___x_544_ = l_Lean_FileMap_toPosition(v_fileMap_537_, v___y_530_);
lean_dec(v___y_530_);
v___x_545_ = l_Lean_FileMap_toPosition(v_fileMap_537_, v___y_535_);
lean_dec(v___y_535_);
v___x_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_546_, 0, v___x_545_);
v___x_547_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___closed__0));
if (v___y_534_ == 0)
{
lean_del_object(v___x_542_);
v___y_491_ = v___x_544_;
v___y_492_ = v___x_547_;
v___y_493_ = v_fileName_536_;
v___y_494_ = v___y_531_;
v___y_495_ = v_a_540_;
v___y_496_ = v___y_532_;
v___y_497_ = v___x_546_;
v_toCold_498_ = v___y_529_;
v___y_499_ = v___y_488_;
goto v___jp_490_;
}
else
{
uint8_t v___x_548_; 
lean_inc(v_a_540_);
lean_inc_ref(v___y_528_);
v___x_548_ = l_Lean_MessageData_hasTag(v___y_528_, v_a_540_);
if (v___x_548_ == 0)
{
lean_object* v___x_549_; lean_object* v___x_551_; 
lean_dec_ref_known(v___x_546_, 1);
lean_dec_ref(v___x_544_);
lean_dec(v_a_540_);
v___x_549_ = lean_box(0);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 0, v___x_549_);
v___x_551_ = v___x_542_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v___x_549_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
else
{
lean_del_object(v___x_542_);
v___y_491_ = v___x_544_;
v___y_492_ = v___x_547_;
v___y_493_ = v_fileName_536_;
v___y_494_ = v___y_531_;
v___y_495_ = v_a_540_;
v___y_496_ = v___y_532_;
v___y_497_ = v___x_546_;
v_toCold_498_ = v___y_529_;
v___y_499_ = v___y_488_;
goto v___jp_490_;
}
}
}
}
v___jp_554_:
{
lean_object* v___x_562_; 
v___x_562_ = l_Lean_Syntax_getTailPos_x3f(v___y_556_, v___y_557_);
lean_dec(v___y_556_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_inc(v___y_561_);
v___y_528_ = v___y_555_;
v___y_529_ = v___y_558_;
v___y_530_ = v___y_561_;
v___y_531_ = v___y_557_;
v___y_532_ = v___y_560_;
v___y_533_ = v___y_558_;
v___y_534_ = v___y_559_;
v___y_535_ = v___y_561_;
goto v___jp_527_;
}
else
{
lean_object* v_val_563_; 
v_val_563_ = lean_ctor_get(v___x_562_, 0);
lean_inc(v_val_563_);
lean_dec_ref_known(v___x_562_, 1);
v___y_528_ = v___y_555_;
v___y_529_ = v___y_558_;
v___y_530_ = v___y_561_;
v___y_531_ = v___y_557_;
v___y_532_ = v___y_560_;
v___y_533_ = v___y_558_;
v___y_534_ = v___y_559_;
v___y_535_ = v_val_563_;
goto v___jp_527_;
}
}
v___jp_564_:
{
lean_object* v_toCold_566_; lean_object* v_ref_567_; uint8_t v_suppressElabErrors_568_; lean_object* v_ref_569_; uint8_t v___x_570_; lean_object* v___f_571_; lean_object* v___x_572_; 
v_toCold_566_ = lean_ctor_get(v___y_487_, 0);
v_ref_567_ = lean_ctor_get(v___y_487_, 2);
v_suppressElabErrors_568_ = lean_ctor_get_uint8(v___y_487_, sizeof(void*)*3 + 2);
v_ref_569_ = l_Lean_replaceRef(v_ref_483_, v_ref_567_);
v___x_570_ = 0;
v___f_571_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___closed__1));
v___x_572_ = l_Lean_Syntax_getPos_x3f(v_ref_569_, v___x_570_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v___x_573_; 
v___x_573_ = lean_unsigned_to_nat(0u);
v___y_555_ = v___f_571_;
v___y_556_ = v_ref_569_;
v___y_557_ = v___x_570_;
v___y_558_ = v_toCold_566_;
v___y_559_ = v_suppressElabErrors_568_;
v___y_560_ = v___y_565_;
v___y_561_ = v___x_573_;
goto v___jp_554_;
}
else
{
lean_object* v_val_574_; 
v_val_574_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_val_574_);
lean_dec_ref_known(v___x_572_, 1);
v___y_555_ = v___f_571_;
v___y_556_ = v_ref_569_;
v___y_557_ = v___x_570_;
v___y_558_ = v_toCold_566_;
v___y_559_ = v_suppressElabErrors_568_;
v___y_560_ = v___y_565_;
v___y_561_ = v_val_574_;
goto v___jp_554_;
}
}
v___jp_575_:
{
uint8_t v___x_576_; uint8_t v___x_577_; 
v___x_576_ = 1;
v___x_577_ = l_Lean_instBEqMessageSeverity_beq(v_severity_485_, v___x_576_);
if (v___x_577_ == 0)
{
v___y_565_ = v_severity_485_;
goto v___jp_564_;
}
else
{
lean_object* v___x_578_; lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_578_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_487_);
v___x_579_ = l_Lean_warningAsError;
v___x_580_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__2(v___x_578_, v___x_579_);
lean_dec_ref(v___x_578_);
if (v___x_580_ == 0)
{
v___y_565_ = v_severity_485_;
goto v___jp_564_;
}
else
{
uint8_t v___x_581_; 
v___x_581_ = 2;
v___y_565_ = v___x_581_;
goto v___jp_564_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___boxed(lean_object* v_ref_587_, lean_object* v_msgData_588_, lean_object* v_severity_589_, lean_object* v_isSilent_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
uint8_t v_severity_boxed_594_; uint8_t v_isSilent_boxed_595_; lean_object* v_res_596_; 
v_severity_boxed_594_ = lean_unbox(v_severity_589_);
v_isSilent_boxed_595_ = lean_unbox(v_isSilent_590_);
v_res_596_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0(v_ref_587_, v_msgData_588_, v_severity_boxed_594_, v_isSilent_boxed_595_, v___y_591_, v___y_592_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
lean_dec(v_ref_587_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0(lean_object* v_ref_597_, lean_object* v_msgData_598_, lean_object* v___y_599_, lean_object* v___y_600_){
_start:
{
uint8_t v___x_602_; uint8_t v___x_603_; lean_object* v___x_604_; 
v___x_602_ = 0;
v___x_603_ = 0;
v___x_604_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0(v_ref_597_, v_msgData_598_, v___x_602_, v___x_603_, v___y_599_, v___y_600_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0___boxed(lean_object* v_ref_605_, lean_object* v_msgData_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0(v_ref_605_, v_msgData_606_, v___y_607_, v___y_608_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v_ref_605_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion(lean_object* v_ref_611_, lean_object* v_s_612_, lean_object* v_origSpan_x3f_613_, lean_object* v_header_614_, lean_object* v_codeActionPrefix_x3f_615_, uint8_t v_diffGranularity_616_, lean_object* v_footer_617_, lean_object* v_a_618_, lean_object* v_a_619_){
_start:
{
lean_object* v___x_621_; lean_object* v_hintSuggestion_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; uint8_t v___x_626_; lean_object* v___x_627_; 
v___x_621_ = lean_box(0);
v_hintSuggestion_622_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_hintSuggestion_622_, 0, v_s_612_);
lean_ctor_set(v_hintSuggestion_622_, 1, v_origSpan_x3f_613_);
lean_ctor_set(v_hintSuggestion_622_, 2, v___x_621_);
lean_ctor_set_uint8(v_hintSuggestion_622_, sizeof(void*)*3, v_diffGranularity_616_);
v___x_623_ = lean_unsigned_to_nat(1u);
v___x_624_ = lean_mk_empty_array_with_capacity(v___x_623_);
v___x_625_ = lean_array_push(v___x_624_, v_hintSuggestion_622_);
v___x_626_ = 0;
lean_inc(v_ref_611_);
v___x_627_ = l_Lean_Meta_Hint_mkSuggestionsMessage(v___x_625_, v_ref_611_, v_codeActionPrefix_x3f_615_, v___x_626_, v_a_618_, v_a_619_);
lean_dec_ref(v___x_625_);
if (lean_obj_tag(v___x_627_) == 0)
{
lean_object* v_a_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v_a_628_ = lean_ctor_get(v___x_627_, 0);
lean_inc(v_a_628_);
lean_dec_ref_known(v___x_627_, 1);
v___x_629_ = l_Lean_stringToMessageData(v_header_614_);
v___x_630_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
lean_ctor_set(v___x_630_, 1, v_a_628_);
v___x_631_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
lean_ctor_set(v___x_631_, 1, v_footer_617_);
v___x_632_ = l_Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0(v_ref_611_, v___x_631_, v_a_618_, v_a_619_);
lean_dec(v_ref_611_);
return v___x_632_;
}
else
{
lean_object* v_a_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_640_; 
lean_dec_ref(v_footer_617_);
lean_dec_ref(v_header_614_);
lean_dec(v_ref_611_);
v_a_633_ = lean_ctor_get(v___x_627_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_640_ == 0)
{
v___x_635_ = v___x_627_;
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_a_633_);
lean_dec(v___x_627_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_638_; 
if (v_isShared_636_ == 0)
{
v___x_638_ = v___x_635_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_a_633_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion___boxed(lean_object* v_ref_641_, lean_object* v_s_642_, lean_object* v_origSpan_x3f_643_, lean_object* v_header_644_, lean_object* v_codeActionPrefix_x3f_645_, lean_object* v_diffGranularity_646_, lean_object* v_footer_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_){
_start:
{
uint8_t v_diffGranularity_boxed_651_; lean_object* v_res_652_; 
v_diffGranularity_boxed_651_ = lean_unbox(v_diffGranularity_646_);
v_res_652_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_ref_641_, v_s_642_, v_origSpan_x3f_643_, v_header_644_, v_codeActionPrefix_x3f_645_, v_diffGranularity_boxed_651_, v_footer_647_, v_a_648_, v_a_649_);
lean_dec(v_a_649_);
lean_dec_ref(v_a_648_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1_spec__1___redArg(lean_object* v_msg_653_, lean_object* v___y_654_, lean_object* v___y_655_){
_start:
{
lean_object* v_ref_657_; lean_object* v___x_658_; lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_667_; 
v_ref_657_ = lean_ctor_get(v___y_654_, 2);
v___x_658_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__1(v_msg_653_, v___y_654_, v___y_655_);
v_a_659_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_667_ == 0)
{
v___x_661_ = v___x_658_;
v_isShared_662_ = v_isSharedCheck_667_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_dec(v___x_658_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_667_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_663_; lean_object* v___x_665_; 
lean_inc(v_ref_657_);
v___x_663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_663_, 0, v_ref_657_);
lean_ctor_set(v___x_663_, 1, v_a_659_);
if (v_isShared_662_ == 0)
{
lean_ctor_set_tag(v___x_661_, 1);
lean_ctor_set(v___x_661_, 0, v___x_663_);
v___x_665_ = v___x_661_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v___x_663_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1_spec__1___redArg___boxed(lean_object* v_msg_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1_spec__1___redArg(v_msg_668_, v___y_669_, v___y_670_);
lean_dec(v___y_670_);
lean_dec_ref(v___y_669_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1___redArg(lean_object* v_ref_673_, lean_object* v_msg_674_, lean_object* v___y_675_, lean_object* v___y_676_){
_start:
{
lean_object* v_toCold_678_; lean_object* v_currRecDepth_679_; lean_object* v_ref_680_; uint16_t v_optionFlags_681_; uint8_t v_suppressElabErrors_682_; uint8_t v_checkDeprecated_683_; uint8_t v_isRecordingDeps_684_; lean_object* v_ref_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v_toCold_678_ = lean_ctor_get(v___y_675_, 0);
v_currRecDepth_679_ = lean_ctor_get(v___y_675_, 1);
v_ref_680_ = lean_ctor_get(v___y_675_, 2);
v_optionFlags_681_ = lean_ctor_get_uint16(v___y_675_, sizeof(void*)*3);
v_suppressElabErrors_682_ = lean_ctor_get_uint8(v___y_675_, sizeof(void*)*3 + 2);
v_checkDeprecated_683_ = lean_ctor_get_uint8(v___y_675_, sizeof(void*)*3 + 3);
v_isRecordingDeps_684_ = lean_ctor_get_uint8(v___y_675_, sizeof(void*)*3 + 4);
v_ref_685_ = l_Lean_replaceRef(v_ref_673_, v_ref_680_);
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
v___x_687_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1_spec__1___redArg(v_msg_674_, v___x_686_, v___y_676_);
lean_dec_ref_known(v___x_686_, 3);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1___redArg___boxed(lean_object* v_ref_688_, lean_object* v_msg_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1___redArg(v_ref_688_, v_msg_689_, v___y_690_, v___y_691_);
lean_dec(v___y_691_);
lean_dec_ref(v___y_690_);
lean_dec(v_ref_688_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__0(lean_object* v_origSpan_x3f_694_, uint8_t v_diffGranularity_695_, size_t v_sz_696_, size_t v_i_697_, lean_object* v_bs_698_){
_start:
{
uint8_t v___x_699_; 
v___x_699_ = lean_usize_dec_lt(v_i_697_, v_sz_696_);
if (v___x_699_ == 0)
{
lean_dec(v_origSpan_x3f_694_);
return v_bs_698_;
}
else
{
lean_object* v_v_700_; lean_object* v___x_701_; lean_object* v_bs_x27_702_; lean_object* v___x_703_; lean_object* v___x_704_; size_t v___x_705_; size_t v___x_706_; lean_object* v___x_707_; 
v_v_700_ = lean_array_uget(v_bs_698_, v_i_697_);
v___x_701_ = lean_unsigned_to_nat(0u);
v_bs_x27_702_ = lean_array_uset(v_bs_698_, v_i_697_, v___x_701_);
v___x_703_ = lean_box(0);
lean_inc(v_origSpan_x3f_694_);
v___x_704_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_704_, 0, v_v_700_);
lean_ctor_set(v___x_704_, 1, v_origSpan_x3f_694_);
lean_ctor_set(v___x_704_, 2, v___x_703_);
lean_ctor_set_uint8(v___x_704_, sizeof(void*)*3, v_diffGranularity_695_);
v___x_705_ = ((size_t)1ULL);
v___x_706_ = lean_usize_add(v_i_697_, v___x_705_);
v___x_707_ = lean_array_uset(v_bs_x27_702_, v_i_697_, v___x_704_);
v_i_697_ = v___x_706_;
v_bs_698_ = v___x_707_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__0___boxed(lean_object* v_origSpan_x3f_709_, lean_object* v_diffGranularity_710_, lean_object* v_sz_711_, lean_object* v_i_712_, lean_object* v_bs_713_){
_start:
{
uint8_t v_diffGranularity_boxed_714_; size_t v_sz_boxed_715_; size_t v_i_boxed_716_; lean_object* v_res_717_; 
v_diffGranularity_boxed_714_ = lean_unbox(v_diffGranularity_710_);
v_sz_boxed_715_ = lean_unbox_usize(v_sz_711_);
lean_dec(v_sz_711_);
v_i_boxed_716_ = lean_unbox_usize(v_i_712_);
lean_dec(v_i_712_);
v_res_717_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__0(v_origSpan_x3f_709_, v_diffGranularity_boxed_714_, v_sz_boxed_715_, v_i_boxed_716_, v_bs_713_);
return v_res_717_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg___closed__1(void){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_719_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg___closed__0));
v___x_720_ = l_Lean_stringToMessageData(v___x_719_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg(lean_object* v_ref_721_, lean_object* v_suggestions_722_, lean_object* v_origSpan_x3f_723_, lean_object* v_header_724_, lean_object* v_codeActionPrefix_x3f_725_, uint8_t v_diffGranularity_726_, lean_object* v_footer_727_, lean_object* v_a_728_, lean_object* v_a_729_){
_start:
{
lean_object* v___y_732_; lean_object* v___y_733_; lean_object* v___x_752_; lean_object* v___x_753_; uint8_t v___x_754_; 
v___x_752_ = lean_array_get_size(v_suggestions_722_);
v___x_753_ = lean_unsigned_to_nat(0u);
v___x_754_ = lean_nat_dec_eq(v___x_752_, v___x_753_);
if (v___x_754_ == 0)
{
v___y_732_ = v_a_728_;
v___y_733_ = v_a_729_;
goto v___jp_731_;
}
else
{
lean_object* v___x_755_; lean_object* v___x_756_; 
lean_dec_ref(v_footer_727_);
lean_dec(v_codeActionPrefix_x3f_725_);
lean_dec_ref(v_header_724_);
lean_dec(v_origSpan_x3f_723_);
lean_dec_ref(v_suggestions_722_);
v___x_755_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg___closed__1, &l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg___closed__1);
v___x_756_ = l_Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1___redArg(v_ref_721_, v___x_755_, v_a_728_, v_a_729_);
lean_dec(v_ref_721_);
return v___x_756_;
}
v___jp_731_:
{
size_t v_sz_734_; size_t v___x_735_; lean_object* v_hintSuggestions_736_; uint8_t v___x_737_; lean_object* v___x_738_; 
v_sz_734_ = lean_array_size(v_suggestions_722_);
v___x_735_ = ((size_t)0ULL);
v_hintSuggestions_736_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__0(v_origSpan_x3f_723_, v_diffGranularity_726_, v_sz_734_, v___x_735_, v_suggestions_722_);
v___x_737_ = 1;
lean_inc(v_ref_721_);
v___x_738_ = l_Lean_Meta_Hint_mkSuggestionsMessage(v_hintSuggestions_736_, v_ref_721_, v_codeActionPrefix_x3f_725_, v___x_737_, v___y_732_, v___y_733_);
lean_dec_ref(v_hintSuggestions_736_);
if (lean_obj_tag(v___x_738_) == 0)
{
lean_object* v_a_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v_a_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc(v_a_739_);
lean_dec_ref_known(v___x_738_, 1);
v___x_740_ = l_Lean_stringToMessageData(v_header_724_);
v___x_741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
lean_ctor_set(v___x_741_, 1, v_a_739_);
v___x_742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_741_);
lean_ctor_set(v___x_742_, 1, v_footer_727_);
v___x_743_ = l_Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0(v_ref_721_, v___x_742_, v___y_732_, v___y_733_);
lean_dec(v_ref_721_);
return v___x_743_;
}
else
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_751_; 
lean_dec_ref(v_footer_727_);
lean_dec_ref(v_header_724_);
lean_dec(v_ref_721_);
v_a_744_ = lean_ctor_get(v___x_738_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_751_ == 0)
{
v___x_746_ = v___x_738_;
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_738_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_749_; 
if (v_isShared_747_ == 0)
{
v___x_749_ = v___x_746_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_a_744_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg___boxed(lean_object* v_ref_757_, lean_object* v_suggestions_758_, lean_object* v_origSpan_x3f_759_, lean_object* v_header_760_, lean_object* v_codeActionPrefix_x3f_761_, lean_object* v_diffGranularity_762_, lean_object* v_footer_763_, lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_){
_start:
{
uint8_t v_diffGranularity_boxed_767_; lean_object* v_res_768_; 
v_diffGranularity_boxed_767_ = lean_unbox(v_diffGranularity_762_);
v_res_768_ = l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg(v_ref_757_, v_suggestions_758_, v_origSpan_x3f_759_, v_header_760_, v_codeActionPrefix_x3f_761_, v_diffGranularity_boxed_767_, v_footer_763_, v_a_764_, v_a_765_);
lean_dec(v_a_765_);
lean_dec_ref(v_a_764_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestions(lean_object* v_ref_769_, lean_object* v_suggestions_770_, lean_object* v_origSpan_x3f_771_, lean_object* v_header_772_, lean_object* v_style_x3f_773_, lean_object* v_codeActionPrefix_x3f_774_, uint8_t v_diffGranularity_775_, lean_object* v_footer_776_, lean_object* v_a_777_, lean_object* v_a_778_){
_start:
{
lean_object* v___x_780_; 
v___x_780_ = l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg(v_ref_769_, v_suggestions_770_, v_origSpan_x3f_771_, v_header_772_, v_codeActionPrefix_x3f_774_, v_diffGranularity_775_, v_footer_776_, v_a_777_, v_a_778_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestions___boxed(lean_object* v_ref_781_, lean_object* v_suggestions_782_, lean_object* v_origSpan_x3f_783_, lean_object* v_header_784_, lean_object* v_style_x3f_785_, lean_object* v_codeActionPrefix_x3f_786_, lean_object* v_diffGranularity_787_, lean_object* v_footer_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_){
_start:
{
uint8_t v_diffGranularity_boxed_792_; lean_object* v_res_793_; 
v_diffGranularity_boxed_792_ = lean_unbox(v_diffGranularity_787_);
v_res_793_ = l_Lean_Meta_Tactic_TryThis_addSuggestions(v_ref_781_, v_suggestions_782_, v_origSpan_x3f_783_, v_header_784_, v_style_x3f_785_, v_codeActionPrefix_x3f_786_, v_diffGranularity_boxed_792_, v_footer_788_, v_a_789_, v_a_790_);
lean_dec(v_a_790_);
lean_dec_ref(v_a_789_);
lean_dec(v_style_x3f_785_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1(lean_object* v_00_u03b1_794_, lean_object* v_ref_795_, lean_object* v_msg_796_, lean_object* v___y_797_, lean_object* v___y_798_){
_start:
{
lean_object* v___x_800_; 
v___x_800_ = l_Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1___redArg(v_ref_795_, v_msg_796_, v___y_797_, v___y_798_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1___boxed(lean_object* v_00_u03b1_801_, lean_object* v_ref_802_, lean_object* v_msg_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1(v_00_u03b1_801_, v_ref_802_, v_msg_803_, v___y_804_, v___y_805_);
lean_dec(v___y_805_);
lean_dec_ref(v___y_804_);
lean_dec(v_ref_802_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1_spec__1(lean_object* v_00_u03b1_808_, lean_object* v_msg_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1_spec__1___redArg(v_msg_809_, v___y_810_, v___y_811_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1_spec__1___boxed(lean_object* v_00_u03b1_814_, lean_object* v_msg_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Tactic_TryThis_addSuggestions_spec__1_spec__1(v_00_u03b1_814_, v_msg_815_, v___y_816_, v___y_817_);
lean_dec(v___y_817_);
lean_dec_ref(v___y_816_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__0___redArg(lean_object* v_a_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; 
lean_inc(v___y_822_);
lean_inc_ref(v___y_821_);
v___x_830_ = lean_apply_2(v_a_820_, v___y_821_, v___y_822_);
v___x_831_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___x_830_, v___y_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__0___redArg___boxed(lean_object* v_a_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__0___redArg(v_a_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__0(lean_object* v_00_u03b1_843_, lean_object* v_a_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
lean_object* v___x_854_; 
v___x_854_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__0___redArg(v_a_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__0___boxed(lean_object* v_00_u03b1_855_, lean_object* v_a_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__0(v_00_u03b1_855_, v_a_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__1___redArg(lean_object* v_e_867_, lean_object* v___y_868_){
_start:
{
uint8_t v___x_870_; 
v___x_870_ = l_Lean_Expr_hasMVar(v_e_867_);
if (v___x_870_ == 0)
{
lean_object* v___x_871_; 
v___x_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_871_, 0, v_e_867_);
return v___x_871_;
}
else
{
lean_object* v___x_872_; lean_object* v_mctx_873_; lean_object* v___x_874_; lean_object* v_fst_875_; lean_object* v_snd_876_; lean_object* v___x_877_; lean_object* v_cache_878_; lean_object* v_zetaDeltaFVarIds_879_; lean_object* v_postponed_880_; lean_object* v_diag_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_890_; 
v___x_872_ = lean_st_ref_get(v___y_868_);
v_mctx_873_ = lean_ctor_get(v___x_872_, 0);
lean_inc_ref(v_mctx_873_);
lean_dec(v___x_872_);
v___x_874_ = l_Lean_instantiateMVarsCore(v_mctx_873_, v_e_867_);
v_fst_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc(v_fst_875_);
v_snd_876_ = lean_ctor_get(v___x_874_, 1);
lean_inc(v_snd_876_);
lean_dec_ref(v___x_874_);
v___x_877_ = lean_st_ref_take(v___y_868_);
v_cache_878_ = lean_ctor_get(v___x_877_, 1);
v_zetaDeltaFVarIds_879_ = lean_ctor_get(v___x_877_, 2);
v_postponed_880_ = lean_ctor_get(v___x_877_, 3);
v_diag_881_ = lean_ctor_get(v___x_877_, 4);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_890_ == 0)
{
lean_object* v_unused_891_; 
v_unused_891_ = lean_ctor_get(v___x_877_, 0);
lean_dec(v_unused_891_);
v___x_883_ = v___x_877_;
v_isShared_884_ = v_isSharedCheck_890_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_diag_881_);
lean_inc(v_postponed_880_);
lean_inc(v_zetaDeltaFVarIds_879_);
lean_inc(v_cache_878_);
lean_dec(v___x_877_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_890_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 0, v_snd_876_);
v___x_886_ = v___x_883_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_snd_876_);
lean_ctor_set(v_reuseFailAlloc_889_, 1, v_cache_878_);
lean_ctor_set(v_reuseFailAlloc_889_, 2, v_zetaDeltaFVarIds_879_);
lean_ctor_set(v_reuseFailAlloc_889_, 3, v_postponed_880_);
lean_ctor_set(v_reuseFailAlloc_889_, 4, v_diag_881_);
v___x_886_ = v_reuseFailAlloc_889_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = lean_st_ref_put(v___y_868_, v___x_886_);
v___x_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_888_, 0, v_fst_875_);
return v___x_888_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__1___redArg___boxed(lean_object* v_e_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__1___redArg(v_e_892_, v___y_893_);
lean_dec(v___y_893_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__1(lean_object* v_e_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
lean_object* v___x_906_; 
v___x_906_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__1___redArg(v_e_896_, v___y_902_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__1___boxed(lean_object* v_e_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__1(v_e_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
lean_dec(v___y_909_);
lean_dec_ref(v___y_908_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__2___redArg(lean_object* v_msg_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v_ref_924_; lean_object* v___x_925_; lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_934_; 
v_ref_924_ = lean_ctor_get(v___y_921_, 2);
v___x_925_ = l_Lean_addMessageContextFull___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion_spec__0(v_msg_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_);
v_a_926_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_934_ == 0)
{
v___x_928_ = v___x_925_;
v_isShared_929_ = v_isSharedCheck_934_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_925_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_934_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_930_; lean_object* v___x_932_; 
lean_inc(v_ref_924_);
v___x_930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_930_, 0, v_ref_924_);
lean_ctor_set(v___x_930_, 1, v_a_926_);
if (v_isShared_929_ == 0)
{
lean_ctor_set_tag(v___x_928_, 1);
lean_ctor_set(v___x_928_, 0, v___x_930_);
v___x_932_ = v___x_928_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_930_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__2___redArg___boxed(lean_object* v_msg_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__2___redArg(v_msg_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
lean_dec(v___y_939_);
lean_dec_ref(v___y_938_);
lean_dec(v___y_937_);
lean_dec_ref(v___y_936_);
return v_res_941_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState___closed__1(void){
_start:
{
lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_943_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState___closed__0));
v___x_944_ = l_Lean_stringToMessageData(v___x_943_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState(lean_object* v_initialState_945_, lean_object* v_tac_946_, lean_object* v_expectedType_x3f_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_){
_start:
{
lean_object* v___x_957_; 
v___x_957_ = l_Lean_Elab_Tactic_saveState___redArg(v_a_949_, v_a_951_, v_a_953_, v_a_955_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_958_; uint8_t v___x_959_; lean_object* v_a_961_; lean_object* v_a_972_; lean_object* v___x_982_; 
v_a_958_ = lean_ctor_get(v___x_957_, 0);
lean_inc(v_a_958_);
lean_dec_ref_known(v___x_957_, 1);
v___x_959_ = 0;
v___x_982_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_initialState_945_, v___x_959_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
lean_dec_ref_known(v___x_982_, 1);
v___x_983_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___boxed), 10, 1);
lean_closure_set(v___x_983_, 0, v_tac_946_);
v___x_984_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___boxed), 11, 2);
lean_closure_set(v___x_984_, 0, lean_box(0));
lean_closure_set(v___x_984_, 1, v___x_983_);
v___x_985_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__0___redArg(v___x_984_, v_a_948_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_dec_ref_known(v___x_985_, 1);
if (lean_obj_tag(v_expectedType_x3f_947_) == 1)
{
lean_object* v_val_986_; lean_object* v___x_987_; 
v_val_986_ = lean_ctor_get(v_expectedType_x3f_947_, 0);
lean_inc(v_val_986_);
lean_dec_ref_known(v_expectedType_x3f_947_, 1);
v___x_987_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_949_, v_a_952_, v_a_953_, v_a_954_, v_a_955_);
if (lean_obj_tag(v___x_987_) == 0)
{
lean_object* v_a_988_; lean_object* v___x_989_; 
v_a_988_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_a_988_);
lean_dec_ref_known(v___x_987_, 1);
v___x_989_ = l_Lean_MVarId_getType(v_a_988_, v_a_952_, v_a_953_, v_a_954_, v_a_955_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; lean_object* v___x_991_; lean_object* v_a_992_; lean_object* v___x_993_; lean_object* v_a_994_; uint8_t v___x_995_; 
v_a_990_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_a_990_);
lean_dec_ref_known(v___x_989_, 1);
v___x_991_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__1___redArg(v_a_990_, v_a_953_);
v_a_992_ = lean_ctor_get(v___x_991_, 0);
lean_inc(v_a_992_);
lean_dec_ref(v___x_991_);
v___x_993_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__1___redArg(v_val_986_, v_a_953_);
v_a_994_ = lean_ctor_get(v___x_993_, 0);
lean_inc(v_a_994_);
lean_dec_ref(v___x_993_);
v___x_995_ = lean_expr_eqv(v_a_992_, v_a_994_);
lean_dec(v_a_994_);
lean_dec(v_a_992_);
if (v___x_995_ == 0)
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v_a_998_; 
v___x_996_ = lean_obj_once(&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState___closed__1, &l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState___closed__1_once, _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState___closed__1);
v___x_997_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__2___redArg(v___x_996_, v_a_952_, v_a_953_, v_a_954_, v_a_955_);
v_a_998_ = lean_ctor_get(v___x_997_, 0);
lean_inc(v_a_998_);
lean_dec_ref(v___x_997_);
v_a_961_ = v_a_998_;
goto v___jp_960_;
}
else
{
lean_object* v___x_999_; 
v___x_999_ = lean_box(0);
v_a_972_ = v___x_999_;
goto v___jp_971_;
}
}
else
{
lean_object* v_a_1000_; 
lean_dec(v_val_986_);
v_a_1000_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_a_1000_);
lean_dec_ref_known(v___x_989_, 1);
v_a_961_ = v_a_1000_;
goto v___jp_960_;
}
}
else
{
lean_object* v_a_1001_; 
lean_dec(v_val_986_);
v_a_1001_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_a_1001_);
lean_dec_ref_known(v___x_987_, 1);
v_a_961_ = v_a_1001_;
goto v___jp_960_;
}
}
else
{
lean_object* v___x_1002_; 
lean_dec(v_expectedType_x3f_947_);
v___x_1002_ = lean_box(0);
v_a_972_ = v___x_1002_;
goto v___jp_971_;
}
}
else
{
lean_object* v_a_1003_; 
lean_dec(v_expectedType_x3f_947_);
v_a_1003_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_a_1003_);
lean_dec_ref_known(v___x_985_, 1);
v_a_961_ = v_a_1003_;
goto v___jp_960_;
}
}
else
{
lean_dec(v_a_958_);
lean_dec(v_expectedType_x3f_947_);
lean_dec(v_tac_946_);
return v___x_982_;
}
v___jp_960_:
{
lean_object* v___x_962_; 
v___x_962_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_958_, v___x_959_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_);
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_969_ == 0)
{
lean_object* v_unused_970_; 
v_unused_970_ = lean_ctor_get(v___x_962_, 0);
lean_dec(v_unused_970_);
v___x_964_ = v___x_962_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_dec(v___x_962_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
lean_ctor_set_tag(v___x_964_, 1);
lean_ctor_set(v___x_964_, 0, v_a_961_);
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_961_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
else
{
lean_dec_ref(v_a_961_);
return v___x_962_;
}
}
v___jp_971_:
{
lean_object* v___x_973_; 
v___x_973_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_958_, v___x_959_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_);
if (lean_obj_tag(v___x_973_) == 0)
{
lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_980_ == 0)
{
lean_object* v_unused_981_; 
v_unused_981_ = lean_ctor_get(v___x_973_, 0);
lean_dec(v_unused_981_);
v___x_975_ = v___x_973_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_dec(v___x_973_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 0, v_a_972_);
v___x_978_ = v___x_975_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_a_972_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
else
{
return v___x_973_;
}
}
}
else
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
lean_dec(v_expectedType_x3f_947_);
lean_dec(v_tac_946_);
lean_dec_ref(v_initialState_945_);
v_a_1004_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1006_ = v___x_957_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_957_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_a_1004_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState___boxed(lean_object* v_initialState_1012_, lean_object* v_tac_1013_, lean_object* v_expectedType_x3f_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState(v_initialState_1012_, v_tac_1013_, v_expectedType_x3f_1014_, v_a_1015_, v_a_1016_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_, v_a_1021_, v_a_1022_);
lean_dec(v_a_1022_);
lean_dec_ref(v_a_1021_);
lean_dec(v_a_1020_);
lean_dec_ref(v_a_1019_);
lean_dec(v_a_1018_);
lean_dec_ref(v_a_1017_);
lean_dec(v_a_1016_);
lean_dec_ref(v_a_1015_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__2(lean_object* v_00_u03b1_1025_, lean_object* v_msg_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
lean_object* v___x_1036_; 
v___x_1036_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__2___redArg(v_msg_1026_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__2___boxed(lean_object* v_00_u03b1_1037_, lean_object* v_msg_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__2(v_00_u03b1_1037_, v_msg_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec_ref(v___y_1043_);
lean_dec(v___y_1042_);
lean_dec_ref(v___y_1041_);
lean_dec(v___y_1040_);
lean_dec_ref(v___y_1039_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_isValidTactic(lean_object* v_initialState_1049_, lean_object* v_tac_1050_, lean_object* v_expectedType_x3f_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lean_Elab_Tactic_saveState___redArg(v_a_1053_, v_a_1055_, v_a_1057_, v_a_1059_);
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_object* v_a_1062_; lean_object* v___x_1063_; 
v_a_1062_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_a_1062_);
lean_dec_ref_known(v___x_1061_, 1);
v___x_1063_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState(v_initialState_1049_, v_tac_1050_, v_expectedType_x3f_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_);
if (lean_obj_tag(v___x_1063_) == 0)
{
lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1072_; 
lean_dec(v_a_1062_);
v_isSharedCheck_1072_ = !lean_is_exclusive(v___x_1063_);
if (v_isSharedCheck_1072_ == 0)
{
lean_object* v_unused_1073_; 
v_unused_1073_ = lean_ctor_get(v___x_1063_, 0);
lean_dec(v_unused_1073_);
v___x_1065_ = v___x_1063_;
v_isShared_1066_ = v_isSharedCheck_1072_;
goto v_resetjp_1064_;
}
else
{
lean_dec(v___x_1063_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1072_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
uint8_t v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1070_; 
v___x_1067_ = 1;
v___x_1068_ = lean_box(v___x_1067_);
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 0, v___x_1068_);
v___x_1070_ = v___x_1065_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v___x_1068_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
else
{
lean_object* v_a_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1104_; 
v_a_1074_ = lean_ctor_get(v___x_1063_, 0);
v_isSharedCheck_1104_ = !lean_is_exclusive(v___x_1063_);
if (v_isSharedCheck_1104_ == 0)
{
v___x_1076_ = v___x_1063_;
v_isShared_1077_ = v_isSharedCheck_1104_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_a_1074_);
lean_dec(v___x_1063_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1104_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
uint8_t v___x_1078_; 
v___x_1078_ = l_Lean_Exception_isInterrupt(v_a_1074_);
if (v___x_1078_ == 0)
{
uint8_t v___x_1079_; 
lean_inc(v_a_1074_);
v___x_1079_ = l_Lean_Exception_isRuntime(v_a_1074_);
if (v___x_1079_ == 0)
{
lean_object* v___x_1080_; 
lean_del_object(v___x_1076_);
lean_dec(v_a_1074_);
v___x_1080_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_1062_, v___x_1079_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1088_; 
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1088_ == 0)
{
lean_object* v_unused_1089_; 
v_unused_1089_ = lean_ctor_get(v___x_1080_, 0);
lean_dec(v_unused_1089_);
v___x_1082_ = v___x_1080_;
v_isShared_1083_ = v_isSharedCheck_1088_;
goto v_resetjp_1081_;
}
else
{
lean_dec(v___x_1080_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1088_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1084_; lean_object* v___x_1086_; 
v___x_1084_ = lean_box(v___x_1079_);
if (v_isShared_1083_ == 0)
{
lean_ctor_set(v___x_1082_, 0, v___x_1084_);
v___x_1086_ = v___x_1082_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1084_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
else
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
v_a_1090_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___x_1080_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1080_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_a_1090_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
}
else
{
lean_object* v___x_1099_; 
lean_dec(v_a_1062_);
if (v_isShared_1077_ == 0)
{
v___x_1099_ = v___x_1076_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v_a_1074_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
else
{
lean_object* v___x_1102_; 
lean_dec(v_a_1062_);
if (v_isShared_1077_ == 0)
{
v___x_1102_ = v___x_1076_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_a_1074_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
return v___x_1102_;
}
}
}
}
}
else
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1112_; 
lean_dec(v_expectedType_x3f_1051_);
lean_dec(v_tac_1050_);
lean_dec_ref(v_initialState_1049_);
v_a_1105_ = lean_ctor_get(v___x_1061_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1107_ = v___x_1061_;
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1061_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1112_;
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
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1105_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_isValidTactic___boxed(lean_object* v_initialState_1113_, lean_object* v_tac_1114_, lean_object* v_expectedType_x3f_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Lean_Meta_Tactic_TryThis_isValidTactic(v_initialState_1113_, v_tac_1114_, v_expectedType_x3f_1115_, v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_, v_a_1122_, v_a_1123_);
lean_dec(v_a_1123_);
lean_dec_ref(v_a_1122_);
lean_dec(v_a_1121_);
lean_dec_ref(v_a_1120_);
lean_dec(v_a_1119_);
lean_dec_ref(v_a_1118_);
lean_dec(v_a_1117_);
lean_dec_ref(v_a_1116_);
return v_res_1125_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__16(void){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1159_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__15));
v___x_1160_ = l_Lean_stringToMessageData(v___x_1159_);
return v___x_1160_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__17(void){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__14));
v___x_1162_ = l_Lean_stringToMessageData(v___x_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic(lean_object* v_tac_1163_, lean_object* v_msg_1164_, lean_object* v_initialState_1165_, lean_object* v_expectedType_x3f_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_){
_start:
{
lean_object* v___x_1176_; 
lean_inc(v_expectedType_x3f_1166_);
lean_inc(v_tac_1163_);
lean_inc_ref(v_initialState_1165_);
v___x_1176_ = l_Lean_Meta_Tactic_TryThis_isValidTactic(v_initialState_1165_, v_tac_1163_, v_expectedType_x3f_1166_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_, v_a_1171_, v_a_1172_, v_a_1173_, v_a_1174_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v_a_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1236_; 
v_a_1177_ = lean_ctor_get(v___x_1176_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1179_ = v___x_1176_;
v_isShared_1180_ = v_isSharedCheck_1236_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_a_1177_);
lean_dec(v___x_1176_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1236_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
uint8_t v___x_1181_; 
v___x_1181_ = lean_unbox(v_a_1177_);
if (v___x_1181_ == 0)
{
lean_object* v_ref_1182_; uint8_t v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; 
lean_del_object(v___x_1179_);
v_ref_1182_ = lean_ctor_get(v_a_1173_, 2);
v___x_1183_ = lean_unbox(v_a_1177_);
lean_dec(v_a_1177_);
v___x_1184_ = l_Lean_SourceInfo_fromRef(v_ref_1182_, v___x_1183_);
v___x_1185_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__2));
v___x_1186_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__3));
lean_inc_n(v___x_1184_, 8);
v___x_1187_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1184_);
lean_ctor_set(v___x_1187_, 1, v___x_1186_);
v___x_1188_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__5));
v___x_1189_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__7));
v___x_1190_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__9));
v___x_1191_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__11));
v___x_1192_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__12));
v___x_1193_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1184_);
lean_ctor_set(v___x_1193_, 1, v___x_1192_);
v___x_1194_ = l_Lean_Syntax_node1(v___x_1184_, v___x_1191_, v___x_1193_);
v___x_1195_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__13));
v___x_1196_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1184_);
lean_ctor_set(v___x_1196_, 1, v___x_1195_);
v___x_1197_ = l_Lean_Syntax_node3(v___x_1184_, v___x_1190_, v___x_1194_, v___x_1196_, v_tac_1163_);
v___x_1198_ = l_Lean_Syntax_node1(v___x_1184_, v___x_1189_, v___x_1197_);
v___x_1199_ = l_Lean_Syntax_node1(v___x_1184_, v___x_1188_, v___x_1198_);
v___x_1200_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__14));
v___x_1201_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1184_);
lean_ctor_set(v___x_1201_, 1, v___x_1200_);
v___x_1202_ = l_Lean_Syntax_node3(v___x_1184_, v___x_1185_, v___x_1187_, v___x_1199_, v___x_1201_);
lean_inc(v___x_1202_);
v___x_1203_ = l_Lean_Meta_Tactic_TryThis_isValidTactic(v_initialState_1165_, v___x_1202_, v_expectedType_x3f_1166_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_, v_a_1171_, v_a_1172_, v_a_1173_, v_a_1174_);
if (lean_obj_tag(v___x_1203_) == 0)
{
lean_object* v_a_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1222_; 
v_a_1204_ = lean_ctor_get(v___x_1203_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1203_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1206_ = v___x_1203_;
v_isShared_1207_ = v_isSharedCheck_1222_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_a_1204_);
lean_dec(v___x_1203_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1222_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
uint8_t v___x_1208_; 
v___x_1208_ = lean_unbox(v_a_1204_);
lean_dec(v_a_1204_);
if (v___x_1208_ == 0)
{
lean_object* v___x_1209_; lean_object* v___x_1211_; 
lean_dec(v___x_1202_);
lean_dec_ref(v_msg_1164_);
v___x_1209_ = lean_box(0);
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 0, v___x_1209_);
v___x_1211_ = v___x_1206_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v___x_1209_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
else
{
lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1220_; 
v___x_1213_ = lean_obj_once(&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__16, &l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__16_once, _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__16);
v___x_1214_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1213_);
lean_ctor_set(v___x_1214_, 1, v_msg_1164_);
v___x_1215_ = lean_obj_once(&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__17, &l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__17_once, _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__17);
v___x_1216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1214_);
lean_ctor_set(v___x_1216_, 1, v___x_1215_);
v___x_1217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1202_);
lean_ctor_set(v___x_1217_, 1, v___x_1216_);
v___x_1218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 0, v___x_1218_);
v___x_1220_ = v___x_1206_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v___x_1218_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
}
else
{
lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1230_; 
lean_dec(v___x_1202_);
lean_dec_ref(v_msg_1164_);
v_a_1223_ = lean_ctor_get(v___x_1203_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1203_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1225_ = v___x_1203_;
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v___x_1203_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1228_; 
if (v_isShared_1226_ == 0)
{
v___x_1228_ = v___x_1225_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1223_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
else
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1234_; 
lean_dec(v_a_1177_);
lean_dec(v_expectedType_x3f_1166_);
lean_dec_ref(v_initialState_1165_);
v___x_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1231_, 0, v_tac_1163_);
lean_ctor_set(v___x_1231_, 1, v_msg_1164_);
v___x_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 0, v___x_1232_);
v___x_1234_ = v___x_1179_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v___x_1232_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
return v___x_1234_;
}
}
}
}
else
{
lean_object* v_a_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1244_; 
lean_dec(v_expectedType_x3f_1166_);
lean_dec_ref(v_initialState_1165_);
lean_dec_ref(v_msg_1164_);
lean_dec(v_tac_1163_);
v_a_1237_ = lean_ctor_get(v___x_1176_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1239_ = v___x_1176_;
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_a_1237_);
lean_dec(v___x_1176_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
if (v_isShared_1240_ == 0)
{
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_a_1237_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___boxed(lean_object* v_tac_1245_, lean_object* v_msg_1246_, lean_object* v_initialState_1247_, lean_object* v_expectedType_x3f_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic(v_tac_1245_, v_msg_1246_, v_initialState_1247_, v_expectedType_x3f_1248_, v_a_1249_, v_a_1250_, v_a_1251_, v_a_1252_, v_a_1253_, v_a_1254_, v_a_1255_, v_a_1256_);
lean_dec(v_a_1256_);
lean_dec_ref(v_a_1255_);
lean_dec(v_a_1254_);
lean_dec_ref(v_a_1253_);
lean_dec(v_a_1252_);
lean_dec_ref(v_a_1251_);
lean_dec(v_a_1250_);
lean_dec_ref(v_a_1249_);
return v_res_1258_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__1(void){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__0));
v___x_1261_ = l_Lean_stringToMessageData(v___x_1260_);
return v___x_1261_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__3(void){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__2));
v___x_1264_ = l_Lean_stringToMessageData(v___x_1263_);
return v___x_1264_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__5(void){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__4));
v___x_1267_ = l_Lean_stringToMessageData(v___x_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg(lean_object* v_targetKind_1268_, lean_object* v_invalidTactic_1269_){
_start:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1270_ = lean_obj_once(&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__1, &l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__1_once, _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__1);
v___x_1271_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
lean_ctor_set(v___x_1271_, 1, v_targetKind_1268_);
v___x_1272_ = lean_obj_once(&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__3, &l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__3_once, _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__3);
v___x_1273_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1271_);
lean_ctor_set(v___x_1273_, 1, v___x_1272_);
v___x_1274_ = l_Lean_indentD(v_invalidTactic_1269_);
v___x_1275_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1273_);
lean_ctor_set(v___x_1275_, 1, v___x_1274_);
v___x_1276_ = lean_obj_once(&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__5, &l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__5_once, _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg___closed__5);
v___x_1277_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1275_);
lean_ctor_set(v___x_1277_, 1, v___x_1276_);
return v___x_1277_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1279_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__0));
v___x_1280_ = l_Lean_stringToMessageData(v___x_1279_);
return v___x_1280_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1282_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__2));
v___x_1283_ = l_Lean_stringToMessageData(v___x_1282_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0(lean_object* v_e_1296_, uint8_t v_useRefine_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_){
_start:
{
lean_object* v___y_1304_; lean_object* v___y_1305_; lean_object* v_tac_1309_; lean_object* v___x_1318_; 
lean_inc_ref(v_e_1296_);
v___x_1318_ = l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax(v_e_1296_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_);
if (lean_obj_tag(v___x_1318_) == 0)
{
if (v_useRefine_1297_ == 0)
{
lean_object* v_a_1319_; lean_object* v_ref_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v_a_1319_ = lean_ctor_get(v___x_1318_, 0);
lean_inc(v_a_1319_);
lean_dec_ref_known(v___x_1318_, 1);
v_ref_1320_ = lean_ctor_get(v___y_1300_, 2);
v___x_1321_ = l_Lean_SourceInfo_fromRef(v_ref_1320_, v_useRefine_1297_);
v___x_1322_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__4));
v___x_1323_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__5));
lean_inc(v___x_1321_);
v___x_1324_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1321_);
lean_ctor_set(v___x_1324_, 1, v___x_1322_);
v___x_1325_ = l_Lean_Syntax_node2(v___x_1321_, v___x_1323_, v___x_1324_, v_a_1319_);
v_tac_1309_ = v___x_1325_;
goto v___jp_1308_;
}
else
{
lean_object* v_a_1326_; lean_object* v_ref_1327_; uint8_t v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v_a_1326_ = lean_ctor_get(v___x_1318_, 0);
lean_inc(v_a_1326_);
lean_dec_ref_known(v___x_1318_, 1);
v_ref_1327_ = lean_ctor_get(v___y_1300_, 2);
v___x_1328_ = 0;
v___x_1329_ = l_Lean_SourceInfo_fromRef(v_ref_1327_, v___x_1328_);
v___x_1330_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__6));
v___x_1331_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__7));
lean_inc(v___x_1329_);
v___x_1332_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1329_);
lean_ctor_set(v___x_1332_, 1, v___x_1330_);
v___x_1333_ = l_Lean_Syntax_node2(v___x_1329_, v___x_1331_, v___x_1332_, v_a_1326_);
v_tac_1309_ = v___x_1333_;
goto v___jp_1308_;
}
}
else
{
lean_object* v_a_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1341_; 
lean_dec_ref(v_e_1296_);
v_a_1334_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1336_ = v___x_1318_;
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_a_1334_);
lean_dec(v___x_1318_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1339_; 
if (v_isShared_1337_ == 0)
{
v___x_1339_ = v___x_1336_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_a_1334_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
}
v___jp_1303_:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___y_1304_);
lean_ctor_set(v___x_1306_, 1, v___y_1305_);
v___x_1307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
return v___x_1307_;
}
v___jp_1308_:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1310_ = l_Lean_MessageData_ofExpr(v_e_1296_);
v___x_1311_ = l_Lean_addMessageContextFull___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion_spec__0(v___x_1310_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_);
if (v_useRefine_1297_ == 0)
{
lean_object* v_a_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1312_);
lean_dec_ref(v___x_1311_);
v___x_1313_ = lean_obj_once(&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__1, &l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__1);
v___x_1314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1313_);
lean_ctor_set(v___x_1314_, 1, v_a_1312_);
v___y_1304_ = v_tac_1309_;
v___y_1305_ = v___x_1314_;
goto v___jp_1303_;
}
else
{
lean_object* v_a_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v_a_1315_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1315_);
lean_dec_ref(v___x_1311_);
v___x_1316_ = lean_obj_once(&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__3, &l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___closed__3);
v___x_1317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
lean_ctor_set(v___x_1317_, 1, v_a_1315_);
v___y_1304_ = v_tac_1309_;
v___y_1305_ = v___x_1317_;
goto v___jp_1303_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___boxed(lean_object* v_e_1342_, lean_object* v_useRefine_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_){
_start:
{
uint8_t v_useRefine_boxed_1349_; lean_object* v_res_1350_; 
v_useRefine_boxed_1349_ = lean_unbox(v_useRefine_1343_);
v_res_1350_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0(v_e_1342_, v_useRefine_boxed_1349_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_);
lean_dec(v___y_1347_);
lean_dec_ref(v___y_1346_);
lean_dec(v___y_1345_);
lean_dec_ref(v___y_1344_);
return v_res_1350_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax(lean_object* v_e_1351_, uint8_t v_useRefine_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_){
_start:
{
lean_object* v_toCold_1358_; lean_object* v_currRecDepth_1359_; lean_object* v_ref_1360_; uint8_t v_suppressElabErrors_1361_; uint8_t v_checkDeprecated_1362_; uint8_t v_isRecordingDeps_1363_; lean_object* v_fileName_1364_; lean_object* v_fileMap_1365_; lean_object* v_options_1366_; lean_object* v_currNamespace_1367_; lean_object* v_openDecls_1368_; lean_object* v_initHeartbeats_1369_; lean_object* v_maxHeartbeats_1370_; lean_object* v_quotContext_1371_; lean_object* v_currMacroScope_1372_; lean_object* v_cancelTk_x3f_1373_; lean_object* v_inheritedTraceOptions_1374_; lean_object* v___x_1375_; lean_object* v___f_1376_; uint16_t v___y_1378_; lean_object* v___y_1379_; lean_object* v_fileName_1380_; lean_object* v_fileMap_1381_; lean_object* v_currNamespace_1382_; lean_object* v_openDecls_1383_; lean_object* v_initHeartbeats_1384_; lean_object* v_maxHeartbeats_1385_; lean_object* v_quotContext_1386_; lean_object* v_currMacroScope_1387_; lean_object* v_cancelTk_x3f_1388_; lean_object* v_inheritedTraceOptions_1389_; lean_object* v_currRecDepth_1390_; lean_object* v_ref_1391_; uint8_t v_suppressElabErrors_1392_; uint8_t v_checkDeprecated_1393_; uint8_t v_isRecordingDeps_1394_; lean_object* v___y_1395_; lean_object* v___y_1402_; uint16_t v___y_1403_; lean_object* v_nextMacroScope_1404_; lean_object* v_ngen_1405_; lean_object* v_auxDeclNGen_1406_; lean_object* v_traceState_1407_; lean_object* v_recordedDeps_1408_; lean_object* v_messages_1409_; lean_object* v_infoState_1410_; lean_object* v_snapshotTasks_1411_; lean_object* v___y_1412_; uint16_t v___y_1417_; lean_object* v___y_1418_; uint8_t v___y_1419_; lean_object* v___y_1438_; 
v_toCold_1358_ = lean_ctor_get(v_a_1355_, 0);
v_currRecDepth_1359_ = lean_ctor_get(v_a_1355_, 1);
v_ref_1360_ = lean_ctor_get(v_a_1355_, 2);
v_suppressElabErrors_1361_ = lean_ctor_get_uint8(v_a_1355_, sizeof(void*)*3 + 2);
v_checkDeprecated_1362_ = lean_ctor_get_uint8(v_a_1355_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1363_ = lean_ctor_get_uint8(v_a_1355_, sizeof(void*)*3 + 4);
v_fileName_1364_ = lean_ctor_get(v_toCold_1358_, 0);
v_fileMap_1365_ = lean_ctor_get(v_toCold_1358_, 1);
v_options_1366_ = lean_ctor_get(v_toCold_1358_, 2);
v_currNamespace_1367_ = lean_ctor_get(v_toCold_1358_, 4);
v_openDecls_1368_ = lean_ctor_get(v_toCold_1358_, 5);
v_initHeartbeats_1369_ = lean_ctor_get(v_toCold_1358_, 6);
v_maxHeartbeats_1370_ = lean_ctor_get(v_toCold_1358_, 7);
v_quotContext_1371_ = lean_ctor_get(v_toCold_1358_, 8);
v_currMacroScope_1372_ = lean_ctor_get(v_toCold_1358_, 9);
v_cancelTk_x3f_1373_ = lean_ctor_get(v_toCold_1358_, 10);
v_inheritedTraceOptions_1374_ = lean_ctor_get(v_toCold_1358_, 11);
v___x_1375_ = lean_box(v_useRefine_1352_);
v___f_1376_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1376_, 0, v_e_1351_);
lean_closure_set(v___f_1376_, 1, v___x_1375_);
if (v_isRecordingDeps_1363_ == 0)
{
lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1448_ = l_Lean_pp_mvars;
lean_inc_ref(v_options_1366_);
v___x_1449_ = l_Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1(v_options_1366_, v___x_1448_, v_isRecordingDeps_1363_);
v___y_1438_ = v___x_1449_;
goto v___jp_1437_;
}
else
{
lean_object* v___x_1450_; 
lean_inc_ref(v_options_1366_);
v___x_1450_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_1366_);
v___y_1438_ = v___x_1450_;
goto v___jp_1437_;
}
v___jp_1377_:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1396_ = l_Lean_maxRecDepth;
v___x_1397_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__0(v___y_1379_, v___x_1396_);
v___x_1398_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1398_, 0, v_fileName_1380_);
lean_ctor_set(v___x_1398_, 1, v_fileMap_1381_);
lean_ctor_set(v___x_1398_, 2, v___y_1379_);
lean_ctor_set(v___x_1398_, 3, v___x_1397_);
lean_ctor_set(v___x_1398_, 4, v_currNamespace_1382_);
lean_ctor_set(v___x_1398_, 5, v_openDecls_1383_);
lean_ctor_set(v___x_1398_, 6, v_initHeartbeats_1384_);
lean_ctor_set(v___x_1398_, 7, v_maxHeartbeats_1385_);
lean_ctor_set(v___x_1398_, 8, v_quotContext_1386_);
lean_ctor_set(v___x_1398_, 9, v_currMacroScope_1387_);
lean_ctor_set(v___x_1398_, 10, v_cancelTk_x3f_1388_);
lean_ctor_set(v___x_1398_, 11, v_inheritedTraceOptions_1389_);
lean_inc(v_ref_1391_);
lean_inc(v_currRecDepth_1390_);
v___x_1399_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1399_, 0, v___x_1398_);
lean_ctor_set(v___x_1399_, 1, v_currRecDepth_1390_);
lean_ctor_set(v___x_1399_, 2, v_ref_1391_);
lean_ctor_set_uint16(v___x_1399_, sizeof(void*)*3, v___y_1378_);
lean_ctor_set_uint8(v___x_1399_, sizeof(void*)*3 + 2, v_suppressElabErrors_1392_);
lean_ctor_set_uint8(v___x_1399_, sizeof(void*)*3 + 3, v_checkDeprecated_1393_);
lean_ctor_set_uint8(v___x_1399_, sizeof(void*)*3 + 4, v_isRecordingDeps_1394_);
v___x_1400_ = l_Lean_Meta_withExposedNames___redArg(v___f_1376_, v_a_1353_, v_a_1354_, v___x_1399_, v___y_1395_);
lean_dec_ref_known(v___x_1399_, 3);
return v___x_1400_;
}
v___jp_1401_:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1413_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__2, &l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__2_once, _init_l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__2);
v___x_1414_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1414_, 0, v___y_1412_);
lean_ctor_set(v___x_1414_, 1, v_nextMacroScope_1404_);
lean_ctor_set(v___x_1414_, 2, v_ngen_1405_);
lean_ctor_set(v___x_1414_, 3, v_auxDeclNGen_1406_);
lean_ctor_set(v___x_1414_, 4, v_traceState_1407_);
lean_ctor_set(v___x_1414_, 5, v___x_1413_);
lean_ctor_set(v___x_1414_, 6, v_recordedDeps_1408_);
lean_ctor_set(v___x_1414_, 7, v_messages_1409_);
lean_ctor_set(v___x_1414_, 8, v_infoState_1410_);
lean_ctor_set(v___x_1414_, 9, v_snapshotTasks_1411_);
v___x_1415_ = lean_st_ref_put(v_a_1356_, v___x_1414_);
lean_inc_ref(v_inheritedTraceOptions_1374_);
lean_inc(v_cancelTk_x3f_1373_);
lean_inc(v_currMacroScope_1372_);
lean_inc(v_quotContext_1371_);
lean_inc(v_maxHeartbeats_1370_);
lean_inc(v_initHeartbeats_1369_);
lean_inc(v_openDecls_1368_);
lean_inc(v_currNamespace_1367_);
lean_inc_ref(v_fileMap_1365_);
lean_inc_ref(v_fileName_1364_);
v___y_1378_ = v___y_1403_;
v___y_1379_ = v___y_1402_;
v_fileName_1380_ = v_fileName_1364_;
v_fileMap_1381_ = v_fileMap_1365_;
v_currNamespace_1382_ = v_currNamespace_1367_;
v_openDecls_1383_ = v_openDecls_1368_;
v_initHeartbeats_1384_ = v_initHeartbeats_1369_;
v_maxHeartbeats_1385_ = v_maxHeartbeats_1370_;
v_quotContext_1386_ = v_quotContext_1371_;
v_currMacroScope_1387_ = v_currMacroScope_1372_;
v_cancelTk_x3f_1388_ = v_cancelTk_x3f_1373_;
v_inheritedTraceOptions_1389_ = v_inheritedTraceOptions_1374_;
v_currRecDepth_1390_ = v_currRecDepth_1359_;
v_ref_1391_ = v_ref_1360_;
v_suppressElabErrors_1392_ = v_suppressElabErrors_1361_;
v_checkDeprecated_1393_ = v_checkDeprecated_1362_;
v_isRecordingDeps_1394_ = v_isRecordingDeps_1363_;
v___y_1395_ = v_a_1356_;
goto v___jp_1377_;
}
v___jp_1416_:
{
uint8_t v___x_1420_; lean_object* v___x_1421_; lean_object* v_env_1422_; lean_object* v_nextMacroScope_1423_; lean_object* v_ngen_1424_; lean_object* v_auxDeclNGen_1425_; lean_object* v_traceState_1426_; lean_object* v_recordedDeps_1427_; lean_object* v_messages_1428_; lean_object* v_infoState_1429_; lean_object* v_snapshotTasks_1430_; uint16_t v___x_1431_; uint16_t v___x_1432_; uint16_t v___x_1433_; uint8_t v___x_1434_; 
v___x_1420_ = 1;
v___x_1421_ = lean_st_ref_take(v_a_1356_);
v_env_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc_ref(v_env_1422_);
v_nextMacroScope_1423_ = lean_ctor_get(v___x_1421_, 1);
lean_inc(v_nextMacroScope_1423_);
v_ngen_1424_ = lean_ctor_get(v___x_1421_, 2);
lean_inc_ref(v_ngen_1424_);
v_auxDeclNGen_1425_ = lean_ctor_get(v___x_1421_, 3);
lean_inc_ref(v_auxDeclNGen_1425_);
v_traceState_1426_ = lean_ctor_get(v___x_1421_, 4);
lean_inc_ref(v_traceState_1426_);
v_recordedDeps_1427_ = lean_ctor_get(v___x_1421_, 6);
lean_inc_ref(v_recordedDeps_1427_);
v_messages_1428_ = lean_ctor_get(v___x_1421_, 7);
lean_inc_ref(v_messages_1428_);
v_infoState_1429_ = lean_ctor_get(v___x_1421_, 8);
lean_inc_ref(v_infoState_1429_);
v_snapshotTasks_1430_ = lean_ctor_get(v___x_1421_, 9);
lean_inc_ref(v_snapshotTasks_1430_);
lean_dec(v___x_1421_);
v___x_1431_ = 512;
v___x_1432_ = lean_uint16_land(v___y_1417_, v___x_1431_);
v___x_1433_ = 0;
v___x_1434_ = lean_uint16_dec_eq(v___x_1432_, v___x_1433_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; 
v___x_1435_ = l_Lean_Kernel_enableDiag(v_env_1422_, v___x_1420_);
v___y_1402_ = v___y_1418_;
v___y_1403_ = v___y_1417_;
v_nextMacroScope_1404_ = v_nextMacroScope_1423_;
v_ngen_1405_ = v_ngen_1424_;
v_auxDeclNGen_1406_ = v_auxDeclNGen_1425_;
v_traceState_1407_ = v_traceState_1426_;
v_recordedDeps_1408_ = v_recordedDeps_1427_;
v_messages_1409_ = v_messages_1428_;
v_infoState_1410_ = v_infoState_1429_;
v_snapshotTasks_1411_ = v_snapshotTasks_1430_;
v___y_1412_ = v___x_1435_;
goto v___jp_1401_;
}
else
{
lean_object* v___x_1436_; 
v___x_1436_ = l_Lean_Kernel_enableDiag(v_env_1422_, v___y_1419_);
v___y_1402_ = v___y_1418_;
v___y_1403_ = v___y_1417_;
v_nextMacroScope_1404_ = v_nextMacroScope_1423_;
v_ngen_1405_ = v_ngen_1424_;
v_auxDeclNGen_1406_ = v_auxDeclNGen_1425_;
v_traceState_1407_ = v_traceState_1426_;
v_recordedDeps_1408_ = v_recordedDeps_1427_;
v_messages_1409_ = v_messages_1428_;
v_infoState_1410_ = v_infoState_1429_;
v_snapshotTasks_1411_ = v_snapshotTasks_1430_;
v___y_1412_ = v___x_1436_;
goto v___jp_1401_;
}
}
v___jp_1437_:
{
uint16_t v___x_1439_; lean_object* v___x_1440_; lean_object* v_env_1441_; uint8_t v___x_1442_; uint16_t v___x_1443_; uint16_t v___x_1444_; uint16_t v___x_1445_; uint8_t v___x_1446_; 
v___x_1439_ = l_Lean_OptionFlags_ofOptions(v___y_1438_);
v___x_1440_ = lean_st_ref_get(v_a_1356_);
v_env_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc_ref(v_env_1441_);
lean_dec(v___x_1440_);
v___x_1442_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1441_);
lean_dec_ref(v_env_1441_);
v___x_1443_ = 512;
v___x_1444_ = lean_uint16_land(v___x_1439_, v___x_1443_);
v___x_1445_ = 0;
v___x_1446_ = lean_uint16_dec_eq(v___x_1444_, v___x_1445_);
if (v___x_1446_ == 0)
{
if (v___x_1442_ == 0)
{
v___y_1417_ = v___x_1439_;
v___y_1418_ = v___y_1438_;
v___y_1419_ = v___x_1442_;
goto v___jp_1416_;
}
else
{
lean_inc_ref(v_inheritedTraceOptions_1374_);
lean_inc(v_cancelTk_x3f_1373_);
lean_inc(v_currMacroScope_1372_);
lean_inc(v_quotContext_1371_);
lean_inc(v_maxHeartbeats_1370_);
lean_inc(v_initHeartbeats_1369_);
lean_inc(v_openDecls_1368_);
lean_inc(v_currNamespace_1367_);
lean_inc_ref(v_fileMap_1365_);
lean_inc_ref(v_fileName_1364_);
v___y_1378_ = v___x_1439_;
v___y_1379_ = v___y_1438_;
v_fileName_1380_ = v_fileName_1364_;
v_fileMap_1381_ = v_fileMap_1365_;
v_currNamespace_1382_ = v_currNamespace_1367_;
v_openDecls_1383_ = v_openDecls_1368_;
v_initHeartbeats_1384_ = v_initHeartbeats_1369_;
v_maxHeartbeats_1385_ = v_maxHeartbeats_1370_;
v_quotContext_1386_ = v_quotContext_1371_;
v_currMacroScope_1387_ = v_currMacroScope_1372_;
v_cancelTk_x3f_1388_ = v_cancelTk_x3f_1373_;
v_inheritedTraceOptions_1389_ = v_inheritedTraceOptions_1374_;
v_currRecDepth_1390_ = v_currRecDepth_1359_;
v_ref_1391_ = v_ref_1360_;
v_suppressElabErrors_1392_ = v_suppressElabErrors_1361_;
v_checkDeprecated_1393_ = v_checkDeprecated_1362_;
v_isRecordingDeps_1394_ = v_isRecordingDeps_1363_;
v___y_1395_ = v_a_1356_;
goto v___jp_1377_;
}
}
else
{
if (v___x_1442_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_1374_);
lean_inc(v_cancelTk_x3f_1373_);
lean_inc(v_currMacroScope_1372_);
lean_inc(v_quotContext_1371_);
lean_inc(v_maxHeartbeats_1370_);
lean_inc(v_initHeartbeats_1369_);
lean_inc(v_openDecls_1368_);
lean_inc(v_currNamespace_1367_);
lean_inc_ref(v_fileMap_1365_);
lean_inc_ref(v_fileName_1364_);
v___y_1378_ = v___x_1439_;
v___y_1379_ = v___y_1438_;
v_fileName_1380_ = v_fileName_1364_;
v_fileMap_1381_ = v_fileMap_1365_;
v_currNamespace_1382_ = v_currNamespace_1367_;
v_openDecls_1383_ = v_openDecls_1368_;
v_initHeartbeats_1384_ = v_initHeartbeats_1369_;
v_maxHeartbeats_1385_ = v_maxHeartbeats_1370_;
v_quotContext_1386_ = v_quotContext_1371_;
v_currMacroScope_1387_ = v_currMacroScope_1372_;
v_cancelTk_x3f_1388_ = v_cancelTk_x3f_1373_;
v_inheritedTraceOptions_1389_ = v_inheritedTraceOptions_1374_;
v_currRecDepth_1390_ = v_currRecDepth_1359_;
v_ref_1391_ = v_ref_1360_;
v_suppressElabErrors_1392_ = v_suppressElabErrors_1361_;
v_checkDeprecated_1393_ = v_checkDeprecated_1362_;
v_isRecordingDeps_1394_ = v_isRecordingDeps_1363_;
v___y_1395_ = v_a_1356_;
goto v___jp_1377_;
}
else
{
uint8_t v___x_1447_; 
v___x_1447_ = 0;
v___y_1417_ = v___x_1439_;
v___y_1418_ = v___y_1438_;
v___y_1419_ = v___x_1447_;
goto v___jp_1416_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax___boxed(lean_object* v_e_1451_, lean_object* v_useRefine_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_){
_start:
{
uint8_t v_useRefine_boxed_1458_; lean_object* v_res_1459_; 
v_useRefine_boxed_1458_ = lean_unbox(v_useRefine_1452_);
v_res_1459_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax(v_e_1451_, v_useRefine_boxed_1458_, v_a_1453_, v_a_1454_, v_a_1455_, v_a_1456_);
lean_dec(v_a_1456_);
lean_dec_ref(v_a_1455_);
lean_dec(v_a_1454_);
lean_dec_ref(v_a_1453_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___redArg(lean_object* v_as_1463_, size_t v_sz_1464_, size_t v_i_1465_, lean_object* v_b_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
uint8_t v___x_1472_; 
v___x_1472_ = lean_usize_dec_lt(v_i_1465_, v_sz_1464_);
if (v___x_1472_ == 0)
{
lean_object* v___x_1473_; 
v___x_1473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1473_, 0, v_b_1466_);
return v___x_1473_;
}
else
{
lean_object* v_a_1474_; lean_object* v___x_1475_; 
v_a_1474_ = lean_array_uget_borrowed(v_as_1463_, v_i_1465_);
lean_inc(v_a_1474_);
v___x_1475_ = l_Lean_MVarId_getType(v_a_1474_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v_a_1476_; lean_object* v___x_1477_; 
v_a_1476_ = lean_ctor_get(v___x_1475_, 0);
lean_inc(v_a_1476_);
lean_dec_ref_known(v___x_1475_, 1);
v___x_1477_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__1___redArg(v_a_1476_, v___y_1468_);
if (lean_obj_tag(v___x_1477_) == 0)
{
lean_object* v_a_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; 
v_a_1478_ = lean_ctor_get(v___x_1477_, 0);
lean_inc(v_a_1478_);
lean_dec_ref_known(v___x_1477_, 1);
v___x_1479_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppExpr___boxed), 6, 1);
lean_closure_set(v___x_1479_, 0, v_a_1478_);
v___x_1480_ = l_Lean_Meta_withExposedNames___redArg(v___x_1479_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_);
if (lean_obj_tag(v___x_1480_) == 0)
{
lean_object* v_a_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; size_t v___x_1488_; size_t v___x_1489_; 
v_a_1481_ = lean_ctor_get(v___x_1480_, 0);
lean_inc(v_a_1481_);
lean_dec_ref_known(v___x_1480_, 1);
v___x_1482_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___redArg___closed__1));
v___x_1483_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1483_, 0, v___x_1482_);
lean_ctor_set(v___x_1483_, 1, v_a_1481_);
v___x_1484_ = l_Std_Format_defWidth;
v___x_1485_ = lean_unsigned_to_nat(0u);
v___x_1486_ = l_Std_Format_pretty(v___x_1483_, v___x_1484_, v___x_1485_, v___x_1485_);
v___x_1487_ = lean_string_append(v_b_1466_, v___x_1486_);
lean_dec_ref(v___x_1486_);
v___x_1488_ = ((size_t)1ULL);
v___x_1489_ = lean_usize_add(v_i_1465_, v___x_1488_);
v_i_1465_ = v___x_1489_;
v_b_1466_ = v___x_1487_;
goto _start;
}
else
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1498_; 
lean_dec_ref(v_b_1466_);
v_a_1491_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1493_ = v___x_1480_;
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1480_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1496_; 
if (v_isShared_1494_ == 0)
{
v___x_1496_ = v___x_1493_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_a_1491_);
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
lean_dec_ref(v_b_1466_);
v_a_1499_ = lean_ctor_get(v___x_1477_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1501_ = v___x_1477_;
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_a_1499_);
lean_dec(v___x_1477_);
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
else
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1514_; 
lean_dec_ref(v_b_1466_);
v_a_1507_ = lean_ctor_get(v___x_1475_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1509_ = v___x_1475_;
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1475_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_a_1507_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___redArg___boxed(lean_object* v_as_1515_, lean_object* v_sz_1516_, lean_object* v_i_1517_, lean_object* v_b_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
size_t v_sz_boxed_1524_; size_t v_i_boxed_1525_; lean_object* v_res_1526_; 
v_sz_boxed_1524_ = lean_unbox_usize(v_sz_1516_);
lean_dec(v_sz_1516_);
v_i_boxed_1525_ = lean_unbox_usize(v_i_1517_);
lean_dec(v_i_1517_);
v_res_1526_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___redArg(v_as_1515_, v_sz_boxed_1524_, v_i_boxed_1525_, v_b_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec_ref(v_as_1515_);
return v_res_1526_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__3(void){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1531_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__2));
v___x_1532_ = l_Lean_stringToMessageData(v___x_1531_);
return v___x_1532_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__6(void){
_start:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1535_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__5));
v___x_1536_ = l_Lean_stringToMessageData(v___x_1535_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore(uint8_t v_addSubgoalsMsg_1538_, lean_object* v_checkState_x3f_1539_, lean_object* v_e_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_){
_start:
{
lean_object* v___y_1551_; lean_object* v___y_1552_; lean_object* v_postInfo_x3f_1553_; lean_object* v___y_1562_; lean_object* v___y_1563_; lean_object* v___y_1566_; lean_object* v___y_1567_; lean_object* v___y_1568_; lean_object* v___y_1577_; lean_object* v___y_1578_; uint8_t v___y_1579_; lean_object* v___y_1580_; uint8_t v___y_1581_; lean_object* v___y_1667_; uint16_t v___y_1668_; lean_object* v_fileName_1669_; lean_object* v_fileMap_1670_; lean_object* v_currNamespace_1671_; lean_object* v_openDecls_1672_; lean_object* v_initHeartbeats_1673_; lean_object* v_maxHeartbeats_1674_; lean_object* v_quotContext_1675_; lean_object* v_currMacroScope_1676_; lean_object* v_cancelTk_x3f_1677_; lean_object* v_inheritedTraceOptions_1678_; lean_object* v_currRecDepth_1679_; lean_object* v_ref_1680_; uint8_t v_suppressElabErrors_1681_; uint8_t v_checkDeprecated_1682_; uint8_t v_isRecordingDeps_1683_; lean_object* v___y_1684_; lean_object* v_toCold_1704_; lean_object* v_currRecDepth_1705_; lean_object* v_ref_1706_; uint8_t v_suppressElabErrors_1707_; uint8_t v_checkDeprecated_1708_; uint8_t v_isRecordingDeps_1709_; lean_object* v_fileName_1710_; lean_object* v_fileMap_1711_; lean_object* v_options_1712_; lean_object* v_currNamespace_1713_; lean_object* v_openDecls_1714_; lean_object* v_initHeartbeats_1715_; lean_object* v_maxHeartbeats_1716_; lean_object* v_quotContext_1717_; lean_object* v_currMacroScope_1718_; lean_object* v_cancelTk_x3f_1719_; lean_object* v_inheritedTraceOptions_1720_; lean_object* v___y_1722_; uint16_t v___y_1723_; lean_object* v_nextMacroScope_1724_; lean_object* v_ngen_1725_; lean_object* v_auxDeclNGen_1726_; lean_object* v_traceState_1727_; lean_object* v_recordedDeps_1728_; lean_object* v_messages_1729_; lean_object* v_infoState_1730_; lean_object* v_snapshotTasks_1731_; lean_object* v___y_1732_; lean_object* v___y_1737_; uint16_t v___y_1738_; uint8_t v___y_1739_; lean_object* v___y_1758_; 
v_toCold_1704_ = lean_ctor_get(v_a_1547_, 0);
v_currRecDepth_1705_ = lean_ctor_get(v_a_1547_, 1);
v_ref_1706_ = lean_ctor_get(v_a_1547_, 2);
v_suppressElabErrors_1707_ = lean_ctor_get_uint8(v_a_1547_, sizeof(void*)*3 + 2);
v_checkDeprecated_1708_ = lean_ctor_get_uint8(v_a_1547_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1709_ = lean_ctor_get_uint8(v_a_1547_, sizeof(void*)*3 + 4);
v_fileName_1710_ = lean_ctor_get(v_toCold_1704_, 0);
v_fileMap_1711_ = lean_ctor_get(v_toCold_1704_, 1);
v_options_1712_ = lean_ctor_get(v_toCold_1704_, 2);
v_currNamespace_1713_ = lean_ctor_get(v_toCold_1704_, 4);
v_openDecls_1714_ = lean_ctor_get(v_toCold_1704_, 5);
v_initHeartbeats_1715_ = lean_ctor_get(v_toCold_1704_, 6);
v_maxHeartbeats_1716_ = lean_ctor_get(v_toCold_1704_, 7);
v_quotContext_1717_ = lean_ctor_get(v_toCold_1704_, 8);
v_currMacroScope_1718_ = lean_ctor_get(v_toCold_1704_, 9);
v_cancelTk_x3f_1719_ = lean_ctor_get(v_toCold_1704_, 10);
v_inheritedTraceOptions_1720_ = lean_ctor_get(v_toCold_1704_, 11);
if (v_isRecordingDeps_1709_ == 0)
{
lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1768_ = l_Lean_pp_mvars;
lean_inc_ref(v_options_1712_);
v___x_1769_ = l_Lean_Option_set___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__1(v_options_1712_, v___x_1768_, v_isRecordingDeps_1709_);
v___y_1758_ = v___x_1769_;
goto v___jp_1757_;
}
else
{
lean_object* v___x_1770_; 
lean_inc_ref(v_options_1712_);
v___x_1770_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_1712_);
v___y_1758_ = v___x_1770_;
goto v___jp_1757_;
}
v___jp_1550_:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1554_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__1));
v___x_1555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1554_);
lean_ctor_set(v___x_1555_, 1, v___y_1551_);
v___x_1556_ = lean_box(0);
v___x_1557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1557_, 0, v___y_1552_);
v___x_1558_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1555_);
lean_ctor_set(v___x_1558_, 1, v___x_1556_);
lean_ctor_set(v___x_1558_, 2, v_postInfo_x3f_1553_);
lean_ctor_set(v___x_1558_, 3, v___x_1556_);
lean_ctor_set(v___x_1558_, 4, v___x_1557_);
lean_ctor_set(v___x_1558_, 5, v___x_1556_);
v___x_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1558_);
v___x_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1559_);
return v___x_1560_;
}
v___jp_1561_:
{
lean_object* v___x_1564_; 
v___x_1564_ = lean_box(0);
v___y_1551_ = v___y_1562_;
v___y_1552_ = v___y_1563_;
v_postInfo_x3f_1553_ = v___x_1564_;
goto v___jp_1550_;
}
v___jp_1565_:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
lean_inc_ref(v___y_1568_);
v___x_1569_ = l_Lean_stringToMessageData(v___y_1568_);
lean_inc_ref(v___y_1566_);
v___x_1570_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1570_, 0, v___y_1566_);
lean_ctor_set(v___x_1570_, 1, v___x_1569_);
v___x_1571_ = lean_obj_once(&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__3, &l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__3_once, _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__3);
v___x_1572_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1570_);
lean_ctor_set(v___x_1572_, 1, v___x_1571_);
v___x_1573_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg(v___x_1572_, v___y_1567_);
v___x_1574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
v___x_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1574_);
return v___x_1575_;
}
v___jp_1576_:
{
lean_object* v___x_1582_; 
v___x_1582_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkExactSuggestionSyntax(v_e_1540_, v___y_1581_, v_a_1545_, v_a_1546_, v___y_1577_, v___y_1580_);
if (lean_obj_tag(v___x_1582_) == 0)
{
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1657_; 
v_a_1583_ = lean_ctor_get(v___x_1582_, 0);
v_isSharedCheck_1657_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1585_ = v___x_1582_;
v_isShared_1586_ = v_isSharedCheck_1657_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1582_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1657_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
if (lean_obj_tag(v_checkState_x3f_1539_) == 1)
{
lean_object* v_fst_1587_; lean_object* v_snd_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1640_; 
lean_del_object(v___x_1585_);
v_fst_1587_ = lean_ctor_get(v_a_1583_, 0);
v_snd_1588_ = lean_ctor_get(v_a_1583_, 1);
v_isSharedCheck_1640_ = !lean_is_exclusive(v_a_1583_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1590_ = v_a_1583_;
v_isShared_1591_ = v_isSharedCheck_1640_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_snd_1588_);
lean_inc(v_fst_1587_);
lean_dec(v_a_1583_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1640_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v_val_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; 
v_val_1592_ = lean_ctor_get(v_checkState_x3f_1539_, 0);
lean_inc(v_val_1592_);
lean_dec_ref_known(v_checkState_x3f_1539_, 1);
v___x_1593_ = lean_box(0);
lean_inc(v_snd_1588_);
v___x_1594_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic(v_fst_1587_, v_snd_1588_, v_val_1592_, v___x_1593_, v_a_1541_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_, v___y_1577_, v___y_1580_);
if (lean_obj_tag(v___x_1594_) == 0)
{
lean_object* v_a_1595_; 
v_a_1595_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_a_1595_);
lean_dec_ref_known(v___x_1594_, 1);
if (lean_obj_tag(v_a_1595_) == 1)
{
lean_object* v_val_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1622_; 
lean_del_object(v___x_1590_);
lean_dec(v_snd_1588_);
v_val_1596_ = lean_ctor_get(v_a_1595_, 0);
v_isSharedCheck_1622_ = !lean_is_exclusive(v_a_1595_);
if (v_isSharedCheck_1622_ == 0)
{
v___x_1598_ = v_a_1595_;
v_isShared_1599_ = v_isSharedCheck_1622_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_val_1596_);
lean_dec(v_a_1595_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1622_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
if (v_addSubgoalsMsg_1538_ == 0)
{
lean_object* v_fst_1600_; lean_object* v_snd_1601_; 
lean_del_object(v___x_1598_);
lean_dec_ref(v___y_1578_);
lean_dec_ref(v___y_1577_);
v_fst_1600_ = lean_ctor_get(v_val_1596_, 0);
lean_inc(v_fst_1600_);
v_snd_1601_ = lean_ctor_get(v_val_1596_, 1);
lean_inc(v_snd_1601_);
lean_dec(v_val_1596_);
v___y_1562_ = v_fst_1600_;
v___y_1563_ = v_snd_1601_;
goto v___jp_1561_;
}
else
{
if (v___y_1579_ == 0)
{
lean_object* v_fst_1602_; lean_object* v_snd_1603_; lean_object* v___x_1604_; size_t v_sz_1605_; size_t v___x_1606_; lean_object* v___x_1607_; 
v_fst_1602_ = lean_ctor_get(v_val_1596_, 0);
lean_inc(v_fst_1602_);
v_snd_1603_ = lean_ctor_get(v_val_1596_, 1);
lean_inc(v_snd_1603_);
lean_dec(v_val_1596_);
v___x_1604_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__4));
v_sz_1605_ = lean_array_size(v___y_1578_);
v___x_1606_ = ((size_t)0ULL);
v___x_1607_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___redArg(v___y_1578_, v_sz_1605_, v___x_1606_, v___x_1604_, v_a_1545_, v_a_1546_, v___y_1577_, v___y_1580_);
lean_dec_ref(v___y_1577_);
lean_dec_ref(v___y_1578_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; lean_object* v___x_1610_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v___x_1607_, 1);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 0, v_a_1608_);
v___x_1610_ = v___x_1598_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v_a_1608_);
v___x_1610_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
v___y_1551_ = v_fst_1602_;
v___y_1552_ = v_snd_1603_;
v_postInfo_x3f_1553_ = v___x_1610_;
goto v___jp_1550_;
}
}
else
{
lean_object* v_a_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1619_; 
lean_dec(v_snd_1603_);
lean_dec(v_fst_1602_);
lean_del_object(v___x_1598_);
v_a_1612_ = lean_ctor_get(v___x_1607_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1614_ = v___x_1607_;
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_a_1612_);
lean_dec(v___x_1607_);
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
else
{
lean_object* v_fst_1620_; lean_object* v_snd_1621_; 
lean_del_object(v___x_1598_);
lean_dec_ref(v___y_1578_);
lean_dec_ref(v___y_1577_);
v_fst_1620_ = lean_ctor_get(v_val_1596_, 0);
lean_inc(v_fst_1620_);
v_snd_1621_ = lean_ctor_get(v_val_1596_, 1);
lean_inc(v_snd_1621_);
lean_dec(v_val_1596_);
v___y_1562_ = v_fst_1620_;
v___y_1563_ = v_snd_1621_;
goto v___jp_1561_;
}
}
}
}
else
{
lean_object* v___x_1623_; lean_object* v___x_1625_; 
lean_dec(v_a_1595_);
lean_dec_ref(v___y_1578_);
lean_dec_ref(v___y_1577_);
v___x_1623_ = lean_obj_once(&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__16, &l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__16_once, _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__16);
if (v_isShared_1591_ == 0)
{
lean_ctor_set_tag(v___x_1590_, 7);
lean_ctor_set(v___x_1590_, 0, v___x_1623_);
v___x_1625_ = v___x_1590_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v___x_1623_);
lean_ctor_set(v_reuseFailAlloc_1631_, 1, v_snd_1588_);
v___x_1625_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1626_ = lean_obj_once(&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__17, &l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__17_once, _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__17);
v___x_1627_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1625_);
lean_ctor_set(v___x_1627_, 1, v___x_1626_);
v___x_1628_ = lean_obj_once(&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__6, &l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__6_once, _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__6);
if (v___y_1581_ == 0)
{
lean_object* v___x_1629_; 
v___x_1629_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___closed__0));
v___y_1566_ = v___x_1628_;
v___y_1567_ = v___x_1627_;
v___y_1568_ = v___x_1629_;
goto v___jp_1565_;
}
else
{
lean_object* v___x_1630_; 
v___x_1630_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__7));
v___y_1566_ = v___x_1628_;
v___y_1567_ = v___x_1627_;
v___y_1568_ = v___x_1630_;
goto v___jp_1565_;
}
}
}
}
else
{
lean_object* v_a_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1639_; 
lean_del_object(v___x_1590_);
lean_dec(v_snd_1588_);
lean_dec_ref(v___y_1578_);
lean_dec_ref(v___y_1577_);
v_a_1632_ = lean_ctor_get(v___x_1594_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_1594_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1634_ = v___x_1594_;
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_a_1632_);
lean_dec(v___x_1594_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1637_; 
if (v_isShared_1635_ == 0)
{
v___x_1637_ = v___x_1634_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v_a_1632_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
}
}
}
else
{
lean_object* v_fst_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1655_; 
lean_dec_ref(v___y_1578_);
lean_dec_ref(v___y_1577_);
lean_dec(v_checkState_x3f_1539_);
v_fst_1641_ = lean_ctor_get(v_a_1583_, 0);
v_isSharedCheck_1655_ = !lean_is_exclusive(v_a_1583_);
if (v_isSharedCheck_1655_ == 0)
{
lean_object* v_unused_1656_; 
v_unused_1656_ = lean_ctor_get(v_a_1583_, 1);
lean_dec(v_unused_1656_);
v___x_1643_ = v_a_1583_;
v_isShared_1644_ = v_isSharedCheck_1655_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_fst_1641_);
lean_dec(v_a_1583_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1655_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___x_1645_; lean_object* v___x_1647_; 
v___x_1645_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__1));
if (v_isShared_1644_ == 0)
{
lean_ctor_set(v___x_1643_, 1, v_fst_1641_);
lean_ctor_set(v___x_1643_, 0, v___x_1645_);
v___x_1647_ = v___x_1643_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v___x_1645_);
lean_ctor_set(v_reuseFailAlloc_1654_, 1, v_fst_1641_);
v___x_1647_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1652_; 
v___x_1648_ = lean_box(0);
v___x_1649_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1649_, 0, v___x_1647_);
lean_ctor_set(v___x_1649_, 1, v___x_1648_);
lean_ctor_set(v___x_1649_, 2, v___x_1648_);
lean_ctor_set(v___x_1649_, 3, v___x_1648_);
lean_ctor_set(v___x_1649_, 4, v___x_1648_);
lean_ctor_set(v___x_1649_, 5, v___x_1648_);
v___x_1650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1649_);
if (v_isShared_1586_ == 0)
{
lean_ctor_set(v___x_1585_, 0, v___x_1650_);
v___x_1652_ = v___x_1585_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v___x_1650_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
}
}
}
else
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1665_; 
lean_dec_ref(v___y_1578_);
lean_dec_ref(v___y_1577_);
lean_dec(v_checkState_x3f_1539_);
v_a_1658_ = lean_ctor_get(v___x_1582_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1660_ = v___x_1582_;
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___x_1582_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1663_; 
if (v_isShared_1661_ == 0)
{
v___x_1663_ = v___x_1660_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_a_1658_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
}
v___jp_1666_:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1685_ = l_Lean_maxRecDepth;
v___x_1686_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSyntax_spec__0(v___y_1667_, v___x_1685_);
v___x_1687_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1687_, 0, v_fileName_1669_);
lean_ctor_set(v___x_1687_, 1, v_fileMap_1670_);
lean_ctor_set(v___x_1687_, 2, v___y_1667_);
lean_ctor_set(v___x_1687_, 3, v___x_1686_);
lean_ctor_set(v___x_1687_, 4, v_currNamespace_1671_);
lean_ctor_set(v___x_1687_, 5, v_openDecls_1672_);
lean_ctor_set(v___x_1687_, 6, v_initHeartbeats_1673_);
lean_ctor_set(v___x_1687_, 7, v_maxHeartbeats_1674_);
lean_ctor_set(v___x_1687_, 8, v_quotContext_1675_);
lean_ctor_set(v___x_1687_, 9, v_currMacroScope_1676_);
lean_ctor_set(v___x_1687_, 10, v_cancelTk_x3f_1677_);
lean_ctor_set(v___x_1687_, 11, v_inheritedTraceOptions_1678_);
lean_inc(v_ref_1680_);
lean_inc(v_currRecDepth_1679_);
v___x_1688_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1688_, 0, v___x_1687_);
lean_ctor_set(v___x_1688_, 1, v_currRecDepth_1679_);
lean_ctor_set(v___x_1688_, 2, v_ref_1680_);
lean_ctor_set_uint16(v___x_1688_, sizeof(void*)*3, v___y_1668_);
lean_ctor_set_uint8(v___x_1688_, sizeof(void*)*3 + 2, v_suppressElabErrors_1681_);
lean_ctor_set_uint8(v___x_1688_, sizeof(void*)*3 + 3, v_checkDeprecated_1682_);
lean_ctor_set_uint8(v___x_1688_, sizeof(void*)*3 + 4, v_isRecordingDeps_1683_);
lean_inc_ref(v_e_1540_);
v___x_1689_ = l_Lean_Meta_getMVars(v_e_1540_, v_a_1545_, v_a_1546_, v___x_1688_, v___y_1684_);
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_object* v_a_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; uint8_t v___x_1693_; 
v_a_1690_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_a_1690_);
lean_dec_ref_known(v___x_1689_, 1);
v___x_1691_ = lean_array_get_size(v_a_1690_);
v___x_1692_ = lean_unsigned_to_nat(0u);
v___x_1693_ = lean_nat_dec_eq(v___x_1691_, v___x_1692_);
if (v___x_1693_ == 0)
{
uint8_t v___x_1694_; 
v___x_1694_ = 1;
v___y_1577_ = v___x_1688_;
v___y_1578_ = v_a_1690_;
v___y_1579_ = v___x_1693_;
v___y_1580_ = v___y_1684_;
v___y_1581_ = v___x_1694_;
goto v___jp_1576_;
}
else
{
uint8_t v___x_1695_; 
v___x_1695_ = 0;
v___y_1577_ = v___x_1688_;
v___y_1578_ = v_a_1690_;
v___y_1579_ = v___x_1693_;
v___y_1580_ = v___y_1684_;
v___y_1581_ = v___x_1695_;
goto v___jp_1576_;
}
}
else
{
lean_object* v_a_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1703_; 
lean_dec_ref_known(v___x_1688_, 3);
lean_dec_ref(v_e_1540_);
lean_dec(v_checkState_x3f_1539_);
v_a_1696_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1698_ = v___x_1689_;
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_a_1696_);
lean_dec(v___x_1689_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1701_; 
if (v_isShared_1699_ == 0)
{
v___x_1701_ = v___x_1698_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_a_1696_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
}
}
v___jp_1721_:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1733_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__2, &l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__2_once, _init_l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax___closed__2);
v___x_1734_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1734_, 0, v___y_1732_);
lean_ctor_set(v___x_1734_, 1, v_nextMacroScope_1724_);
lean_ctor_set(v___x_1734_, 2, v_ngen_1725_);
lean_ctor_set(v___x_1734_, 3, v_auxDeclNGen_1726_);
lean_ctor_set(v___x_1734_, 4, v_traceState_1727_);
lean_ctor_set(v___x_1734_, 5, v___x_1733_);
lean_ctor_set(v___x_1734_, 6, v_recordedDeps_1728_);
lean_ctor_set(v___x_1734_, 7, v_messages_1729_);
lean_ctor_set(v___x_1734_, 8, v_infoState_1730_);
lean_ctor_set(v___x_1734_, 9, v_snapshotTasks_1731_);
v___x_1735_ = lean_st_ref_put(v_a_1548_, v___x_1734_);
lean_inc_ref(v_inheritedTraceOptions_1720_);
lean_inc(v_cancelTk_x3f_1719_);
lean_inc(v_currMacroScope_1718_);
lean_inc(v_quotContext_1717_);
lean_inc(v_maxHeartbeats_1716_);
lean_inc(v_initHeartbeats_1715_);
lean_inc(v_openDecls_1714_);
lean_inc(v_currNamespace_1713_);
lean_inc_ref(v_fileMap_1711_);
lean_inc_ref(v_fileName_1710_);
v___y_1667_ = v___y_1722_;
v___y_1668_ = v___y_1723_;
v_fileName_1669_ = v_fileName_1710_;
v_fileMap_1670_ = v_fileMap_1711_;
v_currNamespace_1671_ = v_currNamespace_1713_;
v_openDecls_1672_ = v_openDecls_1714_;
v_initHeartbeats_1673_ = v_initHeartbeats_1715_;
v_maxHeartbeats_1674_ = v_maxHeartbeats_1716_;
v_quotContext_1675_ = v_quotContext_1717_;
v_currMacroScope_1676_ = v_currMacroScope_1718_;
v_cancelTk_x3f_1677_ = v_cancelTk_x3f_1719_;
v_inheritedTraceOptions_1678_ = v_inheritedTraceOptions_1720_;
v_currRecDepth_1679_ = v_currRecDepth_1705_;
v_ref_1680_ = v_ref_1706_;
v_suppressElabErrors_1681_ = v_suppressElabErrors_1707_;
v_checkDeprecated_1682_ = v_checkDeprecated_1708_;
v_isRecordingDeps_1683_ = v_isRecordingDeps_1709_;
v___y_1684_ = v_a_1548_;
goto v___jp_1666_;
}
v___jp_1736_:
{
uint8_t v___x_1740_; lean_object* v___x_1741_; lean_object* v_env_1742_; lean_object* v_nextMacroScope_1743_; lean_object* v_ngen_1744_; lean_object* v_auxDeclNGen_1745_; lean_object* v_traceState_1746_; lean_object* v_recordedDeps_1747_; lean_object* v_messages_1748_; lean_object* v_infoState_1749_; lean_object* v_snapshotTasks_1750_; uint16_t v___x_1751_; uint16_t v___x_1752_; uint16_t v___x_1753_; uint8_t v___x_1754_; 
v___x_1740_ = 1;
v___x_1741_ = lean_st_ref_take(v_a_1548_);
v_env_1742_ = lean_ctor_get(v___x_1741_, 0);
lean_inc_ref(v_env_1742_);
v_nextMacroScope_1743_ = lean_ctor_get(v___x_1741_, 1);
lean_inc(v_nextMacroScope_1743_);
v_ngen_1744_ = lean_ctor_get(v___x_1741_, 2);
lean_inc_ref(v_ngen_1744_);
v_auxDeclNGen_1745_ = lean_ctor_get(v___x_1741_, 3);
lean_inc_ref(v_auxDeclNGen_1745_);
v_traceState_1746_ = lean_ctor_get(v___x_1741_, 4);
lean_inc_ref(v_traceState_1746_);
v_recordedDeps_1747_ = lean_ctor_get(v___x_1741_, 6);
lean_inc_ref(v_recordedDeps_1747_);
v_messages_1748_ = lean_ctor_get(v___x_1741_, 7);
lean_inc_ref(v_messages_1748_);
v_infoState_1749_ = lean_ctor_get(v___x_1741_, 8);
lean_inc_ref(v_infoState_1749_);
v_snapshotTasks_1750_ = lean_ctor_get(v___x_1741_, 9);
lean_inc_ref(v_snapshotTasks_1750_);
lean_dec(v___x_1741_);
v___x_1751_ = 512;
v___x_1752_ = lean_uint16_land(v___y_1738_, v___x_1751_);
v___x_1753_ = 0;
v___x_1754_ = lean_uint16_dec_eq(v___x_1752_, v___x_1753_);
if (v___x_1754_ == 0)
{
lean_object* v___x_1755_; 
v___x_1755_ = l_Lean_Kernel_enableDiag(v_env_1742_, v___x_1740_);
v___y_1722_ = v___y_1737_;
v___y_1723_ = v___y_1738_;
v_nextMacroScope_1724_ = v_nextMacroScope_1743_;
v_ngen_1725_ = v_ngen_1744_;
v_auxDeclNGen_1726_ = v_auxDeclNGen_1745_;
v_traceState_1727_ = v_traceState_1746_;
v_recordedDeps_1728_ = v_recordedDeps_1747_;
v_messages_1729_ = v_messages_1748_;
v_infoState_1730_ = v_infoState_1749_;
v_snapshotTasks_1731_ = v_snapshotTasks_1750_;
v___y_1732_ = v___x_1755_;
goto v___jp_1721_;
}
else
{
lean_object* v___x_1756_; 
v___x_1756_ = l_Lean_Kernel_enableDiag(v_env_1742_, v___y_1739_);
v___y_1722_ = v___y_1737_;
v___y_1723_ = v___y_1738_;
v_nextMacroScope_1724_ = v_nextMacroScope_1743_;
v_ngen_1725_ = v_ngen_1744_;
v_auxDeclNGen_1726_ = v_auxDeclNGen_1745_;
v_traceState_1727_ = v_traceState_1746_;
v_recordedDeps_1728_ = v_recordedDeps_1747_;
v_messages_1729_ = v_messages_1748_;
v_infoState_1730_ = v_infoState_1749_;
v_snapshotTasks_1731_ = v_snapshotTasks_1750_;
v___y_1732_ = v___x_1756_;
goto v___jp_1721_;
}
}
v___jp_1757_:
{
uint16_t v___x_1759_; lean_object* v___x_1760_; lean_object* v_env_1761_; uint8_t v___x_1762_; uint16_t v___x_1763_; uint16_t v___x_1764_; uint16_t v___x_1765_; uint8_t v___x_1766_; 
v___x_1759_ = l_Lean_OptionFlags_ofOptions(v___y_1758_);
v___x_1760_ = lean_st_ref_get(v_a_1548_);
v_env_1761_ = lean_ctor_get(v___x_1760_, 0);
lean_inc_ref(v_env_1761_);
lean_dec(v___x_1760_);
v___x_1762_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1761_);
lean_dec_ref(v_env_1761_);
v___x_1763_ = 512;
v___x_1764_ = lean_uint16_land(v___x_1759_, v___x_1763_);
v___x_1765_ = 0;
v___x_1766_ = lean_uint16_dec_eq(v___x_1764_, v___x_1765_);
if (v___x_1766_ == 0)
{
if (v___x_1762_ == 0)
{
v___y_1737_ = v___y_1758_;
v___y_1738_ = v___x_1759_;
v___y_1739_ = v___x_1762_;
goto v___jp_1736_;
}
else
{
lean_inc_ref(v_inheritedTraceOptions_1720_);
lean_inc(v_cancelTk_x3f_1719_);
lean_inc(v_currMacroScope_1718_);
lean_inc(v_quotContext_1717_);
lean_inc(v_maxHeartbeats_1716_);
lean_inc(v_initHeartbeats_1715_);
lean_inc(v_openDecls_1714_);
lean_inc(v_currNamespace_1713_);
lean_inc_ref(v_fileMap_1711_);
lean_inc_ref(v_fileName_1710_);
v___y_1667_ = v___y_1758_;
v___y_1668_ = v___x_1759_;
v_fileName_1669_ = v_fileName_1710_;
v_fileMap_1670_ = v_fileMap_1711_;
v_currNamespace_1671_ = v_currNamespace_1713_;
v_openDecls_1672_ = v_openDecls_1714_;
v_initHeartbeats_1673_ = v_initHeartbeats_1715_;
v_maxHeartbeats_1674_ = v_maxHeartbeats_1716_;
v_quotContext_1675_ = v_quotContext_1717_;
v_currMacroScope_1676_ = v_currMacroScope_1718_;
v_cancelTk_x3f_1677_ = v_cancelTk_x3f_1719_;
v_inheritedTraceOptions_1678_ = v_inheritedTraceOptions_1720_;
v_currRecDepth_1679_ = v_currRecDepth_1705_;
v_ref_1680_ = v_ref_1706_;
v_suppressElabErrors_1681_ = v_suppressElabErrors_1707_;
v_checkDeprecated_1682_ = v_checkDeprecated_1708_;
v_isRecordingDeps_1683_ = v_isRecordingDeps_1709_;
v___y_1684_ = v_a_1548_;
goto v___jp_1666_;
}
}
else
{
if (v___x_1762_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_1720_);
lean_inc(v_cancelTk_x3f_1719_);
lean_inc(v_currMacroScope_1718_);
lean_inc(v_quotContext_1717_);
lean_inc(v_maxHeartbeats_1716_);
lean_inc(v_initHeartbeats_1715_);
lean_inc(v_openDecls_1714_);
lean_inc(v_currNamespace_1713_);
lean_inc_ref(v_fileMap_1711_);
lean_inc_ref(v_fileName_1710_);
v___y_1667_ = v___y_1758_;
v___y_1668_ = v___x_1759_;
v_fileName_1669_ = v_fileName_1710_;
v_fileMap_1670_ = v_fileMap_1711_;
v_currNamespace_1671_ = v_currNamespace_1713_;
v_openDecls_1672_ = v_openDecls_1714_;
v_initHeartbeats_1673_ = v_initHeartbeats_1715_;
v_maxHeartbeats_1674_ = v_maxHeartbeats_1716_;
v_quotContext_1675_ = v_quotContext_1717_;
v_currMacroScope_1676_ = v_currMacroScope_1718_;
v_cancelTk_x3f_1677_ = v_cancelTk_x3f_1719_;
v_inheritedTraceOptions_1678_ = v_inheritedTraceOptions_1720_;
v_currRecDepth_1679_ = v_currRecDepth_1705_;
v_ref_1680_ = v_ref_1706_;
v_suppressElabErrors_1681_ = v_suppressElabErrors_1707_;
v_checkDeprecated_1682_ = v_checkDeprecated_1708_;
v_isRecordingDeps_1683_ = v_isRecordingDeps_1709_;
v___y_1684_ = v_a_1548_;
goto v___jp_1666_;
}
else
{
uint8_t v___x_1767_; 
v___x_1767_ = 0;
v___y_1737_ = v___y_1758_;
v___y_1738_ = v___x_1759_;
v___y_1739_ = v___x_1767_;
goto v___jp_1736_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___boxed(lean_object* v_addSubgoalsMsg_1771_, lean_object* v_checkState_x3f_1772_, lean_object* v_e_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_, lean_object* v_a_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_){
_start:
{
uint8_t v_addSubgoalsMsg_boxed_1783_; lean_object* v_res_1784_; 
v_addSubgoalsMsg_boxed_1783_ = lean_unbox(v_addSubgoalsMsg_1771_);
v_res_1784_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore(v_addSubgoalsMsg_boxed_1783_, v_checkState_x3f_1772_, v_e_1773_, v_a_1774_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_, v_a_1780_, v_a_1781_);
lean_dec(v_a_1781_);
lean_dec_ref(v_a_1780_);
lean_dec(v_a_1779_);
lean_dec_ref(v_a_1778_);
lean_dec(v_a_1777_);
lean_dec_ref(v_a_1776_);
lean_dec(v_a_1775_);
lean_dec_ref(v_a_1774_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0(lean_object* v_as_1785_, size_t v_sz_1786_, size_t v_i_1787_, lean_object* v_b_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
lean_object* v___x_1798_; 
v___x_1798_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___redArg(v_as_1785_, v_sz_1786_, v_i_1787_, v_b_1788_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_);
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0___boxed(lean_object* v_as_1799_, lean_object* v_sz_1800_, lean_object* v_i_1801_, lean_object* v_b_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_){
_start:
{
size_t v_sz_boxed_1812_; size_t v_i_boxed_1813_; lean_object* v_res_1814_; 
v_sz_boxed_1812_ = lean_unbox_usize(v_sz_1800_);
lean_dec(v_sz_1800_);
v_i_boxed_1813_ = lean_unbox_usize(v_i_1801_);
lean_dec(v_i_1801_);
v_res_1814_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore_spec__0(v_as_1799_, v_sz_boxed_1812_, v_i_boxed_1813_, v_b_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
lean_dec(v___y_1808_);
lean_dec_ref(v___y_1807_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec_ref(v_as_1799_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_1815_, lean_object* v_msgData_1816_, uint8_t v_severity_1817_, uint8_t v_isSilent_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
lean_object* v___y_1825_; lean_object* v___y_1826_; lean_object* v___y_1827_; uint8_t v___y_1828_; lean_object* v___y_1829_; lean_object* v___y_1830_; uint8_t v___y_1831_; lean_object* v_toCold_1832_; lean_object* v___y_1833_; lean_object* v___y_1862_; lean_object* v___y_1863_; lean_object* v___y_1864_; uint8_t v___y_1865_; lean_object* v___y_1866_; uint8_t v___y_1867_; uint8_t v___y_1868_; lean_object* v___y_1869_; lean_object* v___y_1889_; uint8_t v___y_1890_; lean_object* v___y_1891_; lean_object* v___y_1892_; uint8_t v___y_1893_; uint8_t v___y_1894_; lean_object* v___y_1895_; uint8_t v___y_1899_; uint8_t v___x_1916_; uint8_t v___x_1917_; 
v___x_1916_ = 2;
v___x_1917_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1817_, v___x_1916_);
if (v___x_1917_ == 0)
{
goto v___jp_1909_;
}
else
{
uint8_t v___x_1918_; 
lean_inc_ref(v_msgData_1816_);
v___x_1918_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1816_);
if (v___x_1918_ == 0)
{
goto v___jp_1909_;
}
else
{
lean_object* v___x_1919_; lean_object* v___x_1920_; 
lean_dec_ref(v_msgData_1816_);
v___x_1919_ = lean_box(0);
v___x_1920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1920_, 0, v___x_1919_);
return v___x_1920_;
}
}
v___jp_1824_:
{
lean_object* v_currNamespace_1834_; lean_object* v_openDecls_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v_env_1840_; lean_object* v_nextMacroScope_1841_; lean_object* v_ngen_1842_; lean_object* v_auxDeclNGen_1843_; lean_object* v_traceState_1844_; lean_object* v_cache_1845_; lean_object* v_recordedDeps_1846_; lean_object* v_messages_1847_; lean_object* v_infoState_1848_; lean_object* v_snapshotTasks_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1860_; 
v_currNamespace_1834_ = lean_ctor_get(v_toCold_1832_, 4);
v_openDecls_1835_ = lean_ctor_get(v_toCold_1832_, 5);
lean_inc(v_openDecls_1835_);
lean_inc(v_currNamespace_1834_);
v___x_1836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1836_, 0, v_currNamespace_1834_);
lean_ctor_set(v___x_1836_, 1, v_openDecls_1835_);
v___x_1837_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1836_);
lean_ctor_set(v___x_1837_, 1, v___y_1829_);
lean_inc_ref(v___y_1826_);
lean_inc_ref(v___y_1830_);
v___x_1838_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1838_, 0, v___y_1830_);
lean_ctor_set(v___x_1838_, 1, v___y_1825_);
lean_ctor_set(v___x_1838_, 2, v___y_1827_);
lean_ctor_set(v___x_1838_, 3, v___y_1826_);
lean_ctor_set(v___x_1838_, 4, v___x_1837_);
lean_ctor_set_uint8(v___x_1838_, sizeof(void*)*5, v___y_1828_);
lean_ctor_set_uint8(v___x_1838_, sizeof(void*)*5 + 1, v___y_1831_);
lean_ctor_set_uint8(v___x_1838_, sizeof(void*)*5 + 2, v_isSilent_1818_);
v___x_1839_ = lean_st_ref_take(v___y_1833_);
v_env_1840_ = lean_ctor_get(v___x_1839_, 0);
v_nextMacroScope_1841_ = lean_ctor_get(v___x_1839_, 1);
v_ngen_1842_ = lean_ctor_get(v___x_1839_, 2);
v_auxDeclNGen_1843_ = lean_ctor_get(v___x_1839_, 3);
v_traceState_1844_ = lean_ctor_get(v___x_1839_, 4);
v_cache_1845_ = lean_ctor_get(v___x_1839_, 5);
v_recordedDeps_1846_ = lean_ctor_get(v___x_1839_, 6);
v_messages_1847_ = lean_ctor_get(v___x_1839_, 7);
v_infoState_1848_ = lean_ctor_get(v___x_1839_, 8);
v_snapshotTasks_1849_ = lean_ctor_get(v___x_1839_, 9);
v_isSharedCheck_1860_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1851_ = v___x_1839_;
v_isShared_1852_ = v_isSharedCheck_1860_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_snapshotTasks_1849_);
lean_inc(v_infoState_1848_);
lean_inc(v_messages_1847_);
lean_inc(v_recordedDeps_1846_);
lean_inc(v_cache_1845_);
lean_inc(v_traceState_1844_);
lean_inc(v_auxDeclNGen_1843_);
lean_inc(v_ngen_1842_);
lean_inc(v_nextMacroScope_1841_);
lean_inc(v_env_1840_);
lean_dec(v___x_1839_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1860_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1856_; 
v___x_1853_ = lean_box(0);
v___x_1854_ = l_Lean_MessageLog_add(v___x_1838_, v_messages_1847_);
if (v_isShared_1852_ == 0)
{
lean_ctor_set(v___x_1851_, 7, v___x_1854_);
v___x_1856_ = v___x_1851_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v_env_1840_);
lean_ctor_set(v_reuseFailAlloc_1859_, 1, v_nextMacroScope_1841_);
lean_ctor_set(v_reuseFailAlloc_1859_, 2, v_ngen_1842_);
lean_ctor_set(v_reuseFailAlloc_1859_, 3, v_auxDeclNGen_1843_);
lean_ctor_set(v_reuseFailAlloc_1859_, 4, v_traceState_1844_);
lean_ctor_set(v_reuseFailAlloc_1859_, 5, v_cache_1845_);
lean_ctor_set(v_reuseFailAlloc_1859_, 6, v_recordedDeps_1846_);
lean_ctor_set(v_reuseFailAlloc_1859_, 7, v___x_1854_);
lean_ctor_set(v_reuseFailAlloc_1859_, 8, v_infoState_1848_);
lean_ctor_set(v_reuseFailAlloc_1859_, 9, v_snapshotTasks_1849_);
v___x_1856_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; 
v___x_1857_ = lean_st_ref_put(v___y_1833_, v___x_1856_);
v___x_1858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1853_);
return v___x_1858_;
}
}
}
v___jp_1861_:
{
lean_object* v_fileName_1870_; lean_object* v_fileMap_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v_a_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1887_; 
v_fileName_1870_ = lean_ctor_get(v___y_1866_, 0);
v_fileMap_1871_ = lean_ctor_get(v___y_1866_, 1);
v___x_1872_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1816_);
v___x_1873_ = l_Lean_addMessageContextFull___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion_spec__0(v___x_1872_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_);
v_a_1874_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1876_ = v___x_1873_;
v_isShared_1877_ = v_isSharedCheck_1887_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_a_1874_);
lean_dec(v___x_1873_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1887_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
lean_inc_ref_n(v_fileMap_1871_, 2);
v___x_1878_ = l_Lean_FileMap_toPosition(v_fileMap_1871_, v___y_1864_);
lean_dec(v___y_1864_);
v___x_1879_ = l_Lean_FileMap_toPosition(v_fileMap_1871_, v___y_1869_);
lean_dec(v___y_1869_);
v___x_1880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1879_);
v___x_1881_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___closed__0));
if (v___y_1867_ == 0)
{
lean_del_object(v___x_1876_);
v___y_1825_ = v___x_1878_;
v___y_1826_ = v___x_1881_;
v___y_1827_ = v___x_1880_;
v___y_1828_ = v___y_1865_;
v___y_1829_ = v_a_1874_;
v___y_1830_ = v_fileName_1870_;
v___y_1831_ = v___y_1868_;
v_toCold_1832_ = v___y_1862_;
v___y_1833_ = v___y_1822_;
goto v___jp_1824_;
}
else
{
uint8_t v___x_1882_; 
lean_inc(v_a_1874_);
lean_inc_ref(v___y_1863_);
v___x_1882_ = l_Lean_MessageData_hasTag(v___y_1863_, v_a_1874_);
if (v___x_1882_ == 0)
{
lean_object* v___x_1883_; lean_object* v___x_1885_; 
lean_dec_ref_known(v___x_1880_, 1);
lean_dec_ref(v___x_1878_);
lean_dec(v_a_1874_);
v___x_1883_ = lean_box(0);
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 0, v___x_1883_);
v___x_1885_ = v___x_1876_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v___x_1883_);
v___x_1885_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
return v___x_1885_;
}
}
else
{
lean_del_object(v___x_1876_);
v___y_1825_ = v___x_1878_;
v___y_1826_ = v___x_1881_;
v___y_1827_ = v___x_1880_;
v___y_1828_ = v___y_1865_;
v___y_1829_ = v_a_1874_;
v___y_1830_ = v_fileName_1870_;
v___y_1831_ = v___y_1868_;
v_toCold_1832_ = v___y_1862_;
v___y_1833_ = v___y_1822_;
goto v___jp_1824_;
}
}
}
}
v___jp_1888_:
{
lean_object* v___x_1896_; 
v___x_1896_ = l_Lean_Syntax_getTailPos_x3f(v___y_1889_, v___y_1890_);
lean_dec(v___y_1889_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_inc(v___y_1895_);
v___y_1862_ = v___y_1891_;
v___y_1863_ = v___y_1892_;
v___y_1864_ = v___y_1895_;
v___y_1865_ = v___y_1890_;
v___y_1866_ = v___y_1891_;
v___y_1867_ = v___y_1893_;
v___y_1868_ = v___y_1894_;
v___y_1869_ = v___y_1895_;
goto v___jp_1861_;
}
else
{
lean_object* v_val_1897_; 
v_val_1897_ = lean_ctor_get(v___x_1896_, 0);
lean_inc(v_val_1897_);
lean_dec_ref_known(v___x_1896_, 1);
v___y_1862_ = v___y_1891_;
v___y_1863_ = v___y_1892_;
v___y_1864_ = v___y_1895_;
v___y_1865_ = v___y_1890_;
v___y_1866_ = v___y_1891_;
v___y_1867_ = v___y_1893_;
v___y_1868_ = v___y_1894_;
v___y_1869_ = v_val_1897_;
goto v___jp_1861_;
}
}
v___jp_1898_:
{
lean_object* v_toCold_1900_; lean_object* v_ref_1901_; uint8_t v_suppressElabErrors_1902_; lean_object* v_ref_1903_; uint8_t v___x_1904_; lean_object* v___f_1905_; lean_object* v___x_1906_; 
v_toCold_1900_ = lean_ctor_get(v___y_1821_, 0);
v_ref_1901_ = lean_ctor_get(v___y_1821_, 2);
v_suppressElabErrors_1902_ = lean_ctor_get_uint8(v___y_1821_, sizeof(void*)*3 + 2);
v_ref_1903_ = l_Lean_replaceRef(v_ref_1815_, v_ref_1901_);
v___x_1904_ = 0;
v___f_1905_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___closed__1));
v___x_1906_ = l_Lean_Syntax_getPos_x3f(v_ref_1903_, v___x_1904_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v___x_1907_; 
v___x_1907_ = lean_unsigned_to_nat(0u);
v___y_1889_ = v_ref_1903_;
v___y_1890_ = v___x_1904_;
v___y_1891_ = v_toCold_1900_;
v___y_1892_ = v___f_1905_;
v___y_1893_ = v_suppressElabErrors_1902_;
v___y_1894_ = v___y_1899_;
v___y_1895_ = v___x_1907_;
goto v___jp_1888_;
}
else
{
lean_object* v_val_1908_; 
v_val_1908_ = lean_ctor_get(v___x_1906_, 0);
lean_inc(v_val_1908_);
lean_dec_ref_known(v___x_1906_, 1);
v___y_1889_ = v_ref_1903_;
v___y_1890_ = v___x_1904_;
v___y_1891_ = v_toCold_1900_;
v___y_1892_ = v___f_1905_;
v___y_1893_ = v_suppressElabErrors_1902_;
v___y_1894_ = v___y_1899_;
v___y_1895_ = v_val_1908_;
goto v___jp_1888_;
}
}
v___jp_1909_:
{
uint8_t v___x_1910_; uint8_t v___x_1911_; 
v___x_1910_ = 1;
v___x_1911_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1817_, v___x_1910_);
if (v___x_1911_ == 0)
{
v___y_1899_ = v_severity_1817_;
goto v___jp_1898_;
}
else
{
lean_object* v___x_1912_; lean_object* v___x_1913_; uint8_t v___x_1914_; 
v___x_1912_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1821_);
v___x_1913_ = l_Lean_warningAsError;
v___x_1914_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0_spec__2(v___x_1912_, v___x_1913_);
lean_dec_ref(v___x_1912_);
if (v___x_1914_ == 0)
{
v___y_1899_ = v_severity_1817_;
goto v___jp_1898_;
}
else
{
uint8_t v___x_1915_; 
v___x_1915_ = 2;
v___y_1899_ = v___x_1915_;
goto v___jp_1898_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1921_, lean_object* v_msgData_1922_, lean_object* v_severity_1923_, lean_object* v_isSilent_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_){
_start:
{
uint8_t v_severity_boxed_1930_; uint8_t v_isSilent_boxed_1931_; lean_object* v_res_1932_; 
v_severity_boxed_1930_ = lean_unbox(v_severity_1923_);
v_isSilent_boxed_1931_ = lean_unbox(v_isSilent_1924_);
v_res_1932_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0_spec__1___redArg(v_ref_1921_, v_msgData_1922_, v_severity_boxed_1930_, v_isSilent_boxed_1931_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_);
lean_dec(v___y_1928_);
lean_dec_ref(v___y_1927_);
lean_dec(v___y_1926_);
lean_dec_ref(v___y_1925_);
lean_dec(v_ref_1921_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0(lean_object* v_msgData_1933_, uint8_t v_severity_1934_, uint8_t v_isSilent_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_){
_start:
{
lean_object* v_ref_1945_; lean_object* v___x_1946_; 
v_ref_1945_ = lean_ctor_get(v___y_1942_, 2);
v___x_1946_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0_spec__1___redArg(v_ref_1945_, v_msgData_1933_, v_severity_1934_, v_isSilent_1935_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_);
return v___x_1946_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0___boxed(lean_object* v_msgData_1947_, lean_object* v_severity_1948_, lean_object* v_isSilent_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_){
_start:
{
uint8_t v_severity_boxed_1959_; uint8_t v_isSilent_boxed_1960_; lean_object* v_res_1961_; 
v_severity_boxed_1959_ = lean_unbox(v_severity_1948_);
v_isSilent_boxed_1960_ = lean_unbox(v_isSilent_1949_);
v_res_1961_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0(v_msgData_1947_, v_severity_boxed_1959_, v_isSilent_boxed_1960_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_);
lean_dec(v___y_1957_);
lean_dec_ref(v___y_1956_);
lean_dec(v___y_1955_);
lean_dec_ref(v___y_1954_);
lean_dec(v___y_1953_);
lean_dec_ref(v___y_1952_);
lean_dec(v___y_1951_);
lean_dec_ref(v___y_1950_);
return v_res_1961_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0(lean_object* v_msgData_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_){
_start:
{
uint8_t v___x_1972_; uint8_t v___x_1973_; lean_object* v___x_1974_; 
v___x_1972_ = 0;
v___x_1973_ = 0;
v___x_1974_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0(v_msgData_1962_, v___x_1972_, v___x_1973_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_);
return v___x_1974_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0___boxed(lean_object* v_msgData_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l_Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0(v_msgData_1975_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
lean_dec(v___y_1979_);
lean_dec_ref(v___y_1978_);
lean_dec(v___y_1977_);
lean_dec_ref(v___y_1976_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addExactSuggestion(lean_object* v_ref_1987_, lean_object* v_e_1988_, lean_object* v_origSpan_x3f_1989_, uint8_t v_addSubgoalsMsg_1990_, lean_object* v_codeActionPrefix_x3f_1991_, lean_object* v_checkState_x3f_1992_, uint8_t v_tacticErrorAsInfo_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_){
_start:
{
lean_object* v___x_2003_; 
v___x_2003_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore(v_addSubgoalsMsg_1990_, v_checkState_x3f_1992_, v_e_1988_, v_a_1994_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_);
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_object* v_a_2004_; 
v_a_2004_ = lean_ctor_get(v___x_2003_, 0);
lean_inc(v_a_2004_);
lean_dec_ref_known(v___x_2003_, 1);
if (lean_obj_tag(v_a_2004_) == 0)
{
lean_object* v_val_2005_; lean_object* v___x_2006_; uint8_t v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; 
v_val_2005_ = lean_ctor_get(v_a_2004_, 0);
lean_inc(v_val_2005_);
lean_dec_ref_known(v_a_2004_, 1);
v___x_2006_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addExactSuggestion___closed__0));
v___x_2007_ = 4;
v___x_2008_ = l_Lean_MessageData_nil;
v___x_2009_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_ref_1987_, v_val_2005_, v_origSpan_x3f_1989_, v___x_2006_, v_codeActionPrefix_x3f_1991_, v___x_2007_, v___x_2008_, v_a_2000_, v_a_2001_);
return v___x_2009_;
}
else
{
lean_dec(v_codeActionPrefix_x3f_1991_);
lean_dec(v_origSpan_x3f_1989_);
lean_dec(v_ref_1987_);
if (v_tacticErrorAsInfo_1993_ == 0)
{
lean_object* v_val_2010_; lean_object* v___x_2011_; 
v_val_2010_ = lean_ctor_get(v_a_2004_, 0);
lean_inc(v_val_2010_);
lean_dec_ref_known(v_a_2004_, 1);
v___x_2011_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__2___redArg(v_val_2010_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_);
return v___x_2011_;
}
else
{
lean_object* v_val_2012_; lean_object* v___x_2013_; 
v_val_2012_ = lean_ctor_get(v_a_2004_, 0);
lean_inc(v_val_2012_);
lean_dec_ref_known(v_a_2004_, 1);
v___x_2013_ = l_Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0(v_val_2012_, v_a_1994_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_);
return v___x_2013_;
}
}
}
else
{
lean_object* v_a_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2021_; 
lean_dec(v_codeActionPrefix_x3f_1991_);
lean_dec(v_origSpan_x3f_1989_);
lean_dec(v_ref_1987_);
v_a_2014_ = lean_ctor_get(v___x_2003_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2016_ = v___x_2003_;
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_a_2014_);
lean_dec(v___x_2003_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2019_; 
if (v_isShared_2017_ == 0)
{
v___x_2019_ = v___x_2016_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_a_2014_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addExactSuggestion___boxed(lean_object* v_ref_2022_, lean_object* v_e_2023_, lean_object* v_origSpan_x3f_2024_, lean_object* v_addSubgoalsMsg_2025_, lean_object* v_codeActionPrefix_x3f_2026_, lean_object* v_checkState_x3f_2027_, lean_object* v_tacticErrorAsInfo_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_){
_start:
{
uint8_t v_addSubgoalsMsg_boxed_2038_; uint8_t v_tacticErrorAsInfo_boxed_2039_; lean_object* v_res_2040_; 
v_addSubgoalsMsg_boxed_2038_ = lean_unbox(v_addSubgoalsMsg_2025_);
v_tacticErrorAsInfo_boxed_2039_ = lean_unbox(v_tacticErrorAsInfo_2028_);
v_res_2040_ = l_Lean_Meta_Tactic_TryThis_addExactSuggestion(v_ref_2022_, v_e_2023_, v_origSpan_x3f_2024_, v_addSubgoalsMsg_boxed_2038_, v_codeActionPrefix_x3f_2026_, v_checkState_x3f_2027_, v_tacticErrorAsInfo_boxed_2039_, v_a_2029_, v_a_2030_, v_a_2031_, v_a_2032_, v_a_2033_, v_a_2034_, v_a_2035_, v_a_2036_);
lean_dec(v_a_2036_);
lean_dec_ref(v_a_2035_);
lean_dec(v_a_2034_);
lean_dec_ref(v_a_2033_);
lean_dec(v_a_2032_);
lean_dec_ref(v_a_2031_);
lean_dec(v_a_2030_);
lean_dec_ref(v_a_2029_);
return v_res_2040_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0_spec__1(lean_object* v_ref_2041_, lean_object* v_msgData_2042_, uint8_t v_severity_2043_, uint8_t v_isSilent_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v___x_2054_; 
v___x_2054_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0_spec__1___redArg(v_ref_2041_, v_msgData_2042_, v_severity_2043_, v_isSilent_2044_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
return v___x_2054_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_2055_, lean_object* v_msgData_2056_, lean_object* v_severity_2057_, lean_object* v_isSilent_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_){
_start:
{
uint8_t v_severity_boxed_2068_; uint8_t v_isSilent_boxed_2069_; lean_object* v_res_2070_; 
v_severity_boxed_2068_ = lean_unbox(v_severity_2057_);
v_isSilent_boxed_2069_ = lean_unbox(v_isSilent_2058_);
v_res_2070_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0_spec__0_spec__1(v_ref_2055_, v_msgData_2056_, v_severity_boxed_2068_, v_isSilent_boxed_2069_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_);
lean_dec(v___y_2066_);
lean_dec_ref(v___y_2065_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
lean_dec(v___y_2062_);
lean_dec_ref(v___y_2061_);
lean_dec(v___y_2060_);
lean_dec_ref(v___y_2059_);
lean_dec(v_ref_2055_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__1___redArg(uint8_t v_tacticErrorAsInfo_2071_, lean_object* v_as_2072_, size_t v_sz_2073_, size_t v_i_2074_, lean_object* v_b_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
lean_object* v_a_2082_; uint8_t v___x_2086_; 
v___x_2086_ = lean_usize_dec_lt(v_i_2074_, v_sz_2073_);
if (v___x_2086_ == 0)
{
lean_object* v___x_2087_; 
v___x_2087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2087_, 0, v_b_2075_);
return v___x_2087_;
}
else
{
lean_object* v_fst_2088_; lean_object* v_snd_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2114_; 
v_fst_2088_ = lean_ctor_get(v_b_2075_, 0);
v_snd_2089_ = lean_ctor_get(v_b_2075_, 1);
v_isSharedCheck_2114_ = !lean_is_exclusive(v_b_2075_);
if (v_isSharedCheck_2114_ == 0)
{
v___x_2091_ = v_b_2075_;
v_isShared_2092_ = v_isSharedCheck_2114_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_snd_2089_);
lean_inc(v_fst_2088_);
lean_dec(v_b_2075_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2114_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v_a_2093_; 
v_a_2093_ = lean_array_uget_borrowed(v_as_2072_, v_i_2074_);
if (lean_obj_tag(v_a_2093_) == 0)
{
lean_object* v_val_2094_; lean_object* v___x_2095_; lean_object* v___x_2097_; 
v_val_2094_ = lean_ctor_get(v_a_2093_, 0);
lean_inc(v_val_2094_);
v___x_2095_ = lean_array_push(v_fst_2088_, v_val_2094_);
if (v_isShared_2092_ == 0)
{
lean_ctor_set(v___x_2091_, 0, v___x_2095_);
v___x_2097_ = v___x_2091_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v___x_2095_);
lean_ctor_set(v_reuseFailAlloc_2098_, 1, v_snd_2089_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
v_a_2082_ = v___x_2097_;
goto v___jp_2081_;
}
}
else
{
lean_object* v_val_2099_; 
v_val_2099_ = lean_ctor_get(v_a_2093_, 0);
if (v_tacticErrorAsInfo_2071_ == 0)
{
lean_object* v___x_2105_; 
lean_inc(v_val_2099_);
v___x_2105_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_evalTacticWithState_spec__2___redArg(v_val_2099_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_);
if (lean_obj_tag(v___x_2105_) == 0)
{
lean_dec_ref_known(v___x_2105_, 1);
goto v___jp_2100_;
}
else
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
lean_del_object(v___x_2091_);
lean_dec(v_snd_2089_);
lean_dec(v_fst_2088_);
v_a_2106_ = lean_ctor_get(v___x_2105_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2105_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2108_ = v___x_2105_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2105_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2111_; 
if (v_isShared_2109_ == 0)
{
v___x_2111_ = v___x_2108_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2106_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
else
{
goto v___jp_2100_;
}
v___jp_2100_:
{
lean_object* v___x_2101_; lean_object* v___x_2103_; 
lean_inc(v_val_2099_);
v___x_2101_ = lean_array_push(v_snd_2089_, v_val_2099_);
if (v_isShared_2092_ == 0)
{
lean_ctor_set(v___x_2091_, 1, v___x_2101_);
v___x_2103_ = v___x_2091_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v_fst_2088_);
lean_ctor_set(v_reuseFailAlloc_2104_, 1, v___x_2101_);
v___x_2103_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
v_a_2082_ = v___x_2103_;
goto v___jp_2081_;
}
}
}
}
}
v___jp_2081_:
{
size_t v___x_2083_; size_t v___x_2084_; 
v___x_2083_ = ((size_t)1ULL);
v___x_2084_ = lean_usize_add(v_i_2074_, v___x_2083_);
v_i_2074_ = v___x_2084_;
v_b_2075_ = v_a_2082_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__1___redArg___boxed(lean_object* v_tacticErrorAsInfo_2115_, lean_object* v_as_2116_, lean_object* v_sz_2117_, lean_object* v_i_2118_, lean_object* v_b_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_){
_start:
{
uint8_t v_tacticErrorAsInfo_boxed_2125_; size_t v_sz_boxed_2126_; size_t v_i_boxed_2127_; lean_object* v_res_2128_; 
v_tacticErrorAsInfo_boxed_2125_ = lean_unbox(v_tacticErrorAsInfo_2115_);
v_sz_boxed_2126_ = lean_unbox_usize(v_sz_2117_);
lean_dec(v_sz_2117_);
v_i_boxed_2127_ = lean_unbox_usize(v_i_2118_);
lean_dec(v_i_2118_);
v_res_2128_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__1___redArg(v_tacticErrorAsInfo_boxed_2125_, v_as_2116_, v_sz_boxed_2126_, v_i_boxed_2127_, v_b_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_);
lean_dec(v___y_2123_);
lean_dec_ref(v___y_2122_);
lean_dec(v___y_2121_);
lean_dec_ref(v___y_2120_);
lean_dec_ref(v_as_2116_);
return v_res_2128_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__0(uint8_t v_addSubgoalsMsg_2129_, lean_object* v_checkState_x3f_2130_, size_t v_sz_2131_, size_t v_i_2132_, lean_object* v_bs_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_){
_start:
{
uint8_t v___x_2143_; 
v___x_2143_ = lean_usize_dec_lt(v_i_2132_, v_sz_2131_);
if (v___x_2143_ == 0)
{
lean_object* v___x_2144_; 
lean_dec(v_checkState_x3f_2130_);
v___x_2144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2144_, 0, v_bs_2133_);
return v___x_2144_;
}
else
{
lean_object* v_v_2145_; lean_object* v___x_2146_; lean_object* v_bs_x27_2147_; lean_object* v___x_2148_; 
v_v_2145_ = lean_array_uget(v_bs_2133_, v_i_2132_);
v___x_2146_ = lean_unsigned_to_nat(0u);
v_bs_x27_2147_ = lean_array_uset(v_bs_2133_, v_i_2132_, v___x_2146_);
lean_inc(v_checkState_x3f_2130_);
v___x_2148_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore(v_addSubgoalsMsg_2129_, v_checkState_x3f_2130_, v_v_2145_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_, v___y_2141_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2149_; size_t v___x_2150_; size_t v___x_2151_; lean_object* v___x_2152_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
lean_inc(v_a_2149_);
lean_dec_ref_known(v___x_2148_, 1);
v___x_2150_ = ((size_t)1ULL);
v___x_2151_ = lean_usize_add(v_i_2132_, v___x_2150_);
v___x_2152_ = lean_array_uset(v_bs_x27_2147_, v_i_2132_, v_a_2149_);
v_i_2132_ = v___x_2151_;
v_bs_2133_ = v___x_2152_;
goto _start;
}
else
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
lean_dec_ref(v_bs_x27_2147_);
lean_dec(v_checkState_x3f_2130_);
v_a_2154_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2156_ = v___x_2148_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2148_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2157_ == 0)
{
v___x_2159_ = v___x_2156_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_a_2154_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
return v___x_2159_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__0___boxed(lean_object* v_addSubgoalsMsg_2162_, lean_object* v_checkState_x3f_2163_, lean_object* v_sz_2164_, lean_object* v_i_2165_, lean_object* v_bs_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_){
_start:
{
uint8_t v_addSubgoalsMsg_boxed_2176_; size_t v_sz_boxed_2177_; size_t v_i_boxed_2178_; lean_object* v_res_2179_; 
v_addSubgoalsMsg_boxed_2176_ = lean_unbox(v_addSubgoalsMsg_2162_);
v_sz_boxed_2177_ = lean_unbox_usize(v_sz_2164_);
lean_dec(v_sz_2164_);
v_i_boxed_2178_ = lean_unbox_usize(v_i_2165_);
lean_dec(v_i_2165_);
v_res_2179_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__0(v_addSubgoalsMsg_boxed_2176_, v_checkState_x3f_2163_, v_sz_boxed_2177_, v_i_boxed_2178_, v_bs_2166_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_);
lean_dec(v___y_2174_);
lean_dec_ref(v___y_2173_);
lean_dec(v___y_2172_);
lean_dec_ref(v___y_2171_);
lean_dec(v___y_2170_);
lean_dec_ref(v___y_2169_);
lean_dec(v___y_2168_);
lean_dec_ref(v___y_2167_);
return v_res_2179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__2(lean_object* v_as_2180_, size_t v_sz_2181_, size_t v_i_2182_, lean_object* v_b_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_){
_start:
{
uint8_t v___x_2193_; 
v___x_2193_ = lean_usize_dec_lt(v_i_2182_, v_sz_2181_);
if (v___x_2193_ == 0)
{
lean_object* v___x_2194_; 
v___x_2194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2194_, 0, v_b_2183_);
return v___x_2194_;
}
else
{
lean_object* v___x_2195_; lean_object* v_a_2196_; lean_object* v___x_2197_; 
v___x_2195_ = lean_box(0);
v_a_2196_ = lean_array_uget_borrowed(v_as_2180_, v_i_2182_);
lean_inc(v_a_2196_);
v___x_2197_ = l_Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0(v_a_2196_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_);
if (lean_obj_tag(v___x_2197_) == 0)
{
size_t v___x_2198_; size_t v___x_2199_; 
lean_dec_ref_known(v___x_2197_, 1);
v___x_2198_ = ((size_t)1ULL);
v___x_2199_ = lean_usize_add(v_i_2182_, v___x_2198_);
v_i_2182_ = v___x_2199_;
v_b_2183_ = v___x_2195_;
goto _start;
}
else
{
return v___x_2197_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__2___boxed(lean_object* v_as_2201_, lean_object* v_sz_2202_, lean_object* v_i_2203_, lean_object* v_b_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_){
_start:
{
size_t v_sz_boxed_2214_; size_t v_i_boxed_2215_; lean_object* v_res_2216_; 
v_sz_boxed_2214_ = lean_unbox_usize(v_sz_2202_);
lean_dec(v_sz_2202_);
v_i_boxed_2215_ = lean_unbox_usize(v_i_2203_);
lean_dec(v_i_2203_);
v_res_2216_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__2(v_as_2201_, v_sz_boxed_2214_, v_i_boxed_2215_, v_b_2204_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_);
lean_dec(v___y_2212_);
lean_dec_ref(v___y_2211_);
lean_dec(v___y_2210_);
lean_dec_ref(v___y_2209_);
lean_dec(v___y_2208_);
lean_dec_ref(v___y_2207_);
lean_dec(v___y_2206_);
lean_dec_ref(v___y_2205_);
lean_dec_ref(v_as_2201_);
return v_res_2216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addExactSuggestions(lean_object* v_ref_2222_, lean_object* v_es_2223_, lean_object* v_origSpan_x3f_2224_, uint8_t v_addSubgoalsMsg_2225_, lean_object* v_codeActionPrefix_x3f_2226_, lean_object* v_checkState_x3f_2227_, uint8_t v_tacticErrorAsInfo_2228_, lean_object* v_a_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_){
_start:
{
size_t v_sz_2238_; size_t v___x_2239_; lean_object* v___x_2240_; 
v_sz_2238_ = lean_array_size(v_es_2223_);
v___x_2239_ = ((size_t)0ULL);
v___x_2240_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__0(v_addSubgoalsMsg_2225_, v_checkState_x3f_2227_, v_sz_2238_, v___x_2239_, v_es_2223_, v_a_2229_, v_a_2230_, v_a_2231_, v_a_2232_, v_a_2233_, v_a_2234_, v_a_2235_, v_a_2236_);
if (lean_obj_tag(v___x_2240_) == 0)
{
lean_object* v_a_2241_; lean_object* v___x_2242_; size_t v_sz_2243_; lean_object* v___x_2244_; 
v_a_2241_ = lean_ctor_get(v___x_2240_, 0);
lean_inc(v_a_2241_);
lean_dec_ref_known(v___x_2240_, 1);
v___x_2242_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addExactSuggestions___closed__1));
v_sz_2243_ = lean_array_size(v_a_2241_);
v___x_2244_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__1___redArg(v_tacticErrorAsInfo_2228_, v_a_2241_, v_sz_2243_, v___x_2239_, v___x_2242_, v_a_2233_, v_a_2234_, v_a_2235_, v_a_2236_);
lean_dec(v_a_2241_);
if (lean_obj_tag(v___x_2244_) == 0)
{
lean_object* v_a_2245_; lean_object* v_fst_2246_; lean_object* v_snd_2247_; lean_object* v___x_2248_; uint8_t v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; 
v_a_2245_ = lean_ctor_get(v___x_2244_, 0);
lean_inc(v_a_2245_);
lean_dec_ref_known(v___x_2244_, 1);
v_fst_2246_ = lean_ctor_get(v_a_2245_, 0);
lean_inc(v_fst_2246_);
v_snd_2247_ = lean_ctor_get(v_a_2245_, 1);
lean_inc(v_snd_2247_);
lean_dec(v_a_2245_);
v___x_2248_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addExactSuggestions___closed__2));
v___x_2249_ = 4;
v___x_2250_ = l_Lean_MessageData_nil;
v___x_2251_ = l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg(v_ref_2222_, v_fst_2246_, v_origSpan_x3f_2224_, v___x_2248_, v_codeActionPrefix_x3f_2226_, v___x_2249_, v___x_2250_, v_a_2235_, v_a_2236_);
if (lean_obj_tag(v___x_2251_) == 0)
{
lean_object* v___x_2252_; size_t v_sz_2253_; lean_object* v___x_2254_; 
lean_dec_ref_known(v___x_2251_, 1);
v___x_2252_ = lean_box(0);
v_sz_2253_ = lean_array_size(v_snd_2247_);
v___x_2254_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__2(v_snd_2247_, v_sz_2253_, v___x_2239_, v___x_2252_, v_a_2229_, v_a_2230_, v_a_2231_, v_a_2232_, v_a_2233_, v_a_2234_, v_a_2235_, v_a_2236_);
lean_dec(v_snd_2247_);
if (lean_obj_tag(v___x_2254_) == 0)
{
lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2261_; 
v_isSharedCheck_2261_ = !lean_is_exclusive(v___x_2254_);
if (v_isSharedCheck_2261_ == 0)
{
lean_object* v_unused_2262_; 
v_unused_2262_ = lean_ctor_get(v___x_2254_, 0);
lean_dec(v_unused_2262_);
v___x_2256_ = v___x_2254_;
v_isShared_2257_ = v_isSharedCheck_2261_;
goto v_resetjp_2255_;
}
else
{
lean_dec(v___x_2254_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2261_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v___x_2259_; 
if (v_isShared_2257_ == 0)
{
lean_ctor_set(v___x_2256_, 0, v___x_2252_);
v___x_2259_ = v___x_2256_;
goto v_reusejp_2258_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v___x_2252_);
v___x_2259_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2258_;
}
v_reusejp_2258_:
{
return v___x_2259_;
}
}
}
else
{
return v___x_2254_;
}
}
else
{
lean_dec(v_snd_2247_);
return v___x_2251_;
}
}
else
{
lean_object* v_a_2263_; lean_object* v___x_2265_; uint8_t v_isShared_2266_; uint8_t v_isSharedCheck_2270_; 
lean_dec(v_codeActionPrefix_x3f_2226_);
lean_dec(v_origSpan_x3f_2224_);
lean_dec(v_ref_2222_);
v_a_2263_ = lean_ctor_get(v___x_2244_, 0);
v_isSharedCheck_2270_ = !lean_is_exclusive(v___x_2244_);
if (v_isSharedCheck_2270_ == 0)
{
v___x_2265_ = v___x_2244_;
v_isShared_2266_ = v_isSharedCheck_2270_;
goto v_resetjp_2264_;
}
else
{
lean_inc(v_a_2263_);
lean_dec(v___x_2244_);
v___x_2265_ = lean_box(0);
v_isShared_2266_ = v_isSharedCheck_2270_;
goto v_resetjp_2264_;
}
v_resetjp_2264_:
{
lean_object* v___x_2268_; 
if (v_isShared_2266_ == 0)
{
v___x_2268_ = v___x_2265_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v_a_2263_);
v___x_2268_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
return v___x_2268_;
}
}
}
}
else
{
lean_object* v_a_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2278_; 
lean_dec(v_codeActionPrefix_x3f_2226_);
lean_dec(v_origSpan_x3f_2224_);
lean_dec(v_ref_2222_);
v_a_2271_ = lean_ctor_get(v___x_2240_, 0);
v_isSharedCheck_2278_ = !lean_is_exclusive(v___x_2240_);
if (v_isSharedCheck_2278_ == 0)
{
v___x_2273_ = v___x_2240_;
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_a_2271_);
lean_dec(v___x_2240_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___x_2276_; 
if (v_isShared_2274_ == 0)
{
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
return v___x_2276_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addExactSuggestions___boxed(lean_object* v_ref_2279_, lean_object* v_es_2280_, lean_object* v_origSpan_x3f_2281_, lean_object* v_addSubgoalsMsg_2282_, lean_object* v_codeActionPrefix_x3f_2283_, lean_object* v_checkState_x3f_2284_, lean_object* v_tacticErrorAsInfo_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_, lean_object* v_a_2294_){
_start:
{
uint8_t v_addSubgoalsMsg_boxed_2295_; uint8_t v_tacticErrorAsInfo_boxed_2296_; lean_object* v_res_2297_; 
v_addSubgoalsMsg_boxed_2295_ = lean_unbox(v_addSubgoalsMsg_2282_);
v_tacticErrorAsInfo_boxed_2296_ = lean_unbox(v_tacticErrorAsInfo_2285_);
v_res_2297_ = l_Lean_Meta_Tactic_TryThis_addExactSuggestions(v_ref_2279_, v_es_2280_, v_origSpan_x3f_2281_, v_addSubgoalsMsg_boxed_2295_, v_codeActionPrefix_x3f_2283_, v_checkState_x3f_2284_, v_tacticErrorAsInfo_boxed_2296_, v_a_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_, v_a_2292_, v_a_2293_);
lean_dec(v_a_2293_);
lean_dec_ref(v_a_2292_);
lean_dec(v_a_2291_);
lean_dec_ref(v_a_2290_);
lean_dec(v_a_2289_);
lean_dec_ref(v_a_2288_);
lean_dec(v_a_2287_);
lean_dec_ref(v_a_2286_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__1(uint8_t v_tacticErrorAsInfo_2298_, lean_object* v_as_2299_, size_t v_sz_2300_, size_t v_i_2301_, lean_object* v_b_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_){
_start:
{
lean_object* v___x_2312_; 
v___x_2312_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__1___redArg(v_tacticErrorAsInfo_2298_, v_as_2299_, v_sz_2300_, v_i_2301_, v_b_2302_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_);
return v___x_2312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__1___boxed(lean_object* v_tacticErrorAsInfo_2313_, lean_object* v_as_2314_, lean_object* v_sz_2315_, lean_object* v_i_2316_, lean_object* v_b_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_){
_start:
{
uint8_t v_tacticErrorAsInfo_boxed_2327_; size_t v_sz_boxed_2328_; size_t v_i_boxed_2329_; lean_object* v_res_2330_; 
v_tacticErrorAsInfo_boxed_2327_ = lean_unbox(v_tacticErrorAsInfo_2313_);
v_sz_boxed_2328_ = lean_unbox_usize(v_sz_2315_);
lean_dec(v_sz_2315_);
v_i_boxed_2329_ = lean_unbox_usize(v_i_2316_);
lean_dec(v_i_2316_);
v_res_2330_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_TryThis_addExactSuggestions_spec__1(v_tacticErrorAsInfo_boxed_2327_, v_as_2314_, v_sz_boxed_2328_, v_i_boxed_2329_, v_b_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_);
lean_dec(v___y_2325_);
lean_dec_ref(v___y_2324_);
lean_dec(v___y_2323_);
lean_dec_ref(v___y_2322_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
lean_dec_ref(v_as_2314_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addTermSuggestion(lean_object* v_ref_2331_, lean_object* v_e_2332_, lean_object* v_origSpan_x3f_2333_, lean_object* v_header_2334_, lean_object* v_codeActionPrefix_x3f_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_){
_start:
{
lean_object* v___x_2341_; 
v___x_2341_ = l_Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion(v_e_2332_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2341_) == 0)
{
lean_object* v_a_2342_; uint8_t v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; 
v_a_2342_ = lean_ctor_get(v___x_2341_, 0);
lean_inc(v_a_2342_);
lean_dec_ref_known(v___x_2341_, 1);
v___x_2343_ = 4;
v___x_2344_ = l_Lean_MessageData_nil;
v___x_2345_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_ref_2331_, v_a_2342_, v_origSpan_x3f_2333_, v_header_2334_, v_codeActionPrefix_x3f_2335_, v___x_2343_, v___x_2344_, v_a_2338_, v_a_2339_);
return v___x_2345_;
}
else
{
lean_object* v_a_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2353_; 
lean_dec(v_codeActionPrefix_x3f_2335_);
lean_dec_ref(v_header_2334_);
lean_dec(v_origSpan_x3f_2333_);
lean_dec(v_ref_2331_);
v_a_2346_ = lean_ctor_get(v___x_2341_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2348_ = v___x_2341_;
v_isShared_2349_ = v_isSharedCheck_2353_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_a_2346_);
lean_dec(v___x_2341_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2353_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v___x_2351_; 
if (v_isShared_2349_ == 0)
{
v___x_2351_ = v___x_2348_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v_a_2346_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addTermSuggestion___boxed(lean_object* v_ref_2354_, lean_object* v_e_2355_, lean_object* v_origSpan_x3f_2356_, lean_object* v_header_2357_, lean_object* v_codeActionPrefix_x3f_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l_Lean_Meta_Tactic_TryThis_addTermSuggestion(v_ref_2354_, v_e_2355_, v_origSpan_x3f_2356_, v_header_2357_, v_codeActionPrefix_x3f_2358_, v_a_2359_, v_a_2360_, v_a_2361_, v_a_2362_);
lean_dec(v_a_2362_);
lean_dec_ref(v_a_2361_);
lean_dec(v_a_2360_);
lean_dec_ref(v_a_2359_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addTermSuggestions_spec__0(size_t v_sz_2365_, size_t v_i_2366_, lean_object* v_bs_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_){
_start:
{
uint8_t v___x_2373_; 
v___x_2373_ = lean_usize_dec_lt(v_i_2366_, v_sz_2365_);
if (v___x_2373_ == 0)
{
lean_object* v___x_2374_; 
v___x_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2374_, 0, v_bs_2367_);
return v___x_2374_;
}
else
{
lean_object* v_v_2375_; lean_object* v___x_2376_; lean_object* v_bs_x27_2377_; lean_object* v___x_2378_; 
v_v_2375_ = lean_array_uget(v_bs_2367_, v_i_2366_);
v___x_2376_ = lean_unsigned_to_nat(0u);
v_bs_x27_2377_ = lean_array_uset(v_bs_2367_, v_i_2366_, v___x_2376_);
v___x_2378_ = l_Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion(v_v_2375_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_);
if (lean_obj_tag(v___x_2378_) == 0)
{
lean_object* v_a_2379_; size_t v___x_2380_; size_t v___x_2381_; lean_object* v___x_2382_; 
v_a_2379_ = lean_ctor_get(v___x_2378_, 0);
lean_inc(v_a_2379_);
lean_dec_ref_known(v___x_2378_, 1);
v___x_2380_ = ((size_t)1ULL);
v___x_2381_ = lean_usize_add(v_i_2366_, v___x_2380_);
v___x_2382_ = lean_array_uset(v_bs_x27_2377_, v_i_2366_, v_a_2379_);
v_i_2366_ = v___x_2381_;
v_bs_2367_ = v___x_2382_;
goto _start;
}
else
{
lean_object* v_a_2384_; lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2391_; 
lean_dec_ref(v_bs_x27_2377_);
v_a_2384_ = lean_ctor_get(v___x_2378_, 0);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2378_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2386_ = v___x_2378_;
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
else
{
lean_inc(v_a_2384_);
lean_dec(v___x_2378_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2389_; 
if (v_isShared_2387_ == 0)
{
v___x_2389_ = v___x_2386_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v_a_2384_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
return v___x_2389_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addTermSuggestions_spec__0___boxed(lean_object* v_sz_2392_, lean_object* v_i_2393_, lean_object* v_bs_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_){
_start:
{
size_t v_sz_boxed_2400_; size_t v_i_boxed_2401_; lean_object* v_res_2402_; 
v_sz_boxed_2400_ = lean_unbox_usize(v_sz_2392_);
lean_dec(v_sz_2392_);
v_i_boxed_2401_ = lean_unbox_usize(v_i_2393_);
lean_dec(v_i_2393_);
v_res_2402_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addTermSuggestions_spec__0(v_sz_boxed_2400_, v_i_boxed_2401_, v_bs_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
return v_res_2402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addTermSuggestions(lean_object* v_ref_2403_, lean_object* v_es_2404_, lean_object* v_origSpan_x3f_2405_, lean_object* v_header_2406_, lean_object* v_codeActionPrefix_x3f_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_){
_start:
{
size_t v_sz_2413_; size_t v___x_2414_; lean_object* v___x_2415_; 
v_sz_2413_ = lean_array_size(v_es_2404_);
v___x_2414_ = ((size_t)0ULL);
v___x_2415_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addTermSuggestions_spec__0(v_sz_2413_, v___x_2414_, v_es_2404_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_);
if (lean_obj_tag(v___x_2415_) == 0)
{
lean_object* v_a_2416_; uint8_t v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; 
v_a_2416_ = lean_ctor_get(v___x_2415_, 0);
lean_inc(v_a_2416_);
lean_dec_ref_known(v___x_2415_, 1);
v___x_2417_ = 4;
v___x_2418_ = l_Lean_MessageData_nil;
v___x_2419_ = l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg(v_ref_2403_, v_a_2416_, v_origSpan_x3f_2405_, v_header_2406_, v_codeActionPrefix_x3f_2407_, v___x_2417_, v___x_2418_, v_a_2410_, v_a_2411_);
return v___x_2419_;
}
else
{
lean_object* v_a_2420_; lean_object* v___x_2422_; uint8_t v_isShared_2423_; uint8_t v_isSharedCheck_2427_; 
lean_dec(v_codeActionPrefix_x3f_2407_);
lean_dec_ref(v_header_2406_);
lean_dec(v_origSpan_x3f_2405_);
lean_dec(v_ref_2403_);
v_a_2420_ = lean_ctor_get(v___x_2415_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2415_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2422_ = v___x_2415_;
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
else
{
lean_inc(v_a_2420_);
lean_dec(v___x_2415_);
v___x_2422_ = lean_box(0);
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
v_resetjp_2421_:
{
lean_object* v___x_2425_; 
if (v_isShared_2423_ == 0)
{
v___x_2425_ = v___x_2422_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v_a_2420_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addTermSuggestions___boxed(lean_object* v_ref_2428_, lean_object* v_es_2429_, lean_object* v_origSpan_x3f_2430_, lean_object* v_header_2431_, lean_object* v_codeActionPrefix_x3f_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = l_Lean_Meta_Tactic_TryThis_addTermSuggestions(v_ref_2428_, v_es_2429_, v_origSpan_x3f_2430_, v_header_2431_, v_codeActionPrefix_x3f_2432_, v_a_2433_, v_a_2434_, v_a_2435_, v_a_2436_);
lean_dec(v_a_2436_);
lean_dec_ref(v_a_2435_);
lean_dec(v_a_2434_);
lean_dec_ref(v_a_2433_);
return v_res_2438_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6(void){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = l_Array_mkArray0___redArg();
return v___x_2453_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__15(void){
_start:
{
lean_object* v___x_2474_; lean_object* v___x_2475_; 
v___x_2474_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__14));
v___x_2475_ = l_Lean_stringToMessageData(v___x_2474_);
return v___x_2475_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17(void){
_start:
{
lean_object* v___x_2477_; lean_object* v___x_2478_; 
v___x_2477_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__16));
v___x_2478_ = l_Lean_stringToMessageData(v___x_2477_);
return v___x_2478_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__22(void){
_start:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2487_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__21));
v___x_2488_ = l_Lean_stringToMessageData(v___x_2487_);
return v___x_2488_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__30(void){
_start:
{
lean_object* v___x_2502_; lean_object* v___x_2503_; 
v___x_2502_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___closed__0));
v___x_2503_ = l_String_toRawSubstring_x27(v___x_2502_);
return v___x_2503_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__81(void){
_start:
{
lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2641_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__80));
v___x_2642_ = l_Lean_stringToMessageData(v___x_2641_);
return v___x_2642_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__83(void){
_start:
{
lean_object* v___x_2644_; lean_object* v___x_2645_; 
v___x_2644_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__82));
v___x_2645_ = l_Lean_stringToMessageData(v___x_2644_);
return v___x_2645_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__85(void){
_start:
{
lean_object* v___x_2647_; lean_object* v___x_2648_; 
v___x_2647_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__84));
v___x_2648_ = l_Lean_stringToMessageData(v___x_2647_);
return v___x_2648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0(lean_object* v_e_2649_, lean_object* v_t_x3f_2650_, uint8_t v_a_2651_, lean_object* v_h_x3f_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_){
_start:
{
lean_object* v_fst_2659_; lean_object* v_snd_2660_; lean_object* v___x_2671_; 
lean_inc_ref(v_e_2649_);
v___x_2671_ = l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax(v_e_2649_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
if (lean_obj_tag(v___x_2671_) == 0)
{
lean_object* v_a_2672_; lean_object* v___y_2674_; 
v_a_2672_ = lean_ctor_get(v___x_2671_, 0);
lean_inc(v_a_2672_);
lean_dec_ref_known(v___x_2671_, 1);
if (lean_obj_tag(v_t_x3f_2650_) == 1)
{
lean_object* v_val_2702_; lean_object* v___x_2703_; 
v_val_2702_ = lean_ctor_get(v_t_x3f_2650_, 0);
lean_inc_n(v_val_2702_, 2);
lean_dec_ref_known(v_t_x3f_2650_, 1);
v___x_2703_ = l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax(v_val_2702_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
if (lean_obj_tag(v___x_2703_) == 0)
{
lean_object* v_a_2704_; lean_object* v___y_2706_; 
v_a_2704_ = lean_ctor_get(v___x_2703_, 0);
lean_inc(v_a_2704_);
lean_dec_ref_known(v___x_2703_, 1);
if (v_a_2651_ == 0)
{
if (lean_obj_tag(v_h_x3f_2652_) == 0)
{
lean_object* v___x_2743_; 
v___x_2743_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__24));
v___y_2706_ = v___x_2743_;
goto v___jp_2705_;
}
else
{
lean_object* v_val_2744_; 
v_val_2744_ = lean_ctor_get(v_h_x3f_2652_, 0);
lean_inc(v_val_2744_);
lean_dec_ref_known(v_h_x3f_2652_, 1);
v___y_2706_ = v_val_2744_;
goto v___jp_2705_;
}
}
else
{
if (lean_obj_tag(v_h_x3f_2652_) == 0)
{
lean_object* v_toCold_2745_; lean_object* v_ref_2746_; lean_object* v_quotContext_2747_; lean_object* v_currMacroScope_2748_; uint8_t v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
v_toCold_2745_ = lean_ctor_get(v___y_2655_, 0);
v_ref_2746_ = lean_ctor_get(v___y_2655_, 2);
v_quotContext_2747_ = lean_ctor_get(v_toCold_2745_, 8);
v_currMacroScope_2748_ = lean_ctor_get(v_toCold_2745_, 9);
v___x_2749_ = 0;
v___x_2750_ = l_Lean_SourceInfo_fromRef(v_ref_2746_, v___x_2749_);
v___x_2751_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__26));
v___x_2752_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__27));
lean_inc_n(v___x_2750_, 12);
v___x_2753_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2750_);
lean_ctor_set(v___x_2753_, 1, v___x_2752_);
v___x_2754_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__5));
v___x_2755_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__9));
v___x_2756_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6);
v___x_2757_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2750_);
lean_ctor_set(v___x_2757_, 1, v___x_2755_);
lean_ctor_set(v___x_2757_, 2, v___x_2756_);
lean_inc_ref(v___x_2757_);
v___x_2758_ = l_Lean_Syntax_node1(v___x_2750_, v___x_2754_, v___x_2757_);
v___x_2759_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__8));
v___x_2760_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__10));
v___x_2761_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__12));
v___x_2762_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__29));
v___x_2763_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__30, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__30_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__30);
v___x_2764_ = lean_box(0);
lean_inc(v_currMacroScope_2748_);
lean_inc(v_quotContext_2747_);
v___x_2765_ = l_Lean_addMacroScope(v_quotContext_2747_, v___x_2764_, v_currMacroScope_2748_);
v___x_2766_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__79));
v___x_2767_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2750_);
lean_ctor_set(v___x_2767_, 1, v___x_2763_);
lean_ctor_set(v___x_2767_, 2, v___x_2765_);
lean_ctor_set(v___x_2767_, 3, v___x_2766_);
v___x_2768_ = l_Lean_Syntax_node1(v___x_2750_, v___x_2762_, v___x_2767_);
v___x_2769_ = l_Lean_Syntax_node1(v___x_2750_, v___x_2761_, v___x_2768_);
v___x_2770_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__19));
v___x_2771_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__20));
v___x_2772_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2750_);
lean_ctor_set(v___x_2772_, 1, v___x_2771_);
v___x_2773_ = l_Lean_Syntax_node2(v___x_2750_, v___x_2770_, v___x_2772_, v_a_2704_);
v___x_2774_ = l_Lean_Syntax_node1(v___x_2750_, v___x_2755_, v___x_2773_);
v___x_2775_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__13));
v___x_2776_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2776_, 0, v___x_2750_);
lean_ctor_set(v___x_2776_, 1, v___x_2775_);
v___x_2777_ = l_Lean_Syntax_node5(v___x_2750_, v___x_2760_, v___x_2769_, v___x_2757_, v___x_2774_, v___x_2776_, v_a_2672_);
v___x_2778_ = l_Lean_Syntax_node1(v___x_2750_, v___x_2759_, v___x_2777_);
v___x_2779_ = l_Lean_Syntax_node3(v___x_2750_, v___x_2751_, v___x_2753_, v___x_2758_, v___x_2778_);
v___x_2780_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__81, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__81_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__81);
v___x_2781_ = l_Lean_MessageData_ofExpr(v_val_2702_);
v___x_2782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2780_);
lean_ctor_set(v___x_2782_, 1, v___x_2781_);
v___x_2783_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17);
v___x_2784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2782_);
lean_ctor_set(v___x_2784_, 1, v___x_2783_);
v___x_2785_ = l_Lean_MessageData_ofExpr(v_e_2649_);
v___x_2786_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2784_);
lean_ctor_set(v___x_2786_, 1, v___x_2785_);
v_fst_2659_ = v___x_2779_;
v_snd_2660_ = v___x_2786_;
goto v___jp_2658_;
}
else
{
lean_object* v_val_2787_; lean_object* v_ref_2788_; uint8_t v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; 
v_val_2787_ = lean_ctor_get(v_h_x3f_2652_, 0);
lean_inc_n(v_val_2787_, 2);
lean_dec_ref_known(v_h_x3f_2652_, 1);
v_ref_2788_ = lean_ctor_get(v___y_2655_, 2);
v___x_2789_ = 0;
v___x_2790_ = l_Lean_SourceInfo_fromRef(v_ref_2788_, v___x_2789_);
v___x_2791_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__26));
v___x_2792_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__27));
lean_inc_n(v___x_2790_, 10);
v___x_2793_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2793_, 0, v___x_2790_);
lean_ctor_set(v___x_2793_, 1, v___x_2792_);
v___x_2794_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__5));
v___x_2795_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__9));
v___x_2796_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6);
v___x_2797_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2797_, 0, v___x_2790_);
lean_ctor_set(v___x_2797_, 1, v___x_2795_);
lean_ctor_set(v___x_2797_, 2, v___x_2796_);
lean_inc_ref(v___x_2797_);
v___x_2798_ = l_Lean_Syntax_node1(v___x_2790_, v___x_2794_, v___x_2797_);
v___x_2799_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__8));
v___x_2800_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__10));
v___x_2801_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__12));
v___x_2802_ = l_Lean_mkIdent(v_val_2787_);
v___x_2803_ = l_Lean_Syntax_node1(v___x_2790_, v___x_2801_, v___x_2802_);
v___x_2804_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__19));
v___x_2805_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__20));
v___x_2806_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2790_);
lean_ctor_set(v___x_2806_, 1, v___x_2805_);
v___x_2807_ = l_Lean_Syntax_node2(v___x_2790_, v___x_2804_, v___x_2806_, v_a_2704_);
v___x_2808_ = l_Lean_Syntax_node1(v___x_2790_, v___x_2795_, v___x_2807_);
v___x_2809_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__13));
v___x_2810_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2810_, 0, v___x_2790_);
lean_ctor_set(v___x_2810_, 1, v___x_2809_);
v___x_2811_ = l_Lean_Syntax_node5(v___x_2790_, v___x_2800_, v___x_2803_, v___x_2797_, v___x_2808_, v___x_2810_, v_a_2672_);
v___x_2812_ = l_Lean_Syntax_node1(v___x_2790_, v___x_2799_, v___x_2811_);
v___x_2813_ = l_Lean_Syntax_node3(v___x_2790_, v___x_2791_, v___x_2793_, v___x_2798_, v___x_2812_);
v___x_2814_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__83, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__83_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__83);
v___x_2815_ = l_Lean_MessageData_ofName(v_val_2787_);
v___x_2816_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2816_, 0, v___x_2814_);
lean_ctor_set(v___x_2816_, 1, v___x_2815_);
v___x_2817_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__22, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__22_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__22);
v___x_2818_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2818_, 0, v___x_2816_);
lean_ctor_set(v___x_2818_, 1, v___x_2817_);
v___x_2819_ = l_Lean_MessageData_ofExpr(v_val_2702_);
v___x_2820_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2820_, 0, v___x_2818_);
lean_ctor_set(v___x_2820_, 1, v___x_2819_);
v___x_2821_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17);
v___x_2822_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2822_, 0, v___x_2820_);
lean_ctor_set(v___x_2822_, 1, v___x_2821_);
v___x_2823_ = l_Lean_MessageData_ofExpr(v_e_2649_);
v___x_2824_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2824_, 0, v___x_2822_);
lean_ctor_set(v___x_2824_, 1, v___x_2823_);
v_fst_2659_ = v___x_2813_;
v_snd_2660_ = v___x_2824_;
goto v___jp_2658_;
}
}
v___jp_2705_:
{
lean_object* v_ref_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
v_ref_2707_ = lean_ctor_get(v___y_2655_, 2);
v___x_2708_ = l_Lean_SourceInfo_fromRef(v_ref_2707_, v_a_2651_);
v___x_2709_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__1));
v___x_2710_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__2));
lean_inc_n(v___x_2708_, 10);
v___x_2711_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2708_);
lean_ctor_set(v___x_2711_, 1, v___x_2710_);
v___x_2712_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__5));
v___x_2713_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__9));
v___x_2714_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6);
v___x_2715_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2715_, 0, v___x_2708_);
lean_ctor_set(v___x_2715_, 1, v___x_2713_);
lean_ctor_set(v___x_2715_, 2, v___x_2714_);
lean_inc_ref(v___x_2715_);
v___x_2716_ = l_Lean_Syntax_node1(v___x_2708_, v___x_2712_, v___x_2715_);
v___x_2717_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__8));
v___x_2718_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__10));
v___x_2719_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__12));
lean_inc(v___y_2706_);
v___x_2720_ = l_Lean_mkIdent(v___y_2706_);
v___x_2721_ = l_Lean_Syntax_node1(v___x_2708_, v___x_2719_, v___x_2720_);
v___x_2722_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__19));
v___x_2723_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__20));
v___x_2724_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2708_);
lean_ctor_set(v___x_2724_, 1, v___x_2723_);
v___x_2725_ = l_Lean_Syntax_node2(v___x_2708_, v___x_2722_, v___x_2724_, v_a_2704_);
v___x_2726_ = l_Lean_Syntax_node1(v___x_2708_, v___x_2713_, v___x_2725_);
v___x_2727_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__13));
v___x_2728_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2728_, 0, v___x_2708_);
lean_ctor_set(v___x_2728_, 1, v___x_2727_);
v___x_2729_ = l_Lean_Syntax_node5(v___x_2708_, v___x_2718_, v___x_2721_, v___x_2715_, v___x_2726_, v___x_2728_, v_a_2672_);
v___x_2730_ = l_Lean_Syntax_node1(v___x_2708_, v___x_2717_, v___x_2729_);
v___x_2731_ = l_Lean_Syntax_node3(v___x_2708_, v___x_2709_, v___x_2711_, v___x_2716_, v___x_2730_);
v___x_2732_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__15, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__15_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__15);
v___x_2733_ = l_Lean_MessageData_ofName(v___y_2706_);
v___x_2734_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2734_, 0, v___x_2732_);
lean_ctor_set(v___x_2734_, 1, v___x_2733_);
v___x_2735_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__22, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__22_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__22);
v___x_2736_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2736_, 0, v___x_2734_);
lean_ctor_set(v___x_2736_, 1, v___x_2735_);
v___x_2737_ = l_Lean_MessageData_ofExpr(v_val_2702_);
v___x_2738_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2738_, 0, v___x_2736_);
lean_ctor_set(v___x_2738_, 1, v___x_2737_);
v___x_2739_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17);
v___x_2740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2738_);
lean_ctor_set(v___x_2740_, 1, v___x_2739_);
v___x_2741_ = l_Lean_MessageData_ofExpr(v_e_2649_);
v___x_2742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2742_, 0, v___x_2740_);
lean_ctor_set(v___x_2742_, 1, v___x_2741_);
v_fst_2659_ = v___x_2731_;
v_snd_2660_ = v___x_2742_;
goto v___jp_2658_;
}
}
else
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_dec(v_val_2702_);
lean_dec(v_a_2672_);
lean_dec_ref(v___y_2655_);
lean_dec(v_h_x3f_2652_);
lean_dec_ref(v_e_2649_);
v_a_2825_ = lean_ctor_get(v___x_2703_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2703_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2703_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2703_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
if (v_isShared_2828_ == 0)
{
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_a_2825_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
}
else
{
lean_dec(v_t_x3f_2650_);
if (v_a_2651_ == 0)
{
if (lean_obj_tag(v_h_x3f_2652_) == 0)
{
lean_object* v___x_2833_; 
v___x_2833_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__24));
v___y_2674_ = v___x_2833_;
goto v___jp_2673_;
}
else
{
lean_object* v_val_2834_; 
v_val_2834_ = lean_ctor_get(v_h_x3f_2652_, 0);
lean_inc(v_val_2834_);
lean_dec_ref_known(v_h_x3f_2652_, 1);
v___y_2674_ = v_val_2834_;
goto v___jp_2673_;
}
}
else
{
if (lean_obj_tag(v_h_x3f_2652_) == 0)
{
lean_object* v_toCold_2835_; lean_object* v_ref_2836_; lean_object* v_quotContext_2837_; lean_object* v_currMacroScope_2838_; uint8_t v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; 
v_toCold_2835_ = lean_ctor_get(v___y_2655_, 0);
v_ref_2836_ = lean_ctor_get(v___y_2655_, 2);
v_quotContext_2837_ = lean_ctor_get(v_toCold_2835_, 8);
v_currMacroScope_2838_ = lean_ctor_get(v_toCold_2835_, 9);
v___x_2839_ = 0;
v___x_2840_ = l_Lean_SourceInfo_fromRef(v_ref_2836_, v___x_2839_);
v___x_2841_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__26));
v___x_2842_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__27));
lean_inc_n(v___x_2840_, 9);
v___x_2843_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2840_);
lean_ctor_set(v___x_2843_, 1, v___x_2842_);
v___x_2844_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__5));
v___x_2845_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__9));
v___x_2846_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6);
v___x_2847_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2847_, 0, v___x_2840_);
lean_ctor_set(v___x_2847_, 1, v___x_2845_);
lean_ctor_set(v___x_2847_, 2, v___x_2846_);
lean_inc_ref_n(v___x_2847_, 2);
v___x_2848_ = l_Lean_Syntax_node1(v___x_2840_, v___x_2844_, v___x_2847_);
v___x_2849_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__8));
v___x_2850_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__10));
v___x_2851_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__12));
v___x_2852_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__29));
v___x_2853_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__30, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__30_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__30);
v___x_2854_ = lean_box(0);
lean_inc(v_currMacroScope_2838_);
lean_inc(v_quotContext_2837_);
v___x_2855_ = l_Lean_addMacroScope(v_quotContext_2837_, v___x_2854_, v_currMacroScope_2838_);
v___x_2856_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__79));
v___x_2857_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2857_, 0, v___x_2840_);
lean_ctor_set(v___x_2857_, 1, v___x_2853_);
lean_ctor_set(v___x_2857_, 2, v___x_2855_);
lean_ctor_set(v___x_2857_, 3, v___x_2856_);
v___x_2858_ = l_Lean_Syntax_node1(v___x_2840_, v___x_2852_, v___x_2857_);
v___x_2859_ = l_Lean_Syntax_node1(v___x_2840_, v___x_2851_, v___x_2858_);
v___x_2860_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__13));
v___x_2861_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2861_, 0, v___x_2840_);
lean_ctor_set(v___x_2861_, 1, v___x_2860_);
v___x_2862_ = l_Lean_Syntax_node5(v___x_2840_, v___x_2850_, v___x_2859_, v___x_2847_, v___x_2847_, v___x_2861_, v_a_2672_);
v___x_2863_ = l_Lean_Syntax_node1(v___x_2840_, v___x_2849_, v___x_2862_);
v___x_2864_ = l_Lean_Syntax_node3(v___x_2840_, v___x_2841_, v___x_2843_, v___x_2848_, v___x_2863_);
v___x_2865_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__85, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__85_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__85);
v___x_2866_ = l_Lean_MessageData_ofExpr(v_e_2649_);
v___x_2867_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2867_, 0, v___x_2865_);
lean_ctor_set(v___x_2867_, 1, v___x_2866_);
v_fst_2659_ = v___x_2864_;
v_snd_2660_ = v___x_2867_;
goto v___jp_2658_;
}
else
{
lean_object* v_val_2868_; lean_object* v_ref_2869_; uint8_t v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; 
v_val_2868_ = lean_ctor_get(v_h_x3f_2652_, 0);
lean_inc_n(v_val_2868_, 2);
lean_dec_ref_known(v_h_x3f_2652_, 1);
v_ref_2869_ = lean_ctor_get(v___y_2655_, 2);
v___x_2870_ = 0;
v___x_2871_ = l_Lean_SourceInfo_fromRef(v_ref_2869_, v___x_2870_);
v___x_2872_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__26));
v___x_2873_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__27));
lean_inc_n(v___x_2871_, 7);
v___x_2874_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2871_);
lean_ctor_set(v___x_2874_, 1, v___x_2873_);
v___x_2875_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__5));
v___x_2876_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__9));
v___x_2877_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6);
v___x_2878_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2878_, 0, v___x_2871_);
lean_ctor_set(v___x_2878_, 1, v___x_2876_);
lean_ctor_set(v___x_2878_, 2, v___x_2877_);
lean_inc_ref_n(v___x_2878_, 2);
v___x_2879_ = l_Lean_Syntax_node1(v___x_2871_, v___x_2875_, v___x_2878_);
v___x_2880_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__8));
v___x_2881_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__10));
v___x_2882_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__12));
v___x_2883_ = l_Lean_mkIdent(v_val_2868_);
v___x_2884_ = l_Lean_Syntax_node1(v___x_2871_, v___x_2882_, v___x_2883_);
v___x_2885_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__13));
v___x_2886_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2886_, 0, v___x_2871_);
lean_ctor_set(v___x_2886_, 1, v___x_2885_);
v___x_2887_ = l_Lean_Syntax_node5(v___x_2871_, v___x_2881_, v___x_2884_, v___x_2878_, v___x_2878_, v___x_2886_, v_a_2672_);
v___x_2888_ = l_Lean_Syntax_node1(v___x_2871_, v___x_2880_, v___x_2887_);
v___x_2889_ = l_Lean_Syntax_node3(v___x_2871_, v___x_2872_, v___x_2874_, v___x_2879_, v___x_2888_);
v___x_2890_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__83, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__83_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__83);
v___x_2891_ = l_Lean_MessageData_ofName(v_val_2868_);
v___x_2892_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2892_, 0, v___x_2890_);
lean_ctor_set(v___x_2892_, 1, v___x_2891_);
v___x_2893_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17);
v___x_2894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2892_);
lean_ctor_set(v___x_2894_, 1, v___x_2893_);
v___x_2895_ = l_Lean_MessageData_ofExpr(v_e_2649_);
v___x_2896_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2896_, 0, v___x_2894_);
lean_ctor_set(v___x_2896_, 1, v___x_2895_);
v_fst_2659_ = v___x_2889_;
v_snd_2660_ = v___x_2896_;
goto v___jp_2658_;
}
}
}
v___jp_2673_:
{
lean_object* v_ref_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; 
v_ref_2675_ = lean_ctor_get(v___y_2655_, 2);
v___x_2676_ = l_Lean_SourceInfo_fromRef(v_ref_2675_, v_a_2651_);
v___x_2677_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__1));
v___x_2678_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__2));
lean_inc_n(v___x_2676_, 7);
v___x_2679_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2676_);
lean_ctor_set(v___x_2679_, 1, v___x_2678_);
v___x_2680_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__5));
v___x_2681_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__9));
v___x_2682_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6);
v___x_2683_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2683_, 0, v___x_2676_);
lean_ctor_set(v___x_2683_, 1, v___x_2681_);
lean_ctor_set(v___x_2683_, 2, v___x_2682_);
lean_inc_ref_n(v___x_2683_, 2);
v___x_2684_ = l_Lean_Syntax_node1(v___x_2676_, v___x_2680_, v___x_2683_);
v___x_2685_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__8));
v___x_2686_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__10));
v___x_2687_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__12));
lean_inc(v___y_2674_);
v___x_2688_ = l_Lean_mkIdent(v___y_2674_);
v___x_2689_ = l_Lean_Syntax_node1(v___x_2676_, v___x_2687_, v___x_2688_);
v___x_2690_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__13));
v___x_2691_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2676_);
lean_ctor_set(v___x_2691_, 1, v___x_2690_);
v___x_2692_ = l_Lean_Syntax_node5(v___x_2676_, v___x_2686_, v___x_2689_, v___x_2683_, v___x_2683_, v___x_2691_, v_a_2672_);
v___x_2693_ = l_Lean_Syntax_node1(v___x_2676_, v___x_2685_, v___x_2692_);
v___x_2694_ = l_Lean_Syntax_node3(v___x_2676_, v___x_2677_, v___x_2679_, v___x_2684_, v___x_2693_);
v___x_2695_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__15, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__15_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__15);
v___x_2696_ = l_Lean_MessageData_ofName(v___y_2674_);
v___x_2697_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2695_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
v___x_2698_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__17);
v___x_2699_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2699_, 0, v___x_2697_);
lean_ctor_set(v___x_2699_, 1, v___x_2698_);
v___x_2700_ = l_Lean_MessageData_ofExpr(v_e_2649_);
v___x_2701_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2701_, 0, v___x_2699_);
lean_ctor_set(v___x_2701_, 1, v___x_2700_);
v_fst_2659_ = v___x_2694_;
v_snd_2660_ = v___x_2701_;
goto v___jp_2658_;
}
}
else
{
lean_object* v_a_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2904_; 
lean_dec_ref(v___y_2655_);
lean_dec(v_h_x3f_2652_);
lean_dec(v_t_x3f_2650_);
lean_dec_ref(v_e_2649_);
v_a_2897_ = lean_ctor_get(v___x_2671_, 0);
v_isSharedCheck_2904_ = !lean_is_exclusive(v___x_2671_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2899_ = v___x_2671_;
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_a_2897_);
lean_dec(v___x_2671_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v___x_2902_; 
if (v_isShared_2900_ == 0)
{
v___x_2902_ = v___x_2899_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_a_2897_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
return v___x_2902_;
}
}
}
v___jp_2658_:
{
lean_object* v___x_2661_; lean_object* v_a_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2670_; 
v___x_2661_ = l_Lean_addMessageContextFull___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion_spec__0(v_snd_2660_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
lean_dec_ref(v___y_2655_);
v_a_2662_ = lean_ctor_get(v___x_2661_, 0);
v_isSharedCheck_2670_ = !lean_is_exclusive(v___x_2661_);
if (v_isSharedCheck_2670_ == 0)
{
v___x_2664_ = v___x_2661_;
v_isShared_2665_ = v_isSharedCheck_2670_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_a_2662_);
lean_dec(v___x_2661_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2670_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2666_; lean_object* v___x_2668_; 
v___x_2666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2666_, 0, v_fst_2659_);
lean_ctor_set(v___x_2666_, 1, v_a_2662_);
if (v_isShared_2665_ == 0)
{
lean_ctor_set(v___x_2664_, 0, v___x_2666_);
v___x_2668_ = v___x_2664_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v___x_2666_);
v___x_2668_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
return v___x_2668_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___boxed(lean_object* v_e_2905_, lean_object* v_t_x3f_2906_, lean_object* v_a_2907_, lean_object* v_h_x3f_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_){
_start:
{
uint8_t v_a_17865__boxed_2914_; lean_object* v_res_2915_; 
v_a_17865__boxed_2914_ = lean_unbox(v_a_2907_);
v_res_2915_ = l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0(v_e_2905_, v_t_x3f_2906_, v_a_17865__boxed_2914_, v_h_x3f_2908_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_);
lean_dec(v___y_2912_);
lean_dec(v___y_2910_);
lean_dec_ref(v___y_2909_);
return v_res_2915_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___closed__2(void){
_start:
{
lean_object* v___x_2919_; lean_object* v___x_2920_; 
v___x_2919_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___closed__1));
v___x_2920_ = l_Lean_MessageData_ofFormat(v___x_2919_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion(lean_object* v_ref_2921_, lean_object* v_h_x3f_2922_, lean_object* v_t_x3f_2923_, lean_object* v_e_2924_, lean_object* v_origSpan_x3f_2925_, lean_object* v_checkState_x3f_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_, lean_object* v_a_2929_, lean_object* v_a_2930_, lean_object* v_a_2931_, lean_object* v_a_2932_, lean_object* v_a_2933_, lean_object* v_a_2934_){
_start:
{
lean_object* v_tac_2937_; lean_object* v_msg_2938_; lean_object* v___y_2939_; lean_object* v___y_2940_; lean_object* v___x_2950_; 
lean_inc(v_a_2934_);
lean_inc_ref(v_a_2933_);
lean_inc(v_a_2932_);
lean_inc_ref(v_a_2931_);
lean_inc_ref(v_e_2924_);
v___x_2950_ = lean_infer_type(v_e_2924_, v_a_2931_, v_a_2932_, v_a_2933_, v_a_2934_);
if (lean_obj_tag(v___x_2950_) == 0)
{
lean_object* v_a_2951_; lean_object* v___x_2952_; 
v_a_2951_ = lean_ctor_get(v___x_2950_, 0);
lean_inc(v_a_2951_);
lean_dec_ref_known(v___x_2950_, 1);
v___x_2952_ = l_Lean_Meta_isProp(v_a_2951_, v_a_2931_, v_a_2932_, v_a_2933_, v_a_2934_);
if (lean_obj_tag(v___x_2952_) == 0)
{
lean_object* v_a_2953_; lean_object* v___f_2954_; lean_object* v___x_2955_; 
v_a_2953_ = lean_ctor_get(v___x_2952_, 0);
lean_inc(v_a_2953_);
lean_dec_ref_known(v___x_2952_, 1);
v___f_2954_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2954_, 0, v_e_2924_);
lean_closure_set(v___f_2954_, 1, v_t_x3f_2923_);
lean_closure_set(v___f_2954_, 2, v_a_2953_);
lean_closure_set(v___f_2954_, 3, v_h_x3f_2922_);
v___x_2955_ = l_Lean_Meta_withExposedNames___redArg(v___f_2954_, v_a_2931_, v_a_2932_, v_a_2933_, v_a_2934_);
if (lean_obj_tag(v___x_2955_) == 0)
{
lean_object* v_a_2956_; 
v_a_2956_ = lean_ctor_get(v___x_2955_, 0);
lean_inc(v_a_2956_);
lean_dec_ref_known(v___x_2955_, 1);
if (lean_obj_tag(v_checkState_x3f_2926_) == 1)
{
lean_object* v_fst_2957_; lean_object* v_snd_2958_; lean_object* v_val_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; 
v_fst_2957_ = lean_ctor_get(v_a_2956_, 0);
lean_inc(v_fst_2957_);
v_snd_2958_ = lean_ctor_get(v_a_2956_, 1);
lean_inc_n(v_snd_2958_, 2);
lean_dec(v_a_2956_);
v_val_2959_ = lean_ctor_get(v_checkState_x3f_2926_, 0);
lean_inc(v_val_2959_);
lean_dec_ref_known(v_checkState_x3f_2926_, 1);
v___x_2960_ = lean_box(0);
v___x_2961_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic(v_fst_2957_, v_snd_2958_, v_val_2959_, v___x_2960_, v_a_2927_, v_a_2928_, v_a_2929_, v_a_2930_, v_a_2931_, v_a_2932_, v_a_2933_, v_a_2934_);
if (lean_obj_tag(v___x_2961_) == 0)
{
lean_object* v_a_2962_; 
v_a_2962_ = lean_ctor_get(v___x_2961_, 0);
lean_inc(v_a_2962_);
lean_dec_ref_known(v___x_2961_, 1);
if (lean_obj_tag(v_a_2962_) == 1)
{
lean_object* v_val_2963_; lean_object* v_fst_2964_; lean_object* v_snd_2965_; 
lean_dec(v_snd_2958_);
v_val_2963_ = lean_ctor_get(v_a_2962_, 0);
lean_inc(v_val_2963_);
lean_dec_ref_known(v_a_2962_, 1);
v_fst_2964_ = lean_ctor_get(v_val_2963_, 0);
lean_inc(v_fst_2964_);
v_snd_2965_ = lean_ctor_get(v_val_2963_, 1);
lean_inc(v_snd_2965_);
lean_dec(v_val_2963_);
v_tac_2937_ = v_fst_2964_;
v_msg_2938_ = v_snd_2965_;
v___y_2939_ = v_a_2933_;
v___y_2940_ = v_a_2934_;
goto v___jp_2936_;
}
else
{
lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
lean_dec(v_a_2962_);
lean_dec(v_origSpan_x3f_2925_);
lean_dec(v_ref_2921_);
v___x_2966_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___closed__2, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___closed__2_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___closed__2);
v___x_2967_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg(v___x_2966_, v_snd_2958_);
v___x_2968_ = l_Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0(v___x_2967_, v_a_2927_, v_a_2928_, v_a_2929_, v_a_2930_, v_a_2931_, v_a_2932_, v_a_2933_, v_a_2934_);
if (lean_obj_tag(v___x_2968_) == 0)
{
lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2976_; 
v_isSharedCheck_2976_ = !lean_is_exclusive(v___x_2968_);
if (v_isSharedCheck_2976_ == 0)
{
lean_object* v_unused_2977_; 
v_unused_2977_ = lean_ctor_get(v___x_2968_, 0);
lean_dec(v_unused_2977_);
v___x_2970_ = v___x_2968_;
v_isShared_2971_ = v_isSharedCheck_2976_;
goto v_resetjp_2969_;
}
else
{
lean_dec(v___x_2968_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2976_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2972_; lean_object* v___x_2974_; 
v___x_2972_ = lean_box(0);
if (v_isShared_2971_ == 0)
{
lean_ctor_set(v___x_2970_, 0, v___x_2972_);
v___x_2974_ = v___x_2970_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v___x_2972_);
v___x_2974_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
return v___x_2974_;
}
}
}
else
{
return v___x_2968_;
}
}
}
else
{
lean_object* v_a_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2985_; 
lean_dec(v_snd_2958_);
lean_dec(v_origSpan_x3f_2925_);
lean_dec(v_ref_2921_);
v_a_2978_ = lean_ctor_get(v___x_2961_, 0);
v_isSharedCheck_2985_ = !lean_is_exclusive(v___x_2961_);
if (v_isSharedCheck_2985_ == 0)
{
v___x_2980_ = v___x_2961_;
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_a_2978_);
lean_dec(v___x_2961_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2983_; 
if (v_isShared_2981_ == 0)
{
v___x_2983_ = v___x_2980_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v_a_2978_);
v___x_2983_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
return v___x_2983_;
}
}
}
}
else
{
lean_object* v_fst_2986_; lean_object* v_snd_2987_; 
lean_dec(v_checkState_x3f_2926_);
v_fst_2986_ = lean_ctor_get(v_a_2956_, 0);
lean_inc(v_fst_2986_);
v_snd_2987_ = lean_ctor_get(v_a_2956_, 1);
lean_inc(v_snd_2987_);
lean_dec(v_a_2956_);
v_tac_2937_ = v_fst_2986_;
v_msg_2938_ = v_snd_2987_;
v___y_2939_ = v_a_2933_;
v___y_2940_ = v_a_2934_;
goto v___jp_2936_;
}
}
else
{
lean_object* v_a_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_2995_; 
lean_dec(v_checkState_x3f_2926_);
lean_dec(v_origSpan_x3f_2925_);
lean_dec(v_ref_2921_);
v_a_2988_ = lean_ctor_get(v___x_2955_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2955_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2990_ = v___x_2955_;
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_a_2988_);
lean_dec(v___x_2955_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2993_; 
if (v_isShared_2991_ == 0)
{
v___x_2993_ = v___x_2990_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_a_2988_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
return v___x_2993_;
}
}
}
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3003_; 
lean_dec(v_checkState_x3f_2926_);
lean_dec(v_origSpan_x3f_2925_);
lean_dec_ref(v_e_2924_);
lean_dec(v_t_x3f_2923_);
lean_dec(v_h_x3f_2922_);
lean_dec(v_ref_2921_);
v_a_2996_ = lean_ctor_get(v___x_2952_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2998_ = v___x_2952_;
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2952_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2996_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
}
}
}
}
else
{
lean_object* v_a_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3011_; 
lean_dec(v_checkState_x3f_2926_);
lean_dec(v_origSpan_x3f_2925_);
lean_dec_ref(v_e_2924_);
lean_dec(v_t_x3f_2923_);
lean_dec(v_h_x3f_2922_);
lean_dec(v_ref_2921_);
v_a_3004_ = lean_ctor_get(v___x_2950_, 0);
v_isSharedCheck_3011_ = !lean_is_exclusive(v___x_2950_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_3006_ = v___x_2950_;
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_a_3004_);
lean_dec(v___x_2950_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3009_; 
if (v_isShared_3007_ == 0)
{
v___x_3009_ = v___x_3006_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v_a_3004_);
v___x_3009_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
return v___x_3009_;
}
}
}
v___jp_2936_:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; uint8_t v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___x_2941_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__1));
v___x_2942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2942_, 0, v___x_2941_);
lean_ctor_set(v___x_2942_, 1, v_tac_2937_);
v___x_2943_ = lean_box(0);
v___x_2944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2944_, 0, v_msg_2938_);
v___x_2945_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2945_, 0, v___x_2942_);
lean_ctor_set(v___x_2945_, 1, v___x_2943_);
lean_ctor_set(v___x_2945_, 2, v___x_2943_);
lean_ctor_set(v___x_2945_, 3, v___x_2943_);
lean_ctor_set(v___x_2945_, 4, v___x_2944_);
lean_ctor_set(v___x_2945_, 5, v___x_2943_);
v___x_2946_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addExactSuggestion___closed__0));
v___x_2947_ = 4;
v___x_2948_ = l_Lean_MessageData_nil;
v___x_2949_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_ref_2921_, v___x_2945_, v_origSpan_x3f_2925_, v___x_2946_, v___x_2943_, v___x_2947_, v___x_2948_, v___y_2939_, v___y_2940_);
return v___x_2949_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___boxed(lean_object* v_ref_3012_, lean_object* v_h_x3f_3013_, lean_object* v_t_x3f_3014_, lean_object* v_e_3015_, lean_object* v_origSpan_x3f_3016_, lean_object* v_checkState_x3f_3017_, lean_object* v_a_3018_, lean_object* v_a_3019_, lean_object* v_a_3020_, lean_object* v_a_3021_, lean_object* v_a_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_){
_start:
{
lean_object* v_res_3027_; 
v_res_3027_ = l_Lean_Meta_Tactic_TryThis_addHaveSuggestion(v_ref_3012_, v_h_x3f_3013_, v_t_x3f_3014_, v_e_3015_, v_origSpan_x3f_3016_, v_checkState_x3f_3017_, v_a_3018_, v_a_3019_, v_a_3020_, v_a_3021_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_);
lean_dec(v_a_3025_);
lean_dec_ref(v_a_3024_);
lean_dec(v_a_3023_);
lean_dec_ref(v_a_3022_);
lean_dec(v_a_3021_);
lean_dec_ref(v_a_3020_);
lean_dec(v_a_3019_);
lean_dec_ref(v_a_3018_);
return v_res_3027_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__1(lean_object* v_a_3029_, lean_object* v_a_3030_){
_start:
{
if (lean_obj_tag(v_a_3029_) == 0)
{
lean_object* v___x_3031_; 
v___x_3031_ = l_List_reverse___redArg(v_a_3030_);
return v___x_3031_;
}
else
{
lean_object* v_head_3032_; lean_object* v_tail_3033_; lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3065_; 
v_head_3032_ = lean_ctor_get(v_a_3029_, 0);
v_tail_3033_ = lean_ctor_get(v_a_3029_, 1);
v_isSharedCheck_3065_ = !lean_is_exclusive(v_a_3029_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_3035_ = v_a_3029_;
v_isShared_3036_ = v_isSharedCheck_3065_;
goto v_resetjp_3034_;
}
else
{
lean_inc(v_tail_3033_);
lean_inc(v_head_3032_);
lean_dec(v_a_3029_);
v___x_3035_ = lean_box(0);
v_isShared_3036_ = v_isSharedCheck_3065_;
goto v_resetjp_3034_;
}
v_resetjp_3034_:
{
lean_object* v___y_3038_; lean_object* v_fst_3043_; lean_object* v_snd_3044_; lean_object* v___x_3046_; uint8_t v_isShared_3047_; uint8_t v_isSharedCheck_3064_; 
v_fst_3043_ = lean_ctor_get(v_head_3032_, 0);
v_snd_3044_ = lean_ctor_get(v_head_3032_, 1);
v_isSharedCheck_3064_ = !lean_is_exclusive(v_head_3032_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3046_ = v_head_3032_;
v_isShared_3047_ = v_isSharedCheck_3064_;
goto v_resetjp_3045_;
}
else
{
lean_inc(v_snd_3044_);
lean_inc(v_fst_3043_);
lean_dec(v_head_3032_);
v___x_3046_ = lean_box(0);
v_isShared_3047_ = v_isSharedCheck_3064_;
goto v_resetjp_3045_;
}
v___jp_3037_:
{
lean_object* v___x_3040_; 
if (v_isShared_3036_ == 0)
{
lean_ctor_set(v___x_3035_, 1, v_a_3030_);
lean_ctor_set(v___x_3035_, 0, v___y_3038_);
v___x_3040_ = v___x_3035_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v___y_3038_);
lean_ctor_set(v_reuseFailAlloc_3042_, 1, v_a_3030_);
v___x_3040_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
v_a_3029_ = v_tail_3033_;
v_a_3030_ = v___x_3040_;
goto _start;
}
}
v_resetjp_3045_:
{
lean_object* v___y_3049_; uint8_t v___x_3061_; 
v___x_3061_ = lean_unbox(v_snd_3044_);
lean_dec(v_snd_3044_);
if (v___x_3061_ == 0)
{
lean_object* v___x_3062_; 
v___x_3062_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___closed__0));
v___y_3049_ = v___x_3062_;
goto v___jp_3048_;
}
else
{
lean_object* v___x_3063_; 
v___x_3063_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__1___closed__0));
v___y_3049_ = v___x_3063_;
goto v___jp_3048_;
}
v___jp_3048_:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; uint8_t v___x_3052_; 
lean_inc_ref(v___y_3049_);
v___x_3050_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3050_, 0, v___y_3049_);
v___x_3051_ = l_Lean_MessageData_ofFormat(v___x_3050_);
v___x_3052_ = l_Lean_Expr_isConst(v_fst_3043_);
if (v___x_3052_ == 0)
{
lean_object* v___x_3053_; lean_object* v___x_3055_; 
v___x_3053_ = l_Lean_MessageData_ofExpr(v_fst_3043_);
if (v_isShared_3047_ == 0)
{
lean_ctor_set_tag(v___x_3046_, 7);
lean_ctor_set(v___x_3046_, 1, v___x_3053_);
lean_ctor_set(v___x_3046_, 0, v___x_3051_);
v___x_3055_ = v___x_3046_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v___x_3051_);
lean_ctor_set(v_reuseFailAlloc_3056_, 1, v___x_3053_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
v___y_3038_ = v___x_3055_;
goto v___jp_3037_;
}
}
else
{
lean_object* v___x_3057_; lean_object* v___x_3059_; 
v___x_3057_ = l_Lean_MessageData_ofConst(v_fst_3043_);
if (v_isShared_3047_ == 0)
{
lean_ctor_set_tag(v___x_3046_, 7);
lean_ctor_set(v___x_3046_, 1, v___x_3057_);
lean_ctor_set(v___x_3046_, 0, v___x_3051_);
v___x_3059_ = v___x_3046_;
goto v_reusejp_3058_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v___x_3051_);
lean_ctor_set(v_reuseFailAlloc_3060_, 1, v___x_3057_);
v___x_3059_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3058_;
}
v_reusejp_3058_:
{
v___y_3038_ = v___x_3059_;
goto v___jp_3037_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0(size_t v_sz_3073_, size_t v_i_3074_, lean_object* v_bs_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_){
_start:
{
uint8_t v___x_3081_; 
v___x_3081_ = lean_usize_dec_lt(v_i_3074_, v_sz_3073_);
if (v___x_3081_ == 0)
{
lean_object* v___x_3082_; 
v___x_3082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3082_, 0, v_bs_3075_);
return v___x_3082_;
}
else
{
lean_object* v_v_3083_; lean_object* v_fst_3084_; lean_object* v_snd_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3128_; 
v_v_3083_ = lean_array_uget(v_bs_3075_, v_i_3074_);
v_fst_3084_ = lean_ctor_get(v_v_3083_, 0);
v_snd_3085_ = lean_ctor_get(v_v_3083_, 1);
v_isSharedCheck_3128_ = !lean_is_exclusive(v_v_3083_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3087_ = v_v_3083_;
v_isShared_3088_ = v_isSharedCheck_3128_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_snd_3085_);
lean_inc(v_fst_3084_);
lean_dec(v_v_3083_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3128_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3089_; lean_object* v_bs_x27_3090_; lean_object* v_a_3092_; lean_object* v___x_3097_; 
v___x_3089_ = lean_unsigned_to_nat(0u);
v_bs_x27_3090_ = lean_array_uset(v_bs_3075_, v_i_3074_, v___x_3089_);
v___x_3097_ = l_Lean_Meta_Tactic_TryThis_delabToRefinableSyntax(v_fst_3084_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_);
if (lean_obj_tag(v___x_3097_) == 0)
{
uint8_t v___x_3098_; 
v___x_3098_ = lean_unbox(v_snd_3085_);
if (v___x_3098_ == 0)
{
lean_object* v_a_3099_; lean_object* v_ref_3100_; uint8_t v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
lean_del_object(v___x_3087_);
v_a_3099_ = lean_ctor_get(v___x_3097_, 0);
lean_inc(v_a_3099_);
lean_dec_ref_known(v___x_3097_, 1);
v_ref_3100_ = lean_ctor_get(v___y_3078_, 2);
v___x_3101_ = lean_unbox(v_snd_3085_);
lean_dec(v_snd_3085_);
v___x_3102_ = l_Lean_SourceInfo_fromRef(v_ref_3100_, v___x_3101_);
v___x_3103_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__1));
v___x_3104_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__9));
v___x_3105_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6);
lean_inc(v___x_3102_);
v___x_3106_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3106_, 0, v___x_3102_);
lean_ctor_set(v___x_3106_, 1, v___x_3104_);
lean_ctor_set(v___x_3106_, 2, v___x_3105_);
v___x_3107_ = l_Lean_Syntax_node2(v___x_3102_, v___x_3103_, v___x_3106_, v_a_3099_);
v_a_3092_ = v___x_3107_;
goto v___jp_3091_;
}
else
{
lean_object* v_a_3108_; lean_object* v_ref_3109_; uint8_t v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3116_; 
lean_dec(v_snd_3085_);
v_a_3108_ = lean_ctor_get(v___x_3097_, 0);
lean_inc(v_a_3108_);
lean_dec_ref_known(v___x_3097_, 1);
v_ref_3109_ = lean_ctor_get(v___y_3078_, 2);
v___x_3110_ = 0;
v___x_3111_ = l_Lean_SourceInfo_fromRef(v_ref_3109_, v___x_3110_);
v___x_3112_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__1));
v___x_3113_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__9));
v___x_3114_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___closed__2));
lean_inc(v___x_3111_);
if (v_isShared_3088_ == 0)
{
lean_ctor_set_tag(v___x_3087_, 2);
lean_ctor_set(v___x_3087_, 1, v___x_3114_);
lean_ctor_set(v___x_3087_, 0, v___x_3111_);
v___x_3116_ = v___x_3087_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v___x_3111_);
lean_ctor_set(v_reuseFailAlloc_3119_, 1, v___x_3114_);
v___x_3116_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; 
lean_inc(v___x_3111_);
v___x_3117_ = l_Lean_Syntax_node1(v___x_3111_, v___x_3113_, v___x_3116_);
v___x_3118_ = l_Lean_Syntax_node2(v___x_3111_, v___x_3112_, v___x_3117_, v_a_3108_);
v_a_3092_ = v___x_3118_;
goto v___jp_3091_;
}
}
}
else
{
lean_object* v_a_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3127_; 
lean_dec_ref(v_bs_x27_3090_);
lean_del_object(v___x_3087_);
lean_dec(v_snd_3085_);
v_a_3120_ = lean_ctor_get(v___x_3097_, 0);
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3097_);
if (v_isSharedCheck_3127_ == 0)
{
v___x_3122_ = v___x_3097_;
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_a_3120_);
lean_dec(v___x_3097_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3125_; 
if (v_isShared_3123_ == 0)
{
v___x_3125_ = v___x_3122_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v_a_3120_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
}
v___jp_3091_:
{
size_t v___x_3093_; size_t v___x_3094_; lean_object* v___x_3095_; 
v___x_3093_ = ((size_t)1ULL);
v___x_3094_ = lean_usize_add(v_i_3074_, v___x_3093_);
v___x_3095_ = lean_array_uset(v_bs_x27_3090_, v_i_3074_, v_a_3092_);
v_i_3074_ = v___x_3094_;
v_bs_3075_ = v___x_3095_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0___boxed(lean_object* v_sz_3129_, lean_object* v_i_3130_, lean_object* v_bs_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_){
_start:
{
size_t v_sz_boxed_3137_; size_t v_i_boxed_3138_; lean_object* v_res_3139_; 
v_sz_boxed_3137_ = lean_unbox_usize(v_sz_3129_);
lean_dec(v_sz_3129_);
v_i_boxed_3138_ = lean_unbox_usize(v_i_3130_);
lean_dec(v_i_3130_);
v_res_3139_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0(v_sz_boxed_3137_, v_i_boxed_3138_, v_bs_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_);
lean_dec(v___y_3135_);
lean_dec_ref(v___y_3134_);
lean_dec(v___y_3133_);
lean_dec_ref(v___y_3132_);
return v_res_3139_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___x_3141_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__0));
v___x_3142_ = l_Lean_stringToMessageData(v___x_3141_);
return v___x_3142_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3144_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__2));
v___x_3145_ = l_Lean_stringToMessageData(v___x_3144_);
return v___x_3145_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3146_; lean_object* v___x_3147_; 
v___x_3146_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Meta_Tactic_TryThis_addSuggestion_spec__0_spec__0___closed__0));
v___x_3147_ = l_Lean_stringToMessageData(v___x_3146_);
return v___x_3147_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__7(void){
_start:
{
lean_object* v___x_3151_; lean_object* v___x_3152_; 
v___x_3151_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__6));
v___x_3152_ = l_Lean_MessageData_ofFormat(v___x_3151_);
return v___x_3152_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__9(void){
_start:
{
lean_object* v___x_3154_; lean_object* v___x_3155_; 
v___x_3154_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__8));
v___x_3155_ = l_Lean_stringToMessageData(v___x_3154_);
return v___x_3155_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__11(void){
_start:
{
lean_object* v___x_3157_; lean_object* v___x_3158_; 
v___x_3157_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__10));
v___x_3158_ = l_Lean_stringToMessageData(v___x_3157_);
return v___x_3158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0(lean_object* v_type_x3f_3196_, lean_object* v_rules_3197_, lean_object* v_loc_x3f_3198_, lean_object* v___x_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_){
_start:
{
lean_object* v___y_3206_; lean_object* v___y_3207_; lean_object* v_extraMsg_3208_; lean_object* v___y_3213_; lean_object* v___y_3214_; lean_object* v___y_3228_; lean_object* v___y_3229_; lean_object* v___y_3230_; lean_object* v___y_3231_; lean_object* v___y_3232_; lean_object* v___y_3233_; lean_object* v___y_3234_; lean_object* v___y_3235_; size_t v_sz_3253_; size_t v___x_3254_; lean_object* v___x_3255_; 
v_sz_3253_ = lean_array_size(v___x_3199_);
v___x_3254_ = ((size_t)0ULL);
v___x_3255_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__0(v_sz_3253_, v___x_3254_, v___x_3199_, v___y_3200_, v___y_3201_, v___y_3202_, v___y_3203_);
if (lean_obj_tag(v___x_3255_) == 0)
{
lean_object* v_a_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v_a_3260_; 
v_a_3256_ = lean_ctor_get(v___x_3255_, 0);
lean_inc(v_a_3256_);
lean_dec_ref_known(v___x_3255_, 1);
v___x_3257_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__12));
v___x_3258_ = l_Lean_Syntax_SepArray_ofElems(v___x_3257_, v_a_3256_);
lean_dec(v_a_3256_);
if (lean_obj_tag(v_loc_x3f_3198_) == 0)
{
lean_object* v___x_3284_; 
v___x_3284_ = lean_box(0);
v_a_3260_ = v___x_3284_;
goto v___jp_3259_;
}
else
{
lean_object* v_val_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; 
v_val_3285_ = lean_ctor_get(v_loc_x3f_3198_, 0);
v___x_3286_ = lean_box(1);
lean_inc(v_val_3285_);
v___x_3287_ = l_Lean_PrettyPrinter_delab(v_val_3285_, v___x_3286_, v___y_3200_, v___y_3201_, v___y_3202_, v___y_3203_);
if (lean_obj_tag(v___x_3287_) == 0)
{
lean_object* v_a_3288_; lean_object* v_ref_3289_; uint8_t v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
v_a_3288_ = lean_ctor_get(v___x_3287_, 0);
lean_inc(v_a_3288_);
lean_dec_ref_known(v___x_3287_, 1);
v_ref_3289_ = lean_ctor_get(v___y_3202_, 2);
v___x_3290_ = 0;
v___x_3291_ = l_Lean_SourceInfo_fromRef(v_ref_3289_, v___x_3290_);
v___x_3292_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__24));
v___x_3293_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__25));
lean_inc_n(v___x_3291_, 3);
v___x_3294_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3294_, 0, v___x_3291_);
lean_ctor_set(v___x_3294_, 1, v___x_3293_);
v___x_3295_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__27));
v___x_3296_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__9));
v___x_3297_ = l_Lean_Syntax_node1(v___x_3291_, v___x_3296_, v_a_3288_);
v___x_3298_ = l_Lean_Syntax_node1(v___x_3291_, v___x_3295_, v___x_3297_);
v___x_3299_ = l_Lean_Syntax_node2(v___x_3291_, v___x_3292_, v___x_3294_, v___x_3298_);
v___x_3300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3300_, 0, v___x_3299_);
v_a_3260_ = v___x_3300_;
goto v___jp_3259_;
}
else
{
lean_object* v_a_3301_; lean_object* v___x_3303_; uint8_t v_isShared_3304_; uint8_t v_isSharedCheck_3308_; 
lean_dec_ref_known(v_loc_x3f_3198_, 1);
lean_dec_ref(v___x_3258_);
lean_dec(v_rules_3197_);
lean_dec(v_type_x3f_3196_);
v_a_3301_ = lean_ctor_get(v___x_3287_, 0);
v_isSharedCheck_3308_ = !lean_is_exclusive(v___x_3287_);
if (v_isSharedCheck_3308_ == 0)
{
v___x_3303_ = v___x_3287_;
v_isShared_3304_ = v_isSharedCheck_3308_;
goto v_resetjp_3302_;
}
else
{
lean_inc(v_a_3301_);
lean_dec(v___x_3287_);
v___x_3303_ = lean_box(0);
v_isShared_3304_ = v_isSharedCheck_3308_;
goto v_resetjp_3302_;
}
v_resetjp_3302_:
{
lean_object* v___x_3306_; 
if (v_isShared_3304_ == 0)
{
v___x_3306_ = v___x_3303_;
goto v_reusejp_3305_;
}
else
{
lean_object* v_reuseFailAlloc_3307_; 
v_reuseFailAlloc_3307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3307_, 0, v_a_3301_);
v___x_3306_ = v_reuseFailAlloc_3307_;
goto v_reusejp_3305_;
}
v_reusejp_3305_:
{
return v___x_3306_;
}
}
}
}
v___jp_3259_:
{
lean_object* v_ref_3261_; uint8_t v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
v_ref_3261_ = lean_ctor_get(v___y_3202_, 2);
v___x_3262_ = 0;
v___x_3263_ = l_Lean_SourceInfo_fromRef(v_ref_3261_, v___x_3262_);
v___x_3264_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__14));
v___x_3265_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__15));
lean_inc_n(v___x_3263_, 7);
v___x_3266_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3266_, 0, v___x_3263_);
lean_ctor_set(v___x_3266_, 1, v___x_3265_);
v___x_3267_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__17));
v___x_3268_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__9));
v___x_3269_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6, &l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6_once, _init_l_Lean_Meta_Tactic_TryThis_addHaveSuggestion___lam__0___closed__6);
v___x_3270_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3270_, 0, v___x_3263_);
lean_ctor_set(v___x_3270_, 1, v___x_3268_);
lean_ctor_set(v___x_3270_, 2, v___x_3269_);
v___x_3271_ = l_Lean_Syntax_node1(v___x_3263_, v___x_3267_, v___x_3270_);
v___x_3272_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__19));
v___x_3273_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__20));
v___x_3274_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3274_, 0, v___x_3263_);
lean_ctor_set(v___x_3274_, 1, v___x_3273_);
v___x_3275_ = l_Array_append___redArg(v___x_3269_, v___x_3258_);
lean_dec_ref(v___x_3258_);
v___x_3276_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3276_, 0, v___x_3263_);
lean_ctor_set(v___x_3276_, 1, v___x_3268_);
lean_ctor_set(v___x_3276_, 2, v___x_3275_);
v___x_3277_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__21));
v___x_3278_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3263_);
lean_ctor_set(v___x_3278_, 1, v___x_3277_);
v___x_3279_ = l_Lean_Syntax_node3(v___x_3263_, v___x_3272_, v___x_3274_, v___x_3276_, v___x_3278_);
if (lean_obj_tag(v_a_3260_) == 0)
{
lean_object* v___x_3280_; 
v___x_3280_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__22));
v___y_3228_ = v___x_3279_;
v___y_3229_ = v___x_3268_;
v___y_3230_ = v___x_3264_;
v___y_3231_ = v___x_3271_;
v___y_3232_ = v___x_3263_;
v___y_3233_ = v___x_3269_;
v___y_3234_ = v___x_3266_;
v___y_3235_ = v___x_3280_;
goto v___jp_3227_;
}
else
{
lean_object* v_val_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; 
v_val_3281_ = lean_ctor_get(v_a_3260_, 0);
lean_inc(v_val_3281_);
lean_dec_ref_known(v_a_3260_, 1);
v___x_3282_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__22));
v___x_3283_ = lean_array_push(v___x_3282_, v_val_3281_);
v___y_3228_ = v___x_3279_;
v___y_3229_ = v___x_3268_;
v___y_3230_ = v___x_3264_;
v___y_3231_ = v___x_3271_;
v___y_3232_ = v___x_3263_;
v___y_3233_ = v___x_3269_;
v___y_3234_ = v___x_3266_;
v___y_3235_ = v___x_3283_;
goto v___jp_3227_;
}
}
}
else
{
lean_object* v_a_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3316_; 
lean_dec(v_loc_x3f_3198_);
lean_dec(v_rules_3197_);
lean_dec(v_type_x3f_3196_);
v_a_3309_ = lean_ctor_get(v___x_3255_, 0);
v_isSharedCheck_3316_ = !lean_is_exclusive(v___x_3255_);
if (v_isSharedCheck_3316_ == 0)
{
v___x_3311_ = v___x_3255_;
v_isShared_3312_ = v_isSharedCheck_3316_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_a_3309_);
lean_dec(v___x_3255_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3316_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v___x_3314_; 
if (v_isShared_3312_ == 0)
{
v___x_3314_ = v___x_3311_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v_a_3309_);
v___x_3314_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
return v___x_3314_;
}
}
}
v___jp_3205_:
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
v___x_3209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3209_, 0, v___y_3206_);
lean_ctor_set(v___x_3209_, 1, v_extraMsg_3208_);
v___x_3210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3210_, 0, v___y_3207_);
lean_ctor_set(v___x_3210_, 1, v___x_3209_);
v___x_3211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3211_, 0, v___x_3210_);
return v___x_3211_;
}
v___jp_3212_:
{
lean_object* v___x_3215_; 
v___x_3215_ = l_Lean_addMessageContextFull___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion_spec__0(v___y_3214_, v___y_3200_, v___y_3201_, v___y_3202_, v___y_3203_);
switch(lean_obj_tag(v_type_x3f_3196_))
{
case 0:
{
lean_object* v_a_3216_; lean_object* v___x_3217_; 
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
lean_inc(v_a_3216_);
lean_dec_ref(v___x_3215_);
v___x_3217_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__1, &l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__1_once, _init_l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__1);
v___y_3206_ = v_a_3216_;
v___y_3207_ = v___y_3213_;
v_extraMsg_3208_ = v___x_3217_;
goto v___jp_3205_;
}
case 1:
{
lean_object* v_a_3218_; lean_object* v_a_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v_a_3224_; 
v_a_3218_ = lean_ctor_get(v___x_3215_, 0);
lean_inc(v_a_3218_);
lean_dec_ref(v___x_3215_);
v_a_3219_ = lean_ctor_get(v_type_x3f_3196_, 0);
lean_inc(v_a_3219_);
lean_dec_ref_known(v_type_x3f_3196_, 1);
v___x_3220_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__3, &l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__3_once, _init_l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__3);
v___x_3221_ = l_Lean_MessageData_ofExpr(v_a_3219_);
v___x_3222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3220_);
lean_ctor_set(v___x_3222_, 1, v___x_3221_);
v___x_3223_ = l_Lean_addMessageContextFull___at___00Lean_Meta_Tactic_TryThis_delabToRefinableSuggestion_spec__0(v___x_3222_, v___y_3200_, v___y_3201_, v___y_3202_, v___y_3203_);
v_a_3224_ = lean_ctor_get(v___x_3223_, 0);
lean_inc(v_a_3224_);
lean_dec_ref(v___x_3223_);
v___y_3206_ = v_a_3218_;
v___y_3207_ = v___y_3213_;
v_extraMsg_3208_ = v_a_3224_;
goto v___jp_3205_;
}
default: 
{
lean_object* v_a_3225_; lean_object* v___x_3226_; 
v_a_3225_ = lean_ctor_get(v___x_3215_, 0);
lean_inc(v_a_3225_);
lean_dec_ref(v___x_3215_);
v___x_3226_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__4, &l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__4_once, _init_l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__4);
v___y_3206_ = v_a_3225_;
v___y_3207_ = v___y_3213_;
v_extraMsg_3208_ = v___x_3226_;
goto v___jp_3205_;
}
}
}
v___jp_3227_:
{
lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; 
v___x_3236_ = l_Array_append___redArg(v___y_3233_, v___y_3235_);
lean_dec_ref(v___y_3235_);
lean_inc(v___y_3229_);
lean_inc(v___y_3232_);
v___x_3237_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3237_, 0, v___y_3232_);
lean_ctor_set(v___x_3237_, 1, v___y_3229_);
lean_ctor_set(v___x_3237_, 2, v___x_3236_);
lean_inc(v___y_3230_);
v___x_3238_ = l_Lean_Syntax_node4(v___y_3232_, v___y_3230_, v___y_3234_, v___y_3231_, v___y_3228_, v___x_3237_);
v___x_3239_ = lean_box(0);
v___x_3240_ = l_List_mapTR_loop___at___00Lean_Meta_Tactic_TryThis_addRewriteSuggestion_spec__1(v_rules_3197_, v___x_3239_);
v___x_3241_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__7, &l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__7_once, _init_l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__7);
v___x_3242_ = l_Lean_MessageData_joinSep(v___x_3240_, v___x_3241_);
v___x_3243_ = l_Lean_MessageData_sbracket(v___x_3242_);
if (lean_obj_tag(v_loc_x3f_3198_) == 1)
{
lean_object* v_val_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; 
v_val_3244_ = lean_ctor_get(v_loc_x3f_3198_, 0);
lean_inc(v_val_3244_);
lean_dec_ref_known(v_loc_x3f_3198_, 1);
v___x_3245_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__9, &l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__9_once, _init_l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__9);
v___x_3246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3246_, 0, v___x_3245_);
lean_ctor_set(v___x_3246_, 1, v___x_3243_);
v___x_3247_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__11, &l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__11_once, _init_l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__11);
v___x_3248_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3248_, 0, v___x_3246_);
lean_ctor_set(v___x_3248_, 1, v___x_3247_);
v___x_3249_ = l_Lean_MessageData_ofExpr(v_val_3244_);
v___x_3250_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3250_, 0, v___x_3248_);
lean_ctor_set(v___x_3250_, 1, v___x_3249_);
v___y_3213_ = v___x_3238_;
v___y_3214_ = v___x_3250_;
goto v___jp_3212_;
}
else
{
lean_object* v___x_3251_; lean_object* v___x_3252_; 
lean_dec(v_loc_x3f_3198_);
v___x_3251_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__9, &l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__9_once, _init_l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___closed__9);
v___x_3252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3251_);
lean_ctor_set(v___x_3252_, 1, v___x_3243_);
v___y_3213_ = v___x_3238_;
v___y_3214_ = v___x_3252_;
goto v___jp_3212_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___boxed(lean_object* v_type_x3f_3317_, lean_object* v_rules_3318_, lean_object* v_loc_x3f_3319_, lean_object* v___x_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_){
_start:
{
lean_object* v_res_3326_; 
v_res_3326_ = l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0(v_type_x3f_3317_, v_rules_3318_, v_loc_x3f_3319_, v___x_3320_, v___y_3321_, v___y_3322_, v___y_3323_, v___y_3324_);
lean_dec(v___y_3324_);
lean_dec_ref(v___y_3323_);
lean_dec(v___y_3322_);
lean_dec_ref(v___y_3321_);
return v_res_3326_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___closed__2(void){
_start:
{
lean_object* v___x_3330_; lean_object* v___x_3331_; 
v___x_3330_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___closed__1));
v___x_3331_ = l_Lean_MessageData_ofFormat(v___x_3330_);
return v___x_3331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion(lean_object* v_ref_3332_, lean_object* v_rules_3333_, lean_object* v_type_x3f_3334_, lean_object* v_loc_x3f_3335_, lean_object* v_origSpan_x3f_3336_, lean_object* v_checkState_x3f_3337_, lean_object* v_a_3338_, lean_object* v_a_3339_, lean_object* v_a_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_, lean_object* v_a_3343_, lean_object* v_a_3344_, lean_object* v_a_3345_){
_start:
{
lean_object* v___x_3347_; lean_object* v___f_3348_; lean_object* v___x_3349_; 
lean_inc(v_rules_3333_);
v___x_3347_ = lean_array_mk(v_rules_3333_);
lean_inc(v_type_x3f_3334_);
v___f_3348_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___lam__0___boxed), 9, 4);
lean_closure_set(v___f_3348_, 0, v_type_x3f_3334_);
lean_closure_set(v___f_3348_, 1, v_rules_3333_);
lean_closure_set(v___f_3348_, 2, v_loc_x3f_3335_);
lean_closure_set(v___f_3348_, 3, v___x_3347_);
v___x_3349_ = l_Lean_Meta_withExposedNames___redArg(v___f_3348_, v_a_3342_, v_a_3343_, v_a_3344_, v_a_3345_);
if (lean_obj_tag(v___x_3349_) == 0)
{
lean_object* v_a_3350_; lean_object* v_snd_3351_; lean_object* v_fst_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3423_; 
v_a_3350_ = lean_ctor_get(v___x_3349_, 0);
lean_inc(v_a_3350_);
lean_dec_ref_known(v___x_3349_, 1);
v_snd_3351_ = lean_ctor_get(v_a_3350_, 1);
v_fst_3352_ = lean_ctor_get(v_a_3350_, 0);
v_isSharedCheck_3423_ = !lean_is_exclusive(v_a_3350_);
if (v_isSharedCheck_3423_ == 0)
{
v___x_3354_ = v_a_3350_;
v_isShared_3355_ = v_isSharedCheck_3423_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_snd_3351_);
lean_inc(v_fst_3352_);
lean_dec(v_a_3350_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3423_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v_fst_3356_; lean_object* v_snd_3357_; lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3422_; 
v_fst_3356_ = lean_ctor_get(v_snd_3351_, 0);
v_snd_3357_ = lean_ctor_get(v_snd_3351_, 1);
v_isSharedCheck_3422_ = !lean_is_exclusive(v_snd_3351_);
if (v_isSharedCheck_3422_ == 0)
{
v___x_3359_ = v_snd_3351_;
v_isShared_3360_ = v_isSharedCheck_3422_;
goto v_resetjp_3358_;
}
else
{
lean_inc(v_snd_3357_);
lean_inc(v_fst_3356_);
lean_dec(v_snd_3351_);
v___x_3359_ = lean_box(0);
v_isShared_3360_ = v_isSharedCheck_3422_;
goto v_resetjp_3358_;
}
v_resetjp_3358_:
{
lean_object* v_tac_3362_; lean_object* v_tacMsg_3363_; lean_object* v___y_3364_; lean_object* v___y_3365_; 
if (lean_obj_tag(v_checkState_x3f_3337_) == 1)
{
lean_object* v_val_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3421_; 
v_val_3380_ = lean_ctor_get(v_checkState_x3f_3337_, 0);
v_isSharedCheck_3421_ = !lean_is_exclusive(v_checkState_x3f_3337_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3382_ = v_checkState_x3f_3337_;
v_isShared_3383_ = v_isSharedCheck_3421_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_val_3380_);
lean_dec(v_checkState_x3f_3337_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3421_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___y_3385_; 
if (lean_obj_tag(v_type_x3f_3334_) == 1)
{
lean_object* v_a_3416_; lean_object* v___x_3418_; 
v_a_3416_ = lean_ctor_get(v_type_x3f_3334_, 0);
lean_inc(v_a_3416_);
lean_dec_ref_known(v_type_x3f_3334_, 1);
if (v_isShared_3383_ == 0)
{
lean_ctor_set(v___x_3382_, 0, v_a_3416_);
v___x_3418_ = v___x_3382_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v_a_3416_);
v___x_3418_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3417_;
}
v_reusejp_3417_:
{
v___y_3385_ = v___x_3418_;
goto v___jp_3384_;
}
}
else
{
lean_object* v___x_3420_; 
lean_del_object(v___x_3382_);
lean_dec(v_type_x3f_3334_);
v___x_3420_ = lean_box(0);
v___y_3385_ = v___x_3420_;
goto v___jp_3384_;
}
v___jp_3384_:
{
lean_object* v___x_3386_; 
lean_inc(v_fst_3356_);
v___x_3386_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic(v_fst_3352_, v_fst_3356_, v_val_3380_, v___y_3385_, v_a_3338_, v_a_3339_, v_a_3340_, v_a_3341_, v_a_3342_, v_a_3343_, v_a_3344_, v_a_3345_);
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_object* v_a_3387_; 
v_a_3387_ = lean_ctor_get(v___x_3386_, 0);
lean_inc(v_a_3387_);
lean_dec_ref_known(v___x_3386_, 1);
if (lean_obj_tag(v_a_3387_) == 1)
{
lean_object* v_val_3388_; lean_object* v_fst_3389_; lean_object* v_snd_3390_; 
lean_dec(v_fst_3356_);
v_val_3388_ = lean_ctor_get(v_a_3387_, 0);
lean_inc(v_val_3388_);
lean_dec_ref_known(v_a_3387_, 1);
v_fst_3389_ = lean_ctor_get(v_val_3388_, 0);
lean_inc(v_fst_3389_);
v_snd_3390_ = lean_ctor_get(v_val_3388_, 1);
lean_inc(v_snd_3390_);
lean_dec(v_val_3388_);
v_tac_3362_ = v_fst_3389_;
v_tacMsg_3363_ = v_snd_3390_;
v___y_3364_ = v_a_3344_;
v___y_3365_ = v_a_3345_;
goto v___jp_3361_;
}
else
{
lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; 
lean_dec(v_a_3387_);
lean_del_object(v___x_3359_);
lean_del_object(v___x_3354_);
lean_dec(v_origSpan_x3f_3336_);
lean_dec(v_ref_3332_);
v___x_3391_ = lean_obj_once(&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__16, &l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__16_once, _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__16);
v___x_3392_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3392_, 0, v___x_3391_);
lean_ctor_set(v___x_3392_, 1, v_fst_3356_);
v___x_3393_ = lean_obj_once(&l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__17, &l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__17_once, _init_l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkValidatedTactic___closed__17);
v___x_3394_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3394_, 0, v___x_3392_);
lean_ctor_set(v___x_3394_, 1, v___x_3393_);
v___x_3395_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___closed__2, &l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___closed__2_once, _init_l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___closed__2);
v___x_3396_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3394_);
lean_ctor_set(v___x_3396_, 1, v_snd_3357_);
v___x_3397_ = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_mkFailedToMakeTacticMsg(v___x_3395_, v___x_3396_);
v___x_3398_ = l_Lean_logInfo___at___00Lean_Meta_Tactic_TryThis_addExactSuggestion_spec__0(v___x_3397_, v_a_3338_, v_a_3339_, v_a_3340_, v_a_3341_, v_a_3342_, v_a_3343_, v_a_3344_, v_a_3345_);
if (lean_obj_tag(v___x_3398_) == 0)
{
lean_object* v___x_3400_; uint8_t v_isShared_3401_; uint8_t v_isSharedCheck_3406_; 
v_isSharedCheck_3406_ = !lean_is_exclusive(v___x_3398_);
if (v_isSharedCheck_3406_ == 0)
{
lean_object* v_unused_3407_; 
v_unused_3407_ = lean_ctor_get(v___x_3398_, 0);
lean_dec(v_unused_3407_);
v___x_3400_ = v___x_3398_;
v_isShared_3401_ = v_isSharedCheck_3406_;
goto v_resetjp_3399_;
}
else
{
lean_dec(v___x_3398_);
v___x_3400_ = lean_box(0);
v_isShared_3401_ = v_isSharedCheck_3406_;
goto v_resetjp_3399_;
}
v_resetjp_3399_:
{
lean_object* v___x_3402_; lean_object* v___x_3404_; 
v___x_3402_ = lean_box(0);
if (v_isShared_3401_ == 0)
{
lean_ctor_set(v___x_3400_, 0, v___x_3402_);
v___x_3404_ = v___x_3400_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v___x_3402_);
v___x_3404_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
return v___x_3404_;
}
}
}
else
{
return v___x_3398_;
}
}
}
else
{
lean_object* v_a_3408_; lean_object* v___x_3410_; uint8_t v_isShared_3411_; uint8_t v_isSharedCheck_3415_; 
lean_del_object(v___x_3359_);
lean_dec(v_snd_3357_);
lean_dec(v_fst_3356_);
lean_del_object(v___x_3354_);
lean_dec(v_origSpan_x3f_3336_);
lean_dec(v_ref_3332_);
v_a_3408_ = lean_ctor_get(v___x_3386_, 0);
v_isSharedCheck_3415_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3415_ == 0)
{
v___x_3410_ = v___x_3386_;
v_isShared_3411_ = v_isSharedCheck_3415_;
goto v_resetjp_3409_;
}
else
{
lean_inc(v_a_3408_);
lean_dec(v___x_3386_);
v___x_3410_ = lean_box(0);
v_isShared_3411_ = v_isSharedCheck_3415_;
goto v_resetjp_3409_;
}
v_resetjp_3409_:
{
lean_object* v___x_3413_; 
if (v_isShared_3411_ == 0)
{
v___x_3413_ = v___x_3410_;
goto v_reusejp_3412_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v_a_3408_);
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
}
else
{
lean_dec(v_checkState_x3f_3337_);
lean_dec(v_type_x3f_3334_);
v_tac_3362_ = v_fst_3352_;
v_tacMsg_3363_ = v_fst_3356_;
v___y_3364_ = v_a_3344_;
v___y_3365_ = v_a_3345_;
goto v___jp_3361_;
}
v___jp_3361_:
{
lean_object* v___x_3366_; lean_object* v___x_3368_; 
v___x_3366_ = ((lean_object*)(l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_addExactSuggestionCore___closed__1));
if (v_isShared_3360_ == 0)
{
lean_ctor_set(v___x_3359_, 1, v_tac_3362_);
lean_ctor_set(v___x_3359_, 0, v___x_3366_);
v___x_3368_ = v___x_3359_;
goto v_reusejp_3367_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v___x_3366_);
lean_ctor_set(v_reuseFailAlloc_3379_, 1, v_tac_3362_);
v___x_3368_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3367_;
}
v_reusejp_3367_:
{
lean_object* v___x_3369_; lean_object* v___x_3371_; 
v___x_3369_ = lean_box(0);
if (v_isShared_3355_ == 0)
{
lean_ctor_set_tag(v___x_3354_, 7);
lean_ctor_set(v___x_3354_, 1, v_snd_3357_);
lean_ctor_set(v___x_3354_, 0, v_tacMsg_3363_);
v___x_3371_ = v___x_3354_;
goto v_reusejp_3370_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v_tacMsg_3363_);
lean_ctor_set(v_reuseFailAlloc_3378_, 1, v_snd_3357_);
v___x_3371_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3370_;
}
v_reusejp_3370_:
{
lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; uint8_t v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; 
v___x_3372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3372_, 0, v___x_3371_);
v___x_3373_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3373_, 0, v___x_3368_);
lean_ctor_set(v___x_3373_, 1, v___x_3369_);
lean_ctor_set(v___x_3373_, 2, v___x_3369_);
lean_ctor_set(v___x_3373_, 3, v___x_3369_);
lean_ctor_set(v___x_3373_, 4, v___x_3372_);
lean_ctor_set(v___x_3373_, 5, v___x_3369_);
v___x_3374_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_addExactSuggestion___closed__0));
v___x_3375_ = 4;
v___x_3376_ = l_Lean_MessageData_nil;
v___x_3377_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_ref_3332_, v___x_3373_, v_origSpan_x3f_3336_, v___x_3374_, v___x_3369_, v___x_3375_, v___x_3376_, v___y_3364_, v___y_3365_);
return v___x_3377_;
}
}
}
}
}
}
else
{
lean_object* v_a_3424_; lean_object* v___x_3426_; uint8_t v_isShared_3427_; uint8_t v_isSharedCheck_3431_; 
lean_dec(v_checkState_x3f_3337_);
lean_dec(v_origSpan_x3f_3336_);
lean_dec(v_type_x3f_3334_);
lean_dec(v_ref_3332_);
v_a_3424_ = lean_ctor_get(v___x_3349_, 0);
v_isSharedCheck_3431_ = !lean_is_exclusive(v___x_3349_);
if (v_isSharedCheck_3431_ == 0)
{
v___x_3426_ = v___x_3349_;
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
else
{
lean_inc(v_a_3424_);
lean_dec(v___x_3349_);
v___x_3426_ = lean_box(0);
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
v_resetjp_3425_:
{
lean_object* v___x_3429_; 
if (v_isShared_3427_ == 0)
{
v___x_3429_ = v___x_3426_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3430_; 
v_reuseFailAlloc_3430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3430_, 0, v_a_3424_);
v___x_3429_ = v_reuseFailAlloc_3430_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
return v___x_3429_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion___boxed(lean_object* v_ref_3432_, lean_object* v_rules_3433_, lean_object* v_type_x3f_3434_, lean_object* v_loc_x3f_3435_, lean_object* v_origSpan_x3f_3436_, lean_object* v_checkState_x3f_3437_, lean_object* v_a_3438_, lean_object* v_a_3439_, lean_object* v_a_3440_, lean_object* v_a_3441_, lean_object* v_a_3442_, lean_object* v_a_3443_, lean_object* v_a_3444_, lean_object* v_a_3445_, lean_object* v_a_3446_){
_start:
{
lean_object* v_res_3447_; 
v_res_3447_ = l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion(v_ref_3432_, v_rules_3433_, v_type_x3f_3434_, v_loc_x3f_3435_, v_origSpan_x3f_3436_, v_checkState_x3f_3437_, v_a_3438_, v_a_3439_, v_a_3440_, v_a_3441_, v_a_3442_, v_a_3443_, v_a_3444_, v_a_3445_);
lean_dec(v_a_3445_);
lean_dec_ref(v_a_3444_);
lean_dec(v_a_3443_);
lean_dec_ref(v_a_3442_);
lean_dec(v_a_3441_);
lean_dec_ref(v_a_3440_);
lean_dec(v_a_3439_);
lean_dec_ref(v_a_3438_);
return v_res_3447_;
}
}
lean_object* runtime_initialize_Lean_Server_CodeActions(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_ExposeNames(uint8_t builtin);
lean_object* runtime_initialize_Lean_Widget_UserWidget(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Server_CodeActions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_ExposeNames(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Widget_UserWidget(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_tryThisDiffWidget___regBuiltin_Lean_Meta_Hint_tryThisDiffWidget__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Hint_textInsertionWidget___regBuiltin_Lean_Meta_Hint_textInsertionWidget__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider___regBuiltin___private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Widget_UserWidget(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Widget_UserWidget(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_CodeActions(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_ExposeNames(uint8_t builtin);
lean_object* initialize_Lean_Widget_UserWidget(uint8_t builtin);
lean_object* initialize_Lean_Widget_UserWidget(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_CodeActions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_ExposeNames(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Widget_UserWidget(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Widget_UserWidget(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_TryThis(builtin);
}
#ifdef __cplusplus
}
#endif
