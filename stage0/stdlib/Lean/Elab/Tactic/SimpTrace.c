// Lean compiler output
// Module: Lean.Elab.Tactic.SimpTrace
// Imports: public import Lean.Elab.ElabRules public import Lean.Elab.Tactic.Simp public import Lean.Meta.Tactic.TryThis public import Lean.LibrarySuggestions.Basic
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
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_mkCIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setArgs(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_simpLocation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_expandLocation(lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_Tactic_Simp_DischargeWrapper_with___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_unsetTrailing(lean_object*);
lean_object* l_Lean_Elab_Tactic_mkSimpOnly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpTheorems___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkSimpContext(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Context_setAutoUnfold(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LibrarySuggestions_select(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Elab_Tactic_elabSimpConfig___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withSimpDiagnostics___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_dsimpGoal(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getNondepPropHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getFVarIds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkSimpContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray3___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "configItem"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "posConfigItem"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "suggestions"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(64, 179, 144, 54, 113, 159, 205, 78)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "locals"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(87, 30, 159, 74, 102, 214, 91, 131)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__8_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkSimpCallStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkSimpCallStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpLemma"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__1_value_aux_2),((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(38, 215, 101, 250, 181, 108, 118, 102)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__2_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__5___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8_spec__12___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__5(lean_object*, lean_object*);
static const lean_array_object l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expected identifier"};
static const lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__1_value;
static const lean_ctor_object l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__1_value)}};
static const lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__2_value;
static lean_once_cell_t l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1___closed__0 = (const lean_object*)&l_Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Try this:"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_getSimpTheorems___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__6_value;
static const lean_array_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "only"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "simpAutoUnfold"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "simp!"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__9_value)}};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simpArgs"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__13_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "simpTraceArgsRest"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__14_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalSimpTrace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpTrace"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalSimpTrace___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalSimpTrace___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalSimpTrace___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalSimpTrace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___closed__0_value),LEAN_SCALAR_PTR_LITERAL(229, 96, 113, 105, 41, 106, 130, 154)}};
static const lean_object* l_Lean_Elab_Tactic_evalSimpTrace___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpTrace___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "evalSimpTrace"};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___closed__1_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 84, 117, 30, 74, 67, 74, 164)}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(40) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__0_value),((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(45) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__3_value),((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__4_value),((lean_object*)(((size_t)(45) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "simpAll"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simp_all"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "simpAllAutoUnfold"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simp_all!"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__7_value)}};
static const lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "dsimpArgs"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "simpAllTraceArgsRest"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalSimpAllTrace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "simpAllTrace"};
static const lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpAllTrace___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalSimpAllTrace___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalSimpAllTrace___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSimpAllTrace___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalSimpAllTrace___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSimpAllTrace___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalSimpAllTrace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSimpAllTrace___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalSimpAllTrace___closed__0_value),LEAN_SCALAR_PTR_LITERAL(126, 138, 193, 72, 181, 178, 244, 77)}};
static const lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalSimpAllTrace___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "evalSimpAllTrace"};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___closed__1_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(138, 255, 119, 44, 227, 45, 220, 224)}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(58) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__0_value),((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__3_value),((lean_object*)(((size_t)(35) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__4_value),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_dsimpLocation_x27_go___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_dsimpLocation_x27_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_dsimpLocation_x27_go(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_dsimpLocation_x27_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_dsimpLocation_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_dsimpLocation_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_dsimpLocation_x27___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_dsimpLocation_x27___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_dsimpLocation_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_dsimpLocation_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dsimp"};
static const lean_object* l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "dsimpAutoUnfold"};
static const lean_object* l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "dsimp!"};
static const lean_object* l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "dsimpTraceArgsRest"};
static const lean_object* l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalDSimpTrace___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalDSimpTrace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "dsimpTrace"};
static const lean_object* l_Lean_Elab_Tactic_evalDSimpTrace___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalDSimpTrace___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalDSimpTrace___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalDSimpTrace___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalDSimpTrace___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalDSimpTrace___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalDSimpTrace___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalDSimpTrace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalDSimpTrace___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalDSimpTrace___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 29, 147, 115, 237, 79, 62, 93)}};
static const lean_object* l_Lean_Elab_Tactic_evalDSimpTrace___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalDSimpTrace___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalDSimpTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalDSimpTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "evalDSimpTrace"};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___closed__1_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 218, 74, 127, 38, 51, 185, 136)}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(82) << 1) | 1)),((lean_object*)(((size_t)(29) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(95) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__0_value),((lean_object*)(((size_t)(29) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(82) << 1) | 1)),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(82) << 1) | 1)),((lean_object*)(((size_t)(47) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__3_value),((lean_object*)(((size_t)(33) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__4_value),((lean_object*)(((size_t)(47) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0(lean_object* v_as_12_, size_t v_i_13_, size_t v_stop_14_, lean_object* v_b_15_){
_start:
{
lean_object* v___y_17_; uint8_t v___x_21_; 
v___x_21_ = lean_usize_dec_eq(v_i_13_, v_stop_14_);
if (v___x_21_ == 0)
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_22_ = lean_unsigned_to_nat(0u);
v___x_23_ = lean_array_uget_borrowed(v_as_12_, v_i_13_);
v___x_24_ = l_Lean_Syntax_getArg(v___x_23_, v___x_22_);
lean_inc(v___x_23_);
v___x_25_ = l_Lean_Syntax_getKind(v___x_23_);
if (lean_obj_tag(v___x_25_) == 1)
{
lean_object* v_pre_26_; 
v_pre_26_ = lean_ctor_get(v___x_25_, 0);
lean_inc(v_pre_26_);
if (lean_obj_tag(v_pre_26_) == 1)
{
lean_object* v_pre_27_; 
v_pre_27_ = lean_ctor_get(v_pre_26_, 0);
lean_inc(v_pre_27_);
if (lean_obj_tag(v_pre_27_) == 1)
{
lean_object* v_pre_28_; 
v_pre_28_ = lean_ctor_get(v_pre_27_, 0);
lean_inc(v_pre_28_);
if (lean_obj_tag(v_pre_28_) == 1)
{
lean_object* v_pre_29_; 
v_pre_29_ = lean_ctor_get(v_pre_28_, 0);
if (lean_obj_tag(v_pre_29_) == 0)
{
lean_object* v_str_30_; lean_object* v_str_31_; lean_object* v_str_32_; lean_object* v_str_33_; lean_object* v___x_34_; uint8_t v___x_35_; 
v_str_30_ = lean_ctor_get(v___x_25_, 1);
lean_inc_ref(v_str_30_);
lean_dec_ref_known(v___x_25_, 2);
v_str_31_ = lean_ctor_get(v_pre_26_, 1);
lean_inc_ref(v_str_31_);
lean_dec_ref_known(v_pre_26_, 2);
v_str_32_ = lean_ctor_get(v_pre_27_, 1);
lean_inc_ref(v_str_32_);
lean_dec_ref_known(v_pre_27_, 2);
v_str_33_ = lean_ctor_get(v_pre_28_, 1);
lean_inc_ref(v_str_33_);
lean_dec_ref_known(v_pre_28_, 2);
v___x_34_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__0));
v___x_35_ = lean_string_dec_eq(v_str_33_, v___x_34_);
lean_dec_ref(v_str_33_);
if (v___x_35_ == 0)
{
lean_object* v___x_36_; 
lean_dec_ref(v_str_32_);
lean_dec_ref(v_str_31_);
lean_dec_ref(v_str_30_);
lean_dec(v___x_24_);
lean_inc(v___x_23_);
v___x_36_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_36_;
goto v___jp_16_;
}
else
{
lean_object* v___x_37_; uint8_t v___x_38_; 
v___x_37_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__1));
v___x_38_ = lean_string_dec_eq(v_str_32_, v___x_37_);
lean_dec_ref(v_str_32_);
if (v___x_38_ == 0)
{
lean_object* v___x_39_; 
lean_dec_ref(v_str_31_);
lean_dec_ref(v_str_30_);
lean_dec(v___x_24_);
lean_inc(v___x_23_);
v___x_39_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_39_;
goto v___jp_16_;
}
else
{
lean_object* v___x_40_; uint8_t v___x_41_; 
v___x_40_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__2));
v___x_41_ = lean_string_dec_eq(v_str_31_, v___x_40_);
lean_dec_ref(v_str_31_);
if (v___x_41_ == 0)
{
lean_object* v___x_42_; 
lean_dec_ref(v_str_30_);
lean_dec(v___x_24_);
lean_inc(v___x_23_);
v___x_42_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_42_;
goto v___jp_16_;
}
else
{
lean_object* v___x_43_; uint8_t v___x_44_; 
v___x_43_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__3));
v___x_44_ = lean_string_dec_eq(v_str_30_, v___x_43_);
lean_dec_ref(v_str_30_);
if (v___x_44_ == 0)
{
lean_object* v___x_45_; 
lean_dec(v___x_24_);
lean_inc(v___x_23_);
v___x_45_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_45_;
goto v___jp_16_;
}
else
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_unsigned_to_nat(1u);
v___x_47_ = l_Lean_Syntax_getArg(v___x_24_, v___x_46_);
v___x_48_ = l_Lean_Syntax_getKind(v___x_24_);
if (lean_obj_tag(v___x_48_) == 1)
{
lean_object* v_pre_49_; 
v_pre_49_ = lean_ctor_get(v___x_48_, 0);
lean_inc(v_pre_49_);
if (lean_obj_tag(v_pre_49_) == 1)
{
lean_object* v_pre_50_; 
v_pre_50_ = lean_ctor_get(v_pre_49_, 0);
lean_inc(v_pre_50_);
if (lean_obj_tag(v_pre_50_) == 1)
{
lean_object* v_pre_51_; 
v_pre_51_ = lean_ctor_get(v_pre_50_, 0);
lean_inc(v_pre_51_);
if (lean_obj_tag(v_pre_51_) == 1)
{
lean_object* v_pre_52_; 
v_pre_52_ = lean_ctor_get(v_pre_51_, 0);
if (lean_obj_tag(v_pre_52_) == 0)
{
lean_object* v_str_53_; lean_object* v_str_54_; lean_object* v_str_55_; lean_object* v_str_56_; uint8_t v___x_57_; 
v_str_53_ = lean_ctor_get(v___x_48_, 1);
lean_inc_ref(v_str_53_);
lean_dec_ref_known(v___x_48_, 2);
v_str_54_ = lean_ctor_get(v_pre_49_, 1);
lean_inc_ref(v_str_54_);
lean_dec_ref_known(v_pre_49_, 2);
v_str_55_ = lean_ctor_get(v_pre_50_, 1);
lean_inc_ref(v_str_55_);
lean_dec_ref_known(v_pre_50_, 2);
v_str_56_ = lean_ctor_get(v_pre_51_, 1);
lean_inc_ref(v_str_56_);
lean_dec_ref_known(v_pre_51_, 2);
v___x_57_ = lean_string_dec_eq(v_str_56_, v___x_34_);
lean_dec_ref(v_str_56_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; 
lean_dec_ref(v_str_55_);
lean_dec_ref(v_str_54_);
lean_dec_ref(v_str_53_);
lean_dec(v___x_47_);
lean_inc(v___x_23_);
v___x_58_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_58_;
goto v___jp_16_;
}
else
{
uint8_t v___x_59_; 
v___x_59_ = lean_string_dec_eq(v_str_55_, v___x_37_);
lean_dec_ref(v_str_55_);
if (v___x_59_ == 0)
{
lean_object* v___x_60_; 
lean_dec_ref(v_str_54_);
lean_dec_ref(v_str_53_);
lean_dec(v___x_47_);
lean_inc(v___x_23_);
v___x_60_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_60_;
goto v___jp_16_;
}
else
{
uint8_t v___x_61_; 
v___x_61_ = lean_string_dec_eq(v_str_54_, v___x_40_);
lean_dec_ref(v_str_54_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; 
lean_dec_ref(v_str_53_);
lean_dec(v___x_47_);
lean_inc(v___x_23_);
v___x_62_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_62_;
goto v___jp_16_;
}
else
{
lean_object* v___x_63_; uint8_t v___x_64_; 
v___x_63_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__4));
v___x_64_ = lean_string_dec_eq(v_str_53_, v___x_63_);
lean_dec_ref(v_str_53_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; 
lean_dec(v___x_47_);
lean_inc(v___x_23_);
v___x_65_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_65_;
goto v___jp_16_;
}
else
{
lean_object* v___x_66_; lean_object* v_id_67_; lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_66_ = l_Lean_Syntax_getId(v___x_47_);
lean_dec(v___x_47_);
v_id_67_ = l_Lean_Name_eraseMacroScopes(v___x_66_);
lean_dec(v___x_66_);
v___x_68_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__6));
v___x_69_ = lean_name_eq(v_id_67_, v___x_68_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; uint8_t v___x_71_; 
v___x_70_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__8));
v___x_71_ = lean_name_eq(v_id_67_, v___x_70_);
lean_dec(v_id_67_);
if (v___x_71_ == 0)
{
lean_object* v___x_72_; 
lean_inc(v___x_23_);
v___x_72_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_72_;
goto v___jp_16_;
}
else
{
v___y_17_ = v_b_15_;
goto v___jp_16_;
}
}
else
{
lean_dec(v_id_67_);
v___y_17_ = v_b_15_;
goto v___jp_16_;
}
}
}
}
}
}
else
{
lean_object* v___x_73_; 
lean_dec_ref_known(v_pre_51_, 2);
lean_dec_ref_known(v_pre_50_, 2);
lean_dec_ref_known(v_pre_49_, 2);
lean_dec_ref_known(v___x_48_, 2);
lean_dec(v___x_47_);
lean_inc(v___x_23_);
v___x_73_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_73_;
goto v___jp_16_;
}
}
else
{
lean_object* v___x_74_; 
lean_dec_ref_known(v_pre_50_, 2);
lean_dec(v_pre_51_);
lean_dec_ref_known(v_pre_49_, 2);
lean_dec_ref_known(v___x_48_, 2);
lean_dec(v___x_47_);
lean_inc(v___x_23_);
v___x_74_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_74_;
goto v___jp_16_;
}
}
else
{
lean_object* v___x_75_; 
lean_dec_ref_known(v_pre_49_, 2);
lean_dec(v_pre_50_);
lean_dec_ref_known(v___x_48_, 2);
lean_dec(v___x_47_);
lean_inc(v___x_23_);
v___x_75_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_75_;
goto v___jp_16_;
}
}
else
{
lean_object* v___x_76_; 
lean_dec_ref_known(v___x_48_, 2);
lean_dec(v_pre_49_);
lean_dec(v___x_47_);
lean_inc(v___x_23_);
v___x_76_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_76_;
goto v___jp_16_;
}
}
else
{
lean_object* v___x_77_; 
lean_dec(v___x_48_);
lean_dec(v___x_47_);
lean_inc(v___x_23_);
v___x_77_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_77_;
goto v___jp_16_;
}
}
}
}
}
}
else
{
lean_object* v___x_78_; 
lean_dec_ref_known(v_pre_28_, 2);
lean_dec_ref_known(v_pre_27_, 2);
lean_dec_ref_known(v_pre_26_, 2);
lean_dec_ref_known(v___x_25_, 2);
lean_dec(v___x_24_);
lean_inc(v___x_23_);
v___x_78_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_78_;
goto v___jp_16_;
}
}
else
{
lean_object* v___x_79_; 
lean_dec(v_pre_28_);
lean_dec_ref_known(v_pre_27_, 2);
lean_dec_ref_known(v_pre_26_, 2);
lean_dec_ref_known(v___x_25_, 2);
lean_dec(v___x_24_);
lean_inc(v___x_23_);
v___x_79_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_79_;
goto v___jp_16_;
}
}
else
{
lean_object* v___x_80_; 
lean_dec_ref_known(v_pre_26_, 2);
lean_dec(v_pre_27_);
lean_dec_ref_known(v___x_25_, 2);
lean_dec(v___x_24_);
lean_inc(v___x_23_);
v___x_80_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_80_;
goto v___jp_16_;
}
}
else
{
lean_object* v___x_81_; 
lean_dec(v_pre_26_);
lean_dec_ref_known(v___x_25_, 2);
lean_dec(v___x_24_);
lean_inc(v___x_23_);
v___x_81_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_81_;
goto v___jp_16_;
}
}
else
{
lean_object* v___x_82_; 
lean_dec(v___x_25_);
lean_dec(v___x_24_);
lean_inc(v___x_23_);
v___x_82_ = lean_array_push(v_b_15_, v___x_23_);
v___y_17_ = v___x_82_;
goto v___jp_16_;
}
}
else
{
return v_b_15_;
}
v___jp_16_:
{
size_t v___x_18_; size_t v___x_19_; 
v___x_18_ = ((size_t)1ULL);
v___x_19_ = lean_usize_add(v_i_13_, v___x_18_);
v_i_13_ = v___x_19_;
v_b_15_ = v___y_17_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___boxed(lean_object* v_as_83_, lean_object* v_i_84_, lean_object* v_stop_85_, lean_object* v_b_86_){
_start:
{
size_t v_i_boxed_87_; size_t v_stop_boxed_88_; lean_object* v_res_89_; 
v_i_boxed_87_ = lean_unbox_usize(v_i_84_);
lean_dec(v_i_84_);
v_stop_boxed_88_ = lean_unbox_usize(v_stop_85_);
lean_dec(v_stop_85_);
v_res_89_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0(v_as_83_, v_i_boxed_87_, v_stop_boxed_88_, v_b_86_);
lean_dec_ref(v_as_83_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___redArg(lean_object* v_cfg_92_){
_start:
{
lean_object* v___x_94_; lean_object* v_nullNode_95_; lean_object* v___y_97_; lean_object* v_configItems_101_; lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_94_ = lean_unsigned_to_nat(0u);
v_nullNode_95_ = l_Lean_Syntax_getArg(v_cfg_92_, v___x_94_);
v_configItems_101_ = l_Lean_Syntax_getArgs(v_nullNode_95_);
v___x_102_ = lean_array_get_size(v_configItems_101_);
v___x_103_ = ((lean_object*)(l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___redArg___closed__0));
v___x_104_ = lean_nat_dec_lt(v___x_94_, v___x_102_);
if (v___x_104_ == 0)
{
lean_dec_ref(v_configItems_101_);
v___y_97_ = v___x_103_;
goto v___jp_96_;
}
else
{
size_t v___x_105_; size_t v___x_106_; lean_object* v___x_107_; 
v___x_105_ = ((size_t)0ULL);
v___x_106_ = lean_usize_of_nat(v___x_102_);
v___x_107_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0(v_configItems_101_, v___x_105_, v___x_106_, v___x_103_);
lean_dec_ref(v_configItems_101_);
v___y_97_ = v___x_107_;
goto v___jp_96_;
}
v___jp_96_:
{
lean_object* v_newNullNode_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v_newNullNode_98_ = l_Lean_Syntax_setArgs(v_nullNode_95_, v___y_97_);
v___x_99_ = l_Lean_Syntax_setArg(v_cfg_92_, v___x_94_, v_newNullNode_98_);
v___x_100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
return v___x_100_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___redArg___boxed(lean_object* v_cfg_108_, lean_object* v_a_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___redArg(v_cfg_108_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig(lean_object* v_cfg_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___redArg(v_cfg_111_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___boxed(lean_object* v_cfg_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig(v_cfg_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
lean_dec(v_a_122_);
lean_dec_ref(v_a_121_);
lean_dec(v_a_120_);
lean_dec_ref(v_a_119_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkSimpCallStx(lean_object* v_stx_125_, lean_object* v_usedSimps_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_){
_start:
{
lean_object* v_stx_132_; lean_object* v___x_133_; 
v_stx_132_ = l_Lean_Syntax_unsetTrailing(v_stx_125_);
v___x_133_ = l_Lean_Elab_Tactic_mkSimpOnly(v_stx_132_, v_usedSimps_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v_a_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_141_; 
v_a_134_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_141_ == 0)
{
v___x_136_ = v___x_133_;
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_a_134_);
lean_dec(v___x_133_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_139_; 
if (v_isShared_137_ == 0)
{
v___x_139_ = v___x_136_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_a_134_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
else
{
lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_149_; 
v_a_142_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_149_ == 0)
{
v___x_144_ = v___x_133_;
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_dec(v___x_133_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_147_; 
if (v_isShared_145_ == 0)
{
v___x_147_ = v___x_144_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_a_142_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkSimpCallStx___boxed(lean_object* v_stx_150_, lean_object* v_usedSimps_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = l_Lean_Elab_Tactic_mkSimpCallStx(v_stx_150_, v_usedSimps_151_, v_a_152_, v_a_153_, v_a_154_, v_a_155_);
lean_dec(v_a_155_);
lean_dec_ref(v_a_154_);
lean_dec(v_a_153_);
lean_dec_ref(v_a_152_);
lean_dec_ref(v_usedSimps_151_);
return v_res_157_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_158_ = lean_box(0);
v___x_159_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
lean_ctor_set(v___x_160_, 1, v___x_158_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg(){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg___closed__0);
v___x_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg___boxed(lean_object* v___y_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0(lean_object* v_00_u03b1_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___boxed(lean_object* v_00_u03b1_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0(v_00_u03b1_177_, v___y_178_, v___y_179_, v___y_180_, v___y_181_, v___y_182_, v___y_183_, v___y_184_, v___y_185_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_184_);
lean_dec(v___y_183_);
lean_dec_ref(v___y_182_);
lean_dec(v___y_181_);
lean_dec_ref(v___y_180_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__0(lean_object* v___y_188_, lean_object* v___x_189_, uint8_t v___x_190_, lean_object* v___y_191_, lean_object* v_simprocs_192_, lean_object* v_discharge_x3f_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_){
_start:
{
if (lean_obj_tag(v___y_188_) == 0)
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_203_ = lean_mk_empty_array_with_capacity(v___x_189_);
v___x_204_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_204_, 0, v___x_203_);
lean_ctor_set_uint8(v___x_204_, sizeof(void*)*1, v___x_190_);
v___x_205_ = l_Lean_Elab_Tactic_simpLocation(v___y_191_, v_simprocs_192_, v_discharge_x3f_193_, v___x_204_, v___y_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_);
return v___x_205_;
}
else
{
lean_object* v_val_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v_val_206_ = lean_ctor_get(v___y_188_, 0);
v___x_207_ = l_Lean_Elab_Tactic_expandLocation(v_val_206_);
v___x_208_ = l_Lean_Elab_Tactic_simpLocation(v___y_191_, v_simprocs_192_, v_discharge_x3f_193_, v___x_207_, v___y_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_);
return v___x_208_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__0___boxed(lean_object* v___y_209_, lean_object* v___x_210_, lean_object* v___x_211_, lean_object* v___y_212_, lean_object* v_simprocs_213_, lean_object* v_discharge_x3f_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
uint8_t v___x_37229__boxed_224_; lean_object* v_res_225_; 
v___x_37229__boxed_224_ = lean_unbox(v___x_211_);
v_res_225_ = l_Lean_Elab_Tactic_evalSimpTrace___lam__0(v___y_209_, v___x_210_, v___x_37229__boxed_224_, v___y_212_, v_simprocs_213_, v_discharge_x3f_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
lean_dec(v___y_222_);
lean_dec_ref(v___y_221_);
lean_dec(v___y_220_);
lean_dec_ref(v___y_219_);
lean_dec(v___y_218_);
lean_dec_ref(v___y_217_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec(v___x_210_);
lean_dec(v___y_209_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__1(uint8_t v_suggestions_226_, lean_object* v_x_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = lean_box(v_suggestions_226_);
v___x_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__1___boxed(lean_object* v_suggestions_235_, lean_object* v_x_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_){
_start:
{
uint8_t v_suggestions_boxed_242_; lean_object* v_res_243_; 
v_suggestions_boxed_242_ = lean_unbox(v_suggestions_235_);
v_res_243_ = l_Lean_Elab_Tactic_evalSimpTrace___lam__1(v_suggestions_boxed_242_, v_x_236_, v___y_237_, v___y_238_, v___y_239_, v___y_240_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
lean_dec(v___y_238_);
lean_dec_ref(v___y_237_);
lean_dec(v_x_236_);
return v_res_243_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = l_Array_mkArray0___redArg();
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg(lean_object* v___x_254_, uint8_t v___x_255_, lean_object* v_as_x27_256_, lean_object* v_b_257_, lean_object* v___y_258_){
_start:
{
if (lean_obj_tag(v_as_x27_256_) == 0)
{
lean_object* v___x_260_; 
v___x_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_260_, 0, v_b_257_);
return v___x_260_;
}
else
{
lean_object* v_head_261_; lean_object* v_tail_262_; lean_object* v_ref_263_; uint8_t v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v_head_261_ = lean_ctor_get(v_as_x27_256_, 0);
v_tail_262_ = lean_ctor_get(v_as_x27_256_, 1);
v_ref_263_ = lean_ctor_get(v___y_258_, 2);
v___x_264_ = 0;
v___x_265_ = l_Lean_SourceInfo_fromRef(v_ref_263_, v___x_264_);
v___x_266_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__1));
v___x_267_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_268_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
lean_inc(v___x_265_);
v___x_269_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_269_, 0, v___x_265_);
lean_ctor_set(v___x_269_, 1, v___x_267_);
lean_ctor_set(v___x_269_, 2, v___x_268_);
lean_inc(v_head_261_);
v___x_270_ = l_Lean_mkCIdentFrom(v___x_254_, v_head_261_, v___x_255_);
lean_inc_ref(v___x_269_);
v___x_271_ = l_Lean_Syntax_node3(v___x_265_, v___x_266_, v___x_269_, v___x_269_, v___x_270_);
v___x_272_ = lean_array_push(v_b_257_, v___x_271_);
v_as_x27_256_ = v_tail_262_;
v_b_257_ = v___x_272_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___boxed(lean_object* v___x_274_, lean_object* v___x_275_, lean_object* v_as_x27_276_, lean_object* v_b_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
uint8_t v___x_37327__boxed_280_; lean_object* v_res_281_; 
v___x_37327__boxed_280_ = lean_unbox(v___x_275_);
v_res_281_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg(v___x_274_, v___x_37327__boxed_280_, v_as_x27_276_, v_b_277_, v___y_278_);
lean_dec_ref(v___y_278_);
lean_dec(v_as_x27_276_);
lean_dec(v___x_274_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__5(lean_object* v_x_282_){
_start:
{
if (lean_obj_tag(v_x_282_) == 0)
{
lean_object* v___x_283_; 
v___x_283_ = lean_box(0);
return v___x_283_;
}
else
{
lean_object* v_head_284_; lean_object* v_tail_285_; lean_object* v_fst_286_; uint8_t v___x_287_; 
v_head_284_ = lean_ctor_get(v_x_282_, 0);
v_tail_285_ = lean_ctor_get(v_x_282_, 1);
v_fst_286_ = lean_ctor_get(v_head_284_, 0);
v___x_287_ = l_Lean_isPrivateName(v_fst_286_);
if (v___x_287_ == 0)
{
v_x_282_ = v_tail_285_;
goto _start;
}
else
{
lean_object* v___x_289_; 
lean_inc(v_head_284_);
v___x_289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_289_, 0, v_head_284_);
return v___x_289_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__5___boxed(lean_object* v_x_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__5(v_x_290_);
lean_dec(v_x_290_);
return v_res_291_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8_spec__12(lean_object* v_opts_292_, lean_object* v_opt_293_){
_start:
{
lean_object* v_name_294_; lean_object* v_defValue_295_; lean_object* v_map_296_; lean_object* v___x_297_; 
v_name_294_ = lean_ctor_get(v_opt_293_, 0);
v_defValue_295_ = lean_ctor_get(v_opt_293_, 1);
v_map_296_ = lean_ctor_get(v_opts_292_, 0);
v___x_297_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_296_, v_name_294_);
if (lean_obj_tag(v___x_297_) == 0)
{
uint8_t v___x_298_; 
v___x_298_ = lean_unbox(v_defValue_295_);
return v___x_298_;
}
else
{
lean_object* v_val_299_; 
v_val_299_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_val_299_);
lean_dec_ref_known(v___x_297_, 1);
if (lean_obj_tag(v_val_299_) == 1)
{
uint8_t v_v_300_; 
v_v_300_ = lean_ctor_get_uint8(v_val_299_, 0);
lean_dec_ref_known(v_val_299_, 0);
return v_v_300_;
}
else
{
uint8_t v___x_301_; 
lean_dec(v_val_299_);
v___x_301_ = lean_unbox(v_defValue_295_);
return v___x_301_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8_spec__12___boxed(lean_object* v_opts_302_, lean_object* v_opt_303_){
_start:
{
uint8_t v_res_304_; lean_object* v_r_305_; 
v_res_304_ = l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8_spec__12(v_opts_302_, v_opt_303_);
lean_dec_ref(v_opt_303_);
lean_dec_ref(v_opts_302_);
v_r_305_ = lean_box(v_res_304_);
return v_r_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8___redArg(lean_object* v_opt_306_, lean_object* v___y_307_){
_start:
{
lean_object* v___x_309_; uint8_t v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_309_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_307_);
v___x_310_ = l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8_spec__12(v___x_309_, v_opt_306_);
lean_dec_ref(v___x_309_);
v___x_311_ = lean_box(v___x_310_);
v___x_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8___redArg___boxed(lean_object* v_opt_313_, lean_object* v___y_314_, lean_object* v___y_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8___redArg(v_opt_313_, v___y_314_);
lean_dec_ref(v___y_314_);
lean_dec_ref(v_opt_313_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14_spec__18(lean_object* v_msgData_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_){
_start:
{
lean_object* v___x_323_; lean_object* v_env_324_; uint8_t v___x_325_; lean_object* v_env_326_; lean_object* v___x_327_; lean_object* v_toCold_328_; lean_object* v_mctx_329_; lean_object* v_lctx_330_; lean_object* v_options_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_323_ = lean_st_ref_get(v___y_321_);
v_env_324_ = lean_ctor_get(v___x_323_, 0);
lean_inc_ref(v_env_324_);
lean_dec(v___x_323_);
v___x_325_ = 0;
v_env_326_ = l_Lean_Environment_setRecordingDeps(v_env_324_, v___x_325_);
v___x_327_ = lean_st_ref_get(v___y_319_);
v_toCold_328_ = lean_ctor_get(v___y_320_, 0);
v_mctx_329_ = lean_ctor_get(v___x_327_, 0);
lean_inc_ref(v_mctx_329_);
lean_dec(v___x_327_);
v_lctx_330_ = lean_ctor_get(v___y_318_, 2);
v_options_331_ = lean_ctor_get(v_toCold_328_, 2);
lean_inc_ref(v_options_331_);
lean_inc_ref(v_lctx_330_);
v___x_332_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_332_, 0, v_env_326_);
lean_ctor_set(v___x_332_, 1, v_mctx_329_);
lean_ctor_set(v___x_332_, 2, v_lctx_330_);
lean_ctor_set(v___x_332_, 3, v_options_331_);
v___x_333_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
lean_ctor_set(v___x_333_, 1, v_msgData_317_);
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14_spec__18___boxed(lean_object* v_msgData_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14_spec__18(v_msgData_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_);
lean_dec(v___y_339_);
lean_dec_ref(v___y_338_);
lean_dec(v___y_337_);
lean_dec_ref(v___y_336_);
return v_res_341_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0(uint8_t v___x_349_, lean_object* v_x_350_){
_start:
{
if (lean_obj_tag(v_x_350_) == 1)
{
lean_object* v_pre_351_; 
v_pre_351_ = lean_ctor_get(v_x_350_, 0);
switch(lean_obj_tag(v_pre_351_))
{
case 1:
{
lean_object* v_pre_352_; 
v_pre_352_ = lean_ctor_get(v_pre_351_, 0);
switch(lean_obj_tag(v_pre_352_))
{
case 0:
{
lean_object* v_str_353_; lean_object* v_str_354_; lean_object* v___x_355_; uint8_t v___x_356_; 
v_str_353_ = lean_ctor_get(v_x_350_, 1);
v_str_354_ = lean_ctor_get(v_pre_351_, 1);
v___x_355_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__0));
v___x_356_ = lean_string_dec_eq(v_str_354_, v___x_355_);
if (v___x_356_ == 0)
{
lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_357_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__2));
v___x_358_ = lean_string_dec_eq(v_str_354_, v___x_357_);
if (v___x_358_ == 0)
{
return v___x_358_;
}
else
{
lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_359_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__1));
v___x_360_ = lean_string_dec_eq(v_str_353_, v___x_359_);
return v___x_360_;
}
}
else
{
lean_object* v___x_361_; uint8_t v___x_362_; 
v___x_361_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__2));
v___x_362_ = lean_string_dec_eq(v_str_353_, v___x_361_);
return v___x_362_;
}
}
case 1:
{
lean_object* v_pre_363_; 
v_pre_363_ = lean_ctor_get(v_pre_352_, 0);
if (lean_obj_tag(v_pre_363_) == 0)
{
lean_object* v_str_364_; lean_object* v_str_365_; lean_object* v_str_366_; lean_object* v___x_367_; uint8_t v___x_368_; 
v_str_364_ = lean_ctor_get(v_x_350_, 1);
v_str_365_ = lean_ctor_get(v_pre_351_, 1);
v_str_366_ = lean_ctor_get(v_pre_352_, 1);
v___x_367_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__3));
v___x_368_ = lean_string_dec_eq(v_str_366_, v___x_367_);
if (v___x_368_ == 0)
{
return v___x_368_;
}
else
{
lean_object* v___x_369_; uint8_t v___x_370_; 
v___x_369_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__4));
v___x_370_ = lean_string_dec_eq(v_str_365_, v___x_369_);
if (v___x_370_ == 0)
{
return v___x_370_;
}
else
{
lean_object* v___x_371_; uint8_t v___x_372_; 
v___x_371_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__5));
v___x_372_ = lean_string_dec_eq(v_str_364_, v___x_371_);
return v___x_372_;
}
}
}
else
{
return v___x_349_;
}
}
default: 
{
return v___x_349_;
}
}
}
case 0:
{
lean_object* v_str_373_; lean_object* v___x_374_; uint8_t v___x_375_; 
v_str_373_ = lean_ctor_get(v_x_350_, 1);
v___x_374_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___closed__6));
v___x_375_ = lean_string_dec_eq(v_str_373_, v___x_374_);
return v___x_375_;
}
default: 
{
return v___x_349_;
}
}
}
else
{
return v___x_349_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0___boxed(lean_object* v___x_376_, lean_object* v_x_377_){
_start:
{
uint8_t v___x_37455__boxed_378_; uint8_t v_res_379_; lean_object* v_r_380_; 
v___x_37455__boxed_378_ = lean_unbox(v___x_376_);
v_res_379_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___lam__0(v___x_37455__boxed_378_, v_x_377_);
lean_dec(v_x_377_);
v_r_380_ = lean_box(v_res_379_);
return v_r_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg(lean_object* v_ref_385_, lean_object* v_msgData_386_, uint8_t v_severity_387_, uint8_t v_isSilent_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
uint8_t v___y_395_; lean_object* v___y_396_; uint8_t v___y_397_; lean_object* v___y_398_; lean_object* v___y_399_; lean_object* v___y_400_; lean_object* v___y_401_; lean_object* v_toCold_402_; lean_object* v___y_403_; lean_object* v___y_432_; lean_object* v___y_433_; uint8_t v___y_434_; uint8_t v___y_435_; lean_object* v___y_436_; uint8_t v___y_437_; lean_object* v___y_438_; lean_object* v___y_439_; uint8_t v___y_459_; lean_object* v___y_460_; lean_object* v___y_461_; uint8_t v___y_462_; lean_object* v___y_463_; uint8_t v___y_464_; lean_object* v___y_465_; uint8_t v___y_469_; uint8_t v___x_486_; uint8_t v___x_487_; 
v___x_486_ = 2;
v___x_487_ = l_Lean_instBEqMessageSeverity_beq(v_severity_387_, v___x_486_);
if (v___x_487_ == 0)
{
goto v___jp_479_;
}
else
{
uint8_t v___x_488_; 
lean_inc_ref(v_msgData_386_);
v___x_488_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_386_);
if (v___x_488_ == 0)
{
goto v___jp_479_;
}
else
{
lean_object* v___x_489_; lean_object* v___x_490_; 
lean_dec_ref(v_msgData_386_);
v___x_489_ = lean_box(0);
v___x_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
return v___x_490_;
}
}
v___jp_394_:
{
lean_object* v_currNamespace_404_; lean_object* v_openDecls_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v_env_410_; lean_object* v_nextMacroScope_411_; lean_object* v_ngen_412_; lean_object* v_auxDeclNGen_413_; lean_object* v_traceState_414_; lean_object* v_cache_415_; lean_object* v_recordedDeps_416_; lean_object* v_messages_417_; lean_object* v_infoState_418_; lean_object* v_snapshotTasks_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_430_; 
v_currNamespace_404_ = lean_ctor_get(v_toCold_402_, 4);
v_openDecls_405_ = lean_ctor_get(v_toCold_402_, 5);
lean_inc(v_openDecls_405_);
lean_inc(v_currNamespace_404_);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v_currNamespace_404_);
lean_ctor_set(v___x_406_, 1, v_openDecls_405_);
v___x_407_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_407_, 0, v___x_406_);
lean_ctor_set(v___x_407_, 1, v___y_398_);
lean_inc_ref(v___y_399_);
lean_inc_ref(v___y_396_);
v___x_408_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_408_, 0, v___y_396_);
lean_ctor_set(v___x_408_, 1, v___y_401_);
lean_ctor_set(v___x_408_, 2, v___y_400_);
lean_ctor_set(v___x_408_, 3, v___y_399_);
lean_ctor_set(v___x_408_, 4, v___x_407_);
lean_ctor_set_uint8(v___x_408_, sizeof(void*)*5, v___y_395_);
lean_ctor_set_uint8(v___x_408_, sizeof(void*)*5 + 1, v___y_397_);
lean_ctor_set_uint8(v___x_408_, sizeof(void*)*5 + 2, v_isSilent_388_);
v___x_409_ = lean_st_ref_take(v___y_403_);
v_env_410_ = lean_ctor_get(v___x_409_, 0);
v_nextMacroScope_411_ = lean_ctor_get(v___x_409_, 1);
v_ngen_412_ = lean_ctor_get(v___x_409_, 2);
v_auxDeclNGen_413_ = lean_ctor_get(v___x_409_, 3);
v_traceState_414_ = lean_ctor_get(v___x_409_, 4);
v_cache_415_ = lean_ctor_get(v___x_409_, 5);
v_recordedDeps_416_ = lean_ctor_get(v___x_409_, 6);
v_messages_417_ = lean_ctor_get(v___x_409_, 7);
v_infoState_418_ = lean_ctor_get(v___x_409_, 8);
v_snapshotTasks_419_ = lean_ctor_get(v___x_409_, 9);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_430_ == 0)
{
v___x_421_ = v___x_409_;
v_isShared_422_ = v_isSharedCheck_430_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_snapshotTasks_419_);
lean_inc(v_infoState_418_);
lean_inc(v_messages_417_);
lean_inc(v_recordedDeps_416_);
lean_inc(v_cache_415_);
lean_inc(v_traceState_414_);
lean_inc(v_auxDeclNGen_413_);
lean_inc(v_ngen_412_);
lean_inc(v_nextMacroScope_411_);
lean_inc(v_env_410_);
lean_dec(v___x_409_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_430_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_426_; 
v___x_423_ = lean_box(0);
v___x_424_ = l_Lean_MessageLog_add(v___x_408_, v_messages_417_);
if (v_isShared_422_ == 0)
{
lean_ctor_set(v___x_421_, 7, v___x_424_);
v___x_426_ = v___x_421_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_env_410_);
lean_ctor_set(v_reuseFailAlloc_429_, 1, v_nextMacroScope_411_);
lean_ctor_set(v_reuseFailAlloc_429_, 2, v_ngen_412_);
lean_ctor_set(v_reuseFailAlloc_429_, 3, v_auxDeclNGen_413_);
lean_ctor_set(v_reuseFailAlloc_429_, 4, v_traceState_414_);
lean_ctor_set(v_reuseFailAlloc_429_, 5, v_cache_415_);
lean_ctor_set(v_reuseFailAlloc_429_, 6, v_recordedDeps_416_);
lean_ctor_set(v_reuseFailAlloc_429_, 7, v___x_424_);
lean_ctor_set(v_reuseFailAlloc_429_, 8, v_infoState_418_);
lean_ctor_set(v_reuseFailAlloc_429_, 9, v_snapshotTasks_419_);
v___x_426_ = v_reuseFailAlloc_429_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_427_ = lean_st_ref_put(v___y_403_, v___x_426_);
v___x_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_428_, 0, v___x_423_);
return v___x_428_;
}
}
}
v___jp_431_:
{
lean_object* v_fileName_440_; lean_object* v_fileMap_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_457_; 
v_fileName_440_ = lean_ctor_get(v___y_436_, 0);
v_fileMap_441_ = lean_ctor_get(v___y_436_, 1);
v___x_442_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_386_);
v___x_443_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14_spec__18(v___x_442_, v___y_389_, v___y_390_, v___y_391_, v___y_392_);
v_a_444_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_457_ == 0)
{
v___x_446_ = v___x_443_;
v_isShared_447_ = v_isSharedCheck_457_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_443_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_457_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
lean_inc_ref_n(v_fileMap_441_, 2);
v___x_448_ = l_Lean_FileMap_toPosition(v_fileMap_441_, v___y_438_);
lean_dec(v___y_438_);
v___x_449_ = l_Lean_FileMap_toPosition(v_fileMap_441_, v___y_439_);
lean_dec(v___y_439_);
v___x_450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
v___x_451_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___closed__0));
if (v___y_437_ == 0)
{
lean_del_object(v___x_446_);
v___y_395_ = v___y_434_;
v___y_396_ = v_fileName_440_;
v___y_397_ = v___y_435_;
v___y_398_ = v_a_444_;
v___y_399_ = v___x_451_;
v___y_400_ = v___x_450_;
v___y_401_ = v___x_448_;
v_toCold_402_ = v___y_432_;
v___y_403_ = v___y_392_;
goto v___jp_394_;
}
else
{
uint8_t v___x_452_; 
lean_inc(v_a_444_);
lean_inc_ref(v___y_433_);
v___x_452_ = l_Lean_MessageData_hasTag(v___y_433_, v_a_444_);
if (v___x_452_ == 0)
{
lean_object* v___x_453_; lean_object* v___x_455_; 
lean_dec_ref_known(v___x_450_, 1);
lean_dec_ref(v___x_448_);
lean_dec(v_a_444_);
v___x_453_ = lean_box(0);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 0, v___x_453_);
v___x_455_ = v___x_446_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v___x_453_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
else
{
lean_del_object(v___x_446_);
v___y_395_ = v___y_434_;
v___y_396_ = v_fileName_440_;
v___y_397_ = v___y_435_;
v___y_398_ = v_a_444_;
v___y_399_ = v___x_451_;
v___y_400_ = v___x_450_;
v___y_401_ = v___x_448_;
v_toCold_402_ = v___y_432_;
v___y_403_ = v___y_392_;
goto v___jp_394_;
}
}
}
}
v___jp_458_:
{
lean_object* v___x_466_; 
v___x_466_ = l_Lean_Syntax_getTailPos_x3f(v___y_460_, v___y_459_);
lean_dec(v___y_460_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_inc(v___y_465_);
v___y_432_ = v___y_461_;
v___y_433_ = v___y_463_;
v___y_434_ = v___y_459_;
v___y_435_ = v___y_464_;
v___y_436_ = v___y_461_;
v___y_437_ = v___y_462_;
v___y_438_ = v___y_465_;
v___y_439_ = v___y_465_;
goto v___jp_431_;
}
else
{
lean_object* v_val_467_; 
v_val_467_ = lean_ctor_get(v___x_466_, 0);
lean_inc(v_val_467_);
lean_dec_ref_known(v___x_466_, 1);
v___y_432_ = v___y_461_;
v___y_433_ = v___y_463_;
v___y_434_ = v___y_459_;
v___y_435_ = v___y_464_;
v___y_436_ = v___y_461_;
v___y_437_ = v___y_462_;
v___y_438_ = v___y_465_;
v___y_439_ = v_val_467_;
goto v___jp_431_;
}
}
v___jp_468_:
{
lean_object* v_toCold_470_; lean_object* v_ref_471_; uint8_t v_suppressElabErrors_472_; lean_object* v_ref_473_; uint8_t v___x_474_; lean_object* v___f_475_; lean_object* v___x_476_; 
v_toCold_470_ = lean_ctor_get(v___y_391_, 0);
v_ref_471_ = lean_ctor_get(v___y_391_, 2);
v_suppressElabErrors_472_ = lean_ctor_get_uint8(v___y_391_, sizeof(void*)*3 + 2);
v_ref_473_ = l_Lean_replaceRef(v_ref_385_, v_ref_471_);
v___x_474_ = 0;
v___f_475_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___closed__1));
v___x_476_ = l_Lean_Syntax_getPos_x3f(v_ref_473_, v___x_474_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v___x_477_; 
v___x_477_ = lean_unsigned_to_nat(0u);
v___y_459_ = v___x_474_;
v___y_460_ = v_ref_473_;
v___y_461_ = v_toCold_470_;
v___y_462_ = v_suppressElabErrors_472_;
v___y_463_ = v___f_475_;
v___y_464_ = v___y_469_;
v___y_465_ = v___x_477_;
goto v___jp_458_;
}
else
{
lean_object* v_val_478_; 
v_val_478_ = lean_ctor_get(v___x_476_, 0);
lean_inc(v_val_478_);
lean_dec_ref_known(v___x_476_, 1);
v___y_459_ = v___x_474_;
v___y_460_ = v_ref_473_;
v___y_461_ = v_toCold_470_;
v___y_462_ = v_suppressElabErrors_472_;
v___y_463_ = v___f_475_;
v___y_464_ = v___y_469_;
v___y_465_ = v_val_478_;
goto v___jp_458_;
}
}
v___jp_479_:
{
uint8_t v___x_480_; uint8_t v___x_481_; 
v___x_480_ = 1;
v___x_481_ = l_Lean_instBEqMessageSeverity_beq(v_severity_387_, v___x_480_);
if (v___x_481_ == 0)
{
v___y_469_ = v_severity_387_;
goto v___jp_468_;
}
else
{
lean_object* v___x_482_; lean_object* v___x_483_; uint8_t v___x_484_; 
v___x_482_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_391_);
v___x_483_ = l_Lean_warningAsError;
v___x_484_ = l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8_spec__12(v___x_482_, v___x_483_);
lean_dec_ref(v___x_482_);
if (v___x_484_ == 0)
{
v___y_469_ = v_severity_387_;
goto v___jp_468_;
}
else
{
uint8_t v___x_485_; 
v___x_485_ = 2;
v___y_469_ = v___x_485_;
goto v___jp_468_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg___boxed(lean_object* v_ref_491_, lean_object* v_msgData_492_, lean_object* v_severity_493_, lean_object* v_isSilent_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_){
_start:
{
uint8_t v_severity_boxed_500_; uint8_t v_isSilent_boxed_501_; lean_object* v_res_502_; 
v_severity_boxed_500_ = lean_unbox(v_severity_493_);
v_isSilent_boxed_501_ = lean_unbox(v_isSilent_494_);
v_res_502_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg(v_ref_491_, v_msgData_492_, v_severity_boxed_500_, v_isSilent_boxed_501_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
lean_dec(v___y_498_);
lean_dec_ref(v___y_497_);
lean_dec(v___y_496_);
lean_dec_ref(v___y_495_);
lean_dec(v_ref_491_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14(lean_object* v_msgData_503_, uint8_t v_severity_504_, uint8_t v_isSilent_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_){
_start:
{
lean_object* v_ref_515_; lean_object* v___x_516_; 
v_ref_515_ = lean_ctor_get(v___y_512_, 2);
v___x_516_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg(v_ref_515_, v_msgData_503_, v_severity_504_, v_isSilent_505_, v___y_510_, v___y_511_, v___y_512_, v___y_513_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14___boxed(lean_object* v_msgData_517_, lean_object* v_severity_518_, lean_object* v_isSilent_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_){
_start:
{
uint8_t v_severity_boxed_529_; uint8_t v_isSilent_boxed_530_; lean_object* v_res_531_; 
v_severity_boxed_529_ = lean_unbox(v_severity_518_);
v_isSilent_boxed_530_ = lean_unbox(v_isSilent_519_);
v_res_531_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14(v_msgData_517_, v_severity_boxed_529_, v_isSilent_boxed_530_, v___y_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_);
lean_dec(v___y_527_);
lean_dec_ref(v___y_526_);
lean_dec(v___y_525_);
lean_dec_ref(v___y_524_);
lean_dec(v___y_523_);
lean_dec_ref(v___y_522_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9(lean_object* v_msgData_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
uint8_t v___x_542_; uint8_t v___x_543_; lean_object* v___x_544_; 
v___x_542_ = 1;
v___x_543_ = 0;
v___x_544_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14(v_msgData_532_, v___x_542_, v___x_543_, v___y_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9___boxed(lean_object* v_msgData_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9(v_msgData_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
lean_dec(v___y_553_);
lean_dec_ref(v___y_552_);
lean_dec(v___y_551_);
lean_dec_ref(v___y_550_);
lean_dec(v___y_549_);
lean_dec_ref(v___y_548_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
return v_res_555_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__1(void){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_557_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__0));
v___x_558_ = l_Lean_stringToMessageData(v___x_557_);
return v___x_558_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__3(void){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__2));
v___x_561_ = l_Lean_stringToMessageData(v___x_560_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6(lean_object* v_id_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_){
_start:
{
lean_object* v___x_572_; lean_object* v_env_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_595_; 
v___x_572_ = lean_st_ref_get(v___y_570_);
v_env_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc_ref(v_env_573_);
lean_dec(v___x_572_);
v___x_574_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_575_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8___redArg(v___x_574_, v___y_569_);
v_a_576_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_595_ == 0)
{
v___x_578_ = v___x_575_;
v_isShared_579_ = v_isSharedCheck_595_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_575_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_595_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
uint8_t v_isExporting_585_; 
v_isExporting_585_ = lean_ctor_get_uint8(v_env_573_, sizeof(void*)*13);
lean_dec_ref(v_env_573_);
if (v_isExporting_585_ == 0)
{
lean_dec(v_a_576_);
lean_dec(v_id_562_);
goto v___jp_580_;
}
else
{
uint8_t v___x_586_; 
v___x_586_ = l_Lean_isPrivateName(v_id_562_);
if (v___x_586_ == 0)
{
lean_dec(v_a_576_);
lean_dec(v_id_562_);
goto v___jp_580_;
}
else
{
uint8_t v___x_587_; 
v___x_587_ = lean_unbox(v_a_576_);
lean_dec(v_a_576_);
if (v___x_587_ == 0)
{
lean_dec(v_id_562_);
goto v___jp_580_;
}
else
{
lean_object* v___x_588_; uint8_t v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
lean_del_object(v___x_578_);
v___x_588_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__1);
v___x_589_ = 0;
v___x_590_ = l_Lean_MessageData_ofConstName(v_id_562_, v___x_589_);
v___x_591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_591_, 0, v___x_588_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
v___x_592_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___closed__3);
v___x_593_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_591_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___x_594_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9(v___x_593_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_);
return v___x_594_;
}
}
}
v___jp_580_:
{
lean_object* v___x_581_; lean_object* v___x_583_; 
v___x_581_ = lean_box(0);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v___x_581_);
v___x_583_ = v___x_578_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v___x_581_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6___boxed(lean_object* v_id_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6(v_id_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_);
lean_dec(v___y_604_);
lean_dec_ref(v___y_603_);
lean_dec(v___y_602_);
lean_dec_ref(v___y_601_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_599_);
lean_dec(v___y_598_);
lean_dec_ref(v___y_597_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2(lean_object* v_id_607_, uint8_t v_enableLog_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_){
_start:
{
lean_object* v___x_618_; lean_object* v_toCold_619_; lean_object* v_env_620_; lean_object* v_currNamespace_621_; lean_object* v_openDecls_622_; lean_object* v___x_623_; lean_object* v_res_624_; lean_object* v___x_625_; 
v___x_618_ = lean_st_ref_get(v___y_616_);
v_toCold_619_ = lean_ctor_get(v___y_615_, 0);
v_env_620_ = lean_ctor_get(v___x_618_, 0);
lean_inc_ref(v_env_620_);
lean_dec(v___x_618_);
v_currNamespace_621_ = lean_ctor_get(v_toCold_619_, 4);
v_openDecls_622_ = lean_ctor_get(v_toCold_619_, 5);
v___x_623_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_615_);
lean_inc(v_openDecls_622_);
lean_inc(v_currNamespace_621_);
v_res_624_ = l_Lean_ResolveName_resolveGlobalName(v_env_620_, v___x_623_, v_currNamespace_621_, v_openDecls_622_, v_id_607_);
lean_dec_ref(v___x_623_);
v___x_625_ = lean_st_ref_get(v___y_616_);
if (v_enableLog_608_ == 0)
{
lean_object* v___x_626_; 
lean_dec(v___x_625_);
v___x_626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_626_, 0, v_res_624_);
return v___x_626_;
}
else
{
lean_object* v_env_627_; uint8_t v_isExporting_628_; 
v_env_627_ = lean_ctor_get(v___x_625_, 0);
lean_inc_ref(v_env_627_);
lean_dec(v___x_625_);
v_isExporting_628_ = lean_ctor_get_uint8(v_env_627_, sizeof(void*)*13);
lean_dec_ref(v_env_627_);
if (v_isExporting_628_ == 0)
{
lean_object* v___x_629_; 
v___x_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_629_, 0, v_res_624_);
return v___x_629_;
}
else
{
lean_object* v___x_630_; 
v___x_630_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__5(v_res_624_);
if (lean_obj_tag(v___x_630_) == 1)
{
lean_object* v_val_631_; lean_object* v_fst_632_; lean_object* v___x_633_; 
v_val_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_val_631_);
lean_dec_ref_known(v___x_630_, 1);
v_fst_632_ = lean_ctor_get(v_val_631_, 0);
lean_inc(v_fst_632_);
lean_dec(v_val_631_);
v___x_633_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6(v_fst_632_, v___y_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_, v___y_616_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_640_; 
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_640_ == 0)
{
lean_object* v_unused_641_; 
v_unused_641_ = lean_ctor_get(v___x_633_, 0);
lean_dec(v_unused_641_);
v___x_635_ = v___x_633_;
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
else
{
lean_dec(v___x_633_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_638_; 
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 0, v_res_624_);
v___x_638_ = v___x_635_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_res_624_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
else
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
lean_dec(v_res_624_);
v_a_642_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___x_633_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_633_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
else
{
lean_object* v___x_650_; 
lean_dec(v___x_630_);
v___x_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_650_, 0, v_res_624_);
return v___x_650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2___boxed(lean_object* v_id_651_, lean_object* v_enableLog_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
uint8_t v_enableLog_boxed_662_; lean_object* v_res_663_; 
v_enableLog_boxed_662_ = lean_unbox(v_enableLog_652_);
v_res_663_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2(v_id_651_, v_enableLog_boxed_662_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
lean_dec(v___y_654_);
lean_dec_ref(v___y_653_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__8(lean_object* v_a_664_, lean_object* v_a_665_){
_start:
{
if (lean_obj_tag(v_a_664_) == 0)
{
lean_object* v___x_666_; 
v___x_666_ = l_List_reverse___redArg(v_a_665_);
return v___x_666_;
}
else
{
lean_object* v_head_667_; lean_object* v_tail_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_679_; 
v_head_667_ = lean_ctor_get(v_a_664_, 0);
v_tail_668_ = lean_ctor_get(v_a_664_, 1);
v_isSharedCheck_679_ = !lean_is_exclusive(v_a_664_);
if (v_isSharedCheck_679_ == 0)
{
v___x_670_ = v_a_664_;
v_isShared_671_ = v_isSharedCheck_679_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_tail_668_);
lean_inc(v_head_667_);
lean_dec(v_a_664_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_679_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v_snd_672_; uint8_t v___x_673_; 
v_snd_672_ = lean_ctor_get(v_head_667_, 1);
v___x_673_ = l_List_isEmpty___redArg(v_snd_672_);
if (v___x_673_ == 0)
{
lean_del_object(v___x_670_);
lean_dec(v_head_667_);
v_a_664_ = v_tail_668_;
goto _start;
}
else
{
lean_object* v___x_676_; 
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 1, v_a_665_);
v___x_676_ = v___x_670_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_head_667_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v_a_665_);
v___x_676_ = v_reuseFailAlloc_678_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
v_a_664_ = v_tail_668_;
v_a_665_ = v___x_676_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__9(lean_object* v_a_680_, lean_object* v_a_681_){
_start:
{
if (lean_obj_tag(v_a_680_) == 0)
{
lean_object* v___x_682_; 
v___x_682_ = l_List_reverse___redArg(v_a_681_);
return v___x_682_;
}
else
{
lean_object* v_head_683_; lean_object* v_tail_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_693_; 
v_head_683_ = lean_ctor_get(v_a_680_, 0);
v_tail_684_ = lean_ctor_get(v_a_680_, 1);
v_isSharedCheck_693_ = !lean_is_exclusive(v_a_680_);
if (v_isSharedCheck_693_ == 0)
{
v___x_686_ = v_a_680_;
v_isShared_687_ = v_isSharedCheck_693_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_tail_684_);
lean_inc(v_head_683_);
lean_dec(v_a_680_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_693_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v_fst_688_; lean_object* v___x_690_; 
v_fst_688_ = lean_ctor_get(v_head_683_, 0);
lean_inc(v_fst_688_);
lean_dec(v_head_683_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 1, v_a_681_);
lean_ctor_set(v___x_686_, 0, v_fst_688_);
v___x_690_ = v___x_686_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_fst_688_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v_a_681_);
v___x_690_ = v_reuseFailAlloc_692_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
v_a_680_ = v_tail_684_;
v_a_681_ = v___x_690_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14___redArg(lean_object* v_msg_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
lean_object* v_ref_700_; lean_object* v___x_701_; lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_710_; 
v_ref_700_ = lean_ctor_get(v___y_697_, 2);
v___x_701_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14_spec__18(v_msg_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_);
v_a_702_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_710_ == 0)
{
v___x_704_ = v___x_701_;
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_701_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_706_; lean_object* v___x_708_; 
lean_inc(v_ref_700_);
v___x_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_706_, 0, v_ref_700_);
lean_ctor_set(v___x_706_, 1, v_a_702_);
if (v_isShared_705_ == 0)
{
lean_ctor_set_tag(v___x_704_, 1);
lean_ctor_set(v___x_704_, 0, v___x_706_);
v___x_708_ = v___x_704_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v___x_706_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14___redArg___boxed(lean_object* v_msg_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14___redArg(v_msg_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_);
lean_dec(v___y_715_);
lean_dec_ref(v___y_714_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6___redArg(lean_object* v_ref_718_, lean_object* v_msg_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_){
_start:
{
lean_object* v_toCold_729_; lean_object* v_currRecDepth_730_; lean_object* v_ref_731_; uint16_t v_optionFlags_732_; uint8_t v_suppressElabErrors_733_; uint8_t v_checkDeprecated_734_; uint8_t v_isRecordingDeps_735_; lean_object* v_ref_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
v_toCold_729_ = lean_ctor_get(v___y_726_, 0);
v_currRecDepth_730_ = lean_ctor_get(v___y_726_, 1);
v_ref_731_ = lean_ctor_get(v___y_726_, 2);
v_optionFlags_732_ = lean_ctor_get_uint16(v___y_726_, sizeof(void*)*3);
v_suppressElabErrors_733_ = lean_ctor_get_uint8(v___y_726_, sizeof(void*)*3 + 2);
v_checkDeprecated_734_ = lean_ctor_get_uint8(v___y_726_, sizeof(void*)*3 + 3);
v_isRecordingDeps_735_ = lean_ctor_get_uint8(v___y_726_, sizeof(void*)*3 + 4);
v_ref_736_ = l_Lean_replaceRef(v_ref_718_, v_ref_731_);
lean_inc(v_currRecDepth_730_);
lean_inc_ref(v_toCold_729_);
v___x_737_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_737_, 0, v_toCold_729_);
lean_ctor_set(v___x_737_, 1, v_currRecDepth_730_);
lean_ctor_set(v___x_737_, 2, v_ref_736_);
lean_ctor_set_uint16(v___x_737_, sizeof(void*)*3, v_optionFlags_732_);
lean_ctor_set_uint8(v___x_737_, sizeof(void*)*3 + 2, v_suppressElabErrors_733_);
lean_ctor_set_uint8(v___x_737_, sizeof(void*)*3 + 3, v_checkDeprecated_734_);
lean_ctor_set_uint8(v___x_737_, sizeof(void*)*3 + 4, v_isRecordingDeps_735_);
v___x_738_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14___redArg(v_msg_719_, v___y_724_, v___y_725_, v___x_737_, v___y_727_);
lean_dec_ref_known(v___x_737_, 3);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_ref_739_, lean_object* v_msg_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6___redArg(v_ref_739_, v_msg_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_, v___y_748_);
lean_dec(v___y_748_);
lean_dec_ref(v___y_747_);
lean_dec(v___y_746_);
lean_dec_ref(v___y_745_);
lean_dec(v___y_744_);
lean_dec_ref(v___y_743_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v_ref_739_);
return v_res_750_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__0(void){
_start:
{
lean_object* v___x_751_; 
v___x_751_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_751_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__1(void){
_start:
{
lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_752_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__0);
v___x_753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_753_, 0, v___x_752_);
return v___x_753_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__2(void){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_754_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__1);
v___x_755_ = lean_unsigned_to_nat(0u);
v___x_756_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_756_, 0, v___x_755_);
lean_ctor_set(v___x_756_, 1, v___x_755_);
lean_ctor_set(v___x_756_, 2, v___x_755_);
lean_ctor_set(v___x_756_, 3, v___x_755_);
lean_ctor_set(v___x_756_, 4, v___x_754_);
lean_ctor_set(v___x_756_, 5, v___x_754_);
lean_ctor_set(v___x_756_, 6, v___x_754_);
lean_ctor_set(v___x_756_, 7, v___x_754_);
lean_ctor_set(v___x_756_, 8, v___x_754_);
lean_ctor_set(v___x_756_, 9, v___x_754_);
lean_ctor_set(v___x_756_, 10, v___x_754_);
return v___x_756_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__3(void){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_757_ = lean_unsigned_to_nat(32u);
v___x_758_ = lean_mk_empty_array_with_capacity(v___x_757_);
v___x_759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
return v___x_759_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__4(void){
_start:
{
size_t v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_760_ = ((size_t)5ULL);
v___x_761_ = lean_unsigned_to_nat(0u);
v___x_762_ = lean_unsigned_to_nat(32u);
v___x_763_ = lean_mk_empty_array_with_capacity(v___x_762_);
v___x_764_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__3);
v___x_765_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_765_, 0, v___x_764_);
lean_ctor_set(v___x_765_, 1, v___x_763_);
lean_ctor_set(v___x_765_, 2, v___x_761_);
lean_ctor_set(v___x_765_, 3, v___x_761_);
lean_ctor_set_usize(v___x_765_, 4, v___x_760_);
return v___x_765_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__5(void){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_766_ = lean_box(1);
v___x_767_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__4);
v___x_768_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__1);
v___x_769_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
lean_ctor_set(v___x_769_, 1, v___x_767_);
lean_ctor_set(v___x_769_, 2, v___x_766_);
return v___x_769_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__7(void){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_771_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__6));
v___x_772_ = l_Lean_stringToMessageData(v___x_771_);
return v___x_772_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__9(void){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__8));
v___x_775_ = l_Lean_stringToMessageData(v___x_774_);
return v___x_775_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__11(void){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_777_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__10));
v___x_778_ = l_Lean_stringToMessageData(v___x_777_);
return v___x_778_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__13(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__12));
v___x_781_ = l_Lean_stringToMessageData(v___x_780_);
return v___x_781_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__15(void){
_start:
{
lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_783_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__14));
v___x_784_ = l_Lean_stringToMessageData(v___x_783_);
return v___x_784_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__17(void){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__16));
v___x_787_ = l_Lean_stringToMessageData(v___x_786_);
return v___x_787_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__19(void){
_start:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__18));
v___x_790_ = l_Lean_stringToMessageData(v___x_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg(lean_object* v_msg_791_, lean_object* v_declHint_792_, lean_object* v___y_793_){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v_env_797_; uint8_t v___x_798_; 
v___x_795_ = lean_box(0);
v___x_796_ = lean_st_ref_get(v___y_793_);
v_env_797_ = lean_ctor_get(v___x_796_, 0);
lean_inc_ref(v_env_797_);
lean_dec(v___x_796_);
v___x_798_ = l_Lean_Name_isAnonymous(v_declHint_792_);
if (v___x_798_ == 0)
{
uint8_t v_isExporting_799_; 
v_isExporting_799_ = lean_ctor_get_uint8(v_env_797_, sizeof(void*)*13);
if (v_isExporting_799_ == 0)
{
lean_object* v___x_800_; 
lean_dec_ref(v_env_797_);
lean_dec(v_declHint_792_);
v___x_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_800_, 0, v_msg_791_);
return v___x_800_;
}
else
{
lean_object* v___x_801_; uint8_t v___x_802_; 
lean_inc_ref(v_env_797_);
v___x_801_ = l_Lean_Environment_setExporting(v_env_797_, v___x_798_);
lean_inc(v_declHint_792_);
lean_inc_ref(v___x_801_);
v___x_802_ = l_Lean_Environment_contains(v___x_801_, v_declHint_792_, v_isExporting_799_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; 
lean_dec_ref(v___x_801_);
lean_dec_ref(v_env_797_);
lean_dec(v_declHint_792_);
v___x_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_803_, 0, v_msg_791_);
return v___x_803_;
}
else
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v_c_809_; lean_object* v___x_810_; 
v___x_804_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__2);
v___x_805_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__5);
v___x_806_ = l_Lean_Options_empty;
lean_inc_ref(v___x_801_);
v___x_807_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_807_, 0, v___x_801_);
lean_ctor_set(v___x_807_, 1, v___x_804_);
lean_ctor_set(v___x_807_, 2, v___x_805_);
lean_ctor_set(v___x_807_, 3, v___x_806_);
lean_inc(v_declHint_792_);
v___x_808_ = l_Lean_MessageData_ofConstName(v_declHint_792_, v___x_798_);
v_c_809_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_809_, 0, v___x_807_);
lean_ctor_set(v_c_809_, 1, v___x_808_);
v___x_810_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_801_, v_declHint_792_);
lean_dec_ref(v___x_801_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
lean_dec_ref(v_env_797_);
lean_dec(v_declHint_792_);
v___x_811_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__7);
v___x_812_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
lean_ctor_set(v___x_812_, 1, v_c_809_);
v___x_813_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__9);
v___x_814_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_814_, 0, v___x_812_);
lean_ctor_set(v___x_814_, 1, v___x_813_);
v___x_815_ = l_Lean_MessageData_note(v___x_814_);
v___x_816_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_816_, 0, v_msg_791_);
lean_ctor_set(v___x_816_, 1, v___x_815_);
v___x_817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_817_, 0, v___x_816_);
return v___x_817_;
}
else
{
lean_object* v_val_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_852_; 
v_val_818_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_852_ == 0)
{
v___x_820_ = v___x_810_;
v_isShared_821_ = v_isSharedCheck_852_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_val_818_);
lean_dec(v___x_810_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_852_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_822_; lean_object* v_moduleNames_823_; lean_object* v_mod_824_; uint8_t v___x_825_; 
v___x_822_ = l_Lean_Environment_header(v_env_797_);
lean_dec_ref(v_env_797_);
v_moduleNames_823_ = lean_ctor_get(v___x_822_, 4);
lean_inc_ref(v_moduleNames_823_);
lean_dec_ref(v___x_822_);
v_mod_824_ = lean_array_get(v___x_795_, v_moduleNames_823_, v_val_818_);
lean_dec(v_val_818_);
lean_dec_ref(v_moduleNames_823_);
v___x_825_ = l_Lean_isPrivateName(v_declHint_792_);
lean_dec(v_declHint_792_);
if (v___x_825_ == 0)
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_837_; 
v___x_826_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__11);
v___x_827_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_827_, 0, v___x_826_);
lean_ctor_set(v___x_827_, 1, v_c_809_);
v___x_828_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__13);
v___x_829_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_829_, 0, v___x_827_);
lean_ctor_set(v___x_829_, 1, v___x_828_);
v___x_830_ = l_Lean_MessageData_ofName(v_mod_824_);
v___x_831_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_829_);
lean_ctor_set(v___x_831_, 1, v___x_830_);
v___x_832_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__15);
v___x_833_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_833_, 0, v___x_831_);
lean_ctor_set(v___x_833_, 1, v___x_832_);
v___x_834_ = l_Lean_MessageData_note(v___x_833_);
v___x_835_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_835_, 0, v_msg_791_);
lean_ctor_set(v___x_835_, 1, v___x_834_);
if (v_isShared_821_ == 0)
{
lean_ctor_set_tag(v___x_820_, 0);
lean_ctor_set(v___x_820_, 0, v___x_835_);
v___x_837_ = v___x_820_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_835_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
}
}
else
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_850_; 
v___x_839_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__7);
v___x_840_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
lean_ctor_set(v___x_840_, 1, v_c_809_);
v___x_841_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__17);
v___x_842_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_842_, 0, v___x_840_);
lean_ctor_set(v___x_842_, 1, v___x_841_);
v___x_843_ = l_Lean_MessageData_ofName(v_mod_824_);
v___x_844_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_844_, 0, v___x_842_);
lean_ctor_set(v___x_844_, 1, v___x_843_);
v___x_845_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__19);
v___x_846_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_846_, 0, v___x_844_);
lean_ctor_set(v___x_846_, 1, v___x_845_);
v___x_847_ = l_Lean_MessageData_note(v___x_846_);
v___x_848_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_848_, 0, v_msg_791_);
lean_ctor_set(v___x_848_, 1, v___x_847_);
if (v_isShared_821_ == 0)
{
lean_ctor_set_tag(v___x_820_, 0);
lean_ctor_set(v___x_820_, 0, v___x_848_);
v___x_850_ = v___x_820_;
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
}
}
}
}
else
{
lean_object* v___x_853_; 
lean_dec_ref(v_env_797_);
lean_dec(v_declHint_792_);
v___x_853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_853_, 0, v_msg_791_);
return v___x_853_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___boxed(lean_object* v_msg_854_, lean_object* v_declHint_855_, lean_object* v___y_856_, lean_object* v___y_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg(v_msg_854_, v_declHint_855_, v___y_856_);
lean_dec(v___y_856_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19(lean_object* v_msg_859_, lean_object* v_declHint_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_){
_start:
{
lean_object* v___x_870_; lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_880_; 
v___x_870_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg(v_msg_859_, v_declHint_860_, v___y_868_);
v_a_871_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_880_ == 0)
{
v___x_873_ = v___x_870_;
v_isShared_874_ = v_isSharedCheck_880_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_dec(v___x_870_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_880_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_878_; 
v___x_875_ = l_Lean_unknownIdentifierMessageTag;
v___x_876_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
lean_ctor_set(v___x_876_, 1, v_a_871_);
if (v_isShared_874_ == 0)
{
lean_ctor_set(v___x_873_, 0, v___x_876_);
v___x_878_ = v___x_873_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v___x_876_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19___boxed(lean_object* v_msg_881_, lean_object* v_declHint_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19(v_msg_881_, v_declHint_882_, v___y_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_);
lean_dec(v___y_890_);
lean_dec_ref(v___y_889_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
lean_dec(v___y_886_);
lean_dec_ref(v___y_885_);
lean_dec(v___y_884_);
lean_dec_ref(v___y_883_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14___redArg(lean_object* v_ref_893_, lean_object* v_msg_894_, lean_object* v_declHint_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
lean_object* v___x_905_; lean_object* v_a_906_; lean_object* v___x_907_; 
v___x_905_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19(v_msg_894_, v_declHint_895_, v___y_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_);
v_a_906_ = lean_ctor_get(v___x_905_, 0);
lean_inc(v_a_906_);
lean_dec_ref(v___x_905_);
v___x_907_ = l_Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6___redArg(v_ref_893_, v_a_906_, v___y_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14___redArg___boxed(lean_object* v_ref_908_, lean_object* v_msg_909_, lean_object* v_declHint_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14___redArg(v_ref_908_, v_msg_909_, v_declHint_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
lean_dec(v___y_914_);
lean_dec_ref(v___y_913_);
lean_dec(v___y_912_);
lean_dec_ref(v___y_911_);
lean_dec(v_ref_908_);
return v_res_920_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__1(void){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_922_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__0));
v___x_923_ = l_Lean_stringToMessageData(v___x_922_);
return v___x_923_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__3(void){
_start:
{
lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_925_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__2));
v___x_926_ = l_Lean_stringToMessageData(v___x_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg(lean_object* v_ref_927_, lean_object* v_constName_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_){
_start:
{
lean_object* v___x_938_; uint8_t v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_938_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__1);
v___x_939_ = 0;
lean_inc(v_constName_928_);
v___x_940_ = l_Lean_MessageData_ofConstName(v_constName_928_, v___x_939_);
v___x_941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_938_);
lean_ctor_set(v___x_941_, 1, v___x_940_);
v___x_942_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___closed__3);
v___x_943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_943_, 0, v___x_941_);
lean_ctor_set(v___x_943_, 1, v___x_942_);
v___x_944_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14___redArg(v_ref_927_, v___x_943_, v_constName_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg___boxed(lean_object* v_ref_945_, lean_object* v_constName_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg(v_ref_945_, v_constName_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_);
lean_dec(v___y_954_);
lean_dec_ref(v___y_953_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
lean_dec(v___y_950_);
lean_dec_ref(v___y_949_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
lean_dec(v_ref_945_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3(lean_object* v_n_957_, lean_object* v_cs_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_){
_start:
{
lean_object* v___x_968_; lean_object* v_cs_969_; uint8_t v___x_973_; 
v___x_968_ = lean_box(0);
v_cs_969_ = l_List_filterTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__8(v_cs_958_, v___x_968_);
v___x_973_ = l_List_isEmpty___redArg(v_cs_969_);
if (v___x_973_ == 0)
{
lean_dec(v_n_957_);
goto v___jp_970_;
}
else
{
lean_object* v_ref_974_; lean_object* v___x_975_; lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_983_; 
lean_dec(v_cs_969_);
v_ref_974_ = lean_ctor_get(v___y_965_, 2);
v___x_975_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg(v_ref_974_, v_n_957_, v___y_959_, v___y_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_);
v_a_976_ = lean_ctor_get(v___x_975_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_983_ == 0)
{
v___x_978_ = v___x_975_;
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_975_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_979_ == 0)
{
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_a_976_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
v___jp_970_:
{
lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_971_ = l_List_mapTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__9(v_cs_969_, v___x_968_);
v___x_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_972_, 0, v___x_971_);
return v___x_972_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3___boxed(lean_object* v_n_984_, lean_object* v_cs_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3(v_n_984_, v_cs_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_);
lean_dec(v___y_993_);
lean_dec_ref(v___y_992_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1(lean_object* v_n_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
uint8_t v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = 1;
lean_inc(v_n_996_);
v___x_1007_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2(v_n_996_, v___x_1006_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v_a_1008_; lean_object* v___x_1009_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_a_1008_);
lean_dec_ref_known(v___x_1007_, 1);
v___x_1009_ = l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3(v_n_996_, v_a_1008_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_);
return v___x_1009_;
}
else
{
lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1017_; 
lean_dec(v_n_996_);
v_a_1010_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1012_ = v___x_1007_;
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___x_1007_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1015_; 
if (v_isShared_1013_ == 0)
{
v___x_1015_ = v___x_1012_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_a_1010_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1___boxed(lean_object* v_n_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1(v_n_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
lean_dec(v___y_1022_);
lean_dec_ref(v___y_1021_);
lean_dec(v___y_1020_);
lean_dec_ref(v___y_1019_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__5(lean_object* v_a_1029_, lean_object* v_a_1030_){
_start:
{
if (lean_obj_tag(v_a_1029_) == 0)
{
lean_object* v___x_1031_; 
v___x_1031_ = lean_array_to_list(v_a_1030_);
return v___x_1031_;
}
else
{
lean_object* v_head_1032_; 
v_head_1032_ = lean_ctor_get(v_a_1029_, 0);
if (lean_obj_tag(v_head_1032_) == 1)
{
lean_object* v_fields_1033_; 
v_fields_1033_ = lean_ctor_get(v_head_1032_, 1);
if (lean_obj_tag(v_fields_1033_) == 0)
{
lean_object* v_tail_1034_; lean_object* v_n_1035_; lean_object* v___x_1036_; 
lean_inc_ref(v_head_1032_);
v_tail_1034_ = lean_ctor_get(v_a_1029_, 1);
lean_inc(v_tail_1034_);
lean_dec_ref_known(v_a_1029_, 2);
v_n_1035_ = lean_ctor_get(v_head_1032_, 0);
lean_inc(v_n_1035_);
lean_dec_ref_known(v_head_1032_, 2);
v___x_1036_ = lean_array_push(v_a_1030_, v_n_1035_);
v_a_1029_ = v_tail_1034_;
v_a_1030_ = v___x_1036_;
goto _start;
}
else
{
lean_object* v_tail_1038_; 
v_tail_1038_ = lean_ctor_get(v_a_1029_, 1);
lean_inc(v_tail_1038_);
lean_dec_ref_known(v_a_1029_, 2);
v_a_1029_ = v_tail_1038_;
goto _start;
}
}
else
{
lean_object* v_tail_1040_; 
v_tail_1040_ = lean_ctor_get(v_a_1029_, 1);
lean_inc(v_tail_1040_);
lean_dec_ref_known(v_a_1029_, 2);
v_a_1029_ = v_tail_1040_;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1047_ = ((lean_object*)(l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__2));
v___x_1048_ = l_Lean_MessageData_ofFormat(v___x_1047_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2(lean_object* v_stx_1049_, lean_object* v_k_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
if (lean_obj_tag(v_stx_1049_) == 3)
{
lean_object* v_val_1060_; lean_object* v_preresolved_1061_; lean_object* v___x_1062_; lean_object* v_pre_1063_; uint8_t v___x_1064_; 
v_val_1060_ = lean_ctor_get(v_stx_1049_, 2);
lean_inc(v_val_1060_);
v_preresolved_1061_ = lean_ctor_get(v_stx_1049_, 3);
v___x_1062_ = ((lean_object*)(l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__0));
lean_inc(v_preresolved_1061_);
v_pre_1063_ = l_List_filterMapTR_go___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__5(v_preresolved_1061_, v___x_1062_);
v___x_1064_ = l_List_isEmpty___redArg(v_pre_1063_);
if (v___x_1064_ == 0)
{
lean_object* v___x_1065_; 
lean_dec_ref_known(v_stx_1049_, 4);
lean_dec(v_val_1060_);
lean_dec_ref(v_k_1050_);
v___x_1065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1065_, 0, v_pre_1063_);
return v___x_1065_;
}
else
{
lean_object* v_toCold_1066_; lean_object* v_currRecDepth_1067_; lean_object* v_ref_1068_; uint16_t v_optionFlags_1069_; uint8_t v_suppressElabErrors_1070_; uint8_t v_checkDeprecated_1071_; uint8_t v_isRecordingDeps_1072_; lean_object* v_ref_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
lean_dec(v_pre_1063_);
v_toCold_1066_ = lean_ctor_get(v___y_1057_, 0);
v_currRecDepth_1067_ = lean_ctor_get(v___y_1057_, 1);
v_ref_1068_ = lean_ctor_get(v___y_1057_, 2);
v_optionFlags_1069_ = lean_ctor_get_uint16(v___y_1057_, sizeof(void*)*3);
v_suppressElabErrors_1070_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*3 + 2);
v_checkDeprecated_1071_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1072_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*3 + 4);
v_ref_1073_ = l_Lean_replaceRef(v_stx_1049_, v_ref_1068_);
lean_dec_ref_known(v_stx_1049_, 4);
lean_inc(v_currRecDepth_1067_);
lean_inc_ref(v_toCold_1066_);
v___x_1074_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1074_, 0, v_toCold_1066_);
lean_ctor_set(v___x_1074_, 1, v_currRecDepth_1067_);
lean_ctor_set(v___x_1074_, 2, v_ref_1073_);
lean_ctor_set_uint16(v___x_1074_, sizeof(void*)*3, v_optionFlags_1069_);
lean_ctor_set_uint8(v___x_1074_, sizeof(void*)*3 + 2, v_suppressElabErrors_1070_);
lean_ctor_set_uint8(v___x_1074_, sizeof(void*)*3 + 3, v_checkDeprecated_1071_);
lean_ctor_set_uint8(v___x_1074_, sizeof(void*)*3 + 4, v_isRecordingDeps_1072_);
lean_inc(v___y_1058_);
lean_inc(v___y_1056_);
lean_inc_ref(v___y_1055_);
lean_inc(v___y_1054_);
lean_inc_ref(v___y_1053_);
lean_inc(v___y_1052_);
lean_inc_ref(v___y_1051_);
v___x_1075_ = lean_apply_10(v_k_1050_, v_val_1060_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___x_1074_, v___y_1058_, lean_box(0));
return v___x_1075_;
}
}
else
{
lean_object* v___x_1076_; lean_object* v___x_1077_; 
lean_dec_ref(v_k_1050_);
v___x_1076_ = lean_obj_once(&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__3, &l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__3_once, _init_l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___closed__3);
v___x_1077_ = l_Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6___redArg(v_stx_1049_, v___x_1076_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_);
lean_dec(v_stx_1049_);
return v___x_1077_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2___boxed(lean_object* v_stx_1078_, lean_object* v_k_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2(v_stx_1078_, v_k_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec_ref(v___y_1080_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1(lean_object* v_stx_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = ((lean_object*)(l_Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1___closed__0));
v___x_1102_ = l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2(v_stx_1091_, v___x_1101_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1___boxed(lean_object* v_stx_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l_Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1(v_stx_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
lean_dec(v___y_1111_);
lean_dec_ref(v___y_1110_);
lean_dec(v___y_1109_);
lean_dec_ref(v___y_1108_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
return v_res_1113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__3(uint8_t v___x_1114_, lean_object* v_as_1115_, size_t v_sz_1116_, size_t v_i_1117_, lean_object* v_b_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
uint8_t v___x_1128_; 
v___x_1128_ = lean_usize_dec_lt(v_i_1117_, v_sz_1116_);
if (v___x_1128_ == 0)
{
lean_object* v___x_1129_; 
v___x_1129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1129_, 0, v_b_1118_);
return v___x_1129_;
}
else
{
lean_object* v_a_1130_; lean_object* v_name_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v_a_1130_ = lean_array_uget_borrowed(v_as_1115_, v_i_1117_);
v_name_1131_ = lean_ctor_get(v_a_1130_, 0);
lean_inc(v_name_1131_);
v___x_1132_ = l_Lean_mkIdent(v_name_1131_);
lean_inc(v___x_1132_);
v___x_1133_ = l_Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1(v___x_1132_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1133_) == 0)
{
lean_object* v_a_1134_; lean_object* v___x_1135_; 
v_a_1134_ = lean_ctor_get(v___x_1133_, 0);
lean_inc(v_a_1134_);
lean_dec_ref_known(v___x_1133_, 1);
v___x_1135_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg(v___x_1132_, v___x_1114_, v_a_1134_, v_b_1118_, v___y_1125_);
lean_dec(v_a_1134_);
lean_dec(v___x_1132_);
if (lean_obj_tag(v___x_1135_) == 0)
{
lean_object* v_a_1136_; size_t v___x_1137_; size_t v___x_1138_; 
v_a_1136_ = lean_ctor_get(v___x_1135_, 0);
lean_inc(v_a_1136_);
lean_dec_ref_known(v___x_1135_, 1);
v___x_1137_ = ((size_t)1ULL);
v___x_1138_ = lean_usize_add(v_i_1117_, v___x_1137_);
v_i_1117_ = v___x_1138_;
v_b_1118_ = v_a_1136_;
goto _start;
}
else
{
return v___x_1135_;
}
}
else
{
lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1147_; 
lean_dec(v___x_1132_);
lean_dec_ref(v_b_1118_);
v_a_1140_ = lean_ctor_get(v___x_1133_, 0);
v_isSharedCheck_1147_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1142_ = v___x_1133_;
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_a_1140_);
lean_dec(v___x_1133_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__3___boxed(lean_object* v___x_1148_, lean_object* v_as_1149_, lean_object* v_sz_1150_, lean_object* v_i_1151_, lean_object* v_b_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_){
_start:
{
uint8_t v___x_38699__boxed_1162_; size_t v_sz_boxed_1163_; size_t v_i_boxed_1164_; lean_object* v_res_1165_; 
v___x_38699__boxed_1162_ = lean_unbox(v___x_1148_);
v_sz_boxed_1163_ = lean_unbox_usize(v_sz_1150_);
lean_dec(v_sz_1150_);
v_i_boxed_1164_ = lean_unbox_usize(v_i_1151_);
lean_dec(v_i_1151_);
v_res_1165_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__3(v___x_38699__boxed_1162_, v_as_1149_, v_sz_boxed_1163_, v_i_boxed_1164_, v_b_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1157_);
lean_dec(v___y_1156_);
lean_dec_ref(v___y_1155_);
lean_dec(v___y_1154_);
lean_dec_ref(v___y_1153_);
lean_dec_ref(v_as_1149_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2(uint8_t v___x_1185_, lean_object* v_stx_1186_, lean_object* v___x_1187_, lean_object* v___x_1188_, lean_object* v___x_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
if (v___x_1185_ == 0)
{
lean_object* v___x_1199_; 
lean_dec_ref(v___x_1189_);
lean_dec_ref(v___x_1188_);
lean_dec_ref(v___x_1187_);
v___x_1199_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_1199_;
}
else
{
lean_object* v___x_1200_; lean_object* v_tk_1201_; lean_object* v___y_1203_; lean_object* v___y_1204_; uint8_t v___y_1205_; lean_object* v___y_1206_; lean_object* v___y_1207_; lean_object* v___y_1208_; lean_object* v___y_1209_; lean_object* v___y_1210_; lean_object* v___y_1211_; lean_object* v___y_1212_; lean_object* v___y_1213_; lean_object* v___y_1214_; lean_object* v___y_1215_; lean_object* v___y_1216_; lean_object* v___y_1274_; uint8_t v___y_1275_; lean_object* v___y_1276_; uint8_t v___y_1277_; lean_object* v___y_1278_; lean_object* v_stxForSuggestion_1279_; lean_object* v___y_1280_; lean_object* v___y_1281_; lean_object* v___y_1282_; lean_object* v___y_1283_; lean_object* v___y_1284_; lean_object* v___y_1285_; lean_object* v___y_1286_; lean_object* v___y_1287_; uint8_t v___y_1308_; lean_object* v___y_1309_; lean_object* v___y_1310_; lean_object* v___y_1311_; lean_object* v___y_1312_; lean_object* v___y_1313_; lean_object* v___y_1314_; uint8_t v___y_1315_; lean_object* v___y_1316_; lean_object* v___y_1317_; lean_object* v___y_1318_; lean_object* v___y_1319_; lean_object* v___y_1320_; lean_object* v___y_1321_; lean_object* v___y_1322_; lean_object* v___y_1323_; lean_object* v___y_1324_; lean_object* v___y_1325_; lean_object* v___y_1326_; lean_object* v___y_1327_; lean_object* v___y_1328_; lean_object* v___y_1329_; lean_object* v___y_1330_; lean_object* v___y_1335_; uint8_t v___y_1336_; lean_object* v___y_1337_; lean_object* v___y_1338_; lean_object* v___y_1339_; lean_object* v___y_1340_; lean_object* v___y_1341_; lean_object* v___y_1342_; uint8_t v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v___y_1346_; lean_object* v___y_1347_; lean_object* v___y_1348_; lean_object* v___y_1349_; lean_object* v___y_1350_; lean_object* v___y_1351_; lean_object* v___y_1352_; lean_object* v___y_1353_; lean_object* v___y_1354_; lean_object* v___y_1355_; lean_object* v___y_1356_; lean_object* v___y_1357_; uint8_t v___y_1373_; lean_object* v___y_1374_; lean_object* v___y_1375_; lean_object* v___y_1376_; uint8_t v___y_1377_; lean_object* v___y_1378_; lean_object* v___y_1379_; lean_object* v___y_1380_; lean_object* v___y_1381_; uint8_t v___y_1382_; lean_object* v___y_1383_; lean_object* v___y_1384_; lean_object* v___y_1385_; lean_object* v___y_1386_; lean_object* v___y_1387_; lean_object* v___y_1388_; lean_object* v___y_1389_; lean_object* v___y_1390_; lean_object* v___y_1391_; lean_object* v___y_1392_; lean_object* v___y_1393_; lean_object* v___y_1394_; lean_object* v___y_1395_; lean_object* v___y_1396_; uint8_t v___y_1406_; lean_object* v___y_1407_; lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1410_; lean_object* v___y_1411_; lean_object* v___y_1412_; uint8_t v___y_1413_; lean_object* v___y_1414_; lean_object* v___y_1415_; lean_object* v___y_1416_; lean_object* v___y_1417_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v___y_1422_; lean_object* v___y_1423_; lean_object* v___y_1424_; lean_object* v___y_1425_; lean_object* v___y_1426_; lean_object* v___y_1427_; lean_object* v___y_1428_; lean_object* v___y_1433_; uint8_t v___y_1434_; lean_object* v___y_1435_; lean_object* v___y_1436_; lean_object* v___y_1437_; lean_object* v___y_1438_; lean_object* v___y_1439_; lean_object* v___y_1440_; uint8_t v___y_1441_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___y_1447_; lean_object* v___y_1448_; lean_object* v___y_1449_; lean_object* v___y_1450_; lean_object* v___y_1451_; lean_object* v___y_1452_; lean_object* v___y_1453_; lean_object* v___y_1454_; lean_object* v___y_1455_; uint8_t v___y_1471_; lean_object* v___y_1472_; lean_object* v___y_1473_; lean_object* v___y_1474_; uint8_t v___y_1475_; lean_object* v___y_1476_; lean_object* v___y_1477_; lean_object* v___y_1478_; lean_object* v___y_1479_; uint8_t v___y_1480_; lean_object* v___y_1481_; lean_object* v___y_1482_; lean_object* v___y_1483_; lean_object* v___y_1484_; lean_object* v___y_1485_; lean_object* v___y_1486_; lean_object* v___y_1487_; lean_object* v___y_1488_; lean_object* v___y_1489_; lean_object* v___y_1490_; lean_object* v___y_1491_; lean_object* v___y_1492_; lean_object* v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1504_; uint8_t v___y_1505_; lean_object* v___y_1506_; uint8_t v___y_1507_; lean_object* v___y_1508_; lean_object* v___y_1509_; uint8_t v___y_1510_; lean_object* v___y_1511_; lean_object* v___y_1512_; lean_object* v___y_1513_; lean_object* v_stxForExecution_1514_; lean_object* v___y_1515_; lean_object* v___y_1516_; lean_object* v___y_1517_; lean_object* v___y_1518_; lean_object* v___y_1519_; lean_object* v___y_1520_; lean_object* v___y_1521_; lean_object* v___y_1522_; uint8_t v___y_1552_; lean_object* v___y_1553_; lean_object* v___y_1554_; lean_object* v___y_1555_; lean_object* v___y_1556_; lean_object* v___y_1557_; lean_object* v___y_1558_; lean_object* v___y_1559_; lean_object* v___y_1560_; uint8_t v___y_1561_; lean_object* v___y_1562_; lean_object* v___y_1563_; lean_object* v___y_1564_; lean_object* v___y_1565_; lean_object* v___y_1566_; lean_object* v___y_1567_; uint8_t v___y_1568_; lean_object* v___y_1569_; lean_object* v___y_1570_; lean_object* v___y_1571_; lean_object* v___y_1572_; lean_object* v___y_1573_; lean_object* v___y_1574_; lean_object* v___y_1575_; lean_object* v___y_1576_; lean_object* v___y_1577_; lean_object* v___y_1578_; lean_object* v___y_1583_; uint8_t v___y_1584_; lean_object* v___y_1585_; lean_object* v___y_1586_; lean_object* v___y_1587_; lean_object* v___y_1588_; lean_object* v___y_1589_; uint8_t v___y_1590_; lean_object* v___y_1591_; lean_object* v___y_1592_; lean_object* v___y_1593_; lean_object* v___y_1594_; lean_object* v___y_1595_; uint8_t v___y_1596_; lean_object* v___y_1597_; lean_object* v___y_1598_; lean_object* v___y_1599_; lean_object* v___y_1600_; lean_object* v___y_1601_; lean_object* v___y_1602_; lean_object* v___y_1603_; lean_object* v___y_1604_; lean_object* v___y_1605_; lean_object* v___y_1606_; lean_object* v___y_1607_; uint8_t v___y_1623_; lean_object* v___y_1624_; lean_object* v___y_1625_; lean_object* v___y_1626_; lean_object* v___y_1627_; lean_object* v___y_1628_; lean_object* v___y_1629_; uint8_t v___y_1630_; lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1635_; uint8_t v___y_1636_; lean_object* v___y_1637_; lean_object* v___y_1638_; lean_object* v___y_1639_; lean_object* v___y_1640_; lean_object* v___y_1641_; lean_object* v___y_1642_; lean_object* v___y_1643_; lean_object* v___y_1644_; lean_object* v___y_1645_; lean_object* v___y_1646_; uint8_t v___y_1656_; lean_object* v___y_1657_; lean_object* v___y_1658_; lean_object* v___y_1659_; lean_object* v___y_1660_; lean_object* v___y_1661_; uint8_t v___y_1662_; lean_object* v___y_1663_; lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1666_; lean_object* v___y_1667_; lean_object* v___y_1668_; lean_object* v___y_1669_; lean_object* v___y_1670_; lean_object* v___y_1671_; uint8_t v___y_1672_; lean_object* v___y_1673_; lean_object* v___y_1674_; lean_object* v___y_1675_; lean_object* v___y_1676_; lean_object* v___y_1677_; lean_object* v___y_1678_; lean_object* v___y_1679_; lean_object* v___y_1680_; lean_object* v___y_1681_; lean_object* v___y_1682_; lean_object* v___y_1687_; uint8_t v___y_1688_; lean_object* v___y_1689_; lean_object* v___y_1690_; lean_object* v___y_1691_; lean_object* v___y_1692_; uint8_t v___y_1693_; lean_object* v___y_1694_; lean_object* v___y_1695_; uint8_t v___y_1696_; lean_object* v___y_1697_; lean_object* v___y_1698_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v___y_1701_; lean_object* v___y_1702_; lean_object* v___y_1703_; lean_object* v___y_1704_; lean_object* v___y_1705_; lean_object* v___y_1706_; lean_object* v___y_1707_; lean_object* v___y_1708_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v___y_1711_; uint8_t v___y_1727_; lean_object* v___y_1728_; lean_object* v___y_1729_; lean_object* v___y_1730_; lean_object* v___y_1731_; lean_object* v___y_1732_; uint8_t v___y_1733_; lean_object* v___y_1734_; lean_object* v___y_1735_; uint8_t v___y_1736_; lean_object* v___y_1737_; lean_object* v___y_1738_; lean_object* v___y_1739_; lean_object* v___y_1740_; lean_object* v___y_1741_; lean_object* v___y_1742_; lean_object* v___y_1743_; lean_object* v___y_1744_; lean_object* v___y_1745_; lean_object* v___y_1746_; lean_object* v___y_1747_; lean_object* v___y_1748_; lean_object* v___y_1749_; lean_object* v___y_1750_; lean_object* v___y_1760_; uint8_t v___y_1761_; lean_object* v___y_1762_; uint8_t v___y_1763_; lean_object* v___y_1764_; uint8_t v___y_1765_; lean_object* v___y_1766_; lean_object* v___y_1767_; lean_object* v___y_1768_; lean_object* v_argsArray_1769_; lean_object* v___y_1770_; lean_object* v___y_1771_; lean_object* v___y_1772_; lean_object* v___y_1773_; lean_object* v___y_1774_; lean_object* v___y_1775_; lean_object* v___y_1776_; lean_object* v___y_1777_; uint8_t v___y_1804_; lean_object* v___y_1805_; lean_object* v___y_1806_; lean_object* v___y_1807_; uint8_t v___y_1808_; lean_object* v___y_1809_; lean_object* v___y_1810_; lean_object* v___y_1811_; uint8_t v___y_1812_; uint8_t v___y_1813_; lean_object* v___y_1814_; lean_object* v___y_1815_; lean_object* v___y_1816_; lean_object* v___y_1817_; lean_object* v___y_1818_; lean_object* v___y_1819_; lean_object* v___y_1820_; lean_object* v___y_1821_; lean_object* v___y_1822_; lean_object* v___y_1823_; uint8_t v___y_1857_; lean_object* v___y_1858_; lean_object* v___y_1859_; lean_object* v___y_1860_; uint8_t v___y_1861_; lean_object* v___y_1862_; lean_object* v___y_1863_; lean_object* v___y_1864_; uint8_t v___y_1865_; lean_object* v___y_1866_; lean_object* v___y_1867_; lean_object* v___y_1868_; lean_object* v___y_1869_; lean_object* v___y_1870_; lean_object* v___y_1871_; lean_object* v___y_1872_; lean_object* v___y_1873_; lean_object* v___y_1874_; lean_object* v___y_1875_; uint8_t v___y_1888_; lean_object* v___y_1889_; lean_object* v___y_1890_; lean_object* v___y_1891_; lean_object* v___y_1892_; uint8_t v___y_1893_; lean_object* v___y_1894_; lean_object* v___y_1895_; lean_object* v___y_1896_; lean_object* v___y_1897_; lean_object* v___y_1898_; lean_object* v___y_1899_; lean_object* v___y_1900_; lean_object* v___y_1901_; lean_object* v___y_1902_; lean_object* v___y_1903_; uint8_t v___y_1920_; lean_object* v___y_1921_; lean_object* v___y_1922_; uint8_t v___y_1923_; lean_object* v___y_1924_; lean_object* v___y_1925_; lean_object* v___y_1926_; lean_object* v___y_1927_; lean_object* v___y_1928_; lean_object* v___y_1929_; lean_object* v___y_1930_; lean_object* v___y_1931_; lean_object* v___y_1932_; lean_object* v___y_1933_; lean_object* v___y_1934_; lean_object* v___y_1935_; uint8_t v___y_1947_; lean_object* v___y_1948_; uint8_t v___y_1949_; lean_object* v___y_1950_; lean_object* v___y_1951_; lean_object* v___y_1952_; lean_object* v___y_1953_; lean_object* v_args_1954_; lean_object* v___y_1955_; lean_object* v___y_1956_; lean_object* v___y_1957_; lean_object* v___y_1958_; lean_object* v___y_1959_; lean_object* v___y_1960_; lean_object* v___y_1961_; lean_object* v___y_1962_; lean_object* v___x_1975_; uint8_t v___y_1977_; uint8_t v___y_1978_; lean_object* v___y_1979_; lean_object* v___y_1980_; lean_object* v___y_1981_; lean_object* v___y_1982_; lean_object* v_o_1983_; lean_object* v___y_1984_; lean_object* v___y_1985_; lean_object* v___y_1986_; lean_object* v___y_1987_; lean_object* v___y_1988_; lean_object* v___y_1989_; lean_object* v___y_1990_; lean_object* v___y_1991_; lean_object* v_bang_2007_; lean_object* v___y_2008_; lean_object* v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2011_; lean_object* v___y_2012_; lean_object* v___y_2013_; lean_object* v___y_2014_; lean_object* v___y_2015_; lean_object* v___x_2035_; uint8_t v___x_2036_; 
v___x_1200_ = lean_unsigned_to_nat(0u);
v_tk_1201_ = l_Lean_Syntax_getArg(v_stx_1186_, v___x_1200_);
v___x_1975_ = lean_unsigned_to_nat(1u);
v___x_2035_ = l_Lean_Syntax_getArg(v_stx_1186_, v___x_1975_);
v___x_2036_ = l_Lean_Syntax_isNone(v___x_2035_);
if (v___x_2036_ == 0)
{
uint8_t v___x_2037_; 
lean_inc(v___x_2035_);
v___x_2037_ = l_Lean_Syntax_matchesNull(v___x_2035_, v___x_1975_);
if (v___x_2037_ == 0)
{
lean_object* v___x_2038_; 
lean_dec(v___x_2035_);
lean_dec(v_tk_1201_);
lean_dec_ref(v___x_1189_);
lean_dec_ref(v___x_1188_);
lean_dec_ref(v___x_1187_);
v___x_2038_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_2038_;
}
else
{
lean_object* v_bang_2039_; lean_object* v___x_2040_; 
v_bang_2039_ = l_Lean_Syntax_getArg(v___x_2035_, v___x_1200_);
lean_dec(v___x_2035_);
v___x_2040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2040_, 0, v_bang_2039_);
v_bang_2007_ = v___x_2040_;
v___y_2008_ = v___y_1190_;
v___y_2009_ = v___y_1191_;
v___y_2010_ = v___y_1192_;
v___y_2011_ = v___y_1193_;
v___y_2012_ = v___y_1194_;
v___y_2013_ = v___y_1195_;
v___y_2014_ = v___y_1196_;
v___y_2015_ = v___y_1197_;
goto v___jp_2006_;
}
}
else
{
lean_object* v___x_2041_; 
lean_dec(v___x_2035_);
v___x_2041_ = lean_box(0);
v_bang_2007_ = v___x_2041_;
v___y_2008_ = v___y_1190_;
v___y_2009_ = v___y_1191_;
v___y_2010_ = v___y_1192_;
v___y_2011_ = v___y_1193_;
v___y_2012_ = v___y_1194_;
v___y_2013_ = v___y_1195_;
v___y_2014_ = v___y_1196_;
v___y_2015_ = v___y_1197_;
goto v___jp_2006_;
}
v___jp_1202_:
{
lean_object* v___x_1217_; lean_object* v___f_1218_; lean_object* v___x_1219_; 
v___x_1217_ = lean_box(v___y_1205_);
v___f_1218_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__0___boxed), 15, 5);
lean_closure_set(v___f_1218_, 0, v___y_1206_);
lean_closure_set(v___f_1218_, 1, v___x_1200_);
lean_closure_set(v___f_1218_, 2, v___x_1217_);
lean_closure_set(v___f_1218_, 3, v___y_1216_);
lean_closure_set(v___f_1218_, 4, v___y_1204_);
v___x_1219_ = l_Lean_Elab_Tactic_Simp_DischargeWrapper_with___redArg(v___y_1203_, v___f_1218_, v___y_1215_, v___y_1212_, v___y_1210_, v___y_1214_, v___y_1211_, v___y_1209_, v___y_1207_, v___y_1213_);
lean_dec(v___y_1203_);
if (lean_obj_tag(v___x_1219_) == 0)
{
lean_object* v_a_1220_; lean_object* v_usedTheorems_1221_; lean_object* v_diag_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1264_; 
v_a_1220_ = lean_ctor_get(v___x_1219_, 0);
lean_inc(v_a_1220_);
lean_dec_ref_known(v___x_1219_, 1);
v_usedTheorems_1221_ = lean_ctor_get(v_a_1220_, 0);
v_diag_1222_ = lean_ctor_get(v_a_1220_, 1);
v_isSharedCheck_1264_ = !lean_is_exclusive(v_a_1220_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1224_ = v_a_1220_;
v_isShared_1225_ = v_isSharedCheck_1264_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_diag_1222_);
lean_inc(v_usedTheorems_1221_);
lean_dec(v_a_1220_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1264_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1226_; 
v___x_1226_ = l_Lean_Elab_Tactic_mkSimpCallStx(v___y_1208_, v_usedTheorems_1221_, v___y_1211_, v___y_1209_, v___y_1207_, v___y_1213_);
lean_dec_ref(v_usedTheorems_1221_);
if (lean_obj_tag(v___x_1226_) == 0)
{
lean_object* v_a_1227_; lean_object* v_ref_1228_; lean_object* v___x_1229_; lean_object* v___x_1231_; 
v_a_1227_ = lean_ctor_get(v___x_1226_, 0);
lean_inc(v_a_1227_);
lean_dec_ref_known(v___x_1226_, 1);
v_ref_1228_ = lean_ctor_get(v___y_1207_, 2);
v___x_1229_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__1));
if (v_isShared_1225_ == 0)
{
lean_ctor_set(v___x_1224_, 1, v_a_1227_);
lean_ctor_set(v___x_1224_, 0, v___x_1229_);
v___x_1231_ = v___x_1224_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v___x_1229_);
lean_ctor_set(v_reuseFailAlloc_1255_, 1, v_a_1227_);
v___x_1231_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; uint8_t v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1232_ = lean_box(0);
v___x_1233_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1231_);
lean_ctor_set(v___x_1233_, 1, v___x_1232_);
lean_ctor_set(v___x_1233_, 2, v___x_1232_);
lean_ctor_set(v___x_1233_, 3, v___x_1232_);
lean_ctor_set(v___x_1233_, 4, v___x_1232_);
lean_ctor_set(v___x_1233_, 5, v___x_1232_);
lean_inc(v_ref_1228_);
v___x_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1234_, 0, v_ref_1228_);
v___x_1235_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__2));
v___x_1236_ = 4;
v___x_1237_ = l_Lean_MessageData_nil;
v___x_1238_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_tk_1201_, v___x_1233_, v___x_1234_, v___x_1235_, v___x_1232_, v___x_1236_, v___x_1237_, v___y_1207_, v___y_1213_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1245_; 
v_isSharedCheck_1245_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1245_ == 0)
{
lean_object* v_unused_1246_; 
v_unused_1246_ = lean_ctor_get(v___x_1238_, 0);
lean_dec(v_unused_1246_);
v___x_1240_ = v___x_1238_;
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
else
{
lean_dec(v___x_1238_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1243_; 
if (v_isShared_1241_ == 0)
{
lean_ctor_set(v___x_1240_, 0, v_diag_1222_);
v___x_1243_ = v___x_1240_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v_diag_1222_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
else
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
lean_dec_ref(v_diag_1222_);
v_a_1247_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1238_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1238_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1247_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
}
}
else
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1263_; 
lean_del_object(v___x_1224_);
lean_dec_ref(v_diag_1222_);
lean_dec(v_tk_1201_);
v_a_1256_ = lean_ctor_get(v___x_1226_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1226_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1258_ = v___x_1226_;
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1226_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
if (v_isShared_1259_ == 0)
{
v___x_1261_ = v___x_1258_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_a_1256_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
}
}
else
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1272_; 
lean_dec(v___y_1208_);
lean_dec(v_tk_1201_);
v_a_1265_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1267_ = v___x_1219_;
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v___x_1219_);
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
v___jp_1273_:
{
uint8_t v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1288_ = 0;
v___x_1289_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__3));
v___x_1290_ = l_Lean_Elab_Tactic_mkSimpContext(v___y_1278_, v___x_1288_, v___y_1277_, v___x_1288_, v___x_1289_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_);
lean_dec(v___y_1278_);
if (lean_obj_tag(v___x_1290_) == 0)
{
lean_object* v_a_1291_; 
v_a_1291_ = lean_ctor_get(v___x_1290_, 0);
lean_inc(v_a_1291_);
lean_dec_ref_known(v___x_1290_, 1);
if (lean_obj_tag(v___y_1276_) == 0)
{
lean_object* v_ctx_1292_; lean_object* v_simprocs_1293_; lean_object* v_dischargeWrapper_1294_; 
v_ctx_1292_ = lean_ctor_get(v_a_1291_, 0);
lean_inc_ref(v_ctx_1292_);
v_simprocs_1293_ = lean_ctor_get(v_a_1291_, 1);
lean_inc_ref(v_simprocs_1293_);
v_dischargeWrapper_1294_ = lean_ctor_get(v_a_1291_, 2);
lean_inc(v_dischargeWrapper_1294_);
lean_dec(v_a_1291_);
v___y_1203_ = v_dischargeWrapper_1294_;
v___y_1204_ = v_simprocs_1293_;
v___y_1205_ = v___y_1275_;
v___y_1206_ = v___y_1274_;
v___y_1207_ = v___y_1286_;
v___y_1208_ = v_stxForSuggestion_1279_;
v___y_1209_ = v___y_1285_;
v___y_1210_ = v___y_1282_;
v___y_1211_ = v___y_1284_;
v___y_1212_ = v___y_1281_;
v___y_1213_ = v___y_1287_;
v___y_1214_ = v___y_1283_;
v___y_1215_ = v___y_1280_;
v___y_1216_ = v_ctx_1292_;
goto v___jp_1202_;
}
else
{
lean_object* v_ctx_1295_; lean_object* v_simprocs_1296_; lean_object* v_dischargeWrapper_1297_; lean_object* v___x_1298_; 
lean_dec_ref_known(v___y_1276_, 1);
v_ctx_1295_ = lean_ctor_get(v_a_1291_, 0);
lean_inc_ref(v_ctx_1295_);
v_simprocs_1296_ = lean_ctor_get(v_a_1291_, 1);
lean_inc_ref(v_simprocs_1296_);
v_dischargeWrapper_1297_ = lean_ctor_get(v_a_1291_, 2);
lean_inc(v_dischargeWrapper_1297_);
lean_dec(v_a_1291_);
v___x_1298_ = l_Lean_Meta_Simp_Context_setAutoUnfold(v_ctx_1295_);
v___y_1203_ = v_dischargeWrapper_1297_;
v___y_1204_ = v_simprocs_1296_;
v___y_1205_ = v___y_1275_;
v___y_1206_ = v___y_1274_;
v___y_1207_ = v___y_1286_;
v___y_1208_ = v_stxForSuggestion_1279_;
v___y_1209_ = v___y_1285_;
v___y_1210_ = v___y_1282_;
v___y_1211_ = v___y_1284_;
v___y_1212_ = v___y_1281_;
v___y_1213_ = v___y_1287_;
v___y_1214_ = v___y_1283_;
v___y_1215_ = v___y_1280_;
v___y_1216_ = v___x_1298_;
goto v___jp_1202_;
}
}
else
{
lean_object* v_a_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1306_; 
lean_dec(v_stxForSuggestion_1279_);
lean_dec(v___y_1276_);
lean_dec(v___y_1274_);
lean_dec(v_tk_1201_);
v_a_1299_ = lean_ctor_get(v___x_1290_, 0);
v_isSharedCheck_1306_ = !lean_is_exclusive(v___x_1290_);
if (v_isSharedCheck_1306_ == 0)
{
v___x_1301_ = v___x_1290_;
v_isShared_1302_ = v_isSharedCheck_1306_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_a_1299_);
lean_dec(v___x_1290_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1306_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1304_; 
if (v_isShared_1302_ == 0)
{
v___x_1304_ = v___x_1301_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v_a_1299_);
v___x_1304_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
return v___x_1304_;
}
}
}
}
v___jp_1307_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
lean_inc_ref(v___y_1311_);
v___x_1331_ = l_Array_append___redArg(v___y_1311_, v___y_1330_);
lean_dec_ref(v___y_1330_);
lean_inc(v___y_1316_);
lean_inc(v___y_1328_);
v___x_1332_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1332_, 0, v___y_1328_);
lean_ctor_set(v___x_1332_, 1, v___y_1316_);
lean_ctor_set(v___x_1332_, 2, v___x_1331_);
v___x_1333_ = l_Lean_Syntax_node6(v___y_1328_, v___y_1321_, v___y_1326_, v___y_1318_, v___y_1329_, v___y_1325_, v___y_1322_, v___x_1332_);
v___y_1274_ = v___y_1309_;
v___y_1275_ = v___y_1308_;
v___y_1276_ = v___y_1313_;
v___y_1277_ = v___y_1315_;
v___y_1278_ = v___y_1319_;
v_stxForSuggestion_1279_ = v___x_1333_;
v___y_1280_ = v___y_1323_;
v___y_1281_ = v___y_1317_;
v___y_1282_ = v___y_1327_;
v___y_1283_ = v___y_1312_;
v___y_1284_ = v___y_1320_;
v___y_1285_ = v___y_1324_;
v___y_1286_ = v___y_1310_;
v___y_1287_ = v___y_1314_;
goto v___jp_1273_;
}
v___jp_1334_:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
lean_inc_ref_n(v___y_1337_, 2);
v___x_1358_ = l_Array_append___redArg(v___y_1337_, v___y_1357_);
lean_dec_ref(v___y_1357_);
lean_inc_n(v___y_1342_, 3);
lean_inc_n(v___y_1354_, 5);
v___x_1359_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1359_, 0, v___y_1354_);
lean_ctor_set(v___x_1359_, 1, v___y_1342_);
lean_ctor_set(v___x_1359_, 2, v___x_1358_);
v___x_1360_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__4));
v___x_1361_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1361_, 0, v___y_1354_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
v___x_1362_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__5));
v___x_1363_ = l_Lean_Syntax_SepArray_ofElems(v___x_1362_, v___y_1353_);
lean_dec_ref(v___y_1353_);
v___x_1364_ = l_Array_append___redArg(v___y_1337_, v___x_1363_);
lean_dec_ref(v___x_1363_);
v___x_1365_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1365_, 0, v___y_1354_);
lean_ctor_set(v___x_1365_, 1, v___y_1342_);
lean_ctor_set(v___x_1365_, 2, v___x_1364_);
v___x_1366_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__6));
v___x_1367_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___y_1354_);
lean_ctor_set(v___x_1367_, 1, v___x_1366_);
v___x_1368_ = l_Lean_Syntax_node3(v___y_1354_, v___y_1342_, v___x_1361_, v___x_1365_, v___x_1367_);
if (lean_obj_tag(v___y_1356_) == 1)
{
lean_object* v_val_1369_; lean_object* v___x_1370_; 
v_val_1369_ = lean_ctor_get(v___y_1356_, 0);
lean_inc(v_val_1369_);
lean_dec_ref_known(v___y_1356_, 1);
v___x_1370_ = l_Array_mkArray1___redArg(v_val_1369_);
v___y_1308_ = v___y_1336_;
v___y_1309_ = v___y_1335_;
v___y_1310_ = v___y_1338_;
v___y_1311_ = v___y_1337_;
v___y_1312_ = v___y_1339_;
v___y_1313_ = v___y_1340_;
v___y_1314_ = v___y_1341_;
v___y_1315_ = v___y_1343_;
v___y_1316_ = v___y_1342_;
v___y_1317_ = v___y_1344_;
v___y_1318_ = v___y_1345_;
v___y_1319_ = v___y_1346_;
v___y_1320_ = v___y_1347_;
v___y_1321_ = v___y_1349_;
v___y_1322_ = v___x_1368_;
v___y_1323_ = v___y_1348_;
v___y_1324_ = v___y_1350_;
v___y_1325_ = v___x_1359_;
v___y_1326_ = v___y_1352_;
v___y_1327_ = v___y_1351_;
v___y_1328_ = v___y_1354_;
v___y_1329_ = v___y_1355_;
v___y_1330_ = v___x_1370_;
goto v___jp_1307_;
}
else
{
lean_object* v___x_1371_; 
lean_dec(v___y_1356_);
v___x_1371_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_1308_ = v___y_1336_;
v___y_1309_ = v___y_1335_;
v___y_1310_ = v___y_1338_;
v___y_1311_ = v___y_1337_;
v___y_1312_ = v___y_1339_;
v___y_1313_ = v___y_1340_;
v___y_1314_ = v___y_1341_;
v___y_1315_ = v___y_1343_;
v___y_1316_ = v___y_1342_;
v___y_1317_ = v___y_1344_;
v___y_1318_ = v___y_1345_;
v___y_1319_ = v___y_1346_;
v___y_1320_ = v___y_1347_;
v___y_1321_ = v___y_1349_;
v___y_1322_ = v___x_1368_;
v___y_1323_ = v___y_1348_;
v___y_1324_ = v___y_1350_;
v___y_1325_ = v___x_1359_;
v___y_1326_ = v___y_1352_;
v___y_1327_ = v___y_1351_;
v___y_1328_ = v___y_1354_;
v___y_1329_ = v___y_1355_;
v___y_1330_ = v___x_1371_;
goto v___jp_1307_;
}
}
v___jp_1372_:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; 
lean_inc_ref(v___y_1375_);
v___x_1397_ = l_Array_append___redArg(v___y_1375_, v___y_1396_);
lean_dec_ref(v___y_1396_);
lean_inc(v___y_1381_);
lean_inc(v___y_1394_);
v___x_1398_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1398_, 0, v___y_1394_);
lean_ctor_set(v___x_1398_, 1, v___y_1381_);
lean_ctor_set(v___x_1398_, 2, v___x_1397_);
if (lean_obj_tag(v___y_1387_) == 1)
{
lean_object* v_val_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
v_val_1399_ = lean_ctor_get(v___y_1387_, 0);
lean_inc(v_val_1399_);
lean_dec_ref_known(v___y_1387_, 1);
v___x_1400_ = l_Lean_SourceInfo_fromRef(v_val_1399_, v___y_1377_);
lean_dec(v_val_1399_);
v___x_1401_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8));
v___x_1402_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1400_);
lean_ctor_set(v___x_1402_, 1, v___x_1401_);
v___x_1403_ = l_Array_mkArray1___redArg(v___x_1402_);
v___y_1335_ = v___y_1374_;
v___y_1336_ = v___y_1373_;
v___y_1337_ = v___y_1375_;
v___y_1338_ = v___y_1376_;
v___y_1339_ = v___y_1378_;
v___y_1340_ = v___y_1379_;
v___y_1341_ = v___y_1380_;
v___y_1342_ = v___y_1381_;
v___y_1343_ = v___y_1382_;
v___y_1344_ = v___y_1383_;
v___y_1345_ = v___y_1384_;
v___y_1346_ = v___y_1385_;
v___y_1347_ = v___y_1386_;
v___y_1348_ = v___y_1389_;
v___y_1349_ = v___y_1388_;
v___y_1350_ = v___y_1390_;
v___y_1351_ = v___y_1392_;
v___y_1352_ = v___y_1391_;
v___y_1353_ = v___y_1393_;
v___y_1354_ = v___y_1394_;
v___y_1355_ = v___x_1398_;
v___y_1356_ = v___y_1395_;
v___y_1357_ = v___x_1403_;
goto v___jp_1334_;
}
else
{
lean_object* v___x_1404_; 
lean_dec(v___y_1387_);
v___x_1404_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_1335_ = v___y_1374_;
v___y_1336_ = v___y_1373_;
v___y_1337_ = v___y_1375_;
v___y_1338_ = v___y_1376_;
v___y_1339_ = v___y_1378_;
v___y_1340_ = v___y_1379_;
v___y_1341_ = v___y_1380_;
v___y_1342_ = v___y_1381_;
v___y_1343_ = v___y_1382_;
v___y_1344_ = v___y_1383_;
v___y_1345_ = v___y_1384_;
v___y_1346_ = v___y_1385_;
v___y_1347_ = v___y_1386_;
v___y_1348_ = v___y_1389_;
v___y_1349_ = v___y_1388_;
v___y_1350_ = v___y_1390_;
v___y_1351_ = v___y_1392_;
v___y_1352_ = v___y_1391_;
v___y_1353_ = v___y_1393_;
v___y_1354_ = v___y_1394_;
v___y_1355_ = v___x_1398_;
v___y_1356_ = v___y_1395_;
v___y_1357_ = v___x_1404_;
goto v___jp_1334_;
}
}
v___jp_1405_:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
lean_inc_ref(v___y_1414_);
v___x_1429_ = l_Array_append___redArg(v___y_1414_, v___y_1428_);
lean_dec_ref(v___y_1428_);
lean_inc(v___y_1409_);
lean_inc(v___y_1423_);
v___x_1430_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1430_, 0, v___y_1423_);
lean_ctor_set(v___x_1430_, 1, v___y_1409_);
lean_ctor_set(v___x_1430_, 2, v___x_1429_);
v___x_1431_ = l_Lean_Syntax_node6(v___y_1423_, v___y_1424_, v___y_1426_, v___y_1417_, v___y_1422_, v___y_1416_, v___y_1427_, v___x_1430_);
v___y_1274_ = v___y_1407_;
v___y_1275_ = v___y_1406_;
v___y_1276_ = v___y_1411_;
v___y_1277_ = v___y_1413_;
v___y_1278_ = v___y_1418_;
v_stxForSuggestion_1279_ = v___x_1431_;
v___y_1280_ = v___y_1420_;
v___y_1281_ = v___y_1415_;
v___y_1282_ = v___y_1425_;
v___y_1283_ = v___y_1410_;
v___y_1284_ = v___y_1419_;
v___y_1285_ = v___y_1421_;
v___y_1286_ = v___y_1408_;
v___y_1287_ = v___y_1412_;
goto v___jp_1273_;
}
v___jp_1432_:
{
lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
lean_inc_ref_n(v___y_1440_, 2);
v___x_1456_ = l_Array_append___redArg(v___y_1440_, v___y_1455_);
lean_dec_ref(v___y_1455_);
lean_inc_n(v___y_1436_, 3);
lean_inc_n(v___y_1449_, 5);
v___x_1457_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1457_, 0, v___y_1449_);
lean_ctor_set(v___x_1457_, 1, v___y_1436_);
lean_ctor_set(v___x_1457_, 2, v___x_1456_);
v___x_1458_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__4));
v___x_1459_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1459_, 0, v___y_1449_);
lean_ctor_set(v___x_1459_, 1, v___x_1458_);
v___x_1460_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__5));
v___x_1461_ = l_Lean_Syntax_SepArray_ofElems(v___x_1460_, v___y_1452_);
lean_dec_ref(v___y_1452_);
v___x_1462_ = l_Array_append___redArg(v___y_1440_, v___x_1461_);
lean_dec_ref(v___x_1461_);
v___x_1463_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1463_, 0, v___y_1449_);
lean_ctor_set(v___x_1463_, 1, v___y_1436_);
lean_ctor_set(v___x_1463_, 2, v___x_1462_);
v___x_1464_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__6));
v___x_1465_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1465_, 0, v___y_1449_);
lean_ctor_set(v___x_1465_, 1, v___x_1464_);
v___x_1466_ = l_Lean_Syntax_node3(v___y_1449_, v___y_1436_, v___x_1459_, v___x_1463_, v___x_1465_);
if (lean_obj_tag(v___y_1454_) == 1)
{
lean_object* v_val_1467_; lean_object* v___x_1468_; 
v_val_1467_ = lean_ctor_get(v___y_1454_, 0);
lean_inc(v_val_1467_);
lean_dec_ref_known(v___y_1454_, 1);
v___x_1468_ = l_Array_mkArray1___redArg(v_val_1467_);
v___y_1406_ = v___y_1434_;
v___y_1407_ = v___y_1433_;
v___y_1408_ = v___y_1435_;
v___y_1409_ = v___y_1436_;
v___y_1410_ = v___y_1437_;
v___y_1411_ = v___y_1438_;
v___y_1412_ = v___y_1439_;
v___y_1413_ = v___y_1441_;
v___y_1414_ = v___y_1440_;
v___y_1415_ = v___y_1442_;
v___y_1416_ = v___x_1457_;
v___y_1417_ = v___y_1443_;
v___y_1418_ = v___y_1444_;
v___y_1419_ = v___y_1445_;
v___y_1420_ = v___y_1446_;
v___y_1421_ = v___y_1448_;
v___y_1422_ = v___y_1447_;
v___y_1423_ = v___y_1449_;
v___y_1424_ = v___y_1451_;
v___y_1425_ = v___y_1450_;
v___y_1426_ = v___y_1453_;
v___y_1427_ = v___x_1466_;
v___y_1428_ = v___x_1468_;
goto v___jp_1405_;
}
else
{
lean_object* v___x_1469_; 
lean_dec(v___y_1454_);
v___x_1469_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_1406_ = v___y_1434_;
v___y_1407_ = v___y_1433_;
v___y_1408_ = v___y_1435_;
v___y_1409_ = v___y_1436_;
v___y_1410_ = v___y_1437_;
v___y_1411_ = v___y_1438_;
v___y_1412_ = v___y_1439_;
v___y_1413_ = v___y_1441_;
v___y_1414_ = v___y_1440_;
v___y_1415_ = v___y_1442_;
v___y_1416_ = v___x_1457_;
v___y_1417_ = v___y_1443_;
v___y_1418_ = v___y_1444_;
v___y_1419_ = v___y_1445_;
v___y_1420_ = v___y_1446_;
v___y_1421_ = v___y_1448_;
v___y_1422_ = v___y_1447_;
v___y_1423_ = v___y_1449_;
v___y_1424_ = v___y_1451_;
v___y_1425_ = v___y_1450_;
v___y_1426_ = v___y_1453_;
v___y_1427_ = v___x_1466_;
v___y_1428_ = v___x_1469_;
goto v___jp_1405_;
}
}
v___jp_1470_:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
lean_inc_ref(v___y_1479_);
v___x_1495_ = l_Array_append___redArg(v___y_1479_, v___y_1494_);
lean_dec_ref(v___y_1494_);
lean_inc(v___y_1474_);
lean_inc(v___y_1488_);
v___x_1496_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1496_, 0, v___y_1488_);
lean_ctor_set(v___x_1496_, 1, v___y_1474_);
lean_ctor_set(v___x_1496_, 2, v___x_1495_);
if (lean_obj_tag(v___y_1485_) == 1)
{
lean_object* v_val_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v_val_1497_ = lean_ctor_get(v___y_1485_, 0);
lean_inc(v_val_1497_);
lean_dec_ref_known(v___y_1485_, 1);
v___x_1498_ = l_Lean_SourceInfo_fromRef(v_val_1497_, v___y_1475_);
lean_dec(v_val_1497_);
v___x_1499_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8));
v___x_1500_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1498_);
lean_ctor_set(v___x_1500_, 1, v___x_1499_);
v___x_1501_ = l_Array_mkArray1___redArg(v___x_1500_);
v___y_1433_ = v___y_1472_;
v___y_1434_ = v___y_1471_;
v___y_1435_ = v___y_1473_;
v___y_1436_ = v___y_1474_;
v___y_1437_ = v___y_1476_;
v___y_1438_ = v___y_1477_;
v___y_1439_ = v___y_1478_;
v___y_1440_ = v___y_1479_;
v___y_1441_ = v___y_1480_;
v___y_1442_ = v___y_1481_;
v___y_1443_ = v___y_1482_;
v___y_1444_ = v___y_1483_;
v___y_1445_ = v___y_1484_;
v___y_1446_ = v___y_1486_;
v___y_1447_ = v___x_1496_;
v___y_1448_ = v___y_1487_;
v___y_1449_ = v___y_1488_;
v___y_1450_ = v___y_1490_;
v___y_1451_ = v___y_1489_;
v___y_1452_ = v___y_1491_;
v___y_1453_ = v___y_1492_;
v___y_1454_ = v___y_1493_;
v___y_1455_ = v___x_1501_;
goto v___jp_1432_;
}
else
{
lean_object* v___x_1502_; 
lean_dec(v___y_1485_);
v___x_1502_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_1433_ = v___y_1472_;
v___y_1434_ = v___y_1471_;
v___y_1435_ = v___y_1473_;
v___y_1436_ = v___y_1474_;
v___y_1437_ = v___y_1476_;
v___y_1438_ = v___y_1477_;
v___y_1439_ = v___y_1478_;
v___y_1440_ = v___y_1479_;
v___y_1441_ = v___y_1480_;
v___y_1442_ = v___y_1481_;
v___y_1443_ = v___y_1482_;
v___y_1444_ = v___y_1483_;
v___y_1445_ = v___y_1484_;
v___y_1446_ = v___y_1486_;
v___y_1447_ = v___x_1496_;
v___y_1448_ = v___y_1487_;
v___y_1449_ = v___y_1488_;
v___y_1450_ = v___y_1490_;
v___y_1451_ = v___y_1489_;
v___y_1452_ = v___y_1491_;
v___y_1453_ = v___y_1492_;
v___y_1454_ = v___y_1493_;
v___y_1455_ = v___x_1502_;
goto v___jp_1432_;
}
}
v___jp_1503_:
{
lean_object* v___x_1523_; 
v___x_1523_ = l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___redArg(v___y_1513_);
if (lean_obj_tag(v___y_1508_) == 0)
{
lean_object* v_a_1524_; lean_object* v_ref_1525_; uint8_t v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v_a_1524_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_a_1524_);
lean_dec_ref(v___x_1523_);
v_ref_1525_ = lean_ctor_get(v___y_1521_, 2);
v___x_1526_ = 0;
v___x_1527_ = l_Lean_SourceInfo_fromRef(v_ref_1525_, v___x_1526_);
v___x_1528_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__9));
v___x_1529_ = l_Lean_Name_mkStr4(v___x_1187_, v___x_1188_, v___x_1189_, v___x_1528_);
v___x_1530_ = l_Lean_SourceInfo_fromRef(v_tk_1201_, v___y_1507_);
v___x_1531_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1530_);
lean_ctor_set(v___x_1531_, 1, v___x_1528_);
v___x_1532_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_1533_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
if (lean_obj_tag(v___y_1511_) == 1)
{
lean_object* v_val_1534_; lean_object* v___x_1535_; 
v_val_1534_ = lean_ctor_get(v___y_1511_, 0);
lean_inc(v_val_1534_);
lean_dec_ref_known(v___y_1511_, 1);
v___x_1535_ = l_Array_mkArray1___redArg(v_val_1534_);
v___y_1471_ = v___y_1505_;
v___y_1472_ = v___y_1504_;
v___y_1473_ = v___y_1521_;
v___y_1474_ = v___x_1532_;
v___y_1475_ = v___y_1507_;
v___y_1476_ = v___y_1518_;
v___y_1477_ = v___y_1508_;
v___y_1478_ = v___y_1522_;
v___y_1479_ = v___x_1533_;
v___y_1480_ = v___y_1510_;
v___y_1481_ = v___y_1516_;
v___y_1482_ = v_a_1524_;
v___y_1483_ = v_stxForExecution_1514_;
v___y_1484_ = v___y_1519_;
v___y_1485_ = v___y_1506_;
v___y_1486_ = v___y_1515_;
v___y_1487_ = v___y_1520_;
v___y_1488_ = v___x_1527_;
v___y_1489_ = v___x_1529_;
v___y_1490_ = v___y_1517_;
v___y_1491_ = v___y_1509_;
v___y_1492_ = v___x_1531_;
v___y_1493_ = v___y_1512_;
v___y_1494_ = v___x_1535_;
goto v___jp_1470_;
}
else
{
lean_object* v___x_1536_; 
lean_dec(v___y_1511_);
v___x_1536_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_1471_ = v___y_1505_;
v___y_1472_ = v___y_1504_;
v___y_1473_ = v___y_1521_;
v___y_1474_ = v___x_1532_;
v___y_1475_ = v___y_1507_;
v___y_1476_ = v___y_1518_;
v___y_1477_ = v___y_1508_;
v___y_1478_ = v___y_1522_;
v___y_1479_ = v___x_1533_;
v___y_1480_ = v___y_1510_;
v___y_1481_ = v___y_1516_;
v___y_1482_ = v_a_1524_;
v___y_1483_ = v_stxForExecution_1514_;
v___y_1484_ = v___y_1519_;
v___y_1485_ = v___y_1506_;
v___y_1486_ = v___y_1515_;
v___y_1487_ = v___y_1520_;
v___y_1488_ = v___x_1527_;
v___y_1489_ = v___x_1529_;
v___y_1490_ = v___y_1517_;
v___y_1491_ = v___y_1509_;
v___y_1492_ = v___x_1531_;
v___y_1493_ = v___y_1512_;
v___y_1494_ = v___x_1536_;
goto v___jp_1470_;
}
}
else
{
lean_object* v_a_1537_; lean_object* v_ref_1538_; uint8_t v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v_a_1537_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_a_1537_);
lean_dec_ref(v___x_1523_);
v_ref_1538_ = lean_ctor_get(v___y_1521_, 2);
v___x_1539_ = 0;
v___x_1540_ = l_Lean_SourceInfo_fromRef(v_ref_1538_, v___x_1539_);
v___x_1541_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__10));
v___x_1542_ = l_Lean_Name_mkStr4(v___x_1187_, v___x_1188_, v___x_1189_, v___x_1541_);
v___x_1543_ = l_Lean_SourceInfo_fromRef(v_tk_1201_, v___y_1507_);
v___x_1544_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__11));
v___x_1545_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1543_);
lean_ctor_set(v___x_1545_, 1, v___x_1544_);
v___x_1546_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_1547_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
if (lean_obj_tag(v___y_1511_) == 1)
{
lean_object* v_val_1548_; lean_object* v___x_1549_; 
v_val_1548_ = lean_ctor_get(v___y_1511_, 0);
lean_inc(v_val_1548_);
lean_dec_ref_known(v___y_1511_, 1);
v___x_1549_ = l_Array_mkArray1___redArg(v_val_1548_);
v___y_1373_ = v___y_1505_;
v___y_1374_ = v___y_1504_;
v___y_1375_ = v___x_1547_;
v___y_1376_ = v___y_1521_;
v___y_1377_ = v___y_1507_;
v___y_1378_ = v___y_1518_;
v___y_1379_ = v___y_1508_;
v___y_1380_ = v___y_1522_;
v___y_1381_ = v___x_1546_;
v___y_1382_ = v___y_1510_;
v___y_1383_ = v___y_1516_;
v___y_1384_ = v_a_1537_;
v___y_1385_ = v_stxForExecution_1514_;
v___y_1386_ = v___y_1519_;
v___y_1387_ = v___y_1506_;
v___y_1388_ = v___x_1542_;
v___y_1389_ = v___y_1515_;
v___y_1390_ = v___y_1520_;
v___y_1391_ = v___x_1545_;
v___y_1392_ = v___y_1517_;
v___y_1393_ = v___y_1509_;
v___y_1394_ = v___x_1540_;
v___y_1395_ = v___y_1512_;
v___y_1396_ = v___x_1549_;
goto v___jp_1372_;
}
else
{
lean_object* v___x_1550_; 
lean_dec(v___y_1511_);
v___x_1550_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_1373_ = v___y_1505_;
v___y_1374_ = v___y_1504_;
v___y_1375_ = v___x_1547_;
v___y_1376_ = v___y_1521_;
v___y_1377_ = v___y_1507_;
v___y_1378_ = v___y_1518_;
v___y_1379_ = v___y_1508_;
v___y_1380_ = v___y_1522_;
v___y_1381_ = v___x_1546_;
v___y_1382_ = v___y_1510_;
v___y_1383_ = v___y_1516_;
v___y_1384_ = v_a_1537_;
v___y_1385_ = v_stxForExecution_1514_;
v___y_1386_ = v___y_1519_;
v___y_1387_ = v___y_1506_;
v___y_1388_ = v___x_1542_;
v___y_1389_ = v___y_1515_;
v___y_1390_ = v___y_1520_;
v___y_1391_ = v___x_1545_;
v___y_1392_ = v___y_1517_;
v___y_1393_ = v___y_1509_;
v___y_1394_ = v___x_1540_;
v___y_1395_ = v___y_1512_;
v___y_1396_ = v___x_1550_;
goto v___jp_1372_;
}
}
}
v___jp_1551_:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
lean_inc_ref(v___y_1569_);
v___x_1579_ = l_Array_append___redArg(v___y_1569_, v___y_1578_);
lean_dec_ref(v___y_1578_);
lean_inc(v___y_1556_);
lean_inc(v___y_1572_);
v___x_1580_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1580_, 0, v___y_1572_);
lean_ctor_set(v___x_1580_, 1, v___y_1556_);
lean_ctor_set(v___x_1580_, 2, v___x_1579_);
lean_inc(v___y_1571_);
v___x_1581_ = l_Lean_Syntax_node6(v___y_1572_, v___y_1558_, v___y_1557_, v___y_1571_, v___y_1565_, v___y_1564_, v___y_1574_, v___x_1580_);
v___y_1504_ = v___y_1553_;
v___y_1505_ = v___y_1552_;
v___y_1506_ = v___y_1573_;
v___y_1507_ = v___y_1568_;
v___y_1508_ = v___y_1559_;
v___y_1509_ = v___y_1563_;
v___y_1510_ = v___y_1561_;
v___y_1511_ = v___y_1576_;
v___y_1512_ = v___y_1577_;
v___y_1513_ = v___y_1571_;
v_stxForExecution_1514_ = v___x_1581_;
v___y_1515_ = v___y_1567_;
v___y_1516_ = v___y_1555_;
v___y_1517_ = v___y_1554_;
v___y_1518_ = v___y_1570_;
v___y_1519_ = v___y_1566_;
v___y_1520_ = v___y_1562_;
v___y_1521_ = v___y_1575_;
v___y_1522_ = v___y_1560_;
goto v___jp_1503_;
}
v___jp_1582_:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; 
lean_inc_ref_n(v___y_1593_, 2);
v___x_1608_ = l_Array_append___redArg(v___y_1593_, v___y_1607_);
lean_dec_ref(v___y_1607_);
lean_inc_n(v___y_1587_, 3);
lean_inc_n(v___y_1599_, 5);
v___x_1609_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1609_, 0, v___y_1599_);
lean_ctor_set(v___x_1609_, 1, v___y_1587_);
lean_ctor_set(v___x_1609_, 2, v___x_1608_);
v___x_1610_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__4));
v___x_1611_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1611_, 0, v___y_1599_);
lean_ctor_set(v___x_1611_, 1, v___x_1610_);
v___x_1612_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__5));
v___x_1613_ = l_Lean_Syntax_SepArray_ofElems(v___x_1612_, v___y_1603_);
v___x_1614_ = l_Array_append___redArg(v___y_1593_, v___x_1613_);
lean_dec_ref(v___x_1613_);
v___x_1615_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1615_, 0, v___y_1599_);
lean_ctor_set(v___x_1615_, 1, v___y_1587_);
lean_ctor_set(v___x_1615_, 2, v___x_1614_);
v___x_1616_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__6));
v___x_1617_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___y_1599_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
v___x_1618_ = l_Lean_Syntax_node3(v___y_1599_, v___y_1587_, v___x_1611_, v___x_1615_, v___x_1617_);
if (lean_obj_tag(v___y_1605_) == 1)
{
lean_object* v_val_1619_; lean_object* v___x_1620_; 
v_val_1619_ = lean_ctor_get(v___y_1605_, 0);
lean_inc(v_val_1619_);
v___x_1620_ = l_Array_mkArray1___redArg(v_val_1619_);
v___y_1552_ = v___y_1584_;
v___y_1553_ = v___y_1583_;
v___y_1554_ = v___y_1586_;
v___y_1555_ = v___y_1588_;
v___y_1556_ = v___y_1587_;
v___y_1557_ = v___y_1591_;
v___y_1558_ = v___y_1592_;
v___y_1559_ = v___y_1594_;
v___y_1560_ = v___y_1595_;
v___y_1561_ = v___y_1596_;
v___y_1562_ = v___y_1600_;
v___y_1563_ = v___y_1603_;
v___y_1564_ = v___x_1609_;
v___y_1565_ = v___y_1606_;
v___y_1566_ = v___y_1585_;
v___y_1567_ = v___y_1589_;
v___y_1568_ = v___y_1590_;
v___y_1569_ = v___y_1593_;
v___y_1570_ = v___y_1597_;
v___y_1571_ = v___y_1598_;
v___y_1572_ = v___y_1599_;
v___y_1573_ = v___y_1601_;
v___y_1574_ = v___x_1618_;
v___y_1575_ = v___y_1602_;
v___y_1576_ = v___y_1604_;
v___y_1577_ = v___y_1605_;
v___y_1578_ = v___x_1620_;
goto v___jp_1551_;
}
else
{
lean_object* v___x_1621_; 
v___x_1621_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_1552_ = v___y_1584_;
v___y_1553_ = v___y_1583_;
v___y_1554_ = v___y_1586_;
v___y_1555_ = v___y_1588_;
v___y_1556_ = v___y_1587_;
v___y_1557_ = v___y_1591_;
v___y_1558_ = v___y_1592_;
v___y_1559_ = v___y_1594_;
v___y_1560_ = v___y_1595_;
v___y_1561_ = v___y_1596_;
v___y_1562_ = v___y_1600_;
v___y_1563_ = v___y_1603_;
v___y_1564_ = v___x_1609_;
v___y_1565_ = v___y_1606_;
v___y_1566_ = v___y_1585_;
v___y_1567_ = v___y_1589_;
v___y_1568_ = v___y_1590_;
v___y_1569_ = v___y_1593_;
v___y_1570_ = v___y_1597_;
v___y_1571_ = v___y_1598_;
v___y_1572_ = v___y_1599_;
v___y_1573_ = v___y_1601_;
v___y_1574_ = v___x_1618_;
v___y_1575_ = v___y_1602_;
v___y_1576_ = v___y_1604_;
v___y_1577_ = v___y_1605_;
v___y_1578_ = v___x_1621_;
goto v___jp_1551_;
}
}
v___jp_1622_:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; 
lean_inc_ref(v___y_1633_);
v___x_1647_ = l_Array_append___redArg(v___y_1633_, v___y_1646_);
lean_dec_ref(v___y_1646_);
lean_inc(v___y_1627_);
lean_inc(v___y_1640_);
v___x_1648_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1648_, 0, v___y_1640_);
lean_ctor_set(v___x_1648_, 1, v___y_1627_);
lean_ctor_set(v___x_1648_, 2, v___x_1647_);
if (lean_obj_tag(v___y_1641_) == 1)
{
lean_object* v_val_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; 
v_val_1649_ = lean_ctor_get(v___y_1641_, 0);
v___x_1650_ = l_Lean_SourceInfo_fromRef(v_val_1649_, v___y_1630_);
v___x_1651_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8));
v___x_1652_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1650_);
lean_ctor_set(v___x_1652_, 1, v___x_1651_);
v___x_1653_ = l_Array_mkArray1___redArg(v___x_1652_);
v___y_1583_ = v___y_1624_;
v___y_1584_ = v___y_1623_;
v___y_1585_ = v___y_1625_;
v___y_1586_ = v___y_1626_;
v___y_1587_ = v___y_1627_;
v___y_1588_ = v___y_1628_;
v___y_1589_ = v___y_1629_;
v___y_1590_ = v___y_1630_;
v___y_1591_ = v___y_1631_;
v___y_1592_ = v___y_1632_;
v___y_1593_ = v___y_1633_;
v___y_1594_ = v___y_1634_;
v___y_1595_ = v___y_1635_;
v___y_1596_ = v___y_1636_;
v___y_1597_ = v___y_1637_;
v___y_1598_ = v___y_1638_;
v___y_1599_ = v___y_1640_;
v___y_1600_ = v___y_1639_;
v___y_1601_ = v___y_1641_;
v___y_1602_ = v___y_1642_;
v___y_1603_ = v___y_1643_;
v___y_1604_ = v___y_1644_;
v___y_1605_ = v___y_1645_;
v___y_1606_ = v___x_1648_;
v___y_1607_ = v___x_1653_;
goto v___jp_1582_;
}
else
{
lean_object* v___x_1654_; 
v___x_1654_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_1583_ = v___y_1624_;
v___y_1584_ = v___y_1623_;
v___y_1585_ = v___y_1625_;
v___y_1586_ = v___y_1626_;
v___y_1587_ = v___y_1627_;
v___y_1588_ = v___y_1628_;
v___y_1589_ = v___y_1629_;
v___y_1590_ = v___y_1630_;
v___y_1591_ = v___y_1631_;
v___y_1592_ = v___y_1632_;
v___y_1593_ = v___y_1633_;
v___y_1594_ = v___y_1634_;
v___y_1595_ = v___y_1635_;
v___y_1596_ = v___y_1636_;
v___y_1597_ = v___y_1637_;
v___y_1598_ = v___y_1638_;
v___y_1599_ = v___y_1640_;
v___y_1600_ = v___y_1639_;
v___y_1601_ = v___y_1641_;
v___y_1602_ = v___y_1642_;
v___y_1603_ = v___y_1643_;
v___y_1604_ = v___y_1644_;
v___y_1605_ = v___y_1645_;
v___y_1606_ = v___x_1648_;
v___y_1607_ = v___x_1654_;
goto v___jp_1582_;
}
}
v___jp_1655_:
{
lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; 
lean_inc_ref(v___y_1663_);
v___x_1683_ = l_Array_append___redArg(v___y_1663_, v___y_1682_);
lean_dec_ref(v___y_1682_);
lean_inc(v___y_1674_);
lean_inc(v___y_1678_);
v___x_1684_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1684_, 0, v___y_1678_);
lean_ctor_set(v___x_1684_, 1, v___y_1674_);
lean_ctor_set(v___x_1684_, 2, v___x_1683_);
lean_inc(v___y_1675_);
v___x_1685_ = l_Lean_Syntax_node6(v___y_1678_, v___y_1666_, v___y_1667_, v___y_1675_, v___y_1664_, v___y_1676_, v___y_1669_, v___x_1684_);
v___y_1504_ = v___y_1657_;
v___y_1505_ = v___y_1656_;
v___y_1506_ = v___y_1677_;
v___y_1507_ = v___y_1672_;
v___y_1508_ = v___y_1660_;
v___y_1509_ = v___y_1668_;
v___y_1510_ = v___y_1662_;
v___y_1511_ = v___y_1680_;
v___y_1512_ = v___y_1681_;
v___y_1513_ = v___y_1675_;
v_stxForExecution_1514_ = v___x_1685_;
v___y_1515_ = v___y_1671_;
v___y_1516_ = v___y_1659_;
v___y_1517_ = v___y_1658_;
v___y_1518_ = v___y_1673_;
v___y_1519_ = v___y_1670_;
v___y_1520_ = v___y_1665_;
v___y_1521_ = v___y_1679_;
v___y_1522_ = v___y_1661_;
goto v___jp_1503_;
}
v___jp_1686_:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
lean_inc_ref_n(v___y_1698_, 2);
v___x_1712_ = l_Array_append___redArg(v___y_1698_, v___y_1711_);
lean_dec_ref(v___y_1711_);
lean_inc_n(v___y_1699_, 3);
lean_inc_n(v___y_1705_, 5);
v___x_1713_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1713_, 0, v___y_1705_);
lean_ctor_set(v___x_1713_, 1, v___y_1699_);
lean_ctor_set(v___x_1713_, 2, v___x_1712_);
v___x_1714_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__4));
v___x_1715_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1715_, 0, v___y_1705_);
lean_ctor_set(v___x_1715_, 1, v___x_1714_);
v___x_1716_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__5));
v___x_1717_ = l_Lean_Syntax_SepArray_ofElems(v___x_1716_, v___y_1708_);
v___x_1718_ = l_Array_append___redArg(v___y_1698_, v___x_1717_);
lean_dec_ref(v___x_1717_);
v___x_1719_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1719_, 0, v___y_1705_);
lean_ctor_set(v___x_1719_, 1, v___y_1699_);
lean_ctor_set(v___x_1719_, 2, v___x_1718_);
v___x_1720_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__6));
v___x_1721_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___y_1705_);
lean_ctor_set(v___x_1721_, 1, v___x_1720_);
v___x_1722_ = l_Lean_Syntax_node3(v___y_1705_, v___y_1699_, v___x_1715_, v___x_1719_, v___x_1721_);
if (lean_obj_tag(v___y_1710_) == 1)
{
lean_object* v_val_1723_; lean_object* v___x_1724_; 
v_val_1723_ = lean_ctor_get(v___y_1710_, 0);
lean_inc(v_val_1723_);
v___x_1724_ = l_Array_mkArray1___redArg(v_val_1723_);
v___y_1656_ = v___y_1688_;
v___y_1657_ = v___y_1687_;
v___y_1658_ = v___y_1690_;
v___y_1659_ = v___y_1691_;
v___y_1660_ = v___y_1694_;
v___y_1661_ = v___y_1695_;
v___y_1662_ = v___y_1696_;
v___y_1663_ = v___y_1698_;
v___y_1664_ = v___y_1701_;
v___y_1665_ = v___y_1702_;
v___y_1666_ = v___y_1704_;
v___y_1667_ = v___y_1706_;
v___y_1668_ = v___y_1708_;
v___y_1669_ = v___x_1722_;
v___y_1670_ = v___y_1689_;
v___y_1671_ = v___y_1692_;
v___y_1672_ = v___y_1693_;
v___y_1673_ = v___y_1697_;
v___y_1674_ = v___y_1699_;
v___y_1675_ = v___y_1700_;
v___y_1676_ = v___x_1713_;
v___y_1677_ = v___y_1703_;
v___y_1678_ = v___y_1705_;
v___y_1679_ = v___y_1707_;
v___y_1680_ = v___y_1709_;
v___y_1681_ = v___y_1710_;
v___y_1682_ = v___x_1724_;
goto v___jp_1655_;
}
else
{
lean_object* v___x_1725_; 
v___x_1725_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_1656_ = v___y_1688_;
v___y_1657_ = v___y_1687_;
v___y_1658_ = v___y_1690_;
v___y_1659_ = v___y_1691_;
v___y_1660_ = v___y_1694_;
v___y_1661_ = v___y_1695_;
v___y_1662_ = v___y_1696_;
v___y_1663_ = v___y_1698_;
v___y_1664_ = v___y_1701_;
v___y_1665_ = v___y_1702_;
v___y_1666_ = v___y_1704_;
v___y_1667_ = v___y_1706_;
v___y_1668_ = v___y_1708_;
v___y_1669_ = v___x_1722_;
v___y_1670_ = v___y_1689_;
v___y_1671_ = v___y_1692_;
v___y_1672_ = v___y_1693_;
v___y_1673_ = v___y_1697_;
v___y_1674_ = v___y_1699_;
v___y_1675_ = v___y_1700_;
v___y_1676_ = v___x_1713_;
v___y_1677_ = v___y_1703_;
v___y_1678_ = v___y_1705_;
v___y_1679_ = v___y_1707_;
v___y_1680_ = v___y_1709_;
v___y_1681_ = v___y_1710_;
v___y_1682_ = v___x_1725_;
goto v___jp_1655_;
}
}
v___jp_1726_:
{
lean_object* v___x_1751_; lean_object* v___x_1752_; 
lean_inc_ref(v___y_1737_);
v___x_1751_ = l_Array_append___redArg(v___y_1737_, v___y_1750_);
lean_dec_ref(v___y_1750_);
lean_inc(v___y_1739_);
lean_inc(v___y_1744_);
v___x_1752_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1752_, 0, v___y_1744_);
lean_ctor_set(v___x_1752_, 1, v___y_1739_);
lean_ctor_set(v___x_1752_, 2, v___x_1751_);
if (lean_obj_tag(v___y_1743_) == 1)
{
lean_object* v_val_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
v_val_1753_ = lean_ctor_get(v___y_1743_, 0);
v___x_1754_ = l_Lean_SourceInfo_fromRef(v_val_1753_, v___y_1733_);
v___x_1755_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8));
v___x_1756_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1754_);
lean_ctor_set(v___x_1756_, 1, v___x_1755_);
v___x_1757_ = l_Array_mkArray1___redArg(v___x_1756_);
v___y_1687_ = v___y_1728_;
v___y_1688_ = v___y_1727_;
v___y_1689_ = v___y_1729_;
v___y_1690_ = v___y_1730_;
v___y_1691_ = v___y_1731_;
v___y_1692_ = v___y_1732_;
v___y_1693_ = v___y_1733_;
v___y_1694_ = v___y_1734_;
v___y_1695_ = v___y_1735_;
v___y_1696_ = v___y_1736_;
v___y_1697_ = v___y_1738_;
v___y_1698_ = v___y_1737_;
v___y_1699_ = v___y_1739_;
v___y_1700_ = v___y_1740_;
v___y_1701_ = v___x_1752_;
v___y_1702_ = v___y_1741_;
v___y_1703_ = v___y_1743_;
v___y_1704_ = v___y_1742_;
v___y_1705_ = v___y_1744_;
v___y_1706_ = v___y_1745_;
v___y_1707_ = v___y_1746_;
v___y_1708_ = v___y_1747_;
v___y_1709_ = v___y_1748_;
v___y_1710_ = v___y_1749_;
v___y_1711_ = v___x_1757_;
goto v___jp_1686_;
}
else
{
lean_object* v___x_1758_; 
v___x_1758_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_1687_ = v___y_1728_;
v___y_1688_ = v___y_1727_;
v___y_1689_ = v___y_1729_;
v___y_1690_ = v___y_1730_;
v___y_1691_ = v___y_1731_;
v___y_1692_ = v___y_1732_;
v___y_1693_ = v___y_1733_;
v___y_1694_ = v___y_1734_;
v___y_1695_ = v___y_1735_;
v___y_1696_ = v___y_1736_;
v___y_1697_ = v___y_1738_;
v___y_1698_ = v___y_1737_;
v___y_1699_ = v___y_1739_;
v___y_1700_ = v___y_1740_;
v___y_1701_ = v___x_1752_;
v___y_1702_ = v___y_1741_;
v___y_1703_ = v___y_1743_;
v___y_1704_ = v___y_1742_;
v___y_1705_ = v___y_1744_;
v___y_1706_ = v___y_1745_;
v___y_1707_ = v___y_1746_;
v___y_1708_ = v___y_1747_;
v___y_1709_ = v___y_1748_;
v___y_1710_ = v___y_1749_;
v___y_1711_ = v___x_1758_;
goto v___jp_1686_;
}
}
v___jp_1759_:
{
if (lean_obj_tag(v___y_1764_) == 0)
{
lean_object* v_ref_1778_; uint8_t v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; 
v_ref_1778_ = lean_ctor_get(v___y_1776_, 2);
v___x_1779_ = 0;
v___x_1780_ = l_Lean_SourceInfo_fromRef(v_ref_1778_, v___x_1779_);
v___x_1781_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__9));
lean_inc_ref(v___x_1189_);
lean_inc_ref(v___x_1188_);
lean_inc_ref(v___x_1187_);
v___x_1782_ = l_Lean_Name_mkStr4(v___x_1187_, v___x_1188_, v___x_1189_, v___x_1781_);
v___x_1783_ = l_Lean_SourceInfo_fromRef(v_tk_1201_, v___y_1763_);
v___x_1784_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1784_, 0, v___x_1783_);
lean_ctor_set(v___x_1784_, 1, v___x_1781_);
v___x_1785_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_1786_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
if (lean_obj_tag(v___y_1766_) == 1)
{
lean_object* v_val_1787_; lean_object* v___x_1788_; 
v_val_1787_ = lean_ctor_get(v___y_1766_, 0);
lean_inc(v_val_1787_);
v___x_1788_ = l_Array_mkArray1___redArg(v_val_1787_);
v___y_1727_ = v___y_1761_;
v___y_1728_ = v___y_1760_;
v___y_1729_ = v___y_1774_;
v___y_1730_ = v___y_1772_;
v___y_1731_ = v___y_1771_;
v___y_1732_ = v___y_1770_;
v___y_1733_ = v___y_1763_;
v___y_1734_ = v___y_1764_;
v___y_1735_ = v___y_1777_;
v___y_1736_ = v___y_1765_;
v___y_1737_ = v___x_1786_;
v___y_1738_ = v___y_1773_;
v___y_1739_ = v___x_1785_;
v___y_1740_ = v___y_1768_;
v___y_1741_ = v___y_1775_;
v___y_1742_ = v___x_1782_;
v___y_1743_ = v___y_1762_;
v___y_1744_ = v___x_1780_;
v___y_1745_ = v___x_1784_;
v___y_1746_ = v___y_1776_;
v___y_1747_ = v_argsArray_1769_;
v___y_1748_ = v___y_1766_;
v___y_1749_ = v___y_1767_;
v___y_1750_ = v___x_1788_;
goto v___jp_1726_;
}
else
{
lean_object* v___x_1789_; 
v___x_1789_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_1727_ = v___y_1761_;
v___y_1728_ = v___y_1760_;
v___y_1729_ = v___y_1774_;
v___y_1730_ = v___y_1772_;
v___y_1731_ = v___y_1771_;
v___y_1732_ = v___y_1770_;
v___y_1733_ = v___y_1763_;
v___y_1734_ = v___y_1764_;
v___y_1735_ = v___y_1777_;
v___y_1736_ = v___y_1765_;
v___y_1737_ = v___x_1786_;
v___y_1738_ = v___y_1773_;
v___y_1739_ = v___x_1785_;
v___y_1740_ = v___y_1768_;
v___y_1741_ = v___y_1775_;
v___y_1742_ = v___x_1782_;
v___y_1743_ = v___y_1762_;
v___y_1744_ = v___x_1780_;
v___y_1745_ = v___x_1784_;
v___y_1746_ = v___y_1776_;
v___y_1747_ = v_argsArray_1769_;
v___y_1748_ = v___y_1766_;
v___y_1749_ = v___y_1767_;
v___y_1750_ = v___x_1789_;
goto v___jp_1726_;
}
}
else
{
lean_object* v_ref_1790_; uint8_t v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; 
v_ref_1790_ = lean_ctor_get(v___y_1776_, 2);
v___x_1791_ = 0;
v___x_1792_ = l_Lean_SourceInfo_fromRef(v_ref_1790_, v___x_1791_);
v___x_1793_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__10));
lean_inc_ref(v___x_1189_);
lean_inc_ref(v___x_1188_);
lean_inc_ref(v___x_1187_);
v___x_1794_ = l_Lean_Name_mkStr4(v___x_1187_, v___x_1188_, v___x_1189_, v___x_1793_);
v___x_1795_ = l_Lean_SourceInfo_fromRef(v_tk_1201_, v___y_1763_);
v___x_1796_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__11));
v___x_1797_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1795_);
lean_ctor_set(v___x_1797_, 1, v___x_1796_);
v___x_1798_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_1799_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
if (lean_obj_tag(v___y_1766_) == 1)
{
lean_object* v_val_1800_; lean_object* v___x_1801_; 
v_val_1800_ = lean_ctor_get(v___y_1766_, 0);
lean_inc(v_val_1800_);
v___x_1801_ = l_Array_mkArray1___redArg(v_val_1800_);
v___y_1623_ = v___y_1761_;
v___y_1624_ = v___y_1760_;
v___y_1625_ = v___y_1774_;
v___y_1626_ = v___y_1772_;
v___y_1627_ = v___x_1798_;
v___y_1628_ = v___y_1771_;
v___y_1629_ = v___y_1770_;
v___y_1630_ = v___y_1763_;
v___y_1631_ = v___x_1797_;
v___y_1632_ = v___x_1794_;
v___y_1633_ = v___x_1799_;
v___y_1634_ = v___y_1764_;
v___y_1635_ = v___y_1777_;
v___y_1636_ = v___y_1765_;
v___y_1637_ = v___y_1773_;
v___y_1638_ = v___y_1768_;
v___y_1639_ = v___y_1775_;
v___y_1640_ = v___x_1792_;
v___y_1641_ = v___y_1762_;
v___y_1642_ = v___y_1776_;
v___y_1643_ = v_argsArray_1769_;
v___y_1644_ = v___y_1766_;
v___y_1645_ = v___y_1767_;
v___y_1646_ = v___x_1801_;
goto v___jp_1622_;
}
else
{
lean_object* v___x_1802_; 
v___x_1802_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_1623_ = v___y_1761_;
v___y_1624_ = v___y_1760_;
v___y_1625_ = v___y_1774_;
v___y_1626_ = v___y_1772_;
v___y_1627_ = v___x_1798_;
v___y_1628_ = v___y_1771_;
v___y_1629_ = v___y_1770_;
v___y_1630_ = v___y_1763_;
v___y_1631_ = v___x_1797_;
v___y_1632_ = v___x_1794_;
v___y_1633_ = v___x_1799_;
v___y_1634_ = v___y_1764_;
v___y_1635_ = v___y_1777_;
v___y_1636_ = v___y_1765_;
v___y_1637_ = v___y_1773_;
v___y_1638_ = v___y_1768_;
v___y_1639_ = v___y_1775_;
v___y_1640_ = v___x_1792_;
v___y_1641_ = v___y_1762_;
v___y_1642_ = v___y_1776_;
v___y_1643_ = v_argsArray_1769_;
v___y_1644_ = v___y_1766_;
v___y_1645_ = v___y_1767_;
v___y_1646_ = v___x_1802_;
goto v___jp_1622_;
}
}
}
v___jp_1803_:
{
lean_object* v___x_1824_; 
v___x_1824_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_1806_, v___y_1810_, v___y_1814_, v___y_1807_, v___y_1817_);
if (lean_obj_tag(v___x_1824_) == 0)
{
lean_object* v_a_1825_; lean_object* v___x_1826_; 
v_a_1825_ = lean_ctor_get(v___x_1824_, 0);
lean_inc(v_a_1825_);
lean_dec_ref_known(v___x_1824_, 1);
v___x_1826_ = l_Lean_LibrarySuggestions_select(v_a_1825_, v___y_1823_, v___y_1810_, v___y_1814_, v___y_1807_, v___y_1817_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_object* v_a_1827_; size_t v_sz_1828_; size_t v___x_1829_; lean_object* v___x_1830_; 
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
lean_inc(v_a_1827_);
lean_dec_ref_known(v___x_1826_, 1);
v_sz_1828_ = lean_array_size(v_a_1827_);
v___x_1829_ = ((size_t)0ULL);
v___x_1830_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__3(v___y_1812_, v_a_1827_, v_sz_1828_, v___x_1829_, v___y_1816_, v___y_1818_, v___y_1806_, v___y_1820_, v___y_1811_, v___y_1810_, v___y_1814_, v___y_1807_, v___y_1817_);
lean_dec(v_a_1827_);
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_object* v_a_1831_; 
v_a_1831_ = lean_ctor_get(v___x_1830_, 0);
lean_inc(v_a_1831_);
lean_dec_ref_known(v___x_1830_, 1);
v___y_1760_ = v___y_1805_;
v___y_1761_ = v___y_1804_;
v___y_1762_ = v___y_1819_;
v___y_1763_ = v___y_1808_;
v___y_1764_ = v___y_1809_;
v___y_1765_ = v___y_1813_;
v___y_1766_ = v___y_1821_;
v___y_1767_ = v___y_1822_;
v___y_1768_ = v___y_1815_;
v_argsArray_1769_ = v_a_1831_;
v___y_1770_ = v___y_1818_;
v___y_1771_ = v___y_1806_;
v___y_1772_ = v___y_1820_;
v___y_1773_ = v___y_1811_;
v___y_1774_ = v___y_1810_;
v___y_1775_ = v___y_1814_;
v___y_1776_ = v___y_1807_;
v___y_1777_ = v___y_1817_;
goto v___jp_1759_;
}
else
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1839_; 
lean_dec(v___y_1822_);
lean_dec(v___y_1821_);
lean_dec(v___y_1819_);
lean_dec(v___y_1815_);
lean_dec(v___y_1809_);
lean_dec(v___y_1805_);
lean_dec(v_tk_1201_);
lean_dec_ref(v___x_1189_);
lean_dec_ref(v___x_1188_);
lean_dec_ref(v___x_1187_);
v_a_1832_ = lean_ctor_get(v___x_1830_, 0);
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1830_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1834_ = v___x_1830_;
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1830_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1837_; 
if (v_isShared_1835_ == 0)
{
v___x_1837_ = v___x_1834_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1832_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
}
else
{
lean_object* v_a_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1847_; 
lean_dec(v___y_1822_);
lean_dec(v___y_1821_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1816_);
lean_dec(v___y_1815_);
lean_dec(v___y_1809_);
lean_dec(v___y_1805_);
lean_dec(v_tk_1201_);
lean_dec_ref(v___x_1189_);
lean_dec_ref(v___x_1188_);
lean_dec_ref(v___x_1187_);
v_a_1840_ = lean_ctor_get(v___x_1826_, 0);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1842_ = v___x_1826_;
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_a_1840_);
lean_dec(v___x_1826_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1845_; 
if (v_isShared_1843_ == 0)
{
v___x_1845_ = v___x_1842_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_a_1840_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
return v___x_1845_;
}
}
}
}
else
{
lean_object* v_a_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1855_; 
lean_dec_ref(v___y_1823_);
lean_dec(v___y_1822_);
lean_dec(v___y_1821_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1816_);
lean_dec(v___y_1815_);
lean_dec(v___y_1809_);
lean_dec(v___y_1805_);
lean_dec(v_tk_1201_);
lean_dec_ref(v___x_1189_);
lean_dec_ref(v___x_1188_);
lean_dec_ref(v___x_1187_);
v_a_1848_ = lean_ctor_get(v___x_1824_, 0);
v_isSharedCheck_1855_ = !lean_is_exclusive(v___x_1824_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1850_ = v___x_1824_;
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_a_1848_);
lean_dec(v___x_1824_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1853_; 
if (v_isShared_1851_ == 0)
{
v___x_1853_ = v___x_1850_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_a_1848_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
return v___x_1853_;
}
}
}
}
v___jp_1856_:
{
lean_object* v_config_1876_; uint8_t v_suggestions_1877_; 
v_config_1876_ = lean_ctor_get(v___y_1873_, 0);
lean_inc_ref(v_config_1876_);
lean_dec_ref(v___y_1873_);
v_suggestions_1877_ = lean_ctor_get_uint8(v_config_1876_, sizeof(void*)*3 + 26);
if (v_suggestions_1877_ == 0)
{
lean_dec_ref(v_config_1876_);
v___y_1760_ = v___y_1858_;
v___y_1761_ = v___y_1857_;
v___y_1762_ = v___y_1869_;
v___y_1763_ = v___y_1861_;
v___y_1764_ = v___y_1862_;
v___y_1765_ = v___y_1865_;
v___y_1766_ = v___y_1872_;
v___y_1767_ = v___y_1874_;
v___y_1768_ = v___y_1867_;
v_argsArray_1769_ = v___y_1875_;
v___y_1770_ = v___y_1870_;
v___y_1771_ = v___y_1859_;
v___y_1772_ = v___y_1871_;
v___y_1773_ = v___y_1864_;
v___y_1774_ = v___y_1863_;
v___y_1775_ = v___y_1866_;
v___y_1776_ = v___y_1860_;
v___y_1777_ = v___y_1868_;
goto v___jp_1759_;
}
else
{
lean_object* v_maxSuggestions_1878_; lean_object* v___x_1879_; lean_object* v___f_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; 
v_maxSuggestions_1878_ = lean_ctor_get(v_config_1876_, 2);
lean_inc(v_maxSuggestions_1878_);
lean_dec_ref(v_config_1876_);
v___x_1879_ = lean_box(v_suggestions_1877_);
v___f_1880_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__1___boxed), 7, 1);
lean_closure_set(v___f_1880_, 0, v___x_1879_);
v___x_1881_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__12));
v___x_1882_ = lean_box(0);
if (lean_obj_tag(v_maxSuggestions_1878_) == 0)
{
lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1883_ = lean_unsigned_to_nat(100u);
v___x_1884_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1884_, 0, v___x_1883_);
lean_ctor_set(v___x_1884_, 1, v___x_1881_);
lean_ctor_set(v___x_1884_, 2, v___f_1880_);
lean_ctor_set(v___x_1884_, 3, v___x_1882_);
v___y_1804_ = v___y_1857_;
v___y_1805_ = v___y_1858_;
v___y_1806_ = v___y_1859_;
v___y_1807_ = v___y_1860_;
v___y_1808_ = v___y_1861_;
v___y_1809_ = v___y_1862_;
v___y_1810_ = v___y_1863_;
v___y_1811_ = v___y_1864_;
v___y_1812_ = v_suggestions_1877_;
v___y_1813_ = v___y_1865_;
v___y_1814_ = v___y_1866_;
v___y_1815_ = v___y_1867_;
v___y_1816_ = v___y_1875_;
v___y_1817_ = v___y_1868_;
v___y_1818_ = v___y_1870_;
v___y_1819_ = v___y_1869_;
v___y_1820_ = v___y_1871_;
v___y_1821_ = v___y_1872_;
v___y_1822_ = v___y_1874_;
v___y_1823_ = v___x_1884_;
goto v___jp_1803_;
}
else
{
lean_object* v_val_1885_; lean_object* v___x_1886_; 
v_val_1885_ = lean_ctor_get(v_maxSuggestions_1878_, 0);
lean_inc(v_val_1885_);
lean_dec_ref_known(v_maxSuggestions_1878_, 1);
v___x_1886_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1886_, 0, v_val_1885_);
lean_ctor_set(v___x_1886_, 1, v___x_1881_);
lean_ctor_set(v___x_1886_, 2, v___f_1880_);
lean_ctor_set(v___x_1886_, 3, v___x_1882_);
v___y_1804_ = v___y_1857_;
v___y_1805_ = v___y_1858_;
v___y_1806_ = v___y_1859_;
v___y_1807_ = v___y_1860_;
v___y_1808_ = v___y_1861_;
v___y_1809_ = v___y_1862_;
v___y_1810_ = v___y_1863_;
v___y_1811_ = v___y_1864_;
v___y_1812_ = v_suggestions_1877_;
v___y_1813_ = v___y_1865_;
v___y_1814_ = v___y_1866_;
v___y_1815_ = v___y_1867_;
v___y_1816_ = v___y_1875_;
v___y_1817_ = v___y_1868_;
v___y_1818_ = v___y_1870_;
v___y_1819_ = v___y_1869_;
v___y_1820_ = v___y_1871_;
v___y_1821_ = v___y_1872_;
v___y_1822_ = v___y_1874_;
v___y_1823_ = v___x_1886_;
goto v___jp_1803_;
}
}
}
v___jp_1887_:
{
uint8_t v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = 0;
lean_inc(v___y_1896_);
v___x_1905_ = l_Lean_Elab_Tactic_elabSimpConfig___redArg(v___y_1896_, v___x_1904_, v___y_1899_, v___y_1897_, v___y_1889_);
if (lean_obj_tag(v___x_1905_) == 0)
{
if (lean_obj_tag(v___y_1902_) == 1)
{
lean_object* v_a_1906_; lean_object* v_val_1907_; lean_object* v___x_1908_; 
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
lean_inc(v_a_1906_);
lean_dec_ref_known(v___x_1905_, 1);
v_val_1907_ = lean_ctor_get(v___y_1902_, 0);
lean_inc(v_val_1907_);
lean_dec_ref_known(v___y_1902_, 1);
v___x_1908_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_val_1907_);
lean_dec(v_val_1907_);
lean_inc(v___y_1901_);
v___y_1857_ = v___y_1893_;
v___y_1858_ = v___y_1901_;
v___y_1859_ = v___y_1898_;
v___y_1860_ = v___y_1897_;
v___y_1861_ = v___y_1888_;
v___y_1862_ = v___y_1890_;
v___y_1863_ = v___y_1900_;
v___y_1864_ = v___y_1894_;
v___y_1865_ = v___x_1904_;
v___y_1866_ = v___y_1891_;
v___y_1867_ = v___y_1896_;
v___y_1868_ = v___y_1889_;
v___y_1869_ = v___y_1892_;
v___y_1870_ = v___y_1899_;
v___y_1871_ = v___y_1895_;
v___y_1872_ = v___y_1903_;
v___y_1873_ = v_a_1906_;
v___y_1874_ = v___y_1901_;
v___y_1875_ = v___x_1908_;
goto v___jp_1856_;
}
else
{
lean_object* v_a_1909_; lean_object* v___x_1910_; 
lean_dec(v___y_1902_);
v_a_1909_ = lean_ctor_get(v___x_1905_, 0);
lean_inc(v_a_1909_);
lean_dec_ref_known(v___x_1905_, 1);
v___x_1910_ = ((lean_object*)(l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___redArg___closed__0));
lean_inc(v___y_1901_);
v___y_1857_ = v___y_1893_;
v___y_1858_ = v___y_1901_;
v___y_1859_ = v___y_1898_;
v___y_1860_ = v___y_1897_;
v___y_1861_ = v___y_1888_;
v___y_1862_ = v___y_1890_;
v___y_1863_ = v___y_1900_;
v___y_1864_ = v___y_1894_;
v___y_1865_ = v___x_1904_;
v___y_1866_ = v___y_1891_;
v___y_1867_ = v___y_1896_;
v___y_1868_ = v___y_1889_;
v___y_1869_ = v___y_1892_;
v___y_1870_ = v___y_1899_;
v___y_1871_ = v___y_1895_;
v___y_1872_ = v___y_1903_;
v___y_1873_ = v_a_1909_;
v___y_1874_ = v___y_1901_;
v___y_1875_ = v___x_1910_;
goto v___jp_1856_;
}
}
else
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1918_; 
lean_dec(v___y_1903_);
lean_dec(v___y_1902_);
lean_dec(v___y_1901_);
lean_dec(v___y_1896_);
lean_dec(v___y_1892_);
lean_dec(v___y_1890_);
lean_dec(v_tk_1201_);
lean_dec_ref(v___x_1189_);
lean_dec_ref(v___x_1188_);
lean_dec_ref(v___x_1187_);
v_a_1911_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1913_ = v___x_1905_;
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v___x_1905_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
v___jp_1919_:
{
lean_object* v___x_1936_; 
v___x_1936_ = l_Lean_Syntax_getOptional_x3f(v___y_1927_);
lean_dec(v___y_1927_);
if (lean_obj_tag(v___x_1936_) == 0)
{
lean_object* v___x_1937_; 
v___x_1937_ = lean_box(0);
v___y_1888_ = v___y_1923_;
v___y_1889_ = v___y_1930_;
v___y_1890_ = v___y_1924_;
v___y_1891_ = v___y_1928_;
v___y_1892_ = v___y_1931_;
v___y_1893_ = v___y_1920_;
v___y_1894_ = v___y_1926_;
v___y_1895_ = v___y_1933_;
v___y_1896_ = v___y_1929_;
v___y_1897_ = v___y_1921_;
v___y_1898_ = v___y_1922_;
v___y_1899_ = v___y_1932_;
v___y_1900_ = v___y_1925_;
v___y_1901_ = v___y_1935_;
v___y_1902_ = v___y_1934_;
v___y_1903_ = v___x_1937_;
goto v___jp_1887_;
}
else
{
lean_object* v_val_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1945_; 
v_val_1938_ = lean_ctor_get(v___x_1936_, 0);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1936_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1940_ = v___x_1936_;
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_val_1938_);
lean_dec(v___x_1936_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1943_; 
if (v_isShared_1941_ == 0)
{
v___x_1943_ = v___x_1940_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_val_1938_);
v___x_1943_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
v___y_1888_ = v___y_1923_;
v___y_1889_ = v___y_1930_;
v___y_1890_ = v___y_1924_;
v___y_1891_ = v___y_1928_;
v___y_1892_ = v___y_1931_;
v___y_1893_ = v___y_1920_;
v___y_1894_ = v___y_1926_;
v___y_1895_ = v___y_1933_;
v___y_1896_ = v___y_1929_;
v___y_1897_ = v___y_1921_;
v___y_1898_ = v___y_1922_;
v___y_1899_ = v___y_1932_;
v___y_1900_ = v___y_1925_;
v___y_1901_ = v___y_1935_;
v___y_1902_ = v___y_1934_;
v___y_1903_ = v___x_1943_;
goto v___jp_1887_;
}
}
}
}
v___jp_1946_:
{
lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1963_ = lean_unsigned_to_nat(4u);
v___x_1964_ = l_Lean_Syntax_getArg(v___y_1950_, v___x_1963_);
lean_dec(v___y_1950_);
v___x_1965_ = l_Lean_Syntax_getOptional_x3f(v___x_1964_);
lean_dec(v___x_1964_);
if (lean_obj_tag(v___x_1965_) == 0)
{
lean_object* v___x_1966_; 
v___x_1966_ = lean_box(0);
v___y_1920_ = v___y_1947_;
v___y_1921_ = v___y_1961_;
v___y_1922_ = v___y_1956_;
v___y_1923_ = v___y_1949_;
v___y_1924_ = v___y_1951_;
v___y_1925_ = v___y_1959_;
v___y_1926_ = v___y_1958_;
v___y_1927_ = v___y_1952_;
v___y_1928_ = v___y_1960_;
v___y_1929_ = v___y_1953_;
v___y_1930_ = v___y_1962_;
v___y_1931_ = v___y_1948_;
v___y_1932_ = v___y_1955_;
v___y_1933_ = v___y_1957_;
v___y_1934_ = v_args_1954_;
v___y_1935_ = v___x_1966_;
goto v___jp_1919_;
}
else
{
lean_object* v_val_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
v_val_1967_ = lean_ctor_get(v___x_1965_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1965_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v___x_1965_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_val_1967_);
lean_dec(v___x_1965_);
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
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_val_1967_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
v___y_1920_ = v___y_1947_;
v___y_1921_ = v___y_1961_;
v___y_1922_ = v___y_1956_;
v___y_1923_ = v___y_1949_;
v___y_1924_ = v___y_1951_;
v___y_1925_ = v___y_1959_;
v___y_1926_ = v___y_1958_;
v___y_1927_ = v___y_1952_;
v___y_1928_ = v___y_1960_;
v___y_1929_ = v___y_1953_;
v___y_1930_ = v___y_1962_;
v___y_1931_ = v___y_1948_;
v___y_1932_ = v___y_1955_;
v___y_1933_ = v___y_1957_;
v___y_1934_ = v_args_1954_;
v___y_1935_ = v___x_1972_;
goto v___jp_1919_;
}
}
}
}
v___jp_1976_:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; uint8_t v___x_1994_; 
v___x_1992_ = lean_unsigned_to_nat(3u);
v___x_1993_ = l_Lean_Syntax_getArg(v___y_1979_, v___x_1992_);
v___x_1994_ = l_Lean_Syntax_isNone(v___x_1993_);
if (v___x_1994_ == 0)
{
uint8_t v___x_1995_; 
lean_inc(v___x_1993_);
v___x_1995_ = l_Lean_Syntax_matchesNull(v___x_1993_, v___x_1975_);
if (v___x_1995_ == 0)
{
lean_object* v___x_1996_; 
lean_dec(v___x_1993_);
lean_dec(v_o_1983_);
lean_dec(v___y_1982_);
lean_dec(v___y_1981_);
lean_dec(v___y_1980_);
lean_dec(v___y_1979_);
lean_dec(v_tk_1201_);
lean_dec_ref(v___x_1189_);
lean_dec_ref(v___x_1188_);
lean_dec_ref(v___x_1187_);
v___x_1996_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_1996_;
}
else
{
lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; uint8_t v___x_2000_; 
v___x_1997_ = l_Lean_Syntax_getArg(v___x_1993_, v___x_1200_);
lean_dec(v___x_1993_);
v___x_1998_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__13));
lean_inc_ref(v___x_1189_);
lean_inc_ref(v___x_1188_);
lean_inc_ref(v___x_1187_);
v___x_1999_ = l_Lean_Name_mkStr4(v___x_1187_, v___x_1188_, v___x_1189_, v___x_1998_);
lean_inc(v___x_1997_);
v___x_2000_ = l_Lean_Syntax_isOfKind(v___x_1997_, v___x_1999_);
lean_dec(v___x_1999_);
if (v___x_2000_ == 0)
{
lean_object* v___x_2001_; 
lean_dec(v___x_1997_);
lean_dec(v_o_1983_);
lean_dec(v___y_1982_);
lean_dec(v___y_1981_);
lean_dec(v___y_1980_);
lean_dec(v___y_1979_);
lean_dec(v_tk_1201_);
lean_dec_ref(v___x_1189_);
lean_dec_ref(v___x_1188_);
lean_dec_ref(v___x_1187_);
v___x_2001_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_2001_;
}
else
{
lean_object* v___x_2002_; lean_object* v_args_2003_; lean_object* v___x_2004_; 
v___x_2002_ = l_Lean_Syntax_getArg(v___x_1997_, v___x_1975_);
lean_dec(v___x_1997_);
v_args_2003_ = l_Lean_Syntax_getArgs(v___x_2002_);
lean_dec(v___x_2002_);
v___x_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2004_, 0, v_args_2003_);
v___y_1947_ = v___y_1977_;
v___y_1948_ = v_o_1983_;
v___y_1949_ = v___y_1978_;
v___y_1950_ = v___y_1979_;
v___y_1951_ = v___y_1980_;
v___y_1952_ = v___y_1981_;
v___y_1953_ = v___y_1982_;
v_args_1954_ = v___x_2004_;
v___y_1955_ = v___y_1984_;
v___y_1956_ = v___y_1985_;
v___y_1957_ = v___y_1986_;
v___y_1958_ = v___y_1987_;
v___y_1959_ = v___y_1988_;
v___y_1960_ = v___y_1989_;
v___y_1961_ = v___y_1990_;
v___y_1962_ = v___y_1991_;
goto v___jp_1946_;
}
}
}
else
{
lean_object* v___x_2005_; 
lean_dec(v___x_1993_);
v___x_2005_ = lean_box(0);
v___y_1947_ = v___y_1977_;
v___y_1948_ = v_o_1983_;
v___y_1949_ = v___y_1978_;
v___y_1950_ = v___y_1979_;
v___y_1951_ = v___y_1980_;
v___y_1952_ = v___y_1981_;
v___y_1953_ = v___y_1982_;
v_args_1954_ = v___x_2005_;
v___y_1955_ = v___y_1984_;
v___y_1956_ = v___y_1985_;
v___y_1957_ = v___y_1986_;
v___y_1958_ = v___y_1987_;
v___y_1959_ = v___y_1988_;
v___y_1960_ = v___y_1989_;
v___y_1961_ = v___y_1990_;
v___y_1962_ = v___y_1991_;
goto v___jp_1946_;
}
}
v___jp_2006_:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; uint8_t v___x_2020_; 
v___x_2016_ = lean_unsigned_to_nat(2u);
v___x_2017_ = l_Lean_Syntax_getArg(v_stx_1186_, v___x_2016_);
v___x_2018_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__14));
lean_inc_ref(v___x_1189_);
lean_inc_ref(v___x_1188_);
lean_inc_ref(v___x_1187_);
v___x_2019_ = l_Lean_Name_mkStr4(v___x_1187_, v___x_1188_, v___x_1189_, v___x_2018_);
lean_inc(v___x_2017_);
v___x_2020_ = l_Lean_Syntax_isOfKind(v___x_2017_, v___x_2019_);
lean_dec(v___x_2019_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2021_; 
lean_dec(v___x_2017_);
lean_dec(v_bang_2007_);
lean_dec(v_tk_1201_);
lean_dec_ref(v___x_1189_);
lean_dec_ref(v___x_1188_);
lean_dec_ref(v___x_1187_);
v___x_2021_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_2021_;
}
else
{
lean_object* v_cfg_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; uint8_t v___x_2025_; 
v_cfg_2022_ = l_Lean_Syntax_getArg(v___x_2017_, v___x_1200_);
v___x_2023_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__15));
lean_inc_ref(v___x_1189_);
lean_inc_ref(v___x_1188_);
lean_inc_ref(v___x_1187_);
v___x_2024_ = l_Lean_Name_mkStr4(v___x_1187_, v___x_1188_, v___x_1189_, v___x_2023_);
lean_inc(v_cfg_2022_);
v___x_2025_ = l_Lean_Syntax_isOfKind(v_cfg_2022_, v___x_2024_);
lean_dec(v___x_2024_);
if (v___x_2025_ == 0)
{
lean_object* v___x_2026_; 
lean_dec(v_cfg_2022_);
lean_dec(v___x_2017_);
lean_dec(v_bang_2007_);
lean_dec(v_tk_1201_);
lean_dec_ref(v___x_1189_);
lean_dec_ref(v___x_1188_);
lean_dec_ref(v___x_1187_);
v___x_2026_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_2026_;
}
else
{
lean_object* v___x_2027_; lean_object* v___x_2028_; uint8_t v___x_2029_; 
v___x_2027_ = l_Lean_Syntax_getArg(v___x_2017_, v___x_1975_);
v___x_2028_ = l_Lean_Syntax_getArg(v___x_2017_, v___x_2016_);
v___x_2029_ = l_Lean_Syntax_isNone(v___x_2028_);
if (v___x_2029_ == 0)
{
uint8_t v___x_2030_; 
lean_inc(v___x_2028_);
v___x_2030_ = l_Lean_Syntax_matchesNull(v___x_2028_, v___x_1975_);
if (v___x_2030_ == 0)
{
lean_object* v___x_2031_; 
lean_dec(v___x_2028_);
lean_dec(v___x_2027_);
lean_dec(v_cfg_2022_);
lean_dec(v___x_2017_);
lean_dec(v_bang_2007_);
lean_dec(v_tk_1201_);
lean_dec_ref(v___x_1189_);
lean_dec_ref(v___x_1188_);
lean_dec_ref(v___x_1187_);
v___x_2031_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_2031_;
}
else
{
lean_object* v_o_2032_; lean_object* v___x_2033_; 
v_o_2032_ = l_Lean_Syntax_getArg(v___x_2028_, v___x_1200_);
lean_dec(v___x_2028_);
v___x_2033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2033_, 0, v_o_2032_);
v___y_1977_ = v___x_2025_;
v___y_1978_ = v___x_2025_;
v___y_1979_ = v___x_2017_;
v___y_1980_ = v_bang_2007_;
v___y_1981_ = v___x_2027_;
v___y_1982_ = v_cfg_2022_;
v_o_1983_ = v___x_2033_;
v___y_1984_ = v___y_2008_;
v___y_1985_ = v___y_2009_;
v___y_1986_ = v___y_2010_;
v___y_1987_ = v___y_2011_;
v___y_1988_ = v___y_2012_;
v___y_1989_ = v___y_2013_;
v___y_1990_ = v___y_2014_;
v___y_1991_ = v___y_2015_;
goto v___jp_1976_;
}
}
else
{
lean_object* v___x_2034_; 
lean_dec(v___x_2028_);
v___x_2034_ = lean_box(0);
v___y_1977_ = v___x_2025_;
v___y_1978_ = v___x_2025_;
v___y_1979_ = v___x_2017_;
v___y_1980_ = v_bang_2007_;
v___y_1981_ = v___x_2027_;
v___y_1982_ = v_cfg_2022_;
v_o_1983_ = v___x_2034_;
v___y_1984_ = v___y_2008_;
v___y_1985_ = v___y_2009_;
v___y_1986_ = v___y_2010_;
v___y_1987_ = v___y_2011_;
v___y_1988_ = v___y_2012_;
v___y_1989_ = v___y_2013_;
v___y_1990_ = v___y_2014_;
v___y_1991_ = v___y_2015_;
goto v___jp_1976_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace___lam__2___boxed(lean_object* v___x_2042_, lean_object* v_stx_2043_, lean_object* v___x_2044_, lean_object* v___x_2045_, lean_object* v___x_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_){
_start:
{
uint8_t v___x_38917__boxed_2056_; lean_object* v_res_2057_; 
v___x_38917__boxed_2056_ = lean_unbox(v___x_2042_);
v_res_2057_ = l_Lean_Elab_Tactic_evalSimpTrace___lam__2(v___x_38917__boxed_2056_, v_stx_2043_, v___x_2044_, v___x_2045_, v___x_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_);
lean_dec(v___y_2054_);
lean_dec_ref(v___y_2053_);
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec(v___y_2048_);
lean_dec_ref(v___y_2047_);
lean_dec(v_stx_2043_);
return v_res_2057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace(lean_object* v_stx_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_, lean_object* v_a_2071_, lean_object* v_a_2072_){
_start:
{
lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; uint8_t v___x_2078_; lean_object* v___x_2079_; lean_object* v___y_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2074_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__0));
v___x_2075_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__1));
v___x_2076_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__2));
v___x_2077_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___closed__1));
lean_inc(v_stx_2064_);
v___x_2078_ = l_Lean_Syntax_isOfKind(v_stx_2064_, v___x_2077_);
v___x_2079_ = lean_box(v___x_2078_);
v___y_2080_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___boxed), 14, 5);
lean_closure_set(v___y_2080_, 0, v___x_2079_);
lean_closure_set(v___y_2080_, 1, v_stx_2064_);
lean_closure_set(v___y_2080_, 2, v___x_2074_);
lean_closure_set(v___y_2080_, 3, v___x_2075_);
lean_closure_set(v___y_2080_, 4, v___x_2076_);
v___x_2081_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withSimpDiagnostics___boxed), 10, 1);
lean_closure_set(v___x_2081_, 0, v___y_2080_);
v___x_2082_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___x_2081_, v_a_2065_, v_a_2066_, v_a_2067_, v_a_2068_, v_a_2069_, v_a_2070_, v_a_2071_, v_a_2072_);
return v___x_2082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpTrace___boxed(lean_object* v_stx_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_){
_start:
{
lean_object* v_res_2093_; 
v_res_2093_ = l_Lean_Elab_Tactic_evalSimpTrace(v_stx_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_, v_a_2088_, v_a_2089_, v_a_2090_, v_a_2091_);
lean_dec(v_a_2091_);
lean_dec_ref(v_a_2090_);
lean_dec(v_a_2089_);
lean_dec_ref(v_a_2088_);
lean_dec(v_a_2087_);
lean_dec_ref(v_a_2086_);
lean_dec(v_a_2085_);
lean_dec_ref(v_a_2084_);
return v_res_2093_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2(lean_object* v___x_2094_, uint8_t v___x_2095_, lean_object* v_as_2096_, lean_object* v_as_x27_2097_, lean_object* v_b_2098_, lean_object* v_a_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_){
_start:
{
lean_object* v___x_2109_; 
v___x_2109_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg(v___x_2094_, v___x_2095_, v_as_x27_2097_, v_b_2098_, v___y_2106_);
return v___x_2109_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___boxed(lean_object* v___x_2110_, lean_object* v___x_2111_, lean_object* v_as_2112_, lean_object* v_as_x27_2113_, lean_object* v_b_2114_, lean_object* v_a_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_){
_start:
{
uint8_t v___x_40663__boxed_2125_; lean_object* v_res_2126_; 
v___x_40663__boxed_2125_ = lean_unbox(v___x_2111_);
v_res_2126_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2(v___x_2110_, v___x_40663__boxed_2125_, v_as_2112_, v_as_x27_2113_, v_b_2114_, v_a_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_);
lean_dec(v___y_2123_);
lean_dec_ref(v___y_2122_);
lean_dec(v___y_2121_);
lean_dec_ref(v___y_2120_);
lean_dec(v___y_2119_);
lean_dec_ref(v___y_2118_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v_as_x27_2113_);
lean_dec(v_as_2112_);
lean_dec(v___x_2110_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6(lean_object* v_00_u03b1_2127_, lean_object* v_ref_2128_, lean_object* v_msg_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_){
_start:
{
lean_object* v___x_2139_; 
v___x_2139_ = l_Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6___redArg(v_ref_2128_, v_msg_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6___boxed(lean_object* v_00_u03b1_2140_, lean_object* v_ref_2141_, lean_object* v_msg_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l_Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6(v_00_u03b1_2140_, v_ref_2141_, v_msg_2142_, v___y_2143_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
lean_dec(v___y_2148_);
lean_dec_ref(v___y_2147_);
lean_dec(v___y_2146_);
lean_dec_ref(v___y_2145_);
lean_dec(v___y_2144_);
lean_dec_ref(v___y_2143_);
lean_dec(v_ref_2141_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10(lean_object* v_00_u03b1_2153_, lean_object* v_ref_2154_, lean_object* v_constName_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_){
_start:
{
lean_object* v___x_2165_; 
v___x_2165_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___redArg(v_ref_2154_, v_constName_2155_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_, v___y_2161_, v___y_2162_, v___y_2163_);
return v___x_2165_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10___boxed(lean_object* v_00_u03b1_2166_, lean_object* v_ref_2167_, lean_object* v_constName_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_){
_start:
{
lean_object* v_res_2178_; 
v_res_2178_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10(v_00_u03b1_2166_, v_ref_2167_, v_constName_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_);
lean_dec(v___y_2176_);
lean_dec_ref(v___y_2175_);
lean_dec(v___y_2174_);
lean_dec_ref(v___y_2173_);
lean_dec(v___y_2172_);
lean_dec_ref(v___y_2171_);
lean_dec(v___y_2170_);
lean_dec_ref(v___y_2169_);
lean_dec(v_ref_2167_);
return v_res_2178_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14(lean_object* v_00_u03b1_2179_, lean_object* v_msg_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_){
_start:
{
lean_object* v___x_2190_; 
v___x_2190_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14___redArg(v_msg_2180_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_);
return v___x_2190_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14___boxed(lean_object* v_00_u03b1_2191_, lean_object* v_msg_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_){
_start:
{
lean_object* v_res_2202_; 
v_res_2202_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__2_spec__6_spec__14(v_00_u03b1_2191_, v_msg_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_);
lean_dec(v___y_2200_);
lean_dec_ref(v___y_2199_);
lean_dec(v___y_2198_);
lean_dec_ref(v___y_2197_);
lean_dec(v___y_2196_);
lean_dec_ref(v___y_2195_);
lean_dec(v___y_2194_);
lean_dec_ref(v___y_2193_);
return v_res_2202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8(lean_object* v_opt_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
lean_object* v___x_2213_; 
v___x_2213_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8___redArg(v_opt_2203_, v___y_2210_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8___boxed(lean_object* v_opt_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_){
_start:
{
lean_object* v_res_2224_; 
v_res_2224_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__8(v_opt_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
lean_dec(v___y_2220_);
lean_dec_ref(v___y_2219_);
lean_dec(v___y_2218_);
lean_dec_ref(v___y_2217_);
lean_dec(v___y_2216_);
lean_dec_ref(v___y_2215_);
lean_dec_ref(v_opt_2214_);
return v_res_2224_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14(lean_object* v_00_u03b1_2225_, lean_object* v_ref_2226_, lean_object* v_msg_2227_, lean_object* v_declHint_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_){
_start:
{
lean_object* v___x_2238_; 
v___x_2238_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14___redArg(v_ref_2226_, v_msg_2227_, v_declHint_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_);
return v___x_2238_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14___boxed(lean_object* v_00_u03b1_2239_, lean_object* v_ref_2240_, lean_object* v_msg_2241_, lean_object* v_declHint_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
lean_object* v_res_2252_; 
v_res_2252_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14(v_00_u03b1_2239_, v_ref_2240_, v_msg_2241_, v_declHint_2242_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
lean_dec(v___y_2244_);
lean_dec_ref(v___y_2243_);
lean_dec(v_ref_2240_);
return v_res_2252_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23(lean_object* v_msg_2253_, lean_object* v_declHint_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_){
_start:
{
lean_object* v___x_2264_; 
v___x_2264_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg(v_msg_2253_, v_declHint_2254_, v___y_2262_);
return v___x_2264_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___boxed(lean_object* v_msg_2265_, lean_object* v_declHint_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23(v_msg_2265_, v_declHint_2266_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_);
lean_dec(v___y_2274_);
lean_dec_ref(v___y_2273_);
lean_dec(v___y_2272_);
lean_dec_ref(v___y_2271_);
lean_dec(v___y_2270_);
lean_dec_ref(v___y_2269_);
lean_dec(v___y_2268_);
lean_dec_ref(v___y_2267_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20(lean_object* v_ref_2277_, lean_object* v_msgData_2278_, uint8_t v_severity_2279_, uint8_t v_isSilent_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_){
_start:
{
lean_object* v___x_2290_; 
v___x_2290_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___redArg(v_ref_2277_, v_msgData_2278_, v_severity_2279_, v_isSilent_2280_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_);
return v___x_2290_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20___boxed(lean_object* v_ref_2291_, lean_object* v_msgData_2292_, lean_object* v_severity_2293_, lean_object* v_isSilent_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
uint8_t v_severity_boxed_2304_; uint8_t v_isSilent_boxed_2305_; lean_object* v_res_2306_; 
v_severity_boxed_2304_ = lean_unbox(v_severity_2293_);
v_isSilent_boxed_2305_ = lean_unbox(v_isSilent_2294_);
v_res_2306_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__2_spec__6_spec__9_spec__14_spec__20(v_ref_2291_, v_msgData_2292_, v_severity_boxed_2304_, v_isSilent_boxed_2305_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_);
lean_dec(v___y_2302_);
lean_dec_ref(v___y_2301_);
lean_dec(v___y_2300_);
lean_dec_ref(v___y_2299_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
lean_dec(v___y_2296_);
lean_dec_ref(v___y_2295_);
lean_dec(v_ref_2291_);
return v_res_2306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1(){
_start:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2314_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2315_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___closed__1));
v___x_2316_ = ((lean_object*)(l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___closed__1));
v___x_2317_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSimpTrace___boxed), 10, 0);
v___x_2318_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2314_, v___x_2315_, v___x_2316_, v___x_2317_);
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___boxed(lean_object* v_a_2319_){
_start:
{
lean_object* v_res_2320_; 
v_res_2320_ = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1();
return v_res_2320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3(){
_start:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2347_ = ((lean_object*)(l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1___closed__1));
v___x_2348_ = ((lean_object*)(l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___closed__6));
v___x_2349_ = l_Lean_addBuiltinDeclarationRanges(v___x_2347_, v___x_2348_);
return v___x_2349_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3___boxed(lean_object* v_a_2350_){
_start:
{
lean_object* v_res_2351_; 
v_res_2351_ = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3();
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__0___redArg(lean_object* v___x_2352_, uint8_t v___x_2353_, lean_object* v_as_x27_2354_, lean_object* v_b_2355_, lean_object* v___y_2356_){
_start:
{
if (lean_obj_tag(v_as_x27_2354_) == 0)
{
lean_object* v___x_2358_; 
v___x_2358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2358_, 0, v_b_2355_);
return v___x_2358_;
}
else
{
lean_object* v_head_2359_; lean_object* v_tail_2360_; lean_object* v_ref_2361_; uint8_t v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; 
v_head_2359_ = lean_ctor_get(v_as_x27_2354_, 0);
v_tail_2360_ = lean_ctor_get(v_as_x27_2354_, 1);
v_ref_2361_ = lean_ctor_get(v___y_2356_, 2);
v___x_2362_ = 0;
v___x_2363_ = l_Lean_SourceInfo_fromRef(v_ref_2361_, v___x_2362_);
v___x_2364_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__1));
v___x_2365_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_2366_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
lean_inc(v___x_2363_);
v___x_2367_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2363_);
lean_ctor_set(v___x_2367_, 1, v___x_2365_);
lean_ctor_set(v___x_2367_, 2, v___x_2366_);
lean_inc(v_head_2359_);
v___x_2368_ = l_Lean_mkCIdentFrom(v___x_2352_, v_head_2359_, v___x_2353_);
lean_inc_ref(v___x_2367_);
v___x_2369_ = l_Lean_Syntax_node3(v___x_2363_, v___x_2364_, v___x_2367_, v___x_2367_, v___x_2368_);
v___x_2370_ = lean_array_push(v_b_2355_, v___x_2369_);
v_as_x27_2354_ = v_tail_2360_;
v_b_2355_ = v___x_2370_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__0___redArg___boxed(lean_object* v___x_2372_, lean_object* v___x_2373_, lean_object* v_as_x27_2374_, lean_object* v_b_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_){
_start:
{
uint8_t v___x_37229__boxed_2378_; lean_object* v_res_2379_; 
v___x_37229__boxed_2378_ = lean_unbox(v___x_2373_);
v_res_2379_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__0___redArg(v___x_2372_, v___x_37229__boxed_2378_, v_as_x27_2374_, v_b_2375_, v___y_2376_);
lean_dec_ref(v___y_2376_);
lean_dec(v_as_x27_2374_);
lean_dec(v___x_2372_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__1(uint8_t v___x_2380_, lean_object* v_as_2381_, size_t v_sz_2382_, size_t v_i_2383_, lean_object* v_b_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
uint8_t v___x_2394_; 
v___x_2394_ = lean_usize_dec_lt(v_i_2383_, v_sz_2382_);
if (v___x_2394_ == 0)
{
lean_object* v___x_2395_; 
v___x_2395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2395_, 0, v_b_2384_);
return v___x_2395_;
}
else
{
lean_object* v_a_2396_; lean_object* v_name_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; 
v_a_2396_ = lean_array_uget_borrowed(v_as_2381_, v_i_2383_);
v_name_2397_ = lean_ctor_get(v_a_2396_, 0);
lean_inc(v_name_2397_);
v___x_2398_ = l_Lean_mkIdent(v_name_2397_);
lean_inc(v___x_2398_);
v___x_2399_ = l_Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1(v___x_2398_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
if (lean_obj_tag(v___x_2399_) == 0)
{
lean_object* v_a_2400_; lean_object* v___x_2401_; 
v_a_2400_ = lean_ctor_get(v___x_2399_, 0);
lean_inc(v_a_2400_);
lean_dec_ref_known(v___x_2399_, 1);
v___x_2401_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__0___redArg(v___x_2398_, v___x_2380_, v_a_2400_, v_b_2384_, v___y_2391_);
lean_dec(v_a_2400_);
lean_dec(v___x_2398_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v_a_2402_; size_t v___x_2403_; size_t v___x_2404_; 
v_a_2402_ = lean_ctor_get(v___x_2401_, 0);
lean_inc(v_a_2402_);
lean_dec_ref_known(v___x_2401_, 1);
v___x_2403_ = ((size_t)1ULL);
v___x_2404_ = lean_usize_add(v_i_2383_, v___x_2403_);
v_i_2383_ = v___x_2404_;
v_b_2384_ = v_a_2402_;
goto _start;
}
else
{
return v___x_2401_;
}
}
else
{
lean_object* v_a_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2413_; 
lean_dec(v___x_2398_);
lean_dec_ref(v_b_2384_);
v_a_2406_ = lean_ctor_get(v___x_2399_, 0);
v_isSharedCheck_2413_ = !lean_is_exclusive(v___x_2399_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2408_ = v___x_2399_;
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_a_2406_);
lean_dec(v___x_2399_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2411_; 
if (v_isShared_2409_ == 0)
{
v___x_2411_ = v___x_2408_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v_a_2406_);
v___x_2411_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
return v___x_2411_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__1___boxed(lean_object* v___x_2414_, lean_object* v_as_2415_, lean_object* v_sz_2416_, lean_object* v_i_2417_, lean_object* v_b_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_){
_start:
{
uint8_t v___x_37271__boxed_2428_; size_t v_sz_boxed_2429_; size_t v_i_boxed_2430_; lean_object* v_res_2431_; 
v___x_37271__boxed_2428_ = lean_unbox(v___x_2414_);
v_sz_boxed_2429_ = lean_unbox_usize(v_sz_2416_);
lean_dec(v_sz_2416_);
v_i_boxed_2430_ = lean_unbox_usize(v_i_2417_);
lean_dec(v_i_2417_);
v_res_2431_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__1(v___x_37271__boxed_2428_, v_as_2415_, v_sz_boxed_2429_, v_i_boxed_2430_, v_b_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_);
lean_dec(v___y_2426_);
lean_dec_ref(v___y_2425_);
lean_dec(v___y_2424_);
lean_dec_ref(v___y_2423_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
lean_dec(v___y_2420_);
lean_dec_ref(v___y_2419_);
lean_dec_ref(v_as_2415_);
return v_res_2431_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; 
v___x_2432_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_Elab_Tactic_evalSimpTrace_spec__1_spec__1_spec__3_spec__10_spec__14_spec__19_spec__23___redArg___closed__0);
v___x_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2433_, 0, v___x_2432_);
return v___x_2433_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2434_ = lean_unsigned_to_nat(0u);
v___x_2435_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__0, &l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__0_once, _init_l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__0);
v___x_2436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2435_);
lean_ctor_set(v___x_2436_, 1, v___x_2434_);
return v___x_2436_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__2(void){
_start:
{
lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2437_ = lean_unsigned_to_nat(32u);
v___x_2438_ = lean_mk_empty_array_with_capacity(v___x_2437_);
v___x_2439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2438_);
return v___x_2439_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__3(void){
_start:
{
size_t v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2440_ = ((size_t)5ULL);
v___x_2441_ = lean_unsigned_to_nat(0u);
v___x_2442_ = lean_unsigned_to_nat(32u);
v___x_2443_ = lean_mk_empty_array_with_capacity(v___x_2442_);
v___x_2444_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__2, &l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__2_once, _init_l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__2);
v___x_2445_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2445_, 0, v___x_2444_);
lean_ctor_set(v___x_2445_, 1, v___x_2443_);
lean_ctor_set(v___x_2445_, 2, v___x_2441_);
lean_ctor_set(v___x_2445_, 3, v___x_2441_);
lean_ctor_set_usize(v___x_2445_, 4, v___x_2440_);
return v___x_2445_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__4(void){
_start:
{
lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2446_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__3, &l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__3_once, _init_l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__3);
v___x_2447_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__0, &l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__0_once, _init_l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__0);
v___x_2448_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2447_);
lean_ctor_set(v___x_2448_, 1, v___x_2447_);
lean_ctor_set(v___x_2448_, 2, v___x_2447_);
lean_ctor_set(v___x_2448_, 3, v___x_2446_);
return v___x_2448_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__5(void){
_start:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2449_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__4, &l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__4_once, _init_l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__4);
v___x_2450_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__1, &l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__1);
v___x_2451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2451_, 0, v___x_2450_);
lean_ctor_set(v___x_2451_, 1, v___x_2449_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1(uint8_t v___x_2460_, lean_object* v_stx_2461_, lean_object* v___x_2462_, lean_object* v___x_2463_, lean_object* v___x_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_){
_start:
{
if (v___x_2460_ == 0)
{
lean_object* v___x_2474_; 
lean_dec_ref(v___x_2464_);
lean_dec_ref(v___x_2463_);
lean_dec_ref(v___x_2462_);
v___x_2474_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_2474_;
}
else
{
lean_object* v___x_2475_; lean_object* v_tk_2476_; lean_object* v___y_2478_; lean_object* v___y_2479_; lean_object* v___y_2480_; lean_object* v___y_2481_; lean_object* v___y_2482_; lean_object* v___y_2483_; lean_object* v___y_2529_; lean_object* v___y_2530_; lean_object* v___y_2531_; lean_object* v___y_2532_; lean_object* v___y_2533_; lean_object* v___y_2534_; lean_object* v___y_2535_; lean_object* v___y_2536_; lean_object* v___y_2591_; uint8_t v___y_2592_; uint8_t v___y_2593_; lean_object* v___y_2594_; lean_object* v_stxForSuggestion_2595_; lean_object* v___y_2596_; lean_object* v___y_2597_; lean_object* v___y_2598_; lean_object* v___y_2599_; lean_object* v___y_2600_; lean_object* v___y_2601_; lean_object* v___y_2602_; lean_object* v___y_2603_; lean_object* v___y_2621_; lean_object* v___y_2622_; lean_object* v___y_2623_; lean_object* v___y_2624_; lean_object* v___y_2625_; lean_object* v___y_2626_; lean_object* v___y_2627_; lean_object* v___y_2628_; uint8_t v___y_2629_; lean_object* v___y_2630_; lean_object* v___y_2631_; lean_object* v___y_2632_; lean_object* v___y_2633_; lean_object* v___y_2634_; lean_object* v___y_2635_; lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v___y_2638_; lean_object* v___y_2639_; uint8_t v___y_2640_; lean_object* v___y_2641_; lean_object* v___y_2655_; lean_object* v___y_2656_; lean_object* v___y_2657_; lean_object* v___y_2658_; lean_object* v___y_2659_; lean_object* v___y_2660_; lean_object* v___y_2661_; uint8_t v___y_2662_; lean_object* v___y_2663_; lean_object* v___y_2664_; lean_object* v___y_2665_; lean_object* v___y_2666_; lean_object* v___y_2667_; lean_object* v___y_2668_; lean_object* v___y_2669_; lean_object* v___y_2670_; lean_object* v___y_2671_; lean_object* v___y_2672_; uint8_t v___y_2673_; lean_object* v___y_2674_; lean_object* v___y_2675_; lean_object* v___y_2685_; lean_object* v___y_2686_; lean_object* v___y_2687_; lean_object* v___y_2688_; lean_object* v___y_2689_; lean_object* v___y_2690_; lean_object* v___y_2691_; lean_object* v___y_2692_; lean_object* v___y_2693_; uint8_t v___y_2694_; lean_object* v___y_2695_; lean_object* v___y_2696_; lean_object* v___y_2697_; lean_object* v___y_2698_; lean_object* v___y_2699_; lean_object* v___y_2700_; lean_object* v___y_2701_; lean_object* v___y_2702_; lean_object* v___y_2703_; uint8_t v___y_2704_; lean_object* v___y_2705_; lean_object* v___y_2719_; lean_object* v___y_2720_; lean_object* v___y_2721_; lean_object* v___y_2722_; lean_object* v___y_2723_; lean_object* v___y_2724_; lean_object* v___y_2725_; lean_object* v___y_2726_; lean_object* v___y_2727_; uint8_t v___y_2728_; lean_object* v___y_2729_; lean_object* v___y_2730_; lean_object* v___y_2731_; lean_object* v___y_2732_; lean_object* v___y_2733_; lean_object* v___y_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; uint8_t v___y_2737_; lean_object* v___y_2738_; lean_object* v___y_2739_; lean_object* v___y_2749_; lean_object* v___y_2750_; lean_object* v___y_2751_; lean_object* v___y_2752_; lean_object* v___y_2753_; lean_object* v___y_2754_; lean_object* v___y_2755_; uint8_t v___y_2756_; lean_object* v___y_2757_; lean_object* v___y_2758_; lean_object* v___y_2759_; lean_object* v___y_2760_; lean_object* v___y_2761_; lean_object* v___y_2762_; lean_object* v___y_2763_; lean_object* v___y_2764_; lean_object* v___y_2765_; lean_object* v___y_2766_; uint8_t v___y_2767_; lean_object* v___y_2768_; lean_object* v___y_2774_; lean_object* v___y_2775_; lean_object* v___y_2776_; lean_object* v___y_2777_; lean_object* v___y_2778_; lean_object* v___y_2779_; lean_object* v___y_2780_; uint8_t v___y_2781_; lean_object* v___y_2782_; lean_object* v___y_2783_; lean_object* v___y_2784_; lean_object* v___y_2785_; lean_object* v___y_2786_; lean_object* v___y_2787_; lean_object* v___y_2788_; uint8_t v___y_2789_; lean_object* v___y_2790_; lean_object* v___y_2791_; uint8_t v___y_2792_; lean_object* v___y_2793_; lean_object* v___y_2794_; lean_object* v___y_2804_; lean_object* v___y_2805_; lean_object* v___y_2806_; lean_object* v___y_2807_; lean_object* v___y_2808_; lean_object* v___y_2809_; lean_object* v___y_2810_; lean_object* v___y_2811_; uint8_t v___y_2812_; lean_object* v___y_2813_; lean_object* v___y_2814_; lean_object* v___y_2815_; lean_object* v___y_2816_; lean_object* v___y_2817_; lean_object* v___y_2818_; lean_object* v___y_2819_; lean_object* v___y_2820_; lean_object* v___y_2821_; uint8_t v___y_2822_; lean_object* v___y_2823_; lean_object* v___y_2829_; lean_object* v___y_2830_; lean_object* v___y_2831_; lean_object* v___y_2832_; lean_object* v___y_2833_; lean_object* v___y_2834_; lean_object* v___y_2835_; uint8_t v___y_2836_; lean_object* v___y_2837_; lean_object* v___y_2838_; lean_object* v___y_2839_; lean_object* v___y_2840_; lean_object* v___y_2841_; uint8_t v___y_2842_; lean_object* v___y_2843_; lean_object* v___y_2844_; lean_object* v___y_2845_; lean_object* v___y_2846_; uint8_t v___y_2847_; lean_object* v___y_2848_; lean_object* v___y_2849_; lean_object* v___y_2859_; lean_object* v___y_2860_; lean_object* v___y_2861_; lean_object* v___y_2862_; lean_object* v___y_2863_; uint8_t v___y_2864_; uint8_t v___y_2865_; lean_object* v_stxForExecution_2866_; lean_object* v___y_2867_; lean_object* v___y_2868_; lean_object* v___y_2869_; lean_object* v___y_2870_; lean_object* v___y_2871_; lean_object* v___y_2872_; lean_object* v___y_2873_; lean_object* v___y_2874_; lean_object* v___y_2930_; lean_object* v___y_2931_; lean_object* v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2934_; uint8_t v___y_2935_; lean_object* v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2938_; lean_object* v___y_2939_; lean_object* v___y_2940_; lean_object* v___y_2941_; lean_object* v___y_2942_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v___y_2945_; lean_object* v___y_2946_; lean_object* v___y_2947_; lean_object* v___y_2948_; lean_object* v___y_2949_; uint8_t v___y_2950_; lean_object* v___y_2951_; lean_object* v___y_2965_; lean_object* v___y_2966_; lean_object* v___y_2967_; lean_object* v___y_2968_; lean_object* v___y_2969_; uint8_t v___y_2970_; lean_object* v___y_2971_; lean_object* v___y_2972_; lean_object* v___y_2973_; lean_object* v___y_2974_; lean_object* v___y_2975_; lean_object* v___y_2976_; lean_object* v___y_2977_; lean_object* v___y_2978_; lean_object* v___y_2979_; lean_object* v___y_2980_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v___y_2983_; uint8_t v___y_2984_; lean_object* v___y_2985_; lean_object* v___y_2995_; lean_object* v___y_2996_; lean_object* v___y_2997_; lean_object* v___y_2998_; lean_object* v___y_2999_; uint8_t v___y_3000_; lean_object* v___y_3001_; lean_object* v___y_3002_; lean_object* v___y_3003_; lean_object* v___y_3004_; lean_object* v___y_3005_; lean_object* v___y_3006_; lean_object* v___y_3007_; lean_object* v___y_3008_; lean_object* v___y_3009_; lean_object* v___y_3010_; lean_object* v___y_3011_; lean_object* v___y_3012_; lean_object* v___y_3013_; lean_object* v___y_3014_; uint8_t v___y_3015_; lean_object* v___y_3016_; lean_object* v___y_3030_; lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; uint8_t v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3044_; lean_object* v___y_3045_; lean_object* v___y_3046_; lean_object* v___y_3047_; lean_object* v___y_3048_; uint8_t v___y_3049_; lean_object* v___y_3050_; lean_object* v___y_3060_; lean_object* v___y_3061_; lean_object* v___y_3062_; lean_object* v___y_3063_; uint8_t v___y_3064_; lean_object* v___y_3065_; lean_object* v___y_3066_; lean_object* v___y_3067_; lean_object* v___y_3068_; lean_object* v___y_3069_; lean_object* v___y_3070_; lean_object* v___y_3071_; lean_object* v___y_3072_; lean_object* v___y_3073_; lean_object* v___y_3074_; lean_object* v___y_3075_; lean_object* v___y_3076_; lean_object* v___y_3077_; lean_object* v___y_3078_; lean_object* v___y_3079_; uint8_t v___y_3080_; lean_object* v___y_3081_; lean_object* v___y_3087_; uint8_t v___y_3088_; lean_object* v___y_3089_; lean_object* v___y_3090_; lean_object* v___y_3091_; uint8_t v___y_3092_; lean_object* v___y_3093_; lean_object* v___y_3094_; lean_object* v___y_3095_; lean_object* v___y_3096_; lean_object* v___y_3097_; lean_object* v___y_3098_; lean_object* v___y_3099_; lean_object* v___y_3100_; lean_object* v___y_3101_; lean_object* v___y_3102_; lean_object* v___y_3103_; lean_object* v___y_3104_; lean_object* v___y_3105_; lean_object* v___y_3106_; uint8_t v___y_3107_; lean_object* v___y_3108_; lean_object* v___y_3118_; lean_object* v___y_3119_; lean_object* v___y_3120_; lean_object* v___y_3121_; lean_object* v___y_3122_; lean_object* v___y_3123_; lean_object* v___y_3124_; uint8_t v___y_3125_; lean_object* v___y_3126_; lean_object* v___y_3127_; lean_object* v___y_3128_; lean_object* v___y_3129_; lean_object* v___y_3130_; lean_object* v___y_3131_; lean_object* v___y_3132_; lean_object* v___y_3133_; lean_object* v___y_3134_; lean_object* v___y_3135_; lean_object* v___y_3136_; uint8_t v___y_3137_; lean_object* v___y_3138_; lean_object* v___y_3139_; lean_object* v___y_3145_; lean_object* v___y_3146_; uint8_t v___y_3147_; lean_object* v___y_3148_; lean_object* v___y_3149_; lean_object* v___y_3150_; lean_object* v___y_3151_; lean_object* v___y_3152_; uint8_t v___y_3153_; lean_object* v___y_3154_; lean_object* v___y_3155_; lean_object* v___y_3156_; lean_object* v___y_3157_; lean_object* v___y_3158_; lean_object* v___y_3159_; lean_object* v___y_3160_; lean_object* v___y_3161_; lean_object* v___y_3162_; lean_object* v___y_3163_; lean_object* v___y_3164_; uint8_t v___y_3165_; lean_object* v___y_3166_; lean_object* v___y_3176_; lean_object* v___y_3177_; lean_object* v___y_3178_; lean_object* v___y_3179_; uint8_t v___y_3180_; uint8_t v___y_3181_; lean_object* v_argsArray_3182_; lean_object* v___y_3183_; lean_object* v___y_3184_; lean_object* v___y_3185_; lean_object* v___y_3186_; lean_object* v___y_3187_; lean_object* v___y_3188_; lean_object* v___y_3189_; lean_object* v___y_3190_; lean_object* v___y_3244_; lean_object* v___y_3245_; lean_object* v___y_3246_; uint8_t v___y_3247_; lean_object* v___y_3248_; uint8_t v___y_3249_; lean_object* v___y_3250_; lean_object* v___y_3251_; lean_object* v___y_3252_; lean_object* v___y_3253_; lean_object* v___y_3254_; lean_object* v___y_3255_; lean_object* v___y_3256_; lean_object* v___y_3257_; lean_object* v___y_3258_; uint8_t v___y_3259_; lean_object* v___y_3260_; lean_object* v___y_3294_; lean_object* v___y_3295_; lean_object* v___y_3296_; lean_object* v___y_3297_; uint8_t v___y_3298_; lean_object* v___y_3299_; lean_object* v___y_3300_; lean_object* v___y_3301_; lean_object* v___y_3302_; lean_object* v___y_3303_; lean_object* v___y_3304_; lean_object* v___y_3305_; lean_object* v___y_3306_; lean_object* v___y_3307_; uint8_t v___y_3308_; lean_object* v___y_3309_; lean_object* v___y_3322_; lean_object* v___y_3323_; lean_object* v___y_3324_; lean_object* v___y_3325_; lean_object* v___y_3326_; lean_object* v___y_3327_; lean_object* v___y_3328_; lean_object* v___y_3329_; lean_object* v___y_3330_; lean_object* v___y_3331_; lean_object* v___y_3332_; lean_object* v___y_3333_; uint8_t v___y_3334_; lean_object* v___y_3335_; lean_object* v___y_3352_; lean_object* v___y_3353_; lean_object* v___y_3354_; lean_object* v___y_3355_; uint8_t v___y_3356_; lean_object* v_args_3357_; lean_object* v___y_3358_; lean_object* v___y_3359_; lean_object* v___y_3360_; lean_object* v___y_3361_; lean_object* v___y_3362_; lean_object* v___y_3363_; lean_object* v___y_3364_; lean_object* v___y_3365_; lean_object* v___x_3376_; lean_object* v___y_3378_; lean_object* v___y_3379_; lean_object* v___y_3380_; lean_object* v___y_3381_; uint8_t v___y_3382_; lean_object* v_o_3383_; lean_object* v___y_3384_; lean_object* v___y_3385_; lean_object* v___y_3386_; lean_object* v___y_3387_; lean_object* v___y_3388_; lean_object* v___y_3389_; lean_object* v___y_3390_; lean_object* v___y_3391_; lean_object* v_bang_3407_; lean_object* v___y_3408_; lean_object* v___y_3409_; lean_object* v___y_3410_; lean_object* v___y_3411_; lean_object* v___y_3412_; lean_object* v___y_3413_; lean_object* v___y_3414_; lean_object* v___y_3415_; lean_object* v___x_3435_; uint8_t v___x_3436_; 
v___x_2475_ = lean_unsigned_to_nat(0u);
v_tk_2476_ = l_Lean_Syntax_getArg(v_stx_2461_, v___x_2475_);
v___x_3376_ = lean_unsigned_to_nat(1u);
v___x_3435_ = l_Lean_Syntax_getArg(v_stx_2461_, v___x_3376_);
v___x_3436_ = l_Lean_Syntax_isNone(v___x_3435_);
if (v___x_3436_ == 0)
{
uint8_t v___x_3437_; 
lean_inc(v___x_3435_);
v___x_3437_ = l_Lean_Syntax_matchesNull(v___x_3435_, v___x_3376_);
if (v___x_3437_ == 0)
{
lean_object* v___x_3438_; 
lean_dec(v___x_3435_);
lean_dec(v_tk_2476_);
lean_dec_ref(v___x_2464_);
lean_dec_ref(v___x_2463_);
lean_dec_ref(v___x_2462_);
v___x_3438_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_3438_;
}
else
{
lean_object* v_bang_3439_; lean_object* v___x_3440_; 
v_bang_3439_ = l_Lean_Syntax_getArg(v___x_3435_, v___x_2475_);
lean_dec(v___x_3435_);
v___x_3440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3440_, 0, v_bang_3439_);
v_bang_3407_ = v___x_3440_;
v___y_3408_ = v___y_2465_;
v___y_3409_ = v___y_2466_;
v___y_3410_ = v___y_2467_;
v___y_3411_ = v___y_2468_;
v___y_3412_ = v___y_2469_;
v___y_3413_ = v___y_2470_;
v___y_3414_ = v___y_2471_;
v___y_3415_ = v___y_2472_;
goto v___jp_3406_;
}
}
else
{
lean_object* v___x_3441_; 
lean_dec(v___x_3435_);
v___x_3441_ = lean_box(0);
v_bang_3407_ = v___x_3441_;
v___y_3408_ = v___y_2465_;
v___y_3409_ = v___y_2466_;
v___y_3410_ = v___y_2467_;
v___y_3411_ = v___y_2468_;
v___y_3412_ = v___y_2469_;
v___y_3413_ = v___y_2470_;
v___y_3414_ = v___y_2471_;
v___y_3415_ = v___y_2472_;
goto v___jp_3406_;
}
v___jp_2477_:
{
lean_object* v_usedTheorems_2484_; lean_object* v_diag_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2527_; 
v_usedTheorems_2484_ = lean_ctor_get(v___y_2479_, 0);
v_diag_2485_ = lean_ctor_get(v___y_2479_, 1);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___y_2479_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2487_ = v___y_2479_;
v_isShared_2488_ = v_isSharedCheck_2527_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_diag_2485_);
lean_inc(v_usedTheorems_2484_);
lean_dec(v___y_2479_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2527_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2489_; 
v___x_2489_ = l_Lean_Elab_Tactic_mkSimpCallStx(v___y_2478_, v_usedTheorems_2484_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_);
lean_dec_ref(v_usedTheorems_2484_);
if (lean_obj_tag(v___x_2489_) == 0)
{
lean_object* v_a_2490_; lean_object* v_ref_2491_; lean_object* v___x_2492_; lean_object* v___x_2494_; 
v_a_2490_ = lean_ctor_get(v___x_2489_, 0);
lean_inc(v_a_2490_);
lean_dec_ref_known(v___x_2489_, 1);
v_ref_2491_ = lean_ctor_get(v___y_2482_, 2);
v___x_2492_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__1));
if (v_isShared_2488_ == 0)
{
lean_ctor_set(v___x_2487_, 1, v_a_2490_);
lean_ctor_set(v___x_2487_, 0, v___x_2492_);
v___x_2494_ = v___x_2487_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v___x_2492_);
lean_ctor_set(v_reuseFailAlloc_2518_, 1, v_a_2490_);
v___x_2494_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; uint8_t v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2495_ = lean_box(0);
v___x_2496_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2494_);
lean_ctor_set(v___x_2496_, 1, v___x_2495_);
lean_ctor_set(v___x_2496_, 2, v___x_2495_);
lean_ctor_set(v___x_2496_, 3, v___x_2495_);
lean_ctor_set(v___x_2496_, 4, v___x_2495_);
lean_ctor_set(v___x_2496_, 5, v___x_2495_);
lean_inc(v_ref_2491_);
v___x_2497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2497_, 0, v_ref_2491_);
v___x_2498_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__2));
v___x_2499_ = 4;
v___x_2500_ = l_Lean_MessageData_nil;
v___x_2501_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_tk_2476_, v___x_2496_, v___x_2497_, v___x_2498_, v___x_2495_, v___x_2499_, v___x_2500_, v___y_2482_, v___y_2483_);
if (lean_obj_tag(v___x_2501_) == 0)
{
lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2508_; 
v_isSharedCheck_2508_ = !lean_is_exclusive(v___x_2501_);
if (v_isSharedCheck_2508_ == 0)
{
lean_object* v_unused_2509_; 
v_unused_2509_ = lean_ctor_get(v___x_2501_, 0);
lean_dec(v_unused_2509_);
v___x_2503_ = v___x_2501_;
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
else
{
lean_dec(v___x_2501_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2506_; 
if (v_isShared_2504_ == 0)
{
lean_ctor_set(v___x_2503_, 0, v_diag_2485_);
v___x_2506_ = v___x_2503_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v_diag_2485_);
v___x_2506_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
return v___x_2506_;
}
}
}
else
{
lean_object* v_a_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2517_; 
lean_dec_ref(v_diag_2485_);
v_a_2510_ = lean_ctor_get(v___x_2501_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v___x_2501_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2512_ = v___x_2501_;
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_a_2510_);
lean_dec(v___x_2501_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2515_; 
if (v_isShared_2513_ == 0)
{
v___x_2515_ = v___x_2512_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v_a_2510_);
v___x_2515_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
return v___x_2515_;
}
}
}
}
}
else
{
lean_object* v_a_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2526_; 
lean_del_object(v___x_2487_);
lean_dec_ref(v_diag_2485_);
lean_dec(v_tk_2476_);
v_a_2519_ = lean_ctor_get(v___x_2489_, 0);
v_isSharedCheck_2526_ = !lean_is_exclusive(v___x_2489_);
if (v_isSharedCheck_2526_ == 0)
{
v___x_2521_ = v___x_2489_;
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_a_2519_);
lean_dec(v___x_2489_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v___x_2524_; 
if (v_isShared_2522_ == 0)
{
v___x_2524_ = v___x_2521_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v_a_2519_);
v___x_2524_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
return v___x_2524_;
}
}
}
}
}
v___jp_2528_:
{
lean_object* v___x_2537_; 
v___x_2537_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2533_, v___y_2535_, v___y_2534_, v___y_2529_, v___y_2530_);
if (lean_obj_tag(v___x_2537_) == 0)
{
lean_object* v_a_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; 
v_a_2538_ = lean_ctor_get(v___x_2537_, 0);
lean_inc(v_a_2538_);
lean_dec_ref_known(v___x_2537_, 1);
v___x_2539_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__5, &l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__5_once, _init_l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__5);
v___x_2540_ = l_Lean_Meta_simpAll(v_a_2538_, v___y_2536_, v___y_2531_, v___x_2539_, v___y_2535_, v___y_2534_, v___y_2529_, v___y_2530_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_object* v_a_2541_; lean_object* v_fst_2542_; 
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc(v_a_2541_);
lean_dec_ref_known(v___x_2540_, 1);
v_fst_2542_ = lean_ctor_get(v_a_2541_, 0);
if (lean_obj_tag(v_fst_2542_) == 0)
{
lean_object* v_snd_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; 
v_snd_2543_ = lean_ctor_get(v_a_2541_, 1);
lean_inc(v_snd_2543_);
lean_dec(v_a_2541_);
v___x_2544_ = lean_box(0);
v___x_2545_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2544_, v___y_2533_, v___y_2535_, v___y_2534_, v___y_2529_, v___y_2530_);
if (lean_obj_tag(v___x_2545_) == 0)
{
lean_dec_ref_known(v___x_2545_, 1);
v___y_2478_ = v___y_2532_;
v___y_2479_ = v_snd_2543_;
v___y_2480_ = v___y_2535_;
v___y_2481_ = v___y_2534_;
v___y_2482_ = v___y_2529_;
v___y_2483_ = v___y_2530_;
goto v___jp_2477_;
}
else
{
lean_object* v_a_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2553_; 
lean_dec(v_snd_2543_);
lean_dec(v___y_2532_);
lean_dec(v_tk_2476_);
v_a_2546_ = lean_ctor_get(v___x_2545_, 0);
v_isSharedCheck_2553_ = !lean_is_exclusive(v___x_2545_);
if (v_isSharedCheck_2553_ == 0)
{
v___x_2548_ = v___x_2545_;
v_isShared_2549_ = v_isSharedCheck_2553_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_a_2546_);
lean_dec(v___x_2545_);
v___x_2548_ = lean_box(0);
v_isShared_2549_ = v_isSharedCheck_2553_;
goto v_resetjp_2547_;
}
v_resetjp_2547_:
{
lean_object* v___x_2551_; 
if (v_isShared_2549_ == 0)
{
v___x_2551_ = v___x_2548_;
goto v_reusejp_2550_;
}
else
{
lean_object* v_reuseFailAlloc_2552_; 
v_reuseFailAlloc_2552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2552_, 0, v_a_2546_);
v___x_2551_ = v_reuseFailAlloc_2552_;
goto v_reusejp_2550_;
}
v_reusejp_2550_:
{
return v___x_2551_;
}
}
}
}
else
{
lean_object* v_snd_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2572_; 
lean_inc_ref(v_fst_2542_);
v_snd_2554_ = lean_ctor_get(v_a_2541_, 1);
v_isSharedCheck_2572_ = !lean_is_exclusive(v_a_2541_);
if (v_isSharedCheck_2572_ == 0)
{
lean_object* v_unused_2573_; 
v_unused_2573_ = lean_ctor_get(v_a_2541_, 0);
lean_dec(v_unused_2573_);
v___x_2556_ = v_a_2541_;
v_isShared_2557_ = v_isSharedCheck_2572_;
goto v_resetjp_2555_;
}
else
{
lean_inc(v_snd_2554_);
lean_dec(v_a_2541_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2572_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
lean_object* v_val_2558_; lean_object* v___x_2559_; lean_object* v___x_2561_; 
v_val_2558_ = lean_ctor_get(v_fst_2542_, 0);
lean_inc(v_val_2558_);
lean_dec_ref_known(v_fst_2542_, 1);
v___x_2559_ = lean_box(0);
if (v_isShared_2557_ == 0)
{
lean_ctor_set_tag(v___x_2556_, 1);
lean_ctor_set(v___x_2556_, 1, v___x_2559_);
lean_ctor_set(v___x_2556_, 0, v_val_2558_);
v___x_2561_ = v___x_2556_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v_val_2558_);
lean_ctor_set(v_reuseFailAlloc_2571_, 1, v___x_2559_);
v___x_2561_ = v_reuseFailAlloc_2571_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
lean_object* v___x_2562_; 
v___x_2562_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2561_, v___y_2533_, v___y_2535_, v___y_2534_, v___y_2529_, v___y_2530_);
if (lean_obj_tag(v___x_2562_) == 0)
{
lean_dec_ref_known(v___x_2562_, 1);
v___y_2478_ = v___y_2532_;
v___y_2479_ = v_snd_2554_;
v___y_2480_ = v___y_2535_;
v___y_2481_ = v___y_2534_;
v___y_2482_ = v___y_2529_;
v___y_2483_ = v___y_2530_;
goto v___jp_2477_;
}
else
{
lean_object* v_a_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2570_; 
lean_dec(v_snd_2554_);
lean_dec(v___y_2532_);
lean_dec(v_tk_2476_);
v_a_2563_ = lean_ctor_get(v___x_2562_, 0);
v_isSharedCheck_2570_ = !lean_is_exclusive(v___x_2562_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2565_ = v___x_2562_;
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_a_2563_);
lean_dec(v___x_2562_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
lean_object* v___x_2568_; 
if (v_isShared_2566_ == 0)
{
v___x_2568_ = v___x_2565_;
goto v_reusejp_2567_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_a_2563_);
v___x_2568_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2567_;
}
v_reusejp_2567_:
{
return v___x_2568_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2581_; 
lean_dec(v___y_2532_);
lean_dec(v_tk_2476_);
v_a_2574_ = lean_ctor_get(v___x_2540_, 0);
v_isSharedCheck_2581_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2581_ == 0)
{
v___x_2576_ = v___x_2540_;
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_dec(v___x_2540_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2579_; 
if (v_isShared_2577_ == 0)
{
v___x_2579_ = v___x_2576_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v_a_2574_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
}
else
{
lean_object* v_a_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2589_; 
lean_dec_ref(v___y_2536_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v_tk_2476_);
v_a_2582_ = lean_ctor_get(v___x_2537_, 0);
v_isSharedCheck_2589_ = !lean_is_exclusive(v___x_2537_);
if (v_isSharedCheck_2589_ == 0)
{
v___x_2584_ = v___x_2537_;
v_isShared_2585_ = v_isSharedCheck_2589_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_a_2582_);
lean_dec(v___x_2537_);
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
v___jp_2590_:
{
lean_object* v___x_2604_; lean_object* v___x_2605_; 
v___x_2604_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__3));
v___x_2605_ = l_Lean_Elab_Tactic_mkSimpContext(v___y_2594_, v___y_2593_, v___y_2592_, v___y_2593_, v___x_2604_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_);
lean_dec(v___y_2594_);
if (lean_obj_tag(v___x_2605_) == 0)
{
lean_object* v_a_2606_; 
v_a_2606_ = lean_ctor_get(v___x_2605_, 0);
lean_inc(v_a_2606_);
lean_dec_ref_known(v___x_2605_, 1);
if (lean_obj_tag(v___y_2591_) == 0)
{
lean_object* v_ctx_2607_; lean_object* v_simprocs_2608_; 
v_ctx_2607_ = lean_ctor_get(v_a_2606_, 0);
lean_inc_ref(v_ctx_2607_);
v_simprocs_2608_ = lean_ctor_get(v_a_2606_, 1);
lean_inc_ref(v_simprocs_2608_);
lean_dec(v_a_2606_);
v___y_2529_ = v___y_2602_;
v___y_2530_ = v___y_2603_;
v___y_2531_ = v_simprocs_2608_;
v___y_2532_ = v_stxForSuggestion_2595_;
v___y_2533_ = v___y_2597_;
v___y_2534_ = v___y_2601_;
v___y_2535_ = v___y_2600_;
v___y_2536_ = v_ctx_2607_;
goto v___jp_2528_;
}
else
{
lean_object* v_ctx_2609_; lean_object* v_simprocs_2610_; lean_object* v___x_2611_; 
lean_dec_ref_known(v___y_2591_, 1);
v_ctx_2609_ = lean_ctor_get(v_a_2606_, 0);
lean_inc_ref(v_ctx_2609_);
v_simprocs_2610_ = lean_ctor_get(v_a_2606_, 1);
lean_inc_ref(v_simprocs_2610_);
lean_dec(v_a_2606_);
v___x_2611_ = l_Lean_Meta_Simp_Context_setAutoUnfold(v_ctx_2609_);
v___y_2529_ = v___y_2602_;
v___y_2530_ = v___y_2603_;
v___y_2531_ = v_simprocs_2610_;
v___y_2532_ = v_stxForSuggestion_2595_;
v___y_2533_ = v___y_2597_;
v___y_2534_ = v___y_2601_;
v___y_2535_ = v___y_2600_;
v___y_2536_ = v___x_2611_;
goto v___jp_2528_;
}
}
else
{
lean_object* v_a_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2619_; 
lean_dec(v_stxForSuggestion_2595_);
lean_dec(v___y_2591_);
lean_dec(v_tk_2476_);
v_a_2612_ = lean_ctor_get(v___x_2605_, 0);
v_isSharedCheck_2619_ = !lean_is_exclusive(v___x_2605_);
if (v_isSharedCheck_2619_ == 0)
{
v___x_2614_ = v___x_2605_;
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_a_2612_);
lean_dec(v___x_2605_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2617_; 
if (v_isShared_2615_ == 0)
{
v___x_2617_ = v___x_2614_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v_a_2612_);
v___x_2617_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
return v___x_2617_;
}
}
}
}
v___jp_2620_:
{
lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; 
lean_inc_ref_n(v___y_2624_, 2);
v___x_2642_ = l_Array_append___redArg(v___y_2624_, v___y_2641_);
lean_dec_ref(v___y_2641_);
lean_inc_n(v___y_2625_, 3);
lean_inc_n(v___y_2633_, 5);
v___x_2643_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2643_, 0, v___y_2633_);
lean_ctor_set(v___x_2643_, 1, v___y_2625_);
lean_ctor_set(v___x_2643_, 2, v___x_2642_);
v___x_2644_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__4));
v___x_2645_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2645_, 0, v___y_2633_);
lean_ctor_set(v___x_2645_, 1, v___x_2644_);
v___x_2646_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__5));
v___x_2647_ = l_Lean_Syntax_SepArray_ofElems(v___x_2646_, v___y_2634_);
lean_dec_ref(v___y_2634_);
v___x_2648_ = l_Array_append___redArg(v___y_2624_, v___x_2647_);
lean_dec_ref(v___x_2647_);
v___x_2649_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2649_, 0, v___y_2633_);
lean_ctor_set(v___x_2649_, 1, v___y_2625_);
lean_ctor_set(v___x_2649_, 2, v___x_2648_);
v___x_2650_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__6));
v___x_2651_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2651_, 0, v___y_2633_);
lean_ctor_set(v___x_2651_, 1, v___x_2650_);
v___x_2652_ = l_Lean_Syntax_node3(v___y_2633_, v___y_2625_, v___x_2645_, v___x_2649_, v___x_2651_);
v___x_2653_ = l_Lean_Syntax_node5(v___y_2633_, v___y_2635_, v___y_2636_, v___y_2627_, v___y_2626_, v___x_2643_, v___x_2652_);
v___y_2591_ = v___y_2622_;
v___y_2592_ = v___y_2629_;
v___y_2593_ = v___y_2640_;
v___y_2594_ = v___y_2639_;
v_stxForSuggestion_2595_ = v___x_2653_;
v___y_2596_ = v___y_2632_;
v___y_2597_ = v___y_2637_;
v___y_2598_ = v___y_2630_;
v___y_2599_ = v___y_2638_;
v___y_2600_ = v___y_2631_;
v___y_2601_ = v___y_2623_;
v___y_2602_ = v___y_2621_;
v___y_2603_ = v___y_2628_;
goto v___jp_2590_;
}
v___jp_2654_:
{
lean_object* v___x_2676_; lean_object* v___x_2677_; 
lean_inc_ref(v___y_2657_);
v___x_2676_ = l_Array_append___redArg(v___y_2657_, v___y_2675_);
lean_dec_ref(v___y_2675_);
lean_inc(v___y_2659_);
lean_inc(v___y_2666_);
v___x_2677_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2677_, 0, v___y_2666_);
lean_ctor_set(v___x_2677_, 1, v___y_2659_);
lean_ctor_set(v___x_2677_, 2, v___x_2676_);
if (lean_obj_tag(v___y_2667_) == 1)
{
lean_object* v_val_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; 
v_val_2678_ = lean_ctor_get(v___y_2667_, 0);
lean_inc(v_val_2678_);
lean_dec_ref_known(v___y_2667_, 1);
v___x_2679_ = l_Lean_SourceInfo_fromRef(v_val_2678_, v___y_2673_);
lean_dec(v_val_2678_);
v___x_2680_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8));
v___x_2681_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2679_);
lean_ctor_set(v___x_2681_, 1, v___x_2680_);
v___x_2682_ = l_Array_mkArray1___redArg(v___x_2681_);
v___y_2621_ = v___y_2655_;
v___y_2622_ = v___y_2656_;
v___y_2623_ = v___y_2658_;
v___y_2624_ = v___y_2657_;
v___y_2625_ = v___y_2659_;
v___y_2626_ = v___x_2677_;
v___y_2627_ = v___y_2660_;
v___y_2628_ = v___y_2661_;
v___y_2629_ = v___y_2662_;
v___y_2630_ = v___y_2663_;
v___y_2631_ = v___y_2664_;
v___y_2632_ = v___y_2665_;
v___y_2633_ = v___y_2666_;
v___y_2634_ = v___y_2668_;
v___y_2635_ = v___y_2669_;
v___y_2636_ = v___y_2670_;
v___y_2637_ = v___y_2672_;
v___y_2638_ = v___y_2671_;
v___y_2639_ = v___y_2674_;
v___y_2640_ = v___y_2673_;
v___y_2641_ = v___x_2682_;
goto v___jp_2620_;
}
else
{
lean_object* v___x_2683_; 
lean_dec(v___y_2667_);
v___x_2683_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_2621_ = v___y_2655_;
v___y_2622_ = v___y_2656_;
v___y_2623_ = v___y_2658_;
v___y_2624_ = v___y_2657_;
v___y_2625_ = v___y_2659_;
v___y_2626_ = v___x_2677_;
v___y_2627_ = v___y_2660_;
v___y_2628_ = v___y_2661_;
v___y_2629_ = v___y_2662_;
v___y_2630_ = v___y_2663_;
v___y_2631_ = v___y_2664_;
v___y_2632_ = v___y_2665_;
v___y_2633_ = v___y_2666_;
v___y_2634_ = v___y_2668_;
v___y_2635_ = v___y_2669_;
v___y_2636_ = v___y_2670_;
v___y_2637_ = v___y_2672_;
v___y_2638_ = v___y_2671_;
v___y_2639_ = v___y_2674_;
v___y_2640_ = v___y_2673_;
v___y_2641_ = v___x_2683_;
goto v___jp_2620_;
}
}
v___jp_2684_:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; 
lean_inc_ref_n(v___y_2687_, 2);
v___x_2706_ = l_Array_append___redArg(v___y_2687_, v___y_2705_);
lean_dec_ref(v___y_2705_);
lean_inc_n(v___y_2691_, 3);
lean_inc_n(v___y_2686_, 5);
v___x_2707_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2707_, 0, v___y_2686_);
lean_ctor_set(v___x_2707_, 1, v___y_2691_);
lean_ctor_set(v___x_2707_, 2, v___x_2706_);
v___x_2708_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__4));
v___x_2709_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2709_, 0, v___y_2686_);
lean_ctor_set(v___x_2709_, 1, v___x_2708_);
v___x_2710_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__5));
v___x_2711_ = l_Lean_Syntax_SepArray_ofElems(v___x_2710_, v___y_2700_);
lean_dec_ref(v___y_2700_);
v___x_2712_ = l_Array_append___redArg(v___y_2687_, v___x_2711_);
lean_dec_ref(v___x_2711_);
v___x_2713_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2713_, 0, v___y_2686_);
lean_ctor_set(v___x_2713_, 1, v___y_2691_);
lean_ctor_set(v___x_2713_, 2, v___x_2712_);
v___x_2714_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__6));
v___x_2715_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2715_, 0, v___y_2686_);
lean_ctor_set(v___x_2715_, 1, v___x_2714_);
v___x_2716_ = l_Lean_Syntax_node3(v___y_2686_, v___y_2691_, v___x_2709_, v___x_2713_, v___x_2715_);
v___x_2717_ = l_Lean_Syntax_node5(v___y_2686_, v___y_2690_, v___y_2695_, v___y_2692_, v___y_2699_, v___x_2707_, v___x_2716_);
v___y_2591_ = v___y_2688_;
v___y_2592_ = v___y_2694_;
v___y_2593_ = v___y_2704_;
v___y_2594_ = v___y_2703_;
v_stxForSuggestion_2595_ = v___x_2717_;
v___y_2596_ = v___y_2698_;
v___y_2597_ = v___y_2701_;
v___y_2598_ = v___y_2696_;
v___y_2599_ = v___y_2702_;
v___y_2600_ = v___y_2697_;
v___y_2601_ = v___y_2689_;
v___y_2602_ = v___y_2685_;
v___y_2603_ = v___y_2693_;
goto v___jp_2590_;
}
v___jp_2718_:
{
lean_object* v___x_2740_; lean_object* v___x_2741_; 
lean_inc_ref(v___y_2721_);
v___x_2740_ = l_Array_append___redArg(v___y_2721_, v___y_2739_);
lean_dec_ref(v___y_2739_);
lean_inc(v___y_2725_);
lean_inc(v___y_2720_);
v___x_2741_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2741_, 0, v___y_2720_);
lean_ctor_set(v___x_2741_, 1, v___y_2725_);
lean_ctor_set(v___x_2741_, 2, v___x_2740_);
if (lean_obj_tag(v___y_2733_) == 1)
{
lean_object* v_val_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; 
v_val_2742_ = lean_ctor_get(v___y_2733_, 0);
lean_inc(v_val_2742_);
lean_dec_ref_known(v___y_2733_, 1);
v___x_2743_ = l_Lean_SourceInfo_fromRef(v_val_2742_, v___y_2737_);
lean_dec(v_val_2742_);
v___x_2744_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8));
v___x_2745_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2745_, 0, v___x_2743_);
lean_ctor_set(v___x_2745_, 1, v___x_2744_);
v___x_2746_ = l_Array_mkArray1___redArg(v___x_2745_);
v___y_2685_ = v___y_2719_;
v___y_2686_ = v___y_2720_;
v___y_2687_ = v___y_2721_;
v___y_2688_ = v___y_2722_;
v___y_2689_ = v___y_2723_;
v___y_2690_ = v___y_2724_;
v___y_2691_ = v___y_2725_;
v___y_2692_ = v___y_2726_;
v___y_2693_ = v___y_2727_;
v___y_2694_ = v___y_2728_;
v___y_2695_ = v___y_2729_;
v___y_2696_ = v___y_2731_;
v___y_2697_ = v___y_2730_;
v___y_2698_ = v___y_2732_;
v___y_2699_ = v___x_2741_;
v___y_2700_ = v___y_2734_;
v___y_2701_ = v___y_2736_;
v___y_2702_ = v___y_2735_;
v___y_2703_ = v___y_2738_;
v___y_2704_ = v___y_2737_;
v___y_2705_ = v___x_2746_;
goto v___jp_2684_;
}
else
{
lean_object* v___x_2747_; 
lean_dec(v___y_2733_);
v___x_2747_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_2685_ = v___y_2719_;
v___y_2686_ = v___y_2720_;
v___y_2687_ = v___y_2721_;
v___y_2688_ = v___y_2722_;
v___y_2689_ = v___y_2723_;
v___y_2690_ = v___y_2724_;
v___y_2691_ = v___y_2725_;
v___y_2692_ = v___y_2726_;
v___y_2693_ = v___y_2727_;
v___y_2694_ = v___y_2728_;
v___y_2695_ = v___y_2729_;
v___y_2696_ = v___y_2731_;
v___y_2697_ = v___y_2730_;
v___y_2698_ = v___y_2732_;
v___y_2699_ = v___x_2741_;
v___y_2700_ = v___y_2734_;
v___y_2701_ = v___y_2736_;
v___y_2702_ = v___y_2735_;
v___y_2703_ = v___y_2738_;
v___y_2704_ = v___y_2737_;
v___y_2705_ = v___x_2747_;
goto v___jp_2684_;
}
}
v___jp_2748_:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
lean_inc_ref_n(v___y_2759_, 2);
v___x_2769_ = l_Array_append___redArg(v___y_2759_, v___y_2768_);
lean_dec_ref(v___y_2768_);
lean_inc_n(v___y_2750_, 2);
lean_inc_n(v___y_2760_, 2);
v___x_2770_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2770_, 0, v___y_2760_);
lean_ctor_set(v___x_2770_, 1, v___y_2750_);
lean_ctor_set(v___x_2770_, 2, v___x_2769_);
v___x_2771_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2771_, 0, v___y_2760_);
lean_ctor_set(v___x_2771_, 1, v___y_2750_);
lean_ctor_set(v___x_2771_, 2, v___y_2759_);
v___x_2772_ = l_Lean_Syntax_node5(v___y_2760_, v___y_2752_, v___y_2763_, v___y_2754_, v___y_2762_, v___x_2770_, v___x_2771_);
v___y_2591_ = v___y_2751_;
v___y_2592_ = v___y_2756_;
v___y_2593_ = v___y_2767_;
v___y_2594_ = v___y_2766_;
v_stxForSuggestion_2595_ = v___x_2772_;
v___y_2596_ = v___y_2761_;
v___y_2597_ = v___y_2764_;
v___y_2598_ = v___y_2757_;
v___y_2599_ = v___y_2765_;
v___y_2600_ = v___y_2758_;
v___y_2601_ = v___y_2753_;
v___y_2602_ = v___y_2749_;
v___y_2603_ = v___y_2755_;
goto v___jp_2590_;
}
v___jp_2773_:
{
lean_object* v___x_2795_; lean_object* v___x_2796_; 
lean_inc_ref(v___y_2784_);
v___x_2795_ = l_Array_append___redArg(v___y_2784_, v___y_2794_);
lean_dec_ref(v___y_2794_);
lean_inc(v___y_2775_);
lean_inc(v___y_2785_);
v___x_2796_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2796_, 0, v___y_2785_);
lean_ctor_set(v___x_2796_, 1, v___y_2775_);
lean_ctor_set(v___x_2796_, 2, v___x_2795_);
if (lean_obj_tag(v___y_2787_) == 1)
{
lean_object* v_val_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; 
v_val_2797_ = lean_ctor_get(v___y_2787_, 0);
lean_inc(v_val_2797_);
lean_dec_ref_known(v___y_2787_, 1);
v___x_2798_ = l_Lean_SourceInfo_fromRef(v_val_2797_, v___y_2789_);
lean_dec(v_val_2797_);
v___x_2799_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8));
v___x_2800_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2800_, 0, v___x_2798_);
lean_ctor_set(v___x_2800_, 1, v___x_2799_);
v___x_2801_ = l_Array_mkArray1___redArg(v___x_2800_);
v___y_2749_ = v___y_2774_;
v___y_2750_ = v___y_2775_;
v___y_2751_ = v___y_2776_;
v___y_2752_ = v___y_2777_;
v___y_2753_ = v___y_2778_;
v___y_2754_ = v___y_2779_;
v___y_2755_ = v___y_2780_;
v___y_2756_ = v___y_2781_;
v___y_2757_ = v___y_2782_;
v___y_2758_ = v___y_2783_;
v___y_2759_ = v___y_2784_;
v___y_2760_ = v___y_2785_;
v___y_2761_ = v___y_2786_;
v___y_2762_ = v___x_2796_;
v___y_2763_ = v___y_2788_;
v___y_2764_ = v___y_2791_;
v___y_2765_ = v___y_2790_;
v___y_2766_ = v___y_2793_;
v___y_2767_ = v___y_2792_;
v___y_2768_ = v___x_2801_;
goto v___jp_2748_;
}
else
{
lean_object* v___x_2802_; 
lean_dec(v___y_2787_);
v___x_2802_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_2749_ = v___y_2774_;
v___y_2750_ = v___y_2775_;
v___y_2751_ = v___y_2776_;
v___y_2752_ = v___y_2777_;
v___y_2753_ = v___y_2778_;
v___y_2754_ = v___y_2779_;
v___y_2755_ = v___y_2780_;
v___y_2756_ = v___y_2781_;
v___y_2757_ = v___y_2782_;
v___y_2758_ = v___y_2783_;
v___y_2759_ = v___y_2784_;
v___y_2760_ = v___y_2785_;
v___y_2761_ = v___y_2786_;
v___y_2762_ = v___x_2796_;
v___y_2763_ = v___y_2788_;
v___y_2764_ = v___y_2791_;
v___y_2765_ = v___y_2790_;
v___y_2766_ = v___y_2793_;
v___y_2767_ = v___y_2792_;
v___y_2768_ = v___x_2802_;
goto v___jp_2748_;
}
}
v___jp_2803_:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; 
lean_inc_ref_n(v___y_2806_, 2);
v___x_2824_ = l_Array_append___redArg(v___y_2806_, v___y_2823_);
lean_dec_ref(v___y_2823_);
lean_inc_n(v___y_2807_, 2);
lean_inc_n(v___y_2816_, 2);
v___x_2825_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2825_, 0, v___y_2816_);
lean_ctor_set(v___x_2825_, 1, v___y_2807_);
lean_ctor_set(v___x_2825_, 2, v___x_2824_);
v___x_2826_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2826_, 0, v___y_2816_);
lean_ctor_set(v___x_2826_, 1, v___y_2807_);
lean_ctor_set(v___x_2826_, 2, v___y_2806_);
v___x_2827_ = l_Lean_Syntax_node5(v___y_2816_, v___y_2818_, v___y_2817_, v___y_2809_, v___y_2811_, v___x_2825_, v___x_2826_);
v___y_2591_ = v___y_2805_;
v___y_2592_ = v___y_2812_;
v___y_2593_ = v___y_2822_;
v___y_2594_ = v___y_2821_;
v_stxForSuggestion_2595_ = v___x_2827_;
v___y_2596_ = v___y_2815_;
v___y_2597_ = v___y_2819_;
v___y_2598_ = v___y_2813_;
v___y_2599_ = v___y_2820_;
v___y_2600_ = v___y_2814_;
v___y_2601_ = v___y_2808_;
v___y_2602_ = v___y_2804_;
v___y_2603_ = v___y_2810_;
goto v___jp_2590_;
}
v___jp_2828_:
{
lean_object* v___x_2850_; lean_object* v___x_2851_; 
lean_inc_ref(v___y_2830_);
v___x_2850_ = l_Array_append___redArg(v___y_2830_, v___y_2849_);
lean_dec_ref(v___y_2849_);
lean_inc(v___y_2832_);
lean_inc(v___y_2840_);
v___x_2851_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2851_, 0, v___y_2840_);
lean_ctor_set(v___x_2851_, 1, v___y_2832_);
lean_ctor_set(v___x_2851_, 2, v___x_2850_);
if (lean_obj_tag(v___y_2841_) == 1)
{
lean_object* v_val_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; 
v_val_2852_ = lean_ctor_get(v___y_2841_, 0);
lean_inc(v_val_2852_);
lean_dec_ref_known(v___y_2841_, 1);
v___x_2853_ = l_Lean_SourceInfo_fromRef(v_val_2852_, v___y_2842_);
lean_dec(v_val_2852_);
v___x_2854_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8));
v___x_2855_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2853_);
lean_ctor_set(v___x_2855_, 1, v___x_2854_);
v___x_2856_ = l_Array_mkArray1___redArg(v___x_2855_);
v___y_2804_ = v___y_2829_;
v___y_2805_ = v___y_2831_;
v___y_2806_ = v___y_2830_;
v___y_2807_ = v___y_2832_;
v___y_2808_ = v___y_2833_;
v___y_2809_ = v___y_2834_;
v___y_2810_ = v___y_2835_;
v___y_2811_ = v___x_2851_;
v___y_2812_ = v___y_2836_;
v___y_2813_ = v___y_2837_;
v___y_2814_ = v___y_2838_;
v___y_2815_ = v___y_2839_;
v___y_2816_ = v___y_2840_;
v___y_2817_ = v___y_2843_;
v___y_2818_ = v___y_2844_;
v___y_2819_ = v___y_2846_;
v___y_2820_ = v___y_2845_;
v___y_2821_ = v___y_2848_;
v___y_2822_ = v___y_2847_;
v___y_2823_ = v___x_2856_;
goto v___jp_2803_;
}
else
{
lean_object* v___x_2857_; 
lean_dec(v___y_2841_);
v___x_2857_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_2804_ = v___y_2829_;
v___y_2805_ = v___y_2831_;
v___y_2806_ = v___y_2830_;
v___y_2807_ = v___y_2832_;
v___y_2808_ = v___y_2833_;
v___y_2809_ = v___y_2834_;
v___y_2810_ = v___y_2835_;
v___y_2811_ = v___x_2851_;
v___y_2812_ = v___y_2836_;
v___y_2813_ = v___y_2837_;
v___y_2814_ = v___y_2838_;
v___y_2815_ = v___y_2839_;
v___y_2816_ = v___y_2840_;
v___y_2817_ = v___y_2843_;
v___y_2818_ = v___y_2844_;
v___y_2819_ = v___y_2846_;
v___y_2820_ = v___y_2845_;
v___y_2821_ = v___y_2848_;
v___y_2822_ = v___y_2847_;
v___y_2823_ = v___x_2857_;
goto v___jp_2803_;
}
}
v___jp_2858_:
{
lean_object* v___x_2875_; lean_object* v_a_2876_; lean_object* v___x_2877_; uint8_t v___x_2878_; 
v___x_2875_ = l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___redArg(v___y_2859_);
v_a_2876_ = lean_ctor_get(v___x_2875_, 0);
lean_inc(v_a_2876_);
lean_dec_ref(v___x_2875_);
v___x_2877_ = lean_array_get_size(v___y_2863_);
v___x_2878_ = lean_nat_dec_eq(v___x_2877_, v___x_2475_);
if (v___x_2878_ == 0)
{
if (lean_obj_tag(v___y_2861_) == 0)
{
lean_object* v_ref_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
v_ref_2879_ = lean_ctor_get(v___y_2873_, 2);
v___x_2880_ = l_Lean_SourceInfo_fromRef(v_ref_2879_, v___x_2878_);
v___x_2881_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__6));
v___x_2882_ = l_Lean_Name_mkStr4(v___x_2462_, v___x_2463_, v___x_2464_, v___x_2881_);
v___x_2883_ = l_Lean_SourceInfo_fromRef(v_tk_2476_, v___y_2865_);
v___x_2884_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__7));
v___x_2885_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2885_, 0, v___x_2883_);
lean_ctor_set(v___x_2885_, 1, v___x_2884_);
v___x_2886_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_2887_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
if (lean_obj_tag(v___y_2860_) == 1)
{
lean_object* v_val_2888_; lean_object* v___x_2889_; 
v_val_2888_ = lean_ctor_get(v___y_2860_, 0);
lean_inc(v_val_2888_);
lean_dec_ref_known(v___y_2860_, 1);
v___x_2889_ = l_Array_mkArray1___redArg(v_val_2888_);
v___y_2655_ = v___y_2873_;
v___y_2656_ = v___y_2861_;
v___y_2657_ = v___x_2887_;
v___y_2658_ = v___y_2872_;
v___y_2659_ = v___x_2886_;
v___y_2660_ = v_a_2876_;
v___y_2661_ = v___y_2874_;
v___y_2662_ = v___y_2864_;
v___y_2663_ = v___y_2869_;
v___y_2664_ = v___y_2871_;
v___y_2665_ = v___y_2867_;
v___y_2666_ = v___x_2880_;
v___y_2667_ = v___y_2862_;
v___y_2668_ = v___y_2863_;
v___y_2669_ = v___x_2882_;
v___y_2670_ = v___x_2885_;
v___y_2671_ = v___y_2870_;
v___y_2672_ = v___y_2868_;
v___y_2673_ = v___y_2865_;
v___y_2674_ = v_stxForExecution_2866_;
v___y_2675_ = v___x_2889_;
goto v___jp_2654_;
}
else
{
lean_object* v___x_2890_; 
lean_dec(v___y_2860_);
v___x_2890_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_2655_ = v___y_2873_;
v___y_2656_ = v___y_2861_;
v___y_2657_ = v___x_2887_;
v___y_2658_ = v___y_2872_;
v___y_2659_ = v___x_2886_;
v___y_2660_ = v_a_2876_;
v___y_2661_ = v___y_2874_;
v___y_2662_ = v___y_2864_;
v___y_2663_ = v___y_2869_;
v___y_2664_ = v___y_2871_;
v___y_2665_ = v___y_2867_;
v___y_2666_ = v___x_2880_;
v___y_2667_ = v___y_2862_;
v___y_2668_ = v___y_2863_;
v___y_2669_ = v___x_2882_;
v___y_2670_ = v___x_2885_;
v___y_2671_ = v___y_2870_;
v___y_2672_ = v___y_2868_;
v___y_2673_ = v___y_2865_;
v___y_2674_ = v_stxForExecution_2866_;
v___y_2675_ = v___x_2890_;
goto v___jp_2654_;
}
}
else
{
lean_object* v_ref_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; 
v_ref_2891_ = lean_ctor_get(v___y_2873_, 2);
v___x_2892_ = l_Lean_SourceInfo_fromRef(v_ref_2891_, v___x_2878_);
v___x_2893_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__8));
v___x_2894_ = l_Lean_Name_mkStr4(v___x_2462_, v___x_2463_, v___x_2464_, v___x_2893_);
v___x_2895_ = l_Lean_SourceInfo_fromRef(v_tk_2476_, v___y_2865_);
v___x_2896_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__9));
v___x_2897_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2897_, 0, v___x_2895_);
lean_ctor_set(v___x_2897_, 1, v___x_2896_);
v___x_2898_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_2899_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
if (lean_obj_tag(v___y_2860_) == 1)
{
lean_object* v_val_2900_; lean_object* v___x_2901_; 
v_val_2900_ = lean_ctor_get(v___y_2860_, 0);
lean_inc(v_val_2900_);
lean_dec_ref_known(v___y_2860_, 1);
v___x_2901_ = l_Array_mkArray1___redArg(v_val_2900_);
v___y_2719_ = v___y_2873_;
v___y_2720_ = v___x_2892_;
v___y_2721_ = v___x_2899_;
v___y_2722_ = v___y_2861_;
v___y_2723_ = v___y_2872_;
v___y_2724_ = v___x_2894_;
v___y_2725_ = v___x_2898_;
v___y_2726_ = v_a_2876_;
v___y_2727_ = v___y_2874_;
v___y_2728_ = v___y_2864_;
v___y_2729_ = v___x_2897_;
v___y_2730_ = v___y_2871_;
v___y_2731_ = v___y_2869_;
v___y_2732_ = v___y_2867_;
v___y_2733_ = v___y_2862_;
v___y_2734_ = v___y_2863_;
v___y_2735_ = v___y_2870_;
v___y_2736_ = v___y_2868_;
v___y_2737_ = v___y_2865_;
v___y_2738_ = v_stxForExecution_2866_;
v___y_2739_ = v___x_2901_;
goto v___jp_2718_;
}
else
{
lean_object* v___x_2902_; 
lean_dec(v___y_2860_);
v___x_2902_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_2719_ = v___y_2873_;
v___y_2720_ = v___x_2892_;
v___y_2721_ = v___x_2899_;
v___y_2722_ = v___y_2861_;
v___y_2723_ = v___y_2872_;
v___y_2724_ = v___x_2894_;
v___y_2725_ = v___x_2898_;
v___y_2726_ = v_a_2876_;
v___y_2727_ = v___y_2874_;
v___y_2728_ = v___y_2864_;
v___y_2729_ = v___x_2897_;
v___y_2730_ = v___y_2871_;
v___y_2731_ = v___y_2869_;
v___y_2732_ = v___y_2867_;
v___y_2733_ = v___y_2862_;
v___y_2734_ = v___y_2863_;
v___y_2735_ = v___y_2870_;
v___y_2736_ = v___y_2868_;
v___y_2737_ = v___y_2865_;
v___y_2738_ = v_stxForExecution_2866_;
v___y_2739_ = v___x_2902_;
goto v___jp_2718_;
}
}
}
else
{
lean_dec_ref(v___y_2863_);
if (lean_obj_tag(v___y_2861_) == 0)
{
lean_object* v_ref_2903_; uint8_t v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v_ref_2903_ = lean_ctor_get(v___y_2873_, 2);
v___x_2904_ = 0;
v___x_2905_ = l_Lean_SourceInfo_fromRef(v_ref_2903_, v___x_2904_);
v___x_2906_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__6));
v___x_2907_ = l_Lean_Name_mkStr4(v___x_2462_, v___x_2463_, v___x_2464_, v___x_2906_);
v___x_2908_ = l_Lean_SourceInfo_fromRef(v_tk_2476_, v___x_2878_);
v___x_2909_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__7));
v___x_2910_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2910_, 0, v___x_2908_);
lean_ctor_set(v___x_2910_, 1, v___x_2909_);
v___x_2911_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_2912_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
if (lean_obj_tag(v___y_2860_) == 1)
{
lean_object* v_val_2913_; lean_object* v___x_2914_; 
v_val_2913_ = lean_ctor_get(v___y_2860_, 0);
lean_inc(v_val_2913_);
lean_dec_ref_known(v___y_2860_, 1);
v___x_2914_ = l_Array_mkArray1___redArg(v_val_2913_);
v___y_2774_ = v___y_2873_;
v___y_2775_ = v___x_2911_;
v___y_2776_ = v___y_2861_;
v___y_2777_ = v___x_2907_;
v___y_2778_ = v___y_2872_;
v___y_2779_ = v_a_2876_;
v___y_2780_ = v___y_2874_;
v___y_2781_ = v___y_2864_;
v___y_2782_ = v___y_2869_;
v___y_2783_ = v___y_2871_;
v___y_2784_ = v___x_2912_;
v___y_2785_ = v___x_2905_;
v___y_2786_ = v___y_2867_;
v___y_2787_ = v___y_2862_;
v___y_2788_ = v___x_2910_;
v___y_2789_ = v___x_2878_;
v___y_2790_ = v___y_2870_;
v___y_2791_ = v___y_2868_;
v___y_2792_ = v___y_2865_;
v___y_2793_ = v_stxForExecution_2866_;
v___y_2794_ = v___x_2914_;
goto v___jp_2773_;
}
else
{
lean_object* v___x_2915_; 
lean_dec(v___y_2860_);
v___x_2915_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_2774_ = v___y_2873_;
v___y_2775_ = v___x_2911_;
v___y_2776_ = v___y_2861_;
v___y_2777_ = v___x_2907_;
v___y_2778_ = v___y_2872_;
v___y_2779_ = v_a_2876_;
v___y_2780_ = v___y_2874_;
v___y_2781_ = v___y_2864_;
v___y_2782_ = v___y_2869_;
v___y_2783_ = v___y_2871_;
v___y_2784_ = v___x_2912_;
v___y_2785_ = v___x_2905_;
v___y_2786_ = v___y_2867_;
v___y_2787_ = v___y_2862_;
v___y_2788_ = v___x_2910_;
v___y_2789_ = v___x_2878_;
v___y_2790_ = v___y_2870_;
v___y_2791_ = v___y_2868_;
v___y_2792_ = v___y_2865_;
v___y_2793_ = v_stxForExecution_2866_;
v___y_2794_ = v___x_2915_;
goto v___jp_2773_;
}
}
else
{
lean_object* v_ref_2916_; uint8_t v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; 
v_ref_2916_ = lean_ctor_get(v___y_2873_, 2);
v___x_2917_ = 0;
v___x_2918_ = l_Lean_SourceInfo_fromRef(v_ref_2916_, v___x_2917_);
v___x_2919_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__8));
v___x_2920_ = l_Lean_Name_mkStr4(v___x_2462_, v___x_2463_, v___x_2464_, v___x_2919_);
v___x_2921_ = l_Lean_SourceInfo_fromRef(v_tk_2476_, v___x_2878_);
v___x_2922_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__9));
v___x_2923_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2923_, 0, v___x_2921_);
lean_ctor_set(v___x_2923_, 1, v___x_2922_);
v___x_2924_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_2925_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
if (lean_obj_tag(v___y_2860_) == 1)
{
lean_object* v_val_2926_; lean_object* v___x_2927_; 
v_val_2926_ = lean_ctor_get(v___y_2860_, 0);
lean_inc(v_val_2926_);
lean_dec_ref_known(v___y_2860_, 1);
v___x_2927_ = l_Array_mkArray1___redArg(v_val_2926_);
v___y_2829_ = v___y_2873_;
v___y_2830_ = v___x_2925_;
v___y_2831_ = v___y_2861_;
v___y_2832_ = v___x_2924_;
v___y_2833_ = v___y_2872_;
v___y_2834_ = v_a_2876_;
v___y_2835_ = v___y_2874_;
v___y_2836_ = v___y_2864_;
v___y_2837_ = v___y_2869_;
v___y_2838_ = v___y_2871_;
v___y_2839_ = v___y_2867_;
v___y_2840_ = v___x_2918_;
v___y_2841_ = v___y_2862_;
v___y_2842_ = v___x_2878_;
v___y_2843_ = v___x_2923_;
v___y_2844_ = v___x_2920_;
v___y_2845_ = v___y_2870_;
v___y_2846_ = v___y_2868_;
v___y_2847_ = v___y_2865_;
v___y_2848_ = v_stxForExecution_2866_;
v___y_2849_ = v___x_2927_;
goto v___jp_2828_;
}
else
{
lean_object* v___x_2928_; 
lean_dec(v___y_2860_);
v___x_2928_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_2829_ = v___y_2873_;
v___y_2830_ = v___x_2925_;
v___y_2831_ = v___y_2861_;
v___y_2832_ = v___x_2924_;
v___y_2833_ = v___y_2872_;
v___y_2834_ = v_a_2876_;
v___y_2835_ = v___y_2874_;
v___y_2836_ = v___y_2864_;
v___y_2837_ = v___y_2869_;
v___y_2838_ = v___y_2871_;
v___y_2839_ = v___y_2867_;
v___y_2840_ = v___x_2918_;
v___y_2841_ = v___y_2862_;
v___y_2842_ = v___x_2878_;
v___y_2843_ = v___x_2923_;
v___y_2844_ = v___x_2920_;
v___y_2845_ = v___y_2870_;
v___y_2846_ = v___y_2868_;
v___y_2847_ = v___y_2865_;
v___y_2848_ = v_stxForExecution_2866_;
v___y_2849_ = v___x_2928_;
goto v___jp_2828_;
}
}
}
}
v___jp_2929_:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; 
lean_inc_ref_n(v___y_2943_, 2);
v___x_2952_ = l_Array_append___redArg(v___y_2943_, v___y_2951_);
lean_dec_ref(v___y_2951_);
lean_inc_n(v___y_2934_, 3);
lean_inc_n(v___y_2941_, 5);
v___x_2953_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2953_, 0, v___y_2941_);
lean_ctor_set(v___x_2953_, 1, v___y_2934_);
lean_ctor_set(v___x_2953_, 2, v___x_2952_);
v___x_2954_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__4));
v___x_2955_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2955_, 0, v___y_2941_);
lean_ctor_set(v___x_2955_, 1, v___x_2954_);
v___x_2956_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__5));
v___x_2957_ = l_Lean_Syntax_SepArray_ofElems(v___x_2956_, v___y_2946_);
v___x_2958_ = l_Array_append___redArg(v___y_2943_, v___x_2957_);
lean_dec_ref(v___x_2957_);
v___x_2959_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2959_, 0, v___y_2941_);
lean_ctor_set(v___x_2959_, 1, v___y_2934_);
lean_ctor_set(v___x_2959_, 2, v___x_2958_);
v___x_2960_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__6));
v___x_2961_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2961_, 0, v___y_2941_);
lean_ctor_set(v___x_2961_, 1, v___x_2960_);
v___x_2962_ = l_Lean_Syntax_node3(v___y_2941_, v___y_2934_, v___x_2955_, v___x_2959_, v___x_2961_);
lean_inc(v___y_2938_);
v___x_2963_ = l_Lean_Syntax_node5(v___y_2941_, v___y_2937_, v___y_2944_, v___y_2938_, v___y_2949_, v___x_2953_, v___x_2962_);
v___y_2859_ = v___y_2938_;
v___y_2860_ = v___y_2940_;
v___y_2861_ = v___y_2931_;
v___y_2862_ = v___y_2945_;
v___y_2863_ = v___y_2946_;
v___y_2864_ = v___y_2935_;
v___y_2865_ = v___y_2950_;
v_stxForExecution_2866_ = v___x_2963_;
v___y_2867_ = v___y_2939_;
v___y_2868_ = v___y_2936_;
v___y_2869_ = v___y_2947_;
v___y_2870_ = v___y_2932_;
v___y_2871_ = v___y_2933_;
v___y_2872_ = v___y_2942_;
v___y_2873_ = v___y_2948_;
v___y_2874_ = v___y_2930_;
goto v___jp_2858_;
}
v___jp_2964_:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; 
lean_inc_ref(v___y_2978_);
v___x_2986_ = l_Array_append___redArg(v___y_2978_, v___y_2985_);
lean_dec_ref(v___y_2985_);
lean_inc(v___y_2969_);
lean_inc(v___y_2976_);
v___x_2987_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2987_, 0, v___y_2976_);
lean_ctor_set(v___x_2987_, 1, v___y_2969_);
lean_ctor_set(v___x_2987_, 2, v___x_2986_);
if (lean_obj_tag(v___y_2980_) == 1)
{
lean_object* v_val_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; 
v_val_2988_ = lean_ctor_get(v___y_2980_, 0);
v___x_2989_ = l_Lean_SourceInfo_fromRef(v_val_2988_, v___y_2984_);
v___x_2990_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8));
v___x_2991_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2991_, 0, v___x_2989_);
lean_ctor_set(v___x_2991_, 1, v___x_2990_);
v___x_2992_ = l_Array_mkArray1___redArg(v___x_2991_);
v___y_2930_ = v___y_2965_;
v___y_2931_ = v___y_2966_;
v___y_2932_ = v___y_2967_;
v___y_2933_ = v___y_2968_;
v___y_2934_ = v___y_2969_;
v___y_2935_ = v___y_2970_;
v___y_2936_ = v___y_2971_;
v___y_2937_ = v___y_2972_;
v___y_2938_ = v___y_2973_;
v___y_2939_ = v___y_2974_;
v___y_2940_ = v___y_2975_;
v___y_2941_ = v___y_2976_;
v___y_2942_ = v___y_2977_;
v___y_2943_ = v___y_2978_;
v___y_2944_ = v___y_2979_;
v___y_2945_ = v___y_2980_;
v___y_2946_ = v___y_2981_;
v___y_2947_ = v___y_2982_;
v___y_2948_ = v___y_2983_;
v___y_2949_ = v___x_2987_;
v___y_2950_ = v___y_2984_;
v___y_2951_ = v___x_2992_;
goto v___jp_2929_;
}
else
{
lean_object* v___x_2993_; 
v___x_2993_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_2930_ = v___y_2965_;
v___y_2931_ = v___y_2966_;
v___y_2932_ = v___y_2967_;
v___y_2933_ = v___y_2968_;
v___y_2934_ = v___y_2969_;
v___y_2935_ = v___y_2970_;
v___y_2936_ = v___y_2971_;
v___y_2937_ = v___y_2972_;
v___y_2938_ = v___y_2973_;
v___y_2939_ = v___y_2974_;
v___y_2940_ = v___y_2975_;
v___y_2941_ = v___y_2976_;
v___y_2942_ = v___y_2977_;
v___y_2943_ = v___y_2978_;
v___y_2944_ = v___y_2979_;
v___y_2945_ = v___y_2980_;
v___y_2946_ = v___y_2981_;
v___y_2947_ = v___y_2982_;
v___y_2948_ = v___y_2983_;
v___y_2949_ = v___x_2987_;
v___y_2950_ = v___y_2984_;
v___y_2951_ = v___x_2993_;
goto v___jp_2929_;
}
}
v___jp_2994_:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; 
lean_inc_ref_n(v___y_3004_, 2);
v___x_3017_ = l_Array_append___redArg(v___y_3004_, v___y_3016_);
lean_dec_ref(v___y_3016_);
lean_inc_n(v___y_3001_, 3);
lean_inc_n(v___y_2996_, 5);
v___x_3018_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3018_, 0, v___y_2996_);
lean_ctor_set(v___x_3018_, 1, v___y_3001_);
lean_ctor_set(v___x_3018_, 2, v___x_3017_);
v___x_3019_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__4));
v___x_3020_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3020_, 0, v___y_2996_);
lean_ctor_set(v___x_3020_, 1, v___x_3019_);
v___x_3021_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__5));
v___x_3022_ = l_Lean_Syntax_SepArray_ofElems(v___x_3021_, v___y_3011_);
v___x_3023_ = l_Array_append___redArg(v___y_3004_, v___x_3022_);
lean_dec_ref(v___x_3022_);
v___x_3024_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3024_, 0, v___y_2996_);
lean_ctor_set(v___x_3024_, 1, v___y_3001_);
lean_ctor_set(v___x_3024_, 2, v___x_3023_);
v___x_3025_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__6));
v___x_3026_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3026_, 0, v___y_2996_);
lean_ctor_set(v___x_3026_, 1, v___x_3025_);
v___x_3027_ = l_Lean_Syntax_node3(v___y_2996_, v___y_3001_, v___x_3020_, v___x_3024_, v___x_3026_);
lean_inc(v___y_3005_);
v___x_3028_ = l_Lean_Syntax_node5(v___y_2996_, v___y_3006_, v___y_3014_, v___y_3005_, v___y_3002_, v___x_3018_, v___x_3027_);
v___y_2859_ = v___y_3005_;
v___y_2860_ = v___y_3008_;
v___y_2861_ = v___y_2997_;
v___y_2862_ = v___y_3010_;
v___y_2863_ = v___y_3011_;
v___y_2864_ = v___y_3000_;
v___y_2865_ = v___y_3015_;
v_stxForExecution_2866_ = v___x_3028_;
v___y_2867_ = v___y_3007_;
v___y_2868_ = v___y_3003_;
v___y_2869_ = v___y_3012_;
v___y_2870_ = v___y_2998_;
v___y_2871_ = v___y_2999_;
v___y_2872_ = v___y_3009_;
v___y_2873_ = v___y_3013_;
v___y_2874_ = v___y_2995_;
goto v___jp_2858_;
}
v___jp_3029_:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; 
lean_inc_ref(v___y_3038_);
v___x_3051_ = l_Array_append___redArg(v___y_3038_, v___y_3050_);
lean_dec_ref(v___y_3050_);
lean_inc(v___y_3035_);
lean_inc(v___y_3031_);
v___x_3052_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3052_, 0, v___y_3031_);
lean_ctor_set(v___x_3052_, 1, v___y_3035_);
lean_ctor_set(v___x_3052_, 2, v___x_3051_);
if (lean_obj_tag(v___y_3044_) == 1)
{
lean_object* v_val_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; 
v_val_3053_ = lean_ctor_get(v___y_3044_, 0);
v___x_3054_ = l_Lean_SourceInfo_fromRef(v_val_3053_, v___y_3049_);
v___x_3055_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8));
v___x_3056_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3056_, 0, v___x_3054_);
lean_ctor_set(v___x_3056_, 1, v___x_3055_);
v___x_3057_ = l_Array_mkArray1___redArg(v___x_3056_);
v___y_2995_ = v___y_3030_;
v___y_2996_ = v___y_3031_;
v___y_2997_ = v___y_3032_;
v___y_2998_ = v___y_3033_;
v___y_2999_ = v___y_3034_;
v___y_3000_ = v___y_3036_;
v___y_3001_ = v___y_3035_;
v___y_3002_ = v___x_3052_;
v___y_3003_ = v___y_3037_;
v___y_3004_ = v___y_3038_;
v___y_3005_ = v___y_3039_;
v___y_3006_ = v___y_3040_;
v___y_3007_ = v___y_3041_;
v___y_3008_ = v___y_3042_;
v___y_3009_ = v___y_3043_;
v___y_3010_ = v___y_3044_;
v___y_3011_ = v___y_3045_;
v___y_3012_ = v___y_3046_;
v___y_3013_ = v___y_3047_;
v___y_3014_ = v___y_3048_;
v___y_3015_ = v___y_3049_;
v___y_3016_ = v___x_3057_;
goto v___jp_2994_;
}
else
{
lean_object* v___x_3058_; 
v___x_3058_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_2995_ = v___y_3030_;
v___y_2996_ = v___y_3031_;
v___y_2997_ = v___y_3032_;
v___y_2998_ = v___y_3033_;
v___y_2999_ = v___y_3034_;
v___y_3000_ = v___y_3036_;
v___y_3001_ = v___y_3035_;
v___y_3002_ = v___x_3052_;
v___y_3003_ = v___y_3037_;
v___y_3004_ = v___y_3038_;
v___y_3005_ = v___y_3039_;
v___y_3006_ = v___y_3040_;
v___y_3007_ = v___y_3041_;
v___y_3008_ = v___y_3042_;
v___y_3009_ = v___y_3043_;
v___y_3010_ = v___y_3044_;
v___y_3011_ = v___y_3045_;
v___y_3012_ = v___y_3046_;
v___y_3013_ = v___y_3047_;
v___y_3014_ = v___y_3048_;
v___y_3015_ = v___y_3049_;
v___y_3016_ = v___x_3058_;
goto v___jp_2994_;
}
}
v___jp_3059_:
{
lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; 
lean_inc_ref_n(v___y_3078_, 2);
v___x_3082_ = l_Array_append___redArg(v___y_3078_, v___y_3081_);
lean_dec_ref(v___y_3081_);
lean_inc_n(v___y_3066_, 2);
lean_inc_n(v___y_3073_, 2);
v___x_3083_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3083_, 0, v___y_3073_);
lean_ctor_set(v___x_3083_, 1, v___y_3066_);
lean_ctor_set(v___x_3083_, 2, v___x_3082_);
v___x_3084_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3084_, 0, v___y_3073_);
lean_ctor_set(v___x_3084_, 1, v___y_3066_);
lean_ctor_set(v___x_3084_, 2, v___y_3078_);
lean_inc(v___y_3067_);
v___x_3085_ = l_Lean_Syntax_node5(v___y_3073_, v___y_3079_, v___y_3071_, v___y_3067_, v___y_3068_, v___x_3083_, v___x_3084_);
v___y_2859_ = v___y_3067_;
v___y_2860_ = v___y_3070_;
v___y_2861_ = v___y_3061_;
v___y_2862_ = v___y_3074_;
v___y_2863_ = v___y_3075_;
v___y_2864_ = v___y_3064_;
v___y_2865_ = v___y_3080_;
v_stxForExecution_2866_ = v___x_3085_;
v___y_2867_ = v___y_3069_;
v___y_2868_ = v___y_3065_;
v___y_2869_ = v___y_3076_;
v___y_2870_ = v___y_3062_;
v___y_2871_ = v___y_3063_;
v___y_2872_ = v___y_3072_;
v___y_2873_ = v___y_3077_;
v___y_2874_ = v___y_3060_;
goto v___jp_2858_;
}
v___jp_3086_:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; 
lean_inc_ref(v___y_3105_);
v___x_3109_ = l_Array_append___redArg(v___y_3105_, v___y_3108_);
lean_dec_ref(v___y_3108_);
lean_inc(v___y_3094_);
lean_inc(v___y_3100_);
v___x_3110_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3110_, 0, v___y_3100_);
lean_ctor_set(v___x_3110_, 1, v___y_3094_);
lean_ctor_set(v___x_3110_, 2, v___x_3109_);
if (lean_obj_tag(v___y_3101_) == 1)
{
lean_object* v_val_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; 
v_val_3111_ = lean_ctor_get(v___y_3101_, 0);
v___x_3112_ = l_Lean_SourceInfo_fromRef(v_val_3111_, v___y_3088_);
v___x_3113_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8));
v___x_3114_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3114_, 0, v___x_3112_);
lean_ctor_set(v___x_3114_, 1, v___x_3113_);
v___x_3115_ = l_Array_mkArray1___redArg(v___x_3114_);
v___y_3060_ = v___y_3087_;
v___y_3061_ = v___y_3089_;
v___y_3062_ = v___y_3090_;
v___y_3063_ = v___y_3091_;
v___y_3064_ = v___y_3092_;
v___y_3065_ = v___y_3093_;
v___y_3066_ = v___y_3094_;
v___y_3067_ = v___y_3095_;
v___y_3068_ = v___x_3110_;
v___y_3069_ = v___y_3096_;
v___y_3070_ = v___y_3098_;
v___y_3071_ = v___y_3097_;
v___y_3072_ = v___y_3099_;
v___y_3073_ = v___y_3100_;
v___y_3074_ = v___y_3101_;
v___y_3075_ = v___y_3102_;
v___y_3076_ = v___y_3103_;
v___y_3077_ = v___y_3104_;
v___y_3078_ = v___y_3105_;
v___y_3079_ = v___y_3106_;
v___y_3080_ = v___y_3107_;
v___y_3081_ = v___x_3115_;
goto v___jp_3059_;
}
else
{
lean_object* v___x_3116_; 
v___x_3116_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_3060_ = v___y_3087_;
v___y_3061_ = v___y_3089_;
v___y_3062_ = v___y_3090_;
v___y_3063_ = v___y_3091_;
v___y_3064_ = v___y_3092_;
v___y_3065_ = v___y_3093_;
v___y_3066_ = v___y_3094_;
v___y_3067_ = v___y_3095_;
v___y_3068_ = v___x_3110_;
v___y_3069_ = v___y_3096_;
v___y_3070_ = v___y_3098_;
v___y_3071_ = v___y_3097_;
v___y_3072_ = v___y_3099_;
v___y_3073_ = v___y_3100_;
v___y_3074_ = v___y_3101_;
v___y_3075_ = v___y_3102_;
v___y_3076_ = v___y_3103_;
v___y_3077_ = v___y_3104_;
v___y_3078_ = v___y_3105_;
v___y_3079_ = v___y_3106_;
v___y_3080_ = v___y_3107_;
v___y_3081_ = v___x_3116_;
goto v___jp_3059_;
}
}
v___jp_3117_:
{
lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; 
lean_inc_ref_n(v___y_3131_, 2);
v___x_3140_ = l_Array_append___redArg(v___y_3131_, v___y_3139_);
lean_dec_ref(v___y_3139_);
lean_inc_n(v___y_3121_, 2);
lean_inc_n(v___y_3124_, 2);
v___x_3141_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3141_, 0, v___y_3124_);
lean_ctor_set(v___x_3141_, 1, v___y_3121_);
lean_ctor_set(v___x_3141_, 2, v___x_3140_);
v___x_3142_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3142_, 0, v___y_3124_);
lean_ctor_set(v___x_3142_, 1, v___y_3121_);
lean_ctor_set(v___x_3142_, 2, v___y_3131_);
lean_inc(v___y_3127_);
v___x_3143_ = l_Lean_Syntax_node5(v___y_3124_, v___y_3119_, v___y_3138_, v___y_3127_, v___y_3130_, v___x_3141_, v___x_3142_);
v___y_2859_ = v___y_3127_;
v___y_2860_ = v___y_3129_;
v___y_2861_ = v___y_3120_;
v___y_2862_ = v___y_3133_;
v___y_2863_ = v___y_3134_;
v___y_2864_ = v___y_3125_;
v___y_2865_ = v___y_3137_;
v_stxForExecution_2866_ = v___x_3143_;
v___y_2867_ = v___y_3128_;
v___y_2868_ = v___y_3126_;
v___y_2869_ = v___y_3135_;
v___y_2870_ = v___y_3122_;
v___y_2871_ = v___y_3123_;
v___y_2872_ = v___y_3132_;
v___y_2873_ = v___y_3136_;
v___y_2874_ = v___y_3118_;
goto v___jp_2858_;
}
v___jp_3144_:
{
lean_object* v___x_3167_; lean_object* v___x_3168_; 
lean_inc_ref(v___y_3159_);
v___x_3167_ = l_Array_append___redArg(v___y_3159_, v___y_3166_);
lean_dec_ref(v___y_3166_);
lean_inc(v___y_3148_);
lean_inc(v___y_3152_);
v___x_3168_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3168_, 0, v___y_3152_);
lean_ctor_set(v___x_3168_, 1, v___y_3148_);
lean_ctor_set(v___x_3168_, 2, v___x_3167_);
if (lean_obj_tag(v___y_3160_) == 1)
{
lean_object* v_val_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; 
v_val_3169_ = lean_ctor_get(v___y_3160_, 0);
v___x_3170_ = l_Lean_SourceInfo_fromRef(v_val_3169_, v___y_3147_);
v___x_3171_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8));
v___x_3172_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3172_, 0, v___x_3170_);
lean_ctor_set(v___x_3172_, 1, v___x_3171_);
v___x_3173_ = l_Array_mkArray1___redArg(v___x_3172_);
v___y_3118_ = v___y_3145_;
v___y_3119_ = v___y_3146_;
v___y_3120_ = v___y_3149_;
v___y_3121_ = v___y_3148_;
v___y_3122_ = v___y_3150_;
v___y_3123_ = v___y_3151_;
v___y_3124_ = v___y_3152_;
v___y_3125_ = v___y_3153_;
v___y_3126_ = v___y_3154_;
v___y_3127_ = v___y_3155_;
v___y_3128_ = v___y_3156_;
v___y_3129_ = v___y_3157_;
v___y_3130_ = v___x_3168_;
v___y_3131_ = v___y_3159_;
v___y_3132_ = v___y_3158_;
v___y_3133_ = v___y_3160_;
v___y_3134_ = v___y_3161_;
v___y_3135_ = v___y_3162_;
v___y_3136_ = v___y_3163_;
v___y_3137_ = v___y_3165_;
v___y_3138_ = v___y_3164_;
v___y_3139_ = v___x_3173_;
goto v___jp_3117_;
}
else
{
lean_object* v___x_3174_; 
v___x_3174_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_3118_ = v___y_3145_;
v___y_3119_ = v___y_3146_;
v___y_3120_ = v___y_3149_;
v___y_3121_ = v___y_3148_;
v___y_3122_ = v___y_3150_;
v___y_3123_ = v___y_3151_;
v___y_3124_ = v___y_3152_;
v___y_3125_ = v___y_3153_;
v___y_3126_ = v___y_3154_;
v___y_3127_ = v___y_3155_;
v___y_3128_ = v___y_3156_;
v___y_3129_ = v___y_3157_;
v___y_3130_ = v___x_3168_;
v___y_3131_ = v___y_3159_;
v___y_3132_ = v___y_3158_;
v___y_3133_ = v___y_3160_;
v___y_3134_ = v___y_3161_;
v___y_3135_ = v___y_3162_;
v___y_3136_ = v___y_3163_;
v___y_3137_ = v___y_3165_;
v___y_3138_ = v___y_3164_;
v___y_3139_ = v___x_3174_;
goto v___jp_3117_;
}
}
v___jp_3175_:
{
lean_object* v___x_3191_; uint8_t v___x_3192_; 
v___x_3191_ = lean_array_get_size(v_argsArray_3182_);
v___x_3192_ = lean_nat_dec_eq(v___x_3191_, v___x_2475_);
if (v___x_3192_ == 0)
{
if (lean_obj_tag(v___y_3177_) == 0)
{
lean_object* v_ref_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; 
v_ref_3193_ = lean_ctor_get(v___y_3189_, 2);
v___x_3194_ = l_Lean_SourceInfo_fromRef(v_ref_3193_, v___x_3192_);
v___x_3195_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__6));
lean_inc_ref(v___x_2464_);
lean_inc_ref(v___x_2463_);
lean_inc_ref(v___x_2462_);
v___x_3196_ = l_Lean_Name_mkStr4(v___x_2462_, v___x_2463_, v___x_2464_, v___x_3195_);
v___x_3197_ = l_Lean_SourceInfo_fromRef(v_tk_2476_, v___y_3181_);
v___x_3198_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__7));
v___x_3199_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3197_);
lean_ctor_set(v___x_3199_, 1, v___x_3198_);
v___x_3200_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_3201_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
if (lean_obj_tag(v___y_3178_) == 1)
{
lean_object* v_val_3202_; lean_object* v___x_3203_; 
v_val_3202_ = lean_ctor_get(v___y_3178_, 0);
lean_inc(v_val_3202_);
v___x_3203_ = l_Array_mkArray1___redArg(v_val_3202_);
v___y_2965_ = v___y_3190_;
v___y_2966_ = v___y_3177_;
v___y_2967_ = v___y_3186_;
v___y_2968_ = v___y_3187_;
v___y_2969_ = v___x_3200_;
v___y_2970_ = v___y_3180_;
v___y_2971_ = v___y_3184_;
v___y_2972_ = v___x_3196_;
v___y_2973_ = v___y_3176_;
v___y_2974_ = v___y_3183_;
v___y_2975_ = v___y_3178_;
v___y_2976_ = v___x_3194_;
v___y_2977_ = v___y_3188_;
v___y_2978_ = v___x_3201_;
v___y_2979_ = v___x_3199_;
v___y_2980_ = v___y_3179_;
v___y_2981_ = v_argsArray_3182_;
v___y_2982_ = v___y_3185_;
v___y_2983_ = v___y_3189_;
v___y_2984_ = v___y_3181_;
v___y_2985_ = v___x_3203_;
goto v___jp_2964_;
}
else
{
lean_object* v___x_3204_; 
v___x_3204_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_2965_ = v___y_3190_;
v___y_2966_ = v___y_3177_;
v___y_2967_ = v___y_3186_;
v___y_2968_ = v___y_3187_;
v___y_2969_ = v___x_3200_;
v___y_2970_ = v___y_3180_;
v___y_2971_ = v___y_3184_;
v___y_2972_ = v___x_3196_;
v___y_2973_ = v___y_3176_;
v___y_2974_ = v___y_3183_;
v___y_2975_ = v___y_3178_;
v___y_2976_ = v___x_3194_;
v___y_2977_ = v___y_3188_;
v___y_2978_ = v___x_3201_;
v___y_2979_ = v___x_3199_;
v___y_2980_ = v___y_3179_;
v___y_2981_ = v_argsArray_3182_;
v___y_2982_ = v___y_3185_;
v___y_2983_ = v___y_3189_;
v___y_2984_ = v___y_3181_;
v___y_2985_ = v___x_3204_;
goto v___jp_2964_;
}
}
else
{
lean_object* v_ref_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; 
v_ref_3205_ = lean_ctor_get(v___y_3189_, 2);
v___x_3206_ = l_Lean_SourceInfo_fromRef(v_ref_3205_, v___x_3192_);
v___x_3207_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__8));
lean_inc_ref(v___x_2464_);
lean_inc_ref(v___x_2463_);
lean_inc_ref(v___x_2462_);
v___x_3208_ = l_Lean_Name_mkStr4(v___x_2462_, v___x_2463_, v___x_2464_, v___x_3207_);
v___x_3209_ = l_Lean_SourceInfo_fromRef(v_tk_2476_, v___y_3181_);
v___x_3210_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__9));
v___x_3211_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3211_, 0, v___x_3209_);
lean_ctor_set(v___x_3211_, 1, v___x_3210_);
v___x_3212_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_3213_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
if (lean_obj_tag(v___y_3178_) == 1)
{
lean_object* v_val_3214_; lean_object* v___x_3215_; 
v_val_3214_ = lean_ctor_get(v___y_3178_, 0);
lean_inc(v_val_3214_);
v___x_3215_ = l_Array_mkArray1___redArg(v_val_3214_);
v___y_3030_ = v___y_3190_;
v___y_3031_ = v___x_3206_;
v___y_3032_ = v___y_3177_;
v___y_3033_ = v___y_3186_;
v___y_3034_ = v___y_3187_;
v___y_3035_ = v___x_3212_;
v___y_3036_ = v___y_3180_;
v___y_3037_ = v___y_3184_;
v___y_3038_ = v___x_3213_;
v___y_3039_ = v___y_3176_;
v___y_3040_ = v___x_3208_;
v___y_3041_ = v___y_3183_;
v___y_3042_ = v___y_3178_;
v___y_3043_ = v___y_3188_;
v___y_3044_ = v___y_3179_;
v___y_3045_ = v_argsArray_3182_;
v___y_3046_ = v___y_3185_;
v___y_3047_ = v___y_3189_;
v___y_3048_ = v___x_3211_;
v___y_3049_ = v___y_3181_;
v___y_3050_ = v___x_3215_;
goto v___jp_3029_;
}
else
{
lean_object* v___x_3216_; 
v___x_3216_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_3030_ = v___y_3190_;
v___y_3031_ = v___x_3206_;
v___y_3032_ = v___y_3177_;
v___y_3033_ = v___y_3186_;
v___y_3034_ = v___y_3187_;
v___y_3035_ = v___x_3212_;
v___y_3036_ = v___y_3180_;
v___y_3037_ = v___y_3184_;
v___y_3038_ = v___x_3213_;
v___y_3039_ = v___y_3176_;
v___y_3040_ = v___x_3208_;
v___y_3041_ = v___y_3183_;
v___y_3042_ = v___y_3178_;
v___y_3043_ = v___y_3188_;
v___y_3044_ = v___y_3179_;
v___y_3045_ = v_argsArray_3182_;
v___y_3046_ = v___y_3185_;
v___y_3047_ = v___y_3189_;
v___y_3048_ = v___x_3211_;
v___y_3049_ = v___y_3181_;
v___y_3050_ = v___x_3216_;
goto v___jp_3029_;
}
}
}
else
{
if (lean_obj_tag(v___y_3177_) == 0)
{
lean_object* v_ref_3217_; uint8_t v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; 
v_ref_3217_ = lean_ctor_get(v___y_3189_, 2);
v___x_3218_ = 0;
v___x_3219_ = l_Lean_SourceInfo_fromRef(v_ref_3217_, v___x_3218_);
v___x_3220_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__6));
lean_inc_ref(v___x_2464_);
lean_inc_ref(v___x_2463_);
lean_inc_ref(v___x_2462_);
v___x_3221_ = l_Lean_Name_mkStr4(v___x_2462_, v___x_2463_, v___x_2464_, v___x_3220_);
v___x_3222_ = l_Lean_SourceInfo_fromRef(v_tk_2476_, v___x_3192_);
v___x_3223_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__7));
v___x_3224_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3224_, 0, v___x_3222_);
lean_ctor_set(v___x_3224_, 1, v___x_3223_);
v___x_3225_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_3226_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
if (lean_obj_tag(v___y_3178_) == 1)
{
lean_object* v_val_3227_; lean_object* v___x_3228_; 
v_val_3227_ = lean_ctor_get(v___y_3178_, 0);
lean_inc(v_val_3227_);
v___x_3228_ = l_Array_mkArray1___redArg(v_val_3227_);
v___y_3087_ = v___y_3190_;
v___y_3088_ = v___x_3192_;
v___y_3089_ = v___y_3177_;
v___y_3090_ = v___y_3186_;
v___y_3091_ = v___y_3187_;
v___y_3092_ = v___y_3180_;
v___y_3093_ = v___y_3184_;
v___y_3094_ = v___x_3225_;
v___y_3095_ = v___y_3176_;
v___y_3096_ = v___y_3183_;
v___y_3097_ = v___x_3224_;
v___y_3098_ = v___y_3178_;
v___y_3099_ = v___y_3188_;
v___y_3100_ = v___x_3219_;
v___y_3101_ = v___y_3179_;
v___y_3102_ = v_argsArray_3182_;
v___y_3103_ = v___y_3185_;
v___y_3104_ = v___y_3189_;
v___y_3105_ = v___x_3226_;
v___y_3106_ = v___x_3221_;
v___y_3107_ = v___y_3181_;
v___y_3108_ = v___x_3228_;
goto v___jp_3086_;
}
else
{
lean_object* v___x_3229_; 
v___x_3229_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_3087_ = v___y_3190_;
v___y_3088_ = v___x_3192_;
v___y_3089_ = v___y_3177_;
v___y_3090_ = v___y_3186_;
v___y_3091_ = v___y_3187_;
v___y_3092_ = v___y_3180_;
v___y_3093_ = v___y_3184_;
v___y_3094_ = v___x_3225_;
v___y_3095_ = v___y_3176_;
v___y_3096_ = v___y_3183_;
v___y_3097_ = v___x_3224_;
v___y_3098_ = v___y_3178_;
v___y_3099_ = v___y_3188_;
v___y_3100_ = v___x_3219_;
v___y_3101_ = v___y_3179_;
v___y_3102_ = v_argsArray_3182_;
v___y_3103_ = v___y_3185_;
v___y_3104_ = v___y_3189_;
v___y_3105_ = v___x_3226_;
v___y_3106_ = v___x_3221_;
v___y_3107_ = v___y_3181_;
v___y_3108_ = v___x_3229_;
goto v___jp_3086_;
}
}
else
{
lean_object* v_ref_3230_; uint8_t v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; 
v_ref_3230_ = lean_ctor_get(v___y_3189_, 2);
v___x_3231_ = 0;
v___x_3232_ = l_Lean_SourceInfo_fromRef(v_ref_3230_, v___x_3231_);
v___x_3233_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__8));
lean_inc_ref(v___x_2464_);
lean_inc_ref(v___x_2463_);
lean_inc_ref(v___x_2462_);
v___x_3234_ = l_Lean_Name_mkStr4(v___x_2462_, v___x_2463_, v___x_2464_, v___x_3233_);
v___x_3235_ = l_Lean_SourceInfo_fromRef(v_tk_2476_, v___x_3192_);
v___x_3236_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__9));
v___x_3237_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3237_, 0, v___x_3235_);
lean_ctor_set(v___x_3237_, 1, v___x_3236_);
v___x_3238_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_3239_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
if (lean_obj_tag(v___y_3178_) == 1)
{
lean_object* v_val_3240_; lean_object* v___x_3241_; 
v_val_3240_ = lean_ctor_get(v___y_3178_, 0);
lean_inc(v_val_3240_);
v___x_3241_ = l_Array_mkArray1___redArg(v_val_3240_);
v___y_3145_ = v___y_3190_;
v___y_3146_ = v___x_3234_;
v___y_3147_ = v___x_3192_;
v___y_3148_ = v___x_3238_;
v___y_3149_ = v___y_3177_;
v___y_3150_ = v___y_3186_;
v___y_3151_ = v___y_3187_;
v___y_3152_ = v___x_3232_;
v___y_3153_ = v___y_3180_;
v___y_3154_ = v___y_3184_;
v___y_3155_ = v___y_3176_;
v___y_3156_ = v___y_3183_;
v___y_3157_ = v___y_3178_;
v___y_3158_ = v___y_3188_;
v___y_3159_ = v___x_3239_;
v___y_3160_ = v___y_3179_;
v___y_3161_ = v_argsArray_3182_;
v___y_3162_ = v___y_3185_;
v___y_3163_ = v___y_3189_;
v___y_3164_ = v___x_3237_;
v___y_3165_ = v___y_3181_;
v___y_3166_ = v___x_3241_;
goto v___jp_3144_;
}
else
{
lean_object* v___x_3242_; 
v___x_3242_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_3145_ = v___y_3190_;
v___y_3146_ = v___x_3234_;
v___y_3147_ = v___x_3192_;
v___y_3148_ = v___x_3238_;
v___y_3149_ = v___y_3177_;
v___y_3150_ = v___y_3186_;
v___y_3151_ = v___y_3187_;
v___y_3152_ = v___x_3232_;
v___y_3153_ = v___y_3180_;
v___y_3154_ = v___y_3184_;
v___y_3155_ = v___y_3176_;
v___y_3156_ = v___y_3183_;
v___y_3157_ = v___y_3178_;
v___y_3158_ = v___y_3188_;
v___y_3159_ = v___x_3239_;
v___y_3160_ = v___y_3179_;
v___y_3161_ = v_argsArray_3182_;
v___y_3162_ = v___y_3185_;
v___y_3163_ = v___y_3189_;
v___y_3164_ = v___x_3237_;
v___y_3165_ = v___y_3181_;
v___y_3166_ = v___x_3242_;
goto v___jp_3144_;
}
}
}
}
v___jp_3243_:
{
lean_object* v___x_3261_; 
v___x_3261_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_3244_, v___y_3257_, v___y_3248_, v___y_3255_, v___y_3254_);
if (lean_obj_tag(v___x_3261_) == 0)
{
lean_object* v_a_3262_; lean_object* v___x_3263_; 
v_a_3262_ = lean_ctor_get(v___x_3261_, 0);
lean_inc(v_a_3262_);
lean_dec_ref_known(v___x_3261_, 1);
v___x_3263_ = l_Lean_LibrarySuggestions_select(v_a_3262_, v___y_3260_, v___y_3257_, v___y_3248_, v___y_3255_, v___y_3254_);
if (lean_obj_tag(v___x_3263_) == 0)
{
lean_object* v_a_3264_; size_t v_sz_3265_; size_t v___x_3266_; lean_object* v___x_3267_; 
v_a_3264_ = lean_ctor_get(v___x_3263_, 0);
lean_inc(v_a_3264_);
lean_dec_ref_known(v___x_3263_, 1);
v_sz_3265_ = lean_array_size(v_a_3264_);
v___x_3266_ = ((size_t)0ULL);
v___x_3267_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__1(v___y_3247_, v_a_3264_, v_sz_3265_, v___x_3266_, v___y_3253_, v___y_3246_, v___y_3244_, v___y_3258_, v___y_3251_, v___y_3257_, v___y_3248_, v___y_3255_, v___y_3254_);
lean_dec(v_a_3264_);
if (lean_obj_tag(v___x_3267_) == 0)
{
lean_object* v_a_3268_; 
v_a_3268_ = lean_ctor_get(v___x_3267_, 0);
lean_inc(v_a_3268_);
lean_dec_ref_known(v___x_3267_, 1);
v___y_3176_ = v___y_3250_;
v___y_3177_ = v___y_3245_;
v___y_3178_ = v___y_3252_;
v___y_3179_ = v___y_3256_;
v___y_3180_ = v___y_3249_;
v___y_3181_ = v___y_3259_;
v_argsArray_3182_ = v_a_3268_;
v___y_3183_ = v___y_3246_;
v___y_3184_ = v___y_3244_;
v___y_3185_ = v___y_3258_;
v___y_3186_ = v___y_3251_;
v___y_3187_ = v___y_3257_;
v___y_3188_ = v___y_3248_;
v___y_3189_ = v___y_3255_;
v___y_3190_ = v___y_3254_;
goto v___jp_3175_;
}
else
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3276_; 
lean_dec(v___y_3256_);
lean_dec(v___y_3252_);
lean_dec(v___y_3250_);
lean_dec(v___y_3245_);
lean_dec(v_tk_2476_);
lean_dec_ref(v___x_2464_);
lean_dec_ref(v___x_2463_);
lean_dec_ref(v___x_2462_);
v_a_3269_ = lean_ctor_get(v___x_3267_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v___x_3267_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3271_ = v___x_3267_;
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_3267_);
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
v_reuseFailAlloc_3275_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_3277_; lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3284_; 
lean_dec(v___y_3256_);
lean_dec_ref(v___y_3253_);
lean_dec(v___y_3252_);
lean_dec(v___y_3250_);
lean_dec(v___y_3245_);
lean_dec(v_tk_2476_);
lean_dec_ref(v___x_2464_);
lean_dec_ref(v___x_2463_);
lean_dec_ref(v___x_2462_);
v_a_3277_ = lean_ctor_get(v___x_3263_, 0);
v_isSharedCheck_3284_ = !lean_is_exclusive(v___x_3263_);
if (v_isSharedCheck_3284_ == 0)
{
v___x_3279_ = v___x_3263_;
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_a_3277_);
lean_dec(v___x_3263_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3282_; 
if (v_isShared_3280_ == 0)
{
v___x_3282_ = v___x_3279_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v_a_3277_);
v___x_3282_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
return v___x_3282_;
}
}
}
}
else
{
lean_object* v_a_3285_; lean_object* v___x_3287_; uint8_t v_isShared_3288_; uint8_t v_isSharedCheck_3292_; 
lean_dec_ref(v___y_3260_);
lean_dec(v___y_3256_);
lean_dec_ref(v___y_3253_);
lean_dec(v___y_3252_);
lean_dec(v___y_3250_);
lean_dec(v___y_3245_);
lean_dec(v_tk_2476_);
lean_dec_ref(v___x_2464_);
lean_dec_ref(v___x_2463_);
lean_dec_ref(v___x_2462_);
v_a_3285_ = lean_ctor_get(v___x_3261_, 0);
v_isSharedCheck_3292_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3287_ = v___x_3261_;
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
else
{
lean_inc(v_a_3285_);
lean_dec(v___x_3261_);
v___x_3287_ = lean_box(0);
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
v_resetjp_3286_:
{
lean_object* v___x_3290_; 
if (v_isShared_3288_ == 0)
{
v___x_3290_ = v___x_3287_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v_a_3285_);
v___x_3290_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
return v___x_3290_;
}
}
}
}
v___jp_3293_:
{
lean_object* v_config_3310_; uint8_t v_suggestions_3311_; 
v_config_3310_ = lean_ctor_get(v___y_3302_, 0);
lean_inc_ref(v_config_3310_);
lean_dec_ref(v___y_3302_);
v_suggestions_3311_ = lean_ctor_get_uint8(v_config_3310_, sizeof(void*)*3 + 26);
if (v_suggestions_3311_ == 0)
{
lean_dec_ref(v_config_3310_);
v___y_3176_ = v___y_3299_;
v___y_3177_ = v___y_3295_;
v___y_3178_ = v___y_3301_;
v___y_3179_ = v___y_3305_;
v___y_3180_ = v___y_3298_;
v___y_3181_ = v___y_3308_;
v_argsArray_3182_ = v___y_3309_;
v___y_3183_ = v___y_3296_;
v___y_3184_ = v___y_3294_;
v___y_3185_ = v___y_3307_;
v___y_3186_ = v___y_3300_;
v___y_3187_ = v___y_3306_;
v___y_3188_ = v___y_3297_;
v___y_3189_ = v___y_3304_;
v___y_3190_ = v___y_3303_;
goto v___jp_3175_;
}
else
{
lean_object* v_maxSuggestions_3312_; lean_object* v___x_3313_; lean_object* v___f_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; 
v_maxSuggestions_3312_ = lean_ctor_get(v_config_3310_, 2);
lean_inc(v_maxSuggestions_3312_);
lean_dec_ref(v_config_3310_);
v___x_3313_ = lean_box(v_suggestions_3311_);
v___f_3314_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__1___boxed), 7, 1);
lean_closure_set(v___f_3314_, 0, v___x_3313_);
v___x_3315_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__10));
v___x_3316_ = lean_box(0);
if (lean_obj_tag(v_maxSuggestions_3312_) == 0)
{
lean_object* v___x_3317_; lean_object* v___x_3318_; 
v___x_3317_ = lean_unsigned_to_nat(100u);
v___x_3318_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3317_);
lean_ctor_set(v___x_3318_, 1, v___x_3315_);
lean_ctor_set(v___x_3318_, 2, v___f_3314_);
lean_ctor_set(v___x_3318_, 3, v___x_3316_);
v___y_3244_ = v___y_3294_;
v___y_3245_ = v___y_3295_;
v___y_3246_ = v___y_3296_;
v___y_3247_ = v_suggestions_3311_;
v___y_3248_ = v___y_3297_;
v___y_3249_ = v___y_3298_;
v___y_3250_ = v___y_3299_;
v___y_3251_ = v___y_3300_;
v___y_3252_ = v___y_3301_;
v___y_3253_ = v___y_3309_;
v___y_3254_ = v___y_3303_;
v___y_3255_ = v___y_3304_;
v___y_3256_ = v___y_3305_;
v___y_3257_ = v___y_3306_;
v___y_3258_ = v___y_3307_;
v___y_3259_ = v___y_3308_;
v___y_3260_ = v___x_3318_;
goto v___jp_3243_;
}
else
{
lean_object* v_val_3319_; lean_object* v___x_3320_; 
v_val_3319_ = lean_ctor_get(v_maxSuggestions_3312_, 0);
lean_inc(v_val_3319_);
lean_dec_ref_known(v_maxSuggestions_3312_, 1);
v___x_3320_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3320_, 0, v_val_3319_);
lean_ctor_set(v___x_3320_, 1, v___x_3315_);
lean_ctor_set(v___x_3320_, 2, v___f_3314_);
lean_ctor_set(v___x_3320_, 3, v___x_3316_);
v___y_3244_ = v___y_3294_;
v___y_3245_ = v___y_3295_;
v___y_3246_ = v___y_3296_;
v___y_3247_ = v_suggestions_3311_;
v___y_3248_ = v___y_3297_;
v___y_3249_ = v___y_3298_;
v___y_3250_ = v___y_3299_;
v___y_3251_ = v___y_3300_;
v___y_3252_ = v___y_3301_;
v___y_3253_ = v___y_3309_;
v___y_3254_ = v___y_3303_;
v___y_3255_ = v___y_3304_;
v___y_3256_ = v___y_3305_;
v___y_3257_ = v___y_3306_;
v___y_3258_ = v___y_3307_;
v___y_3259_ = v___y_3308_;
v___y_3260_ = v___x_3320_;
goto v___jp_3243_;
}
}
}
v___jp_3321_:
{
uint8_t v___x_3336_; lean_object* v___x_3337_; 
v___x_3336_ = 1;
lean_inc(v___y_3327_);
v___x_3337_ = l_Lean_Elab_Tactic_elabSimpConfig___redArg(v___y_3327_, v___x_3336_, v___y_3324_, v___y_3330_, v___y_3329_);
if (lean_obj_tag(v___x_3337_) == 0)
{
if (lean_obj_tag(v___y_3325_) == 1)
{
lean_object* v_a_3338_; lean_object* v_val_3339_; lean_object* v___x_3340_; 
v_a_3338_ = lean_ctor_get(v___x_3337_, 0);
lean_inc(v_a_3338_);
lean_dec_ref_known(v___x_3337_, 1);
v_val_3339_ = lean_ctor_get(v___y_3325_, 0);
lean_inc(v_val_3339_);
lean_dec_ref_known(v___y_3325_, 1);
v___x_3340_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_val_3339_);
lean_dec(v_val_3339_);
v___y_3294_ = v___y_3322_;
v___y_3295_ = v___y_3323_;
v___y_3296_ = v___y_3324_;
v___y_3297_ = v___y_3326_;
v___y_3298_ = v___x_3336_;
v___y_3299_ = v___y_3327_;
v___y_3300_ = v___y_3328_;
v___y_3301_ = v___y_3335_;
v___y_3302_ = v_a_3338_;
v___y_3303_ = v___y_3329_;
v___y_3304_ = v___y_3330_;
v___y_3305_ = v___y_3331_;
v___y_3306_ = v___y_3332_;
v___y_3307_ = v___y_3333_;
v___y_3308_ = v___y_3334_;
v___y_3309_ = v___x_3340_;
goto v___jp_3293_;
}
else
{
lean_object* v_a_3341_; lean_object* v___x_3342_; 
lean_dec(v___y_3325_);
v_a_3341_ = lean_ctor_get(v___x_3337_, 0);
lean_inc(v_a_3341_);
lean_dec_ref_known(v___x_3337_, 1);
v___x_3342_ = ((lean_object*)(l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___redArg___closed__0));
v___y_3294_ = v___y_3322_;
v___y_3295_ = v___y_3323_;
v___y_3296_ = v___y_3324_;
v___y_3297_ = v___y_3326_;
v___y_3298_ = v___x_3336_;
v___y_3299_ = v___y_3327_;
v___y_3300_ = v___y_3328_;
v___y_3301_ = v___y_3335_;
v___y_3302_ = v_a_3341_;
v___y_3303_ = v___y_3329_;
v___y_3304_ = v___y_3330_;
v___y_3305_ = v___y_3331_;
v___y_3306_ = v___y_3332_;
v___y_3307_ = v___y_3333_;
v___y_3308_ = v___y_3334_;
v___y_3309_ = v___x_3342_;
goto v___jp_3293_;
}
}
else
{
lean_object* v_a_3343_; lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3350_; 
lean_dec(v___y_3335_);
lean_dec(v___y_3331_);
lean_dec(v___y_3327_);
lean_dec(v___y_3325_);
lean_dec(v___y_3323_);
lean_dec(v_tk_2476_);
lean_dec_ref(v___x_2464_);
lean_dec_ref(v___x_2463_);
lean_dec_ref(v___x_2462_);
v_a_3343_ = lean_ctor_get(v___x_3337_, 0);
v_isSharedCheck_3350_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3350_ == 0)
{
v___x_3345_ = v___x_3337_;
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
else
{
lean_inc(v_a_3343_);
lean_dec(v___x_3337_);
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
v_reuseFailAlloc_3349_ = lean_alloc_ctor(1, 1, 0);
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
}
v___jp_3351_:
{
lean_object* v___x_3366_; 
v___x_3366_ = l_Lean_Syntax_getOptional_x3f(v___y_3353_);
lean_dec(v___y_3353_);
if (lean_obj_tag(v___x_3366_) == 0)
{
lean_object* v___x_3367_; 
v___x_3367_ = lean_box(0);
v___y_3322_ = v___y_3359_;
v___y_3323_ = v___y_3354_;
v___y_3324_ = v___y_3358_;
v___y_3325_ = v_args_3357_;
v___y_3326_ = v___y_3363_;
v___y_3327_ = v___y_3352_;
v___y_3328_ = v___y_3361_;
v___y_3329_ = v___y_3365_;
v___y_3330_ = v___y_3364_;
v___y_3331_ = v___y_3355_;
v___y_3332_ = v___y_3362_;
v___y_3333_ = v___y_3360_;
v___y_3334_ = v___y_3356_;
v___y_3335_ = v___x_3367_;
goto v___jp_3321_;
}
else
{
lean_object* v_val_3368_; lean_object* v___x_3370_; uint8_t v_isShared_3371_; uint8_t v_isSharedCheck_3375_; 
v_val_3368_ = lean_ctor_get(v___x_3366_, 0);
v_isSharedCheck_3375_ = !lean_is_exclusive(v___x_3366_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3370_ = v___x_3366_;
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
else
{
lean_inc(v_val_3368_);
lean_dec(v___x_3366_);
v___x_3370_ = lean_box(0);
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
v_resetjp_3369_:
{
lean_object* v___x_3373_; 
if (v_isShared_3371_ == 0)
{
v___x_3373_ = v___x_3370_;
goto v_reusejp_3372_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v_val_3368_);
v___x_3373_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3372_;
}
v_reusejp_3372_:
{
v___y_3322_ = v___y_3359_;
v___y_3323_ = v___y_3354_;
v___y_3324_ = v___y_3358_;
v___y_3325_ = v_args_3357_;
v___y_3326_ = v___y_3363_;
v___y_3327_ = v___y_3352_;
v___y_3328_ = v___y_3361_;
v___y_3329_ = v___y_3365_;
v___y_3330_ = v___y_3364_;
v___y_3331_ = v___y_3355_;
v___y_3332_ = v___y_3362_;
v___y_3333_ = v___y_3360_;
v___y_3334_ = v___y_3356_;
v___y_3335_ = v___x_3373_;
goto v___jp_3321_;
}
}
}
}
v___jp_3377_:
{
lean_object* v___x_3392_; lean_object* v___x_3393_; uint8_t v___x_3394_; 
v___x_3392_ = lean_unsigned_to_nat(3u);
v___x_3393_ = l_Lean_Syntax_getArg(v___y_3378_, v___x_3392_);
lean_dec(v___y_3378_);
v___x_3394_ = l_Lean_Syntax_isNone(v___x_3393_);
if (v___x_3394_ == 0)
{
uint8_t v___x_3395_; 
lean_inc(v___x_3393_);
v___x_3395_ = l_Lean_Syntax_matchesNull(v___x_3393_, v___x_3376_);
if (v___x_3395_ == 0)
{
lean_object* v___x_3396_; 
lean_dec(v___x_3393_);
lean_dec(v_o_3383_);
lean_dec(v___y_3381_);
lean_dec(v___y_3380_);
lean_dec(v___y_3379_);
lean_dec(v_tk_2476_);
lean_dec_ref(v___x_2464_);
lean_dec_ref(v___x_2463_);
lean_dec_ref(v___x_2462_);
v___x_3396_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_3396_;
}
else
{
lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; uint8_t v___x_3400_; 
v___x_3397_ = l_Lean_Syntax_getArg(v___x_3393_, v___x_2475_);
lean_dec(v___x_3393_);
v___x_3398_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__11));
lean_inc_ref(v___x_2464_);
lean_inc_ref(v___x_2463_);
lean_inc_ref(v___x_2462_);
v___x_3399_ = l_Lean_Name_mkStr4(v___x_2462_, v___x_2463_, v___x_2464_, v___x_3398_);
lean_inc(v___x_3397_);
v___x_3400_ = l_Lean_Syntax_isOfKind(v___x_3397_, v___x_3399_);
lean_dec(v___x_3399_);
if (v___x_3400_ == 0)
{
lean_object* v___x_3401_; 
lean_dec(v___x_3397_);
lean_dec(v_o_3383_);
lean_dec(v___y_3381_);
lean_dec(v___y_3380_);
lean_dec(v___y_3379_);
lean_dec(v_tk_2476_);
lean_dec_ref(v___x_2464_);
lean_dec_ref(v___x_2463_);
lean_dec_ref(v___x_2462_);
v___x_3401_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_3401_;
}
else
{
lean_object* v___x_3402_; lean_object* v_args_3403_; lean_object* v___x_3404_; 
v___x_3402_ = l_Lean_Syntax_getArg(v___x_3397_, v___x_3376_);
lean_dec(v___x_3397_);
v_args_3403_ = l_Lean_Syntax_getArgs(v___x_3402_);
lean_dec(v___x_3402_);
v___x_3404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3404_, 0, v_args_3403_);
v___y_3352_ = v___y_3379_;
v___y_3353_ = v___y_3380_;
v___y_3354_ = v___y_3381_;
v___y_3355_ = v_o_3383_;
v___y_3356_ = v___y_3382_;
v_args_3357_ = v___x_3404_;
v___y_3358_ = v___y_3384_;
v___y_3359_ = v___y_3385_;
v___y_3360_ = v___y_3386_;
v___y_3361_ = v___y_3387_;
v___y_3362_ = v___y_3388_;
v___y_3363_ = v___y_3389_;
v___y_3364_ = v___y_3390_;
v___y_3365_ = v___y_3391_;
goto v___jp_3351_;
}
}
}
else
{
lean_object* v___x_3405_; 
lean_dec(v___x_3393_);
v___x_3405_ = lean_box(0);
v___y_3352_ = v___y_3379_;
v___y_3353_ = v___y_3380_;
v___y_3354_ = v___y_3381_;
v___y_3355_ = v_o_3383_;
v___y_3356_ = v___y_3382_;
v_args_3357_ = v___x_3405_;
v___y_3358_ = v___y_3384_;
v___y_3359_ = v___y_3385_;
v___y_3360_ = v___y_3386_;
v___y_3361_ = v___y_3387_;
v___y_3362_ = v___y_3388_;
v___y_3363_ = v___y_3389_;
v___y_3364_ = v___y_3390_;
v___y_3365_ = v___y_3391_;
goto v___jp_3351_;
}
}
v___jp_3406_:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; uint8_t v___x_3420_; 
v___x_3416_ = lean_unsigned_to_nat(2u);
v___x_3417_ = l_Lean_Syntax_getArg(v_stx_2461_, v___x_3416_);
v___x_3418_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__12));
lean_inc_ref(v___x_2464_);
lean_inc_ref(v___x_2463_);
lean_inc_ref(v___x_2462_);
v___x_3419_ = l_Lean_Name_mkStr4(v___x_2462_, v___x_2463_, v___x_2464_, v___x_3418_);
lean_inc(v___x_3417_);
v___x_3420_ = l_Lean_Syntax_isOfKind(v___x_3417_, v___x_3419_);
lean_dec(v___x_3419_);
if (v___x_3420_ == 0)
{
lean_object* v___x_3421_; 
lean_dec(v___x_3417_);
lean_dec(v_bang_3407_);
lean_dec(v_tk_2476_);
lean_dec_ref(v___x_2464_);
lean_dec_ref(v___x_2463_);
lean_dec_ref(v___x_2462_);
v___x_3421_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_3421_;
}
else
{
lean_object* v_cfg_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; uint8_t v___x_3425_; 
v_cfg_3422_ = l_Lean_Syntax_getArg(v___x_3417_, v___x_2475_);
v___x_3423_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__15));
lean_inc_ref(v___x_2464_);
lean_inc_ref(v___x_2463_);
lean_inc_ref(v___x_2462_);
v___x_3424_ = l_Lean_Name_mkStr4(v___x_2462_, v___x_2463_, v___x_2464_, v___x_3423_);
lean_inc(v_cfg_3422_);
v___x_3425_ = l_Lean_Syntax_isOfKind(v_cfg_3422_, v___x_3424_);
lean_dec(v___x_3424_);
if (v___x_3425_ == 0)
{
lean_object* v___x_3426_; 
lean_dec(v_cfg_3422_);
lean_dec(v___x_3417_);
lean_dec(v_bang_3407_);
lean_dec(v_tk_2476_);
lean_dec_ref(v___x_2464_);
lean_dec_ref(v___x_2463_);
lean_dec_ref(v___x_2462_);
v___x_3426_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_3426_;
}
else
{
lean_object* v___x_3427_; lean_object* v___x_3428_; uint8_t v___x_3429_; 
v___x_3427_ = l_Lean_Syntax_getArg(v___x_3417_, v___x_3376_);
v___x_3428_ = l_Lean_Syntax_getArg(v___x_3417_, v___x_3416_);
v___x_3429_ = l_Lean_Syntax_isNone(v___x_3428_);
if (v___x_3429_ == 0)
{
uint8_t v___x_3430_; 
lean_inc(v___x_3428_);
v___x_3430_ = l_Lean_Syntax_matchesNull(v___x_3428_, v___x_3376_);
if (v___x_3430_ == 0)
{
lean_object* v___x_3431_; 
lean_dec(v___x_3428_);
lean_dec(v___x_3427_);
lean_dec(v_cfg_3422_);
lean_dec(v___x_3417_);
lean_dec(v_bang_3407_);
lean_dec(v_tk_2476_);
lean_dec_ref(v___x_2464_);
lean_dec_ref(v___x_2463_);
lean_dec_ref(v___x_2462_);
v___x_3431_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_3431_;
}
else
{
lean_object* v_o_3432_; lean_object* v___x_3433_; 
v_o_3432_ = l_Lean_Syntax_getArg(v___x_3428_, v___x_2475_);
lean_dec(v___x_3428_);
v___x_3433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3433_, 0, v_o_3432_);
v___y_3378_ = v___x_3417_;
v___y_3379_ = v_cfg_3422_;
v___y_3380_ = v___x_3427_;
v___y_3381_ = v_bang_3407_;
v___y_3382_ = v___x_3425_;
v_o_3383_ = v___x_3433_;
v___y_3384_ = v___y_3408_;
v___y_3385_ = v___y_3409_;
v___y_3386_ = v___y_3410_;
v___y_3387_ = v___y_3411_;
v___y_3388_ = v___y_3412_;
v___y_3389_ = v___y_3413_;
v___y_3390_ = v___y_3414_;
v___y_3391_ = v___y_3415_;
goto v___jp_3377_;
}
}
else
{
lean_object* v___x_3434_; 
lean_dec(v___x_3428_);
v___x_3434_ = lean_box(0);
v___y_3378_ = v___x_3417_;
v___y_3379_ = v_cfg_3422_;
v___y_3380_ = v___x_3427_;
v___y_3381_ = v_bang_3407_;
v___y_3382_ = v___x_3425_;
v_o_3383_ = v___x_3434_;
v___y_3384_ = v___y_3408_;
v___y_3385_ = v___y_3409_;
v___y_3386_ = v___y_3410_;
v___y_3387_ = v___y_3411_;
v___y_3388_ = v___y_3412_;
v___y_3389_ = v___y_3413_;
v___y_3390_ = v___y_3414_;
v___y_3391_ = v___y_3415_;
goto v___jp_3377_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___boxed(lean_object* v___x_3442_, lean_object* v_stx_3443_, lean_object* v___x_3444_, lean_object* v___x_3445_, lean_object* v___x_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_){
_start:
{
uint8_t v___x_37506__boxed_3456_; lean_object* v_res_3457_; 
v___x_37506__boxed_3456_ = lean_unbox(v___x_3442_);
v_res_3457_ = l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1(v___x_37506__boxed_3456_, v_stx_3443_, v___x_3444_, v___x_3445_, v___x_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_);
lean_dec(v___y_3454_);
lean_dec_ref(v___y_3453_);
lean_dec(v___y_3452_);
lean_dec_ref(v___y_3451_);
lean_dec(v___y_3450_);
lean_dec_ref(v___y_3449_);
lean_dec(v___y_3448_);
lean_dec_ref(v___y_3447_);
lean_dec(v_stx_3443_);
return v_res_3457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace(lean_object* v_stx_3464_, lean_object* v_a_3465_, lean_object* v_a_3466_, lean_object* v_a_3467_, lean_object* v_a_3468_, lean_object* v_a_3469_, lean_object* v_a_3470_, lean_object* v_a_3471_, lean_object* v_a_3472_){
_start:
{
lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; uint8_t v___x_3478_; lean_object* v___x_3479_; lean_object* v___y_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; 
v___x_3474_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__0));
v___x_3475_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__1));
v___x_3476_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__2));
v___x_3477_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___closed__1));
lean_inc(v_stx_3464_);
v___x_3478_ = l_Lean_Syntax_isOfKind(v_stx_3464_, v___x_3477_);
v___x_3479_ = lean_box(v___x_3478_);
v___y_3480_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___boxed), 14, 5);
lean_closure_set(v___y_3480_, 0, v___x_3479_);
lean_closure_set(v___y_3480_, 1, v_stx_3464_);
lean_closure_set(v___y_3480_, 2, v___x_3474_);
lean_closure_set(v___y_3480_, 3, v___x_3475_);
lean_closure_set(v___y_3480_, 4, v___x_3476_);
v___x_3481_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withSimpDiagnostics___boxed), 10, 1);
lean_closure_set(v___x_3481_, 0, v___y_3480_);
v___x_3482_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___x_3481_, v_a_3465_, v_a_3466_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_, v_a_3472_);
return v___x_3482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSimpAllTrace___boxed(lean_object* v_stx_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_, lean_object* v_a_3487_, lean_object* v_a_3488_, lean_object* v_a_3489_, lean_object* v_a_3490_, lean_object* v_a_3491_, lean_object* v_a_3492_){
_start:
{
lean_object* v_res_3493_; 
v_res_3493_ = l_Lean_Elab_Tactic_evalSimpAllTrace(v_stx_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_);
lean_dec(v_a_3491_);
lean_dec_ref(v_a_3490_);
lean_dec(v_a_3489_);
lean_dec_ref(v_a_3488_);
lean_dec(v_a_3487_);
lean_dec_ref(v_a_3486_);
lean_dec(v_a_3485_);
lean_dec_ref(v_a_3484_);
return v_res_3493_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__0(lean_object* v___x_3494_, uint8_t v___x_3495_, lean_object* v_as_3496_, lean_object* v_as_x27_3497_, lean_object* v_b_3498_, lean_object* v_a_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_){
_start:
{
lean_object* v___x_3509_; 
v___x_3509_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__0___redArg(v___x_3494_, v___x_3495_, v_as_x27_3497_, v_b_3498_, v___y_3506_);
return v___x_3509_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__0___boxed(lean_object* v___x_3510_, lean_object* v___x_3511_, lean_object* v_as_3512_, lean_object* v_as_x27_3513_, lean_object* v_b_3514_, lean_object* v_a_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_){
_start:
{
uint8_t v___x_39505__boxed_3525_; lean_object* v_res_3526_; 
v___x_39505__boxed_3525_ = lean_unbox(v___x_3511_);
v_res_3526_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpAllTrace_spec__0(v___x_3510_, v___x_39505__boxed_3525_, v_as_3512_, v_as_x27_3513_, v_b_3514_, v_a_3515_, v___y_3516_, v___y_3517_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_);
lean_dec(v___y_3523_);
lean_dec_ref(v___y_3522_);
lean_dec(v___y_3521_);
lean_dec_ref(v___y_3520_);
lean_dec(v___y_3519_);
lean_dec_ref(v___y_3518_);
lean_dec(v___y_3517_);
lean_dec_ref(v___y_3516_);
lean_dec(v_as_x27_3513_);
lean_dec(v_as_3512_);
lean_dec(v___x_3510_);
return v_res_3526_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1(){
_start:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; 
v___x_3534_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3535_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___closed__1));
v___x_3536_ = ((lean_object*)(l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___closed__1));
v___x_3537_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSimpAllTrace___boxed), 10, 0);
v___x_3538_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3534_, v___x_3535_, v___x_3536_, v___x_3537_);
return v___x_3538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___boxed(lean_object* v_a_3539_){
_start:
{
lean_object* v_res_3540_; 
v_res_3540_ = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1();
return v_res_3540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3(){
_start:
{
lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; 
v___x_3566_ = ((lean_object*)(l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1___closed__1));
v___x_3567_ = ((lean_object*)(l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___closed__6));
v___x_3568_ = l_Lean_addBuiltinDeclarationRanges(v___x_3566_, v___x_3567_);
return v___x_3568_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3___boxed(lean_object* v_a_3569_){
_start:
{
lean_object* v_res_3570_; 
v_res_3570_ = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3();
return v_res_3570_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_dsimpLocation_x27_go___redArg(lean_object* v_ctx_3571_, lean_object* v_simprocs_3572_, lean_object* v_fvarIdsToSimp_3573_, uint8_t v_simplifyTarget_3574_, lean_object* v_a_3575_, lean_object* v_a_3576_, lean_object* v_a_3577_, lean_object* v_a_3578_, lean_object* v_a_3579_){
_start:
{
lean_object* v___x_3581_; 
v___x_3581_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_3575_, v_a_3576_, v_a_3577_, v_a_3578_, v_a_3579_);
if (lean_obj_tag(v___x_3581_) == 0)
{
lean_object* v_a_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
v_a_3582_ = lean_ctor_get(v___x_3581_, 0);
lean_inc(v_a_3582_);
lean_dec_ref_known(v___x_3581_, 1);
v___x_3583_ = lean_unsigned_to_nat(32u);
v___x_3584_ = lean_mk_empty_array_with_capacity(v___x_3583_);
lean_dec_ref(v___x_3584_);
v___x_3585_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__5, &l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__5_once, _init_l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__5);
v___x_3586_ = l_Lean_Meta_dsimpGoal(v_a_3582_, v_ctx_3571_, v_simprocs_3572_, v_simplifyTarget_3574_, v_fvarIdsToSimp_3573_, v___x_3585_, v_a_3576_, v_a_3577_, v_a_3578_, v_a_3579_);
if (lean_obj_tag(v___x_3586_) == 0)
{
lean_object* v_a_3587_; lean_object* v_fst_3588_; 
v_a_3587_ = lean_ctor_get(v___x_3586_, 0);
lean_inc(v_a_3587_);
lean_dec_ref_known(v___x_3586_, 1);
v_fst_3588_ = lean_ctor_get(v_a_3587_, 0);
if (lean_obj_tag(v_fst_3588_) == 0)
{
lean_object* v_snd_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; 
v_snd_3589_ = lean_ctor_get(v_a_3587_, 1);
lean_inc(v_snd_3589_);
lean_dec(v_a_3587_);
v___x_3590_ = lean_box(0);
v___x_3591_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_3590_, v_a_3575_, v_a_3576_, v_a_3577_, v_a_3578_, v_a_3579_);
if (lean_obj_tag(v___x_3591_) == 0)
{
lean_object* v___x_3593_; uint8_t v_isShared_3594_; uint8_t v_isSharedCheck_3598_; 
v_isSharedCheck_3598_ = !lean_is_exclusive(v___x_3591_);
if (v_isSharedCheck_3598_ == 0)
{
lean_object* v_unused_3599_; 
v_unused_3599_ = lean_ctor_get(v___x_3591_, 0);
lean_dec(v_unused_3599_);
v___x_3593_ = v___x_3591_;
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
else
{
lean_dec(v___x_3591_);
v___x_3593_ = lean_box(0);
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
v_resetjp_3592_:
{
lean_object* v___x_3596_; 
if (v_isShared_3594_ == 0)
{
lean_ctor_set(v___x_3593_, 0, v_snd_3589_);
v___x_3596_ = v___x_3593_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v_snd_3589_);
v___x_3596_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
return v___x_3596_;
}
}
}
else
{
lean_object* v_a_3600_; lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3607_; 
lean_dec(v_snd_3589_);
v_a_3600_ = lean_ctor_get(v___x_3591_, 0);
v_isSharedCheck_3607_ = !lean_is_exclusive(v___x_3591_);
if (v_isSharedCheck_3607_ == 0)
{
v___x_3602_ = v___x_3591_;
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
else
{
lean_inc(v_a_3600_);
lean_dec(v___x_3591_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
v_resetjp_3601_:
{
lean_object* v___x_3605_; 
if (v_isShared_3603_ == 0)
{
v___x_3605_ = v___x_3602_;
goto v_reusejp_3604_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v_a_3600_);
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
else
{
lean_object* v_snd_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3634_; 
lean_inc_ref(v_fst_3588_);
v_snd_3608_ = lean_ctor_get(v_a_3587_, 1);
v_isSharedCheck_3634_ = !lean_is_exclusive(v_a_3587_);
if (v_isSharedCheck_3634_ == 0)
{
lean_object* v_unused_3635_; 
v_unused_3635_ = lean_ctor_get(v_a_3587_, 0);
lean_dec(v_unused_3635_);
v___x_3610_ = v_a_3587_;
v_isShared_3611_ = v_isSharedCheck_3634_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_snd_3608_);
lean_dec(v_a_3587_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3634_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
lean_object* v_val_3612_; lean_object* v___x_3613_; lean_object* v___x_3615_; 
v_val_3612_ = lean_ctor_get(v_fst_3588_, 0);
lean_inc(v_val_3612_);
lean_dec_ref_known(v_fst_3588_, 1);
v___x_3613_ = lean_box(0);
if (v_isShared_3611_ == 0)
{
lean_ctor_set_tag(v___x_3610_, 1);
lean_ctor_set(v___x_3610_, 1, v___x_3613_);
lean_ctor_set(v___x_3610_, 0, v_val_3612_);
v___x_3615_ = v___x_3610_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_val_3612_);
lean_ctor_set(v_reuseFailAlloc_3633_, 1, v___x_3613_);
v___x_3615_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
lean_object* v___x_3616_; 
v___x_3616_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_3615_, v_a_3575_, v_a_3576_, v_a_3577_, v_a_3578_, v_a_3579_);
if (lean_obj_tag(v___x_3616_) == 0)
{
lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3623_; 
v_isSharedCheck_3623_ = !lean_is_exclusive(v___x_3616_);
if (v_isSharedCheck_3623_ == 0)
{
lean_object* v_unused_3624_; 
v_unused_3624_ = lean_ctor_get(v___x_3616_, 0);
lean_dec(v_unused_3624_);
v___x_3618_ = v___x_3616_;
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
else
{
lean_dec(v___x_3616_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3621_; 
if (v_isShared_3619_ == 0)
{
lean_ctor_set(v___x_3618_, 0, v_snd_3608_);
v___x_3621_ = v___x_3618_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3622_; 
v_reuseFailAlloc_3622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3622_, 0, v_snd_3608_);
v___x_3621_ = v_reuseFailAlloc_3622_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
return v___x_3621_;
}
}
}
else
{
lean_object* v_a_3625_; lean_object* v___x_3627_; uint8_t v_isShared_3628_; uint8_t v_isSharedCheck_3632_; 
lean_dec(v_snd_3608_);
v_a_3625_ = lean_ctor_get(v___x_3616_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3616_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3627_ = v___x_3616_;
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
else
{
lean_inc(v_a_3625_);
lean_dec(v___x_3616_);
v___x_3627_ = lean_box(0);
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
v_resetjp_3626_:
{
lean_object* v___x_3630_; 
if (v_isShared_3628_ == 0)
{
v___x_3630_ = v___x_3627_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v_a_3625_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
return v___x_3630_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3636_; lean_object* v___x_3638_; uint8_t v_isShared_3639_; uint8_t v_isSharedCheck_3643_; 
v_a_3636_ = lean_ctor_get(v___x_3586_, 0);
v_isSharedCheck_3643_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3643_ == 0)
{
v___x_3638_ = v___x_3586_;
v_isShared_3639_ = v_isSharedCheck_3643_;
goto v_resetjp_3637_;
}
else
{
lean_inc(v_a_3636_);
lean_dec(v___x_3586_);
v___x_3638_ = lean_box(0);
v_isShared_3639_ = v_isSharedCheck_3643_;
goto v_resetjp_3637_;
}
v_resetjp_3637_:
{
lean_object* v___x_3641_; 
if (v_isShared_3639_ == 0)
{
v___x_3641_ = v___x_3638_;
goto v_reusejp_3640_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v_a_3636_);
v___x_3641_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3640_;
}
v_reusejp_3640_:
{
return v___x_3641_;
}
}
}
}
else
{
lean_object* v_a_3644_; lean_object* v___x_3646_; uint8_t v_isShared_3647_; uint8_t v_isSharedCheck_3651_; 
lean_dec_ref(v_fvarIdsToSimp_3573_);
lean_dec_ref(v_simprocs_3572_);
lean_dec_ref(v_ctx_3571_);
v_a_3644_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3651_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3651_ == 0)
{
v___x_3646_ = v___x_3581_;
v_isShared_3647_ = v_isSharedCheck_3651_;
goto v_resetjp_3645_;
}
else
{
lean_inc(v_a_3644_);
lean_dec(v___x_3581_);
v___x_3646_ = lean_box(0);
v_isShared_3647_ = v_isSharedCheck_3651_;
goto v_resetjp_3645_;
}
v_resetjp_3645_:
{
lean_object* v___x_3649_; 
if (v_isShared_3647_ == 0)
{
v___x_3649_ = v___x_3646_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3650_; 
v_reuseFailAlloc_3650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3650_, 0, v_a_3644_);
v___x_3649_ = v_reuseFailAlloc_3650_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
return v___x_3649_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_dsimpLocation_x27_go___redArg___boxed(lean_object* v_ctx_3652_, lean_object* v_simprocs_3653_, lean_object* v_fvarIdsToSimp_3654_, lean_object* v_simplifyTarget_3655_, lean_object* v_a_3656_, lean_object* v_a_3657_, lean_object* v_a_3658_, lean_object* v_a_3659_, lean_object* v_a_3660_, lean_object* v_a_3661_){
_start:
{
uint8_t v_simplifyTarget_boxed_3662_; lean_object* v_res_3663_; 
v_simplifyTarget_boxed_3662_ = lean_unbox(v_simplifyTarget_3655_);
v_res_3663_ = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_dsimpLocation_x27_go___redArg(v_ctx_3652_, v_simprocs_3653_, v_fvarIdsToSimp_3654_, v_simplifyTarget_boxed_3662_, v_a_3656_, v_a_3657_, v_a_3658_, v_a_3659_, v_a_3660_);
lean_dec(v_a_3660_);
lean_dec_ref(v_a_3659_);
lean_dec(v_a_3658_);
lean_dec_ref(v_a_3657_);
lean_dec(v_a_3656_);
return v_res_3663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_dsimpLocation_x27_go(lean_object* v_ctx_3664_, lean_object* v_simprocs_3665_, lean_object* v_fvarIdsToSimp_3666_, uint8_t v_simplifyTarget_3667_, lean_object* v_a_3668_, lean_object* v_a_3669_, lean_object* v_a_3670_, lean_object* v_a_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_){
_start:
{
lean_object* v___x_3677_; 
v___x_3677_ = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_dsimpLocation_x27_go___redArg(v_ctx_3664_, v_simprocs_3665_, v_fvarIdsToSimp_3666_, v_simplifyTarget_3667_, v_a_3669_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_);
return v___x_3677_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_dsimpLocation_x27_go___boxed(lean_object* v_ctx_3678_, lean_object* v_simprocs_3679_, lean_object* v_fvarIdsToSimp_3680_, lean_object* v_simplifyTarget_3681_, lean_object* v_a_3682_, lean_object* v_a_3683_, lean_object* v_a_3684_, lean_object* v_a_3685_, lean_object* v_a_3686_, lean_object* v_a_3687_, lean_object* v_a_3688_, lean_object* v_a_3689_, lean_object* v_a_3690_){
_start:
{
uint8_t v_simplifyTarget_boxed_3691_; lean_object* v_res_3692_; 
v_simplifyTarget_boxed_3691_ = lean_unbox(v_simplifyTarget_3681_);
v_res_3692_ = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_dsimpLocation_x27_go(v_ctx_3678_, v_simprocs_3679_, v_fvarIdsToSimp_3680_, v_simplifyTarget_boxed_3691_, v_a_3682_, v_a_3683_, v_a_3684_, v_a_3685_, v_a_3686_, v_a_3687_, v_a_3688_, v_a_3689_);
lean_dec(v_a_3689_);
lean_dec_ref(v_a_3688_);
lean_dec(v_a_3687_);
lean_dec_ref(v_a_3686_);
lean_dec(v_a_3685_);
lean_dec_ref(v_a_3684_);
lean_dec(v_a_3683_);
lean_dec_ref(v_a_3682_);
return v_res_3692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_dsimpLocation_x27___lam__0(lean_object* v_ctx_3693_, lean_object* v_simprocs_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_){
_start:
{
lean_object* v___x_3704_; 
v___x_3704_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_3696_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
if (lean_obj_tag(v___x_3704_) == 0)
{
lean_object* v_a_3705_; lean_object* v___x_3706_; 
v_a_3705_ = lean_ctor_get(v___x_3704_, 0);
lean_inc(v_a_3705_);
lean_dec_ref_known(v___x_3704_, 1);
v___x_3706_ = l_Lean_MVarId_getNondepPropHyps(v_a_3705_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
if (lean_obj_tag(v___x_3706_) == 0)
{
lean_object* v_a_3707_; uint8_t v___x_3708_; lean_object* v___x_3709_; 
v_a_3707_ = lean_ctor_get(v___x_3706_, 0);
lean_inc(v_a_3707_);
lean_dec_ref_known(v___x_3706_, 1);
v___x_3708_ = 1;
v___x_3709_ = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_dsimpLocation_x27_go___redArg(v_ctx_3693_, v_simprocs_3694_, v_a_3707_, v___x_3708_, v___y_3696_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
return v___x_3709_;
}
else
{
lean_object* v_a_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3717_; 
lean_dec_ref(v_simprocs_3694_);
lean_dec_ref(v_ctx_3693_);
v_a_3710_ = lean_ctor_get(v___x_3706_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3706_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3712_ = v___x_3706_;
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_a_3710_);
lean_dec(v___x_3706_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v___x_3715_; 
if (v_isShared_3713_ == 0)
{
v___x_3715_ = v___x_3712_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v_a_3710_);
v___x_3715_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
return v___x_3715_;
}
}
}
}
else
{
lean_object* v_a_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3725_; 
lean_dec_ref(v_simprocs_3694_);
lean_dec_ref(v_ctx_3693_);
v_a_3718_ = lean_ctor_get(v___x_3704_, 0);
v_isSharedCheck_3725_ = !lean_is_exclusive(v___x_3704_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3720_ = v___x_3704_;
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_a_3718_);
lean_dec(v___x_3704_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3723_; 
if (v_isShared_3721_ == 0)
{
v___x_3723_ = v___x_3720_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_a_3718_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_dsimpLocation_x27___lam__0___boxed(lean_object* v_ctx_3726_, lean_object* v_simprocs_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_){
_start:
{
lean_object* v_res_3737_; 
v_res_3737_ = l_Lean_Elab_Tactic_dsimpLocation_x27___lam__0(v_ctx_3726_, v_simprocs_3727_, v___y_3728_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_, v___y_3733_, v___y_3734_, v___y_3735_);
lean_dec(v___y_3735_);
lean_dec_ref(v___y_3734_);
lean_dec(v___y_3733_);
lean_dec_ref(v___y_3732_);
lean_dec(v___y_3731_);
lean_dec_ref(v___y_3730_);
lean_dec(v___y_3729_);
lean_dec_ref(v___y_3728_);
return v_res_3737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_dsimpLocation_x27___lam__1(lean_object* v_hypotheses_3738_, lean_object* v_ctx_3739_, lean_object* v_simprocs_3740_, uint8_t v_type_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_){
_start:
{
lean_object* v___x_3751_; 
v___x_3751_ = l_Lean_Elab_Tactic_getFVarIds(v_hypotheses_3738_, v___y_3742_, v___y_3743_, v___y_3744_, v___y_3745_, v___y_3746_, v___y_3747_, v___y_3748_, v___y_3749_);
if (lean_obj_tag(v___x_3751_) == 0)
{
lean_object* v_a_3752_; lean_object* v___x_3753_; 
v_a_3752_ = lean_ctor_get(v___x_3751_, 0);
lean_inc(v_a_3752_);
lean_dec_ref_known(v___x_3751_, 1);
v___x_3753_ = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_dsimpLocation_x27_go___redArg(v_ctx_3739_, v_simprocs_3740_, v_a_3752_, v_type_3741_, v___y_3743_, v___y_3746_, v___y_3747_, v___y_3748_, v___y_3749_);
return v___x_3753_;
}
else
{
lean_object* v_a_3754_; lean_object* v___x_3756_; uint8_t v_isShared_3757_; uint8_t v_isSharedCheck_3761_; 
lean_dec_ref(v_simprocs_3740_);
lean_dec_ref(v_ctx_3739_);
v_a_3754_ = lean_ctor_get(v___x_3751_, 0);
v_isSharedCheck_3761_ = !lean_is_exclusive(v___x_3751_);
if (v_isSharedCheck_3761_ == 0)
{
v___x_3756_ = v___x_3751_;
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
else
{
lean_inc(v_a_3754_);
lean_dec(v___x_3751_);
v___x_3756_ = lean_box(0);
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
v_resetjp_3755_:
{
lean_object* v___x_3759_; 
if (v_isShared_3757_ == 0)
{
v___x_3759_ = v___x_3756_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v_a_3754_);
v___x_3759_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
return v___x_3759_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_dsimpLocation_x27___lam__1___boxed(lean_object* v_hypotheses_3762_, lean_object* v_ctx_3763_, lean_object* v_simprocs_3764_, lean_object* v_type_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_){
_start:
{
uint8_t v_type_555__boxed_3775_; lean_object* v_res_3776_; 
v_type_555__boxed_3775_ = lean_unbox(v_type_3765_);
v_res_3776_ = l_Lean_Elab_Tactic_dsimpLocation_x27___lam__1(v_hypotheses_3762_, v_ctx_3763_, v_simprocs_3764_, v_type_555__boxed_3775_, v___y_3766_, v___y_3767_, v___y_3768_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_, v___y_3773_);
lean_dec(v___y_3773_);
lean_dec_ref(v___y_3772_);
lean_dec(v___y_3771_);
lean_dec_ref(v___y_3770_);
lean_dec(v___y_3769_);
lean_dec_ref(v___y_3768_);
lean_dec(v___y_3767_);
lean_dec_ref(v___y_3766_);
return v_res_3776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_dsimpLocation_x27(lean_object* v_ctx_3777_, lean_object* v_simprocs_3778_, lean_object* v_loc_3779_, lean_object* v_a_3780_, lean_object* v_a_3781_, lean_object* v_a_3782_, lean_object* v_a_3783_, lean_object* v_a_3784_, lean_object* v_a_3785_, lean_object* v_a_3786_, lean_object* v_a_3787_){
_start:
{
if (lean_obj_tag(v_loc_3779_) == 0)
{
lean_object* v___f_3789_; lean_object* v___x_3790_; 
v___f_3789_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_dsimpLocation_x27___lam__0___boxed), 11, 2);
lean_closure_set(v___f_3789_, 0, v_ctx_3777_);
lean_closure_set(v___f_3789_, 1, v_simprocs_3778_);
v___x_3790_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_3789_, v_a_3780_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_, v_a_3787_);
return v___x_3790_;
}
else
{
lean_object* v_hypotheses_3791_; uint8_t v_type_3792_; lean_object* v___x_3793_; lean_object* v___f_3794_; lean_object* v___x_3795_; 
v_hypotheses_3791_ = lean_ctor_get(v_loc_3779_, 0);
lean_inc_ref(v_hypotheses_3791_);
v_type_3792_ = lean_ctor_get_uint8(v_loc_3779_, sizeof(void*)*1);
lean_dec_ref_known(v_loc_3779_, 1);
v___x_3793_ = lean_box(v_type_3792_);
v___f_3794_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_dsimpLocation_x27___lam__1___boxed), 13, 4);
lean_closure_set(v___f_3794_, 0, v_hypotheses_3791_);
lean_closure_set(v___f_3794_, 1, v_ctx_3777_);
lean_closure_set(v___f_3794_, 2, v_simprocs_3778_);
lean_closure_set(v___f_3794_, 3, v___x_3793_);
v___x_3795_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_3794_, v_a_3780_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_, v_a_3787_);
return v___x_3795_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_dsimpLocation_x27___boxed(lean_object* v_ctx_3796_, lean_object* v_simprocs_3797_, lean_object* v_loc_3798_, lean_object* v_a_3799_, lean_object* v_a_3800_, lean_object* v_a_3801_, lean_object* v_a_3802_, lean_object* v_a_3803_, lean_object* v_a_3804_, lean_object* v_a_3805_, lean_object* v_a_3806_, lean_object* v_a_3807_){
_start:
{
lean_object* v_res_3808_; 
v_res_3808_ = l_Lean_Elab_Tactic_dsimpLocation_x27(v_ctx_3796_, v_simprocs_3797_, v_loc_3798_, v_a_3799_, v_a_3800_, v_a_3801_, v_a_3802_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_);
lean_dec(v_a_3806_);
lean_dec_ref(v_a_3805_);
lean_dec(v_a_3804_);
lean_dec_ref(v_a_3803_);
lean_dec(v_a_3802_);
lean_dec_ref(v_a_3801_);
lean_dec(v_a_3800_);
lean_dec_ref(v_a_3799_);
return v_res_3808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalDSimpTrace___lam__0(uint8_t v___x_3813_, lean_object* v_stx_3814_, lean_object* v___x_3815_, lean_object* v___x_3816_, lean_object* v___x_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_){
_start:
{
if (v___x_3813_ == 0)
{
lean_object* v___x_3827_; 
lean_dec_ref(v___x_3817_);
lean_dec_ref(v___x_3816_);
lean_dec_ref(v___x_3815_);
v___x_3827_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_3827_;
}
else
{
lean_object* v___x_3828_; lean_object* v_tk_3829_; lean_object* v___y_3831_; lean_object* v___y_3832_; lean_object* v___y_3833_; lean_object* v___y_3834_; lean_object* v___y_3835_; lean_object* v___y_3836_; lean_object* v___y_3837_; lean_object* v___y_3838_; lean_object* v___y_3839_; lean_object* v___y_3840_; lean_object* v___y_3841_; lean_object* v___y_3842_; lean_object* v___y_3898_; uint8_t v___y_3899_; lean_object* v___y_3900_; lean_object* v___y_3901_; lean_object* v___y_3902_; lean_object* v___y_3903_; lean_object* v___y_3904_; lean_object* v___y_3905_; lean_object* v___y_3906_; lean_object* v___y_3907_; lean_object* v___y_3908_; lean_object* v___y_3909_; lean_object* v___y_3910_; lean_object* v___y_3916_; uint8_t v___y_3917_; lean_object* v___y_3918_; lean_object* v_stx_3919_; lean_object* v___y_3920_; lean_object* v___y_3921_; lean_object* v___y_3922_; lean_object* v___y_3923_; lean_object* v___y_3924_; lean_object* v___y_3925_; lean_object* v___y_3926_; lean_object* v___y_3927_; lean_object* v___y_3953_; lean_object* v___y_3954_; uint8_t v___y_3955_; lean_object* v___y_3956_; lean_object* v___y_3957_; lean_object* v___y_3958_; lean_object* v___y_3959_; lean_object* v___y_3960_; lean_object* v___y_3961_; lean_object* v___y_3962_; lean_object* v___y_3963_; lean_object* v___y_3964_; lean_object* v___y_3965_; lean_object* v___y_3966_; lean_object* v___y_3967_; lean_object* v___y_3968_; lean_object* v___y_3969_; lean_object* v___y_3970_; lean_object* v___y_3971_; lean_object* v___y_3972_; lean_object* v___y_3973_; lean_object* v___y_3978_; lean_object* v___y_3979_; uint8_t v___y_3980_; lean_object* v___y_3981_; lean_object* v___y_3982_; lean_object* v___y_3983_; lean_object* v___y_3984_; lean_object* v___y_3985_; lean_object* v___y_3986_; lean_object* v___y_3987_; lean_object* v___y_3988_; lean_object* v___y_3989_; lean_object* v___y_3990_; lean_object* v___y_3991_; lean_object* v___y_3992_; lean_object* v___y_3993_; lean_object* v___y_3994_; lean_object* v___y_3995_; lean_object* v___y_3996_; lean_object* v___y_3997_; lean_object* v___y_4005_; lean_object* v___y_4006_; uint8_t v___y_4007_; lean_object* v___y_4008_; lean_object* v___y_4009_; lean_object* v___y_4010_; lean_object* v___y_4011_; lean_object* v___y_4012_; lean_object* v___y_4013_; lean_object* v___y_4014_; lean_object* v___y_4015_; lean_object* v___y_4016_; lean_object* v___y_4017_; lean_object* v___y_4018_; lean_object* v___y_4019_; lean_object* v___y_4020_; lean_object* v___y_4021_; lean_object* v___y_4022_; lean_object* v___y_4023_; lean_object* v___y_4024_; lean_object* v___y_4037_; lean_object* v___y_4038_; uint8_t v___y_4039_; lean_object* v___y_4040_; lean_object* v___y_4041_; lean_object* v___y_4042_; lean_object* v___y_4043_; lean_object* v___y_4044_; lean_object* v___y_4045_; lean_object* v___y_4046_; lean_object* v___y_4047_; lean_object* v___y_4048_; lean_object* v___y_4049_; lean_object* v___y_4050_; lean_object* v___y_4051_; lean_object* v___y_4052_; lean_object* v___y_4053_; lean_object* v___y_4054_; lean_object* v___y_4055_; lean_object* v___y_4056_; lean_object* v___y_4057_; lean_object* v___y_4062_; lean_object* v___y_4063_; uint8_t v___y_4064_; lean_object* v___y_4065_; lean_object* v___y_4066_; lean_object* v___y_4067_; lean_object* v___y_4068_; lean_object* v___y_4069_; lean_object* v___y_4070_; lean_object* v___y_4071_; lean_object* v___y_4072_; lean_object* v___y_4073_; lean_object* v___y_4074_; lean_object* v___y_4075_; lean_object* v___y_4076_; lean_object* v___y_4077_; lean_object* v___y_4078_; lean_object* v___y_4079_; lean_object* v___y_4080_; lean_object* v___y_4081_; lean_object* v___y_4089_; lean_object* v___y_4090_; uint8_t v___y_4091_; lean_object* v___y_4092_; lean_object* v___y_4093_; lean_object* v___y_4094_; lean_object* v___y_4095_; lean_object* v___y_4096_; lean_object* v___y_4097_; lean_object* v___y_4098_; lean_object* v___y_4099_; lean_object* v___y_4100_; lean_object* v___y_4101_; lean_object* v___y_4102_; lean_object* v___y_4103_; lean_object* v___y_4104_; lean_object* v___y_4105_; lean_object* v___y_4106_; lean_object* v___y_4107_; lean_object* v___y_4108_; lean_object* v___y_4121_; lean_object* v___y_4122_; uint8_t v___y_4123_; lean_object* v___y_4124_; lean_object* v___y_4125_; lean_object* v___y_4126_; lean_object* v___y_4127_; lean_object* v___y_4128_; lean_object* v___y_4129_; lean_object* v___y_4130_; lean_object* v___y_4131_; lean_object* v___y_4132_; lean_object* v___y_4133_; lean_object* v___y_4134_; lean_object* v___y_4169_; lean_object* v___y_4170_; uint8_t v___y_4171_; lean_object* v___y_4172_; lean_object* v___y_4173_; lean_object* v_args_4174_; lean_object* v___y_4175_; lean_object* v___y_4176_; lean_object* v___y_4177_; lean_object* v___y_4178_; lean_object* v___y_4179_; lean_object* v___y_4180_; lean_object* v___y_4181_; lean_object* v___y_4182_; lean_object* v___x_4195_; lean_object* v___y_4197_; uint8_t v___y_4198_; lean_object* v___y_4199_; lean_object* v___y_4200_; lean_object* v___y_4201_; lean_object* v_o_4202_; lean_object* v___y_4203_; lean_object* v___y_4204_; lean_object* v___y_4205_; lean_object* v___y_4206_; lean_object* v___y_4207_; lean_object* v___y_4208_; lean_object* v___y_4209_; lean_object* v___y_4210_; lean_object* v_bang_4225_; lean_object* v___y_4226_; lean_object* v___y_4227_; lean_object* v___y_4228_; lean_object* v___y_4229_; lean_object* v___y_4230_; lean_object* v___y_4231_; lean_object* v___y_4232_; lean_object* v___y_4233_; lean_object* v___x_4252_; uint8_t v___x_4253_; 
v___x_3828_ = lean_unsigned_to_nat(0u);
v_tk_3829_ = l_Lean_Syntax_getArg(v_stx_3814_, v___x_3828_);
v___x_4195_ = lean_unsigned_to_nat(1u);
v___x_4252_ = l_Lean_Syntax_getArg(v_stx_3814_, v___x_4195_);
v___x_4253_ = l_Lean_Syntax_isNone(v___x_4252_);
if (v___x_4253_ == 0)
{
uint8_t v___x_4254_; 
lean_inc(v___x_4252_);
v___x_4254_ = l_Lean_Syntax_matchesNull(v___x_4252_, v___x_4195_);
if (v___x_4254_ == 0)
{
lean_object* v___x_4255_; 
lean_dec(v___x_4252_);
lean_dec(v_tk_3829_);
lean_dec_ref(v___x_3817_);
lean_dec_ref(v___x_3816_);
lean_dec_ref(v___x_3815_);
v___x_4255_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_4255_;
}
else
{
lean_object* v_bang_4256_; lean_object* v___x_4257_; 
v_bang_4256_ = l_Lean_Syntax_getArg(v___x_4252_, v___x_3828_);
lean_dec(v___x_4252_);
v___x_4257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4257_, 0, v_bang_4256_);
v_bang_4225_ = v___x_4257_;
v___y_4226_ = v___y_3818_;
v___y_4227_ = v___y_3819_;
v___y_4228_ = v___y_3820_;
v___y_4229_ = v___y_3821_;
v___y_4230_ = v___y_3822_;
v___y_4231_ = v___y_3823_;
v___y_4232_ = v___y_3824_;
v___y_4233_ = v___y_3825_;
goto v___jp_4224_;
}
}
else
{
lean_object* v___x_4258_; 
lean_dec(v___x_4252_);
v___x_4258_ = lean_box(0);
v_bang_4225_ = v___x_4258_;
v___y_4226_ = v___y_3818_;
v___y_4227_ = v___y_3819_;
v___y_4228_ = v___y_3820_;
v___y_4229_ = v___y_3821_;
v___y_4230_ = v___y_3822_;
v___y_4231_ = v___y_3823_;
v___y_4232_ = v___y_3824_;
v___y_4233_ = v___y_3825_;
goto v___jp_4224_;
}
v___jp_3830_:
{
lean_object* v___x_3843_; 
v___x_3843_ = l_Lean_Elab_Tactic_dsimpLocation_x27(v___y_3834_, v___y_3835_, v___y_3842_, v___y_3833_, v___y_3840_, v___y_3839_, v___y_3836_, v___y_3832_, v___y_3837_, v___y_3841_, v___y_3838_);
if (lean_obj_tag(v___x_3843_) == 0)
{
lean_object* v_a_3844_; lean_object* v_usedTheorems_3845_; lean_object* v_diag_3846_; lean_object* v___x_3848_; uint8_t v_isShared_3849_; uint8_t v_isSharedCheck_3888_; 
v_a_3844_ = lean_ctor_get(v___x_3843_, 0);
lean_inc(v_a_3844_);
lean_dec_ref_known(v___x_3843_, 1);
v_usedTheorems_3845_ = lean_ctor_get(v_a_3844_, 0);
v_diag_3846_ = lean_ctor_get(v_a_3844_, 1);
v_isSharedCheck_3888_ = !lean_is_exclusive(v_a_3844_);
if (v_isSharedCheck_3888_ == 0)
{
v___x_3848_ = v_a_3844_;
v_isShared_3849_ = v_isSharedCheck_3888_;
goto v_resetjp_3847_;
}
else
{
lean_inc(v_diag_3846_);
lean_inc(v_usedTheorems_3845_);
lean_dec(v_a_3844_);
v___x_3848_ = lean_box(0);
v_isShared_3849_ = v_isSharedCheck_3888_;
goto v_resetjp_3847_;
}
v_resetjp_3847_:
{
lean_object* v___x_3850_; 
v___x_3850_ = l_Lean_Elab_Tactic_mkSimpCallStx(v___y_3831_, v_usedTheorems_3845_, v___y_3832_, v___y_3837_, v___y_3841_, v___y_3838_);
lean_dec_ref(v_usedTheorems_3845_);
if (lean_obj_tag(v___x_3850_) == 0)
{
lean_object* v_a_3851_; lean_object* v_ref_3852_; lean_object* v___x_3853_; lean_object* v___x_3855_; 
v_a_3851_ = lean_ctor_get(v___x_3850_, 0);
lean_inc(v_a_3851_);
lean_dec_ref_known(v___x_3850_, 1);
v_ref_3852_ = lean_ctor_get(v___y_3841_, 2);
v___x_3853_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__1));
if (v_isShared_3849_ == 0)
{
lean_ctor_set(v___x_3848_, 1, v_a_3851_);
lean_ctor_set(v___x_3848_, 0, v___x_3853_);
v___x_3855_ = v___x_3848_;
goto v_reusejp_3854_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v___x_3853_);
lean_ctor_set(v_reuseFailAlloc_3879_, 1, v_a_3851_);
v___x_3855_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3854_;
}
v_reusejp_3854_:
{
lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; uint8_t v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; 
v___x_3856_ = lean_box(0);
v___x_3857_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3857_, 0, v___x_3855_);
lean_ctor_set(v___x_3857_, 1, v___x_3856_);
lean_ctor_set(v___x_3857_, 2, v___x_3856_);
lean_ctor_set(v___x_3857_, 3, v___x_3856_);
lean_ctor_set(v___x_3857_, 4, v___x_3856_);
lean_ctor_set(v___x_3857_, 5, v___x_3856_);
lean_inc(v_ref_3852_);
v___x_3858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3858_, 0, v_ref_3852_);
v___x_3859_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__2));
v___x_3860_ = 4;
v___x_3861_ = l_Lean_MessageData_nil;
v___x_3862_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_tk_3829_, v___x_3857_, v___x_3858_, v___x_3859_, v___x_3856_, v___x_3860_, v___x_3861_, v___y_3841_, v___y_3838_);
if (lean_obj_tag(v___x_3862_) == 0)
{
lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3869_; 
v_isSharedCheck_3869_ = !lean_is_exclusive(v___x_3862_);
if (v_isSharedCheck_3869_ == 0)
{
lean_object* v_unused_3870_; 
v_unused_3870_ = lean_ctor_get(v___x_3862_, 0);
lean_dec(v_unused_3870_);
v___x_3864_ = v___x_3862_;
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
else
{
lean_dec(v___x_3862_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v___x_3867_; 
if (v_isShared_3865_ == 0)
{
lean_ctor_set(v___x_3864_, 0, v_diag_3846_);
v___x_3867_ = v___x_3864_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_diag_3846_);
v___x_3867_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
return v___x_3867_;
}
}
}
else
{
lean_object* v_a_3871_; lean_object* v___x_3873_; uint8_t v_isShared_3874_; uint8_t v_isSharedCheck_3878_; 
lean_dec_ref(v_diag_3846_);
v_a_3871_ = lean_ctor_get(v___x_3862_, 0);
v_isSharedCheck_3878_ = !lean_is_exclusive(v___x_3862_);
if (v_isSharedCheck_3878_ == 0)
{
v___x_3873_ = v___x_3862_;
v_isShared_3874_ = v_isSharedCheck_3878_;
goto v_resetjp_3872_;
}
else
{
lean_inc(v_a_3871_);
lean_dec(v___x_3862_);
v___x_3873_ = lean_box(0);
v_isShared_3874_ = v_isSharedCheck_3878_;
goto v_resetjp_3872_;
}
v_resetjp_3872_:
{
lean_object* v___x_3876_; 
if (v_isShared_3874_ == 0)
{
v___x_3876_ = v___x_3873_;
goto v_reusejp_3875_;
}
else
{
lean_object* v_reuseFailAlloc_3877_; 
v_reuseFailAlloc_3877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3877_, 0, v_a_3871_);
v___x_3876_ = v_reuseFailAlloc_3877_;
goto v_reusejp_3875_;
}
v_reusejp_3875_:
{
return v___x_3876_;
}
}
}
}
}
else
{
lean_object* v_a_3880_; lean_object* v___x_3882_; uint8_t v_isShared_3883_; uint8_t v_isSharedCheck_3887_; 
lean_del_object(v___x_3848_);
lean_dec_ref(v_diag_3846_);
lean_dec(v_tk_3829_);
v_a_3880_ = lean_ctor_get(v___x_3850_, 0);
v_isSharedCheck_3887_ = !lean_is_exclusive(v___x_3850_);
if (v_isSharedCheck_3887_ == 0)
{
v___x_3882_ = v___x_3850_;
v_isShared_3883_ = v_isSharedCheck_3887_;
goto v_resetjp_3881_;
}
else
{
lean_inc(v_a_3880_);
lean_dec(v___x_3850_);
v___x_3882_ = lean_box(0);
v_isShared_3883_ = v_isSharedCheck_3887_;
goto v_resetjp_3881_;
}
v_resetjp_3881_:
{
lean_object* v___x_3885_; 
if (v_isShared_3883_ == 0)
{
v___x_3885_ = v___x_3882_;
goto v_reusejp_3884_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v_a_3880_);
v___x_3885_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3884_;
}
v_reusejp_3884_:
{
return v___x_3885_;
}
}
}
}
}
else
{
lean_object* v_a_3889_; lean_object* v___x_3891_; uint8_t v_isShared_3892_; uint8_t v_isSharedCheck_3896_; 
lean_dec(v___y_3831_);
lean_dec(v_tk_3829_);
v_a_3889_ = lean_ctor_get(v___x_3843_, 0);
v_isSharedCheck_3896_ = !lean_is_exclusive(v___x_3843_);
if (v_isSharedCheck_3896_ == 0)
{
v___x_3891_ = v___x_3843_;
v_isShared_3892_ = v_isSharedCheck_3896_;
goto v_resetjp_3890_;
}
else
{
lean_inc(v_a_3889_);
lean_dec(v___x_3843_);
v___x_3891_ = lean_box(0);
v_isShared_3892_ = v_isSharedCheck_3896_;
goto v_resetjp_3890_;
}
v_resetjp_3890_:
{
lean_object* v___x_3894_; 
if (v_isShared_3892_ == 0)
{
v___x_3894_ = v___x_3891_;
goto v_reusejp_3893_;
}
else
{
lean_object* v_reuseFailAlloc_3895_; 
v_reuseFailAlloc_3895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3895_, 0, v_a_3889_);
v___x_3894_ = v_reuseFailAlloc_3895_;
goto v_reusejp_3893_;
}
v_reusejp_3893_:
{
return v___x_3894_;
}
}
}
}
v___jp_3897_:
{
if (lean_obj_tag(v___y_3908_) == 0)
{
lean_object* v___x_3911_; lean_object* v___x_3912_; 
v___x_3911_ = ((lean_object*)(l_Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig___redArg___closed__0));
v___x_3912_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_3912_, 0, v___x_3911_);
lean_ctor_set_uint8(v___x_3912_, sizeof(void*)*1, v___y_3899_);
v___y_3831_ = v___y_3898_;
v___y_3832_ = v___y_3900_;
v___y_3833_ = v___y_3903_;
v___y_3834_ = v___y_3910_;
v___y_3835_ = v___y_3901_;
v___y_3836_ = v___y_3904_;
v___y_3837_ = v___y_3905_;
v___y_3838_ = v___y_3902_;
v___y_3839_ = v___y_3906_;
v___y_3840_ = v___y_3907_;
v___y_3841_ = v___y_3909_;
v___y_3842_ = v___x_3912_;
goto v___jp_3830_;
}
else
{
lean_object* v_val_3913_; lean_object* v___x_3914_; 
v_val_3913_ = lean_ctor_get(v___y_3908_, 0);
lean_inc(v_val_3913_);
lean_dec_ref_known(v___y_3908_, 1);
v___x_3914_ = l_Lean_Elab_Tactic_expandLocation(v_val_3913_);
lean_dec(v_val_3913_);
v___y_3831_ = v___y_3898_;
v___y_3832_ = v___y_3900_;
v___y_3833_ = v___y_3903_;
v___y_3834_ = v___y_3910_;
v___y_3835_ = v___y_3901_;
v___y_3836_ = v___y_3904_;
v___y_3837_ = v___y_3905_;
v___y_3838_ = v___y_3902_;
v___y_3839_ = v___y_3906_;
v___y_3840_ = v___y_3907_;
v___y_3841_ = v___y_3909_;
v___y_3842_ = v___x_3914_;
goto v___jp_3830_;
}
}
v___jp_3915_:
{
uint8_t v___x_3928_; uint8_t v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; 
v___x_3928_ = 0;
v___x_3929_ = 2;
v___x_3930_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__3));
v___x_3931_ = lean_box(v___x_3928_);
v___x_3932_ = lean_box(v___x_3929_);
v___x_3933_ = lean_box(v___x_3928_);
lean_inc(v_stx_3919_);
v___x_3934_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_mkSimpContext___boxed), 14, 5);
lean_closure_set(v___x_3934_, 0, v_stx_3919_);
lean_closure_set(v___x_3934_, 1, v___x_3931_);
lean_closure_set(v___x_3934_, 2, v___x_3932_);
lean_closure_set(v___x_3934_, 3, v___x_3933_);
lean_closure_set(v___x_3934_, 4, v___x_3930_);
v___x_3935_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___x_3934_, v___y_3920_, v___y_3921_, v___y_3922_, v___y_3923_, v___y_3924_, v___y_3925_, v___y_3926_, v___y_3927_);
if (lean_obj_tag(v___x_3935_) == 0)
{
lean_object* v_a_3936_; 
v_a_3936_ = lean_ctor_get(v___x_3935_, 0);
lean_inc(v_a_3936_);
lean_dec_ref_known(v___x_3935_, 1);
if (lean_obj_tag(v___y_3916_) == 0)
{
lean_object* v_ctx_3937_; lean_object* v_simprocs_3938_; 
v_ctx_3937_ = lean_ctor_get(v_a_3936_, 0);
lean_inc_ref(v_ctx_3937_);
v_simprocs_3938_ = lean_ctor_get(v_a_3936_, 1);
lean_inc_ref(v_simprocs_3938_);
lean_dec(v_a_3936_);
v___y_3898_ = v_stx_3919_;
v___y_3899_ = v___y_3917_;
v___y_3900_ = v___y_3924_;
v___y_3901_ = v_simprocs_3938_;
v___y_3902_ = v___y_3927_;
v___y_3903_ = v___y_3920_;
v___y_3904_ = v___y_3923_;
v___y_3905_ = v___y_3925_;
v___y_3906_ = v___y_3922_;
v___y_3907_ = v___y_3921_;
v___y_3908_ = v___y_3918_;
v___y_3909_ = v___y_3926_;
v___y_3910_ = v_ctx_3937_;
goto v___jp_3897_;
}
else
{
lean_dec_ref_known(v___y_3916_, 1);
if (v___y_3917_ == 0)
{
lean_object* v_ctx_3939_; lean_object* v_simprocs_3940_; 
v_ctx_3939_ = lean_ctor_get(v_a_3936_, 0);
lean_inc_ref(v_ctx_3939_);
v_simprocs_3940_ = lean_ctor_get(v_a_3936_, 1);
lean_inc_ref(v_simprocs_3940_);
lean_dec(v_a_3936_);
v___y_3898_ = v_stx_3919_;
v___y_3899_ = v___y_3917_;
v___y_3900_ = v___y_3924_;
v___y_3901_ = v_simprocs_3940_;
v___y_3902_ = v___y_3927_;
v___y_3903_ = v___y_3920_;
v___y_3904_ = v___y_3923_;
v___y_3905_ = v___y_3925_;
v___y_3906_ = v___y_3922_;
v___y_3907_ = v___y_3921_;
v___y_3908_ = v___y_3918_;
v___y_3909_ = v___y_3926_;
v___y_3910_ = v_ctx_3939_;
goto v___jp_3897_;
}
else
{
lean_object* v_ctx_3941_; lean_object* v_simprocs_3942_; lean_object* v___x_3943_; 
v_ctx_3941_ = lean_ctor_get(v_a_3936_, 0);
lean_inc_ref(v_ctx_3941_);
v_simprocs_3942_ = lean_ctor_get(v_a_3936_, 1);
lean_inc_ref(v_simprocs_3942_);
lean_dec(v_a_3936_);
v___x_3943_ = l_Lean_Meta_Simp_Context_setAutoUnfold(v_ctx_3941_);
v___y_3898_ = v_stx_3919_;
v___y_3899_ = v___y_3917_;
v___y_3900_ = v___y_3924_;
v___y_3901_ = v_simprocs_3942_;
v___y_3902_ = v___y_3927_;
v___y_3903_ = v___y_3920_;
v___y_3904_ = v___y_3923_;
v___y_3905_ = v___y_3925_;
v___y_3906_ = v___y_3922_;
v___y_3907_ = v___y_3921_;
v___y_3908_ = v___y_3918_;
v___y_3909_ = v___y_3926_;
v___y_3910_ = v___x_3943_;
goto v___jp_3897_;
}
}
}
else
{
lean_object* v_a_3944_; lean_object* v___x_3946_; uint8_t v_isShared_3947_; uint8_t v_isSharedCheck_3951_; 
lean_dec(v_stx_3919_);
lean_dec(v___y_3918_);
lean_dec(v___y_3916_);
lean_dec(v_tk_3829_);
v_a_3944_ = lean_ctor_get(v___x_3935_, 0);
v_isSharedCheck_3951_ = !lean_is_exclusive(v___x_3935_);
if (v_isSharedCheck_3951_ == 0)
{
v___x_3946_ = v___x_3935_;
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
else
{
lean_inc(v_a_3944_);
lean_dec(v___x_3935_);
v___x_3946_ = lean_box(0);
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
v_resetjp_3945_:
{
lean_object* v___x_3949_; 
if (v_isShared_3947_ == 0)
{
v___x_3949_ = v___x_3946_;
goto v_reusejp_3948_;
}
else
{
lean_object* v_reuseFailAlloc_3950_; 
v_reuseFailAlloc_3950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3950_, 0, v_a_3944_);
v___x_3949_ = v_reuseFailAlloc_3950_;
goto v_reusejp_3948_;
}
v_reusejp_3948_:
{
return v___x_3949_;
}
}
}
}
v___jp_3952_:
{
lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; 
lean_inc_ref(v___y_3960_);
v___x_3974_ = l_Array_append___redArg(v___y_3960_, v___y_3973_);
lean_dec_ref(v___y_3973_);
lean_inc(v___y_3959_);
lean_inc(v___y_3958_);
v___x_3975_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3975_, 0, v___y_3958_);
lean_ctor_set(v___x_3975_, 1, v___y_3959_);
lean_ctor_set(v___x_3975_, 2, v___x_3974_);
v___x_3976_ = l_Lean_Syntax_node6(v___y_3958_, v___y_3966_, v___y_3956_, v___y_3954_, v___y_3969_, v___y_3957_, v___y_3961_, v___x_3975_);
v___y_3916_ = v___y_3965_;
v___y_3917_ = v___y_3955_;
v___y_3918_ = v___y_3971_;
v_stx_3919_ = v___x_3976_;
v___y_3920_ = v___y_3967_;
v___y_3921_ = v___y_3964_;
v___y_3922_ = v___y_3962_;
v___y_3923_ = v___y_3972_;
v___y_3924_ = v___y_3970_;
v___y_3925_ = v___y_3953_;
v___y_3926_ = v___y_3968_;
v___y_3927_ = v___y_3963_;
goto v___jp_3915_;
}
v___jp_3977_:
{
lean_object* v___x_3998_; lean_object* v___x_3999_; 
lean_inc_ref(v___y_3985_);
v___x_3998_ = l_Array_append___redArg(v___y_3985_, v___y_3997_);
lean_dec_ref(v___y_3997_);
lean_inc(v___y_3984_);
lean_inc(v___y_3983_);
v___x_3999_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3999_, 0, v___y_3983_);
lean_ctor_set(v___x_3999_, 1, v___y_3984_);
lean_ctor_set(v___x_3999_, 2, v___x_3998_);
if (lean_obj_tag(v___y_3996_) == 0)
{
lean_object* v___x_4000_; 
v___x_4000_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_3953_ = v___y_3978_;
v___y_3954_ = v___y_3979_;
v___y_3955_ = v___y_3980_;
v___y_3956_ = v___y_3981_;
v___y_3957_ = v___y_3982_;
v___y_3958_ = v___y_3983_;
v___y_3959_ = v___y_3984_;
v___y_3960_ = v___y_3985_;
v___y_3961_ = v___x_3999_;
v___y_3962_ = v___y_3986_;
v___y_3963_ = v___y_3987_;
v___y_3964_ = v___y_3988_;
v___y_3965_ = v___y_3989_;
v___y_3966_ = v___y_3991_;
v___y_3967_ = v___y_3990_;
v___y_3968_ = v___y_3992_;
v___y_3969_ = v___y_3993_;
v___y_3970_ = v___y_3994_;
v___y_3971_ = v___y_3996_;
v___y_3972_ = v___y_3995_;
v___y_3973_ = v___x_4000_;
goto v___jp_3952_;
}
else
{
lean_object* v_val_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; 
v_val_4001_ = lean_ctor_get(v___y_3996_, 0);
v___x_4002_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
lean_inc(v_val_4001_);
v___x_4003_ = lean_array_push(v___x_4002_, v_val_4001_);
v___y_3953_ = v___y_3978_;
v___y_3954_ = v___y_3979_;
v___y_3955_ = v___y_3980_;
v___y_3956_ = v___y_3981_;
v___y_3957_ = v___y_3982_;
v___y_3958_ = v___y_3983_;
v___y_3959_ = v___y_3984_;
v___y_3960_ = v___y_3985_;
v___y_3961_ = v___x_3999_;
v___y_3962_ = v___y_3986_;
v___y_3963_ = v___y_3987_;
v___y_3964_ = v___y_3988_;
v___y_3965_ = v___y_3989_;
v___y_3966_ = v___y_3991_;
v___y_3967_ = v___y_3990_;
v___y_3968_ = v___y_3992_;
v___y_3969_ = v___y_3993_;
v___y_3970_ = v___y_3994_;
v___y_3971_ = v___y_3996_;
v___y_3972_ = v___y_3995_;
v___y_3973_ = v___x_4003_;
goto v___jp_3952_;
}
}
v___jp_4004_:
{
lean_object* v___x_4025_; lean_object* v___x_4026_; 
lean_inc_ref(v___y_4011_);
v___x_4025_ = l_Array_append___redArg(v___y_4011_, v___y_4024_);
lean_dec_ref(v___y_4024_);
lean_inc(v___y_4010_);
lean_inc(v___y_4009_);
v___x_4026_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4026_, 0, v___y_4009_);
lean_ctor_set(v___x_4026_, 1, v___y_4010_);
lean_ctor_set(v___x_4026_, 2, v___x_4025_);
if (lean_obj_tag(v___y_4020_) == 1)
{
lean_object* v_val_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; 
v_val_4027_ = lean_ctor_get(v___y_4020_, 0);
lean_inc(v_val_4027_);
lean_dec_ref_known(v___y_4020_, 1);
v___x_4028_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__4));
lean_inc_n(v___y_4009_, 3);
v___x_4029_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4029_, 0, v___y_4009_);
lean_ctor_set(v___x_4029_, 1, v___x_4028_);
lean_inc_ref(v___y_4011_);
v___x_4030_ = l_Array_append___redArg(v___y_4011_, v_val_4027_);
lean_dec(v_val_4027_);
lean_inc(v___y_4010_);
v___x_4031_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4031_, 0, v___y_4009_);
lean_ctor_set(v___x_4031_, 1, v___y_4010_);
lean_ctor_set(v___x_4031_, 2, v___x_4030_);
v___x_4032_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__6));
v___x_4033_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4033_, 0, v___y_4009_);
lean_ctor_set(v___x_4033_, 1, v___x_4032_);
v___x_4034_ = l_Array_mkArray3___redArg(v___x_4029_, v___x_4031_, v___x_4033_);
v___y_3978_ = v___y_4005_;
v___y_3979_ = v___y_4006_;
v___y_3980_ = v___y_4007_;
v___y_3981_ = v___y_4008_;
v___y_3982_ = v___x_4026_;
v___y_3983_ = v___y_4009_;
v___y_3984_ = v___y_4010_;
v___y_3985_ = v___y_4011_;
v___y_3986_ = v___y_4012_;
v___y_3987_ = v___y_4013_;
v___y_3988_ = v___y_4014_;
v___y_3989_ = v___y_4015_;
v___y_3990_ = v___y_4016_;
v___y_3991_ = v___y_4017_;
v___y_3992_ = v___y_4018_;
v___y_3993_ = v___y_4019_;
v___y_3994_ = v___y_4021_;
v___y_3995_ = v___y_4023_;
v___y_3996_ = v___y_4022_;
v___y_3997_ = v___x_4034_;
goto v___jp_3977_;
}
else
{
lean_object* v___x_4035_; 
lean_dec(v___y_4020_);
v___x_4035_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_3978_ = v___y_4005_;
v___y_3979_ = v___y_4006_;
v___y_3980_ = v___y_4007_;
v___y_3981_ = v___y_4008_;
v___y_3982_ = v___x_4026_;
v___y_3983_ = v___y_4009_;
v___y_3984_ = v___y_4010_;
v___y_3985_ = v___y_4011_;
v___y_3986_ = v___y_4012_;
v___y_3987_ = v___y_4013_;
v___y_3988_ = v___y_4014_;
v___y_3989_ = v___y_4015_;
v___y_3990_ = v___y_4016_;
v___y_3991_ = v___y_4017_;
v___y_3992_ = v___y_4018_;
v___y_3993_ = v___y_4019_;
v___y_3994_ = v___y_4021_;
v___y_3995_ = v___y_4023_;
v___y_3996_ = v___y_4022_;
v___y_3997_ = v___x_4035_;
goto v___jp_3977_;
}
}
v___jp_4036_:
{
lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; 
lean_inc_ref(v___y_4051_);
v___x_4058_ = l_Array_append___redArg(v___y_4051_, v___y_4057_);
lean_dec_ref(v___y_4057_);
lean_inc(v___y_4049_);
lean_inc(v___y_4042_);
v___x_4059_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4059_, 0, v___y_4042_);
lean_ctor_set(v___x_4059_, 1, v___y_4049_);
lean_ctor_set(v___x_4059_, 2, v___x_4058_);
v___x_4060_ = l_Lean_Syntax_node6(v___y_4042_, v___y_4047_, v___y_4040_, v___y_4038_, v___y_4045_, v___y_4052_, v___y_4055_, v___x_4059_);
v___y_3916_ = v___y_4046_;
v___y_3917_ = v___y_4039_;
v___y_3918_ = v___y_4054_;
v_stx_3919_ = v___x_4060_;
v___y_3920_ = v___y_4048_;
v___y_3921_ = v___y_4044_;
v___y_3922_ = v___y_4041_;
v___y_3923_ = v___y_4056_;
v___y_3924_ = v___y_4053_;
v___y_3925_ = v___y_4037_;
v___y_3926_ = v___y_4050_;
v___y_3927_ = v___y_4043_;
goto v___jp_3915_;
}
v___jp_4061_:
{
lean_object* v___x_4082_; lean_object* v___x_4083_; 
lean_inc_ref(v___y_4077_);
v___x_4082_ = l_Array_append___redArg(v___y_4077_, v___y_4081_);
lean_dec_ref(v___y_4081_);
lean_inc(v___y_4074_);
lean_inc(v___y_4067_);
v___x_4083_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4083_, 0, v___y_4067_);
lean_ctor_set(v___x_4083_, 1, v___y_4074_);
lean_ctor_set(v___x_4083_, 2, v___x_4082_);
if (lean_obj_tag(v___y_4080_) == 0)
{
lean_object* v___x_4084_; 
v___x_4084_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_4037_ = v___y_4062_;
v___y_4038_ = v___y_4063_;
v___y_4039_ = v___y_4064_;
v___y_4040_ = v___y_4065_;
v___y_4041_ = v___y_4066_;
v___y_4042_ = v___y_4067_;
v___y_4043_ = v___y_4068_;
v___y_4044_ = v___y_4069_;
v___y_4045_ = v___y_4070_;
v___y_4046_ = v___y_4071_;
v___y_4047_ = v___y_4072_;
v___y_4048_ = v___y_4073_;
v___y_4049_ = v___y_4074_;
v___y_4050_ = v___y_4075_;
v___y_4051_ = v___y_4077_;
v___y_4052_ = v___y_4076_;
v___y_4053_ = v___y_4078_;
v___y_4054_ = v___y_4080_;
v___y_4055_ = v___x_4083_;
v___y_4056_ = v___y_4079_;
v___y_4057_ = v___x_4084_;
goto v___jp_4036_;
}
else
{
lean_object* v_val_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; 
v_val_4085_ = lean_ctor_get(v___y_4080_, 0);
v___x_4086_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
lean_inc(v_val_4085_);
v___x_4087_ = lean_array_push(v___x_4086_, v_val_4085_);
v___y_4037_ = v___y_4062_;
v___y_4038_ = v___y_4063_;
v___y_4039_ = v___y_4064_;
v___y_4040_ = v___y_4065_;
v___y_4041_ = v___y_4066_;
v___y_4042_ = v___y_4067_;
v___y_4043_ = v___y_4068_;
v___y_4044_ = v___y_4069_;
v___y_4045_ = v___y_4070_;
v___y_4046_ = v___y_4071_;
v___y_4047_ = v___y_4072_;
v___y_4048_ = v___y_4073_;
v___y_4049_ = v___y_4074_;
v___y_4050_ = v___y_4075_;
v___y_4051_ = v___y_4077_;
v___y_4052_ = v___y_4076_;
v___y_4053_ = v___y_4078_;
v___y_4054_ = v___y_4080_;
v___y_4055_ = v___x_4083_;
v___y_4056_ = v___y_4079_;
v___y_4057_ = v___x_4087_;
goto v___jp_4036_;
}
}
v___jp_4088_:
{
lean_object* v___x_4109_; lean_object* v___x_4110_; 
lean_inc_ref(v___y_4103_);
v___x_4109_ = l_Array_append___redArg(v___y_4103_, v___y_4108_);
lean_dec_ref(v___y_4108_);
lean_inc(v___y_4101_);
lean_inc(v___y_4094_);
v___x_4110_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4110_, 0, v___y_4094_);
lean_ctor_set(v___x_4110_, 1, v___y_4101_);
lean_ctor_set(v___x_4110_, 2, v___x_4109_);
if (lean_obj_tag(v___y_4104_) == 1)
{
lean_object* v_val_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; 
v_val_4111_ = lean_ctor_get(v___y_4104_, 0);
lean_inc(v_val_4111_);
lean_dec_ref_known(v___y_4104_, 1);
v___x_4112_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__4));
lean_inc_n(v___y_4094_, 3);
v___x_4113_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4113_, 0, v___y_4094_);
lean_ctor_set(v___x_4113_, 1, v___x_4112_);
lean_inc_ref(v___y_4103_);
v___x_4114_ = l_Array_append___redArg(v___y_4103_, v_val_4111_);
lean_dec(v_val_4111_);
lean_inc(v___y_4101_);
v___x_4115_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4115_, 0, v___y_4094_);
lean_ctor_set(v___x_4115_, 1, v___y_4101_);
lean_ctor_set(v___x_4115_, 2, v___x_4114_);
v___x_4116_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__6));
v___x_4117_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4117_, 0, v___y_4094_);
lean_ctor_set(v___x_4117_, 1, v___x_4116_);
v___x_4118_ = l_Array_mkArray3___redArg(v___x_4113_, v___x_4115_, v___x_4117_);
v___y_4062_ = v___y_4089_;
v___y_4063_ = v___y_4090_;
v___y_4064_ = v___y_4091_;
v___y_4065_ = v___y_4092_;
v___y_4066_ = v___y_4093_;
v___y_4067_ = v___y_4094_;
v___y_4068_ = v___y_4095_;
v___y_4069_ = v___y_4096_;
v___y_4070_ = v___y_4097_;
v___y_4071_ = v___y_4098_;
v___y_4072_ = v___y_4099_;
v___y_4073_ = v___y_4100_;
v___y_4074_ = v___y_4101_;
v___y_4075_ = v___y_4102_;
v___y_4076_ = v___x_4110_;
v___y_4077_ = v___y_4103_;
v___y_4078_ = v___y_4105_;
v___y_4079_ = v___y_4107_;
v___y_4080_ = v___y_4106_;
v___y_4081_ = v___x_4118_;
goto v___jp_4061_;
}
else
{
lean_object* v___x_4119_; 
lean_dec(v___y_4104_);
v___x_4119_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_4062_ = v___y_4089_;
v___y_4063_ = v___y_4090_;
v___y_4064_ = v___y_4091_;
v___y_4065_ = v___y_4092_;
v___y_4066_ = v___y_4093_;
v___y_4067_ = v___y_4094_;
v___y_4068_ = v___y_4095_;
v___y_4069_ = v___y_4096_;
v___y_4070_ = v___y_4097_;
v___y_4071_ = v___y_4098_;
v___y_4072_ = v___y_4099_;
v___y_4073_ = v___y_4100_;
v___y_4074_ = v___y_4101_;
v___y_4075_ = v___y_4102_;
v___y_4076_ = v___x_4110_;
v___y_4077_ = v___y_4103_;
v___y_4078_ = v___y_4105_;
v___y_4079_ = v___y_4107_;
v___y_4080_ = v___y_4106_;
v___y_4081_ = v___x_4119_;
goto v___jp_4061_;
}
}
v___jp_4120_:
{
if (lean_obj_tag(v___y_4127_) == 0)
{
lean_object* v_ref_4135_; uint8_t v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; 
v_ref_4135_ = lean_ctor_get(v___y_4129_, 2);
v___x_4136_ = 0;
v___x_4137_ = l_Lean_SourceInfo_fromRef(v_ref_4135_, v___x_4136_);
v___x_4138_ = ((lean_object*)(l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__0));
v___x_4139_ = l_Lean_Name_mkStr4(v___x_3815_, v___x_3816_, v___x_3817_, v___x_4138_);
v___x_4140_ = l_Lean_SourceInfo_fromRef(v_tk_3829_, v___y_4123_);
v___x_4141_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4141_, 0, v___x_4140_);
lean_ctor_set(v___x_4141_, 1, v___x_4138_);
v___x_4142_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_4143_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
lean_inc(v___x_4137_);
v___x_4144_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4144_, 0, v___x_4137_);
lean_ctor_set(v___x_4144_, 1, v___x_4142_);
lean_ctor_set(v___x_4144_, 2, v___x_4143_);
if (lean_obj_tag(v___y_4130_) == 1)
{
lean_object* v_val_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; 
v_val_4145_ = lean_ctor_get(v___y_4130_, 0);
lean_inc(v_val_4145_);
lean_dec_ref_known(v___y_4130_, 1);
v___x_4146_ = l_Lean_SourceInfo_fromRef(v_val_4145_, v___y_4123_);
lean_dec(v_val_4145_);
v___x_4147_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8));
v___x_4148_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4148_, 0, v___x_4146_);
lean_ctor_set(v___x_4148_, 1, v___x_4147_);
v___x_4149_ = l_Array_mkArray1___redArg(v___x_4148_);
v___y_4005_ = v___y_4121_;
v___y_4006_ = v___y_4122_;
v___y_4007_ = v___y_4123_;
v___y_4008_ = v___x_4141_;
v___y_4009_ = v___x_4137_;
v___y_4010_ = v___x_4142_;
v___y_4011_ = v___x_4143_;
v___y_4012_ = v___y_4124_;
v___y_4013_ = v___y_4125_;
v___y_4014_ = v___y_4126_;
v___y_4015_ = v___y_4127_;
v___y_4016_ = v___y_4128_;
v___y_4017_ = v___x_4139_;
v___y_4018_ = v___y_4129_;
v___y_4019_ = v___x_4144_;
v___y_4020_ = v___y_4131_;
v___y_4021_ = v___y_4132_;
v___y_4022_ = v___y_4134_;
v___y_4023_ = v___y_4133_;
v___y_4024_ = v___x_4149_;
goto v___jp_4004_;
}
else
{
lean_object* v___x_4150_; 
lean_dec(v___y_4130_);
v___x_4150_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_4005_ = v___y_4121_;
v___y_4006_ = v___y_4122_;
v___y_4007_ = v___y_4123_;
v___y_4008_ = v___x_4141_;
v___y_4009_ = v___x_4137_;
v___y_4010_ = v___x_4142_;
v___y_4011_ = v___x_4143_;
v___y_4012_ = v___y_4124_;
v___y_4013_ = v___y_4125_;
v___y_4014_ = v___y_4126_;
v___y_4015_ = v___y_4127_;
v___y_4016_ = v___y_4128_;
v___y_4017_ = v___x_4139_;
v___y_4018_ = v___y_4129_;
v___y_4019_ = v___x_4144_;
v___y_4020_ = v___y_4131_;
v___y_4021_ = v___y_4132_;
v___y_4022_ = v___y_4134_;
v___y_4023_ = v___y_4133_;
v___y_4024_ = v___x_4150_;
goto v___jp_4004_;
}
}
else
{
lean_object* v_ref_4151_; uint8_t v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; 
v_ref_4151_ = lean_ctor_get(v___y_4129_, 2);
v___x_4152_ = 0;
v___x_4153_ = l_Lean_SourceInfo_fromRef(v_ref_4151_, v___x_4152_);
v___x_4154_ = ((lean_object*)(l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__1));
v___x_4155_ = l_Lean_Name_mkStr4(v___x_3815_, v___x_3816_, v___x_3817_, v___x_4154_);
v___x_4156_ = l_Lean_SourceInfo_fromRef(v_tk_3829_, v___y_4123_);
v___x_4157_ = ((lean_object*)(l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__2));
v___x_4158_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4158_, 0, v___x_4156_);
lean_ctor_set(v___x_4158_, 1, v___x_4157_);
v___x_4159_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__3));
v___x_4160_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_evalSimpTrace_spec__2___redArg___closed__4);
lean_inc(v___x_4153_);
v___x_4161_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4161_, 0, v___x_4153_);
lean_ctor_set(v___x_4161_, 1, v___x_4159_);
lean_ctor_set(v___x_4161_, 2, v___x_4160_);
if (lean_obj_tag(v___y_4130_) == 1)
{
lean_object* v_val_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; 
v_val_4162_ = lean_ctor_get(v___y_4130_, 0);
lean_inc(v_val_4162_);
lean_dec_ref_known(v___y_4130_, 1);
v___x_4163_ = l_Lean_SourceInfo_fromRef(v_val_4162_, v___y_4123_);
lean_dec(v_val_4162_);
v___x_4164_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__8));
v___x_4165_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4165_, 0, v___x_4163_);
lean_ctor_set(v___x_4165_, 1, v___x_4164_);
v___x_4166_ = l_Array_mkArray1___redArg(v___x_4165_);
v___y_4089_ = v___y_4121_;
v___y_4090_ = v___y_4122_;
v___y_4091_ = v___y_4123_;
v___y_4092_ = v___x_4158_;
v___y_4093_ = v___y_4124_;
v___y_4094_ = v___x_4153_;
v___y_4095_ = v___y_4125_;
v___y_4096_ = v___y_4126_;
v___y_4097_ = v___x_4161_;
v___y_4098_ = v___y_4127_;
v___y_4099_ = v___x_4155_;
v___y_4100_ = v___y_4128_;
v___y_4101_ = v___x_4159_;
v___y_4102_ = v___y_4129_;
v___y_4103_ = v___x_4160_;
v___y_4104_ = v___y_4131_;
v___y_4105_ = v___y_4132_;
v___y_4106_ = v___y_4134_;
v___y_4107_ = v___y_4133_;
v___y_4108_ = v___x_4166_;
goto v___jp_4088_;
}
else
{
lean_object* v___x_4167_; 
lean_dec(v___y_4130_);
v___x_4167_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__7));
v___y_4089_ = v___y_4121_;
v___y_4090_ = v___y_4122_;
v___y_4091_ = v___y_4123_;
v___y_4092_ = v___x_4158_;
v___y_4093_ = v___y_4124_;
v___y_4094_ = v___x_4153_;
v___y_4095_ = v___y_4125_;
v___y_4096_ = v___y_4126_;
v___y_4097_ = v___x_4161_;
v___y_4098_ = v___y_4127_;
v___y_4099_ = v___x_4155_;
v___y_4100_ = v___y_4128_;
v___y_4101_ = v___x_4159_;
v___y_4102_ = v___y_4129_;
v___y_4103_ = v___x_4160_;
v___y_4104_ = v___y_4131_;
v___y_4105_ = v___y_4132_;
v___y_4106_ = v___y_4134_;
v___y_4107_ = v___y_4133_;
v___y_4108_ = v___x_4167_;
goto v___jp_4088_;
}
}
}
v___jp_4168_:
{
lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; 
v___x_4183_ = lean_unsigned_to_nat(3u);
v___x_4184_ = l_Lean_Syntax_getArg(v___y_4172_, v___x_4183_);
lean_dec(v___y_4172_);
v___x_4185_ = l_Lean_Syntax_getOptional_x3f(v___x_4184_);
lean_dec(v___x_4184_);
if (lean_obj_tag(v___x_4185_) == 0)
{
lean_object* v___x_4186_; 
v___x_4186_ = lean_box(0);
v___y_4121_ = v___y_4180_;
v___y_4122_ = v___y_4169_;
v___y_4123_ = v___y_4171_;
v___y_4124_ = v___y_4177_;
v___y_4125_ = v___y_4182_;
v___y_4126_ = v___y_4176_;
v___y_4127_ = v___y_4170_;
v___y_4128_ = v___y_4175_;
v___y_4129_ = v___y_4181_;
v___y_4130_ = v___y_4173_;
v___y_4131_ = v_args_4174_;
v___y_4132_ = v___y_4179_;
v___y_4133_ = v___y_4178_;
v___y_4134_ = v___x_4186_;
goto v___jp_4120_;
}
else
{
lean_object* v_val_4187_; lean_object* v___x_4189_; uint8_t v_isShared_4190_; uint8_t v_isSharedCheck_4194_; 
v_val_4187_ = lean_ctor_get(v___x_4185_, 0);
v_isSharedCheck_4194_ = !lean_is_exclusive(v___x_4185_);
if (v_isSharedCheck_4194_ == 0)
{
v___x_4189_ = v___x_4185_;
v_isShared_4190_ = v_isSharedCheck_4194_;
goto v_resetjp_4188_;
}
else
{
lean_inc(v_val_4187_);
lean_dec(v___x_4185_);
v___x_4189_ = lean_box(0);
v_isShared_4190_ = v_isSharedCheck_4194_;
goto v_resetjp_4188_;
}
v_resetjp_4188_:
{
lean_object* v___x_4192_; 
if (v_isShared_4190_ == 0)
{
v___x_4192_ = v___x_4189_;
goto v_reusejp_4191_;
}
else
{
lean_object* v_reuseFailAlloc_4193_; 
v_reuseFailAlloc_4193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4193_, 0, v_val_4187_);
v___x_4192_ = v_reuseFailAlloc_4193_;
goto v_reusejp_4191_;
}
v_reusejp_4191_:
{
v___y_4121_ = v___y_4180_;
v___y_4122_ = v___y_4169_;
v___y_4123_ = v___y_4171_;
v___y_4124_ = v___y_4177_;
v___y_4125_ = v___y_4182_;
v___y_4126_ = v___y_4176_;
v___y_4127_ = v___y_4170_;
v___y_4128_ = v___y_4175_;
v___y_4129_ = v___y_4181_;
v___y_4130_ = v___y_4173_;
v___y_4131_ = v_args_4174_;
v___y_4132_ = v___y_4179_;
v___y_4133_ = v___y_4178_;
v___y_4134_ = v___x_4192_;
goto v___jp_4120_;
}
}
}
}
v___jp_4196_:
{
lean_object* v___x_4211_; uint8_t v___x_4212_; 
v___x_4211_ = l_Lean_Syntax_getArg(v___y_4200_, v___y_4201_);
v___x_4212_ = l_Lean_Syntax_isNone(v___x_4211_);
if (v___x_4212_ == 0)
{
uint8_t v___x_4213_; 
lean_inc(v___x_4211_);
v___x_4213_ = l_Lean_Syntax_matchesNull(v___x_4211_, v___x_4195_);
if (v___x_4213_ == 0)
{
lean_object* v___x_4214_; 
lean_dec(v___x_4211_);
lean_dec(v_o_4202_);
lean_dec(v___y_4200_);
lean_dec(v___y_4199_);
lean_dec(v___y_4197_);
lean_dec(v_tk_3829_);
lean_dec_ref(v___x_3817_);
lean_dec_ref(v___x_3816_);
lean_dec_ref(v___x_3815_);
v___x_4214_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_4214_;
}
else
{
lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; uint8_t v___x_4218_; 
v___x_4215_ = l_Lean_Syntax_getArg(v___x_4211_, v___x_3828_);
lean_dec(v___x_4211_);
v___x_4216_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpAllTrace___lam__1___closed__11));
lean_inc_ref(v___x_3817_);
lean_inc_ref(v___x_3816_);
lean_inc_ref(v___x_3815_);
v___x_4217_ = l_Lean_Name_mkStr4(v___x_3815_, v___x_3816_, v___x_3817_, v___x_4216_);
lean_inc(v___x_4215_);
v___x_4218_ = l_Lean_Syntax_isOfKind(v___x_4215_, v___x_4217_);
lean_dec(v___x_4217_);
if (v___x_4218_ == 0)
{
lean_object* v___x_4219_; 
lean_dec(v___x_4215_);
lean_dec(v_o_4202_);
lean_dec(v___y_4200_);
lean_dec(v___y_4199_);
lean_dec(v___y_4197_);
lean_dec(v_tk_3829_);
lean_dec_ref(v___x_3817_);
lean_dec_ref(v___x_3816_);
lean_dec_ref(v___x_3815_);
v___x_4219_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_4219_;
}
else
{
lean_object* v___x_4220_; lean_object* v_args_4221_; lean_object* v___x_4222_; 
v___x_4220_ = l_Lean_Syntax_getArg(v___x_4215_, v___x_4195_);
lean_dec(v___x_4215_);
v_args_4221_ = l_Lean_Syntax_getArgs(v___x_4220_);
lean_dec(v___x_4220_);
v___x_4222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4222_, 0, v_args_4221_);
v___y_4169_ = v___y_4197_;
v___y_4170_ = v___y_4199_;
v___y_4171_ = v___y_4198_;
v___y_4172_ = v___y_4200_;
v___y_4173_ = v_o_4202_;
v_args_4174_ = v___x_4222_;
v___y_4175_ = v___y_4203_;
v___y_4176_ = v___y_4204_;
v___y_4177_ = v___y_4205_;
v___y_4178_ = v___y_4206_;
v___y_4179_ = v___y_4207_;
v___y_4180_ = v___y_4208_;
v___y_4181_ = v___y_4209_;
v___y_4182_ = v___y_4210_;
goto v___jp_4168_;
}
}
}
else
{
lean_object* v___x_4223_; 
lean_dec(v___x_4211_);
v___x_4223_ = lean_box(0);
v___y_4169_ = v___y_4197_;
v___y_4170_ = v___y_4199_;
v___y_4171_ = v___y_4198_;
v___y_4172_ = v___y_4200_;
v___y_4173_ = v_o_4202_;
v_args_4174_ = v___x_4223_;
v___y_4175_ = v___y_4203_;
v___y_4176_ = v___y_4204_;
v___y_4177_ = v___y_4205_;
v___y_4178_ = v___y_4206_;
v___y_4179_ = v___y_4207_;
v___y_4180_ = v___y_4208_;
v___y_4181_ = v___y_4209_;
v___y_4182_ = v___y_4210_;
goto v___jp_4168_;
}
}
v___jp_4224_:
{
lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; uint8_t v___x_4238_; 
v___x_4234_ = lean_unsigned_to_nat(2u);
v___x_4235_ = l_Lean_Syntax_getArg(v_stx_3814_, v___x_4234_);
v___x_4236_ = ((lean_object*)(l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___closed__3));
lean_inc_ref(v___x_3817_);
lean_inc_ref(v___x_3816_);
lean_inc_ref(v___x_3815_);
v___x_4237_ = l_Lean_Name_mkStr4(v___x_3815_, v___x_3816_, v___x_3817_, v___x_4236_);
lean_inc(v___x_4235_);
v___x_4238_ = l_Lean_Syntax_isOfKind(v___x_4235_, v___x_4237_);
lean_dec(v___x_4237_);
if (v___x_4238_ == 0)
{
lean_object* v___x_4239_; 
lean_dec(v___x_4235_);
lean_dec(v_bang_4225_);
lean_dec(v_tk_3829_);
lean_dec_ref(v___x_3817_);
lean_dec_ref(v___x_3816_);
lean_dec_ref(v___x_3815_);
v___x_4239_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_4239_;
}
else
{
lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; uint8_t v___x_4243_; 
v___x_4240_ = l_Lean_Syntax_getArg(v___x_4235_, v___x_3828_);
v___x_4241_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSimpTrace___lam__2___closed__15));
lean_inc_ref(v___x_3817_);
lean_inc_ref(v___x_3816_);
lean_inc_ref(v___x_3815_);
v___x_4242_ = l_Lean_Name_mkStr4(v___x_3815_, v___x_3816_, v___x_3817_, v___x_4241_);
lean_inc(v___x_4240_);
v___x_4243_ = l_Lean_Syntax_isOfKind(v___x_4240_, v___x_4242_);
lean_dec(v___x_4242_);
if (v___x_4243_ == 0)
{
lean_object* v___x_4244_; 
lean_dec(v___x_4240_);
lean_dec(v___x_4235_);
lean_dec(v_bang_4225_);
lean_dec(v_tk_3829_);
lean_dec_ref(v___x_3817_);
lean_dec_ref(v___x_3816_);
lean_dec_ref(v___x_3815_);
v___x_4244_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_4244_;
}
else
{
lean_object* v___x_4245_; uint8_t v___x_4246_; 
v___x_4245_ = l_Lean_Syntax_getArg(v___x_4235_, v___x_4195_);
v___x_4246_ = l_Lean_Syntax_isNone(v___x_4245_);
if (v___x_4246_ == 0)
{
uint8_t v___x_4247_; 
lean_inc(v___x_4245_);
v___x_4247_ = l_Lean_Syntax_matchesNull(v___x_4245_, v___x_4195_);
if (v___x_4247_ == 0)
{
lean_object* v___x_4248_; 
lean_dec(v___x_4245_);
lean_dec(v___x_4240_);
lean_dec(v___x_4235_);
lean_dec(v_bang_4225_);
lean_dec(v_tk_3829_);
lean_dec_ref(v___x_3817_);
lean_dec_ref(v___x_3816_);
lean_dec_ref(v___x_3815_);
v___x_4248_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSimpTrace_spec__0___redArg();
return v___x_4248_;
}
else
{
lean_object* v_o_4249_; lean_object* v___x_4250_; 
v_o_4249_ = l_Lean_Syntax_getArg(v___x_4245_, v___x_3828_);
lean_dec(v___x_4245_);
v___x_4250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4250_, 0, v_o_4249_);
v___y_4197_ = v___x_4240_;
v___y_4198_ = v___x_4243_;
v___y_4199_ = v_bang_4225_;
v___y_4200_ = v___x_4235_;
v___y_4201_ = v___x_4234_;
v_o_4202_ = v___x_4250_;
v___y_4203_ = v___y_4226_;
v___y_4204_ = v___y_4227_;
v___y_4205_ = v___y_4228_;
v___y_4206_ = v___y_4229_;
v___y_4207_ = v___y_4230_;
v___y_4208_ = v___y_4231_;
v___y_4209_ = v___y_4232_;
v___y_4210_ = v___y_4233_;
goto v___jp_4196_;
}
}
else
{
lean_object* v___x_4251_; 
lean_dec(v___x_4245_);
v___x_4251_ = lean_box(0);
v___y_4197_ = v___x_4240_;
v___y_4198_ = v___x_4243_;
v___y_4199_ = v_bang_4225_;
v___y_4200_ = v___x_4235_;
v___y_4201_ = v___x_4234_;
v_o_4202_ = v___x_4251_;
v___y_4203_ = v___y_4226_;
v___y_4204_ = v___y_4227_;
v___y_4205_ = v___y_4228_;
v___y_4206_ = v___y_4229_;
v___y_4207_ = v___y_4230_;
v___y_4208_ = v___y_4231_;
v___y_4209_ = v___y_4232_;
v___y_4210_ = v___y_4233_;
goto v___jp_4196_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___boxed(lean_object* v___x_4259_, lean_object* v_stx_4260_, lean_object* v___x_4261_, lean_object* v___x_4262_, lean_object* v___x_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_){
_start:
{
uint8_t v___x_10233__boxed_4273_; lean_object* v_res_4274_; 
v___x_10233__boxed_4273_ = lean_unbox(v___x_4259_);
v_res_4274_ = l_Lean_Elab_Tactic_evalDSimpTrace___lam__0(v___x_10233__boxed_4273_, v_stx_4260_, v___x_4261_, v___x_4262_, v___x_4263_, v___y_4264_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_);
lean_dec(v___y_4271_);
lean_dec_ref(v___y_4270_);
lean_dec(v___y_4269_);
lean_dec_ref(v___y_4268_);
lean_dec(v___y_4267_);
lean_dec_ref(v___y_4266_);
lean_dec(v___y_4265_);
lean_dec_ref(v___y_4264_);
lean_dec(v_stx_4260_);
return v_res_4274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalDSimpTrace(lean_object* v_stx_4281_, lean_object* v_a_4282_, lean_object* v_a_4283_, lean_object* v_a_4284_, lean_object* v_a_4285_, lean_object* v_a_4286_, lean_object* v_a_4287_, lean_object* v_a_4288_, lean_object* v_a_4289_){
_start:
{
lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; uint8_t v___x_4295_; lean_object* v___x_4296_; lean_object* v___y_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; 
v___x_4291_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__0));
v___x_4292_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__1));
v___x_4293_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterSuggestionsAndLocalsFromSimpConfig_spec__0___closed__2));
v___x_4294_ = ((lean_object*)(l_Lean_Elab_Tactic_evalDSimpTrace___closed__1));
lean_inc(v_stx_4281_);
v___x_4295_ = l_Lean_Syntax_isOfKind(v_stx_4281_, v___x_4294_);
v___x_4296_ = lean_box(v___x_4295_);
v___y_4297_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalDSimpTrace___lam__0___boxed), 14, 5);
lean_closure_set(v___y_4297_, 0, v___x_4296_);
lean_closure_set(v___y_4297_, 1, v_stx_4281_);
lean_closure_set(v___y_4297_, 2, v___x_4291_);
lean_closure_set(v___y_4297_, 3, v___x_4292_);
lean_closure_set(v___y_4297_, 4, v___x_4293_);
v___x_4298_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withSimpDiagnostics___boxed), 10, 1);
lean_closure_set(v___x_4298_, 0, v___y_4297_);
v___x_4299_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___x_4298_, v_a_4282_, v_a_4283_, v_a_4284_, v_a_4285_, v_a_4286_, v_a_4287_, v_a_4288_, v_a_4289_);
return v___x_4299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalDSimpTrace___boxed(lean_object* v_stx_4300_, lean_object* v_a_4301_, lean_object* v_a_4302_, lean_object* v_a_4303_, lean_object* v_a_4304_, lean_object* v_a_4305_, lean_object* v_a_4306_, lean_object* v_a_4307_, lean_object* v_a_4308_, lean_object* v_a_4309_){
_start:
{
lean_object* v_res_4310_; 
v_res_4310_ = l_Lean_Elab_Tactic_evalDSimpTrace(v_stx_4300_, v_a_4301_, v_a_4302_, v_a_4303_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_, v_a_4308_);
lean_dec(v_a_4308_);
lean_dec_ref(v_a_4307_);
lean_dec(v_a_4306_);
lean_dec_ref(v_a_4305_);
lean_dec(v_a_4304_);
lean_dec_ref(v_a_4303_);
lean_dec(v_a_4302_);
lean_dec_ref(v_a_4301_);
return v_res_4310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1(){
_start:
{
lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; 
v___x_4318_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4319_ = ((lean_object*)(l_Lean_Elab_Tactic_evalDSimpTrace___closed__1));
v___x_4320_ = ((lean_object*)(l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___closed__1));
v___x_4321_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalDSimpTrace___boxed), 10, 0);
v___x_4322_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4318_, v___x_4319_, v___x_4320_, v___x_4321_);
return v___x_4322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___boxed(lean_object* v_a_4323_){
_start:
{
lean_object* v_res_4324_; 
v_res_4324_ = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1();
return v_res_4324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3(){
_start:
{
lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; 
v___x_4351_ = ((lean_object*)(l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1___closed__1));
v___x_4352_ = ((lean_object*)(l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___closed__6));
v___x_4353_ = l_Lean_addBuiltinDeclarationRanges(v___x_4351_, v___x_4352_);
return v___x_4353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3___boxed(lean_object* v_a_4354_){
_start:
{
lean_object* v_res_4355_; 
v_res_4355_ = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3();
return v_res_4355_;
}
}
lean_object* runtime_initialize_Lean_Elab_ElabRules(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
lean_object* runtime_initialize_Lean_LibrarySuggestions_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_SimpTrace(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_ElabRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_LibrarySuggestions_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpTrace___regBuiltin_Lean_Elab_Tactic_evalSimpTrace_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalSimpAllTrace___regBuiltin_Lean_Elab_Tactic_evalSimpAllTrace_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_SimpTrace_0__Lean_Elab_Tactic_evalDSimpTrace___regBuiltin_Lean_Elab_Tactic_evalDSimpTrace_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_SimpTrace(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_ElabRules(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
lean_object* initialize_Lean_LibrarySuggestions_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_SimpTrace(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_ElabRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_LibrarySuggestions_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_SimpTrace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_SimpTrace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_SimpTrace(builtin);
}
#ifdef __cplusplus
}
#endif
