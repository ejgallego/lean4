// Lean compiler output
// Module: Lean.Elab.Notation
// Imports: public import Lean.Elab.Syntax public import Lean.Elab.AuxDef public import Lean.Elab.BuiltinNotation
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
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
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
lean_object* lean_st_ref_take(lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Syntax_mkAntiquotNode(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Elab_Command_strLitToPattern___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getHygieneInfo(lean_object*);
lean_object* l_Lean_Elab_Term_expandCDot_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_Syntax_getTailInfo(lean_object*);
lean_object* l_Lean_Syntax_setHeadInfo(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setTailInfo(lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_topDown(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_isAntiquot(lean_object*);
lean_object* l_Lean_Syntax_getAntiquotTerm(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_Macro_resolveGlobalName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Command_visibility_ofAttrKind(lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Command_isLocalAttrKind(lean_object*);
extern lean_object* l_Lean_Elab_Term_Quotation_quotPrecheck_allowSectionVars;
lean_object* l_Lean_Elab_Command_elabCommand___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_withScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabSyntax(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Lean_evalOptPrio___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__2 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__2_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "inherit_doc"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(83, 8, 69, 42, 53, 230, 51, 166)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_addInheritDocDefault___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_Command_addInheritDocDefault___closed__0 = (const lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_addInheritDocDefault___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Elab_Command_addInheritDocDefault___closed__1 = (const lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_addInheritDocDefault___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_Command_addInheritDocDefault___closed__2 = (const lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addInheritDocDefault(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cat"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__1 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__1_value),LEAN_SCALAR_PTR_LITERAL(95, 91, 11, 245, 227, 176, 7, 196)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "precedence"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__4 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__4_value),LEAN_SCALAR_PTR_LITERAL(69, 243, 176, 51, 48, 112, 202, 160)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6_value;
static const lean_array_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "identPrec"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__9 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__9_value),LEAN_SCALAR_PTR_LITERAL(251, 25, 252, 182, 120, 175, 78, 126)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__11 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__11_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "unicodeAtom"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__13 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value_aux_2),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__13_value),LEAN_SCALAR_PTR_LITERAL(29, 147, 94, 13, 45, 35, 101, 109)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "atom"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__15 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_2),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__15_value),LEAN_SCALAR_PTR_LITERAL(144, 22, 146, 169, 39, 242, 124, 88)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParenthesesAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParenthesesAux___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_removeParentheses___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__0 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__1 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_removeParentheses___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__2 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__2_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__3 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_removeParentheses___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__4 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__4_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__5 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParentheses(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParentheses___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__0 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__1 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0;
LEAN_EXPORT uint8_t l_Lean_Elab_Command_hasDuplicateAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_hasDuplicateAntiquot___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "antiquot"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__0 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__0_value),LEAN_SCALAR_PTR_LITERAL(234, 107, 218, 203, 20, 35, 251, 156)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__1 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__2 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "f"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__3 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__4;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__3_value),LEAN_SCALAR_PTR_LITERAL(29, 68, 183, 24, 128, 148, 178, 23)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__5 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "antiquotName"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__6 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__6_value),LEAN_SCALAR_PTR_LITERAL(67, 48, 35, 197, 163, 216, 250, 79)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__7 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__8 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__8_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "aux_def"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__9 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__8_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__9_value),LEAN_SCALAR_PTR_LITERAL(83, 33, 36, 212, 17, 187, 86, 94)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__10 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__11 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__11_value),LEAN_SCALAR_PTR_LITERAL(66, 184, 196, 169, 25, 125, 40, 35)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__12 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__12_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__13 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__13_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "app_unexpander"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__14 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__14_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__15;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__14_value),LEAN_SCALAR_PTR_LITERAL(173, 94, 177, 152, 198, 163, 81, 20)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__16 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__16_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__17 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__17_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "unexpand"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__18 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__18_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__19;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__18_value),LEAN_SCALAR_PTR_LITERAL(42, 154, 37, 229, 99, 64, 199, 76)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__20 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__20_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.PrettyPrinter.Unexpander"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__21 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__22;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__23 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__23_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Unexpander"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__24 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__25_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__23_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__25_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__24_value),LEAN_SCALAR_PTR_LITERAL(127, 37, 73, 100, 13, 145, 76, 255)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__25 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__25_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__26 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__26_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__27 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__27_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__27_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__28 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__28_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__29 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__29_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__29_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__30 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__30_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__31 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__31_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__31_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__32 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__32_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__33 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__33_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__34 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__34_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__34_value),LEAN_SCALAR_PTR_LITERAL(145, 163, 173, 41, 168, 168, 65, 81)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__35 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__35_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`("};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__36 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__36_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__37 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__37_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__38 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__38_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "withRef"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__39 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__39_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__40;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__39_value),LEAN_SCALAR_PTR_LITERAL(193, 74, 233, 14, 30, 198, 157, 185)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__41 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__41_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__42_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__39_value),LEAN_SCALAR_PTR_LITERAL(128, 176, 237, 189, 54, 129, 101, 238)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__42 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__42_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__43 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__43_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__43_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__44 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__44_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__45 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__45_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "throw"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__46 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__46_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__47;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__46_value),LEAN_SCALAR_PTR_LITERAL(60, 81, 80, 209, 187, 239, 255, 113)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__48 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__48_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MonadExcept"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__49 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__49_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__49_value),LEAN_SCALAR_PTR_LITERAL(162, 154, 253, 120, 110, 153, 103, 113)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__50_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__46_value),LEAN_SCALAR_PTR_LITERAL(121, 11, 61, 69, 62, 207, 229, 53)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__50 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__50_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__51 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__51_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__51_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__52 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__52_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__53 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__53_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__54 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__54_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__55;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__56_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__8_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__56_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__56 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__56_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__56_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__57 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__57_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__58_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__58_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__58 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__58_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__58_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__59 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__59_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__60_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__60_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__60 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__60_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__60_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__61 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__61_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__62_value_aux_0),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(45, 144, 98, 72, 115, 31, 20, 74)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__62 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__62_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__62_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__63 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__63_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__63_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__64 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__64_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__61_value),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__64_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__65 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__65_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__59_value),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__65_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__66 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__66_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__57_value),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__66_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__67 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__67_value;
static const lean_array_object l_Lean_Elab_Command_mkUnexpander___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__68 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__68_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkUnexpander(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkUnexpander___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__25(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__25___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__13_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__14_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__16_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "macro_rules"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 80, 75, 5, 165, 87, 197, 1)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "precheckedQuot"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "notation"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__4_value),LEAN_SCALAR_PTR_LITERAL(13, 34, 53, 7, 182, 20, 8, 182)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namedPrio"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__6_value),LEAN_SCALAR_PTR_LITERAL(171, 32, 2, 102, 118, 75, 64, 185)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "priority"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__8 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__8_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namedName"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__10_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__9_value),LEAN_SCALAR_PTR_LITERAL(73, 173, 122, 11, 5, 195, 101, 245)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__10 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__11 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__11_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "syntax"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__12_value),LEAN_SCALAR_PTR_LITERAL(39, 60, 146, 133, 142, 21, 8, 39)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__13 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__13_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__14 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__15_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__14_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__15 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Command_elabNotation___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabNotation"};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__8_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 81, 117, 114, 113, 220, 215, 248)}};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1(lean_object* v_id_1_, lean_object* v_as_2_, size_t v_i_3_, size_t v_stop_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_eq(v_i_3_, v_stop_4_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_6_ = lean_array_uget_borrowed(v_as_2_, v_i_3_);
v___x_7_ = l_Lean_Syntax_getId(v___x_6_);
v___x_8_ = l_Lean_TSyntax_getId(v_id_1_);
v___x_9_ = lean_name_eq(v___x_7_, v___x_8_);
lean_dec(v___x_8_);
lean_dec(v___x_7_);
if (v___x_9_ == 0)
{
size_t v___x_10_; size_t v___x_11_; 
v___x_10_ = ((size_t)1ULL);
v___x_11_ = lean_usize_add(v_i_3_, v___x_10_);
v_i_3_ = v___x_11_;
goto _start;
}
else
{
return v___x_9_;
}
}
else
{
uint8_t v___x_13_; 
v___x_13_ = 0;
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1___boxed(lean_object* v_id_14_, lean_object* v_as_15_, lean_object* v_i_16_, lean_object* v_stop_17_){
_start:
{
size_t v_i_boxed_18_; size_t v_stop_boxed_19_; uint8_t v_res_20_; lean_object* v_r_21_; 
v_i_boxed_18_ = lean_unbox_usize(v_i_16_);
lean_dec(v_i_16_);
v_stop_boxed_19_ = lean_unbox_usize(v_stop_17_);
lean_dec(v_stop_17_);
v_res_20_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1(v_id_14_, v_as_15_, v_i_boxed_18_, v_stop_boxed_19_);
lean_dec_ref(v_as_15_);
lean_dec(v_id_14_);
v_r_21_ = lean_box(v_res_20_);
return v_r_21_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote(lean_object* v_vars_28_, lean_object* v_x_29_){
_start:
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v_x_29_);
v___x_31_ = l_Lean_Syntax_isOfKind(v_x_29_, v___x_30_);
if (v___x_31_ == 0)
{
if (lean_obj_tag(v_x_29_) == 1)
{
lean_object* v_info_32_; lean_object* v_kind_33_; lean_object* v_args_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_44_; 
v_info_32_ = lean_ctor_get(v_x_29_, 0);
v_kind_33_ = lean_ctor_get(v_x_29_, 1);
v_args_34_ = lean_ctor_get(v_x_29_, 2);
v_isSharedCheck_44_ = !lean_is_exclusive(v_x_29_);
if (v_isSharedCheck_44_ == 0)
{
v___x_36_ = v_x_29_;
v_isShared_37_ = v_isSharedCheck_44_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_args_34_);
lean_inc(v_kind_33_);
lean_inc(v_info_32_);
lean_dec(v_x_29_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_44_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
size_t v_sz_38_; size_t v___x_39_; lean_object* v___x_40_; lean_object* v___x_42_; 
v_sz_38_ = lean_array_size(v_args_34_);
v___x_39_ = ((size_t)0ULL);
v___x_40_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0(v_vars_28_, v_sz_38_, v___x_39_, v_args_34_);
if (v_isShared_37_ == 0)
{
lean_ctor_set(v___x_36_, 2, v___x_40_);
v___x_42_ = v___x_36_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v_info_32_);
lean_ctor_set(v_reuseFailAlloc_43_, 1, v_kind_33_);
lean_ctor_set(v_reuseFailAlloc_43_, 2, v___x_40_);
v___x_42_ = v_reuseFailAlloc_43_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
return v___x_42_;
}
}
}
else
{
return v_x_29_;
}
}
else
{
lean_object* v___x_45_; lean_object* v___x_46_; uint8_t v___x_47_; 
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = lean_array_get_size(v_vars_28_);
v___x_47_ = lean_nat_dec_lt(v___x_45_, v___x_46_);
if (v___x_47_ == 0)
{
return v_x_29_;
}
else
{
if (v___x_47_ == 0)
{
return v_x_29_;
}
else
{
size_t v___x_48_; size_t v___x_49_; uint8_t v___x_50_; 
v___x_48_ = ((size_t)0ULL);
v___x_49_ = lean_usize_of_nat(v___x_46_);
v___x_50_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1(v_x_29_, v_vars_28_, v___x_48_, v___x_49_);
if (v___x_50_ == 0)
{
return v_x_29_;
}
else
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3));
v___x_52_ = lean_box(0);
v___x_53_ = l_Lean_Syntax_mkAntiquotNode(v___x_51_, v_x_29_, v___x_45_, v___x_52_, v___x_50_);
return v___x_53_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0(lean_object* v_vars_54_, size_t v_sz_55_, size_t v_i_56_, lean_object* v_bs_57_){
_start:
{
uint8_t v___x_58_; 
v___x_58_ = lean_usize_dec_lt(v_i_56_, v_sz_55_);
if (v___x_58_ == 0)
{
return v_bs_57_;
}
else
{
lean_object* v_v_59_; lean_object* v___x_60_; lean_object* v_bs_x27_61_; lean_object* v___x_62_; size_t v___x_63_; size_t v___x_64_; lean_object* v___x_65_; 
v_v_59_ = lean_array_uget(v_bs_57_, v_i_56_);
v___x_60_ = lean_unsigned_to_nat(0u);
v_bs_x27_61_ = lean_array_uset(v_bs_57_, v_i_56_, v___x_60_);
v___x_62_ = l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote(v_vars_54_, v_v_59_);
v___x_63_ = ((size_t)1ULL);
v___x_64_ = lean_usize_add(v_i_56_, v___x_63_);
v___x_65_ = lean_array_uset(v_bs_x27_61_, v_i_56_, v___x_62_);
v_i_56_ = v___x_64_;
v_bs_57_ = v___x_65_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0___boxed(lean_object* v_vars_67_, lean_object* v_sz_68_, lean_object* v_i_69_, lean_object* v_bs_70_){
_start:
{
size_t v_sz_boxed_71_; size_t v_i_boxed_72_; lean_object* v_res_73_; 
v_sz_boxed_71_ = lean_unbox_usize(v_sz_68_);
lean_dec(v_sz_68_);
v_i_boxed_72_ = lean_unbox_usize(v_i_69_);
lean_dec(v_i_69_);
v_res_73_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0(v_vars_67_, v_sz_boxed_71_, v_i_boxed_72_, v_bs_70_);
lean_dec_ref(v_vars_67_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___boxed(lean_object* v_vars_74_, lean_object* v_x_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote(v_vars_74_, v_x_75_);
lean_dec_ref(v_vars_74_);
return v_res_76_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14(void){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = l_Array_mkArray0___redArg();
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0(uint8_t v___x_106_, lean_object* v___x_107_, size_t v_sz_108_, size_t v_i_109_, lean_object* v_bs_110_){
_start:
{
uint8_t v___x_111_; 
v___x_111_ = lean_usize_dec_lt(v_i_109_, v_sz_108_);
if (v___x_111_ == 0)
{
lean_dec(v___x_107_);
return v_bs_110_;
}
else
{
lean_object* v___x_112_; lean_object* v_v_113_; lean_object* v___x_114_; lean_object* v_bs_x27_115_; lean_object* v___y_117_; uint8_t v___x_122_; 
v___x_112_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4));
v_v_113_ = lean_array_uget(v_bs_110_, v_i_109_);
v___x_114_ = lean_unsigned_to_nat(0u);
v_bs_x27_115_ = lean_array_uset(v_bs_110_, v_i_109_, v___x_114_);
lean_inc(v_v_113_);
v___x_122_ = l_Lean_Syntax_isOfKind(v_v_113_, v___x_112_);
if (v___x_122_ == 0)
{
v___y_117_ = v_v_113_;
goto v___jp_116_;
}
else
{
lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_123_ = l_Lean_Syntax_getArg(v_v_113_, v___x_114_);
v___x_124_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6));
lean_inc(v___x_123_);
v___x_125_ = l_Lean_Syntax_isOfKind(v___x_123_, v___x_124_);
if (v___x_125_ == 0)
{
lean_dec(v___x_123_);
v___y_117_ = v_v_113_;
goto v___jp_116_;
}
else
{
lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_126_ = l_Lean_Syntax_getArg(v___x_123_, v___x_114_);
lean_dec(v___x_123_);
v___x_127_ = l_Lean_Syntax_matchesNull(v___x_126_, v___x_114_);
if (v___x_127_ == 0)
{
v___y_117_ = v_v_113_;
goto v___jp_116_;
}
else
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; uint8_t v___x_131_; 
v___x_128_ = lean_unsigned_to_nat(1u);
v___x_129_ = l_Lean_Syntax_getArg(v_v_113_, v___x_128_);
v___x_130_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9));
lean_inc(v___x_129_);
v___x_131_ = l_Lean_Syntax_isOfKind(v___x_129_, v___x_130_);
if (v___x_131_ == 0)
{
lean_dec(v___x_129_);
v___y_117_ = v_v_113_;
goto v___jp_116_;
}
else
{
lean_object* v___x_132_; lean_object* v_attr_133_; uint8_t v___x_134_; 
v___x_132_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
v_attr_133_ = l_Lean_Syntax_getArg(v___x_129_, v___x_114_);
lean_inc(v_attr_133_);
v___x_134_ = l_Lean_Syntax_isOfKind(v_attr_133_, v___x_132_);
if (v___x_134_ == 0)
{
lean_dec(v_attr_133_);
lean_dec(v___x_129_);
v___y_117_ = v_v_113_;
goto v___jp_116_;
}
else
{
lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_135_ = l_Lean_Syntax_getArg(v___x_129_, v___x_128_);
lean_dec(v___x_129_);
v___x_136_ = l_Lean_Syntax_matchesNull(v___x_135_, v___x_114_);
if (v___x_136_ == 0)
{
lean_dec(v_attr_133_);
v___y_117_ = v_v_113_;
goto v___jp_116_;
}
else
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; 
v___x_137_ = l_Lean_TSyntax_getId(v_attr_133_);
v___x_138_ = l_Lean_Name_eraseMacroScopes(v___x_137_);
lean_dec(v___x_137_);
v___x_139_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__11));
v___x_140_ = lean_name_eq(v___x_138_, v___x_139_);
lean_dec(v___x_138_);
if (v___x_140_ == 0)
{
lean_dec(v_attr_133_);
v___y_117_ = v_v_113_;
goto v___jp_116_;
}
else
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
lean_dec(v_v_113_);
v___x_141_ = lean_box(0);
v___x_142_ = l_Lean_SourceInfo_fromRef(v___x_141_, v___x_106_);
v___x_143_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_144_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14);
lean_inc_n(v___x_142_, 4);
v___x_145_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_145_, 0, v___x_142_);
lean_ctor_set(v___x_145_, 1, v___x_143_);
lean_ctor_set(v___x_145_, 2, v___x_144_);
v___x_146_ = l_Lean_Syntax_node1(v___x_142_, v___x_124_, v___x_145_);
lean_inc(v___x_107_);
v___x_147_ = l_Lean_Syntax_node1(v___x_142_, v___x_143_, v___x_107_);
v___x_148_ = l_Lean_Syntax_node2(v___x_142_, v___x_130_, v_attr_133_, v___x_147_);
v___x_149_ = l_Lean_Syntax_node2(v___x_142_, v___x_112_, v___x_146_, v___x_148_);
v___y_117_ = v___x_149_;
goto v___jp_116_;
}
}
}
}
}
}
}
v___jp_116_:
{
size_t v___x_118_; size_t v___x_119_; lean_object* v___x_120_; 
v___x_118_ = ((size_t)1ULL);
v___x_119_ = lean_usize_add(v_i_109_, v___x_118_);
v___x_120_ = lean_array_uset(v_bs_x27_115_, v_i_109_, v___y_117_);
v_i_109_ = v___x_119_;
v_bs_110_ = v___x_120_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___boxed(lean_object* v___x_150_, lean_object* v___x_151_, lean_object* v_sz_152_, lean_object* v_i_153_, lean_object* v_bs_154_){
_start:
{
uint8_t v___x_9934__boxed_155_; size_t v_sz_boxed_156_; size_t v_i_boxed_157_; lean_object* v_res_158_; 
v___x_9934__boxed_155_ = lean_unbox(v___x_150_);
v_sz_boxed_156_ = lean_unbox_usize(v_sz_152_);
lean_dec(v_sz_152_);
v_i_boxed_157_ = lean_unbox_usize(v_i_153_);
lean_dec(v_i_153_);
v_res_158_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0(v___x_9934__boxed_155_, v___x_151_, v_sz_boxed_156_, v_i_boxed_157_, v_bs_154_);
return v_res_158_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0(void){
_start:
{
uint8_t v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_159_ = 0;
v___x_160_ = lean_box(0);
v___x_161_ = l_Lean_SourceInfo_fromRef(v___x_160_, v___x_159_);
return v___x_161_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_162_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14);
v___x_163_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_164_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0);
v___x_165_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
lean_ctor_set(v___x_165_, 1, v___x_163_);
lean_ctor_set(v___x_165_, 2, v___x_162_);
return v___x_165_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_166_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1);
v___x_167_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6));
v___x_168_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0);
v___x_169_ = l_Lean_Syntax_node1(v___x_168_, v___x_167_, v___x_166_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1(lean_object* v___x_170_, size_t v_sz_171_, size_t v_i_172_, lean_object* v_bs_173_){
_start:
{
uint8_t v___x_174_; 
v___x_174_ = lean_usize_dec_lt(v_i_172_, v_sz_171_);
if (v___x_174_ == 0)
{
lean_dec(v___x_170_);
return v_bs_173_;
}
else
{
lean_object* v___x_175_; lean_object* v_v_176_; lean_object* v___x_177_; lean_object* v_bs_x27_178_; lean_object* v___y_180_; uint8_t v___x_185_; 
v___x_175_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4));
v_v_176_ = lean_array_uget(v_bs_173_, v_i_172_);
v___x_177_ = lean_unsigned_to_nat(0u);
v_bs_x27_178_ = lean_array_uset(v_bs_173_, v_i_172_, v___x_177_);
lean_inc(v_v_176_);
v___x_185_ = l_Lean_Syntax_isOfKind(v_v_176_, v___x_175_);
if (v___x_185_ == 0)
{
v___y_180_ = v_v_176_;
goto v___jp_179_;
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_186_ = l_Lean_Syntax_getArg(v_v_176_, v___x_177_);
v___x_187_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6));
lean_inc(v___x_186_);
v___x_188_ = l_Lean_Syntax_isOfKind(v___x_186_, v___x_187_);
if (v___x_188_ == 0)
{
lean_dec(v___x_186_);
v___y_180_ = v_v_176_;
goto v___jp_179_;
}
else
{
lean_object* v___x_189_; uint8_t v___x_190_; 
v___x_189_ = l_Lean_Syntax_getArg(v___x_186_, v___x_177_);
lean_dec(v___x_186_);
v___x_190_ = l_Lean_Syntax_matchesNull(v___x_189_, v___x_177_);
if (v___x_190_ == 0)
{
v___y_180_ = v_v_176_;
goto v___jp_179_;
}
else
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_191_ = lean_unsigned_to_nat(1u);
v___x_192_ = l_Lean_Syntax_getArg(v_v_176_, v___x_191_);
v___x_193_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9));
lean_inc(v___x_192_);
v___x_194_ = l_Lean_Syntax_isOfKind(v___x_192_, v___x_193_);
if (v___x_194_ == 0)
{
lean_dec(v___x_192_);
v___y_180_ = v_v_176_;
goto v___jp_179_;
}
else
{
lean_object* v___x_195_; lean_object* v_attr_196_; uint8_t v___x_197_; 
v___x_195_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
v_attr_196_ = l_Lean_Syntax_getArg(v___x_192_, v___x_177_);
lean_inc(v_attr_196_);
v___x_197_ = l_Lean_Syntax_isOfKind(v_attr_196_, v___x_195_);
if (v___x_197_ == 0)
{
lean_dec(v_attr_196_);
lean_dec(v___x_192_);
v___y_180_ = v_v_176_;
goto v___jp_179_;
}
else
{
lean_object* v___x_198_; uint8_t v___x_199_; 
v___x_198_ = l_Lean_Syntax_getArg(v___x_192_, v___x_191_);
lean_dec(v___x_192_);
v___x_199_ = l_Lean_Syntax_matchesNull(v___x_198_, v___x_177_);
if (v___x_199_ == 0)
{
lean_dec(v_attr_196_);
v___y_180_ = v_v_176_;
goto v___jp_179_;
}
else
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; 
v___x_200_ = l_Lean_TSyntax_getId(v_attr_196_);
v___x_201_ = l_Lean_Name_eraseMacroScopes(v___x_200_);
lean_dec(v___x_200_);
v___x_202_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__11));
v___x_203_ = lean_name_eq(v___x_201_, v___x_202_);
lean_dec(v___x_201_);
if (v___x_203_ == 0)
{
lean_dec(v_attr_196_);
v___y_180_ = v_v_176_;
goto v___jp_179_;
}
else
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
lean_dec(v_v_176_);
v___x_204_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0);
v___x_205_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_206_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2);
lean_inc(v___x_170_);
v___x_207_ = l_Lean_Syntax_node1(v___x_204_, v___x_205_, v___x_170_);
v___x_208_ = l_Lean_Syntax_node2(v___x_204_, v___x_193_, v_attr_196_, v___x_207_);
v___x_209_ = l_Lean_Syntax_node2(v___x_204_, v___x_175_, v___x_206_, v___x_208_);
v___y_180_ = v___x_209_;
goto v___jp_179_;
}
}
}
}
}
}
}
v___jp_179_:
{
size_t v___x_181_; size_t v___x_182_; lean_object* v___x_183_; 
v___x_181_ = ((size_t)1ULL);
v___x_182_ = lean_usize_add(v_i_172_, v___x_181_);
v___x_183_ = lean_array_uset(v_bs_x27_178_, v_i_172_, v___y_180_);
v_i_172_ = v___x_182_;
v_bs_173_ = v___x_183_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___boxed(lean_object* v___x_210_, lean_object* v_sz_211_, lean_object* v_i_212_, lean_object* v_bs_213_){
_start:
{
size_t v_sz_boxed_214_; size_t v_i_boxed_215_; lean_object* v_res_216_; 
v_sz_boxed_214_ = lean_unbox_usize(v_sz_211_);
lean_dec(v_sz_211_);
v_i_boxed_215_ = lean_unbox_usize(v_i_212_);
lean_dec(v_i_212_);
v_res_216_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1(v___x_210_, v_sz_boxed_214_, v_i_boxed_215_, v_bs_213_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addInheritDocDefault(lean_object* v_rhs_224_, lean_object* v_attrs_x3f_225_){
_start:
{
if (lean_obj_tag(v_attrs_x3f_225_) == 0)
{
lean_dec(v_rhs_224_);
return v_attrs_x3f_225_;
}
else
{
lean_object* v_val_226_; lean_object* v___x_227_; uint8_t v___x_228_; 
v_val_226_ = lean_ctor_get(v_attrs_x3f_225_, 0);
v___x_227_ = ((lean_object*)(l_Lean_Elab_Command_addInheritDocDefault___closed__1));
lean_inc(v_rhs_224_);
v___x_228_ = l_Lean_Syntax_isOfKind(v_rhs_224_, v___x_227_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; uint8_t v___x_230_; 
v___x_229_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v_rhs_224_);
v___x_230_ = l_Lean_Syntax_isOfKind(v_rhs_224_, v___x_229_);
if (v___x_230_ == 0)
{
lean_dec(v_rhs_224_);
return v_attrs_x3f_225_;
}
else
{
lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_243_; 
lean_inc(v_val_226_);
v_isSharedCheck_243_ = !lean_is_exclusive(v_attrs_x3f_225_);
if (v_isSharedCheck_243_ == 0)
{
lean_object* v_unused_244_; 
v_unused_244_ = lean_ctor_get(v_attrs_x3f_225_, 0);
lean_dec(v_unused_244_);
v___x_232_ = v_attrs_x3f_225_;
v_isShared_233_ = v_isSharedCheck_243_;
goto v_resetjp_231_;
}
else
{
lean_dec(v_attrs_x3f_225_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_243_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_234_; lean_object* v___x_235_; size_t v_sz_236_; size_t v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_241_; 
v___x_234_ = ((lean_object*)(l_Lean_Elab_Command_addInheritDocDefault___closed__2));
v___x_235_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_val_226_);
lean_dec(v_val_226_);
v_sz_236_ = lean_array_size(v___x_235_);
v___x_237_ = ((size_t)0ULL);
v___x_238_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0(v___x_228_, v_rhs_224_, v_sz_236_, v___x_237_, v___x_235_);
v___x_239_ = l_Lean_Syntax_SepArray_ofElems(v___x_234_, v___x_238_);
lean_dec_ref(v___x_238_);
if (v_isShared_233_ == 0)
{
lean_ctor_set(v___x_232_, 0, v___x_239_);
v___x_241_ = v___x_232_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_239_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
else
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_245_ = lean_unsigned_to_nat(0u);
v___x_246_ = l_Lean_Syntax_getArg(v_rhs_224_, v___x_245_);
lean_dec(v_rhs_224_);
v___x_247_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v___x_246_);
v___x_248_ = l_Lean_Syntax_isOfKind(v___x_246_, v___x_247_);
if (v___x_248_ == 0)
{
lean_dec(v___x_246_);
return v_attrs_x3f_225_;
}
else
{
lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_261_; 
lean_inc(v_val_226_);
v_isSharedCheck_261_ = !lean_is_exclusive(v_attrs_x3f_225_);
if (v_isSharedCheck_261_ == 0)
{
lean_object* v_unused_262_; 
v_unused_262_ = lean_ctor_get(v_attrs_x3f_225_, 0);
lean_dec(v_unused_262_);
v___x_250_ = v_attrs_x3f_225_;
v_isShared_251_ = v_isSharedCheck_261_;
goto v_resetjp_249_;
}
else
{
lean_dec(v_attrs_x3f_225_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_261_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_252_; lean_object* v___x_253_; size_t v_sz_254_; size_t v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_259_; 
v___x_252_ = ((lean_object*)(l_Lean_Elab_Command_addInheritDocDefault___closed__2));
v___x_253_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_val_226_);
lean_dec(v_val_226_);
v_sz_254_ = lean_array_size(v___x_253_);
v___x_255_ = ((size_t)0ULL);
v___x_256_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1(v___x_246_, v_sz_254_, v___x_255_, v___x_253_);
v___x_257_ = l_Lean_Syntax_SepArray_ofElems(v___x_252_, v___x_256_);
lean_dec_ref(v___x_256_);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 0, v___x_257_);
v___x_259_ = v___x_250_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_257_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__2));
v___x_271_ = l_String_toRawSubstring_x27(v___x_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem(lean_object* v_x_302_, lean_object* v_a_303_, lean_object* v_a_304_){
_start:
{
lean_object* v___y_306_; lean_object* v___y_307_; lean_object* v___y_308_; lean_object* v___y_309_; lean_object* v___y_310_; lean_object* v___y_311_; lean_object* v___y_312_; lean_object* v_prec_x3f_318_; lean_object* v___y_319_; lean_object* v___y_320_; lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_341_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10));
lean_inc(v_x_302_);
v___x_342_ = l_Lean_Syntax_isOfKind(v_x_302_, v___x_341_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; uint8_t v___x_344_; 
v___x_343_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12));
lean_inc(v_x_302_);
v___x_344_ = l_Lean_Syntax_isOfKind(v_x_302_, v___x_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; uint8_t v___x_346_; 
v___x_345_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14));
lean_inc(v_x_302_);
v___x_346_ = l_Lean_Syntax_isOfKind(v_x_302_, v___x_345_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; 
lean_dec(v_x_302_);
v___x_347_ = l_Lean_Macro_throwUnsupported___redArg(v_a_304_);
return v___x_347_;
}
else
{
lean_object* v___x_348_; 
v___x_348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_348_, 0, v_x_302_);
lean_ctor_set(v___x_348_, 1, v_a_304_);
return v___x_348_;
}
}
else
{
lean_object* v_ref_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v_ref_349_ = lean_ctor_get(v_a_303_, 5);
v___x_350_ = l_Lean_SourceInfo_fromRef(v_ref_349_, v___x_342_);
v___x_351_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16));
v___x_352_ = l_Lean_Syntax_node1(v___x_350_, v___x_351_, v_x_302_);
v___x_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
lean_ctor_set(v___x_353_, 1, v_a_304_);
return v___x_353_;
}
}
else
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; uint8_t v___x_357_; 
v___x_354_ = lean_unsigned_to_nat(0u);
v___x_355_ = l_Lean_Syntax_getArg(v_x_302_, v___x_354_);
v___x_356_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
v___x_357_ = l_Lean_Syntax_isOfKind(v___x_355_, v___x_356_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_358_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14));
lean_inc(v_x_302_);
v___x_359_ = l_Lean_Syntax_isOfKind(v_x_302_, v___x_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; 
lean_dec(v_x_302_);
v___x_360_ = l_Lean_Macro_throwUnsupported___redArg(v_a_304_);
return v___x_360_;
}
else
{
lean_object* v___x_361_; 
v___x_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_361_, 0, v_x_302_);
lean_ctor_set(v___x_361_, 1, v_a_304_);
return v___x_361_;
}
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_362_ = lean_unsigned_to_nat(1u);
v___x_363_ = l_Lean_Syntax_getArg(v_x_302_, v___x_362_);
v___x_364_ = l_Lean_Syntax_isNone(v___x_363_);
if (v___x_364_ == 0)
{
uint8_t v___x_365_; 
lean_inc(v___x_363_);
v___x_365_ = l_Lean_Syntax_matchesNull(v___x_363_, v___x_362_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; uint8_t v___x_367_; 
lean_dec(v___x_363_);
v___x_366_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14));
lean_inc(v_x_302_);
v___x_367_ = l_Lean_Syntax_isOfKind(v_x_302_, v___x_366_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; 
lean_dec(v_x_302_);
v___x_368_ = l_Lean_Macro_throwUnsupported___redArg(v_a_304_);
return v___x_368_;
}
else
{
lean_object* v___x_369_; 
v___x_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_369_, 0, v_x_302_);
lean_ctor_set(v___x_369_, 1, v_a_304_);
return v___x_369_;
}
}
else
{
lean_object* v___x_370_; lean_object* v___x_371_; uint8_t v___x_372_; 
v___x_370_ = l_Lean_Syntax_getArg(v___x_363_, v___x_354_);
lean_dec(v___x_363_);
v___x_371_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5));
lean_inc(v___x_370_);
v___x_372_ = l_Lean_Syntax_isOfKind(v___x_370_, v___x_371_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; uint8_t v___x_374_; 
lean_dec(v___x_370_);
v___x_373_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14));
lean_inc(v_x_302_);
v___x_374_ = l_Lean_Syntax_isOfKind(v_x_302_, v___x_373_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; 
lean_dec(v_x_302_);
v___x_375_ = l_Lean_Macro_throwUnsupported___redArg(v_a_304_);
return v___x_375_;
}
else
{
lean_object* v___x_376_; 
v___x_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_376_, 0, v_x_302_);
lean_ctor_set(v___x_376_, 1, v_a_304_);
return v___x_376_;
}
}
else
{
lean_object* v_prec_x3f_377_; lean_object* v___x_378_; 
lean_dec(v_x_302_);
v_prec_x3f_377_ = l_Lean_Syntax_getArg(v___x_370_, v___x_362_);
lean_dec(v___x_370_);
v___x_378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_378_, 0, v_prec_x3f_377_);
v_prec_x3f_318_ = v___x_378_;
v___y_319_ = v_a_303_;
v___y_320_ = v_a_304_;
goto v___jp_317_;
}
}
}
else
{
lean_object* v___x_379_; 
lean_dec(v___x_363_);
lean_dec(v_x_302_);
v___x_379_ = lean_box(0);
v_prec_x3f_318_ = v___x_379_;
v___y_319_ = v_a_303_;
v___y_320_ = v_a_304_;
goto v___jp_317_;
}
}
}
v___jp_305_:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
lean_inc_ref(v___y_311_);
v___x_313_ = l_Array_append___redArg(v___y_311_, v___y_312_);
lean_dec_ref(v___y_312_);
lean_inc(v___y_309_);
lean_inc(v___y_306_);
v___x_314_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_314_, 0, v___y_306_);
lean_ctor_set(v___x_314_, 1, v___y_309_);
lean_ctor_set(v___x_314_, 2, v___x_313_);
lean_inc(v___y_310_);
v___x_315_ = l_Lean_Syntax_node2(v___y_306_, v___y_310_, v___y_308_, v___x_314_);
v___x_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
lean_ctor_set(v___x_316_, 1, v___y_307_);
return v___x_316_;
}
v___jp_317_:
{
lean_object* v_quotContext_321_; lean_object* v_currMacroScope_322_; lean_object* v_ref_323_; uint8_t v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v_quotContext_321_ = lean_ctor_get(v___y_319_, 1);
v_currMacroScope_322_ = lean_ctor_get(v___y_319_, 2);
v_ref_323_ = lean_ctor_get(v___y_319_, 5);
v___x_324_ = 0;
v___x_325_ = l_Lean_SourceInfo_fromRef(v_ref_323_, v___x_324_);
v___x_326_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2));
v___x_327_ = lean_obj_once(&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3, &l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3_once, _init_l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3);
v___x_328_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3));
lean_inc(v_currMacroScope_322_);
lean_inc(v_quotContext_321_);
v___x_329_ = l_Lean_addMacroScope(v_quotContext_321_, v___x_328_, v_currMacroScope_322_);
v___x_330_ = lean_box(0);
lean_inc(v___x_325_);
v___x_331_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_331_, 0, v___x_325_);
lean_ctor_set(v___x_331_, 1, v___x_327_);
lean_ctor_set(v___x_331_, 2, v___x_329_);
lean_ctor_set(v___x_331_, 3, v___x_330_);
v___x_332_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_333_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14);
if (lean_obj_tag(v_prec_x3f_318_) == 1)
{
lean_object* v_val_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v_val_334_ = lean_ctor_get(v_prec_x3f_318_, 0);
lean_inc(v_val_334_);
lean_dec_ref_known(v_prec_x3f_318_, 1);
v___x_335_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5));
v___x_336_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6));
lean_inc_n(v___x_325_, 2);
v___x_337_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_337_, 0, v___x_325_);
lean_ctor_set(v___x_337_, 1, v___x_336_);
v___x_338_ = l_Lean_Syntax_node2(v___x_325_, v___x_335_, v___x_337_, v_val_334_);
v___x_339_ = l_Array_mkArray1___redArg(v___x_338_);
v___y_306_ = v___x_325_;
v___y_307_ = v___y_320_;
v___y_308_ = v___x_331_;
v___y_309_ = v___x_332_;
v___y_310_ = v___x_326_;
v___y_311_ = v___x_333_;
v___y_312_ = v___x_339_;
goto v___jp_305_;
}
else
{
lean_object* v___x_340_; 
lean_dec(v_prec_x3f_318_);
v___x_340_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7));
v___y_306_ = v___x_325_;
v___y_307_ = v___y_320_;
v___y_308_ = v___x_331_;
v___y_309_ = v___x_332_;
v___y_310_ = v___x_326_;
v___y_311_ = v___x_333_;
v___y_312_ = v___x_340_;
goto v___jp_305_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___boxed(lean_object* v_x_380_, lean_object* v_a_381_, lean_object* v_a_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem(v_x_380_, v_a_381_, v_a_382_);
lean_dec_ref(v_a_381_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern___redArg(lean_object* v_stx_384_, lean_object* v_a_385_){
_start:
{
lean_object* v_k_386_; lean_object* v___x_387_; uint8_t v___x_388_; 
lean_inc(v_stx_384_);
v_k_386_ = l_Lean_Syntax_getKind(v_stx_384_);
v___x_387_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10));
v___x_388_ = lean_name_eq(v_k_386_, v___x_387_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_389_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12));
v___x_390_ = lean_name_eq(v_k_386_, v___x_389_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; uint8_t v___x_392_; 
v___x_391_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14));
v___x_392_ = lean_name_eq(v_k_386_, v___x_391_);
lean_dec(v_k_386_);
if (v___x_392_ == 0)
{
lean_object* v___x_393_; 
lean_dec(v_stx_384_);
v___x_393_ = l_Lean_Macro_throwUnsupported___redArg(v_a_385_);
return v___x_393_;
}
else
{
lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_394_ = lean_unsigned_to_nat(4u);
v___x_395_ = l_Lean_Syntax_getArg(v_stx_384_, v___x_394_);
v___x_396_ = l_Lean_Syntax_isNone(v___x_395_);
lean_dec(v___x_395_);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_397_ = lean_unsigned_to_nat(3u);
v___x_398_ = l_Lean_Syntax_getArg(v_stx_384_, v___x_397_);
lean_dec(v_stx_384_);
v___x_399_ = l_Lean_Elab_Command_strLitToPattern___redArg(v___x_398_, v_a_385_);
lean_dec(v___x_398_);
return v___x_399_;
}
else
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_400_ = lean_unsigned_to_nat(1u);
v___x_401_ = l_Lean_Syntax_getArg(v_stx_384_, v___x_400_);
lean_dec(v_stx_384_);
v___x_402_ = l_Lean_Elab_Command_strLitToPattern___redArg(v___x_401_, v_a_385_);
lean_dec(v___x_401_);
return v___x_402_;
}
}
}
else
{
lean_object* v___x_403_; 
lean_dec(v_k_386_);
v___x_403_ = l_Lean_Elab_Command_strLitToPattern___redArg(v_stx_384_, v_a_385_);
lean_dec(v_stx_384_);
return v___x_403_;
}
}
else
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
lean_dec(v_k_386_);
v___x_404_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3));
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = l_Lean_Syntax_getArg(v_stx_384_, v___x_405_);
lean_dec(v_stx_384_);
v___x_407_ = lean_box(0);
v___x_408_ = l_Lean_Syntax_mkAntiquotNode(v___x_404_, v___x_406_, v___x_405_, v___x_407_, v___x_388_);
v___x_409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_408_);
lean_ctor_set(v___x_409_, 1, v_a_385_);
return v___x_409_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern(lean_object* v_stx_410_, lean_object* v_a_411_, lean_object* v_a_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_Lean_Elab_Command_expandNotationItemIntoPattern___redArg(v_stx_410_, v_a_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern___boxed(lean_object* v_stx_414_, lean_object* v_a_415_, lean_object* v_a_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lean_Elab_Command_expandNotationItemIntoPattern(v_stx_414_, v_a_415_, v_a_416_);
lean_dec_ref(v_a_415_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParenthesesAux(lean_object* v_parens_418_, lean_object* v_body_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = l_Lean_Syntax_getHeadInfo(v_parens_418_);
if (lean_obj_tag(v___x_420_) == 0)
{
lean_object* v_leading_421_; lean_object* v___x_422_; 
v_leading_421_ = lean_ctor_get(v___x_420_, 0);
lean_inc_ref(v_leading_421_);
lean_dec_ref_known(v___x_420_, 4);
v___x_422_ = l_Lean_Syntax_getHeadInfo(v_body_419_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v_pos_423_; lean_object* v_trailing_424_; lean_object* v_endPos_425_; lean_object* v___x_426_; 
v_pos_423_ = lean_ctor_get(v___x_422_, 1);
lean_inc(v_pos_423_);
v_trailing_424_ = lean_ctor_get(v___x_422_, 2);
lean_inc_ref(v_trailing_424_);
v_endPos_425_ = lean_ctor_get(v___x_422_, 3);
lean_inc(v_endPos_425_);
lean_dec_ref_known(v___x_422_, 4);
v___x_426_ = l_Lean_Syntax_getTailInfo(v_body_419_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_leading_427_; lean_object* v_pos_428_; lean_object* v_endPos_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_450_; 
v_leading_427_ = lean_ctor_get(v___x_426_, 0);
v_pos_428_ = lean_ctor_get(v___x_426_, 1);
v_endPos_429_ = lean_ctor_get(v___x_426_, 3);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_450_ == 0)
{
lean_object* v_unused_451_; 
v_unused_451_ = lean_ctor_get(v___x_426_, 2);
lean_dec(v_unused_451_);
v___x_431_ = v___x_426_;
v_isShared_432_ = v_isSharedCheck_450_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_endPos_429_);
lean_inc(v_pos_428_);
lean_inc(v_leading_427_);
lean_dec(v___x_426_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_450_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_433_; 
v___x_433_ = l_Lean_Syntax_getTailInfo(v_parens_418_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_trailing_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_446_; 
v_trailing_434_ = lean_ctor_get(v___x_433_, 2);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_446_ == 0)
{
lean_object* v_unused_447_; lean_object* v_unused_448_; lean_object* v_unused_449_; 
v_unused_447_ = lean_ctor_get(v___x_433_, 3);
lean_dec(v_unused_447_);
v_unused_448_ = lean_ctor_get(v___x_433_, 1);
lean_dec(v_unused_448_);
v_unused_449_ = lean_ctor_get(v___x_433_, 0);
lean_dec(v_unused_449_);
v___x_436_ = v___x_433_;
v_isShared_437_ = v_isSharedCheck_446_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_trailing_434_);
lean_dec(v___x_433_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_446_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 3, v_endPos_425_);
lean_ctor_set(v___x_436_, 2, v_trailing_424_);
lean_ctor_set(v___x_436_, 1, v_pos_423_);
lean_ctor_set(v___x_436_, 0, v_leading_421_);
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_leading_421_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v_pos_423_);
lean_ctor_set(v_reuseFailAlloc_445_, 2, v_trailing_424_);
lean_ctor_set(v_reuseFailAlloc_445_, 3, v_endPos_425_);
v___x_439_ = v_reuseFailAlloc_445_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
lean_object* v___x_440_; lean_object* v___x_442_; 
v___x_440_ = l_Lean_Syntax_setHeadInfo(v_body_419_, v___x_439_);
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 2, v_trailing_434_);
v___x_442_ = v___x_431_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_leading_427_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v_pos_428_);
lean_ctor_set(v_reuseFailAlloc_444_, 2, v_trailing_434_);
lean_ctor_set(v_reuseFailAlloc_444_, 3, v_endPos_429_);
v___x_442_ = v_reuseFailAlloc_444_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
lean_object* v___x_443_; 
v___x_443_ = l_Lean_Syntax_setTailInfo(v___x_440_, v___x_442_);
return v___x_443_;
}
}
}
}
else
{
lean_dec(v___x_433_);
lean_del_object(v___x_431_);
lean_dec(v_endPos_429_);
lean_dec(v_pos_428_);
lean_dec_ref(v_leading_427_);
lean_dec(v_endPos_425_);
lean_dec_ref(v_trailing_424_);
lean_dec(v_pos_423_);
lean_dec_ref(v_leading_421_);
return v_body_419_;
}
}
}
else
{
lean_dec(v___x_426_);
lean_dec(v_endPos_425_);
lean_dec_ref(v_trailing_424_);
lean_dec(v_pos_423_);
lean_dec_ref(v_leading_421_);
return v_body_419_;
}
}
else
{
lean_dec(v___x_422_);
lean_dec_ref(v_leading_421_);
return v_body_419_;
}
}
else
{
lean_dec(v___x_420_);
return v_body_419_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParenthesesAux___boxed(lean_object* v_parens_452_, lean_object* v_body_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lean_Elab_Command_removeParenthesesAux(v_parens_452_, v_body_453_);
lean_dec(v_parens_452_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParentheses(lean_object* v_stx_470_, lean_object* v_a_471_, lean_object* v_a_472_){
_start:
{
lean_object* v___x_473_; uint8_t v___x_474_; 
v___x_473_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___closed__1));
lean_inc(v_stx_470_);
v___x_474_ = l_Lean_Syntax_isOfKind(v_stx_470_, v___x_473_);
if (v___x_474_ == 0)
{
if (lean_obj_tag(v_stx_470_) == 1)
{
lean_object* v_info_475_; lean_object* v_kind_476_; lean_object* v_args_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_505_; 
v_info_475_ = lean_ctor_get(v_stx_470_, 0);
v_kind_476_ = lean_ctor_get(v_stx_470_, 1);
v_args_477_ = lean_ctor_get(v_stx_470_, 2);
v_isSharedCheck_505_ = !lean_is_exclusive(v_stx_470_);
if (v_isSharedCheck_505_ == 0)
{
v___x_479_ = v_stx_470_;
v_isShared_480_ = v_isSharedCheck_505_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_args_477_);
lean_inc(v_kind_476_);
lean_inc(v_info_475_);
lean_dec(v_stx_470_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_505_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
size_t v_sz_481_; size_t v___x_482_; lean_object* v___x_483_; 
v_sz_481_ = lean_array_size(v_args_477_);
v___x_482_ = ((size_t)0ULL);
v___x_483_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(v_sz_481_, v___x_482_, v_args_477_, v_a_471_, v_a_472_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_object* v_a_484_; lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_495_; 
v_a_484_ = lean_ctor_get(v___x_483_, 0);
v_a_485_ = lean_ctor_get(v___x_483_, 1);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_495_ == 0)
{
v___x_487_ = v___x_483_;
v_isShared_488_ = v_isSharedCheck_495_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_inc(v_a_484_);
lean_dec(v___x_483_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_495_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 2, v_a_484_);
v___x_490_ = v___x_479_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_info_475_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v_kind_476_);
lean_ctor_set(v_reuseFailAlloc_494_, 2, v_a_484_);
v___x_490_ = v_reuseFailAlloc_494_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
lean_object* v___x_492_; 
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_490_);
v___x_492_ = v___x_487_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_490_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v_a_485_);
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
else
{
lean_object* v_a_496_; lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_504_; 
lean_del_object(v___x_479_);
lean_dec(v_kind_476_);
lean_dec(v_info_475_);
v_a_496_ = lean_ctor_get(v___x_483_, 0);
v_a_497_ = lean_ctor_get(v___x_483_, 1);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_504_ == 0)
{
v___x_499_ = v___x_483_;
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_inc(v_a_496_);
lean_dec(v___x_483_);
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
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_a_496_);
lean_ctor_set(v_reuseFailAlloc_503_, 1, v_a_497_);
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
}
else
{
lean_object* v___x_506_; 
v___x_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_506_, 0, v_stx_470_);
lean_ctor_set(v___x_506_, 1, v_a_472_);
return v___x_506_;
}
}
else
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; uint8_t v___x_510_; 
v___x_507_ = lean_unsigned_to_nat(0u);
v___x_508_ = l_Lean_Syntax_getArg(v_stx_470_, v___x_507_);
v___x_509_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___closed__3));
lean_inc(v___x_508_);
v___x_510_ = l_Lean_Syntax_isOfKind(v___x_508_, v___x_509_);
if (v___x_510_ == 0)
{
lean_dec(v___x_508_);
if (lean_obj_tag(v_stx_470_) == 1)
{
lean_object* v_info_511_; lean_object* v_kind_512_; lean_object* v_args_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_541_; 
v_info_511_ = lean_ctor_get(v_stx_470_, 0);
v_kind_512_ = lean_ctor_get(v_stx_470_, 1);
v_args_513_ = lean_ctor_get(v_stx_470_, 2);
v_isSharedCheck_541_ = !lean_is_exclusive(v_stx_470_);
if (v_isSharedCheck_541_ == 0)
{
v___x_515_ = v_stx_470_;
v_isShared_516_ = v_isSharedCheck_541_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_args_513_);
lean_inc(v_kind_512_);
lean_inc(v_info_511_);
lean_dec(v_stx_470_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_541_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
size_t v_sz_517_; size_t v___x_518_; lean_object* v___x_519_; 
v_sz_517_ = lean_array_size(v_args_513_);
v___x_518_ = ((size_t)0ULL);
v___x_519_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(v_sz_517_, v___x_518_, v_args_513_, v_a_471_, v_a_472_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v_a_520_; lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_531_; 
v_a_520_ = lean_ctor_get(v___x_519_, 0);
v_a_521_ = lean_ctor_get(v___x_519_, 1);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_531_ == 0)
{
v___x_523_ = v___x_519_;
v_isShared_524_ = v_isSharedCheck_531_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_inc(v_a_520_);
lean_dec(v___x_519_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_531_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 2, v_a_520_);
v___x_526_ = v___x_515_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_info_511_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v_kind_512_);
lean_ctor_set(v_reuseFailAlloc_530_, 2, v_a_520_);
v___x_526_ = v_reuseFailAlloc_530_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
lean_object* v___x_528_; 
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 0, v___x_526_);
v___x_528_ = v___x_523_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_529_, 1, v_a_521_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
else
{
lean_object* v_a_532_; lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_540_; 
lean_del_object(v___x_515_);
lean_dec(v_kind_512_);
lean_dec(v_info_511_);
v_a_532_ = lean_ctor_get(v___x_519_, 0);
v_a_533_ = lean_ctor_get(v___x_519_, 1);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_540_ == 0)
{
v___x_535_ = v___x_519_;
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_inc(v_a_532_);
lean_dec(v___x_519_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_538_; 
if (v_isShared_536_ == 0)
{
v___x_538_ = v___x_535_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_a_532_);
lean_ctor_set(v_reuseFailAlloc_539_, 1, v_a_533_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
}
else
{
lean_object* v___x_542_; 
v___x_542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_542_, 0, v_stx_470_);
lean_ctor_set(v___x_542_, 1, v_a_472_);
return v___x_542_;
}
}
else
{
lean_object* v___x_543_; lean_object* v_h_544_; lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_543_ = lean_unsigned_to_nat(1u);
v_h_544_ = l_Lean_Syntax_getArg(v___x_508_, v___x_543_);
lean_dec(v___x_508_);
v___x_545_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___closed__5));
lean_inc(v_h_544_);
v___x_546_ = l_Lean_Syntax_isOfKind(v_h_544_, v___x_545_);
if (v___x_546_ == 0)
{
lean_dec(v_h_544_);
if (lean_obj_tag(v_stx_470_) == 1)
{
lean_object* v_info_547_; lean_object* v_kind_548_; lean_object* v_args_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_577_; 
v_info_547_ = lean_ctor_get(v_stx_470_, 0);
v_kind_548_ = lean_ctor_get(v_stx_470_, 1);
v_args_549_ = lean_ctor_get(v_stx_470_, 2);
v_isSharedCheck_577_ = !lean_is_exclusive(v_stx_470_);
if (v_isSharedCheck_577_ == 0)
{
v___x_551_ = v_stx_470_;
v_isShared_552_ = v_isSharedCheck_577_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_args_549_);
lean_inc(v_kind_548_);
lean_inc(v_info_547_);
lean_dec(v_stx_470_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_577_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
size_t v_sz_553_; size_t v___x_554_; lean_object* v___x_555_; 
v_sz_553_ = lean_array_size(v_args_549_);
v___x_554_ = ((size_t)0ULL);
v___x_555_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(v_sz_553_, v___x_554_, v_args_549_, v_a_471_, v_a_472_);
if (lean_obj_tag(v___x_555_) == 0)
{
lean_object* v_a_556_; lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_567_; 
v_a_556_ = lean_ctor_get(v___x_555_, 0);
v_a_557_ = lean_ctor_get(v___x_555_, 1);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_555_);
if (v_isSharedCheck_567_ == 0)
{
v___x_559_ = v___x_555_;
v_isShared_560_ = v_isSharedCheck_567_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_inc(v_a_556_);
lean_dec(v___x_555_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_567_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 2, v_a_556_);
v___x_562_ = v___x_551_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_info_547_);
lean_ctor_set(v_reuseFailAlloc_566_, 1, v_kind_548_);
lean_ctor_set(v_reuseFailAlloc_566_, 2, v_a_556_);
v___x_562_ = v_reuseFailAlloc_566_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
lean_object* v___x_564_; 
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 0, v___x_562_);
v___x_564_ = v___x_559_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_562_);
lean_ctor_set(v_reuseFailAlloc_565_, 1, v_a_557_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
else
{
lean_object* v_a_568_; lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_576_; 
lean_del_object(v___x_551_);
lean_dec(v_kind_548_);
lean_dec(v_info_547_);
v_a_568_ = lean_ctor_get(v___x_555_, 0);
v_a_569_ = lean_ctor_get(v___x_555_, 1);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_555_);
if (v_isSharedCheck_576_ == 0)
{
v___x_571_ = v___x_555_;
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_inc(v_a_568_);
lean_dec(v___x_555_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_a_568_);
lean_ctor_set(v_reuseFailAlloc_575_, 1, v_a_569_);
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
v___x_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_578_, 0, v_stx_470_);
lean_ctor_set(v___x_578_, 1, v_a_472_);
return v___x_578_;
}
}
else
{
lean_object* v_e_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v_e_579_ = l_Lean_Syntax_getArg(v_stx_470_, v___x_543_);
v___x_580_ = l_Lean_TSyntax_getHygieneInfo(v_h_544_);
lean_dec(v_h_544_);
v___x_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
lean_inc(v_e_579_);
v___x_582_ = l_Lean_Elab_Term_expandCDot_x3f(v_e_579_, v___x_581_, v_a_471_, v_a_472_);
lean_dec_ref_known(v___x_581_, 1);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v_a_583_; lean_object* v_a_584_; lean_object* v___y_586_; 
v_a_583_ = lean_ctor_get(v___x_582_, 0);
lean_inc(v_a_583_);
v_a_584_ = lean_ctor_get(v___x_582_, 1);
lean_inc(v_a_584_);
lean_dec_ref_known(v___x_582_, 2);
if (lean_obj_tag(v_a_583_) == 0)
{
v___y_586_ = v_e_579_;
goto v___jp_585_;
}
else
{
lean_object* v_val_598_; 
lean_dec(v_e_579_);
v_val_598_ = lean_ctor_get(v_a_583_, 0);
lean_inc(v_val_598_);
lean_dec_ref_known(v_a_583_, 1);
v___y_586_ = v_val_598_;
goto v___jp_585_;
}
v___jp_585_:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_Elab_Command_removeParentheses(v___y_586_, v_a_471_, v_a_584_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_597_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
v_a_589_ = lean_ctor_get(v___x_587_, 1);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_597_ == 0)
{
v___x_591_ = v___x_587_;
v_isShared_592_ = v_isSharedCheck_597_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_inc(v_a_588_);
lean_dec(v___x_587_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_597_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_593_; lean_object* v___x_595_; 
v___x_593_ = l_Lean_Elab_Command_removeParenthesesAux(v_stx_470_, v_a_588_);
lean_dec(v_stx_470_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 0, v___x_593_);
v___x_595_ = v___x_591_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v___x_593_);
lean_ctor_set(v_reuseFailAlloc_596_, 1, v_a_589_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
else
{
lean_dec(v_stx_470_);
return v___x_587_;
}
}
}
else
{
lean_object* v_a_599_; lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_607_; 
lean_dec(v_e_579_);
lean_dec(v_stx_470_);
v_a_599_ = lean_ctor_get(v___x_582_, 0);
v_a_600_ = lean_ctor_get(v___x_582_, 1);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_607_ == 0)
{
v___x_602_ = v___x_582_;
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_inc(v_a_599_);
lean_dec(v___x_582_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_605_; 
if (v_isShared_603_ == 0)
{
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_a_599_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_a_600_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(size_t v_sz_608_, size_t v_i_609_, lean_object* v_bs_610_, lean_object* v___y_611_, lean_object* v___y_612_){
_start:
{
uint8_t v___x_613_; 
v___x_613_ = lean_usize_dec_lt(v_i_609_, v_sz_608_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; 
v___x_614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_614_, 0, v_bs_610_);
lean_ctor_set(v___x_614_, 1, v___y_612_);
return v___x_614_;
}
else
{
lean_object* v_v_615_; lean_object* v___x_616_; 
v_v_615_ = lean_array_uget_borrowed(v_bs_610_, v_i_609_);
lean_inc(v_v_615_);
v___x_616_ = l_Lean_Elab_Command_removeParentheses(v_v_615_, v___y_611_, v___y_612_);
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v_a_617_; lean_object* v_a_618_; lean_object* v___x_619_; lean_object* v_bs_x27_620_; size_t v___x_621_; size_t v___x_622_; lean_object* v___x_623_; 
v_a_617_ = lean_ctor_get(v___x_616_, 0);
lean_inc(v_a_617_);
v_a_618_ = lean_ctor_get(v___x_616_, 1);
lean_inc(v_a_618_);
lean_dec_ref_known(v___x_616_, 2);
v___x_619_ = lean_unsigned_to_nat(0u);
v_bs_x27_620_ = lean_array_uset(v_bs_610_, v_i_609_, v___x_619_);
v___x_621_ = ((size_t)1ULL);
v___x_622_ = lean_usize_add(v_i_609_, v___x_621_);
v___x_623_ = lean_array_uset(v_bs_x27_620_, v_i_609_, v_a_617_);
v_i_609_ = v___x_622_;
v_bs_610_ = v___x_623_;
v___y_612_ = v_a_618_;
goto _start;
}
else
{
lean_object* v_a_625_; lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
lean_dec_ref(v_bs_610_);
v_a_625_ = lean_ctor_get(v___x_616_, 0);
v_a_626_ = lean_ctor_get(v___x_616_, 1);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_616_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_inc(v_a_625_);
lean_dec(v___x_616_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_625_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v_a_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0___boxed(lean_object* v_sz_634_, lean_object* v_i_635_, lean_object* v_bs_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
size_t v_sz_boxed_639_; size_t v_i_boxed_640_; lean_object* v_res_641_; 
v_sz_boxed_639_ = lean_unbox_usize(v_sz_634_);
lean_dec(v_sz_634_);
v_i_boxed_640_ = lean_unbox_usize(v_i_635_);
lean_dec(v_i_635_);
v_res_641_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(v_sz_boxed_639_, v_i_boxed_640_, v_bs_636_, v___y_637_, v___y_638_);
lean_dec_ref(v___y_637_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParentheses___boxed(lean_object* v_stx_642_, lean_object* v_a_643_, lean_object* v_a_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Lean_Elab_Command_removeParentheses(v_stx_642_, v_a_643_, v_a_644_);
lean_dec_ref(v_a_643_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0(lean_object* v___x_649_, uint8_t v_firstChoiceOnly_650_, lean_object* v_stx_651_, lean_object* v_b_652_){
_start:
{
lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v_snd_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_701_; 
v_snd_665_ = lean_ctor_get(v_b_652_, 1);
v_isSharedCheck_701_ = !lean_is_exclusive(v_b_652_);
if (v_isSharedCheck_701_ == 0)
{
lean_object* v_unused_702_; 
v_unused_702_ = lean_ctor_get(v_b_652_, 0);
lean_dec(v_unused_702_);
v___x_667_ = v_b_652_;
v_isShared_668_ = v_isSharedCheck_701_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_snd_665_);
lean_dec(v_b_652_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_701_;
goto v_resetjp_666_;
}
v___jp_653_:
{
lean_object* v___x_656_; lean_object* v___x_657_; size_t v_sz_658_; size_t v___x_659_; lean_object* v___x_660_; lean_object* v_fst_661_; 
v___x_656_ = lean_box(0);
v___x_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
lean_ctor_set(v___x_657_, 1, v___y_655_);
v_sz_658_ = lean_array_size(v___y_654_);
v___x_659_ = ((size_t)0ULL);
v___x_660_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0(v___x_649_, v_firstChoiceOnly_650_, v___y_654_, v_sz_658_, v___x_659_, v___x_657_);
v_fst_661_ = lean_ctor_get(v___x_660_, 0);
if (lean_obj_tag(v_fst_661_) == 0)
{
lean_object* v_snd_662_; lean_object* v___x_663_; 
v_snd_662_ = lean_ctor_get(v___x_660_, 1);
lean_inc(v_snd_662_);
lean_dec_ref(v___x_660_);
v___x_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_663_, 0, v_snd_662_);
return v___x_663_;
}
else
{
lean_object* v_val_664_; 
lean_inc_ref(v_fst_661_);
lean_dec_ref(v___x_660_);
v_val_664_ = lean_ctor_get(v_fst_661_, 0);
lean_inc(v_val_664_);
lean_dec_ref_known(v_fst_661_, 1);
return v_val_664_;
}
}
v_resetjp_666_:
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___y_672_; lean_object* v_a_673_; uint8_t v___x_682_; 
v___x_669_ = lean_box(0);
v___x_670_ = lean_box(0);
v___x_682_ = l_Lean_Syntax_isAntiquot(v_stx_651_);
if (v___x_682_ == 0)
{
lean_object* v___x_684_; 
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 0, v___x_669_);
v___x_684_ = v___x_667_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_669_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v_snd_665_);
v___x_684_ = v_reuseFailAlloc_686_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
lean_object* v___x_685_; 
lean_inc_ref(v___x_684_);
v___x_685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
v___y_672_ = v___x_685_;
v_a_673_ = v___x_684_;
goto v___jp_671_;
}
}
else
{
lean_object* v___x_687_; lean_object* v___x_688_; uint8_t v___x_689_; 
v___x_687_ = l_Lean_Syntax_getAntiquotTerm(v_stx_651_);
v___x_688_ = l_Lean_Syntax_getId(v___x_687_);
lean_dec(v___x_687_);
v___x_689_ = l_Lean_NameSet_contains(v_snd_665_, v___x_688_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; lean_object* v___x_692_; 
v___x_690_ = l_Lean_NameSet_insert(v_snd_665_, v___x_688_);
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 1, v___x_690_);
lean_ctor_set(v___x_667_, 0, v___x_669_);
v___x_692_ = v___x_667_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v___x_669_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v___x_690_);
v___x_692_ = v_reuseFailAlloc_694_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
lean_object* v___x_693_; 
lean_inc_ref(v___x_692_);
v___x_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
v___y_672_ = v___x_693_;
v_a_673_ = v___x_692_;
goto v___jp_671_;
}
}
else
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_698_; 
lean_dec(v___x_688_);
v___x_695_ = lean_box(v___x_689_);
v___x_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_696_, 0, v___x_695_);
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 0, v___x_696_);
v___x_698_ = v___x_667_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_696_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v_snd_665_);
v___x_698_ = v_reuseFailAlloc_700_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
lean_object* v___x_699_; 
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
return v___x_699_;
}
}
}
v___jp_671_:
{
if (lean_obj_tag(v_stx_651_) == 1)
{
lean_dec_ref(v___y_672_);
if (v_firstChoiceOnly_650_ == 0)
{
lean_object* v_args_674_; 
v_args_674_ = lean_ctor_get(v_stx_651_, 2);
v___y_654_ = v_args_674_;
v___y_655_ = v_a_673_;
goto v___jp_653_;
}
else
{
lean_object* v_kind_675_; lean_object* v_args_676_; lean_object* v___x_677_; uint8_t v___x_678_; 
v_kind_675_ = lean_ctor_get(v_stx_651_, 1);
v_args_676_ = lean_ctor_get(v_stx_651_, 2);
v___x_677_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__1));
v___x_678_ = lean_name_eq(v_kind_675_, v___x_677_);
if (v___x_678_ == 0)
{
v___y_654_ = v_args_676_;
v___y_655_ = v_a_673_;
goto v___jp_653_;
}
else
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = lean_unsigned_to_nat(0u);
v___x_680_ = lean_array_get_borrowed(v___x_670_, v_args_676_, v___x_679_);
v_stx_651_ = v___x_680_;
v_b_652_ = v_a_673_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_a_673_);
return v___y_672_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0(lean_object* v___x_703_, uint8_t v_firstChoiceOnly_704_, lean_object* v_as_705_, size_t v_sz_706_, size_t v_i_707_, lean_object* v_b_708_){
_start:
{
uint8_t v___x_709_; 
v___x_709_ = lean_usize_dec_lt(v_i_707_, v_sz_706_);
if (v___x_709_ == 0)
{
return v_b_708_;
}
else
{
lean_object* v_snd_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_728_; 
v_snd_710_ = lean_ctor_get(v_b_708_, 1);
v_isSharedCheck_728_ = !lean_is_exclusive(v_b_708_);
if (v_isSharedCheck_728_ == 0)
{
lean_object* v_unused_729_; 
v_unused_729_ = lean_ctor_get(v_b_708_, 0);
lean_dec(v_unused_729_);
v___x_712_ = v_b_708_;
v_isShared_713_ = v_isSharedCheck_728_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_snd_710_);
lean_dec(v_b_708_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_728_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v_a_714_; lean_object* v___x_715_; 
v_a_714_ = lean_array_uget_borrowed(v_as_705_, v_i_707_);
lean_inc(v_snd_710_);
v___x_715_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0(v___x_703_, v_firstChoiceOnly_704_, v_a_714_, v_snd_710_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v___x_716_; lean_object* v___x_718_; 
v___x_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_716_, 0, v___x_715_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 0, v___x_716_);
v___x_718_ = v___x_712_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_719_, 1, v_snd_710_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
else
{
lean_object* v_a_720_; lean_object* v___x_721_; lean_object* v___x_723_; 
lean_dec(v_snd_710_);
v_a_720_ = lean_ctor_get(v___x_715_, 0);
lean_inc(v_a_720_);
lean_dec_ref_known(v___x_715_, 1);
v___x_721_ = lean_box(0);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 1, v_a_720_);
lean_ctor_set(v___x_712_, 0, v___x_721_);
v___x_723_ = v___x_712_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v___x_721_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_a_720_);
v___x_723_ = v_reuseFailAlloc_727_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
size_t v___x_724_; size_t v___x_725_; 
v___x_724_ = ((size_t)1ULL);
v___x_725_ = lean_usize_add(v_i_707_, v___x_724_);
v_i_707_ = v___x_725_;
v_b_708_ = v___x_723_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0___boxed(lean_object* v___x_730_, lean_object* v_firstChoiceOnly_731_, lean_object* v_as_732_, lean_object* v_sz_733_, lean_object* v_i_734_, lean_object* v_b_735_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_736_; size_t v_sz_boxed_737_; size_t v_i_boxed_738_; lean_object* v_res_739_; 
v_firstChoiceOnly_boxed_736_ = lean_unbox(v_firstChoiceOnly_731_);
v_sz_boxed_737_ = lean_unbox_usize(v_sz_733_);
lean_dec(v_sz_733_);
v_i_boxed_738_ = lean_unbox_usize(v_i_734_);
lean_dec(v_i_734_);
v_res_739_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0(v___x_730_, v_firstChoiceOnly_boxed_736_, v_as_732_, v_sz_boxed_737_, v_i_boxed_738_, v_b_735_);
lean_dec_ref(v_as_732_);
lean_dec_ref(v___x_730_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___boxed(lean_object* v___x_740_, lean_object* v_firstChoiceOnly_741_, lean_object* v_stx_742_, lean_object* v_b_743_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_744_; lean_object* v_res_745_; 
v_firstChoiceOnly_boxed_744_ = lean_unbox(v_firstChoiceOnly_741_);
v_res_745_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0(v___x_740_, v_firstChoiceOnly_boxed_744_, v_stx_742_, v_b_743_);
lean_dec(v_stx_742_);
lean_dec_ref(v___x_740_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1(lean_object* v_as_746_, size_t v_sz_747_, size_t v_i_748_, lean_object* v_b_749_){
_start:
{
uint8_t v___x_750_; 
v___x_750_ = lean_usize_dec_lt(v_i_748_, v_sz_747_);
if (v___x_750_ == 0)
{
return v_b_749_;
}
else
{
lean_object* v_snd_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_789_; 
v_snd_751_ = lean_ctor_get(v_b_749_, 1);
v_isSharedCheck_789_ = !lean_is_exclusive(v_b_749_);
if (v_isSharedCheck_789_ == 0)
{
lean_object* v_unused_790_; 
v_unused_790_ = lean_ctor_get(v_b_749_, 0);
lean_dec(v_unused_790_);
v___x_753_ = v_b_749_;
v_isShared_754_ = v_isSharedCheck_789_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_snd_751_);
lean_dec(v_b_749_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_789_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v_a_755_; lean_object* v___x_756_; uint8_t v_firstChoiceOnly_757_; lean_object* v_stx_758_; lean_object* v___x_759_; lean_object* v___y_761_; lean_object* v___x_785_; 
v_a_755_ = lean_array_uget_borrowed(v_as_746_, v_i_748_);
lean_inc(v_a_755_);
v___x_756_ = l_Lean_Syntax_topDown(v_a_755_, v___x_750_);
v_firstChoiceOnly_757_ = lean_ctor_get_uint8(v___x_756_, sizeof(void*)*1);
v_stx_758_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_stx_758_);
lean_dec_ref(v___x_756_);
v___x_759_ = lean_box(0);
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 0, v___x_759_);
v___x_785_ = v___x_753_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_759_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v_snd_751_);
v___x_785_ = v_reuseFailAlloc_788_;
goto v_reusejp_784_;
}
v___jp_760_:
{
lean_object* v_fst_762_; 
v_fst_762_ = lean_ctor_get(v___y_761_, 0);
if (lean_obj_tag(v_fst_762_) == 0)
{
lean_object* v_snd_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_773_; 
v_snd_763_ = lean_ctor_get(v___y_761_, 1);
v_isSharedCheck_773_ = !lean_is_exclusive(v___y_761_);
if (v_isSharedCheck_773_ == 0)
{
lean_object* v_unused_774_; 
v_unused_774_ = lean_ctor_get(v___y_761_, 0);
lean_dec(v_unused_774_);
v___x_765_ = v___y_761_;
v_isShared_766_ = v_isSharedCheck_773_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_snd_763_);
lean_dec(v___y_761_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_773_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 0, v___x_759_);
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_759_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_snd_763_);
v___x_768_ = v_reuseFailAlloc_772_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
size_t v___x_769_; size_t v___x_770_; 
v___x_769_ = ((size_t)1ULL);
v___x_770_ = lean_usize_add(v_i_748_, v___x_769_);
v_i_748_ = v___x_770_;
v_b_749_ = v___x_768_;
goto _start;
}
}
}
else
{
lean_object* v_snd_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
lean_inc_ref(v_fst_762_);
v_snd_775_ = lean_ctor_get(v___y_761_, 1);
v_isSharedCheck_782_ = !lean_is_exclusive(v___y_761_);
if (v_isSharedCheck_782_ == 0)
{
lean_object* v_unused_783_; 
v_unused_783_ = lean_ctor_get(v___y_761_, 0);
lean_dec(v_unused_783_);
v___x_777_ = v___y_761_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_snd_775_);
lean_dec(v___y_761_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_fst_762_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_snd_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
v_reusejp_784_:
{
lean_object* v___x_786_; lean_object* v_a_787_; 
lean_inc_ref(v___x_785_);
v___x_786_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0(v___x_785_, v_firstChoiceOnly_757_, v_stx_758_, v___x_785_);
lean_dec(v_stx_758_);
lean_dec_ref(v___x_785_);
v_a_787_ = lean_ctor_get(v___x_786_, 0);
lean_inc(v_a_787_);
lean_dec_ref(v___x_786_);
v___y_761_ = v_a_787_;
goto v___jp_760_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1___boxed(lean_object* v_as_791_, lean_object* v_sz_792_, lean_object* v_i_793_, lean_object* v_b_794_){
_start:
{
size_t v_sz_boxed_795_; size_t v_i_boxed_796_; lean_object* v_res_797_; 
v_sz_boxed_795_ = lean_unbox_usize(v_sz_792_);
lean_dec(v_sz_792_);
v_i_boxed_796_ = lean_unbox_usize(v_i_793_);
lean_dec(v_i_793_);
v_res_797_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1(v_as_791_, v_sz_boxed_795_, v_i_boxed_796_, v_b_794_);
lean_dec_ref(v_as_791_);
return v_res_797_;
}
}
static lean_object* _init_l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0(void){
_start:
{
lean_object* v_seen_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v_seen_798_ = l_Lean_NameSet_empty;
v___x_799_ = lean_box(0);
v___x_800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_800_, 0, v___x_799_);
lean_ctor_set(v___x_800_, 1, v_seen_798_);
return v___x_800_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Command_hasDuplicateAntiquot(lean_object* v_stxs_801_){
_start:
{
lean_object* v___x_802_; size_t v_sz_803_; size_t v___x_804_; lean_object* v___x_805_; lean_object* v_fst_806_; 
v___x_802_ = lean_obj_once(&l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0, &l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0_once, _init_l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0);
v_sz_803_ = lean_array_size(v_stxs_801_);
v___x_804_ = ((size_t)0ULL);
v___x_805_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1(v_stxs_801_, v_sz_803_, v___x_804_, v___x_802_);
v_fst_806_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_fst_806_);
lean_dec_ref(v___x_805_);
if (lean_obj_tag(v_fst_806_) == 0)
{
uint8_t v___x_807_; 
v___x_807_ = 0;
return v___x_807_;
}
else
{
lean_object* v_val_808_; uint8_t v___x_809_; 
v_val_808_ = lean_ctor_get(v_fst_806_, 0);
lean_inc(v_val_808_);
lean_dec_ref_known(v_fst_806_, 1);
v___x_809_ = lean_unbox(v_val_808_);
lean_dec(v_val_808_);
return v___x_809_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_hasDuplicateAntiquot___boxed(lean_object* v_stxs_810_){
_start:
{
uint8_t v_res_811_; lean_object* v_r_812_; 
v_res_811_ = l_Lean_Elab_Command_hasDuplicateAntiquot(v_stxs_810_);
lean_dec_ref(v_stxs_810_);
v_r_812_ = lean_box(v_res_811_);
return v_r_812_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__4(void){
_start:
{
lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_819_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__3));
v___x_820_ = l_String_toRawSubstring_x27(v___x_819_);
return v___x_820_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__15(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_841_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__14));
v___x_842_ = l_String_toRawSubstring_x27(v___x_841_);
return v___x_842_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__19(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__18));
v___x_848_ = l_String_toRawSubstring_x27(v___x_847_);
return v___x_848_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__22(void){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_852_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__21));
v___x_853_ = l_String_toRawSubstring_x27(v___x_852_);
return v___x_853_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__40(void){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__39));
v___x_891_ = l_String_toRawSubstring_x27(v___x_890_);
return v___x_891_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__47(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__46));
v___x_906_ = l_String_toRawSubstring_x27(v___x_905_);
return v___x_906_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__55(void){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_921_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__54));
v___x_922_ = l_String_toRawSubstring_x27(v___x_921_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkUnexpander(lean_object* v_attrKind_960_, lean_object* v_pat_961_, lean_object* v_qrhs_962_, lean_object* v_a_963_, lean_object* v_a_964_){
_start:
{
lean_object* v___y_966_; lean_object* v_fst_970_; lean_object* v_snd_971_; lean_object* v___y_972_; lean_object* v___y_973_; lean_object* v___x_1166_; uint8_t v___x_1167_; 
v___x_1166_ = ((lean_object*)(l_Lean_Elab_Command_addInheritDocDefault___closed__1));
lean_inc(v_qrhs_962_);
v___x_1167_ = l_Lean_Syntax_isOfKind(v_qrhs_962_, v___x_1166_);
if (v___x_1167_ == 0)
{
lean_object* v___x_1168_; uint8_t v___x_1169_; 
v___x_1168_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v_qrhs_962_);
v___x_1169_ = l_Lean_Syntax_isOfKind(v_qrhs_962_, v___x_1168_);
if (v___x_1169_ == 0)
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
lean_dec(v_qrhs_962_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v___x_1170_ = lean_box(0);
v___x_1171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1170_);
lean_ctor_set(v___x_1171_, 1, v_a_964_);
return v___x_1171_;
}
else
{
lean_object* v___x_1172_; 
v___x_1172_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__68));
v_fst_970_ = v_qrhs_962_;
v_snd_971_ = v___x_1172_;
v___y_972_ = v_a_963_;
v___y_973_ = v_a_964_;
goto v___jp_969_;
}
}
else
{
lean_object* v___x_1173_; lean_object* v_c_1174_; lean_object* v___x_1175_; uint8_t v___x_1176_; 
v___x_1173_ = lean_unsigned_to_nat(0u);
v_c_1174_ = l_Lean_Syntax_getArg(v_qrhs_962_, v___x_1173_);
v___x_1175_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v_c_1174_);
v___x_1176_ = l_Lean_Syntax_isOfKind(v_c_1174_, v___x_1175_);
if (v___x_1176_ == 0)
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
lean_dec(v_c_1174_);
lean_dec(v_qrhs_962_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v___x_1177_ = lean_box(0);
v___x_1178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
lean_ctor_set(v___x_1178_, 1, v_a_964_);
return v___x_1178_;
}
else
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v_args_1181_; 
v___x_1179_ = lean_unsigned_to_nat(1u);
v___x_1180_ = l_Lean_Syntax_getArg(v_qrhs_962_, v___x_1179_);
lean_dec(v_qrhs_962_);
v_args_1181_ = l_Lean_Syntax_getArgs(v___x_1180_);
lean_dec(v___x_1180_);
v_fst_970_ = v_c_1174_;
v_snd_971_ = v_args_1181_;
v___y_972_ = v_a_963_;
v___y_973_ = v_a_964_;
goto v___jp_969_;
}
}
v___jp_965_:
{
lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_967_ = lean_box(0);
v___x_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
lean_ctor_set(v___x_968_, 1, v___y_966_);
return v___x_968_;
}
v___jp_969_:
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = l_Lean_TSyntax_getId(v_fst_970_);
lean_dec(v_fst_970_);
v___x_975_ = l_Lean_Macro_resolveGlobalName(v___x_974_, v___y_972_, v___y_973_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v_a_976_; 
v_a_976_ = lean_ctor_get(v___x_975_, 0);
lean_inc(v_a_976_);
if (lean_obj_tag(v_a_976_) == 1)
{
lean_object* v_head_977_; lean_object* v_snd_978_; 
v_head_977_ = lean_ctor_get(v_a_976_, 0);
lean_inc(v_head_977_);
v_snd_978_ = lean_ctor_get(v_head_977_, 1);
lean_inc(v_snd_978_);
if (lean_obj_tag(v_snd_978_) == 0)
{
lean_object* v_tail_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_1153_; 
v_tail_979_ = lean_ctor_get(v_a_976_, 1);
v_isSharedCheck_1153_ = !lean_is_exclusive(v_a_976_);
if (v_isSharedCheck_1153_ == 0)
{
lean_object* v_unused_1154_; 
v_unused_1154_ = lean_ctor_get(v_a_976_, 0);
lean_dec(v_unused_1154_);
v___x_981_ = v_a_976_;
v_isShared_982_ = v_isSharedCheck_1153_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_tail_979_);
lean_dec(v_a_976_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_1153_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
if (lean_obj_tag(v_tail_979_) == 0)
{
lean_object* v_a_983_; lean_object* v_fst_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_1150_; 
v_a_983_ = lean_ctor_get(v___x_975_, 1);
lean_inc(v_a_983_);
lean_dec_ref_known(v___x_975_, 2);
v_fst_984_ = lean_ctor_get(v_head_977_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v_head_977_);
if (v_isSharedCheck_1150_ == 0)
{
lean_object* v_unused_1151_; 
v_unused_1151_ = lean_ctor_get(v_head_977_, 1);
lean_dec(v_unused_1151_);
v___x_986_ = v_head_977_;
v_isShared_987_ = v_isSharedCheck_1150_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_fst_984_);
lean_dec(v_head_977_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_1150_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
size_t v_sz_988_; size_t v___x_989_; lean_object* v___x_990_; 
v_sz_988_ = lean_array_size(v_snd_971_);
v___x_989_ = ((size_t)0ULL);
v___x_990_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(v_sz_988_, v___x_989_, v_snd_971_, v___y_972_, v_a_983_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1140_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
v_a_992_ = lean_ctor_get(v___x_990_, 1);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_994_ = v___x_990_;
v_isShared_995_ = v_isSharedCheck_1140_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_inc(v_a_991_);
lean_dec(v___x_990_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1140_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
uint8_t v___x_996_; 
v___x_996_ = l_Lean_Elab_Command_hasDuplicateAntiquot(v_a_991_);
if (v___x_996_ == 0)
{
lean_object* v_quotContext_997_; lean_object* v_currMacroScope_998_; lean_object* v_ref_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1005_; 
v_quotContext_997_ = lean_ctor_get(v___y_972_, 1);
v_currMacroScope_998_ = lean_ctor_get(v___y_972_, 2);
v_ref_999_ = lean_ctor_get(v___y_972_, 5);
v___x_1000_ = l_Lean_SourceInfo_fromRef(v_ref_999_, v___x_996_);
v___x_1001_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0));
v___x_1002_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__1));
v___x_1003_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__2));
lean_inc(v___x_1000_);
if (v_isShared_987_ == 0)
{
lean_ctor_set_tag(v___x_986_, 2);
lean_ctor_set(v___x_986_, 1, v___x_1003_);
lean_ctor_set(v___x_986_, 0, v___x_1000_);
v___x_1005_ = v___x_986_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1000_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v___x_1003_);
v___x_1005_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1053_; 
v___x_1006_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_1007_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14);
lean_inc_n(v___x_1000_, 18);
v___x_1008_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1000_);
lean_ctor_set(v___x_1008_, 1, v___x_1006_);
lean_ctor_set(v___x_1008_, 2, v___x_1007_);
v___x_1009_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__4, &l_Lean_Elab_Command_mkUnexpander___closed__4_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__4);
v___x_1010_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__5));
lean_inc_n(v_currMacroScope_998_, 4);
lean_inc_n(v_quotContext_997_, 4);
v___x_1011_ = l_Lean_addMacroScope(v_quotContext_997_, v___x_1010_, v_currMacroScope_998_);
v___x_1012_ = lean_box(0);
v___x_1013_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1000_);
lean_ctor_set(v___x_1013_, 1, v___x_1009_);
lean_ctor_set(v___x_1013_, 2, v___x_1011_);
lean_ctor_set(v___x_1013_, 3, v___x_1012_);
v___x_1014_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__7));
v___x_1015_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6));
v___x_1016_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1000_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
v___x_1017_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1000_);
lean_ctor_set(v___x_1017_, 1, v___x_1001_);
lean_inc_ref(v___x_1016_);
v___x_1018_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1014_, v___x_1016_, v___x_1017_);
lean_inc_ref(v___x_1013_);
lean_inc_ref(v___x_1008_);
v___x_1019_ = l_Lean_Syntax_node4(v___x_1000_, v___x_1002_, v___x_1005_, v___x_1008_, v___x_1013_, v___x_1018_);
v___x_1020_ = l_Lean_Syntax_mkApp(v___x_1019_, v_a_991_);
lean_inc(v_attrKind_960_);
v___x_1021_ = l_Lean_Parser_Command_visibility_ofAttrKind(v_attrKind_960_);
v___x_1022_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__9));
v___x_1023_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__10));
v___x_1024_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__12));
v___x_1025_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__13));
v___x_1026_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1000_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4));
v___x_1028_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9));
v___x_1029_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__15, &l_Lean_Elab_Command_mkUnexpander___closed__15_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__15);
v___x_1030_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__16));
v___x_1031_ = l_Lean_addMacroScope(v_quotContext_997_, v___x_1030_, v_currMacroScope_998_);
v___x_1032_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1000_);
lean_ctor_set(v___x_1032_, 1, v___x_1029_);
lean_ctor_set(v___x_1032_, 2, v___x_1031_);
lean_ctor_set(v___x_1032_, 3, v___x_1012_);
v___x_1033_ = l_Lean_mkIdent(v_fst_984_);
lean_inc(v___x_1033_);
v___x_1034_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1033_);
v___x_1035_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1028_, v___x_1032_, v___x_1034_);
v___x_1036_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1027_, v_attrKind_960_, v___x_1035_);
v___x_1037_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1036_);
v___x_1038_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__17));
v___x_1039_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1000_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
v___x_1040_ = l_Lean_Syntax_node3(v___x_1000_, v___x_1024_, v___x_1026_, v___x_1037_, v___x_1039_);
v___x_1041_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1040_);
v___x_1042_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1000_);
lean_ctor_set(v___x_1042_, 1, v___x_1022_);
v___x_1043_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__19, &l_Lean_Elab_Command_mkUnexpander___closed__19_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__19);
v___x_1044_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__20));
v___x_1045_ = l_Lean_addMacroScope(v_quotContext_997_, v___x_1044_, v_currMacroScope_998_);
v___x_1046_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1000_);
lean_ctor_set(v___x_1046_, 1, v___x_1043_);
lean_ctor_set(v___x_1046_, 2, v___x_1045_);
lean_ctor_set(v___x_1046_, 3, v___x_1012_);
v___x_1047_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1006_, v___x_1046_, v___x_1033_);
v___x_1048_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__22, &l_Lean_Elab_Command_mkUnexpander___closed__22_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__22);
v___x_1049_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__25));
v___x_1050_ = l_Lean_addMacroScope(v_quotContext_997_, v___x_1049_, v_currMacroScope_998_);
v___x_1051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1049_);
lean_ctor_set(v___x_1051_, 1, v_snd_978_);
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 1, v___x_1012_);
lean_ctor_set(v___x_981_, 0, v___x_1051_);
v___x_1053_ = v___x_981_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v___x_1051_);
lean_ctor_set(v_reuseFailAlloc_1134_, 1, v___x_1012_);
v___x_1053_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1132_; 
lean_inc_n(v___x_1000_, 31);
v___x_1054_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1000_);
lean_ctor_set(v___x_1054_, 1, v___x_1048_);
lean_ctor_set(v___x_1054_, 2, v___x_1050_);
lean_ctor_set(v___x_1054_, 3, v___x_1053_);
v___x_1055_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__26));
v___x_1056_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1000_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
v___x_1057_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__27));
v___x_1058_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__28));
v___x_1059_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1000_);
lean_ctor_set(v___x_1059_, 1, v___x_1057_);
v___x_1060_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__30));
v___x_1061_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__32));
v___x_1062_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__33));
v___x_1063_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1000_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
v___x_1064_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__35));
v___x_1065_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__36));
v___x_1066_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1000_);
lean_ctor_set(v___x_1066_, 1, v___x_1065_);
v___x_1067_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__37));
v___x_1068_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1000_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
lean_inc_ref_n(v___x_1068_, 2);
lean_inc_ref(v___x_1066_);
v___x_1069_ = l_Lean_Syntax_node3(v___x_1000_, v___x_1064_, v___x_1066_, v___x_1020_, v___x_1068_);
v___x_1070_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1069_);
v___x_1071_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1070_);
v___x_1072_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__38));
v___x_1073_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1000_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
v___x_1074_ = ((lean_object*)(l_Lean_Elab_Command_addInheritDocDefault___closed__1));
v___x_1075_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__40, &l_Lean_Elab_Command_mkUnexpander___closed__40_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__40);
v___x_1076_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__41));
lean_inc_n(v_currMacroScope_998_, 3);
lean_inc_n(v_quotContext_997_, 3);
v___x_1077_ = l_Lean_addMacroScope(v_quotContext_997_, v___x_1076_, v_currMacroScope_998_);
v___x_1078_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__42));
v___x_1079_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1078_);
lean_ctor_set(v___x_1079_, 1, v_snd_978_);
v___x_1080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1079_);
lean_ctor_set(v___x_1080_, 1, v___x_1012_);
v___x_1081_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1000_);
lean_ctor_set(v___x_1081_, 1, v___x_1075_);
lean_ctor_set(v___x_1081_, 2, v___x_1077_);
lean_ctor_set(v___x_1081_, 3, v___x_1080_);
v___x_1082_ = l_Lean_Syntax_node3(v___x_1000_, v___x_1064_, v___x_1066_, v_pat_961_, v___x_1068_);
v___x_1083_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1006_, v___x_1013_, v___x_1082_);
v___x_1084_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1074_, v___x_1081_, v___x_1083_);
lean_inc_ref(v___x_1073_);
lean_inc_ref(v___x_1063_);
v___x_1085_ = l_Lean_Syntax_node4(v___x_1000_, v___x_1061_, v___x_1063_, v___x_1071_, v___x_1073_, v___x_1084_);
v___x_1086_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__44));
v___x_1087_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__45));
v___x_1088_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1000_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1086_, v___x_1088_);
v___x_1090_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1089_);
v___x_1091_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1090_);
v___x_1092_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__47, &l_Lean_Elab_Command_mkUnexpander___closed__47_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__47);
v___x_1093_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__48));
v___x_1094_ = l_Lean_addMacroScope(v_quotContext_997_, v___x_1093_, v_currMacroScope_998_);
v___x_1095_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__50));
v___x_1096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1095_);
lean_ctor_set(v___x_1096_, 1, v_snd_978_);
v___x_1097_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
lean_ctor_set(v___x_1097_, 1, v___x_1012_);
v___x_1098_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1000_);
lean_ctor_set(v___x_1098_, 1, v___x_1092_);
lean_ctor_set(v___x_1098_, 2, v___x_1094_);
lean_ctor_set(v___x_1098_, 3, v___x_1097_);
v___x_1099_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__52));
v___x_1100_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___closed__3));
v___x_1101_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__53));
v___x_1102_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1000_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___closed__5));
v___x_1104_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__55, &l_Lean_Elab_Command_mkUnexpander___closed__55_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__55);
v___x_1105_ = lean_box(0);
v___x_1106_ = l_Lean_addMacroScope(v_quotContext_997_, v___x_1105_, v_currMacroScope_998_);
v___x_1107_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__67));
v___x_1108_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1000_);
lean_ctor_set(v___x_1108_, 1, v___x_1104_);
lean_ctor_set(v___x_1108_, 2, v___x_1106_);
lean_ctor_set(v___x_1108_, 3, v___x_1107_);
v___x_1109_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1103_, v___x_1108_);
v___x_1110_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1100_, v___x_1102_, v___x_1109_);
lean_inc_ref(v___x_1008_);
v___x_1111_ = l_Lean_Syntax_node3(v___x_1000_, v___x_1099_, v___x_1110_, v___x_1008_, v___x_1068_);
v___x_1112_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1111_);
v___x_1113_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1074_, v___x_1098_, v___x_1112_);
v___x_1114_ = l_Lean_Syntax_node4(v___x_1000_, v___x_1061_, v___x_1063_, v___x_1091_, v___x_1073_, v___x_1113_);
v___x_1115_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1006_, v___x_1085_, v___x_1114_);
v___x_1116_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1060_, v___x_1115_);
v___x_1117_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1058_, v___x_1059_, v___x_1116_);
v___x_1118_ = lean_unsigned_to_nat(9u);
v___x_1119_ = lean_mk_empty_array_with_capacity(v___x_1118_);
v___x_1120_ = lean_array_push(v___x_1119_, v___x_1008_);
v___x_1121_ = lean_array_push(v___x_1120_, v___x_1041_);
v___x_1122_ = lean_array_push(v___x_1121_, v___x_1021_);
v___x_1123_ = lean_array_push(v___x_1122_, v___x_1042_);
v___x_1124_ = lean_array_push(v___x_1123_, v___x_1047_);
v___x_1125_ = lean_array_push(v___x_1124_, v___x_1016_);
v___x_1126_ = lean_array_push(v___x_1125_, v___x_1054_);
v___x_1127_ = lean_array_push(v___x_1126_, v___x_1056_);
v___x_1128_ = lean_array_push(v___x_1127_, v___x_1117_);
v___x_1129_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1000_);
lean_ctor_set(v___x_1129_, 1, v___x_1023_);
lean_ctor_set(v___x_1129_, 2, v___x_1128_);
v___x_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 0, v___x_1130_);
v___x_1132_ = v___x_994_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1130_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v_a_992_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
}
else
{
lean_object* v___x_1136_; lean_object* v___x_1138_; 
lean_dec(v_a_991_);
lean_del_object(v___x_986_);
lean_dec(v_fst_984_);
lean_del_object(v___x_981_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v___x_1136_ = lean_box(0);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 0, v___x_1136_);
v___x_1138_ = v___x_994_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_a_992_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
else
{
lean_object* v_a_1141_; lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
lean_del_object(v___x_986_);
lean_dec(v_fst_984_);
lean_del_object(v___x_981_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v_a_1141_ = lean_ctor_get(v___x_990_, 0);
v_a_1142_ = lean_ctor_get(v___x_990_, 1);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1144_ = v___x_990_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_inc(v_a_1141_);
lean_dec(v___x_990_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1141_);
lean_ctor_set(v_reuseFailAlloc_1148_, 1, v_a_1142_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
}
else
{
lean_object* v_a_1152_; 
lean_del_object(v___x_981_);
lean_dec(v_tail_979_);
lean_dec(v_head_977_);
lean_dec_ref(v_snd_971_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v_a_1152_ = lean_ctor_get(v___x_975_, 1);
lean_inc(v_a_1152_);
lean_dec_ref_known(v___x_975_, 2);
v___y_966_ = v_a_1152_;
goto v___jp_965_;
}
}
}
else
{
lean_object* v_a_1155_; 
lean_dec(v_snd_978_);
lean_dec_ref_known(v_a_976_, 2);
lean_dec(v_head_977_);
lean_dec_ref(v_snd_971_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v_a_1155_ = lean_ctor_get(v___x_975_, 1);
lean_inc(v_a_1155_);
lean_dec_ref_known(v___x_975_, 2);
v___y_966_ = v_a_1155_;
goto v___jp_965_;
}
}
else
{
lean_object* v_a_1156_; 
lean_dec(v_a_976_);
lean_dec_ref(v_snd_971_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v_a_1156_ = lean_ctor_get(v___x_975_, 1);
lean_inc(v_a_1156_);
lean_dec_ref_known(v___x_975_, 2);
v___y_966_ = v_a_1156_;
goto v___jp_965_;
}
}
else
{
lean_object* v_a_1157_; lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
lean_dec_ref(v_snd_971_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v_a_1157_ = lean_ctor_get(v___x_975_, 0);
v_a_1158_ = lean_ctor_get(v___x_975_, 1);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v___x_975_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_inc(v_a_1157_);
lean_dec(v___x_975_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1157_);
lean_ctor_set(v_reuseFailAlloc_1164_, 1, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkUnexpander___boxed(lean_object* v_attrKind_1182_, lean_object* v_pat_1183_, lean_object* v_qrhs_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_Elab_Command_mkUnexpander(v_attrKind_1182_, v_pat_1183_, v_qrhs_1184_, v_a_1185_, v_a_1186_);
lean_dec_ref(v_a_1185_);
return v_res_1187_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1188_ = lean_box(0);
v___x_1189_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
lean_ctor_set(v___x_1190_, 1, v___x_1188_);
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg(){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0);
v___x_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___boxed(lean_object* v___y_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0(lean_object* v_00_u03b1_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v___x_1200_; 
v___x_1200_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___boxed(lean_object* v_00_u03b1_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0(v_00_u03b1_1201_, v___y_1202_, v___y_1203_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(lean_object* v___y_1206_){
_start:
{
lean_object* v___x_1208_; lean_object* v_env_1209_; lean_object* v___x_1210_; lean_object* v_mainModule_1211_; lean_object* v___x_1212_; 
v___x_1208_ = lean_st_ref_get(v___y_1206_);
v_env_1209_ = lean_ctor_get(v___x_1208_, 0);
lean_inc_ref(v_env_1209_);
lean_dec(v___x_1208_);
v___x_1210_ = l_Lean_Environment_header(v_env_1209_);
lean_dec_ref(v_env_1209_);
v_mainModule_1211_ = lean_ctor_get(v___x_1210_, 0);
lean_inc(v_mainModule_1211_);
lean_dec_ref(v___x_1210_);
v___x_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1212_, 0, v_mainModule_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg___boxed(lean_object* v___y_1213_, lean_object* v___y_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(v___y_1213_);
lean_dec(v___y_1213_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7(lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
lean_object* v___x_1219_; 
v___x_1219_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(v___y_1217_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___boxed(lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7(v___y_1220_, v___y_1221_);
lean_dec(v___y_1221_);
lean_dec_ref(v___y_1220_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation___lam__0(lean_object* v___x_1224_, lean_object* v_sc_1225_){
_start:
{
lean_object* v_header_1226_; lean_object* v_currNamespace_1227_; lean_object* v_openDecls_1228_; lean_object* v_levelNames_1229_; lean_object* v_varDecls_1230_; lean_object* v_varUIds_1231_; lean_object* v_includedVars_1232_; lean_object* v_omittedVars_1233_; uint8_t v_isNoncomputable_1234_; uint8_t v_isPublic_1235_; uint8_t v_isMeta_1236_; lean_object* v_attrs_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1244_; 
v_header_1226_ = lean_ctor_get(v_sc_1225_, 0);
v_currNamespace_1227_ = lean_ctor_get(v_sc_1225_, 2);
v_openDecls_1228_ = lean_ctor_get(v_sc_1225_, 3);
v_levelNames_1229_ = lean_ctor_get(v_sc_1225_, 4);
v_varDecls_1230_ = lean_ctor_get(v_sc_1225_, 5);
v_varUIds_1231_ = lean_ctor_get(v_sc_1225_, 6);
v_includedVars_1232_ = lean_ctor_get(v_sc_1225_, 7);
v_omittedVars_1233_ = lean_ctor_get(v_sc_1225_, 8);
v_isNoncomputable_1234_ = lean_ctor_get_uint8(v_sc_1225_, sizeof(void*)*10);
v_isPublic_1235_ = lean_ctor_get_uint8(v_sc_1225_, sizeof(void*)*10 + 1);
v_isMeta_1236_ = lean_ctor_get_uint8(v_sc_1225_, sizeof(void*)*10 + 2);
v_attrs_1237_ = lean_ctor_get(v_sc_1225_, 9);
v_isSharedCheck_1244_ = !lean_is_exclusive(v_sc_1225_);
if (v_isSharedCheck_1244_ == 0)
{
lean_object* v_unused_1245_; 
v_unused_1245_ = lean_ctor_get(v_sc_1225_, 1);
lean_dec(v_unused_1245_);
v___x_1239_ = v_sc_1225_;
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_attrs_1237_);
lean_inc(v_omittedVars_1233_);
lean_inc(v_includedVars_1232_);
lean_inc(v_varUIds_1231_);
lean_inc(v_varDecls_1230_);
lean_inc(v_levelNames_1229_);
lean_inc(v_openDecls_1228_);
lean_inc(v_currNamespace_1227_);
lean_inc(v_header_1226_);
lean_dec(v_sc_1225_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 1, v___x_1224_);
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_header_1226_);
lean_ctor_set(v_reuseFailAlloc_1243_, 1, v___x_1224_);
lean_ctor_set(v_reuseFailAlloc_1243_, 2, v_currNamespace_1227_);
lean_ctor_set(v_reuseFailAlloc_1243_, 3, v_openDecls_1228_);
lean_ctor_set(v_reuseFailAlloc_1243_, 4, v_levelNames_1229_);
lean_ctor_set(v_reuseFailAlloc_1243_, 5, v_varDecls_1230_);
lean_ctor_set(v_reuseFailAlloc_1243_, 6, v_varUIds_1231_);
lean_ctor_set(v_reuseFailAlloc_1243_, 7, v_includedVars_1232_);
lean_ctor_set(v_reuseFailAlloc_1243_, 8, v_omittedVars_1233_);
lean_ctor_set(v_reuseFailAlloc_1243_, 9, v_attrs_1237_);
lean_ctor_set_uint8(v_reuseFailAlloc_1243_, sizeof(void*)*10, v_isNoncomputable_1234_);
lean_ctor_set_uint8(v_reuseFailAlloc_1243_, sizeof(void*)*10 + 1, v_isPublic_1235_);
lean_ctor_set_uint8(v_reuseFailAlloc_1243_, sizeof(void*)*10 + 2, v_isMeta_1236_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3(size_t v_sz_1246_, size_t v_i_1247_, lean_object* v_bs_1248_){
_start:
{
uint8_t v___x_1249_; 
v___x_1249_ = lean_usize_dec_lt(v_i_1247_, v_sz_1246_);
if (v___x_1249_ == 0)
{
return v_bs_1248_;
}
else
{
lean_object* v_v_1250_; lean_object* v___x_1251_; lean_object* v_bs_x27_1252_; size_t v___x_1253_; size_t v___x_1254_; lean_object* v___x_1255_; 
v_v_1250_ = lean_array_uget(v_bs_1248_, v_i_1247_);
v___x_1251_ = lean_unsigned_to_nat(0u);
v_bs_x27_1252_ = lean_array_uset(v_bs_1248_, v_i_1247_, v___x_1251_);
v___x_1253_ = ((size_t)1ULL);
v___x_1254_ = lean_usize_add(v_i_1247_, v___x_1253_);
v___x_1255_ = lean_array_uset(v_bs_x27_1252_, v_i_1247_, v_v_1250_);
v_i_1247_ = v___x_1254_;
v_bs_1248_ = v___x_1255_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3___boxed(lean_object* v_sz_1257_, lean_object* v_i_1258_, lean_object* v_bs_1259_){
_start:
{
size_t v_sz_boxed_1260_; size_t v_i_boxed_1261_; lean_object* v_res_1262_; 
v_sz_boxed_1260_ = lean_unbox_usize(v_sz_1257_);
lean_dec(v_sz_1257_);
v_i_boxed_1261_ = lean_unbox_usize(v_i_1258_);
lean_dec(v_i_1258_);
v_res_1262_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3(v_sz_boxed_1260_, v_i_boxed_1261_, v_bs_1259_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13(lean_object* v_o_1266_, lean_object* v_k_1267_, uint8_t v_v_1268_){
_start:
{
lean_object* v_map_1269_; uint8_t v_hasTrace_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1284_; 
v_map_1269_ = lean_ctor_get(v_o_1266_, 0);
v_hasTrace_1270_ = lean_ctor_get_uint8(v_o_1266_, sizeof(void*)*1);
v_isSharedCheck_1284_ = !lean_is_exclusive(v_o_1266_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1272_ = v_o_1266_;
v_isShared_1273_ = v_isSharedCheck_1284_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_map_1269_);
lean_dec(v_o_1266_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1284_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1274_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1274_, 0, v_v_1268_);
lean_inc(v_k_1267_);
v___x_1275_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1267_, v___x_1274_, v_map_1269_);
if (v_hasTrace_1270_ == 0)
{
lean_object* v___x_1276_; uint8_t v___x_1277_; lean_object* v___x_1279_; 
v___x_1276_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1));
v___x_1277_ = l_Lean_Name_isPrefixOf(v___x_1276_, v_k_1267_);
lean_dec(v_k_1267_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___x_1275_);
v___x_1279_ = v___x_1272_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v___x_1275_);
v___x_1279_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
lean_ctor_set_uint8(v___x_1279_, sizeof(void*)*1, v___x_1277_);
return v___x_1279_;
}
}
else
{
lean_object* v___x_1282_; 
lean_dec(v_k_1267_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___x_1275_);
v___x_1282_ = v___x_1272_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v___x_1275_);
lean_ctor_set_uint8(v_reuseFailAlloc_1283_, sizeof(void*)*1, v_hasTrace_1270_);
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
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___boxed(lean_object* v_o_1285_, lean_object* v_k_1286_, lean_object* v_v_1287_){
_start:
{
uint8_t v_v_boxed_1288_; lean_object* v_res_1289_; 
v_v_boxed_1288_ = lean_unbox(v_v_1287_);
v_res_1289_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13(v_o_1285_, v_k_1286_, v_v_boxed_1288_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6(lean_object* v_opts_1290_, lean_object* v_opt_1291_, uint8_t v_val_1292_){
_start:
{
lean_object* v_name_1293_; lean_object* v___x_1294_; 
v_name_1293_ = lean_ctor_get(v_opt_1291_, 0);
lean_inc(v_name_1293_);
lean_dec_ref(v_opt_1291_);
v___x_1294_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13(v_opts_1290_, v_name_1293_, v_val_1292_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6___boxed(lean_object* v_opts_1295_, lean_object* v_opt_1296_, lean_object* v_val_1297_){
_start:
{
uint8_t v_val_boxed_1298_; lean_object* v_res_1299_; 
v_val_boxed_1298_ = lean_unbox(v_val_1297_);
v_res_1299_ = l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6(v_opts_1295_, v_opt_1296_, v_val_boxed_1298_);
return v_res_1299_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2(size_t v_sz_1300_, size_t v_i_1301_, lean_object* v_bs_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
uint8_t v___x_1305_; 
v___x_1305_ = lean_usize_dec_lt(v_i_1301_, v_sz_1300_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1306_; 
v___x_1306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1306_, 0, v_bs_1302_);
lean_ctor_set(v___x_1306_, 1, v___y_1304_);
return v___x_1306_;
}
else
{
lean_object* v_v_1307_; lean_object* v___x_1308_; 
v_v_1307_ = lean_array_uget_borrowed(v_bs_1302_, v_i_1301_);
lean_inc(v_v_1307_);
v___x_1308_ = l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem(v_v_1307_, v___y_1303_, v___y_1304_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; lean_object* v_a_1310_; lean_object* v___x_1311_; lean_object* v_bs_x27_1312_; size_t v___x_1313_; size_t v___x_1314_; lean_object* v___x_1315_; 
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_a_1309_);
v_a_1310_ = lean_ctor_get(v___x_1308_, 1);
lean_inc(v_a_1310_);
lean_dec_ref_known(v___x_1308_, 2);
v___x_1311_ = lean_unsigned_to_nat(0u);
v_bs_x27_1312_ = lean_array_uset(v_bs_1302_, v_i_1301_, v___x_1311_);
v___x_1313_ = ((size_t)1ULL);
v___x_1314_ = lean_usize_add(v_i_1301_, v___x_1313_);
v___x_1315_ = lean_array_uset(v_bs_x27_1312_, v_i_1301_, v_a_1309_);
v_i_1301_ = v___x_1314_;
v_bs_1302_ = v___x_1315_;
v___y_1304_ = v_a_1310_;
goto _start;
}
else
{
lean_object* v_a_1317_; lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
lean_dec_ref(v_bs_1302_);
v_a_1317_ = lean_ctor_get(v___x_1308_, 0);
v_a_1318_ = lean_ctor_get(v___x_1308_, 1);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1308_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_inc(v_a_1317_);
lean_dec(v___x_1308_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_a_1317_);
lean_ctor_set(v_reuseFailAlloc_1324_, 1, v_a_1318_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2___boxed(lean_object* v_sz_1326_, lean_object* v_i_1327_, lean_object* v_bs_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_){
_start:
{
size_t v_sz_boxed_1331_; size_t v_i_boxed_1332_; lean_object* v_res_1333_; 
v_sz_boxed_1331_ = lean_unbox_usize(v_sz_1326_);
lean_dec(v_sz_1326_);
v_i_boxed_1332_ = lean_unbox_usize(v_i_1327_);
lean_dec(v_i_1327_);
v_res_1333_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2(v_sz_boxed_1331_, v_i_boxed_1332_, v_bs_1328_, v___y_1329_, v___y_1330_);
lean_dec_ref(v___y_1329_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg(size_t v_sz_1334_, size_t v_i_1335_, lean_object* v_bs_1336_, lean_object* v___y_1337_){
_start:
{
uint8_t v___x_1338_; 
v___x_1338_ = lean_usize_dec_lt(v_i_1335_, v_sz_1334_);
if (v___x_1338_ == 0)
{
lean_object* v___x_1339_; 
v___x_1339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1339_, 0, v_bs_1336_);
lean_ctor_set(v___x_1339_, 1, v___y_1337_);
return v___x_1339_;
}
else
{
lean_object* v_v_1340_; lean_object* v___x_1341_; 
v_v_1340_ = lean_array_uget_borrowed(v_bs_1336_, v_i_1335_);
lean_inc(v_v_1340_);
v___x_1341_ = l_Lean_Elab_Command_expandNotationItemIntoPattern___redArg(v_v_1340_, v___y_1337_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v_a_1342_; lean_object* v_a_1343_; lean_object* v___x_1344_; lean_object* v_bs_x27_1345_; size_t v___x_1346_; size_t v___x_1347_; lean_object* v___x_1348_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
lean_inc(v_a_1342_);
v_a_1343_ = lean_ctor_get(v___x_1341_, 1);
lean_inc(v_a_1343_);
lean_dec_ref_known(v___x_1341_, 2);
v___x_1344_ = lean_unsigned_to_nat(0u);
v_bs_x27_1345_ = lean_array_uset(v_bs_1336_, v_i_1335_, v___x_1344_);
v___x_1346_ = ((size_t)1ULL);
v___x_1347_ = lean_usize_add(v_i_1335_, v___x_1346_);
v___x_1348_ = lean_array_uset(v_bs_x27_1345_, v_i_1335_, v_a_1342_);
v_i_1335_ = v___x_1347_;
v_bs_1336_ = v___x_1348_;
v___y_1337_ = v_a_1343_;
goto _start;
}
else
{
lean_object* v_a_1350_; lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
lean_dec_ref(v_bs_1336_);
v_a_1350_ = lean_ctor_get(v___x_1341_, 0);
v_a_1351_ = lean_ctor_get(v___x_1341_, 1);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1341_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_inc(v_a_1350_);
lean_dec(v___x_1341_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1350_);
lean_ctor_set(v_reuseFailAlloc_1357_, 1, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg___boxed(lean_object* v_sz_1359_, lean_object* v_i_1360_, lean_object* v_bs_1361_, lean_object* v___y_1362_){
_start:
{
size_t v_sz_boxed_1363_; size_t v_i_boxed_1364_; lean_object* v_res_1365_; 
v_sz_boxed_1363_ = lean_unbox_usize(v_sz_1359_);
lean_dec(v_sz_1359_);
v_i_boxed_1364_ = lean_unbox_usize(v_i_1360_);
lean_dec(v_i_1360_);
v_res_1365_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg(v_sz_boxed_1363_, v_i_boxed_1364_, v_bs_1361_, v___y_1362_);
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5(size_t v_sz_1366_, size_t v_i_1367_, lean_object* v_bs_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
lean_object* v___x_1371_; 
v___x_1371_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg(v_sz_1366_, v_i_1367_, v_bs_1368_, v___y_1370_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___boxed(lean_object* v_sz_1372_, lean_object* v_i_1373_, lean_object* v_bs_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_){
_start:
{
size_t v_sz_boxed_1377_; size_t v_i_boxed_1378_; lean_object* v_res_1379_; 
v_sz_boxed_1377_ = lean_unbox_usize(v_sz_1372_);
lean_dec(v_sz_1372_);
v_i_boxed_1378_ = lean_unbox_usize(v_i_1373_);
lean_dec(v_i_1373_);
v_res_1379_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5(v_sz_boxed_1377_, v_i_boxed_1378_, v_bs_1374_, v___y_1375_, v___y_1376_);
lean_dec_ref(v___y_1375_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4(size_t v_sz_1380_, size_t v_i_1381_, lean_object* v_bs_1382_){
_start:
{
uint8_t v___x_1383_; 
v___x_1383_ = lean_usize_dec_lt(v_i_1381_, v_sz_1380_);
if (v___x_1383_ == 0)
{
return v_bs_1382_;
}
else
{
lean_object* v___x_1384_; lean_object* v_v_1385_; lean_object* v_bs_x27_1386_; lean_object* v___x_1387_; size_t v___x_1388_; size_t v___x_1389_; lean_object* v___x_1390_; 
v___x_1384_ = lean_unsigned_to_nat(0u);
v_v_1385_ = lean_array_uget(v_bs_1382_, v_i_1381_);
v_bs_x27_1386_ = lean_array_uset(v_bs_1382_, v_i_1381_, v___x_1384_);
v___x_1387_ = l_Lean_Syntax_getArg(v_v_1385_, v___x_1384_);
lean_dec(v_v_1385_);
v___x_1388_ = ((size_t)1ULL);
v___x_1389_ = lean_usize_add(v_i_1381_, v___x_1388_);
v___x_1390_ = lean_array_uset(v_bs_x27_1386_, v_i_1381_, v___x_1387_);
v_i_1381_ = v___x_1389_;
v_bs_1382_ = v___x_1390_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4___boxed(lean_object* v_sz_1392_, lean_object* v_i_1393_, lean_object* v_bs_1394_){
_start:
{
size_t v_sz_boxed_1395_; size_t v_i_boxed_1396_; lean_object* v_res_1397_; 
v_sz_boxed_1395_ = lean_unbox_usize(v_sz_1392_);
lean_dec(v_sz_1392_);
v_i_boxed_1396_ = lean_unbox_usize(v_i_1393_);
lean_dec(v_i_1393_);
v_res_1397_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4(v_sz_boxed_1395_, v_i_boxed_1396_, v_bs_1394_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3(lean_object* v_env_1398_, lean_object* v_currNamespace_1399_, lean_object* v_openDecls_1400_, lean_object* v_n_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1404_ = l_Lean_ResolveName_resolveNamespace(v_env_1398_, v_currNamespace_1399_, v_openDecls_1400_, v_n_1401_);
v___x_1405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1405_, 0, v___x_1404_);
lean_ctor_set(v___x_1405_, 1, v___y_1403_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3___boxed(lean_object* v_env_1406_, lean_object* v_currNamespace_1407_, lean_object* v_openDecls_1408_, lean_object* v_n_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
lean_object* v_res_1412_; 
v_res_1412_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3(v_env_1406_, v_currNamespace_1407_, v_openDecls_1408_, v_n_1409_, v___y_1410_, v___y_1411_);
lean_dec_ref(v___y_1410_);
return v_res_1412_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1413_; 
v___x_1413_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1413_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1414_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0);
v___x_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1415_, 0, v___x_1414_);
return v___x_1415_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1416_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1);
v___x_1417_ = lean_unsigned_to_nat(0u);
v___x_1418_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1418_, 0, v___x_1417_);
lean_ctor_set(v___x_1418_, 1, v___x_1417_);
lean_ctor_set(v___x_1418_, 2, v___x_1417_);
lean_ctor_set(v___x_1418_, 3, v___x_1417_);
lean_ctor_set(v___x_1418_, 4, v___x_1416_);
lean_ctor_set(v___x_1418_, 5, v___x_1416_);
lean_ctor_set(v___x_1418_, 6, v___x_1416_);
lean_ctor_set(v___x_1418_, 7, v___x_1416_);
lean_ctor_set(v___x_1418_, 8, v___x_1416_);
lean_ctor_set(v___x_1418_, 9, v___x_1416_);
lean_ctor_set(v___x_1418_, 10, v___x_1416_);
return v___x_1418_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1419_ = lean_unsigned_to_nat(32u);
v___x_1420_ = lean_mk_empty_array_with_capacity(v___x_1419_);
v___x_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1420_);
return v___x_1421_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4(void){
_start:
{
size_t v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1422_ = ((size_t)5ULL);
v___x_1423_ = lean_unsigned_to_nat(0u);
v___x_1424_ = lean_unsigned_to_nat(32u);
v___x_1425_ = lean_mk_empty_array_with_capacity(v___x_1424_);
v___x_1426_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3);
v___x_1427_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1427_, 0, v___x_1426_);
lean_ctor_set(v___x_1427_, 1, v___x_1425_);
lean_ctor_set(v___x_1427_, 2, v___x_1423_);
lean_ctor_set(v___x_1427_, 3, v___x_1423_);
lean_ctor_set_usize(v___x_1427_, 4, v___x_1422_);
return v___x_1427_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
v___x_1428_ = lean_box(1);
v___x_1429_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4);
v___x_1430_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1);
v___x_1431_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
lean_ctor_set(v___x_1431_, 1, v___x_1429_);
lean_ctor_set(v___x_1431_, 2, v___x_1428_);
return v___x_1431_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(lean_object* v_msgData_1432_, lean_object* v___y_1433_){
_start:
{
lean_object* v___x_1435_; lean_object* v_env_1436_; uint8_t v___x_1437_; lean_object* v_env_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v_scopes_1441_; lean_object* v___x_1442_; lean_object* v_opts_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1435_ = lean_st_ref_get(v___y_1433_);
v_env_1436_ = lean_ctor_get(v___x_1435_, 0);
lean_inc_ref(v_env_1436_);
lean_dec(v___x_1435_);
v___x_1437_ = 0;
v_env_1438_ = l_Lean_Environment_setRecordingDeps(v_env_1436_, v___x_1437_);
v___x_1439_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1440_ = lean_st_ref_get(v___y_1433_);
v_scopes_1441_ = lean_ctor_get(v___x_1440_, 2);
lean_inc(v_scopes_1441_);
lean_dec(v___x_1440_);
v___x_1442_ = l_List_head_x21___redArg(v___x_1439_, v_scopes_1441_);
lean_dec(v_scopes_1441_);
v_opts_1443_ = lean_ctor_get(v___x_1442_, 1);
lean_inc_ref(v_opts_1443_);
lean_dec(v___x_1442_);
v___x_1444_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2);
v___x_1445_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5);
v___x_1446_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1446_, 0, v_env_1438_);
lean_ctor_set(v___x_1446_, 1, v___x_1444_);
lean_ctor_set(v___x_1446_, 2, v___x_1445_);
lean_ctor_set(v___x_1446_, 3, v_opts_1443_);
v___x_1447_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1446_);
lean_ctor_set(v___x_1447_, 1, v_msgData_1432_);
v___x_1448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1448_, 0, v___x_1447_);
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_msgData_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_){
_start:
{
lean_object* v_res_1452_; 
v_res_1452_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(v_msgData_1449_, v___y_1450_);
lean_dec(v___y_1450_);
return v_res_1452_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1453_; double v___x_1454_; 
v___x_1453_ = lean_unsigned_to_nat(0u);
v___x_1454_ = lean_float_of_nat(v___x_1453_);
return v___x_1454_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1(lean_object* v_cls_1457_, lean_object* v_msg_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_){
_start:
{
lean_object* v___x_1462_; 
v___x_1462_ = l_Lean_Elab_Command_getRef___redArg(v___y_1459_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v_a_1463_; lean_object* v___x_1464_; lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1513_; 
v_a_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_a_1463_);
lean_dec_ref_known(v___x_1462_, 1);
v___x_1464_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(v_msg_1458_, v___y_1460_);
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1467_ = v___x_1464_;
v_isShared_1468_ = v_isSharedCheck_1513_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_dec(v___x_1464_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1513_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1469_; lean_object* v_traceState_1470_; lean_object* v_env_1471_; lean_object* v_messages_1472_; lean_object* v_scopes_1473_; lean_object* v_usedQuotCtxts_1474_; lean_object* v_nextMacroScope_1475_; lean_object* v_maxRecDepth_1476_; lean_object* v_ngen_1477_; lean_object* v_auxDeclNGen_1478_; lean_object* v_infoState_1479_; lean_object* v_snapshotTasks_1480_; lean_object* v_prevLinterStates_1481_; lean_object* v_codeQualityEntryTasks_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1512_; 
v___x_1469_ = lean_st_ref_take(v___y_1460_);
v_traceState_1470_ = lean_ctor_get(v___x_1469_, 9);
v_env_1471_ = lean_ctor_get(v___x_1469_, 0);
v_messages_1472_ = lean_ctor_get(v___x_1469_, 1);
v_scopes_1473_ = lean_ctor_get(v___x_1469_, 2);
v_usedQuotCtxts_1474_ = lean_ctor_get(v___x_1469_, 3);
v_nextMacroScope_1475_ = lean_ctor_get(v___x_1469_, 4);
v_maxRecDepth_1476_ = lean_ctor_get(v___x_1469_, 5);
v_ngen_1477_ = lean_ctor_get(v___x_1469_, 6);
v_auxDeclNGen_1478_ = lean_ctor_get(v___x_1469_, 7);
v_infoState_1479_ = lean_ctor_get(v___x_1469_, 8);
v_snapshotTasks_1480_ = lean_ctor_get(v___x_1469_, 10);
v_prevLinterStates_1481_ = lean_ctor_get(v___x_1469_, 11);
v_codeQualityEntryTasks_1482_ = lean_ctor_get(v___x_1469_, 12);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1484_ = v___x_1469_;
v_isShared_1485_ = v_isSharedCheck_1512_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1482_);
lean_inc(v_prevLinterStates_1481_);
lean_inc(v_snapshotTasks_1480_);
lean_inc(v_traceState_1470_);
lean_inc(v_infoState_1479_);
lean_inc(v_auxDeclNGen_1478_);
lean_inc(v_ngen_1477_);
lean_inc(v_maxRecDepth_1476_);
lean_inc(v_nextMacroScope_1475_);
lean_inc(v_usedQuotCtxts_1474_);
lean_inc(v_scopes_1473_);
lean_inc(v_messages_1472_);
lean_inc(v_env_1471_);
lean_dec(v___x_1469_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1512_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
uint64_t v_tid_1486_; lean_object* v_traces_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1511_; 
v_tid_1486_ = lean_ctor_get_uint64(v_traceState_1470_, sizeof(void*)*1);
v_traces_1487_ = lean_ctor_get(v_traceState_1470_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v_traceState_1470_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1489_ = v_traceState_1470_;
v_isShared_1490_ = v_isSharedCheck_1511_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_traces_1487_);
lean_dec(v_traceState_1470_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1511_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; double v___x_1493_; uint8_t v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1502_; 
v___x_1491_ = lean_box(0);
v___x_1492_ = lean_box(0);
v___x_1493_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0);
v___x_1494_ = 0;
v___x_1495_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__54));
v___x_1496_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1496_, 0, v_cls_1457_);
lean_ctor_set(v___x_1496_, 1, v___x_1492_);
lean_ctor_set(v___x_1496_, 2, v___x_1495_);
lean_ctor_set_float(v___x_1496_, sizeof(void*)*3, v___x_1493_);
lean_ctor_set_float(v___x_1496_, sizeof(void*)*3 + 8, v___x_1493_);
lean_ctor_set_uint8(v___x_1496_, sizeof(void*)*3 + 16, v___x_1494_);
v___x_1497_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__1));
v___x_1498_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1496_);
lean_ctor_set(v___x_1498_, 1, v_a_1465_);
lean_ctor_set(v___x_1498_, 2, v___x_1497_);
v___x_1499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1499_, 0, v_a_1463_);
lean_ctor_set(v___x_1499_, 1, v___x_1498_);
v___x_1500_ = l_Lean_PersistentArray_push___redArg(v_traces_1487_, v___x_1499_);
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 0, v___x_1500_);
v___x_1502_ = v___x_1489_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1500_);
lean_ctor_set_uint64(v_reuseFailAlloc_1510_, sizeof(void*)*1, v_tid_1486_);
v___x_1502_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
lean_object* v___x_1504_; 
if (v_isShared_1485_ == 0)
{
lean_ctor_set(v___x_1484_, 9, v___x_1502_);
v___x_1504_ = v___x_1484_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_env_1471_);
lean_ctor_set(v_reuseFailAlloc_1509_, 1, v_messages_1472_);
lean_ctor_set(v_reuseFailAlloc_1509_, 2, v_scopes_1473_);
lean_ctor_set(v_reuseFailAlloc_1509_, 3, v_usedQuotCtxts_1474_);
lean_ctor_set(v_reuseFailAlloc_1509_, 4, v_nextMacroScope_1475_);
lean_ctor_set(v_reuseFailAlloc_1509_, 5, v_maxRecDepth_1476_);
lean_ctor_set(v_reuseFailAlloc_1509_, 6, v_ngen_1477_);
lean_ctor_set(v_reuseFailAlloc_1509_, 7, v_auxDeclNGen_1478_);
lean_ctor_set(v_reuseFailAlloc_1509_, 8, v_infoState_1479_);
lean_ctor_set(v_reuseFailAlloc_1509_, 9, v___x_1502_);
lean_ctor_set(v_reuseFailAlloc_1509_, 10, v_snapshotTasks_1480_);
lean_ctor_set(v_reuseFailAlloc_1509_, 11, v_prevLinterStates_1481_);
lean_ctor_set(v_reuseFailAlloc_1509_, 12, v_codeQualityEntryTasks_1482_);
v___x_1504_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
lean_object* v___x_1505_; lean_object* v___x_1507_; 
v___x_1505_ = lean_st_ref_put(v___y_1460_, v___x_1504_);
if (v_isShared_1468_ == 0)
{
lean_ctor_set(v___x_1467_, 0, v___x_1491_);
v___x_1507_ = v___x_1467_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v___x_1491_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1521_; 
lean_dec_ref(v_msg_1458_);
lean_dec(v_cls_1457_);
v_a_1514_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1516_ = v___x_1462_;
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1462_);
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
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___boxed(lean_object* v_cls_1522_, lean_object* v_msg_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1(v_cls_1522_, v_msg_1523_, v___y_1524_, v___y_1525_);
lean_dec(v___y_1525_);
lean_dec_ref(v___y_1524_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5(lean_object* v_as_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
if (lean_obj_tag(v_as_1528_) == 0)
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1532_ = lean_box(0);
v___x_1533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1532_);
return v___x_1533_;
}
else
{
lean_object* v_head_1534_; lean_object* v_tail_1535_; lean_object* v_fst_1536_; lean_object* v_snd_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v_scopes_1542_; lean_object* v___x_1543_; lean_object* v_opts_1544_; uint8_t v_hasTrace_1545_; 
v_head_1534_ = lean_ctor_get(v_as_1528_, 0);
lean_inc(v_head_1534_);
v_tail_1535_ = lean_ctor_get(v_as_1528_, 1);
lean_inc(v_tail_1535_);
lean_dec_ref_known(v_as_1528_, 2);
v_fst_1536_ = lean_ctor_get(v_head_1534_, 0);
lean_inc(v_fst_1536_);
v_snd_1537_ = lean_ctor_get(v_head_1534_, 1);
lean_inc(v_snd_1537_);
lean_dec(v_head_1534_);
v___x_1538_ = l_Lean_inheritedTraceOptions;
v___x_1539_ = lean_st_ref_get(v___x_1538_);
v___x_1540_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1541_ = lean_st_ref_get(v___y_1530_);
v_scopes_1542_ = lean_ctor_get(v___x_1541_, 2);
lean_inc(v_scopes_1542_);
lean_dec(v___x_1541_);
v___x_1543_ = l_List_head_x21___redArg(v___x_1540_, v_scopes_1542_);
lean_dec(v_scopes_1542_);
v_opts_1544_ = lean_ctor_get(v___x_1543_, 1);
lean_inc_ref(v_opts_1544_);
lean_dec(v___x_1543_);
v_hasTrace_1545_ = lean_ctor_get_uint8(v_opts_1544_, sizeof(void*)*1);
if (v_hasTrace_1545_ == 0)
{
lean_dec_ref(v_opts_1544_);
lean_dec(v___x_1539_);
lean_dec(v_snd_1537_);
lean_dec(v_fst_1536_);
v_as_1528_ = v_tail_1535_;
goto _start;
}
else
{
lean_object* v___x_1547_; lean_object* v___x_1548_; uint8_t v___x_1549_; 
v___x_1547_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1));
lean_inc(v_fst_1536_);
v___x_1548_ = l_Lean_Name_append(v___x_1547_, v_fst_1536_);
v___x_1549_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1539_, v_opts_1544_, v___x_1548_);
lean_dec(v___x_1548_);
lean_dec_ref(v_opts_1544_);
lean_dec(v___x_1539_);
if (v___x_1549_ == 0)
{
lean_dec(v_snd_1537_);
lean_dec(v_fst_1536_);
v_as_1528_ = v_tail_1535_;
goto _start;
}
else
{
lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1551_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1551_, 0, v_snd_1537_);
v___x_1552_ = l_Lean_MessageData_ofFormat(v___x_1551_);
v___x_1553_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1(v_fst_1536_, v___x_1552_, v___y_1529_, v___y_1530_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_dec_ref_known(v___x_1553_, 1);
v_as_1528_ = v_tail_1535_;
goto _start;
}
else
{
lean_dec(v_tail_1535_);
return v___x_1553_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5___boxed(lean_object* v_as_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5(v_as_1555_, v___y_1556_, v___y_1557_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2(lean_object* v_currNamespace_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_){
_start:
{
lean_object* v___x_1563_; 
v___x_1563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1563_, 0, v_currNamespace_1560_);
lean_ctor_set(v___x_1563_, 1, v___y_1562_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2___boxed(lean_object* v_currNamespace_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2(v_currNamespace_1564_, v___y_1565_, v___y_1566_);
lean_dec_ref(v___y_1565_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4(lean_object* v_env_1568_, lean_object* v_opts_1569_, lean_object* v_currNamespace_1570_, lean_object* v_openDecls_1571_, lean_object* v_n_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_){
_start:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1575_ = l_Lean_ResolveName_resolveGlobalName(v_env_1568_, v_opts_1569_, v_currNamespace_1570_, v_openDecls_1571_, v_n_1572_);
v___x_1576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1575_);
lean_ctor_set(v___x_1576_, 1, v___y_1574_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4___boxed(lean_object* v_env_1577_, lean_object* v_opts_1578_, lean_object* v_currNamespace_1579_, lean_object* v_openDecls_1580_, lean_object* v_n_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_){
_start:
{
lean_object* v_res_1584_; 
v_res_1584_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4(v_env_1577_, v_opts_1578_, v_currNamespace_1579_, v_openDecls_1580_, v_n_1581_, v___y_1582_, v___y_1583_);
lean_dec_ref(v___y_1582_);
lean_dec_ref(v_opts_1578_);
return v_res_1584_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0(void){
_start:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1585_ = lean_box(1);
v___x_1586_ = l_Lean_MessageData_ofFormat(v___x_1585_);
return v___x_1586_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__3(void){
_start:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1590_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__2));
v___x_1591_ = l_Lean_MessageData_ofFormat(v___x_1590_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26(lean_object* v_x_1592_, lean_object* v_x_1593_){
_start:
{
if (lean_obj_tag(v_x_1593_) == 0)
{
return v_x_1592_;
}
else
{
lean_object* v_head_1594_; lean_object* v_tail_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1617_; 
v_head_1594_ = lean_ctor_get(v_x_1593_, 0);
v_tail_1595_ = lean_ctor_get(v_x_1593_, 1);
v_isSharedCheck_1617_ = !lean_is_exclusive(v_x_1593_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1597_ = v_x_1593_;
v_isShared_1598_ = v_isSharedCheck_1617_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_tail_1595_);
lean_inc(v_head_1594_);
lean_dec(v_x_1593_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1617_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v_before_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1615_; 
v_before_1599_ = lean_ctor_get(v_head_1594_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v_head_1594_);
if (v_isSharedCheck_1615_ == 0)
{
lean_object* v_unused_1616_; 
v_unused_1616_ = lean_ctor_get(v_head_1594_, 1);
lean_dec(v_unused_1616_);
v___x_1601_ = v_head_1594_;
v_isShared_1602_ = v_isSharedCheck_1615_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_before_1599_);
lean_dec(v_head_1594_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1615_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1603_; lean_object* v___x_1605_; 
v___x_1603_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0);
if (v_isShared_1602_ == 0)
{
lean_ctor_set_tag(v___x_1601_, 7);
lean_ctor_set(v___x_1601_, 1, v___x_1603_);
lean_ctor_set(v___x_1601_, 0, v_x_1592_);
v___x_1605_ = v___x_1601_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_x_1592_);
lean_ctor_set(v_reuseFailAlloc_1614_, 1, v___x_1603_);
v___x_1605_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
lean_object* v___x_1606_; lean_object* v___x_1608_; 
v___x_1606_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__3);
if (v_isShared_1598_ == 0)
{
lean_ctor_set_tag(v___x_1597_, 7);
lean_ctor_set(v___x_1597_, 1, v___x_1606_);
lean_ctor_set(v___x_1597_, 0, v___x_1605_);
v___x_1608_ = v___x_1597_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1605_);
lean_ctor_set(v_reuseFailAlloc_1613_, 1, v___x_1606_);
v___x_1608_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1609_ = l_Lean_MessageData_ofSyntax(v_before_1599_);
v___x_1610_ = l_Lean_indentD(v___x_1609_);
v___x_1611_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1608_);
lean_ctor_set(v___x_1611_, 1, v___x_1610_);
v_x_1592_ = v___x_1611_;
v_x_1593_ = v_tail_1595_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__25(lean_object* v_opts_1618_, lean_object* v_opt_1619_){
_start:
{
lean_object* v_name_1620_; lean_object* v_defValue_1621_; lean_object* v_map_1622_; lean_object* v___x_1623_; 
v_name_1620_ = lean_ctor_get(v_opt_1619_, 0);
v_defValue_1621_ = lean_ctor_get(v_opt_1619_, 1);
v_map_1622_ = lean_ctor_get(v_opts_1618_, 0);
v___x_1623_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1622_, v_name_1620_);
if (lean_obj_tag(v___x_1623_) == 0)
{
uint8_t v___x_1624_; 
v___x_1624_ = lean_unbox(v_defValue_1621_);
return v___x_1624_;
}
else
{
lean_object* v_val_1625_; 
v_val_1625_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_val_1625_);
lean_dec_ref_known(v___x_1623_, 1);
if (lean_obj_tag(v_val_1625_) == 1)
{
uint8_t v_v_1626_; 
v_v_1626_ = lean_ctor_get_uint8(v_val_1625_, 0);
lean_dec_ref_known(v_val_1625_, 0);
return v_v_1626_;
}
else
{
uint8_t v___x_1627_; 
lean_dec(v_val_1625_);
v___x_1627_ = lean_unbox(v_defValue_1621_);
return v___x_1627_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__25___boxed(lean_object* v_opts_1628_, lean_object* v_opt_1629_){
_start:
{
uint8_t v_res_1630_; lean_object* v_r_1631_; 
v_res_1630_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__25(v_opts_1628_, v_opt_1629_);
lean_dec_ref(v_opt_1629_);
lean_dec_ref(v_opts_1628_);
v_r_1631_ = lean_box(v_res_1630_);
return v_r_1631_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__2(void){
_start:
{
lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1635_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__1));
v___x_1636_ = l_Lean_MessageData_ofFormat(v___x_1635_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg(lean_object* v_msgData_1637_, lean_object* v_macroStack_1638_, lean_object* v___y_1639_){
_start:
{
lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v_scopes_1643_; lean_object* v___x_1644_; lean_object* v_opts_1645_; lean_object* v___x_1646_; uint8_t v___x_1647_; 
v___x_1641_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1642_ = lean_st_ref_get(v___y_1639_);
v_scopes_1643_ = lean_ctor_get(v___x_1642_, 2);
lean_inc(v_scopes_1643_);
lean_dec(v___x_1642_);
v___x_1644_ = l_List_head_x21___redArg(v___x_1641_, v_scopes_1643_);
lean_dec(v_scopes_1643_);
v_opts_1645_ = lean_ctor_get(v___x_1644_, 1);
lean_inc_ref(v_opts_1645_);
lean_dec(v___x_1644_);
v___x_1646_ = l_Lean_Elab_pp_macroStack;
v___x_1647_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__25(v_opts_1645_, v___x_1646_);
lean_dec_ref(v_opts_1645_);
if (v___x_1647_ == 0)
{
lean_object* v___x_1648_; 
lean_dec(v_macroStack_1638_);
v___x_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1648_, 0, v_msgData_1637_);
return v___x_1648_;
}
else
{
if (lean_obj_tag(v_macroStack_1638_) == 0)
{
lean_object* v___x_1649_; 
v___x_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1649_, 0, v_msgData_1637_);
return v___x_1649_;
}
else
{
lean_object* v_head_1650_; lean_object* v_after_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1666_; 
v_head_1650_ = lean_ctor_get(v_macroStack_1638_, 0);
lean_inc(v_head_1650_);
v_after_1651_ = lean_ctor_get(v_head_1650_, 1);
v_isSharedCheck_1666_ = !lean_is_exclusive(v_head_1650_);
if (v_isSharedCheck_1666_ == 0)
{
lean_object* v_unused_1667_; 
v_unused_1667_ = lean_ctor_get(v_head_1650_, 0);
lean_dec(v_unused_1667_);
v___x_1653_ = v_head_1650_;
v_isShared_1654_ = v_isSharedCheck_1666_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_after_1651_);
lean_dec(v_head_1650_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1666_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1655_; lean_object* v___x_1657_; 
v___x_1655_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26___closed__0);
if (v_isShared_1654_ == 0)
{
lean_ctor_set_tag(v___x_1653_, 7);
lean_ctor_set(v___x_1653_, 1, v___x_1655_);
lean_ctor_set(v___x_1653_, 0, v_msgData_1637_);
v___x_1657_ = v___x_1653_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_msgData_1637_);
lean_ctor_set(v_reuseFailAlloc_1665_, 1, v___x_1655_);
v___x_1657_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v_msgData_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1658_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___closed__2);
v___x_1659_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1657_);
lean_ctor_set(v___x_1659_, 1, v___x_1658_);
v___x_1660_ = l_Lean_MessageData_ofSyntax(v_after_1651_);
v___x_1661_ = l_Lean_indentD(v___x_1660_);
v_msgData_1662_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1662_, 0, v___x_1659_);
lean_ctor_set(v_msgData_1662_, 1, v___x_1661_);
v___x_1663_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23_spec__26(v_msgData_1662_, v_macroStack_1638_);
v___x_1664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1663_);
return v___x_1664_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg___boxed(lean_object* v_msgData_1668_, lean_object* v_macroStack_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_){
_start:
{
lean_object* v_res_1672_; 
v_res_1672_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg(v_msgData_1668_, v_macroStack_1669_, v___y_1670_);
lean_dec(v___y_1670_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg(lean_object* v_msg_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_){
_start:
{
lean_object* v___x_1677_; 
v___x_1677_ = l_Lean_Elab_Command_getRef___redArg(v___y_1674_);
if (lean_obj_tag(v___x_1677_) == 0)
{
lean_object* v_a_1678_; lean_object* v_macroStack_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v_a_1682_; lean_object* v___x_1683_; lean_object* v_a_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1692_; 
v_a_1678_ = lean_ctor_get(v___x_1677_, 0);
lean_inc(v_a_1678_);
lean_dec_ref_known(v___x_1677_, 1);
v_macroStack_1679_ = lean_ctor_get(v___y_1674_, 4);
v___x_1680_ = l_Lean_Elab_getBetterRef(v_a_1678_, v_macroStack_1679_);
lean_dec(v_a_1678_);
v___x_1681_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(v_msg_1673_, v___y_1675_);
v_a_1682_ = lean_ctor_get(v___x_1681_, 0);
lean_inc(v_a_1682_);
lean_dec_ref(v___x_1681_);
lean_inc(v_macroStack_1679_);
v___x_1683_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg(v_a_1682_, v_macroStack_1679_, v___y_1675_);
v_a_1684_ = lean_ctor_get(v___x_1683_, 0);
v_isSharedCheck_1692_ = !lean_is_exclusive(v___x_1683_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1686_ = v___x_1683_;
v_isShared_1687_ = v_isSharedCheck_1692_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_a_1684_);
lean_dec(v___x_1683_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1692_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v___x_1688_; lean_object* v___x_1690_; 
v___x_1688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1680_);
lean_ctor_set(v___x_1688_, 1, v_a_1684_);
if (v_isShared_1687_ == 0)
{
lean_ctor_set_tag(v___x_1686_, 1);
lean_ctor_set(v___x_1686_, 0, v___x_1688_);
v___x_1690_ = v___x_1686_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v___x_1688_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
}
else
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1700_; 
lean_dec_ref(v_msg_1673_);
v_a_1693_ = lean_ctor_get(v___x_1677_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1695_ = v___x_1677_;
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___x_1677_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1698_; 
if (v_isShared_1696_ == 0)
{
v___x_1698_ = v___x_1695_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_a_1693_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg___boxed(lean_object* v_msg_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_){
_start:
{
lean_object* v_res_1705_; 
v_res_1705_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg(v_msg_1701_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg(lean_object* v_ref_1706_, lean_object* v_msg_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_){
_start:
{
lean_object* v___x_1711_; 
v___x_1711_ = l_Lean_Elab_Command_getRef___redArg(v___y_1708_);
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v_a_1712_; lean_object* v_fileName_1713_; lean_object* v_fileMap_1714_; lean_object* v_currRecDepth_1715_; lean_object* v_cmdPos_1716_; lean_object* v_macroStack_1717_; lean_object* v_quotContext_x3f_1718_; lean_object* v_currMacroScope_1719_; lean_object* v_snap_x3f_1720_; lean_object* v_cancelTk_x3f_1721_; uint8_t v_suppressElabErrors_1722_; uint8_t v_checkDeprecated_1723_; lean_object* v_ref_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v_a_1712_ = lean_ctor_get(v___x_1711_, 0);
lean_inc(v_a_1712_);
lean_dec_ref_known(v___x_1711_, 1);
v_fileName_1713_ = lean_ctor_get(v___y_1708_, 0);
v_fileMap_1714_ = lean_ctor_get(v___y_1708_, 1);
v_currRecDepth_1715_ = lean_ctor_get(v___y_1708_, 2);
v_cmdPos_1716_ = lean_ctor_get(v___y_1708_, 3);
v_macroStack_1717_ = lean_ctor_get(v___y_1708_, 4);
v_quotContext_x3f_1718_ = lean_ctor_get(v___y_1708_, 5);
v_currMacroScope_1719_ = lean_ctor_get(v___y_1708_, 6);
v_snap_x3f_1720_ = lean_ctor_get(v___y_1708_, 8);
v_cancelTk_x3f_1721_ = lean_ctor_get(v___y_1708_, 9);
v_suppressElabErrors_1722_ = lean_ctor_get_uint8(v___y_1708_, sizeof(void*)*10);
v_checkDeprecated_1723_ = lean_ctor_get_uint8(v___y_1708_, sizeof(void*)*10 + 1);
v_ref_1724_ = l_Lean_replaceRef(v_ref_1706_, v_a_1712_);
lean_dec(v_a_1712_);
lean_inc(v_cancelTk_x3f_1721_);
lean_inc(v_snap_x3f_1720_);
lean_inc(v_currMacroScope_1719_);
lean_inc(v_quotContext_x3f_1718_);
lean_inc(v_macroStack_1717_);
lean_inc(v_cmdPos_1716_);
lean_inc(v_currRecDepth_1715_);
lean_inc_ref(v_fileMap_1714_);
lean_inc_ref(v_fileName_1713_);
v___x_1725_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_1725_, 0, v_fileName_1713_);
lean_ctor_set(v___x_1725_, 1, v_fileMap_1714_);
lean_ctor_set(v___x_1725_, 2, v_currRecDepth_1715_);
lean_ctor_set(v___x_1725_, 3, v_cmdPos_1716_);
lean_ctor_set(v___x_1725_, 4, v_macroStack_1717_);
lean_ctor_set(v___x_1725_, 5, v_quotContext_x3f_1718_);
lean_ctor_set(v___x_1725_, 6, v_currMacroScope_1719_);
lean_ctor_set(v___x_1725_, 7, v_ref_1724_);
lean_ctor_set(v___x_1725_, 8, v_snap_x3f_1720_);
lean_ctor_set(v___x_1725_, 9, v_cancelTk_x3f_1721_);
lean_ctor_set_uint8(v___x_1725_, sizeof(void*)*10, v_suppressElabErrors_1722_);
lean_ctor_set_uint8(v___x_1725_, sizeof(void*)*10 + 1, v_checkDeprecated_1723_);
v___x_1726_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg(v_msg_1707_, v___x_1725_, v___y_1709_);
lean_dec_ref_known(v___x_1725_, 10);
return v___x_1726_;
}
else
{
lean_object* v_a_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1734_; 
lean_dec_ref(v_msg_1707_);
v_a_1727_ = lean_ctor_get(v___x_1711_, 0);
v_isSharedCheck_1734_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1734_ == 0)
{
v___x_1729_ = v___x_1711_;
v_isShared_1730_ = v_isSharedCheck_1734_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_a_1727_);
lean_dec(v___x_1711_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1734_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1732_; 
if (v_isShared_1730_ == 0)
{
v___x_1732_ = v___x_1729_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v_a_1727_);
v___x_1732_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
return v___x_1732_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg___boxed(lean_object* v_ref_1735_, lean_object* v_msg_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg(v_ref_1735_, v_msg_1736_, v___y_1737_, v___y_1738_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v_ref_1735_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0(lean_object* v_env_1741_, lean_object* v_declName_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
uint8_t v___x_1745_; lean_object* v_env_1746_; lean_object* v___x_1747_; uint8_t v___x_1748_; uint8_t v___x_1749_; 
v___x_1745_ = 0;
v_env_1746_ = l_Lean_Environment_setExporting(v_env_1741_, v___x_1745_);
lean_inc(v_declName_1742_);
v___x_1747_ = l_Lean_mkPrivateName(v_env_1746_, v_declName_1742_);
v___x_1748_ = 1;
lean_inc_ref(v_env_1746_);
v___x_1749_ = l_Lean_Environment_contains(v_env_1746_, v___x_1747_, v___x_1748_);
if (v___x_1749_ == 0)
{
lean_object* v___x_1750_; uint8_t v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1750_ = l_Lean_privateToUserName(v_declName_1742_);
v___x_1751_ = l_Lean_Environment_contains(v_env_1746_, v___x_1750_, v___x_1748_);
v___x_1752_ = lean_box(v___x_1751_);
v___x_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1752_);
lean_ctor_set(v___x_1753_, 1, v___y_1744_);
return v___x_1753_;
}
else
{
lean_object* v___x_1754_; lean_object* v___x_1755_; 
lean_dec_ref(v_env_1746_);
lean_dec(v_declName_1742_);
v___x_1754_ = lean_box(v___x_1749_);
v___x_1755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1754_);
lean_ctor_set(v___x_1755_, 1, v___y_1744_);
return v___x_1755_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0___boxed(lean_object* v_env_1756_, lean_object* v_declName_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0(v_env_1756_, v_declName_1757_, v___y_1758_, v___y_1759_);
lean_dec_ref(v___y_1758_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(lean_object* v_x_1761_, lean_object* v___y_1762_){
_start:
{
if (lean_obj_tag(v_x_1761_) == 0)
{
lean_object* v_a_1763_; lean_object* v___x_1764_; 
v_a_1763_ = lean_ctor_get(v_x_1761_, 0);
lean_inc(v_a_1763_);
v___x_1764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1764_, 0, v_a_1763_);
lean_ctor_set(v___x_1764_, 1, v___y_1762_);
return v___x_1764_;
}
else
{
lean_object* v_a_1765_; lean_object* v___x_1766_; 
v_a_1765_ = lean_ctor_get(v_x_1761_, 0);
lean_inc(v_a_1765_);
v___x_1766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1766_, 0, v_a_1765_);
lean_ctor_set(v___x_1766_, 1, v___y_1762_);
return v___x_1766_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg___boxed(lean_object* v_x_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(v_x_1767_, v___y_1768_);
lean_dec_ref(v_x_1767_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1(lean_object* v_env_1770_, lean_object* v_stx_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_){
_start:
{
lean_object* v___x_1774_; 
v___x_1774_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_1770_, v_stx_1771_, v___y_1772_, v___y_1773_);
if (lean_obj_tag(v___x_1774_) == 0)
{
lean_object* v_a_1775_; 
v_a_1775_ = lean_ctor_get(v___x_1774_, 0);
lean_inc(v_a_1775_);
if (lean_obj_tag(v_a_1775_) == 0)
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1784_; 
v_a_1776_ = lean_ctor_get(v___x_1774_, 1);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1784_ == 0)
{
lean_object* v_unused_1785_; 
v_unused_1785_ = lean_ctor_get(v___x_1774_, 0);
lean_dec(v_unused_1785_);
v___x_1778_ = v___x_1774_;
v_isShared_1779_ = v_isSharedCheck_1784_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1774_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1784_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1780_; lean_object* v___x_1782_; 
v___x_1780_ = lean_box(0);
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v___x_1780_);
v___x_1782_ = v___x_1778_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v___x_1780_);
lean_ctor_set(v_reuseFailAlloc_1783_, 1, v_a_1776_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
else
{
lean_object* v_val_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1814_; 
v_val_1786_ = lean_ctor_get(v_a_1775_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v_a_1775_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1788_ = v_a_1775_;
v_isShared_1789_ = v_isSharedCheck_1814_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_val_1786_);
lean_dec(v_a_1775_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1814_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v_snd_1790_; 
v_snd_1790_ = lean_ctor_get(v_val_1786_, 1);
lean_inc(v_snd_1790_);
lean_dec(v_val_1786_);
if (lean_obj_tag(v_snd_1790_) == 0)
{
lean_object* v_a_1791_; lean_object* v_a_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1800_; 
lean_del_object(v___x_1788_);
v_a_1791_ = lean_ctor_get(v___x_1774_, 1);
lean_inc(v_a_1791_);
lean_dec_ref_known(v___x_1774_, 2);
v_a_1792_ = lean_ctor_get(v_snd_1790_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v_snd_1790_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1794_ = v_snd_1790_;
v_isShared_1795_ = v_isSharedCheck_1800_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_a_1792_);
lean_dec(v_snd_1790_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1800_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1797_; 
if (v_isShared_1795_ == 0)
{
v___x_1797_ = v___x_1794_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1792_);
v___x_1797_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
lean_object* v___x_1798_; 
v___x_1798_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(v___x_1797_, v_a_1791_);
lean_dec_ref(v___x_1797_);
return v___x_1798_;
}
}
}
else
{
lean_object* v_a_1801_; lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1813_; 
v_a_1801_ = lean_ctor_get(v___x_1774_, 1);
lean_inc(v_a_1801_);
lean_dec_ref_known(v___x_1774_, 2);
v_a_1802_ = lean_ctor_get(v_snd_1790_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v_snd_1790_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1804_ = v_snd_1790_;
v_isShared_1805_ = v_isSharedCheck_1813_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v_snd_1790_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1813_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1789_ == 0)
{
lean_ctor_set(v___x_1788_, 0, v_a_1802_);
v___x_1807_ = v___x_1788_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
lean_object* v___x_1809_; 
if (v_isShared_1805_ == 0)
{
lean_ctor_set(v___x_1804_, 0, v___x_1807_);
v___x_1809_ = v___x_1804_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v___x_1807_);
v___x_1809_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
lean_object* v___x_1810_; 
v___x_1810_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(v___x_1809_, v_a_1801_);
lean_dec_ref(v___x_1809_);
return v___x_1810_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1815_; lean_object* v_a_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1823_; 
v_a_1815_ = lean_ctor_get(v___x_1774_, 0);
v_a_1816_ = lean_ctor_get(v___x_1774_, 1);
v_isSharedCheck_1823_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1818_ = v___x_1774_;
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_a_1816_);
lean_inc(v_a_1815_);
lean_dec(v___x_1774_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v___x_1821_; 
if (v_isShared_1819_ == 0)
{
v___x_1821_ = v___x_1818_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v_a_1815_);
lean_ctor_set(v_reuseFailAlloc_1822_, 1, v_a_1816_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1___boxed(lean_object* v_env_1824_, lean_object* v_stx_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_){
_start:
{
lean_object* v_res_1828_; 
v_res_1828_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1(v_env_1824_, v_stx_1825_, v___y_1826_, v___y_1827_);
lean_dec_ref(v___y_1826_);
return v_res_1828_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1834_ = l_Lean_maxRecDepthErrorMessage;
v___x_1835_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1835_, 0, v___x_1834_);
return v___x_1835_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1836_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3);
v___x_1837_ = l_Lean_MessageData_ofFormat(v___x_1836_);
return v___x_1837_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1838_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4);
v___x_1839_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2));
v___x_1840_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1839_);
lean_ctor_set(v___x_1840_, 1, v___x_1838_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg(lean_object* v_ref_1841_){
_start:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1843_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5);
v___x_1844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1844_, 0, v_ref_1841_);
lean_ctor_set(v___x_1844_, 1, v___x_1843_);
v___x_1845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1844_);
return v___x_1845_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___boxed(lean_object* v_ref_1846_, lean_object* v___y_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg(v_ref_1846_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___lam__0(lean_object* v_addEntryFn_1849_, lean_object* v_entry_1850_, lean_object* v_s_1851_){
_start:
{
lean_object* v_importedEntries_1852_; lean_object* v_state_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1861_; 
v_importedEntries_1852_ = lean_ctor_get(v_s_1851_, 0);
v_state_1853_ = lean_ctor_get(v_s_1851_, 1);
v_isSharedCheck_1861_ = !lean_is_exclusive(v_s_1851_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1855_ = v_s_1851_;
v_isShared_1856_ = v_isSharedCheck_1861_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_state_1853_);
lean_inc(v_importedEntries_1852_);
lean_dec(v_s_1851_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1861_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v_state_1857_; lean_object* v___x_1859_; 
v_state_1857_ = lean_apply_2(v_addEntryFn_1849_, v_state_1853_, v_entry_1850_);
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 1, v_state_1857_);
v___x_1859_ = v___x_1855_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_importedEntries_1852_);
lean_ctor_set(v_reuseFailAlloc_1860_, 1, v_state_1857_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg(lean_object* v_keys_1862_, lean_object* v_i_1863_, lean_object* v_k_1864_){
_start:
{
lean_object* v___x_1865_; uint8_t v___x_1866_; 
v___x_1865_ = lean_array_get_size(v_keys_1862_);
v___x_1866_ = lean_nat_dec_lt(v_i_1863_, v___x_1865_);
if (v___x_1866_ == 0)
{
lean_dec(v_i_1863_);
return v___x_1866_;
}
else
{
lean_object* v_k_x27_1867_; uint8_t v___x_1868_; 
v_k_x27_1867_ = lean_array_fget_borrowed(v_keys_1862_, v_i_1863_);
v___x_1868_ = l_Lean_instBEqExtraModUse_beq(v_k_1864_, v_k_x27_1867_);
if (v___x_1868_ == 0)
{
lean_object* v___x_1869_; lean_object* v___x_1870_; 
v___x_1869_ = lean_unsigned_to_nat(1u);
v___x_1870_ = lean_nat_add(v_i_1863_, v___x_1869_);
lean_dec(v_i_1863_);
v_i_1863_ = v___x_1870_;
goto _start;
}
else
{
lean_dec(v_i_1863_);
return v___x_1866_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg___boxed(lean_object* v_keys_1872_, lean_object* v_i_1873_, lean_object* v_k_1874_){
_start:
{
uint8_t v_res_1875_; lean_object* v_r_1876_; 
v_res_1875_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg(v_keys_1872_, v_i_1873_, v_k_1874_);
lean_dec_ref(v_k_1874_);
lean_dec_ref(v_keys_1872_);
v_r_1876_ = lean_box(v_res_1875_);
return v_r_1876_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg(lean_object* v_x_1877_, size_t v_x_1878_, lean_object* v_x_1879_){
_start:
{
if (lean_obj_tag(v_x_1877_) == 0)
{
lean_object* v_es_1880_; lean_object* v___x_1881_; size_t v___x_1882_; size_t v___x_1883_; lean_object* v_j_1884_; lean_object* v___x_1885_; 
v_es_1880_ = lean_ctor_get(v_x_1877_, 0);
v___x_1881_ = lean_box(2);
v___x_1882_ = ((size_t)31ULL);
v___x_1883_ = lean_usize_land(v_x_1878_, v___x_1882_);
v_j_1884_ = lean_usize_to_nat(v___x_1883_);
v___x_1885_ = lean_array_get_borrowed(v___x_1881_, v_es_1880_, v_j_1884_);
lean_dec(v_j_1884_);
switch(lean_obj_tag(v___x_1885_))
{
case 0:
{
lean_object* v_key_1886_; uint8_t v___x_1887_; 
v_key_1886_ = lean_ctor_get(v___x_1885_, 0);
v___x_1887_ = l_Lean_instBEqExtraModUse_beq(v_x_1879_, v_key_1886_);
return v___x_1887_;
}
case 1:
{
lean_object* v_node_1888_; size_t v___x_1889_; size_t v___x_1890_; 
v_node_1888_ = lean_ctor_get(v___x_1885_, 0);
v___x_1889_ = ((size_t)5ULL);
v___x_1890_ = lean_usize_shift_right(v_x_1878_, v___x_1889_);
v_x_1877_ = v_node_1888_;
v_x_1878_ = v___x_1890_;
goto _start;
}
default: 
{
uint8_t v___x_1892_; 
v___x_1892_ = 0;
return v___x_1892_;
}
}
}
else
{
lean_object* v_ks_1893_; lean_object* v___x_1894_; uint8_t v___x_1895_; 
v_ks_1893_ = lean_ctor_get(v_x_1877_, 0);
v___x_1894_ = lean_unsigned_to_nat(0u);
v___x_1895_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg(v_ks_1893_, v___x_1894_, v_x_1879_);
return v___x_1895_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg___boxed(lean_object* v_x_1896_, lean_object* v_x_1897_, lean_object* v_x_1898_){
_start:
{
size_t v_x_21621__boxed_1899_; uint8_t v_res_1900_; lean_object* v_r_1901_; 
v_x_21621__boxed_1899_ = lean_unbox_usize(v_x_1897_);
lean_dec(v_x_1897_);
v_res_1900_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg(v_x_1896_, v_x_21621__boxed_1899_, v_x_1898_);
lean_dec_ref(v_x_1898_);
lean_dec_ref(v_x_1896_);
v_r_1901_ = lean_box(v_res_1900_);
return v_r_1901_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg(lean_object* v_x_1902_, lean_object* v_x_1903_){
_start:
{
uint64_t v___x_1904_; size_t v___x_1905_; uint8_t v___x_1906_; 
v___x_1904_ = l_Lean_instHashableExtraModUse_hash(v_x_1903_);
v___x_1905_ = lean_uint64_to_usize(v___x_1904_);
v___x_1906_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg(v_x_1902_, v___x_1905_, v_x_1903_);
return v___x_1906_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg___boxed(lean_object* v_x_1907_, lean_object* v_x_1908_){
_start:
{
uint8_t v_res_1909_; lean_object* v_r_1910_; 
v_res_1909_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg(v_x_1907_, v_x_1908_);
lean_dec_ref(v_x_1908_);
lean_dec_ref(v_x_1907_);
v_r_1910_ = lean_box(v_res_1909_);
return v_r_1910_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0(void){
_start:
{
lean_object* v___x_1911_; 
v___x_1911_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_1911_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4(void){
_start:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; 
v___x_1916_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__3));
v___x_1917_ = l_Lean_stringToMessageData(v___x_1916_);
return v___x_1917_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6(void){
_start:
{
lean_object* v___x_1919_; lean_object* v___x_1920_; 
v___x_1919_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__5));
v___x_1920_ = l_Lean_stringToMessageData(v___x_1919_);
return v___x_1920_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7(void){
_start:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1921_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__54));
v___x_1922_ = l_Lean_stringToMessageData(v___x_1921_);
return v___x_1922_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8(void){
_start:
{
lean_object* v_cls_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; 
v_cls_1923_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__2));
v___x_1924_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1));
v___x_1925_ = l_Lean_Name_append(v___x_1924_, v_cls_1923_);
return v___x_1925_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10(void){
_start:
{
lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1927_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__9));
v___x_1928_ = l_Lean_stringToMessageData(v___x_1927_);
return v___x_1928_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12(void){
_start:
{
lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1930_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__11));
v___x_1931_ = l_Lean_stringToMessageData(v___x_1930_);
return v___x_1931_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6(lean_object* v_mod_1936_, uint8_t v_isMeta_1937_, lean_object* v_hint_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_){
_start:
{
lean_object* v___y_1943_; lean_object* v___y_1944_; lean_object* v___y_1945_; lean_object* v___y_1946_; lean_object* v___y_1947_; lean_object* v___y_1948_; lean_object* v___y_1949_; lean_object* v___y_1950_; lean_object* v___y_1951_; lean_object* v___y_1952_; lean_object* v___y_1953_; lean_object* v___y_1954_; lean_object* v___y_1955_; lean_object* v___y_1956_; lean_object* v___y_1957_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v_env_1963_; uint8_t v_isExporting_1964_; lean_object* v_entry_1965_; lean_object* v___y_1967_; lean_object* v___x_1994_; lean_object* v_env_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; uint8_t v___x_2000_; 
v___x_1961_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0);
v___x_1962_ = lean_st_ref_get(v___y_1940_);
v_env_1963_ = lean_ctor_get(v___x_1962_, 0);
lean_inc_ref(v_env_1963_);
lean_dec(v___x_1962_);
v_isExporting_1964_ = lean_ctor_get_uint8(v_env_1963_, sizeof(void*)*13);
lean_dec_ref(v_env_1963_);
lean_inc(v_mod_1936_);
v_entry_1965_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1965_, 0, v_mod_1936_);
lean_ctor_set_uint8(v_entry_1965_, sizeof(void*)*1, v_isExporting_1964_);
lean_ctor_set_uint8(v_entry_1965_, sizeof(void*)*1 + 1, v_isMeta_1937_);
v___x_1994_ = lean_st_ref_get(v___y_1940_);
v_env_1995_ = lean_ctor_get(v___x_1994_, 0);
lean_inc_ref(v_env_1995_);
lean_dec(v___x_1994_);
v___x_1996_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1997_ = lean_box(1);
v___x_1998_ = lean_box(0);
v___x_1999_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1961_, v___x_1996_, v_env_1995_, v___x_1997_, v___x_1998_);
v___x_2000_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg(v___x_1999_, v_entry_1965_);
lean_dec(v___x_1999_);
if (v___x_2000_ == 0)
{
lean_object* v_cls_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___y_2007_; lean_object* v___y_2008_; lean_object* v___y_2012_; lean_object* v___y_2013_; lean_object* v_scopes_2025_; lean_object* v___x_2026_; lean_object* v_opts_2027_; uint8_t v_hasTrace_2028_; 
v_cls_2001_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__2));
v___x_2002_ = l_Lean_inheritedTraceOptions;
v___x_2003_ = lean_st_ref_get(v___x_2002_);
v___x_2004_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2005_ = lean_st_ref_get(v___y_1940_);
v_scopes_2025_ = lean_ctor_get(v___x_2005_, 2);
lean_inc(v_scopes_2025_);
lean_dec(v___x_2005_);
v___x_2026_ = l_List_head_x21___redArg(v___x_2004_, v_scopes_2025_);
lean_dec(v_scopes_2025_);
v_opts_2027_ = lean_ctor_get(v___x_2026_, 1);
lean_inc_ref(v_opts_2027_);
lean_dec(v___x_2026_);
v_hasTrace_2028_ = lean_ctor_get_uint8(v_opts_2027_, sizeof(void*)*1);
if (v_hasTrace_2028_ == 0)
{
lean_dec_ref(v_opts_2027_);
lean_dec(v___x_2003_);
lean_dec(v_hint_1938_);
lean_dec(v_mod_1936_);
v___y_1967_ = v___y_1940_;
goto v___jp_1966_;
}
else
{
lean_object* v___x_2029_; uint8_t v___x_2030_; 
v___x_2029_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8);
v___x_2030_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_2003_, v_opts_2027_, v___x_2029_);
lean_dec_ref(v_opts_2027_);
lean_dec(v___x_2003_);
if (v___x_2030_ == 0)
{
lean_dec(v_hint_1938_);
lean_dec(v_mod_1936_);
v___y_1967_ = v___y_1940_;
goto v___jp_1966_;
}
else
{
lean_object* v___x_2031_; lean_object* v___y_2033_; 
v___x_2031_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10);
if (v_isExporting_1964_ == 0)
{
lean_object* v___x_2040_; 
v___x_2040_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__15));
v___y_2033_ = v___x_2040_;
goto v___jp_2032_;
}
else
{
lean_object* v___x_2041_; 
v___x_2041_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__16));
v___y_2033_ = v___x_2041_;
goto v___jp_2032_;
}
v___jp_2032_:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; 
lean_inc_ref(v___y_2033_);
v___x_2034_ = l_Lean_stringToMessageData(v___y_2033_);
v___x_2035_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2035_, 0, v___x_2031_);
lean_ctor_set(v___x_2035_, 1, v___x_2034_);
v___x_2036_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12);
v___x_2037_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2037_, 0, v___x_2035_);
lean_ctor_set(v___x_2037_, 1, v___x_2036_);
if (v_isMeta_1937_ == 0)
{
lean_object* v___x_2038_; 
v___x_2038_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__13));
v___y_2012_ = v___x_2037_;
v___y_2013_ = v___x_2038_;
goto v___jp_2011_;
}
else
{
lean_object* v___x_2039_; 
v___x_2039_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__14));
v___y_2012_ = v___x_2037_;
v___y_2013_ = v___x_2039_;
goto v___jp_2011_;
}
}
}
}
v___jp_2006_:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2009_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2009_, 0, v___y_2007_);
lean_ctor_set(v___x_2009_, 1, v___y_2008_);
v___x_2010_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1(v_cls_2001_, v___x_2009_, v___y_1939_, v___y_1940_);
if (lean_obj_tag(v___x_2010_) == 0)
{
lean_dec_ref_known(v___x_2010_, 1);
v___y_1967_ = v___y_1940_;
goto v___jp_1966_;
}
else
{
lean_dec_ref_known(v_entry_1965_, 1);
return v___x_2010_;
}
}
v___jp_2011_:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; uint8_t v___x_2020_; 
lean_inc_ref(v___y_2013_);
v___x_2014_ = l_Lean_stringToMessageData(v___y_2013_);
v___x_2015_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___y_2012_);
lean_ctor_set(v___x_2015_, 1, v___x_2014_);
v___x_2016_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4);
v___x_2017_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2015_);
lean_ctor_set(v___x_2017_, 1, v___x_2016_);
v___x_2018_ = l_Lean_MessageData_ofName(v_mod_1936_);
v___x_2019_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2019_, 0, v___x_2017_);
lean_ctor_set(v___x_2019_, 1, v___x_2018_);
v___x_2020_ = l_Lean_Name_isAnonymous(v_hint_1938_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
v___x_2021_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6);
v___x_2022_ = l_Lean_MessageData_ofName(v_hint_1938_);
v___x_2023_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2021_);
lean_ctor_set(v___x_2023_, 1, v___x_2022_);
v___y_2007_ = v___x_2019_;
v___y_2008_ = v___x_2023_;
goto v___jp_2006_;
}
else
{
lean_object* v___x_2024_; 
lean_dec(v_hint_1938_);
v___x_2024_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7);
v___y_2007_ = v___x_2019_;
v___y_2008_ = v___x_2024_;
goto v___jp_2006_;
}
}
}
else
{
lean_object* v___x_2042_; lean_object* v___x_2043_; 
lean_dec_ref_known(v_entry_1965_, 1);
lean_dec(v_hint_1938_);
lean_dec(v_mod_1936_);
v___x_2042_ = lean_box(0);
v___x_2043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2042_);
return v___x_2043_;
}
v___jp_1942_:
{
lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___x_1958_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_1958_, 0, v___y_1957_);
lean_ctor_set(v___x_1958_, 1, v___y_1952_);
lean_ctor_set(v___x_1958_, 2, v___y_1953_);
lean_ctor_set(v___x_1958_, 3, v___y_1949_);
lean_ctor_set(v___x_1958_, 4, v___y_1950_);
lean_ctor_set(v___x_1958_, 5, v___y_1956_);
lean_ctor_set(v___x_1958_, 6, v___y_1947_);
lean_ctor_set(v___x_1958_, 7, v___y_1946_);
lean_ctor_set(v___x_1958_, 8, v___y_1944_);
lean_ctor_set(v___x_1958_, 9, v___y_1943_);
lean_ctor_set(v___x_1958_, 10, v___y_1955_);
lean_ctor_set(v___x_1958_, 11, v___y_1954_);
lean_ctor_set(v___x_1958_, 12, v___y_1945_);
v___x_1959_ = lean_st_ref_put(v___y_1948_, v___x_1958_);
v___x_1960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1960_, 0, v___y_1951_);
return v___x_1960_;
}
v___jp_1966_:
{
lean_object* v___x_1968_; lean_object* v_env_1969_; lean_object* v_messages_1970_; lean_object* v_scopes_1971_; lean_object* v_usedQuotCtxts_1972_; lean_object* v_nextMacroScope_1973_; lean_object* v_maxRecDepth_1974_; lean_object* v_ngen_1975_; lean_object* v_auxDeclNGen_1976_; lean_object* v_infoState_1977_; lean_object* v_traceState_1978_; lean_object* v_snapshotTasks_1979_; lean_object* v_prevLinterStates_1980_; lean_object* v_codeQualityEntryTasks_1981_; lean_object* v___x_1982_; lean_object* v_toEnvExtension_1983_; lean_object* v_addEntryFn_1984_; lean_object* v_asyncMode_1985_; uint8_t v_logWrites_1986_; lean_object* v___x_1987_; lean_object* v___f_1988_; lean_object* v___x_1989_; uint8_t v___x_1990_; 
v___x_1968_ = lean_st_ref_take(v___y_1967_);
v_env_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc_ref(v_env_1969_);
v_messages_1970_ = lean_ctor_get(v___x_1968_, 1);
lean_inc_ref(v_messages_1970_);
v_scopes_1971_ = lean_ctor_get(v___x_1968_, 2);
lean_inc(v_scopes_1971_);
v_usedQuotCtxts_1972_ = lean_ctor_get(v___x_1968_, 3);
lean_inc(v_usedQuotCtxts_1972_);
v_nextMacroScope_1973_ = lean_ctor_get(v___x_1968_, 4);
lean_inc(v_nextMacroScope_1973_);
v_maxRecDepth_1974_ = lean_ctor_get(v___x_1968_, 5);
lean_inc(v_maxRecDepth_1974_);
v_ngen_1975_ = lean_ctor_get(v___x_1968_, 6);
lean_inc_ref(v_ngen_1975_);
v_auxDeclNGen_1976_ = lean_ctor_get(v___x_1968_, 7);
lean_inc_ref(v_auxDeclNGen_1976_);
v_infoState_1977_ = lean_ctor_get(v___x_1968_, 8);
lean_inc_ref(v_infoState_1977_);
v_traceState_1978_ = lean_ctor_get(v___x_1968_, 9);
lean_inc_ref(v_traceState_1978_);
v_snapshotTasks_1979_ = lean_ctor_get(v___x_1968_, 10);
lean_inc_ref(v_snapshotTasks_1979_);
v_prevLinterStates_1980_ = lean_ctor_get(v___x_1968_, 11);
lean_inc(v_prevLinterStates_1980_);
v_codeQualityEntryTasks_1981_ = lean_ctor_get(v___x_1968_, 12);
lean_inc_ref(v_codeQualityEntryTasks_1981_);
lean_dec(v___x_1968_);
v___x_1982_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_1983_ = lean_ctor_get(v___x_1982_, 0);
v_addEntryFn_1984_ = lean_ctor_get(v___x_1982_, 3);
v_asyncMode_1985_ = lean_ctor_get(v_toEnvExtension_1983_, 2);
v_logWrites_1986_ = lean_ctor_get_uint8(v_toEnvExtension_1983_, sizeof(void*)*6);
v___x_1987_ = lean_box(0);
lean_inc(v_addEntryFn_1984_);
v___f_1988_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___lam__0), 3, 2);
lean_closure_set(v___f_1988_, 0, v_addEntryFn_1984_);
lean_closure_set(v___f_1988_, 1, v_entry_1965_);
v___x_1989_ = lean_box(0);
v___x_1990_ = 1;
if (v_logWrites_1986_ == 0)
{
lean_object* v___x_1991_; 
lean_inc_ref(v_toEnvExtension_1983_);
v___x_1991_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1983_, v_env_1969_, v___f_1988_, v_asyncMode_1985_, v___x_1989_, v___x_1990_);
v___y_1943_ = v_traceState_1978_;
v___y_1944_ = v_infoState_1977_;
v___y_1945_ = v_codeQualityEntryTasks_1981_;
v___y_1946_ = v_auxDeclNGen_1976_;
v___y_1947_ = v_ngen_1975_;
v___y_1948_ = v___y_1967_;
v___y_1949_ = v_usedQuotCtxts_1972_;
v___y_1950_ = v_nextMacroScope_1973_;
v___y_1951_ = v___x_1987_;
v___y_1952_ = v_messages_1970_;
v___y_1953_ = v_scopes_1971_;
v___y_1954_ = v_prevLinterStates_1980_;
v___y_1955_ = v_snapshotTasks_1979_;
v___y_1956_ = v_maxRecDepth_1974_;
v___y_1957_ = v___x_1991_;
goto v___jp_1942_;
}
else
{
lean_object* v___x_1992_; lean_object* v___x_1993_; 
lean_inc_ref_n(v_toEnvExtension_1983_, 2);
v___x_1992_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1983_, v_env_1969_);
lean_dec_ref(v_env_1969_);
v___x_1993_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1983_, v___x_1992_, v___f_1988_, v_asyncMode_1985_, v___x_1989_, v___x_1990_);
v___y_1943_ = v_traceState_1978_;
v___y_1944_ = v_infoState_1977_;
v___y_1945_ = v_codeQualityEntryTasks_1981_;
v___y_1946_ = v_auxDeclNGen_1976_;
v___y_1947_ = v_ngen_1975_;
v___y_1948_ = v___y_1967_;
v___y_1949_ = v_usedQuotCtxts_1972_;
v___y_1950_ = v_nextMacroScope_1973_;
v___y_1951_ = v___x_1987_;
v___y_1952_ = v_messages_1970_;
v___y_1953_ = v_scopes_1971_;
v___y_1954_ = v_prevLinterStates_1980_;
v___y_1955_ = v_snapshotTasks_1979_;
v___y_1956_ = v_maxRecDepth_1974_;
v___y_1957_ = v___x_1993_;
goto v___jp_1942_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___boxed(lean_object* v_mod_2044_, lean_object* v_isMeta_2045_, lean_object* v_hint_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_){
_start:
{
uint8_t v_isMeta_boxed_2050_; lean_object* v_res_2051_; 
v_isMeta_boxed_2050_ = lean_unbox(v_isMeta_2045_);
v_res_2051_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6(v_mod_2044_, v_isMeta_boxed_2050_, v_hint_2046_, v___y_2047_, v___y_2048_);
lean_dec(v___y_2048_);
lean_dec_ref(v___y_2047_);
return v_res_2051_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7(lean_object* v___x_2052_, lean_object* v_declName_2053_, lean_object* v_as_2054_, size_t v_sz_2055_, size_t v_i_2056_, lean_object* v_b_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_){
_start:
{
uint8_t v___x_2061_; 
v___x_2061_ = lean_usize_dec_lt(v_i_2056_, v_sz_2055_);
if (v___x_2061_ == 0)
{
lean_object* v___x_2062_; 
lean_dec(v_declName_2053_);
v___x_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2062_, 0, v_b_2057_);
return v___x_2062_;
}
else
{
lean_object* v___x_2063_; lean_object* v_modules_2064_; lean_object* v___x_2065_; lean_object* v_a_2066_; lean_object* v___x_2067_; lean_object* v_toImport_2068_; lean_object* v_module_2069_; lean_object* v___x_2070_; uint8_t v___x_2071_; lean_object* v___x_2072_; 
v___x_2063_ = l_Lean_Environment_header(v___x_2052_);
v_modules_2064_ = lean_ctor_get(v___x_2063_, 3);
lean_inc_ref(v_modules_2064_);
lean_dec_ref(v___x_2063_);
v___x_2065_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2066_ = lean_array_uget_borrowed(v_as_2054_, v_i_2056_);
v___x_2067_ = lean_array_get(v___x_2065_, v_modules_2064_, v_a_2066_);
lean_dec_ref(v_modules_2064_);
v_toImport_2068_ = lean_ctor_get(v___x_2067_, 0);
lean_inc_ref(v_toImport_2068_);
lean_dec(v___x_2067_);
v_module_2069_ = lean_ctor_get(v_toImport_2068_, 0);
lean_inc(v_module_2069_);
lean_dec_ref(v_toImport_2068_);
v___x_2070_ = lean_box(0);
v___x_2071_ = 0;
lean_inc(v_declName_2053_);
v___x_2072_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6(v_module_2069_, v___x_2071_, v_declName_2053_, v___y_2058_, v___y_2059_);
if (lean_obj_tag(v___x_2072_) == 0)
{
size_t v___x_2073_; size_t v___x_2074_; 
lean_dec_ref_known(v___x_2072_, 1);
v___x_2073_ = ((size_t)1ULL);
v___x_2074_ = lean_usize_add(v_i_2056_, v___x_2073_);
v_i_2056_ = v___x_2074_;
v_b_2057_ = v___x_2070_;
goto _start;
}
else
{
lean_dec(v_declName_2053_);
return v___x_2072_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7___boxed(lean_object* v___x_2076_, lean_object* v_declName_2077_, lean_object* v_as_2078_, lean_object* v_sz_2079_, lean_object* v_i_2080_, lean_object* v_b_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_){
_start:
{
size_t v_sz_boxed_2085_; size_t v_i_boxed_2086_; lean_object* v_res_2087_; 
v_sz_boxed_2085_ = lean_unbox_usize(v_sz_2079_);
lean_dec(v_sz_2079_);
v_i_boxed_2086_ = lean_unbox_usize(v_i_2080_);
lean_dec(v_i_2080_);
v_res_2087_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7(v___x_2076_, v_declName_2077_, v_as_2078_, v_sz_boxed_2085_, v_i_boxed_2086_, v_b_2081_, v___y_2082_, v___y_2083_);
lean_dec(v___y_2083_);
lean_dec_ref(v___y_2082_);
lean_dec_ref(v_as_2078_);
lean_dec_ref(v___x_2076_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___redArg(lean_object* v_a_2088_, lean_object* v_x_2089_){
_start:
{
if (lean_obj_tag(v_x_2089_) == 0)
{
lean_object* v___x_2090_; 
v___x_2090_ = lean_box(0);
return v___x_2090_;
}
else
{
lean_object* v_key_2091_; lean_object* v_value_2092_; lean_object* v_tail_2093_; uint8_t v___x_2094_; 
v_key_2091_ = lean_ctor_get(v_x_2089_, 0);
v_value_2092_ = lean_ctor_get(v_x_2089_, 1);
v_tail_2093_ = lean_ctor_get(v_x_2089_, 2);
v___x_2094_ = lean_name_eq(v_key_2091_, v_a_2088_);
if (v___x_2094_ == 0)
{
v_x_2089_ = v_tail_2093_;
goto _start;
}
else
{
lean_object* v___x_2096_; 
lean_inc(v_value_2092_);
v___x_2096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2096_, 0, v_value_2092_);
return v___x_2096_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___redArg___boxed(lean_object* v_a_2097_, lean_object* v_x_2098_){
_start:
{
lean_object* v_res_2099_; 
v_res_2099_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___redArg(v_a_2097_, v_x_2098_);
lean_dec(v_x_2098_);
lean_dec(v_a_2097_);
return v_res_2099_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg(lean_object* v_m_2100_, lean_object* v_a_2101_){
_start:
{
lean_object* v_buckets_2102_; lean_object* v___x_2103_; uint64_t v___y_2105_; 
v_buckets_2102_ = lean_ctor_get(v_m_2100_, 1);
v___x_2103_ = lean_array_get_size(v_buckets_2102_);
if (lean_obj_tag(v_a_2101_) == 0)
{
uint64_t v___x_2119_; 
v___x_2119_ = 1723ULL;
v___y_2105_ = v___x_2119_;
goto v___jp_2104_;
}
else
{
uint64_t v_hash_2120_; 
v_hash_2120_ = lean_ctor_get_uint64(v_a_2101_, sizeof(void*)*2);
v___y_2105_ = v_hash_2120_;
goto v___jp_2104_;
}
v___jp_2104_:
{
uint64_t v___x_2106_; uint64_t v___x_2107_; uint64_t v_fold_2108_; uint64_t v___x_2109_; uint64_t v___x_2110_; uint64_t v___x_2111_; size_t v___x_2112_; size_t v___x_2113_; size_t v___x_2114_; size_t v___x_2115_; size_t v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2106_ = 32ULL;
v___x_2107_ = lean_uint64_shift_right(v___y_2105_, v___x_2106_);
v_fold_2108_ = lean_uint64_xor(v___y_2105_, v___x_2107_);
v___x_2109_ = 16ULL;
v___x_2110_ = lean_uint64_shift_right(v_fold_2108_, v___x_2109_);
v___x_2111_ = lean_uint64_xor(v_fold_2108_, v___x_2110_);
v___x_2112_ = lean_uint64_to_usize(v___x_2111_);
v___x_2113_ = lean_usize_of_nat(v___x_2103_);
v___x_2114_ = ((size_t)1ULL);
v___x_2115_ = lean_usize_sub(v___x_2113_, v___x_2114_);
v___x_2116_ = lean_usize_land(v___x_2112_, v___x_2115_);
v___x_2117_ = lean_array_uget_borrowed(v_buckets_2102_, v___x_2116_);
v___x_2118_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___redArg(v_a_2101_, v___x_2117_);
return v___x_2118_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg___boxed(lean_object* v_m_2121_, lean_object* v_a_2122_){
_start:
{
lean_object* v_res_2123_; 
v_res_2123_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg(v_m_2121_, v_a_2122_);
lean_dec(v_a_2122_);
lean_dec_ref(v_m_2121_);
return v_res_2123_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2124_; 
v___x_2124_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3(lean_object* v_declName_2127_, uint8_t v_isMeta_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_){
_start:
{
lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v_env_2137_; lean_object* v___y_2139_; lean_object* v___x_2152_; 
v___x_2132_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0);
v___x_2133_ = lean_st_ref_get(v___y_2130_);
v_env_2137_ = lean_ctor_get(v___x_2133_, 0);
lean_inc_ref(v_env_2137_);
lean_dec(v___x_2133_);
v___x_2152_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2137_, v_declName_2127_);
if (lean_obj_tag(v___x_2152_) == 0)
{
lean_dec_ref(v_env_2137_);
lean_dec(v_declName_2127_);
goto v___jp_2134_;
}
else
{
lean_object* v_val_2153_; lean_object* v___x_2154_; lean_object* v_modules_2155_; lean_object* v___x_2156_; uint8_t v___x_2157_; 
v_val_2153_ = lean_ctor_get(v___x_2152_, 0);
lean_inc(v_val_2153_);
lean_dec_ref_known(v___x_2152_, 1);
v___x_2154_ = l_Lean_Environment_header(v_env_2137_);
v_modules_2155_ = lean_ctor_get(v___x_2154_, 3);
lean_inc_ref(v_modules_2155_);
lean_dec_ref(v___x_2154_);
v___x_2156_ = lean_array_get_size(v_modules_2155_);
v___x_2157_ = lean_nat_dec_lt(v_val_2153_, v___x_2156_);
if (v___x_2157_ == 0)
{
lean_dec_ref(v_modules_2155_);
lean_dec(v_val_2153_);
lean_dec_ref(v_env_2137_);
lean_dec(v_declName_2127_);
goto v___jp_2134_;
}
else
{
lean_object* v___x_2158_; lean_object* v___x_2159_; uint8_t v___y_2161_; 
v___x_2158_ = lean_array_fget(v_modules_2155_, v_val_2153_);
lean_dec(v_val_2153_);
lean_dec_ref(v_modules_2155_);
v___x_2159_ = lean_st_ref_get(v___y_2130_);
if (v_isMeta_2128_ == 0)
{
lean_dec(v___x_2159_);
v___y_2161_ = v_isMeta_2128_;
goto v___jp_2160_;
}
else
{
lean_object* v_env_2172_; uint8_t v___x_2173_; 
v_env_2172_ = lean_ctor_get(v___x_2159_, 0);
lean_inc_ref(v_env_2172_);
lean_dec(v___x_2159_);
lean_inc(v_declName_2127_);
v___x_2173_ = l_Lean_isMarkedMeta(v_env_2172_, v_declName_2127_);
if (v___x_2173_ == 0)
{
v___y_2161_ = v_isMeta_2128_;
goto v___jp_2160_;
}
else
{
uint8_t v___x_2174_; 
v___x_2174_ = 0;
v___y_2161_ = v___x_2174_;
goto v___jp_2160_;
}
}
v___jp_2160_:
{
lean_object* v_toImport_2162_; lean_object* v_module_2163_; lean_object* v___x_2164_; 
v_toImport_2162_ = lean_ctor_get(v___x_2158_, 0);
lean_inc_ref(v_toImport_2162_);
lean_dec(v___x_2158_);
v_module_2163_ = lean_ctor_get(v_toImport_2162_, 0);
lean_inc(v_module_2163_);
lean_dec_ref(v_toImport_2162_);
lean_inc(v_declName_2127_);
v___x_2164_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6(v_module_2163_, v___y_2161_, v_declName_2127_, v___y_2129_, v___y_2130_);
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
lean_dec_ref_known(v___x_2164_, 1);
v___x_2165_ = l_Lean_indirectModUseExt;
v___x_2166_ = lean_box(1);
v___x_2167_ = lean_box(0);
lean_inc_ref(v_env_2137_);
v___x_2168_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2132_, v___x_2165_, v_env_2137_, v___x_2166_, v___x_2167_);
v___x_2169_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg(v___x_2168_, v_declName_2127_);
lean_dec(v___x_2168_);
if (lean_obj_tag(v___x_2169_) == 0)
{
lean_object* v___x_2170_; 
v___x_2170_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__1));
v___y_2139_ = v___x_2170_;
goto v___jp_2138_;
}
else
{
lean_object* v_val_2171_; 
v_val_2171_ = lean_ctor_get(v___x_2169_, 0);
lean_inc(v_val_2171_);
lean_dec_ref_known(v___x_2169_, 1);
v___y_2139_ = v_val_2171_;
goto v___jp_2138_;
}
}
else
{
lean_dec_ref(v_env_2137_);
lean_dec(v_declName_2127_);
return v___x_2164_;
}
}
}
}
v___jp_2134_:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2135_ = lean_box(0);
v___x_2136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2135_);
return v___x_2136_;
}
v___jp_2138_:
{
lean_object* v___x_2140_; size_t v_sz_2141_; size_t v___x_2142_; lean_object* v___x_2143_; 
v___x_2140_ = lean_box(0);
v_sz_2141_ = lean_array_size(v___y_2139_);
v___x_2142_ = ((size_t)0ULL);
v___x_2143_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7(v_env_2137_, v_declName_2127_, v___y_2139_, v_sz_2141_, v___x_2142_, v___x_2140_, v___y_2129_, v___y_2130_);
lean_dec_ref(v___y_2139_);
lean_dec_ref(v_env_2137_);
if (lean_obj_tag(v___x_2143_) == 0)
{
lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2150_; 
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2143_);
if (v_isSharedCheck_2150_ == 0)
{
lean_object* v_unused_2151_; 
v_unused_2151_ = lean_ctor_get(v___x_2143_, 0);
lean_dec(v_unused_2151_);
v___x_2145_ = v___x_2143_;
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
else
{
lean_dec(v___x_2143_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v___x_2148_; 
if (v_isShared_2146_ == 0)
{
lean_ctor_set(v___x_2145_, 0, v___x_2140_);
v___x_2148_ = v___x_2145_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v___x_2140_);
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
return v___x_2143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___boxed(lean_object* v_declName_2175_, lean_object* v_isMeta_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_){
_start:
{
uint8_t v_isMeta_boxed_2180_; lean_object* v_res_2181_; 
v_isMeta_boxed_2180_ = lean_unbox(v_isMeta_2176_);
v_res_2181_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3(v_declName_2175_, v_isMeta_boxed_2180_, v___y_2177_, v___y_2178_);
lean_dec(v___y_2178_);
lean_dec_ref(v___y_2177_);
return v_res_2181_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg(lean_object* v_as_x27_2182_, lean_object* v_b_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_){
_start:
{
if (lean_obj_tag(v_as_x27_2182_) == 0)
{
lean_object* v___x_2187_; 
v___x_2187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2187_, 0, v_b_2183_);
return v___x_2187_;
}
else
{
lean_object* v_head_2188_; lean_object* v_tail_2189_; lean_object* v___x_2190_; uint8_t v___x_2191_; lean_object* v___x_2192_; 
v_head_2188_ = lean_ctor_get(v_as_x27_2182_, 0);
v_tail_2189_ = lean_ctor_get(v_as_x27_2182_, 1);
v___x_2190_ = lean_box(0);
v___x_2191_ = 1;
lean_inc(v_head_2188_);
v___x_2192_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3(v_head_2188_, v___x_2191_, v___y_2184_, v___y_2185_);
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_dec_ref_known(v___x_2192_, 1);
v_as_x27_2182_ = v_tail_2189_;
v_b_2183_ = v___x_2190_;
goto _start;
}
else
{
return v___x_2192_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg___boxed(lean_object* v_as_x27_2194_, lean_object* v_b_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_){
_start:
{
lean_object* v_res_2199_; 
v_res_2199_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg(v_as_x27_2194_, v_b_2195_, v___y_2196_, v___y_2197_);
lean_dec(v___y_2197_);
lean_dec_ref(v___y_2196_);
lean_dec(v_as_x27_2194_);
return v_res_2199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(lean_object* v_x_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
lean_object* v___x_2205_; lean_object* v_env_2206_; lean_object* v___f_2207_; lean_object* v___f_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v_scopes_2211_; lean_object* v___x_2212_; lean_object* v_opts_2213_; lean_object* v___x_2214_; 
v___x_2205_ = lean_st_ref_get(v___y_2203_);
v_env_2206_ = lean_ctor_get(v___x_2205_, 0);
lean_inc_ref_n(v_env_2206_, 3);
lean_dec(v___x_2205_);
v___f_2207_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2207_, 0, v_env_2206_);
v___f_2208_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_2208_, 0, v_env_2206_);
v___x_2209_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2210_ = lean_st_ref_get(v___y_2203_);
v_scopes_2211_ = lean_ctor_get(v___x_2210_, 2);
lean_inc(v_scopes_2211_);
lean_dec(v___x_2210_);
v___x_2212_ = l_List_head_x21___redArg(v___x_2209_, v_scopes_2211_);
lean_dec(v_scopes_2211_);
v_opts_2213_ = lean_ctor_get(v___x_2212_, 1);
lean_inc_ref(v_opts_2213_);
lean_dec(v___x_2212_);
v___x_2214_ = l_Lean_Elab_Command_getScope___redArg(v___y_2203_);
if (lean_obj_tag(v___x_2214_) == 0)
{
lean_object* v_a_2215_; lean_object* v_currNamespace_2216_; lean_object* v___f_2217_; lean_object* v___x_2218_; 
v_a_2215_ = lean_ctor_get(v___x_2214_, 0);
lean_inc(v_a_2215_);
lean_dec_ref_known(v___x_2214_, 1);
v_currNamespace_2216_ = lean_ctor_get(v_a_2215_, 2);
lean_inc_n(v_currNamespace_2216_, 2);
lean_dec(v_a_2215_);
v___f_2217_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2217_, 0, v_currNamespace_2216_);
v___x_2218_ = l_Lean_Elab_Command_getScope___redArg(v___y_2203_);
if (lean_obj_tag(v___x_2218_) == 0)
{
lean_object* v_a_2219_; lean_object* v_openDecls_2220_; lean_object* v___f_2221_; lean_object* v___f_2222_; lean_object* v_methods_2223_; lean_object* v___x_2224_; 
v_a_2219_ = lean_ctor_get(v___x_2218_, 0);
lean_inc(v_a_2219_);
lean_dec_ref_known(v___x_2218_, 1);
v_openDecls_2220_ = lean_ctor_get(v_a_2219_, 3);
lean_inc_n(v_openDecls_2220_, 2);
lean_dec(v_a_2219_);
lean_inc(v_currNamespace_2216_);
lean_inc_ref(v_env_2206_);
v___f_2221_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_2221_, 0, v_env_2206_);
lean_closure_set(v___f_2221_, 1, v_currNamespace_2216_);
lean_closure_set(v___f_2221_, 2, v_openDecls_2220_);
v___f_2222_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_2222_, 0, v_env_2206_);
lean_closure_set(v___f_2222_, 1, v_opts_2213_);
lean_closure_set(v___f_2222_, 2, v_currNamespace_2216_);
lean_closure_set(v___f_2222_, 3, v_openDecls_2220_);
v_methods_2223_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_2223_, 0, v___f_2208_);
lean_ctor_set(v_methods_2223_, 1, v___f_2217_);
lean_ctor_set(v_methods_2223_, 2, v___f_2207_);
lean_ctor_set(v_methods_2223_, 3, v___f_2221_);
lean_ctor_set(v_methods_2223_, 4, v___f_2222_);
v___x_2224_ = l_Lean_Elab_Command_getRef___redArg(v___y_2202_);
if (lean_obj_tag(v___x_2224_) == 0)
{
lean_object* v_a_2225_; lean_object* v___x_2226_; 
v_a_2225_ = lean_ctor_get(v___x_2224_, 0);
lean_inc(v_a_2225_);
lean_dec_ref_known(v___x_2224_, 1);
v___x_2226_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2202_);
if (lean_obj_tag(v___x_2226_) == 0)
{
lean_object* v_a_2227_; lean_object* v_currRecDepth_2228_; lean_object* v_quotContext_x3f_2229_; lean_object* v_a_2231_; 
v_a_2227_ = lean_ctor_get(v___x_2226_, 0);
lean_inc(v_a_2227_);
lean_dec_ref_known(v___x_2226_, 1);
v_currRecDepth_2228_ = lean_ctor_get(v___y_2202_, 2);
v_quotContext_x3f_2229_ = lean_ctor_get(v___y_2202_, 5);
if (lean_obj_tag(v_quotContext_x3f_2229_) == 0)
{
lean_object* v___x_2305_; lean_object* v_a_2306_; 
v___x_2305_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(v___y_2203_);
v_a_2306_ = lean_ctor_get(v___x_2305_, 0);
lean_inc(v_a_2306_);
lean_dec_ref(v___x_2305_);
v_a_2231_ = v_a_2306_;
goto v___jp_2230_;
}
else
{
lean_object* v_val_2307_; 
v_val_2307_ = lean_ctor_get(v_quotContext_x3f_2229_, 0);
lean_inc(v_val_2307_);
v_a_2231_ = v_val_2307_;
goto v___jp_2230_;
}
v___jp_2230_:
{
lean_object* v___x_2232_; lean_object* v_maxRecDepth_2233_; lean_object* v___x_2234_; lean_object* v_nextMacroScope_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v___x_2232_ = lean_st_ref_get(v___y_2203_);
v_maxRecDepth_2233_ = lean_ctor_get(v___x_2232_, 5);
lean_inc(v_maxRecDepth_2233_);
lean_dec(v___x_2232_);
v___x_2234_ = lean_st_ref_get(v___y_2203_);
v_nextMacroScope_2235_ = lean_ctor_get(v___x_2234_, 4);
lean_inc(v_nextMacroScope_2235_);
lean_dec(v___x_2234_);
lean_inc(v_currRecDepth_2228_);
v___x_2236_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2236_, 0, v_methods_2223_);
lean_ctor_set(v___x_2236_, 1, v_a_2231_);
lean_ctor_set(v___x_2236_, 2, v_a_2227_);
lean_ctor_set(v___x_2236_, 3, v_currRecDepth_2228_);
lean_ctor_set(v___x_2236_, 4, v_maxRecDepth_2233_);
lean_ctor_set(v___x_2236_, 5, v_a_2225_);
v___x_2237_ = lean_box(0);
v___x_2238_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2238_, 0, v_nextMacroScope_2235_);
lean_ctor_set(v___x_2238_, 1, v___x_2237_);
lean_ctor_set(v___x_2238_, 2, v___x_2237_);
v___x_2239_ = lean_apply_2(v_x_2201_, v___x_2236_, v___x_2238_);
if (lean_obj_tag(v___x_2239_) == 0)
{
lean_object* v_a_2240_; lean_object* v_a_2241_; lean_object* v_macroScope_2242_; lean_object* v_traceMsgs_2243_; lean_object* v_expandedMacroDecls_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v_a_2240_ = lean_ctor_get(v___x_2239_, 1);
lean_inc(v_a_2240_);
v_a_2241_ = lean_ctor_get(v___x_2239_, 0);
lean_inc(v_a_2241_);
lean_dec_ref_known(v___x_2239_, 2);
v_macroScope_2242_ = lean_ctor_get(v_a_2240_, 0);
lean_inc(v_macroScope_2242_);
v_traceMsgs_2243_ = lean_ctor_get(v_a_2240_, 1);
lean_inc(v_traceMsgs_2243_);
v_expandedMacroDecls_2244_ = lean_ctor_get(v_a_2240_, 2);
lean_inc(v_expandedMacroDecls_2244_);
lean_dec(v_a_2240_);
v___x_2245_ = lean_box(0);
v___x_2246_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg(v_expandedMacroDecls_2244_, v___x_2245_, v___y_2202_, v___y_2203_);
lean_dec(v_expandedMacroDecls_2244_);
if (lean_obj_tag(v___x_2246_) == 0)
{
lean_object* v___x_2247_; lean_object* v_env_2248_; lean_object* v_messages_2249_; lean_object* v_scopes_2250_; lean_object* v_usedQuotCtxts_2251_; lean_object* v_maxRecDepth_2252_; lean_object* v_ngen_2253_; lean_object* v_auxDeclNGen_2254_; lean_object* v_infoState_2255_; lean_object* v_traceState_2256_; lean_object* v_snapshotTasks_2257_; lean_object* v_prevLinterStates_2258_; lean_object* v_codeQualityEntryTasks_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2285_; 
lean_dec_ref_known(v___x_2246_, 1);
v___x_2247_ = lean_st_ref_take(v___y_2203_);
v_env_2248_ = lean_ctor_get(v___x_2247_, 0);
v_messages_2249_ = lean_ctor_get(v___x_2247_, 1);
v_scopes_2250_ = lean_ctor_get(v___x_2247_, 2);
v_usedQuotCtxts_2251_ = lean_ctor_get(v___x_2247_, 3);
v_maxRecDepth_2252_ = lean_ctor_get(v___x_2247_, 5);
v_ngen_2253_ = lean_ctor_get(v___x_2247_, 6);
v_auxDeclNGen_2254_ = lean_ctor_get(v___x_2247_, 7);
v_infoState_2255_ = lean_ctor_get(v___x_2247_, 8);
v_traceState_2256_ = lean_ctor_get(v___x_2247_, 9);
v_snapshotTasks_2257_ = lean_ctor_get(v___x_2247_, 10);
v_prevLinterStates_2258_ = lean_ctor_get(v___x_2247_, 11);
v_codeQualityEntryTasks_2259_ = lean_ctor_get(v___x_2247_, 12);
v_isSharedCheck_2285_ = !lean_is_exclusive(v___x_2247_);
if (v_isSharedCheck_2285_ == 0)
{
lean_object* v_unused_2286_; 
v_unused_2286_ = lean_ctor_get(v___x_2247_, 4);
lean_dec(v_unused_2286_);
v___x_2261_ = v___x_2247_;
v_isShared_2262_ = v_isSharedCheck_2285_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2259_);
lean_inc(v_prevLinterStates_2258_);
lean_inc(v_snapshotTasks_2257_);
lean_inc(v_traceState_2256_);
lean_inc(v_infoState_2255_);
lean_inc(v_auxDeclNGen_2254_);
lean_inc(v_ngen_2253_);
lean_inc(v_maxRecDepth_2252_);
lean_inc(v_usedQuotCtxts_2251_);
lean_inc(v_scopes_2250_);
lean_inc(v_messages_2249_);
lean_inc(v_env_2248_);
lean_dec(v___x_2247_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2285_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2264_; 
if (v_isShared_2262_ == 0)
{
lean_ctor_set(v___x_2261_, 4, v_macroScope_2242_);
v___x_2264_ = v___x_2261_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v_env_2248_);
lean_ctor_set(v_reuseFailAlloc_2284_, 1, v_messages_2249_);
lean_ctor_set(v_reuseFailAlloc_2284_, 2, v_scopes_2250_);
lean_ctor_set(v_reuseFailAlloc_2284_, 3, v_usedQuotCtxts_2251_);
lean_ctor_set(v_reuseFailAlloc_2284_, 4, v_macroScope_2242_);
lean_ctor_set(v_reuseFailAlloc_2284_, 5, v_maxRecDepth_2252_);
lean_ctor_set(v_reuseFailAlloc_2284_, 6, v_ngen_2253_);
lean_ctor_set(v_reuseFailAlloc_2284_, 7, v_auxDeclNGen_2254_);
lean_ctor_set(v_reuseFailAlloc_2284_, 8, v_infoState_2255_);
lean_ctor_set(v_reuseFailAlloc_2284_, 9, v_traceState_2256_);
lean_ctor_set(v_reuseFailAlloc_2284_, 10, v_snapshotTasks_2257_);
lean_ctor_set(v_reuseFailAlloc_2284_, 11, v_prevLinterStates_2258_);
lean_ctor_set(v_reuseFailAlloc_2284_, 12, v_codeQualityEntryTasks_2259_);
v___x_2264_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2265_ = lean_st_ref_put(v___y_2203_, v___x_2264_);
v___x_2266_ = l_List_reverse___redArg(v_traceMsgs_2243_);
v___x_2267_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5(v___x_2266_, v___y_2202_, v___y_2203_);
if (lean_obj_tag(v___x_2267_) == 0)
{
lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2274_; 
v_isSharedCheck_2274_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2274_ == 0)
{
lean_object* v_unused_2275_; 
v_unused_2275_ = lean_ctor_get(v___x_2267_, 0);
lean_dec(v_unused_2275_);
v___x_2269_ = v___x_2267_;
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
else
{
lean_dec(v___x_2267_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2272_; 
if (v_isShared_2270_ == 0)
{
lean_ctor_set(v___x_2269_, 0, v_a_2241_);
v___x_2272_ = v___x_2269_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_a_2241_);
v___x_2272_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
return v___x_2272_;
}
}
}
else
{
lean_object* v_a_2276_; lean_object* v___x_2278_; uint8_t v_isShared_2279_; uint8_t v_isSharedCheck_2283_; 
lean_dec(v_a_2241_);
v_a_2276_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2283_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2283_ == 0)
{
v___x_2278_ = v___x_2267_;
v_isShared_2279_ = v_isSharedCheck_2283_;
goto v_resetjp_2277_;
}
else
{
lean_inc(v_a_2276_);
lean_dec(v___x_2267_);
v___x_2278_ = lean_box(0);
v_isShared_2279_ = v_isSharedCheck_2283_;
goto v_resetjp_2277_;
}
v_resetjp_2277_:
{
lean_object* v___x_2281_; 
if (v_isShared_2279_ == 0)
{
v___x_2281_ = v___x_2278_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v_a_2276_);
v___x_2281_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
return v___x_2281_;
}
}
}
}
}
}
else
{
lean_object* v_a_2287_; lean_object* v___x_2289_; uint8_t v_isShared_2290_; uint8_t v_isSharedCheck_2294_; 
lean_dec(v_traceMsgs_2243_);
lean_dec(v_macroScope_2242_);
lean_dec(v_a_2241_);
v_a_2287_ = lean_ctor_get(v___x_2246_, 0);
v_isSharedCheck_2294_ = !lean_is_exclusive(v___x_2246_);
if (v_isSharedCheck_2294_ == 0)
{
v___x_2289_ = v___x_2246_;
v_isShared_2290_ = v_isSharedCheck_2294_;
goto v_resetjp_2288_;
}
else
{
lean_inc(v_a_2287_);
lean_dec(v___x_2246_);
v___x_2289_ = lean_box(0);
v_isShared_2290_ = v_isSharedCheck_2294_;
goto v_resetjp_2288_;
}
v_resetjp_2288_:
{
lean_object* v___x_2292_; 
if (v_isShared_2290_ == 0)
{
v___x_2292_ = v___x_2289_;
goto v_reusejp_2291_;
}
else
{
lean_object* v_reuseFailAlloc_2293_; 
v_reuseFailAlloc_2293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2293_, 0, v_a_2287_);
v___x_2292_ = v_reuseFailAlloc_2293_;
goto v_reusejp_2291_;
}
v_reusejp_2291_:
{
return v___x_2292_;
}
}
}
}
else
{
lean_object* v_a_2295_; 
v_a_2295_ = lean_ctor_get(v___x_2239_, 0);
lean_inc(v_a_2295_);
lean_dec_ref_known(v___x_2239_, 2);
if (lean_obj_tag(v_a_2295_) == 0)
{
lean_object* v_a_2296_; lean_object* v_a_2297_; lean_object* v___x_2298_; uint8_t v___x_2299_; 
v_a_2296_ = lean_ctor_get(v_a_2295_, 0);
lean_inc(v_a_2296_);
v_a_2297_ = lean_ctor_get(v_a_2295_, 1);
lean_inc_ref(v_a_2297_);
lean_dec_ref_known(v_a_2295_, 2);
v___x_2298_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___closed__0));
v___x_2299_ = lean_string_dec_eq(v_a_2297_, v___x_2298_);
if (v___x_2299_ == 0)
{
lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; 
v___x_2300_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2300_, 0, v_a_2297_);
v___x_2301_ = l_Lean_MessageData_ofFormat(v___x_2300_);
v___x_2302_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg(v_a_2296_, v___x_2301_, v___y_2202_, v___y_2203_);
lean_dec(v_a_2296_);
return v___x_2302_;
}
else
{
lean_object* v___x_2303_; 
lean_dec_ref(v_a_2297_);
v___x_2303_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg(v_a_2296_);
return v___x_2303_;
}
}
else
{
lean_object* v___x_2304_; 
v___x_2304_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2304_;
}
}
}
}
else
{
lean_object* v_a_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2315_; 
lean_dec(v_a_2225_);
lean_dec_ref_known(v_methods_2223_, 5);
lean_dec_ref(v_x_2201_);
v_a_2308_ = lean_ctor_get(v___x_2226_, 0);
v_isSharedCheck_2315_ = !lean_is_exclusive(v___x_2226_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2310_ = v___x_2226_;
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_a_2308_);
lean_dec(v___x_2226_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v___x_2313_; 
if (v_isShared_2311_ == 0)
{
v___x_2313_ = v___x_2310_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_a_2308_);
v___x_2313_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
return v___x_2313_;
}
}
}
}
else
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_dec_ref_known(v_methods_2223_, 5);
lean_dec_ref(v_x_2201_);
v_a_2316_ = lean_ctor_get(v___x_2224_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2224_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2224_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2224_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
else
{
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2331_; 
lean_dec_ref(v___f_2217_);
lean_dec(v_currNamespace_2216_);
lean_dec_ref(v_opts_2213_);
lean_dec_ref(v___f_2208_);
lean_dec_ref(v___f_2207_);
lean_dec_ref(v_env_2206_);
lean_dec_ref(v_x_2201_);
v_a_2324_ = lean_ctor_get(v___x_2218_, 0);
v_isSharedCheck_2331_ = !lean_is_exclusive(v___x_2218_);
if (v_isSharedCheck_2331_ == 0)
{
v___x_2326_ = v___x_2218_;
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2218_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2329_; 
if (v_isShared_2327_ == 0)
{
v___x_2329_ = v___x_2326_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v_a_2324_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
}
}
else
{
lean_object* v_a_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2339_; 
lean_dec_ref(v_opts_2213_);
lean_dec_ref(v___f_2208_);
lean_dec_ref(v___f_2207_);
lean_dec_ref(v_env_2206_);
lean_dec_ref(v_x_2201_);
v_a_2332_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2339_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2339_ == 0)
{
v___x_2334_ = v___x_2214_;
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_a_2332_);
lean_dec(v___x_2214_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2337_; 
if (v_isShared_2335_ == 0)
{
v___x_2337_ = v___x_2334_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_a_2332_);
v___x_2337_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
return v___x_2337_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___boxed(lean_object* v_x_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_){
_start:
{
lean_object* v_res_2344_; 
v_res_2344_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v_x_2340_, v___y_2341_, v___y_2342_);
lean_dec(v___y_2342_);
lean_dec_ref(v___y_2341_);
return v_res_2344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8(lean_object* v_as_2345_, size_t v_i_2346_, size_t v_stop_2347_, lean_object* v_b_2348_){
_start:
{
lean_object* v___y_2350_; uint8_t v___x_2354_; 
v___x_2354_ = lean_usize_dec_eq(v_i_2346_, v_stop_2347_);
if (v___x_2354_ == 0)
{
lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; uint8_t v___x_2358_; 
v___x_2355_ = lean_array_uget_borrowed(v_as_2345_, v_i_2346_);
lean_inc(v___x_2355_);
v___x_2356_ = l_Lean_Syntax_getKind(v___x_2355_);
v___x_2357_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10));
v___x_2358_ = lean_name_eq(v___x_2356_, v___x_2357_);
lean_dec(v___x_2356_);
if (v___x_2358_ == 0)
{
v___y_2350_ = v_b_2348_;
goto v___jp_2349_;
}
else
{
lean_object* v___x_2359_; 
lean_inc(v___x_2355_);
v___x_2359_ = lean_array_push(v_b_2348_, v___x_2355_);
v___y_2350_ = v___x_2359_;
goto v___jp_2349_;
}
}
else
{
return v_b_2348_;
}
v___jp_2349_:
{
size_t v___x_2351_; size_t v___x_2352_; 
v___x_2351_ = ((size_t)1ULL);
v___x_2352_ = lean_usize_add(v_i_2346_, v___x_2351_);
v_i_2346_ = v___x_2352_;
v_b_2348_ = v___y_2350_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8___boxed(lean_object* v_as_2360_, lean_object* v_i_2361_, lean_object* v_stop_2362_, lean_object* v_b_2363_){
_start:
{
size_t v_i_boxed_2364_; size_t v_stop_boxed_2365_; lean_object* v_res_2366_; 
v_i_boxed_2364_ = lean_unbox_usize(v_i_2361_);
lean_dec(v_i_2361_);
v_stop_boxed_2365_ = lean_unbox_usize(v_stop_2362_);
lean_dec(v_stop_2362_);
v_res_2366_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8(v_as_2360_, v_i_boxed_2364_, v_stop_boxed_2365_, v_b_2363_);
lean_dec_ref(v_as_2360_);
return v_res_2366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation(lean_object* v_x_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_){
_start:
{
lean_object* v___y_2414_; lean_object* v___y_2415_; lean_object* v___y_2416_; lean_object* v___y_2417_; lean_object* v___y_2418_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___y_2443_; lean_object* v___y_2444_; lean_object* v___y_2445_; lean_object* v___y_2446_; lean_object* v___y_2447_; lean_object* v___y_2448_; lean_object* v___y_2449_; lean_object* v___y_2450_; lean_object* v___y_2451_; lean_object* v___y_2452_; size_t v___y_2496_; lean_object* v___y_2497_; lean_object* v___y_2498_; lean_object* v___y_2499_; lean_object* v___y_2500_; lean_object* v___y_2501_; lean_object* v___y_2502_; lean_object* v___y_2503_; lean_object* v___y_2504_; uint8_t v___y_2505_; lean_object* v___y_2506_; lean_object* v___y_2507_; lean_object* v___y_2508_; lean_object* v___y_2509_; lean_object* v___x_2550_; uint8_t v___x_2551_; 
v___x_2440_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0));
v___x_2441_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1));
v___x_2550_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__5));
lean_inc(v_x_2409_);
v___x_2551_ = l_Lean_Syntax_isOfKind(v_x_2409_, v___x_2550_);
if (v___x_2551_ == 0)
{
lean_object* v___x_2552_; 
lean_dec(v_x_2409_);
v___x_2552_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2552_;
}
else
{
lean_object* v___x_2553_; lean_object* v___y_2555_; size_t v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2564_; lean_object* v___y_2565_; lean_object* v___y_2566_; lean_object* v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2569_; lean_object* v___y_2570_; uint8_t v___y_2571_; lean_object* v___y_2572_; lean_object* v___y_2573_; lean_object* v___y_2574_; lean_object* v___y_2626_; size_t v___y_2627_; lean_object* v___y_2628_; lean_object* v___y_2629_; lean_object* v___y_2630_; lean_object* v___y_2631_; lean_object* v___y_2632_; lean_object* v___y_2633_; lean_object* v___y_2634_; lean_object* v___y_2635_; lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v___y_2638_; lean_object* v___y_2639_; lean_object* v___y_2640_; lean_object* v___y_2641_; uint8_t v___y_2642_; lean_object* v___y_2643_; lean_object* v___y_2644_; lean_object* v___y_2645_; size_t v___y_2662_; lean_object* v___y_2663_; lean_object* v___y_2664_; lean_object* v___y_2665_; lean_object* v___y_2666_; lean_object* v___y_2667_; lean_object* v___y_2668_; lean_object* v___y_2669_; lean_object* v___y_2670_; lean_object* v___y_2671_; lean_object* v___y_2672_; lean_object* v___y_2673_; lean_object* v___y_2674_; lean_object* v___y_2675_; lean_object* v___y_2676_; lean_object* v___y_2677_; uint8_t v___y_2678_; lean_object* v___y_2679_; lean_object* v___y_2680_; lean_object* v___y_2681_; size_t v___y_2693_; lean_object* v___y_2694_; lean_object* v___y_2695_; lean_object* v___y_2696_; lean_object* v___y_2697_; lean_object* v___y_2698_; lean_object* v___y_2699_; lean_object* v___y_2700_; lean_object* v___y_2701_; lean_object* v___y_2702_; lean_object* v___y_2703_; lean_object* v___y_2704_; lean_object* v___y_2705_; lean_object* v___y_2706_; lean_object* v___y_2707_; uint8_t v___y_2708_; lean_object* v___y_2709_; lean_object* v___y_2710_; lean_object* v___y_2711_; lean_object* v___y_2712_; lean_object* v___y_2728_; size_t v___y_2729_; lean_object* v___y_2730_; lean_object* v___y_2731_; lean_object* v___y_2732_; lean_object* v___y_2733_; lean_object* v___y_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; lean_object* v___y_2739_; lean_object* v___y_2740_; uint8_t v___y_2741_; lean_object* v___y_2742_; lean_object* v___y_2743_; lean_object* v___y_2752_; lean_object* v___y_2753_; lean_object* v___y_2754_; lean_object* v___y_2755_; lean_object* v___y_2756_; lean_object* v___y_2757_; lean_object* v_prio_x3f_2758_; lean_object* v___y_2759_; lean_object* v___y_2760_; lean_object* v___y_2819_; lean_object* v___y_2820_; lean_object* v___y_2821_; lean_object* v___y_2822_; lean_object* v___y_2823_; lean_object* v___y_2824_; lean_object* v___y_2825_; lean_object* v_name_x3f_2826_; lean_object* v___y_2827_; lean_object* v___y_2828_; lean_object* v___y_2842_; lean_object* v___y_2843_; lean_object* v___y_2844_; lean_object* v___y_2845_; lean_object* v___y_2846_; lean_object* v___y_2847_; lean_object* v_prec_x3f_2848_; lean_object* v___y_2849_; lean_object* v___y_2850_; lean_object* v___y_2864_; lean_object* v___y_2865_; lean_object* v_attrs_x3f_2866_; lean_object* v___y_2867_; lean_object* v___y_2868_; lean_object* v_doc_x3f_2889_; lean_object* v___y_2890_; lean_object* v___y_2891_; lean_object* v___x_2905_; uint8_t v___x_2906_; 
v___x_2553_ = lean_unsigned_to_nat(0u);
v___x_2905_ = l_Lean_Syntax_getArg(v_x_2409_, v___x_2553_);
v___x_2906_ = l_Lean_Syntax_isNone(v___x_2905_);
if (v___x_2906_ == 0)
{
lean_object* v___x_2907_; uint8_t v___x_2908_; 
v___x_2907_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_2905_);
v___x_2908_ = l_Lean_Syntax_matchesNull(v___x_2905_, v___x_2907_);
if (v___x_2908_ == 0)
{
lean_object* v___x_2909_; 
lean_dec(v___x_2905_);
lean_dec(v_x_2409_);
v___x_2909_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2909_;
}
else
{
lean_object* v_doc_x3f_2910_; lean_object* v___x_2911_; uint8_t v___x_2912_; 
v_doc_x3f_2910_ = l_Lean_Syntax_getArg(v___x_2905_, v___x_2553_);
lean_dec(v___x_2905_);
v___x_2911_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__15));
lean_inc(v_doc_x3f_2910_);
v___x_2912_ = l_Lean_Syntax_isOfKind(v_doc_x3f_2910_, v___x_2911_);
if (v___x_2912_ == 0)
{
lean_object* v___x_2913_; 
lean_dec(v_doc_x3f_2910_);
lean_dec(v_x_2409_);
v___x_2913_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2913_;
}
else
{
lean_object* v___x_2914_; 
v___x_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2914_, 0, v_doc_x3f_2910_);
v_doc_x3f_2889_ = v___x_2914_;
v___y_2890_ = v_a_2410_;
v___y_2891_ = v_a_2411_;
goto v___jp_2888_;
}
}
}
else
{
lean_object* v___x_2915_; 
lean_dec(v___x_2905_);
v___x_2915_ = lean_box(0);
v_doc_x3f_2889_ = v___x_2915_;
v___y_2890_ = v_a_2410_;
v___y_2891_ = v_a_2411_;
goto v___jp_2888_;
}
v___jp_2554_:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; size_t v_sz_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; 
lean_inc_ref_n(v___y_2566_, 2);
v___x_2575_ = l_Array_append___redArg(v___y_2566_, v___y_2574_);
lean_dec_ref(v___y_2574_);
lean_inc_n(v___y_2572_, 3);
lean_inc_n(v___y_2567_, 9);
v___x_2576_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2576_, 0, v___y_2567_);
lean_ctor_set(v___x_2576_, 1, v___y_2572_);
lean_ctor_set(v___x_2576_, 2, v___x_2575_);
v___x_2577_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__7));
v___x_2578_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__53));
v___x_2579_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2579_, 0, v___y_2567_);
lean_ctor_set(v___x_2579_, 1, v___x_2578_);
v___x_2580_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__8));
v___x_2581_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___y_2567_);
lean_ctor_set(v___x_2581_, 1, v___x_2580_);
v___x_2582_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__26));
v___x_2583_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2583_, 0, v___y_2567_);
lean_ctor_set(v___x_2583_, 1, v___x_2582_);
v___x_2584_ = l_Nat_reprFast(v___y_2557_);
v___x_2585_ = lean_box(2);
v___x_2586_ = l_Lean_Syntax_mkNumLit(v___x_2584_, v___x_2585_);
v___x_2587_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__37));
v___x_2588_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2588_, 0, v___y_2567_);
lean_ctor_set(v___x_2588_, 1, v___x_2587_);
v___x_2589_ = l_Lean_Syntax_node5(v___y_2567_, v___x_2577_, v___x_2579_, v___x_2581_, v___x_2583_, v___x_2586_, v___x_2588_);
v___x_2590_ = l_Lean_Syntax_node1(v___y_2567_, v___y_2572_, v___x_2589_);
v_sz_2591_ = lean_array_size(v___y_2558_);
v___x_2592_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3(v_sz_2591_, v___y_2556_, v___y_2558_);
v___x_2593_ = l_Array_append___redArg(v___y_2566_, v___x_2592_);
lean_dec_ref(v___x_2592_);
v___x_2594_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2594_, 0, v___y_2567_);
lean_ctor_set(v___x_2594_, 1, v___y_2572_);
lean_ctor_set(v___x_2594_, 2, v___x_2593_);
v___x_2595_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6));
v___x_2596_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2596_, 0, v___y_2567_);
lean_ctor_set(v___x_2596_, 1, v___x_2595_);
v___x_2597_ = lean_unsigned_to_nat(10u);
v___x_2598_ = lean_mk_empty_array_with_capacity(v___x_2597_);
v___x_2599_ = lean_array_push(v___x_2598_, v___y_2564_);
v___x_2600_ = lean_array_push(v___x_2599_, v___y_2569_);
lean_inc(v___y_2562_);
v___x_2601_ = lean_array_push(v___x_2600_, v___y_2562_);
v___x_2602_ = lean_array_push(v___x_2601_, v___y_2555_);
v___x_2603_ = lean_array_push(v___x_2602_, v___y_2563_);
v___x_2604_ = lean_array_push(v___x_2603_, v___x_2576_);
v___x_2605_ = lean_array_push(v___x_2604_, v___x_2590_);
v___x_2606_ = lean_array_push(v___x_2605_, v___x_2594_);
v___x_2607_ = lean_array_push(v___x_2606_, v___x_2596_);
v___x_2608_ = lean_array_push(v___x_2607_, v___y_2559_);
lean_inc(v___y_2565_);
v___x_2609_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2609_, 0, v___y_2567_);
lean_ctor_set(v___x_2609_, 1, v___y_2565_);
lean_ctor_set(v___x_2609_, 2, v___x_2608_);
v___x_2610_ = l_Lean_Elab_Command_elabSyntax(v___x_2609_, v___y_2560_, v___y_2570_);
if (lean_obj_tag(v___x_2610_) == 0)
{
lean_object* v_a_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; uint8_t v___x_2614_; 
v_a_2611_ = lean_ctor_get(v___x_2610_, 0);
lean_inc(v_a_2611_);
lean_dec_ref_known(v___x_2610_, 1);
v___x_2612_ = lean_array_get_size(v___y_2561_);
v___x_2613_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__68));
v___x_2614_ = lean_nat_dec_lt(v___x_2553_, v___x_2612_);
if (v___x_2614_ == 0)
{
v___y_2496_ = v___y_2556_;
v___y_2497_ = v___y_2560_;
v___y_2498_ = v___y_2561_;
v___y_2499_ = v___y_2562_;
v___y_2500_ = v_a_2611_;
v___y_2501_ = v___y_2566_;
v___y_2502_ = v___y_2568_;
v___y_2503_ = v___x_2585_;
v___y_2504_ = v___y_2570_;
v___y_2505_ = v___y_2571_;
v___y_2506_ = v___y_2572_;
v___y_2507_ = v___y_2573_;
v___y_2508_ = v___x_2587_;
v___y_2509_ = v___x_2613_;
goto v___jp_2495_;
}
else
{
size_t v___x_2615_; lean_object* v___x_2616_; 
v___x_2615_ = lean_usize_of_nat(v___x_2612_);
v___x_2616_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8(v___y_2561_, v___y_2556_, v___x_2615_, v___x_2613_);
v___y_2496_ = v___y_2556_;
v___y_2497_ = v___y_2560_;
v___y_2498_ = v___y_2561_;
v___y_2499_ = v___y_2562_;
v___y_2500_ = v_a_2611_;
v___y_2501_ = v___y_2566_;
v___y_2502_ = v___y_2568_;
v___y_2503_ = v___x_2585_;
v___y_2504_ = v___y_2570_;
v___y_2505_ = v___y_2571_;
v___y_2506_ = v___y_2572_;
v___y_2507_ = v___y_2573_;
v___y_2508_ = v___x_2587_;
v___y_2509_ = v___x_2616_;
goto v___jp_2495_;
}
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
lean_dec(v___y_2568_);
lean_dec(v___y_2562_);
lean_dec_ref(v___y_2561_);
v_a_2617_ = lean_ctor_get(v___x_2610_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2610_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v___x_2610_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2610_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2622_; 
if (v_isShared_2620_ == 0)
{
v___x_2622_ = v___x_2619_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v_a_2617_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
return v___x_2622_;
}
}
}
}
v___jp_2625_:
{
lean_object* v___x_2646_; lean_object* v___x_2647_; 
lean_inc_ref(v___y_2636_);
v___x_2646_ = l_Array_append___redArg(v___y_2636_, v___y_2645_);
lean_dec_ref(v___y_2645_);
lean_inc(v___y_2643_);
lean_inc(v___y_2637_);
v___x_2647_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2647_, 0, v___y_2637_);
lean_ctor_set(v___x_2647_, 1, v___y_2643_);
lean_ctor_set(v___x_2647_, 2, v___x_2646_);
if (lean_obj_tag(v___y_2638_) == 1)
{
lean_object* v_val_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
v_val_2648_ = lean_ctor_get(v___y_2638_, 0);
lean_inc(v_val_2648_);
lean_dec_ref_known(v___y_2638_, 1);
v___x_2649_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__10));
v___x_2650_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__53));
lean_inc_n(v___y_2637_, 5);
v___x_2651_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2651_, 0, v___y_2637_);
lean_ctor_set(v___x_2651_, 1, v___x_2650_);
v___x_2652_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__11));
v___x_2653_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2653_, 0, v___y_2637_);
lean_ctor_set(v___x_2653_, 1, v___x_2652_);
v___x_2654_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__26));
v___x_2655_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2655_, 0, v___y_2637_);
lean_ctor_set(v___x_2655_, 1, v___x_2654_);
v___x_2656_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__37));
v___x_2657_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2657_, 0, v___y_2637_);
lean_ctor_set(v___x_2657_, 1, v___x_2656_);
v___x_2658_ = l_Lean_Syntax_node5(v___y_2637_, v___x_2649_, v___x_2651_, v___x_2653_, v___x_2655_, v_val_2648_, v___x_2657_);
v___x_2659_ = l_Array_mkArray1___redArg(v___x_2658_);
v___y_2555_ = v___y_2626_;
v___y_2556_ = v___y_2627_;
v___y_2557_ = v___y_2628_;
v___y_2558_ = v___y_2629_;
v___y_2559_ = v___y_2630_;
v___y_2560_ = v___y_2631_;
v___y_2561_ = v___y_2632_;
v___y_2562_ = v___y_2633_;
v___y_2563_ = v___x_2647_;
v___y_2564_ = v___y_2634_;
v___y_2565_ = v___y_2635_;
v___y_2566_ = v___y_2636_;
v___y_2567_ = v___y_2637_;
v___y_2568_ = v___y_2639_;
v___y_2569_ = v___y_2640_;
v___y_2570_ = v___y_2641_;
v___y_2571_ = v___y_2642_;
v___y_2572_ = v___y_2643_;
v___y_2573_ = v___y_2644_;
v___y_2574_ = v___x_2659_;
goto v___jp_2554_;
}
else
{
lean_object* v___x_2660_; 
lean_dec(v___y_2638_);
v___x_2660_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7));
v___y_2555_ = v___y_2626_;
v___y_2556_ = v___y_2627_;
v___y_2557_ = v___y_2628_;
v___y_2558_ = v___y_2629_;
v___y_2559_ = v___y_2630_;
v___y_2560_ = v___y_2631_;
v___y_2561_ = v___y_2632_;
v___y_2562_ = v___y_2633_;
v___y_2563_ = v___x_2647_;
v___y_2564_ = v___y_2634_;
v___y_2565_ = v___y_2635_;
v___y_2566_ = v___y_2636_;
v___y_2567_ = v___y_2637_;
v___y_2568_ = v___y_2639_;
v___y_2569_ = v___y_2640_;
v___y_2570_ = v___y_2641_;
v___y_2571_ = v___y_2642_;
v___y_2572_ = v___y_2643_;
v___y_2573_ = v___y_2644_;
v___y_2574_ = v___x_2660_;
goto v___jp_2554_;
}
}
v___jp_2661_:
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; 
lean_inc_ref(v___y_2671_);
v___x_2682_ = l_Array_append___redArg(v___y_2671_, v___y_2681_);
lean_dec_ref(v___y_2681_);
lean_inc(v___y_2679_);
lean_inc_n(v___y_2672_, 2);
v___x_2683_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2683_, 0, v___y_2672_);
lean_ctor_set(v___x_2683_, 1, v___y_2679_);
lean_ctor_set(v___x_2683_, 2, v___x_2682_);
lean_inc_ref(v___y_2676_);
v___x_2684_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2684_, 0, v___y_2672_);
lean_ctor_set(v___x_2684_, 1, v___y_2676_);
if (lean_obj_tag(v___y_2674_) == 1)
{
lean_object* v_val_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; 
v_val_2685_ = lean_ctor_get(v___y_2674_, 0);
lean_inc(v_val_2685_);
lean_dec_ref_known(v___y_2674_, 1);
v___x_2686_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5));
v___x_2687_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6));
lean_inc_n(v___y_2672_, 2);
v___x_2688_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2688_, 0, v___y_2672_);
lean_ctor_set(v___x_2688_, 1, v___x_2687_);
v___x_2689_ = l_Lean_Syntax_node2(v___y_2672_, v___x_2686_, v___x_2688_, v_val_2685_);
v___x_2690_ = l_Array_mkArray1___redArg(v___x_2689_);
v___y_2626_ = v___x_2684_;
v___y_2627_ = v___y_2662_;
v___y_2628_ = v___y_2663_;
v___y_2629_ = v___y_2664_;
v___y_2630_ = v___y_2665_;
v___y_2631_ = v___y_2666_;
v___y_2632_ = v___y_2667_;
v___y_2633_ = v___y_2668_;
v___y_2634_ = v___y_2669_;
v___y_2635_ = v___y_2670_;
v___y_2636_ = v___y_2671_;
v___y_2637_ = v___y_2672_;
v___y_2638_ = v___y_2673_;
v___y_2639_ = v___y_2675_;
v___y_2640_ = v___x_2683_;
v___y_2641_ = v___y_2677_;
v___y_2642_ = v___y_2678_;
v___y_2643_ = v___y_2679_;
v___y_2644_ = v___y_2680_;
v___y_2645_ = v___x_2690_;
goto v___jp_2625_;
}
else
{
lean_object* v___x_2691_; 
lean_dec(v___y_2674_);
v___x_2691_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7));
v___y_2626_ = v___x_2684_;
v___y_2627_ = v___y_2662_;
v___y_2628_ = v___y_2663_;
v___y_2629_ = v___y_2664_;
v___y_2630_ = v___y_2665_;
v___y_2631_ = v___y_2666_;
v___y_2632_ = v___y_2667_;
v___y_2633_ = v___y_2668_;
v___y_2634_ = v___y_2669_;
v___y_2635_ = v___y_2670_;
v___y_2636_ = v___y_2671_;
v___y_2637_ = v___y_2672_;
v___y_2638_ = v___y_2673_;
v___y_2639_ = v___y_2675_;
v___y_2640_ = v___x_2683_;
v___y_2641_ = v___y_2677_;
v___y_2642_ = v___y_2678_;
v___y_2643_ = v___y_2679_;
v___y_2644_ = v___y_2680_;
v___y_2645_ = v___x_2691_;
goto v___jp_2625_;
}
}
v___jp_2692_:
{
lean_object* v___x_2713_; lean_object* v___x_2714_; 
lean_inc_ref(v___y_2701_);
v___x_2713_ = l_Array_append___redArg(v___y_2701_, v___y_2712_);
lean_dec_ref(v___y_2712_);
lean_inc(v___y_2709_);
lean_inc(v___y_2702_);
v___x_2714_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2714_, 0, v___y_2702_);
lean_ctor_set(v___x_2714_, 1, v___y_2709_);
lean_ctor_set(v___x_2714_, 2, v___x_2713_);
if (lean_obj_tag(v___y_2711_) == 1)
{
lean_object* v_val_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v_val_2715_ = lean_ctor_get(v___y_2711_, 0);
lean_inc(v_val_2715_);
lean_dec_ref_known(v___y_2711_, 1);
v___x_2716_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__11));
lean_inc_ref(v___y_2710_);
v___x_2717_ = l_Lean_Name_mkStr4(v___x_2440_, v___x_2441_, v___y_2710_, v___x_2716_);
v___x_2718_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__13));
lean_inc_n(v___y_2702_, 4);
v___x_2719_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2719_, 0, v___y_2702_);
lean_ctor_set(v___x_2719_, 1, v___x_2718_);
lean_inc_ref(v___y_2701_);
v___x_2720_ = l_Array_append___redArg(v___y_2701_, v_val_2715_);
lean_dec(v_val_2715_);
lean_inc(v___y_2709_);
v___x_2721_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2721_, 0, v___y_2702_);
lean_ctor_set(v___x_2721_, 1, v___y_2709_);
lean_ctor_set(v___x_2721_, 2, v___x_2720_);
v___x_2722_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__17));
v___x_2723_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2723_, 0, v___y_2702_);
lean_ctor_set(v___x_2723_, 1, v___x_2722_);
v___x_2724_ = l_Lean_Syntax_node3(v___y_2702_, v___x_2717_, v___x_2719_, v___x_2721_, v___x_2723_);
v___x_2725_ = l_Array_mkArray1___redArg(v___x_2724_);
v___y_2662_ = v___y_2693_;
v___y_2663_ = v___y_2694_;
v___y_2664_ = v___y_2695_;
v___y_2665_ = v___y_2696_;
v___y_2666_ = v___y_2697_;
v___y_2667_ = v___y_2698_;
v___y_2668_ = v___y_2699_;
v___y_2669_ = v___x_2714_;
v___y_2670_ = v___y_2700_;
v___y_2671_ = v___y_2701_;
v___y_2672_ = v___y_2702_;
v___y_2673_ = v___y_2703_;
v___y_2674_ = v___y_2705_;
v___y_2675_ = v___y_2704_;
v___y_2676_ = v___y_2706_;
v___y_2677_ = v___y_2707_;
v___y_2678_ = v___y_2708_;
v___y_2679_ = v___y_2709_;
v___y_2680_ = v___y_2710_;
v___y_2681_ = v___x_2725_;
goto v___jp_2661_;
}
else
{
lean_object* v___x_2726_; 
lean_dec(v___y_2711_);
v___x_2726_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7));
v___y_2662_ = v___y_2693_;
v___y_2663_ = v___y_2694_;
v___y_2664_ = v___y_2695_;
v___y_2665_ = v___y_2696_;
v___y_2666_ = v___y_2697_;
v___y_2667_ = v___y_2698_;
v___y_2668_ = v___y_2699_;
v___y_2669_ = v___x_2714_;
v___y_2670_ = v___y_2700_;
v___y_2671_ = v___y_2701_;
v___y_2672_ = v___y_2702_;
v___y_2673_ = v___y_2703_;
v___y_2674_ = v___y_2705_;
v___y_2675_ = v___y_2704_;
v___y_2676_ = v___y_2706_;
v___y_2677_ = v___y_2707_;
v___y_2678_ = v___y_2708_;
v___y_2679_ = v___y_2709_;
v___y_2680_ = v___y_2710_;
v___y_2681_ = v___x_2726_;
goto v___jp_2661_;
}
}
v___jp_2727_:
{
lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2744_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__12));
v___x_2745_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__13));
v___x_2746_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_2747_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14);
if (lean_obj_tag(v___y_2728_) == 1)
{
lean_object* v_val_2748_; lean_object* v___x_2749_; 
v_val_2748_ = lean_ctor_get(v___y_2728_, 0);
lean_inc(v_val_2748_);
lean_dec_ref_known(v___y_2728_, 1);
v___x_2749_ = l_Array_mkArray1___redArg(v_val_2748_);
v___y_2693_ = v___y_2729_;
v___y_2694_ = v___y_2730_;
v___y_2695_ = v___y_2731_;
v___y_2696_ = v___y_2732_;
v___y_2697_ = v___y_2733_;
v___y_2698_ = v___y_2734_;
v___y_2699_ = v___y_2735_;
v___y_2700_ = v___x_2745_;
v___y_2701_ = v___x_2747_;
v___y_2702_ = v___y_2736_;
v___y_2703_ = v___y_2737_;
v___y_2704_ = v___y_2738_;
v___y_2705_ = v___y_2739_;
v___y_2706_ = v___x_2744_;
v___y_2707_ = v___y_2740_;
v___y_2708_ = v___y_2741_;
v___y_2709_ = v___x_2746_;
v___y_2710_ = v___y_2742_;
v___y_2711_ = v___y_2743_;
v___y_2712_ = v___x_2749_;
goto v___jp_2692_;
}
else
{
lean_object* v___x_2750_; 
lean_dec(v___y_2728_);
v___x_2750_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7));
v___y_2693_ = v___y_2729_;
v___y_2694_ = v___y_2730_;
v___y_2695_ = v___y_2731_;
v___y_2696_ = v___y_2732_;
v___y_2697_ = v___y_2733_;
v___y_2698_ = v___y_2734_;
v___y_2699_ = v___y_2735_;
v___y_2700_ = v___x_2745_;
v___y_2701_ = v___x_2747_;
v___y_2702_ = v___y_2736_;
v___y_2703_ = v___y_2737_;
v___y_2704_ = v___y_2738_;
v___y_2705_ = v___y_2739_;
v___y_2706_ = v___x_2744_;
v___y_2707_ = v___y_2740_;
v___y_2708_ = v___y_2741_;
v___y_2709_ = v___x_2746_;
v___y_2710_ = v___y_2742_;
v___y_2711_ = v___y_2743_;
v___y_2712_ = v___x_2750_;
goto v___jp_2692_;
}
}
v___jp_2751_:
{
lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v_rhs_2764_; lean_object* v___x_2765_; lean_object* v_items_2766_; lean_object* v_attrs_x3f_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2761_ = lean_unsigned_to_nat(7u);
v___x_2762_ = l_Lean_Syntax_getArg(v_x_2409_, v___x_2761_);
v___x_2763_ = lean_unsigned_to_nat(9u);
v_rhs_2764_ = l_Lean_Syntax_getArg(v_x_2409_, v___x_2763_);
v___x_2765_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3));
v_items_2766_ = l_Lean_Syntax_getArgs(v___x_2762_);
lean_dec(v___x_2762_);
lean_inc(v_rhs_2764_);
v_attrs_x3f_2767_ = l_Lean_Elab_Command_addInheritDocDefault(v_rhs_2764_, v___y_2755_);
v___x_2768_ = lean_alloc_closure((void*)(l_Lean_evalOptPrio___boxed), 3, 1);
lean_closure_set(v___x_2768_, 0, v_prio_x3f_2758_);
v___x_2769_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v___x_2768_, v___y_2759_, v___y_2760_);
if (lean_obj_tag(v___x_2769_) == 0)
{
lean_object* v_a_2770_; size_t v_sz_2771_; size_t v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; 
v_a_2770_ = lean_ctor_get(v___x_2769_, 0);
lean_inc(v_a_2770_);
lean_dec_ref_known(v___x_2769_, 1);
v_sz_2771_ = lean_array_size(v_items_2766_);
v___x_2772_ = ((size_t)0ULL);
v___x_2773_ = lean_box_usize(v_sz_2771_);
v___x_2774_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___boxed__const__1));
lean_inc_ref(v_items_2766_);
v___x_2775_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2___boxed), 5, 3);
lean_closure_set(v___x_2775_, 0, v___x_2773_);
lean_closure_set(v___x_2775_, 1, v___x_2774_);
lean_closure_set(v___x_2775_, 2, v_items_2766_);
v___x_2776_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v___x_2775_, v___y_2759_, v___y_2760_);
if (lean_obj_tag(v___x_2776_) == 0)
{
lean_object* v_a_2777_; uint8_t v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; 
v_a_2777_ = lean_ctor_get(v___x_2776_, 0);
lean_inc(v_a_2777_);
lean_dec_ref_known(v___x_2776_, 1);
v___x_2778_ = 0;
v___x_2779_ = l_Lean_mkIdentFrom(v_x_2409_, v___x_2765_, v___x_2778_);
lean_dec(v_x_2409_);
v___x_2780_ = l_Lean_Elab_Command_getRef___redArg(v___y_2759_);
if (lean_obj_tag(v___x_2780_) == 0)
{
lean_object* v_a_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; 
v_a_2781_ = lean_ctor_get(v___x_2780_, 0);
lean_inc(v_a_2781_);
lean_dec_ref_known(v___x_2780_, 1);
v___x_2782_ = l_Lean_SourceInfo_fromRef(v_a_2781_, v___x_2778_);
lean_dec(v_a_2781_);
v___x_2783_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2759_);
if (lean_obj_tag(v___x_2783_) == 0)
{
lean_object* v_quotContext_x3f_2784_; 
lean_dec_ref_known(v___x_2783_, 1);
v_quotContext_x3f_2784_ = lean_ctor_get(v___y_2759_, 5);
if (lean_obj_tag(v_quotContext_x3f_2784_) == 0)
{
lean_object* v___x_2785_; 
v___x_2785_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(v___y_2760_);
lean_dec_ref(v___x_2785_);
v___y_2728_ = v___y_2752_;
v___y_2729_ = v___x_2772_;
v___y_2730_ = v_a_2770_;
v___y_2731_ = v_a_2777_;
v___y_2732_ = v___x_2779_;
v___y_2733_ = v___y_2759_;
v___y_2734_ = v_items_2766_;
v___y_2735_ = v___y_2756_;
v___y_2736_ = v___x_2782_;
v___y_2737_ = v___y_2753_;
v___y_2738_ = v_rhs_2764_;
v___y_2739_ = v___y_2754_;
v___y_2740_ = v___y_2760_;
v___y_2741_ = v___x_2778_;
v___y_2742_ = v___y_2757_;
v___y_2743_ = v_attrs_x3f_2767_;
goto v___jp_2727_;
}
else
{
v___y_2728_ = v___y_2752_;
v___y_2729_ = v___x_2772_;
v___y_2730_ = v_a_2770_;
v___y_2731_ = v_a_2777_;
v___y_2732_ = v___x_2779_;
v___y_2733_ = v___y_2759_;
v___y_2734_ = v_items_2766_;
v___y_2735_ = v___y_2756_;
v___y_2736_ = v___x_2782_;
v___y_2737_ = v___y_2753_;
v___y_2738_ = v_rhs_2764_;
v___y_2739_ = v___y_2754_;
v___y_2740_ = v___y_2760_;
v___y_2741_ = v___x_2778_;
v___y_2742_ = v___y_2757_;
v___y_2743_ = v_attrs_x3f_2767_;
goto v___jp_2727_;
}
}
else
{
lean_object* v_a_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2793_; 
lean_dec(v___x_2782_);
lean_dec(v___x_2779_);
lean_dec(v_a_2777_);
lean_dec(v_a_2770_);
lean_dec(v_attrs_x3f_2767_);
lean_dec_ref(v_items_2766_);
lean_dec(v_rhs_2764_);
lean_dec(v___y_2756_);
lean_dec(v___y_2754_);
lean_dec(v___y_2753_);
lean_dec(v___y_2752_);
v_a_2786_ = lean_ctor_get(v___x_2783_, 0);
v_isSharedCheck_2793_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2788_ = v___x_2783_;
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_a_2786_);
lean_dec(v___x_2783_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2791_; 
if (v_isShared_2789_ == 0)
{
v___x_2791_ = v___x_2788_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v_a_2786_);
v___x_2791_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
return v___x_2791_;
}
}
}
}
else
{
lean_object* v_a_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2801_; 
lean_dec(v___x_2779_);
lean_dec(v_a_2777_);
lean_dec(v_a_2770_);
lean_dec(v_attrs_x3f_2767_);
lean_dec_ref(v_items_2766_);
lean_dec(v_rhs_2764_);
lean_dec(v___y_2756_);
lean_dec(v___y_2754_);
lean_dec(v___y_2753_);
lean_dec(v___y_2752_);
v_a_2794_ = lean_ctor_get(v___x_2780_, 0);
v_isSharedCheck_2801_ = !lean_is_exclusive(v___x_2780_);
if (v_isSharedCheck_2801_ == 0)
{
v___x_2796_ = v___x_2780_;
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_a_2794_);
lean_dec(v___x_2780_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
lean_object* v___x_2799_; 
if (v_isShared_2797_ == 0)
{
v___x_2799_ = v___x_2796_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v_a_2794_);
v___x_2799_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
return v___x_2799_;
}
}
}
}
else
{
lean_object* v_a_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2809_; 
lean_dec(v_a_2770_);
lean_dec(v_attrs_x3f_2767_);
lean_dec_ref(v_items_2766_);
lean_dec(v_rhs_2764_);
lean_dec(v___y_2756_);
lean_dec(v___y_2754_);
lean_dec(v___y_2753_);
lean_dec(v___y_2752_);
lean_dec(v_x_2409_);
v_a_2802_ = lean_ctor_get(v___x_2776_, 0);
v_isSharedCheck_2809_ = !lean_is_exclusive(v___x_2776_);
if (v_isSharedCheck_2809_ == 0)
{
v___x_2804_ = v___x_2776_;
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_a_2802_);
lean_dec(v___x_2776_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
lean_object* v___x_2807_; 
if (v_isShared_2805_ == 0)
{
v___x_2807_ = v___x_2804_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v_a_2802_);
v___x_2807_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
return v___x_2807_;
}
}
}
}
else
{
lean_object* v_a_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2817_; 
lean_dec(v_attrs_x3f_2767_);
lean_dec_ref(v_items_2766_);
lean_dec(v_rhs_2764_);
lean_dec(v___y_2756_);
lean_dec(v___y_2754_);
lean_dec(v___y_2753_);
lean_dec(v___y_2752_);
lean_dec(v_x_2409_);
v_a_2810_ = lean_ctor_get(v___x_2769_, 0);
v_isSharedCheck_2817_ = !lean_is_exclusive(v___x_2769_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2812_ = v___x_2769_;
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_a_2810_);
lean_dec(v___x_2769_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2815_; 
if (v_isShared_2813_ == 0)
{
v___x_2815_ = v___x_2812_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_a_2810_);
v___x_2815_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
return v___x_2815_;
}
}
}
}
v___jp_2818_:
{
lean_object* v___x_2829_; lean_object* v___x_2830_; uint8_t v___x_2831_; 
v___x_2829_ = lean_unsigned_to_nat(6u);
v___x_2830_ = l_Lean_Syntax_getArg(v_x_2409_, v___x_2829_);
v___x_2831_ = l_Lean_Syntax_isNone(v___x_2830_);
if (v___x_2831_ == 0)
{
uint8_t v___x_2832_; 
lean_inc(v___x_2830_);
v___x_2832_ = l_Lean_Syntax_matchesNull(v___x_2830_, v___y_2823_);
if (v___x_2832_ == 0)
{
lean_object* v___x_2833_; 
lean_dec(v___x_2830_);
lean_dec(v_name_x3f_2826_);
lean_dec(v___y_2824_);
lean_dec(v___y_2822_);
lean_dec(v___y_2821_);
lean_dec(v___y_2820_);
lean_dec(v_x_2409_);
v___x_2833_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2833_;
}
else
{
lean_object* v___x_2834_; lean_object* v___x_2835_; uint8_t v___x_2836_; 
v___x_2834_ = l_Lean_Syntax_getArg(v___x_2830_, v___x_2553_);
lean_dec(v___x_2830_);
v___x_2835_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__7));
lean_inc(v___x_2834_);
v___x_2836_ = l_Lean_Syntax_isOfKind(v___x_2834_, v___x_2835_);
if (v___x_2836_ == 0)
{
lean_object* v___x_2837_; 
lean_dec(v___x_2834_);
lean_dec(v_name_x3f_2826_);
lean_dec(v___y_2824_);
lean_dec(v___y_2822_);
lean_dec(v___y_2821_);
lean_dec(v___y_2820_);
lean_dec(v_x_2409_);
v___x_2837_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2837_;
}
else
{
lean_object* v_prio_x3f_2838_; lean_object* v___x_2839_; 
v_prio_x3f_2838_ = l_Lean_Syntax_getArg(v___x_2834_, v___y_2819_);
lean_dec(v___x_2834_);
v___x_2839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2839_, 0, v_prio_x3f_2838_);
v___y_2752_ = v___y_2820_;
v___y_2753_ = v_name_x3f_2826_;
v___y_2754_ = v___y_2821_;
v___y_2755_ = v___y_2822_;
v___y_2756_ = v___y_2824_;
v___y_2757_ = v___y_2825_;
v_prio_x3f_2758_ = v___x_2839_;
v___y_2759_ = v___y_2827_;
v___y_2760_ = v___y_2828_;
goto v___jp_2751_;
}
}
}
else
{
lean_object* v___x_2840_; 
lean_dec(v___x_2830_);
v___x_2840_ = lean_box(0);
v___y_2752_ = v___y_2820_;
v___y_2753_ = v_name_x3f_2826_;
v___y_2754_ = v___y_2821_;
v___y_2755_ = v___y_2822_;
v___y_2756_ = v___y_2824_;
v___y_2757_ = v___y_2825_;
v_prio_x3f_2758_ = v___x_2840_;
v___y_2759_ = v___y_2827_;
v___y_2760_ = v___y_2828_;
goto v___jp_2751_;
}
}
v___jp_2841_:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; uint8_t v___x_2853_; 
v___x_2851_ = lean_unsigned_to_nat(5u);
v___x_2852_ = l_Lean_Syntax_getArg(v_x_2409_, v___x_2851_);
v___x_2853_ = l_Lean_Syntax_isNone(v___x_2852_);
if (v___x_2853_ == 0)
{
uint8_t v___x_2854_; 
lean_inc(v___x_2852_);
v___x_2854_ = l_Lean_Syntax_matchesNull(v___x_2852_, v___y_2845_);
if (v___x_2854_ == 0)
{
lean_object* v___x_2855_; 
lean_dec(v___x_2852_);
lean_dec(v_prec_x3f_2848_);
lean_dec(v___y_2846_);
lean_dec(v___y_2844_);
lean_dec(v___y_2842_);
lean_dec(v_x_2409_);
v___x_2855_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2855_;
}
else
{
lean_object* v___x_2856_; lean_object* v___x_2857_; uint8_t v___x_2858_; 
v___x_2856_ = l_Lean_Syntax_getArg(v___x_2852_, v___x_2553_);
lean_dec(v___x_2852_);
v___x_2857_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__10));
lean_inc(v___x_2856_);
v___x_2858_ = l_Lean_Syntax_isOfKind(v___x_2856_, v___x_2857_);
if (v___x_2858_ == 0)
{
lean_object* v___x_2859_; 
lean_dec(v___x_2856_);
lean_dec(v_prec_x3f_2848_);
lean_dec(v___y_2846_);
lean_dec(v___y_2844_);
lean_dec(v___y_2842_);
lean_dec(v_x_2409_);
v___x_2859_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2859_;
}
else
{
lean_object* v_name_x3f_2860_; lean_object* v___x_2861_; 
v_name_x3f_2860_ = l_Lean_Syntax_getArg(v___x_2856_, v___y_2843_);
lean_dec(v___x_2856_);
v___x_2861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2861_, 0, v_name_x3f_2860_);
v___y_2819_ = v___y_2843_;
v___y_2820_ = v___y_2842_;
v___y_2821_ = v_prec_x3f_2848_;
v___y_2822_ = v___y_2844_;
v___y_2823_ = v___y_2845_;
v___y_2824_ = v___y_2846_;
v___y_2825_ = v___y_2847_;
v_name_x3f_2826_ = v___x_2861_;
v___y_2827_ = v___y_2849_;
v___y_2828_ = v___y_2850_;
goto v___jp_2818_;
}
}
}
else
{
lean_object* v___x_2862_; 
lean_dec(v___x_2852_);
v___x_2862_ = lean_box(0);
v___y_2819_ = v___y_2843_;
v___y_2820_ = v___y_2842_;
v___y_2821_ = v_prec_x3f_2848_;
v___y_2822_ = v___y_2844_;
v___y_2823_ = v___y_2845_;
v___y_2824_ = v___y_2846_;
v___y_2825_ = v___y_2847_;
v_name_x3f_2826_ = v___x_2862_;
v___y_2827_ = v___y_2849_;
v___y_2828_ = v___y_2850_;
goto v___jp_2818_;
}
}
v___jp_2863_:
{
lean_object* v___x_2869_; lean_object* v_attrKind_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; uint8_t v___x_2873_; 
v___x_2869_ = lean_unsigned_to_nat(2u);
v_attrKind_2870_ = l_Lean_Syntax_getArg(v_x_2409_, v___x_2869_);
v___x_2871_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2));
v___x_2872_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6));
lean_inc(v_attrKind_2870_);
v___x_2873_ = l_Lean_Syntax_isOfKind(v_attrKind_2870_, v___x_2872_);
if (v___x_2873_ == 0)
{
lean_object* v___x_2874_; 
lean_dec(v_attrKind_2870_);
lean_dec(v_attrs_x3f_2866_);
lean_dec(v___y_2864_);
lean_dec(v_x_2409_);
v___x_2874_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2874_;
}
else
{
lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; uint8_t v___x_2878_; 
v___x_2875_ = lean_unsigned_to_nat(3u);
v___x_2876_ = lean_unsigned_to_nat(4u);
v___x_2877_ = l_Lean_Syntax_getArg(v_x_2409_, v___x_2876_);
v___x_2878_ = l_Lean_Syntax_isNone(v___x_2877_);
if (v___x_2878_ == 0)
{
uint8_t v___x_2879_; 
lean_inc(v___x_2877_);
v___x_2879_ = l_Lean_Syntax_matchesNull(v___x_2877_, v___y_2865_);
if (v___x_2879_ == 0)
{
lean_object* v___x_2880_; 
lean_dec(v___x_2877_);
lean_dec(v_attrKind_2870_);
lean_dec(v_attrs_x3f_2866_);
lean_dec(v___y_2864_);
lean_dec(v_x_2409_);
v___x_2880_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2880_;
}
else
{
lean_object* v___x_2881_; lean_object* v___x_2882_; uint8_t v___x_2883_; 
v___x_2881_ = l_Lean_Syntax_getArg(v___x_2877_, v___x_2553_);
lean_dec(v___x_2877_);
v___x_2882_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5));
lean_inc(v___x_2881_);
v___x_2883_ = l_Lean_Syntax_isOfKind(v___x_2881_, v___x_2882_);
if (v___x_2883_ == 0)
{
lean_object* v___x_2884_; 
lean_dec(v___x_2881_);
lean_dec(v_attrKind_2870_);
lean_dec(v_attrs_x3f_2866_);
lean_dec(v___y_2864_);
lean_dec(v_x_2409_);
v___x_2884_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2884_;
}
else
{
lean_object* v_prec_x3f_2885_; lean_object* v___x_2886_; 
v_prec_x3f_2885_ = l_Lean_Syntax_getArg(v___x_2881_, v___y_2865_);
lean_dec(v___x_2881_);
v___x_2886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2886_, 0, v_prec_x3f_2885_);
v___y_2842_ = v___y_2864_;
v___y_2843_ = v___x_2875_;
v___y_2844_ = v_attrs_x3f_2866_;
v___y_2845_ = v___y_2865_;
v___y_2846_ = v_attrKind_2870_;
v___y_2847_ = v___x_2871_;
v_prec_x3f_2848_ = v___x_2886_;
v___y_2849_ = v___y_2867_;
v___y_2850_ = v___y_2868_;
goto v___jp_2841_;
}
}
}
else
{
lean_object* v___x_2887_; 
lean_dec(v___x_2877_);
v___x_2887_ = lean_box(0);
v___y_2842_ = v___y_2864_;
v___y_2843_ = v___x_2875_;
v___y_2844_ = v_attrs_x3f_2866_;
v___y_2845_ = v___y_2865_;
v___y_2846_ = v_attrKind_2870_;
v___y_2847_ = v___x_2871_;
v_prec_x3f_2848_ = v___x_2887_;
v___y_2849_ = v___y_2867_;
v___y_2850_ = v___y_2868_;
goto v___jp_2841_;
}
}
}
v___jp_2888_:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; uint8_t v___x_2894_; 
v___x_2892_ = lean_unsigned_to_nat(1u);
v___x_2893_ = l_Lean_Syntax_getArg(v_x_2409_, v___x_2892_);
v___x_2894_ = l_Lean_Syntax_isNone(v___x_2893_);
if (v___x_2894_ == 0)
{
uint8_t v___x_2895_; 
lean_inc(v___x_2893_);
v___x_2895_ = l_Lean_Syntax_matchesNull(v___x_2893_, v___x_2892_);
if (v___x_2895_ == 0)
{
lean_object* v___x_2896_; 
lean_dec(v___x_2893_);
lean_dec(v_doc_x3f_2889_);
lean_dec(v_x_2409_);
v___x_2896_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2896_;
}
else
{
lean_object* v___x_2897_; lean_object* v___x_2898_; uint8_t v___x_2899_; 
v___x_2897_ = l_Lean_Syntax_getArg(v___x_2893_, v___x_2553_);
lean_dec(v___x_2893_);
v___x_2898_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__12));
lean_inc(v___x_2897_);
v___x_2899_ = l_Lean_Syntax_isOfKind(v___x_2897_, v___x_2898_);
if (v___x_2899_ == 0)
{
lean_object* v___x_2900_; 
lean_dec(v___x_2897_);
lean_dec(v_doc_x3f_2889_);
lean_dec(v_x_2409_);
v___x_2900_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2900_;
}
else
{
lean_object* v___x_2901_; lean_object* v_attrs_x3f_2902_; lean_object* v___x_2903_; 
v___x_2901_ = l_Lean_Syntax_getArg(v___x_2897_, v___x_2892_);
lean_dec(v___x_2897_);
v_attrs_x3f_2902_ = l_Lean_Syntax_getArgs(v___x_2901_);
lean_dec(v___x_2901_);
v___x_2903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2903_, 0, v_attrs_x3f_2902_);
v___y_2864_ = v_doc_x3f_2889_;
v___y_2865_ = v___x_2892_;
v_attrs_x3f_2866_ = v___x_2903_;
v___y_2867_ = v___y_2890_;
v___y_2868_ = v___y_2891_;
goto v___jp_2863_;
}
}
}
else
{
lean_object* v___x_2904_; 
lean_dec(v___x_2893_);
v___x_2904_ = lean_box(0);
v___y_2864_ = v_doc_x3f_2889_;
v___y_2865_ = v___x_2892_;
v_attrs_x3f_2866_ = v___x_2904_;
v___y_2867_ = v___y_2890_;
v___y_2868_ = v___y_2891_;
goto v___jp_2863_;
}
}
}
v___jp_2413_:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2419_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_mkUnexpander___boxed), 5, 3);
lean_closure_set(v___x_2419_, 0, v___y_2416_);
lean_closure_set(v___x_2419_, 1, v___y_2415_);
lean_closure_set(v___x_2419_, 2, v___y_2414_);
v___x_2420_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v___x_2419_, v___y_2417_, v___y_2418_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_object* v_a_2421_; lean_object* v___x_2423_; uint8_t v_isShared_2424_; uint8_t v_isSharedCheck_2431_; 
v_a_2421_ = lean_ctor_get(v___x_2420_, 0);
v_isSharedCheck_2431_ = !lean_is_exclusive(v___x_2420_);
if (v_isSharedCheck_2431_ == 0)
{
v___x_2423_ = v___x_2420_;
v_isShared_2424_ = v_isSharedCheck_2431_;
goto v_resetjp_2422_;
}
else
{
lean_inc(v_a_2421_);
lean_dec(v___x_2420_);
v___x_2423_ = lean_box(0);
v_isShared_2424_ = v_isSharedCheck_2431_;
goto v_resetjp_2422_;
}
v_resetjp_2422_:
{
if (lean_obj_tag(v_a_2421_) == 1)
{
lean_object* v_val_2425_; lean_object* v___x_2426_; 
lean_del_object(v___x_2423_);
v_val_2425_ = lean_ctor_get(v_a_2421_, 0);
lean_inc(v_val_2425_);
lean_dec_ref_known(v_a_2421_, 1);
v___x_2426_ = l_Lean_Elab_Command_elabCommand(v_val_2425_, v___y_2417_, v___y_2418_);
return v___x_2426_;
}
else
{
lean_object* v___x_2427_; lean_object* v___x_2429_; 
lean_dec(v_a_2421_);
v___x_2427_ = lean_box(0);
if (v_isShared_2424_ == 0)
{
lean_ctor_set(v___x_2423_, 0, v___x_2427_);
v___x_2429_ = v___x_2423_;
goto v_reusejp_2428_;
}
else
{
lean_object* v_reuseFailAlloc_2430_; 
v_reuseFailAlloc_2430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2430_, 0, v___x_2427_);
v___x_2429_ = v_reuseFailAlloc_2430_;
goto v_reusejp_2428_;
}
v_reusejp_2428_:
{
return v___x_2429_;
}
}
}
}
else
{
lean_object* v_a_2432_; lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_2439_; 
v_a_2432_ = lean_ctor_get(v___x_2420_, 0);
v_isSharedCheck_2439_ = !lean_is_exclusive(v___x_2420_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2434_ = v___x_2420_;
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
else
{
lean_inc(v_a_2432_);
lean_dec(v___x_2420_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
lean_object* v___x_2437_; 
if (v_isShared_2435_ == 0)
{
v___x_2437_ = v___x_2434_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v_a_2432_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
return v___x_2437_;
}
}
}
}
v___jp_2442_:
{
lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; uint8_t v___x_2483_; 
v___x_2453_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__0));
v___x_2454_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__1));
lean_inc_ref(v___y_2444_);
lean_inc_n(v___y_2449_, 4);
lean_inc_n(v___y_2443_, 15);
v___x_2455_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2455_, 0, v___y_2443_);
lean_ctor_set(v___x_2455_, 1, v___y_2449_);
lean_ctor_set(v___x_2455_, 2, v___y_2444_);
v___x_2456_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2456_, 0, v___y_2443_);
lean_ctor_set(v___x_2456_, 1, v___x_2453_);
v___x_2457_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__29));
lean_inc_ref_n(v___y_2451_, 4);
v___x_2458_ = l_Lean_Name_mkStr4(v___x_2440_, v___x_2441_, v___y_2451_, v___x_2457_);
v___x_2459_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__31));
v___x_2460_ = l_Lean_Name_mkStr4(v___x_2440_, v___x_2441_, v___y_2451_, v___x_2459_);
v___x_2461_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__33));
v___x_2462_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2462_, 0, v___y_2443_);
lean_ctor_set(v___x_2462_, 1, v___x_2461_);
v___x_2463_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__34));
v___x_2464_ = l_Lean_Name_mkStr4(v___x_2440_, v___x_2441_, v___y_2451_, v___x_2463_);
v___x_2465_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__36));
v___x_2466_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2466_, 0, v___y_2443_);
lean_ctor_set(v___x_2466_, 1, v___x_2465_);
lean_inc_ref(v___y_2452_);
v___x_2467_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2467_, 0, v___y_2443_);
lean_ctor_set(v___x_2467_, 1, v___y_2452_);
lean_inc_ref(v___x_2467_);
lean_inc(v___y_2448_);
lean_inc_ref(v___x_2466_);
lean_inc(v___x_2464_);
v___x_2468_ = l_Lean_Syntax_node3(v___y_2443_, v___x_2464_, v___x_2466_, v___y_2448_, v___x_2467_);
v___x_2469_ = l_Lean_Syntax_node1(v___y_2443_, v___y_2449_, v___x_2468_);
v___x_2470_ = l_Lean_Syntax_node1(v___y_2443_, v___y_2449_, v___x_2469_);
v___x_2471_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__38));
v___x_2472_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2472_, 0, v___y_2443_);
lean_ctor_set(v___x_2472_, 1, v___x_2471_);
v___x_2473_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__2));
v___x_2474_ = l_Lean_Name_mkStr4(v___x_2440_, v___x_2441_, v___y_2451_, v___x_2473_);
v___x_2475_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__3));
v___x_2476_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2476_, 0, v___y_2443_);
lean_ctor_set(v___x_2476_, 1, v___x_2475_);
lean_inc(v___y_2447_);
v___x_2477_ = l_Lean_Syntax_node3(v___y_2443_, v___x_2464_, v___x_2466_, v___y_2447_, v___x_2467_);
v___x_2478_ = l_Lean_Syntax_node2(v___y_2443_, v___x_2474_, v___x_2476_, v___x_2477_);
v___x_2479_ = l_Lean_Syntax_node4(v___y_2443_, v___x_2460_, v___x_2462_, v___x_2470_, v___x_2472_, v___x_2478_);
v___x_2480_ = l_Lean_Syntax_node1(v___y_2443_, v___y_2449_, v___x_2479_);
v___x_2481_ = l_Lean_Syntax_node1(v___y_2443_, v___x_2458_, v___x_2480_);
lean_inc_n(v___y_2450_, 2);
lean_inc_ref_n(v___x_2455_, 2);
v___x_2482_ = l_Lean_Syntax_node6(v___y_2443_, v___x_2454_, v___x_2455_, v___x_2455_, v___y_2450_, v___x_2456_, v___x_2455_, v___x_2481_);
v___x_2483_ = l_Lean_Elab_Command_isLocalAttrKind(v___y_2450_);
if (v___x_2483_ == 0)
{
lean_object* v___x_2484_; 
v___x_2484_ = l_Lean_Elab_Command_elabCommand(v___x_2482_, v___y_2446_, v___y_2445_);
if (lean_obj_tag(v___x_2484_) == 0)
{
lean_dec_ref_known(v___x_2484_, 1);
v___y_2414_ = v___y_2447_;
v___y_2415_ = v___y_2448_;
v___y_2416_ = v___y_2450_;
v___y_2417_ = v___y_2446_;
v___y_2418_ = v___y_2445_;
goto v___jp_2413_;
}
else
{
lean_dec(v___y_2450_);
lean_dec(v___y_2448_);
lean_dec(v___y_2447_);
return v___x_2484_;
}
}
else
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v_scopes_2487_; lean_object* v___x_2488_; lean_object* v_opts_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___f_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; 
v___x_2485_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2486_ = lean_st_ref_get(v___y_2445_);
v_scopes_2487_ = lean_ctor_get(v___x_2486_, 2);
lean_inc(v_scopes_2487_);
lean_dec(v___x_2486_);
v___x_2488_ = l_List_head_x21___redArg(v___x_2485_, v_scopes_2487_);
lean_dec(v_scopes_2487_);
v_opts_2489_ = lean_ctor_get(v___x_2488_, 1);
lean_inc_ref(v_opts_2489_);
lean_dec(v___x_2488_);
v___x_2490_ = l_Lean_Elab_Term_Quotation_quotPrecheck_allowSectionVars;
v___x_2491_ = l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6(v_opts_2489_, v___x_2490_, v___x_2483_);
v___f_2492_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNotation___lam__0), 2, 1);
lean_closure_set(v___f_2492_, 0, v___x_2491_);
v___x_2493_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabCommand___boxed), 4, 1);
lean_closure_set(v___x_2493_, 0, v___x_2482_);
v___x_2494_ = l_Lean_Elab_Command_withScope___redArg(v___f_2492_, v___x_2493_, v___y_2446_, v___y_2445_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_dec_ref_known(v___x_2494_, 1);
v___y_2414_ = v___y_2447_;
v___y_2415_ = v___y_2448_;
v___y_2416_ = v___y_2450_;
v___y_2417_ = v___y_2446_;
v___y_2418_ = v___y_2445_;
goto v___jp_2413_;
}
else
{
lean_dec(v___y_2450_);
lean_dec(v___y_2448_);
lean_dec(v___y_2447_);
return v___x_2494_;
}
}
}
v___jp_2495_:
{
size_t v_sz_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; size_t v_sz_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; 
v_sz_2510_ = lean_array_size(v___y_2509_);
v___x_2511_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4(v_sz_2510_, v___y_2496_, v___y_2509_);
v___x_2512_ = l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote(v___x_2511_, v___y_2502_);
lean_dec_ref(v___x_2511_);
v_sz_2513_ = lean_array_size(v___y_2498_);
v___x_2514_ = lean_box_usize(v_sz_2513_);
v___x_2515_ = lean_box_usize(v___y_2496_);
v___x_2516_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___boxed), 5, 3);
lean_closure_set(v___x_2516_, 0, v___x_2514_);
lean_closure_set(v___x_2516_, 1, v___x_2515_);
lean_closure_set(v___x_2516_, 2, v___y_2498_);
v___x_2517_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v___x_2516_, v___y_2497_, v___y_2504_);
if (lean_obj_tag(v___x_2517_) == 0)
{
lean_object* v_a_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; 
v_a_2518_ = lean_ctor_get(v___x_2517_, 0);
lean_inc(v_a_2518_);
lean_dec_ref_known(v___x_2517_, 1);
v___x_2519_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2519_, 0, v___y_2503_);
lean_ctor_set(v___x_2519_, 1, v___y_2500_);
lean_ctor_set(v___x_2519_, 2, v_a_2518_);
v___x_2520_ = l_Lean_Elab_Command_getRef___redArg(v___y_2497_);
if (lean_obj_tag(v___x_2520_) == 0)
{
lean_object* v_a_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; 
v_a_2521_ = lean_ctor_get(v___x_2520_, 0);
lean_inc(v_a_2521_);
lean_dec_ref_known(v___x_2520_, 1);
v___x_2522_ = l_Lean_SourceInfo_fromRef(v_a_2521_, v___y_2505_);
lean_dec(v_a_2521_);
v___x_2523_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2497_);
if (lean_obj_tag(v___x_2523_) == 0)
{
lean_object* v_quotContext_x3f_2524_; 
lean_dec_ref_known(v___x_2523_, 1);
v_quotContext_x3f_2524_ = lean_ctor_get(v___y_2497_, 5);
if (lean_obj_tag(v_quotContext_x3f_2524_) == 0)
{
lean_object* v___x_2525_; 
v___x_2525_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(v___y_2504_);
lean_dec_ref(v___x_2525_);
v___y_2443_ = v___x_2522_;
v___y_2444_ = v___y_2501_;
v___y_2445_ = v___y_2504_;
v___y_2446_ = v___y_2497_;
v___y_2447_ = v___x_2512_;
v___y_2448_ = v___x_2519_;
v___y_2449_ = v___y_2506_;
v___y_2450_ = v___y_2499_;
v___y_2451_ = v___y_2507_;
v___y_2452_ = v___y_2508_;
goto v___jp_2442_;
}
else
{
v___y_2443_ = v___x_2522_;
v___y_2444_ = v___y_2501_;
v___y_2445_ = v___y_2504_;
v___y_2446_ = v___y_2497_;
v___y_2447_ = v___x_2512_;
v___y_2448_ = v___x_2519_;
v___y_2449_ = v___y_2506_;
v___y_2450_ = v___y_2499_;
v___y_2451_ = v___y_2507_;
v___y_2452_ = v___y_2508_;
goto v___jp_2442_;
}
}
else
{
lean_object* v_a_2526_; lean_object* v___x_2528_; uint8_t v_isShared_2529_; uint8_t v_isSharedCheck_2533_; 
lean_dec(v___x_2522_);
lean_dec_ref_known(v___x_2519_, 3);
lean_dec(v___x_2512_);
lean_dec(v___y_2499_);
v_a_2526_ = lean_ctor_get(v___x_2523_, 0);
v_isSharedCheck_2533_ = !lean_is_exclusive(v___x_2523_);
if (v_isSharedCheck_2533_ == 0)
{
v___x_2528_ = v___x_2523_;
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
else
{
lean_inc(v_a_2526_);
lean_dec(v___x_2523_);
v___x_2528_ = lean_box(0);
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
v_resetjp_2527_:
{
lean_object* v___x_2531_; 
if (v_isShared_2529_ == 0)
{
v___x_2531_ = v___x_2528_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_a_2526_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
return v___x_2531_;
}
}
}
}
else
{
lean_object* v_a_2534_; lean_object* v___x_2536_; uint8_t v_isShared_2537_; uint8_t v_isSharedCheck_2541_; 
lean_dec_ref_known(v___x_2519_, 3);
lean_dec(v___x_2512_);
lean_dec(v___y_2499_);
v_a_2534_ = lean_ctor_get(v___x_2520_, 0);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2520_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2536_ = v___x_2520_;
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
else
{
lean_inc(v_a_2534_);
lean_dec(v___x_2520_);
v___x_2536_ = lean_box(0);
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
v_resetjp_2535_:
{
lean_object* v___x_2539_; 
if (v_isShared_2537_ == 0)
{
v___x_2539_ = v___x_2536_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v_a_2534_);
v___x_2539_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
return v___x_2539_;
}
}
}
}
else
{
lean_object* v_a_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2549_; 
lean_dec(v___x_2512_);
lean_dec(v___y_2503_);
lean_dec(v___y_2500_);
lean_dec(v___y_2499_);
v_a_2542_ = lean_ctor_get(v___x_2517_, 0);
v_isSharedCheck_2549_ = !lean_is_exclusive(v___x_2517_);
if (v_isSharedCheck_2549_ == 0)
{
v___x_2544_ = v___x_2517_;
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_a_2542_);
lean_dec(v___x_2517_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2547_; 
if (v_isShared_2545_ == 0)
{
v___x_2547_ = v___x_2544_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v_a_2542_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation___boxed(lean_object* v_x_2916_, lean_object* v_a_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = l_Lean_Elab_Command_elabNotation(v_x_2916_, v_a_2917_, v_a_2918_);
lean_dec(v_a_2918_);
lean_dec_ref(v_a_2917_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2(lean_object* v_00_u03b1_2921_, lean_object* v_x_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_){
_start:
{
lean_object* v___x_2925_; 
v___x_2925_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(v_x_2922_, v___y_2924_);
return v___x_2925_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___boxed(lean_object* v_00_u03b1_2926_, lean_object* v_x_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_){
_start:
{
lean_object* v_res_2930_; 
v_res_2930_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2(v_00_u03b1_2926_, v_x_2927_, v___y_2928_, v___y_2929_);
lean_dec_ref(v___y_2928_);
lean_dec_ref(v_x_2927_);
return v_res_2930_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7(lean_object* v_00_u03b1_2931_, lean_object* v_ref_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_){
_start:
{
lean_object* v___x_2936_; 
v___x_2936_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg(v_ref_2932_);
return v___x_2936_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___boxed(lean_object* v_00_u03b1_2937_, lean_object* v_ref_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_){
_start:
{
lean_object* v_res_2942_; 
v_res_2942_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7(v_00_u03b1_2937_, v_ref_2938_, v___y_2939_, v___y_2940_);
lean_dec(v___y_2940_);
lean_dec_ref(v___y_2939_);
return v_res_2942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1(lean_object* v_00_u03b1_2943_, lean_object* v_x_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_){
_start:
{
lean_object* v___x_2948_; 
v___x_2948_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v_x_2944_, v___y_2945_, v___y_2946_);
return v___x_2948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___boxed(lean_object* v_00_u03b1_2949_, lean_object* v_x_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_){
_start:
{
lean_object* v_res_2954_; 
v_res_2954_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1(v_00_u03b1_2949_, v_x_2950_, v___y_2951_, v___y_2952_);
lean_dec(v___y_2952_);
lean_dec_ref(v___y_2951_);
return v_res_2954_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3(lean_object* v_msgData_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_){
_start:
{
lean_object* v___x_2959_; 
v___x_2959_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(v_msgData_2955_, v___y_2957_);
return v___x_2959_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___boxed(lean_object* v_msgData_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_){
_start:
{
lean_object* v_res_2964_; 
v_res_2964_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3(v_msgData_2960_, v___y_2961_, v___y_2962_);
lean_dec(v___y_2962_);
lean_dec_ref(v___y_2961_);
return v_res_2964_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4(lean_object* v_as_2965_, lean_object* v_as_x27_2966_, lean_object* v_b_2967_, lean_object* v_a_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_){
_start:
{
lean_object* v___x_2972_; 
v___x_2972_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg(v_as_x27_2966_, v_b_2967_, v___y_2969_, v___y_2970_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___boxed(lean_object* v_as_2973_, lean_object* v_as_x27_2974_, lean_object* v_b_2975_, lean_object* v_a_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_){
_start:
{
lean_object* v_res_2980_; 
v_res_2980_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4(v_as_2973_, v_as_x27_2974_, v_b_2975_, v_a_2976_, v___y_2977_, v___y_2978_);
lean_dec(v___y_2978_);
lean_dec_ref(v___y_2977_);
lean_dec(v_as_x27_2974_);
lean_dec(v_as_2973_);
return v_res_2980_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6(lean_object* v_00_u03b1_2981_, lean_object* v_ref_2982_, lean_object* v_msg_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_){
_start:
{
lean_object* v___x_2987_; 
v___x_2987_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg(v_ref_2982_, v_msg_2983_, v___y_2984_, v___y_2985_);
return v___x_2987_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___boxed(lean_object* v_00_u03b1_2988_, lean_object* v_ref_2989_, lean_object* v_msg_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_){
_start:
{
lean_object* v_res_2994_; 
v_res_2994_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6(v_00_u03b1_2988_, v_ref_2989_, v_msg_2990_, v___y_2991_, v___y_2992_);
lean_dec(v___y_2992_);
lean_dec_ref(v___y_2991_);
lean_dec(v_ref_2989_);
return v_res_2994_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8(lean_object* v_00_u03b2_2995_, lean_object* v_m_2996_, lean_object* v_a_2997_){
_start:
{
lean_object* v___x_2998_; 
v___x_2998_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg(v_m_2996_, v_a_2997_);
return v___x_2998_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___boxed(lean_object* v_00_u03b2_2999_, lean_object* v_m_3000_, lean_object* v_a_3001_){
_start:
{
lean_object* v_res_3002_; 
v_res_3002_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8(v_00_u03b2_2999_, v_m_3000_, v_a_3001_);
lean_dec(v_a_3001_);
lean_dec_ref(v_m_3000_);
return v_res_3002_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12(lean_object* v_00_u03b1_3003_, lean_object* v_msg_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_){
_start:
{
lean_object* v___x_3008_; 
v___x_3008_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg(v_msg_3004_, v___y_3005_, v___y_3006_);
return v___x_3008_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___boxed(lean_object* v_00_u03b1_3009_, lean_object* v_msg_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_){
_start:
{
lean_object* v_res_3014_; 
v_res_3014_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12(v_00_u03b1_3009_, v_msg_3010_, v___y_3011_, v___y_3012_);
lean_dec(v___y_3012_);
lean_dec_ref(v___y_3011_);
return v_res_3014_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15(lean_object* v_00_u03b2_3015_, lean_object* v_x_3016_, lean_object* v_x_3017_){
_start:
{
uint8_t v___x_3018_; 
v___x_3018_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg(v_x_3016_, v_x_3017_);
return v___x_3018_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___boxed(lean_object* v_00_u03b2_3019_, lean_object* v_x_3020_, lean_object* v_x_3021_){
_start:
{
uint8_t v_res_3022_; lean_object* v_r_3023_; 
v_res_3022_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15(v_00_u03b2_3019_, v_x_3020_, v_x_3021_);
lean_dec_ref(v_x_3021_);
lean_dec_ref(v_x_3020_);
v_r_3023_ = lean_box(v_res_3022_);
return v_r_3023_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18(lean_object* v_00_u03b2_3024_, lean_object* v_a_3025_, lean_object* v_x_3026_){
_start:
{
lean_object* v___x_3027_; 
v___x_3027_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___redArg(v_a_3025_, v_x_3026_);
return v___x_3027_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18___boxed(lean_object* v_00_u03b2_3028_, lean_object* v_a_3029_, lean_object* v_x_3030_){
_start:
{
lean_object* v_res_3031_; 
v_res_3031_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__18(v_00_u03b2_3028_, v_a_3029_, v_x_3030_);
lean_dec(v_x_3030_);
lean_dec(v_a_3029_);
return v_res_3031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23(lean_object* v_msgData_3032_, lean_object* v_macroStack_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_){
_start:
{
lean_object* v___x_3037_; 
v___x_3037_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___redArg(v_msgData_3032_, v_macroStack_3033_, v___y_3035_);
return v___x_3037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23___boxed(lean_object* v_msgData_3038_, lean_object* v_macroStack_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_){
_start:
{
lean_object* v_res_3043_; 
v_res_3043_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__23(v_msgData_3038_, v_macroStack_3039_, v___y_3040_, v___y_3041_);
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3040_);
return v_res_3043_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19(lean_object* v_00_u03b2_3044_, lean_object* v_x_3045_, size_t v_x_3046_, lean_object* v_x_3047_){
_start:
{
uint8_t v___x_3048_; 
v___x_3048_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg(v_x_3045_, v_x_3046_, v_x_3047_);
return v___x_3048_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___boxed(lean_object* v_00_u03b2_3049_, lean_object* v_x_3050_, lean_object* v_x_3051_, lean_object* v_x_3052_){
_start:
{
size_t v_x_23680__boxed_3053_; uint8_t v_res_3054_; lean_object* v_r_3055_; 
v_x_23680__boxed_3053_ = lean_unbox_usize(v_x_3051_);
lean_dec(v_x_3051_);
v_res_3054_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19(v_00_u03b2_3049_, v_x_3050_, v_x_23680__boxed_3053_, v_x_3052_);
lean_dec_ref(v_x_3052_);
lean_dec_ref(v_x_3050_);
v_r_3055_ = lean_box(v_res_3054_);
return v_r_3055_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23(lean_object* v_00_u03b2_3056_, lean_object* v_keys_3057_, lean_object* v_vals_3058_, lean_object* v_heq_3059_, lean_object* v_i_3060_, lean_object* v_k_3061_){
_start:
{
uint8_t v___x_3062_; 
v___x_3062_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg(v_keys_3057_, v_i_3060_, v_k_3061_);
return v___x_3062_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___boxed(lean_object* v_00_u03b2_3063_, lean_object* v_keys_3064_, lean_object* v_vals_3065_, lean_object* v_heq_3066_, lean_object* v_i_3067_, lean_object* v_k_3068_){
_start:
{
uint8_t v_res_3069_; lean_object* v_r_3070_; 
v_res_3069_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23(v_00_u03b2_3063_, v_keys_3064_, v_vals_3065_, v_heq_3066_, v_i_3067_, v_k_3068_);
lean_dec_ref(v_k_3068_);
lean_dec_ref(v_vals_3065_);
lean_dec_ref(v_keys_3064_);
v_r_3070_ = lean_box(v_res_3069_);
return v_r_3070_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1(){
_start:
{
lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3078_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_3079_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__5));
v___x_3080_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1));
v___x_3081_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNotation___boxed), 4, 0);
v___x_3082_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3078_, v___x_3079_, v___x_3080_, v___x_3081_);
return v___x_3082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___boxed(lean_object* v_a_3083_){
_start:
{
lean_object* v_res_3084_; 
v_res_3084_ = l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1();
return v_res_3084_;
}
}
lean_object* runtime_initialize_Lean_Elab_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_AuxDef(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_BuiltinNotation(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Notation(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_AuxDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinNotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Notation(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_AuxDef(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinNotation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Notation(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_AuxDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinNotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Notation(builtin);
}
#ifdef __cplusplus
}
#endif
